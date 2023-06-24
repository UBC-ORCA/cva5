// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim__Syms.h"
#include "Vcva5_sim___024unit.h"
VlAssocArray<IData/*31:0*/, std::string> Vcva5_sim___024unit::__Venumtab_enum_name0;

void Vcva5_sim___024unit___ctor_var_reset(Vcva5_sim___024unit* vlSelf);

Vcva5_sim___024unit::Vcva5_sim___024unit(Vcva5_sim__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcva5_sim___024unit___ctor_var_reset(this);
}

void Vcva5_sim___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcva5_sim___024unit::~Vcva5_sim___024unit() {
}
