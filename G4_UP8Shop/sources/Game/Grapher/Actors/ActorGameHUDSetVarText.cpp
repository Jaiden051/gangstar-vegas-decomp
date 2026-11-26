#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameHUDSetVarText.h"

// ----------------------------------------------------------------------------
// Function: ActorGameHUDSetVarText::CreateInstance  (binary VA: 0x0)
// Original: ActorGameHUDSetVarText::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameHUDSetVarText::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameHUDSetVarText::ActorGameHUDSetVarText(v3, -1);
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
    ActorGameHUDSetVarText::ActorGameHUDSetVarText(v3, a1);
  }
  return v3;
}



// Constructor (0xc4fbf0):
int (**ActorGameHUDSetVarText::ActorGameHUDSetVarText(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CAC8);
  return (int (**)(int))(uintptr_t)(&off_206CAC8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameHUDSetVarText::Destroy  (binary VA: 0x0)
// Original: ActorGameHUDSetVarText::~ActorGameHUDSetVarText
// ----------------------------------------------------------------------------
void ActorGameHUDSetVarText::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CAC8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FD50  (binary VA: 0x0)
// Original: sub_C3FD50
// ----------------------------------------------------------------------------
void sub_C3FD50(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CAC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C4B1F0  (binary VA: 0x0)
// Original: sub_C4B1F0
// ----------------------------------------------------------------------------
int sub_C4B1F0(grapher::ActorBase::Self *a1)
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
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint8_t v19[20];
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  int v24;
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
  int v46[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Set Variable HUD Text", (int)(uintptr_t)(&v13));
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "HUD", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "In", (int)(uintptr_t)(&v19[2]));
  grapher::ActorBase::AddPin(a1, 0, &v45, 1, -1);
  g4_std::string::Destroy(&v45);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v46), "Out", (int)(uintptr_t)(&v19[3]));
  grapher::ActorBase::AddPin(a1, 1, v46, 0, -1);
  g4_std::string::Destroy(v46);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "The text label specified as PACK_ID.TEXT_ID", (int)(uintptr_t)(&v14) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Text", (int)(uintptr_t)(&v14) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "StrID", (int)(uintptr_t)(&v14));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v23);
  *(uint32_t *)&v19[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 11, &v19[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Text", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v25), v5, 1, 1, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  if ( *(uint32_t *)&v19[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v19[4] + 44))(*(uint32_t *)&v19[4]);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), (char *)&unk_1B15112, (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Text", (int)(uintptr_t)(&v15));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v20 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v27, 4, &v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Type", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v28), v7, 1, 1, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  if ( v20 != nullptr )
    G4_VCALL<void>(v20, 44);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "The first variable to display in the text", (int)(uintptr_t)(&v16) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Var1", (int)(uintptr_t)(&v15) + 3);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v30, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Var1", (int)(uintptr_t)(&v16));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v31), v8, 1, 1, (int)(uintptr_t)(&v32), 3);
  g4_std::string::Destroy(&v31);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "The second variable to display in the text", (int)(uintptr_t)(&v17));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Var2", (int)(uintptr_t)(&v16) + 2);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v33, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Var2", (int)(uintptr_t)(&v16) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v34), v9, 1, 1, (int)(uintptr_t)(&v35), 3);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "The third variable to display in the text", (int)(uintptr_t)(&v17) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Var3", (int)(uintptr_t)(&v17) + 1);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v36, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Var3", (int)(uintptr_t)(&v17) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v37), v10, 1, 1, (int)(uintptr_t)(&v38), 3);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "The fourth variable to display in the text", (int)(uintptr_t)(&v18) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Var4", (int)(uintptr_t)(&v18));
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v39, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Var4", (int)(uintptr_t)(&v18) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v40), v11, 1, 1, (int)(uintptr_t)(&v41), 3);
  g4_std::string::Destroy(&v40);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "The fifth variable to display in the text", (int)(uintptr_t)(&v19[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Var5", (int)(uintptr_t)(&v18) + 3);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v42, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Var5", (int)(uintptr_t)(v19));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v43), v12, 1, 1, (int)(uintptr_t)(&v44), 3);
  g4_std::string::Destroy(&v43);
  g4_std::string::Destroy(&v42);
  return ((g4_std::string::Destroy(&v44)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C58ED0  (binary VA: 0x0)
// Original: sub_C58ED0
// ----------------------------------------------------------------------------
int sub_C58ED0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v6;
  grapher::ActorVariable::Self *v7;
  grapher::ActorContext::Self *v8;
  const char *v9;
  size_t v10;
  char *v11;
  int v12;
  grapher::ActorVariable::Self *v13;
  grapher::ActorVariable::Self *v14;
  grapher::ActorVariable::Self *v15;
  grapher::ActorVariable::Self *v16;
  grapher::ActorVariable::Self *v17;
  grapher::ActorContext::Self *v18;
  char *v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  int v25;
  grapher::ActorVariable::Self *v26;
  grapher::ActorContext::Self *v27;
  int v28;
  void *v29;
  grapher::ActorVariable::Self *v30;
  grapher::ActorContext::Self *v31;
  const char *v32;
  size_t v33;
  char *v34;
  size_t v35;
  grapher::ActorVariable::Self *v36;
  grapher::ActorVariable::Self *v37;
  grapher::ActorContext::Self *v38;
  const char *v39;
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
  grapher::ActorContext::Self *v113;
  grapher::ActorContext::Self *v114;
  grapher::ActorContext::Self *v115;
  grapher::ActorContext::Self *v116;
  grapher::ActorContext::Self *v117;
  grapher::ActorContext::Self *v118;
  grapher::ActorContext::Self *v119;
  grapher::ActorContext::Self *v120;
  grapher::ActorContext::Self *v121;
  char *v122;
  grapher::ActorContext::Self *v123;
  const char *obj;
  uint32_t *obja;
  grapher::ActorContext::Self *objb;
  const char *objc;
  char *objd;
  grapher::ActorContext::Self *obje;
  uint32_t *v130;
  grapher::ActorContext::Self *v131;
  g4_cxa_guard_t *v132;
  g4_cxa_guard_t *v133;
  g4_cxa_guard_t *v134;
  int v135;
  int v136;
  int v137[4];
  char *src[2];
  char *v139;
  int v140;
  char *s;
  char *format;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  uint8_t v148[20];
  grapher::ActorBase::Self **v149;

  v149 = &a1;
  v3 = a1;
  v4 = a3;
  v130 = *(uint32_t **)(dword_20DDDC0 + 864);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  sub_837C70(&v139, (int)(uintptr_t)(v3), Variable, v4, v50, v59, v68, v77, v86, v95, v104);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v140), (char *)&unk_1B15112, (int)(uintptr_t)(&v135));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&s), (char *)&unk_1B15112, (int)(uintptr_t)(&v136));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&format), (char *)&unk_1B15112, (int)(uintptr_t)(&v136) + 1);
  v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 0);
  if ( (int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(v3), v6, v4, v42, v51, v60, v69, v78, v87, v96, v105, v113)) >= 0 )
  {
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 0);
    v8 = sub_837200((int)(uintptr_t)(v3), v7, v4, v43, v52, v61, v70, v79, v88, v97, v106, v114);
    v9 = sub_AC5E50(v130, (int)(uintptr_t)(v8));
    if ( v9 != nullptr )
    {
      obj = v9;
      v10 = strlen(v9);
      v11 = (char *)obj;
    }
    else
    {
      v10 = 0;
      v11 = (char *)&unk_1B15112;
    }
    g4_std_compat::string_assign((int)(uintptr_t)(&format), v11, v10);
  }
  obja = (uint32_t *)dword_20DA090;
  v12 = obja[13 * sub_5A5890(v139, 0xB4A46154) + 7];
  if ( v12 == 24 )
  {
    v137[0] = (int)(uintptr_t)(&dword_213B814);
    src[0] = (char *)&dword_213B814;
    v26 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
    v27 = sub_837200((int)(uintptr_t)(v3), v26, v4, v43, v52, v61, v70, v79, v88, v97, v106, v114);
    v28 = (int)(uintptr_t)(v27);
    if ( byte_20D2D50 == 0 )
    {
      v123 = v27;
      v40 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50);
      v28 = (int)(uintptr_t)(v123);
      if ( v40 != 0 )
      {
        sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
        __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
        v28 = (int)(uintptr_t)(v123);
      }
    }
    v29 = nullptr;
    if ( byte_20D2D64 == 0 )
      v29 = &unk_20D2D60;
    sub_79D200((int)(uintptr_t)(v29), 6, v28, v137, 0);
    sub_AF1D00(v130, (int)(uintptr_t)(src), format, v137[0]);
    strcpy(((char *)(&byte_20DEA60)), src[0]);
    v30 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
    v31 = sub_837200((int)(uintptr_t)(v3), v30, v4, v48, v57, v66, v75, v84, v93, v102, v111, v119);
    v32 = sub_AC5E50(v130, (int)(uintptr_t)(v31));
    if ( v32 != nullptr )
    {
      objc = v32;
      v33 = strlen(v32);
      v34 = (char *)objc;
    }
    else
    {
      v33 = 0;
      v34 = (char *)&unk_1B15112;
    }
    g4_std_compat::string_assign((int)(uintptr_t)(&v140), v34, v33);
    objd = *(char **)(dword_20D92B0 + 8);
    v35 = strlen(objd);
    g4_std_compat::string_assign((int)(uintptr_t)(&s), objd, v35);
    g4_std::string::Destroy(src);
    g4_std::string::Destroy(v137);
  }
  else if ( v12 == 20 )
  {
    v36 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
    obje = sub_837200((int)(uintptr_t)(v3), v36, v4, v43, v52, v61, v70, v79, v88, v97, v106, v114);
    v37 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
    v38 = sub_837200((int)(uintptr_t)(v3), v37, v4, v49, v58, v67, v76, v85, v94, v103, v112, v120);
    v39 = sub_AC5E50(v130, (int)(uintptr_t)(v38));
    sprintf(((char *)(&byte_20DEA60)), v39, obje);
    g4_std::string::assign_str(&v140, &format);
  }
  else
  {
    v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 6);
    v132 = (g4_cxa_guard_t *)sub_837200((int)(uintptr_t)(v3), v13, v4, v43, v52, v61, v70, v79, v88, v97, v106, v114);
    v14 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 5);
    v131 = sub_837200((int)(uintptr_t)(v3), v14, v4, v44, v53, v62, v71, v80, v89, v98, v107, v115);
    v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 4);
    v121 = sub_837200((int)(uintptr_t)(v3), v15, v4, v45, v54, v63, v72, v81, v90, v99, v108, v116);
    v16 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
    objb = sub_837200((int)(uintptr_t)(v3), v16, v4, v46, v55, v64, v73, v82, v91, v100, v109, v117);
    v17 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
    v18 = sub_837200((int)(uintptr_t)(v3), v17, v4, v47, v56, v65, v74, v83, v92, v101, v110, v118);
    sprintf(((char *)(&byte_20DEA60)), format, v18, objb, v121, v131, v132);
  }
  v145 = 0;
  v146 = 0;
  v147 = 0;
  v148[0] = 0;
  v148[1] = 0;
  gameswf::ASValue::setString((gameswf::ASValue::Self *)v148, s);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v144), (char *)&unk_1B15112, (int)(uintptr_t)(&v136) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v143), ((char *)(&byte_20DEA60)), (int)(uintptr_t)(&v136) + 2);
  v19 = v139;
  if ( byte_20D5D70 == 0 )
  {
    v122 = v139;
    v25 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70);
    v19 = v122;
    if ( v25 != 0 )
    {
      sub_785A60((int)(uintptr_t)(&dword_20D5D78));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
      __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
      v19 = v122;
    }
  }
  v20 = nullptr;
  if ( byte_20D5D7C == 0 )
    v20 = (int *)(&dword_20D5D78);
  sub_7E2D40(v20, v19, (int)(uintptr_t)(&v143), (int)(uintptr_t)(&v140), (int)(uintptr_t)(&v144), 0, (gameswf::ASValue::Self *)v148, (int)(uintptr_t)(&v145), 0);
  g4_std::string::Destroy(&v143);
  g4_std::string::Destroy(&v144);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v148);
  v21 = v145;
  if ( v146 != v145 )
  {
    v134 = (g4_cxa_guard_t *)v3;
    v133 = (g4_cxa_guard_t *)v4;
    v22 = v145;
    v23 = v146;
    do
    {
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v22 + 4));
      v41 = v22;
      v22 += 16;
      g4_std::string::Destroy(v41);
    }
    while ( v23 != v22 );
    v3 = (grapher::ActorBase::Self *)v134;
    v4 = (grapher::ActorContext::Self *)v133;
    v21 = v145;
  }
  if ( v21 != 0 )
    sub_4EB870(v21);
  grapher::ActorBase::FireEvent(v3, 1, v4);
  g4_std::string::Destroy(&format);
  g4_std::string::Destroy(&s);
  g4_std::string::Destroy(&v140);
  return ((g4_std::string::Destroy(&v139)), (int)0);
}


