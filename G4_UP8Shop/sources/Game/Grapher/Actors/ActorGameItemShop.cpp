#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameItemShop.h"

// ----------------------------------------------------------------------------
// Function: ActorGameItemShop::CreateInstance  (binary VA: 0x0)
// Original: ActorGameItemShop::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameItemShop::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameItemShop::ActorGameItemShop(v3, -1);
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
    ActorGameItemShop::ActorGameItemShop(v3, a1);
  }
  return v3;
}



// Constructor (0xc4fc70):
int (**ActorGameItemShop::ActorGameItemShop(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB88);
  return (int (**)(int))(uintptr_t)(&off_206CB88);
}
// ----------------------------------------------------------------------------
// Function: ActorGameItemShop::Destroy  (binary VA: 0x0)
// Original: ActorGameItemShop::~ActorGameItemShop
// ----------------------------------------------------------------------------
void ActorGameItemShop::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB88);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FE10  (binary VA: 0x0)
// Original: sub_C3FE10
// ----------------------------------------------------------------------------
void sub_C3FE10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CB88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C41E80  (binary VA: 0x0)
// Original: sub_C41E80
// ----------------------------------------------------------------------------
int sub_C41E80(grapher::ActorBase::Self *a1)
{
  int v2;
  uint8_t v3[7];
  int v4;
  int v5;
  int v6;
  int v7[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[4]), "Lock Access To Items", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3[4]);
  g4_std::string::Destroy(&v3[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "Menus", (int)(uintptr_t)(v3));
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Lock", (int)(uintptr_t)(&v3[1]));
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Unlock", (int)(uintptr_t)(&v3[2]));
  grapher::ActorBase::AddPin(a1, 1, &v6, 1, -1);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Out", (int)(uintptr_t)(&v3[3]));
  grapher::ActorBase::AddPin(a1, 2, v7, 0, -1);
  { g4_std::string::Destroy(v7); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C40920  (binary VA: 0x0)
// Original: sub_C40920
// ----------------------------------------------------------------------------
int sub_C40920(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint8_t *v3;

  if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
  {
    sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
    __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D2D64 == 0 )
    v3 = (uint8_t *)(&unk_20D2D60);
  v3[91] = a2 == 0;
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}


