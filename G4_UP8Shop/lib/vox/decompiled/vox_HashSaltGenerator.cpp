#include "Core/Utils/DecompTypes.h"
#include "vox_HashSaltGenerator.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_HashSaltGenerator.cpp
// Library: vox | Module: vox_HashSaltGenerator
// Binary Address Span: 0x1018a60 .. 0x1018a70 (2 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1018a60 (size: 12 bytes)
// Symbol:    _ZN3vox17HashSaltGeneratorC2Ev
// Demangled: vox::HashSaltGenerator::HashSaltGenerator(void)
// ============================================================================
// Alternative name is '_ZN3vox17HashSaltGeneratorC1Ev'
struct vox::HashSaltGenerator::Self *vox::HashSaltGenerator::HashSaltGenerator(vox::HashSaltGenerator::Self *self)
{
  *(uint8_t *)self = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::HashSaltGenerator::GetNextValue  (binary VA: 0x1018a70)
// Original: vox::HashSaltGenerator::GetNextValue
// ----------------------------------------------------------------------------
bool vox::HashSaltGenerator::GetNextValue(vox::HashSaltGenerator::Self *self, char *a2)
{
  char v2;

  v2 = *(uint8_t *)self + 1;
  *(uint8_t *)self = v2;
  *a2 = v2;
  return v2 != 0;
}


