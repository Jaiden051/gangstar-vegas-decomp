#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterSpawnAI.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSpawnAI::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterSpawnAI::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterSpawnAI::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x48u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterSpawnAI::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), -1);
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
    v3 = gll_operator_new(0x48u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCharacterSpawnAI::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSpawnAI::Construct  (binary VA: 0x0)
// Original: ActorGameCharacterSpawnAI::ActorGameCharacterSpawnAI
// ----------------------------------------------------------------------------
int ActorGameCharacterSpawnAI::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  int v3;

  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 15) = -1;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C648);
  *((uint32_t *)a1 + 16) = 0;
  v3 = *((uint32_t *)a1 + 14);
  *((uint32_t *)a1 + 17) = 0;
  sub_84BB20((char *)a1 + 56, v3);
  sub_84BB20((char *)a1 + 52, *((uint32_t *)a1 + 13));
  sub_84BB20((char *)a1 + 60, *((uint32_t *)a1 + 15));
  return sub_84BB20((char *)a1 + 64, *((uint32_t *)a1 + 16));
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSpawnAI::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterSpawnAI::~ActorGameCharacterSpawnAI
// ----------------------------------------------------------------------------
int ActorGameCharacterSpawnAI::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C648);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8394F0  (binary VA: 0x0)
// Original: sub_8394F0
// ----------------------------------------------------------------------------
void sub_8394F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C648);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_83B8D0  (binary VA: 0x0)
// Original: sub_83B8D0
// ----------------------------------------------------------------------------
int sub_83B8D0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v6;
  void *v7;
  uint32_t *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  uint32_t *v13;
  void *v14;
  void *v15;
  uint32_t *v16;
  void *v17;
  void *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  uint8_t v27[20];
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
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
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Spawn AI [C]", (int)(uintptr_t)(&v19));
  grapher::ActorBase::SetDisplayName(a1, &v31);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Characters", (int)(uintptr_t)(&v19) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v32);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "In", (int)(uintptr_t)(v27));
  grapher::ActorBase::AddPin(a1, 0, &v61, 1, -1);
  g4_std::string::Destroy(&v61);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "All Spawned", (int)(uintptr_t)(&v27[1]));
  grapher::ActorBase::AddPin(a1, 1, &v62, 0, -1);
  g4_std::string::Destroy(&v62);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "New Spawn", (int)(uintptr_t)(&v27[2]));
  grapher::ActorBase::AddPin(a1, 2, &v63, 0, -1);
  g4_std::string::Destroy(&v63);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v64), "Out", (int)(uintptr_t)(&v27[3]));
  grapher::ActorBase::AddPin(a1, 3, v64, 0, -1);
  g4_std::string::Destroy(v64);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Base name of the object. A number will be appended, starting from 01.", (int)(uintptr_t)(&v20) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Base Name", (int)(uintptr_t)(&v20));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v27[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v33, 4, &v27[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Base Name", (int)(uintptr_t)(&v20) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v34), v7, 1, 1, (int)(uintptr_t)(&v35), 3);
  g4_std::string::Destroy(&v34);
  if ( *(uint32_t *)&v27[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v27[4] + 44))(*(uint32_t *)&v27[4]);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Spawn group in which a random template will be picked.", (int)(uintptr_t)(&v21) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "SpawnGroup", (int)(uintptr_t)(&v21));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "AllSpawnGroups", (int)(uintptr_t)(&v20) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &v36);
  v28 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v37, 11, &v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "SpawnGroup", (int)(uintptr_t)(&v21) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v38), v9, 1, 1, (int)(uintptr_t)(&v39), 3);
  g4_std::string::Destroy(&v38);
  if ( v28 != nullptr )
    G4_VCALL<void>(v28, 44);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(&v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "How many ms in between spawns", (int)(uintptr_t)(&v22) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Frequency", (int)(uintptr_t)(&v21) + 3);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v40, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Frequency", (int)(uintptr_t)(&v22));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v41), v10, 1, 1, (int)(uintptr_t)(&v42), 3);
  g4_std::string::Destroy(&v41);
  g4_std::string::Destroy(&v40);
  g4_std::string::Destroy(&v42);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "Max number of spawn at any time", (int)(uintptr_t)(&v23));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Max Live Spawns", (int)(uintptr_t)(&v22) + 2);
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v43, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Max Live Spawns", (int)(uintptr_t)(&v22) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v44), v11, 1, 1, (int)(uintptr_t)(&v45), 3);
  g4_std::string::Destroy(&v44);
  g4_std::string::Destroy(&v43);
  g4_std::string::Destroy(&v45);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "Total number of spawns this can produce", (int)(uintptr_t)(&v23) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Max Spawn", (int)(uintptr_t)(&v23) + 1);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v46, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Max Spawn", (int)(uintptr_t)(&v23) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v47), v12, 1, 1, (int)(uintptr_t)(&v48), 3);
  g4_std::string::Destroy(&v47);
  g4_std::string::Destroy(&v46);
  g4_std::string::Destroy(&v48);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "Point to spawn the object on", (int)(uintptr_t)(&v24) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "Spawn Point", (int)(uintptr_t)(&v24));
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v13 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v29 = v13;
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v49, 9, &v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Spawn Point", (int)(uintptr_t)(&v24) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v50), v14, 1, 1, (int)(uintptr_t)(&v51), 3);
  g4_std::string::Destroy(&v50);
  if ( v29 != nullptr )
    G4_VCALL<void>(v29, 44);
  g4_std::string::Destroy(&v49);
  g4_std::string::Destroy(&v51);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "Spawn on a random point on the list instead of sequentially.", (int)(uintptr_t)(&v25) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "Random Spawn Point", (int)(uintptr_t)(&v24) + 3);
  v15 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v15, &v52, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "Random Spawn Point", (int)(uintptr_t)(&v25));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v53), v15, 1, 1, (int)(uintptr_t)(&v54), 3);
  g4_std::string::Destroy(&v53);
  g4_std::string::Destroy(&v52);
  g4_std::string::Destroy(&v54);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "Last object spawned.", (int)(uintptr_t)(&v26));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "Spawned", (int)(uintptr_t)(&v25) + 2);
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v16 = v4;
  grapher::HolderT_string_e830be::From(v4, &unk_20D67EC);
  v30 = v16;
  v17 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v17, &v55, 9, &v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "Spawned", (int)(uintptr_t)(&v25) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 7, (int)(uintptr_t)(&v56), v17, 1, 1, (int)(uintptr_t)(&v57), 2);
  g4_std::string::Destroy(&v56);
  if ( v30 != nullptr )
    G4_VCALL<void>(v30, 44);
  g4_std::string::Destroy(&v55);
  g4_std::string::Destroy(&v57);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "Managed spawn. Setting this flag allows the object to be deleted.", (int)(uintptr_t)(&v26) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "Managed", (int)(uintptr_t)(&v26) + 1);
  v18 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v18, &v58, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "Managed", (int)(uintptr_t)(&v26) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 8, (int)(uintptr_t)(&v59), v18, 1, 1, (int)(uintptr_t)(&v60), 3);
  g4_std::string::Destroy(&v59);
  g4_std::string::Destroy(&v58);
  return ((g4_std::string::Destroy(&v60)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_84ADB0  (binary VA: 0x0)
// Original: sub_84ADB0
// ----------------------------------------------------------------------------
void sub_84ADB0(int a1, int a2)
{
  int *v2;
  int *v3;
  int *v4;
  int *v5;
  uint32_t *v6;
  int *v7;
  int v8;
  int *v9;
  int *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  int *v15;
  int *v16;
  void *v17;
  int *v18;
  int *v19;

  if ( dword_20DA2A0 != 0 )
    return;
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  if ( dword_20D6738 == 0 )
    return;
  sub_84BD50(a2, a1 + 60);
  v2 = sub_849360((int *)(a1 + 60));
  v3 = (int *)*v2;
  v4 = v2;
  if ( (int *)*v2 != v2 )
  {
    do
    {
      v6 = (uint32_t *)v3[2];
      if ( v6 != nullptr )
      {
        G4_VCALL<void>(v6, 40, 32, 1);
        if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
        {
          sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
          __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
        }
        v5 = nullptr;
        if ( byte_20D4A64 == 0 )
          v5 = (int *)(&dword_20D4A60);
        sub_5D8870((int)(uintptr_t)(v5), v6, 1);
      }
      v3 = (int *)*v3;
    }
    while ( v4 != v3 );
  }
  if ( dword_20D67B8 == 0 )
  {
    v19 = (int *)(&dword_20D67B4);
    v9 = (int *)(&dword_20D67B4);
    goto LABEL_25;
  }
  v7 = (int *)dword_20D67B8;
  v8 = *(uint32_t *)(a1 + 60);
  v9 = (int *)(&dword_20D67B4);
  while ( v7[4] < v8 )
  {
    v7 = (int *)v7[3];
LABEL_18:
    if ( v7 == nullptr )
    {
      v19 = v9;
      goto LABEL_25;
    }
  }
  if ( v7[4] > v8 )
  {
    v9 = v7;
    v7 = (int *)v7[2];
    goto LABEL_18;
  }
  v15 = (int *)v7[3];
  v16 = (int *)v7[2];
  v19 = v9;
  if ( v15 != nullptr )
  {
    do
    {
      if ( v15[4] > v8 )
      {
        v9 = v15;
        v15 = (int *)v15[2];
      }
      else
      {
        v15 = (int *)v15[3];
      }
    }
    while ( v15 != nullptr );
    v19 = v9;
  }
  v9 = v7;
  while ( v16 != nullptr )
  {
    while ( v16[4] >= v8 )
    {
      v9 = v16;
      v16 = (int *)v16[2];
      if ( v16 == nullptr )
        goto LABEL_25;
    }
    v16 = (int *)v16[3];
  }
LABEL_25:
  if ( (int *)dword_20D67BC == v9 && v19 == (int *)(&dword_20D67B4) )
  {
    g4_std::Rb_tree_int_pair_int_const_list_277118::M_erase(
      (int)(uintptr_t)(v19 - 1),
      (void *)dword_20D67B8);
    dword_20D67B8 = 0;
    dword_20D67BC = (int)(uintptr_t)(v19);
    dword_20D67C0 = (int)(uintptr_t)(v19);
    dword_20D67C4 = 0;
  }
  else if ( v19 != v9 )
  {
    while ( 1 )
    {
      v10 = (int *)sub_19048E0(v9);
      v11 = (uint32_t *)sub_1904AE0(v9, &dword_20D67B4);
      v12 = (uint32_t *)v11[5];
      v17 = v11;
      if ( v12 != v11 + 5 )
      {
        v18 = v10;
        v13 = v11 + 5;
        while ( 1 )
        {
          v14 = (uint32_t *)*v12;
          sub_84BF80(v12 + 2, 0);
          opDelete(v12);
          if ( v14 == v13 )
            break;
          v12 = v14;
        }
        v10 = v18;
      }
      opDelete(v17);
      --*(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_1C7C4)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4));
      if ( v19 == v10 )
        break;
      v9 = v10;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_849FA0  (binary VA: 0x0)
// Original: sub_849FA0
// ----------------------------------------------------------------------------
uint32_t * sub_849FA0(grapher::ActorBase::Self *a1, int a2, uint32_t *a3)
{
  int *v3;
  int *v4;
  int v5;
  grapher::ActorVariable::Self *Variable;
  int v7;
  bool v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *result;
  uint32_t *v12;
  grapher::ActorVariable::Self *v13;
  grapher::ActorContext::Self *v14;
  grapher::ActorVariable::Self *v15;
  grapher::ActorVariable::Self *v16;
  grapher::ActorVariable::Self *v17;
  grapher::ActorContext::Self *v18;
  char *v19;
  void *v20;
  int v21;
  grapher::ActorVariable::Self *v22;
  uint8_t v23;
  uint8_t v24; // si
  int *v25;
  uint32_t *v26;
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
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  uint32_t *v66;
  grapher::ActorContext::Self *v67;
  grapher::ActorContext::Self *v68;
  grapher::ActorContext::Self *v69;
  grapher::ActorContext::Self *v70;
  int v71;
  int v72;
  char *v73;
  int *v74;
  int v75;
  void *v76;
  float v77[3];
  float v78;
  float v79;
  float v80;
  float v81;

  v73 = (char *)a1 + 56;
  sub_84BD50(a3, (char *)a1 + 56);
  sub_84BD50(a3, (char *)a1 + 60);
  v76 = *((void **)a1 + 15);
  v3 = sub_849360((int *)&v76);
  v4 = (int *)*v3;
  v74 = v3;
  v72 = 0;
  if ( (int *)*v3 != v3 )
  {
    do
    {
      v5 = v4[2];
      if ( v5 != 0
        && (uint8_t)sub_C170A0(v4[2]) != 0
        && G4_VCALL<uint8_t>(v5, 208) == 0 )
      {
        v4 = (int *)*v4;
        ++v72;
      }
      else
      {
        v4 = (int *)*v4;
      }
    }
    while ( v74 != v4 );
  }
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  if ( (int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a1), Variable, (grapher::ActorContext::Self *)a3, v27, v32, v37, v42, v47, v52, v57, v62, v67)) <= v72 )
  {
    v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    v14 = sub_837200((int)(uintptr_t)(a1), v13, (grapher::ActorContext::Self *)a3, v28, v33, v38, v43, v48, v53, v58, v63, v68);
    *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)(v14);
    if ( (int)(uintptr_t)(v14) > 0 )
      goto LABEL_8;
LABEL_20:
    v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)(sub_837200(
                             (int)(uintptr_t)(a1),
                             v15,
                             (grapher::ActorContext::Self *)a3,
                             v28,
                             v33,
                             v38,
                             v43,
                             v48,
                             v53,
                             v58,
                             v63,
                             v68));
    v16 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
    if ( (int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a1), v16, (grapher::ActorContext::Self *)a3, v29, v34, v39, v44, v49, v54, v59, v64, v69)) > v72 )
    {
      sub_84BD50(a3, (char *)a1 + 64);
      sub_84BD50(a3, (char *)a1 + 52);
      v71 = sub_846C40(a1, (grapher::ActorContext::Self *)a3);
      v17 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
      v18 = sub_837200((int)(uintptr_t)(a1), v17, (grapher::ActorContext::Self *)a3, v30, v35, v40, v45, v50, v55, v60, v65, v70);
      v19 = (char *)&unk_1B15112;
      if ( (int)(uintptr_t)(v18) >= 0 && (unsigned int)(uintptr_t)(v18) < dword_20D8F80 )
        v19 = (char *)sub_84B760(v18);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v75) + 1, v19, (int)(uintptr_t)(&v75));
      if ( byte_20D5110 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5110) != 0 )
      {
        sub_8F71A0(&unk_20D5118);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5110);
        __cxa_atexit((void (*)(void *))sub_8E88B0, &unk_20D5118, &unk_20D1280);
      }
      v20 = nullptr;
      if ( byte_20D511C == 0 )
        v20 = &unk_20D5118;
      v21 = (int)(uintptr_t)(sub_8F7270(v20, (char *)&v75 + 1));
      g4_std::string::Destroy((char *)&v75 + 1);
      v22 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 8);
      v23 = sub_837730((int)(uintptr_t)(a1), v22, (grapher::ActorContext::Self *)a3, v31, v36, v41, v46, v51, v56, v61);
      v78 = 0.0;
      v79 = 0.0;
      v80 = 0.0;
      v81 = 0.0;
      memset(v77, 0, sizeof(v77));
      v24 = v23;
      if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      v25 = nullptr;
      if ( byte_20D4A64 == 0 )
        v25 = (int *)(&dword_20D4A60);
      v26 = sub_5C9D10((int)(uintptr_t)(v25), v21, v24, v77, v78, v79, v80, v81);
      if ( v26 != nullptr && v71 != 0 )
      {
        v66 = v26;
        sub_849BA0(a1, (int)(uintptr_t)(v26), v71, (grapher::ActorContext::Self *)a3);
        G4_VCALL<void>(v66, 356);
        sub_84BEC0(a3, (char *)a1 + 52);
        sub_84BEC0(a3, (char *)a1 + 64);
      }
    }
    goto LABEL_8;
  }
  v7 = *((uint32_t *)a1 + 14) - a2;
  v8 = *((uint32_t *)a1 + 14) == a2;
  *((uint32_t *)a1 + 14) = v7;
  if ( v7 < 0 || v8 )
    goto LABEL_20;
