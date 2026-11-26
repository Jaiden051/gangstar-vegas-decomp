#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectMoveTo.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectMoveTo::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectMoveTo::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectMoveTo::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0xA0u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectMoveTo::Construct(v3, -1);
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
    v3 = gll_operator_new(0xA0u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameObjectMoveTo::Construct(v3, a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectMoveTo::Construct  (binary VA: 0x0)
// Original: ActorGameObjectMoveTo::ActorGameObjectMoveTo
// ----------------------------------------------------------------------------
int ActorGameObjectMoveTo::Construct(int a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF88);
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  *(uint32_t *)(a1 + 72) = 0;
  *(uint32_t *)(a1 + 76) = 0;
  *(uint32_t *)(a1 + 80) = 0;
  *(uint32_t *)(a1 + 84) = 0;
  *(uint32_t *)(a1 + 88) = 0;
  *(uint32_t *)(a1 + 92) = 0;
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 104) = 0;
  *(uint8_t *)(a1 + 108) = 1;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 1065353216;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = 1065353216;
  *(uint32_t *)(a1 + 156) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectMoveTo::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectMoveTo::~ActorGameObjectMoveTo
// ----------------------------------------------------------------------------
void ActorGameObjectMoveTo::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF88);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B9B0  (binary VA: 0x0)
// Original: sub_C2B9B0
// ----------------------------------------------------------------------------
void sub_C2B9B0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C33AC0  (binary VA: 0x0)
// Original: sub_C33AC0
// ----------------------------------------------------------------------------
int sub_C33AC0(grapher::ActorBase::Self *a1)
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
  uint32_t *v12;
  void *v13;
  uint32_t *v14;
  void *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint8_t v21[20];
  uint32_t *v22;
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
  int v47[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Move To", (int)(uintptr_t)(&v16));
  grapher::ActorBase::SetDisplayName(a1, &v25);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Objects", (int)(uintptr_t)(&v16) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v26);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "In", (int)(uintptr_t)(&v21[1]));
  grapher::ActorBase::AddPin(a1, 0, &v45, 1, -1);
  g4_std::string::Destroy(&v45);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Out", (int)(uintptr_t)(&v21[2]));
  grapher::ActorBase::AddPin(a1, 1, &v46, 0, -1);
  g4_std::string::Destroy(&v46);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v47), "Reached", (int)(uintptr_t)(&v21[3]));
  grapher::ActorBase::AddPin(a1, 2, v47, 0, -1);
  g4_std::string::Destroy(v47);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Object to teleport", (int)(uintptr_t)(&v17) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Object", (int)(uintptr_t)(&v16) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v21[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v27, 9, &v21[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Object", (int)(uintptr_t)(&v17));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v28), v7, 1, 1, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  if ( *(uint32_t *)&v21[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v21[4] + 44))(*(uint32_t *)&v21[4]);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Destination the object should move to", (int)(uintptr_t)(&v18));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Destination", (int)(uintptr_t)(&v17) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v22 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v30, 9, &v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Destination", (int)(uintptr_t)(&v17) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v31), v9, 1, 1, (int)(uintptr_t)(&v32), 3);
  g4_std::string::Destroy(&v31);
  if ( v22 != nullptr )
    G4_VCALL<void>(v22, 44);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Time to do the interpolation in ms or speed in m/s (if Use Speed = True)", (int)(uintptr_t)(&v18) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Time/Speed", (int)(uintptr_t)(&v18) + 1);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v33, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Time/Speed", (int)(uintptr_t)(&v18) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v34), v10, 1, 1, (int)(uintptr_t)(&v35), 3);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Use speed instead of time in Time/Speed parameter", (int)(uintptr_t)(&v19) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Use Speed", (int)(uintptr_t)(&v19));
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v36, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Use Speed", (int)(uintptr_t)(&v19) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v37), v11, 1, 1, (int)(uintptr_t)(&v38), 3);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Target the object should orient towards", (int)(uintptr_t)(&v20) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Look At", (int)(uintptr_t)(&v19) + 3);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v12 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v23 = v12;
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v39, 9, &v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Look At", (int)(uintptr_t)(&v20));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v40), v13, 1, 0, (int)(uintptr_t)(&v41), 3);
  g4_std::string::Destroy(&v40);
  if ( v23 != nullptr )
    G4_VCALL<void>(v23, 44);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Time to do the orientation interpolation", (int)(uintptr_t)(v21));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Look At Time", (int)(uintptr_t)(&v20) + 2);
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v14 = v4;
  grapher::HolderT_string_e830be::From(v4, &unk_20D67EC);
  v24 = v14;
  v15 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v15, &v42, 9, &v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Look At Time", (int)(uintptr_t)(&v20) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v43), v15, 1, 0, (int)(uintptr_t)(&v44), 3);
  g4_std::string::Destroy(&v43);
  if ( v24 != nullptr )
    G4_VCALL<void>(v24, 44);
  g4_std::string::Destroy(&v42);
  return ((g4_std::string::Destroy(&v44)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C3A130  (binary VA: 0x0)
// Original: sub_C3A130
// ----------------------------------------------------------------------------
grapher::ActorContext::Self * sub_C3A130(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  grapher::ActorContext::Self *result;
  grapher::ActorVariable::Self *v5;
  int v6;
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm6_4
  grapher::ActorVariable::Self *Variable;
  float v13; // xmm0_4
  float v14; // xmm0_4
  grapher::ActorVariable::Self *v15;
  grapher::ActorContext::Self *v16;
  __m128 v17;
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm2_4
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  grapher::ActorContext::Self *v37;
  float v38;
  int v39;
  int v40;
  float v41;
  grapher::ActorContext::Self *v42;
  int v43;
  __m128 v44;

  v42 = (grapher::ActorContext::Self *)sub_857260(a1, 1, (int)(uintptr_t)(a3));
  v43 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v3 = sub_857260(a1, 4, (int)(uintptr_t)(a3));
  if ( v42 != nullptr && v43 != 0 )
  {
    v6 = *((uint32_t *)a1 + 26);
    v7 = (float)a2;
    switch ( v6 )
    {
      case 1:
        v8 = *((float *)a1 + 28);
        if ( v8 > 0.0 )
        {
          v11 = (float)(v7 / v8) + *((float *)a1 + 25);
          *((float *)a1 + 25) = v11;
          goto LABEL_35;
        }
LABEL_42:
        v11 = *((float *)a1 + 25);
        goto LABEL_35;
      case 2:
        v19 = *((float *)a1 + 28);
        v20 = 0.0;
        if ( v19 <= 0.0 )
        {
          v11 = *((float *)a1 + 25);
        }
        else
        {
          v11 = (float)(v7 / v19) + *((float *)a1 + 25);
          *((float *)a1 + 25) = v11;
        }
        if ( v11 <= 1.0 && v19 > 0.0 )
          goto LABEL_44;
        break;
      case 3:
        v28 = *((float *)a1 + 28);
        v20 = 0.0;
        if ( *((uint8_t *)a1 + 108) != 0 )
        {
          if ( v28 <= 0.0 )
          {
            v11 = *((float *)a1 + 25);
          }
          else
          {
            v11 = (float)(v7 / v28) + *((float *)a1 + 25);
            *((float *)a1 + 25) = v11;
          }
          if ( v11 <= 1.0 && v28 > 0.0 )
            goto LABEL_44;
          *((uint8_t *)a1 + 108) = 0;
LABEL_36:
          v22 = *((float *)a1 + 13);
          *((uint32_t *)a1 + 25) = 1065353216;
          v24 = *((float *)a1 + 14);
          v23 = *((float *)a1 + 16) - v22;
          v25 = *((float *)a1 + 15);
          v21 = *((float *)a1 + 17) - v24;
          v20 = *((float *)a1 + 18) - v25;
          goto LABEL_32;
        }
        if ( v28 <= 0.0 )
        {
          v11 = *((float *)a1 + 25);
        }
        else
        {
          v11 = *((float *)a1 + 25) - (float)(v7 / v28);
          *((float *)a1 + 25) = v11;
        }
        if ( v11 >= 0.0 && v28 > 0.0 )
          goto LABEL_44;
        *((uint8_t *)a1 + 108) = 1;
        break;
      case 4:
        v8 = *((float *)a1 + 28);
        if ( v8 > 0.0 )
        {
          v9 = *((float *)a1 + 25);
          if ( v9 >= *((float *)a1 + 29) )
            v10 = v7 / (float)(*((float *)a1 + 30) * v8);
          else
            v10 = v7 / v8;
          v11 = v10 + v9;
          *((float *)a1 + 25) = v10 + v9;
LABEL_35:
          if ( v11 <= 1.0 && v8 > 0.0 )
          {
LABEL_44:
            v22 = *((float *)a1 + 13);
            v24 = *((float *)a1 + 14);
            v25 = *((float *)a1 + 15);
            v23 = (float)(*((float *)a1 + 16) - v22) * v11;
            v21 = (float)(*((float *)a1 + 17) - v24) * v11;
            v20 = (float)(*((float *)a1 + 18) - v25) * v11;
            goto LABEL_32;
          }
          goto LABEL_36;
        }
        goto LABEL_42;
      default:
LABEL_27:
        v40 = v3;
        G4_VCALL<void>(v43, 308, (char *)a1 + 76);
        v3 = v40;
        goto LABEL_3;
    }
    *((uint32_t *)a1 + 25) = 0;
    v21 = 0.0;
    v22 = *((float *)a1 + 13);
    v23 = 0.0;
    v24 = *((float *)a1 + 14);
    v25 = *((float *)a1 + 15);
LABEL_32:
    v26 = (float)(v20 + v25) + *((float *)a1 + 24);
    v27 = (float)(v23 + v22) + *((float *)a1 + 22);
    *((float *)a1 + 20) = (float)(v21 + v24) + *((float *)a1 + 23);
    *((float *)a1 + 21) = v26;
    *((float *)a1 + 19) = v27;
    goto LABEL_27;
  }
LABEL_3:
  if ( v3 != 0 && v43 != 0 )
  {
    v39 = v3;
    v41 = *((float *)a1 + 39);
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 5);
    v13 = (float)(int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a1), Variable, a3, v29, v30, v31, v32, v33, v34, v35, v36, v37));
    v3 = v39;
    if ( v13 > v41 )
    {
      v14 = (float)a2 + *((float *)a1 + 39);
g4_m128_lane<uint64_t>(v44, 0) = 0;
      *((float *)a1 + 39) = v14;
g4_m128_lane<uint64_t>(v44, 1) = 0x3F80000000000000LL;
      v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 5);
      v16 = sub_837200((int)(uintptr_t)(a1), v15, a3, v29, v30, v31, v32, v33, v34, v35, v36, v37);
      sub_A04410(
        (int)(uintptr_t)(&v44),
        *((float *)a1 + 31),
        *((float *)a1 + 32),
        *((float *)a1 + 33),
        *((float *)a1 + 34),
        *((float *)a1 + 35),
        *((float *)a1 + 36),
        *((float *)a1 + 37),
        *((float *)a1 + 38),
        fminf(fmaxf(v14 / (float)(int)(uintptr_t)(v16), 0.0), 1.0));
g4_m128_raw(v17) =g4_m128_lane<uint32_t>(v44, 1);
g4_m128_lane<float>(v17, 0) = (float)((float)((float)(g4_m128_lane<float>(v17, 0) *g4_m128_lane<float>(v17, 0))
                                      + (float)(g4_m128_lane<float>(v44, 0) *g4_m128_lane<float>(v44, 0)))
                              + (float)(g4_m128_lane<float>(v44, 2) *g4_m128_lane<float>(v44, 2)))
                      + (float)(g4_m128_lane<float>(v44, 3) *g4_m128_lane<float>(v44, 3));
      if (g4_m128_lane<float>(v17, 0) != 0.0 )
      {
        v18 = 1.0 / fsqrt(g4_m128_lane<float>(v17, 0));
g4_m128_lane<float>(v17, 0) = (float)((float)((float)(g4_m128_lane<float>(v17, 0) * v18) * v18) + -3.0) * (float)(v18 * -0.5);
        v44 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v44);
      }
      G4_VCALL<void>(v43, 316, &v44);
      v3 = v39;
    }
  }
  result = v42;
  if ( v42 == nullptr || *((uint32_t *)a1 + 26) == 0 )
  {
    if ( v3 != 0 )
      goto LABEL_7;
    goto LABEL_8;
  }
  if ( *((float *)a1 + 25) >= 1.0 )
  {
    if ( v3 != 0 )
    {
LABEL_7:
      v38 = *((float *)a1 + 39);
      v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 5);
      result = sub_837200((int)(uintptr_t)(a1), v5, a3, v29, v30, v31, v32, v33, v34, v35, v36, v37);
      if ( v38 < (float)(int)(uintptr_t)(result) )
        return result;
    }
