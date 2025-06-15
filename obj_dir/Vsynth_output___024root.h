// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsynth_output.h for the primary calling header

#ifndef VERILATED_VSYNTH_OUTPUT___024ROOT_H_
#define VERILATED_VSYNTH_OUTPUT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsynth_output__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsynth_output___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__clk_decode_w;
        CData/*0:0*/ tb_NSC8__DOT__clk;
        CData/*0:0*/ tb_NSC8__DOT__reset_counter;
        CData/*0:0*/ tb_NSC8__DOT__reset_ring;
        CData/*0:0*/ tb_NSC8__DOT__clear_ir;
        CData/*7:0*/ tb_NSC8__DOT__output_contents;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__b_to_alu;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__data_bus;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__ir_to_controller;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__jump_w;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__load_a_w;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__load_b_w;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__load_immediate_a_w;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__load_immediate_b_w;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__mar_to_ram;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__output_alu_w;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__output_enable_a_w;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__output_enable_ir_w;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__output_enable_ram_w;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__store_w;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__write_enable_output_w;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__data_bus__strong__out8;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__data_bus__strong__out9;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__a_reg__DOT__a_reg_out;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__lower_nibble_a__data_out;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__a_reg__DOT____Vcellout__upper_nibble_a__data_out;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out0;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out1;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out2;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__a_reg__DOT__tristate_buffer__DOT__out_data__out__strong__out3;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__alu_reg__DOT__result;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out0;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out1;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out2;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__alu_reg__DOT__alu_buffer__DOT__out_data__out__strong__out3;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__lower_nibble_b__data_out;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__b_reg__DOT____Vcellout__upper_nibble_b__data_out;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ctrl__DOT___02_;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ctrl__DOT___05_;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ctrl__DOT___07_;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ctrl__DOT___19_;
        CData/*5:0*/ tb_NSC8__DOT__uut__DOT__ctrl__DOT__timing;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__ir__DOT__buffer_input;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__ir__DOT__bus_buffer__DOT__out_data__out__strong__out0;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__ir__DOT__bus_buffer__DOT__out_data__out__strong__out1;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__pc__DOT___00_;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__pc__DOT__counter_contents;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__pc__DOT__out_data__en0;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__pc__DOT__tristate_buffer__DOT__out_data__out__strong__out0;
        CData/*3:0*/ tb_NSC8__DOT__uut__DOT__pc__DOT__tristate_buffer__DOT__out_data__out__strong__out1;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT___001_;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT___003_;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT___004_;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT___006_;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT___008_;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT___010_;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT___012_;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT___017_;
        CData/*0:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT___022_;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT___031_;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b0__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b10__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b11__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b12__05d;
    };
    struct {
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b13__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b14__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b15__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b1__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b2__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b3__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b4__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b5__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b6__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b7__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b8__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_array__05b9__05d;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out0;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out1;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out2;
        CData/*7:0*/ tb_NSC8__DOT__uut__DOT__ram0__DOT__ram_buffer__DOT__out_data__out__strong__out3;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_NSC8__DOT__uut__DOT__clk_decode_w__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsynth_output__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsynth_output___024root(Vsynth_output__Syms* symsp, const char* v__name);
    ~Vsynth_output___024root();
    VL_UNCOPYABLE(Vsynth_output___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
