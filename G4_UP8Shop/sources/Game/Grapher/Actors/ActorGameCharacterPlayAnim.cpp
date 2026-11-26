#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterPlayAnim.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterPlayAnim::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterPlayAnim::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterPlayAnim::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterPlayAnim::ActorGameCharacterPlayAnim(v3, -1);
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
    ActorGameCharacterPlayAnim::ActorGameCharacterPlayAnim(v3, a1);
  }
  return v3;
}



// Constructor (0xc665e0):
int (**ActorGameCharacterPlayAnim::ActorGameCharacterPlayAnim(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CF28);
  return (int (**)(int))(uintptr_t)(&off_206CF28);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterPlayAnim::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterPlayAnim::~ActorGameCharacterPlayAnim
// ----------------------------------------------------------------------------
void ActorGameCharacterPlayAnim::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CF28);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B410  (binary VA: 0x0)
// Original: sub_C5B410
// ----------------------------------------------------------------------------
void sub_C5B410(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CF28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C60230  (binary VA: 0x0)
// Original: sub_C60230
// ----------------------------------------------------------------------------
int sub_C60230(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  void *v5;
  void *v6;
  void *v7;
  uint32_t *v8;
  void *v9;
  uint32_t *v10;
  void *v11;
  uint32_t *v12;
  void *v13;
  void *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint8_t v21[20];
  uint32_t *v22;
  uint32_t *v23;
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
  int v48[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Play Anim", (int)(uintptr_t)(&v15));
  grapher::ActorBase::SetDisplayName(a1, &v24);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Characters", (int)(uintptr_t)(&v16));
  grapher::ActorBase::SetCategoryName(a1, &v25);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "In", (int)(uintptr_t)(&v21[2]));
  grapher::ActorBase::AddPin(a1, 0, &v47, 1, -1);
  g4_std::string::Destroy(&v47);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v48), "Out", (int)(uintptr_t)(&v21[3]));
  grapher::ActorBase::AddPin(a1, 1, v48, 0, -1);
  g4_std::string::Destroy(v48);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "List of characters who will play the animation", (int)(uintptr_t)(&v16) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Target", (int)(uintptr_t)(&v16) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v21[4] = (uint32_t)(uintptr_t)(v8);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v26, 9, &v21[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Target", (int)(uintptr_t)(&v16) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v27), v9, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  if ( *(uint32_t *)&v21[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v21[4] + 44))(*(uint32_t *)&v21[4]);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "The animation name to play", (int)(uintptr_t)(&v17) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Animation name", (int)(uintptr_t)(&v17));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v22 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v29, 4, &v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Animation", (int)(uintptr_t)(&v17) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v30), v11, 1, 1, (int)(uintptr_t)(&v31), 3);
  g4_std::string::Destroy(&v30);
  if ( v22 != nullptr )
    G4_VCALL<void>(v22, 44);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "The animation id to play", (int)(uintptr_t)(&v18) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Animation id", (int)(uintptr_t)(&v17) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v32, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Animation id", (int)(uintptr_t)(&v18));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v33), v5, 1, 0, (int)(uintptr_t)(&v34), 3);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Is the Animation picked randomly in the aniamtion list?", (int)(uintptr_t)(&v19));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Random", (int)(uintptr_t)(&v18) + 2);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v35, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Random", (int)(uintptr_t)(&v18) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v36), v6, 1, 0, (int)(uintptr_t)(&v37), 3);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v35);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Speed of the animation", (int)(uintptr_t)(&v19) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Speed", (int)(uintptr_t)(&v19) + 1);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v7), (int)(uintptr_t)(&v38), 2, 1.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Speed", (int)(uintptr_t)(&v19) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v39), v7, 1, 0, (int)(uintptr_t)(&v40), 3);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v38);
  g4_std::string::Destroy(&v40);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "The generic container for the animation", (int)(uintptr_t)(&v20) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Generic", (int)(uintptr_t)(&v20));
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v12 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v23 = v12;
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v41, 4, &v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Generic", (int)(uintptr_t)(&v20) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v42), v13, 1, 0, (int)(uintptr_t)(&v43), 3);
  g4_std::string::Destroy(&v42);
  if ( v23 != nullptr )
    G4_VCALL<void>(v23, 44);
  g4_std::string::Destroy(&v41);
  g4_std::string::Destroy(&v43);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "The transition time in ms.", (int)(uintptr_t)(&v21[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Transition", (int)(uintptr_t)(&v20) + 3);
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v44, 1, 500);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "Transition", (int)(uintptr_t)(v21));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v45), v14, 1, 0, (int)(uintptr_t)(&v46), 3);
  g4_std::string::Destroy(&v45);
  g4_std::string::Destroy(&v44);
  return ((g4_std::string::Destroy(&v46)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C6A920  (binary VA: 0x0)
// Original: sub_C6A920
// ----------------------------------------------------------------------------
void sub_C6A920(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  g4_cxa_guard_t **v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint8_t *v11;
  uint8_t *v12;
  grapher::HolderT<int> *v13;
  grapher::ActorContext::Self *v14;
  grapher::ActorVariable::Self *v15;
  int v16;
  void (***v17)(uint32_t, uint32_t);
  unsigned int v18;
  size_t v19;
  char *v20;
  int v21;
  grapher::DebugConstants::Self *v22;
  g4_cxa_guard_t **v23;
  int v24;
  void *v25;
  char *v26;
  unsigned int v27;
  grapher::ActorVariable::Self *Variable;
  int *v29;
  grapher::ActorVariable::Self *v30;
  int v31;
  grapher::ActorVariable::Self *v32;
  char *v33;
  char *v34;
  void **v35;
  void **v36;
  grapher::HolderT<int> *v37;
  int v38;
  int v39;
  int v40;
  unsigned int v41;
  grapher::HolderT<int> *v42;
  int v43;
  grapher::HolderT<int> *v44;
  int v45;
  unsigned int v46;
  int v47;
  char *v48;
  char *v49;
  grapher::ActorBase::Self *v50;
  int v51;
  int v52;
  float v53;
  grapher::ActorContext::Self *v54;
  grapher::DebugConstants::Self *v55;
  grapher::DebugConstants::Self *v56;
  grapher::DebugConstants::Self *v57;
  grapher::DebugConstants::Self *v58;
  grapher::DebugConstants::Self *v59;
  grapher::DebugConstants::Self *v60;
  grapher::DebugConstants::Self *v61;
  char *obj;
  uint8_t *obja;
  grapher::HolderT<int> *objb;
  void *objc;
  void *objd;
  void *obje;
  int *src;
  grapher::ActorBase::Self *v69;
  int v70;
  size_t n;
  int v72;
  void **v73;
  int *dest;
  unsigned int desta;
  grapher::ActorContext::Self *v76;
  g4_cxa_guard_t *v77;
  int v78;
  g4_cxa_guard_t *v79;
  int v80[4];
  char v81[4];
  char *nptr;
  int v83;
  int v84;
  uint32_t v85[2];
  char v86[4];
  char v87[4];
  int Constant;
  int v89;
  void *v90[2];
  char *v91;
  char *v92;
  char *v93;
  void *v94;
  int v95;
  int v96;
  grapher::ActorBase::Self **v97;

  v97 = &a1;
  v69 = a1;
  v76 = a3;
  v90[0] = v90;
  v90[1] = v90;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v90), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (uint32_t *)(v90[0]);
  v73 = (void **)v90[0];
  if ( v90[0] != v90 )
  {
    while ( 1 )
    {
      v4 = v3[2];
      v72 = v4;
      if ( v4 != 0
        && G4_VCALL<uint8_t>(v4, 208, v50, v52, v54) == 0 )
      {
        break;
      }
LABEL_63:
      v3 = (uint32_t *)(*v73);
      v73 = (void **)*v73;
      if ( v73 == v90 )
        goto LABEL_64;
    }
    v94 = nullptr;
    v95 = 0;
    v96 = 0;
    grapher::ActorBase::GetVariables(v69, 2, (int)(uintptr_t)(&v94));
    v5 = (uint32_t *)(v94);
    v70 = (v95 - (int)(uintptr_t)(v94)) >> 2;
    if ( v70 != 0 )
    {
      n = 0;
      v6 = nullptr;
      src = nullptr;
      v7 = 0;
      while ( 1 )
      {
        v14 = v76;
        v15 = (grapher::ActorVariable::Self *)v5[v7];
        if ( v76 == nullptr )
        {
          v14 = (grapher::ActorContext::Self *)&unk_20D6720;
          if ( byte_20D6700 == 0 )
          {
            v60 = (grapher::DebugConstants::Self *)v5[v7];
            v43 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
            v15 = (grapher::ActorVariable::Self *)(v60);
            v14 = (grapher::ActorContext::Self *)&unk_20D6720;
            if ( v43 != 0 )
            {
              grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
              __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
              v14 = (grapher::ActorContext::Self *)&unk_20D6720;
              v15 = (grapher::ActorVariable::Self *)(v60);
            }
          }
        }
        v55 = (grapher::DebugConstants::Self *)(v15);
        grapher::ActorContext::LoadAVar(v14, v15);
        if ( *((uint32_t *)v55 + 2) == 12 )
          break;
        if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v51) == 0
          && *((uint32_t *)v55 + 2) == 11 )
        {
          v38 = *((uint32_t *)v55 + 1);
          v39 = 0;
          if ( v38 != 0 )
            v39 = (*(int (**)(uint32_t))(*(uint32_t *)v38 + 48))(*((uint32_t *)v55 + 1));
          v91 = (char *)&dword_213B814;
          if ( v39 != 0 )
          {
            objd = (void *)v39;
            G4_VCALL<void>(v39, 32, &v91);
            G4_VCALL<void>(objd, 44);
          }
          v40 = sub_1938090((int)(uintptr_t)(&v91), ".", 0, 1u);
          if ( v40 == -1 )
          {
            v89 = -1;
            v44 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
            *(uint32_t *)v44 = (uint32_t)(uintptr_t)(&off_205C508);
            v61 = (grapher::DebugConstants::Self *)(v44);
            grapher::HolderT_int_id_fe4c74::From(v44, &v89);
            (**(void (***)(grapher::DebugConstants::Self *, uint32_t *))v61)(v61, v85);
            v77 = (g4_cxa_guard_t *)v85[0];
            G4_VCALL<void>(v61, 44);
          }
          else
          {
            v41 = *((uint32_t *)v91 - 3);
            if ( v41 < v40 + 1 )
LABEL_100:
              sub_1900210("basic_string::substr");
            obje = (void *)v40;
            sub_193A6F0(v87, &v91, v40 + 1, v41);
            sub_193A6F0(v86, &v91, 0, obje);
            if ( byte_20D6758 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6758) != 0 )
            {
              grapher::DebugConstants::DebugConstants((grapher::DebugConstants::Self *)&unk_20D6760);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6758);
              __cxa_atexit((void (*)(void *))grapher::DebugConstants::Destroy, &unk_20D6760, &unk_20D1280);
            }
            Constant = grapher::DebugConstants::GetConstant(&unk_20D6760, v86, v87);
            v42 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
            *(uint32_t *)v42 = (uint32_t)(uintptr_t)(&off_205C508);
            v59 = (grapher::DebugConstants::Self *)(v42);
            grapher::HolderT_int_id_fe4c74::From(v42, &Constant);
            (**(void (***)(grapher::DebugConstants::Self *, uint32_t *))v59)(v59, v85);
            v77 = (g4_cxa_guard_t *)v85[0];
            G4_VCALL<void>(v59, 44);
            g4_std::string::Destroy(v86);
            g4_std::string::Destroy(v87);
          }
          g4_std::string::Destroy(&v91);
LABEL_14:
          if ( (g4_cxa_guard_t **)n != v6 )
            goto LABEL_15;
LABEL_25:
          v18 = (int)(n - (uint32_t)(uintptr_t)(src)) >> 2;
          v19 = 4;
          if ( v18 != 0 )
          {
            if ( v18 > 2 * v18 || 2 * v18 > 0x3FFFFFFF )
              v19 = 0xFFFFFFFC;
            else
              v19 = 8 * v18;
          }
          v56 = (grapher::DebugConstants::Self *)v19;
          v20 = (char *)opNew(v19);
          v21 = (int)(n - (uint32_t)(uintptr_t)(src)) >> 2;
          dest = (int *)v20;
          v22 = v56;
          v23 = (g4_cxa_guard_t **)&v20[4 * v21];
          if ( v23 != nullptr )
            *v23 = v77;
          if ( v21 != 0 )
          {
            memmove(v20, src, 4 * v21);
            v22 = v56;
          }
          v6 = v23 + 1;
          if ( src != nullptr )
          {
            v57 = v22;
            opDelete(src);
            v22 = v57;
          }
          ++v7;
          src = dest;
          n = (size_t)v22 + (uint32_t)(uintptr_t)(dest);
          v5 = (uint32_t *)(v94);
          if ( v70 == v7 )
            goto LABEL_35;
        }
        else
        {
          v16 = *((uint32_t *)v55 + 1);
          if ( v16 == 0
            || (v17 = (void (***)(uint32_t, uint32_t))(*(int (**)(uint32_t))(*(uint32_t *)v16 + 48))(*((uint32_t *)v55 + 1))) == nullptr )
          {
            v77 = (g4_cxa_guard_t *)v85[0];
            goto LABEL_14;
          }
          objc = v17;
          (**v17)((uint32_t)(uintptr_t)(v17), (uint32_t)(uintptr_t)(v85));
          v77 = (g4_cxa_guard_t *)v85[0];
          G4_VCALL<void>(objc, 44);
          if ( (g4_cxa_guard_t **)n == v6 )
            goto LABEL_25;
LABEL_15:
          if ( v6 != nullptr )
            *v6 = v77;
          ++v6;
          ++v7;
          v5 = (uint32_t *)(v94);
          if ( v70 == v7 )
          {
LABEL_35:
            desta = ((char *)v6 - (char *)src) >> 2;
            goto LABEL_36;
          }
        }
      }
      v80[0] = (int)(uintptr_t)(&dword_213B814);
      v8 = *((uint32_t *)v55 + 1);
      if ( v8 != 0 )
        G4_VCALL<void>(v8, 32, v80);
      v9 = sub_1938090((int)(uintptr_t)(v80), "..", 0, 2u);
      if ( v9 == -1 )
      {
        v84 = 0;
        v37 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v37 = (uint32_t)(uintptr_t)(&off_205C508);
        v58 = (grapher::DebugConstants::Self *)(v37);
        grapher::HolderT_int_id_fe4c74::From(v37, &v84);
        (**(void (***)(grapher::DebugConstants::Self *, uint32_t *))v58)(v58, v85);
        v77 = (g4_cxa_guard_t *)v85[0];
        G4_VCALL<void>(v58, 44);
      }
      else
      {
        obj = (char *)v9;
        sub_193A6F0(&nptr, v80, 0, v9);
        if ( (unsigned int)(uintptr_t)(obj + 2) > *(uint32_t *)(v80[0] - 12) )
          goto LABEL_100;
        sub_193A6F0(&v91, v80, obj + 2, -1);
        obja = (uint8_t *)atoi(nptr);
        v10 = atoi(v91);
        v11 = obja;
        v12 = (uint8_t *)v10;
        if ( (int)(uintptr_t)(obja) > v10 )
        {
          v12 = obja;
          v11 = (uint8_t *)v10;
        }
        v83 = (int)(uintptr_t)(&v11[lrand48() % (v12 - v11 + 1)]);
        v13 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
        *(uint32_t *)v13 = (uint32_t)(uintptr_t)(&off_205C508);
        objb = v13;
        grapher::HolderT_int_id_fe4c74::From(v13, &v83);
        (**(void (***)(void *, uint32_t *))objb)(objb, v85);
        v77 = (g4_cxa_guard_t *)v85[0];
        G4_VCALL<void>(objb, 44);
        g4_std::string::Destroy(&v91);
        g4_std::string::Destroy(&nptr);
      }
      g4_std::string::Destroy(v80);
      goto LABEL_14;
    }
    desta = 0;
    src = nullptr;
