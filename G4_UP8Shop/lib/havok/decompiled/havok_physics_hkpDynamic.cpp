#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpDynamic.h"

// ----------------------------------------------------------------------------
// Function: hkpDynamicsContactMgr::getContactPointProperties  (binary VA: 0x17760a0)
// Original: hkpDynamicsContactMgr::getContactPointProperties
// ----------------------------------------------------------------------------
int hkpDynamicsContactMgr::getContactPointProperties()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpDynamicsContactMgr::getContactPoint  (binary VA: 0x17760b0)
// Original: hkpDynamicsContactMgr::getContactPoint
// ----------------------------------------------------------------------------
int hkpDynamicsContactMgr::getContactPoint()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpDynamicsContactMgr::getAllContactPointIds  (binary VA: 0x17760c0)
// Original: hkpDynamicsContactMgr::getAllContactPointIds
// ----------------------------------------------------------------------------
void hkpDynamicsContactMgr::getAllContactPointIds()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpDynamicsContactMgr::toiCollisionResponseBeginCallback  (binary VA: 0x17760d0)
// Original: hkpDynamicsContactMgr::toiCollisionResponseBeginCallback
// ----------------------------------------------------------------------------
void hkpDynamicsContactMgr::toiCollisionResponseBeginCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpDynamicsContactMgr::toiCollisionResponseEndCallback  (binary VA: 0x17760e0)
// Original: hkpDynamicsContactMgr::toiCollisionResponseEndCallback
// ----------------------------------------------------------------------------
void hkpDynamicsContactMgr::toiCollisionResponseEndCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpDynamicsContactMgr::getConstraintInstance  (binary VA: 0x17760f0)
// Original: hkpDynamicsContactMgr::getConstraintInstance
// ----------------------------------------------------------------------------
int hkpDynamicsContactMgr::getConstraintInstance()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpDynamicsContactMgr::fireCallbacksForEarliestToi  (binary VA: 0x1776100)
// Original: hkpDynamicsContactMgr::fireCallbacksForEarliestToi
// ----------------------------------------------------------------------------
uint8_t * hkpDynamicsContactMgr::fireCallbacksForEarliestToi(uint8_t *a1)
{
  *a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpDynamicsContactMgr::confirmToi  (binary VA: 0x1776110)
// Original: hkpDynamicsContactMgr::confirmToi
// ----------------------------------------------------------------------------
void hkpDynamicsContactMgr::confirmToi()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpDynamicsContactMgr::Destroy  (binary VA: 0x1776120)
// Original: hkpDynamicsContactMgr::~hkpDynamicsContactMgr
// ----------------------------------------------------------------------------
void hkpDynamicsContactMgr::Destroy(hkpDynamicsContactMgr::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpDynamicsContactMgr::Destroy_ea17767d0  (binary VA: 0x17767d0)
// Original: hkpDynamicsContactMgr::~hkpDynamicsContactMgr
// ----------------------------------------------------------------------------
void hkpDynamicsContactMgr::Destroy_ea17767d0(hkpDynamicsContactMgr::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}


