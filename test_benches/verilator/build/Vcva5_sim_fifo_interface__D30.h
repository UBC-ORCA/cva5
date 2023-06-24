// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcva5_sim.h for the primary calling header

#ifndef VERILATED_VCVA5_SIM_FIFO_INTERFACE__D30_H_
#define VERILATED_VCVA5_SIM_FIFO_INTERFACE__D30_H_  // guard

#include "verilated.h"

class Vcva5_sim__Syms;

class Vcva5_sim_fifo_interface__D30 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ push;

    // INTERNAL VARIABLES
    Vcva5_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcva5_sim_fifo_interface__D30(Vcva5_sim__Syms* symsp, const char* name);
    ~Vcva5_sim_fifo_interface__D30();
    VL_UNCOPYABLE(Vcva5_sim_fifo_interface__D30);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vcva5_sim_fifo_interface__D30* obj);

#endif  // guard
