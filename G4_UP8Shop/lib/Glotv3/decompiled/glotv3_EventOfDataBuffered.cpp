#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfDataBuffered.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfDataBuffered::Destroy  (binary VA: 0x1346f10)
// Original: glotv3::EventOfDataBuffered::~EventOfDataBuffered
// ----------------------------------------------------------------------------
void glotv3::EventOfDataBuffered::Destroy(glotv3::EventOfDataBuffered::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093AC0);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfDataBuffered::Destroy_ea1347670  (binary VA: 0x1347670)
// Original: glotv3::EventOfDataBuffered::~EventOfDataBuffered
// ----------------------------------------------------------------------------
void glotv3::EventOfDataBuffered::Destroy_ea1347670(glotv3::EventOfDataBuffered::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093AC0);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfDataBuffered::Construct  (binary VA: 0x1348de0)
// Original: glotv3::EventOfDataBuffered::EventOfDataBuffered
// ----------------------------------------------------------------------------
void glotv3::EventOfDataBuffered::Construct(glotv3::EventOfDataBuffered::Self *self)
{
  glotv3::Event::Construct(self, false);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093AC0);
  glotv3::Event::setIsAutomatic(self, true);
  glotv3::Event::setEventType(self, &loc_6);
}


