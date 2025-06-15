// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsynth_output.h for the primary calling header

#include "Vsynth_output__pch.h"
#include "Vsynth_output__Syms.h"
#include "Vsynth_output___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsynth_output___024root___dump_triggers__stl(Vsynth_output___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsynth_output___024root___eval_triggers__stl(Vsynth_output___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root___eval_triggers__stl\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsynth_output___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
