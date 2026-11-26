#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterProstrate.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterProstrate::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterProstrate::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterProstrate::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterProstrate::ActorGameCharacterProstrate(v3, -1);
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
    ActorGameCharacterProstrate::ActorGameCharacterProstrate(v3, a1);
  }
  return v3;
}



// Constructor (0xc66620):
int (**ActorGameCharacterProstrate::ActorGameCharacterProstrate(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CF68);
  return (int (**)(int))(uintptr_t)(&off_206CF68);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterProstrate::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterProstrate::~ActorGameCharacterProstrate
// ----------------------------------------------------------------------------
void ActorGameCharacterProstrate::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CF68);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B450  (binary VA: 0x0)
// Original: sub_C5B450
// ----------------------------------------------------------------------------
void sub_C5B450(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CF68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5C8B0  (binary VA: 0x0)
// Original: sub_C5C8B0
// ----------------------------------------------------------------------------
int sub_C5C8B0(grapher::ActorBase::Self *a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "Prostrate", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3);
  g4_std::string::Destroy(&v3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "AI", (int)(uintptr_t)(&v2) + 1);
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
// Function: sub_C5B9C0  (binary VA: 0x0)
// Original: sub_C5B9C0
// ----------------------------------------------------------------------------
int sub_C5B9C0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int v4;
  int v6[4];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6) + 1, "Subject", (int)(uintptr_t)(v6));
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4A64 == 0 )
    v3 = (int *)(&dword_20D4A60);
  v4 = sub_5B44E0((int)(uintptr_t)(v3), (int)(uintptr_t)(v6) + 1, (unsigned int)(uintptr_t)(a3));
  g4_std::string::Destroy((char *)v6 + 1);
  if ( v4 != 0 )
    sub_9D7630(v4);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


