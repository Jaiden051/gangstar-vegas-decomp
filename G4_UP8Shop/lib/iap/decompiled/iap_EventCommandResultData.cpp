#include "Core/Utils/DecompTypes.h"
#include "iap_EventCommandResultData.h"

// ----------------------------------------------------------------------------
// Function: iap::EventCommandResultData::GetType  (binary VA: 0x15144d0)
// Original: iap::EventCommandResultData::GetType
// ----------------------------------------------------------------------------
const char * iap::EventCommandResultData::GetType()
{
  return "command_result";
}

// ----------------------------------------------------------------------------
// Function: iap::EventCommandResultData::Destroy  (binary VA: 0x1514780)
// Original: iap::EventCommandResultData::~EventCommandResultData
// ----------------------------------------------------------------------------
void iap::EventCommandResultData::Destroy(iap::EventCommandResultData::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096210);
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
  v4 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096260);
}

// ----------------------------------------------------------------------------
// Function: iap::EventCommandResultData::Destroy_ea1514880  (binary VA: 0x1514880)
// Original: iap::EventCommandResultData::~EventCommandResultData
// ----------------------------------------------------------------------------
void iap::EventCommandResultData::Destroy_ea1514880(iap::EventCommandResultData::Self *self)
{
  iap::EventCommandResultData::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::EventCommandResultData::Construct  (binary VA: 0x1514900)
// Original: iap::EventCommandResultData::EventCommandResultData
// ----------------------------------------------------------------------------
iap::EventCommandResultData::Self * iap::EventCommandResultData::Construct(iap::EventCommandResultData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096210);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::EventCommandResultData::Clone  (binary VA: 0x1514c00)
// Original: iap::EventCommandResultData::Clone
// ----------------------------------------------------------------------------
iap::EventRequestResultData::Self * iap::EventCommandResultData::Clone(iap::EventCommandResultData::Self *self)
{
  iap::EventRequestResultData::Self *v1;

  v1 = iap::EventData::Construct((iap::EventData::Self *)"command_result");
  *((uint32_t *)v1 + 1) = *((uint32_t *)self + 1);
  g4_std::string::assign_str((char *)v1 + 8, (char *)self + 8);
  g4_std::string::assign_str((char *)v1 + 12, (char *)self + 12);
  g4_std::string::assign_str((char *)v1 + 16, (char *)self + 16);
  g4_std::string::assign_str((char *)v1 + 20, (char *)self + 20);
  return v1;
}


