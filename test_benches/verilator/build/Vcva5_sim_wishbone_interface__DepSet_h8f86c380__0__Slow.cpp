// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim_wishbone_interface.h"

VL_ATTR_COLD void Vcva5_sim_wishbone_interface___ctor_var_reset(Vcva5_sim_wishbone_interface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcva5_sim_wishbone_interface___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__adr = VL_RAND_RESET_I(30);
    vlSelf->__PVT__dat_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sel = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cyc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cti = VL_RAND_RESET_I(3);
    vlSelf->__PVT__bte = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__err = VL_RAND_RESET_I(1);
}
