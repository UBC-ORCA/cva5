// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vcva5_sim__Syms.h"


VL_ATTR_COLD void Vcva5_sim___024root__trace_full_sub_1(Vcva5_sim___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root__trace_full_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+5473,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__3__KET__.inv_addr),30);
    bufp->fullBit(oldp+5474,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__3__KET__.inv_valid));
    bufp->fullBit(oldp+5475,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__3__KET__.inv_ack));
    bufp->fullIData(oldp+5476,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__2__KET__.inv_addr),30);
    bufp->fullBit(oldp+5477,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__2__KET__.inv_valid));
    bufp->fullBit(oldp+5478,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__2__KET__.inv_ack));
    bufp->fullIData(oldp+5479,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__1__KET__.inv_addr),30);
    bufp->fullBit(oldp+5480,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__1__KET__.inv_valid));
    bufp->fullBit(oldp+5481,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__1__KET__.inv_ack));
    bufp->fullBit(oldp+5482,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_fifo.push));
    bufp->fullBit(oldp+5483,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_fifo.pop));
    bufp->fullIData(oldp+5484,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_fifo.data_in),32);
    bufp->fullIData(oldp+5485,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_fifo.data_out),32);
    bufp->fullBit(oldp+5486,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_fifo.valid));
    bufp->fullBit(oldp+5487,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_fifo.full));
    bufp->fullBit(oldp+5488,(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_fifo.potential_push));
    bufp->fullIData(oldp+5489,(0x10U),32);
    bufp->fullIData(oldp+5490,(9U),32);
    bufp->fullIData(oldp+5491,(0U),32);
    bufp->fullIData(oldp+5492,(0xeU),32);
    bufp->fullIData(oldp+5493,(2U),32);
    bufp->fullIData(oldp+5494,(0xaU),32);
    bufp->fullIData(oldp+5495,(0xcU),32);
    bufp->fullCData(oldp+5496,(0x10U),6);
    bufp->fullIData(oldp+5497,(0U),32);
    bufp->fullBit(oldp+5498,(1U));
    bufp->fullBit(oldp+5499,(1U));
    bufp->fullIData(oldp+5500,(0x80000100U),32);
    bufp->fullBit(oldp+5501,(1U));
    bufp->fullBit(oldp+5502,(1U));
    bufp->fullBit(oldp+5503,(1U));
    bufp->fullBit(oldp+5504,(0U));
    bufp->fullIData(oldp+5505,(0x70000000U),32);
    bufp->fullIData(oldp+5506,(0x7fffffffU),32);
    bufp->fullBit(oldp+5507,(0U));
    bufp->fullBit(oldp+5508,(1U));
    bufp->fullBit(oldp+5509,(1U));
    bufp->fullIData(oldp+5510,(0x60000000U),32);
    bufp->fullIData(oldp+5511,(0x6fffffffU),32);
    bufp->fullBit(oldp+5512,(1U));
}
