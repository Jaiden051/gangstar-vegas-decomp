#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpConvexP.h"

// ----------------------------------------------------------------------------
// Function: hkpConvexPenetrationUtil::codeBegin  (binary VA: 0x1792a60)
// Original: hkpConvexPenetrationUtil::codeBegin
// ----------------------------------------------------------------------------
void hkpConvexPenetrationUtil::codeBegin()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexPenetrationUtil::getPointForSimplex  (binary VA: 0x1792a70)
// Original: hkpConvexPenetrationUtil::getPointForSimplex
// ----------------------------------------------------------------------------
int hkpConvexPenetrationUtil::getPointForSimplex(hkpConvexPenetrationUtil::Self *self, const hkVector4f::Self *a2, Vertex *a3)
{
  float v4; // xmm0_4
  float v5; // xmm4_4
  float v6; // xmm3_4
  int v7;
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm2_4
  int result;
  float v14; // xmm3_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24[7];

  (*(void (**)(uint32_t, const hkVector4f::Self *, uint16_t *))(**((uint32_t **)self + 21) + 40))(
    *((uint32_t *)self + 21),
    a2,
    (uint16_t *)(&a3[2].flags));
  v4 = -*(float *)a2;
  v5 = -*((float *)a2 + 1);
  v6 = -*((float *)a2 + 2);
  v7 = *((uint32_t *)self + 22);
  v8 = (float)(*(float *)self * v4) + (float)(*((float *)self + 1) * v5);
  v9 = (float)(*((float *)self + 4) * v4) + (float)(*((float *)self + 5) * v5);
  v10 = (float)(v4 * *((float *)self + 8)) + (float)(v5 * *((float *)self + 9));
  v11 = *((float *)self + 10) * v6;
  v12 = v8 + (float)(v6 * *((float *)self + 2));
  v24[1] = v9 + (float)(*((float *)self + 6) * v6);
  v24[2] = v10 + v11;
  v24[0] = v12;
  v24[3] = v10 + v11;
  result = G4_VCALL<int>(v7, 40, v24, &a3[5].y);
  v14 = *(float *)&a3[5].y;
  v15 = *(float *)&a3[6].x;
  v16 = *(float *)&a3[6].flags;
  v17 = (float)((float)(*((float *)self + 1) * v14) + (float)(*((float *)self + 5) * v15))
      + (float)(*((float *)self + 9) * v16);
  v18 = (float)((float)(*((float *)self + 2) * v14) + (float)(*((float *)self + 6) * v15))
      + (float)(*((float *)self + 10) * v16);
  v19 = (float)((float)((float)(*((float *)self + 3) * v14) + (float)(*((float *)self + 7) * v15))
              + (float)(*((float *)self + 11) * v16))
      + *((float *)self + 15);
  v20 = *(float *)&a3[2].flags
      - (float)((float)((float)((float)(v14 * *(float *)self) + (float)(v15 * *((float *)self + 4)))
                      + (float)(v16 * *((float *)self + 8)))
              + *((float *)self + 12));
  v21 = *(float *)&a3[3].y - (float)(v17 + *((float *)self + 13));
  v22 = *(float *)&a3[4].x - (float)(v18 + *((float *)self + 14));
  v23 = *(float *)&a3[4].flags - v19;
  *(float *)&a3->x = v20;
  *(float *)&a3->flags = v21;
  *(float *)&a3[1].y = v22;
  *(float *)&a3[2].x = v23;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexPenetrationUtil::findBestProjection  (binary VA: 0x1792c40)
// Original: hkpConvexPenetrationUtil::findBestProjection
// ----------------------------------------------------------------------------
float * hkpConvexPenetrationUtil::findBestProjection(hkpConvexPenetrationUtil::Self *a1, hkVector4f::Self *a2, float *a3, Vertex *a4, float *a5)
{
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  typedef __m128 _g4_t_v10;
  typedef Vertex _g4_t_v11[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  v10 = _mm_xor_ps(*(__m128 *)a2, G4_BITCAST<__m128>(xmmword_1C7C2A0));
  hkpConvexPenetrationUtil::getPointForSimplex(a1, a2, v11);
  hkpConvexPenetrationUtil::getPointForSimplex(a1, (const hkVector4f::Self *)&v10, a4);
  v5 = a3[1];
  v6 = a3[2];
  v7 = (float)((float)((float)(*(float *)&v11[0].x - *a3) * *(float *)a2)
             + (float)((float)(*(float *)&v11[0].flags - v5) * *((float *)a2 + 1)))
     + (float)((float)(*(float *)&v11[1].y - v6) * *((float *)a2 + 2));
  v8 = (float)((float)((float)(*(float *)&a4->x - *a3) *g4_m128_lane<float>(v10, 0))
             + (float)((float)(*(float *)&a4->flags - v5) *g4_m128_lane<float>(v10, 1)))
     + (float)((float)(*(float *)&a4[1].y - v6) *g4_m128_lane<float>(v10, 2));
  if ( v7 >= v8 )
  {
    *(uint32_t *)&a4->x = *(uint32_t *)&v11[0].x;
    *(uint32_t *)&a4->flags = *(uint32_t *)&v11[0].flags;
    *(uint32_t *)&a4[1].y = *(uint32_t *)&v11[1].y;
    *(uint32_t *)&a4[2].x = *(uint32_t *)&v11[2].x;
    *(uint32_t *)&a4[2].flags = *(uint32_t *)&v11[2].flags;
    *(uint32_t *)&a4[3].y = *(uint32_t *)&v11[3].y;
    *(uint32_t *)&a4[4].x = *(uint32_t *)&v11[4].x;
    *(uint32_t *)&a4[4].flags = *(uint32_t *)&v11[4].flags;
    *(uint32_t *)&a4[5].y = *(uint32_t *)&v11[5].y;
    *(uint32_t *)&a4[6].x = *(uint32_t *)&v11[6].x;
    *(uint32_t *)&a4[6].flags = *(uint32_t *)&v11[6].flags;
    *(uint32_t *)&a4[7].y = *(uint32_t *)&v11[7].y;
    *(uint32_t *)&a4[8].x = *(uint32_t *)&v11[8].x;
    *a5 = v7;
    return a5;
  }
  else
  {
    *a5 = v8;
    return a5;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConvexPenetrationUtil::tryToExpandPolytope  (binary VA: 0x1792da0)
// Original: hkpConvexPenetrationUtil::tryToExpandPolytope
// ----------------------------------------------------------------------------
uint32_t * hkpConvexPenetrationUtil::tryToExpandPolytope(uint32_t *a1, float *a2, uint32_t *a3, int a4, float *a5, uint32_t *a6)
{
  float *v6;
  float v7; // xmm3_4
  float v8; // xmm6_4
  uint8_t v9;
  bool v10;
  uint8_t v11; // di
  uint8_t v12;
  float v14; // xmm3_4
  float *v15;
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  int v19;
  int v20;
  int v21;
  int v22;
  uint32_t *i;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  int v28;
  int v29;
  int v30;
  float v31; // xmm5_4
  int v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm4_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm4_4
  int v40;
  int v41;
  int v42;
  float *v43;
  float v44; // xmm0_4
  float v45; // xmm6_4
  float v46; // xmm5_4
  __m128i v47;
  float v48; // xmm7_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  float v51; // xmm6_4
  __m128i v52;
  float v53; // xmm1_4
  float v54; // xmm0_4
  __m128i v55;
  int v56;
  uint32_t *v57;
  uint32_t *v58;
  int j;
  typedef int _g4_t_v60;
  typedef float *_g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef int _g4_t_v64;
  typedef float _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint32_t _g4_t_v71[103];
  enum : size_t {
    _g4_s0 = 544u,
    _g4_s1 = (4u + sizeof(_g4_t_v60)) > _g4_s0 ? (4u + sizeof(_g4_t_v60)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v61)) > _g4_s1 ? (8u + sizeof(_g4_t_v61)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v62)) > _g4_s2 ? (8u + sizeof(_g4_t_v62)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v63)) > _g4_s3 ? (12u + sizeof(_g4_t_v63)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v64)) > _g4_s4 ? (16u + sizeof(_g4_t_v64)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v65)) > _g4_s5 ? (16u + sizeof(_g4_t_v65)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v66)) > _g4_s6 ? (20u + sizeof(_g4_t_v66)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v67)) > _g4_s7 ? (24u + sizeof(_g4_t_v67)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v68)) > _g4_s8 ? (24u + sizeof(_g4_t_v68)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v69)) > _g4_s9 ? (32u + sizeof(_g4_t_v69)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v70)) > _g4_s10 ? (48u + sizeof(_g4_t_v70)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v71)) > _g4_s11 ? (64u + sizeof(_g4_t_v71)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 16u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 20u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 64u);

  v6 = *(float **)(a4 + 32);
  v7 = *(float *)(a4 + 4);
  v8 = (float)((float)((float)(*a5 - **(float **)(a4 + 48)) * *(float *)a4)
             + (float)((float)(a5[1] - *(float *)(*(uint32_t *)(a4 + 48) + 4)) * v7))
     + (float)((float)(a5[2] - *(float *)(*(uint32_t *)(a4 + 48) + 8)) * *(float *)(a4 + 8));
  v9 = (a2[16] > (float)((float)((float)((float)(*a5 - **(float **)(a4 + 16)) * *(float *)a4)
                               + (float)((float)(a5[1] - *(float *)(*(uint32_t *)(a4 + 16) + 4)) * v7))
                       + (float)((float)(a5[2] - *(float *)(*(uint32_t *)(a4 + 16) + 8)) * *(float *)(a4 + 8))))
     | (2
      * (a2[17] > (float)((float)((float)((float)(*a5 - *v6) * *(float *)a4) + (float)((float)(a5[1] - v6[1]) * v7))
                        + (float)((float)(a5[2] - v6[2]) * *(float *)(a4 + 8)))));
  v10 = a2[18] > v8;
  v11 = 4 * v10 + 8;
  v12 = 4 * v10;
  if ( a2[19] > v8 )
    v12 = v11;
  if ( ((v12 | v9) & 7) != 0 )
  {
    *a6 = 0;
    *a1 = 1;
    return a1;
  }
  v14 = 3.40282e38f;
  *a3 = 869711765;
  v69 = 0;
  a3[1] = 2139095022;
  v15 = *(float **)(a4 + 16);
  v16 = *a5;
  v70 = 0;
  v17 = (float)((float)((float)(v16 - *v15) * *(float *)a4) + (float)((float)(a5[1] - v15[1]) * *(float *)(a4 + 4)))
      + (float)((float)(a5[2] - v15[2]) * *(float *)(a4 + 8));
  if ( v17 > 0.0000001f )
  {
    if ( v17 >= 3.40282e38f )
    {
      v19 = 1;
      goto LABEL_14;
    }
    *((float *)a3 + 1) = v17;
    v14 = v17;
    v19 = 1;
    v18 = 0.0000001f;
  }
  else
  {
    v18 = v17 + 0.0000001f;
    if ( v18 <= 0.0000001f )
    {
      v19 = 2;
      goto LABEL_14;
    }
    v19 = 2;
    *(float *)a3 = v18;
  }
  if ( v18 >= v14 )
  {
    *(uint32_t *)(a4 + 68) = 4;
    goto LABEL_10;
  }
