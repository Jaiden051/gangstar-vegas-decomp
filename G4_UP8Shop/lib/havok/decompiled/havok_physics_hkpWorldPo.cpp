#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldPo.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldPostSimulationListener::Destroy  (binary VA: 0x172bae0)
// Original: hkpWorldPostSimulationListener::~hkpWorldPostSimulationListener
// ----------------------------------------------------------------------------
void hkpWorldPostSimulationListener::Destroy(hkpWorldPostSimulationListener::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209E868);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldPostSimulationListener::Destroy_ea172bb70  (binary VA: 0x172bb70)
// Original: hkpWorldPostSimulationListener::~hkpWorldPostSimulationListener
// ----------------------------------------------------------------------------
void hkpWorldPostSimulationListener::Destroy_ea172bb70(hkpWorldPostSimulationListener::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209E868);
  opDelete(self);
}


