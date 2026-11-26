#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGamePlayerGiveRespect.h"

// ----------------------------------------------------------------------------
// Function: ActorGamePlayerGiveRespect::CreateInstance  (binary VA: 0x0)
// Original: ActorGamePlayerGiveRespect::CreateInstance
// ----------------------------------------------------------------------------
int ActorGamePlayerGiveRespect::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGamePlayerGiveRespect::ActorGamePlayerGiveRespect(v3, -1);
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
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGamePlayerGiveRespect::ActorGamePlayerGiveRespect(v3, a1);
  }
  return v3;
}



// Constructor (0x829910):
int (**ActorGamePlayerGiveRespect::ActorGamePlayerGiveRespect(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B9A8);
  return (int (**)(int))(uintptr_t)(&off_205B9A8);
}
// ----------------------------------------------------------------------------
// Function: ActorGamePlayerGiveRespect::Destroy  (binary VA: 0x0)
// Original: ActorGamePlayerGiveRespect::~ActorGamePlayerGiveRespect
// ----------------------------------------------------------------------------
int ActorGamePlayerGiveRespect::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B9A8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_820570  (binary VA: 0x0)
// Original: sub_820570
// ----------------------------------------------------------------------------
void sub_820570(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B9A8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8285A0  (binary VA: 0x0)
// Original: sub_8285A0
// ----------------------------------------------------------------------------
int sub_8285A0(grapher::ActorBase::Self *a1)
{
  void *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11[8];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Give Respect", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Player", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "In", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "Out", (int)(uintptr_t)(&v4) + 3);
  grapher::ActorBase::AddPin(a1, 1, v11, 0, -1);
  g4_std::string::Destroy(v11);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v9),
    "Amount of the XP to give the player (use -1 to give remaining xp needed for level up)",
    (int)(uintptr_t)(&v4) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Amount", (int)(uintptr_t)(&v3) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v7, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Amount", (int)(uintptr_t)(&v4));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v8), v2, 1, 1, (int)(uintptr_t)(&v9), 3);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  { g4_std::string::Destroy(&v9); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_831970  (binary VA: 0x0)
// Original: sub_831970
// ----------------------------------------------------------------------------
int sub_831970(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  int v5;
  int v6;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v4 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  v6 = sub_8F0680(v5);
  if ( v6 != 0 )
  {
    if ( v4 == -1 )
    {
      if ( *(uint32_t *)(v6 + 3388) == 0 )
        sub_91E860(v6, 1);
    }
    else if ( v4 > 0 )
    {
      sub_91EF20(v6, v4);
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


