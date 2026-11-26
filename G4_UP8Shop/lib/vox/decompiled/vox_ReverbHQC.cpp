#include "Core/Utils/DecompTypes.h"
#include "vox_ReverbHQC.h"

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::WillOutput  (binary VA: 0xfc86c0)
// Original: vox::ReverbHQC::WillOutput
// ----------------------------------------------------------------------------
bool vox::ReverbHQC::WillOutput(vox::ReverbHQC::Self *self, bool a2)
{
  if ( !a2 )
    return *((float *)self + 78) > 0.0;
  *((uint32_t *)self + 78) = 0x40000000;
  return true;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::Destroy  (binary VA: 0xfc8ba0)
// Original: vox::ReverbHQC::~ReverbHQC
// ----------------------------------------------------------------------------
void vox::ReverbHQC::Destroy(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208C988));
  if ( *(self + 2) != nullptr )
  {
    opDeleteArray(*(self + 2));
    *(self + 2) = nullptr;
  }
  vox::Mutex::Destroy((vox::Mutex::Self *)(self + 151));
  vox::ReverbHQPresetBank::Destroy(self + 149);
  vox::CustomDSP::Destroy((vox::CustomDSP::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::Destroy_eafc8c10  (binary VA: 0xfc8c10)
// Original: vox::ReverbHQC::~ReverbHQC
// ----------------------------------------------------------------------------
void vox::ReverbHQC::Destroy_eafc8c10(void **self)
{
  vox::ReverbHQC::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::CalcLengths  (binary VA: 0xfc92f0)
// Original: vox::ReverbHQC::CalcLengths
// ----------------------------------------------------------------------------
unsigned int vox::ReverbHQC::CalcLengths(vox::ReverbHQC::Self *self, unsigned int *a2, float a3)
{
  __m128 v3;
  unsigned int result;
  __m128 v5;
  int v6;
  unsigned int i;
  int j;
  __m128 v9;
  unsigned int v10;
  __m128 v11;
  unsigned int v12;
  __m128 v13;
  unsigned int v14;
  __m128 v15;
  unsigned int v16;
  __m128 v17;
  unsigned int v18;
  __m128 v19;
  unsigned int v20;

g4_m128_raw(v3) = 0;
  result = 1;
g4_m128_lane<float>(v3, 0) = 0.23626563f * a3;
  v5 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v3);
  v6 = _mm_cvtsi128_si32(
         _mm_xor_si128(
           _mm_cvttps_epi32(_mm_sub_ps(v3, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v5))),
           _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v5)), 0x1Fu)));
  if ( v6 != -10 )
  {
    for ( i = v6 + 9; i != 0; i >>= 1 )
      result *= 2;
  }
  *a2 = result;
  for ( j = 0; j != 16; j += 4 )
  {
g4_m128_raw(v9) = 0;
    v10 = 1;
g4_m128_lane<float>(v9, 0) = *(float *)((char *)&dword_1CBE0F0 + j) * a3;
    v11 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v9);
    v12 = _mm_cvtsi128_si32(
            _mm_xor_si128(
              _mm_cvttps_epi32(_mm_sub_ps(v9, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v11))),
              _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v11)), 0x1Fu)));
    if ( v12 != -1 && v12 != 0 )
    {
      do
      {
        v10 *= 2;
        v12 >>= 1;
      }
      while ( v12 != 0 );
    }
    *(unsigned int *)((char *)a2 + j + 4) = v10;
    result += v10;
  }
  LOWORD(j) = 0;
  do
  {
g4_m128_raw(v13) = 0;
    v14 = 1;
g4_m128_lane<float>(v13, 0) = *(float *)((char *)&dword_1CBE100 + j) * a3;
    v15 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v13);
    v16 = _mm_cvtsi128_si32(
            _mm_xor_si128(
              _mm_cvttps_epi32(_mm_sub_ps(v13, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v15))),
              _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v15)), 0x1Fu)));
    if ( v16 != -1 && v16 != 0 )
    {
      do
      {
        v14 *= 2;
        v16 >>= 1;
      }
      while ( v16 != 0 );
    }
    *(unsigned int *)((char *)a2 + j + 20) = v14;
    j += 4;
    result += v14;
  }
  while ( j != 16 );
  LOWORD(j) = 0;
  do
  {
g4_m128_raw(v17) = 0;
    v18 = 1;
g4_m128_lane<float>(v17, 0) = *(float *)((char *)&dword_1CBE110 + j) * (float)(a3 * 5.0);
    v19 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v17);
    v20 = _mm_cvtsi128_si32(
            _mm_xor_si128(
              _mm_cvttps_epi32(_mm_sub_ps(v17, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v19))),
              _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v19)), 0x1Fu)));
    if ( v20 != -1 && v20 != 0 )
    {
      do
      {
        v18 *= 2;
        v20 >>= 1;
      }
      while ( v20 != 0 );
    }
    *(unsigned int *)((char *)a2 + j + 36) = v18;
    j += 4;
    result += v18;
  }
  while ( j != 16 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::CreateDelayLines  (binary VA: 0xfc9490)
// Original: vox::ReverbHQC::CreateDelayLines
// ----------------------------------------------------------------------------
int vox::ReverbHQC::CreateDelayLines(vox::ReverbHQC::Self *self)
{
  unsigned int v1;
  unsigned int v2;
  int result;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  int v37;
  unsigned int v38;
  float v39; // xmm1_4
  __m128 v40;
  __m128 v41;
  int v42;
  __m128 v43;
  __m128 v44;
  int v45;
  __m128 v46;
  __m128 v47;
  int v48;
  __m128 v49;
  __m128 v50;
  int v51;
  __m128 v52;
  __m128 v53;
  int v54;
  __m128 v55;
  __m128 v56;
  int v57;
  __m128 v58;
  __m128 v59;
  __m128 v60;
  int v61;
  __m128 v62;
  unsigned int v63;
  unsigned int v64[16];

  v1 = vox::ReverbHQC::CalcLengths(self, v64, *((float *)self + 1));
  v2 = v1;
  if ( *((uint32_t *)self + 3) == v1 )
  {
    result = *((uint32_t *)self + 2);
  }
  else
  {
    result = opNewArray(4 * v1);
    v4 = v64[0];
    *((uint32_t *)self + 3) = v2;
    *((uint32_t *)self + 2) = result;
    *((uint32_t *)self + 8) = result;
    *((uint32_t *)self + 7) = v4 - 1;
    v5 = v64[1];
    *((uint32_t *)self + 19) = v64[1] - 1;
    v6 = result + 4 * v4;
    v7 = v5 + v4;
    v8 = v64[2];
    *((uint32_t *)self + 20) = v6;
    *((uint32_t *)self + 21) = v8 - 1;
    v9 = result + 4 * v7;
    v10 = v8 + v7;
    v11 = v64[3];
    *((uint32_t *)self + 22) = v9;
    *((uint32_t *)self + 23) = v11 - 1;
    v12 = result + 4 * v10;
    v13 = v11 + v10;
    v14 = v64[4];
    *((uint32_t *)self + 24) = v12;
    v15 = v14 - 1;
    v16 = v13 + v14;
    *((uint32_t *)self + 25) = v15;
    v17 = result + 4 * v13;
    v18 = v64[5];
    *((uint32_t *)self + 26) = v17;
    *((uint32_t *)self + 39) = v18 - 1;
    v19 = result + 4 * v16;
    v20 = v18 + v16;
    v21 = v64[6];
    *((uint32_t *)self + 40) = v19;
    *((uint32_t *)self + 41) = v21 - 1;
    v22 = result + 4 * v20;
    v23 = v21 + v20;
    v24 = v64[7];
    *((uint32_t *)self + 42) = v22;
    v25 = v24 - 1;
    v26 = v23 + v24;
    *((uint32_t *)self + 43) = v25;
    v27 = result + 4 * v23;
    v28 = v64[8];
    *((uint32_t *)self + 44) = v27;
    v29 = v28 - 1;
    v30 = v26 + v28;
    *((uint32_t *)self + 45) = v29;
    v31 = result + 4 * v26;
    v32 = v64[9];
    *((uint32_t *)self + 46) = v31;
    *((uint32_t *)self + 55) = v32 - 1;
    v33 = result + 4 * v30;
    v34 = v32 + v30;
    v35 = v64[10];
    *((uint32_t *)self + 56) = v33;
    *((uint32_t *)self + 57) = v35 - 1;
    v36 = result + 4 * v34;
    v37 = v35 + v34;
    v38 = v64[11];
    *((uint32_t *)self + 58) = v36;
    *((uint32_t *)self + 59) = v38 - 1;
    *((uint32_t *)self + 60) = result + 4 * v37;
    *((uint32_t *)self + 61) = v64[12] - 1;
    *((uint32_t *)self + 62) = result + 4 * (v37 + v38);
  }
  v39 = *((float *)self + 1);
g4_m128_raw(v40) = 0;
g4_m128_lane<float>(v40, 0) = 0.0015f * v39;
  v41 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v40);
  v42 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttps_epi32(_mm_sub_ps(v40, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v41))),
            _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v41)), 0x1Fu)));
g4_m128_raw(v43) = 0;
  *((uint32_t *)self + 27) = v42;
