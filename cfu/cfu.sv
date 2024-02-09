module cfu (
  input logic clk,
  input logic rst,
  cfu_interface.slave cfu
  );

  logic req_ready;

  logic [32-1:0] crc_result;

  crc crc_block(.clk(clk), .rst(rst), .req_data0(cfu.req_data0), .req_data1(cfu.req_data1), .crc_result(crc_result));


  set_clr_reg_with_rst #(.SET_OVER_CLR(0), .WIDTH(1), .RST_VALUE(1)) x_req_ready (
    .clk, 
    .rst,
    .set(cfu.resp_valid & cfu.resp_ready),
    .clr(cfu.req_valid & cfu.req_ready),
    .result(cfu.req_ready)
    );

  set_clr_reg_with_rst #(.SET_OVER_CLR(1), .WIDTH(1), .RST_VALUE(0)) x_resp_valid (
    .clk, 
    .rst,
    .set(cfu.req_valid & cfu.req_ready),
    .clr(cfu.resp_ready),
    .result(cfu.resp_valid)
    );

  always_ff @ (posedge clk) begin
    if (cfu.req_valid & cfu.req_ready) begin
      cfu.resp_id     <= cfu.req_id;
      cfu.resp_status <= 0;
      cfu.resp_data   <= crc_result;
    end
  end

endmodule
