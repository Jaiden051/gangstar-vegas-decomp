#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpPointTo.h"

// ----------------------------------------------------------------------------
// Function: hkpPointToPlaneConstraintData::Atoms::staticClass  (binary VA: 0x17161f0)
// Original: hkpPointToPlaneConstraintData::Atoms::staticClass
// ----------------------------------------------------------------------------
void * hkpPointToPlaneConstraintData::Atoms::staticClass()
{
  return &hkpPointToPlaneConstraintDataAtomsClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPlaneConstraintData::staticClass  (binary VA: 0x1716210)
// Original: hkpPointToPlaneConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpPointToPlaneConstraintData::staticClass()
{
  return &hkpPointToPlaneConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathConstraintData::staticClass  (binary VA: 0x1717500)
// Original: hkpPointToPathConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpPointToPathConstraintData::staticClass()
{
  return &hkpPointToPathConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathConstraintData::getConstraintInfo  (binary VA: 0x1721890)
// Original: hkpPointToPathConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpPointToPathConstraintData::getConstraintInfo(int a1, uint32_t *a2)
{
  a2[4] = a1 + 16;
  a2[5] = 16;
  *a2 = 0;
  a2[1] = 384;
  a2[2] = 8;
  a2[3] = 8;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathConstraintData::getRuntimeInfo  (binary VA: 0x17218d0)
// Original: hkpPointToPathConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpPointToPathConstraintData::getRuntimeInfo(int a1, int a2, uint32_t *a3)
{
  a3[1] = 8;
  *a3 = 68;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathConstraintData::isValid  (binary VA: 0x17218f0)
// Original: hkpPointToPathConstraintData::isValid
// ----------------------------------------------------------------------------
hkpPointToPathConstraintData::Self * hkpPointToPathConstraintData::isValid(hkpPointToPathConstraintData::Self *self, int a2)
{
  hkpPointToPathConstraintData::Self *result;

  result = self;
  *(uint8_t *)self = *(uint32_t *)(a2 + 32) != 0 && *(uint8_t *)(a2 + 40) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathConstraintData::getType  (binary VA: 0x1721920)
// Original: hkpPointToPathConstraintData::getType
// ----------------------------------------------------------------------------
int hkpPointToPathConstraintData::getType()
{
  return 3;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathConstraintData::Destroy  (binary VA: 0x1721930)
// Original: hkpPointToPathConstraintData::~hkpPointToPathConstraintData
// ----------------------------------------------------------------------------
void hkpPointToPathConstraintData::Destroy(hkpPointToPathConstraintData::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D848);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
  {
    do
    {
      v3 = *(uint32_t *)(v1 + 4);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
      v4 = v2 | (uint16_t)(v3 - 1);
      v5 = v3;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v5, v4) );
    if ( (uint16_t)v4 == 0 )
      G4_VCALL<void>(v1, 16);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathConstraintData::Destroy_ea17219b0  (binary VA: 0x17219b0)
// Original: hkpPointToPathConstraintData::~hkpPointToPathConstraintData
// ----------------------------------------------------------------------------
void hkpPointToPathConstraintData::Destroy_ea17219b0(hkpPointToPathConstraintData::Self *self)
{
  int v1;
  int v2;

  hkpPointToPathConstraintData::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 176;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathConstraintData::buildJacobian  (binary VA: 0x1721a10)
// Original: hkpPointToPathConstraintData::buildJacobian
// ----------------------------------------------------------------------------
int hkpPointToPathConstraintData::buildJacobian(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  float v11; // xmm6_4
  __m128 v12;
  __m128 v13;
  __m128 v14;
  float v15; // xmm7_4
  int v16;
  int v17;
  __m128 v18;
  float v19; // xmm6_4
  __m128i v20;
  float v21; // xmm5_4
  int v22;
  float v23; // xmm4_4
  float v24; // xmm3_4
  uint32_t *v25;
  int v26;
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  int result;
  int v32;
  long double v33; // fst7
  int v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef long double (*_g4_t_v46)(uint32_t, uint32_t);
  typedef long double (*_g4_t_v47)(uint32_t, uint32_t);
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef int _g4_t_v53;
  typedef char _g4_t_v54;
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
  typedef uint32_t _g4_t_v66[12];
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef uint32_t _g4_t_v83[8];
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef unsigned int _g4_t_v96;
  typedef unsigned int _g4_t_v97;
  typedef unsigned int _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef int *_g4_t_v106;
  typedef uint32_t *_g4_t_v107;
  typedef float _g4_t_v108;
  typedef float *_g4_t_v109;
  enum : size_t {
    _g4_s0 = 464u,
    _g4_s1 = (4u + sizeof(_g4_t_v35)) > _g4_s0 ? (4u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v36)) > _g4_s1 ? (12u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v37)) > _g4_s2 ? (16u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v38)) > _g4_s3 ? (20u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v39)) > _g4_s4 ? (24u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v40)) > _g4_s5 ? (28u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v41)) > _g4_s6 ? (32u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v42)) > _g4_s7 ? (36u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v43)) > _g4_s8 ? (40u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v44)) > _g4_s9 ? (44u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v45)) > _g4_s10 ? (44u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v46)) > _g4_s11 ? (44u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v47)) > _g4_s12 ? (44u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v48)) > _g4_s13 ? (48u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v49)) > _g4_s14 ? (48u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v50)) > _g4_s15 ? (48u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v51)) > _g4_s16 ? (48u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v52)) > _g4_s17 ? (48u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v53)) > _g4_s18 ? (56u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (63u + sizeof(_g4_t_v54)) > _g4_s19 ? (63u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v55)) > _g4_s20 ? (64u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v56)) > _g4_s21 ? (68u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v57)) > _g4_s22 ? (72u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v58)) > _g4_s23 ? (76u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v59)) > _g4_s24 ? (80u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v60)) > _g4_s25 ? (84u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v61)) > _g4_s26 ? (88u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v62)) > _g4_s27 ? (92u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v63)) > _g4_s28 ? (96u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v64)) > _g4_s29 ? (100u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v65)) > _g4_s30 ? (104u + sizeof(_g4_t_v65)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v66)) > _g4_s31 ? (112u + sizeof(_g4_t_v66)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v67)) > _g4_s32 ? (160u + sizeof(_g4_t_v67)) : _g4_s32,
    _g4_s34 = (164u + sizeof(_g4_t_v68)) > _g4_s33 ? (164u + sizeof(_g4_t_v68)) : _g4_s33,
    _g4_s35 = (168u + sizeof(_g4_t_v69)) > _g4_s34 ? (168u + sizeof(_g4_t_v69)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v70)) > _g4_s35 ? (172u + sizeof(_g4_t_v70)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v71)) > _g4_s36 ? (176u + sizeof(_g4_t_v71)) : _g4_s36,
    _g4_s38 = (180u + sizeof(_g4_t_v72)) > _g4_s37 ? (180u + sizeof(_g4_t_v72)) : _g4_s37,
    _g4_s39 = (184u + sizeof(_g4_t_v73)) > _g4_s38 ? (184u + sizeof(_g4_t_v73)) : _g4_s38,
    _g4_s40 = (188u + sizeof(_g4_t_v74)) > _g4_s39 ? (188u + sizeof(_g4_t_v74)) : _g4_s39,
    _g4_s41 = (192u + sizeof(_g4_t_v75)) > _g4_s40 ? (192u + sizeof(_g4_t_v75)) : _g4_s40,
    _g4_s42 = (196u + sizeof(_g4_t_v76)) > _g4_s41 ? (196u + sizeof(_g4_t_v76)) : _g4_s41,
    _g4_s43 = (200u + sizeof(_g4_t_v77)) > _g4_s42 ? (200u + sizeof(_g4_t_v77)) : _g4_s42,
    _g4_s44 = (204u + sizeof(_g4_t_v78)) > _g4_s43 ? (204u + sizeof(_g4_t_v78)) : _g4_s43,
    _g4_s45 = (208u + sizeof(_g4_t_v79)) > _g4_s44 ? (208u + sizeof(_g4_t_v79)) : _g4_s44,
    _g4_s46 = (212u + sizeof(_g4_t_v80)) > _g4_s45 ? (212u + sizeof(_g4_t_v80)) : _g4_s45,
    _g4_s47 = (216u + sizeof(_g4_t_v81)) > _g4_s46 ? (216u + sizeof(_g4_t_v81)) : _g4_s46,
    _g4_s48 = (220u + sizeof(_g4_t_v82)) > _g4_s47 ? (220u + sizeof(_g4_t_v82)) : _g4_s47,
    _g4_s49 = (224u + sizeof(_g4_t_v83)) > _g4_s48 ? (224u + sizeof(_g4_t_v83)) : _g4_s48,
    _g4_s50 = (256u + sizeof(_g4_t_v84)) > _g4_s49 ? (256u + sizeof(_g4_t_v84)) : _g4_s49,
    _g4_s51 = (260u + sizeof(_g4_t_v85)) > _g4_s50 ? (260u + sizeof(_g4_t_v85)) : _g4_s50,
    _g4_s52 = (264u + sizeof(_g4_t_v86)) > _g4_s51 ? (264u + sizeof(_g4_t_v86)) : _g4_s51,
    _g4_s53 = (268u + sizeof(_g4_t_v87)) > _g4_s52 ? (268u + sizeof(_g4_t_v87)) : _g4_s52,
    _g4_s54 = (272u + sizeof(_g4_t_v88)) > _g4_s53 ? (272u + sizeof(_g4_t_v88)) : _g4_s53,
    _g4_s55 = (276u + sizeof(_g4_t_v89)) > _g4_s54 ? (276u + sizeof(_g4_t_v89)) : _g4_s54,
    _g4_s56 = (280u + sizeof(_g4_t_v90)) > _g4_s55 ? (280u + sizeof(_g4_t_v90)) : _g4_s55,
    _g4_s57 = (284u + sizeof(_g4_t_v91)) > _g4_s56 ? (284u + sizeof(_g4_t_v91)) : _g4_s56,
    _g4_s58 = (288u + sizeof(_g4_t_v92)) > _g4_s57 ? (288u + sizeof(_g4_t_v92)) : _g4_s57,
    _g4_s59 = (292u + sizeof(_g4_t_v93)) > _g4_s58 ? (292u + sizeof(_g4_t_v93)) : _g4_s58,
    _g4_s60 = (296u + sizeof(_g4_t_v94)) > _g4_s59 ? (296u + sizeof(_g4_t_v94)) : _g4_s59,
    _g4_s61 = (300u + sizeof(_g4_t_v95)) > _g4_s60 ? (300u + sizeof(_g4_t_v95)) : _g4_s60,
    _g4_s62 = (304u + sizeof(_g4_t_v96)) > _g4_s61 ? (304u + sizeof(_g4_t_v96)) : _g4_s61,
    _g4_s63 = (308u + sizeof(_g4_t_v97)) > _g4_s62 ? (308u + sizeof(_g4_t_v97)) : _g4_s62,
    _g4_s64 = (312u + sizeof(_g4_t_v98)) > _g4_s63 ? (312u + sizeof(_g4_t_v98)) : _g4_s63,
    _g4_s65 = (316u + sizeof(_g4_t_v99)) > _g4_s64 ? (316u + sizeof(_g4_t_v99)) : _g4_s64,
    _g4_s66 = (320u + sizeof(_g4_t_v100)) > _g4_s65 ? (320u + sizeof(_g4_t_v100)) : _g4_s65,
    _g4_s67 = (324u + sizeof(_g4_t_v101)) > _g4_s66 ? (324u + sizeof(_g4_t_v101)) : _g4_s66,
    _g4_s68 = (328u + sizeof(_g4_t_v102)) > _g4_s67 ? (328u + sizeof(_g4_t_v102)) : _g4_s67,
    _g4_s69 = (332u + sizeof(_g4_t_v103)) > _g4_s68 ? (332u + sizeof(_g4_t_v103)) : _g4_s68,
    _g4_s70 = (336u + sizeof(_g4_t_v104)) > _g4_s69 ? (336u + sizeof(_g4_t_v104)) : _g4_s69,
    _g4_s71 = (340u + sizeof(_g4_t_v105)) > _g4_s70 ? (340u + sizeof(_g4_t_v105)) : _g4_s70,
    _g4_s72 = (360u + sizeof(_g4_t_v106)) > _g4_s71 ? (360u + sizeof(_g4_t_v106)) : _g4_s71,
    _g4_s73 = (364u + sizeof(_g4_t_v107)) > _g4_s72 ? (364u + sizeof(_g4_t_v107)) : _g4_s72,
    _g4_s74 = (368u + sizeof(_g4_t_v108)) > _g4_s73 ? (368u + sizeof(_g4_t_v108)) : _g4_s73,
    _g4_s75 = (372u + sizeof(_g4_t_v109)) > _g4_s74 ? (372u + sizeof(_g4_t_v109)) : _g4_s74
  };
  alignas(16) uint8_t _g4_sf[_g4_s75];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 63u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 80u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 84u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 88u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 100u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 104u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 112u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 160u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 164u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 168u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 172u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 176u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 180u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 184u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 188u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 192u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 196u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 200u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 204u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 208u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 212u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 216u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 220u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 224u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 256u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 260u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 264u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 268u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 272u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 276u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 280u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 284u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 288u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 292u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 296u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 300u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 304u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 308u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 312u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 316u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 320u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 324u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 328u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 332u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 336u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 340u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 360u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 364u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 368u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 372u);

  v106 = &a1;
  v3 = a1;
  v4 = a2;
  v53 = a3;
  (*(void (**)(int, int, uint32_t, int))(a2 + 92))(a2, a3, *(uint32_t *)(a3 + 4), 8);
  hkTransformf::setMul((hkTransformf::Self *)&v67, *(const hkTransformf::Self **)(v4 + 60), (const hkTransformf::Self *)(v3 + 112));
  hkTransformf::setMul((hkTransformf::Self *)v83, *(const hkTransformf::Self **)(v4 + 56), (const hkTransformf::Self *)(v3 + 48));
  v48 = *(float *)(v53 + 4);
  v5 = *(uint32_t *)(v3 + 32);
  v93 = (float)((float)(v71 * (float)(v88 - v79)) + (float)(v72 * (float)(v89 - v80)))
      + (float)(v73 * (float)(v90 - v81));
  v94 = (float)((float)((float)(v88 - v79) * v75) + (float)((float)(v89 - v80) * v76))
      + (float)(v77 * (float)(v90 - v81));
  v92 = (float)((float)(v67 * (float)(v88 - v79)) + (float)(v68 * (float)(v89 - v80)))
      + (float)((float)(v90 - v81) * v69);
  v95 = v94;
  v44 = ((long double (*)(int, uint32_t, float *, float *))*(uint32_t *)(*(uint32_t *)v5 + 24))(
          v5,
          *(uint32_t *)(LODWORD(v48) + 64),
          &v92,
          &v92);
  *(float *)(LODWORD(v48) + 64) = v44;
  v6 = *(uint32_t **)(v3 + 32);
  v7 = *v6;
  v109 = &v92;
  v107 = v6;
  v108 = v44;
  v41 = (float)((float)((float)(v71 * v93) + (float)(v67 * v92)) + (float)(v75 * v94)) + v79;
  v40 = (float)((float)((float)(v72 * v93) + (float)(v68 * v92)) + (float)(v76 * v94)) + v80;
  v39 = (float)((float)((float)(v73 * v93) + (float)(v69 * v92)) + (float)(v77 * v94)) + v81;
  v38 = (float)((float)((float)(v93 * v74) + (float)(v92 * v70)) + (float)(v94 * v78)) + v82;
  (*(void (**)(uint32_t *, uint32_t, float *))(v7 + 28))(v6, LODWORD(v44), &v92);
