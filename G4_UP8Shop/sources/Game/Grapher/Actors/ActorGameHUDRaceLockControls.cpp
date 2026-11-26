#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameHUDRaceLockControls.h"

// ----------------------------------------------------------------------------
// Function: ActorGameHUDRaceLockControls::CreateInstance  (binary VA: 0x0)
// Original: ActorGameHUDRaceLockControls::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameHUDRaceLockControls::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameHUDRaceLockControls::ActorGameHUDRaceLockControls(v3, -1);
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
    ActorGameHUDRaceLockControls::ActorGameHUDRaceLockControls(v3, a1);
  }
  return v3;
}



// Constructor (0xc4f980):
int (**ActorGameHUDRaceLockControls::ActorGameHUDRaceLockControls(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C8A8);
  return (int (**)(int))(uintptr_t)(&off_206C8A8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameHUDRaceLockControls::Destroy  (binary VA: 0x0)
// Original: ActorGameHUDRaceLockControls::~ActorGameHUDRaceLockControls
// ----------------------------------------------------------------------------
void ActorGameHUDRaceLockControls::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C8A8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C401A0  (binary VA: 0x0)
// Original: sub_C401A0
// ----------------------------------------------------------------------------
void sub_C401A0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C8A8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C42530  (binary VA: 0x0)
// Original: sub_C42530
// ----------------------------------------------------------------------------
int sub_C42530(grapher::ActorBase::Self *a1)
{
  int v2;
  uint8_t v3[7];
  int v4;
  int v5;
  int v6;
  int v7[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[4]), "Lock Race Controls", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3[4]);
  g4_std::string::Destroy(&v3[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "Deprecated", (int)(uintptr_t)(v3));
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Lock", (int)(uintptr_t)(&v3[1]));
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Unlock", (int)(uintptr_t)(&v3[2]));
  grapher::ActorBase::AddPin(a1, 1, &v6, 1, -1);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Out", (int)(uintptr_t)(&v3[3]));
  grapher::ActorBase::AddPin(a1, 2, v7, 0, -1);
  { g4_std::string::Destroy(v7); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C3F6F0  (binary VA: 0x0)
// Original: sub_C3F6F0
// ----------------------------------------------------------------------------
int sub_C3F6F0(int a1, int a2)
{
  int result;

  result = dword_20DA2A0;
  if ( dword_20DA2A0 == 0 )
    return G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C4D420  (binary VA: 0x0)
// Original: sub_C4D420
// ----------------------------------------------------------------------------
int * sub_C4D420(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int *result;

  grapher::ActorBase::Cancel(a1, a2);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D49A8 == 0 )
    result = (int *)(&dword_20D49A0);
  *((uint8_t *)result + 72) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C4D4D0  (binary VA: 0x0)
// Original: sub_C4D4D0
// ----------------------------------------------------------------------------
int sub_C4D4D0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;

  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D49A8 == 0 )
    v3 = (int *)(&dword_20D49A0);
  *((uint8_t *)v3 + 72) = a2 == 0;
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}


