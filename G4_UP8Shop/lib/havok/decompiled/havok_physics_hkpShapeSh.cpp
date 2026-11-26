#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpShapeSh.h"

// ----------------------------------------------------------------------------
// Function: hkpShapeShrinker::shrinkBoxShape  (binary VA: 0x16f4e90)
// Original: hkpShapeShrinker::shrinkBoxShape
// ----------------------------------------------------------------------------
hkpShapeShrinker::Self * hkpShapeShrinker::shrinkBoxShape(hkpShapeShrinker::Self *self, hkpBoxShape::Self *a2, float a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v7; // xmm0_4
  int v8;
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  char v12;
  int v13;
  float v14; // xmm7_4
  int v15;
  float v16; // xmm3_4
  bool v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);

  v3 = *((float *)self + 8);
  v4 = *((float *)self + 9);
  v5 = v3 + v3;
  v6 = v4 + v4;
  v7 = *((float *)self + 10);
  v8 = _mm_cvtsi128_si32(g4_to_m128i(*((unsigned int *)self + 11)));
  v9 = v7 + v7;
  v10 = fminf(fminf(v3, v4), v7);
  if ( (float)(v3 + v3) > (float)(v4 + v4) )
  {
    v11 = v4 + v4;
    v12 = 0;
    v13 = 1;
  }
  else
  {
    v11 = v3 + v3;
    v12 = 1;
    v13 = 0;
  }
  if ( v11 > v9 )
  {
    v13 = 2;
    v12 = 0;
  }
  if ( v6 >= v5 )
  {
    v14 = v4 + v4;
    v15 = 1;
  }
  else
  {
    v14 = v3 + v3;
    v15 = 0;
  }
  if ( v9 < v14 )
  {
    v18 = v13 == 2;
    if ( v13 == 2 && v15 == 0 )
      goto LABEL_9;
LABEL_12:
    if ( v15 != 1 || !v18 )
    {
      v16 = v9 * 0.5;
      goto LABEL_10;
    }
LABEL_17:
    v16 = v5 * 0.5;
    goto LABEL_10;
  }
  if ( v12 == 0 )
  {
    v15 = 2;
    v18 = v13 == 2;
    if ( v13 == 1 )
      goto LABEL_17;
    goto LABEL_12;
  }
LABEL_9:
  v16 = v6 * 0.5;
LABEL_10:
  LODWORD(v20[3]) = v8;
  v19 = fminf(fminf(v10 * 0.5, v16 * *(float *)&a2), a3);
  v20[0] = v3 - v19;
  v20[1] = v4 - v19;
  v20[2] = v7 - v19;
  hkpBoxShape::setHalfExtents(self, (const hkVector4f::Self *)v20);
  *((float *)self + 4) = v19 + *((float *)self + 4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeShrinker::shrinkCylinderShape  (binary VA: 0x16f5030)
// Original: hkpShapeShrinker::shrinkCylinderShape
// ----------------------------------------------------------------------------
hkpShapeShrinker::Self * hkpShapeShrinker::shrinkCylinderShape(hkpShapeShrinker::Self *self, hkpCylinderShape::Self *a2)
{
  float v2; // xmm3_4
  __m128i v3;
  __m128i v4;
  float v5;
  __m128i v6;
  float v7; // xmm6_4
  float v8;
  __m128i v9;
  int v10;
  float v11; // xmm2_4
  float v12; // xmm1_4
  __m128i v13;
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm5_4
  float v17;
  float v18; // xmm6_4
  float v19; // xmm1_4
  float v21; // xmm6_4
  float CylinderRadius;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;

  CylinderRadius = hkpCylinderShape::getCylinderRadius(self);
  v2 = CylinderRadius;
  v23 = *((float *)self + 11);
g4_m128_raw(v3) = *((unsigned int *)self + 15);
  v27 = *((float *)self + 9);
  v26 = *((float *)self + 10);
g4_m128_raw(v4) = *((unsigned int *)self + 13);
g4_m128_raw(v6) = *((unsigned int *)self + 12);
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  v31 = *(float *)g4_m128_ptr<int32_t>(v3);
  *(float *)g4_m128_ptr<int32_t>(v3) = *(float *)g4_m128_ptr<int32_t>(v3) - v23;
  v25 = *(float *)g4_m128_ptr<int32_t>(v6);
  *(float *)g4_m128_ptr<int32_t>(v6) = *(float *)g4_m128_ptr<int32_t>(v6) - *((float *)self + 8);
  v32 = *((float *)self + 14);
  v7 = 0.0;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v9 = v6;
  v28 = *((float *)self + 8);
  v29 = *(float *)g4_m128_ptr<int32_t>(v4) - v27;
  v30 = v32 - v26;
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v6) * *(float *)g4_m128_ptr<int32_t>(v6)) + (float)(v29 * v29))
                         + (float)(v30 * v30);
  if ( *(float *)g4_m128_ptr<int32_t>(v9) > 0.0 )
  {
    v10 = ((_mm_cvtsi128_si32(v9) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v9) >> 1));
    v11 = (float)(*(float *)&v10 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * *(float *)&v10)
                * (float)(*(float *)&v10 * *(float *)&v10));
    v12 = (float)(v11 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * v11) * (float)(v11 * v11));
    v7 = (float)(1.5 * v12) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * v12) * (float)(v12 * v12));
  }