g4_m128_raw(v8) = LODWORD(v92);
g4_m128_raw(v9) = LODWORD(v68);
g4_m128_raw(v10) = LODWORD(v69);
g4_m128_lane<float>(v8, 0) = (float)((float)(v92 * v67) + (float)(v93 * v71)) + (float)(v75 * v94);
g4_m128_lane<float>(v9, 0) = (float)((float)(v68 * v92) + (float)(v72 * v93)) + (float)(v76 * v94);
  v55 =g4_m128_lane<float>(v8, 0);
g4_m128_lane<float>(v10, 0) = (float)((float)(v69 * v92) + (float)(v73 * v93)) + (float)(v77 * v94);
  v11 = fabs(g4_m128_lane<float>(v8, 0));
g4_m128_lane<int32_t>(v12, 0) = fabs(g4_m128_lane<float>(v9, 0));
  v56 =g4_m128_lane<float>(v9, 0);
  v13 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v10);
  v57 =g4_m128_lane<float>(v10, 0);
  v37 = (float)((float)(v74 * v93) + (float)(v70 * v92)) + (float)(v94 * v78);
  v58 = v37;
  if ( v11 >g4_m128_lane<float>(v12, 0) )
  {
    v14 = v9;
    v15 = (float)((float)(v92 * v67) + (float)(v93 * v71)) + (float)(v75 * v94);
    v16 = 0;
    v17 = 1;
  }
  else
  {
    v14 = v8;
    v15 = (float)((float)(v68 * v92) + (float)(v72 * v93)) + (float)(v76 * v94);
g4_m128_lane<float>(v12, 0) = v11;
    v16 = 1;
    v17 = 0;
  }
  v59 = 0.0;
  v18 = _mm_cmplt_ss(v13, v12);
  v60 = 0.0;
  v61 = 0.0;
  v62 = 0.0;
  *((uint32_t *)&v59 + v16) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v18, v10), 0) | _mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_and_ps(v14, v18)));
  if (g4_m128_lane<float>(v12, 0) <=g4_m128_lane<float>(v13, 0) )
    v17 = 2;
  *(&v59 + v17) = -v15;
