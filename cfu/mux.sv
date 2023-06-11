module mux_unit 
    (
        input logic clk,
        input logic rst,

		cfu_interface.requester cfu_unit_out,
		cfu_interface.requester crc_unit_out,

		cfu_interface.responder cva5_in
	);

	logic cfu_unit_busy;
	logic crc_unit_busy;

	always_ff @(posedge clk) begin
		if (rst) begin
			cfu_unit_busy <= 0;
			crc_unit_busy <= 0;

			cfu_unit_out.req_valid <= 0;
			crc_unit_out.req_valid <= 0;
			cva5_in.resp_valid <= 0;
		end
	end

	always_ff @(posedge clk) begin
		if (cva5_in.req_cfu == 0) begin
			if (cva5_in.req_valid & cfu_unit_out.req_ready) begin
				cfu_unit_out.req_valid <= cva5_in.req_valid;
				cfu_unit_out.req_cfu <= cva5_in.req_cfu;
				cfu_unit_out.req_state <= cva5_in.req_state;
				cfu_unit_out.req_func <= cva5_in.req_func;
				cfu_unit_out.req_data0 <= cva5_in.req_data0;
				cfu_unit_out.req_data1 <= cva5_in.req_data1;
				cfu_unit_out.req_insn <= cva5_in.req_insn;
				cfu_unit_out.req_id <= cva5_in.req_id;
				cfu_unit_out.req_cfu_csr <= cva5_in.req_cfu_csr;

				cfu_unit_busy <= 1;
			end
		end

		if (cva5_in.req_cfu == 1) begin
			if (cva5_in.req_valid & crc_unit_out.req_ready) begin
				crc_unit_out.req_valid <= cva5_in.req_valid;
				crc_unit_out.req_cfu <= cva5_in.req_cfu;
				crc_unit_out.req_state <= cva5_in.req_state;
				crc_unit_out.req_func <= cva5_in.req_func;
				crc_unit_out.req_data0 <= cva5_in.req_data0;
				crc_unit_out.req_data1 <= cva5_in.req_data1;
				crc_unit_out.req_insn <= cva5_in.req_insn;
				crc_unit_out.req_id <= cva5_in.req_id;
				crc_unit_out.req_cfu_csr <= cva5_in.req_cfu_csr;

				crc_unit_busy <= 1;
			end
		end

		if (cfu_unit_busy) begin
			cfu_unit_out.req_valid <= 0;
		end
		if (crc_unit_busy) begin
			crc_unit_out.req_valid <= 0;
		end
	end

	always_ff @(posedge clk) begin
		if (cfu_unit_out.resp_valid & cva5_in.resp_ready) begin
			cva5_in.resp_status <= cfu_unit_out.resp_status;
			cva5_in.resp_data <= cfu_unit_out.resp_data;
			cva5_in.resp_valid <= cfu_unit_out.resp_valid;
			cva5_in.resp_id <= cfu_unit_out.resp_id;
		end

		if (cva5_in.resp_valid & ~cfu_unit_out.resp_valid) begin
			cva5_in.resp_valid <= 0;
			cfu_unit_busy <= 0;
		end
		if (crc_unit_out.resp_valid & cva5_in.resp_ready) begin
			cva5_in.resp_status <= crc_unit_out.resp_status;
			cva5_in.resp_data <= crc_unit_out.resp_data;
			cva5_in.resp_valid <= crc_unit_out.resp_valid;
			cva5_in.resp_id <= crc_unit_out.resp_id;
		end

		if (cva5_in.resp_valid & ~crc_unit_out.resp_valid) begin
			cva5_in.resp_valid <= 0;
			crc_unit_busy <= 0;
		end
	end

	assign cva5_in.req_ready = ~cfu_unit_busy & ~crc_unit_busy;
	assign cfu_unit_out.resp_ready = cfu_unit_busy;
	assign crc_unit_out.resp_ready = crc_unit_busy;

endmodule
