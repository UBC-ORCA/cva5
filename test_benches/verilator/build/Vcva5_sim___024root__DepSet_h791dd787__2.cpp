// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim__Syms.h"
#include "Vcva5_sim___024root.h"

extern const VlUnpacked<CData/*7:0*/, 8> Vcva5_sim__ConstPool__TABLE_h584c977e_0;

VL_INLINE_OPT void Vcva5_sim___024root___nba_sequent__TOP__2(Vcva5_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0;
    CData/*6:0*/ cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_ram__DOT____Vlvbound_hddbc3e43__0;
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT____VdfgTmp_h30c7cbd4__0;
    CData/*0:0*/ cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0;
    CData/*0:0*/ cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____VdfgTmp_h6323f526__0;
    CData/*0:0*/ cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h0d6941d5__0;
    CData/*0:0*/ cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT____VdfgTmp_hf1dfd614__0;
    CData/*0:0*/ cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT____VdfgTmp_h67ee469c__0;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__11__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__11__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__15__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__15__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__19__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__19__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__23__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__23__addr;
    CData/*0:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite_en__39__Vfuncout;
    CData/*0:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__swrite_en__40__Vfuncout;
    CData/*2:0*/ __Vtableidx2;
    VlWide<3>/*95:0*/ __Vtemp_hadc405ac__0;
    VlWide<3>/*95:0*/ __Vtemp_h343d6c4f__0;
    VlWide<3>/*95:0*/ __Vtemp_h51e8aeba__0;
    VlWide<3>/*95:0*/ __Vtemp_hcddc97b4__0;
    VlWide<3>/*95:0*/ __Vtemp_h4a5f2725__0;
    VlWide<3>/*95:0*/ __Vtemp_h3c1c5b1e__0;
    VlWide<3>/*95:0*/ __Vtemp_he75a9def__0;
    VlWide<3>/*95:0*/ __Vtemp_hca049068__0;
    VlWide<3>/*95:0*/ __Vtemp_hfbe6b88c__0;
    VlWide<3>/*95:0*/ __Vtemp_h2add55d4__0;
    VlWide<3>/*95:0*/ __Vtemp_hdecd0269__0;
    VlWide<3>/*95:0*/ __Vtemp_h1c7a8128__0;
    VlWide<3>/*95:0*/ __Vtemp_hea6dfc2d__0;
    VlWide<3>/*95:0*/ __Vtemp_h200ed2dd__0;
    VlWide<3>/*95:0*/ __Vtemp_h0988c3d3__0;
    VlWide<3>/*95:0*/ __Vtemp_h8182b9cb__0;
    VlWide<3>/*95:0*/ __Vtemp_h68610380__0;
    VlWide<3>/*95:0*/ __Vtemp_h4f174644__0;
    VlWide<3>/*95:0*/ __Vtemp_h407f1323__0;
    VlWide<3>/*95:0*/ __Vtemp_hb3c566b6__0;
    VlWide<3>/*95:0*/ __Vtemp_h77ea95e5__0;
    VlWide<3>/*95:0*/ __Vtemp_h5a18c187__0;
    VlWide<3>/*95:0*/ __Vtemp_h1d287f5b__0;
    VlWide<3>/*95:0*/ __Vtemp_h5b84dd6a__0;
    VlWide<3>/*95:0*/ __Vtemp_h611bdd3d__0;
    VlWide<3>/*95:0*/ __Vtemp_h99290ca8__0;
    VlWide<3>/*95:0*/ __Vtemp_h11e9e163__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf9ccb67__0;
    VlWide<3>/*95:0*/ __Vtemp_h947b8635__0;
    VlWide<3>/*95:0*/ __Vtemp_h09a9932b__0;
    VlWide<3>/*95:0*/ __Vtemp_h749ac494__0;
    VlWide<3>/*95:0*/ __Vtemp_hba333c8f__0;
    VlWide<3>/*95:0*/ __Vtemp_h745ea272__0;
    VlWide<3>/*95:0*/ __Vtemp_h2dc05632__0;
    VlWide<4>/*127:0*/ __Vtemp_h7327e145__0;
    VlWide<4>/*127:0*/ __Vtemp_h37effcab__0;
    VlWide<4>/*127:0*/ __Vtemp_h7327e145__1;
    VlWide<4>/*127:0*/ __Vtemp_h86bac936__0;
    VlWide<4>/*127:0*/ __Vtemp_h83348023__0;
    VlWide<3>/*95:0*/ __Vtemp_hb392f00c__0;
    VlWide<3>/*95:0*/ __Vtemp_h1c3c12da__0;
    VlWide<3>/*95:0*/ __Vtemp_h639defb9__0;
    VlWide<3>/*95:0*/ __Vtemp_h93a86e11__0;
    VlWide<3>/*95:0*/ __Vtemp_had1f2180__0;
    VlWide<3>/*95:0*/ __Vtemp_h5923fb71__0;
    VlWide<3>/*95:0*/ __Vtemp_hb211af6a__0;
    VlWide<3>/*95:0*/ __Vtemp_hf5d30da6__0;
    VlWide<3>/*95:0*/ __Vtemp_h654c7636__0;
    VlWide<4>/*127:0*/ __Vtemp_had6707be__0;
    VlWide<4>/*127:0*/ __Vtemp_ha430f412__0;
    VlWide<4>/*127:0*/ __Vtemp_had6707be__1;
    VlWide<4>/*127:0*/ __Vtemp_h414bcd53__0;
    VlWide<3>/*95:0*/ __Vtemp_h96914474__0;
    VlWide<3>/*95:0*/ __Vtemp_hf46ae2f3__0;
    VlWide<3>/*95:0*/ __Vtemp_h2e54db74__0;
    // Body
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->__VdfgTmp_h1d58ce79__0)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded 
        = ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h10656024__0) 
             & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg) 
                    >> 1U)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h765d7b6e__0))) 
            << 1U) | (IData)(vlSelf->__VdfgTmp_h1d58ce79__0));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_w_reg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_w_reg));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_start 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_start));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits 
        = ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sew))
            ? ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[2U] 
                         >> 8U)) | ((0x40U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[2U] 
                                              >> 9U)) 
                                    | ((0x20U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[2U] 
                                                 >> 0xaU)) 
                                       | ((0x10U & 
                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[2U] 
                                            >> 0xbU)) 
                                          | (0xfU & 
                                             (- (IData)(
                                                        (1U 
                                                         & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[1U] 
                                                            >> 7U)))))))))
            : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sew))
                ? ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[2U] 
                             >> 8U)) | ((0x40U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[2U] 
                                                  >> 9U)) 
                                        | ((0x20U & 
                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[1U] 
                                             >> 0x16U)) 
                                           | ((0x10U 
                                               & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[1U] 
                                                  >> 0x17U)) 
                                              | ((8U 
                                                  & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[1U] 
                                                     >> 4U)) 
                                                 | ((4U 
                                                     & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[1U] 
                                                        >> 5U)) 
                                                    | (3U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__result[0U] 
                                                                        >> 0x13U)))))))))))
                : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum16__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits8)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_mask 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_mask));
    if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__addr_start) {
        if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__whole_reg_ld) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__max_reg_out 
                = (7U & (((IData)(1U) << (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m)) 
                         - (IData)(1U)));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__max_off_out 
                = (0xffU & 0xffU);
        } else {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__max_reg_out 
                = (7U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem_msk)
                          ? 0U : ((0xaU >= ((IData)(0xbU) 
                                            - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m)))
                                   ? (7U & ((0x7ffU 
                                             & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                                - (IData)(1U))) 
                                            >> ((IData)(0xbU) 
                                                - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m))))
                                   : 0U)));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__max_off_out 
                = (0xffU & (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem_msk)
                                      ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_h1136b675__0)
                                          ? 0x1fU : 
                                         ((0x1fU >= 
                                           ((IData)(6U) 
                                            - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m)))
                                           ? ((0x7ffU 
                                               & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                                  - (IData)(1U))) 
                                              >> ((IData)(6U) 
                                                  - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m)))
                                           : 0U)) : 
                                     ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_h1136b675__0)
                                       ? 0xffU : ((0x1fU 
                                                   >= 
                                                   ((IData)(3U) 
                                                    - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m)))
                                                   ? 
                                                  ((0x7ffU 
                                                    & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                                       - (IData)(1U))) 
                                                   >> 
                                                   ((IData)(3U) 
                                                    - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_m)))
                                                   : 0U)))));
        }
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__base_reg_out 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__max_reg_out 
            = (7U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__max_reg));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__max_off_out 
            = (0xffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__max_off));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__base_reg_out 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__base_reg;
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__curr_off_out 
        = (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__addr_start)) 
            & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__state_next) 
               & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT____VdfgTmp_h79cacbbc__0)))
            ? (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__curr_off) 
                        + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT____VdfgTmp_h79cacbbc__0)))
            : 0U);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__curr_reg_out 
        = (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__addr_start)) 
            & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__state_next))
            ? (7U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__curr_reg) 
                     + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT____VdfgTmp_h8e9ef457__0) 
                        & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT____VdfgTmp_h43d852dd__0))))
            : 0U);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s4_end 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s4_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s3_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s4_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s3_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s3_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s4_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s4_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_idle_wr 
        = (1U & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_narrow) 
                  & ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vd)) 
                     & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__state)))) 
                 | ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_narrow)) 
                    & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__state_next)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__curr_reg_out 
        = (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__addr_start)) 
            & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__state_next))
            ? (7U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__curr_reg) 
                     + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT____VdfgTmp_h8e9ef457__0) 
                        & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT____VdfgTmp_h43d852dd__0) 
                           & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT____VdfgTmp_h2306eb48__0))))
            : 0U);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__curr_off_out 
        = (0xffU & (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__addr_start)) 
                     & ((((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_narrow)) 
                          & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__state_next)) 
                         | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__state) 
                            & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_narrow))) 
                        & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT____VdfgTmp_h79cacbbc__0) 
                           | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_narrow))))
                     ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__curr_off) 
                        + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT____VdfgTmp_h79cacbbc__0) 
                           & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT____VdfgTmp_h2306eb48__0))
                     : ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__addr_start)
                         ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_off_out)
                         : 0U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s4_sca 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_sca));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_narrow 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s3_narrow));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s4_opSel 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s3_opSel));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_lop_sum 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_lop_sum));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_end 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_32 
        = (((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outVec 
                     >> 0x20U)) << 0x10U) | (0xffffU 
                                             & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outVec)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__narrow__DOT__vNarrow_0__DOT__s0_16 
        = (((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outVec 
                     >> 0x30U)) << 0x18U) | ((0xff0000U 
                                              & ((IData)(
                                                         (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outVec 
                                                          >> 0x20U)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & ((IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outVec 
                                                             >> 0x10U)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_outVec)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_d0[0U] = 0U;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_d0[1U] = 0U;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_d0[2U] = 0U;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_d0[3U] = 0U;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_d0[4U] = 0U;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_lsb 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s3_lsb));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_in_data 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__state_next)
            ? vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rdata_reg
            : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_out);
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_found 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT____Vcellinp__vFirst_bit0__in_valid)
                ? (1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b7 
            = (1U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult8_b0);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b6 
            = (1U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult8_b1);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b1 
            = (1U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult8_b2);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b0 
            = (1U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult8_b3);
    }
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s0_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s4_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s4_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s4_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_valid = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s1_end = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s2_end = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s3_end = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s4_end = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_base = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_sumOut = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop64__out_vec = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_out_vec = 0ULL;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_valid = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_valid = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_start_idx = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_avg = 0U;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_out_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_mask = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s4_result = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b5 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b4 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h2 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h3 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b3 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b2 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w1[0U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w1[1U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w1[2U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w0[0U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w0[1U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w0[2U] = 0U;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_out_addr 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vID_en)
                ? (0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_out_addr 
            = ((- (IData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMerge_en))) 
               & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_out_addr 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_en)
                ? (0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_out_addr 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____Vcellinp__red__DOT__vRed0__in_valid)
                ? (0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s0_out_addr 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_en)
                ? (0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_out_addr 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_en)
                ? (0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_out_addr 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_en)
                ? (0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_out_addr 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_en)
                ? (0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_out_addr 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_out_addr;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_sew 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_sew;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_be 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_be;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s4_out_vec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s3_out_vec;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s4_out_vec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_out_vec;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s4_out_vec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s3_out_vec;
        if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT____Vcellinp__vFirst_bit0__in_valid) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx 
                = (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_base 
                = (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_start_idx));
        } else {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx = 0U;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_base = 0U;
        }
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_valid 
            = (((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_en) 
                  | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_end)) 
                 | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s1_end)) 
                | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s2_end)) 
               | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s3_end));
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s2_end 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s1_end;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s3_end 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s2_end;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s4_end 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s3_end;
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s1_end 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_end;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_sumOut 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_valid)
                ? ((4U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel))
                    ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__minMax_result
                    : (((QData)((IData)((0xffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                                  >> 7U)))) 
                        << 0x38U) | (((QData)((IData)(
                                                      (0xffU 
                                                       & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                                           << 3U) 
                                                          | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                                             >> 0x1dU))))) 
                                      << 0x30U) | (
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                                                        >> 0x13U)))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                                                           >> 9U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((0xff000000U 
                                                                          & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                                                              << 0x19U) 
                                                                             | (0x1000000U 
                                                                                & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                                                >> 7U)))) 
                                                                         | ((0xff0000U 
                                                                             & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                                                >> 5U)) 
                                                                            | ((0xff00U 
                                                                                & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                                                >> 3U)) 
                                                                               | (0xffU 
                                                                                & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                                                >> 1U))))))))))))
                : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop64__out_vec 
            = (IData)(((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel))
                        ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel))
                            ? (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__lop64__DOT____VdfgTmp_h6e386e6f__0 
                               ^ (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop8__out_vec)))
                            : (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__lop64__DOT____VdfgTmp_h6e386e6f__0 
                               | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop8__out_vec))))
                        : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel))
                            ? (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__lop64__DOT____VdfgTmp_h6e386e6f__0 
                               & (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop8__out_vec)))
                            : 0ULL)));
        if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_mask) {
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_vec 
                = (((0U == (7U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_start_idx))) 
                    | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_req_end))
                    ? (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_out_vec 
                       << (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_start_idx))
                    : ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_out_vec 
                        << (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_start_idx)) 
                       | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_vec));
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_be 
                = (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_req_start)
                             ? 1U : (((0U == (7U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_start_idx))) 
                                      | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_req_end))
                                      ? ((0xfeU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_be) 
                                                   << 1U)) 
                                         | (1U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_be) 
                                                  >> 7U)))
                                      : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_be))));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_mask = 1U;
        } else {
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_vec 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_out_vec;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_be 
                = (0xffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_out_be));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_mask = 0U;
        }
        if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_avg) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_avg = 1U;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_out_vec = 0ULL;
        } else {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_avg = 0U;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_out_vec 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_vec;
        }
        if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_valid) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_valid = 1U;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_start_idx 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_start_idx;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_out_be 
                = (0xffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_be));
        } else {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_valid = 0U;
            vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_start_idx 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_start_idx;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s4_out_be = 0U;
        }
        vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_valid 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_valid) 
               & (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_mask)) 
                   | (0U == (7U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_start_idx)))) 
                  | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_req_end)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s4_result 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_opSel)
                ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_down_result
                : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_up_result);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_sew 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s3_sew;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b5 
            = (1U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult8_b2);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b4 
            = (1U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult8_b3);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h2 
            = (0x1ffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult16_p1);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h3 
            = (0x1ffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult16_p0);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h0 
            = (0x1ffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult16_p1);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b3 
            = (1U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult8_b0);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_b2 
            = (1U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult8_b1);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_h1 
            = (0x1ffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult16_p0);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w1[0U] 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_mult32[0U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w1[1U] 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_mult32[1U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w1[2U] 
            = (1U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_mult32[2U]);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w0[0U] 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_mult32[0U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w0[1U] 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_mult32[1U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s4_w0[2U] 
            = (1U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_mult32[2U]);
    }
    if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__addr_start) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__max_reg_out 
            = (7U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_out_w_reg)
                      ? (((IData)(1U) << (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_resp_sew)) 
                         - (IData)(1U)) : ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_mask_out)
                                            ? 0U : 
                                           ((0xaU >= 
                                             ((IData)(0xbU) 
                                              - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_resp_sew)))
                                             ? (7U 
                                                & ((0x7ffU 
                                                    & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                                       - (IData)(1U))) 
                                                   >> 
                                                   ((IData)(0xbU) 
                                                    - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_resp_sew))))
                                             : 0U))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__base_reg_out 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__max_reg_out 
            = (7U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__max_reg));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__base_reg_out 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__base_reg;
    }
    if ((1U & (~ VL_ONEHOT0_I(((2U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed) 
                                      >> 5U)) | (1U 
                                                 & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed) 
                                                    >> 1U))))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: decode_and_issue.sv:612: Assertion failed in %Ncva5_sim.cpu.decode_and_issue_block.gen_decode_exceptions: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/mnt/c/D/cva5pr/cva5/core/decode_and_issue.sv", 612, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_start_idx 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_en)
                ? (0x3ffU & (((9U >= ((IData)(3U) - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                               ? (0x3ffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx) 
                                            << ((IData)(3U) 
                                                - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))))
                               : 0U) << 6U)) : 0U);
    }
    if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__state_next) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_in_en 
            = (0xffU & (- (IData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__state_next))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_in_addr 
            = (0x1fU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__base_reg_out) 
                        + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__curr_reg_out)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_in_off 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__curr_off_out;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_in_en 
            = (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_idle_wr)
                         ? 0U : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_be_out)));
        if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_mask_out) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_in_addr 
                = (0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_in_off 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_off_out;
        } else {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_in_addr 
                = (0x1fU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__base_reg_out) 
                            + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__curr_reg_out)));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_in_off 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__curr_off_out;
        }
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_exception_unit 
        = ((2U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed))
            ? 0U : ((0x40U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed))
                     ? 1U : 2U));
    if (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__illegal_instruction_pattern) {
        vlSelf->cva5_sim__DOT__cpu__DOT__decode_exception_unit = 2U;
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_next_mux[0U] 
        = ((0x7eU & vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_next_mux
            [0U]) | (1U & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__issue_fifo_inputs[0U] 
        = ((0x1ffU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__issue_fifo_inputs[0U]) 
           | (((IData)((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend)) 
                         << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor)))) 
               << 0x17U) | ((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_is_zero)
                               ? 0U : (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_CLZ)) 
                             << 0x12U) | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_CLZ) 
                                           << 0xdU) 
                                          | ((0x1000U 
                                              & (vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[0U] 
                                                 << 0xaU)) 
                                             | ((0x800U 
                                                 & (((4U 
                                                      & vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[0U])
                                                      ? (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_remainder)
                                                      : 
                                                     ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_is_zero)) 
                                                      & ((~ 
                                                          (vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[0U] 
                                                           >> 1U)) 
                                                         & ((vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[2U] 
                                                             ^ 
                                                             vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[1U]) 
                                                            >> 2U)))) 
                                                    << 0xbU)) 
                                                | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_is_zero) 
                                                    << 0xaU) 
                                                   | (0x200U 
                                                      & (vlSelf->cva5_sim__DOT__cpu__DOT__div_inputs[0U] 
                                                         << 9U)))))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__issue_fifo_inputs[1U] 
        = ((0x1ffU & (((IData)((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor)))) 
                       >> 9U) | ((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_is_zero)
                                    ? 0U : (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__dividend_CLZ)) 
                                  >> 0xeU) | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_CLZ) 
                                               >> 0x13U) 
                                              | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__divisor_is_zero) 
                                                 >> 0x16U))))) 
           | ((0x7ffe00U & ((IData)((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor)))) 
                            >> 9U)) | ((IData)(((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor))) 
                                                >> 0x20U)) 
                                       << 0x17U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__issue_fifo_inputs[2U] 
        = (0x7fffffU & ((0x1ffU & ((IData)(((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor))) 
                                            >> 0x20U)) 
                                   >> 9U)) | (0x7ffe00U 
                                              & ((IData)(
                                                         ((((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_dividend)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__unsigned_divisor))) 
                                                          >> 0x20U)) 
                                                 >> 9U))));
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet[0U] 
        = ((0x3ff00000000ULL & vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
            [0U]) | (IData)((IData)(((5U >= vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                                      [0U]) ? vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_rd
                                     [0U][vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                                     [0U]] : 0U))));
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet[1U] 
        = ((0x3ff00000000ULL & vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
            [1U]) | (IData)((IData)(((5U >= vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                                      [1U]) ? vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_rd
                                     [1U][vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                                     [1U]] : 0U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken 
        = (1U & ((1U & (((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT____VdfgTmp_h70d9846b__0) 
                           << 1U) | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__carry_in)) 
                         + ((((0x20000000U & vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[1U])
                               ? (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b)
                               : 0U) << 1U) | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__carry_in))) 
                        >> 0x10U)) | (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[0U] 
                                      >> 0x17U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__target_update_way 
        = ((- (IData)((1U & ((~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__branch_metadata_ex) 
                                 >> 2U)) | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__branch_metadata_ex) 
                                             >> 4U) 
                                            ^ (vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__ex_entry 
                                               >> 1U)))))) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_update_way));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT____Vcellinp__lsq_addr_hash__rst 
        = (1U & ((IData)(vlSelf->rst) | (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                                         >> 0xcU)));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__renamer_block__DOT__free_list.potential_push 
        = (1U & (((vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                   >> 0x12U) & (~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__clear_index) 
                                   >> 5U))) | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__retire) 
                                               >> 5U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__gen_decode_exceptions__DOT__new_exception 
        = ((vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
            >> 6U) & ((~ (IData)((0U != (0x18000U & 
                                         vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U])))) 
                      & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__pre_issue_exception_pending)));
    vlSelf->cva5_sim__DOT__cpu__DOT__ras_block__DOT____Vcellinp__read_index_fifo__rst 
        = (1U & ((IData)(vlSelf->rst) | ((vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                                          >> 0xfU) 
                                         | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT____VdfgTmp_hb5b8037a__0) 
                                            & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_branch_corruption_check__DOT__is_branch_or_jump)) 
                                               & ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out) 
                                                  >> 3U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT____VdfgTmp_h7908b698__0 
        = (1U & ((vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                  >> 0xfU) | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__early_branch_flush)));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__pc_mux[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gc[0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__new_mem_request 
        = (1U & (((((~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__inflight_count) 
                        >> 3U)) & (~ (IData)((2U == (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__attributes_fifo__DOT__gen_width_two__DOT__inflight_count))))) 
                   & (~ (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__input_fifo.full))) 
                  & (~ (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                        >> 0x11U))) & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__exception_pending))));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__rollback 
        = ((vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
            >> 0xfU) & (IData)(((0x2040U == (0x2040U 
                                             & vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U])) 
                                & (0U != (0x1fU & (
                                                   vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                   >> 0x14U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____VdfgTmp_h58444fa9__0 
        = (IData)((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__retire) 
                    >> 5U) & (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                              >> 0xeU)));
    vlSelf->store_queue_empty = (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_status) 
                                       >> 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_load_issue 
        = (((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_valid) 
            & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_ready)) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_address_match));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_store_issue 
        = ((((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.valid) 
             & (~ (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_valid))) 
            & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_ready)) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_address_match));
    vlSymsp->TOP__cva5_sim__DOT__arb__DOT__request_fifo.pop 
        = (((IData)(vlSymsp->TOP__cva5_sim__DOT__axi.arvalid) 
            & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg)) 
           | (IData)(vlSelf->cva5_sim__DOT__arb__DOT__write_pop));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next = 0U;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 1U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 1U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 1U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 2U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 2U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 2U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 3U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 3U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 3U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 4U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 4U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 4U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 5U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 5U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 5U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 6U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 6U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 6U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 7U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 7U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 7U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 8U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 8U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 8U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 9U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 9U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 9U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0xaU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0xaU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0xaU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0xbU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0xbU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0xbU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0xcU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0xcU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0xcU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0xdU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0xdU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0xdU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0xeU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0xeU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0xeU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0xfU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0xfU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0xfU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x10U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x10U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x10U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x11U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x11U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x11U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x12U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x12U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x12U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x13U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x13U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x13U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x14U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x14U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x14U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x15U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x15U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x15U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x16U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x16U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x16U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x17U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x17U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x17U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x18U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x18U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x18U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x19U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x19U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x19U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x1aU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x1aU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x1aU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x1bU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x1bU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x1bU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x1cU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x1cU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x1cU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x1dU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x1dU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x1dU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x1eU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x1eU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x1eU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x1fU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x1fU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x1fU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x20U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x20U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x20U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x21U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x21U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x21U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x22U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x22U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x22U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x23U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x23U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x23U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x24U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x24U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x24U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x25U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x25U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x25U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x26U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x26U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x26U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x27U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x27U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x27U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x28U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x28U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x28U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x29U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x29U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x29U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x2aU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x2aU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x2aU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x2bU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x2bU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x2bU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x2cU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x2cU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x2cU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x2dU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x2dU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x2dU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x2eU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x2eU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x2eU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x2fU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x2fU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x2fU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x30U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x30U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x30U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x31U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x31U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x31U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x32U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x32U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x32U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x33U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x33U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x33U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x34U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x34U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x34U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x35U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x35U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x35U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x36U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x36U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x36U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x37U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x37U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x37U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x38U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x38U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x38U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x39U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x39U : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x39U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x3aU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x3aU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x3aU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x3bU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x3bU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x3bU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x3cU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x3cU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x3cU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x3dU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x3dU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x3dU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                           >> 0x3eU)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x3eU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (1U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                          >> 0x3eU)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next 
        = ((IData)(((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                     >> 0x3fU) & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt))))
            ? 0x3fU : (0x3ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_idx_next)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt 
        = (IData)(((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_mask 
                    >> 0x3fU) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__found_one_nxt)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s1_end 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s1_end;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s2_end 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s2_end;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s3_end 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s3_end;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_vec 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_vec;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_valid 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_valid;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_start_idx 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_start_idx;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_be 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_out_be;
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_ack[0U] 
        = (0x3fU & ((1U & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
                                   [0U] >> 0x20U))) 
                    << vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                    [0U]));
    __Vtemp_hadc405ac__0[0U] = 0x43042044U;
    __Vtemp_hadc405ac__0[1U] = 0x20440420U;
    __Vtemp_hadc405ac__0[2U] = 0x4204304U;
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_ack[1U] 
        = (0x3fU & ((1U & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
                                   [1U] >> 0x20U))) 
                    << ((0x5fU >= (0x7fU & ((IData)(3U) 
                                            * (0x1fU 
                                               & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                               [1U]))))
                         ? (7U & (((0U == (0x1fU & 
                                           ((IData)(3U) 
                                            * (0x1fU 
                                               & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                               [1U]))))
                                    ? 0U : (__Vtemp_hadc405ac__0[
                                            (((IData)(2U) 
                                              + (0x7fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (0x1fU 
                                                     & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                                     [1U])))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (0x1fU 
                                                       & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                                       [1U])))))) 
                                  | (__Vtemp_hadc405ac__0[
                                     (3U & (((IData)(3U) 
                                             * (0x1fU 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                                [1U])) 
                                            >> 5U))] 
                                     >> (0x1fU & ((IData)(3U) 
                                                  * 
                                                  (0x1fU 
                                                   & vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_done
                                                   [1U]))))))
                         : 0U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__wb_packet[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__wb_packet[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__new_pc 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken)
            ? (((0x1000000U & vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[0U])
                 ? ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U] 
                     << 1U) | (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                               >> 0x1fU)) : ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[1U] 
                                              << 5U) 
                                             | (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[0U] 
                                                >> 0x1bU))) 
               + VL_EXTENDS_II(32,21, (0x1fffffU & 
                                       vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[0U])))
            : ((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[2U] 
                << 2U) | (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[1U] 
                          >> 0x1eU)));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__next_pc 
        = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__pc_mux
        [(3U & (0x12131213U >> (0x1fU & (0x10U | ((
                                                   ((0U 
                                                     != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_matches)) 
                                                    & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__early_branch_flush))) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_flush) 
                                                      << 2U) 
                                                     | (2U 
                                                        & (vlSelf->cva5_sim__DOT__cpu__DOT__gc[1U] 
                                                           << 1U))))))))];
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__update_pc 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__new_mem_request) 
           | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT____VdfgTmp_h7908b698__0));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__ras.branch_fetched 
        = ((((0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_matches)) 
             & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__bp.is_branch)) 
            & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__new_mem_request)) 
           & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__early_branch_flush)));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__ras.push 
        = ((((((0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_matches)) 
               & ((0x2bU >= ((IData)(2U) + (0x3fU & 
                                            ((IData)(0x16U) 
                                             * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__hit_way))))) 
                  & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__if_entry 
                             >> ((IData)(2U) + (0x3fU 
                                                & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__hit_way)))))))) 
              & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_flush))) 
             & (~ vlSelf->cva5_sim__DOT__cpu__DOT__gc[1U])) 
            & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__new_mem_request)) 
           & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__early_branch_flush)));
    vlSelf->cva5_sim__DOT__cpu__DOT__pc_id_assigned 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__new_mem_request) 
           | (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__itlb.is_fault));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellinp__spec_table_sel_one_hot_to_int__one_hot 
        = ((8U & (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                  >> 0xfU)) | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__rollback) 
                                << 2U) | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____VdfgTmp_h58444fa9__0) 
                                          << 1U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_load_request 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_address_match) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_load_issue));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_store_request 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_address_match) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_store_issue));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__issued_one_hot 
        = (0xfU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_store_issue) 
                   << (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_oldest)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__mask_next 
        = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))))) {
        if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__mask_next 
                = (3U & ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))
                          ? ((1U >= ((IData)(1U) + 
                                     (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))))
                              ? ((IData)(3U) << ((IData)(1U) 
                                                 + 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))))
                              : 0U) : ((1U >= ((IData)(1U) 
                                               + (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h1d58ce79__0)))))
                                        ? ((IData)(3U) 
                                           << ((IData)(1U) 
                                               + (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h1d58ce79__0)))))
                                        : 0U)));
        }
    }
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_reg) 
         & (~ (IData)((0U != ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg) 
                              & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_reg;
    } else if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_next = 1U;
        if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_next 
                = (3U & ((IData)(1U) << (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)))));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_next 
                = (1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded)));
        } else {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_next 
                = (3U & ((IData)(1U) << (1U & (~ (IData)(vlSelf->__VdfgTmp_h1d58ce79__0)))));
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_encoded_next 
                = (1U & (~ (IData)(vlSelf->__VdfgTmp_h1d58ce79__0)));
        }
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_w_reg 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMoveWhole_en) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_en)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_start 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_start) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_mask 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_en) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMOP_en)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s3_end 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s3_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s2_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s3_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s2_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s3_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s2_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_sca 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_sca));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s3_narrow 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s2_narrow));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s3_opSel 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s2_opSel));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT____Vcellinp__vFirst_bit0__in_valid 
        = ((~ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__found) 
               | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__vFirst_bit0__DOT__s0_found))) 
           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_end 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_end) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_en)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_lop_sum 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_lop_sum));
    if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_start) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_vec1;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__lop64__DOT____VdfgTmp_h6e386e6f__0 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_vec1;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_sumOut;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__lop64__DOT____VdfgTmp_h6e386e6f__0 
            = (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop64__out_vec));
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_valid));
    __Vtableidx2 = (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_sew) 
                     << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s4_be 
        = Vcva5_sim__ConstPool__TABLE_h584c977e_0[__Vtableidx2];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_end 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_avg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_avg));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_valid));
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_out_off = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_off = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_out_addr = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s3_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s3_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop8__out_vec = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s3_req_end = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_out_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_mask = 0U;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_out_off 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_out_off;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_off 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_off;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_out_addr 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable)
                ? (0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_sew 
            = (3U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_en)
                      ? ((IData)(1U) + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))
                      : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_be 
            = ((((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable) 
                   & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_en))) 
                  & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMCmp_en))) 
                 & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRedAndOrXor_en))) 
                & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRedSum_min_max_en)))
                ? (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_en)
                             ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__turn)
                                 ? ((0xc0U & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_be) 
                                                             >> 7U)))) 
                                              << 6U)) 
                                    | ((0x30U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_be) 
                                                                >> 6U)))) 
                                                 << 4U)) 
                                       | ((0xcU & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_be) 
                                                                  >> 5U)))) 
                                                   << 2U)) 
                                          | (3U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_be) 
                                                                 >> 4U))))))))
                                 : ((0xc0U & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_be) 
                                                             >> 3U)))) 
                                              << 6U)) 
                                    | ((0x30U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_be) 
                                                                >> 2U)))) 
                                                 << 4U)) 
                                       | ((0xcU & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_be) 
                                                                  >> 1U)))) 
                                                   << 2U)) 
                                          | (3U & (- (IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_be)))))))))
                             : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_be)))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s3_out_vec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s2_out_vec;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s3_out_vec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_out_vec;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s3_out_vec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s2_out_vec;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_opSel;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop8__out_vec 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellinp__lop8__in_en)
                ? ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_opSel))
                    ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_opSel))
                        ? ((0xffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop16__out_vec) 
                           ^ (0xffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop16__out_vec 
                                       >> 8U))) : (0xffU 
                                                   & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop16__out_vec 
                                                      | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop16__out_vec 
                                                         >> 8U))))
                    : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_opSel))
                        ? (0xffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop16__out_vec 
                                    & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop16__out_vec 
                                       >> 8U))) : 0U))
                : (0xffffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop16__out_vec));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_out_be 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_out_be;
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_mask 
        = (IData)((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_opSel) 
                    >> 8U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_carry_res)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_req_end 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_req_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_req_start 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_req_start));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_opSel 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_opSel));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s3_lsb 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s2_lsb));
    __Vtemp_h343d6c4f__0[0U] = 0U;
    __Vtemp_h343d6c4f__0[1U] = (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a0_b0);
    __Vtemp_h343d6c4f__0[2U] = (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a0_b0 
                                        >> 0x20U));
    VL_EXTEND_WW(66,65, __Vtemp_h51e8aeba__0, __Vtemp_h343d6c4f__0);
    __Vtemp_hcddc97b4__0[0U] = (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a0_b1 
                                        << 0x10U));
    __Vtemp_hcddc97b4__0[1U] = (((- (IData)((1U & (IData)(
                                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a0_b1 
                                                           >> 0x20U))))) 
                                 << 0x11U) | (IData)(
                                                     ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a0_b1 
                                                       << 0x10U) 
                                                      >> 0x20U)));
    __Vtemp_hcddc97b4__0[2U] = (1U & ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a0_b1 
                                                             >> 0x20U))))) 
                                      >> 0xfU));
    VL_EXTEND_WW(66,65, __Vtemp_h4a5f2725__0, __Vtemp_hcddc97b4__0);
    __Vtemp_h3c1c5b1e__0[0U] = (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a1_b0 
                                        << 0x10U));
    __Vtemp_h3c1c5b1e__0[1U] = (((- (IData)((1U & (IData)(
                                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a1_b0 
                                                           >> 0x20U))))) 
                                 << 0x11U) | (IData)(
                                                     ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a1_b0 
                                                       << 0x10U) 
                                                      >> 0x20U)));
    __Vtemp_h3c1c5b1e__0[2U] = (1U & ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a1_b0 
                                                             >> 0x20U))))) 
                                      >> 0xfU));
    VL_EXTEND_WW(66,65, __Vtemp_he75a9def__0, __Vtemp_h3c1c5b1e__0);
    __Vtemp_hca049068__0[0U] = (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a1_b1);
    __Vtemp_hca049068__0[1U] = (((- (IData)((1U & (IData)(
                                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a1_b1 
                                                           >> 0x20U))))) 
                                 << 1U) | (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a1_b1 
                                                   >> 0x20U)));
    __Vtemp_hca049068__0[2U] = ((- (IData)((1U & (IData)(
                                                         (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a1_b1 
                                                          >> 0x20U))))) 
                                >> 0x1fU);
    VL_EXTEND_WW(66,65, __Vtemp_hfbe6b88c__0, __Vtemp_hca049068__0);
    VL_ADD_W(3, __Vtemp_h2add55d4__0, __Vtemp_he75a9def__0, __Vtemp_hfbe6b88c__0);
    VL_ADD_W(3, __Vtemp_hdecd0269__0, __Vtemp_h4a5f2725__0, __Vtemp_h2add55d4__0);
    VL_ADD_W(3, __Vtemp_h1c7a8128__0, __Vtemp_h51e8aeba__0, __Vtemp_hdecd0269__0);
    __Vtemp_hea6dfc2d__0[0U] = __Vtemp_h1c7a8128__0[0U];
    __Vtemp_hea6dfc2d__0[1U] = __Vtemp_h1c7a8128__0[1U];
    __Vtemp_hea6dfc2d__0[2U] = (3U & __Vtemp_h1c7a8128__0[2U]);
    VL_EXTENDS_WW(67,66, __Vtemp_h200ed2dd__0, __Vtemp_hea6dfc2d__0);
    __Vtemp_h0988c3d3__0[0U] = 0U;
    __Vtemp_h0988c3d3__0[1U] = (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a0_b0);
    __Vtemp_h0988c3d3__0[2U] = (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a0_b0 
                                        >> 0x20U));
    VL_EXTEND_WW(66,65, __Vtemp_h8182b9cb__0, __Vtemp_h0988c3d3__0);
    __Vtemp_h68610380__0[0U] = (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a0_b1 
                                        << 0x10U));
    __Vtemp_h68610380__0[1U] = (((- (IData)((1U & (IData)(
                                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a0_b1 
                                                           >> 0x20U))))) 
                                 << 0x11U) | (IData)(
                                                     ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a0_b1 
                                                       << 0x10U) 
                                                      >> 0x20U)));
    __Vtemp_h68610380__0[2U] = (1U & ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a0_b1 
                                                             >> 0x20U))))) 
                                      >> 0xfU));
    VL_EXTEND_WW(66,65, __Vtemp_h4f174644__0, __Vtemp_h68610380__0);
    __Vtemp_h407f1323__0[0U] = (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a1_b0 
                                        << 0x10U));
    __Vtemp_h407f1323__0[1U] = (((- (IData)((1U & (IData)(
                                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a1_b0 
                                                           >> 0x20U))))) 
                                 << 0x11U) | (IData)(
                                                     ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a1_b0 
                                                       << 0x10U) 
                                                      >> 0x20U)));
    __Vtemp_h407f1323__0[2U] = (1U & ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a1_b0 
                                                             >> 0x20U))))) 
                                      >> 0xfU));
    VL_EXTEND_WW(66,65, __Vtemp_hb3c566b6__0, __Vtemp_h407f1323__0);
    __Vtemp_h77ea95e5__0[0U] = (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a1_b1);
    __Vtemp_h77ea95e5__0[1U] = (((- (IData)((1U & (IData)(
                                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a1_b1 
                                                           >> 0x20U))))) 
                                 << 1U) | (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a1_b1 
                                                   >> 0x20U)));
    __Vtemp_h77ea95e5__0[2U] = ((- (IData)((1U & (IData)(
                                                         (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a1_b1 
                                                          >> 0x20U))))) 
                                >> 0x1fU);
    VL_EXTEND_WW(66,65, __Vtemp_h5a18c187__0, __Vtemp_h77ea95e5__0);
    VL_ADD_W(3, __Vtemp_h1d287f5b__0, __Vtemp_hb3c566b6__0, __Vtemp_h5a18c187__0);
    VL_ADD_W(3, __Vtemp_h5b84dd6a__0, __Vtemp_h4f174644__0, __Vtemp_h1d287f5b__0);
    VL_ADD_W(3, __Vtemp_h611bdd3d__0, __Vtemp_h8182b9cb__0, __Vtemp_h5b84dd6a__0);
    __Vtemp_h99290ca8__0[0U] = __Vtemp_h611bdd3d__0[0U];
    __Vtemp_h99290ca8__0[1U] = __Vtemp_h611bdd3d__0[1U];
    __Vtemp_h99290ca8__0[2U] = (3U & __Vtemp_h611bdd3d__0[2U]);
    VL_EXTENDS_WW(67,66, __Vtemp_h11e9e163__0, __Vtemp_h99290ca8__0);
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.pop 
        = ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.valid) 
           & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__in_progress)) 
              | (vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_ack
                 [1U] >> 3U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_mul__DOT__mul_unit_block__DOT__stage2_advance 
        = (1U & ((~ vlSelf->cva5_sim__DOT__cpu__DOT__gen_mul__DOT__mul_unit_block__DOT__valid
                  [1U]) | (vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_ack
                           [1U] >> 2U)));
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__id_block__wb_packet[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__wb_packet
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__id_block__wb_packet[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__wb_packet
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__commit[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__wb_packet
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__commit[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__wb_packet
        [1U];
    __Vfunc_getHashedLineAddr__11__addr = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__next_pc;
    __Vfunc_getHashedLineAddr__11__Vfuncout = (0x1ffU 
                                               & ((__Vfunc_getHashedLineAddr__11__addr 
                                                   >> 2U) 
                                                  ^ 
                                                  (__Vfunc_getHashedLineAddr__11__addr 
                                                   >> 0xbU)));
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT____Vcellinp__genblk1__DOT__gen_branch_tag_banks__BRA__0__KET____DOT__tag_bank__read_addr 
        = __Vfunc_getHashedLineAddr__11__Vfuncout;
    __Vfunc_getHashedLineAddr__15__addr = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__next_pc;
    __Vfunc_getHashedLineAddr__15__Vfuncout = (0x1ffU 
                                               & (__Vfunc_getHashedLineAddr__15__addr 
                                                  >> 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT____Vcellinp__genblk1__DOT__gen_branch_tag_banks__BRA__1__KET____DOT__tag_bank__read_addr 
        = __Vfunc_getHashedLineAddr__15__Vfuncout;
    __Vfunc_getHashedLineAddr__19__addr = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__next_pc;
    __Vfunc_getHashedLineAddr__19__Vfuncout = (0x1ffU 
                                               & ((__Vfunc_getHashedLineAddr__19__addr 
                                                   >> 2U) 
                                                  ^ 
                                                  (__Vfunc_getHashedLineAddr__19__addr 
                                                   >> 0xbU)));
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT____Vcellinp__genblk2__DOT__gen_branch_table_banks__BRA__0__KET____DOT__addr_table__read_addr 
        = __Vfunc_getHashedLineAddr__19__Vfuncout;
    __Vfunc_getHashedLineAddr__23__addr = vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__next_pc;
    __Vfunc_getHashedLineAddr__23__Vfuncout = (0x1ffU 
                                               & (__Vfunc_getHashedLineAddr__23__addr 
                                                  >> 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT____Vcellinp__genblk2__DOT__gen_branch_table_banks__BRA__1__KET____DOT__addr_table__read_addr 
        = __Vfunc_getHashedLineAddr__23__Vfuncout;
    vlSelf->cva5_sim__DOT__cpu__DOT__ras_block__DOT__new_index 
        = (7U & ((((IData)(((vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                             >> 0xfU) & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__gen_width_3_plus__DOT__inflight_count) 
                                         >> 3U))) ? 
                   vlSelf->cva5_sim__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__gen_width_3_plus__DOT__write_port__DOT__ram
                   [vlSelf->cva5_sim__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__gen_width_3_plus__DOT__read_index]
                    : (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__ras_block__DOT__read_index)) 
                  + (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__ras.push)) 
                 - ((((((0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_matches)) 
                        & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__bp.is_return)) 
                       & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_flush))) 
                      & (~ vlSelf->cva5_sim__DOT__cpu__DOT__gc[1U])) 
                     & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__new_mem_request)) 
                    & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__early_branch_flush)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__inflight_count_next 
        = (3U & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__inflight_count) 
                  + (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__pc_id_assigned)) 
                 - (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__internal_fetch_complete)));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit__BRA__0__KET__.new_request 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__pc_id_assigned) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit_address_match));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_sel 
        = ((8U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellinp__spec_table_sel_one_hot_to_int__one_hot))
            ? 3U : 0U);
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_sel 
        = (3U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_sel) 
                 | ((4U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellinp__spec_table_sel_one_hot_to_int__one_hot))
                     ? 2U : 0U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_sel 
        = (3U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_sel) 
                 | ((2U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellinp__spec_table_sel_one_hot_to_int__one_hot))
                     ? 1U : 0U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_sel 
        = (3U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_sel) 
                 | ((1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellinp__spec_table_sel_one_hot_to_int__one_hot))
                     ? 0U : 0U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state_next 
        = ((0xeU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state_next)) 
           | (1U & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state) 
                     & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_load_request))) 
                    | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_tag_hit_way) 
                        & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_load_request))) 
                       | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__line_complete)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state_next 
        = ((0xdU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state_next)) 
           | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_load_request) 
              << 1U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state_next 
        = ((0xbU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state_next)) 
           | (4U & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state) 
                     & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_l1_arb_ack)) 
                        << 2U)) | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state) 
                                    << 1U) & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_tag_hit_way)) 
                                              << 2U)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state_next 
        = ((7U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state_next)) 
           | (8U & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state) 
                     & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__line_complete)) 
                        << 3U)) | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_state) 
                                    << 1U) & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_l1_arb_ack) 
                                              << 3U)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_tag_check 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__uncacheable_load)) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_load_request));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order.push 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_load_request) 
           | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_store_request));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__tag_banks__DOT____Vcellinp__tag_bank_gen__BRA__0__KET____DOT__dtag_bank__en_a 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_store_request) 
           | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_l1_arb_ack));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_state_next 
        = ((2U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_state_next)) 
           | (1U & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_state) 
                     & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_store_request))) 
                    | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_l1_arb_ack) 
                       & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_store_request))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_state_next 
        = ((1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_state_next)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_state) 
                                    & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_l1_arb_ack)) 
                                       << 1U))) | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_store_request) 
                                                   << 1U))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__dest_d;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__turn 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__turn;
    __Vtemp_hdf9ccb67__0[0U] = (IData)((0x802008000000000ULL 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sew) 
                                                                >> 1U)))) 
                                            << 0x3cU) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                           >> 0x28U))))) 
                                               << 0x33U) 
                                              | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1)) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                                >> 0x20U))))) 
                                                     << 0x29U) 
                                                    | (((QData)((IData)(
                                                                        (3U 
                                                                         == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sew)))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                                >> 0x18U))))) 
                                                           << 0x1fU) 
                                                          | (QData)((IData)(
                                                                            (0x20080200U 
                                                                             | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                                                                << 0x1eU) 
                                                                                | ((0x1fe00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                                >> 0x10U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sew) 
                                                                                << 0x13U)) 
                                                                                | ((0x7f800U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                                >> 8U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                                                                << 0xaU) 
                                                                                | (0x1feU 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0) 
                                                                                << 1U))))))))))))))))));
    __Vtemp_hdf9ccb67__0[1U] = (((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                          >> 0x30U)) 
                                 << 0x1dU) | (IData)(
                                                     ((0x802008000000000ULL 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sew) 
                                                                               >> 1U)))) 
                                                           << 0x3cU) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                                >> 0x28U))))) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1)) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                                >> 0x20U))))) 
                                                                    << 0x29U) 
                                                                   | (((QData)((IData)(
                                                                                (3U 
                                                                                == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sew)))) 
                                                                       << 0x28U) 
                                                                      | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                                >> 0x18U))))) 
                                                                          << 0x1fU) 
                                                                         | (QData)((IData)(
                                                                                (0x20080200U 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                                                                << 0x1eU) 
                                                                                | ((0x1fe00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                                >> 0x10U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sew) 
                                                                                << 0x13U)) 
                                                                                | ((0x7f800U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                                >> 8U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                                                                << 0xaU) 
                                                                                | (0x1feU 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0) 
                                                                                << 1U))))))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h947b8635__0[0U] = __Vtemp_hdf9ccb67__0[0U];
    __Vtemp_h947b8635__0[1U] = __Vtemp_hdf9ccb67__0[1U];
    __Vtemp_h947b8635__0[2U] = (0x8020U | ((0x7f80U 
                                            & ((IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                        >> 0x38U)) 
                                               << 7U)) 
                                           | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                               << 6U) 
                                              | (0x1fU 
                                                 & ((IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                             >> 0x30U)) 
                                                    >> 3U)))));
    __Vtemp_h09a9932b__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                     >> 0x28U))))) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                        >> 0x20U))))) 
                                            << 0x29U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                           >> 0x18U))))) 
                                               << 0x1fU) 
                                              | (QData)((IData)(
                                                                ((0x1fe00000U 
                                                                  & ((IData)(
                                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                              >> 0x10U)) 
                                                                     << 0x15U)) 
                                                                 | ((0x7f800U 
                                                                     & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                                >> 8U)) 
                                                                        << 0xbU)) 
                                                                    | (0x1feU 
                                                                       & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut) 
                                                                          << 1U))))))))));
    __Vtemp_h09a9932b__0[1U] = (((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                          >> 0x30U)) 
                                 << 0x1dU) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                                >> 0x28U))))) 
                                                        << 0x33U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                                >> 0x20U))))) 
                                                           << 0x29U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                                >> 0x18U))))) 
                                                              << 0x1fU) 
                                                             | (QData)((IData)(
                                                                               ((0x1fe00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                                >> 0x10U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x7f800U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                                >> 8U)) 
                                                                                << 0xbU)) 
                                                                                | (0x1feU 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut) 
                                                                                << 1U))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h09a9932b__0[2U] = (0x1fU & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                  >> 0x30U)) 
                                         >> 3U));
    VL_EXTEND_WW(71,69, __Vtemp_h749ac494__0, __Vtemp_h09a9932b__0);
    __Vtemp_hba333c8f__0[0U] = __Vtemp_h749ac494__0[0U];
    __Vtemp_hba333c8f__0[1U] = __Vtemp_h749ac494__0[1U];
    __Vtemp_hba333c8f__0[2U] = ((0x7f80U & ((IData)(
                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                     >> 0x38U)) 
                                            << 7U)) 
                                | __Vtemp_h749ac494__0[2U]);
    VL_EXTEND_WW(81,79, __Vtemp_h745ea272__0, __Vtemp_hba333c8f__0);
    VL_ADD_W(3, __Vtemp_h2dc05632__0, __Vtemp_h947b8635__0, __Vtemp_h745ea272__0);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
        = __Vtemp_h2dc05632__0[0U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
        = __Vtemp_h2dc05632__0[1U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
        = (0x1ffffU & __Vtemp_h2dc05632__0[2U]);
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__div_core.start 
        = ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.pop) 
           & (~ (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo.data_out[0U] 
                 >> 9U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_mul__DOT__mul_unit_block__DOT__stage1_advance 
        = (1U & ((~ vlSelf->cva5_sim__DOT__cpu__DOT__gen_mul__DOT__mul_unit_block__DOT__valid
                  [0U]) | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_mul__DOT__mul_unit_block__DOT__stage2_advance)));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellinp__id_waiting_for_writeback_toggle_mem_set__toggle[1U] 
        = (1U & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__id_block__wb_packet
                         [1U] >> 0x20U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellinp__id_waiting_for_writeback_toggle_mem_set__toggle_addr[1U] 
        = (7U & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__id_block__wb_packet
                         [1U] >> 0x27U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__toggle[2U] 
        = ((IData)((vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__commit
                    [1U] >> 0x20U)) & (0U != (0x3fU 
                                              & (IData)(
                                                        (vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__commit
                                                         [1U] 
                                                         >> 0x21U)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__toggle_addr[2U] 
        = (0x3fU & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__commit
                            [1U] >> 0x21U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__new_request 
        = (1U & (((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit__BRA__0__KET__.new_request) 
                  | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__cache_input_fifo__DOT__gen_width_two__DOT__inflight_count) 
                     >> 1U)) & (((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__request_in_progress)) 
                                 | (0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__tag_hit_way))) 
                                & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__linefill_in_progress)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_read_addr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_write_index_mux
        [vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_sel];
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT____Vcellinp__data_bank_gen__BRA__0__KET____DOT__data_bank__en_a 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_tag_check) 
           | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__replacement_way_r) 
              & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__0__KET__.data_valid)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s2_end 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s2_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s1_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s2_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s1_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s2_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s1_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_sca 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_sca));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s2_narrow 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s1_narrow));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s2_opSel 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s1_opSel));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_lop_sum 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_lop_sum));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc1104ac1__0 
        = (IData)(((0U == (0x3fe00000U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U])) 
                   & (0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                        << 1U) | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                  >> 0x1fU))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0 
        = (IData)((0U == (0xffbfeU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U])));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits8 
        = ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                     >> 8U)) | ((0x40U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                          << 1U)) | 
                                ((0x20U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                           >> 0x16U)) 
                                 | ((0x10U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                              >> 0xdU)) 
                                    | ((8U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                              >> 4U)) 
                                       | ((4U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                 >> 0x1bU)) 
                                          | ((2U & 
                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                               >> 0x12U)) 
                                             | (1U 
                                                & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                   >> 9U)))))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc48585f5__0 
        = (IData)(((0U == (0xff80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U])) 
                   & (0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                        << 3U) | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                                  >> 0x1dU))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hf73ed51b__0 
        = (IData)((0U == (0xffbfe00U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U])));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_end 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_avg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_avg));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_req_end 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_req_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_req_start 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_req_start));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_opSel 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_opSel));
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_start_idx = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_up_result = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_down_result = 0ULL;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s2_out_vec 
            = ((0x100U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_opSel))
                ? ((0x80U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_opSel))
                    ? ((0x40U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_opSel))
                        ? (~ ((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_equal)) 
                              | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_lt))))
                        : ((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_equal)) 
                           | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_lt))))
                    : ((0x40U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_opSel))
                        ? (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_lt))
                        : ((0x20U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_opSel))
                            ? (~ (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_equal)))
                            : (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_equal)))))
                : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_out_vec);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_start_idx 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_start_idx;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_up_result 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_up_result;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s3_down_result 
            = (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_down_result 
               | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_end)
                   ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_down_vec1_end
                   : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_remainder));
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_end 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s2_lsb 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s1_lsb));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___toggle_addr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellinp__id_waiting_for_writeback_toggle_mem_set__toggle_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___toggle_addr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellinp__id_waiting_for_writeback_toggle_mem_set__toggle_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___toggle_addr[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__clear_index;
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___toggle_addr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__toggle_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___toggle_addr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__toggle_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___toggle_addr[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__toggle_addr
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___toggle_addr[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__clear_index;
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__input_fifo.pop 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__new_request) 
           & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__cache_input_fifo__DOT__gen_width_two__DOT__inflight_count) 
              >> 1U));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__input_fifo.push 
        = ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit__BRA__0__KET__.new_request) 
           & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__new_request)) 
              | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__cache_input_fifo__DOT__gen_width_two__DOT__inflight_count) 
                 >> 1U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellinp__spec_table_ram__raddr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_read_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellinp__spec_table_ram__raddr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_read_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellinp__spec_table_ram__raddr[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_read_addr
        [2U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h624740d3__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc48585f5__0) 
           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hf73ed51b__0));
    if ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sew))) {
        if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sew))) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits 
                = (0xffU & (- (IData)((1U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                             >> 0xfU)))));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__equal 
                = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h624740d3__0) 
                   & ((0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                         << 1U) | (
                                                   vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                   >> 0x1fU)))) 
                      & (IData)(((0U == (0x3fe00000U 
                                         & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U])) 
                                 & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0)))));
        } else {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits 
                = (0xffU & ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                      >> 8U)) | ((0x40U 
                                                  & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                                     >> 9U)) 
                                                 | ((0x20U 
                                                     & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                                        >> 0xaU)) 
                                                    | ((0x10U 
                                                        & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                                           >> 0xbU)) 
                                                       | (0xfU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                                                           >> 7U))))))))));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__equal 
                = (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h624740d3__0) 
                    << 1U) | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc1104ac1__0) 
                              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0)));
        }
    } else if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sew))) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits 
            = (0xffU & ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                  >> 8U)) | ((0x40U 
                                              & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                                 >> 9U)) 
                                             | ((0x20U 
                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                                    >> 0x16U)) 
                                                | ((0x10U 
                                                    & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                                       >> 0x17U)) 
                                                   | ((8U 
                                                       & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                                             >> 5U)) 
                                                         | (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                                             >> 0x13U))))))))))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__equal 
            = (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc48585f5__0) 
                << 3U) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hf73ed51b__0) 
                           << 2U) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc1104ac1__0) 
                                      << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0))));
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits 
            = (0xffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits8));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__equal 
            = (((0U == (0x1ffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                  >> 7U))) << 7U) | 
               (((0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                    << 3U) | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                              >> 0x1dU)))) 
                 << 6U) | (((0U == (0x1ffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                              >> 0x13U))) 
                            << 5U) | (((0U == (0x1ffU 
                                               & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                                  >> 9U))) 
                                       << 4U) | (((0U 
                                                   == 
                                                   (0x1ffU 
                                                    & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                                        << 1U) 
                                                       | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                          >> 0x1fU)))) 
                                                  << 3U) 
                                                 | (((0U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                          >> 0x15U))) 
                                                     << 2U) 
                                                    | (((0U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                             >> 0xbU))) 
                                                        << 1U) 
                                                       | (0U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                              >> 1U))))))))));
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___toggle_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___toggle_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___toggle_addr
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___toggle_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___toggle_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___toggle_addr
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___toggle_addr
        [3U];
    cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_ram__DOT____Vlvbound_hddbc3e43__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_ram__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellinp__spec_table_ram__raddr
        [0U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellout__spec_table_ram__ram_data_out[0U] 
        = cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_ram__DOT____Vlvbound_hddbc3e43__0;
    cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_ram__DOT____Vlvbound_hddbc3e43__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_ram__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellinp__spec_table_ram__raddr
        [1U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellout__spec_table_ram__ram_data_out[1U] 
        = cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_ram__DOT____Vlvbound_hddbc3e43__0;
    cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_ram__DOT____Vlvbound_hddbc3e43__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_ram__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellinp__spec_table_ram__raddr
        [2U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellout__spec_table_ram__ram_data_out[2U] 
        = cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_ram__DOT____Vlvbound_hddbc3e43__0;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s1_end 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s1_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s1_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s1_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s0_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_sca 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_sca));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s1_narrow 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s0_narrow));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s1_opSel 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_opSel));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_lop_sum 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_lop_sum));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__minMax_result 
        = (((QData)((IData)((0xffU & ((1U & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                              >> 7U) 
                                             ^ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel) 
                                                >> 1U)))
                                       ? (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                  >> 0x38U))
                                       : (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                  >> 0x38U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (
                                                   ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel) 
                                                    >> 1U)))
                                             ? (IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                        >> 0x30U))
                                             : (IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                        >> 0x30U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                                 >> 5U) 
                                                                ^ 
                                                                ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel) 
                                                                 >> 1U)))
                                                             ? (IData)(
                                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                        >> 0x28U))
                                                             : (IData)(
                                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                        >> 0x28U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                                  >> 4U) 
                                                                 ^ 
                                                                 ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel) 
                                                                  >> 1U)))
                                                              ? (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                         >> 0x20U))
                                                              : (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                                  >> 3U) 
                                                                 ^ 
                                                                 ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel) 
                                                                  >> 1U)))
                                                              ? (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                         >> 0x18U))
                                                              : (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                         >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                                        >> 2U) 
                                                                       ^ 
                                                                       ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel) 
                                                                        >> 1U)))
                                                                    ? (IData)(
                                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                               >> 0x10U))
                                                                    : (IData)(
                                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                               >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                                          ^ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel)))
                                                                       ? (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0 
                                                                                >> 8U))
                                                                       : (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut 
                                                                                >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                                           ^ 
                                                                           ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_opSel) 
                                                                            >> 1U)))
                                                                        ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT____Vcellinp__genblk1__DOT__vAdd_unit0__vec0)
                                                                        : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sumOut))))))))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellinp__lop8__in_en 
        = ((1U > (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_sew)) 
           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_end 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_end));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_avg 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_avg));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_en));
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s3_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult8_b2 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult8_b3 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult8_b0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult8_b1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult16_p1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult16_p0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult8_b2 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult8_b3 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult16_p1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult8_b0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult8_b1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult16_p0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_mult32[0U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_mult32[1U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_mult32[2U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_mult32[0U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_mult32[1U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_mult32[2U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_out_off = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_off = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s2_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s2_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_opSel = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop16__out_vec = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_out_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_lt = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_equal = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_opSel = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_carry_res = 0U;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s3_sew 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s2_sew;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult8_b2 
            = (0x3ffffU & VL_EXTENDS_II(18,17, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod8_a1_b1_0));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult8_b3 
            = (0x3ffffU & VL_EXTENDS_II(18,17, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod8_a1_b1_1));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult8_b0 
            = (0x3ffffU & VL_EXTENDS_II(18,17, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod8_a0_b0_0));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult8_b1 
            = (0x3ffffU & VL_EXTENDS_II(18,17, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod8_a0_b0_1));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult16_p1 
            = (0x7ffffffffULL & VL_EXTENDS_QQ(35,33, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a1_b1));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m0__out_mult16_p0 
            = (0x7ffffffffULL & VL_EXTENDS_QQ(35,33, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a0_b0));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult8_b2 
            = (0x3ffffU & VL_EXTENDS_II(18,17, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod8_a1_b1_0));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult8_b3 
            = (0x3ffffU & VL_EXTENDS_II(18,17, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod8_a1_b1_1));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult16_p1 
            = (0x7ffffffffULL & VL_EXTENDS_QQ(35,33, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a1_b1));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult8_b0 
            = (0x3ffffU & VL_EXTENDS_II(18,17, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod8_a0_b0_0));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult8_b1 
            = (0x3ffffU & VL_EXTENDS_II(18,17, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod8_a0_b0_1));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT____Vcellout__m3__out_mult16_p0 
            = (0x7ffffffffULL & VL_EXTENDS_QQ(35,33, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a0_b0));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_mult32[0U] 
            = __Vtemp_h200ed2dd__0[0U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_mult32[1U] 
            = __Vtemp_h200ed2dd__0[1U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_mult32[2U] 
            = (7U & __Vtemp_h200ed2dd__0[2U]);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_mult32[0U] 
            = __Vtemp_h11e9e163__0[0U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_mult32[1U] 
            = __Vtemp_h11e9e163__0[1U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_mult32[2U] 
            = (7U & __Vtemp_h11e9e163__0[2U]);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_out_off 
            = (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_en) 
                & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)))
                ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_insert)
                    ? 0U : (0xffU & (IData)(((0x3fU 
                                              >= ((IData)(3U) 
                                                  - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                                              ? (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                 >> 
                                                 ((IData)(3U) 
                                                  - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                                              : 0ULL))))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_off 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable)
                ? (0xffU & ((IData)(((0x18U == (0x38U 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))) 
                                     & ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)) 
                                        | ((3U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)) 
                                           | (4U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d))))))
                             ? ((0xbU >= ((IData)(3U) 
                                          + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                                 ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx) 
                                    >> ((IData)(3U) 
                                        + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                                 : 0U) : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_off_agu)))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s2_out_vec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s1_out_vec;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s2_out_vec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_out_vec;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s2_out_vec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s1_out_vec;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s2_opSel 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_opSel;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__lop16__out_vec 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellinp__lop16__in_en)
                ? ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_opSel))
                    ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_opSel))
                        ? ((0xffffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__genblk1__DOT__lop32__out_vec) 
                           ^ (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__genblk1__DOT__lop32__out_vec 
                              >> 0x10U)) : ((0xffffU 
                                             & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__genblk1__DOT__lop32__out_vec) 
                                            | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__genblk1__DOT__lop32__out_vec 
                                               >> 0x10U)))
                    : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_opSel))
                        ? (0xffffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__genblk1__DOT__lop32__out_vec 
                                      & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__genblk1__DOT__lop32__out_vec 
                                         >> 0x10U)))
                        : 0U)) : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__genblk1__DOT__lop32__out_vec);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_out_be 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_out_be;
        if ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew))) {
            if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew))) {
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_lt 
                    = (1U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                             >> 0xfU));
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_equal 
                    = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_h624740d3__0) 
                       & ((0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                             << 1U) 
                                            | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                               >> 0x1fU)))) 
                          & (IData)(((0U == (0x3fe00000U 
                                             & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U])) 
                                     & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0)))));
            } else {
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_lt 
                    = ((2U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                              >> 0xeU)) | (1U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                 >> 7U)));
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_equal 
                    = (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_h624740d3__0) 
                        << 1U) | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc1104ac1__0) 
                                  & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0)));
            }
        } else if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew))) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_lt 
                = ((8U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                          >> 0xcU)) | ((4U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                              >> 0x19U)) 
                                       | ((2U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                 >> 6U)) 
                                          | (1U & (
                                                   vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                                   >> 0x13U)))));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_equal 
                = (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc48585f5__0) 
                    << 3U) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_hf73ed51b__0) 
                               << 2U) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc1104ac1__0) 
                                          << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0))));
        } else {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_lt 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits8;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_equal 
                = (((0U == (0x1ffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                      >> 7U))) << 7U) 
                   | (((0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                          << 3U) | 
                                         (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                          >> 0x1dU)))) 
                       << 6U) | (((0U == (0x1ffU & 
                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                           >> 0x13U))) 
                                  << 5U) | (((0U == 
                                              (0x1ffU 
                                               & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                  >> 9U))) 
                                             << 4U) 
                                            | (((0U 
                                                 == 
                                                 (0x1ffU 
                                                  & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                      << 1U) 
                                                     | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                                        >> 0x1fU)))) 
                                                << 3U) 
                                               | (((0U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                                        >> 0x15U))) 
                                                   << 2U) 
                                                  | (((0U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                                           >> 0xbU))) 
                                                      << 1U) 
                                                     | (0U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                                            >> 1U))))))))));
        }
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_carry_res 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_carry_res;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_opSel 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_out_vec 
            = ((0U == ((2U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                              >> 3U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_carry_res)))
                ? (((QData)((IData)((0xffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                              >> 7U)))) 
                    << 0x38U) | (((QData)((IData)((0xffU 
                                                   & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                                       << 3U) 
                                                      | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                         >> 0x1dU))))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                                    >> 0x13U)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                                       >> 9U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xff000000U 
                                                                      & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                                          << 0x19U) 
                                                                         | (0x1000000U 
                                                                            & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                                                               >> 7U)))) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                                                            >> 5U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                                                               >> 3U)) 
                                                                           | (0xffU 
                                                                              & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                                                                >> 1U)))))))))))
                : ((1U == ((2U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                  >> 3U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_carry_res)))
                    ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result
                    : ((2U == ((2U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                      >> 3U)) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_carry_res)))
                        ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_minMax_result
                        : 0ULL)));
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_carry_res 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vm_d) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAddSubCarry_en)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_req_end 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_en)
                                              ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_end)
                                              : 0U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_req_start 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_en)
                                              ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_start)
                                              : 0U)));
    VL_EXTEND_WQ(128,64, __Vtemp_h7327e145__0, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec0);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h37effcab__0, __Vtemp_h7327e145__0, 
                  ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift) 
                   << 3U));
    VL_EXTEND_WQ(128,64, __Vtemp_h7327e145__1, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec0);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h86bac936__0, __Vtemp_h7327e145__1, 0x40U);
    VL_EXTEND_WQ(128,64, __Vtemp_h83348023__0, (((QData)((IData)(
                                                                 vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_down_result[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_down_result[2U]))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s1_lsb 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s0_lsb));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellout__spec_table_ram__ram_data_out
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellout__spec_table_ram__ram_data_out
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellout__spec_table_ram__ram_data_out
        [2U];
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_start_idx = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_up_remainder = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_up_result = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_remainder = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_down_result = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_down_vec1_end = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s2_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod8_a1_b1_0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod8_a1_b1_1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod8_a0_b0_0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod8_a0_b0_1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod8_a1_b1_0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod8_a1_b1_1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod8_a0_b0_0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod8_a0_b0_1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a0_b1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a1_b0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a1_b1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a0_b0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a1_b1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a0_b1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a1_b0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a0_b0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_off_agu = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s1_out_vec = 0ULL;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_start_idx 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_en)
                ? ((5U >= ((IData)(3U) - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                    ? (0x3fU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx) 
                                << ((IData)(3U) - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))))
                    : 0U) : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_up_remainder 
            = (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[2U])));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_up_result 
            = ((((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[1U])) 
                 << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[0U]))) 
               | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s1_up_remainder);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_remainder 
            = (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_down_result[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_down_result[0U])));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_down_result 
            = (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_result[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_result[0U])));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_down_vec1_end 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_vec1_end;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s2_sew 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s1_sew;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod8_a1_b1_0 
            = (0x1ffffU & ((0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a1) 
                           * (0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b1)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod8_a1_b1_1 
            = (0x1ffffU & ((0x1ffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a1 
                                      >> 9U)) * (0x1ffU 
                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b1 
                                                    >> 9U))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod8_a0_b0_0 
            = (0x1ffffU & ((0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a0) 
                           * (0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b0)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod8_a0_b0_1 
            = (0x1ffffU & ((0x1ffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a0 
                                      >> 9U)) * (0x1ffU 
                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b0 
                                                    >> 9U))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod8_a1_b1_0 
            = (0x1ffffU & ((0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a1) 
                           * (0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b1)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod8_a1_b1_1 
            = (0x1ffffU & ((0x1ffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a1 
                                      >> 9U)) * (0x1ffU 
                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b1 
                                                    >> 9U))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod8_a0_b0_0 
            = (0x1ffffU & ((0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a0) 
                           * (0x1ffU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b0)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod8_a0_b0_1 
            = (0x1ffffU & ((0x1ffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a0 
                                      >> 9U)) * (0x1ffU 
                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b0 
                                                    >> 9U))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a0_b1 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a0)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b1))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a1_b0 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a1)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b0))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a1_b1 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a1)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b1))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0__DOT__prod16_a0_b0 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a0)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b0))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a1_b1 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a1)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b1))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a0_b1 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a0)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b1))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a1_b0 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a1)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b0))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3__DOT__prod16_a0_b0 
            = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                                 & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a0)), 
                                            (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,18, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b0))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_off_agu 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__curr_off_out;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s1_out_vec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__w_s1_out_vec;
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__w_s1_out_vec 
        = (((QData)((IData)((0xffU & ((0x80U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_mask))
                                       ? (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec1 
                                                  >> 0x38U))
                                       : (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec0 
                                                  >> 0x38U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_mask))
                                             ? (IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec1 
                                                        >> 0x30U))
                                             : (IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec0 
                                                        >> 0x30U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_mask))
                                                             ? (IData)(
                                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec1 
                                                                        >> 0x28U))
                                                             : (IData)(
                                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec0 
                                                                        >> 0x28U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x10U 
                                                              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_mask))
                                                              ? (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec1 
                                                                         >> 0x20U))
                                                              : (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec0 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_mask))
                                                              ? (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec1 
                                                                         >> 0x18U))
                                                              : (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec0 
                                                                         >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_mask))
                                                                    ? (IData)(
                                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec1 
                                                                               >> 0x10U))
                                                                    : (IData)(
                                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec0 
                                                                               >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_mask))
                                                                       ? (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec1 
                                                                                >> 8U))
                                                                       : (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec0 
                                                                                >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_mask))
                                                                        ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec1)
                                                                        : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_vec0))))))))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vm_d 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__vm_d;
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [0U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [1U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [2U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [3U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [0U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [1U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [2U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [3U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [0U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [1U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [2U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [3U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_decode 
        = ((vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_read_data
            [2U] << 7U) | vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_read_data
           [1U]);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__s0_end 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_end) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vID_en));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vMerge0__DOT__s0_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMerge_en));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s0_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_en));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_en));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_en));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_sca 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMoveXS_en) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_en)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s0_narrow 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_en) 
                                       & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable) 
                                          & (IData)(
                                                    (((0x2cU 
                                                       == 
                                                       (0x3cU 
                                                        & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))) 
                                                      & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____VdfgTmp_h79e61d0d__0))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mask__DOT__vFirstPopc0__DOT__s0_opSel 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_en) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_lop_sum 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____Vcellinp__red__DOT__vRed0__in_valid) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRedAndOrXor_en)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellinp__lop16__in_en 
        = ((2U > (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_sew)) 
           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_valid 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____Vcellinp__red__DOT__vRed0__in_valid));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_end 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_end) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____Vcellinp__red__DOT__vRed0__in_valid)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_avg = 0U;
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s1_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_opSel = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__genblk1__DOT__lop32__out_vec = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_out_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew = 0U;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s1_out_vec 
            = ((4U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_opSel))
                ? ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_opSel))
                    ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_opSel))
                        ? (~ (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec0 
                              ^ vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec1))
                        : (~ (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec0 
                              | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec1)))
                    : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_opSel))
                        ? (~ (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec0 
                              & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec1))
                        : (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec0 
                           | (~ vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec1))))
                : ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_opSel))
                    ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_opSel))
                        ? (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec0 
                           ^ vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec1)
                        : (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec0 
                           | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec1))
                    : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_opSel))
                        ? (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec0 
                           & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec1)
                        : (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec0 
                           & (~ vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec1)))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s1_out_vec 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_out_vec;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s1_opSel 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_opSel;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellout__genblk1__DOT__lop32__out_vec 
            = (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellinp__genblk1__DOT__lop32__in_en)
                        ? (QData)((IData)(((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_opSel))
                                            ? ((1U 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_opSel))
                                                ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0) 
                                                   ^ (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                              >> 0x20U)))
                                                : ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0) 
                                                   | (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                              >> 0x20U))))
                                            : ((1U 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_opSel))
                                                ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0) 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                              >> 0x20U)))
                                                : 0U))))
                        : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0));
        if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_en) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_out_be 
                = (0xffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_be));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew 
                = (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_sew));
        } else {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_out_be = 0U;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew = 0U;
        }
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h0dcfaf79__0 
        = (IData)((3U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew)));
    cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h0d6941d5__0 
        = (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_en)
                                         ? (0x1ffU 
                                            & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____Vcellinp__add_sub__DOT__vAdd_0__in_opSel))
                                         : 0U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v0_ext2 
        = (1U & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew) 
                  | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel)) 
                 >> 1U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v1_ext2 
        = (1U & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew) 
                     >> 1U)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                >> 1U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
        = ((IData)((3U == (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel))))
            ? (~ vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0)
            : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
        = ((IData)((2U == (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel))))
            ? (~ vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1)
            : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h17099101__0 
        = (1U & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                     >> 4U)) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                 >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                   >> 0x3fU)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h173e301e__0 
        = (1U & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                     >> 4U)) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                 >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                   >> 0x37U)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h11c8556e__0 
        = (1U & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                     >> 4U)) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                 >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                   >> 0x2fU)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h11e98a67__0 
        = (1U & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                     >> 4U)) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                 >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                   >> 0x27U)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h119e2d8a__0 
        = (1U & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                     >> 4U)) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                 >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                   >> 0x1fU)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h11bf5159__0 
        = (1U & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                     >> 4U)) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                 >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                   >> 0x17U)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h162f902f__0 
        = (1U & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                     >> 4U)) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                 >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                   >> 0xfU)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h1664702e__0 
        = (1U & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                     >> 4U)) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                 >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                   >> 7U)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h0bdd09bf__0 
        = (1U & ((~ (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                      >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                        >> 0x3fU)))) 
                 & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                    >> 4U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_hcd9c4bd1__0 
        = (1U & ((~ (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                      >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                        >> 0x37U)))) 
                 & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                    >> 4U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_heb182f52__0 
        = (1U & ((~ (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                      >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                        >> 0x2fU)))) 
                 & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                    >> 4U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h129caf47__0 
        = (1U & ((~ (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                      >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                        >> 0x27U)))) 
                 & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                    >> 4U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_hcf774208__0 
        = (1U & ((~ (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                      >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                        >> 0x1fU)))) 
                 & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                    >> 4U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h28c577de__0 
        = (1U & ((~ (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                      >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                        >> 0x17U)))) 
                 & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                    >> 4U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h1e1434dd__0 
        = (1U & ((~ (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                      >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                        >> 0xfU)))) 
                 & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                    >> 4U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h1bbd3f05__0 
        = (1U & ((~ (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                      >> 2U) & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                        >> 7U)))) & 
                 ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                  >> 4U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx_next));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count 
        = (0x3ffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__widen_en_d)
                      ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx) 
                         >> 1U) : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx)));
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[0U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[1U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[2U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[3U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_result[0U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_result[1U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_result[2U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_result[3U] = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_vec1_end = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_opSel = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_start = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_end = 0U;
    } else {
        if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift))) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[0U] 
                = __Vtemp_h37effcab__0[0U];
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[1U] 
                = __Vtemp_h37effcab__0[1U];
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[2U] 
                = __Vtemp_h37effcab__0[2U];
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[3U] 
                = __Vtemp_h37effcab__0[3U];
        } else {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[0U] 
                = __Vtemp_h86bac936__0[0U];
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[1U] 
                = __Vtemp_h86bac936__0[1U];
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[2U] 
                = __Vtemp_h86bac936__0[2U];
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_up_result[3U] 
                = __Vtemp_h86bac936__0[3U];
        }
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_result[0U] 
            = __Vtemp_h83348023__0[0U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_result[1U] 
            = __Vtemp_h83348023__0[1U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_result[2U] 
            = __Vtemp_h83348023__0[2U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_result[3U] 
            = __Vtemp_h83348023__0[3U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_down_vec1_end 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_vec1;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_be 
            = (0xffU & (IData)(((((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_insert)) 
                                  & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_opSel)) 
                                 & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_end))
                                 ? ((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift))
                                     ? ((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_be)) 
                                        >> (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift))
                                     : ((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_be)) 
                                        >> 8U)) : (
                                                   (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_insert)) 
                                                     & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_opSel))) 
                                                    & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_start))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_be)) 
                                                     << (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift))
                                                     : 
                                                    ((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_be)) 
                                                     << 8U))
                                                    : (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_be))))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_opSel 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_opSel;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_start 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_start;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_end 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_end;
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_insert 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_en) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_insert)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_opSel 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_en) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_end 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_en) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_end)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_start 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_en) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_start)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s0_lsb 
        = ((~ (IData)(vlSelf->rst)) & (((IData)((1U 
                                                 == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_opSel))) 
                                        | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_en)) 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_en)));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [3U];
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.rs_wb_group[0U] 
        = (1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_decode));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.rs_wb_group[1U] 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_decode) 
                 >> 7U));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.phys_rs_addr[0U] 
        = (0x3fU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_decode) 
                    >> 1U));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.phys_rs_addr[1U] 
        = (0x3fU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_decode) 
                    >> 8U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v0_ext1 
        = (1U & ((IData)(cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h0d6941d5__0) 
                 | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                    >> 1U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v1_ext1 
        = (1U & ((~ (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h0d6941d5__0)) 
                 & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                    >> 1U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[0U] 
        = ((0xfeU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [0U]) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                      << 3U) < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[0U] 
        = ((0xfdU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [0U]) | ((((IData)(1U) + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                                      << 3U)) < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)) 
                     << 1U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[0U] 
        = ((0xfbU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [0U]) | ((((IData)(2U) + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                                      << 3U)) < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)) 
                     << 2U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[0U] 
        = ((0xf7U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [0U]) | ((((IData)(3U) + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                                      << 3U)) < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)) 
                     << 3U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[0U] 
        = ((0xefU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [0U]) | ((((IData)(4U) + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                                      << 3U)) < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)) 
                     << 4U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[0U] 
        = ((0xdfU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [0U]) | ((((IData)(5U) + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                                      << 3U)) < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)) 
                     << 5U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[0U] 
        = ((0xbfU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [0U]) | ((((IData)(6U) + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                                      << 3U)) < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)) 
                     << 6U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[0U] 
        = ((0x7fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [0U]) | ((((IData)(7U) + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                                      << 3U)) < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)) 
                     << 7U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[1U] 
        = ((0xfcU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [1U]) | (3U & (- (IData)(((0x7ffffffcU 
                                       & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                                          << 2U)) < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[1U] 
        = ((0xf3U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [1U]) | (0xcU & ((- (IData)((((IData)(1U) 
                                          + (0x7ffffffcU 
                                             & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                                                << 2U))) 
                                         < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)))) 
                             << 2U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[1U] 
        = ((0xcfU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [1U]) | (0x30U & ((- (IData)((((IData)(2U) 
                                           + (0x7ffffffcU 
                                              & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                                                 << 2U))) 
                                          < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)))) 
                              << 4U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[1U] 
        = ((0x3fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [1U]) | (0xc0U & ((- (IData)((((IData)(3U) 
                                           + (0x7ffffffcU 
                                              & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                                                 << 2U))) 
                                          < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)))) 
                              << 6U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[2U] 
        = ((0xf0U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [2U]) | (0xfU & (- (IData)(((0x3ffffffeU 
                                         & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                                            << 1U)) 
                                        < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[2U] 
        = ((0xfU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
            [2U]) | (0xf0U & ((- (IData)((((IData)(1U) 
                                           + (0x3ffffffeU 
                                              & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                                                 << 1U))) 
                                          < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)))) 
                              << 4U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew[3U] 
        = (0xffU & (- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__gen_be_alu__reg_count) 
                               < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__decode_and_issue_block__decode_rs_wb_group[0U] 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.rs_wb_group
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__decode_and_issue_block__decode_rs_wb_group[1U] 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.rs_wb_group
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__decode_and_issue_block__decode_phys_rs_addr[0U] 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.phys_rs_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__decode_and_issue_block__decode_phys_rs_addr[1U] 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.phys_rs_addr
        [1U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT____Vcellinp__genblk1__DOT__lop32__in_en 
        = ((3U > (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_sew)) 
           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_valid));
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s1_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec1 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_opSel = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_out_vec = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 = 0ULL;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s1_sew 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s0_sew;
        if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a1 
                = ((((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                      ? ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_hf13a33a9__0) 
                           & (0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))) 
                          << 8U) | (0xffU & (IData)(
                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                     >> 0x28U))))
                      : 0U) << 9U) | ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                                       ? ((((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel)) 
                                            & ((IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                        >> 0x27U)) 
                                               & (0U 
                                                  == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew)))) 
                                           << 8U) | 
                                          (0xffU & (IData)(
                                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                            >> 0x20U))))
                                       : 0U));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b1 
                = ((((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                      ? ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_he0e7f0a2__0) 
                           & (0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))) 
                          << 8U) | (0xffU & (IData)(
                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                     >> 0x28U))))
                      : 0U) << 9U) | ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                                       ? ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel) 
                                            & ((IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                        >> 0x27U)) 
                                               & (0U 
                                                  == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew)))) 
                                           << 8U) | 
                                          (0xffU & (IData)(
                                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                            >> 0x20U))))
                                       : 0U));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a0 
                = ((((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                      ? ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__a3_ext) 
                           & (0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))) 
                          << 8U) | (0xffU & (IData)(
                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                     >> 0x38U))))
                      : 0U) << 9U) | ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                                       ? ((((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel)) 
                                            & ((IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                        >> 0x37U)) 
                                               & (0U 
                                                  == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew)))) 
                                           << 8U) | 
                                          (0xffU & (IData)(
                                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                            >> 0x30U))))
                                       : 0U));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b0 
                = ((((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                      ? ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b3_ext) 
                           & (0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))) 
                          << 8U) | (0xffU & (IData)(
                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                     >> 0x38U))))
                      : 0U) << 9U) | ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                                       ? ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel) 
                                            & ((IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                        >> 0x37U)) 
                                               & (0U 
                                                  == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew)))) 
                                           << 8U) | 
                                          (0xffU & (IData)(
                                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                            >> 0x30U))))
                                       : 0U));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b1 
                = ((((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                      ? ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_he1763645__0) 
                           & (0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))) 
                          << 8U) | (0xffU & (IData)(
                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                     >> 8U))))
                      : 0U) << 9U) | ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                                       ? ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel) 
                                            & ((IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                        >> 7U)) 
                                               & (0U 
                                                  == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew)))) 
                                           << 8U) | 
                                          (0xffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1)))
                                       : 0U));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a1 
                = ((((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                      ? ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_h8ecbf4f4__0) 
                           & (0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))) 
                          << 8U) | (0xffU & (IData)(
                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                     >> 8U))))
                      : 0U) << 9U) | ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                                       ? ((((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel)) 
                                            & ((IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                        >> 7U)) 
                                               & (0U 
                                                  == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew)))) 
                                           << 8U) | 
                                          (0xffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0)))
                                       : 0U));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a0 
                = ((((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                      ? ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_hf17bcef7__0) 
                           & (0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))) 
                          << 8U) | (0xffU & (IData)(
                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                     >> 0x18U))))
                      : 0U) << 9U) | ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                                       ? ((((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel)) 
                                            & ((IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                        >> 0x17U)) 
                                               & (0U 
                                                  == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew)))) 
                                           << 8U) | 
                                          (0xffU & (IData)(
                                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                            >> 0x10U))))
                                       : 0U));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b0 
                = ((((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                      ? ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_he0a64d24__0) 
                           & (0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))) 
                          << 8U) | (0xffU & (IData)(
                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                     >> 0x18U))))
                      : 0U) << 9U) | ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))
                                       ? ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel) 
                                            & ((IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                        >> 0x17U)) 
                                               & (0U 
                                                  == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew)))) 
                                           << 8U) | 
                                          (0xffU & (IData)(
                                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                            >> 0x10U))))
                                       : 0U));
        } else {
            if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))) {
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a1 = 0U;
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a0 = 0U;
            } else {
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a1 
                    = ((0x30000U & ((- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_hf13a33a9__0) 
                                                & (1U 
                                                   == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))))) 
                                    << 0x10U)) | (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                             >> 0x20U))));
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_a0 
                    = ((0x30000U & ((- (IData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__a3_ext))) 
                                    << 0x10U)) | (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                             >> 0x30U))));
            }
            if ((3U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))) {
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b1 
                    = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b0;
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b0 
                    = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b1;
            } else {
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b1 
                    = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b2;
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m0_b0 
                    = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b3;
            }
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b1 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b0;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a1 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__a0;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_a0 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__a1;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__m3_b0 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b1;
        }
        if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_en) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec0 
                = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_in0;
            if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMove_en) {
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec1 
                    = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_in0;
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_opSel = 2U;
            } else {
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec1 
                    = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2;
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_opSel 
                    = (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d));
            }
        } else {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec0 = 0ULL;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_vec1 = 0ULL;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__and_or_xor__DOT__vAndOrXor_0__DOT__s0_opSel = 0U;
        }
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_out_vec 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vID_en)
                ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
               [vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew]
                : 0ULL);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____Vcellinp__red__DOT__vRed0__in_valid)
                ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2
                : 0ULL);
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_hb92bc7c9__0 
        = ((0x1fe00000U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                    >> 0x30U)) << 0x15U)) 
           | ((0x7f800U & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                    >> 0x28U)) << 0xbU)) 
              | (0x1feU & ((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                    >> 0x20U)) << 1U))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_h9730cce6__0 
        = (0x20080200U | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                           << 0x1eU) | ((0x1fe00000U 
                                         & ((IData)(
                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                     >> 0x10U)) 
                                            << 0x15U)) 
                                        | ((0x100000U 
                                            & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_sew) 
                                               << 0x13U)) 
                                           | ((0x7f800U 
                                               & ((IData)(
                                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                           >> 8U)) 
                                                  << 0xbU)) 
                                              | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                                  << 0xaU) 
                                                 | (0x1feU 
                                                    & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0) 
                                                       << 1U))))))));
    __Vtemp_hb392f00c__0[0U] = (IData)((((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v0_ext2)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h11c8556e__0)) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
                                                                           >> 0x28U))))) 
                                               << 0x33U) 
                                              | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v0_ext1)) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h11e98a67__0)) 
                                                     << 0x31U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
                                                                                >> 0x20U))))) 
                                                        << 0x29U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h0dcfaf79__0) 
                                                                               | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                                                >> 1U))))) 
                                                           << 0x28U) 
                                                          | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h119e2d8a__0)) 
                                                              << 0x27U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
                                                                                >> 0x18U))))) 
                                                                 << 0x1fU) 
                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v0_ext1) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h11bf5159__0) 
                                                                                << 0x1dU) 
                                                                                | ((0x1fe00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
                                                                                >> 0x10U)) 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v0_ext2) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h162f902f__0) 
                                                                                << 0x13U) 
                                                                                | ((0x7f800U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
                                                                                >> 8U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v0_ext1) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h1664702e__0) 
                                                                                << 9U) 
                                                                                | ((0x1feU 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                                                >> 1U)))))))))))))))))))))));
    __Vtemp_hb392f00c__0[1U] = (((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
                                          >> 0x30U)) 
                                 << 0x1dU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v0_ext2)) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h11c8556e__0)) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
                                                                                >> 0x28U))))) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v0_ext1)) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h11e98a67__0)) 
                                                                    << 0x31U) 
                                                                   | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
                                                                                >> 0x20U))))) 
                                                                       << 0x29U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h0dcfaf79__0) 
                                                                                | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                                                >> 1U))))) 
                                                                          << 0x28U) 
                                                                         | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h119e2d8a__0)) 
                                                                             << 0x27U) 
                                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
                                                                                >> 0x18U))))) 
                                                                                << 0x1fU) 
                                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v0_ext1) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h11bf5159__0) 
                                                                                << 0x1dU) 
                                                                                | ((0x1fe00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
                                                                                >> 0x10U)) 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v0_ext2) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h162f902f__0) 
                                                                                << 0x13U) 
                                                                                | ((0x7f800U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
                                                                                >> 8U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v0_ext1) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h1664702e__0) 
                                                                                << 9U) 
                                                                                | ((0x1feU 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                                                >> 1U)))))))))))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h1c3c12da__0[0U] = __Vtemp_hb392f00c__0[0U];
    __Vtemp_h1c3c12da__0[1U] = __Vtemp_hb392f00c__0[1U];
    __Vtemp_h1c3c12da__0[2U] = (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h17099101__0) 
                                 << 0xfU) | ((0x7f80U 
                                              & ((IData)(
                                                         (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
                                                          >> 0x38U)) 
                                                 << 7U)) 
                                             | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v0_ext1) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h173e301e__0) 
                                                    << 5U) 
                                                   | (0x1fU 
                                                      & ((IData)(
                                                                 (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec0 
                                                                  >> 0x30U)) 
                                                         >> 3U))))));
    VL_EXTEND_WW(81,80, __Vtemp_h639defb9__0, __Vtemp_h1c3c12da__0);
    __Vtemp_h93a86e11__0[0U] = (IData)((((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v1_ext2)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_heb182f52__0)) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
                                                                           >> 0x28U))))) 
                                               << 0x33U) 
                                              | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v1_ext1)) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h129caf47__0)) 
                                                     << 0x31U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
                                                                                >> 0x20U))))) 
                                                        << 0x29U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h0dcfaf79__0)) 
                                                                               & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                                                >> 1U))))) 
                                                           << 0x28U) 
                                                          | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_hcf774208__0)) 
                                                              << 0x27U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
                                                                                >> 0x18U))))) 
                                                                 << 0x1fU) 
                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v1_ext1) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h28c577de__0) 
                                                                                << 0x1dU) 
                                                                                | ((0x1fe00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
                                                                                >> 0x10U)) 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v1_ext2) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h1e1434dd__0) 
                                                                                << 0x13U) 
                                                                                | ((0x7f800U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
                                                                                >> 8U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v1_ext1) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h1bbd3f05__0) 
                                                                                << 9U) 
                                                                                | ((0x1feU 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                                                >> 1U)))))))))))))))))))))));
    __Vtemp_h93a86e11__0[1U] = (((IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
                                          >> 0x30U)) 
                                 << 0x1dU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v1_ext2)) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_heb182f52__0)) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
                                                                                >> 0x28U))))) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v1_ext1)) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h129caf47__0)) 
                                                                    << 0x31U) 
                                                                   | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
                                                                                >> 0x20U))))) 
                                                                       << 0x29U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h0dcfaf79__0)) 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                                                >> 1U))))) 
                                                                          << 0x28U) 
                                                                         | (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_hcf774208__0)) 
                                                                             << 0x27U) 
                                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
                                                                                >> 0x18U))))) 
                                                                                << 0x1fU) 
                                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v1_ext1) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h28c577de__0) 
                                                                                << 0x1dU) 
                                                                                | ((0x1fe00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
                                                                                >> 0x10U)) 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v1_ext2) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h1e1434dd__0) 
                                                                                << 0x13U) 
                                                                                | ((0x7f800U 
                                                                                & ((IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
                                                                                >> 8U)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v1_ext1) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h1bbd3f05__0) 
                                                                                << 9U) 
                                                                                | ((0x1feU 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                                                >> 1U)))))))))))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_had1f2180__0[0U] = __Vtemp_h93a86e11__0[0U];
    __Vtemp_had1f2180__0[1U] = __Vtemp_h93a86e11__0[1U];
    __Vtemp_had1f2180__0[2U] = (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_h0bdd09bf__0) 
                                 << 0xfU) | ((0x7f80U 
                                              & ((IData)(
                                                         (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
                                                          >> 0x38U)) 
                                                 << 7U)) 
                                             | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__v1_ext1) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT____VdfgTmp_hcd9c4bd1__0) 
                                                    << 5U) 
                                                   | (0x1fU 
                                                      & ((IData)(
                                                                 (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__vAdd_unit0__DOT__w_vec1 
                                                                  >> 0x30U)) 
                                                         >> 3U))))));
    VL_EXTEND_WW(81,80, __Vtemp_h5923fb71__0, __Vtemp_had1f2180__0);
    VL_EXTEND_WQ(81,64, __Vtemp_hb211af6a__0, vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_carry_in);
    VL_ADD_W(3, __Vtemp_hf5d30da6__0, __Vtemp_h5923fb71__0, __Vtemp_hb211af6a__0);
    VL_ADD_W(3, __Vtemp_h654c7636__0, __Vtemp_h639defb9__0, __Vtemp_hf5d30da6__0);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
        = __Vtemp_h654c7636__0[0U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
        = __Vtemp_h654c7636__0[1U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
        = (0x1ffffU & __Vtemp_h654c7636__0[2U]);
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_opSel = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec0 = 0ULL;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_opSel 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____Vcellinp__red__DOT__vRed0__in_valid)
                ? (7U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                : 0U);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec0 
            = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_en)
                ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2
                : 0ULL);
    }
    if ((1U & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_idle_rd_2)))) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data
            [(0x1fffU & ((0x1f00U & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__base_reg_out) 
                                      + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__curr_reg_out)) 
                                     << 8U)) + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__curr_off_out)))];
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_end 
        = ((~ (IData)(vlSelf->rst)) & ((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__state) 
                                         & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__curr_reg_out) 
                                             == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__max_reg_out)) 
                                            & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__curr_off_out) 
                                                == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__max_off_out)) 
                                               & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h3afe6e14__0)))) 
                                        | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__state) 
                                           & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__curr_reg_out) 
                                               == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__max_reg_out)) 
                                              & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__curr_off_out) 
                                                  == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__max_off_out)) 
                                                 & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT____VdfgTmp_h3afe6e14__0))))) 
                                       | (((0x57U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d)) 
                                           & (((3U 
                                                == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)) 
                                               | ((2U 
                                                   == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)) 
                                                  & (0x14U 
                                                     == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)))) 
                                              | ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d))) 
                                                 & (0x10U 
                                                    == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))))) 
                                          & (1U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__reg_count)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_start 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_addr_start_rd_1) 
                                        | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_addr_start_rd_2)) 
                                       | (((0x57U == 
                                            (0x7fU 
                                             & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                                           & ((((3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                     >> 0xcU))) 
                                                | (4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                       >> 0xcU)))) 
                                               | (IData)(
                                                         (0x50002000U 
                                                          == 
                                                          (0xfc007000U 
                                                           & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)))) 
                                              | (IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0xfc003000U 
                                                          & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f))))) 
                                          & (0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__reg_count)))));
    __Vtemp_had6707be__0[0U] = 0U;
    __Vtemp_had6707be__0[1U] = 0U;
    __Vtemp_had6707be__0[2U] = (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec0);
    __Vtemp_had6707be__0[3U] = (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec0 
                                        >> 0x20U));
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift = 0U;
    } else if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_en) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_be 
            = (0xffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_be));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift 
            = (7U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_insert)
                      ? ((IData)(1U) << (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))
                      : ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1) 
                         << (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))));
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_be = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift = 0U;
    }
    VL_SHIFTR_WWI(128,128,32, __Vtemp_ha430f412__0, __Vtemp_had6707be__0, 
                  ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift) 
                   << 3U));
    __Vtemp_had6707be__1[0U] = 0U;
    __Vtemp_had6707be__1[1U] = 0U;
    __Vtemp_had6707be__1[2U] = (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec0);
    __Vtemp_had6707be__1[3U] = (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec0 
                                        >> 0x20U));
    VL_SHIFTR_WWI(128,128,32, __Vtemp_h414bcd53__0, __Vtemp_had6707be__1, 0x40U);
    if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift))) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_down_result[0U] 
            = __Vtemp_ha430f412__0[0U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_down_result[1U] 
            = __Vtemp_ha430f412__0[1U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_down_result[2U] 
            = __Vtemp_ha430f412__0[2U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_down_result[3U] 
            = __Vtemp_ha430f412__0[3U];
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_down_result[0U] 
            = __Vtemp_h414bcd53__0[0U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_down_result[1U] 
            = __Vtemp_h414bcd53__0[1U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_down_result[2U] 
            = __Vtemp_h414bcd53__0[2U];
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_down_result[3U] 
            = __Vtemp_h414bcd53__0[3U];
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_vec1 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_insert)
            ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_opSel)
                ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift))
                    ? (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec1 
                       << 0x38U) : ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift))
                                     ? (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec1 
                                        << 0x30U) : 
                                    ((4U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift))
                                      ? (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec1 
                                         << 0x20U) : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec1)))
                : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift))
                    ? (QData)((IData)((0xffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec1))))
                    : ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift))
                        ? (QData)((IData)((0xffffU 
                                           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec1))))
                        : ((4U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_shift))
                            ? (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec1))
                            : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s0_vec1))))
            : 0ULL);
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s0_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew = 0U;
    } else if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_en) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s0_sew 
            = (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_sew));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
            = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_in1;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew 
            = (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_sew));
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__s0_sew = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 = 0ULL;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew = 0U;
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_haa65ff00__0 
        = ((1U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew)) 
           | (2U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_en)
                                         ? (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_opSel))
                                         : 0U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_hf13a33a9__0 
        = ((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel)) 
           & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                      >> 0x2fU)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__a3_ext 
        = ((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel)) 
           & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                      >> 0x3fU)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_h8ecbf4f4__0 
        = ((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel)) 
           & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                      >> 0xfU)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_hf17bcef7__0 
        = ((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel)) 
           & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                      >> 0x1fU)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_en)
                                           ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_en)
                                               ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in0
                                               : ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____VdfgTmp_h79e61d0d__0)
                                                   ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1
                                                   : 
                                                  vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
                                                  [vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew]))
                                           : 0ULL));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_he1763645__0 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel) 
                 & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                            >> 0xfU))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_he0e7f0a2__0 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel) 
                 & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                            >> 0x2fU))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b3_ext 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel) 
           & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
              >> 0x3fU));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_he0a64d24__0 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_opSel) 
                 & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                            >> 0x1fU))));
    if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__cfg_en) {
        if ((IData)((0x80000000U != (0xc0000000U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)))) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew 
                = (3U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vtype_nxt 
                         >> 3U));
        }
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data[0U][0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data[0U][1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data[0U][2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data[1U][0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data[1U][1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data[1U][2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data[2U][0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data[2U][1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data[2U][2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_rs_wb_group[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__decode_and_issue_block__decode_rs_wb_group
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_rs_wb_group[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__decode_and_issue_block__decode_rs_wb_group
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_phys_rs_addr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__decode_and_issue_block__decode_phys_rs_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_phys_rs_addr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__decode_and_issue_block__decode_phys_rs_addr
        [1U];
    __Vtemp_h96914474__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                                     >> 0x38U))))) 
                                         << 0x1fU) 
                                        | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_hb92bc7c9__0))));
    __Vtemp_h96914474__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                                      >> 0x38U))))) 
                                          << 0x1fU) 
                                         | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_hb92bc7c9__0))) 
                                        >> 0x20U));
    __Vtemp_h96914474__0[2U] = 0U;
    VL_EXTEND_WW(71,69, __Vtemp_hf46ae2f3__0, __Vtemp_h96914474__0);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[0U] 
        = (IData)((((QData)((IData)(((0x20080200U | 
                                      (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                        << 0x1eU) | 
                                       ((0x100000U 
                                         & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_sew) 
                                            << 0x13U)) 
                                        | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                           << 0xaU)))) 
                                     + (0x7fffffffU 
                                        & ((__Vtemp_hf46ae2f3__0[2U] 
                                            << 0x18U) 
                                           | (__Vtemp_hf46ae2f3__0[1U] 
                                              >> 8U)))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(
                                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                            >> 0x18U)) 
                                                   << 0x1fU) 
                                                  | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_h9730cce6__0) 
                                                 + 
                                                 (((IData)(
                                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                            >> 0x38U)) 
                                                   << 0x1fU) 
                                                  | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_hb92bc7c9__0))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[1U] 
        = (IData)(((((QData)((IData)(((0x20080200U 
                                       | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                           << 0x1eU) 
                                          | ((0x100000U 
                                              & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_sew) 
                                                 << 0x13U)) 
                                             | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT__v0_ext1) 
                                                << 0xaU)))) 
                                      + (0x7fffffffU 
                                         & ((__Vtemp_hf46ae2f3__0[2U] 
                                             << 0x18U) 
                                            | (__Vtemp_hf46ae2f3__0[1U] 
                                               >> 8U)))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                             >> 0x18U)) 
                                                    << 0x1fU) 
                                                   | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_h9730cce6__0) 
                                                  + 
                                                  (((IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                             >> 0x38U)) 
                                                    << 0x1fU) 
                                                   | vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk1__DOT__vAdd_unit0__DOT____VdfgTmp_hb92bc7c9__0))))) 
                   >> 0x20U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc1104ac1__0 
        = (IData)(((0U == (0x3fe00000U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U])) 
                   & (0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                        << 1U) | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                                  >> 0x1fU))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0 
        = (IData)((0U == (0xffbfeU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U])));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc48585f5__0 
        = (IData)(((0U == (0xff80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U])) 
                   & (0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                        << 3U) | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                  >> 0x1dU))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_hf73ed51b__0 
        = (IData)((0U == (0xffbfe00U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U])));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits8 
        = ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                     >> 8U)) | ((0x40U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                          << 1U)) | 
                                ((0x20U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                           >> 0x16U)) 
                                 | ((0x10U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                              >> 0xdU)) 
                                    | ((8U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                              >> 4U)) 
                                       | ((4U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                                 >> 0x1bU)) 
                                          | ((2U & 
                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                               >> 0x12U)) 
                                             | (1U 
                                                & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                                   >> 9U)))))))));
    if ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew))) {
        if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew))) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__j = 1U;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result 
                = ((0xfffffffffffffffeULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result) 
                   | (IData)((IData)((1U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                            >> 0xfU)))));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits 
                = (0xffU & (- (IData)((1U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                             >> 0xfU)))));
        } else {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__j = 2U;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result 
                = ((0xfffffffffffffffcULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result) 
                   | (IData)((IData)(((2U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                             >> 0xeU)) 
                                      | (1U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                               >> 7U))))));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits 
                = (0xffU & ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                      >> 8U)) | ((0x40U 
                                                  & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                                     >> 9U)) 
                                                 | ((0x20U 
                                                     & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                                        >> 0xaU)) 
                                                    | ((0x10U 
                                                        & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                                           >> 0xbU)) 
                                                       | (0xfU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                                           >> 7U))))))))));
        }
    } else if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew))) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__j = 4U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result 
            = ((0xfffffffffffffff8ULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result) 
               | (IData)((IData)(((4U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                         >> 0x19U)) 
                                  | ((2U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                            >> 6U)) 
                                     | (1U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                              >> 0x13U)))))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result 
            = ((0xfffffffffffffff7ULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result) 
               | ((QData)((IData)((1U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                         >> 0xfU)))) 
                  << 3U));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits 
            = (0xffU & ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                  >> 8U)) | ((0x40U 
                                              & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                                 >> 9U)) 
                                             | ((0x20U 
                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                    >> 0x16U)) 
                                                | ((0x10U 
                                                    & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                       >> 0x17U)) 
                                                   | ((8U 
                                                       & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                          >> 4U)) 
                                                      | ((4U 
                                                          & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                                             >> 5U)) 
                                                         | (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                                                             >> 0x13U))))))))))));
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__j = 8U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result 
            = ((0xfffffffffffffff8ULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result) 
               | (IData)((IData)(((4U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                         >> 0x1bU)) 
                                  | ((2U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                            >> 0x12U)) 
                                     | (1U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[0U] 
                                              >> 9U)))))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result 
            = ((0xffffffffffffffc7ULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result) 
               | ((QData)((IData)(((4U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                          >> 0x19U)) 
                                   | ((2U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                             >> 0x10U)) 
                                      | (1U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[1U] 
                                               >> 7U)))))) 
                  << 3U));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result 
            = ((0xffffffffffffff3fULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_s1_carry_result) 
               | ((QData)((IData)(((2U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                            >> 5U))))) 
                  << 6U));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits 
            = (0xffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits8));
    }
    if (vlSelf->__Vdlyvset__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v0) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data[vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v0] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v0))) 
                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data
                [vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v0]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v0)) 
                  << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v0)));
    }
    if (vlSelf->__Vdlyvset__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v1) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data[vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v1] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v1))) 
                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data
                [vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v1]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v1)) 
                  << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v1)));
    }
    if (vlSelf->__Vdlyvset__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v2) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data[vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v2] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v2))) 
                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data
                [vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v2]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v2)) 
                  << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v2)));
    }
    if (vlSelf->__Vdlyvset__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v3) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data[vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v3] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v3))) 
                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data
                [vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v3]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v3)) 
                  << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v3)));
    }
    if (vlSelf->__Vdlyvset__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v4) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data[vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v4] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v4))) 
                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data
                [vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v4]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v4)) 
                  << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v4)));
    }
    if (vlSelf->__Vdlyvset__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v5) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data[vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v5] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v5))) 
                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data
                [vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v5]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v5)) 
                  << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v5)));
    }
    if (vlSelf->__Vdlyvset__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v6) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data[vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v6] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v6))) 
                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data
                [vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v6]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v6)) 
                  << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v6)));
    }
    if (vlSelf->__Vdlyvset__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v7) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data[vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v7] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v7))) 
                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data
                [vlSelf->__Vdlyvdim0__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v7]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v7)) 
                  << (IData)(vlSelf->__Vdlyvlsb__cva5_sim__DOT__x_rvv_proc_main__DOT__vr__DOT__vec_data__v7)));
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__reg_count 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__reg_count;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s1_up_remainder 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s1_start)
            ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__w_s0_vec1
            : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__slide__DOT__vSlide_0__DOT__s2_up_remainder);
    if ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__a0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__a1 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b0 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b2 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b3 = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b1 = 0U;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__a0 
            = ((0x30000U & ((- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_h8ecbf4f4__0) 
                                        & (1U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))))) 
                            << 0x10U)) | (0xffffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__a1 
            = ((0x30000U & ((- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_hf17bcef7__0) 
                                        & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_haa65ff00__0)))) 
                            << 0x10U)) | (0xffffU & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec0 
                                                             >> 0x10U))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b0 
            = ((0x30000U & ((- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_he1763645__0) 
                                        & (1U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))))) 
                            << 0x10U)) | (0xffffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b2 
            = ((0x30000U & ((- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_he0e7f0a2__0) 
                                        & (1U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_sew))))) 
                            << 0x10U)) | (0xffffU & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                             >> 0x20U))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b3 
            = ((0x30000U & ((- (IData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b3_ext))) 
                            << 0x10U)) | (0xffffU & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                             >> 0x30U))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__b1 
            = ((0x30000U & ((- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_he0a64d24__0) 
                                        & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT____VdfgTmp_haa65ff00__0)))) 
                            << 0x10U)) | (0xffffU & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__mult__DOT__vMul_0__DOT__opSelector__DOT__r_vec1 
                                                             >> 0x10U))));
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
        = vlSelf->__Vdly__cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f;
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use[0U] = 0U;
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use[1U] = 0U;
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use[2U] = 0U;
    cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use
           [0U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data
           [0U][0U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use[0U] 
        = cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0;
    cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use
           [0U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data
           [1U][0U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use[0U] 
        = cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0;
    cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use
           [0U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data
           [2U][0U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use[0U] 
        = cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0;
    cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use
           [1U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data
           [0U][1U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use[1U] 
        = cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0;
    cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use
           [1U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data
           [1U][1U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use[1U] 
        = cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0;
    cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use
           [1U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data
           [2U][1U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use[1U] 
        = cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0;
    cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use
           [2U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data
           [0U][2U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use[2U] 
        = cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0;
    cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use
           [2U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data
           [1U][2U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use[2U] 
        = cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0;
    cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use
           [2U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT__read_data
           [2U][2U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use[2U] 
        = cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0;
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellout__id_waiting_for_writeback_toggle_mem_set__in_use[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellout__id_waiting_for_writeback_toggle_mem_set__in_use[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__decode_rs_wb_group[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__decode_rs_wb_group
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__decode_rs_wb_group[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__decode_rs_wb_group
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__decode_phys_rs_addr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__decode_phys_rs_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__decode_phys_rs_addr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__decode_phys_rs_addr
        [1U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc48585f5__0 
        = (IData)(((0U == (0xff80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[2U])) 
                   & (0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[2U] 
                                        << 3U) | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[1U] 
                                                  >> 0x1dU))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hf73ed51b__0 
        = (IData)((0U == (0xffbfe00U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[1U])));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc1104ac1__0 
        = (IData)(((0U == (0x3fe00000U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[0U])) 
                   & (0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[1U] 
                                        << 1U) | (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[0U] 
                                                  >> 0x1fU))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0 
        = (IData)((0U == (0xffbfeU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[0U])));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits8 
        = ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[2U] 
                     >> 8U)) | ((0x40U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[2U] 
                                          << 1U)) | 
                                ((0x20U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[1U] 
                                           >> 0x16U)) 
                                 | ((0x10U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[1U] 
                                              >> 0xdU)) 
                                    | ((8U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[1U] 
                                              >> 4U)) 
                                       | ((4U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[0U] 
                                                 >> 0x1bU)) 
                                          | ((2U & 
                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[0U] 
                                               >> 0x12U)) 
                                             | (1U 
                                                & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[0U] 
                                                   >> 9U)))))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_h624740d3__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc48585f5__0) 
           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_hf73ed51b__0));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__state 
        = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__state_next;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__state 
        = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__state_next;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mem_port_valid_out 
        = ((~ (IData)(vlSelf->rst)) & (0x27U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d)));
    if (vlSelf->rst) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__state = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__state = 0U;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_buf_l__DOT__w_count = 0U;
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_buf_l__DOT__w_count 
            = (0x7ffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_buf_l__DOT__w_count_d) 
                         + ((~ (0x7ffU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__w_buf_l__DOT__count))) 
                            & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mem_port_valid_out))));
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1 
        = (1U & ((IData)((0xaU == (0xaU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)))) 
                 | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMOP_en 
        = (IData)(((0x18U == (0x38U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))) 
                   & (2U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d))));
    cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____VdfgTmp_h6323f526__0 
        = (1U & ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)) 
                 ^ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d) 
                    >> 1U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____VdfgTmp_h79e61d0d__0 
        = (1U & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d) 
                  >> 1U) ^ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMoveWhole_en 
        = ((0x27U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)) 
           & (3U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable 
        = ((0x57U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d)) 
           & (((~ (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d) 
                    >> 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d))) 
               & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_active_1) 
                  | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_active_2))) 
              | ((3U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)) 
                 | ((4U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)) 
                    | ((6U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)) 
                       | (((2U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)) 
                           & (0x14U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))) 
                          | ((2U == (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d))) 
                             & (0x10U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)))))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx_next 
        = ((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__reg_count))
            ? (0xfffU & ((IData)(1U) + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx)))
            : 0U);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_en 
        = (1U & (IData)(((0x30U == (0x30U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))) 
                         & (~ (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                >> 2U) | (3U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl_max_reg 
        = ((0xaU >= ((IData)(0xbU) - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
            ? (7U & ((0x7ffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                - (IData)(1U))) >> 
                     ((IData)(0xbU) - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))))
            : 0U);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hc9eebbf2__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
           > (0x800U >> (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__reg_off 
        = vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mask_off
        [vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx 
        = ((0xbU >= ((IData)(3U) - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
            ? (0xfffU & ((0x7ffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx)) 
                         << ((IData)(3U) - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))))
            : 0U);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
        = ((4U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d))
            ? ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d))
                ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d))
                    ? 0ULL : ((0x10U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                               ? (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_d))
                               : (((0xeU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)) 
                                   | (0xfU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)))
                                   ? (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))
                                   : ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))
                                       ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))
                                           ? (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))
                                           : (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))))
                                       : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))
                                           ? (((QData)((IData)(
                                                               (0xffffU 
                                                                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                  << 0x20U) 
                                                 | (((QData)((IData)(
                                                                     (0xffffU 
                                                                      & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))))))
                                           : (((QData)((IData)(
                                                               (0xffU 
                                                                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                               << 0x38U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                        << 0x20U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                           << 0x18U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                              << 0x10U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                                 << 8U) 
                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d)))))))))))))))
                : ((0x10U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                    ? (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__lumop_d))
                    : (((0xeU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)) 
                        | (0xfU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)))
                        ? (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))
                        : ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))
                            ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))
                                ? (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))
                                : (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))))
                            : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))
                                ? (((QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                    << 0x30U) | (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                  << 0x20U) 
                                                 | (((QData)((IData)(
                                                                     (0xffffU 
                                                                      & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))))))
                                : (((QData)((IData)(
                                                    (0xffU 
                                                     & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                    << 0x38U) | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                        << 0x20U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                           << 0x18U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                              << 0x10U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))) 
                                                                 << 8U) 
                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d)))))))))))))))
            : ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d))
                ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d))
                    ? ((7U == (0x1fU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                        >> 1U))) ? (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sca_data_in_1_d))
                        : ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))
                            ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))
                                ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d
                                : (((QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d))))
                            : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))
                                ? (((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d)))) 
                                    << 0x30U) | (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d)))) 
                                                  << 0x20U) 
                                                 | (((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d)))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d)))))))
                                : (((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d)))) 
                                    << 0x38U) | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d)))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d)))) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d)))) 
                                                        << 0x20U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d)))) 
                                                           << 0x18U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d)))) 
                                                              << 0x10U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d)))) 
                                                                 << 8U) 
                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d))))))))))))))
                    : ((2U == (7U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                     >> 3U))) ? (((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))) 
                                                  | (4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))))
                                                  ? (QData)((IData)(
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d))))
                                                  : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_1)
                        : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_1))
                : ((0x14U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                    ? (QData)((IData)((0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__s_ext_imm_d))))
                    : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_1)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vtype_nxt 
        = ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
            >> 0x1fU) ? (0x3ffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                   >> 0x14U)) : (0x7ffU 
                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                    >> 0x14U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl_set 
        = (((0U == (0x1fU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                             >> 7U))) << 1U) | (0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                    >> 0xfU))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__cfg_unit__avl_new 
        = (0x7ffU & ((3U == (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                             >> 0x1eU)) ? (0x1fU & 
                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                            >> 0xfU))
                      : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__data_in_1_f));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_h97009a08__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
           > (0x800U >> (3U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                               >> 0xcU))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__whole_reg_rd 
        = ((IData)(((0x800000U == (0xdf00000U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                    & ((7U == (0x7fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                       | (0x27U == (0x7fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f))))) 
           | (IData)((0x9c003057U == (0xfc00707fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vs1 
        = ((0x57U == (0x7fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
           & ((2U >= (7U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                            >> 0xcU))) & (0x14U != 
                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                           >> 0x1aU))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__logic_mop 
        = ((IData)(((0x2057U == (0x707fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                    & ((3U == (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                               >> 0x1dU)) | ((0x10U 
                                              == (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                  >> 0x1aU)) 
                                             & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                    >> 0xfU))))))) 
           | (IData)((0xb00027U == (0x1f0007fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_h048c0767__0 
        = ((0x57U == (0x7fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
           & (7U != (7U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                           >> 0xcU))));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellout__id_waiting_for_writeback_toggle_mem_set__in_use
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellout__id_waiting_for_writeback_toggle_mem_set__in_use
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__register_file_gen__BRA__0__KET____DOT__reg_group__read_addr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__decode_phys_rs_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__register_file_gen__BRA__0__KET____DOT__reg_group__read_addr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__decode_phys_rs_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__register_file_gen__BRA__1__KET____DOT__reg_group__read_addr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__decode_phys_rs_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__register_file_gen__BRA__1__KET____DOT__reg_group__read_addr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__decode_phys_rs_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse_read_addr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__decode_phys_rs_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse_read_addr[2U] 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.phys_rs_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse_read_addr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT____Vcellinp__register_file_block__decode_phys_rs_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse_read_addr[3U] 
        = vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.phys_rs_addr
        [1U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits 
        = ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_sew))
            ? ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[2U] 
                         >> 8U)) | ((0x40U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[2U] 
                                              >> 9U)) 
                                    | ((0x20U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[2U] 
                                                 >> 0xaU)) 
                                       | ((0x10U & 
                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[2U] 
                                            >> 0xbU)) 
                                          | (0xfU & 
                                             (- (IData)(
                                                        (1U 
                                                         & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[1U] 
                                                            >> 7U)))))))))
            : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_sew))
                ? ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[2U] 
                             >> 8U)) | ((0x40U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[2U] 
                                                  >> 9U)) 
                                        | ((0x20U & 
                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[1U] 
                                             >> 0x16U)) 
                                           | ((0x10U 
                                               & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[1U] 
                                                  >> 0x17U)) 
                                              | ((8U 
                                                  & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[1U] 
                                                     >> 4U)) 
                                                 | ((4U 
                                                     & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[1U] 
                                                        >> 5U)) 
                                                    | (3U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__result[0U] 
                                                                        >> 0x13U)))))))))))
                : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits8)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__w_minMax_result 
        = (((QData)((IData)((0xffU & ((1U & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                              >> 7U) 
                                             ^ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                >> 3U)))
                                       ? (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                  >> 0x38U))
                                       : (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                                  >> 0x38U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((1U & (
                                                   ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                    >> 3U)))
                                             ? (IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                        >> 0x30U))
                                             : (IData)(
                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                                        >> 0x30U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((1U 
                                                             & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                                 >> 5U) 
                                                                ^ 
                                                                ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                                 >> 3U)))
                                                             ? (IData)(
                                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                                        >> 0x28U))
                                                             : (IData)(
                                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                                                        >> 0x28U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((1U 
                                                              & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                                  >> 4U) 
                                                                 ^ 
                                                                 ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                                  >> 3U)))
                                                              ? (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                                         >> 0x20U))
                                                              : (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                                 ^ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel)))
                                                              ? (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                                         >> 0x18U))
                                                              : (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                                                         >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((1U 
                                                                    & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                                        >> 2U) 
                                                                       ^ 
                                                                       ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                                        >> 3U)))
                                                                    ? (IData)(
                                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                                               >> 0x10U))
                                                                    : (IData)(
                                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                                                               >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                                           >> 1U) 
                                                                          ^ 
                                                                          ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                                           >> 3U)))
                                                                       ? (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0 
                                                                                >> 8U))
                                                                       : (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1 
                                                                                >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                                           ^ 
                                                                           ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_opSel) 
                                                                            >> 3U)))
                                                                        ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec0)
                                                                        : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_vec1))))))))))));
    if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__turn) {
        if ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))) {
            if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))) {
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in1 = 0ULL;
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in0 = 0ULL;
            } else {
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in1 
                    = (((QData)((IData)((- (IData)(
                                                   ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                               >> 0x3fU))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                     >> 0x20U))));
                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in0 
                    = (((QData)((IData)((- (IData)(
                                                   ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                    & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                       >> 0x3fU)))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                     >> 0x20U))));
            }
        } else if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in1 
                = (((QData)((IData)((((- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                             >> 0x3fU))))) 
                                      << 0x10U) | (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                              >> 0x30U)))))) 
                    << 0x20U) | (QData)((IData)((((- (IData)(
                                                             ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                                              & (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                                         >> 0x2fU))))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                               >> 0x20U)))))));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in0 
                = (((QData)((IData)((((- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                  & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                     >> 0x3fU)))) 
                                      << 0x10U) | (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                              >> 0x30U)))))) 
                    << 0x20U) | (QData)((IData)((((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                                 & (IData)(
                                                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                                            >> 0x2fU)))))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                               >> 0x20U)))))));
        } else {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in1 
                = (((QData)((IData)((((- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                             >> 0x3fU))))) 
                                      << 0x18U) | (
                                                   (0xff0000U 
                                                    & ((IData)(
                                                               (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                                >> 0x38U)) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & ((- (IData)(
                                                                     ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                                                      & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                                                >> 0x37U))))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                                    >> 0x30U)))))))) 
                    << 0x20U) | (QData)((IData)((((- (IData)(
                                                             ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                                              & (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                                         >> 0x2fU))))) 
                                                  << 0x18U) 
                                                 | ((0xff0000U 
                                                     & ((IData)(
                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                                 >> 0x28U)) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & ((- (IData)(
                                                                      ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                                                       & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                                                >> 0x27U))))) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                                     >> 0x20U)))))))));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in0 
                = (((QData)((IData)((((- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                  & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                     >> 0x3fU)))) 
                                      << 0x18U) | (
                                                   (0xff0000U 
                                                    & ((IData)(
                                                               (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                                >> 0x38U)) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                                         & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                                                >> 0x37U)))))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                                    >> 0x30U)))))))) 
                    << 0x20U) | (QData)((IData)((((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                                 & (IData)(
                                                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                                            >> 0x2fU)))))) 
                                                  << 0x18U) 
                                                 | ((0xff0000U 
                                                     & ((IData)(
                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                                 >> 0x28U)) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                                          & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                                                >> 0x27U)))))) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                                     >> 0x20U)))))))));
        }
    } else if ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))) {
        if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))) {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in1 = 0ULL;
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in0 = 0ULL;
        } else {
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in1 
                = (((QData)((IData)((- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                                & (IData)(
                                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2)));
            vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in0 
                = (((QData)((IData)((- (IData)((1U 
                                                & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                              >> 0x1fU)))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1)));
        }
    } else if ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in1 
            = (((QData)((IData)((((- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                              & (IData)(
                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                         >> 0x1fU))))) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                          >> 0x10U)))))) 
                << 0x20U) | (QData)((IData)((((- (IData)(
                                                         ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                                          & (IData)(
                                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                                     >> 0xfU))))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2))))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in0 
            = (((QData)((IData)((((- (IData)((1U & 
                                              ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                               & (IData)(
                                                         (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                          >> 0x1fU)))))) 
                                  << 0x10U) | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                          >> 0x10U)))))) 
                << 0x20U) | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                             & (IData)(
                                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                                        >> 0xfU)))))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1))))));
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in1 
            = (((QData)((IData)((((- (IData)(((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                              & (IData)(
                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                         >> 0x1fU))))) 
                                  << 0x18U) | ((0xff0000U 
                                                & ((IData)(
                                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                            >> 0x18U)) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & ((- (IData)(
                                                                 ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                                                  & (IData)(
                                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                                             >> 0x17U))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                                >> 0x10U)))))))) 
                << 0x20U) | (QData)((IData)((((- (IData)(
                                                         ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                                          & (IData)(
                                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                                     >> 0xfU))))) 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & ((IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                             >> 8U)) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & ((- (IData)(
                                                                  ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSigned_op1) 
                                                                   & (IData)(
                                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                                                              >> 7U))))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2))))))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in0 
            = (((QData)((IData)((((- (IData)((1U & 
                                              ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                               & (IData)(
                                                         (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                          >> 0x1fU)))))) 
                                  << 0x18U) | ((0xff0000U 
                                                & ((IData)(
                                                           (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                            >> 0x18U)) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                                     & (IData)(
                                                                               (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                                                >> 0x17U)))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                                >> 0x10U)))))))) 
                << 0x20U) | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                             & (IData)(
                                                                       (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                                        >> 0xfU)))))) 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & ((IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                             >> 8U)) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                                      & (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                                                >> 7U)))))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1))))))));
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAddSubCarry_en 
        = (IData)(((0x10U == (0x3cU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))) 
                   & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____VdfgTmp_h6323f526__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_opSel 
        = (3U & (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____VdfgTmp_h79e61d0d__0)) 
                  & (0x28U == (0x38U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))))
                  ? (2U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                           << 1U)) : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMCmp_en 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____VdfgTmp_h79e61d0d__0)) 
           & (0x18U == (0x38U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMerge_en 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable) 
           & ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vm_d)) 
              & (0x17U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMul_en 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable) 
           & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
               >> 5U) & ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMoveWhole_en)) 
                         & ((IData)((4U == (0x14U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)))) 
                            | (2U == (3U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                            >> 2U)))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_en 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable) 
           & (0xeU == (0x3eU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRedAndOrXor_en 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable) 
           & ((0U != (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))) 
              & (IData)(((0U == (0x3cU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))) 
                         & (2U == (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRedSum_min_max_en 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable) 
           & (((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)) 
               | (1U == (0xfU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                 >> 2U)))) & (2U == 
                                              (3U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_sew 
        = (3U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew) 
                 + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_en)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl_max_off_m 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hc9eebbf2__0)
            ? 0x1fU : ((0x1fU >= ((IData)(6U) - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                        ? (0xffU & ((0x7ffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                               - (IData)(1U))) 
                                    >> ((IData)(6U) 
                                        - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))))
                        : 0U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__max_off_out 
        = (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__addr_start)
                     ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_out_w_reg)
                         ? 0xffU : (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_mask_out)
                                              ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl_max_off_m)
                                              : (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                                  > 
                                                  (0x800U 
                                                   >> (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_resp_sew)))
                                                  ? 0xffU
                                                  : 
                                                 ((0x1fU 
                                                   >= 
                                                   ((IData)(3U) 
                                                    - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_resp_sew)))
                                                   ? 
                                                  ((0x7ffU 
                                                    & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                                       - (IData)(1U))) 
                                                   >> 
                                                   ((IData)(3U) 
                                                    - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_resp_sew)))
                                                   : 0U)))))
                     : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_dest__DOT__max_off)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[0U] 
        = ((0xffffffffffffff00ULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [0U]) | (IData)((IData)((0xffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[0U] 
        = ((0xffffffffffff00ffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [0U]) | ((QData)((IData)((0xffU & ((IData)(1U) 
                                               + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx))))) 
                     << 8U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[0U] 
        = ((0xffffffffff00ffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [0U]) | ((QData)((IData)((0xffU & ((IData)(2U) 
                                               + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx))))) 
                     << 0x10U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[0U] 
        = ((0xffffffff00ffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [0U]) | ((QData)((IData)((0xffU & ((IData)(3U) 
                                               + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx))))) 
                     << 0x18U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[0U] 
        = ((0xffffff00ffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [0U]) | ((QData)((IData)((0xffU & ((IData)(4U) 
                                               + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx))))) 
                     << 0x20U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[0U] 
        = ((0xffff00ffffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [0U]) | ((QData)((IData)((0xffU & ((IData)(5U) 
                                               + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx))))) 
                     << 0x28U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[0U] 
        = ((0xff00ffffffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [0U]) | ((QData)((IData)((0xffU & ((IData)(6U) 
                                               + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx))))) 
                     << 0x30U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[0U] 
        = ((0xffffffffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [0U]) | ((QData)((IData)((0xffU & ((IData)(7U) 
                                               + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx))))) 
                     << 0x38U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[1U] 
        = ((0xffffffffffff0000ULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [1U]) | (IData)((IData)((0xffffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[1U] 
        = ((0xffffffff0000ffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [1U]) | ((QData)((IData)((0xffffU & ((IData)(1U) 
                                                 + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx))))) 
                     << 0x10U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[1U] 
        = ((0xffff0000ffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [1U]) | ((QData)((IData)((0xffffU & ((IData)(2U) 
                                                 + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx))))) 
                     << 0x20U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[1U] 
        = ((0xffffffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [1U]) | ((QData)((IData)((0xffffU & ((IData)(3U) 
                                                 + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx))))) 
                     << 0x30U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[2U] 
        = ((0xffffffff00000000ULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [2U]) | (IData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[2U] 
        = ((0xffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data
            [2U]) | ((QData)((IData)(((IData)(1U) + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx)))) 
                     << 0x20U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vID_0__DOT__s0_data[3U] 
        = (QData)((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vStartIdx));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vID_en 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable) 
           & ((0x14U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)) 
              & (0x11ULL == vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vFirst_Popc_en 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable) 
           & ((0x10U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)) 
              & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                         >> 4U))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMoveXS_en 
        = ((0x10U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)) 
           & ((~ (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                          >> 4U))) & (2U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[2U] 
        = ((0xffffffff00000000ULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [2U]) | (IData)((IData)(((8U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                      ? ((IData)(0x20U) 
                                         - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1))
                                      : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[2U] 
        = ((0xffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [2U]) | ((QData)((IData)(((8U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                       ? ((IData)(0x20U) 
                                          - (IData)(
                                                    (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                     >> 0x20U)))
                                       : (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                  >> 0x20U))))) 
                     << 0x20U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[0U] 
        = ((0xffffffffffffff00ULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [0U]) | (IData)((IData)((0xffU & ((8U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                               ? ((IData)(8U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1)))
                                               : (0xffU 
                                                  & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1)))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[0U] 
        = ((0xffffffffffff00ffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [0U]) | ((QData)((IData)((0xffU & ((8U 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                                ? ((IData)(8U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                               >> 8U))))
                                                : (0xffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                              >> 8U))))))) 
                     << 8U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[0U] 
        = ((0xffffffffff00ffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [0U]) | ((QData)((IData)((0xffU & ((8U 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                                ? ((IData)(8U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                               >> 0x10U))))
                                                : (0xffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                              >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[0U] 
        = ((0xffffffff00ffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [0U]) | ((QData)((IData)((0xffU & ((8U 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                                ? ((IData)(8U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                               >> 0x18U))))
                                                : (0xffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                              >> 0x18U))))))) 
                     << 0x18U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[0U] 
        = ((0xffffff00ffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [0U]) | ((QData)((IData)((0xffU & ((8U 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                                ? ((IData)(8U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                               >> 0x20U))))
                                                : (0xffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                              >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[0U] 
        = ((0xffff00ffffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [0U]) | ((QData)((IData)((0xffU & ((8U 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                                ? ((IData)(8U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                               >> 0x28U))))
                                                : (0xffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                              >> 0x28U))))))) 
                     << 0x28U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[0U] 
        = ((0xff00ffffffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [0U]) | ((QData)((IData)((0xffU & ((8U 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                                ? ((IData)(8U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                               >> 0x30U))))
                                                : (0xffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                              >> 0x30U))))))) 
                     << 0x30U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[0U] 
        = ((0xffffffffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [0U]) | ((QData)((IData)((0xffU & ((8U 
                                                & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                                ? ((IData)(8U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                               >> 0x38U))))
                                                : (0xffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                              >> 0x38U))))))) 
                     << 0x38U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[1U] 
        = ((0xffffffffffff0000ULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [1U]) | (IData)((IData)((0xffffU & ((8U 
                                                 & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                                 ? 
                                                ((IData)(0x10U) 
                                                 - 
                                                 (0xffffU 
                                                  & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1)))
                                                 : 
                                                (0xffffU 
                                                 & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1)))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[1U] 
        = ((0xffffffff0000ffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [1U]) | ((QData)((IData)((0xffffU & ((8U 
                                                  & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                                  ? 
                                                 ((IData)(0x10U) 
                                                  - 
                                                  (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                              >> 0x10U))))
                                                  : 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                             >> 0x10U))))))) 
                     << 0x10U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[1U] 
        = ((0xffff0000ffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [1U]) | ((QData)((IData)((0xffffU & ((8U 
                                                  & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                                  ? 
                                                 ((IData)(0x10U) 
                                                  - 
                                                  (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                              >> 0x20U))))
                                                  : 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                             >> 0x20U))))))) 
                     << 0x20U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew[1U] 
        = ((0xffffffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
            [1U]) | ((QData)((IData)((0xffffU & ((8U 
                                                  & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))
                                                  ? 
                                                 ((IData)(0x10U) 
                                                  - 
                                                  (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                              >> 0x30U))))
                                                  : 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1 
                                                             >> 0x30U))))))) 
                     << 0x30U));
    cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_ld__DOT__state_next) 
           & ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__logic_mop)) 
              | (IData)(vlSelf->cva5_sim__DOT__x_axi_adapter__DOT__axi_adapter_rd_inst__DOT__s_axi_rlast_reg)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__widen_en 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_h048c0767__0) 
           & (IData)((0xc0000000U == (0xd0000000U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_h048c0767__0) 
           | (7U == (0x7fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__hold_reg_group 
        = ((~ (IData)(vlSelf->rst)) & ((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__reg_count)) 
                                       | ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__reg_count)) 
                                          & ((0x27U 
                                              == (0x7fU 
                                                  & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                                             | ((7U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                                                | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_h048c0767__0) 
                                                   & (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__logic_mop)) 
                                                       & (8U 
                                                          < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl))) 
                                                      | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__logic_mop) 
                                                         & (0x40U 
                                                            < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl))))))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vs2 
        = (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_h048c0767__0) 
            & ((0x17U != (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                          >> 0x1aU)) & (0x14U != (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                  >> 0x1aU)))) 
           | (((7U == (0x7fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
               | (0x27U == (0x7fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f))) 
              & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                 >> 0x1aU)));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__contiguous_retire 
        = (1U & (~ (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                    >> 0xdU)));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_is_post_issue[0U] 
        = (0U < (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__post_issue_count));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_ready_to_retire[0U] 
        = ((vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_is_post_issue
            [0U] & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__contiguous_retire)) 
           & (~ vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback
              [0U]));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_port_valid_next[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_ready_to_retire
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_with_rd_found 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_port_valid_next
           [0U] & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_id_uses_rd));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__contiguous_retire 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__contiguous_retire) 
           & (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_port_valid_next
              [0U] & (~ (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                         >> 0xaU))));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_is_post_issue[1U] 
        = (1U < (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__post_issue_count));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_ready_to_retire[1U] 
        = ((vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_is_post_issue
            [1U] & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__contiguous_retire)) 
           & (~ vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback
              [1U]));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_port_valid_next[1U] 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_ready_to_retire
           [1U] & (~ (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_id_uses_rd) 
                       >> 1U) & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_with_rd_found))));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_with_rd_found 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_with_rd_found) 
           | (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_port_valid_next
              [1U] & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_id_uses_rd) 
                      >> 1U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__contiguous_retire 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__contiguous_retire) 
           & (vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_port_valid_next
              [1U] & (~ (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                         >> 0xaU))));
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__register_file_gen__BRA__0__KET____DOT__reg_group__data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__register_file_gen__BRA__0__KET____DOT__reg_group__read_addr
        [0U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__register_file_gen__BRA__0__KET____DOT__reg_group__data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__0__KET____DOT__reg_group__DOT__register_file_bank
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__register_file_gen__BRA__0__KET____DOT__reg_group__read_addr
        [1U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__register_file_gen__BRA__1__KET____DOT__reg_group__data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__register_file_gen__BRA__1__KET____DOT__reg_group__read_addr
        [0U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__register_file_gen__BRA__1__KET____DOT__reg_group__data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__register_file_gen__BRA__1__KET____DOT__reg_group__DOT__register_file_bank
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__register_file_gen__BRA__1__KET____DOT__reg_group__read_addr
        [1U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__read_addr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse_read_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__read_addr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse_read_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__read_addr[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse_read_addr
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__read_addr[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse_read_addr
        [3U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__minMax_result 
        = (QData)((IData)(((((1U & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                     >> 3U) ^ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_opSel) 
                                               >> 1U)))
                              ? (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                         >> 0x18U))
                              : (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                         >> 0x38U))) 
                            << 0x18U) | ((0xff0000U 
                                          & (((1U & 
                                               (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                 >> 2U) 
                                                ^ ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_opSel) 
                                                   >> 1U)))
                                               ? (IData)(
                                                         (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                          >> 0x10U))
                                               : (IData)(
                                                         (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                          >> 0x30U))) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & (((2U 
                                                  & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                     ^ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_opSel)))
                                                  ? (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                             >> 8U))
                                                  : (IData)(
                                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                             >> 0x28U))) 
                                                << 8U)) 
                                            | (0xffU 
                                               & ((1U 
                                                   & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__genblk2__DOT__sum32__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__sgn_bits) 
                                                      ^ 
                                                      ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_opSel) 
                                                       >> 1U)))
                                                   ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0)
                                                   : (IData)(
                                                             (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s0_vec0 
                                                              >> 0x20U)))))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_in1 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_en)
            ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vWiden_in1
            : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____Vcellinp__add_sub__DOT__vAdd_0__in_opSel 
        = (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMCmp_en) 
            << 8U) | ((0xe0U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                << 5U)) | (((1U == 
                                             (0xfU 
                                              & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                 >> 2U))) 
                                            << 4U) 
                                           | ((0xcU 
                                               & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                  << 2U)) 
                                              | ((1U 
                                                  & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                                      >> 2U) 
                                                     | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMCmp_en)))
                                                  ? 2U
                                                  : 
                                                 (3U 
                                                  & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAdd_en 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable) 
           & ((IData)(((0U == (0x38U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))) 
                       & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____VdfgTmp_h6323f526__0))) 
              | ((0xcU == (0xfU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d) 
                                   >> 2U))) | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMCmp_en) 
                                               | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAddSubCarry_en)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_insert 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vSlide_en) 
           & (IData)(((6U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)) 
                      & (0xeU == (0x3eU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____Vcellinp__red__DOT__vRed0__in_valid 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRedAndOrXor_en) 
           | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vRedSum_min_max_en));
    if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__whole_reg_rd) {
        vlSelf->__VdfgTmp_hc14a2981__0 = 0xffU;
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__reg_count_avl = 0x7ffU;
    } else {
        vlSelf->__VdfgTmp_hc14a2981__0 = (0xffU & (
                                                   (0x27U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f))
                                                    ? 
                                                   ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__logic_mop)
                                                     ? 
                                                    ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_h97009a08__0)
                                                      ? 0x1fU
                                                      : 
                                                     ((0x1fU 
                                                       >= 
                                                       ((IData)(6U) 
                                                        - 
                                                        (3U 
                                                         & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                            >> 0xcU))))
                                                       ? 
                                                      ((0x7ffU 
                                                        & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                                           - (IData)(1U))) 
                                                       >> 
                                                       ((IData)(6U) 
                                                        - 
                                                        (3U 
                                                         & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                            >> 0xcU))))
                                                       : 0U))
                                                     : 
                                                    ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_h97009a08__0)
                                                      ? 0xffU
                                                      : 
                                                     ((0x1fU 
                                                       >= 
                                                       ((IData)(3U) 
                                                        - 
                                                        (3U 
                                                         & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                            >> 0xcU))))
                                                       ? 
                                                      ((0x7ffU 
                                                        & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                                           - (IData)(1U))) 
                                                       >> 
                                                       ((IData)(3U) 
                                                        - 
                                                        (3U 
                                                         & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                            >> 0xcU))))
                                                       : 0U)))
                                                    : 
                                                   ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__logic_mop)
                                                     ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl_max_off_m)
                                                     : 
                                                    ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hc9eebbf2__0)
                                                      ? 0xffU
                                                      : 
                                                     ((0x1fU 
                                                       >= 
                                                       ((IData)(3U) 
                                                        - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                                                       ? 
                                                      ((0x7ffU 
                                                        & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                                           - (IData)(1U))) 
                                                       >> 
                                                       ((IData)(3U) 
                                                        - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                                                       : 0U)))));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__reg_count_avl 
            = (0x7ffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__widen_en)
                          ? (0xffeU & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                        - (IData)(1U)) 
                                       << 1U)) : (0x7ffU 
                                                  & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                                     - (IData)(1U)))));
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_in0 
        = (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMoveXS_en) 
            | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMoveWhole_en))
            ? vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2
            : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_data_in1);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMove_en 
        = (((0x17U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)) 
            & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vm_d)) 
           | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMoveWhole_en) 
              | (((0x10U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)) 
                  & ((~ (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vr_rd_data_out_2 
                                 >> 4U))) & (6U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)))) 
                 | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMoveXS_en))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[0U] 
        = ((0xffffffffffffff00ULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [0U]) | (IData)((IData)((0xffU & VL_POWSS_III(8,32,8, (IData)(2U), 
                                                          (0xffU 
                                                           & (IData)(
                                                                     vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                     [0U])), 1,0)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[0U] 
        = ((0xffffffffffff00ffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [0U]) | ((QData)((IData)((0xffU & VL_POWSS_III(8,32,8, (IData)(2U), 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                       [0U] 
                                                                       >> 8U))), 1,0)))) 
                     << 8U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[0U] 
        = ((0xffffffffff00ffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [0U]) | ((QData)((IData)((0xffU & VL_POWSS_III(8,32,8, (IData)(2U), 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                       [0U] 
                                                                       >> 0x10U))), 1,0)))) 
                     << 0x10U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[0U] 
        = ((0xffffffff00ffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [0U]) | ((QData)((IData)((0xffU & VL_POWSS_III(8,32,8, (IData)(2U), 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                       [0U] 
                                                                       >> 0x18U))), 1,0)))) 
                     << 0x18U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[0U] 
        = ((0xffffff00ffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [0U]) | ((QData)((IData)((0xffU & VL_POWSS_III(8,32,8, (IData)(2U), 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                       [0U] 
                                                                       >> 0x20U))), 1,0)))) 
                     << 0x20U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[0U] 
        = ((0xffff00ffffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [0U]) | ((QData)((IData)((0xffU & VL_POWSS_III(8,32,8, (IData)(2U), 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                       [0U] 
                                                                       >> 0x28U))), 1,0)))) 
                     << 0x28U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[0U] 
        = ((0xff00ffffffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [0U]) | ((QData)((IData)((0xffU & VL_POWSS_III(8,32,8, (IData)(2U), 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                       [0U] 
                                                                       >> 0x30U))), 1,0)))) 
                     << 0x30U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[0U] 
        = ((0xffffffffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [0U]) | ((QData)((IData)((0xffU & VL_POWSS_III(8,32,8, (IData)(2U), 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                       [0U] 
                                                                       >> 0x38U))), 1,0)))) 
                     << 0x38U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[1U] 
        = ((0xffffffffffff0000ULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [1U]) | (IData)((IData)((0xffffU & VL_POWSS_III(16,32,16, (IData)(2U), 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                       [1U])), 1,0)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[1U] 
        = ((0xffffffff0000ffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [1U]) | ((QData)((IData)((0xffffU & VL_POWSS_III(16,32,16, (IData)(2U), 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                         [1U] 
                                                                         >> 0x10U))), 1,0)))) 
                     << 0x10U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[1U] 
        = ((0xffff0000ffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [1U]) | ((QData)((IData)((0xffffU & VL_POWSS_III(16,32,16, (IData)(2U), 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                         [1U] 
                                                                         >> 0x20U))), 1,0)))) 
                     << 0x20U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[1U] 
        = ((0xffffffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [1U]) | ((QData)((IData)((0xffffU & VL_POWSS_III(16,32,16, (IData)(2U), 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                         [1U] 
                                                                         >> 0x30U))), 1,0)))) 
                     << 0x30U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[2U] 
        = ((0xffffffff00000000ULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [2U]) | (IData)((IData)(VL_POWSS_III(32,32,32, (IData)(2U), (IData)(
                                                                                vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                                [2U]), 1,0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew[2U] 
        = ((0xffffffffULL & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_mult_sew
            [2U]) | ((QData)((IData)(VL_POWSS_III(32,32,32, (IData)(2U), (IData)(
                                                                                (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vShift_cmpl_sew
                                                                                [2U] 
                                                                                >> 0x20U)), 1,0))) 
                     << 0x20U));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0U] 
        = (((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[1U] 
        = (((1U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((1U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[2U] 
        = (((2U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((2U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[3U] 
        = (((3U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((3U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[4U] 
        = (((4U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((4U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[5U] 
        = (((5U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((5U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[6U] 
        = (((6U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((6U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[7U] 
        = (((7U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((7U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[8U] 
        = (((8U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((8U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[9U] 
        = (((9U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((9U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0xaU] 
        = (((0xaU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0xaU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0xbU] 
        = (((0xbU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0xbU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0xcU] 
        = (((0xcU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0xcU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0xdU] 
        = (((0xdU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0xdU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0xeU] 
        = (((0xeU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0xeU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0xfU] 
        = (((0xfU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0xfU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x10U] 
        = (((0x10U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x10U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x11U] 
        = (((0x11U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x11U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x12U] 
        = (((0x12U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x12U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x13U] 
        = (((0x13U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x13U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x14U] 
        = (((0x14U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x14U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x15U] 
        = (((0x15U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x15U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x16U] 
        = (((0x16U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x16U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x17U] 
        = (((0x17U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x17U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x18U] 
        = (((0x18U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x18U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x19U] 
        = (((0x19U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x19U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x1aU] 
        = (((0x1aU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x1aU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x1bU] 
        = (((0x1bU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x1bU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x1cU] 
        = (((0x1cU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x1cU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x1dU] 
        = (((0x1dU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x1dU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x1eU] 
        = (((0x1eU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x1eU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_clr[0x1fU] 
        = (((0x1fU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__dest_m)) 
            & (IData)(cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hdd0276b9__0)) 
           | ((0x1fU == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_addr_out)) 
              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hf886a8b9__0)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__widen_en) 
           | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__widen_en_d));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__no_bubble 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__hold_reg_group) 
           & (0U < (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__reg_count)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall 
        = ((IData)(vlSelf->rst) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__hold_reg_group) 
                                    & (0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__reg_count))) 
                                   | ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz
                                       [(0x1fU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                  >> 0xfU))] 
                                       & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vs1)) 
                                      | ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz
                                          [(0x1fU & 
                                            (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                             >> 0x14U))] 
                                          & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vs2)) 
                                         | ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz
                                             [(0x1fU 
                                               & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                  >> 7U))] 
                                             & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vs1) 
                                                | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vs2) 
                                                   | ((0x27U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                                                      | (7U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)))))) 
                                            | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__wait_mem) 
                                               | ((0x57U 
                                                   == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mjr_d)) 
                                                  & (7U 
                                                     == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)))))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_next 
        = (0x3cU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_next));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_next 
        = ((0x3cU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_next)) 
           | (3U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_next) 
                    + vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_port_valid_next
                    [0U])));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_next 
        = ((0x3cU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_next)) 
           | (3U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_next) 
                    + vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_port_valid_next
                    [1U])));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_next 
        = ((3U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_next)) 
           | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_with_rd_found) 
               << 5U) | (vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__id_block__retire_ids_next
                         [(1U & (5U >> (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_id_uses_rd)))] 
                         << 2U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__rs_data_set[0U][0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__register_file_gen__BRA__0__KET____DOT__reg_group__data
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__rs_data_set[0U][1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__register_file_gen__BRA__0__KET____DOT__reg_group__data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__rs_data_set[1U][0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__register_file_gen__BRA__1__KET____DOT__reg_group__data
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__rs_data_set[1U][1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__register_file_gen__BRA__1__KET____DOT__reg_group__data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__read_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__read_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__read_addr
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__read_addr
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__clear_index;
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vAndOrXor_en 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_enable) 
           & (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT____VdfgTmp_h79e61d0d__0)) 
               & (8U == (0x3cU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)))) 
              | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMove_en) 
                 | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__vMOP_en))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT____VdfgTmp_h2306eb48__0 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen)) 
           | (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__turn)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT____VdfgTmp_h3afe6e14__0 
        = (1U & ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen)) 
                 | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__turn)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h2306eb48__0 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen)) 
           | (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__turn)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h3afe6e14__0 
        = (1U & ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen)) 
                 | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__turn)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__cfg_en 
        = (IData)(((0x7057U == (0x707fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                   & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[1U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x80U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[2U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x100U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[3U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x180U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[4U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x200U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[5U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x280U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[6U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x300U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[7U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x380U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[8U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x400U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[9U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x480U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0xaU] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x500U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0xbU] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x580U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0xcU] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x600U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0xdU] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x680U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0xeU] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x700U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0xfU] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x780U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x10U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x800U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x11U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x880U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x12U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x900U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x13U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0x980U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x14U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0xa00U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x15U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0xa80U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x16U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0xb00U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x17U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0xb80U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x18U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0xc00U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x19U] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0xc80U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x1aU] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0xd00U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x1bU] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0xd80U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x1cU] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0xe00U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x1dU] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0xe80U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x1eU] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0xf00U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vec_haz_set[0x1fU] 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(((0xf80U == (0xf80U & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f)) 
                      & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____VdfgTmp_hfb98ef1f__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src2__en 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vs2));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__en 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vs1) 
              | (0x27U == (0x7fU & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f))));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__5__KET__.ready 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__stall)) 
           & ((7U & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                     >> 9U)) == vlSelf->cva5_sim__DOT__cpu__DOT__retire_ids
              [0U]));
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__3__KET____DOT__mem__read_id[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__3__KET____DOT__mem__read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__3__KET____DOT__mem__read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__3__KET____DOT__mem__read_id[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__3__KET____DOT__mem__read_id[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___read_addr
        [4U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__turn_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen) 
           & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src2__en) 
               | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__state)) 
              & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__turn))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__state_next 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src2__en) 
                                       | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__state) 
                                          & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT____VdfgTmp_h8e9ef457__0) 
                                             | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT____VdfgTmp_h79cacbbc__0) 
                                                | ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__turn)) 
                                                   & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen)))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_addr_start_rd_2 
        = (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__state)) 
            | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__curr_reg) 
                == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__max_reg)) 
               & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT____VdfgTmp_h43d852dd__0) 
                  & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT____VdfgTmp_h3afe6e14__0)))) 
           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src2__en));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__turn_next 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen) 
           & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__en) 
               | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__state)) 
              & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__turn))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__state_next 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__en) 
                                       | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__state) 
                                          & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h8e9ef457__0) 
                                             | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h79cacbbc__0) 
                                                | ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__turn)) 
                                                   & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen)))))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_addr_start_rd_1 
        = (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__state)) 
            | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__curr_reg) 
                == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__max_reg)) 
               & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h43d852dd__0) 
                  & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h3afe6e14__0)))) 
           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__en));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_ready 
        = ((0xfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_ready)) 
           | (0xc0U | (((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__5__KET__.ready) 
                        << 5U) | ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__4__KET__.ready) 
                                  << 4U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__0__KET____DOT__mem__read_id
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__1__KET____DOT__mem__read_id
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__2__KET____DOT__mem__read_id
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_id[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__3__KET____DOT__mem__read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_id[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__3__KET____DOT__mem__read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_id[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__3__KET____DOT__mem__read_id
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_id[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__3__KET____DOT__mem__read_id
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_id[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellinp__write_port_gen__BRA__3__KET____DOT__mem__read_id
        [4U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_idle_rd_2 
        = (1U & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen) 
                  & ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src2__en)) 
                     & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__state)))) 
                 | ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen)) 
                    & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__state_next)))));
    if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_addr_start_rd_2) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__base_reg_out 
            = (0x1fU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                        >> 0x14U));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__max_off_out 
            = (0xffU & vlSelf->__VdfgTmp_hc14a2981__0);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__max_reg_out 
            = (7U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__whole_reg_rd)
                      ? (((IData)(1U) << ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__logic_mop)
                                           ? 0U : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew))) 
                         - (IData)(1U)) : ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__logic_mop)
                                            ? 0U : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl_max_reg))));
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__base_reg_out 
            = (0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__base_reg));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__max_off_out 
            = (0xffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__max_off));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__max_reg_out 
            = (7U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__max_reg));
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__curr_reg_out 
        = (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_addr_start_rd_2)) 
            & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__state_next))
            ? (7U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__curr_reg) 
                     + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT____VdfgTmp_h8e9ef457__0) 
                        & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT____VdfgTmp_h43d852dd__0) 
                           & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT____VdfgTmp_h2306eb48__0))))
            : 0U);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__curr_off_out 
        = (0xffU & (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_addr_start_rd_2)) 
                     & ((((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen)) 
                          & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__state_next)) 
                         | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__state) 
                            & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen))) 
                        & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT____VdfgTmp_h79cacbbc__0) 
                           | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen))))
                     ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT__curr_off) 
                        + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT____VdfgTmp_h79cacbbc__0) 
                           & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src2__DOT____VdfgTmp_h2306eb48__0))
                     : ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_addr_start_rd_2)
                         ? ((0xfU == (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                      >> 0x1aU)) ? 
                            (0xffU & ((3U == (7U & 
                                              (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                               >> 0xcU)))
                                       ? ((0x1fU >= 
                                           ((IData)(3U) 
                                            - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                                           ? ((0x1fU 
                                               & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                  >> 0xfU)) 
                                              >> ((IData)(3U) 
                                                  - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                                           : 0U) : 
                                      ((4U == (7U & 
                                               (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                >> 0xcU)))
                                        ? ((0x1fU >= 
                                            ((IData)(3U) 
                                             - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                                            ? (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.data
                                               [0U] 
                                               >> ((IData)(3U) 
                                                   - (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                                            : 0U) : 0U)))
                             : 0U) : 0U)));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_idle_rd_1 
        = (1U & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen) 
                  & ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__en)) 
                     & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__state)))) 
                 | ((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen)) 
                    & (~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__state_next)))));
    if (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_addr_start_rd_1) {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__max_off_out 
            = (0xffU & vlSelf->__VdfgTmp_hc14a2981__0);
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__base_reg_out 
            = (0x1fU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vs1)
                         ? (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                            >> 0xfU) : (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                        >> 7U)));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__max_reg_out 
            = (7U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__whole_reg_rd)
                      ? (((IData)(1U) << ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__logic_mop)
                                           ? 0U : (3U 
                                                   & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vs1)
                                                       ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)
                                                       : 
                                                      (3U 
                                                       & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                          >> 0xcU)))))) 
                         - (IData)(1U)) : ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__logic_mop)
                                            ? 0U : 
                                           (7U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__en_vs1)
                                                   ? (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl_max_reg)
                                                   : 
                                                  ((0xaU 
                                                    >= 
                                                    ((IData)(0xbU) 
                                                     - 
                                                     (3U 
                                                      & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                         >> 0xcU))))
                                                    ? 
                                                   (7U 
                                                    & ((0x7ffU 
                                                        & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__avl) 
                                                           - (IData)(1U))) 
                                                       >> 
                                                       ((IData)(0xbU) 
                                                        - 
                                                        (3U 
                                                         & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__insn_in_f 
                                                            >> 0xcU)))))
                                                    : 0U))))));
    } else {
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__max_off_out 
            = (0xffU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__max_off));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__base_reg_out 
            = (0x1fU & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__base_reg));
        vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__max_reg_out 
            = (7U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__max_reg));
    }
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__curr_reg_out 
        = (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_addr_start_rd_1)) 
            & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__state_next))
            ? (7U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__curr_reg) 
                     + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h8e9ef457__0) 
                        & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h43d852dd__0) 
                           & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h2306eb48__0))))
            : 0U);
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__curr_off_out 
        = (((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_addr_start_rd_1)) 
            & ((((~ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen)) 
                 & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__state_next)) 
                | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__state) 
                   & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen))) 
               & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h79cacbbc__0) 
                  | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__agu_src1__widen))))
            ? (0xffU & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__curr_off) 
                        + ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h79cacbbc__0) 
                           & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT____VdfgTmp_h2306eb48__0)))
            : 0U);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_id
        [5U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_id
        [5U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_id
        [5U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_id
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_id
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_id
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_id
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_id
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellinp__write_port__raddr[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_id
        [5U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT__vmask_sew[0U] 
        = (0xffU & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm0 
                            >> (0x3fU & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__curr_off_out) 
                                          >> (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)) 
                                         << 3U)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__vmask_in 
        = (0xffU & (IData)((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm0 
                            >> (0x3fU & (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__agu_src1__DOT__curr_off_out) 
                                          >> (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)) 
                                         << 3U)))));
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [0U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[0U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [1U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[1U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [2U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[2U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [3U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[3U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [4U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[4U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [5U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[5U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [0U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[0U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [1U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[1U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [2U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[2U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [3U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[3U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [4U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[4U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [5U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[5U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [0U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[0U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [1U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[1U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [2U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[2U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [3U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[3U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [4U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[4U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [5U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[5U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [0U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[0U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [1U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[1U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [2U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[2U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [3U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[3U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [4U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[4U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT__xilinx_gen__DOT__ram
        [vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellinp__write_port__raddr
        [5U]];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out[5U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT____VdfgTmp_hf1dfd614__0 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__vmask_in) 
                 >> (7U & ((IData)(1U) + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__reg_off)))));
    cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT____VdfgTmp_h67ee469c__0 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__vmask_in) 
                 >> (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__reg_off)));
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [5U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [5U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [5U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_data[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_data[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_data[5U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT____Vcellout__write_port__ram_data_out
        [5U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT__vmask_sew[3U] 
        = (0xffU & (- (IData)((IData)(cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT____VdfgTmp_h67ee469c__0))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT__vmask_sew[2U] 
        = ((0xf0U & ((- (IData)((IData)(cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT____VdfgTmp_hf1dfd614__0))) 
                     << 4U)) | (0xfU & (- (IData)((IData)(cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT____VdfgTmp_h67ee469c__0)))));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT__vmask_sew[1U] 
        = ((0xc0U & ((- (IData)((1U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__vmask_in) 
                                       >> (7U & ((IData)(3U) 
                                                 + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__reg_off))))))) 
                     << 6U)) | ((0x30U & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__vmask_in) 
                                                         >> 
                                                         (7U 
                                                          & ((IData)(2U) 
                                                             + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__reg_off))))))) 
                                          << 4U)) | 
                                ((0xcU & ((- (IData)((IData)(cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT____VdfgTmp_hf1dfd614__0))) 
                                          << 2U)) | 
                                 (3U & (- (IData)((IData)(cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT____VdfgTmp_h67ee469c__0)))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT___read_data
        [5U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT___read_data
        [5U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT___read_data
        [5U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__3__KET____DOT__mem__read_data[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__3__KET____DOT__mem__read_data[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__3__KET____DOT__mem__read_data[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_data
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__3__KET____DOT__mem__read_data[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_data
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__3__KET____DOT__mem__read_data[4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT___read_data
        [5U];
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_req_be 
        = (((((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d) 
              >> 1U) ^ (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__opcode_mnr_d)) 
            & (0x10U == (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__funct6_d)))
            ? ((0U == (((IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx))) 
                        << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                ? 1U : ((1U == (((IData)((0U != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx))) 
                                 << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                         ? 3U : ((2U == (((IData)((0U 
                                                   != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx))) 
                                          << 2U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                                  ? 0xfU : ((3U == 
                                             (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu_vr_idx))) 
                                               << 2U) 
                                              | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew)))
                                             ? 0xffU
                                             : 0U))))
            : (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__gen_be_alu__DOT__avl_be_sew
               [vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew] 
               & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__vm_d)
                   ? 0xffU : vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT__vmask_sew
                  [vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__sew])));
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[0U][0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[0U][1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[0U][2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[0U][3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[0U][4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__0__KET____DOT__mem__read_data
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[1U][0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[1U][1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[1U][2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[1U][3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[1U][4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__1__KET____DOT__mem__read_data
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[2U][0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[2U][1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[2U][2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[2U][3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[2U][4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__2__KET____DOT__mem__read_data
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[3U][0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__3__KET____DOT__mem__read_data
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[3U][1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__3__KET____DOT__mem__read_data
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[3U][2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__3__KET____DOT__mem__read_data
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[3U][3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__3__KET____DOT__mem__read_data
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data[3U][4U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vcellout__write_port_gen__BRA__3__KET____DOT__mem__read_data
        [4U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[0U] = 0U;
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[1U] = 0U;
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[2U] = 0U;
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[3U] = 0U;
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[4U] = 0U;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [0U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [0U][0U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[0U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [0U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [1U][0U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[0U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [0U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [2U][0U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[0U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [0U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [3U][0U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[0U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [1U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [0U][1U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[1U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [1U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [1U][1U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[1U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [1U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [2U][1U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[1U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [1U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [3U][1U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[1U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [2U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [0U][2U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[2U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [2U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [1U][2U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[2U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [2U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [2U][2U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[2U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [2U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [3U][2U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[2U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [3U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [0U][3U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[3U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [3U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [1U][3U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[3U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [3U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [2U][3U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[3U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [3U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [3U][3U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[3U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [4U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [0U][4U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[4U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [4U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [1U][4U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[4U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [4U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [2U][4U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[4U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [4U] ^ vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__read_data
           [3U][4U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use[4U] 
        = cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__id_inuse_toggle_mem_set__in_use[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__id_inuse_toggle_mem_set__in_use[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__id_inuse_toggle_mem_set__in_use[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__id_inuse_toggle_mem_set__in_use[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__id_inuse_toggle_mem_set__in_use
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__id_inuse_toggle_mem_set__in_use
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__id_inuse_toggle_mem_set__in_use
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse[3U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellout__id_inuse_toggle_mem_set__in_use
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__decode_inuse[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__decode_inuse[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse
        [1U];
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.inuse[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse
        [2U];
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.inuse[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__inuse
        [3U];
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs_conflict 
        = (((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.inuse
             [1U] & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_uses_rs
             [1U]) << 1U) | (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.inuse
                             [0U] & vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_uses_rs
                             [0U]));
    vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
        = ((0xfffff000U & vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U]) 
           | ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__rf_issue.inuse
               [1U] << 0xbU) | (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rd_to_id_table
                                [vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_rs_addr
                                [1U]] << 8U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_valid 
        = (1U & ((vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                  >> 6U) & ((~ (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs_conflict)))) 
                            & ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                                   >> 0x10U)) & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__pre_issue_exception_pending))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__virtual_address 
        = (((vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[2U] 
             << 2U) | (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[1U] 
                       >> 0x1eU)) + VL_EXTENDS_II(32,12, 
                                                  (0xfffU 
                                                   & (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                                      >> 0x12U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_h26631355__0 
        = ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
               >> 0xfU)) & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_valid));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unaligned_addr 
        = (1U & (((1U == (7U & (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                >> 0xfU))) | (5U == 
                                              (7U & 
                                               (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                                >> 0xfU))))
                  ? vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__virtual_address
                  : (IData)(((0x10000U == (0x38000U 
                                           & vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U])) 
                             & (0U != (3U & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__virtual_address))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__be = 0U;
    if ((0U == (3U & (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                      >> 0xfU)))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__be 
            = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__be) 
               | (0xfU & ((IData)(1U) << (3U & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__virtual_address))));
    } else if ((1U == (3U & (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                             >> 0xfU)))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__be 
            = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__be) 
               | (0xfU & ((IData)(1U) << (3U & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__virtual_address))));
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__be 
            = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__be) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__virtual_address)))));
    } else {
        vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__be = 0xfU;
    }
    __Vtemp_h2e54db74__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                                             >> 0xeU)))) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                                                >> 0xdU)))) 
                                            << 0x34U) 
                                           | (((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__be)) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (7U 
                                                                   & (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                                                      >> 0xfU)))) 
                                                  << 0x2dU) 
                                                 | (((QData)((IData)(
                                                                     ((vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[1U] 
                                                                       << 2U) 
                                                                      | (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                                                         >> 0x1eU)))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      ((0x1c00U 
                                                                        & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                                           << 1U)) 
                                                                       | ((0x3f0U 
                                                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                                              >> 0xaU)) 
                                                                          | (0xfU 
                                                                             & (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                                                                >> 8U))))))))))));
    __Vtemp_h2e54db74__0[1U] = ((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__virtual_address 
                                 << 0x16U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                                                            >> 0xeU)))) 
                                                        << 0x35U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                                                               >> 0xdU)))) 
                                                           << 0x34U) 
                                                          | (((QData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__be)) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                                                                >> 0xfU)))) 
                                                                 << 0x2dU) 
                                                                | (((QData)((IData)(
                                                                                ((vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                                                                >> 0x1eU)))) 
                                                                    << 0xdU) 
                                                                   | (QData)((IData)(
                                                                                ((0x1c00U 
                                                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                                                << 1U)) 
                                                                                | ((0x3f0U 
                                                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                                                >> 0xaU)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                                                                >> 8U))))))))))) 
                                                      >> 0x20U)));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[0U] 
        = __Vtemp_h2e54db74__0[0U];
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[1U] 
        = __Vtemp_h2e54db74__0[1U];
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[2U] 
        = (vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__virtual_address 
           >> 0xaU);
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__addr_hash 
        = ((0xcU & (((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[1U] 
                      << 8U) | (0xfcU & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[1U] 
                                         >> 0x18U))) 
                    ^ ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[1U] 
                        << 4U) | (0xcU & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[1U] 
                                          >> 0x1cU))))) 
           | (3U & (((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[1U] 
                      << 8U) | (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[1U] 
                                >> 0x18U)) ^ (((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[1U] 
                                                << 4U) 
                                               | (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[1U] 
                                                  >> 0x1cU)) 
                                              ^ vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[2U]))));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__1__KET__.ready 
        = (1U & (((~ ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[1U] 
                       >> 0x14U) & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.full))) 
                  & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__fence_hold))) 
                 & (~ (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__.valid))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_ready 
        = ((0xf0U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_ready)) 
           | (1U | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_mul__DOT__mul_unit_block__DOT__stage1_advance) 
                     << 3U) | ((4U & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__busy)) 
                                      << 2U)) | ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__1__KET__.ready) 
                                                 << 1U)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_ready));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_stage_ready 
        = (1U & ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                     >> 0x10U)) & ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                       >> 6U)) | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_valid) 
                                                  & (0U 
                                                     != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__instruction_issued 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_h26631355__0) 
           & (0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready)));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to 
        = ((- (IData)((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____VdfgTmp_h26631355__0))) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready));
    vlSelf->cva5_sim__DOT__cpu__DOT__decode_advance 
        = (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__fetched_count_neg) 
            >> 3U) & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_stage_ready));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__pre_issue_count_next 
        = (0xfU & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__pre_issue_count) 
                    + (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__pc_id_assigned)) 
                   - (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__instruction_issued)));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__post_issue_count_next 
        = (0xfU & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__post_issue_count) 
                    + (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__instruction_issued)) 
                   - (3U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__retire_next))));
    vlSelf->cva5_sim__DOT__cpu__DOT__instruction_issued_with_rd 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__instruction_issued) 
           & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
              >> 0xdU));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_exceptions__DOT__new_exception 
        = (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unaligned_addr) 
            & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
               >> 1U)) & (~ (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                             >> 0xcU)));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.push 
        = (1U & ((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                   >> 1U) & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unaligned_addr))) 
                 & (~ (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                       >> 0xcU))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state;
    if (((((((((0U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state) 
               | (1U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state)) 
              | (2U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state)) 
             | (3U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state)) 
            | (4U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state)) 
           | (5U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state)) 
          | (6U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state)) 
         | (7U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state))) {
        if ((0U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state)) {
            vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state = 1U;
        } else if ((1U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state)) {
            vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state = 2U;
        } else if ((2U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state)) {
            if ((0x40U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state_counter))) {
                vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state = 3U;
            }
        } else if ((3U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state)) {
            if ((0x200U & vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U])) {
                vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state = 6U;
            } else if ((1U & ((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                                >> 7U) | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__interrupt_pending)) 
                              | (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                                 >> 0xaU)))) {
                vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state = 5U;
            }
        } else if ((4U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state)) {
            if ((0x40U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state_counter))) {
                vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state = 3U;
            }
        } else if ((5U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state)) {
            if ((1U & (((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__ifence_in_progress) 
                          | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__ret_in_progress)) 
                         & ((0U == (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__post_issue_count)) 
                            & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_status) 
                               >> 2U))) | (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                                           >> 9U)) 
                       | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__interrupt_pending)))) {
                vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state = 6U;
            }
        } else if ((6U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__state)) {
            vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state = 7U;
        } else if (((0U == (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__post_issue_count)) 
                    & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_status) 
                       >> 1U))) {
            vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state = 3U;
        }
    } else {
        vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state = 0U;
    }
    vlSelf->cva5_sim__DOT__stats[0U] = 0U;
    vlSelf->cva5_sim__DOT__stats[1U] = 0U;
    vlSelf->cva5_sim__DOT__stats[2U] = 0U;
    vlSelf->cva5_sim__DOT__stats[3U] = 0U;
    vlSelf->cva5_sim__DOT__stats[4U] = 0U;
    vlSelf->cva5_sim__DOT__stats[5U] = 0U;
    vlSelf->cva5_sim__DOT__stats[6U] = 0U;
    vlSelf->cva5_sim__DOT__stats[7U] = 0U;
    vlSelf->cva5_sim__DOT__stats[8U] = 0U;
    vlSelf->cva5_sim__DOT__stats[9U] = 0U;
    vlSelf->cva5_sim__DOT__stats[0xaU] = 0U;
    vlSelf->cva5_sim__DOT__stats[0xbU] = 0U;
    vlSelf->cva5_sim__DOT__stats[0xcU] = 0U;
    vlSelf->cva5_sim__DOT__stats[0xdU] = 0U;
    vlSelf->cva5_sim__DOT__stats[0xeU] = 0U;
    vlSelf->cva5_sim__DOT__stats[0xfU] = 0U;
    vlSelf->cva5_sim__DOT__stats[0x10U] = 0U;
    vlSelf->cva5_sim__DOT__stats[0x11U] = 0U;
    vlSelf->cva5_sim__DOT__stats[0x12U] = 0U;
    vlSelf->cva5_sim__DOT__stats[0x13U] = 0U;
    vlSelf->cva5_sim__DOT__stats[0x14U] = 0U;
    vlSelf->cva5_sim__DOT__stats[0x15U] = 0U;
    vlSelf->cva5_sim__DOT__stats[0x16U] = 0U;
    vlSelf->cva5_sim__DOT__stats[0x17U] = 0U;
    vlSelf->cva5_sim__DOT__stats[0x18U] = 0U;
    vlSelf->cva5_sim__DOT__stats[0x19U] = 0U;
    vlSelf->cva5_sim__DOT__stats[0x1aU] = 0U;
    vlSelf->cva5_sim__DOT__stats[0x1bU] = 0U;
    vlSelf->cva5_sim__DOT__stats[0U] = vlSelf->cva5_sim__DOT__cpu__DOT__early_branch_flush;
    vlSelf->cva5_sim__DOT__stats[1U] = ((~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__inflight_count) 
                                            >> 3U)) 
                                        & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__input_fifo.full));
    vlSelf->cva5_sim__DOT__stats[2U] = (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__inflight_count) 
                                              >> 3U));
    vlSelf->cva5_sim__DOT__stats[3U] = (0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__tag_hit_way));
    vlSelf->cva5_sim__DOT__stats[4U] = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__second_cycle) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__tag_hit_way)))));
    vlSelf->cva5_sim__DOT__stats[5U] = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__request_r) 
                                        & (~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__acks) 
                                              >> 1U)));
    vlSelf->cva5_sim__DOT__stats[6U] = (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing) 
                                         & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__is_return))) 
                                        & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_flush)));
    vlSelf->cva5_sim__DOT__stats[7U] = (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing) 
                                         & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__is_return))) 
                                        & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_flush));
    vlSelf->cva5_sim__DOT__stats[8U] = (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing) 
                                         & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__is_return)) 
                                        & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_flush)));
    vlSelf->cva5_sim__DOT__stats[9U] = (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing) 
                                         & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__is_return)) 
                                        & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_flush));
    vlSelf->cva5_sim__DOT__base_no_instruction_stall 
        = (1U & ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                     >> 6U)) | (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                                >> 0xfU)));
    vlSelf->cva5_sim__DOT__base_no_id_sub_stall = (8U 
                                                   == (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__post_issue_count));
    vlSelf->cva5_sim__DOT__base_flush_sub_stall = (1U 
                                                   & (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                                                      >> 0xfU));
    vlSelf->cva5_sim__DOT__base_unit_busy_stall = (1U 
                                                   & ((vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                       >> 6U) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready))))));
    vlSelf->cva5_sim__DOT__base_operands_stall = ((
                                                   vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                   >> 6U) 
                                                  & (0U 
                                                     != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs_conflict)));
    vlSelf->cva5_sim__DOT__base_hold_stall = (1U & 
                                              ((vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                >> 6U) 
                                               & ((vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                                                   >> 0x10U) 
                                                  | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__pre_issue_exception_pending))));
    vlSelf->cva5_sim__DOT__stall_source_count = (0xfU 
                                                 & ((((IData)(vlSelf->cva5_sim__DOT__base_no_instruction_stall) 
                                                      + (IData)(vlSelf->cva5_sim__DOT__base_unit_busy_stall)) 
                                                     + (IData)(vlSelf->cva5_sim__DOT__base_operands_stall)) 
                                                    + (IData)(vlSelf->cva5_sim__DOT__base_hold_stall)));
    vlSelf->cva5_sim__DOT__single_source_issue_stall 
        = (1U == (IData)(vlSelf->cva5_sim__DOT__stall_source_count));
    vlSelf->cva5_sim__DOT__stats[0xaU] = ((IData)(vlSelf->cva5_sim__DOT__base_no_instruction_stall) 
                                          & (IData)(vlSelf->cva5_sim__DOT__single_source_issue_stall));
    vlSelf->cva5_sim__DOT__stats[0xbU] = (((IData)(vlSelf->cva5_sim__DOT__base_no_instruction_stall) 
                                           & (IData)(vlSelf->cva5_sim__DOT__base_no_id_sub_stall)) 
                                          & (IData)(vlSelf->cva5_sim__DOT__single_source_issue_stall));
    vlSelf->cva5_sim__DOT__stats[0xcU] = (((IData)(vlSelf->cva5_sim__DOT__base_no_instruction_stall) 
                                           & (IData)(vlSelf->cva5_sim__DOT__base_flush_sub_stall)) 
                                          & (IData)(vlSelf->cva5_sim__DOT__single_source_issue_stall));
    vlSelf->cva5_sim__DOT__stats[0xdU] = ((IData)(vlSelf->cva5_sim__DOT__base_unit_busy_stall) 
                                          & (IData)(vlSelf->cva5_sim__DOT__single_source_issue_stall));
    vlSelf->cva5_sim__DOT__stats[0xeU] = ((IData)(vlSelf->cva5_sim__DOT__base_operands_stall) 
                                          & (IData)(vlSelf->cva5_sim__DOT__single_source_issue_stall));
    vlSelf->cva5_sim__DOT__stats[0xfU] = ((IData)(vlSelf->cva5_sim__DOT__base_hold_stall) 
                                          & (IData)(vlSelf->cva5_sim__DOT__single_source_issue_stall));
    vlSelf->cva5_sim__DOT__stats[0x10U] = (((((IData)(vlSelf->cva5_sim__DOT__base_no_instruction_stall) 
                                              | (IData)(vlSelf->cva5_sim__DOT__base_unit_busy_stall)) 
                                             | (IData)(vlSelf->cva5_sim__DOT__base_operands_stall)) 
                                            | (IData)(vlSelf->cva5_sim__DOT__base_hold_stall)) 
                                           & (~ (IData)(vlSelf->cva5_sim__DOT__single_source_issue_stall)));
    vlSelf->cva5_sim__DOT__stats[0x14U] = (vlSelf->cva5_sim__DOT__stats
                                           [0xeU] & 
                                           ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage) 
                                            >> 6U));
    vlSelf->cva5_sim__DOT__stats[0x15U] = ((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                                             >> 1U) 
                                            & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__is_store_r)) 
                                           & (vlSelf->cva5_sim__DOT__cpu__DOT__ls_inputs[0U] 
                                              >> 0xbU));
    vlSelf->cva5_sim__DOT__stats[0x16U] = (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                                            >> 4U) 
                                           & ((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__gen_decode_div_inputs__DOT__prev_div_result_valid) 
                                                << 0xcU) 
                                               | ((vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__gen_decode_div_inputs__DOT__prev_div_rs_addr
                                                   [0U] 
                                                   << 6U) 
                                                  | vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__gen_decode_div_inputs__DOT__prev_div_rs_addr
                                                  [1U])) 
                                              == (0x1000U 
                                                  | ((vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_phys_rs_addr
                                                      [0U] 
                                                      << 6U) 
                                                     | vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_phys_rs_addr
                                                     [1U]))));
    vlSelf->cva5_sim__DOT__stats[0x11U] = (1U & (vlSelf->cva5_sim__DOT__stats
                                                 [0x11U] 
                                                 | (((vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                      >> 6U) 
                                                     & (vlSelf->cva5_sim__DOT__phys_addr_table
                                                        [
                                                        vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_phys_rs_addr
                                                        [0U]] 
                                                        >> 1U)) 
                                                    & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs_conflict))));
    vlSelf->cva5_sim__DOT__stats[0x12U] = (1U & (vlSelf->cva5_sim__DOT__stats
                                                 [0x12U] 
                                                 | (((vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                      >> 6U) 
                                                     & (vlSelf->cva5_sim__DOT__phys_addr_table
                                                        [
                                                        vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_phys_rs_addr
                                                        [0U]] 
                                                        >> 3U)) 
                                                    & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs_conflict))));
    vlSelf->cva5_sim__DOT__stats[0x13U] = (1U & (vlSelf->cva5_sim__DOT__stats
                                                 [0x13U] 
                                                 | (((vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                      >> 6U) 
                                                     & (vlSelf->cva5_sim__DOT__phys_addr_table
                                                        [
                                                        vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_phys_rs_addr
                                                        [0U]] 
                                                        >> 4U)) 
                                                    & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs_conflict))));
    vlSelf->cva5_sim__DOT__stats[0x11U] = (1U & (vlSelf->cva5_sim__DOT__stats
                                                 [0x11U] 
                                                 | (((vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                      >> 6U) 
                                                     & (vlSelf->cva5_sim__DOT__phys_addr_table
                                                        [
                                                        vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_phys_rs_addr
                                                        [1U]] 
                                                        >> 1U)) 
                                                    & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs_conflict) 
                                                       >> 1U))));
    vlSelf->cva5_sim__DOT__stats[0x12U] = (1U & (vlSelf->cva5_sim__DOT__stats
                                                 [0x12U] 
                                                 | (((vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                      >> 6U) 
                                                     & (vlSelf->cva5_sim__DOT__phys_addr_table
                                                        [
                                                        vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_phys_rs_addr
                                                        [1U]] 
                                                        >> 3U)) 
                                                    & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs_conflict) 
                                                       >> 1U))));
    vlSelf->cva5_sim__DOT__stats[0x13U] = (1U & (vlSelf->cva5_sim__DOT__stats
                                                 [0x13U] 
                                                 | (((vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                      >> 6U) 
                                                     & (vlSelf->cva5_sim__DOT__phys_addr_table
                                                        [
                                                        vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_phys_rs_addr
                                                        [1U]] 
                                                        >> 4U)) 
                                                    & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__rs_conflict) 
                                                       >> 1U))));
    vlSelf->cva5_sim__DOT__stats[0x17U] = (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT__gen_width_3_plus__DOT__inflight_count) 
                                            >> 3U) 
                                           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__store_conflict));
    vlSelf->cva5_sim__DOT__stats[0x18U] = (((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_valid) 
                                            | (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.valid)) 
                                           & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_ready)));
    vlSelf->cva5_sim__DOT__stats[0x19U] = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_tag_hit_way;
    vlSelf->cva5_sim__DOT__stats[0x1aU] = vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__line_complete;
    vlSelf->cva5_sim__DOT__stats[0x1bU] = ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_request__BRA__0__KET__.request) 
                                           & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__acks)));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__rename_valid 
        = ((((~ (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                 >> 0xfU)) & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_advance)) 
            & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__uses_rd)) 
           & (0U != (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT____Vcellinp__gen_decode_exceptions__DOT__illegal_op_check__instruction 
                              >> 7U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__toggle[0U] 
        = ((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_advance) 
             & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__decode_and_issue_block__DOT__uses_rd)) 
            & (0U != (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface.phys_rd_addr))) 
           & (~ (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                 >> 0xfU)));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__renamer_block__DOT__inuse_list.potential_push 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__instruction_issued_with_rd) 
           & (0U != (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                              >> 0x14U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellinp__id_waiting_for_writeback_toggle_mem_set__toggle[0U] 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__instruction_issued_with_rd) 
           & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
              >> 0xcU));
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__toggle[1U] 
        = ((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__instruction_issued_with_rd) 
             & (0U != (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                >> 0x14U)))) & (~ (
                                                   vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                                   >> 0xcU))) 
           | (((IData)((0x2040U == (0x2040U & vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U]))) 
               & (0U != (0x1fU & (vlSelf->cva5_sim__DOT__cpu__DOT__issue[0U] 
                                  >> 0x14U)))) & (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                                                  >> 0xfU)));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.push 
        = ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.push) 
           & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[1U] 
              >> 0x14U));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lq.push 
        = ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.push) 
           & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.data_in[1U] 
              >> 0x15U));
    vlSelf->cva5_sim__DOT__cpu__DOT__interrupt_taken 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__interrupt_pending) 
           & ((~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__ifence_in_progress) 
                  | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__ret_in_progress) 
                     | (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                        >> 9U)))) & (6U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state)));
    cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT____VdfgTmp_h30c7cbd4__0 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__ret_in_progress) 
           & (6U == vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__next_state));
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0U] 
        = vlSelf->cva5_sim__DOT__stats[0U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[1U] 
        = vlSelf->cva5_sim__DOT__stats[1U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[2U] 
        = vlSelf->cva5_sim__DOT__stats[2U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[3U] 
        = vlSelf->cva5_sim__DOT__stats[3U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[4U] 
        = vlSelf->cva5_sim__DOT__stats[4U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[5U] 
        = vlSelf->cva5_sim__DOT__stats[5U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[6U] 
        = vlSelf->cva5_sim__DOT__stats[6U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[7U] 
        = vlSelf->cva5_sim__DOT__stats[7U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[8U] 
        = vlSelf->cva5_sim__DOT__stats[8U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[9U] 
        = vlSelf->cva5_sim__DOT__stats[9U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0xaU] 
        = vlSelf->cva5_sim__DOT__stats[0xaU];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0xbU] 
        = vlSelf->cva5_sim__DOT__stats[0xbU];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0xcU] 
        = vlSelf->cva5_sim__DOT__stats[0xcU];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0xdU] 
        = vlSelf->cva5_sim__DOT__stats[0xdU];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0xeU] 
        = vlSelf->cva5_sim__DOT__stats[0xeU];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0xfU] 
        = vlSelf->cva5_sim__DOT__stats[0xfU];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0x10U] 
        = vlSelf->cva5_sim__DOT__stats[0x10U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0x11U] 
        = vlSelf->cva5_sim__DOT__stats[0x11U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0x12U] 
        = vlSelf->cva5_sim__DOT__stats[0x12U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0x13U] 
        = vlSelf->cva5_sim__DOT__stats[0x13U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0x14U] 
        = vlSelf->cva5_sim__DOT__stats[0x14U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0x15U] 
        = vlSelf->cva5_sim__DOT__stats[0x15U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0x16U] 
        = vlSelf->cva5_sim__DOT__stats[0x16U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0x17U] 
        = vlSelf->cva5_sim__DOT__stats[0x17U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0x18U] 
        = vlSelf->cva5_sim__DOT__stats[0x18U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0x19U] 
        = vlSelf->cva5_sim__DOT__stats[0x19U];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0x1aU] 
        = vlSelf->cva5_sim__DOT__stats[0x1aU];
    vlSelf->cva5_sim__DOT____Vcellinp__stats_block__stats[0x1bU] 
        = vlSelf->cva5_sim__DOT__stats[0x1bU];
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_update 
        = ((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__rename_valid) 
             | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__rollback)) 
            | (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
               >> 0x12U)) | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____VdfgTmp_h58444fa9__0));
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___toggle[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellinp__id_waiting_for_writeback_toggle_mem_set__toggle
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___toggle[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT____Vcellinp__id_waiting_for_writeback_toggle_mem_set__toggle
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___toggle[2U] 
        = ((vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
            >> 0x12U) & vlSelf->cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT___in_use
           [2U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___toggle[0U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__toggle
        [0U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___toggle[1U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__toggle
        [1U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___toggle[2U] 
        = vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT____Vcellinp__id_inuse_toggle_mem_set__toggle
        [2U];
    vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___toggle[3U] 
        = ((vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
            >> 0x12U) & vlSelf->cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT___in_use
           [4U]);
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_index_next 
        = (3U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_index) 
                 + (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.push)));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_request_one_hot 
        = (0xfU & ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq.push) 
                   << (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_index)));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__potential_store_conflicts 
        = ((0xeU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__potential_store_conflicts)) 
           | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__valid) 
               & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__issued_one_hot))) 
              & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__addr_hash) 
                 == (0xfU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__hashes)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_load_waiting 
        = ((0xeU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_load_waiting)) 
           | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__potential_store_conflicts) 
              & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lq.push)));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__waiting_load_completed 
        = ((0xeU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__waiting_load_completed)) 
           | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out) 
              & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_load_issue)));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__load_check_count_next 
        = ((0xfff0U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__load_check_count_next)) 
           | (0xfU & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__load_check_count) 
                       + (1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_load_waiting))) 
                      - (1U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__waiting_load_completed)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__potential_store_conflicts 
        = ((0xdU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__potential_store_conflicts)) 
           | (0xfffffffeU & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__valid) 
                              & ((~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__issued_one_hot) 
                                     >> 1U)) << 1U)) 
                             & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__addr_hash) 
                                 == (0xfU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__hashes) 
                                             >> 4U))) 
                                << 1U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_load_waiting 
        = ((0xdU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_load_waiting)) 
           | (0xfffffffeU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__potential_store_conflicts) 
                             & ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lq.push) 
                                << 1U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__waiting_load_completed 
        = ((0xdU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__waiting_load_completed)) 
           | (((IData)((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                        >> 1U)) & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_load_issue)) 
              << 1U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__load_check_count_next 
        = ((0xff0fU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__load_check_count_next)) 
           | (0xf0U & (((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__load_check_count) 
                          >> 4U) + (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_load_waiting) 
                                          >> 1U))) 
                        - (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__waiting_load_completed) 
                                 >> 1U))) << 4U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__potential_store_conflicts 
        = ((0xbU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__potential_store_conflicts)) 
           | (0xfffffffcU & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__valid) 
                              & ((~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__issued_one_hot) 
                                     >> 2U)) << 2U)) 
                             & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__addr_hash) 
                                 == (0xfU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__hashes) 
                                             >> 8U))) 
                                << 2U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_load_waiting 
        = ((0xbU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_load_waiting)) 
           | (0xfffffffcU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__potential_store_conflicts) 
                             & ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lq.push) 
                                << 2U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__waiting_load_completed 
        = ((0xbU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__waiting_load_completed)) 
           | (((IData)((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                        >> 2U)) & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_load_issue)) 
              << 2U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__load_check_count_next 
        = ((0xf0ffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__load_check_count_next)) 
           | (0xf00U & (((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__load_check_count) 
                           >> 8U) + (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_load_waiting) 
                                           >> 2U))) 
                         - (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__waiting_load_completed) 
                                  >> 2U))) << 8U)));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__potential_store_conflicts 
        = ((7U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__potential_store_conflicts)) 
           | (0xfffffff8U & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__valid) 
                              & ((~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__issued_one_hot) 
                                     >> 3U)) << 3U)) 
                             & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__addr_hash) 
                                 == (0xfU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__hashes) 
                                             >> 0xcU))) 
                                << 3U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_load_waiting 
        = ((7U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_load_waiting)) 
           | (0xfffffff8U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__potential_store_conflicts) 
                             & ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lq.push) 
                                << 3U))));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__waiting_load_completed 
        = ((7U & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__waiting_load_completed)) 
           | (((IData)((vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__load_queue_fifo__DOT____Vcellout__gen_width_3_plus__DOT__write_port__ram_data_out 
                        >> 3U)) & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_load_issue)) 
              << 3U));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__load_check_count_next 
        = ((0xfffU & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__load_check_count_next)) 
           | (0xf000U & (((((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__load_check_count) 
                            >> 0xcU) + (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_load_waiting) 
                                              >> 3U))) 
                          - (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__waiting_load_completed) 
                                   >> 3U))) << 0xcU)));
    vlSelf->cva5_sim__DOT__cpu__DOT__mret = ((IData)(
                                                     (vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs_r 
                                                      >> 1U)) 
                                             & (IData)(cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT____VdfgTmp_h30c7cbd4__0));
    vlSelf->cva5_sim__DOT__cpu__DOT__sret = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs_r) 
                                             & (IData)(cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT____VdfgTmp_h30c7cbd4__0));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__valid_next 
        = ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__issued_one_hot)) 
           & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__new_request_one_hot) 
              | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__valid)));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus;
    if (vlSelf->cva5_sim__DOT__cpu__DOT__sret) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return 
            = ((0xfffffffdU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return) 
               | (2U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus 
                        >> 4U)));
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return 
            = (0x20U | vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return);
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return 
            = (0xfffffeffU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return);
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return 
            = (0xfffdffffU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return);
    } else if (vlSelf->cva5_sim__DOT__cpu__DOT__mret) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return 
            = ((0xfffffff7U & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return) 
               | (8U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus 
                        >> 4U)));
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return 
            = (0x80U | vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return);
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return 
            = (0x1800U | vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return);
        if ((3U != (3U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus 
                          >> 0xbU)))) {
            vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return 
                = (0xfffdffffU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return);
        }
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__next_privilege_level 
        = (3U & (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__mret) 
                  | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__sret))
                  ? ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__mret)
                      ? (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus 
                         >> 0xbU) : (1U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus 
                                           >> 8U)))
                  : ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__interrupt_taken)
                      ? 3U : ((0x200U & vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U])
                               ? 3U : (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__privilege_level)))));
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus;
    if ((1U == (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__next_privilege_level))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception 
            = ((0xffffffdfU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception) 
               | (((1U == (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__privilege_level))
                    ? (1U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus 
                             >> 1U)) : 0U) << 5U));
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception 
            = (0xfffffffdU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception);
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception 
            = ((0xfffffeffU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception) 
               | (0x100U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__privilege_level) 
                            << 8U)));
    } else {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception 
            = ((0xffffff7fU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception) 
               | (0x80U & (((3U == (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__privilege_level))
                             ? (1U & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus 
                                      >> 3U)) : ((1U 
                                                  == (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__privilege_level))
                                                  ? 
                                                 (1U 
                                                  & (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus 
                                                     >> 1U))
                                                  : 0U)) 
                           << 7U)));
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception 
            = (0xfffffff7U & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception);
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception 
            = ((0xffffe7ffU & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception) 
               | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__privilege_level) 
                  << 0xbU));
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_new 
        = vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus;
    __Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__swrite_en__40__Vfuncout 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__swrite) 
           & (0ULL == (0xff000000000ULL & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r)));
    __Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite_en__39__Vfuncout 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite) 
           & (0ULL == (0xff000000000ULL & vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__csr_inputs_r)));
    if (((IData)(__Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite_en__39__Vfuncout) 
         | (IData)(__Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__swrite_en__40__Vfuncout))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_new 
            = ((vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mstatus 
                & (~ ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__swrite)
                       ? 0xc0122U : 0x1888U))) | (vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__updated_csr 
                                                  & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__swrite)
                                                      ? 0xc0122U
                                                      : 0x1888U)));
    } else if ((1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__interrupt_taken) 
                      | (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                         >> 9U)))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_new 
            = vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_exception;
    } else if (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__mret) 
                | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__sret))) {
        vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_new 
            = vlSelf->cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__gen_csr_m_mode__DOT__mstatus_return;
    }
}