g4_m128_raw(v20) = LODWORD(v59);
  v19 = 0.0;
  *(float *)g4_m128_ptr<int32_t>(v20) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v20)) + (float)(v60 * v60))
                          + (float)(v61 * v61);
  if ( *(float *)g4_m128_ptr<int32_t>(v20) > 0.0 )
  {
    v21 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v20);
    v22 = ((_mm_cvtsi128_si32(v20) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v20) >> 1));
    v23 = (float)(*(float *)&v22 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * *(float *)&v22)
                * (float)(*(float *)&v22 * *(float *)&v22));
    v24 = (float)(v23 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * v23) * (float)(v23 * v23));
    v19 = (float)(1.5 * v24) - (float)((float)(v21 * v24) * (float)(v24 * v24));
  }
  v25 = *(uint32_t **)(v3 + 32);
  v26 = *v25;
  v59 = v59 * v19;
  v60 = v60 * v19;
  v61 = v61 * v19;
  v62 = v19 * v62;
  v45 = (float)(g4_m128_lane<float>(v9, 0) * v61) - (float)(g4_m128_lane<float>(v10, 0) * v60);
  v108 = *(float *)(LODWORD(v48) + 64);
  v107 = v25;
  v43 = (float)(g4_m128_lane<float>(v10, 0) * v59) - (float)(v61 *g4_m128_lane<float>(v8, 0));
  v42 = (float)(v60 *g4_m128_lane<float>(v8, 0)) - (float)(v59 *g4_m128_lane<float>(v9, 0));
  v36 = ((long double (*)(uint32_t *, uint32_t))*(uint32_t *)(v26 + 40))(v25, LODWORD(v108));
  v35 = (float)(g4_m128_lane<float>(v10, 0) * (float)-v36) + v90;
  v27 = *(float *)(v3 + 36);
  v28 = (float)(g4_m128_lane<float>(v8, 0) * (float)-v36) + v88;
  v29 = (float)(g4_m128_lane<float>(v9, 0) * (float)-v36) + v89;
  v30 = (float)((float)-v36 * v37) + v91;
  if ( v27 > 0.0 )
  {
    v96 = LODWORD(v55);
    v97 = LODWORD(v56);
    v98 = LODWORD(v57);
    v99 = v58;
    v92 = v28;
    v101 = v48;
    v93 = v29;
    v94 = v35;
    v95 = (float)((float)-v36 * v37) + v91;
    v100 = v27;
    hk1dLinearFrictionBuildJacobian(&v92, v4, v53);
  }
  *(float *)v66 = v88;
  *(float *)&v66[4] = v41;
  *(float *)&v66[1] = v89;
  *(float *)&v66[5] = v40;
  *(float *)&v66[2] = v90;
  *(float *)&v66[6] = v39;
  *(float *)&v66[3] = v91;
  *(float *)&v66[7] = v38;
  hk1dLinearBilateralConstraintBuildJacobian(v66, v4, v53);
  v66[11] = 0;
  *(float *)&v66[8] = v45;
  *(float *)&v66[9] = v43;
  *(float *)&v66[10] = v42;
  hk1dLinearBilateralConstraintBuildJacobian(v66, v4, v53);
  if ( *(char *)(v3 + 40) > 1 )
  {
    v92 = v55;
    v93 = v56;
    v94 = v57;
    v95 = v58;
    hk1dAngularBilateralConstraintBuildJacobian(&v92, v4, v53);
    v100 = *(float *)&v83[4];
    *(float *)&v96 = -v84;
    v101 = *(float *)&v83[5];
    v102 = *(float *)&v83[6];
    *(float *)&v97 = -v85;
    v103 = *(float *)&v83[7];
    *(float *)&v98 = -v86;
    v99 = -v87;
    hk1dAngularBilateralConstraintBuildJacobian(&v92, v4, v53);
    if ( *(uint8_t *)(v3 + 40) == 3 )
    {
      (*(void (**)(uint32_t, uint32_t, float *))(**(uint32_t **)(v3 + 32) + 44))(
        *(uint32_t *)(v3 + 32),
        *(uint32_t *)(LODWORD(v48) + 64),
        &v63);
      v92 = v84;
      v93 = v85;
      v94 = v86;
      v95 = v87;
      v100 = -(float)((float)((float)(v67 * v63) + (float)(v71 * v64)) + (float)(v75 * v65));
      v101 = -(float)((float)((float)(v68 * v63) + (float)(v72 * v64)) + (float)(v76 * v65));
      v102 = -(float)((float)((float)(v69 * v63) + (float)(v73 * v64)) + (float)(v77 * v65));
      v103 = -(float)((float)((float)(v63 * v70) + (float)(v64 * v74)) + (float)(v65 * v78));
      v96 = v83[0];
      v97 = v83[1];
      v98 = v83[2];
      v99 = *(float *)&v83[3];
      hk1dAngularBilateralConstraintBuildJacobian(&v92, v4, v53);
    }
  }
  result = (*(int (**)(char *, uint32_t))(**(uint32_t **)(v3 + 32) + 48))(&v54, *(uint32_t *)(v3 + 32));
  if ( v54 == 0 )
  {
    v32 = *(uint32_t *)(v3 + 32);
    v92 = v88;
    v93 = v89;
    v96 = LODWORD(v28);
    v94 = v90;
    v97 = LODWORD(v29);
    v98 = LODWORD(v35);
    v95 = v91;
    v99 = v30;
    v46 = *(long double (**)(uint32_t, uint32_t))(*(uint32_t *)v32 + 40);
    v49 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v32 + 32))(v32);
    v33 = v46(*(uint32_t *)(v3 + 32), LODWORD(v49));
    v34 = *(uint32_t *)(v3 + 32);
    v50 = v33;
    v104 = v50;
    v47 = *(long double (**)(uint32_t, uint32_t))(*(uint32_t *)v34 + 40);
    v51 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v34 + 36))(v34);
    v52 = v47(*(uint32_t *)(v3 + 32), LODWORD(v51));
    v100 = v55;
    v101 = v56;
    v102 = v57;
    v103 = v58;
    v105 = v52;
    return hk1dLinearLimitBuildJacobian(&v92, v4, v53);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathConstraintData::Construct  (binary VA: 0x1722590)
