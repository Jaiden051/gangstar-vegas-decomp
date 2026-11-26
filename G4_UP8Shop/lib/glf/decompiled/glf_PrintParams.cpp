#include "glf_PrintParams.h"

// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_PrintParams.cpp
// Library: glf | Module: glf_PrintParams
// Binary Address Span: 0xc90f20 .. 0xc90f20 (1 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xc90f20 (size: 55 bytes)
// Symbol:    _ZN3glf11PrintParamsC2Ev
// Demangled: glf::PrintParams::PrintParams(void)
// ============================================================================
// Alternative name is '_ZN3glf11PrintParamsC1Ev'
struct glf::PrintParams::Self *glf::PrintParams::Construct(glf::PrintParams::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&unk_1B15112);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&unk_1B15112);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  return self;
}

