#include "Core/Utils/DecompTypes.h"
#include "gameswf_Transform.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_Transform.cpp
// Library: gameswf | Module: gameswf_Transform
// Binary Address Span: 0x1069460 .. 0x1163280 (7 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1069460 (size: 208 bytes)
// Symbol:    _ZN7gameswf9TransformC2ERKNS_6MatrixE
// Demangled: gameswf::Transform::Transform(gameswf::Matrix const&)
// ============================================================================
// Alternative name is '_ZN7gameswf9TransformC1ERKNS_6MatrixE'
struct gameswf::Transform::Self *gameswf::Transform::Transform(gameswf::Transform::Self *self, const gameswf::Matrix::Self *a2)
{
  gameswf::Transform::Self *v2;
  unsigned int v3;
  uint16_t *v4;
  struct gameswf::Transform::Self *result;

  v2 = self;
  v3 = 64;
  if ( ((uint8_t)(uintptr_t)self & 1) != 0 )
  {
    v2 = (gameswf::Transform::Self *)((char *)self + 1);
    *(uint8_t *)self = 0;
    LOWORD(v3) = 63;
    if ( (((unsigned int)(uintptr_t)(self) + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)self & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v2 = 0;
  v3 -= 2;
  v2 = (gameswf::Transform::Self *)((char *)v2 + 2);
LABEL_3:
  memset(v2, 0, 4 * (v3 >> 2));
  v4 = (uint16_t *)((char *)v2 + 4 * (v3 >> 2));
  if ( (v3 & 2) != 0 )
    *v4++ = 0;
  if ( (v3 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  *((uint32_t *)self + 5) = 1065353216;
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 15) = 1065353216;
  *((uint32_t *)self + 10) = 1065353216;
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 2);
  result = *((struct gameswf::Transform::Self **)a2 + 5);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(result);
  return result;
}
// ----------------------------------------------------------------------------
// Function: gameswf::Transform::postTranslate  (binary VA: 0x1069530)
// Original: gameswf::Transform::postTranslate
// ----------------------------------------------------------------------------
float * gameswf::Transform::postTranslate(gameswf::Transform::Self *self, float a2, float a3, float a4)
{
  float *result;
  float v5; // xmm4_4
  float v6; // xmm1_4
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm0_4

  result = (float *)self;
  v5 = *((float *)self + 5) * a3;
  *((float *)self + 3) = (float)((float)((float)(*(float *)self * a2) + *((float *)self + 3))
                               + (float)(*((float *)self + 1) * a3))
                       + (float)(*((float *)self + 2) * a4);
  v6 = (float)((float)((float)(result[4] * a2) + result[7]) + v5) + (float)(result[6] * a4);
  v7 = *((float *)self + 9) * a3;
  v8 = a3 * *((float *)self + 13);
  *((float *)self + 7) = v6;
  v9 = (float)((float)((float)(a2 * result[12]) + result[15]) + v8) + (float)(a4 * *((float *)self + 14));
  *((float *)self + 11) = (float)((float)((float)(*((float *)self + 8) * a2) + *((float *)self + 11)) + v7)
                        + (float)(*((float *)self + 10) * a4);
  *((float *)self + 15) = v9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Transform::postMultiply  (binary VA: 0x10695f0)
// Original: gameswf::Transform::postMultiply
// ----------------------------------------------------------------------------
int gameswf::Transform::postMultiply(gameswf::Transform::Self *self, const gameswf::Transform::Self *a2)
{
  float v2; // xmm6_4
  float v3; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm5_4
  float v6; // xmm1_4
  float v7; // xmm4_4
  float v8; // xmm7_4
  float v9; // xmm0_4
  float v10; // xmm7_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm7_4
  float v14; // xmm4_4
  float v15; // xmm6_4
  float v16; // xmm6_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm5_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm5_4
  float v24; // xmm0_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm4_4
  float v30; // xmm0_4
  float v31; // xmm6_4
  float v32; // xmm3_4
  float v33; // xmm6_4
  float v34; // xmm0_4
  float v35; // xmm7_4
  float v36; // xmm5_4
  float v37; // xmm0_4
  float v38; // xmm6_4
  float v39; // xmm5_4
  float v40; // xmm0_4
  float v41; // xmm6_4
  float v42; // xmm4_4
  float v43; // xmm7_4
  float v44; // xmm2_4
  float v45; // xmm6_4
  float v46; // xmm3_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm2_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float v54; // xmm5_4
  float v55; // xmm4_4
  float v56; // xmm3_4
  float v57; // xmm5_4
  float v58; // xmm0_4
  int result;
  float v60[16];

  memset(v60, 0, sizeof(v60));
  v2 = *(float *)a2;
  v3 = *(float *)self;
  v4 = *((float *)a2 + 12);
  v5 = *((float *)a2 + 4);
  v6 = *((float *)self + 1);
  v7 = *((float *)a2 + 8);
  v8 = *((float *)self + 7) * v4;
  v60[0] = (float)((float)((float)((float)(*(float *)a2 * *(float *)self) + v60[0]) + (float)(*((float *)self + 3) * v4))
                 + (float)(v5 * v6))
         + (float)(*((float *)self + 2) * v7);
  v9 = (float)((float)((float)((float)(*((float *)self + 4) * v2) + v60[4]) + v8) + (float)(*((float *)self + 6) * v7))
     + (float)(*((float *)self + 5) * v5);
  v10 = *((float *)self + 11) * v4;
  v11 = v4 * *((float *)self + 15);
  v60[4] = v9;
  v12 = (float)((float)(*((float *)self + 8) * v2) + v60[8]) + v10;
  v13 = *((float *)self + 10) * v7;
  v14 = v7 * *((float *)self + 14);
  v15 = (float)((float)(v2 * *((float *)self + 12)) + v60[12]) + (float)(v5 * *((float *)self + 13));
  v60[8] = (float)(v12 + v13) + (float)(*((float *)self + 9) * v5);
  v60[12] = (float)(v15 + v14) + v11;
  v16 = *((float *)a2 + 1);
  v17 = *((float *)a2 + 13);
  v18 = *((float *)a2 + 5);
  v19 = *((float *)a2 + 9);
  v20 = *((float *)self + 6) * v19;
  v60[1] = (float)((float)((float)((float)(v16 * v3) + v60[1]) + (float)(*((float *)self + 3) * v17)) + (float)(v18 * v6))
         + (float)(*((float *)self + 2) * v19);
  v21 = (float)((float)((float)((float)(*((float *)self + 4) * v16) + v60[5]) + v20)
              + (float)(*((float *)self + 7) * v17))
      + (float)(*((float *)self + 5) * v18);
  v22 = *((float *)self + 10) * v19;
  v23 = v19 * *((float *)self + 14);
  v60[5] = v21;
  v24 = (float)((float)(*((float *)self + 8) * v16) + v60[9]) + v22;
  v25 = (float)((float)(v16 * *((float *)self + 12)) + v60[13]) + v23;
  v26 = *((float *)a2 + 6);
  v27 = v24 + (float)(*((float *)self + 11) * v17);
  v28 = v25 + (float)(v17 * *((float *)self + 15));
  v29 = *((float *)a2 + 10);
  v30 = v27 + (float)(*((float *)self + 9) * v18);
  v31 = v28 + (float)(v18 * *((float *)self + 13));
  v32 = *((float *)a2 + 14);
  v60[9] = v30;
  v60[13] = v31;
  v33 = *((float *)a2 + 2);
  v60[2] = (float)((float)((float)((float)(v33 * v3) + v60[2]) + (float)(v26 * v6)) + (float)(*((float *)self + 2) * v29))
         + (float)(*((float *)self + 3) * v32);
  v34 = (float)((float)((float)((float)(*((float *)self + 4) * v33) + v60[6]) + (float)(*((float *)self + 5) * v26))
              + (float)(*((float *)self + 6) * v29))
      + (float)(*((float *)self + 7) * v32);
  v35 = *((float *)self + 9) * v26;
  v36 = v26 * *((float *)self + 13);
  v60[6] = v34;
  v37 = (float)((float)(*((float *)self + 8) * v33) + v60[10]) + v35;
  v38 = (float)((float)(v33 * *((float *)self + 12)) + v60[14]) + v36;
  v39 = *((float *)a2 + 3);
  v40 = v37 + (float)(*((float *)self + 10) * v29);
  v41 = v38 + (float)(v29 * *((float *)self + 14));
  v42 = *((float *)a2 + 7);
  v43 = *((float *)self + 11) * v32;
  v44 = (float)((float)(v3 * v39) + v60[3]) + (float)(v6 * v42);
  v45 = v41 + (float)(v32 * *((float *)self + 15));
  v46 = *((float *)a2 + 11);
  v47 = *((float *)self + 2) * v46;
  v60[10] = v40 + v43;
  v48 = v44 + v47;
  v49 = *((float *)a2 + 15);
  v50 = *((float *)self + 3) * v49;
  v60[14] = v45;
  v51 = v48 + v50;
  v52 = *((float *)self + 4) * v39;
  v60[3] = v51;
  v53 = *((float *)self + 9) * v42;
  v60[7] = (float)((float)((float)(v52 + v60[7]) + (float)(*((float *)self + 5) * v42))
                 + (float)(*((float *)self + 6) * v46))
         + (float)(*((float *)self + 7) * v49);
  v60[11] = (float)((float)((float)((float)(*((float *)self + 8) * v39) + v60[11]) + v53)
                  + (float)(*((float *)self + 10) * v46))
          + (float)(*((float *)self + 11) * v49);
  v54 = v39 * *((float *)self + 12);
  *(float *)self = v60[0];
  v55 = v42 * *((float *)self + 13);
  v56 = v46 * *((float *)self + 14);
  *((float *)self + 1) = v60[1];
  v57 = v54 + v60[15];
  *((float *)self + 2) = v60[2];
  *((float *)self + 3) = v60[3];
  v58 = v49 * *((float *)self + 15);
  *((float *)self + 4) = v60[4];
  *((float *)self + 5) = v60[5];
  *((float *)self + 6) = v60[6];
  *((float *)self + 7) = v60[7];
  *((float *)self + 8) = v60[8];
  *((float *)self + 9) = v60[9];
  *((float *)self + 10) = v60[10];
  *((float *)self + 11) = v60[11];
  *((float *)self + 12) = v60[12];
  v60[15] = (float)((float)(v57 + v55) + v56) + v58;
  *((float *)self + 13) = v60[13];
  *((float *)self + 14) = v60[14];
  result = LODWORD(v60[15]);
  *((float *)self + 15) = v60[15];
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Transform::postRotateQuat  (binary VA: 0x1069a40)
// Original: gameswf::Transform::postRotateQuat
// ----------------------------------------------------------------------------
int gameswf::Transform::postRotateQuat(gameswf::Transform::Self *self, float a2, float a3, float a4, float a5)
{
  float v5; // xmm7_4
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  typedef float _g4_t_v12;
  typedef float _g4_t_v13;
  typedef float _g4_t_v14;
  typedef float _g4_t_v15;
  typedef float _g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19[19];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v19)) > _g4_s7 ? (32u + sizeof(_g4_t_v19)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);

  v15 = a2;
  v16 = a3;
  v17 = a4;
  v18 = a5;
  gameswf::Quaternion::normalize((gameswf::Quaternion::Self *)&v15);
  v5 = v16 * v15;
  v12 = v15 * v15;
  v6 = v17 * v15;
  v7 = v17 * v17;
  memset(v19, 0, 0x40u);
  v13 = v15 * v18;
  v19[15] = 1.0;
  v14 = v16 * v16;
  v8 = v17 * v16;
  v9 = v17 * v18;
  v10 = v16 * v18;
  v19[0] = 1.0 - (float)((float)(v14 + v7) + (float)(v14 + v7));
  v19[1] = (float)(v5 - v9) + (float)(v5 - v9);
  v19[4] = (float)(v9 + v5) + (float)(v9 + v5);
  v19[5] = 1.0 - (float)((float)(v7 + v12) + (float)(v7 + v12));
  v19[2] = (float)(v10 + v6) + (float)(v10 + v6);
  v19[8] = (float)(v6 - v10) + (float)(v6 - v10);
  v19[6] = (float)(v8 - v13) + (float)(v8 - v13);
  v19[9] = (float)(v8 + v13) + (float)(v8 + v13);
  v19[10] = 1.0 - (float)((float)(v14 + v12) + (float)(v14 + v12));
  return gameswf::Transform::postMultiply(self, (const gameswf::Transform::Self *)v19);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Transform::invert  (binary VA: 0x1069be0)
// Original: gameswf::Transform::invert
// ----------------------------------------------------------------------------
float * gameswf::Transform::invert(gameswf::Transform::Self *self)
{
  float *result;
  float v2; // xmm5_4
  float v3; // xmm6_4
  float v4; // xmm4_4
  float v5; // xmm6_4
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
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
  float v33;
  __m128 v34;
  __m128 v35;
  __m128 v36;
  __m128 v37;

  result = (float *)self;
  v2 = *((float *)self + 9);
  v3 = *((float *)self + 13);
  v30 = result[15] * result[10];
  v28 = result[14] * result[11];
  v26 = result[15] * result[6];
  v24 = result[14] * result[7];
  v22 = result[11] * result[6];
  v20 = result[10] * result[7];
  v18 = result[15] * result[2];
  v16 = result[14] * result[3];
  v15 = result[11] * result[2];
  v14 = result[10] * result[3];
  v13 = result[7] * result[2];
  v12 = result[6] * result[3];
g4_m128_lane<float>(v34, 0) = (float)((float)((float)((float)((float)(v24 * v2) + (float)(v30 * *((float *)self + 5)))
                                          + (float)(v22 * v3))
                                  - (float)(v28 * *((float *)self + 5)))
                          - (float)(v20 * v3))
                  - (float)(v26 * v2);
g4_m128_lane<float>(v34, 1) = (float)((float)((float)((float)((float)(v18 * v2) + (float)(v28 * *((float *)self + 1)))
                                          + (float)(v14 * v3))
                                  - (float)(v15 * v3))
                          - (float)(v16 * v2))
                  - (float)(v30 * *((float *)self + 1));
g4_m128_lane<float>(v34, 2) = (float)((float)((float)((float)((float)(v16 * *((float *)self + 5))
                                                  + (float)(v26 * *((float *)self + 1)))
                                          + (float)(v13 * v3))
                                  - (float)(v12 * v3))
                          - (float)(v18 * result[5]))
                  - (float)(v24 * result[1]);
g4_m128_lane<float>(v34, 3) = (float)((float)((float)((float)((float)(v15 * result[5]) + (float)(v20 * result[1]))
                                          + (float)(v12 * v2))
                                  - (float)(v13 * v2))
                          - (float)(v14 * result[5]))
                  - (float)(v22 * result[1]);
g4_m128_lane<float>(v35, 0) = (float)((float)((float)((float)((float)(v26 * result[8]) + (float)(v28 * result[4]))
                                          + (float)(v20 * *((float *)self + 12)))
                                  - (float)(v24 * result[8]))
                          - (float)(v22 * result[12]))
                  - (float)(v30 * result[4]);
g4_m128_lane<float>(v35, 1) = (float)((float)((float)((float)((float)(v16 * result[8]) + (float)(v30 * *(float *)self))
                                          + (float)(v15 * result[12]))
                                  - (float)(v18 * result[8]))
                          - (float)(v14 * result[12]))
                  - (float)(v28 * *result);
g4_m128_lane<float>(v35, 2) = (float)((float)((float)((float)((float)(v18 * result[4]) + (float)(v24 * *result))
                                          + (float)(v12 * result[12]))
                                  - (float)(v26 * *result))
                          - (float)(v16 * result[4]))
                  - (float)(v13 * result[12]);
  v31 = *((float *)self + 12) * v2;
g4_m128_lane<float>(v35, 3) = (float)((float)((float)((float)((float)(v14 * result[4]) + (float)(v22 * *(float *)self))
                                          + (float)(v13 * result[8]))
                                  - (float)(v20 * *result))
                          - (float)(v15 * result[4]))
                  - (float)(v12 * result[8]);
  v4 = *((float *)self + 8) * v3;
  v29 = *((float *)self + 4) * v3;
  v27 = result[12] * result[5];
  v5 = v3 * *(float *)self;
  v25 = *((float *)self + 4) * v2;
  v19 = v2 * *(float *)self;
  v23 = result[8] * result[5];
  v17 = result[8] * result[1];
  v21 = result[12] * result[1];
  v32 = result[4] * result[1];
  v33 = result[5] * *result;
g4_m128_lane<float>(v36, 0) = (float)((float)((float)((float)((float)(v27 * *((float *)self + 11)) + (float)(result[7] * v4))
                                          + (float)(v25 * result[15]))
                                  - (float)(v31 * result[7]))
                          - (float)(v29 * result[11]))
                  - (float)(v23 * result[15]);
g4_m128_lane<float>(v36, 1) = (float)((float)((float)((float)((float)(result[11] * v5) + (float)(v31 * *((float *)self + 3)))
                                          + (float)(v17 * result[15]))
                                  - (float)(result[3] * v4))
                          - (float)(v21 * result[11]))
                  - (float)(v19 * result[15]);
g4_m128_lane<float>(v36, 2) = (float)((float)((float)((float)((float)(v21 * result[7]) + (float)(v29 * result[3]))
                                          + (float)(v33 * result[15]))
                                  - (float)(v27 * result[3]))
                          - (float)(result[7] * v5))
                  - (float)(v32 * result[15]);
g4_m128_lane<float>(v36, 3) = (float)((float)((float)((float)((float)(v19 * result[7]) + (float)(v23 * *((float *)self + 3)))
                                          + (float)(v32 * result[11]))
                                  - (float)(v25 * result[3]))
                          - (float)(v17 * result[7]))
                  - (float)(v33 * result[11]);
g4_m128_lane<float>(v37, 0) = (float)((float)((float)((float)((float)(v23 * result[14]) + (float)(v29 * *((float *)self + 10)))
                                          + (float)(v31 * result[6]))
                                  - (float)(result[6] * v4))
                          - (float)(v27 * result[10]))
                  - (float)(v25 * *((float *)self + 14));
g4_m128_lane<float>(v37, 1) = (float)((float)((float)((float)((float)(v4 * result[2]) + (float)(v19 * result[14]))
                                          + (float)(v21 * result[10]))
                                  - (float)(*((float *)self + 10) * v5))
                          - (float)(v17 * result[14]))
                  - (float)(v31 * result[2]);
g4_m128_lane<float>(v37, 2) = (float)((float)((float)((float)((float)(v32 * result[14]) + (float)(v5 * *((float *)self + 6)))
                                          + (float)(v27 * *((float *)self + 2)))
                                  - (float)(v33 * result[14]))
                          - (float)(v29 * result[2]))
                  - (float)(v21 * result[6]);
g4_m128_lane<float>(v37, 3) = (float)((float)((float)((float)((float)(v25 * result[2]) + (float)(v33 * *((float *)self + 10)))
                                          + (float)(v17 * result[6]))
                                  - (float)(v19 * result[6]))
                          - (float)(v32 * result[10]))
                  - (float)(v23 * *((float *)self + 2));
g4_m128_raw(v6) = 0x3F800000u;
g4_m128_lane<float>(v6, 0) = 1.0
                 / (float)((float)((float)((float)(g4_m128_lane<float>(v34, 1) * result[4])
                                         + (float)(g4_m128_lane<float>(v34, 0) * *(float *)self))
                                 + (float)(g4_m128_lane<float>(v34, 2) * result[8]))
                         + (float)(g4_m128_lane<float>(v34, 3) * result[12]));
  v7 = _mm_shuffle_ps(v6, v6, 0);
  v8 = _mm_mul_ps(v34, v7);
  _mm_storel_ps((double *)self, v8);
  _mm_storeh_ps((double *)self + 1, v8);
  v9 = _mm_mul_ps(v35, v7);
  _mm_storel_ps((double *)self + 2, v9);
  _mm_storeh_ps((double *)self + 3, v9);
  v10 = _mm_mul_ps(v36, v7);
  v11 = _mm_mul_ps(v7, v37);
  _mm_storel_ps((double *)self + 4, v10);
  _mm_storeh_ps((double *)self + 5, v10);
  _mm_storel_ps((double *)self + 6, v11);
  _mm_storeh_ps((double *)self + 7, v11);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Transform::transform  (binary VA: 0x106a370)
// Original: gameswf::Transform::transform
// ----------------------------------------------------------------------------
int gameswf::Transform::transform(int64_t self, int a2)
{
  int64_t v2; // rax
  int v3;
  float v4; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm2_4

  v2 = self;
  if ( a2 > 0 )
  {
    v3 = 0;
    do
    {
      ++v3;
      v4 = *(float *)(HIDWORD(v2) + 4);
      v5 = *(float *)(HIDWORD(v2) + 8);
      v6 = (float)((float)((float)(*(float *)(self + 16) * *(float *)HIDWORD(v2)) + (float)(*(float *)(self + 20) * v4))
                 + *(float *)(self + 28))
         + (float)(*(float *)(self + 24) * v5);
      v7 = *(float *)(self + 40) * v5;
      v8 = v5 * *(float *)(self + 8);
      v9 = (float)((float)(*(float *)(self + 32) * *(float *)HIDWORD(v2)) + (float)(*(float *)(self + 36) * v4))
         + *(float *)(self + 44);
      v10 = (float)((float)(*(float *)HIDWORD(v2) * *(float *)self) + (float)(v4 * *(float *)(self + 4)))
          + *(float *)(self + 12);
      *(float *)(HIDWORD(v2) + 4) = v6;
      *(float *)(HIDWORD(v2) + 8) = v9 + v7;
      *(float *)HIDWORD(v2) = v10 + v8;
      HIDWORD(v2) += 12;
    }
    while ( v3 != a2 );
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Transform::setIdentity  (binary VA: 0x1163280)
// Original: gameswf::Transform::setIdentity
// ----------------------------------------------------------------------------
int gameswf::Transform::setIdentity(gameswf::Transform::Self *self)
{
  gameswf::Transform::Self *v1;
  unsigned int v2;
  int result;
  uint16_t *v4;

  v1 = self;
  v2 = 64;
  if ( ((uint8_t)(uintptr_t)self & 1) != 0 )
  {
    v1 = (gameswf::Transform::Self *)((char *)self + 1);
    *(uint8_t *)self = 0;
    LOWORD(v2) = 63;
    if ( (((unsigned int)(uintptr_t)(self) + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)self & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v1 = 0;
  v2 -= 2;
  v1 = (gameswf::Transform::Self *)((char *)v1 + 2);
LABEL_3:
  result = 0;
  memset(v1, 0, 4 * (v2 >> 2));
  v4 = (uint16_t *)((char *)v1 + 4 * (v2 >> 2));
  if ( (v2 & 2) != 0 )
    *v4++ = 0;
  if ( (v2 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  *((uint32_t *)self + 15) = 1065353216;
  *((uint32_t *)self + 10) = 1065353216;
  *((uint32_t *)self + 5) = 1065353216;
  *(uint32_t *)self = 1065353216;
  return result;
}


