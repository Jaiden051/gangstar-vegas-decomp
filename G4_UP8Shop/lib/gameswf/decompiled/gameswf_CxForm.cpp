#include "Core/Utils/DecompTypes.h"
#include "gameswf_CxForm.h"

// ----------------------------------------------------------------------------
// Function: gameswf::CxForm::concatenate  (binary VA: 0x10687c0)
// Original: gameswf::CxForm::concatenate
// ----------------------------------------------------------------------------
int64_t gameswf::CxForm::concatenate(int64_t self)
{
  int64_t result; // rax
  __m128 v2;
  __m128 v3;
  uint32_t v4; // xmm1_4
  __m128 v5;
  __m128 v6;
  uint32_t v7; // xmm1_4
  __m128 v8;
  __m128 v9;
  uint32_t v10; // xmm1_4
  float v11; // xmm4_4
  __m128 v12;
  uint32_t v13; // xmm1_4
  uint32_t v14; // xmm5_4
  uint32_t v15; // xmm3_4
  uint32_t v16; // xmm2_4
  __m128 v17;
  result = self;
g4_m128_raw(v2) = *(unsigned int *)self;
g4_m128_raw(v3) = *(unsigned int *)(HIDWORD(self) + 4);
g4_m128_lane<float>(v3, 0) = (float)(g4_m128_lane<float>(v3, 0) *g4_m128_lane<float>(v2, 0)) + *(float *)(self + 4);
  if (g4_m128_lane<float>(v3, 0) < -3.4028235e38f )
    v4 = 0;
  else
    v4 =g4_m128_lane<int32_t>(v3, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v3, *(__m128 *)&dword_1C7B5E0), 0);
  *(uint32_t *)(self + 4) = v4;
g4_m128_raw(v5) = *(unsigned int *)(self + 8);
g4_m128_raw(v6) = *(unsigned int *)(HIDWORD(self) + 12);
g4_m128_lane<float>(v6, 0) = (float)(g4_m128_lane<float>(v6, 0) *g4_m128_lane<float>(v5, 0)) + *(float *)(self + 12);
  if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
    v7 = 0;
  else
    v7 =g4_m128_lane<int32_t>(v6, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0), 0);
  *(uint32_t *)(self + 12) = v7;
g4_m128_raw(v8) = *(unsigned int *)(self + 16);
g4_m128_raw(v9) = *(unsigned int *)(HIDWORD(self) + 20);
g4_m128_lane<float>(v9, 0) = (float)(g4_m128_lane<float>(v9, 0) *g4_m128_lane<float>(v8, 0)) + *(float *)(self + 20);
  if (g4_m128_lane<float>(v9, 0) < -3.4028235e38f )
    v10 = 0;
  else
    v10 =g4_m128_lane<int32_t>(v9, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v9, *(__m128 *)&dword_1C7B5E0), 0);
  *(uint32_t *)(self + 20) = v10;
  v11 = *(float *)(self + 24);
g4_m128_raw(v12) = *(unsigned int *)(HIDWORD(self) + 28);
g4_m128_lane<float>(v12, 0) = (float)(g4_m128_lane<float>(v12, 0) * v11) + *(float *)(self + 28);
  if (g4_m128_lane<float>(v12, 0) < -3.4028235e38f )
    v13 = 0;
  else
    v13 =g4_m128_lane<int32_t>(v12, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v12, *(__m128 *)&dword_1C7B5E0), 0);
  *(uint32_t *)(self + 28) = v13;
g4_m128_lane<float>(v2, 0) =g4_m128_lane<float>(v2, 0) * *(float *)HIDWORD(self);
  if (g4_m128_lane<float>(v2, 0) < -3.4028235e38f )
    v14 = 0;
  else
    v14 =g4_m128_lane<int32_t>(v2, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v2, *(__m128 *)&dword_1C7B5E0), 0);
  *(uint32_t *)self = v14;
g4_m128_lane<float>(v5, 0) =g4_m128_lane<float>(v5, 0) * *(float *)(HIDWORD(self) + 8);
  if (g4_m128_lane<float>(v5, 0) < -3.4028235e38f )
    v15 = 0;
  else
    v15 =g4_m128_lane<int32_t>(v5, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v5, *(__m128 *)&dword_1C7B5E0), 0);
  *(uint32_t *)(self + 8) = v15;
