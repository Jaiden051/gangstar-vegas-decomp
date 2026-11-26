#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpNullBro.h"

// ----------------------------------------------------------------------------
// Function: hkpNullBroadPhaseListener::addCollisionPair  (binary VA: 0x1aed1e0)
// Original: hkpNullBroadPhaseListener::addCollisionPair
// ----------------------------------------------------------------------------
void hkpNullBroadPhaseListener::addCollisionPair()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullBroadPhaseListener::removeCollisionPair  (binary VA: 0x1aed200)
// Original: hkpNullBroadPhaseListener::removeCollisionPair
// ----------------------------------------------------------------------------
void hkpNullBroadPhaseListener::removeCollisionPair()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullBroadPhaseListener::Destroy  (binary VA: 0x1aed220)
// Original: hkpNullBroadPhaseListener::~hkpNullBroadPhaseListener
// ----------------------------------------------------------------------------
void hkpNullBroadPhaseListener::Destroy(hkpNullBroadPhaseListener::Self *self)
{
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209F128);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpNullBroadPhaseListener::Destroy_ea1aed260  (binary VA: 0x1aed260)
// Original: hkpNullBroadPhaseListener::~hkpNullBroadPhaseListener
// ----------------------------------------------------------------------------
void hkpNullBroadPhaseListener::Destroy_ea1aed260(hkpNullBroadPhaseListener::Self *self)
{
  int v1;
  int v2;

  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209F128);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}


