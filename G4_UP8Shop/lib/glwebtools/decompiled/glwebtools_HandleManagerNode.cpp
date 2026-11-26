#include "glwebtools_HandleManagerNode.h"

// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_HandleManagerNode.cpp
// Library: glwebtools | Module: glwebtools_HandleManagerNode
// Binary Address Span: 0x13dd850 .. 0x13dd850 (1 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13dd850 (size: 22 bytes)
// Symbol:    _ZN10glwebtools17HandleManagerNodeC2Ev
// Demangled: glwebtools::HandleManagerNode::HandleManagerNode(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools17HandleManagerNodeC1Ev'
glwebtools::HandleManagerNode::Self *glwebtools::HandleManagerNode::Construct(
        glwebtools::HandleManagerNode::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint8_t *)self + 4) = 1;
  *((uint32_t *)self + 2) = -1;
  return self;
}