g4_m128_lane<float>(v43, 0) = 0.0151f * v39;
  v44 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v43);
  v45 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttps_epi32(_mm_sub_ps(v43, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v44))),
            _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v44)), 0x1Fu)));
g4_m128_raw(v46) = 0;
  *((uint32_t *)self + 47) = v45;
g4_m128_lane<float>(v46, 0) = 0.0045f * v39;
  v47 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v46);
  v48 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttps_epi32(_mm_sub_ps(v46, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v47))),
            _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v47)), 0x1Fu)));
g4_m128_raw(v49) = 0;
  *((uint32_t *)self + 28) = v48;
g4_m128_lane<float>(v49, 0) = 0.0167f * v39;
  v50 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v49);
  v51 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttps_epi32(_mm_sub_ps(v49, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v50))),
            _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v50)), 0x1Fu)));
g4_m128_raw(v52) = 0;
  *((uint32_t *)self + 48) = v51;
g4_m128_lane<float>(v52, 0) = 0.0135f * v39;
  v53 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v52);
  v54 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttps_epi32(_mm_sub_ps(v52, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v53))),
            _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v53)), 0x1Fu)));
g4_m128_raw(v55) = 0;
  *((uint32_t *)self + 29) = v54;
g4_m128_lane<float>(v55, 0) = 0.0183f * v39;
  v56 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v55);
  v57 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttps_epi32(_mm_sub_ps(v55, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v56))),
            _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v56)), 0x1Fu)));
g4_m128_raw(v58) = 0;
  *((uint32_t *)self + 49) = v57;
g4_m128_lane<float>(v58, 0) = 0.0405f * v39;
  v59 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v58);
g4_m128_raw(v60) = 0;
g4_m128_lane<float>(v60, 0) = v39 * 0.02f;
  v61 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttps_epi32(_mm_sub_ps(v58, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v59))),
            _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v59)), 0x1Fu)));
  v62 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v60);
  *((uint32_t *)self + 30) = v61;
  *((uint32_t *)self + 50) = _mm_cvtsi128_si32(
                             _mm_xor_si128(
                               _mm_cvttps_epi32(_mm_sub_ps(v60, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v62))),
                               _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v62)), 0x1Fu)));
  if ( result != 0 && *((uint32_t *)self + 3) != 0 )
  {
    v63 = 0;
    while ( 1 )
    {
      *(uint32_t *)(result + 4 * v63++) = 0;
      if ( *((uint32_t *)self + 3) <= v63 )
        break;
      result = *((uint32_t *)self + 2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::ConnectToBus  (binary VA: 0xfc9800)
// Original: vox::ReverbHQC::ConnectToBus
// ----------------------------------------------------------------------------
int vox::ReverbHQC::ConnectToBus(vox::ReverbHQC::Self *self, float a2, int a3, int a4)
{
  int result;

  *((float *)self + 1) = a2;
  result = 0;
  if ( a3 == 2 && a4 == 0 )
  {
    result = 1;
    if ( *((uint32_t *)self + 2) == 0 )
    {
      vox::ReverbHQC::CreateDelayLines(self);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::SetParameters  (binary VA: 0xfc9860)
// Original: vox::ReverbHQC::_SetParameters
// ----------------------------------------------------------------------------
int vox::ReverbHQC::SetParameters(vox::ReverbHQC::Self *self, vox::ReverbHQParameters::Self *a2)
{
  long double v2; // fst7
  float v3; // xmm3_4
  float v4; // xmm3_4
  float v5; // xmm4_4
  __m128 v6;
  __m128 v7;
  float v8; // xmm4_4
  __m128 v9;
  __m128 v10;
  __m128 v11;
  float v12; // xmm4_4
  __m128 v13;
  __m128 v14;
  float v15; // xmm4_4
  __m128 v16;
  __m128 v17;
  float v18; // xmm4_4
  __m128 v19;
  int v20;
  float v21; // xmm1_4
  long double v22; // fst7
  int v23;
  float v24; // xmm4_4
  float v25; // xmm4_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  __m128 v28;
  float v29; // xmm1_4
  __m128 v30;
  int v31;
  int v32;
  __m128 v33;
  float v34; // xmm1_4
  __m128 v35;
  int v36;
  int v37;
  __m128 v38;
  float v39; // xmm1_4
  __m128 v40;
  int v41;
  int v42;
  __m128 v43;
  float v44; // xmm1_4
  __m128 v45;
  int v46;
  int v47;
  int result;
  float v49; // xmm2_4
  long double v50; // fst7
  float v51; // xmm1_4
  float v52; // xmm1_4
  float v53; // xmm1_4
  long double v54; // fst7
  float v55; // xmm1_4
  float v56; // xmm1_4
  float v57; // xmm1_4
  long double v58; // fst7
  float v59; // xmm1_4
  float v60; // xmm1_4
  float v61; // xmm1_4
  long double v62; // fst7
  float v63; // xmm1_4
  float v64; // xmm1_4
  float v65; // xmm1_4
  float v66; // xmm1_4
  int v67;
  int v68;
  int v69;
  int v70;
  float v71;
  float v72;
  int v73;
  float v74;
  float v75;
  float v76;

  v74 = *((float *)a2 + 5);
  v76 = *((float *)self + 1);
  v2 = cos((float)((float)(6.2831855f * *((float *)a2 + 3)) / v76));
  v3 = *((float *)a2 + 2);
  *((uint32_t *)self + 4) = 0;
  v4 = fmaxf(v3, 0.0001f);
  if ( v4 < 0.9999f )
  {
    v49 = v2;
    *((uint32_t *)self + 4) = (int)(float)((float)((float)((float)(1.0 - (float)(v49 * v4))
                                                       - fsqrt(
                                                           (float)((float)((float)(1.0 - v49) + (float)(1.0 - v49))
                                                                 + (float)((float)((float)(v49 * v49) + -1.0) * v4))
                                                         * v4))
                                               / (float)(1.0 - v4))
                                       * 16384.0);
  }
  v5 = *((float *)a2 + 10);
g4_m128_raw(v6) = 0;
g4_m128_lane<float>(v6, 0) = v76 * v5;
  v7 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v6);
  *((uint32_t *)self + 9) = _mm_cvtsi128_si32(
                            _mm_xor_si128(
                              _mm_cvttps_epi32(_mm_sub_ps(v6, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v7))),
                              _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v7)), 0x1Fu)));
  v8 = v5 + *((float *)a2 + 12);
g4_m128_raw(v9) = 0;
g4_m128_lane<float>(v9, 0) = v76 * v8;
  v10 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v9);
  *((uint32_t *)self + 10) = _mm_cvtsi128_si32(
                             _mm_xor_si128(
                               _mm_cvttps_epi32(_mm_sub_ps(v9, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v10))),
                               _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v10)), 0x1Fu)));
g4_m128_raw(v11) = 0;
  v12 = v8 + (float)((float)((float)(4.0 * *(float *)a2) + 1.0) * 0.0211f) * 0.03125;
g4_m128_lane<float>(v11, 0) = v76 * v12;
  v13 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v11);
  *((uint32_t *)self + 11) = _mm_cvtsi128_si32(
                             _mm_xor_si128(
                               _mm_cvttps_epi32(_mm_sub_ps(v11, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v13))),
                               _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v13)), 0x1Fu)));
g4_m128_raw(v14) = 0;
  v15 = v12 + (float)((float)((float)(4.0 * *(float *)a2) + 1.0) * 0.0211f) * 0.03125 * 3.0;
g4_m128_lane<float>(v14, 0) = v76 * v15;
  v16 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v14);
  *((uint32_t *)self + 12) = _mm_cvtsi128_si32(
                             _mm_xor_si128(
                               _mm_cvttps_epi32(_mm_sub_ps(v14, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v16))),
                               _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v16)), 0x1Fu)));
g4_m128_raw(v17) = 0;
  v18 = v15 + (float)((float)((float)(4.0 * *(float *)a2) + 1.0) * 0.0211f) * 0.03125 * 7.0;
