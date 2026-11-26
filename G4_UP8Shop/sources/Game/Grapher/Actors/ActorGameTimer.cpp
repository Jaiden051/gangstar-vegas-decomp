#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameTimer.h"

// ----------------------------------------------------------------------------
// Function: ActorGameTimer::CreateInstance  (binary VA: 0x0)
// Original: ActorGameTimer::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameTimer::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x44u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameTimer::Construct(v3, -1);
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
    v3 = gll_operator_new(0x44u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameTimer::Construct(v3, a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameTimer::Construct  (binary VA: 0x0)
// Original: ActorGameTimer::ActorGameTimer
// ----------------------------------------------------------------------------
int ActorGameTimer::Construct(int a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB48);
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint8_t *)(a1 + 64) = 0;
  sub_84BB20(a1 + 56, 0);
  sub_84BB20(a1 + 60, *(uint32_t *)(a1 + 60));
  sub_84BB20(a1 + 52, *(uint32_t *)(a1 + 52));
  return sub_C5A390(a1 + 64, *(uint8_t *)(a1 + 64));
}

// ----------------------------------------------------------------------------
// Function: ActorGameTimer::Destroy  (binary VA: 0x0)
// Original: ActorGameTimer::~ActorGameTimer
// ----------------------------------------------------------------------------
void ActorGameTimer::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB48);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FDD0  (binary VA: 0x0)
// Original: sub_C3FDD0
// ----------------------------------------------------------------------------
void sub_C3FDD0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C4CC70  (binary VA: 0x0)
// Original: sub_C4CC70
// ----------------------------------------------------------------------------
int sub_C4CC70(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  uint32_t *v7;
  void *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int64_t v14;
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
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Timer (%Delay) [C]", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "HUD", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Start", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Pause", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddPin(a1, 1, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Stop", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddPin(a1, 2, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Out", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 3, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Delay", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 4, &v21, 0, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Delay in ms", (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Delay (ms)", (int)(uintptr_t)(&v11));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v22, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Delay", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v23), v3, 1, 1, (int)(uintptr_t)(&v24), 1);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Elapsed time", (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Elapsed (ms)", (int)(uintptr_t)(&v11) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v25, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Elapsed", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v26), v5, 1, 0, (int)(uintptr_t)(&v27), 2);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Restart the timer", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Start will Restart", (int)(uintptr_t)(&v12) + 2);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v28, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Start will restart", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v29), v6, 0, 0, (int)(uintptr_t)(&v30), 1);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Type of dialog to display the timer.", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Dialog type", (int)(uintptr_t)(&v13) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Dialogs", (int)(uintptr_t)(&v13) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v1;
  grapher::HolderT_string_e830be::From(v1, &v31);
  HIDWORD(v14) = (uint32_t)(uintptr_t)(v7);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v32, 11, (char *)&v14 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Dialog type", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v33), v8, 1, 0, (int)(uintptr_t)(&v34), 1);
  g4_std::string::Destroy(&v33);
  if ( HIDWORD(v14) != 0 )
    G4_VCALL<void>(HIDWORD(v14), 44);
  g4_std::string::Destroy(&v31);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), "Timer will decrease instead of increase.", (int)(uintptr_t)(&v14) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Decreasing", (int)(uintptr_t)(&v14) + 1);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v35, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Decreasing", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v36), v4, 1, 0, (int)(uintptr_t)(v37), 1);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v35);
  return ((g4_std::string::Destroy(v37)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C3F670  (binary VA: 0x0)
// Original: sub_C3F670
// ----------------------------------------------------------------------------
int sub_C3F670(int a1, int a2)
{
  int result;

  result = dword_20DA2A0;
  if ( dword_20DA2A0 == 0 )
    return G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C54CD0  (binary VA: 0x0)
// Original: sub_C54CD0
// ----------------------------------------------------------------------------
uint32_t * sub_C54CD0(int a1, g4_cxa_guard_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  void *v6;
  uint32_t *v7;
  uint32_t *result;
  int v9;
  grapher::ActorVariable::Self *Variable;
  char *v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  grapher::ActorVariable::Self *v19;
  int v20;
  int64_t v21; // xmm0_8
  int *v22;
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
  grapher::ActorContext::Self *v38;
  int v39;
  uint32_t *v40;
  int v41;
  uint32_t *v42;
  g4_cxa_guard_t *v43;
  g4_cxa_guard_t *v44;
  g4_cxa_guard_t *v45;
  char *v46;
  char *v47;
  uint32_t *v48;
  uint32_t v49[4];
  void *v50;
  void *v51[3];
  int v52;
  int v53;
  int v54;
  int v55[3];
  uint8_t v56[4];
  int64_t v57;
  uint32_t s[22];

  s[18] = (uint32_t)(uintptr_t)(&a1);
  v3 = a3;
  v4 = (uint32_t *)a1;
  v43 = a2;
  v46 = (char *)(a1 + 56);
  sub_84BD50(a3, (uint32_t *)(a1 + 56));
  v42 = v4 + 13;
  sub_84BD50(v3, v4 + 13);
  v5 = (uint32_t *)v3[3];
  v6 = v4 + 16;
  v7 = v3 + 2;
  v51[0] = v4 + 16;
  v48 = v3 + 2;
  if ( v5 == nullptr )
    goto LABEL_42;
  do
  {
    while ( (unsigned int)(uintptr_t)(v6) <= v5[4] )
    {
      v7 = v5;
      v5 = (uint32_t *)v5[2];
      if ( v5 == nullptr )
        goto LABEL_6;
    }
    v5 = (uint32_t *)v5[3];
  }
  while ( v5 != nullptr );
LABEL_6:
  if ( v48 == v7 || (unsigned int)(uintptr_t)(v6) < v7[4] )
  {
LABEL_42:
    if ( byte_20D6700 == 0 )
    {
      v23 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
      v6 = v4 + 16;
      if ( v23 != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
        v6 = v4 + 16;
      }
    }
    v51[2] = v6;
    g4_std::map_void_grapher_ActorContex_7fce1e::find(
      (std::map<void *,grapher::ActorContext::ICVar *> *)v49,
      &dword_20D6724);
    *((uint8_t *)v4 + 64) = *(uint8_t *)(*(uint32_t *)(v49[0] + 20) + 4);
    v9 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *(uint32_t *)v9 = (uint32_t)(uintptr_t)(&off_206CC10);
    *(uint8_t *)(v9 + 4) = *((uint8_t *)v4 + 64);
    *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
       (std::map<void *,grapher::ActorContext::ICVar *> *)(v3 + 1),
       v51) = v9;
    result = (uint32_t *)*((uint8_t *)v4 + 64);
  }
  else
  {
    result = (uint32_t *)*(uint8_t *)(v7[5] + 4);
    *((uint8_t *)v4 + 64) = (uint8_t)(uintptr_t)result;
  }
  if ( (uint8_t)(uintptr_t)result != 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v4, 4);
    if ( (uint8_t)sub_837730((int)(uintptr_t)(v4), Variable, (grapher::ActorContext::Self *)v3, v24, v25, v27, v29, v31, v33, v35) != 0 )
    {
      v15 = v4[13] - (uint32_t)(uintptr_t)(v43);
      v16 = v4[14] - v15;
      v4[13] = v15;
      sub_C4DA10((grapher::ActorBase::Self *)v4, v16, (grapher::ActorContext::Self *)v3);
      v45 = (g4_cxa_guard_t *)v4[13];
      v12 = (int)(uintptr_t)(v45) / 1000;
      if ( (int)(uintptr_t)(v45) > 0 )
      {
LABEL_15:
        v39 = v12;
        sub_84BD50(v3, v4 + 15);
        if ( (int)__builtin_abs(v4[15] - v4[13]) > 1000 )
        {
          v4[15] = v4[13];
          sub_84BEC0(v3, v4 + 15);
          sprintf((char *)s, "%02d:%02d", v39 / 60);
          v19 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v4, 3);
          v20 = (int)(uintptr_t)sub_837200(
                       (int)(uintptr_t)(v4),
                       v19,
                       (grapher::ActorContext::Self *)v3,
                       v39 % 60,
                       v26,
                       v28,
                       v30,
                       v32,
                       v34,
                       v36,
                       v37,
                       v38);
          v21 = 0xBFF0000000000000LL;
          if ( (unsigned int)(*(uint32_t *)(dword_20DA090 + 52 * v20 + 28) - 3) <= 1 )
            v21 = 0x4000000000000000LL;
          v41 = v20;
          v57 = v21;
          memset(v55, 0, sizeof(v55));
          v47 = (char *)&unk_1B15112;
          v56[0] = 2;
          v56[1] = 0;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), (char *)&unk_1B15112, (int)(uintptr_t)(&v50));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), (char *)&unk_1B15112, (int)(uintptr_t)(&v50) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), (char *)s, (int)(uintptr_t)(&v50) + 2);
          if ( v41 >= 0 && v41 < (unsigned int)dword_20DA0A0 )
            v47 = (char *)sub_C5A270(v41);
          if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
          {
            sub_785A60((int)(uintptr_t)(&dword_20D5D78));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
            __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
          }
          v22 = nullptr;
          if ( byte_20D5D7C == 0 )
            v22 = (int *)(&dword_20D5D78);
          sub_7E2D40(v22, v47, (int)(uintptr_t)(&v54), (int)(uintptr_t)(&v53), (int)(uintptr_t)(&v52), 0, (gameswf::ASValue::Self *)v56, (int)(uintptr_t)(v55), 0);
          g4_std::string::Destroy(&v54);
          g4_std::string::Destroy(&v53);
          g4_std::string::Destroy(&v52);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v56);
          sub_C402F0(v55);
        }
        goto LABEL_16;
      }
    }
    else
    {
      v11 = (char *)v43 + v4[13];
      v4[13] = (uint32_t)(uintptr_t)(v11);
      sub_C4DA10((grapher::ActorBase::Self *)v4, (int)(uintptr_t)(&v11[v4[14]]), (grapher::ActorContext::Self *)v3);
      v44 = (g4_cxa_guard_t *)v4[13];
      v12 = ((int)(uintptr_t)(v44) + v4[14]) / 1000;
      if ( (int)(uintptr_t)(v44) > 0 )
        goto LABEL_15;
    }
    v17 = *v4;
    v4[14] = 0;
    v4[13] = 0;
    (*(void (**)(int, uint32_t *, int, uint32_t *))(v17 + 36))(v12, v4, 2, v3);
    grapher::ActorBase::FireEvent((grapher::ActorBase::Self *)v4, 4, (grapher::ActorContext::Self *)v3);
    G4_VCALL<void>(v4, 28, v3);
    sub_84BEC0(v3, v46);
