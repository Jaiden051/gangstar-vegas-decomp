#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMouseSp.h"

// ----------------------------------------------------------------------------
// Function: hkpMouseSpringAction::staticClass  (binary VA: 0x1828930)
// Original: hkpMouseSpringAction::staticClass
// ----------------------------------------------------------------------------
void * hkpMouseSpringAction::staticClass()
{
  return &hkpMouseSpringActionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMouseSpringAction::applyAction  (binary VA: 0x1829700)
// Original: hkpMouseSpringAction::applyAction
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkpMouseSpringAction::applyAction(int a1, int a2)
{
  int v2;
  __m128 *v3;
  int StoredDynamicMotion;
  int v5;
  hkMatrix3f::Self *result;
  float v7; // xmm0_4
  float v8;
  float v9; // xmm7_4
  float v10; // xmm4_4
  __m128 v11;
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm6_4
  __m128 v15;
  float v16; // xmm4_4
  __m128 v17;
  __m128 v18;
  __m128 v19;
  __m128 v20;
  __m128 v21;
  __m128 v22;
  float v23; // xmm7_4
  bool v24;
  __m128 v25;
  float v26; // xmm7_4
  __m128 v27;
  __m128 v28;
  int v29; // xmm5_4
  float v30; // xmm6_4
  float v31; // xmm5_4
  float v32; // xmm7_4
  __m128 v33;
  float v34; // xmm5_4
  __m128 v35;
  int32_t v36;
  int v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float *_g4_t_v44;
  typedef float _g4_t_v45;
  typedef hkMatrix3f::Self *_g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef hkMatrix3f::Self *_g4_t_v49;
  typedef hkMatrix3f::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef __m128 _g4_t_v53;
  typedef __m128 _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef uint8_t _g4_t_v67[48];
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef uint64_t _g4_t_v76[8];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (8u + sizeof(_g4_t_v38)) > _g4_s0 ? (8u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v39)) > _g4_s1 ? (12u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v40)) > _g4_s2 ? (16u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v41)) > _g4_s3 ? (20u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v42)) > _g4_s4 ? (24u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v43)) > _g4_s5 ? (28u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v44)) > _g4_s6 ? (32u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v45)) > _g4_s7 ? (40u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v46)) > _g4_s8 ? (44u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v47)) > _g4_s9 ? (44u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v48)) > _g4_s10 ? (44u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v49)) > _g4_s11 ? (48u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v50)) > _g4_s12 ? (48u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v51)) > _g4_s13 ? (52u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v52)) > _g4_s14 ? (60u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v53)) > _g4_s15 ? (64u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v54)) > _g4_s16 ? (80u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v55)) > _g4_s17 ? (96u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v56)) > _g4_s18 ? (100u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v57)) > _g4_s19 ? (104u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v58)) > _g4_s20 ? (108u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v59)) > _g4_s21 ? (112u + sizeof(_g4_t_v59)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v60)) > _g4_s22 ? (116u + sizeof(_g4_t_v60)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v61)) > _g4_s23 ? (120u + sizeof(_g4_t_v61)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v62)) > _g4_s24 ? (124u + sizeof(_g4_t_v62)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v63)) > _g4_s25 ? (128u + sizeof(_g4_t_v63)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v64)) > _g4_s26 ? (132u + sizeof(_g4_t_v64)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v65)) > _g4_s27 ? (136u + sizeof(_g4_t_v65)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v66)) > _g4_s28 ? (140u + sizeof(_g4_t_v66)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v67)) > _g4_s29 ? (144u + sizeof(_g4_t_v67)) : _g4_s29,
    _g4_s31 = (192u + sizeof(_g4_t_v68)) > _g4_s30 ? (192u + sizeof(_g4_t_v68)) : _g4_s30,
    _g4_s32 = (196u + sizeof(_g4_t_v69)) > _g4_s31 ? (196u + sizeof(_g4_t_v69)) : _g4_s31,
    _g4_s33 = (200u + sizeof(_g4_t_v70)) > _g4_s32 ? (200u + sizeof(_g4_t_v70)) : _g4_s32,
    _g4_s34 = (204u + sizeof(_g4_t_v71)) > _g4_s33 ? (204u + sizeof(_g4_t_v71)) : _g4_s33,
    _g4_s35 = (240u + sizeof(_g4_t_v72)) > _g4_s34 ? (240u + sizeof(_g4_t_v72)) : _g4_s34,
    _g4_s36 = (244u + sizeof(_g4_t_v73)) > _g4_s35 ? (244u + sizeof(_g4_t_v73)) : _g4_s35,
    _g4_s37 = (248u + sizeof(_g4_t_v74)) > _g4_s36 ? (248u + sizeof(_g4_t_v74)) : _g4_s36,
    _g4_s38 = (252u + sizeof(_g4_t_v75)) > _g4_s37 ? (252u + sizeof(_g4_t_v75)) : _g4_s37,
    _g4_s39 = (288u + sizeof(_g4_t_v76)) > _g4_s38 ? (288u + sizeof(_g4_t_v76)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 100u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 104u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 108u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 112u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 116u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 120u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 124u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 128u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 132u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 136u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 140u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 144u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 192u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 196u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 200u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 204u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 240u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 244u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 248u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 252u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 288u);

  LODWORD(v76[7]) = (uint32_t)(uintptr_t)(&a1);
  v2 = a1;
  v51 = a2;
  v3 = *(__m128 **)(a1 + 24);
  hkVector4f::setTransformedPos((hkVector4f::Self *)&v53, (const hkTransformf::Self *)&v3[15], (const hkVector4f::Self *)(a1 + 32));
  v43 =g4_m128_lane<float>(v53, 0);
  v42 = *(float *)(v2 + 48);
  v41 =g4_m128_lane<float>(v53, 1);
  v40 = *(float *)(v2 + 52);
  v39 =g4_m128_lane<float>(v53, 2);
  v38 = *(float *)(v2 + 56);
  StoredDynamicMotion = hkpRigidBody::getStoredDynamicMotion((hkpRigidBody::Self *)v3);
  v5 = (int)(uintptr_t)(&v3[14]);
  if ( StoredDynamicMotion != 0 )
    v5 = hkpRigidBody::getStoredDynamicMotion((hkpRigidBody::Self *)v3);
  v46 = *(hkMatrix3f::Self **)(v5 + 204);
  v49 = (hkMatrix3f::Self *)v5;
  v54 = _mm_sub_ps(v53, v3[20]);
  hkMatrix3f::setCrossSkewSymmetric((hkMatrix3f::Self *)v67, (const hkVector4f::Self *)&v54);
  v44 = (float *)v49;
  G4_VCALL<void>(v44, 56, &v68);
  v56 = 0.0;
  v57 = 0.0;
  v58 = 0.0;
  v59 = 0.0;
  v61 = 0.0;
  v62 = 0.0;
  v63 = 0.0;
  v64 = 0.0;
  v66 = 0.0;
  v55 = *(float *)&v46;
  v60 = *(float *)&v46;
  v65 = *(float *)&v46;
  hkMatrix3f::setMul((hkMatrix3f::Self *)&v72, (const hkMatrix3f::Self *)v67, (const hkMatrix3f::Self *)&v68);
  hkMatrix3f::setMul((hkMatrix3f::Self *)v76, (const hkMatrix3f::Self *)&v72, (const hkMatrix3f::Self *)v67);
  hkMatrix3f::sub((hkMatrix3f::Self *)&v55, (const hkMatrix3f::Self *)v76);
  result = hkMatrix3f::invert((hkMatrix3f::Self *)&v52, &v55, 0.0000001f);
  if ( v52 == 0 )
  {
    v7 = *(float *)(v2 + 76);
    v68 =g4_m128_lane<float>(v3[27], 0);
    v69 =g4_m128_lane<float>(v3[27], 1);
    v70 =g4_m128_lane<float>(v3[27], 2);
    v8 =g4_m128_lane<float>(v3[27], 3);
    v68 = v68 * v7;
    v69 = v69 * v7;
    v70 = v70 * v7;
    v71 = v7 * v8;
    hkpEntity::activate((hkpEntity::Self *)v3);
    v50 = (hkMatrix3f::Self *)&v3[14];
    (*(void (**)(__m128 *, float *))(g4_m128_lane<int32_t>(v3[14], 0) + 80))(v3 + 14, &v68);
    v72 =g4_m128_lane<float>(v3[28], 0);
    v73 =g4_m128_lane<float>(v3[28], 1);
    v74 =g4_m128_lane<float>(v3[28], 2);
    v75 =g4_m128_lane<float>(v3[28], 3);
    v72 = v72 * v7;
    v73 = v73 * v7;
    v74 = v74 * v7;
    v75 = v7 * v75;
    hkpEntity::activate((hkpEntity::Self *)v3);
    (*(void (**)(__m128 *, float *))(g4_m128_lane<int32_t>(v3[14], 0) + 84))(v3 + 14, &v72);
    v9 =g4_m128_lane<float>(v53, 1) -g4_m128_lane<float>(v3[20], 1);
    v10 =g4_m128_lane<float>(v53, 2) -g4_m128_lane<float>(v3[20], 2);
g4_m128_raw(v11) = LODWORD(v43);
    v12 = *(float *)(v2 + 68) * *(float *)(v51 + 12);
    v13 =g4_m128_lane<float>(v53, 0) -g4_m128_lane<float>(v3[20], 0);
g4_m128_lane<float>(v11, 0) = (float)((float)(v43 - v42) * v12)
                    + (float)((float)((float)((float)(g4_m128_lane<float>(v3[28], 1) * v10) - (float)(g4_m128_lane<float>(v3[28], 2) * v9))
                                    +g4_m128_lane<float>(v3[27], 0))
                            * *(float *)(v2 + 64));
    v14 = (float)((float)(v41 - v40) * v12)
        + (float)((float)((float)((float)(g4_m128_lane<float>(v3[28], 2) * v13) - (float)(v10 *g4_m128_lane<float>(v3[28], 0)))
                        +g4_m128_lane<float>(v3[27], 1))
                * *(float *)(v2 + 64));
g4_m128_raw(v15) = LODWORD(v56);
    v16 = (float)((float)(v39 - v38) * v12)
        + (float)((float)((float)((float)(v9 *g4_m128_lane<float>(v3[28], 0)) - (float)(v13 *g4_m128_lane<float>(v3[28], 1)))
                        +g4_m128_lane<float>(v3[27], 2))
                * *(float *)(v2 + 64));
g4_m128_lane<float>(v15, 0) = (float)((float)(v56 *g4_m128_lane<float>(v11, 0)) + (float)(v60 * v14)) + (float)(v64 * v16);
g4_m128_raw(v17) = LODWORD(v57);
g4_m128_lane<float>(v17, 0) = (float)((float)(v57 *g4_m128_lane<float>(v11, 0)) + (float)(v61 * v14)) + (float)(v65 * v16);
g4_m128_raw(v18) = LODWORD(v58);
g4_m128_lane<float>(v18, 0) = (float)((float)(v58 *g4_m128_lane<float>(v11, 0)) + (float)(v62 * v14)) + (float)(v66 * v16);
g4_m128_lane<float>(v11, 0) = (float)((float)(g4_m128_lane<float>(v11, 0) * v55) + (float)(v14 * v59)) + (float)(v16 * v63);
    v19 = _mm_xor_ps(v17, g4_m128_from<__m128>(0x80000000));
    v20 = _mm_xor_ps(v15, g4_m128_from<__m128>(0x80000000));
    v21 = _mm_xor_ps(v18, g4_m128_from<__m128>(0x80000000));
    v22 = _mm_xor_ps(v11, g4_m128_from<__m128>(0x80000000));
    v76[0] = __PAIR64__(g4_m128_lane<uint32_t>(v20, 0),g4_m128_lane<uint32_t>(v22, 0));
    v25 = v22;
    v76[1] = __PAIR64__(g4_m128_lane<uint32_t>(v21, 0),g4_m128_lane<uint32_t>(v19, 0));
    v23 = v44[51];
    v24 = v23 == 0.0;
    v47 = v23;
g4_m128_lane<float>(v25, 0) = (float)((float)(g4_m128_lane<float>(v22, 0) *g4_m128_lane<float>(v22, 0)) + (float)(g4_m128_lane<float>(v20, 0) *g4_m128_lane<float>(v20, 0)))
                    + (float)(g4_m128_lane<float>(v19, 0) *g4_m128_lane<float>(v19, 0));
    if ( __builtin_isnan(v23) || (v26 = 0.0, !v24) )
    {
      v45 = (float)(2.0
                  - (float)(v47
                          * COERCE_FLOAT((2130706432 - LODWORD(v47)) & ((LODWORD(v47) ^ (LODWORD(v47) + 2139095040)) >> 31))))
          * COERCE_FLOAT((2130706432 - LODWORD(v47)) & ((LODWORD(v47) ^ (LODWORD(v47) + 2139095040)) >> 31));
      v26 = (float)(v45 * (float)(2.0 - (float)(v47 * v45)))
          * (float)(2.0 - (float)(v47 * (float)(v45 * (float)(2.0 - (float)(v47 * v45)))));
    }
g4_m128_raw(v27) = *(unsigned int *)(v2 + 72);
g4_m128_lane<float>(v27, 0) = (float)(g4_m128_lane<float>(v27, 0) * *(float *)(v51 + 8)) * v26;
    if (g4_m128_lane<float>(v25, 0) > (float)(g4_m128_lane<float>(v27, 0) *g4_m128_lane<float>(v27, 0)) )
    {
g4_m128_raw(v28) = 0u;
      if (g4_m128_lane<float>(v25, 0) > 0.0 )
      {
        v48 = 0.5 *g4_m128_lane<float>(v25, 0);
        v29 = ((_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v25))) + 2139095040) >> 31)
            & (1597463174 - (_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v25))) >> 1));
        v30 = (float)(1.5 * *(float *)&v29)
            - (float)((float)((float)(0.5 *g4_m128_lane<float>(v25, 0)) * *(float *)&v29) * (float)(*(float *)&v29 * *(float *)&v29));
        v31 = 1.5 * v30;
        v32 = (float)(v48 * v30) * (float)(v30 * v30);
