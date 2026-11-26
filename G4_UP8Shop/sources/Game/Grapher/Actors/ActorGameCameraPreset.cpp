#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCameraPreset.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCameraPreset::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCameraPreset::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGameCameraPreset::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCameraPreset::ActorGameCameraPreset(v3, 0xFFFFFFFF);
    if ( v3 != nullptr )
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
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCameraPreset::ActorGameCameraPreset(v3, a1);
  }
  return v3;
}



// Constructor (0x854bc0):
int (**ActorGameCameraPreset::ActorGameCameraPreset(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D7E8);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205D7E8));
}
// ----------------------------------------------------------------------------
// Function: ActorGameCameraPreset::Destroy  (binary VA: 0x0)
// Original: ActorGameCameraPreset::~ActorGameCameraPreset
// ----------------------------------------------------------------------------
void ActorGameCameraPreset::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D4D0  (binary VA: 0x0)
// Original: sub_84D4D0
// ----------------------------------------------------------------------------
void sub_84D4D0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84E170  (binary VA: 0x0)
// Original: sub_84E170
// ----------------------------------------------------------------------------
int sub_84E170(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int v6;
  g4_int128_t v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16[4];

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "{Base}", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Camera Preset", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Cameras", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "In", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 1, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Name of the preset from camera_presets.xml", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Preset", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 4, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Preset", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_855B10  (binary VA: 0x0)
// Original: sub_855B10
// ----------------------------------------------------------------------------
int sub_855B10(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  char v4;
  char v5;
  uint32_t *v6;
  uint32_t **v7;
  char v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  char v12;
  uint32_t *v13;
  void *v14;
  void *v15;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  void *v22;
  void *v23;
  g4_cxa_guard_t *v24;
  int v25;
  int v26;
  uint32_t v27[8];

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(v27, (int)(uintptr_t)(a1), Variable, a3, v18, v19, v20, v21, (int)(uintptr_t)(v22), (int)(uintptr_t)(v24), v25);
  v4 = byte_20D4E40;
  if ( byte_20D4E40 == 0 )
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
    {
      sub_9C9CC0(&unk_20D4E60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
    }
    v4 = byte_20D4E40;
  }
  v5 = byte_20D4E64;
  v6 = nullptr;
  if ( byte_20D4E64 == 0 )
    v6 = (uint32_t *)(&unk_20D4E60);
  if ( v6[5] != 0 )
  {
    if ( v4 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      }
      v5 = byte_20D4E64;
    }
    v7 = nullptr;
    if ( v5 == 0 )
      v7 = (uint32_t **)&unk_20D4E60;
    (*(void (**)(uint32_t *, uint32_t *))(*v7[5] + 76))(v7[5], v27);
    v4 = byte_20D4E40;
  }
  v26 = *(uint32_t *)(dword_20DA1B0 + 64);
  if ( v4 == 0 )
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
    {
      sub_9C9CC0(&unk_20D4E60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
    }
    v4 = byte_20D4E40;
  }
  v8 = byte_20D4E64;
  v9 = nullptr;
  if ( byte_20D4E64 == 0 )
    v9 = (uint32_t *)(&unk_20D4E60);
  v10 = 0;
  if ( v9[5] != 0 )
  {
    if ( v4 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      }
      v8 = byte_20D4E64;
    }
    v11 = nullptr;
    if ( v8 == 0 )
      v11 = (uint32_t *)(&unk_20D4E60);
    v10 = sub_973DD0(v11[5]);
    v4 = byte_20D4E40;
  }
  if ( v4 == 0 )
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
    {
      sub_9C9CC0(&unk_20D4E60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
    }
    v4 = byte_20D4E40;
  }
  v12 = byte_20D4E64;
  v13 = nullptr;
  if ( byte_20D4E64 == 0 )
    v13 = (uint32_t *)(&unk_20D4E60);
  v14 = (void *)v13[4];
  if ( v4 == 0 )
  {
    v23 = v14;
    v17 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40);
    v14 = v23;
    v12 = byte_20D4E64;
    if ( v17 != 0 )
    {
      sub_9C9CC0(&unk_20D4E60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      v12 = byte_20D4E64;
      v14 = v23;
    }
  }
  v15 = nullptr;
  if ( v12 == 0 )
    v15 = &unk_20D4E60;
  sub_9CB030(v15, v14, v10, v26, 0, 1, 0, 1065353216);
  grapher::ActorBase::FireEvent(a1, 1, a3);
  return ((g4_std::string::Destroy(v27)), (int)0);
}


