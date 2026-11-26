#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterAssignObject.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterAssignObject::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterAssignObject::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGameCharacterAssignObject::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterAssignObject::ActorGameCharacterAssignObject(v3, 0xFFFFFFFF);
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
    ActorGameCharacterAssignObject::ActorGameCharacterAssignObject(v3, a1);
  }
  return v3;
}



// Constructor (0x854d90):
int (**ActorGameCharacterAssignObject::ActorGameCharacterAssignObject(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D9A8);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205D9A8));
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterAssignObject::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterAssignObject::~ActorGameCharacterAssignObject
// ----------------------------------------------------------------------------
void ActorGameCharacterAssignObject::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D610  (binary VA: 0x0)
// Original: sub_84D610
// ----------------------------------------------------------------------------
void sub_84D610(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_852110  (binary VA: 0x0)
// Original: sub_852110
// ----------------------------------------------------------------------------
int sub_852110(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  void *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  uint32_t *v8;
  void *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint8_t v14[20];
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
  int v31;
  int v32;
  int v33[4];

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "{Base}", (int)(uintptr_t)(v14));
  grapher::ActorBase::SetDisplayName(a1, &v30);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), (char *)&unk_1B15112, (int)(uintptr_t)(&v14[1]));
  grapher::ActorBase::SetCategoryName(a1, &v31);
  g4_std::string::Destroy(&v31);
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Assign Object", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "AI", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "In", (int)(uintptr_t)(&v14[2]));
  grapher::ActorBase::AddPin(a1, 0, &v32, 1, -1);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v33), "Out", (int)(uintptr_t)(&v14[3]));
  grapher::ActorBase::AddPin(a1, 1, v33, 0, -1);
  g4_std::string::Destroy(v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The character to assign object to.", (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Target", (int)(uintptr_t)(&v11));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v14[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 9, &v14[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Target", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( *(uint32_t *)&v14[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v14[4] + 44))(*(uint32_t *)&v14[4]);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "The target variable to be assigned to.", (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Variable", (int)(uintptr_t)(&v11) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Variable", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v22), v4, 1, 1, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v26),
    "The object (as a eSubject constant) to assign (has precedence over Object Name property).",
    (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Object", (int)(uintptr_t)(&v12) + 2);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Object", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v25), v5, 1, 1, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "The object name (as a GameObject) to assign.", (int)(uintptr_t)(&v13) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Object Name", (int)(uintptr_t)(&v13) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v15 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v27, 9, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Object Name", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v28), v9, 1, 0, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v27);
  { g4_std::string::Destroy(&v29); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_859310  (binary VA: 0x0)
// Original: sub_859310
// ----------------------------------------------------------------------------
int sub_859310(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  void ***v4;
  void **v5;
  int *v6;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v8;
  grapher::ActorVariable::Self *v10;
  grapher::ActorVariable::Self *v11;
  int *v12;
  int v13;
  int v14;
  uint32_t *v15;
  g4_cxa_guard_t v16;
  int *v17;
  void ***v18;
  void **v19;
  int *v20;
  int v21;
  float *v22;
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  int v26;
  g4_cxa_guard_t *v27;
  int v28;
  int *v29;
  int v30;
  float *v31;
  float v32;
  float v33;
  float v34;
  int v35;
  float v36;
  int v37;
  float obj;
  float obja;
  g4_cxa_guard_t *v40;
  int v41;
  int v42;
  int v43;
  grapher::ActorContext::Self *v44;
  g4_cxa_guard_t *v45;
  g4_cxa_guard_t *v46;
  int v47;
  int v48;
  g4_cxa_guard_t *v49;
  void *v50;
  float v51;
  float v52;
  uint32_t v53[3];
  uint32_t v54[3];
  uint32_t v55[3];
  float v56[3];
  float v57[3];
  float v58[3];
  float v59[3];
  uint32_t v60[3];
  float v61[3];
  float v62[3];
  float v63[3];
  float v64[3];
  float v65;
  float v66;
  float v67;
  grapher::ActorBase::Self **v68;

  v68 = &a1;
  v3 = a1;
  v44 = a3;
  *(float *)&v50 = COERCE_FLOAT(&v50);
  v51 = COERCE_FLOAT(&v50);
  sub_856780(a1, 0, (int)(uintptr_t)(&v50), (int)(uintptr_t)(a3), 1);
  v4 = (void ***)v50;
  if ( v50 == &v50 )
    goto LABEL_11;
  v45 = (g4_cxa_guard_t *)v3;
  v43 = *((uint32_t *)v50 + 2);
  while ( 1 )
  {
    v5 = *v4;
    opDelete(v4);
    if ( v5 == &v50 )
      break;
    v4 = (void ***)v5;
  }
  v3 = (grapher::ActorBase::Self *)v45;
  if ( v43 == 0 || (v6 = (int *)G4_VCALL<int>(v43, 16)) == nullptr )
  {
LABEL_11:
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
    sub_837200(v3, Variable, v44);
    v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
    sub_837200(v3, v8, v44);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
  }
  while ( v6 != (int *)(&dword_20D75F0) )
  {
    v6 = (int *)v6[1];
    if ( v6 == nullptr )
      goto LABEL_11;
  }
  v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v45, 1);
  v42 = (int)(uintptr_t)(sub_837200(v45, v10, v44));
  v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v45, 2);
  v41 = (int)(uintptr_t)(sub_837200(v45, v11, v44));
  if ( v41 < 0 )
  {
    *(float *)&v50 = COERCE_FLOAT(&v50);
    v51 = COERCE_FLOAT(&v50);
    sub_856780((grapher::ActorBase::Self *)v45, 3, (int)(uintptr_t)(&v50), (int)(uintptr_t)(v44), 1);
    v18 = (void ***)v50;
    if ( v50 == &v50 )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
    v40 = v45;
    v46 = *((g4_cxa_guard_t **)v50 + 2);
    while ( 1 )
    {
      v19 = *v18;
      opDelete(v18);
      if ( v19 == &v50 )
        break;
      v18 = (void ***)v19;
    }
    v3 = (grapher::ActorBase::Self *)v40;
    if ( v46 == nullptr )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
    v20 = (int *)G4_VCALL<int>(v46, 16);
    if ( v20 == nullptr )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
    while ( v20 != (int *)(&dword_20DE814) )
    {
      v20 = (int *)v20[1];
      if ( v20 == nullptr )
        return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
    }
  }
  else
  {
    if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
    {
      sub_5B3AF0(&dword_20D4A60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
      __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
    }
    v12 = nullptr;
    if ( byte_20D4A64 == 0 )
      v12 = (int *)(&dword_20D4A60);
    v46 = (g4_cxa_guard_t *)sub_5B4770(v12, v41, v44);
  }
  if ( v46 == nullptr )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
  if ( v42 == 2 )
  {
    *(float *)&v50 = 0.0;
    v51 = 0.0;
    v52 = 0.0;
    if ( v41 >= 0 )
    {
      if ( v41 == 17 )
      {
        if ( *(uint32_t *)(v43 + 4104) == 0 )
          return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
        sub_989330(v43, *(uint32_t *)(v43 + 4104));
        (*(void (**)(uint32_t *))(**(uint32_t **)(v43 + 4104) + 52))(v53);
        v50 = (void *)v53[0];
        v51 = *(float *)&v53[1];
        v52 = *(float *)&v53[2];
        v26 = 0;
        goto LABEL_63;
      }
      if ( v41 == 11 )
      {
        if ( (uint8_t)sub_986BB0(v43) != 0 )
        {
          sub_986B80(v54);
          v50 = (void *)v54[0];
          v51 = *(float *)&v54[1];
          v52 = *(float *)&v54[2];
          v26 = 0;
        }
        else
        {
          if ( *(uint8_t *)(v43 + 189) == 0 )
            return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
          if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
          {
            sub_971D40(&dword_20D3BC0);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
            __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
          }
          v29 = nullptr;
          if ( byte_20D3BC4 == 0 )
            v29 = (int *)(&dword_20D3BC0);
          if ( (int)sub_971F30(v29) <= 0 )
            return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
          (*(void (**)(uint32_t *))(*(uint32_t *)v43 + 52))(v55);
          v50 = (void *)v55[0];
          v51 = *(float *)&v55[1];
          v52 = *(float *)&v55[2];
          v26 = 0;
        }
      }
      else
      {
        if ( v41 == 7 )
        {
          if ( (uint8_t)sub_5EC9B0(v46) != 0 )
            return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
        }
        else if ( (unsigned int)(*(uint32_t *)(v43 + 4296) - 2) > 2 )
        {
          v28 = *(uint32_t *)(v43 + 4280);
          if ( v28 != 0 && *(uint32_t *)(v28 + 532) - *(uint32_t *)(v28 + 528) > 19 )
            return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
        }
        if ( v46 == *(g4_cxa_guard_t **)(v43 + 4104) )
        {
          v30 = *(uint32_t *)(v43 + 1872);
          if ( (v30 & 0x200000) != 0 || (v30 & 0x400000) != 0 )
          {
            (*(void (**)(float *))(*v46 + 52))(v57);
            (*(void (**)(float *))(*(uint32_t *)v43 + 52))(v56);
            v58[0] = v56[0] - v57[0];
            v58[1] = v56[1] - v57[1];
            v58[2] = v56[2] - v57[2];
            v31 = (float *)sub_5ED3D0(v58);
            obja = *v31 * 500.0;
            v36 = v31[1] * 500.0;
            v33 = 500.0 * v31[2];
            (*(void (**)(float *))(*(uint32_t *)v43 + 52))(v59);
            v23 = v36 + v59[1];
            v24 = v33 + v59[2];
            v25 = obja + v59[0];
            goto LABEL_62;
          }
        }
        if ( v41 != 18 )
        {
          if ( *(uint8_t *)(v43 + 2357) != 0 )
          {
            v21 = *(uint32_t *)(v43 + 1872);
            if ( (v21 & 0x200000) != 0 || (v21 & 0x400000) != 0 )
            {
              (*(void (**)(float *))(*v46 + 52))(v62);
              (*(void (**)(float *))(*(uint32_t *)v43 + 52))(v61);
              v63[0] = v61[0] - v62[0];
              v63[1] = v61[1] - v62[1];
              v63[2] = v61[2] - v62[2];
              v22 = (float *)sub_5ED3D0(v63);
              obj = *v22 * 500.0;
              v34 = v22[1] * 500.0;
              v32 = 500.0 * v22[2];
              (*(void (**)(float *))(*(uint32_t *)v43 + 52))(v64);
              v23 = v34 + v64[1];
              v24 = v32 + v64[2];
              v25 = obj + v64[0];
LABEL_62:
              *(float *)&v50 = v25;
              v26 = 2;
              v51 = v23;
              v52 = v24;
              goto LABEL_63;
            }
          }
          goto LABEL_65;
        }
        sub_9A5920(&v48);
        v37 = v48;
        sub_5F76C0(&v48, 0);
        if ( v37 != 0 )
        {
          sub_9A5920(&v49);
          v27 = v49;
          sub_5F76C0(&v49, 0);
          if ( v27 == nullptr )
            return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
          goto LABEL_66;
        }
        sub_986390(v60);
        v50 = (void *)v60[0];
        v51 = *(float *)&v60[1];
        v52 = *(float *)&v60[2];
        v26 = 0;
      }
LABEL_63:
      v35 = v26;
      (*(void (**)(float *))(*(uint32_t *)v43 + 52))(&v65);
      if ( (float)((float)((float)((float)(v66 - v51) * (float)(v66 - v51))
                         + (float)((float)(v65 - *(float *)&v50) * (float)(v65 - *(float *)&v50)))
                 + (float)((float)(v67 - v52) * (float)(v67 - v52))) > 625.0 )
        sub_9B4460(v43, &v50, v35, 25, 0, 3);
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
    }
LABEL_65:
    v27 = v46;
LABEL_66:
    sub_9B71D0(v43, v27, 1);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
  }
  if ( v42 <= 2 )
  {
    if ( v42 == 1 )
    {
      v13 = v43;
      v14 = *(uint32_t *)(v43 + 4240);
      if ( v14 != 0 )
      {
        sub_5459F0(v43 + 4240, v14 + 16);
        v13 = v43;
      }
      v47 = v43 + 4240;
      *(uint32_t *)(v13 + 4240) = (uint32_t)(uintptr_t)(v46);
      v15 = (uint32_t *)v46[5];
      if ( v15 == (uint32_t *)v46[6] )
      {
        g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux((int)(uintptr_t)(v46 + 4), (void *)v46[5], (int)(uintptr_t)(&v47));
      }
      else
      {
        v16 = 0;
        if ( v15 != nullptr )
        {
          *v15 = v43 + 4240;
          v16 = v46[5];
        }
        v46[5] = v16 + 4;
      }
    }
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
  }
  if ( v42 == 3 )
  {
    sub_9A5670(v43 + 2296, v46);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
  }
  if ( v42 == 4 )
  {
    v17 = (int *)G4_VCALL<int>(v46, 16);
    if ( v17 != nullptr )
    {
      if ( v17 == (int *)(uintptr_t)(&dword_20D68D0) )
        goto LABEL_36;
      while ( 1 )
      {
        v17 = (int *)v17[1];
        if ( v17 == nullptr )
          break;
        if ( v17 == (int *)(uintptr_t)(&dword_20D68D0) )
          goto LABEL_36;
      }
    }
    v46 = nullptr;
LABEL_36:
    sub_9AC6E0(v43, v46);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v44));
}


