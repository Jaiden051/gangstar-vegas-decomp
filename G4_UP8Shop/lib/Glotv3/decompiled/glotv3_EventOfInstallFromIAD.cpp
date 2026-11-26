#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfInstallFromIAD.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfInstallFromIAD::Destroy  (binary VA: 0x1347060)
// Original: glotv3::EventOfInstallFromIAD::~EventOfInstallFromIAD
// ----------------------------------------------------------------------------
void glotv3::EventOfInstallFromIAD::Destroy(glotv3::EventOfInstallFromIAD::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093AA0);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfInstallFromIAD::Destroy_ea1347440  (binary VA: 0x1347440)
// Original: glotv3::EventOfInstallFromIAD::~EventOfInstallFromIAD
// ----------------------------------------------------------------------------
void glotv3::EventOfInstallFromIAD::Destroy_ea1347440(glotv3::EventOfInstallFromIAD::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093AA0);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfInstallFromIAD::Construct  (binary VA: 0x1348d70)
// Original: glotv3::EventOfInstallFromIAD::EventOfInstallFromIAD
// ----------------------------------------------------------------------------
void glotv3::EventOfInstallFromIAD::Construct(glotv3::EventOfInstallFromIAD::Self *self)
{
  glotv3::Event::Construct(self, false);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093AA0);
  glotv3::Event::setIsAutomatic(self, true);
  glotv3::Event::setEventType(self, &reinterpret_cast<G4Elf32Sym *>(stru_296B4)->st_value);
}