g4_m128_raw(v33) = 0x3FC00000u;
        v34 = v31 - v32;
g4_m128_lane<float>(v33, 0) = 1.5 * v34;
        v28 = v33;
g4_m128_lane<float>(v28, 0) = (float)(1.5 * v34) - (float)((float)(v48 * v34) * (float)(v34 * v34));
      }
g4_m128_lane<uint64_t>(v35, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v22, v20), 0);
g4_m128_lane<uint64_t>(v35, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v19, v21), 0);
      *(__m128 *)v76 = _mm_mul_ps(v35, _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), _mm_shuffle_ps(v28, v28, 0)));
    }
    hkpEntity::activate((hkpEntity::Self *)v3);
    v36 =g4_m128_lane<int32_t>(v3[14], 0);
    v37 = 0;
    (*(void (**)(hkMatrix3f::Self *, uint64_t *, __m128 *))(v36 + 100))(v50, v76, &v53);
    result = *(hkMatrix3f::Self **)(v2 + 88);
    if ( (int)(uintptr_t)(result) > 0 )
    {
      do
        result = (hkMatrix3f::Self *)(*(int (**)(int, int, uint64_t *))(*(uint32_t *)(v2 + 84) + 4 * v37++))(v2, v51, v76);
      while ( *(uint32_t *)(v2 + 88) > v37 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMouseSpringAction::Destroy  (binary VA: 0x1829ec0)
// Original: hkpMouseSpringAction::~hkpMouseSpringAction
// ----------------------------------------------------------------------------
void hkpMouseSpringAction::Destroy(hkpMouseSpringAction::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1948);
  v1 = *((uint32_t *)self + 23);
  *((uint32_t *)self + 22) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 21),
      4 * v1);
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 23) = 0x80000000;
  hkpUnaryAction::Destroy(self);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 96;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpMouseSpringAction::Destroy_ea1829f60  (binary VA: 0x1829f60)
