#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldDe.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldDeletionListener::Destroy  (binary VA: 0x172bac0)
// Original: hkpWorldDeletionListener::~hkpWorldDeletionListener
// ----------------------------------------------------------------------------
void hkpWorldDeletionListener::Destroy(hkpWorldDeletionListener::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209E850);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldDeletionListener::Destroy_ea172bb40  (binary VA: 0x172bb40)
// Original: hkpWorldDeletionListener::~hkpWorldDeletionListener
// ----------------------------------------------------------------------------
void hkpWorldDeletionListener::Destroy_ea172bb40(hkpWorldDeletionListener::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209E850);
  opDelete(self);
}


