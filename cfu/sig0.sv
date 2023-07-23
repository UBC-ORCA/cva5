// 
// Copyright (C) 2020 
//    SCARV Project  <info@scarv.org>
//    Ben Marshall   <ben.marshall@bristol.ac.uk>
//
// This is a L3 cfu for the s0 function in the nettle-sha256 benchmark 

module sig0
(
  input logic clk,
  input logic rst,

  cfu_interface.slave cfu
  );

//
// Local/internal parameters and useful defines:
// ------------------------------------------------------------

`define ROR32(a,b) ((a >> b) | (a << 32-b))
`define SRL32(a,b) ((a >> b))

  logic req_ready;
  logic resp_valid;

  logic [31:0] ssha256_sig0;


  assign ssha256_sig0 = `ROR32(rs1, 7) ^ `ROR32(rs1,18) ^ `SRL32(rs1, 3);


  always_ff @(posedge clk) begin
    if (cfu.req_valid & req_ready) begin
      cfu.resp_id     <= cfu.req_id;
      cfu.resp_status <= 0;
      cfu.resp_data   <= ssha256_sig0;
    end
  end

  set_clr_reg_with_rst #(.SET_OVER_CLR(0), .WIDTH(1), .RST_VALUE(1)) x_req_ready (
    .clk, 
    .rst,
    .set(resp_valid & cfu.resp_ready),
    .clr(cfu.req_valid & req_ready),
    .result(req_ready)
  );

  set_clr_reg_with_rst #(.SET_OVER_CLR(1), .WIDTH(1), .RST_VALUE(0)) x_resp_valid (
    .clk, 
    .rst,
    .set(cfu.req_valid & req_ready),
    .clr(cfu.resp_ready),
    .result(resp_valid)
  );

  assign cfu.req_ready = req_ready;
  assign cfu.resp_valid = resp_valid;

  //
  // Clean up macro definitions
  // ------------------------------------------------------------

  `undef ROR32
  `undef SRL32

  endmodule
