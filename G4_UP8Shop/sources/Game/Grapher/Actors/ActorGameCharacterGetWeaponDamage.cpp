#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterGetWeaponDamage.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterGetWeaponDamage::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterGetWeaponDamage::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterGetWeaponDamage::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterGetWeaponDamage::ActorGameCharacterGetWeaponDamage(v3, -1);
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
    ActorGameCharacterGetWeaponDamage::ActorGameCharacterGetWeaponDamage(v3, a1);
  }
  return v3;
}



// Constructor (0xc66460):
int (**ActorGameCharacterGetWeaponDamage::ActorGameCharacterGetWeaponDamage(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CD68);
  return (int (**)(int))(uintptr_t)(&off_206CD68);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterGetWeaponDamage::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterGetWeaponDamage::~ActorGameCharacterGetWeaponDamage
// ----------------------------------------------------------------------------
void ActorGameCharacterGetWeaponDamage::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CD68);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B290  (binary VA: 0x0)
// Original: sub_C5B290
// ----------------------------------------------------------------------------
void sub_C5B290(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CD68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5EBC0  (binary VA: 0x0)
// Original: sub_C5EBC0
// ----------------------------------------------------------------------------
int sub_C5EBC0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  void *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  g4_int128_t v12;
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
  int v29[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Get Weapon Damage", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Characters", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Normal", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Melee", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v28, 1, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), "Out", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddPin(a1, 2, v29, 0, -1);
  g4_std::string::Destroy(v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character to get weapon info from", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v9) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v12) = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v15, 9, (char *)&v12 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v7, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( DWORD1(v12) != 0 )
    G4_VCALL<void>(DWORD1(v12), 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The weapon damage", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Damage", (int)(uintptr_t)(&v10));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v18, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Damage", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v3, 1, 1, (int)(uintptr_t)(&v20), 2);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "The weapon damage info", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Damage Info", (int)(uintptr_t)(&v10) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Damage Info", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v22), v4, 1, 1, (int)(uintptr_t)(&v23), 2);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "The weapon damage filter flags", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Damage Filter", (int)(uintptr_t)(&v11) + 2);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Damage Filter", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v25), v5, 1, 1, (int)(uintptr_t)(&v26), 2);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  { g4_std::string::Destroy(&v26); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C669A0  (binary VA: 0x0)
// Original: sub_C669A0
// ----------------------------------------------------------------------------
int sub_C669A0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  char v15;
  char v16;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(&dword_20D75F0) )
      {
LABEL_8:
        if ( G4_VCALL<int>(v4, 428) != 0 )
        {
          if ( a2 != 0 )
          {
            if ( a2 == 1 )
            {
              v15 = sub_987310(v4, 4096);
              v16 = sub_97FD30(v4);
              v11 = (int *)G4_VCALL<int>(v4, 428);
              v12 = sub_5B20C0(v11, v16, v15);
              sub_836F40(a1, 1, v12, a3);
              v13 = G4_VCALL<int>(v4, 428);
              sub_836F40(a1, 2, *(uint32_t *)(v13 + 616), a3);
              v14 = G4_VCALL<int>(v4, 428);
              sub_836F40(a1, 3, *(uint32_t *)(v14 + 604), a3);
            }
          }
          else
          {
            v7 = G4_VCALL<int>(v4, 428);
            v8 = sub_5B2200(v7);
            sub_836F40(a1, 1, v8, a3);
            v9 = G4_VCALL<int>(v4, 428);
            sub_836F40(a1, 2, *(uint32_t *)(v9 + 608), a3);
            v10 = G4_VCALL<int>(v4, 428);
            sub_836F40(a1, 3, *(uint32_t *)(v10 + 596), a3);
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}


