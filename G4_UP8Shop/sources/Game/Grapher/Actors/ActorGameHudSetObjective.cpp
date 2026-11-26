#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameHudSetObjective.h"

// ----------------------------------------------------------------------------
// Function: ActorGameHudSetObjective::CreateInstance  (binary VA: 0x0)
// Original: ActorGameHudSetObjective::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameHudSetObjective::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameHudSetObjective::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), -1);
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
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameHudSetObjective::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameHudSetObjective::Construct  (binary VA: 0x0)
// Original: ActorGameHudSetObjective::ActorGameHudSetObjective
// ----------------------------------------------------------------------------
void * ActorGameHudSetObjective::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA48);
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&unk_213B814);
  return &unk_213B814;
}

// ----------------------------------------------------------------------------
// Function: ActorGameHudSetObjective::Destroy  (binary VA: 0x0)
// Original: ActorGameHudSetObjective::~ActorGameHudSetObjective
// ----------------------------------------------------------------------------
void ActorGameHudSetObjective::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA48);
  g4_std::string::Destroy((char *)a1 + 52);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C402A0  (binary VA: 0x0)
// Original: sub_C402A0
// ----------------------------------------------------------------------------
void sub_C402A0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA48);
  g4_std::string::Destroy((char *)a1 + 52);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C49FF0  (binary VA: 0x0)
