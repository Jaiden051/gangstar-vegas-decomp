#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameEventLockLootDrop.h"

// ----------------------------------------------------------------------------
// Function: ActorGameEventLockLootDrop::CreateInstance  (binary VA: 0x0)
// Original: ActorGameEventLockLootDrop::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameEventLockLootDrop::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x44u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameEventLockLootDrop::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), -1);
    if ( v3 != 0 )
    {
      G4_VCALL<void>(v3, 8);
      g4_std::string::construct_copy(v5, a2);
      grapher::ActorBase::SetTemplateName(v3, v5);
      g4_std::string::Destroy(v5);
      grapher::ActorBase::ParseAttributes(v3, a3);
    }
  }
  else
  {
    v3 = gll_operator_new(0x44u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameEventLockLootDrop::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameEventLockLootDrop::Construct  (binary VA: 0x0)
// Original: ActorGameEventLockLootDrop::ActorGameEventLockLootDrop
// ----------------------------------------------------------------------------
uint32_t * ActorGameEventLockLootDrop::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C5C8);
  *((uint32_t *)a1 + 13) = ((uint32_t)(uintptr_t)&off_206C600);
  *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  return (uint32_t *)((char *)a1 + 56);
}

// ----------------------------------------------------------------------------
// Function: sub_C40EE0  (binary VA: 0x0)
// Original: sub_C40EE0
// ----------------------------------------------------------------------------
int sub_C40EE0(int a1)
{
  return ((ActorGameEventLockLootDrop::Destroy(a1 - 52)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C41350  (binary VA: 0x0)
// Original: sub_C41350
// ----------------------------------------------------------------------------
int sub_C41350(int a1)
{
  { sub_C41360((void *)(a1 - 52)); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C3F180  (binary VA: 0x0)
// Original: sub_C3F180
// ----------------------------------------------------------------------------
int sub_C3F180(int a1, int a2)
{
  { sub_C3F190(a1 - 52, a2); return 0; }
}


