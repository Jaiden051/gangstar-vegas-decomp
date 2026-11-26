#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameConditionIsAlive.h"

// ----------------------------------------------------------------------------
// Function: ActorGameConditionIsAlive::CreateInstance  (binary VA: 0x0)
// Original: ActorGameConditionIsAlive::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameConditionIsAlive::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x4Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameConditionIsAlive::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), -1);
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
    v3 = gll_operator_new(0x4Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameConditionIsAlive::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionIsAlive::Construct  (binary VA: 0x0)
// Original: ActorGameConditionIsAlive::ActorGameConditionIsAlive
// ----------------------------------------------------------------------------
uint32_t * ActorGameConditionIsAlive::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 14) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C408);
  *((uint32_t *)a1 + 15) = 0;
  *((uint32_t *)a1 + 18) = 0;
  *((uint32_t *)a1 + 16) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  *((uint32_t *)a1 + 17) = (uint32_t)(uintptr_t)((char *)a1 + 56);
  return (uint32_t *)((char *)a1 + 56);
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionIsAlive::Destroy  (binary VA: 0x0)
// Original: ActorGameConditionIsAlive::~ActorGameConditionIsAlive
// ----------------------------------------------------------------------------
void ActorGameConditionIsAlive::Destroy(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C408);
  g4_std::Rb_tree_LevelObject_const_pair_L_08e0f1::M_erase(
    a1 + 52,
    *(void **)(a1 + 60));
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 64) = a1 + 56;
  *(uint32_t *)(a1 + 68) = a1 + 56;
  *(uint32_t *)(a1 + 72) = 0;
  g4_std::Rb_tree_LevelObject_const_pair_L_08e0f1::M_erase(
    a1 + 52,
    nullptr);
  ActorGameBase::Destroy((grapher::ActorBase::Self *)a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C573A0  (binary VA: 0x0)
// Original: sub_C573A0
// ----------------------------------------------------------------------------
void sub_C573A0(void **a1)
{
  *a1 = &off_206C408;
  g4_std::Rb_tree_LevelObject_const_pair_L_08e0f1::M_erase(
    (int)(uintptr_t)(a1 + 13),
    a1[15]);
  a1[15] = nullptr;
  a1[16] = a1 + 14;
  a1[17] = a1 + 14;
  a1[18] = nullptr;
  g4_std::Rb_tree_LevelObject_const_pair_L_08e0f1::M_erase(
    (int)(uintptr_t)(a1 + 13),
    nullptr);
  ActorGameBase::Destroy((grapher::ActorBase::Self *)a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C4C0E0  (binary VA: 0x0)
// Original: sub_C4C0E0
// ----------------------------------------------------------------------------
int sub_C4C0E0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  uint32_t *v4;
  void *v5;
  int v6;
  int v7;
  int v8;
  g4_int128_t v9;
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
  int v21;
  int v22[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Alive (Imm=%Immediate) [C]", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Conditions", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "In", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v12, 1, -1);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Out", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v13, 0, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Alive", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 2, &v14, 0, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Dead", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddPin(a1, 3, &v15, 0, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "All Dead", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 4, &v16, 0, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "List of targets to kill or to keep alive.", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Target", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v9) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v17, 9, (char *)&v9 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Target", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v18), v5, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( DWORD1(v9) != 0 )
    G4_VCALL<void>(DWORD1(v9), 44);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Is this condtion tested once? (at the firing of this event)", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Immediate", (int)(uintptr_t)(&v9) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v20, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Immediate", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v21), v3, 1, 0, (int)(uintptr_t)(v22), 3);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v20);
  { g4_std::string::Destroy(v22); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C4DD40  (binary VA: 0x0)
// Original: sub_C4DD40
// ----------------------------------------------------------------------------
void sub_C4DD40(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  unsigned int v4;
  char *v5;
  char *v6;
  char *v7;
  int v8;
  int v9;
  char *v10;
  char *v11;
  int v12;
  char *v13;
  char *v14;
  int v15;
  char v16;
  char v17;
  uint32_t *v18;
  uint32_t *v19;
  char *v20;
  char v21;
  unsigned int v22;
  char *v23;
  char *v24;
  char v25;
  char *v26;
  char v27;
  char *v28;
  uint32_t *v29;
  char *v30;
  uint32_t v31[3];
  char *v32;
  uint32_t v33[4];
  unsigned int v34;
  int v35;
  int v36[4];
  int v37[7];

  v33[0] = (uint32_t)(uintptr_t)(v33);
  v33[1] = (uint32_t)(uintptr_t)(v33);
  sub_8560A0(a1, 0, (int)(uintptr_t)(v33), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v29 = (uint32_t *)v33[0];
  if ( (uint32_t *)v33[0] != v33 )
  {
    v27 = 0;
    v30 = (char *)a1 + 56;
    v26 = (char *)a1 + 52;
    v3 = (uint32_t *)v33[0];
LABEL_3:
    v4 = v3[2];
    v25 = 0;
    if ( v4 != 0 && G4_VCALL<uint8_t>(v4, 212) != 0 )
      v25 = G4_VCALL<int>(v4, 208) ^ 1;
    v5 = *((char **)a1 + 15);
    if ( v5 != nullptr )
    {
      v6 = (char *)a1 + 56;
      v7 = *((char **)a1 + 15);
      do
      {
        while ( v4 <= *((uint32_t *)v7 + 4) )
        {
          v6 = v7;
          v7 = *((char **)v7 + 2);
          if ( v7 == nullptr )
            goto LABEL_11;
        }
        v7 = *((char **)v7 + 3);
      }
      while ( v7 != nullptr );
LABEL_11:
      v23 = v6;
      if ( v30 != v6 )
      {
        if ( v4 >= *((uint32_t *)v6 + 4) )
          goto LABEL_19;
        v34 = v4;
        LOBYTE(v35) = 0;
        v28 = *((char **)a1 + 16);
        if ( v28 == v6 )
        {
          sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), (int)(uintptr_t)(v6), (int)(uintptr_t)(v6), (int *)&v34);
          v6 = v32;
          goto LABEL_19;
        }
        v6 = (char *)sub_1904940(v6);
        if ( v4 > *((uint32_t *)v6 + 4) )
        {
          if ( *((uint32_t *)v6 + 3) != 0 )
          {
            v8 = opNew(0x18u);
            if ( v8 != -16 )
            {
              v9 = v35;
              *(uint32_t *)(v8 + 16) = v34;
              *(uint32_t *)(v8 + 20) = v9;
            }
            v24 = (char *)v8;
            sub_1904970(1, v8, v23, v30);
            ++*((uint32_t *)a1 + 18);
            v6 = v24;
            goto LABEL_19;
          }
          goto LABEL_66;
        }
        while ( 1 )
        {
          v22 = *((uint32_t *)v5 + 4);
          if ( v4 < v22 )
          {
            v20 = *((char **)v5 + 2);
            v21 = 1;
            if ( v20 == nullptr )
              goto LABEL_60;
          }
          else
          {
            v20 = *((char **)v5 + 3);
            v21 = 0;
            if ( v20 == nullptr )
            {
LABEL_60:
              v6 = v5;
              if ( v21 == 0 )
              {
                if ( v4 > v22 )
                  goto LABEL_62;
LABEL_19:
                if ( v25 != v6[20] )
                {
                  v10 = *((char **)a1 + 15);
                  if ( v10 == nullptr )
                    goto LABEL_72;
                  v11 = (char *)a1 + 56;
                  do
                  {
                    while ( v4 <= *((uint32_t *)v10 + 4) )
                    {
                      v11 = v10;
                      v10 = *((char **)v10 + 2);
                      if ( v10 == nullptr )
                        goto LABEL_25;
                    }
                    v10 = *((char **)v10 + 3);
                  }
                  while ( v10 != nullptr );
LABEL_25:
                  if ( v30 == v11 )
                  {
LABEL_72:
                    v36[0] = v4;
                    LOBYTE(v36[1]) = 0;
                    if ( *((uint32_t *)a1 + 18) != 0 )
                    {
                      v12 = *((uint32_t *)a1 + 17);
                      if ( v4 > *(uint32_t *)(v12 + 16) )
                        goto LABEL_76;
                    }
                    goto LABEL_74;
                  }
                  if ( v4 < *((uint32_t *)v11 + 4) )
                  {
                    v36[0] = v4;
                    LOBYTE(v36[1]) = 0;
                    if ( *((char **)a1 + 16) == v11 )
                      goto LABEL_30;
                    v12 = sub_1904940(v11);
                    if ( v4 > *(uint32_t *)(v12 + 16) )
                    {
                      if ( *(uint32_t *)(v12 + 12) != 0 )
                      {
LABEL_30:
                        sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), (int)(uintptr_t)(v11), (int)(uintptr_t)(v11), v36);
                        v11 = v32;
                        goto LABEL_31;
                      }
LABEL_76:
                      sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), 0, v12, v36);
                      v11 = v32;
                      goto LABEL_31;
                    }
LABEL_74:
                    sub_C3FA40((int)(uintptr_t)(v31), (int)(uintptr_t)(v26), v36);
                    v11 = (char *)v31[0];
                  }
LABEL_31:
                  v11[20] = v25;
                  v13 = *((char **)a1 + 15);
                  if ( v13 == nullptr )
                    goto LABEL_69;
                  v14 = (char *)a1 + 56;
                  do
                  {
                    while ( v4 <= *((uint32_t *)v13 + 4) )
                    {
                      v14 = v13;
                      v13 = *((char **)v13 + 2);
                      if ( v13 == nullptr )
                        goto LABEL_36;
                    }
                    v13 = *((char **)v13 + 3);
                  }
                  while ( v13 != nullptr );
LABEL_36:
                  if ( v30 == v14 )
                  {
LABEL_69:
                    v37[0] = v4;
                    LOBYTE(v37[1]) = 0;
                    if ( *((uint32_t *)a1 + 18) != 0 )
                    {
                      v15 = *((uint32_t *)a1 + 17);
                      if ( v4 > *(uint32_t *)(v15 + 16) )
                        goto LABEL_77;
                    }
                    goto LABEL_71;
                  }
                  if ( v4 < *((uint32_t *)v14 + 4) )
                  {
                    v37[0] = v4;
                    LOBYTE(v37[1]) = 0;
                    if ( *((char **)a1 + 16) == v14 )
                      goto LABEL_41;
                    v15 = sub_1904940(v14);
                    if ( v4 > *(uint32_t *)(v15 + 16) )
                    {
                      if ( *(uint32_t *)(v15 + 12) != 0 )
                      {
LABEL_41:
                        sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), (int)(uintptr_t)(v14), (int)(uintptr_t)(v14), v37);
                        v14 = v32;
                        goto LABEL_42;
                      }
LABEL_77:
                      sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), 0, v15, v37);
                      v14 = v32;
                      goto LABEL_42;
                    }
LABEL_71:
                    sub_C3FA40((int)(uintptr_t)(v31), (int)(uintptr_t)(v26), v37);
                    v14 = (char *)v31[0];
                  }
LABEL_42:
                  if ( v14[20] != 0 )
                    grapher::ActorBase::FireEvent(a1, 2, a3);
                  else
                    grapher::ActorBase::FireEvent(a1, 3, a3);
                }
                if ( v4 != 0 && G4_VCALL<uint8_t>(v4, 212) != 0 )
                {
                  v16 = G4_VCALL<int>(v4, 208);
                  v17 = v27;
                  if ( v16 != 1 )
                    v17 = 1;
                  v27 = v17;
                }
                v3 = (uint32_t *)*v29;
                v29 = (uint32_t *)*v29;
                if ( v29 == v33 )
                {
                  if ( v27 != 0 )
                    goto LABEL_51;
                  goto LABEL_75;
                }
                goto LABEL_3;
              }
              if ( v28 != v5 )
              {
                v6 = (char *)sub_19048F0(v5);
                if ( v4 <= *((uint32_t *)v6 + 4) )
                  goto LABEL_19;
LABEL_62:
                sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), 0, (int)(uintptr_t)(v5), (int *)&v34);
