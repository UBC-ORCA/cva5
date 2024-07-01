module cx_tracker
  import cva5_config::*;
  import riscv_types::*;
  import cva5_types::*;
  import cxu_types::*;
  import cx_dma_types::*;
  #(
    parameter DEPTH = 8
  )
  ( 
    input logic i_clk,
    input logic i_rst,
    gen_interface.master  m_alloc_resp,
    gen_interface.master  m_lkup_resp,
    gen_interface.slave   s_alloc_req,
    gen_interface.slave   s_lkup_req,
    gen_interface.slave   s_remove_req
  );

  //Register-based memory blocks
  logic [DEPTH-1:0] match_list;
  logic [DEPTH-1:0] next_free_list;
  logic [DEPTH-1:0] free_list;

  //LUTRAM-based memory blocks
  (* ramstyle = "MLAB, no_rw_check" *) track_entry_t entries [DEPTH];

  ////////////////////////////////////////////////////
  //Implementation     
  logic add;
  track_entry_t add_entry;
  logic [$clog2(DEPTH)-1:0] add_index;
  logic remove;
  logic [$clog2(DEPTH)-1:0] remove_index;
  logic empty;
  logic full;
  logic [$clog2(DEPTH)-1:0] next_add_index;
  logic [DEPTH-1:0] add_one_hot;
  logic [DEPTH-1:0] remove_one_hot;

  priority_enc #(
    .WIDTH(DEPTH),
    .LSB_HIGH_PRIORITY(1))
  priority_encoder_block (
    .input_unencoded(next_free_list),
    .output_encoded(next_add_index),
    .output_unencoded(),
    .output_valid());

  always_comb begin
    add = s_alloc_req.ready & s_alloc_req.valid;
    add_entry = s_alloc_req.data;
    remove = s_remove_req.valid;
    remove_index = s_remove_req.data;
    remove_one_hot = DEPTH'(remove) << remove_index;
    add_one_hot = DEPTH'(add) << add_index;
  end

  always_ff @ (posedge i_clk) begin
    free_list <= next_free_list; 
    add_index <= next_add_index;

    if (i_rst) begin
      add_index <= 0;
      free_list <= {DEPTH{1'b1}};
    end
  end

  assign next_free_list = (free_list & ~add_one_hot) | remove_one_hot;

  always_comb begin
    full  = ~|free_list;
    empty = &free_list;
  end

  always_ff @ (posedge i_clk) begin
    if (add) begin
      entries[add_index] <= add_entry;
    end
  end

  fifo_interface #(.DATA_WIDTH(m_alloc_resp.ID_WIDTH+m_alloc_resp.DATA_WIDTH)) alloc_resp_fifo ();

  cva5_fifo #(.DATA_WIDTH(m_alloc_resp.ID_WIDTH+m_alloc_resp.DATA_WIDTH), 
              .FIFO_DEPTH(2)) 
  alloc_resp_fifo_block (
    .clk (i_clk),
    .rst (i_rst),
    .fifo (alloc_resp_fifo));

  always_comb begin
    m_alloc_resp.valid = alloc_resp_fifo.valid;
    {m_alloc_resp.id,m_alloc_resp.data} = alloc_resp_fifo.data_out;
    alloc_resp_fifo.potential_push = s_alloc_req.ready & s_alloc_req.valid;
    alloc_resp_fifo.push = alloc_resp_fifo.potential_push;
    alloc_resp_fifo.data_in = {s_alloc_req.id,add_index};
    alloc_resp_fifo.potential_pop = m_alloc_resp.valid & m_alloc_resp.ready;
    alloc_resp_fifo.pop  = alloc_resp_fifo.potential_pop;
  end

  assign s_alloc_req.ready  = ~full & ~alloc_resp_fifo.full;
  assign s_remove_req.ready = 1'b1;

  ////////////////////////////////////////////////////
  // Lookup
  ////////////////////////////////////////////////////

  logic lkup_in_entry_bounds;
  logic entry_in_lkup_bounds;
  logic type_conflict;
  logic entry_in_use;
  track_entry_t lkup_entry;
  logic lkup_valid;

  always_comb begin
    lkup_entry = s_lkup_req.data;
    lkup_valid = s_lkup_req.ready & s_lkup_req.valid;

    for (int i = 0; i < DEPTH; i++) begin
      entry_in_use  = ~free_list[i] & ~remove_one_hot[i];
      lkup_in_entry_bounds = lkup_entry.base_address >= entries[i].base_address && 
                             lkup_entry.end_address  <= entries[i].end_address;
      entry_in_lkup_bounds = entries[i].base_address >= lkup_entry.base_address && 
                             entries[i].end_address  <= lkup_entry.end_address;
      type_conflict = lkup_entry.rw || entries[i].rw;
      match_list[i] = lkup_valid & entry_in_use & type_conflict & 
                      (lkup_in_entry_bounds | entry_in_lkup_bounds);
    end
  end

  fifo_interface #(.DATA_WIDTH(m_lkup_resp.ID_WIDTH + m_lkup_resp.DATA_WIDTH)) lkup_resp_fifo ();

  cva5_fifo #(.DATA_WIDTH(m_lkup_resp.ID_WIDTH + m_lkup_resp.DATA_WIDTH), 
              .FIFO_DEPTH(2))
  lkup_resp_fifo_block (
    .clk (i_clk),
    .rst (i_rst),
    .fifo (lkup_resp_fifo));

  always_comb begin
    m_lkup_resp.valid = lkup_resp_fifo.valid;
    {m_lkup_resp.id,m_lkup_resp.data} = lkup_resp_fifo.data_out;
    lkup_resp_fifo.potential_push = s_lkup_req.ready & s_lkup_req.valid;
    lkup_resp_fifo.push = lkup_resp_fifo.potential_push;
    lkup_resp_fifo.data_in = {s_lkup_req.id,|match_list};
    lkup_resp_fifo.potential_pop = m_lkup_resp.valid & m_lkup_resp.ready;
    lkup_resp_fifo.pop  = lkup_resp_fifo.potential_pop;
  end

  assign s_lkup_req.ready = ~lkup_resp_fifo.full;

  ////////////////////////////////////////////////////
  //End of Implementation
  ////////////////////////////////////////////////////

  ////////////////////////////////////////////////////
  //Assertions

  assert property (@(posedge i_clk) disable iff (i_rst) add |-> free_list[add_index]) 
                                            else $error("tracker: allocating occupied slot");
  assert property (@(posedge i_clk) disable iff (i_rst) remove |-> ~free_list[remove_index]) 
                                            else $error("tracker: deallocating empty slot");
  //TODO actual vs expected removes
endmodule
