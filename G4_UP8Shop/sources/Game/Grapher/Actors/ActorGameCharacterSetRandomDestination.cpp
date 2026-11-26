#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetRandomDestination.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetRandomDestination::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterSetRandomDestination::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterSetRandomDestination::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterSetRandomDestination::ActorGameCharacterSetRandomDestination(v3, -1);
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
    ActorGameCharacterSetRandomDestination::ActorGameCharacterSetRandomDestination(v3, a1);
  }
  return v3;
}



// Constructor (0xc66920):
int (**ActorGameCharacterSetRandomDestination::ActorGameCharacterSetRandomDestination(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D2A8);
  return (int (**)(int))(uintptr_t)(&off_206D2A8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetRandomDestination::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterSetRandomDestination::~ActorGameCharacterSetRandomDestination
// ----------------------------------------------------------------------------
void ActorGameCharacterSetRandomDestination::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D2A8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B750  (binary VA: 0x0)
// Original: sub_C5B750
// ----------------------------------------------------------------------------
void sub_C5B750(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D2A8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C64410  (binary VA: 0x0)
// Original: sub_C64410
// ----------------------------------------------------------------------------
int sub_C64410(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  void *v8;
  void *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
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
  int v31[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Set Destination", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "AI", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "In", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v30, 1, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Out", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddPin(a1, 1, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The character setting his destination.", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Subject", (int)(uintptr_t)(&v10) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v14 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v18, 9, &v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Subject", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v19), v5, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v14 != nullptr )
    G4_VCALL<void>(v14, 44);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "The wanted destination.", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Target", (int)(uintptr_t)(&v11) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v15 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v21, 9, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Target", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v22), v7, 1, 0, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "If it's a random destination.", (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Random", (int)(uintptr_t)(&v12));
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v24, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Random", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v25), v8, 1, 0, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "If the subject should be fleeing away from the threat.", (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Flee threat", (int)(uintptr_t)(&v12) + 3);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v27, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Flee threat", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v28), v9, 1, 0, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v27);
  return ((g4_std::string::Destroy(&v29)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C67340  (binary VA: 0x0)
// Original: sub_C67340
// ----------------------------------------------------------------------------
int sub_C67340(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int *v8;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v10;
  int v11;
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
  char v23;
  char v24;
  int v25;
  grapher::ActorContext::Self *v26;
  uint32_t v27[4];
  uint32_t v28[4];
  uint8_t v29[12];
  uint8_t v30[12];
  int v31;
  int v32;
  int v33;
  int v34;
  uint8_t v35[12];
  uint32_t v36[9];

  v36[5] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v26 = a3;
  v4 = sub_857260(a1, 0, a3);
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = (int *)G4_VCALL<int>(v4, 16);
    if ( v6 != nullptr )
    {
      if ( v6 == (int *)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v6 = (int *)v6[1];
        if ( v6 == nullptr )
          break;
        if ( v6 == (int *)(&dword_20D75F0) )
          goto LABEL_8;
      }
    }
  }
  v5 = 0;
LABEL_8:
  v7 = sub_857260(v3, 1, v26);
  v25 = v7;
  if ( v7 != 0 )
  {
    v8 = (int *)G4_VCALL<int>(v7, 16);
    if ( v8 != nullptr )
    {
      if ( v8 == (int *)(&dword_20DE814) )
        goto LABEL_15;
      while ( 1 )
      {
        v8 = (int *)v8[1];
        if ( v8 == nullptr )
          break;
        if ( v8 == (int *)(&dword_20DE814) )
          goto LABEL_15;
      }
    }
  }
  v25 = 0;
LABEL_15:
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
  v24 = sub_837730(v3, Variable, v26);
  v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
  v23 = sub_837730(v3, v10, v26);
  if ( v5 != 0
    && (uint8_t)sub_986060(v5) == 0
    && ((unsigned int)(*(uint32_t *)(v5 + 4296) - 2) <= 2
     || (v11 = *(uint32_t *)(v5 + 4280)) == 0
     || *(uint32_t *)(v11 + 532) - *(uint32_t *)(v11 + 528) <= 19) )
  {
    if ( (uint8_t)sub_97EBD0(v5) != 0
      && (G4_VCALL<int>(v5, 456) == 0
       || (v17 = *(uint32_t *)(v5 + 1872), v18 = *(uint32_t *)(v5 + 1876), (v17 & 0x100) == 0)
       || v17 < 0
       || (v18 & 1) != 0
       || (v18 & 4) != 0) )
    {
      (*(void (**)(uint8_t *))(*(uint32_t *)v5 + 52))(v29);
      sub_9BBB00(v30);
      sub_9B4460(v5, v30, 0, 100, 0, 3);
    }
    else if ( v25 != 0
           || G4_VCALL<int>(v5, 116, 136) == 0
           || (*(uint8_t *)(v5 + 1875) & 0x10) != 0 )
    {
      if ( v23 != 0 && dword_20D75D0 != 0 )
      {
        (*(void (**)(int *, int))(*(uint32_t *)dword_20D75D0 + 52))(&v32, dword_20D75D0);
        (*(void (**)(int *))(*(uint32_t *)v5 + 52))(&v31);
        if ( G4_VCALL<int>(v5, 456) == 0
          || (v19 = *(uint32_t *)(v5 + 1872), v20 = *(uint32_t *)(v5 + 1876), (v19 & 0x100) == 0)
          || v19 < 0
          || (v20 & 1) != 0
          || (v20 & 4) != 0 )
        {
          G4_VCALL<void>(v5, 456);
        }
        (*(void (**)(int *, int))(*(uint32_t *)dword_20D75D0 + 52))(&v33, dword_20D75D0);
        if ( G4_VCALL<int>(v5, 456) == 0
          || (v21 = *(uint32_t *)(v5 + 1872), v22 = *(uint32_t *)(v5 + 1876), (v21 & 0x100) == 0)
          || v21 < 0
          || (v22 & 1) != 0
          || (v22 & 4) != 0 )
        {
          G4_VCALL<void>(v5, 456);
        }
      }
      else
      {
        (*(void (**)(int *, int))(*(uint32_t *)v5 + 52))(&v34, v5);
        if ( G4_VCALL<int>(v5, 456) != 0
          && (v13 = *(uint32_t *)(v5 + 1872), v14 = *(uint32_t *)(v5 + 1876), (v13 & 0x100) != 0)
          && v13 >= 0
          && (v14 & 1) == 0
          && (v14 & 4) == 0
          || G4_VCALL<int>(v5, 456) != 0 && ((v13 = *(uint32_t *)(v5 + 1872)) & 0x800) != 0 )
        {
          if ( (v13 & 0x800000) != 0 )
            lrand48();
        }
      }
      if ( (G4_VCALL<int>(v5, 456) != 0
         && (v15 = *(uint32_t *)(v5 + 1872), v16 = *(uint32_t *)(v5 + 1876), (v15 & 0x100) != 0)
         && v15 >= 0
         && (v16 & 1) == 0
         && (v16 & 4) == 0
         || G4_VCALL<int>(v5, 456) != 0 && ((v15 = *(uint32_t *)(v5 + 1872)) & 0x800) != 0)
        && (v15 & 0x800000) != 0 )
      {
        if ( v25 != 0 && v23 == 0 )
        {
          (*(void (**)(uint8_t *))(*(uint32_t *)v25 + 52))(v35);
          sub_9B4460(v5, v35, 3, 500, 0, 4);
        }
        else
        {
          if ( v24 != 0 )
            sub_9BBB00(v27);
          else
            memset(v27, 0, 12);
          sub_9B4460(v5, v27, 1, 500, 1, 2);
        }
      }
      else if ( v25 != 0 )
      {
        (*(void (**)(uint32_t *))(*(uint32_t *)v25 + 52))(v36);
        sub_9B4460(v5, v36, 0, 100, 0, 2);
      }
      else
      {
        if ( v24 != 0 )
          sub_9BBB00(v28);
        else
          memset(v28, 0, 12);
        sub_9B4460(v5, v28, 0, 100, 0, 2);
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v26));
}


