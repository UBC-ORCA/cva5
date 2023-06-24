// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim_avalon_interface.h"

VL_ATTR_COLD void Vcva5_sim_avalon_interface___ctor_var_reset(Vcva5_sim_avalon_interface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcva5_sim_avalon_interface___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__byteenable = VL_RAND_RESET_I(4);
    vlSelf->__PVT__readdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__writedata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__waitrequest = VL_RAND_RESET_I(1);
    vlSelf->__PVT__readdatavalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeresponsevalid = VL_RAND_RESET_I(1);
}
