#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetMood.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetMood::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterSetMood::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterSetMood::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterSetMood::ActorGameCharacterSetMood(v3, -1);
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
    ActorGameCharacterSetMood::ActorGameCharacterSetMood(v3, a1);
  }
  return v3;
}



// Constructor (0xc66860):
int (**ActorGameCharacterSetMood::ActorGameCharacterSetMood(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D1A8);
  return (int (**)(int))(uintptr_t)(&off_206D1A8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetMood::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterSetMood::~ActorGameCharacterSetMood
// ----------------------------------------------------------------------------
void ActorGameCharacterSetMood::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D1A8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B690  (binary VA: 0x0)
// Original: sub_C5B690
// ----------------------------------------------------------------------------
void sub_C5B690(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D1A8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C628C0  (binary VA: 0x0)
// Original: sub_C628C0
// ----------------------------------------------------------------------------
int sub_C628C0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Set Mood", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Characters", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "In", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 1, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "The character that will be in the mood", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Target", (int)(uintptr_t)(&v9));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "The animation set of the mood", (int)(uintptr_t)(&v10[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Animation Set", (int)(uintptr_t)(&v9) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v17, 4, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Animation Set", (int)(uintptr_t)(v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v7, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  { g4_std::string::Destroy(&v19); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C6B8B0  (binary VA: 0x0)
// Original: sub_C6B8B0
// ----------------------------------------------------------------------------
int sub_C6B8B0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  char *s[8];

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 == 0 || (v5 = (int *)G4_VCALL<int>(v3, 16)) == nullptr )
  {
LABEL_7:
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    sub_837C70(s, (int)(uintptr_t)(a1), Variable, a3, v13, v14, v15, v16, v17, v18, v21);
    goto LABEL_8;
  }
  while ( v5 != (int *)(&dword_20D75F0) )
  {
    v5 = (int *)v5[1];
    if ( v5 == nullptr )
      goto LABEL_7;
  }
  v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  sub_837C70(s, (int)(uintptr_t)(a1), v8, a3, v13, v14, v15, v16, v17, v18, v21);
  v9 = sub_5A5890(s[0], 0xA078B2C1);
  v10 = dword_20DE720;
  if ( dword_20DE720 == 0 )
  {
    v19 = v9;
    v22 = sub_4EBBF0(0x4Cu, 1);
    sub_C01030(v22);
    dword_20DE720 = v22;
    sub_C025A0(v22);
    v9 = v19;
    v10 = dword_20DE720;
  }
  v11 = (int *)sub_C01ED0(v10, v9);
  v12 = dword_20DE720;
  if ( dword_20DE720 == 0 )
  {
    v20 = v11;
    v23 = sub_4EBBF0(0x4Cu, 1);
    sub_C01030(v23);
    dword_20DE720 = v23;
    sub_C025A0(v23);
    v11 = v20;
    v12 = dword_20DE720;
  }
  sub_C011B0(v12, v4, (uint32_t *)(v4 + 464), v11);
LABEL_8:
  grapher::ActorBase::FireEvent(a1, 1, a3);
  return ((g4_std::string::Destroy(s)), (int)0);
}


