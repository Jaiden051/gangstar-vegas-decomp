#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpRejectC.h"

// ----------------------------------------------------------------------------
// Function: hkpRejectChassisListener::Destroy  (binary VA: 0x1868980)
// Original: hkpRejectChassisListener::~hkpRejectChassisListener
// ----------------------------------------------------------------------------
void hkpRejectChassisListener::Destroy(hkpRejectChassisListener::Self *self)
{
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209E838);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpRejectChassisListener::collidableAddedCallback  (binary VA: 0x18689c0)
// Original: hkpRejectChassisListener::collidableAddedCallback
// ----------------------------------------------------------------------------
int hkpRejectChassisListener::collidableAddedCallback(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a2 + 4);
  if ( result == *(uint32_t *)(a1 + 12) || *(uint8_t *)(result + 24) != 1 )
    *(uint32_t *)(a2 + 8) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRejectChassisListener::collidableRemovedCallback  (binary VA: 0x18689f0)
// Original: hkpRejectChassisListener::collidableRemovedCallback
// ----------------------------------------------------------------------------
void hkpRejectChassisListener::collidableRemovedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpRejectChassisListener::Destroy_ea1868a10  (binary VA: 0x1868a10)
// Original: hkpRejectChassisListener::~hkpRejectChassisListener
// ----------------------------------------------------------------------------
void hkpRejectChassisListener::Destroy_ea1868a10(hkpRejectChassisListener::Self *self)
{
  int v1;
  int v2;

  hkpRejectChassisListener::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpRejectChassisListener::staticClass  (binary VA: 0x186c070)
// Original: hkpRejectChassisListener::staticClass
// ----------------------------------------------------------------------------
void * hkpRejectChassisListener::staticClass()
{
  return &hkpRejectChassisListenerClass;
}


