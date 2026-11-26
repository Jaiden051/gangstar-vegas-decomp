#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterRequestToken.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterRequestToken::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterRequestToken::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterRequestToken::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterRequestToken::ActorGameCharacterRequestToken(v3, -1);
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
    ActorGameCharacterRequestToken::ActorGameCharacterRequestToken(v3, a1);
  }
  return v3;
}



// Constructor (0xc66720):
int (**ActorGameCharacterRequestToken::ActorGameCharacterRequestToken(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D068);
  return (int (**)(int))(uintptr_t)(&off_206D068);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterRequestToken::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterRequestToken::~ActorGameCharacterRequestToken
// ----------------------------------------------------------------------------
void ActorGameCharacterRequestToken::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D068);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B550  (binary VA: 0x0)
// Original: sub_C5B550
// ----------------------------------------------------------------------------
void sub_C5B550(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D068);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C615B0  (binary VA: 0x0)
// Original: sub_C615B0
// ----------------------------------------------------------------------------
int sub_C615B0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Request Token", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "AI", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Request", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddPin(a1, 0, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Relinquish", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Steal", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 3, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "The character requesting the token.", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Target", (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v9 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v12, 9, &v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Target", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v5, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  if ( v9 != nullptr )
    G4_VCALL<void>(v9, 44);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Request melee token instead of combat token.", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Melee", (int)(uintptr_t)(&v7) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v15, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Melee", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v3, 1, 0, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  { g4_std::string::Destroy(&v17); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C67C80  (binary VA: 0x0)
// Original: sub_C67C80
// ----------------------------------------------------------------------------
int sub_C67C80(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  uint32_t *v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v13;
  int v14;
  char v15;
  int v16;
  int v17;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = (uint32_t *)v3;
  if ( v3 == 0 || (v5 = (int *)G4_VCALL<int>(v3, 16)) == nullptr )
  {
LABEL_7:
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    sub_837730((int)(uintptr_t)(a1), Variable, a3, v9, v10, v11, v12, v14, v16, v17);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
  }
  while ( v5 != (int *)(&dword_20D75F0) )
  {
    v5 = (int *)v5[1];
    if ( v5 == nullptr )
      goto LABEL_7;
  }
  v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v13 = sub_837730((int)(uintptr_t)(a1), v8, a3, v9, v10, v11, v12, v14, v16, v17);
  if ( a2 == 1 )
  {
    if ( v13 != 0 )
      sub_9ABCF0(v4);
    else
      sub_9AA950(v4);
  }
  else
  {
    if ( a2 == 2 )
    {
      v15 = 1;
    }
    else
    {
      v15 = 0;
      if ( a2 != 0 )
        return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
    }
    if ( !sub_97FD50((int)(uintptr_t)(v4)) )
    {
      if ( v13 != 0 )
        sub_9AB7E0((int)(uintptr_t)(v4), v15);
      else
        sub_9A9DA0((int)(uintptr_t)(v4));
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
}