// Original: hkpPointToPathConstraintData::hkpPointToPathConstraintData
// ----------------------------------------------------------------------------
void hkpPointToPathConstraintData::Construct(hkpPointToPathConstraintData::Self *self)
{
  *((uint32_t *)self + 9) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209D848);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 1;
  *((uint32_t *)self + 8) = 0;
  *((uint8_t *)self + 40) = 1;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 12) = 1065353216;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 1065353216;
  *((uint32_t *)self + 28) = 1065353216;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 1065353216;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 22) = 1065353216;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 38) = 1065353216;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
  hkpBridgeConstraintAtom::init((hkpPointToPathConstraintData::Self *)((char *)self + 16), self);
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathConstraintData::setPath  (binary VA: 0x1722710)
// Original: hkpPointToPathConstraintData::setPath
// ----------------------------------------------------------------------------
int hkpPointToPathConstraintData::setPath(hkpPointToPathConstraintData::Self *self, hkpParametricCurve::Self *a2)
{
  hkpParametricCurve::Self *v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int result;
  int32_t v8; // ett
  int v9;
  int32_t v10; // kr04_4

  v2 = a2;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v10 = *((uint32_t *)a2 + 1);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v10, v9 | (uint16_t)(v10 + 1));
    }
    while ( v10 != result );
  }
  v3 = *((uint32_t *)self + 8);
  if ( v3 == 0 || *(uint16_t *)(v3 + 6) == 0 )
    goto LABEL_7;
  do
  {
    v5 = *(uint32_t *)(v3 + 4);
    HIWORD(v4) = HIWORD(v5);
    LOWORD(v4) = 0;
    v6 = v4 | (uint16_t)(v5 - 1);
    v8 = v5;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v8, v6);
  }
  while ( v8 != result );
  v2 = a2;
  if ( (uint16_t)v6 == 0 )
  {
    result = G4_VCALL<int>(v3, 16);
    *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
LABEL_7:
    *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathConstraintData::calcPivot  (binary VA: 0x17227b0)
// Original: hkpPointToPathConstraintData::calcPivot
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpPointToPathConstraintData::calcPivot(hkpPointToPathConstraintData::Self *self, const hkTransformf::Self *a2, hkVector4f::Self *a3)
{
  return hkVector4f::setTransformedPos(a3, a2, (hkpPointToPathConstraintData::Self *)((char *)self + 96));
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathConstraintData::setInWorldSpace  (binary VA: 0x17227f0)
// Original: hkpPointToPathConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
int hkpPointToPathConstraintData::setInWorldSpace(hkpPointToPathConstraintData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3, const hkVector4f::Self *a4, hkpParametricCurve::Self *a5, const hkTransformf::Self *a6, int a7, float a8, float a9, float a10, int a11, float a12, float a13, float a14, int a15, char a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, float a48, float a49, float a50, int a51, float a52, float a53, float a54, int a55, float a56, float a57, float a58, int a59, const hkVector4f::Self *a60, hkpParametricCurve::Self *a61, const hkTransformf::Self *a62, int a63)
{
  hkpPointToPathConstraintData::Self *v63;
  int v64;
  int v65;
  int32_t v66; // kr00_4
  int32_t v67;
  int32_t v68; // ett
  int v69;
  float v70; // xmm0_4
  float v71; // xmm4_4
  float v72; // xmm3_4
  int result;
  int v74;
  int32_t v75; // kr04_4
  float v80;
  typedef float _g4_t_v76[2];
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79[35];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v76)) > _g4_s0 ? (0u + sizeof(_g4_t_v76)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v77)) > _g4_s1 ? (8u + sizeof(_g4_t_v77)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v78)) > _g4_s2 ? (12u + sizeof(_g4_t_v78)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v79)) > _g4_s3 ? (112u + sizeof(_g4_t_v79)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 0u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 8u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 12u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 112u);

  v63 = self;
  if ( a5 != nullptr && *((uint16_t *)a5 + 3) != 0 )
  {
    do
    {
      v75 = *((uint32_t *)a5 + 1);
      HIWORD(v74) = HIWORD(v75);
      LOWORD(v74) = 0;
    }
    while ( v75 != __sync_val_compare_and_swap(
                     (volatile int32_t *)a5 + 1,
                     v75,
                     v74 | (uint16_t)(v75 + 1)) );
  }
  v64 = *((uint32_t *)self + 8);
  if ( v64 != 0 && *(uint16_t *)(v64 + 6) != 0 )
  {
    do
    {
      v66 = *(uint32_t *)(v64 + 4);
      HIWORD(v65) = HIWORD(v66);
      LOWORD(v65) = 0;
      v67 = v65 | (uint16_t)(v66 - 1);
      v68 = v66;
    }
    while ( v68 != __sync_val_compare_and_swap((volatile int32_t *)(v64 + 4), v68, v67) );
    v63 = self;
    if ( (uint16_t)v67 == 0 )
      G4_VCALL<void>(v64, 16);
  }
  *((uint32_t *)v63 + 8) = (uint32_t)(uintptr_t)(a5);
  *((uint32_t *)v63 + 28) = *(uint32_t *)a6;
  *((uint32_t *)v63 + 29) = *((uint32_t *)a6 + 1);
  *((uint32_t *)v63 + 30) = *((uint32_t *)a6 + 2);
  *((uint32_t *)v63 + 31) = *((uint32_t *)a6 + 3);
  *((uint32_t *)v63 + 32) = *((uint32_t *)a6 + 4);
  *((uint32_t *)v63 + 33) = *((uint32_t *)a6 + 5);
  *((uint32_t *)v63 + 34) = *((uint32_t *)a6 + 6);
  *((uint32_t *)v63 + 35) = *((uint32_t *)a6 + 7);
  *((uint32_t *)v63 + 36) = *((uint32_t *)a6 + 8);
  *((uint32_t *)v63 + 37) = *((uint32_t *)a6 + 9);
  *((uint32_t *)v63 + 38) = *((uint32_t *)a6 + 10);
  *((uint32_t *)v63 + 39) = *((uint32_t *)a6 + 11);
  *((uint32_t *)v63 + 40) = *((uint32_t *)a6 + 12);
  *((uint32_t *)v63 + 41) = *((uint32_t *)a6 + 13);
  *((uint32_t *)v63 + 42) = *((uint32_t *)a6 + 14);
  *((uint32_t *)v63 + 43) = *((uint32_t *)a6 + 15);
  hkTransformf::setMul((hkTransformf::Self *)v79, a3, a6);
  v69 = *((uint32_t *)v63 + 8);
  v70 = *(float *)a4 - v79[12];
  v71 = *((float *)a4 + 1) - v79[13];
  v72 = *((float *)a4 + 2) - v79[14];
  v76[1] = (float)((float)(v79[4] * v70) + (float)(v79[5] * v71)) + (float)(v79[6] * v72);
  v77 = (float)((float)(v70 * v79[8]) + (float)(v71 * v79[9])) + (float)(v79[10] * v72);
  v76[0] = (float)((float)(v79[0] * v70) + (float)(v79[1] * v71)) + (float)(v72 * v79[2]);
  v78 = v77;
  v80 = ((long double (*)(int, uint32_t, float *, float *))*(uint32_t *)(*(uint32_t *)v69 + 24))(v69, 0, v76, v76);
  (*(void (**)(uint32_t, uint32_t, float *))(**((uint32_t **)v63 + 8) + 28))(*((uint32_t *)v63 + 8), LODWORD(v80), &a8);
  (*(void (**)(uint32_t, uint32_t, float *))(**((uint32_t **)v63 + 8) + 44))(*((uint32_t *)v63 + 8), LODWORD(v80), &a12);
  a59 = 0;
  a48 = a8;
  a49 = a9;
  a50 = a10;
  a51 = a11;
  a52 = a12;
  a53 = a13;
  a54 = a14;
  a55 = a15;
  a60 = a4;
  a56 = (float)(a9 * a14) - (float)(a10 * a13);
  a61 = a5;
  a57 = (float)(a10 * a12) - (float)(a14 * a8);
  a58 = (float)(a8 * a13) - (float)(a12 * a9);
  a62 = a6;
  a63 = a7;
  hkTransformf::setMul((hkTransformf::Self *)&a16, a6, (const hkTransformf::Self *)&a48);
  hkTransformf::setMul((hkTransformf::Self *)&a48, a3, (const hkTransformf::Self *)&a16);
  hkTransformf::setMulInverseMul(a3, (const hkTransformf::Self *)&a48, (const hkTransformf::Self *)&a48);
  *((uint32_t *)v63 + 12) = a32;
  *((uint32_t *)v63 + 13) = a33;
  *((uint32_t *)v63 + 14) = a34;
  *((uint32_t *)v63 + 15) = a35;
  *((uint32_t *)v63 + 16) = a36;
  *((uint32_t *)v63 + 17) = a37;
  *((uint32_t *)v63 + 18) = a38;
  *((uint32_t *)v63 + 19) = a39;
  *((uint32_t *)v63 + 20) = a40;
  *((uint32_t *)v63 + 21) = a41;
  *((uint32_t *)v63 + 22) = a42;
  *((uint32_t *)v63 + 23) = a43;
  *((uint32_t *)v63 + 24) = a44;
  *((uint32_t *)v63 + 25) = a45;
  *((uint32_t *)v63 + 26) = a46;
  result = a47;
  *((uint32_t *)v63 + 27) = a47;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathConstraintData::setInBodySpace  (binary VA: 0x1722c70)
