#include "Core/Utils/DecompTypes.h"
#include "glwebtools_SHA256_CTX.h"

// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_SHA256_CTX.cpp
// Library: glwebtools | Module: glwebtools_SHA256_CTX
// Binary Address Span: 0x13e8d00 .. 0x13e8d50 (2 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13e8d00 (size: 70 bytes)
// Symbol:    _ZN10glwebtools10SHA256_CTXC1Ev
// Demangled: glwebtools::SHA256_CTX::SHA256_CTX(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools10SHA256_CTXC2Ev'
struct glwebtools::SHA256_CTX::Self *glwebtools::SHA256_CTX::SHA256_CTX(glwebtools::SHA256_CTX::Self *self)
{
  struct glwebtools::SHA256_CTX::Self *result;

  result = (struct glwebtools::SHA256_CTX::Self *)sub_4EBE70(0x68u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  return result;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::SHA256_CTX::Destroy  (binary VA: 0x13e8d50)
// Original: glwebtools::SHA256_CTX::~SHA256_CTX
// ----------------------------------------------------------------------------
void glwebtools::SHA256_CTX::Destroy(glwebtools::SHA256_CTX::Self *self)
{
  if ( *(uint32_t *)self != 0 )
  {
    sub_4EBEE0(*(uint32_t *)self);
    *(uint32_t *)self = 0;
  }
}


