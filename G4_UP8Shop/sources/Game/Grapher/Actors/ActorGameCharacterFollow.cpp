#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterFollow.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterFollow::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterFollow::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterFollow::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterFollow::ActorGameCharacterFollow(v3, -1);
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
    ActorGameCharacterFollow::ActorGameCharacterFollow(v3, a1);
  }
  return v3;
}



// Constructor (0xc66350):
int (**ActorGameCharacterFollow::ActorGameCharacterFollow(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CC68);
  return (int (**)(int))(uintptr_t)(&off_206CC68);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterFollow::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterFollow::~ActorGameCharacterFollow
// ----------------------------------------------------------------------------
void ActorGameCharacterFollow::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CC68);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B190  (binary VA: 0x0)
// Original: sub_C5B190
// ----------------------------------------------------------------------------
void sub_C5B190(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CC68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5CE30  (binary VA: 0x0)
// Original: sub_C5CE30
// ----------------------------------------------------------------------------
int sub_C5CE30(grapher::ActorBase::Self *a1)
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
  int v26[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Follow", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Characters", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetCategoryName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "In", (int)(uintptr_t)(&v12[2]));
  grapher::ActorBase::AddPin(a1, 0, &v25, 1, -1);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), "Out", (int)(uintptr_t)(&v12[3]));
  grapher::ActorBase::AddPin(a1, 1, v26, 0, -1);
  g4_std::string::Destroy(v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Character who will follow the target", (int)(uintptr_t)(&v10) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Subject", (int)(uintptr_t)(&v10) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v12[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v16, 9, &v12[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Subject", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v17), v5, 1, 1, (int)(uintptr_t)(&v18), 1);
  g4_std::string::Destroy(&v17);
  if ( *(uint32_t *)&v12[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v12[4] + 44))(*(uint32_t *)&v12[4]);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Character to follow", (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Target", (int)(uintptr_t)(&v11));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v13 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v19, 9, &v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Target", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v20), v7, 1, 1, (int)(uintptr_t)(&v21), 1);
  g4_std::string::Destroy(&v20);
  if ( v13 != nullptr )
    G4_VCALL<void>(v13, 44);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Can the character use free running.", (int)(uintptr_t)(&v12[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Free running", (int)(uintptr_t)(&v11) + 3);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v22, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Free running", (int)(uintptr_t)(v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v23), v8, 1, 0, (int)(uintptr_t)(&v24), 1);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22);
  return ((g4_std::string::Destroy(&v24)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C5BAD0  (binary VA: 0x0)
// Original: sub_C5BAD0
// ----------------------------------------------------------------------------
int sub_C5BAD0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v6;

  v2 = sub_857260(a1, 0, (int)(uintptr_t)(a2));
  v3 = v2;
  if ( v2 != 0 && *(uint32_t *)(*(uint32_t *)(v2 + 408) - 12) != 0 )
  {
    v4 = *(uint32_t *)(v2 + 404);
    if ( v4 != 0
      && (((*(int (**)(uint32_t))(*(uint32_t *)v4 + 32))(*(uint32_t *)(v3 + 404)) & 2) != 0
       || *(uint32_t *)(*(uint32_t *)(v3 + 408) - 12) != 0
       && (v6 = *(uint32_t *)(v3 + 404)) != 0
       && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v6 + 36))(*(uint32_t *)(v3 + 404)) != 0
       && *(int *)(v3 + 1096) > 0
       && (v3 = **(uint32_t **)(v3 + 1104)) != 0) )
    {
      sub_9B8920((uint32_t *)v3, 0);
      *(uint8_t *)(v3 + 1945) = 0;
    }
  }
  return grapher::ActorBase::Cancel(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C68010  (binary VA: 0x0)
// Original: sub_C68010
// ----------------------------------------------------------------------------
int sub_C68010(int a1, int a2, int a3, grapher::ActorBase::Self *a4, int a5, grapher::ActorContext::Self *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  grapher::ActorVariable::Self *Variable;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v6 = sub_857260(a4, 0, (int)(uintptr_t)(a6));
  v7 = v6;
  if ( v6 != 0 )
  {
    v8 = 0;
    if ( *(uint32_t *)(*(uint32_t *)(v6 + 408) - 12) != 0 )
    {
      v14 = *(uint32_t *)(v6 + 404);
      if ( v14 != 0 )
      {
        if ( ((*(int (**)(uint32_t))(*(uint32_t *)v14 + 32))(*(uint32_t *)(v7 + 404)) & 2) != 0 )
        {
          v8 = v7;
        }
        else if ( *(uint32_t *)(*(uint32_t *)(v7 + 408) - 12) != 0 )
        {
          v15 = *(uint32_t *)(v7 + 404);
          if ( v15 != 0
            && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v15 + 36))(*(uint32_t *)(v7 + 404)) != 0
            && *(int *)(v7 + 1096) > 0 )
          {
            v8 = **(uint32_t **)(v7 + 1104);
          }
        }
      }
    }
    v9 = sub_857260(a4, 1, (int)(uintptr_t)(a6));
    if ( v9 != 0 )
    {
      sub_9B8920((uint32_t *)v8, v9);
      if ( G4_VCALL<int>(v8, 456) != 0
        && (v10 = *(uint32_t *)(v8 + 1872), v11 = *(uint32_t *)(v8 + 1876), (v10 & 0x100) != 0)
        && v10 >= 0
        && (v11 & 1) == 0
        && (v11 & 4) == 0
        || G4_VCALL<int>(v8, 456) != 0
        && (v10 = *(uint32_t *)(v8 + 1872), v11 = *(uint32_t *)(v8 + 1876), (v10 & 0x800) != 0) )
      {
        if ( *(uint32_t *)(v8 + 3688) == 0 )
        {
          *(uint32_t *)(v8 + 1876) = v11;
          *(uint32_t *)(v8 + 1872) = v10 | 0x800000;
        }
      }
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a4, 2);
      *(uint8_t *)(v8 + 1945) = sub_837730((int)(uintptr_t)(a4), Variable, a6, v16, v17, v18, v19, a1, a3, a2);
    }
    else
    {
      G4_VCALL<void>(a4, 28, a6);
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a4, 1, a6));
}