g4_m128_raw(v13) = LODWORD(v30);
  *(float *)g4_m128_ptr<int32_t>(v13) = v30 * v7;
  v14 = *(float *)g4_m128_ptr<int32_t>(v6) * v7;
  v15 = v29 * v7;
  v16 = v8 * v7;
  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
  v18 = (float)(v7 * *(float *)g4_m128_ptr<int32_t>(v9)) * 0.5;
  v19 = v18;
  if ( v18 > v2 )
  {
    v18 = v2;
    v19 = v2;
  }
  v24 = fminf(v18 * 0.5, v19 * *(float *)&a2);
  hkpCylinderShape::setCylinderRadius(self, v2 - v24);
  v21 = v24 + *((float *)self + 4);
  *((float *)self + 8) = v28 + (float)(v14 * v24);
  *((float *)self + 4) = v21;
  *((float *)self + 9) = v27 + (float)(v15 * v24);
  *((float *)self + 15) = v31 - (float)(v16 * v24);
  *((float *)self + 10) = v26 + (float)(v17 * v24);
  *((float *)self + 11) = v23 + (float)(v16 * v24);
  *((float *)self + 12) = v25 - (float)(v14 * v24);
  *((float *)self + 13) = v5 - (float)(v15 * v24);
  *((float *)self + 14) = v32 - (float)(v17 * v24);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeShrinker::shrinkByConvexRadius  (binary VA: 0x16f6ee0)
