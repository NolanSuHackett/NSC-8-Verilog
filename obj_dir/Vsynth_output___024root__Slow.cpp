// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsynth_output.h for the primary calling header

#include "Vsynth_output__pch.h"
#include "Vsynth_output__Syms.h"
#include "Vsynth_output___024root.h"

void Vsynth_output___024root___ctor_var_reset(Vsynth_output___024root* vlSelf);

Vsynth_output___024root::Vsynth_output___024root(Vsynth_output__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsynth_output___024root___ctor_var_reset(this);
}

void Vsynth_output___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsynth_output___024root::~Vsynth_output___024root() {
}
