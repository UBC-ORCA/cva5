
module cfu
(
  input logic clk,
  input logic rst,

  cfu_interface.slave cfu
  );

  logic req_ready;
  logic resp_valid;

  logic [32-1:0] crc_result;
  logic [31:0] ssha256_sig0;
  logic [31:0] ssha256_sig1;
  logic [31:0] ssha256_sum0;
  logic [31:0] ssha256_sum1;

  logic [31:0] ch_op;
  logic [31:0] maj_op;
  logic [31:0] ch_out;
  logic [31:0] maj_out;

    logic [2:0] out;
    logic [31:0] A_final; logic [31:0] B_final;
	logic [31:0] C_final; logic [31:0] D_final; 
	logic [31:0] E_final; logic [31:0] F_final;
	logic [31:0] G_final; logic [31:0] H_final;

	logic op;
  logic init;
  logic done;
  logic init_once_rst;

  crc crc_block(.clk(clk), .rst(rst), .req_data0(cfu.req_data0), .req_data1(cfu.req_data1), .crc_result(crc_result));
  sig0 sig0_block(.req_data0(cfu.req_data0), .ssha256_sig0(ssha256_sig0));
  sig1 sig1_block(.req_data0(cfu.req_data0), .ssha256_sig1(ssha256_sig1));
  sum0 sum0_block(.req_data0(cfu.req_data0), .ssha256_sum0(ssha256_sum0));
  sum1 sum1_block(.req_data0(cfu.req_data0), .ssha256_sum1(ssha256_sum1));

  ch ch_block(.req_data0(cfu.req_data0), .req_data1(cfu.req_data1),.ch_op(ch_op), .ch_out(ch_out));
  maj maj_block(.req_data0(cfu.req_data0), .req_data1(cfu.req_data1),.maj_op(maj_op), .maj_out(maj_out));

	sha256_task sha(.clk(clk), .rst_n(~rst), .out(out),
                    .A_final(A_final), .B_final(B_final), .C_final(C_final), .D_final(D_final),
			        .E_final(E_final), .F_final(F_final), .G_final(G_final), .H_final(H_final), .op(op), .init_once_rst(init_once_rst));


  always_ff @(posedge clk, posedge rst) begin

	if(rst) begin 
		op <= 0;
    init <= 0;
    done <= 0;

    init_once_rst <= 0;
	end
else begin

    init_once_rst <= 0;

    if(op == 1 && out == 3'b101) begin
      op <= 0;
      //cfu.resp_data   <= A_final;
      //done <= 1;
    end
   // if(done == 1) begin
    //  op <= 0;
    //end

    if (cfu.req_valid & req_ready) begin
      cfu.resp_id     <= cfu.req_id;
      cfu.resp_status <= 0;
      if(cfu.req_cfu == 8'b00000001) begin
        if(cfu.req_func == 0) begin
            cfu.resp_data   <= ssha256_sig0;
        end
        else if(cfu.req_func == 1) begin
            cfu.resp_data   <= ssha256_sig1;
        end
        else if(cfu.req_func == 2) begin
            cfu.resp_data   <= ssha256_sum0;
            maj_op <= cfu.req_data0;
        end
        else if(cfu.req_func == 4) begin
            cfu.resp_data   <= ch_out;
        end
        else if(cfu.req_func == 5) begin
            cfu.resp_data   <= maj_out;
        end
        else if(cfu.req_func == 3) begin
            cfu.resp_data   <= ssha256_sum1;
            ch_op <= cfu.req_data0;
        end
	    else if(cfu.req_func == 6) begin
		    //cfu.resp_data   <= out;
        if(init == 0) begin     
		      op <= 1;
          init <= 1;
        end
		//if(out == 3'b101) begin
            	//	cfu.resp_data   <= A_final;
		//end
	    end
        else if(cfu.req_func == 7) begin
            cfu.resp_data   <= B_final;
	    end
        else if(cfu.req_func == 8) begin
            cfu.resp_data   <= C_final;
	    end
        else if(cfu.req_func == 9) begin
            cfu.resp_data   <= D_final;
	    end
        else if(cfu.req_func == 10) begin
            cfu.resp_data   <= E_final;
	    end
        else if(cfu.req_func == 11) begin
            cfu.resp_data   <= F_final;
	    end
        else if(cfu.req_func == 12) begin
            cfu.resp_data   <= G_final;
	    end
        else if(cfu.req_func == 13) begin
            cfu.resp_data   <= H_final;
	    end
      else if(cfu.req_func == 14)  begin
            cfu.resp_data   <= A_final;
	    end
      else begin
        init <= 0;
        init_once_rst <= 1;
      end
      end
      else begin
        cfu.resp_data   <= crc_result;
      end
    end

end
  end

  set_clr_reg_with_rst #(.SET_OVER_CLR(0), .WIDTH(1), .RST_VALUE(1)) x_req_ready (
    .clk, 
    .rst,
    .set(resp_valid & cfu.resp_ready),
    .clr(cfu.req_valid & req_ready),
    .result(req_ready)
  );

  set_clr_reg_with_rst #(.SET_OVER_CLR(1), .WIDTH(1), .RST_VALUE(0)) x_resp_valid (
    .clk, 
    .rst,
    .set(cfu.req_valid & req_ready),
    .clr(cfu.resp_ready),
    .result(resp_valid)
  );

  assign cfu.req_ready = req_ready;
  //assign cfu.resp_valid = (cfu.req_func == 6) ? ((out == 3'b101) ? resp_valid : 0): resp_valid;

  assign cfu.resp_valid = (op == 1) ? ((out == 3'b101) ? 1 : 0): resp_valid;

  //assign cfu.resp_valid = (op == 1) ? ((done == 1) ? 1 : 0): resp_valid;

  endmodule