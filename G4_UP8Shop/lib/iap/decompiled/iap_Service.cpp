#include "Core/Utils/DecompTypes.h"
#include "iap_Service.h"

// ----------------------------------------------------------------------------
// Function: iap::Service::Destroy  (binary VA: 0x151e0e0)
// Original: iap::Service::~Service
// ----------------------------------------------------------------------------
void iap::Service::Destroy(iap::Service::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096608);
  v1 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: iap::Service::Destroy_ea151e140  (binary VA: 0x151e140)
// Original: iap::Service::~Service
// ----------------------------------------------------------------------------
void iap::Service::Destroy_ea151e140(iap::Service::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096608);
  v1 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  opDelete(self);
}


