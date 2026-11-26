#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameSoundMusic.h"

// ----------------------------------------------------------------------------
// Function: ActorGameSoundMusic::CreateInstance  (binary VA: 0x0)
// Original: ActorGameSoundMusic::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameSoundMusic::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameSoundMusic::ActorGameSoundMusic(v3, -1);
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
    ActorGameSoundMusic::ActorGameSoundMusic(v3, a1);
  }
  return v3;
}



// Constructor (0x829a90):
int (**ActorGameSoundMusic::ActorGameSoundMusic(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BB28);
  return (int (**)(int))(uintptr_t)(&off_205BB28);
}
// ----------------------------------------------------------------------------
// Function: ActorGameSoundMusic::Destroy  (binary VA: 0x0)
// Original: ActorGameSoundMusic::~ActorGameSoundMusic
// ----------------------------------------------------------------------------
int ActorGameSoundMusic::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BB28);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8206F0  (binary VA: 0x0)
// Original: sub_8206F0
// ----------------------------------------------------------------------------
void sub_8206F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BB28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_825290  (binary VA: 0x0)
// Original: sub_825290
// ----------------------------------------------------------------------------
int sub_825290(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  uint32_t *v4;
  void *v5;
  int v6;
  int v7;
  int64_t v8;
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
  int v19[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Music", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Sounds", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Play", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Stop", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 2, v19, 0, -1);
  g4_std::string::Destroy(v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Name of the music to play", (int)(uintptr_t)(&v7) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Song", (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v8) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v11, 4, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Song", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v5, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( HIDWORD(v8) != 0 )
    G4_VCALL<void>(HIDWORD(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Is the music looping or not?", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Loop", (int)(uintptr_t)(&v7) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v14, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Loop", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v3, 1, 0, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  { g4_std::string::Destroy(&v16); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_81FAD0  (binary VA: 0x0)
// Original: sub_81FAD0
// ----------------------------------------------------------------------------
int * sub_81FAD0(int a1, int a2)
{
  int *result;

  result = (int *)(&dword_20DA2A0);
  if ( dword_20DA2A0 == 0 )
    return (int *)G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_833C80  (binary VA: 0x0)
// Original: sub_833C80
// ----------------------------------------------------------------------------
int sub_833C80(grapher::ActorBase::Self *a1)
{
  char *v1;
  int *v2;
  int v4;
  char v5;
  char *obj;
  uint32_t v7[4];
  uint32_t v8[6];
  char v9;
  char v10;
  int v11;
  char v12;
  int v13;
  grapher::ActorBase::Self **v14;

  v14 = &a1;
  grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(v7);
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  if ( byte_20D4AC4 == 0 )
  {
    memset(v8, 0, 12);
    v8[3] = 1028443341;
    v8[4] = 1065353216;
    v8[5] = 1065353216;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v1 = (char *)v7[0];
    v2 = (int *)(&dword_20D4AC0);
    if ( byte_20D4AB0 == 0 )
    {
      obj = (char *)v7[0];
      v4 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0);
      v1 = obj;
      v5 = byte_20D4AC4;
      if ( v4 != 0 )
      {
        sub_ADB4E0(&dword_20D4AC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
        __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
        v5 = byte_20D4AC4;
        v1 = obj;
      }
      v2 = nullptr;
      if ( v5 == 0 )
        v2 = (int *)(&dword_20D4AC0);
    }
    sub_AC2DB0((int)(uintptr_t)(v2), 2, v1, (int)(uintptr_t)(v8));
  }
  return ((g4_std::string::Destroy(v7)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_834A80  (binary VA: 0x0)
// Original: sub_834A80
// ----------------------------------------------------------------------------
int sub_834A80(grapher::ActorBase::Self *a1, char *a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *Variable;
  char v7;
  int *v8;
  char *v9;
  int *v10;
  int v11;
  char *v12;
  char *obj;
  g4_cxa_guard_t *v14;
  uint32_t v15[2];
  uint8_t v16[32];
  int v17[6];
  char v18;
  char v19;
  int v20;
  char v21;
  int v22;
  grapher::ActorBase::Self **v23;

  v23 = &a1;
  v3 = a1;
  v4 = a3;
  obj = a2;
  grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(v15);
  if ( obj != nullptr )
  {
    if ( obj == (char *)((uint8_t *)&dword_0 + 1) )
    {
      v9 = (char *)v15[0];
      if ( byte_20D4AB0 == 0 )
      {
        v12 = (char *)v15[0];
        v11 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0);
        v9 = v12;
        if ( v11 != 0 )
        {
          sub_ADB4E0(&dword_20D4AC0);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
          __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
          v9 = v12;
        }
      }
      v10 = nullptr;
      if ( byte_20D4AC4 == 0 )
        v10 = (int *)(&dword_20D4AC0);
      sub_AC3280((int)(uintptr_t)(v10), 2, v9, 1065353216);
    }
  }
  else
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
    v7 = sub_837730(v3, Variable, v4);
    memset(v17, 0, 12);
    v17[3] = 1028443341;
    v17[4] = 1065353216;
    v17[5] = 1065353216;
    v18 = v7;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v14 = (g4_cxa_guard_t *)v15[0];
    if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
    {
      sub_ADB4E0(&dword_20D4AC0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
      __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
    }
    v8 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v8 = (int *)(&dword_20D4AC0);
    sub_AC3450((vox::EmitterHandle::Self *)v16, (int)(uintptr_t)(v8), 2, (glf::Self *)v14, v17);
    vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v16);
  }
  grapher::ActorBase::FireEvent(v3, 2, v4);
  return ((g4_std::string::Destroy(v15)), (int)0);
}