LABEL_14:
  *(uint32_t *)(a4 + 68) = v19;
  if ( v19 != 1 || hkcdWingedEdge::findVisibleTriangles(a3, a4, a5, &v69, &v70) != 0 )
    goto LABEL_10;
  v66 = v69;
  v67 = a3[4];
  if ( a3[3] - v67 + 100 >= v69 )
  {
    v20 = a3[3] - 1;
    v60 = v70;
    if ( v20 >= 0 && (v21 = v69, v69 != 0) )
    {
      v22 = 0;
      for ( i = a3; ; i = a3 )
      {
        ++v22;
        --v21;
        v71[v22 - 1] = i[v20 + 888];
        if ( v20 - 1 < 0 || v21 == 0 )
          break;
        --v20;
      }
      a3[3] = v20;
    }
    else
    {
      v21 = v69;
      v22 = 0;
    }
    if ( v21 <= 0 )
    {
      v28 = v67;
    }
    else
    {
      v24 = &a3[20 * v67 + 988];
      v25 = &v71[v22];
      v26 = &v71[v21 + v22];
      v27 = v25;
      do
      {
        *v27++ = (uint32_t)(uintptr_t)(v24);
        v24 += 20;
      }
      while ( v27 != v26 );
      a3[4] = v21 + v67;
      v28 = v21 + v67;
    }
    v29 = v60;
    if ( v66 > 0 )
    {
      if ( v60 != 0 )
      {
        v30 = v60;
        v68 = 0;
        while ( 1 )
        {
          v41 = v68++;
          v42 = v71[v41];
          v64 = v66 <= v68 ? v71[0] : v71[v68];
          *(uint32_t *)(v42 + 28) = v42;
          *(uint32_t *)(v42 + 44) = v42;
          *(uint32_t *)(v42 + 60) = v42;
          *(uint32_t *)(v42 + 20) = v42 + 32;
          *(uint32_t *)(v42 + 36) = v42 + 48;
          *(uint32_t *)(v42 + 52) = v42 + 16;
          v43 = *(float **)v30;
          v61 = **(float ***)(v30 + 4);
          *(uint32_t *)(v42 + 16) = (uint32_t)(uintptr_t)(v61);
          *(uint32_t *)(v42 + 32) = (uint32_t)(uintptr_t)(v43);
          *(uint32_t *)(v42 + 48) = (uint32_t)(uintptr_t)(a5);
          *(uint32_t *)(v30 + 8) = v42 + 16;
          *(uint32_t *)(v42 + 24) = v30;
          *(uint32_t *)(v64 + 40) = v42 + 48;
          *(uint32_t *)(v42 + 56) = v64 + 32;
          v44 = v43[1];
          v45 = v43[2];
          v65 = *v61;
          v46 = *v61 - *v43;
          v63 = v61[1];
g4_m128_raw(v47) = LODWORD(v63);
          v48 = v61[2];
          *(float *)g4_m128_ptr<int32_t>(v47) = v63 - v44;
          v49 = v48 - v45;
          v50 = v44 - a5[1];
          v51 = v45 - a5[2];
          v52 = v47;
          v62 = *v43 - *a5;
          *(float *)g4_m128_ptr<int32_t>(v52) = (float)(*(float *)g4_m128_ptr<int32_t>(v47) * v51) - (float)(v49 * v50);
          v53 = (float)(v49 * v62) - (float)(v51 * v46);
          v54 = (float)(v50 * v46) - (float)(v62 * *(float *)g4_m128_ptr<int32_t>(v47));
          v55 = v52;
          *(float *)g4_m128_ptr<int32_t>(v55) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v52) * *(float *)g4_m128_ptr<int32_t>(v52))
                                          + (float)(v53 * v53))
                                  + (float)(v54 * v54);
          if ( *(float *)g4_m128_ptr<int32_t>(v55) <= 0.0 )
            break;
          v31 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v55);
          v32 = ((_mm_cvtsi128_si32(v55) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v55) >> 1));
          v33 = (float)(1.5 * *(float *)&v32)
              - (float)((float)(v31 * *(float *)&v32) * (float)(*(float *)&v32 * *(float *)&v32));
          v34 = (float)(1.5 * v33) - (float)((float)(v31 * v33) * (float)(v33 * v33));
          v35 = (float)(1.5 * v34) - (float)((float)(v31 * v34) * (float)(v34 * v34));
          v36 = 0.0 * v35;
          v37 = *(float *)g4_m128_ptr<int32_t>(v52) * v35;
          v38 = v53 * v35;
          v39 = v35 * v54;
          *(float *)v42 = v37;
          *(float *)(v42 + 4) = v38;
          *(float *)(v42 + 8) = v39;
          *(float *)(v42 + 12) = v36;
          *(float *)(v42 + 64) = (float)((float)(v65 * v37) + (float)(v63 * v38)) + (float)(v48 * v39);
          v40 = **(uint32_t **)(v30 + 4);
          v30 = *(uint32_t *)(v40 + 48);
          *(uint32_t *)(v40 + 48) = 0;
          if ( v68 == v66 )
          {
            v29 = v30;
            v28 = a3[4];
            goto LABEL_40;
          }
          if ( v30 == 0 )
            goto LABEL_10;
        }
      }
      goto LABEL_10;
    }
