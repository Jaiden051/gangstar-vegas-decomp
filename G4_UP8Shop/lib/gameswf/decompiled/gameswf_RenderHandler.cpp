#include "Core/Utils/DecompTypes.h"
#include "gameswf_RenderHandler.h"

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::setCamera  (binary VA: 0x10bef10)
// Original: gameswf::RenderHandler::setCamera
// ----------------------------------------------------------------------------
int * gameswf::RenderHandler::setCamera(int a1, float a2, int *a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  int v5;
  int v6;
  float v7; // xmm0_4
  int v8;
  int v9;
  int v10;
  uint16_t *v11;
  unsigned int v12;
  uint16_t *v13;
  int v14;
  int v15;
  uint32_t *v16;
  float v18; // xmm0_4
  float v19; // xmm1_4
  int v20;
  uint32_t *v21;

  v3 = tan(a2 * 0.008726646259971648);
  v4 = (float)*a3 / v3;
  v5 = *a3;
  v6 = a3[1];
  *(float *)(a1 + 12) = a2;
  *(uint32_t *)(a1 + 56) = v5;
  *(uint32_t *)(a1 + 60) = v6;
  v7 = cos(a2 * 0.008726646259971648);
  *(float *)(a1 + 16) = v7;
  *(float *)(a1 + 8) = v4;
  v21 = (uint32_t *)(a1 + 20);
  v8 = *(uint32_t *)(a1 + 24);
  v20 = v8;
  if ( v8 < 0 )
  {
    v9 = v8 << 6;
    do
    {
      v10 = *v21 + v9;
      if ( v10 != 0 )
      {
        v11 = (uint16_t *)(*v21 + v9);
        v12 = 64;
        if ( (v10 & 1) != 0 )
        {
          *(uint8_t *)v10 = 0;
          v11 = (uint16_t *)(v10 + 1);
          LOWORD(v12) = 63;
        }
        if ( ((uint8_t)(uintptr_t)v11 & 2) != 0 )
        {
          *v11 = 0;
          v12 -= 2;
          ++v11;
        }
        memset(v11, 0, 4 * (v12 >> 2));
        v13 = &v11[2 * (v12 >> 2)];
        if ( (v12 & 2) != 0 )
          *v13++ = 0;
        if ( (v12 & 1) != 0 )
          *(uint8_t *)v13 = 0;
        *(uint32_t *)(v10 + 60) = 1065353216;
        *(uint32_t *)(v10 + 40) = 1065353216;
        *(uint32_t *)(v10 + 20) = 1065353216;
        *(uint32_t *)v10 = 1065353216;
      }
      v9 += 64;
      ++v20;
    }
    while ( v20 != 0 );
  }
  v14 = *(uint32_t *)(a1 + 40);
  *(uint32_t *)(a1 + 24) = 0;
  if ( v14 < 0 )
  {
    v15 = 4 * v14;
    do
    {
      v16 = (uint32_t *)(*(uint32_t *)(a1 + 36) + v15);
      if ( v16 != nullptr )
        *v16 = 0;
      v15 += 4;
      ++v14;
    }
    while ( v14 != 0 );
  }
  *(uint32_t *)(a1 + 40) = 0;
  v18 = (float)a3[1];
  v19 = (float)*a3;
  *(uint32_t *)(a1 + 100) = 0;
  *(uint32_t *)(a1 + 108) = 0;
  *(float *)(a1 + 104) = v19;
  *(float *)(a1 + 112) = v18;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::transformPositions  (binary VA: 0x10c0340)
// Original: gameswf::RenderHandler::transformPositions
// ----------------------------------------------------------------------------
float * gameswf::RenderHandler::transformPositions(gameswf::RenderHandler::Self *self, gameswf::vector3df::Self *a2, int a3, int a4)
{
  float *result;
  int v6;
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm2_4

  result = (float *)(*((uint32_t *)self + 5) + ((*((uint32_t *)self + 6) - 1) << 6));
  if ( a4 > 0 )
  {
    v6 = 0;
    do
    {
      ++v6;
      v7 = *((float *)a2 + 1);
      v8 = (float)((float)(result[8] * *(float *)a2) + (float)(result[9] * v7)) + result[11];
      v9 = (float)((float)(*(float *)a2 * *result) + (float)(v7 * result[1])) + result[3];
      *((float *)a2 + 1) = (float)((float)(result[4] * *(float *)a2) + (float)(result[5] * v7)) + result[7];
      *((float *)a2 + 2) = v8;
      *(float *)a2 = v9;
      a2 = (gameswf::vector3df::Self *)((char *)a2 + a3);
    }
    while ( v6 != a4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::alignToPixel  (binary VA: 0x10c03e0)
// Original: gameswf::RenderHandler::alignToPixel
// ----------------------------------------------------------------------------
gameswf::Point::Self * gameswf::RenderHandler::alignToPixel(gameswf::RenderHandler::Self *self, gameswf::Point::Self **a2, bool a3)
{
  gameswf::Point::Self *result;
  __m128 v4;
  float v5; // xmm5_4
  __m128 v6;
  __m128 v7;
  __m128 v8;
  float v9; // xmm5_4
  float v10; // xmm6_4
  __m128 v11;
  __m128 v12;
  float v13; // xmm6_4
  float v14; // xmm5_4
  __m128 v15;
  __m128 v16;
  __m128 v17;
  float v18; // xmm5_4
  __m128 v19;
  float v20; // xmm4_4
  __m128 v21;
  __m128 v22;
  float v23; // xmm4_4
  float v24;
  float v25;

  result = (gameswf::Point::Self *)a2;
g4_m128_raw(v4) = *((unsigned int *)self + 18);
  v7 = v4;
  v5 = *(float *)*a2;
g4_m128_raw(v6) = 0x3F000000u;
  v24 = *((float *)self + 19);
g4_m128_lane<float>(v7, 0) = (float)(g4_m128_lane<float>(v4, 0) * v5) + 0.5;
g4_m128_raw(v8) = 0x7FFFFFFFu;
  if ( fabs(g4_m128_lane<float>(v7, 0)) < 8388608.0 )
  {
g4_m128_lane<float>(v8, 0) = (float)(int)g4_m128_lane<float>(v7, 0);
g4_m128_lane<float>(v8, 0) =g4_m128_lane<float>(v8, 0) - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v8, v7), 0) & 0x3F800000);
    v7 = v8;
  }
g4_m128_lane<float>(v7, 0) = (float)(g4_m128_lane<float>(v7, 0) * v24) - v5;
  v9 = *(float *)a2[3];
g4_m128_lane<float>(v4, 0) = (float)(g4_m128_lane<float>(v4, 0) * v9) + 0.5;
  if ( fabs(g4_m128_lane<float>(v4, 0)) < 8388608.0 )
  {
g4_m128_lane<float>(v8, 0) = (float)(int)g4_m128_lane<float>(v4, 0);
g4_m128_lane<float>(v4, 0) =g4_m128_lane<float>(v8, 0) - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v8, v4), 0) & 0x3F800000);
  }
  v10 = (float)(g4_m128_lane<float>(v4, 0) * v24) - v9;
g4_m128_lane<float>(v11, 0) = fabs(v10);
  v12 = _mm_cmpge_ss(_mm_and_ps(v7, g4_m128_u32(0x7FFFFFFFu)), v11);
  LODWORD(v13) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v12, v7), 0) | LODWORD(v10) &g4_m128_lane<int32_t>(v12, 0);
  *(float *)*a2 = *(float *)*a2 + v13;
  *(float *)a2[1] = *(float *)a2[1] + v13;
  *(float *)a2[2] = *(float *)a2[2] + v13;
  *(float *)a2[3] = v13 + *(float *)a2[3];
  if ( a3 )
  {
    v14 = *((float *)*a2 + 1);
g4_m128_raw(v15) = *((unsigned int *)self + 19);
    v25 = *((float *)self + 19);
g4_m128_lane<float>(v16, 0) = (float)(*((float *)self + 18) * v14) + 0.5;
    if ( fabs(g4_m128_lane<float>(v16, 0)) < 8388608.0 )
    {
g4_m128_lane<float>(v15, 0) = (float)(int)g4_m128_lane<float>(v16, 0);
g4_m128_lane<float>(v16, 0) =g4_m128_lane<float>(v15, 0) - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v15, v16), 0) & 0x3F800000);
    }
g4_m128_raw(v17) = LODWORD(v25);
g4_m128_lane<float>(v17, 0) = (float)(v25 *g4_m128_lane<float>(v16, 0)) - v14;
    v18 = *((float *)a2[3] + 1);
g4_m128_lane<float>(v19, 0) = (float)(*((float *)self + 18) * v18) + 0.5;
    if ( fabs(g4_m128_lane<float>(v19, 0)) < 8388608.0 )
    {
g4_m128_lane<float>(v6, 0) = (float)(int)g4_m128_lane<float>(v19, 0);
g4_m128_lane<float>(v19, 0) =g4_m128_lane<float>(v6, 0) - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v6, v19), 0) & 0x3F800000);
    }
    v20 = (float)(g4_m128_lane<float>(v19, 0) * v25) - v18;
