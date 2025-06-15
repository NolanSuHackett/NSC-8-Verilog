// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsynth_output.h for the primary calling header

#include "Vsynth_output__pch.h"
#include "Vsynth_output___024root.h"

VL_ATTR_COLD void Vsynth_output___024root___eval_initial__TOP(Vsynth_output___024root* vlSelf);
VlCoroutine Vsynth_output___024root___eval_initial__TOP__Vtiming__0(Vsynth_output___024root* vlSelf);
VlCoroutine Vsynth_output___024root___eval_initial__TOP__Vtiming__1(Vsynth_output___024root* vlSelf);

void Vsynth_output___024root___eval_initial(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_initial\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsynth_output___024root___eval_initial__TOP(vlSelf);
    Vsynth_output___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsynth_output___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vsynth_output___024root___eval_initial__TOP__Vtiming__1(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "Testbench\tb_NSC8.v", 
                                             20);
        vlSelfRef.tb_NSC8__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_NSC8__DOT__clk)));
    }
}

void Vsynth_output___024root___act_sequent__TOP__0(Vsynth_output___024root* vlSelf);

void Vsynth_output___024root___eval_act(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_act\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vsynth_output___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsynth_output___024root___act_sequent__TOP__0(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___act_sequent__TOP__0\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_NSC8__DOT__uut__DOT__clk_decode_w 
        = ((0xfU != (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)) 
           & (IData)(vlSelfRef.tb_NSC8__DOT__clk));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT___00_ 
        = (0xfU & ((0x10U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing))
                    ? ((IData)(1U) + (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__counter_contents))
                    : ((IData)(vlSelfRef.tb_NSC8__DOT__reset_counter)
                        ? 0U : ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__jump_w)
                                 ? (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus)
                                 : 0U))));
}

void Vsynth_output___024root___nba_sequent__TOP__0(Vsynth_output___024root* vlSelf);
void Vsynth_output___024root___nba_sequent__TOP__1(Vsynth_output___024root* vlSelf);
void Vsynth_output___024root___nba_comb__TOP__0(Vsynth_output___024root* vlSelf);
void Vsynth_output___024root___nba_comb__TOP__1(Vsynth_output___024root* vlSelf);
void Vsynth_output___024root___nba_comb__TOP__2(Vsynth_output___024root* vlSelf);

void Vsynth_output___024root___eval_nba(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_nba\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsynth_output___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsynth_output___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsynth_output___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsynth_output___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsynth_output___024root___nba_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vsynth_output___024root___nba_sequent__TOP__0(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___nba_sequent__TOP__0\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vdly__tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing;
    __Vdly__tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing = 0;
    // Body
    __Vdly__tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing 
        = vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing;
    __Vdly__tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing 
        = ((IData)(vlSelfRef.tb_NSC8__DOT__reset_ring)
            ? 0x20U : ((0x20U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                 << 5U)) | (0x1fU & 
                                            ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                             >> 1U))));
    if ((1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__jump_w) 
               | (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                   >> 4U) | (IData)(vlSelfRef.tb_NSC8__DOT__reset_counter))))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__counter_contents 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT___00_;
    }
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing 
        = __Vdly__tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing;
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
}