LABEL_8:
    G4_VCALL<void>(a1, 28, a3);
    return (grapher::ActorContext::Self *)grapher::ActorBase::FireEvent(a1, 2, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C3A700  (binary VA: 0x0)
// Original: sub_C3A700
// ----------------------------------------------------------------------------
int sub_C3A700(int a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  grapher::ActorContext::Self *v4;
  int v5;
  void *v6;
  int v7;
  uint32_t *v9;
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm2_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v32;
  int v33;
  float v34; // xmm3_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm5_4
  float v38; // xmm0_4
  float v39; // xmm4_4
  float v40; // xmm6_4
  float v41; // xmm5_4
  float v42; // xmm3_4
  float *v43;
  float v44; // xmm6_4
  float v45; // xmm5_4
  float v46; // xmm3_4
  float v47; // xmm4_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm2_4
  float v51; // xmm6_4
  float v52; // xmm3_4
  float v53; // xmm4_4
  float v54; // xmm3_4
  int v55;
  int v56;
  float v57;
  void *obj;
  void *obja;
  int v60;
  int v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  g4_cxa_guard_t *v67;
  float v68;
  float v69;
  int v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77[3];
  float v78[9];

  LODWORD(v78[5]) = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v4 = a3;
  obj = (void *)sub_857260(a1, 0, a3);
  v67 = (g4_cxa_guard_t *)sub_857260(v3, 1, v4);
  v5 = sub_857260(v3, 4, v4);
  v6 = obj;
  v7 = v5;
  if ( obj != nullptr && v67 != nullptr )
  {
    v61 = v5;
    (*(void (**)(float *))(*(uint32_t *)obj + 52))(&v71);
    (*(void (**)(float *))(*v67 + 52))(&v74);
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v3, 2);
    v70 = (int)(uintptr_t)(sub_837200(v3, Variable, v4));
    v32 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable((grapher::ActorBase::Self *)v3, 3);
    v33 = (int)(uintptr_t)(sub_837200(v3, v32, v4));
    v6 = obj;
    v34 = v71;
    v7 = v61;
    v35 = v72;
    v36 = v73;
    v37 = v74;
    if ( v33 != 0 )
    {
      v39 = v75;
      v38 = v76;
      v70 = (int)(float)((float)((float)(1.0 / (float)v70) * 1000.0)
                       * fsqrt(
                           (float)((float)((float)(v72 - v75) * (float)(v72 - v75))
                                 + (float)((float)(v71 - v74) * (float)(v71 - v74)))
                         + (float)((float)(v73 - v76) * (float)(v73 - v76))));
    }
    else
    {
      v38 = v76;
      v39 = v75;
    }
    *(float *)(v3 + 72) = v38;
    *(uint32_t *)(v3 + 100) = 0;
    *(float *)(v3 + 52) = v34;
    *(uint32_t *)(v3 + 104) = 1;
    *(float *)(v3 + 56) = v35;
    *(uint8_t *)(v3 + 108) = 1;
    *(float *)(v3 + 60) = v36;
    *(uint32_t *)(v3 + 88) = 0;
    *(float *)(v3 + 76) = v34;
    *(uint32_t *)(v3 + 92) = 0;
    *(float *)(v3 + 80) = v35;
    *(uint32_t *)(v3 + 96) = 0;
    *(float *)(v3 + 84) = v36;
    *(uint32_t *)(v3 + 116) = 0;
    *(float *)(v3 + 64) = v37;
    *(uint32_t *)(v3 + 120) = 1065353216;
    *(float *)(v3 + 68) = v39;
    *(float *)(v3 + 112) = (float)v70;
  }
  if ( v7 != 0 && obj != nullptr )
  {
    v60 = v7;
    obja = v6;
    v9 = (uint32_t *)G4_VCALL<int>(v6, 56, v55, v56);
    *(uint32_t *)(v3 + 124) = *v9;
    *(uint32_t *)(v3 + 128) = v9[1];
    *(uint32_t *)(v3 + 132) = v9[2];
    *(uint32_t *)(v3 + 136) = v9[3];
    (*(void (**)(float *, void *))(*(uint32_t *)obja + 296))(&v74, obja);
    v76 = 0.0;
    v10 = (float)(v75 * v75) + (float)(v74 * v74);
    if ( v10 != 0.0 )
    {
      v11 = 1.0 / fsqrt(v10);
      v12 = (float)((float)((float)(v10 * v11) * v11) + -3.0) * (float)(v11 * -0.5);
      v74 = v74 * v12;
      v75 = v12 * v75;
    }
    (*(void (**)(float *, void *))(*(uint32_t *)obja + 52))(v78, obja);
    (*(void (**)(float *, int))(*(uint32_t *)v60 + 52))(v77, v60);
    v13 = v77[0] - v78[0];
    v14 = v77[1] - v78[1];
    v15 = (float)(v14 * v14) + (float)(v13 * v13);
    if ( v15 != 0.0 )
    {
      v16 = fsqrt(v15);
      v17 = (float)((float)((float)(v15 * (float)(1.0 / v16)) * (float)(1.0 / v16)) + -3.0)
          * (float)((float)(1.0 / v16) * -0.5);
      v14 = v14 * v17;
      v13 = v13 * v17;
      v15 = (float)(v13 * v13) + (float)(v14 * v14);
    }
    v18 = v76;
    v19 = v75;
    v65 = v18 * v18;
    v20 = (float)((float)(v74 * v74) + (float)(v19 * v19)) + (float)(v18 * v18);
    if ( v20 == 0.0 )
    {
      v68 = v76;
      v62 = v75;
      v57 = v74;
    }
    else
    {
      v21 = fsqrt(v20);
      v22 = (float)((float)((float)(v20 * (float)(1.0 / v21)) * (float)(1.0 / v21)) + -3.0)
          * (float)((float)(1.0 / v21) * -0.5);
      v57 = v74 * v22;
      v62 = v75 * v22;
      v68 = v22 * v76;
    }
    if ( v15 != 0.0 )
    {
      v23 = 1.0 / fsqrt(v15);
      v24 = (float)((float)((float)(v15 * v23) * v23) + -3.0) * (float)(v23 * -0.5);
      v13 = v13 * v24;
      v14 = v14 * v24;
    }
    v25 = (float)(v62 * v14) + (float)(v57 * v13);
    if ( v25 >= 0.999999f )
    {
      v64 = 0.0;
      v63 = 1.0;
      v69 = 0.0;
      v66 = 0.0;
    }
    else if ( v25 > -0.999999f )
    {
      v40 = v68 * v14;
      v41 = fsqrt((float)(v25 + 1.0) + (float)(v25 + 1.0));
      v42 = (float)(v14 * v57) - (float)(v13 * v62);
      v63 = v41 * 0.5;
      v66 = (float)-v40 * (float)(1.0 / v41);
      v69 = (float)(v68 * v13) * (float)(1.0 / v41);
      v64 = (float)(1.0 / v41) * v42;
    }
    else
    {
      v26 = -v76;
      v27 = (float)(v26 * v26) + (float)(v75 * v75);
      if ( fabs(v27) > 0.000001f )
      {
        v65 = 0.0;
        v18 = 0.0;
      }
      else
      {
        v19 = -v74;
        v27 = v19 * v19;
        v26 = 0.0;
      }
      v28 = v27 + v65;
      if ( v28 != 0.0 )
      {
        v29 = 1.0 / fsqrt(v28);
        v30 = (float)((float)((float)(v28 * v29) * v29) + -3.0) * (float)(v29 * -0.5);
        v18 = v18 * v30;
        v26 = v26 * v30;
        v19 = v19 * v30;
      }
      v64 = v19;
      v69 = v26;
      v66 = v18;
      v63 = -0.00000004371139f;
    }
    v43 = (float *)G4_VCALL<int>(obja, 56);
    v44 = v43[3];
    v45 = *v43;
    v46 = v43[1];
    v47 = v43[2];
    v48 = (float)((float)((float)(v63 * v44) - (float)(v66 * *v43)) - (float)(v69 * v46)) - (float)(v64 * v47);
    *(float *)(v3 + 152) = v48;
    v49 = (float)((float)((float)(v64 * v44) + (float)(v63 * v47)) + (float)(v66 * v46)) - (float)(v69 * v45);
    *(float *)(v3 + 148) = v49;
    v50 = (float)((float)((float)(v69 * v44) + (float)(v63 * v46)) + (float)(v64 * v45)) - (float)(v66 * v47);
    *(float *)(v3 + 144) = v50;
    v51 = (float)((float)((float)(v44 * v66) + (float)(v45 * v63)) + (float)(v47 * v69)) - (float)(v46 * v64);
    *(float *)(v3 + 140) = v51;
    v52 = (float)((float)((float)(v50 * v50) + (float)(v51 * v51)) + (float)(v49 * v49)) + (float)(v48 * v48);
    if ( v52 != 0.0 )
    {
      v53 = 1.0 / fsqrt(v52);
      v54 = (float)((float)((float)(v52 * v53) * v53) + -3.0) * (float)(v53 * -0.5);
      *(float *)(v3 + 140) = v51 * v54;
      *(float *)(v3 + 144) = v50 * v54;
      *(float *)(v3 + 148) = v49 * v54;
      *(float *)(v3 + 152) = v54 * v48;
    }
    *(uint32_t *)(v3 + 156) = 0;
  }
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, (grapher::ActorBase::Self *)v3, v4);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent((grapher::ActorBase::Self *)v3, 1, v4));
}


