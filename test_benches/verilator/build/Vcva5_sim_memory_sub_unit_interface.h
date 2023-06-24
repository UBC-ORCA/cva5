// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcva5_sim.h for the primary calling header

#ifndef VERILATED_VCVA5_SIM_MEMORY_SUB_UNIT_INTERFACE_H_
#define VERILATED_VCVA5_SIM_MEMORY_SUB_UNIT_INTERFACE_H_  // guard

#include "verilated.h"

class Vcva5_sim__Syms;

class Vcva5_sim_memory_sub_unit_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ new_request;
    CData/*0:0*/ data_valid;
    CData/*0:0*/ ready;

    // INTERNAL VARIABLES
    Vcva5_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcva5_sim_memory_sub_unit_interface(Vcva5_sim__Syms* symsp, const char* name);
    ~Vcva5_sim_memory_sub_unit_interface();
    VL_UNCOPYABLE(Vcva5_sim_memory_sub_unit_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vcva5_sim_memory_sub_unit_interface* obj);

#endif  // guard
