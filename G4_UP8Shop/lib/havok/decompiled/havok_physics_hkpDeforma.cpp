#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpDeforma.h"

// ----------------------------------------------------------------------------
// Function: hkpDeformableFixedConstraintData::Atoms::staticClass  (binary VA: 0x1712830)
// Original: hkpDeformableFixedConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpDeformableFixedConstraintData::Atoms::staticClass()
{
  return &hkpDeformableFixedConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpDeformableFixedConstraintData::staticClass  (binary VA: 0x1712850)
// Original: hkpDeformableFixedConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpDeformableFixedConstraintData::staticClass()
{
  return &hkpDeformableFixedConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpDeformableAngConstraintAtom::staticClass  (binary VA: 0x17199b0)
// Original: hkpDeformableAngConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpDeformableAngConstraintAtom::staticClass()
{
  return &hkpDeformableAngConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpDeformableLinConstraintAtom::staticClass  (binary VA: 0x17199d0)
// Original: hkpDeformableLinConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpDeformableLinConstraintAtom::staticClass()
{
  return &hkpDeformableLinConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpDeformableFixedConstraintData::getRuntimeInfo  (binary VA: 0x171c030)
// Original: hkpDeformableFixedConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
int hkpDeformableFixedConstraintData::getRuntimeInfo(int a1, char a2, uint32_t *a3)
{
  int result;

  *a3 = a2 != 0 ? 0x30 : 0;
  result = a2 == 0 ? 0 : 6;
  a3[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpDeformableFixedConstraintData::isValid  (binary VA: 0x171c060)
// Original: hkpDeformableFixedConstraintData::isValid
// ----------------------------------------------------------------------------
hkpDeformableFixedConstraintData::Self * hkpDeformableFixedConstraintData::isValid(hkpDeformableFixedConstraintData::Self *self)
{
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpDeformableFixedConstraintData::getType  (binary VA: 0x171c070)
// Original: hkpDeformableFixedConstraintData::getType
// ----------------------------------------------------------------------------
int hkpDeformableFixedConstraintData::getType()
{
  return 24;
}

// ----------------------------------------------------------------------------
// Function: hkpDeformableFixedConstraintData::Destroy  (binary VA: 0x171c080)
// Original: hkpDeformableFixedConstraintData::~hkpDeformableFixedConstraintData
// ----------------------------------------------------------------------------
void hkpDeformableFixedConstraintData::Destroy(hkpDeformableFixedConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpDeformableFixedConstraintData::getConstraintInfo  (binary VA: 0x171c0a0)
// Original: hkpDeformableFixedConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpDeformableFixedConstraintData::getConstraintInfo(int a1, uint32_t *a2)
{
  return hkpConstraintData::getConstraintInfoUtil(a1 + 16, 336, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpDeformableFixedConstraintData::Destroy_ea171c0e0  (binary VA: 0x171c0e0)
// Original: hkpDeformableFixedConstraintData::~hkpDeformableFixedConstraintData
// ----------------------------------------------------------------------------
void hkpDeformableFixedConstraintData::Destroy_ea171c0e0(hkpDeformableFixedConstraintData::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 352;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpDeformableFixedConstraintData::Construct  (binary VA: 0x171c140)
// Original: hkpDeformableFixedConstraintData::hkpDeformableFixedConstraintData
// ----------------------------------------------------------------------------
void hkpDeformableFixedConstraintData::Construct(hkpDeformableFixedConstraintData::Self *self)
{
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 46) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D428);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 2;
  *((uint16_t *)self + 80) = 25;
  *((uint32_t *)self + 47) = 0;
  *((uint16_t *)self + 128) = 26;
  *((uint32_t *)self + 68) = 0;
  *((uint32_t *)self + 69) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 70) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 71) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 24) = 1065353216;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 48) = 2139095022;
  *((uint32_t *)self + 49) = 2139095022;
  *((uint32_t *)self + 50) = 2139095022;
  *((uint32_t *)self + 51) = 2139095022;
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 54) = 0;
  *((uint32_t *)self + 55) = 0;
  *((uint32_t *)self + 56) = 2139095022;
  *((uint32_t *)self + 57) = 2139095022;
  *((uint32_t *)self + 58) = 2139095022;
  *((uint32_t *)self + 59) = 2139095022;
  *((uint32_t *)self + 60) = 0;
  *((uint32_t *)self + 61) = 0;
  *((uint32_t *)self + 62) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 72) = 2139095022;
  *((uint32_t *)self + 73) = 2139095022;
  *((uint32_t *)self + 74) = 2139095022;
  *((uint32_t *)self + 76) = 0;
  *((uint32_t *)self + 77) = 0;
  *((uint32_t *)self + 78) = 0;
  *((uint32_t *)self + 79) = 0;
  *((uint32_t *)self + 80) = 2139095022;
  *((uint32_t *)self + 81) = 2139095022;
  *((uint32_t *)self + 82) = 2139095022;
  *((uint32_t *)self + 83) = 2139095022;
  *((uint32_t *)self + 84) = 0;
  *((uint32_t *)self + 85) = 0;
  *((uint32_t *)self + 86) = 0;
  *((uint32_t *)self + 87) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpDeformableFixedConstraintData::setInWorldSpace  (binary VA: 0x171c3f0)
// Original: hkpDeformableFixedConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
int hkpDeformableFixedConstraintData::setInWorldSpace(hkpDeformableFixedConstraintData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, const hkTransformf::Self *a5)
{
  float v6; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm5_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm4_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm4_4
  float v41; // xmm2_4
  float v42; // xmm3_4
  float v43; // xmm1_4
  float v44; // xmm5_4
  float v45; // xmm0_4
  float v46; // xmm0_4
  float v47; // xmm4_4
  float v48; // xmm2_4
  float v49; // xmm1_4
  float v50; // xmm3_4
  float v51; // xmm0_4
  float v52; // xmm2_4
  float v53; // xmm0_4
  float v54; // xmm4_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm3_4
  float v58; // xmm0_4
  float v59; // xmm2_4
  float v60; // xmm4_4
  float v61; // xmm3_4
  float v62; // xmm0_4
  float v63; // xmm2_4
  float v64; // xmm0_4
  float v65; // xmm4_4
  float v66; // xmm3_4
  float v67; // xmm2_4
  float v68; // xmm1_4
  float v69; // xmm0_4
  float v70; // xmm2_4
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm0_4
  float v74; // xmm1_4
  float v75; // xmm0_4
  int v76;
  int v77;
  int v78;
  float *v79;
  float *v80;
  float v81; // xmm0_4
  float v82; // xmm2_4
  __m128i v83;
  float v84; // xmm7_4
  float v85; // xmm3_4
  float v86; // xmm2_4
  __m128i v87;
  float v88; // xmm5_4
  int result;
  float v90; // xmm1_4
  float v91; // xmm6_4
  float v92; // xmm0_4
  float v93; // xmm6_4
  typedef int _g4_t_v94;
  typedef float *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float *_g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef int _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef uint32_t _g4_t_v106[4];
  typedef uint32_t _g4_t_v107[3];
  typedef float _g4_t_v108;
  typedef float _g4_t_v109[15];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v94)) > _g4_s0 ? (12u + sizeof(_g4_t_v94)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v95)) > _g4_s1 ? (16u + sizeof(_g4_t_v95)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v96)) > _g4_s2 ? (20u + sizeof(_g4_t_v96)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v97)) > _g4_s3 ? (24u + sizeof(_g4_t_v97)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v98)) > _g4_s4 ? (24u + sizeof(_g4_t_v98)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v99)) > _g4_s5 ? (28u + sizeof(_g4_t_v99)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v100)) > _g4_s6 ? (32u + sizeof(_g4_t_v100)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v101)) > _g4_s7 ? (36u + sizeof(_g4_t_v101)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v102)) > _g4_s8 ? (40u + sizeof(_g4_t_v102)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v103)) > _g4_s9 ? (44u + sizeof(_g4_t_v103)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v104)) > _g4_s10 ? (44u + sizeof(_g4_t_v104)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v105)) > _g4_s11 ? (44u + sizeof(_g4_t_v105)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v106)) > _g4_s12 ? (48u + sizeof(_g4_t_v106)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v107)) > _g4_s13 ? (64u + sizeof(_g4_t_v107)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v108)) > _g4_s14 ? (76u + sizeof(_g4_t_v108)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v109)) > _g4_s15 ? (80u + sizeof(_g4_t_v109)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 12u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 16u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 20u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 24u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 24u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 28u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 32u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 36u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 40u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 44u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 44u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 44u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 48u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 64u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 76u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 80u);

  v6 = *((float *)a4 + 12);
  v8 = *((float *)a4 + 13);
  v9 = (float)(*(float *)a2 * v6) + (float)(*((float *)a2 + 1) * v8);
  v10 = *((float *)a2 + 4) * v6;
  v11 = *((float *)a4 + 14);
  v12 = (float)((float)(v6 * *((float *)a2 + 8)) + (float)(v8 * *((float *)a2 + 9)))
      + (float)(*((float *)a2 + 10) * v11);
  v13 = v9 + (float)(v11 * *((float *)a2 + 2));
  *((float *)self + 21) = (float)(v10 + (float)(*((float *)a2 + 5) * v8)) + (float)(*((float *)a2 + 6) * v11);
  *((float *)self + 22) = v12;
  *((float *)self + 20) = v13;
  *((float *)self + 23) = v12;
  v14 = *((float *)a4 + 8);
  v15 = *((float *)a4 + 9);
  v16 = (float)(*(float *)a2 * v14) + (float)(*((float *)a2 + 1) * v15);
  v17 = *((float *)a4 + 10);
  v18 = (float)(*((float *)a2 + 4) * v14) + (float)(*((float *)a2 + 5) * v15);
  v19 = *((float *)a2 + 6) * v17;
  v20 = (float)((float)(v14 * *((float *)a2 + 8)) + (float)(v15 * *((float *)a2 + 9)))
      + (float)(*((float *)a2 + 10) * v17);
  *((float *)self + 16) = v16 + (float)(v17 * *((float *)a2 + 2));
  *((float *)self + 17) = v18 + v19;
  *((float *)self + 18) = v20;
  *((float *)self + 19) = v20;
  v21 = *((float *)a4 + 4);
  v22 = *((float *)a4 + 5);
  v23 = (float)(*(float *)a2 * v21) + (float)(*((float *)a2 + 1) * v22);
  v24 = *((float *)a2 + 4) * v21;
  v25 = *((float *)a4 + 6);
  v26 = (float)((float)(v21 * *((float *)a2 + 8)) + (float)(v22 * *((float *)a2 + 9)))
      + (float)(*((float *)a2 + 10) * v25);
  v27 = v23 + (float)(v25 * *((float *)a2 + 2));
  *((float *)self + 13) = (float)(v24 + (float)(*((float *)a2 + 5) * v22)) + (float)(*((float *)a2 + 6) * v25);
  *((float *)self + 14) = v26;
  *((float *)self + 12) = v27;
  *((float *)self + 15) = v26;
  v28 = *((float *)a4 + 1);
  v29 = *((float *)a4 + 2);
  v30 = (float)((float)(*(float *)a4 * *((float *)a2 + 8)) + (float)(v28 * *((float *)a2 + 9)))
      + (float)(*((float *)a2 + 10) * v29);
  v31 = (float)((float)(*(float *)a2 * *(float *)a4) + (float)(*((float *)a2 + 1) * v28))
      + (float)(v29 * *((float *)a2 + 2));
  *((float *)self + 9) = (float)((float)(*((float *)a2 + 4) * *(float *)a4) + (float)(*((float *)a2 + 5) * v28))
                       + (float)(*((float *)a2 + 6) * v29);
  *((float *)self + 8) = v31;
  *((float *)self + 10) = v30;
  *((float *)self + 11) = v30;
  v32 = *((float *)a4 + 12) - *((float *)a2 + 12);
  v33 = *((float *)a4 + 13) - *((float *)a2 + 13);
  v34 = *((float *)a4 + 14) - *((float *)a2 + 14);
  v35 = (float)(*(float *)a2 * v32) + (float)(*((float *)a2 + 1) * v33);
  v36 = *((float *)a2 + 4) * v32;
  v37 = (float)((float)(v32 * *((float *)a2 + 8)) + (float)(v33 * *((float *)a2 + 9)))
      + (float)(*((float *)a2 + 10) * v34);
  v38 = v35 + (float)(v34 * *((float *)a2 + 2));
  *((float *)self + 21) = (float)(v36 + (float)(*((float *)a2 + 5) * v33)) + (float)(*((float *)a2 + 6) * v34);
  *((float *)self + 22) = v37;
  *((float *)self + 20) = v38;
  *((float *)self + 23) = v37;
  v39 = *((float *)a5 + 12);
  v40 = *((float *)a5 + 13);
  v41 = (float)(*(float *)a3 * v39) + (float)(*((float *)a3 + 1) * v40);
  v42 = *((float *)a5 + 14);
  v43 = (float)(*((float *)a3 + 4) * v39) + (float)(*((float *)a3 + 5) * v40);
  v44 = *((float *)a3 + 6) * v42;
  v45 = (float)((float)(v39 * *((float *)a3 + 8)) + (float)(v40 * *((float *)a3 + 9)))
      + (float)(*((float *)a3 + 10) * v42);
  *((float *)self + 36) = v41 + (float)(v42 * *((float *)a3 + 2));
  *((float *)self + 37) = v43 + v44;
  *((float *)self + 38) = v45;
  *((float *)self + 39) = v45;
  v46 = *((float *)a5 + 8);
  v47 = *((float *)a5 + 9);
  v48 = (float)(*(float *)a3 * v46) + (float)(*((float *)a3 + 1) * v47);
  v49 = *((float *)a3 + 4) * v46;
  v50 = *((float *)a5 + 10);
  v51 = (float)((float)(v46 * *((float *)a3 + 8)) + (float)(v47 * *((float *)a3 + 9)))
      + (float)(*((float *)a3 + 10) * v50);
  v52 = v48 + (float)(v50 * *((float *)a3 + 2));
  *((float *)self + 33) = (float)(v49 + (float)(*((float *)a3 + 5) * v47)) + (float)(*((float *)a3 + 6) * v50);
  *((float *)self + 34) = v51;
  *((float *)self + 32) = v52;
  *((float *)self + 35) = v51;
  v53 = *((float *)a5 + 4);
  v54 = *((float *)a5 + 5);
  v55 = (float)(*(float *)a3 * v53) + (float)(*((float *)a3 + 1) * v54);
  v56 = *((float *)a3 + 4) * v53;
  v57 = *((float *)a5 + 6);
  v58 = (float)((float)(v53 * *((float *)a3 + 8)) + (float)(v54 * *((float *)a3 + 9)))
      + (float)(*((float *)a3 + 10) * v57);
  v59 = v55 + (float)(v57 * *((float *)a3 + 2));
  *((float *)self + 29) = (float)(v56 + (float)(*((float *)a3 + 5) * v54)) + (float)(*((float *)a3 + 6) * v57);
  *((float *)self + 30) = v58;
  *((float *)self + 28) = v59;
  *((float *)self + 31) = v58;
  v60 = *((float *)a5 + 1);
  v61 = *((float *)a5 + 2);
  v62 = (float)((float)(*(float *)a5 * *((float *)a3 + 8)) + (float)(v60 * *((float *)a3 + 9)))
      + (float)(*((float *)a3 + 10) * v61);
  v63 = (float)((float)(*(float *)a3 * *(float *)a5) + (float)(*((float *)a3 + 1) * v60))
      + (float)(v61 * *((float *)a3 + 2));
  *((float *)self + 25) = (float)((float)(*((float *)a3 + 4) * *(float *)a5) + (float)(*((float *)a3 + 5) * v60))
                        + (float)(*((float *)a3 + 6) * v61);
  *((float *)self + 26) = v62;
  *((float *)self + 24) = v63;
  *((float *)self + 27) = v62;
  v64 = *((float *)a5 + 12) - *((float *)a3 + 12);
  v65 = *((float *)a5 + 13) - *((float *)a3 + 13);
  v66 = *((float *)a5 + 14) - *((float *)a3 + 14);
  v67 = (float)(*(float *)a3 * v64) + (float)(*((float *)a3 + 1) * v65);
  v68 = (float)(*((float *)a3 + 4) * v64) + (float)(*((float *)a3 + 5) * v65);
  v69 = (float)((float)(v64 * *((float *)a3 + 8)) + (float)(v65 * *((float *)a3 + 9)))
      + (float)(*((float *)a3 + 10) * v66);
  v70 = v67 + (float)(v66 * *((float *)a3 + 2));
  *((float *)self + 37) = v68 + (float)(*((float *)a3 + 6) * v66);
  *((float *)self + 36) = v70;
  *((float *)self + 38) = v69;
  *((float *)self + 39) = v69;
  v71 = *((float *)a5 + 12) - *((float *)a4 + 12);
  v72 = *((float *)a5 + 13) - *((float *)a4 + 13);
  v73 = *((float *)a5 + 14) - *((float *)a4 + 14);
  v102 = (float)((float)(*((float *)a2 + 1) * v72) + (float)(*(float *)a2 * v71)) + (float)(*((float *)a2 + 2) * v73);
  v101 = (float)((float)(*((float *)a2 + 5) * v72) + (float)(*((float *)a2 + 4) * v71))
       + (float)(*((float *)a2 + 6) * v73);
  v100 = (float)((float)(v72 * *((float *)a2 + 9)) + (float)(v71 * *((float *)a2 + 8)))
       + (float)(v73 * *((float *)a2 + 10));
  hkMatrix3f::setMulInverseMul((hkMatrix3f::Self *)v109, a4, a5);
  v74 = v109[0];
  v75 = (float)(v109[0] + v109[5]) + v109[10];
  if ( v75 > 0.0 )
  {
    v92 = v75 + 1.0;
    v93 = fsqrt(v92);
    if ( __builtin_isnan(v93) )
    {
      v105 = sqrtf(v92);
      v93 = v105;
    }
g4_m128_raw(v83) = LODWORD(v109[6]);
    v104 = v93 * 0.5;
    v84 = v93 * 0.5;
    v86 = (float)(v109[1] - v109[4]) * (float)(0.5 / v93);
    v85 = (float)(v109[8] - v109[2]) * (float)(0.5 / v93);
    *(float *)g4_m128_ptr<int32_t>(v83) = (float)(v109[6] - v109[9]) * (float)(0.5 / v93);
  }
  else
  {
    v106[0] = 1;
    v76 = v109[5] > v109[0];
    v106[1] = 2;
    v106[2] = 0;
    if ( v109[10] > v109[4 * v76 + v76] )
    {
      v97 = 4;
      v99 = v109;
      v78 = 8;
      v77 = 1;
      v103 = 0;
      v76 = 2;
    }
    else
    {
      v103 = v106[v76];
      v77 = v106[v103];
      v99 = &v109[4 * v103];
      v74 = v99[v103];
      v78 = 4 * (v109[5] > v109[0]);
      v97 = 4 * v77;
    }
    v79 = &v109[v78];
    v80 = &v109[v97];
    v81 = (float)(v79[v76] - (float)(v74 + v109[v97 + v77])) + 1.0;
    v82 = fsqrt(v81);
    if ( __builtin_isnan(v82) )
    {
      v94 = v77;
      v95 = v79;
      v96 = v76;
      v98 = sqrtf(v81);
      v77 = v94;
      v82 = v98;
      v79 = v95;
      v76 = v96;
    }
    *(float *)&v107[v76] = v82 * 0.5;
    v108 = (float)(v99[v77] - v80[v103]) * (float)(0.5 / v82);
    *(float *)&v107[v103] = (float)(v79[v103] + v99[v76]) * (float)(0.5 / v82);
    *(float *)&v107[v77] = (float)(v79[v77] + v80[v76]) * (float)(0.5 / v82);
g4_m128_raw(v83) = v107[0];
    v84 = v108;
    v85 = *(float *)&v107[1];
    v86 = *(float *)&v107[2];
    v104 = v108;
  }
  v87 = v83;
  *(float *)g4_m128_ptr<int32_t>(v87) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v83) * *(float *)g4_m128_ptr<int32_t>(v83))
                                          + (float)(v85 * v85))
                                  + (float)(v86 * v86))
                          + (float)(v84 * v84);
  v88 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v87);
  result = ((_mm_cvtsi128_si32(v87) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v87) >> 1));
  v90 = (float)(*(float *)&result * 1.5)
      - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v87)) * *(float *)&result)
              * (float)(*(float *)&result * *(float *)&result));
  *(float *)g4_m128_ptr<int32_t>(v87) = (float)(v90 * 1.5)
                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v87)) * v90) * (float)(v90 * v90));
  v91 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v87))
      - (float)((float)(v88 * *(float *)g4_m128_ptr<int32_t>(v87)) * (float)(*(float *)g4_m128_ptr<int32_t>(v87) * *(float *)g4_m128_ptr<int32_t>(v87)));
  *((float *)self + 44) = v102;
  *((float *)self + 45) = v101;
  *((float *)self + 46) = v100;
  *((float *)self + 68) = *(float *)g4_m128_ptr<int32_t>(v83) * v91;
  *((float *)self + 69) = v85 * v91;
  *((float *)self + 70) = v86 * v91;
  *((float *)self + 71) = v91 * v104;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpDeformableFixedConstraintData::setInBodySpace  (binary VA: 0x171cd30)
