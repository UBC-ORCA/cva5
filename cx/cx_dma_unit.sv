module cx_dma_unit
  import cva5_config::*;
  import riscv_types::*;
  import cva5_types::*;
  import cxu_types::*;
  import cx_dma_types::*;
  #(
    parameter NUM_CXUS = 2,
    parameter CXU_ID_WIDTH = NUM_CXUS > 1 ? $clog2(NUM_CXUS) : 1
  )
  (
    input logic i_clk,
    input logic i_rst,
    axi64_interface.master  m_axi,
    gen_interface.master    m_alloc_resps   [NUM_CXUS],
    gen_interface.master    m_lkup_resps    [NUM_CXUS],
    gen_interface.slave     s_alloc_reqs    [NUM_CXUS],
    gen_interface.slave     s_lkup_reqs     [NUM_CXUS],
    gen_interface.slave     s_read_reqs     [NUM_CXUS],
    gen_interface.slave     s_write_reqs    [NUM_CXUS],
    stream_interface.master m_read_streams  [NUM_CXUS],
    stream_interface.slave  s_write_streams [NUM_CXUS]
  );

  /////////////////////////////////////////////////////////////////////////////////////////////////

  genvar i, j;

  typedef enum bit {
    READ  = 0,
    WRITE = 1
  } mem_port_t;

  typedef enum bit [2-1:0] {
    FIXED     = 0,
    INCR      = 1,
    WRAP      = 2,
    RESERVED  = 3
  } axi_burst_t;

  gen_interface #(
    .DATA_WIDTH($bits(track_id_t)),
    .ID_WIDTH(1))
  remove_req ();
  gen_interface #(
    .DATA_WIDTH($bits(track_entry_t)), 
    .ID_WIDTH(CXU_ID_WIDTH))
  alloc_req ();
  gen_interface #(
    .DATA_WIDTH($bits(track_id_t)), 
    .ID_WIDTH(CXU_ID_WIDTH)) 
  alloc_resp ();
  gen_interface #(
    .DATA_WIDTH($bits(track_entry_t)),
    .ID_WIDTH(CXU_ID_WIDTH)) 
  lkup_req ();
  gen_interface #(
    .DATA_WIDTH(1),                     
    .ID_WIDTH(CXU_ID_WIDTH))
  lkup_resp ();
  gen_interface #(
    .DATA_WIDTH($bits(mem_packet_t)),   
    .ID_WIDTH(CXU_ID_WIDTH+MEM_ID_WIDTH)) 
  mem_reqs [MEM_PORTS] ();
  stream_interface #(
    .DATA_WIDTH(MEM_DATA_WIDTH),   
    .ID_WIDTH(MEM_ID_WIDTH))
  write_stream ();

  /////////////////////////////////////////////////////////////////////////////////////////////////
  
  logic read_complete;
  logic write_complete;
  
  always_comb begin
    read_complete  = m_axi.rready & m_axi.rvalid & m_axi.rlast;
    write_complete = m_axi.bready & m_axi.bvalid;
  end

  /////////////////////////////////////////////////////////////////////////////////////////////////

  logic [$bits(mem_packet_t)*NUM_CXUS-1:0] mem_req_datas [MEM_PORTS];
  logic [$bits(mem_id_t)*NUM_CXUS-1:0] mem_req_ids [MEM_PORTS];
  logic [NUM_CXUS-1:0] mem_req_valids  [MEM_PORTS];
  logic [NUM_CXUS-1:0] mem_req_readies [MEM_PORTS];
  logic [CXU_ID_WIDTH-1:0] mem_req_cxu_ids [MEM_PORTS];
  mem_packet_t mem_packets [MEM_PORTS];

  for (j = 0; j < NUM_CXUS; ++j) begin
    always_comb begin
      mem_req_datas[READ][j*$bits(mem_packet_t) +: $bits(mem_packet_t)] = s_read_reqs[j].data;
      mem_req_ids[READ][j*$bits(mem_id_t) +: $bits(mem_id_t)] = s_read_reqs[j].id[0 +: $bits(mem_id_t)];
      mem_req_valids[READ][j] = s_read_reqs[j].valid;
      s_read_reqs[j].ready = mem_req_readies[READ][j];

      mem_req_datas[WRITE][j*$bits(mem_packet_t) +: $bits(mem_packet_t)] = s_write_reqs[j].data;
      mem_req_ids[WRITE][j*$bits(mem_id_t) +: $bits(mem_id_t)] = s_write_reqs[j].id[0 +: $bits(mem_id_t)];
      mem_req_valids[WRITE][j] = s_write_reqs[j].valid;
      s_write_reqs[j].ready = mem_req_readies[WRITE][j];
    end
  end

  always_comb begin
    mem_packets[READ]  = mem_reqs[READ].data;
    mem_packets[WRITE] = mem_reqs[WRITE].data;
  end

  always_comb begin
    mem_reqs[READ].ready = m_axi.arready;
    m_axi.arvalid = mem_reqs[READ].valid;
    m_axi.araddr  = mem_packets[READ].base_address;
    m_axi.arlen   = ((mem_packets[READ].end_address - mem_packets[READ].base_address + 1) >> 
                    mem_packets[READ].size) - 1;
    m_axi.arsize  = mem_packets[READ].size;
    m_axi.arburst = INCR;
    m_axi.arcache = 4'b0010; //Normal Non-cacheable Non-bufferable
    m_axi.arid    = mem_reqs[READ].id;
  end

  always_comb begin
    mem_reqs[WRITE].ready = m_axi.awready;
    m_axi.awvalid = mem_reqs[WRITE].valid;
    m_axi.awaddr  = mem_packets[WRITE].base_address;
    m_axi.awlen   = ((mem_packets[WRITE].end_address - mem_packets[WRITE].base_address + 1) >> 
                    mem_packets[WRITE].size) - 1;
    m_axi.awsize  = mem_packets[WRITE].size;
    m_axi.awburst = INCR;
    m_axi.awcache = 4'b0010; //Normal Non-cacheable Non-bufferable
    m_axi.awid    = mem_reqs[WRITE].id;
  end

  for (i = 0; i < MEM_PORTS; ++i) begin
    axis_arb_mux #(
      .S_COUNT(NUM_CXUS),
      .DATA_WIDTH($bits(mem_packet_t)),
      .KEEP_ENABLE(0),
      //.KEEP_WIDTH(),
      .ID_ENABLE(1),
      .S_ID_WIDTH($bits(mem_id_t)),
      //.M_ID_WIDTH(),
      .DEST_ENABLE(0),
      //.DEST_WIDTH(),
      .USER_ENABLE(0),
      //.USER_WIDTH(),
      .LAST_ENABLE(0),
      .UPDATE_TID(1),
      .ARB_TYPE_ROUND_ROBIN(1),
      .ARB_LSB_HIGH_PRIORITY(1))
    arb_mem_req_block (
      .clk(i_clk),
      .rst(i_rst),
      .s_axis_tdata(mem_req_datas[i]),
      .s_axis_tkeep('0),
      .s_axis_tvalid(mem_req_valids[i]),
      .s_axis_tready(mem_req_readies[i]),
      .s_axis_tlast('0),
      .s_axis_tid(mem_req_ids[i]),
      .s_axis_tdest('0),
      .s_axis_tuser('0),
      .m_axis_tdata(mem_reqs[i].data),
      .m_axis_tkeep(),
      .m_axis_tvalid(mem_reqs[i].valid),
      .m_axis_tready(mem_reqs[i].ready),
      .m_axis_tlast(),
      .m_axis_tid(mem_reqs[i].id),
      .m_axis_tdest(),
      .m_axis_tuser());
  end

  /////////////////////////////////////////////////////////////////////////////////////////////////

  logic [MEM_DATA_WIDTH*NUM_CXUS-1:0]   write_stream_tdatas;
  logic [MEM_DATA_WIDTH*NUM_CXUS/8-1:0] write_stream_tstrbs;
  logic [NUM_CXUS-1:0] write_stream_tvalids;
  logic [NUM_CXUS-1:0] write_stream_tlasts;
  logic [NUM_CXUS-1:0] write_stream_treadies;

  for (j = 0; j < NUM_CXUS; ++j) begin
    always_comb begin
      write_stream_tdatas[j*MEM_DATA_WIDTH +: MEM_DATA_WIDTH] = s_write_streams[j].tdata;
      write_stream_tstrbs[j*MEM_DATA_WIDTH/8 +: MEM_DATA_WIDTH/8] = s_write_streams[j].tstrb;
      write_stream_tvalids[j] = s_write_streams[j].tvalid;
      write_stream_tlasts[j]  = s_write_streams[j].tlast;
      s_write_streams[j].tready = write_stream_treadies[j];
    end
  end

  always_comb begin
    write_stream.tready = m_axi.wready;
    m_axi.wvalid = write_stream.tvalid;
    m_axi.wlast  = write_stream.tlast;
    m_axi.wdata  = write_stream.tdata;
    m_axi.wstrb  = write_stream.tstrb;
    m_axi.bready = ~read_complete; //TODO Route b-stream
  end

  axis_arb_mux #(
    .S_COUNT(NUM_CXUS),
    .DATA_WIDTH(MEM_DATA_WIDTH),
    .KEEP_ENABLE(1),
    .KEEP_WIDTH(MEM_DATA_WIDTH/8),
    .ID_ENABLE(0),
    //.S_ID_WIDTH(),
    //.M_ID_WIDTH(),
    .DEST_ENABLE(0),
    //.DEST_WIDTH(),
    .USER_ENABLE(0),
    //.USER_WIDTH(),
    .LAST_ENABLE(1),
    .UPDATE_TID(0),
    .ARB_TYPE_ROUND_ROBIN(1),
    .ARB_LSB_HIGH_PRIORITY(1))
  arb_write_stream_block (
    .clk(i_clk),
    .rst(i_rst),
    .s_axis_tdata(write_stream_tdatas),
    .s_axis_tkeep(write_stream_tstrbs),
    .s_axis_tvalid(write_stream_tvalids),
    .s_axis_tready(write_stream_treadies),
    .s_axis_tlast(write_stream_tlasts),
    .s_axis_tid('0),
    .s_axis_tdest('0),
    .s_axis_tuser('0),
    .m_axis_tdata(write_stream.tdata),
    .m_axis_tkeep(write_stream.tstrb),
    .m_axis_tvalid(write_stream.tvalid),
    .m_axis_tready(write_stream.tready),
    .m_axis_tlast(write_stream.tlast),
    .m_axis_tid(),
    .m_axis_tdest(),
    .m_axis_tuser());

  /////////////////////////////////////////////////////////////////////////////////////////////////

  logic [MEM_DATA_WIDTH*NUM_CXUS-1:0] read_stream_tdatas;
  logic [MEM_ID_WIDTH*NUM_CXUS-1:0] read_stream_tids;
  logic [NUM_CXUS-1:0] read_stream_tvalids;
  logic [NUM_CXUS-1:0] read_stream_tlasts;
  logic [NUM_CXUS-1:0] read_stream_treadies;

  for (j = 0; j < NUM_CXUS; ++j) begin
    always_comb begin
      m_read_streams[j].tdata   = read_stream_tdatas[j*MEM_DATA_WIDTH +: MEM_DATA_WIDTH];
      m_read_streams[j].tstrb   = {MEM_DATA_WIDTH/8{1'b1}};
      m_read_streams[j].tid     = read_stream_tids[j*MEM_ID_WIDTH +: MEM_ID_WIDTH];
      m_read_streams[j].tvalid  = read_stream_tvalids[j];
      m_read_streams[j].tlast   = read_stream_tlasts[j];
      read_stream_treadies[j]   = m_read_streams[j].tready;
    end
  end

  axis_demux #(
    .M_COUNT(NUM_CXUS),
    .DATA_WIDTH(MEM_DATA_WIDTH),
    .KEEP_ENABLE(0),
    //.KEEP_WIDTH(),
    .ID_ENABLE(1),
    .ID_WIDTH(MEM_ID_WIDTH),
    .DEST_ENABLE(0),
    //.M_DEST_WIDTH(),
    //.S_DEST_WIDTH(),
    .USER_ENABLE(0),
    //.USER_WIDTH(),
    .TDEST_ROUTE(0))
  demux_read_stream_block (
    .clk(i_clk),
    .rst(i_rst),
    .s_axis_tdata(m_axi.rdata),
    .s_axis_tkeep('0),
    .s_axis_tvalid(m_axi.rvalid),
    .s_axis_tready(m_axi.rready),
    .s_axis_tlast(m_axi.rlast),
    .s_axis_tid(m_axi.rid[0 +: MEM_ID_WIDTH]),
    .s_axis_tdest('0),
    .s_axis_tuser('0),
    .m_axis_tdata(read_stream_tdatas),
    .m_axis_tkeep(),
    .m_axis_tvalid(read_stream_tvalids),
    .m_axis_tready(read_stream_treadies),
    .m_axis_tlast(read_stream_tlasts),
    .m_axis_tid(read_stream_tids),
    .m_axis_tdest(),
    .m_axis_tuser(),
    .enable(m_axi.rvalid),
    .drop('0),
    .select(m_axi.rid[MEM_ID_WIDTH +: CXU_ID_WIDTH]));

  /////////////////////////////////////////////////////////////////////////////////////////////////

  logic [$bits(track_entry_t)*NUM_CXUS-1:0] alloc_req_datas;
  logic [NUM_CXUS-1:0] alloc_req_valids;
  logic [NUM_CXUS-1:0] alloc_req_readies;
  logic [CXU_ID_WIDTH-1:0] alloc_req_cxu_id;
  logic _alloc_dummy;

  for (j = 0; j < NUM_CXUS; ++j) begin
    always_comb begin
      alloc_req_datas[j*$bits(track_entry_t) +: $bits(track_entry_t)] = s_alloc_reqs[j].data;
      alloc_req_valids[j] = s_alloc_reqs[j].valid;
      s_alloc_reqs[j].ready = alloc_req_readies[j];
    end
  end

  axis_arb_mux #(
    .S_COUNT(NUM_CXUS),
    .DATA_WIDTH($bits(track_entry_t)),
    .KEEP_ENABLE(0),
    //.KEEP_WIDTH(),
    .ID_ENABLE(1),
    .S_ID_WIDTH(1),
    //.M_ID_WIDTH(),
    .DEST_ENABLE(0),
    //.DEST_WIDTH(),
    .USER_ENABLE(0),
    //.USER_WIDTH(),
    .LAST_ENABLE(0),
    .UPDATE_TID(1),
    .ARB_TYPE_ROUND_ROBIN(1),
    .ARB_LSB_HIGH_PRIORITY(1))
  arb_alloc_req_block (
    .clk(i_clk),
    .rst(i_rst),
    .s_axis_tdata(alloc_req_datas),
    .s_axis_tkeep('0),
    .s_axis_tvalid(alloc_req_valids),
    .s_axis_tready(alloc_req_readies),
    .s_axis_tlast('0),
    .s_axis_tid('0),
    .s_axis_tdest('0),
    .s_axis_tuser('0),
    .m_axis_tdata(alloc_req.data),
    .m_axis_tkeep(),
    .m_axis_tvalid(alloc_req.valid),
    .m_axis_tready(alloc_req.ready),
    .m_axis_tlast(),
    .m_axis_tid({alloc_req.id,_alloc_dummy}),
    .m_axis_tdest(),
    .m_axis_tuser());
  
  /////////////////////////////////////////////////////////////////////////////////////////////////

  logic [$bits(track_id_t)*NUM_CXUS-1:0] alloc_resp_datas;
  logic [NUM_CXUS-1:0] alloc_resp_valids;
  logic [NUM_CXUS-1:0] alloc_resp_readies;

  for (j = 0; j < NUM_CXUS; ++j) begin
    always_comb begin
      m_alloc_resps[j].data  = alloc_resp_datas[j*$bits(track_id_t) +: $bits(track_id_t)];
      m_alloc_resps[j].valid = alloc_resp_valids[j];
      alloc_resp_readies[j]  = m_alloc_resps[j].ready;
    end
  end

  axis_demux #(
    .M_COUNT(NUM_CXUS),
    .DATA_WIDTH($bits(track_id_t)),
    .KEEP_ENABLE(0),
    //.KEEP_WIDTH(),
    .ID_ENABLE(0),
    //.ID_WIDTH(),
    .DEST_ENABLE(0),
    //.M_DEST_WIDTH(),
    //.S_DEST_WIDTH(),
    .USER_ENABLE(0),
    //.USER_WIDTH(),
    .TDEST_ROUTE(0))
  demux_alloc_resp_block (
    .clk(i_clk),
    .rst(i_rst),
    .s_axis_tdata(alloc_resp.data),
    .s_axis_tkeep('0),
    .s_axis_tvalid(alloc_resp.valid),
    .s_axis_tready(alloc_resp.ready),
    .s_axis_tlast(1'b1),
    .s_axis_tid('0),
    .s_axis_tdest('0),
    .s_axis_tuser('0),
    .m_axis_tdata(alloc_resp_datas),
    .m_axis_tkeep(),
    .m_axis_tvalid(alloc_resp_valids),
    .m_axis_tready(alloc_resp_readies),
    .m_axis_tlast(),
    .m_axis_tid(),
    .m_axis_tdest(),
    .m_axis_tuser(),
    .enable(alloc_resp.valid),
    .drop('0),
    .select(alloc_resp.id));

  /////////////////////////////////////////////////////////////////////////////////////////////////

  logic [$bits(track_entry_t)*NUM_CXUS-1:0] lkup_req_datas;
  logic [NUM_CXUS-1:0] lkup_req_valids;
  logic [NUM_CXUS-1:0] lkup_req_readies;
  logic [CXU_ID_WIDTH-1:0] lkup_req_cxu_id;
  logic _lkup_dummy;

  for (j = 0; j < NUM_CXUS; ++j) begin
    always_comb begin
      lkup_req_datas[j*$bits(track_entry_t) +: $bits(track_entry_t)] = s_lkup_reqs[j].data;
      lkup_req_valids[j] = s_lkup_reqs[j].valid;
      s_lkup_reqs[j].ready = lkup_req_readies[j];
    end
  end

  axis_arb_mux #(
    .S_COUNT(NUM_CXUS),
    .DATA_WIDTH($bits(track_entry_t)),
    .KEEP_ENABLE(0),
    //.KEEP_WIDTH(),
    .ID_ENABLE(1),
    .S_ID_WIDTH(1),
    //.M_ID_WIDTH(),
    .DEST_ENABLE(0),
    //.DEST_WIDTH(),
    .USER_ENABLE(0),
    //.USER_WIDTH(),
    .LAST_ENABLE(0),
    .UPDATE_TID(1),
    .ARB_TYPE_ROUND_ROBIN(1),
    .ARB_LSB_HIGH_PRIORITY(1))
  arb_lkup_req_block (
    .clk(i_clk),
    .rst(i_rst),
    .s_axis_tdata(lkup_req_datas),
    .s_axis_tkeep('0),
    .s_axis_tvalid(lkup_req_valids),
    .s_axis_tready(lkup_req_readies),
    .s_axis_tlast('0),
    .s_axis_tid('0),
    .s_axis_tdest('0),
    .s_axis_tuser('0),
    .m_axis_tdata(lkup_req.data),
    .m_axis_tkeep(),
    .m_axis_tvalid(lkup_req.valid),
    .m_axis_tready(lkup_req.ready),
    .m_axis_tlast(),
    .m_axis_tid({lkup_req.id,_lkup_dummy}),
    .m_axis_tdest(),
    .m_axis_tuser());

  /////////////////////////////////////////////////////////////////////////////////////////////////

  logic [NUM_CXUS-1:0] lkup_resp_datas;
  logic [NUM_CXUS-1:0] lkup_resp_valids;
  logic [NUM_CXUS-1:0] lkup_resp_readies;

  for (j = 0; j < NUM_CXUS; ++j) begin
    always_comb begin
      m_lkup_resps[j].data = lkup_resp_datas[j*1 +: 1];
      m_lkup_resps[j].valid = lkup_resp_valids[j];
      lkup_resp_readies[j]  = m_lkup_resps[j].ready;
    end
  end

  axis_demux #(
    .M_COUNT(NUM_CXUS),
    .DATA_WIDTH(1),
    .KEEP_ENABLE(0),
    //.KEEP_WIDTH(),
    .ID_ENABLE(0),
    //.ID_WIDTH(),
    .DEST_ENABLE(0),
    //.M_DEST_WIDTH(),
    //.S_DEST_WIDTH(),
    .USER_ENABLE(0),
    //.USER_WIDTH(),
    .TDEST_ROUTE(0))
  demux_lkup_resp_block (
    .clk(i_clk),
    .rst(i_rst),
    .s_axis_tdata(lkup_resp.data),
    .s_axis_tkeep('0),
    .s_axis_tvalid(lkup_resp.valid),
    .s_axis_tready(lkup_resp.ready),
    .s_axis_tlast(1'b1),
    .s_axis_tid('0),
    .s_axis_tdest('0),
    .s_axis_tuser('0),
    .m_axis_tdata(lkup_resp_datas),
    .m_axis_tkeep(),
    .m_axis_tvalid(lkup_resp_valids),
    .m_axis_tready(lkup_resp_readies),
    .m_axis_tlast(),
    .m_axis_tid(),
    .m_axis_tdest(),
    .m_axis_tuser(),
    .enable(lkup_resp.valid),
    .drop('0),
    .select(lkup_resp.id));

  /////////////////////////////////////////////////////////////////////////////////////////////////

  always_comb begin
    remove_req.valid = read_complete | write_complete;
    remove_req.data  = read_complete ? m_axi.rid[TRACK_ID_WIDTH-1:0]: m_axi.bid[TRACK_ID_WIDTH-1:0];
    remove_req.id    = 1'b0;
  end

  cx_tracker #(.DEPTH(2**TRACK_ID_WIDTH)) cx_tracker_block (
    .i_clk(i_clk),
    .i_rst(i_rst),
    .s_remove_req(remove_req),
    .s_alloc_req(alloc_req),
    .m_alloc_resp(alloc_resp),
    .s_lkup_req(lkup_req),
    .m_lkup_resp(lkup_resp));

  /////////////////////////////////////////////////////////////////////////////////////////////////
  // TODO: coherence invalidation
  
endmodule
