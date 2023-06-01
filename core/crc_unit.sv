module crc_unit
(
  input logic clk,
  input logic rst,

  cfu_interface cfu
  );

  logic cfu_busy;

  logic [31:0] crc_rom_data;
  logic [31:0] crc_result;
  logic [7:0] crc_rom_index;

  /* inferred rom */
  logic[31:0] CRC_ROM[0:255];
  // Needs to be changed for each user
  initial $readmemh("/home/brumaire/RISCV/cva5pr/cva5/core/crc_rom.hex", CRC_ROM);

  always_ff @(posedge clk) begin
    cfu_busy <= (cfu_busy & ~cfu.resp_ready) | cfu.req_valid;

    if (rst)
      cfu_busy <= 0;
  end

  always_ff @(posedge clk) begin
    if (cfu.resp_valid & cfu.resp_ready) begin
      cfu.resp_valid  <= 0;
    end

    if (cfu.req_valid & ~cfu_busy) begin
      cfu.resp_id     <= cfu.req_id;
      cfu.resp_status <= 0;
      cfu.resp_valid  <= 1;
      cfu.resp_data   <= crc_result;
    end

    if (rst)
      cfu.resp_valid  <= 0;
  end


  assign crc_rom_index = cfu.req_data1[7:0] ^ cfu.req_data0[7:0];
  assign crc_rom_data  = CRC_ROM[crc_rom_index];
  assign crc_result = crc_rom_data ^ (cfu.req_data1 >> 8);

  assign cfu.req_ready = ~cfu_busy;

  endmodule
