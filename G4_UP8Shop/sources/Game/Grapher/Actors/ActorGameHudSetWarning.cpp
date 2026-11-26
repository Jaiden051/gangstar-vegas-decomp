#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameHudSetWarning.h"

// ----------------------------------------------------------------------------
// Function: ActorGameHudSetWarning::CreateInstance  (binary VA: 0x0)
// Original: ActorGameHudSetWarning::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameHudSetWarning::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x40u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameHudSetWarning::ActorGameHudSetWarning(v3, -1);
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
    v3 = gll_operator_new(0x40u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameHudSetWarning::ActorGameHudSetWarning(v3, a1);
  }
  return v3;
}



// Constructor (0xc4fb90):
int (**ActorGameHudSetWarning::ActorGameHudSetWarning(int a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA88);
  *(uint32_t *)(a1 + 56) = -1;
  *(uint8_t *)(a1 + 60) = 0;
  *(uint8_t *)(a1 + 61) = 0;
  return (int (**)(int))(uintptr_t)(&off_206CA88);
}
// ----------------------------------------------------------------------------
// Function: ActorGameHudSetWarning::Destroy  (binary VA: 0x0)
// Original: ActorGameHudSetWarning::~ActorGameHudSetWarning
// ----------------------------------------------------------------------------
void ActorGameHudSetWarning::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA88);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FD10  (binary VA: 0x0)
// Original: sub_C3FD10
// ----------------------------------------------------------------------------
void sub_C3FD10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C4AAD0  (binary VA: 0x0)
// Original: sub_C4AAD0
// ----------------------------------------------------------------------------
int sub_C4AAD0(grapher::ActorBase::Self *a1)
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
  int v35;
  int v36;
  int v37[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Set Warning [C]", (int)(uintptr_t)(&v12));
  grapher::ActorBase::SetDisplayName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "HUD", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v20);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "In", (int)(uintptr_t)(&v16[1]));
  grapher::ActorBase::AddPin(a1, 0, &v35, 1, -1);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Out", (int)(uintptr_t)(&v16[2]));
  grapher::ActorBase::AddPin(a1, 1, &v36, 0, -1);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), "Elapsed", (int)(uintptr_t)(&v16[3]));
  grapher::ActorBase::AddPin(a1, 2, v37, 0, 4);
  g4_std::string::Destroy(v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "The title text label specified as PACK_ID.TEXT_ID.", (int)(uintptr_t)(&v13) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Title", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "StrID", (int)(uintptr_t)(&v12) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &v21);
  *(uint32_t *)&v16[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v22, 11, &v16[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Title", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v23), v6, 1, 1, (int)(uintptr_t)(&v24), 1);
  g4_std::string::Destroy(&v23);
  if ( *(uint32_t *)&v16[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v16[4] + 44))(*(uint32_t *)&v16[4]);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "The failure text label specified as PACK_ID.TEXT_ID.", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Text", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "StrID", (int)(uintptr_t)(&v13) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &v25);
  v17 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v26, 11, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Text", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v27), v8, 1, 1, (int)(uintptr_t)(&v28), 1);
  g4_std::string::Destroy(&v27);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "The timer before the mission fails.", (int)(uintptr_t)(&v15) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Timer", (int)(uintptr_t)(&v14) + 3);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v29, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Timer", (int)(uintptr_t)(&v15));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v30), v9, 1, 1, (int)(uintptr_t)(&v31), 1);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "IconType to display.", (int)(uintptr_t)(v16));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "IconType", (int)(uintptr_t)(&v15) + 2);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v18 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v32, 11, &v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "IconType", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v33), v11, 1, 1, (int)(uintptr_t)(&v34), 1);
  g4_std::string::Destroy(&v33);
  if ( v18 != nullptr )
    G4_VCALL<void>(v18, 44);
  g4_std::string::Destroy(&v32);
  return ((g4_std::string::Destroy(&v34)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C3F6B0  (binary VA: 0x0)
// Original: sub_C3F6B0
// ----------------------------------------------------------------------------
int * sub_C3F6B0(int a1, int a2)
{
  int *result;

  result = (int *)(&dword_20DA2A0);
  if ( dword_20DA2A0 == 0 )
    return (int *)G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C59BA0  (binary VA: 0x0)
// Original: sub_C59BA0
// ----------------------------------------------------------------------------
int sub_C59BA0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int v4;
  int *v5;
  int result;
  int v7;
  bool v8;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  void *v16;
  int v17;
  int v18;
  g4_cxa_guard_t *v19;
  g4_cxa_guard_t *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  grapher::ActorContext::Self *v27;

  v17 = a3;
  v4 = sub_5A5890("WarningDialog", 0xB4A46154);
  if ( byte_20D5D70 == 0 )
  {
    v19 = (g4_cxa_guard_t *)&byte_20D5D70;
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
    {
      v15 = (int *)(&dword_20D5D78);
      sub_785A60((int)(uintptr_t)(&dword_20D5D78));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
      __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
    }
  }
  v5 = nullptr;
  if ( byte_20D5D7C == 0 )
    v5 = (int *)(&dword_20D5D78);
  result = sub_785D70((int)(uintptr_t)(v5), v4);
  if ( (uint8_t)result == 0 )
  {
    if ( *((uint8_t *)a2 + 61) != 0 )
    {
      if ( *((uint8_t *)a2 + 60) == 0 )
        return result;
    }
    else
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 2);
      *((uint32_t *)a2 + 13) = (uint32_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a2), Variable, a4, v11, v13, (int)(uintptr_t)(v15), a3, (int)(uintptr_t)(v19), v21, v23, v25, a1));
      v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
      sub_837200((int)(uintptr_t)(a2), v10, a4, v12, v14, (int)(uintptr_t)(v16), v18, (int)(uintptr_t)(v20), v22, v24, v26, v27);
      *((uint8_t *)a2 + 60) = 1;
      *((uint8_t *)a2 + 61) = 1;
      result = sub_C595B0(a2, a4);
      if ( *((uint8_t *)a2 + 60) == 0 )
        return result;
    }
    v7 = *((uint32_t *)a2 + 13) - v17;
    v8 = *((uint32_t *)a2 + 13) == v17;
    *((uint32_t *)a2 + 13) = v7;
    if ( v7 < 0 || v8 )
    {
      grapher::ActorBase::FireEvent(a2, 2, a4);
      return G4_VCALL<int>(a2, 28, a4);
    }
    else
    {
      return sub_C595B0(a2, a4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C59AB0  (binary VA: 0x0)
// Original: sub_C59AB0
// ----------------------------------------------------------------------------
int sub_C59AB0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int v2;
  int v3;
  int *v4;

  *((uint8_t *)a1 + 60) = 0;
  grapher::ActorBase::Cancel(a1, a2);
  v2 = dword_20DA090;
  v3 = *(uint32_t *)(v2 + 52 * sub_5A5890("WarningDialog", 0xB4A46154) + 28);
  if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
  {
    sub_785A60((int)(uintptr_t)(&dword_20D5D78));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
    __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D5D7C == 0 )
    v4 = (int *)(&dword_20D5D78);
  return sub_7B8F10((int)(uintptr_t)(v4), v3, -1);
}

// ----------------------------------------------------------------------------
// Function: sub_C41750  (binary VA: 0x0)
// Original: sub_C41750
// ----------------------------------------------------------------------------
int sub_C41750(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  *((uint8_t *)a1 + 61) = 0;
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


