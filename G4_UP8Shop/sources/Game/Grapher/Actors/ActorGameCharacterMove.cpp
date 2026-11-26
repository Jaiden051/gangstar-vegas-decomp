#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterMove.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterMove::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterMove::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterMove::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterMove::ActorGameCharacterMove(v3, -1);
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
    ActorGameCharacterMove::ActorGameCharacterMove(v3, a1);
  }
  return v3;
}



// Constructor (0xc665a0):
int (**ActorGameCharacterMove::ActorGameCharacterMove(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CEE8);
  return (int (**)(int))(uintptr_t)(&off_206CEE8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterMove::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterMove::~ActorGameCharacterMove
// ----------------------------------------------------------------------------
void ActorGameCharacterMove::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CEE8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B3D0  (binary VA: 0x0)
// Original: sub_C5B3D0
// ----------------------------------------------------------------------------
void sub_C5B3D0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CEE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5FFA0  (binary VA: 0x0)
// Original: sub_C5FFA0
// ----------------------------------------------------------------------------
int sub_C5FFA0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int64_t v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Move", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "AI", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "In", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v12, 1, -1);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 1, v13, 0, -1);
  g4_std::string::Destroy(v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "The character to move.", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Target", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v6) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v9, 9, (char *)&v6 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v4, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  if ( HIDWORD(v6) != 0 )
    G4_VCALL<void>(HIDWORD(v6), 44);
  g4_std::string::Destroy(&v9);
  { g4_std::string::Destroy(&v11); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C65850  (binary VA: 0x0)
// Original: sub_C65850
// ----------------------------------------------------------------------------
int sub_C65850(__m128i a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int v4;
  uint32_t *v5;
  int *v6;
  int64_t v8;

  v4 = sub_857260(a2, 0, (int)(uintptr_t)(a4));
  v5 = (uint32_t *)v4;
  if ( v4 != 0 )
  {
    v6 = (int *)G4_VCALL<int>(v4, 16);
    if ( v6 != nullptr )
    {
      if ( v6 == (int *)(&dword_20D75F0) )
      {
LABEL_8:
        sub_9C5DF0(a1, v5);
        if ( !sub_985ED0((int)(uintptr_t)(v5)) )
        {
          LODWORD(v8) = (uint32_t)(uintptr_t)(v5);
          HIDWORD(v8) = (uint32_t)(uintptr_t)(v5 + 291);
          sub_980500(v8);
        }
      }
      else
      {
        while ( 1 )
        {
          v6 = (int *)v6[1];
          if ( v6 == nullptr )
            break;
          if ( v6 == (int *)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}


