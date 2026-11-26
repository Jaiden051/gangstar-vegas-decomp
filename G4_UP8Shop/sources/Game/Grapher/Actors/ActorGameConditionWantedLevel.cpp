#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameConditionWantedLevel.h"

// ----------------------------------------------------------------------------
// Function: ActorGameConditionWantedLevel::CreateInstance  (binary VA: 0x0)
// Original: ActorGameConditionWantedLevel::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameConditionWantedLevel::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x40u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameConditionWantedLevel::ActorGameConditionWantedLevel(v3, -1);
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
    ActorGameConditionWantedLevel::ActorGameConditionWantedLevel(v3, a1);
  }
  return v3;
}



// Constructor (0xc4f0c0):
int (**ActorGameConditionWantedLevel::ActorGameConditionWantedLevel(int a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  *(uint32_t *)(a1 + 52) = -1;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C548);
  *(uint32_t *)(a1 + 56) = -1;
  *(uint8_t *)(a1 + 60) = 0;
  return (int (**)(int))(uintptr_t)(&off_206C548);
}
// ----------------------------------------------------------------------------
// Function: ActorGameConditionWantedLevel::Destroy  (binary VA: 0x0)
// Original: ActorGameConditionWantedLevel::~ActorGameConditionWantedLevel
// ----------------------------------------------------------------------------
void ActorGameConditionWantedLevel::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C548);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FE90  (binary VA: 0x0)
// Original: sub_C3FE90
// ----------------------------------------------------------------------------
void sub_C3FE90(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C548);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C426B0  (binary VA: 0x0)
// Original: sub_C426B0
// ----------------------------------------------------------------------------
int sub_C426B0(grapher::ActorBase::Self *a1)
{
  void *v2;
  void *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
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
  int v21[8];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 6, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Wanted (Imm=%Immediate) [C]", (int)(uintptr_t)(&v4));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Conditions", (int)(uintptr_t)(&v4) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "In", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 1, &v17, 0, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "<", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 2, &v18, 0, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), ">", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 3, &v19, 0, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "==", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 4, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "!=", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 5, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Is this condtion tested once? (at the firing of this event)", (int)(uintptr_t)(&v5) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Immediate", (int)(uintptr_t)(&v5));
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v10, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Immediate", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v2, 1, 0, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Watend level to compare from", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Wanted Level", (int)(uintptr_t)(&v5) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v13, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Level", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v14), v3, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v13);
  { g4_std::string::Destroy(&v15); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C4E300  (binary VA: 0x0)
// Original: sub_C4E300
// ----------------------------------------------------------------------------
int sub_C4E300(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int result;
  int v5;
  int v6;
  char v7;

  if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
  {
    sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
    __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D3BC4 == 0 )
    v3 = (int *)(&dword_20D3BC0);
  result = sub_971F30((int)(uintptr_t)(v3));
  v5 = *((uint32_t *)a1 + 13);
  v6 = result;
  v7 = *((uint8_t *)a1 + 60);
  if ( result != v5 )
  {
    if ( (v7 & 0x20) == 0 )
    {
      result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 5, a3));
      v5 = *((uint32_t *)a1 + 13);
      v7 = *((uint8_t *)a1 + 60) | 0x20;
      *((uint8_t *)a1 + 60) = v7;
    }
    if ( v6 > v5 )
    {
      if ( (v7 & 8) == 0 )
      {
        result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
        v7 = *((uint8_t *)a1 + 60) | 8;
        *((uint8_t *)a1 + 60) = v7;
        if ( (v7 & 0x10) == 0 )
          return result;
        goto LABEL_14;
      }
    }
    else if ( (v7 & 4) == 0 )
    {
      result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
      v7 = *((uint8_t *)a1 + 60) | 4;
      *((uint8_t *)a1 + 60) = v7;
    }
    goto LABEL_10;
  }
  if ( (v7 & 0x10) == 0 )
  {
    result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 4, a3));
    v7 = *((uint8_t *)a1 + 60) | 0x10;
    *((uint8_t *)a1 + 60) = v7;
LABEL_10:
    if ( (v7 & 0x10) == 0 )
      return result;
  }
LABEL_14:
  if ( (v7 & 0x20) != 0 && (v7 & 8) != 0 && (v7 & 4) != 0 )
    return G4_VCALL<int>(a1, 28, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C52E40  (binary VA: 0x0)
// Original: sub_C52E40
// ----------------------------------------------------------------------------
int sub_C52E40(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v4;
  bool v5;
  int *v6;
  grapher::ActorVariable::Self *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  char v12;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  void *v20;
  int *v21;
  g4_cxa_guard_t *v22;
  g4_cxa_guard_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  grapher::ActorContext::Self *v29;

  if ( a2 == 0 )
    *((uint8_t *)a1 + 60) = 0;
  G4_VCALL<void>(a1, 28, a3);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v4 = sub_837200((int)(uintptr_t)(a1), Variable, a3, v14, v16, v18, (int)(uintptr_t)(v20), (int)(uintptr_t)(v22), v24, v26, v28, v29);
  v5 = byte_20D3BA0 == 0;
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(v4);
  if ( v5 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
  {
    v21 = (int *)(&dword_20D3BC0);
    sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
    __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D3BC4 == 0 )
    v6 = (int *)(&dword_20D3BC0);
  *((uint32_t *)a1 + 14) = sub_971F30((int)(uintptr_t)(v6));
  v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), v7, a3, v15, v17, v19, (int)(uintptr_t)(v21), (int)(uintptr_t)(v23), v25, v27) != 0 )
  {
    sub_C4F120(a1, a3);
  }
  else
  {
    if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
    {
      sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
      __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
    }
    v8 = nullptr;
    if ( byte_20D3BC4 == 0 )
      v8 = (int *)(&dword_20D3BC0);
    v9 = sub_971F30((int)(uintptr_t)(v8));
    v10 = *((uint32_t *)a1 + 13);
    v11 = v9;
    if ( v9 == v10 )
    {
      if ( (*((uint8_t *)a1 + 60) & 0x10) == 0 )
      {
        grapher::ActorBase::FireEvent(a1, 4, a3);
        *((uint8_t *)a1 + 60) |= 0x10u;
      }
    }
    else
    {
      v12 = *((uint8_t *)a1 + 60);
      if ( (v12 & 0x20) == 0 )
      {
        grapher::ActorBase::FireEvent(a1, 5, a3);
        v10 = *((uint32_t *)a1 + 13);
        v12 = *((uint8_t *)a1 + 60) | 0x20;
        *((uint8_t *)a1 + 60) = v12;
      }
      if ( v11 > v10 )
      {
        if ( (v12 & 8) == 0 )
        {
          grapher::ActorBase::FireEvent(a1, 3, a3);
          *((uint8_t *)a1 + 60) |= 8u;
        }
      }
      else if ( (v12 & 4) == 0 )
      {
        grapher::ActorBase::FireEvent(a1, 2, a3);
        *((uint8_t *)a1 + 60) |= 4u;
      }
    }
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