g4_m128_lane<float>(v8, 0) =g4_m128_lane<float>(v8, 0) * *(float *)(HIDWORD(self) + 16);
  if (g4_m128_lane<float>(v8, 0) < -3.4028235e38f )
    v16 = 0;
  else
    v16 =g4_m128_lane<int32_t>(v8, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v8, *(__m128 *)&dword_1C7B5E0), 0);
  *(uint32_t *)(self + 16) = v16;
g4_m128_raw(v17) = *(unsigned int *)(HIDWORD(self) + 24);
g4_m128_lane<float>(v17, 0) =g4_m128_lane<float>(v17, 0) * v11;
  if (g4_m128_lane<float>(v17, 0) < -3.4028235e38f )
    *(uint32_t *)(self + 24) = 0;
  else
    *(uint32_t *)(self + 24) =g4_m128_lane<int32_t>(v17, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v17, *(__m128 *)&dword_1C7B5E0), 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CxForm::transform  (binary VA: 0x1068970)
// Original: gameswf::CxForm::transform
// ----------------------------------------------------------------------------
uint8_t * gameswf::CxForm::transform(uint8_t *a1, float *a2, unsigned int a3)
{
  *a1 = (int)fmaxf(fminf((float)((float)(uint8_t)a3 * *a2) + a2[1], 255.0), 0.0);
  a1[1] = (int)fmaxf(fminf((float)((float)BYTE1(a3) * a2[2]) + a2[3], 255.0), 0.0);
  a1[2] = (int)fmaxf(fminf((float)((float)BYTE2(a3) * a2[4]) + a2[5], 255.0), 0.0);
  a1[3] = (int)fmaxf(fminf((float)((float)HIBYTE(a3) * a2[6]) + a2[7], 255.0), 0.0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CxForm::read_rgb  (binary VA: 0x1068a50)
// Original: gameswf::CxForm::read_rgb
// ----------------------------------------------------------------------------
int gameswf::CxForm::read_rgb(__m128 a1, gameswf::CxForm::Self *self, gameswf::Stream::Self *a3)
{
  int v3;
  int v4;
  int result;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  int v10;
  int UInt;

  gameswf::Stream::align(a3);
  UInt = gameswf::Stream::readUInt(a3, 1);
  v10 = gameswf::Stream::readUInt(a3, 1);
  v3 = gameswf::Stream::readUInt(a3, 4);
  v4 = v3;
  if ( v10 != 0 )
  {
g4_m128_lane<float>(a1, 0) = (float)(int)gameswf::Stream::readSInt(a3, v3) * 0.003921569f;
    if (g4_m128_lane<float>(a1, 0) >= -3.4028235e38f )
      v6 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
    else
g4_m128_raw(v6) = 0;
    *(uint32_t *)self =g4_m128_lane<int32_t>(v6, 0);
g4_m128_lane<float>(v6, 0) = (float)(int)gameswf::Stream::readSInt(a3, v4) * 0.003921569f;
    if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
g4_m128_raw(v7) = 0;
    else
      v7 = _mm_and_ps(v6, _mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0));
    *((uint32_t *)self + 2) =g4_m128_lane<int32_t>(v7, 0);
g4_m128_lane<float>(v7, 0) = (float)(int)gameswf::Stream::readSInt(a3, v4) * 0.003921569f;
    if (g4_m128_lane<float>(v7, 0) < -3.4028235e38f )
g4_m128_raw(a1) = 0;
    else
      a1 = _mm_and_ps(v7, _mm_cmple_ss(v7, *(__m128 *)&dword_1C7B5E0));
    result = UInt;
    *((uint32_t *)self + 6) = 1065353216;
    *((uint32_t *)self + 4) =g4_m128_lane<int32_t>(a1, 0);
    if ( UInt == 0 )
      goto LABEL_3;
  }
  else
  {
    result = UInt;
    *(uint32_t *)self = 1065353216;
    *((uint32_t *)self + 2) = 1065353216;
    *((uint32_t *)self + 4) = 1065353216;
    *((uint32_t *)self + 6) = 1065353216;
    if ( UInt == 0 )
    {
LABEL_3:
      *((uint32_t *)self + 1) = 0;
      *((uint32_t *)self + 3) = 0;
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 7) = 0;
      return result;
    }
  }
g4_m128_lane<float>(a1, 0) = (float)(int)gameswf::Stream::readSInt(a3, v4);
  if (g4_m128_lane<float>(a1, 0) >= -3.4028235e38f )
    v8 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
  else
g4_m128_raw(v8) = 0;
  *((uint32_t *)self + 1) =g4_m128_lane<int32_t>(v8, 0);
g4_m128_lane<float>(v8, 0) = (float)(int)gameswf::Stream::readSInt(a3, v4);
  if (g4_m128_lane<float>(v8, 0) < -3.4028235e38f )
g4_m128_raw(v9) = 0;
  else
    v9 = _mm_and_ps(v8, _mm_cmple_ss(v8, *(__m128 *)&dword_1C7B5E0));
  *((uint32_t *)self + 3) =g4_m128_lane<int32_t>(v9, 0);
  result = gameswf::Stream::readSInt(a3, v4);
  if ( (float)result < -3.4028235e38f )
  {
g4_m128_lane<int32_t>(v9, 0) = 0;
  }
  else
  {
g4_m128_lane<float>(v9, 0) = (float)result;
g4_m128_lane<int32_t>(v9, 0) = COERCE_UNSIGNED_INT((float)result) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v9, *(__m128 *)&dword_1C7B5E0), 0);
  }
  *((uint32_t *)self + 5) =g4_m128_lane<int32_t>(v9, 0);
  *((uint32_t *)self + 7) = 1065353216;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CxForm::read_rgba  (binary VA: 0x1068cc0)
