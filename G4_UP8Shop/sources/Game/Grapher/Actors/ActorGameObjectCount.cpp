#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectCount.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectCount::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectCount::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectCount::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectCount::ActorGameObjectCount(v3, -1);
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
    ActorGameObjectCount::ActorGameObjectCount(v3, a1);
  }
  return v3;
}



// Constructor (0xc384d0):
int (**ActorGameObjectCount::ActorGameObjectCount(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD08);
  return (int (**)(int))(uintptr_t)(&off_206BD08);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectCount::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectCount::~ActorGameObjectCount
// ----------------------------------------------------------------------------
void ActorGameObjectCount::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B7F0  (binary VA: 0x0)
// Original: sub_C2B7F0
// ----------------------------------------------------------------------------
void sub_C2B7F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C30C30  (binary VA: 0x0)
// Original: sub_C30C30
// ----------------------------------------------------------------------------
int sub_C30C30(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  uint32_t *v4;
  void *v5;
  int v6;
  int v7;
  long double v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Count Object", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Objects", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Objects to count", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v7));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v11, 9, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v5, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Store count in this variable", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Result", (int)(uintptr_t)(&v7) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v14, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Result", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v3, 1, 1, (int)(uintptr_t)(&v16), 2);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  { g4_std::string::Destroy(&v16); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C38F30  (binary VA: 0x0)
// Original: sub_C38F30
// ----------------------------------------------------------------------------
void sub_C38F30(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  int i;
  void **v5;
  void **v6;
  void *v7[9];

  v7[0] = v7;
  v7[1] = v7;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v7), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (void **)v7[0];
  for ( i = 0; v3 != v7; ++i )
    v3 = (void **)*v3;
  sub_836F40(a1, 1, i, a3);
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v5 = (void **)v7[0];
  if ( v7[0] != v7 )
  {
    while ( 1 )
    {
      v6 = (void **)*v5;
      opDelete(v5);
      if ( v6 == v7 )
        break;
      v5 = v6;
    }
  }
}


