#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectGetProperty.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectGetProperty::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectGetProperty::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectGetProperty::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectGetProperty::ActorGameObjectGetProperty(v3, -1);
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
    ActorGameObjectGetProperty::ActorGameObjectGetProperty(v3, a1);
  }
  return v3;
}



// Constructor (0xc386a0):
int (**ActorGameObjectGetProperty::ActorGameObjectGetProperty(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BE48);
  return (int (**)(int))(uintptr_t)(&off_206BE48);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectGetProperty::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectGetProperty::~ActorGameObjectGetProperty
// ----------------------------------------------------------------------------
void ActorGameObjectGetProperty::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BE48);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B930  (binary VA: 0x0)
// Original: sub_C2B930
// ----------------------------------------------------------------------------
void sub_C2B930(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BE48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C31E30  (binary VA: 0x0)
// Original: sub_C31E30
// ----------------------------------------------------------------------------
int sub_C31E30(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  void *v4;
  uint32_t *v5;
  void *v6;
  int v7;
  int v8;
  int v9;
  g4_int128_t v10;
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
  int v21;
  int v22;
  int v23[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Get Property", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Objects", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetCategoryName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "In", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 1, v23, 0, -1);
  g4_std::string::Destroy(v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Object to get the property from", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Object", (int)(uintptr_t)(&v8) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v10) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v13, 9, (char *)&v10 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Object", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v6, 1, 1, (int)(uintptr_t)(&v15), 1);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v10) != 0 )
    G4_VCALL<void>(DWORD1(v10), 44);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "OID of the property", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Property", (int)(uintptr_t)(&v9));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Property", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 1);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Value to get", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Value", (int)(uintptr_t)(&v9) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v19, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Value", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v20), v4, 1, 1, (int)(uintptr_t)(&v21), 2);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  { g4_std::string::Destroy(&v21); return 0; }
}



// Vtable Slot [+36] (0xc3a070, 191 bytes) - sub_C3A070:

