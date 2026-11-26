#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterLaunchCharacter.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterLaunchCharacter::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterLaunchCharacter::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGameCharacterLaunchCharacter::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterLaunchCharacter::ActorGameCharacterLaunchCharacter(v3, 0xFFFFFFFF);
    if ( v3 != nullptr )
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
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCharacterLaunchCharacter::ActorGameCharacterLaunchCharacter(v3, a1);
  }
  return v3;
}



// Constructor (0x854c00):
int (**ActorGameCharacterLaunchCharacter::ActorGameCharacterLaunchCharacter(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D828);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205D828));
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterLaunchCharacter::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterLaunchCharacter::~ActorGameCharacterLaunchCharacter
// ----------------------------------------------------------------------------
void ActorGameCharacterLaunchCharacter::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D390  (binary VA: 0x0)
// Original: sub_84D390
// ----------------------------------------------------------------------------
void sub_84D390(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_853B20  (binary VA: 0x0)
// Original: sub_853B20
// ----------------------------------------------------------------------------
int sub_853B20(grapher::ActorBase::Self *a1)
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

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "{Base}", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Shot character as cannonball", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Characters", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "In", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 1, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Character to launch", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Character", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v11 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Character", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Cannon", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Cannon", (int)(uintptr_t)(&v9) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Cannon", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  { g4_std::string::Destroy(&v20); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8581C0  (binary VA: 0x0)
// Original: sub_8581C0
// ----------------------------------------------------------------------------
int sub_8581C0(grapher::ActorBase::Self *a1, int a2, int a3)
{
  grapher::ActorContext::Self *v3;
  void ***v4;
  int v5;
  void **v6;
  int v7;
  int *v8;
  void ***v9;
  int v10;
  void **v11;
  int v12;
  int *v13;
  grapher::ActorContext::Self *v15;
  grapher::ActorContext::Self *v16;
  void *v17;
  void **v18;
  uint8_t v19[12];
  int v20;
  int v21;
  int v22;

  v3 = (grapher::ActorContext::Self *)a3;
  v17 = &v17;
  v18 = &v17;
  sub_856780(a1, 0, (int)(uintptr_t)(&v17), a3, 1);
  v4 = (void ***)v17;
  if ( v17 != &v17 )
  {
    v5 = *((uint32_t *)v17 + 2);
    while ( 1 )
    {
      v6 = *v4;
      opDelete(v4);
      if ( v6 == &v17 )
        break;
      v4 = (void ***)v6;
    }
    v7 = v5;
    v3 = (grapher::ActorContext::Self *)a3;
    if ( v7 != 0 )
    {
      v8 = (int *)G4_VCALL<int>(v7, 16);
      if ( v8 != nullptr )
      {
        if ( v8 == (int *)(&dword_20D75F0) )
          goto LABEL_12;
        while ( 1 )
        {
          v8 = (int *)v8[1];
          if ( v8 == nullptr )
            break;
          if ( v8 == (int *)(&dword_20D75F0) )
            goto LABEL_12;
        }
      }
    }
  }
  v7 = 0;
LABEL_12:
  v17 = &v17;
  v18 = &v17;
  sub_856780(a1, 1, (int)(uintptr_t)(&v17), (int)(uintptr_t)(v3), 1);
  v9 = (void ***)v17;
  if ( v17 != &v17 )
  {
    v16 = v3;
    v15 = *((grapher::ActorContext::Self **)v17 + 2);
    v10 = v7;
    while ( 1 )
    {
      v11 = *v9;
      opDelete(v9);
      if ( v11 == &v17 )
        break;
      v9 = (void ***)v11;
    }
    v12 = v10;
    v3 = v16;
    if ( v15 != nullptr )
    {
      v13 = (int *)G4_VCALL<int>(v15, 16);
      if ( v13 != nullptr )
      {
        if ( v13 == (int *)(&dword_20DE814) )
        {
LABEL_23:
          if ( v12 != 0 )
          {
            sub_9E5400(v12);
            *(uint32_t *)(v12 + 3780) = 0;
            sub_9873B0(v12);
            (*(void (**)(uint8_t *, grapher::ActorContext::Self *))(*(uint32_t *)v15 + 52))(v19, v15);
            ((void (*)(int))v15)(v12);
            sub_992A00(v12, 1);
            sub_995690(v12);
            v20 = 0;
            v21 = 0;
            v22 = 1232348160;
            sub_97FEC0(v12);
          }
        }
        else
        {
          while ( 1 )
          {
            v13 = (int *)v13[1];
            if ( v13 == nullptr )
              break;
            if ( v13 == (int *)(&dword_20DE814) )
              goto LABEL_23;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, v3));
}