// Original: hkpShapeShrinker::shrinkByConvexRadius
// ----------------------------------------------------------------------------
hkpConvexVerticesShape::Self * hkpShapeShrinker::shrinkByConvexRadius(long double a1, int a2, hkMemoryAllocator::Self *a3, char a4)
{
  hkpConvexVerticesShape::Self *result;
  void *retaddr;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v8)) > _g4_s3 ? (12u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  if ( a3 != nullptr )
    return (hkpConvexVerticesShape::Self *)(uintptr_t)(sub_16F57D0(a2, a3, a1, a4));
  v5 = 0;
  v6 = 0;
  v7 = 0x80000000;
  result = (hkpConvexVerticesShape::Self *)(uintptr_t)(sub_16F57D0(a2, (hkMemoryAllocator::Self *)&v5, a1, a4));
  v6 = 0;
  if ( v7 >= 0 )
  {
    (*(void (**)(uint32_t *, int, int, hkpConvexVerticesShape::Self *, int, int, int, int))(hkContainerHeapAllocator::s_alloc
                                                                                            + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v5,
      8 * v7,
      result,
      v5,
      v6,
      v7,
      v8);
    return (hkpConvexVerticesShape::Self *)retaddr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeShrinker::shrinkConvexVerticesShape  (binary VA: 0x16f6f80)
// Original: hkpShapeShrinker::shrinkConvexVerticesShape
// ----------------------------------------------------------------------------
int hkpShapeShrinker::shrinkConvexVerticesShape(float a1, float a2, float a3, float a4, hkpConvexVerticesShape::Self *a5, float a6, float a7, float a8, hkString::Self *a9, char a10)
{
  int v10;
  char *PlaneEquations;
  int v13;
  float v14; // xmm1_4
  float *v15;
  float *v16;
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  char v22;
  int v23;
  float v24; // xmm4_4
  int v25;
  float v26; // xmm0_4
  float v27; // xmm0_4
  int v28;
  int32_t v29; // kr00_4
  int32_t v30;
  int32_t v31; // ett
  char *v32;
  bool v33;
  uint32_t *v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  float v46; // xmm1_4
  int j;
  float v48; // xmm2_4
  __m128i v49;
  int v50;
  int v51;
  float *v52;
  int v53;
  int v54;
  float *v55;
  float v56; // xmm5_4
  float v57; // xmm4_4
  float v58; // xmm3_4
  int v59;
  __m128i v60;
  float v61; // xmm1_4
  float v62; // xmm0_4
  __m128i v63;
  float v64; // xmm4_4
  int v65;
  int v66;
  float v67; // xmm3_4
  float v68; // xmm3_4
  float v69; // xmm0_4
  int v70;
  int v71;
  signed int v72;
  int v73;
  int v74;
  float retaddr;
  typedef hkError::Self *_g4_t_v75;
  typedef hkError::Self *_g4_t_v76;
  typedef float _g4_t_v77;
  typedef int _g4_t_v78;
  typedef bool _g4_t_v79;
  typedef int _g4_t_i;
  typedef hkpConvexVerticesShape::Self *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef signed int _g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef float _g4_t_v86;
  typedef int _g4_t_v87;
  typedef signed int _g4_t_v88;
  typedef char _g4_t_v89;
  typedef signed int _g4_t_v90;
  typedef hkString::Self *_g4_t_v91;
  typedef int64_t _g4_t_v92 __attribute__((aligned(1)));
  typedef int _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef unsigned int _g4_t_v98;
  typedef float _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef g4_int128_t _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef float _g4_t_v111[136];
  enum : size_t {
    _g4_s0 = 784u,
    _g4_s1 = (0u + sizeof(_g4_t_v75)) > _g4_s0 ? (0u + sizeof(_g4_t_v75)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v76)) > _g4_s1 ? (0u + sizeof(_g4_t_v76)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v77)) > _g4_s2 ? (32u + sizeof(_g4_t_v77)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v78)) > _g4_s3 ? (36u + sizeof(_g4_t_v78)) : _g4_s3,
    _g4_s5 = (43u + sizeof(_g4_t_v79)) > _g4_s4 ? (43u + sizeof(_g4_t_v79)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_i)) > _g4_s5 ? (44u + sizeof(_g4_t_i)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v81)) > _g4_s6 ? (52u + sizeof(_g4_t_v81)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v82)) > _g4_s7 ? (56u + sizeof(_g4_t_v82)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v83)) > _g4_s8 ? (64u + sizeof(_g4_t_v83)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v84)) > _g4_s9 ? (72u + sizeof(_g4_t_v84)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v85)) > _g4_s10 ? (76u + sizeof(_g4_t_v85)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v86)) > _g4_s11 ? (80u + sizeof(_g4_t_v86)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v87)) > _g4_s12 ? (80u + sizeof(_g4_t_v87)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v88)) > _g4_s13 ? (84u + sizeof(_g4_t_v88)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v89)) > _g4_s14 ? (88u + sizeof(_g4_t_v89)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v90)) > _g4_s15 ? (88u + sizeof(_g4_t_v90)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v91)) > _g4_s16 ? (92u + sizeof(_g4_t_v91)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v92)) > _g4_s17 ? (92u + sizeof(_g4_t_v92)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v93)) > _g4_s18 ? (92u + sizeof(_g4_t_v93)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v94)) > _g4_s19 ? (96u + sizeof(_g4_t_v94)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v95)) > _g4_s20 ? (100u + sizeof(_g4_t_v95)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v96)) > _g4_s21 ? (100u + sizeof(_g4_t_v96)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v97)) > _g4_s22 ? (100u + sizeof(_g4_t_v97)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v98)) > _g4_s23 ? (100u + sizeof(_g4_t_v98)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v99)) > _g4_s24 ? (104u + sizeof(_g4_t_v99)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v100)) > _g4_s25 ? (108u + sizeof(_g4_t_v100)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v101)) > _g4_s26 ? (112u + sizeof(_g4_t_v101)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v102)) > _g4_s27 ? (116u + sizeof(_g4_t_v102)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v103)) > _g4_s28 ? (120u + sizeof(_g4_t_v103)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v104)) > _g4_s29 ? (128u + sizeof(_g4_t_v104)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v105)) > _g4_s30 ? (132u + sizeof(_g4_t_v105)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v106)) > _g4_s31 ? (136u + sizeof(_g4_t_v106)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v107)) > _g4_s32 ? (144u + sizeof(_g4_t_v107)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v108)) > _g4_s33 ? (160u + sizeof(_g4_t_v108)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v109)) > _g4_s34 ? (164u + sizeof(_g4_t_v109)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v110)) > _g4_s35 ? (168u + sizeof(_g4_t_v110)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v111)) > _g4_s36 ? (176u + sizeof(_g4_t_v111)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 0u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 0u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 32u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 36u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 43u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 44u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 52u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 56u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 64u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 72u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 76u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 80u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 80u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 84u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 88u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 88u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 92u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 92u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 92u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 96u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 100u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 100u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 100u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 100u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 104u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 108u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 112u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 116u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 120u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 128u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 132u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 136u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 144u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 160u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 164u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 168u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 176u);

  v111[135] = retaddr;
  v111[134] = a2;
  v111[133] = a3;
  v111[132] = a4;
  v111[131] = a1;
  LODWORD(v111[130]) = (uint32_t)(uintptr_t)(&a5);
  v81 = a5;
  v95 = a6;
  v91 = a9;
  v101 = 0;
  v102 = 0;
  v86 = a7;
  v89 = a10;
  v94 = a8;
  v103 = 0x80000000;
  v107 = 0;
  hkpConvexVerticesShape::getOriginalVertices(a5, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v101);
  if ( v102 <= 3 )
  {
    hkErrStream::Construct((hkErrStream::Self *)&v108, (hkString::Self *)v111, 512);
    hkOstream::opShl((int)(uintptr_t)(&v108), (hkString::Self *)"Shape shrinker does not support convex hull dimemsion less than 3");
    hkError::messageWarning(
      (hkError::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_17144)->st_other,
      (int)(uintptr_t)(v111),
      "Util/ShapeShrinker/hkpShapeShrinker.cpp",
      (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_2B4)->st_shndx);
    hkErrStream::Destroy((hkErrStream::Self *)&v108);
LABEL_4:
    v102 = 0;
    if ( v103 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v101,
        16 * v103);
    return 0;
  }
  hkgpConvexHull::Construct((hkgpConvexHull::Self *)v111);
  hkgpConvexHull::BuildConfig::Construct((hkgpConvexHull::BuildConfig::Self *)&v108);
  v104 = v101;
  v105 = v102;
  v106 = 16;
  hkgpConvexHull::build((hkgpConvexHull::Self *)v111, (int)(uintptr_t)(&v104), (const hkgpConvexHull::BuildConfig::Self *)&v108);
  if ( hkgpConvexHull::getDimensions((hkgpConvexHull::Self *)v111) != 3
    || (hkgpConvexHull::buildMassProperties((hkgpConvexHull::Self *)&v100, (int)(uintptr_t)(v111)),
        v107 = *(g4_int128_t *)hkgpConvexHull::getCenterOfMass((hkgpConvexHull::Self *)v111),
        hkgpConvexHull::getVolume((hkgpConvexHull::Self *)&v99, (int)(uintptr_t)(v111)),
        v99 == 0.0) )
  {
    hkgpConvexHull::Destroy((hkgpConvexHull::Self *)v111);
    goto LABEL_4;
  }
  hkgpConvexHull::Destroy((hkgpConvexHull::Self *)v111);
  v102 = 0;
  if ( v103 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v101,
      16 * v103);
  PlaneEquations = hkpConvexVerticesShape::getPlaneEquations(v81);
  v13 = *((uint32_t *)PlaneEquations + 1);
  v14 = 3.40282e38f;
  if ( v13 > 0 )
  {
    v15 = *(float **)PlaneEquations;
    v16 = &v15[4 * v13];
    do
    {
      v17 = *v15;
      v15 += 4;
      v14 = fminf(
              v14,
              -(float)((float)((float)((float)(v17 * *(float *)&v107) + (float)(*(v15 - 3) * *((float *)&v107 + 1)))
                             + (float)(*(v15 - 2) * *((float *)&v107 + 2)))
                     + *(v15 - 1)));
    }
    while ( v15 != v16 );
  }
  if ( v14 < 0.0 )
  {
    hkErrStream::Construct((hkErrStream::Self *)&v108, (hkString::Self *)v111, 512);
    if ( v91 != nullptr )
    {
      v35 = hkOstream::opShl((int)(uintptr_t)(&v108), (hkString::Self *)"Shape '");
      v36 = hkOstream::opShl(v35, v91);
      v37 = hkOstream::opShl(
              v36,
              (hkString::Self *)"' : Center Of Mass seems to be outside the object. Looks like the convex hull of the object is corrupted. (");
      v38 = hkOstream::opShl(v37, v14);
      hkOstream::opShl(v38, (hkString::Self *)")");
      hkError::messageWarning(
        (hkError::Self *)0xABBA3475,
        (int)(uintptr_t)(v111),
        "Util/ShapeShrinker/hkpShapeShrinker.cpp",
        (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_2D4)->st_value + 3);
    }
    else
    {
      v39 = hkOstream::opShl(
              (int)(uintptr_t)(&v108),
              (hkString::Self *)"The Center Of Mass seems to be outside the object. Looks like the convex hull of the object is corrupted. (");
      v40 = hkOstream::opShl(v39, v14);
      hkOstream::opShl(v40, (hkString::Self *)")");
      hkError::messageWarning(
        (hkError::Self *)0xABBA3465,
        (int)(uintptr_t)(v111),
        "Util/ShapeShrinker/hkpShapeShrinker.cpp",
        (uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_2D4)->st_size + 3);
    }
    hkErrStream::Destroy((hkErrStream::Self *)&v108);
    v14 = 0.0;
  }
  G4_VCALL<void>(v81, 24, &unk_1D12FD0, 0, v111);
  v18 = v111[4] - v111[0];
  v19 = v111[5] - v111[1];
  v20 = v111[6] - v111[2];
  if ( (float)(v111[4] - v111[0]) > (float)(v111[5] - v111[1]) )
  {
    v21 = v111[5] - v111[1];
    v22 = 0;
    v23 = 1;
  }
  else
  {
    v21 = v111[4] - v111[0];
    v22 = 1;
    v23 = 0;
  }
  if ( v21 > v20 )
  {
    v23 = 2;
    v22 = 0;
  }
  if ( v19 >= v18 )
  {
    v24 = v111[5] - v111[1];
    v25 = 1;
  }
  else
  {
    v24 = v111[4] - v111[0];
    v25 = 0;
  }
  if ( v20 < v24 )
  {
    v33 = v23 == 2;
    if ( v23 == 2 && v25 == 0 )
      goto LABEL_23;
LABEL_36:
    if ( v25 != 1 || !v33 )
    {
      v26 = v20 * 0.5;
      goto LABEL_24;
    }
LABEL_101:
    v26 = v18 * 0.5;
    goto LABEL_24;
  }
  if ( v22 == 0 )
  {
    v25 = 2;
    v33 = v23 == 2;
    if ( v23 == 1 )
      goto LABEL_101;
    goto LABEL_36;
  }
