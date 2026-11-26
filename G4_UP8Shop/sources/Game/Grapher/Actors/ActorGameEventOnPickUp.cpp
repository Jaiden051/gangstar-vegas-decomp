#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameEventOnPickUp.h"

// ----------------------------------------------------------------------------
// Function: ActorGameEventOnPickUp::CreateInstance  (binary VA: 0x0)
// Original: ActorGameEventOnPickUp::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameEventOnPickUp::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x44u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameEventOnPickUp::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), -1);
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
    ActorGameEventOnPickUp::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameEventOnPickUp::Construct  (binary VA: 0x0)
// Original: ActorGameEventOnPickUp::ActorGameEventOnPickUp
// ----------------------------------------------------------------------------
int ActorGameEventOnPickUp::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C688);
  *((uint32_t *)a1 + 13) = ((uint32_t)(uintptr_t)&off_206C6C0);
  *((uint32_t *)a1 + 16) = 0;
  *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  return sub_84BB20((char *)a1 + 64, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_C40CE0  (binary VA: 0x0)
// Original: sub_C40CE0
// ----------------------------------------------------------------------------
int sub_C40CE0(int a1)
{
  return ((ActorGameEventOnPickUp::Destroy(a1 - 52)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C40BD0  (binary VA: 0x0)
// Original: sub_C40BD0
// ----------------------------------------------------------------------------
int sub_C40BD0(int a1)
{
  { sub_C40BE0((void *)(a1 - 52)); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C524F0  (binary VA: 0x0)
// Original: sub_C524F0
// ----------------------------------------------------------------------------
int sub_C524F0(int a1, int a2)
{
  { sub_C52500((grapher::ActorBase::Self *)(a1 - 52), a2); return 0; }
}


