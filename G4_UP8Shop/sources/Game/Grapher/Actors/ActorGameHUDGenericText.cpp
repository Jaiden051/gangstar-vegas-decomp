#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameHUDGenericText.h"

// ----------------------------------------------------------------------------
// Function: ActorGameHUDGenericText::CreateInstance  (binary VA: 0x0)
// Original: ActorGameHUDGenericText::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameHUDGenericText::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x134u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameHUDGenericText::Construct((uint8_t *)(uintptr_t)(v3), -1);
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
    v3 = gll_operator_new(0x134u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameHUDGenericText::Construct((uint8_t *)(uintptr_t)(v3), a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameHUDGenericText::Construct  (binary VA: 0x0)
// Original: ActorGameHUDGenericText::ActorGameHUDGenericText
// ----------------------------------------------------------------------------
int ActorGameHUDGenericText::Construct(uint8_t *a1, unsigned int a2)
{
  uint16_t *v2;
  unsigned int v3;
  int result;
  uint16_t *v5;

  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  v2 = (uint16_t *)(a1 + 52);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C928);
  v3 = 256;
  if ( ((unsigned int)(uintptr_t)(a1 + 52) & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 53);
    a1[52] = 0;
    LOWORD(v3) = 255;
    if ( ((unsigned int)(uintptr_t)(a1 + 53) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v3 -= 2;
  ++v2;
LABEL_3:
  result = 0;
  memset(v2, 0, 4 * (v3 >> 2));
  v5 = &v2[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
    *v5++ = 0;
  if ( (v3 & 1) != 0 )
    *(uint8_t *)v5 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ActorGameHUDGenericText::Destroy  (binary VA: 0x0)
// Original: ActorGameHUDGenericText::~ActorGameHUDGenericText
// ----------------------------------------------------------------------------
void ActorGameHUDGenericText::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C928);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40090  (binary VA: 0x0)
// Original: sub_C40090
// ----------------------------------------------------------------------------
void sub_C40090(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C928);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C47D20  (binary VA: 0x0)
// Original: sub_C47D20
// ----------------------------------------------------------------------------
int sub_C47D20(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v7;
  void *v8;
  uint32_t *v9;
  void *v10;
  uint32_t *v11;
  void *v12;
  uint32_t *v13;
  void *v14;
  uint32_t *v15;
  void *v16;
  void *v17;
  void *v18;
  void *v19;
  void *v20;
  void *v21;
  void *v22;
  void *v23;
  void *v24;
  void *v25;
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
  uint8_t v38[20];
  uint32_t *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
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
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Generic Text", (int)(uintptr_t)(&v26));
  grapher::ActorBase::SetDisplayName(a1, &v43);
  g4_std::string::Destroy(&v43);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "HUD", (int)(uintptr_t)(&v26) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v44);
  g4_std::string::Destroy(&v44);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v92), "In", (int)(uintptr_t)(&v38[2]));
  grapher::ActorBase::AddPin(a1, 0, &v92, 1, -1);
  g4_std::string::Destroy(&v92);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v93), "Out", (int)(uintptr_t)(&v38[3]));
  grapher::ActorBase::AddPin(a1, 1, v93, 0, -1);
  g4_std::string::Destroy(v93);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "The title of the dialog.", (int)(uintptr_t)(&v27) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Title", (int)(uintptr_t)(&v27));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "StrID", (int)(uintptr_t)(&v26) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v1;
  grapher::HolderT_string_e830be::From(v1, &v45);
  *(uint32_t *)&v38[4] = (uint32_t)(uintptr_t)(v7);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v46, 11, &v38[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Title", (int)(uintptr_t)(&v27) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v47), v8, 1, 1, (int)(uintptr_t)(&v48), 3);
  g4_std::string::Destroy(&v47);
  if ( *(uint32_t *)&v38[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v38[4] + 44))(*(uint32_t *)&v38[4]);
  g4_std::string::Destroy(&v45);
  g4_std::string::Destroy(&v46);
  g4_std::string::Destroy(&v48);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "The subtitle of the dialog.", (int)(uintptr_t)(&v28) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Subtitle", (int)(uintptr_t)(&v28));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "StrID", (int)(uintptr_t)(&v27) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v2;
  grapher::HolderT_string_e830be::From(v2, &v49);
  v39 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v50, 11, &v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "Subtitle", (int)(uintptr_t)(&v28) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v51), v10, 1, 1, (int)(uintptr_t)(&v52), 3);
  g4_std::string::Destroy(&v51);
  if ( v39 != nullptr )
    G4_VCALL<void>(v39, 44);
  g4_std::string::Destroy(&v49);
  g4_std::string::Destroy(&v50);
  g4_std::string::Destroy(&v52);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "The content of the dialog.", (int)(uintptr_t)(&v29) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "Content", (int)(uintptr_t)(&v29));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "StrID", (int)(uintptr_t)(&v28) + 3);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v11 = v3;
  grapher::HolderT_string_e830be::From(v3, &v53);
  v40 = v11;
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v54, 11, &v40);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "Content", (int)(uintptr_t)(&v29) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v55), v12, 1, 1, (int)(uintptr_t)(&v56), 3);
  g4_std::string::Destroy(&v55);
  if ( v40 != nullptr )
    G4_VCALL<void>(v40, 44);
  g4_std::string::Destroy(&v53);
  g4_std::string::Destroy(&v54);
  g4_std::string::Destroy(&v56);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "The type of dialog from dialogs_.xml.", (int)(uintptr_t)(&v30) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "Type", (int)(uintptr_t)(&v30));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "Dialogs", (int)(uintptr_t)(&v29) + 3);
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v13 = v4;
  grapher::HolderT_string_e830be::From(v4, &v57);
  v41 = v13;
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v58, 11, &v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "Type", (int)(uintptr_t)(&v30) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v59), v14, 1, 1, (int)(uintptr_t)(&v60), 3);
  g4_std::string::Destroy(&v59);
  if ( v41 != nullptr )
    G4_VCALL<void>(v41, 44);
  g4_std::string::Destroy(&v57);
  g4_std::string::Destroy(&v58);
  g4_std::string::Destroy(&v60);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v64),
    "IconType to display for either Main Objectives (from MapIcons in menu_constants.xml) or Sub Objectives (from SubObje"
    "ctiveType in dialog_structs.xml)",
    (int)(uintptr_t)(&v31) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "IconType", (int)(uintptr_t)(&v31));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "MapIcons.None", (int)(uintptr_t)(&v30) + 3);
  v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v5 = (uint32_t)(uintptr_t)(&off_205C408);
  v5[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v15 = v5;
  grapher::HolderT_string_e830be::From(v5, &v61);
  v42 = v15;
  v16 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v16, &v62, 11, &v42);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "IconType", (int)(uintptr_t)(&v31) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v63), v16, 1, 1, (int)(uintptr_t)(&v64), 3);
  g4_std::string::Destroy(&v63);
  if ( v42 != nullptr )
    G4_VCALL<void>(v42, 44);
  g4_std::string::Destroy(&v61);
  g4_std::string::Destroy(&v62);
  g4_std::string::Destroy(&v64);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), "The first variable to display in the title", (int)(uintptr_t)(&v32) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "Title Var1", (int)(uintptr_t)(&v31) + 3);
  v17 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v17, &v65, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v66), "Title Var1", (int)(uintptr_t)(&v32));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v66), v17, 1, 0, (int)(uintptr_t)(&v67), 3);
  g4_std::string::Destroy(&v66);
  g4_std::string::Destroy(&v65);
  g4_std::string::Destroy(&v67);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v70), "The second variable to display in the title", (int)(uintptr_t)(&v33));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v68), "Title Var2", (int)(uintptr_t)(&v32) + 2);
  v18 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v18, &v68, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v69), "Title Var2", (int)(uintptr_t)(&v32) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v69), v18, 1, 0, (int)(uintptr_t)(&v70), 3);
  g4_std::string::Destroy(&v69);
  g4_std::string::Destroy(&v68);
  g4_std::string::Destroy(&v70);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v73), "The third variable to display in the title", (int)(uintptr_t)(&v33) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v71), "Title Var3", (int)(uintptr_t)(&v33) + 1);
  v19 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v19, &v71, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v72), "Title Var3", (int)(uintptr_t)(&v33) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 7, (int)(uintptr_t)(&v72), v19, 1, 0, (int)(uintptr_t)(&v73), 3);
  g4_std::string::Destroy(&v72);
  g4_std::string::Destroy(&v71);
  g4_std::string::Destroy(&v73);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v76), "The first variable to display in the subtitle", (int)(uintptr_t)(&v34) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v74), "Subtitle Var1", (int)(uintptr_t)(&v34));
  v20 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v20, &v74, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v75), "Subtitle Var1", (int)(uintptr_t)(&v34) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 8, (int)(uintptr_t)(&v75), v20, 1, 0, (int)(uintptr_t)(&v76), 3);
  g4_std::string::Destroy(&v75);
  g4_std::string::Destroy(&v74);
  g4_std::string::Destroy(&v76);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v79), "The second variable to display in the subtitle", (int)(uintptr_t)(&v35) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), "Subtitle Var2", (int)(uintptr_t)(&v34) + 3);
  v21 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v21, &v77, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v78), "Subtitle Var2", (int)(uintptr_t)(&v35));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 9, (int)(uintptr_t)(&v78), v21, 1, 0, (int)(uintptr_t)(&v79), 3);
  g4_std::string::Destroy(&v78);
  g4_std::string::Destroy(&v77);
  g4_std::string::Destroy(&v79);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v82), "The third variable to display in the subtitle", (int)(uintptr_t)(&v36));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), "Subtitle Var3", (int)(uintptr_t)(&v35) + 2);
  v22 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v22, &v80, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v81), "Subtitle Var3", (int)(uintptr_t)(&v35) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 10, (int)(uintptr_t)(&v81), v22, 1, 0, (int)(uintptr_t)(&v82), 3);
  g4_std::string::Destroy(&v81);
  g4_std::string::Destroy(&v80);
  g4_std::string::Destroy(&v82);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v85), "The first variable to display in the content", (int)(uintptr_t)(&v36) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v83), "Content Var1", (int)(uintptr_t)(&v36) + 1);
  v23 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v23, &v83, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v84), "Content Var1", (int)(uintptr_t)(&v36) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 11, (int)(uintptr_t)(&v84), v23, 1, 0, (int)(uintptr_t)(&v85), 3);
  g4_std::string::Destroy(&v84);
  g4_std::string::Destroy(&v83);
  g4_std::string::Destroy(&v85);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v88), "The second variable to display in the content", (int)(uintptr_t)(&v37) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v86), "Content Var2", (int)(uintptr_t)(&v37));
  v24 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v24, &v86, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v87), "Content Var2", (int)(uintptr_t)(&v37) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 12, (int)(uintptr_t)(&v87), v24, 1, 0, (int)(uintptr_t)(&v88), 3);
  g4_std::string::Destroy(&v87);
  g4_std::string::Destroy(&v86);
  g4_std::string::Destroy(&v88);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v91), "The third variable to display in the content", (int)(uintptr_t)(&v38[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v89), "Content Var3", (int)(uintptr_t)(&v37) + 3);
  v25 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v25, &v89, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v90), "Content Var3", (int)(uintptr_t)(v38));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 13, (int)(uintptr_t)(&v90), v25, 1, 0, (int)(uintptr_t)(&v91), 3);
  g4_std::string::Destroy(&v90);
  g4_std::string::Destroy(&v89);
  return ((g4_std::string::Destroy(&v91)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C55920  (binary VA: 0x0)
// Original: sub_C55920
// ----------------------------------------------------------------------------
grapher::ActorContext::Self * sub_C55920(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *result;
  unsigned int v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *v8;
  grapher::ActorContext::Self *v9;
  const char *v10;
  grapher::ActorVariable::Self *v11;
  grapher::ActorVariable::Self *v12;
  grapher::ActorVariable::Self *v13;
  grapher::ActorContext::Self *v14;
  grapher::ActorVariable::Self *v15;
  grapher::ActorVariable::Self *v16;
  grapher::ActorVariable::Self *v17;
  grapher::ActorContext::Self *v18;
  grapher::ActorVariable::Self *v19;
  grapher::ActorVariable::Self *v20;
  grapher::ActorVariable::Self *v21;
  grapher::ActorContext::Self *v22;
  grapher::ActorVariable::Self *v23;
  double v24; // xmm0_8
  char *v25;
  int *v26;
  const char *v27;
  int v28;
  int *v29;
  char *format;
  gameswf::ASValue::Self *v31;
  gameswf::ASValue::Self *v32;
  gameswf::ASValue::Self *v33;
  gameswf::ASValue::Self *v34;
  gameswf::ASValue::Self *v35;
  gameswf::ASValue::Self *v36;
  gameswf::ASValue::Self *v37;
  gameswf::ASValue::Self *v38;
  gameswf::ASValue::Self *v39;
  gameswf::ASValue::Self *v40;
  gameswf::ASValue::Self *v41;
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
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  grapher::ActorContext::Self *v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  grapher::ActorContext::Self *v125;
  int v126;
  int *v127;
  int v128;
  int v129;
  int v130;
  int v131;
  grapher::ActorContext::Self *v132;
  int v133;
  int v134;
  grapher::ActorContext::Self *v135;
  int v136;
  char *v137;
  char *v138;
  grapher::ActorContext::Self *v139;
  grapher::ActorContext::Self *v140;
  char *v141;
  grapher::ActorContext::Self *v142;
  grapher::ActorContext::Self *v143;
  char *v144;
  grapher::ActorContext::Self *v145;
  grapher::ActorContext::Self *v146;
  char *v147;
  grapher::ActorContext::Self *v148;
  grapher::ActorContext::Self *v149;
  char *v150;
  char *v151;
  char *v152;
  char *v153;
  char *v154;
  g4_cxa_guard_t *v155;
  char *v156;
  grapher::ActorContext::Self *v157;
  int v158;
  int v159;
  int v160;
  int v161;
  uint8_t v162[4];
  double v163;
  int v164[3];
  uint8_t v165[12];
  uint32_t v166[16];

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  result = sub_837200(
             (int)(uintptr_t)(a1),
             Variable,
             a3,
             (int)(uintptr_t)(v31),
             v42,
             v53,
             v67,
             v81,
             v95,
             v109,
             v123,
             (grapher::ActorContext::Self *)v137);
  v5 = (unsigned int)(uintptr_t)(result);
  if ( (int)(uintptr_t)(result) >= 0 && (unsigned int)(uintptr_t)(result) < dword_20DA0A0 )
  {
    v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
    v125 = sub_837200((int)(uintptr_t)(a1), v6, a3, (int)(uintptr_t)(v32), v43, v54, v68, v82, v96, v110, v124, (grapher::ActorContext::Self *)v138);
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    v153 = (char *)sub_837200((int)(uintptr_t)(a1), v7, a3, (int)(uintptr_t)(v33), v44, v55, v69, v83, v97, v111, (int)(uintptr_t)(v125), v139);
    v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    v9 = sub_837200((int)(uintptr_t)(a1), v8, a3, (int)(uintptr_t)(v34), v45, v56, v70, v84, v98, v112, v126, v140);
    v155 = (g4_cxa_guard_t *)v9;
    if ( (int)(uintptr_t)(v127) < 0 )
    {
      if ( (int)(uintptr_t)(v153) < 0 )
      {
        if ( (int)(uintptr_t)(v9) < 0 )
        {
          v28 = *(uint32_t *)(dword_20DA090 + 52 * v5 + 28);
          if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
          {
            sub_785A60((int)(uintptr_t)(&dword_20D5D78));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
            __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
          }
          v29 = nullptr;
          if ( byte_20D5D7C == 0 )
            v29 = (int *)(&dword_20D5D78);
          sub_7B8F10((int)(uintptr_t)(v29), v28, -1);
          return (grapher::ActorContext::Self *)grapher::ActorBase::FireEvent(a1, 1, a3);
        }
        v10 = (const char *)&unk_1B15112;
        v156 = (char *)&unk_1B15112;
        goto LABEL_22;
      }
      v10 = (const char *)&unk_1B15112;
    }
    else
    {
      format = (char *)v127;
      v127 = (int *)(&dword_20DDDC0);
      v10 = sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), (int)(uintptr_t)(format));
      v156 = (char *)&unk_1B15112;
      if ( (int)(uintptr_t)(v153) < 0 )
        goto LABEL_6;
    }
    v127 = (int *)(&dword_20DDDC0);
    v152 = (char *)v10;
    v156 = (char *)sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), (int)(uintptr_t)(v153));
    v10 = v152;
LABEL_6:
    v154 = (char *)&unk_1B15112;
    if ( (int)(uintptr_t)(v155) < 0 )
    {
      if ( v10 != nullptr )
      {
LABEL_8:
        if ( *v10 != 0 && v156 != nullptr && *v156 != 0 && v154 != nullptr && *v154 != 0 )
        {
          v141 = (char *)v10;
          v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 7);
          v157 = sub_837200(
                   (int)(uintptr_t)(a1),
                   v11,
                   a3,
                   (int)(uintptr_t)(v35),
                   v46,
                   v57,
                   v71,
                   v85,
                   v99,
                   v113,
                   (int)(uintptr_t)(v127),
                   (grapher::ActorContext::Self *)v141);
          v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 6);
          v115 = sub_837200((int)(uintptr_t)(a1), v12, a3, (int)(uintptr_t)(v36), v47, v58, v72, v86, v100, v114, v128, v142);
          v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 5);
          v14 = sub_837200((int)(uintptr_t)(a1), v13, a3, (int)(uintptr_t)(v37), v48, v59, v73, v87, v101, (int)(uintptr_t)(v115), v129, v143);
          sprintf((char *)a1 + 52, v144, v14);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v159), (char *)a1 + 52, (int)(uintptr_t)(&v158));
          v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 10);
          v145 = sub_837200(
                   (int)(uintptr_t)(a1),
                   v15,
                   a3,
                   v116,
                   (int)(uintptr_t)(v157),
                   v60,
                   v74,
                   v88,
                   v102,
                   v116,
                   v130,
                   (grapher::ActorContext::Self *)v144);
          v16 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 9);
          v132 = sub_837200((int)(uintptr_t)(a1), v16, a3, (int)(uintptr_t)(v38), v49, v61, v75, v89, v103, v117, v131, v145);
          v17 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 8);
          v18 = sub_837200((int)(uintptr_t)(a1), v17, a3, (int)(uintptr_t)(v39), v50, v62, v76, v90, v104, v118, (int)(uintptr_t)(v132), v146);
          sprintf((char *)a1 + 52, v156, v18);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v160), (char *)a1 + 52, (int)(uintptr_t)(&v158) + 1);
          v19 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 13);
          v148 = sub_837200(
                   (int)(uintptr_t)(a1),
                   v19,
                   a3,
                   v133,
                   (int)(uintptr_t)(v147),
                   v63,
                   v77,
                   v91,
                   v105,
                   v119,
                   v133,
                   (grapher::ActorContext::Self *)v147);
          v20 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 12);
          v135 = sub_837200((int)(uintptr_t)(a1), v20, a3, (int)(uintptr_t)(v40), v51, v64, v78, v92, v106, v120, v134, v148);
          v21 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 11);
          v22 = sub_837200((int)(uintptr_t)(a1), v21, a3, (int)(uintptr_t)(v41), v52, v65, v79, v93, v107, v121, (int)(uintptr_t)(v135), v149);
          sprintf((char *)a1 + 52, v154, v22);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v161), (char *)a1 + 52, (int)(uintptr_t)(&v158) + 2);
          v23 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
          v24 = (double)(int)(uintptr_t)sub_837200(
                               (int)(uintptr_t)(a1),
                               v23,
                               a3,
                               v136,
                               (int)(uintptr_t)(v150),
                               v66,
                               v80,
                               v94,
                               v108,
                               v122,
                               v136,
                               (grapher::ActorContext::Self *)v150);
          v162[0] = 2;
          v162[1] = 0;
          v163 = v24;
          memset(v164, 0, sizeof(v164));
          v165[0] = 0;
          v165[1] = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v165, (const gameswf::ASValue::Self *)v162);
          v25 = (char *)&unk_1B15112;
          if ( v5 < dword_20DA0A0 )
            v25 = (char *)sub_C5A270(v5);
          sub_C40500((int)(uintptr_t)(v166), v25, (int)(uintptr_t)(&v159), (int)(uintptr_t)(&v160), (int)(uintptr_t)(&v161), (gameswf::ASValue::Self *)v165, v164);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v165);
          sub_C402F0(v164);
          if ( byte_20D5D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70) != 0 )
          {
            sub_785A60((int)(uintptr_t)(&dword_20D5D78));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
            __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
          }
          v26 = nullptr;
          if ( byte_20D5D7C == 0 )
            v26 = (int *)(&dword_20D5D78);
          sub_7E2430(v26, (int)(uintptr_t)(v166));
          sub_C416C0(v166);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v162);
          g4_std::string::Destroy(&v161);
          g4_std::string::Destroy(&v160);
          g4_std::string::Destroy(&v159);
        }
      }
      return (grapher::ActorContext::Self *)grapher::ActorBase::FireEvent(a1, 1, a3);
    }
LABEL_22:
    v151 = (char *)v10;
    v27 = sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), (int)(uintptr_t)(v155));
    v10 = v151;
    v154 = (char *)v27;
    if ( v151 != nullptr )
      goto LABEL_8;
    return (grapher::ActorContext::Self *)grapher::ActorBase::FireEvent(a1, 1, a3);
  }
  return result;
}


