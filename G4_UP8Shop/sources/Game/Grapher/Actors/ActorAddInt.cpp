#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorAddInt.h"

// ----------------------------------------------------------------------------
// Function: ActorAddInt::CreateInstance  (binary VA: 0x0)
// Original: ActorAddInt::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorAddInt::Self * ActorAddInt::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorAddInt::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorAddInt::Self *)gll_operator_new(
                                   0x34u,
                                   (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"),
                                   30);
    grapher::ActorAddInt::ActorAddInt(v3, 0xFFFFFFFF);
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
    v3 = (grapher::ActorAddInt::Self *)gll_operator_new(
                                   0x34u,
                                   (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"),
                                   43);
    grapher::ActorAddInt::ActorAddInt(v3, a1);
  }
  return v3;
}


