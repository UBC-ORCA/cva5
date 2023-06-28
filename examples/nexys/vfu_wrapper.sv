module vfu_wrapper

import cva5_config::*;
import riscv_types::*;
import cva5_types::*;
import cfu_types::*;

(
  input  logic clk,
  input  logic rst,

  // AXI64
  input  logic m_axi_arready,
  output logic m_axi_arvalid,
  output logic [31:0] m_axi_araddr,
  output logic [7:0] m_axi_arlen,
  output logic [2:0] m_axi_arsize,
  output logic [1:0] m_axi_arburst,
  output logic [3:0] m_axi_arcache,
  output logic [5:0] m_axi_arid,

  output logic m_axi_rready,
  input  logic m_axi_rvalid,
  input  logic [63:0] m_axi_rdata,
  input  logic [1:0] m_axi_rresp,
  input  logic m_axi_rlast,
  input  logic [5:0] m_axi_rid,

  input  logic m_axi_awready,
  output logic m_axi_awvalid,
  output logic [31:0] m_axi_awaddr,
  output logic [7:0] m_axi_awlen,
  output logic [2:0] m_axi_awsize,
  output logic [1:0] m_axi_awburst,
  output logic [3:0] m_axi_awcache,
  output logic [5:0] m_axi_awid,

  input  logic m_axi_wready,
  output logic m_axi_wvalid,
  output logic [63:0] m_axi_wdata,
  output logic [7:0] m_axi_wstrb,
  output logic m_axi_wlast,

  output logic m_axi_bready,
  input  logic m_axi_bvalid,
  input  logic [1:0] m_axi_bresp,
  input  logic [5:0] m_axi_bid,

  // CFU
  input  logic                          cfu_req_en,
  input  logic                          cfu_req_valid,
  output logic                          cfu_req_ready,
  input  logic                          cfu_req_cfu_csr,
  input  logic [C_M_CFU_REQ_ID_W-1:0]   cfu_req_id,
  input  logic [C_M_CFU_CFU_ID_W-1:0]   cfu_req_cfu,
  input  logic [C_M_CFU_STATE_ID_W-1:0] cfu_req_state,
  input  logic [C_M_CFU_FUNC_ID_W-1:0]  cfu_req_func,
  input  logic [C_M_CFU_INSN_W-1:0]     cfu_req_insn,
  input  logic [C_M_CFU_DATA_W-1:0]     cfu_req_data0,
  input  logic [C_M_CFU_DATA_W-1:0]     cfu_req_data1,
  output logic                          cfu_resp_valid,
  input  logic                          cfu_resp_ready,
  output logic [C_M_CFU_REQ_ID_W-1:0]   cfu_resp_id,
  output logic [C_M_CFU_STATUS_W-1:0]   cfu_resp_status,
  output logic [C_M_CFU_DATA_W-1:0]     cfu_resp_data

  );

  axi64_interface axi64 ();
  cfu_interface cfu();

  // Upacking CFU interface
  assign cfu.req_en = cfu_req_en;
  assign cfu.req_valid = cfu_req_valid;
  assign cfu_req_ready = cfu.req_ready; 
  assign cfu.req_cfu_csr = cfu_req_cfu_csr ;
  assign cfu.req_id = cfu_req_id ;
  assign cfu.req_cfu = cfu_req_cfu ;
  assign cfu.req_state = cfu_req_state ;
  assign cfu.req_func = cfu_req_func ;
  assign cfu.req_insn = cfu_req_insn ;
  assign cfu.req_data0 = cfu_req_data0 ;
  assign cfu.req_data1 = cfu_req_data1 ;
  assign cfu_resp_valid = cfu.resp_valid ;
  assign cfu.resp_ready = cfu_resp_ready ;
  assign cfu_resp_id = cfu.resp_id ;
  assign cfu_resp_status = cfu.resp_status ;
  assign cfu_resp_data = cfu.resp_data ;

  // Unpacking AXI64 interface
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

  vfu vfu_block(.*);

  endmodule

