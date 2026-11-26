#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpIterati.h"

// ----------------------------------------------------------------------------
// Function: hkpIterativeLinearCastAgent::Destroy  (binary VA: 0x16f7e00)
// Original: hkpIterativeLinearCastAgent::~hkpIterativeLinearCastAgent
// ----------------------------------------------------------------------------
void hkpIterativeLinearCastAgent::Destroy(hkpIterativeLinearCastAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpIterativeLinearCastAgent::Destroy_ea16f7e20  (binary VA: 0x16f7e20)
// Original: hkpIterativeLinearCastAgent::~hkpIterativeLinearCastAgent
// ----------------------------------------------------------------------------
void hkpIterativeLinearCastAgent::Destroy_ea16f7e20(hkpIterativeLinearCastAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpIterativeLinearCastAgent::linearCast  (binary VA: 0x16f7e80)
// Original: hkpIterativeLinearCastAgent::linearCast
// ----------------------------------------------------------------------------
int * hkpIterativeLinearCastAgent::linearCast(int *a1, uint32_t *a2, unsigned int a3, int a4, unsigned int a5, uint32_t *a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, unsigned int a15, int a16, int a17, int a18, int a19, int a20, int a21, float *a22, uint32_t *a23, unsigned int a24, unsigned int a25, unsigned int a26, unsigned int a27, g4_int128_t a28, float a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, float a41, float a42, float a43, float a44, unsigned int a45, unsigned int a46, unsigned int a47, unsigned int a48, g4_int128_t a49, unsigned int a50, int32_t a51, int32_t a52, int32_t a53, uint32_t *a54, unsigned int a55)
{
  uint8_t STACK[568] = {0};
  float v55; // xmm0_4
  int *result;
  unsigned int v57;
  unsigned int v58;
  __m128 v59;
  unsigned int v60;
  float v61; // xmm1_4
  unsigned int v62; // xmm4_4
  __m128 v63;
  __m128 v64;
  g4_int128_t v65;
  int v66;
  float v67; // xmm6_4
  float v68; // xmm7_4
  float v69; // xmm3_4
  __m128i m128_i128;
  float v71;
  int v72; // xmm1_4
  float v73; // xmm1_4
  __m128 v74;
  float v75; // xmm3_4
  int v76;
  __m128 v77;
  g4_int128_t v78;
  unsigned int v79;
  unsigned int v80;
  unsigned int v81;
  int v82;
  float *v83;
  float v84;
  int v85;
  float v86; // xmm5_4
  __m128 v88;
  float v89; // xmm4_4
  int v90;
  int v91; // xmm1_4
  float v92; // xmm1_4
  float v93; // xmm0_4
  float v94; // xmm6_4
  float v95; // xmm5_4
  float v96; // xmm7_4
  float v97; // xmm0_4
  int v98;
  __m128 v99;
  g4_int128_t v100;
  int v101;
  unsigned int *retaddr;
  unsigned int v107;
  int v108;
  unsigned int v109;
  float v110;
  float v111;
  unsigned int v112;
  typedef uint32_t _g4_t_v102[20];
  typedef float _g4_t_v103[40];
  typedef uint32_t *_g4_t_v104;
  typedef unsigned int *_g4_t_v105;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v102)) > _g4_s0 ? (0u + sizeof(_g4_t_v102)) : _g4_s0,
    _g4_s2 = (80u + sizeof(_g4_t_v103)) > _g4_s1 ? (80u + sizeof(_g4_t_v103)) : _g4_s1,
    _g4_s3 = (240u + sizeof(_g4_t_v104)) > _g4_s2 ? (240u + sizeof(_g4_t_v104)) : _g4_s2,
    _g4_s4 = (244u + sizeof(_g4_t_v105)) > _g4_s3 ? (244u + sizeof(_g4_t_v105)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 0u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 80u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 240u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 244u);

  v102[0] = ((uint32_t)(uintptr_t)&off_20998B0);
  std::memcpy(v103, (const void *)a4, 80);
  v55 = v103[3] + *(float *)(a4 + 100);
  v102[1] = 2139095022;
  v102[12] = 0;
  LODWORD(v103[2]) = 1;
  v102[11] = 2139095022;
  v103[3] = v55;
  G4_VCALL<void>(a1, 24, a2, a3, v103, v102);
  result = (int *)STACK[0x140];
  if ( STACK[0x140] != 0 )
  {
    v57 = STACK[0x120];
    v109 = STACK[0x12C];
    a27 = STACK[0x12C];
    v58 = STACK[0x124];
g4_m128_raw(v59) = STACK[0x13C];
    v60 = STACK[0x128];
    v61 = *(float *)(a4 + 12);
    a24 = v57;
    v62 = STACK[0x150];
    a25 = v58;
    v112 = v62;
    a26 = v60;
g4_m128_raw(v63) = STACK[0x154];
g4_m128_raw(v64) = STACK[0x158];
    if ( v61 >g4_m128_lane<float>(v59, 0) && a6 != nullptr )
    {
      STACK[0x1B0] = v57;
      *(uint64_t *)&v65 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v112), v63), 0);
      *((uint64_t *)&v65 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v64, v59), 0);
      STACK[0x1B8] = v60;
      a28 = v65;
      STACK[0x1C0] = (uint8_t)(uintptr_t)(v65);
      STACK[0x1C4] = DWORD1(a28);
      STACK[0x1C8] = DWORD2(a28);
      STACK[0x1CC] = HIDWORD(a28);
      STACK[0x1E0] = (unsigned int)(uintptr_t)(a2);
      STACK[0x1E4] = a3;
      STACK[0x1BC] = v109;
      STACK[0x1B4] = v58;
      STACK[0x1D4] =g4_m128_lane<int32_t>(v63, 0);
      STACK[0x1D8] =g4_m128_lane<int32_t>(v64, 0);
      v66 = *a6;
      v105 = (unsigned int *)(&STACK[0x1B0]);
      STACK[0x1DC] =g4_m128_lane<int32_t>(v59, 0);
      v104 = a6;
      STACK[0x1D0] = v112;
      (*(void (**)(uint32_t *, unsigned int *))(v66 + 8))(v104, v105);