g4_m128_lane<int32_t>(v21, 0) = fabs(v20);
    v22 = _mm_cmpge_ss(_mm_and_ps(v17, g4_m128_u32(0x7FFFFFFFu)), v21);
    LODWORD(v23) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v22, v17), 0) | LODWORD(v20) &g4_m128_lane<int32_t>(v22, 0);
    *((float *)*a2 + 1) = *((float *)*a2 + 1) + v23;
    *((float *)a2[1] + 1) = *((float *)a2[1] + 1) + v23;
    *((float *)a2[2] + 1) = *((float *)a2[2] + 1) + v23;
    result = a2[3];
    *((float *)result + 1) = v23 + *((float *)result + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::drawMaskedQuad  (binary VA: 0x10c0cd0)
// Original: gameswf::RenderHandler::drawMaskedQuad
// ----------------------------------------------------------------------------
int gameswf::RenderHandler::drawMaskedQuad(float *a1, int a2, float *a3)
{
  float v3; // xmm1_4
  float *v4;
  float v5; // xmm6_4
  float v6; // xmm5_4
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm7_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm7_4
  float v13; // xmm2_4
  float v14; // xmm7_4
  float v15; // xmm2_4
  float v16; // xmm7_4
  float v17; // xmm2_4
  float v18; // xmm7_4
  float v19; // xmm4_4
  float v20; // xmm4_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  float v23; // xmm4_4
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm2_4
  int v27;
  typedef float _g4_t_v29[6];
  typedef g4_int128_t _g4_t_v30;
  typedef g4_int128_t _g4_t_v31;
  typedef float _g4_t_v32[10];
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef uint8_t _g4_t_v41[4];
  typedef float *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int16_t _g4_t_v44;
  typedef int16_t _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v29)) > _g4_s0 ? (8u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v30)) > _g4_s1 ? (32u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v31)) > _g4_s2 ? (48u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v32)) > _g4_s3 ? (64u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (104u + sizeof(_g4_t_v33)) > _g4_s4 ? (104u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (108u + sizeof(_g4_t_v34)) > _g4_s5 ? (108u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v35)) > _g4_s6 ? (112u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (116u + sizeof(_g4_t_v36)) > _g4_s7 ? (116u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (120u + sizeof(_g4_t_v37)) > _g4_s8 ? (120u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (124u + sizeof(_g4_t_v38)) > _g4_s9 ? (124u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v39)) > _g4_s10 ? (128u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (132u + sizeof(_g4_t_v40)) > _g4_s11 ? (132u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (136u + sizeof(_g4_t_v41)) > _g4_s12 ? (136u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (140u + sizeof(_g4_t_v42)) > _g4_s13 ? (140u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (144u + sizeof(_g4_t_v43)) > _g4_s14 ? (144u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (148u + sizeof(_g4_t_v44)) > _g4_s15 ? (148u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (150u + sizeof(_g4_t_v45)) > _g4_s16 ? (150u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (152u + sizeof(_g4_t_v46)) > _g4_s17 ? (152u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (172u + sizeof(_g4_t_v47)) > _g4_s18 ? (172u + sizeof(_g4_t_v47)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 104u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 108u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 116u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 120u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 124u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 128u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 132u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 136u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 140u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 144u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 148u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 150u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 152u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 172u);

  v31 = 0;
  v30 = 0;
  v3 = *a3;
  v4 = *(float **)(a2 + 4);
  v5 = a3[1];
  v6 = a3[2];
  v7 = a3[3];
  v8 = a3[4];
  v9 = v4[1] * v8;
  v10 = a3[5];
  *(float *)&v30 = (float)((float)(v4[1] * v5) + (float)(*v4 * *a3)) + v6;
  v11 = (float)(*v4 * v7) + v9;
  v12 = v4[3] * v5;
  *((float *)&v30 + 1) = v11 + v10;
  v13 = (float)(v4[2] * v3) + v12;
  v14 = v4[3] * v8;
  *((float *)&v30 + 2) = v13 + v6;
  v15 = (float)(v4[2] * v7) + v14;
  v16 = v4[5] * v5;
  *((float *)&v30 + 3) = v15 + v10;
  v17 = (float)(v4[4] * v3) + v16;
  v18 = v4[5] * v8;
  *(float *)&v31 = v17 + v6;
  *((float *)&v31 + 1) = (float)((float)(v4[4] * v7) + v18) + v10;
  v19 = v8 * v4[7];
  *((float *)&v31 + 2) = (float)((float)(v3 * v4[6]) + (float)(v5 * v4[7])) + v6;
  *((float *)&v31 + 3) = (float)((float)(v7 * v4[6]) + v19) + v10;
  if ( gameswf::isQuadEdgeIntersectingBound((gameswf::Self *)&v30, (const gameswf::Point::Self *)(a1 + 25)) )
    return G4_VCALL<int>(a1, 88, a2);
  memset(v29, 0, sizeof(v29));
  v29[0] = 1.0;
  v29[4] = 1.0;
  gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v29, (const gameswf::Matrix::Self *)a3);
  v20 = a1[27];
  v21 = v29[1] * v20;
  v33 = a1[25];
  v22 = (float)(v29[0] * v33) + (float)(v29[1] * v20);
  v37 = v33;
  v34 = v20;
  v36 = v20;
  v23 = v20 * v29[4];
  v35 = a1[26];
  v39 = v35;
  v24 = a1[28];
  v32[0] = v22 + v29[2];
  v38 = v24;
  v40 = v24;
  v32[1] = (float)((float)(v33 * v29[3]) + v23) + v29[5];
  v32[2] = (float)(v21 + (float)(v29[0] * v35)) + v29[2];
  v32[3] = (float)(v23 + (float)(v35 * v29[3])) + v29[5];
  v25 = v29[1] * v24;
  v26 = v24 * v29[4];
  v32[4] = (float)((float)(v29[0] * v33) + v25) + v29[2];
  v32[5] = (float)((float)(v33 * v29[3]) + v26) + v29[5];
  v32[6] = (float)((float)(v29[0] * v35) + v25) + v29[2];
  v32[7] = (float)((float)(v35 * v29[3]) + v26) + v29[5];
  v41[1] = 0;
  v42 = v32;
  v27 = *(uint32_t *)a1;
  v43 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v41[0] = 1;
  v44 = 4;
  return (*(int (**)(float *, uint8_t *))(v27 + 88))(a1, v41);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::flushList  (binary VA: 0x10c1020)
// Original: gameswf::RenderHandler::flushList
// ----------------------------------------------------------------------------
unsigned int gameswf::RenderHandler::flushList(gameswf::RenderHandler::Self *self, gameswf::BatchList::Self *a2)
{
  int v2;
  gameswf::Self *v3;
  int v4;
  uint16_t *v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm0_4
  int v10;
  int v11;
  gameswf::Self *v12;
  int v13;
  int v14;
  uint16_t *v15;
  int16_t v16;
  gameswf::RenderHandler::Self *v17;
  int v18;
  float *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char v24;
  bool v25; // cc
  uint16_t *v26;
  uint16_t *v27;
  uint16_t *v28;
  int v29;
  int v30;
  int v31;
  uint16_t *v32;
  unsigned int v33;
  uint16_t *v34;
  uint16_t *v35;
  unsigned int v36;
  uint16_t *v37;
  uint16_t *v38;
  unsigned int v39;
  uint16_t *v40;
  int v41;
  int v42;
  void *v43;
  char *v44;
  uint16_t *v45;
  unsigned int result;
  int v47;
  char *v48;
  uint16_t *v49;
  int v50;
  int16_t v51;
  typedef float *_g4_t_v52;
  typedef float *_g4_t_v53;
  typedef gameswf::RenderHandler::Self *_g4_t_v54;
  typedef gameswf::RenderHandler::Self *_g4_t_v55;
  typedef gameswf::RenderHandler::Self *_g4_t_v56;
  typedef gameswf::RenderHandler::Self *_g4_t_v57;
  typedef float *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef uint8_t *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef uint64_t *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef gameswf::Self *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef uint8_t _g4_t_v87[168];
  typedef gameswf::Self *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef uint8_t _g4_t_v92[268];
  enum : size_t {
    _g4_s0 = 592u,
    _g4_s1 = (0u + sizeof(_g4_t_v52)) > _g4_s0 ? (0u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v53)) > _g4_s1 ? (0u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v54)) > _g4_s2 ? (0u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v55)) > _g4_s3 ? (0u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v56)) > _g4_s4 ? (0u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v57)) > _g4_s5 ? (0u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v58)) > _g4_s6 ? (0u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v59)) > _g4_s7 ? (4u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v60)) > _g4_s8 ? (4u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v61)) > _g4_s9 ? (4u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v62)) > _g4_s10 ? (4u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v63)) > _g4_s11 ? (4u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (4u + sizeof(_g4_t_v64)) > _g4_s12 ? (4u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v65)) > _g4_s13 ? (8u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v66)) > _g4_s14 ? (12u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v67)) > _g4_s15 ? (16u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v68)) > _g4_s16 ? (20u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v69)) > _g4_s17 ? (24u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v70)) > _g4_s18 ? (32u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v71)) > _g4_s19 ? (32u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v72)) > _g4_s20 ? (36u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v73)) > _g4_s21 ? (40u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v74)) > _g4_s22 ? (40u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_v75)) > _g4_s23 ? (44u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v76)) > _g4_s24 ? (44u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v77)) > _g4_s25 ? (48u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v78)) > _g4_s26 ? (48u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v79)) > _g4_s27 ? (48u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v80)) > _g4_s28 ? (52u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_v81)) > _g4_s29 ? (52u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (52u + sizeof(_g4_t_v82)) > _g4_s30 ? (52u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v83)) > _g4_s31 ? (56u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v84)) > _g4_s32 ? (56u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (56u + sizeof(_g4_t_v85)) > _g4_s33 ? (56u + sizeof(_g4_t_v85)) : _g4_s33,
    _g4_s35 = (56u + sizeof(_g4_t_v86)) > _g4_s34 ? (56u + sizeof(_g4_t_v86)) : _g4_s34,
    _g4_s36 = (72u + sizeof(_g4_t_v87)) > _g4_s35 ? (72u + sizeof(_g4_t_v87)) : _g4_s35,
    _g4_s37 = (240u + sizeof(_g4_t_v88)) > _g4_s36 ? (240u + sizeof(_g4_t_v88)) : _g4_s36,
    _g4_s38 = (244u + sizeof(_g4_t_v89)) > _g4_s37 ? (244u + sizeof(_g4_t_v89)) : _g4_s37,
    _g4_s39 = (248u + sizeof(_g4_t_v90)) > _g4_s38 ? (248u + sizeof(_g4_t_v90)) : _g4_s38,
    _g4_s40 = (252u + sizeof(_g4_t_v91)) > _g4_s39 ? (252u + sizeof(_g4_t_v91)) : _g4_s39,
    _g4_s41 = (256u + sizeof(_g4_t_v92)) > _g4_s40 ? (256u + sizeof(_g4_t_v92)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 0u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 0u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 0u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 4u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 4u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 8u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 20u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 24u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 40u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 44u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 44u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 48u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 48u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 48u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 52u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 52u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 52u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 56u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 56u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 56u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 56u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 72u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 240u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 244u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 248u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 252u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 256u);

  v69 = (uint8_t *)((char *)self + 116);
  std::memcpy(v87, (char *)self + 116, sizeof(v87));
  v2 = *((uint32_t *)a2 + 5);
  if ( v2 <= 0 )
    goto LABEL_65;
  v88 = nullptr;
  v89 = 0;
  v91 = 0;
  if ( (unsigned int)v2 <= 0x80 )
  {
    v3 = (gameswf::Self *)v92;
    v90 = 128;
    v88 = (gameswf::Self *)v92;
    v91 = 1;
  }
  else
  {
    v90 = v2 + (v2 >> 1);
    v3 = (gameswf::Self *)gameswf::malloc_internal(2 * v90);
    v88 = v3;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = (uint16_t *)((char *)v3 + v4);
    if ( v5 != nullptr )
      *v5 = 0;
    v4 += 2;
    if ( v4 == 2 * v2 )
      break;
    v3 = v88;
  }
  v89 = v2;
  v73 = *((uint32_t *)a2 + 5);
  v70 = v73 - 1;
  if ( v73 - 1 < 0 )
  {
    v71 = *((uint32_t *)self + 22);
  }
  else
  {
    v65 = 28 * (v73 - 1);
    v66 = *((uint32_t *)a2 + 5);
    v68 = 2 * v73;
    do
    {
      v6 = v70;
      v7 = *((uint32_t *)a2 + 4);
      v83 = *(uint32_t *)a2;
      v77 = v7 + v65;
      v72 = (uint64_t *)(*(uint32_t *)a2 + 216 * *(uint32_t *)(v7 + v65 + 16));
      v8 = v66;
      if ( v73 <= v66 )
      {
        v80 = v70;
        v12 = v88;
      }
      else
      {
        v9 = *(float *)(v7 + v65 + 4);
        v80 = v70;
        v67 = -1;
        v75 = v88;
        v10 = v68;
        while ( 1 )
        {
          v11 = v7 + 28 * *(uint16_t *)((char *)v75 + v10);
          if ( v9 >= *(float *)v11
            && *(float *)v77 <= *(float *)(v11 + 4)
            && *(float *)(v77 + 8) <= *(float *)(v11 + 12)
            && *(float *)(v11 + 8) <= *(float *)(v77 + 12) )
          {
            break;
          }
          v50 = v8 - 1;
          if ( *(uint8_t *)(v11 + 24) == 0 )
            v50 = v80;
          v80 = v50;
          if ( *(uint64_t *)(v83 + 216 * *(uint32_t *)(v11 + 16)) == *v72 )
          {
            v67 = v8;
            *(uint8_t *)(v77 + 24) = 0;
          }
          ++v8;
          v10 += 2;
          if ( v8 == v73 )
            break;
          v7 = *((uint32_t *)a2 + 4);
          v83 = *(uint32_t *)a2;
        }
        v12 = v75;
        v6 = v80;
        if ( v67 != -1 )
        {
          v80 = v67;
          v6 = v67;
        }
      }
      v13 = v70;
      v14 = v68 - 2;
      v68 -= 2;
      if ( v80 != v70 && v80 > v70 )
      {
        while ( 1 )
        {
          v15 = (uint16_t *)((char *)v12 + v14);
          ++v13;
          v14 += 2;
          *v15 = *(uint16_t *)((char *)v12 + v14);
          if ( v13 == v80 )
            break;
          v12 = v88;
        }
        v12 = v88;
      }
      v16 = v70;
      v65 -= 28;
      --v70;
      --v66;
      *((uint16_t *)v12 + v6) = v16;
    }
    while ( v70 != -1 );
    v2 = v89;
    v71 = *((uint32_t *)self + 22);
    if ( v89 <= 0 )
      goto LABEL_56;
  }
  v74 = 0;
  v17 = self;
  do
  {
    v81 = 28 * *((uint16_t *)v88 + v74) + *((uint32_t *)a2 + 4);
    if ( *(int *)(v81 + 20) <= 0 )
      goto LABEL_55;
    v84 = 0;
    do
    {
      v22 = *(uint32_t *)a2 + 216 * (*(uint32_t *)(v81 + 16) + v84);
      v78 = v22 + 8;
      v23 = v22 + 48;
      v61 = v22;
      v54 = v17;
      G4_VCALL<void>(v17, 60, *(uint32_t *)(v22 + 144));
      G4_VCALL<void>(v54, 64, v23);
      G4_VCALL<void>(v54, 68, v61 + 72);
      v21 = v61;
      v17 = v54;
      if ( *(uint8_t *)(v61 + 212) != 0 )
      {
        G4_VCALL<void>(v54, 96, v61 + 148, 0);
        v21 = v61;
        v17 = v54;
        v24 = *(uint8_t *)(v61 + 8);
        v25 = v24 <= 2;
        if ( v24 == 2 )
        {
LABEL_108:
          v57 = v17;
          v63 = v21;
          G4_VCALL<void>(v17, 80, *(uint32_t *)(v23 + 84));
          G4_VCALL<void>(v57, 84, *(uint32_t *)(v63 + 136));
          G4_VCALL<void>(v57, 88, v78);
          v17 = v57;
          v21 = v63;
          goto LABEL_37;
        }
      }
      else
      {
        *((uint8_t *)v54 + 52) = 1;
        v24 = *(uint8_t *)(v61 + 8);
        v25 = v24 <= 2;
        if ( v24 == 2 )
          goto LABEL_108;
      }
      if ( v25 )
      {
        if ( v24 >= 0 )
        {
          v18 = *(uint32_t *)(v21 + 104);
          v52 = (float *)v17;
          v59 = v21;
          if ( v18 != 0 )
          {
            G4_VCALL<void>(v17, 76, 0, v18, v21 + 108, *(uint32_t *)(v21 + 140));
            v19 = v52;
            v20 = v59;
          }
          else
          {
            G4_VCALL<void>(v17, 72, 0, v21 + 132);
            v20 = v59;
            v19 = v52;
          }
          if ( v71 <= 1
            || *(uint8_t *)(v20 + 212) != 0
            || *(Elf32_Sym **)(v20 + 20) != (Elf32_Sym *)(&stru_60004)
            || (float)((float)(*(float *)(v81 + 12) - *(float *)(v81 + 8)) * (float)(*(float *)(v81 + 4) - *(float *)v81)) < (float)((float)(v19[28] - v19[27]) * (float)(v19[26] - v19[25])) )
          {
            v53 = v19;
            v60 = v20;
            G4_VCALL<void>(v19, 88, v78);
            v17 = (gameswf::RenderHandler::Self *)v53;
            v21 = v60;
          }
          else
          {
            v58 = v19;
            v64 = v20;
            gameswf::RenderHandler::drawMaskedQuad(v19, v78, (float *)v23);
            v17 = (gameswf::RenderHandler::Self *)v58;
            v21 = v64;
          }
        }
LABEL_37:
        if ( *(uint8_t *)(v21 + 212) == 0 )
          goto LABEL_38;
        goto LABEL_53;
      }
      if ( v24 != 3 )
        goto LABEL_37;
      *((uint8_t *)v17 + 348) = 1;
      v26 = (uint16_t *)((char *)self + 116);
      v79 = 165;
      if ( ((uint8_t)(uintptr_t)v69 & 1) != 0 )
      {
        ++v23;
        *v69 = *(uint8_t *)(v21 + 48);
        v26 = (uint16_t *)((char *)v17 + 117);
        v79 = 164;
      }
      if ( ((uint8_t)(uintptr_t)v26 & 2) != 0 )
      {
        v51 = *(uint16_t *)v23;
        v23 += 2;
        *v26++ = v51;
        v79 -= 2;
      }
      std::memcpy(v26, (const void *)v23, 4 * (v79 >> 2));
      v28 = (uint16_t *)(v23 + 4 * (v79 >> 2));
      v27 = &v26[2 * (v79 >> 2)];
      v76 = 0;
      if ( (v79 & 2) != 0 )
      {
        *v27 = *v28;
        v76 = 1;
      }
      if ( (v79 & 1) != 0 )
        LOBYTE(v27[v76]) = v28[v76];
      v55 = v17;
      v62 = v21;
      (*(void (**)(uint32_t))(**(uint32_t **)(v21 + 44) + 284))(*(uint32_t *)(v21 + 44));
      v17 = v55;
      *((uint8_t *)v55 + 348) = 0;
      if ( *(uint8_t *)(v62 + 212) == 0 )
      {
LABEL_38:
        *((uint8_t *)v17 + 52) = 0;
        goto LABEL_39;
      }
LABEL_53:
      v56 = v17;
      G4_VCALL<void>(v17, 100);
      v17 = v56;
LABEL_39:
      ++v84;
    }
    while ( *(uint32_t *)(v81 + 20) > v84 );
    v2 = v89;
LABEL_55:
    ++v74;
  }
  while ( v74 < v2 );
LABEL_56:
  if ( v2 < 0 )
  {
    v29 = 2 * v2;
    do
    {
      if ( (gameswf::Self *)((char *)v88 + v29) != nullptr )
        *(uint16_t *)((char *)v88 + v29) = 0;
      v29 += 2;
      ++v2;
    }
    while ( v2 != 0 );
  }
  v89 = 0;
  if ( v91 == 0 )
  {
    v90 = 0;
    if ( v88 != nullptr )
      gameswf::free_internal(v88);
    v88 = nullptr;
  }
LABEL_65:
  v30 = *((uint32_t *)a2 + 1);
  v82 = v30;
  if ( v30 < 0 )
  {
    v85 = 216 * v30;
    do
    {
      v31 = *(uint32_t *)a2 + v85;
      if ( v31 != 0 )
      {
        memset((void *)v31, 0, 0xD8u);
        v32 = (uint16_t *)(v31 + 48);
        v33 = 24;
        if ( ((v31 + 48) & 1) != 0 )
        {
          *(uint8_t *)(v31 + 48) = 0;
          v32 = (uint16_t *)(v31 + 49);
          LOWORD(v33) = 23;
        }
        if ( ((uint8_t)(uintptr_t)v32 & 2) != 0 )
        {
          *v32 = 0;
          v33 -= 2;
          ++v32;
        }
        memset(v32, 0, 4 * (v33 >> 2));
        v34 = &v32[2 * (v33 >> 2)];
        if ( (v33 & 2) != 0 )
          *v34++ = 0;
        if ( (v33 & 1) != 0 )
          *(uint8_t *)v34 = 0;
        v35 = (uint16_t *)(v31 + 108);
        *(uint32_t *)(v31 + 48) = 1065353216;
        *(uint32_t *)(v31 + 64) = 1065353216;
        *(uint32_t *)(v31 + 72) = 1065353216;
        *(uint32_t *)(v31 + 80) = 1065353216;
        *(uint32_t *)(v31 + 88) = 1065353216;
        *(uint32_t *)(v31 + 96) = 1065353216;
        *(uint32_t *)(v31 + 76) = 0;
        *(uint32_t *)(v31 + 84) = 0;
        *(uint32_t *)(v31 + 92) = 0;
        *(uint32_t *)(v31 + 100) = 0;
        *(uint32_t *)(v31 + 104) = 0;
        v36 = 24;
        if ( ((v31 + 108) & 1) != 0 )
        {
          *(uint8_t *)(v31 + 108) = 0;
          v35 = (uint16_t *)(v31 + 109);
          LOWORD(v36) = 23;
        }
        if ( ((uint8_t)(uintptr_t)v35 & 2) != 0 )
        {
          *v35 = 0;
          v36 -= 2;
          ++v35;
        }
        memset(v35, 0, 4 * (v36 >> 2));
        v37 = &v35[2 * (v36 >> 2)];
        if ( (v36 & 2) != 0 )
          *v37++ = 0;
        if ( (v36 & 1) != 0 )
          *(uint8_t *)v37 = 0;
        v38 = (uint16_t *)(v31 + 148);
        *(uint32_t *)(v31 + 108) = 1065353216;
        *(uint32_t *)(v31 + 124) = 1065353216;
        *(uint8_t *)(v31 + 132) = -1;
        *(uint8_t *)(v31 + 133) = -1;
        *(uint8_t *)(v31 + 134) = -1;
        *(uint8_t *)(v31 + 135) = -1;
        *(uint32_t *)(v31 + 136) = 1065353216;
        *(uint32_t *)(v31 + 140) = 0;
        *(uint32_t *)(v31 + 144) = 0;
        v39 = 64;
        if ( ((v31 + 148) & 1) != 0 )
        {
          *(uint8_t *)(v31 + 148) = 0;
          v38 = (uint16_t *)(v31 + 149);
          LOWORD(v39) = 63;
        }
        if ( ((uint8_t)(uintptr_t)v38 & 2) != 0 )
        {
          *v38 = 0;
          v39 -= 2;
          ++v38;
        }
        memset(v38, 0, 4 * (v39 >> 2));
        v40 = &v38[2 * (v39 >> 2)];
        if ( (v39 & 2) != 0 )
          *v40++ = 0;
        if ( (v39 & 1) != 0 )
          *(uint8_t *)v40 = 0;
        *(uint32_t *)(v31 + 208) = 1065353216;
        *(uint32_t *)(v31 + 188) = 1065353216;
        *(uint32_t *)(v31 + 168) = 1065353216;
        *(uint32_t *)(v31 + 148) = 1065353216;
        *(uint8_t *)(v31 + 212) = 0;
      }
      v85 += 216;
      ++v82;
    }
    while ( v82 != 0 );
  }
  *((uint32_t *)a2 + 1) = 0;
  v41 = *((uint32_t *)a2 + 5);
  v86 = v41;
  if ( v41 < 0 )
  {
    v42 = 28 * v41;
    do
    {
      v43 = (void *)(*((uint32_t *)a2 + 4) + v42);
      if ( v43 != nullptr )
        memset(v43, 0, 0x1Cu);
      v42 += 28;
      ++v86;
    }
    while ( v86 != 0 );
  }
  v44 = (char *)self + 116;
  v45 = (uint16_t *)(v87);
  result = 165;
  *((uint32_t *)a2 + 5) = 0;
  if ( ((uint8_t)(uintptr_t)v69 & 1) != 0 )
  {
    v45 = (uint16_t *)(&v87[1]);
    v44 = (char *)self + 117;
    *((uint8_t *)self + 116) = v87[0];
    result = 164;
    if ( (((unsigned int)(uintptr_t)(self) + 117) & 2) != 0 )
      goto LABEL_120;
  }
  else
  {
    if ( ((uint8_t)(uintptr_t)v69 & 2) == 0 )
      goto LABEL_101;
LABEL_120:
    result -= 2;
    *(uint16_t *)v44 = *v45++;
    v44 += 2;
  }
LABEL_101:
  v47 = 0;
  std::memcpy(v44, v45, 4 * (result >> 2));
  v49 = &v45[2 * (result >> 2)];
  v48 = &v44[4 * (result >> 2)];
  if ( (result & 2) != 0 )
  {
    *(uint16_t *)v48 = *v49;
    v47 = 1;
  }
  if ( (result & 1) != 0 )
  {
    result = LOBYTE(v49[v47]);
    v48[v47 * 2] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::flush  (binary VA: 0x10c1a50)
// Original: gameswf::RenderHandler::flush
// ----------------------------------------------------------------------------
int gameswf::RenderHandler::flush(gameswf::RenderHandler::Self *self)
{
  gameswf::RenderHandler::flushList(self, (gameswf::RenderHandler::Self *)((char *)self + 284));
  gameswf::RenderHandler::flushList(self, (gameswf::RenderHandler::Self *)((char *)self + 316));
  return G4_VCALL<int>(self, 132);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::draw  (binary VA: 0x10c1ab0)
// Original: gameswf::RenderHandler::draw
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::RenderHandler::draw(gameswf::Root::Self **a1, gameswf::Self *a2)
{
  gameswf::Self *result;
  char *v3;
  int v4;
  gameswf::Self *v5;
  int v6;
  bool v7;
  char *v8;
  unsigned int v9;
  uint16_t *v10;
  uint16_t *v11;
  uint16_t *v12;
  unsigned int v13;
  uint16_t *v14;
  uint16_t *v15;
  unsigned int v16;
  uint16_t *v17;
  uint16_t *v18;
  uint32_t *v19;
  uint16_t *v20;
  unsigned int v21;
  int v22;
  uint16_t *v23;
  uint16_t *v24;
  int v25;
  char v26;
  int v27;
  int v28;
  int v29;
  int *v30;
  int v31;
  gameswf::Self *v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  unsigned int v38;
  uint16_t *v39;
  uint16_t *v40;
  uint16_t *v41;
  unsigned int v42;
  uint16_t *v43;
  uint16_t *v44;
  unsigned int v45;
  uint16_t *v46;
  gameswf::Self *v47;
  uint16_t *v48;
  uint16_t *v49;
  unsigned int v50;
  int v51;
  uint16_t *v52;
  uint16_t *v53;
  int v54;
  int v55;
  gameswf::Self *v56;
  int v57;
  char *v58;
  uint16_t *v59;
  unsigned int v60;
  uint16_t *v61;
  uint16_t *v62;
  unsigned int v63;
  uint16_t *v64;
  uint16_t *v65;
  unsigned int v66;
  uint16_t *v67;
  float v68; // xmm2_4
  float v69; // xmm0_4
  float v70; // xmm1_4
  gameswf::Root::Self *v71;
  float v72; // xmm2_4
  float v73; // xmm0_4
  float v74; // xmm1_4
  float v75; // xmm2_4
  float v76; // xmm0_4
  float v77; // xmm1_4
  gameswf::Root::Self *v78;
  uint64_t v79; // rax
  int v80;
  int v81;
  float v82; // xmm1_4
  float v83; // xmm5_4
  float v84; // xmm4_4
  float v85; // xmm3_4
  float v86; // xmm1_4
  float v87; // xmm5_4
  float v88; // xmm0_4
  float v89; // xmm2_4
  unsigned int v90;
  uint16_t *v91;
  uint16_t *v92;
  int v93;
  typedef gameswf::Root::Self *_g4_t_v94;
  typedef char _g4_t_v95;
  typedef char *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef char *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef int *_g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef gameswf::Self *_g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef gameswf::Self *_g4_t_v115;
  typedef gameswf::Self *_g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef gameswf::Self *_g4_t_v119;
  typedef gameswf::Self *_g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef uint32_t _g4_t_v125[6];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v94)) > _g4_s0 ? (8u + sizeof(_g4_t_v94)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v95)) > _g4_s1 ? (31u + sizeof(_g4_t_v95)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v96)) > _g4_s2 ? (32u + sizeof(_g4_t_v96)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v97)) > _g4_s3 ? (40u + sizeof(_g4_t_v97)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v98)) > _g4_s4 ? (44u + sizeof(_g4_t_v98)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v99)) > _g4_s5 ? (48u + sizeof(_g4_t_v99)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v100)) > _g4_s6 ? (48u + sizeof(_g4_t_v100)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v101)) > _g4_s7 ? (48u + sizeof(_g4_t_v101)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v102)) > _g4_s8 ? (52u + sizeof(_g4_t_v102)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v103)) > _g4_s9 ? (52u + sizeof(_g4_t_v103)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v104)) > _g4_s10 ? (52u + sizeof(_g4_t_v104)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v105)) > _g4_s11 ? (52u + sizeof(_g4_t_v105)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v106)) > _g4_s12 ? (64u + sizeof(_g4_t_v106)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v107)) > _g4_s13 ? (68u + sizeof(_g4_t_v107)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v108)) > _g4_s14 ? (72u + sizeof(_g4_t_v108)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v109)) > _g4_s15 ? (76u + sizeof(_g4_t_v109)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v110)) > _g4_s16 ? (80u + sizeof(_g4_t_v110)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v111)) > _g4_s17 ? (84u + sizeof(_g4_t_v111)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v112)) > _g4_s18 ? (88u + sizeof(_g4_t_v112)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v113)) > _g4_s19 ? (92u + sizeof(_g4_t_v113)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v114)) > _g4_s20 ? (96u + sizeof(_g4_t_v114)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v115)) > _g4_s21 ? (100u + sizeof(_g4_t_v115)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v116)) > _g4_s22 ? (104u + sizeof(_g4_t_v116)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v117)) > _g4_s23 ? (108u + sizeof(_g4_t_v117)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v118)) > _g4_s24 ? (112u + sizeof(_g4_t_v118)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v119)) > _g4_s25 ? (116u + sizeof(_g4_t_v119)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v120)) > _g4_s26 ? (120u + sizeof(_g4_t_v120)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v121)) > _g4_s27 ? (124u + sizeof(_g4_t_v121)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v122)) > _g4_s28 ? (128u + sizeof(_g4_t_v122)) : _g4_s28,
    _g4_s30 = (132u + sizeof(_g4_t_v123)) > _g4_s29 ? (132u + sizeof(_g4_t_v123)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v124)) > _g4_s30 ? (136u + sizeof(_g4_t_v124)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v125)) > _g4_s31 ? (140u + sizeof(_g4_t_v125)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 8u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 31u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 32u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 40u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 44u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 48u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 48u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 48u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 52u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 52u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 52u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 52u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 64u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 68u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 72u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 76u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 80u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 84u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 88u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 92u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 96u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 100u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 104u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 108u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 112u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 116u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 120u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 124u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 128u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 132u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 136u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 140u);

  if ( *((uint8_t *)a1 + 52) == 0 && a1[6] != nullptr )
  {
    v112 = *((gameswf::Self **)a2 + 5);
    v113 = *((uint32_t *)a2 + 6);
    v114 = *((uint32_t *)a2 + 7);
    v115 = *((gameswf::Self **)a2 + 8);
    v96 = (char *)(a1 + 29);
    gameswf::Matrix::transform((gameswf::Matrix::Self *)(a1 + 29), (gameswf::Rect::Self *)&v112);
    v116 = v112;
    v117 = v114;
    v119 = v112;
    v123 = v114;
    v120 = v115;
    v122 = v113;
    v125[0] = v113;
    v125[1] = (uint32_t)(uintptr_t)(v115);
    v108 = 3.4028235e38f;
    v109 = -3.4028235e38f;
    v110 = 3.4028235e38f;
    v111 = -3.4028235e38f;
    v118 = 0;
    v121 = 0;
    v124 = 0;
    v125[2] = 0;
    gameswf::RenderHandler::transformPositions((gameswf::RenderHandler::Self *)a1, (gameswf::vector3df::Self *)&v116, 12, 4);
    v106 = 0.0;
    v107 = 0.0;
    gameswf::Root::projectPosition(a1[88], (const gameswf::vector3df::Self *)&v116, (gameswf::Point::Self *)&v106);
    v68 = fminf(v108, v106);
    v69 = v107;
    v70 = fmaxf(v106, v109);
    v71 = a1[88];
    v106 = 0.0;
    v107 = 0.0;
    v108 = v68;
    v109 = v70;
    v110 = fminf(v110, v69);
    v111 = fmaxf(v69, v111);
    gameswf::Root::projectPosition(v71, (const gameswf::vector3df::Self *)&v119, (gameswf::Point::Self *)&v106);
    v72 = fminf(v108, v106);
    v73 = v107;
    v74 = fmaxf(v106, v109);
    v94 = a1[88];
    v106 = 0.0;
    v107 = 0.0;
    v108 = v72;
    v109 = v74;
    v110 = fminf(v110, v73);
    v111 = fmaxf(v73, v111);
    gameswf::Root::projectPosition(v94, (const gameswf::vector3df::Self *)&v122, (gameswf::Point::Self *)&v106);
    v75 = fminf(v108, v106);
    v76 = v107;
    v77 = fmaxf(v106, v109);
    v78 = a1[88];
    v106 = 0.0;
    v107 = 0.0;
    v108 = v75;
    v109 = v77;
    v110 = fminf(v110, v76);
    v111 = fmaxf(v76, v111);
    gameswf::Root::projectPosition(v78, (const gameswf::vector3df::Self *)v125, (gameswf::Point::Self *)&v106);
    v95 = 1;
    v108 = fminf(v108, v106);
    v109 = fmaxf(v106, v109);
    v110 = fminf(v110, v107);
    v111 = fmaxf(v107, v111);
  }
  else
  {
    v96 = (char *)(a1 + 29);
    v108 = *((float *)a2 + 5);
    v109 = *((float *)a2 + 6);
    v110 = *((float *)a2 + 7);
    v111 = *((float *)a2 + 8);
    gameswf::Matrix::transform((gameswf::Matrix::Self *)(a1 + 29), (gameswf::Rect::Self *)&v108);
    v95 = 0;
  }
  if ( *((uint8_t *)a1 + 348) != 0 || (result = a2, *((uint8_t *)a2 + 1) != 0) )
  {
    v116 = nullptr;
    v117 = 0;
    v119 = nullptr;
    v120 = nullptr;
    v121 = 0;
    v122 = 0;
    v123 = 0;
    v118 = 1;
    v37 = gameswf::malloc_internal(0xD8u);
    v116 = (gameswf::Self *)v37;
    if ( v37 != 0 )
    {
      v38 = 24;
      memset((void *)v37, 0, 0xD8u);
      v39 = (uint16_t *)(v37 + 48);
      if ( ((v37 + 48) & 1) != 0 )
      {
        *(uint8_t *)(v37 + 48) = 0;
        v39 = (uint16_t *)(v37 + 49);
        LOWORD(v38) = 23;
      }
      if ( ((uint8_t)(uintptr_t)v39 & 2) != 0 )
      {
        *v39 = 0;
        v38 -= 2;
        ++v39;
      }
      memset(v39, 0, 4 * (v38 >> 2));
      v40 = &v39[2 * (v38 >> 2)];
      if ( (v38 & 2) != 0 )
        *v40++ = 0;
      if ( (v38 & 1) != 0 )
        *(uint8_t *)v40 = 0;
      v41 = (uint16_t *)(v37 + 108);
      *(uint32_t *)(v37 + 48) = 1065353216;
      *(uint32_t *)(v37 + 64) = 1065353216;
      *(uint32_t *)(v37 + 72) = 1065353216;
      *(uint32_t *)(v37 + 80) = 1065353216;
      *(uint32_t *)(v37 + 88) = 1065353216;
      *(uint32_t *)(v37 + 96) = 1065353216;
      *(uint32_t *)(v37 + 76) = 0;
      *(uint32_t *)(v37 + 84) = 0;
      *(uint32_t *)(v37 + 92) = 0;
      *(uint32_t *)(v37 + 100) = 0;
      *(uint32_t *)(v37 + 104) = 0;
      v42 = 24;
      if ( ((v37 + 108) & 1) != 0 )
      {
        *(uint8_t *)(v37 + 108) = 0;
        v41 = (uint16_t *)(v37 + 109);
        LOWORD(v42) = 23;
      }
      if ( ((uint8_t)(uintptr_t)v41 & 2) != 0 )
      {
        *v41 = 0;
        v42 -= 2;
        ++v41;
      }
      memset(v41, 0, 4 * (v42 >> 2));
      v43 = &v41[2 * (v42 >> 2)];
      if ( (v42 & 2) != 0 )
        *v43++ = 0;
      if ( (v42 & 1) != 0 )
        *(uint8_t *)v43 = 0;
      v44 = (uint16_t *)(v37 + 148);
      *(uint32_t *)(v37 + 108) = 1065353216;
      *(uint32_t *)(v37 + 124) = 1065353216;
      *(uint8_t *)(v37 + 132) = -1;
      *(uint8_t *)(v37 + 133) = -1;
      *(uint8_t *)(v37 + 134) = -1;
      *(uint8_t *)(v37 + 135) = -1;
      *(uint32_t *)(v37 + 136) = 1065353216;
      *(uint32_t *)(v37 + 140) = 0;
      *(uint32_t *)(v37 + 144) = 0;
      v45 = 64;
      if ( ((v37 + 148) & 1) != 0 )
      {
        *(uint8_t *)(v37 + 148) = 0;
        v44 = (uint16_t *)(v37 + 149);
        LOWORD(v45) = 63;
      }
      if ( ((uint8_t)(uintptr_t)v44 & 2) != 0 )
      {
        *v44 = 0;
        v45 -= 2;
        ++v44;
      }
      memset(v44, 0, 4 * (v45 >> 2));
      v46 = &v44[2 * (v45 >> 2)];
      if ( (v45 & 2) != 0 )
        *v46++ = 0;
      if ( (v45 & 1) != 0 )
        *(uint8_t *)v46 = 0;
      *(uint32_t *)(v37 + 208) = 1065353216;
      *(uint32_t *)(v37 + 188) = 1065353216;
      *(uint32_t *)(v37 + 168) = 1065353216;
      *(uint32_t *)(v37 + 148) = 1065353216;
      *(uint8_t *)(v37 + 212) = 0;
    }
    v47 = v116;
    v117 = 1;
    v48 = (uint16_t *)(v96);
    v49 = (uint16_t *)((char *)v116 + 48);
    *((uint32_t *)v116 + 2) = *(uint32_t *)a2;
    *((uint32_t *)v47 + 3) = *((uint32_t *)a2 + 1);
    *((uint32_t *)v47 + 4) = *((uint32_t *)a2 + 2);
    *((uint32_t *)v47 + 5) = *((uint32_t *)a2 + 3);
    *((uint32_t *)v47 + 6) = *((uint32_t *)a2 + 4);
    *((uint32_t *)v47 + 7) = *((uint32_t *)a2 + 5);
    *((uint32_t *)v47 + 8) = *((uint32_t *)a2 + 6);
    *((uint32_t *)v47 + 9) = *((uint32_t *)a2 + 7);
    *((uint32_t *)v47 + 10) = *((uint32_t *)a2 + 8);
    *((uint32_t *)v47 + 11) = *((uint32_t *)a2 + 9);
    v50 = 165;
    if ( ((uint8_t)(uintptr_t)v49 & 1) != 0 )
    {
      v49 = (uint16_t *)((char *)v47 + 49);
      *((uint8_t *)v47 + 48) = *((uint8_t *)a1 + 116);
      v48 = (uint16_t *)((char *)a1 + 117);
      v50 = 164;
    }
    if ( ((uint8_t)(uintptr_t)v49 & 2) != 0 )
    {
      v50 -= 2;
      *v49++ = *v48++;
    }
    v51 = 0;
    std::memcpy(v49, v48, 4 * (v50 >> 2));
    v53 = &v48[2 * (v50 >> 2)];
    v52 = &v49[2 * (v50 >> 2)];
    if ( (v50 & 2) != 0 )
    {
      *v52 = *v53;
      v51 = 1;
    }
    if ( (v50 & 1) != 0 )
      LOBYTE(v52[v51]) = v53[v51];
    v54 = v122;
    v55 = v121;
    if ( v122 <= 0 && v123 == 0 )
    {
      v122 = 1;
      if ( v120 != nullptr )
        v120 = (gameswf::Self *)gameswf::realloc_internal(v120, 0x1Cu, 28 * v54);
      else
        v120 = (gameswf::Self *)gameswf::malloc_internal(0x1Cu);
    }
    if ( v55 <= 0 )
    {
      v103 = 28 * v55;
      do
      {
        if ( (gameswf::Self *)((char *)v120 + v103) != nullptr )
          memset((char *)v120 + v103, 0, 0x1Cu);
        ++v55;
        v103 += 28;
      }
      while ( v55 != 1 );
    }
    v56 = v120;
    v121 = 1;
    *((uint32_t *)v120 + 4) = 0;
    *((uint32_t *)v56 + 5) = 1;
    result = (gameswf::Self *)gameswf::RenderHandler::flushList((gameswf::RenderHandler::Self *)a1, (gameswf::BatchList::Self *)&v116);
    v104 = v121;
    if ( v121 < 0 )
    {
      v57 = 28 * v121;
      result = nullptr;
      do
      {
        if ( (gameswf::Self *)((char *)v120 + v57) != nullptr )
          memset((char *)v120 + v57, 0, 0x1Cu);
        v57 += 28;
        ++v104;
      }
      while ( v104 != 0 );
    }
    v121 = 0;
    if ( v123 == 0 )
    {
      result = v120;
      v122 = 0;
      if ( v120 != nullptr )
        result = (gameswf::Self *)gameswf::free_internal(v120);
      v120 = nullptr;
    }
    v101 = v117;
    if ( v117 >= 0 )
    {
LABEL_137:
      v117 = 0;
      if ( v119 == nullptr )
      {
        result = v116;
        v118 = 0;
        if ( v116 != nullptr )
          return (gameswf::Self *)gameswf::free_internal(v116);
      }
      return result;
    }
    result = nullptr;
    v105 = 216 * v117;
    while ( 1 )
    {
      v58 = (char *)v116 + v105;
      if ( (gameswf::Self *)((char *)v116 + v105) != nullptr )
        break;
LABEL_136:
      v105 += 216;
      if ( ++v101 == 0 )
        goto LABEL_137;
    }
    memset(v58, 0, 0xD8u);
    v59 = (uint16_t *)(v58 + 48);
    v60 = 24;
    if ( ((unsigned int)(uintptr_t)(v58 + 48) & 1) != 0 )
    {
      v59 = (uint16_t *)(v58 + 49);
      v58[48] = 0;
      LOWORD(v60) = 23;
      if ( ((unsigned int)(uintptr_t)(v58 + 49) & 2) == 0 )
        goto LABEL_117;
    }
    else if ( ((uint8_t)(uintptr_t)v59 & 2) == 0 )
    {
      goto LABEL_117;
    }
    *v59 = 0;
    v60 -= 2;
    ++v59;
LABEL_117:
    memset(v59, 0, 4 * (v60 >> 2));
    v61 = &v59[2 * (v60 >> 2)];
    if ( (v60 & 2) != 0 )
      *v61++ = 0;
    if ( (v60 & 1) != 0 )
      *(uint8_t *)v61 = 0;
    v62 = (uint16_t *)(v58 + 108);
    *((uint32_t *)v58 + 12) = 1065353216;
    *((uint32_t *)v58 + 16) = 1065353216;
    *((uint32_t *)v58 + 18) = 1065353216;
    *((uint32_t *)v58 + 20) = 1065353216;
    *((uint32_t *)v58 + 22) = 1065353216;
    *((uint32_t *)v58 + 24) = 1065353216;
    *((uint32_t *)v58 + 19) = 0;
    *((uint32_t *)v58 + 21) = 0;
    *((uint32_t *)v58 + 23) = 0;
    *((uint32_t *)v58 + 25) = 0;
    *((uint32_t *)v58 + 26) = 0;
    v63 = 24;
    if ( ((unsigned int)(uintptr_t)(v58 + 108) & 1) != 0 )
    {
      v58[108] = 0;
      v62 = (uint16_t *)(v58 + 109);
      LOWORD(v63) = 23;
    }
    if ( ((uint8_t)(uintptr_t)v62 & 2) != 0 )
    {
      *v62 = 0;
      v63 -= 2;
      ++v62;
    }
    memset(v62, 0, 4 * (v63 >> 2));
    v64 = &v62[2 * (v63 >> 2)];
    if ( (v63 & 2) != 0 )
      *v64++ = 0;
    if ( (v63 & 1) != 0 )
      *(uint8_t *)v64 = 0;
    v65 = (uint16_t *)(v58 + 148);
    *((uint32_t *)v58 + 27) = 1065353216;
    *((uint32_t *)v58 + 31) = 1065353216;
    v58[132] = -1;
    v58[133] = -1;
    v58[134] = -1;
    v58[135] = -1;
    *((uint32_t *)v58 + 34) = 1065353216;
    *((uint32_t *)v58 + 35) = 0;
    *((uint32_t *)v58 + 36) = 0;
    v66 = 64;
    if ( ((unsigned int)(uintptr_t)(v58 + 148) & 1) != 0 )
    {
      v65 = (uint16_t *)(v58 + 149);
      v58[148] = 0;
      LOWORD(v66) = 63;
      if ( ((unsigned int)(uintptr_t)(v58 + 149) & 2) == 0 )
        goto LABEL_131;
    }
    else if ( (((uint8_t)(uintptr_t)(v58) - 108) & 2) == 0 )
    {
LABEL_131:
      memset(v65, 0, 4 * (v66 >> 2));
      v67 = &v65[2 * (v66 >> 2)];
      if ( (v66 & 2) != 0 )
        *v67++ = 0;
      if ( (v66 & 1) != 0 )
        *(uint8_t *)v67 = 0;
      *((uint32_t *)v58 + 52) = 1065353216;
      *((uint32_t *)v58 + 47) = 1065353216;
      *((uint32_t *)v58 + 42) = 1065353216;
      *((uint32_t *)v58 + 37) = 1065353216;
      v58[212] = 0;
      goto LABEL_136;
    }
    *v65 = 0;
    v66 -= 2;
    ++v65;
    goto LABEL_131;
  }
  if ( v108 <= *((float *)a1 + 26)
    && *((float *)a1 + 25) <= v109
    && *((float *)a1 + 27) <= v111
    && v110 <= *((float *)a1 + 28) )
  {
    if ( *(uint8_t *)a2 == 3 && *((uint8_t *)a1[88] + 221) != 0 )
    {
      v98 = (char *)(a1 + 79);
      v3 = (char *)(a1 + 79);
    }
    else
    {
      v98 = (char *)(a1 + 71);
      v3 = (char *)(a1 + 71);
    }
    v4 = *((uint32_t *)v3 + 1);
    v97 = v4 + 1;
    if ( v4 == -1 )
    {
      v5 = *(gameswf::Self **)v98;
    }
    else
    {
      v80 = *((uint32_t *)v98 + 2);
      if ( v97 > v80 )
      {
        if ( *((uint32_t *)v98 + 3) != 0 )
        {
          v5 = *(gameswf::Self **)v98;
        }
        else
        {
          v81 = v97 + (v97 >> 1);
          *((uint32_t *)v98 + 2) = v81;
          if ( v81 != 0 )
          {
            if ( *(uint32_t *)v98 != 0 )
              v5 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)v98, 216 * v81, 216 * v80);
            else
              v5 = (gameswf::Self *)gameswf::malloc_internal(216 * v81);
            *(uint32_t *)v98 = (uint32_t)(uintptr_t)(v5);
          }
          else
          {
            if ( *(uint32_t *)v98 != 0 )
              gameswf::free_internal(*(gameswf::Self **)v98);
            v5 = nullptr;
            *(uint32_t *)v98 = 0;
          }
        }
      }
      else
      {
        v5 = *(gameswf::Self **)v98;
      }
    }
    v6 = 216 * v4;
    v7 = (gameswf::Self *)((char *)v5 + v6) == nullptr;
    v8 = (char *)v5 + v6;
    v99 = v6;
    if ( !v7 )
    {
      v9 = 24;
      memset(v8, 0, 0xD8u);
      v10 = (uint16_t *)(v8 + 48);
      if ( ((unsigned int)(uintptr_t)(v8 + 48) & 1) != 0 )
      {
        v8[48] = 0;
        v10 = (uint16_t *)(v8 + 49);
        LOWORD(v9) = 23;
      }
      if ( ((uint8_t)(uintptr_t)(v10) & 2) != 0 )
      {
        *v10 = 0;
        v9 -= 2;
        ++v10;
      }
      memset(v10, 0, 4 * (v9 >> 2));
      v11 = &v10[2 * (v9 >> 2)];
      if ( (v9 & 2) != 0 )
        *v11++ = 0;
      if ( (v9 & 1) != 0 )
        *(uint8_t *)v11 = 0;
      v12 = (uint16_t *)(v8 + 108);
      *((uint32_t *)v8 + 12) = 1065353216;
      *((uint32_t *)v8 + 16) = 1065353216;
      *((uint32_t *)v8 + 18) = 1065353216;
      *((uint32_t *)v8 + 20) = 1065353216;
      *((uint32_t *)v8 + 22) = 1065353216;
      *((uint32_t *)v8 + 24) = 1065353216;
      *((uint32_t *)v8 + 19) = 0;
      *((uint32_t *)v8 + 21) = 0;
      *((uint32_t *)v8 + 23) = 0;
      *((uint32_t *)v8 + 25) = 0;
      *((uint32_t *)v8 + 26) = 0;
      v13 = 24;
      if ( ((unsigned int)(uintptr_t)(v8 + 108) & 1) != 0 )
      {
        v8[108] = 0;
        v12 = (uint16_t *)(v8 + 109);
        LOWORD(v13) = 23;
      }
      if ( ((uint8_t)(uintptr_t)(v12) & 2) != 0 )
      {
        *v12 = 0;
        v13 -= 2;
        ++v12;
      }
      memset(v12, 0, 4 * (v13 >> 2));
      v14 = &v12[2 * (v13 >> 2)];
      if ( (v13 & 2) != 0 )
        *v14++ = 0;
      if ( (v13 & 1) != 0 )
        *(uint8_t *)v14 = 0;
      v15 = (uint16_t *)(v8 + 148);
      *((uint32_t *)v8 + 27) = 1065353216;
      *((uint32_t *)v8 + 31) = 1065353216;
      v8[132] = -1;
      v8[133] = -1;
      v8[134] = -1;
      v8[135] = -1;
      *((uint32_t *)v8 + 34) = 1065353216;
      *((uint32_t *)v8 + 35) = 0;
      *((uint32_t *)v8 + 36) = 0;
      v16 = 64;
      if ( ((unsigned int)(uintptr_t)(v8 + 148) & 1) != 0 )
      {
        v8[148] = 0;
        v15 = (uint16_t *)(v8 + 149);
        LOWORD(v16) = 63;
      }
      if ( ((uint8_t)(uintptr_t)(v15) & 2) != 0 )
      {
        *v15 = 0;
        v16 -= 2;
        ++v15;
      }
      memset(v15, 0, 4 * (v16 >> 2));
      v17 = &v15[2 * (v16 >> 2)];
      if ( (v16 & 2) != 0 )
        *v17++ = 0;
      if ( (v16 & 1) != 0 )
        *(uint8_t *)v17 = 0;
      *((uint32_t *)v8 + 52) = 1065353216;
      *((uint32_t *)v8 + 47) = 1065353216;
      *((uint32_t *)v8 + 42) = 1065353216;
      *((uint32_t *)v8 + 37) = 1065353216;
      v8[212] = 0;
    }
    v18 = (uint16_t *)(v96);
    v19 = (uint32_t *)(*(uint32_t *)v98 + v99);
    *((uint32_t *)v98 + 1) = v97;
    v100 = (int *)(v19);
    v19[2] = *(uint32_t *)a2;
    v19[3] = *((uint32_t *)a2 + 1);
    v19[4] = *((uint32_t *)a2 + 2);
    v19[5] = *((uint32_t *)a2 + 3);
    v19[6] = *((uint32_t *)a2 + 4);
    v19[7] = *((uint32_t *)a2 + 5);
    v19[8] = *((uint32_t *)a2 + 6);
    v19[9] = *((uint32_t *)a2 + 7);
    v19[10] = *((uint32_t *)a2 + 8);
    v19[11] = *((uint32_t *)a2 + 9);
    v20 = (uint16_t *)(v19 + 12);
    v21 = 165;
    if ( ((uint8_t)(uintptr_t)(v20) & 1) != 0 )
    {
      LOBYTE(v21) = -92;
      v18 = (uint16_t *)((char *)a1 + 117);
      *((uint8_t *)v100 + 48) = *((uint8_t *)a1 + 116);
      v20 = (uint16_t *)((char *)v100 + 49);
    }
    if ( ((uint8_t)(uintptr_t)(v20) & 2) != 0 )
    {
      v21 -= 2;
      *v20++ = *v18++;
    }
    v22 = 0;
    std::memcpy(v20, v18, 4 * (v21 >> 2));
    v24 = &v18[2 * (v21 >> 2)];
    v23 = &v20[2 * (v21 >> 2)];
    if ( (v21 & 2) != 0 )
    {
      *v23 = *v24;
      v22 = 1;
    }
    if ( (v21 & 1) != 0 )
      LOBYTE(v23[v22]) = v24[v22];
    v25 = *(char *)a2 | (v100[36] << 8);
    *(uint64_t *)v100 = v25;
    v26 = *(uint8_t *)a2;
    if ( *(char *)a2 >= 0 )
    {
      if ( v26 > 1 )
      {
        if ( v26 == 2 )
        {
          v79 = (uint64_t)*((float *)a1 + 51);
          *v100 = v25;
          v100[1] = (v25 >> 31) | v79;
        }
      }
      else
      {
        v27 = (uint32_t)(uintptr_t)(a1[52]) << 16;
        v28 = (v25 >> 31) | (v27 >> 31);
        *v100 = v27 | v25;
        v100[1] = v28;
        v100[1] = v28 | (unsigned int)(uintptr_t)(a1[43]);
      }
    }
    if ( v95 != 0 )
    {
      *((uint8_t *)v100 + 212) = 1;
      v29 = (int)(uintptr_t)(a1[6]);
      if ( v29 <= 0 )
      {
        v90 = 64;
        v91 = (uint16_t *)(v100 + 37);
        if ( ((unsigned int)(uintptr_t)(v100 + 37) & 1) != 0 )
        {
          LOBYTE(v90) = 63;
          *((uint8_t *)v100 + 148) = 0;
          v91 = (uint16_t *)((char *)v100 + 149);
        }
        if ( ((uint8_t)(uintptr_t)(v91) & 2) != 0 )
        {
          *v91 = 0;
          v90 -= 2;
          ++v91;
        }
        memset(v91, 0, 4 * (v90 >> 2));
        v92 = &v91[2 * (v90 >> 2)];
        if ( (v90 & 2) != 0 )
          *v92++ = 0;
        if ( (v90 & 1) != 0 )
          *(uint8_t *)v92 = 0;
        v100[52] = 1065353216;
        v100[47] = 1065353216;
        v100[42] = 1065353216;
        v100[37] = 1065353216;
      }
      else
      {
        v30 = (int *)((char *)a1[5] + 64 * v29 - 64);
        v100[37] = *v30;
        v100[38] = v30[1];
        v100[39] = v30[2];
        v100[40] = v30[3];
        v100[41] = v30[4];
        v100[42] = v30[5];
        v100[43] = v30[6];
        v100[44] = v30[7];
        v100[45] = v30[8];
        v100[46] = v30[9];
        v100[47] = v30[10];
        v100[48] = v30[11];
        v100[49] = v30[12];
        v100[50] = v30[13];
        v100[51] = v30[14];
        v100[52] = v30[15];
      }
    }
    v31 = *((uint32_t *)v98 + 5);
    if ( v31 <= 0 )
    {
      v32 = *((gameswf::Self **)v98 + 4);
    }
    else if ( *(uint8_t *)a2 == 3 )
    {
      v32 = *((gameswf::Self **)v98 + 4);
    }
    else
    {
      v32 = *((gameswf::Self **)v98 + 4);
      result = (gameswf::Self *)((char *)v32 + 28 * v31 - 28);
      if ( *(uint64_t *)v100 == *(uint64_t *)(*(uint32_t *)v98 + 216 * *((uint32_t *)result + 4)) )
      {
        v82 = v110;
        ++*((uint32_t *)result + 5);
        v83 = fminf(*(float *)result, v108);
        v84 = fminf(*((float *)result + 2), v82);
        v85 = fmaxf(v108, *((float *)result + 1));
        v86 = fmaxf(v82, *((float *)result + 3));
        *(float *)result = v83;
        *((float *)result + 2) = v84;
        *((float *)result + 1) = v85;
        *((float *)result + 3) = v86;
        v87 = fminf(v83, v109);
        v88 = fmaxf(v111, v86);
        v89 = fmaxf(v109, v85);
        *((float *)result + 2) = fminf(v84, v111);
        *(float *)result = v87;
        *((float *)result + 3) = v88;
        *((float *)result + 1) = v89;
        return result;
      }
    }
    v33 = v31 + 1;
    v102 = v31 + 1;
    if ( v31 != -1 )
    {
      v34 = *((uint32_t *)v98 + 6);
      if ( v33 > v34 && *((uint32_t *)v98 + 7) == 0 )
      {
        v93 = v102 + (v33 >> 1);
        *((uint32_t *)v98 + 6) = v93;
        if ( v93 != 0 )
        {
          if ( v32 != nullptr )
            v32 = (gameswf::Self *)gameswf::realloc_internal(v32, 28 * v93, 28 * v34);
          else
            v32 = (gameswf::Self *)gameswf::malloc_internal(28 * v93);
          *((uint32_t *)v98 + 4) = (uint32_t)(uintptr_t)(v32);
        }
        else
        {
          if ( v32 != nullptr )
            gameswf::free_internal(v32);
          v32 = nullptr;
          *((uint32_t *)v98 + 4) = 0;
        }
      }
    }
    v35 = 28 * v31;
    if ( (gameswf::Self *)((char *)v32 + v35) != nullptr )
      memset((char *)v32 + v35, 0, 0x1Cu);
    v36 = *((uint32_t *)v98 + 4) + v35;
    *((uint32_t *)v98 + 5) = v102;
    *(float *)v36 = v108;
    *(float *)(v36 + 4) = v109;
    *(float *)(v36 + 8) = v110;
    *(float *)(v36 + 12) = v111;
    result = (gameswf::Self *)(*((uint32_t *)v98 + 1) - 1);
    *(uint32_t *)(v36 + 20) = 1;
    *(uint32_t *)(v36 + 16) = (uint32_t)(uintptr_t)(result);
    *(uint8_t *)(v36 + 24) = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::setClipBound  (binary VA: 0x10c2d10)
