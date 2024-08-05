module crc
  (
  input logic i_clk, // unused
  input logic i_rst, // unused

  input logic [31:0] req_data0,
  input logic [31:0] req_data1,
  output logic [31:0] crc_result
  );

  logic [32-1:0] crc_rom_data;
  logic [8-1:0] crc_rom_index;

  /* inferred rom */
  logic[32-1:0] crc_rom[0:256-1];
  // Needs to be changed for each user
  initial $readmemh("cva5/cx/crc_rom.hex", crc_rom); 

  assign crc_rom_index = req_data1[8-1:0] ^ req_data0[8-1:0];
  assign crc_rom_data  = crc_rom[crc_rom_index];
  assign crc_result = crc_rom_data ^ (req_data1 >> 8);

endmodule