// Original: hkpMouseSpringAction::~hkpMouseSpringAction
// ----------------------------------------------------------------------------
void hkpMouseSpringAction::Destroy_ea1829f60(hkpMouseSpringAction::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1948);
  v1 = *((uint32_t *)self + 23);
  *((uint32_t *)self + 22) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 21),
      4 * v1);
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 23) = 0x80000000;
  hkpUnaryAction::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpMouseSpringAction::Construct  (binary VA: 0x1829fd0)
// Original: hkpMouseSpringAction::hkpMouseSpringAction
// ----------------------------------------------------------------------------
void hkpMouseSpringAction::Construct(hkpMouseSpringAction::Self *self, hkpRigidBody::Self *a2)
{
  hkpUnaryAction::Construct(self, a2, 0);
  *((uint32_t *)self + 16) = 1056964608;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1948);
  *((uint32_t *)self + 17) = 1050253722;
  *((uint32_t *)self + 18) = 1132068864;
  *((uint32_t *)self + 19) = 1064514355;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0x80000000;
  *((uint32_t *)self + 20) = -1;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  hkStringPtr::opAssign((hkpMouseSpringAction::Self *)((char *)self + 20), (hkString::Self *)hkpMouseSpringAction::s_name);
}

// ----------------------------------------------------------------------------
// Function: hkpMouseSpringAction::clone  (binary VA: 0x182a090)
// Original: hkpMouseSpringAction::clone
// ----------------------------------------------------------------------------
hkpMouseSpringAction::Self * hkpMouseSpringAction::clone(uint32_t *a1, int a2, int a3)
{
  hkpMouseSpringAction::Self *result;
  int address;
  hkpMouseSpringAction::Self *v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  typedef int _g4_t_v13;
  typedef signed int _g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef hkpRigidBody::Self *_g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v14)) > _g4_s1 ? (20u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v15)) > _g4_s2 ? (24u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v16)) > _g4_s3 ? (28u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);

  result = nullptr;
  if ( *(uint32_t *)(a2 + 4) == 1 && *(uint32_t *)(a3 + 4) == 0 )
  {
    v16 = **(hkpRigidBody::Self ***)a2;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v5 = (hkpMouseSpringAction::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                   *(uint32_t *)(*(uint32_t *)address + 44),
                                   96);
    hkpMouseSpringAction::Construct(v5, v16);
    *((uint32_t *)v5 + 8) = a1[8];
    *((uint32_t *)v5 + 9) = a1[9];
    *((uint32_t *)v5 + 10) = a1[10];
    *((uint32_t *)v5 + 11) = a1[11];
    *((uint32_t *)v5 + 12) = a1[12];
    *((uint32_t *)v5 + 13) = a1[13];
    *((uint32_t *)v5 + 14) = a1[14];
    *((uint32_t *)v5 + 15) = a1[15];
    *((uint32_t *)v5 + 16) = a1[16];
    *((uint32_t *)v5 + 17) = a1[17];
    *((uint32_t *)v5 + 18) = a1[18];
    *((uint32_t *)v5 + 19) = a1[19];
    *((uint32_t *)v5 + 4) = a1[4];
    *((uint32_t *)v5 + 20) = a1[20];
    v6 = a1[22];
    if ( (*((uint32_t *)v5 + 23) & 0x3FFFFFFF) < v6 )
    {
      if ( *((int *)v5 + 23) >= 0 )
      {
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *((uint32_t *)v5 + 21),
          4 * *((uint32_t *)v5 + 23));
        v6 = a1[22];
      }
      v18 = 4 * v6;
      v10 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              &v18);
      v11 = v18;
      *((uint32_t *)v5 + 21) = v10;
      v17 = v10;
      *((uint32_t *)v5 + 23) = v11 / 4;
      v14 = a1[22];
      v7 = v14;
    }
    else
    {
      v14 = a1[22];
      v17 = *((uint32_t *)v5 + 21);
      v7 = v14;
    }
    *((uint32_t *)v5 + 22) = v7;
    v15 = a1[21];
    if ( (int)v7 <= 0 )
      return v5;
    if ( (v17 >= v15 + 16 || v15 >= v17 + 16) && v7 > 0xB )
    {
      v8 = 0;
      v9 = 0;
      v13 = 4 * (v7 >> 2);
      do
      {
        ++v9;
        *(__m128i *)(v17 + v8) = *(__m128i *)(v15 + v8);
        v8 += 16;
      }
      while ( v7 >> 2 > v9 );
      if ( v14 != v13 )
      {
        *(uint32_t *)(v17 + 16 * (v7 >> 2)) = *(uint32_t *)(v15 + 16 * (v7 >> 2));
        if ( v14 > v13 + 1 )
        {
          *(uint32_t *)(v17 + 4 * (v13 + 1)) = *(uint32_t *)(v15 + 4 * (v13 + 1));
          if ( v14 > v13 + 2 )
            *(uint32_t *)(v17 + 4 * (v13 + 2)) = *(uint32_t *)(v15 + 4 * (v13 + 2));
        }
      }
      return v5;
    }
    v12 = 0;
    do
    {
      *(uint32_t *)(v17 + 4 * v12) = *(uint32_t *)(v15 + 4 * v12);
      ++v12;
    }
    while ( v12 != v14 );
    return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMouseSpringAction::Construct  (binary VA: 0x182a300)
