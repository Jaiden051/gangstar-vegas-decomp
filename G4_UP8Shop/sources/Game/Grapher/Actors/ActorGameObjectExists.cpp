#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectExists.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectExists::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectExists::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectExists::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectExists::ActorGameObjectExists(v3, -1);
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
    ActorGameObjectExists::ActorGameObjectExists(v3, a1);
  }
  return v3;
}



// Constructor (0xc38620):
int (**ActorGameObjectExists::ActorGameObjectExists(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BDC8);
  return (int (**)(int))(uintptr_t)(&off_206BDC8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectExists::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectExists::~ActorGameObjectExists
// ----------------------------------------------------------------------------
void ActorGameObjectExists::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BDC8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B8B0  (binary VA: 0x0)
// Original: sub_C2B8B0
// ----------------------------------------------------------------------------
void sub_C2B8B0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BDC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C31610  (binary VA: 0x0)
// Original: sub_C31610
// ----------------------------------------------------------------------------
int sub_C31610(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  uint32_t *v4;
  void *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Exists", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Objects", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "In", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddPin(a1, 0, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Exists", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v19, 0, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Doesn't Exist", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 3, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Object to check.", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object", (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v9 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v12, 9, &v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Object", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v5, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  if ( v9 != nullptr )
    G4_VCALL<void>(v9, 44);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Does the object have to be enabled to pass the test.", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Enabled", (int)(uintptr_t)(&v7) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v15, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Enabled", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v3, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  { g4_std::string::Destroy(&v17); return 0; }
}



// Vtable Slot [+36] (0xc3b400, 189 bytes) - sub_C3B400:

