// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcva5_sim.h for the primary calling header

#ifndef VERILATED_VCVA5_SIM___024UNIT_H_
#define VERILATED_VCVA5_SIM___024UNIT_H_  // guard

#include "verilated.h"

class Vcva5_sim__Syms;

class Vcva5_sim___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlAssocArray<IData/*31:0*/, std::string> __Venumtab_enum_name0;

    // INTERNAL VARIABLES
    Vcva5_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcva5_sim___024unit(Vcva5_sim__Syms* symsp, const char* name);
    ~Vcva5_sim___024unit();
    VL_UNCOPYABLE(Vcva5_sim___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
