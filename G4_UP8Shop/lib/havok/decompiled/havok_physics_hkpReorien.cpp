#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpReorien.h"

// ----------------------------------------------------------------------------
// Function: hkpReorientAction::staticClass  (binary VA: 0x182fb00)
// Original: hkpReorientAction::staticClass
// ----------------------------------------------------------------------------
void * hkpReorientAction::staticClass()
{
  return &hkpReorientActionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpReorientAction::applyAction  (binary VA: 0x1846b80)
// Original: hkpReorientAction::applyAction
// ----------------------------------------------------------------------------
int hkpReorientAction::applyAction(int a1, int a2)
{
  int v2;
  float v3; // xmm1_4
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  __m128i v7;
  float v8; // xmm1_4
  float v9; // xmm0_4
  __m128i v10;
  int v11;
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm6_4
  float v17; // xmm2_4
  float v18; // xmm5_4
  float v19; // xmm0_4
  __m128 v20;
  float v21; // xmm3_4
  float v22;
  bool v23; // cc
  __m128 v24;
  __m128 v25;
  __m128 v26;
  __m128 v27;
  __m128 v28;
  __m128 v29;
  __m128 v30;
  float v31; // xmm1_4
  __m128 v32;
  __m128 v33;
  __m128 v34;
  float v35; // xmm2_4
  __m128 v36;
  __m128 v37;
  float v38; // xmm0_4
  float v39; // xmm6_4
  float v40; // xmm0_4
  float v41; // xmm4_4
  float v42; // xmm7_4
  float v43; // xmm3_4
  float v44; // xmm0_4
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef g4_int128_t _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57[4];
  typedef float _g4_t_v58[4];
  typedef uint32_t _g4_t_v59[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v46)) > _g4_s0 ? (8u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v47)) > _g4_s1 ? (12u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v48)) > _g4_s2 ? (16u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v49)) > _g4_s3 ? (32u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v50)) > _g4_s4 ? (36u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v51)) > _g4_s5 ? (40u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v52)) > _g4_s6 ? (44u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v53)) > _g4_s7 ? (48u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v54)) > _g4_s8 ? (52u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v55)) > _g4_s9 ? (56u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v56)) > _g4_s10 ? (60u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v57)) > _g4_s11 ? (64u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v58)) > _g4_s12 ? (80u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v59)) > _g4_s13 ? (96u + sizeof(_g4_t_v59)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 80u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 96u);

  v2 = *(uint32_t *)(a1 + 24);
  hkVector4f::setRotatedDir((hkVector4f::Self *)v57, (const hkQuaternionf::Self *)(v2 + 352), (const hkVector4f::Self *)(a1 + 48));
  hkVector4f::setRotatedDir((hkVector4f::Self *)v58, (const hkQuaternionf::Self *)(v2 + 352), (const hkVector4f::Self *)(a1 + 32));
  v3 = *(float *)(a1 + 48);
  v4 = *(float *)(a1 + 52);
g4_m128_raw(v7) = LODWORD(v58[0]);
  *(float *)&v48 = v58[1];
  v5 = *(float *)(a1 + 56);
  v56 = v58[2];
  v6 = -(float)((float)((float)(v58[0] * v3) + (float)(v58[1] * v4)) + (float)(v58[2] * v5));
  *(float *)g4_m128_ptr<int32_t>(v7) = (float)(v58[0] * v6) + v3;
  v8 = (float)(v58[1] * v6) + v4;
  v9 = (float)(v6 * v58[2]) + v5;
  v10 = v7;
  *(float *)g4_m128_ptr<int32_t>(v10) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)g4_m128_ptr<int32_t>(v7)) + (float)(v8 * v8))
                          + (float)(v9 * v9);
  if ( *(float *)g4_m128_ptr<int32_t>(v10) <= 0.0 )
  {
    v14 = 0.0;
  }
  else
  {
    v11 = ((_mm_cvtsi128_si32(v10) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v10) >> 1));
    v12 = (float)(*(float *)&v11 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * *(float *)&v11)
                * (float)(*(float *)&v11 * *(float *)&v11));
    v13 = (float)(v12 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * v12) * (float)(v12 * v12));
    v14 = (float)(1.5 * v13) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * v13) * (float)(v13 * v13));
  }
  v15 = v8 * v14;
  v16 = v57[0];
  v52 = *(float *)g4_m128_ptr<int32_t>(v7) * v14;
  v53 = v9 * v14;
  v17 = v9 * v14;
  v54 = v15;
  v18 = v57[1];
  v19 = (float)(v52 * v57[0]) + (float)(v15 * v57[1]);
