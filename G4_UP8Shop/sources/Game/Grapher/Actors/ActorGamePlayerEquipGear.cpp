#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGamePlayerEquipGear.h"

// ----------------------------------------------------------------------------
// Function: ActorGamePlayerEquipGear::CreateInstance  (binary VA: 0x0)
// Original: ActorGamePlayerEquipGear::CreateInstance
// ----------------------------------------------------------------------------
int ActorGamePlayerEquipGear::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGamePlayerEquipGear::ActorGamePlayerEquipGear(v3, -1);
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
    ActorGamePlayerEquipGear::ActorGamePlayerEquipGear(v3, a1);
  }
  return v3;
}



// Constructor (0x829850):
int (**ActorGamePlayerEquipGear::ActorGamePlayerEquipGear(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B8A8);
  return (int (**)(int))(uintptr_t)(&off_205B8A8);
}
// ----------------------------------------------------------------------------
// Function: ActorGamePlayerEquipGear::Destroy  (binary VA: 0x0)
// Original: ActorGamePlayerEquipGear::~ActorGamePlayerEquipGear
// ----------------------------------------------------------------------------
int ActorGamePlayerEquipGear::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B8A8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_820A70  (binary VA: 0x0)
// Original: sub_820A70
// ----------------------------------------------------------------------------
void sub_820A70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B8A8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8238A0  (binary VA: 0x0)
// Original: sub_8238A0
// ----------------------------------------------------------------------------
int sub_8238A0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int v6;
  g4_int128_t v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Equip Gear", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Player", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Equip", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Unequip", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 2, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Gear ID from gear_.xml.", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "GearID", (int)(uintptr_t)(&v6) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Gears.", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &v10);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 11, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "GearID", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v11);
  { g4_std::string::Destroy(&v13); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8329E0  (binary VA: 0x0)
// Original: sub_8329E0
// ----------------------------------------------------------------------------
int sub_8329E0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  int v5;
  int v6;

  if ( a2 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
    v4 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
    v6 = sub_8F0680(v5);
    sub_90AA60(v6, v4);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}


