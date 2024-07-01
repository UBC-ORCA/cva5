module cx_switch_unit
  import cva5_config::*;
  import riscv_types::*;
  import cva5_types::*;
  import cxu_types::*;
  #(
    parameter NUM_SLAVES        = 2,
    parameter RESP_FIFO_DEPTH   = 2,
    parameter ERROR_FIFO_DEPTH  = 1
  )
  (
    input logic i_clk,
    input logic i_rst,
    cxu_interface.slave  i_cxu,
    cxu_interface.master o_cxus [NUM_SLAVES]
  );

  localparam LOG2_NUM_SLAVES = $clog2(NUM_SLAVES);
  genvar i;

  typedef struct packed {
    logic [C_M_CXU_DATA_W-1:0]   data;
    logic [C_M_CXU_REQ_ID_W-1:0] id;
    logic [C_M_CXU_STATUS_W-1:0] status;
  } resp_packet_t;
  
  logic [NUM_SLAVES*$bits(resp_packet_t)-1:0] resp_packets;
  logic [NUM_SLAVES-1:0] resp_valids;
  logic [NUM_SLAVES-1:0] resp_readies;

  fifo_interface #(.DATA_WIDTH($bits(resp_packet_t))) resp_fifos [NUM_SLAVES] ();
  logic [NUM_SLAVES-1:0] req_readies;
  logic is_req_cxu_valid;

  for (i = 0; i < NUM_SLAVES; ++i) begin
    cva5_fifo #(
      .DATA_WIDTH($bits(resp_packet_t)),
      .FIFO_DEPTH(RESP_FIFO_DEPTH))
    resp_fifo_block (
      .clk(i_clk),
      .rst(i_rst),
      .fifo(resp_fifos[i]));

    always_comb begin
      resp_packets[i*$bits(resp_packet_t) +: $bits(resp_packet_t)] = resp_fifos[i].data_out;
      resp_valids[i*1 +: 1] = resp_fifos[i].valid;
      resp_fifos[i].potential_pop = resp_readies[i] & resp_valids[i];
      resp_fifos[i].potential_push = o_cxus[i].resp_ready & o_cxus[i].resp_valid;
      resp_fifos[i].pop  = resp_fifos[i].potential_pop;
      resp_fifos[i].push = resp_fifos[i].potential_push;
      resp_fifos[i].data_in = {o_cxus[i].resp_data, o_cxus[i].resp_id, o_cxus[i].resp_status};
    end

    always_comb begin
      o_cxus[i].resp_ready = ~resp_fifos[i].full;
      o_cxus[i].req_valid  = i_cxu.req_valid & is_req_cxu_valid & i == i_cxu.req_cxu; 
      o_cxus[i].req_cxu    = i_cxu.req_cxu;
      o_cxus[i].req_state  = i_cxu.req_state;
      o_cxus[i].req_data0  = i_cxu.req_data0;
      o_cxus[i].req_data1  = i_cxu.req_data1;
      o_cxus[i].req_insn   = i_cxu.req_insn;
      o_cxus[i].req_func   = i_cxu.req_func;
      o_cxus[i].req_id     = i_cxu.req_id;
      req_readies[i]       = o_cxus[i].req_ready;
    end
  end

  assign is_req_cxu_valid = i_cxu.req_cxu < NUM_SLAVES;

  assign i_cxu.req_ready  = is_req_cxu_valid ? req_readies[(LOG2_NUM_SLAVES)'(i_cxu.req_cxu)] :
                                               ~error_fifo.full;

  ////////////////////////////////////////////////////
  // Error handling
  ////////////////////////////////////////////////////

  localparam cxu_ERROR_cxu = (C_M_CXU_STATUS_W)'(1);

  resp_packet_t error_resp_packet;
  logic error_resp_ready;
  logic error_resp_valid;
  fifo_interface #(.DATA_WIDTH($bits(resp_packet_t))) error_fifo ();

  cva5_fifo #(
    .DATA_WIDTH($bits(resp_packet_t)), 
    .FIFO_DEPTH(ERROR_FIFO_DEPTH)) 
  error_fifo_block (
    .clk(i_clk),
    .rst(i_rst),
    .fifo(error_fifo));

  always_comb begin
    error_resp_valid = error_fifo.valid;
    error_resp_packet = error_fifo.data_out;
    error_fifo.potential_pop = error_resp_ready & error_resp_valid;
    error_fifo.potential_push = i_cxu.req_ready & i_cxu.req_valid & ~is_req_cxu_valid;
    error_fifo.pop  = error_fifo.potential_pop;
    error_fifo.push = error_fifo.potential_push;
    error_fifo.data_in = {(C_M_CXU_DATA_W)'(0), i_cxu.req_id, cxu_ERROR_cxu};
  end

  ////////////////////////////////////////////////////
  // Arbiters
  ////////////////////////////////////////////////////

  resp_packet_t arb_resp_packet;
  logic arb_resp_ready;
  logic arb_resp_valid;

  // Round-robin arbiter for CX responses
  axis_arb_mux #(
    .S_COUNT(2),
    .DATA_WIDTH($bits(resp_packet_t)),
    .KEEP_ENABLE(0),
    .ID_ENABLE(0),
    .DEST_ENABLE(0),
    .USER_ENABLE(0),
    .LAST_ENABLE(0),
    .UPDATE_TID(0),
    .ARB_TYPE_ROUND_ROBIN(1),
    .ARB_LSB_HIGH_PRIORITY(1))
  arb_rr_block (
    .clk(i_clk),
    .rst(i_rst),
    .s_axis_tready(resp_readies),
    .s_axis_tvalid(resp_valids),
    .s_axis_tdata(resp_packets),
    .s_axis_tkeep('0),
    .s_axis_tlast('0),
    .s_axis_tid('0),
    .s_axis_tdest('0),
    .s_axis_tuser('0),
    .m_axis_tready(arb_resp_ready),
    .m_axis_tvalid(arb_resp_valid),
    .m_axis_tdata(arb_resp_packet),
    .m_axis_tkeep(),
    .m_axis_tlast(),
    .m_axis_tid(),
    .m_axis_tdest(),
    .m_axis_tuser());

  // Priority arbiter for error response
  axis_arb_mux #(
    .S_COUNT(NUM_SLAVES),
    .DATA_WIDTH($bits(resp_packet_t)),
    .KEEP_ENABLE(0),
    .ID_ENABLE(0),
    .DEST_ENABLE(0),
    .USER_ENABLE(0),
    .LAST_ENABLE(0),
    .UPDATE_TID(0),
    .ARB_TYPE_ROUND_ROBIN(0),
    .ARB_LSB_HIGH_PRIORITY(1))
  arb_pr_block (
    .clk(i_clk),
    .rst(i_rst),
    .s_axis_tready({arb_resp_ready,error_resp_ready}),
    .s_axis_tvalid({arb_resp_valid,error_resp_valid}),
    .s_axis_tdata({arb_resp_packet,error_resp_packet}),
    .s_axis_tkeep('0),
    .s_axis_tlast('0),
    .s_axis_tid('0),
    .s_axis_tdest('0),
    .s_axis_tuser('0),
    .m_axis_tready(i_cxu.resp_ready),
    .m_axis_tvalid(i_cxu.resp_valid),
    .m_axis_tdata({i_cxu.resp_data,i_cxu.resp_id,i_cxu.resp_status}),
    .m_axis_tkeep(),
    .m_axis_tlast(),
    .m_axis_tid(),
    .m_axis_tdest(),
    .m_axis_tuser());

endmodule
