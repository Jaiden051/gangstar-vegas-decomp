#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameEventOnKill.h"

// ----------------------------------------------------------------------------
// Function: ActorGameEventOnKill::CreateInstance  (binary VA: 0x0)
// Original: ActorGameEventOnKill::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameEventOnKill::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x44u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameEventOnKill::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), -1);
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
    ActorGameEventOnKill::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameEventOnKill::Construct  (binary VA: 0x0)
// Original: ActorGameEventOnKill::ActorGameEventOnKill
// ----------------------------------------------------------------------------
int ActorGameEventOnKill::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C628);
  *((uint32_t *)a1 + 13) = ((uint32_t)(uintptr_t)&off_206C660);
  *((uint32_t *)a1 + 16) = 0;
  *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  return sub_84BB20((char *)a1 + 64, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_C40DE0  (binary VA: 0x0)
// Original: sub_C40DE0
// ----------------------------------------------------------------------------
int sub_C40DE0(int a1)
{
  return ((ActorGameEventOnKill::Destroy(a1 - 52)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C41240  (binary VA: 0x0)
// Original: sub_C41240
// ----------------------------------------------------------------------------
int sub_C41240(int a1)
{
  { sub_C41250((void *)(a1 - 52)); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C527E0  (binary VA: 0x0)
// Original: sub_C527E0
// ----------------------------------------------------------------------------
int sub_C527E0(int a1, int a2)
{
  { sub_C527F0(a1 - 52, a2); return 0; }
}