// Original: gameswf::CxForm::read_rgba
// ----------------------------------------------------------------------------
int gameswf::CxForm::read_rgba(__m128 a1, gameswf::CxForm::Self *self, gameswf::Stream::Self *a3)
{
  int result;
  int v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  int v11;
  int UInt;

  gameswf::Stream::align(a3);
  UInt = gameswf::Stream::readUInt(a3, 1);
  v11 = gameswf::Stream::readUInt(a3, 1);
  result = gameswf::Stream::readUInt(a3, 4);
  v4 = result;
  if ( v11 != 0 )
  {
g4_m128_lane<float>(a1, 0) = (float)(int)gameswf::Stream::readSInt(a3, result) * 0.00390625;
    if (g4_m128_lane<float>(a1, 0) >= -3.4028235e38f )
      v5 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
    else
g4_m128_raw(v5) = 0;
    *(uint32_t *)self =g4_m128_lane<int32_t>(v5, 0);
g4_m128_lane<float>(v5, 0) = (float)(int)gameswf::Stream::readSInt(a3, v4) * 0.00390625;
    if (g4_m128_lane<float>(v5, 0) < -3.4028235e38f )
g4_m128_raw(v6) = 0;
    else
      v6 = _mm_and_ps(v5, _mm_cmple_ss(v5, *(__m128 *)&dword_1C7B5E0));
    *((uint32_t *)self + 2) =g4_m128_lane<int32_t>(v6, 0);
g4_m128_lane<float>(v6, 0) = (float)(int)gameswf::Stream::readSInt(a3, v4) * 0.00390625;
    if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
g4_m128_raw(v7) = 0;
    else
      v7 = _mm_and_ps(v6, _mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0));
    *((uint32_t *)self + 4) =g4_m128_lane<int32_t>(v7, 0);
    result = gameswf::Stream::readSInt(a3, v4);
g4_m128_lane<float>(v7, 0) = (float)result * 0.00390625;
    if (g4_m128_lane<float>(v7, 0) < -3.4028235e38f )
g4_m128_raw(a1) = 0;
    else
      a1 = _mm_and_ps(v7, _mm_cmple_ss(v7, *(__m128 *)&dword_1C7B5E0));
    *((uint32_t *)self + 6) =g4_m128_lane<int32_t>(a1, 0);
    if ( UInt == 0 )
      goto LABEL_3;
  }
  else
  {
    *(uint32_t *)self = 1065353216;
    *((uint32_t *)self + 2) = 1065353216;
    *((uint32_t *)self + 4) = 1065353216;
    *((uint32_t *)self + 6) = 1065353216;
    if ( UInt == 0 )
    {
LABEL_3:
      *((uint32_t *)self + 1) = 0;
      *((uint32_t *)self + 3) = 0;
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 7) = 0;
      return result;
    }
  }
