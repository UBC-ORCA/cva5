//Name: Steven Chin
//Student ID: 40108540

module sha256_task(input logic clk, input logic rst_n, output logic [2:0] out,

		output logic [31:0] A_final, output logic [31:0] B_final, output logic [31:0] C_final, output logic [31:0] D_final,
		output logic [31:0] E_final, output logic [31:0] F_final, output logic [31:0] G_final, output logic [31:0] H_final);

	logic en; 
	logic rdy;
	/*logic [7:0] addr;
	logic [31:0] rddata;
	logic [7:0] addr2;
	logic [31:0] rddata2;
	logic [31:0] wrdata;
	logic [7:0] addr3;
	logic [31:0] rddata3;
	logic wren;*/
	logic init_once;

	sha256_top sha(.clk(clk), .rst_n(rst_n), .en(en), .rdy(rdy), /*.addr(addr), .rddata(rddata), 
			.addr2(addr2), .rddata2(rddata2), .addr3(addr3), .wrdata(wrdata), .rddata3(rddata3), 
			.wren(wren),*/ .num(32),
			.A_final_out(A_final), .B_final_out(B_final), .C_final_out(C_final), .D_final_out(D_final),
			.E_final_out(E_final), .F_final_out(F_final), .G_final_out(G_final), .H_final_out(H_final));

    //	d_mem d(.address(addr), .clock(clk), .data(wrdata), .wren(0), .q(rddata));
	//k_mem k(.address(addr2), .clock(clk), .data(wrdata), .wren(0), .q(rddata2));
	//w_mem w(.address(addr3), .clock(clk), .data(wrdata), .wren(wren), .q(rddata3));

	assign out = {init_once,en,rdy};

	always @(posedge clk, negedge rst_n) begin //may need to add more waits here
		if(~rst_n) begin
			en <= 1'b0;
			init_once <= 1'b0;
		end
		else begin
			if(rdy == 1'b1 && init_once == 1'b0) begin
				en <= 1'b1;
				init_once <= 1'b1;
			end
			else begin
				en <= 1'b0;
			end
		end
	end


endmodule: sha256_task
