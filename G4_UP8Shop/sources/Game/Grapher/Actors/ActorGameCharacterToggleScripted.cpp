#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterToggleScripted.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleScripted::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterToggleScripted::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleScripted::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterToggleScripted::ActorGameCharacterToggleScripted(v3, -1);
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
    ActorGameCharacterToggleScripted::ActorGameCharacterToggleScripted(v3, a1);
  }
  return v3;
}



// Constructor (0x845280):
int (**ActorGameCharacterToggleScripted::ActorGameCharacterToggleScripted(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C8C8);
  return (int (**)(int))(uintptr_t)(&off_205C8C8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleScripted::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterToggleScripted::~ActorGameCharacterToggleScripted
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleScripted::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C8C8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_839770  (binary VA: 0x0)
// Original: sub_839770
// ----------------------------------------------------------------------------
void sub_839770(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C8C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_83EC20  (binary VA: 0x0)
// Original: sub_83EC20
// ----------------------------------------------------------------------------
int sub_83EC20(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
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
  grapher::ActorBase::SetArraySize(a1, 4, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Toggle Scripted", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Characters", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Enable", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddPin(a1, 0, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Disable", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Toggle", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 3, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The list of characters who will be scripted or not", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v11 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The name of the script to fire if the character enters the scripted behavior", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Scripted Script", (int)(uintptr_t)(&v9) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 4, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Scripted Script", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  { g4_std::string::Destroy(&v20); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8479E0  (binary VA: 0x0)
// Original: sub_8479E0
// ----------------------------------------------------------------------------
void sub_8479E0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  char v4; // bp
  int v5;
  bool v6;
  grapher::ActorVariable::Self *Variable;
  char *v8;
  size_t v9;
  uint8_t *v10;
  void **v11;
  void **v12;
  int v13;
  int v14;
  int v15;
  void **v16;
  int v17;
  char *s;
  void *v19[9];

  v16 = v19;
  v19[0] = v19;
  v19[1] = v19;
  sub_8392C0(a1, 0, (int)(uintptr_t)(v19), (int)(uintptr_t)(a3));
  v3 = (void **)v19[0];
  if ( v19[0] != v19 )
  {
    do
    {
      v10 = (uint8_t *)(v3[2]);
      if ( v10 != nullptr )
      {
        if ( a2 != 0 )
        {
          if ( a2 == 2 )
          {
            v6 = G4_VCALL<int>(v10, 116, 136) == 0;
            v5 = v6;
            v4 = !v6;
          }
          else
          {
            v4 = 1;
            v5 = 0;
            v6 = false;
          }
        }
        else
        {
          v4 = 0;
          v5 = 1;
          v6 = true;
        }
        LOBYTE(v15) = v6;
        G4_VCALL<void>(v10, 120, 136, v5);
        v10[2896] = v15;
        v10[1964] = v4;
        Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
        sub_837C70(&s, (int)(uintptr_t)(a1), Variable, a3, v13, v14, v15, (int)(uintptr_t)(v16), v17, (int)(uintptr_t)(s), (int)(uintptr_t)(v19[0]));
        v8 = s;
        v9 = strlen(s);
        g4_std_compat::string_assign((int)(uintptr_t)(v10 + 3168), v8, v9);
        g4_std::string::Destroy(&s);
      }
      v3 = (void **)*v3;
    }
    while ( v3 != v16 );
  }
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v11 = (void **)v19[0];
  if ( v19[0] != v16 )
  {
    while ( 1 )
    {
      v12 = (void **)*v11;
      opDelete(v11);
      if ( v12 == v16 )
        break;
      v11 = v12;
    }
  }
}


