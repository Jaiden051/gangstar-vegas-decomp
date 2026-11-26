#include "Core/Utils/DecompTypes.h"
#include "glwebtools_Job.h"

// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_Job.cpp
// Library: glwebtools | Module: glwebtools_Job
// Binary Address Span: 0x13e9c70 .. 0x13e9cc0 (4 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13e9c70 (size: 25 bytes)
// Symbol:    _ZN10glwebtools3JobC1Ev
// Demangled: glwebtools::Job::Job(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools3JobC2Ev'
struct glwebtools::Job::Self *glwebtools::Job::Job(glwebtools::Job::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::Job::Reset  (binary VA: 0x13e9c90)
// Original: glwebtools::Job::Reset
// ----------------------------------------------------------------------------
glwebtools::Job::Self * glwebtools::Job::Reset(glwebtools::Job::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Job::IsSet  (binary VA: 0x13e9cb0)
// Original: glwebtools::Job::IsSet
// ----------------------------------------------------------------------------
bool glwebtools::Job::IsSet(glwebtools::Job::Self *self)
{
  return *(uint32_t *)self != 0;
}



// ============================================================================
// Address:   0x13e9cc0 (size: 28 bytes)
// Symbol:    _ZN10glwebtools3JobclEv
// Demangled: glwebtools::Job::operator()(void)
// ============================================================================
int glwebtools::Job::opCall(int a1)
{
  return (*(int (**)(uint32_t, uint32_t))a1)(*(uint32_t *)(a1 + 4), *(uint32_t *)(a1 + 8));
}

