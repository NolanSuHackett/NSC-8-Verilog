// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsynth_output__pch.h"
#include "verilated_saif_c.h"

//============================================================
// Constructors

Vsynth_output::Vsynth_output(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsynth_output__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsynth_output::Vsynth_output(const char* _vcname__)
    : Vsynth_output(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsynth_output::~Vsynth_output() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsynth_output___024root___eval_debug_assertions(Vsynth_output___024root* vlSelf);
#endif  // VL_DEBUG
void Vsynth_output___024root___eval_static(Vsynth_output___024root* vlSelf);
void Vsynth_output___024root___eval_initial(Vsynth_output___024root* vlSelf);
void Vsynth_output___024root___eval_settle(Vsynth_output___024root* vlSelf);
void Vsynth_output___024root___eval(Vsynth_output___024root* vlSelf);

void Vsynth_output::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsynth_output::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsynth_output___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsynth_output___024root___eval_static(&(vlSymsp->TOP));
        Vsynth_output___024root___eval_initial(&(vlSymsp->TOP));
        Vsynth_output___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsynth_output___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vsynth_output::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vsynth_output::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vsynth_output::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsynth_output::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsynth_output::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsynth_output___024root___eval_final(Vsynth_output___024root* vlSelf);

VL_ATTR_COLD void Vsynth_output::final() {
    Vsynth_output___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsynth_output::hierName() const { return vlSymsp->name(); }
const char* Vsynth_output::modelName() const { return "Vsynth_output"; }
unsigned Vsynth_output::threads() const { return 1; }
void Vsynth_output::prepareClone() const { contextp()->prepareClone(); }
void Vsynth_output::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsynth_output::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsynth_output___024root__trace_decl_types(VerilatedSaif* tracep);

void Vsynth_output___024root__trace_init_top(Vsynth_output___024root* vlSelf, VerilatedSaif* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedSaif* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsynth_output___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsynth_output___024root*>(voidSelf);
    Vsynth_output__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsynth_output___024root__trace_decl_types(tracep);
    Vsynth_output___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsynth_output___024root__trace_register(Vsynth_output___024root* vlSelf, VerilatedSaif* tracep);

VL_ATTR_COLD void Vsynth_output::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedSaifC* const stfp = dynamic_cast<VerilatedSaifC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsynth_output::trace()' called on non-VerilatedSaifC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsynth_output___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
