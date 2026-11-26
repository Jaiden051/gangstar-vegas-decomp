#include "Core/Utils/DecompTypes.h"
#include "glwebtools_CustomAttribute.h"

// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_CustomAttribute.cpp
// Library: glwebtools | Module: glwebtools_CustomAttribute
// Binary Address Span: 0x13d8f20 .. 0x13d9000 (6 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13d8f20 (size: 48 bytes)
// Symbol:    _ZN10glwebtools15CustomAttributeC2Ev
// Demangled: glwebtools::CustomAttribute::CustomAttribute(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools15CustomAttributeC1Ev'
struct glwebtools::CustomAttribute::Self *glwebtools::CustomAttribute::CustomAttribute(
        glwebtools::CustomAttribute::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  return (struct glwebtools::CustomAttribute::Self *)(glwebtools::CustomArgument::Construct((glwebtools::CustomAttribute::Self *)((char *)self + 4)));
}
// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttribute::key  (binary VA: 0x13d8f50)
// Original: glwebtools::CustomAttribute::key
// ----------------------------------------------------------------------------
glwebtools::CustomAttribute::Self * glwebtools::CustomAttribute::key(glwebtools::CustomAttribute::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttribute::value  (binary VA: 0x13d8f60)
// Original: glwebtools::CustomAttribute::value
// ----------------------------------------------------------------------------
char * glwebtools::CustomAttribute::value(glwebtools::CustomAttribute::Self *self)
{
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttribute::value_ea13d8f70  (binary VA: 0x13d8f70)
// Original: glwebtools::CustomAttribute::value
// ----------------------------------------------------------------------------
char * glwebtools::CustomAttribute::value_ea13d8f70(glwebtools::CustomAttribute::Self *self)
{
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttribute::opEq  (binary VA: 0x13d8f80)
// Original: glwebtools::CustomAttribute::operator==
// ----------------------------------------------------------------------------
int glwebtools::CustomAttribute::opEq(const void **self, const void **a2)
{
  int v2;
  int v4;

  v2 = 0;
  if ( *((uint32_t *)*self - 3) == *((uint32_t *)*a2 - 3) && memcmp(*self, *a2, *((uint32_t *)*self - 3)) == 0 )
  {
    LOBYTE(v4) = glwebtools::CustomArgument::opEq(self + 1, a2 + 1);
    return v4;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttribute::key  (binary VA: 0x13d9000)
// Original: glwebtools::CustomAttribute::key
// ----------------------------------------------------------------------------
int glwebtools::CustomAttribute::key(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1, a2));
}


