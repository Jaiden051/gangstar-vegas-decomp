#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameMissionStart.h"

// ----------------------------------------------------------------------------
// Function: ActorGameMissionStart::CreateInstance  (binary VA: 0x0)
// Original: ActorGameMissionStart::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameMissionStart::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameMissionStart::ActorGameMissionStart(v3, -1);
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
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameMissionStart::ActorGameMissionStart(v3, a1);
  }
  return v3;
}



// Constructor (0xc38110):
int (**ActorGameMissionStart::ActorGameMissionStart(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 13) = -1;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB08);
  return (int (**)(int))(uintptr_t)(&off_206BB08);
}
// ----------------------------------------------------------------------------
// Function: ActorGameMissionStart::Destroy  (binary VA: 0x0)
// Original: ActorGameMissionStart::~ActorGameMissionStart
// ----------------------------------------------------------------------------
void ActorGameMissionStart::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B5F0  (binary VA: 0x0)
// Original: sub_C2B5F0
// ----------------------------------------------------------------------------
void sub_C2B5F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2EA10  (binary VA: 0x0)
// Original: sub_C2EA10
// ----------------------------------------------------------------------------
int sub_C2EA10(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  void *v4;
  uint32_t *v5;
  void *v6;
  int v7;
  int v8;
  int v9;
  long double v10;
  int v11;
  int v12;
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

  grapher::ActorBase::SetArraySize(a1, 3, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Mission Start", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Missions", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "In", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Out", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v23, 0, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Completed", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 2, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "The ID of the mission", (int)(uintptr_t)(&v8) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Mission ID", (int)(uintptr_t)(&v8));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v10) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v13, 4, (char *)&v10 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Mission ID", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v6, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v10) != 0 )
    G4_VCALL<void>(DWORD1(v10), 44);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Is the mission screen will be displayed?", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Show Screen", (int)(uintptr_t)(&v8) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Show Screen", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 0, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Enable automatic fades.", (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Use Fades", (int)(uintptr_t)(&v9) + 2);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v19, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Use Fades", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v20), v4, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  { g4_std::string::Destroy(&v21); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C3B760  (binary VA: 0x0)
// Original: sub_C3B760
// ----------------------------------------------------------------------------
char sub_C3B760(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  char v4; // bp
  grapher::ActorVariable::Self *v5;
  int *v6;
  int v7;
  grapher::ActorVariable::Self *v8;
  char v9; // bp
  int *v10;
  bool v11;
  int v12;
  int v13;
  int *v14;
  bool v15;
  int *v16;
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
  void *v36;
  void *v37;
  int *v38;
  g4_cxa_guard_t *v39;
  char v40;
  g4_cxa_guard_t *v41;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v4 = sub_837730((int)(uintptr_t)(a1), Variable, a3, v18, v21, v24, v27, v30, v33, (int)(uintptr_t)(v36));
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  sub_837730((int)(uintptr_t)(a1), v5, a3, v19, v22, v25, v28, v31, v34, (int)(uintptr_t)(v37));
  if ( byte_20D3C30 == 0 )
  {
    v39 = (g4_cxa_guard_t *)&byte_20D3C30;
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
    {
      v38 = (int *)(&dword_20D3C40);
      sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
    }
  }
  v6 = nullptr;
  if ( byte_20D3C44 == 0 )
    v6 = (int *)(&dword_20D3C40);
  v7 = sub_669490(v6[13]);
  if ( v7 != 0 )
  {
    if ( v7 >= 0 )
    {
      v15 = v7 == 4;
      v7 -= 4;
      if ( v15 || v7 == 1 )
      {
        G4_VCALL<void>(a1, 28, a3);
        if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
        {
          sub_976230((int)(uintptr_t)(&dword_20D5240));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
          __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
        }
        v16 = nullptr;
        if ( byte_20D5248 == 0 )
          v16 = (int *)(&dword_20D5240);
        LOBYTE(v7) = sub_9767D0((int)(uintptr_t)(v16));
        if ( (uint8_t)v7 == 0 )
          LOBYTE(v7) = (uint8_t)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
      }
    }
  }
  else
  {
    v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    v9 = v4 ^ 1;
    v40 = sub_837200((int)(uintptr_t)(a1), v8, a3, v20, v23, v26, v29, v32, v35, (int)(uintptr_t)(v38), (int)(uintptr_t)(v39), (grapher::ActorContext::Self *)v41) != nullptr;
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230((int)(uintptr_t)(&dword_20D5240));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v10 = nullptr;
    if ( byte_20D5248 == 0 )
      v10 = (int *)(&dword_20D5240);
    v11 = sub_9767D0((int)(uintptr_t)(v10));
    v12 = *((uint32_t *)a1 + 13);
    v13 = -!v11;
    if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
    {
      sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
    }
    v14 = nullptr;
    if ( byte_20D3C44 == 0 )
      v14 = (int *)(&dword_20D3C40);
    LOBYTE(v7) = sub_6310F0((int)(uintptr_t)(v14), v12, v13, v9, v40);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_C2C730  (binary VA: 0x0)
// Original: sub_C2C730
// ----------------------------------------------------------------------------
int sub_C2C730(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int *v4;
  int *v5;
  int *v7;
  int *v8;
  int *v9;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D3C44 == 0 )
    v3 = (int *)(&dword_20D3C40);
  *((uint32_t *)a1 + 13) = v3[15];
  sub_8F0680();
  sub_8F5010();
  if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
  {
    sub_785A60((int)(uintptr_t)(&dword_20D5D78));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
    __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D5D7C == 0 )
    v4 = (int *)(&dword_20D5D78);
  sub_7B8F10((int)(uintptr_t)(v4), 1, -1);
  sub_B9D390(dword_20DDDC0, 1);
  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230((int)(uintptr_t)(&dword_20D5240));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v5 = nullptr;
  if ( byte_20D5248 == 0 )
    v5 = (int *)(&dword_20D5240);
  if ( !sub_9767E0((int)(uintptr_t)(v5)) && (uint8_t)sub_62F450(0) != 0 )
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
    sub_82D430((int)(uintptr_t)(v7), 0);
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v8 = nullptr;
    if ( byte_20D49A8 == 0 )
      v8 = (int *)(&dword_20D49A0);
    sub_82A420((int)(uintptr_t)(v8), 1, 1);
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v9 = nullptr;
    if ( byte_20D49A8 == 0 )
      v9 = (int *)(&dword_20D49A0);
    sub_82AAC0((int)(uintptr_t)(v9));
  }
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


