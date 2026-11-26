#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGamePlayerSetThrowable.h"

// ----------------------------------------------------------------------------
// Function: ActorGamePlayerSetThrowable::CreateInstance  (binary VA: 0x0)
// Original: ActorGamePlayerSetThrowable::CreateInstance
// ----------------------------------------------------------------------------
int ActorGamePlayerSetThrowable::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGamePlayerSetThrowable::ActorGamePlayerSetThrowable(v3, -1);
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
    ActorGamePlayerSetThrowable::ActorGamePlayerSetThrowable(v3, a1);
  }
  return v3;
}



// Constructor (0x829950):
int (**ActorGamePlayerSetThrowable::ActorGamePlayerSetThrowable(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B9E8);
  return (int (**)(int))(uintptr_t)(&off_205B9E8);
}
// ----------------------------------------------------------------------------
// Function: ActorGamePlayerSetThrowable::Destroy  (binary VA: 0x0)
// Original: ActorGamePlayerSetThrowable::~ActorGamePlayerSetThrowable
// ----------------------------------------------------------------------------
int ActorGamePlayerSetThrowable::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B9E8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8205B0  (binary VA: 0x0)
// Original: sub_8205B0
// ----------------------------------------------------------------------------
void sub_8205B0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B9E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_824880  (binary VA: 0x0)
// Original: sub_824880
// ----------------------------------------------------------------------------
int sub_824880(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  uint32_t *v4;
  void *v5;
  int v6;
  int v7;
  int v8;
  g4_int128_t v9;
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
  int v21;
  int v22[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Set Throwable", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Player", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Give", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddPin(a1, 0, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Remove All", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Remove Unlimited", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddPin(a1, 3, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v15),
    "Which throwable to give/remove (from stock_items.xml ex.: AllStockItems.FragGrenade).",
    (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Throwable Type", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v12);
  DWORD1(v9) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v13, 11, (char *)&v9 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Throwable Type", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v5, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v9) != 0 )
    G4_VCALL<void>(DWORD1(v9), 44);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "How many to give, -1 for unlimited.", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Quantity", (int)(uintptr_t)(&v8) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Quantity", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  { g4_std::string::Destroy(&v18); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_831770  (binary VA: 0x0)
// Original: sub_831770
// ----------------------------------------------------------------------------
int * sub_831770(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  grapher::ActorVariable::Self *v5;
  int *result;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  void (*v16)(int, int, uint8_t *);
  int v17[2];
  uint8_t v18[4];
  uint8_t v19[4];
  int v20;
  uint8_t v21[16];

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v4 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  result = (int *)sub_837200(a1, v5, a3);
  v8 = result;
  if ( v4 >= 0 )
  {
    result = (int *)(&dword_20D7EA0);
    if ( v4 < (unsigned int)dword_20D7EA0 )
    {
      if ( a2 != 0 )
      {
        if ( a2 == 1 )
        {
          v12 = sub_8F0680(v7);
          (*(void (**)(uint32_t, int, uint32_t))(**(uint32_t **)(v12 + 1132) + 40))(*(uint32_t *)(v12 + 1132), v4, 0);
        }
        else if ( a2 == 2 )
        {
          v13 = sub_8F0680(v7);
          sub_9227C0(*(uint32_t *)(v13 + 1132), v4, 0);
        }
      }
      else
      {
        v14 = v8;
        sub_AB7AC0((int)(uintptr_t)(v17), *(glf::Self **)(dword_20D7E90 + 276 * v4 + 104));
        v15 = *(uint32_t *)(sub_8F0680(v9) + 1132);
        v16 = *(void (**)(int, int, uint8_t *))(*(uint32_t *)v15 + 44);
        v20 = v17[1];
        g4_std::string::construct_copy(v21, v18);
        v16(v15, v4, v19);
        g4_std::string::Destroy(v21);
        v11 = sub_8F0680(v10);
        if ( v14 == (int *)-1 )
          sub_9227C0(*(uint32_t *)(v11 + 1132), v4, 1);
        else
          (*(void (**)(uint32_t, int, int *))(**(uint32_t **)(v11 + 1132) + 40))(*(uint32_t *)(v11 + 1132), v4, v14);
        g4_std::string::Destroy(v18);
      }
      return (int *)grapher::ActorBase::FireEvent(a1, 3, a3);
    }
  }
  return result;
}