LABEL_40:
    if ( v28 > 0 )
    {
      v56 = 0;
      v57 = a3 + 1005;
      do
      {
        ++v56;
        *v57 = 0;
        v57 += 20;
      }
      while ( v56 != v28 );
    }
    v58 = a3;
    for ( j = 0; j < a3[2]; v58 += 16 )
    {
      v58[20] = 0;
      ++j;
    }
    if ( v60 != v29 )
    {
LABEL_10:
      *a6 = 3;
      *a1 = 1;
      return a1;
    }
    *a1 = 0;
    return a1;
  }
  else
  {
    *a6 = 2;
    *a1 = 1;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConvexPenetrationUtil::convertResultToFeature  (binary VA: 0x17933b0)
// Original: hkpConvexPenetrationUtil::convertResultToFeature
// ----------------------------------------------------------------------------
float * hkpConvexPenetrationUtil::convertResultToFeature(int a1, hkcdWingedEdge::Self *a2, int a3, float *a4)
{
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  char v11;
  int TriangleNearestOrigin;
  bool v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  float v20; // xmm3_4
  float v21; // xmm5_4
  float v22; // xmm4_4
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  float *v26;
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm6_4
  float v32; // xmm4_4
  typedef hkVector4f::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v34)) > _g4_s0 ? (4u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v35)) > _g4_s1 ? (16u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v36)) > _g4_s2 ? (32u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v37)) > _g4_s3 ? (36u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v38)) > _g4_s4 ? (40u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v39)) > _g4_s5 ? (44u + sizeof(_g4_t_v39)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);

  v35 = 10;
  do
  {
    v5 = *(uint32_t **)(a3 + 16);
    v6 = *(uint32_t **)(a1 + 104);
    *v6 = *v5;
    v6[1] = v5[1];
    v6[2] = v5[2];
    v6[3] = v5[3];
    v7 = *(uint32_t **)(a3 + 32);
    v8 = *(uint32_t **)(a1 + 104);
    v8[4] = *v7;
    v8[5] = v7[1];
    v8[6] = v7[2];
    v8[7] = v7[3];
    v9 = *(uint32_t **)(a3 + 48);
    v10 = *(uint32_t **)(a1 + 104);
    v10[8] = *v9;
    v10[9] = v9[1];
    v10[10] = v9[2];
    v10[11] = v9[3];
    hkcdTriangleUtil::calcBarycentricCoordinates(
      (hkcdTriangleUtil::Self *)&unk_1D12E20,
      *(const hkVector4f::Self **)(a1 + 104),
      (const hkVector4f::Self *)(*(uint32_t *)(a1 + 104) + 16),
      (const hkVector4f::Self *)(*(uint32_t *)(a1 + 104) + 32),
      (const hkVector4f::Self *)&v36,
      v34);
    v11 = 4 * (v38 < 0.0);
    if ( v39 < 0.0 )
      v11 = 4 * (v38 < 0.0) + 8;
    if ( (v11 & 7 | (uint8_t)((v36 < 0.0) | (2 * (v37 < 0.0)))) == 0 )
      break;
    TriangleNearestOrigin = (int)(uintptr_t)(hkcdWingedEdge::findTriangleNearestOrigin(a2, (hkcdWingedEdge::Triangle::Self *)a3));
    v13 = v35-- == 1;
    a3 = TriangleNearestOrigin;
  }
  while ( !v13 );
  v14 = *(uint32_t **)(a3 + 16);
  v15 = *(uint32_t **)(a1 + 96);
  *v15 = v14[4];
  v15[1] = v14[5];
  v15[2] = v14[6];
  v15[3] = v14[7];
  v16 = *(uint32_t **)(a1 + 100);
  *v16 = v14[8];
  v16[1] = v14[9];
  v16[2] = v14[10];
  v16[3] = v14[11];
  v17 = *(uint32_t **)(a3 + 32);
  v18 = *(uint32_t **)(a1 + 96);
  v18[4] = v17[4];
  v18[5] = v17[5];
  v18[6] = v17[6];
  v18[7] = v17[7];
  v19 = *(uint32_t **)(a1 + 100);
  v19[4] = v17[8];
  v19[5] = v17[9];
  v20 = v36;
  v19[6] = v17[10];
  v21 = v37;
  v22 = v38;
  v19[7] = v17[11];
  v23 = *(uint32_t **)(a3 + 48);
  v24 = *(uint32_t **)(a1 + 96);
  v24[8] = v23[4];
  v24[9] = v23[5];
  v24[10] = v23[6];
  v24[11] = v23[7];
  v25 = *(uint32_t **)(a1 + 100);
  v25[8] = v23[8];
  v25[9] = v23[9];
  v25[10] = v23[10];
  v25[11] = v23[11];
  *(uint32_t *)(a1 + 108) = 3;
  v26 = *(float **)(a1 + 96);
  v27 = (float)((float)(v26[1] * v20) + (float)(v26[5] * v21)) + (float)(v26[9] * v22);
  v28 = (float)((float)(v26[2] * v20) + (float)(v26[6] * v21)) + (float)(v26[10] * v22);
  v29 = (float)(v26[3] * v20) + (float)(v26[7] * v21);
  v30 = (float)(v20 * *v26) + (float)(v21 * v26[4]);
  v31 = v26[11] * v22;
  v32 = v22 * v26[8];
  a4[4] = v30 + v32;
  a4[7] = v29 + v31;
  a4[5] = v27;
  a4[6] = v28;
  a4[8] = -*(float *)(a3 + 64);
  *a4 = -*(float *)a3;
  a4[1] = -*(float *)(a3 + 4);
  a4[2] = -*(float *)(a3 + 8);
  a4[3] = -*(float *)(a3 + 12);
  return a4;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexPenetrationUtil::builtTetrahedron  (binary VA: 0x1793690)
