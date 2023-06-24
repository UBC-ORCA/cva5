interface cfu_interface;
    import cfu_types::*;

    logic                          req_en;
    logic                          req_valid;
    logic                          req_ready;
    logic                          req_cfu_csr;
    logic [C_M_CFU_REQ_ID_W-1:0]   req_id;
    logic [C_M_CFU_CFU_ID_W-1:0]   req_cfu;
    logic [C_M_CFU_STATE_ID_W-1:0] req_state;
    logic [C_M_CFU_FUNC_ID_W-1:0]  req_func;
    logic [C_M_CFU_INSN_W-1:0]     req_insn;
    logic [C_M_CFU_DATA_W-1:0]     req_data0;
    logic [C_M_CFU_DATA_W-1:0]     req_data1;
    logic                          resp_valid;
    logic                          resp_ready;
    logic [C_M_CFU_REQ_ID_W-1:0]   resp_id;
    logic [C_M_CFU_STATUS_W-1:0]   resp_status;
    logic [C_M_CFU_DATA_W-1:0]     resp_data;

    modport master (input   resp_valid, req_ready, resp_id, resp_status, resp_data,
                    output  req_valid, resp_ready, req_id, req_cfu, req_state, req_func, 
                            req_insn, req_data0, req_data1, req_cfu_csr);
    modport slave  (output  resp_valid, req_ready, resp_id, resp_status, resp_data, 
                    input   req_valid, resp_ready, req_id, req_cfu, req_state, req_func, 
                            req_insn, req_data0, req_data1, req_cfu_csr);

endinterface

