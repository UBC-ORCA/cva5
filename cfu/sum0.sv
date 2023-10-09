//Name: Steven Chin
//Student ID: 40108540

module sum0
(

  input logic [31:0] req_data0,
  output logic [31:0] ssha256_sum0

  );

	logic [31:0] op1;
	logic [31:0] op2;
	logic [31:0] op3;

	assign op1 = (req_data0 >> 2) | (req_data0 << (32 - 2));
	assign op2 = (req_data0 >> 13) | (req_data0 << (32 - 13));
	assign op3 = (req_data0 >> 22) | (req_data0 << (32 - 22));

	assign ssha256_sum0 = op1 ^ op2 ^ op3;


  endmodule
