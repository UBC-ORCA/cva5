//Name: Steven Chin
//Student ID: 40108540

module maj
(

  input logic [31:0] maj_op,
  input logic [31:0] req_data0,
  input logic [31:0] req_data1,
  output logic [31:0] maj_out

  );

	
	assign maj_out = (maj_op & req_data0) ^ (maj_op & req_data1) ^ (req_data1 & req_data0);

  endmodule