g4_m128_lane<float>(v17, 0) = v18 * v76;
  v19 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v17);
  *((uint32_t *)self + 13) = _mm_cvtsi128_si32(
                             _mm_xor_si128(
                               _mm_cvttps_epi32(_mm_sub_ps(v17, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v19))),
                               _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v19)), 0x1Fu)));
  *((uint32_t *)self + 14) = (int)(float)((float)(*((float *)a2 + 8) * *((float *)a2 + 9)) * 4096.0);
  *((uint32_t *)self + 15) = (int)(pow(2.0, (float)((float)(0.0015f / *((float *)a2 + 12)) * -9.9657f)) * 16384.0);
  *((uint32_t *)self + 16) = (int)(pow(2.0, (float)((float)(0.0045f / *((float *)a2 + 12)) * -9.9657f)) * 16384.0);
  *((uint32_t *)self + 17) = (int)(pow(2.0, (float)((float)(0.0135f / *((float *)a2 + 12)) * -9.9657f)) * 16384.0);
  *((uint32_t *)self + 18) = (int)(pow(2.0, (float)((float)(0.0405f / *((float *)a2 + 12)) * -9.9657f)) * 16384.0);
  v20 = (int)(float)(4096.0 * *((float *)a2 + 8));
  v21 = 1.0 - (double)*((float *)a2 + 1) * *((float *)a2 + 1) * *((float *)a2 + 1) * 0.5;
  *((uint32_t *)self + 31) = v20;
  v73 = (int)(float)(16384.0 * v21);
  *((uint32_t *)self + 31) = (v73 * (((int)(float)(16384.0 * *((float *)a2 + 11)) * v20) >> 14)) >> 14;
  v22 = pow(10.0, (float)((float)((float)((float)(*(float *)a2 + 1.0) * 0.1663f) / *((float *)a2 + 4)) * -3.0));
  v23 = 0x4000;
  v24 = v22;
  v25 = fsqrt(1.059986f / (float)(1.0 / (float)(1.0 - (float)(v24 * v24)))) * 16384.0;
  if ( (int)v25 < 16385 )
    v23 = (int)v25;
  *((uint32_t *)self + 32) = v23;
  *((uint32_t *)self + 33) = (int)((double)*((float *)a2 + 1) * *((float *)a2 + 1) * *((float *)a2 + 1) * 2457.60009765625);
  *((uint32_t *)self + 34) = (int)(float)((float)(fsqrt(0.33333334f * (float)(1.0 - (float)(v21 * v21))) / v21) * 2048.0);
  *((uint32_t *)self + 35) = (int)(pow(10.0, (float)((float)(0.0151f / *((float *)a2 + 4)) * -3.0)) * 4096.0);
  *((uint32_t *)self + 36) = (int)(pow(10.0, (float)((float)(0.0167f / *((float *)a2 + 4)) * -3.0)) * 4096.0);
  *((uint32_t *)self + 37) = (int)(pow(10.0, (float)((float)(0.0183f / *((float *)a2 + 4)) * -3.0)) * 4096.0);
  *((uint32_t *)self + 38) = (int)(pow(10.0, (float)((float)(0.02f / *((float *)a2 + 4)) * -3.0)) * 4096.0);
  if ( *((uint8_t *)a2 + 24) != 0 )
  {
    v26 = *((float *)a2 + 7);
    if ( v26 < 1.0 )
    {
      v66 = -0.008738712807089252 / (log10(v26) * *((float *)a2 + 4));
      v74 = fminf(fmaxf(v66, 0.1f), v74);
    }
  }
  v27 = cos((float)((float)(6.2831855f * *((float *)a2 + 3)) / v76));
  v75 = v27;
  v71 = (float)(v27 * v27) + -1.0;
  v72 = (float)(1.0 - v27) + (float)(1.0 - v27);
g4_m128_raw(v28) = 0;
  v29 = (float)((float)(4.0 * *(float *)a2) + 1.0) * 0.0211f;
g4_m128_lane<float>(v28, 0) = v76 * v29;
  v30 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v28);
  *((uint32_t *)self + 63) = _mm_cvtsi128_si32(
                             _mm_xor_si128(
                               _mm_cvttps_epi32(_mm_sub_ps(v28, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v30))),
                               _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v30)), 0x1Fu)));
  v31 = (int)(pow(10.0, (float)((float)(v29 / *((float *)a2 + 4)) * -3.0)) * 4096.0);
  *((uint32_t *)self + 51) = v31;
  if ( v74 >= 1.0
    || (v70 = v31,
        v62 = pow(10.0, (float)((float)(v29 / (float)(v74 * *((float *)a2 + 4))) * -3.0)),
        v31 = v70,
        v63 = v62,
        v64 = fmaxf(v63 / (float)((float)v70 * 0.000061035156f), 0.1f),
        (v65 = v64 * v64) >= 0.9999f) )
  {
    v32 = 0;
  }
  else
  {
    v32 = (int)(float)(fminf(
                         (float)((float)(1.0 - (float)(v75 * v65)) - fsqrt((float)((float)(v71 * v65) + v72) * v65))
                       / (float)(1.0 - v65),
                         0.98f)
                     * 4096.0);
  }
  *((uint32_t *)self + 67) = v32;
  *((uint32_t *)self + 51) = (v73 * v31) >> 14;
g4_m128_raw(v33) = 0;
  v34 = (float)((float)(4.0 * *(float *)a2) + 1.0) * 0.0311f;
g4_m128_lane<float>(v33, 0) = v76 * v34;
  v35 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v33);
  *((uint32_t *)self + 64) = _mm_cvtsi128_si32(
                             _mm_xor_si128(
                               _mm_cvttps_epi32(_mm_sub_ps(v33, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v35))),
                               _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v35)), 0x1Fu)));
  v36 = (int)(pow(10.0, (float)((float)(v34 / *((float *)a2 + 4)) * -3.0)) * 4096.0);
  *((uint32_t *)self + 52) = v36;
  if ( v74 >= 1.0
    || (v69 = v36,
        v58 = pow(10.0, (float)((float)(v34 / (float)(v74 * *((float *)a2 + 4))) * -3.0)),
        v36 = v69,
        v59 = v58,
        v60 = fmaxf(v59 / (float)((float)v69 * 0.000061035156f), 0.1f),
        (v61 = v60 * v60) >= 0.9999f) )
  {
    v37 = 0;
  }
  else
  {
    v37 = (int)(float)(fminf(
                         (float)((float)(1.0 - (float)(v75 * v61)) - fsqrt((float)((float)(v71 * v61) + v72) * v61))
                       / (float)(1.0 - v61),
                         0.98f)
                     * 4096.0);
  }
  *((uint32_t *)self + 68) = v37;
  *((uint32_t *)self + 52) = (v73 * v36) >> 14;
g4_m128_raw(v38) = 0;
  v39 = (float)((float)(4.0 * *(float *)a2) + 1.0) * 0.0461f;
g4_m128_lane<float>(v38, 0) = v76 * v39;
  v40 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v38);
  *((uint32_t *)self + 65) = _mm_cvtsi128_si32(
                             _mm_xor_si128(
                               _mm_cvttps_epi32(_mm_sub_ps(v38, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v40))),
                               _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v40)), 0x1Fu)));
  v41 = (int)(pow(10.0, (float)((float)(v39 / *((float *)a2 + 4)) * -3.0)) * 4096.0);
  *((uint32_t *)self + 53) = v41;
  if ( v74 >= 1.0
    || (v68 = v41,
        v54 = pow(10.0, (float)((float)(v39 / (float)(v74 * *((float *)a2 + 4))) * -3.0)),
        v41 = v68,
        v55 = v54,
        v56 = fmaxf(v55 / (float)((float)v68 * 0.000061035156f), 0.1f),
        (v57 = v56 * v56) >= 0.9999f) )
  {
    v42 = 0;
  }
  else
  {
    v42 = (int)(float)(fminf(
                         (float)((float)(1.0 - (float)(v75 * v57)) - fsqrt((float)((float)(v71 * v57) + v72) * v57))
                       / (float)(1.0 - v57),
                         0.98f)
                     * 4096.0);
  }
  *((uint32_t *)self + 69) = v42;
  *((uint32_t *)self + 53) = (v73 * v41) >> 14;
g4_m128_raw(v43) = 0;
  v44 = (float)((float)(4.0 * *(float *)a2) + 1.0) * 0.068f;
g4_m128_lane<float>(v43, 0) = v76 * v44;
  v45 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v43);
  *((uint32_t *)self + 66) = _mm_cvtsi128_si32(
                             _mm_xor_si128(
                               _mm_cvttps_epi32(_mm_sub_ps(v43, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v45))),
                               _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v45)), 0x1Fu)));
  v46 = (int)(pow(10.0, (float)((float)(v44 / *((float *)a2 + 4)) * -3.0)) * 4096.0);
  *((uint32_t *)self + 54) = v46;
  if ( v74 >= 1.0
    || (v67 = v46,
        v50 = pow(10.0, (float)((float)(v44 / (float)(v74 * *((float *)a2 + 4))) * -3.0)),
        v46 = v67,
        v51 = v50,
        v52 = fmaxf(v51 / (float)((float)v67 * 0.000061035156f), 0.1f),
        (v53 = v52 * v52) >= 0.9999f) )
  {
    v47 = 0;
  }
  else
  {
    v47 = (int)(float)(fminf(
                         (float)((float)(1.0 - (float)(v75 * v53)) - fsqrt((float)((float)(v71 * v53) + v72) * v53))
                       / (float)(1.0 - v53),
                         0.98f)
                     * 4096.0);
  }
  *((uint32_t *)self + 70) = v47;
  *((uint32_t *)self + 54) = (v73 * v46) >> 14;
  *((uint32_t *)self + 76) = (int)(float)(4096.0 * *((float *)a2 + 13));
  result = (int)(float)(4096.0 * *((float *)a2 + 14));
  *((uint32_t *)self + 77) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::SetParameters  (binary VA: 0xfca740)
