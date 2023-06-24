// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim__Syms.h"
#include "Vcva5_sim___024root.h"

VL_INLINE_OPT void Vcva5_sim___024root___nba_sequent__TOP__3(Vcva5_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSymsp->TOP__cva5_sim__DOT__l2.rnw = ((0xabU >= 
                                            ((IData)(8U) 
                                             + (0xffU 
                                                & ((IData)(0x2bU) 
                                                   * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel))))) 
                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[
                                              (((IData)(8U) 
                                                + (0xffU 
                                                   & ((IData)(0x2bU) 
                                                      * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x2bU) 
                                                         * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_acknowledge 
        = ((0xfffffffeU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                           & (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_reg) 
                               & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg)) 
                              << 1U))) | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                          & (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_bvalid) 
                                              >> 1U) 
                                             & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg))));
    vlSelf->__VdfgTmp_h6d79c6cc__0 = ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg)) 
                                      & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_bvalid) 
                                         >> 1U));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_acknowledge 
        = ((0xfffffffeU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                           & (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_reg) 
                               & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg)) 
                              << 1U))) | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                          & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h76a83c01__0) 
                                             & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg))));
    vlSelf->__VdfgTmp_h8970d10f__0 = ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg)) 
                                      & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h76a83c01__0));
    vlSelf->__VdfgTmp_hcebced5e__0 = ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg)) 
                                      & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__int_axi_rvalid) 
                                         >> 1U));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_acknowledge 
        = ((0xfffffffeU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                           & (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_reg) 
                               & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rlast_reg) 
                                  & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg))) 
                              << 1U))) | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                          & (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__int_axi_rvalid) 
                                              >> 1U) 
                                             & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rlast_mux) 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg)))));
    vlSelf->__VdfgTmp_h988dd293__0 = ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg)) 
                                      & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hbc9a0d68__0));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_acknowledge 
        = ((0xfffffffeU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                           & (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_reg) 
                               & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rlast_reg) 
                                  & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg))) 
                              << 1U))) | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                          & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hbc9a0d68__0) 
                                             & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rlast_mux) 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg)))));
    vlSymsp->TOP__cva5_sim__DOT__l2.wr_data_push = 
        ((IData)(vlSymsp->TOP__cva5_sim__DOT__l2.request_push) 
         & (~ (IData)(vlSymsp->TOP__cva5_sim__DOT__l2.rnw)));
    vlSelf->cva5_sim__DOT__arb__DOT__request_in = (
                                                   (((QData)((IData)(
                                                                     ((0xabU 
                                                                       >= 
                                                                       ((IData)(0xdU) 
                                                                        + 
                                                                        (0xffU 
                                                                         & ((IData)(0x2bU) 
                                                                            * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))))
                                                                       ? 
                                                                      (0x3fffffffU 
                                                                       & (((0U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & ((IData)(0xdU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel))))))
                                                                            ? 0U
                                                                            : 
                                                                           (vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[
                                                                            (((IData)(0x2aU) 
                                                                              + 
                                                                              (0xffU 
                                                                               & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))) 
                                                                             >> 5U)] 
                                                                            << 
                                                                            ((IData)(0x20U) 
                                                                             - 
                                                                             (0x1fU 
                                                                              & ((IData)(0xdU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))))))) 
                                                                          | (vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[
                                                                             (((IData)(0xdU) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))) 
                                                                              >> 5U)] 
                                                                             >> 
                                                                             (0x1fU 
                                                                              & ((IData)(0xdU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel))))))))
                                                                       : 0U))) 
                                                     << 0xdU) 
                                                    | ((QData)((IData)(
                                                                       ((((0xabU 
                                                                           >= 
                                                                           ((IData)(9U) 
                                                                            + 
                                                                            (0xffU 
                                                                             & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))))
                                                                           ? 
                                                                          (0xfU 
                                                                           & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((IData)(9U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel))))))
                                                                                ? 0U
                                                                                : 
                                                                               (vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[
                                                                                (((IData)(0xcU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & ((IData)(9U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))))))) 
                                                                              | (vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[
                                                                                (((IData)(9U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & ((IData)(9U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel))))))))
                                                                           : 0U) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSymsp->TOP__cva5_sim__DOT__l2.rnw) 
                                                                            << 1U) 
                                                                           | ((0xabU 
                                                                               >= 
                                                                               ((IData)(7U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel))))) 
                                                                              & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & ((IData)(7U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel))))))))))) 
                                                       << 7U)) 
                                                   | (QData)((IData)(
                                                                     ((((0xabU 
                                                                         >= 
                                                                         ((IData)(2U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x2bU) 
                                                                              * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))))
                                                                         ? 
                                                                        (0x1fU 
                                                                         & (((0U 
                                                                              == 
                                                                              (0x1fU 
                                                                               & ((IData)(2U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel))))))
                                                                              ? 0U
                                                                              : 
                                                                             (vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[
                                                                              (((IData)(6U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))) 
                                                                               >> 5U)] 
                                                                              << 
                                                                              ((IData)(0x20U) 
                                                                               - 
                                                                               (0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))))))) 
                                                                            | (vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[
                                                                               (((IData)(2U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))) 
                                                                                >> 5U)] 
                                                                               >> 
                                                                               (0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel))))))))
                                                                         : 0U) 
                                                                       << 2U) 
                                                                      | ((0xabU 
                                                                          >= 
                                                                          (0xffU 
                                                                           & ((IData)(0x2bU) 
                                                                              * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel))))
                                                                          ? 
                                                                         (3U 
                                                                          & (((0U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel))))
                                                                               ? 0U
                                                                               : 
                                                                              (vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[
                                                                               (((IData)(1U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))) 
                                                                                >> 5U)] 
                                                                               << 
                                                                               ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)))))) 
                                                                             | (vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[
                                                                                (7U 
                                                                                & (((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & ((IData)(0x2bU) 
                                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel))))))
                                                                          : 0U)))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->__VdfgTmp_h6d79c6cc__0)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__input_padded 
        = ((((~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                 >> 1U)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_reg)) 
            << 1U) | (IData)(vlSelf->__VdfgTmp_h6d79c6cc__0));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->__VdfgTmp_h8970d10f__0)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__input_padded 
        = ((((~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                 >> 1U)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_reg)) 
            << 1U) | (IData)(vlSelf->__VdfgTmp_h8970d10f__0));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->__VdfgTmp_hcebced5e__0)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__input_padded 
        = ((((~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                 >> 1U)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_reg)) 
            << 1U) | (IData)(vlSelf->__VdfgTmp_hcebced5e__0));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->__VdfgTmp_h988dd293__0)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__input_padded 
        = ((((~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                 >> 1U)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_reg)) 
            << 1U) | (IData)(vlSelf->__VdfgTmp_h988dd293__0));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__mask_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_acknowledge))))))))) {
        if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__mask_next 
                = (3U & ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))
                          ? ((1U >= ((IData)(1U) + 
                                     (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))))
                              ? ((IData)(3U) << ((IData)(1U) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))))
                              : 0U) : ((1U >= ((IData)(1U) 
                                               + (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h6d79c6cc__0)))))
                                        ? ((IData)(3U) 
                                           << ((IData)(1U) 
                                               + (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h6d79c6cc__0)))))
                                        : 0U)));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_reg) 
         & (~ (IData)((0U != ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                              & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_acknowledge))))))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_reg;
    } else if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_next = 1U;
        if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_next 
                = (3U & ((IData)(1U) << (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
                = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)));
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_next 
                = (3U & ((IData)(1U) << (1U & (~ (IData)(vlSelf->__VdfgTmp_h6d79c6cc__0)))));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
                = (1U & (~ (IData)(vlSelf->__VdfgTmp_h6d79c6cc__0)));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__mask_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_acknowledge))))))))) {
        if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__mask_next 
                = (3U & ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))
                          ? ((1U >= ((IData)(1U) + 
                                     (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))))
                              ? ((IData)(3U) << ((IData)(1U) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))))
                              : 0U) : ((1U >= ((IData)(1U) 
                                               + (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h8970d10f__0)))))
                                        ? ((IData)(3U) 
                                           << ((IData)(1U) 
                                               + (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h8970d10f__0)))))
                                        : 0U)));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_reg) 
         & (~ (IData)((0U != ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                              & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_acknowledge))))))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_reg;
    } else if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_next = 1U;
        if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_next 
                = (3U & ((IData)(1U) << (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
                = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)));
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_next 
                = (3U & ((IData)(1U) << (1U & (~ (IData)(vlSelf->__VdfgTmp_h8970d10f__0)))));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
                = (1U & (~ (IData)(vlSelf->__VdfgTmp_h8970d10f__0)));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__mask_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_acknowledge))))))))) {
        if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__mask_next 
                = (3U & ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))
                          ? ((1U >= ((IData)(1U) + 
                                     (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))))
                              ? ((IData)(3U) << ((IData)(1U) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))))
                              : 0U) : ((1U >= ((IData)(1U) 
                                               + (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_hcebced5e__0)))))
                                        ? ((IData)(3U) 
                                           << ((IData)(1U) 
                                               + (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_hcebced5e__0)))))
                                        : 0U)));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_reg) 
         & (~ (IData)((0U != ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                              & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_acknowledge))))))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg;
    } else if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_next = 1U;
        if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_next 
                = (3U & ((IData)(1U) << (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
                = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)));
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_next 
                = (3U & ((IData)(1U) << (1U & (~ (IData)(vlSelf->__VdfgTmp_hcebced5e__0)))));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
                = (1U & (~ (IData)(vlSelf->__VdfgTmp_hcebced5e__0)));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__mask_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_acknowledge))))))))) {
        if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__mask_next 
                = (3U & ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))
                          ? ((1U >= ((IData)(1U) + 
                                     (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))))
                              ? ((IData)(3U) << ((IData)(1U) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))))
                              : 0U) : ((1U >= ((IData)(1U) 
                                               + (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h988dd293__0)))))
                                        ? ((IData)(3U) 
                                           << ((IData)(1U) 
                                               + (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h988dd293__0)))))
                                        : 0U)));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_reg) 
         & (~ (IData)((0U != ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                              & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_acknowledge))))))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg;
    } else if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_next = 1U;
        if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_next 
                = (3U & ((IData)(1U) << (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
                = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)));
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_next 
                = (3U & ((IData)(1U) << (1U & (~ (IData)(vlSelf->__VdfgTmp_h988dd293__0)))));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
                = (1U & (~ (IData)(vlSelf->__VdfgTmp_h988dd293__0)));
        }
    }
}

