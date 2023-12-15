

module sha256_task(input logic clk, input logic rst_n, output logic [2:0] out,

		output logic [31:0] A_final, output logic [31:0] B_final, output logic [31:0] C_final, output logic [31:0] D_final,
		output logic [31:0] E_final, output logic [31:0] F_final, output logic [31:0] G_final, output logic [31:0] H_final,
		input logic op, input init_once_rst);

	logic en; 
	logic rdy;
	logic init_once;

	sha256_top sha(.clk(clk), .rst_n(rst_n), .en(en), .rdy(rdy), .num(32),
			.A_final_out(A_final), .B_final_out(B_final), .C_final_out(C_final), .D_final_out(D_final),
			.E_final_out(E_final), .F_final_out(F_final), .G_final_out(G_final), .H_final_out(H_final));


	assign out = {init_once,en,rdy};

	always @(posedge clk, negedge rst_n) begin //may need to add more waits here
		if(~rst_n) begin
			en <= 1'b0;
			init_once <= 1'b0;
		end
		else begin
			if(init_once_rst == 1) begin
				init_once <= 1'b0;
			end
			if(op == 1) begin

				if(rdy == 1'b1 && init_once == 1'b0) begin
					en <= 1'b1;
					init_once <= 1'b1;
				end
				else begin
					en <= 1'b0;
				end

			end
		end
	end


endmodule: sha256_task