// Original: sub_C49FF0
// ----------------------------------------------------------------------------
int sub_C49FF0(grapher::ActorBase::Self *a1)
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
  void *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  uint8_t v23[20];
  uint32_t *v24;
  uint32_t *v25;
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
  int v53;
  int v54;
  int v55;
  int v56[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Set Objective", (int)(uintptr_t)(&v16));
  grapher::ActorBase::SetDisplayName(a1, &v26);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "HUD", (int)(uintptr_t)(&v16) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v27);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "In", (int)(uintptr_t)(&v23[2]));
  grapher::ActorBase::AddPin(a1, 0, &v55, 1, -1);
  g4_std::string::Destroy(&v55);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v56), "Out", (int)(uintptr_t)(&v23[3]));
  grapher::ActorBase::AddPin(a1, 1, v56, 0, -1);
  g4_std::string::Destroy(v56);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "The text label specified as PACK_ID.TEXT_ID.", (int)(uintptr_t)(&v17) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Text", (int)(uintptr_t)(&v17));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "StrID", (int)(uintptr_t)(&v16) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &v28);
  *(uint32_t *)&v23[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v29, 11, &v23[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Text", (int)(uintptr_t)(&v17) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v30), v6, 1, 1, (int)(uintptr_t)(&v31), 3);
  g4_std::string::Destroy(&v30);
  if ( *(uint32_t *)&v23[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v23[4] + 44))(*(uint32_t *)&v23[4]);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "The type of dialog from dialogs_.xml.", (int)(uintptr_t)(&v18) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Type", (int)(uintptr_t)(&v18));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Dialogs", (int)(uintptr_t)(&v17) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &v32);
  v24 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v33, 11, &v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Type", (int)(uintptr_t)(&v18) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v34), v8, 1, 1, (int)(uintptr_t)(&v35), 3);
  g4_std::string::Destroy(&v34);
  if ( v24 != nullptr )
    G4_VCALL<void>(v24, 44);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v39),
    "IconType to display for either Main Objectives (from MapIcons in menu_constants.xml) or Sub Objectives (from SubObje"
    "ctiveType in dialog_structs.xml)",
    (int)(uintptr_t)(&v19) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "IconType", (int)(uintptr_t)(&v19));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "MapIcons.None", (int)(uintptr_t)(&v18) + 3);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &v36);
  v25 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v37, 11, &v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "IconType", (int)(uintptr_t)(&v19) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v38), v10, 1, 1, (int)(uintptr_t)(&v39), 3);
  g4_std::string::Destroy(&v38);
  if ( v25 != nullptr )
    G4_VCALL<void>(v25, 44);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(&v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "The number of stars earned when reaching the next goal objective (1, 2 or 3).", (int)(uintptr_t)(&v20) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Stars", (int)(uintptr_t)(&v19) + 3);
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v40, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Stars", (int)(uintptr_t)(&v20));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v41), v11, 1, 1, (int)(uintptr_t)(&v42), 3);
  g4_std::string::Destroy(&v41);
  g4_std::string::Destroy(&v40);
  g4_std::string::Destroy(&v42);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v45),
    "The first variable to display in the text. For Type 'SubObjectiveDialog_Progress', this is the 'X' value.",
    (int)(uintptr_t)(&v21));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Var1", (int)(uintptr_t)(&v20) + 2);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v43, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Var1", (int)(uintptr_t)(&v20) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v44), v12, 1, 0, (int)(uintptr_t)(&v45), 3);
  g4_std::string::Destroy(&v44);
  g4_std::string::Destroy(&v43);
  g4_std::string::Destroy(&v45);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v48),
    "The second variable to display in the text. For Type 'SubObjectiveDialog_Progress', this is the 'Y' value.",
    (int)(uintptr_t)(&v21) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Var2", (int)(uintptr_t)(&v21) + 1);
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v46, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Var2", (int)(uintptr_t)(&v21) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v47), v13, 1, 0, (int)(uintptr_t)(&v48), 3);
  g4_std::string::Destroy(&v47);
  g4_std::string::Destroy(&v46);
  g4_std::string::Destroy(&v48);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v51),
    "The third variable to display in the text. For Type 'SubObjectiveDialog_Progress', this is the color value.",
    (int)(uintptr_t)(&v22) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "Var3", (int)(uintptr_t)(&v22));
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v49, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Var3", (int)(uintptr_t)(&v22) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v50), v14, 1, 0, (int)(uintptr_t)(&v51), 3);
  g4_std::string::Destroy(&v50);
  g4_std::string::Destroy(&v49);
  g4_std::string::Destroy(&v51);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "The fourth variable to display in the text", (int)(uintptr_t)(&v23[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "Var4", (int)(uintptr_t)(&v22) + 3);
  v15 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v15, &v52, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "Var4", (int)(uintptr_t)(v23));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 7, (int)(uintptr_t)(&v53), v15, 1, 0, (int)(uintptr_t)(&v54), 3);
  g4_std::string::Destroy(&v53);
  g4_std::string::Destroy(&v52);
  return ((g4_std::string::Destroy(&v54)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C55FB0  (binary VA: 0x0)
// Original: sub_C55FB0
// ----------------------------------------------------------------------------
int * sub_C55FB0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *Variable;
  int *result;
  unsigned int v7;
  grapher::ActorVariable::Self *v8;
  int v9;
  const char *v10;
  size_t v11;
  grapher::ActorVariable::Self *v12;
  grapher::ActorVariable::Self *v13;
  grapher::ActorVariable::Self *v14;
  grapher::ActorVariable::Self *v15;
  int v16;
  size_t v17;
  grapher::ActorVariable::Self *v18;
  int v19;
  unsigned int v20;
  grapher::ActorVariable::Self *v21;
  double v22; // xmm0_8
  unsigned int v23;
  int *v24;
  int *v25;
  int *v26;
  int *v27;
  int v28;
  grapher::ActorVariable::Self *v29;
  grapher::ActorVariable::Self *v30;
  grapher::ActorVariable::Self *v31;
  grapher::ActorVariable::Self *v32;
  g4_cxa_guard_t *v33;
  g4_cxa_guard_t *v34;
  grapher::ActorVariable::Self *v35;
  int v36;
  grapher::ActorVariable::Self *v37;
  int v38;
  grapher::ActorVariable::Self *v39;
  double v40; // xmm0_8
  unsigned int v41;
  char *v42;
  char *v43;
  g4_cxa_guard_t *v44;
  int v45;
  int v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  g4_cxa_guard_t *v53;
  g4_cxa_guard_t *v54;
  gameswf::ASValue::Self *obj;
  char *obja;
  char *objb;
  const char *objc;
  void *objd;
  void *obje;
  g4_cxa_guard_t *v61;
  g4_cxa_guard_t *v62;
  g4_cxa_guard_t v63;
  g4_cxa_guard_t *v64;
  g4_cxa_guard_t *v65;
  g4_cxa_guard_t *v66;
  char *v67;
  int v68;
  int v69;
  uint32_t *v70;
  char *s;
  g4_cxa_guard_t *v72;
  g4_cxa_guard_t *v73;
  int v74;
  int64_t v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  char v82[4];
  char v83[8];
  char v84[8];
  uint8_t v85[4];
  double v86;
  uint8_t v87[4];
  uint64_t v88;
  uint8_t v89[12];
  uint8_t v90[4];
  double v91;
  uint8_t v92[12];
  int v93[3];
  uint8_t v94[12];
  char v95[4];
  uint8_t v96[12];
  uint32_t v97[4];
  char v98;
  char v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  char v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  void *v112;
  void *v113;
  void *v114;
  void *v115;
  char v116;
  char v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  char v123;
  int v124;
  int v125;
  char *v126;
  char *v127;
  g4_cxa_guard_t *v128;
  g4_cxa_guard_t *v129;
  uint32_t v130[23];

  v130[22] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v4 = a3;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  result = (int *)sub_837200(v3, Variable, v4);
  v7 = (unsigned int)(uintptr_t)(result);
  if ( (int)(uintptr_t)(result) >= 0 )
  {
    result = (int *)(&dword_20DA0A0);
    if ( v7 < dword_20DA0A0 )
    {
      v48 = v7;
      v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 0);
      v9 = (int)(uintptr_t)(sub_837200(v3, v8, v4));
      v68 = v9;
      if ( v9 <= 0 )
      {
        v69 = *(uint32_t *)(dword_20DA090 + 52 * v48 + 28);
        if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
        {
          sub_785A60(&dword_20D5D78);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
          __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
        }
        v26 = nullptr;
        if ( byte_20D5D7C == 0 )
          v26 = (int *)(&dword_20D5D78);
        if ( (uint8_t)sub_785F20(v26, v69) != 0 )
        {
          v28 = (int)(uintptr_t)(sub_655F30());
          sub_6691F0(*(uint32_t *)(v28 + 52), v69);
        }
        if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
        {
          sub_785A60(&dword_20D5D78);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
          __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
        }
        v27 = nullptr;
        if ( byte_20D5D7C == 0 )
          v27 = (int *)(&dword_20D5D78);
        sub_7B8F10(v27, v69, -1);
        return (int *)grapher::ActorBase::FireEvent(v3, 1, v4);
      }
      v10 = sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), v9);
      s = (char *)v10;
      if ( v10 == nullptr || *v10 == 0 )
        return (int *)grapher::ActorBase::FireEvent(v3, 1, v4);
      v63 = *(uint32_t *)(dword_20DA090 + 52 * v48 + 28);
      sub_A44DC0((char *)&v75 + 4);
      v11 = strlen(s);
      v67 = (char *)opNewArray(v11 + 4 * *(uint32_t *)(HIDWORD(v75) - 12));
      v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 7);
      v64 = (g4_cxa_guard_t *)sub_837200(v3, v12, v4);
      v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 6);
      v61 = (g4_cxa_guard_t *)sub_837200(v3, v13, v4);
      v14 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 5);
      v47 = (int)(uintptr_t)(sub_837200(v3, v14, v4));
      v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 4);
      v16 = (int)(uintptr_t)(sub_837200(v3, v15, v4));
      sprintf(v67, s, v16, v47, v61, v64);
      v17 = strlen(v67);
      g4_std_compat::string_assign((int)(uintptr_t)(v3) + 52, v67, v17);
      v82[0] = 0;
      v18 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
      v19 = (int)(uintptr_t)(sub_837200(v3, v18, v4));
      v20 = v48;
      if ( v19 > 0 )
      {
        sprintf(v82, "%i", v19);
        v20 = v48;
      }
      v49 = v20;
      v21 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
      v22 = (double)(int)(uintptr_t)(sub_837200(v3, v21, v4));
      v85[0] = 2;
      v85[1] = 0;
      v23 = v49;
      v86 = v22;
      if ( v63 == 2 )
      {
        if ( *(uint8_t *)(dword_20D9B70 + 7) != 0 )
          goto LABEL_11;
        v87[0] = 2;
        v87[1] = 0;
        v88 = 0xBFF0000000000000LL;
        obj = (gameswf::ASValue::Self *)v87;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v85, (const gameswf::ASValue::Self *)v87);
      }
      else
      {
        if ( v63 != 24 )
          goto LABEL_11;
        v89[0] = 0;
        v89[1] = 0;
        obj = (gameswf::ASValue::Self *)v89;
        gameswf::ASValue::setString((gameswf::ASValue::Self *)v89, *(const char **)(dword_20D92B0 + 8));
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v85, (const gameswf::ASValue::Self *)v89);
      }
      gameswf::ASValue::dropRefs(obj);
      v23 = v49;
