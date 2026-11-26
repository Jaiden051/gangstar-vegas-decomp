#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameWorldChangeLocation.h"

// ----------------------------------------------------------------------------
// Function: ActorGameWorldChangeLocation::CreateInstance  (binary VA: 0x0)
// Original: ActorGameWorldChangeLocation::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameWorldChangeLocation::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameWorldChangeLocation::ActorGameWorldChangeLocation(v3, -1);
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
    ActorGameWorldChangeLocation::ActorGameWorldChangeLocation(v3, a1);
  }
  return v3;
}



// Constructor (0x829cd0):
int (**ActorGameWorldChangeLocation::ActorGameWorldChangeLocation(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 13) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BD68);
  return (int (**)(int))(uintptr_t)(&off_205BD68);
}
// ----------------------------------------------------------------------------
// Function: ActorGameWorldChangeLocation::Destroy  (binary VA: 0x0)
// Original: ActorGameWorldChangeLocation::~ActorGameWorldChangeLocation
// ----------------------------------------------------------------------------
int ActorGameWorldChangeLocation::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BD68);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_820930  (binary VA: 0x0)
// Original: sub_820930
// ----------------------------------------------------------------------------
void sub_820930(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BD68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8273B0  (binary VA: 0x0)
// Original: sub_8273B0
// ----------------------------------------------------------------------------
int sub_8273B0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  uint32_t *v4;
  void *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
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
  int v21[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Change Location", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "World", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "In", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Out", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Completed", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 2, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "OID of the location to switch to.", (int)(uintptr_t)(&v7) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Location", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Locations.", (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v12);
  v9 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v13, 11, &v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Location", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v5, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( v9 != nullptr )
    G4_VCALL<void>(v9, 44);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Enable automatic fades.", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Use Fades", (int)(uintptr_t)(&v7) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Use Fades", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  { g4_std::string::Destroy(&v18); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8339E0  (binary VA: 0x0)
// Original: sub_8339E0
// ----------------------------------------------------------------------------
char sub_8339E0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int *v4;
  unsigned int v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *v8;
  int *v9;
  int *v10;
  int v12;
  char v13;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v4 = (int *)sub_837200(a1, Variable, a3);
  v5 = (unsigned int)(uintptr_t)(v4);
  if ( (int)(uintptr_t)(v4) < 0 )
    return (char)(uintptr_t)v4;
  v4 = (int *)(&dword_20D93A0);
  if ( v5 >= dword_20D93A0 )
    return (char)(uintptr_t)v4;
  v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v13 = sub_837730(a1, v6, a3);
  v12 = sub_62EDB0();
  LOBYTE(v4) = sub_62ED90();
  if ( (uint8_t)(uintptr_t)v4 != 0 )
    return (char)(uintptr_t)v4;
  if ( v13 != 0 && *((uint32_t *)a1 + 13) != 0 && (uint8_t)sub_977A40(*((uint32_t *)a1 + 13)) == 0 || v12 == v5 )
  {
    if ( *((uint32_t *)a1 + 13) != 0 )
    {
      LOBYTE(v4) = sub_977A60(*((uint32_t *)a1 + 13));
      if ( (uint8_t)(uintptr_t)v4 == 0 )
        return (char)(uintptr_t)v4;
    }
    LOBYTE(v4) = sub_62F450(1);
    if ( (uint8_t)(uintptr_t)v4 == 0 || v12 != v5 )
      return (char)(uintptr_t)v4;
    v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    if ( (uint8_t)sub_837730(a1, v8, a3) != 0 )
    {
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DC00();
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v10 = nullptr;
      if ( byte_20D49A8 == 0 )
        v10 = (int *)(&dword_20D49A0);
      if ( *((uint8_t *)v10 + 68) == 0 )
        sub_82D0E0((int)(uintptr_t)(v10), 0);
    }
    grapher::ActorBase::FireEvent(a1, 2, a3);
LABEL_17:
    LOBYTE(v4) = G4_VCALL<int>(a1, 28, a3);
    return (char)(uintptr_t)v4;
  }
  sub_64CAC0(v5);
  sub_64C700();
  if ( **(uint8_t **)(dword_20D9390 + 96 * v5 + 20) != 0 )
    goto LABEL_17;
  v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  LOBYTE(v4) = sub_837730(a1, v7, a3);
  if ( (uint8_t)(uintptr_t)v4 != 0 )
  {
    if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
    {
      sub_9BA6C0(&dword_20D5DA8);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
      __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
    }
    v9 = nullptr;
    if ( byte_20D5DAC == 0 )
      v9 = (int *)(&dword_20D5DA8);
    LOBYTE(v4) = sub_99C110(v9, 4);
  }
  return (char)(uintptr_t)(v4);
}

// ----------------------------------------------------------------------------
// Function: sub_833630  (binary VA: 0x0)
// Original: sub_833630
// ----------------------------------------------------------------------------
int sub_833630(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int i;
  int v5;
  int *v6;
  unsigned int v7;
  int *v8;
  grapher::ActorVariable::Self *Variable;
  int v10;
  int v11;
  int *v13;
  int v14;
  uint16_t *v15;
  unsigned int v16;
  uint16_t *v17;

  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    dword_20D49A0 = (int)(uintptr_t)(&off_205BEE8);
    byte_20D49A8 = 0;
    dword_20D49A4 = (int)((uint32_t)(uintptr_t)&off_205BEFC);
    dword_20D49BC = (int)(uintptr_t)(&dword_20D49B4);
    dword_20D49C0 = (int)(uintptr_t)(&dword_20D49B4);
    dword_20D49B4 = 0;
    dword_20D49B8 = 0;
    dword_20D49C4 = 0;
    dword_20D49C8 = 0;
    dword_20D49CC = 0;
    sub_5F76C0(&dword_20D49CC, 0);
    dword_20D49D0 = 0;
    dword_20D49D4 = 0;
    dword_20D49D8 = 0;
    dword_20D49DC = 0;
    dword_20D49E0 = 0;
    byte_20D49E4 = 0;
    byte_20D49E5 = 0;
    byte_20D49E6 = 0;
    byte_20D49E7 = 0;
    byte_20D49E8 = 0;
    byte_20D49E9 = 0;
    byte_20D49EA = 0;
    byte_20D49EB = 0;
    v14 = sub_4EBC30(0xB8u, 1);
    dword_20D49AC = v14;
    v15 = (uint16_t *)v14;
    v16 = 184;
    if ( (v14 & 1) != 0 )
    {
      *(uint8_t *)v14 = 0;
      v15 = (uint16_t *)(v14 + 1);
      LOBYTE(v16) = -73;
    }
    if ( ((uint8_t)(uintptr_t)(v15) & 2) != 0 )
    {
      *v15 = 0;
      v16 -= 2;
      ++v15;
    }
    memset(v15, 0, 4 * (v16 >> 2));
    v17 = &v15[2 * (v16 >> 2)];
    if ( (v16 & 2) != 0 )
      *v17++ = 0;
    if ( (v16 & 1) != 0 )
      *(uint8_t *)v17 = 0;
    sub_5F76C0(&dword_20D49CC, 0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49CC - 11, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D49A8 == 0 )
    v3 = (int *)(&dword_20D49A0);
  if ( *((uint8_t *)v3 + 71) != 0 )
  {
    for ( i = 0; i != 184; i += 4 )
    {
      v5 = *(uint32_t *)(v3[3] + i);
      if ( v5 != 0 )
        *(uint32_t *)(v5 + 8) &= ~2u;
    }
    v6 = (int *)v3[6];
    if ( v6 != nullptr )
    {
      v7 = v3[12];
      v8 = v3 + 5;
      do
      {
        while ( v6[4] >= v7 )
        {
          v8 = v6;
          v6 = (int *)v6[2];
          if ( v6 == nullptr )
            goto LABEL_15;
        }
        v6 = (int *)v6[3];
      }
      while ( v6 != nullptr );
LABEL_15:
      if ( v8 != v3 + 5 && v7 >= v8[4] )
        sub_82CF90((int)(uintptr_t)(v3), (char)(uintptr_t)(v6));
    }
  }
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  if ( (uint8_t)sub_837730(a1, Variable, a3) != 0 )
  {
    if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
    {
      sub_9BA6C0(&dword_20D5DA8);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
      __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
    }
    v13 = nullptr;
    if ( byte_20D5DAC == 0 )
      v13 = (int *)(&dword_20D5DA8);
    *((uint32_t *)a1 + 13) = sub_99C000(v13, 4);
  }
  v11 = sub_8F0680(v10);
  G4_VCALL<void>(v11, 76);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


