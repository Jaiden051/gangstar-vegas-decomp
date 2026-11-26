#include "vox_stringcomp.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_stringcomp.cpp
// Library: vox | Module: vox_stringcomp
// Binary Address Span: 0x1018c10 .. 0x1018c10 (1 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1018c10 (size: 49 bytes)
// Symbol:    _ZNK3vox10stringcompclERKSsS2_
// Demangled: vox::stringcomp::operator()(std::string const&,std::string const&)const
// ============================================================================
unsigned int vox::stringcomp::opCall(int a1, const char **a2, const char **a3)
{
  return (unsigned int)strcasecmp(*a2, *a3) >> 31;
}

