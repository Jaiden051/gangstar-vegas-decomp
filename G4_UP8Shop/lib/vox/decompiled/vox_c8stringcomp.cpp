#include "vox_c8stringcomp.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_c8stringcomp.cpp
// Library: vox | Module: vox_c8stringcomp
// Binary Address Span: 0x1018be0 .. 0x1018be0 (1 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1018be0 (size: 45 bytes)
// Symbol:    _ZNK3vox12c8stringcompclEPKcS2_
// Demangled: vox::c8stringcomp::operator()(char const*,char const*)const
// ============================================================================
unsigned int vox::c8stringcomp::opCall(int a1, char *s1, char *s2)
{
  return (unsigned int)strcasecmp(s1, s2) >> 31;
}

