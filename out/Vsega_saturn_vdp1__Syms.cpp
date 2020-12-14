// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsega_saturn_vdp1__Syms.h"
#include "Vsega_saturn_vdp1.h"



// FUNCTIONS
Vsega_saturn_vdp1__Syms::Vsega_saturn_vdp1__Syms(Vsega_saturn_vdp1* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
