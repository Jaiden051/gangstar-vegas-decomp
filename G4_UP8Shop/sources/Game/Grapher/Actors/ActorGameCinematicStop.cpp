#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCinematicStop.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicStop::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCinematicStop::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCinematicStop::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCinematicStop::ActorGameCinematicStop(v3, -1);
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
    ActorGameCinematicStop::ActorGameCinematicStop(v3, a1);
  }
  return v3;
}



// Constructor (0x845b90):
int (**ActorGameCinematicStop::ActorGameCinematicStop(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CCC8);
  return (int (**)(int))(uintptr_t)(&off_205CCC8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCinematicStop::Destroy  (binary VA: 0x0)
// Original: ActorGameCinematicStop::~ActorGameCinematicStop
// ----------------------------------------------------------------------------
int ActorGameCinematicStop::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CCC8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_839B70  (binary VA: 0x0)
// Original: sub_839B70
// ----------------------------------------------------------------------------
void sub_839B70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CCC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839180  (binary VA: 0x0)
// Original: sub_839180
// ----------------------------------------------------------------------------
int sub_839180(grapher::ActorBase::Self *a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "Stop Cinematic", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3);
  g4_std::string::Destroy(&v3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "Cinematics", (int)(uintptr_t)(&v2) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "In", (int)(uintptr_t)(&v2) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), "Out", (int)(uintptr_t)(&v2) + 3);
  grapher::ActorBase::AddPin(a1, 1, v6, 0, -1);
  { g4_std::string::Destroy(v6); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8438B0  (binary VA: 0x0)
// Original: sub_8438B0
// ----------------------------------------------------------------------------
int * sub_8438B0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *result;

  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D5248 == 0 )
    result = (int *)(&dword_20D5240);
  if ( result[4] == 0 )
  {
    G4_VCALL<void>(a1, 28, a3);
    return (int *)grapher::ActorBase::FireEvent(a1, 1, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_843810  (binary VA: 0x0)
// Original: sub_843810
// ----------------------------------------------------------------------------
int sub_843810()
{
  int *v0;

  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v0 = nullptr;
  if ( byte_20D5248 == 0 )
    v0 = (int *)(&dword_20D5240);
  return sub_9767D0(v0) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: sub_8440D0  (binary VA: 0x0)
// Original: sub_8440D0
// ----------------------------------------------------------------------------
int sub_8440D0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  char v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  bool v12;
  int *v13;
  int *v14;
  int *v16;

  G4_VCALL<void>(a1, 28, a3);
  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v4 = byte_20D5248;
  v5 = nullptr;
  if ( byte_20D5248 == 0 )
    v5 = (int *)(&dword_20D5240);
  if ( v5[4] == 2 )
  {
    if ( byte_20D5220 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
      {
        sub_976230(&dword_20D5240);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
        __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      }
      v4 = byte_20D5248;
    }
    v16 = nullptr;
    if ( v4 == 0 )
      v16 = (int *)(&dword_20D5240);
    sub_9F3AA0(v16, 3, 0);
  }
  v6 = sub_8F0680(v3);
  G4_VCALL<void>(v6, 120, 136, 0);
  *(uint8_t *)(sub_8F0680(v7) + 2896) = 0;
  v9 = sub_8F0680(v8);
  sub_8F3630(v9);
  v11 = sub_8F0680(v10);
  v12 = byte_20D4A50 == 0;
  *(uint8_t *)(v11 + 190) = 0;
  if ( v12 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v13 = nullptr;
  if ( byte_20D4A64 == 0 )
    v13 = (int *)(&dword_20D4A60);
  sub_5B4A20((int)(uintptr_t)(v13), 0, (int (*)(int))sub_83A000, (int (*)(int))sub_839F50);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v14 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v14 = (int *)(&dword_20D4AC0);
  return sub_AB55E0((int)(uintptr_t)(v14), 1u);
}


