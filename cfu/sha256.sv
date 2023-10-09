//Name: Steven Chin
//Student ID: 40108540

`define reset 4'b0000
`define read 4'b0001
`define stable 4'b0010
`define rev 4'b0011
`define done 4'b0100
`define process 4'b0101
`define read_64 4'b0110
`define stable_64 4'b0111
`define rev_64 4'b1000
`define collect 4'b1001
`define process_64 4'b1010
`define errorrrrr 4'bxxxx

module sha256(input logic clk, input logic rst_n, input logic en, output logic rdy, 
		/*output logic [7:0] addr, input logic [31:0] rddata, output logic [7:0] addr2, 
		input logic [31:0] rddata2, output logic [7:0] addr3, output logic [31:0] wrdata, 
		input logic [31:0] rddata3, output logic wren,*/ input logic [31:0] A_init, input logic [31:0] B_init,
		input logic [31:0] C_init, input logic [31:0] D_init, input logic [31:0] E_init, input logic [31:0] F_init,
		input logic [31:0] G_init, input logic [31:0] H_init, input logic [8:0] base, 
		output logic [31:0] A_final, output logic [31:0] B_final,
		output logic [31:0] C_final, output logic [31:0] D_final, output logic [31:0] E_final, output logic [31:0] F_final,
		output logic [31:0] G_final, output logic [31:0] H_final);
	
	logic [3:0] next_state;
	logic [3:0] curr_state;

	logic [7:0] addr_reg;
	logic rdy_reg;
	logic [8:0] next_index;
	logic [5:0] count;
	logic [5:0] count2;
	logic [7:0] addr_reg2;
	logic [5:0] count3;
	logic [5:0] count4;
	logic [31:0] k_0; logic [31:0] data_0; logic [31:0] k_1; logic [31:0] data_1;
	logic [31:0] k_2; logic [31:0] data_2; logic [31:0] k_3; logic [31:0] data_3;
	logic [31:0] A; logic [31:0] B; logic [31:0] C; logic [31:0] D; logic [31:0] E;
	logic [31:0] F; logic [31:0] G; logic [31:0] H;
	logic [31:0] A_out; logic [31:0] B_out; logic [31:0] C_out; logic [31:0] D_out; logic [31:0] E_out;
	logic [31:0] F_out; logic [31:0] G_out; logic [31:0] H_out;
	logic [7:0] addr_reg3;
	//logic  wren_reg;
	logic [31:0] wrdata_reg;
	logic [31:0] wt_16; logic [31:0] wt_7; logic [31:0] wt_15; logic [31:0] wt_2; logic [31:0] wt;
	logic [7:0] mem;

	////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////
	/* inferred ram and rom */
	logic[32-1:0] k_rom[0:256-1];
	logic[32-1:0] d_ram[0:256-1];
	logic[32-1:0] w_ram[0:256-1];
	initial $readmemh("C:/D/lab/sha256good/cva5pr/cva5/cfu/dmsg.hex", d_ram); //path for ubuntu: /mnt/c/D/lab/sha256good/cva5pr/cva5/cfu/dmsg.hex
	initial $readmemh("C:/D/lab/sha256good/cva5pr/cva5/cfu/kmsg.hex", k_rom); //path for ubuntu: /mnt/c/D/lab/sha256good/cva5pr/cva5/cfu/kmsg.hex
	//C:/D/lab/sha256good/cva5pr/cva5/cfu/dmsg.hex
	//C:/D/lab/sha256good/cva5pr/cva5/cfu/kmsg.hex
	////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////

	process4 compress(.A(A), .B(B), .C(C), .D(D), .E(E), .F(F), .G(G), .H(H), 
		.k_0(k_0), .data_0(data_0), .k_1(k_1), .data_1(data_1),
		.k_2(k_2), .data_2(data_2), .k_3(k_3), .data_3(data_3),
	.A_out(A_out), .B_out(B_out), .C_out(C_out), .D_out(D_out), .E_out(E_out),
	.F_out(F_out), .G_out(G_out), .H_out(H_out));

	wt_calc calc(.wt_16(wt_16), .wt_7(wt_7), .wt_15(wt_15), .wt_2(wt_2), .wt(wt));

	assign next_index = (count2 << 2) | count;
	//assign addr = addr_reg;
	assign rdy = rdy_reg;
	//assign addr2 = addr_reg2;
	//assign wren = wren_reg;
	//assign wrdata = wrdata_reg;
	//assign addr3 = addr_reg3;

	always @(*) begin 
		case(curr_state)
			`reset: next_state = `read;
			//`read: next_state = `stable;
			//`stable: next_state = `rev;
			`read: next_state = `rev;
			`rev: begin
				if(count == 4) begin
					next_state = `process;
				end
				else begin
					next_state = `read; 
				end
			end

			`process: begin
				if(count2 == 4) begin
					next_state = `read_64;
				end
				else begin
					next_state = `read; 
				end
			end

			//`read_64: next_state = `stable_64;
			`read_64: next_state = `rev_64;
			//`stable_64: next_state = `rev_64;

			`rev_64: begin
				if(count3 == 4) begin
					next_state = `collect;
				end
				else begin
					next_state = `read_64; 
				end
			end

			`collect: begin
				if(count == 4) begin
					next_state = `process_64;
				end
				else begin
					next_state = `read_64; 
				end
			end


			`process_64: begin
				if(count2 == 16) begin
					next_state = `done;
				end
				else begin
					next_state = `read_64; 
				end
			end

			`done: next_state = `done;

			default: next_state = `errorrrrr;

		endcase
	end
	
	always_ff @(posedge clk, negedge rst_n) begin
		if(~rst_n) begin

			curr_state <= `reset; 
			addr_reg <= 8'b00000000; 
			rdy_reg <= 1'b1;
			count <= 0; 
			count2 <= 0; 
			addr_reg2 <= 8'b00000000;
			k_0 <= 32'h00000000; data_0 <= 32'h00000000; k_1 <= 32'h00000000; data_1 <= 32'h00000000;
			k_2 <= 32'h00000000; data_2 <= 32'h00000000; k_3 <= 32'h00000000; data_3 <= 32'h00000000;
			A <= A_init; B <= B_init; C <= C_init; D <= D_init;
			E <= E_init; F <= F_init; G <= G_init; H <= H_init;
			wrdata_reg <= 32'h00000000;
			addr_reg3 <= 8'b00000000;
			//wren_reg <= 1'b0;
			count3 <= 0; 
			count4 <= 0; 
			wt_16 <= 32'h00000000; wt_7 <= 32'h00000000; wt_15 <= 32'h00000000; wt_2 <= 32'h00000000;
			mem <= 8'b00000000;

		end
		else begin
			if(~rdy) begin

				curr_state <= next_state; 

				case(next_state)
					`read: begin
						addr_reg <= next_index[7:0] + base;
						addr_reg2 <= next_index[7:0];
						count <= count + 1;
						//wren_reg <= 1'b0;
						mem <= next_index[7:0]; 
					end
					//`stable: begin
					//	wren_reg <= 1'b0;
					//end
					`rev: begin
						if(count - 1 == 0) begin
							//data_0 <= rddata;
							//k_0 <= rddata2;
							data_0 <= d_ram[addr_reg];
							k_0 <= k_rom[addr_reg2];
						end
						else if(count - 1 == 1) begin
							//data_1 <= rddata;
							//k_1 <= rddata2;
							data_1 <= d_ram[addr_reg];
							k_1 <= k_rom[addr_reg2];
						end
						else if(count - 1 == 2) begin
							//data_2 <= rddata;
							//k_2 <= rddata2;
							data_2 <= d_ram[addr_reg];
							k_2 <= k_rom[addr_reg2];
						end
						else begin
							//data_3 <= rddata;
							//k_3 <= rddata2;
							data_3 <= d_ram[addr_reg];
							k_3 <= k_rom[addr_reg2];
						end
						//addr_reg3 <= mem;
						//wrdata_reg <= rddata;
						//wren_reg <= 1'b1;
						w_ram[mem] <= d_ram[addr_reg];
					end

					`process: begin
						A <= E_out;
						B <= F_out;
						C <= G_out;
						D <= H_out;
						E <= A_out;
						F <= B_out;		
						G <= C_out;
						H <= D_out;
						count <= 0; 
						count2 <= count2 + 1; 
						//wren_reg <= 1'b0;
					end

					`read_64: begin
						if(count3 == 0) begin
							addr_reg3 <= next_index[7:0] - 16;
						end
						else if(count3 == 1) begin
							addr_reg3 <= next_index[7:0] - 7;
						end
						else if(count3 == 2) begin
							addr_reg3 <= next_index[7:0] - 15;
						end
						else begin
							addr_reg3 <= next_index[7:0] - 2;
						end

						addr_reg2 <= next_index[7:0];
						//wren_reg <= 1'b0;
					end
				//	`stable_64: begin
				//		wren_reg <= 1'b0;
				//	end
					`rev_64: begin
						if(count3 == 0) begin
							//wt_16 <= rddata3;
							wt_16 <= w_ram[addr_reg3];
						end
						else if(count3 == 1) begin
							//wt_7 <= rddata3;
							wt_7 <= w_ram[addr_reg3];
						end
						else if(count3 == 2) begin
							//wt_15 <= rddata3;
							wt_15 <= w_ram[addr_reg3];
						end
						else begin
							//wt_2 <= rddata3;
							wt_2 <= w_ram[addr_reg3];
						end

						if(count == 0) begin
							//k_0 <= rddata2;
							k_0 <= k_rom[addr_reg2];
							
						end
						else if(count == 1) begin
							//k_1 <= rddata2;
							k_1 <= k_rom[addr_reg2];
						end
						else if(count == 2) begin
							//k_2 <= rddata2;
							k_2 <= k_rom[addr_reg2];
						end
						else begin
							//k_3 <= rddata2;
							k_3 <= k_rom[addr_reg2];
						end
					
						count3 <= count3 + 1;
						//wren_reg <= 1'b0;
					end
					`collect: begin
						if(count == 0) begin
							data_0 <= wt;
						end
						else if(count == 1) begin
							data_1 <= wt;
						end
						else if(count == 2) begin
							data_2 <= wt;
						end
						else begin
							data_3 <= wt;
						end

						count3<=0;
						count <= count + 1;
						//addr_reg3 <= next_index[7:0];
						//wrdata_reg <= wt;
						//wren_reg <= 1'b1;
						w_ram[next_index[7:0]] <= wt;

					end

					`process_64: begin
						A <= E_out;
						B <= F_out;
						C <= G_out;
						D <= H_out;
						E <= A_out;
						F <= B_out;		
						G <= C_out;
						H <= D_out;
						count <= 0; 
						count2 <= count2 + 1; 
						//wren_reg <= 1'b0;
					end

					
					`done: begin
						rdy_reg <= 1'b1;
						//wren_reg <= 1'b0;
						A_final <= A;
						B_final <= B;
						C_final <= C;
						D_final <= D;
						E_final <= E;
						F_final <= F;
						G_final <= G;
						H_final <= H;
					end

				endcase

			end
			else begin
				if(en) begin
					curr_state <= `reset; 
					addr_reg <= 8'b00000000; 
					rdy_reg <= 1'b0;
					count <= 0; 
					count2 <= 0; 
					addr_reg2 <= 8'b00000000;
					k_0 <= 32'h00000000; data_0 <= 32'h00000000; k_1 <= 32'h00000000; data_1 <= 32'h00000000;
					k_2 <= 32'h00000000; data_2 <= 32'h00000000; k_3 <= 32'h00000000; data_3 <= 32'h00000000;
					A <= A_init; B <= B_init; C <= C_init; D <= D_init;
					E <= E_init; F <= F_init; G <= G_init; H <= H_init;
					wrdata_reg <= 32'h00000000;
					addr_reg3 <= 8'b00000000;
					//wren_reg <= 1'b0;
					count3 <= 0; 
					count4 <= 0; 
					wt_16 <= 32'h00000000; wt_7 <= 32'h00000000; wt_15 <= 32'h00000000; wt_2 <= 32'h00000000;
					mem <= 8'b00000000;
				end

			end
		end

	end

endmodule 

//Things:
//Skipped the wait states for mem reads: stable_64 and stable 