// Original: hkpDeformableFixedConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
hkpDeformableFixedConstraintData::Self * hkpDeformableFixedConstraintData::setInBodySpace(hkpDeformableFixedConstraintData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3)
{
  *((uint32_t *)self + 8) = *(uint32_t *)a2;
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 12) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 16) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 17) = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 18) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 19) = *((uint32_t *)a2 + 11);
  *((uint32_t *)self + 20) = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 13);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 15);
  *((uint32_t *)self + 24) = *(uint32_t *)a3;
  *((uint32_t *)self + 25) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 28) = *((uint32_t *)a3 + 4);
  *((uint32_t *)self + 29) = *((uint32_t *)a3 + 5);
  *((uint32_t *)self + 30) = *((uint32_t *)a3 + 6);
  *((uint32_t *)self + 31) = *((uint32_t *)a3 + 7);
  *((uint32_t *)self + 32) = *((uint32_t *)a3 + 8);
  *((uint32_t *)self + 33) = *((uint32_t *)a3 + 9);
  *((uint32_t *)self + 34) = *((uint32_t *)a3 + 10);
  *((uint32_t *)self + 35) = *((uint32_t *)a3 + 11);
  *((uint32_t *)self + 36) = *((uint32_t *)a3 + 12);
  *((uint32_t *)self + 37) = *((uint32_t *)a3 + 13);
  *((uint32_t *)self + 38) = *((uint32_t *)a3 + 14);
  *((uint32_t *)self + 39) = *((uint32_t *)a3 + 15);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpDeformableFixedConstraintDrawer::drawConstraint  (binary VA: 0x1af15a0)
// Original: hkpDeformableFixedConstraintDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpDeformableFixedConstraintDrawer::drawConstraint(hkpDeformableFixedConstraintDrawer::Self *self, const hkpDeformableFixedConstraintData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, int a7)
{
  uint8_t v8[28];

  hkpPrimitiveDrawer::setDisplayHandler((hkpDeformableFixedConstraintDrawer::Self *)((char *)self + 192), a5);
  hkpConstraintDrawer::updateCommonParameters(self, a3, a4);
  hkVector4f::setTransformedPos(
    (hkpDeformableFixedConstraintDrawer::Self *)((char *)self + 80),
    a4,
    (const hkpDeformableFixedConstraintData::Self *)((char *)a2 + 144));
  hkVector4f::setTransformedPos(
    (hkpDeformableFixedConstraintDrawer::Self *)((char *)self + 64),
    a3,
    (const hkpDeformableFixedConstraintData::Self *)((char *)a2 + 80));
  hkpConstraintDrawer::drawPivots(self, a6, a7);
  hkpConstraintDrawer::drawBodyFrames(self, a6, a7);
  return (*(int (**)(uint8_t *, hkDebugDisplayHandler::Self *, char *, char *, int, int, int))(*(uint32_t *)a5 + 72))(
           v8,
           a5,
           (char *)self + 64,
           (char *)self + 80,
           -65536,
           a6,
           a7);
}


