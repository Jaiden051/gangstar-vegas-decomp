#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterSteerTowardDeepWater.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSteerTowardDeepWater::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterSteerTowardDeepWater::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterSteerTowardDeepWater::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterSteerTowardDeepWater::ActorGameCharacterSteerTowardDeepWater(v3, -1);
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
    ActorGameCharacterSteerTowardDeepWater::ActorGameCharacterSteerTowardDeepWater(v3, a1);
  }
  return v3;
}



// Constructor (0x845040):
int (**ActorGameCharacterSteerTowardDeepWater::ActorGameCharacterSteerTowardDeepWater(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C6C8);
  return (int (**)(int))(uintptr_t)(&off_205C6C8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSteerTowardDeepWater::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterSteerTowardDeepWater::~ActorGameCharacterSteerTowardDeepWater
// ----------------------------------------------------------------------------
int ActorGameCharacterSteerTowardDeepWater::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C6C8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_839570  (binary VA: 0x0)
// Original: sub_839570
// ----------------------------------------------------------------------------
void sub_839570(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C6C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_83C830  (binary VA: 0x0)
// Original: sub_83C830
// ----------------------------------------------------------------------------
int sub_83C830(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Steer Toward Deep Water", (int)(uintptr_t)(&v5));
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "The steering character.", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Subject", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v6) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v9, 9, (char *)&v6 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Subject", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v4, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  if ( HIDWORD(v6) != 0 )
    G4_VCALL<void>(HIDWORD(v6), 44);
  g4_std::string::Destroy(&v9);
  { g4_std::string::Destroy(&v11); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_83A8D0  (binary VA: 0x0)
// Original: sub_83A8D0
// ----------------------------------------------------------------------------
int sub_83A8D0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;

  v3 = sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(&dword_20D75F0) )
      {
LABEL_8:
        sub_981670(v4);
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
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