g4_m128_raw(v59) =g4_m128_lane<uint32_t>(v59, 0);
g4_m128_raw(v64) =g4_m128_lane<uint32_t>(v64, 0);
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v63, 0);
    }
    result = (int *)a4;
    v110 = *(float *)(a4 + 80);
    v67 = *(float *)(a4 + 84);
    v68 = *(float *)(a4 + 88);
    v69 = (float)((float)((float)(*(float *)&v112 * v110) + (float)(g4_m128_lane<float>(v63, 0) * v67))
                + (float)(g4_m128_lane<float>(v64, 0) * v68))
        +g4_m128_lane<float>(v59, 0);
    if ( v69 <= 0.0
      && (float)((float)((float)((float)(*(float *)&v112 * *(float *)(a4 + 80)) + (float)(g4_m128_lane<float>(v63, 0) * v67))
                       + (float)(g4_m128_lane<float>(v64, 0) * v68))
               + *(float *)(a4 + 96)) < 0.0 )
    {
      m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v59));
      *(float *)g4_m128_ptr<int32_t>(m128_i128) =g4_m128_lane<float>(v59, 0) - v69;
      v71 = COERCE_FLOAT(_mm_cvtsi128_si32(m128_i128));
      v72 = (2130706432 - LODWORD(v71)) & ((LODWORD(v71) ^ (LODWORD(v71) + 2139095040)) >> 31);
      v73 = (float)(2.0
                  - (float)(v71
                          * (float)((float)(2.0 - (float)((float)(g4_m128_lane<float>(v59, 0) - v69) * *(float *)&v72))
                                  * *(float *)&v72)))
          * (float)((float)(2.0 - (float)((float)(g4_m128_lane<float>(v59, 0) - v69) * *(float *)&v72)) * *(float *)&v72);
