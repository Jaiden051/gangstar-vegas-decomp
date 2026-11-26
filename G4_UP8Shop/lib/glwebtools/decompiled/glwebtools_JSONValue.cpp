#include "Core/Utils/DecompTypes.h"
#include "glwebtools_JSONValue.h"

// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_JSONValue.cpp
// Library: glwebtools | Module: glwebtools_JSONValue
// Binary Address Span: 0x13ddfe0 .. 0x13df190 (4 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13ddfe0 (size: 27 bytes)
// Symbol:    _ZN10glwebtools9JSONValueC2Ev
// Demangled: glwebtools::JSONValue::JSONValue(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools9JSONValueC1Ev'
struct glwebtools::JSONValue::Self *glwebtools::JSONValue::Construct(glwebtools::JSONValue::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::JSONValue::Construct  (binary VA: 0x13de000)
// Original: glwebtools::JSONValue::JSONValue
// ----------------------------------------------------------------------------
int glwebtools::JSONValue::Construct(uint32_t *a1, int a2)
{
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  return (int)(uintptr_t)(g4_std::string::assign_str(a1, a2));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONValue::op_std::string_const  (binary VA: 0x13de040)
// Original: `glwebtools::JSONValue::operator std::string const&`
// ----------------------------------------------------------------------------
void * glwebtools::JSONValue::op_std::string_const(void *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONValue::Destroy  (binary VA: 0x13df190)
// Original: glwebtools::JSONValue::~JSONValue
// ----------------------------------------------------------------------------
void glwebtools::JSONValue::Destroy(glwebtools::JSONValue::Self *self)
{
  uint32_t *v1;

  v1 = (uint32_t *)(*(uint32_t *)self - 12);
  if ( v1 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
}


