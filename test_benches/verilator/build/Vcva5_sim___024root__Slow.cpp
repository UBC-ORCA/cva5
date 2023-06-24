// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim__Syms.h"
#include "Vcva5_sim___024root.h"

// Parameter definitions for Vcva5_sim___024root
constexpr VlUnpacked<IData/*31:0*/, 2> Vcva5_sim___024root::cva5_sim__DOT__cpu__DOT__NUM_UNITS_PER_PORT;
constexpr VlUnpacked<IData/*31:0*/, 2> Vcva5_sim___024root::cva5_sim__DOT__cpu__DOT__writeback_block__DOT__NUM_UNITS;
constexpr VlUnpacked<IData/*31:0*/, 2> Vcva5_sim___024root::cva5_sim__DOT__cpu__DOT__writeback_block__DOT__CUMULATIVE_NUM_UNITS;


void Vcva5_sim___024root___ctor_var_reset(Vcva5_sim___024root* vlSelf);

Vcva5_sim___024root::Vcva5_sim___024root(Vcva5_sim__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcva5_sim___024root___ctor_var_reset(this);
}

void Vcva5_sim___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcva5_sim___024root::~Vcva5_sim___024root() {
}
