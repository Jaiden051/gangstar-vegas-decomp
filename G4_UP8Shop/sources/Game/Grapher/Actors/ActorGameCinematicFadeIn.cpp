#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCinematicFadeIn.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicFadeIn::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCinematicFadeIn::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCinematicFadeIn::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCinematicFadeIn::ActorGameCinematicFadeIn(v3, -1);
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
    ActorGameCinematicFadeIn::ActorGameCinematicFadeIn(v3, a1);
  }
  return v3;
}



// Constructor (0x845480):
int (**ActorGameCinematicFadeIn::ActorGameCinematicFadeIn(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 13) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CAC8);
  return (int (**)(int))(uintptr_t)(&off_205CAC8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCinematicFadeIn::Destroy  (binary VA: 0x0)
// Original: ActorGameCinematicFadeIn::~ActorGameCinematicFadeIn
// ----------------------------------------------------------------------------
int ActorGameCinematicFadeIn::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CAC8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_839970  (binary VA: 0x0)
// Original: sub_839970
// ----------------------------------------------------------------------------
void sub_839970(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CAC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_840D90  (binary VA: 0x0)
// Original: sub_840D90
// ----------------------------------------------------------------------------
int sub_840D90(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Fade In", (int)(uintptr_t)(&v6));
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Time to fade in (<0 ==> use xml value :: 0 == instant :: >0 == its time in MS)", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "TransitionTime", (int)(uintptr_t)(&v6) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 1, 150);
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
// Function: sub_843A60  (binary VA: 0x0)
// Original: sub_843A60
// ----------------------------------------------------------------------------
int sub_843A60(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  int *v4;
  int *v5;
  int *v6;
  int *v7;
  int *v8;

  result = *((uint32_t *)a1 + 13);
  if ( *(uint32_t *)(result + 8) == 0 )
  {
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D5248 == 0 )
      v4 = (int *)(&dword_20D5240);
    if ( (uint8_t)sub_9767E0(v4) == 0 && byte_20D186E == 0 )
    {
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v5 = nullptr;
      if ( byte_20D49A8 == 0 )
        v5 = (int *)(&dword_20D49A0);
      if ( (uint8_t)sub_82AAD0((int)(uintptr_t)(v5)) == 0 )
      {
        if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v6 = nullptr;
        if ( byte_20D49A8 == 0 )
          v6 = (int *)(&dword_20D49A0);
        sub_82D430((int)(uintptr_t)(v6), 0);
        if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v7 = nullptr;
        if ( byte_20D49A8 == 0 )
          v7 = (int *)(&dword_20D49A0);
        sub_82A420((int)(uintptr_t)(v7), 1, 1);
        if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v8 = nullptr;
        if ( byte_20D49A8 == 0 )
          v8 = (int *)(&dword_20D49A0);
        sub_82AAC0((int)(uintptr_t)(v8));
      }
    }
    grapher::ActorBase::FireEvent(a1, 2, a3);
    return G4_VCALL<int>(a1, 28, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_83A430  (binary VA: 0x0)
// Original: sub_83A430
// ----------------------------------------------------------------------------
int sub_83A430(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int result;

  grapher::ActorBase::Cancel(a1, a2);
  result = *((uint32_t *)a1 + 13);
  if ( result != 0 )
  {
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a2);
    result = sub_99B4D0(*((uint32_t *)a1 + 13), 0);
    *((uint32_t *)a1 + 13) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_846830  (binary VA: 0x0)
// Original: sub_846830
// ----------------------------------------------------------------------------
int sub_846830(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v6;
  int *v7;
  int *v8;
  int v9;
  grapher::ActorVariable::Self *v10;
  grapher::ActorContext::Self *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  void *v16;
  int *v17;
  g4_cxa_guard_t *v18;
  g4_cxa_guard_t *v19;
  g4_cxa_guard_t *v20;
  g4_cxa_guard_t *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  grapher::ActorContext::Self *v28;

  if ( a3 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
    v6 = sub_837200((int)(uintptr_t)(a2), Variable, nullptr, v12, v14, (int)(uintptr_t)(v16), (int)(uintptr_t)(v18), (int)(uintptr_t)(v20), v22, v24, v26, a1);
    if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
    {
      v17 = (int *)(&dword_20D5DA8);
      sub_9BA6C0(&dword_20D5DA8);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
      __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
    }
    v7 = nullptr;
    if ( byte_20D5DAC == 0 )
      v7 = (int *)(&dword_20D5DA8);
    v19 = (g4_cxa_guard_t *)(&dword_20D5DA8);
    if ( (uint8_t)sub_977C30(v7, v6) != 0 )
    {
      if ( byte_20D5DA0 == 0 )
      {
        v21 = (g4_cxa_guard_t *)&byte_20D5DA0;
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
        {
          sub_9BA6C0(&dword_20D5DA8);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
          __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
        }
      }
      v8 = nullptr;
      if ( byte_20D5DAC == 0 )
        v8 = (int *)(&dword_20D5DA8);
      v9 = sub_99C110(v8, v6);
      *((uint32_t *)a2 + 13) = v9;
      if ( v9 != 0 )
      {
        if ( byte_20D5B50 == 0 )
        {
          v19 = (g4_cxa_guard_t *)&byte_20D5B50;
          if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
          {
            grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
            __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
          }
        }
        grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a2, a4);
        v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
        v11 = sub_837200((int)(uintptr_t)(a2), v10, nullptr, v13, v15, (int)(uintptr_t)(v17), (int)(uintptr_t)(v19), (int)(uintptr_t)(v21), v23, v25, v27, v28);
        if ( (int)(uintptr_t)(v11) >= 0 )
          *(uint32_t *)(*((uint32_t *)a2 + 13) + 24) = (uint32_t)(uintptr_t)(v11);
      }
      else
      {
        grapher::ActorBase::FireEvent(a2, 2, a4);
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}


