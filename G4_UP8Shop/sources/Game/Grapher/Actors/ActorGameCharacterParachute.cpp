#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterParachute.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterParachute::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterParachute::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGameCharacterParachute::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterParachute::ActorGameCharacterParachute(v3, 0xFFFFFFFF);
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
    ActorGameCharacterParachute::ActorGameCharacterParachute(v3, a1);
  }
  return v3;
}



// Constructor (0x854c40):
int (**ActorGameCharacterParachute::ActorGameCharacterParachute(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D868);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205D868));
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterParachute::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterParachute::~ActorGameCharacterParachute
// ----------------------------------------------------------------------------
void ActorGameCharacterParachute::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84CE70  (binary VA: 0x0)
// Original: sub_84CE70
// ----------------------------------------------------------------------------
void sub_84CE70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8537D0  (binary VA: 0x0)
// Original: sub_8537D0
// ----------------------------------------------------------------------------
int sub_8537D0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int v6;
  long double v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17[4];

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "{Base}", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  grapher::ActorBase::SetArraySize(a1, 3, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Parachute", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Characters", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Open", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Close", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 2, v17, 0, -1);
  g4_std::string::Destroy(v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object which open parachute", (int)(uintptr_t)(&v6) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Object", (int)(uintptr_t)(&v6));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_857DC0  (binary VA: 0x0)
// Original: sub_857DC0
// ----------------------------------------------------------------------------
int sub_857DC0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorContext::Self *v3;
  void **v4;
  void **v5;
  int *v6;
  int v8;
  void *v9[9];

  v3 = a3;
  v9[0] = v9;
  v9[1] = v9;
  sub_856780(a1, 0, (int)(uintptr_t)(v9), (int)(uintptr_t)(a3), 1);
  v4 = (void **)v9[0];
  if ( v9[0] != v9 )
  {
    v8 = *((uint32_t *)v9[0] + 2);
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v9 )
        break;
      v4 = v5;
    }
    v3 = a3;
    if ( v8 != 0 )
    {
      v6 = (int *)G4_VCALL<int>(v8, 16);
      if ( v6 != nullptr )
      {
        if ( v6 == (int *)(&dword_20D75F0) )
        {
LABEL_12:
          if ( a2 != 0 )
          {
            if ( a2 == 1 )
              G4_VCALL<void>(v8, 540);
          }
          else
          {
            G4_VCALL<void>(v8, 528);
            G4_VCALL<void>(v8, 536);
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
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, v3));
}


