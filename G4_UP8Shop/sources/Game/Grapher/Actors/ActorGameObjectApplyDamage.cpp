#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectApplyDamage.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectApplyDamage::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectApplyDamage::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectApplyDamage::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectApplyDamage::ActorGameObjectApplyDamage(v3, -1);
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
    ActorGameObjectApplyDamage::ActorGameObjectApplyDamage(v3, a1);
  }
  return v3;
}



// Constructor (0xc38260):
int (**ActorGameObjectApplyDamage::ActorGameObjectApplyDamage(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BC48);
  return (int (**)(int))(uintptr_t)(&off_206BC48);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectApplyDamage::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectApplyDamage::~ActorGameObjectApplyDamage
// ----------------------------------------------------------------------------
void ActorGameObjectApplyDamage::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BC48);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B730  (binary VA: 0x0)
// Original: sub_C2B730
// ----------------------------------------------------------------------------
void sub_C2B730(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BC48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2FCD0  (binary VA: 0x0)
// Original: sub_C2FCD0
// ----------------------------------------------------------------------------
int sub_C2FCD0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  void *v4;
  void *v5;
  void *v6;
  uint32_t *v7;
  void *v8;
  uint32_t *v9;
  void *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint8_t v15[20];
  uint32_t *v16;
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
  int v35[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Apply Damage", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Objects", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "IN", (int)(uintptr_t)(&v15[2]));
  grapher::ActorBase::AddPin(a1, 0, &v34, 1, -1);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v35), "Out", (int)(uintptr_t)(&v15[3]));
  grapher::ActorBase::AddPin(a1, 1, v35, 0, -1);
  g4_std::string::Destroy(v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "List of objects to damage.", (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Object", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v15[4] = (uint32_t)(uintptr_t)(v7);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v19, 9, &v15[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Object", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v20), v8, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( *(uint32_t *)&v15[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v15[4] + 44))(*(uint32_t *)&v15[4]);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Amount of damage", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Damage", (int)(uintptr_t)(&v12) + 2);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v22, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Damage", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v23), v4, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Damage Info", (int)(uintptr_t)(&v13) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Damage Info", (int)(uintptr_t)(&v13) + 1);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v25, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Damage Info", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v26), v5, 1, 0, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Damage filter", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Damage Filter", (int)(uintptr_t)(&v14));
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v28, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Damage Filter", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v29), v6, 1, 0, (int)(uintptr_t)(&v30), 3);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Attacker", (int)(uintptr_t)(&v15[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Attacker", (int)(uintptr_t)(&v14) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v16 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v31, 9, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Attacker", (int)(uintptr_t)(v15));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v32), v10, 1, 0, (int)(uintptr_t)(&v33), 3);
  g4_std::string::Destroy(&v32);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v31);
  return ((g4_std::string::Destroy(&v33)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C39AD0  (binary VA: 0x0)
// Original: sub_C39AD0
// ----------------------------------------------------------------------------
int sub_C39AD0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  uint8_t *v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *v8;
  void **v9;
  void **v10;
  void **v11;
  grapher::ActorVariable::Self *v13;
  grapher::ActorVariable::Self *v14;
  grapher::ActorVariable::Self *v15;
  int *v16;
  uint32_t *i;
  int *v18;
  int *v19;
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  long double v26; // fst7
  float v27; // xmm0_4
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
  int v42;
  int v43;
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
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  grapher::ActorContext::Self *v68;
  grapher::ActorContext::Self *v69;
  grapher::ActorContext::Self *v70;
  grapher::ActorContext::Self *v71;
  grapher::ActorContext::Self *v72;
  grapher::ActorContext::Self *v73;
  grapher::ActorContext::Self *v74;
  grapher::ActorContext::Self *v75;
  grapher::ActorContext::Self *v76;
  grapher::ActorBase::Self *v77;
  float v78;
  void *v79[5];
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86[3];
  float v87[3];
  float v88[9];

  LODWORD(v88[5]) = (uint32_t)(uintptr_t)(&a1);
  v77 = a1;
  v73 = a3;
  v3 = sub_857260(a1, 4, (int)(uintptr_t)(a3));
  v4 = (uint8_t *)v3;
  if ( v3 == 0 || (v5 = (int *)G4_VCALL<int>(v3, 16)) == nullptr )
  {
LABEL_7:
    v4 = nullptr;
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v77, 1);
    v74 = sub_837200((int)(uintptr_t)(v77), Variable, v73, v28, v33, v38, v43, v48, v53, v58, v63, v68);
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v77, 2);
    v76 = sub_837200((int)(uintptr_t)(v77), v7, v73, v29, v34, v39, v44, v49, v54, v59, v64, v69);
    v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v77, 3);
    v75 = sub_837200((int)(uintptr_t)(v77), v8, v73, v30, v35, v40, v45, v50, v55, v60, v65, v70);
