// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcva5_sim.h for the primary calling header

#ifndef VERILATED_VCVA5_SIM_L2_REQUESTER_INTERFACE_H_
#define VERILATED_VCVA5_SIM_L2_REQUESTER_INTERFACE_H_  // guard

#include "verilated.h"

class Vcva5_sim__Syms;

class Vcva5_sim_l2_requester_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ rnw;
    CData/*0:0*/ request_push;
    CData/*0:0*/ inv_valid;
    CData/*0:0*/ __PVT__con_result;
    CData/*0:0*/ __PVT__con_valid;
    CData/*0:0*/ wr_data_push;
    CData/*1:0*/ rd_sub_id;
    CData/*0:0*/ rd_data_valid;
    IData/*29:0*/ inv_addr;
    IData/*31:0*/ rd_data;

    // INTERNAL VARIABLES
    Vcva5_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcva5_sim_l2_requester_interface(Vcva5_sim__Syms* symsp, const char* name);
    ~Vcva5_sim_l2_requester_interface();
    VL_UNCOPYABLE(Vcva5_sim_l2_requester_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vcva5_sim_l2_requester_interface* obj);

#endif  // guard
