interface stream_interface #(
  parameter DATA_WIDTH  = 32,
  parameter ID_WIDTH    = 8
  );

  logic tready;
  logic tvalid;
  logic tlast;
  logic [DATA_WIDTH-1:0]   tdata;
  logic [DATA_WIDTH/8-1:0] tstrb;
  logic [ID_WIDTH-1:0]     tid;

  modport master (output tvalid, tlast, tdata, tstrb, tid,
                  input  tready);

  modport slave  (input  tvalid, tlast, tdata, tstrb, tid,
                  output tready);

endinterface

interface gen_interface #(
  parameter DATA_WIDTH  = 32,
  parameter ID_WIDTH    = 8);

  logic [DATA_WIDTH-1:0] data;
  logic [ID_WIDTH-1:0] id;
  logic valid;
  logic ready;
  
  modport master (output valid, data, id,
                  input  ready);

  modport slave  (input  valid, data, id,
                  output ready);

endinterface
