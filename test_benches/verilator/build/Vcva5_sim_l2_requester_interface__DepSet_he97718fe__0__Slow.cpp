// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim_l2_requester_interface.h"

VL_ATTR_COLD void Vcva5_sim_l2_requester_interface___ctor_var_reset(Vcva5_sim_l2_requester_interface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcva5_sim_l2_requester_interface___ctor_var_reset\n"); );
    // Body
    vlSelf->rnw = VL_RAND_RESET_I(1);
    vlSelf->request_push = VL_RAND_RESET_I(1);
    vlSelf->inv_addr = VL_RAND_RESET_I(30);
    vlSelf->inv_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__con_result = VL_RAND_RESET_I(1);
    vlSelf->__PVT__con_valid = VL_RAND_RESET_I(1);
    vlSelf->wr_data_push = VL_RAND_RESET_I(1);
    vlSelf->rd_data = VL_RAND_RESET_I(32);
    vlSelf->rd_sub_id = VL_RAND_RESET_I(2);
    vlSelf->rd_data_valid = VL_RAND_RESET_I(1);
}
