#include "glwebtools_Task.h"

// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_Task.cpp
// Library: glwebtools | Module: glwebtools_Task
// Binary Address Span: 0x13e8f00 .. 0x13e8f00 (1 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13e8f00 (size: 62 bytes)
// Symbol:    _ZN10glwebtools4TaskC2Ev
// Demangled: glwebtools::Task::Task(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools4TaskC1Ev'
glwebtools::Task::Self *glwebtools::Task::Construct(glwebtools::Task::Self *self)
{
  struct glwebtools::Task::Self *result;

  result = (glwebtools::Task::Self *)glwebtools::Job::Job((glwebtools::Job::Self *)self);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  return result;
}