LABEL_8:
  v76 = (char *)a1 + 56;
  v9 = (uint32_t *)a3[3];
  if ( v9 == nullptr )
    goto LABEL_18;
  v10 = a3 + 2;
  do
  {
    while ( (unsigned int)(uintptr_t)(v73) <= v9[4] )
    {
      v10 = v9;
      v9 = (uint32_t *)v9[2];
      if ( v9 == nullptr )
        goto LABEL_13;
    }
    v9 = (uint32_t *)v9[3];
  }
  while ( v9 != nullptr );
LABEL_13:
  if ( a3 + 2 == v10 || (unsigned int)(uintptr_t)(v73) < v10[4] )
  {
LABEL_18:
    v12 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v12 = (uint32_t)(uintptr_t)(&off_205CD10);
    v12[1] = *((uint32_t *)a1 + 14);
    result = (uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                         (std::map<void *,grapher::ActorContext::ICVar *> *)(a3 + 1),
                         &v76);
    *result = (uint32_t)(uintptr_t)(v12);
  }
  else
  {
    result = (uint32_t *)v10[5];
    result[1] = *((uint32_t *)a1 + 14);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_845CD0  (binary VA: 0x0)
// Original: sub_845CD0
// ----------------------------------------------------------------------------
int sub_845CD0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  sub_84BD50(a2, (char *)a1 + 60);
  return grapher::ActorBase::Cancel(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_849570  (binary VA: 0x0)
// Original: sub_849570
// ----------------------------------------------------------------------------
int sub_849570(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  int v4;
  int *v5;
  int *v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  char *v14;
  char *v15;
  char *v16;
  char *v17;
  char *v18;
  char *v19;
  char *v20;
  bool v21;
  int *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  int v27;
  int v28;
  int v29;
  uint32_t *v30;
  int v31;
  uint32_t *v32;
  char *v33;
  char *v34;
  char *v35;
  char *v36;
  int *v37;
  void *v38[4];
  uint32_t v39[4];
  uint32_t v40[7];

  result = a2;
  if ( a2 == 0 )
  {
    v35 = (char *)a1 + 56;
    sub_84BD50(a3, (char *)a1 + 56);
    v34 = (char *)a1 + 52;
    sub_84BD50(a3, (char *)a1 + 52);
    v36 = (char *)a1 + 60;
    sub_84BD50(a3, (char *)a1 + 60);
    v33 = (char *)a1 + 64;
    sub_84BD50(a3, (char *)a1 + 64);
    v4 = dword_20D67A8;
    v40[0] = (uint32_t)(uintptr_t)(v40);
    v40[1] = (uint32_t)(uintptr_t)(v40);
    *((uint32_t *)a1 + 15) = dword_20D67A8;
    *((uint32_t *)a1 + 14) = 0;
    *((uint32_t *)a1 + 13) = 0;
    *((uint32_t *)a1 + 16) = 0;
    dword_20D67A8 = v4 + 1;
    v5 = sub_849360((int *)a1 + 15);
    v37 = v5;
    if ( v5 == (int *)(uintptr_t)(v40) )
    {
LABEL_10:
      v10 = (uint32_t *)v40[0];
      if ( (uint32_t *)v40[0] != v40 )
      {
        while ( 1 )
        {
          v11 = (uint32_t *)*v10;
          sub_84BF80(v10 + 2, 0);
          opDelete(v10);
          if ( v11 == v40 )
            break;
          v10 = v11;
        }
      }
      v12 = (char *)a3 + 8;
      v38[0] = (char *)a1 + 56;
      v13 = *((char **)a3 + 3);
      if ( v13 == nullptr )
        goto LABEL_55;
      v14 = (char *)a3 + 8;
      do
      {
        while ( (unsigned int)(uintptr_t)(v35) <= *((uint32_t *)v13 + 4) )
        {
          v14 = v13;
          v13 = *((char **)v13 + 2);
          if ( v13 == nullptr )
            goto LABEL_19;
        }
        v13 = *((char **)v13 + 3);
      }
      while ( v13 != nullptr );
LABEL_19:
      if ( v12 == v14 || (unsigned int)(uintptr_t)(v35) < *((uint32_t *)v14 + 4) )
      {
LABEL_55:
        v26 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
        *v26 = (uint32_t)(uintptr_t)(&off_205CD10);
        v26[1] = *((uint32_t *)a1 + 14);
        *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                     (grapher::ActorContext::Self *)((char *)a3 + 4),
                     v38) = (uint32_t)(uintptr_t)(v26);
      }
      else
      {
        *(uint32_t *)(*((uint32_t *)v14 + 5) + 4) = *((uint32_t *)a1 + 14);
      }
      v38[0] = (char *)a1 + 52;
      v15 = *((char **)a3 + 3);
      if ( v15 == nullptr )
        goto LABEL_54;
      v16 = (char *)a3 + 8;
      do
      {
        while ( (unsigned int)(uintptr_t)(v34) <= *((uint32_t *)v15 + 4) )
        {
          v16 = v15;
          v15 = *((char **)v15 + 2);
          if ( v15 == nullptr )
            goto LABEL_27;
        }
        v15 = *((char **)v15 + 3);
      }
      while ( v15 != nullptr );
LABEL_27:
      if ( v16 == v12 || (unsigned int)(uintptr_t)(v34) < *((uint32_t *)v16 + 4) )
      {
LABEL_54:
        v25 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
        *v25 = (uint32_t)(uintptr_t)(&off_205CD10);
        v25[1] = *((uint32_t *)a1 + 13);
        *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                     (grapher::ActorContext::Self *)((char *)a3 + 4),
                     v38) = (uint32_t)(uintptr_t)(v25);
      }
      else
      {
        *(uint32_t *)(*((uint32_t *)v16 + 5) + 4) = *((uint32_t *)a1 + 13);
      }
      v38[0] = (char *)a1 + 60;
      v17 = *((char **)a3 + 3);
      if ( v17 == nullptr )
        goto LABEL_53;
      v18 = (char *)a3 + 8;
      do
      {
        while ( (unsigned int)(uintptr_t)(v36) <= *((uint32_t *)v17 + 4) )
        {
          v18 = v17;
          v17 = *((char **)v17 + 2);
          if ( v17 == nullptr )
            goto LABEL_35;
        }
        v17 = *((char **)v17 + 3);
      }
      while ( v17 != nullptr );
LABEL_35:
      if ( v18 == v12 || (unsigned int)(uintptr_t)(v36) < *((uint32_t *)v18 + 4) )
      {
LABEL_53:
        v24 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
        *v24 = (uint32_t)(uintptr_t)(&off_205CD10);
        v24[1] = *((uint32_t *)a1 + 15);
        *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                     (grapher::ActorContext::Self *)((char *)a3 + 4),
                     v38) = (uint32_t)(uintptr_t)(v24);
      }
      else
      {
        *(uint32_t *)(*((uint32_t *)v18 + 5) + 4) = *((uint32_t *)a1 + 15);
      }
      v38[0] = (char *)a1 + 64;
      v19 = *((char **)a3 + 3);
      if ( v19 == nullptr )
        goto LABEL_50;
      v20 = (char *)a3 + 8;
      do
      {
        while ( (unsigned int)(uintptr_t)(v33) <= *((uint32_t *)v19 + 4) )
        {
          v20 = v19;
          v19 = *((char **)v19 + 2);
          if ( v19 == nullptr )
            goto LABEL_43;
        }
        v19 = *((char **)v19 + 3);
      }
      while ( v19 != nullptr );
LABEL_43:
      if ( v20 == v12 || (unsigned int)(uintptr_t)(v33) < *((uint32_t *)v20 + 4) )
      {
LABEL_50:
        v23 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
        *v23 = (uint32_t)(uintptr_t)(&off_205CD10);
        v23[1] = *((uint32_t *)a1 + 16);
        *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                     (grapher::ActorContext::Self *)((char *)a3 + 4),
                     v38) = (uint32_t)(uintptr_t)(v23);
        if ( byte_20D5B50 != 0 )
          goto LABEL_46;
      }
      else
      {
        v21 = byte_20D5B50 == 0;
        *(uint32_t *)(*((uint32_t *)v20 + 5) + 4) = *((uint32_t *)a1 + 16);
        if ( !v21 )
        {
LABEL_46:
          grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
          return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
        }
      }
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      goto LABEL_46;
    }
    v6 = (int *)*v5;
    v7 = (uint32_t *)v40[0];
    if ( (int *)*v5 != v5 )
    {
      if ( (uint32_t *)v40[0] == v40 )
      {
LABEL_9:
        if ( v37 != v6 )
        {
          while ( 1 )
          {
            v22 = (int *)*v6;
            sub_1901940(v6);
            sub_84BF80(v6 + 2, 0);
            opDelete(v6);
            if ( v37 == v22 )
              break;
            v6 = v22;
          }
        }
        goto LABEL_10;
      }
      while ( 1 )
      {
        v8 = v7[2];
        v9 = v8 + 12;
        if ( v8 == 0 )
          v9 = 0;
        sub_84BF80(v6 + 2, v9);
        v6 = (int *)*v6;
        v7 = (uint32_t *)*v7;
        if ( v37 == v6 )
          break;
        if ( v7 == v40 )
          goto LABEL_9;
      }
    }
    if ( v7 != v40 )
    {
      v39[0] = (uint32_t)(uintptr_t)(v39);
      v39[1] = (uint32_t)(uintptr_t)(v39);
      do
      {
        v27 = opNew(0xCu);
        if ( v27 != -8 )
        {
          *(uint32_t *)(v27 + 8) = 0;
          v28 = v7[2];
          v31 = v27;
          v29 = v28 + 12;
          if ( v28 == 0 )
            v29 = 0;
          sub_84BF80(v27 + 8, v29);
          v27 = v31;
        }
        sub_1901920(v27, v39);
        v7 = (uint32_t *)*v7;
      }
      while ( v7 != v40 );
      if ( (uint32_t *)v39[0] != v39 )
      {
        sub_19018A0(v37, v39[0], v39);
        v30 = (uint32_t *)v39[0];
        if ( (uint32_t *)v39[0] != v39 )
        {
          while ( 1 )
          {
            v32 = (uint32_t *)*v30;
            sub_84BF80(v30 + 2, 0);
            opDelete(v30);
            if ( v32 == v39 )
              break;
            v30 = v32;
          }
        }
      }
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  return result;
}


