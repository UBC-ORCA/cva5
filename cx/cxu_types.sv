package cxu_types;

    typedef enum logic[2:0] { // STATUS_W
        OK           = 3'b000,
        ERROR_CXU    = 3'b001,
        ERROR_STATE  = 3'b010,
        ERROR_OFF    = 3'b011,
        ERROR_FUNC   = 3'b100,
        ERROR_OP     = 3'b101,
        ERROR_CUSTOM = 3'b110
    } cxu_resp_status_t;

    typedef struct packed {
      int unsigned REQ_ID_W;
      int unsigned CXU_ID_W;
      int unsigned STATE_ID_W;
      int unsigned FUNC_ID_W;
      int unsigned INSN_W;
      int unsigned DATA_W;
      int unsigned STATUS_W;
      int unsigned LI_VERSION;
      int unsigned N_CXUS;
      int unsigned N_STATES;
      int unsigned LATENCY;
      int unsigned RESET_LATENCY;
    } cxu_config_t;

    localparam cxu_config_t DEFAULT_CXU_CONFIG = '{
      REQ_ID_W      : 10, // FIXME 0 instead
      CXU_ID_W      : 8,  // FIXME 0 instead
      STATE_ID_W    : 8,  // FIXME 0 instead
      FUNC_ID_W     : 10,
      INSN_W        : 32, // FIXME 0 instead
      DATA_W        : 32,
      STATUS_W      : 3,
      LI_VERSION    : 32'h010000, // FIXME 24'h instead
      N_CXUS        : 1,
      N_STATES      : 0,
      LATENCY       : 1,
      RESET_LATENCY : 0
    };

    parameter C_M_CXU_REQ_ID_W      = 10;
    parameter C_M_CXU_CXU_ID_W      = 8;
    parameter C_M_CXU_STATE_ID_W    = 1;
    parameter C_M_CXU_FUNC_ID_W     = 10;
    parameter C_M_CXU_INSN_W        = 32;
    parameter C_M_CXU_DATA_W        = 32;
    parameter C_M_CXU_STATUS_W      = 3;
    parameter C_M_CXU_LI_VERSION    = 32'h010000;
    parameter C_M_CXU_N_CXUS        = 1;
    parameter C_M_CXU_N_STATES      = 0;
    parameter C_M_CXU_LATENCY       = 1;
    parameter C_M_CXU_RESET_LATENCY = 0;

endpackage
