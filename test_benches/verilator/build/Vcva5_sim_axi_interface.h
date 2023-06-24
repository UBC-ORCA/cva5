// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcva5_sim.h for the primary calling header

#ifndef VERILATED_VCVA5_SIM_AXI_INTERFACE_H_
#define VERILATED_VCVA5_SIM_AXI_INTERFACE_H_  // guard

#include "verilated.h"

class Vcva5_sim__Syms;

class Vcva5_sim_axi_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ arready;
    CData/*0:0*/ arvalid;
    CData/*7:0*/ arlen;
    CData/*2:0*/ arsize;
    CData/*1:0*/ arburst;
    CData/*3:0*/ arcache;
    CData/*5:0*/ arid;
    CData/*0:0*/ rready;
    CData/*0:0*/ rvalid;
    CData/*1:0*/ rresp;
    CData/*0:0*/ rlast;
    CData/*5:0*/ rid;
    CData/*0:0*/ awready;
    CData/*0:0*/ awvalid;
    CData/*7:0*/ awlen;
    CData/*2:0*/ awsize;
    CData/*1:0*/ awburst;
    CData/*3:0*/ awcache;
    CData/*5:0*/ awid;
    CData/*0:0*/ wready;
    CData/*0:0*/ wvalid;
    CData/*3:0*/ wstrb;
    CData/*0:0*/ wlast;
    CData/*0:0*/ bready;
    CData/*0:0*/ bvalid;
    CData/*1:0*/ bresp;
    CData/*5:0*/ bid;
    IData/*31:0*/ araddr;
    IData/*31:0*/ rdata;
    IData/*31:0*/ awaddr;
    IData/*31:0*/ wdata;

    // INTERNAL VARIABLES
    Vcva5_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcva5_sim_axi_interface(Vcva5_sim__Syms* symsp, const char* name);
    ~Vcva5_sim_axi_interface();
    VL_UNCOPYABLE(Vcva5_sim_axi_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vcva5_sim_axi_interface* obj);

#endif  // guard
