#include "Core/Utils/DecompTypes.h"
#include "gameswf_Matrix.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Matrix::setLerp  (binary VA: 0x1067d50)
// Original: gameswf::Matrix::setLerp
// ----------------------------------------------------------------------------
gameswf::Matrix::Self * gameswf::Matrix::setLerp(gameswf::Matrix::Self *self, const gameswf::Matrix::Self *a2, const gameswf::Matrix::Self *a3, float a4)
{
  gameswf::Matrix::Self *result;
  __m128 v5;
  uint32_t v6; // xmm0_4
  __m128 v7;
  uint32_t v8; // xmm0_4
  __m128 v9;
  uint32_t v10; // xmm0_4
  __m128 v11;
  uint32_t v12; // xmm0_4
  __m128 v13;
  uint32_t v14; // xmm0_4
  __m128 v15;
  result = self;
g4_m128_raw(v5) = *(unsigned int *)a3;
g4_m128_lane<float>(v5, 0) = (float)((float)(g4_m128_lane<float>(v5, 0) - *(float *)a2) * a4) + *(float *)a2;
  if (g4_m128_lane<float>(v5, 0) < -3.4028235e38f )
    v6 = 0;
  else
    v6 =g4_m128_lane<int32_t>(v5, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v5, *(__m128 *)&dword_1C7B5E0), 0);
  *(uint32_t *)self = v6;
g4_m128_raw(v7) = *((unsigned int *)a3 + 3);
g4_m128_lane<float>(v7, 0) = (float)((float)(g4_m128_lane<float>(v7, 0) - *((float *)a2 + 3)) * a4) + *((float *)a2 + 3);
  if (g4_m128_lane<float>(v7, 0) < -3.4028235e38f )
    v8 = 0;
  else
    v8 =g4_m128_lane<int32_t>(v7, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v7, *(__m128 *)&dword_1C7B5E0), 0);
  *((uint32_t *)self + 3) = v8;
g4_m128_raw(v9) = *((unsigned int *)a3 + 1);
g4_m128_lane<float>(v9, 0) = (float)((float)(g4_m128_lane<float>(v9, 0) - *((float *)a2 + 1)) * a4) + *((float *)a2 + 1);
  if (g4_m128_lane<float>(v9, 0) < -3.4028235e38f )
    v10 = 0;
  else
    v10 =g4_m128_lane<int32_t>(v9, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v9, *(__m128 *)&dword_1C7B5E0), 0);
  *((uint32_t *)self + 1) = v10;
g4_m128_raw(v11) = *((unsigned int *)a3 + 4);
g4_m128_lane<float>(v11, 0) = (float)((float)(g4_m128_lane<float>(v11, 0) - *((float *)a2 + 4)) * a4) + *((float *)a2 + 4);
  if (g4_m128_lane<float>(v11, 0) < -3.4028235e38f )
    v12 = 0;
  else
    v12 =g4_m128_lane<int32_t>(v11, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v11, *(__m128 *)&dword_1C7B5E0), 0);
  *((uint32_t *)self + 4) = v12;
g4_m128_raw(v13) = *((unsigned int *)a3 + 2);
g4_m128_lane<float>(v13, 0) = (float)((float)(g4_m128_lane<float>(v13, 0) - *((float *)a2 + 2)) * a4) + *((float *)a2 + 2);
  if (g4_m128_lane<float>(v13, 0) < -3.4028235e38f )
    v14 = 0;
  else
    v14 =g4_m128_lane<int32_t>(v13, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v13, *(__m128 *)&dword_1C7B5E0), 0);
  *((uint32_t *)self + 2) = v14;
g4_m128_raw(v15) = *((unsigned int *)a3 + 5);
g4_m128_lane<float>(v15, 0) = (float)((float)(g4_m128_lane<float>(v15, 0) - *((float *)a2 + 5)) * a4) + *((float *)a2 + 5);
  if (g4_m128_lane<float>(v15, 0) < -3.4028235e38f )
    *((uint32_t *)self + 5) = 0;
  else
    *((uint32_t *)self + 5) =g4_m128_lane<int32_t>(v15, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v15, *(__m128 *)&dword_1C7B5E0), 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Matrix::setScaleRotation  (binary VA: 0x1067ee0)
