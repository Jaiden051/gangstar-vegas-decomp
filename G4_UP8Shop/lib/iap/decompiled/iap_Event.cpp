#include "Core/Utils/DecompTypes.h"
#include "iap_Event.h"

// ============================================================================
// G4_UP8Shop/lib/iap/decompiled/iap_Event.cpp
// Library: iap | Module: iap_Event
// Binary Address Span: 0x1514c90 .. 0x1514dd0 (10 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1514c90 (size: 15 bytes)
// Symbol:    _ZN3iap5EventC1Ev
// Demangled: iap::Event::Event(void)
// ============================================================================
// Alternative name is '_ZN3iap5EventC2Ev'
struct iap::Event::Self *iap::Event::Construct(iap::Event::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: iap::Event::Construct  (binary VA: 0x1514ca0)
// Original: iap::Event::Event
// ----------------------------------------------------------------------------
iap::Event::Self * iap::Event::Construct(iap::Event::Self *self, iap::EventData::Self *a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::Event::Construct  (binary VA: 0x1514cb0)
// Original: iap::Event::Event
// ----------------------------------------------------------------------------
iap::Event::Self * iap::Event::Construct(iap::Event::Self *self, const iap::Event::Self *a2)
{
  iap::Event::Self *result;

  *(uint32_t *)self = 0;
  result = *(iap::Event::Self **)a2;
  if ( *(uint32_t *)a2 != 0 )
  {
    result = (iap::Event::Self *)G4_VCALL<int>(result, 8);
    *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Event::GetData  (binary VA: 0x1514ce0)
// Original: iap::Event::GetData
// ----------------------------------------------------------------------------
int iap::Event::GetData(iap::Event::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: iap::Event::GetType  (binary VA: 0x1514cf0)
// Original: iap::Event::GetType
// ----------------------------------------------------------------------------
int iap::Event::GetType(iap::Event::Self *self)
{
  int result;

  result = 0;
  if ( *(uint32_t *)self != 0 )
    return (*(int (**)(uint32_t))(**(uint32_t **)self + 12))(*(uint32_t *)self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Event::Swap  (binary VA: 0x1514d10)
// Original: iap::Event::Swap
// ----------------------------------------------------------------------------
iap::Event::Self * iap::Event::Swap(iap::Event::Self *self, iap::Event::Self *a2)
{
  int v3;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  *(uint32_t *)a2 = v3;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: iap::Event::IsValid  (binary VA: 0x1514d30)
// Original: iap::Event::IsValid
// ----------------------------------------------------------------------------
bool iap::Event::IsValid(iap::Event::Self *self)
{
  return *(uint32_t *)self != 0;
}

// ----------------------------------------------------------------------------
// Function: iap::Event::Reset  (binary VA: 0x1514d40)
// Original: iap::Event::Reset
// ----------------------------------------------------------------------------
iap::EventData::Self * iap::Event::Reset(iap::EventData::Self **self)
{
  iap::EventData::Self *result;

  result = *self;
  if ( *self != nullptr )
  {
    result = (iap::EventData::Self *)iap::EventData::Destruct(*self);
    *self = nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::Event::opAssign  (binary VA: 0x1514d80)
// Original: iap::Event::operator=
// ----------------------------------------------------------------------------
iap::EventData::Self ** iap::Event::opAssign(iap::EventData::Self **self, const iap::Event::Self *a2)
{
  iap::Event::Reset(self);
  if ( *(uint32_t *)a2 != 0 )
    *self = (iap::EventData::Self *)(*(int (**)(uint32_t))(**(uint32_t **)a2 + 8))(*(uint32_t *)a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::Event::Destroy  (binary VA: 0x1514dd0)
// Original: iap::Event::~Event
// ----------------------------------------------------------------------------
void iap::Event::Destroy(iap::EventData::Self **self)
{
  iap::Event::Reset(self);
}