LABEL_36:
    if ( v5 != nullptr )
      opDelete(v5);
    if ( desta == 1 && *src == -2 )
    {
      sub_9D6900(v72, 125);
LABEL_61:
      if ( src != nullptr )
        opDelete(src);
      goto LABEL_63;
    }
    v94 = nullptr;
    v95 = 0;
    v96 = 0;
    v91 = nullptr;
    v92 = nullptr;
    v93 = nullptr;
    v24 = 0;
    grapher::ActorBase::GetVariables(v69, 1, (int)(uintptr_t)(&v94));
    v25 = v94;
    v78 = (v95 - (int)(uintptr_t)(v94)) >> 2;
    if ( v78 != 0 )
    {
      do
      {
        sub_837C70(v81);
        if ( v92 == v93 )
        {
          g4_std::vector_string_86c307::M_insert_aux(&v91, v92, v81);
        }
        else
        {
          v26 = nullptr;
          if ( v92 != nullptr )
          {
            g4_std::string::construct_copy(v92, v81);
            v26 = v92;
          }
          v92 = v26 + 4;
        }
        ++v24;
        g4_std::string::Destroy(v81);
        v25 = v94;
      }
      while ( v78 != v24 );
    }
    if ( v25 != nullptr )
      opDelete(v25);
    v27 = 0;
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v69, 3);
    if ( (uint8_t)sub_837730(v69, Variable, v76) != 0 )
    {
      if ( *src < 0 )
      {
        v46 = lrand48();
        v29 = src;
        v27 = v46 % ((v92 - v91) >> 2);
        if ( *src >= 0 )
          goto LABEL_51;
        goto LABEL_94;
      }
      v27 = lrand48() % desta;
    }
    v29 = src;
    if ( *src >= 0 )
    {
LABEL_51:
      v79 = (g4_cxa_guard_t *)v29[v27];
LABEL_52:
      v52 = grapher::ActorBase::GetVariable(v69, 5);
      v54 = v76;
      v50 = v69;
      sub_837C70(&nptr);
      if ( *((uint32_t *)nptr - 3) != 0 )
      {
        v45 = sub_C6A190();
        sub_9FFF40(v72, v79, v45, 1, 1);
      }
      else if ( *(uint8_t *)(v72 + 2357) == 0
             || v79 != (g4_cxa_guard_t *)((char *)off_9C + 3) && v79 != (g4_cxa_guard_t *)((char *)off_9C + 1) )
      {
        if ( v79 == (g4_cxa_guard_t *)-1 )
        {
          v47 = sub_4EBDC0(0x35u);
          *(uint32_t *)(v47 + 4) = 40;
          *(uint32_t *)(v47 + 8) = 0;
          std::memcpy((void *)(v47 + 12), "[for Designer]: It looks like animation ", 40);
          if ( (void *)v47 != &unk_20D3E6C )
          {
            *(uint32_t *)(v47 + 8) = 0;
            *(uint32_t *)v47 = 40;
            *(uint8_t *)(v47 + 52) = 0;
          }
          v94 = (void *)(v47 + 12);
          g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v94,
            *(const char **)&v91[v27 * 4]);
          g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v94,
            "\nin module ");
          g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v94,
            *(const char **)(*((uint32_t *)v69 + 12) + 72));
          g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v94,
            "\nfrom graph ");
          g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v94,
            *(const char **)(*((uint32_t *)v69 + 12) + 92));
          g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v94,
            "\ndoes not exist! Please check spelling\n");
          v48 = (char *)v94 - 12;
          if ( (char *)v94 - 12 != (char *)&unk_20D3E6C
            && __sync_fetch_and_add((volatile int32_t *)v94 - 1, 0xFFFFFFFF) <= 0 )
          {
            gll_operator_delete_arr((int)(uintptr_t)(v48));
          }
        }
        v30 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v69, 6);
        v31 = (int)(uintptr_t)(sub_837200(v69, v30, v76));
        v32 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v69, 4);
        v53 = sub_838060(v69, v32, v76);
        sub_9D4450(v72, v79, LODWORD(v53), v31, 0, 0);
      }
      g4_std::string::Destroy(&nptr);
      v33 = v92;
      v34 = v91;
      if ( v92 != v91 )
      {
        do
        {
          v49 = v34;
          v34 += 4;
          g4_std::string::Destroy(v49);
        }
        while ( v33 != v34 );
        v34 = v91;
      }
      if ( v34 != nullptr )
        opDelete(v34);
      goto LABEL_61;
    }
LABEL_94:
    v79 = (g4_cxa_guard_t *)sub_C6A190();
    goto LABEL_52;
  }
LABEL_64:
  grapher::ActorBase::FireEvent(v69, 1, v76);
  v35 = (void **)v90[0];
  if ( v90[0] != v90 )
  {
    while ( 1 )
    {
      v36 = (void **)*v35;
      opDelete(v35);
      if ( v36 == v90 )
        break;
      v35 = v36;
    }
  }
}


