#include "Core/Utils/DecompTypes.h"
#include "glitch_irradiance.h"

// ----------------------------------------------------------------------------
// Function: glitch::irradiance::IIrradianceManager::Destroy  (binary VA: 0xd8a590)
// Original: glitch::irradiance::IIrradianceManager::~IIrradianceManager
// ----------------------------------------------------------------------------
void glitch::irradiance::IIrradianceManager::Destroy(glitch::irradiance::IIrradianceManager::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::irradiance::IIrradianceManager::Destroy_ead8abb0  (binary VA: 0xd8abb0)
// Original: glitch::irradiance::IIrradianceManager::~IIrradianceManager
// ----------------------------------------------------------------------------
void glitch::irradiance::IIrradianceManager::Destroy_ead8abb0(glitch::irradiance::IIrradianceManager::Self *self)
{
  glitch::irradiance::IIrradianceManager::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::irradiance::IIrradianceManager::Construct  (binary VA: 0xda7ee0)
// Original: glitch::irradiance::IIrradianceManager::IIrradianceManager
// ----------------------------------------------------------------------------
glitch::irradiance::IIrradianceManager::Self * glitch::irradiance::IIrradianceManager::Construct(glitch::irradiance::IIrradianceManager::Self *self, glitch::IDevice::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207B8A0);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 1343554297;
  *((uint8_t *)self + 20) = 0;
  return self;
}


