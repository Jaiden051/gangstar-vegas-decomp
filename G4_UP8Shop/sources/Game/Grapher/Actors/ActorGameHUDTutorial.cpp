#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameHUDTutorial.h"

// ----------------------------------------------------------------------------
// Function: ActorGameHUDTutorial::CreateInstance  (binary VA: 0x0)
// Original: ActorGameHUDTutorial::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameHUDTutorial::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameHUDTutorial::ActorGameHUDTutorial(v3, -1);
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
    ActorGameHUDTutorial::ActorGameHUDTutorial(v3, a1);
  }
  return v3;
}



// Constructor (0xc4fc30):
int (**ActorGameHUDTutorial::ActorGameHUDTutorial(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB08);
  return (int (**)(int))(uintptr_t)(&off_206CB08);
}
// ----------------------------------------------------------------------------
// Function: ActorGameHUDTutorial::Destroy  (binary VA: 0x0)
// Original: ActorGameHUDTutorial::~ActorGameHUDTutorial
// ----------------------------------------------------------------------------
void ActorGameHUDTutorial::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FD90  (binary VA: 0x0)
// Original: sub_C3FD90
// ----------------------------------------------------------------------------
void sub_C3FD90(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C42000  (binary VA: 0x0)
// Original: sub_C42000
// ----------------------------------------------------------------------------
int sub_C42000(grapher::ActorBase::Self *a1)
{
  int v2;
  uint8_t v3[7];
  int v4;
  int v5;
  int v6;
  int v7[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[4]), "Tutorial", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3[4]);
  g4_std::string::Destroy(&v3[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "HUD", (int)(uintptr_t)(v3));
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Begin", (int)(uintptr_t)(&v3[1]));
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "End", (int)(uintptr_t)(&v3[2]));
  grapher::ActorBase::AddPin(a1, 1, &v6, 1, -1);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Out", (int)(uintptr_t)(&v3[3]));
  grapher::ActorBase::AddPin(a1, 2, v7, 0, -1);
  { g4_std::string::Destroy(v7); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C4D8D0  (binary VA: 0x0)
// Original: sub_C4D8D0
// ----------------------------------------------------------------------------
int sub_C4D8D0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v4;
  int *v5;

  if ( a2 != 0 )
  {
    if ( a2 == 1 )
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
      *((uint8_t *)v5 + 74) = 0;
    }
  }
  else
  {
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D49A8 == 0 )
      v4 = (int *)(&dword_20D49A0);
    *((uint8_t *)v4 + 74) = 1;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}


