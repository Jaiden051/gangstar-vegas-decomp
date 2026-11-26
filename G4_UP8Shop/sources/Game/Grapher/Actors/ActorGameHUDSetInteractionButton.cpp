#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameHUDSetInteractionButton.h"

// ----------------------------------------------------------------------------
// Function: ActorGameHUDSetInteractionButton::CreateInstance  (binary VA: 0x0)
// Original: ActorGameHUDSetInteractionButton::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameHUDSetInteractionButton::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameHUDSetInteractionButton::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), -1);
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
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameHUDSetInteractionButton::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameHUDSetInteractionButton::Construct  (binary VA: 0x0)
// Original: ActorGameHUDSetInteractionButton::ActorGameHUDSetInteractionButton
// ----------------------------------------------------------------------------
int ActorGameHUDSetInteractionButton::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C9A8);
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_206C9E0);
  *((uint32_t *)a1 + 14) = 0;
  return sub_84BB20((char *)a1 + 56, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_C57DA0  (binary VA: 0x0)
// Original: sub_C57DA0
// ----------------------------------------------------------------------------
int sub_C57DA0(int a1, int a2, int a3)
{
  { sub_C57DB0((grapher::ActorBase::Self *)(a1 - 52), a2, a3); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_653120  (binary VA: 0x0)
// Original: sub_653120
// ----------------------------------------------------------------------------
int sub_653120()
{
  return 0;
}


