#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpEntityE.h"

// ----------------------------------------------------------------------------
// Function: hkpEntityEntityBroadPhaseListener::Destroy  (binary VA: 0x175efe0)
// Original: hkpEntityEntityBroadPhaseListener::~hkpEntityEntityBroadPhaseListener
// ----------------------------------------------------------------------------
void hkpEntityEntityBroadPhaseListener::Destroy(hkpEntityEntityBroadPhaseListener::Self *self)
{
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209F128);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpEntityEntityBroadPhaseListener::addCollisionPair  (binary VA: 0x175f020)
// Original: hkpEntityEntityBroadPhaseListener::addCollisionPair
// ----------------------------------------------------------------------------
int hkpEntityEntityBroadPhaseListener::addCollisionPair(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int result;

  v2 = a2[1] + *(char *)(a2[1] + 5);
  v3 = *(char *)(*a2 + 5) + *a2;
  v4 = *(uint32_t **)(*(uint32_t *)(a1 + 12) + 112);
  result = *(char *)(*(char *)(v2 + 26) + *v4 + 10 * *(char *)(v3 + 26) + 7776);
  if ( (uint8_t)result != 0 )
  {
    v4[6] = *(uint32_t *)(*v4 + (result << 6) + 7904);
    return hkpWorldAgentUtil::addAgent(v3, v2, v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEntityEntityBroadPhaseListener::removeCollisionPair  (binary VA: 0x175f0b0)
// Original: hkpEntityEntityBroadPhaseListener::removeCollisionPair
// ----------------------------------------------------------------------------
unsigned int hkpEntityEntityBroadPhaseListener::removeCollisionPair(int a1, uint32_t *a2)
{
  unsigned int result;

  result = hkAgentNnMachine_FindAgent(*(char *)(*a2 + 5) + *a2, *(char *)(a2[1] + 5) + a2[1]);
  if ( result != 0 )
    return hkpWorldAgentUtil::removeAgent(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEntityEntityBroadPhaseListener::Destroy_ea175f110  (binary VA: 0x175f110)
// Original: hkpEntityEntityBroadPhaseListener::~hkpEntityEntityBroadPhaseListener
// ----------------------------------------------------------------------------
void hkpEntityEntityBroadPhaseListener::Destroy_ea175f110(hkpEntityEntityBroadPhaseListener::Self *self)
{
  int v1;
  int v2;

  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209F128);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpEntityEntityBroadPhaseListener::Construct  (binary VA: 0x175f190)
// Original: hkpEntityEntityBroadPhaseListener::hkpEntityEntityBroadPhaseListener
// ----------------------------------------------------------------------------
void hkpEntityEntityBroadPhaseListener::Construct(hkpEntityEntityBroadPhaseListener::Self *self, hkpWorld::Self *a2)
{
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209FD0C);
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FCE8);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
}


