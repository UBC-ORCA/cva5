//Name: Steven Chin
//Student ID: 40108540

module process1(input logic [31:0] A, input logic [31:0] B, input logic [31:0] C, input logic [31:0] D, input logic [31:0] E, input logic [31:0] F, input logic [31:0] G, input logic [31:0] H, 
		input logic [31:0] k_0, input logic [31:0] data_0, output logic [31:0] D_out, output logic [31:0] H_out);
	
	logic [31:0] H_new; logic [31:0] D_new; logic [31:0] S1_E; logic [31:0] CH_E; logic [31:0] S0_A; logic [31:0] MAJ_A;

	sum1 s1_e(.req_data0(E), .ssha256_sum1(S1_E));
	sum0 s0_a(.req_data0(A), .ssha256_sum0(S0_A));
	maj maj_a(.maj_op(A), .req_data0(B), .req_data1(C), .maj_out(MAJ_A));
	ch ch_e(.ch_op(E), .req_data0(F), .req_data1(G), .ch_out(CH_E));
	assign H_new = H + S1_E + CH_E + k_0 + data_0 + S0_A + MAJ_A;
	assign D_new = D + H + S1_E + CH_E + k_0 + data_0;

	assign D_out = D_new;  
	assign H_out = H_new;

endmodule 
