#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectValue.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectValue::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectValue::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectValue::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectValue::ActorGameObjectValue(v3, -1);
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
    ActorGameObjectValue::ActorGameObjectValue(v3, a1);
  }
  return v3;
}



// Constructor (0xc38d70):
int (**ActorGameObjectValue::ActorGameObjectValue(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C308);
  return (int (**)(int))(uintptr_t)(&off_206C308);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectValue::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectValue::~ActorGameObjectValue
// ----------------------------------------------------------------------------
void ActorGameObjectValue::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C308);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BCB0  (binary VA: 0x0)
// Original: sub_C2BCB0
// ----------------------------------------------------------------------------
void sub_C2BCB0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C308);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C378D0  (binary VA: 0x0)
// Original: sub_C378D0
// ----------------------------------------------------------------------------
int sub_C378D0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Value", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Objects", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Objects to get the value from.", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v7));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 9, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 1);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Store the value in this variable.", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Value", (int)(uintptr_t)(&v7) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Value", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 2);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  { g4_std::string::Destroy(&v16); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C38DB0  (binary VA: 0x0)
// Original: sub_C38DB0
// ----------------------------------------------------------------------------
void sub_C38DB0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int *v4;
  void **v5;
  void **v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  void *v14[9];

  v14[0] = v14;
  v14[1] = v14;
  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  if ( v3 != 0 )
  {
    v13 = (uint32_t *)v3;
    v4 = (int *)G4_VCALL<int>(v3, 16);
    if ( v4 != nullptr )
    {
      if ( v4 == (int *)(&dword_20D68D0) )
      {
LABEL_12:
        v7 = v13[330];
        if ( byte_20D34B0 == 0 )
        {
          v12 = v13[330];
          v11 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0);
          v7 = v12;
          if ( v11 != 0 )
          {
            sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
            __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
            v7 = v12;
          }
        }
        v8 = (int *)(&dword_20D34C0);
        if ( byte_20D34C4 != 0 )
          v8 = nullptr;
        v9 = sub_5B8890((int)(uintptr_t)(v8), v7);
        v10 = 0;
        if ( v9 >= 0 )
          v10 = v9;
        sub_836F40(a1, 1, v10, a3);
      }
      else
      {
        while ( 1 )
        {
          v4 = (int *)v4[1];
          if ( v4 == nullptr )
            break;
          if ( v4 == (int *)(&dword_20D68D0) )
            goto LABEL_12;
        }
      }
    }
  }
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v5 = (void **)v14[0];
  if ( v14[0] != v14 )
  {
    while ( 1 )
    {
      v6 = (void **)*v5;
      opDelete(v5);
      if ( v6 == v14 )
        break;
      v5 = v6;
    }
  }
}


