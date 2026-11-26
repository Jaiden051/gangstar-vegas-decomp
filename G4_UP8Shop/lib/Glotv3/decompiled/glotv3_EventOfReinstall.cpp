#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfReinstall.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfReinstall::Destroy  (binary VA: 0x1347030)
// Original: glotv3::EventOfReinstall::~EventOfReinstall
// ----------------------------------------------------------------------------
void glotv3::EventOfReinstall::Destroy(glotv3::EventOfReinstall::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A80);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfReinstall::Destroy_ea1347490  (binary VA: 0x1347490)
// Original: glotv3::EventOfReinstall::~EventOfReinstall
// ----------------------------------------------------------------------------
void glotv3::EventOfReinstall::Destroy_ea1347490(glotv3::EventOfReinstall::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A80);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfReinstall::Construct  (binary VA: 0x1348d00)
// Original: glotv3::EventOfReinstall::EventOfReinstall
// ----------------------------------------------------------------------------
void glotv3::EventOfReinstall::Construct(glotv3::EventOfReinstall::Self *self)
{
  glotv3::Event::Construct(self, false);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A80);
  glotv3::Event::setIsAutomatic(self, true);
  glotv3::Event::setEventType(self, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_CAD4)->st_size + 1);
}


