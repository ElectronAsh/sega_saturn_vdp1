// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSEGA_SATURN_VDP1__SYMS_H_
#define _VSEGA_SATURN_VDP1__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vsega_saturn_vdp1.h"

// SYMS CLASS
class Vsega_saturn_vdp1__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vsega_saturn_vdp1*             TOPp;
    
    // CREATORS
    Vsega_saturn_vdp1__Syms(Vsega_saturn_vdp1* topp, const char* namep);
    ~Vsega_saturn_vdp1__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