// Original: hkpPointToPathConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
int hkpPointToPathConstraintData::setInBodySpace(hkpPointToPathConstraintData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, hkpParametricCurve::Self *a4)
{
  hkpPointToPathConstraintData::Self *v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  int result;
  int v11;
  int32_t v12; // kr04_4

  v4 = self;
  if ( a4 != nullptr && *((uint16_t *)a4 + 3) != 0 )
  {
    do
    {
      v12 = *((uint32_t *)a4 + 1);
      HIWORD(v11) = HIWORD(v12);
      LOWORD(v11) = 0;
    }
    while ( v12 != __sync_val_compare_and_swap(
                     (volatile int32_t *)a4 + 1,
                     v12,
                     v11 | (uint16_t)(v12 + 1)) );
  }
  v5 = *((uint32_t *)self + 8);
  if ( v5 != 0 && *(uint16_t *)(v5 + 6) != 0 )
  {
    do
    {
      v7 = *(uint32_t *)(v5 + 4);
      HIWORD(v6) = HIWORD(v7);
      LOWORD(v6) = 0;
      v8 = v6 | (uint16_t)(v7 - 1);
      v9 = v7;
    }
    while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
    v4 = self;
    if ( (uint16_t)v8 == 0 )
      G4_VCALL<void>(v5, 16);
  }
  *((uint32_t *)v4 + 8) = (uint32_t)(uintptr_t)(a4);
  *((uint32_t *)v4 + 13) = 0;
  *((uint32_t *)v4 + 12) = 1065353216;
  *((uint32_t *)v4 + 14) = 0;
  *((uint32_t *)v4 + 15) = 0;
  *((uint32_t *)v4 + 16) = 0;
  *((uint32_t *)v4 + 17) = 1065353216;
  *((uint32_t *)v4 + 18) = 0;
  *((uint32_t *)v4 + 19) = 0;
  *((uint32_t *)v4 + 20) = 0;
  *((uint32_t *)v4 + 21) = 0;
  *((uint32_t *)v4 + 22) = 1065353216;
  *((uint32_t *)v4 + 28) = 1065353216;
  *((uint32_t *)v4 + 29) = 0;
  *((uint32_t *)v4 + 30) = 0;
  *((uint32_t *)v4 + 31) = 0;
  *((uint32_t *)v4 + 32) = 0;
  *((uint32_t *)v4 + 33) = 1065353216;
  *((uint32_t *)v4 + 34) = 0;
  *((uint32_t *)v4 + 35) = 0;
  *((uint32_t *)v4 + 36) = 0;
  *((uint32_t *)v4 + 24) = 0;
  *((uint32_t *)v4 + 23) = 0;
  *((uint32_t *)v4 + 25) = 0;
  *((uint32_t *)v4 + 26) = 0;
  *((uint32_t *)v4 + 27) = 0;
  *((uint32_t *)v4 + 37) = 0;
  *((uint32_t *)v4 + 38) = 1065353216;
  *((uint32_t *)v4 + 39) = 0;
  *((uint32_t *)v4 + 40) = 0;
  *((uint32_t *)v4 + 41) = 0;
  *((uint32_t *)v4 + 42) = 0;
  *((uint32_t *)v4 + 43) = 0;
  *((uint32_t *)v4 + 24) = *(uint32_t *)a2;
  *((uint32_t *)v4 + 25) = *((uint32_t *)a2 + 1);
  *((uint32_t *)v4 + 26) = *((uint32_t *)a2 + 2);
  *((uint32_t *)v4 + 27) = *((uint32_t *)a2 + 3);
  *((uint32_t *)v4 + 40) = *(uint32_t *)a3;
  *((uint32_t *)v4 + 41) = *((uint32_t *)a3 + 1);
  *((uint32_t *)v4 + 42) = *((uint32_t *)a3 + 2);
  result = *((uint32_t *)a3 + 3);
  *((uint32_t *)v4 + 43) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPlaneConstraintData::getRuntimeInfo  (binary VA: 0x1725610)
// Original: hkpPointToPlaneConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
int64_t hkpPointToPlaneConstraintData::getRuntimeInfo(int a1, char a2, uint64_t *a3)
{
  int64_t result; // rax

  LODWORD(result) = a2 != 0 ? 8 : 0;
  HIDWORD(result) = a2 != 0;
  *a3 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPlaneConstraintData::getType  (binary VA: 0x1725640)
// Original: hkpPointToPlaneConstraintData::getType
// ----------------------------------------------------------------------------
int hkpPointToPlaneConstraintData::getType()
{
  return 14;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPlaneConstraintData::Destroy  (binary VA: 0x1725650)
// Original: hkpPointToPlaneConstraintData::~hkpPointToPlaneConstraintData
// ----------------------------------------------------------------------------
void hkpPointToPlaneConstraintData::Destroy(hkpPointToPlaneConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPlaneConstraintData::getConstraintInfo  (binary VA: 0x1725670)
// Original: hkpPointToPlaneConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpPointToPlaneConstraintData::getConstraintInfo(int a1, uint32_t *a2)
{
  return hkpConstraintData::getConstraintInfoUtil(a1 + 16, 160, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPlaneConstraintData::isValid  (binary VA: 0x17256b0)
// Original: hkpPointToPlaneConstraintData::isValid
// ----------------------------------------------------------------------------
hkpPointToPlaneConstraintData::Self * hkpPointToPlaneConstraintData::isValid(hkpPointToPlaneConstraintData::Self *self, int a2)
{
  bool isOrthonormal;
  bool v3;

  isOrthonormal = hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 32), 0.00001f);
  v3 = false;
  if ( isOrthonormal )
    v3 = hkRotationf::isOrthonormal((hkRotationf::Self *)(a2 + 96), 0.00001f);
  *(uint8_t *)self = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPlaneConstraintData::Destroy_ea1725710  (binary VA: 0x1725710)
// Original: hkpPointToPlaneConstraintData::~hkpPointToPlaneConstraintData
// ----------------------------------------------------------------------------
void hkpPointToPlaneConstraintData::Destroy_ea1725710(hkpPointToPlaneConstraintData::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 176;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPlaneConstraintData::Construct  (binary VA: 0x1725770)
// Original: hkpPointToPlaneConstraintData::hkpPointToPlaneConstraintData
// ----------------------------------------------------------------------------
void hkpPointToPlaneConstraintData::Construct(hkpPointToPlaneConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209DA88);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint16_t *)self + 8) = 2;
  *((uint16_t *)self + 80) = 7;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 24) = 1065353216;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint8_t *)self + 162) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPlaneConstraintData::setInWorldSpace  (binary VA: 0x17258d0)
// Original: hkpPointToPlaneConstraintData::setInWorldSpace
// ----------------------------------------------------------------------------
char * hkpPointToPlaneConstraintData::setInWorldSpace(hkpPointToPlaneConstraintData::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5)
{
  float *v5;
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  float *v9;
  int v10;
  int v11;
  __m128i v12;
  float v13; // xmm4_4
  float v14; // xmm3_4
  __m128i v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  char *result;
  float v26; // xmm0_4
  float v27; // xmm4_4
  int v28;

  hkVector4f::setTransformedInversePos((hkpPointToPlaneConstraintData::Self *)((char *)self + 80), a2, a4);
  hkVector4f::setTransformedInversePos((hkpPointToPlaneConstraintData::Self *)((char *)self + 144), a3, a4);
  v28 = *((uint8_t *)self + 162);
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  v5 = (float *)((char *)self + 16 * v28 + 96);
  hkVector4f::setRotatedInverseDir((hkVector4f::Self *)v5, a3, a5);
  v6 = fabs(*v5);
  v7 = fabs(v5[1]);
  v8 = fabs(v5[2]);
  v9 = (float *)((char *)self + 16 * (v28 + 1 - 3 * ((uint64_t)(1431655766LL * (v28 + 1)) >> 32)) + 96);
  if ( v6 > v7 )
  {
    v10 = 0;
    v11 = 1;
  }
  else
  {
    v7 = v6;
    v10 = 1;
    v11 = 0;
  }
  *v9 = 0.0;
  if ( v7 <= v8 )
    v11 = 2;
  v9[1] = 0.0;
  v9[2] = 0.0;
  v9[3] = 0.0;
  v9[v10] = v5[v11];
  v9[v11] = -v5[v10];
g4_m128_raw(v12) = *(unsigned int *)v9;
  v13 = v9[1];
  v15 = v12;
  v14 = v9[2];
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)g4_m128_ptr<int32_t>(v12)) + (float)(v13 * v13))
                          + (float)(v14 * v14);
  if ( *(float *)g4_m128_ptr<int32_t>(v15) <= 0.0 )
  {
    v19 = 0.0;
  }
  else
  {
    v16 = ((_mm_cvtsi128_si32(v15) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v15) >> 1));
    v17 = (float)(*(float *)&v16 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * *(float *)&v16)
                * (float)(*(float *)&v16 * *(float *)&v16));
    v18 = (float)(v17 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * v17) * (float)(v17 * v17));
    v19 = (float)(1.5 * v18) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * v18) * (float)(v18 * v18));
  }
  v20 = *(float *)g4_m128_ptr<int32_t>(v12) * v19;
  v21 = v13 * v19;
  v22 = v14 * v19;
  v23 = v19 * v9[3];
  *v9 = v20;
  v9[1] = v21;
  v9[2] = v22;
  v9[3] = v23;
  v24 = (float)(v5[1] * v22) - (float)(v5[2] * v21);
  result = (char *)self + 16 * (v28 + 2 - 3 * ((uint64_t)(1431655766LL * (v28 + 2)) >> 32)) + 96;
  v26 = (float)(v5[2] * v20) - (float)(v22 * *v5);
  v27 = (float)(v21 * *v5) - (float)(v20 * v5[1]);
  *(float *)result = v24;
  *((uint32_t *)result + 3) = 0;
  *((float *)result + 1) = v26;
  *((float *)result + 2) = v27;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPlaneConstraintData::setInBodySpace  (binary VA: 0x1725bc0)
