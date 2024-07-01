module vxu
    import cva5_config::*;
    import riscv_types::*;
    import cva5_types::*;
    import cxu_types::*;
    import cx_dma_types::*;
    import opcodes::*;
    #(
        parameter STATE_ID_WIDTH      = 1,
        parameter QUEUE_DEPTH         = 8,
        parameter MAX_READ_IN_FLIGHT  = 1,
        parameter MAX_WRITE_IN_FLIGHT = 1
    )
    (
        input logic i_clk,
        input logic i_rst,
        cxu_interface.slave     s_cxu,
        gen_interface.slave     s_alloc_resp,
        gen_interface.slave     s_lkup_resp,
        gen_interface.master    m_alloc_req,
        gen_interface.master    m_lkup_req,
        gen_interface.master    m_read_req,
        gen_interface.master    m_write_req,
        stream_interface.slave  s_read_stream,
        stream_interface.master m_write_stream
    );

    genvar q, r;

    typedef enum int unsigned {
      VM  = 0,
      VS1 = 1,
      VS2 = 2,
      VS3 = 3,
      VD  = 4
    } addr_attr_t;

    // RVV-LITE
    localparam VLEN               = 1024;             // vector length in bits
    localparam XLEN               = 32;               // not sure; data width maybe?
    localparam INSN_WIDTH         = 32;               // width of a single instruction
    localparam ADDR_WIDTH         = STATE_ID_WIDTH+5; // 5 bits for 32 vector regs
    localparam DATA_WIDTH         = 64;
    localparam MEM_ADDR_WIDTH     = 32;               // We need to get this from VexRiscV
    localparam MEM_DATA_WIDTH     = DATA_WIDTH;
    localparam NUM_VREGS          = 2**ADDR_WIDTH;    // number of available vector registers

    localparam ENABLE_64_BIT      = 1;
    localparam AND_OR_XOR_ENABLE  = 1;
    localparam ADD_SUB_ENABLE     = 1;
    localparam MIN_MAX_ENABLE     = 1;
    localparam MASK_ENABLE        = 1;
    localparam VEC_MOVE_ENABLE    = 1;
    localparam WHOLE_REG_ENABLE   = 1;
    localparam SLIDE_ENABLE       = 1;
    localparam WIDEN_ADD_ENABLE   = 0;
    localparam REDUCTION_ENABLE   = 0;
    localparam MULT_ENABLE        = 1;
    localparam SHIFT_ENABLE       = 1;
    localparam MULH_SR_ENABLE     = 1;
    localparam MULH_SR_32_ENABLE  = 1;
    localparam WIDEN_MUL_ENABLE   = 1;
    localparam NARROW_ENABLE      = 1;
    localparam SLIDE_N_ENABLE     = 0;
    localparam MULT64_ENABLE      = 1;
    localparam SHIFT64_ENABLE     = 1;
    localparam FXP_ENABLE         = 0;
    localparam MASK_ENABLE_EXT    = 0;
    localparam EN_128_MUL         = 1;
    
    logic rvv_req_ready;
    logic rvv_req_valid;
    logic [STATE_ID_WIDTH-1:0] rvv_req_state;
    logic [INSN_WIDTH-1:0]     rvv_req_insn;
    read_attr_t rvv_req_read_attr;
    track_id_t  rvv_req_track_id;
    logic [XLEN-1:0] rvv_req_data0;
    logic [XLEN-1:0] rvv_req_data1;
    logic rvv_resp_valid;
    logic [XLEN-1:0] rvv_resp_data;

    logic scoreboard [NUM_VREGS];

    logic [C_M_CXU_REQ_ID_W-1:0] rvv_req_id;

    rvv_proc_main #(
      .VLEN(VLEN),
      .XLEN(XLEN),
      .INSN_WIDTH(INSN_WIDTH),
      .ADDR_WIDTH(ADDR_WIDTH),
      .DATA_WIDTH(DATA_WIDTH),
      .MEM_ADDR_WIDTH(MEM_ADDR_WIDTH),
      .MEM_DATA_WIDTH(MEM_DATA_WIDTH),
      .NUM_VREGS(NUM_VREGS),
      .STATE_ID_WIDTH(STATE_ID_WIDTH),
      .MAX_READ_IN_FLIGHT(MAX_READ_IN_FLIGHT),
      .MAX_WRITE_IN_FLIGHT(MAX_WRITE_IN_FLIGHT),
      .ENABLE_64_BIT(ENABLE_64_BIT),
      .AND_OR_XOR_ENABLE(AND_OR_XOR_ENABLE),
      .ADD_SUB_ENABLE(ADD_SUB_ENABLE),
      .MIN_MAX_ENABLE(MIN_MAX_ENABLE),
      .MASK_ENABLE(MASK_ENABLE),
      .VEC_MOVE_ENABLE(VEC_MOVE_ENABLE),
      .WHOLE_REG_ENABLE(WHOLE_REG_ENABLE),
      .SLIDE_ENABLE(SLIDE_ENABLE),
      .WIDEN_ADD_ENABLE(WIDEN_ADD_ENABLE),
      .REDUCTION_ENABLE(REDUCTION_ENABLE),
      .MULT_ENABLE(MULT_ENABLE),
      .SHIFT_ENABLE(SHIFT_ENABLE),
      .MULH_SR_ENABLE(MULH_SR_ENABLE),
      .MULH_SR_32_ENABLE(MULH_SR_32_ENABLE),
      .WIDEN_MUL_ENABLE(WIDEN_MUL_ENABLE),
      .NARROW_ENABLE(NARROW_ENABLE),
      .SLIDE_N_ENABLE(SLIDE_N_ENABLE),
      .MULT64_ENABLE(MULT64_ENABLE),
      .SHIFT64_ENABLE(SHIFT64_ENABLE),
      .FXP_ENABLE(FXP_ENABLE),
      .MASK_ENABLE_EXT(MASK_ENABLE_EXT),
      .EN_128_MUL(EN_128_MUL)) 
    rvv_proc_main_block (
      .clk(i_clk), 
      .rst(i_rst),
      .req_ready(rvv_req_ready),
      .req_valid(rvv_req_valid), 
      .req_state(rvv_req_state),
      .req_insn(rvv_req_insn), 
      .req_read_attr(rvv_req_read_attr),
      .req_track_id(rvv_req_track_id),
      .req_vxrm(3'b0), //FIXME VFU CSR
      .req_data0(rvv_req_data0), 
      .req_data1(rvv_req_data1), 
      .resp_valid(rvv_resp_valid),
      .resp_data(rvv_resp_data),
      .m_read_req(m_read_req),
      .m_write_req(m_write_req),
      .s_read_stream(s_read_stream),
      .m_write_stream(m_write_stream),
      .read_scoreboard(scoreboard));

    ////////////////////////////////////////////////////
    // Counter for reads to commit and issue
    ////////////////////////////////////////////////////

    logic read_done [NUM_QUEUES];
    logic read_committed [NUM_QUEUES];
    logic [$clog2(MAX_READ_IN_FLIGHT)+1-1:0] reads_to_commit [NUM_QUEUES];

    for (q = 0; q < NUM_QUEUES; ++q) begin
      always_comb begin
        read_done[q] = s_read_stream.tready & s_read_stream.tvalid & s_read_stream.tlast &
                       s_read_stream.tid[TRACK_ID_WIDTH +: STATE_ID_WIDTH] == q;
        read_committed[q] = read_queue_pops[q];
      end

      always_ff @ (posedge i_clk) begin
        reads_to_commit[q] <= reads_to_commit[q] + 
                              ($clog2(MAX_READ_IN_FLIGHT)+1)'(read_done[q]) - 
                              ($clog2(MAX_READ_IN_FLIGHT)+1)'(read_committed[q]);
        if (i_rst) begin
          reads_to_commit[q] <= 0;
        end
      end
    end

    logic scoreboard_update [NUM_QUEUES];
    logic [$clog2(MAX_READ_IN_FLIGHT)+1-1:0] reads_to_issue [NUM_QUEUES];

    for (q = 0; q < NUM_QUEUES; ++q) begin
      always_ff @ (posedge i_clk) begin
        scoreboard_update[q] <= rvv_req_ready & rvv_req_valid & rvv_req_state == q & 
                                is_cx_mem_read(rvv_req_insn) & rvv_req_read_attr == READ_ISSUE;
        reads_to_issue[q] <= reads_to_issue[q] + 
                             ($clog2(MAX_READ_IN_FLIGHT)+1)'(read_queue_pushs[q]) - 
                             ($clog2(MAX_READ_IN_FLIGHT)+1)'(scoreboard_update[q]);
        if (i_rst) begin
          scoreboard_update[q] <= 0;
          reads_to_issue[q] <= 0;
        end
      end
    end

    ////////////////////////////////////////////////////
    // Instruction stall
    ////////////////////////////////////////////////////

    function logic stall_insn (logic [STATE_ID_WIDTH-1:0] state,
                               logic [C_M_CXU_INSN_W-1:0] insn,
                               logic scoreboard [NUM_VREGS],
                               logic read_queue_valid);
      logic raw;
      logic waw;
      logic wait_cfg;

      raw = (uses_addr(insn, VS1) & scoreboard[get_addr(state, insn, VS1)]) |
            (uses_addr(insn, VS2) & scoreboard[get_addr(state, insn, VS2)]) |
            (uses_addr(insn, VS3) & scoreboard[get_addr(state, insn, VS3)]) |
            (uses_addr(insn, VM)  & (scoreboard[get_addr(state, insn, VM)] | 
                                     scoreboard[get_addr(state, insn, VD)]));
      waw = uses_addr(insn, VD) & scoreboard[get_addr(state, insn, VD)];
      wait_cfg = is_cx_cfg(insn) & read_queue_valid;

      return raw | waw | wait_cfg;
    endfunction

    logic insn_queue_stalls [NUM_QUEUES];

    for (q = 0; q < NUM_QUEUES; ++q) begin
      assign insn_queue_stalls[q] = stall_insn(q, insn_queue_data_outs[q][0 +: C_M_CXU_INSN_W], 
                                               scoreboard, read_queue_valids[q]);
    end

    ////////////////////////////////////////////////////
    // Instruction queues
    ////////////////////////////////////////////////////

    localparam int NUM_QUEUES  = 2**STATE_ID_WIDTH;
    localparam int QUEUE_WIDTH = TRACK_ID_WIDTH+2*C_M_CXU_DATA_W+C_M_CXU_REQ_ID_W+C_M_CXU_INSN_W;

    logic insn_queue_pops [NUM_QUEUES];
    logic insn_queue_pushs [NUM_QUEUES];
    logic insn_queue_fulls [NUM_QUEUES];
    logic insn_queue_valids [NUM_QUEUES];
    logic [QUEUE_WIDTH-1:0] insn_queue_data_outs [NUM_QUEUES];
    logic insn_queue_reads [NUM_QUEUES];

    logic read_queue_pops [NUM_QUEUES];
    logic read_queue_pushs [NUM_QUEUES];
    logic read_queue_fulls [NUM_QUEUES];
    logic read_queue_valids [NUM_QUEUES];
    logic [QUEUE_WIDTH-1:0] read_queue_data_outs [NUM_QUEUES];

    fifo_interface #(.DATA_WIDTH(QUEUE_WIDTH)) insn_queues [NUM_QUEUES] ();
    fifo_interface #(.DATA_WIDTH(QUEUE_WIDTH)) read_queues [NUM_QUEUES] ();

    for (q = 0; q < NUM_QUEUES; ++q) begin
      cva5_fifo #(
        .DATA_WIDTH(QUEUE_WIDTH), 
        .FIFO_DEPTH(QUEUE_DEPTH)) 
      insn_queue_block (
        .clk (i_clk),
        .rst (i_rst),
        .fifo (insn_queues[q]));

      always_comb begin
        insn_queues[q].potential_pop   = ready_ins[1*NUM_QUEUES+q] & valid_ins[1*NUM_QUEUES+q];
        insn_queues[q].potential_push  = cxu_req_buffer.pop & cxu_req_packet_out.state == q & 
                                         ~is_cx_fence(cxu_req_packet_out.insn, cxu_req_packet_out.func) &
                                         ~is_cx_perf(cxu_req_packet_out.insn, cxu_req_packet_out.func);
        insn_queues[q].pop             = insn_queues[q].potential_pop;
        insn_queues[q].push            = insn_queues[q].potential_push;
        insn_queues[q].data_in         = {s_alloc_resp.data, 
                                          cxu_req_packet_out.id, 
                                          cxu_req_packet_out.data1,
                                          cxu_req_packet_out.data0, 
                                          cxu_req_packet_out.insn};
       
        insn_queue_pops[q]      = insn_queues[q].pop;
        insn_queue_pushs[q]     = insn_queues[q].push;
        insn_queue_fulls[q]     = insn_queues[q].full;
        insn_queue_valids[q]    = insn_queues[q].valid;
        insn_queue_data_outs[q] = insn_queues[q].data_out;
        insn_queue_reads[q]     = is_cx_mem_read(insn_queue_data_outs[q][0 +: C_M_CXU_INSN_W]);
      end

      cva5_fifo #(
        .DATA_WIDTH(QUEUE_WIDTH), 
        .FIFO_DEPTH(MAX_READ_IN_FLIGHT))
      read_queue_block (
        .clk (i_clk),
        .rst (i_rst),
        .fifo (read_queues[q]));

      always_comb begin
        read_queues[q].potential_pop   = ready_ins[0*NUM_QUEUES+q] & valid_ins[0*NUM_QUEUES+q];
        read_queues[q].potential_push  = insn_queue_pops[q] & insn_queue_reads[q]; 
        read_queues[q].pop             = read_queues[q].potential_pop;
        read_queues[q].push            = read_queues[q].potential_push;
        read_queues[q].data_in         = insn_queues[q].data_out;
       
        read_queue_pops[q]      = read_queues[q].pop;
        read_queue_pushs[q]     = read_queues[q].push;
        read_queue_fulls[q]     = read_queues[q].full;
        read_queue_valids[q]    = read_queues[q].valid;
        read_queue_data_outs[q] = read_queues[q].data_out;
      end
    end

    ////////////////////////////////////////////////////
    // Arbiters // TODO Rename
    ////////////////////////////////////////////////////

    logic [2*NUM_QUEUES*1-1:0] ready_ins;
    logic [2*NUM_QUEUES*1-1:0] valid_ins;
    logic [2*NUM_QUEUES*QUEUE_WIDTH-1:0] data_ins;
    logic [2*NUM_QUEUES*1-1:0] id_ins;

    logic [2*1-1:0] ready_ints;
    logic [2*1-1:0] valid_ints;
    logic [2*QUEUE_WIDTH-1:0] data_ints;
    logic [2*($clog2(NUM_QUEUES)+1)-1:0] id_ints;

    logic [1*1-1:0] ready_out;
    logic [1*1-1:0] valid_out;
    logic [1*QUEUE_WIDTH-1:0] data_out;
    logic [$clog2(2)+$clog2(NUM_QUEUES)+1-1:0] id_out;

    logic _dummy;

    // Round-robin arbiters for queues
    for (r = 0; r < 2; ++r) begin
      axis_arb_mux #(
        .S_COUNT(NUM_QUEUES),
        .DATA_WIDTH(QUEUE_WIDTH),
        .KEEP_ENABLE(0),
        .ID_ENABLE(1),
        .S_ID_WIDTH(1),
        .DEST_ENABLE(0),
        .USER_ENABLE(0),
        .LAST_ENABLE(0),
        .UPDATE_TID(1),
        .ARB_TYPE_ROUND_ROBIN(1),
        .ARB_LSB_HIGH_PRIORITY(1))
      arb_queue_block (
        .clk(i_clk),
        .rst(i_rst),
        .s_axis_tready(ready_ins[NUM_QUEUES*r*1 +: NUM_QUEUES*1]),
        .s_axis_tvalid(valid_ins[NUM_QUEUES*r*1 +: NUM_QUEUES*1]),
        .s_axis_tdata(data_ins[NUM_QUEUES*r*QUEUE_WIDTH +: NUM_QUEUES*QUEUE_WIDTH]),
        .s_axis_tid(id_ins[NUM_QUEUES*r*1 +: NUM_QUEUES*1]),
        .s_axis_tkeep('0),
        .s_axis_tlast('0),
        .s_axis_tdest('0),
        .s_axis_tuser('0),
        .m_axis_tready(ready_ints[r*1 +: 1]),
        .m_axis_tvalid(valid_ints[r*1 +: 1]),
        .m_axis_tdata(data_ints[r*QUEUE_WIDTH +: QUEUE_WIDTH]),
        .m_axis_tid(id_ints[r*($clog2(NUM_QUEUES)+1) +: $clog2(NUM_QUEUES)+1]),
        .m_axis_tkeep(),
        .m_axis_tlast(),
        .m_axis_tdest(),
        .m_axis_tuser());
    end

    // Priority arbiter for reads
    axis_arb_mux #(
      .S_COUNT(2),
      .DATA_WIDTH(QUEUE_WIDTH),
      .KEEP_ENABLE(0),
      .ID_ENABLE(1),
      .S_ID_WIDTH($clog2(NUM_QUEUES)+1),
      .DEST_ENABLE(0),
      .USER_ENABLE(0),
      .LAST_ENABLE(0),
      .UPDATE_TID(1),
      .ARB_TYPE_ROUND_ROBIN(0),
      .ARB_LSB_HIGH_PRIORITY(1))
    arb_queue_block (
      .clk(i_clk),
      .rst(i_rst),
      .s_axis_tready(ready_ints),
      .s_axis_tvalid(valid_ints),
      .s_axis_tdata(data_ints),
      .s_axis_tid(id_ints),
      .s_axis_tkeep('0),
      .s_axis_tlast('0),
      .s_axis_tdest('0),
      .s_axis_tuser('0),
      .m_axis_tready(ready_out),
      .m_axis_tvalid(valid_out),
      .m_axis_tdata(data_out),
      .m_axis_tid(id_out),
      .m_axis_tkeep(),
      .m_axis_tlast(),
      .m_axis_tdest(),
      .m_axis_tuser());

    for (q = 0; q < NUM_QUEUES; ++q) begin
      always_comb begin
        valid_ins[(0*NUM_QUEUES+q)*1 +: 1] = read_queue_valids[q] & |reads_to_commit[q] & ~id_buffers[RVV].full;
        valid_ins[(1*NUM_QUEUES+q)*1 +: 1] = insn_queue_valids[q] & ~(insn_queue_reads[q] ? read_queue_fulls[q] : 
                                                                                            |reads_to_issue[q] | 
                                                                                            insn_queue_stalls[q] | 
                                                                                            id_buffers[RVV].full);
        data_ins[(0*NUM_QUEUES+q)*QUEUE_WIDTH +: QUEUE_WIDTH] = read_queue_data_outs[q];
        data_ins[(1*NUM_QUEUES+q)*QUEUE_WIDTH +: QUEUE_WIDTH] = insn_queue_data_outs[q];
        id_ins[(0*NUM_QUEUES+q)*1 +: 1] = 1'b0;
        id_ins[(1*NUM_QUEUES+q)*1 +: 1] = 1'b0;
      end
    end
    
    always_comb begin
      ready_out = rvv_req_ready;
      rvv_req_valid = valid_out;
      {rvv_req_track_id, rvv_req_id, rvv_req_data1, rvv_req_data0, rvv_req_insn} = data_out;
      _dummy = id_out[0 +: 1];
      rvv_req_state = id_out[1 +: $clog2(NUM_QUEUES)]; 
      rvv_req_read_attr = id_out[$clog2(NUM_QUEUES)+1 +: $clog2(2)] ? READ_ISSUE : READ_COMMIT;
    end

    ////////////////////////////////////////////////////
    // Predecode
    ////////////////////////////////////////////////////

    localparam [32-1:0] CX_REG = 32'b???????_?????_?????_???_?????_0001011;
    localparam [10-1:0] CX_FUNC_FENCE_SCALAR       = 10'b111111000?;
    localparam [10-1:0] CX_FUNC_FENCE_SCALAR_READ  = 10'b1111110000;
    localparam [10-1:0] CX_FUNC_FENCE_SCALAR_WRITE = 10'b1111110001;
    localparam [10-1:0] CX_FUNC_FENCE_CXU          = 10'b111111001?;
    localparam [10-1:0] CX_FUNC_FENCE_CXU_READ     = 10'b1111110010;
    localparam [10-1:0] CX_FUNC_FENCE_CXU_WRITE    = 10'b1111110011;
    localparam [10-1:0] CX_FUNC_PERF               = 10'b00000?????;

    function logic [ADDR_WIDTH-1:0] get_addr (logic [STATE_ID_WIDTH-1:0] state,
                                              logic [C_M_CXU_INSN_W-1:0] insn,
                                              addr_attr_t addr_attr);
      unique case (addr_attr)
        VM:  return {state, 5'b0};
        VD:  return {state, insn[11:7]};
        VS1: return {state, insn[19:15]};
        VS2: return {state, insn[24:20]};
        VS3: return {state, insn[11:7]};
        default: return '0;
      endcase
    endfunction

    function logic uses_addr (logic [C_M_CXU_INSN_W-1:0] insn, 
                              addr_attr_t addr_attr);
      unique case (addr_attr)
        VM: begin
          return insn inside {VALU_CFG, VLOAD, VSTORE} & 
                 ~(insn inside {VCFG}) & 
                 ~(insn[25]);
        end

        VD: begin
          return insn inside {VLOAD} | 
                 (insn inside {VALU_OPIVV, VALU_OPMVV, VALU_OPIVI, VALU_OPIVX, VALU_OPMVX} & 
                  ~(insn inside {VMV_XS, VCPOP_M, VFIRST_M}));
        end

        VS1: begin
          return insn inside {VALU_OPIVV, VALU_OPMVV} & 
                 ~(insn inside {VID_V, VMV_XS, VCPOP_M, VFIRST_M});
        end

        VS2: begin
          return insn inside {VALU_OPIVV, VALU_OPMVV, VALU_OPIVI, VALU_OPIVX, VALU_OPMVX} & 
                 ~(insn inside {VID_V, VMV_SX, VMV_VV, VMV_VX, VMV_VI}); 
                 // Note: Include indexed mops when layer added
        end

        VS3: begin
          return insn inside {VSTORE};
        end

        default: begin
          return 1'b0;
        end
      endcase
    endfunction

    function logic is_cx_fence_read  (logic [C_M_CXU_INSN_W-1:0]    insn, 
                                      logic [C_M_CXU_FUNC_ID_W-1:0] func);
      return insn inside {CX_REG} && 
             func inside {CX_FUNC_FENCE_SCALAR_READ, 
                          CX_FUNC_FENCE_CXU_READ};
    endfunction

    function logic is_cx_fence_write (logic [C_M_CXU_INSN_W-1:0]    insn, 
                                      logic [C_M_CXU_FUNC_ID_W-1:0] func);
      return insn inside {CX_REG} && 
             func inside {CX_FUNC_FENCE_SCALAR_WRITE, 
                          CX_FUNC_FENCE_CXU_WRITE};
    endfunction

    function logic is_cx_fence (logic [C_M_CXU_INSN_W-1:0] insn,
                                logic [C_M_CXU_FUNC_ID_W-1:0] func);
      return is_cx_fence_read(insn, func) | is_cx_fence_write(insn, func);
    endfunction

    function logic is_cx_mem_read (logic [C_M_CXU_INSN_W-1:0] insn);
      return insn inside {VLE_8_V, VLE_16_V, VLE_32_V, VLE_64_V};
    endfunction

    function logic is_cx_mem_write (logic [C_M_CXU_INSN_W-1:0] insn);
      return insn inside {VSE_8_V, VSE_16_V, VSE_32_V, VSE_64_V};
    endfunction

    function logic is_cx_mem (logic [C_M_CXU_INSN_W-1:0] insn);
      return is_cx_mem_read(insn) | is_cx_mem_write(insn);
    endfunction

    function bit is_cx_cfg (logic [C_M_CXU_INSN_W-1:0] insn);
      return insn inside {VCFG};
    endfunction

    function logic is_cx_perf (logic [C_M_CXU_INSN_W-1:0]    insn, 
                               logic [C_M_CXU_FUNC_ID_W-1:0] func);
      return insn inside {CX_REG} && 
             func inside {CX_FUNC_PERF};
    endfunction

    vload_instruction_t  cx_mem_read_insn;
    vstore_instruction_t cx_mem_write_insn;
    logic [2-1:0] cx_mem_widths [2];

    always_comb begin
      cx_mem_read_insn  = cxu_req_packet_out.insn;
      cx_mem_write_insn = cxu_req_packet_out.insn;
      cx_mem_widths[READ]  = cx_mem_read_insn.width;
      cx_mem_widths[WRITE] = cx_mem_write_insn.width;
    end

    ////////////////////////////////////////////////////
    // Runahead cx_mem_len
    ////////////////////////////////////////////////////

    localparam VLMAX   = VLEN/8; 
    localparam VL_BITS = $clog2(VLMAX)+1;

    logic [VL_BITS-1:0] vls [NUM_QUEUES];
    logic [VL_BITS-1:0] cx_mem_len;

    for (q = 0; q < NUM_QUEUES; ++q) begin
      vcfg #(
        .XLEN(XLEN),
        .VLEN(VLEN),
        .VLMAX(VLMAX),
        .VL_BITS(VL_BITS),
        .ENABLE_64_BIT(ENABLE_64_BIT)) 
      vcfg_block (
        .clk(i_clk),
        .rst(i_rst),
        .valid(cxu_req_buffer.pop & is_cx_cfg(cxu_req_packet_out.insn) & cxu_req_packet_out.state == q),
        .insn(cxu_req_packet_out.insn),
        .rf('{cxu_req_packet_out.data0, cxu_req_packet_out.data1}),
        .vl(vls[q]),
        .vtype());
    end

    assign cx_mem_len = vls[cxu_req_packet_out.state] >> 
                        ($clog2(DATA_WIDTH/8) - cx_mem_widths[is_cx_mem_write(cxu_req_packet_out.insn)]);

    ////////////////////////////////////////////////////
    // Frontend
    ////////////////////////////////////////////////////

    typedef enum int unsigned {
      S_IDLE,
      S_LKUP_REQ,
      S_LKUP_RESP,
      S_ALLOC_REQ,
      S_ALLOC_RESP
    } state_t;

    typedef struct packed {
      logic [C_M_CXU_REQ_ID_W-1:0]   id;
      logic [C_M_CXU_CXU_ID_W-1:0]   cxu;
      logic [C_M_CXU_STATE_ID_W-1:0] state;
      logic [C_M_CXU_FUNC_ID_W-1:0]  func;
      logic [C_M_CXU_INSN_W-1:0]     insn;
      logic [C_M_CXU_DATA_W-1:0]     data0;
      logic [C_M_CXU_DATA_W-1:0]     data1;
    } cxu_req_packet_t;

    state_t state;
    cxu_req_packet_t cxu_req_packet_in;
    cxu_req_packet_t cxu_req_packet_out;
    track_entry_t track_entry;
    fifo_interface #(.DATA_WIDTH($bits(cxu_req_packet_t))) cxu_req_buffer ();

    cva5_fifo #(
      .DATA_WIDTH($bits(cxu_req_packet_t)), 
      .FIFO_DEPTH(8)) 
    cxu_req_buffer_block (
      .clk (i_clk),
      .rst (i_rst),
      .fifo (cxu_req_buffer));

    always_comb begin
      cxu_req_packet_in = '{id    : s_cxu.req_id,
                           cxu   : s_cxu.req_cxu,
                           state : s_cxu.req_state,
                           func  : s_cxu.req_func,
                           insn  : s_cxu.req_insn,
                           data0 : s_cxu.req_data0,
                           data1 : s_cxu.req_data1};
    end

    assign s_cxu.req_ready = ~cxu_req_buffer.full & ~id_buffers[FENCE].full & ~id_buffers[PERF].full;

    always_comb begin
      if (cxu_req_buffer.valid) begin
        if (is_cx_fence(cxu_req_packet_out.insn, cxu_req_packet_out.func)) begin
          cxu_req_buffer.potential_pop = state == S_LKUP_RESP  && 
                                         s_lkup_resp.ready && 
                                         s_lkup_resp.valid &&
                                         ~s_lkup_resp.data;
        end else if (is_cx_mem(cxu_req_packet_out.insn)) begin
          cxu_req_buffer.potential_pop = state == S_ALLOC_RESP  && 
                                         s_alloc_resp.ready && 
                                         s_alloc_resp.valid;
        end else begin
          cxu_req_buffer.potential_pop = ~insn_queue_fulls[cxu_req_packet_out.state];
        end
      end else begin
        cxu_req_buffer.potential_pop = 1'b0;
      end
      cxu_req_buffer.potential_push = s_cxu.req_ready & s_cxu.req_valid;

      cxu_req_buffer.pop  = cxu_req_buffer.potential_pop;
      cxu_req_buffer.push = cxu_req_buffer.potential_push;
    end

    always_comb begin
      cxu_req_buffer.data_in = cxu_req_packet_in;
      cxu_req_packet_out = cxu_req_buffer.data_out;
    end

    always_ff @(posedge i_clk) begin
      unique case (state)
        S_IDLE: begin
          if (cxu_req_buffer.valid) begin
            if (is_cx_fence(cxu_req_packet_out.insn, cxu_req_packet_out.func) || 
                 is_cx_mem(cxu_req_packet_out.insn)) begin
              state <= S_LKUP_REQ;
            end
          end
        end

        S_LKUP_REQ: begin
          if (m_lkup_req.ready && m_lkup_req.valid) begin
            state <= S_LKUP_RESP;
          end
        end

        S_LKUP_RESP: begin
          if (s_lkup_resp.ready && s_lkup_resp.valid) begin
            if (s_lkup_resp.data) begin
              state <= S_LKUP_REQ;
            end else if (is_cx_mem(cxu_req_packet_out.insn)) begin
              state <= S_ALLOC_REQ;
            end else begin
              state <= S_IDLE;
            end
          end
        end

        S_ALLOC_REQ: begin
          if (m_alloc_req.ready && m_alloc_req.valid) begin
            state <= S_ALLOC_RESP;
          end
        end

        S_ALLOC_RESP: begin
          if (s_alloc_resp.ready && s_alloc_resp.valid) begin
            state <= S_IDLE;
          end
        end

        default: begin
          state <= S_IDLE;
        end
      endcase

      if (i_rst) 
        state <= S_IDLE;
    end

    always_comb begin
      s_alloc_resp.ready = state == S_ALLOC_RESP ? ~insn_queue_fulls[cxu_req_packet_out.state] :
                           1'b0;
      s_lkup_resp.ready  = state == S_LKUP_RESP;
      m_alloc_req.valid  = state == S_ALLOC_REQ;
      m_lkup_req.valid   = state == S_LKUP_REQ;

      track_entry = is_cx_fence(cxu_req_packet_out.insn, cxu_req_packet_out.func) ? 
                    '{rw : is_cx_fence_write(cxu_req_packet_out.insn, cxu_req_packet_out.func),
                      base_address : cxu_req_packet_out.data0,
                      end_address  : cxu_req_packet_out.data1} :  
                    '{rw : is_cx_mem_write(cxu_req_packet_out.insn),
                      base_address : cxu_req_packet_out.data0,
                      end_address  : cxu_req_packet_out.data0 + (DATA_WIDTH/8) * cx_mem_len - 1};

      m_alloc_req.data = track_entry;
      m_lkup_req.data  = track_entry;
      m_alloc_req.id   = '0;
      m_lkup_req.id    = '0;
    end

    ////////////////////////////////////////////////////
    // Response priority arbiter FENCE-RVV
    ////////////////////////////////////////////////////

    localparam NUM_RESP_PORTS = 3;

    typedef enum bit [2-1:0] {
      FENCE = 0,
      RVV   = 1,
      PERF  = 2
    } resp_port_t;

    typedef struct packed {
      logic [C_M_CXU_DATA_W-1:0]    data;
      logic [C_M_CXU_STATUS_W-1:0]  status;
      logic [C_M_CXU_REQ_ID_W-1:0]  id;
    } cxu_resp_packet_t;

    cxu_resp_packet_t cxu_resp_packets [NUM_RESP_PORTS];
    logic cxu_resp_valids [NUM_RESP_PORTS];
    logic cxu_resp_readies [NUM_RESP_PORTS];

    axis_arb_mux #(
      .S_COUNT(NUM_RESP_PORTS),
      .DATA_WIDTH($bits(cxu_resp_packet_t)),
      .KEEP_ENABLE(0),
      .ID_ENABLE(0),
      .DEST_ENABLE(0),
      .USER_ENABLE(0),
      .LAST_ENABLE(0),
      .UPDATE_TID(0),
      .ARB_TYPE_ROUND_ROBIN(0),
      .ARB_LSB_HIGH_PRIORITY(1))
    arb_cxu_resp_block (
      .clk(i_clk),
      .rst(i_rst),
      .s_axis_tdata({cxu_resp_packets[PERF],cxu_resp_packets[RVV],cxu_resp_packets[FENCE]}),
      .s_axis_tvalid({cxu_resp_valids[PERF],cxu_resp_valids[RVV],cxu_resp_valids[FENCE]}),
      .s_axis_tready({cxu_resp_readies[PERF],cxu_resp_readies[RVV],cxu_resp_readies[FENCE]}),
      .s_axis_tkeep('0),
      .s_axis_tlast('0),
      .s_axis_tid('0),
      .s_axis_tdest('0),
      .s_axis_tuser('0),
      .m_axis_tdata({s_cxu.resp_data,s_cxu.resp_status,s_cxu.resp_id}),
      .m_axis_tvalid(s_cxu.resp_valid),
      .m_axis_tready(s_cxu.resp_ready),
      .m_axis_tkeep(),
      .m_axis_tlast(),
      .m_axis_tid(),
      .m_axis_tdest(),
      .m_axis_tuser());

    always_comb begin
      cxu_resp_valids[FENCE]   = id_buffers[FENCE].valid;
      cxu_resp_packets[FENCE]  = '{data   : '0,
                                  id     : id_buffers[FENCE].data_out, 
                                  status : '0};

      cxu_resp_valids[RVV]     = id_buffers[RVV].valid & data_buffers[RVV].valid;
      cxu_resp_packets[RVV]    = '{data   : data_buffers[RVV].data_out,
                                  id     : id_buffers[RVV].data_out, 
                                  status : '0};

      cxu_resp_valids[PERF]    = id_buffers[PERF].valid;
      cxu_resp_packets[PERF]   = '{data   : data_buffers[PERF].data_out, 
                                  id     : id_buffers[PERF].data_out, 
                                  status : '0};
    end

    ////////////////////////////////////////////////////
    // FENCE-RVV-PERF id buffers
    ////////////////////////////////////////////////////

    fifo_interface #(.DATA_WIDTH(C_M_CXU_REQ_ID_W)) id_buffers [NUM_RESP_PORTS] ();

    for (r = 0; r < NUM_RESP_PORTS; ++r) begin
      cva5_fifo #(
        .DATA_WIDTH(C_M_CXU_REQ_ID_W),
        .FIFO_DEPTH(8))  //TODO: Reduce FENCE id buffer's depth
      id_buffer_block (
        .clk (i_clk),
        .rst (i_rst),
        .fifo (id_buffers[r]));
    end

    always_comb begin
      id_buffers[FENCE].potential_pop  = cxu_resp_readies[FENCE] & id_buffers[FENCE].valid;
      id_buffers[FENCE].potential_push = cxu_req_buffer.pop & 
                                         is_cx_fence(cxu_req_packet_out.insn, cxu_req_packet_out.func);
      id_buffers[FENCE].pop  = id_buffers[FENCE].potential_pop;
      id_buffers[FENCE].push = id_buffers[FENCE].potential_push;
      id_buffers[FENCE].data_in = cxu_req_packet_out.id;

      id_buffers[RVV].potential_pop  = cxu_resp_readies[RVV] & id_buffers[RVV].valid & data_buffers[RVV].valid;
      id_buffers[RVV].potential_push = rvv_req_ready & rvv_req_valid &
                                       (is_cx_mem_read(rvv_req_insn) ? rvv_req_read_attr == READ_COMMIT : 1'b1);
      id_buffers[RVV].pop  = id_buffers[RVV].potential_pop;
      id_buffers[RVV].push = id_buffers[RVV].potential_push;
      id_buffers[RVV].data_in = rvv_req_id;

      id_buffers[PERF].potential_pop  = cxu_resp_readies[PERF] & id_buffers[PERF].valid;
      id_buffers[PERF].potential_push = cxu_req_buffer.pop & 
                                        is_cx_perf(cxu_req_packet_out.insn, cxu_req_packet_out.func);
      id_buffers[PERF].pop  = id_buffers[PERF].potential_pop;
      id_buffers[PERF].push = id_buffers[PERF].potential_push;
      id_buffers[PERF].data_in = cxu_req_packet_out.id;
    end

    ////////////////////////////////////////////////////
    // RVV data buffer
    ////////////////////////////////////////////////////

    //Note: FENCE data buffer unused
    fifo_interface #(.DATA_WIDTH(C_M_CXU_DATA_W)) data_buffers [NUM_RESP_PORTS] (); 

    for (r = 1; r < NUM_RESP_PORTS; ++r) begin
      cva5_fifo #(
        .DATA_WIDTH(C_M_CXU_DATA_W), 
        .FIFO_DEPTH(8)) 
      data_buffer_block (
        .clk (i_clk),
        .rst (i_rst),
        .fifo (data_buffers[r]));
    end

    always_comb begin
      data_buffers[RVV].potential_pop  = id_buffers[RVV].potential_pop;
      data_buffers[RVV].potential_push = rvv_resp_valid;

      data_buffers[RVV].pop  = data_buffers[RVV].potential_pop;
      data_buffers[RVV].push = data_buffers[RVV].potential_push;
      data_buffers[RVV].data_in = rvv_resp_data;

      data_buffers[PERF].potential_pop  = id_buffers[PERF].potential_pop;
      data_buffers[PERF].potential_push = id_buffers[PERF].potential_push;

      data_buffers[PERF].pop  = data_buffers[PERF].potential_pop;
      data_buffers[PERF].push = data_buffers[PERF].potential_push;
      data_buffers[PERF].data_in = cnts[cxu_req_packet_out.func];
    end

    ////////////////////////////////////////////////////
    // Performace counters
    ////////////////////////////////////////////////////

    localparam NUM_PERF_COUNTERS = 2; 

    typedef enum int unsigned {
      READY = 0,
      PROCESSED = 1
    } cnt_t;

    logic [32-1:0] cnts [NUM_PERF_COUNTERS];
    logic [32-1:0] running_cnt;

    always_ff @(posedge i_clk) begin
      if (rvv_req_ready) begin
        if (running_cnt > 0) begin
          running_cnt <= running_cnt + 1;
        end

        if (rvv_req_valid) begin
          cnts[PROCESSED] <= cnts[PROCESSED] + 1;
          cnts[READY] <= cnts[READY] + running_cnt;
          running_cnt <= 1;
        end
      end

      if (i_rst) begin
        running_cnt <= 0;
        for (int i = 0; i < NUM_PERF_COUNTERS; ++i) begin
          cnts[i] <= 0;
        end
      end
    end

    ////////////////////////////////////////////////////
    // Debug
    ////////////////////////////////////////////////////

    //always_ff @(negedge i_clk) begin
    //  if (cxu_req_buffer.push && cxu_req_packet_in.insn == 32'h0207ec27) begin
    //    $display("%t: Address: 0x%h", $time, cxu_req_packet_in.data0);
    //  end
    //end

endmodule
