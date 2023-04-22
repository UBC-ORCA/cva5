module cfu_unit
	import riscv_types::*;
    (
      input logic clk,
      input logic rst,
      cfu_interface cfu
    );

    logic        cfu_busy;
	logic        csr_writes;
	logic        csr_reads;

	logic [31:0] csr_register;
	logic [11:0] csr_addr;
	logic [4:0]  opcode_trim;
	logic [2:0]  csr_type;

	assign csr_addr = cfu.req_insn[31:20];
	assign csr_type = cfu.req_insn[14:12];
	assign opcode_trim = cfu.req_insn[6:2];

    always_ff @(posedge clk) begin
        if (rst)
            cfu_busy <= 0;
        else
            cfu_busy <= (cfu_busy & ~cfu.resp_ready) | cfu.req_valid;
    end

    always_ff @(posedge clk) begin

      if (cfu.resp_valid & cfu.resp_ready) begin
        cfu.resp_valid  <= 0;
	  end
      
      if (cfu.req_valid & ~cfu_busy) begin
        cfu.resp_id     <= cfu.req_id;
		
		// testing csr reads + writes
		if (cfu.req_cfu_csr) begin 
      		case (csr_type[1:0]) inside
				CSR_RW : cfu.resp_data <= csr_register; 

				// not sure if correct error status
			    default: cfu.resp_status <= 1;
			endcase

			// if immediate
			if (csr_type[2]) begin
				csr_register <= {27'b0, cfu.req_insn[19:15]};
			end else begin
				csr_register <= cfu.req_data0;
			end
			
		end else begin
			cfu.resp_data   <= cfu.req_data0 + cfu.req_data1;
        	cfu.resp_status <= 0;
		end

        cfu.resp_valid  <= 1;
      end

      if (rst)
        cfu.resp_valid  <= 0;
    end

    assign cfu.req_ready = ~cfu_busy;
    
endmodule

