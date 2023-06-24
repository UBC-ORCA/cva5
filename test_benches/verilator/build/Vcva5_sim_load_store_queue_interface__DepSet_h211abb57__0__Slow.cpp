// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim_load_store_queue_interface.h"

VL_ATTR_COLD void Vcva5_sim_load_store_queue_interface___ctor_var_reset(Vcva5_sim_load_store_queue_interface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcva5_sim_load_store_queue_interface___ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(86, vlSelf->data_in);
    vlSelf->push = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(82, vlSelf->load_data_out);
    VL_RAND_RESET_W(82, vlSelf->store_data_out);
    vlSelf->load_valid = VL_RAND_RESET_I(1);
}
