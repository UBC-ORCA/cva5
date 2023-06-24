module crc
(
  input logic clk,
  input logic rst,

  cfu_interface.slave cfu
  );

  logic req_ready;
  logic resp_valid;

  logic [32-1:0] crc_rom_data;
  logic [32-1:0] crc_result;
  logic [8-1:0] crc_rom_index;

  /* inferred rom */
  logic[32-1:0] crc_rom[0:256-1];
  // Needs to be changed for each user
  initial $readmemh("C:/D/cva5pr/cva5/cfu/crc_rom.hex", crc_rom);

  assign crc_rom_index = cfu.req_data1[8-1:0] ^ cfu.req_data0[8-1:0];
  assign crc_rom_data  = crc_rom[crc_rom_index];
  assign crc_result = crc_rom_data ^ (cfu.req_data1 >> 8);


  always_ff @(posedge clk) begin
    if (cfu.req_valid & req_ready) begin
      cfu.resp_id     <= cfu.req_id;
      cfu.resp_status <= 0;
      cfu.resp_data   <= crc_result;
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
