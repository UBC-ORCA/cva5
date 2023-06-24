// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcva5_sim.h for the primary calling header

#ifndef VERILATED_VCVA5_SIM_EXCEPTION_INTERFACE_H_
#define VERILATED_VCVA5_SIM_EXCEPTION_INTERFACE_H_  // guard

#include "verilated.h"

class Vcva5_sim__Syms;

class Vcva5_sim_exception_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ valid;
    CData/*4:0*/ code;
    CData/*2:0*/ id;
    CData/*0:0*/ __Vdly__valid;
    IData/*31:0*/ tval;

    // INTERNAL VARIABLES
    Vcva5_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcva5_sim_exception_interface(Vcva5_sim__Syms* symsp, const char* name);
    ~Vcva5_sim_exception_interface();
    VL_UNCOPYABLE(Vcva5_sim_exception_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vcva5_sim_exception_interface* obj);

#endif  // guard
