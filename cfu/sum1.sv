// 
// Copyright (C) 2020 
//    SCARV Project  <info@scarv.org>
//    Ben Marshall   <ben.marshall@bristol.ac.uk>
//
// This is a L3 cfu for the S1 function in the nettle-sha256 benchmark 

module sum1
(
  input logic clk,
  input logic rst,

  input logic [31:0] req_data0,
  input logic [31:0] req_data1,
  output logic [31:0] ssha256_sum1

  );

//
// Local/internal parameters and useful defines:
// ------------------------------------------------------------

`define ROR32(a,b) ((a >> b) | (a << 32-b))
`define SRL32(a,b) ((a >> b))


  assign ssha256_sum1 = `ROR32(req_data0, 6) ^ `ROR32(req_data0,11) ^ `ROR32(req_data0,25);


  //
  // Clean up macro definitions
  // ------------------------------------------------------------

  `undef ROR32
  `undef SRL32

  endmodule
