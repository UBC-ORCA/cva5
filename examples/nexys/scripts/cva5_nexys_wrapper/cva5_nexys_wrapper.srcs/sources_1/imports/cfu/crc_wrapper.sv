/*
 * Copyright © 2017 Eric Matthews,  Lesley Shannon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Initial code developed under the supervision of Dr. Lesley Shannon,
 * Reconfigurable Computing Lab, Simon Fraser University.
 *
 * Author(s):
 *             Eric Matthews <ematthew@sfu.ca>
 */



module crc_wrapper


    import cfu_types::*;

	(
        input logic clk,
        input logic rst,


        //cfu interface signals
    input logic                          cfu_req_en,
    input logic                          cfu_req_valid,
    output logic                          cfu_req_ready,
    input logic                          cfu_req_cfu_csr,
    input logic [C_M_CFU_REQ_ID_W-1:0]   cfu_req_id,
    input logic [C_M_CFU_CFU_ID_W-1:0]   cfu_req_cfu,
    input logic [C_M_CFU_STATE_ID_W-1:0] cfu_req_state,
    input logic [C_M_CFU_FUNC_ID_W-1:0]  cfu_req_func,
    input logic [C_M_CFU_INSN_W-1:0]     cfu_req_insn,
    input logic [C_M_CFU_DATA_W-1:0]     cfu_req_data0,
    input logic [C_M_CFU_DATA_W-1:0]     cfu_req_data1,
    output logic                          cfu_resp_valid,
    input logic                          cfu_resp_ready,
    output logic [C_M_CFU_REQ_ID_W-1:0]   cfu_resp_id,
    output logic [C_M_CFU_STATUS_W-1:0]   cfu_resp_status,
    output logic [C_M_CFU_DATA_W-1:0]     cfu_resp_data

    );


    cfu_interface cfu();

    //unpacking cfu interfaces
    assign cfu.req_en = cfu_req_en;
    assign cfu.req_valid = cfu_req_valid;
    assign cfu_req_ready = cfu.req_ready; 
    assign cfu.req_cfu_csr = cfu_req_cfu_csr ;
    assign cfu.req_id = cfu_req_id ;
    assign cfu.req_cfu = cfu_req_cfu ;
    assign cfu.req_state = cfu_req_state ;
    assign cfu.req_func = cfu_req_func ;
    assign cfu.req_insn = cfu_req_insn ;
    assign cfu.req_data0 = cfu_req_data0 ;
    assign cfu.req_data1 = cfu_req_data1 ;
    assign cfu_resp_valid = cfu.resp_valid ;
    assign cfu.resp_ready = cfu_resp_ready ;
    assign cfu_resp_id = cfu.resp_id ;
    assign cfu_resp_status = cfu.resp_status ;
    assign cfu_resp_data = cfu.resp_data ;


    crc crc_block(.*);

endmodule

