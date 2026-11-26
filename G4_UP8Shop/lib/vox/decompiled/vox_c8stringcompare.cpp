#include "vox_c8stringcompare.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_c8stringcompare.cpp
// Library: vox | Module: vox_c8stringcompare
// Binary Address Span: 0xfcf970 .. 0xfcf970 (1 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xfcf970 (size: 45 bytes)
// Symbol:    _ZNK3vox15c8stringcompareclEPKcS2_
// Demangled: vox::c8stringcompare::operator()(char const*,char const*)const
// ============================================================================
unsigned int vox::c8stringcompare::opCall(int a1, char *s1, char *s2)
{
  return (unsigned int)strcasecmp(s1, s2) >> 31;
}

