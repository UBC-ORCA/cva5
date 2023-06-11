package cfu_types;

    typedef enum logic[2:0] { // STATUS_W
        OK           = 3'b000,
        ERROR_CFU    = 3'b001,
        ERROR_STATE  = 3'b010,
        ERROR_OFF    = 3'b011,
        ERROR_FUNC   = 3'b100,
        ERROR_OP     = 3'b101,
        ERROR_CUSTOM = 3'b110
    } cfu_resp_status_t;

    typedef struct packed {
      int unsigned REQ_ID_W;
      int unsigned CFU_ID_W;
      int unsigned STATE_ID_W;
      int unsigned FUNC_ID_W;
      int unsigned INSN_W;
      int unsigned DATA_W;
      int unsigned STATUS_W;
      int unsigned LI_VERSION;
      int unsigned N_CFUS;
      int unsigned N_STATES;
      int unsigned LATENCY;
      int unsigned RESET_LATENCY;
    } cfu_config_t;

    localparam cfu_config_t DEFAULT_CFU_CONFIG = '{
      REQ_ID_W      : 10, // FIXME 0 instead
      CFU_ID_W      : 8,  // FIXME 0 instead
      STATE_ID_W    : 8,  // FIXME 0 instead
      FUNC_ID_W     : 10,
      INSN_W        : 32, // FIXME 0 instead
      DATA_W        : 32,
      STATUS_W      : 3,
      LI_VERSION    : 32'h010000, // FIXME 24'h instead
      N_CFUS        : 1,
      N_STATES      : 0,
      LATENCY       : 1,
      RESET_LATENCY : 0
    };

    parameter C_M_CFU_REQ_ID_W      = 10;
    parameter C_M_CFU_CFU_ID_W      = 8;
    parameter C_M_CFU_STATE_ID_W    = 8;
    parameter C_M_CFU_FUNC_ID_W     = 10;
    parameter C_M_CFU_INSN_W        = 32;
    parameter C_M_CFU_DATA_W        = 32;
    parameter C_M_CFU_STATUS_W      = 3;
    parameter C_M_CFU_LI_VERSION    = 32'h010000;
    parameter C_M_CFU_N_CFUS        = 1;
    parameter C_M_CFU_N_STATES      = 0;
    parameter C_M_CFU_LATENCY       = 1;
    parameter C_M_CFU_RESET_LATENCY = 0;

endpackage
