interface cxu_interface;
    import cxu_types::*;

    logic                          req_ready;
    logic                          req_valid;
    logic [C_M_CXU_CXU_ID_W-1:0]   req_cxu;
    logic [C_M_CXU_STATE_ID_W-1:0] req_state;
    logic [C_M_CXU_DATA_W-1:0]     req_data0;
    logic [C_M_CXU_DATA_W-1:0]     req_data1;
    logic [C_M_CXU_INSN_W-1:0]     req_insn;
    logic [C_M_CXU_FUNC_ID_W-1:0]  req_func;
    logic [C_M_CXU_REQ_ID_W-1:0]   req_id;
    logic                          resp_ready;
    logic                          resp_valid;
    logic [C_M_CXU_DATA_W-1:0]     resp_data;
    logic [C_M_CXU_STATUS_W-1:0]   resp_status;
    logic [C_M_CXU_REQ_ID_W-1:0]   resp_id;

    modport master (input   resp_valid, req_ready, resp_id, resp_status, resp_data, 
                    output  req_valid, resp_ready, req_id, req_cxu, req_state, req_func, 
                            req_insn, req_data0, req_data1);
    modport slave  (output  resp_valid, req_ready, resp_id, resp_status, resp_data, 
                    input   req_valid, resp_ready, req_id, req_cxu, req_state, req_func, 
                            req_insn, req_data0, req_data1);

endinterface

