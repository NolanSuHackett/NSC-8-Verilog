// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsynth_output.h for the primary calling header

#include "Vsynth_output__pch.h"
#include "Vsynth_output___024root.h"

VL_ATTR_COLD void Vsynth_output___024root___eval_static__TOP(Vsynth_output___024root* vlSelf);
VL_ATTR_COLD void Vsynth_output___024root____Vm_traceActivitySetAll(Vsynth_output___024root* vlSelf);

VL_ATTR_COLD void Vsynth_output___024root___eval_static(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_static\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsynth_output___024root___eval_static__TOP(vlSelf);
    Vsynth_output___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_NSC8__DOT__uut__DOT__clk_decode_w__0 
        = vlSelfRef.tb_NSC8__DOT__uut__DOT__clk_decode_w;
}

VL_ATTR_COLD void Vsynth_output___024root___eval_static__TOP(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_static__TOP\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b0__05d = 0x34U;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b10__05d = 0xecU;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b11__05d = 0xfcU;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b12__05d = 0U;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b13__05d = 0U;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b14__05d = 0U;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b15__05d = 0U;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b1__05d = 0x52U;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b2__05d = 0x51U;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b3__05d = 0x62U;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b4__05d = 0x79U;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b5__05d = 0U;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b6__05d = 0U;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b7__05d = 0U;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b8__05d = 0U;
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b9__05d = 0x4fU;
}

VL_ATTR_COLD void Vsynth_output___024root___eval_initial__TOP(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_initial__TOP\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("RAM initialized from Source/new_set.mem\n",0);
}

