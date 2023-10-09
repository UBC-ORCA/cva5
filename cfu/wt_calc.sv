//Name: Steven Chin
//Student ID: 40108540

module wt_calc(input logic [31:0] wt_16, input logic [31:0] wt_7, input logic [31:0] wt_15, input logic [31:0] wt_2, output logic [31:0] wt);
	logic [31:0] ssha256_sig0; logic [31:0] ssha256_sig1;
	sig0 s0(.req_data0(wt_15), .ssha256_sig0(ssha256_sig0));
	sig1 s1(.req_data0(wt_2), .ssha256_sig1(ssha256_sig1));
	assign wt = wt_16 + wt_7 + ssha256_sig0 + ssha256_sig1;
endmodule 