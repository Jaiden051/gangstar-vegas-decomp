#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectToggleCollisions.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectToggleCollisions::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectToggleCollisions::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectToggleCollisions::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectToggleCollisions::ActorGameObjectToggleCollisions(v3, -1);
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
    ActorGameObjectToggleCollisions::ActorGameObjectToggleCollisions(v3, a1);
  }
  return v3;
}



// Constructor (0xc38bf0):
int (**ActorGameObjectToggleCollisions::ActorGameObjectToggleCollisions(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C188);
  return (int (**)(int))(uintptr_t)(&off_206C188);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectToggleCollisions::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectToggleCollisions::~ActorGameObjectToggleCollisions
// ----------------------------------------------------------------------------
void ActorGameObjectToggleCollisions::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C188);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BB30  (binary VA: 0x0)
// Original: sub_C2BB30
// ----------------------------------------------------------------------------
void sub_C2BB30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C188);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C36440  (binary VA: 0x0)
// Original: sub_C36440
// ----------------------------------------------------------------------------
int sub_C36440(grapher::ActorBase::Self *a1)
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
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Collisions", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Physic", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Enable", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Disable", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Toggle", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object to enable or disable collision", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Object", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C2C170  (binary VA: 0x0)
// Original: sub_C2C170
// ----------------------------------------------------------------------------
void sub_C2C170(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  void **v4;
  void **v5;
  char v6;
  int v7;
  void **v8;
  grapher::ActorBase::Self *v9;
  void *v10[9];

  v10[0] = v10;
  v10[1] = v10;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v10), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (void **)v10[0];
  if ( v10[0] != v10 )
  {
    if ( a2 == 1 )
    {
      do
      {
        G4_VCALL<void>(v3[2], 148);
        v3 = (void **)*v3;
      }
      while ( v3 != v10 );
    }
    else if ( a2 == 2 )
    {
      do
      {
        v6 = G4_VCALL<int>(v3[2], 156);
        v7 = *(uint32_t *)v3[2];
        v9 = (grapher::ActorBase::Self *)v3[2];
        if ( v6 != 0 )
          (*(void (**)(grapher::ActorBase::Self *))(v7 + 148))(v9);
        else
          (*(void (**)(grapher::ActorBase::Self *))(v7 + 152))(v9);
        v3 = (void **)*v3;
      }
      while ( v3 != v10 );
    }
    else if ( a2 != 0 )
    {
      do
      {
        v8 = (void **)*v3;
        if ( v8 == v10 )
          break;
        v3 = (void **)*v8;
      }
      while ( v3 != v10 );
    }
    else
    {
      do
      {
        G4_VCALL<void>(v3[2], 152);
        v3 = (void **)*v3;
      }
      while ( v3 != v10 );
    }
  }
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v4 = (void **)v10[0];
  if ( v10[0] != v10 )
  {
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v10 )
        break;
      v4 = v5;
    }
  }
}


