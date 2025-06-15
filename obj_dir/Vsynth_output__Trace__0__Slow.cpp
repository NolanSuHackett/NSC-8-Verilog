// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_saif_c.h"
#include "Vsynth_output__Syms.h"


VL_ATTR_COLD void Vsynth_output___024root__trace_init_sub__TOP__0(Vsynth_output___024root* vlSelf, VerilatedSaif* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root__trace_init_sub__TOP__0\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_NSC8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+67,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"reset_ring",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"clear_ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"output_contents",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"a_to_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"b_to_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+63,0,"clear_ir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"clk_decode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"count_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"data_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"ir_to_controller",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+44,0,"jump_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"load_a_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"load_b_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"load_immediate_a_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"load_immediate_b_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"load_ir_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"load_mar_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"mar_to_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"output_alu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"output_contents",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+50,0,"output_enable_a_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"output_enable_ir_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"output_enable_ram_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"pc_output_enable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset_counter",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"reset_ring",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"store_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"subtract_enable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"write_enable_output_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("a_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"a_reg_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"data_out_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"data_out_bus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+45,0,"load_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"load_immediate_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"output_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"write_enable_lower",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"write_enable_upper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lower_nibble_a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+55,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tristate_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+50,0,"control_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("upper_nibble_a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+47,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+45,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("alu_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"data_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"data_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+49,0,"output_alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+66,0,"subtract_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+49,0,"control_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("b_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+46,0,"load_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"load_immediate_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"write_enable_lower",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"write_enable_upper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lower_nibble_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+59,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("upper_nibble_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+48,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+46,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"ADDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"HLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"JUMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"LDA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"LDAI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"OUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"STA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"SUBI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"base_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"clk_decode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+44,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"load_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"load_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"load_immediate_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"load_immediate_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"load_ir",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"load_mar",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"output_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"output_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"output_enable_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"output_enable_ir",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"output_enable_ram",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"pc_output_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"reset_ring",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"store",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"subtract_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"timing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+54,0,"write_enable_output",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ring_counter_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"count_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+62,0,"reset_ring",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ir", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"buffer_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"bus_output",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+63,0,"clear_ir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"controller_output",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2,0,"load_ir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"output_enable_ir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bus_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+51,0,"control_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("lower_nibble_ir", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+63,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("upper_nibble_ir", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+63,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mar0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+65,0,"load_mar",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mar_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+65,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+54,0,"write_enable_output",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("output_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+54,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"counter_contents",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+44,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"output_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"reset_counter",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tristate_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+3,0,"control_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ram0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+64,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"memory_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+52,0,"output_enable_ram",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"ram_array[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"ram_array[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"ram_array[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"ram_array[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"ram_array[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+31,0,"ram_array[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,0,"ram_array[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"ram_array[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"ram_array[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"ram_array[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"ram_array[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"ram_array[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"ram_array[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"ram_array[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"ram_array[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"ram_array[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+53,0,"store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+52,0,"control_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsynth_output___024root__trace_init_top(Vsynth_output___024root* vlSelf, VerilatedSaif* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root__trace_init_top\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsynth_output___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsynth_output___024root__trace_const_0(void* voidSelf, VerilatedSaif::Buffer* bufp);
VL_ATTR_COLD void Vsynth_output___024root__trace_full_0(void* voidSelf, VerilatedSaif::Buffer* bufp);
void Vsynth_output___024root__trace_chg_0(void* voidSelf, VerilatedSaif::Buffer* bufp);
void Vsynth_output___024root__trace_cleanup(void* voidSelf, VerilatedSaif* /*unused*/);

VL_ATTR_COLD void Vsynth_output___024root__trace_register(Vsynth_output___024root* vlSelf, VerilatedSaif* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root__trace_register\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsynth_output___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsynth_output___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsynth_output___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsynth_output___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsynth_output___024root__trace_const_0_sub_0(Vsynth_output___024root* vlSelf, VerilatedSaif::Buffer* bufp);

VL_ATTR_COLD void Vsynth_output___024root__trace_const_0(void* voidSelf, VerilatedSaif::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root__trace_const_0\n"); );
    // Init
    Vsynth_output___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsynth_output___024root*>(voidSelf);
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsynth_output___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsynth_output___024root__trace_const_0_sub_0(Vsynth_output___024root* vlSelf, VerilatedSaif::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root__trace_const_0_sub_0\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+67,(8U),32);
    bufp->fullBit(oldp+68,(0U));
}

VL_ATTR_COLD void Vsynth_output___024root__trace_full_0_sub_0(Vsynth_output___024root* vlSelf, VerilatedSaif::Buffer* bufp);

VL_ATTR_COLD void Vsynth_output___024root__trace_full_0(void* voidSelf, VerilatedSaif::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root__trace_full_0\n"); );
    // Init
    Vsynth_output___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsynth_output___024root*>(voidSelf);
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsynth_output___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsynth_output___024root__trace_full_0_sub_0(Vsynth_output___024root* vlSelf, VerilatedSaif::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsynth_output___024root__trace_full_0_sub_0\n"); );
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                 >> 4U))));
    bufp->fullBit(oldp+2,((1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                 >> 3U))));
    bufp->fullBit(oldp+3,((1U & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                 >> 5U))));
    bufp->fullCData(oldp+4,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing),6);
    bufp->fullCData(oldp+5,(vlSelfRef.tb_NSC8__DOT__uut__DOT__pc__DOT__counter_contents),4);
    bufp->fullCData(oldp+6,(vlSelfRef.tb_NSC8__DOT__output_contents),8);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT__a_reg_out),8);
    bufp->fullCData(oldp+8,(vlSelfRef.tb_NSC8__DOT__uut__DOT__b_to_alu),8);
    bufp->fullCData(oldp+9,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller),4);
    bufp->fullCData(oldp+10,(vlSelfRef.tb_NSC8__DOT__uut__DOT__mar_to_ram),4);
    bufp->fullCData(oldp+11,(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__lower_nibble_a__data_out),4);
    bufp->fullCData(oldp+12,(vlSelfRef.tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__upper_nibble_a__data_out),4);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__lower_nibble_b__data_out),4);
    bufp->fullCData(oldp+14,(vlSelfRef.tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__upper_nibble_b__data_out),4);
    bufp->fullBit(oldp+15,((1U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
    bufp->fullBit(oldp+16,((5U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
    bufp->fullBit(oldp+17,((0xfU == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
    bufp->fullBit(oldp+18,((7U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
    bufp->fullBit(oldp+19,((1U & (~ (IData)((0U != (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)))))));
    bufp->fullBit(oldp+20,((3U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
    bufp->fullBit(oldp+21,((0xeU == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
    bufp->fullBit(oldp+22,((4U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
    bufp->fullBit(oldp+23,((2U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
    bufp->fullBit(oldp+24,((6U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))));
    bufp->fullCData(oldp+25,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir__DOT__buffer_input),4);
    bufp->fullCData(oldp+26,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b0__05d),8);
    bufp->fullCData(oldp+27,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b10__05d),8);
    bufp->fullCData(oldp+28,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b11__05d),8);
    bufp->fullCData(oldp+29,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b12__05d),8);
    bufp->fullCData(oldp+30,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b13__05d),8);
    bufp->fullCData(oldp+31,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b14__05d),8);
    bufp->fullCData(oldp+32,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b15__05d),8);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b1__05d),8);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b2__05d),8);
    bufp->fullCData(oldp+35,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b3__05d),8);
    bufp->fullCData(oldp+36,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b4__05d),8);
    bufp->fullCData(oldp+37,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b5__05d),8);
    bufp->fullCData(oldp+38,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b6__05d),8);
    bufp->fullCData(oldp+39,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b7__05d),8);
    bufp->fullCData(oldp+40,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b8__05d),8);
    bufp->fullCData(oldp+41,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b9__05d),8);
    bufp->fullCData(oldp+42,(vlSelfRef.tb_NSC8__DOT__uut__DOT__ram0__DOT___031_),8);
    bufp->fullCData(oldp+43,(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus),8);
    bufp->fullBit(oldp+44,(vlSelfRef.tb_NSC8__DOT__uut__DOT__jump_w));
    bufp->fullBit(oldp+45,(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_a_w));
    bufp->fullBit(oldp+46,(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_b_w));
    bufp->fullBit(oldp+47,(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_a_w));
    bufp->fullBit(oldp+48,(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_b_w));
    bufp->fullBit(oldp+49,(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_alu_w));
    bufp->fullBit(oldp+50,(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_a_w));
    bufp->fullBit(oldp+51,(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ir_w));
    bufp->fullBit(oldp+52,(vlSelfRef.tb_NSC8__DOT__uut__DOT__output_enable_ram_w));
    bufp->fullBit(oldp+53,(vlSelfRef.tb_NSC8__DOT__uut__DOT__store_w));
    bufp->fullBit(oldp+54,(vlSelfRef.tb_NSC8__DOT__uut__DOT__write_enable_output_w));
    bufp->fullBit(oldp+55,(((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_a_w) 
                            | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_a_w))));
    bufp->fullCData(oldp+56,((0xfU & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus))),4);
    bufp->fullCData(oldp+57,((0xfU & ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__data_bus) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+58,(vlSelfRef.tb_NSC8__DOT__uut__DOT__alu_reg__DOT__result),8);
    bufp->fullBit(oldp+59,(((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_b_w) 
                            | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__load_immediate_b_w))));
    bufp->fullBit(oldp+60,(vlSelfRef.tb_NSC8__DOT__clk));
    bufp->fullBit(oldp+61,(vlSelfRef.tb_NSC8__DOT__reset_counter));
    bufp->fullBit(oldp+62,(vlSelfRef.tb_NSC8__DOT__reset_ring));
    bufp->fullBit(oldp+63,(vlSelfRef.tb_NSC8__DOT__clear_ir));
    bufp->fullBit(oldp+64,(vlSelfRef.tb_NSC8__DOT__uut__DOT__clk_decode_w));
    bufp->fullBit(oldp+65,((1U & ((4U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing))
                                   ? (((((~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)))) 
                                         | (4U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                                        | (1U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                                       | (2U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller))) 
                                      | ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                         >> 5U)) : 
                                  ((IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing) 
                                   >> 5U)))));
    bufp->fullBit(oldp+66,(((1U & (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing))
                             ? ((2U == (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ir_to_controller)) 
                                | (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___02_))
                             : (IData)(vlSelfRef.tb_NSC8__DOT__uut__DOT__ctrl__DOT___02_))));
}
