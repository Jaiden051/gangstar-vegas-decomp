#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameSoundFX.h"

// ----------------------------------------------------------------------------
// Function: ActorGameSoundFX::CreateInstance  (binary VA: 0x0)
// Original: ActorGameSoundFX::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameSoundFX::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameSoundFX::ActorGameSoundFX(v3, -1);
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
    ActorGameSoundFX::ActorGameSoundFX(v3, a1);
  }
  return v3;
}



// Constructor (0x8299d0):
int (**ActorGameSoundFX::ActorGameSoundFX(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BA68);
  return (int (**)(int))(uintptr_t)(&off_205BA68);
}
// ----------------------------------------------------------------------------
// Function: ActorGameSoundFX::Destroy  (binary VA: 0x0)
// Original: ActorGameSoundFX::~ActorGameSoundFX
// ----------------------------------------------------------------------------
int ActorGameSoundFX::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BA68);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_820630  (binary VA: 0x0)
// Original: sub_820630
// ----------------------------------------------------------------------------
void sub_820630(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BA68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_824FB0  (binary VA: 0x0)
// Original: sub_824FB0
// ----------------------------------------------------------------------------
int sub_824FB0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Sound FX", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Sounds", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Play", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Stop", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v15, 0, -1);
  g4_std::string::Destroy(v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Name of the SFX to play", (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "FX", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v7 = v3;
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 4, &v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "FX", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( v7 != nullptr )
    G4_VCALL<void>(v7, 44);
  g4_std::string::Destroy(&v10);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_833E50  (binary VA: 0x0)
// Original: sub_833E50
// ----------------------------------------------------------------------------
int sub_833E50(grapher::ActorBase::Self *a1, char *a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  glf::Self *v5;
  int *v6;
  int v7;
  char *v8;
  int *v9;
  int v10;
  glf::Self *v11;
  char *v12;
  char *obj;
  grapher::ActorContext::Self *v14;
  uint32_t v15[4];
  uint8_t v16[40];
  grapher::ActorBase::Self **v17;

  v17 = &a1;
  v3 = a1;
  obj = a2;
  v14 = a3;
  grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(v15);
  if ( obj != nullptr )
  {
    if ( obj == (char *)((uint8_t *)&dword_0 + 1) )
    {
      v8 = (char *)v15[0];
      if ( byte_20D4AB0 == 0 )
      {
        v12 = (char *)v15[0];
        v10 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0);
        v8 = v12;
        if ( v10 != 0 )
        {
          sub_ADB4E0(&dword_20D4AC0);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
          __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
          v8 = v12;
        }
      }
      v9 = nullptr;
      if ( byte_20D4AC4 == 0 )
        v9 = (int *)(&dword_20D4AC0);
      sub_AC3280((int)(uintptr_t)(v9), 2, v8, 1056964608);
    }
  }
  else
  {
    v5 = (glf::Self *)v15[0];
    if ( byte_20D4AB0 == 0 )
    {
      v11 = (glf::Self *)v15[0];
      v7 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0);
      v5 = v11;
      if ( v7 != 0 )
      {
        sub_ADB4E0(&dword_20D4AC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
        __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
        v5 = v11;
      }
    }
    v6 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v6 = (int *)(&dword_20D4AC0);
    sub_AC4FE0((vox::EmitterHandle::Self *)v16, (int)(uintptr_t)(v6), v5, 1028443341);
    vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v16);
  }
  grapher::ActorBase::FireEvent(v3, 2, v14);
  return ((g4_std::string::Destroy(v15)), (int)0);
}


