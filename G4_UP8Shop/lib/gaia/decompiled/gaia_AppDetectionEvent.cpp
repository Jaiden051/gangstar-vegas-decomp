#include "Core/Utils/DecompTypes.h"
#include "gaia_AppDetectionEvent.h"

// ----------------------------------------------------------------------------
// Function: gaia::AppDetectionEvent::Destroy  (binary VA: 0x14ea280)
// Original: gaia::AppDetectionEvent::~AppDetectionEvent
// ----------------------------------------------------------------------------
void gaia::AppDetectionEvent::Destroy(gaia::AppDetectionEvent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095FD8);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::AppDetectionEvent::Destroy_ea14ea490  (binary VA: 0x14ea490)
// Original: gaia::AppDetectionEvent::~AppDetectionEvent
// ----------------------------------------------------------------------------
void gaia::AppDetectionEvent::Destroy_ea14ea490(gaia::AppDetectionEvent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095FD8);
  glotv3::Event::Destroy(self);
  opDelete(self);
}


