// 
// Copyright (C) 2020 
//    SCARV Project  <info@scarv.org>
//    Ben Marshall   <ben.marshall@bristol.ac.uk>
//
// This is a L3 cfu for the s1 function in the nettle-sha256 benchmark 

module sig1
(
  input logic clk,
  input logic rst,

  input logic [7:0] req_data0,
  input logic [7:0] req_data1,
  output logic [31:0] ssha256_sig1

  );

//
// Local/internal parameters and useful defines:
// ------------------------------------------------------------

`define ROR32(a,b) ((a >> b) | (a << 32-b))
`define SRL32(a,b) ((a >> b))

  logic [31:0] ssha256_sig1;


  assign ssha256_sig1 = `ROR32(req_data0,17) ^ `ROR32(req_data0,19) ^ `SRL32(req_data0,10);


  //
  // Clean up macro definitions
  // ------------------------------------------------------------

  `undef ROR32
  `undef SRL32

  endmodule
