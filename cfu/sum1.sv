//Name: Steven Chin
//Student ID: 40108540

module sum1
(

  input logic [31:0] req_data0,
  output logic [31:0] ssha256_sum1

  );

	logic [31:0] op1;
	logic [31:0] op2;
	logic [31:0] op3;

	assign op1 = (req_data0 >> 6) | (req_data0 << (32 - 6));
	assign op2 = (req_data0 >> 11) | (req_data0 << (32 - 11));
	assign op3 = (req_data0 >> 25) | (req_data0 << (32 - 25));

  	assign ssha256_sum1 = op1 ^ op2 ^ op3;


  endmodule
