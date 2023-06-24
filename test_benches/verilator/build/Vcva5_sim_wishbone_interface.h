// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcva5_sim.h for the primary calling header

#ifndef VERILATED_VCVA5_SIM_WISHBONE_INTERFACE_H_
#define VERILATED_VCVA5_SIM_WISHBONE_INTERFACE_H_  // guard

#include "verilated.h"

class Vcva5_sim__Syms;

class Vcva5_sim_wishbone_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__sel;
    CData/*0:0*/ __PVT__cyc;
    CData/*0:0*/ __PVT__stb;
    CData/*0:0*/ __PVT__we;
    CData/*2:0*/ __PVT__cti;
    CData/*1:0*/ __PVT__bte;
    CData/*0:0*/ __PVT__ack;
    CData/*0:0*/ __PVT__err;
    IData/*29:0*/ __PVT__adr;
    IData/*31:0*/ __PVT__dat_w;
    IData/*31:0*/ __PVT__dat_r;

    // INTERNAL VARIABLES
    Vcva5_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcva5_sim_wishbone_interface(Vcva5_sim__Syms* symsp, const char* name);
    ~Vcva5_sim_wishbone_interface();
    VL_UNCOPYABLE(Vcva5_sim_wishbone_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vcva5_sim_wishbone_interface* obj);

#endif  // guard
