// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim__Syms.h"
#include "Vcva5_sim_store_queue_interface.h"

void Vcva5_sim_store_queue_interface___ctor_var_reset(Vcva5_sim_store_queue_interface* vlSelf);

Vcva5_sim_store_queue_interface::Vcva5_sim_store_queue_interface(Vcva5_sim__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcva5_sim_store_queue_interface___ctor_var_reset(this);
}

void Vcva5_sim_store_queue_interface::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcva5_sim_store_queue_interface::~Vcva5_sim_store_queue_interface() {
}