g4_m128_raw(v74) = 0x40000000u;
      v75 = v71 * v73;
      v76 = *(uint32_t *)(a4 + 104);
g4_m128_lane<float>(v74, 0) = 2.0 - v75;
      v77 = v74;
g4_m128_lane<float>(v77, 0) = (float)(g4_m128_lane<float>(v74, 0) * v73) *g4_m128_lane<float>(v59, 0);
      if ( *(float *)v76 <g4_m128_lane<float>(v59, 0) )
      {
        STACK[0x1B4] = 2139095022;
        STACK[0x1E0] = 0;
        STACK[0x1B0] = (unsigned int)((uint32_t)(uintptr_t)&off_20998B0);
        STACK[0x1DC] = a15;
        v83 = (float *)a2[2];
        a29 = *v83;
        a30 = *((uint32_t *)v83 + 1);
        a31 = *((uint32_t *)v83 + 2);
        a32 = *((uint32_t *)v83 + 3);
        a33 = *((uint32_t *)v83 + 4);
        a34 = *((uint32_t *)v83 + 5);
        a35 = *((uint32_t *)v83 + 6);
        a36 = *((uint32_t *)v83 + 7);
        a37 = *((uint32_t *)v83 + 8);
        a38 = *((uint32_t *)v83 + 9);
        a39 = *((uint32_t *)v83 + 10);
        a40 = *((uint32_t *)v83 + 11);
        a41 = v83[12];
        a42 = v83[13];
        v84 = v83[14];
        a23 = a2;
        a43 = v84;
        a44 = v83[15];
        a21 = -1;
        a22 = &a29;
        v85 = *(uint32_t *)(v76 + 4) - 1;
        a20 = *a2;
        v108 = v85;
        if ( v85 < 0 )
        {
LABEL_22:
          if ( STACK[0x164] != 0 )
          {
            v112 = STACK[0x1D0];
g4_m128_raw(v63) = STACK[0x1D4];
g4_m128_raw(v64) = STACK[0x1D8];
          }
          *(uint64_t *)&v100 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v112), v63), 0);
          a45 = a24;
          *((uint64_t *)&v100 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v64, v77), 0);
          a28 = v100;
          a49 = v100;
          a46 = a25;
          a54 = a2;
          a55 = a3;
          a50 = v112;
          a47 = a26;
          a51 =g4_m128_lane<int32_t>(v63, 0);
          v101 = *(uint32_t *)a5;
          a48 = a27;
          a52 =g4_m128_lane<int32_t>(v64, 0);
          a53 =g4_m128_lane<int32_t>(v77, 0);
          return (int *)(*(int (**)(unsigned int, unsigned int *))(v101 + 8))(a5, &a45);
        }
        else
        {
          v86 = v110;
          while ( 1 )
          {
            v93 = *(float *)(a4 + 92);
            STACK[0x1E0] = 0;
            STACK[0x1B4] = 2139095022;
            STACK[0x1DC] = a15;
            v94 = (float)(v67 *g4_m128_lane<float>(v77, 0)) + v83[13];
            v95 = (float)(v86 *g4_m128_lane<float>(v77, 0)) + v83[12];
            v96 = (float)(v68 *g4_m128_lane<float>(v77, 0)) + v83[14];
            v97 = (float)(v93 *g4_m128_lane<float>(v77, 0)) + v83[15];
            v98 = *a1;
            retaddr = (unsigned int *)(&STACK[0x1B0]);
            a42 = v94;
            a43 = v96;
            a44 = v97;
            a41 = v95;
            result = (int *)(*(int (**)(int *, int *, unsigned int, float *))(v98 + 24))(a1, &a20, a3, v103);
g4_m128_raw(v99) = STACK[0x1F0];
            v67 = *(float *)(a4 + 84);
            v111 = *(float *)(a4 + 80);
            v107 = STACK[0x1F8];
            v68 = *(float *)(a4 + 88);
            a5 = STACK[0x1F4];
            v112 = STACK[0x1F0];
g4_m128_lane<float>(v99, 0) = (float)((float)(g4_m128_lane<float>(v99, 0) * v111) + (float)(*(float *)&STACK[0x1F4] * v67))
                            + (float)(*(float *)&STACK[0x1F8] * v68);
            if (g4_m128_lane<float>(v99, 0) >= 0.0 )
              break;
g4_m128_raw(v77) =g4_m128_lane<uint32_t>(v77, 0);
            result = (int *)(&dword_1C7C1B0);
            v88 = _mm_xor_ps(v99, *(__m128 *)&dword_1C7C1B0);
            v89 = *(float *)&STACK[0x1DC];
            if ( (float)((float)(g4_m128_lane<float>(v77, 0) *g4_m128_lane<float>(v88, 0)) + *(float *)&STACK[0x1DC]) >g4_m128_lane<float>(v88, 0) )
              break;
            v90 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v88)));
            v91 = (2130706432 - v90) & ((v90 ^ (v90 + 2139095040)) >> 31);
            v92 = (float)(2.0
                        - (float)(g4_m128_lane<float>(v88, 0)
                                * (float)((float)(2.0 - (float)(g4_m128_lane<float>(v88, 0) * *(float *)&v91)) * *(float *)&v91)))
                * (float)((float)(2.0 - (float)(g4_m128_lane<float>(v88, 0) * *(float *)&v91)) * *(float *)&v91);
            result = (int *)STACK[0x1F4];
