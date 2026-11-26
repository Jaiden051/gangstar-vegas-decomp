#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterToggleFight.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleFight::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterToggleFight::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleFight::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterToggleFight::ActorGameCharacterToggleFight(v3, -1);
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
    ActorGameCharacterToggleFight::ActorGameCharacterToggleFight(v3, a1);
  }
  return v3;
}



// Constructor (0x8451c0):
int (**ActorGameCharacterToggleFight::ActorGameCharacterToggleFight(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C808);
  return (int (**)(int))(uintptr_t)(&off_205C808);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleFight::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterToggleFight::~ActorGameCharacterToggleFight
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleFight::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C808);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8396B0  (binary VA: 0x0)
// Original: sub_8396B0
// ----------------------------------------------------------------------------
void sub_8396B0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C808);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_83DC00  (binary VA: 0x0)
// Original: sub_83DC00
// ----------------------------------------------------------------------------
int sub_83DC00(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  void *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  int v8;
  int v9;
  int v10;
  int v11;
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
  int v24;
  int v25;
  int v26;
  int v27;
  int v28[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Set Combat Properties", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Characters", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Out", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddPin(a1, 1, v28, 0, -1);
  g4_std::string::Destroy(v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character who will be able or not to fight", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v15, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v7, 1, 1, (int)(uintptr_t)(&v17), 1);
  g4_std::string::Destroy(&v16);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Can fight in general (except player)", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Can Fight", (int)(uintptr_t)(&v9) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v18, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Can Fight", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v3, 1, 1, (int)(uintptr_t)(&v20), 1);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Can move during combat", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Can Combat Move", (int)(uintptr_t)(&v10));
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Can Combat Move", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v22), v4, 1, 1, (int)(uintptr_t)(&v23), 1);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Can use covers during combat", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Can Use Covers", (int)(uintptr_t)(&v10) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Can Use Covers", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v25), v5, 1, 1, (int)(uintptr_t)(&v26), 1);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  { g4_std::string::Destroy(&v26); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_846D60  (binary VA: 0x0)
// Original: sub_846D60
// ----------------------------------------------------------------------------
int sub_846D60(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint8_t *v3;
  uint8_t *v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  uint8_t v8;
  grapher::ActorVariable::Self *v9;
  uint8_t v10;
  grapher::ActorVariable::Self *v11;
  uint8_t v12;
  grapher::ActorVariable::Self *v13;
  uint8_t v14;
  grapher::ActorVariable::Self *v15;
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
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  void (*v37)(uint8_t *, int, uint32_t);
  int v38;
  void (*v39)(uint8_t *, int, uint32_t);
  int v40;
  void (*v41)(uint8_t *, int, uint32_t);
  int v42;
  void (*v43)(uint8_t *, int, uint32_t);
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;

  v3 = (uint8_t *)sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != nullptr )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(&dword_20D75F0) )
      {
LABEL_8:
        v36 = *(uint32_t *)(*(uint32_t *)v4 + 120);
        Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
        v8 = sub_837730((int)(uintptr_t)(a1), Variable, a3, v16, v21, v26, v31, v36, v44, v49);
        v37(v4, 118, v8);
        v38 = *(uint32_t *)(*(uint32_t *)v4 + 120);
        v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
        v10 = sub_837730((int)(uintptr_t)(a1), v9, a3, v17, v22, v27, v32, v38, v45, v50);
        v39(v4, 119, v10);
        v40 = *(uint32_t *)(*(uint32_t *)v4 + 120);
        v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
        v12 = sub_837730((int)(uintptr_t)(a1), v11, a3, v18, v23, v28, v33, v40, v46, v51);
        v41(v4, 120, v12);
        v42 = *(uint32_t *)(*(uint32_t *)v4 + 120);
        v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
        v14 = sub_837730((int)(uintptr_t)(a1), v13, a3, v19, v24, v29, v34, v42, v47, v52);
        v43(v4, 121, v14);
        v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
        v4[2213] = sub_837730((int)(uintptr_t)(a1), v15, a3, v20, v25, v30, v35, (int)(uintptr_t)(v43), v48, v53);
      }
      else
      {
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
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


