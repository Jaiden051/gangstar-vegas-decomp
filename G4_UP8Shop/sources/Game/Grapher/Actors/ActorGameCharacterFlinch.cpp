#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterFlinch.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterFlinch::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterFlinch::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterFlinch::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterFlinch::ActorGameCharacterFlinch(v3, -1);
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
    ActorGameCharacterFlinch::ActorGameCharacterFlinch(v3, a1);
  }
  return v3;
}



// Constructor (0xc66310):
int (**ActorGameCharacterFlinch::ActorGameCharacterFlinch(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CC28);
  return (int (**)(int))(uintptr_t)(&off_206CC28);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterFlinch::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterFlinch::~ActorGameCharacterFlinch
// ----------------------------------------------------------------------------
void ActorGameCharacterFlinch::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CC28);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B7D0  (binary VA: 0x0)
// Original: sub_C5B7D0
// ----------------------------------------------------------------------------
void sub_C5B7D0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CC28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5C9F0  (binary VA: 0x0)
// Original: sub_C5C9F0
// ----------------------------------------------------------------------------
int sub_C5C9F0(grapher::ActorBase::Self *a1)
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
  int v21;
  int v22[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Flinch", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "AI", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Melee", (int)(uintptr_t)(&v10[1]));
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Weapon", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 1, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 2, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "The attacked character.", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Subject", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Subject", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "The attacking character.", (int)(uintptr_t)(v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Attacker", (int)(uintptr_t)(&v9) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v17, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Attacker", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v7, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  { g4_std::string::Destroy(&v19); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C65A00  (binary VA: 0x0)
// Original: sub_C65A00
// ----------------------------------------------------------------------------
int sub_C65A00(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int *v7;
  int v9;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v5 = (int *)v5[1];
        if ( v5 == nullptr )
          break;
        if ( v5 == (int *)(&dword_20D75F0) )
          goto LABEL_8;
      }
    }
  }
  v4 = 0;
LABEL_8:
  v6 = sub_857260(a1, 1, (int)(uintptr_t)(a3));
  if ( v6 != 0 )
  {
    v7 = (int *)G4_VCALL<int>(v6, 16);
    if ( v7 != nullptr )
    {
      if ( v7 == (int *)(&dword_20D75F0) )
      {
LABEL_15:
        if ( v4 != 0 )
        {
          if ( *(uint8_t *)(v4 + 3195) != 0 )
          {
            if ( (lrand48() & 1) != 0 )
              sub_9D4450(v4, 86, 1065353216, 125, 0, 0);
            else
              sub_9D4450(v4, 85, 1065353216, 125, 0, 0);
          }
          else
          {
            v9 = *(uint32_t *)(v4 + 4148);
            if ( v9 != -1 )
              sub_9FFF40(v4, v9, 4, 1, 1);
            *(uint32_t *)(v4 + 4148) = -1;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v7 = (int *)v7[1];
          if ( v7 == nullptr )
            break;
          if ( v7 == (int *)(&dword_20D75F0) )
            goto LABEL_15;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}


