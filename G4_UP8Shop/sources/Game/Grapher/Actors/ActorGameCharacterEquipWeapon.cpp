#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterEquipWeapon.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterEquipWeapon::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterEquipWeapon::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGameCharacterEquipWeapon::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterEquipWeapon::ActorGameCharacterEquipWeapon(v3, 0xFFFFFFFF);
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
    ActorGameCharacterEquipWeapon::ActorGameCharacterEquipWeapon(v3, a1);
  }
  return v3;
}



// Constructor (0x855050):
int (**ActorGameCharacterEquipWeapon::ActorGameCharacterEquipWeapon(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205DC68);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205DC68));
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterEquipWeapon::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterEquipWeapon::~ActorGameCharacterEquipWeapon
// ----------------------------------------------------------------------------
void ActorGameCharacterEquipWeapon::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D450  (binary VA: 0x0)
// Original: sub_84D450
// ----------------------------------------------------------------------------
void sub_84D450(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84FF40  (binary VA: 0x0)
// Original: sub_84FF40
// ----------------------------------------------------------------------------
int sub_84FF40(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int v6;
  int64_t v7;
  int v8;
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

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "{Base}", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Equip Weapon", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Characters", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Equip", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Equip (Melee)", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Unequip", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Character to give the weapon", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( HIDWORD(v7) != 0 )
    G4_VCALL<void>(HIDWORD(v7), 44);
  g4_std::string::Destroy(&v10);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_856FE0  (binary VA: 0x0)
// Original: sub_856FE0
// ----------------------------------------------------------------------------
void sub_856FE0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorContext::Self *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  char v8;
  uint32_t *v9;
  int v10;
  grapher::ActorContext::Self *v11;
  uint32_t v12[7];

  v3 = a3;
  v12[0] = (uint32_t)(uintptr_t)(v12);
  v12[1] = (uint32_t)(uintptr_t)(v12);
  sub_856EF0(a1, (int)(uintptr_t)(v12), (int)(uintptr_t)(a3));
  if ( a2 == 1 )
  {
    if ( (uint32_t *)v12[0] == v12 )
      goto LABEL_10;
    v11 = a3;
    v9 = (uint32_t *)v12[0];
    do
    {
      if ( (uint8_t)sub_97FD30(v9[2]) != 0 )
      {
        sub_8F3950(v9[2]);
      }
      else
      {
        if ( (uint8_t)sub_8ED2A0(*(uint32_t *)(v9[2] + 1132), 1) != 0 )
          (*(void (**)(uint32_t, int))(**(uint32_t **)(v9[2] + 1132) + 36))(*(uint32_t *)(v9[2] + 1132), 1);
        else
          sub_8ED2D0(*(uint32_t *)(v9[2] + 1132));
        sub_9EE090(v9[2], 1);
      }
      v9 = (uint32_t *)*v9;
    }
    while ( v9 != v12 );
LABEL_9:
    v3 = v11;
    goto LABEL_10;
  }
  if ( a2 == 2 )
  {
    if ( (uint32_t *)v12[0] == v12 )
      goto LABEL_10;
    v11 = a3;
    v7 = (uint32_t *)v12[0];
    do
    {
      v8 = sub_97FD30(v7[2]);
      v10 = v7[2];
      if ( v8 != 0 )
      {
        sub_906BC0(v10);
      }
      else if ( (uint8_t)sub_987F30(v10) == 0 )
      {
        sub_8ED2D0(*(uint32_t *)(v7[2] + 1132));
        sub_9EE090(v7[2], 1);
      }
      v7 = (uint32_t *)*v7;
    }
    while ( v7 != v12 );
    goto LABEL_9;
  }
  if ( a2 == 0 && (uint32_t *)v12[0] != v12 )
  {
    v11 = a3;
    v4 = (uint32_t *)v12[0];
    do
    {
      while ( (uint8_t)sub_97FD30(v4[2]) != 0 )
      {
        sub_8F39F0(v4[2]);
        v4 = (uint32_t *)*v4;
        if ( v4 == v12 )
          goto LABEL_9;
      }
      G4_VCALL<void>(v4[2], 424, *(uint32_t *)(v4[2] + 2508));
      sub_9EE090(v4[2], 1);
      v4 = (uint32_t *)*v4;
    }
    while ( v4 != v12 );
    goto LABEL_9;
  }
LABEL_10:
  grapher::ActorBase::FireEvent(a1, 3, v3);
  v5 = (uint32_t *)v12[0];
  if ( (uint32_t *)v12[0] != v12 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)*v5;
      opDelete(v5);
      if ( v6 == v12 )
        break;
      v5 = v6;
    }
  }
}


