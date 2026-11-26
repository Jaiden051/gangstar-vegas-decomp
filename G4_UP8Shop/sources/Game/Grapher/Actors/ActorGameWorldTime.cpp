#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameWorldTime.h"

// ----------------------------------------------------------------------------
// Function: ActorGameWorldTime::CreateInstance  (binary VA: 0x0)
// Original: ActorGameWorldTime::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameWorldTime::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameWorldTime::ActorGameWorldTime(v3, -1);
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
    ActorGameWorldTime::ActorGameWorldTime(v3, a1);
  }
  return v3;
}



// Constructor (0x82a0e0):
int (**ActorGameWorldTime::ActorGameWorldTime(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BE28);
  return (int (**)(int))(uintptr_t)(&off_205BE28);
}
// ----------------------------------------------------------------------------
// Function: ActorGameWorldTime::Destroy  (binary VA: 0x0)
// Original: ActorGameWorldTime::~ActorGameWorldTime
// ----------------------------------------------------------------------------
int ActorGameWorldTime::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BE28);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8209B0  (binary VA: 0x0)
// Original: sub_8209B0
// ----------------------------------------------------------------------------
void sub_8209B0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BE28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_828E80  (binary VA: 0x0)
// Original: sub_828E80
// ----------------------------------------------------------------------------
int sub_828E80(grapher::ActorBase::Self *a1)
{
  void *v2;
  void *v3;
  int v4;
  int v5;
  int v6;
  uint8_t v7[7];
  int v8;
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
  int v19[8];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7[4]), "World Time", (int)(uintptr_t)(&v4));
  grapher::ActorBase::SetDisplayName(a1, &v7[4]);
  g4_std::string::Destroy(&v7[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "World", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Set", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Pause", (int)(uintptr_t)(v7));
  grapher::ActorBase::AddPin(a1, 1, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Resume", (int)(uintptr_t)(&v7[1]));
  grapher::ActorBase::AddPin(a1, 2, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Toggle Day/Night", (int)(uintptr_t)(&v7[2]));
  grapher::ActorBase::AddPin(a1, 3, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "Out", (int)(uintptr_t)(&v7[3]));
  grapher::ActorBase::AddPin(a1, 4, v19, 0, -1);
  g4_std::string::Destroy(v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Hour to Set", (int)(uintptr_t)(&v5) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Hour", (int)(uintptr_t)(&v5) + 1);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v9, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Hour", (int)(uintptr_t)(&v5) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v2, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Minute to set", (int)(uintptr_t)(&v6) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Minute", (int)(uintptr_t)(&v6));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Minute", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v13), v3, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  { g4_std::string::Destroy(&v14); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_832CA0  (binary VA: 0x0)
// Original: sub_832CA0
// ----------------------------------------------------------------------------
int sub_832CA0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v5;
  void *v6;
  int v7;
  void *v8;
  g4_cxa_guard_t *v9;

  if ( a2 == 1 )
  {
    if ( byte_20D5530 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) != 0 )
    {
      sub_902F90(&dword_20D5540);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
      __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
    }
    byte_20D5570 = 1;
  }
  else if ( a2 <= 1 )
  {
    if ( a2 == 0 )
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
      v9 = (g4_cxa_guard_t *)sub_837200(a1, Variable, a3);
      v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
      v6 = (void *)sub_837200(a1, v5, a3);
      if ( byte_20D5530 == 0 )
      {
        v8 = v6;
        v7 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530);
        v6 = v8;
        if ( v7 != 0 )
        {
          sub_902F90(&dword_20D5540);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
          __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
          v6 = v8;
        }
      }
      sub_8EB600(&dword_20D5540, v6, v9);
    }
  }
  else if ( a2 == 2 )
  {
    if ( byte_20D5530 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) != 0 )
    {
      sub_902F90(&dword_20D5540);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
      __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
    }
    byte_20D5570 = 0;
  }
  else if ( a2 == 3 )
  {
    if ( byte_20D5530 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) != 0 )
    {
      sub_902F90(&dword_20D5540);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
      __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
    }
    sub_9044C0(&dword_20D5540);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 4, a3));
}


