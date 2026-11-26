#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameWorldRace.h"

// ----------------------------------------------------------------------------
// Function: ActorGameWorldRace::CreateInstance  (binary VA: 0x0)
// Original: ActorGameWorldRace::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameWorldRace::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x5Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameWorldRace::ActorGameWorldRace(v3, -1);
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
    v3 = gll_operator_new(0x5Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameWorldRace::ActorGameWorldRace(v3, a1);
  }
  return v3;
}



// Constructor (0x829d20):
int (**ActorGameWorldRace::ActorGameWorldRace(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 13) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BDA8);
  *((uint32_t *)a1 + 14) = 0;
  *((uint32_t *)a1 + 15) = 0;
  *((uint32_t *)a1 + 16) = 0;
  *((uint32_t *)a1 + 17) = 0;
  *((uint32_t *)a1 + 18) = 0;
  *((uint32_t *)a1 + 19) = 0;
  *((uint32_t *)a1 + 20) = 0;
  *((uint32_t *)a1 + 21) = 0;
  *((uint32_t *)a1 + 22) = 0;
  return (int (**)(int))(uintptr_t)(&off_205BDA8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameWorldRace::Destroy  (binary VA: 0x0)
// Original: ActorGameWorldRace::~ActorGameWorldRace
// ----------------------------------------------------------------------------
int ActorGameWorldRace::Destroy(grapher::ActorBase::Self *a1)
{
  char *v1;
  char *v2;
  char *v3;
  int v4;

  v1 = *((char **)a1 + 14);
  v2 = *((char **)a1 + 13);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BDA8);
  v3 = v1;
  if ( v1 != v2 )
  {
    while ( 1 )
    {
      v4 = *((uint32_t *)v3 - 1);
      if ( v4 != 0 )
      {
        G4_VCALL<void>(v4, 12);
        v1 = *((char **)a1 + 14);
        v2 = *((char **)a1 + 13);
      }
      v3 = v1 - 4;
      *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)(v1 - 4);
      if ( v1 - 4 == v2 )
        break;
      v1 -= 4;
    }
  }
  if ( v2 != nullptr )
    opDelete(v2);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_821F30  (binary VA: 0x0)
// Original: sub_821F30
// ----------------------------------------------------------------------------
void sub_821F30(grapher::ActorBase::Self *a1)
{
  char *v1;
  char *v2;
  char *v3;
  int v4;

  v1 = *((char **)a1 + 14);
  v2 = *((char **)a1 + 13);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BDA8);
  v3 = v1;
  if ( v1 != v2 )
  {
    while ( 1 )
    {
      v4 = *((uint32_t *)v3 - 1);
      if ( v4 != 0 )
      {
        G4_VCALL<void>(v4, 12);
        v1 = *((char **)a1 + 14);
        v2 = *((char **)a1 + 13);
      }
      v3 = v1 - 4;
      *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)(v1 - 4);
      if ( v1 - 4 == v2 )
        break;
      v1 -= 4;
    }
  }
  if ( v2 != nullptr )
    opDelete(v2);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8277B0  (binary VA: 0x0)
