#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterAttack.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterAttack::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterAttack::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGameCharacterAttack::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterAttack::ActorGameCharacterAttack(v3, 0xFFFFFFFF);
    if ( v3 != nullptr )
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
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCharacterAttack::ActorGameCharacterAttack(v3, a1);
  }
  return v3;
}



// Constructor (0x854dd0):
int (**ActorGameCharacterAttack::ActorGameCharacterAttack(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D9E8);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205D9E8));
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterAttack::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterAttack::~ActorGameCharacterAttack
// ----------------------------------------------------------------------------
void ActorGameCharacterAttack::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D7D0  (binary VA: 0x0)
// Original: sub_84D7D0
// ----------------------------------------------------------------------------
void sub_84D7D0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84E480  (binary VA: 0x0)
// Original: sub_84E480
// ----------------------------------------------------------------------------
int sub_84E480(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint8_t v16[20];
  uint32_t *v17;
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
  int v37;
  int v38[4];

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "{Base}", (int)(uintptr_t)(&v16[2]));
  grapher::ActorBase::SetDisplayName(a1, &v37);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v38), (char *)&unk_1B15112, (int)(uintptr_t)(&v16[3]));
  grapher::ActorBase::SetCategoryName(a1, v38);
  g4_std::string::Destroy(v38);
  grapher::ActorBase::SetArraySize(a1, 2, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Attack", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Characters", (int)(uintptr_t)(&v12));
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "In", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Out", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v21, 0, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "List of NPCs who will attack", (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Attacker", (int)(uintptr_t)(&v12) + 3);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v16[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v22, 9, &v16[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Attacker", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v23), v5, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  if ( *(uint32_t *)&v16[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v16[4] + 44))(*(uint32_t *)&v16[4]);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "List of targets to attack", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Target", (int)(uintptr_t)(&v13) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v17 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v25, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Target", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v26), v7, 1, 1, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "NPC won't attack until at least at this range", (int)(uintptr_t)(&v14) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Min Range", (int)(uintptr_t)(&v14) + 1);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v28, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Min Range", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v29), v8, 1, 1, (int)(uintptr_t)(&v30), 3);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v33),
    "If False, this actor will never stop trying to attack it's target until it's dead",
    (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Can Lose Target", (int)(uintptr_t)(&v15));
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v31, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Can Lose Target", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v32), v9, 1, 1, (int)(uintptr_t)(&v33), 3);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v31);
  g4_std::string::Destroy(&v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Can the character use free running.", (int)(uintptr_t)(&v16[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Free running", (int)(uintptr_t)(&v15) + 3);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v34, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Free running", (int)(uintptr_t)(v16));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v35), v10, 1, 0, (int)(uintptr_t)(&v36), 1);
  g4_std::string::Destroy(&v35);
  g4_std::string::Destroy(&v34);
  { g4_std::string::Destroy(&v36); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_859E00  (binary VA: 0x0)
// Original: sub_859E00
// ----------------------------------------------------------------------------
int sub_859E00(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void ***v3;
  void **v4;
  void **v5;
  void *v6;
  int *v7;
  int v8;
  void ***v9;
  void **v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  unsigned int v15;
  void **v16;
  unsigned int v17;
  int v18;
  int v19;
  char v20;
  uint32_t *v21;
  uint8_t v22;
  grapher::ActorVariable::Self *v23;
  grapher::ActorVariable::Self *v24;
  int v25;
  int v26;
  void **v27;
  void **v28;
  void **v29;
  void **v30;
  uint8_t v32;
  int v33;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v35;
  void **v36;
  int v37;
  grapher::ActorContext::Self *v38;
  unsigned int v39;
  void (*v40)(uint32_t *, int, uint32_t);
  void (*v41)(uint32_t *, int, uint32_t);
  grapher::ActorBase::Self *v42;
  void **v43;
  int v44;
  void *v45[2];
  void *v46[2];
  void *v47;
  void **v48;
  uint32_t v49[9];

  v49[5] = (uint32_t)(uintptr_t)(&a1);
  v42 = a1;
  v38 = a3;
  v47 = &v47;
  v48 = &v47;
  sub_856780(a1, 1, (int)(uintptr_t)(&v47), (int)(uintptr_t)(a3), 1);
  v3 = (void ***)v47;
  if ( v47 == &v47 )
  {
    v37 = 0;
  }
  else
  {
    v37 = *((uint32_t *)v47 + 2);
    while ( 1 )
    {
      v4 = *v3;
      opDelete(v3);
      if ( v4 == &v47 )
        break;
      v3 = (void ***)v4;
    }
  }
  grapher::ActorBase::GetVariable(v42, 1);
  v35 = v38;
  sub_837C70(&v44);
  v45[0] = v45;
  v45[1] = v45;
  sub_856EF0(v38);
  v46[0] = v46;
  v46[1] = v46;
  v47 = &v47;
  v48 = &v47;
  sub_856780(v42, 1, (int)(uintptr_t)(&v47), (int)(uintptr_t)(v38), 0x7FFFFFFF);
  if ( v47 != &v47 )
  {
    v5 = (void **)v47;
    do
    {
      v6 = v5[2];
      if ( v6 != nullptr )
      {
        v36 = v5;
        v7 = (int *)G4_VCALL<int>(v6, 16);
        v5 = v36;
        if ( v7 != nullptr )
        {
          while ( v7 != (int *)(&dword_20DE814) )
          {
            v7 = (int *)v7[1];
            if ( v7 == nullptr )
              goto LABEL_15;
          }
          v8 = opNew(0xCu);
          if ( v8 != -8 )
            *(uint32_t *)(v8 + 8) = (uint32_t)(uintptr_t)(v6);
          sub_1901920(v8, v46);
          v5 = v36;
        }
      }
LABEL_15:
      v5 = (void **)*v5;
    }
    while ( v5 != &v47 );
    v9 = (void ***)v47;
    if ( v47 != &v47 )
    {
      while ( 1 )
      {
        v10 = *v9;
        opDelete(v9);
        if ( v10 == &v47 )
          break;
        v9 = (void ***)v10;
      }
    }
  }
  v43 = (void **)v45[0];
  if ( v45[0] != v45 )
  {
    v11 = v37;
    v12 = (uint32_t *)(v45[0]);
    do
    {
      while ( 1 )
      {
        v13 = (uint32_t *)v12[2];
        if ( v13 != nullptr
          && (uint8_t)sub_C170A0(v12[2]) != 0
          && G4_VCALL<uint8_t>(v13, 208) == 0 )
        {
          if ( v37 != 0 )
          {
            v14 = (uint32_t *)(v46[0]);
            v15 = lrand48();
            v16 = (void **)v46[0];
            v39 = 0;
            if ( v46[0] != v46 )
            {
              v17 = 0;
              do
              {
                v16 = (void **)*v16;
                ++v17;
              }
              while ( v16 != v46 );
              v39 = v17;
            }
            v18 = v15 % v39;
            v19 = v15 % v39 - 1;
            if ( (int)(v15 % v39) <= 0 )
            {
              v33 = v18 + 1;
              if ( v18 != 0 )
              {
                do
                {
                  ++v33;
                  v14 = (uint32_t *)v14[1];
                }
                while ( v33 != 1 );
              }
            }
            else
            {
              do
              {
                --v19;
                v14 = (uint32_t *)*v14;
              }
              while ( v19 != -1 );
            }
            v11 = v14[2];
          }
          if ( g4_std::string::compare((int)(uintptr_t)(&v44), "Random") != 0 )
          {
            if ( v11 != 0 )
            {
              sub_9A5670(v13 + 574, v11);
              v20 = sub_97FD30(v13);
              v21 = v13 + 574;
              if ( v20 == 0 )
              {
                Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v42, 2);
                v13[723] = (uint32_t)(uintptr_t)(sub_837200(v42, Variable, v38));
                v21 = v13 + 574;
              }
              sub_9A5670(v21, v11);
              (*(void (**)(uint32_t *, int))(*(uint32_t *)v11 + 52))(v49, v11);
              sub_986B50(v13, v49);
              G4_VCALL<void>(v13, 120);
              v40 = *(void (**)(uint32_t *, int, uint32_t))(*v13 + 120);
              v22 = G4_VCALL<int>(v13, 564);
              v40(v13, 188, v22);
              v23 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v42, 3);
              *((uint8_t *)v13 + 3572) = sub_837730(v42, v23, v38) ^ 1;
            }
            else
            {
              if ( v13[574] == v13[1061] )
                sub_9B71D0(v13, 0, 1);
              sub_9A5670(v13 + 574, 0);
              sub_9A5670(v13 + 574, 0);
              G4_VCALL<void>(v13, 120, 189, 0);
              G4_VCALL<void>(v13, 120, 188, 0);
              *((uint8_t *)v13 + 3572) = 0;
            }
          }
          else
          {
            G4_VCALL<void>(v13, 120, 189, 1, v35);
            v41 = *(void (**)(uint32_t *, int, uint32_t))(*v13 + 120);
            v32 = G4_VCALL<int>(v13, 564);
            v41(v13, 188, v32);
            *((uint8_t *)v13 + 3572) = 0;
          }
          if ( (v24 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v42, 4),
                *((uint8_t *)v13 + 1945) = sub_837730(v42, v24, v38),
                G4_VCALL<int>(v13, 456) != 0)
            && (v25 = v13[468], v26 = v13[469], (v25 & 0x100) != 0)
            && v25 >= 0
            && (v26 & 1) == 0
            && (v26 & 4) == 0
            || G4_VCALL<int>(v13, 456) != 0
            && (v25 = v13[468], v26 = v13[469], (v25 & 0x800) != 0) )
          {
            if ( v13[922] == 0 )
              break;
          }
        }
        v12 = (uint32_t *)(*v43);
        v43 = (void **)*v43;
        if ( v43 == v45 )
          goto LABEL_45;
      }
      v13[469] = v26;
      v13[468] = v25 | 0x800000;
      sub_9B7760(v13, 1);
      v12 = (uint32_t *)(*v43);
      v43 = (void **)*v43;
    }
    while ( v43 != v45 );
  }
LABEL_45:
  grapher::ActorBase::FireEvent(v42, 1, v38);
  v27 = (void **)v46[0];
  if ( v46[0] != v46 )
  {
    while ( 1 )
    {
      v28 = (void **)*v27;
      opDelete(v27);
      if ( v28 == v46 )
        break;
      v27 = v28;
    }
  }
  v29 = (void **)v45[0];
  if ( v45[0] != v45 )
  {
    while ( 1 )
    {
      v30 = (void **)*v29;
      opDelete(v29);
      if ( v30 == v45 )
        break;
      v29 = v30;
    }
  }
  return ((g4_std::string::Destroy(&v44)), (int)0);
}


