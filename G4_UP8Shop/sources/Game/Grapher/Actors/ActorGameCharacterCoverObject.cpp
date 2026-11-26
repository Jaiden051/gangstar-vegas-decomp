#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterCoverObject.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterCoverObject::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterCoverObject::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterCoverObject::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterCoverObject::ActorGameCharacterCoverObject(v3, -1);
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
    ActorGameCharacterCoverObject::ActorGameCharacterCoverObject(v3, a1);
  }
  return v3;
}



// Constructor (0xc66390):
int (**ActorGameCharacterCoverObject::ActorGameCharacterCoverObject(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CCA8);
  return (int (**)(int))(uintptr_t)(&off_206CCA8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterCoverObject::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterCoverObject::~ActorGameCharacterCoverObject
// ----------------------------------------------------------------------------
void ActorGameCharacterCoverObject::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CCA8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B1D0  (binary VA: 0x0)
// Original: sub_C5B1D0
// ----------------------------------------------------------------------------
void sub_C5B1D0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CCA8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5D330  (binary VA: 0x0)
// Original: sub_C5D330
// ----------------------------------------------------------------------------
int sub_C5D330(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  void *v5;
  uint32_t *v6;
  void *v7;
  uint32_t *v8;
  void *v9;
  uint32_t *v10;
  void *v11;
  void *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint8_t v18[20];
  uint32_t *v19;
  uint32_t *v20;
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
  int v38;
  int v39;
  int v40;
  int v41;
  int v42[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Cover Object", (int)(uintptr_t)(&v13));
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "AI", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Enter", (int)(uintptr_t)(&v17) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v38, 1, -1);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Exit", (int)(uintptr_t)(v18));
  grapher::ActorBase::AddPin(a1, 1, &v39, 1, -1);
  g4_std::string::Destroy(&v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Get Strafe", (int)(uintptr_t)(&v18[1]));
  grapher::ActorBase::AddPin(a1, 2, &v40, 1, -1);
  g4_std::string::Destroy(&v40);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Get Type", (int)(uintptr_t)(&v18[2]));
  grapher::ActorBase::AddPin(a1, 3, &v41, 1, -1);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v42), "Out", (int)(uintptr_t)(&v18[3]));
  grapher::ActorBase::AddPin(a1, 4, v42, 0, -1);
  g4_std::string::Destroy(v42);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "The character in cover", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Target", (int)(uintptr_t)(&v14));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v18[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v23, 9, &v18[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Target", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v24), v7, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  if ( *(uint32_t *)&v18[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v18[4] + 44))(*(uint32_t *)&v18[4]);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Cover object to enter (in case random is false)", (int)(uintptr_t)(&v15) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Cover", (int)(uintptr_t)(&v14) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v19 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v26, 9, &v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Cover", (int)(uintptr_t)(&v15));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v27), v9, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  if ( v19 != nullptr )
    G4_VCALL<void>(v19, 44);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Select random cover to enter", (int)(uintptr_t)(&v16));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Random", (int)(uintptr_t)(&v15) + 2);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v29, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Random", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v30), v5, 1, 1, (int)(uintptr_t)(&v31), 3);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Random strafe point returned", (int)(uintptr_t)(&v16) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Strafe", (int)(uintptr_t)(&v16) + 1);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v20 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v32, 9, &v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Strafe", (int)(uintptr_t)(&v16) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v33), v11, 1, 0, (int)(uintptr_t)(&v34), 2);
  g4_std::string::Destroy(&v33);
  if ( v20 != nullptr )
    G4_VCALL<void>(v20, 44);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Cover type returned", (int)(uintptr_t)(&v17) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Type", (int)(uintptr_t)(&v17));
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v35, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Type", (int)(uintptr_t)(&v17) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v36), v12, 1, 0, (int)(uintptr_t)(&v37), 2);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v35);
  return ((g4_std::string::Destroy(&v37)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C681F0  (binary VA: 0x0)
// Original: sub_C681F0
// ----------------------------------------------------------------------------
int sub_C681F0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  int v4;
  uint32_t *v5;
  int *v6;
  int v8;
  int *v9;
  int v10;
  int v11;
  grapher::ActorVariable::Self *Variable;
  int v13;
  void *v14;
  int v15;
  int *v16;
  int v17;
  int *v18;
  unsigned int v19;
  unsigned int v20;
  int *v21;
  char *v22;
  int v23;
  int *v24;
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
  unsigned int v36;
  int v37;
  grapher::ActorContext::Self *v38;
  int v39;
  int v40;
  char v41[4];
  void *v42;
  uint8_t *v43;
  int v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51[3];
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58[9];

  LODWORD(v58[5]) = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v35 = a2;
  v38 = a3;
  v4 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v5 = (uint32_t *)v4;
  if ( v4 == 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
  v6 = (int *)G4_VCALL<int>(v4, 16);
  if ( v6 == nullptr )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
  while ( v6 != (int *)(&dword_20D75F0) )
  {
    v6 = (int *)v6[1];
    if ( v6 == nullptr )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
  }
  if ( v35 == 1 )
  {
    sub_923A70(v5);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
  }
  if ( v35 <= 1 )
  {
    if ( v35 == 0 )
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
      if ( (uint8_t)sub_837730((int)(uintptr_t)(v3), Variable, v38, v25, v26, v27, v28, v29, v30, v31) != 0 )
      {
        v13 = v5[574];
        v42 = nullptr;
        v43 = nullptr;
        v44 = 0;
        sub_92D9F0((int)(uintptr_t)(v5), v13, (int)(uintptr_t)(&v42));
        v14 = v42;
        if ( v43 != v42 )
        {
          v36 = lrand48() % (unsigned int)((v43 - (uint8_t *)v42) >> 2);
          sub_9239B0((int)(uintptr_t)(v5), *((uint32_t *)v42 + v36));
          (*(void (**)(float *))(**((uint32_t **)v42 + v36) + 52))(&v48);
          (*(void (**)(float *))(*v5 + 52))(&v45);
          v14 = v42;
          if ( (float)((float)((float)((float)(v46 - v49) * (float)(v46 - v49))
                             + (float)((float)(v45 - v48) * (float)(v45 - v48)))
                     + (float)((float)(v47 - v50) * (float)(v47 - v50))) > 10000.0 )
          {
            (*(void (**)(float *))(**((uint32_t **)v42 + v36) + 52))(v51);
            sub_9B4460((int)(uintptr_t)(v5), v51, 0, 100, 0, 3);
            v14 = v42;
          }
        }
        if ( v14 != nullptr )
          opDelete(v14);
      }
      else
      {
        v23 = sub_857260(v3, 1, (int)(uintptr_t)(v38));
        if ( v23 != 0 )
        {
          v34 = v23;
          v24 = (int *)G4_VCALL<int>(v23, 16);
          if ( v24 != nullptr )
          {
            if ( v24 == (int *)(&dword_20D70F4) )
            {
LABEL_46:
              sub_9239B0((int)(uintptr_t)(v5), v34);
              (*(void (**)(float *))(*(uint32_t *)v34 + 52))(&v55);
              (*(void (**)(float *))(*v5 + 52))(&v52);
              if ( (float)((float)((float)((float)(v53 - v56) * (float)(v53 - v56))
                                 + (float)((float)(v52 - v55) * (float)(v52 - v55)))
                         + (float)((float)(v54 - v57) * (float)(v54 - v57))) > 10000.0 )
              {
                (*(void (**)(float *))(*(uint32_t *)v34 + 52))(v58);
                sub_9B4460((int)(uintptr_t)(v5), v58, 0, 100, 0, 3);
              }
            }
            else
            {
              while ( 1 )
              {
                v24 = (int *)v24[1];
                if ( v24 == nullptr )
                  break;
                if ( v24 == (int *)(&dword_20D70F4) )
                  goto LABEL_46;
              }
            }
          }
        }
      }
    }
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
  }
  if ( v35 == 2 )
  {
    v15 = sub_857260(v3, 1, (int)(uintptr_t)(v38));
    if ( v15 != 0 )
    {
      v33 = v15;
      v16 = (int *)G4_VCALL<int>(v15, 16);
      v17 = v33;
      if ( v16 != nullptr )
      {
        if ( v16 == (int *)(&dword_20D70F4) )
          goto LABEL_36;
        while ( 1 )
        {
          v16 = (int *)v16[1];
          if ( v16 == nullptr )
            break;
          if ( v16 == (int *)(uintptr_t)(&dword_20D70F4) )
            goto LABEL_36;
        }
      }
    }
    v17 = v5[546];
    if ( v17 == 0 )
    {
      v21 = (int *)v41;
      g4_std::string::construct_copy(v41, &unk_20D67EC);
      sub_C5C710(v3, (int)(uintptr_t)(v41), v38);
LABEL_38:
      g4_std::string::Destroy(v21);
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
    }
LABEL_36:
    v18 = (int *)sub_8EB590(v17);
    if ( v18[1] == *v18 )
    {
      v21 = (int *)((char *)&v39 + 1);
      g4_std::string::construct_copy((char *)&v39 + 1, &unk_20D67EC);
      sub_C5C710(v3, (int)(uintptr_t)(&v39) + 1, v38);
    }
    else
    {
      v19 = lrand48();
      v37 = *v18;
      v20 = v19 % ((v18[1] - *v18) >> 2);
      v21 = &v40;
      v22 = (char *)(*(int (**)(uint32_t))(**(uint32_t **)(v37 + 4 * v20) + 44))(*(uint32_t *)(v37 + 4 * v20));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), v22, (int)(uintptr_t)(&v39));
      sub_C5C710(v3, (int)(uintptr_t)(&v40), v38);
    }
    goto LABEL_38;
  }
  if ( v35 == 3 )
  {
    v8 = sub_857260(v3, 1, (int)(uintptr_t)(v38));
    if ( v8 != 0 )
    {
      v32 = v8;
      v9 = (int *)G4_VCALL<int>(v8, 16);
      v10 = v32;
      if ( v9 != nullptr )
      {
        if ( v9 == (int *)(uintptr_t)(&dword_20D70F4) )
          goto LABEL_19;
        while ( 1 )
        {
          v9 = (int *)v9[1];
          if ( v9 == nullptr )
            break;
          if ( v9 == (int *)(uintptr_t)(&dword_20D70F4) )
            goto LABEL_19;
        }
      }
    }
    v10 = v5[546];
    v11 = -1;
    if ( v10 == 0 )
    {
LABEL_20:
      sub_836F40(v3, 4, v11, v38);
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
    }
LABEL_19:
    v11 = *(uint32_t *)(v10 + 488);
    goto LABEL_20;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 4, v38));
}


