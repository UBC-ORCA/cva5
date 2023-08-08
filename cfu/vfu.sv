module vfu
    import cva5_config::*;
    import riscv_types::*;
    import cva5_types::*;
    import cfu_types::*;

    (
        input logic clk,
        input logic rst,

        // INVALIDATION
        input  logic inv_ack,
        output logic inv_valid,
        output logic [32-1:0] inv_addr,
        
        axi64_interface.master axi64,
        cfu_interface.slave cfu
    );

    // RVV-LITE
    localparam VLEN               = 1024;            // vector length in bits
    localparam VLEN_B             = VLEN >> 3;        // same as VLMAX
    localparam VLEN_B_BITS        = $clog2(VLEN_B);
    localparam XLEN               = 32;               // not sure; data width maybe?
    localparam NUM_VEC            = 32;               // number of available vector registers
    localparam INSN_WIDTH         = 32;               // width of a single instruction
    localparam DATA_WIDTH         = 64;
    localparam DATA_WIDTH_BITS    = $clog2(DATA_WIDTH);
    localparam DW_B               = DATA_WIDTH>>3;    // DATA_WIDTH in bytes
    localparam DW_B_BITS          = DATA_WIDTH_BITS-3;
    localparam ADDR_WIDTH         = 5;                // 5 bits for 32 vector regs
    localparam MEM_ADDR_WIDTH     = 32;               // We need to get this from VexRiscV
    localparam MEM_DATA_WIDTH     = DATA_WIDTH;
    localparam MEM_DW_B           = MEM_DATA_WIDTH>>3;
    localparam VEX_DATA_WIDTH     = 32;
    localparam FIFO_DEPTH_BITS    = 11;
    localparam BYTE               = 8;
    localparam OFF_BITS           = $clog2(VLEN/DATA_WIDTH); // max value is 256 (16384/64)

    localparam ENABLE_64_BIT      = 1;
    localparam AND_OR_XOR_ENABLE  = 1;
    localparam ADD_SUB_ENABLE     = 1;
    localparam MIN_MAX_ENABLE     = 1;
    localparam MASK_ENABLE        = 1;
    localparam VEC_MOVE_ENABLE    = 1;
    localparam WHOLE_REG_ENABLE   = 1;
    localparam SLIDE_ENABLE       = 1;
    localparam WIDEN_ADD_ENABLE   = 1;
    localparam REDUCTION_ENABLE   = 1;
    localparam MULT_ENABLE        = 1;
    localparam SHIFT_ENABLE       = 1;
    localparam MULH_SR_ENABLE     = 1;
    localparam MULH_SR_32_ENABLE  = 1;
    localparam WIDEN_MUL_ENABLE   = 1;
    localparam NARROW_ENABLE      = 1;
    localparam SLIDE_N_ENABLE     = 1;
    localparam MULT64_ENABLE      = 1;
    localparam SHIFT64_ENABLE     = 1;
    localparam FXP_ENABLE         = 1;
    localparam MASK_ENABLE_EXT    = 1;
    localparam EN_128_MUL         = 1;
    
    localparam ID_WIDTH           = 6;

    logic [ID_WIDTH-1:0] ar_id;
    logic [3:0] ar_cache;
    logic [MEM_ADDR_WIDTH-1:0] ar_addr;
    logic [7:0] ar_len;
    logic [2:0] ar_size;
    logic [1:0] ar_burst;
    logic ar_valid;
    logic ar_ready;
    logic [ID_WIDTH-1:0] r_id;
    logic [DATA_WIDTH-1:0] r_data;
    logic [1:0] r_resp;
    logic r_last;
    logic r_valid;
    logic r_ready;
    logic [1:0] aw_burst;
    logic [2:0] aw_size;
    logic [3:0] aw_cache;
    logic [ID_WIDTH-1:0] aw_id;
    logic [7:0] aw_len;
    logic [MEM_ADDR_WIDTH-1:0] aw_addr;
    logic aw_valid;
    logic aw_ready;
    logic w_ready;
    logic w_valid;
    logic [DATA_WIDTH-1:0] w_data;
    logic [(DATA_WIDTH/8)-1:0] w_strb;
    logic w_last;
    logic b_valid;
    logic [1:0] b_resp;
    logic [ID_WIDTH-1:0] b_id;
    logic b_ready;

    logic [2:0] vxrm;
    logic [VEX_DATA_WIDTH-1:0] vexrv_data_out;
    logic vexrv_valid_out;

    rvv_proc_main #(
      .VLEN(VLEN),
      .VLEN_B(VLEN_B),
      .VLEN_B_BITS(VLEN_B_BITS),
      .XLEN(XLEN),
      .NUM_VEC(NUM_VEC),
      .INSN_WIDTH(INSN_WIDTH),
      .DATA_WIDTH(DATA_WIDTH),
      .DATA_WIDTH_BITS(DATA_WIDTH_BITS),
      .DW_B(DW_B),
      .DW_B_BITS(DW_B_BITS),
      .ADDR_WIDTH(ADDR_WIDTH),
      .MEM_ADDR_WIDTH(MEM_ADDR_WIDTH),
      .MEM_DATA_WIDTH(MEM_DATA_WIDTH),
      .MEM_DW_B(MEM_DW_B),
      .VEX_DATA_WIDTH(VEX_DATA_WIDTH),
      .FIFO_DEPTH_BITS(FIFO_DEPTH_BITS),
      .BYTE(BYTE),
      .OFF_BITS(OFF_BITS),
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
        .clk(clk), 
        .rst_n(~rst), 
        .insn_in(cfu.req_insn), 
        .insn_valid(cfu.req_valid), 
        .proc_rdy(cfu.req_ready), 
        .vxrm_in(vxrm),
        .vexrv_data_in_1(cfu.req_data0), 
        .vexrv_data_in_2(cfu.req_data1), 
        .vexrv_data_out(vexrv_data_out), 
        .vexrv_valid_out(vexrv_valid_out),
        .*);

    assign vxrm = 3'b0; //FIXME VFU CSR

    always_ff @(posedge clk) begin
      if (vexrv_valid_out)
        cfu.resp_data <= vexrv_data_out;
    end

    set_clr_reg_with_rst #(.SET_OVER_CLR(1), .WIDTH(1), .RST_VALUE(0)) x_resp_valid (
      .clk, 
      .rst,
      .set(vexrv_valid_out),
      .clr(cfu.resp_ready),
      .result(cfu.resp_valid)
    );

    ////////////////////////////////////////////////////
    //ID FIFO
    fifo_interface #(.DATA_WIDTH(C_M_CFU_REQ_ID_W)) id_list ();

    cva5_fifo #(.DATA_WIDTH(C_M_CFU_REQ_ID_W), .FIFO_DEPTH(MAX_IDS)) id_list_fifo (
        .clk (clk),
        .rst (rst),
        .fifo (id_list)
    );

    assign id_list.pop = cfu.resp_valid & cfu.resp_ready;
    assign id_list.potential_push = cfu.req_valid & cfu.req_ready;
    assign id_list.push = id_list.potential_push;
    assign id_list.data_in = cfu.req_id;
    assign cfu.resp_id = id_list.data_out;

    ////////////////////////////////////////////////////
    // AXI

    // Read address channel
    assign axi64.arid = ar_id;
    assign axi64.arcache = ar_cache;
    assign axi64.araddr = ar_addr;
    assign axi64.arlen = ar_len;
    assign axi64.arsize = ar_size;
    assign axi64.arburst = ar_burst;
    assign axi64.arvalid = ar_valid;
    assign ar_ready = axi64.arready;

    // Read data channel
    assign r_id = axi64.rid;
    assign r_data = axi64.rdata;
    assign r_resp = axi64.rresp;
    assign r_last = axi64.rlast;
    assign r_valid = axi64.rvalid;
    assign axi64.rready = r_ready;

    // Write address channel
    assign axi64.awid = aw_id;
    assign axi64.awcache = aw_cache;
    assign axi64.awaddr = aw_addr;
    assign axi64.awlen = aw_len;
    assign axi64.awsize = aw_size;
    assign axi64.awburst = aw_burst;
    assign axi64.awvalid = aw_valid;
    assign aw_ready = axi64.awready;

    // Write data channel
    assign axi64.wvalid = w_valid;
    assign axi64.wdata = w_data;
    assign axi64.wstrb = w_strb;
    assign axi64.wlast = w_last;
    assign w_ready = axi64.wready;

    // Write response channel
    assign b_id = axi64.bid;
    assign b_resp = axi64.bresp;
    assign b_valid = axi64.bvalid;
    assign axi64.bready = b_ready;

endmodule