void Vcva5_sim___024root___eval_triggers__ico(Vcva5_sim___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcva5_sim___024root___dump_triggers__ico(Vcva5_sim___024root* vlSelf);
#endif  // VL_DEBUG
void Vcva5_sim___024root___eval_ico(Vcva5_sim___024root* vlSelf);
void Vcva5_sim___024root___eval_triggers__act(Vcva5_sim___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcva5_sim___024root___dump_triggers__act(Vcva5_sim___024root* vlSelf);
#endif  // VL_DEBUG
void Vcva5_sim___024root___eval_act(Vcva5_sim___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcva5_sim___024root___dump_triggers__nba(Vcva5_sim___024root* vlSelf);
#endif  // VL_DEBUG
void Vcva5_sim___024root___eval_nba(Vcva5_sim___024root* vlSelf);

void Vcva5_sim___024root___eval(Vcva5_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root___eval\n"); );
    // Init
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__ras_block__DOT____Vcellinp__read_index_fifo__rst 
        = vlSelf->cva5_sim__DOT__cpu__DOT__ras_block__DOT____Vcellinp__read_index_fifo__rst;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__lsq_addr_hash__rst 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__lsq_addr_hash__rst;
    vlSelf->__Vsampled__TOP__rst = vlSelf->rst;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__decode[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__decode[0U];
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__decode[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__decode[1U];
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__decode[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__decode[2U];
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__decode_advance 
        = vlSelf->cva5_sim__DOT__cpu__DOT__decode_advance;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__linefill_in_progress 
        = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__linefill_in_progress;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit__BRA__0__KET____data_valid 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit__BRA__0__KET__.data_valid;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__data_out 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_load_request 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_load_request;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT____VdfgTmp_hc99cfb62__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT____VdfgTmp_hc99cfb62__0;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_state 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_state;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit__BRA__0__KET____data_valid 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit__BRA__0__KET__.data_valid;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__data_out 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__id_block__DOT__inflight_count 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__inflight_count;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__pc_id_assigned 
        = vlSelf->cva5_sim__DOT__cpu__DOT__pc_id_assigned;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__commit 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__commit;
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__gc[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gc[0U];
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__gc[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gc[1U];
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__gc[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gc[2U];
    vlSelf->__Vsampled__TOP__cva5_sim__DOT__cpu__DOT__gc[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U];
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<5> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vcva5_sim___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vcva5_sim___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/D/cva5pr/cva5/examples/nexys/nexys_sim.sv", 23, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vcva5_sim___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcva5_sim___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcva5_sim___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/mnt/c/D/cva5pr/cva5/examples/nexys/nexys_sim.sv", 23, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vcva5_sim___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcva5_sim___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/D/cva5pr/cva5/examples/nexys/nexys_sim.sv", 23, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcva5_sim___024root___eval_nba(vlSelf);
        }
    }
}
