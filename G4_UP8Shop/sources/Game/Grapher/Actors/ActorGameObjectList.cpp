#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectList.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectList::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectList::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectList::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectList::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), -1);
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
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameObjectList::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectList::Construct  (binary VA: 0x0)
// Original: ActorGameObjectList::ActorGameObjectList
// ----------------------------------------------------------------------------
uint32_t * ActorGameObjectList::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF48);
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)((char *)a1 + 52);
  *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)((char *)a1 + 52);
  return (uint32_t *)((char *)a1 + 52);
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectList::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectList::~ActorGameObjectList
// ----------------------------------------------------------------------------
void ActorGameObjectList::Destroy(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF48);
  v1 = *((uint32_t **)a1 + 13);
  if ( v1 != (uint32_t *)((char *)a1 + 52) )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)*v1;
      opDelete(v1);
      if ( v2 == (uint32_t *)((char *)a1 + 52) )
        break;
      v1 = v2;
    }
  }
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BCF0  (binary VA: 0x0)
// Original: sub_C2BCF0
// ----------------------------------------------------------------------------
void sub_C2BCF0(grapher::ActorBase::Self *a1)
{
  void **v1;
  void **v2;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF48);
  v1 = *((void ***)a1 + 13);
  if ( v1 != (void **)((char *)a1 + 52) )
  {
    while ( 1 )
    {
      v2 = (void **)*v1;
      opDelete(v1);
      if ( v2 == (void **)((char *)a1 + 52) )
        break;
      v1 = v2;
    }
  }
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C33620  (binary VA: 0x0)
// Original: sub_C33620
// ----------------------------------------------------------------------------
int sub_C33620(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
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
  int v23;
  int v24[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "List Objects", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Objects", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "In", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddPin(a1, 0, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Iter", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Out", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 3, &v23, 0, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Completed", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 2, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "List of objects to iter on", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Source", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v11 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Source", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Object returned", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Result", (int)(uintptr_t)(&v9) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Result", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 2);
  g4_std::string::Destroy(&v19);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  { g4_std::string::Destroy(&v20); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C2DE30  (binary VA: 0x0)
// Original: sub_C2DE30
// ----------------------------------------------------------------------------
unsigned int sub_C2DE30(grapher::ActorBase::Self *a1, unsigned int a2, grapher::ActorContext::Self *a3)
{
  unsigned int result;
  void **v4;
  void **v5;
  void **v6;
  void *v7;
  char *v8;
  void *v9;
  void **v10;
  int v11[4];

  result = a2;
  if ( a2 != 0 )
  {
    if ( a2 > 1 )
      return result;
    v5 = (void **)((char *)a1 + 52);
  }
  else
  {
    v4 = *((void ***)a1 + 13);
    v5 = (void **)((char *)a1 + 52);
    if ( v4 != (void **)((char *)a1 + 52) )
    {
      while ( 1 )
      {
        v10 = (void **)*v4;
        opDelete(v4);
        if ( v10 == v5 )
          break;
        v4 = v10;
      }
    }
    *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(v5);
    *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)(v5);
    sub_8560A0(a1, 0, (int)(uintptr_t)(a1) + 52, (int)(uintptr_t)(a3), 0x7FFFFFFF);
    sub_C2C400((uint32_t *)a1 + 13);
  }
  v6 = *((void ***)a1 + 13);
  if ( v6 == v5 || (v7 = v6[2], v9 = *((void **)a1 + 13), sub_1901940(v9), opDelete(v9), v7 == nullptr) )
  {
    v7 = nullptr;
    g4_std::string::construct_copy((char *)v11 + 1, &unk_20D67EC);
  }
  else
  {
    v8 = (char *)G4_VCALL<int>(v7, 44);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v11) + 1, v8, (int)(uintptr_t)(v11));
  }
  sub_C2DB70(a1, (int)(uintptr_t)(v11) + 1, a3);
  g4_std::string::Destroy((char *)v11 + 1);
  return (unsigned int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3 - (v7 == nullptr), a3));
}


