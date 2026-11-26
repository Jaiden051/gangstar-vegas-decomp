#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameWorldCoverEligible.h"

// ----------------------------------------------------------------------------
// Function: ActorGameWorldCoverEligible::CreateInstance  (binary VA: 0x0)
// Original: ActorGameWorldCoverEligible::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameWorldCoverEligible::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameWorldCoverEligible::ActorGameWorldCoverEligible(v3, -1);
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
    ActorGameWorldCoverEligible::ActorGameWorldCoverEligible(v3, a1);
  }
  return v3;
}



// Constructor (0x829c50):
int (**ActorGameWorldCoverEligible::ActorGameWorldCoverEligible(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BCE8);
  return (int (**)(int))(uintptr_t)(&off_205BCE8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameWorldCoverEligible::Destroy  (binary VA: 0x0)
// Original: ActorGameWorldCoverEligible::~ActorGameWorldCoverEligible
// ----------------------------------------------------------------------------
int ActorGameWorldCoverEligible::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BCE8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8208B0  (binary VA: 0x0)
// Original: sub_8208B0
// ----------------------------------------------------------------------------
void sub_8208B0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BCE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_828AD0  (binary VA: 0x0)
// Original: sub_828AD0
// ----------------------------------------------------------------------------
int sub_828AD0(grapher::ActorBase::Self *a1)
{
  void *v2;
  void *v3;
  int v4;
  int v5;
  int v6;
  int v7;
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
  int v18[8];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Set Cover Eligibility", (int)(uintptr_t)(&v4));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "World", (int)(uintptr_t)(&v4) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Clear", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Eligible", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Ineligible", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 3, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "List of covers", (int)(uintptr_t)(&v5));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Cover", (int)(uintptr_t)(&v4) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v9, 9, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Cover", (int)(uintptr_t)(&v4) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v2, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "List of characters", (int)(uintptr_t)(&v5) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Target", (int)(uintptr_t)(&v5) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 9, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Target", (int)(uintptr_t)(&v5) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v13), v3, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  { g4_std::string::Destroy(&v14); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_821180  (binary VA: 0x0)
// Original: sub_821180
// ----------------------------------------------------------------------------
void sub_821180(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  int v4;
  int *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *k;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *j;
  uint32_t *v14;
  uint32_t *i;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t v22[4];
  uint32_t *v23;
  uint32_t **v24;

  v22[0] = (uint32_t)(uintptr_t)(v22);
  v22[1] = (uint32_t)(uintptr_t)(v22);
  v23 = (uint32_t *)(&v23);
  v24 = &v23;
  sub_8560A0(a1, 0, (int)(uintptr_t)(&v23), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = v23;
  if ( v23 != (uint32_t *)(&v23) )
  {
    do
    {
      v4 = v3[2];
      if ( v4 != 0 )
      {
        v16 = v3[2];
        v19 = v3;
        v5 = (int *)(*(int (**)(int))(*(uint32_t *)v4 + 16))(v16);
        v3 = v19;
        if ( v5 != nullptr )
        {
          while ( v5 != (int *)(&dword_20D70F4) )
          {
            v5 = (int *)v5[1];
            if ( v5 == nullptr )
              goto LABEL_10;
          }
          v6 = opNew(0xCu);
          if ( v6 != -8 )
            *(uint32_t *)(v6 + 8) = v16;
          sub_1901920(v6, v22);
          v3 = v19;
        }
      }
LABEL_10:
      v3 = (uint32_t *)*v3;
    }
    while ( v3 != (uint32_t *)(&v23) );
    v7 = v23;
    if ( v23 != (uint32_t *)(&v23) )
    {
      while ( 1 )
      {
        v8 = (uint32_t *)*v7;
        opDelete(v7);
        if ( v8 == (uint32_t *)(&v23) )
          break;
        v7 = v8;
      }
    }
  }
  switch ( a2 )
  {
    case 1:
      v23 = (uint32_t *)(&v23);
      v24 = &v23;
      sub_820400(a1, 1, (int)(uintptr_t)(&v23), (int)(uintptr_t)(a3));
      v14 = (uint32_t *)v22[0];
      for ( i = v23; v14 != v22; v14 = (uint32_t *)*v14 )
      {
        if ( v14[2] != 0 && i != (uint32_t *)(&v23) )
        {
          do
          {
            if ( i[2] != 0 )
            {
              v18 = v14;
              sub_8EB330(v14[2], i[2]);
              v14 = v18;
            }
            i = (uint32_t *)*i;
          }
          while ( i != (uint32_t *)(&v23) );
          i = v23;
        }
      }
      if ( i != (uint32_t *)(&v23) )
      {
        while ( 1 )
        {
          v21 = (uint32_t *)*i;
          opDelete(i);
          if ( v21 == (uint32_t *)(&v23) )
            break;
          i = v21;
        }
      }
      break;
    case 2:
      v23 = (uint32_t *)(&v23);
      v24 = &v23;
      sub_820400(a1, 1, (int)(uintptr_t)(&v23), (int)(uintptr_t)(a3));
      v12 = (uint32_t *)v22[0];
      for ( j = v23; v12 != v22; v12 = (uint32_t *)*v12 )
      {
        if ( v12[2] != 0 && j != (uint32_t *)(&v23) )
        {
          do
          {
            if ( j[2] != 0 )
            {
              v17 = v12;
              sub_8EB3E0(v12[2], j[2]);
              v12 = v17;
            }
            j = (uint32_t *)*j;
          }
          while ( j != (uint32_t *)(&v23) );
          j = v23;
        }
      }
      if ( j != (uint32_t *)(&v23) )
      {
        while ( 1 )
        {
          v20 = (uint32_t *)*j;
          opDelete(j);
          if ( v20 == (uint32_t *)(uintptr_t)(&v23) )
            break;
          j = v20;
        }
      }
      break;
    case 0:
      for ( k = (uint32_t *)v22[0]; k != v22; k = (uint32_t *)*k )
      {
        if ( k[2] != 0 )
          sub_8EB500(k[2]);
      }
      break;
    default:
      break;
  }
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v10 = (uint32_t *)v22[0];
  if ( (uint32_t *)v22[0] != v22 )
  {
    while ( 1 )
    {
      v11 = (uint32_t *)*v10;
      opDelete(v10);
      if ( v11 == v22 )
        break;
      v10 = v11;
    }
  }
}