LABEL_67:
                v6 = v32;
                goto LABEL_19;
              }
LABEL_66:
              sub_C3F980((int *)&v32, (int)(uintptr_t)(v26), 0, (int)(uintptr_t)(v6), (int *)&v34);
              goto LABEL_67;
            }
          }
          v5 = v20;
        }
      }
    }
    v34 = v4;
    LOBYTE(v35) = 0;
    if ( *((uint32_t *)a1 + 18) == 0 || (v6 = *((char **)a1 + 17), v4 <= *((uint32_t *)v6 + 4)) )
    {
      sub_C3FA40((int)(uintptr_t)(v31), (int)(uintptr_t)(v26), (int *)&v34);
      v6 = (char *)v31[0];
      goto LABEL_19;
    }
    goto LABEL_66;
  }
LABEL_75:
  grapher::ActorBase::FireEvent(a1, 4, a3);
  G4_VCALL<void>(a1, 28, a3);
LABEL_51:
  v18 = (uint32_t *)v33[0];
  if ( (uint32_t *)v33[0] != v33 )
  {
    while ( 1 )
    {
      v19 = (uint32_t *)*v18;
      opDelete(v18);
      if ( v19 == v33 )
        break;
      v18 = v19;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C57240  (binary VA: 0x0)
// Original: sub_C57240
// ----------------------------------------------------------------------------
void sub_C57240(void **a1, grapher::ActorContext::Self *a2)
{
  void **i;
  void *v3;
  void **v4;
  bool v5;
  void **v6;
  void *v7[9];

  grapher::ActorBase::Cancel((grapher::ActorBase::Self *)a1, a2);
  v7[0] = v7;
  v7[1] = v7;
  sub_8560A0((grapher::ActorBase::Self *)a1, 0, (int)(uintptr_t)(v7), (int)(uintptr_t)(a2), 0x7FFFFFFF);
  for ( i = (void **)v7[0]; i != v7; i = (void **)*i )
  {
    v3 = i[2];
    if ( v3 != nullptr )
      G4_VCALL<void>(v3, 272, 0);
  }
  g4_std::Rb_tree_LevelObject_const_pair_L_08e0f1::M_erase(
    (int)(uintptr_t)(a1 + 13),
    a1[15]);
  a1[16] = a1 + 14;
  a1[17] = a1 + 14;
  v4 = (void **)v7[0];
  v5 = v7[0] == v7;
  a1[15] = nullptr;
  a1[18] = nullptr;
  if ( !v5 )
  {
    while ( 1 )
    {
      v6 = (void **)*v4;
      opDelete(v4);
      if ( v6 == v7 )
        break;
      v4 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C514C0  (binary VA: 0x0)
// Original: sub_C514C0
// ----------------------------------------------------------------------------
void sub_C514C0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  unsigned int v4;
  char *v5;
  char *v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  grapher::ActorVariable::Self *Variable;
  uint32_t *v12;
  int v13;
  char *v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;
  char *v19;
  int v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  char *v29;
  int v30;
  int v31;
  char *v32;
  char *v33;
  char *v34;
  char v35;
  uint32_t *i;
  uint32_t v37[3];
  char *v38;
  unsigned int v39;
  int v40;
  int v41[2];
  uint32_t v42[5];

  v42[0] = (uint32_t)(uintptr_t)(v42);
  v42[1] = (uint32_t)(uintptr_t)(v42);
  sub_8560A0(a1, 0, (int)(uintptr_t)(v42), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (uint32_t *)v42[0];
  for ( i = (uint32_t *)v42[0]; i != v42; i = (uint32_t *)*i )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = v3[2];
        if ( v4 != 0 )
          break;
LABEL_32:
        v3 = (uint32_t *)*v3;
        i = v3;
        if ( v3 == v42 )
          goto LABEL_33;
      }
      v35 = 0;
      if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v4 + 212))(v3[2]) != 0 )
        v35 = G4_VCALL<int>(v4, 208) ^ 1;
      v5 = *((char **)a1 + 15);
      v29 = (char *)a1 + 56;
      if ( v5 == nullptr )
        goto LABEL_60;
      v6 = (char *)a1 + 56;
      do
      {
        while ( v4 <= *((uint32_t *)v5 + 4) )
        {
          v6 = v5;
          v5 = *((char **)v5 + 2);
          if ( v5 == nullptr )
            goto LABEL_10;
        }
        v5 = *((char **)v5 + 3);
      }
      while ( v5 != nullptr );
LABEL_10:
      v29 = (char *)a1 + 56;
      v28 = (int)(uintptr_t)(v6);
      if ( (char *)a1 + 56 == v6 )
      {
LABEL_60:
        v18 = *((uint32_t *)a1 + 18);
        v39 = v4;
        LOBYTE(v40) = 0;
        v19 = (char *)a1 + 52;
        if ( v18 != 0 && (v20 = *((uint32_t *)a1 + 17), v4 > *(uint32_t *)(v20 + 16)) )
        {
          sub_C3F980((int *)&v38, (int)(uintptr_t)(v19), 0, v20, (int *)&v39);
          v6 = v38;
        }
        else
        {
          sub_C3FA40((int)(uintptr_t)(v37), (int)(uintptr_t)(v19), (int *)&v39);
          v6 = (char *)v37[0];
        }
      }
      else if ( v4 < *((uint32_t *)v6 + 4) )
      {
        v7 = *((uint32_t *)a1 + 16) == (uint32_t)(uintptr_t)(v6);
        v39 = v4;
        LOBYTE(v40) = 0;
        if ( v7 )
        {
          sub_C3F980((int *)&v38, (int)(uintptr_t)(a1) + 52, (int)(uintptr_t)(v6), (int)(uintptr_t)(v6), (int *)&v39);
          v6 = v38;
        }
        else
        {
          v32 = (char *)a1 + 52;
          v8 = sub_1904940(v6);
          if ( v4 <= *(uint32_t *)(v8 + 16) )
          {
            sub_C3FA40((int)(uintptr_t)(v37), (int)(uintptr_t)(v32), (int *)&v39);
            v6 = (char *)v37[0];
          }
          else if ( *(uint32_t *)(v8 + 12) != 0 )
          {
            v9 = opNew(0x18u);
            if ( v9 != -16 )
            {
              v10 = v40;
              *(uint32_t *)(v9 + 16) = v39;
              *(uint32_t *)(v9 + 20) = v10;
            }
            v33 = (char *)v9;
            sub_1904970(1, v9, v28, v29);
            ++*((uint32_t *)a1 + 18);
            v6 = v33;
          }
          else
          {
            sub_C3F980((int *)&v38, (int)(uintptr_t)(v32), 0, v8, (int *)&v39);
            v6 = v38;
          }
        }
      }
      v6[20] = v35;
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
      if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v23, v24, v25, v26, v27, v28, (int)(uintptr_t)(v29)) != 0 )
        break;
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
      v3 = (uint32_t *)*i;
      i = (uint32_t *)*i;
      if ( i == v42 )
        goto LABEL_33;
    }
    v12 = *((uint32_t **)a1 + 15);
    if ( v12 == nullptr )
      goto LABEL_50;
    v13 = v30;
    do
    {
      while ( v4 <= v12[4] )
      {
        v13 = (int)(uintptr_t)(v12);
        v12 = (uint32_t *)v12[2];
        if ( v12 == nullptr )
          goto LABEL_24;
      }
      v12 = (uint32_t *)v12[3];
    }
    while ( v12 != nullptr );
