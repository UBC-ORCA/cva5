// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim_axi_interface.h"

VL_ATTR_COLD void Vcva5_sim_axi_interface___ctor_var_reset(Vcva5_sim_axi_interface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcva5_sim_axi_interface___ctor_var_reset\n"); );
    // Body
    vlSelf->arready = VL_RAND_RESET_I(1);
    vlSelf->arvalid = VL_RAND_RESET_I(1);
    vlSelf->araddr = VL_RAND_RESET_I(32);
    vlSelf->arlen = VL_RAND_RESET_I(8);
    vlSelf->arsize = VL_RAND_RESET_I(3);
    vlSelf->arburst = VL_RAND_RESET_I(2);
    vlSelf->arcache = VL_RAND_RESET_I(4);
    vlSelf->arid = VL_RAND_RESET_I(6);
    vlSelf->rready = VL_RAND_RESET_I(1);
    vlSelf->rvalid = VL_RAND_RESET_I(1);
    vlSelf->rdata = VL_RAND_RESET_I(32);
    vlSelf->rresp = VL_RAND_RESET_I(2);
    vlSelf->rlast = VL_RAND_RESET_I(1);
    vlSelf->rid = VL_RAND_RESET_I(6);
    vlSelf->awready = VL_RAND_RESET_I(1);
    vlSelf->awvalid = VL_RAND_RESET_I(1);
    vlSelf->awaddr = VL_RAND_RESET_I(32);
    vlSelf->awlen = VL_RAND_RESET_I(8);
    vlSelf->awsize = VL_RAND_RESET_I(3);
    vlSelf->awburst = VL_RAND_RESET_I(2);
    vlSelf->awcache = VL_RAND_RESET_I(4);
    vlSelf->awid = VL_RAND_RESET_I(6);
    vlSelf->wready = VL_RAND_RESET_I(1);
    vlSelf->wvalid = VL_RAND_RESET_I(1);
    vlSelf->wdata = VL_RAND_RESET_I(32);
    vlSelf->wstrb = VL_RAND_RESET_I(4);
    vlSelf->wlast = VL_RAND_RESET_I(1);
    vlSelf->bready = VL_RAND_RESET_I(1);
    vlSelf->bvalid = VL_RAND_RESET_I(1);
    vlSelf->bresp = VL_RAND_RESET_I(2);
    vlSelf->bid = VL_RAND_RESET_I(6);
}
