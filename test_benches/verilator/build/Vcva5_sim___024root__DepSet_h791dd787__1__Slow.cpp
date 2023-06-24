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

VL_ATTR_COLD void Vcva5_sim___024root___stl_sequent__TOP__1(Vcva5_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcva5_sim___024root___stl_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__id_block__DOT__id_waiting_for_writeback_toggle_mem_set__DOT____Vlvbound_h07be0c6b__0;
    CData/*6:0*/ cva5_sim__DOT__cpu__DOT__renamer_block__DOT__spec_table_ram__DOT____Vlvbound_hddbc3e43__0;
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT____Vlvbound_h5945f1ab__0;
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__0__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__1__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__2__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__register_file_block__DOT__id_inuse_toggle_mem_set__DOT__write_port_gen__BRA__3__KET____DOT__mem__DOT__write_port__DOT____Vlvbound_hd43aa52c__0;
    CData/*0:0*/ cva5_sim__DOT__cpu__DOT__gc_unit_block__DOT____VdfgTmp_h30c7cbd4__0;
    CData/*0:0*/ cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT____VdfgTmp_hf1dfd614__0;
    CData/*0:0*/ cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT____VdfgTmp_h67ee469c__0;
    CData/*1:0*/ cva5_sim__DOT__stats_block__DOT____Vlvbound_h0eebc6ed__0;
    SData/*15:0*/ __Vfunc_getTag__10__Vfuncout;
    IData/*31:0*/ __Vfunc_getTag__10__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__11__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__11__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__13__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__13__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__15__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__15__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__17__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__17__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__19__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__19__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__21__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__21__addr;
    SData/*8:0*/ __Vfunc_getHashedLineAddr__23__Vfuncout;
    IData/*31:0*/ __Vfunc_getHashedLineAddr__23__addr;
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
    SData/*9:0*/ __Vfunc_getTagLineAddr__33__Vfuncout;
    IData/*31:0*/ __Vfunc_getTagLineAddr__33__addr;
    SData/*9:0*/ __Vfunc_getTagLineAddr__34__Vfuncout;
    IData/*31:0*/ __Vfunc_getTagLineAddr__34__addr;
    SData/*9:0*/ __Vfunc_getTagLineAddr__35__Vfuncout;
    IData/*31:0*/ __Vfunc_getTagLineAddr__35__addr;
    SData/*13:0*/ __Vfunc_getTag__36__Vfuncout;
    IData/*31:0*/ __Vfunc_getTag__36__addr;
    CData/*0:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__mwrite_en__39__Vfuncout;
    CData/*0:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_csrs__DOT__csr_unit_block__DOT__swrite_en__40__Vfuncout;
    IData/*31:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__50__Vfuncout;
    IData/*31:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__50__a;
    CData/*0:0*/ __Vfunc_cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__negate_if__50__b;
    CData/*4:0*/ __Vtableidx5;
    VlWide<3>/*95:0*/ __Vtemp_hadc405ac__0;
    VlWide<3>/*95:0*/ __Vtemp_hadc405ac__1;
    VlWide<3>/*95:0*/ __Vtemp_h2e54db74__0;
    // Body
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
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT__equal 
        = ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sew))
            ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sew))
                ? ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h624740d3__0) 
                   & ((0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                         << 1U) | (
                                                   vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U] 
                                                   >> 0x1fU)))) 
                      & (IData)(((0U == (0x3fe00000U 
                                         & vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[0U])) 
                                 & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0)))))
                : (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h624740d3__0) 
                    << 1U) | ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc1104ac1__0) 
                              & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0))))
            : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__s3_sew))
                ? (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc48585f5__0) 
                    << 3U) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hf73ed51b__0) 
                               << 2U) | (((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc1104ac1__0) 
                                          << 1U) | (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__genblk2__DOT__genblk1__DOT__vMinMaxSelector0__DOT____VdfgTmp_h878905ab__0))))
                : (((0U == (0x1ffU & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                      >> 7U))) << 7U) 
                   | (((0U == (0x1ffU & ((vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[2U] 
                                          << 3U) | 
                                         (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                          >> 0x1dU)))) 
                       << 6U) | (((0U == (0x1ffU & 
                                          (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                           >> 0x13U))) 
                                  << 5U) | (((0U == 
                                              (0x1ffU 
                                               & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__red__DOT__vRed0__DOT__sum64__DOT__result[1U] 
                                                  >> 9U))) 
                                             << 4U) 
                                            | (((0U 
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
                                                            >> 1U))))))))))));
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
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_reg;
    } else if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
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
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_reg;
    } else if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
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
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg;
    } else if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
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
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg;
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg;
    } else if ((0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__input_padded))) {
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
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_h624740d3__0 
        = ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_hc48585f5__0) 
           & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT____VdfgTmp_hf73ed51b__0));
    vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits 
        = (0xffU & ((2U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew))
                     ? ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew))
                         ? (- (IData)((1U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
                                             >> 0xfU))))
                         : ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
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
                                                                           >> 7U))))))))))
                     : ((1U & (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s0_sew))
                         ? ((0x80U & (vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__s1_result[2U] 
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
                                                                                >> 0x13U)))))))))))
                         : (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT__alu__DOT__add_sub__DOT__vAdd_0__DOT__min_max_mask__DOT__vMinMaxSelector0__DOT__sgn_bits8))));
    vlSelf->__VdfgTmp_h6c65d37d__0 = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h274b4b5e__0) 
                                      & ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg)) 
                                         & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_limit))));
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
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
        if ((1U & ((IData)(vlSelf->cva5_sim__DOT__s_axi_arvalid_xbar) 
                   & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg))))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__match = 0U;
            if ((8U == ((IData)(vlSelf->cva5_sim__DOT__s_axi_araddr_xbar) 
                        >> 0x1cU))) {
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
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
        if ((IData)((((IData)(vlSelf->cva5_sim__DOT__s_axi_arvalid_xbar) 
                      >> 1U) & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_reg))))) {
            vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 0U;
            if ((8U == ((IData)((vlSelf->cva5_sim__DOT__s_axi_araddr_xbar 
                                 >> 0x20U)) >> 0x1cU))) {
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
    vlSelf->cva5_sim__DOT__arb__DOT__write_pop = (((IData)(vlSelf->cva5_sim__DOT__arb__DOT__aw_complete) 
                                                   | (IData)(vlSelf->cva5_sim__DOT__arb__DOT__aw_complete_r)) 
                                                  & ((IData)(vlSelf->cva5_sim__DOT__arb__DOT__w_complete) 
                                                     | (IData)(vlSelf->cva5_sim__DOT__arb__DOT__w_complete_r)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_wlast_mux 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__s_axi_wlast_xbar) 
                 >> (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_reg)));
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
    vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__acks 
        = (0xfU & ((IData)(vlSymsp->TOP__cva5_sim__DOT__l2.request_push) 
                   << (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__arb_sel)));
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
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sign_bit 
        = ((vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out 
            >> 0x10U) & vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sign_bit_data
           [(3U & (vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out 
                   >> 0xcU))]);
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
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->__VdfgTmp_h6c65d37d__0)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded 
        = ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h10656024__0) 
             & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg) 
                    >> 1U)) & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_limit)))) 
            << 1U) | (IData)(vlSelf->__VdfgTmp_h6c65d37d__0));
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
    vlSymsp->TOP__cva5_sim__DOT__arb__DOT__request_fifo.pop 
        = (((IData)(vlSymsp->TOP__cva5_sim__DOT__axi.arvalid) 
            & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg)) 
           | (IData)(vlSelf->cva5_sim__DOT__arb__DOT__write_pop));
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
        vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_valid_next 
            = vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_reg;
    }
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_instruction 
        = ((0U >= (1U & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out)))
            ? vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__unit_data_array
           [(1U & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out))]
            : 0U);
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_complete 
        = ((~ (IData)((0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__flush_count)))) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__internal_fetch_complete));
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
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_l1_arb_ack 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__acks) 
           & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order.data_out));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_l1_arb_ack 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__gen_l1_arbiter__DOT__arb__DOT__acks) 
                 & (~ (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order.data_out))));
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
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__carry_in 
        = (1U & ((0x20000000U & vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[1U])
                  ? ((((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[2U] 
                           >> 0x1eU)) | (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
                                         >> 0x1fU)) 
                      & ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[2U] 
                             >> 0x1fU)) | vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U])) 
                     | ((~ (vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[2U] 
                            >> 0x1fU)) & vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[4U]))
                  : ((((vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[3U] 
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
                                                >> 0x1fU)))))));
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
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit__BRA__0__KET__.ready 
        = ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_valid)
            ? ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT____VdfgTmp_hc99cfb62__0) 
               & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_state))
            : (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_state) 
                | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__store_l1_arb_ack)) 
               & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT____VdfgTmp_hc99cfb62__0)));
    vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT____VdfgTmp_h70d9846b__0 
        = ((0x20000000U & vlSelf->cva5_sim__DOT__cpu__DOT__branch_inputs[1U])
            ? (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_a)
            : (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_eq_a));
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
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h765d7b6e__0 
        = (1U & ((~ ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_complete)) 
                     & (4U <= (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_count_reg)))) 
                 & (~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_valid_next))));
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
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__unit_switch 
        = (((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.load_valid) 
            & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_address_match) 
               != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__last_unit))) 
           & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.valid));
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
    vlSelf->__VdfgTmp_h1d58ce79__0 = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h274b4b5e__0) 
                                      & ((~ (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg)) 
                                         & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h765d7b6e__0)));
    vlSelf->cva5_sim__DOT__cpu__DOT__ras_block__DOT____Vcellinp__read_index_fifo__rst 
        = (1U & ((IData)(vlSelf->rst) | ((vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                                          >> 0xfU) 
                                         | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT____VdfgTmp_hb5b8037a__0) 
                                            & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_branch_corruption_check__DOT__is_branch_or_jump)) 
                                               & ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out) 
                                                  >> 3U))))));
    vlSelf->cva5_sim__DOT__cpu__DOT__early_branch_flush 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT____VdfgTmp_hb5b8037a__0) 
           & ((~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_branch_corruption_check__DOT__is_branch_or_jump)) 
              & ((IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out) 
                 >> 4U)));
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
    cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT____VdfgTmp_hf1dfd614__0 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__vmask_in) 
                 >> (7U & ((IData)(1U) + (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__reg_off)))));
    cva5_sim__DOT__x_rvv_proc_main__DOT__mask_regs__DOT__vm_alu__DOT____VdfgTmp_h67ee469c__0 
        = (1U & ((IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__vmask_in) 
                 >> (IData)(vlSelf->cva5_sim__DOT__x_rvv_proc_main__DOT____Vcellinp__mask_regs__DOT__vm_alu__reg_off)));
    vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_ack[0U] 
        = (0x3fU & ((1U & (IData)((vlSelf->cva5_sim__DOT__cpu__DOT____Vcellout__writeback_block__wb_packet
                                   [0U] >> 0x20U))) 
                    << vlSelf->cva5_sim__DOT__cpu__DOT__writeback_block__DOT__unit_sel
                    [0U]));
    __Vtemp_hadc405ac__1[0U] = 0x43042044U;
    __Vtemp_hadc405ac__1[1U] = 0x20440420U;
    __Vtemp_hadc405ac__1[2U] = 0x4204304U;
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
                                    ? 0U : (__Vtemp_hadc405ac__1[
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
                                  | (__Vtemp_hadc405ac__1[
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
    vlSelf->cva5_sim__DOT__cpu__DOT__pc_id_assigned 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__new_mem_request) 
           | (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__itlb.is_fault));
    vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____Vcellinp__spec_table_sel_one_hot_to_int__one_hot 
        = ((8U & (vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                  >> 0xfU)) | (((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT__rollback) 
                                << 2U) | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__renamer_block__DOT____VdfgTmp_h58444fa9__0) 
                                          << 1U)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = (1U & (~ (IData)(vlSelf->__VdfgTmp_h1d58ce79__0)));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded 
        = ((((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h10656024__0) 
             & ((~ ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_reg) 
                    >> 1U)) & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h765d7b6e__0))) 
            << 1U) | (IData)(vlSelf->__VdfgTmp_h1d58ce79__0));
    vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__ras.branch_fetched 
        = ((((0U != (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__bp_block__DOT__tag_matches)) 
             & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__bp.is_branch)) 
            & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__new_mem_request)) 
           & (~ (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__early_branch_flush)));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT____VdfgTmp_h7908b698__0 
        = (1U & ((vlSelf->cva5_sim__DOT__cpu__DOT__gc[3U] 
                  >> 0xfU) | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__early_branch_flush)));
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
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = (0U != (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->cva5_sim__DOT__x_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__DOT__priority_encoder_inst__DOT__input_padded));
    vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__update_pc 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT__new_mem_request) 
           | (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__fetch_block__DOT____VdfgTmp_h7908b698__0));
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
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_load_request 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_address_match) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_load_issue));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__dcache_store_request 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_address_match) 
           & (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_store_issue));
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__issued_one_hot 
        = (0xfU & ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_store_issue) 
                   << (IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq_block__DOT__sq_oldest)));
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
    vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT____Vcellinp__data_bank_gen__BRA__0__KET____DOT__data_bank__en_a 
        = ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__load_tag_check) 
           | ((IData)(vlSelf->cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__replacement_way_r) 
              & (IData)(vlSymsp->TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__0__KET__.data_valid)));
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
