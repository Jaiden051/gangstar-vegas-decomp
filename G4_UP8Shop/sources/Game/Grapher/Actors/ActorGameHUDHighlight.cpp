#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameHUDHighlight.h"

// ----------------------------------------------------------------------------
// Function: ActorGameHUDHighlight::CreateInstance  (binary VA: 0x0)
// Original: ActorGameHUDHighlight::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameHUDHighlight::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameHUDHighlight::ActorGameHUDHighlight(v3, -1);
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
    ActorGameHUDHighlight::ActorGameHUDHighlight(v3, a1);
  }
  return v3;
}



// Constructor (0xc4fac0):
int (**ActorGameHUDHighlight::ActorGameHUDHighlight(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C968);
  return (int (**)(int))(uintptr_t)(&off_206C968);
}
// ----------------------------------------------------------------------------
// Function: ActorGameHUDHighlight::Destroy  (binary VA: 0x0)
// Original: ActorGameHUDHighlight::~ActorGameHUDHighlight
// ----------------------------------------------------------------------------
void ActorGameHUDHighlight::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C968);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C400D0  (binary VA: 0x0)
// Original: sub_C400D0
// ----------------------------------------------------------------------------
void sub_C400D0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C968);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C42180  (binary VA: 0x0)
// Original: sub_C42180
// ----------------------------------------------------------------------------
int sub_C42180(grapher::ActorBase::Self *a1)
{
  void *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11[8];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "HUD Highlight", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Deprecated", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "In", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "Out", (int)(uintptr_t)(&v4) + 3);
  grapher::ActorBase::AddPin(a1, 1, v11, 0, -1);
  g4_std::string::Destroy(v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "The name of the HUD to highlight", (int)(uintptr_t)(&v4) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Group", (int)(uintptr_t)(&v3) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v7, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Group", (int)(uintptr_t)(&v4));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v8), v2, 1, 1, (int)(uintptr_t)(&v9), 3);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  { g4_std::string::Destroy(&v9); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C54000  (binary VA: 0x0)
// Original: sub_C54000
// ----------------------------------------------------------------------------
int sub_C54000(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int *v4;
  grapher::ActorVariable::Self *Variable;
  int v7;
  int v8;
  int v9;
  int *v10;
  g4_cxa_guard_t *v11;
  int v12;
  int v13;
  int v14;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    v10 = (int *)(&dword_20D3C40);
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D3C44 == 0 )
    v4 = (int *)(&dword_20D3C40);
  if ( (v4[12] & 1) != 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
    sub_837200((int)(uintptr_t)(a2), Variable, a4, v7, v8, v9, (int)(uintptr_t)(v10), (int)(uintptr_t)(v11), v12, v13, v14, a1);
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    sub_82B030();
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}


