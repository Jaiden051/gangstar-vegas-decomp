#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGamePlayerGiveItem.h"

// ----------------------------------------------------------------------------
// Function: ActorGamePlayerGiveItem::CreateInstance  (binary VA: 0x0)
// Original: ActorGamePlayerGiveItem::CreateInstance
// ----------------------------------------------------------------------------
int ActorGamePlayerGiveItem::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGamePlayerGiveItem::ActorGamePlayerGiveItem(v3, -1);
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
    ActorGamePlayerGiveItem::ActorGamePlayerGiveItem(v3, a1);
  }
  return v3;
}



// Constructor (0x8298d0):
int (**ActorGamePlayerGiveItem::ActorGamePlayerGiveItem(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B928);
  return (int (**)(int))(uintptr_t)(&off_205B928);
}
// ----------------------------------------------------------------------------
// Function: ActorGamePlayerGiveItem::Destroy  (binary VA: 0x0)
// Original: ActorGamePlayerGiveItem::~ActorGamePlayerGiveItem
// ----------------------------------------------------------------------------
int ActorGamePlayerGiveItem::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B928);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_820530  (binary VA: 0x0)
// Original: sub_820530
// ----------------------------------------------------------------------------
void sub_820530(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B928);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_823F60  (binary VA: 0x0)
// Original: sub_823F60
// ----------------------------------------------------------------------------
int sub_823F60(grapher::ActorBase::Self *a1)
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Give Item", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Player", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "In", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 1, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Amount of the currency to give or remove.", (int)(uintptr_t)(&v8) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Amount", (int)(uintptr_t)(&v8));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v13, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Amount", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v3, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Stock item ID from the AllStockItems array in stock_items.xml", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Item", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "AllStockItems.", (int)(uintptr_t)(&v8) + 3);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &v16);
  DWORD1(v10) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v17, 11, (char *)&v10 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Item", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v6, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( DWORD1(v10) != 0 )
    G4_VCALL<void>(DWORD1(v10), 44);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Give unlimited amount. Only works for parachutes.", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Unlimited", (int)(uintptr_t)(&v9) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v20, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Unlimited", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v21), v4, 1, 0, (int)(uintptr_t)(&v22), 3);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v20);
  { g4_std::string::Destroy(&v22); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8331C0  (binary VA: 0x0)
// Original: sub_8331C0
// ----------------------------------------------------------------------------
int sub_8331C0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  int v5;
  grapher::ActorVariable::Self *v6;
  int v7;
  uint8_t v8; // si
  int i;
  int *v10;
  int *v11;
  int v13;
  int v14;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v14 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v5 = (int)(uintptr_t)(sub_837200(a1, v4, a3));
  v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v8 = sub_837730(a1, v6, a3);
  if ( v5 == 7 )
  {
    v13 = sub_8F0680(v7);
    G4_VCALL<void>(v13, 744, v8);
  }
  if ( v8 == 0 && v14 > 0 )
  {
    for ( i = 0; i != v14; ++i )
    {
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_194B4)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0
        && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
      {
        sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
        __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
      }
      v10 = nullptr;
      if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_194C4)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        v10 = (int *)(&dword_20D34C0);
      sub_5B6AA0(v10, v5);
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_194B4)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0
        && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
      {
        sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
        __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
      }
      v11 = nullptr;
      if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_194C4)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        v11 = (int *)(&dword_20D34C0);
      sub_5B6F90(v11, v5);
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


