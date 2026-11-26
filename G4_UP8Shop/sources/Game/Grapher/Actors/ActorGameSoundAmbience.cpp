#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameSoundAmbience.h"

// ----------------------------------------------------------------------------
// Function: ActorGameSoundAmbience::CreateInstance  (binary VA: 0x0)
// Original: ActorGameSoundAmbience::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameSoundAmbience::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameSoundAmbience::ActorGameSoundAmbience(v3, -1);
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
    ActorGameSoundAmbience::ActorGameSoundAmbience(v3, a1);
  }
  return v3;
}



// Constructor (0x829a10):
int (**ActorGameSoundAmbience::ActorGameSoundAmbience(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BAA8);
  return (int (**)(int))(uintptr_t)(&off_205BAA8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameSoundAmbience::Destroy  (binary VA: 0x0)
// Original: ActorGameSoundAmbience::~ActorGameSoundAmbience
// ----------------------------------------------------------------------------
int ActorGameSoundAmbience::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BAA8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_820670  (binary VA: 0x0)
// Original: sub_820670
// ----------------------------------------------------------------------------
void sub_820670(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BAA8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8287D0  (binary VA: 0x0)
// Original: sub_8287D0
// ----------------------------------------------------------------------------
int sub_8287D0(grapher::ActorBase::Self *a1)
{
  int v2;
  uint8_t v3[7];
  int v4;
  int v5;
  int v6;
  int v7[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[4]), "Ambience", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3[4]);
  g4_std::string::Destroy(&v3[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "Sounds", (int)(uintptr_t)(v3));
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Play", (int)(uintptr_t)(&v3[1]));
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Stop", (int)(uintptr_t)(&v3[2]));
  grapher::ActorBase::AddPin(a1, 1, &v6, 1, -1);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Out", (int)(uintptr_t)(&v3[3]));
  grapher::ActorBase::AddPin(a1, 2, v7, 0, -1);
  { g4_std::string::Destroy(v7); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_822CB0  (binary VA: 0x0)
// Original: sub_822CB0
// ----------------------------------------------------------------------------
int sub_822CB0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v4;
  int *v5;

  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
      {
        sub_ADB4E0(&dword_20D4AC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
        __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
      }
      v5 = nullptr;
      if ( byte_20D4AC4 == 0 )
        v5 = (int *)(&dword_20D4AC0);
      sub_AB4BF0((int)(uintptr_t)(v5));
    }
  }
  else
  {
    if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
    {
      sub_ADB4E0(&dword_20D4AC0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
      __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v4 = (int *)(&dword_20D4AC0);
    sub_AB4E60((int)(uintptr_t)(v4));
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}


