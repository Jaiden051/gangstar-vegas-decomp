#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetMoveAnimation.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetMoveAnimation::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterSetMoveAnimation::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterSetMoveAnimation::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterSetMoveAnimation::ActorGameCharacterSetMoveAnimation(v3, -1);
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
    ActorGameCharacterSetMoveAnimation::ActorGameCharacterSetMoveAnimation(v3, a1);
  }
  return v3;
}



// Constructor (0xc668a0):
int (**ActorGameCharacterSetMoveAnimation::ActorGameCharacterSetMoveAnimation(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D1E8);
  return (int (**)(int))(uintptr_t)(&off_206D1E8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetMoveAnimation::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterSetMoveAnimation::~ActorGameCharacterSetMoveAnimation
// ----------------------------------------------------------------------------
void ActorGameCharacterSetMoveAnimation::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D1E8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B6D0  (binary VA: 0x0)
// Original: sub_C5B6D0
// ----------------------------------------------------------------------------
void sub_C5B6D0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D1E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C62CC0  (binary VA: 0x0)
// Original: sub_C62CC0
// ----------------------------------------------------------------------------
int sub_C62CC0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  void *v4;
  uint32_t *v5;
  void *v6;
  int v7;
  int v8;
  int v9;
  g4_int128_t v10;
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
  int v23[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Set Move Animation", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "AI", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetCategoryName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "In", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 1, v23, 0, -1);
  g4_std::string::Destroy(v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "The character to animate.", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Target", (int)(uintptr_t)(&v8) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v10) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v13, 9, (char *)&v10 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Target", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v6, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v10) != 0 )
    G4_VCALL<void>(DWORD1(v10), 44);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "The animation intensity.", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Intensity", (int)(uintptr_t)(&v9));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 1, 1000);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Intensity", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "The animation direction.", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Forward", (int)(uintptr_t)(&v9) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v19, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Forward", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v20), v4, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  { g4_std::string::Destroy(&v21); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C68750  (binary VA: 0x0)
// Original: sub_C68750
// ----------------------------------------------------------------------------
int sub_C68750(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v10;
  float v11; // xmm0_4
  char v12;
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
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  grapher::ActorContext::Self *v35;
  grapher::ActorContext::Self *v36;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(&dword_20D75F0) )
      {
LABEL_9:
        Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
        v36 = sub_837200((int)(uintptr_t)(a1), Variable, a3, v13, v16, v19, v22, v25, v28, v31, v34, v35);
        v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
        sub_837730((int)(uintptr_t)(a1), v10, a3, v15, v18, v21, v24, v27, v30, v33);
        if ( (int)(uintptr_t)(v36) > 0 )
        {
          if ( (uint8_t)sub_987F30((uint32_t *)v4) != 0 && *(uint8_t *)(v4 + 189) != 0 )
          {
            v11 = 0.17500001f;
LABEL_15:
            v12 = sub_987A40(v4);
            sub_9DA760(v4, v11, v12);
            return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
          }
          v11 = 1.0;
          if ( (*(uint8_t *)(v4 + 1872) & 0x20) != 0 )
            goto LABEL_15;
        }
        v11 = (float)(int)(uintptr_t)(v36) * 0.001f;
        goto LABEL_15;
      }
      while ( 1 )
      {
        v5 = (int *)v5[1];
        if ( v5 == nullptr )
          break;
        if ( v5 == (int *)(&dword_20D75F0) )
          goto LABEL_9;
      }
    }
  }
  v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  sub_837200((int)(uintptr_t)(a1), v6, a3, v13, v16, v19, v22, v25, v28, v31, v34, v35);
  v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  sub_837730((int)(uintptr_t)(a1), v7, a3, v14, v17, v20, v23, v26, v29, v32);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


