#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameEventsHudOnTouch.h"

// ----------------------------------------------------------------------------
// Function: ActorGameEventsHudOnTouch::CreateInstance  (binary VA: 0x0)
// Original: ActorGameEventsHudOnTouch::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameEventsHudOnTouch::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameEventsHudOnTouch::Construct(v3, -1);
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
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameEventsHudOnTouch::Construct(v3, a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameEventsHudOnTouch::Construct  (binary VA: 0x0)
// Original: ActorGameEventsHudOnTouch::ActorGameEventsHudOnTouch
// ----------------------------------------------------------------------------
int ActorGameEventsHudOnTouch::Construct(int a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C6E8);
  *(uint8_t *)(a1 + 56) = 0;
  return sub_84BB20(a1 + 52, 0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameEventsHudOnTouch::Destroy  (binary VA: 0x0)
// Original: ActorGameEventsHudOnTouch::~ActorGameEventsHudOnTouch
// ----------------------------------------------------------------------------
void ActorGameEventsHudOnTouch::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C6E8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40050  (binary VA: 0x0)
// Original: sub_C40050
// ----------------------------------------------------------------------------
void sub_C40050(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C6E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C45B70  (binary VA: 0x0)
// Original: sub_C45B70
// ----------------------------------------------------------------------------
int sub_C45B70(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  void *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int64_t v12;
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
  grapher::ActorBase::SetArraySize(a1, 4, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "OnHudPress", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Events", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "In", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddPin(a1, 0, &v28, 1, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Out", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v29, 0, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Pressed", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v30, 0, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Released", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddPin(a1, 3, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "HUDElement to check for press or release.", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Hud Element", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "HudElements.", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &v15);
  HIDWORD(v12) = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v16, 11, (char *)&v12 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Hud Element", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v17), v7, 1, 1, (int)(uintptr_t)(&v18), 1);
  g4_std::string::Destroy(&v17);
  if ( HIDWORD(v12) != 0 )
    G4_VCALL<void>(HIDWORD(v12), 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v21),
    "Amount of presses or releases after which the box cancels itself, -1 for infinite.",
    (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Count", (int)(uintptr_t)(&v9) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v19, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Count", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v20), v3, 1, 1, (int)(uintptr_t)(&v21), 1);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Count the releases if true. If false, counts the presses instead.", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Count Releases", (int)(uintptr_t)(&v10) + 2);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v22, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Count Releases", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v23), v4, 1, 1, (int)(uintptr_t)(&v24), 1);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "If the button should trigger the tutorial version or the normal menu.", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Is Tutorial Action", (int)(uintptr_t)(&v11) + 1);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v25, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Is Tutorial Action", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v26), v5, 1, 1, (int)(uintptr_t)(&v27), 1);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v25);
  { g4_std::string::Destroy(&v27); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C3F730  (binary VA: 0x0)
// Original: sub_C3F730
// ----------------------------------------------------------------------------
int sub_C3F730(int a1, int a2)
{
  int result;

  result = dword_20DA2A0;
  if ( dword_20DA2A0 == 0 )
    return G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C52BD0  (binary VA: 0x0)
// Original: sub_C52BD0
// ----------------------------------------------------------------------------
int sub_C52BD0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v5;
  int *v6;
  int result;
  char v8; // di
  grapher::ActorVariable::Self *v9;
  char v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  void *v17;
  int *v18;
  char v19;
  char v20;
  g4_cxa_guard_t *v21;
  g4_cxa_guard_t *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
  v5 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v11, v13, v15, (int)(uintptr_t)(v17), (int)(uintptr_t)(v21), v23, v25, v27, a1);
  if ( byte_20D4980 == 0 )
  {
    v22 = (g4_cxa_guard_t *)&byte_20D4980;
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      v18 = (int *)(&dword_20D49A0);
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
  }
  v6 = nullptr;
  if ( byte_20D49A8 == 0 )
    v6 = (int *)(&dword_20D49A0);
  result = sub_82A4E0((int)(uintptr_t)(v6), (unsigned int)(uintptr_t)(v5));
  v8 = result;
  if ( *((uint8_t *)a2 + 56) != (uint8_t)result )
  {
    v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 2);
    v10 = sub_837730((int)(uintptr_t)(a2), v9, nullptr, v12, v14, v16, (int)(uintptr_t)(v18), (int)(uintptr_t)(v22), v24, v26);
    if ( v8 != 0 )
    {
      v19 = v10;
      grapher::ActorBase::FireEvent(a2, 2, a4);
      result = *((uint32_t *)a2 + 13);
      if ( v19 != 0 )
        goto LABEL_7;
    }
    else
    {
      v20 = v10;
      grapher::ActorBase::FireEvent(a2, 3, a4);
      result = *((uint32_t *)a2 + 13);
      if ( v20 == 0 )
        goto LABEL_7;
    }
    *((uint32_t *)a2 + 13) = --result;
LABEL_7:
    *((uint8_t *)a2 + 56) = v8;
    if ( result == 0 )
      return G4_VCALL<int>(a2, 28, a4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C52D50  (binary VA: 0x0)
// Original: sub_C52D50
// ----------------------------------------------------------------------------
int sub_C52D50(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v5;
  bool v6;
  int v8;
  int v9;
  int v10;
  int v11;
  g4_cxa_guard_t *v12;
  int v13;
  int v14;
  int v15;

  *((uint8_t *)a2 + 56) = 0;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
  v5 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v8, v9, v10, v11, (int)(uintptr_t)(v12), v13, v14, v15, a1);
  v6 = byte_20D5B50 == 0;
  *((uint32_t *)a2 + 13) = (uint32_t)(uintptr_t)(v5);
  if ( v6 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a2, a4);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}


