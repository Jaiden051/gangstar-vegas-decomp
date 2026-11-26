#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCinematicDialog.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicDialog::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCinematicDialog::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCinematicDialog::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCinematicDialog::ActorGameCinematicDialog(v3, -1);
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
    ActorGameCinematicDialog::ActorGameCinematicDialog(v3, a1);
  }
  return v3;
}



// Constructor (0x845440):
int (**ActorGameCinematicDialog::ActorGameCinematicDialog(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA88);
  return (int (**)(int))(uintptr_t)(&off_205CA88);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCinematicDialog::Destroy  (binary VA: 0x0)
// Original: ActorGameCinematicDialog::~ActorGameCinematicDialog
// ----------------------------------------------------------------------------
int ActorGameCinematicDialog::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA88);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_839930  (binary VA: 0x0)
// Original: sub_839930
// ----------------------------------------------------------------------------
void sub_839930(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8400C0  (binary VA: 0x0)
// Original: sub_8400C0
// ----------------------------------------------------------------------------
int sub_8400C0(grapher::ActorBase::Self *a1)
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
  void *v13;
  uint32_t *v14;
  void *v15;
  void *v16;
  uint32_t *v17;
  void *v18;
  void *v19;
  void *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint8_t v29[20];
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
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
  int v66[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Dialog", (int)(uintptr_t)(&v21));
  grapher::ActorBase::SetDisplayName(a1, &v34);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Cinematics", (int)(uintptr_t)(&v22));
  grapher::ActorBase::SetCategoryName(a1, &v35);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64), "In", (int)(uintptr_t)(&v29[1]));
  grapher::ActorBase::AddPin(a1, 0, &v64, 1, -1);
  g4_std::string::Destroy(&v64);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "Out", (int)(uintptr_t)(&v29[2]));
  grapher::ActorBase::AddPin(a1, 1, &v65, 0, -1);
  g4_std::string::Destroy(&v65);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v66), "Completed", (int)(uintptr_t)(&v29[3]));
  grapher::ActorBase::AddPin(a1, 2, v66, 0, -1);
  g4_std::string::Destroy(v66);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "The character who will talk", (int)(uintptr_t)(&v22) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Speaker", (int)(uintptr_t)(&v22) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v29[4] = (uint32_t)(uintptr_t)(v7);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v36, 9, &v29[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Speaker", (int)(uintptr_t)(&v22) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v37), v8, 1, 1, (int)(uintptr_t)(&v38), 3);
  g4_std::string::Destroy(&v37);
  if ( *(uint32_t *)&v29[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v29[4] + 44))(*(uint32_t *)&v29[4]);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "The text label specified as PACK_ID.TEXT_ID", (int)(uintptr_t)(&v23) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Text", (int)(uintptr_t)(&v23));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v30 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v39, 4, &v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Text", (int)(uintptr_t)(&v23) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v40), v10, 1, 1, (int)(uintptr_t)(&v41), 3);
  g4_std::string::Destroy(&v40);
  if ( v30 != nullptr )
    G4_VCALL<void>(v30, 44);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "How many time the dialog stay displayed", (int)(uintptr_t)(&v24) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Time", (int)(uintptr_t)(&v23) + 3);
  v20 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v20, &v42, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Time", (int)(uintptr_t)(&v24));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v43), v20, 1, 0, (int)(uintptr_t)(&v44), 3);
  g4_std::string::Destroy(&v43);
  g4_std::string::Destroy(&v42);
  g4_std::string::Destroy(&v44);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "The single animation when talking", (int)(uintptr_t)(&v25));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "TalkAnimation", (int)(uintptr_t)(&v24) + 2);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v11 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v31 = v11;
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v45, 4, &v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Talk Animation", (int)(uintptr_t)(&v24) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v46), v12, 1, 1, (int)(uintptr_t)(&v47), 3);
  g4_std::string::Destroy(&v46);
  if ( v31 != nullptr )
    G4_VCALL<void>(v31, 44);
  g4_std::string::Destroy(&v45);
  g4_std::string::Destroy(&v47);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Pick one animation randomly from this list", (int)(uintptr_t)(&v25) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "TARandom", (int)(uintptr_t)(&v25) + 1);
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v48, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "T.Anim Random", (int)(uintptr_t)(&v25) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v49), v13, 1, 0, (int)(uintptr_t)(&v50), 3);
  g4_std::string::Destroy(&v49);
  g4_std::string::Destroy(&v48);
  g4_std::string::Destroy(&v50);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "The single animation when listening", (int)(uintptr_t)(&v26) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "ListenAnimation", (int)(uintptr_t)(&v26));
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v14 = v4;
  grapher::HolderT_string_e830be::From(v4, &unk_20D67EC);
  v32 = v14;
  v15 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v15, &v51, 4, &v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "Listen Animation", (int)(uintptr_t)(&v26) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v52), v15, 1, 1, (int)(uintptr_t)(&v53), 3);
  g4_std::string::Destroy(&v52);
  if ( v32 != nullptr )
    G4_VCALL<void>(v32, 44);
  g4_std::string::Destroy(&v51);
  g4_std::string::Destroy(&v53);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "Pick one animation randomly from this list", (int)(uintptr_t)(&v27) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "LARandom", (int)(uintptr_t)(&v26) + 3);
  v16 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v16, &v54, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "L.Anim Random", (int)(uintptr_t)(&v27));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 7, (int)(uintptr_t)(&v55), v16, 1, 0, (int)(uintptr_t)(&v56), 3);
  g4_std::string::Destroy(&v55);
  g4_std::string::Destroy(&v54);
  g4_std::string::Destroy(&v56);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "Type of dialog from dialogs_.xml", (int)(uintptr_t)(&v28) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "Dialog Type", (int)(uintptr_t)(&v27) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "Dialogs.SubtitleDialog", (int)(uintptr_t)(&v27) + 2);
  v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v5 = (uint32_t)(uintptr_t)(&off_205C408);
  v5[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v17 = v5;
  grapher::HolderT_string_e830be::From(v5, &v57);
  v33 = v17;
  v18 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v18, &v58, 11, &v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "Dialog Type", (int)(uintptr_t)(&v28));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 8, (int)(uintptr_t)(&v59), v18, 1, 1, (int)(uintptr_t)(&v60), 3);
  g4_std::string::Destroy(&v59);
  if ( v33 != nullptr )
    G4_VCALL<void>(v33, 44);
  g4_std::string::Destroy(&v57);
  g4_std::string::Destroy(&v58);
  g4_std::string::Destroy(&v60);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "What % of sound duration to leave after sound finished", (int)(uintptr_t)(v29));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "PercentAfterSound", (int)(uintptr_t)(&v28) + 2);
  v19 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v19, &v61, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "% After Sound", (int)(uintptr_t)(&v28) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v62), v19, 1, 0, (int)(uintptr_t)(&v63), 3);
  g4_std::string::Destroy(&v62);
  g4_std::string::Destroy(&v61);
  return ((g4_std::string::Destroy(&v63)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_843E30  (binary VA: 0x0)
// Original: sub_843E30
// ----------------------------------------------------------------------------
int sub_843E30(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int result;
  void *obj;

  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D5248 == 0 )
    v3 = (int *)(&dword_20D5240);
  result = sub_977870(v3, obj);
  if ( *(uint8_t *)(result + 74) != 0 )
  {
    G4_VCALL<void>(a1, 28, a3);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_843D70  (binary VA: 0x0)
// Original: sub_843D70
// ----------------------------------------------------------------------------
int sub_843D70(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int *v2;
  vox::EmitterHandle::Self *v3;
  void *obj;

  grapher::ActorBase::Cancel(a1, a2);
  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D5248 == 0 )
    v2 = (int *)(&dword_20D5240);
  v3 = (vox::EmitterHandle::Self *)sub_977870(v2, obj);
  return ((sub_99BC10(v3)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_847B80  (binary VA: 0x0)
// Original: sub_847B80
// ----------------------------------------------------------------------------
int sub_847B80(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *v8;
  grapher::ActorVariable::Self *v9;
  grapher::ActorVariable::Self *v10;
  grapher::ActorVariable::Self *v11;
  grapher::ActorVariable::Self *v12;
  grapher::ActorVariable::Self *v13;
  int v14;
  char *v15;
  int *v16;
  int v17;
  void *obj;
  int v20;
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
  grapher::ActorContext::Self *v81;
  grapher::ActorContext::Self *v82;
  grapher::ActorContext::Self *v83;
  grapher::ActorContext::Self *v84;
  grapher::ActorContext::Self *v85;
  grapher::ActorContext::Self *v86;
  grapher::ActorContext::Self *v87;
  grapher::ActorContext::Self *v88;
  grapher::ActorContext::Self *v89;
  grapher::ActorContext::Self *v90;
  uint8_t v91[5];
  int v92;
  int v93;
  int v94[8];

  G4_VCALL<void>(a1, 28, a3);
  v3 = sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 == 0 || (v5 = (int *)G4_VCALL<int>(v3, 16)) == nullptr )
  {
LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  while ( v5 != (int *)(uintptr_t)(&dword_20D75F0) )
  {
    v5 = (int *)v5[1];
    if ( v5 == nullptr )
      goto LABEL_7;
  }
LABEL_8:
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
  sub_837C70(&v91[1], (int)(uintptr_t)(a1), Variable, a3, v25, v33, v41, v49, v57, v65, v73);
  v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 6);
  sub_837C70(&v92, (int)(uintptr_t)(a1), v7, a3, v26, v34, v42, v50, v58, v66, v74);
  v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 5);
  v86 = sub_837200((int)(uintptr_t)(a1), v8, a3, v20, v27, v35, v43, v51, v59, v67, v75, v81);
  v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 7);
  v87 = sub_837200((int)(uintptr_t)(a1), v9, a3, v21, v28, v36, v44, v52, v60, v68, v76, v82);
  v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v88 = sub_837200((int)(uintptr_t)(a1), v10, a3, v22, v29, v37, v45, v53, v61, v69, v77, v83);
  v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  v89 = sub_837200((int)(uintptr_t)(a1), v11, a3, v23, v30, v38, v46, v54, v62, v70, v78, v84);
  v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  sub_837C70(&v93, (int)(uintptr_t)(a1), v12, a3, v31, v39, v47, v55, v63, v71, v79);
  v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 8);
  v90 = sub_837200((int)(uintptr_t)(a1), v13, a3, v24, v32, v40, v48, v56, v64, v72, v80, v85);
  if ( v4 != 0 )
  {
    v14 = sub_984520(v4);
    v15 = (char *)sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), v14);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v94), v15, (int)(uintptr_t)(v91));
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v16 = nullptr;
    if ( byte_20D5248 == 0 )
      v16 = (int *)(&dword_20D5240);
    v17 = sub_977870(v16, obj);
    if ( (uint8_t)sub_9FECE0(v17, v4, v94, &v93, v90, &v91[1], v86, &v92, v87, v88, v89) != 0 )
    {
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
    }
    g4_std::string::Destroy(v94);
  }
  else
  {
    grapher::ActorBase::FireEvent(a1, 2, a3);
  }
  grapher::ActorBase::FireEvent(a1, 1, a3);
  g4_std::string::Destroy(&v93);
  g4_std::string::Destroy(&v92);
  return ((g4_std::string::Destroy(&v91[1])), (int)0);
}