// Original: hkpMouseSpringAction::hkpMouseSpringAction
// ----------------------------------------------------------------------------
hkStringPtr::Self * hkpMouseSpringAction::Construct(hkpUnaryAction::Self *a1, uint32_t *a2, uint32_t *a3, int a4, int a5, int a6, hkpEntity::Self *a7, int *a8)
{
  int v8;
  int v9;
  unsigned int v10;
  int v11; // kr00_4
  unsigned int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  void (*v18)(uint32_t *, char *, uint8_t *, uint32_t *);
  int i;
  typedef signed int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[32];
  typedef uint32_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[80];
  typedef uint32_t _g4_t_v27[12];
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t _g4_t_v30[4];
  typedef char _g4_t_v31;
  typedef char _g4_t_v32;
  typedef int16_t _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t _g4_t_v39[15];
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v22)) > _g4_s1 ? (24u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v23)) > _g4_s2 ? (28u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v24)) > _g4_s3 ? (32u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v25)) > _g4_s4 ? (64u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (128u + sizeof(_g4_t_v26)) > _g4_s5 ? (128u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (208u + sizeof(_g4_t_v27)) > _g4_s6 ? (208u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (256u + sizeof(_g4_t_v28)) > _g4_s7 ? (256u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (268u + sizeof(_g4_t_v29)) > _g4_s8 ? (268u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (288u + sizeof(_g4_t_v30)) > _g4_s9 ? (288u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (304u + sizeof(_g4_t_v31)) > _g4_s10 ? (304u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (305u + sizeof(_g4_t_v32)) > _g4_s11 ? (305u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (306u + sizeof(_g4_t_v33)) > _g4_s12 ? (306u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (308u + sizeof(_g4_t_v34)) > _g4_s13 ? (308u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (312u + sizeof(_g4_t_v35)) > _g4_s14 ? (312u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (313u + sizeof(_g4_t_v36)) > _g4_s15 ? (313u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (314u + sizeof(_g4_t_v37)) > _g4_s16 ? (314u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (316u + sizeof(_g4_t_v38)) > _g4_s17 ? (316u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (320u + sizeof(_g4_t_v39)) > _g4_s18 ? (320u + sizeof(_g4_t_v39)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 128u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 208u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 256u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 268u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 288u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 304u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 305u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 306u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 308u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 312u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 313u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 314u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 316u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 320u);

  hkpUnaryAction::Construct(a1, a7, 0);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A1948);
  *((uint32_t *)a1 + 8) = *a2;
  *((uint32_t *)a1 + 9) = a2[1];
  *((uint32_t *)a1 + 10) = a2[2];
  *((uint32_t *)a1 + 11) = a2[3];
  *((uint32_t *)a1 + 12) = *a3;
  *((uint32_t *)a1 + 13) = a3[1];
  *((uint32_t *)a1 + 14) = a3[2];
  v8 = a3[3];
  *((uint32_t *)a1 + 16) = a4;
  *((uint32_t *)a1 + 15) = v8;
  *((uint32_t *)a1 + 21) = 0;
  *((uint32_t *)a1 + 17) = a5;
  *((uint32_t *)a1 + 22) = 0;
  *((uint32_t *)a1 + 23) = 0x80000000;
  *((uint32_t *)a1 + 19) = a6;
  *((uint32_t *)a1 + 18) = 1132068864;
  if ( a8 != nullptr )
  {
    v9 = a8[1];
    if ( v9 <= 0 )
    {
      *((uint32_t *)a1 + 22) = v9;
    }
    else
    {
      v30[0] = 4 * v9;
      v10 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v30);
      v11 = v30[0];
      *((uint32_t *)a1 + 21) = v10;
      *((uint32_t *)a1 + 23) = v11 / 4;
      v12 = a8[1];
      *((uint32_t *)a1 + 22) = v12;
      v23 = *a8;
      if ( (int)v12 > 0 )
      {
        if ( (v10 >= v23 + 16 || *a8 >= v10 + 16) && v12 > 0xB )
        {
          v21 = v12;
          v13 = 0;
          v22 = v12 >> 2;
          v14 = 4 * (v12 >> 2);
          v15 = 0;
          do
          {
            ++v15;
            *(__m128i *)(v10 + v13) = *(__m128i *)(v23 + v13);
            v13 += 16;
          }
          while ( v22 > v15 );
          if ( v14 != v21 )
          {
            *(uint32_t *)(v10 + 4 * v14) = *(uint32_t *)(v23 + 4 * v14);
            if ( v21 > v14 + 1 )
            {
              *(uint32_t *)(v10 + 4 * (v14 + 1)) = *(uint32_t *)(v23 + 4 * (v14 + 1));
              if ( v21 > v14 + 2 )
                *(uint32_t *)(v10 + 4 * (v14 + 2)) = *(uint32_t *)(v23 + 4 * (v14 + 2));
            }
          }
        }
        else
        {
          for ( i = 0; i != v12; ++i )
            *(uint32_t *)(v10 + 4 * i) = *(uint32_t *)(v23 + 4 * i);
        }
      }
    }
  }
  v16 = *((uint32_t *)a7 + 2);
  *((uint32_t *)a1 + 20) = -1;
  if ( v16 != 0 )
  {
    hkpSphereShape::Construct((hkpSphereShape::Self *)v24, 1.0);
    v25[0] = 1065353216;
    memset(&v25[1], 0, 16);
    v25[5] = 1065353216;
    memset(&v25[6], 0, 16);
    v25[10] = 1065353216;
    v25[11] = 0;
    v25[12] = *a3;
    v25[13] = a3[1];
    v25[14] = a3[2];
    v25[15] = a3[3];
    v30[0] = (uint32_t)(uintptr_t)(v24);
    v30[2] = (uint32_t)(uintptr_t)(v25);
    v30[3] = 0;
    v30[1] = -1;
    v31 = 0;
    v34 = 0;
    v35 = 0;
    v38 = 0;
    v37 = -1;
    v36 = 127;
    hkpCollidable::BoundingVolumeData::BoundingVolumeData((hkpCollidable::BoundingVolumeData::Self *)v39);
    v39[11] = -1082130432;
    v36 = -20;
    v17 = *((uint32_t *)a7 + 4);
    v32 = 8;
    v33 = 0;
    v18 = *(void (**)(uint32_t *, char *, uint8_t *, uint32_t *))(*(uint32_t *)(v16 + 120)
                                                                  + 20
                                                                  * *(uint8_t *)(*(uint8_t *)(v17 + 8)
                                                                                       + 35 * v24[8]
                                                                                       + *(uint32_t *)(v16 + 120)
                                                                                       + 416)
                                                                  + 2876);
    std::memcpy(v26, *(const void **)(v16 + 112), sizeof(v26));
    v27[1] = 2139095022;
    v27[0] = ((uint32_t)(uintptr_t)&off_20998B0);
    v28 = 0;
    v27[11] = 2139095022;
    v18(v30, (char *)a7 + 16, v26, v27);
    if ( v28 != 0 )
      *((uint32_t *)a1 + 20) = v29;
  }
  return hkStringPtr::opAssign((hkpUnaryAction::Self *)((char *)a1 + 20), (hkString::Self *)hkpMouseSpringAction::s_name);
}

// ----------------------------------------------------------------------------
// Function: hkpMouseSpringAction::setMousePosition  (binary VA: 0x182a770)
// Original: hkpMouseSpringAction::setMousePosition
// ----------------------------------------------------------------------------
int hkpMouseSpringAction::setMousePosition(hkpMouseSpringAction::Self *self, const hkVector4f::Self *a2)
{
  float v2; // xmm0_4
  uint8_t v3;
  int v4;
  int v5;
  int result;

  v2 = fabs(*((float *)a2 + 2) - *((float *)self + 14));
  v3 = (fabs(*(float *)a2 - *((float *)self + 12)) <= 0.001f)
     | (fabs(*((float *)a2 + 1) - *((float *)self + 13)) <= 0.001f ? 2 : 0);
  LOBYTE(v4) = v2 <= 0.001f ? 4 : 0;
  if ( fabs(*((float *)a2 + 3) - *((float *)self + 15)) <= 0.001f )
    v4 = v2 > 0.001f ? 8 : 12;
  if ( (((uint8_t)v4 | v3) & 7) != 7 )
  {
    v5 = *((uint32_t *)self + 6);
    if ( v5 != 0 && *(uint32_t *)(v5 + 8) != 0 )
      hkpEntity::activate(*((hkpEntity::Self **)self + 6));
  }
  *((uint32_t *)self + 12) = *(uint32_t *)a2;
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 2);
  result = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 15) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMouseSpringAction::setMaxRelativeForce  (binary VA: 0x182a840)
// Original: hkpMouseSpringAction::setMaxRelativeForce
// ----------------------------------------------------------------------------
hkpMouseSpringAction::Self * hkpMouseSpringAction::setMaxRelativeForce(hkpMouseSpringAction::Self *self, float a2)
{
  *((float *)self + 18) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMouseSpringAction::entityRemovedCallback  (binary VA: 0x182a860)
// Original: hkpMouseSpringAction::entityRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpMouseSpringAction::entityRemovedCallback(hkpMouseSpringAction::Self *self)
{
  hkpWorld::Self *result;

  result = hkpUnaryAction::entityRemovedCallback(self);
  *((uint32_t *)self + 6) = 0;
  return result;
}


