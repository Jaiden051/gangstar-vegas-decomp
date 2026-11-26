#include "Core/Utils/DecompTypes.h"
#include "gaia_CrmPointcut.h"

// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_CrmPointcut.cpp
// Library: gaia | Module: gaia_CrmPointcut
// Binary Address Span: 0x14cd8c0 .. 0x14cd930 (3 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x14cd8c0 (size: 27 bytes)
// Symbol:    _ZN4gaia11CrmPointcutC2Ev
// Demangled: gaia::CrmPointcut::CrmPointcut(void)
// ============================================================================
// Alternative name is '_ZN4gaia11CrmPointcutC1Ev'
struct gaia::CrmPointcut::Self *gaia::CrmPointcut::CrmPointcut(gaia::CrmPointcut::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  return self;
}
// ----------------------------------------------------------------------------
// Function: gaia::CrmPointcut::Destroy  (binary VA: 0x14cd8e0)
// Original: gaia::CrmPointcut::~CrmPointcut
// ----------------------------------------------------------------------------
void gaia::CrmPointcut::Destroy(gaia::CrmPointcut::Self *self)
{
  uint32_t *v1;

  v1 = (uint32_t *)(*(uint32_t *)self - 12);
  if ( v1 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: gaia::CrmPointcut::Initialize  (binary VA: 0x14cd930)
// Original: gaia::CrmPointcut::Initialize
// ----------------------------------------------------------------------------
int gaia::CrmPointcut::Initialize(gaia::CrmPointcut::Self *self, const Json::Value::Self *a2)
{
  int v2;
  Json::Value::Self *v3;
  uint8_t v5[4];

  v2 = -34;
  v3 = (Json::Value::Self *)Json::Value::opIndex(a2, &gaia::k_szName);
  if ( !Json::Value::isNull(v3) && Json::Value::type(v3) == 4 )
  {
    Json::Value::asString((Json::Value::Self *)v5, (int)(uintptr_t)(v3));
    g4_std::string::assign_str(self, v5);
    v2 = 0;
    g4_std::string::Destroy(v5);
  }
  return v2;
}


