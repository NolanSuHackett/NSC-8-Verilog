// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsynth_output.h for the primary calling header

#include "Vsynth_output__pch.h"
#include "Vsynth_output__Syms.h"
#include "Vsynth_output___024root.h"

VL_INLINE_OPT VlCoroutine Vsynth_output___024root___eval_initial__TOP__Vtiming__0(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x4e534338U;
    __Vtemp_1[2U] = 0x74625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_NSC8__DOT__clk = 0U;
    vlSelfRef.tb_NSC8__DOT__reset_counter = 0U;
    vlSelfRef.tb_NSC8__DOT__reset_ring = 0U;
    vlSelfRef.tb_NSC8__DOT__clear_ir = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "Testbench\tb_NSC8.v", 
                                         31);
    vlSelfRef.tb_NSC8__DOT__reset_ring = 1U;
    vlSelfRef.tb_NSC8__DOT__reset_counter = 1U;
    vlSelfRef.tb_NSC8__DOT__clear_ir = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "Testbench\tb_NSC8.v", 
                                         35);
    vlSelfRef.tb_NSC8__DOT__reset_ring = 0U;
    vlSelfRef.tb_NSC8__DOT__reset_counter = 0U;
    vlSelfRef.tb_NSC8__DOT__clear_ir = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "Testbench\tb_NSC8.v", 
                                         39);
    VL_FINISH_MT("Testbench\\tb_NSC8.v", 41, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsynth_output___024root___dump_triggers__act(Vsynth_output___024root* vlSelf);
#endif  // VL_DEBUG

void Vsynth_output___024root___eval_triggers__act(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_triggers__act\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__clk_decode_w) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_NSC8__DOT__uut__DOT__clk_decode_w__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__clk_decode_w)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_NSC8__DOT__uut__DOT__clk_decode_w__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_NSC8__DOT__uut__DOT__clk_decode_w__0 
        = vlSelfRef.tb_NSC8__DOT__uut__DOT__clk_decode_w;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsynth_output___024root___dump_triggers__act(vlSelf);
    }
#endif
}
