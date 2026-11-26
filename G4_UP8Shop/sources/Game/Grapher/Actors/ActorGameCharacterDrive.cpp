#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterDrive.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterDrive::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterDrive::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGameCharacterDrive::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterDrive::ActorGameCharacterDrive(v3, 0xFFFFFFFF);
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
    ActorGameCharacterDrive::ActorGameCharacterDrive(v3, a1);
  }
  return v3;
}



// Constructor (0x854f50):
int (**ActorGameCharacterDrive::ActorGameCharacterDrive(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205DB68);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205DB68));
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterDrive::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterDrive::~ActorGameCharacterDrive
// ----------------------------------------------------------------------------
void ActorGameCharacterDrive::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D710  (binary VA: 0x0)
// Original: sub_84D710
// ----------------------------------------------------------------------------
void sub_84D710(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8510B0  (binary VA: 0x0)
// Original: sub_8510B0
// ----------------------------------------------------------------------------
int sub_8510B0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Drive", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "AI", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Start", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Drive", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Stop", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The driving character.", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Subject", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Subject", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( HIDWORD(v7) != 0 )
    G4_VCALL<void>(HIDWORD(v7), 44);
  g4_std::string::Destroy(&v10);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8576F0  (binary VA: 0x0)
// Original: sub_8576F0
// ----------------------------------------------------------------------------
int sub_8576F0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorContext::Self *v3;
  void **v4;
  void **v5;
  int *v6;
  int v8;
  int v9;
  int v10;
  void *v11[9];

  v3 = a3;
  v11[0] = v11;
  v11[1] = v11;
  sub_856780(a1, 0, (int)(uintptr_t)(v11), (int)(uintptr_t)(a3), 1);
  v4 = (void **)v11[0];
  if ( v11[0] != v11 )
  {
    v10 = *((uint32_t *)v11[0] + 2);
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v11 )
        break;
      v4 = v5;
    }
    v3 = a3;
    if ( v10 != 0 )
    {
      v6 = (int *)G4_VCALL<int>(v10, 16);
      if ( v6 != nullptr )
      {
        if ( v6 == (int *)(&dword_20D75F0) )
        {
LABEL_12:
          v8 = G4_VCALL<int>(v10, 456);
          if ( v8 != 0 )
          {
            switch ( a2 )
            {
              case 1:
                sub_9C5DF0(v10);
                sub_9B7830(v10, 0);
                sub_9C5C00(v10);
                break;
              case 2:
                sub_9B71D0(v10, 0, 1);
                if ( *(int *)(v8 + 1096) <= 0 || (v9 = **(uint32_t **)(v8 + 1104)) == 0 || v9 == v10 )
                  G4_VCALL<void>(v8, 420);
                break;
              case 0:
                G4_VCALL<void>(v8, 416);
                break;
              default:
                break;
            }
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
              goto LABEL_12;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, v3));
}


