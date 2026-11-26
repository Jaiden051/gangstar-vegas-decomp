#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCinematicFadeOut.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicFadeOut::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCinematicFadeOut::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCinematicFadeOut::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCinematicFadeOut::ActorGameCinematicFadeOut(v3, -1);
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
    ActorGameCinematicFadeOut::ActorGameCinematicFadeOut(v3, a1);
  }
  return v3;
}



// Constructor (0x8454d0):
int (**ActorGameCinematicFadeOut::ActorGameCinematicFadeOut(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 13) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB08);
  return (int (**)(int))(uintptr_t)(&off_205CB08);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCinematicFadeOut::Destroy  (binary VA: 0x0)
// Original: ActorGameCinematicFadeOut::~ActorGameCinematicFadeOut
// ----------------------------------------------------------------------------
int ActorGameCinematicFadeOut::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB08);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8399B0  (binary VA: 0x0)
// Original: sub_8399B0
// ----------------------------------------------------------------------------
void sub_8399B0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_841190  (binary VA: 0x0)
// Original: sub_841190
// ----------------------------------------------------------------------------
int sub_841190(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  uint32_t *v4;
  void *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
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
  int v21[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Fade Out", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Cinematics", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "In", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Out", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Complete", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 2, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Time to fade out (<0 ==> use xml value :: 0 == instant :: >0 == its time in MS)", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "TransitionTime", (int)(uintptr_t)(&v6) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 1, 300);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Transition Time", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v3, 1, 0, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "FadeInfo, see giv_fadeinfos.xml", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "FadeInfo", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "FadeInfos.Script", (int)(uintptr_t)(&v7) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v15);
  v9 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v16, 11, &v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "FadeInfo", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v5, 1, 0, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  if ( v9 != nullptr )
    G4_VCALL<void>(v9, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v16);
  { g4_std::string::Destroy(&v18); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_838F60  (binary VA: 0x0)
// Original: sub_838F60
// ----------------------------------------------------------------------------
int sub_838F60(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  result = *((uint32_t *)a1 + 13);
  if ( result != 0 && *(uint32_t *)(result + 8) == 2 )
  {
    grapher::ActorBase::FireEvent(a1, 2, a3);
    return G4_VCALL<int>(a1, 28, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_83A350  (binary VA: 0x0)
// Original: sub_83A350
// ----------------------------------------------------------------------------
int sub_83A350(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int result;

  result = grapher::ActorBase::Cancel(a1, a2);
  if ( *((uint32_t *)a1 + 13) != 0 )
  {
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a2);
    result = sub_99B4D0(*((uint32_t *)a1 + 13), 2);
    *((uint32_t *)a1 + 13) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_8464A0  (binary VA: 0x0)
// Original: sub_8464A0
// ----------------------------------------------------------------------------
int sub_8464A0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int *v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v8;
  int *v9;
  int *v10;
  int v11;
  grapher::ActorVariable::Self *v12;
  grapher::ActorContext::Self *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  void *v18;
  int *v19;
  g4_cxa_guard_t *v20;
  g4_cxa_guard_t *v21;
  g4_cxa_guard_t *v22;
  g4_cxa_guard_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  grapher::ActorContext::Self *v30;

  if ( a3 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
    v8 = sub_837200((int)(uintptr_t)(a2), Variable, nullptr, v14, v16, (int)(uintptr_t)(v18), (int)(uintptr_t)(v20), (int)(uintptr_t)(v22), v24, v26, v28, a1);
    if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
    {
      v19 = (int *)(&dword_20D5DA8);
      sub_9BA6C0(&dword_20D5DA8);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
      __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
    }
    v9 = nullptr;
    if ( byte_20D5DAC == 0 )
      v9 = (int *)(&dword_20D5DA8);
    v21 = (g4_cxa_guard_t *)(&dword_20D5DA8);
    if ( (uint8_t)sub_977C30(v9, v8) != 0 )
    {
      if ( byte_20D5DA0 == 0 )
      {
        v23 = (g4_cxa_guard_t *)&byte_20D5DA0;
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
        {
          sub_9BA6C0(&dword_20D5DA8);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
          __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
        }
      }
      v10 = nullptr;
      if ( byte_20D5DAC == 0 )
        v10 = (int *)(&dword_20D5DA8);
      v11 = sub_99C000(v10, v8);
      *((uint32_t *)a2 + 13) = v11;
      if ( v11 != 0 )
      {
        if ( byte_20D5B50 == 0 )
        {
          v21 = (g4_cxa_guard_t *)&byte_20D5B50;
          if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
          {
            grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
            __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
          }
        }
        grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a2, a4);
        v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
        v13 = sub_837200((int)(uintptr_t)(a2), v12, nullptr, v15, v17, (int)(uintptr_t)(v19), (int)(uintptr_t)(v21), (int)(uintptr_t)(v23), v25, v27, v29, v30);
        if ( (int)(uintptr_t)(v13) >= 0 )
          *(uint32_t *)(*((uint32_t *)a2 + 13) + 20) = (uint32_t)(uintptr_t)(v13);
      }
      else
      {
        grapher::ActorBase::FireEvent(a2, 2, a4);
      }
    }
  }
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D49A8 == 0 )
    v4 = (int *)(&dword_20D49A0);
  sub_82A420((int)(uintptr_t)(v4), 1, 0);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v5 = nullptr;
  if ( byte_20D49A8 == 0 )
    v5 = (int *)(&dword_20D49A0);
  sub_82D060((int)(uintptr_t)(v5), 0);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}


