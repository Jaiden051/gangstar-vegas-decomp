#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetPath.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetPath::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterSetPath::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterSetPath::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterSetPath::ActorGameCharacterSetPath(v3, -1);
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
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCharacterSetPath::ActorGameCharacterSetPath(v3, a1);
  }
  return v3;
}



// Constructor (0xc66c30):
int (**ActorGameCharacterSetPath::ActorGameCharacterSetPath(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 13) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D228);
  *((uint32_t *)a1 + 14) = 0;
  return (int (**)(int))(uintptr_t)(&off_206D228);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetPath::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterSetPath::~ActorGameCharacterSetPath
// ----------------------------------------------------------------------------
void ActorGameCharacterSetPath::Destroy(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D228);
  v1 = *((uint32_t *)a1 + 14);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 56, v1 + 16);
  *((uint32_t *)a1 + 14) = 0;
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C66CF0  (binary VA: 0x0)
// Original: sub_C66CF0
// ----------------------------------------------------------------------------
void sub_C66CF0(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D228);
  v1 = *((uint32_t *)a1 + 14);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 56, v1 + 16);
  *((uint32_t *)a1 + 14) = 0;
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C63140  (binary VA: 0x0)
// Original: sub_C63140
// ----------------------------------------------------------------------------
int sub_C63140(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
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
  uint32_t *v28;
  uint32_t *v29;
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
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 9, 11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Set Path [C]", (int)(uintptr_t)(&v17));
  grapher::ActorBase::SetDisplayName(a1, &v30);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Characters", (int)(uintptr_t)(&v17) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v31);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "Drive", (int)(uintptr_t)(&v25) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v65, 1, -1);
  g4_std::string::Destroy(&v65);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v66), (char *)&off_1B36EC5, (int)(uintptr_t)(&v26));
  grapher::ActorBase::AddPin(a1, 1, &v66, 1, -1);
  g4_std::string::Destroy(&v66);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), "Walk", (int)(uintptr_t)(&v26) + 1);
  grapher::ActorBase::AddPin(a1, 2, &v67, 1, -1);
  g4_std::string::Destroy(&v67);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v68), "Pause", (int)(uintptr_t)(&v26) + 2);
  grapher::ActorBase::AddPin(a1, 3, &v68, 1, -1);
  g4_std::string::Destroy(&v68);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v69), "Clear", (int)(uintptr_t)(&v26) + 3);
  grapher::ActorBase::AddPin(a1, 4, &v69, 1, -1);
  g4_std::string::Destroy(&v69);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v70), "Out", (int)(uintptr_t)(&v27));
  grapher::ActorBase::AddPin(a1, 5, &v70, 0, -1);
  g4_std::string::Destroy(&v70);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v71), "Reached", (int)(uintptr_t)(&v27) + 1);
  grapher::ActorBase::AddPin(a1, 6, &v71, 0, -1);
  g4_std::string::Destroy(&v71);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v72), "Loop Completed", (int)(uintptr_t)(&v27) + 2);
  grapher::ActorBase::AddPin(a1, 7, &v72, 0, -1);
  g4_std::string::Destroy(&v72);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v73), "Paused", (int)(uintptr_t)(&v27) + 3);
  grapher::ActorBase::AddPin(a1, 8, v73, 0, -1);
  g4_std::string::Destroy(v73);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "The character who will follow the path", (int)(uintptr_t)(&v18));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Target", (int)(uintptr_t)(&v17) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v28 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v32, 9, &v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Target", (int)(uintptr_t)(&v17) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v33), v5, 1, 1, (int)(uintptr_t)(&v34), 1);
  g4_std::string::Destroy(&v33);
  if ( v28 != nullptr )
    G4_VCALL<void>(v28, 44);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "The path the character will follow", (int)(uintptr_t)(&v18) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Path", (int)(uintptr_t)(&v18) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v29 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v35, 9, &v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Path", (int)(uintptr_t)(&v18) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v36), v7, 1, 1, (int)(uintptr_t)(&v37), 1);
  g4_std::string::Destroy(&v36);
  if ( v29 != nullptr )
    G4_VCALL<void>(v29, 44);
  g4_std::string::Destroy(&v35);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Is the character will loop on this path?", (int)(uintptr_t)(&v19) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Loop", (int)(uintptr_t)(&v19));
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v38, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Loop", (int)(uintptr_t)(&v19) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v39), v9, 1, 0, (int)(uintptr_t)(&v40), 1);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v38);
  g4_std::string::Destroy(&v40);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "How many loops will the character do (-1: infinite, 0: none, 1: once, ...", (int)(uintptr_t)(&v20) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Remaining Loops", (int)(uintptr_t)(&v19) + 3);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v41, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Remaining Loops", (int)(uintptr_t)(&v20));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 7, (int)(uintptr_t)(&v42), v10, 1, 0, (int)(uintptr_t)(&v43), 1);
  g4_std::string::Destroy(&v42);
  g4_std::string::Destroy(&v41);
  g4_std::string::Destroy(&v43);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Is this a combat Path?", (int)(uintptr_t)(&v21));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Combat", (int)(uintptr_t)(&v20) + 2);
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v44, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "Combat", (int)(uintptr_t)(&v20) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v45), v11, 1, 0, (int)(uintptr_t)(&v46), 1);
  g4_std::string::Destroy(&v45);
  g4_std::string::Destroy(&v44);
  g4_std::string::Destroy(&v46);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "Is the character will back tracking the path at the end", (int)(uintptr_t)(&v21) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Reverse", (int)(uintptr_t)(&v21) + 1);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v47, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "Reverse", (int)(uintptr_t)(&v21) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v48), v12, 1, 0, (int)(uintptr_t)(&v49), 1);
  g4_std::string::Destroy(&v48);
  g4_std::string::Destroy(&v47);
  g4_std::string::Destroy(&v49);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "How many time the character will stop at the end of the path", (int)(uintptr_t)(&v22) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "WaitTimer", (int)(uintptr_t)(&v22));
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v50, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "Wait Timer", (int)(uintptr_t)(&v22) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v51), v8, 1, 0, (int)(uintptr_t)(&v52), 1);
  g4_std::string::Destroy(&v51);
  g4_std::string::Destroy(&v50);
  g4_std::string::Destroy(&v52);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "The character will follow the path from the start point", (int)(uintptr_t)(&v23) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "Reset when triggered", (int)(uintptr_t)(&v22) + 3);
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v53, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "Reset when triggered", (int)(uintptr_t)(&v23));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v54), v13, 1, 0, (int)(uintptr_t)(&v55), 1);
  g4_std::string::Destroy(&v54);
  g4_std::string::Destroy(&v53);
  g4_std::string::Destroy(&v55);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "Random offset from the current waypoint in cm", (int)(uintptr_t)(&v24));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "Distance Tolerance", (int)(uintptr_t)(&v23) + 2);
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v56, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "Distance Tolerance", (int)(uintptr_t)(&v23) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 8, (int)(uintptr_t)(&v57), v14, 1, 0, (int)(uintptr_t)(&v58), 1);
  g4_std::string::Destroy(&v57);
  g4_std::string::Destroy(&v56);
  g4_std::string::Destroy(&v58);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "Can the character use free running.", (int)(uintptr_t)(&v24) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "Free running", (int)(uintptr_t)(&v24) + 1);
  v15 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v15, &v59, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "Free running", (int)(uintptr_t)(&v24) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 9, (int)(uintptr_t)(&v60), v15, 1, 0, (int)(uintptr_t)(&v61), 1);
  g4_std::string::Destroy(&v60);
  g4_std::string::Destroy(&v59);
  g4_std::string::Destroy(&v61);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64), "Starting waypoint index [0-pathEnd[.", (int)(uintptr_t)(&v25) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "Start waypoint", (int)(uintptr_t)(&v25));
  v16 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v16, &v62, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "Start waypoint", (int)(uintptr_t)(&v25) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 10, (int)(uintptr_t)(&v63), v16, 1, 0, (int)(uintptr_t)(&v64), 1);
  g4_std::string::Destroy(&v63);
  g4_std::string::Destroy(&v62);
  return ((g4_std::string::Destroy(&v64)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B030  (binary VA: 0x0)
// Original: sub_C5B030
// ----------------------------------------------------------------------------
int sub_C5B030(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  int v4;
  int v5;
  bool v6;

  result = *((uint32_t *)a1 + 14);
  if ( result == 0 )
    goto LABEL_9;
  v4 = *(uint32_t *)(result + 4336);
  if ( v4 != *((uint32_t *)a1 + 13) )
  {
    grapher::ActorBase::FireEvent(a1, 7, a3);
    result = *((uint32_t *)a1 + 14);
    v4 = *(uint32_t *)(result + 4336);
  }
  *((uint32_t *)a1 + 13) = v4;
  if ( *(uint32_t *)(result + 4284) == 0
    && ((unsigned int)(*(uint32_t *)(result + 4296) - 2) <= 2
     || (v5 = *(uint32_t *)(result + 4280)) == 0
     || *(uint32_t *)(v5 + 532) - *(uint32_t *)(v5 + 528) <= 19
     || (v6 = (uint8_t)sub_986060(result) == 0, result = *((uint32_t *)a1 + 14), v6))
    || *(uint8_t *)(result + 3205) != 0 )
  {
    *(uint8_t *)(result + 1945) = 0;
LABEL_9:
    G4_VCALL<void>(a1, 28, a3);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 6, a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C692B0  (binary VA: 0x0)
// Original: sub_C692B0
// ----------------------------------------------------------------------------
int sub_C692B0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int *v8;
  int v9;
  char *v10;
  char *v11;
  bool v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
  grapher::ActorVariable::Self *v16;
  grapher::ActorVariable::Self *v17;
  grapher::ActorVariable::Self *v18;
  grapher::ActorVariable::Self *v19;
  grapher::ActorVariable::Self *v20;
  char v21;
  grapher::ActorVariable::Self *v22;
  grapher::ActorContext::Self *v23;
  int v24;
  int v25;
  grapher::ActorVariable::Self *v26;
  char v27;
  int v29;
  int *v30;
  int v31;
  grapher::ActorVariable::Self *v32;
  grapher::ActorVariable::Self *Variable;
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
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  float *v86;
  grapher::ActorContext::Self *v87;
  grapher::ActorContext::Self *v88;
  grapher::ActorContext::Self *v89;
  char v90;
  uint32_t *v91;
  float *v92;
  int v93[7];

  v3 = a1;
  v4 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = (int *)G4_VCALL<int>(v4, 16);
    if ( v6 != nullptr )
    {
      if ( v6 == (int *)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v6 = (int *)v6[1];
        if ( v6 == nullptr )
          break;
        if ( v6 == (int *)(&dword_20D75F0) )
          goto LABEL_8;
      }
    }
  }
  v5 = 0;
LABEL_8:
  v7 = sub_857260(a1, 1, (int)(uintptr_t)(a3));
  v91 = (uint32_t *)v7;
  if ( v7 == 0 || (v8 = (int *)G4_VCALL<int>(v7, 16)) == nullptr )
  {
LABEL_14:
    v91 = nullptr;
    goto LABEL_15;
  }
  while ( v8 != (int *)(&dword_20D70A4) )
  {
    v8 = (int *)v8[1];
    if ( v8 == nullptr )
      goto LABEL_14;
  }
LABEL_15:
  if ( v5 == 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 5, a3));
  if ( v91 == nullptr )
  {
    if ( a2 != 4 )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 5, a3));
LABEL_59:
    sub_9B9D80(v5);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 5, a3));
  }
  v9 = *((uint32_t *)a1 + 14);
  v10 = (char *)a1 + 56;
  if ( v9 != 0 )
  {
    v86 = (float *)((char *)a1 + 56);
    sub_5459F0((int)(uintptr_t)(a1) + 56, v9 + 16);
    v10 = (char *)a1 + 56;
  }
  *((uint32_t *)a1 + 14) = v5;
  v11 = *(char **)(v5 + 20);
  v12 = v11 == *(char **)(v5 + 24);
  v93[0] = (int)(uintptr_t)(v10);
  if ( v12 )
  {
    g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux(v5 + 16, v11, v93);
  }
  else
  {
    v13 = 0;
    if ( v11 != nullptr )
    {
      *(uint32_t *)v11 = (uint32_t)(uintptr_t)(v10);
      v13 = *(uint32_t *)(v5 + 20);
    }
    *(uint32_t *)(v5 + 20) = v13 + 4;
  }
  *(uint32_t *)(v5 + 1872) &= ~0x800000u;
  *(uint32_t *)(v5 + 1876) = *(uint32_t *)(v5 + 1876);
  sub_987540(v5, 0);
  sub_987580(v5, 0);
  sub_9875C0(v5, 0);
  sub_987600(v5, 0);
  switch ( a2 )
  {
    case 1:
      sub_987540(v5, 1);
      *(uint32_t *)(v5 + 1872) |= 0x20u;
      *(uint32_t *)(v5 + 1876) = *(uint32_t *)(v5 + 1876);
      break;
    case 2:
      sub_987580(v5, 1);
      *(uint32_t *)(v5 + 1872) &= ~0x20u;
      *(uint32_t *)(v5 + 1876) = *(uint32_t *)(v5 + 1876);
      break;
    case 0:
      *(uint32_t *)(v5 + 1872) |= 0x800000u;
      *(uint32_t *)(v5 + 1876) = *(uint32_t *)(v5 + 1876);
      break;
    default:
      break;
  }
  if ( (unsigned int)(*(uint32_t *)(v5 + 4296) - 2) > 2 )
  {
    v14 = *(uint32_t **)(v5 + 4280);
    if ( v14 != nullptr && v14[133] - v14[132] > 19 && v91 == v14 && a2 == 3 )
    {
      sub_9B7730(v5);
      sub_9B71D0((uint32_t *)v5, nullptr, 1);
      grapher::ActorBase::FireEvent(a1, 8, a3);
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 5, a3));
    }
  }
  v15 = *(uint32_t **)(v5 + 4284);
  if ( v15 != nullptr && v15 == v91 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 6);
    if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v34, v41, v48, v55, v62, v69, v76) == 0 )
    {
      sub_8E9510((uint32_t *)v5, 0);
      sub_9B7550(v5);
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 5, a3));
    }
  }
  G4_VCALL<void>(a1, 28, a3);
  *((uint32_t *)a1 + 13) = 0;
  sub_9B71D0((uint32_t *)v5, nullptr, 1);
  if ( a2 == 4 )
    goto LABEL_59;
  v16 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v89 = nullptr;
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), v16, a3, v34, v41, v48, v55, v62, v69, v76) != 0 )
  {
    v32 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 7);
    v89 = sub_837200((int)(uintptr_t)(a1), v32, a3, v35, v42, v49, v56, v63, v70, v77, v83, (grapher::ActorContext::Self *)v86);
  }
  if ( G4_VCALL<int>(v5, 456) != 0 )
  {
    *(float *)&v83 = ((long double (*)(uint32_t *))*(uint32_t *)(*v91 + 216))(v91);
    if ( *(float *)&v83 < 0.0 && v91[133] - v91[132] > 19 )
    {
      v29 = 0;
      do
      {
        v30 = sub_8EFEB0((int)(uintptr_t)(v91), v29++);
        v86 = (float *)v30;
        v31 = G4_VCALL<int>(v5, 456);
        *(float *)&v83 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v31 + 668))(v31);
        v86[3] = *(float *)&v83 * 0.2777778f;
      }
      while ( v29 < -858993459 * ((v91[133] - v91[132]) >> 2) );
      v3 = a1;
    }
  }
  sub_8E9510((uint32_t *)v5, 0);
  v17 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 8);
  v92 = (float *)sub_837200((int)(uintptr_t)(v3), v17, a3, v35, v42, v49, v56, v63, v70, v77, v83, (grapher::ActorContext::Self *)v86);
  v18 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 5);
  v88 = sub_837200((int)(uintptr_t)(v3), v18, a3, v36, v43, v50, v57, v64, v71, v78, v84, v87);
  v19 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
  v90 = sub_837730((int)(uintptr_t)(v3), v19, a3, v37, v44, v51, v58, v65, v72, v79);
  v20 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 4);
  v21 = sub_837730((int)(uintptr_t)(v3), v20, a3, v38, v45, v52, v59, v66, v73, v80);
  sub_9B9E50(v5, (int)(uintptr_t)(v91), (int)(uintptr_t)(v89), v21, v90, 0, (int)(uintptr_t)(v88), v92);
  v22 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 10);
  v23 = sub_837200((int)(uintptr_t)(v3), v22, a3, v39, v46, v53, v60, v67, v74, v81, v85, v88);
  sub_986CC0(v5, (int)(uintptr_t)(v23));
  if ( G4_VCALL<int>(v5, 456) != 0
    && (v24 = *(uint32_t *)(v5 + 1872), v25 = *(uint32_t *)(v5 + 1876), (v24 & 0x100) != 0)
    && v24 >= 0
    && (v25 & 1) == 0
    && (v25 & 4) == 0
    || G4_VCALL<int>(v5, 456) != 0
    && (v24 = *(uint32_t *)(v5 + 1872), v25 = *(uint32_t *)(v5 + 1876), (v24 & 0x800) != 0) )
  {
    if ( *(uint32_t *)(v5 + 3688) == 0 )
    {
      *(uint32_t *)(v5 + 1876) = v25;
      *(uint32_t *)(v5 + 1872) = v24 | 0x800000;
    }
  }
  v26 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 9);
  v27 = sub_837730((int)(uintptr_t)(v3), v26, a3, v40, v47, v54, v61, v68, v75, v82);
  v12 = byte_20D5B50 == 0;
  *(uint8_t *)(v5 + 1945) = v27;
  if ( v12 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v3, a3);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 5, a3));
}


