//Name: Steven Chin
//Student ID: 40108540

module sig0
(

  input logic [31:0] req_data0,
  output logic [31:0] ssha256_sig0

  );



	logic [31:0] op1;
	logic [31:0] op2;
	logic [31:0] op3;

	assign op1 = (req_data0 >> 7) | (req_data0 << (32 - 7));
	assign op2 = (req_data0 >> 18) | (req_data0 << (32 - 18));
	assign op3 = req_data0 >> 3;


  	assign ssha256_sig0 = op1 ^ op2 ^ op3;




  endmodule
