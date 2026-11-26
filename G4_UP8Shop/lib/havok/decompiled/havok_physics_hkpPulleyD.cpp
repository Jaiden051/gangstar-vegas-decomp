#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpPulleyD.h"

// ----------------------------------------------------------------------------
// Function: hkpPulleyDrawer::drawConstraint  (binary VA: 0x1af42b0)
// Original: hkpPulleyDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpPulleyDrawer::drawConstraint(hkpPulleyDrawer::Self *self, const hkpPulleyConstraintData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, int a7)
{
  hkDebugDisplayHandler::Self *v7;
  const hkTransformf::Self *v8;
  char *v9;
  int v10;
  __m128i v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int result;
  __m128 v17;
  __m128 v18;
  __m128 v19;
  __m128 v20;
  __m128 v21;
  __m128 v22;
  __m128 v23;
  uint64_t v24; // xmm1_8
  __m128 v25;
  unsigned int v26;
  __m128i v27;
  __m128 v28;
  __m128 v29;
  int v30;
  __m128 v31;
  __m128 v32;
  __m128 v33;
  int savedregs;
  void *retaddr;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef signed int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef char _g4_t_v44;
  typedef hkTransformf::Self *_g4_t_v45;
  typedef hkTransformf::Self *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef hkpPulleyDrawer::Self *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef void *_g4_t_v54;
  typedef const hkpPulleyConstraintData::Self *_g4_t_v55;
  typedef __m128 *_g4_t_v56;
  typedef hkpConstraintDrawer::Self *_g4_t_v57;
  typedef hkpConstraintDrawer::Self *_g4_t_v58;
  typedef uint8_t _g4_t_v59[4];
  typedef g4_int128_t _g4_t_v60;
  typedef __m128 _g4_t_v61;
  typedef uint64_t _g4_t_v62[5];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v34)) > _g4_s0 ? (12u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v35)) > _g4_s1 ? (16u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v36)) > _g4_s2 ? (20u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v37)) > _g4_s3 ? (24u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v38)) > _g4_s4 ? (28u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v39)) > _g4_s5 ? (32u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v40)) > _g4_s6 ? (32u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v41)) > _g4_s7 ? (36u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v42)) > _g4_s8 ? (36u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v43)) > _g4_s9 ? (40u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v44)) > _g4_s10 ? (40u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v45)) > _g4_s11 ? (44u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v46)) > _g4_s12 ? (44u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v47)) > _g4_s13 ? (48u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v48)) > _g4_s14 ? (52u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v49)) > _g4_s15 ? (56u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v50)) > _g4_s16 ? (56u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v51)) > _g4_s17 ? (60u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v52)) > _g4_s18 ? (60u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v53)) > _g4_s19 ? (64u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v54)) > _g4_s20 ? (64u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v55)) > _g4_s21 ? (68u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v56)) > _g4_s22 ? (68u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v57)) > _g4_s23 ? (72u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v58)) > _g4_s24 ? (72u + sizeof(_g4_t_v58)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v59)) > _g4_s25 ? (76u + sizeof(_g4_t_v59)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v60)) > _g4_s26 ? (80u + sizeof(_g4_t_v60)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v61)) > _g4_s27 ? (96u + sizeof(_g4_t_v61)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v62)) > _g4_s28 ? (112u + sizeof(_g4_t_v62)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 72u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 76u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 96u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 112u);

  LODWORD(v62[3]) = (uint32_t)(uintptr_t)(&self);
  v57 = (hkpConstraintDrawer::Self *)(self);
  v45 = (hkTransformf::Self *)(a4);
  v7 = a5;
  v8 = a3;
  v55 = a2;
  v53 = a6;
  v51 = a7;
  hkpPrimitiveDrawer::setDisplayHandler((hkpPulleyDrawer::Self *)((char *)self + 192), a5);
  hkpConstraintDrawer::updateCommonParameters(v57, v8, v45);
  hkVector4f::setTransformedPos(
    (hkpConstraintDrawer::Self *)((char *)v57 + 80),
    v45,
    (const hkpPulleyConstraintData::Self *)((char *)v55 + 48));
  hkVector4f::setTransformedPos(
    (hkpConstraintDrawer::Self *)((char *)v57 + 64),
    v8,
    (const hkpPulleyConstraintData::Self *)((char *)v55 + 32));
  hkpConstraintDrawer::drawPivots(v57, v53, v51);
  hkpConstraintDrawer::drawBodyFrames(v57, v53, v51);
  v9 = (char *)v55 + 80;
  (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, int, int, int, int, int, int, int, int, int, int, int, int, int, hkTransformf::Self *, int, uint8_t *, int, int, int, const hkpPulleyConstraintData::Self *, hkpConstraintDrawer::Self *))(*(uint32_t *)v7 + 72))(
    v59,
    v7,
    (int)(uintptr_t)(v55) + 80,
    (int)(uintptr_t)(v55) + 96,
    -4144960,
    v53,
    v51,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v41,
    v43,
    v45,
    v47,
    v59,
    (int)(uintptr_t)(v57) + 64,
    v51,
    v53,
    v55,
    v57);
  v10 = *(uint32_t *)v7;
  self = v52;
  HIDWORD(v62[4]) = (uint32_t)(uintptr_t)(v9);
  retaddr = v54;
  savedregs = -1;
  LODWORD(v62[4]) = v49;
  HIDWORD(v62[3]) = (uint32_t)(uintptr_t)(v7);
  (*(void (**)(int))(v10 + 72))(v48);
