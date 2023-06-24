// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim__Syms.h"
#include "Vcva5_sim_fifo_interface__D3.h"

void Vcva5_sim_fifo_interface__D3___ctor_var_reset(Vcva5_sim_fifo_interface__D3* vlSelf);

Vcva5_sim_fifo_interface__D3::Vcva5_sim_fifo_interface__D3(Vcva5_sim__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcva5_sim_fifo_interface__D3___ctor_var_reset(this);
}

void Vcva5_sim_fifo_interface__D3::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcva5_sim_fifo_interface__D3::~Vcva5_sim_fifo_interface__D3() {
}