g4_m128_raw(v20) = LODWORD(v57[2]);
  v21 = fmaxf(-1.0, fminf(v19 + (float)(v17 * v57[2]), 1.0));
  if ( fabs(v21) < 1.0 )
  {
    v48 = 0x7FFFFFFFu;
    v55 = acosf(v21);
    v18 = v57[1];
    v22 = v58[0];
g4_m128_raw(v20) = LODWORD(v57[2]);
    v16 = v57[0];
g4_m128_raw(v24) = LODWORD(v58[1]);
    v56 = v58[2];
  }
  else
  {
    v22 = v58[0];
    v23 = v21 <= 0.0;
g4_m128_raw(v24) = LODWORD(v58[1]);
    if ( v23 )
      v55 = 3.1415927f;
    else
      v55 = 0.0;
  }
g4_m128_raw(v25) = LODWORD(v53);
g4_m128_lane<float>(v25, 0) = (float)(v53 * v18) - (float)(v54 *g4_m128_lane<float>(v20, 0));
g4_m128_lane<float>(v20, 0) = (float)(g4_m128_lane<float>(v20, 0) * v52) - (float)(v53 * v16);
g4_m128_raw(v26) = LODWORD(v54);
g4_m128_lane<float>(v26, 0) = (float)(v54 * v16) - (float)(v18 * v52);
  v27 = _mm_and_ps(v20, g4_m128_u32(0x7FFFFFFFu));
  v28 = _mm_and_ps(v25, g4_m128_u32(0x7FFFFFFFu));
  if (g4_m128_lane<float>(v27, 0) <g4_m128_lane<float>(v28, 0) )
  {
g4_m128_lane<int32_t>(v20, 0) =g4_m128_lane<int32_t>(v25, 0);
    v27 = v28;
  }
g4_m128_lane<int32_t>(v29, 0) = fabs(g4_m128_lane<float>(v26, 0));
  v30 = _mm_cmpgt_ss(v27, v29);
  LODWORD(v31) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v30, v26), 0) |g4_m128_lane<int32_t>(v20, 0) &g4_m128_lane<int32_t>(v30, 0);
  v32 = _mm_and_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(LODWORD(v22))), g4_m128_u32(0x7FFFFFFFu));
  v33 = _mm_and_ps(v24, g4_m128_u32(0x7FFFFFFFu));
g4_m128_raw(v34) = LODWORD(v56);
  v35 =g4_m128_lane<float>(v24, 0);
g4_m128_lane<int32_t>(v36, 0) = fabs(v56);
  if (g4_m128_lane<float>(v33, 0) <g4_m128_lane<float>(v32, 0) )
  {
    v35 = v22;
    v33 = v32;
g4_m128_raw(v34) = LODWORD(v56);
  }
  v37 = _mm_cmpgt_ss(v33, v36);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v37, v34), 0)) | LODWORD(v35) &g4_m128_lane<int32_t>(v37, 0)) < 0.0 != v31 < 0.0 )
    v55 = -v55;
  v38 = *(float *)(a2 + 12);
  v39 = *(float *)(a1 + 68) * v38;
  v40 = (float)(v38 * *(float *)(a1 + 64)) * v55;
  v41 = (float)(v58[3] * v40) - (float)(*(float *)(v2 + 460) * v39);
  v42 = (float)(v22 * v40) - (float)(v39 * *(float *)(v2 + 448));
  v43 = (float)(g4_m128_lane<float>(v24, 0) * v40) - (float)(*(float *)(v2 + 452) * v39);
  v44 = (float)(v40 * v56) - (float)(*(float *)(v2 + 456) * v39);
  *(float *)&v59[3] = v41;
  *(float *)v59 = v42;
  *(float *)&v59[1] = v43;
  *(float *)&v59[2] = v44;
  hkpEntity::activate((hkpEntity::Self *)v2);
  return G4_VCALL<int>(v2 + 224, 104, v59, v46, v47, v48, DWORD1(v48), DWORD2(v48), HIDWORD(v48), v49, v50, v51, COERCE_FLOAT(LODWORD(v52)), COERCE_FLOAT(LODWORD(v53)), COERCE_FLOAT(LODWORD(v54)), COERCE_FLOAT(LODWORD(v55)), COERCE_FLOAT(LODWORD(v56)), LODWORD(v57[0]), LODWORD(v57[1]), LODWORD(v57[2]), LODWORD(v57[3]), LODWORD(v58[0]), LODWORD(v58[1]), LODWORD(v58[2]), LODWORD(v58[3]));
}

