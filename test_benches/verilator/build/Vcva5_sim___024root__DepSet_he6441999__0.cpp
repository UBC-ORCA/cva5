// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim___024root.h"

VL_INLINE_OPT void Vcva5_sim___024root___ico_comb__TOP__0(Vcva5_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root___ico_comb__TOP__0\n"); );
    // Body
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_trans_start 
        = ((((0xfffffffeU & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_match)) 
             | ((((~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_active) 
                      >> 1U)) & (~ (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_match))))) 
                 & (~ (IData)((0U != (1U & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_trans_start)))))) 
                << 1U)) & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__trans_start) 
                           << 1U)) | (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_match) 
                                       | ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_active)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_match)))))) 
                                      & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__trans_start)));
}

VL_INLINE_OPT void Vcva5_sim___024root___ico_comb__TOP__1(Vcva5_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root___ico_comb__TOP__1\n"); );
    // Body
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_trans_start 
        = ((((0xfffffffeU & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match)) 
             | ((((~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_active) 
                      >> 1U)) & (~ (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match))))) 
                 & (~ (IData)((0U != (1U & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_trans_start)))))) 
                << 1U)) & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start) 
                           << 1U)) | (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match) 
                                       | ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_active)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match)))))) 
                                      & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start)));
}

VL_INLINE_OPT void Vcva5_sim___024root___ico_comb__TOP__2(Vcva5_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root___ico_comb__TOP__2\n"); );
    // Body
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_trans_start 
        = ((((0xfffffffeU & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_match)) 
             | ((((~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_active) 
                      >> 1U)) & (~ (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_match))))) 
                 & (~ (IData)((0U != (1U & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_trans_start)))))) 
                << 1U)) & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__trans_start) 
                           << 1U)) | (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_match) 
                                       | ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_active)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_match)))))) 
                                      & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__trans_start)));
}

VL_INLINE_OPT void Vcva5_sim___024root___ico_comb__TOP__3(Vcva5_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root___ico_comb__TOP__3\n"); );
    // Body
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_trans_start 
        = ((((0xfffffffeU & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match)) 
             | ((((~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_active) 
                      >> 1U)) & (~ (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match))))) 
                 & (~ (IData)((0U != (1U & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_trans_start)))))) 
                << 1U)) & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start) 
                           << 1U)) | (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match) 
                                       | ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_active)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match)))))) 
                                      & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start)));
}

void Vcva5_sim___024root___ico_sequent__TOP__0(Vcva5_sim___024root* vlSelf);

void Vcva5_sim___024root___eval_ico(Vcva5_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vcva5_sim___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U))) {
        Vcva5_sim___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(2U))) {
        Vcva5_sim___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U))) {
        Vcva5_sim___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(4U))) {
        Vcva5_sim___024root___ico_comb__TOP__3(vlSelf);
    }
}

void Vcva5_sim___024root___eval_act(Vcva5_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(2U)) {
        Vcva5_sim___024root___ico_comb__TOP__2(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        Vcva5_sim___024root___ico_comb__TOP__3(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        Vcva5_sim___024root___ico_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        Vcva5_sim___024root___ico_comb__TOP__1(vlSelf);
    }
}

void Vcva5_sim___024root___nba_sequent__TOP__0(Vcva5_sim___024root* vlSelf);
void Vcva5_sim___024root___nba_sequent__TOP__1(Vcva5_sim___024root* vlSelf);
void Vcva5_sim___024root___nba_sequent__TOP__2(Vcva5_sim___024root* vlSelf);
void Vcva5_sim___024root___nba_sequent__TOP__3(Vcva5_sim___024root* vlSelf);

void Vcva5_sim___024root___eval_nba(Vcva5_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vcva5_sim___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vcva5_sim___024root___nba_sequent__TOP__1(vlSelf);
        Vcva5_sim___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(4U))) {
        Vcva5_sim___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(3U) | vlSelf->__VnbaTriggered.at(4U))) {
        Vcva5_sim___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(4U))) {
        Vcva5_sim___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(4U))) {
        Vcva5_sim___024root___ico_comb__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vcva5_sim___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

#ifdef VL_DEBUG
void Vcva5_sim___024root___eval_debug_assertions(Vcva5_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ddr_axi_arready & 0xfeU))) {
        Verilated::overWidthError("ddr_axi_arready");}
    if (VL_UNLIKELY((vlSelf->ddr_axi_awready & 0xfeU))) {
        Verilated::overWidthError("ddr_axi_awready");}
    if (VL_UNLIKELY((vlSelf->ddr_axi_bid & 0x80U))) {
        Verilated::overWidthError("ddr_axi_bid");}
    if (VL_UNLIKELY((vlSelf->ddr_axi_bresp & 0xfcU))) {
        Verilated::overWidthError("ddr_axi_bresp");}
    if (VL_UNLIKELY((vlSelf->ddr_axi_bvalid & 0xfeU))) {
        Verilated::overWidthError("ddr_axi_bvalid");}
    if (VL_UNLIKELY((vlSelf->ddr_axi_rid & 0x80U))) {
        Verilated::overWidthError("ddr_axi_rid");}
    if (VL_UNLIKELY((vlSelf->ddr_axi_rlast & 0xfeU))) {
        Verilated::overWidthError("ddr_axi_rlast");}
    if (VL_UNLIKELY((vlSelf->ddr_axi_rresp & 0xfcU))) {
        Verilated::overWidthError("ddr_axi_rresp");}
    if (VL_UNLIKELY((vlSelf->ddr_axi_rvalid & 0xfeU))) {
        Verilated::overWidthError("ddr_axi_rvalid");}
    if (VL_UNLIKELY((vlSelf->ddr_axi_wready & 0xfeU))) {
        Verilated::overWidthError("ddr_axi_wready");}
}
#endif  // VL_DEBUG