// Original: hkpConvexPenetrationUtil::builtTetrahedron
// ----------------------------------------------------------------------------
uint32_t * hkpConvexPenetrationUtil::builtTetrahedron(uint32_t *a1, hkpConvexPenetrationUtil::Self *a2, float *a3, uint32_t *a4)
{
  float v4; // xmm0_4
  int v6;
  float *v7;
  float v8; // xmm5_4
  float v9; // xmm6_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm2_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  __m128i v20;
  float v21; // xmm0_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm1_4
  float v25; // xmm4_4
  float v26; // xmm4_4
  float v27; // xmm0_4
  float v28; // xmm5_4
  float v29; // xmm6_4
  __m128i v30;
  float v31; // xmm1_4
  float v32; // xmm0_4
  __m128i v33;
  int v34;
  float v35; // xmm6_4
  __m128 v36;
  float v37; // xmm7_4
  __m128 v38;
  __m128 v39;
  float v40; // xmm1_4
  int v41;
  int v42;
  __m128 v43;
  uint32_t v44; // xmm1_4
  __m128i v45;
  float v46; // xmm4_4
  float v47; // xmm3_4
  __m128i v48;
  float v49; // xmm6_4
  int v50;
  int v51;
  float v52; // xmm2_4
  float v53; // xmm2_4
  float v54; // xmm5_4
  float v55; // xmm4_4
  float v56; // xmm3_4
  float v57; // xmm2_4
  int v58;
  __m128 v59;
  __m128i m128_i128;
  int v61;
  int v62; // xmm3_4
  float *v63;
  float v64; // xmm3_4
  float v65; // xmm0_4
  float v66; // xmm4_4
  float v67; // xmm3_4
  float v68; // xmm1_4
  float v69; // xmm2_4
  uint32_t *v70;
  uint32_t *v71;
  uint32_t *v72;
  __m128i v73;
  float v74; // xmm2_4
  int v75; // xmm2_4
  float v76; // xmm2_4
  float v77; // xmm0_4
  float v78; // xmm1_4
  float v79; // xmm0_4
  __m128 v80;
  float *v81;
  float v82; // xmm1_4
  __m128 *v83;
  uint32_t *v84;
  uint32_t *v85;
  float v86; // xmm6_4
  __m128 v87;
  __m128 v88;
  float v89; // xmm3_4
  int v90;
  __m128 v91;
  int32_t v92; // xmm7_4
  float v93; // xmm6_4
  float v94; // xmm7_4
  float v95; // xmm2_4
  float v96; // xmm1_4
  float v97; // xmm7_4
  __m128i v98;
  int v99; // xmm1_4
  float v100; // xmm0_4
  float v101; // xmm0_4
  float v102; // xmm2_4
  __m128i v103;
  float v104; // xmm2_4
  int v105;
  float v106; // xmm1_4
  float v107; // xmm0_4
  float v108; // xmm3_4
  float v109; // xmm0_4
  __m128 *v110;
  uint32_t *v111;
  uint32_t *v112;
  float v113; // xmm5_4
  int v114;
  float v115; // xmm4_4
  float v116; // xmm3_4
  float v117; // xmm6_4
  float v118; // xmm3_4
  float v119;
  float *v120;
  float v121; // xmm1_4
  float v122; // xmm0_4
  float v123; // xmm3_4
  float v124; // xmm6_4
  float v125; // xmm4_4
  uint32_t *v126;
  uint32_t *v127;
  uint32_t *v128;
  uint32_t *v129;
  uint32_t *v130;
  uint32_t *v131;
  uint32_t *v132;
  typedef hkVector4f::Self *_g4_t_v133;
  typedef float _g4_t_v134;
  typedef float _g4_t_v135;
  typedef float _g4_t_v136;
  typedef float *_g4_t_v137;
  typedef int _g4_t_v138;
  typedef float _g4_t_v139;
  typedef float _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef unsigned int _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151[4];
  typedef __m128 _g4_t_v152;
  typedef int _g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef Vertex _g4_t_v161[12];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v133)) > _g4_s0 ? (4u + sizeof(_g4_t_v133)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v134)) > _g4_s1 ? (12u + sizeof(_g4_t_v134)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v135)) > _g4_s2 ? (16u + sizeof(_g4_t_v135)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v136)) > _g4_s3 ? (16u + sizeof(_g4_t_v136)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v137)) > _g4_s4 ? (20u + sizeof(_g4_t_v137)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v138)) > _g4_s5 ? (20u + sizeof(_g4_t_v138)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v139)) > _g4_s6 ? (20u + sizeof(_g4_t_v139)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v140)) > _g4_s7 ? (28u + sizeof(_g4_t_v140)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v141)) > _g4_s8 ? (40u + sizeof(_g4_t_v141)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v142)) > _g4_s9 ? (44u + sizeof(_g4_t_v142)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v143)) > _g4_s10 ? (48u + sizeof(_g4_t_v143)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v144)) > _g4_s11 ? (52u + sizeof(_g4_t_v144)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v145)) > _g4_s12 ? (56u + sizeof(_g4_t_v145)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v146)) > _g4_s13 ? (60u + sizeof(_g4_t_v146)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v147)) > _g4_s14 ? (64u + sizeof(_g4_t_v147)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v148)) > _g4_s15 ? (68u + sizeof(_g4_t_v148)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v149)) > _g4_s16 ? (72u + sizeof(_g4_t_v149)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v150)) > _g4_s17 ? (76u + sizeof(_g4_t_v150)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v151)) > _g4_s18 ? (80u + sizeof(_g4_t_v151)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v152)) > _g4_s19 ? (96u + sizeof(_g4_t_v152)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v153)) > _g4_s20 ? (112u + sizeof(_g4_t_v153)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v154)) > _g4_s21 ? (116u + sizeof(_g4_t_v154)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v155)) > _g4_s22 ? (120u + sizeof(_g4_t_v155)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v156)) > _g4_s23 ? (124u + sizeof(_g4_t_v156)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v157)) > _g4_s24 ? (128u + sizeof(_g4_t_v157)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v158)) > _g4_s25 ? (132u + sizeof(_g4_t_v158)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v159)) > _g4_s26 ? (136u + sizeof(_g4_t_v159)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v160)) > _g4_s27 ? (140u + sizeof(_g4_t_v160)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v161)) > _g4_s28 ? (160u + sizeof(_g4_t_v161)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 4u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 12u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 16u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 16u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 20u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 20u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 20u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 28u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 40u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 44u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 48u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 52u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 56u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 60u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 64u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 68u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 72u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 76u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 80u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 96u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 112u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 116u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 120u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 124u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 128u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 132u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 136u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 140u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 160u);

  v4 = *((float *)a2 + 20);
  v140 = v4;
  switch ( *((uint32_t *)a2 + 27) )
  {
    case 0:
      goto LABEL_20;
    case 1:
      v7 = *((float **)a2 + 26);
      if ( v4 >= (float)((float)((float)(*v7 * *v7) + (float)(v7[1] * v7[1])) + (float)(v7[2] * v7[2])) )
        goto LABEL_19;
      goto LABEL_32;
    case 2:
      v7 = *((float **)a2 + 26);
      v6 = -1;
      goto LABEL_27;
    case 3:
      v7 = *((float **)a2 + 26);
      v6 = -1;
      goto LABEL_9;
    case 4:
      v6 = -1;
      break;
    default:
      goto LABEL_3;
  }
  while ( 1 )
  {
    v7 = *((float **)a2 + 26);
    v8 = v7[5];
    v9 = v7[6];
    v10 = v7[1] - v8;
    v11 = v7[4];
    v12 = v7[2] - v9;
    v13 = *v7;
    v146 = 0.0;
    v14 = v13 - v11;
    v15 = v8 - v7[9];
    v16 = v11 - v7[8];
    v17 = v9 - v7[10];
    v143 = (float)(v10 * v17) - (float)(v12 * v15);
    v145 = (float)(v14 * v15) - (float)(v10 * v16);
    v144 = (float)(v12 * v16) - (float)(v17 * v14);
    v18 = (float)((float)(v7[12] - *v7) * v143) + (float)((float)(v7[13] - v7[1]) * v144);
    v19 = (float)(v7[14] - v7[2]) * v145;
    if ( (float)((float)((float)((float)(v143 * v143) + (float)(v144 * v144)) + (float)(v145 * v145)) * v140) < (float)((float)(v18 + v19) * (float)(v18 + v19)) )
      break;
    if ( v6 == 3 )
    {
LABEL_3:
      *a4 = 3;
      *a1 = 1;
      return a1;
    }
    *((uint32_t *)a2 + 27) = 3;
LABEL_9:
    while ( 1 )
    {
g4_m128_raw(v20) = *((unsigned int *)v7 + 1);
      v21 = v7[5];
      v22 = v7[6];
      *(float *)g4_m128_ptr<int32_t>(v20) = *(float *)g4_m128_ptr<int32_t>(v20) - v21;
      v23 = v7[4];
      v24 = v7[2] - v22;
      v25 = *v7;
      v146 = 0.0;
      v26 = v25 - v23;
      v27 = v21 - v7[9];
      v28 = v23 - v7[8];
      v29 = v22 - v7[10];
      v30 = v20;
      *(float *)g4_m128_ptr<int32_t>(v30) = (float)(*(float *)g4_m128_ptr<int32_t>(v20) * v29) - (float)(v24 * v27);
      v31 = (float)(v24 * v28) - (float)(v29 * v26);
      v32 = (float)(v27 * v26) - (float)(*(float *)g4_m128_ptr<int32_t>(v20) * v28);
      v143 = *(float *)g4_m128_ptr<int32_t>(v30);
      v33 = v30;
      v144 = v31;
      v145 = v32;
      *(float *)g4_m128_ptr<int32_t>(v33) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v30) * *(float *)g4_m128_ptr<int32_t>(v30)) + (float)(v31 * v31))
                              + (float)(v32 * v32);
      if ( *(float *)g4_m128_ptr<int32_t>(v33) != 0.0 )
        break;
      if ( v6 > 1 )
      {
        a3[8] = 0.0;
        v34 = *((uint32_t *)a2 + 26);
g4_m128_raw(v36) = *(unsigned int *)(v34 + 8);
        v35 = *(float *)(v34 + 4) - *(float *)(v34 + 20);
g4_m128_lane<float>(v36, 0) =g4_m128_lane<float>(v36, 0) - *(float *)(v34 + 24);
        v37 = fabs(*(float *)v34 - *(float *)(v34 + 16));
g4_m128_lane<int32_t>(v38, 0) = fabs(v35);
        v39 = _mm_and_ps(v36, g4_m128_u32(0x7FFFFFFFu));
        if ( v37 >g4_m128_lane<float>(v38, 0) )
        {
          v40 = *(float *)(v34 + 4) - *(float *)(v34 + 20);
          v41 = 0;
          v35 = *(float *)v34 - *(float *)(v34 + 16);
          v42 = 1;
        }
        else
        {
          v40 = *(float *)v34 - *(float *)(v34 + 16);
g4_m128_lane<float>(v38, 0) = v37;
          v41 = 1;
          v42 = 0;
        }
        v43 = _mm_cmplt_ss(v39, v38);
        *a3 = 0.0;
        v44 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v43, v36), 0) | LODWORD(v40) &g4_m128_lane<int32_t>(v43, 0);
        a3[1] = 0.0;
        a3[2] = 0.0;
        if (g4_m128_lane<float>(v38, 0) <=g4_m128_lane<float>(v39, 0) )
          v42 = 2;
        a3[3] = 0.0;
        LODWORD(a3[v41]) = v44;
        a3[v42] = -v35;
