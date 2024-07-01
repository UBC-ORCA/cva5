module axi2axil_wrapper

(
  input  logic clk,
  input  logic rst,

  // AXI64 - master
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

  // AXI64 - slave
  output logic s_axi_arready,
  input  logic s_axi_arvalid,
  input  logic [31:0] s_axi_araddr,
  input  logic [7:0] s_axi_arlen,
  input  logic [2:0] s_axi_arsize,
  input  logic [1:0] s_axi_arburst,
  input  logic [3:0] s_axi_arcache,
  input  logic [5:0] s_axi_arid,

  input  logic s_axi_rready,
  output logic s_axi_rvalid,
  output logic [63:0] s_axi_rdata,
  output logic [1:0] s_axi_rresp,
  output logic s_axi_rlast,
  output logic [5:0] s_axi_rid,

  output logic s_axi_awready,
  input  logic s_axi_awvalid,
  input  logic [31:0] s_axi_awaddr,
  input  logic [7:0] s_axi_awlen,
  input  logic [2:0] s_axi_awsize,
  input  logic [1:0] s_axi_awburst,
  input  logic [3:0] s_axi_awcache,
  input  logic [5:0] s_axi_awid,

  output logic s_axi_wready,
  input  logic s_axi_wvalid,
  input  logic [63:0] s_axi_wdata,
  input  logic [7:0] s_axi_wstrb,
  input  logic s_axi_wlast,

  input  logic s_axi_bready,
  output logic s_axi_bvalid,
  output logic [1:0] s_axi_bresp,
  output logic [5:0] s_axi_bid
  
  );

  parameter ADDR_WIDTH = 32;
  parameter AXI_DATA_WIDTH = 64;
  parameter AXI_STRB_WIDTH = (AXI_DATA_WIDTH/8);
  parameter AXI_ID_WIDTH = 6;
  parameter AXIL_DATA_WIDTH = 64;
  parameter AXIL_STRB_WIDTH = (AXIL_DATA_WIDTH/8);
  // When adapting to a wider bus, re-pack full-width burst instead of passing through narrow burst if possible
  parameter CONVERT_BURST = 1;
  // When adapting to a wider bus, re-pack all bursts instead of passing through narrow burst if possible
  parameter CONVERT_NARROW_BURST = 0;
  logic [2:0]                  s_axi_awprot;
  logic [2:0]                  s_axi_arprot;
  logic s_axi_awlock;
  logic s_axi_arlock;

  /*
   * AXI lite master interface
   */
  logic [ADDR_WIDTH-1:0]       m_axil_awaddr;
  logic [2:0]                  m_axil_awprot;
  logic m_axil_awvalid;
  logic m_axil_awready;
  logic [AXIL_DATA_WIDTH-1:0]  m_axil_wdata;
  logic [AXIL_STRB_WIDTH-1:0]  m_axil_wstrb;
  logic m_axil_wvalid;
  logic m_axil_wready;
  logic [1:0]                  m_axil_bresp;
  logic m_axil_bvalid;
  logic m_axil_bready;
  logic [ADDR_WIDTH-1:0]       m_axil_araddr;
  logic [2:0]                  m_axil_arprot;
  logic m_axil_arvalid;
  logic m_axil_arready;
  logic [AXIL_DATA_WIDTH-1:0]  m_axil_rdata;
  logic [1:0]                  m_axil_rresp;
  logic m_axil_rvalid;
  logic m_axil_rready;

  assign m_axil_arready = m_axi_arready;
  assign m_axi_arvalid = m_axil_arvalid;
  assign m_axi_araddr = m_axil_araddr;
  assign m_axi_arlen = 7'b0;
  assign m_axi_arsize = 3'b011;
  assign m_axi_arburst = 2'b00;
  assign m_axi_arcache = 4'b0010;
  //assign m_axi_arid = m_axil_arid;

  assign m_axi_rready = m_axil_rready;
  assign m_axil_rvalid = m_axi_rvalid;
  assign m_axil_rdata = m_axi_rdata;
  assign m_axil_rresp = m_axi_rresp;
  //assign m_axil_rlast = m_axi_rlast;
  //assign m_axil_rid = m_axi_rid;

  assign m_axil_awready = m_axi_awready;
  assign m_axi_awvalid = m_axil_awvalid;
  assign m_axi_awaddr = m_axil_awaddr;
  assign m_axi_awlen = 7'b0;
  assign m_axi_awsize = 3'b011;
  assign m_axi_awburst = 2'b00;
  assign m_axi_awcache = 4'b0010;
  //assign m_axi_awid = m_axil_awid;

  assign m_axil_wready = m_axi_wready;
  assign m_axi_wvalid = m_axil_wvalid;
  assign m_axi_wdata = m_axil_wdata;
  assign m_axi_wstrb = m_axil_wstrb;
  assign m_axi_wlast = 1'b1;

  assign m_axi_bready = m_axil_bready;
  assign m_axil_bvalid = m_axi_bvalid;
  assign m_axil_bresp = m_axi_bresp;
  //assign m_axil_bid = m_axi_bid;


  axi_axil_adapter #(
    .ADDR_WIDTH(ADDR_WIDTH),
    .AXI_DATA_WIDTH(AXI_DATA_WIDTH),
    .AXI_STRB_WIDTH(AXI_STRB_WIDTH),
    .AXI_ID_WIDTH(AXI_ID_WIDTH),
    .AXIL_DATA_WIDTH(AXIL_DATA_WIDTH),
    .AXIL_STRB_WIDTH(AXIL_STRB_WIDTH),
    .CONVERT_BURST(CONVERT_BURST),
    .CONVERT_NARROW_BURST(CONVERT_NARROW_BURST)
    ) axi_axil_adapter_block (.*);

endmodule