g4_m128_lane<float>(a1, 0) = (float)(int)gameswf::Stream::readSInt(a3, v4);
  if (g4_m128_lane<float>(a1, 0) >= -3.4028235e38f )
    v8 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
  else
g4_m128_raw(v8) = 0;
  *((uint32_t *)self + 1) =g4_m128_lane<int32_t>(v8, 0);
g4_m128_lane<float>(v8, 0) = (float)(int)gameswf::Stream::readSInt(a3, v4);
  if (g4_m128_lane<float>(v8, 0) < -3.4028235e38f )
g4_m128_raw(v9) = 0;
  else
    v9 = _mm_and_ps(v8, _mm_cmple_ss(v8, *(__m128 *)&dword_1C7B5E0));
  *((uint32_t *)self + 3) =g4_m128_lane<int32_t>(v9, 0);
g4_m128_lane<float>(v9, 0) = (float)(int)gameswf::Stream::readSInt(a3, v4);
  if (g4_m128_lane<float>(v9, 0) < -3.4028235e38f )
g4_m128_raw(v10) = 0;
  else
    v10 = _mm_and_ps(v9, _mm_cmple_ss(v9, *(__m128 *)&dword_1C7B5E0));
  *((uint32_t *)self + 5) =g4_m128_lane<int32_t>(v10, 0);
  result = gameswf::Stream::readSInt(a3, v4);
  if ( (float)result < -3.4028235e38f )
  {
g4_m128_lane<int32_t>(v10, 0) = 0;
  }
  else
  {
g4_m128_lane<float>(v10, 0) = (float)result;
g4_m128_lane<int32_t>(v10, 0) = COERCE_UNSIGNED_INT((float)result) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v10, *(__m128 *)&dword_1C7B5E0), 0);
  }
  *((uint32_t *)self + 7) =g4_m128_lane<int32_t>(v10, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CxForm::clamp  (binary VA: 0x1068fa0)
// Original: gameswf::CxForm::clamp
// ----------------------------------------------------------------------------
gameswf::CxForm::Self * gameswf::CxForm::clamp(gameswf::CxForm::Self *self)
{
  gameswf::CxForm::Self *result;
  __m128 v2;
  __m128 v3;
  uint32_t v4; // xmm3_4
  __m128 v5;
  uint32_t v6; // xmm3_4
  __m128 v7;
  uint32_t v8; // xmm3_4
  float v9; // xmm0_4
  uint32_t v10; // xmm0_4
  __m128 v11;
  __m128 v12;
  uint32_t v13; // xmm3_4
  __m128 v14;
  uint32_t v15; // xmm3_4
  __m128 v16;
  uint32_t v17; // xmm3_4
  float v18; // xmm0_4

  result = self;
g4_m128_raw(v2) = 0x3F800000u;
g4_m128_raw(v3) = *(unsigned int *)self;
g4_m128_lane<float>(v3, 0) = fmaxf(fminf(g4_m128_lane<float>(v3, 0), 1.0), 0.0);
  if (g4_m128_lane<float>(v3, 0) < -3.4028235e38f )
    v4 = 0;
  else
    v4 =g4_m128_lane<int32_t>(v3, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v3, *(__m128 *)&dword_1C7B5E0), 0);
  *(uint32_t *)self = v4;
g4_m128_raw(v5) = *((unsigned int *)self + 2);
g4_m128_lane<float>(v5, 0) = fmaxf(fminf(g4_m128_lane<float>(v5, 0), 1.0), 0.0);
  if (g4_m128_lane<float>(v5, 0) < -3.4028235e38f )
    v6 = 0;
  else
    v6 =g4_m128_lane<int32_t>(v5, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v5, *(__m128 *)&dword_1C7B5E0), 0);
  *((uint32_t *)self + 2) = v6;
g4_m128_raw(v7) = *((unsigned int *)self + 4);
g4_m128_lane<float>(v7, 0) = fmaxf(fminf(g4_m128_lane<float>(v7, 0), 1.0), 0.0);
  if (g4_m128_lane<float>(v7, 0) < -3.4028235e38f )
    v8 = 0;
  else
    v8 =g4_m128_lane<int32_t>(v7, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v7, *(__m128 *)&dword_1C7B5E0), 0);
  v9 = fminf(1.0, *((float *)self + 6));
  *((uint32_t *)self + 4) = v8;
