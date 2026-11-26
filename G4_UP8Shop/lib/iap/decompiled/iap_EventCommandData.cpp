#include "Core/Utils/DecompTypes.h"
#include "iap_EventCommandData.h"

// ----------------------------------------------------------------------------
// Function: iap::EventCommandData::GetType  (binary VA: 0x1514510)
// Original: iap::EventCommandData::GetType
// ----------------------------------------------------------------------------
const char * iap::EventCommandData::GetType()
{
  return "command";
}

// ----------------------------------------------------------------------------
// Function: iap::EventCommandData::Destroy  (binary VA: 0x1514530)
// Original: iap::EventCommandData::~EventCommandData
// ----------------------------------------------------------------------------
void iap::EventCommandData::Destroy(iap::EventCommandData::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096240);
  v1 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096260);
}

// ----------------------------------------------------------------------------
// Function: iap::EventCommandData::Destroy_ea1514630  (binary VA: 0x1514630)
// Original: iap::EventCommandData::~EventCommandData
// ----------------------------------------------------------------------------
void iap::EventCommandData::Destroy_ea1514630(iap::EventCommandData::Self *self)
{
  iap::EventCommandData::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::EventCommandData::Construct  (binary VA: 0x1514980)
// Original: iap::EventCommandData::EventCommandData
// ----------------------------------------------------------------------------
iap::EventCommandData::Self * iap::EventCommandData::Construct(iap::EventCommandData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096240);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::EventCommandData::Clone  (binary VA: 0x1514ae0)
// Original: iap::EventCommandData::Clone
// ----------------------------------------------------------------------------
iap::EventRequestResultData::Self * iap::EventCommandData::Clone(iap::EventCommandData::Self *self)
{
  iap::EventRequestResultData::Self *v1;

  v1 = iap::EventData::Construct((iap::EventData::Self *)"command");
  g4_std::string::assign_str((char *)v1 + 4, (char *)self + 4);
  g4_std::string::assign_str((char *)v1 + 8, (char *)self + 8);
  g4_std::string::assign_str((char *)v1 + 12, (char *)self + 12);
  g4_std::string::assign_str((char *)v1 + 16, (char *)self + 16);
  return v1;
}


