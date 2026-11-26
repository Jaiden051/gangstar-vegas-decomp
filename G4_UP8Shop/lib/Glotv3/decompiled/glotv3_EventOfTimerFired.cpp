#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfTimerFired.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfTimerFired::Destroy  (binary VA: 0x1347090)
// Original: glotv3::EventOfTimerFired::~EventOfTimerFired
// ----------------------------------------------------------------------------
void glotv3::EventOfTimerFired::Destroy(glotv3::EventOfTimerFired::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093AE0);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfTimerFired::Destroy_ea13473f0  (binary VA: 0x13473f0)
// Original: glotv3::EventOfTimerFired::~EventOfTimerFired
// ----------------------------------------------------------------------------
void glotv3::EventOfTimerFired::Destroy_ea13473f0(glotv3::EventOfTimerFired::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093AE0);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfTimerFired::Construct  (binary VA: 0x1348e50)
// Original: glotv3::EventOfTimerFired::EventOfTimerFired
// ----------------------------------------------------------------------------
void glotv3::EventOfTimerFired::Construct(glotv3::EventOfTimerFired::Self *self)
{
  glotv3::Event::Construct(self, false);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093AE0);
  glotv3::Event::setIsAutomatic(self, true);
  glotv3::Event::setEventType(self, nullptr);
}


