//Name: Steven Chin
//Student ID: 40108540

`define reset 4'b0000
`define set 4'b0001
`define wait1 4'b0010
`define wait2 4'b0011
`define wait_rdy 4'b0100
`define calc 4'b0101
`define reload 4'b0110
`define done 4'b0111
`define errorrrrr 4'bxxxx

module sha256_top(input logic clk, input logic rst_n, input logic en, output logic rdy, 
		/*output logic [7:0] addr, input logic [31:0] rddata, output logic [7:0] addr2, 
		input logic [31:0] rddata2, output logic [7:0] addr3, output logic [31:0] wrdata, 
		input logic [31:0] rddata3, output logic wren,*/ input logic [8:0] num,
		
		output logic [31:0] A_final_out, output logic [31:0] B_final_out, output logic [31:0] C_final_out, output logic [31:0] D_final_out,
		output logic [31:0] E_final_out, output logic [31:0] F_final_out, output logic [31:0] G_final_out, output logic [31:0] H_final_out);
	
	logic [3:0] next_state;
	logic [3:0] curr_state;

	logic rdy_reg;

	logic en2;
	logic rdy2;
	logic [31:0] A_init;
	logic [31:0] B_init;
	logic [31:0] C_init;
	logic [31:0] D_init;
	logic [31:0] E_init;
	logic [31:0] F_init;
	logic [31:0] G_init;
	logic [31:0] H_init;
	logic [8:0] base;
	logic [31:0] A_final; logic [31:0] B_final;
	logic [31:0] C_final; logic [31:0] D_final; 
	logic [31:0] E_final; logic [31:0] F_final;
	logic [31:0] G_final; logic [31:0] H_final;

	sha256 sha(.clk(clk), .rst_n(rst_n), .en(en2), .rdy(rdy2), 
		/*.addr(addr), .rddata(rddata), .addr2(addr2), 
		.rddata2(rddata2), .addr3(addr3), .wrdata(wrdata), 
		.rddata3(rddata3), .wren(wren),*/ .A_init(A_init), .B_init(B_init),
		.C_init(C_init), .D_init(D_init), .E_init(E_init), .F_init(F_init),
		.G_init(G_init), .H_init(H_init), .base(base),
		.A_final(A_final), .B_final(B_final), .C_final(C_final), .D_final(D_final), .E_final(E_final),
		.F_final(F_final), .G_final(G_final), .H_final(H_final));
	

	assign rdy = rdy_reg;

	always @(*) begin 
		case(curr_state)
			`reset: next_state = `set;
			`set: next_state = `wait1;
			`wait1: next_state = `wait2;
			`wait2: next_state = `wait_rdy;
			`wait_rdy: begin
				if(rdy2 == 1) begin
					next_state = `calc;
				end
				else begin
					next_state = `wait_rdy; 
				end
			end
			`calc: begin
				if(base == num) begin
					next_state = `done;
				end
				else begin
					next_state = `reload; 
				end
			end
			`reload: next_state = `set;

			`done: next_state = `done;

			default: next_state = `errorrrrr;

		endcase
	end
	
	always_ff @(posedge clk, negedge rst_n) begin
		if(~rst_n) begin

			curr_state <= `reset; 
			rdy_reg <= 1'b1;
			en2 <= 1'b0;
			A_init <= 32'h6a09e667; B_init <= 32'hbb67ae85; C_init <= 32'h3c6ef372; D_init <= 32'ha54ff53a;
			E_init <= 32'h510e527f; F_init <= 32'h9b05688c; G_init <= 32'h1f83d9ab; H_init <= 32'h5be0cd19;
			base <= 0;

		end
		else begin
			if(~rdy) begin

				curr_state <= next_state; 

				case(next_state)
					`set: begin
						en2 <= 1'b1;
					end

					`wait1: begin 
						en2 <= 1'b0;
					end

					`wait2: begin 
						en2 <= 1'b0;
					end

					`wait_rdy: begin 
						en2 <= 1'b0;
					end

					`calc: begin
						base <= base + 16;
						en2 <= 1'b0;
					end

					`reload: begin
						en2 <= 1'b0;
						A_init <= A_init + A_final;
						B_init <= B_init + B_final;
						C_init <= C_init + C_final;
						D_init <= D_init + D_final;
						E_init <= E_init + E_final;
						F_init <= F_init + F_final;
						G_init <= G_init + G_final;
						H_init <= H_init + H_final;

					end
				
				
					`done: begin
						rdy_reg <= 1'b1;
						en2 <= 1'b0;

						/*A_final <= A_init + A_final; //assign new outs here A_final_out
						B_final <= B_init + B_final;
						C_final <= C_init + C_final;
						D_final <= D_init + D_final;
						E_final <= E_init + E_final;
						F_final <= F_init + F_final;
						G_final <= G_init + G_final;
						H_final <= H_init + H_final;*/
						A_final_out <= A_init + A_final; 
						B_final_out <= B_init + B_final;
						C_final_out <= C_init + C_final;
						D_final_out <= D_init + D_final;
						E_final_out <= E_init + E_final;
						F_final_out <= F_init + F_final;
						G_final_out <= G_init + G_final;
						H_final_out <= H_init + H_final;
					end

				endcase

			end
			else begin
				if(en) begin
					curr_state <= `reset; 
					rdy_reg <= 1'b0;
					en2 <= 1'b0;
					A_init <= 32'h6a09e667; B_init <= 32'hbb67ae85; C_init <= 32'h3c6ef372; D_init <= 32'ha54ff53a;
					E_init <= 32'h510e527f; F_init <= 32'h9b05688c; G_init <= 32'h1f83d9ab; H_init <= 32'h5be0cd19;
					base <= 0;

				end

			end
		end

	end
endmodule