// ----------------------------------------------------------------------------
// Function: hkpReorientAction::Destroy  (binary VA: 0x1846f90)
// Original: hkpReorientAction::~hkpReorientAction
// ----------------------------------------------------------------------------
void hkpReorientAction::Destroy(hkpReorientAction::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3B08);
  hkpUnaryAction::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpReorientAction::Destroy_ea1846fc0  (binary VA: 0x1846fc0)
// Original: hkpReorientAction::~hkpReorientAction
// ----------------------------------------------------------------------------
void hkpReorientAction::Destroy_ea1846fc0(hkpReorientAction::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3B08);
  hkpUnaryAction::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 80;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpReorientAction::Construct  (binary VA: 0x1847030)
// Original: hkpReorientAction::hkpReorientAction
// ----------------------------------------------------------------------------
void hkpReorientAction::Construct(hkpReorientAction::Self *self)
{
  hkpUnaryAction::Construct(self, nullptr, 0);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3B08);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpReorientAction::Construct  (binary VA: 0x18470b0)
// Original: hkpReorientAction::hkpReorientAction
// ----------------------------------------------------------------------------
void hkpReorientAction::Construct(hkpReorientAction::Self *self, hkpRigidBody::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, float a5, float a6)
{
  int v6;

  hkpUnaryAction::Construct(self, a2, 0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3B08);
  *((uint32_t *)self + 8) = *(uint32_t *)a3;
  *((uint32_t *)self + 9) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 10) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 11) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 12) = *(uint32_t *)a4;
  *((uint32_t *)self + 13) = *((uint32_t *)a4 + 1);
  *((uint32_t *)self + 14) = *((uint32_t *)a4 + 2);
  v6 = *((uint32_t *)a4 + 3);
  *((float *)self + 16) = a5;
  *((uint32_t *)self + 15) = v6;
  *((float *)self + 17) = a6;
}

// ----------------------------------------------------------------------------
// Function: hkpReorientAction::clone  (binary VA: 0x1847140)
// Original: hkpReorientAction::clone
// ----------------------------------------------------------------------------
hkpReorientAction::Self * hkpReorientAction::clone(int a1, int a2, int a3)
{
  hkpReorientAction::Self *result;
  hkpRigidBody::Self *v4;
  int address;
  hkpReorientAction::Self *v6;

  result = nullptr;
  if ( *(uint32_t *)(a2 + 4) == 1 && *(uint32_t *)(a3 + 4) == 0 )
  {
    v4 = **(hkpRigidBody::Self ***)a2;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (hkpReorientAction::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                *(uint32_t *)(*(uint32_t *)address + 44),
                                80);
    hkpReorientAction::Construct(
      v6,
      v4,
      (const hkVector4f::Self *)(a1 + 32),
      (const hkVector4f::Self *)(a1 + 48),
      *(float *)(a1 + 64),
      *(float *)(a1 + 68));
    *((uint32_t *)v6 + 4) = *(uint32_t *)(a1 + 16);
    return v6;
  }
  return result;
}