g4_m128_raw(v11) =g4_m128_lane<uint32_t>(v56[7], 1);
  if ( *(float *)g4_m128_ptr<int32_t>(v11) <= 1.0 )
  {
    v50 = 1;
    v15 = 0;
  }
  else
  {
    v12 = _mm_cvtsi128_si32(v11);
    v13 = v12 & ~(((v12 & 0x7FFFFFFF) - 1) >> 31);
    v40 = ((v12 & 0x7F800000u) >> 23) - 127;
    v14 = (int)(((v12 & 0x7F800000u) >> 23) - 151) >> 31;
    v44 = v14 & (23 - v40);
    v42 = ~v14;
    v50 = (~(v40 >> 31)
         & (((v13 >> 31)
           | (((v13 & 0x7FFFFF | 0x800000) & (v42 | (-8388608 >> ((v14 & 0x17) - v44))))
            + ((v13 & 0x7FFFFF | 0x800000) & (v42 | (-8388608 >> ((v14 & 0x17) - v44))))
            - 1))
          - ((v13 & 0x7FFFFF | 0x800000) & (v42 | (-8388608 >> ((v14 & 0x17) - v44))))
          + 1)) >> v44 << (v42 & (((v12 & 0x7F800000u) >> 23) + 106));
    v15 = v50 - 1;
  }
  v60 = 0x3D8F5C29u;
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v60, v46, (const hkVector4f::Self *)&v60);
  result = v50;
  v23 = _mm_xor_ps(g4_m128_u32(0x3F000000u), g4_m128_from<__m128>(0x80000000));
g4_m128_lane<float>(v23, 0) =g4_m128_lane<float>(v23, 0) * (float)v15;
g4_m128_raw(v17) = DWORD1(v60);
g4_m128_raw(v18) = DWORD2(v60);
g4_m128_raw(v19) = HIDWORD(v60);
  v20 = v23;
  v21 = v23;
g4_m128_lane<float>(v20, 0) =g4_m128_lane<float>(v23, 0) * *(float *)&v60;
  v22 = v23;
g4_m128_lane<float>(v21, 0) =g4_m128_lane<float>(v23, 0) * *((float *)&v60 + 1);
g4_m128_lane<float>(v22, 0) =g4_m128_lane<float>(v23, 0) * *((float *)&v60 + 2);
g4_m128_lane<float>(v23, 0) =g4_m128_lane<float>(v23, 0) * *((float *)&v60 + 3);
  if ( v50 > 0 )
  {
    v24 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v22, v23), 0);
g4_m128_lane<uint64_t>(v25, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v20, v21), 0);
g4_m128_lane<uint64_t>(v25, 1) = v24;
    v26 = 0;
    v27 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(g4_to_m128i((unsigned int)v60)));
    while ( 1 )
    {
g4_m128_lane<uint64_t>(v28, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_raw(G4_BITCAST<__m128>(v27)), v17), 0);
g4_m128_lane<uint64_t>(v28, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v18, v19), 0);
      v29 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_cvtsi32_si128(v26), 0)), v28);
      v30 = *(uint32_t *)v7;
      ++v26;
      v31 = _mm_add_ps(v29, v25);
      v32 = _mm_add_ps(*((__m128 *)v58 + 5), v31);
      v33 = _mm_add_ps(v31, v56[6]);
      HIDWORD(v62[3]) = (uint32_t)(uintptr_t)(v7);
      self = v52;
      retaddr = v54;
      v61 = v32;
      savedregs = -1;
      *(__m128 *)v62 = v33;
      HIDWORD(v62[4]) = (uint32_t)(uintptr_t)(v62);
      LODWORD(v62[4]) = (uint32_t)(uintptr_t)(&v61);
      result = (*(int (**)(int))(v30 + 72))(v48);
      if ( v26 == v50 )
        break;
g4_m128_raw(v27) = (unsigned int)v60;
g4_m128_raw(v17) = DWORD1(v60);
g4_m128_raw(v18) = DWORD2(v60);
g4_m128_raw(v19) = HIDWORD(v60);
    }
  }
  return result;
}