// Original: sub_8277B0
// ----------------------------------------------------------------------------
int sub_8277B0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v5;
  void *v6;
  uint32_t *v7;
  void *v8;
  uint32_t *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint8_t v22[20];
  uint32_t *v23;
  uint32_t *v24;
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
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 6, 7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Race Start", (int)(uintptr_t)(&v15));
  grapher::ActorBase::SetDisplayName(a1, &v25);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Missions", (int)(uintptr_t)(&v16));
  grapher::ActorBase::SetCategoryName(a1, &v26);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "In", (int)(uintptr_t)(&v21) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v48, 1, -1);
  g4_std::string::Destroy(&v48);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "Out", (int)(uintptr_t)(&v21) + 3);
  grapher::ActorBase::AddPin(a1, 1, &v49, 0, -1);
  g4_std::string::Destroy(&v49);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Player Finished", (int)(uintptr_t)(v22));
  grapher::ActorBase::AddPin(a1, 2, &v50, 0, -1);
  g4_std::string::Destroy(&v50);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "Opponent Finished", (int)(uintptr_t)(&v22[1]));
  grapher::ActorBase::AddPin(a1, 3, &v51, 0, -1);
  g4_std::string::Destroy(&v51);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "Lap completed", (int)(uintptr_t)(&v22[2]));
  grapher::ActorBase::AddPin(a1, 4, &v52, 0, -1);
  g4_std::string::Destroy(&v52);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v53), "Waypoint Reached", (int)(uintptr_t)(&v22[3]));
  grapher::ActorBase::AddPin(a1, 5, v53, 0, -1);
  g4_std::string::Destroy(v53);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Type of race from races.xml.", (int)(uintptr_t)(&v16) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Race Type", (int)(uintptr_t)(&v16) + 1);
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v27, 11, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Race Type", (int)(uintptr_t)(&v16) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v28), v11, 1, 1, (int)(uintptr_t)(&v29), 1);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v32),
    "Name of the 3 paths that delimit the race. Must have left, right and center in their name.",
    (int)(uintptr_t)(&v17) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Delimiter paths", (int)(uintptr_t)(&v17));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v22[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v30, 9, &v22[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Delimiter paths", (int)(uintptr_t)(&v17) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v31), v6, 1, 1, (int)(uintptr_t)(&v32), 1);
  g4_std::string::Destroy(&v31);
  if ( *(uint32_t *)&v22[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v22[4] + 44))(*(uint32_t *)&v22[4]);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Name of the racer npcs that will race, already placed in their vehicles.", (int)(uintptr_t)(&v18) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Racers", (int)(uintptr_t)(&v17) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v23 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v33, 9, &v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Racers", (int)(uintptr_t)(&v18));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v34), v8, 1, 1, (int)(uintptr_t)(&v35), 1);
  g4_std::string::Destroy(&v34);
  if ( v23 != nullptr )
    G4_VCALL<void>(v23, 44);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Name of the path that will have the visual cues for the player.", (int)(uintptr_t)(&v19));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Visual Path", (int)(uintptr_t)(&v18) + 2);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v24 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v36, 9, &v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Visual Path", (int)(uintptr_t)(&v18) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v37), v10, 1, 1, (int)(uintptr_t)(&v38), 1);
  g4_std::string::Destroy(&v37);
  if ( v24 != nullptr )
    G4_VCALL<void>(v24, 44);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Number of laps to win the race.", (int)(uintptr_t)(&v19) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Laps", (int)(uintptr_t)(&v19) + 1);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v39, 1, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Laps", (int)(uintptr_t)(&v19) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v40), v12, 1, 1, (int)(uintptr_t)(&v41), 1);
  g4_std::string::Destroy(&v40);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Snap the waypoints to the floor.", (int)(uintptr_t)(&v20) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Snap Waypoints", (int)(uintptr_t)(&v20));
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v42, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Snap Waypoints", (int)(uintptr_t)(&v20) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v43), v13, 1, 1, (int)(uintptr_t)(&v44), 1);
  g4_std::string::Destroy(&v43);
  g4_std::string::Destroy(&v42);
  g4_std::string::Destroy(&v44);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Position of the player.", (int)(uintptr_t)(&v21) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "Player Position", (int)(uintptr_t)(&v20) + 3);
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v45, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Player Position", (int)(uintptr_t)(&v21));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v46), v14, 1, 1, (int)(uintptr_t)(&v47), 2);
  g4_std::string::Destroy(&v46);
  g4_std::string::Destroy(&v45);
  return ((g4_std::string::Destroy(&v47)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_81FA90  (binary VA: 0x0)
// Original: sub_81FA90
// ----------------------------------------------------------------------------
int sub_81FA90(int a1, int a2)
{
  int result;

  result = dword_20DA2A0;
  if ( dword_20DA2A0 == 0 )
    return G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_82C8E0  (binary VA: 0x0)
// Original: sub_82C8E0
// ----------------------------------------------------------------------------
char sub_82C8E0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  uint32_t *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  char result;
  int v13;
  void *v14;
  void *v15;

  v4 = (uint32_t *)sub_8F0680(v3);
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v5 = nullptr;
  if ( byte_20D3C44 == 0 )
    v5 = (int *)(&dword_20D3C40);
  v6 = v5[14];
  if ( G4_VCALL<int>(v4, 456) != 0 )
  {
    v7 = v4[468];
    v8 = v4[469];
    if ( (v7 & 0x100) != 0 && v7 >= 0 && (v8 & 1) == 0 && (v8 & 4) == 0 )
    {
      v13 = *((uint32_t *)a1 + 19);
      if ( v4[1070] != v13 )
        sub_66CB10(v6, v13, *((uint32_t *)a1 + 20), *((uint32_t *)a1 + 22));
    }
  }
  if ( v4[1075] != *((uint32_t *)a1 + 20) && v4[1070] == *((uint32_t *)a1 + 19) )
  {
    v15 = (void *)v4[1075];
    grapher::ActorBase::FireEvent(a1, 5, a3);
    v14 = v15;
    if ( (int)v4[1072] > 0 && *((uint32_t *)a1 + 20) == 0 )
    {
      grapher::ActorBase::FireEvent(a1, 4, a3);
      v14 = v15;
    }
    *((uint32_t *)a1 + 20) = (uint32_t)(uintptr_t)(v14);
    *((uint32_t *)a1 + 22) = v4[1072];
  }
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v9 = nullptr;
  if ( byte_20D3C44 == 0 )
    v9 = (int *)(&dword_20D3C40);
  v10 = sub_670090((uint32_t *)v9[14]);
  sub_836F40(a1, 6, v10, a3);
  v11 = *((uint32_t *)a1 + 21);
  if ( v11 != sub_66C730(v6) )
  {
    *((uint32_t *)a1 + 21) = sub_66C730(v6);
    if ( !sub_66C6E0(v6) )
      grapher::ActorBase::FireEvent(a1, 3, a3);
  }
  result = sub_66C720(v6);
  if ( result != 0 )
  {
    grapher::ActorBase::FireEvent(a1, 2, a3);
    return G4_VCALL<int>(a1, 28, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_822540  (binary VA: 0x0)
// Original: sub_822540
// ----------------------------------------------------------------------------
int * sub_822540(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  char v2;
  int *result;
  int *v4;

  grapher::ActorBase::Cancel(a1, a2);
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v2 = byte_20D3C44;
  result = nullptr;
  if ( byte_20D3C44 == 0 )
    result = (int *)(&dword_20D3C40);
  if ( result[14] != 0 )
  {
    if ( byte_20D3C30 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
      {
        sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
        __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
      }
      v2 = byte_20D3C44;
    }
    v4 = nullptr;
    if ( v2 == 0 )
      v4 = (int *)(&dword_20D3C40);
    return (int *)sub_674AB0((uint32_t *)v4[14]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_834CE0  (binary VA: 0x0)
// Original: sub_834CE0
// ----------------------------------------------------------------------------
void sub_834CE0(g4_cxa_guard_t *a1, int a2, grapher::ActorContext::Self *a3)
{
  g4_cxa_guard_t *v3;
  int *v4;
  grapher::ActorVariable::Self *Variable;
  void **i;
  int *v7;
  const char *v8;
  int v9;
  char *v10;
  int *v11;
  char *v12;
  char *v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  void **v18;
  int j;
  grapher::ActorVariable::Self *v20;
  char *v21;
  void **v22;
  int v23;
  void **v24;
  char *v25;
  int *v26;
  grapher::ActorVariable::Self *v27;
  int v28;
  void **v29;
  void **v30;
  void **v31;
  void **v32;
  void *v33;
  int v34;
  float v35;
  grapher::ActorManager::Self *v36;
  grapher::ActorManager::Self *v37;
  grapher::ActorManager::Self *v38;
  int v39;
  grapher::ActorContext::Self *v40;
  g4_cxa_guard_t *v41;
  char *needle;
  g4_cxa_guard_t *v43;
  uint8_t v44[5];
  char *v45;
  void *v46[2];
  void *v47[8];

  v47[4] = &a1;
  v3 = a1;
  v40 = a3;
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0(&dword_20D3C40);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D3C44 == 0 )
    v4 = (int *)(&dword_20D3C40);
  v39 = v4[14];
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v3, 5);
  *(uint8_t *)(v39 + 48) = sub_837730(v3, Variable, v40);
  v46[0] = v46;
  v46[1] = v46;
  sub_820400(v46, v40);
  v47[0] = v47;
  v47[1] = v47;
  sub_8560A0(v3, 1, v47, v40, 0x7FFFFFFF);
  for ( i = (void **)v47[0]; i != v47; i = (void **)*i )
  {
    v12 = (char *)G4_VCALL<int>(i[2], 44);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44[1]), v12, (int)(uintptr_t)(v44));
    GLFUtils::ToLowerCase(&v44[1], 0, -1);
    v36 = *(grapher::ActorManager::Self **)&v44[1];
    v13 = (char *)(strstr(*(const char **)&v44[1], "left"));
    v8 = (const char *)v36;
    if ( v13 != nullptr )
    {
      v14 = G4_VCALL<int>(i[2], 44);
      v15 = (char *)v14;
      if ( byte_20D4A50 == 0 )
      {
        v37 = (grapher::ActorManager::Self *)v14;
        v16 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50);
        v15 = (char *)v37;
        if ( v16 != 0 )
        {
          sub_5B3AF0(&dword_20D4A60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
          __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
          v15 = (char *)v37;
        }
      }
      v7 = nullptr;
      if ( byte_20D4A64 == 0 )
        v7 = (int *)(&dword_20D4A60);
      v3[16] = sub_5C8D90((int)(uintptr_t)(v7), v15, 0);
      v8 = *(const char **)&v44[1];
    }
    if ( strstr(v8, "right") != nullptr )
    {
      v9 = G4_VCALL<int>(i[2], 44);
      v10 = (char *)v9;
      if ( byte_20D4A50 == 0 )
      {
        v38 = (grapher::ActorManager::Self *)v9;
        v17 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50);
        v10 = (char *)v38;
        if ( v17 != 0 )
        {
          sub_5B3AF0(&dword_20D4A60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
          __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
          v10 = (char *)v38;
        }
      }
      v11 = nullptr;
      if ( byte_20D4A64 == 0 )
        v11 = (int *)(&dword_20D4A60);
      v3[17] = sub_5C8D90((int)(uintptr_t)(v11), v10, 0);
    }
    g4_std::string::Destroy(&v44[1]);
  }
  sub_66C570(v39, v3[16], v3[17]);
  v18 = (void **)v46[0];
  for ( j = 0; v18 != v46; ++j )
    v18 = (void **)*v18;
  sub_829DB0(v3, j);
  v20 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v3, 4);
  v21 = (char *)sub_837200(v3, v20, v40);
  v22 = (void **)v46[0];
  v23 = 0;
  needle = v21;
  if ( v46[0] != v46 )
  {
    v24 = (void **)v46[0];
    do
    {
      v24 = (void **)*v24;
      ++v23;
    }
    while ( v24 != v46 );
  }
  if ( (v3[14] - v3[13]) >> 2 == v23 && v46[0] != v46 )
  {
    v43 = nullptr;
    v41 = v3;
    do
    {
      v33 = v22[2];
      if ( v33 != nullptr )
      {
        v34 = (*(int (**)(void *))(*(uint32_t *)v33 + 456))(v22[2]);
        if ( v34 != 0 )
        {
          v35 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v34 + 668))(v34);
          sub_67A3E0(v39, v33, *(g4_cxa_guard_t *)((char *)v43 + v41[13]), v35 * 0.2777778f, needle);
        }
      }
      v22 = (void **)*v22;
      ++v43;
    }
    while ( v22 != v46 );
    v3 = v41;
  }
  grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v3, 3);
  sub_837C70(&v45);
  v25 = v45;
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0(&dword_20D4A60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v26 = nullptr;
  if ( byte_20D4A64 == 0 )
    v26 = (int *)(&dword_20D4A60);
  v3[19] = sub_5C8D90((int)(uintptr_t)(v26), v25, 0);
  v27 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v3, 0);
  v28 = dword_20D9030 + 20 * (uintptr_t)sub_837200(v3, v27, v40);
  sub_678930(v39, v3[19], (int)(uintptr_t)(needle), *(char **)(v28 + 8), *(uint32_t *)(v28 + 12), *(char **)(v28 + 16));
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, (grapher::ActorBase::Self *)v3, v40);
  v3[20] = 0;
  v3[21] = 0;
  v3[22] = 0;
  grapher::ActorBase::FireEvent((grapher::ActorBase::Self *)v3, 1, v40);
  g4_std::string::Destroy(&v45);
  v29 = (void **)v47[0];
  if ( v47[0] != v47 )
  {
    while ( 1 )
    {
      v30 = (void **)*v29;
      opDelete(v29);
      if ( v30 == v47 )
        break;
      v29 = v30;
    }
  }
  v31 = (void **)v46[0];
  if ( v46[0] != v46 )
  {
    while ( 1 )
    {
      v32 = (void **)*v31;
      opDelete(v31);
      if ( v32 == v46 )
        break;
      v31 = v32;
    }
  }
}


