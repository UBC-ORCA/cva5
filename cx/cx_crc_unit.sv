module cx_crc_unit (
  input logic i_clk,
  input logic i_rst,
  cxu_interface.slave s_cxu
  );

  logic req_ready;

  logic [32-1:0] crc_result;

  crc crc_block(.i_clk(i_clk), .i_rst(i_rst), .req_data0(s_cxu.req_data0), .req_data1(s_cxu.req_data1), .crc_result(crc_result));


  set_clr_reg_with_rst #(.SET_OVER_CLR(0), .WIDTH(1), .RST_VALUE(1)) x_req_ready (
    .clk(i_clk), 
    .rst(i_rst),
    .set(s_cxu.resp_valid & s_cxu.resp_ready),
    .clr(s_cxu.req_valid & s_cxu.req_ready),
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
      s_cxu.resp_data   <= crc_result;
    end
  end

endmodule