// Original: hkpPointToPlaneConstraintData::setInBodySpace
// ----------------------------------------------------------------------------
char * hkpPointToPlaneConstraintData::setInBodySpace(hkpPointToPlaneConstraintData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4)
{
  int v4;
  char *v5;
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float *v11;
  int v12;
  int v13;
  __m128i v14;
  float v15; // xmm4_4
  float v16; // xmm3_4
  __m128i v17;
  int v18;
  int v19;
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  char *result;
  float v29; // xmm0_4
  float v30; // xmm4_4
  int v31;

  *((uint32_t *)self + 20) = *(uint32_t *)a2;
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 36) = *(uint32_t *)a3;
  *((uint32_t *)self + 37) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 38) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 39) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  v4 = *((uint8_t *)self + 162);
  *((uint32_t *)self + 12) = 0;
  v31 = v4;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  v5 = (char *)self + 16 * v4 + 96;
  *(uint32_t *)v5 = *(uint32_t *)a4;
  v6 = *(float *)v5;
  *((uint32_t *)v5 + 1) = *((uint32_t *)a4 + 1);
  v7 = fabs(v6);
  v8 = *((float *)v5 + 1);
  *((uint32_t *)v5 + 2) = *((uint32_t *)a4 + 2);
  *((uint32_t *)v5 + 3) = *((uint32_t *)a4 + 3);
  v9 = fabs(v8);
  v10 = fabs(*((float *)v5 + 2));
  v11 = (float *)((char *)self + 16 * (v4 + 1 - 3 * ((uint64_t)(1431655766LL * (v4 + 1)) >> 32)) + 96);
  if ( v7 > v9 )
  {
    v12 = 0;
    v13 = 1;
  }
  else
  {
    v9 = v7;
    v12 = 1;
    v13 = 0;
  }
  *v11 = 0.0;
  if ( v9 <= v10 )
    v13 = 2;
  v11[1] = 0.0;
  v11[2] = 0.0;
  v11[3] = 0.0;
  v11[v12] = *(float *)&v5[4 * v13];
  v11[v13] = -*(float *)&v5[4 * v12];
