module vfu
    import cva5_config::*;
    import riscv_types::*;
    import cva5_types::*;
    import cfu_types::*;

    (
        input logic clk,
        input logic rst,
        
        axi64_interface.master axi64,
        cfu_interface.slave cfu
    );

    localparam VLEN             = 16384;
    localparam XLEN             = 32;
    localparam NUM_VEC          = 32;
    localparam INSN_WIDTH       = 32;
    localparam MEM_ADDR_WIDTH   = 32; 
    localparam MEM_DATA_WIDTH   = 64;
    localparam DATA_WIDTH       = 64;
    localparam ID_WIDTH         = 6;
    localparam FIFO_DEPTH_BITS  = 11;
    localparam FXP_ENABLE       = 0; // Disable FXP

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
    logic req_ready;
    logic resp_valid;

    rvv_proc_main #(
      .VLEN(VLEN),
      .XLEN(XLEN), 
      .NUM_VEC(NUM_VEC), 
      .INSN_WIDTH(INSN_WIDTH), 
      .DATA_WIDTH(DATA_WIDTH), 
      .MEM_ADDR_WIDTH(MEM_ADDR_WIDTH),
      .FIFO_DEPTH_BITS(FIFO_DEPTH_BITS),
      .FXP_ENABLE(FXP_ENABLE)
      ) 
      rvv_proc_main_block (
        .clk(clk), 
        .rst_n(~rst), 
        .insn_in(cfu.req_insn), 
        .insn_valid(cfu.req_valid), 
        .proc_rdy(req_ready), 
        .vxrm_in(vxrm),
        .vexrv_data_in_1(cfu.req_data0), 
        .vexrv_data_in_2(cfu.req_data1), 
        .vexrv_data_out(cfu.resp_data), 
        .vexrv_valid_out(resp_valid),
        .*
        );

    assign vxrm = 3'b0; //FIXME VFU CSR
    assign cfu.req_ready = req_ready;
    assign cfu.resp_valid = resp_valid;

    ////////////////////////////////////////////////////
    //ID FIFO
    fifo_interface #(.DATA_WIDTH(C_M_CFU_REQ_ID_W)) id_list ();

    cva5_fifo #(.DATA_WIDTH(C_M_CFU_REQ_ID_W), .FIFO_DEPTH(MAX_IDS)) id_list_fifo (
        .clk (clk),
        .rst (rst),
        .fifo (id_list)
    );

    assign id_list.pop = resp_valid;
    assign id_list.potential_push = cfu.req_valid;
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
