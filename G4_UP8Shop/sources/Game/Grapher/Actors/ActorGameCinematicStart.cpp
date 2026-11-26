#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCinematicStart.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicStart::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCinematicStart::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCinematicStart::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCinematicStart::ActorGameCinematicStart(v3, -1);
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
    ActorGameCinematicStart::ActorGameCinematicStart(v3, a1);
  }
  return v3;
}



// Constructor (0x845b40):
int (**ActorGameCinematicStart::ActorGameCinematicStart(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint8_t *)a1 + 52) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC88);
  return (int (**)(int))(uintptr_t)(&off_205CC88);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCinematicStart::Destroy  (binary VA: 0x0)
// Original: ActorGameCinematicStart::~ActorGameCinematicStart
// ----------------------------------------------------------------------------
int ActorGameCinematicStart::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC88);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_839B30  (binary VA: 0x0)
// Original: sub_839B30
// ----------------------------------------------------------------------------
void sub_839B30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_83B290  (binary VA: 0x0)
// Original: sub_83B290
// ----------------------------------------------------------------------------
int sub_83B290(grapher::ActorBase::Self *a1)
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
  int v17[8];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Start Cinematic", (int)(uintptr_t)(&v4));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Cinematics", (int)(uintptr_t)(&v4) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "In", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Out", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v16, 0, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Skip", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v17, 0, -1);
  g4_std::string::Destroy(v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Show/hide the skip button", (int)(uintptr_t)(&v5) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Show skip", (int)(uintptr_t)(&v4) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v9, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Show skip", (int)(uintptr_t)(&v5));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v2, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Use Skip Fade", (int)(uintptr_t)(&v5) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Use Skip Fade", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v13), v3, 1, 0, (int)(uintptr_t)(&v14), 1);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  { g4_std::string::Destroy(&v14); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_847700  (binary VA: 0x0)
// Original: sub_847700
// ----------------------------------------------------------------------------
int sub_847700(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int result;
  bool v5;
  int *v6;
  int v7;
  int v8;
  grapher::ActorVariable::Self *Variable;
  int v10;
  int *v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  g4_cxa_guard_t *v17;
  int v18;
  int v19;

  if ( *((uint8_t *)a1 + 52) != 0 )
  {
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v3 = nullptr;
    if ( byte_20D5248 == 0 )
      v3 = (int *)(&dword_20D5240);
    result = sub_9767E0(v3);
    if ( (uint8_t)result == 0 )
      return G4_VCALL<int>(a1, 28, a3);
  }
  else
  {
    v5 = byte_20D4A50 == 0;
    *((uint8_t *)a1 + 52) = 1;
    if ( v5 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
    {
      v16 = (int *)(&dword_20D4A60);
      sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
      __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
    }
    v6 = nullptr;
    if ( byte_20D4A64 == 0 )
      v6 = (int *)(&dword_20D4A60);
    sub_5B4A20((int)(uintptr_t)(v6), 0, (int (*)(int))sub_83A040, (int (*)(int))sub_838FD0);
    v8 = sub_8F0680(v7);
    sub_8F5010(v8);
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
    v10 = (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v13, v14, v15, (int)(uintptr_t)(v16), (int)(uintptr_t)(v17), v18, v19) == 0 ? 2 : 0;
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v11 = nullptr;
    if ( byte_20D5248 == 0 )
      v11 = (int *)(&dword_20D5240);
    sub_9F3AA0(v11, 1, v10);
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v12 = nullptr;
    if ( byte_20D5248 == 0 )
      v12 = (int *)(&dword_20D5240);
    sub_976820(v12, a1, a3);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_843990  (binary VA: 0x0)
// Original: sub_843990
// ----------------------------------------------------------------------------
int sub_843990(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int *v2;

  grapher::ActorBase::Cancel(a1, a2);
  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D5248 == 0 )
    v2 = (int *)(&dword_20D5240);
  return sub_976820(v2, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_83A080  (binary VA: 0x0)
// Original: sub_83A080
// ----------------------------------------------------------------------------
int sub_83A080(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  bool v7;
  int *v8;
  int v9;
  int result;

  G4_VCALL<void>(a1, 28, a3);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  v4 = sub_8F0680(v3);
  G4_VCALL<void>(v4, 120, 136, 1);
  v6 = sub_8F0680(v5);
  v7 = byte_20D4AB0 == 0;
  *(uint8_t *)(v6 + 2896) = 1;
  if ( v7 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v8 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v8 = (int *)(&dword_20D4AC0);
  sub_AB55E0((int)(uintptr_t)(v8), 0);
  result = sub_8F0680(v9);
  *(uint8_t *)(result + 190) = 1;
  *((uint8_t *)a1 + 52) = 0;
  return result;
}


