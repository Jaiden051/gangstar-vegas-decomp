#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectToggleTargetable.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectToggleTargetable::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectToggleTargetable::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectToggleTargetable::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectToggleTargetable::ActorGameObjectToggleTargetable(v3, -1);
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
    ActorGameObjectToggleTargetable::ActorGameObjectToggleTargetable(v3, a1);
  }
  return v3;
}



// Constructor (0xc38d30):
int (**ActorGameObjectToggleTargetable::ActorGameObjectToggleTargetable(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C2C8);
  return (int (**)(int))(uintptr_t)(&off_206C2C8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectToggleTargetable::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectToggleTargetable::~ActorGameObjectToggleTargetable
// ----------------------------------------------------------------------------
void ActorGameObjectToggleTargetable::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C2C8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BC70  (binary VA: 0x0)
// Original: sub_C2BC70
// ----------------------------------------------------------------------------
void sub_C2BC70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C2C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C375A0  (binary VA: 0x0)
// Original: sub_C375A0
// ----------------------------------------------------------------------------
int sub_C375A0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Targetable", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Objects", (int)(uintptr_t)(&v6));
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "List of objects to enable or disable targetability.", (int)(uintptr_t)(&v6) + 3);
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
// Function: sub_C2BD50  (binary VA: 0x0)
// Original: sub_C2BD50
// ----------------------------------------------------------------------------
void sub_C2BD50(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  void **v4;
  void **v5;
  void **v6;
  void *v7[9];

  v7[0] = v7;
  v7[1] = v7;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v7), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (void **)v7[0];
  if ( v7[0] != v7 )
  {
    if ( a2 == 1 )
    {
      do
      {
        G4_VCALL<void>(v3[2], 40, 4, 0);
        v3 = (void **)*v3;
      }
      while ( v3 != v7 );
    }
    else if ( a2 == 2 )
    {
      do
      {
        G4_VCALL<void>(v3[2], 40, 4, (*((uint8_t *)v3[2] + 176) & 4) == 0);
        v3 = (void **)*v3;
      }
      while ( v3 != v7 );
    }
    else if ( a2 != 0 )
    {
      do
      {
        v6 = (void **)*v3;
        if ( v6 == v7 )
          break;
        v3 = (void **)*v6;
      }
      while ( v3 != v7 );
    }
    else
    {
      do
      {
        G4_VCALL<void>(v3[2], 40, 4, 1);
        v3 = (void **)*v3;
      }
      while ( v3 != v7 );
    }
  }
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v4 = (void **)v7[0];
  if ( v7[0] != v7 )
  {
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v7 )
        break;
      v4 = v5;
    }
  }
}