// Original: gameswf::Matrix::setScaleRotation
// ----------------------------------------------------------------------------
void gameswf::Matrix::setScaleRotation(gameswf::Matrix::Self *self, unsigned int a2, unsigned int a3, float x)
{
  float v4; // xmm4_4
  __m128 v5;
  __m128 v6;
  __m128 v7;
  uint32_t v8; // xmm0_4
  __m128 v9;
  float v10;
  float v11;

  v10 = cosf(x);
  v4 = v10;
  v11 = sinf(x);
g4_m128_raw(v5) = a2;
g4_m128_raw(v6) = LODWORD(v11);
  if ( (float)(*(float *)&a2 * v4) < -3.4028235e38f )
  {
g4_m128_lane<int32_t>(v5, 0) = 0;
  }
  else
  {
g4_m128_lane<float>(v5, 0) = *(float *)&a2 * v4;
g4_m128_lane<int32_t>(v5, 0) = COERCE_UNSIGNED_INT(*(float *)&a2 * v4) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v5, *(__m128 *)&dword_1C7B5E0), 0);
  }
  v7 = _mm_xor_ps(g4_m128_from<__m128>(0x80000000), g4_m128_from<__m128>(LODWORD(v11)));
g4_m128_lane<float>(v7, 0) =g4_m128_lane<float>(v7, 0) * *(float *)&a3;
  *(uint32_t *)self =g4_m128_lane<int32_t>(v5, 0);
  if (g4_m128_lane<float>(v7, 0) < -3.4028235e38f )
    v8 = 0;
  else
    v8 =g4_m128_lane<int32_t>(v7, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v7, *(__m128 *)&dword_1C7B5E0), 0);
  *((uint32_t *)self + 1) = v8;
  if ( (float)(v11 * *(float *)&a2) < -3.4028235e38f )
  {
g4_m128_lane<int32_t>(v6, 0) = 0;
  }
  else
  {
g4_m128_lane<float>(v6, 0) = v11 * *(float *)&a2;
g4_m128_lane<int32_t>(v6, 0) = COERCE_UNSIGNED_INT(v11 * *(float *)&a2) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0), 0);
  }
