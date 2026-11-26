#include "Core/Utils/DecompTypes.h"
#include "gaia_MemoryScope_Free.h"

// ----------------------------------------------------------------------------
// Function: gaia::MemoryScope_Free::Destroy  (binary VA: 0x14ea310)
// Original: gaia::MemoryScope_Free::~MemoryScope_Free
// ----------------------------------------------------------------------------
void gaia::MemoryScope_Free::Destroy(void ***self)
{
  *self = (void **)((uint32_t)(uintptr_t)&off_2095FB8);
  free(**(self + 1));
  **(self + 1) = nullptr;
  *self = (void **)&off_2049608;
}

// ----------------------------------------------------------------------------
// Function: gaia::MemoryScope_Free::Destroy_ea14ea5b0  (binary VA: 0x14ea5b0)
// Original: gaia::MemoryScope_Free::~MemoryScope_Free
// ----------------------------------------------------------------------------
void gaia::MemoryScope_Free::Destroy_ea14ea5b0(void ***self)
{
  *self = (void **)((uint32_t)(uintptr_t)&off_2095FB8);
  free(**(self + 1));
  **(self + 1) = nullptr;
  *self = (void **)&off_2049608;
  opDelete(self);
}