LABEL_11:
      v98 = 2;
      v99 = 0;
      v100 = 0;
      v101 = 0;
      v102 = 0;
      v103 = 0;
      v104 = 0;
      v97[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      v97[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      v97[2] = (uint32_t)(uintptr_t)(&dword_213B814);
      v97[3] = (uint32_t)(uintptr_t)(&dword_213B814);
      v105 = 0;
      v106 = -1;
      if ( v63 == 6 )
      {
        v51 = v23;
        v35 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 4);
        v36 = (int)(uintptr_t)(sub_837200(v3, v35, v4));
        sprintf(v83, "%i", v36);
        v37 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 5);
        v38 = (int)(uintptr_t)(sub_837200(v3, v37, v4));
        sprintf(v84, "%i", v38);
        v125 = 0;
        v126 = nullptr;
        v127 = nullptr;
        v39 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 6);
        v40 = (double)(int)(uintptr_t)(sub_837200(v3, v39, v4));
        v90[0] = 2;
        v91 = v40;
        v90[1] = 0;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v76), "color", (int)(uintptr_t)(&v74));
        g4_std::string::construct_copy(v95, &v76);
        v96[0] = 0;
        v96[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v96, (const gameswf::ASValue::Self *)v90);
        v41 = v51;
        if ( v126 == v127 )
        {
          sub_C40640(v95);
          v41 = v51;
        }
        else
        {
          v42 = nullptr;
          if ( v126 != nullptr )
          {
            objb = v126;
            g4_std::string::construct_copy(v126, v95);
            objb[4] = 0;
            objb[5] = 0;
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(objb + 4), (const gameswf::ASValue::Self *)v96);
            v42 = v126;
            v41 = v51;
          }
          v126 = v42 + 16;
        }
        v52 = v41;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v96);
        g4_std::string::Destroy(v95);
        g4_std::string::Destroy(&v76);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v90);
        objc = sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), v68);
        v92[0] = 0;
        v92[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v92, (const gameswf::ASValue::Self *)v85);
        v43 = (char *)objc;
        if ( objc == nullptr )
          v43 = (char *)&unk_1B15112;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v79), v43, (int)(uintptr_t)(&v75) + 1);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v78), v84, (int)(uintptr_t)(&v75));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), v83, (int)(uintptr_t)(&v74) + 1);
        if ( v52 < dword_20DA0A0 )
          sub_C5A270(v52);
        sub_C40500((int)(uintptr_t)(&v77), (int)(uintptr_t)(&v78), (int)(uintptr_t)(&v79), (gameswf::ASValue::Self *)v92, (int)(uintptr_t)(&v125));
        sub_C4FF50();
        sub_C416C0();
        g4_std::string::Destroy(&v77);
        g4_std::string::Destroy(&v78);
        g4_std::string::Destroy(&v79);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v92);
        sub_C402F0();
      }
      else
      {
        v50 = v23;
        memset(v93, 0, sizeof(v93));
        v94[0] = 0;
        v94[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v94, (const gameswf::ASValue::Self *)v85);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v81), (char *)&unk_1B15112, (int)(uintptr_t)(&v75) + 3);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), v82, (int)(uintptr_t)(&v75) + 2);
        if ( v50 < dword_20DA0A0 )
          sub_C5A270(v50);
        sub_C40500((int)(uintptr_t)(&v80), (int)(uintptr_t)(&v81), (int)(uintptr_t)(v3) + 52, (gameswf::ASValue::Self *)v94, (int)(uintptr_t)(v93));
        sub_C4FF50();
        sub_C416C0();
        g4_std::string::Destroy(&v80);
        g4_std::string::Destroy(&v81);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v94);
        sub_C402F0();
      }
      if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
      {
        sub_785A60(&dword_20D5D78);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
        __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
      }
      v24 = nullptr;
      if ( byte_20D5D7C == 0 )
        v24 = (int *)(&dword_20D5D78);
      sub_7E2430(v24, v97);
      if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
      {
        sub_785A60(&dword_20D5D78);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
        __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
      }
      v25 = nullptr;
      if ( byte_20D5D7C == 0 )
        v25 = (int *)(&dword_20D5D78);
      if ( (uint8_t)sub_785F20(v25, v63) == 0 )
        goto LABEL_22;
      v29 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 7);
      v65 = (g4_cxa_guard_t *)sub_837200(v3, v29, v4);
      v30 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 6);
      v62 = (g4_cxa_guard_t *)sub_837200(v3, v30, v4);
      v31 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 5);
      obja = (char *)sub_837200(v3, v31, v4);
      v32 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 4);
      v126 = (char *)sub_837200(v3, v32, v4);
      v128 = v62;
      v127 = obja;
      v129 = v65;
      v125 = v68;
      sub_C50000();
      v70 = *(uint32_t **)(sub_655F30() + 52);
      v66 = (g4_cxa_guard_t *)(v70 + 30);
      v33 = (g4_cxa_guard_t *)v70[31];
      v34 = (g4_cxa_guard_t *)(v70 + 30);
      if ( v33 != nullptr )
      {
        do
        {
          if ( v63 <= v33[4] )
          {
            v34 = v33;
            v33 = (g4_cxa_guard_t *)v33[2];
          }
          else
          {
            v33 = (g4_cxa_guard_t *)v33[3];
          }
        }
        while ( v33 != nullptr );
        if ( v66 != v34 && v63 >= v34[4] )
        {
LABEL_68:
          v34[5] = v125;
          v34[6] = (g4_cxa_guard_t)v126;
          v34[7] = (g4_cxa_guard_t)v127;
          v34[8] = (g4_cxa_guard_t)v128;
          v34[9] = (g4_cxa_guard_t)v129;
          sub_C4FF50();
          sub_C416C0();
LABEL_22:
          sub_C416C0();
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v85);
          g4_std::string::Destroy((char *)&v75 + 4);
          return (int *)grapher::ActorBase::FireEvent(v3, 1, v4);
        }
      }
      v53 = v34;
      v107 = -1;
      v108 = -1;
      v109 = -1;
      v110 = -1;
      v111 = -1;
      v116 = 2;
      v112 = &dword_213B814;
      v113 = &dword_213B814;
      v114 = &dword_213B814;
      v115 = &dword_213B814;
      v130[0] = v63;
      v117 = 0;
      v118 = 0;
      v119 = 0;
      v120 = 0;
      v121 = 0;
      v122 = 0;
      v123 = 0;
      v124 = -1;
      memset(&v130[1], 255, 20);
      sub_C50000();
      v44 = v53;
      if ( v53 == v66 )
      {
        if ( v70[34] != 0 )
        {
          v45 = v70[33];
          if ( *(uint32_t *)(v45 + 16) < v130[0] )
          {
LABEL_78:
            sub_C500D0(0, v45, v130);
LABEL_79:
            v44 = v73;
            goto LABEL_67;
          }
        }
      }
      else
      {
        if ( v130[0] >= v53[4] )
        {
          if ( v130[0] <= v53[4] )
            goto LABEL_67;
          if ( v53 != (g4_cxa_guard_t *)v70[33] )
          {
            obje = (void *)v130[0];
            v46 = sub_19048E0(v53);
            if ( (int)(uintptr_t)(obje) >= *(uint32_t *)(v46 + 16) )
              goto LABEL_80;
            if ( v53[3] != 0 )
            {
              sub_C500D0(v46, v46, v130);
              v44 = v73;
              goto LABEL_67;
            }
          }
          sub_C500D0(0, v53, v130);
          goto LABEL_79;
        }
        if ( v53 == (g4_cxa_guard_t *)v70[32] )
          goto LABEL_66;
        objd = (void *)v130[0];
        v45 = sub_1904940(v53);
        v44 = v53;
        if ( (int)(uintptr_t)(objd) > *(uint32_t *)(v45 + 16) )
        {
          if ( *(uint32_t *)(v45 + 12) != 0 )
          {
LABEL_66:
            sub_C500D0(v44, v44, v130);
            v44 = v73;
LABEL_67:
            v54 = v44;
            sub_C416C0();
            sub_C416C0();
            v34 = v54;
            goto LABEL_68;
          }
          goto LABEL_78;
        }
      }
LABEL_80:
      sub_C50260(v130);
      v44 = v72;
      goto LABEL_67;
    }
  }
  return result;
}