LABEL_8:
    v79[0] = v79;
    v79[1] = v79;
    sub_8560A0(v77, 0, (int)(uintptr_t)(v79), (int)(uintptr_t)(v73), 0x7FFFFFFF);
    v9 = (void **)v79[0];
    if ( v79[0] != v79 )
    {
      do
      {
        G4_VCALL<void>(v9[2], 140, v74, v76, v75, v4);
        v9 = (void **)*v9;
      }
      while ( v9 != v79 );
      v10 = (void **)v79[0];
      if ( v79[0] != v79 )
      {
        while ( 1 )
        {
          v11 = (void **)*v10;
          opDelete(v10);
          if ( v11 == v79 )
            break;
          v10 = v11;
        }
      }
    }
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v77, 1, v73));
  }
  while ( v5 != (int *)(&dword_20D75F0) )
  {
    v5 = (int *)v5[1];
    if ( v5 == nullptr )
      goto LABEL_7;
  }
  v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v77, 1);
  v74 = sub_837200((int)(uintptr_t)(v77), v13, v73, v28, v33, v38, v43, v48, v53, v58, v63, v68);
  v14 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v77, 2);
  v76 = sub_837200((int)(uintptr_t)(v77), v14, v73, v31, v36, v41, v46, v51, v56, v61, v66, v71);
  v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v77, 3);
  v75 = sub_837200((int)(uintptr_t)(v77), v15, v73, v32, v37, v42, v47, v52, v57, v62, v67, v72);
  if ( v4[4977] == 0 )
    goto LABEL_8;
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v16 = nullptr;
  if ( byte_20D4A64 == 0 )
    v16 = (int *)(&dword_20D4A60);
  for ( i = *(uint32_t **)(v16[8] + 16); i != nullptr; i = (uint32_t *)i[111] )
  {
    v18 = (int *)G4_VCALL<int>(i, 16);
    if ( v18 != nullptr )
    {
      if ( v18 == (int *)(&dword_20D70C4) )
        goto LABEL_33;
      while ( 1 )
      {
        v18 = (int *)v18[1];
        if ( v18 == nullptr )
          break;
        if ( v18 == (int *)(&dword_20D70C4) )
          goto LABEL_33;
      }
    }
    v19 = (int *)G4_VCALL<int>(i, 16);
    if ( v19 == nullptr )
      goto LABEL_30;
    if ( v19 != (int *)(&dword_20D68D0) )
    {
      while ( 1 )
      {
        v19 = (int *)v19[1];
        if ( v19 == nullptr )
          break;
        if ( v19 == (int *)(&dword_20D68D0) )
          goto LABEL_33;
      }
LABEL_30:
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        goto LABEL_38;
      continue;
    }
LABEL_33:
    (*(void (**)(float *, uint32_t *))(*i + 52))(&v83, i);
    (*(void (**)(float *))(*(uint32_t *)v4 + 52))(&v80);
    v78 = fsqrt(
            (float)((float)((float)(v81 - v84) * (float)(v81 - v84)) + (float)((float)(v80 - v83) * (float)(v80 - v83)))
          + (float)((float)(v82 - v85) * (float)(v82 - v85)));
    (*(void (**)(float *))(*(uint32_t *)v4 + 52))(v88);
    (*(void (**)(float *))(*i + 52))(v87);
    v20 = v87[0] - v88[0];
    v21 = v87[1] - v88[1];
    v22 = v87[2] - v88[2];
    v23 = (float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22);
    if ( v23 != 0.0 )
    {
      v24 = 1.0 / fsqrt(v23);
      v25 = (float)((float)((float)(v23 * v24) * v24) + -3.0) * (float)(v24 * -0.5);
      v20 = v20 * v25;
      v21 = v21 * v25;
      v22 = v22 * v25;
    }
    (*(void (**)(float *, uint8_t *))(*(uint32_t *)v4 + 296))(v86, v4);
    v26 = acos(fminf(fmaxf((float)((float)(v21 * v86[1]) + (float)(v20 * v86[0])) + (float)(v22 * v86[2]), -1.0), 1.0));
    if ( v78 >= 180.0 )
      goto LABEL_30;
    v27 = v26;
    if ( v27 >= 1.5707964f )
      goto LABEL_30;
    G4_VCALL<void>(i, 140, v74, v76, v75, v4);
    if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
    {
LABEL_38:
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
    }
  }
  v4[4977] = 0;
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v77, 1, v73));
}


