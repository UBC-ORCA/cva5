// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim_mmu_interface.h"

VL_ATTR_COLD void Vcva5_sim_mmu_interface___ctor_var_reset(Vcva5_sim_mmu_interface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcva5_sim_mmu_interface___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__request = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rnw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__virtual_address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__write_entry = VL_RAND_RESET_I(1);
    vlSelf->__PVT__upper_physical_address = VL_RAND_RESET_I(20);
    vlSelf->__PVT__is_fault = VL_RAND_RESET_I(1);
    vlSelf->__PVT__satp_ppn = VL_RAND_RESET_I(22);
    vlSelf->__PVT__mxr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sum = VL_RAND_RESET_I(1);
    vlSelf->__PVT__privilege = VL_RAND_RESET_I(2);
}
