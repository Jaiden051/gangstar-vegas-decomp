#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterAim.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterAim::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterAim::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGameCharacterAim::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterAim::ActorGameCharacterAim(v3, 0xFFFFFFFF);
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
    ActorGameCharacterAim::ActorGameCharacterAim(v3, a1);
  }
  return v3;
}



// Constructor (0x854d50):
int (**ActorGameCharacterAim::ActorGameCharacterAim(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D968);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205D968));
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterAim::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterAim::~ActorGameCharacterAim
// ----------------------------------------------------------------------------
void ActorGameCharacterAim::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D6D0  (binary VA: 0x0)
// Original: sub_84D6D0
// ----------------------------------------------------------------------------
void sub_84D6D0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8527A0  (binary VA: 0x0)
// Original: sub_8527A0
// ----------------------------------------------------------------------------
int sub_8527A0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int v6;
  g4_int128_t v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16[4];

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "{Base}", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Aim", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "AI", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "In", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 1, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The character aiming at his target.", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_857BA0  (binary VA: 0x0)
// Original: sub_857BA0
// ----------------------------------------------------------------------------
int sub_857BA0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  int *v4;
  void **v6;
  int v7;
  void *v8[9];

  v8[0] = v8;
  v8[1] = v8;
  sub_856780(a1, 0, (int)(uintptr_t)(v8), (int)(uintptr_t)(a3), 1);
  v3 = (void **)v8[0];
  if ( v8[0] != v8 )
  {
    v7 = *((uint32_t *)v8[0] + 2);
    while ( 1 )
    {
      v6 = (void **)*v3;
      opDelete(v3);
      if ( v6 == v8 )
        break;
      v3 = v6;
    }
    if ( v7 != 0 )
    {
      v4 = (int *)G4_VCALL<int>(v7, 16);
      if ( v4 != nullptr )
      {
        if ( v4 == (int *)(&dword_20D75F0) )
        {
LABEL_12:
          sub_985930(v7);
        }
        else
        {
          while ( 1 )
          {
            v4 = (int *)v4[1];
            if ( v4 == nullptr )
              break;
            if ( v4 == (int *)(&dword_20D75F0) )
              goto LABEL_12;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