g4_m128_raw(v14) = *(unsigned int *)v11;
  v15 = v11[1];
  v17 = v14;
  v16 = v11[2];
  *(float *)g4_m128_ptr<int32_t>(v17) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14)) + (float)(v15 * v15))
                          + (float)(v16 * v16);
  if ( *(float *)g4_m128_ptr<int32_t>(v17) <= 0.0 )
  {
    v22 = 0.0;
  }
  else
  {
    v18 = (_mm_cvtsi128_si32(v17) + 2139095040) >> 31;
    v19 = _mm_cvtsi128_si32(v17) >> 1;
    v20 = (float)(COERCE_FLOAT(v18 & (1597463174 - v19)) * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * COERCE_FLOAT(v18 & (1597463174 - v19)))
                * (float)(COERCE_FLOAT(v18 & (1597463174 - v19)) * COERCE_FLOAT(v18 & (1597463174 - v19))));
    v21 = (float)(v20 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * v20) * (float)(v20 * v20));
    v22 = (float)(1.5 * v21) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * v21) * (float)(v21 * v21));
  }
  v23 = *(float *)g4_m128_ptr<int32_t>(v14) * v22;
  v24 = v15 * v22;
  v25 = v16 * v22;
  v26 = v22 * v11[3];
  *v11 = v23;
  v11[1] = v24;
  v11[2] = v25;
  v11[3] = v26;
  v27 = (float)(*((float *)v5 + 1) * v25) - (float)(*((float *)v5 + 2) * v24);
  result = (char *)self + 16 * (v31 + 2 - 3 * ((uint64_t)(1431655766LL * (v31 + 2)) >> 32)) + 96;
  v29 = (float)(*((float *)v5 + 2) * v23) - (float)(v25 * *(float *)v5);
  v30 = (float)(v24 * *(float *)v5) - (float)(v23 * *((float *)v5 + 1));
  *(float *)result = v27;
  *((uint32_t *)result + 3) = 0;
  *((float *)result + 1) = v29;
  *((float *)result + 2) = v30;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPlaneDrawer::drawConstraint  (binary VA: 0x1aed9a0)
// Original: hkpPointToPlaneDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpPointToPlaneDrawer::drawConstraint(hkpPointToPlaneDrawer::Self *self, const hkpPointToPlaneConstraintData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, int a7)
{
  uint8_t *v7;
  const hkTransformf::Self *v8;
  int v9;
  int v10;
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float *v15;
  float *v16;
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  __m128i v22;
  float v23;
  __m128i v24;
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm7_4
  float v32; // xmm6_4
  float v33; // xmm4_4
  uint32_t *v34;
  int (*v35)(char *, hkDebugDisplayHandler::Self *, char *, char *, int, int, int);
  int v36;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef hkDebugDisplayHandler::Self *_g4_t_v40;
  typedef float *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef float _g4_t_v45;
  typedef hkpConstraintDrawer::Self *_g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef hkTransformf::Self *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef hkTransformf::Self *_g4_t_v63;
  typedef char _g4_t_v64[4];
  typedef uint32_t _g4_t_v65[4];
  typedef uint32_t _g4_t_v66[4];
  typedef uint8_t _g4_t_v67[192];
  typedef uint32_t _g4_t_v68[6];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (8u + sizeof(_g4_t_v38)) > _g4_s0 ? (8u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v39)) > _g4_s1 ? (12u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v40)) > _g4_s2 ? (16u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v41)) > _g4_s3 ? (20u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v42)) > _g4_s4 ? (28u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v43)) > _g4_s5 ? (32u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v44)) > _g4_s6 ? (36u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v45)) > _g4_s7 ? (44u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v46)) > _g4_s8 ? (48u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v47)) > _g4_s9 ? (52u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v48)) > _g4_s10 ? (56u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v49)) > _g4_s11 ? (60u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v50)) > _g4_s12 ? (64u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v51)) > _g4_s13 ? (68u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v52)) > _g4_s14 ? (72u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v53)) > _g4_s15 ? (76u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v54)) > _g4_s16 ? (80u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v55)) > _g4_s17 ? (84u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v56)) > _g4_s18 ? (88u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v57)) > _g4_s19 ? (92u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v58)) > _g4_s20 ? (96u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v59)) > _g4_s21 ? (100u + sizeof(_g4_t_v59)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v60)) > _g4_s22 ? (108u + sizeof(_g4_t_v60)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v61)) > _g4_s23 ? (112u + sizeof(_g4_t_v61)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v62)) > _g4_s24 ? (112u + sizeof(_g4_t_v62)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v63)) > _g4_s25 ? (112u + sizeof(_g4_t_v63)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v64)) > _g4_s26 ? (116u + sizeof(_g4_t_v64)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v65)) > _g4_s27 ? (120u + sizeof(_g4_t_v65)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v66)) > _g4_s28 ? (136u + sizeof(_g4_t_v66)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v67)) > _g4_s29 ? (152u + sizeof(_g4_t_v67)) : _g4_s29,
    _g4_s31 = (344u + sizeof(_g4_t_v68)) > _g4_s30 ? (344u + sizeof(_g4_t_v68)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 68u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 92u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 96u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 100u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 108u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 112u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 112u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 112u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 116u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 120u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 136u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 152u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 344u);

  v68[2] = (uint32_t)(uintptr_t)(&self);
  v61 = (hkTransformf::Self *)(a4);
  v7 = (uint8_t *)a2;
  v8 = a3;
  v40 = a5;
  v55 = a7;
  v46 = (hkpConstraintDrawer::Self *)(self);
  v56 = a6;
  hkpPrimitiveDrawer::setDisplayHandler((hkpPointToPlaneDrawer::Self *)((char *)self + 192), a5);
  hkpConstraintDrawer::updateCommonParameters(v46, v8, v61);
  hkVector4f::setTransformedPos((hkpConstraintDrawer::Self *)((char *)v46 + 80), v61, (const hkVector4f::Self *)(v7 + 144));
  hkVector4f::setTransformedPos((hkpConstraintDrawer::Self *)((char *)v46 + 64), v8, (const hkVector4f::Self *)(v7 + 80));
  hkpConstraintDrawer::drawPivots(v46, v56, v55);
  hkpConstraintDrawer::drawBodyFrames(v46, v56, v55);
  hkVector4f::setRotatedDir(
    (hkVector4f::Self *)v65,
    (hkpConstraintDrawer::Self *)((char *)v46 + 144),
    (const hkVector4f::Self *)&v7[16 * (v7[162] + 1 - 3 * ((uint64_t)(1431655766LL * (v7[162] + 1)) >> 32)) + 96]);
  hkVector4f::setRotatedDir(
    (hkVector4f::Self *)v66,
    (hkpConstraintDrawer::Self *)((char *)v46 + 144),
    (const hkVector4f::Self *)&v7[16 * (v7[162] + 2 - 3 * ((uint64_t)(1431655766LL * (v7[162] + 2)) >> 32)) + 96]);
  v41 = (float *)v67;
  v44 = *((uint32_t *)v46 + 20);
  v43 = *((uint32_t *)v46 + 21);
  v42 = *((uint32_t *)v46 + 22);
  v45 = *((float *)v46 + 7) * *(float *)v46;
  v9 = *((uint32_t *)v46 + 23);
  v10 = 0;
  v39 = v45 + v45;
  v38 = -2.0 * v45;
  do
  {
    if ( v10 != 0 )
    {
      v11 = *(float *)&v65[2];
      v12 = *(float *)&v65[1];
      v13 = *(float *)v65;
      v14 = *(float *)&v65[3];
    }
    else
    {
      v11 = *(float *)&v66[2];
      v12 = *(float *)&v66[1];
      v13 = *(float *)v66;
      v14 = *(float *)&v66[3];
    }
    v15 = v41;
    v57 = v10;
    v62 = -1;
    v54 = v39 * v13;
    v53 = v39 * v12;
    v52 = v39 * v11;
    v51 = v39 * v14;
    v50 = v13 * v38;
    v49 = v12 * v38;
    v48 = v11 * v38;
    v47 = v14 * v38;
    do
    {
      v16 = (float *)v65;
      if ( v10 != 0 )
        v16 = (float *)v66;
      v17 = *v16;
      *((uint32_t *)v15 + 5) = v43;
      v18 = v16[1];
      *((uint32_t *)v15 + 6) = v42;
      v19 = v16[2];
      *((uint32_t *)v15 + 2) = v42;
      v20 = v16[3];
      *((uint32_t *)v15 + 4) = v44;
      *(uint32_t *)v15 = v44;
      v21 = v50 + v15[4];
g4_m128_raw(v22) = LODWORD(v54);
      *((uint32_t *)v15 + 1) = v43;
      *(float *)g4_m128_ptr<int32_t>(v22) = v54 + *v15;
      *((uint32_t *)v15 + 3) = v9;
      *((uint32_t *)v15 + 7) = v9;
      v15 += 8;
      v60 = v21;
      v23 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
g4_m128_raw(v24) = LODWORD(v51);
      *(float *)g4_m128_ptr<int32_t>(v24) = v51 + *(v15 - 5);
      v59 = v48 + *(v15 - 2);
      v58 = v47 + *(v15 - 1);
      v25 = (float)v62++ * 1.4f;
      v26 = v25 * v45;
      v27 = v18 * v26;
      v28 = v17 * v26;
      v29 = v19 * v26;
      v30 = v20 * v26;
      v31 = (float)(v53 + *(v15 - 7)) + v27;
      v32 = (float)(v52 + *(v15 - 6)) + v29;
      v33 = (float)(v49 + *(v15 - 3)) + v27;
      *(v15 - 7) = v31;
      *(v15 - 8) = v23 + v28;
      *(v15 - 6) = v32;
      *(v15 - 4) = v28 + v60;
      *(v15 - 5) = COERCE_FLOAT(_mm_cvtsi128_si32(v24)) + v30;
      *(v15 - 3) = v33;
      *(v15 - 2) = v29 + v59;
      *(v15 - 1) = v30 + v58;
    }
    while ( v62 != 2 );
    v41 += 24;
    ++v10;
  }
  while ( v57 != 1 );
  v34 = (uint32_t *)(v67);
  do
  {
    v63 = *(hkTransformf::Self **)(*(uint32_t *)v40 + 72);
    hkColor::rgbFromFloats((hkColor::Self *)0x3F4CCCCD, 0x3F4CCCCDu, 0.8f, 0x3F800000u);
    v34 += 8;
    ((void (*)(char *))v63)(v64);
  }
  while ( v34 != v68 );
  v35 = *(int (**)(char *, hkDebugDisplayHandler::Self *, char *, char *, int, int, int))(*(uint32_t *)v40 + 72);
  v36 = hkColor::rgbFromFloats((hkColor::Self *)0x3E99999A, 0x3E99999Au, 0.8f, 0x3F800000u);
  return v35(v64, v40, (char *)v46 + 64, (char *)v46 + 32, v36, v56, v55);
}