// Original: gameswf::RenderHandler::setClipBound
// ----------------------------------------------------------------------------
int gameswf::RenderHandler::setClipBound(gameswf::RenderHandler::Self *self, const gameswf::Rect::Self *a2)
{
  int v2;
  uint32_t *v3;
  int result;
  gameswf::Self *v5;

  v2 = *((uint32_t *)self + 23);
  if ( v2 <= 0 && *((uint32_t *)self + 24) == 0 )
  {
    v5 = *((gameswf::Self **)self + 21);
    *((uint32_t *)self + 23) = 1;
    if ( v5 != nullptr )
      *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v5, 0x10u, 16 * v2));
    else
      *((uint32_t *)self + 21) = gameswf::malloc_internal(0x10u);
  }
  v3 = *((uint32_t **)self + 21);
  *((uint32_t *)self + 22) = 1;
  *v3 = *(uint32_t *)a2;
  v3[1] = *((uint32_t *)a2 + 1);
  v3[2] = *((uint32_t *)a2 + 2);
  v3[3] = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 25) = *(uint32_t *)a2;
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 2);
  result = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 28) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::beginSubmitMask  (binary VA: 0x10c2df0)
// Original: gameswf::RenderHandler::beginSubmitMask
// ----------------------------------------------------------------------------
int gameswf::RenderHandler::beginSubmitMask(gameswf::RenderHandler::Self *self)
{
  gameswf::RenderHandler::flush(self);
  return G4_VCALL<int>(self, 120);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::endSubmitMask  (binary VA: 0x10c2e30)
// Original: gameswf::RenderHandler::endSubmitMask
// ----------------------------------------------------------------------------
int gameswf::RenderHandler::endSubmitMask(gameswf::RenderHandler::Self *self)
{
  int v1;
  float v2; // xmm4_4
  int v3;
  float v4; // xmm5_4
  int v5;
  float v6; // xmm6_4
  int v7;
  float *v8;
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  int v12;
  int v13;
  int v14;
  float *v15;
  int v16;
  int v18;
  gameswf::Self *v19;
  size_t v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;

  v1 = *((uint32_t *)self + 76);
  if ( v1 <= 0 )
  {
    v2 = -3.4028235e38f;
    v4 = 3.4028235e38f;
    v11 = -3.4028235e38f;
    v6 = 3.4028235e38f;
  }
  else
  {
    v2 = -3.4028235e38f;
    v3 = *((uint32_t *)self + 75);
    v4 = 3.4028235e38f;
    v5 = 0;
    v25 = -3.4028235e38f;
    v6 = 3.4028235e38f;
    v7 = 0;
    do
    {
      v8 = (float *)(v3 + v5);
      ++v7;
      v9 = *(float *)(v3 + v5 + 4);
      v5 += 28;
      v10 = v8[2];
      v6 = fminf(v6, fminf(v9, *v8));
      v4 = fminf(v4, fminf(v8[3], v10));
      v25 = fmaxf(fmaxf(*v8, v9), v25);
      v2 = fmaxf(v2, fmaxf(v10, v8[3]));
    }
    while ( v7 != v1 );
    v11 = v25;
  }
  v21 = fmaxf(v6, *((float *)self + 25));
  v22 = fmaxf(v4, *((float *)self + 27));
  v23 = fminf(v11, *((float *)self + 26));
  v24 = fminf(v2, *((float *)self + 28));
  gameswf::RenderHandler::flush(self);
  v12 = *((uint32_t *)self + 22);
  v13 = v12 + 1;
  if ( v12 != -1 )
  {
    v14 = *((uint32_t *)self + 23);
    if ( v13 > v14 && *((uint32_t *)self + 24) == 0 )
    {
      v18 = v13 + (v13 >> 1);
      *((uint32_t *)self + 23) = v18;
      if ( v18 != 0 )
      {
        v19 = *((gameswf::Self **)self + 21);
        if ( v19 != nullptr )
        {
          *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v19, 16 * v18, 16 * v14));
        }
        else
        {
          v20 = 0;
          *((uint32_t *)self + 21) = gameswf::malloc_internal(16 * v18);
        }
      }
      else
      {
        if ( *((uint32_t *)self + 21) != 0 )
        {
          v20 = 16 * v14;
          gameswf::free_internal(*((gameswf::Self **)self + 21));
        }
        *((uint32_t *)self + 21) = 0;
      }
    }
  }
  v15 = (float *)(*((uint32_t *)self + 21) + 16 * v12);
  *((uint32_t *)self + 22) = v13;
  *v15 = v21;
  v15[1] = v23;
  v15[2] = v22;
  v15[3] = v24;
  v16 = *(uint32_t *)self;
  *((float *)self + 25) = v21;
  *((float *)self + 26) = v23;
  *((float *)self + 27) = v22;
  *((float *)self + 28) = v24;
  return (*(int (**)(gameswf::RenderHandler::Self *, size_t))(v16 + 124))(self, v20);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::disableMask  (binary VA: 0x10c30b0)