g4_m128_raw(v45) = *(unsigned int *)a3;
        v46 = a3[1];
        v48 = v45;
        v47 = a3[2];
        *(float *)g4_m128_ptr<int32_t>(v48) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v45) * *(float *)g4_m128_ptr<int32_t>(v45)) + (float)(v46 * v46))
                                + (float)(v47 * v47);
        if ( *(float *)g4_m128_ptr<int32_t>(v48) <= 0.0 )
        {
          v53 = 0.0;
        }
        else
        {
          v49 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v48);
          v50 = _mm_cvtsi128_si32(v48) >> 1;
          v51 = (_mm_cvtsi128_si32(v48) + 2139095040) >> 31;
          v52 = (float)(1.5 * COERCE_FLOAT(v51 & (1597463174 - v50)))
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v48)) * COERCE_FLOAT(v51 & (1597463174 - v50)))
                      * (float)(COERCE_FLOAT(v51 & (1597463174 - v50)) * COERCE_FLOAT(v51 & (1597463174 - v50))));
          v53 = (float)(1.5 * (float)((float)(1.5 * v52) - (float)((float)(v49 * v52) * (float)(v52 * v52))))
              - (float)((float)(v49 * (float)((float)(1.5 * v52) - (float)((float)(v49 * v52) * (float)(v52 * v52))))
                      * (float)((float)((float)(1.5 * v52) - (float)((float)(v49 * v52) * (float)(v52 * v52)))
                              * (float)((float)(1.5 * v52) - (float)((float)(v49 * v52) * (float)(v52 * v52)))));
        }
        v54 = *(float *)g4_m128_ptr<int32_t>(v45) * v53;
        v55 = v46 * v53;
        v56 = v47 * v53;
        v57 = v53 * a3[3];
        *a3 = v54;
        a3[1] = v55;
        a3[2] = v56;
        a3[3] = v57;
        v58 = *((uint32_t *)a2 + 26);
        v59 = _mm_and_ps(g4_m128_u32(*(unsigned int *)(v58 + 8)), g4_m128_u32(0x7FFFFFFFu));
g4_m128_lane<float>(v59, 0) = (float)(fabs(*(float *)v58) + fabs(*(float *)(v58 + 4))) +g4_m128_lane<float>(v59, 0);
        m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v59));
        *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)(g4_m128_lane<float>(v59, 0) +g4_m128_lane<float>(v59, 0)) + 0.00000011920929f;
        v61 = _mm_cvtsi128_si32(m128_i128);
        v62 = (2130706432 - v61) & ((v61 ^ (v61 + 2139095040)) >> 31);
        v63 = *((float **)a2 + 24);
        v64 = (float)(2.0
                    - (float)(*(float *)g4_m128_ptr<int32_t>(m128_i128)
                            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(m128_i128) * *(float *)&v62))
                                    * *(float *)&v62)))
            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(m128_i128) * *(float *)&v62)) * *(float *)&v62);
        v65 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(m128_i128) * v64)) * v64) *g4_m128_lane<float>(v59, 0);
        v66 = (float)(v63[5] - v63[1]) * v65;
        v67 = (float)(v63[6] - v63[2]) * v65;
g4_m128_lane<float>(v59, 0) = (float)(v63[7] - v63[3]) * v65;
        a3[4] = (float)((float)(v63[4] - *v63) * v65) + *v63;
        a3[5] = v66 + v63[1];
        a3[6] = v67 + v63[2];
        a3[7] =g4_m128_lane<float>(v59, 0) + v63[3];
        *a4 = 0;
        *a1 = 1;
        return a1;
      }
      *((uint32_t *)a2 + 27) = 2;
