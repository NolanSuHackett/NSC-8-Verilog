// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_saif_c.h"
#include "Vsynth_output__Syms.h"


void Vsynth_output___024root__trace_chg_0_sub_0(Vsynth_output___024root* vlSelf, VerilatedSaif::Buffer* bufp);

void Vsynth_output___024root__trace_chg_0(void* voidSelf, VerilatedSaif::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root__trace_chg_0\n"); );
    // Init
    Vsynth_output___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsynth_output___024root*>(voidSelf);
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsynth_output___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsynth_output___024root__trace_chg_0_sub_0(Vsynth_output___024root* vlSelf, VerilatedSaif::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root__trace_chg_0_sub_0\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,((1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                    >> 4U))));
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                    >> 3U))));
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                    >> 5U))));
        bufp->chgCData(oldp+3,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing),6);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__counter_contents),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+5,(vlSelfRef.tb_NSC8__DOT__output_contents),8);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__a_reg_out),8);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_NSC8__DOT__uut__DOT__b_to_alu),8);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller),4);
        bufp->chgCData(oldp+9,(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram),4);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__lower_nibble_a__data_out),4);
        bufp->chgCData(oldp+11,(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__upper_nibble_a__data_out),4);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__lower_nibble_b__data_out),4);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__upper_nibble_b__data_out),4);
        bufp->chgBit(oldp+14,((1U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
        bufp->chgBit(oldp+15,((5U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
        bufp->chgBit(oldp+16,((0xfU == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
        bufp->chgBit(oldp+17,((7U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
        bufp->chgBit(oldp+18,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)))))));
        bufp->chgBit(oldp+19,((3U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
        bufp->chgBit(oldp+20,((0xeU == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
        bufp->chgBit(oldp+21,((4U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
        bufp->chgBit(oldp+22,((2U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
        bufp->chgBit(oldp+23,((6U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
        bufp->chgCData(oldp+24,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir__DOT__buffer_input),4);
        bufp->chgCData(oldp+25,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b0__05d),8);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b10__05d),8);
        bufp->chgCData(oldp+27,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b11__05d),8);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b12__05d),8);
        bufp->chgCData(oldp+29,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b13__05d),8);
        bufp->chgCData(oldp+30,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b14__05d),8);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b15__05d),8);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b1__05d),8);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b2__05d),8);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b3__05d),8);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b4__05d),8);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b5__05d),8);
        bufp->chgCData(oldp+37,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b6__05d),8);
        bufp->chgCData(oldp+38,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b7__05d),8);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b8__05d),8);
        bufp->chgCData(oldp+40,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b9__05d),8);
        bufp->chgCData(oldp+41,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___031_),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+42,(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus),8);
        bufp->chgBit(oldp+43,(vlSelfRef.tb_NSC8__DOT__uut__DOT__jump_w));
        bufp->chgBit(oldp+44,(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_a_w));
        bufp->chgBit(oldp+45,(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_b_w));
        bufp->chgBit(oldp+46,(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_a_w));
        bufp->chgBit(oldp+47,(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_b_w));
        bufp->chgBit(oldp+48,(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w));
        bufp->chgBit(oldp+49,(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w));
        bufp->chgBit(oldp+50,(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ir_w));
        bufp->chgBit(oldp+51,(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w));
        bufp->chgBit(oldp+52,(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w));
        bufp->chgBit(oldp+53,(vlSelfRef.tb_NSC8__DOT__uut__DOT__write_enable_output_w));
        bufp->chgBit(oldp+54,(((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_a_w) 
                               | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_a_w))));
        bufp->chgCData(oldp+55,((0xfU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus))),4);
        bufp->chgCData(oldp+56,((0xfU & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+57,(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__result),8);
        bufp->chgBit(oldp+58,(((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_b_w) 
                               | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_b_w))));
    }
    bufp->chgBit(oldp+59,(vlSelfRef.tb_NSC8__DOT__clk));
    bufp->chgBit(oldp+60,(vlSelfRef.tb_NSC8__DOT__reset_counter));
    bufp->chgBit(oldp+61,(vlSelfRef.tb_NSC8__DOT__reset_ring));
    bufp->chgBit(oldp+62,(vlSelfRef.tb_NSC8__DOT__clear_ir));
    bufp->chgBit(oldp+63,(vlSelfRef.tb_NSC8__DOT__uut__DOT__clk_decode_w));
    bufp->chgBit(oldp+64,((1U & ((4U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing))
                                  ? (((((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)))) 
                                        | (4U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                                       | (1U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                                      | (2U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                                     | ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                        >> 5U)) : ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                                   >> 5U)))));
    bufp->chgBit(oldp+65,(((1U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing))
                            ? ((2U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)) 
                               | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___02_))
                            : (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___02_))));
}

void Vsynth_output___024root__trace_cleanup(void* voidSelf, VerilatedSaif* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root__trace_cleanup\n"); );
    // Init
    Vsynth_output___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsynth_output___024root*>(voidSelf);
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