// Original: gameswf::RenderHandler::disableMask
// ----------------------------------------------------------------------------
int gameswf::RenderHandler::disableMask(gameswf::Self **self)
{
  int v1;
  int v2;
  int v3;
  gameswf::Self **v4;
  gameswf::Self *v6;
  gameswf::Self *v7;
  size_t v8;

  gameswf::RenderHandler::flush((gameswf::RenderHandler::Self *)self);
  v1 = (int)(uintptr_t)(*(self + 22));
  v2 = v1 - 1;
  if ( v1 != 1 )
  {
    v3 = (int)(uintptr_t)(*(self + 23));
    if ( v2 > v3 && *(self + 24) == nullptr )
    {
      v6 = (gameswf::Self *)(v2 + (v2 >> 1));
      *(self + 23) = v6;
      if ( v6 != nullptr )
      {
        v7 = *(self + 21);
        if ( v7 != nullptr )
        {
          *(self + 21) = (gameswf::Self *)gameswf::realloc_internal(v7, 16 * (uint32_t)(uintptr_t)(v6), 16 * v3);
        }
        else
        {
          v8 = 0;
          *(self + 21) = (gameswf::Self *)gameswf::malloc_internal(16 * (uint32_t)(uintptr_t)(v6));
        }
      }
      else
      {
        if ( *(self + 21) != nullptr )
        {
          v8 = 16 * v3;
          gameswf::free_internal(*(self + 21));
        }
        *(self + 21) = nullptr;
      }
    }
  }
  *(self + 22) = (gameswf::Self *)v2;
  v4 = (gameswf::Self **)((char *)*(self + 21) + 16 * v1 - 32);
  *(self + 25) = *v4;
  *(self + 26) = v4[1];
  *(self + 27) = v4[2];
  *(self + 28) = v4[3];
  return (*((int (**)(gameswf::Self **, size_t))*self + 32))(self, v8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::setBitmapCache  (binary VA: 0x10c31c0)
// Original: gameswf::RenderHandler::setBitmapCache
// ----------------------------------------------------------------------------
int gameswf::RenderHandler::setBitmapCache(gameswf::RenderHandler::Self *self, gameswf::BitmapInfo::Self *a2)
{
  int v2;

  gameswf::RenderHandler::flush(self);
  v2 = *(uint32_t *)self;
  *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)(a2);
  return (*(int (**)(gameswf::RenderHandler::Self *, gameswf::BitmapInfo::Self *))(v2 + 32))(self, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::beginEffect  (binary VA: 0x10c34b0)
// Original: gameswf::RenderHandler::beginEffect
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::beginEffect()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::endEffect  (binary VA: 0x10c34c0)
// Original: gameswf::RenderHandler::endEffect
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::endEffect()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::setRenderMode  (binary VA: 0x10c34d0)
// Original: gameswf::RenderHandler::setRenderMode
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::setRenderMode()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::setRoot  (binary VA: 0x10c34e0)
// Original: gameswf::RenderHandler::setRoot
// ----------------------------------------------------------------------------
gameswf::RenderHandler::Self * gameswf::RenderHandler::setRoot(gameswf::RenderHandler::Self *self, gameswf::Root::Self *a2)
{
  *((uint32_t *)self + 88) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::drawVideoBitmap  (binary VA: 0x10c3500)
// Original: gameswf::RenderHandler::drawVideoBitmap
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::drawVideoBitmap()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::drawAlphaMask  (binary VA: 0x10c3510)
// Original: gameswf::RenderHandler::drawAlphaMask
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::drawAlphaMask()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::flushImpl  (binary VA: 0x10c3520)
// Original: gameswf::RenderHandler::flushImpl
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::flushImpl()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::renderScreen  (binary VA: 0x10c3530)
// Original: gameswf::RenderHandler::renderScreen
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::renderScreen()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::setCursor  (binary VA: 0x10c3540)
// Original: gameswf::RenderHandler::setCursor
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::setCursor()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::reset  (binary VA: 0x10c3550)
// Original: gameswf::RenderHandler::reset
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::reset()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::setOrientation  (binary VA: 0x10c3560)
// Original: gameswf::RenderHandler::setOrientation
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::setOrientation()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::getOrientation  (binary VA: 0x10c3570)
// Original: gameswf::RenderHandler::getOrientation
// ----------------------------------------------------------------------------
int gameswf::RenderHandler::getOrientation()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::beginDisplayCallback  (binary VA: 0x10c3580)
// Original: gameswf::RenderHandler::beginDisplayCallback
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::beginDisplayCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::endDisplayCallback  (binary VA: 0x10c3590)
// Original: gameswf::RenderHandler::endDisplayCallback
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::endDisplayCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::pushTransform  (binary VA: 0x10c3760)
// Original: gameswf::RenderHandler::pushTransform
// ----------------------------------------------------------------------------
char * gameswf::RenderHandler::pushTransform(gameswf::RenderHandler::Self *self, const gameswf::Transform::Self *a2, gameswf::Character::Self *a3)
{
  int v3;
  int v4;
  int v5;
  char *v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  char *result;
  int v13;
  int v14;

  v3 = *((uint32_t *)self + 6);
  v4 = *((uint32_t *)self + 7);
  v5 = v3 + 1;
  if ( v3 + 1 <= v4 || *((uint32_t *)self + 8) != 0 )
  {
    v6 = *((char **)self + 5);
  }
  else
  {
    v13 = v5 + (v5 >> 1);
    *((uint32_t *)self + 7) = v13;
    if ( v13 != 0 )
    {
      if ( *((uint32_t *)self + 5) != 0 )
        v6 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 5), v13 << 6, v4 << 6);
      else
        v6 = (char *)gameswf::malloc_internal(v13 << 6);
      *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v6);
      v3 = *((uint32_t *)self + 6);
    }
    else
    {
      if ( *((uint32_t *)self + 5) != 0 )
      {
        gameswf::free_internal(*((gameswf::Self **)self + 5));
        v3 = *((uint32_t *)self + 6);
      }
      *((uint32_t *)self + 5) = 0;
      v6 = nullptr;
    }
  }
  v7 = &v6[64 * v3];
  if ( v7 != nullptr )
  {
    *(uint32_t *)v7 = *(uint32_t *)a2;
    *((uint32_t *)v7 + 1) = *((uint32_t *)a2 + 1);
    *((uint32_t *)v7 + 2) = *((uint32_t *)a2 + 2);
    *((uint32_t *)v7 + 3) = *((uint32_t *)a2 + 3);
    *((uint32_t *)v7 + 4) = *((uint32_t *)a2 + 4);
    *((uint32_t *)v7 + 5) = *((uint32_t *)a2 + 5);
    *((uint32_t *)v7 + 6) = *((uint32_t *)a2 + 6);
    *((uint32_t *)v7 + 7) = *((uint32_t *)a2 + 7);
    *((uint32_t *)v7 + 8) = *((uint32_t *)a2 + 8);
    *((uint32_t *)v7 + 9) = *((uint32_t *)a2 + 9);
    *((uint32_t *)v7 + 10) = *((uint32_t *)a2 + 10);
    *((uint32_t *)v7 + 11) = *((uint32_t *)a2 + 11);
    *((uint32_t *)v7 + 12) = *((uint32_t *)a2 + 12);
    *((uint32_t *)v7 + 13) = *((uint32_t *)a2 + 13);
    *((uint32_t *)v7 + 14) = *((uint32_t *)a2 + 14);
    *((uint32_t *)v7 + 15) = *((uint32_t *)a2 + 15);
  }
  v8 = *((uint32_t *)self + 10);
  v9 = *((uint32_t *)self + 11);
  *((uint32_t *)self + 6) = v5;
  v10 = v8 + 1;
  if ( v8 + 1 <= v9 || *((uint32_t *)self + 12) != 0 )
  {
    v11 = *((char **)self + 9);
  }
  else
  {
    v14 = v10 + (v10 >> 1);
    *((uint32_t *)self + 11) = v14;
    if ( v14 != 0 )
    {
      if ( *((uint32_t *)self + 9) != 0 )
        v11 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 9), 4 * v14, 4 * v9);
      else
        v11 = (char *)gameswf::malloc_internal(4 * v14);
      *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v11);
      v8 = *((uint32_t *)self + 10);
    }
    else
    {
      if ( *((uint32_t *)self + 9) != 0 )
      {
        gameswf::free_internal(*((gameswf::Self **)self + 9));
        v8 = *((uint32_t *)self + 10);
      }
      *((uint32_t *)self + 9) = 0;
      v11 = nullptr;
    }
  }
  result = &v11[4 * v8];
  if ( result != nullptr )
    *(uint32_t *)result = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 10) = v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::popTransform  (binary VA: 0x10c3960)
