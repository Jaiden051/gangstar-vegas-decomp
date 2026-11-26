#include "Core/Utils/DecompTypes.h"
#include "gaia_TryLockScope.h"

// ----------------------------------------------------------------------------
// Function: gaia::TryLockScope::Destroy  (binary VA: 0x14ea2b0)
// Original: gaia::TryLockScope::~TryLockScope
// ----------------------------------------------------------------------------
void gaia::TryLockScope::Destroy(gaia::TryLockScope::Self *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 4) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095F28);
  if ( !v1 )
    glwebtools::Mutex::Unlock(*((glwebtools::Mutex::Self **)self + 2));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2049608);
}

// ----------------------------------------------------------------------------
// Function: gaia::TryLockScope::Destroy_ea14ea550  (binary VA: 0x14ea550)
// Original: gaia::TryLockScope::~TryLockScope
// ----------------------------------------------------------------------------
void gaia::TryLockScope::Destroy_ea14ea550(gaia::TryLockScope::Self *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 4) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095F28);
  if ( !v1 )
    glwebtools::Mutex::Unlock(*((glwebtools::Mutex::Self **)self + 2));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2049608);
  opDelete(self);
}