g4_m128_lane<float>(v77, 0) =g4_m128_lane<float>(v77, 0)
                            + (float)((float)((float)(2.0 - (float)(g4_m128_lane<float>(v88, 0) * v92)) * v92) * v89);
            if (g4_m128_lane<float>(v77, 0) > *(float *)(a5 + 4) )
              break;
            a24 = STACK[0x1C0];
            a25 = STACK[0x1C4];
            a26 = STACK[0x1C8];
            a27 = STACK[0x1CC];
            if ( **(float **)(a4 + 104) >= v89 || (--v108, v108 == -1) )
            {
g4_m128_raw(v63) = a5;
g4_m128_raw(v64) = v107;
              goto LABEL_22;
            }
            v86 = v111;
            v83 = (float *)a2[2];
          }
        }
      }
      else
      {
        if (g4_m128_lane<float>(v59, 0) <= 0.0 )
        {
g4_m128_raw(v77) = 0u;
          goto LABEL_11;
        }
        result = (int *)a5;
        if (g4_m128_lane<float>(v77, 0) <= *(float *)(a5 + 4) )
        {
LABEL_11:
          *(uint64_t *)&v78 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v112), v63), 0);
          STACK[0x1B0] = a24;
          *((uint64_t *)&v78 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v64, v77), 0);
          v79 = a25;
          a28 = v78;
          STACK[0x1C0] = (uint8_t)(uintptr_t)(v78);
          v80 = DWORD1(a28);
          STACK[0x1B4] = v79;
          STACK[0x1C4] = v80;
          STACK[0x1C8] = DWORD2(a28);
          STACK[0x1CC] = HIDWORD(a28);
          STACK[0x1E0] = (unsigned int)(uintptr_t)(a2);
          STACK[0x1E4] = a3;
          v81 = a26;
          STACK[0x1D0] = v112;
          STACK[0x1B8] = v81;
          STACK[0x1D4] =g4_m128_lane<int32_t>(v63, 0);
          v82 = *(uint32_t *)a5;
          STACK[0x1BC] = a27;
          STACK[0x1D8] =g4_m128_lane<int32_t>(v64, 0);
          STACK[0x1DC] =g4_m128_lane<int32_t>(v77, 0);
          return (int *)(*(int (**)(unsigned int, unsigned int *))(v82 + 8))(a5, (unsigned int *)(&STACK[0x1B0]));
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpIterativeLinearCastAgent::staticLinearCast  (binary VA: 0x16f8710)
// Original: hkpIterativeLinearCastAgent::staticLinearCast
// ----------------------------------------------------------------------------
int * hkpIterativeLinearCastAgent::staticLinearCast_b28(unsigned int a1, float *a2, float *a3, float *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, unsigned int a12, int a13, int a14, int a15, int a16, int a17, int *a18, unsigned int a19, unsigned int a20, unsigned int a21, unsigned int a22, unsigned int a23, g4_int128_t a24, float a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, float a37, float a38, float a39, float a40, unsigned int a41, unsigned int a42, unsigned int a43, unsigned int a44, g4_int128_t a45, int32_t a46, unsigned int a47, int32_t a48, int32_t a49, unsigned int a50, float *a51, int a52, int a53, int a54, int a55, int a56, int a57, unsigned int a58)
{
  uint8_t STACK[552] = {0};
  float v58; // xmm0_4
  int v59;
  int v60;
  int v61;
  float *v62;
  int *result;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  __m128 v67;
  __m128 v68;
  __m128 v69;
  g4_int128_t v70;
  int v71;
  float v72; // xmm6_4
  float v73; // xmm7_4
  float v74; // xmm1_4
  float v75; // xmm3_4
  int v76;
  unsigned int v77;
  unsigned int v78;
  __m128i m128_i128;
  int v80;
  float *v81;
  float v82; // xmm1_4
  int v83;
  int v84;
  float v85; // xmm5_4
  float v86; // xmm0_4
  unsigned int v87; // xmm5_4
  float v88; // xmm7_4
  float v89; // xmm2_4
  float v90; // xmm5_4
  __m128 v91;
  __m128 v92;
  float v93; // xmm4_4
  int v94;
  int v95; // xmm2_4
  float v96; // xmm2_4
  float v97; // xmm5_4
  float v98; // xmm1_4
  float v99; // xmm5_4
  float v100; // xmm7_4
  float v101; // xmm1_4
  __m128 v102;
  g4_int128_t v103;
  int v104;
  unsigned int retaddr;
  float *v109;
  unsigned int v110;
  int v111;
  unsigned int v112;
  float v113;
  float v114;
  unsigned int v115;
  typedef uint32_t _g4_t_v105[20];
  typedef float _g4_t_v106[41];
  typedef unsigned int *_g4_t_v107;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v105)) > _g4_s0 ? (0u + sizeof(_g4_t_v105)) : _g4_s0,
    _g4_s2 = (80u + sizeof(_g4_t_v106)) > _g4_s1 ? (80u + sizeof(_g4_t_v106)) : _g4_s1,
    _g4_s3 = (244u + sizeof(_g4_t_v107)) > _g4_s2 ? (244u + sizeof(_g4_t_v107)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 0u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 80u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 244u);

  v105[0] = ((uint32_t)(uintptr_t)&off_20998B0);
  v105[12] = 0;
  std::memcpy(v106, a3, 80);
  LODWORD(v106[2]) = 1;
  v58 = v106[3] + a3[25];
  v105[11] = 2139095022;
  v59 = *(uint32_t *)a3;
  v60 = *(uint32_t *)a1;
  v61 = *(uint32_t *)a2;
  v105[1] = 2139095022;
  v106[3] = v58;
  v62 = *(float **)(v59
                  + 20
                  * *(uint8_t *)(*(uint8_t *)(v61 + 8) + 35 * *(uint8_t *)(v60 + 8) + v59 + 416)
                  + 2876);
  ((void (*)(unsigned int, float *, float *, uint32_t *))v62)(a1, a2, v106, v105);
  result = (int *)STACK[0x130];
  if ( STACK[0x130] != 0 )
  {
    v64 = STACK[0x114];
    v112 = a58;
    a20 = a58;
    v65 = STACK[0x118];
    v110 = STACK[0x11C];
    a23 = STACK[0x11C];
    v66 = STACK[0x120];
    a21 = v64;
    LODWORD(a24) = v66;
    DWORD1(a24) = STACK[0x124];
    DWORD2(a24) = STACK[0x128];
    HIDWORD(a24) = STACK[0x12C];
g4_m128_raw(v67) = STACK[0x12C];
    a22 = v65;
g4_m128_raw(v68) = STACK[0x120];
    v115 = STACK[0x124];
g4_m128_raw(v69) = STACK[0x128];
    if ( a3[3] >g4_m128_lane<float>(v67, 0) && a5 != 0 )
    {
      *(uint64_t *)&v70 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v68, G4_BITCAST<__m128>(v115)), 0);
      *((uint64_t *)&v70 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v69, v67), 0);
      STACK[0x1A4] = v64;
      STACK[0x1A0] = v112;
      STACK[0x1AC] = v110;
      a24 = v70;
      STACK[0x1B0] = (uint8_t)(uintptr_t)(v70);
      STACK[0x1B4] = DWORD1(a24);
      STACK[0x1B8] = DWORD2(a24);
      STACK[0x1BC] = HIDWORD(a24);
      STACK[0x1D0] = a1;
      STACK[0x1D4] = (unsigned int)(uintptr_t)(a2);
      STACK[0x1C0] =g4_m128_lane<int32_t>(v68, 0);
      STACK[0x1A8] = v65;
      a4 = (float *)g4_m128_lane<int32_t>(v68, 0);
      STACK[0x1C8] =g4_m128_lane<int32_t>(v69, 0);
      v71 = *(uint32_t *)DWORD1(v70);
      STACK[0x1CC] =g4_m128_lane<int32_t>(v67, 0);
      v107 = (unsigned int *)(&STACK[0x1A0]);
      STACK[0x1C4] = v115;
      (*(void (**)(uint32_t, unsigned int *))(v71 + 8))(DWORD1(v70), v107);
