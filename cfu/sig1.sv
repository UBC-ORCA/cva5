//Name: Steven Chin
//Student ID: 40108540

module sig1
(

  input logic [31:0] req_data0,
  output logic [31:0] ssha256_sig1

  );


	logic [31:0] op1;
	logic [31:0] op2;
	logic [31:0] op3;

	assign op1 = (req_data0 >> 17) | (req_data0 << (32 - 17));
	assign op2 = (req_data0 >> 19) | (req_data0 << (32 - 19));
	assign op3 = req_data0 >> 10;



  	assign ssha256_sig1 = op1 ^ op2 ^ op3;


  endmodule