LABEL_27:
      while ( 1 )
      {
        v78 = *v7 - v7[4];
        v79 = v7[1] - v7[5];
g4_m128_raw(v80) = *((unsigned int *)v7 + 2);
g4_m128_lane<float>(v80, 0) =g4_m128_lane<float>(v80, 0) - v7[6];
        if ( v140 < (float)((float)((float)(v78 * v78) + (float)(v79 * v79)) + (float)(g4_m128_lane<float>(v80, 0) *g4_m128_lane<float>(v80, 0))) )
          break;
        if ( v6 > 0 )
          goto LABEL_3;
        *((uint32_t *)a2 + 27) = 1;
        if ( v140 >= (float)((float)((float)(*v7 * *v7) + (float)(v7[1] * v7[1])) + (float)(v7[2] * v7[2])) )
        {
          v4 = *((float *)a2 + 20);
LABEL_19:
          *((uint32_t *)a2 + 27) = 0;
LABEL_20:
          v68 = *((float *)a2 + 12);
          v69 = *((float *)a2 + 13) * *((float *)a2 + 13);
          v152 = _mm_xor_ps(*((__m128 *)a2 + 3), G4_BITCAST<__m128>(xmmword_1C7C2A0));
          if ( v4 >= (float)((float)((float)(v68 * v68) + v69) + (float)(*((float *)a2 + 14) * *((float *)a2 + 14))) )
g4_m128_raw(v152) = 0x3F80000000000000uLL;
          hkpConvexPenetrationUtil::getPointForSimplex(a2, (const hkVector4f::Self *)&v152, v161);
          v70 = *((uint32_t **)a2 + 26);
          *v70 = *(uint32_t *)&v161[0].x;
          v70[1] = *(uint32_t *)&v161[0].flags;
          v70[2] = *(uint32_t *)&v161[1].y;
          v70[3] = *(uint32_t *)&v161[2].x;
          v71 = *((uint32_t **)a2 + 24);
          *v71 = *(uint32_t *)&v161[2].flags;
          v71[1] = *(uint32_t *)&v161[3].y;
          v71[2] = *(uint32_t *)&v161[4].x;
          v71[3] = *(uint32_t *)&v161[4].flags;
          v72 = *((uint32_t **)a2 + 25);
          *v72 = *(uint32_t *)&v161[5].y;
          v72[1] = *(uint32_t *)&v161[6].x;
          v72[2] = *(uint32_t *)&v161[6].flags;
          v72[3] = *(uint32_t *)&v161[7].y;
          *((uint32_t *)a2 + 27) = 1;
          v7 = *((float **)a2 + 26);
g4_m128_raw(v73) = *(unsigned int *)v7;
          *(float *)g4_m128_ptr<int32_t>(v73) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v73) * *(float *)g4_m128_ptr<int32_t>(v73))
                                          + (float)(v7[1] * v7[1]))
                                  + (float)(v7[2] * v7[2]);
          if ( v4 >= *(float *)g4_m128_ptr<int32_t>(v73) )
          {
            v74 = 0.0;
            if ( *(float *)g4_m128_ptr<int32_t>(v73) > 0.0 )
            {
              v75 = ((_mm_cvtsi128_si32(v73) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v73) >> 1));
              v76 = (float)(*(float *)&v75 * 1.5)
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v73)) * *(float *)&v75)
                          * (float)(*(float *)&v75 * *(float *)&v75));
              v77 = (float)(v76 * 1.5)
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v73)) * v76) * (float)(v76 * v76));
              v74 = (float)((float)(1.5 * v77)
                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v73)) * v77) * (float)(v77 * v77)))
                  * *(float *)g4_m128_ptr<int32_t>(v73);
            }
            a3[8] = v74;
            *(__m128 *)a3 = v152;
            a3[4] = *(float *)&v161[2].flags;
            a3[5] = *(float *)&v161[3].y;
            a3[6] = *(float *)&v161[4].x;
            a3[7] = *(float *)&v161[4].flags;
            *a4 = 0;
            *a1 = 1;
            return a1;
          }
          if ( v140 >= *(float *)g4_m128_ptr<int32_t>(v73) )
            goto LABEL_3;
        }
LABEL_32:
        v137 = v7;
        hkpConvexPenetrationUtil::getPointForSimplex(a2, (const hkVector4f::Self *)v7, (Vertex *)&v152);
        v81 = *((float **)a2 + 26);
        v82 = (float)((float)((float)(g4_m128_lane<float>(v152, 0) - *v81) * (float)(g4_m128_lane<float>(v152, 0) - *v81))
                    + (float)((float)(g4_m128_lane<float>(v152, 1) - v81[1]) * (float)(g4_m128_lane<float>(v152, 1) - v81[1])))
            + (float)((float)(g4_m128_lane<float>(v152, 2) - v81[2]) * (float)(g4_m128_lane<float>(v152, 2) - v81[2]));
        v151[0] = -*v137;
        v151[1] = -v137[1];
        v151[2] = -v137[2];
        v151[3] = -v137[3];
        hkpConvexPenetrationUtil::getPointForSimplex(a2, (const hkVector4f::Self *)v151, v161);
        v83 = *((__m128 **)a2 + 26);
        if ( v82 >= (float)((float)((float)((float)(*(float *)&v161[0].x -g4_m128_lane<float>(*(v83), 0))
                                          * (float)(*(float *)&v161[0].x -g4_m128_lane<float>(*(v83), 0)))
                                  + (float)((float)(*(float *)&v161[0].flags -g4_m128_lane<float>(*(v83), 1))
                                          * (float)(*(float *)&v161[0].flags -g4_m128_lane<float>(*(v83), 1))))
                          + (float)((float)(*(float *)&v161[1].y -g4_m128_lane<float>(*(v83), 2))
                                  * (float)(*(float *)&v161[1].y -g4_m128_lane<float>(*(v83), 2)))) )
        {
          v83[1] = v152;
          v126 = *((uint32_t **)a2 + 24);
          v126[4] = v153;
          v126[5] = v154;
          v126[6] = v155;
          v126[7] = v156;
          v127 = *((uint32_t **)a2 + 25);
          v127[4] = v157;
          v127[5] = v158;
          v127[6] = v159;
          v127[7] = v160;
        }
        else
        {
g4_m128_lane<int32_t>(v83[1], 0) = *(uint32_t *)&v161[0].x;
g4_m128_lane<int32_t>(v83[1], 1) = *(uint32_t *)&v161[0].flags;
g4_m128_lane<int32_t>(v83[1], 2) = *(uint32_t *)&v161[1].y;
g4_m128_lane<int32_t>(v83[1], 3) = *(uint32_t *)&v161[2].x;
          v84 = *((uint32_t **)a2 + 24);
          v84[4] = *(uint32_t *)&v161[2].flags;
          v84[5] = *(uint32_t *)&v161[3].y;
          v84[6] = *(uint32_t *)&v161[4].x;
          v84[7] = *(uint32_t *)&v161[4].flags;
          v85 = *((uint32_t **)a2 + 25);
          v85[4] = *(uint32_t *)&v161[5].y;
          v85[5] = *(uint32_t *)&v161[6].x;
          v85[6] = *(uint32_t *)&v161[6].flags;
          v85[7] = *(uint32_t *)&v161[7].y;
        }
        *((uint32_t *)a2 + 27) = 2;
        v7 = *((float **)a2 + 26);
        v6 = 1;
      }
      v86 = fabs(v78);
g4_m128_lane<int32_t>(v87, 0) = fabs(v79);
      v88 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v80);
      if ( v86 >g4_m128_lane<float>(v87, 0) )
      {
        v89 = v7[1] - v7[5];
        v138 = 0;
        v135 = *v7 - v7[4];
        v90 = 1;
      }
      else
      {
        v89 = *v7 - v7[4];
g4_m128_lane<float>(v87, 0) = v86;
        v135 = v7[1] - v7[5];
        v138 = 1;
        v90 = 0;
      }
      v91 = _mm_cmplt_ss(v88, v87);
      v92 = LODWORD(v89) &g4_m128_lane<int32_t>(v91, 0);
      v93 =g4_m128_lane<float>(_mm_andnot_ps(v91, v80), 0);
      if (g4_m128_lane<float>(v87, 0) <=g4_m128_lane<float>(v88, 0) )
        v90 = 2;
      *(float *)&v147 = 0.0;
      v148 = 0.0;
      v149 = 0.0;
      v150 = 0.0;
      *(&v147 + v138) = LODWORD(v93) | v92;
      *((float *)&v147 + v90) = -v135;
      v139 = (float)(v79 * v149) - (float)(g4_m128_lane<float>(v80, 0) * v148);
      v94 =g4_m128_lane<float>(v80, 0) * *(float *)&v147;
      v95 = v78 * v149;
      v96 = (float)(v78 * v148) - (float)(v79 * *(float *)&v147);
g4_m128_raw(v98) = v147;
      v97 = v94 - v95;
      v136 = v96;
      *(float *)g4_m128_ptr<int32_t>(v98) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v98) * *(float *)g4_m128_ptr<int32_t>(v98)) + (float)(v148 * v148))
                              + (float)(v149 * v149);
      if ( *(float *)g4_m128_ptr<int32_t>(v98) <= 0.0 )
      {
        v102 = 0.0;
      }
      else
      {
        v134 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v98);
        v99 = ((_mm_cvtsi128_si32(v98) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v98) >> 1));
        v100 = (float)(*(float *)&v99 * 1.5)
             - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v98)) * *(float *)&v99)
                     * (float)(*(float *)&v99 * *(float *)&v99));
        v101 = (float)(v100 * 1.5) - (float)((float)(v134 * v100) * (float)(v100 * v100));
        v102 = (float)(1.5 * v101) - (float)((float)(v134 * v101) * (float)(v101 * v101));
      }
      v149 = v149 * v102;
