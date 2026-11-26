#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterWantedLevel.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterWantedLevel::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterWantedLevel::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterWantedLevel::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterWantedLevel::ActorGameCharacterWantedLevel(v3, -1);
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
    ActorGameCharacterWantedLevel::ActorGameCharacterWantedLevel(v3, a1);
  }
  return v3;
}



// Constructor (0x8453c0):
int (**ActorGameCharacterWantedLevel::ActorGameCharacterWantedLevel(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA08);
  return (int (**)(int))(uintptr_t)(&off_205CA08);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterWantedLevel::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterWantedLevel::~ActorGameCharacterWantedLevel
// ----------------------------------------------------------------------------
int ActorGameCharacterWantedLevel::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA08);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8398B0  (binary VA: 0x0)
// Original: sub_8398B0
// ----------------------------------------------------------------------------
void sub_8398B0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_83AE90  (binary VA: 0x0)
// Original: sub_83AE90
// ----------------------------------------------------------------------------
int sub_83AE90(grapher::ActorBase::Self *a1)
{
  void *v2;
  int v3;
  int v4;
  uint8_t v5[7];
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13[8];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5[4]), "Wanted Level", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5[4]);
  g4_std::string::Destroy(&v5[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Characters", (int)(uintptr_t)(&v4));
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Set", (int)(uintptr_t)(v5));
  grapher::ActorBase::AddPin(a1, 0, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Raise", (int)(uintptr_t)(&v5[1]));
  grapher::ActorBase::AddPin(a1, 1, &v11, 1, -1);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Lower", (int)(uintptr_t)(&v5[2]));
  grapher::ActorBase::AddPin(a1, 2, &v12, 1, -1);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "Out", (int)(uintptr_t)(&v5[3]));
  grapher::ActorBase::AddPin(a1, 3, v13, 0, -1);
  g4_std::string::Destroy(v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "The wanted level to set.", (int)(uintptr_t)(&v4) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Amount", (int)(uintptr_t)(&v4) + 1);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v7, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Amount", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v8), v2, 1, 0, (int)(uintptr_t)(&v9), 3);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  { g4_std::string::Destroy(&v9); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_846140  (binary VA: 0x0)
// Original: sub_846140
// ----------------------------------------------------------------------------
int sub_846140(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *v4;
  grapher::ActorContext::Self *v5;
  int *v6;
  int *v8;
  int v9;
  grapher::ActorVariable::Self *v10;
  int *v11;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v13;
  grapher::ActorContext::Self *v14;
  int v15;
  grapher::ActorContext::Self *obj;
  int v17;
  int v18;
  int *v19;
  grapher::ActorContext::Self *v20;
  g4_cxa_guard_t *v21;
  g4_cxa_guard_t *v22;
  g4_cxa_guard_t *v23;
  g4_cxa_guard_t *v24;
  g4_cxa_guard_t *v25;
  int v26;
  int v27;
  int v28;

  switch ( a3 )
  {
    case 1:
      if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
      {
        v19 = (int *)(&dword_20D3BC0);
        sub_971D40(&dword_20D3BC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
        __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
      }
      v11 = nullptr;
      if ( byte_20D3BC4 == 0 )
        v11 = (int *)(&dword_20D3BC0);
      v23 = (g4_cxa_guard_t *)sub_971F30(v11);
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
      v13 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v17, v18, (int)(uintptr_t)(v19), (int)(uintptr_t)(v23), (int)(uintptr_t)(v25), v26, v27, v28, a1);
      v14 = (grapher::ActorContext::Self *)((char *)v24 + (uint32_t)(uintptr_t)(v13));
      if ( byte_20D3BA0 == 0 )
      {
        v20 = (grapher::ActorContext::Self *)((char *)v24 + (uint32_t)(uintptr_t)(v13));
        v15 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0);
        v14 = v20;
        if ( v15 != 0 )
        {
          sub_971D40(&dword_20D3BC0);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
          __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
          v14 = v20;
        }
      }
      v6 = nullptr;
      obj = v14;
      if ( byte_20D3BC4 == 0 )
        v6 = (int *)(&dword_20D3BC0);
      goto LABEL_7;
    case 2:
      if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
      {
        v19 = (int *)(&dword_20D3BC0);
        sub_971D40(&dword_20D3BC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
        __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
      }
      v8 = nullptr;
      if ( byte_20D3BC4 == 0 )
        v8 = (int *)(&dword_20D3BC0);
      v9 = sub_971F30(v8);
      v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
      v5 = (grapher::ActorContext::Self *)(v9
                                   - (uint32_t)(uintptr_t)sub_837200(
                                               (int)(uintptr_t)(a2),
                                               v10,
                                               a4,
                                               v17,
                                               v18,
                                               (int)(uintptr_t)(v19),
                                               (int)(uintptr_t)(&dword_20D3BC0),
                                               (int)(uintptr_t)(v25),
                                               v26,
                                               v27,
                                               v28,
                                               a1));
      if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
      {
        sub_971D40(v22);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
        __cxa_atexit((void (*)(void *))sub_964D30, v22, &unk_20D1280);
      }
      goto LABEL_5;
    case 0:
      v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
      v5 = sub_837200((int)(uintptr_t)(a2), v4, a4, v17, v18, (int)(uintptr_t)(v19), (int)(uintptr_t)(v21), (int)(uintptr_t)(v25), v26, v27, v28, a1);
      if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
      {
        sub_971D40(&dword_20D3BC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
        __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
      }
LABEL_5:
      v6 = nullptr;
      obj = v5;
      if ( byte_20D3BC4 == 0 )
        v6 = (int *)(&dword_20D3BC0);
LABEL_7:
      sub_972630(v6, obj);
      break;
    default:
      break;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 3, a4));
}


