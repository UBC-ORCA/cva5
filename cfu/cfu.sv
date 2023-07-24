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

  crc crc_block(.clk(clk), .rst(rst), .req_data0(cfu.req_data0), .req_data1(cfu.req_data1), .crc_result(crc_result));
  sig0 sig0_block(.clk(clk), .rst(rst), .req_data0(cfu.req_data0), .req_data1(cfu.req_data1), .ssha256_sig0(ssha256_sig0));
  sig1 sig1_block(.clk(clk), .rst(rst), .req_data0(cfu.req_data0), .req_data1(cfu.req_data1), .ssha256_sig1(ssha256_sig1));
  sum0 sum0_block(.clk(clk), .rst(rst), .req_data0(cfu.req_data0), .req_data1(cfu.req_data1), .ssha256_sum0(ssha256_sum0));
  sum1 sum1_block(.clk(clk), .rst(rst), .req_data0(cfu.req_data0), .req_data1(cfu.req_data1), .ssha256_sum1(ssha256_sum1));


  always_ff @(posedge clk) begin
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
        end
        else begin
            cfu.resp_data   <= ssha256_sum1;
        end
      end
      else begin
        cfu.resp_data   <= crc_result;
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
  assign cfu.resp_valid = resp_valid;

  endmodule