#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectFindRandom.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectFindRandom::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectFindRandom::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectFindRandom::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectFindRandom::ActorGameObjectFindRandom(v3, -1);
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
    ActorGameObjectFindRandom::ActorGameObjectFindRandom(v3, a1);
  }
  return v3;
}



// Constructor (0xc38660):
int (**ActorGameObjectFindRandom::ActorGameObjectFindRandom(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BE08);
  return (int (**)(int))(uintptr_t)(&off_206BE08);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectFindRandom::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectFindRandom::~ActorGameObjectFindRandom
// ----------------------------------------------------------------------------
void ActorGameObjectFindRandom::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BE08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B8F0  (binary VA: 0x0)
// Original: sub_C2B8F0
// ----------------------------------------------------------------------------
void sub_C2B8F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BE08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C31A30  (binary VA: 0x0)
// Original: sub_C31A30
// ----------------------------------------------------------------------------
int sub_C31A30(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  int v8;
  int v9;
  uint8_t v10[20];
  uint32_t *v11;
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
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Find Random", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Objects", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "In", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 1, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "List of ocject to find from", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Source", (int)(uintptr_t)(&v9));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Source", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Object returned", (int)(uintptr_t)(&v10[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Result", (int)(uintptr_t)(&v9) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v17, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Result", (int)(uintptr_t)(v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v7, 1, 1, (int)(uintptr_t)(&v19), 2);
  g4_std::string::Destroy(&v18);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  { g4_std::string::Destroy(&v19); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C2DD10  (binary VA: 0x0)
// Original: sub_C2DD10
// ----------------------------------------------------------------------------
void sub_C2DD10(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  unsigned int v4;
  unsigned int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int *v9;
  char *v10;
  void **v11;
  void **v12;
  int v13;
  int v14;
  void *v15[9];

  v15[0] = v15;
  v15[1] = v15;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v15), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (void **)v15[0];
  if ( v15[0] == v15 )
    goto LABEL_14;
  v4 = 0;
  do
  {
    v3 = (void **)*v3;
    ++v4;
  }
  while ( v3 != v15 );
  if ( v4 == 0 )
  {
LABEL_14:
    v9 = (int *)((char *)&v13 + 1);
    g4_std::string::construct_copy((char *)&v13 + 1, &unk_20D67EC);
  }
  else
  {
    v5 = lrand48();
    v6 = (uint32_t *)(v15[0]);
    v7 = v5 % v4;
    if ( v5 % v4 != 0 )
    {
      v8 = 0;
      do
      {
        ++v8;
        v6 = (uint32_t *)*v6;
      }
      while ( v8 != v7 );
    }
    v9 = &v14;
    v10 = (char *)G4_VCALL<int>(v6[2], 44);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), v10, (int)(uintptr_t)(&v13));
  }
  sub_C2DB70(a1, (int)(uintptr_t)(v9), a3);
  g4_std::string::Destroy(v9);
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v11 = (void **)v15[0];
  if ( v15[0] != v15 )
  {
    while ( 1 )
    {
      v12 = (void **)*v11;
      opDelete(v11);
      if ( v12 == v15 )
        break;
      v11 = v12;
    }
  }
}


