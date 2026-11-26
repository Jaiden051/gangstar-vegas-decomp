#include "Core/Utils/DecompTypes.h"
#include "iap_EventRequestResultData.h"

// ----------------------------------------------------------------------------
// Function: iap::EventRequestResultData::GetType  (binary VA: 0x15144f0)
// Original: iap::EventRequestResultData::GetType
// ----------------------------------------------------------------------------
const char * iap::EventRequestResultData::GetType()
{
  return "result";
}

// ----------------------------------------------------------------------------
// Function: iap::EventRequestResultData::Destroy  (binary VA: 0x1514670)
// Original: iap::EventRequestResultData::~EventRequestResultData
// ----------------------------------------------------------------------------
void iap::EventRequestResultData::Destroy(iap::EventRequestResultData::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096228);
  v1 = *((uint32_t *)self + 5);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096260);
}

// ----------------------------------------------------------------------------
// Function: iap::EventRequestResultData::Destroy_ea1514740  (binary VA: 0x1514740)
// Original: iap::EventRequestResultData::~EventRequestResultData
// ----------------------------------------------------------------------------
void iap::EventRequestResultData::Destroy_ea1514740(iap::EventRequestResultData::Self *self)
{
  iap::EventRequestResultData::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::EventRequestResultData::Construct  (binary VA: 0x1514940)
// Original: iap::EventRequestResultData::EventRequestResultData
// ----------------------------------------------------------------------------
iap::EventRequestResultData::Self * iap::EventRequestResultData::Construct(iap::EventRequestResultData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096228);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::EventRequestResultData::Clone  (binary VA: 0x1514b70)
// Original: iap::EventRequestResultData::Clone
// ----------------------------------------------------------------------------
iap::EventRequestResultData::Self * iap::EventRequestResultData::Clone(iap::EventRequestResultData::Self *self)
{
  iap::EventRequestResultData::Self *v1;

  v1 = iap::EventData::Construct((iap::EventData::Self *)"result");
  *((uint32_t *)v1 + 1) = *((uint32_t *)self + 1);
  *((uint32_t *)v1 + 2) = *((uint32_t *)self + 2);
  g4_std::string::assign_str((char *)v1 + 12, (char *)self + 12);
  g4_std::string::assign_str((char *)v1 + 16, (char *)self + 16);
  g4_std::string::assign_str((char *)v1 + 20, (char *)self + 20);
  return v1;
}