LABEL_16:
    v13 = (uint32_t *)v3[3];
    v51[0] = v4 + 13;
    if ( v13 == nullptr )
      goto LABEL_26;
    v14 = v3 + 2;
    do
    {
      while ( (unsigned int)(uintptr_t)(v42) <= v13[4] )
      {
        v14 = v13;
        v13 = (uint32_t *)v13[2];
        if ( v13 == nullptr )
          goto LABEL_21;
      }
      v13 = (uint32_t *)v13[3];
    }
    while ( v13 != nullptr );
LABEL_21:
    if ( v48 == v14 || (unsigned int)(uintptr_t)(v42) < v14[4] )
    {
LABEL_26:
      v18 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
      *v18 = (uint32_t)(uintptr_t)(&off_205CD10);
      v18[1] = v4[13];
      v40 = v18;
      result = g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                 (std::map<void *,grapher::ActorContext::ICVar *> *)(v3 + 1),
                 v51);
      *result = (uint32_t)(uintptr_t)(v40);
    }
    else
    {
      result = (uint32_t *)v14[5];
      result[1] = v4[13];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C55460  (binary VA: 0x0)
// Original: sub_C55460
// ----------------------------------------------------------------------------
int sub_C55460(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  char *v3;
  uint32_t *v4;
  uint32_t *v5;
  int result;
  int v7;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v9;
  grapher::ActorContext::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  grapher::ActorManager::Self *v15;
  grapher::ActorManager::Self *v16;
  g4_cxa_guard_t *v17;
  g4_cxa_guard_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  uint32_t *v22;
  int v23;
  uint32_t *v24;
  g4_cxa_guard_t *v25;
  grapher::ActorContext::Self *v26;
  void *v27[9];

  v3 = (char *)a1 + 64;
  sub_84BD50(a3, (uint32_t *)a1 + 14);
  sub_84BD50(a3, (uint32_t *)a1 + 13);
  sub_84BD50(a3, (uint32_t *)a1 + 15);
  v4 = *((uint32_t **)a3 + 3);
  v27[0] = (char *)a1 + 64;
  if ( v4 == nullptr )
    goto LABEL_42;
  v5 = (uint32_t *)((char *)a3 + 8);
  do
  {
    while ( (unsigned int)(uintptr_t)(v3) <= v4[4] )
    {
      v5 = v4;
      v4 = (uint32_t *)v4[2];
      if ( v4 == nullptr )
        goto LABEL_6;
    }
    v4 = (uint32_t *)v4[3];
  }
  while ( v4 != nullptr );
LABEL_6:
  if ( (uint32_t *)((char *)a3 + 8) == v5 || (unsigned int)(uintptr_t)(v3) < v5[4] )
  {
LABEL_42:
    if ( byte_20D6700 == 0 )
    {
      v25 = (g4_cxa_guard_t *)&byte_20D6700;
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      }
    }
    v27[1] = (char *)a1 + 64;
    g4_std::map_void_grapher_ActorContex_7fce1e::find(
      (std::map<void *,grapher::ActorContext::ICVar *> *)&v26,
      &dword_20D6724);
    *((uint8_t *)a1 + 64) = *(uint8_t *)(*((uint32_t *)v26 + 5) + 4);
    v7 = gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *(uint32_t *)v7 = (uint32_t)(uintptr_t)(&off_206CC10);
    *(uint8_t *)(v7 + 4) = *((uint8_t *)a1 + 64);
    v15 = (grapher::ActorManager::Self *)v7;
    result = (int)(uintptr_t)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                    (grapher::ActorContext::Self *)((char *)a3 + 4),
                    v27);
    *(uint32_t *)result = (uint32_t)(uintptr_t)(v15);
  }
  else
  {
    result = *(uint8_t *)(v5[5] + 4);
    *((uint8_t *)a1 + 64) = result;
  }
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      if ( byte_20D5B50 == 0 )
      {
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
        {
          grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
          __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
        }
        if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
        {
          grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
          __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
        }
      }
      grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
    }
    else if ( a2 == 2 )
    {
      if ( byte_20D5B50 == 0 )
      {
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
        {
          grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
          __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
        }
        if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
        {
          grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
          __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
        }
      }
      grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
      *((uint8_t *)a1 + 64) = 0;
      result = (int)(uintptr_t)(sub_C5A720(a3, v3));
    }
  }
  else
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    if ( (uint8_t)sub_837730(
                            (int)(uintptr_t)(a1),
                            Variable,
                            a3,
                            v11,
                            v13,
                            (int)(uintptr_t)(v15),
                            (int)(uintptr_t)(v17),
                            (int)(uintptr_t)(a1) + 56,
                            (int)(uintptr_t)(a1) + 52,
                            (int)(uintptr_t)(a1) + 60) != 0
      || *((uint8_t *)a1 + 64) == 0 )
    {
      v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
      v10 = sub_837200((int)(uintptr_t)(a1), v9, a3, v12, v14, (int)(uintptr_t)(v16), (int)(uintptr_t)(v18), v19, v21, v23, (int)(uintptr_t)(v25), v26);
      *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(v10);
      *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)(v10);
      *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)(v10);
      *((uint8_t *)a1 + 64) = 1;
      sub_84BEC0(a3, v20);
      sub_84BEC0(a3, v22);
      sub_C5A720(a3, v3);
      sub_84BEC0(a3, v24);
    }
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  }
  if ( *((uint8_t *)a1 + 64) != 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
  return result;
}