// Original: vox::ReverbHQC::SetParameters
// ----------------------------------------------------------------------------
int vox::ReverbHQC::SetParameters(vox::ReverbHQC::Self *self, vox::ReverbHQParameters::Self *a2, float a3)
{
  float v3; // xmm5_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm4_4
  float v30; // xmm3_4
  int v31;
  float v32; // xmm2_4
  float v33;
  float v34; // xmm4_4
  float v35; // xmm2_4
  float v36; // xmm5_4
  float v37; // xmm3_4
  float v38; // xmm2_4
  float v39; // xmm5_4
  float v40; // xmm3_4
  int v41;
  float v42; // xmm2_4
  float v43;
  float v44; // xmm6_4
  float v45; // xmm2_4
  float v46; // xmm5_4
  float v47; // xmm3_4
  float v48; // xmm2_4
  float v49; // xmm3_4
  float v50; // xmm4_4
  int v51;
  float v52; // xmm2_4
  float v53;
  float v54; // xmm3_4
  float v55; // xmm2_4
  int v56;
  float v57; // xmm0_4
  int v59;
  float v60;
  float v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  float v69;
  float v70;
  float v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;

  vox::Mutex::Lock((vox::ReverbHQC::Self *)((char *)self + 604));
  if ( a3 <= 0.0 )
  {
    v59 = *(uint32_t *)a2;
    *((uint8_t *)self + 332) = 0;
    *((uint32_t *)self + 79) = v59;
    *((uint32_t *)self + 80) = v59;
    *((uint32_t *)self + 81) = 0;
    *((uint32_t *)self + 82) = 0;
    v72 = *((uint32_t *)a2 + 1);
    *((uint32_t *)self + 84) = v72;
    *((uint8_t *)self + 352) = 0;
    *((uint32_t *)self + 85) = v72;
    *((uint32_t *)self + 86) = 0;
    *((uint32_t *)self + 87) = 0;
    v73 = *((uint32_t *)a2 + 2);
    *((uint32_t *)self + 89) = v73;
    *((uint32_t *)self + 90) = v73;
    *((uint32_t *)self + 91) = 0;
    *((uint8_t *)self + 372) = 0;
    *((uint32_t *)self + 92) = 0;
    v74 = *((uint32_t *)a2 + 3);
    *((uint32_t *)self + 94) = v74;
    *((uint8_t *)self + 392) = 0;
    *((uint32_t *)self + 95) = v74;
    *((uint32_t *)self + 96) = 0;
    *((uint32_t *)self + 97) = 0;
    v75 = *((uint32_t *)a2 + 4);
    *((uint32_t *)self + 99) = v75;
    *((uint8_t *)self + 412) = 0;
    *((uint32_t *)self + 100) = v75;
    *((uint32_t *)self + 101) = 0;
    *((uint32_t *)self + 102) = 0;
    v76 = *((uint32_t *)a2 + 5);
    *((uint32_t *)self + 104) = v76;
    *((uint8_t *)self + 432) = 0;
    *((uint32_t *)self + 105) = v76;
    *((uint32_t *)self + 106) = 0;
    *((uint32_t *)self + 107) = 0;
    v77 = *((uint32_t *)a2 + 7);
    *((uint32_t *)self + 109) = v77;
    *((uint32_t *)self + 110) = v77;
    *((uint32_t *)self + 111) = 0;
    *((uint8_t *)self + 452) = 0;
    *((uint32_t *)self + 112) = 0;
    v78 = *((uint32_t *)a2 + 8);
    *((uint32_t *)self + 114) = v78;
    *((uint8_t *)self + 472) = 0;
    *((uint32_t *)self + 115) = v78;
    *((uint32_t *)self + 116) = 0;
    *((uint32_t *)self + 117) = 0;
    v79 = *((uint32_t *)a2 + 9);
    *((uint32_t *)self + 119) = v79;
    *((uint8_t *)self + 492) = 0;
    *((uint32_t *)self + 120) = v79;
    *((uint32_t *)self + 121) = 0;
    *((uint32_t *)self + 122) = 0;
    v80 = *((uint32_t *)a2 + 10);
    *((uint32_t *)self + 124) = v80;
    *((uint8_t *)self + 512) = 0;
    *((uint32_t *)self + 125) = v80;
    *((uint32_t *)self + 126) = 0;
    *((uint32_t *)self + 127) = 0;
    v81 = *((uint32_t *)a2 + 11);
    *((uint32_t *)self + 129) = v81;
    *((uint8_t *)self + 532) = 0;
    *((uint32_t *)self + 130) = v81;
    *((uint32_t *)self + 131) = 0;
    *((uint32_t *)self + 132) = 0;
    v82 = *((uint32_t *)a2 + 12);
    *((uint8_t *)self + 552) = 0;
    *((uint32_t *)self + 134) = v82;
    *((uint32_t *)self + 135) = v82;
    *((uint32_t *)self + 136) = 0;
    *((uint32_t *)self + 137) = 0;
    v83 = *((uint32_t *)a2 + 13);
    *((uint32_t *)self + 139) = v83;
    *((uint8_t *)self + 572) = 0;
    *((uint32_t *)self + 140) = v83;
    *((uint32_t *)self + 141) = 0;
    *((uint32_t *)self + 142) = 0;
    v84 = *((uint32_t *)a2 + 14);
    *((uint32_t *)self + 144) = v84;
    *((uint32_t *)self + 145) = v84;
    *((uint8_t *)self + 592) = 0;
    *((uint32_t *)self + 146) = 0;
    *((uint32_t *)self + 147) = 0;
  }
  else
  {
    v3 = *((float *)self + 81);
    v4 = *((float *)self + 82);
    if ( v4 > v3 )
    {
      if ( v4 <= 0.0 )
      {
        v5 = *((float *)self + 79);
        v6 = *(float *)a2;
      }
      else
      {
        v6 = *(float *)a2;
        v5 = (float)((float)((float)(*((float *)self + 80) - *((float *)self + 79)) * v3) / v4) + *((float *)self + 79);
      }
    }
    else
    {
      v5 = *((float *)self + 80);
      v6 = *(float *)a2;
    }
    *((uint8_t *)self + 332) = 0;
    v7 = v5 - v6;
    v60 = v5;
    v61 = v6;
    v8 = *((float *)self + 86);
    v9 = *((float *)self + 87);
    *((float *)self + 79) = v60;
    *((float *)self + 80) = v61;
    *((uint32_t *)self + 81) = 0;
    *((float *)self + 82) = fmaxf((float)(int)__builtin_abs((int)v7) * 50.0, a3);
    if ( v9 <= v8 )
    {
      v10 = *((float *)self + 85);
    }
    else if ( v9 <= 0.0 )
    {
      v10 = *((float *)self + 84);
    }
    else
    {
      v10 = (float)((float)((float)(*((float *)self + 85) - *((float *)self + 84)) * v8) / v9) + *((float *)self + 84);
    }
    v11 = *((float *)self + 91);
    v62 = *((uint32_t *)a2 + 1);
    v12 = *((float *)self + 92);
    *((uint8_t *)self + 352) = 0;
    *((float *)self + 84) = v10;
    *((uint32_t *)self + 85) = v62;
    *((uint32_t *)self + 86) = 0;
    *((float *)self + 87) = a3;
    if ( v12 <= v11 )
    {
      v13 = *((float *)self + 90);
    }
    else if ( v12 <= 0.0 )
    {
      v13 = *((float *)self + 89);
    }
    else
    {
      v13 = (float)((float)((float)(*((float *)self + 90) - *((float *)self + 89)) * v11) / v12) + *((float *)self + 89);
    }
    v14 = *((float *)self + 96);
    v63 = *((uint32_t *)a2 + 2);
    v15 = *((float *)self + 97);
    *((uint8_t *)self + 372) = 0;
    *((float *)self + 89) = v13;
    *((uint32_t *)self + 90) = v63;
    *((uint32_t *)self + 91) = 0;
    *((float *)self + 92) = a3;
    if ( v15 <= v14 )
    {
      v16 = *((float *)self + 95);
    }
    else if ( v15 <= 0.0 )
    {
      v16 = *((float *)self + 94);
    }
    else
    {
      v16 = (float)((float)((float)(*((float *)self + 95) - *((float *)self + 94)) * v14) / v15) + *((float *)self + 94);
    }
    v17 = *((float *)self + 101);
    v64 = *((uint32_t *)a2 + 3);
    v18 = *((float *)self + 102);
    *((uint8_t *)self + 392) = 0;
    *((float *)self + 94) = v16;
    *((uint32_t *)self + 95) = v64;
    *((uint32_t *)self + 96) = 0;
    *((float *)self + 97) = a3;
    if ( v18 <= v17 )
    {
      v19 = *((float *)self + 100);
    }
    else if ( v18 <= 0.0 )
    {
      v19 = *((float *)self + 99);
    }
    else
    {
      v19 = (float)((float)((float)(*((float *)self + 100) - *((float *)self + 99)) * v17) / v18)
          + *((float *)self + 99);
    }
    v20 = *((float *)self + 106);
    v65 = *((uint32_t *)a2 + 4);
    v21 = *((float *)self + 107);
    *((uint8_t *)self + 412) = 0;
    *((float *)self + 99) = v19;
    *((uint32_t *)self + 100) = v65;
    *((uint32_t *)self + 101) = 0;
    *((float *)self + 102) = a3;
    if ( v21 <= v20 )
    {
      v22 = *((float *)self + 105);
    }
    else if ( v21 <= 0.0 )
    {
      v22 = *((float *)self + 104);
    }
    else
    {
      v22 = (float)((float)((float)(*((float *)self + 105) - *((float *)self + 104)) * v20) / v21)
          + *((float *)self + 104);
    }
    v23 = *((float *)self + 111);
    v66 = *((uint32_t *)a2 + 5);
    v24 = *((float *)self + 112);
    *((uint8_t *)self + 432) = 0;
    *((float *)self + 104) = v22;
    *((uint32_t *)self + 105) = v66;
    *((uint32_t *)self + 106) = 0;
    *((float *)self + 107) = a3;
    if ( v24 <= v23 )
    {
      v25 = *((float *)self + 110);
    }
    else if ( v24 <= 0.0 )
    {
      v25 = *((float *)self + 109);
    }
    else
    {
      v25 = (float)((float)((float)(*((float *)self + 110) - *((float *)self + 109)) * v23) / v24)
          + *((float *)self + 109);
    }
    v26 = *((float *)self + 116);
    v67 = *((uint32_t *)a2 + 7);
    v27 = *((float *)self + 117);
    *((uint8_t *)self + 452) = 0;
    *((float *)self + 109) = v25;
    *((uint32_t *)self + 110) = v67;
    *((uint32_t *)self + 111) = 0;
    *((float *)self + 112) = a3;
    if ( v27 <= v26 )
    {
      v28 = *((float *)self + 115);
    }
    else if ( v27 <= 0.0 )
    {
      v28 = *((float *)self + 114);
    }
    else
    {
      v28 = (float)((float)((float)(*((float *)self + 115) - *((float *)self + 114)) * v26) / v27)
          + *((float *)self + 114);
    }
    v29 = *((float *)self + 121);
    v68 = *((uint32_t *)a2 + 8);
    v30 = *((float *)self + 122);
    *((uint8_t *)self + 472) = 0;
    *((float *)self + 114) = v28;
    *((uint32_t *)self + 115) = v68;
    *((uint32_t *)self + 116) = 0;
    *((float *)self + 117) = a3;
    v31 = *((uint32_t *)a2 + 9);
    if ( v30 <= v29 )
    {
      v32 = *((float *)self + 120);
    }
    else if ( v30 <= 0.0 )
    {
      v32 = *((float *)self + 119);
    }
    else
    {
      v32 = (float)((float)((float)(*((float *)self + 120) - *((float *)self + 119)) * v29) / v30)
          + *((float *)self + 119);
    }
    v33 = v32;
    v34 = *((float *)self + 126);
    v35 = *((float *)self + 127);
    *((float *)self + 119) = v33;
    *((uint32_t *)self + 120) = v31;
    *((uint8_t *)self + 492) = 0;
    *((uint32_t *)self + 121) = 0;
    *((float *)self + 122) = a3;
    if ( v35 <= v34 )
    {
      v37 = *((float *)self + 125);
      v36 = *((float *)a2 + 10);
    }
    else if ( v35 <= 0.0 )
    {
      v37 = *((float *)self + 124);
      v36 = *((float *)a2 + 10);
    }
    else
    {
      v36 = *((float *)a2 + 10);
      v37 = (float)((float)((float)(*((float *)self + 125) - *((float *)self + 124)) * v34) / v35)
          + *((float *)self + 124);
    }
    *((uint8_t *)self + 512) = 0;
    v38 = v37 - v36;
    v69 = v37;
    v70 = v36;
    v39 = *((float *)self + 131);
    v40 = *((float *)self + 132);
    *((float *)self + 124) = v69;
    *((float *)self + 125) = v70;
    *((uint32_t *)self + 126) = 0;
    *((float *)self + 127) = fmaxf((float)(int)__builtin_abs((int)v38) * 200.0, a3);
    v41 = *((uint32_t *)a2 + 11);
    if ( v40 <= v39 )
    {
      v42 = *((float *)self + 130);
    }
    else if ( v40 <= 0.0 )
    {
      v42 = *((float *)self + 129);
    }
    else
    {
      v42 = (float)((float)((float)(*((float *)self + 130) - *((float *)self + 129)) * v39) / v40)
          + *((float *)self + 129);
    }
    v43 = v42;
    v44 = *((float *)self + 136);
    v45 = *((float *)self + 137);
    *((float *)self + 129) = v43;
    *((uint32_t *)self + 130) = v41;
    *((uint8_t *)self + 532) = 0;
    *((uint32_t *)self + 131) = 0;
    *((float *)self + 132) = a3;
    if ( v45 <= v44 )
    {
      v47 = *((float *)self + 135);
      v46 = *((float *)a2 + 12);
    }
    else if ( v45 <= 0.0 )
    {
      v47 = *((float *)self + 134);
      v46 = *((float *)a2 + 12);
    }
    else
    {
      v46 = *((float *)a2 + 12);
      v47 = (float)((float)((float)(*((float *)self + 135) - *((float *)self + 134)) * v44) / v45)
          + *((float *)self + 134);
    }
    *((uint8_t *)self + 552) = 0;
    v48 = v47 - v46;
    v71 = v47;
    v49 = *((float *)self + 142);
    *((float *)self + 134) = v71;
    v50 = *((float *)self + 141);
    *((float *)self + 135) = v46;
    *((uint32_t *)self + 136) = 0;
    *((float *)self + 137) = fmaxf((float)(int)__builtin_abs((int)v48) * 200.0, a3);
    v51 = *((uint32_t *)a2 + 13);
    if ( v49 <= v50 )
    {
      v52 = *((float *)self + 140);
    }
    else if ( v49 <= 0.0 )
    {
      v52 = *((float *)self + 139);
    }
    else
    {
      v52 = (float)((float)((float)(*((float *)self + 140) - *((float *)self + 139)) * v50) / v49)
          + *((float *)self + 139);
    }
    v53 = v52;
    v54 = *((float *)self + 146);
    v55 = *((float *)self + 147);
    *((float *)self + 139) = v53;
    *((uint8_t *)self + 572) = 0;
    *((uint32_t *)self + 140) = v51;
    *((uint32_t *)self + 141) = 0;
    *((float *)self + 142) = a3;
    v56 = *((uint32_t *)a2 + 14);
    if ( v55 <= v54 )
    {
      v57 = *((float *)self + 145);
    }
    else if ( v55 <= 0.0 )
    {
      v57 = *((float *)self + 144);
    }
    else
    {
      v57 = (float)((float)((float)(*((float *)self + 145) - *((float *)self + 144)) * v54) / v55)
          + *((float *)self + 144);
    }
    *((float *)self + 144) = v57;
    *((uint32_t *)self + 145) = v56;
    *((uint32_t *)self + 146) = 0;
    *((float *)self + 147) = a3;
    *((uint8_t *)self + 592) = 0;
  }
  return (int)(uintptr_t)(vox::Mutex::Unlock((vox::ReverbHQC::Self *)((char *)self + 604)));
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::Construct  (binary VA: 0xfcb870)
// Original: vox::ReverbHQC::ReverbHQC
// ----------------------------------------------------------------------------
void vox::ReverbHQC::Construct(vox::ReverbHQC::Self *self)
{
  uint8_t v1[120];

  vox::CustomDSP::Construct(self);
  *((uint32_t *)self + 79) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208C988);
  *((uint32_t *)self + 80) = 1065353216;
  *((uint32_t *)self + 81) = 0;
  *((uint32_t *)self + 82) = 0;
  *((uint32_t *)self + 84) = 0;
  *((uint32_t *)self + 85) = 1065353216;
  *((uint32_t *)self + 86) = 0;
  *((uint32_t *)self + 87) = 0;
  *((uint32_t *)self + 89) = 0;
  *((uint32_t *)self + 90) = 1065353216;
  *((uint32_t *)self + 91) = 0;
  *((uint32_t *)self + 92) = 0;
  *((uint32_t *)self + 94) = 0;
  *((uint32_t *)self + 95) = 1065353216;
  *((uint32_t *)self + 96) = 0;
  *((uint32_t *)self + 97) = 0;
  *((uint32_t *)self + 99) = 0;
  *((uint32_t *)self + 100) = 1065353216;
  *((uint32_t *)self + 101) = 0;
  *((uint32_t *)self + 102) = 0;
  *((uint32_t *)self + 104) = 0;
  *((uint32_t *)self + 105) = 1065353216;
  *((uint32_t *)self + 106) = 0;
  *((uint32_t *)self + 107) = 0;
  *((uint32_t *)self + 109) = 0;
  *((uint8_t *)self + 332) = 1;
  *((uint8_t *)self + 352) = 1;
  *((uint8_t *)self + 372) = 1;
  *((uint8_t *)self + 392) = 1;
  *((uint8_t *)self + 412) = 1;
  *((uint8_t *)self + 432) = 1;
  *((uint32_t *)self + 110) = 1065353216;
  *((uint32_t *)self + 111) = 0;
  *((uint32_t *)self + 112) = 0;
  *((uint32_t *)self + 114) = 0;
  *((uint32_t *)self + 115) = 1065353216;
  *((uint32_t *)self + 116) = 0;
  *((uint32_t *)self + 117) = 0;
  *((uint32_t *)self + 119) = 0;
  *((uint32_t *)self + 120) = 1065353216;
  *((uint32_t *)self + 121) = 0;
  *((uint32_t *)self + 122) = 0;
  *((uint32_t *)self + 124) = 0;
  *((uint32_t *)self + 125) = 1065353216;
  *((uint32_t *)self + 126) = 0;
  *((uint32_t *)self + 127) = 0;
  *((uint32_t *)self + 129) = 0;
  *((uint32_t *)self + 130) = 1065353216;
  *((uint32_t *)self + 131) = 0;
  *((uint32_t *)self + 132) = 0;
  *((uint32_t *)self + 134) = 0;
  *((uint32_t *)self + 135) = 1065353216;
  *((uint32_t *)self + 136) = 0;
  *((uint32_t *)self + 137) = 0;
  *((uint32_t *)self + 139) = 0;
  *((uint32_t *)self + 140) = 1065353216;
  *((uint32_t *)self + 141) = 0;
  *((uint32_t *)self + 142) = 0;
  *((uint8_t *)self + 452) = 1;
  *((uint8_t *)self + 472) = 1;
  *((uint8_t *)self + 492) = 1;
  *((uint8_t *)self + 512) = 1;
  *((uint8_t *)self + 532) = 1;
  *((uint8_t *)self + 552) = 1;
  *((uint8_t *)self + 572) = 1;
  *((uint32_t *)self + 144) = 0;
  *((uint32_t *)self + 145) = 1065353216;
  *((uint32_t *)self + 146) = 0;
  *((uint32_t *)self + 147) = 0;
  *((uint8_t *)self + 592) = 1;
  vox::ReverbHQPresetBank::ReverbHQPresetBank((vox::ReverbHQC::Self *)((char *)self + 596));
  vox::Mutex::Construct((vox::ReverbHQC::Self *)((char *)self + 604));
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 55) = 0;
  *((uint32_t *)self + 56) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 57) = 0;
  *((uint32_t *)self + 58) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 59) = 0;
  *((uint32_t *)self + 60) = 0;
  *((uint32_t *)self + 65) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 50) = 0;
  *((uint32_t *)self + 61) = 0;
  *((uint32_t *)self + 62) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 51) = 0;
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 54) = 0;
  *((uint32_t *)self + 67) = 0;
  *((uint32_t *)self + 68) = 0;
  *((uint32_t *)self + 69) = 0;
  *((uint32_t *)self + 78) = 0;
  *((uint32_t *)self + 70) = 0;
  *((uint32_t *)self + 71) = 0;
  *((uint32_t *)self + 72) = 0;
  *((uint32_t *)self + 73) = 0;
  *((uint32_t *)self + 74) = 0;
  *((uint32_t *)self + 75) = 0;
  vox::ReverbHQParameters::ReverbHQParameters((vox::ReverbHQParameters::Self *)v1);
  vox::ReverbHQC::SetParameters(self, (vox::ReverbHQParameters::Self *)v1, 0.0);
  vox::ReverbHQParameters::Destroy();
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::UpdateParameters  (binary VA: 0xfcbd30)
// Original: vox::ReverbHQC::UpdateParameters
// ----------------------------------------------------------------------------
void vox::ReverbHQC::UpdateParameters(vox::ReverbHQC::Self *self, float a2)
{
  vox::Mutex::Self *v2;
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm1_4
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm1_4
  float v46[27];

  vox::ReverbHQParameters::ReverbHQParameters((vox::ReverbHQParameters::Self *)v46);
  vox::Mutex::Lock((vox::ReverbHQC::Self *)((char *)self + 604));
  v2 = (vox::Mutex::Self *)((vox::ReverbHQC::Self *)((char *)self + 604));
  if ( *((uint8_t *)self + 352) == 0
    || *((uint8_t *)self + 332) == 0
    || *((uint8_t *)self + 512) == 0
    || *((uint8_t *)self + 552) == 0 )
  {
    v3 = *((float *)self + 81);
    v4 = *((float *)self + 82);
    if ( v4 > v3 )
    {
      v9 = v3 + a2;
      *((float *)self + 81) = v9;
      if ( v4 > v9 )
      {
        if ( v4 <= 0.0 )
          v5 = *((float *)self + 79);
        else
          v5 = (float)((float)((float)(*((float *)self + 80) - *((float *)self + 79)) * v9) / v4)
             + *((float *)self + 79);
LABEL_5:
        v46[0] = v5;
        v6 = *((float *)self + 87);
        v7 = *((float *)self + 86);
        if ( v6 <= v7 )
        {
          *((uint8_t *)self + 352) = 1;
        }
        else
        {
          *((float *)self + 86) = a2 + v7;
          if ( v6 > (float)(a2 + v7) )
          {
            if ( v6 <= 0.0 )
              v8 = *((float *)self + 84);
            else
              v8 = (float)((float)((float)(*((float *)self + 85) - *((float *)self + 84)) * (float)(a2 + v7)) / v6)
                 + *((float *)self + 84);
LABEL_18:
            v46[1] = v8;
            v10 = *((float *)self + 92);
            v11 = *((float *)self + 91);
            if ( v10 <= v11 )
            {
              *((uint8_t *)self + 372) = 1;
            }
            else
            {
              *((float *)self + 91) = a2 + v11;
              if ( v10 > (float)(a2 + v11) )
              {
                if ( v10 <= 0.0 )
                  v12 = *((float *)self + 89);
                else
                  v12 = (float)((float)((float)(*((float *)self + 90) - *((float *)self + 89)) * (float)(a2 + v11)) / v10)
                      + *((float *)self + 89);
LABEL_24:
                v46[2] = v12;
                v13 = *((float *)self + 97);
                v14 = *((float *)self + 96);
                if ( v13 <= v14 )
                {
                  *((uint8_t *)self + 392) = 1;
                }
                else
                {
                  *((float *)self + 96) = a2 + v14;
                  if ( v13 > (float)(a2 + v14) )
                  {
                    if ( v13 <= 0.0 )
                      v15 = *((float *)self + 94);
                    else
                      v15 = (float)((float)((float)(*((float *)self + 95) - *((float *)self + 94)) * (float)(a2 + v14))
                                  / v13)
                          + *((float *)self + 94);
LABEL_30:
                    v46[3] = v15;
                    v16 = *((float *)self + 102);
                    v17 = *((float *)self + 101);
                    if ( v16 <= v17 )
                    {
                      *((uint8_t *)self + 412) = 1;
                    }
                    else
                    {
                      *((float *)self + 101) = a2 + v17;
                      if ( v16 > (float)(a2 + v17) )
                      {
                        if ( v16 <= 0.0 )
                          v18 = *((float *)self + 99);
                        else
                          v18 = (float)((float)((float)(*((float *)self + 100) - *((float *)self + 99))
                                              * (float)(a2 + v17))
                                      / v16)
                              + *((float *)self + 99);
LABEL_36:
                        v46[4] = v18;
                        v19 = *((float *)self + 107);
                        v20 = *((float *)self + 106);
                        if ( v19 <= v20 )
                        {
                          *((uint8_t *)self + 432) = 1;
                        }
                        else
                        {
                          *((float *)self + 106) = a2 + v20;
                          if ( v19 > (float)(a2 + v20) )
                          {
                            if ( v19 <= 0.0 )
                              v21 = *((float *)self + 104);
                            else
                              v21 = (float)((float)((float)(*((float *)self + 105) - *((float *)self + 104))
                                                  * (float)(a2 + v20))
                                          / v19)
                                  + *((float *)self + 104);
LABEL_42:
                            v46[5] = v21;
                            v22 = *((float *)self + 112);
                            v23 = *((float *)self + 111);
                            if ( v22 <= v23 )
                            {
                              *((uint8_t *)self + 452) = 1;
                            }
                            else
                            {
                              *((float *)self + 111) = a2 + v23;
                              if ( v22 > (float)(a2 + v23) )
                              {
                                if ( v22 <= 0.0 )
                                  v24 = *((float *)self + 109);
                                else
                                  v24 = (float)((float)((float)(*((float *)self + 110) - *((float *)self + 109))
                                                      * (float)(a2 + v23))
                                              / v22)
                                      + *((float *)self + 109);
LABEL_48:
                                v46[7] = v24;
                                v25 = *((float *)self + 117);
                                v26 = *((float *)self + 116);
                                if ( v25 <= v26 )
                                {
                                  *((uint8_t *)self + 472) = 1;
                                }
                                else
                                {
                                  *((float *)self + 116) = a2 + v26;
                                  if ( v25 > (float)(a2 + v26) )
                                  {
                                    if ( v25 <= 0.0 )
                                      v27 = *((float *)self + 114);
                                    else
                                      v27 = (float)((float)((float)(*((float *)self + 115) - *((float *)self + 114))
                                                          * (float)(a2 + v26))
                                                  / v25)
                                          + *((float *)self + 114);
LABEL_54:
                                    v46[8] = v27;
                                    v28 = *((float *)self + 122);
                                    v29 = *((float *)self + 121);
                                    if ( v28 <= v29 )
                                    {
                                      *((uint8_t *)self + 492) = 1;
                                    }
                                    else
                                    {
                                      *((float *)self + 121) = a2 + v29;
                                      if ( v28 > (float)(a2 + v29) )
                                      {
                                        if ( v28 <= 0.0 )
                                          v30 = *((float *)self + 119);
                                        else
                                          v30 = (float)((float)((float)(*((float *)self + 120) - *((float *)self + 119))
                                                              * (float)(a2 + v29))
                                                      / v28)
                                              + *((float *)self + 119);
LABEL_60:
                                        v46[9] = v30;
                                        v31 = *((float *)self + 127);
                                        v32 = *((float *)self + 126);
                                        if ( v31 <= v32 )
                                        {
                                          *((uint8_t *)self + 512) = 1;
                                        }
                                        else
                                        {
                                          *((float *)self + 126) = a2 + v32;
                                          if ( v31 > (float)(a2 + v32) )
                                          {
                                            if ( v31 <= 0.0 )
                                              v33 = *((float *)self + 124);
                                            else
                                              v33 = (float)((float)((float)(*((float *)self + 125)
                                                                          - *((float *)self + 124))
                                                                  * (float)(a2 + v32))
                                                          / v31)
                                                  + *((float *)self + 124);
LABEL_66:
                                            v46[10] = v33;
                                            v34 = *((float *)self + 132);
                                            v35 = *((float *)self + 131);
                                            if ( v34 <= v35 )
                                            {
                                              *((uint8_t *)self + 532) = 1;
                                            }
                                            else
                                            {
                                              *((float *)self + 131) = a2 + v35;
                                              if ( v34 > (float)(a2 + v35) )
                                              {
                                                if ( v34 <= 0.0 )
                                                  v36 = *((float *)self + 129);
                                                else
                                                  v36 = (float)((float)((float)(*((float *)self + 130)
                                                                              - *((float *)self + 129))
                                                                      * (float)(a2 + v35))
                                                              / v34)
                                                      + *((float *)self + 129);
LABEL_72:
                                                v46[11] = v36;
                                                v37 = *((float *)self + 137);
                                                v38 = *((float *)self + 136);
                                                if ( v37 <= v38 )
                                                {
                                                  *((uint8_t *)self + 552) = 1;
                                                }
                                                else
                                                {
                                                  *((float *)self + 136) = a2 + v38;
                                                  if ( v37 > (float)(a2 + v38) )
                                                  {
                                                    if ( v37 <= 0.0 )
                                                      v39 = *((float *)self + 134);
                                                    else
                                                      v39 = (float)((float)((float)(*((float *)self + 135)
                                                                                  - *((float *)self + 134))
                                                                          * (float)(a2 + v38))
                                                                  / v37)
                                                          + *((float *)self + 134);
LABEL_78:
                                                    v46[12] = v39;
                                                    v40 = *((float *)self + 142);
                                                    v41 = *((float *)self + 141);
                                                    if ( v40 <= v41 )
                                                    {
                                                      *((uint8_t *)self + 572) = 1;
                                                    }
                                                    else
                                                    {
                                                      *((float *)self + 141) = a2 + v41;
                                                      if ( v40 > (float)(a2 + v41) )
                                                      {
                                                        if ( v40 <= 0.0 )
                                                          v42 = *((float *)self + 139);
                                                        else
                                                          v42 = (float)((float)((float)(*((float *)self + 140)
                                                                                      - *((float *)self + 139))
                                                                              * (float)(a2 + v41))
                                                                      / v40)
                                                              + *((float *)self + 139);
LABEL_84:
                                                        v46[13] = v42;
                                                        v43 = *((float *)self + 147);
                                                        v44 = *((float *)self + 146);
                                                        if ( v43 <= v44 )
                                                        {
                                                          *((uint8_t *)self + 592) = 1;
                                                        }
                                                        else
                                                        {
                                                          *((float *)self + 146) = a2 + v44;
                                                          if ( v43 > (float)(a2 + v44) )
                                                          {
                                                            if ( v43 <= 0.0 )
                                                              v45 = *((float *)self + 144);
                                                            else
                                                              v45 = (float)((float)((float)(*((float *)self + 145)
                                                                                          - *((float *)self + 144))
                                                                                  * (float)(a2 + v44))
                                                                          / v43)
                                                                  + *((float *)self + 144);
                                                            goto LABEL_90;
                                                          }
                                                        }
                                                        v45 = *((float *)self + 145);
LABEL_90:
                                                        v46[14] = v45;
                                                        vox::ReverbHQC::SetParameters(
                                                          self,
                                                          (vox::ReverbHQParameters::Self *)v46);
                                                        v2 = (vox::Mutex::Self *)((vox::ReverbHQC::Self *)((char *)self + 604));
                                                        goto LABEL_91;
                                                      }
                                                    }
                                                    v42 = *((float *)self + 140);
                                                    goto LABEL_84;
                                                  }
                                                }
                                                v39 = *((float *)self + 135);
                                                goto LABEL_78;
                                              }
                                            }
                                            v36 = *((float *)self + 130);
                                            goto LABEL_72;
                                          }
                                        }
                                        v33 = *((float *)self + 125);
                                        goto LABEL_66;
                                      }
                                    }
                                    v30 = *((float *)self + 120);
                                    goto LABEL_60;
                                  }
                                }
                                v27 = *((float *)self + 115);
                                goto LABEL_54;
                              }
                            }
                            v24 = *((float *)self + 110);
                            goto LABEL_48;
                          }
                        }
                        v21 = *((float *)self + 105);
                        goto LABEL_42;
                      }
                    }
                    v18 = *((float *)self + 100);
                    goto LABEL_36;
                  }
                }
                v15 = *((float *)self + 95);
                goto LABEL_30;
              }
            }
            v12 = *((float *)self + 90);
            goto LABEL_24;
          }
        }
        v8 = *((float *)self + 85);
        goto LABEL_18;
      }
    }
    else
    {
      *((uint8_t *)self + 332) = 1;
    }
    v5 = *((float *)self + 80);
    goto LABEL_5;
  }
LABEL_91:
  vox::Mutex::Unlock(v2);
  vox::ReverbHQParameters::Destroy();
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::LoadParameterBank  (binary VA: 0xfcc500)
// Original: vox::ReverbHQC::LoadParameterBank
// ----------------------------------------------------------------------------
bool vox::ReverbHQC::LoadParameterBank(void **self, char *a2)
{
  return vox::ReverbHQPresetBank::loadBank(self + 149, a2);
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::SetBankPresetByName  (binary VA: 0xfcc530)
// Original: vox::ReverbHQC::SetBankPresetByName
// ----------------------------------------------------------------------------
int vox::ReverbHQC::SetBankPresetByName(vox::ReverbHQC::Self *self, char *a2, float a3)
{
  typedef uint8_t _g4_t_PresetByName;
  typedef uint8_t _g4_t_v5[92];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_PresetByName)) > _g4_s0 ? (12u + sizeof(_g4_t_PresetByName)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v5)) > _g4_s1 ? (20u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_PresetByName &PresetByName = *reinterpret_cast<_g4_t_PresetByName *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);

  vox::ReverbHQParameters::ReverbHQParameters((vox::ReverbHQParameters::Self *)v5);
  PresetByName = vox::ReverbHQPresetBank::getPresetByName(
                   (vox::ReverbHQC::Self *)((char *)self + 596),
                   a2,
                   (vox::ReverbHQParameters::Self *)v5);
  vox::ReverbHQC::SetParameters(self, (vox::ReverbHQParameters::Self *)v5, a3);
  vox::ReverbHQParameters::Destroy();
  return PresetByName;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::GetTailDecayTime  (binary VA: 0xfcc5d0)
