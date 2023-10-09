//Name: Steven Chin
//Student ID: 40108540

module ch
(

  input logic [31:0] ch_op,
  input logic [31:0] req_data0,
  input logic [31:0] req_data1,
  output logic [31:0] ch_out

  );

	assign ch_out = (ch_op & req_data0) ^ (~ch_op & req_data1);

  endmodule