g4_m128_raw(v103) = LODWORD(v139);
      *(float *)&v147 = *(float *)&v147 * v102;
      v148 = v148 * v102;
      v150 = v102 * v150;
      *(float *)g4_m128_ptr<int32_t>(v103) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v103) * *(float *)g4_m128_ptr<int32_t>(v103))
                                       + (float)(v97 * v97))
                               + (float)(v136 * v136);
      if ( *(float *)g4_m128_ptr<int32_t>(v103) <= 0.0 )
      {
        v108 = 0.0;
        v109 = 0.0;
      }
      else
      {
        v104 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v103);
        v105 = ((_mm_cvtsi128_si32(v103) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v103) >> 1));
        v106 = (float)(*(float *)&v105 * 1.5)
             - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v103)) * *(float *)&v105)
                     * (float)(*(float *)&v105 * *(float *)&v105));
        v107 = (float)((float)((float)(*(float *)&v105 * 1.5)
                             - (float)((float)(v104 * *(float *)&v105) * (float)(*(float *)&v105 * *(float *)&v105)))
                     * 1.5)
             - (float)((float)(v104 * v106) * (float)(v106 * v106));
        v108 = (float)(1.5 * v107) - (float)((float)(v104 * v107) * (float)(v107 * v107));
        v109 = 0.0 * v108;
      }
      v151[3] = v109;
      v151[0] = v139 * v108;
      v151[1] = v97 * v108;
      v151[2] = v108 * v136;
      hkpConvexPenetrationUtil::findBestProjection(a2, (hkVector4f::Self *)&v147, v7, (Vertex *)&v152, (float *)&v141);
      hkpConvexPenetrationUtil::findBestProjection(a2, (hkVector4f::Self *)v151, *((float **)a2 + 26), v161, (float *)&v142);
      v110 = *((__m128 **)a2 + 26);
      if ( *(float *)&v141 > *(float *)&v142 )
      {
        v110[2] = v152;
        v131 = *((uint32_t **)a2 + 24);
        v131[8] = v153;
        v131[9] = v154;
        v131[10] = v155;
        v131[11] = v156;
        v132 = *((uint32_t **)a2 + 25);
        v132[8] = v157;
        v132[9] = v158;
        v132[10] = v159;
        v132[11] = v160;
      }
      else
      {
g4_m128_lane<int32_t>(v110[2], 0) = *(uint32_t *)&v161[0].x;
g4_m128_lane<int32_t>(v110[2], 1) = *(uint32_t *)&v161[0].flags;
g4_m128_lane<int32_t>(v110[2], 2) = *(uint32_t *)&v161[1].y;
g4_m128_lane<int32_t>(v110[2], 3) = *(uint32_t *)&v161[2].x;
        v111 = *((uint32_t **)a2 + 24);
        v111[8] = *(uint32_t *)&v161[2].flags;
        v111[9] = *(uint32_t *)&v161[3].y;
        v111[10] = *(uint32_t *)&v161[4].x;
        v111[11] = *(uint32_t *)&v161[4].flags;
        v112 = *((uint32_t **)a2 + 25);
        v112[8] = *(uint32_t *)&v161[5].y;
        v112[9] = *(uint32_t *)&v161[6].x;
        v112[10] = *(uint32_t *)&v161[6].flags;
        v112[11] = *(uint32_t *)&v161[7].y;
      }
      *((uint32_t *)a2 + 27) = 3;
      v7 = *((float **)a2 + 26);
      v6 = 2;
    }
    if ( *(float *)g4_m128_ptr<int32_t>(v33) <= 0.0 )
    {
      v118 = 0.0;
      v117 = 0.0;
    }
    else
    {
      v113 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v33);
      v114 = ((_mm_cvtsi128_si32(v33) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v33) >> 1));
      v115 = (float)(*(float *)&v114 * 1.5)
           - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v33)) * *(float *)&v114)
                   * (float)(*(float *)&v114 * *(float *)&v114));
      v116 = (float)((float)((float)(*(float *)&v114 * 1.5)
                           - (float)((float)(v113 * *(float *)&v114) * (float)(*(float *)&v114 * *(float *)&v114)))
                   * 1.5)
           - (float)((float)(v113 * v115) * (float)(v115 * v115));
      v117 = (float)(1.5 * v116) - (float)((float)(v113 * v116) * (float)(v116 * v116));
      v118 = 0.0 * v117;
    }
    v143 = *(float *)g4_m128_ptr<int32_t>(v30) * v117;
    v144 = v31 * v117;
    v145 = v117 * v32;
    v146 = v118;
    hkpConvexPenetrationUtil::findBestProjection(a2, (hkVector4f::Self *)&v143, v7, v161,g4_m128_ptr<float>(v152));
    if ( *((float *)a2 + 16) >g4_m128_lane<float>(v152, 0) )
    {
      v119 = v143;
      a3[8] = 0.0;
      *a3 = v119;
      a3[1] = v144;
      a3[2] = v145;
      a3[3] = v146;
      hkcdTriangleUtil::calcBarycentricCoordinates(
        (hkcdTriangleUtil::Self *)&unk_1D12E20,
        *((const hkVector4f::Self **)a2 + 26),
        (const hkVector4f::Self *)(*((uint32_t *)a2 + 26) + 16),
        (const hkVector4f::Self *)(*((uint32_t *)a2 + 26) + 32),
        (const hkVector4f::Self *)v161,
        v133);
      v120 = *((float **)a2 + 24);
      v121 = (float)((float)(v120[2] * *(float *)&v161[0].x) + (float)(v120[6] * *(float *)&v161[0].flags))
           + (float)(v120[10] * *(float *)&v161[1].y);
      v122 = (float)(v120[3] * *(float *)&v161[0].x) + (float)(v120[7] * *(float *)&v161[0].flags);
      v123 = (float)(*(float *)&v161[0].x * *v120) + (float)(*(float *)&v161[0].flags * v120[4]);
      v124 = v120[11] * *(float *)&v161[1].y;
      v125 = *(float *)&v161[1].y * v120[8];
      a3[5] = (float)((float)(v120[1] * *(float *)&v161[0].x) + (float)(v120[5] * *(float *)&v161[0].flags))
            + (float)(v120[9] * *(float *)&v161[1].y);
      a3[6] = v121;
      a3[7] = v122 + v124;
      a3[4] = v123 + v125;
      *a4 = 0;
      *a1 = 1;
      return a1;
    }
    v128 = *((uint32_t **)a2 + 26);
    v128[12] = *(uint32_t *)&v161[0].x;
    v128[13] = *(uint32_t *)&v161[0].flags;
    v128[14] = *(uint32_t *)&v161[1].y;
    v128[15] = *(uint32_t *)&v161[2].x;
    v129 = *((uint32_t **)a2 + 24);
    v129[12] = *(uint32_t *)&v161[2].flags;
    v129[13] = *(uint32_t *)&v161[3].y;
    v129[14] = *(uint32_t *)&v161[4].x;
    v129[15] = *(uint32_t *)&v161[4].flags;
    v130 = *((uint32_t **)a2 + 25);
    v130[12] = *(uint32_t *)&v161[5].y;
    v130[13] = *(uint32_t *)&v161[6].x;
    v130[14] = *(uint32_t *)&v161[6].flags;
    v130[15] = *(uint32_t *)&v161[7].y;
    *((uint32_t *)a2 + 27) = 4;
    v6 = 3;
  }
  *a4 = 0;
  *a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexPenetrationUtil::calculatePenetrationDepth  (binary VA: 0x1794810)
