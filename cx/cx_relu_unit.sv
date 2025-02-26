module cx_relu_unit
  import cxu_types::*;
  (
  input logic i_clk,
  input logic i_rst,
  cxu_interface.slave s_cxu
  );

  set_clr_reg_with_rst #(.SET_OVER_CLR(0), .WIDTH(1), .RST_VALUE(1)) x_req_ready (
    .clk(i_clk), 
    .rst(i_rst),
    .set(s_cxu.resp_valid & s_cxu.resp_ready),
    .clr(s_cxu.req_valid),
    .result(s_cxu.req_ready));

  set_clr_reg_with_rst #(.SET_OVER_CLR(1), .WIDTH(1), .RST_VALUE(0)) x_resp_valid (
    .clk(i_clk), 
    .rst(i_rst),
    .set(s_cxu.req_valid & s_cxu.req_ready),
    .clr(s_cxu.resp_ready),
    .result(s_cxu.resp_valid));

  always_ff @ (posedge i_clk) begin
    if (s_cxu.req_valid & s_cxu.req_ready) begin
      s_cxu.resp_id     <= s_cxu.req_id;
      s_cxu.resp_status <= 0;
      if (s_cxu.req_data0[C_M_CXU_DATA_W-1]) begin
        s_cxu.resp_data <= '0;
      end else begin
        s_cxu.resp_data <= s_cxu.req_data0;
      end
    end
  end

endmodule
