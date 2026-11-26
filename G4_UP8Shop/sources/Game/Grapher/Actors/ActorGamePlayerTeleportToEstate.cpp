#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGamePlayerTeleportToEstate.h"

// ----------------------------------------------------------------------------
// Function: ActorGamePlayerTeleportToEstate::CreateInstance  (binary VA: 0x0)
// Original: ActorGamePlayerTeleportToEstate::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGamePlayerTeleportToEstate::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(v3, 0xFFFFFFFF);
    *(uint32_t *)v3 = (uint32_t)(uintptr_t)(&off_206C108);
    sub_C2D580(v3);
    g4_std::string::construct_copy(v5, a2);
    grapher::ActorBase::SetTemplateName(v3, v5);
    g4_std::string::Destroy(v5);
    grapher::ActorBase::ParseAttributes(v3, a3);
  }
  else
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(v3, a1);
    *(uint32_t *)v3 = (uint32_t)(uintptr_t)(&off_206C108);
  }
  return v3;
}



// ----------------------------------------------------------------------------
// Function: ActorGameBase::Destroy_ov7  (binary VA: 0x0)
// Original: ActorGameBase::~ActorGameBase
// ----------------------------------------------------------------------------
void ActorGameBase::Destroy_ov7(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D2D0_ov7  (binary VA: 0x0)
// Original: sub_84D2D0
// ----------------------------------------------------------------------------
void sub_84D2D0_ov7(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84C720_ov7  (binary VA: 0x0)
// Original: sub_84C720
// ----------------------------------------------------------------------------
int sub_84C720_ov7(grapher::ActorBase::Self *a1)
{
  int v2;
  int v3;
  int v4;

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "{Base}", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3);
  g4_std::string::Destroy(&v3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), (char *)&unk_1B15112, (int)(uintptr_t)(&v2) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v4);
  { g4_std::string::Destroy(&v4); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_85A400_ov7  (binary VA: 0x0)
// Original: sub_85A400
// ----------------------------------------------------------------------------
void sub_85A400_ov7()
{
  ;
}


