module vxu_wrapper

import cva5_config::*;
import riscv_types::*;
import cva5_types::*;
import cxu_types::*;
import cx_dma_types::*;

(
  input  logic clk,
  input  logic rst,

  // AXI64
  input  logic m_axi_arready,
  output logic m_axi_arvalid,
  output logic [32-1:0] m_axi_araddr,
  output logic [8-1:0] m_axi_arlen,
  output logic [3-1:0] m_axi_arsize,
  output logic [2-1:0] m_axi_arburst,
  output logic [4-1:0] m_axi_arcache,
  output logic [1+8+4-1:0] m_axi_arid,

  output logic m_axi_rready,
  input  logic m_axi_rvalid,
  input  logic [64-1:0] m_axi_rdata,
  input  logic [2-1:0] m_axi_rresp,
  input  logic m_axi_rlast,
  input  logic [1+8+4-1:0] m_axi_rid,

  input  logic m_axi_awready,
  output logic m_axi_awvalid,
  output logic [32-1:0] m_axi_awaddr,
  output logic [8-1:0] m_axi_awlen,
  output logic [3-1:0] m_axi_awsize,
  output logic [2-1:0] m_axi_awburst,
  output logic [4-1:0] m_axi_awcache,
  output logic [1+8+4-1:0] m_axi_awid,

  input  logic m_axi_wready,
  output logic m_axi_wvalid,
  output logic [64-1:0] m_axi_wdata,
  output logic [8-1:0] m_axi_wstrb,
  output logic m_axi_wlast,

  output logic m_axi_bready,
  input  logic m_axi_bvalid,
  input  logic [2-1:0] m_axi_bresp,
  input  logic [1+8+4-1:0] m_axi_bid,
  
  // INVALIDATION
  input  logic inv_ack,
  output logic inv_valid,
  output logic [32-1:0] inv_addr,

  // CXU
  //input  logic                          cxu_req_en,
  input  logic                          cxu_req_valid,
  output logic                          cxu_req_ready,
  input  logic [C_M_CXU_REQ_ID_W-1:0]   cxu_req_id,
  input  logic [C_M_CXU_CXU_ID_W-1:0]   cxu_req_cxu,
  input  logic [C_M_CXU_STATE_ID_W-1:0] cxu_req_state,
  input  logic [C_M_CXU_FUNC_ID_W-1:0]  cxu_req_func,
  input  logic [C_M_CXU_INSN_W-1:0]     cxu_req_insn,
  input  logic [C_M_CXU_DATA_W-1:0]     cxu_req_data0,
  input  logic [C_M_CXU_DATA_W-1:0]     cxu_req_data1,
  output logic                          cxu_resp_valid,
  input  logic                          cxu_resp_ready,
  output logic [C_M_CXU_REQ_ID_W-1:0]   cxu_resp_id,
  output logic [C_M_CXU_STATUS_W-1:0]   cxu_resp_status,
  output logic [C_M_CXU_DATA_W-1:0]     cxu_resp_data
  );

  genvar i;

  localparam NUM_CXUS = 2;
  localparam CXU_ID_WIDTH = NUM_CXUS > 1 ? $clog2(NUM_CXUS) : 1;

  ////////////////////////////////////////////////////
  // Unpack CX interface
  ////////////////////////////////////////////////////

  assign cxu.req_valid = cxu_req_valid;
  assign cxu_req_ready = cxu.req_ready; 
  assign cxu.req_id = cxu_req_id ;
  assign cxu.req_cxu = cxu_req_cxu ;
  assign cxu.req_state = cxu_req_state ;
  assign cxu.req_func = cxu_req_func ;
  assign cxu.req_insn = cxu_req_insn ;
  assign cxu.req_data0 = cxu_req_data0 ;
  assign cxu.req_data1 = cxu_req_data1 ;
  assign cxu_resp_valid = cxu.resp_valid ;
  assign cxu.resp_ready = cxu_resp_ready ;
  assign cxu_resp_id = cxu.resp_id ;
  assign cxu_resp_status = cxu.resp_status;
  assign cxu_resp_data = cxu.resp_data ;

  ////////////////////////////////////////////////////
  // Unpack AXI interface
  ////////////////////////////////////////////////////

  assign axi64.arready = m_axi_arready;
  assign m_axi_arvalid = axi64.arvalid;
  assign m_axi_araddr = axi64.araddr;
  assign m_axi_arlen = axi64.arlen;
  assign m_axi_arsize = axi64.arsize;
  assign m_axi_arburst = axi64.arburst;
  assign m_axi_arcache = axi64.arcache;
  assign m_axi_arid = axi64.arid;

  assign m_axi_rready = axi64.rready;
  assign axi64.rvalid = m_axi_rvalid;
  assign axi64.rdata = m_axi_rdata;
  assign axi64.rresp = m_axi_rresp;
  assign axi64.rlast = m_axi_rlast;
  assign axi64.rid = m_axi_rid;

  assign axi64.awready = m_axi_awready;
  assign m_axi_awvalid = axi64.awvalid;
  assign m_axi_awaddr = axi64.awaddr;
  assign m_axi_awlen = axi64.awlen;
  assign m_axi_awsize = axi64.awsize;
  assign m_axi_awburst = axi64.awburst;
  assign m_axi_awcache = axi64.awcache;
  assign m_axi_awid = axi64.awid;

  assign axi64.wready = m_axi_wready;
  assign m_axi_wvalid = axi64.wvalid;
  assign m_axi_wdata = axi64.wdata;
  assign m_axi_wstrb = axi64.wstrb;
  assign m_axi_wlast = axi64.wlast;

  assign m_axi_bready = axi64.bready;
  assign axi64.bvalid = m_axi_bvalid;
  assign axi64.bresp = m_axi_bresp;
  assign axi64.bid = m_axi_bid;

  ////////////////////////////////////////////////////
  // VXU
  ////////////////////////////////////////////////////

  cxu_interface cxu ();

  localparam STATE_ID_WIDTH      = C_M_CXU_STATE_ID_W;
  localparam QUEUE_DEPTH         = 8*MAX_IDS;
  localparam MAX_READ_IN_FLIGHT  = 1;
  localparam MAX_WRITE_IN_FLIGHT = 1;

  for (i = 0; i < NUM_CXUS; ++i) begin
    vxu #(
      .STATE_ID_WIDTH(STATE_ID_WIDTH),
      .QUEUE_DEPTH(QUEUE_DEPTH),
      .MAX_READ_IN_FLIGHT(MAX_READ_IN_FLIGHT),
      .MAX_WRITE_IN_FLIGHT(MAX_READ_IN_FLIGHT))
    vxu_block (
      .i_clk(clk),
      .i_rst(rst),
      .s_cxu(cxus[i]),
      .s_alloc_resp(alloc_resps[i]),
      .s_lkup_resp(lkup_resps[i]),
      .m_alloc_req(alloc_reqs[i]),
      .m_lkup_req(lkup_reqs[i]),
      .m_read_req(read_reqs[i]),
      .m_write_req(write_reqs[i]),
      .s_read_stream(read_streams[i]),
      .m_write_stream(write_streams[i]));
  end

  ////////////////////////////////////////////////////
  // CX switch
  ////////////////////////////////////////////////////

  cxu_interface cxus [NUM_CXUS] ();

  cx_switch_unit #(
    .NUM_SLAVES(2))
  cx_switch_unit_block (
    .i_clk(clk),
    .i_rst(rst),
    .i_cxu(cxu),
    .o_cxus(cxus));

  ////////////////////////////////////////////////////
  // CX DMA
  ////////////////////////////////////////////////////

  gen_interface #(
    .DATA_WIDTH($bits(track_entry_t)), 
    .ID_WIDTH(CXU_ID_WIDTH))
  alloc_reqs [NUM_CXUS] ();
  gen_interface #(
    .DATA_WIDTH($bits(track_id_t)), 
    .ID_WIDTH(CXU_ID_WIDTH)) 
  alloc_resps [NUM_CXUS] ();
  gen_interface #(
    .DATA_WIDTH($bits(track_entry_t)),
    .ID_WIDTH(CXU_ID_WIDTH)) 
  lkup_reqs [NUM_CXUS] ();
  gen_interface #(
    .DATA_WIDTH(1),                     
    .ID_WIDTH(CXU_ID_WIDTH))
  lkup_resps [NUM_CXUS] ();

  gen_interface #(
    .DATA_WIDTH($bits(mem_packet_t)),   
    .ID_WIDTH(CXU_ID_WIDTH+MEM_ID_WIDTH)) 
  read_reqs [NUM_CXUS] ();
  gen_interface #(
    .DATA_WIDTH($bits(mem_packet_t)),   
    .ID_WIDTH(CXU_ID_WIDTH+MEM_ID_WIDTH)) 
  write_reqs [NUM_CXUS] ();
  gen_interface #(
    .DATA_WIDTH($bits(mem_packet_t)),   
    .ID_WIDTH(CXU_ID_WIDTH+MEM_ID_WIDTH)) 
  mem_reqs [MEM_PORTS] ();

  stream_interface #(
    .DATA_WIDTH(MEM_DATA_WIDTH),   
    .ID_WIDTH(MEM_ID_WIDTH))
  write_streams [NUM_CXUS] ();
  stream_interface #(
    .DATA_WIDTH(MEM_DATA_WIDTH),   
    .ID_WIDTH(MEM_ID_WIDTH))
  read_streams [NUM_CXUS] ();
  axi64_interface #(
    .ID_WIDTH(CXU_ID_WIDTH+MEM_ID_WIDTH))
  axi64 ();

  cx_dma_unit #(.NUM_CXUS(NUM_CXUS))
  cx_dma_unit_block (
    .i_clk(clk),
    .i_rst(rst),
    .m_axi(axi64),
    .m_alloc_resps(alloc_resps),
    .m_lkup_resps(lkup_resps),
    .s_alloc_reqs(alloc_reqs),
    .s_lkup_reqs(lkup_reqs),
    .s_read_reqs(read_reqs),
    .s_write_reqs(write_reqs),
    .m_read_streams(read_streams),
    .s_write_streams(write_streams));

endmodule