LABEL_24:
    if ( v30 == v13 )
    {
LABEL_50:
      v21 = *((uint32_t *)a1 + 18);
      v41[0] = v4;
      LOBYTE(v41[1]) = 0;
      v22 = (char *)a1 + 52;
      if ( v21 != 0 && v4 > *(uint32_t *)(*((uint32_t *)a1 + 17) + 16) )
      {
        sub_C3F980((int *)&v38, (int)(uintptr_t)(v22), 0, *((uint32_t *)a1 + 17), v41);
        v13 = (int)(uintptr_t)(v38);
      }
      else
      {
        sub_C3FA40((int)(uintptr_t)(v37), (int)(uintptr_t)(v22), v41);
        v13 = v37[0];
      }
    }
    else
    {
      if ( v4 >= *(uint32_t *)(v13 + 16) )
        goto LABEL_30;
      v7 = *((uint32_t *)a1 + 16) == v13;
      v41[0] = v4;
      LOBYTE(v41[1]) = 0;
      v14 = (char *)a1 + 52;
      if ( v7 )
      {
LABEL_29:
        sub_C3F980((int *)&v38, (int)(uintptr_t)(v14), v13, v13, v41);
        v13 = (int)(uintptr_t)(v38);
        goto LABEL_30;
      }
      v31 = v13;
      v34 = (char *)a1 + 52;
      v15 = sub_1904940(v13);
      v13 = v31;
      v14 = (char *)a1 + 52;
      if ( v4 <= *(uint32_t *)(v15 + 16) )
      {
        sub_C3FA40((int)(uintptr_t)(v37), (int)(uintptr_t)(v34), v41);
        v13 = v37[0];
      }
      else
      {
        if ( *(uint32_t *)(v15 + 12) != 0 )
          goto LABEL_29;
        sub_C3F980((int *)&v38, (int)(uintptr_t)(v34), 0, v15, v41);
        v13 = (int)(uintptr_t)(v38);
      }
    }
LABEL_30:
    if ( *(uint8_t *)(v13 + 20) == 0 )
    {
      grapher::ActorBase::FireEvent(a1, 3, a3);
      v3 = i;
      goto LABEL_32;
    }
    grapher::ActorBase::FireEvent(a1, 2, a3);
    v3 = (uint32_t *)*i;
  }
LABEL_33:
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v16 = (uint32_t *)v42[0];
  if ( (uint32_t *)v42[0] != v42 )
  {
    while ( 1 )
    {
      v17 = (uint32_t *)*v16;
      opDelete(v16);
      if ( v17 == v42 )
        break;
      v16 = v17;
    }
  }
}


