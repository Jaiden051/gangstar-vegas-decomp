#include "Core/Utils/DecompTypes.h"
#include "glf_IPhoneController.h"

// ----------------------------------------------------------------------------
// Function: glf::IPhoneController::GetRtti  (binary VA: 0xcb5c50)
// Original: glf::IPhoneController::GetRtti
// ----------------------------------------------------------------------------
uint32_t * glf::IPhoneController::GetRtti()
{
  return (uint32_t *)(uintptr_t)(glf::IPhoneController::sRtti);
}

// ----------------------------------------------------------------------------
// Function: glf::IPhoneController::Destroy  (binary VA: 0xcb5db0)
// Original: glf::IPhoneController::~IPhoneController
// ----------------------------------------------------------------------------
void glf::IPhoneController::Destroy(glf::IPhoneController::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E008);
  glf::InputDevice::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glf::IPhoneController::Destroy_eacb5de0  (binary VA: 0xcb5de0)
// Original: glf::IPhoneController::~IPhoneController
// ----------------------------------------------------------------------------
void glf::IPhoneController::Destroy_eacb5de0(glf::IPhoneController::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E008);
  glf::InputDevice::Destroy(self);
  opDelete(self);
}


