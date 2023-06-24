// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcva5_sim.h for the primary calling header

#ifndef VERILATED_VCVA5_SIM_MMU_INTERFACE_H_
#define VERILATED_VCVA5_SIM_MMU_INTERFACE_H_  // guard

#include "verilated.h"

class Vcva5_sim__Syms;

class Vcva5_sim_mmu_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__request;
    CData/*0:0*/ __PVT__execute;
    CData/*0:0*/ __PVT__rnw;
    CData/*0:0*/ __PVT__write_entry;
    CData/*0:0*/ __PVT__is_fault;
    CData/*0:0*/ __PVT__mxr;
    CData/*0:0*/ __PVT__sum;
    CData/*1:0*/ __PVT__privilege;
    IData/*31:0*/ __PVT__virtual_address;
    IData/*19:0*/ __PVT__upper_physical_address;
    IData/*21:0*/ __PVT__satp_ppn;

    // INTERNAL VARIABLES
    Vcva5_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcva5_sim_mmu_interface(Vcva5_sim__Syms* symsp, const char* name);
    ~Vcva5_sim_mmu_interface();
    VL_UNCOPYABLE(Vcva5_sim_mmu_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vcva5_sim_mmu_interface* obj);

#endif  // guard
