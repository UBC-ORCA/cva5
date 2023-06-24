// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim_register_file_issue_interface__pi2.h"

VL_ATTR_COLD void Vcva5_sim_register_file_issue_interface__pi2___ctor_var_reset(Vcva5_sim_register_file_issue_interface__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcva5_sim_register_file_issue_interface__pi2___ctor_var_reset\n"); );
    // Body
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->phys_rs_addr[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rs_wb_group[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->inuse[__Vi0] = VL_RAND_RESET_I(1);
    }
}
