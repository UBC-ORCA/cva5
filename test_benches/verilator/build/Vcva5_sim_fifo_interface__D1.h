// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcva5_sim.h for the primary calling header

#ifndef VERILATED_VCVA5_SIM_FIFO_INTERFACE__D1_H_
#define VERILATED_VCVA5_SIM_FIFO_INTERFACE__D1_H_  // guard

#include "verilated.h"

class Vcva5_sim__Syms;

class Vcva5_sim_fifo_interface__D1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ push;
    CData/*0:0*/ data_out;

    // INTERNAL VARIABLES
    Vcva5_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcva5_sim_fifo_interface__D1(Vcva5_sim__Syms* symsp, const char* name);
    ~Vcva5_sim_fifo_interface__D1();
    VL_UNCOPYABLE(Vcva5_sim_fifo_interface__D1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vcva5_sim_fifo_interface__D1* obj);

#endif  // guard
