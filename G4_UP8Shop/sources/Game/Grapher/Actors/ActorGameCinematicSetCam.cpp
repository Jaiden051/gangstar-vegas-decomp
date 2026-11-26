#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCinematicSetCam.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicSetCam::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCinematicSetCam::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCinematicSetCam::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCinematicSetCam::ActorGameCinematicSetCam(v3, -1);
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
    ActorGameCinematicSetCam::ActorGameCinematicSetCam(v3, a1);
  }
  return v3;
}



// Constructor (0x845640):
int (**ActorGameCinematicSetCam::ActorGameCinematicSetCam(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CBC8);
  return (int (**)(int))(uintptr_t)(&off_205CBC8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCinematicSetCam::Destroy  (binary VA: 0x0)
// Original: ActorGameCinematicSetCam::~ActorGameCinematicSetCam
// ----------------------------------------------------------------------------
int ActorGameCinematicSetCam::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CBC8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_839A70  (binary VA: 0x0)
// Original: sub_839A70
// ----------------------------------------------------------------------------
void sub_839A70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CBC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_842450  (binary VA: 0x0)
// Original: sub_842450
// ----------------------------------------------------------------------------
int sub_842450(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Set Cam", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Cinematics", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "In", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v35, 1, -1);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Out", (int)(uintptr_t)(&v15) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v36, 0, -1);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), "Completed", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddPin(a1, 2, v37, 0, -1);
  g4_std::string::Destroy(v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Camera to set", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Camera", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v16 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v20, 9, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Camera", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v21), v5, 1, 1, (int)(uintptr_t)(&v22), 3);
  g4_std::string::Destroy(&v21);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Target of the camera (use only on relative camera)", (int)(uintptr_t)(&v12) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Target", (int)(uintptr_t)(&v12) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v17 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v23, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Target", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v24), v7, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Time to reach the camera position", (int)(uintptr_t)(&v13) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "TransitionTime", (int)(uintptr_t)(&v13));
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v26, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Transition Time", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v27), v8, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Percent of transition time after which camera will move slower", (int)(uintptr_t)(&v14) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "SlowTimePercent", (int)(uintptr_t)(&v13) + 3);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v29, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Slow time percent", (int)(uintptr_t)(&v14));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v30), v9, 1, 0, (int)(uintptr_t)(&v31), 3);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v34),
    "Ratio for camera speed in slow motion: original speed will divide on this value after reach SlowTimePercent",
    (int)(uintptr_t)(&v15));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "SlowValue", (int)(uintptr_t)(&v14) + 2);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v10), (int)(uintptr_t)(&v32), 2, 1.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Slow value", (int)(uintptr_t)(&v14) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v33), v10, 1, 0, (int)(uintptr_t)(&v34), 3);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v32);
  return ((g4_std::string::Destroy(&v34)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83A200  (binary VA: 0x0)
// Original: sub_83A200
// ----------------------------------------------------------------------------
uint8_t * sub_83A200(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  char v3;
  uint8_t *result;

  if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
  {
    sub_9C9CC0(&unk_20D4E60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
    __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
  }
  v3 = byte_20D4E64;
  result = nullptr;
  if ( byte_20D4E64 == 0 )
    result = (uint8_t *)(&unk_20D4E60);
  if ( result[73] == 0 )
  {
    if ( byte_20D4E40 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      }
      v3 = byte_20D4E64;
    }
    result = nullptr;
    if ( v3 == 0 )
      result = (uint8_t *)(&unk_20D4E60);
    if ( result[74] == 0 )
    {
      G4_VCALL<void>(a1, 28, a3);
      return (uint8_t *)grapher::ActorBase::FireEvent(a1, 2, a3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_84A690  (binary VA: 0x0)
// Original: sub_84A690
// ----------------------------------------------------------------------------
int sub_84A690(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v8;
  grapher::ActorVariable::Self *v9;
  float v10; // xmm0_4
  char v11;
  char v12;
  uint32_t *v13;
  void *v14;
  int v16;
  int v17;
  char v18;
  uint32_t *v19;
  void *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  grapher::ActorContext::Self *v45;
  grapher::ActorContext::Self *v46;
  grapher::ActorContext::Self *v47;
  float v48;
  float v49;
  int v50;
  grapher::ActorContext::Self *v51;

  if ( dword_20D6790 != 0 )
    sub_844460();
  v3 = sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 == 0 || (v5 = (int *)G4_VCALL<int>(v3, 16)) == nullptr )
  {
LABEL_9:
    v6 = 0;
    goto LABEL_10;
  }
  while ( v5 != (int *)(&dword_20D7680) )
  {
    v5 = (int *)v5[1];
    if ( v5 == nullptr )
      goto LABEL_9;
  }
  v6 = v4 - 100;
LABEL_10:
  v50 = sub_857260(a1, 1, a3);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v49 = (float)(int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a1), Variable, a3, v21, v24, v27, v30, v33, v36, v39, v42, v45));
  v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  v51 = sub_837200((int)(uintptr_t)(a1), v8, a3, v22, v25, v28, v31, v34, v37, v40, v43, v46);
  v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
  v48 = sub_838060((int)(uintptr_t)(a1), v9, a3, v23, v26, v29, v32, v35, v38, v41, v44, v47);
  v10 = v48;
  if ( v48 == 0.0 )
    v10 = 1.0;
  v11 = byte_20D4E40;
  if ( v6 != 0 )
  {
    if ( byte_20D4E40 == 0 )
    {
      v17 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40);
      v11 = byte_20D4E40;
      if ( v17 != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
        v11 = byte_20D4E40;
      }
    }
    v12 = byte_20D4E64;
    v13 = nullptr;
    if ( byte_20D4E64 == 0 )
      v13 = (uint32_t *)(&unk_20D4E60);
    v13[11] = v6;
    if ( v11 == 0 )
    {
      v16 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40);
      v12 = byte_20D4E64;
      if ( v16 != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
        v12 = byte_20D4E64;
      }
    }
    v14 = nullptr;
    if ( v12 == 0 )
      v14 = &unk_20D4E60;
    sub_9CB030(v14, 3, v50, LODWORD(v49), 0, 1, v51, LODWORD(v10));
  }
  else
  {
    if ( byte_20D4E40 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      }
      v11 = byte_20D4E40;
    }
    v18 = byte_20D4E64;
    v19 = nullptr;
    if ( byte_20D4E64 == 0 )
      v19 = (uint32_t *)(&unk_20D4E60);
    v19[11] = 0;
    if ( v11 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      }
      v18 = byte_20D4E64;
    }
    v20 = nullptr;
    if ( v18 == 0 )
      v20 = &unk_20D4E60;
    sub_9CE370(v20, LODWORD(v49));
  }
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


