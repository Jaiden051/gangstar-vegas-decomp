#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfSpyConfirmReceived.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfSpyConfirmReceived::Destroy  (binary VA: 0x1347120)
// Original: glotv3::EventOfSpyConfirmReceived::~EventOfSpyConfirmReceived
// ----------------------------------------------------------------------------
void glotv3::EventOfSpyConfirmReceived::Destroy(glotv3::EventOfSpyConfirmReceived::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093B40);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfSpyConfirmReceived::Destroy_ea1347300  (binary VA: 0x1347300)
// Original: glotv3::EventOfSpyConfirmReceived::~EventOfSpyConfirmReceived
// ----------------------------------------------------------------------------
void glotv3::EventOfSpyConfirmReceived::Destroy_ea1347300(glotv3::EventOfSpyConfirmReceived::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093B40);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfSpyConfirmReceived::Construct  (binary VA: 0x1349000)
// Original: glotv3::EventOfSpyConfirmReceived::EventOfSpyConfirmReceived
// ----------------------------------------------------------------------------
int glotv3::EventOfSpyConfirmReceived::Construct(glotv3::Event::Self *a1, uint8_t **a2)
{
  int result;
  void *v3;
  uint16_t v4[3];

  glotv3::Event::Construct(a1, false);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2093B40);
  glotv3::Event::setIsAutomatic(a1, true);
  glotv3::Event::setEventType(a1, (char *)&dword_0 + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), "for_uuid", (int)(uintptr_t)(v4));
  glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v4[1], a2);
  result = *(uint32_t *)&v4[1];
  v3 = (void *)(*(uint32_t *)&v4[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v3); return 0; }
  }
  return result;
}


