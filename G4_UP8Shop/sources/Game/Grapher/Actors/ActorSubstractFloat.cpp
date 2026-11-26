#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorSubstractFloat.h"

// ----------------------------------------------------------------------------
// Function: ActorSubstractFloat::CreateInstance  (binary VA: 0x0)
// Original: ActorSubstractFloat::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorSubstractFloat::Self * ActorSubstractFloat::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorSubstractFloat::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorSubstractFloat::Self *)gll_operator_new(
                                           0x34u,
                                           (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"),
                                           30);
    grapher::ActorSubstractFloat::ActorSubstractFloat(v3, 0xFFFFFFFF);
    if ( v3 != nullptr )
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
    v3 = (grapher::ActorSubstractFloat::Self *)gll_operator_new(
                                           0x34u,
                                           (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"),
                                           43);
    grapher::ActorSubstractFloat::ActorSubstractFloat(v3, a1);
  }
  return v3;
}


