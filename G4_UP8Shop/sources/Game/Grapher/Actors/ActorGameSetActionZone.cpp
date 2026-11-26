#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameSetActionZone.h"

// ----------------------------------------------------------------------------
// Function: ActorGameSetActionZone::CreateInstance  (binary VA: 0x0)
// Original: ActorGameSetActionZone::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameSetActionZone::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameSetActionZone::ActorGameSetActionZone(v3, -1);
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
    ActorGameSetActionZone::ActorGameSetActionZone(v3, a1);
  }
  return v3;
}



// Constructor (0x845400):
int (**ActorGameSetActionZone::ActorGameSetActionZone(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA48);
  return (int (**)(int))(uintptr_t)(&off_205CA48);
}
// ----------------------------------------------------------------------------
// Function: ActorGameSetActionZone::Destroy  (binary VA: 0x0)
// Original: ActorGameSetActionZone::~ActorGameSetActionZone
// ----------------------------------------------------------------------------
int ActorGameSetActionZone::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA48);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8398F0  (binary VA: 0x0)
// Original: sub_8398F0
// ----------------------------------------------------------------------------
void sub_8398F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8431B0  (binary VA: 0x0)
// Original: sub_8431B0
// ----------------------------------------------------------------------------
int sub_8431B0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  void *v8;
  void *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint8_t v14[20];
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Set Action Zone", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Characters", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetCategoryName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Set", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Clear", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Out", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddPin(a1, 2, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "List of objects that must stay in the zone.", (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Target", (int)(uintptr_t)(&v12));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v14[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v21, 9, &v14[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Target", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v22), v5, 1, 1, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  if ( *(uint32_t *)&v14[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v14[4] + 44))(*(uint32_t *)&v14[4]);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v26),
    "TriggerZone where to stay (If it's a LevelObject other than Target, then will stay in Radius around Zone).",
    (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Zone", (int)(uintptr_t)(&v12) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v15 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v24, 9, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Zone", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v25), v7, 1, 1, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Zone radius (if Zone is not a TriggerZone).", (int)(uintptr_t)(v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Radius", (int)(uintptr_t)(&v13) + 2);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v27, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Radius", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v28), v9, 1, 1, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v32), "Center radius.", (int)(uintptr_t)(&v14[3]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Radius", (int)(uintptr_t)(&v14[1]));
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v30, 1, 100);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Inner radius", (int)(uintptr_t)(&v14[2]));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v31), v8, 1, 0, (int)(uintptr_t)(v32), 3);
  g4_std::string::Destroy(&v31);
  g4_std::string::Destroy(&v30);
  return ((g4_std::string::Destroy(v32)), (int)0);
}



// Vtable Slot [+36] (0x845ea0, 661 bytes) - sub_845EA0:

