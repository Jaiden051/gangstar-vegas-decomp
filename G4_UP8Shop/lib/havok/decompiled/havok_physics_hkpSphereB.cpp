#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSphereB.h"

// ----------------------------------------------------------------------------
// Function: hkpSphereBoxAgent::cleanup  (binary VA: 0x16a1180)
// Original: hkpSphereBoxAgent::cleanup
// ----------------------------------------------------------------------------
int hkpSphereBoxAgent::cleanup(hkpSphereBoxAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  int v2;

  v2 = *((uint16_t *)self + 6);
  if ( (uint16_t)v2 != 0xFFFF )
    (*(void (**)(uint32_t, int, hkpConstraintOwner::Self *))(**((uint32_t **)self + 2) + 28))(
      *((uint32_t *)self + 2),
      v2,
      a2);
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereBoxAgent::Destroy  (binary VA: 0x16a11c0)
// Original: hkpSphereBoxAgent::~hkpSphereBoxAgent
// ----------------------------------------------------------------------------
void hkpSphereBoxAgent::Destroy(hkpSphereBoxAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereBoxAgent::Destroy_ea16a1390  (binary VA: 0x16a1390)
// Original: hkpSphereBoxAgent::~hkpSphereBoxAgent
// ----------------------------------------------------------------------------
void hkpSphereBoxAgent::Destroy_ea16a1390(hkpSphereBoxAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereBoxAgent::createSphereBoxAgent  (binary VA: 0x16a13f0)
// Original: hkpSphereBoxAgent::createSphereBoxAgent
// ----------------------------------------------------------------------------
int hkpSphereBoxAgent::createSphereBoxAgent(int a1, int a2, int a3, int a4)
{
  int address;
  int result;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             16);
  *(uint32_t *)(result + 4) = -65535;
  *(uint32_t *)(result + 8) = a4;
  *(uint16_t *)(result + 12) = -1;
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_2099F28);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereBoxAgent::createBoxSphereAgent  (binary VA: 0x16a1450)
// Original: hkpSphereBoxAgent::createBoxSphereAgent
// ----------------------------------------------------------------------------
int hkpSphereBoxAgent::createBoxSphereAgent(int a1, int a2, int a3, int a4)
{
  int address;
  int result;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             16);
  *(uint32_t *)(result + 4) = -65535;
  *(uint32_t *)(result + 8) = a4;
  *(uint16_t *)(result + 12) = -1;
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_2099EC8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereBoxAgent::processCollision  (binary VA: 0x16a14b0)
// Original: hkpSphereBoxAgent::processCollision
// ----------------------------------------------------------------------------
int hkpSphereBoxAgent::processCollision(int a1, uint32_t *a2, uint32_t *a3, int a4, int *a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  int v10;
  __m128 v11;
  float *v12;
  float v13; // xmm1_4
  float v14; // xmm0_4
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  __m128 v19;
  float v20; // xmm1_4
  float v21; // xmm0_4
  char v22; // si
  __m128 v23;
  __m128 v24;
  int v25;
  __m128 v26;
  float v27; // xmm4_4
  __m128 v28;
  float v29; // xmm2_4
  unsigned int *v30;
  __m128 v31;
  __m128 v32;
  __m128 v33;
  g4_int128_t v34;
  float v35; // xmm4_4
  float v36; // xmm3_4
  float v37; // xmm6_4
  float v38; // xmm4_4
  uint16_t v39;
  uint64_t v40; // rax
  int v41;
  uint32_t *v42;
  int v43; // xmm2_4
  float v44; // xmm1_4
  int v45;
  float v46; // xmm2_4
  float v47; // xmm5_4
  float v48; // xmm0_4
  float v49; // xmm5_4
  float v50; // xmm6_4
  float v51; // xmm0_4
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  int v63;
  float v64;
  int *v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v65 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtSphereBox");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = *a5;
  v10 = a2[2];
g4_m128_raw(v11) = *(unsigned int *)(v10 + 48);
  v12 = (float *)a3[2];
  v61 = *v12;
g4_m128_raw(v15) = *(unsigned int *)v12;
g4_m128_lane<float>(v11, 0) =g4_m128_lane<float>(v11, 0) - v12[12];
  v13 = *(float *)(v10 + 52) - v12[13];
  v14 = *(float *)(v10 + 56) - v12[14];
  v60 = v12[1];
  v59 = v12[2];
g4_m128_raw(v16) = *((unsigned int *)v12 + 4);
  v58 = v12[4];
g4_m128_lane<float>(v15, 0) = (float)((float)(*v12 *g4_m128_lane<float>(v11, 0)) + (float)(v60 * v13)) + (float)(v59 * v14);
  v57 = v12[5];
  v56 = v12[6];
  v55 = v12[8];
  v18 = v11;
  v54 = v12[9];
g4_m128_lane<float>(v16, 0) = (float)((float)(g4_m128_lane<float>(v16, 0) *g4_m128_lane<float>(v11, 0)) + (float)(v57 * v13)) + (float)(v56 * v14);
  v53 = v12[10];
  v63 = *a2;
  v17 = _mm_and_ps(v15, g4_m128_u32(0x7FFFFFFFu));
g4_m128_lane<float>(v18, 0) = (float)((float)(g4_m128_lane<float>(v11, 0) * v55) + (float)(v13 * v54)) + (float)(v14 * v53);
  v62 = *(float *)(*a3 + 32);
  v19 = _mm_and_ps(v16, g4_m128_u32(0x7FFFFFFFu));
  v20 = fabs(g4_m128_lane<float>(v18, 0));
  v68 = *(float *)(*a3 + 36);
  v66 = fminf(g4_m128_lane<float>(v17, 0), v62) -g4_m128_lane<float>(v17, 0);
  v67 = *(float *)(*a3 + 40);
  v70 = fminf(g4_m128_lane<float>(v19, 0), v68) -g4_m128_lane<float>(v19, 0);
  v69 = fminf(v20, v67) - v20;
  v64 = *(float *)(*a2 + 16) + *(float *)(*a3 + 16);
  v21 = 0.0;
  v22 = 4 * (v69 < 0.0);
  if ( (float)(fminf(v20, *(float *)(*a3 + 44)) - v20) < 0.0 )
    v22 = 4 * (v69 < 0.0) + 8;
  if ( (v22 & 7 | (uint8_t)((v66 < 0.0) | (2 * (v70 < 0.0)))) == 0 )
  {
g4_m128_lane<float>(v17, 0) =g4_m128_lane<float>(v17, 0) - v62;
g4_m128_lane<float>(v19, 0) =g4_m128_lane<float>(v19, 0) - v68;
g4_m128_lane<float>(v23, 0) = v20 - v67;
    if (g4_m128_lane<float>(v19, 0) >=g4_m128_lane<float>(v17, 0) )
    {
      v24 = v16;
      v26 = v19;
      v25 = 4;
    }
    else
    {
      v24 = v15;
      v25 = 0;
      v26 = v17;
    }
    v27 = fmaxf(g4_m128_lane<float>(v17, 0),g4_m128_lane<float>(v19, 0));
    v28 = _mm_cmpgt_ss(v26, v23);
    LODWORD(v29) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v28, v18), 0) | _mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_and_ps(v24, v28)));
    if (g4_m128_lane<float>(v23, 0) >=g4_m128_lane<float>(v26, 0) )
      v25 = 8;
g4_m128_lane<float>(v17, 0) = fmaxf(v27,g4_m128_lane<float>(v23, 0)) - v64;
    v30 = (unsigned int *)&v12[v25];
    if ( v29 < 0.0 )
    {
      v31 = _mm_xor_ps(g4_m128_u32(*v30), g4_m128_from<__m128>(0x80000000));
      v32 = _mm_xor_ps(G4_BITCAST<__m128>(v30[1]), g4_m128_from<__m128>(0x80000000));
      v33 = _mm_xor_ps(G4_BITCAST<__m128>(v30[2]), g4_m128_from<__m128>(0x80000000));
    }
    else
    {
g4_m128_raw(v31) = *v30;
g4_m128_raw(v32) = v30[1];
g4_m128_raw(v33) = v30[2];
    }
    *(uint64_t *)&v34 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v31, v32), 0);
    *((uint64_t *)&v34 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v33, v17), 0);
    *(g4_int128_t *)(v9 + 16) = v34;
LABEL_13:
    v35 = (float)-g4_m128_lane<float>(v17, 0) - *(float *)(v63 + 16);
    v36 = (float)(g4_m128_lane<float>(v32, 0) * v35) + *(float *)(v10 + 52);
    v37 = (float)(g4_m128_lane<float>(v33, 0) * v35) + *(float *)(v10 + 56);
    v38 = (float)(v35 *g4_m128_lane<float>(v31, 0)) + *(float *)(v10 + 48);
    *(uint32_t *)(v9 + 12) = 1065353216;
    *(float *)(v9 + 4) = v36;
    *(float *)(v9 + 8) = v37;
    *(float *)v9 = v38;
    v39 = *(uint16_t *)(a1 + 12);
    if ( v39 != 0xFFFF
      || (v39 = (*(int (**)(uint32_t, uint32_t *, uint32_t *, int, int *, uint32_t, int))(**(uint32_t **)(a1 + 8) + 20))(
                  *(uint32_t *)(a1 + 8),
                  a2,
                  a3,
                  a4,
                  a5,
                  0,
                  v9),
          *(uint16_t *)(a1 + 12) = v39,
          v39 != 0xFFFF) )
    {
      *(uint32_t *)(v9 + 32) = v39;
      *a5 += 48;
    }
    goto LABEL_15;
  }
g4_m128_raw(v17) = LODWORD(v66);
g4_m128_lane<float>(v17, 0) = (float)((float)(g4_m128_lane<float>(v17, 0) *g4_m128_lane<float>(v17, 0)) + (float)(v70 * v70)) + (float)(v69 * v69);
  if (g4_m128_lane<float>(v17, 0) > 0.0 )
  {
    v43 = ((_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v17))) + 2139095040) >> 31)
        & (1597463174 - (_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v17))) >> 1));
    v44 = (float)(*(float *)&v43 * 1.5)
        - (float)((float)((float)(0.5 *g4_m128_lane<float>(v17, 0)) * *(float *)&v43) * (float)(*(float *)&v43 * *(float *)&v43));
    v21 = (float)(1.5
                * (float)((float)(v44 * 1.5)
                        - (float)((float)((float)(0.5 *g4_m128_lane<float>(v17, 0)) * v44) * (float)(v44 * v44))))
        - (float)((float)((float)(0.5 *g4_m128_lane<float>(v17, 0))
                        * (float)((float)(v44 * 1.5)
                                - (float)((float)((float)(0.5 *g4_m128_lane<float>(v17, 0)) * v44) * (float)(v44 * v44))))
                * (float)((float)((float)(v44 * 1.5)
                                - (float)((float)((float)(0.5 *g4_m128_lane<float>(v17, 0)) * v44) * (float)(v44 * v44)))
                        * (float)((float)(v44 * 1.5)
                                - (float)((float)((float)(0.5 *g4_m128_lane<float>(v17, 0)) * v44) * (float)(v44 * v44)))));
  }
g4_m128_lane<float>(v17, 0) = (float)(g4_m128_lane<float>(v17, 0) * v21) - v64;
  if (g4_m128_lane<float>(v17, 0) <= *(float *)(a4 + 12) )
  {
    v46 = v66 * v21;
    if ( _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v15))) < 0 )
      v46 = -v46;
    v47 = v70 * v21;
    if ( _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v16))) < 0 )
      v47 = -v47;
    v48 = v21 * v69;
    if ( _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v18))) < 0 )
      v48 = -v48;
    v49 = -v47;
    v50 = -v46;
    v51 = -v48;
    *(uint32_t *)(v9 + 28) =g4_m128_lane<int32_t>(v17, 0);
g4_m128_lane<float>(v31, 0) = (float)((float)(v61 * (float)-v46) + (float)(v58 * v49)) + (float)(v55 * v51);
    *(uint32_t *)(v9 + 16) =g4_m128_lane<int32_t>(v31, 0);
g4_m128_lane<float>(v32, 0) = (float)((float)(v60 * v50) + (float)(v57 * v49)) + (float)(v54 * v51);
g4_m128_lane<float>(v33, 0) = (float)((float)(v50 * v59) + (float)(v49 * v56)) + (float)(v51 * v53);
    *(uint32_t *)(v9 + 20) =g4_m128_lane<int32_t>(v32, 0);
    *(uint32_t *)(v9 + 24) =g4_m128_lane<int32_t>(v33, 0);
    goto LABEL_13;
  }
  v45 = *(uint16_t *)(a1 + 12);
  if ( (uint16_t)v45 != 0xFFFF )
  {
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 28))(*(uint32_t *)(a1 + 8), v45, a5[1]);
    *(uint16_t *)(a1 + 12) = -1;
  }
LABEL_15:
  LODWORD(v40) = (uint32_t)(uintptr_t)(v65);
  v41 = *v65;
  v42 = *(uint32_t **)(*v65 + 4);
  if ( (unsigned int)(uintptr_t)(v42) < *(uint32_t *)(*v65 + 12) )
  {
    *v42 = (uint32_t)(uintptr_t)("Et");
    v40 = __rdtsc();
    v42[1] = v40;
    *(uint32_t *)(v41 + 4) = (uint32_t)(uintptr_t)(v42 + 3);
  }
  return v40;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereBoxAgent::staticGetPenetrations  (binary VA: 0x16a1c60)
// Original: hkpSphereBoxAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSphereBoxAgent::staticGetPenetrations(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int *address;
  int v5;
  int *v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  float *v10;
  float v11; // xmm3_4
  float v12; // xmm7_4
  __m128i v13;
  float v14; // xmm6_4
  float v15; // xmm5_4
  __m128i v16;
  __m128i v17;
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm7_4
  float v21; // xmm2_4
  uint64_t v22; // rax
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  int v26;
  uint32_t *v27;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v6 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtSphereBox");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = a1[2];
g4_m128_raw(v17) = *(unsigned int *)(v9 + 48);
  v39 = *(float *)g4_m128_ptr<int32_t>(v17);
  v10 = (float *)a2[2];
  *(float *)g4_m128_ptr<int32_t>(v17) = *(float *)g4_m128_ptr<int32_t>(v17) - v10[12];
  v11 = *(float *)(v9 + 52) - v10[13];
  v38 = v10[12];
  v12 = *(float *)(v9 + 56) - v10[14];
  v37 = v10[13];
  v36 = v10[14];
g4_m128_raw(v13) = *(unsigned int *)v10;
  v34 = v10[1];
  v35 = *v10;
  v33 = v10[2];
  *(float *)g4_m128_ptr<int32_t>(v13) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)g4_m128_ptr<int32_t>(v17)) + (float)(v34 * v11))
                          + (float)(v33 * v12);
  v14 = v10[4];
  v16 = v17;
  v32 = v10[5];
  v15 = v10[8];
  v31 = v10[6];
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v17) * v14) + (float)(v32 * v11)) + (float)(v31 * v12);
  v30 = v10[9];
  v29 = v10[10];
  *(float *)g4_m128_ptr<int32_t>(v17) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v17) * v15) + (float)(v11 * v30)) + (float)(v12 * v29);
  v18 = fminf(fabs(*(float *)g4_m128_ptr<int32_t>(v16)), *(float *)(*a2 + 36));
  v19 = fminf(fabs(*(float *)g4_m128_ptr<int32_t>(v13)), *(float *)(*a2 + 32));
  v20 = fminf(fabs(*(float *)g4_m128_ptr<int32_t>(v17)), *(float *)(*a2 + 40));
  if ( _mm_cvtsi128_si32(v13) < 0 )
    v19 = -v19;
  v21 = v18;
  if ( _mm_cvtsi128_si32(v16) < 0 )
    v21 = -v18;
  LODWORD(v22) = _mm_cvtsi128_si32(v17);
  if ( (v22 & 0x80000000) != 0LL )
    v20 = -v20;
  v23 = v34 * v19;
  v24 = (float)((float)(v35 * v19) + (float)(v14 * v21)) + (float)(v15 * v20);
  v25 = (float)((float)((float)((float)(v19 * v33) + (float)(v21 * v31)) + (float)(v20 * v29)) + v36)
      - *(float *)(v9 + 56);
  if ( (float)((float)(*(float *)(*a1 + 16) + *(float *)(*a2 + 16))
             * (float)(*(float *)(*a1 + 16) + *(float *)(*a2 + 16))) > (float)((float)((float)((float)((float)(v24 + v38) - v39)
                                                                                             * (float)((float)(v24 + v38) - v39))
                                                                                     + (float)((float)((float)((float)((float)(v23 + (float)(v32 * v21)) + (float)(v30 * v20)) + v37) - *(float *)(v9 + 52))
                                                                                             * (float)((float)((float)((float)(v23 + (float)(v32 * v21)) + (float)(v30 * v20)) + v37) - *(float *)(v9 + 52))))
                                                                             + (float)(v25 * v25)) )
    LODWORD(v22) = G4_VCALL<int>(a4, 8, a1, a2);
  v26 = *v6;
  v27 = *(uint32_t **)(v26 + 4);
  if ( (unsigned int)(uintptr_t)(v27) < *(uint32_t *)(v26 + 12) )
  {
    *v27 = (uint32_t)(uintptr_t)("Et");
    v22 = __rdtsc();
    v27[1] = v22;
    *(uint32_t *)(v26 + 4) = (uint32_t)(uintptr_t)(v27 + 3);
  }
  return v22;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereBoxAgent::getPenetrations  (binary VA: 0x16a1f80)
// Original: hkpSphereBoxAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpSphereBoxAgent::getPenetrations(int a1, uint32_t *a2, uint32_t *a3, int a4, int a5)
{
  return hkpSphereBoxAgent::staticGetPenetrations(a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereBoxAgent::staticGetClosestPoints  (binary VA: 0x16a2020)
// Original: hkpSphereBoxAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSphereBoxAgent::staticGetClosestPoints(uint32_t *a1, uint32_t *a2, int a3, int *a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  __m128 v9;
  float *v10;
  float v11; // xmm1_4
  float v12; // xmm0_4
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  float v18; // xmm1_4
  float v19; // xmm0_4
  char v20;
  __m128 v21;
  __m128 v22;
  int v23;
  __m128 v24;
  float v25; // xmm4_4
  __m128 v26;
  float v27; // xmm2_4
  float v28; // xmm4_4
  float *v29;
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm6_4
  float v33; // xmm2_4
  int v34;
  uint64_t v35; // rax
  int v36;
  uint32_t *v37;
  __m128i v38;
  int v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm1_4
  float v42; // xmm5_4
  float v43; // xmm0_4
  float v44; // xmm5_4
  float v45; // xmm6_4
  float v46; // xmm0_4
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int *_g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65[19];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v48)) > _g4_s0 ? (4u + sizeof(_g4_t_v48)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v49)) > _g4_s1 ? (12u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v50)) > _g4_s2 ? (16u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v51)) > _g4_s3 ? (24u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v52)) > _g4_s4 ? (32u + sizeof(_g4_t_v52)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v53)) > _g4_s5 ? (36u + sizeof(_g4_t_v53)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v54)) > _g4_s6 ? (40u + sizeof(_g4_t_v54)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v55)) > _g4_s7 ? (44u + sizeof(_g4_t_v55)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v56)) > _g4_s8 ? (48u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v57)) > _g4_s9 ? (52u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v58)) > _g4_s10 ? (56u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v59)) > _g4_s11 ? (60u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v60)) > _g4_s12 ? (64u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v61)) > _g4_s13 ? (68u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v62)) > _g4_s14 ? (68u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v63)) > _g4_s15 ? (72u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v64)) > _g4_s16 ? (76u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v65)) > _g4_s17 ? (80u + sizeof(_g4_t_v65)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 68u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 76u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 80u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v58 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtSphereBox");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = a1[2];
g4_m128_raw(v9) = *(unsigned int *)(v8 + 48);
  v55 =g4_m128_lane<float>(v9, 0);
  v10 = (float *)a2[2];
g4_m128_lane<float>(v9, 0) =g4_m128_lane<float>(v9, 0) - v10[12];
  v11 = *(float *)(v8 + 52) - v10[13];
  v54 = *(float *)(v8 + 52);
g4_m128_raw(v13) = *(unsigned int *)v10;
  v12 = *(float *)(v8 + 56) - v10[14];
  v53 = *(float *)(v8 + 56);
  v51 = v10[1];
g4_m128_raw(v14) = *((unsigned int *)v10 + 4);
g4_m128_lane<float>(v13, 0) = (float)((float)(g4_m128_lane<float>(v13, 0) *g4_m128_lane<float>(v9, 0)) + (float)(v51 * v11)) + (float)(v10[2] * v12);
  v50 =g4_m128_lane<float>(v14, 0);
  v49 = v10[5];
  v48 = v10[8];
  v16 = v9;
g4_m128_lane<float>(v14, 0) = (float)((float)(g4_m128_lane<float>(v14, 0) *g4_m128_lane<float>(v9, 0)) + (float)(v49 * v11)) + (float)(v10[6] * v12);
  v52 = *(float *)(*a2 + 32);
  v15 = _mm_and_ps(v13, g4_m128_u32(0x7FFFFFFFu));
g4_m128_lane<float>(v16, 0) = (float)((float)(g4_m128_lane<float>(v9, 0) * v48) + (float)(v11 * v10[9])) + (float)(v12 * v10[10]);
  v17 = _mm_and_ps(v14, g4_m128_u32(0x7FFFFFFFu));
  v61 = *(float *)(*a2 + 36);
  v18 = fabs(g4_m128_lane<float>(v16, 0));
  v60 = *(float *)(*a2 + 40);
  v59 = fminf(g4_m128_lane<float>(v15, 0), v52) -g4_m128_lane<float>(v15, 0);
  v64 = fminf(g4_m128_lane<float>(v17, 0), v61) -g4_m128_lane<float>(v17, 0);
  v63 = fminf(v18, v60) - v18;
  v56 = *(float *)(*a1 + 16);
  v57 = v56 + *(float *)(*a2 + 16);
  v19 = 0.0;
  v20 = 4 * (v63 < 0.0);
  if ( (float)(fminf(v18, *(float *)(*a2 + 44)) - v18) < 0.0 )
    v20 = 4 * (v63 < 0.0) + 8;
  if ( (v20 & 7 | (uint8_t)((v59 < 0.0) | (2 * (v64 < 0.0)))) == 0 )
  {
g4_m128_lane<float>(v15, 0) =g4_m128_lane<float>(v15, 0) - v52;
g4_m128_lane<float>(v17, 0) =g4_m128_lane<float>(v17, 0) - v61;
g4_m128_lane<float>(v21, 0) = v18 - v60;
    if (g4_m128_lane<float>(v17, 0) >=g4_m128_lane<float>(v15, 0) )
    {
      v22 = v14;
      v24 = v17;
      v23 = 4;
    }
    else
    {
      v22 = v13;
      v23 = 0;
      v24 = v15;
    }
    v25 = fmaxf(g4_m128_lane<float>(v15, 0),g4_m128_lane<float>(v17, 0));
    v26 = _mm_cmpgt_ss(v24, v21);
    LODWORD(v27) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v26, v16), 0))
                 | _mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_and_ps(v22, v26)));
    if (g4_m128_lane<float>(v21, 0) >=g4_m128_lane<float>(v24, 0) )
      v23 = 8;
    v28 = fmaxf(v25,g4_m128_lane<float>(v21, 0)) - v57;
    v29 = &v10[v23];
    if ( v27 < 0.0 )
    {
      v30 = -*v29;
      v31 = -v29[1];
      v32 = -v29[2];
    }
    else
    {
      v30 = *v29;
      v31 = v29[1];
      v32 = v29[2];
    }
LABEL_12:
    v33 = (float)-v28 - v56;
    LODWORD(v65[13]) = (uint32_t)(uintptr_t)(a2);
    LODWORD(v65[12]) = (uint32_t)(uintptr_t)(a1);
    v65[3] = 1.0;
    v65[4] = v30;
    v34 = *a4;
    v65[5] = v31;
    v65[6] = v32;
    v65[7] = v28;
    v65[8] = v30;
    v65[9] = v31;
    v65[10] = v32;
    v65[11] = v28;
    v65[0] = (float)(v33 * v30) + v55;
    v65[1] = (float)(v33 * v31) + v54;
    v65[2] = (float)(v33 * v32) + v53;
    (*(void (**)(int *, float *))(v34 + 8))(a4, v65);
    goto LABEL_13;
  }
g4_m128_raw(v38) = LODWORD(v59);
  *(float *)g4_m128_ptr<int32_t>(v38) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v38) * *(float *)g4_m128_ptr<int32_t>(v38)) + (float)(v64 * v64))
                          + (float)(v63 * v63);
  if ( *(float *)g4_m128_ptr<int32_t>(v38) > 0.0 )
  {
    v39 = ((_mm_cvtsi128_si32(v38) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v38) >> 1));
    v62 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v38);
    v40 = (float)(*(float *)&v39 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v38)) * *(float *)&v39)
                * (float)(*(float *)&v39 * *(float *)&v39));
    v19 = (float)(1.5 * (float)((float)(v40 * 1.5) - (float)((float)(v62 * v40) * (float)(v40 * v40))))
        - (float)((float)(v62 * (float)((float)(v40 * 1.5) - (float)((float)(v62 * v40) * (float)(v40 * v40))))
                * (float)((float)((float)(v40 * 1.5) - (float)((float)(v62 * v40) * (float)(v40 * v40)))
                        * (float)((float)(v40 * 1.5) - (float)((float)(v62 * v40) * (float)(v40 * v40)))));
  }
  v28 = (float)(*(float *)g4_m128_ptr<int32_t>(v38) * v19) - v57;
  if ( v28 <= *(float *)(a3 + 12) )
  {
    v41 = v59 * v19;
    if ( _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v13))) < 0 )
      v41 = -v41;
    v42 = v64 * v19;
    if ( _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v14))) < 0 )
      v42 = -v42;
    v43 = v19 * v63;
    if ( _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v16))) < 0 )
      v43 = -v43;
    v44 = -v42;
    v45 = -v41;
    v46 = -v43;
    v30 = (float)((float)(*v10 * (float)-v41) + (float)(v50 * v44)) + (float)(v48 * v46);
    v31 = (float)((float)(v51 * (float)-v41) + (float)(v49 * v44)) + (float)(v10[9] * v46);
    v32 = (float)((float)(v45 * v10[2]) + (float)(v44 * v10[6])) + (float)(v46 * v10[10]);
    goto LABEL_12;
  }
LABEL_13:
  LODWORD(v35) = (uint32_t)(uintptr_t)(v58);
  v36 = *v58;
  v37 = *(uint32_t **)(*v58 + 4);
  if ( (unsigned int)(uintptr_t)(v37) < *(uint32_t *)(*v58 + 12) )
  {
    *v37 = (uint32_t)(uintptr_t)("Et");
    v35 = __rdtsc();
    v37[1] = v35;
    *(uint32_t *)(v36 + 4) = (uint32_t)(uintptr_t)(v37 + 3);
  }
  return v35;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereBoxAgent::getClosestPoints  (binary VA: 0x16a25f0)
// Original: hkpSphereBoxAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSphereBoxAgent::getClosestPoints(int a1, uint32_t *a2, uint32_t *a3, int a4, int *a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  __m128 v10;
  float *v11;
  float v12; // xmm1_4
  float v13; // xmm0_4
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  float v19; // xmm1_4
  float v20; // xmm0_4
  char v21;
  __m128 v22;
  __m128 v23;
  int v24;
  __m128 v25;
  float v26; // xmm4_4
  __m128 v27;
  float v28; // xmm2_4
  float v29; // xmm4_4
  float *v30;
  float v31; // xmm3_4
  float v32; // xmm1_4
  float v33; // xmm6_4
  float v34; // xmm2_4
  int v35;
  uint64_t v36; // rax
  int v37;
  uint32_t *v38;
  __m128i v39;
  int v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm1_4
  float v43; // xmm5_4
  float v44; // xmm0_4
  float v45; // xmm5_4
  float v46; // xmm6_4
  float v47; // xmm0_4
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef int *_g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66[19];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v49)) > _g4_s0 ? (4u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v50)) > _g4_s1 ? (12u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v51)) > _g4_s2 ? (16u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v52)) > _g4_s3 ? (24u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v53)) > _g4_s4 ? (32u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v54)) > _g4_s5 ? (36u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v55)) > _g4_s6 ? (40u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v56)) > _g4_s7 ? (44u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v57)) > _g4_s8 ? (48u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v58)) > _g4_s9 ? (52u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v59)) > _g4_s10 ? (56u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v60)) > _g4_s11 ? (60u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v61)) > _g4_s12 ? (64u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v62)) > _g4_s13 ? (68u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v63)) > _g4_s14 ? (68u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v64)) > _g4_s15 ? (72u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v65)) > _g4_s16 ? (76u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v66)) > _g4_s17 ? (80u + sizeof(_g4_t_v66)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 64u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 72u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 76u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v59 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtSphereBox");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = a2[2];
g4_m128_raw(v10) = *(unsigned int *)(v9 + 48);
  v56 =g4_m128_lane<float>(v10, 0);
  v11 = (float *)a3[2];
g4_m128_lane<float>(v10, 0) =g4_m128_lane<float>(v10, 0) - v11[12];
  v12 = *(float *)(v9 + 52) - v11[13];
  v55 = *(float *)(v9 + 52);
g4_m128_raw(v14) = *(unsigned int *)v11;
  v13 = *(float *)(v9 + 56) - v11[14];
  v54 = *(float *)(v9 + 56);
  v52 = v11[1];
g4_m128_raw(v15) = *((unsigned int *)v11 + 4);
g4_m128_lane<float>(v14, 0) = (float)((float)(g4_m128_lane<float>(v14, 0) *g4_m128_lane<float>(v10, 0)) + (float)(v52 * v12)) + (float)(v11[2] * v13);
  v51 =g4_m128_lane<float>(v15, 0);
  v50 = v11[5];
  v49 = v11[8];
  v17 = v10;
g4_m128_lane<float>(v15, 0) = (float)((float)(g4_m128_lane<float>(v15, 0) *g4_m128_lane<float>(v10, 0)) + (float)(v50 * v12)) + (float)(v11[6] * v13);
  v53 = *(float *)(*a3 + 32);
  v16 = _mm_and_ps(v14, g4_m128_u32(0x7FFFFFFFu));
g4_m128_lane<float>(v17, 0) = (float)((float)(g4_m128_lane<float>(v10, 0) * v49) + (float)(v12 * v11[9])) + (float)(v13 * v11[10]);
  v18 = _mm_and_ps(v15, g4_m128_u32(0x7FFFFFFFu));
  v62 = *(float *)(*a3 + 36);
  v19 = fabs(g4_m128_lane<float>(v17, 0));
  v61 = *(float *)(*a3 + 40);
  v60 = fminf(g4_m128_lane<float>(v16, 0), v53) -g4_m128_lane<float>(v16, 0);
  v65 = fminf(g4_m128_lane<float>(v18, 0), v62) -g4_m128_lane<float>(v18, 0);
  v64 = fminf(v19, v61) - v19;
  v57 = *(float *)(*a2 + 16);
  v58 = v57 + *(float *)(*a3 + 16);
  v20 = 0.0;
  v21 = 4 * (v64 < 0.0);
  if ( (float)(fminf(v19, *(float *)(*a3 + 44)) - v19) < 0.0 )
    v21 = 4 * (v64 < 0.0) + 8;
  if ( (v21 & 7 | (uint8_t)((v60 < 0.0) | (2 * (v65 < 0.0)))) == 0 )
  {
g4_m128_lane<float>(v16, 0) =g4_m128_lane<float>(v16, 0) - v53;
g4_m128_lane<float>(v18, 0) =g4_m128_lane<float>(v18, 0) - v62;
g4_m128_lane<float>(v22, 0) = v19 - v61;
    if (g4_m128_lane<float>(v18, 0) >=g4_m128_lane<float>(v16, 0) )
    {
      v23 = v15;
      v25 = v18;
      v24 = 4;
    }
    else
    {
      v23 = v14;
      v24 = 0;
      v25 = v16;
    }
    v26 = fmaxf(g4_m128_lane<float>(v16, 0),g4_m128_lane<float>(v18, 0));
    v27 = _mm_cmpgt_ss(v25, v22);
    LODWORD(v28) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v27, v17), 0))
                 | _mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_and_ps(v23, v27)));
    if (g4_m128_lane<float>(v22, 0) >=g4_m128_lane<float>(v25, 0) )
      v24 = 8;
    v29 = fmaxf(v26,g4_m128_lane<float>(v22, 0)) - v58;
    v30 = &v11[v24];
    if ( v28 < 0.0 )
    {
      v31 = -*v30;
      v32 = -v30[1];
      v33 = -v30[2];
    }
    else
    {
      v31 = *v30;
      v32 = v30[1];
      v33 = v30[2];
    }
