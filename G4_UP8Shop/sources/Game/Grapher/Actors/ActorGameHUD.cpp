#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameHUD.h"

// ----------------------------------------------------------------------------
// Function: ActorGameHUD::CreateInstance  (binary VA: 0x0)
// Original: ActorGameHUD::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameHUD::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameHUD::ActorGameHUD(v3, -1);
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
    ActorGameHUD::ActorGameHUD(v3, a1);
  }
  return v3;
}



// Constructor (0xc4f900):
int (**ActorGameHUD::ActorGameHUD(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C828);
  return (int (**)(int))(uintptr_t)(&off_206C828);
}
// ----------------------------------------------------------------------------
// Function: ActorGameHUD::Destroy  (binary VA: 0x0)
// Original: ActorGameHUD::~ActorGameHUD
// ----------------------------------------------------------------------------
void ActorGameHUD::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C828);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40260  (binary VA: 0x0)
// Original: sub_C40260
// ----------------------------------------------------------------------------
void sub_C40260(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C828);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C470C0  (binary VA: 0x0)
// Original: sub_C470C0
// ----------------------------------------------------------------------------
int sub_C470C0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v6;
  void *v7;
  uint32_t *v8;
  void *v9;
  uint32_t *v10;
  void *v11;
  uint32_t *v12;
  void *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint8_t v19[20];
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
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
  int v42;
  int v43[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "HUD", (int)(uintptr_t)(&v14));
  grapher::ActorBase::SetDisplayName(a1, &v23);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "HUD", (int)(uintptr_t)(&v15));
  grapher::ActorBase::SetCategoryName(a1, &v24);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "In", (int)(uintptr_t)(&v19[1]));
  grapher::ActorBase::AddPin(a1, 0, &v41, 1, -1);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Reset", (int)(uintptr_t)(&v19[2]));
  grapher::ActorBase::AddPin(a1, 1, &v42, 1, -1);
  g4_std::string::Destroy(&v42);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v43), "Out", (int)(uintptr_t)(&v19[3]));
  grapher::ActorBase::AddPin(a1, 2, v43, 0, -1);
  g4_std::string::Destroy(v43);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "HUDElementsGroup to apply the action to", (int)(uintptr_t)(&v16));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Hud Group", (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "HUDElementsGroup.None", (int)(uintptr_t)(&v15) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &v25);
  *(uint32_t *)&v19[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v26, 11, &v19[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Hud Group", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v27), v7, 1, 1, (int)(uintptr_t)(&v28), 1);
  g4_std::string::Destroy(&v27);
  if ( *(uint32_t *)&v19[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v19[4] + 44))(*(uint32_t *)&v19[4]);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v32),
    "Enable or disable the HUDElementsGroup. If disabled, will not respond to any command until enabled again.",
    (int)(uintptr_t)(&v17));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Enable", (int)(uintptr_t)(&v16) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "OnOff.Ignore", (int)(uintptr_t)(&v16) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &v29);
  v20 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v30, 11, &v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Enable", (int)(uintptr_t)(&v16) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v31), v9, 1, 1, (int)(uintptr_t)(&v32), 1);
  g4_std::string::Destroy(&v31);
  if ( v20 != nullptr )
    G4_VCALL<void>(v20, 44);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Show or hide the HUDElementsGroup.", (int)(uintptr_t)(&v18));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Show", (int)(uintptr_t)(&v17) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "OnOff.Ignore", (int)(uintptr_t)(&v17) + 1);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v3;
  grapher::HolderT_string_e830be::From(v3, &v33);
  v21 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v34, 11, &v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Show", (int)(uintptr_t)(&v17) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v35), v11, 1, 1, (int)(uintptr_t)(&v36), 1);
  g4_std::string::Destroy(&v35);
  if ( v21 != nullptr )
    G4_VCALL<void>(v21, 44);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Highlight a HUDElementsGroup or make it blink.", (int)(uintptr_t)(v19));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Highlight", (int)(uintptr_t)(&v18) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "HudHighlight.Ignore", (int)(uintptr_t)(&v18) + 1);
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v12 = v4;
  grapher::HolderT_string_e830be::From(v4, &v37);
  v22 = v12;
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v38, 11, &v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Highlight", (int)(uintptr_t)(&v18) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v39), v13, 1, 1, (int)(uintptr_t)(&v40), 1);
  g4_std::string::Destroy(&v39);
  if ( v22 != nullptr )
    G4_VCALL<void>(v22, 44);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(&v38);
  return ((g4_std::string::Destroy(&v40)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C533F0  (binary VA: 0x0)
// Original: sub_C533F0
// ----------------------------------------------------------------------------
int sub_C533F0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  grapher::ActorVariable::Self *v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorContext::Self *v7;
  int *v8;
  int *v10;
  int *v11;
  int *v12;
  int *v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char v19;
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
  void *v32;
  void *v33;
  void *v34;
  void *v35;
  int v36;
  int v37;
  grapher::ActorContext::Self *v38;
  int v39;
  int v40;
  g4_cxa_guard_t *v41;
  g4_cxa_guard_t *v42;
  g4_cxa_guard_t *v43;
  g4_cxa_guard_t *v44;
  g4_cxa_guard_t *v45;
  int v46;
  grapher::ActorContext::Self *v47;
  int v48;
  int v49;
  int v50;
  g4_cxa_guard_t *v51;
  g4_cxa_guard_t *v52;
  g4_cxa_guard_t *v53;
  g4_cxa_guard_t *v54;

  if ( a2 != 1 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
    v47 = sub_837200(
            (int)(uintptr_t)(a1),
            Variable,
            a3,
            v15,
            v20,
            v24,
            v28,
            (int)(uintptr_t)(v32),
            v36,
            (int)(uintptr_t)(v41),
            v46,
            (grapher::ActorContext::Self *)v51);
    v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    v38 = sub_837200(
            (int)(uintptr_t)(a1),
            v4,
            a3,
            v16,
            v21,
            v25,
            v29,
            (int)(uintptr_t)(v33),
            v37,
            (int)(uintptr_t)(v42),
            (int)(uintptr_t)(v47),
            (grapher::ActorContext::Self *)v52);
    v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    v44 = (g4_cxa_guard_t *)sub_837200(
                       (int)(uintptr_t)(a1),
                       v5,
                       a3,
                       v17,
                       v22,
                       v26,
                       v30,
                       (int)(uintptr_t)(v34),
                       (int)(uintptr_t)(v38),
                       (int)(uintptr_t)(v43),
                       v48,
                       (grapher::ActorContext::Self *)v53);
    v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
    v7 = sub_837200((int)(uintptr_t)(a1), v6, a3, v18, v23, v27, v31, (int)(uintptr_t)(v35), v39, (int)(uintptr_t)(v44), v49, (grapher::ActorContext::Self *)v54);
    if ( v40 == 1 )
    {
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v13 = nullptr;
      if ( byte_20D49A8 == 0 )
        v13 = (int *)(&dword_20D49A0);
      sub_835950((int)(uintptr_t)(v13), v50, 1, 1);
    }
    if ( v7 != (grapher::ActorContext::Self *)-1 )
    {
      if ( v7 == nullptr )
      {
        if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v11 = nullptr;
        v19 = 0;
        if ( byte_20D49A8 == 0 )
          v11 = (int *)(&dword_20D49A0);
        goto LABEL_21;
      }
      if ( v7 != (grapher::ActorContext::Self *)((char *)&dword_0 + 2) )
      {
        if ( v7 != (grapher::ActorContext::Self *)((char *)&dword_0 + 1) )
          goto LABEL_7;
        if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v11 = nullptr;
        v19 = 1;
        if ( byte_20D49A8 == 0 )
          v11 = (int *)(&dword_20D49A0);
LABEL_21:
        sub_835950((int)(uintptr_t)(v11), v50, 2, v19);
        if ( v45 != (g4_cxa_guard_t *)-1 )
        {
LABEL_8:
          if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
          {
            sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
            __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
          }
          v8 = nullptr;
          if ( byte_20D49A8 == 0 )
            v8 = (int *)(&dword_20D49A0);
          sub_835950((int)(uintptr_t)(v8), v50, 0, v45 == (g4_cxa_guard_t *)((int *)((char *)&dword_0 + 1)));
        }
LABEL_12:
        if ( v40 == 0 )
        {
          if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
          {
            sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
            __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
          }
          v10 = nullptr;
          if ( byte_20D49A8 == 0 )
            v10 = (int *)(&dword_20D49A0);
          sub_835950((int)(uintptr_t)(v10), v50, 1, 0);
        }
        return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
      }
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v14 = nullptr;
      if ( byte_20D49A8 == 0 )
        v14 = (int *)(&dword_20D49A0);
      sub_835950((int)(uintptr_t)(v14), v50, 3, 1);
    }
LABEL_7:
    if ( v45 != (g4_cxa_guard_t *)-1 )
      goto LABEL_8;
    goto LABEL_12;
  }
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v12 = nullptr;
  if ( byte_20D49A8 == 0 )
    v12 = (int *)(&dword_20D49A0);
  sub_82E600(v12);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}


