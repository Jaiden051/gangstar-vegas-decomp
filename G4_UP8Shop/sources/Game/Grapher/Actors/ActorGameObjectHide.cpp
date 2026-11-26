#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectHide.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectHide::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectHide::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectHide::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectHide::ActorGameObjectHide(v3, -1);
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
    ActorGameObjectHide::ActorGameObjectHide(v3, a1);
  }
  return v3;
}



// Constructor (0xc385e0):
int (**ActorGameObjectHide::ActorGameObjectHide(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD88);
  return (int (**)(int))(uintptr_t)(&off_206BD88);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectHide::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectHide::~ActorGameObjectHide
// ----------------------------------------------------------------------------
void ActorGameObjectHide::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD88);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B870  (binary VA: 0x0)
// Original: sub_C2B870
// ----------------------------------------------------------------------------
void sub_C2B870(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C31330  (binary VA: 0x0)
// Original: sub_C31330
// ----------------------------------------------------------------------------
int sub_C31330(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Hide Object", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Objects", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Show", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Hide", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v15, 0, -1);
  g4_std::string::Destroy(v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "List of objects to hide", (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Object", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v7 = v3;
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, &v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( v7 != nullptr )
    G4_VCALL<void>(v7, 44);
  g4_std::string::Destroy(&v10);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C2C300  (binary VA: 0x0)
// Original: sub_C2C300
// ----------------------------------------------------------------------------
void sub_C2C300(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  void **v4;
  void **v5;
  void *v6[9];

  v6[0] = v6;
  v6[1] = v6;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v6), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (void **)v6[0];
  if ( v6[0] != v6 )
  {
    if ( a2 != 0 )
    {
      do
      {
        G4_VCALL<void>(v3[2], 108, 1);
        G4_VCALL<void>(v3[2], 148);
        v3 = (void **)*v3;
      }
      while ( v3 != v6 );
    }
    else
    {
      do
      {
        G4_VCALL<void>(v3[2], 112, 1);
        G4_VCALL<void>(v3[2], 152);
        v3 = (void **)*v3;
      }
      while ( v3 != v6 );
    }
  }
  grapher::ActorBase::FireEvent(a1, 2, a3);
  v4 = (void **)v6[0];
  if ( v6[0] != v6 )
  {
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v6 )
        break;
      v4 = v5;
    }
  }
}