// ----------------------------------------------------------------------------
// Function: hkpPointToPathDrawer::drawConstraint  (binary VA: 0x1af1bc0)
// Original: hkpPointToPathDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpPointToPathDrawer::drawConstraint(hkpPointToPathDrawer::Self *self, const hkpPointToPathConstraintData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, int a7)
{
  const hkTransformf::Self *v7;
  hkDebugDisplayHandler::Self *v8;
  int result;
  int v10;
  int v11;
  void (*v12)(uint8_t *);
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef hkVector4f::Self *_g4_t_v17;
  typedef hkVector4f::Self *_g4_t_v18;
  typedef hkTransformf::Self *_g4_t_v19;
  typedef uint8_t _g4_t_v20[4];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[16];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t _g4_t_v30[22];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v20)) > _g4_s7 ? (36u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v21)) > _g4_s8 ? (40u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v22)) > _g4_s9 ? (44u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v23)) > _g4_s10 ? (48u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v24)) > _g4_s11 ? (56u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v25)) > _g4_s12 ? (72u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v26)) > _g4_s13 ? (88u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v27)) > _g4_s14 ? (92u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v28)) > _g4_s15 ? (96u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v29)) > _g4_s16 ? (100u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v30)) > _g4_s17 ? (104u + sizeof(_g4_t_v30)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 100u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 104u);

  v30[18] = (uint32_t)(uintptr_t)(&self);
  v7 = a4;
  v18 = (hkVector4f::Self *)(a2);
  v19 = (hkTransformf::Self *)(a3);
  v8 = a5;
  v14 = a7;
  v15 = a6;
  v17 = (hkVector4f::Self *)(self);
  hkpPrimitiveDrawer::setDisplayHandler((hkpPointToPathDrawer::Self *)((char *)self + 192), a5);
  hkpConstraintDrawer::updateCommonParameters(v17, v19, v7);
  *((uint32_t *)v17 + 20) = *((uint32_t *)v7 + 12);
  *((uint32_t *)v17 + 21) = *((uint32_t *)v7 + 13);
  *((uint32_t *)v17 + 22) = *((uint32_t *)v7 + 14);
  *((uint32_t *)v17 + 23) = *((uint32_t *)v7 + 15);
  hkpPointToPathConstraintData::calcPivot(v18, v19, (hkVector4f::Self *)((char *)v17 + 64));
  hkpConstraintDrawer::drawBodyFrames(v17, v15, v14);
  hkpConstraintDrawer::drawPivots(v17, v15, v14);
  result = (int)(uintptr_t)(v18);
  if ( *((uint32_t *)v18 + 8) != 0 )
  {
    hkTransformf::setMul((hkTransformf::Self *)v30, v7, (hkVector4f::Self *)((char *)v18 + 112));
    result = *((uint32_t *)v18 + 8);
    if ( result != 0 )
    {
      v21 = 0;
      v22 = 0;
      v23 = 0x80000000;
      G4_VCALL<void>(result, 52, &v21);
      v13 = v22;
      if ( v22 > 1 )
      {
        v10 = 1;
        do
        {
          v11 = 16 * v10;
          v16 = v10;
          v26 = *(uint32_t *)(v21 + 16 * v10);
          v27 = *(uint32_t *)(v21 + 16 * v10 + 4);
          v28 = *(uint32_t *)(v21 + 16 * v10 + 8);
          v29 = *(uint32_t *)(v21 + 16 * v10 + 12);
          hkVector4f::setTransformedPos((hkVector4f::Self *)v24, (const hkTransformf::Self *)v30, (const hkVector4f::Self *)&v26);
          v26 = *(uint32_t *)(v21 + v11 - 16);
          v27 = *(uint32_t *)(v21 + v11 - 12);
          v28 = *(uint32_t *)(v21 + v11 - 8);
          v29 = *(uint32_t *)(v21 + v11 - 4);
          hkVector4f::setTransformedPos((hkVector4f::Self *)v25, (const hkTransformf::Self *)v30, (const hkVector4f::Self *)&v26);
          v12 = *(void (**)(uint8_t *))(*(uint32_t *)v8 + 72);
          hkColor::rgbFromFloats(nullptr, 0x3E800000u, 1.0, 0x3F800000u);
          v12(v20);
          v10 = v16 + 1;
        }
        while ( v16 + 1 != v13 );
      }
      result = v23;
      v22 = 0;
      if ( v23 >= 0 )
        return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 v21,
                 16 * v23);
    }
  }
  return result;
}


