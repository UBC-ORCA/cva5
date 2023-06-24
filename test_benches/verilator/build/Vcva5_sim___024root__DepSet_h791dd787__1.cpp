// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim__Syms.h"
#include "Vcva5_sim___024root.h"

extern const VlUnpacked<CData/*0:0*/, 32> Vcva5_sim__ConstPool__TABLE_hefc0ef20_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vcva5_sim__ConstPool__TABLE_haec470c6_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vcva5_sim__ConstPool__TABLE_h49faefbe_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vcva5_sim__ConstPool__TABLE_h9070065d_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vcva5_sim__ConstPool__TABLE_h454cc0b0_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vcva5_sim__ConstPool__TABLE_h9c6cefcc_0;

VL_INLINE_OPT void Vcva5_sim___024root___nba_sequent__TOP__1(Vcva5_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vlvbound_h3db38cc3__0;
    IData/*31:0*/ cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vlvbound_hd985a437__0;
    SData/*15:0*/ cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__icache_tag_banks__DOT____VdfgTmp_heb1af0fb__0;
    CData/*4:0*/ cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vlvbound_hce8a820f__0;
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_heb16dbf4__0;
    QData/*32:0*/ cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT____VdfgTmp_h590e39c9__0;
    CData/*0:0*/ cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT____VdfgExtracted_h2553d22f__0;
    CData/*0:0*/ cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h0013566c__0;
    CData/*1:0*/ cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    CData/*0:0*/ __Vfunc_address_range_check__0__Vfuncout;
    IData/*31:0*/ __Vfunc_address_range_check__0__addr;
    SData/*13:0*/ __Vfunc_getTag__1__Vfuncout;
    IData/*31:0*/ __Vfunc_getTag__1__addr;
    SData/*8:0*/ __Vfunc_getTagLineAddr__2__Vfuncout;
    IData/*31:0*/ __Vfunc_getTagLineAddr__2__addr;
    SData/*8:0*/ __Vfunc_getTagLineAddr__3__Vfuncout;
    IData/*31:0*/ __Vfunc_getTagLineAddr__3__addr;
    SData/*10:0*/ __Vfunc_getDataLineAddr__4__Vfuncout;
    IData/*31:0*/ __Vfunc_getDataLineAddr__4__addr;
    SData/*10:0*/ __Vfunc_getDataLineAddr__5__Vfuncout;
    IData/*31:0*/ __Vfunc_getDataLineAddr__5__addr;
    SData/*10:0*/ __Vfunc_getDataLineAddr__6__Vfuncout;
    IData/*31:0*/ __Vfunc_getDataLineAddr__6__addr;
    SData/*10:0*/ __Vfunc_getDataLineAddr__7__Vfuncout;
    IData/*31:0*/ __Vfunc_getDataLineAddr__7__addr;
    SData/*15:0*/ __Vfunc_getTag__8__Vfuncout;
    IData/*31:0*/ __Vfunc_getTag__8__addr;
    SData/*15:0*/ __Vfunc_getTag__9__Vfuncout;
    IData/*31:0*/ __Vfunc_getTag__9__addr;
    SData/*15:0*/ __Vfunc_getTag__10__Vfuncout;
    IData/*31:0*/ __Vfunc_getTag__10__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__13__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__13__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__17__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__17__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__21__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__21__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__25__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__25__addr;
    CData/*0:0*/ __Vfunc_address_range_check__27__Vfuncout;
    IData/*31:0*/ __Vfunc_address_range_check__27__addr;
    CData/*0:0*/ __Vfunc_address_range_check__28__Vfuncout;
    IData/*31:0*/ __Vfunc_address_range_check__28__addr;
    CData/*0:0*/ __Vfunc_address_range_check__29__Vfuncout;
    IData/*31:0*/ __Vfunc_address_range_check__29__addr;
    SData/*9:0*/ __Vfunc_getTagLineAddr__30__Vfuncout;
    IData/*31:0*/ __Vfunc_getTagLineAddr__30__addr;
    SData/*11:0*/ __Vfunc_getDataLineAddr__31__Vfuncout;
    IData/*31:0*/ __Vfunc_getDataLineAddr__31__addr;
    SData/*11:0*/ __Vfunc_getDataLineAddr__32__Vfuncout;
    IData/*31:0*/ __Vfunc_getDataLineAddr__32__addr;
    SData/*9:0*/ __Vfunc_getTagLineAddr__33__Vfuncout;
    IData/*31:0*/ __Vfunc_getTagLineAddr__33__addr;
    SData/*9:0*/ __Vfunc_getTagLineAddr__34__Vfuncout;
    IData/*31:0*/ __Vfunc_getTagLineAddr__34__addr;
    SData/*9:0*/ __Vfunc_getTagLineAddr__35__Vfuncout;
    IData/*31:0*/ __Vfunc_getTagLineAddr__35__addr;
    SData/*13:0*/ __Vfunc_getTag__36__Vfuncout;
    IData/*31:0*/ __Vfunc_getTag__36__addr;
    SData/*13:0*/ __Vfunc_getTag__37__Vfuncout;
    IData/*31:0*/ __Vfunc_getTag__37__addr;
    SData/*13:0*/ __Vfunc_getTag__38__Vfuncout;
    IData/*31:0*/ __Vfunc_getTag__38__addr;
    CData/*0:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite_en__41__Vfuncout;
    CData/*0:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite_en__45__Vfuncout;
    IData/*31:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__50__Vfuncout;
    IData/*31:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__50__a;
    CData/*0:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__50__b;
    IData/*31:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__51__Vfuncout;
    IData/*31:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__51__a;
    CData/*0:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__51__b;
    IData/*31:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__52__Vfuncout;
    IData/*31:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__52__a;
    CData/*0:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__52__b;
    CData/*7:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx3;
    CData/*4:0*/ __Vtableidx4;
    CData/*4:0*/ __Vtableidx5;
    CData/*4:0*/ __Vtableidx6;
    CData/*4:0*/ __Vtableidx7;
    VlWide<6>/*191:0*/ __Vtemp_haeeea704__0;
    VlWide<5>/*159:0*/ __Vtemp_h90cc79a0__0;
    VlWide<3>/*95:0*/ __Vtemp_hadc405ac__0;
    // Body
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awsize_reg 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awsize_next;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_aregion_reg 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_aregion_next;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_aregion_reg 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_aregion_next;
    vlSelf->ddr_axi_awlen = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awlen_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awlen_reg 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awlen_next;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_aregion_reg 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_aregion_next;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_aregion_reg 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_aregion_next;
    vlSelf->ddr_axi_araddr = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_araddr_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_select_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_select_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_select_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_select_reg;
    vlSelf->ddr_axi_awaddr = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awaddr_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__store_axi_b_input_to_output = 0U;
    if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__store_axi_b_input_to_output = 1U;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h1a42b60d__0 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_reg;
    } else {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h1a42b60d__0 = 0U;
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__store_axi_b_input_to_output = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h39acbbc8__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__first_transfer_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__first_transfer_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bid_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bid_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h0241b9ce__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg));
    cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h0013566c__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__s_axi_awready_reg));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h8e9ef457__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__curr_reg) 
           != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__max_reg));
    vlSelf->ddr_axi_arid = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arid_reg;
    vlSelf->ddr_axi_awid = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awid_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_next));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rvalid_mux 
        = (3U & (((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_reg) 
                    << 1U) | (IData)(vlSelf->ddr_axi_rvalid)) 
                  >> (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)) 
                 & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_reg)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rvalid_mux 
        = (3U & (((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_reg) 
                    << 1U) | (IData)(vlSelf->ddr_axi_rvalid)) 
                  >> (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)) 
                 & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_reg)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_next));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bresp_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bresp_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_next));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h43d852dd__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__curr_off) 
           == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__max_off));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h79cacbbc__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__curr_off) 
           != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__max_off));
    if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_temp) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wuser_reg = 0U;
    }
    vlSelf->ddr_axi_arburst = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arburst_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arburst_reg 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arburst_next;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_next));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__swrite = 0U;
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__data_out[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vcellout__idata_bank_gen__BRA__1__KET____DOT__idata_bank__data_out_a;
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__data_out[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vcellout__idata_bank_gen__BRA__0__KET____DOT__idata_bank__data_out_a;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wvalid_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wvalid_next));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_next));
    if (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_store_request) {
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[1U] 
            = ((0x1fU & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[1U]) 
               | (0xffffffe0U & ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[2U] 
                                  << 0x13U) | (0x7ffe0U 
                                               & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[1U] 
                                                  >> 0xdU)))));
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[2U] 
            = (0x1fU & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[2U] 
                        >> 0xdU));
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[0U] 
            = (IData)((((QData)((IData)((0xfU & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[1U] 
                                                 >> 0xcU)))) 
                        << 0x21U) | (((QData)((IData)(
                                                      ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[1U] 
                                                        << 0x17U) 
                                                       | (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[0U] 
                                                          >> 9U)))) 
                                      << 1U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__uncacheable_store)))));
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[1U] 
            = ((0xffffffe0U & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[1U]) 
               | (IData)(((((QData)((IData)((0xfU & 
                                             (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[1U] 
                                              >> 0xcU)))) 
                            << 0x21U) | (((QData)((IData)(
                                                          ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[1U] 
                                                            << 0x17U) 
                                                           | (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[0U] 
                                                              >> 9U)))) 
                                          << 1U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__uncacheable_store)))) 
                          >> 0x20U)));
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__icache_tag_banks__DOT__tag_line[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__icache_tag_banks__DOT____Vcellout__tag_bank_gen__BRA__1__KET____DOT__itag_bank__data_out_a;
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__icache_tag_banks__DOT__tag_line[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__icache_tag_banks__DOT____Vcellout__tag_bank_gen__BRA__0__KET____DOT__itag_bank__data_out_a;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_next));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__0__KET__.data_valid 
        = ((IData)(vlSymsp->TOP__cva5_sim__DOT__l2.rd_data_valid) 
           & (0U == (IData)(vlSymsp->TOP__cva5_sim__DOT__l2.rd_sub_id)));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__1__KET__.data_valid 
        = ((IData)(vlSymsp->TOP__cva5_sim__DOT__l2.rd_data_valid) 
           & (1U == (IData)(vlSymsp->TOP__cva5_sim__DOT__l2.rd_sub_id)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h65512b5a__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rvalid_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rvalid_next));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_rready_reg 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_rready_next;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_next));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__tag_update 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__acks) 
                                             >> 1U)));
    if (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__second_cycle) 
         & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__linefill_in_progress)))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__tag_update_way 
            = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__replacement_way;
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT____VdfgTmp_h8e9ef457__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__curr_reg) 
           != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__max_reg));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT____VdfgTmp_h43d852dd__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__curr_off) 
           == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__max_off));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT____VdfgTmp_h79cacbbc__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__curr_off) 
           != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__max_off));
    __Vfunc_getTagLineAddr__2__addr = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__second_cycle_addr;
    __Vfunc_getTagLineAddr__2__Vfuncout = (0x1ffU & 
                                           (__Vfunc_getTagLineAddr__2__addr 
                                            >> 4U));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vcellinp__icache_tag_banks__stage2_line_addr 
        = __Vfunc_getTagLineAddr__2__Vfuncout;
    __Vfunc_getDataLineAddr__4__addr = ((0xfffffff0U 
                                         & vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__second_cycle_addr) 
                                        | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__word_count) 
                                           << 2U));
    __Vfunc_getDataLineAddr__4__Vfuncout = (0x7ffU 
                                            & (__Vfunc_getDataLineAddr__4__addr 
                                               >> 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vcellinp__idata_bank_gen__BRA__0__KET____DOT__idata_bank__addr_b 
        = __Vfunc_getDataLineAddr__4__Vfuncout;
    __Vfunc_getDataLineAddr__6__addr = ((0xfffffff0U 
                                         & vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__second_cycle_addr) 
                                        | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__word_count) 
                                           << 2U));
    __Vfunc_getDataLineAddr__6__Vfuncout = (0x7ffU 
                                            & (__Vfunc_getDataLineAddr__6__addr 
                                               >> 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vcellinp__idata_bank_gen__BRA__1__KET____DOT__idata_bank__addr_b 
        = __Vfunc_getDataLineAddr__6__Vfuncout;
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[1U] 
        = ((0x7ffU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[1U]) 
           | ((IData)((0x10dULL | ((QData)((IData)(
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__second_cycle_addr 
                                                    >> 2U))) 
                                   << 0xdU))) << 0xbU));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[2U] 
        = ((0xffc00000U & vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[2U]) 
           | (((IData)((0x10dULL | ((QData)((IData)(
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__second_cycle_addr 
                                                     >> 2U))) 
                                    << 0xdU))) >> 0x15U) 
              | ((IData)(((0x10dULL | ((QData)((IData)(
                                                       (vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__second_cycle_addr 
                                                        >> 2U))) 
                                       << 0xdU)) >> 0x20U)) 
                 << 0xbU)));
    __Vfunc_getTag__1__addr = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__second_cycle_addr;
    __Vfunc_getTag__1__Vfuncout = (0x3fffU & (__Vfunc_getTag__1__addr 
                                              >> 0xdU));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vcellinp__icache_tag_banks__stage2_tag 
        = __Vfunc_getTag__1__Vfuncout;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMove_outWReg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s4_w_reg));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.valid 
        = (1U & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__valid) 
                  & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__released)) 
                 >> (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_oldest)));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_awready_reg 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_awready_next;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_arready_reg 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_arready_next;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_start 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_start));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1 
        = (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sew)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s5_start 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_start));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT____VdfgTmp_h2306eb48__0 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_narrow)) 
           | (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__turn)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT____VdfgTmp_h3afe6e14__0 
        = (1U & ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_narrow)) 
                 | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__turn)));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRed_outBe 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_be;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____Vcellout__slide__DOT__vSlide_0__out_off 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s4_out_off;
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_outMask 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s4_mask));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_outMask 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_mask));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_rd[1U][1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__selected_csr_r;
    if (vlSelf->cva5_sim__DOT__cpu__DOT__gen_mul__DOT__mul_unit_block__DOT__stage1_advance) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_mul__DOT__mul_unit_block__DOT__rs1_r 
            = (((QData)((IData)(((vlSelf->cva5_sim__DOT__cpu__DOT__mul_inputs[2U] 
                                  >> 1U) & ((1U == 
                                             (3U & 
                                              vlSelf->cva5_sim__DOT__cpu__DOT__mul_inputs[0U])) 
                                            | (2U == 
                                               (3U 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__mul_inputs[0U])))))) 
                << 0x20U) | (QData)((IData)(((vlSelf->cva5_sim__DOT__cpu__DOT__mul_inputs[2U] 
                                              << 0x1eU) 
                                             | (vlSelf->cva5_sim__DOT__cpu__DOT__mul_inputs[1U] 
                                                >> 2U)))));
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_mul__DOT__mul_unit_block__DOT__rs2_r 
            = (((QData)((IData)(((vlSelf->cva5_sim__DOT__cpu__DOT__mul_inputs[1U] 
                                  >> 1U) & ((0U == 
                                             (3U & 
                                              vlSelf->cva5_sim__DOT__cpu__DOT__mul_inputs[0U])) 
                                            | (1U == 
                                               (3U 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__mul_inputs[0U])))))) 
                << 0x20U) | (QData)((IData)(((vlSelf->cva5_sim__DOT__cpu__DOT__mul_inputs[1U] 
                                              << 0x1eU) 
                                             | (vlSelf->cva5_sim__DOT__cpu__DOT__mul_inputs[0U] 
                                                >> 2U)))));
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_rd[1U][2U] 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__gen_mul__DOT__mul_unit_block__DOT__mulh
           [1U] ? (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_mul__DOT__mul_unit_block__DOT__result 
                           >> 0x20U)) : (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_mul__DOT__mul_unit_block__DOT__result));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__tag_banks__DOT__tag_line_b[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__tag_banks__DOT____Vcellout__tag_bank_gen__BRA__0__KET____DOT__dtag_bank__data_out_b;
    if (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_load_request) {
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_load 
            = (((QData)((IData)(((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_data_out[2U] 
                                  << 0xeU) | (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_data_out[1U] 
                                              >> 0x12U)))) 
                << 1U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__uncacheable_load)));
    }
    vlSymsp->TOP__cva5_sim__DOT__l2.rd_data = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rdata_reg;
    if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_output) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rid_reg 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rdata_reg 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rdata_mux;
    } else if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_temp_to_output) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rid_reg 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rid_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rdata_reg 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rdata_reg;
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__ram_load_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT____Vcellout__data_bank_gen__BRA__0__KET____DOT__data_bank__data_out_a;
    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
        = ((0xfffffffbU & vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U]) 
           | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_subtract) 
              << 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
        = ((0xfffff0ffU & vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U]) 
           | (0xffffff00U & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_op_r) 
                              << 0xaU) | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_logic_op_r) 
                                          << 8U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__ex_entry 
        = ((0x3fffe3U & vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__ex_entry) 
           | ((0x10U & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__jal_jalr_ex)) 
                        << 4U)) | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__is_return) 
                                    << 3U) | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__is_call) 
                                              << 2U))));
    if (vlSelf->cva5_sim__DOT__cpu__DOT__interrupt_pending) {
        __Vtemp_haeeea704__0[0U] = 0x43042045U;
        __Vtemp_haeeea704__0[1U] = 0x20440420U;
        __Vtemp_haeeea704__0[2U] = 0x4204304U;
        __Vtemp_haeeea704__0[3U] = 0x43042045U;
        __Vtemp_haeeea704__0[4U] = 0x20440420U;
        __Vtemp_haeeea704__0[5U] = 0x4204304U;
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__interrupt_cause_r 
            = vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__interruput_code_table
            [((0xbfU >= (0xffU & ((IData)(3U) * ((0x20U 
                                                  & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                     >> 6U)) 
                                                 | ((0x10U 
                                                     & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                        >> 3U)) 
                                                    | ((8U 
                                                        & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause) 
                                                       | ((4U 
                                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                              >> 7U)) 
                                                          | ((2U 
                                                              & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                                 >> 4U)) 
                                                             | (1U 
                                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                                   >> 1U))))))))))
               ? (7U & (((0U == (0x1fU & ((IData)(3U) 
                                          * ((0x20U 
                                              & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                 >> 6U)) 
                                             | ((0x10U 
                                                 & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                    >> 3U)) 
                                                | ((8U 
                                                    & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause) 
                                                   | ((4U 
                                                       & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                          >> 7U)) 
                                                      | ((2U 
                                                          & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                             >> 4U)) 
                                                         | (1U 
                                                            & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                               >> 1U))))))))))
                          ? 0U : (__Vtemp_haeeea704__0[
                                  (((IData)(2U) + (0xffU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      ((0x20U 
                                                        & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                           >> 6U)) 
                                                       | ((0x10U 
                                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                              >> 3U)) 
                                                          | ((8U 
                                                              & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause) 
                                                             | ((4U 
                                                                 & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                                    >> 7U)) 
                                                                | ((2U 
                                                                    & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                                       >> 4U)) 
                                                                   | (1U 
                                                                      & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                                         >> 1U)))))))))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     ((0x20U 
                                                       & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                          >> 6U)) 
                                                      | ((0x10U 
                                                          & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                             >> 3U)) 
                                                         | ((8U 
                                                             & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause) 
                                                            | ((4U 
                                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                                   >> 7U)) 
                                                               | ((2U 
                                                                   & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                                      >> 4U)) 
                                                                  | (1U 
                                                                     & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                                        >> 1U)))))))))))) 
                        | (__Vtemp_haeeea704__0[(7U 
                                                 & (((IData)(3U) 
                                                     * 
                                                     ((0x20U 
                                                       & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                          >> 6U)) 
                                                      | ((0x10U 
                                                          & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                             >> 3U)) 
                                                         | ((8U 
                                                             & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause) 
                                                            | ((4U 
                                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                                   >> 7U)) 
                                                               | ((2U 
                                                                   & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                                      >> 4U)) 
                                                                  | (1U 
                                                                     & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                                        >> 1U)))))))) 
                                                    >> 5U))] 
                           >> (0x1fU & ((IData)(3U) 
                                        * ((0x20U & 
                                            (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                             >> 6U)) 
                                           | ((0x10U 
                                               & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                  >> 3U)) 
                                              | ((8U 
                                                  & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause) 
                                                 | ((4U 
                                                     & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                        >> 7U)) 
                                                    | ((2U 
                                                        & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                           >> 4U)) 
                                                       | (1U 
                                                          & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
                                                             >> 1U))))))))))))
               : 0U)];
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_tval[0U] 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__.tval;
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__minst_ret_input_next 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__minst_ret;
    vlSelf->cva5_sim__DOT__cpu__DOT__retire = ((0x3cU 
                                                & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_next)) 
                                               | ((0x4000U 
                                                   & vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U])
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_next))));
    if ((0x80U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs_r 
            = vlSelf->cva5_sim__DOT__cpu__DOT__gc_inputs;
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mtvec 
        = (0xfffffffcU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mtvec);
    __Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite_en__41__Vfuncout 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite) 
           & (0x5000000000ULL == (0xff000000000ULL 
                                  & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r)));
    if (__Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite_en__41__Vfuncout) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mtvec 
            = ((3U & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mtvec) 
               | (0xfffffffcU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__updated_csr));
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mepc 
        = (0xfffffffcU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mepc);
    __Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite_en__45__Vfuncout 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite) 
           & (0x41000000000ULL == (0xff000000000ULL 
                                   & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r)));
    if ((1U & (((IData)(__Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite_en__45__Vfuncout) 
                | (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                   >> 9U)) | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__interrupt_taken)))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mepc 
            = ((3U & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mepc) 
               | (((1U & ((vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                           >> 9U) | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__interrupt_taken)))
                    ? ((vlSelf->cva5_sim__DOT__cpu__DOT__gc[2U] 
                        << 0x1aU) | (vlSelf->cva5_sim__DOT__cpu__DOT__gc[1U] 
                                     >> 6U)) : (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__updated_csr 
                                                >> 2U)) 
                  << 2U));
    }
    if (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_exceptions__DOT__new_exception) 
         & (~ (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__.valid)))) {
        vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__.code 
            = ((0x2000U & vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U])
                ? 6U : 4U);
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__branch_metadata_ex 
        = vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__branch_metadata_table
        [vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__id_ex];
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_phys_addr[1U] 
        = ((0xffffff03fULL & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_phys_addr
            [1U]) | ((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__2__KET__.phys_addr)) 
                     << 6U));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_instruction_id[1U] 
        = ((0x3ffc7U & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_instruction_id
            [1U]) | ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__2__KET__.id) 
                     << 3U));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__sub_2x_overflow 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__div_core.remainder)) 
                                  - ((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__shifted_divisor)) 
                                     << 1U)) >> 0x21U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__sub_2x 
        = (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__div_core.remainder 
           - (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__shifted_divisor 
              << 1U));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_instruction_id[1U] 
        = ((0x3f1ffU & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_instruction_id
            [1U]) | (0xe00U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_attr) 
                               << 3U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_phys_addr[1U] 
        = ((0xfff03ffffULL & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_phys_addr
            [1U]) | ((QData)((IData)((0x3fU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_attr)))) 
                     << 0x12U));
    __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__52__b 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_attr) 
                 >> 0xbU));
    __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__52__a 
        = ((0x1000U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_attr))
            ? vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__div_core.remainder
            : vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__div_core.quotient);
    __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__52__Vfuncout 
        = (((- (IData)((IData)(__Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__52__b))) 
            ^ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__52__a) 
           + (IData)(__Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__52__b));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__4__KET__.rd 
        = __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__52__Vfuncout;
    if ((((vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
           >> 6U) & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage) 
                     >> 4U)) & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__4__KET__.ready))) {
        vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.data_out[0U] 
            = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__issue_fifo_inputs[0U];
        vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.data_out[1U] 
            = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__issue_fifo_inputs[1U];
        vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.data_out[2U] 
            = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__issue_fifo_inputs[2U];
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_tval[2U] 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__2__KET__.tval;
    vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_id 
        = ((7U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_id)) 
           | (((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__2__KET__.id) 
               << 6U) | ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__1__KET__.id) 
                         << 3U)));
    if (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_stage_ready) {
        vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ecall_r 
            = (1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__sys_op_match));
        vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage 
            = vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed;
        vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U] 
            = ((7U & vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U]) 
               | ((IData)((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode[2U])) 
                            << 0x39U) | (((QData)((IData)(
                                                          vlSelf->cva5_sim__DOT__cpu__DOT__decode[1U])) 
                                          << 0x19U) 
                                         | ((QData)((IData)(
                                                            vlSelf->cva5_sim__DOT__cpu__DOT__decode[0U])) 
                                            >> 7U)))) 
                  << 3U));
        vlSelf->cva5_sim__DOT__cpu__DOT__issue[2U] 
            = (((IData)((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode[2U])) 
                          << 0x39U) | (((QData)((IData)(
                                                        vlSelf->cva5_sim__DOT__cpu__DOT__decode[1U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlSelf->cva5_sim__DOT__cpu__DOT__decode[0U])) 
                                        >> 7U)))) >> 0x1dU) 
               | ((IData)(((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode[2U])) 
                             << 0x39U) | (((QData)((IData)(
                                                           vlSelf->cva5_sim__DOT__cpu__DOT__decode[1U])) 
                                           << 0x19U) 
                                          | ((QData)((IData)(
                                                             vlSelf->cva5_sim__DOT__cpu__DOT__decode[0U])) 
                                             >> 7U))) 
                           >> 0x20U)) << 3U));
        vlSelf->cva5_sim__DOT__cpu__DOT__issue[3U] 
            = ((IData)(((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode[2U])) 
                          << 0x39U) | (((QData)((IData)(
                                                        vlSelf->cva5_sim__DOT__cpu__DOT__decode[1U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlSelf->cva5_sim__DOT__cpu__DOT__decode[0U])) 
                                        >> 7U))) >> 0x20U)) 
               >> 0x1dU);
        vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
            = ((0xffffffc0U & vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U]) 
               | (0x3fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode[0U]));
        vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
            = ((0x3fffU & vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U]) 
               | (0xffffc000U & ((vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                  << 0x19U) | ((0x1f00000U 
                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                   << 0xdU)) 
                                               | ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.phys_rd_addr) 
                                                  << 0xeU)))));
        vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U] 
            = ((0xfffffff8U & vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U]) 
               | (0x3fffU & ((7U & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                    >> 0xcU)) | ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.phys_rd_addr) 
                                                 >> 0x12U))));
        vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
            = ((0xffffe1ffU & vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U]) 
               | (0xfffffe00U & ((0x1000U & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed)) 
                                             << 0xcU)) 
                                 | (0xe00U & (vlSelf->cva5_sim__DOT__cpu__DOT__decode[2U] 
                                              << 2U)))));
        vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
            = ((0xfffffe7fU & vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U]) 
               | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_exception_unit) 
                  << 7U));
        vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
            = ((0xffffdfffU & vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U]) 
               | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__uses_rd) 
                  << 0xdU));
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_code 
        = ((0x3ffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_code)) 
           | ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__2__KET__.code) 
              << 0xaU));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_id 
        = ((0x1f8U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_id)) 
           | (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__.id));
    vlSelf->cva5_sim__DOT__s_axi_arlen_xbar = (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arlen_reg) 
                                                << 8U) 
                                               | (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                                                             >> 2U))));
    vlSelf->cva5_sim__DOT__s_axi_araddr_xbar = (((QData)((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_araddr_reg)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (((IData)(
                                                                            (vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                                                                             >> 0xdU)) 
                                                                    << 2U) 
                                                                   & (0xffffff80U 
                                                                      | (0x7cU 
                                                                         & ((~ (IData)(
                                                                                (vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                                                                                >> 2U))) 
                                                                            << 2U)))))));
    vlSelf->cva5_sim__DOT__s_axi_awaddr_xbar = (((QData)((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awaddr_reg)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(
                                                                           (vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                                                                            >> 0xdU)) 
                                                                   << 2U))));
    vlSymsp->TOP__cva5_sim__DOT__axi.arvalid = (((IData)(
                                                         (vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                                                          >> 8U)) 
                                                 & ((IData)(vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT__gen_width_3_plus__DOT__inflight_count) 
                                                    >> 4U)) 
                                                & ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out))) 
                                                   | ((0U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out))) 
                                                      & (0U 
                                                         == (IData)(vlSelf->cva5_sim__DOT__arb__DOT__write_in_flight_count)))));
    vlSelf->cva5_sim__DOT__s_axi_arid_xbar = (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arid_reg) 
                                               << 6U) 
                                              | (3U 
                                                 & (IData)(vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out)));
    vlSelf->cva5_sim__DOT__s_axi_awid_xbar = (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awid_reg) 
                                               << 6U) 
                                              | (3U 
                                                 & (IData)(vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out)));
    vlSelf->cva5_sim__DOT__arb__DOT__write_request 
        = (IData)((((~ (vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                        >> 8U)) & ((IData)(vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT__gen_width_3_plus__DOT__inflight_count) 
                                   >> 4U)) & ((IData)(vlSelf->cva5_sim__DOT__arb__DOT__data_fifo_block__DOT__gen_width_3_plus__DOT__inflight_count) 
                                              >> 4U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__valid_fetch_result 
        = (1U & (IData)((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__attributes_fifo__DOT__gen_width_two__DOT__inflight_count) 
                          >> 1U) & (4U == (6U & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__data_for_alignment 
        = ((1U & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__output_entry[1U])
            ? vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__store_data_from_wb
           [vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_oldest]
            : vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__output_entry[0U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_data 
        = ((0xffffff00U & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_data) 
           | (0xffU & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__data_for_alignment));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_data 
        = ((0xffff00ffU & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_data) 
           | (0xff00U & (((1U == (3U & (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__output_entry[1U] 
                                        >> 8U))) ? vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__data_for_alignment
                           : (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__data_for_alignment 
                              >> 8U)) << 8U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_data 
        = ((0xff00ffffU & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_data) 
           | (0xff0000U & (((2U == (3U & (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__output_entry[1U] 
                                          >> 8U))) ? vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__data_for_alignment
                             : (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__data_for_alignment 
                                >> 0x10U)) << 0x10U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_data 
        = ((0xffffffU & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_data) 
           | (((2U == (3U & (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__output_entry[1U] 
                             >> 8U))) ? (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__data_for_alignment 
                                         >> 8U) : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__output_entry[1U] 
                                                        >> 8U)))
                                                    ? vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__data_for_alignment
                                                    : 
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__data_for_alignment 
                                                    >> 0x18U))) 
              << 0x18U));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_request__BRA__0__KET__.request 
        = (1U & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state) 
                  >> 2U) | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_state) 
                            >> 1U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_sel 
        = ((~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state) 
               >> 1U)) & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__replacement_index_r));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_phys_addr[1U] 
        = ((0xfffffffc0ULL & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_phys_addr
            [1U]) | (IData)((IData)((0x3fU & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out 
                                              >> 1U)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_instruction_id[1U] 
        = ((0x3fff8U & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_instruction_id
            [1U]) | (7U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_exception_complete)
                            ? (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__.id)
                            : (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out 
                               >> 7U))));
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [1U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [1U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [2U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [2U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [3U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [3U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [4U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [4U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [5U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [5U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][6U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [6U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][6U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [6U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][7U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [7U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][7U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [7U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][8U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [8U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][8U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [8U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][9U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [9U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][9U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [9U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0xaU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0xaU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0xaU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0xaU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0xbU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0xbU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0xbU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0xbU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0xcU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0xcU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0xcU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0xcU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0xdU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0xdU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0xdU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0xdU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0xeU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0xeU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0xeU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0xeU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0xfU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0xfU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0xfU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0xfU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x10U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x10U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x10U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x10U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x11U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x11U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x11U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x11U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x12U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x12U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x12U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x12U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x13U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x13U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x13U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x13U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x14U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x14U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x14U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x14U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x15U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x15U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x15U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x15U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x16U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x16U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x16U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x16U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x17U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x17U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x17U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x17U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x18U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x18U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x18U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x18U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x19U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x19U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x19U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x19U] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x1aU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x1aU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x1aU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x1aU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x1bU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x1bU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x1bU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x1bU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x1cU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x1cU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x1cU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x1cU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x1dU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x1dU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x1dU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x1dU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x1eU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x1eU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x1eU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x1eU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[0U][0x1fU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x1fU] >> 1U))];
    vlSelf->cva5_sim__DOT__sim_registers_unamed_groups[1U][0x1fU] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [(0x3fU & (vlSelf->cva5_sim__DOT__translation
                   [0x1fU] >> 1U))];
    vlSelf->retire_ports_valid[0U] = vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
        [0U];
    vlSelf->retire_ports_valid[1U] = vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__load_store_unit_block__retire_port_valid[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__load_store_unit_block__retire_port_valid[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_next_mux[0U] 
        = ((1U & vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_next_mux
            [0U]) | ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__renamer_block__DOT__free_list.data_out) 
                     << 1U));
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__gc_unit_block__retire_ids[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__retire_ids
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__gc_unit_block__retire_ids[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__retire_ids
        [1U];
    vlSelf->retire_ports_pc[0U] = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__pc_table
        [vlSelf->cva5_sim__DOT__cpu__DOT__retire_ids
        [0U]];
    vlSelf->retire_ports_pc[1U] = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__pc_table
        [vlSelf->cva5_sim__DOT__cpu__DOT__retire_ids
        [1U]];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__gen_csrs__DOT__csr_unit_block__retire_ids[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__retire_ids
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__gen_csrs__DOT__csr_unit_block__retire_ids[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__retire_ids
        [1U];
    vlSelf->retire_ports_instruction[0U] = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__instruction_table
        [vlSelf->cva5_sim__DOT__cpu__DOT__retire_ids
        [0U]];
    vlSelf->retire_ports_instruction[1U] = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__instruction_table
        [vlSelf->cva5_sim__DOT__cpu__DOT__retire_ids
        [1U]];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__load_store_unit_block__retire_ids[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__retire_ids
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__load_store_unit_block__retire_ids[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__retire_ids
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__store_conflict 
        = (0U != ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out) 
                  & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__valid)));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_instruction_id[1U] 
        = ((0x38fffU & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_instruction_id
            [1U]) | (0x7000U & ((IData)(vlSelf->cva5_sim__DOT__id_list_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out) 
                                << 0xcU)));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_phys_addr[1U] 
        = ((0xfc0ffffffULL & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_phys_addr
            [1U]) | ((QData)((IData)((0x3fU & ((IData)(vlSelf->cva5_sim__DOT__id_list_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out) 
                                               >> 3U)))) 
                     << 0x18U));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__running 
        = vlSelf->__Vdly__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__running;
    if (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__bypass
        [0U]) {
        vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__bypass_set[0U][0U] 
            = (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__commit_r
                      [0U][0U]);
        vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__bypass_set[1U][0U] 
            = (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__commit_r
                      [0U][1U]);
    } else {
        vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__bypass_set[0U][0U] 
            = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__rs_data_set_r
            [0U][0U];
        vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__bypass_set[1U][0U] 
            = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__rs_data_set_r
            [1U][0U];
    }
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__bypass_set
        [vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.rs_wb_group
        [0U]][0U];
    if (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__bypass
        [1U]) {
        vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__bypass_set[0U][1U] 
            = (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__commit_r
                      [1U][0U]);
        vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__bypass_set[1U][1U] 
            = (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__commit_r
                      [1U][1U]);
    } else {
        vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__bypass_set[0U][1U] 
            = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__rs_data_set_r
            [0U][1U];
        vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__bypass_set[1U][1U] 
            = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__rs_data_set_r
            [1U][1U];
    }
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__bypass_set
        [vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.rs_wb_group
        [1U]][1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_next_mux[1U] 
        = ((1U & vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_next_mux
            [1U]) | (0x7eU & vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__inuse_list_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_next_mux[1U] 
        = ((0x7eU & vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_next_mux
            [1U]) | (1U & vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__inuse_list_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_write_index_mux[1U] 
        = (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__inuse_list_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                    >> 0xdU));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___read_addr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellinp__id_waiting_for_writeback_toggle_mem_set__read_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___read_addr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellinp__id_waiting_for_writeback_toggle_mem_set__read_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___read_addr[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__clear_index;
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__gc_unit_block__retire_ids_next[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__retire_ids_next
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__gc_unit_block__retire_ids_next[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__retire_ids_next
        [1U];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rresp_mux 
        = ((3U >= ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg) 
                   << 1U)) ? (3U & ((0xcU | (IData)(vlSelf->ddr_axi_rresp)) 
                                    >> ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg) 
                                        << 1U))) : 0U);
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rresp_mux 
        = ((3U >= ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg) 
                   << 1U)) ? (3U & ((0xcU | (IData)(vlSelf->ddr_axi_rresp)) 
                                    >> ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg) 
                                        << 1U))) : 0U);
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id 
        = ((0xcU >= ((IData)(7U) * (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)))
            ? (0x3fU & ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rid_reg) 
                          << 7U) | (IData)(vlSelf->ddr_axi_rid)) 
                        >> ((IData)(7U) * (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg))))
            : 0U);
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rdata_mux 
        = (IData)(((0x3fU >= ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg) 
                              << 5U)) ? ((QData)((IData)(vlSelf->ddr_axi_rdata)) 
                                         >> ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg) 
                                             << 5U))
                    : 0ULL));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rlast_mux 
        = (1U & ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rlast_reg) 
                   << 1U) | (IData)(vlSelf->ddr_axi_rlast)) 
                 >> (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rlast_mux 
        = (1U & ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rlast_reg) 
                   << 1U) | (IData)(vlSelf->ddr_axi_rlast)) 
                 >> (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge 
        = ((0xfffffffeU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg) 
                           & (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h10656024__0) 
                               & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__s_axi_arready_reg)) 
                              << 1U))) | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg) 
                                          & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h274b4b5e__0) 
                                             & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__s_axi_arready_reg))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge 
        = ((0xfffffffeU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg) 
                           & (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h10656024__0) 
                               & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__s_axi_awready_reg)) 
                              << 1U))) | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg) 
                                          & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h274b4b5e__0) 
                                             & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__s_axi_awready_reg))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rready 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h0241b9ce__0) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT____Vcellinp__data_bank_gen__BRA__0__KET____DOT__data_bank__be_a 
        = (0xfU & (- (IData)(((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__replacement_way_r) 
                              & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__0__KET__.data_valid)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__miss_data_valid 
        = (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__request_in_progress) 
            & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__1__KET__.data_valid)) 
           & ((3U & (vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__second_cycle_addr 
                     >> 2U)) == (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__word_count)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rready 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h65512b5a__0) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg));
    vlSelf->ddr_axi_rready = (1U & (((2U & (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h65512b5a__0) 
                                             << (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)) 
                                            << 1U)) 
                                     | (1U & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h0241b9ce__0) 
                                              << (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)))) 
                                    >> (1U & ((IData)(vlSelf->ddr_axi_rid) 
                                              >> 6U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__replacement_way 
        = vlSelf->__Vdly__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__replacement_way;
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__linefill_in_progress 
        = vlSelf->__Vdly__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__linefill_in_progress;
    cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__icache_tag_banks__DOT____VdfgTmp_heb1af0fb__0 
        = (0x4000U | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__icache_tag_banks__DOT__hit_allowed) 
                       << 0xfU) | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vcellinp__icache_tag_banks__stage2_tag)));
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod8_a1_b1_0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod8_a1_b1_1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod8_a0_b0_0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod8_a0_b0_1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod8_a1_b1_0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod8_a1_b1_1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod8_a0_b0_0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod8_a0_b0_1 = 0U;
        vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_rready_reg = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s4_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s4_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s4_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s4_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s4_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_vec1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s5_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod16_a0_b1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod16_a1_b0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod16_a0_b0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod16_a1_b1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod16_a1_b0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod16_a0_b1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod16_a1_b1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod16_a0_b0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_awready_reg = 0U;
        vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_arready_reg = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_sumOut = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s5_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s5_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_outBe = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMCmp_outBe = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_d = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__mop_d = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_m = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_m = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__mop_m = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem_msk = 0U;
        vlSelf->cva5_sim__DOT____Vcellout__x_rvv_proc_main__vexrv_data_out = 0U;
        vlSelf->cva5_sim__DOT__resp_valid = 0U;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_sew 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod8_a1_b1_0 
            = (0x1ffffU & ((0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_a1) 
                           * (0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_b1)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod8_a1_b1_1 
            = (0x1ffffU & ((0x1ffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_a1 
                                      >> 9U)) * (0x1ffU 
                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_b1 
                                                    >> 9U))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod8_a0_b0_0 
            = (0x1ffffU & ((0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_a0) 
                           * (0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_b0)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod8_a0_b0_1 
            = (0x1ffffU & ((0x1ffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_a0 
                                      >> 9U)) * (0x1ffU 
                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_b0 
                                                    >> 9U))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod8_a1_b1_0 
            = (0x1ffffU & ((0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_a1) 
                           * (0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_b1)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod8_a1_b1_1 
            = (0x1ffffU & ((0x1ffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_a1 
                                      >> 9U)) * (0x1ffU 
                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_b1 
                                                    >> 9U))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod8_a0_b0_0 
            = (0x1ffffU & ((0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_a0) 
                           * (0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_b0)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod8_a0_b0_1 
            = (0x1ffffU & ((0x1ffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_a0 
                                      >> 9U)) * (0x1ffU 
                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_b0 
                                                    >> 9U))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s4_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s3_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s4_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s3_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s4_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s3_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s3_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s4_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s4_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_vec1 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_vec1;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s5_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod16_a0_b1 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_a0)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_b1))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod16_a1_b0 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_a1)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_b0))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod16_a0_b0 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_a0)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_b0))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1__DOT__prod16_a1_b1 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_a1)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_b1))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod16_a1_b0 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_a1)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_b0))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod16_a0_b1 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_a0)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_b1))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod16_a1_b1 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_a1)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_b1))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2__DOT__prod16_a0_b0 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_a0)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_b0))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_sumOut 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellinp__lop16__in_en)
                ? ((4U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_opSel))
                    ? (QData)((IData)(((0xff00U & (
                                                   ((2U 
                                                     & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                        ^ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_opSel)))
                                                     ? (IData)(
                                                               (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sumOut 
                                                                >> 8U))
                                                     : (IData)(
                                                               (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sumOut 
                                                                >> 0x18U))) 
                                                   << 8U)) 
                                       | (0xffU & (
                                                   (1U 
                                                    & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                       ^ 
                                                       ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_opSel) 
                                                        >> 1U)))
                                                    ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sumOut)
                                                    : (IData)(
                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sumOut 
                                                               >> 0x10U)))))))
                    : (QData)((IData)(((0xff00U & (
                                                   vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[0U] 
                                                   >> 3U)) 
                                       | (0xffU & (
                                                   vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[0U] 
                                                   >> 1U))))))
                : (QData)((IData)((0xffffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sumOut)))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_sew 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sew;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s5_sew 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_sew;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s5_be 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_be;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_outBe 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s4_be;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMCmp_outBe 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_out_be;
        if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall) {
            if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__no_bubble) {
                vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d 
                    = (0x7fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d));
                vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d 
                    = (7U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d));
                vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d 
                    = (0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d));
                vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_d 
                    = (0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_d));
                vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__mop_d 
                    = (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mop_d));
            } else {
                vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d 
                    = (0x7fU & 0U);
                vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d 
                    = (7U & 0U);
                vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d 
                    = (0x1fU & 0U);
                vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_d 
                    = (0x1fU & 0U);
                vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__mop_d 
                    = (3U & 0U);
            }
        } else {
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d 
                = (0x7fU & (0x7fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f));
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d 
                = (7U & (7U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                               >> 0xcU)));
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d 
                = (0x1fU & (0x1fU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                     >> 7U)));
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_d 
                = (0x1fU & (0x1fU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                     >> 0x14U)));
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__mop_d 
                = (3U & (3U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                               >> 0x1aU)));
        }
        if (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem) 
             & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rlast_reg)))) {
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_m 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_m;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m 
                = (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m));
        } else {
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_m 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m 
                = (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d));
        }
        if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem) {
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_m 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_m;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__mop_m 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mop_m;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem 
                = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rlast_reg)));
        } else {
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_m 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_d;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__mop_m 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mop_d;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem 
                = (1U & (7U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d)));
        }
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem_msk 
            = (1U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem_msk)
                      ? (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rlast_reg))
                      : (((7U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d)) 
                          & (0xbU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_d))) 
                         & (0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mop_d)))));
        vlSelf->cva5_sim__DOT____Vcellout__x_rvv_proc_main__vexrv_data_out 
            = ((((0x57U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d)) 
                 & (7U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d))) 
                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__new_vl))
                ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)
                : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__out_data_e);
        vlSelf->cva5_sim__DOT__resp_valid = ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__out_ack_e) 
                                               | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__out_ack_m)) 
                                              | (((0x57U 
                                                   == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d)) 
                                                  & (7U 
                                                     == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d))) 
                                                 & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__new_vl))) 
                                             | (3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_m))));
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mop_d 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__mop_d;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem_msk 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem_msk;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_m 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_m;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_m 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_m;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mop_m 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__mop_m;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_d 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_d;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__avl;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem;
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mie 
           & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mip);
    vlSelf->cva5_sim__DOT__cpu__DOT__gc_inputs = (((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__constant_alu)) 
                                                   << 3U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ifence_r) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_mret_r) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_sret_r))))));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__.valid 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__.__Vdly__valid;
    cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT____VdfgTmp_h590e39c9__0 
        = (((QData)((IData)((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__div_core.remainder)) 
                                                    - 
                                                    ((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__shifted_divisor)) 
                                                     << 1U)) 
                                                   >> 0x20U)))))) 
            << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__sub_2x)));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_rd[1U][3U] 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__4__KET__.rd;
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__4__KET__.ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.valid)) 
                 | (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__in_progress))));
    vlSelf->cva5_sim__DOT__s_axi_arvalid_xbar = (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arvalid_reg) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__cva5_sim__DOT__axi.arvalid));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rid_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rid_reg;
    if ((1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_reg)))) {
        if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
             & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_reg)))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rid_next 
                = (0x3fU & (IData)(vlSelf->cva5_sim__DOT__s_axi_arid_xbar));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rid_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rid_reg;
    if ((1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_reg)))) {
        if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
             & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_reg)))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rid_next 
                = (0x3fU & ((IData)(vlSelf->cva5_sim__DOT__s_axi_arid_xbar) 
                            >> 6U));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hb9a644b6__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (0x3fU & (IData)(vlSelf->cva5_sim__DOT__s_axi_arid_xbar))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hbb2ff3b7__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (0x3fU & (IData)(vlSelf->cva5_sim__DOT__s_axi_arid_xbar))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hb9a644b6__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (0x3fU & ((IData)(vlSelf->cva5_sim__DOT__s_axi_arid_xbar) 
                                       >> 6U))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hbb2ff3b7__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (0x3fU & ((IData)(vlSelf->cva5_sim__DOT__s_axi_arid_xbar) 
                                       >> 6U))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bid_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bid_reg;
    if ((1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_reg)))) {
        if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
             & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_reg)))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bid_next 
                = (0x3fU & (IData)(vlSelf->cva5_sim__DOT__s_axi_awid_xbar));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bid_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bid_reg;
    if ((1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_reg)))) {
        if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
             & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_reg)))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bid_next 
                = (0x3fU & ((IData)(vlSelf->cva5_sim__DOT__s_axi_awid_xbar) 
                            >> 6U));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hb9a644b6__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (0x3fU & (IData)(vlSelf->cva5_sim__DOT__s_axi_awid_xbar))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hbb2ff3b7__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (0x3fU & (IData)(vlSelf->cva5_sim__DOT__s_axi_awid_xbar))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hb9a644b6__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (0x3fU & ((IData)(vlSelf->cva5_sim__DOT__s_axi_awid_xbar) 
                                       >> 6U))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hbb2ff3b7__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (0x3fU & ((IData)(vlSelf->cva5_sim__DOT__s_axi_awid_xbar) 
                                       >> 6U))));
    vlSymsp->TOP__cva5_sim__DOT__axi.awvalid = ((IData)(vlSelf->cva5_sim__DOT__arb__DOT__write_request) 
                                                & (~ (IData)(vlSelf->cva5_sim__DOT__arb__DOT__aw_complete_r)));
    vlSymsp->TOP__cva5_sim__DOT__axi.wvalid = ((IData)(vlSelf->cva5_sim__DOT__arb__DOT__write_request) 
                                               & (~ (IData)(vlSelf->cva5_sim__DOT__arb__DOT__w_complete_r)));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__strb_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__strb_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__wuser_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__wuser_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__data_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__data_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wlast_int = 0U;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wstrb_int 
        = (0xfU & (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__strb_reg));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wuser_int 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__wuser_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wdata_int 
        = (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__data_reg);
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wvalid_int = 0U;
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_data;
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[1U] 
        = (IData)((0xffffffffffULL & (((QData)((IData)(
                                                       vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__output_entry[2U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__output_entry[1U])))));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[2U] 
        = (IData)(((0xffffffffffULL & (((QData)((IData)(
                                                        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__output_entry[2U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__output_entry[1U])))) 
                   >> 0x20U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_index 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__lsq_addr_hash__rst)
            ? 0U : (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_index_next));
    vlSelf->cva5_sim__DOT__cpu__DOT__wb_snoop = ((0x3ff00000000ULL 
                                                  & vlSelf->cva5_sim__DOT__cpu__DOT__wb_snoop) 
                                                 | (IData)((IData)(
                                                                   vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
                                                                   [1U])));
    vlSelf->cva5_sim__DOT__cpu__DOT__wb_snoop = ((0x7fffffffffULL 
                                                  & vlSelf->cva5_sim__DOT__cpu__DOT__wb_snoop) 
                                                 | ((QData)((IData)(
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
                                                                                [1U] 
                                                                                >> 0x27U))))) 
                                                    << 0x27U));
    vlSelf->cva5_sim__DOT__cpu__DOT__wb_snoop = ((0x3feffffffffULL 
                                                  & vlSelf->cva5_sim__DOT__cpu__DOT__wb_snoop) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & ((~ (IData)(vlSelf->rst)) 
                                                                        & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
                                                                                [1U] 
                                                                                >> 0x20U)))))) 
                                                    << 0x20U));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests 
        = (((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_request__BRA__3__KET__.request) 
            << 3U) | (((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_request__BRA__2__KET__.request) 
                       << 2U) | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__request_r) 
                                  << 1U) | (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_request__BRA__0__KET__.request))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_data_array[0U] 
        = ((0U >= (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_sel))
            ? vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__ram_load_data
           [vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_sel]
            : 0U);
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x1fU])][0x1fU];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[1U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x1eU])][0x1eU];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[2U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x1dU])][0x1dU];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[3U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x1cU])][0x1cU];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[4U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x1bU])][0x1bU];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[5U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x1aU])][0x1aU];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[6U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x19U])][0x19U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[7U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x18U])][0x18U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[8U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x17U])][0x17U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[9U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x16U])][0x16U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0xaU] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x15U])][0x15U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0xbU] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x14U])][0x14U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0xcU] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x13U])][0x13U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0xdU] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x12U])][0x12U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0xeU] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x11U])][0x11U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0xfU] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0x10U])][0x10U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x10U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0xfU])][0xfU];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x11U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0xeU])][0xeU];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x12U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0xdU])][0xdU];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x13U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0xcU])][0xcU];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x14U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0xbU])][0xbU];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x15U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[0xaU])][0xaU];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x16U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[9U])][9U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x17U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[8U])][8U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x18U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[7U])][7U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x19U] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[6U])][6U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x1aU] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[5U])][5U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x1bU] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[4U])][4U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x1cU] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[3U])][3U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x1dU] 
        = vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
        [(1U & vlSelf->cva5_sim__DOT__translation[2U])][2U];
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x1eU] 
        = (IData)((((QData)((IData)(vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
                                    [(1U & vlSelf->cva5_sim__DOT__translation
                                      [0U])][0U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
                                                [(1U 
                                                  & vlSelf->cva5_sim__DOT__translation
                                                  [1U])][1U]))));
    vlSelf->cva5_sim__DOT__sim_registers_unamed[0x1fU] 
        = (IData)(((((QData)((IData)(vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
                                     [(1U & vlSelf->cva5_sim__DOT__translation
                                       [0U])][0U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__sim_registers_unamed_groups
                                                 [(1U 
                                                   & vlSelf->cva5_sim__DOT__translation
                                                   [1U])][1U]))) 
                   >> 0x20U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT____Vcellinp__lsq_block__retire_port_valid[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__load_store_unit_block__retire_port_valid
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT____Vcellinp__lsq_block__retire_port_valid[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__load_store_unit_block__retire_port_valid
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__new_request_addr 
        = ((2U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__cache_input_fifo__DOT__gen_width_two__DOT__inflight_count))
            ? vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__cache_input_fifo__DOT__gen_width_two__DOT__shift_reg
           [(1U & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__cache_input_fifo__DOT__gen_width_two__DOT__inflight_count)))]
            : vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__pc);
    __Vfunc_address_range_check__0__addr = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__pc;
    __Vfunc_address_range_check__0__Vfuncout = (0x10U 
                                                == 
                                                (__Vfunc_address_range_check__0__addr 
                                                 >> 0x1bU));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit_address_match 
        = __Vfunc_address_range_check__0__Vfuncout;
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__pc_mux[3U] 
        = ((IData)(4U) + vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__pc);
    __Vfunc_getTag__8__addr = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__pc;
    __Vfunc_getTag__8__Vfuncout = (0xffffU & (__Vfunc_getTag__8__addr 
                                              >> 0xbU));
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_matches 
        = ((2U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_matches)) 
           | ((0x1ffffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__if_entry 
                                   >> 5U))) == (0x10000U 
                                                | (IData)(__Vfunc_getTag__8__Vfuncout))));
    __Vfunc_getTag__9__addr = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__pc;
    __Vfunc_getTag__9__Vfuncout = (0xffffU & (__Vfunc_getTag__9__addr 
                                              >> 0xbU));
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_matches 
        = ((1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_matches)) 
           | (((0x1ffffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__if_entry 
                                    >> 0x1bU))) == 
               (0x10000U | (IData)(__Vfunc_getTag__9__Vfuncout))) 
              << 1U));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_tval[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex;
    vlSelf->cva5_sim__DOT__start_collection = (vlSelf->retire_ports_valid
                                               [0U] 
                                               & (0xc00013U 
                                                  == 
                                                  vlSelf->retire_ports_instruction
                                                  [0U]));
    vlSelf->cva5_sim__DOT__start_collection = ((IData)(vlSelf->cva5_sim__DOT__start_collection) 
                                               | (vlSelf->retire_ports_valid
                                                  [1U] 
                                                  & (0xc00013U 
                                                     == 
                                                     vlSelf->retire_ports_instruction
                                                     [1U])));
    vlSelf->cva5_sim__DOT__end_collection = (vlSelf->retire_ports_valid
                                             [0U] & 
                                             (0xd00013U 
                                              == vlSelf->retire_ports_instruction
                                              [0U]));
    vlSelf->cva5_sim__DOT__end_collection = ((IData)(vlSelf->cva5_sim__DOT__end_collection) 
                                             | (vlSelf->retire_ports_valid
                                                [1U] 
                                                & (0xd00013U 
                                                   == 
                                                   vlSelf->retire_ports_instruction
                                                   [1U])));
    vlSelf->cva5_sim__DOT__is_mul[0U] = (1U & ((vlSelf->retire_ports_instruction
                                                [0U] 
                                                >> 0x19U) 
                                               & (~ 
                                                  (vlSelf->retire_ports_instruction
                                                   [0U] 
                                                   >> 0xeU))));
    vlSelf->cva5_sim__DOT__is_div[0U] = (1U & ((vlSelf->retire_ports_instruction
                                                [0U] 
                                                >> 0x19U) 
                                               & (vlSelf->retire_ports_instruction
                                                  [0U] 
                                                  >> 0xeU)));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[0U] 
        = ((0x7eU & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [0U]) | ((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                      [0U] & ((((0xcU == (0x1fU & (
                                                   vlSelf->retire_ports_instruction
                                                   [0U] 
                                                   >> 2U))) 
                                | (4U == (0x1fU & (
                                                   vlSelf->retire_ports_instruction
                                                   [0U] 
                                                   >> 2U)))) 
                               | (5U == (0x1fU & (vlSelf->retire_ports_instruction
                                                  [0U] 
                                                  >> 2U)))) 
                              | (0xdU == (0x1fU & (
                                                   vlSelf->retire_ports_instruction
                                                   [0U] 
                                                   >> 2U))))) 
                     & (~ (vlSelf->cva5_sim__DOT__is_mul
                           [0U] | vlSelf->cva5_sim__DOT__is_div
                           [0U]))));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[0U] 
        = ((0x7dU & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [0U]) | ((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                      [0U] & (((0x18U == (0x1fU & (
                                                   vlSelf->retire_ports_instruction
                                                   [0U] 
                                                   >> 2U))) 
                               | (0x1bU == (0x1fU & 
                                            (vlSelf->retire_ports_instruction
                                             [0U] >> 2U)))) 
                              | (0x19U == (0x1fU & 
                                           (vlSelf->retire_ports_instruction
                                            [0U] >> 2U))))) 
                     << 1U));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[0U] 
        = ((0x7bU & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [0U]) | (((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                       [0U] & (0xcU == (0x1fU & (vlSelf->retire_ports_instruction
                                                 [0U] 
                                                 >> 2U)))) 
                      & vlSelf->cva5_sim__DOT__is_mul
                      [0U]) << 2U));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[0U] 
        = ((0x77U & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [0U]) | (((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                       [0U] & (0xcU == (0x1fU & (vlSelf->retire_ports_instruction
                                                 [0U] 
                                                 >> 2U)))) 
                      & vlSelf->cva5_sim__DOT__is_div
                      [0U]) << 3U));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[0U] 
        = ((0x6fU & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [0U]) | ((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                      [0U] & ((0U == (0x1fU & (vlSelf->retire_ports_instruction
                                               [0U] 
                                               >> 2U))) 
                              | (0xbU == (0x1fU & (
                                                   vlSelf->retire_ports_instruction
                                                   [0U] 
                                                   >> 2U))))) 
                     << 4U));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[0U] 
        = ((0x5fU & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [0U]) | ((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                      [0U] & ((8U == (0x1fU & (vlSelf->retire_ports_instruction
                                               [0U] 
                                               >> 2U))) 
                              | (0xbU == (0x1fU & (
                                                   vlSelf->retire_ports_instruction
                                                   [0U] 
                                                   >> 2U))))) 
                     << 5U));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[0U] 
        = ((0x3fU & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [0U]) | ((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                      [0U] & ((0x1cU == (0x1fU & (vlSelf->retire_ports_instruction
                                                  [0U] 
                                                  >> 2U))) 
                              | (3U == (0x1fU & (vlSelf->retire_ports_instruction
                                                 [0U] 
                                                 >> 2U))))) 
                     << 6U));
    vlSelf->cva5_sim__DOT__is_mul[1U] = (1U & ((vlSelf->retire_ports_instruction
                                                [1U] 
                                                >> 0x19U) 
                                               & (~ 
                                                  (vlSelf->retire_ports_instruction
                                                   [1U] 
                                                   >> 0xeU))));
    vlSelf->cva5_sim__DOT__is_div[1U] = (1U & ((vlSelf->retire_ports_instruction
                                                [1U] 
                                                >> 0x19U) 
                                               & (vlSelf->retire_ports_instruction
                                                  [1U] 
                                                  >> 0xeU)));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[1U] 
        = ((0x7eU & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [1U]) | ((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                      [1U] & ((((0xcU == (0x1fU & (
                                                   vlSelf->retire_ports_instruction
                                                   [1U] 
                                                   >> 2U))) 
                                | (4U == (0x1fU & (
                                                   vlSelf->retire_ports_instruction
                                                   [1U] 
                                                   >> 2U)))) 
                               | (5U == (0x1fU & (vlSelf->retire_ports_instruction
                                                  [1U] 
                                                  >> 2U)))) 
                              | (0xdU == (0x1fU & (
                                                   vlSelf->retire_ports_instruction
                                                   [1U] 
                                                   >> 2U))))) 
                     & (~ (vlSelf->cva5_sim__DOT__is_mul
                           [1U] | vlSelf->cva5_sim__DOT__is_div
                           [1U]))));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[1U] 
        = ((0x7dU & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [1U]) | ((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                      [1U] & (((0x18U == (0x1fU & (
                                                   vlSelf->retire_ports_instruction
                                                   [1U] 
                                                   >> 2U))) 
                               | (0x1bU == (0x1fU & 
                                            (vlSelf->retire_ports_instruction
                                             [1U] >> 2U)))) 
                              | (0x19U == (0x1fU & 
                                           (vlSelf->retire_ports_instruction
                                            [1U] >> 2U))))) 
                     << 1U));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[1U] 
        = ((0x7bU & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [1U]) | (((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                       [1U] & (0xcU == (0x1fU & (vlSelf->retire_ports_instruction
                                                 [1U] 
                                                 >> 2U)))) 
                      & vlSelf->cva5_sim__DOT__is_mul
                      [1U]) << 2U));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[1U] 
        = ((0x77U & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [1U]) | (((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                       [1U] & (0xcU == (0x1fU & (vlSelf->retire_ports_instruction
                                                 [1U] 
                                                 >> 2U)))) 
                      & vlSelf->cva5_sim__DOT__is_div
                      [1U]) << 3U));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[1U] 
        = ((0x6fU & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [1U]) | ((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                      [1U] & ((0U == (0x1fU & (vlSelf->retire_ports_instruction
                                               [1U] 
                                               >> 2U))) 
                              | (0xbU == (0x1fU & (
                                                   vlSelf->retire_ports_instruction
                                                   [1U] 
                                                   >> 2U))))) 
                     << 4U));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[1U] 
        = ((0x5fU & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [1U]) | ((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                      [1U] & ((8U == (0x1fU & (vlSelf->retire_ports_instruction
                                               [1U] 
                                               >> 2U))) 
                              | (0xbU == (0x1fU & (
                                                   vlSelf->retire_ports_instruction
                                                   [1U] 
                                                   >> 2U))))) 
                     << 5U));
    vlSelf->cva5_sim__DOT__instruction_mix_stats[1U] 
        = ((0x3fU & vlSelf->cva5_sim__DOT__instruction_mix_stats
            [1U]) | ((vlSelf->cva5_sim__DOT__cpu__DOT__retire_port_valid
                      [1U] & ((0x1cU == (0x1fU & (vlSelf->retire_ports_instruction
                                                  [1U] 
                                                  >> 2U))) 
                              | (3U == (0x1fU & (vlSelf->retire_ports_instruction
                                                 [1U] 
                                                 >> 2U))))) 
                     << 6U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT____Vcellinp__lsq_block__retire_ids[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__load_store_unit_block__retire_ids
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT____Vcellinp__lsq_block__retire_ids[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__load_store_unit_block__retire_ids
        [1U];
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_valid 
        = (IData)((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT__gen_width_3_plus__DOT__inflight_count) 
                    >> 3U) & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__store_conflict))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__cycles_remaining_next 
        = (0xfU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__cycles_remaining) 
                   - (IData)(1U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
        = ((0x3fffffffU & vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                        [0U])) << 0x20U) 
                       | (QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                         [1U])))) << 0x1eU));
    vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[1U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                      [0U])) << 0x20U) 
                     | (QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                       [1U])))) >> 2U) 
           | ((IData)(((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                         [0U])) << 0x20U) 
                        | (QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                          [1U]))) >> 0x20U)) 
              << 0x1eU));
    vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[2U] 
        = ((IData)(((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                      [0U])) << 0x20U) 
                     | (QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                       [1U]))) >> 0x20U)) 
           >> 2U);
    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
        = ((0xfffU & vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                        [0U])) << 0x20U) 
                       | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__constant_alu)))) 
              << 0xcU));
    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[1U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                      [0U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__constant_alu)))) 
            >> 0x14U) | ((IData)(((((QData)((IData)(
                                                    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                    [0U])) 
                                    << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__constant_alu))) 
                                  >> 0x20U)) << 0xcU));
    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[2U] 
        = ((0xfffff000U & vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[2U]) 
           | ((IData)(((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                         [0U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__constant_alu))) 
                       >> 0x20U)) >> 0x14U));
    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
        = ((0xffffff07U & vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U]) 
           | (0xf8U & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_imm_type)
                         ? vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_rs_addr
                        [1U] : vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                        [1U]) << 3U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_next_mux[2U] 
        = ((1U & vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_next_mux
            [2U]) | (0x7eU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_previous_r)));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_next_mux[2U] 
        = ((0x7eU & vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_next_mux
            [2U]) | (1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_previous_r)));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___read_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___read_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___read_addr
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___read_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___read_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___read_addr
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___read_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___read_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___read_addr
        [2U];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h066a711c__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h07eba8a5__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rvalid_mux) 
           & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg) 
              & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rlast_mux)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rvalid_mux) 
           & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg) 
              & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rlast_mux)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_new_next 
        = (1U & (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_new_reg) 
                  | (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_reg))) 
                 | (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))));
    if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_reg) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_next = 1U;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_len_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_len_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rlast_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rlast_reg;
        if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rready) {
            if ((0U < (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_len_reg))) {
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_next = 1U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_len_next 
                    = (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_len_reg) 
                                - (IData)(1U)));
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rlast_next 
                    = (0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_len_next));
            } else {
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_next = 0U;
            }
        }
    } else {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_next = 0U;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_len_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_len_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rlast_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rlast_reg;
        if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
             & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_reg)))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_next = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_len_next 
                = (0xffU & (IData)(vlSelf->cva5_sim__DOT__s_axi_arlen_xbar));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rlast_next 
                = (0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_len_next));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_awvalid_mux 
        = (((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h10656024__0) 
              << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h274b4b5e__0)) 
            >> (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_reg)) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_reg));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_awready 
        = (3U & ((IData)(cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h0013566c__0) 
                 << (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_reg)));
    if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_reg) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_next = 1U;
        if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h1a42b60d__0) 
             & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_reg))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_next = 0U;
        }
    } else {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_next = 0U;
        if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
             & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_reg)))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_next = 1U;
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id 
        = ((0xcU >= ((IData)(7U) * (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_reg)))
            ? (0x3fU & ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bid_reg) 
                          << 7U) | (IData)(vlSelf->ddr_axi_bid)) 
                        >> ((IData)(7U) * (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_reg))))
            : 0U);
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_bvalid_mux 
        = (3U & (((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_reg) 
                    << 1U) | (IData)(vlSelf->ddr_axi_bvalid)) 
                  >> (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_reg)) 
                 & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_reg)));
    if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_reg) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_next = 1U;
        if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h39acbbc8__0) 
             & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_reg))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_next = 0U;
        }
    } else {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_next = 0U;
        if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
             & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_reg)))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_next = 1U;
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id 
        = ((0xcU >= ((IData)(7U) * (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_reg)))
            ? (0x3fU & ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bid_reg) 
                          << 7U) | (IData)(vlSelf->ddr_axi_bid)) 
                        >> ((IData)(7U) * (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_reg))))
            : 0U);
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_bvalid_mux 
        = (3U & (((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_reg) 
                    << 1U) | (IData)(vlSelf->ddr_axi_bvalid)) 
                  >> (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_reg)) 
                 & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_reg)));
    vlSelf->ddr_axi_bready = (1U & (((2U & (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h39acbbc8__0) 
                                             << (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_reg)) 
                                            << 1U)) 
                                     | (1U & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h1a42b60d__0) 
                                              << (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_reg)))) 
                                    >> (1U & ((IData)(vlSelf->ddr_axi_bid) 
                                              >> 6U))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_reg 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_next;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_arvalid_mux 
        = (((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h10656024__0) 
              << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h274b4b5e__0)) 
            >> (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_reg)) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_reg));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__int_axi_arready 
        = (3U & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h374469b8__0) 
                 << (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_reg)));
    vlSelf->ddr_axi_wvalid = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg;
    __Vfunc_getDataLineAddr__32__addr = ((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[2U] 
                                          << 0x1bU) 
                                         | (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[1U] 
                                            >> 5U));
    __Vfunc_getDataLineAddr__32__Vfuncout = (0xfffU 
                                             & (__Vfunc_getDataLineAddr__32__addr 
                                                >> 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT____Vcellinp__data_bank_gen__BRA__0__KET____DOT__data_bank__addr_b 
        = __Vfunc_getDataLineAddr__32__Vfuncout;
    __Vfunc_getTag__37__addr = ((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[2U] 
                                 << 0x1bU) | (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[1U] 
                                              >> 5U));
    __Vfunc_getTag__37__Vfuncout = (0x3fffU & (__Vfunc_getTag__37__addr 
                                               >> 0xeU));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_tag_hit_way 
        = ((0x4000U | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__tag_banks__DOT__store_req_r) 
                        << 0xfU) | (IData)(__Vfunc_getTag__37__Vfuncout))) 
           == (0x8000U | vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__tag_banks__DOT__tag_line_a
               [0U]));
    if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_temp) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rid_reg 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rdata_reg 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rdata_mux;
    }
    if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_reg) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_next = 1U;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_len_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_len_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rlast_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rlast_reg;
        if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rready) {
            if ((0U < (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_len_reg))) {
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_next = 1U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_len_next 
                    = (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_len_reg) 
                                - (IData)(1U)));
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rlast_next 
                    = (0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_len_next));
            } else {
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_next = 0U;
            }
        }
    } else {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_next = 0U;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_len_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_len_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rlast_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rlast_reg;
        if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
             & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_reg)))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_next = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_len_next 
                = (0xffU & ((IData)(vlSelf->cva5_sim__DOT__s_axi_arlen_xbar) 
                            >> 8U));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rlast_next 
                = (0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_len_next));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_complete 
        = ((IData)(vlSelf->ddr_axi_rvalid) & ((IData)(vlSelf->ddr_axi_rready) 
                                              & (IData)(vlSelf->ddr_axi_rlast)));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rid_int 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__id_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_ruser_int 
        = vlSelf->cva5_sim__DOT__m_axi_ruser_adapt;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__resp_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__resp_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rresp_int 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__resp_reg;
    __Vtableidx7 = (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rvalid_mux) 
                     << 4U) | (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_rready_reg) 
                                << 3U) | (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg) 
                                           << 2U) | 
                                          (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rvalid_reg) 
                                            << 1U) 
                                           | (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg)))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_next 
        = Vcva5_sim__ConstPool__TABLE_hefc0ef20_0[__Vtableidx7];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rvalid_next 
        = Vcva5_sim__ConstPool__TABLE_haec470c6_0[__Vtableidx7];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_output 
        = Vcva5_sim__ConstPool__TABLE_h49faefbe_0[__Vtableidx7];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_temp 
        = Vcva5_sim__ConstPool__TABLE_h9070065d_0[__Vtableidx7];
    if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__store_axi_b_input_to_output = 1U;
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_temp_to_output 
        = Vcva5_sim__ConstPool__TABLE_h454cc0b0_0[__Vtableidx7];
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vcellinp__idata_bank_gen__BRA__0__KET____DOT__idata_bank__en_b 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__tag_update_way) 
           & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__1__KET__.data_valid));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vcellinp__idata_bank_gen__BRA__1__KET____DOT__idata_bank__en_b 
        = (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__tag_update_way) 
            >> 1U) & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__1__KET__.data_valid));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__second_cycle 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__new_request));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__tag_hit_way 
        = ((((IData)(cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__icache_tag_banks__DOT____VdfgTmp_heb1af0fb__0) 
             == (0x8000U | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__icache_tag_banks__DOT____Vcellout__tag_bank_gen__BRA__1__KET____DOT__itag_bank__data_out_a))) 
            << 1U) | ((IData)(cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__icache_tag_banks__DOT____VdfgTmp_heb1af0fb__0) 
                      == (0x8000U | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__icache_tag_banks__DOT____Vcellout__tag_bank_gen__BRA__0__KET____DOT__itag_bank__data_out_a))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s4_w_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_w_reg));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awcache_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awcache_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_size_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_size_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awburst_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awburst_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__id_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__id_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awid_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awid_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awprot_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awprot_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awlock_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awlock_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awuser_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awuser_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awqos_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awqos_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awregion_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awregion_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_size_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_size_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awsize_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awsize_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_awready_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_active_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_active_reg;
    if ((1U & (~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_reg) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_reg))) {
            if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_wready_reg) 
                 & (0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_buf_l__DOT__count)))) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__strb_next = 0xffU;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__wuser_next 
                    = vlSelf->cva5_sim__DOT__s_axi_wuser_adapt;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__data_next 
                    = (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_last_data[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_last_data[0U])));
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_next 
                    = (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_reg) 
                                - (IData)(1U)));
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_active_next 
                    = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_reg));
            }
        } else if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_awready_reg) 
                    & (IData)(vlSelf->cva5_sim__DOT__aw_valid))) {
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_next 
                = vlSelf->cva5_sim__DOT__aw_len;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_active_next = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_reg)))) {
            if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_awready_reg) 
                 & (IData)(vlSelf->cva5_sim__DOT__aw_valid))) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awcache_next = 2U;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_size_next = 3U;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awburst_next = 1U;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__id_next = 5U;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awid_next = 5U;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awprot_next 
                    = vlSelf->cva5_sim__DOT__s_axi_awprot_adapt;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awlock_next 
                    = vlSelf->cva5_sim__DOT__s_axi_awlock_adapt;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awuser_next 
                    = vlSelf->cva5_sim__DOT__s_axi_awuser_adapt;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awqos_next 
                    = vlSelf->cva5_sim__DOT__s_axi_awqos_adapt;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awregion_next 
                    = vlSelf->cva5_sim__DOT__s_axi_awregion_adapt;
            }
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awaddr_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awaddr_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awvalid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awvalid_reg) 
           & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_reg)));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awlen_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awlen_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arid_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arid_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__id_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__id_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arcache_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arcache_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_size_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_size_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arsize_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arsize_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_size_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_size_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arburst_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arburst_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_aruser_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_aruser_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arregion_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arregion_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arqos_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arqos_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arlock_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arlock_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arprot_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arprot_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_rready_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__state_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_arready_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arvalid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arvalid_reg) 
           & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_reg)));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__addr_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__addr_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__data_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__data_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_araddr_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_araddr_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arlen_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arlen_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rdata_int 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__data_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rvalid_int = 0U;
    if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__state_reg))) {
        vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__resp_next = 0U;
        vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_arready_next 
            = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arvalid_reg)));
        if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_arready_reg) 
             & (IData)(vlSelf->cva5_sim__DOT__ar_valid))) {
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arid_next = 4U;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__id_next = 4U;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arcache_next = 2U;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_size_next = 2U;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arsize_next = 2U;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_size_next = 3U;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arburst_next = 1U;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_aruser_next 
                = vlSelf->cva5_sim__DOT__s_axi_aruser_adapt;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arregion_next 
                = vlSelf->cva5_sim__DOT__s_axi_arregion_adapt;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arqos_next 
                = vlSelf->cva5_sim__DOT__s_axi_arqos_adapt;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arlock_next 
                = vlSelf->cva5_sim__DOT__s_axi_arlock_adapt;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arprot_next 
                = vlSelf->cva5_sim__DOT__s_axi_arprot_adapt;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_rready_next = 0U;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__state_next = 1U;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_arready_next = 0U;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arvalid_next = 1U;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_next 
                = (0xffU & ((0U != ((IData)(vlSelf->cva5_sim__DOT__ar_len) 
                                    >> 7U)) ? (0xfeU 
                                               | (1U 
                                                  & ((~ vlSelf->cva5_sim__DOT__ar_addr) 
                                                     >> 2U)))
                             : (((IData)(vlSelf->cva5_sim__DOT__ar_len) 
                                 << 1U) | (1U & ((~ vlSelf->cva5_sim__DOT__ar_addr) 
                                                 >> 2U)))));
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_araddr_next 
                = vlSelf->cva5_sim__DOT__ar_addr;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__addr_next 
                = vlSelf->cva5_sim__DOT__ar_addr;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_next 
                = vlSelf->cva5_sim__DOT__ar_len;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arlen_next 
                = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_next;
        } else {
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__state_reg))) {
        vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_rready_next 
            = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arvalid_reg)));
        if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_rready_reg) 
             & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg))) {
            if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rresp_reg))) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__resp_next 
                    = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rresp_reg;
            }
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rresp_int 
                = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__resp_next;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__data_next 
                = (((~ (0xffffffffULL << (0x20U & (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__addr_reg 
                                                   << 3U)))) 
                    & vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__data_next) 
                   | ((QData)((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rdata_reg)) 
                      << (0x20U & (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__addr_reg 
                                   << 3U))));
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rdata_int 
                = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__data_next;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rvalid_int = 0U;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_next 
                = (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_reg) 
                            - (IData)(1U)));
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__addr_next 
                = ((vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__addr_reg 
                    + ((IData)(1U) << (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_size_reg))) 
                   & ((IData)(0xffffffffU) << (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_size_reg)));
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_araddr_next 
                = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__addr_next;
            if (((1U & (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__addr_next 
                        >> (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_size_reg))) 
                 != (1U & (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__addr_reg 
                           >> (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_size_reg))))) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__data_next = 0ULL;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_next 
                    = (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_reg) 
                                - (IData)(1U)));
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rvalid_int = 1U;
            }
            if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_reg))) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_rready_next = 0U;
                if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_reg))) {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__state_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_arready_next 
                        = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arvalid_reg)));
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rvalid_int = 1U;
                } else {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__state_next = 1U;
                }
                if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_reg))) {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arvalid_next = 1U;
                }
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_next 
                    = ((0U != ((0x1fU >= ((IData)(0xaU) 
                                          - (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_size_reg)))
                                ? ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_next) 
                                   >> ((IData)(0xaU) 
                                       - (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_size_reg)))
                                : 0U)) ? 0xffU : (0xffU 
                                                  & (((7U 
                                                       >= 
                                                       ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_size_reg) 
                                                        - (IData)(2U)))
                                                       ? 
                                                      ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_next) 
                                                       << 
                                                       ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_size_reg) 
                                                        - (IData)(2U)))
                                                       : 0U) 
                                                     | (((7U 
                                                          >= 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_size_reg)))
                                                          ? 
                                                         (0xffU 
                                                          & (0xffU 
                                                             >> 
                                                             ((IData)(8U) 
                                                              - (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_size_reg))))
                                                          : 0U) 
                                                        >> 2U))));
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_arlen_next 
                    = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_next;
            } else {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__state_next = 1U;
            }
        } else {
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__state_next = 1U;
        }
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_start 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_start));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_start 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_start));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1 
        = (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_sew)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s4_mask 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_mask));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_mask 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_mask));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__whole_reg_ld 
        = ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mop_m)) 
           & ((8U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_m)) 
              & (7U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_m))));
    if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__cfg_en) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__new_vl 
            = (1U & (~ (IData)((3U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl_set)))));
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_h1136b675__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
           > (0x800U >> (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__out_ack_m 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rvalid_reg) 
                                        & (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rlast_reg)) 
                                       | (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bvalid_reg)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__out_ack_e 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_valid_out) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_resp_end)));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_rd[1U][4U] 
        = vlSelf->cva5_sim__DOT____Vcellout__x_rvv_proc_main__vexrv_data_out;
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done[1U] 
        = ((0x2fU & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
            [1U]) | (0x7fffff0U & (((IData)(vlSelf->cva5_sim__DOT__resp_valid) 
                                    << 4U) & ((IData)(vlSelf->cva5_sim__DOT__id_list_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out) 
                                              >> 5U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order.data_out)
                                       ? (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_load 
                                                  >> 1U))
                                       : ((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[2U] 
                                           << 0x1bU) 
                                          | (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[1U] 
                                             >> 5U))) 
                                     >> 2U))) << 0xdU) 
                   | (QData)((IData)(((0x1e00U & (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[1U] 
                                                  << 8U)) 
                                      | (((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order.data_out) 
                                          << 8U) | 
                                         ((((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order.data_out) 
                                            & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_load)))
                                            ? 3U : 0U) 
                                          << 2U)))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[1U] 
        = ((0xfffff800U & vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__l2_requests[1U]) 
           | (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order.data_out)
                                           ? (IData)(
                                                     (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_load 
                                                      >> 1U))
                                           : ((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[2U] 
                                               << 0x1bU) 
                                              | (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[1U] 
                                                 >> 5U))) 
                                         >> 2U))) << 0xdU) 
                       | (QData)((IData)(((0x1e00U 
                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_store[1U] 
                                              << 8U)) 
                                          | (((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order.data_out) 
                                              << 8U) 
                                             | ((((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order.data_out) 
                                                  & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_load)))
                                                  ? 3U
                                                  : 0U) 
                                                << 2U)))))) 
                      >> 0x20U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__line_complete 
        = ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__0__KET__.data_valid) 
           & ((3U == (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__word_count)) 
              | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_load)));
    __Vfunc_getTag__38__addr = (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_load 
                                        >> 1U));
    __Vfunc_getTag__38__Vfuncout = (0x3fffU & (__Vfunc_getTag__38__addr 
                                               >> 0xeU));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_tag_hit_way 
        = ((0x4000U | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__tag_banks__DOT__load_req_r) 
                        << 0xfU) | (IData)(__Vfunc_getTag__38__Vfuncout))) 
           == (0x8000U | vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__tag_banks__DOT__tag_line_b
               [0U]));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__output_array[0U] 
        = vlSymsp->TOP__cva5_sim__DOT__l2.rd_data;
    cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vlvbound_hd985a437__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__data_out
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__output_array[1U] 
        = cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vlvbound_hd985a437__0;
    cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vlvbound_hd985a437__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__data_out
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__output_array[2U] 
        = cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vlvbound_hd985a437__0;
    vlSelf->cva5_sim__DOT__cpu__DOT__interrupt_pending 
        = ((0U != vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mip_cause) 
           & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus 
              >> 3U));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__commit) 
           & (IData)(((0x300000000000ULL == (0x300000000000ULL 
                                             & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r)) 
                      & (3U != (3U & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                              >> 0x2eU)))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_code 
        = ((0x7fe0U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_code)) 
           | (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__.code));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_pending 
        = ((6U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_pending)) 
           | (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__.valid));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT____VdfgTmp_h338f46d6__0 
        = (0x1ffffffffULL & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__sub_2x_overflow)
                              ? (cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT____VdfgTmp_h590e39c9__0 
                                 + (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__shifted_divisor)))
                              : (cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT____VdfgTmp_h590e39c9__0 
                                 - (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__shifted_divisor)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__divisor_greater_than_dividend 
        = (1U & (((0x1fU & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.data_out[0U] 
                            >> 0xdU)) - (0x1fU & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.data_out[0U] 
                                                  >> 0x12U))) 
                 >> 5U));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__CLZ_delta 
        = (0x1fU & (((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.data_out[0U] 
                      << 0x13U) | (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.data_out[0U] 
                                   >> 0xdU)) - ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.data_out[0U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.data_out[0U] 
                                                   >> 0x12U))));
    if ((1U & ((IData)(vlSelf->rst) | (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                                       >> 0xfU)))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
            = (0xffffffbfU & vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U]);
    } else if (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_stage_ready) {
        vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
            = ((0xffffffbfU & vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U]) 
               | (0x40U & vlSelf->cva5_sim__DOT__cpu__DOT__decode[0U]));
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_aregion_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_aregion_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_aregion_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_aregion_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_match 
        = (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hb9a644b6__0) 
            << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hbb2ff3b7__0));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match 
        = (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hb9a644b6__0) 
            << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hbb2ff3b7__0));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_match 
        = (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hb9a644b6__0) 
            << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hbb2ff3b7__0));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match 
        = (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hb9a644b6__0) 
            << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hbb2ff3b7__0));
    vlSelf->cva5_sim__DOT__arb__DOT__aw_complete = 
        ((IData)(vlSymsp->TOP__cva5_sim__DOT__axi.awvalid) 
         & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg));
    vlSelf->cva5_sim__DOT__s_axi_awvalid_xbar = (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awvalid_reg) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__cva5_sim__DOT__axi.awvalid));
    vlSelf->cva5_sim__DOT__s_axi_wlast_xbar = (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wlast_reg) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__cva5_sim__DOT__axi.wvalid));
    vlSelf->cva5_sim__DOT__s_axi_wvalid_xbar = (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wvalid_reg) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__cva5_sim__DOT__axi.wvalid));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[0U] 
        = (IData)((0x1000000000000ULL | (((QData)((IData)(
                                                          (0xfU 
                                                           & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[1U] 
                                                              >> 4U)))) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             (7U 
                                                              & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[1U] 
                                                                 >> 1U)))) 
                                             << 0x29U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[0U])) 
                                                << 9U) 
                                               | (QData)((IData)(
                                                                 (0x1ffU 
                                                                  & (IData)(
                                                                            (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                                                                             >> 4U))))))))));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[1U] 
        = ((0xfffc0000U & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[1U] 
                           << 0xaU)) | (IData)(((0x1000000000000ULL 
                                                 | (((QData)((IData)(
                                                                     (0xfU 
                                                                      & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[1U] 
                                                                         >> 4U)))) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        (7U 
                                                                         & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[1U] 
                                                                            >> 1U)))) 
                                                        << 0x29U) 
                                                       | (((QData)((IData)(
                                                                           vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[0U])) 
                                                           << 9U) 
                                                          | (QData)((IData)(
                                                                            (0x1ffU 
                                                                             & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                                                                                >> 4U))))))))) 
                                                >> 0x20U)));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[2U] 
        = (0x3ffffU & ((0x3fc00U & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[2U] 
                                    << 0xaU)) | (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[1U] 
                                                 >> 0x16U)));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_data_out[0U] 
        = (IData)((0x2000000000000ULL | (((QData)((IData)(
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                                                                      >> 0xdU))))) 
                                          << 0x29U) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[0U])) 
                                             << 9U) 
                                            | (QData)((IData)(
                                                              (0x1ffU 
                                                               & (IData)(
                                                                         (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                                                                          >> 4U)))))))));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_data_out[1U] 
        = (((IData)((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                     >> 0x10U)) << 0x12U) | (IData)(
                                                    ((0x2000000000000ULL 
                                                      | (((QData)((IData)(
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                                                                                >> 0xdU))))) 
                                                          << 0x29U) 
                                                         | (((QData)((IData)(
                                                                             vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.data_out[0U])) 
                                                             << 9U) 
                                                            | (QData)((IData)(
                                                                              (0x1ffU 
                                                                               & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                                                                                >> 4U)))))))) 
                                                     >> 0x20U)));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_data_out[2U] 
        = ((IData)((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                    >> 0x10U)) >> 0xeU);
    vlSymsp->TOP__cva5_sim__DOT__l2.request_push = 
        ((0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests)) 
         & (~ ((((IData)(vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT__gen_width_3_plus__DOT__inflight_count) 
                 >> 4U) & (~ (IData)((0U != (0xfU & (IData)(vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT__gen_width_3_plus__DOT__inflight_count)))))) 
               | (((IData)(vlSelf->cva5_sim__DOT__arb__DOT__data_fifo_block__DOT__gen_width_3_plus__DOT__inflight_count) 
                   >> 4U) & (~ (IData)((0U != (0xfU 
                                               & (IData)(vlSelf->cva5_sim__DOT__arb__DOT__data_fifo_block__DOT__gen_width_3_plus__DOT__inflight_count)))))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[0U] = 0U;
    if ((1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[0U] = 0U;
    }
    if ((2U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[0U] = 1U;
    }
    if ((4U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[0U] = 2U;
    }
    if ((8U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[0U] = 3U;
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[1U] = 1U;
    if ((2U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[1U] = 1U;
    }
    if ((4U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[1U] = 2U;
    }
    if ((8U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[1U] = 3U;
    }
    if ((1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[1U] = 0U;
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[2U] = 2U;
    if ((4U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[2U] = 2U;
    }
    if ((8U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[2U] = 3U;
    }
    if ((1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[2U] = 0U;
    }
    if ((2U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[2U] = 1U;
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[3U] = 3U;
    if ((8U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[3U] = 3U;
    }
    if ((1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[3U] = 0U;
    }
    if ((2U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[3U] = 1U;
    }
    if ((4U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__requests))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes[3U] = 2U;
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data 
        = ((0U >= (1U & vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out))
            ? vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_data_array
           [(1U & vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out)]
            : 0U);
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__sq_block__retire_port_valid[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT____Vcellinp__lsq_block__retire_port_valid
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__sq_block__retire_port_valid[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT____Vcellinp__lsq_block__retire_port_valid
        [1U];
    __Vfunc_getTagLineAddr__3__addr = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__new_request_addr;
    __Vfunc_getTagLineAddr__3__Vfuncout = (0x1ffU & 
                                           (__Vfunc_getTagLineAddr__3__addr 
                                            >> 4U));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vcellinp__icache_tag_banks__stage1_line_addr 
        = __Vfunc_getTagLineAddr__3__Vfuncout;
    __Vfunc_getDataLineAddr__5__addr = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__new_request_addr;
    __Vfunc_getDataLineAddr__5__Vfuncout = (0x7ffU 
                                            & (__Vfunc_getDataLineAddr__5__addr 
                                               >> 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vcellinp__idata_bank_gen__BRA__0__KET____DOT__idata_bank__addr_a 
        = __Vfunc_getDataLineAddr__5__Vfuncout;
    __Vfunc_getDataLineAddr__7__addr = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__new_request_addr;
    __Vfunc_getDataLineAddr__7__Vfuncout = (0x7ffU 
                                            & (__Vfunc_getDataLineAddr__7__addr 
                                               >> 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vcellinp__idata_bank_gen__BRA__1__KET____DOT__idata_bank__addr_a 
        = __Vfunc_getDataLineAddr__7__Vfuncout;
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__hit_way 
        = ((2U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_matches))
            ? 1U : 0U);
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__hit_way 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__hit_way) 
                 | ((1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_matches))
                     ? 0U : 0U)));
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats[0U] 
        = vlSelf->cva5_sim__DOT__instruction_mix_stats
        [0U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats[1U] 
        = vlSelf->cva5_sim__DOT__instruction_mix_stats
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__sq_block__retire_ids[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT____Vcellinp__lsq_block__retire_ids
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__sq_block__retire_ids[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT____Vcellinp__lsq_block__retire_ids
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id
        [2U];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_trans_complete 
        = ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h066a711c__0) 
             & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid)) 
            << 1U) | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h07eba8a5__0) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_start 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_awvalid_mux) 
           & (IData)(cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h0013566c__0));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_reg;
    if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__s_axi_awready_reg) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_awvalid_mux;
    } else if (vlSelf->ddr_axi_awready) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_next = 0U;
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h066a711c__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h07eba8a5__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_bvalid_mux));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_bvalid_mux) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h066a711c__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h07eba8a5__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_reg;
    if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_bvalid_mux;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_bvalid_mux;
    } else {
        if (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_bready_reg) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_next = 0U;
        }
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid = 0U;
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_complete 
        = ((IData)(vlSelf->ddr_axi_bvalid) & (IData)(vlSelf->ddr_axi_bready));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_start 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_arvalid_mux) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h374469b8__0));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_reg;
    if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__s_axi_arready_reg) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_arvalid_mux;
    } else if (vlSelf->ddr_axi_arready) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_next = 0U;
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id 
        = ((0xcU >= ((IData)(7U) * (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)))
            ? (0x3fU & ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rid_reg) 
                          << 7U) | (IData)(vlSelf->ddr_axi_rid)) 
                        >> ((IData)(7U) * (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg))))
            : 0U);
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_limit 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_complete)) 
           & (4U <= (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_count_reg)));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__priority_vector 
        = ((6U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__priority_vector)) 
           | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__miss_data_valid));
    cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vlvbound_h3db38cc3__0 
        = (1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__tag_hit_way));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__priority_vector 
        = ((5U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__priority_vector)) 
           | ((IData)(cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vlvbound_h3db38cc3__0) 
              << 1U));
    cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vlvbound_h3db38cc3__0 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__tag_hit_way) 
                 >> 1U));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__priority_vector 
        = ((3U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__priority_vector)) 
           | ((IData)(cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT____Vlvbound_h3db38cc3__0) 
              << 2U));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit__BRA__0__KET__.data_valid 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__miss_data_valid) 
           | (0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__tag_hit_way)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_h9730cce6__0 
        = (0x20080200U | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                           << 0x1eU) | ((0x100000U 
                                         & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_sew) 
                                            << 0x13U)) 
                                        | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                            << 0xaU) 
                                           | (0x1feU 
                                              & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_sumOut) 
                                                 << 1U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT____VdfgTmp_hc99cfb62__0 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state) 
                 | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_tag_hit_way)));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit__BRA__0__KET__.data_valid 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_tag_hit_way) 
           | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__miss_data_valid));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__commit 
        = (((vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__gen_csrs__DOT__csr_unit_block__retire_ids
             [0U] == (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__2__KET__.id)) 
            & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__busy)) 
           & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__commit_in_progress)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__new_quotient_bits 
        = (3U & (~ (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT__sub_2x_overflow) 
                     << 1U) | (1U & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divider_block__DOT____VdfgTmp_h338f46d6__0 
                                             >> 0x20U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__instruction_table
        [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__decode_id];
    vlSelf->cva5_sim__DOT__cpu__DOT__gc[0U] = (IData)(
                                                      (((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_pc_override)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_pc))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc[1U] = ((0xfffffffeU 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__gc[1U]) 
                                               | (IData)(
                                                         ((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_pc_override)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_pc))) 
                                                          >> 0x20U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] = ((0x7fbffU 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U]) 
                                               | (0x7ffffU 
                                                  & ((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_pending))) 
                                                     << 0xaU)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] = ((0x7fdffU 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U]) 
                                               | (0x7ffffU 
                                                  & (((vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__gc_unit_block__retire_ids_next
                                                       [0U] 
                                                       == 
                                                       ((8U 
                                                         >= 
                                                         (0xfU 
                                                          & ((IData)(3U) 
                                                             * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit))))
                                                         ? 
                                                        (7U 
                                                         & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_id) 
                                                            >> 
                                                            (0xfU 
                                                             & ((IData)(3U) 
                                                                * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit)))))
                                                         : 0U)) 
                                                      & ((2U 
                                                          >= (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit)) 
                                                         & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_pending) 
                                                            >> (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit)))) 
                                                     << 9U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc[1U] = ((0xfU 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__gc[1U]) 
                                               | (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__pc_table
                                                  [
                                                  vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__id_block__retire_ids_next
                                                  [0U]] 
                                                  << 4U));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc[2U] = ((0xfffffff0U 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__gc[2U]) 
                                               | (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__pc_table
                                                  [
                                                  vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__id_block__retire_ids_next
                                                  [0U]] 
                                                  >> 0x1cU));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] = ((0x7fe0fU 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U]) 
                                               | (0x7ffffU 
                                                  & (((0xeU 
                                                       >= 
                                                       (0xfU 
                                                        & ((IData)(5U) 
                                                           * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit))))
                                                       ? 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_code) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(5U) 
                                                              * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit)))))
                                                       : 0U) 
                                                     << 4U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc[2U] = ((0xfU 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__gc[2U]) 
                                               | (((0x5fU 
                                                    >= 
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit) 
                                                        << 5U)))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit) 
                                                          << 5U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_tval[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit) 
                                                            << 5U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit) 
                                                           << 5U))))) 
                                                    | (vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_tval[
                                                       (3U 
                                                        & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit) 
                                                           << 5U))))
                                                    : 0U) 
                                                  << 4U));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] = ((0x7fff0U 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U]) 
                                               | (0x7ffffU 
                                                  & (((0x5fU 
                                                       >= 
                                                       (0x7fU 
                                                        & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit) 
                                                           << 5U)))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit) 
                                                             << 5U)))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_tval[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit) 
                                                               << 5U))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit) 
                                                              << 5U))))) 
                                                       | (vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gen_gc_m_mode__DOT__exception_tval[
                                                          (3U 
                                                           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__current_exception_unit) 
                                                              << 5U))))
                                                       : 0U) 
                                                     >> 0x1cU)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__match = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__trans_start = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_avalid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_avalid_reg) 
           & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__int_axi_arready)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_decerr_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_decerr_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_wc_valid_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_reg));
    if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_reg))) {
        if ((1U & ((IData)(vlSelf->cva5_sim__DOT__s_axi_arvalid_xbar) 
                   & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg))))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__i = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__j = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__match = 0U;
            if ((8U == ((IData)(vlSelf->cva5_sim__DOT__s_axi_araddr_xbar) 
                        >> 0x1cU))) {
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_aregion_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__match) {
                if ((1U & ((~ ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid)) 
                               & (0x10U <= (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__trans_count_reg)))) 
                           & ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hb9a644b6__0) 
                                & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_m_reg
                                   [1U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next))) 
                               | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hbb2ff3b7__0) 
                                  & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_m_reg
                                     [0U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next)))) 
                              | ((~ (IData)((3U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_active)))) 
                                 & (~ (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_match))))))))) {
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_avalid_next = 1U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_decerr_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_wc_valid_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__trans_start = 1U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 1U;
                } else {
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 0U;
                }
            } else {
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_avalid_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_decerr_next = 1U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_wc_valid_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_next = 1U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 1U;
            }
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 0U;
        }
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
    } else if ((1U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_reg))) {
        if ((1U & ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_avalid_next)) 
                   & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_next))))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_next = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 0U;
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 1U;
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_reg) 
           & (~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__int_axi_arready) 
                 >> 1U)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_reg));
    if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_reg))) {
        if ((IData)((((IData)(vlSelf->cva5_sim__DOT__s_axi_arvalid_xbar) 
                      >> 1U) & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_reg))))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__i = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__j = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 0U;
            if ((8U == ((IData)((vlSelf->cva5_sim__DOT__s_axi_araddr_xbar 
                                 >> 0x20U)) >> 0x1cU))) {
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_aregion_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match) {
                if ((1U & ((~ ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid)) 
                               & (0x10U <= (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_count_reg)))) 
                           & ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hb9a644b6__0) 
                                & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_m_reg
                                   [1U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_next))) 
                               | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hbb2ff3b7__0) 
                                  & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_m_reg
                                     [0U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_next)))) 
                              | ((~ (IData)((3U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_active)))) 
                                 & (~ (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match))))))))) {
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next = 1U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start = 1U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 1U;
                } else {
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
                }
            } else {
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next = 1U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next = 1U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 1U;
            }
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
        }
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
    } else if ((1U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_reg))) {
        if ((1U & ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next)) 
                   & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next))))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 1U;
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_aregion_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_aregion_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_aregion_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_aregion_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_reg;
    __Vfunc_getTagLineAddr__35__addr = ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_data_out[2U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_data_out[1U] 
                                         >> 0x12U));
    __Vfunc_getTagLineAddr__35__Vfuncout = (0x3ffU 
                                            & (__Vfunc_getTagLineAddr__35__addr 
                                               >> 4U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__tag_banks__DOT__portb_addr 
        = __Vfunc_getTagLineAddr__35__Vfuncout;
    __Vfunc_getDataLineAddr__31__addr = ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_data_out[2U] 
                                          << 0xeU) 
                                         | (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_data_out[1U] 
                                            >> 0x12U));
    __Vfunc_getDataLineAddr__31__Vfuncout = (0xfffU 
                                             & (__Vfunc_getDataLineAddr__31__addr 
                                                >> 2U));
    __Vfunc_getTagLineAddr__30__addr = (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_load 
                                                >> 1U));
    __Vfunc_getTagLineAddr__30__Vfuncout = (0x3ffU 
                                            & (__Vfunc_getTagLineAddr__30__addr 
                                               >> 4U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__data_read_addr 
        = ((8U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state))
            ? (((IData)(__Vfunc_getTagLineAddr__30__Vfuncout) 
                << 2U) | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__word_count))
            : (IData)(__Vfunc_getDataLineAddr__31__Vfuncout));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__muxes
        [vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__state];
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__aligned_load_data 
        = ((0xffff0000U & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data) 
           | ((0xff00U & (((0x8000U & vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out)
                            ? (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data 
                               >> 0x18U) : (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data 
                                            >> 8U)) 
                          << 8U)) | (0xffU & (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data 
                                              >> (0x18U 
                                                  & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out 
                                                     >> 0xbU))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sign_bit_data[0U] 
        = (1U & (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data 
                 >> 7U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sign_bit_data[1U] 
        = (1U & (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data 
                 >> 0xfU));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sign_bit_data[2U] 
        = (1U & (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data 
                 >> 0x17U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sign_bit_data[3U] 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data 
           >> 0x1fU);
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__bp.is_branch 
        = ((0x2bU >= ((IData)(4U) + (0x3fU & ((IData)(0x16U) 
                                              * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__hit_way))))) 
           & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__if_entry 
                      >> ((IData)(4U) + (0x3fU & ((IData)(0x16U) 
                                                  * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__hit_way)))))));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__bp.is_return 
        = ((0x2bU >= ((IData)(3U) + (0x3fU & ((IData)(0x16U) 
                                              * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__hit_way))))) 
           & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__if_entry 
                      >> ((IData)(3U) + (0x3fU & ((IData)(0x16U) 
                                                  * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__hit_way)))))));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[6U] = 0U;
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[5U] = 0U;
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[4U] = 0U;
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[3U] = 0U;
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[2U] = 0U;
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[1U] = 0U;
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[0U] = 0U;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [0U] + (1U & vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                         [0U])));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[0U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [1U] + (1U & (vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                               [0U] >> 1U))));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[1U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [2U] + (1U & (vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                               [0U] >> 2U))));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[2U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [3U] + (1U & (vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                               [0U] >> 3U))));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[3U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [4U] + (1U & (vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                               [0U] >> 4U))));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[4U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [5U] + (1U & (vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                               [0U] >> 5U))));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[5U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [6U] + (1U & (vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                               [0U] >> 6U))));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[6U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [0U] + (1U & vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                         [1U])));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[0U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [1U] + (1U & (vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                               [1U] >> 1U))));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[1U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [2U] + (1U & (vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                               [1U] >> 2U))));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[2U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [3U] + (1U & (vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                               [1U] >> 3U))));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[3U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [4U] + (1U & (vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                               [1U] >> 4U))));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[4U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [5U] + (1U & (vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                               [1U] >> 5U))));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[5U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0 
        = (3U & (vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc
                 [6U] + (1U & (vlSelf->cva5_sim__DOT____Vcellinp__stats_block__instruction_mix_stats
                               [1U] >> 6U))));
    vlSelf->cva5_sim__DOT__stats_block__DOT__instruction_mix_inc[6U] 
        = cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__store_released_index[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_ids
        [vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__sq_block__retire_ids
        [0U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__store_released[0U] 
        = ((8U | ((0xbU >= (0xfU & ((IData)(3U) * vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__store_released_index
                                    [0U]))) ? (7U & 
                                               ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__ids) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__store_released_index
                                                    [0U]))))
                   : 0U)) == ((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__sq_block__retire_port_valid
                               [0U] << 3U) | vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__sq_block__retire_ids
                              [0U]));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__newly_released 
        = (0xfU & (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__store_released
                   [0U] << vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__store_released_index
                   [0U]));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__store_released_index[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_ids
        [vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__sq_block__retire_ids
        [1U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__store_released[1U] 
        = ((8U | ((0xbU >= (0xfU & ((IData)(3U) * vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__store_released_index
                                    [1U]))) ? (7U & 
                                               ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__ids) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__store_released_index
                                                    [1U]))))
                   : 0U)) == ((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__sq_block__retire_port_valid
                               [1U] << 3U) | vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__sq_block__retire_ids
                              [1U]));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__newly_released 
        = (0xfU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__newly_released) 
                   | (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__store_released
                      [1U] << vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__store_released_index
                      [1U])));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_trans_complete 
        = ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h066a711c__0) 
             & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid)) 
            << 1U) | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h07eba8a5__0) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_trans_complete 
        = ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h066a711c__0) 
             & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid)) 
            << 1U) | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h07eba8a5__0) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_wstrb_mux 
        = (0xfU & ((((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wstrb_reg) 
                     << 4U) | (0xfU & (IData)((vlSelf->cva5_sim__DOT__arb__DOT__request_fifo_block__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                                               >> 9U)))) 
                   >> (7U & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_reg) 
                             << 2U))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_wdata_mux 
        = (IData)(((((QData)((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wdata_reg)) 
                     << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__arb__DOT__data_fifo_block__DOT__gen_width_3_plus__DOT__write_port__DOT__ram
                                                 [vlSelf->cva5_sim__DOT__arb__DOT__data_fifo_block__DOT__gen_width_3_plus__DOT__read_index]))) 
                   >> (0x3fU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_reg) 
                                << 5U))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_wready 
        = (3U & (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_wready_reg) 
                  & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_valid_reg)) 
                 << (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_reg)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_wlast_mux 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__s_axi_wlast_xbar) 
                 >> (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_reg)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_wvalid_mux 
        = ((((2U & (((((IData)(vlSelf->cva5_sim__DOT__s_axi_wvalid_xbar) 
                       >> 1U) & ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_drop_reg)) 
                                 & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_select_valid_reg))) 
                     << (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_select_reg)) 
                    << 1U)) | (1U & (((IData)(vlSelf->cva5_sim__DOT__s_axi_wvalid_xbar) 
                                      & ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_drop_reg)) 
                                         & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_select_valid_reg))) 
                                     << (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_select_reg)))) 
            >> (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_reg)) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_valid_reg));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h066a711c__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h07eba8a5__0 
        = ((0U != vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id)));
    vlSelf->__VdfgTmp_h6c65d37d__0 = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h274b4b5e__0) 
                                      & ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg)) 
                                         & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_limit))));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__unit_data_array[0U] 
        = ((2U >= (3U & (0x1212U >> (0xfU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__priority_vector) 
                                             << 1U)))))
            ? vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__output_array
           [(3U & (0x1212U >> (0xfU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__priority_vector) 
                                       << 1U))))] : 0U);
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__internal_fetch_complete 
        = (IData)((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__attributes_fifo__DOT__gen_width_two__DOT__inflight_count) 
                    >> 1U) & ((4U & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out))
                               ? (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit__BRA__0__KET__.data_valid)
                               : (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__valid_fetch_result)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT____VdfgTmp_hb5b8037a__0 
        = ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit__BRA__0__KET__.data_valid) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__valid_fetch_result));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_w_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_w_reg));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_start 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_start) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____Vcellinp__red__DOT__vRed0__in_valid)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_start 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_start));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[0U] 
        = (IData)((((QData)((IData)((0x20080200U | 
                                     (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                       << 0x1eU) | 
                                      ((0x100000U & 
                                        ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_sew) 
                                         << 0x13U)) 
                                       | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                          << 0xaU)))))) 
                    << 0x20U) | (QData)((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_h9730cce6__0 
                                                 + 
                                                 (0x1feU 
                                                  & ((IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_sumOut 
                                                              >> 8U)) 
                                                     << 1U)))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[1U] 
        = (IData)(((((QData)((IData)((0x20080200U | 
                                      (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                        << 0x1eU) | 
                                       ((0x100000U 
                                         & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_sew) 
                                            << 0x13U)) 
                                        | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                           << 0xaU)))))) 
                     << 0x20U) | (QData)((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_h9730cce6__0 
                                                  + 
                                                  (0x1feU 
                                                   & ((IData)(
                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_sumOut 
                                                               >> 8U)) 
                                                      << 1U)))))) 
                   >> 0x20U));
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state = 0U;
        vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__illegal_instruction_pattern_r = 0U;
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__privilege_level = 3U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_buf_l__DOT__r_count = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s5_off = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s3_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s3_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s3_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s3_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_vec1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_a0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_b0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_a1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m1_b1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_a1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_b1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_b0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_a0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sumOut = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sew = 0U;
    } else {
        vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state 
            = vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state;
        if (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_stage_ready) {
            vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__illegal_instruction_pattern_r 
                = vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__illegal_instruction_pattern;
        }
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__privilege_level 
            = vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__next_privilege_level;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_buf_l__DOT__r_count 
            = (0x7ffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_buf_l__DOT__r_count_d) 
                         + ((~ (1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_buf_l__DOT__count)))))) 
                            & ((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_buf_l__DOT__count)) 
                               & (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_wready_reg)))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s5_off 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_off;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s3_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s2_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s3_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s2_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s3_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s2_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s3_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s2_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_vec1 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec1;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_a1 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__a0;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_b1 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b2;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_b0 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b3;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m2_a0 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__a1;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sumOut 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellinp__genblk1__DOT__lop32__in_en)
                ? ((4U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_opSel))
                    ? (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__minMax_result))
                    : (QData)((IData)(((0xff000000U 
                                        & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[1U] 
                                            << 0x19U) 
                                           | (0x1000000U 
                                              & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[0U] 
                                                 >> 7U)))) 
                                       | ((0xff0000U 
                                           & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[0U] 
                                              >> 5U)) 
                                          | ((0xff00U 
                                              & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[0U] 
                                                 >> 3U)) 
                                             | (0xffU 
                                                & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[0U] 
                                                   >> 1U))))))))
                : (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sew 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_sew;
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1 
        = (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sew)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_mask 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_mask));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bvalid_reg 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bvalid_next;
    if (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__store_axi_r_int_to_output) {
        vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rlast_reg 
            = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rlast_int;
    } else if (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__store_axi_r_temp_to_output) {
        vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rlast_reg 
            = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__temp_s_axi_rlast_reg;
    }
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rvalid_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rvalid_next));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_resp_end 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s5_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_valid_out 
        = ((~ (IData)(vlSelf->rst)) & ((((((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_outValid) 
                                             | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_outValid)) 
                                            | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outValid)) 
                                           | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_outValid)) 
                                          | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMerge_outValid)) 
                                         | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_outValid)) 
                                        | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRed_outValid)) 
                                       | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vID_outValid)));
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s4_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__out_data_e = 0U;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_sew 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_sew;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_be 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_be;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s4_be 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_be;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__out_data_e 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_sca_out)
                ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_out)
                : 0U);
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_sca_out 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_outValid) 
                                       | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMove_outSca)));
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s4_out_off = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_off = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s2_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s2_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s2_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s2_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_be = 0U;
        vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bvalid_reg = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_out = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_out_off = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_off = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s1_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s1_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s1_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s1_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMerge_outVec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_outVec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vID_outVec = 0ULL;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__idx_out = 0ULL;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__found = 0ULL;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__count = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_outVec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_outValid = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRed_outValid = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRed_outVec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_outVec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_outVec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outVec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_out_off = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_off = 0U;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s4_out_off 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_out_off;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_off 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_off;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s2_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s1_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s2_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s1_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s2_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s1_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s2_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s1_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec1 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_sew 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____Vcellinp__red__DOT__vRed0__in_valid)
                ? (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_sew 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_sew;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_be 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_be;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_be 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_be;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_out 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outNarrow)
                ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__turn)
                    ? ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_sew))
                        ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_sew))
                            ? (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outVec 
                               << 0x20U) : ((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_32)) 
                                            << 0x20U))
                        : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_sew))
                            ? ((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_16)) 
                               << 0x20U) : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_vec0))
                    : ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_sew))
                        ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_sew))
                            ? (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outVec))
                            : (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_32)))
                        : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_sew))
                            ? (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_16))
                            : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_vec0)))
                : ((((((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_outVec 
                        | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_outVec) 
                       | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMerge_outVec) 
                      | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_outVec) 
                     | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRed_outVec) 
                    | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vID_outVec) 
                   | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_outVec 
                      | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outVec)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_out_off 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_out_off;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_off 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_off;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s1_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s1_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s1_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s1_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s0_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_sew 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_sew;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_be 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_be;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_be 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_be;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMerge_outVec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s4_out_vec;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_outVec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s4_out_vec;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vID_outVec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s4_out_vec;
        if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s4_end) {
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__idx_out = 0ULL;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__found = 0ULL;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_outVec 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__count;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__count = 0ULL;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_outValid = 1U;
        } else {
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__idx_out 
                = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_found)
                    ? ((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx)) 
                       + (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_base)))
                    : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__idx_out);
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__found 
                = ((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_found)) 
                   | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__found);
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_outVec = 0ULL;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__count 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__w_count;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_outValid = 0U;
        }
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_outVec 
            = ((2U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s4_end) 
                        << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s4_opSel)))
                ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__idx_out
                : ((3U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s4_end) 
                            << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s4_opSel)))
                    ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__count
                    : 0ULL));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRed_outValid 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_end;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRed_outVec 
            = ((3U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_end) 
                        << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_lop_sum)))
                ? (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop64__out_vec))
                : ((2U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_end) 
                            << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_lop_sum)))
                    ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_sumOut
                    : 0ULL));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_outVec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_out_vec;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_outVec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s4_result;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outVec 
            = (((((((((0U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                               << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew))) 
                      | (1U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                                 << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew)))) 
                     | (2U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                                << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew)))) 
                    | (3U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                               << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew)))) 
                   | (4U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                              << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew)))) 
                  | (5U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                             << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew)))) 
                 | (6U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                            << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew)))) 
                | (7U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                           << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew))))
                ? ((0U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                            << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew)))
                    ? (((QData)((IData)(((0xff000000U 
                                          & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b7 
                                             << 0x10U)) 
                                         | ((0xff0000U 
                                             & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b6 
                                                << 8U)) 
                                            | ((0xff00U 
                                                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b5) 
                                               | (0xffU 
                                                  & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b4 
                                                     >> 8U))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xff000000U 
                                                      & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b3 
                                                         << 0x10U)) 
                                                     | ((0xff0000U 
                                                         & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b2 
                                                            << 8U)) 
                                                        | ((0xff00U 
                                                            & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b1) 
                                                           | (0xffU 
                                                              & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b0 
                                                                 >> 8U))))))))
                    : ((1U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                                << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew)))
                        ? (((QData)((IData)((((IData)(
                                                      (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h3 
                                                       >> 0x10U)) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & (IData)(
                                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h2 
                                                           >> 0x10U)))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (((IData)(
                                                                  (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h1 
                                                                   >> 0x10U)) 
                                                          << 0x10U) 
                                                         | (0xffffU 
                                                            & (IData)(
                                                                      (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h0 
                                                                       >> 0x10U)))))))
                        : ((2U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                                    << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew)))
                            ? (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w1[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w0[1U])))
                            : ((3U == (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                                        << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew)))
                                ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sr_64)
                                    ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_or_top)
                                        ? (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_top_bits)) 
                                            << 0x27U) 
                                           | (0x7fffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_d0[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_d0[1U])))))
                                        : (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_d0[1U] 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_d0[1U]))))
                                    : 0ULL) : ((4U 
                                                == 
                                                (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b7 
                                                                      << 0x18U) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b6 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b5 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b4)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b3 
                                                                       << 0x18U) 
                                                                      | ((0xff0000U 
                                                                          & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b2 
                                                                             << 0x10U)) 
                                                                         | ((0xff00U 
                                                                             & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b1 
                                                                                << 8U)) 
                                                                            | (0xffU 
                                                                               & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b0)))))))
                                                : (
                                                   (5U 
                                                    == 
                                                    (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h3) 
                                                                       << 0x10U) 
                                                                      | (0xffffU 
                                                                         & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h2))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h1) 
                                                                        << 0x10U) 
                                                                       | (0xffffU 
                                                                          & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h0))))))
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb) 
                                                       << 2U) 
                                                      | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew)))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w1[0U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w0[0U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w0[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w0[0U]))))))))))
                : 0ULL);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_out_off 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_out_off;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_off 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_off;
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done[1U] 
        = ((0x3eU & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
            [1U]) | ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit__BRA__0__KET__.data_valid) 
                     | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_exception_complete)));
    if ((4U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
            = vlSelf->cva5_sim__DOT__cpu__DOT__csr_inputs;
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_link 
        = ((1U == (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                            >> 0xfU))) | (5U == (0x1fU 
                                                 & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                    >> 0xfU))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rd_link 
        = ((1U == (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                            >> 7U))) | (5U == (0x1fU 
                                               & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                  >> 7U))));
    __Vtableidx1 = ((0xe0U & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                              >> 7U)) | (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                  >> 2U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_op 
        = Vcva5_sim__ConstPool__TABLE_h9c6cefcc_0[__Vtableidx1];
    vlSelf->cva5_sim__DOT__cpu__DOT__decode[0U] = (
                                                   ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__pc_table
                                                                              [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__decode_id])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)))) 
                                                    << 7U) 
                                                   | ((0x40U 
                                                       & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__fetched_count_neg) 
                                                          << 3U)) 
                                                      | vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__fetch_metadata_table
                                                      [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__decode_id]));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode[1U] = (
                                                   ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__pc_table
                                                                              [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__decode_id])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)))) 
                                                    >> 0x19U) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__pc_table
                                                                                [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__decode_id])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction))) 
                                                               >> 0x20U)) 
                                                      << 7U));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode[2U] = (
                                                   ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__decode_id) 
                                                    << 7U) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__pc_table
                                                                                [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__decode_id])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction))) 
                                                               >> 0x20U)) 
                                                      >> 0x19U));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__gen_decode_exceptions__DOT__illegal_op_check__DOT__base_legal 
        = ((0x63U == (0x707fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
           | ((0x1063U == (0x707fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
              | ((0x4063U == (0x707fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                 | ((0x5063U == (0x707fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                    | ((0x6063U == (0x707fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                       | ((0x7063U == (0x707fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                          | ((0x67U == (0x707fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                             | ((0x6fU == (0x7fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                | ((0x37U == (0x7fU 
                                              & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                   | ((0x17U == (0x7fU 
                                                 & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                      | ((0x13U == 
                                          (0x707fU 
                                           & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                         | ((0x1013U 
                                             == (0xfc00707fU 
                                                 & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                            | ((0x2013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                               | ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                  | ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                     | ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                        | ((0x40005013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                           | ((0x6013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                              | ((0x7013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                 | ((0x33U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                    | ((0x40000033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                       | ((0x1033U 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                          | ((0x2033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                             | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | ((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | ((0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                | (0xfU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)))))))))))))))))))))))))))))))))))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__gen_decode_exceptions__DOT__illegal_op_check__DOT__csr_addr_machine 
        = ((0xf11U == (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                       >> 0x14U)) | ((0xf12U == (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                 >> 0x14U)) 
                                     | ((0xf13U == 
                                         (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                          >> 0x14U)) 
                                        | ((0xf14U 
                                            == (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                >> 0x14U)) 
                                           | ((0x300U 
                                               == (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                   >> 0x14U)) 
                                              | ((0x301U 
                                                  == 
                                                  (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                   >> 0x14U)) 
                                                 | ((0x302U 
                                                     == 
                                                     (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                      >> 0x14U)) 
                                                    | ((0x303U 
                                                        == 
                                                        (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                         >> 0x14U)) 
                                                       | ((0x304U 
                                                           == 
                                                           (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                            >> 0x14U)) 
                                                          | ((0x305U 
                                                              == 
                                                              (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                               >> 0x14U)) 
                                                             | ((0x306U 
                                                                 == 
                                                                 (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                  >> 0x14U)) 
                                                                | ((0x340U 
                                                                    == 
                                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                     >> 0x14U)) 
                                                                   | ((0x341U 
                                                                       == 
                                                                       (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                        >> 0x14U)) 
                                                                      | ((0x342U 
                                                                          == 
                                                                          (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                           >> 0x14U)) 
                                                                         | ((0x343U 
                                                                             == 
                                                                             (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                              >> 0x14U)) 
                                                                            | ((0x344U 
                                                                                == 
                                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                                >> 0x14U)) 
                                                                               | ((0xb00U 
                                                                                == 
                                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                                >> 0x14U)) 
                                                                                | ((0xb02U 
                                                                                == 
                                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                                >> 0x14U)) 
                                                                                | ((0xb80U 
                                                                                == 
                                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                                >> 0x14U)) 
                                                                                | ((0xb82U 
                                                                                == 
                                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                                >> 0x14U)) 
                                                                                | ((0xbc0U 
                                                                                == 
                                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                                >> 0x14U)) 
                                                                                | (0xbc1U 
                                                                                == 
                                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                                >> 0x14U)))))))))))))))))))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_fence 
        = (IData)((0xcU == (0x107cU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ifence 
        = (IData)((0x100cU == (0x107cU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_h5e30b651__0 
        = ((0x1bU == (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                               >> 2U))) | (0x19U == 
                                           (0x1fU & 
                                            (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                             >> 2U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__mult_div_op 
        = (IData)((0x2000030U == (0x200007cU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_h5a8231db__0 
        = ((1U == (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                            >> 2U))) | (9U == (0x1fU 
                                               & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                  >> 2U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_vfu 
        = ((((0x15U == (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                 >> 2U))) | (1U == 
                                             (0x1fU 
                                              & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                 >> 2U)))) 
            | (9U == (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                               >> 2U)))) & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mcfu_selector 
                                            >> 0x1fU));
    cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_heb16dbf4__0 
        = (IData)(((0x70U == (0x7cU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                   & (0U != (7U & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                   >> 0xcU)))));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.phys_rd_addr 
        = ((0U != (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                            >> 7U))) ? (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__renamer_block__DOT__free_list.data_out)
            : 0U);
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_write_index_mux[0U] 
        = (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                    >> 7U));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs_addr[0U] 
        = (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                    >> 0xfU));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs_addr[1U] 
        = (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                    >> 0x14U));
    vlSelf->cva5_sim__DOT__cpu__DOT__mul_inputs[0U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                      [0U])) << 0x20U) 
                     | (QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                       [1U])))) << 2U) 
           | (3U & vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U]));
    vlSelf->cva5_sim__DOT__cpu__DOT__mul_inputs[1U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                      [0U])) << 0x20U) 
                     | (QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                       [1U])))) >> 0x1eU) 
           | ((IData)(((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                         [0U])) << 0x20U) 
                        | (QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                          [1U]))) >> 0x20U)) 
              << 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__mul_inputs[2U] 
        = ((IData)(((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                      [0U])) << 0x20U) 
                     | (QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                       [1U]))) >> 0x20U)) 
           >> 0x1eU);
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__6__KET__.possible_issue 
        = (1U & ((vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                  >> 6U) & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage) 
                            >> 6U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__issue_fifo_inputs[0U] 
        = ((0xfffffe00U & vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__issue_fifo_inputs[0U]) 
           | ((0x1c0U & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                         >> 3U)) | (0x3fU & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                             >> 0xeU))));
    vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[0U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                      [0U])) << 0x20U) 
                     | (QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                       [1U])))) << 3U) 
           | ((6U & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U] 
                     << 1U)) | ((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__gen_decode_div_inputs__DOT__prev_div_result_valid) 
                                  << 0xcU) | ((vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__gen_decode_div_inputs__DOT__prev_div_rs_addr
                                               [0U] 
                                               << 6U) 
                                              | vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__gen_decode_div_inputs__DOT__prev_div_rs_addr
                                              [1U])) 
                                == (0x1000U | ((vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_phys_rs_addr
                                                [0U] 
                                                << 6U) 
                                               | vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_phys_rs_addr
                                               [1U])))));
    vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[1U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                      [0U])) << 0x20U) 
                     | (QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                       [1U])))) >> 0x1dU) 
           | ((IData)(((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                         [0U])) << 0x20U) 
                        | (QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                          [1U]))) >> 0x20U)) 
              << 3U));
    vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[2U] 
        = ((IData)(((((QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                      [0U])) << 0x20U) 
                     | (QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                       [1U]))) >> 0x20U)) 
           >> 0x1dU);
    vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
        = ((0xc0000fffU & vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U]) 
           | (0xfffff000U & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__ls_offset) 
                              << 0x12U) | ((0x38000U 
                                            & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U] 
                                               << 0xfU)) 
                                           | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_load_r) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_store_r) 
                                                  << 0xdU) 
                                                 | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_fence_r) 
                                                    << 0xcU)))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellinp__id_waiting_for_writeback_toggle_mem_set__toggle_addr[0U] 
        = (7U & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                 >> 9U));
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__toggle_addr[1U] 
        = (0x3fU & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                    >> 0xeU));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_instruction_id[0U] 
        = ((0x3fff8U & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_instruction_id
            [0U]) | (7U & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                           >> 9U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_phys_addr[0U] 
        = ((0xfffffffc0ULL & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_phys_addr
            [0U]) | (IData)((IData)((0x3fU & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                              >> 0xeU)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
        = ((0xfffffffeU & vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U]) 
           | (1U & (~ (vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U] 
                       >> 2U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
        = ((0xfffffffdU & vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U]) 
           | (2U & ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                     [0U] >> 0x1eU) & vlSelf->cva5_sim__DOT__cpu__DOT__issue[2U])));
    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U] 
        = ((0x1fffU & vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U]) 
           | ((IData)((((QData)((IData)((1U & ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                [0U] 
                                                >> 0x1fU) 
                                               & (~ 
                                                  vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U]))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                    [0U])))) 
              << 0xdU));
    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[4U] 
        = (0x3fffU & (((IData)((((QData)((IData)((1U 
                                                  & ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                      [0U] 
                                                      >> 0x1fU) 
                                                     & (~ 
                                                        vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                             [0U])))) 
                       >> 0x13U) | ((IData)(((((QData)((IData)(
                                                               (1U 
                                                                & ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                    [0U] 
                                                                    >> 0x1fU) 
                                                                   & (~ 
                                                                      vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U]))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                [0U]))) 
                                             >> 0x20U)) 
                                    << 0xdU)));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_imm_type)
            ? VL_EXTENDS_II(32,12, (0xfffU & ((vlSelf->cva5_sim__DOT__cpu__DOT__issue[2U] 
                                               << 9U) 
                                              | (vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U] 
                                                 >> 0x17U))))
            : vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
           [1U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done[0U] 
        = ((0x3eU & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
            [0U]) | (1U & ((vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                            >> 6U) & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage))));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_write_index_mux[2U] 
        = (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                    >> 0x14U));
    __Vtemp_h90cc79a0__0[3U] = (((IData)((((QData)((IData)(
                                                           ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                             [1U] 
                                                             >> 0x1fU) 
                                                            & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__br_use_signed)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                            [1U])))) 
                                 >> 2U) | (((IData)(
                                                    (((QData)((IData)(
                                                                      ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                        [0U] 
                                                                        >> 0x1fU) 
                                                                       & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__br_use_signed)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                       [0U])))) 
                                            << 0x1fU) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                           [1U] 
                                                                           >> 0x1fU) 
                                                                          & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__br_use_signed)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                          [1U]))) 
                                                       >> 0x20U)) 
                                              << 0x1eU)));
    __Vtemp_h90cc79a0__0[4U] = (((0x3fffffffU & ((IData)(
                                                         (((QData)((IData)(
                                                                           ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                             [0U] 
                                                                             >> 0x1fU) 
                                                                            & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__br_use_signed)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                            [0U])))) 
                                                 >> 1U)) 
                                 | ((IData)(((((QData)((IData)(
                                                               ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                 [1U] 
                                                                 >> 0x1fU) 
                                                                & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__br_use_signed)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                [1U]))) 
                                             >> 0x20U)) 
                                    >> 2U)) | ((0x40000000U 
                                                & ((IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                               [0U] 
                                                                               >> 0x1fU) 
                                                                              & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__br_use_signed)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                              [0U])))) 
                                                   >> 1U)) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                               [0U] 
                                                                               >> 0x1fU) 
                                                                              & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__br_use_signed)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                              [0U]))) 
                                                           >> 0x20U)) 
                                                  << 0x1fU)));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[0U] 
        = (IData)((((QData)((IData)((7U & vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U]))) 
                    << 0x3bU) | (((QData)((IData)((
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__issue[3U] 
                                                    << 0x1dU) 
                                                   | (vlSelf->cva5_sim__DOT__cpu__DOT__issue[2U] 
                                                      >> 3U)))) 
                                  << 0x1bU) | (QData)((IData)(
                                                              ((0x4000000U 
                                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                                   << 0x14U)) 
                                                               | ((0x2000000U 
                                                                   & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                                      >> 3U)) 
                                                                  | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__jalr) 
                                                                      << 0x18U) 
                                                                     | ((0x800000U 
                                                                         & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                                            >> 4U)) 
                                                                        | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_call) 
                                                                            << 0x16U) 
                                                                           | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_return) 
                                                                               << 0x15U) 
                                                                              | vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__pc_offset_r)))))))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[1U] 
        = ((vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__constant_alu 
            << 0x1eU) | (IData)(((((QData)((IData)(
                                                   (7U 
                                                    & vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U]))) 
                                   << 0x3bU) | (((QData)((IData)(
                                                                 ((vlSelf->cva5_sim__DOT__cpu__DOT__issue[3U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->cva5_sim__DOT__cpu__DOT__issue[2U] 
                                                                     >> 3U)))) 
                                                 << 0x1bU) 
                                                | (QData)((IData)(
                                                                  ((0x4000000U 
                                                                    & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                                       << 0x14U)) 
                                                                   | ((0x2000000U 
                                                                       & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                                          >> 3U)) 
                                                                      | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__jalr) 
                                                                          << 0x18U) 
                                                                         | ((0x800000U 
                                                                             & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                                                >> 4U)) 
                                                                            | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_call) 
                                                                                << 0x16U) 
                                                                               | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_return) 
                                                                                << 0x15U) 
                                                                                | vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__pc_offset_r)))))))))) 
                                 >> 0x20U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[2U] 
        = (((IData)((((QData)((IData)(((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                        [1U] >> 0x1fU) 
                                       & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__br_use_signed)))) 
                      << 0x20U) | (QData)((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                  [1U])))) 
            << 0x1eU) | (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__constant_alu 
                         >> 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
        = __Vtemp_h90cc79a0__0[3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
        = __Vtemp_h90cc79a0__0[4U];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__match = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__trans_start = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_avalid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_avalid_reg) 
           & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_awready)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_decerr_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_decerr_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_wc_valid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_wc_valid_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_select_valid_reg));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_reg));
    if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_reg))) {
        if ((1U & ((IData)(vlSelf->cva5_sim__DOT__s_axi_awvalid_xbar) 
                   & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg))))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__i = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__j = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__match = 0U;
            if ((8U == ((IData)(vlSelf->cva5_sim__DOT__s_axi_awaddr_xbar) 
                        >> 0x1cU))) {
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_aregion_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__match) {
                if ((1U & ((~ ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid)) 
                               & (0x10U <= (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__trans_count_reg)))) 
                           & ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hb9a644b6__0) 
                                & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_m_reg
                                   [1U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next))) 
                               | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hbb2ff3b7__0) 
                                  & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_m_reg
                                     [0U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next)))) 
                              | ((~ (IData)((3U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_active)))) 
                                 & (~ (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_match))))))))) {
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_avalid_next = 1U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_decerr_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_wc_valid_next = 1U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__trans_start = 1U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 1U;
                } else {
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 0U;
                }
            } else {
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_avalid_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_decerr_next = 1U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_wc_valid_next = 1U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_next = 1U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 1U;
            }
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 0U;
        }
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
    } else if ((1U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_reg))) {
        if ((1U & (((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_avalid_next)) 
                    & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_wc_valid_next))) 
                   & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_next))))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_next = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 0U;
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next = 1U;
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_reg) 
           & (~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_awready) 
                 >> 1U)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_reg;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_select_valid_reg));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_reg));
    if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_reg))) {
        if ((IData)((((IData)(vlSelf->cva5_sim__DOT__s_axi_awvalid_xbar) 
                      >> 1U) & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_reg))))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__i = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__j = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 0U;
            if ((8U == ((IData)((vlSelf->cva5_sim__DOT__s_axi_awaddr_xbar 
                                 >> 0x20U)) >> 0x1cU))) {
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_aregion_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match) {
                if ((1U & ((~ ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid)) 
                               & (0x10U <= (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_count_reg)))) 
                           & ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hb9a644b6__0) 
                                & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_m_reg
                                   [1U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_next))) 
                               | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hbb2ff3b7__0) 
                                  & (vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_m_reg
                                     [0U] == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_next)))) 
                              | ((~ (IData)((3U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_active)))) 
                                 & (~ (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match))))))))) {
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next = 1U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next = 1U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start = 1U;
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 1U;
                } else {
                    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
                }
            } else {
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next = 1U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next = 1U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next = 1U;
                vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 1U;
            }
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
        }
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
    } else if ((1U == (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_reg))) {
        if ((1U & (((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next)) 
                    & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next))) 
                   & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next))))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next = 1U;
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 1U;
        }
    }
    if (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_valid) {
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__shared_inputs[0U] 
            = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_data_out[0U];
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__shared_inputs[1U] 
            = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_data_out[1U];
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__shared_inputs[2U] 
            = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_data_out[2U];
    } else {
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__shared_inputs[0U] 
            = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[0U];
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__shared_inputs[1U] 
            = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[1U];
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__shared_inputs[2U] 
            = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[2U];
    }
    __Vfunc_address_range_check__29__addr = ((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__shared_inputs[2U] 
                                              << 0xeU) 
                                             | (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__shared_inputs[1U] 
                                                >> 0x12U));
    __Vfunc_address_range_check__29__Vfuncout = (0x11U 
                                                 == 
                                                 (__Vfunc_address_range_check__29__addr 
                                                  >> 0x1bU));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__uncacheable_store 
        = __Vfunc_address_range_check__29__Vfuncout;
    __Vfunc_address_range_check__28__addr = ((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__shared_inputs[2U] 
                                              << 0xeU) 
                                             | (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__shared_inputs[1U] 
                                                >> 0x12U));
    __Vfunc_address_range_check__28__Vfuncout = (0x11U 
                                                 == 
                                                 (__Vfunc_address_range_check__28__addr 
                                                  >> 0x1bU));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__uncacheable_load 
        = __Vfunc_address_range_check__28__Vfuncout;
    __Vfunc_address_range_check__27__addr = ((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__shared_inputs[2U] 
                                              << 0xeU) 
                                             | (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__shared_inputs[1U] 
                                                >> 0x12U));
    __Vfunc_address_range_check__27__Vfuncout = (8U 
                                                 == 
                                                 (__Vfunc_address_range_check__27__addr 
                                                  >> 0x1cU));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_address_match 
        = __Vfunc_address_range_check__27__Vfuncout;
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__acks 
        = (0xfU & ((IData)(vlSymsp->TOP__cva5_sim__DOT__l2.request_push) 
                   << (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sign_bit 
        = ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out 
            >> 0x10U) & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sign_bit_data
           [(3U & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out 
                   >> 0xcU))]);
    if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__state_reg))) {
        if ((1U == (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__state_reg))) {
            if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_rready_reg) 
                 & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg))) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rid_int 
                    = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__id_reg;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_ruser_int 
                    = vlSelf->cva5_sim__DOT__m_axi_ruser_adapt;
            }
        }
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_next 
        = (((IData)((0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_matches))) 
            << 4U) | ((((0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_matches)) 
                        & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__bp.is_branch)) 
                       << 3U) | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit_address_match) 
                                  << 2U) | ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__itlb.is_fault) 
                                            << 1U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__pc_mux[2U] 
        = ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__bp.is_return)
            ? vlSelf->cva5_sim__DOT__cpu__DOT__ras_block__DOT__lut_ram
           [vlSelf->cva5_sim__DOT__cpu__DOT__ras_block__DOT__read_index]
            : (IData)(((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk2__DOT__gen_branch_table_banks__BRA__1__KET____DOT__addr_table__read_data)) 
                         << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk2__DOT__gen_branch_table_banks__BRA__0__KET____DOT__addr_table__read_data))) 
                       >> (0x3fU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__hit_way) 
                                    << 5U)))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____Vcellout__s_ifaces__BRA__1__KET____DOT__reg_inst__s_axi_wready 
        = (IData)((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_wready) 
                    >> 1U) | (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_drop_reg)));
    __Vtableidx5 = (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_wvalid_mux) 
                     << 4U) | (((IData)(vlSelf->ddr_axi_wready) 
                                << 3U) | (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_wready_reg) 
                                           << 2U) | 
                                          (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wvalid_reg) 
                                            << 1U) 
                                           | (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg)))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_next 
        = Vcva5_sim__ConstPool__TABLE_hefc0ef20_0[__Vtableidx5];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wvalid_next 
        = Vcva5_sim__ConstPool__TABLE_haec470c6_0[__Vtableidx5];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_output 
        = Vcva5_sim__ConstPool__TABLE_h49faefbe_0[__Vtableidx5];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_temp 
        = Vcva5_sim__ConstPool__TABLE_h9070065d_0[__Vtableidx5];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_temp_to_output 
        = Vcva5_sim__ConstPool__TABLE_h454cc0b0_0[__Vtableidx5];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_valid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_valid_reg) 
           & (~ (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_wvalid_mux) 
                  & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_wready_reg)) 
                 & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_wlast_mux))));
    if ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_reg) 
          & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_valid_reg))) 
         & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_new_reg))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_new_next = 0U;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_valid_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_reg;
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_trans_complete 
        = ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h066a711c__0) 
             & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid)) 
            << 1U) | ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h07eba8a5__0) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->__VdfgTmp_h6c65d37d__0)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded 
        = ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h10656024__0) 
             & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg) 
                    >> 1U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_limit)))) 
            << 1U) | (IData)(vlSelf->__VdfgTmp_h6c65d37d__0));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_instruction 
        = ((0U >= (1U & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out)))
            ? vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__unit_data_array
           [(1U & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out))]
            : 0U);
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_complete 
        = ((~ (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__flush_count)))) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__internal_fetch_complete));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits8 
        = ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[2U] 
                     >> 8U)) | ((0x40U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[2U] 
                                          << 1U)) | 
                                ((0x20U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[1U] 
                                           >> 0x16U)) 
                                 | ((0x10U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[1U] 
                                              >> 0xdU)) 
                                    | ((8U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[1U] 
                                              >> 4U)) 
                                       | ((4U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[0U] 
                                                 >> 0x1bU)) 
                                          | ((2U & 
                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[0U] 
                                               >> 0x12U)) 
                                             | (1U 
                                                & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[0U] 
                                                   >> 9U)))))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc48585f5__0 
        = (IData)(((0U == (0xff80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[2U])) 
                   & (0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[2U] 
                                        << 3U) | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[1U] 
                                                  >> 0x1dU))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hf73ed51b__0 
        = (IData)((0U == (0xffbfe00U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[1U])));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc1104ac1__0 
        = (IData)(((0U == (0x3fe00000U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[0U])) 
                   & (0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[1U] 
                                        << 1U) | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[0U] 
                                                  >> 0x1fU))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0 
        = (IData)((0U == (0xffbfeU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum8__DOT__result[0U])));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_h9730cce6__0 
        = (0x20080200U | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                           << 0x1eU) | ((0x100000U 
                                         & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sew) 
                                            << 0x13U)) 
                                        | ((0x7f800U 
                                            & ((IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sumOut 
                                                        >> 8U)) 
                                               << 0xbU)) 
                                           | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                               << 0xaU) 
                                              | (0x1feU 
                                                 & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sumOut) 
                                                    << 1U)))))));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bvalid_next = 0U;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__turn 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__turn;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rdata_mux 
        = (IData)(((0x3fU >= ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg) 
                              << 5U)) ? ((QData)((IData)(vlSelf->ddr_axi_rdata)) 
                                         >> ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg) 
                                             << 5U))
                    : 0ULL));
    __Vtableidx6 = (8U | (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rvalid_mux) 
                           << 4U) | (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg) 
                                      << 2U) | (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rvalid_reg) 
                                                 << 1U) 
                                                | (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg)))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_next 
        = Vcva5_sim__ConstPool__TABLE_hefc0ef20_0[__Vtableidx6];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rvalid_next 
        = Vcva5_sim__ConstPool__TABLE_haec470c6_0[__Vtableidx6];
    if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_reg) 
         & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_select_valid_reg)))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_select_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_reg;
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_output 
        = Vcva5_sim__ConstPool__TABLE_h49faefbe_0[__Vtableidx6];
    if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_wc_valid_reg) 
         & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_select_valid_reg)))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_select_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_reg;
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_temp 
        = Vcva5_sim__ConstPool__TABLE_h9070065d_0[__Vtableidx6];
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_temp_to_output 
        = Vcva5_sim__ConstPool__TABLE_h454cc0b0_0[__Vtableidx6];
    vlSelf->cva5_sim__DOT__cpu__DOT__csr_inputs = (
                                                   (0xffffffffULL 
                                                    & vlSelf->cva5_sim__DOT__cpu__DOT__csr_inputs) 
                                                   | ((QData)((IData)(
                                                                      ((0xfff0U 
                                                                        & ((vlSelf->cva5_sim__DOT__cpu__DOT__issue[2U] 
                                                                            << 0xdU) 
                                                                           | (0x1ff0U 
                                                                              & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U] 
                                                                                >> 0x13U)))) 
                                                                       | ((0xcU 
                                                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U] 
                                                                              << 2U)) 
                                                                          | (3U 
                                                                             & (~ 
                                                                                (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x1f00000U 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U])) 
                                                                                & (1U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U])))) 
                                                                                << 1U) 
                                                                                | ((3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U])) 
                                                                                & (0U 
                                                                                == 
                                                                                vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_rs_addr
                                                                                [0U]))))))))) 
                                                      << 0x20U));
    vlSelf->cva5_sim__DOT__cpu__DOT__csr_inputs = (
                                                   (0xffff00000000ULL 
                                                    & vlSelf->cva5_sim__DOT__cpu__DOT__csr_inputs) 
                                                   | (IData)((IData)(
                                                                     ((4U 
                                                                       & vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U])
                                                                       ? 
                                                                      vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_rs_addr
                                                                      [0U]
                                                                       : 
                                                                      vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                                                      [0U]))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__sys_op_match = 0U;
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__sys_op_match 
        = ((0U == (0xfffU & ((vlSelf->cva5_sim__DOT__cpu__DOT__decode[1U] 
                              << 5U) | (vlSelf->cva5_sim__DOT__cpu__DOT__decode[0U] 
                                        >> 0x1bU))))
            ? (1U | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__sys_op_match))
            : ((1U == (0xfffU & ((vlSelf->cva5_sim__DOT__cpu__DOT__decode[1U] 
                                  << 5U) | (vlSelf->cva5_sim__DOT__cpu__DOT__decode[0U] 
                                            >> 0x1bU))))
                ? (2U | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__sys_op_match))
                : ((0x102U == (0xfffU & ((vlSelf->cva5_sim__DOT__cpu__DOT__decode[1U] 
                                          << 5U) | 
                                         (vlSelf->cva5_sim__DOT__cpu__DOT__decode[0U] 
                                          >> 0x1bU))))
                    ? (0xf7U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__sys_op_match))
                    : ((0x302U == (0xfffU & ((vlSelf->cva5_sim__DOT__cpu__DOT__decode[1U] 
                                              << 5U) 
                                             | (vlSelf->cva5_sim__DOT__cpu__DOT__decode[0U] 
                                                >> 0x1bU))))
                        ? (0x10U | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__sys_op_match))
                        : ((0x120U == (0xfe0U & ((vlSelf->cva5_sim__DOT__cpu__DOT__decode[1U] 
                                                  << 5U) 
                                                 | (vlSelf->cva5_sim__DOT__cpu__DOT__decode[0U] 
                                                    >> 0x1bU))))
                            ? (0xdfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__sys_op_match))
                            : 0U)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__illegal_instruction_pattern 
        = (1U & (~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__gen_decode_exceptions__DOT__illegal_op_check__DOT__base_legal) 
                    | (((0xbU == (0x7fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                        | ((0x2bU == (0x7fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                           | ((0x5bU == (0x7fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                              | (0x7bU == (0x7fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction))))) 
                       | (((0x57U == (0x7fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                           | ((7U == (0x705fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                              | ((0x5007U == (0x705fU 
                                              & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                 | (0x6007U == (0x605fU 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction))))) 
                          | ((0x800U == (0xf00U & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                   >> 0x14U))) 
                             | ((((0x1073U == (0x707fU 
                                               & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                  | ((0x2073U == (0x707fU 
                                                  & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                     | ((0x3073U == 
                                         (0x707fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                        | ((0x5073U 
                                            == (0x707fU 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                           | ((0x6073U 
                                               == (0x707fU 
                                                   & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                              | (0x7073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction))))))) 
                                 & (((1U == (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                             >> 0x14U)) 
                                     | ((2U == (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                >> 0x14U)) 
                                        | ((3U == (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                   >> 0x14U)) 
                                           | ((0xc00U 
                                               == (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                   >> 0x14U)) 
                                              | ((0xc01U 
                                                  == 
                                                  (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                   >> 0x14U)) 
                                                 | ((0xc02U 
                                                     == 
                                                     (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                      >> 0x14U)) 
                                                    | ((0xc80U 
                                                        == 
                                                        (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                         >> 0x14U)) 
                                                       | ((0xc81U 
                                                           == 
                                                           (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                            >> 0x14U)) 
                                                          | ((0xc82U 
                                                              == 
                                                              (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                               >> 0x14U)) 
                                                             | ((0x800U 
                                                                 == 
                                                                 (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                  >> 0x14U)) 
                                                                | (0x801U 
                                                                   == 
                                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                    >> 0x14U)))))))))))) 
                                    | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__gen_decode_exceptions__DOT__illegal_op_check__DOT__csr_addr_machine))) 
                                | (((0x2000033U == 
                                     (0xfe00707fU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                    | ((0x2001033U 
                                        == (0xfe00707fU 
                                            & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                       | ((0x2002033U 
                                           == (0xfe00707fU 
                                               & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                          | (0x2003033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction))))) 
                                   | (((0x2004033U 
                                        == (0xfe00707fU 
                                            & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                       | ((0x2005033U 
                                           == (0xfe00707fU 
                                               & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                          | ((0x2006033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                             | (0x2007033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction))))) 
                                      | ((0x100fU == 
                                          (0x707fU 
                                           & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                         | ((0x30200073U 
                                             == vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction) 
                                            | ((0x73U 
                                                == vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction) 
                                               | (0x100073U 
                                                  == vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)))))))))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__vfu_uses_rs[0U] 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_vfu) 
           & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_h5a8231db__0) 
              | (IData)(((0x54U == (0x7cU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                         & ((4U == (7U & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                          >> 0xcU))) 
                            | ((5U == (7U & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                             >> 0xcU))) 
                               | ((6U == (7U & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                >> 0xcU))) 
                                  | (IData)(((0x7000U 
                                              == (0x7000U 
                                                  & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                             & ((~ 
                                                 (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                  >> 0x1fU)) 
                                                | (0x40U 
                                                   == 
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                    >> 0x19U))))))))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__vfu_uses_rs[1U] 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_vfu) 
           & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_h5a8231db__0) 
               & (0x8000000U == (0xc000000U & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction))) 
              | (IData)((0x80007054U == (0xfe00707cU 
                                         & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_cfu_csr 
        = ((IData)(cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_heb16dbf4__0) 
           & (0x80000000U == (0xf0000000U & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)));
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__toggle_addr[0U] 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.phys_rd_addr;
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.rs_addr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs_addr
        [0U];
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.rs_addr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs_addr
        [1U];
    __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__51__b 
        = (1U & ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[0U] 
                     >> 1U)) & (vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[1U] 
                                >> 2U)));
    __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__51__a 
        = ((vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[1U] 
            << 0x1dU) | (vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[0U] 
                         >> 3U));
    __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__51__Vfuncout 
        = (((- (IData)((IData)(__Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__51__b))) 
            ^ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__51__a) 
           + (IData)(__Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__51__b));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
        = __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__51__Vfuncout;
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_remainder 
        = ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[0U] 
               >> 1U)) & (vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[2U] 
                          >> 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[2U] 
        = ((0xfffU & vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[2U]) 
           | ((IData)((((QData)((IData)(((vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data 
                                          >> 0x1fU) 
                                         & (~ vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U])))) 
                        << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data)))) 
              << 0xcU));
    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U] 
        = ((0xffffe000U & vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U]) 
           | (((IData)((((QData)((IData)(((vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data 
                                           >> 0x1fU) 
                                          & (~ vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U])))) 
                         << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data)))) 
               >> 0x14U) | ((IData)(((((QData)((IData)(
                                                       ((vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data 
                                                         >> 0x1fU) 
                                                        & (~ 
                                                           vlSelf->cva5_sim__DOT__cpu__DOT__issue[1U])))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data))) 
                                     >> 0x20U)) << 0xcU)));
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet[0U] 
        = ((0x3feffffffffULL & vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
            [0U]) | ((QData)((IData)((0U != vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                      [0U]))) << 0x20U));
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet[1U] 
        = ((0x3feffffffffULL & vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
            [1U]) | ((QData)((IData)((0U != vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                      [1U]))) << 0x20U));
    __Vtemp_hadc405ac__0[0U] = 0x43042044U;
    __Vtemp_hadc405ac__0[1U] = 0x20440420U;
    __Vtemp_hadc405ac__0[2U] = 0x4204304U;
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel[1U] 
        = ((0x5fU >= (0x7fU & ((IData)(3U) * (0x1fU 
                                              & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                              [1U]))))
            ? (7U & (((0U == (0x1fU & ((IData)(3U) 
                                       * (0x1fU & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                          [1U])))) ? 0U
                       : (__Vtemp_hadc405ac__0[(((IData)(2U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (0x1fU 
                                                      & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                                      [1U])))) 
                                                >> 5U)] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(3U) 
                                                   * 
                                                   (0x1fU 
                                                    & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                                    [1U])))))) 
                     | (__Vtemp_hadc405ac__0[(3U & 
                                              (((IData)(3U) 
                                                * (0x1fU 
                                                   & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                                   [1U])) 
                                               >> 5U))] 
                        >> (0x1fU & ((IData)(3U) * 
                                     (0x1fU & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                      [1U])))))) : 0U);
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0x7fffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (0x8000U & ((0x8000U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                      >> 0x10U) & (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 0x1eU)) 
                                                   << 0xfU))) 
                         | ((0x8000U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 0x10U)) 
                            | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                   >> 0x1eU)) << 0xfU)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xbfffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (0x4000U & (((0x1c000U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xfU) & 
                                        ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                             >> 0x1cU)) 
                                         << 0xeU)) 
                                       & ((0xc000U 
                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                              >> 0x10U)) 
                                          | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                 >> 0x1dU)) 
                                             << 0xeU)))) 
                          | (0xc000U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0x10U) 
                                        & ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                               >> 0x1dU)) 
                                           << 0xeU)))) 
                         | (((0x1c000U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 0xfU)) 
                             | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                    >> 0x1cU)) << 0xeU)) 
                            & ((0xc000U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                           >> 0x10U)) 
                               | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                      >> 0x1dU)) << 0xeU))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xdfffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (0x2000U & (((0x3e000U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xeU) & 
                                        ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                             >> 0x1aU)) 
                                         << 0xdU)) 
                                       & ((0x1e000U 
                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                              >> 0xfU)) 
                                          | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                 >> 0x1bU)) 
                                             << 0xdU)))) 
                          | (0x1e000U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 0xfU) 
                                         & ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                >> 0x1bU)) 
                                            << 0xdU)))) 
                         | (((0x3e000U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 0xeU)) 
                             | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                    >> 0x1aU)) << 0xdU)) 
                            & ((0x1e000U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                            >> 0xfU)) 
                               | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                      >> 0x1bU)) << 0xdU))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xefffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (0x1000U & (((0x7f000U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xdU) & 
                                        ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                             >> 0x18U)) 
                                         << 0xcU)) 
                                       & ((0x3f000U 
                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                              >> 0xeU)) 
                                          | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                 >> 0x19U)) 
                                             << 0xcU)))) 
                          | (0x3f000U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 0xeU) 
                                         & ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                >> 0x19U)) 
                                            << 0xcU)))) 
                         | (((0x7f000U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 0xdU)) 
                             | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                    >> 0x18U)) << 0xcU)) 
                            & ((0x3f000U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                            >> 0xeU)) 
                               | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                      >> 0x19U)) << 0xcU))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xf7ffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (0x800U & (((0xff800U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 0xcU) & 
                                       ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                            >> 0x16U)) 
                                        << 0xbU)) & 
                                      ((0x7f800U & 
                                        (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xdU)) 
                                       | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                              >> 0x17U)) 
                                          << 0xbU)))) 
                         | (0x7f800U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xdU) & 
                                        ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                             >> 0x17U)) 
                                         << 0xbU)))) 
                        | (((0xff800U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xcU)) 
                            | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                   >> 0x16U)) << 0xbU)) 
                           & ((0x7f800U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                           >> 0xdU)) 
                              | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                     >> 0x17U)) << 0xbU))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xfbffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (0x400U & (((0x1ffc00U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xbU) & 
                                        ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                             >> 0x14U)) 
                                         << 0xaU)) 
                                       & ((0xffc00U 
                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                              >> 0xcU)) 
                                          | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                 >> 0x15U)) 
                                             << 0xaU)))) 
                         | (0xffc00U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xcU) & 
                                        ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                             >> 0x15U)) 
                                         << 0xaU)))) 
                        | (((0x1ffc00U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 0xbU)) 
                            | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                   >> 0x14U)) << 0xaU)) 
                           & ((0xffc00U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                           >> 0xcU)) 
                              | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                     >> 0x15U)) << 0xaU))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xfdffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (0x200U & (((0x3ffe00U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xaU) & 
                                        ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                             >> 0x12U)) 
                                         << 9U)) & 
                                       ((0x1ffe00U 
                                         & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                            >> 0xbU)) 
                                        | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                               >> 0x13U)) 
                                           << 9U)))) 
                         | (0x1ffe00U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 0xbU) 
                                         & ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                >> 0x13U)) 
                                            << 9U)))) 
                        | (((0x3ffe00U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 0xaU)) 
                            | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                   >> 0x12U)) << 9U)) 
                           & ((0x1ffe00U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                            >> 0xbU)) 
                              | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                     >> 0x13U)) << 9U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xfeffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (0x100U & (((0x7fff00U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 9U) & (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 0x10U)) 
                                                   << 8U)) 
                                       & ((0x3fff00U 
                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                              >> 0xaU)) 
                                          | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                 >> 0x11U)) 
                                             << 8U)))) 
                         | (0x3fff00U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 0xaU) 
                                         & ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                >> 0x11U)) 
                                            << 8U)))) 
                        | (((0x7fff00U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 9U)) | 
                            ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                 >> 0x10U)) << 8U)) 
                           & ((0x3fff00U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                            >> 0xaU)) 
                              | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                     >> 0x11U)) << 8U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xff7fU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (0x80U & (((0xffff80U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 8U) & ((~ 
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                    >> 0xeU)) 
                                                  << 7U)) 
                                      & ((0x7fff80U 
                                          & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                             >> 9U)) 
                                         | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                >> 0xfU)) 
                                            << 7U)))) 
                        | (0x7fff80U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 9U) & (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 0xfU)) 
                                                   << 7U)))) 
                       | (((0xffff80U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 8U)) | 
                           ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                >> 0xeU)) << 7U)) & 
                          ((0x7fff80U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 9U)) | 
                           ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                >> 0xfU)) << 7U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xffbfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (0x40U & (((0x1ffffc0U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 7U) & (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 0xcU)) 
                                                   << 6U)) 
                                       & ((0xffffc0U 
                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                              >> 8U)) 
                                          | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                 >> 0xdU)) 
                                             << 6U)))) 
                        | (0xffffc0U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 8U) & (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 0xdU)) 
                                                   << 6U)))) 
                       | (((0x1ffffc0U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 7U)) | 
                           ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                >> 0xcU)) << 6U)) & 
                          ((0xffffc0U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 8U)) | 
                           ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                >> 0xdU)) << 6U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xffdfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (0x20U & (((0x3ffffe0U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 6U) & (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 0xaU)) 
                                                   << 5U)) 
                                       & ((0x1ffffe0U 
                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                              >> 7U)) 
                                          | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                 >> 0xbU)) 
                                             << 5U)))) 
                        | (0x1ffffe0U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 7U) & 
                                         ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                              >> 0xbU)) 
                                          << 5U)))) 
                       | (((0x3ffffe0U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 6U)) | 
                           ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                >> 0xaU)) << 5U)) & 
                          ((0x1ffffe0U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 7U)) | 
                           ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                >> 0xbU)) << 5U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xffefU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (0x10U & (((0x7fffff0U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 5U) & (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 8U)) 
                                                   << 4U)) 
                                       & ((0x3fffff0U 
                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                              >> 6U)) 
                                          | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                 >> 9U)) 
                                             << 4U)))) 
                        | (0x3fffff0U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 6U) & 
                                         ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                              >> 9U)) 
                                          << 4U)))) 
                       | (((0x7fffff0U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 5U)) | 
                           ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                >> 8U)) << 4U)) & (
                                                   (0x3fffff0U 
                                                    & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                                       >> 6U)) 
                                                   | ((~ 
                                                       (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                        >> 9U)) 
                                                      << 4U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xfff7U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (8U & (((0xffffff8U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                      >> 4U) & ((~ 
                                                 (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                  >> 6U)) 
                                                << 3U)) 
                                    & ((0x7fffff8U 
                                        & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                           >> 5U)) 
                                       | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                              >> 7U)) 
                                          << 3U)))) 
                     | (0x7fffff8U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                       >> 5U) & ((~ 
                                                  (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                   >> 7U)) 
                                                 << 3U)))) 
                    | (((0xffffff8U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                       >> 4U)) | ((~ 
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                    >> 6U)) 
                                                  << 3U)) 
                       & ((0x7fffff8U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 5U)) | 
                          ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                               >> 7U)) << 3U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xfffbU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (4U & (((0x1ffffffcU & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                       >> 3U) & ((~ 
                                                  (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                   >> 4U)) 
                                                 << 2U)) 
                                     & ((0xffffffcU 
                                         & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                            >> 4U)) 
                                        | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                               >> 5U)) 
                                           << 2U)))) 
                     | (0xffffffcU & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                       >> 4U) & ((~ 
                                                  (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                   >> 5U)) 
                                                 << 2U)))) 
                    | (((0x1ffffffcU & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 3U)) | (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 4U)) 
                                                   << 2U)) 
                       & ((0xffffffcU & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 4U)) | 
                          ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                               >> 5U)) << 2U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xfffdU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (2U & (((0x3ffffffeU & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                       >> 2U) & ((~ 
                                                  (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                   >> 2U)) 
                                                 << 1U)) 
                                     & ((0x1ffffffeU 
                                         & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                            >> 3U)) 
                                        | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                               >> 3U)) 
                                           << 1U)))) 
                     | (0x1ffffffeU & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 3U) & ((~ 
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                    >> 3U)) 
                                                  << 1U)))) 
                    | (((0x3ffffffeU & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 2U)) | (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 2U)) 
                                                   << 1U)) 
                       & ((0x1ffffffeU & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 3U)) | 
                          ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                               >> 3U)) << 1U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((0xfffeU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)) 
           | (1U & (((((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                        >> 1U) & (~ vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U])) 
                      & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                          >> 2U) | (~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                       >> 1U)))) | 
                     ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                       >> 2U) & (~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                    >> 1U)))) | (((
                                                   vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                                   >> 1U) 
                                                  | (~ 
                                                     vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U])) 
                                                 & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                                     >> 2U) 
                                                    | (~ 
                                                       (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                        >> 1U)))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0x7fffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (0x8000U & (((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                              >> 0x1eU)) << 0xfU) & 
                         (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                          >> 0x10U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xbfffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (0x4000U & ((0x1c000U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 0xfU) & 
                                       ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                            >> 0x1cU)) 
                                        << 0xeU)) & 
                                      ((0xc000U & (
                                                   vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                                   >> 0x10U)) 
                                       | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                              >> 0x1dU)) 
                                          << 0xeU)))) 
                         | (0xc000U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 0x10U) & 
                                       ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                            >> 0x1dU)) 
                                        << 0xeU))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xdfffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (0x2000U & ((0x3e000U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 0xeU) & 
                                       ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                            >> 0x1aU)) 
                                        << 0xdU)) & 
                                      ((0x1e000U & 
                                        (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xfU)) 
                                       | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                              >> 0x1bU)) 
                                          << 0xdU)))) 
                         | (0x1e000U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xfU) & 
                                        ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                             >> 0x1bU)) 
                                         << 0xdU))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xefffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (0x1000U & ((0x7f000U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 0xdU) & 
                                       ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                            >> 0x18U)) 
                                        << 0xcU)) & 
                                      ((0x3f000U & 
                                        (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xeU)) 
                                       | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                              >> 0x19U)) 
                                          << 0xcU)))) 
                         | (0x3f000U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xeU) & 
                                        ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                             >> 0x19U)) 
                                         << 0xcU))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xf7ffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (0x800U & ((0xff800U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                       >> 0xcU) & (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 0x16U)) 
                                                   << 0xbU)) 
                                     & ((0x7f800U & 
                                         (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                          >> 0xdU)) 
                                        | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                               >> 0x17U)) 
                                           << 0xbU)))) 
                        | (0x7f800U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 0xdU) & 
                                       ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                            >> 0x17U)) 
                                        << 0xbU))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xfbffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (0x400U & ((0x1ffc00U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 0xbU) & 
                                       ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                            >> 0x14U)) 
                                        << 0xaU)) & 
                                      ((0xffc00U & 
                                        (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xcU)) 
                                       | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                              >> 0x15U)) 
                                          << 0xaU)))) 
                        | (0xffc00U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 0xcU) & 
                                       ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                            >> 0x15U)) 
                                        << 0xaU))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xfdffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (0x200U & ((0x3ffe00U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 0xaU) & 
                                       ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                            >> 0x12U)) 
                                        << 9U)) & (
                                                   (0x1ffe00U 
                                                    & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                                       >> 0xbU)) 
                                                   | ((~ 
                                                       (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                        >> 0x13U)) 
                                                      << 9U)))) 
                        | (0x1ffe00U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xbU) & 
                                        ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                             >> 0x13U)) 
                                         << 9U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xfeffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (0x100U & ((0x7fff00U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 9U) & ((~ 
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                    >> 0x10U)) 
                                                  << 8U)) 
                                      & ((0x3fff00U 
                                          & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                             >> 0xaU)) 
                                         | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                >> 0x11U)) 
                                            << 8U)))) 
                        | (0x3fff00U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 0xaU) & 
                                        ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                             >> 0x11U)) 
                                         << 8U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xff7fU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (0x80U & ((0xffff80U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                       >> 8U) & ((~ 
                                                  (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                   >> 0xeU)) 
                                                 << 7U)) 
                                     & ((0x7fff80U 
                                         & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                            >> 9U)) 
                                        | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                               >> 0xfU)) 
                                           << 7U)))) 
                       | (0x7fff80U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 9U) & ((~ 
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                    >> 0xfU)) 
                                                  << 7U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xffbfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (0x40U & ((0x1ffffc0U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 7U) & ((~ 
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                    >> 0xcU)) 
                                                  << 6U)) 
                                      & ((0xffffc0U 
                                          & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                             >> 8U)) 
                                         | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                >> 0xdU)) 
                                            << 6U)))) 
                       | (0xffffc0U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 8U) & ((~ 
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                    >> 0xdU)) 
                                                  << 6U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xffdfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (0x20U & ((0x3ffffe0U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 6U) & ((~ 
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                    >> 0xaU)) 
                                                  << 5U)) 
                                      & ((0x1ffffe0U 
                                          & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                             >> 7U)) 
                                         | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                >> 0xbU)) 
                                            << 5U)))) 
                       | (0x1ffffe0U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 7U) & (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 0xbU)) 
                                                   << 5U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xffefU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (0x10U & ((0x7fffff0U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 5U) & ((~ 
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                    >> 8U)) 
                                                  << 4U)) 
                                      & ((0x3fffff0U 
                                          & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                             >> 6U)) 
                                         | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                >> 9U)) 
                                            << 4U)))) 
                       | (0x3fffff0U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                         >> 6U) & (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 9U)) 
                                                   << 4U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xfff7U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (8U & ((0xffffff8U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                     >> 4U) & ((~ (
                                                   vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                   >> 6U)) 
                                               << 3U)) 
                                   & ((0x7fffff8U & 
                                       (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                        >> 5U)) | (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 7U)) 
                                                   << 3U)))) 
                    | (0x7fffff8U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                      >> 5U) & ((~ 
                                                 (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                  >> 7U)) 
                                                << 3U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xfffbU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (4U & ((0x1ffffffcU & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                      >> 3U) & ((~ 
                                                 (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                  >> 4U)) 
                                                << 2U)) 
                                    & ((0xffffffcU 
                                        & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                           >> 4U)) 
                                       | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                              >> 5U)) 
                                          << 2U)))) 
                    | (0xffffffcU & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                      >> 4U) & ((~ 
                                                 (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                  >> 5U)) 
                                                << 2U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xfffdU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (2U & ((0x3ffffffeU & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                      >> 2U) & ((~ 
                                                 (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                  >> 2U)) 
                                                << 1U)) 
                                    & ((0x1ffffffeU 
                                        & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                           >> 3U)) 
                                       | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                              >> 3U)) 
                                          << 1U)))) 
                    | (0x1ffffffeU & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                       >> 3U) & ((~ 
                                                  (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                   >> 3U)) 
                                                 << 1U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0xfffeU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (1U & ((((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                       >> 1U) & (~ vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U])) 
                     & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                         >> 2U) | (~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                      >> 1U)))) | (
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                                    >> 2U) 
                                                   & (~ 
                                                      (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                       >> 1U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a 
        = ((0x7fffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
           | (0x8000U & ((0xffff8000U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)) 
                         ^ (0xf8000U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[1U] 
                                        >> 0xcU)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
        = (0x7fffffffU & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                           >> 1U) & vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U]));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b 
        = (0x7fffffffU & ((~ ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                               << 0x1fU) | (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                                            >> 1U))) 
                          & (~ vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U])));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r) 
           & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[0U] 
              >> 0x1aU));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_switch 
        = (((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_valid) 
            & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_address_match) 
               != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__last_unit))) 
           & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.valid));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_l1_arb_ack 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__acks) 
           & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order.data_out));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_l1_arb_ack 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__acks) 
                 & (~ (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order.data_out))));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit__BRA__0__KET__.ready 
        = ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_valid)
            ? ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT____VdfgTmp_hc99cfb62__0) 
               & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_state))
            : (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_state) 
                | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_l1_arb_ack)) 
               & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT____VdfgTmp_hc99cfb62__0)));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_rd[1U][0U] 
        = ((0U == (3U & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out 
                         >> 0xaU))) ? (((- (IData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sign_bit))) 
                                        << 8U) | (0xffU 
                                                  & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__aligned_load_data))
            : ((1U == (3U & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out 
                             >> 0xaU))) ? (((- (IData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sign_bit))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__aligned_load_data))
                : vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__aligned_load_data));
    if ((2U & (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_reg))) {
        if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_reg))) {
            if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_bready_reg) 
                 & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_reg))) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__first_transfer_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bid_next 
                    = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__id_reg;
                if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__first_transfer_reg) 
                     | (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bresp_reg)))) {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bresp_next 
                        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bresp_reg;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_reg)))) {
            if (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wready_int_reg) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wlast_int = 0U;
                if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_reg))) {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wlast_int = 1U;
                }
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wstrb_int 
                    = ((7U >= (4U & vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg))
                        ? (0xfU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__strb_reg) 
                                   >> (4U & vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg)))
                        : 0U);
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wuser_int 
                    = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__wuser_reg;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wdata_int 
                    = (IData)(((0x3fU >= (0x20U & (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg 
                                                   << 3U)))
                                ? (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__data_reg 
                                   >> (0x20U & (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg 
                                                << 3U)))
                                : 0ULL));
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wvalid_int = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_reg)))) {
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__first_transfer_next = 1U;
        }
        if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_reg))) {
            if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_wready_reg) 
                 & (0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_buf_l__DOT__count)))) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wlast_int = 0U;
                if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_reg))) {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wlast_int = 1U;
                }
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wstrb_int 
                    = ((7U >= (4U & vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg))
                        ? (0xfU & (0xffU >> (4U & vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg)))
                        : 0U);
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wuser_int 
                    = vlSelf->cva5_sim__DOT__s_axi_wuser_adapt;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wdata_int 
                    = (IData)(((0x3fU >= (0x20U & (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg 
                                                   << 3U)))
                                ? ((((QData)((IData)(
                                                     vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_last_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_last_data[0U]))) 
                                   >> (0x20U & (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg 
                                                << 3U)))
                                : 0ULL));
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wvalid_int = 1U;
            }
        }
    }
    __Vtableidx3 = (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wvalid_int) 
                     << 4U) | (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____Vcellout__s_ifaces__BRA__1__KET____DOT__reg_inst__s_axi_wready) 
                                << 3U) | (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wready_int_reg) 
                                           << 2U) | 
                                          (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__temp_m_axi_wvalid_reg) 
                                            << 1U) 
                                           | (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wvalid_reg)))));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wvalid_next 
        = Vcva5_sim__ConstPool__TABLE_hefc0ef20_0[__Vtableidx3];
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__temp_m_axi_wvalid_next 
        = Vcva5_sim__ConstPool__TABLE_haec470c6_0[__Vtableidx3];
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__store_axi_w_int_to_output 
        = Vcva5_sim__ConstPool__TABLE_h49faefbe_0[__Vtableidx3];
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__store_axi_w_int_to_temp 
        = Vcva5_sim__ConstPool__TABLE_h9070065d_0[__Vtableidx3];
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__store_axi_w_temp_to_output 
        = Vcva5_sim__ConstPool__TABLE_h454cc0b0_0[__Vtableidx3];
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wready_int_early 
        = (1U & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__temp_m_axi_wvalid_reg) 
                     | ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wvalid_int) 
                        & (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wvalid_reg)))) 
                 | (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____Vcellout__s_ifaces__BRA__1__KET____DOT__reg_inst__s_axi_wready)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_s_axi_wready 
        = (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____Vcellout__s_ifaces__BRA__1__KET____DOT__reg_inst__s_axi_wready) 
            << 1U) | (1U & ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_wready) 
                            | (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_drop_reg))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h765d7b6e__0 
        = (1U & ((~ ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_complete)) 
                     & (4U <= (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_count_reg)))) 
                 & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_valid_next))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_branch_corruption_check__DOT__is_branch_or_jump 
        = ((0x1bU == (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__fetch_instruction 
                               >> 2U))) | ((0x19U == 
                                            (0x1fU 
                                             & (vlSelf->cva5_sim__DOT__cpu__DOT__fetch_instruction 
                                                >> 2U))) 
                                           | (0x18U 
                                              == (0x1fU 
                                                  & (vlSelf->cva5_sim__DOT__cpu__DOT__fetch_instruction 
                                                     >> 2U)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_w_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_w_reg));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_start 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_start));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[0U] 
        = (IData)((((QData)((IData)((0x20080200U | 
                                     (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                       << 0x1eU) | 
                                      ((0x100000U & 
                                        ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sew) 
                                         << 0x13U)) 
                                       | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                          << 0xaU)))))) 
                    << 0x20U) | (QData)((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_h9730cce6__0 
                                                 + 
                                                 ((0x7f800U 
                                                   & ((IData)(
                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sumOut 
                                                               >> 0x18U)) 
                                                      << 0xbU)) 
                                                  | (0x1feU 
                                                     & ((IData)(
                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sumOut 
                                                                 >> 0x10U)) 
                                                        << 1U))))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[1U] 
        = (IData)(((((QData)((IData)((0x20080200U | 
                                      (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                        << 0x1eU) | 
                                       ((0x100000U 
                                         & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sew) 
                                            << 0x13U)) 
                                        | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                           << 0xaU)))))) 
                     << 0x20U) | (QData)((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_h9730cce6__0 
                                                  + 
                                                  ((0x7f800U 
                                                    & ((IData)(
                                                               (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sumOut 
                                                                >> 0x18U)) 
                                                       << 0xbU)) 
                                                   | (0x1feU 
                                                      & ((IData)(
                                                                 (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sumOut 
                                                                  >> 0x10U)) 
                                                         << 1U))))))) 
                   >> 0x20U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1 
        = (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_sew)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_mask 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_mask));
    cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT____VdfgExtracted_h2553d22f__0 
        = (1U & ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bvalid_reg)) 
                 & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awvalid_reg))));
    if (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__store_axi_r_int_to_temp) {
        vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__temp_s_axi_rlast_reg 
            = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rlast_int;
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_ld__en 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rvalid_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s5_end 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vm_wr_en 
        = (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_valid_out) 
            & ((~ (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)))) 
               & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_mask_out)))
            ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_be_out)
            : 0U);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_valid_out) 
           & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_resp_end) 
              | ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_mask_out)) 
                 & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_resp_start))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vID_outValid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s4_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMerge_outValid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s4_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outValid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_outValid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s4_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_outValid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s4_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_outValid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vd 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_valid_out) 
           & ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_sca_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_resp_start)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMove_outSca 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s4_sca));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outNarrow 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_narrow));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__selected_csr 
        = (((((((((0x301U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                >> 0x24U)))) 
                  | (0xf11U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                  >> 0x24U))))) 
                 | (0xf12U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                 >> 0x24U))))) 
                | (0xf13U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                >> 0x24U))))) 
               | (0xf14U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                               >> 0x24U))))) 
              | (0x300U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                              >> 0x24U))))) 
             | (0x302U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                             >> 0x24U))))) 
            | (0x303U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                            >> 0x24U)))))
            ? ((0x301U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                             >> 0x24U))))
                ? 0x40001100U : ((0xf11U == (0xfffU 
                                             & (IData)(
                                                       (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                        >> 0x24U))))
                                  ? 0U : ((0xf12U == 
                                           (0xfffU 
                                            & (IData)(
                                                      (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                       >> 0x24U))))
                                           ? 0U : (
                                                   (0xf13U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                                >> 0x24U))))
                                                    ? 0U
                                                    : 
                                                   ((0xf14U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                                 >> 0x24U))))
                                                     ? 0U
                                                     : 
                                                    ((0x300U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                                  >> 0x24U))))
                                                      ? vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus
                                                      : 
                                                     ((0x302U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(
                                                                  (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                                   >> 0x24U))))
                                                       ? vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__medeleg
                                                       : vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mideleg)))))))
            : (((((((((0x304U == (0xfffU & (IData)(
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                    >> 0x24U)))) 
                      | (0x305U == (0xfffU & (IData)(
                                                     (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                      >> 0x24U))))) 
                     | (0x306U == (0xfffU & (IData)(
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                     >> 0x24U))))) 
                    | (0x340U == (0xfffU & (IData)(
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                    >> 0x24U))))) 
                   | (0x341U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                   >> 0x24U))))) 
                  | (0x342U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                  >> 0x24U))))) 
                 | (0x343U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                 >> 0x24U))))) 
                | (0x344U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                >> 0x24U)))))
                ? ((0x304U == (0xfffU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                 >> 0x24U))))
                    ? vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mie
                    : ((0x305U == (0xfffU & (IData)(
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                     >> 0x24U))))
                        ? vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mtvec
                        : ((0x306U == (0xfffU & (IData)(
                                                        (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                         >> 0x24U))))
                            ? 0U : ((0x340U == (0xfffU 
                                                & (IData)(
                                                          (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                           >> 0x24U))))
                                     ? vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mscratch
                                     : ((0x341U == 
                                         (0xfffU & (IData)(
                                                           (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                            >> 0x24U))))
                                         ? vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mepc
                                         : ((0x342U 
                                             == (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                            >> 0x24U))))
                                             ? vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mcause
                                             : ((0x343U 
                                                 == 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                             >> 0x24U))))
                                                 ? vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mtval
                                                 : vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mip)))))))
                : ((((((((((0x3efU <= (0xfffU & (IData)(
                                                        (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                         >> 0x24U)))) 
                           & (0x3a0U >= (0xfffU & (IData)(
                                                          (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                           >> 0x24U))))) 
                          | (0xb00U == (0xfffU & (IData)(
                                                         (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                          >> 0x24U))))) 
                         | (0xb02U == (0xfffU & (IData)(
                                                        (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                         >> 0x24U))))) 
                        | ((0xb03U <= (0xfffU & (IData)(
                                                        (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                         >> 0x24U)))) 
                           & (0xb1fU >= (0xfffU & (IData)(
                                                          (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                           >> 0x24U)))))) 
                       | (0xb80U == (0xfffU & (IData)(
                                                      (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                       >> 0x24U))))) 
                      | (0xb82U == (0xfffU & (IData)(
                                                     (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                      >> 0x24U))))) 
                     | ((0xb83U <= (0xfffU & (IData)(
                                                     (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                      >> 0x24U)))) 
                        & (0xb9fU >= (0xfffU & (IData)(
                                                       (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                        >> 0x24U)))))) 
                    | ((0x320U <= (0xfffU & (IData)(
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                     >> 0x24U)))) 
                       & (0x33fU >= (0xfffU & (IData)(
                                                      (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                       >> 0x24U))))))
                    ? (((0x3efU <= (0xfffU & (IData)(
                                                     (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                      >> 0x24U)))) 
                        & (0x3a0U >= (0xfffU & (IData)(
                                                       (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                        >> 0x24U)))))
                        ? 0U : ((0xb00U == (0xfffU 
                                            & (IData)(
                                                      (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                       >> 0x24U))))
                                 ? (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mcycle)
                                 : ((0xb02U == (0xfffU 
                                                & (IData)(
                                                          (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                           >> 0x24U))))
                                     ? (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__minst_ret)
                                     : (((0xb03U <= 
                                          (0xfffU & (IData)(
                                                            (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                             >> 0x24U)))) 
                                         & (0xb1fU 
                                            >= (0xfffU 
                                                & (IData)(
                                                          (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                           >> 0x24U)))))
                                         ? 0U : ((0xb80U 
                                                  == 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                              >> 0x24U))))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mcycle 
                                                             >> 0x20U)))
                                                  : 
                                                 ((0xb82U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                               >> 0x24U))))
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__minst_ret 
                                                              >> 0x20U)))
                                                   : 0U))))))
                    : (((((((((0xbc0U == (0xfffU & (IData)(
                                                           (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                            >> 0x24U)))) 
                              | (0x100U == (0xfffU 
                                            & (IData)(
                                                      (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                       >> 0x24U))))) 
                             | (0x102U == (0xfffU & (IData)(
                                                            (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                             >> 0x24U))))) 
                            | (0x103U == (0xfffU & (IData)(
                                                           (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                            >> 0x24U))))) 
                           | (0x104U == (0xfffU & (IData)(
                                                          (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                           >> 0x24U))))) 
                          | (0x105U == (0xfffU & (IData)(
                                                         (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                          >> 0x24U))))) 
                         | (0x106U == (0xfffU & (IData)(
                                                        (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                         >> 0x24U))))) 
                        | (0x140U == (0xfffU & (IData)(
                                                       (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                        >> 0x24U)))))
                        ? ((0xbc0U == (0xfffU & (IData)(
                                                        (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                         >> 0x24U))))
                            ? vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mcfu_selector
                            : ((0x100U == (0xfffU & (IData)(
                                                            (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                             >> 0x24U))))
                                ? 0U : ((0x102U == 
                                         (0xfffU & (IData)(
                                                           (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                            >> 0x24U))))
                                         ? 0U : ((0x103U 
                                                  == 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                              >> 0x24U))))
                                                  ? 0U
                                                  : 
                                                 ((0x104U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                               >> 0x24U))))
                                                   ? 0U
                                                   : 
                                                  ((0x105U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                                >> 0x24U))))
                                                    ? 0U
                                                    : 
                                                   ((0x106U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                                 >> 0x24U))))
                                                     ? 0U
                                                     : 0U)))))))
                        : (((((((((0x141U == (0xfffU 
                                              & (IData)(
                                                        (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                         >> 0x24U)))) 
                                  | (0x142U == (0xfffU 
                                                & (IData)(
                                                          (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                           >> 0x24U))))) 
                                 | (0x143U == (0xfffU 
                                               & (IData)(
                                                         (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                          >> 0x24U))))) 
                                | (0x144U == (0xfffU 
                                              & (IData)(
                                                        (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                         >> 0x24U))))) 
                               | (0x180U == (0xfffU 
                                             & (IData)(
                                                       (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                        >> 0x24U))))) 
                              | (1U == (0xfffU & (IData)(
                                                         (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                          >> 0x24U))))) 
                             | (2U == (0xfffU & (IData)(
                                                        (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                         >> 0x24U))))) 
                            | (3U == (0xfffU & (IData)(
                                                       (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                        >> 0x24U)))))
                            ? ((0x141U == (0xfffU & (IData)(
                                                            (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                             >> 0x24U))))
                                ? 0U : ((0x142U == 
                                         (0xfffU & (IData)(
                                                           (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                            >> 0x24U))))
                                         ? 0U : ((0x143U 
                                                  == 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                              >> 0x24U))))
                                                  ? 0U
                                                  : 
                                                 ((0x144U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                               >> 0x24U))))
                                                   ? 0U
                                                   : 
                                                  ((0x180U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                                >> 0x24U))))
                                                    ? 0U
                                                    : 0U)))))
                            : (((((((((0xc00U == (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                             >> 0x24U)))) 
                                      | (0xc01U == 
                                         (0xfffU & (IData)(
                                                           (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                            >> 0x24U))))) 
                                     | (0xc02U == (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                              >> 0x24U))))) 
                                    | ((0xc03U <= (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                              >> 0x24U)))) 
                                       & (0xc1fU >= 
                                          (0xfffU & (IData)(
                                                            (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                             >> 0x24U)))))) 
                                   | (0xc80U == (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                            >> 0x24U))))) 
                                  | (0xc81U == (0xfffU 
                                                & (IData)(
                                                          (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                           >> 0x24U))))) 
                                 | (0xc82U == (0xfffU 
                                               & (IData)(
                                                         (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                          >> 0x24U))))) 
                                | ((0xc83U <= (0xfffU 
                                               & (IData)(
                                                         (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                          >> 0x24U)))) 
                                   & (0xc9fU >= (0xfffU 
                                                 & (IData)(
                                                           (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                            >> 0x24U))))))
                                ? ((0xc00U == (0xfffU 
                                               & (IData)(
                                                         (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                          >> 0x24U))))
                                    ? (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mcycle)
                                    : ((0xc01U == (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                              >> 0x24U))))
                                        ? (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mcycle)
                                        : ((0xc02U 
                                            == (0xfffU 
                                                & (IData)(
                                                          (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                           >> 0x24U))))
                                            ? (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__minst_ret)
                                            : (((0xc03U 
                                                 <= 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                             >> 0x24U)))) 
                                                & (0xc1fU 
                                                   >= 
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                               >> 0x24U)))))
                                                ? 0U
                                                : (
                                                   (0xc80U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                                >> 0x24U))))
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mcycle 
                                                               >> 0x20U)))
                                                    : 
                                                   ((0xc81U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                                 >> 0x24U))))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mcycle 
                                                                >> 0x20U)))
                                                     : 
                                                    ((0xc82U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                                  >> 0x24U))))
                                                      ? 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__minst_ret 
                                                                 >> 0x20U)))
                                                      : 0U)))))))
                                : ((0x801U == (0xfffU 
                                               & (IData)(
                                                         (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r 
                                                          >> 0x24U))))
                                    ? vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__cfu_status
                                    : 0U)))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_csr 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_cfu_csr)) 
           & (IData)(cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_heb16dbf4__0));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_cfu 
        = (((((2U == (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                               >> 2U))) | (0xaU == 
                                           (0x1fU & 
                                            (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                             >> 2U)))) 
             | (0x16U == (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                   >> 2U)))) | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_cfu_csr)) 
           & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mcfu_selector 
              >> 0x1fU));
    cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vlvbound_hce8a820f__0 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.rs_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_read_addr[1U] 
        = cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vlvbound_hce8a820f__0;
    cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vlvbound_hce8a820f__0 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.rs_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_read_addr[2U] 
        = cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vlvbound_hce8a820f__0;
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz 
        = ((0x7fU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz)) 
           | (0x80U & ((~ (IData)((0U != (0xfU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor)))) 
                       << 7U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__low_order_clz[7U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                >> 1U))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz 
        = ((0xbfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz)) 
           | (0x40U & ((~ (IData)((0U != (0xfU & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                                                  >> 4U))))) 
                       << 6U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__low_order_clz[6U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                >> 5U))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz 
        = ((0xdfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz)) 
           | (0x20U & ((~ (IData)((0U != (0xfU & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                                                  >> 8U))))) 
                       << 5U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__low_order_clz[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                >> 9U))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz 
        = ((0xefU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz)) 
           | (0x10U & ((~ (IData)((0U != (0xfU & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                                                  >> 0xcU))))) 
                       << 4U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__low_order_clz[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                >> 0xdU))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz 
        = ((0xf7U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz)) 
           | (8U & ((~ (IData)((0U != (0xfU & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                                               >> 0x10U))))) 
                    << 3U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__low_order_clz[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                >> 0x11U))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz 
        = ((0xfbU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz)) 
           | (4U & ((~ (IData)((0U != (0xfU & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                                               >> 0x14U))))) 
                    << 2U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__low_order_clz[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                >> 0x15U))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz 
        = ((0xfdU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz)) 
           | (2U & ((~ (IData)((0U != (0xfU & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                                               >> 0x18U))))) 
                    << 1U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__low_order_clz[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                >> 0x19U))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz 
        = ((0xfeU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz)) 
           | (1U & (~ (IData)((0U != (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
                                      >> 0x1cU))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__low_order_clz[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__clz_low_table
        [(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor 
          >> 0x1dU)];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_CLZ 
        = ((0xfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_CLZ)) 
           | ((IData)((0xfU == (0xfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz)))) 
              << 4U));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_CLZ 
        = ((0x17U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_CLZ)) 
           | (((0x10U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_CLZ))
                ? (3U == (3U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz) 
                                >> 4U))) : (3U == (3U 
                                                   & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz)))) 
              << 3U));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_CLZ 
        = ((0x1bU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_CLZ)) 
           | (4U & (((((IData)((1U == (3U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz)))) 
                       | (IData)((7U == (0xfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz))))) 
                      | (IData)((0x1fU == (0x3fU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz))))) 
                     | (0x7fU == (0x7fU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz)))) 
                    << 2U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__upper_lower[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__low_order_clz
        [(1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__upper_lower[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__low_order_clz
        [(2U | (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz) 
                      >> 2U)))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__upper_lower[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__low_order_clz
        [(4U | (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz) 
                      >> 4U)))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__upper_lower[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__low_order_clz
        [(6U | (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__sub_clz) 
                      >> 6U)))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_CLZ 
        = ((0x1cU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_CLZ)) 
           | vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_clz_block__DOT__upper_lower
           [(3U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_CLZ) 
                   >> 3U))]);
    __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__50__b 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_remainder;
    __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__50__a 
        = ((vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[2U] 
            << 0x1dU) | (vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[1U] 
                         >> 3U));
    __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__50__Vfuncout 
        = (((- (IData)((IData)(__Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__50__b))) 
            ^ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__50__a) 
           + (IData)(__Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__50__b));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
        = __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__50__Vfuncout;
    vlSelf->cva5_sim__DOT__cpu__DOT__alu_unit_block__DOT____VdfgTmp_h6ba2cf10__0 
        = (0x3ffffffffULL & ((1ULL | (0x3fffffffeULL 
                                      & (((0U == (3U 
                                                  & (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                                                     >> 8U)))
                                           ? ((((QData)((IData)(
                                                                vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[4U])) 
                                                << 0x33U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[4U])) 
                                                   << 0x13U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U])) 
                                                     >> 0xdU))) 
                                              ^ (((QData)((IData)(
                                                                  vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U])) 
                                                  << 0x34U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U])) 
                                                     << 0x14U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[2U])) 
                                                       >> 0xcU))))
                                           : ((1U == 
                                               (3U 
                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                                                   >> 8U)))
                                               ? ((
                                                   ((QData)((IData)(
                                                                    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[4U])) 
                                                    << 0x33U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[4U])) 
                                                       << 0x13U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U])) 
                                                         >> 0xdU))) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U])) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[2U])) 
                                                           >> 0xcU))))
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                                                       >> 8U)))
                                                   ? 
                                                  ((((QData)((IData)(
                                                                     vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[4U])) 
                                                     << 0x33U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[4U])) 
                                                        << 0x13U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U])) 
                                                          >> 0xdU))) 
                                                   & (((QData)((IData)(
                                                                       vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U])) 
                                                       << 0x34U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U])) 
                                                          << 0x14U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[2U])) 
                                                            >> 0xcU))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[4U])) 
                                                    << 0x33U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[4U])) 
                                                       << 0x13U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U])) 
                                                         >> 0xdU)))))) 
                                         << 1U))) + 
                             ((((((0U == (3U & (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                                                >> 8U))) 
                                  | (1U == (3U & (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                                                  >> 8U)))) 
                                 | (2U == (3U & (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                                                 >> 8U))))
                                 ? 0ULL : (0x1ffffffffULL 
                                           & ((((QData)((IData)(
                                                                vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U])) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[3U])) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[2U])) 
                                                     >> 0xcU))) 
                                              ^ (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                                                                       >> 2U)))))))) 
                               << 1U) | (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                                                            >> 2U)))))));
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet[0U] 
        = ((0x7fffffffffULL & vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
            [0U]) | ((QData)((IData)(((0x11U >= (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                                                    [0U])))
                                       ? (7U & (vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_instruction_id
                                                [0U] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                                                    [0U]))))
                                       : 0U))) << 0x27U));
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet[0U] 
        = ((0x381ffffffffULL & vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
            [0U]) | ((QData)((IData)(((0x23U >= (0x3fU 
                                                 & ((IData)(6U) 
                                                    * 
                                                    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                                                    [0U])))
                                       ? (0x3fU & (IData)(
                                                          (vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_phys_addr
                                                           [0U] 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(6U) 
                                                               * 
                                                               vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                                                               [0U])))))
                                       : 0U))) << 0x21U));
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet[1U] 
        = ((0x7fffffffffULL & vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
            [1U]) | ((QData)((IData)(((0x11U >= (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                                                    [1U])))
                                       ? (7U & (vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_instruction_id
                                                [1U] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                                                    [1U]))))
                                       : 0U))) << 0x27U));
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet[1U] 
        = ((0x381ffffffffULL & vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
            [1U]) | ((QData)((IData)(((0x23U >= (0x3fU 
                                                 & ((IData)(6U) 
                                                    * 
                                                    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                                                    [1U])))
                                       ? (0x3fU & (IData)(
                                                          (vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_phys_addr
                                                           [1U] 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(6U) 
                                                               * 
                                                               vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                                                               [1U])))))
                                       : 0U))) << 0x21U));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0x7fffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (0x8000U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                           | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                          >> 0xfU) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                       | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                                      >> 0x10U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xbfffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (0x4000U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                           | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                          >> 0xeU) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                       | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                                      >> 0xfU))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xdfffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (0x2000U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                           | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                          >> 0xdU) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                       | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                                      >> 0xeU))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xefffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (0x1000U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                           | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                          >> 0xcU) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                       | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                                      >> 0xdU))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xf7ffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (0x800U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                          | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                         >> 0xbU) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                      | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                                     >> 0xcU))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xfbffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (0x400U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                          | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                         >> 0xaU) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                      | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                                     >> 0xbU))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xfdffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (0x200U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                          | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                         >> 9U) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                    | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                                   >> 0xaU))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xfeffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (0x100U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                          | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                         >> 8U) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                    | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                                   >> 9U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xff7fU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (0x80U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                         | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                        >> 7U) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                   | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                                  >> 8U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xffbfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (0x40U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                         | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                        >> 6U) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                   | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                                  >> 7U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xffdfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (0x20U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                         | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                        >> 5U) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                   | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                                  >> 6U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xffefU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (0x10U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                         | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                        >> 4U) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                   | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                                  >> 5U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xfff7U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (8U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                      | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                     >> 3U) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                               >> 4U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xfffbU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (4U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                      | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                     >> 2U) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                               >> 3U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xfffdU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (2U & (((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                      | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                     >> 1U) & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                                | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                               >> 2U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0xfffeU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (1U & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                     | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                    & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_a 
                        | vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__eq_b) 
                       >> 1U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a 
        = ((0x7fffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
           | (0x8000U & ((0xffff8000U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a)) 
                         ^ (0xf8000U & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[1U] 
                                        >> 0xcU)))));
    if ((0x20000000U & vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[1U])) {
        vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__carry_in 
            = (1U & ((((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[2U] 
                           >> 0x1eU)) | (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                         >> 0x1fU)) 
                      & ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[2U] 
                             >> 0x1fU)) | vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U])) 
                     | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[2U] 
                            >> 0x1fU)) & vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U])));
        vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT____VdfgTmp_h70d9846b__0 
            = vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a;
    } else {
        vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__carry_in 
            = (1U & ((((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                        >> 0x1fU) & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[2U] 
                                     >> 0x1eU)) | (
                                                   (~ 
                                                    (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                                     >> 0x1fU)) 
                                                   & (~ 
                                                      (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[2U] 
                                                       >> 0x1eU)))) 
                     & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                         & (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[2U] 
                            >> 0x1fU)) | ((~ vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U]) 
                                          & (~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[2U] 
                                                >> 0x1fU))))));
        vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT____VdfgTmp_h70d9846b__0 
            = vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a;
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_update_way 
        = (3U & ((- (IData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing))) 
                 & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__branch_metadata_ex)));
    vlSelf->cva5_sim__DOT__cpu__DOT__br_results[0U] 
        = (((IData)((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex)) 
                      << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex)))) 
            << 4U) | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken_ex) 
                       << 3U) | ((4U & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__jal_jalr_ex)) 
                                        << 2U)) | (
                                                   ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__is_return) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__is_call)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__br_results[1U] 
        = (((IData)((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex)) 
                      << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex)))) 
            >> 0x1cU) | ((IData)(((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex))) 
                                  >> 0x20U)) << 4U));
    vlSelf->cva5_sim__DOT__cpu__DOT__br_results[2U] 
        = (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__id_ex) 
            << 5U) | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing) 
                       << 4U) | ((IData)(((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex))) 
                                          >> 0x20U)) 
                                 >> 0x1cU)));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_flush = 
        ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing) 
         & ((0x7fffffffU & ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[1U] 
                             << 4U) | (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[0U] 
                                       >> 0x1cU))) 
            != (vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex 
                >> 1U)));
    __Vfunc_getTag__36__addr = (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_load 
                                        >> 1U));
    __Vfunc_getTag__36__Vfuncout = (0x3fffU & (__Vfunc_getTag__36__addr 
                                               >> 0xeU));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__tag_banks__DOT__new_tagline 
        = (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_l1_arb_ack) 
            << 0xeU) | (IData)(__Vfunc_getTag__36__Vfuncout));
    __Vfunc_getTagLineAddr__34__addr = ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[2U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.store_data_out[1U] 
                                         >> 0x12U));
    __Vfunc_getTagLineAddr__34__Vfuncout = (0x3ffU 
                                            & (__Vfunc_getTagLineAddr__34__addr 
                                               >> 4U));
    __Vfunc_getTagLineAddr__33__addr = (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__stage2_load 
                                                >> 1U));
    __Vfunc_getTagLineAddr__33__Vfuncout = (0x3ffU 
                                            & (__Vfunc_getTagLineAddr__33__addr 
                                               >> 4U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__tag_banks__DOT__porta_addr 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_l1_arb_ack)
            ? (IData)(__Vfunc_getTagLineAddr__33__Vfuncout)
            : (IData)(__Vfunc_getTagLineAddr__34__Vfuncout));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_next 
        = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg;
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_wready_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_select_valid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_select_valid_reg) 
           & (~ (((IData)(vlSelf->cva5_sim__DOT__s_axi_wvalid_xbar) 
                  & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_s_axi_wready)) 
                 & (IData)(vlSelf->cva5_sim__DOT__s_axi_wlast_xbar))));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_select_valid_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_select_valid_reg) 
           & (~ ((((IData)(vlSelf->cva5_sim__DOT__s_axi_wvalid_xbar) 
                   & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_s_axi_wready)) 
                  & (IData)(vlSelf->cva5_sim__DOT__s_axi_wlast_xbar)) 
                 >> 1U)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_drop_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_drop_reg) 
           & (~ (((IData)(vlSelf->cva5_sim__DOT__s_axi_wvalid_xbar) 
                  & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_s_axi_wready)) 
                 & (IData)(vlSelf->cva5_sim__DOT__s_axi_wlast_xbar))));
    if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_wc_valid_reg) 
         & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_select_valid_reg)))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_select_valid_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_wc_valid_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_drop_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_decerr_reg;
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_drop_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_drop_reg) 
           & (~ ((((IData)(vlSelf->cva5_sim__DOT__s_axi_wvalid_xbar) 
                   & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_s_axi_wready)) 
                  & (IData)(vlSelf->cva5_sim__DOT__s_axi_wlast_xbar)) 
                 >> 1U)));
    if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_reg) 
         & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_select_valid_reg)))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_select_valid_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_drop_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_reg;
    }
    vlSelf->cva5_sim__DOT__arb__DOT__w_complete = ((IData)(vlSymsp->TOP__cva5_sim__DOT__axi.wvalid) 
                                                   & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_s_axi_wready));
    vlSelf->__VdfgTmp_h1d58ce79__0 = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h274b4b5e__0) 
                                      & ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg)) 
                                         & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h765d7b6e__0)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__mask_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))))) {
        if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__mask_next 
                = (3U & ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))
                          ? ((1U >= ((IData)(1U) + 
                                     (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))))
                              ? ((IData)(3U) << ((IData)(1U) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))))
                              : 0U) : ((1U >= ((IData)(1U) 
                                               + (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h6c65d37d__0)))))
                                        ? ((IData)(3U) 
                                           << ((IData)(1U) 
                                               + (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h6c65d37d__0)))))
                                        : 0U)));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_reg) 
         & (~ (IData)((0U != ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg) 
                              & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_reg;
    } else if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_next = 1U;
        if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_next 
                = (3U & ((IData)(1U) << (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_next 
                = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)));
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_next 
                = (3U & ((IData)(1U) << (1U & (~ (IData)(vlSelf->__VdfgTmp_h6c65d37d__0)))));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_next 
                = (1U & (~ (IData)(vlSelf->__VdfgTmp_h6c65d37d__0)));
        }
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__early_branch_flush 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT____VdfgTmp_hb5b8037a__0) 
           & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_branch_corruption_check__DOT__is_branch_or_jump)) 
              & ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out) 
                 >> 4U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc48585f5__0 
        = (IData)(((0U == (0xff80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[2U])) 
                   & (0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[2U] 
                                        << 3U) | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[1U] 
                                                  >> 0x1dU))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hf73ed51b__0 
        = (IData)((0U == (0xffbfe00U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[1U])));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc1104ac1__0 
        = (IData)(((0U == (0x3fe00000U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[0U])) 
                   & (0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[1U] 
                                        << 1U) | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[0U] 
                                                  >> 0x1fU))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0 
        = (IData)((0U == (0xffbfeU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[0U])));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits8 
        = ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[2U] 
                     >> 8U)) | ((0x40U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[2U] 
                                          << 1U)) | 
                                ((0x20U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[1U] 
                                           >> 0x16U)) 
                                 | ((0x10U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[1U] 
                                              >> 0xdU)) 
                                    | ((8U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[1U] 
                                              >> 4U)) 
                                       | ((4U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[0U] 
                                                 >> 0x1bU)) 
                                          | ((2U & 
                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[0U] 
                                               >> 0x12U)) 
                                             | (1U 
                                                & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[0U] 
                                                   >> 9U)))))))));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_bready_next = 0U;
    if ((2U & (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_reg))) {
        if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_reg))) {
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_bready_next 
                = cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT____VdfgExtracted_h2553d22f__0;
            if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_bready_reg) 
                 & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_reg))) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_size_next = 2U;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awsize_next = 2U;
                if ((1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_active_reg)))) {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_awready_next 
                        = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awvalid_reg)));
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bvalid_next = 1U;
                }
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awaddr_next 
                    = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg;
                if (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_active_reg) {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awvalid_next = 1U;
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 1U;
                } else {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 0U;
                }
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_next 
                    = ((0U != ((0x1fU >= ((IData)(0xaU) 
                                          - (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_size_reg)))
                                ? ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_reg) 
                                   >> ((IData)(0xaU) 
                                       - (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_size_reg)))
                                : 0U)) ? 0xffU : (0xffU 
                                                  & (((7U 
                                                       >= 
                                                       ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_size_reg) 
                                                        - (IData)(2U)))
                                                       ? 
                                                      ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_reg) 
                                                       << 
                                                       ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_size_reg) 
                                                        - (IData)(2U)))
                                                       : 0U) 
                                                     | (((7U 
                                                          >= 
                                                          ((IData)(8U) 
                                                           - (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_size_reg)))
                                                          ? 
                                                         (0xffU 
                                                          & (0xffU 
                                                             >> 
                                                             ((IData)(8U) 
                                                              - (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_size_reg))))
                                                          : 0U) 
                                                        >> 2U))));
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awlen_next 
                    = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_next;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_bready_next = 0U;
            } else {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 3U;
            }
        } else {
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_wready_next = 0U;
            if (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wready_int_reg) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_next 
                    = (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_reg) 
                                - (IData)(1U)));
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_next 
                    = ((vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg 
                        + ((IData)(1U) << (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_size_reg))) 
                       & ((IData)(0xffffffffU) << (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_size_reg)));
                if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_reg))) {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_wready_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 3U;
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_bready_next 
                        = cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT____VdfgExtracted_h2553d22f__0;
                } else if (((1U & (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_next 
                                   >> (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_size_reg))) 
                            != (1U & (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg 
                                      >> (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_size_reg))))) {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 1U;
                } else {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_wready_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 2U;
                }
            } else {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 2U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_reg)))) {
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_awready_next 
                = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awvalid_reg)));
            if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_awready_reg) 
                 & (IData)(vlSelf->cva5_sim__DOT__aw_valid))) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_size_next = 2U;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awsize_next = 2U;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_awready_next = 0U;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awaddr_next 
                    = vlSelf->cva5_sim__DOT__aw_addr;
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awvalid_next = 1U;
            }
        }
        if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_reg))) {
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_wready_next 
                = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wready_int_early;
            if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_wready_reg) 
                 & (0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_buf_l__DOT__count)))) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_next 
                    = (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_reg) 
                                - (IData)(1U)));
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_next 
                    = ((vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg 
                        + ((IData)(1U) << (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_size_reg))) 
                       & ((IData)(0xffffffffU) << (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_size_reg)));
                if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_reg))) {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_wready_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 3U;
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_bready_next 
                        = (1U & ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_bvalid_reg)) 
                                 & (~ (IData)(vlSelf->cva5_sim__DOT__aw_valid))));
                } else if (((1U & (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_next 
                                   >> (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_size_reg))) 
                            != (1U & (vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_reg 
                                      >> (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__burst_size_reg))))) {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 1U;
                } else {
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_wready_next = 0U;
                    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 2U;
                }
            } else {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 1U;
            }
        } else if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_awready_reg) 
                    & (IData)(vlSelf->cva5_sim__DOT__aw_valid))) {
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_next 
                = (0xffU & ((0U != ((IData)(vlSelf->cva5_sim__DOT__aw_len) 
                                    >> 7U)) ? (0xfeU 
                                               | (1U 
                                                  & ((~ vlSelf->cva5_sim__DOT__aw_addr) 
                                                     >> 2U)))
                             : (((IData)(vlSelf->cva5_sim__DOT__aw_len) 
                                 << 1U) | (1U & ((~ vlSelf->cva5_sim__DOT__aw_addr) 
                                                 >> 2U)))));
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_awlen_next 
                = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__master_burst_next;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__addr_next 
                = vlSelf->cva5_sim__DOT__aw_addr;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__s_axi_wready_next 
                = vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__m_axi_wready_int_early;
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 1U;
        } else {
            vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_wr_inst__DOT__state_next = 0U;
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rlast_int = 0U;
    if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__state_reg))) {
        if ((1U == (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__state_reg))) {
            if (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__m_axi_rready_reg) 
                 & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg))) {
                vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rlast_int = 0U;
                if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__master_burst_reg))) {
                    if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__burst_reg))) {
                        vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rlast_int = 1U;
                    }
                }
            }
        }
    }
    __Vtableidx4 = (8U | (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rvalid_int) 
                           << 4U) | (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rready_int_reg) 
                                      << 2U) | (((IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__temp_s_axi_rvalid_reg) 
                                                 << 1U) 
                                                | (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rvalid_reg)))));
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rvalid_next 
        = Vcva5_sim__ConstPool__TABLE_hefc0ef20_0[__Vtableidx4];
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__temp_s_axi_rvalid_next 
        = Vcva5_sim__ConstPool__TABLE_haec470c6_0[__Vtableidx4];
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__store_axi_r_int_to_output 
        = Vcva5_sim__ConstPool__TABLE_h49faefbe_0[__Vtableidx4];
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__store_axi_r_int_to_temp 
        = Vcva5_sim__ConstPool__TABLE_h9070065d_0[__Vtableidx4];
    vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__store_axi_r_temp_to_output 
        = Vcva5_sim__ConstPool__TABLE_h454cc0b0_0[__Vtableidx4];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__addr_start 
        = (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__state)) 
            | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__curr_reg) 
                == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__max_reg)) 
               & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT____VdfgTmp_h43d852dd__0))) 
           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_ld__en));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__state_next 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_ld__en) 
                                       | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__state) 
                                          & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT____VdfgTmp_h8e9ef457__0) 
                                             | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT____VdfgTmp_h79cacbbc__0)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__turn_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_narrow) 
           & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vd) 
               | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__state)) 
              & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__turn))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__state_next 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vd) 
                                       | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__state) 
                                          & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT____VdfgTmp_h8e9ef457__0) 
                                             | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT____VdfgTmp_h79cacbbc__0) 
                                                | ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__turn)) 
                                                   & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_narrow)))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__addr_start 
        = (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__state)) 
            | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__curr_reg) 
                == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__max_reg)) 
               & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT____VdfgTmp_h43d852dd__0) 
                  & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT____VdfgTmp_h3afe6e14__0)))) 
           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vd));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__idx_out 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__idx_out;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__count 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__count;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__w_count 
        = ((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vAdd_mask0__DOT__s0_add0)) 
           + vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vAdd_mask0__DOT__s0_count);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__found 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__found;
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__uses_rs[1U] 
        = ((0x18U == (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                               >> 2U))) | ((0xcU == 
                                            (0x1fU 
                                             & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                >> 2U))) 
                                           | ((0xbU 
                                               == (0x1fU 
                                                   & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                      >> 2U))) 
                                              | ((((2U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                        >> 2U))) 
                                                   | (0x16U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                          >> 2U)))) 
                                                  & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_cfu)) 
                                                 | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_vfu) 
                                                    & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_h5a8231db__0) 
                                                        & (0x8000000U 
                                                           == 
                                                           (0xc000000U 
                                                            & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction))) 
                                                       | (IData)(
                                                                 (0x80007054U 
                                                                  == 
                                                                  (0xfe00707cU 
                                                                   & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)))))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__uses_rs[0U] 
        = ((0x19U == (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                               >> 2U))) | ((0x18U == 
                                            (0x1fU 
                                             & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                >> 2U))) 
                                           | ((0U == 
                                               (0x1fU 
                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                   >> 2U))) 
                                              | ((8U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                      >> 2U))) 
                                                 | ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                         >> 2U))) 
                                                    | ((0xcU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                            >> 2U))) 
                                                       | ((0xbU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                               >> 2U))) 
                                                          | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_csr) 
                                                             | (((~ 
                                                                  ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_cfu_csr) 
                                                                   & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                      >> 0xeU))) 
                                                                 & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_cfu)) 
                                                                | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_vfu) 
                                                                   & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_h5a8231db__0) 
                                                                      | (IData)(
                                                                                ((0x54U 
                                                                                == 
                                                                                (0x7cU 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                & ((4U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                                >> 0xcU))) 
                                                                                | ((5U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                                >> 0xcU))) 
                                                                                | ((6U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                                >> 0xcU))) 
                                                                                | (IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                                                                                & ((~ 
                                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                                >> 0x1fU)) 
                                                                                | (0x40U 
                                                                                == 
                                                                                (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                                >> 0x19U)))))))))))))))))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed 
        = ((((IData)((((0x70U == (0x7cU & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction)) 
                       & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_csr))) 
                      & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_cfu_csr)))) 
             | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ifence)) 
            << 7U) | ((((0x18U == (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                            >> 2U))) 
                        | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_h5e30b651__0)) 
                       << 6U) | ((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_cfu) 
                                   | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_vfu)) 
                                  << 5U) | ((0x3ffff0U 
                                             & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__mult_div_op) 
                                                 << 4U) 
                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                   >> 0xaU))) 
                                            | ((((~ 
                                                  (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                   >> 0xeU)) 
                                                 & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__mult_div_op)) 
                                                << 3U) 
                                               | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_csr) 
                                                   << 2U) 
                                                  | ((((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                            >> 2U))) 
                                                       | ((8U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                               >> 2U))) 
                                                          | ((0xbU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                  >> 2U))) 
                                                             | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_fence)))) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__mult_div_op)) 
                                                        & ((0xcU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                >> 2U))) 
                                                           | ((4U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                   >> 2U))) 
                                                              | ((5U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                      >> 2U))) 
                                                                 | ((0xdU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                         >> 2U))) 
                                                                    | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_h5e30b651__0)))))))))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__uses_rd 
        = ((0xdU == (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                              >> 2U))) | ((5U == (0x1fU 
                                                  & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                     >> 2U))) 
                                          | ((0x1bU 
                                              == (0x1fU 
                                                  & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                     >> 2U))) 
                                             | ((0x19U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                     >> 2U))) 
                                                | ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                        >> 2U))) 
                                                   | ((4U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                           >> 2U))) 
                                                      | ((0xcU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                              >> 2U))) 
                                                         | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_csr) 
                                                            | ((((2U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                      >> 2U))) 
                                                                 | (0xaU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                                                                        >> 2U)))) 
                                                                & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_cfu)) 
                                                               | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_vfu) 
                                                                   & (0x7000U 
                                                                      == 
                                                                      (0x7000U 
                                                                       & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction))) 
                                                                  | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_cfu_csr)))))))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_is_zero 
        = ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[0U] 
               >> 3U)) & (0x1fU == (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_CLZ)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz 
        = ((0x7fU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz)) 
           | (0x80U & ((~ (IData)((0U != (0xfU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend)))) 
                       << 7U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__low_order_clz[7U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                >> 1U))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz 
        = ((0xbfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz)) 
           | (0x40U & ((~ (IData)((0U != (0xfU & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                                                  >> 4U))))) 
                       << 6U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__low_order_clz[6U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                >> 5U))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz 
        = ((0xdfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz)) 
           | (0x20U & ((~ (IData)((0U != (0xfU & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                                                  >> 8U))))) 
                       << 5U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__low_order_clz[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                >> 9U))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz 
        = ((0xefU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz)) 
           | (0x10U & ((~ (IData)((0U != (0xfU & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                                                  >> 0xcU))))) 
                       << 4U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__low_order_clz[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                >> 0xdU))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz 
        = ((0xf7U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz)) 
           | (8U & ((~ (IData)((0U != (0xfU & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                                               >> 0x10U))))) 
                    << 3U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__low_order_clz[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                >> 0x11U))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz 
        = ((0xfbU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz)) 
           | (4U & ((~ (IData)((0U != (0xfU & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                                               >> 0x14U))))) 
                    << 2U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__low_order_clz[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                >> 0x15U))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz 
        = ((0xfdU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz)) 
           | (2U & ((~ (IData)((0U != (0xfU & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                                               >> 0x18U))))) 
                    << 1U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__low_order_clz[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__clz_low_table
        [(7U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                >> 0x19U))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz 
        = ((0xfeU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz)) 
           | (1U & (~ (IData)((0U != (vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
                                      >> 0x1cU))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__low_order_clz[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__clz_low_table
        [(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend 
          >> 0x1dU)];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_CLZ 
        = ((0xfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_CLZ)) 
           | ((IData)((0xfU == (0xfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz)))) 
              << 4U));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_CLZ 
        = ((0x17U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_CLZ)) 
           | (((0x10U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_CLZ))
                ? (3U == (3U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz) 
                                >> 4U))) : (3U == (3U 
                                                   & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz)))) 
              << 3U));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_CLZ 
        = ((0x1bU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_CLZ)) 
           | (4U & (((((IData)((1U == (3U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz)))) 
                       | (IData)((7U == (0xfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz))))) 
                      | (IData)((0x1fU == (0x3fU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz))))) 
                     | (0x7fU == (0x7fU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz)))) 
                    << 2U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__upper_lower[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__low_order_clz
        [(1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__upper_lower[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__low_order_clz
        [(2U | (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz) 
                      >> 2U)))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__upper_lower[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__low_order_clz
        [(4U | (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz) 
                      >> 4U)))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__upper_lower[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__low_order_clz
        [(6U | (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__sub_clz) 
                      >> 6U)))];
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_CLZ 
        = ((0x1cU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_CLZ)) 
           | vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_clz_block__DOT__upper_lower
           [(3U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_CLZ) 
                   >> 3U))]);
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_rd[0U][0U] 
        = ((0U == (3U & (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                         >> 0xaU))) ? ((vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[1U] 
                                        << 0x14U) | 
                                       (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                                        >> 0xcU)) : 
           ((1U == (3U & (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                          >> 0xaU))) ? (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__alu_unit_block__DOT____VdfgTmp_h6ba2cf10__0 
                                                >> 1U))
             : ((2U == (3U & (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                              >> 0xaU))) ? (1U & (IData)(
                                                         (vlSelf->cva5_sim__DOT__cpu__DOT__alu_unit_block__DOT____VdfgTmp_h6ba2cf10__0 
                                                          >> 0x21U)))
                 : (IData)((0x7fffffffffffffffULL & 
                            (((1U & vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U])
                               ? ((QData)((IData)((
                                                   (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[2U] 
                                                    << 0x14U) 
                                                   | (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[1U] 
                                                      >> 0xcU)))) 
                                  << 0x1fU) : (((QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                                                                                >> 1U))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[2U] 
                                                                   << 0x14U) 
                                                                  | (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[1U] 
                                                                     >> 0xcU)))))) 
                             >> (0x1fU & (((vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                                            << 0x1dU) 
                                           | (vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U] 
                                              >> 3U)) 
                                          ^ (- (IData)(
                                                       (1U 
                                                        & vlSelf->cva5_sim__DOT__cpu__DOT__alu_inputs[0U])))))))))));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__ras_block__DOT__ri_fifo.pop 
        = ((((vlSelf->cva5_sim__DOT__cpu__DOT__br_results[0U] 
              >> 2U) & (vlSelf->cva5_sim__DOT__cpu__DOT__br_results[2U] 
                        >> 4U)) & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__branch_metadata_ex) 
                                   >> 2U)) & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__gen_width_3_plus__DOT__inflight_count) 
                                              >> 3U));
    __Vfunc_getHashedLineAddr__13__addr = ((vlSelf->cva5_sim__DOT__cpu__DOT__br_results[2U] 
                                            << 0x1cU) 
                                           | (vlSelf->cva5_sim__DOT__cpu__DOT__br_results[1U] 
                                              >> 4U));
    __Vfunc_getHashedLineAddr__13__Vfuncout = (0x1ffU 
                                               & ((__Vfunc_getHashedLineAddr__13__addr 
                                                   >> 2U) 
                                                  ^ 
                                                  (__Vfunc_getHashedLineAddr__13__addr 
                                                   >> 0xbU)));
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT____Vcellinp__genblk1__DOT__gen_branch_tag_banks__BRA__0__KET____DOT__tag_bank__write_addr 
        = __Vfunc_getHashedLineAddr__13__Vfuncout;
    __Vfunc_getHashedLineAddr__17__addr = ((vlSelf->cva5_sim__DOT__cpu__DOT__br_results[2U] 
                                            << 0x1cU) 
                                           | (vlSelf->cva5_sim__DOT__cpu__DOT__br_results[1U] 
                                              >> 4U));
    __Vfunc_getHashedLineAddr__17__Vfuncout = (0x1ffU 
                                               & (__Vfunc_getHashedLineAddr__17__addr 
                                                  >> 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT____Vcellinp__genblk1__DOT__gen_branch_tag_banks__BRA__1__KET____DOT__tag_bank__write_addr 
        = __Vfunc_getHashedLineAddr__17__Vfuncout;
    __Vfunc_getHashedLineAddr__21__addr = ((vlSelf->cva5_sim__DOT__cpu__DOT__br_results[2U] 
                                            << 0x1cU) 
                                           | (vlSelf->cva5_sim__DOT__cpu__DOT__br_results[1U] 
                                              >> 4U));
    __Vfunc_getHashedLineAddr__21__Vfuncout = (0x1ffU 
                                               & ((__Vfunc_getHashedLineAddr__21__addr 
                                                   >> 2U) 
                                                  ^ 
                                                  (__Vfunc_getHashedLineAddr__21__addr 
                                                   >> 0xbU)));
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT____Vcellinp__genblk2__DOT__gen_branch_table_banks__BRA__0__KET____DOT__addr_table__write_addr 
        = __Vfunc_getHashedLineAddr__21__Vfuncout;
    __Vfunc_getHashedLineAddr__25__addr = ((vlSelf->cva5_sim__DOT__cpu__DOT__br_results[2U] 
                                            << 0x1cU) 
                                           | (vlSelf->cva5_sim__DOT__cpu__DOT__br_results[1U] 
                                              >> 4U));
    __Vfunc_getHashedLineAddr__25__Vfuncout = (0x1ffU 
                                               & (__Vfunc_getHashedLineAddr__25__addr 
                                                  >> 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT____Vcellinp__genblk2__DOT__gen_branch_table_banks__BRA__1__KET____DOT__addr_table__write_addr 
        = __Vfunc_getHashedLineAddr__25__Vfuncout;
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__ex_entry 
        = ((0x3ffffcU & vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__ex_entry) 
           | ((0x10U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__branch_metadata_ex))
               ? ((8U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__branch_metadata_ex))
                   ? ((8U & vlSelf->cva5_sim__DOT__cpu__DOT__br_results[0U])
                       ? 3U : 2U) : ((8U & vlSelf->cva5_sim__DOT__cpu__DOT__br_results[0U])
                                      ? 3U : 1U)) : 
              ((8U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__branch_metadata_ex))
                ? ((8U & vlSelf->cva5_sim__DOT__cpu__DOT__br_results[0U])
                    ? 2U : 0U) : ((8U & vlSelf->cva5_sim__DOT__cpu__DOT__br_results[0U])
                                   ? 1U : 0U))));
    if ((1U & (~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__branch_metadata_ex) 
                  >> 2U)))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__ex_entry 
            = ((0x3ffffcU & vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__ex_entry) 
               | ((8U & vlSelf->cva5_sim__DOT__cpu__DOT__br_results[0U])
                   ? 3U : 0U));
    }
    __Vfunc_getTag__10__addr = ((vlSelf->cva5_sim__DOT__cpu__DOT__br_results[2U] 
                                 << 0x1cU) | (vlSelf->cva5_sim__DOT__cpu__DOT__br_results[1U] 
                                              >> 4U));
    __Vfunc_getTag__10__Vfuncout = (0xffffU & (__Vfunc_getTag__10__addr 
                                               >> 0xbU));
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__ex_entry 
        = ((0x20001fU & vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__ex_entry) 
           | ((IData)(__Vfunc_getTag__10__Vfuncout) 
              << 5U));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__pc_mux[1U] 
        = ((vlSelf->cva5_sim__DOT__cpu__DOT__br_results[1U] 
            << 0x1cU) | (vlSelf->cva5_sim__DOT__cpu__DOT__br_results[0U] 
                         >> 4U));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] = ((0x7ffU 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U]) 
                                               | (0x7f800U 
                                                  & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_init_clear) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_fetch_hold) 
                                                         << 0x11U) 
                                                        | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_issue_hold) 
                                                            << 0x10U) 
                                                           | ((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_flush) 
                                                                | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_pc_override)) 
                                                               << 0xfU) 
                                                              | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_writeback_supress) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_retire_hold) 
                                                                     << 0xdU) 
                                                                    | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_sq_flush) 
                                                                       << 0xcU)))))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_status 
        = ((4U & ((~ (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__valid)))) 
                  << 2U)) | ((2U & ((~ (IData)((0U 
                                                != 
                                                ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__valid) 
                                                 & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__released))))) 
                                    << 1U)) | ((((~ 
                                                  ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT__gen_width_3_plus__DOT__inflight_count) 
                                                   >> 3U)) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__valid))))) 
                                                & (~ (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.valid))) 
                                               & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit__BRA__0__KET__.ready))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_ready 
        = ((~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_switch) 
               | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_switch_in_progress))) 
           & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit__BRA__0__KET__.ready));
    vlSelf->cva5_sim__DOT__arb__DOT__write_pop = (((IData)(vlSelf->cva5_sim__DOT__arb__DOT__aw_complete) 
                                                   | (IData)(vlSelf->cva5_sim__DOT__arb__DOT__aw_complete_r)) 
                                                  & ((IData)(vlSelf->cva5_sim__DOT__arb__DOT__w_complete) 
                                                     | (IData)(vlSelf->cva5_sim__DOT__arb__DOT__w_complete_r)));
}