g4_m128_lane<float>(v2, 0) = fmaxf(v9, 0.0);
  if (g4_m128_lane<float>(v2, 0) < -3.4028235e38f )
    v10 = 0;
  else
    v10 =g4_m128_lane<int32_t>(v2, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v2, *(__m128 *)&dword_1C7B5E0), 0);
  *((uint32_t *)self + 6) = v10;
g4_m128_raw(v12) = *((unsigned int *)self + 1);
g4_m128_raw(v11) = 0x437F0000u;
g4_m128_lane<float>(v12, 0) = fmaxf(fminf(g4_m128_lane<float>(v12, 0), 255.0), -255.0);
  if (g4_m128_lane<float>(v12, 0) < -3.4028235e38f )
    v13 = 0;
  else
    v13 =g4_m128_lane<int32_t>(v12, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v12, *(__m128 *)&dword_1C7B5E0), 0);
  *((uint32_t *)self + 1) = v13;
g4_m128_raw(v14) = *((unsigned int *)self + 3);
g4_m128_lane<float>(v14, 0) = fmaxf(fminf(g4_m128_lane<float>(v14, 0), 255.0), -255.0);
  if (g4_m128_lane<float>(v14, 0) < -3.4028235e38f )
    v15 = 0;
  else
    v15 =g4_m128_lane<int32_t>(v14, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v14, *(__m128 *)&dword_1C7B5E0), 0);
  *((uint32_t *)self + 3) = v15;
g4_m128_raw(v16) = *((unsigned int *)self + 5);
g4_m128_lane<float>(v16, 0) = fmaxf(fminf(g4_m128_lane<float>(v16, 0), 255.0), -255.0);
  if (g4_m128_lane<float>(v16, 0) < -3.4028235e38f )
    v17 = 0;
  else
    v17 =g4_m128_lane<int32_t>(v16, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v16, *(__m128 *)&dword_1C7B5E0), 0);
  v18 = fminf(255.0, *((float *)self + 7));
  *((uint32_t *)self + 5) = v17;
g4_m128_lane<float>(v11, 0) = fmaxf(v18, -255.0);
  if (g4_m128_lane<float>(v11, 0) < -3.4028235e38f )
    *((uint32_t *)self + 7) = 0;
  else
    *((uint32_t *)self + 7) =g4_m128_lane<int32_t>(v11, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v11, *(__m128 *)&dword_1C7B5E0), 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CxForm::print  (binary VA: 0x1069160)
// Original: gameswf::CxForm::print
// ----------------------------------------------------------------------------
int gameswf::CxForm::print(gameswf::CxForm::Self *self)
{
  const char *v3;

  gameswf::logMsg((gameswf::Self *)"    *         +\n", v3);
  gameswf::logMsg(
    (gameswf::Self *)"| %4.4f %4.4f|\n",
    (const char *)COERCE_UNSIGNED_INT64(*(float *)self),
    (uint32_t)HIDWORD(COERCE_UNSIGNED_INT64(*(float *)self)),
    *((float *)self + 1));
  gameswf::logMsg(
    (gameswf::Self *)"| %4.4f %4.4f|\n",
    (const char *)COERCE_UNSIGNED_INT64(*((float *)self + 2)),
    (uint32_t)HIDWORD(COERCE_UNSIGNED_INT64(*((float *)self + 2))),
    *((float *)self + 3));
  gameswf::logMsg(
    (gameswf::Self *)"| %4.4f %4.4f|\n",
    (const char *)COERCE_UNSIGNED_INT64(*((float *)self + 4)),
    (uint32_t)HIDWORD(COERCE_UNSIGNED_INT64(*((float *)self + 4))),
    *((float *)self + 5));
  return gameswf::logMsg(
           (gameswf::Self *)"| %4.4f %4.4f|\n",
           (const char *)COERCE_UNSIGNED_INT64(*((float *)self + 6)),
           (uint32_t)HIDWORD(COERCE_UNSIGNED_INT64(*((float *)self + 6))),
           *((float *)self + 7));
}