// Original: vox::ReverbHQC::GetTailDecayTime
// ----------------------------------------------------------------------------
long double vox::ReverbHQC::GetTailDecayTime(vox::ReverbHQC::Self *self)
{
  float v1; // xmm3_4
  float v2; // xmm1_4
  float v3; // xmm0_4

  v1 = *((float *)self + 101);
  v2 = *((float *)self + 102);
  if ( v2 <= v1 )
  {
    v3 = *((float *)self + 100);
    goto LABEL_6;
  }
  if ( v2 <= 0.0 )
  {
    v3 = *((float *)self + 99);
LABEL_6:
    if ( v3 <= 0.0 )
      return 0.5;
    return (float)((float)(v3 * 1.6f) + 0.5);
  }
  v3 = (float)((float)((float)(*((float *)self + 100) - *((float *)self + 99)) * v1) / v2) + *((float *)self + 99);
  if ( v3 <= 0.0 )
    return 0.5;
  return (float)((float)(v3 * 1.6f) + 0.5);
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQC::Update  (binary VA: 0xfcc680)
// Original: vox::ReverbHQC::Update
// ----------------------------------------------------------------------------
void vox::ReverbHQC::Update(vox::ReverbHQC::Self *self, const int *a2, int *s, int a4)
{
  float v4; // xmm1_4
  int v5; // xmm0_4
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  float v44; // xmm1_4
  int v45;
  int v46;
  float TailDecayTime;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  const int *i;
  float v63;
  int *v64;
  int v65;
  int v66;
  const int *v67;

  vox::ReverbHQC::UpdateParameters(self, (float)a4 / *((float *)self + 1));
  if ( *((uint32_t *)self + 2) != 0 )
  {
    v4 = *((float *)self + 78);
    v5 = 1065353216;
    if ( v4 > 1.0
      || (v63 = *((float *)self + 1),
          TailDecayTime = vox::ReverbHQC::GetTailDecayTime(self),
          v5 = 0,
          v44 = v4 - (float)((float)a4 / (float)(TailDecayTime * v63)),
          *((float *)self + 78) = v44,
          v44 < 0.0) )
    {
      *((uint32_t *)self + 78) = v5;
    }
    v67 = &a2[2 * a4];
    v64 = s;
    for ( i = a2; v67 > i; v64 += 2 )
    {
      v6 = *((uint32_t *)self + 4);
      v7 = *((uint32_t *)self + 75);
      v8 = i[1] + *i + ((v6 * (*((uint32_t *)self + 5) - (i[1] + *i))) >> 14);
      v9 = *((uint32_t *)self + 6) - v8;
      *((uint32_t *)self + 5) = v8;
      v10 = v6 * v9;
      v11 = v7 & *((uint32_t *)self + 7);
      v12 = (v10 >> 14) + v8;
      v13 = *((uint32_t *)self + 8);
      *((uint32_t *)self + 6) = v12;
      *(uint32_t *)(v13 + 4 * v11) = v12;
      v14 = (*(uint32_t *)(*((uint32_t *)self + 20)
                       + 4 * (*((uint32_t *)self + 19) & (*((uint32_t *)self + 75) - *((uint32_t *)self + 27))))
           * *((uint32_t *)self + 15)) >> 14;
      v48 = (*(uint32_t *)(*((uint32_t *)self + 22)
                       + 4 * (*((uint32_t *)self + 21) & (*((uint32_t *)self + 75) - *((uint32_t *)self + 28))))
           * *((uint32_t *)self + 16)) >> 14;
      v50 = (*(uint32_t *)(*((uint32_t *)self + 24)
                       + 4 * (*((uint32_t *)self + 23) & (*((uint32_t *)self + 75) - *((uint32_t *)self + 29))))
           * *((uint32_t *)self + 17)) >> 14;
      v53 = (*(uint32_t *)(*((uint32_t *)self + 26)
                       + 4 * (*((uint32_t *)self + 25) & (*((uint32_t *)self + 75) - *((uint32_t *)self + 30))))
           * *((uint32_t *)self + 18)) >> 14;
      v15 = *(uint32_t *)(*((uint32_t *)self + 8) + 4 * (*((uint32_t *)self + 7) & (v7 - *((uint32_t *)self + 9))))
          + ((v53 + v50 + v14 + v48) >> 1);
      v66 = v15 - v48;
      v65 = v15 - v14;
      *(uint32_t *)(*((uint32_t *)self + 20) + 4 * (*((uint32_t *)self + 75) & *((uint32_t *)self + 19))) = v15 - v14;
      *(uint32_t *)(*((uint32_t *)self + 22) + 4 * (*((uint32_t *)self + 75) & *((uint32_t *)self + 21))) = v15 - v48;
      *(uint32_t *)(*((uint32_t *)self + 24) + 4 * (*((uint32_t *)self + 75) & *((uint32_t *)self + 23))) = v15 - v50;
      *(uint32_t *)(*((uint32_t *)self + 26) + 4 * (*((uint32_t *)self + 75) & *((uint32_t *)self + 25))) = v15 - v53;
      v16 = *((uint32_t *)self + 7);
      v17 = *((uint32_t *)self + 8);
      v54 = *(uint32_t *)(v17 + 4 * (v16 & (v7 - *((uint32_t *)self + 11))));
      v57 = *(uint32_t *)(v17 + 4 * (v16 & (v7 - *((uint32_t *)self + 12))));
      v60 = *(uint32_t *)(v17 + 4 * (v16 & (v7 - *((uint32_t *)self + 13))));
      v18 = *((uint32_t *)self + 75);
      v19 = *((uint32_t *)self + 58);
      v20 = ((*((uint32_t *)self + 32) * *(uint32_t *)(v17 + 4 * (v16 & (v7 - *((uint32_t *)self + 10))))) >> 14)
          + ((*(uint32_t *)(*((uint32_t *)self + 56) + 4 * (*((uint32_t *)self + 55) & (v18 - *((uint32_t *)self + 63))))
            * *((uint32_t *)self + 51)) >> 12);
      v21 = v54 * *((uint32_t *)self + 32);
      v22 = v20 + ((*((uint32_t *)self + 67) * (*((uint32_t *)self + 71) - v20)) >> 12);
      v23 = *((uint32_t *)self + 52);
      *((uint32_t *)self + 71) = v22;
      v51 = v22;
      v24 = (*(uint32_t *)(v19 + 4 * (*((uint32_t *)self + 57) & (v18 - *((uint32_t *)self + 64)))) * v23) >> 12;
      v25 = *((uint32_t *)self + 60);
      v26 = (v21 >> 14) + v24;
      v27 = *((uint32_t *)self + 59) & (v18 - *((uint32_t *)self + 65));
      v28 = v26 + ((*((uint32_t *)self + 68) * (*((uint32_t *)self + 72) - v26)) >> 12);
      v29 = *((uint32_t *)self + 53);
      *((uint32_t *)self + 72) = v28;
      v55 = v28;
      v30 = ((*(uint32_t *)(v25 + 4 * v27) * v29) >> 12) + ((v57 * *((uint32_t *)self + 32)) >> 14);
      v58 = v30 + ((*((uint32_t *)self + 69) * (*((uint32_t *)self + 73) - v30)) >> 12);
      *((uint32_t *)self + 73) = v58;
      v31 = *((uint32_t *)self + 42);
      v32 = ((*(uint32_t *)(*((uint32_t *)self + 62) + 4 * (*((uint32_t *)self + 61) & (v18 - *((uint32_t *)self + 66))))
            * *((uint32_t *)self + 54)) >> 12)
          + ((v60 * *((uint32_t *)self + 32)) >> 14);
      v33 = v18 - *((uint32_t *)self + 48);
      v34 = v32 + ((*((uint32_t *)self + 70) * (*((uint32_t *)self + 74) - v32)) >> 12);
      v35 = *((uint32_t *)self + 36);
      *((uint32_t *)self + 74) = v34;
      v61 = v34;
      v36 = *((uint32_t *)self + 41);
      v45 = (*(uint32_t *)(v31 + 4 * (v36 & v33)) * v35) >> 12;
      v37 = *((uint32_t *)self + 33);
      v46 = v45 - ((v37 * v51) >> 12);
      *(uint32_t *)(v31 + 4 * (v36 & v18)) = v51 + ((v46 * v37) >> 12);
      v38 = *((uint32_t *)self + 45);
      v39 = *((uint32_t *)self + 46);
      v40 = ((*(uint32_t *)(v39 + 4 * (v38 & (*((uint32_t *)self + 75) - *((uint32_t *)self + 50)))) * *((uint32_t *)self + 38)) >> 12)
          - ((*((uint32_t *)self + 33) * v55) >> 12);
      *(uint32_t *)(v39 + 4 * (v38 & *((uint32_t *)self + 75))) = v55 + ((v40 * *((uint32_t *)self + 33)) >> 12);
      v41 = ((*(uint32_t *)(*((uint32_t *)self + 40)
                        + 4 * (*((uint32_t *)self + 39) & (*((uint32_t *)self + 75) - *((uint32_t *)self + 47))))
            * *((uint32_t *)self + 35)) >> 12)
          - ((*((uint32_t *)self + 33) * v58) >> 12);
      *(uint32_t *)(*((uint32_t *)self + 40) + 4 * (*((uint32_t *)self + 39) & *((uint32_t *)self + 75))) = v58 + ((v41 * *((uint32_t *)self + 33)) >> 12);
      v42 = *((uint32_t *)self + 33);
      v49 = ((*(uint32_t *)(*((uint32_t *)self + 44)
                        + 4 * (*((uint32_t *)self + 43) & (*((uint32_t *)self + 75) - *((uint32_t *)self + 49))))
            * *((uint32_t *)self + 37)) >> 12)
          - ((v42 * v61) >> 12);
      *(uint32_t *)(*((uint32_t *)self + 44) + 4 * (*((uint32_t *)self + 75) & *((uint32_t *)self + 43))) = v61 + ((v49 * v42) >> 12);
      v52 = *((uint32_t *)self + 34);
      v56 = v46 + ((v52 * (v49 + v40 - v41)) >> 11);
      v59 = v40 + ((v52 * (v49 + v41 - v46)) >> 11);
      *(uint32_t *)(*((uint32_t *)self + 56) + 4 * (*((uint32_t *)self + 75) & *((uint32_t *)self + 55))) = v41 + ((v52 * (v49 + v46 - v40)) >> 11);
      *(uint32_t *)(*((uint32_t *)self + 58) + 4 * (*((uint32_t *)self + 75) & *((uint32_t *)self + 57))) = v56;
      *(uint32_t *)(*((uint32_t *)self + 60) + 4 * (*((uint32_t *)self + 75) & *((uint32_t *)self + 59))) = v49 + ((v52 * (-v46 - v40 - v41)) >> 11);
      *(uint32_t *)(*((uint32_t *)self + 62) + 4 * ((*((uint32_t *)self + 75))++ & *((uint32_t *)self + 61))) = v59;
      *v64 = (*i * *((uint32_t *)self + 76)
            + *((uint32_t *)self + 77) * ((*((uint32_t *)self + 31) * v56 + *((uint32_t *)self + 14) * v65) >> 12)) >> 12;
      v43 = i[1] * *((uint32_t *)self + 76);
      i += 2;
      v64[1] = (v43 + *((uint32_t *)self + 77) * ((*((uint32_t *)self + 31) * v59 + *((uint32_t *)self + 14) * v66) >> 12)) >> 12;
    }
  }
  else
  {
    memset(s, 0, 4 * a4);
  }
}