VL_INLINE_OPT void Vsynth_output___024root___nba_sequent__TOP__1(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___nba_sequent__TOP__1\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_NSC8__DOT__uut__DOT__write_enable_output_w) {
        vlSelfRef.tb_NSC8__DOT__output_contents = vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus;
    }
    if (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_b_w) 
         | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_b_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__lower_nibble_b__data_out 
            = (0xfU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus));
    }
    if (vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_b_w) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__upper_nibble_b__data_out = 0U;
    } else if (vlSelfRef.tb_NSC8__DOT__uut__DOT__load_b_w) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__upper_nibble_b__data_out 
            = (0xfU & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus) 
                       >> 4U));
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___006_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___017_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b9__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___003_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___017_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b8__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___010_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___012_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b7__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___008_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___012_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b6__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___006_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___012_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b5__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___003_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___012_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b4__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___010_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___004_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b3__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___008_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___004_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b2__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___006_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___004_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b1__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___010_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___022_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b15__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___008_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___022_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b14__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___006_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___022_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b13__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___003_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___022_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b12__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___010_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___017_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b11__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___008_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___017_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b10__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if ((((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___003_) 
          & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___004_)) 
         & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b0__05d 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
    }
    if (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_a_w) 
         | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_a_w))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__lower_nibble_a__data_out 
            = (0xfU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus));
    }
    if (vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_a_w) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__upper_nibble_a__data_out = 0U;
    } else if (vlSelfRef.tb_NSC8__DOT__uut__DOT__load_a_w) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__upper_nibble_a__data_out 
            = (0xfU & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus) 
                       >> 4U));
    }
    if ((1U & ((4U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing))
                ? (((((~ (IData)((0U != (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)))) 
                      | (4U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                     | (1U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                    | (2U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                   | ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                      >> 5U)) : ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                 >> 5U)))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram 
            = (0xfU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus));
    }
    if (vlSelfRef.tb_NSC8__DOT__clear_ir) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ir__DOT__buffer_input = 0U;
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller = 0U;
    } else if ((8U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ir__DOT__buffer_input 
            = (0xfU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus));
        vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller 
            = (0xfU & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus) 
                       >> 4U));
    }
    vlSelfRef.tb_NSC8__DOT__uut__DOT__b_to_alu = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__upper_nibble_b__data_out) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__lower_nibble_b__data_out));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__a_reg_out 
        = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__upper_nibble_a__data_out) 
            << 4U) | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__lower_nibble_a__data_out));
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
}

VL_INLINE_OPT void Vsynth_output___024root___nba_comb__TOP__0(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___nba_comb__TOP__0\n"); );
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
    vlSelfRef.tb_NSC8__DOT__uut__DOT__jump_w = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                                 >> 2U) 
                                                & (7U 
                                                   == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                                  >> 1U) 
                                                 & (4U 
                                                    == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___02_ 
        = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
            >> 1U) & (6U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)));
    vlSelfRef.tb_NSC8__DOT__uut__DOT__write_enable_output_w 
        = (((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
            >> 2U) & (0xeU == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)));
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
    if ((2U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing))) {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w 
            = (1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___19_) 
                     | ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                        >> 3U)));
        vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w 
            = ((4U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)) 
               | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__write_enable_output_w));
    } else {
        vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w 
            = (1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                     >> 3U));
        vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w 
            = vlSelfRef.tb_NSC8__DOT__uut__DOT__write_enable_output_w;
    }
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
}

VL_INLINE_OPT void Vsynth_output___024root___nba_comb__TOP__1(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___nba_comb__TOP__1\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_NSC8__DOT__uut__DOT__clk_decode_w 
        = ((0xfU != (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)) 
           & (IData)(vlSelfRef.tb_NSC8__DOT__clk));
}

VL_INLINE_OPT void Vsynth_output___024root___nba_comb__TOP__2(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___nba_comb__TOP__2\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT___00_ 
        = (0xfU & ((0x10U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing))
                    ? ((IData)(1U) + (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__counter_contents))
                    : ((IData)(vlSelfRef.tb_NSC8__DOT__reset_counter)
                        ? 0U : ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__jump_w)
                                 ? (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus)
                                 : 0U))));
}

void Vsynth_output___024root___timing_resume(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___timing_resume\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsynth_output___024root___eval_triggers__act(Vsynth_output___024root* vlSelf);

bool Vsynth_output___024root___eval_phase__act(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_phase__act\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsynth_output___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsynth_output___024root___timing_resume(vlSelf);
        Vsynth_output___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsynth_output___024root___eval_phase__nba(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_phase__nba\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsynth_output___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsynth_output___024root___dump_triggers__nba(Vsynth_output___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsynth_output___024root___dump_triggers__act(Vsynth_output___024root* vlSelf);
#endif  // VL_DEBUG

void Vsynth_output___024root___eval(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsynth_output___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Testbench\\tb_NSC8.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsynth_output___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Testbench\\tb_NSC8.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsynth_output___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsynth_output___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsynth_output___024root___eval_debug_assertions(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_debug_assertions\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