// Original: gameswf::RenderHandler::popTransform
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::popTransform(gameswf::RenderHandler::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  gameswf::Self *v8;

  v1 = *((uint32_t *)self + 6) - 1;
  if ( *((uint32_t *)self + 6) != 1 )
  {
    v2 = *((uint32_t *)self + 7);
    if ( v1 > v2 && *((uint32_t *)self + 8) == 0 )
    {
      v5 = v1 + (v1 >> 1);
      *((uint32_t *)self + 7) = v5;
      if ( v5 != 0 )
      {
        v8 = *((gameswf::Self **)self + 5);
        if ( v8 != nullptr )
          *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v8, v5 << 6, v2 << 6));
        else
          *((uint32_t *)self + 5) = gameswf::malloc_internal(v5 << 6);
      }
      else
      {
        if ( *((uint32_t *)self + 5) != 0 )
          gameswf::free_internal(*((gameswf::Self **)self + 5));
        *((uint32_t *)self + 5) = 0;
      }
    }
  }
  *((uint32_t *)self + 6) = v1;
  v3 = *((uint32_t *)self + 10) - 1;
  if ( *((uint32_t *)self + 10) != 1 )
  {
    v4 = *((uint32_t *)self + 11);
    if ( v3 > v4 && *((uint32_t *)self + 12) == 0 )
    {
      v6 = v3 + (v3 >> 1);
      *((uint32_t *)self + 11) = v6;
      if ( v6 != 0 )
      {
        v7 = *((gameswf::Self **)self + 9);
        if ( v7 != nullptr )
          *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v7, 4 * v6, 4 * v4));
        else
          *((uint32_t *)self + 9) = gameswf::malloc_internal(4 * v6);
      }
      else
      {
        if ( *((uint32_t *)self + 9) != 0 )
          gameswf::free_internal(*((gameswf::Self **)self + 9));
        *((uint32_t *)self + 9) = 0;
      }
    }
  }
  *((uint32_t *)self + 10) = v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::Destroy  (binary VA: 0x10c3ac0)