g4_m128_raw(v67) =g4_m128_lane<uint32_t>(v67, 0);
g4_m128_raw(v69) =g4_m128_lane<uint32_t>(v69, 0);
g4_m128_raw(v68) =g4_m128_lane<uint32_t>(v68, 0);
    }
    result = (int *)a3;
    v113 = a3[20];
    v72 = a3[21];
    v73 = a3[22];
    v74 = (float)((float)(*(float *)&STACK[0x140] * v113) + (float)(*(float *)&STACK[0x144] * v72))
        + (float)(*(float *)&STACK[0x148] * v73);
    v75 = v74 +g4_m128_lane<float>(v67, 0);
    if ( (float)(v74 +g4_m128_lane<float>(v67, 0)) <= 0.0 && (float)(v74 + a3[24]) < 0.0 )
    {
      v76 = *((uint32_t *)a3 + 26);
      if ( *(float *)v76 <g4_m128_lane<float>(v67, 0) )
      {
        m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v67));
        *(float *)g4_m128_ptr<int32_t>(m128_i128) =g4_m128_lane<float>(v67, 0) - v75;
        STACK[0x1A4] = 2139095022;
        STACK[0x1D0] = 0;
        v80 = _mm_cvtsi128_si32(m128_i128);
        v111 = (2130706432 - v80) & ((v80 ^ (v80 + 2139095040)) >> 31);
        STACK[0x1A0] = (unsigned int)((uint32_t)(uintptr_t)&off_20998B0);
        v81 = *(float **)(a1 + 8);
        STACK[0x1CC] = a12;
        a25 = *v81;
        v82 = (float)((float)((float)(2.0
                                    - (float)(*(float *)g4_m128_ptr<int32_t>(m128_i128)
                                            * (float)(*(float *)&v111
                                                    * (float)(2.0
                                                            - (float)((float)(g4_m128_lane<float>(v67, 0) - v75) * *(float *)&v111)))))
                            * (float)(*(float *)&v111
                                    * (float)(2.0 - (float)((float)(g4_m128_lane<float>(v67, 0) - v75) * *(float *)&v111))))
                    * (float)(2.0
                            - (float)(*(float *)g4_m128_ptr<int32_t>(m128_i128)
                                    * (float)((float)(2.0
                                                    - (float)(*(float *)g4_m128_ptr<int32_t>(m128_i128)
                                                            * (float)(*(float *)&v111
                                                                    * (float)(2.0
                                                                            - (float)((float)(g4_m128_lane<float>(v67, 0) - v75)
                                                                                    * *(float *)&v111)))))
                                            * (float)(*(float *)&v111
                                                    * (float)(2.0
                                                            - (float)((float)(g4_m128_lane<float>(v67, 0) - v75) * *(float *)&v111)))))))
            *g4_m128_lane<float>(v67, 0);
        a26 = *((uint32_t *)v81 + 1);
        a27 = *((uint32_t *)v81 + 2);
        a28 = *((uint32_t *)v81 + 3);
        a29 = *((uint32_t *)v81 + 4);
        a30 = *((uint32_t *)v81 + 5);
        a31 = *((uint32_t *)v81 + 6);
        a32 = *((uint32_t *)v81 + 7);
        a33 = *((uint32_t *)v81 + 8);
        a34 = *((uint32_t *)v81 + 9);
        a35 = *((uint32_t *)v81 + 10);
        a36 = *((uint32_t *)v81 + 11);
        a37 = v81[12];
        a38 = v81[13];
        a39 = v81[14];
        a40 = v81[15];
        a19 = a1;
        a18 = (int *)&a25;
        a17 = -1;
        a16 = *(uint32_t *)a1;
        v83 = *(uint32_t *)(v76 + 4) - 1;
        if ( v83 < 0 )
        {
          v102 = v67;
LABEL_23:
          if ( STACK[0x154] != 0 )
          {
g4_m128_raw(v68) = STACK[0x1C0];
            v115 = STACK[0x1C4];
g4_m128_raw(v69) = STACK[0x1C8];
          }
          *(uint64_t *)&v103 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v68, G4_BITCAST<__m128>(v115)), 0);
          *((uint64_t *)&v103 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v69, v102), 0);
          a24 = v103;
          a45 = v103;
          a41 = a20;
          a50 = a1;
          a51 = a2;
          a46 =g4_m128_lane<int32_t>(v68, 0);
          a42 = a21;
          a47 = v115;
          v104 = *(uint32_t *)a4;
          a43 = a22;
          LODWORD(v106[40]) = (uint32_t)(uintptr_t)(a4);
          a48 =g4_m128_lane<int32_t>(v69, 0);
          a44 = a23;
          a49 =g4_m128_lane<int32_t>(v102, 0);
          return (int *)(*(int (**)(float *, unsigned int *))(v104 + 8))(a4, &a41);
        }
        else
        {
          v109 = v62;
          a4 = (float *)&STACK[0x1A0];
          a2 = v106;
          v84 = v83;
          v85 = v113;
          v86 = v82;
          while ( 1 )
          {
            v98 = v109[23];
            STACK[0x1D0] = 0;
            STACK[0x1A4] = 2139095022;
            STACK[0x1CC] = a12;
            v99 = (float)(v85 * v86) + v81[12];
            v100 = (float)(v73 * v86) + v81[14];
            v101 = (float)(v98 * v86) + v81[15];
            a38 = (float)(v72 * v86) + v81[13];
            a37 = v99;
            a39 = v100;
            a40 = v101;
            ((void (*)(int *, float *, float *, unsigned int *))v109)(&a16, v106, v106, (unsigned int *)(&STACK[0x1A0]));
            result = (int *)STACK[0x1D0];
            if ( STACK[0x1D0] == 0 )
              break;
            v87 = STACK[0x1E4];
g4_m128_raw(v91) = STACK[0x1E0];
            v88 = v109[20];
            v89 = *(float *)&STACK[0x1E4];
            retaddr =g4_m128_lane<int32_t>(v91, 0);
            a20 = STACK[0x1B0];
            v72 = v109[21];
            a21 = STACK[0x1B4];
            v115 = v87;
            a22 = STACK[0x1B8];
            v90 = *(float *)&STACK[0x1E8];
            result = (int *)STACK[0x1BC];
            v114 = v88;
            a23 = STACK[0x1BC];
g4_m128_lane<float>(v91, 0) = (float)(g4_m128_lane<float>(v91, 0) * v88) + (float)(v89 * v72);
            v73 = v109[22];
            a1 = LODWORD(v90);
g4_m128_lane<float>(v91, 0) =g4_m128_lane<float>(v91, 0) + (float)(v90 * v73);
            if (g4_m128_lane<float>(v91, 0) >= 0.0 )
              break;
            result = (int *)(&dword_1C7C1B0);
            v92 = _mm_xor_ps(v91, *(__m128 *)&dword_1C7C1B0);
            v93 = *(float *)&STACK[0x1CC];
            if ( (float)((float)(v86 *g4_m128_lane<float>(v92, 0)) + *(float *)&STACK[0x1CC]) >g4_m128_lane<float>(v92, 0) )
              break;
            if ( **((float **)v109 + 26) >= v93 )
              goto LABEL_22;
            v94 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v92)));
            v95 = (2130706432 - v94) & ((v94 ^ (v94 + 2139095040)) >> 31);
            v96 = (float)(2.0
                        - (float)(g4_m128_lane<float>(v92, 0)
                                * (float)((float)(2.0 - (float)(g4_m128_lane<float>(v92, 0) * *(float *)&v95)) * *(float *)&v95)))
                * (float)((float)(2.0 - (float)(g4_m128_lane<float>(v92, 0) * *(float *)&v95)) * *(float *)&v95);
            result = (int *)&STACK[0x1A0];
            v97 = 2.0 - (float)(g4_m128_lane<float>(v92, 0) * v96);
            if ( (float)((float)((float)(v97 * v96) * v93) + v86) > *(float *)&STACK[0x1A4] )
              return result;
            if ( --v84 == -1 )
            {
LABEL_22:
g4_m128_raw(v69) = a1;
g4_m128_raw(v102) = LODWORD(v86);
g4_m128_raw(v68) = retaddr;
              goto LABEL_23;
            }
            v86 = (float)((float)(v97 * v96) * v93) + v86;
            v85 = v114;
            v81 = *(float **)(a1 + 8);
          }
        }
      }
      else if (g4_m128_lane<float>(v67, 0) <= 0.0
             || (result = (int *)a4,g4_m128_lane<float>(v67, 0) <= (float)((float)(g4_m128_lane<float>(v67, 0) - v75) * a4[1])) )
      {
        STACK[0x1A0] = a20;
        *(uint64_t *)&a24 = __PAIR64__(v115,g4_m128_lane<uint32_t>(v68, 0));
        STACK[0x1A4] = a21;
        *((uint64_t *)&a24 + 1) =g4_m128_lane<uint32_t>(v69, 0);
        STACK[0x1A8] = a22;
        STACK[0x1C0] =g4_m128_lane<int32_t>(v68, 0);
        v77 = a23;
        STACK[0x1C4] = v115;
        STACK[0x1AC] = v77;
        STACK[0x1C8] =g4_m128_lane<int32_t>(v69, 0);
        v78 = (unsigned int)(uintptr_t)(a24);
        STACK[0x1CC] = 0;
        STACK[0x1B0] = v78;
        STACK[0x1B4] = DWORD1(a24);
        STACK[0x1B8] = DWORD2(a24);
        STACK[0x1BC] = HIDWORD(a24);
        STACK[0x1D0] = a1;
        STACK[0x1D4] = (unsigned int)(uintptr_t)(a2);
        return (int *)G4_VCALL<int>(a4, 8, &STACK[0x1A0]);
      }
    }
  }
  return result;
}


