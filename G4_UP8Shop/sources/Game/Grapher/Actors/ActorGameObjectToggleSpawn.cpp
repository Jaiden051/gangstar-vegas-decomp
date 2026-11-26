#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectToggleSpawn.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectToggleSpawn::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectToggleSpawn::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectToggleSpawn::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectToggleSpawn::ActorGameObjectToggleSpawn(v3, -1);
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
    ActorGameObjectToggleSpawn::ActorGameObjectToggleSpawn(v3, a1);
  }
  return v3;
}



// Constructor (0xc38cf0):
int (**ActorGameObjectToggleSpawn::ActorGameObjectToggleSpawn(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C288);
  return (int (**)(int))(uintptr_t)(&off_206C288);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectToggleSpawn::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectToggleSpawn::~ActorGameObjectToggleSpawn
// ----------------------------------------------------------------------------
void ActorGameObjectToggleSpawn::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C288);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BC30  (binary VA: 0x0)
// Original: sub_C2BC30
// ----------------------------------------------------------------------------
void sub_C2BC30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C288);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C37250  (binary VA: 0x0)
// Original: sub_C37250
// ----------------------------------------------------------------------------
int sub_C37250(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Global Spawn", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Objects", (int)(uintptr_t)(&v5) + 1);
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "The character aiming at his target.", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Filter", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "SpawnZoneFilter.All", (int)(uintptr_t)(&v6));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &v10);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 11, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Filter", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v11);
  { g4_std::string::Destroy(&v13); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C39290  (binary VA: 0x0)
// Original: sub_C39290
// ----------------------------------------------------------------------------
int sub_C39290(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v5;
  int *v6;
  char v8;
  char v9;
  int *v10;
  char v11; // bp
  char obj;
  int v13;
  int v14;
  int v15;
  void *v16;
  grapher::ActorContext::Self *v17;
  grapher::ActorContext::Self *v18;
  g4_cxa_guard_t *v19;
  int v20;
  int v21;
  int v22;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
  v5 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v13, v14, v15, (int)(uintptr_t)(v16), (int)(uintptr_t)(v19), v20, v21, v22, a1);
  switch ( a3 )
  {
    case 1:
      v18 = v5;
      sub_7349D0((int)(uintptr_t)(v5), 0);
      if ( v18 != (grapher::ActorContext::Self *)0x7FFFFFFF )
        return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 3, a4));
      if ( byte_20D5C00 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5C00) != 0 )
      {
        sub_76C650((int)(uintptr_t)(&dword_20D5C20));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5C00);
        __cxa_atexit((void (*)(void *))sub_76F420, &dword_20D5C20, &unk_20D1280);
      }
      v6 = nullptr;
      obj = 1;
      if ( byte_20D5C24 == 0 )
        v6 = (int *)(&dword_20D5C20);
      goto LABEL_7;
    case 2:
      v17 = v5;
      sub_734A20((int)(uintptr_t)(v5));
      if ( v17 != (grapher::ActorContext::Self *)0x7FFFFFFF )
        return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 3, a4));
      v8 = byte_20D5C00;
      if ( byte_20D5C00 == 0 )
      {
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5C00) != 0 )
        {
          sub_76C650((int)(uintptr_t)(&dword_20D5C20));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5C00);
          __cxa_atexit((void (*)(void *))sub_76F420, &dword_20D5C20, &unk_20D1280);
        }
        v8 = byte_20D5C00;
      }
      v9 = byte_20D5C24;
      v10 = nullptr;
      if ( byte_20D5C24 == 0 )
        v10 = (int *)(&dword_20D5C20);
      v11 = *((uint8_t *)v10 + 93) ^ 1;
      if ( v8 == 0 )
      {
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5C00) != 0 )
        {
          sub_76C650((int)(uintptr_t)(&dword_20D5C20));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5C00);
          __cxa_atexit((void (*)(void *))sub_76F420, &dword_20D5C20, &unk_20D1280);
        }
        v9 = byte_20D5C24;
      }
      v6 = nullptr;
      obj = v11;
      if ( v9 == 0 )
        v6 = (int *)(&dword_20D5C20);
      goto LABEL_7;
    case 0:
      sub_7349D0((int)(uintptr_t)(v5), 1);
      if ( byte_20D5C00 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5C00) != 0 )
      {
        sub_76C650((int)(uintptr_t)(&dword_20D5C20));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5C00);
        __cxa_atexit((void (*)(void *))sub_76F420, &dword_20D5C20, &unk_20D1280);
      }
      v6 = nullptr;
      obj = 0;
      if ( byte_20D5C24 == 0 )
        v6 = (int *)(&dword_20D5C20);
LABEL_7:
      sub_7368C0((int)(uintptr_t)(v6), obj);
      break;
    default:
      break;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 3, a4));
}


