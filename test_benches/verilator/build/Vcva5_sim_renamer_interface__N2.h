// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcva5_sim.h for the primary calling header

#ifndef VERILATED_VCVA5_SIM_RENAMER_INTERFACE__N2_H_
#define VERILATED_VCVA5_SIM_RENAMER_INTERFACE__N2_H_  // guard

#include "verilated.h"

class Vcva5_sim__Syms;

class Vcva5_sim_renamer_interface__N2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*5:0*/ phys_rd_addr;
    VlUnpacked<CData/*4:0*/, 2> rs_addr;
    VlUnpacked<CData/*5:0*/, 2> phys_rs_addr;
    VlUnpacked<CData/*0:0*/, 2> rs_wb_group;

    // INTERNAL VARIABLES
    Vcva5_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcva5_sim_renamer_interface__N2(Vcva5_sim__Syms* symsp, const char* name);
    ~Vcva5_sim_renamer_interface__N2();
    VL_UNCOPYABLE(Vcva5_sim_renamer_interface__N2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vcva5_sim_renamer_interface__N2* obj);

#endif  // guard