VL_ATTR_COLD void Vsynth_output___024root___eval_final(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_final\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsynth_output___024root___dump_triggers__stl(Vsynth_output___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsynth_output___024root___eval_phase__stl(Vsynth_output___024root* vlSelf);

VL_ATTR_COLD void Vsynth_output___024root___eval_settle(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_settle\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsynth_output___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Testbench\\tb_NSC8.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsynth_output___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsynth_output___024root___dump_triggers__stl(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___dump_triggers__stl\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsynth_output___024root___stl_sequent__TOP__0(Vsynth_output___024root* vlSelf);

VL_ATTR_COLD void Vsynth_output___024root___eval_stl(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_stl\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsynth_output___024root___stl_sequent__TOP__0(vlSelf);
        Vsynth_output___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vsynth_output___024root___stl_sequent__TOP__0(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___stl_sequent__TOP__0\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ tb_NSC8__DOT__uut__DOT__a_reg__DOT__out_data__en0;
    tb_NSC8__DOT__uut__DOT__a_reg__DOT__out_data__en0 = 0;
    CData/*7:0*/ tb_NSC8__DOT__uut__DOT__alu_reg__DOT__out_data__en0;
    tb_NSC8__DOT__uut__DOT__alu_reg__DOT__out_data__en0 = 0;
    CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ctrl__DOT___00_;
    tb_NSC8__DOT__uut__DOT__ctrl__DOT___00_ = 0;
    CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ctrl__DOT___01_;
    tb_NSC8__DOT__uut__DOT__ctrl__DOT___01_ = 0;
    CData/*3:0*/ tb_NSC8__DOT__uut__DOT__ir__DOT__out_data__en0;
    tb_NSC8__DOT__uut__DOT__ir__DOT__out_data__en0 = 0;
    CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__out_data__en0;
    tb_NSC8__DOT__uut__DOT__ram0__DOT__out_data__en0 = 0;
    CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_4;
    tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_4 = 0;
    CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_5;
    tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_5 = 0;
    CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_6;
    tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_6 = 0;
    CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_7;
    tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_7 = 0;
    // Body
    vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_a_w 
        = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
            >> 2U) & (3U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__clk_decode_w 
        = ((0xfU != (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)) 
           & (IData)(vlSelfRef.tb_NSC8__DOT__clk));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__jump_w = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                                 >> 2U) 
                                                & (7U 
                                                   == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__tristate_buffer__DOT__out_data__out__strong__out0 
        = ((0xcU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__tristate_buffer__DOT__out_data__out__strong__out0)) 
           | (3U & ((- (IData)((1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                      >> 5U)))) & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__counter_contents))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__tristate_buffer__DOT__out_data__out__strong__out1 
        = ((3U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__tristate_buffer__DOT__out_data__out__strong__out1)) 
           | (0xcU & (((- (IData)((1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                         >> 5U)))) 
                       << 2U) & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__counter_contents))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__out_data__en0 
        = (0xfU & ((3U & (- (IData)((1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                           >> 5U))))) 
                   | VL_SHIFTL_III(4,4,32, (3U & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                                                >> 5U))))), 2U)));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                                  >> 1U) 
                                                 & (4U 
                                                    == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__a_reg_out 
        = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__upper_nibble_a__data_out) 
            << 4U) | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__lower_nibble_a__data_out));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__b_to_alu = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__upper_nibble_b__data_out) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__lower_nibble_b__data_out));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___02_ 
        = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
            >> 1U) & (6U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___031_ 
        = ((8U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
            ? ((4U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                ? ((2U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                    ? ((1U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                        ? (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b15__05d)
                        : (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b14__05d))
                    : ((1U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                        ? (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b13__05d)
                        : (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b12__05d)))
                : ((2U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                    ? ((1U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                        ? (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b11__05d)
                        : (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b10__05d))
                    : ((1U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                        ? (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b9__05d)
                        : (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b8__05d))))
            : ((4U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                ? ((2U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                    ? ((1U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                        ? (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b7__05d)
                        : (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b6__05d))
                    : ((1U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                        ? (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b5__05d)
                        : (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b4__05d)))
                : ((2U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                    ? ((1U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                        ? (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b3__05d)
                        : (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b2__05d))
                    : ((1U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram))
                        ? (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b1__05d)
                        : (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b0__05d)))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__write_enable_output_w 
        = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
            >> 2U) & (0xeU == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___05_ 
        = ((1U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)) 
           | (2U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___07_ 
        = ((5U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)) 
           | (6U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___19_ 
        = (1U & (((~ (IData)((0U != (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)))) 
                  | (1U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                 | (2U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus__strong__out9 
        = ((0xf0U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus__strong__out9)) 
           | (((3U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__tristate_buffer__DOT__out_data__out__strong__out0) 
                      & (- (IData)((1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                          >> 5U)))))) 
               | ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__tristate_buffer__DOT__out_data__out__strong__out1) 
                  & VL_SHIFTL_III(4,4,32, (3U & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                                               >> 5U))))), 2U))) 
              & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__out_data__en0)));
    tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_7 
        = ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w) 
           & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram));
    tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_6 
        = ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w) 
           & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram) 
              >> 1U));
    tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_5 
        = ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w) 
           & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram) 
              >> 2U));
    tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_4 
        = ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w) 
           & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram) 
              >> 3U));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__result 
        = (0xffU & (((1U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing))
                      ? ((2U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)) 
                         | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___02_))
                      : (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___02_))
                     ? ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__a_reg_out) 
                        - (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__b_to_alu))
                     : ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__a_reg_out) 
                        + (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__b_to_alu))));
    if ((2U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w 
            = ((4U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)) 
               | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__write_enable_output_w));
        vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w 
            = (1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___19_) 
                     | ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                        >> 3U)));
    } else {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__write_enable_output_w;
        vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w 
            = (1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                     >> 3U));
    }
    vlSelfRef.tb_NSC8__DOT__uut__DOT__load_b_w = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                                   >> 1U) 
                                                  & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___05_));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_b_w 
        = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
            >> 2U) & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___07_));
    tb_NSC8__DOT__uut__DOT__ctrl__DOT___00_ = (1U & 
                                               (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                                 >> 1U) 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)))) 
                                                   | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___07_))));
    tb_NSC8__DOT__uut__DOT__ctrl__DOT___01_ = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                                >> 1U) 
                                               & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___07_));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ir_w 
        = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
            >> 2U) & ((((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___19_) 
                          | (3U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                         | (4U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                        | (5U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                       | (6U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                      | (7U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___003_ 
        = (1U & ((~ (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_7)) 
                 & (~ (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_6))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___006_ 
        = ((~ (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_6)) 
           & (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_7));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___008_ 
        = ((~ (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_7)) 
           & (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_6));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___010_ 
        = ((IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_7) 
           & (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_6));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___004_ 
        = (1U & ((~ (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_5)) 
                 & (~ (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_4))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___012_ 
        = ((~ (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_4)) 
           & (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_5));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___017_ 
        = ((~ (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_5)) 
           & (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_4));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___022_ 
        = ((IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_5) 
           & (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT____VdfgRegularize_hd50a4181_0_4));
    tb_NSC8__DOT__uut__DOT__a_reg__DOT__out_data__en0 
        = (0xffU & ((3U & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w)))) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w)))), 2U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w)))), 4U) 
                          | VL_SHIFTL_III(8,8,32, (3U 
                                                   & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w)))), 6U)))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out0 
        = ((0xfcU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out0)) 
           | (3U & ((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w))) 
                    & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__lower_nibble_a__data_out))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out1 
        = ((0xf3U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out1)) 
           | (0xcU & (((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w))) 
                       << 2U) & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__lower_nibble_a__data_out))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out2 
        = ((0xcfU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out2)) 
           | (0x30U & (((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w))) 
                        & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__upper_nibble_a__data_out)) 
                       << 4U)));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out3 
        = ((0x3fU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out3)) 
           | (0xc0U & (((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w))) 
                        << 6U) & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__upper_nibble_a__data_out) 
                                  << 4U))));
    if ((1U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__load_a_w 
            = ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___05_) 
               | (IData)(tb_NSC8__DOT__uut__DOT__ctrl__DOT___00_));
        vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w 
            = ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___05_) 
               | (IData)(tb_NSC8__DOT__uut__DOT__ctrl__DOT___01_));
    } else {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__load_a_w 
            = tb_NSC8__DOT__uut__DOT__ctrl__DOT___00_;
        vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w 
            = tb_NSC8__DOT__uut__DOT__ctrl__DOT___01_;
    }
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ir__DOT__bus_buffer__DOT__out_data__out__strong__out0 
        = ((0xcU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir__DOT__bus_buffer__DOT__out_data__out__strong__out0)) 
           | (3U & ((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ir_w))) 
                    & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir__DOT__buffer_input))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ir__DOT__bus_buffer__DOT__out_data__out__strong__out1 
        = ((3U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir__DOT__bus_buffer__DOT__out_data__out__strong__out1)) 
           | (0xcU & (((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ir_w))) 
                       << 2U) & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir__DOT__buffer_input))));
    tb_NSC8__DOT__uut__DOT__ir__DOT__out_data__en0 
        = (0xfU & ((3U & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ir_w)))) 
                   | VL_SHIFTL_III(4,4,32, (3U & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ir_w)))), 2U)));
    tb_NSC8__DOT__uut__DOT__ram0__DOT__out_data__en0 
        = (0xffU & ((3U & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w)))) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w)))), 2U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w)))), 4U) 
                          | VL_SHIFTL_III(8,8,32, (3U 
                                                   & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w)))), 6U)))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out0 
        = ((0xfcU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out0)) 
           | (3U & ((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w))) 
                    & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___031_))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out1 
        = ((0xf3U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out1)) 
           | (0xcU & (((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w))) 
                       << 2U) & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___031_))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out2 
        = ((0xcfU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out2)) 
           | (0x30U & (((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w))) 
                        << 4U) & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___031_))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out3 
        = ((0x3fU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out3)) 
           | (0xc0U & (((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w))) 
                        << 6U) & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___031_))));
    tb_NSC8__DOT__uut__DOT__alu_reg__DOT__out_data__en0 
        = (0xffU & ((3U & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w)))) 
                    | (VL_SHIFTL_III(8,8,32, (3U & 
                                              (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w)))), 2U) 
                       | (VL_SHIFTL_III(8,8,32, (3U 
                                                 & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w)))), 4U) 
                          | VL_SHIFTL_III(8,8,32, (3U 
                                                   & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w)))), 6U)))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out0 
        = ((0xfcU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out0)) 
           | (3U & ((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w))) 
                    & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__result))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out1 
        = ((0xf3U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out1)) 
           | (0xcU & (((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w))) 
                       << 2U) & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__result))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out2 
        = ((0xcfU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out2)) 
           | (0x30U & (((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w))) 
                        << 4U) & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__result))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out3 
        = ((0x3fU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out3)) 
           | (0xc0U & (((- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w))) 
                        << 6U) & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__result))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus__strong__out8 
        = ((0xf0U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus__strong__out8)) 
           | (((3U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir__DOT__bus_buffer__DOT__out_data__out__strong__out0) 
                      & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ir_w))))) 
               | ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir__DOT__bus_buffer__DOT__out_data__out__strong__out1) 
                  & VL_SHIFTL_III(4,4,32, (3U & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ir_w)))), 2U))) 
              & (IData)(tb_NSC8__DOT__uut__DOT__ir__DOT__out_data__en0)));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus = ((
                                                   (((3U 
                                                      & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out0) 
                                                         & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w))))) 
                                                     | (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out1) 
                                                         & VL_SHIFTL_III(8,8,32, 
                                                                         (3U 
                                                                          & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w)))), 2U)) 
                                                        | (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out2) 
                                                            & VL_SHIFTL_III(8,8,32, 
                                                                            (3U 
                                                                             & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w)))), 4U)) 
                                                           | ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out3) 
                                                              & VL_SHIFTL_III(8,8,32, 
                                                                              (3U 
                                                                               & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w)))), 6U))))) 
                                                    & (IData)(tb_NSC8__DOT__uut__DOT__a_reg__DOT__out_data__en0)) 
                                                   & (IData)(tb_NSC8__DOT__uut__DOT__a_reg__DOT__out_data__en0)) 
                                                  | (((((3U 
                                                         & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out0) 
                                                            & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w))))) 
                                                        | (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out1) 
                                                            & VL_SHIFTL_III(8,8,32, 
                                                                            (3U 
                                                                             & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w)))), 2U)) 
                                                           | (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out2) 
                                                               & VL_SHIFTL_III(8,8,32, 
                                                                               (3U 
                                                                                & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w)))), 4U)) 
                                                              | ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out3) 
                                                                 & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w)))), 6U))))) 
                                                       & (IData)(tb_NSC8__DOT__uut__DOT__alu_reg__DOT__out_data__en0)) 
                                                      & (IData)(tb_NSC8__DOT__uut__DOT__alu_reg__DOT__out_data__en0)) 
                                                     | (((((3U 
                                                            & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out0) 
                                                               & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w))))) 
                                                           | (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out1) 
                                                               & VL_SHIFTL_III(8,8,32, 
                                                                               (3U 
                                                                                & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w)))), 2U)) 
                                                              | (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out2) 
                                                                  & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w)))), 4U)) 
                                                                 | ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out3) 
                                                                    & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & (- (IData)((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w)))), 6U))))) 
                                                          & (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT__out_data__en0)) 
                                                         & (IData)(tb_NSC8__DOT__uut__DOT__ram0__DOT__out_data__en0)) 
                                                        | (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus__strong__out8) 
                                                            & (IData)(tb_NSC8__DOT__uut__DOT__ir__DOT__out_data__en0)) 
                                                           | ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus__strong__out9) 
                                                              & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__out_data__en0))))));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_ 
        = ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w)
            ? (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus)
            : 0U);
    vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT___00_ 
        = (0xfU & ((0x10U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing))
                    ? ((IData)(1U) + (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__counter_contents))
                    : ((IData)(vlSelfRef.tb_NSC8__DOT__reset_counter)
                        ? 0U : ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__jump_w)
                                 ? (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus)
                                 : 0U))));
}