LABEL_23:
  v26 = v19 * 0.5;
LABEL_24:
  v79 = *((uint32_t *)v81 + 24) != 0;
  v96 = fminf(fminf(v14 * 0.5, v26 * v86), v95);
  hkpConvexVerticesConnectivityUtil::ensureConnectivity((hkpConvexVerticesConnectivityUtil::Self *)&v100, v81);
  v82 = sub_16F52C0(v81, v89, (const hkVector4f::Self *)LODWORD(v96), (int)(uintptr_t)(v75));
  if ( v82 != 0 )
  {
    v27 = sub_16F4B90((hkpConvexVerticesShape::Self *)v82, (int)(uintptr_t)(v81), (float *)&v107);
    if ( v27 <= v94 )
      goto LABEL_31;
    v96 = (float)((float)(v94 * 0.9f) / v27) * v96;
    if ( *(uint16_t *)(v82 + 6) != 0 )
    {
      do
      {
        v29 = *(uint32_t *)(v82 + 4);
        HIWORD(v28) = HIWORD(v29);
        LOWORD(v28) = 0;
        v30 = v28 | (uint16_t)(v29 - 1);
        v31 = v29;
      }
      while ( v31 != __sync_val_compare_and_swap((volatile int32_t *)(v82 + 4), v31, v30) );
      if ( (uint16_t)v30 == 0 )
      {
        v76 = (hkError::Self *)v82;
        (*(void (**)(void))(*(uint32_t *)v82 + 16))();
      }
    }
    v82 = sub_16F52C0(v81, v89, (const hkVector4f::Self *)LODWORD(v96), (int)(uintptr_t)(v76));
    if ( v82 != 0 )
    {
LABEL_31:
      *(float *)(v82 + 16) = v96;
      v32 = hkpConvexVerticesShape::getPlaneEquations(v81);
      if ( *((uint32_t *)v32 + 1) < *(uint32_t *)(*(uint32_t *)(v82 + 96) + 24) )
      {
        v104 = 0;
        v105 = 0;
        v106 = 0x80000000;
        hkpConvexVerticesShape::getOriginalVertices(
          (hkpConvexVerticesShape::Self *)v82,
          (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v104);
        v108 = 0;
        v109 = 0;
        v110 = 0x80000000;
        v34 = *(uint32_t **)(v82 + 96);
        v77 = *(float *)(v82 + 16);
        v84 = v34;
        if ( (int)v34[6] > 0 )
        {
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)&v100,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            &v108,
            v34[6],
            16);
          v41 = v34[6];
          if ( v41 > 0 )
          {
            v78 = 0;
            for ( i = 0; i < v41; ++i )
            {
              v42 = v84[5];
              v43 = v42 + i;
              v44 = *(uint8_t *)(v42 + i);
              v88 = v44;
              if ( v44 <= 2 )
              {
                --v41;
                v71 = i + v42 + 1;
                v84[6] = v41;
                v72 = v41 - i;
                if ( v41 - i > 0 )
                {
                  if ( v43 < v43 + 17 || (unsigned int)v72 <= 0xF )
                  {
                    v74 = 0;
                    do
                    {
                      *(uint8_t *)(v43 + v74) = *(uint8_t *)(v71 + v74);
                      ++v74;
                    }
                    while ( v72 != v74 );
                    v41 = v84[6];
                  }
                  else
                  {
                    v73 = 0;
                    v98 = 0;
                    v93 = 16 * ((unsigned int)v72 >> 4);
                    do
                    {
                      ++v98;
                      *(__m128i *)(v43 + v73) = *(__m128i *)(v43 + v73 + 1);
                      v73 += 16;
                    }
                    while ( (unsigned int)v72 >> 4 > v98 );
                    if ( v93 != v72 )
                    {
                      *(uint8_t *)(v43 + v93) = *(uint8_t *)(v71 + v93);
                      if ( v72 > v93 + 1 )
                      {
                        *(uint8_t *)(v43 + v93 + 1) = *(uint8_t *)(v71 + v93 + 1);
                        if ( v72 > v93 + 2 )
                        {
                          *(uint8_t *)(v43 + v93 + 2) = *(uint8_t *)(v71 + v93 + 2);
                          if ( v72 > v93 + 3 )
                          {
                            *(uint8_t *)(v43 + v93 + 3) = *(uint8_t *)(v71 + v93 + 3);
                            if ( v72 > v93 + 4 )
                            {
                              *(uint8_t *)(v43 + v93 + 4) = *(uint8_t *)(v71 + v93 + 4);
                              if ( v72 > v93 + 5 )
                              {
                                *(uint8_t *)(v43 + v93 + 5) = *(uint8_t *)(v71 + v93 + 5);
                                if ( v72 > v93 + 6 )
                                {
                                  *(uint8_t *)(v43 + v93 + 6) = *(uint8_t *)(v71 + v93 + 6);
                                  if ( v72 > v93 + 7 )
                                  {
                                    *(uint8_t *)(v43 + v93 + 7) = *(uint8_t *)(v71 + v93 + 7);
                                    if ( v72 > v93 + 8 )
                                    {
                                      *(uint8_t *)(v43 + v93 + 8) = *(uint8_t *)(v71 + v93 + 8);
                                      if ( v72 > v93 + 9 )
                                      {
                                        *(uint8_t *)(v43 + v93 + 9) = *(uint8_t *)(v71 + v93 + 9);
                                        if ( v72 > v93 + 10 )
                                        {
                                          *(uint8_t *)(v43 + v93 + 10) = *(uint8_t *)(v71 + v93 + 10);
                                          if ( v72 > v93 + 11 )
                                          {
                                            *(uint8_t *)(v43 + v93 + 11) = *(uint8_t *)(v71 + v93 + 11);
                                            if ( v72 > v93 + 12 )
                                            {
                                              *(uint8_t *)(v43 + v93 + 12) = *(uint8_t *)(v71 + v93 + 12);
                                              if ( v72 > v93 + 13 )
                                              {
                                                *(uint8_t *)(v43 + v93 + 13) = *(uint8_t *)(v71 + v93 + 13);
                                                if ( v72 > v93 + 14 )
                                                  *(uint8_t *)(v43 + v93 + 14) = *(uint8_t *)(v71 + v93 + 14);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    v41 = v84[6];
                  }
                }
                --i;
                v78 += v88;
              }
              else
              {
                v83 = 0;
                v45 = v44 + 1;
                v46 = 0.0;
                v85 = 2 * v78;
                j = 0;
                v48 = 0.0;
                v97 = 0.0;
g4_m128_lane<int32_t>(v49, 0) = 0;
                v92 = 0;
                if ( *(uint8_t *)(v42 + i) != 0 )
                {
                  do
                  {
                    if ( j != 0 )
                      break;
                    ++v83;
                    v87 = v85 + 2;
                    v90 = v83;
                    for ( j = 0; v88 > v90; v87 += 2 )
                    {
                      if ( j != 0 )
                        break;
                      if ( v88 <= ++v90 )
                      {
LABEL_64:
                        j = 0;
                      }
                      else
                      {
                        v50 = v90 + 1;
                        v51 = v84[2];
                        v52 = (float *)(16 * *(uint16_t *)(v51 + v85) + v104);
                        v92 = *(uint64_t *)v52;
                        v97 = v52[2];
                        v53 = *(uint16_t *)(v51 + v87);
                        v54 = 2 * v78 + v51;
                        v55 = (float *)(16 * v53 + v104);
                        v56 = *v55 - *(float *)&v92;
                        v57 = v55[1] - *((float *)&v92 + 1);
                        v58 = v55[2] - v97;
                        while ( 1 )
                        {
                          v59 = 16 * *(uint16_t *)(v54 + 2 * v50 - 2) + v104;
g4_m128_raw(v60) = *(unsigned int *)(v59 + 8);
                          v61 = *(float *)(v59 + 4) - *((float *)&v92 + 1);
                          *(float *)g4_m128_ptr<int32_t>(v60) = *(float *)g4_m128_ptr<int32_t>(v60) - v97;
                          v62 = *(float *)v59 - *(float *)&v92;
                          v49 = v60;
                          *(float *)g4_m128_ptr<int32_t>(v49) = (float)(*(float *)g4_m128_ptr<int32_t>(v60) * v57) - (float)(v61 * v58);
                          v48 = (float)(v62 * v58) - (float)(*(float *)g4_m128_ptr<int32_t>(v60) * v56);
                          v46 = (float)(v61 * v56) - (float)(v62 * v57);
                          v63 = v49;
                          *(float *)g4_m128_ptr<int32_t>(v63) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v49) * *(float *)g4_m128_ptr<int32_t>(v49))
                                                          + (float)(v48 * v48))
                                                  + (float)(v46 * v46);
                          if ( *(float *)g4_m128_ptr<int32_t>(v63) > 0.0 )
                            break;
                          if ( ++v50 == v45 )
                            goto LABEL_64;
                        }
                        v64 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v63);
                        v65 = _mm_cvtsi128_si32(v63) >> 1;
                        v66 = (_mm_cvtsi128_si32(v63) + 2139095040) >> 31;
                        v67 = (float)(1.5 * COERCE_FLOAT(v66 & (1597463174 - v65)))
                            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v63))
                                            * COERCE_FLOAT(v66 & (1597463174 - v65)))
                                    * (float)(COERCE_FLOAT(v66 & (1597463174 - v65))
                                            * COERCE_FLOAT(v66 & (1597463174 - v65))));
                        v68 = (float)(1.5
                                    * (float)((float)(1.5 * v67) - (float)((float)(v64 * v67) * (float)(v67 * v67))))
                            - (float)((float)(v64
                                            * (float)((float)(1.5 * v67)
                                                    - (float)((float)(v64 * v67) * (float)(v67 * v67))))
                                    * (float)((float)((float)(1.5 * v67)
                                                    - (float)((float)(v64 * v67) * (float)(v67 * v67)))
                                            * (float)((float)(1.5 * v67)
                                                    - (float)((float)(v64 * v67) * (float)(v67 * v67)))));
                        *(float *)g4_m128_ptr<int32_t>(v49) = *(float *)g4_m128_ptr<int32_t>(v49) * v68;
                        j = 1;
                        v48 = v48 * v68;
                        v46 = v46 * v68;
                      }
                    }
                    v85 += 2;
                  }
                  while ( v88 > v83 );
                }
                v78 += v88;
                if ( j != 0 )
                {
                  v69 = (float)((float)(*(float *)&v92 * *(float *)g4_m128_ptr<int32_t>(v49)) + (float)(*((float *)&v92 + 1) * v48))
                      + (float)(v97 * v46);
                }
                else
                {
                  v46 = 0.0;
                  v69 = 0.0;
                  v48 = 0.0;
g4_m128_lane<int32_t>(v49, 0) = 0;
                }
                v70 = v108 + 16 * v109;
                *(uint32_t *)v70 =g4_m128_lane<int32_t>(v49, 0);
                *(float *)(v70 + 4) = v48;
                *(float *)(v70 + 8) = v46;
                *(float *)(v70 + 12) = -(float)(v69 + v77);
                ++v109;
                v41 = v84[6];
              }
            }
          }
        }
        hkpConvexVerticesShape::setPlaneEquations(
          (hkpConvexVerticesShape::Self *)v82,
          (const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v108);
        v109 = 0;
        if ( v110 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v108,
            16 * v110);
        v108 = 0;
        v110 = 0x80000000;
        v105 = 0;
        if ( v106 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v104,
            16 * v106);
      }
      else
      {
        hkpConvexVerticesShape::setPlaneEquations(
          (hkpConvexVerticesShape::Self *)v82,
          (const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)v32);
      }
      v10 = v82;
      if ( v79 )
        return v10;
      hkpConvexVerticesShape::setConnectivity(v81, nullptr, 1);
      hkpConvexVerticesShape::setConnectivity((hkpConvexVerticesShape::Self *)v82, nullptr, 1);
      return v82;
    }
  }
  if ( !v79 )
    hkpConvexVerticesShape::setConnectivity(v81, nullptr, 1);
  return 0;
}