g4_m128_raw(v9) = a3;
  *((uint32_t *)self + 3) =g4_m128_lane<int32_t>(v6, 0);
  if ( (float)(*(float *)&a3 * v4) < -3.4028235e38f )
  {
g4_m128_lane<int32_t>(v9, 0) = 0;
  }
  else
  {
g4_m128_lane<float>(v9, 0) = *(float *)&a3 * v4;
g4_m128_lane<int32_t>(v9, 0) = COERCE_UNSIGNED_INT(*(float *)&a3 * v4) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v9, *(__m128 *)&dword_1C7B5E0), 0);
  }
  *((uint32_t *)self + 4) =g4_m128_lane<int32_t>(v9, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Matrix::read  (binary VA: 0x1068000)
// Original: gameswf::Matrix::read
// ----------------------------------------------------------------------------
int gameswf::Matrix::read(__m128 a1, gameswf::Matrix::Self *self, gameswf::Stream::Self *a3)
{
  gameswf::Matrix::Self *v3;
  unsigned int v4;
  uint16_t *v5;
  int result;
  int v7;
  __m128 v8;
  uint32_t v9; // xmm0_4
  int v10;
  __m128 v11;
  int UInt;
  __m128 v13;
  v3 = self;
  gameswf::Stream::align(a3);
  v4 = 24;
  if ( ((uint8_t)(uintptr_t)self & 1) != 0 )
  {
    v3 = (gameswf::Matrix::Self *)((char *)self + 1);
    *(uint8_t *)self = 0;
    LOBYTE(v4) = 23;
    if ( (((unsigned int)(uintptr_t)(self) + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)self & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v3 = 0;
  v4 -= 2;
  v3 = (gameswf::Matrix::Self *)((char *)v3 + 2);
LABEL_3:
  memset(v3, 0, 4 * (v4 >> 2));
  v5 = (uint16_t *)((char *)v3 + 4 * (v4 >> 2));
  if ( (v4 & 2) != 0 )
    *v5++ = 0;
  if ( (v4 & 1) != 0 )
    *(uint8_t *)v5 = 0;
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 4) = 1065353216;
  if ( gameswf::Stream::readUInt(a3, 1) != 0 )
  {
    UInt = gameswf::Stream::readUInt(a3, 5);
g4_m128_lane<float>(a1, 0) = (float)(int)gameswf::Stream::readSInt(a3, UInt) * 0.000015258789f;
    if (g4_m128_lane<float>(a1, 0) >= -3.4028235e38f )
      v13 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
    else
g4_m128_raw(v13) = 0;
    *(uint32_t *)self =g4_m128_lane<int32_t>(v13, 0);
g4_m128_lane<float>(v13, 0) = (float)(int)gameswf::Stream::readSInt(a3, UInt) * 0.000015258789f;
    if (g4_m128_lane<float>(v13, 0) < -3.4028235e38f )
g4_m128_raw(a1) = 0;
    else
      a1 = _mm_and_ps(v13, _mm_cmple_ss(v13, *(__m128 *)&dword_1C7B5E0));
    *((uint32_t *)self + 4) =g4_m128_lane<int32_t>(a1, 0);
  }
  if ( gameswf::Stream::readUInt(a3, 1) != 0 )
  {
    v10 = gameswf::Stream::readUInt(a3, 5);
g4_m128_lane<float>(a1, 0) = (float)(int)gameswf::Stream::readSInt(a3, v10) * 0.000015258789f;
    if (g4_m128_lane<float>(a1, 0) >= -3.4028235e38f )
      v11 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
    else
g4_m128_raw(v11) = 0;
    *((uint32_t *)self + 3) =g4_m128_lane<int32_t>(v11, 0);
g4_m128_lane<float>(v11, 0) = (float)(int)gameswf::Stream::readSInt(a3, v10) * 0.000015258789f;
    if (g4_m128_lane<float>(v11, 0) < -3.4028235e38f )
g4_m128_raw(a1) = 0;
    else
      a1 = _mm_and_ps(v11, _mm_cmple_ss(v11, *(__m128 *)&dword_1C7B5E0));
    *((uint32_t *)self + 1) =g4_m128_lane<int32_t>(a1, 0);
  }
  result = gameswf::Stream::readUInt(a3, 5);
  v7 = result;
  if ( result > 0 )
  {
g4_m128_lane<float>(a1, 0) = (float)(int)gameswf::Stream::readSInt(a3, result) * 0.05f;
    if (g4_m128_lane<float>(a1, 0) >= -3.4028235e38f )
      v8 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
    else
g4_m128_raw(v8) = 0;
    *((uint32_t *)self + 2) =g4_m128_lane<int32_t>(v8, 0);
    result = gameswf::Stream::readSInt(a3, v7);
g4_m128_lane<float>(v8, 0) = (float)result * 0.05f;
    if (g4_m128_lane<float>(v8, 0) < -3.4028235e38f )
      v9 = 0;
    else
      v9 =g4_m128_lane<int32_t>(v8, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v8, *(__m128 *)&dword_1C7B5E0), 0);
    *((uint32_t *)self + 5) = v9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Matrix::print  (binary VA: 0x10682f0)
// Original: gameswf::Matrix::print
// ----------------------------------------------------------------------------
int gameswf::Matrix::print(gameswf::Matrix::Self *self)
{
  gameswf::logMsg(
    (gameswf::Self *)"| %4.4f %4.4f %4.4f |\n",
    (const char *)COERCE_UNSIGNED_INT64(*(float *)self),
    (uint32_t)HIDWORD(COERCE_UNSIGNED_INT64(*(float *)self)),
    *((float *)self + 1),
    *((float *)self + 2));
  return gameswf::logMsg(
           (gameswf::Self *)"| %4.4f %4.4f %4.4f |\n",
           (const char *)COERCE_UNSIGNED_INT64(*((float *)self + 3)),
           (uint32_t)HIDWORD(COERCE_UNSIGNED_INT64(*((float *)self + 3))),
           *((float *)self + 4),
           *((float *)self + 5));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Matrix::transform  (binary VA: 0x1068380)
// Original: gameswf::Matrix::transform
// ----------------------------------------------------------------------------
gameswf::Rect::Self * gameswf::Matrix::transform(gameswf::Matrix::Self *self, gameswf::Rect::Self *a2)
{
  float v3; // xmm1_4
  float v4; // xmm7_4
  float v5; // xmm6_4
  float v6; // xmm2_4
  float v7; // xmm6_4
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm5_4
  float v13; // xmm1_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19;
  float v20;
  float v21;
  float v22;

  v3 = *((float *)a2 + 2);
  v4 = *((float *)self + 2);
  v20 = *(float *)self * *(float *)a2;
  v5 = *(float *)self * *((float *)a2 + 1);
  v19 = *((float *)self + 5);
  v6 = (float)((float)(*((float *)self + 1) * v3) + v4) + v5;
  v7 = (float)((float)(*((float *)self + 1) * *((float *)a2 + 3)) + v4) + v5;
  v8 = (float)((float)(*((float *)self + 1) * *((float *)a2 + 3)) + v4) + v20;
  v21 = (float)((float)(*((float *)self + 1) * v3) + v4) + v20;
  v9 = *((float *)self + 3);
  v10 = *(float *)a2 * v9;
  v11 = v9 * *((float *)a2 + 1);
  v22 = v10;
  v12 = *((float *)self + 4);
  v13 = (float)(v3 * v12) + v19;
  v14 = (float)(v12 * *((float *)a2 + 3)) + v19;
  v15 = v22 + v13;
  v16 = v13 + v11;
  v17 = v11 + v14;
  v18 = v14 + v22;
  *(float *)a2 = fminf(fminf(fminf(v21, v6), v7), v8);
  *((float *)a2 + 1) = fmaxf(fmaxf(fmaxf(v6, v21), v7), v8);
  *((float *)a2 + 2) = fminf(fminf(fminf(v15, v16), v17), v18);
  *((float *)a2 + 3) = fmaxf(fmaxf(fmaxf(v16, v15), v17), v18);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Matrix::setInverse  (binary VA: 0x10684a0)
// Original: gameswf::Matrix::setInverse
// ----------------------------------------------------------------------------
int gameswf::Matrix::setInverse(gameswf::Matrix::Self *self, const gameswf::Matrix::Self *a2)
{
  __m128 v2;
  float v3; // xmm0_4
  float v4; // xmm7_4
  float v5; // xmm6_4
  __m128 v6;
  float v7; // xmm5_4
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  uint32_t v13; // xmm1_4
  __m128 v14;
  gameswf::Matrix::Self *v15;
  int result;
  uint16_t *v17;
  __m128 v18;
  uint32_t v19; // xmm0_4
  unsigned int v20;

g4_m128_raw(v2) = *((unsigned int *)a2 + 4);
  v3 = (float)(*(float *)a2 *g4_m128_lane<float>(v2, 0)) - (float)(*((float *)a2 + 3) * *((float *)a2 + 1));
  if ( v3 == 0.0 )
  {
    v15 = self;
    v20 = 24;
    if ( ((uint8_t)(uintptr_t)self & 1) != 0 )
    {
      *(uint8_t *)self = 0;
      v15 = (gameswf::Matrix::Self *)((char *)self + 1);
      v20 = 23;
    }
    if ( ((uint8_t)(uintptr_t)v15 & 2) != 0 )
    {
      *(uint16_t *)v15 = 0;
      v15 = (gameswf::Matrix::Self *)((char *)v15 + 2);
      v20 -= 2;
    }
    result = 0;
    memset(v15, 0, 4 * (v20 >> 2));
    v17 = (uint16_t *)((char *)v15 + 4 * (v20 >> 2));
    if ( (v20 & 2) != 0 )
      *v17++ = 0;
    if ( (v20 & 1) != 0 )
      *(uint8_t *)v17 = 0;
    *(uint32_t *)self = 1065353216;
    *((uint32_t *)self + 4) = 1065353216;
    v18 = _mm_xor_ps(g4_m128_u32(*((unsigned int *)a2 + 2)), g4_m128_from<__m128>(0x80000000));
    if (g4_m128_lane<float>(v18, 0) >= -3.4028235e38f )
      v19 =g4_m128_lane<int32_t>(v18, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v18, *(__m128 *)&dword_1C7B5E0), 0);
    else
      v19 = 0;
    *((uint32_t *)self + 2) = v19;
    v14 = _mm_xor_ps(g4_m128_u32(*((unsigned int *)a2 + 5)), g4_m128_from<__m128>(0x80000000));
    if (g4_m128_lane<float>(v14, 0) < -3.4028235e38f )
      goto LABEL_13;
  }
  else
  {
    v4 = 1.0 / v3;
g4_m128_lane<float>(v2, 0) =g4_m128_lane<float>(v2, 0) * (float)(1.0 / v3);
    if (g4_m128_lane<float>(v2, 0) >= -3.4028235e38f )
      LODWORD(v5) =g4_m128_lane<int32_t>(v2, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v2, *(__m128 *)&dword_1C7B5E0), 0);
    else
      v5 = 0.0;
    *(float *)self = v5;
g4_m128_raw(v6) = *(unsigned int *)a2;
g4_m128_lane<float>(v6, 0) =g4_m128_lane<float>(v6, 0) * v4;
    if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
      v7 = 0.0;
    else
      LODWORD(v7) =g4_m128_lane<int32_t>(v6, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0), 0);
    *((float *)self + 4) = v7;
    v8 = _mm_xor_ps(g4_m128_u32(*((unsigned int *)a2 + 1)), g4_m128_from<__m128>(0x80000000));
g4_m128_lane<float>(v8, 0) =g4_m128_lane<float>(v8, 0) * v4;
    if (g4_m128_lane<float>(v8, 0) < -3.4028235e38f )
g4_m128_raw(v9) = 0;
    else
      v9 = _mm_and_ps(v8, _mm_cmple_ss(v8, *(__m128 *)&dword_1C7B5E0));
    *((uint32_t *)self + 1) =g4_m128_lane<int32_t>(v9, 0);
    v10 = _mm_xor_ps(g4_m128_u32(*((unsigned int *)a2 + 3)), g4_m128_from<__m128>(0x80000000));
g4_m128_lane<float>(v10, 0) =g4_m128_lane<float>(v10, 0) * v4;
    if (g4_m128_lane<float>(v10, 0) < -3.4028235e38f )
g4_m128_raw(v11) = 0;
    else
      v11 = _mm_and_ps(v10, _mm_cmple_ss(v10, *(__m128 *)&dword_1C7B5E0));
    *((uint32_t *)self + 3) =g4_m128_lane<int32_t>(v11, 0);
g4_m128_lane<float>(v9, 0) = (float)(g4_m128_lane<float>(v9, 0) * *((float *)a2 + 5)) + (float)(v5 * *((float *)a2 + 2));
    v12 = _mm_xor_ps(v9, g4_m128_from<__m128>(0x80000000));
    if (g4_m128_lane<float>(v12, 0) < -3.4028235e38f )
      v13 = 0;
    else
      v13 =g4_m128_lane<int32_t>(v12, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v12, *(__m128 *)&dword_1C7B5E0), 0);
    *((uint32_t *)self + 2) = v13;
g4_m128_lane<float>(v11, 0) = (float)(g4_m128_lane<float>(v11, 0) * *((float *)a2 + 2)) + (float)(v7 * *((float *)a2 + 5));
    v14 = _mm_xor_ps(v11, g4_m128_from<__m128>(0x80000000));
    if (g4_m128_lane<float>(v14, 0) < -3.4028235e38f )
    {
LABEL_13:
      *((uint32_t *)self + 5) = 0;
      return result;
    }
  }
  *((uint32_t *)self + 5) =g4_m128_lane<int32_t>(v14, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v14, *(__m128 *)&dword_1C7B5E0), 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Matrix::doesFlip  (binary VA: 0x1068710)
// Original: gameswf::Matrix::doesFlip
// ----------------------------------------------------------------------------
bool gameswf::Matrix::doesFlip(gameswf::Matrix::Self *self)
{
  return (float)((float)(*((float *)self + 4) * *(float *)self) - (float)(*((float *)self + 3) * *((float *)self + 1))) < 0.0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Matrix::getRotation  (binary VA: 0x1068740)
// Original: gameswf::Matrix::getRotation
// ----------------------------------------------------------------------------
long double gameswf::Matrix::getRotation(gameswf::Matrix::Self *self)
{
  float v1; // xmm1_4

  v1 = *((float *)self + 3);
  if ( (float)((float)(*((float *)self + 4) * *(float *)self) - (float)(*((float *)self + 1) * v1)) < 0.0 )
    return atan2f(v1, -*(float *)self);
  else
    return atan2f(v1, *(float *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Matrix::concatenate  (binary VA: 0x10aa410)
// Original: gameswf::Matrix::concatenate
// ----------------------------------------------------------------------------
gameswf::Matrix::Self * gameswf::Matrix::concatenate(gameswf::Matrix::Self *self, const gameswf::Matrix::Self *a2)
{
  gameswf::Matrix::Self *result;
  __m128 v3;
  __m128 v4;
  float v5; // xmm4_4
  __m128 v6;
  uint32_t v7; // xmm2_4
  __m128 v8;
  float v9; // xmm2_4
  uint32_t v10; // xmm1_4
  __m128 v11;
  __m128 v12;
  uint32_t v13; // xmm1_4
  uint32_t v14; // xmm6_4
  float v15; // xmm1_4
  float v16; // xmm6_4
  uint32_t v17; // xmm5_4
  uint32_t v18; // xmm3_4
  float v19;
  uint32_t v20;
  uint32_t v21;
  uint32_t v22;
  uint32_t v23;

  result = self;
g4_m128_raw(v3) = *((unsigned int *)a2 + 3);
g4_m128_raw(v4) = *(unsigned int *)self;
  v6 = v3;
  v5 = *((float *)self + 1);
g4_m128_lane<float>(v6, 0) = (float)(g4_m128_lane<float>(v3, 0) * v5) + (float)(*(float *)a2 *g4_m128_lane<float>(v4, 0));
  if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
    v7 = 0;
  else
    v7 =g4_m128_lane<int32_t>(v6, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0), 0);
  v20 = v7;
g4_m128_raw(v8) = *((unsigned int *)self + 3);
  v9 = *((float *)self + 4);
g4_m128_lane<float>(v3, 0) = (float)(g4_m128_lane<float>(v3, 0) * v9) + (float)(*(float *)a2 *g4_m128_lane<float>(v8, 0));
  if (g4_m128_lane<float>(v3, 0) < -3.4028235e38f )
    v10 = 0;
  else
    v10 =g4_m128_lane<int32_t>(v3, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v3, *(__m128 *)&dword_1C7B5E0), 0);
  v22 = v10;
  v19 = *((float *)a2 + 1);
g4_m128_raw(v11) = *((unsigned int *)a2 + 4);
  v12 = v11;
g4_m128_lane<float>(v12, 0) = (float)(g4_m128_lane<float>(v11, 0) * v5) + (float)(v19 *g4_m128_lane<float>(v4, 0));
  if (g4_m128_lane<float>(v12, 0) < -3.4028235e38f )
    v13 = 0;
  else
    v13 =g4_m128_lane<int32_t>(v12, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v12, *(__m128 *)&dword_1C7B5E0), 0);
  v21 = v13;
g4_m128_lane<float>(v11, 0) = (float)(g4_m128_lane<float>(v11, 0) * v9) + (float)(v19 *g4_m128_lane<float>(v8, 0));
  if (g4_m128_lane<float>(v11, 0) < -3.4028235e38f )
    v14 = 0;
  else
    v14 =g4_m128_lane<int32_t>(v11, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v11, *(__m128 *)&dword_1C7B5E0), 0);
  v23 = v14;
  v15 = *((float *)a2 + 5);
  v16 = *((float *)a2 + 2);
g4_m128_lane<float>(v4, 0) = (float)((float)(g4_m128_lane<float>(v4, 0) * v16) + (float)(v5 * v15)) + *((float *)self + 2);
  if (g4_m128_lane<float>(v4, 0) < -3.4028235e38f )
    v17 = 0;
  else
    v17 =g4_m128_lane<int32_t>(v4, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v4, *(__m128 *)&dword_1C7B5E0), 0);
g4_m128_lane<float>(v8, 0) = (float)((float)(g4_m128_lane<float>(v8, 0) * v16) + (float)(v9 * v15)) + *((float *)self + 5);
  if (g4_m128_lane<float>(v8, 0) < -3.4028235e38f )
    v18 = 0;
  else
    v18 =g4_m128_lane<int32_t>(v8, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v8, *(__m128 *)&dword_1C7B5E0), 0);
  *(uint32_t *)self = v20;
  *((uint32_t *)self + 1) = v21;
  *((uint32_t *)self + 2) = v17;
  *((uint32_t *)self + 3) = v22;
  *((uint32_t *)self + 4) = v23;
  *((uint32_t *)self + 5) = v18;
  return result;
}