// Original: gameswf::RenderHandler::~RenderHandler
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::Destroy(gameswf::RenderHandler::Self *self)
{
  int v1;
  int v2;
  void *v3;
  gameswf::RenderHandler::Self *v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  int v8;
  int v9;
  uint16_t *v10;
  unsigned int v11;
  uint16_t *v12;
  uint16_t *v13;
  unsigned int v14;
  uint16_t *v15;
  uint16_t *v16;
  unsigned int v17;
  uint16_t *v18;
  gameswf::RenderHandler::Self *v19;
  int v20;
  gameswf::Self *v21;
  int v22;
  int v23;
  void *v24;
  gameswf::RenderHandler::Self *v25;
  int v26;
  gameswf::Self *v27;
  int v28;
  int v29;
  int v30;
  uint16_t *v31;
  unsigned int v32;
  uint16_t *v33;
  uint16_t *v34;
  unsigned int v35;
  uint16_t *v36;
  uint16_t *v37;
  unsigned int v38;
  uint16_t *v39;
  gameswf::RenderHandler::Self *v40;
  int v41;
  gameswf::Self *v42;
  int v43;
  gameswf::Self *v44;
  int v45;
  int v46;
  uint32_t *v47;
  gameswf::RenderHandler::Self *v48;
  int v49;
  gameswf::Self *v50;
  int v51;
  int v52;
  int v53;
  uint16_t *v54;
  unsigned int v55;
  uint16_t *v56;
  int v57;
  gameswf::Self *v58;
  int v59;
  uint32_t *v60;
  int v61;
  int v62;
  uint32_t *v63;
  uint32_t *v64;
  uint32_t *v65;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208ED48);
  v1 = *((uint32_t *)self + 84);
  if ( v1 < 0 )
  {
    v2 = 28 * v1;
    do
    {
      v3 = (void *)(*((uint32_t *)self + 83) + v2);
      if ( v3 != nullptr )
        memset(v3, 0, 0x1Cu);
      v2 += 28;
      ++v1;
    }
    while ( v1 != 0 );
  }
  v4 = self;
  v5 = *((uint32_t *)self + 86);
  *((uint32_t *)self + 84) = 0;
  if ( v5 == 0 )
  {
    v6 = *((gameswf::Self **)self + 83);
    *((uint32_t *)self + 85) = 0;
    if ( v6 != nullptr )
      gameswf::free_internal(v6);
    v4 = self;
    *((uint32_t *)self + 83) = 0;
  }
  v63 = (uint32_t *)((char *)v4 + 316);
  v7 = *((uint32_t *)self + 80);
  v59 = v7;
  if ( v7 < 0 )
  {
    v8 = 216 * v7;
    do
    {
      v9 = *v63 + v8;
      if ( v9 != 0 )
      {
        memset((void *)v9, 0, 0xD8u);
        v10 = (uint16_t *)(v9 + 48);
        v11 = 24;
        if ( ((v9 + 48) & 1) != 0 )
        {
          *(uint8_t *)(v9 + 48) = 0;
          v10 = (uint16_t *)(v9 + 49);
          LOWORD(v11) = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v10) & 2) != 0 )
        {
          *v10 = 0;
          v11 -= 2;
          ++v10;
        }
        memset(v10, 0, 4 * (v11 >> 2));
        v12 = &v10[2 * (v11 >> 2)];
        if ( (v11 & 2) != 0 )
          *v12++ = 0;
        if ( (v11 & 1) != 0 )
          *(uint8_t *)v12 = 0;
        v13 = (uint16_t *)(v9 + 108);
        *(uint32_t *)(v9 + 48) = 1065353216;
        *(uint32_t *)(v9 + 64) = 1065353216;
        *(uint32_t *)(v9 + 72) = 1065353216;
        *(uint32_t *)(v9 + 80) = 1065353216;
        *(uint32_t *)(v9 + 88) = 1065353216;
        *(uint32_t *)(v9 + 96) = 1065353216;
        *(uint32_t *)(v9 + 76) = 0;
        *(uint32_t *)(v9 + 84) = 0;
        *(uint32_t *)(v9 + 92) = 0;
        *(uint32_t *)(v9 + 100) = 0;
        *(uint32_t *)(v9 + 104) = 0;
        v14 = 24;
        if ( ((v9 + 108) & 1) != 0 )
        {
          *(uint8_t *)(v9 + 108) = 0;
          v13 = (uint16_t *)(v9 + 109);
          LOWORD(v14) = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v13) & 2) != 0 )
        {
          *v13 = 0;
          v14 -= 2;
          ++v13;
        }
        memset(v13, 0, 4 * (v14 >> 2));
        v15 = &v13[2 * (v14 >> 2)];
        if ( (v14 & 2) != 0 )
          *v15++ = 0;
        if ( (v14 & 1) != 0 )
          *(uint8_t *)v15 = 0;
        v16 = (uint16_t *)(v9 + 148);
        *(uint32_t *)(v9 + 108) = 1065353216;
        *(uint32_t *)(v9 + 124) = 1065353216;
        *(uint8_t *)(v9 + 132) = -1;
        *(uint8_t *)(v9 + 133) = -1;
        *(uint8_t *)(v9 + 134) = -1;
        *(uint8_t *)(v9 + 135) = -1;
        *(uint32_t *)(v9 + 136) = 1065353216;
        *(uint32_t *)(v9 + 140) = 0;
        *(uint32_t *)(v9 + 144) = 0;
        v17 = 64;
        if ( ((v9 + 148) & 1) != 0 )
        {
          *(uint8_t *)(v9 + 148) = 0;
          v16 = (uint16_t *)(v9 + 149);
          LOWORD(v17) = 63;
        }
        if ( ((uint8_t)(uintptr_t)(v16) & 2) != 0 )
        {
          *v16 = 0;
          v17 -= 2;
          ++v16;
        }
        memset(v16, 0, 4 * (v17 >> 2));
        v18 = &v16[2 * (v17 >> 2)];
        if ( (v17 & 2) != 0 )
          *v18++ = 0;
        if ( (v17 & 1) != 0 )
          *(uint8_t *)v18 = 0;
        *(uint32_t *)(v9 + 208) = 1065353216;
        *(uint32_t *)(v9 + 188) = 1065353216;
        *(uint32_t *)(v9 + 168) = 1065353216;
        *(uint32_t *)(v9 + 148) = 1065353216;
        *(uint8_t *)(v9 + 212) = 0;
      }
      v8 += 216;
      ++v59;
    }
    while ( v59 != 0 );
  }
  v19 = self;
  v20 = *((uint32_t *)self + 82);
  *((uint32_t *)self + 80) = 0;
  if ( v20 == 0 )
  {
    v21 = *((gameswf::Self **)self + 79);
    *((uint32_t *)self + 81) = 0;
    if ( v21 != nullptr )
      gameswf::free_internal(v21);
    v19 = self;
    *((uint32_t *)self + 79) = 0;
  }
  v60 = (uint32_t *)((char *)v19 + 300);
  v22 = *((uint32_t *)self + 76);
  if ( v22 < 0 )
  {
    v23 = 28 * v22;
    do
    {
      v24 = (void *)(*v60 + v23);
      if ( v24 != nullptr )
        memset(v24, 0, 0x1Cu);
      v23 += 28;
      ++v22;
    }
    while ( v22 != 0 );
  }
  v25 = self;
  v26 = *((uint32_t *)self + 78);
  *((uint32_t *)self + 76) = 0;
  if ( v26 == 0 )
  {
    v27 = *((gameswf::Self **)self + 75);
    *((uint32_t *)self + 77) = 0;
    if ( v27 != nullptr )
      gameswf::free_internal(v27);
    v25 = self;
    *((uint32_t *)self + 75) = 0;
  }
  v64 = (uint32_t *)((char *)v25 + 284);
  v28 = *((uint32_t *)self + 72);
  v61 = v28;
  if ( v28 < 0 )
  {
    v29 = 216 * v28;
    do
    {
      v30 = *v64 + v29;
      if ( v30 != 0 )
      {
        memset((void *)v30, 0, 0xD8u);
        v31 = (uint16_t *)(v30 + 48);
        v32 = 24;
        if ( ((v30 + 48) & 1) != 0 )
        {
          *(uint8_t *)(v30 + 48) = 0;
          v31 = (uint16_t *)(v30 + 49);
          LOWORD(v32) = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v31) & 2) != 0 )
        {
          *v31 = 0;
          v32 -= 2;
          ++v31;
        }
        memset(v31, 0, 4 * (v32 >> 2));
        v33 = &v31[2 * (v32 >> 2)];
        if ( (v32 & 2) != 0 )
          *v33++ = 0;
        if ( (v32 & 1) != 0 )
          *(uint8_t *)v33 = 0;
        v34 = (uint16_t *)(v30 + 108);
        *(uint32_t *)(v30 + 48) = 1065353216;
        *(uint32_t *)(v30 + 64) = 1065353216;
        *(uint32_t *)(v30 + 72) = 1065353216;
        *(uint32_t *)(v30 + 80) = 1065353216;
        *(uint32_t *)(v30 + 88) = 1065353216;
        *(uint32_t *)(v30 + 96) = 1065353216;
        *(uint32_t *)(v30 + 76) = 0;
        *(uint32_t *)(v30 + 84) = 0;
        *(uint32_t *)(v30 + 92) = 0;
        *(uint32_t *)(v30 + 100) = 0;
        *(uint32_t *)(v30 + 104) = 0;
        v35 = 24;
        if ( ((v30 + 108) & 1) != 0 )
        {
          *(uint8_t *)(v30 + 108) = 0;
          v34 = (uint16_t *)(v30 + 109);
          LOWORD(v35) = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v34) & 2) != 0 )
        {
          *v34 = 0;
          v35 -= 2;
          ++v34;
        }
        memset(v34, 0, 4 * (v35 >> 2));
        v36 = &v34[2 * (v35 >> 2)];
        if ( (v35 & 2) != 0 )
          *v36++ = 0;
        if ( (v35 & 1) != 0 )
          *(uint8_t *)v36 = 0;
        v37 = (uint16_t *)(v30 + 148);
        *(uint32_t *)(v30 + 108) = 1065353216;
        *(uint32_t *)(v30 + 124) = 1065353216;
        *(uint8_t *)(v30 + 132) = -1;
        *(uint8_t *)(v30 + 133) = -1;
        *(uint8_t *)(v30 + 134) = -1;
        *(uint8_t *)(v30 + 135) = -1;
        *(uint32_t *)(v30 + 136) = 1065353216;
        *(uint32_t *)(v30 + 140) = 0;
        *(uint32_t *)(v30 + 144) = 0;
        v38 = 64;
        if ( ((v30 + 148) & 1) != 0 )
        {
          *(uint8_t *)(v30 + 148) = 0;
          v37 = (uint16_t *)(v30 + 149);
          LOWORD(v38) = 63;
        }
        if ( ((uint8_t)(uintptr_t)(v37) & 2) != 0 )
        {
          *v37 = 0;
          v38 -= 2;
          ++v37;
        }
        memset(v37, 0, 4 * (v38 >> 2));
        v39 = &v37[2 * (v38 >> 2)];
        if ( (v38 & 2) != 0 )
          *v39++ = 0;
        if ( (v38 & 1) != 0 )
          *(uint8_t *)v39 = 0;
        *(uint32_t *)(v30 + 208) = 1065353216;
        *(uint32_t *)(v30 + 188) = 1065353216;
        *(uint32_t *)(v30 + 168) = 1065353216;
        *(uint32_t *)(v30 + 148) = 1065353216;
        *(uint8_t *)(v30 + 212) = 0;
      }
      v29 += 216;
      ++v61;
    }
    while ( v61 != 0 );
  }
  v40 = self;
  v41 = *((uint32_t *)self + 74);
  *((uint32_t *)self + 72) = 0;
  if ( v41 == 0 )
  {
    v42 = *((gameswf::Self **)self + 71);
    *((uint32_t *)self + 73) = 0;
    if ( v42 != nullptr )
      gameswf::free_internal(v42);
    v40 = self;
    *((uint32_t *)self + 71) = 0;
  }
  v43 = *((uint32_t *)v40 + 24);
  *((uint32_t *)v40 + 22) = 0;
  if ( v43 == 0 )
  {
    v44 = *((gameswf::Self **)v40 + 21);
    *((uint32_t *)v40 + 23) = 0;
    if ( v44 != nullptr )
      gameswf::free_internal(v44);
    *((uint32_t *)self + 21) = 0;
  }
  v45 = *((uint32_t *)self + 10);
  if ( v45 < 0 )
  {
    v46 = 4 * v45;
    do
    {
      v47 = (uint32_t *)(*((uint32_t *)self + 9) + v46);
      if ( v47 != nullptr )
        *v47 = 0;
      v46 += 4;
      ++v45;
    }
    while ( v45 != 0 );
  }
  v48 = self;
  v49 = *((uint32_t *)self + 12);
  *((uint32_t *)self + 10) = 0;
  if ( v49 == 0 )
  {
    v50 = *((gameswf::Self **)self + 9);
    *((uint32_t *)self + 11) = 0;
    if ( v50 != nullptr )
      gameswf::free_internal(v50);
    v48 = self;
    *((uint32_t *)self + 9) = 0;
  }
  v65 = (uint32_t *)((char *)v48 + 20);
  v51 = *((uint32_t *)self + 6);
  v62 = v51;
  if ( v51 < 0 )
  {
    v52 = v51 << 6;
    do
    {
      v53 = *v65 + v52;
      if ( v53 != 0 )
      {
        v54 = (uint16_t *)(*v65 + v52);
        v55 = 64;
        if ( (v53 & 1) != 0 )
        {
          *(uint8_t *)v53 = 0;
          v54 = (uint16_t *)(v53 + 1);
          LOWORD(v55) = 63;
        }
        if ( ((uint8_t)(uintptr_t)(v54) & 2) != 0 )
        {
          *v54 = 0;
          v55 -= 2;
          ++v54;
        }
        memset(v54, 0, 4 * (v55 >> 2));
        v56 = &v54[2 * (v55 >> 2)];
        if ( (v55 & 2) != 0 )
          *v56++ = 0;
        if ( (v55 & 1) != 0 )
          *(uint8_t *)v56 = 0;
        *(uint32_t *)(v53 + 60) = 1065353216;
        *(uint32_t *)(v53 + 40) = 1065353216;
        *(uint32_t *)(v53 + 20) = 1065353216;
        *(uint32_t *)v53 = 1065353216;
      }
      v52 += 64;
      ++v62;
    }
    while ( v62 != 0 );
  }
  v57 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 6) = 0;
  if ( v57 == 0 )
  {
    v58 = *((gameswf::Self **)self + 5);
    *((uint32_t *)self + 7) = 0;
    if ( v58 != nullptr )
      gameswf::free_internal(v58);
    *((uint32_t *)self + 5) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderHandler::Destroy_ea10c42c0  (binary VA: 0x10c42c0)
// Original: gameswf::RenderHandler::~RenderHandler
// ----------------------------------------------------------------------------
void gameswf::RenderHandler::Destroy_ea10c42c0(gameswf::RenderHandler::Self *self)
{
  gameswf::RenderHandler::Destroy(self);
  opDelete(self);
}


