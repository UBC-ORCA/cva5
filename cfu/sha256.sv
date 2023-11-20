

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
`define one 4'b1011
`define errorrrrr 4'bxxxx

`define two 4'b1100
`define three 4'b1101

module sha256(input logic clk, input logic rst_n, input logic en, output logic rdy, 
		input logic [31:0] A_init, input logic [31:0] B_init,
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

	logic [31:0] data_val; logic [31:0] k_val; logic [31:0] D_val; logic [31:0] H_val;

	logic [1:0] init_counter;
	logic [1:0] init_counter64;
	logic [5:0] pop_counter;
	logic pop_en;
	logic [1:0] ele_counter;

///////////////////////////////////
	//fifo declarations
	logic push_16;
    	logic pop_16;
    	logic [31:0] data_in_16;
    	logic [31:0] data_out_16;
    	logic valid_16;
    	logic full_16;
	logic push_15;
    	logic pop_15;
    	logic [31:0] data_in_15;
    	logic [31:0] data_out_15;
    	logic valid_15;
    	logic full_15;
	logic push_7;
    	logic pop_7;
    	logic [31:0] data_in_7;
    	logic [31:0] data_out_7;
    	logic valid_7;
    	logic full_7;
	logic push_2;
    	logic pop_2;
    	logic [31:0] data_in_2;
    	logic [31:0] data_out_2;
    	logic valid_2;
    	logic full_2;

	logic potential_push_16;
	logic potential_push_15;
	logic potential_push_7;
	logic potential_push_2;

	logic [6:0] setup_counter;

	logic push_w;
    	logic pop_w;
    	logic [31:0] data_in_w;
    	logic [31:0] data_out_w;
    	logic valid_w;
    	logic full_w;
	logic potential_push_w;


	fifo_interface #(.DATA_WIDTH(32)) lq_16();
	fifo_interface #(.DATA_WIDTH(32)) lq_15();
	fifo_interface #(.DATA_WIDTH(32)) lq_7();
	fifo_interface #(.DATA_WIDTH(32)) lq_2();

	fifo_interface #(.DATA_WIDTH(32)) w_fifo_val();

	cva5_fifo #(.DATA_WIDTH(32), .FIFO_DEPTH(32))
    	lq_16_fifo (.clk(clk), .rst(~rst_n), .fifo(lq_16));
	
	cva5_fifo #(.DATA_WIDTH(32), .FIFO_DEPTH(32))
    	lq_15_fifo (.clk(clk), .rst(~rst_n), .fifo(lq_15));

	cva5_fifo #(.DATA_WIDTH(32), .FIFO_DEPTH(32))
    	lq_7_fifo (.clk(clk), .rst(~rst_n), .fifo(lq_7));

	cva5_fifo #(.DATA_WIDTH(32), .FIFO_DEPTH(32))
    	lq_2_fifo (.clk(clk), .rst(~rst_n), .fifo(lq_2));

	cva5_fifo #(.DATA_WIDTH(32), .FIFO_DEPTH(32))
    	lq_w_fifo (.clk(clk), .rst(~rst_n), .fifo(w_fifo_val));  //should change depth here

	assign w_fifo_val.push = push_w;
	assign w_fifo_val.pop = pop_w;
	assign w_fifo_val.data_in = data_in_w;
	assign data_out_w = w_fifo_val.data_out;
	assign valid_w = w_fifo_val.valid;
	assign full_w = w_fifo_val.full;
	assign w_fifo_val.potential_push = potential_push_w;

	assign lq_16.push = push_16;
	assign lq_16.pop = pop_16;
	assign lq_16.data_in = data_in_16;
	assign data_out_16 = lq_16.data_out;
	assign valid_16 = lq_16.valid;
	assign full_16 = lq_16.full;

	assign lq_15.push = push_15;
	assign lq_15.pop = pop_15;
	assign lq_15.data_in = data_in_15;
	assign data_out_15 = lq_15.data_out;
	assign valid_15 = lq_15.valid;
	assign full_15 = lq_15.full;

	assign lq_7.push = push_7;
	assign lq_7.pop = pop_7;
	assign lq_7.data_in = data_in_7;
	assign data_out_7 = lq_7.data_out;
	assign valid_7 = lq_7.valid;
	assign full_7 = lq_7.full;

	assign lq_2.push = push_2;
	assign lq_2.pop = pop_2;
	assign lq_2.data_in = data_in_2;
	assign data_out_2 = lq_2.data_out;
	assign valid_2 = lq_2.valid;
	assign full_2 = lq_2.full;

	assign lq_16.potential_push = potential_push_16;
	assign lq_15.potential_push = potential_push_15;
	assign lq_7.potential_push = potential_push_7;
	assign lq_2.potential_push = potential_push_2;

	//assign wt_16 = lq_16.data_out;
	//assign wt_15 = lq_15.data_out;
	//assign wt_7 = lq_7.data_out;
	//assign wt_2 = lq_2.data_out;

//another fifo for w value

	

	
//////////////////////////////////


	////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////
	/* inferred ram and rom */
	logic[32-1:0] k_rom[0:256-1];
	logic[32-1:0] d_ram[0:256-1];
	logic[32-1:0] w_ram[0:256-1];
	initial $readmemh("/mnt/c/D/lab/sha256good/cva5pr/cva5/cfu/dmsg.hex", d_ram); //path for ubuntu: /mnt/c/D/lab/sha256good/cva5pr/cva5/cfu/dmsg.hex
	initial $readmemh("/mnt/c/D/lab/sha256good/cva5pr/cva5/cfu/kmsg.hex", k_rom); //path for ubuntu: /mnt/c/D/lab/sha256good/cva5pr/cva5/cfu/kmsg.hex
	initial $readmemh("/mnt/c/D/lab/sha256good/cva5pr/cva5/cfu/wmsg.hex", w_ram); //path for ubuntu: /mnt/c/D/lab/sha256good/cva5pr/cva5/cfu/wmsg.hex
	//C:/D/lab/sha256good/cva5pr/cva5/cfu/dmsg.hex
	//C:/D/lab/sha256good/cva5pr/cva5/cfu/kmsg.hex
	//C:/D/lab/sha256good/cva5pr/cva5/cfu/wmsg.hex
	////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////


	process1 round(.A(A), .B(B), .C(C), .D(D), .E(E), .F(F), .G(G), .H(H), .k_0(k_val), .data_0(data_val), .D_out(D_val), .H_out(H_val));


	wt_calc calc(.wt_16(wt_16), .wt_7(wt_7), .wt_15(wt_15), .wt_2(wt_2), .wt(wt));


	assign next_index = (count2 << 2) | count;

	assign rdy = rdy_reg;

	always @(*) begin 
		case(curr_state)

			`reset: next_state = `one;

			`one: begin
				if(count == 4) begin
					next_state = `process;
				end
				else begin
					next_state = `one; 
				end
			end

			`process: begin
				if(count2 == 4) begin
					//next_state = `read_64;
					next_state = `two;
				end
				else begin
					next_state = `one; 
				end
			end

			`two: next_state = `three;
			`three: next_state = `read_64;

			`read_64: begin
				if(pop_counter == 50) begin
					next_state = `done;
				end
				else begin
					next_state = `read_64; 
				end

			end


			/*`read_64: next_state = `rev_64;

			`rev_64: begin
				if(count3 == 4) begin
					next_state = `collect;
				end
				else begin
					next_state = `read_64; 
				end
			end

			`collect: next_state = `stable_64;

			`stable_64: begin
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
			end*/

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

			init_counter <= 0;

			setup_counter <= 0;

			push_16 <= 0;
			pop_16 <= 0;
			data_in_16 <= 0;
			potential_push_16 <= 0;

			push_2 <= 0;
			pop_2 <= 0;
			data_in_2 <= 0;
			potential_push_2 <= 0;

			push_w <= 0;
			pop_w <= 0;
			data_in_w <= 0;
			potential_push_w <= 0;

			push_15 <= 0;
			pop_15 <= 0;
			data_in_15 <= 0;
			potential_push_15 <= 0;

			push_7 <= 0;
			pop_7 <= 0;
			data_in_7 <= 0;
			potential_push_7 <= 0;

			init_counter64 <= 0;

			pop_counter <= 0;

			pop_en <= 1;

			ele_counter <= 0;


//reset fifo control signals here

		end
		else begin
			if(~rdy) begin

				curr_state <= next_state; 

				case(next_state)
					`one: begin
						/* set new addresses for d and k memory */
						addr_reg <= next_index[7:0] + base;
						addr_reg2 <= next_index[7:0];
						count <= count + 1;
						mem <= next_index[7:0]; 
						///////////////////////////////////////////

						/* receive data from d and k memory */
						if(init_counter >= 1) begin
							data_val <= d_ram[addr_reg];
							k_val <= k_rom[addr_reg2];
							//w_ram[mem] <= d_ram[addr_reg];
						end
						///////////////////////////////////////////

						/* update A-H buffer values */
						if(init_counter >= 2) begin
							A <= H_val;
							B <= A;
							C <= B;
							D <= C;
							E <= D_val;
							F <= E;
							G <= F;
							H <= G;
						end
						//////////////////////////////////////////

						/* increment counter */
						if(init_counter != 3) begin
							init_counter <= init_counter +1;
						end

						/* setup the w memory */
						//addr_reg3 <= next_index[7:0] + base + 14;
						if(setup_counter  < 7) begin
							addr_reg3 <= next_index[7:0] + (base << 2) + 9;
						end
						
						//need to assign fifo control signals here

						if(setup_counter > 0) begin
							push_16 <= 1;
							data_in_16 <= d_ram[addr_reg];
							potential_push_16 <= 1;

						end
						else begin
							//turn off signals here
							push_16 <= 0;
							data_in_16 <= 0;
							potential_push_16 <= 0;
						end

						if(setup_counter > 0  && setup_counter  < 8) begin
							push_7 <= 1;
							data_in_7 <= w_ram[addr_reg3];
							potential_push_7 <= 1;
						end
						else begin
							//turn off signals here
							push_7 <= 0;
							data_in_7 <= 0;
							potential_push_7 <= 0;
						end

						if(setup_counter > 1  && setup_counter < 17) begin
							push_15 <= 1;
							data_in_15 <= d_ram[addr_reg];
							potential_push_15 <= 1;

						end
						else begin
							//turn off signals here
							push_15 <= 0;
							data_in_15 <= 0;
							potential_push_15 <= 0;
						end

						if(setup_counter >= 15  && setup_counter < 17) begin
							push_2 <= 1;
							data_in_2 <= d_ram[addr_reg];
							potential_push_2 <= 1;

						end
						else begin
							//turn off signals here
							push_2 <= 0;
							data_in_2 <= 0;
							potential_push_2 <= 0;
						end

						



					/*	if(setup_counter > 8) begin
							pop_16 <= 1;
							pop_2 <= 1;
							pop_15 <= 1;
						end

						if(setup_counter > 9) begin
							wt_7 <= d_ram[addr_reg];
							wt_16 <= data_out_16;
							wt_15 <= data_out_15;
							wt_2 <= data_out_2;
						end

						if(setup_counter > 10) begin
							//collect val calc val here
							push_w <= 1;
							//pop_15 <= 0;
							data_in_w <= wt;
							potential_push_w <= 1;
						end*/

						//increment counter
						setup_counter <= setup_counter + 1;

						//////////////////////////////////////////

/*assign lq_16.push = push_16;
	assign lq_16.pop = pop_16;
	assign lq_16.data_in = data_in_16;
	assign data_out_16 = lq_16.data_out;
	assign valid_16 = lq_16.valid;
	assign full_16 = lq_16.full; 

reset fifo signals
assign fifo signals
set up w fifo
also reset counter under en
check setup counter incrementation
continue pushing to fifo terminate condition
check fifo reset signal
check w mem setup
check conrol signals on the second half
make sure all fifo control signals are reset properly
edit state transitions
check counter widths
check all counter increments
*/
					end


					`process: begin
						count <= 0; 
						count2 <= count2 + 1; 
						//wren_reg <= 1'b0;


						push_16 <= 0;
						push_2 <= 0;
						push_7 <= 0;
						push_15 <= 0;
						potential_push_16 <= 0;
						potential_push_2 <= 0;
						potential_push_7 <= 0;
						potential_push_15 <= 0;
						
					end

					`two: begin 
						data_val <= d_ram[addr_reg];
							k_val <= k_rom[addr_reg2];
							//w_ram[mem] <= d_ram[addr_reg];

						A <= H_val;
						B <= A;
						C <= B;
						D <= C;
						E <= D_val;
						F <= E;
						G <= F;
						H <= G;


//need to assign fifo control signals here

						//need to assign fifo control signals here

						if(setup_counter > 0) begin
							push_16 <= 1;
							data_in_16 <= d_ram[addr_reg];
							potential_push_16 <= 1;

						end
						else begin
							//turn off signals here
							push_16 <= 0;
							data_in_16 <= 0;
							potential_push_16 <= 0;
						end

						if(setup_counter > 0  && setup_counter  < 8) begin
							push_7 <= 1;
							data_in_7 <= w_ram[addr_reg3];
							potential_push_7 <= 1;
						end
						else begin
							//turn off signals here
							push_7 <= 0;
							data_in_7 <= 0;
							potential_push_7 <= 0;
						end

						if(setup_counter > 1  && setup_counter < 17) begin
							push_15 <= 1;
							data_in_15 <= d_ram[addr_reg];
							potential_push_15 <= 1;

						end
						else begin
							//turn off signals here
							push_15 <= 0;
							data_in_15 <= 0;
							potential_push_15 <= 0;
						end

						if(setup_counter >= 15  && setup_counter < 17) begin
							push_2 <= 1;
							data_in_2 <= d_ram[addr_reg];
							potential_push_2 <= 1;

						end
						else begin
							//turn off signals here
							push_2 <= 0;
							data_in_2 <= 0;
							potential_push_2 <= 0;
						end

						
					end

					`three: begin
						A <= H_val;
						B <= A;
						C <= B;
						D <= C;
						E <= D_val;
						F <= E;
						G <= F;
						H <= G;

						push_16 <= 0;
						push_2 <= 0;
						push_7 <= 0;
						push_15 <= 0;
						potential_push_16 <= 0;
						potential_push_2 <= 0;
						potential_push_7 <= 0;
						potential_push_15 <= 0;


					end
					

					`read_64: begin


						/*if(count3 == 0) begin
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
						end*/





/// adjust control signals here

						/*if(ele_counter == 0) begin
							pop_16 <= 1;
							pop_2 <= 1;
							pop_15 <= 1;
							pop_7 <= 1;
							pop_counter <= pop_counter + 1;
							ele_counter <= ele_counter + 1;
						end
						if(ele_counter == 1) begin
							wt_7 <= data_out_7;
							wt_16 <= data_out_16;
							wt_15 <= data_out_15;
							wt_2 <= data_out_2;
							addr_reg2 <= next_index[7:0]; //increment count here
						end*/

//adjust count and count 2 value in next_index 
// if else in pop counter 
//if else in the following blocks

						//addr_reg2 <= next_index[7:0];
						if(pop_en == 1) begin
							pop_en <= 0;
						end
						else begin
							pop_en <= 1;
						end

						if(pop_counter < 48) begin
							if(pop_en == 1) begin
								pop_16 <= 1;
								pop_2 <= 1;
								pop_15 <= 1;
								pop_7 <= 1;
							end
							else begin
								pop_16 <= 0;
								pop_2 <= 0;
								pop_15 <= 0;
								pop_7 <= 0;
							end
						end
						else begin
							pop_16 <= 0;
							pop_2 <= 0;
							pop_15 <= 0;
							pop_7 <= 0;
						end
						if(pop_en == 1) begin
							pop_counter <= pop_counter + 1;
						end
						/* receive data from d and k memory */
						if(init_counter64 > 0) begin
							//k_val <= k_rom[addr_reg2];
							
							wt_7 <= data_out_7;
							wt_16 <= data_out_16;
							wt_15 <= data_out_15;
							wt_2 <= data_out_2;
							//addr_reg2 <= next_index[7:0];    //increment count here
							addr_reg2 <= setup_counter;
							

//if(pop_en == 0) begin
								//if(count == 4)
							//end
						end
						///////////////////////////////////////////

						if(init_counter64 > 1) begin
							k_val <= k_rom[addr_reg2];
							data_val <= wt;
							//w_ram[setup_counter] <= wt; //no longer need to pass to memory
							if(pop_en == 1) begin
								setup_counter <= setup_counter + 1; //counter increment here
							end
						end
					
						if(init_counter64 > 2) begin //terminate logic usin gsetup_counter here
							if(pop_en == 0) begin
							A <= H_val;
							B <= A;
							C <= B;
							D <= C;
							E <= D_val;
							F <= E;
							G <= F;
							H <= G;
							end
						end

						if(init_counter64 != 3) begin
							init_counter64 <= init_counter64 + 1;
						end


						//setup counter control and incremetation
						//fill in fifo

						if(init_counter64 > 1 && setup_counter  < 48  && pop_en == 1) begin
							push_16 <= 1;
							data_in_16 <= wt;
							potential_push_16 <= 1;
						end
						else begin
							//turn off signals here
							push_16 <= 0;
							data_in_16 <= 0;
							potential_push_16 <= 0;
						end

						if(init_counter64 > 1 && setup_counter  < 49  && pop_en == 1) begin
							push_15 <= 1;
							data_in_15 <= wt;
							potential_push_15 <= 1;
						end
						else begin
							//turn off signals here
							push_15 <= 0;
							data_in_15 <= 0;
							potential_push_15 <= 0;
						end

						if(init_counter64 > 1 && setup_counter  < 57  && pop_en == 1) begin
							push_7 <= 1;
							data_in_7 <= wt;
							potential_push_7 <= 1;
						end
						else begin
							//turn off signals here
							push_7 <= 0;
							data_in_7 <= 0;
							potential_push_7 <= 0;
						end

						if(init_counter64 > 1 && setup_counter  < 62  && pop_en == 1) begin
							push_2 <= 1;
							data_in_2 <= wt;
							potential_push_2 <= 1;
						end
						else begin
							//turn off signals here
							push_2 <= 0;
							data_in_2 <= 0;
							potential_push_2 <= 0;
						end

						//terminate logic

					end
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

						k_val <= k_rom[addr_reg2];
					
						count3 <= count3 + 1;
						//wren_reg <= 1'b0;
					end
					`collect: begin
						
						data_val <= wt;

						count3<=0;
						count <= count + 1;
						w_ram[next_index[7:0]] <= wt;

					end

					`stable_64: begin
						A <= H_val;
						B <= A;
						C <= B;
						D <= C;
						E <= D_val;
						F <= E;
						G <= F;
						H <= G;
					end

					`process_64: begin
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

					init_counter <= 0;

					setup_counter <= 0;

					push_16 <= 0;
			pop_16 <= 0;
			data_in_16 <= 0;
			potential_push_16 <= 0;

			push_2 <= 0;
			pop_2 <= 0;
			data_in_2 <= 0;
			potential_push_2 <= 0;

			push_w <= 0;
			pop_w <= 0;
			data_in_w <= 0;
			potential_push_w <= 0;

			push_15 <= 0;
			pop_15 <= 0;
			data_in_15 <= 0;
			potential_push_15 <= 0;

			push_7 <= 0;
			pop_7 <= 0;
			data_in_7 <= 0;
			potential_push_7 <= 0;

			init_counter64 <= 0;

			pop_counter <= 0;

			pop_en <= 1;

			ele_counter <= 0;
				end

			end
		end

	end

endmodule 

//Things:
//Skipped the wait states for mem reads: stable_64 and stable 

