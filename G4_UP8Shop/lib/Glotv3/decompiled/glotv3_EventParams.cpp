#include "glotv3_EventParams.h"

// ============================================================================
// G4_UP8Shop/lib/Glotv3/decompiled/glotv3_EventParams.cpp
// Library: Glotv3 | Module: glotv3_EventParams
// Binary Address Span: 0x1342dd0 .. 0x1342dd0 (1 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1342dd0 (size: 205 bytes)
// Symbol:    _ZN6glotv311EventParamsC1Ei
// Demangled: glotv3::EventParams::Construct(int)
// ============================================================================
// Alternative name is '_ZN6glotv311EventParamsC2Ei'
glotv3::EventParams *glotv3::EventParams::Construct(glotv3::EventParams *self, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 1) = 8;
  v2 = opNew(0x20u);
  v3 = *((uint32_t *)self + 1);
  *(uint32_t *)self = v2;
  v4 = (int *)(v2 + ((2 * v3 - 2) & 0xFFFFFFFC));
  *v4 = opNew(0x1E0u);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v4);
  v5 = *v4;
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v4);
  *((uint32_t *)self + 3) = v5;
  *((uint32_t *)self + 4) = v5 + 480;
  v6 = *v4;
  *((uint32_t *)self + 2) = v5;
  *((uint32_t *)self + 7) = v6;
  *((uint32_t *)self + 6) = v6;
  v7 = v6 + 480;
  *((uint32_t *)self + 8) = v7;
  *((uint32_t *)self + 10) = a2;
  return (struct glotv3::EventParams *)a2;
}

