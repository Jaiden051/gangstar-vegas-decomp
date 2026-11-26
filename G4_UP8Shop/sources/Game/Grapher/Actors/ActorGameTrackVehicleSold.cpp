#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameTrackVehicleSold.h"

// ----------------------------------------------------------------------------
// Function: ActorGameTrackVehicleSold::CreateInstance  (binary VA: 0x0)
// Original: ActorGameTrackVehicleSold::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameTrackVehicleSold::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameTrackVehicleSold::ActorGameTrackVehicleSold(v3, -1);
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
    ActorGameTrackVehicleSold::ActorGameTrackVehicleSold(v3, a1);
  }
  return v3;
}



// Constructor (0x829b10):
int (**ActorGameTrackVehicleSold::ActorGameTrackVehicleSold(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BBA8);
  return (int (**)(int))(uintptr_t)(&off_205BBA8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameTrackVehicleSold::Destroy  (binary VA: 0x0)
// Original: ActorGameTrackVehicleSold::~ActorGameTrackVehicleSold
// ----------------------------------------------------------------------------
int ActorGameTrackVehicleSold::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BBA8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_820770  (binary VA: 0x0)
// Original: sub_820770
// ----------------------------------------------------------------------------
void sub_820770(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BBA8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_825A20  (binary VA: 0x0)
// Original: sub_825A20
// ----------------------------------------------------------------------------
int sub_825A20(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  uint32_t *v4;
  void *v5;
  int v6;
  int v7;
  long double v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Track Vehicle Sold", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Tracking", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Vehicle that was sold by the player.", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Vehicle", (int)(uintptr_t)(&v7));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v11, 9, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Vehicle", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v5, 1, 1, (int)(uintptr_t)(&v13), 1);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Amount the player got from selling his vehicle.", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Sell Price", (int)(uintptr_t)(&v7) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v14, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Sell Price", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v3, 1, 1, (int)(uintptr_t)(&v16), 1);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  { g4_std::string::Destroy(&v16); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_831C50  (binary VA: 0x0)
// Original: sub_831C50
// ----------------------------------------------------------------------------
int sub_831C50(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int *v6;
  int *v7;
  grapher::ActorVariable::Self *Variable;
  int v9;
  int *v10;
  uint32_t *v11;
  bool v12;
  int v13;
  uint32_t *v14;
  bool v15;
  int v16;
  int v18;
  uint32_t *v19;
  int v20;
  g4_cxa_guard_t *v21;
  int v22;

  if ( byte_20D2450 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2450) != 0 )
  {
    sub_557B70((int)(uintptr_t)(&unk_20D2460));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2450);
    __cxa_atexit((void (*)(void *))sub_550A70, &unk_20D2460, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D2464 == 0 )
    v3 = (uint32_t *)(&unk_20D2460);
  if ( sub_557AC0(1) && v3[42] != 0 )
  {
    v4 = sub_857260(a1, 0, a3);
    v5 = v4;
    if ( v4 != 0 )
    {
      v6 = (int *)G4_VCALL<int>(v4, 16);
      if ( v6 != nullptr )
      {
        if ( v6 == (int *)(&dword_20D68D0) )
          goto LABEL_13;
        v7 = (int *)v6[1];
        if ( v7 != nullptr )
        {
          while ( v7 != (int *)(&dword_20D68D0) )
          {
            v7 = (int *)v7[1];
            if ( v7 == nullptr )
              goto LABEL_12;
          }
          goto LABEL_13;
        }
      }
    }
LABEL_12:
    v5 = 0;
LABEL_13:
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    v22 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
    v9 = *(uint32_t *)(v5 + 1320);
    if ( byte_20D34B0 == 0 )
    {
      v20 = *(uint32_t *)(v5 + 1320);
      v18 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0);
      v9 = v20;
      if ( v18 != 0 )
      {
        sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
        __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
        v9 = v20;
      }
    }
    v10 = nullptr;
    if ( byte_20D34C4 == 0 )
      v10 = (int *)(&dword_20D34C0);
    sub_5B8890((int)(uintptr_t)(v10), v9);
    if ( byte_20D2450 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2450) != 0 )
    {
      sub_557B70((int)(uintptr_t)(&unk_20D2460));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2450);
      __cxa_atexit((void (*)(void *))sub_550A70, &unk_20D2460, &unk_20D1280);
    }
    v11 = nullptr;
    if ( byte_20D2464 == 0 )
      v11 = (uint32_t *)(&unk_20D2460);
    v19 = v11;
    v12 = sub_557AC0(1);
    v13 = 0;
    if ( v12 )
      v13 = v19[42];
    sub_5157B0(v13, v22);
    v21 = *(g4_cxa_guard_t **)(v5 + 1320);
    if ( byte_20D2450 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2450) != 0 )
    {
      sub_557B70((int)(uintptr_t)(&unk_20D2460));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2450);
      __cxa_atexit((void (*)(void *))sub_550A70, &unk_20D2460, &unk_20D1280);
    }
    v14 = nullptr;
    if ( byte_20D2464 == 0 )
      v14 = (uint32_t *)(&unk_20D2460);
    v15 = sub_557AC0(1);
    v16 = 0;
    if ( v15 )
      v16 = v14[42];
    sub_513F00(v16, (int)(uintptr_t)(v21), v22);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


