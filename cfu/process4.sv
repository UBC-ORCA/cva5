//Name: Steven Chin
//Student ID: 40108540

module process4(input logic [31:0] A, input logic [31:0] B, input logic [31:0] C, input logic [31:0] D, input logic [31:0] E, input logic [31:0] F, input logic [31:0] G, input logic [31:0] H, 
		input logic [31:0] k_0, input logic [31:0] data_0, input logic [31:0] k_1, input logic [31:0] data_1,
		input logic [31:0] k_2, input logic [31:0] data_2, input logic [31:0] k_3, input logic [31:0] data_3,
output logic [31:0] A_out, output logic [31:0] B_out, output logic [31:0] C_out, output logic [31:0] D_out, output logic [31:0] E_out,
	output logic [31:0] F_out, output logic [31:0] G_out, output logic [31:0] H_out);
	
	logic [31:0] H_new; logic [31:0] D_new; logic [31:0] S1_E; logic [31:0] CH_E; logic [31:0] S0_A; logic [31:0] MAJ_A;
	logic [31:0] G_new; logic [31:0] C_new; logic [31:0] S1_D; logic [31:0] CH_D; logic [31:0] S0_H; logic [31:0] MAJ_H;
	logic [31:0] F_new; logic [31:0] B_new; logic [31:0] S1_C; logic [31:0] CH_C; logic [31:0] S0_G; logic [31:0] MAJ_G;
	logic [31:0] E_new; logic [31:0] A_new; logic [31:0] S1_B; logic [31:0] CH_B; logic [31:0] S0_F; logic [31:0] MAJ_F;

	sum1 s1_e(.req_data0(E), .ssha256_sum1(S1_E));
	sum0 s0_a(.req_data0(A), .ssha256_sum0(S0_A));
	maj maj_a(.maj_op(A), .req_data0(B), .req_data1(C), .maj_out(MAJ_A));
	ch ch_e(.ch_op(E), .req_data0(F), .req_data1(G), .ch_out(CH_E));
	assign H_new = H + S1_E + CH_E + k_0 + data_0 + S0_A + MAJ_A;
	assign D_new = D + H + S1_E + CH_E + k_0 + data_0;

	sum1 s1_d(.req_data0(D_new), .ssha256_sum1(S1_D));
	sum0 s0_h(.req_data0(H_new), .ssha256_sum0(S0_H));
	maj maj_h(.maj_op(H_new), .req_data0(A), .req_data1(B), .maj_out(MAJ_H));
	ch ch_d(.ch_op(D_new), .req_data0(E), .req_data1(F), .ch_out(CH_D));
	assign G_new = G + S1_D + CH_D + k_1 + data_1+ S0_H + MAJ_H;
	assign C_new = C + G + S1_D + CH_D + k_1 + data_1;

	sum1 s1_c(.req_data0(C_new), .ssha256_sum1(S1_C));
	sum0 s0_g(.req_data0(G_new), .ssha256_sum0(S0_G));
	maj maj_g(.maj_op(G_new), .req_data0(H_new), .req_data1(A), .maj_out(MAJ_G));
	ch ch_c(.ch_op(C_new), .req_data0(D_new), .req_data1(E), .ch_out(CH_C));
	assign F_new = F + S1_C + CH_C + k_2 + data_2 + S0_G + MAJ_G;
	assign B_new = B + F + S1_C + CH_C + k_2 + data_2;

	sum1 s1_b(.req_data0(B_new), .ssha256_sum1(S1_B));
	sum0 s0_f(.req_data0(F_new), .ssha256_sum0(S0_F));
	maj maj_f(.maj_op(F_new), .req_data0(G_new), .req_data1(H_new), .maj_out(MAJ_F));
	ch ch_b(.ch_op(B_new), .req_data0(C_new), .req_data1(D_new), .ch_out(CH_B));
	assign E_new = E + S1_B + CH_B + k_3 + data_3 + S0_F + MAJ_F;
	assign A_new = A + E + S1_B + CH_B + k_3 + data_3;

	assign A_out = A_new; 
	assign B_out = B_new;
	assign C_out = C_new; 
	assign D_out = D_new;  
	assign E_out = E_new;
	assign F_out = F_new; 
	assign G_out = G_new; 
	assign H_out = H_new;

endmodule 
