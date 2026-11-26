#include "Core/Utils/DecompTypes.h"
#include "gaia_GaiaActionsManager.h"

// ----------------------------------------------------------------------------
// Function: gaia::GaiaActionsManager::Destroy  (binary VA: 0x14a57b0)
// Original: gaia::GaiaActionsManager::~GaiaActionsManager
// ----------------------------------------------------------------------------
void gaia::GaiaActionsManager::Destroy(gaia::GaiaActionsManager::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095B08);
  *((uint32_t *)self + 7) = ((uint32_t)(uintptr_t)&off_2095AE0);
  gaia::GaiaSimpleEventDispatcher_gaia_ActionData_4c88a2::Destroy((void ***)self);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaActionsManager::Destroy_ea14a5800  (binary VA: 0x14a5800)
// Original: gaia::GaiaActionsManager::~GaiaActionsManager
// ----------------------------------------------------------------------------
void gaia::GaiaActionsManager::Destroy_ea14a5800(gaia::GaiaActionsManager::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095B08);
  *((uint32_t *)self + 7) = ((uint32_t)(uintptr_t)&off_2095AE0);
  gaia::GaiaSimpleEventDispatcher_gaia_ActionData_4c88a2::Destroy((void ***)self);
  opDelete(self);
}


