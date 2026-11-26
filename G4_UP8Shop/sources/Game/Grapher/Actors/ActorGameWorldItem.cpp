#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameWorldItem.h"

// ----------------------------------------------------------------------------
// Function: ActorGameWorldItem::CreateInstance  (binary VA: 0x0)
// Original: ActorGameWorldItem::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameWorldItem::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameWorldItem::ActorGameWorldItem(v3, -1);
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
    ActorGameWorldItem::ActorGameWorldItem(v3, a1);
  }
  return v3;
}



// Constructor (0x829c90):
int (**ActorGameWorldItem::ActorGameWorldItem(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BD28);
  return (int (**)(int))(uintptr_t)(&off_205BD28);
}
// ----------------------------------------------------------------------------
// Function: ActorGameWorldItem::Destroy  (binary VA: 0x0)
// Original: ActorGameWorldItem::~ActorGameWorldItem
// ----------------------------------------------------------------------------
int ActorGameWorldItem::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BD28);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8208F0  (binary VA: 0x0)
// Original: sub_8208F0
// ----------------------------------------------------------------------------
void sub_8208F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BD28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_826E40  (binary VA: 0x0)
// Original: sub_826E40
// ----------------------------------------------------------------------------
int sub_826E40(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  void *v8;
  int v9;
  int v10;
  int v11;
  uint8_t v12[20];
  uint32_t *v13;
  int v14;
  int v15;
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
  int v28[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Place Item", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "World", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Place", (int)(uintptr_t)(&v12[1]));
  grapher::ActorBase::AddPin(a1, 0, &v26, 1, -1);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Remove All", (int)(uintptr_t)(&v12[2]));
  grapher::ActorBase::AddPin(a1, 1, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Out", (int)(uintptr_t)(&v12[3]));
  grapher::ActorBase::AddPin(a1, 2, v28, 0, -1);
  g4_std::string::Destroy(v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Item to spawn", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Type", (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "AllStockItems.", (int)(uintptr_t)(&v9) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v16);
  *(uint32_t *)&v12[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v17, 11, &v12[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Type", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v18), v5, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( *(uint32_t *)&v12[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v12[4] + 44))(*(uint32_t *)&v12[4]);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Name of the marker where to spawn the item", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Target", (int)(uintptr_t)(&v10) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v13 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v20, 9, &v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Target", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v21), v7, 1, 1, (int)(uintptr_t)(&v22), 3);
  g4_std::string::Destroy(&v21);
  if ( v13 != nullptr )
    G4_VCALL<void>(v13, 44);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "How long before it despawns (in ms). (-1==default)", (int)(uintptr_t)(v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "DespawnDelay", (int)(uintptr_t)(&v11) + 2);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v23, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Despawn Delay", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v24), v8, 1, 0, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v23);
  return ((g4_std::string::Destroy(&v25)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_831500  (binary VA: 0x0)
// Original: sub_831500
// ----------------------------------------------------------------------------
int sub_831500(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  grapher::ActorVariable::Self *v5;
  bool v6;
  int *v8;
  uint32_t *v9;
  void *v10;
  int v11;
  uint32_t v12[6];

  v10 = (void *)sub_857260(a1, 1, a3);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v4 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v11 = (int)(uintptr_t)(sub_837200(a1, v5, a3));
  v6 = false;
  if ( v4 >= 0 )
    v6 = v4 < (unsigned int)dword_20D7EA0;
  if ( v10 != nullptr && v6 )
  {
    (*(void (**)(uint32_t *))(*(uint32_t *)v10 + 52))(v12);
    if ( byte_20D2430 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2430) != 0 )
    {
      sub_7D1280(&dword_20D2438);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2430);
      __cxa_atexit((void (*)(void *))sub_789DF0, &dword_20D2438, &unk_20D1280);
    }
    v8 = nullptr;
    if ( byte_20D243C == 0 )
      v8 = (int *)(&dword_20D2438);
    v9 = sub_78A970((int)(uintptr_t)(v8), v4, v12, 1, 1u);
    if ( v9 != nullptr && v11 >= 0 )
      v9[31] = v11;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}


