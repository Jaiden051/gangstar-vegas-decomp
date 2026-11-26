#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameHUDFollowerStatus.h"

// ----------------------------------------------------------------------------
// Function: ActorGameHUDFollowerStatus::CreateInstance  (binary VA: 0x0)
// Original: ActorGameHUDFollowerStatus::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameHUDFollowerStatus::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameHUDFollowerStatus::ActorGameHUDFollowerStatus(v3, -1);
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
    ActorGameHUDFollowerStatus::ActorGameHUDFollowerStatus(v3, a1);
  }
  return v3;
}



// Constructor (0xc4f940):
int (**ActorGameHUDFollowerStatus::ActorGameHUDFollowerStatus(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C868);
  return (int (**)(int))(uintptr_t)(&off_206C868);
}
// ----------------------------------------------------------------------------
// Function: ActorGameHUDFollowerStatus::Destroy  (binary VA: 0x0)
// Original: ActorGameHUDFollowerStatus::~ActorGameHUDFollowerStatus
// ----------------------------------------------------------------------------
void ActorGameHUDFollowerStatus::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C868);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40160  (binary VA: 0x0)
// Original: sub_C40160
// ----------------------------------------------------------------------------
void sub_C40160(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C868);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C478A0  (binary VA: 0x0)
// Original: sub_C478A0
// ----------------------------------------------------------------------------
int sub_C478A0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Follower Status", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "HUD", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Show", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Hide", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 2, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Which follower to display.", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v11 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "The priority of this follower from FollowerPriority.", (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Priority", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "FollowerPriority.Medium", (int)(uintptr_t)(&v9) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v18);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v19, 11, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Priority", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v20), v7, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v19);
  { g4_std::string::Destroy(&v21); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C52840  (binary VA: 0x0)
// Original: sub_C52840
// ----------------------------------------------------------------------------
int sub_C52840(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  int *v5;
  int *v7;
  int v8;
  int v9;
  int v10;
  void *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v12 = sub_857260(a2, 0, (int)(uintptr_t)(a4));
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
  sub_837200((int)(uintptr_t)(a2), Variable, a4, v8, v9, v10, (int)(uintptr_t)(v11), v12, v14, v15, v16, a1);
  if ( a3 != 0 )
  {
    if ( a3 == 1 && v13 != 0 )
    {
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v7 = nullptr;
      if ( byte_20D49A8 == 0 )
        v7 = (int *)(&dword_20D49A0);
      sub_82B920((int)(uintptr_t)(v7), v13, 42);
    }
  }
  else if ( v13 != 0 )
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
    sub_82B8C0((int)(uintptr_t)(v5), v13, 42);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 2, a4));
}


