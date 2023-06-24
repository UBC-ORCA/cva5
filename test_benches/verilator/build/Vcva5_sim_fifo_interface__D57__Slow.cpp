// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim__Syms.h"
#include "Vcva5_sim_fifo_interface__D57.h"

void Vcva5_sim_fifo_interface__D57___ctor_var_reset(Vcva5_sim_fifo_interface__D57* vlSelf);

Vcva5_sim_fifo_interface__D57::Vcva5_sim_fifo_interface__D57(Vcva5_sim__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcva5_sim_fifo_interface__D57___ctor_var_reset(this);
}

void Vcva5_sim_fifo_interface__D57::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcva5_sim_fifo_interface__D57::~Vcva5_sim_fifo_interface__D57() {
}
