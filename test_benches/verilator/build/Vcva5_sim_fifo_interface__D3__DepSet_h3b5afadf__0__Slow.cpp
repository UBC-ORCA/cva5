// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim_fifo_interface__D3.h"

VL_ATTR_COLD void Vcva5_sim_fifo_interface__D3___ctor_var_reset(Vcva5_sim_fifo_interface__D3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcva5_sim_fifo_interface__D3___ctor_var_reset\n"); );
    // Body
    vlSelf->pop = VL_RAND_RESET_I(1);
}