// Original: hkpConvexPenetrationUtil::calculatePenetrationDepth
// ----------------------------------------------------------------------------
int hkpConvexPenetrationUtil::calculatePenetrationDepth(int a1, float *a2)
{
  int i;
  int result;
  int v4;
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  float v14; // xmm0_4
  int v15;
  float *v16;
  const hkVector4f::Self *v17;
  float v18; // xmm1_4
  bool v19; // cc
  float v20; // xmm1_4
  typedef float *_g4_t_v21;
  typedef Vertex *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[4];
  typedef uint32_t _g4_t_v25[2];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t _g4_t_v29[12];
  typedef uint32_t _g4_t_v30[968];
  typedef uint8_t _g4_t_v31[64];
  typedef float _g4_t_v32;
  typedef int *_g4_t_v33;
  enum : size_t {
    _g4_s0 = 12096u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v22)) > _g4_s1 ? (16u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v23)) > _g4_s2 ? (24u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v24)) > _g4_s3 ? (28u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v25)) > _g4_s4 ? (44u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v26)) > _g4_s5 ? (52u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v27)) > _g4_s6 ? (56u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v28)) > _g4_s7 ? (60u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v29)) > _g4_s8 ? (76u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (124u + sizeof(_g4_t_v30)) > _g4_s9 ? (124u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (3996u + sizeof(_g4_t_v31)) > _g4_s10 ? (3996u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (4060u + sizeof(_g4_t_v32)) > _g4_s11 ? (4060u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (12004u + sizeof(_g4_t_v33)) > _g4_s12 ? (12004u + sizeof(_g4_t_v33)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 124u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 3996u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4060u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12004u);

  v33 = &a1;
  v21 = a2;
  for ( i = a1; ; *(float *)(i + 48) = v9 )
  {
    while ( 1 )
    {
      v24[0] = 0;
      hkpConvexPenetrationUtil::builtTetrahedron((uint32_t *)(&v23), (hkpConvexPenetrationUtil::Self *)i, v21, v24);
      if ( v23 == 1 )
        break;
      v10 = *(uint32_t **)(i + 96);
      v11 = *(uint32_t **)(i + 100);
      v26 = 4;
      v12 = *(uint32_t **)(i + 104);
      v29[4] = *v10;
      v29[5] = v10[1];
      v29[6] = v10[2];
      v29[7] = v10[3];
      v29[8] = *v11;
      v29[9] = v11[1];
      v29[10] = v11[2];
      v29[11] = v11[3];
      v29[0] = *v12;
      v29[1] = v12[1];
      v29[2] = v12[2];
      v29[3] = v12[3];
      v30[0] = 0;
      v30[8] = v10[4];
      v30[9] = v10[5];
      v30[10] = v10[6];
      v30[11] = v10[7];
      v30[12] = v11[4];
      v30[13] = v11[5];
      v30[14] = v11[6];
      v30[15] = v11[7];
      v30[4] = v12[4];
      v30[5] = v12[5];
      v30[6] = v12[6];
      v30[7] = v12[7];
      v30[16] = 0;
      v30[24] = v10[8];
      v30[25] = v10[9];
      v30[26] = v10[10];
      v30[27] = v10[11];
      v30[28] = v11[8];
      v30[29] = v11[9];
      v30[30] = v11[10];
      v30[31] = v11[11];
      v30[20] = v12[8];
      v30[21] = v12[9];
      v30[22] = v12[10];
      v30[23] = v12[11];
      v30[32] = 0;
      v30[40] = v10[12];
      v30[41] = v10[13];
      v30[42] = v10[14];
      v30[43] = v10[15];
      v30[44] = v11[12];
      v30[45] = v11[13];
      v30[46] = v11[14];
      v30[47] = v11[15];
      v30[36] = v12[12];
      v30[37] = v12[13];
      v30[38] = v12[14];
      v30[39] = v12[15];
      v30[48] = 0;
      hkcdWingedEdge::addTetrahedron((hkcdWingedEdge::Self *)v25);
      v27 = 0;
      v13 = v26;
      while ( 1 )
      {
        v14 = v32;
        v15 = v28 - 2;
        if ( v28 - 2 < 0 )
        {
          v17 = (const hkVector4f::Self *)v31;
        }
        else
        {
          v16 = (float *)v31;
          v17 = (const hkVector4f::Self *)v31;
          do
          {
            v18 = v16[36];
            v16 += 20;
            v19 = v14 <= v18;
            v20 = fminf(v18, v14);
            if ( !v19 )
              v17 = (const hkVector4f::Self *)v16;
            --v15;
            v14 = v20;
          }
          while ( v15 != -1 );
        }
        v26 = v13 + 1;
        v22 = (Vertex *)&v29[16 * v13];
        v30[16 * v13] = 0;
        hkpConvexPenetrationUtil::getPointForSimplex((hkpConvexPenetrationUtil::Self *)i, v17, v22);
        hkpConvexPenetrationUtil::tryToExpandPolytope((uint32_t *)(&v23), (float *)i, v25, (int)(uintptr_t)(v17), (float *)&v22->x, v24);
        if ( v23 == 1 )
          break;
        v13 = v26;
        if ( v26 > 54 )
        {
          v24[0] = 2;
LABEL_16:
          hkpConvexPenetrationUtil::convertResultToFeature(i, (hkcdWingedEdge::Self *)v25, (int)(uintptr_t)(v17), v21);
          return v24[0];
        }
      }
      if ( v24[0] != 3 )
        goto LABEL_16;
      v4 = *(uint32_t *)(i + 92) + 1;
      *(uint32_t *)(i + 92) = v4;
      if ( v4 != 1 )
        goto LABEL_5;
LABEL_21:
      *(uint32_t *)(i + 108) = 1;
    }
    result = v24[0];
    if ( v24[0] != 3 )
      return result;
    v4 = *(uint32_t *)(i + 92) + 1;
    *(uint32_t *)(i + 92) = v4;
    if ( v4 == 1 )
      goto LABEL_21;
LABEL_5:
    if ( v4 > 19 )
      break;
    *(uint32_t *)(i + 108) = 0;
    v5 = (float)((float)((float)((1103515245 * v4 + 12345) & 0x7FFFFFFF) * 4.656613e-10f) + -0.0001f) * 0.0002f;
    v6 = *(float *)(i + 52) + v5;
    v7 = *(float *)(i + 56) + v5;
    v8 = *(float *)(i + 60) + v5;
    v9 = v5 + *(float *)(i + 48);
    *(float *)(i + 52) = v6;
    *(float *)(i + 56) = v7;
    *(float *)(i + 60) = v8;
  }
  return 3;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexPenetrationUtil::codeEnd  (binary VA: 0x1794ca0)
// Original: hkpConvexPenetrationUtil::codeEnd
// ----------------------------------------------------------------------------
void hkpConvexPenetrationUtil::codeEnd()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexPieceStreamData::Destroy  (binary VA: 0x1795bd0)
// Original: hkpConvexPieceStreamData::~hkpConvexPieceStreamData
// ----------------------------------------------------------------------------
void hkpConvexPieceStreamData::Destroy(hkpConvexPieceStreamData::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0C18);
  v1 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 9) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      4 * v1);
  v2 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v2);
  v3 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v3);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexPieceStreamData::Destroy_ea1795cb0  (binary VA: 0x1795cb0)
// Original: hkpConvexPieceStreamData::~hkpConvexPieceStreamData
// ----------------------------------------------------------------------------
void hkpConvexPieceStreamData::Destroy_ea1795cb0(hkpConvexPieceStreamData::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0C18);
  v1 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 9) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      4 * v1);
  v2 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v2);
  v3 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v3);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v4 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v5 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v5 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v4, 12, self, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexPieceStreamData::staticClass  (binary VA: 0x1795dd0)
// Original: hkpConvexPieceStreamData::staticClass
// ----------------------------------------------------------------------------
void * hkpConvexPieceStreamData::staticClass()
{
  return &hkpConvexPieceStreamDataClass;
}