VL_ATTR_COLD void Vsynth_output___024root___eval_triggers__stl(Vsynth_output___024root* vlSelf);

VL_ATTR_COLD bool Vsynth_output___024root___eval_phase__stl(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_phase__stl\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsynth_output___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsynth_output___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsynth_output___024root___dump_triggers__act(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___dump_triggers__act\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_NSC8.uut.clk_decode_w)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_NSC8.uut.clk_decode_w)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsynth_output___024root___dump_triggers__nba(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___dump_triggers__nba\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_NSC8.uut.clk_decode_w)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_NSC8.uut.clk_decode_w)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsynth_output___024root____Vm_traceActivitySetAll(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root____Vm_traceActivitySetAll\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vsynth_output___024root___ctor_var_reset(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___ctor_var_reset\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_NSC8__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__reset_counter = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__reset_ring = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__clear_ir = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__output_contents = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__b_to_alu = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__clk_decode_w = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__data_bus = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ir_to_controller = VL_RAND_RESET_I(4);
    vlSelf->tb_NSC8__DOT__uut__DOT__jump_w = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__load_a_w = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__load_b_w = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__load_immediate_a_w = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__load_immediate_b_w = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__mar_to_ram = VL_RAND_RESET_I(4);
    vlSelf->tb_NSC8__DOT__uut__DOT__output_alu_w = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__output_enable_a_w = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__output_enable_ir_w = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__output_enable_ram_w = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__store_w = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__write_enable_output_w = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__data_bus__strong__out8 = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__data_bus__strong__out9 = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__a_reg__DOT__a_reg_out = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__lower_nibble_a__data_out = VL_RAND_RESET_I(4);
    vlSelf->tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__upper_nibble_a__data_out = VL_RAND_RESET_I(4);
    vlSelf->tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out0 = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out1 = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out2 = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out3 = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__alu_reg__DOT__result = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out0 = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out1 = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out2 = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out3 = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__lower_nibble_b__data_out = VL_RAND_RESET_I(4);
    vlSelf->tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__upper_nibble_b__data_out = VL_RAND_RESET_I(4);
    vlSelf->tb_NSC8__DOT__uut__DOT__ctrl__DOT___02_ = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__ctrl__DOT___05_ = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__ctrl__DOT___07_ = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__ctrl__DOT___19_ = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing = VL_RAND_RESET_I(6);
    vlSelf->tb_NSC8__DOT__uut__DOT__ir__DOT__buffer_input = VL_RAND_RESET_I(4);
    vlSelf->tb_NSC8__DOT__uut__DOT__ir__DOT__bus_buffer__DOT__out_data__out__strong__out0 = VL_RAND_RESET_I(4);
    vlSelf->tb_NSC8__DOT__uut__DOT__ir__DOT__bus_buffer__DOT__out_data__out__strong__out1 = VL_RAND_RESET_I(4);
    vlSelf->tb_NSC8__DOT__uut__DOT__pc__DOT___00_ = VL_RAND_RESET_I(4);
    vlSelf->tb_NSC8__DOT__uut__DOT__pc__DOT__counter_contents = VL_RAND_RESET_I(4);
    vlSelf->tb_NSC8__DOT__uut__DOT__pc__DOT__out_data__en0 = 0;
    vlSelf->tb_NSC8__DOT__uut__DOT__pc__DOT__tristate_buffer__DOT__out_data__out__strong__out0 = VL_RAND_RESET_I(4);
    vlSelf->tb_NSC8__DOT__uut__DOT__pc__DOT__tristate_buffer__DOT__out_data__out__strong__out1 = VL_RAND_RESET_I(4);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT___001_ = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT___003_ = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT___004_ = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT___006_ = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT___008_ = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT___010_ = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT___012_ = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT___017_ = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT___022_ = VL_RAND_RESET_I(1);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT___031_ = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b0__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b10__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b11__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b12__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b13__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b14__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b15__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b1__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b2__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b3__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b4__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b5__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b6__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b7__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b8__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b9__05d = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out0 = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out1 = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out2 = VL_RAND_RESET_I(8);
    vlSelf->tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out3 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_NSC8__DOT__uut__DOT__clk_decode_w__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
