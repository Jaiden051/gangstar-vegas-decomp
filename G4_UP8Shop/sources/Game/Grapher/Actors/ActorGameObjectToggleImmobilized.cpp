#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectToggleImmobilized.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectToggleImmobilized::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectToggleImmobilized::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectToggleImmobilized::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectToggleImmobilized::ActorGameObjectToggleImmobilized(v3, -1);
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
    ActorGameObjectToggleImmobilized::ActorGameObjectToggleImmobilized(v3, a1);
  }
  return v3;
}



// Constructor (0xc38c70):
int (**ActorGameObjectToggleImmobilized::ActorGameObjectToggleImmobilized(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C208);
  return (int (**)(int))(uintptr_t)(&off_206C208);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectToggleImmobilized::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectToggleImmobilized::~ActorGameObjectToggleImmobilized
// ----------------------------------------------------------------------------
void ActorGameObjectToggleImmobilized::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C208);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BBB0  (binary VA: 0x0)
// Original: sub_C2BBB0
// ----------------------------------------------------------------------------
void sub_C2BBB0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C208);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C36BF0  (binary VA: 0x0)
// Original: sub_C36BF0
// ----------------------------------------------------------------------------
int sub_C36BF0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Immobilized", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "AI", (int)(uintptr_t)(&v6));
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object to enable or disable immobility", (int)(uintptr_t)(&v6) + 3);
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
// Function: sub_C2BFF0  (binary VA: 0x0)
// Original: sub_C2BFF0
// ----------------------------------------------------------------------------
void sub_C2BFF0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  int v4;
  int v5;
  void **v6;
  void **v7;
  int v8;
  char v9;
  void *v10[9];

  v10[0] = v10;
  v10[1] = v10;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v10), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (void **)v10[0];
  if ( v10[0] != v10 )
  {
    v9 = a2 == 0;
    while ( 1 )
    {
      v4 = (int)(uintptr_t)(v3[2]);
      if ( v4 == 0 )
        goto LABEL_4;
      if ( *(uint32_t *)(*(uint32_t *)(v4 + 408) - 12) == 0 )
        goto LABEL_4;
      v5 = *(uint32_t *)(v4 + 404);
      if ( v5 == 0 )
        goto LABEL_4;
      if ( ((*(int (**)(uint32_t))(*(uint32_t *)v5 + 32))(*(uint32_t *)(v4 + 404)) & 2) == 0 )
      {
        if ( *(uint32_t *)(*(uint32_t *)(v4 + 408) - 12) != 0 )
        {
          v8 = *(uint32_t *)(v4 + 404);
          if ( v8 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v8 + 36))(*(uint32_t *)(v4 + 404)) != 0 )
          {
            if ( a2 == 2 )
              v9 = *(uint8_t *)(v4 + 998) ^ 1;
            if ( v9 != 0 )
              sub_86D610(v4);
            else
              sub_86D5E0(v4);
          }
        }
        goto LABEL_4;
      }
      if ( a2 == 2 )
        v9 = *(float *)(v4 + 3220) < 1000000.0;
      if ( v9 != 0 )
      {
        sub_980320(v4, 1232348160);
LABEL_4:
        v3 = (void **)*v3;
        if ( v3 == v10 )
          break;
      }
      else
      {
        sub_980340(v4);
        v3 = (void **)*v3;
        if ( v3 == v10 )
          break;
      }
    }
  }
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v6 = (void **)v10[0];
  if ( v10[0] != v10 )
  {
    while ( 1 )
    {
      v7 = (void **)*v6;
      opDelete(v6);
      if ( v7 == v10 )
        break;
      v6 = v7;
    }
  }
}


