#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCinematicPlayFX.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicPlayFX::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCinematicPlayFX::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCinematicPlayFX::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCinematicPlayFX::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), -1);
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
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCinematicPlayFX::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicPlayFX::Construct  (binary VA: 0x0)
// Original: ActorGameCinematicPlayFX::ActorGameCinematicPlayFX
// ----------------------------------------------------------------------------
int ActorGameCinematicPlayFX::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB88);
  return sub_84BB20((char *)a1 + 52, *((uint32_t *)a1 + 13));
}

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicPlayFX::Destroy  (binary VA: 0x0)
// Original: ActorGameCinematicPlayFX::~ActorGameCinematicPlayFX
// ----------------------------------------------------------------------------
int ActorGameCinematicPlayFX::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB88);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_839A30  (binary VA: 0x0)
// Original: sub_839A30
// ----------------------------------------------------------------------------
void sub_839A30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_841DB0  (binary VA: 0x0)
// Original: sub_841DB0
// ----------------------------------------------------------------------------
int sub_841DB0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v5;
  void *v6;
  uint32_t *v7;
  void *v8;
  void *v9;
  uint32_t *v10;
  void *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint8_t v16[20];
  uint32_t *v17;
  uint32_t *v18;
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
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Play VFX", (int)(uintptr_t)(&v12));
  grapher::ActorBase::SetDisplayName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Cinematics", (int)(uintptr_t)(&v13));
  grapher::ActorBase::SetCategoryName(a1, &v20);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "In", (int)(uintptr_t)(&v16[2]));
  grapher::ActorBase::AddPin(a1, 0, &v34, 1, -1);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v35), "Out", (int)(uintptr_t)(&v16[3]));
  grapher::ActorBase::AddPin(a1, 1, v35, 0, -1);
  g4_std::string::Destroy(v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "VFX to play (from GIV_vfx.xml)", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "VFX", (int)(uintptr_t)(&v13) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "VFXInfos.", (int)(uintptr_t)(&v13) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &v21);
  *(uint32_t *)&v16[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v22, 11, &v16[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "VFX", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v23), v6, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  if ( *(uint32_t *)&v16[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v16[4] + 44))(*(uint32_t *)&v16[4]);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Target where to play the VFX", (int)(uintptr_t)(&v14) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Target", (int)(uintptr_t)(&v14) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v17 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v25, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Target", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v26), v8, 1, 1, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v30),
    "VFXInfo overwrite : < 0 : infinite, 0 == invalid, > 0 : play X times. ?, 666 = Use VFXInfo. value.",
    (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "LoopCount", (int)(uintptr_t)(&v15));
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v28, 1, 666);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "LoopCount", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v29), v9, 1, 1, (int)(uintptr_t)(&v30), 3);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Sound to play with the VFX", (int)(uintptr_t)(&v16[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Sound", (int)(uintptr_t)(&v15) + 3);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v18 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v31, 4, &v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Sound", (int)(uintptr_t)(v16));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v32), v11, 1, 1, (int)(uintptr_t)(&v33), 3);
  g4_std::string::Destroy(&v32);
  if ( v18 != nullptr )
    G4_VCALL<void>(v18, 44);
  g4_std::string::Destroy(&v31);
  return ((g4_std::string::Destroy(&v33)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_838F20  (binary VA: 0x0)
// Original: sub_838F20
// ----------------------------------------------------------------------------
int sub_838F20(int a1, int a2)
{
  int result;

  result = dword_20DA2A0;
  if ( dword_20DA2A0 == 0 )
    return G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_845D20  (binary VA: 0x0)
// Original: sub_845D20
// ----------------------------------------------------------------------------
uint32_t * sub_845D20(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  char *v2;
  void *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *result;
  uint32_t *v7;
  int v8;
  void *obj;
  int v10;
  void *v11;

  grapher::ActorBase::Cancel(a1, a2);
  v2 = (char *)a1 + 52;
  sub_84BD50(a2, (char *)a1 + 52);
  v10 = *((uint32_t *)a1 + 13);
  if ( byte_20D4B60 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60) != 0 )
  {
    sub_7B3590(v8, &dword_20D4B80, obj);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
    __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4B84 == 0 )
    v3 = &dword_20D4B80;
  sub_78CBD0(v3, sub_78C5B0, &v10, sub_7B19E0, 0);
  v4 = *((uint32_t **)a2 + 3);
  v11 = (char *)a1 + 52;
  if ( v4 == nullptr )
    goto LABEL_12;
  v5 = (uint32_t *)((char *)a2 + 8);
  do
  {
    while ( (unsigned int)(uintptr_t)(v2) <= v4[4] )
    {
      v5 = v4;
      v4 = (uint32_t *)v4[2];
      if ( v4 == nullptr )
        goto LABEL_9;
    }
    v4 = (uint32_t *)v4[3];
  }
  while ( v4 != nullptr );
LABEL_9:
  if ( v5 == (uint32_t *)((char *)a2 + 8) || (unsigned int)(uintptr_t)(v2) < v5[4] )
  {
LABEL_12:
    v7 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v7 = (uint32_t)(uintptr_t)(&off_205CD10);
    v7[1] = *((uint32_t *)a1 + 13);
    result = (uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                         (grapher::ActorContext::Self *)((char *)a2 + 4),
                         &v11);
    *result = (uint32_t)(uintptr_t)(v7);
  }
  else
  {
    result = (uint32_t *)v5[5];
    result[1] = *((uint32_t *)a1 + 13);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_848450  (binary VA: 0x0)
// Original: sub_848450
// ----------------------------------------------------------------------------
int sub_848450(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  int v5;
  void **v6;
  void *v7;
  void *v8;
  volatile int32_t *v9;
  int v10;
  glf::Self *v11;
  char *v12;
  int v13;
  int v14;
  char *v15;
  uint32_t **v16;
  uint32_t *v17;
  uint32_t *v18;
  grapher::ActorBase::Self *v19;
  void **v20;
  void **v21;
  char *v23;
  int v24;
  int *v25;
  uint32_t *v26;
  void *v27;
  void *v28;
  char *v29;
  grapher::ActorContext::Self *v30;
  int v31;
  int v32;
  grapher::ActorBase::Self *v33;
  char *v34;
  void **v35;
  g4_cxa_guard_t *v36;
  uint32_t v37[4];
  void *v38;
  glf::Self *v39;
  uint32_t *v40;
  void *v41[2];
  uint8_t v42[12];
  uint32_t v43[14];

  v43[10] = (uint32_t)(uintptr_t)(&a1);
  v33 = a1;
  v30 = a3;
  grapher::ActorBase::GetVariable(a1, 3);
  sub_837C70(&v39);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v33, 0);
  v31 = (int)(uintptr_t)(sub_837200(v33, Variable, v30));
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v33, 2);
  v32 = (int)(uintptr_t)(sub_837200(v33, v4, v30));
  v29 = (char *)v33 + 52;
  sub_84BD50(v30, (char *)v33 + 52);
  v41[0] = v41;
  v41[1] = v41;
  sub_8560A0(v33, 1, (int)(uintptr_t)(v41), (int)(uintptr_t)(v30), 0x7FFFFFFF);
  v5 = dword_20D67C8;
  v6 = (void **)v41[0];
  v35 = (void **)v41[0];
  *((uint32_t *)v33 + 13) = dword_20D67C8;
  dword_20D67C8 = v5 + 1;
  if ( v6 != v41 )
  {
    while ( 1 )
    {
      v7 = v6[2];
      if ( v7 != nullptr )
        break;
LABEL_30:
      v6 = (void **)*v6;
      v35 = v6;
      if ( v6 == v41 )
        goto LABEL_31;
    }
    v40 = nullptr;
    (*(void (**)(uint8_t *))(*(uint32_t *)v7 + 52))(v42);
    if ( byte_20D4B60 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60) != 0 )
    {
      sub_7B3590(v24, &dword_20D4B80, v7);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
      __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
    }
    v8 = nullptr;
    v28 = v7;
    if ( byte_20D4B84 == 0 )
      v8 = &dword_20D4B80;
    v27 = v8;
    sub_7B30D0(v37);
    if ( v40 != nullptr )
    {
      v9 = (volatile int32_t *)((uint32_t *)((char *)v40 + *(uint32_t *)(*v40 - 16)));
      if ( __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v9, 8, v27, v31, v42, v28, &v40, 0);
        G4_VCALL<void>(v9, 4);
      }
    }
    v10 = v37[0];
    v36 = (g4_cxa_guard_t *)v37[0];
    if ( v37[0] != 0 )
    {
      *(uint32_t *)(v37[0] + 40) = *((uint32_t *)v33 + 13);
      if ( v32 != 666 )
        *(uint32_t *)(v10 + 92) = v32;
    }
    v11 = v39;
    if ( *((uint32_t *)v39 - 3) != 0 )
    {
      if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
      {
        sub_ADB4E0(&dword_20D4AC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
        __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
      }
      v25 = nullptr;
      if ( byte_20D4AC4 == 0 )
        v25 = (int *)(&dword_20D4AC0);
      sub_AC4FE0((vox::EmitterHandle::Self *)v43, (int)(uintptr_t)(v25), v11, 1028443341);
      vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v43);
      v36 = (g4_cxa_guard_t *)v37[0];
    }
    if ( v36 == nullptr )
    {
LABEL_29:
      v37[0] = 0;
      v6 = v35;
      goto LABEL_30;
    }
    v34 = (char *)v36[2];
    v12 = (char *)v36[1];
    v13 = (v34 - v12) >> 4;
    v14 = (v34 - v12) >> 2;
    if ( v13 > 0 )
    {
      if ( *(uint32_t **)v12 != v37 )
      {
        if ( *((uint32_t **)v12 + 1) == v37 )
        {
          v12 += 4;
        }
        else if ( *((uint32_t **)v12 + 2) == v37 )
        {
          v12 += 8;
        }
        else if ( *((uint32_t **)v12 + 3) == v37 )
        {
          v12 += 12;
        }
        else
        {
          do
          {
            --v13;
            v16 = (uint32_t **)(v12 + 16);
            v12 += 16;
            if ( v13 == 0 )
            {
              v14 = (v34 - v12) >> 2;
              goto LABEL_26;
            }
            if ( *v16 == v37 )
              goto LABEL_49;
            v15 = v12 + 4;
            if ( v16[1] == v37 )
              break;
            v15 = v12 + 8;
            if ( v16[2] == v37 )
              break;
            v15 = v12 + 12;
          }
          while ( v16[3] != v37 );
          v12 = v15;
        }
      }
      goto LABEL_49;
    }
LABEL_26:
    if ( v14 != 2 )
    {
      if ( v14 != 3 )
      {
        if ( v14 != 1 )
          goto LABEL_29;
        goto LABEL_48;
      }
      if ( *(uint32_t **)v12 == v37 )
        goto LABEL_49;
      v12 += 4;
    }
    if ( *(uint32_t **)v12 != v37 )
    {
      v12 += 4;
LABEL_48:
      if ( *(uint32_t **)v12 != v37 )
        goto LABEL_29;
    }
LABEL_49:
    if ( v34 != v12 )
    {
      v23 = v12 + 4;
      if ( v34 != v12 + 4 && (v34 - v23) >> 2 != 0 )
      {
        memmove(v12, v12 + 4, 4 * ((v34 - v23) >> 2));
        v34 = (char *)v36[2];
      }
      v36[2] = (g4_cxa_guard_t)(v34 - 4);
    }
    goto LABEL_29;
  }
LABEL_31:
  v38 = (char *)v33 + 52;
  v17 = *((uint32_t **)v30 + 3);
  if ( v17 == nullptr )
    goto LABEL_63;
  v18 = (uint32_t *)((char *)v30 + 8);
  do
  {
    while ( (unsigned int)(uintptr_t)(v29) <= v17[4] )
    {
      v18 = v17;
      v17 = (uint32_t *)v17[2];
      if ( v17 == nullptr )
        goto LABEL_36;
    }
    v17 = (uint32_t *)v17[3];
  }
  while ( v17 != nullptr );
LABEL_36:
  if ( (uint32_t *)((char *)v30 + 8) == v18 || (unsigned int)(uintptr_t)(v29) < v18[4] )
  {
LABEL_63:
    v26 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v26 = (uint32_t)(uintptr_t)(&off_205CD10);
    v26[1] = *((uint32_t *)v33 + 13);
    *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                 (grapher::ActorContext::Self *)((char *)v30 + 4),
                 &v38) = (uint32_t)(uintptr_t)(v26);
    v19 = v33;
  }
  else
  {
    v19 = v33;
    *(uint32_t *)(v18[5] + 4) = *((uint32_t *)v33 + 13);
  }
  grapher::ActorBase::FireEvent(v19, 1, v30);
  v20 = (void **)v41[0];
  if ( v41[0] != v41 )
  {
    while ( 1 )
    {
      v21 = (void **)*v20;
      opDelete(v20);
      if ( v21 == v41 )
        break;
      v20 = v21;
    }
  }
  return ((g4_std::string::Destroy(&v39)), (int)0);
}


