#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameVehicleToggleRadio.h"

// ----------------------------------------------------------------------------
// Function: ActorGameVehicleToggleRadio::CreateInstance  (binary VA: 0x0)
// Original: ActorGameVehicleToggleRadio::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameVehicleToggleRadio::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameVehicleToggleRadio::ActorGameVehicleToggleRadio(v3, -1);
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
    ActorGameVehicleToggleRadio::ActorGameVehicleToggleRadio(v3, a1);
  }
  return v3;
}



// Constructor (0x829c10):
int (**ActorGameVehicleToggleRadio::ActorGameVehicleToggleRadio(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BCA8);
  return (int (**)(int))(uintptr_t)(&off_205BCA8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameVehicleToggleRadio::Destroy  (binary VA: 0x0)
// Original: ActorGameVehicleToggleRadio::~ActorGameVehicleToggleRadio
// ----------------------------------------------------------------------------
int ActorGameVehicleToggleRadio::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BCA8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_820870  (binary VA: 0x0)
// Original: sub_820870
// ----------------------------------------------------------------------------
void sub_820870(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BCA8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_826AF0  (binary VA: 0x0)
// Original: sub_826AF0
// ----------------------------------------------------------------------------
int sub_826AF0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int v6;
  long double v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Toggle Radio", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Vehicles", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Enable", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Disable", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Toggle", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v17, 0, -1);
  g4_std::string::Destroy(v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Radio station if enabled is used.", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Station", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "RadioStations", (int)(uintptr_t)(&v6));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &v10);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 11, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Station", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v11);
  { g4_std::string::Destroy(&v13); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_832340  (binary VA: 0x0)
// Original: sub_832340
// ----------------------------------------------------------------------------
int sub_832340(long double a1, grapher::ActorBase::Self *a2, unsigned int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  bool v21;
  int *v22;
  int *v23;
  int v24;
  int v25;
  int v26;
  int *v27;
  int *v28;
  int v29;
  int *v30;
  int v31;
  int v32;
  int *v33;
  int *v34;
  void *lpdso_handle;
  uint32_t *v36;

  if ( a3 <= 2 && byte_1C83210[a3] != 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
    v6 = (int)(uintptr_t)(sub_837200(a2, Variable, a4));
    if ( v6 == 0 )
      v6 = -1;
    byte_20C15B0 = 1;
    v36 = (uint32_t *)sub_8F0680(v5);
    if ( G4_VCALL<int>(v36, 456) != 0 )
    {
      v8 = v36[468];
      v9 = v36[469];
      if ( (v8 & 0x100) != 0 && v8 >= 0 && (v9 & 1) == 0 && (v9 & 4) == 0 )
      {
        v26 = sub_8F0680(v7);
        if ( *(uint8_t *)((*(int (**)(int))(*(uint32_t *)v26 + 456))(v26) + 2073) != 0 )
        {
          if ( v6 < 0 )
          {
            if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
            {
              sub_ADB4E0(&dword_20D4AC0);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
              __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
            }
            v34 = nullptr;
            lpdso_handle = nullptr;
            if ( byte_20D4AC4 == 0 )
              v34 = (int *)(&dword_20D4AC0);
            sub_AC41A0(a1, (int)(uintptr_t)(v34), -1);
          }
          else
          {
            if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
            {
              sub_ADB4E0(&dword_20D4AC0);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
              __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
            }
            v27 = nullptr;
            lpdso_handle = nullptr;
            if ( byte_20D4AC4 == 0 )
              v27 = (int *)(&dword_20D4AC0);
            sub_AC41A0(a1, (int)(uintptr_t)(v27), v6);
            if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
            {
              sub_82DC00();
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
              __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
            }
            v28 = nullptr;
            if ( byte_20D49A8 == 0 )
              v28 = (int *)(&dword_20D49A0);
            v29 = *(uint32_t *)(v28[16] + 4);
            if ( v29 != 0 )
              G4_VCALL<void>(v29, 40, "dataIndex", (float)v6, "RadioAnimated_mc.Radio_mc", 0);
          }
          if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
          {
            sub_82DC00();
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
            __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
          }
          v30 = nullptr;
          if ( byte_20D49A8 == 0 )
            v30 = (int *)(&dword_20D49A0);
          v31 = v30[3];
          if ( v31 != 0 )
          {
            v32 = *(uint32_t *)(v31 + 152);
            if ( v32 != 0 )
              G4_VCALL<void>(v32, 16, 0, lpdso_handle);
          }
          if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
          {
            sub_82DC00();
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
            __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
          }
          v33 = nullptr;
          if ( byte_20D49A8 == 0 )
            v33 = (int *)(&dword_20D49A0);
          sub_82A360(v33, *(uint32_t *)(v33[3] + 152), 1, 0);
        }
      }
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
    v11 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v11 = (int *)(&dword_20D4AC0);
    sub_AB5090(a1, (int)(uintptr_t)(v11));
    byte_20C15B0 = 0;
    v13 = (uint32_t *)sub_8F0680(v12);
    if ( G4_VCALL<int>(v13, 456) != 0 )
    {
      v14 = v13[468];
      v15 = v13[469];
      if ( (v14 & 0x100) != 0 && v14 >= 0 && (v15 & 1) == 0 && (v15 & 4) == 0 )
      {
        if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
        {
          sub_ADB4E0(&dword_20D4AC0);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
          __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
        }
        v16 = nullptr;
        if ( byte_20D4AC4 == 0 )
          v16 = (int *)(&dword_20D4AC0);
        v17 = sub_AB5060((int)(uintptr_t)(v16));
        v19 = sub_8F0680(v18);
        v20 = G4_VCALL<int>(v19, 456);
        v21 = byte_20D4980 == 0;
        *(uint32_t *)(v20 + 2064) = v17;
        if ( v21 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DC00();
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v22 = nullptr;
        if ( byte_20D49A8 == 0 )
          v22 = (int *)(&dword_20D49A0);
        sub_82A360(v22, *(uint32_t *)(v22[3] + 152), 0, 0);
        if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DC00();
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v23 = nullptr;
        if ( byte_20D49A8 == 0 )
          v23 = (int *)(&dword_20D49A0);
        v24 = v23[3];
        if ( v24 != 0 )
        {
          v25 = *(uint32_t *)(v24 + 152);
          if ( v25 != 0 )
            G4_VCALL<void>(v25, 16, 1);
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 3, a4));
}


