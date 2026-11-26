#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfEraseEverything.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfEraseEverything::Destroy  (binary VA: 0x13470c0)
// Original: glotv3::EventOfEraseEverything::~EventOfEraseEverything
// ----------------------------------------------------------------------------
void glotv3::EventOfEraseEverything::Destroy(glotv3::EventOfEraseEverything::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093B00);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfEraseEverything::Destroy_ea13473a0  (binary VA: 0x13473a0)
// Original: glotv3::EventOfEraseEverything::~EventOfEraseEverything
// ----------------------------------------------------------------------------
void glotv3::EventOfEraseEverything::Destroy_ea13473a0(glotv3::EventOfEraseEverything::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093B00);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfEraseEverything::Construct  (binary VA: 0x1348ec0)
// Original: glotv3::EventOfEraseEverything::EventOfEraseEverything
// ----------------------------------------------------------------------------
void glotv3::EventOfEraseEverything::Construct(glotv3::EventOfEraseEverything::Self *self)
{
  glotv3::Event::Construct(self, false);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093B00);
  glotv3::Event::setIsAutomatic(self, true);
  glotv3::Event::setEventType(self, (char *)&dword_0 + 1);
}