LABEL_12:
    v34 = (float)-v29 - v57;
    LODWORD(v66[13]) = (uint32_t)(uintptr_t)(a3);
    LODWORD(v66[12]) = (uint32_t)(uintptr_t)(a2);
    v66[3] = 1.0;
    v66[4] = v31;
    v35 = *a5;
    v66[5] = v32;
    v66[6] = v33;
    v66[7] = v29;
    v66[8] = v31;
    v66[9] = v32;
    v66[10] = v33;
    v66[11] = v29;
    v66[0] = (float)(v34 * v31) + v56;
    v66[1] = (float)(v34 * v32) + v55;
    v66[2] = (float)(v34 * v33) + v54;
    (*(void (**)(int *, float *))(v35 + 8))(a5, v66);
    goto LABEL_13;
  }
g4_m128_raw(v39) = LODWORD(v60);
  *(float *)g4_m128_ptr<int32_t>(v39) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v39) * *(float *)g4_m128_ptr<int32_t>(v39)) + (float)(v65 * v65))
                          + (float)(v64 * v64);
  if ( *(float *)g4_m128_ptr<int32_t>(v39) > 0.0 )
  {
    v40 = ((_mm_cvtsi128_si32(v39) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v39) >> 1));
    v63 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v39);
    v41 = (float)(*(float *)&v40 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v39)) * *(float *)&v40)
                * (float)(*(float *)&v40 * *(float *)&v40));
    v20 = (float)(1.5 * (float)((float)(v41 * 1.5) - (float)((float)(v63 * v41) * (float)(v41 * v41))))
        - (float)((float)(v63 * (float)((float)(v41 * 1.5) - (float)((float)(v63 * v41) * (float)(v41 * v41))))
                * (float)((float)((float)(v41 * 1.5) - (float)((float)(v63 * v41) * (float)(v41 * v41)))
                        * (float)((float)(v41 * 1.5) - (float)((float)(v63 * v41) * (float)(v41 * v41)))));
  }
  v29 = (float)(*(float *)g4_m128_ptr<int32_t>(v39) * v20) - v58;
  if ( v29 <= *(float *)(a4 + 12) )
  {
    v42 = v60 * v20;
    if ( _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v14))) < 0 )
      v42 = -v42;
    v43 = v65 * v20;
    if ( _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v15))) < 0 )
      v43 = -v43;
    v44 = v20 * v64;
    if ( _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v17))) < 0 )
      v44 = -v44;
    v45 = -v43;
    v46 = -v42;
    v47 = -v44;
    v31 = (float)((float)(*v11 * (float)-v42) + (float)(v51 * v45)) + (float)(v49 * v47);
    v32 = (float)((float)(v52 * (float)-v42) + (float)(v50 * v45)) + (float)(v11[9] * v47);
    v33 = (float)((float)(v46 * v11[2]) + (float)(v45 * v11[6])) + (float)(v47 * v11[10]);
    goto LABEL_12;
  }
LABEL_13:
  LODWORD(v36) = (uint32_t)(uintptr_t)(v59);
  v37 = *v59;
  v38 = *(uint32_t **)(*v59 + 4);
  if ( (unsigned int)(uintptr_t)(v38) < *(uint32_t *)(*v59 + 12) )
  {
    *v38 = (uint32_t)(uintptr_t)("Et");
    v36 = __rdtsc();
    v38[1] = v36;
    *(uint32_t *)(v37 + 4) = (uint32_t)(uintptr_t)(v38 + 3);
  }
  return v36;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereBoxAgent::registerAgent  (binary VA: 0x16a2bc0)
// Original: hkpSphereBoxAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpSphereBoxAgent::registerAgent(hkpSphereBoxAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpSphereBoxAgent::createBoxSphereAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::staticLinearCast);
  LOWORD(v2[4]) = 1;
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 3, 0);
  v2[0] = (uint32_t)(uintptr_t)(hkpSphereBoxAgent::createSphereBoxAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSphereBoxAgent::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSphereBoxAgent::staticGetClosestPoints);
  LOWORD(v2[4]) = 0;
  v2[3] = (uint32_t)(uintptr_t)(((int * (*)(unsigned int, float *, float *, float *, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, float, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, int32_t, unsigned int, int32_t, int32_t, unsigned int, float *, int, int, int, int, int, int, unsigned int))hkpIterativeLinearCastAgent::staticLinearCast));
  return hkpCollisionDispatcher::registerCollisionAgent(self, v2, 0, 3);
}


