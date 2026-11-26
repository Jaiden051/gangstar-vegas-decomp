#include "Core/Utils/DecompTypes.h"
#include "vox_internal.h"

// ----------------------------------------------------------------------------
// Function: sub_FB9260  (binary VA: 0xfb9260)
// Original: sub_FB9260
// ----------------------------------------------------------------------------
int sub_FB9260(uint32_t *a1, int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  uint16_t **v8;
  int v9;
  uint16_t *v10;
  uint16_t *v11;
  int v12;
  uint16_t *v13;
  int result;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  int v18;
  int i;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  uint32_t *v29;

  v2 = (uint32_t *)a1[81];
  v27 = a1[61] - 1;
  v3 = v2[4];
  v22 = a1[55] - 1;
  v4 = v2[5];
  v24 = v3;
  if ( v3 >= v4 )
  {
LABEL_25:
    ++v2[2];
    v15 = (uint32_t *)a1[81];
    if ( (int)a1[56] <= 1 )
    {
      if ( v15[2] < (unsigned int)(a1[55] - 1) )
        v16 = *(uint32_t *)(a1[57] + 12);
      else
        v16 = *(uint32_t *)(a1[57] + 72);
      v15[5] = v16;
    }
    else
    {
      v15[5] = 1;
    }
    v15[3] = 0;
    v15[4] = 0;
    return 1;
  }
  else
  {
    v26 = v2[3];
    v28 = 8 * v3;
    v29 = v2 + 6;
    if ( v27 < v26 )
      goto LABEL_24;
    while ( 1 )
    {
      v25 = 0;
      for ( i = 0; a1[56] > v25; ++v25 )
      {
        v5 = (uint32_t *)a1[v25 + 57];
        if ( v27 <= v26 )
          v21 = v5[17];
        else
          v21 = v5[13];
        v23 = v5[16] * v26;
        if ( (int)v5[14] > 0 )
        {
          v18 = 0;
          v20 = v28;
          do
          {
            if ( v22 <= v2[2] && v5[18] <= v24 + v18 )
            {
              jzero_far((void *)v2[i + 6], v5[13] << 7);
              v6 = v5[13];
              if ( v6 > 0 )
              {
                v12 = 0;
                v17 = v5;
                do
                {
                  v13 = (uint16_t *)v2[i + 6 + v12++];
                  *v13 = *(uint16_t *)v2[i + 5];
                  v5 = v17;
                  v6 = v17[13];
                }
                while ( v6 > v12 );
              }
            }
            else
            {
              (*(void (**)(uint32_t *, uint32_t *, uint32_t, uint32_t, int, int, int))(a1[85] + 4))(
                a1,
                v5,
                *(uint32_t *)(a2 + 4 * v5[1]),
                v2[i + 6],
                v20,
                v23,
                v21);
              v6 = v5[13];
              if ( v21 < v6 )
              {
                v7 = v21 + i + 4;
                jzero_far((void *)v2[v7 + 2], (v6 - v21) << 7);
                v6 = v5[13];
                if ( v21 < v6 )
                {
                  v8 = (uint16_t **)&v2[v7 + 2];
                  v9 = v21;
                  do
                  {
                    v10 = *(v8 - 1);
                    v11 = *v8;
                    ++v9;
                    ++v8;
                    *v11 = *v10;
                    v6 = v5[13];
                  }
                  while ( v6 > v9 );
                }
              }
            }
            i += v6;
            ++v18;
            v20 += 8;
          }
          while ( v5[14] > v18 );
        }
      }
      result = (*(int (**)(uint32_t *, uint32_t *))(a1[86] + 4))(a1, v29);
      if ( (uint8_t)result == 0 )
        break;
      if ( v27 < ++v26 )
      {
        v4 = v2[5];
LABEL_24:
        ++v24;
        v28 += 8;
        v2[3] = 0;
        v26 = 0;
        v29 = v2 + 6;
        if ( v24 >= v4 )
          goto LABEL_25;
      }
    }
    v2[4] = v24;
    v2[3] = v26;
  }
  return result;
}



// ============================================================================
// Address:   0xfb95a0 (size: 314 bytes)
// Symbol:    sub_FB95A0
// Demangled: sub_FB95A0
// ============================================================================
int (*sub_FB95A0(uint32_t *a1, int a2))(int)
{
  uint32_t *v2;
  uint32_t *v3;
  int v5;
  int v6;

  v2 = (uint32_t *)a1[81];
  v2[2] = 0;
  v3 = (uint32_t *)a1[81];
  if ( (int)a1[56] <= 1 )
  {
    v5 = a1[57];
    if ( v3[2] < (unsigned int)(a1[55] - 1) )
      v6 = *(uint32_t *)(v5 + 12);
    else
      v6 = *(uint32_t *)(v5 + 72);
    v3[5] = v6;
  }
  else
  {
    v3[5] = 1;
  }
  v3[3] = 0;
  v3[4] = 0;
  if ( a2 == 2 )
  {
    if ( v2[16] == 0 )
    {
      *(uint32_t *)(*a1 + 20) = 4;
      G4_VCALL<void>(a1, 0);
    }
    v2[1] = (uint32_t)(uintptr_t)(sub_FB96E0);
    return (int (*)(int))(uintptr_t)(sub_FB96E0);
  }
  else if ( a2 == 3 )
  {
    if ( v2[16] == 0 )
    {
      *(uint32_t *)(*a1 + 20) = 4;
      G4_VCALL<void>(a1, 0);
    }
    v2[1] = (uint32_t)(uintptr_t)(sub_FB9940);
    return (int (*)(int))sub_FB9940;
  }
  else if ( a2 != 0 )
  {
    *(uint32_t *)(*a1 + 20) = 4;
    return (int (*)(int))G4_VCALL<int>(a1, 0);
  }
  else
  {
    if ( v2[16] != 0 )
    {
      *(uint32_t *)(*a1 + 20) = 4;
      G4_VCALL<void>(a1, 0);
    }
    v2[1] = (uint32_t)(uintptr_t)(sub_FB9260);
    return (int (*)(int))sub_FB9260;
  }
}
// ----------------------------------------------------------------------------
// Function: sub_FB96E0  (binary VA: 0xfb96e0)
// Original: sub_FB96E0
// ----------------------------------------------------------------------------
int sub_FB96E0(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  unsigned int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  unsigned int i;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint32_t v24[6];

  v19 = (uint32_t *)a1[81];
  if ( (int)a1[56] > 0 )
  {
    v1 = 0;
    do
    {
      v24[v1] = (*(int (**)(uint32_t *, uint32_t, int, uint32_t, uint32_t))(a1[1] + 32))(
                  a1,
                  v19[*(uint32_t *)(a1[v1 + 57] + 4) + 16],
                  v19[2] * *(uint32_t *)(a1[v1 + 57] + 12),
                  *(uint32_t *)(a1[v1 + 57] + 12),
                  0);
      ++v1;
    }
    while ( a1[56] > v1 );
  }
  v2 = v19[4];
  v3 = v19[5];
  v15 = v2;
  if ( v2 >= v3 )
  {
LABEL_23:
    ++v19[2];
    v13 = (uint32_t *)a1[81];
    if ( (int)a1[56] <= 1 )
    {
      if ( v13[2] < (unsigned int)(a1[55] - 1) )
        v14 = *(uint32_t *)(a1[57] + 12);
      else
        v14 = *(uint32_t *)(a1[57] + 72);
      v13[5] = v14;
    }
    else
    {
      v13[5] = 1;
    }
    v13[3] = 0;
    v13[4] = 0;
    return 1;
  }
  else
  {
    v4 = v19[3];
    v16 = 4 * v2;
    for ( i = v4; ; i = 0 )
    {
      v5 = v19;
      if ( a1[61] > v4 )
        break;
LABEL_20:
      ++v15;
      v16 += 4;
      v5[3] = 0;
      if ( v15 >= v3 )
        goto LABEL_23;
      v4 = 0;
    }
    while ( 1 )
    {
      v18 = 0;
      v23 = 0;
      v6 = a1[56];
      if ( v6 > 0 )
      {
        do
        {
          v7 = a1[v18 + 57];
          v8 = *(uint32_t *)(v7 + 56);
          v9 = *(uint32_t *)(v7 + 52);
          if ( v8 > 0 )
          {
            v22 = 0;
            v21 = i * (v9 << 7);
            v20 = v24[v18] + v16;
            do
            {
              if ( v9 > 0 )
              {
                v10 = v21 + *(uint32_t *)(v20 + 4 * v22);
                v11 = v23;
                do
                {
                  v19[v11++ + 6] = v10;
                  v9 = *(uint32_t *)(v7 + 52);
                  v10 += 128;
                }
                while ( v11 - v23 < v9 );
                v8 = *(uint32_t *)(v7 + 56);
                v23 = v11;
              }
              ++v22;
            }
            while ( v22 < v8 );
            v6 = a1[56];
          }
          ++v18;
        }
        while ( v18 < v6 );
      }
      result = (*(int (**)(uint32_t *, uint32_t *))(a1[86] + 4))(a1, v19 + 6);
      if ( (uint8_t)result == 0 )
        break;
      if ( a1[61] <= ++i )
      {
        v5 = v19;
        v3 = v19[5];
        goto LABEL_20;
      }
    }
    v19[4] = v15;
    v19[3] = i;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FB9940  (binary VA: 0xfb9940)
// Original: sub_FB9940
// ----------------------------------------------------------------------------
int sub_FB9940(uint32_t *a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int i;
  uint16_t *v8;
  int v9;
  int16_t v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  uint32_t *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int result;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  int16_t *v28;
  int16_t v29;
  uint16_t *v30;
  int k;
  uint32_t *v32;
  int v33;
  int v34;
  void *v35;
  unsigned int v36;
  size_t v37;
  int v38;
  int v39;
  int v40;
  int v41;
  unsigned int m;
  uint32_t *v43;
  int v44;
  uint32_t *v45;
  int v46;
  int v47;
  unsigned int v48;
  int v49;
  int v50;
  int v51;
  unsigned int v52;
  int v53;
  int j;
  unsigned int v55;
  char *v56;
  uint32_t v57[7];

  v2 = a1;
  v36 = a1[55] - 1;
  v45 = (uint32_t *)a1[81];
  v43 = (uint32_t *)a1[16];
  if ( (int)a1[14] > 0 )
  {
    v39 = 0;
    v3 = a1;
    do
    {
      v41 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t, int))(v3[1] + 32))(
              a1,
              v45[v39 + 16],
              v45[2] * v43[3],
              v43[3],
              1);
      v4 = v45[2];
      if ( v36 <= v4 )
      {
        v24 = v43[3];
        if ( v43[8] % v24 != 0 )
          v24 = v43[8] % v24;
        v46 = v24;
      }
      else
      {
        v46 = v43[3];
      }
      v55 = v43[7];
      v5 = v43[2];
      v6 = v5 - v55 % v5;
      if ( (int)(v55 % v5) <= 0 )
        v6 = v55 % v5;
      if ( v46 > 0 )
      {
        v48 = v43[2];
        for ( i = 0; i != v46; ++i )
        {
          v34 = *(uint32_t *)(v41 + 4 * i);
          (*(void (**)(uint32_t *, uint32_t *, uint32_t, int, int, uint32_t, unsigned int))(a1[85] + 4))(
            a1,
            v43,
            *(uint32_t *)(a2 + 4 * v39),
            v34,
            8 * i,
            0,
            v55);
          if ( v6 > 0 )
          {
            v35 = (void *)(v34 + (v55 << 7));
            jzero_far(v35, v6 << 7);
            v8 = (uint16_t *)(v35);
            v9 = 0;
            v10 = *((uint16_t *)v35 - 64);
            do
            {
              ++v9;
              *v8 = v10;
              v8 += 64;
            }
            while ( v9 != v6 );
          }
        }
        v5 = v48;
        v4 = v45[2];
      }
      if ( v36 == v4 )
      {
        v25 = v55 + v6;
        v50 = v25 / v5;
        if ( v46 < v43[3] )
        {
          v26 = v46;
          v37 = v25 << 7;
          v52 = v5 << 7;
          do
          {
            v27 = *(uint32_t *)(v41 + 4 * v46 - 4);
            v56 = *(char **)(v41 + 4 * v26);
            jzero_far(v56, v37);
            if ( v50 != 0 )
            {
              v28 = (int16_t *)(((v5 - 1) << 7) + v27);
              for ( j = 0; j != v50; ++j )
              {
                v29 = *v28;
                if ( (int)v5 > 0 )
                {
                  v30 = (uint16_t *)(v56);
                  for ( k = 0; k != v5; ++k )
                  {
                    *v30 = v29;
                    v30 += 64;
                  }
                }
                v56 += v52;
                v28 = (int16_t *)((char *)v28 + v52);
              }
            }
            v26 = ++v46;
          }
          while ( v43[3] > v46 );
        }
      }
      v3 = a1;
      ++v39;
      v43 += 21;
    }
    while ( a1[14] > v39 );
    v2 = a1;
    v45 = (uint32_t *)a1[81];
  }
  if ( (int)v2[56] > 0 )
  {
    v11 = v2;
    v12 = 0;
    do
    {
      v57[v12] = (*(int (**)(uint32_t *, uint32_t, int, uint32_t, uint32_t))(v11[1] + 32))(
                   v11,
                   v45[*(uint32_t *)(v11[v12 + 57] + 4) + 16],
                   v45[2] * *(uint32_t *)(v11[v12 + 57] + 12),
                   *(uint32_t *)(v11[v12 + 57] + 12),
                   0);
      ++v12;
    }
    while ( v12 < v11[56] );
  }
  v13 = v45[4];
  v14 = v45[5];
  v38 = v13;
  if ( v14 <= v13 )
  {
LABEL_52:
    ++v45[2];
    v32 = (uint32_t *)a1[81];
    if ( (int)a1[56] <= 1 )
    {
      if ( v32[2] < (unsigned int)(a1[55] - 1) )
        v33 = *(uint32_t *)(a1[57] + 12);
      else
        v33 = *(uint32_t *)(a1[57] + 72);
      v32[5] = v33;
    }
    else
    {
      v32[5] = 1;
    }
    v32[3] = 0;
    v32[4] = 0;
    return 1;
  }
  else
  {
    v15 = v45[3];
    v40 = 4 * v13;
    for ( m = v15; ; m = 0 )
    {
      v16 = v45;
      if ( a1[61] > v15 )
        break;
LABEL_36:
      ++v38;
      v40 += 4;
      v16[3] = 0;
      if ( v38 >= v14 )
        goto LABEL_52;
      v15 = 0;
    }
    while ( 1 )
    {
      v53 = 0;
      v44 = 0;
      v17 = a1[56];
      if ( v17 > 0 )
      {
        do
        {
          v18 = a1[v44 + 57];
          v19 = *(uint32_t *)(v18 + 56);
          v20 = *(uint32_t *)(v18 + 52);
          if ( v19 > 0 )
          {
            v51 = 0;
            v49 = m * (v20 << 7);
            v47 = v57[v44] + v40;
            do
            {
              if ( v20 > 0 )
              {
                v21 = v49 + *(uint32_t *)(v47 + 4 * v51);
                v22 = v53;
                do
                {
                  v45[v22++ + 6] = v21;
                  v20 = *(uint32_t *)(v18 + 52);
                  v21 += 128;
                }
                while ( v22 - v53 < v20 );
                v19 = *(uint32_t *)(v18 + 56);
                v53 = v22;
              }
              ++v51;
            }
            while ( v51 < v19 );
            v17 = a1[56];
          }
          ++v44;
        }
        while ( v44 < v17 );
      }
      result = (*(int (**)(uint32_t *, uint32_t *))(a1[86] + 4))(a1, v45 + 6);
      if ( (uint8_t)result == 0 )
        break;
      if ( ++m >= a1[61] )
      {
        v16 = v45;
        v14 = v45[5];
        goto LABEL_36;
      }
    }
    v45[4] = v38;
    v45[3] = m;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FBA0D0  (binary VA: 0xfba0d0)
// Original: sub_FBA0D0
// ----------------------------------------------------------------------------
int sub_FBA0D0(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  unsigned int i;
  __m128i v6;
  int v7;
  __m128i v8;
  __m128i v9;
  int v10;
  int v11;
  int v12;
  bool v13;
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
  unsigned int v36;
  __m128i v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  int v43;

  v1 = *(uint32_t *)(a1 + 332);
  result = (**(int (***)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(a1 + 4))(
             a1,
             1,
             0x2000,
             v14,
             v15,
             v16,
             v17,
             v18,
             v19,
             v20,
             v21,
             v22,
             v23,
             v24,
             v25,
             v26,
             v27,
             v28,
             v29,
             v30,
             v31,
             v32,
             v33,
             v34);
  *(uint32_t *)(v1 + 8) = result;
  v40 = -((uint8_t)(result & 0xF) >> 2) & 3;
  if ( v40 != 0 )
  {
    v3 = 8421375;
    v4 = 0x8000;
    v42 = 0;
    for ( i = 0; i < v40; ++i )
    {
      *(uint32_t *)(result + 4 * i + 2048) = v4;
      *(uint32_t *)(result + 4 * i) = v42;
      *(uint32_t *)(result + 4 * i + 5120) = v3;
      v42 += 19595;
      *(uint32_t *)(result + 4 * i + 1024) = 38470 * i;
      v4 += 7471;
      v3 += 0x8000;
      *(uint32_t *)(result + 4 * i + 3072) = -11059 * i;
      *(uint32_t *)(result + 4 * i + 4096) = -21709 * i;
      *(uint32_t *)(result + 4 * i + 6144) = -27439 * i;
      *(uint32_t *)(result + 4 * i + 7168) = -5329 * i;
    }
    v43 = 256 - i;
  }
  else
  {
    v43 = 256;
    i = 0;
  }
  v36 = 256 - v40;
  v39 = (256 - v40) >> 2;
  v35 = 4 * v39;
  if ( 4 * v39 == 0 )
    goto LABEL_10;
  v38 = result + 4 * v40;
g4_m128_lane<int64_t>(v6, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(i), _mm_cvtsi32_si128(i + 1)), 0);
g4_m128_lane<int64_t>(v6, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(i + 2), _mm_cvtsi32_si128(i + 3)), 0);
  v41 = 0;
  v7 = 0;
  while ( 1 )
  {
    v37 = _mm_add_epi32(v6, G4_BITCAST<__m128i>(xmmword_1C7C400));
    ++v41;
    *(__m128i *)(v38 + v7) = _mm_unpacklo_epi32(
                               _mm_shuffle_epi32(_mm_mul_epu32(v6, G4_BITCAST<__m128i>(xmmword_1C7C770)), 8),
                               _mm_shuffle_epi32(
                                 _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C770), 4), _mm_srli_si128(v6, 4)),
                                 8));
    *(__m128i *)(v38 + 1024 + v7) = _mm_unpacklo_epi32(
                                      _mm_shuffle_epi32(_mm_mul_epu32(v6, G4_BITCAST<__m128i>(xmmword_1C7C780)), 8),
                                      _mm_shuffle_epi32(
                                        _mm_mul_epu32(
                                          _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C780), 4),
                                          _mm_srli_si128(v6, 4)),
                                        8));
    *(__m128i *)(v38 + 2048 + v7) = _mm_add_epi32(
                                      _mm_unpacklo_epi32(
                                        _mm_shuffle_epi32(_mm_mul_epu32(v6, G4_BITCAST<__m128i>(xmmword_1C7C790)), 8),
                                        _mm_shuffle_epi32(
                                          _mm_mul_epu32(
                                            _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C790), 4),
                                            _mm_srli_si128(v6, 4)),
                                          8)),
                                      G4_BITCAST<__m128i>(xmmword_1C7C7A0));
    *(__m128i *)(v38 + 3072 + v7) = _mm_unpacklo_epi32(
                                      _mm_shuffle_epi32(_mm_mul_epu32(v6, G4_BITCAST<__m128i>(xmmword_1C7C7B0)), 8),
                                      _mm_shuffle_epi32(
                                        _mm_mul_epu32(
                                          _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C7B0), 4),
                                          _mm_srli_si128(v6, 4)),
                                        8));
    v8 = _mm_add_epi32(v6, G4_BITCAST<__m128i>(xmmword_1C7C7D0));
    *(__m128i *)(v38 + 4096 + v7) = _mm_unpacklo_epi32(
                                      _mm_shuffle_epi32(_mm_mul_epu32(v6, G4_BITCAST<__m128i>(xmmword_1C7C7C0)), 8),
                                      _mm_shuffle_epi32(
                                        _mm_mul_epu32(
                                          _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C7C0), 4),
                                          _mm_srli_si128(v6, 4)),
                                        8));
    *(__m128i *)(v38 + 5120 + v7) = _mm_add_epi32(
                                      _mm_unpacklo_epi32(
                                        _mm_shuffle_epi32(_mm_mul_epu32(v8, G4_BITCAST<__m128i>(xmmword_1C7C7A0)), 8),
                                        _mm_shuffle_epi32(
                                          _mm_mul_epu32(
                                            _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C7A0), 4),
                                            _mm_srli_si128(v8, 4)),
                                          8)),
                                      G4_BITCAST<__m128i>(xmmword_1C7C450));
    v9 = _mm_srli_si128(v6, 4);
    *(__m128i *)(result + 4 * (-((uint8_t)(result & 0xF) >> 2) & 3) + 6144 + v7) = _mm_unpacklo_epi32(
                                                                                             _mm_shuffle_epi32(
                                                                                               _mm_mul_epu32(
                                                                                                 v6,
                                                                                                 G4_BITCAST<__m128i>(xmmword_1C7C7E0)),
                                                                                               8),
                                                                                             _mm_shuffle_epi32(
                                                                                               _mm_mul_epu32(
                                                                                                 _mm_srli_si128(
                                                                                                   G4_BITCAST<__m128i>(xmmword_1C7C7E0),
                                                                                                   4),
                                                                                                 v9),
                                                                                               8));
    *(__m128i *)(result + 4 * (-((uint8_t)(result & 0xF) >> 2) & 3) + 7168 + v7) = _mm_unpacklo_epi32(
                                                                                             _mm_shuffle_epi32(
                                                                                               _mm_mul_epu32(
                                                                                                 v6,
                                                                                                 G4_BITCAST<__m128i>(xmmword_1C7C7F0)),
                                                                                               8),
                                                                                             _mm_shuffle_epi32(
                                                                                               _mm_mul_epu32(
                                                                                                 _mm_srli_si128(
                                                                                                   G4_BITCAST<__m128i>(xmmword_1C7C7F0),
                                                                                                   4),
                                                                                                 v9),
                                                                                               8));
    v7 += 16;
    if ( v41 >= v39 )
      break;
    v6 = v37;
  }
  v43 -= v35;
  i += v35;
  if ( v36 != v35 )
  {
LABEL_10:
    result += 4 * i;
    v10 = 7471 * i + 0x8000;
    v11 = (i << 15) + 8421375;
    do
    {
      *(uint32_t *)(result + 2048) = v10;
      *(uint32_t *)result = 19595 * i;
      *(uint32_t *)(result + 5120) = v11;
      v10 += 7471;
      *(uint32_t *)(result + 1024) = 38470 * i;
      v11 += 0x8000;
      *(uint32_t *)(result + 3072) = -11059 * i;
      *(uint32_t *)(result + 4096) = -21709 * i;
      *(uint32_t *)(result + 6144) = -27439 * i;
      v12 = -5329 * i++;
      v13 = v43-- == 1;
      *(uint32_t *)(result + 7168) = v12;
      result += 4;
    }
    while ( !v13 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FBA580  (binary VA: 0xfba580)
// Original: sub_FBA580
// ----------------------------------------------------------------------------
int sub_FBA580(int a1, int a2, uint32_t *a3, int a4, int a5)
{
  bool v5;
  int result;
  uint8_t *v7;
  int i;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v12 = *(uint32_t *)(a1 + 28);
  v16 = 4 * a4;
  v5 = a5 - 1 < 0;
  v17 = a5 - 1;
  result = *(uint32_t *)(*(uint32_t *)(a1 + 332) + 8);
  if ( !v5 )
  {
    do
    {
      v7 = *(uint8_t **)(a2 - 4 * a4 + v16);
      v13 = *(uint32_t *)(*a3 + v16);
      v14 = *(uint32_t *)(a3[1] + v16);
      v15 = *(uint32_t *)(a3[2] + v16);
      if ( v12 != 0 )
      {
        for ( i = 0; i != v12; ++i )
        {
          v9 = *v7;
          v10 = v7[1];
          v11 = v7[2];
          v7 += 3;
          *(uint8_t *)(v13 + i) = (unsigned int)(*(uint32_t *)(result + 4 * v11 + 2048)
                                             + *(uint32_t *)(result + 4 * v10 + 1024)
                                             + *(uint32_t *)(result + 4 * v9)) >> 16;
          *(uint8_t *)(v14 + i) = (unsigned int)(*(uint32_t *)(result + 4 * v11 + 5120)
                                             + *(uint32_t *)(result + 4 * v10 + 4096)
                                             + *(uint32_t *)(result + 4 * v9 + 3072)) >> 16;
          *(uint8_t *)(v15 + i) = (unsigned int)(*(uint32_t *)(result + 4 * v11 + 7168)
                                             + *(uint32_t *)(result + 4 * v10 + 6144)
                                             + *(uint32_t *)(result + 4 * v9 + 5120)) >> 16;
        }
      }
      v16 += 4;
      --v17;
    }
    while ( v17 >= 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FBA6B0  (binary VA: 0xfba6b0)
// Original: sub_FBA6B0
// ----------------------------------------------------------------------------
int sub_FBA6B0(int a1, int a2, uint32_t *a3, int a4, int a5)
{
  int v5;
  int result;
  uint8_t *v7;
  int j;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int i;

  v12 = *(uint32_t *)(a1 + 28);
  v14 = 4 * a4;
  v5 = *(uint32_t *)(*(uint32_t *)(a1 + 332) + 8);
  result = a2 - 4 * a4;
  for ( i = a5 - 1; i >= 0; --i )
  {
    v7 = *(uint8_t **)(a2 - 4 * a4 + v14);
    result = *(uint32_t *)(*a3 + v14);
    v13 = result;
    if ( v12 != 0 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v9 = v7[2];
        v10 = *v7;
        v11 = v7[1];
        v7 += 3;
        result = (*(uint32_t *)(v5 + 4 * v9 + 2048) + *(uint32_t *)(v5 + 4 * v11 + 1024) + *(uint32_t *)(v5 + 4 * v10)) >> 16;
        *(uint8_t *)(v13 + j) = result;
      }
    }
    v14 += 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FBA760  (binary VA: 0xfba760)
// Original: sub_FBA760
// ----------------------------------------------------------------------------
int sub_FBA760(int a1, int a2, uint32_t *a3, int a4, int a5)
{
  bool v5;
  int result;
  uint8_t *v7;
  int i;
  int v9;
  uint8_t v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v13 = *(uint32_t *)(a1 + 28);
  v18 = 4 * a4;
  v5 = a5 - 1 < 0;
  v19 = a5 - 1;
  result = *(uint32_t *)(*(uint32_t *)(a1 + 332) + 8);
  if ( !v5 )
  {
    do
    {
      v7 = *(uint8_t **)(a2 - 4 * a4 + v18);
      v14 = *(uint32_t *)(*a3 + v18);
      v15 = *(uint32_t *)(a3[1] + v18);
      v16 = *(uint32_t *)(a3[2] + v18);
      v17 = *(uint32_t *)(a3[3] + v18);
      if ( v13 != 0 )
      {
        for ( i = 0; i != v13; ++i )
        {
          v11 = 255 - *v7;
          v9 = 255 - v7[1];
          v12 = 255 - v7[2];
          v10 = v7[3];
          v7 += 4;
          *(uint8_t *)(v17 + i) = v10;
          *(uint8_t *)(v14 + i) = (unsigned int)(*(uint32_t *)(result + 4 * v12 + 2048)
                                             + *(uint32_t *)(result + 4 * v9 + 1024)
                                             + *(uint32_t *)(result + 4 * v11)) >> 16;
          *(uint8_t *)(v15 + i) = (unsigned int)(*(uint32_t *)(result + 4 * v12 + 5120)
                                             + *(uint32_t *)(result + 4 * v9 + 4096)
                                             + *(uint32_t *)(result + 4 * v11 + 3072)) >> 16;
          *(uint8_t *)(v16 + i) = (unsigned int)(*(uint32_t *)(result + 4 * v12 + 7168)
                                             + *(uint32_t *)(result + 4 * v9 + 6144)
                                             + *(uint32_t *)(result + 4 * v11 + 5120)) >> 16;
        }
      }
      v18 += 4;
      --v19;
    }
    while ( v19 >= 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FBA8C0  (binary VA: 0xfba8c0)
// Original: sub_FBA8C0
// ----------------------------------------------------------------------------
int sub_FBA8C0(int a1, int a2, int *a3, int a4, int a5)
{
  int v5;
  int v6;
  int result;
  char *v8;
  int v9;
  char v10;
  int v11;
  int i;

  v5 = *(uint32_t *)(a1 + 28);
  v6 = *(uint32_t *)(a1 + 36);
  v11 = 4 * a4;
  result = a2 - 4 * a4;
  for ( i = a5 - 1; i >= 0; --i )
  {
    v8 = *(char **)(a2 - 4 * a4 + v11);
    result = *a3;
    v9 = *(uint32_t *)(*a3 + v11);
    if ( v5 != 0 )
    {
      for ( result = 0; result != v5; ++result )
      {
        v10 = *v8;
        v8 += v6;
        *(uint8_t *)(v9 + result) = v10;
      }
    }
    v11 += 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FBA940  (binary VA: 0xfba940)
// Original: sub_FBA940
// ----------------------------------------------------------------------------
int sub_FBA940(int a1, int a2, int a3, int a4, int a5)
{
  int result;
  int v6;
  int v7;
  int v8;
  char *v9;
  char v10;
  int v11;
  int v12;
  int v13;

  result = a5 - 1;
  v13 = a5 - 1;
  v6 = *(uint32_t *)(a1 + 56);
  v7 = *(uint32_t *)(a1 + 28);
  if ( a5 - 1 >= 0 )
  {
    v12 = 4 * a4;
    result = a2;
    do
    {
      v11 = 0;
      if ( v6 > 0 )
      {
        do
        {
          result = *(uint32_t *)(a3 + 4 * v11);
          v8 = *(uint32_t *)(result + v12);
          if ( v7 != 0 )
          {
            v9 = (char *)(v11 + *(uint32_t *)(a2 - 4 * a4 + v12));
            for ( result = 0; result != v7; ++result )
            {
              v10 = *v9;
              v9 += v6;
              *(uint8_t *)(v8 + result) = v10;
            }
          }
          ++v11;
        }
        while ( v11 != v6 );
      }
      --v13;
      v12 += 4;
    }
    while ( v13 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nullsub_535  (binary VA: 0xfba9f8)
// Original: nullsub_535
// ----------------------------------------------------------------------------
void nullsub_535()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_FBAC60  (binary VA: 0xfbac60)
// Original: sub_FBAC60
// ----------------------------------------------------------------------------
int sub_FBAC60(int a1)
{
  int result;
  __m128i v2;
  __m128i v3;
  __m128i v4;
  __m128i v5;
  __m128i v6;
  __m128i v7;
  __m128i v8;
  __m128i v9;
  unsigned int v10;
  __m128i *v11;
  int v12;
  bool v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  __m128i v42;
  __m128i v43;
  __m128i v44;
  __m128i v45;
  __m128i v46;
  __m128i v47;
  __m128i v48;
  __m128i v49;
  __m128i v50;
  __m128i v51;
  __m128i v52;
  __m128i v53;
  __m128i v54;
  __m128i v55;
  __m128i v56;
  __m128i v57;
  __m128i v58;
  __m128i v59;
  __m128i v60;
  unsigned int v61;
  float v62; // xmm3_4
  float v63; // xmm3_4
  float v64; // xmm3_4
  float v65; // xmm3_4
  float v66; // xmm3_4
  float v67; // xmm3_4
  float v68; // xmm3_4
  float v69; // xmm3_4
  float v70; // xmm3_4
  float v71; // xmm3_4
  float v72; // xmm3_4
  float v73; // xmm3_4
  float v74; // xmm3_4
  float v75; // xmm3_4
  float v76; // xmm3_4
  float v77; // xmm3_4
  float v78; // xmm3_4
  float v79; // xmm3_4
  float v80; // xmm3_4
  float v81; // xmm3_4
  float v82; // xmm3_4
  float v83; // xmm3_4
  float v84; // xmm3_4
  float v85; // xmm3_4
  float v86; // xmm3_4
  float v87; // xmm3_4
  float v88; // xmm3_4
  float v89; // xmm3_4
  float v90; // xmm3_4
  float v91; // xmm3_4
  float v92; // xmm3_4
  float v93; // xmm3_4
  float v94; // xmm3_4
  float v95; // xmm3_4
  float v96; // xmm3_4
  float v97; // xmm3_4
  float v98; // xmm3_4
  float v99; // xmm3_4
  float v100; // xmm3_4
  float v101; // xmm3_4
  float v102; // xmm3_4
  float v103; // xmm3_4
  float v104; // xmm3_4
  float v105; // xmm3_4
  float v106; // xmm3_4
  float v107; // xmm3_4
  float v108; // xmm3_4
  float v109; // xmm3_4
  float v110; // xmm3_4
  float v111; // xmm3_4
  float v112; // xmm3_4
  float v113; // xmm3_4
  float v114; // xmm3_4
  float v115; // xmm3_4
  float v116; // xmm3_4
  float v117; // xmm3_4
  float v118; // xmm3_4
  float v119; // xmm3_4
  float v120; // xmm3_4
  float v121; // xmm3_4
  float v122; // xmm3_4
  float v123; // xmm3_4
  float v124; // xmm3_4
  float v125; // xmm0_4
  int j;
  int k;
  int v128;
  int v129;
  int i;

  v128 = *(uint32_t *)(a1 + 340);
  v129 = *(uint32_t *)(a1 + 64);
  result = *(uint32_t *)(a1 + 56);
  if ( result > 0 )
  {
    for ( i = 0; *(uint32_t *)(a1 + 56) > i; ++i )
    {
      v10 = *(uint32_t *)(v129 + 16);
      if ( v10 <= 3 && (v11 = *(__m128i **)(a1 + 4 * (v10 + 16) + 4)) != nullptr )
      {
        v12 = *(uint32_t *)(a1 + 180);
        v13 = v12 == 0;
        if ( v12 == 1 )
          goto LABEL_15;
      }
      else
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 52;
        *(uint32_t *)(*(uint32_t *)a1 + 24) = v10;
        (**(void (***)(int))a1)(a1);
        v11 = *(__m128i **)(a1 + 4 * (v10 + 16) + 4);
        v12 = *(uint32_t *)(a1 + 180);
        v13 = v12 == 0;
        if ( v12 == 1 )
        {
LABEL_15:
          result = *(uint32_t *)(v128 + 4 * v10 + 12);
          if ( result == 0 )
          {
            result = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 256);
            *(uint32_t *)(v128 + 4 * v10 + 12) = result;
          }
          if ( result > (unsigned int)(uintptr_t)(&v11[8]) || (unsigned int)(uintptr_t)(v11) > result + 256 )
          {
            v14 = *v11;
            v15 = _mm_unpacklo_epi16(*v11, g4_m128_from<__m128i>(0LL));
            v16 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDEE0));
            v17 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDEE0), v16);
            v18 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDEE0), v16);
            *(__m128i *)result = _mm_srai_epi32(
                                   _mm_add_epi32(
                                     _mm_unpacklo_epi32(
                                       _mm_shuffle_epi32(_mm_mul_epu32(v15, v17), 8),
                                       _mm_shuffle_epi32(
                                         _mm_mul_epu32(_mm_srli_si128(v15, 4), _mm_srli_si128(v17, 4)),
                                         8)),
                                     G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                   0xBu);
            v19 = _mm_unpackhi_epi16(v14, g4_m128_from<__m128i>(0LL));
            *(__m128i *)(result + 16) = _mm_srai_epi32(
                                          _mm_add_epi32(
                                            _mm_unpacklo_epi32(
                                              _mm_shuffle_epi32(_mm_mul_epu32(v19, v18), 8),
                                              _mm_shuffle_epi32(
                                                _mm_mul_epu32(_mm_srli_si128(v18, 4), _mm_srli_si128(v19, 4)),
                                                8)),
                                            G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                          0xBu);
            v20 = v11[1];
            v21 = _mm_unpacklo_epi16(v20, g4_m128_from<__m128i>(0LL));
            v22 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDEF0));
            v23 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDEF0), v22);
            v24 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDEF0), v22);
            *(__m128i *)(result + 32) = _mm_srai_epi32(
                                          _mm_add_epi32(
                                            _mm_unpacklo_epi32(
                                              _mm_shuffle_epi32(_mm_mul_epu32(v21, v23), 8),
                                              _mm_shuffle_epi32(
                                                _mm_mul_epu32(_mm_srli_si128(v21, 4), _mm_srli_si128(v23, 4)),
                                                8)),
                                            G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                          0xBu);
            v25 = _mm_unpackhi_epi16(v20, g4_m128_from<__m128i>(0LL));
            *(__m128i *)(result + 48) = _mm_srai_epi32(
                                          _mm_add_epi32(
                                            _mm_unpacklo_epi32(
                                              _mm_shuffle_epi32(_mm_mul_epu32(v25, v24), 8),
                                              _mm_shuffle_epi32(
                                                _mm_mul_epu32(_mm_srli_si128(v24, 4), _mm_srli_si128(v25, 4)),
                                                8)),
                                            G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                          0xBu);
            v26 = v11[2];
            v27 = _mm_unpacklo_epi16(v26, g4_m128_from<__m128i>(0LL));
            v28 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDF00));
            v29 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF00), v28);
            v30 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF00), v28);
            *(__m128i *)(result + 64) = _mm_srai_epi32(
                                          _mm_add_epi32(
                                            _mm_unpacklo_epi32(
                                              _mm_shuffle_epi32(_mm_mul_epu32(v27, v29), 8),
                                              _mm_shuffle_epi32(
                                                _mm_mul_epu32(_mm_srli_si128(v27, 4), _mm_srli_si128(v29, 4)),
                                                8)),
                                            G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                          0xBu);
            v31 = _mm_unpackhi_epi16(v26, g4_m128_from<__m128i>(0LL));
            *(__m128i *)(result + 80) = _mm_srai_epi32(
                                          _mm_add_epi32(
                                            _mm_unpacklo_epi32(
                                              _mm_shuffle_epi32(_mm_mul_epu32(v31, v30), 8),
                                              _mm_shuffle_epi32(
                                                _mm_mul_epu32(_mm_srli_si128(v30, 4), _mm_srli_si128(v31, 4)),
                                                8)),
                                            G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                          0xBu);
            v32 = v11[3];
            v33 = _mm_unpacklo_epi16(v32, g4_m128_from<__m128i>(0LL));
            v34 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDF10));
            v35 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF10), v34);
            v36 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF10), v34);
            *(__m128i *)(result + 96) = _mm_srai_epi32(
                                          _mm_add_epi32(
                                            _mm_unpacklo_epi32(
                                              _mm_shuffle_epi32(_mm_mul_epu32(v33, v35), 8),
                                              _mm_shuffle_epi32(
                                                _mm_mul_epu32(_mm_srli_si128(v33, 4), _mm_srli_si128(v35, 4)),
                                                8)),
                                            G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                          0xBu);
            v37 = _mm_unpackhi_epi16(v32, g4_m128_from<__m128i>(0LL));
            *(__m128i *)(result + 112) = _mm_srai_epi32(
                                           _mm_add_epi32(
                                             _mm_unpacklo_epi32(
                                               _mm_shuffle_epi32(_mm_mul_epu32(v37, v36), 8),
                                               _mm_shuffle_epi32(
                                                 _mm_mul_epu32(_mm_srli_si128(v36, 4), _mm_srli_si128(v37, 4)),
                                                 8)),
                                             G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                           0xBu);
            v38 = v11[4];
            v39 = _mm_unpacklo_epi16(v38, g4_m128_from<__m128i>(0LL));
            v40 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDF20));
            v41 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF20), v40);
            v42 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF20), v40);
            *(__m128i *)(result + 128) = _mm_srai_epi32(
                                           _mm_add_epi32(
                                             _mm_unpacklo_epi32(
                                               _mm_shuffle_epi32(_mm_mul_epu32(v39, v41), 8),
                                               _mm_shuffle_epi32(
                                                 _mm_mul_epu32(_mm_srli_si128(v39, 4), _mm_srli_si128(v41, 4)),
                                                 8)),
                                             G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                           0xBu);
            v43 = _mm_unpackhi_epi16(v38, g4_m128_from<__m128i>(0LL));
            *(__m128i *)(result + 144) = _mm_srai_epi32(
                                           _mm_add_epi32(
                                             _mm_unpacklo_epi32(
                                               _mm_shuffle_epi32(_mm_mul_epu32(v43, v42), 8),
                                               _mm_shuffle_epi32(
                                                 _mm_mul_epu32(_mm_srli_si128(v42, 4), _mm_srli_si128(v43, 4)),
                                                 8)),
                                             G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                           0xBu);
            v44 = v11[5];
            v45 = _mm_unpacklo_epi16(v44, g4_m128_from<__m128i>(0LL));
            v46 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDF30));
            v47 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF30), v46);
            v48 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF30), v46);
            *(__m128i *)(result + 160) = _mm_srai_epi32(
                                           _mm_add_epi32(
                                             _mm_unpacklo_epi32(
                                               _mm_shuffle_epi32(_mm_mul_epu32(v45, v47), 8),
                                               _mm_shuffle_epi32(
                                                 _mm_mul_epu32(_mm_srli_si128(v45, 4), _mm_srli_si128(v47, 4)),
                                                 8)),
                                             G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                           0xBu);
            v49 = _mm_unpackhi_epi16(v44, g4_m128_from<__m128i>(0LL));
            *(__m128i *)(result + 176) = _mm_srai_epi32(
                                           _mm_add_epi32(
                                             _mm_unpacklo_epi32(
                                               _mm_shuffle_epi32(_mm_mul_epu32(v49, v48), 8),
                                               _mm_shuffle_epi32(
                                                 _mm_mul_epu32(_mm_srli_si128(v48, 4), _mm_srli_si128(v49, 4)),
                                                 8)),
                                             G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                           0xBu);
            v50 = v11[6];
            v51 = _mm_unpacklo_epi16(v50, g4_m128_from<__m128i>(0LL));
            v52 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDF40));
            v53 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF40), v52);
            v54 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF40), v52);
            *(__m128i *)(result + 192) = _mm_srai_epi32(
                                           _mm_add_epi32(
                                             _mm_unpacklo_epi32(
                                               _mm_shuffle_epi32(_mm_mul_epu32(v51, v53), 8),
                                               _mm_shuffle_epi32(
                                                 _mm_mul_epu32(_mm_srli_si128(v51, 4), _mm_srli_si128(v53, 4)),
                                                 8)),
                                             G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                           0xBu);
            v55 = _mm_unpackhi_epi16(v50, g4_m128_from<__m128i>(0LL));
            *(__m128i *)(result + 208) = _mm_srai_epi32(
                                           _mm_add_epi32(
                                             _mm_unpacklo_epi32(
                                               _mm_shuffle_epi32(_mm_mul_epu32(v55, v54), 8),
                                               _mm_shuffle_epi32(
                                                 _mm_mul_epu32(_mm_srli_si128(v54, 4), _mm_srli_si128(v55, 4)),
                                                 8)),
                                             G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                           0xBu);
            v56 = _mm_unpacklo_epi16(v11[7], g4_m128_from<__m128i>(0LL));
            v57 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDF50));
            v58 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF50), v57);
            v59 = _mm_unpackhi_epi16(v11[7], g4_m128_from<__m128i>(0LL));
            v60 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF50), v57);
            *(__m128i *)(result + 224) = _mm_srai_epi32(
                                           _mm_add_epi32(
                                             _mm_unpacklo_epi32(
                                               _mm_shuffle_epi32(_mm_mul_epu32(v56, v58), 8),
                                               _mm_shuffle_epi32(
                                                 _mm_mul_epu32(_mm_srli_si128(v56, 4), _mm_srli_si128(v58, 4)),
                                                 8)),
                                             G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                           0xBu);
            *(__m128i *)(result + 240) = _mm_srai_epi32(
                                           _mm_add_epi32(
                                             _mm_unpacklo_epi32(
                                               _mm_shuffle_epi32(_mm_mul_epu32(v59, v60), 8),
                                               _mm_shuffle_epi32(
                                                 _mm_mul_epu32(_mm_srli_si128(v60, 4), _mm_srli_si128(v59, 4)),
                                                 8)),
                                             G4_BITCAST<__m128i>(xmmword_1C7C800)),
                                           0xBu);
          }
          else
          {
            for ( j = 0; j != 64; ++j )
              *(uint32_t *)(result + 1 * j) = (*(int16_t *)((char *)&xmmword_1CBDEE0 + j * 2) *g4_m128_lane<uint16_t>(*(v11), j) + 1024) >> 11;
          }
          goto LABEL_7;
        }
      }
      if ( v13 )
      {
        result = *(uint32_t *)(v128 + 4 * v10 + 12);
        if ( result == 0 )
        {
          result = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 256);
          *(uint32_t *)(v128 + 4 * v10 + 12) = result;
        }
        if ( (unsigned int)(uintptr_t)(v11) > result + 256 || result > (unsigned int)(uintptr_t)(&v11[8]) )
        {
          v2 = _mm_slli_epi32(_mm_unpackhi_epi16(*v11, g4_m128_from<__m128i>(0LL)), 3u);
          *(__m128i *)result = _mm_slli_epi32(_mm_unpacklo_epi16(*v11, g4_m128_from<__m128i>(0LL)), 3u);
          *(__m128i *)(result + 16) = v2;
          v3 = v11[1];
          *(__m128i *)(result + 32) = _mm_slli_epi32(_mm_unpacklo_epi16(v3, g4_m128_from<__m128i>(0LL)), 3u);
          *(__m128i *)(result + 48) = _mm_slli_epi32(_mm_unpackhi_epi16(v3, g4_m128_from<__m128i>(0LL)), 3u);
          v4 = v11[2];
          *(__m128i *)(result + 64) = _mm_slli_epi32(_mm_unpacklo_epi16(v4, g4_m128_from<__m128i>(0LL)), 3u);
          *(__m128i *)(result + 80) = _mm_slli_epi32(_mm_unpackhi_epi16(v4, g4_m128_from<__m128i>(0LL)), 3u);
          v5 = v11[3];
          *(__m128i *)(result + 96) = _mm_slli_epi32(_mm_unpacklo_epi16(v5, g4_m128_from<__m128i>(0LL)), 3u);
          *(__m128i *)(result + 112) = _mm_slli_epi32(_mm_unpackhi_epi16(v5, g4_m128_from<__m128i>(0LL)), 3u);
          v6 = v11[4];
          *(__m128i *)(result + 128) = _mm_slli_epi32(_mm_unpacklo_epi16(v6, g4_m128_from<__m128i>(0LL)), 3u);
          *(__m128i *)(result + 144) = _mm_slli_epi32(_mm_unpackhi_epi16(v6, g4_m128_from<__m128i>(0LL)), 3u);
          v7 = v11[5];
          *(__m128i *)(result + 160) = _mm_slli_epi32(_mm_unpacklo_epi16(v7, g4_m128_from<__m128i>(0LL)), 3u);
          *(__m128i *)(result + 176) = _mm_slli_epi32(_mm_unpackhi_epi16(v7, g4_m128_from<__m128i>(0LL)), 3u);
          v8 = v11[6];
          *(__m128i *)(result + 192) = _mm_slli_epi32(_mm_unpacklo_epi16(v8, g4_m128_from<__m128i>(0LL)), 3u);
          *(__m128i *)(result + 208) = _mm_slli_epi32(_mm_unpackhi_epi16(v8, g4_m128_from<__m128i>(0LL)), 3u);
          v9 = v11[7];
          *(__m128i *)(result + 224) = _mm_slli_epi32(_mm_unpacklo_epi16(v9, g4_m128_from<__m128i>(0LL)), 3u);
          *(__m128i *)(result + 240) = _mm_slli_epi32(_mm_unpackhi_epi16(v9, g4_m128_from<__m128i>(0LL)), 3u);
        }
        else
        {
          for ( k = 0; k != 64; ++k )
            *(uint32_t *)(result + 4 * k) = 8 *g4_m128_lane<uint16_t>(*(v11), k);
        }
      }
      else if ( v12 == 2 )
      {
        v61 = v10 + 8;
        result = *(uint32_t *)(v128 + 4 * v61);
        if ( result == 0 )
        {
          result = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 256);
          *(uint32_t *)(v128 + 4 * v61) = result;
        }
        v62 = 0.125 / (double)g4_m128_lane<uint16_t>(*(v11), 0);
        *(float *)result = v62;
        v63 = 0.125 / ((double)g4_m128_lane<uint16_t>(*(v11), 1) * 1.387039845);
        *(float *)(result + 4) = v63;
        v64 = 0.125 / ((double)g4_m128_lane<uint16_t>(*(v11), 2) * 1.306562965);
        *(float *)(result + 8) = v64;
        v65 = 0.125 / ((double)g4_m128_lane<uint16_t>(*(v11), 3) * 1.175875602);
        *(float *)(result + 12) = v65;
        v66 = 0.125 / (double)g4_m128_lane<uint16_t>(*(v11), 4);
        *(float *)(result + 16) = v66;
        v67 = 0.125 / ((double)g4_m128_lane<uint16_t>(*(v11), 5) * 0.785694958);
        *(float *)(result + 20) = v67;
        v68 = 0.125 / ((double)g4_m128_lane<uint16_t>(*(v11), 6) * 0.5411961);
        *(float *)(result + 24) = v68;
        v69 = 0.125 / ((double)g4_m128_lane<uint16_t>(*(v11), 7) * 0.275899379);
        *(float *)(result + 28) = v69;
        v70 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[1], 0) * 1.387039845);
        *(float *)(result + 32) = v70;
        v71 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[1], 1) * 1.9238795316176243);
        *(float *)(result + 36) = v71;
        v72 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[1], 2) * 1.8122548924563404);
        *(float *)(result + 40) = v72;
        v73 = 0.125 / (1.6309863127373618 * (double)g4_m128_lane<uint16_t>(v11[1], 3));
        *(float *)(result + 44) = v73;
        v74 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[1], 4) * 1.387039845);
        *(float *)(result + 48) = v74;
        v75 = 0.125 / (1.0897902127616015 * (double)g4_m128_lane<uint16_t>(v11[1], 5));
        *(float *)(result + 52) = v75;
        v76 = 0.125 / (0.7506605546586045 * (double)g4_m128_lane<uint16_t>(v11[1], 6));
        *(float *)(result + 56) = v76;
        v77 = 0.125 / (0.3826834318837563 * (double)g4_m128_lane<uint16_t>(v11[1], 7));
        *(float *)(result + 60) = v77;
        v78 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[2], 0) * 1.306562965);
        *(float *)(result + 64) = v78;
        v79 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[2], 1) * 1.8122548924563404);
        *(float *)(result + 68) = v79;
        v80 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[2], 2) * 1.707106781509591);
        *(float *)(result + 72) = v80;
        v81 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[2], 3) * 1.53635551302028);
        *(float *)(result + 76) = v81;
        v82 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[2], 4) * 1.306562965);
        *(float *)(result + 80) = v82;
        v83 = 0.125 / (1.0265599339100304 * (double)g4_m128_lane<uint16_t>(v11[2], 5));
        *(float *)(result + 84) = v83;
        v84 = 0.125 / (0.7071067810624364 * (double)g4_m128_lane<uint16_t>(v11[2], 6));
        *(float *)(result + 88) = v84;
        v85 = 0.125 / (0.3604799106678987 * (double)g4_m128_lane<uint16_t>(v11[2], 7));
        *(float *)(result + 92) = v85;
        v86 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[3], 0) * 1.175875602);
        *(float *)(result + 96) = v86;
        v87 = 0.125 / (1.6309863127373618 * (double)g4_m128_lane<uint16_t>(v11[3], 1));
        *(float *)(result + 100) = v87;
        v88 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[3], 2) * 1.53635551302028);
        *(float *)(result + 104) = v88;
        v89 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[3], 3) * 1.3826834313788625);
        *(float *)(result + 108) = v89;
        v90 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[3], 4) * 1.175875602);
        *(float *)(result + 112) = v90;
        v91 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[3], 5) * 0.9238795317266147);
        *(float *)(result + 116) = v91;
        v92 = 0.125 / (0.6363792898875522 * (double)g4_m128_lane<uint16_t>(v11[3], 6));
        *(float *)(result + 120) = v92;
        v93 = 0.125 / (0.3244233483730512 * (double)g4_m128_lane<uint16_t>(v11[3], 7));
        *(float *)(result + 124) = v93;
        v94 = 0.125 / (double)g4_m128_lane<uint16_t>(v11[4], 0);
        *(float *)(result + 128) = v94;
        v95 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[4], 1) * 1.387039845);
        *(float *)(result + 132) = v95;
        v96 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[4], 2) * 1.306562965);
        *(float *)(result + 136) = v96;
        v97 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[4], 3) * 1.175875602);
        *(float *)(result + 140) = v97;
        v98 = 0.125 / (double)g4_m128_lane<uint16_t>(v11[4], 4);
        *(float *)(result + 144) = v98;
        v99 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[4], 5) * 0.785694958);
        *(float *)(result + 148) = v99;
        v100 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[4], 6) * 0.5411961);
        *(float *)(result + 152) = v100;
        v101 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[4], 7) * 0.275899379);
        *(float *)(result + 156) = v101;
        v102 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[5], 0) * 0.785694958);
        *(float *)(result + 160) = v102;
        v103 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[5], 1) * 1.0897902127616015);
        *(float *)(result + 164) = v103;
        v104 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[5], 2) * 1.0265599339100304);
        *(float *)(result + 168) = v104;
        v105 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[5], 3) * 0.9238795317266147);
        *(float *)(result + 172) = v105;
        v106 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[5], 4) * 0.785694958);
        *(float *)(result + 176) = v106;
        v107 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[5], 5) * 0.6173165670266217);
        *(float *)(result + 180) = v107;
        v108 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[5], 6) * 0.4252150470592638);
        *(float *)(result + 184) = v108;
        v109 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[5], 7) * 0.2167727509956311);
        *(float *)(result + 188) = v109;
        v110 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[6], 0) * 0.5411961);
        *(float *)(result + 192) = v110;
        v111 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[6], 1) * 0.7506605546586045);
        *(float *)(result + 196) = v111;
        v112 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[6], 2) * 0.7071067810624364);
        *(float *)(result + 200) = v112;
        v113 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[6], 3) * 0.6363792898875522);
        *(float *)(result + 204) = v113;
        v114 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[6], 4) * 0.5411961);
        *(float *)(result + 208) = v114;
        v115 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[6], 5) * 0.4252150470592638);
        *(float *)(result + 212) = v115;
        v116 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[6], 6) * 0.29289321865520995);
        *(float *)(result + 216) = v116;
        v117 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[6], 7) * 0.1493156679072219);
        *(float *)(result + 220) = v117;
        v118 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[7], 0) * 0.275899379);
        *(float *)(result + 224) = v118;
        v119 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[7], 1) * 0.3826834318837563);
        *(float *)(result + 228) = v119;
        v120 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[7], 2) * 0.3604799106678987);
        *(float *)(result + 232) = v120;
        v121 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[7], 3) * 0.3244233483730512);
        *(float *)(result + 236) = v121;
        v122 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[7], 4) * 0.275899379);
        *(float *)(result + 240) = v122;
        v123 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[7], 5) * 0.2167727509956311);
        *(float *)(result + 244) = v123;
        v124 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[7], 6) * 0.1493156679072219);
        *(float *)(result + 248) = v124;
        v125 = 0.125 / ((double)g4_m128_lane<uint16_t>(v11[7], 7) * 0.07612046733258564);
        *(float *)(result + 252) = v125;
      }
      else
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 48;
        result = (**(int (***)(int))a1)(a1);
      }
LABEL_7:
      v129 += 84;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FBC0E0  (binary VA: 0xfbc0e0)
// Original: sub_FBC0E0
// ----------------------------------------------------------------------------
int sub_FBC0E0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int result;
  uint8_t *v10;
  uint8_t *v11;
  uint8_t *v12;
  uint8_t *v13;
  uint8_t *v14;
  uint8_t *v15;
  uint8_t *v16;
  uint8_t *v17;
  int j;
  int16_t v19;
  int v20;
  int v21;
  int v22;
  typedef void (*_g4_t_v23)(uint32_t *);
  typedef int _g4_t_i;
  typedef uint32_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[66];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_i)) > _g4_s1 ? (4u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v25)) > _g4_s2 ? (8u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v27)) > _g4_s4 ? (16u + sizeof(_g4_t_v27)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);

  v7 = *(uint32_t *)(a1 + 340);
  v23 = *(void (**)(uint32_t *))(v7 + 8);
  v26 = *(uint32_t *)(v7 + 4 * *(uint32_t *)(a2 + 16) + 12);
  result = a3 + 4 * a5;
  v25 = (uint32_t *)result;
  if ( a7 != 0 )
  {
    for ( i = 0; i != a7; ++i )
    {
      v10 = (uint8_t *)(*v25 + a6);
      v27[0] = *v10 - 128;
      v27[1] = v10[1] - 128;
      v27[2] = v10[2] - 128;
      v27[3] = v10[3] - 128;
      v27[4] = v10[4] - 128;
      v27[5] = v10[5] - 128;
      v27[6] = v10[6] - 128;
      v27[7] = v10[7] - 128;
      v11 = (uint8_t *)(v25[1] + a6);
      v27[8] = *v11 - 128;
      v27[9] = v11[1] - 128;
      v27[10] = v11[2] - 128;
      v27[11] = v11[3] - 128;
      v27[12] = v11[4] - 128;
      v27[13] = v11[5] - 128;
      v27[14] = v11[6] - 128;
      v27[15] = v11[7] - 128;
      v12 = (uint8_t *)(v25[2] + a6);
      v27[16] = *v12 - 128;
      v27[17] = v12[1] - 128;
      v27[18] = v12[2] - 128;
      v27[19] = v12[3] - 128;
      v27[20] = v12[4] - 128;
      v27[21] = v12[5] - 128;
      v27[22] = v12[6] - 128;
      v27[23] = v12[7] - 128;
      v13 = (uint8_t *)(v25[3] + a6);
      v27[24] = *v13 - 128;
      v27[25] = v13[1] - 128;
      v27[26] = v13[2] - 128;
      v27[27] = v13[3] - 128;
      v27[28] = v13[4] - 128;
      v27[29] = v13[5] - 128;
      v27[30] = v13[6] - 128;
      v27[31] = v13[7] - 128;
      v14 = (uint8_t *)(v25[4] + a6);
      v27[32] = *v14 - 128;
      v27[33] = v14[1] - 128;
      v27[34] = v14[2] - 128;
      v27[35] = v14[3] - 128;
      v27[36] = v14[4] - 128;
      v27[37] = v14[5] - 128;
      v27[38] = v14[6] - 128;
      v27[39] = v14[7] - 128;
      v15 = (uint8_t *)(v25[5] + a6);
      v27[40] = *v15 - 128;
      v27[41] = v15[1] - 128;
      v27[42] = v15[2] - 128;
      v27[43] = v15[3] - 128;
      v27[44] = v15[4] - 128;
      v27[45] = v15[5] - 128;
      v27[46] = v15[6] - 128;
      v27[47] = v15[7] - 128;
      v16 = (uint8_t *)(v25[6] + a6);
      v27[48] = *v16 - 128;
      v27[49] = v16[1] - 128;
      v27[50] = v16[2] - 128;
      v27[51] = v16[3] - 128;
      v27[52] = v16[4] - 128;
      v27[53] = v16[5] - 128;
      v27[54] = v16[6] - 128;
      v27[55] = v16[7] - 128;
      v17 = (uint8_t *)(v25[7] + a6);
      v27[56] = *v17 - 128;
      v27[57] = v17[1] - 128;
      v27[58] = v17[2] - 128;
      v27[59] = v17[3] - 128;
      v27[60] = v17[4] - 128;
      v27[61] = v17[5] - 128;
      v27[62] = v17[6] - 128;
      v27[63] = v17[7] - 128;
      v23(v27);
      for ( j = 0; j != 64; ++j )
      {
        while ( 1 )
        {
          v20 = v27[j];
          v21 = *(uint32_t *)(v26 + 4 * j);
          v22 = v21 >> 1;
          if ( v20 >= 0 )
          {
            result = v20 + v22;
            v19 = 0;
            if ( v21 <= result )
            {
              result /= v21;
              v19 = result;
            }
            goto LABEL_6;
          }
          result = v22 - v20;
          v19 = 0;
          if ( v21 <= result )
            break;
LABEL_6:
          *(uint16_t *)(a4 + 2 * j++) = v19;
          if ( j == 64 )
            goto LABEL_10;
        }
        result /= v21;
        *(uint16_t *)(a4 + 2 * j) = -(int16_t)result;
      }
LABEL_10:
      a6 += 8;
      a4 += 128;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FBC540  (binary VA: 0xfbc540)
// Original: sub_FBC540
// ----------------------------------------------------------------------------
int sub_FBC540(int a1, int a2, int a3, __m128i *a4, int a5, int a6, int a7)
{
  int v7;
  const double *v8;
  int result;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  uint8_t *v42;
  float v43; // xmm0_4
  uint8_t *v44;
  float v45; // xmm0_4
  uint8_t *v46;
  float v47; // xmm0_4
  uint8_t *v48;
  float v49; // xmm0_4
  uint8_t *v50;
  float v51; // xmm0_4
  uint8_t *v52;
  float v53; // xmm0_4
  uint8_t *v54;
  float v55; // xmm0_4
  uint8_t *v56;
  __m128i *v57;
  typedef int (*_g4_t_v58)(__m128 *);
  typedef int _g4_t_i;
  typedef uint32_t *_g4_t_v61;
  typedef __m128 _g4_t_v62;
  typedef __m128 _g4_t_v63;
  typedef __m128 _g4_t_v64;
  typedef __m128 _g4_t_v65;
  typedef __m128 _g4_t_v66;
  typedef __m128 _g4_t_v67;
  typedef __m128 _g4_t_v68;
  typedef __m128 _g4_t_v69;
  typedef __m128 _g4_t_v70;
  typedef __m128 _g4_t_v71;
  typedef __m128 _g4_t_v72;
  typedef __m128 _g4_t_v73;
  typedef __m128 _g4_t_v74;
  typedef __m128 _g4_t_v75;
  typedef __m128 _g4_t_v76;
  typedef __m128 _g4_t_v77;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v58)) > _g4_s0 ? (0u + sizeof(_g4_t_v58)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_i)) > _g4_s1 ? (4u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v61)) > _g4_s2 ? (12u + sizeof(_g4_t_v61)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v62)) > _g4_s3 ? (16u + sizeof(_g4_t_v62)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v63)) > _g4_s4 ? (32u + sizeof(_g4_t_v63)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v64)) > _g4_s5 ? (48u + sizeof(_g4_t_v64)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v65)) > _g4_s6 ? (64u + sizeof(_g4_t_v65)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v66)) > _g4_s7 ? (80u + sizeof(_g4_t_v66)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v67)) > _g4_s8 ? (96u + sizeof(_g4_t_v67)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v68)) > _g4_s9 ? (112u + sizeof(_g4_t_v68)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v69)) > _g4_s10 ? (128u + sizeof(_g4_t_v69)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v70)) > _g4_s11 ? (144u + sizeof(_g4_t_v70)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v71)) > _g4_s12 ? (160u + sizeof(_g4_t_v71)) : _g4_s12,
    _g4_s14 = (176u + sizeof(_g4_t_v72)) > _g4_s13 ? (176u + sizeof(_g4_t_v72)) : _g4_s13,
    _g4_s15 = (192u + sizeof(_g4_t_v73)) > _g4_s14 ? (192u + sizeof(_g4_t_v73)) : _g4_s14,
    _g4_s16 = (208u + sizeof(_g4_t_v74)) > _g4_s15 ? (208u + sizeof(_g4_t_v74)) : _g4_s15,
    _g4_s17 = (224u + sizeof(_g4_t_v75)) > _g4_s16 ? (224u + sizeof(_g4_t_v75)) : _g4_s16,
    _g4_s18 = (240u + sizeof(_g4_t_v76)) > _g4_s17 ? (240u + sizeof(_g4_t_v76)) : _g4_s17,
    _g4_s19 = (256u + sizeof(_g4_t_v77)) > _g4_s18 ? (256u + sizeof(_g4_t_v77)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 0u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 64u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 96u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 112u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 128u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 144u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 160u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 176u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 192u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 208u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 224u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 240u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 256u);

  v7 = *(uint32_t *)(a1 + 340);
  v58 = *(int (**)(__m128 *))(v7 + 28);
  v8 = *(const double **)(v7 + 4 * *(uint32_t *)(a2 + 16) + 32);
  result = a3 + 4 * a5;
  v61 = (uint32_t *)result;
  if ( a7 != 0 )
  {
    for ( i = 0; i != a7; ++i )
    {
      v42 = (uint8_t *)(*v61 + a6);
g4_m128_lane<float>(v62, 0) = (float)(*v42 - 128);
g4_m128_lane<float>(v62, 1) = (float)(v42[1] - 128);
g4_m128_lane<float>(v62, 2) = (float)(v42[2] - 128);
g4_m128_lane<float>(v62, 3) = (float)(v42[3] - 128);
g4_m128_lane<float>(v63, 0) = (float)(v42[4] - 128);
g4_m128_lane<float>(v63, 1) = (float)(v42[5] - 128);
g4_m128_lane<float>(v63, 2) = (float)(v42[6] - 128);
      v43 = (float)(v42[7] - 128);
      v44 = (uint8_t *)(v61[1] + a6);
g4_m128_lane<float>(v63, 3) = v43;
g4_m128_lane<float>(v64, 0) = (float)(*v44 - 128);
g4_m128_lane<float>(v64, 1) = (float)(v44[1] - 128);
g4_m128_lane<float>(v64, 2) = (float)(v44[2] - 128);
g4_m128_lane<float>(v64, 3) = (float)(v44[3] - 128);
g4_m128_lane<float>(v65, 0) = (float)(v44[4] - 128);
g4_m128_lane<float>(v65, 1) = (float)(v44[5] - 128);
g4_m128_lane<float>(v65, 2) = (float)(v44[6] - 128);
      v45 = (float)(v44[7] - 128);
      v46 = (uint8_t *)(v61[2] + a6);
g4_m128_lane<float>(v65, 3) = v45;
g4_m128_lane<float>(v66, 0) = (float)(*v46 - 128);
g4_m128_lane<float>(v66, 1) = (float)(v46[1] - 128);
g4_m128_lane<float>(v66, 2) = (float)(v46[2] - 128);
g4_m128_lane<float>(v66, 3) = (float)(v46[3] - 128);
g4_m128_lane<float>(v67, 0) = (float)(v46[4] - 128);
g4_m128_lane<float>(v67, 1) = (float)(v46[5] - 128);
g4_m128_lane<float>(v67, 2) = (float)(v46[6] - 128);
      v47 = (float)(v46[7] - 128);
      v48 = (uint8_t *)(v61[3] + a6);
g4_m128_lane<float>(v67, 3) = v47;
g4_m128_lane<float>(v68, 0) = (float)(*v48 - 128);
g4_m128_lane<float>(v68, 1) = (float)(v48[1] - 128);
g4_m128_lane<float>(v68, 2) = (float)(v48[2] - 128);
g4_m128_lane<float>(v68, 3) = (float)(v48[3] - 128);
g4_m128_lane<float>(v69, 0) = (float)(v48[4] - 128);
g4_m128_lane<float>(v69, 1) = (float)(v48[5] - 128);
g4_m128_lane<float>(v69, 2) = (float)(v48[6] - 128);
      v49 = (float)(v48[7] - 128);
      v50 = (uint8_t *)(v61[4] + a6);
g4_m128_lane<float>(v69, 3) = v49;
g4_m128_lane<float>(v70, 0) = (float)(*v50 - 128);
g4_m128_lane<float>(v70, 1) = (float)(v50[1] - 128);
g4_m128_lane<float>(v70, 2) = (float)(v50[2] - 128);
g4_m128_lane<float>(v70, 3) = (float)(v50[3] - 128);
g4_m128_lane<float>(v71, 0) = (float)(v50[4] - 128);
g4_m128_lane<float>(v71, 1) = (float)(v50[5] - 128);
g4_m128_lane<float>(v71, 2) = (float)(v50[6] - 128);
      v51 = (float)(v50[7] - 128);
      v52 = (uint8_t *)(v61[5] + a6);
g4_m128_lane<float>(v71, 3) = v51;
g4_m128_lane<float>(v72, 0) = (float)(*v52 - 128);
g4_m128_lane<float>(v72, 1) = (float)(v52[1] - 128);
g4_m128_lane<float>(v72, 2) = (float)(v52[2] - 128);
g4_m128_lane<float>(v72, 3) = (float)(v52[3] - 128);
g4_m128_lane<float>(v73, 0) = (float)(v52[4] - 128);
g4_m128_lane<float>(v73, 1) = (float)(v52[5] - 128);
g4_m128_lane<float>(v73, 2) = (float)(v52[6] - 128);
      v53 = (float)(v52[7] - 128);
      v54 = (uint8_t *)(v61[6] + a6);
g4_m128_lane<float>(v73, 3) = v53;
g4_m128_lane<float>(v74, 0) = (float)(*v54 - 128);
g4_m128_lane<float>(v74, 1) = (float)(v54[1] - 128);
g4_m128_lane<float>(v74, 2) = (float)(v54[2] - 128);
g4_m128_lane<float>(v74, 3) = (float)(v54[3] - 128);
g4_m128_lane<float>(v75, 0) = (float)(v54[4] - 128);
g4_m128_lane<float>(v75, 1) = (float)(v54[5] - 128);
g4_m128_lane<float>(v75, 2) = (float)(v54[6] - 128);
      v55 = (float)(v54[7] - 128);
      v56 = (uint8_t *)(v61[7] + a6);
g4_m128_lane<float>(v75, 3) = v55;
g4_m128_lane<float>(v76, 0) = (float)(*v56 - 128);
g4_m128_lane<float>(v76, 1) = (float)(v56[1] - 128);
g4_m128_lane<float>(v76, 2) = (float)(v56[2] - 128);
g4_m128_lane<float>(v76, 3) = (float)(v56[3] - 128);
g4_m128_lane<float>(v77, 0) = (float)(v56[4] - 128);
g4_m128_lane<float>(v77, 1) = (float)(v56[5] - 128);
g4_m128_lane<float>(v77, 2) = (float)(v56[6] - 128);
g4_m128_lane<float>(v77, 3) = (float)(v56[7] - 128);
      result = v58(&v62);
      v57 = a4;
      a4 += 8;
      if ( v8 > (const double *)a4 || (result = (int)(uintptr_t)(v8 + 32), v57 > (__m128i *)v8 + 16) )
      {
        v10 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 1), v62), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v11 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 3), v63), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v12 = _mm_unpacklo_epi16(v10, v11);
        v13 = _mm_unpackhi_epi16(v10, v11);
        *v57 = _mm_add_epi16(
                 _mm_unpacklo_epi16(_mm_unpacklo_epi16(v12, v13), _mm_unpackhi_epi16(v12, v13)),
                 G4_BITCAST<__m128i>(xmmword_1C7C820));
        v14 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 5), v64), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v15 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 7), v65), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v16 = _mm_unpackhi_epi16(v14, v15);
        v17 = _mm_unpacklo_epi16(v14, v15);
        v57[1] = _mm_add_epi16(
                   _mm_unpacklo_epi16(_mm_unpacklo_epi16(v17, v16), _mm_unpackhi_epi16(v17, v16)),
                   G4_BITCAST<__m128i>(xmmword_1C7C820));
        v18 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 9), v66), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v19 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 11), v67), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v20 = _mm_unpackhi_epi16(v18, v19);
        v21 = _mm_unpacklo_epi16(v18, v19);
        v57[2] = _mm_add_epi16(
                   _mm_unpacklo_epi16(_mm_unpacklo_epi16(v21, v20), _mm_unpackhi_epi16(v21, v20)),
                   G4_BITCAST<__m128i>(xmmword_1C7C820));
        v22 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 13), v68), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v23 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 15), v69), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v24 = _mm_unpackhi_epi16(v22, v23);
        v25 = _mm_unpacklo_epi16(v22, v23);
        v57[3] = _mm_add_epi16(
                   _mm_unpacklo_epi16(_mm_unpacklo_epi16(v25, v24), _mm_unpackhi_epi16(v25, v24)),
                   G4_BITCAST<__m128i>(xmmword_1C7C820));
        v26 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 17), v70), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v27 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 19), v71), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v28 = _mm_unpackhi_epi16(v26, v27);
        v29 = _mm_unpacklo_epi16(v26, v27);
        v57[4] = _mm_add_epi16(
                   _mm_unpacklo_epi16(_mm_unpacklo_epi16(v29, v28), _mm_unpackhi_epi16(v29, v28)),
                   G4_BITCAST<__m128i>(xmmword_1C7C820));
        v30 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 21), v72), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v31 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 23), v73), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v32 = _mm_unpackhi_epi16(v30, v31);
        v33 = _mm_unpacklo_epi16(v30, v31);
        v57[5] = _mm_add_epi16(
                   _mm_unpacklo_epi16(_mm_unpacklo_epi16(v33, v32), _mm_unpackhi_epi16(v33, v32)),
                   G4_BITCAST<__m128i>(xmmword_1C7C820));
        v34 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 25), v74), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v35 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 27), v75), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v36 = _mm_unpackhi_epi16(v34, v35);
        v37 = _mm_unpacklo_epi16(v34, v35);
        v57[6] = _mm_add_epi16(
                   _mm_unpacklo_epi16(_mm_unpacklo_epi16(v37, v36), _mm_unpackhi_epi16(v37, v36)),
                   G4_BITCAST<__m128i>(xmmword_1C7C820));
        v38 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 29), v76), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v39 = _mm_cvttps_epi32(_mm_add_ps(_mm_mul_ps(_mm_loadh_ps(v8 + 31), v77), G4_BITCAST<__m128>(xmmword_1C7C810)));
        v40 = _mm_unpackhi_epi16(v38, v39);
        v41 = _mm_unpacklo_epi16(v38, v39);
        v57[7] = _mm_add_epi16(
                   _mm_unpacklo_epi16(_mm_unpacklo_epi16(v41, v40), _mm_unpackhi_epi16(v41, v40)),
                   G4_BITCAST<__m128i>(xmmword_1C7C820));
      }
      else
      {
        for ( result = 0; result != 64; ++result )
g4_m128_lane<int16_t>(*(v57), result) = (int)(float)((float)(g4_m128_lane<float>(v62, result) * *((float *)v8 + result)) + 16384.5)
                                 - 0x4000;
      }
      a6 += 8;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FBCF20  (binary VA: 0xfbcf20)
// Original: sub_FBCF20
// ----------------------------------------------------------------------------
int sub_FBCF20(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int16_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  int16_t *v18;
  int v19;
  int16_t *v20;
  int v21;
  int v22;
  int v23;

  v2 = a1[46];
  v22 = a1[86];
  if ( v2 != 0 )
  {
    v3 = *(uint32_t *)(a1[86] + 36);
    if ( v3 == 0 )
    {
      if ( (int)a1[56] > 0 )
      {
        do
          *(uint32_t *)(v22 + 4 * v3++ + 20) = 0;
        while ( a1[56] > v3 );
        v2 = a1[46];
      }
      v3 = v2;
    }
    *(uint32_t *)(v22 + 36) = v3 - 1;
  }
  if ( (int)a1[63] > 0 )
  {
    v21 = 0;
    do
    {
      v23 = a1[v21 + 64];
      v4 = a1[v23 + 57];
      v5 = *(uint32_t *)(v22 + 4 * *(uint32_t *)(v4 + 20) + 76);
      v6 = *(uint32_t **)(v22 + 4 * *(uint32_t *)(v4 + 24) + 92);
      v7 = *(int16_t **)(a2 + 4 * v21);
      v8 = 0;
      v9 = __builtin_abs(*v7 - *(uint32_t *)(v22 + 4 * v23 + 20));
      if ( v9 != 0 )
      {
        do
        {
          ++v8;
          v9 >>= 1;
        }
        while ( v9 != 0 );
        if ( v8 > 11 )
        {
          v8 *= 4;
          *(uint32_t *)(*a1 + 20) = 6;
          v20 = v7;
          G4_VCALL<void>(a1, 0);
          v7 = v20;
        }
        else
        {
          v8 *= 4;
        }
      }
      ++*(uint32_t *)(v5 + v8);
      v18 = v7;
      v10 = 0;
      v11 = &(&jpeg_natural_order)[1];
      do
      {
        v12 = v18[*v11];
        if ( v18[*v11] != 0 )
        {
          if ( v10 > 15 )
          {
            v13 = v10 - 16;
            v10 = (v10 - 16) & 0xF;
            v6[240] += (v13 >> 4) + 1;
          }
          v14 = 1;
          v15 = (int)__builtin_abs(v12) >> 1;
          if ( v15 != 0 )
          {
            do
            {
              ++v14;
              v15 >>= 1;
            }
            while ( v15 != 0 );
            if ( v14 > 10 )
            {
              *(uint32_t *)(*a1 + 20) = 6;
              v19 = v14;
              G4_VCALL<void>(a1, 0);
              v14 = v19;
            }
          }
          ++v6[16 * v10 + v14];
          v10 = 0;
        }
        else
        {
          ++v10;
        }
        ++v11;
      }
      while ( v11 != (uint32_t *)&unk_1CBD960 );
      if ( v10 != 0 )
        ++*v6;
      v16 = v21++;
      *(uint32_t *)(v22 + 4 * v23 + 20) = **(int16_t **)(a2 + 4 * v16);
    }
    while ( a1[63] > v21 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_FBD140  (binary VA: 0xfbd140)
// Original: sub_FBD140
// ----------------------------------------------------------------------------
int sub_FBD140(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint8_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char v8;
  int v9;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v1 = a1;
  v2 = (uint32_t *)a1[6];
  v14 = (uint32_t *)a1[86];
  v3 = (uint8_t *)*v2;
  v16 = v14[3];
  v4 = v14[4];
  v5 = v2[1];
  v15 = v4;
  v17 = v14[5];
  v18 = v14[6];
  v19 = v14[7];
  v20 = v14[8];
  if ( v4 + 7 > 7 )
  {
    v6 = v14[4] + 7;
    v7 = v16 | (127 << (17 - v4));
    while ( 1 )
    {
      while ( 1 )
      {
        *v3++ = BYTE2(v7);
        if ( --v5 == 0 )
          break;
        if ( BYTE2(v7) == 255 )
          goto LABEL_8;
LABEL_4:
        v6 -= 8;
        v7 <<= 8;
        if ( v6 <= 7 )
          goto LABEL_11;
      }
      v11 = v6;
      v13 = a1[6];
      v8 = (*(int (**)(uint32_t *))(v13 + 12))(a1);
      v6 = v11;
      if ( v8 == 0 )
        goto LABEL_13;
      v3 = *(uint8_t **)v13;
      v5 = *(uint32_t *)(v13 + 4);
      if ( BYTE2(v7) != 255 )
        goto LABEL_4;
LABEL_8:
      *v3++ = 0;
      if ( --v5 != 0 )
        goto LABEL_4;
      v9 = a1[6];
      v12 = v6;
      if ( (*(uint8_t (**)(uint32_t *))(v9 + 12))(a1) == 0 )
      {
LABEL_13:
        *(uint32_t *)(*a1 + 20) = 24;
        G4_VCALL<void>(a1, 0);
        v1 = a1;
        v5 = 0;
        v2 = (uint32_t *)a1[6];
        goto LABEL_14;
      }
      v6 = v12 - 8;
      v3 = *(uint8_t **)v9;
      v7 <<= 8;
      v5 = *(uint32_t *)(v9 + 4);
      if ( v12 - 8 <= 7 )
      {
LABEL_11:
        v1 = a1;
        v2 = (uint32_t *)a1[6];
        break;
      }
    }
  }
  v15 = 0;
  v16 = 0;
LABEL_14:
  *v2 = (uint32_t)(uintptr_t)(v3);
  *(uint32_t *)(v1[6] + 4) = v5;
  v14[5] = v17;
  v14[6] = v18;
  v14[7] = v19;
  v14[3] = v16;
  v14[8] = v20;
  v14[4] = v15;
  return v20;
}

// ----------------------------------------------------------------------------
// Function: sub_FBD300  (binary VA: 0xfbd300)
// Original: sub_FBD300
// ----------------------------------------------------------------------------
int sub_FBD300(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  uint8_t *v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  bool v13; // cc
  uint8_t *v14;
  int v15;
  int v16;
  bool v17;
  char v18;
  uint8_t *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v29;
  char v30;
  uint8_t *v31;
  int v32;
  int v33;
  char v34;
  int v35;
  char v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  uint8_t *v45;
  int v46;
  uint8_t *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  uint8_t *v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  uint8_t *v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  char v66;
  int v67;
  char v68;
  typedef uint8_t *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int16_t *_g4_t_v91;
  typedef uint8_t *_g4_t_v92;
  typedef int _g4_t_v93;
  typedef uint32_t *_g4_t_v94;
  typedef int _g4_t_v95;
  typedef uint32_t *_g4_t_v96;
  typedef int *_g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef uint32_t _g4_t_v120[4];
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v69)) > _g4_s0 ? (12u + sizeof(_g4_t_v69)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v70)) > _g4_s1 ? (52u + sizeof(_g4_t_v70)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v71)) > _g4_s2 ? (52u + sizeof(_g4_t_v71)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v72)) > _g4_s3 ? (52u + sizeof(_g4_t_v72)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v73)) > _g4_s4 ? (52u + sizeof(_g4_t_v73)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v74)) > _g4_s5 ? (52u + sizeof(_g4_t_v74)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v75)) > _g4_s6 ? (52u + sizeof(_g4_t_v75)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v76)) > _g4_s7 ? (52u + sizeof(_g4_t_v76)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v77)) > _g4_s8 ? (52u + sizeof(_g4_t_v77)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v78)) > _g4_s9 ? (52u + sizeof(_g4_t_v78)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v79)) > _g4_s10 ? (52u + sizeof(_g4_t_v79)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v80)) > _g4_s11 ? (52u + sizeof(_g4_t_v80)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v81)) > _g4_s12 ? (52u + sizeof(_g4_t_v81)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v82)) > _g4_s13 ? (52u + sizeof(_g4_t_v82)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v83)) > _g4_s14 ? (56u + sizeof(_g4_t_v83)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v84)) > _g4_s15 ? (56u + sizeof(_g4_t_v84)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v85)) > _g4_s16 ? (56u + sizeof(_g4_t_v85)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v86)) > _g4_s17 ? (56u + sizeof(_g4_t_v86)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v87)) > _g4_s18 ? (56u + sizeof(_g4_t_v87)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v88)) > _g4_s19 ? (60u + sizeof(_g4_t_v88)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v89)) > _g4_s20 ? (68u + sizeof(_g4_t_v89)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v90)) > _g4_s21 ? (72u + sizeof(_g4_t_v90)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v91)) > _g4_s22 ? (76u + sizeof(_g4_t_v91)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v92)) > _g4_s23 ? (80u + sizeof(_g4_t_v92)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v93)) > _g4_s24 ? (80u + sizeof(_g4_t_v93)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v94)) > _g4_s25 ? (84u + sizeof(_g4_t_v94)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v95)) > _g4_s26 ? (88u + sizeof(_g4_t_v95)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v96)) > _g4_s27 ? (88u + sizeof(_g4_t_v96)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v97)) > _g4_s28 ? (92u + sizeof(_g4_t_v97)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v98)) > _g4_s29 ? (96u + sizeof(_g4_t_v98)) : _g4_s29,
    _g4_s31 = (96u + sizeof(_g4_t_v99)) > _g4_s30 ? (96u + sizeof(_g4_t_v99)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v100)) > _g4_s31 ? (96u + sizeof(_g4_t_v100)) : _g4_s31,
    _g4_s33 = (96u + sizeof(_g4_t_v101)) > _g4_s32 ? (96u + sizeof(_g4_t_v101)) : _g4_s32,
    _g4_s34 = (100u + sizeof(_g4_t_v102)) > _g4_s33 ? (100u + sizeof(_g4_t_v102)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v103)) > _g4_s34 ? (100u + sizeof(_g4_t_v103)) : _g4_s34,
    _g4_s36 = (100u + sizeof(_g4_t_v104)) > _g4_s35 ? (100u + sizeof(_g4_t_v104)) : _g4_s35,
    _g4_s37 = (100u + sizeof(_g4_t_v105)) > _g4_s36 ? (100u + sizeof(_g4_t_v105)) : _g4_s36,
    _g4_s38 = (100u + sizeof(_g4_t_v106)) > _g4_s37 ? (100u + sizeof(_g4_t_v106)) : _g4_s37,
    _g4_s39 = (100u + sizeof(_g4_t_v107)) > _g4_s38 ? (100u + sizeof(_g4_t_v107)) : _g4_s38,
    _g4_s40 = (104u + sizeof(_g4_t_v108)) > _g4_s39 ? (104u + sizeof(_g4_t_v108)) : _g4_s39,
    _g4_s41 = (104u + sizeof(_g4_t_v109)) > _g4_s40 ? (104u + sizeof(_g4_t_v109)) : _g4_s40,
    _g4_s42 = (104u + sizeof(_g4_t_v110)) > _g4_s41 ? (104u + sizeof(_g4_t_v110)) : _g4_s41,
    _g4_s43 = (104u + sizeof(_g4_t_v111)) > _g4_s42 ? (104u + sizeof(_g4_t_v111)) : _g4_s42,
    _g4_s44 = (104u + sizeof(_g4_t_v112)) > _g4_s43 ? (104u + sizeof(_g4_t_v112)) : _g4_s43,
    _g4_s45 = (104u + sizeof(_g4_t_v113)) > _g4_s44 ? (104u + sizeof(_g4_t_v113)) : _g4_s44,
    _g4_s46 = (108u + sizeof(_g4_t_v114)) > _g4_s45 ? (108u + sizeof(_g4_t_v114)) : _g4_s45,
    _g4_s47 = (108u + sizeof(_g4_t_v115)) > _g4_s46 ? (108u + sizeof(_g4_t_v115)) : _g4_s46,
    _g4_s48 = (108u + sizeof(_g4_t_v116)) > _g4_s47 ? (108u + sizeof(_g4_t_v116)) : _g4_s47,
    _g4_s49 = (108u + sizeof(_g4_t_v117)) > _g4_s48 ? (108u + sizeof(_g4_t_v117)) : _g4_s48,
    _g4_s50 = (108u + sizeof(_g4_t_v118)) > _g4_s49 ? (108u + sizeof(_g4_t_v118)) : _g4_s49,
    _g4_s51 = (108u + sizeof(_g4_t_v119)) > _g4_s50 ? (108u + sizeof(_g4_t_v119)) : _g4_s50,
    _g4_s52 = (112u + sizeof(_g4_t_v120)) > _g4_s51 ? (112u + sizeof(_g4_t_v120)) : _g4_s51,
    _g4_s53 = (128u + sizeof(_g4_t_v121)) > _g4_s52 ? (128u + sizeof(_g4_t_v121)) : _g4_s52,
    _g4_s54 = (132u + sizeof(_g4_t_v122)) > _g4_s53 ? (132u + sizeof(_g4_t_v122)) : _g4_s53,
    _g4_s55 = (136u + sizeof(_g4_t_v123)) > _g4_s54 ? (136u + sizeof(_g4_t_v123)) : _g4_s54,
    _g4_s56 = (140u + sizeof(_g4_t_v124)) > _g4_s55 ? (140u + sizeof(_g4_t_v124)) : _g4_s55
  };
  alignas(16) uint8_t _g4_sf[_g4_s56];
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 12u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 52u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 52u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 52u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 52u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 52u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 52u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 52u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 52u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 52u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 52u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 52u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 52u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 56u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 56u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 56u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 56u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 56u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 60u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 68u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 72u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 76u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 80u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 80u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 84u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 88u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 88u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 92u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 96u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 96u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 96u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 96u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 100u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 100u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 100u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 100u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 100u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 100u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 104u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 104u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 104u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 104u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 104u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 104u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 108u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 108u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 108u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 108u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 108u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 108u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 112u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 128u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 132u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 136u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 140u);

  v94 = (uint32_t *)a1[86];
  v2 = a1[6];
  v3 = a1[46];
  v4 = *(uint8_t **)v2;
  v5 = *(uint32_t *)(v2 + 4);
  v98 = v94[4];
  v120[3] = v98;
  v108 = v94[3];
  v120[2] = v108;
  v121 = v94[5];
  v122 = v94[6];
  v123 = v94[7];
  v124 = v94[8];
  v6 = v98;
  v7 = v108;
  if ( v3 == 0 || v94[9] != 0 )
    goto LABEL_3;
  v107 = v94[10];
  v119 = v98 + 7;
  if ( v98 + 7 > 7 )
  {
    v55 = v108 | (127 << (17 - v98));
    while ( 1 )
    {
      --v5;
      *v4 = BYTE2(v55);
      if ( v5 != 0 )
      {
        ++v4;
        if ( BYTE2(v55) != 255 )
          goto LABEL_118;
      }
      else
      {
        v56 = a1[6];
        if ( (*(uint8_t (**)(uint32_t *))(v56 + 12))(a1) == 0 )
          return 0;
        v4 = *(uint8_t **)v56;
        v5 = *(uint32_t *)(v56 + 4);
        if ( BYTE2(v55) != 255 )
          goto LABEL_118;
      }
      --v5;
      *v4 = 0;
      if ( v5 != 0 )
      {
        ++v4;
        v119 -= 8;
        v55 <<= 8;
        if ( v119 <= 7 )
          break;
      }
      else
      {
        v64 = a1[6];
        if ( (*(uint8_t (**)(uint32_t *))(v64 + 12))(a1) == 0 )
          return 0;
        v4 = *(uint8_t **)v64;
        v5 = *(uint32_t *)(v64 + 4);
LABEL_118:
        v55 <<= 8;
        v119 -= 8;
        if ( v119 <= 7 )
          break;
      }
    }
  }
  v57 = v5 - 1;
  *v4 = -1;
  if ( v57 != 0 )
  {
    v58 = v4 + 1;
  }
  else
  {
    v67 = a1[6];
    v68 = (*(int (**)(uint32_t *))(v67 + 12))(a1);
    v26 = 0;
    if ( v68 == 0 )
      return v26;
    v58 = *(uint8_t **)v67;
    v57 = *(uint32_t *)(v67 + 4);
  }
  v5 = v57 - 1;
  *v58 = v107 - 48;
  if ( v5 != 0 )
  {
    v4 = v58 + 1;
    goto LABEL_128;
  }
  v65 = a1[6];
  v66 = (*(int (**)(uint32_t *))(v65 + 12))(a1);
  v26 = 0;
  if ( v66 == 0 )
    return v26;
  v4 = *(uint8_t **)v65;
  v5 = *(uint32_t *)(v65 + 4);
LABEL_128:
  v59 = a1[56];
  if ( (int)v59 > 0 )
  {
    if ( v59 > 3 && 4 * (v59 >> 2) != 0 )
    {
      v60 = 0;
      do
      {
        v61 = v60++;
        *((__m128i *)&v121 + v61) = g4_m128_from<__m128i>(0LL);
      }
      while ( v59 >> 2 > v60 );
      v62 = 4 * (v59 >> 2);
      if ( v59 == v62 )
        goto LABEL_135;
    }
    else
    {
      v62 = 0;
    }
    do
      v120[v62++ + 4] = 0;
    while ( (int)v59 > v62 );
  }
LABEL_135:
  v6 = 0;
  v7 = 0;
LABEL_3:
  v8 = a1;
  if ( (int)a1[63] <= 0 )
    goto LABEL_44;
  v89 = 0;
  v92 = v4;
  v9 = a1;
  v10 = 0;
  do
  {
    v90 = v9[v10 + 64];
    v88 = v9[v90 + 57];
    v97 = (int *)v94[*(uint32_t *)(v88 + 24) + 15];
    v109 = v94[*(uint32_t *)(v88 + 20) + 11];
    v91 = *(int16_t **)(a2 + 4 * v89);
    v11 = *v91 - *(&v121 + v90);
    if ( v11 < 0 )
    {
      v50 = v11 - 1;
      v11 = *(&v121 + v90) - *v91;
      v95 = v50;
      goto LABEL_8;
    }
    v95 = 0;
    v114 = 0;
    if ( *v91 != *(&v121 + v90) )
    {
      v95 = *v91 - *(&v121 + v90);
LABEL_8:
      v102 = v5;
      v12 = 0;
      do
      {
        ++v12;
        v11 >>= 1;
      }
      while ( v11 != 0 );
      v114 = v12;
      v13 = v12 <= 11;
      v5 = v102;
      if ( !v13 )
      {
        *(uint32_t *)(*a1 + 20) = 6;
        v79 = v7;
        G4_VCALL<void>(a1, 0);
        v7 = v79;
      }
    }
    v103 = *(char *)(v109 + v114 + 1024);
    v99 = *(uint32_t *)(v109 + 4 * v114);
    if ( *(uint8_t *)(v109 + v114 + 1024) == 0 )
    {
      *(uint32_t *)(*a1 + 20) = 40;
      v78 = v7;
      G4_VCALL<void>(a1, 0);
      v7 = v78;
    }
    v6 += v103;
    v7 |= (v99 & ((1 << v103) - 1)) << (24 - v6);
    if ( v6 > 7 )
    {
      v110 = v5;
      v14 = v92;
      v15 = v7;
      v16 = v6;
      while ( 1 )
      {
        v17 = v110-- == 1;
        *v14 = BYTE2(v15);
        if ( v17 )
        {
          v70 = v16;
          v83 = a1[6];
          v18 = (*(int (**)(uint32_t *))(v83 + 12))(a1);
          v16 = v70;
          if ( v18 == 0 )
            return 0;
          v14 = *(uint8_t **)v83;
          v110 = *(uint32_t *)(v83 + 4);
          if ( BYTE2(v15) != 255 )
            goto LABEL_17;
        }
        else
        {
          ++v14;
          if ( BYTE2(v15) != 255 )
            goto LABEL_17;
        }
        v17 = v110-- == 1;
        *v14 = 0;
        if ( v17 )
        {
          v29 = a1[6];
          v71 = v16;
          v30 = (*(int (**)(uint32_t *))(v29 + 12))(a1);
          v16 = v71;
          if ( v30 == 0 )
            return 0;
          v14 = *(uint8_t **)v29;
          v110 = *(uint32_t *)(v29 + 4);
LABEL_17:
          v16 -= 8;
          v15 <<= 8;
          if ( v16 <= 7 )
            goto LABEL_23;
        }
        else
        {
          v16 -= 8;
          ++v14;
          v15 <<= 8;
          if ( v16 <= 7 )
          {
LABEL_23:
            v6 = v16;
            v92 = v14;
            v7 = v15;
            v5 = v110;
            break;
          }
        }
      }
    }
    if ( v114 != 0 )
    {
      v6 += v114;
      v7 |= (v95 & ((1 << v114) - 1)) << (24 - v6);
      if ( v6 > 7 )
      {
        v51 = v5;
        v52 = v92;
        v53 = v6;
        v54 = v7;
        while ( 1 )
        {
          --v51;
          *v52 = BYTE2(v54);
          if ( v51 != 0 )
          {
            ++v52;
            if ( BYTE2(v54) != 255 )
              goto LABEL_106;
          }
          else
          {
            v87 = a1[6];
            if ( (*(uint8_t (**)(uint32_t *))(v87 + 12))(a1) == 0 )
              return 0;
            v52 = *(uint8_t **)v87;
            v51 = *(uint32_t *)(v87 + 4);
            if ( BYTE2(v54) != 255 )
              goto LABEL_106;
          }
          --v51;
          *v52 = 0;
          if ( v51 != 0 )
          {
            v53 -= 8;
            ++v52;
            v54 <<= 8;
            if ( v53 <= 7 )
            {
LABEL_112:
              v7 = v54;
              v92 = v52;
              v6 = v53;
              v5 = v51;
              break;
            }
          }
          else
          {
            v80 = a1[6];
            if ( (*(uint8_t (**)(uint32_t *))(v80 + 12))(a1) == 0 )
              return 0;
            v52 = *(uint8_t **)v80;
            v51 = *(uint32_t *)(v80 + 4);
LABEL_106:
            v53 -= 8;
            v54 <<= 8;
            if ( v53 <= 7 )
              goto LABEL_112;
          }
        }
      }
    }
    v96 = &(&jpeg_natural_order)[1];
    v104 = 0;
    v69 = v92;
    do
    {
      v93 = v91[*v96];
      if ( v91[*v96] == 0 )
      {
        ++v104;
        goto LABEL_28;
      }
      while ( v104 > 15 )
      {
        v112 = *((char *)v97 + 1264);
        v100 = v97[240];
        if ( *((uint8_t *)v97 + 1264) == 0 )
        {
          *(uint32_t *)(*a1 + 20) = 40;
          v74 = v7;
          G4_VCALL<void>(a1, 0);
          v7 = v74;
        }
        v6 += v112;
        v7 |= (v100 & ((1 << v112) - 1)) << (24 - v6);
        if ( v6 > 7 )
        {
          v116 = v5;
          v31 = v69;
          v32 = v7;
          v33 = v6;
          while ( 1 )
          {
            v17 = v116-- == 1;
            *v31 = BYTE2(v32);
            if ( v17 )
            {
              v72 = v33;
              v84 = a1[6];
              v34 = (*(int (**)(uint32_t *))(v84 + 12))(a1);
              v33 = v72;
              if ( v34 == 0 )
                return 0;
              v31 = *(uint8_t **)v84;
              v116 = *(uint32_t *)(v84 + 4);
              if ( BYTE2(v32) == 255 )
              {
LABEL_64:
                v17 = v116-- == 1;
                *v31 = 0;
                if ( v17 )
                {
                  v35 = a1[6];
                  v73 = v33;
                  v36 = (*(int (**)(uint32_t *))(v35 + 12))(a1);
                  v33 = v73;
                  if ( v36 == 0 )
                    return 0;
                  v31 = *(uint8_t **)v35;
                  v116 = *(uint32_t *)(v35 + 4);
                }
                else
                {
                  ++v31;
                }
              }
            }
            else
            {
              ++v31;
              if ( BYTE2(v32) == 255 )
                goto LABEL_64;
            }
            v33 -= 8;
            v32 <<= 8;
            if ( v33 <= 7 )
            {
              v6 = v33;
              v69 = v31;
              v7 = v32;
              v5 = v116;
              break;
            }
          }
        }
        v104 -= 16;
      }
      v37 = v93;
      if ( v93 < 0 )
        v37 = -v93--;
      v38 = v37 >> 1;
      v113 = 1;
      if ( v38 != 0 )
      {
        v117 = v5;
        v39 = 1;
        do
        {
          ++v39;
          v38 >>= 1;
        }
        while ( v38 != 0 );
        v113 = v39;
        v13 = v39 <= 10;
        v5 = v117;
        if ( !v13 )
        {
          *(uint32_t *)(*a1 + 20) = 6;
          v75 = v7;
          G4_VCALL<void>(a1, 0);
          v7 = v75;
        }
      }
      v40 = v113 + 16 * v104;
      v106 = *((char *)v97 + v40 + 1024);
      v101 = v97[v40];
      if ( *((uint8_t *)v97 + v40 + 1024) == 0 )
      {
        *(uint32_t *)(*a1 + 20) = 40;
        v81 = v7;
        G4_VCALL<void>(a1, 0);
        v7 = v81;
      }
      v41 = v106 + v6;
      v118 = v7 | ((v101 & ((1 << v106) - 1)) << (24 - v41));
      if ( v41 > 7 )
      {
        v42 = v5;
        v43 = v41;
        v44 = v7 | ((v101 & ((1 << v106) - 1)) << (24 - v41));
        v45 = v69;
        while ( 1 )
        {
          --v42;
          *v45 = BYTE2(v44);
          if ( v42 != 0 )
          {
            ++v45;
            if ( BYTE2(v44) != 255 )
              goto LABEL_80;
          }
          else
          {
            v85 = a1[6];
            if ( (*(uint8_t (**)(uint32_t *))(v85 + 12))(a1) == 0 )
              return 0;
            v45 = *(uint8_t **)v85;
            v42 = *(uint32_t *)(v85 + 4);
            if ( BYTE2(v44) != 255 )
              goto LABEL_80;
          }
          --v42;
          *v45 = 0;
          if ( v42 != 0 )
          {
            v43 -= 8;
            ++v45;
            v44 <<= 8;
            if ( v43 <= 7 )
            {
LABEL_86:
              v118 = v44;
              v69 = v45;
              v41 = v43;
              v5 = v42;
              break;
            }
          }
          else
          {
            v76 = a1[6];
            if ( (*(uint8_t (**)(uint32_t *))(v76 + 12))(a1) == 0 )
              return 0;
            v45 = *(uint8_t **)v76;
            v42 = *(uint32_t *)(v76 + 4);
LABEL_80:
            v43 -= 8;
            v44 <<= 8;
            if ( v43 <= 7 )
              goto LABEL_86;
          }
        }
      }
      v6 = v113 + v41;
      v7 = v118 | ((v93 & ((1 << v113) - 1)) << (24 - v6));
      if ( v6 <= 7 )
        goto LABEL_97;
      v46 = v5;
      v47 = v69;
      v48 = v6;
      v49 = v118 | ((v93 & ((1 << v113) - 1)) << (24 - v6));
      do
      {
        while ( 1 )
        {
          --v46;
          *v47 = BYTE2(v49);
          if ( v46 != 0 )
          {
            ++v47;
            if ( BYTE2(v49) != 255 )
              goto LABEL_90;
          }
          else
          {
            v86 = a1[6];
            if ( (*(uint8_t (**)(uint32_t *))(v86 + 12))(a1) == 0 )
              return 0;
            v47 = *(uint8_t **)v86;
            v46 = *(uint32_t *)(v86 + 4);
            if ( BYTE2(v49) != 255 )
              goto LABEL_90;
          }
          --v46;
          *v47 = 0;
          if ( v46 != 0 )
            break;
          v77 = a1[6];
          if ( (*(uint8_t (**)(uint32_t *))(v77 + 12))(a1) == 0 )
            return 0;
          v47 = *(uint8_t **)v77;
          v46 = *(uint32_t *)(v77 + 4);
LABEL_90:
          v48 -= 8;
          v49 <<= 8;
          if ( v48 <= 7 )
            goto LABEL_96;
        }
        v48 -= 8;
        ++v47;
        v49 <<= 8;
      }
      while ( v48 > 7 );
LABEL_96:
      v7 = v49;
      v69 = v47;
      v6 = v48;
      v5 = v46;
LABEL_97:
      v104 = 0;
LABEL_28:
      ++v96;
    }
    while ( v96 != (uint32_t *)&unk_1CBD960 );
    v92 = v69;
    if ( v104 != 0 )
    {
      v111 = *((char *)v97 + 1024);
      v105 = *v97;
      if ( *((uint8_t *)v97 + 1024) == 0 )
      {
        *(uint32_t *)(*a1 + 20) = 40;
        v82 = v7;
        G4_VCALL<void>(a1, 0);
        v7 = v82;
      }
      v6 += v111;
      v7 |= (v105 & ((1 << v111) - 1)) << (24 - v6);
      if ( v6 > 7 )
      {
        v115 = v6;
        v19 = v69;
        v20 = v7;
        while ( 1 )
        {
          while ( 1 )
          {
            --v5;
            *v19 = BYTE2(v20);
            if ( v5 == 0 )
              break;
            ++v19;
            if ( BYTE2(v20) == 255 )
              goto LABEL_39;
LABEL_35:
            v20 <<= 8;
            v115 -= 8;
            if ( v115 <= 7 )
              goto LABEL_41;
          }
          v21 = a1[6];
          if ( (*(uint8_t (**)(uint32_t *))(v21 + 12))(a1) == 0 )
            return 0;
          v19 = *(uint8_t **)v21;
          v5 = *(uint32_t *)(v21 + 4);
          if ( BYTE2(v20) != 255 )
            goto LABEL_35;
LABEL_39:
          --v5;
          *v19 = 0;
          if ( v5 == 0 )
          {
            v63 = a1[6];
            if ( (*(uint8_t (**)(uint32_t *))(v63 + 12))(a1) == 0 )
              return 0;
            v19 = *(uint8_t **)v63;
            v5 = *(uint32_t *)(v63 + 4);
            goto LABEL_35;
          }
          ++v19;
          v115 -= 8;
          v20 <<= 8;
          if ( v115 <= 7 )
          {
LABEL_41:
            v7 = v20;
            v92 = v19;
            v6 = v115;
            break;
          }
        }
      }
    }
    v22 = v89++;
    *(&v121 + v90) = **(int16_t **)(a2 + 4 * v22);
    v9 = a1;
    v10 = v89;
  }
  while ( a1[63] > v89 );
  v4 = v92;
  v8 = a1;
LABEL_44:
  *(uint32_t *)v8[6] = (uint32_t)(uintptr_t)(v4);
  *(uint32_t *)(a1[6] + 4) = v5;
  v23 = v121;
  v94[4] = v6;
  v94[5] = v23;
  v94[6] = v122;
  v94[7] = v123;
  v24 = v124;
  v94[3] = v7;
  v94[8] = v24;
  v25 = a1[46];
  v26 = 1;
  if ( v25 == 0 )
    return v26;
  v27 = v94[9];
  if ( v27 == 0 )
  {
    v94[10] = ((uint8_t)v94[10] + 1) & 7;
    v27 = v25;
  }
  v94[9] = v27 - 1;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_FBE2B0  (binary VA: 0xfbe2b0)
// Original: sub_FBE2B0
// ----------------------------------------------------------------------------
int sub_FBE2B0(int a1, char a2)
{
  uint32_t *v2;
  int (*v3)(int);
  int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  uint16_t *v10;
  uint16_t *v11;
  unsigned int v12;
  int v13;
  uint16_t *v14;
  unsigned int v15;
  uint16_t *v16;
  int result;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  uint32_t *v22;
  unsigned int v23;

  v2 = *(uint32_t **)(a1 + 344);
  if ( a2 != 0 )
  {
    v2[1] = (uint32_t)(uintptr_t)(sub_FBCF20);
    v3 = sub_FBE890;
  }
  else
  {
    v2[1] = (uint32_t)(uintptr_t)(((int (*)(uint32_t *, int))sub_FBD300));
    v3 = (int (*)(int))sub_FBD140;
  }
  v2[2] = (uint32_t)(uintptr_t)(v3);
  if ( *(int *)(a1 + 224) > 0 )
  {
    v4 = 0;
    v22 = v2;
    while ( 1 )
    {
      v5 = *(uint32_t *)(a1 + 4 * v4 + 228);
      v6 = *(uint32_t *)(v5 + 20);
      v7 = *(uint32_t *)(v5 + 24);
      if ( a2 != 0 )
        break;
      v18 = *(uint32_t *)(v5 + 24);
      jpeg_make_c_derived_tbl((int (***)(uint32_t, uint32_t, uint32_t))a1, 1, v6, &v22[v6 + 11]);
      jpeg_make_c_derived_tbl((int (***)(uint32_t, uint32_t, uint32_t))a1, 0, v18, &v22[v18 + 15]);
LABEL_25:
      v2 = v22;
      v22[v4++ + 5] = 0;
      if ( *(uint32_t *)(a1 + 224) <= v4 )
        goto LABEL_26;
    }
    if ( v6 > 3 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 50;
      *(uint32_t *)(*(uint32_t *)a1 + 24) = v6;
      v19 = v7;
      (**(void (***)(int))a1)(a1);
      v7 = v19;
      if ( v19 <= 3 )
      {
LABEL_8:
        v8 = v6 + 16;
        v9 = v22[v8 + 3];
        if ( v9 == 0 )
        {
LABEL_30:
          v21 = v7;
          v9 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1028);
          v22[v8 + 3] = v9;
          v7 = v21;
        }
LABEL_9:
        v10 = (uint16_t *)v9;
        v23 = 1028;
        if ( (v9 & 1) != 0 )
        {
          v10 = (uint16_t *)(v9 + 1);
          *(uint8_t *)v9 = 0;
          v23 = 1027;
          if ( ((v9 + 1) & 2) == 0 )
            goto LABEL_11;
        }
        else if ( (v9 & 2) == 0 )
        {
LABEL_11:
          memset(v10, 0, 4 * (v23 >> 2));
          v11 = &v10[2 * (v23 >> 2)];
          if ( (v23 & 2) != 0 )
            *v11++ = 0;
          if ( (v23 & 1) != 0 )
            *(uint8_t *)v11 = 0;
          v12 = v7 + 20;
          v13 = v22[v7 + 23];
          if ( v13 == 0 )
          {
            v13 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1028);
            v22[v12 + 3] = v13;
          }
          v14 = (uint16_t *)v13;
          v15 = 1028;
          if ( (v13 & 1) != 0 )
          {
            *(uint8_t *)v13 = 0;
            v14 = (uint16_t *)(v13 + 1);
            LOBYTE(v15) = 3;
          }
          if ( ((uint8_t)(uintptr_t)v14 & 2) != 0 )
          {
            *v14 = 0;
            v15 -= 2;
            ++v14;
          }
          memset(v14, 0, 4 * (v15 >> 2));
          v16 = &v14[2 * (v15 >> 2)];
          if ( (v15 & 2) != 0 )
            *v16++ = 0;
          if ( (v15 & 1) != 0 )
            *(uint8_t *)v16 = 0;
          goto LABEL_25;
        }
        *v10++ = 0;
        v23 -= 2;
        goto LABEL_11;
      }
    }
    else if ( v7 <= 3 )
    {
      goto LABEL_8;
    }
    v8 = v6 + 16;
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 50;
    *(uint32_t *)(*(uint32_t *)a1 + 24) = v7;
    v20 = v7;
    (**(void (***)(int))a1)(a1);
    v7 = v20;
    v9 = v22[v8 + 3];
    if ( v9 != 0 )
      goto LABEL_9;
    goto LABEL_30;
  }
LABEL_26:
  v2[3] = 0;
  v2[4] = 0;
  result = *(uint32_t *)(a1 + 184);
  v2[10] = 0;
  v2[9] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FBE890  (binary VA: 0xfbe890)
// Original: sub_FBE890
// ----------------------------------------------------------------------------
int sub_FBE890(int a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t v12[8];

  v11 = 0;
  v12[0] = 0;
  result = *(uint32_t *)(a1 + 224);
  if ( result > 0 )
  {
    v2 = 0;
    v6 = *(uint32_t *)(a1 + 344);
    do
    {
      result = *(uint32_t *)(a1 + 4 * v2 + 228);
      v3 = *(uint32_t *)(result + 20);
      v4 = *(uint32_t *)(result + 24);
      if ( *((uint8_t *)&v12[-1] + v3) == 0 )
      {
        v10 = v3 + 20;
        v7 = *(uint32_t *)(a1 + 4 * (v3 + 20) + 4);
        if ( v7 == 0 )
        {
          v9 = *(uint32_t *)(result + 20);
          v7 = jpeg_alloc_huff_table(a1);
          *(uint32_t *)(a1 + 4 * v10 + 4) = v7;
          v3 = v9;
        }
        v8 = v3;
        result = jpeg_gen_optimal_table(a1, v7, *(uint32_t *)(v6 + 4 * v3 + 76));
        *((uint8_t *)&v12[-1] + v8) = 1;
      }
      if ( *((uint8_t *)v12 + v4) == 0 )
      {
        v5 = *(uint32_t *)(a1 + 4 * (v4 + 24) + 4);
        if ( v5 == 0 )
        {
          v5 = jpeg_alloc_huff_table(a1);
          *(uint32_t *)(a1 + 4 * (v4 + 24) + 4) = v5;
        }
        result = jpeg_gen_optimal_table(a1, v5, *(uint32_t *)(v6 + 4 * v4 + 92));
        *((uint8_t *)v12 + v4) = 1;
      }
      ++v2;
    }
    while ( *(uint32_t *)(a1 + 224) > v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FBEA70  (binary VA: 0xfbea70)
// Original: sub_FBEA70
// ----------------------------------------------------------------------------
void sub_FBEA70(int a1)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v4;
  uint16_t *v5;
  int v6;
  char v7;
  int *v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint16_t **v14;

  v1 = a1;
  v2 = *(uint32_t *)(a1 + 392);
  v13 = v2;
  if ( *(uint32_t *)(v2 + 16) != 0 )
  {
    if ( *(uint8_t *)(a1 + 73) == 0 || *(uint8_t *)(a1 + 200) == 0 || *(uint32_t *)(a1 + 140) == 0 )
      goto LABEL_34;
    v3 = *(uint32_t **)(v2 + 112);
    if ( v3 == nullptr )
    {
      v3 = (uint32_t *)(**(int (***)(int, int, int))(a1 + 4))(a1, 1, 24 * *(uint32_t *)(a1 + 36));
      *(uint32_t *)(v13 + 112) = (uint32_t)(uintptr_t)(v3);
    }
    v4 = *(uint32_t *)(a1 + 196);
    if ( *(int *)(a1 + 36) <= 0 )
      goto LABEL_34;
    v5 = *(uint16_t **)(v4 + 76);
    if ( v5 == nullptr || *v5 == 0 || v5[1] == 0 || v5[8] == 0 || v5[16] == 0 )
      goto LABEL_34;
    v6 = 0;
    v14 = (uint16_t **)(v4 + 160);
    v7 = 0;
    while ( 1 )
    {
      if ( v5[9] == 0 || v5[2] == 0 )
      {
LABEL_33:
        v1 = a1;
        goto LABEL_34;
      }
      v1 = a1;
      v8 = (int *)(*(uint32_t *)(a1 + 140) + (v6 << 8));
      if ( *v8 < 0 )
        goto LABEL_34;
      v3[1] = v8[1];
      v9 = v8[1] == 0;
      v3[2] = v8[2];
      v10 = v8[2];
      if ( !v9 )
        v7 = 1;
      v3[3] = v8[3];
      if ( v10 != 0 )
        v7 = 1;
      v9 = v8[3] == 0;
      v3[4] = v8[4];
      v11 = v8[4];
      if ( !v9 )
        v7 = 1;
      v3[5] = v8[5];
      v12 = v8[5];
      if ( v11 != 0 )
        v7 = 1;
      if ( v12 != 0 )
        v7 = 1;
      v3 += 6;
      if ( ++v6 >= *(uint32_t *)(a1 + 36) )
        break;
      v5 = *v14;
      if ( *v14 != nullptr && *v5 != 0 && v5[1] != 0 && v5[8] != 0 )
      {
        v14 += 21;
        if ( v5[16] != 0 )
          continue;
      }
      goto LABEL_33;
    }
    v1 = a1;
    if ( v7 != 0 )
      *(uint32_t *)(v13 + 12) = (uint32_t)(uintptr_t)(sub_FBEF10);
    else
LABEL_34:
      *(uint32_t *)(v13 + 12) = (uint32_t)(uintptr_t)(sub_FBF750);
  }
  *(uint32_t *)(v1 + 136) = 0;
}

// ----------------------------------------------------------------------------
// Function: sub_FBEC70  (binary VA: 0xfbec70)
// Original: sub_FBEC70
// ----------------------------------------------------------------------------
int sub_FBEC70()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_FBEC80  (binary VA: 0xfbec80)
// Original: sub_FBEC80
// ----------------------------------------------------------------------------
int sub_FBEC80(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  unsigned int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v13;
  unsigned int v14;
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  unsigned int i;
  int v20;
  uint32_t *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint32_t v26[6];

  v21 = (uint32_t *)a1[98];
  if ( (int)a1[73] > 0 )
  {
    v1 = 0;
    do
    {
      v26[v1] = (*(int (**)(uint32_t *, uint32_t, int, uint32_t, int))(a1[1] + 32))(
                  a1,
                  v21[*(uint32_t *)(a1[v1 + 74] + 4) + 18],
                  a1[32] * *(uint32_t *)(a1[v1 + 74] + 12),
                  *(uint32_t *)(a1[v1 + 74] + 12),
                  1);
      ++v1;
    }
    while ( a1[73] > v1 );
  }
  v2 = v21[6];
  v3 = v21[7];
  v17 = v2;
  if ( v2 >= v3 )
  {
LABEL_23:
    v13 = a1[71];
    v14 = a1[32] + 1;
    a1[32] = v14;
    if ( v14 >= v13 )
    {
      (*(void (**)(uint32_t *))(a1[100] + 12))(a1);
      return 4;
    }
    else
    {
      v15 = (uint32_t *)a1[98];
      if ( (int)a1[73] <= 1 )
      {
        if ( v14 < v13 - 1 )
          v16 = *(uint32_t *)(a1[74] + 12);
        else
          v16 = *(uint32_t *)(a1[74] + 72);
        v15[7] = v16;
      }
      else
      {
        v15[7] = 1;
      }
      v15[5] = 0;
      v15[6] = 0;
      return 3;
    }
  }
  else
  {
    v4 = v21[5];
    v18 = 4 * v2;
    for ( i = v4; ; i = 0 )
    {
      v5 = v21;
      if ( a1[78] > v4 )
        break;
LABEL_20:
      ++v17;
      v18 += 4;
      v5[5] = 0;
      if ( v17 >= v3 )
        goto LABEL_23;
      v4 = 0;
    }
    while ( 1 )
    {
      v20 = 0;
      v25 = 0;
      v6 = a1[73];
      if ( v6 > 0 )
      {
        do
        {
          v7 = a1[v20 + 74];
          v8 = *(uint32_t *)(v7 + 56);
          v9 = *(uint32_t *)(v7 + 52);
          if ( v8 > 0 )
          {
            v24 = 0;
            v23 = i * (v9 << 7);
            v22 = v26[v20] + v18;
            do
            {
              if ( v9 > 0 )
              {
                v10 = v23 + *(uint32_t *)(v22 + 4 * v24);
                v11 = v25;
                do
                {
                  v21[v11++ + 8] = v10;
                  v9 = *(uint32_t *)(v7 + 52);
                  v10 += 128;
                }
                while ( v11 - v25 < v9 );
                v8 = *(uint32_t *)(v7 + 56);
                v25 = v11;
              }
              ++v24;
            }
            while ( v24 < v8 );
            v6 = a1[73];
          }
          ++v20;
        }
        while ( v20 < v6 );
      }
      if ( (*(uint8_t (**)(uint32_t *, uint32_t *))(a1[102] + 4))(a1, v21 + 8) == 0 )
        break;
      if ( a1[78] <= ++i )
      {
        v5 = v21;
        v3 = v21[7];
        goto LABEL_20;
      }
    }
    v21[6] = v17;
    v21[5] = i;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_FBEF10  (binary VA: 0xfbef10)
// Original: sub_FBEF10
// ----------------------------------------------------------------------------
int sub_FBEF10(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  int v7;
  int v8;
  unsigned int v9;
  uint16_t *v10;
  int v11;
  int v12;
  int v13;
  int16_t *v14;
  int16_t *v15;
  int16_t *v16;
  uint32_t *v17;
  int v18;
  int v19;
  int v20;
  bool v21; // cc
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
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;
  bool v51;
  typedef unsigned int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef char _g4_t_v56;
  typedef char _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int16_t **_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef void (*_g4_t_v74)(uint32_t *, int, uint8_t *, int, int);
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef uint32_t *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int16_t *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef int16_t *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef unsigned int _g4_t_v94;
  typedef uint8_t _g4_t_v95[2];
  typedef int16_t _g4_t_v96;
  typedef int16_t _g4_t_v97;
  typedef int16_t _g4_t_v98;
  typedef int16_t _g4_t_v99;
  typedef int16_t _g4_t_v100;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (4u + sizeof(_g4_t_v52)) > _g4_s0 ? (4u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v53)) > _g4_s1 ? (8u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v54)) > _g4_s2 ? (12u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v55)) > _g4_s3 ? (20u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (26u + sizeof(_g4_t_v56)) > _g4_s4 ? (26u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (27u + sizeof(_g4_t_v57)) > _g4_s5 ? (27u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v58)) > _g4_s6 ? (28u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v59)) > _g4_s7 ? (32u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v60)) > _g4_s8 ? (36u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v61)) > _g4_s9 ? (40u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v62)) > _g4_s10 ? (44u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v63)) > _g4_s11 ? (48u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v64)) > _g4_s12 ? (52u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v65)) > _g4_s13 ? (56u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v66)) > _g4_s14 ? (60u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v67)) > _g4_s15 ? (64u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v68)) > _g4_s16 ? (68u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v69)) > _g4_s17 ? (72u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v70)) > _g4_s18 ? (76u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v71)) > _g4_s19 ? (80u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v72)) > _g4_s20 ? (84u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v73)) > _g4_s21 ? (88u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v74)) > _g4_s22 ? (92u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v75)) > _g4_s23 ? (96u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v76)) > _g4_s24 ? (100u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v77)) > _g4_s25 ? (104u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v78)) > _g4_s26 ? (108u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v79)) > _g4_s27 ? (112u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_v80)) > _g4_s28 ? (116u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v81)) > _g4_s29 ? (120u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (124u + sizeof(_g4_t_v82)) > _g4_s30 ? (124u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v83)) > _g4_s31 ? (128u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v84)) > _g4_s32 ? (128u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v85)) > _g4_s33 ? (132u + sizeof(_g4_t_v85)) : _g4_s33,
    _g4_s35 = (136u + sizeof(_g4_t_v86)) > _g4_s34 ? (136u + sizeof(_g4_t_v86)) : _g4_s34,
    _g4_s36 = (140u + sizeof(_g4_t_v87)) > _g4_s35 ? (140u + sizeof(_g4_t_v87)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v88)) > _g4_s36 ? (144u + sizeof(_g4_t_v88)) : _g4_s36,
    _g4_s38 = (148u + sizeof(_g4_t_v89)) > _g4_s37 ? (148u + sizeof(_g4_t_v89)) : _g4_s37,
    _g4_s39 = (148u + sizeof(_g4_t_v90)) > _g4_s38 ? (148u + sizeof(_g4_t_v90)) : _g4_s38,
    _g4_s40 = (152u + sizeof(_g4_t_v91)) > _g4_s39 ? (152u + sizeof(_g4_t_v91)) : _g4_s39,
    _g4_s41 = (152u + sizeof(_g4_t_v92)) > _g4_s40 ? (152u + sizeof(_g4_t_v92)) : _g4_s40,
    _g4_s42 = (156u + sizeof(_g4_t_v93)) > _g4_s41 ? (156u + sizeof(_g4_t_v93)) : _g4_s41,
    _g4_s43 = (156u + sizeof(_g4_t_v94)) > _g4_s42 ? (156u + sizeof(_g4_t_v94)) : _g4_s42,
    _g4_s44 = (160u + sizeof(_g4_t_v95)) > _g4_s43 ? (160u + sizeof(_g4_t_v95)) : _g4_s43,
    _g4_s45 = (162u + sizeof(_g4_t_v96)) > _g4_s44 ? (162u + sizeof(_g4_t_v96)) : _g4_s44,
    _g4_s46 = (164u + sizeof(_g4_t_v97)) > _g4_s45 ? (164u + sizeof(_g4_t_v97)) : _g4_s45,
    _g4_s47 = (176u + sizeof(_g4_t_v98)) > _g4_s46 ? (176u + sizeof(_g4_t_v98)) : _g4_s46,
    _g4_s48 = (178u + sizeof(_g4_t_v99)) > _g4_s47 ? (178u + sizeof(_g4_t_v99)) : _g4_s47,
    _g4_s49 = (192u + sizeof(_g4_t_v100)) > _g4_s48 ? (192u + sizeof(_g4_t_v100)) : _g4_s48
  };
  alignas(16) uint8_t _g4_sf[_g4_s49];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 26u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 27u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 52u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 56u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 60u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 64u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 68u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 72u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 76u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 80u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 84u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 88u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 92u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 96u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 100u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 104u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 108u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 112u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 116u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 120u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 124u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 128u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 128u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 132u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 136u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 140u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 144u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 148u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 148u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 152u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 152u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 156u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 156u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 160u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 162u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 164u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 176u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 178u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 192u);

  v53 = a1[98];
  v52 = a1[71] - 1;
  while ( 1 )
  {
    v2 = a1[31];
    v3 = a1[33];
    if ( v2 > v3 )
    {
      v5 = a1[34];
      goto LABEL_9;
    }
    v4 = a1[100];
    if ( *(uint8_t *)(v4 + 17) != 0 )
      break;
    if ( v2 == v3 )
    {
      v5 = a1[34];
      if ( __PAIR64__(a1[32], a1[91]) >= __PAIR64__(v5, 1) && a1[32] != v5 + (a1[91] == 0) )
        goto LABEL_9;
    }
    if ( (*(int (**)(uint32_t *))v4)(a1) == 0 )
      return 0;
  }
  v5 = a1[34];
LABEL_9:
  v7 = a1[9];
  v82 = a1[49];
  if ( v7 > 0 )
  {
    v54 = 0;
    v55 = 0;
    while ( 1 )
    {
      if ( *(uint8_t *)(v82 + 48) != 0 )
      {
        if ( v52 <= v5 )
        {
          v57 = 1;
          v9 = *(uint32_t *)(v82 + 12);
          v8 = v9;
          if ( *(uint32_t *)(v82 + 32) % v9 != 0 )
            v8 = *(uint32_t *)(v82 + 32) % v9;
          v58 = v8;
        }
        else
        {
          v57 = 0;
          v58 = *(uint32_t *)(v82 + 12);
          v8 = 2 * v58;
          v9 = v58;
        }
        if ( v5 != 0 )
        {
          v56 = 0;
          v59 = (int16_t **)((*(int (**)(uint32_t *, uint32_t, unsigned int, unsigned int, uint32_t))(a1[1] + 32))(
                               a1,
                               *(uint32_t *)(v53 + 4 * v55 + 72),
                               v9 * (v5 - 1),
                               v9 + v8,
                               0)
                           + 4 * *(uint32_t *)(v82 + 12));
        }
        else
        {
          v59 = (int16_t **)(*(int (**)(uint32_t *, uint32_t, uint32_t, int, uint32_t))(a1[1] + 32))(
                              a1,
                              *(uint32_t *)(v53 + 4 * v55 + 72),
                              0,
                              v8,
                              0);
          v56 = 1;
        }
        v10 = *(uint16_t **)(v82 + 76);
        v93 = v10[16];
        v91 = v10[9];
        v11 = *v10;
        v12 = v10[1];
        v13 = v10[8];
        v89 = v10[2];
        v74 = *(void (**)(uint32_t *, int, uint8_t *, int, int))(a1[103] + 4 * v55 + 4);
        v75 = *(uint32_t *)(a2 + 4 * v55);
        if ( v58 > 0 )
        {
          v72 = 9 * v11;
          v60 = 5 * v11;
          v66 = 36 * v11;
          v73 = 0;
          v65 = v12 << 7;
          v83 = (uint32_t *)(*(uint32_t *)(v53 + 112) + v54);
          v70 = v13 << 8;
          v64 = v13 << 7;
          v63 = v93 << 7;
          v69 = v93 << 8;
          v62 = v91 << 7;
          v68 = v91 << 8;
          v61 = v89 << 7;
          v71 = v12 << 8;
          v67 = v89 << 8;
          do
          {
            v14 = v59[v73];
            if ( v73 != 0 || (v15 = *v59, v56 == 0) )
              v15 = v59[v73 - 1];
            if ( v57 != 0 && v58 - 1 == v73 )
              v16 = v59[v73];
            else
              v16 = v59[v73 + 1];
            v92 = 0;
            v94 = 0;
            v90 = v15 + 64;
            v88 = v16 + 64;
            v79 = *(uint32_t *)(v82 + 28) - 1;
            v86 = *v14;
            v78 = v86;
            v87 = *v16;
            v77 = v87;
            v85 = *v15;
            v76 = v85;
            v17 = v83;
            while ( 1 )
            {
              jcopy_block_row(v14, v95, 1);
              if ( v79 <= v94 )
              {
                v80 = v87;
                v84 = v86;
                v81 = v85;
              }
              else
              {
                v84 = v14[64];
                v81 = *v90;
                v80 = *v88;
              }
              v18 = v17[1];
              if ( v18 != 0 && v96 == 0 )
              {
                v19 = v66 * (v78 - v84);
                if ( v19 < 0 )
                {
                  v40 = (v65 - v19) / v71;
                  if ( v18 > 0 )
                  {
                    v21 = v40 < 1 << v18;
                    v41 = (1 << v18) - 1;
                    if ( !v21 )
                      v40 = v41;
                  }
                  v20 = -v40;
                }
                else
                {
                  v20 = (v65 + v19) / v71;
                  if ( v18 > 0 )
                  {
                    v21 = v20 < 1 << v18;
                    v22 = (1 << v18) - 1;
                    if ( !v21 )
                      LOWORD(v20) = v22;
                  }
                }
                v96 = v20;
              }
              v23 = v17[2];
              if ( v23 != 0 && v98 == 0 )
              {
                v24 = v66 * (v85 - v87);
                if ( v24 < 0 )
                {
                  v48 = (v64 - v24) / v70;
                  if ( v23 > 0 )
                  {
                    v21 = v48 < 1 << v23;
                    v49 = (1 << v23) - 1;
                    if ( !v21 )
                      v48 = v49;
                  }
                  v25 = -v48;
                }
                else
                {
                  v25 = (v64 + v24) / v70;
                  if ( v23 > 0 )
                  {
                    v21 = v25 < 1 << v23;
                    v26 = (1 << v23) - 1;
                    if ( !v21 )
                      LOWORD(v25) = v26;
                  }
                }
                v98 = v25;
              }
              v27 = v17[3];
              if ( v27 != 0 && v100 == 0 )
              {
                v28 = v72 * (v87 + v85 - 2 * v86);
                if ( v28 < 0 )
                {
                  v46 = (v63 - v28) / v69;
                  if ( v27 > 0 )
                  {
                    v21 = v46 < 1 << v27;
                    v47 = (1 << v27) - 1;
                    if ( !v21 )
                      v46 = v47;
                  }
                  v29 = -v46;
                }
                else
                {
                  v29 = (v63 + v28) / v69;
                  if ( v27 > 0 )
                  {
                    v21 = v29 < 1 << v27;
                    v30 = (1 << v27) - 1;
                    if ( !v21 )
                      LOWORD(v29) = v30;
                  }
                }
                v100 = v29;
              }
              v31 = v17[4];
              if ( v31 != 0 && v99 == 0 )
              {
                v32 = v60 * (v80 + v76 - v81 - v77);
                if ( v32 < 0 )
                {
                  v44 = (v62 - v32) / v68;
                  if ( v31 > 0 )
                  {
                    v21 = v44 < 1 << v31;
                    v45 = (1 << v31) - 1;
                    if ( !v21 )
                      v44 = v45;
                  }
                  v33 = -v44;
                }
                else
                {
                  v33 = (v62 + v32) / v68;
                  if ( v31 > 0 )
                  {
                    v21 = v33 < 1 << v31;
                    v34 = (1 << v31) - 1;
                    if ( !v21 )
                      LOWORD(v33) = v34;
                  }
                }
                v99 = v33;
              }
              v35 = v17[5];
              if ( v35 != 0 && v97 == 0 )
              {
                v36 = v72 * (v84 + v78 - 2 * v86);
                if ( v36 < 0 )
                {
                  v42 = (v61 - v36) / v67;
                  if ( v35 > 0 )
                  {
                    v21 = v42 < 1 << v35;
                    v43 = (1 << v35) - 1;
                    if ( !v21 )
                      v42 = v43;
                  }
                  v37 = -v42;
                }
                else
                {
                  v37 = (v61 + v36) / v67;
                  if ( v35 > 0 )
                  {
                    v21 = v37 < 1 << v35;
                    v38 = (1 << v35) - 1;
                    if ( !v21 )
                      LOWORD(v37) = v38;
                  }
                }
                v97 = v37;
              }
              v74(a1, v82, v95, v75, v92);
              ++v94;
              v14 += 64;
              v90 += 64;
              v88 += 64;
              v39 = *(uint32_t *)(v82 + 36);
              v92 += v39;
              if ( v79 < v94 )
                break;
              v77 = v87;
              v87 = v80;
              v78 = v86;
              v86 = v84;
              v76 = v85;
              v85 = v81;
            }
            v83 = v17;
            ++v73;
            v75 += 4 * v39;
          }
          while ( v73 != v58 );
        }
        v7 = a1[9];
        v5 = a1[34];
      }
      ++v55;
      v54 += 24;
      if ( v55 >= v7 )
        break;
      v82 += 84;
    }
  }
  v50 = v5 + 1;
  v51 = v50 < a1[71];
  a1[34] = v50;
  return 4 - v51;
}

// ----------------------------------------------------------------------------
// Function: sub_FBF750  (binary VA: 0xfbf750)
// Original: sub_FBF750
// ----------------------------------------------------------------------------
int sub_FBF750(int a1, int a2)
{
  int v2;
  unsigned int v3;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  bool v15;
  unsigned int v16;
  int v17;
  int v18;
  void (*v19)(int, int, int, int, int);
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;

  v24 = *(uint32_t *)(a1 + 392);
  v25 = *(uint32_t *)(a1 + 284) - 1;
  while ( 1 )
  {
    v2 = *(uint32_t *)(a1 + 132);
    if ( *(uint32_t *)(a1 + 124) >= v2 )
      break;
LABEL_5:
    if ( (**(int (***)(int))(a1 + 400))(a1) == 0 )
      return 0;
  }
  if ( *(uint32_t *)(a1 + 124) == v2 )
  {
    v3 = *(uint32_t *)(a1 + 136);
    if ( *(uint32_t *)(a1 + 128) > v3 )
      goto LABEL_8;
    goto LABEL_5;
  }
  v3 = *(uint32_t *)(a1 + 136);
LABEL_8:
  v5 = *(uint32_t *)(a1 + 36);
  v6 = *(uint32_t *)(a1 + 196);
  if ( v5 > 0 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( *(uint8_t *)(v6 + 48) == 0 )
        goto LABEL_10;
      v23 = (*(int (**)(int, uint32_t, unsigned int, uint32_t, uint32_t))(*(uint32_t *)(a1 + 4) + 32))(
              a1,
              *(uint32_t *)(v24 + 4 * v21 + 72),
              v3 * *(uint32_t *)(v6 + 12),
              *(uint32_t *)(v6 + 12),
              0);
      v3 = *(uint32_t *)(a1 + 136);
      if ( v25 <= v3 )
      {
        v16 = *(uint32_t *)(v6 + 12);
        if ( *(uint32_t *)(v6 + 32) % v16 != 0 )
          v16 = *(uint32_t *)(v6 + 32) % v16;
        v22 = v16;
      }
      else
      {
        v22 = *(uint32_t *)(v6 + 12);
      }
      v19 = *(void (**)(int, int, int, int, int))(*(uint32_t *)(a1 + 412) + 4 * v21 + 4);
      v18 = *(uint32_t *)(a2 + 4 * v21);
      if ( v22 <= 0 )
        break;
      v7 = *(uint32_t *)(v6 + 28);
      v20 = 0;
      v8 = v6;
      do
      {
        v9 = 0;
        if ( v7 != 0 )
        {
          v10 = *(uint32_t *)(v23 + 4 * v20);
          v11 = v8;
          v12 = 0;
          do
          {
            v17 = v12;
            v19(a1, v11, v10, v18, v9);
            v13 = *(uint32_t *)(v11 + 36);
            v12 = v17 + 1;
            v7 = *(uint32_t *)(v11 + 28);
            v10 += 128;
            v9 += v13;
          }
          while ( v7 > v17 + 1 );
          v8 = v11;
        }
        else
        {
          v13 = *(uint32_t *)(v8 + 36);
        }
        ++v20;
        v18 += 4 * v13;
      }
      while ( v20 != v22 );
      v6 = v8;
      ++v21;
      v5 = *(uint32_t *)(a1 + 36);
      v3 = *(uint32_t *)(a1 + 136);
      if ( v21 >= v5 )
        goto LABEL_23;
LABEL_11:
      v6 += 84;
    }
    v5 = *(uint32_t *)(a1 + 36);
LABEL_10:
    if ( ++v21 >= v5 )
      goto LABEL_23;
    goto LABEL_11;
  }
LABEL_23:
  v14 = v3 + 1;
  v15 = v14 < *(uint32_t *)(a1 + 284);
  *(uint32_t *)(a1 + 136) = v14;
  return 4 - v15;
}

// ----------------------------------------------------------------------------
// Function: sub_FBF960  (binary VA: 0xfbf960)
// Original: sub_FBF960
// ----------------------------------------------------------------------------
uint32_t * sub_FBF960(uint32_t *a1)
{
  uint32_t *result;
  bool v2; // cc
  uint32_t *v3;
  int v4;

  result = a1;
  v2 = a1[73] <= 1;
  a1[32] = 0;
  v3 = (uint32_t *)a1[98];
  if ( v2 )
  {
    v4 = a1[74];
    if ( a1[71] == 1 )
      result = *(uint32_t **)(v4 + 72);
    else
      result = *(uint32_t **)(v4 + 12);
    v3[5] = 0;
    v3[7] = (uint32_t)(uintptr_t)(result);
    v3[6] = 0;
  }
  else
  {
    v3[7] = 1;
    v3[5] = 0;
    v3[6] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FBF9E0  (binary VA: 0xfbf9e0)
// Original: sub_FBF9E0
// ----------------------------------------------------------------------------
int sub_FBF9E0(uint32_t *a1, int a2)
{
  unsigned int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  uint32_t *v8;
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
  void (*v22)(uint32_t *, int, int, int, int);
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;

  v26 = a1[98];
  v31 = a1[78] - 1;
  v2 = a1[71];
  v3 = *(uint32_t *)(v26 + 28);
  v29 = *(uint32_t *)(v26 + 24);
  v25 = v2 - 1;
  if ( v29 >= v3 )
  {
LABEL_13:
    v6 = a1[32];
    ++a1[34];
    v7 = v6 + 1;
    a1[32] = v7;
    if ( v7 >= v2 )
    {
      (*(void (**)(uint32_t *))(a1[100] + 12))(a1);
      return 4;
    }
    else
    {
      v8 = (uint32_t *)a1[98];
      if ( (int)a1[73] <= 1 )
      {
        if ( v7 < v2 - 1 )
          v17 = *(uint32_t *)(a1[74] + 12);
        else
          v17 = *(uint32_t *)(a1[74] + 72);
        v8[7] = v17;
      }
      else
      {
        v8[7] = 1;
      }
      v8[5] = 0;
      v8[6] = 0;
      return 3;
    }
  }
  else
  {
    v30 = *(uint32_t *)(v26 + 20);
    if ( v31 < v30 )
      goto LABEL_11;
    v32 = v26 + 32;
    while ( 1 )
    {
      jzero_far(*(void **)(v26 + 32), a1[80] << 7);
      if ( (*(uint8_t (**)(uint32_t *, int))(a1[102] + 4))(a1, v32) == 0 )
        break;
      v28 = 0;
      v24 = 0;
      v4 = a1[73];
      if ( v4 > 0 )
      {
        do
        {
          v5 = a1[v28 + 74];
          if ( *(uint8_t *)(v5 + 48) != 0 )
          {
            v10 = *(uint32_t *)(v5 + 4);
            v22 = *(void (**)(uint32_t *, int, int, int, int))(a1[103] + 4 * v10 + 4);
            if ( v31 <= v30 )
              v21 = *(uint32_t *)(v5 + 68);
            else
              v21 = *(uint32_t *)(v5 + 52);
            v11 = *(uint32_t *)(a2 + 4 * v10);
            v27 = *(uint32_t *)(v5 + 64) * v30;
            v12 = *(uint32_t *)(v5 + 56);
            v13 = *(uint32_t *)(v5 + 36);
            if ( v12 > 0 )
            {
              v23 = 0;
              v20 = v11 + 4 * v13 * v29;
              do
              {
                if ( v25 > a1[32] || *(uint32_t *)(v5 + 72) > v29 + v23 )
                {
                  v14 = v26 + 4 * v24;
                  if ( v21 > 0 )
                  {
                    v15 = v27;
                    v16 = 0;
                    do
                    {
                      v19 = v14;
                      v18 = *(uint32_t *)(v14 + 4 * v16++ + 32);
                      v22(a1, v5, v18, v20, v15);
                      v13 = *(uint32_t *)(v5 + 36);
                      v14 = v19;
                      v15 += v13;
                    }
                    while ( v16 != v21 );
                    v12 = *(uint32_t *)(v5 + 56);
                  }
                }
                ++v23;
                v24 += *(uint32_t *)(v5 + 52);
                v20 += 4 * v13;
              }
              while ( v23 < v12 );
              v4 = a1[73];
            }
          }
          else
          {
            v24 += *(uint32_t *)(v5 + 60);
          }
          ++v28;
        }
        while ( v28 < v4 );
      }
      if ( v31 < ++v30 )
      {
        v3 = *(uint32_t *)(v26 + 28);
LABEL_11:
        ++v29;
        v30 = 0;
        *(uint32_t *)(v26 + 20) = 0;
        v32 = v26 + 32;
        if ( v29 >= v3 )
        {
          v2 = a1[71];
          goto LABEL_13;
        }
      }
    }
    *(uint32_t *)(v26 + 24) = v29;
    *(uint32_t *)(v26 + 20) = v30;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_FC0010  (binary VA: 0xfc0010)
// Original: sub_FC0010
// ----------------------------------------------------------------------------
int sub_FC0010(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5)
{
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int result;
  bool v10;
  uint8_t *v11;
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

  v5 = (uint32_t *)a1[105];
  v15 = a1[23];
  v6 = a1[72];
  v7 = v5[3];
  v8 = v5[4];
  v19 = v5[2];
  v22 = v5[5];
  result = a4;
  v10 = a5 - 1 < 0;
  v24 = a5 - 1;
  v20 = v7;
  v21 = v8;
  v23 = 4 * a3;
  if ( !v10 )
  {
    do
    {
      v16 = *(uint32_t *)(*a2 + v23);
      v17 = *(uint32_t *)(a2[1] + v23);
      v11 = *(uint8_t **)(a4 - 4 * a3 + v23);
      v18 = *(uint32_t *)(a2[2] + v23);
      result = v15;
      if ( v15 != 0 )
      {
        result = 0;
        do
        {
          v14 = *(uint8_t *)(v17 + result);
          v13 = *(uint8_t *)(v18 + result);
          v12 = *(uint8_t *)(v16 + result++);
          *v11 = *(uint8_t *)(*(uint32_t *)(v19 + 4 * v13) + v6 + v12);
          v11[1] = *(uint8_t *)(v6 + v12 + ((*(uint32_t *)(v21 + 4 * v13) + *(uint32_t *)(v22 + 4 * v14)) >> 16));
          v11[2] = *(uint8_t *)(*(uint32_t *)(v20 + 4 * v14) + v6 + v12);
          v11 += 3;
        }
        while ( result != v15 );
      }
      v23 += 4;
      --v24;
    }
    while ( v24 >= 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FC0150  (binary VA: 0xfc0150)
// Original: sub_FC0150
// ----------------------------------------------------------------------------
char * sub_FC0150(int a1, int a2, int a3, char *a4, int a5)
{
  char *result;
  int v6;
  int v7;
  uint8_t *v8;
  bool v9;
  char v10;
  int v11;
  int v12;
  int v13;
  int v14;

  result = (char *)(a5 - 1);
  v14 = a5 - 1;
  v6 = *(uint32_t *)(a1 + 36);
  v13 = *(uint32_t *)(a1 + 92);
  if ( a5 - 1 >= 0 )
  {
    result = a4;
    v12 = 4 * a3;
    do
    {
      v7 = 0;
      if ( v6 > 0 )
      {
        do
        {
          result = *(char **)(*(uint32_t *)(a2 + 4 * v7) + v12);
          if ( v13 != 0 )
          {
            v8 = (uint8_t *)(v7 + *(uint32_t *)&a4[v12 + -4 * a3]);
            v11 = v13;
            do
            {
              v9 = v11-- == 1;
              v10 = *result++;
              *v8 = v10;
              v8 += v6;
            }
            while ( !v9 );
          }
          ++v7;
        }
        while ( v7 != v6 );
      }
      --v14;
      v12 += 4;
    }
    while ( v14 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FC0200  (binary VA: 0xfc0200)
// Original: sub_FC0200
// ----------------------------------------------------------------------------
uint8_t * sub_FC0200(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  uint8_t *result;
  int v8;
  int v9;
  char v10;
  int i;

  v5 = 4 * a3;
  v6 = *(uint32_t *)(a1 + 92);
  result = (uint8_t *)(a4 - 4 * a3);
  for ( i = a5 - 1; i >= 0; --i )
  {
    v8 = *(uint32_t *)(*a2 + v5);
    result = *(uint8_t **)(a4 - 4 * a3 + v5);
    if ( v6 != 0 )
    {
      v9 = 0;
      do
      {
        v10 = *(uint8_t *)(v8 + v9++);
        result[2] = v10;
        result[1] = v10;
        *result = v10;
        result += 3;
      }
      while ( v9 != v6 );
    }
    v5 += 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FC0270  (binary VA: 0xfc0270)
// Original: sub_FC0270
// ----------------------------------------------------------------------------
int sub_FC0270(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5)
{
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int result;
  bool v10;
  uint8_t *v11;
  char v12;
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

  v5 = (uint32_t *)a1[105];
  v16 = a1[23];
  v6 = a1[72];
  v7 = v5[3];
  v8 = v5[4];
  v21 = v5[2];
  v23 = v5[5];
  result = a4;
  v10 = a5 - 1 < 0;
  v25 = a5 - 1;
  v22 = v7;
  v24 = 4 * a3;
  if ( !v10 )
  {
    do
    {
      v17 = *(uint32_t *)(*a2 + v24);
      v18 = *(uint32_t *)(a2[1] + v24);
      v19 = *(uint32_t *)(a2[2] + v24);
      v11 = *(uint8_t **)(a4 - 4 * a3 + v24);
      result = *(uint32_t *)(a2[3] + v24);
      v20 = result;
      if ( v16 != 0 )
      {
        for ( result = 0; result != v16; ++result )
        {
          v14 = *(uint8_t *)(v17 + result);
          v15 = *(uint8_t *)(v18 + result);
          v13 = *(uint8_t *)(v19 + result);
          *v11 = *(uint8_t *)(v6 + 255 - (*(uint32_t *)(v21 + 4 * v13) + v14));
          v11[1] = *(uint8_t *)(v6 + 255 - (v14 + ((*(uint32_t *)(v8 + 4 * v13) + *(uint32_t *)(v23 + 4 * v15)) >> 16)));
          v11[2] = *(uint8_t *)(v6 + 255 - (*(uint32_t *)(v22 + 4 * v15) + v14));
          v12 = *(uint8_t *)(v20 + result);
          v11[3] = v12;
          v11 += 4;
        }
      }
      v24 += 4;
      --v25;
    }
    while ( v25 >= 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nullsub_536  (binary VA: 0xfc03e8)
// Original: nullsub_536
// ----------------------------------------------------------------------------
void nullsub_536()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_FC03F0  (binary VA: 0xfc03f0)
// Original: sub_FC03F0
// ----------------------------------------------------------------------------
void * sub_FC03F0(int a1, int *a2, int a3, int a4, int a5)
{
  return jcopy_sample_rows(*a2, a3, a4, 0, a5, *(uint32_t *)(a1 + 92));
}

// ----------------------------------------------------------------------------
// Function: sub_FC0820  (binary VA: 0xfc0820)
// Original: sub_FC0820
// ----------------------------------------------------------------------------
int sub_FC0820(uint32_t *a1)
{
  int result;
  int v2;
  int (*v3)(int, int, int, int, int);
  __m128i *v4;
  __m128i *v5;
  __m128i v6;
  __m128i v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  int v14;
  int v15;
  float *v16;
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm1_4
  float v38; // xmm1_4
  float v39; // xmm1_4
  float v40; // xmm1_4
  float v41; // xmm1_4
  float v42; // xmm1_4
  float v43; // xmm1_4
  float v44; // xmm1_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  float v47; // xmm1_4
  float v48; // xmm1_4
  float v49; // xmm1_4
  float v50; // xmm1_4
  float v51; // xmm1_4
  float v52; // xmm1_4
  float v53; // xmm1_4
  float v54; // xmm1_4
  float v55; // xmm1_4
  float v56; // xmm1_4
  float v57; // xmm1_4
  float v58; // xmm1_4
  float v59; // xmm1_4
  float v60; // xmm1_4
  float v61; // xmm1_4
  float v62; // xmm1_4
  float v63; // xmm1_4
  float v64; // xmm1_4
  float v65; // xmm1_4
  float v66; // xmm1_4
  float v67; // xmm1_4
  float v68; // xmm1_4
  float v69; // xmm1_4
  float v70; // xmm1_4
  float v71; // xmm1_4
  float v72; // xmm1_4
  float v73; // xmm1_4
  float v74; // xmm1_4
  float v75; // xmm1_4
  float v76; // xmm1_4
  float v77; // xmm1_4
  float v78; // xmm1_4
  float v79; // xmm1_4
  float v80; // xmm1_4
  __m128i *v81;
  __m128i v82;
  __m128i v83;
  __m128i v84;
  __m128i v85;
  __m128i v86;
  __m128i v87;
  __m128i v88;
  __m128i v89;
  __m128i v90;
  __m128i v91;
  __m128i v92;
  __m128i v93;
  __m128i v94;
  __m128i v95;
  __m128i v96;
  __m128i v97;
  __m128i v98;
  __m128i v99;
  __m128i v100;
  __m128i v101;
  __m128i v102;
  __m128i v103;
  __m128i v104;
  __m128i v105;
  __m128i v106;
  __m128i v107;
  __m128i v108;
  __m128i v109;
  __m128i v110;
  __m128i v111;
  __m128i v112;
  __m128i v113;
  __m128i v114;
  __m128i v115;
  __m128i v116;
  __m128i v117;
  __m128i v118;
  __m128i v119;
  __m128i v120;
  __m128i v121;
  __m128i v122;
  __m128i v123;
  __m128i v124;
  __m128i v125;
  __m128i v126;
  __m128i v127;
  __m128i v128;
  int j;
  int i;
  int (*v131)(int, int, int, int, int);
  int v132;
  int v133;
  int v134;

  result = a1[103];
  v2 = a1[49];
  if ( (int)a1[9] > 0 )
  {
    v134 = a1[103];
    v131 = nullptr;
    v132 = 0;
    v133 = 0;
    do
    {
      v14 = *(uint32_t *)(v2 + 36);
      switch ( v14 )
      {
        case 1:
          v132 = 0;
          v131 = (int (*)(int, int, int, int, int))(uintptr_t)(jpeg_idct_1x1);
          v3 = (int (*)(int, int, int, int, int))(uintptr_t)(jpeg_idct_1x1);
          break;
        case 2:
          v3 = (int (*)(int, int, int, int, int))(uintptr_t)(jpeg_idct_2x2);
          v132 = 0;
          v131 = (int (*)(int, int, int, int, int))(uintptr_t)(jpeg_idct_2x2);
          break;
        case 4:
          v3 = (int (*)(int, int, int, int, int))(uintptr_t)(jpeg_idct_4x4);
          v132 = 0;
          v131 = (int (*)(int, int, int, int, int))(uintptr_t)(jpeg_idct_4x4);
          break;
        case 8:
          v15 = a1[17];
          if ( v15 == 1 )
          {
            v132 = 1;
            v131 = (int (*)(int, int, int, int, int))(uintptr_t)(jpeg_idct_ifast);
            v3 = (int (*)(int, int, int, int, int))(uintptr_t)(jpeg_idct_ifast);
          }
          else if ( v15 != 0 )
          {
            if ( v15 == 2 )
            {
              v3 = (int (*)(int, int, int, int, int))(uintptr_t)(jpeg_idct_float);
              v132 = 2;
              v131 = (int (*)(int, int, int, int, int))(uintptr_t)(jpeg_idct_float);
            }
            else
            {
              *(uint32_t *)(*a1 + 20) = 48;
              G4_VCALL<void>(a1, 0);
              v3 = v131;
            }
          }
          else
          {
            v132 = 0;
            v131 = (int (*)(int, int, int, int, int))(uintptr_t)(jpeg_idct_islow);
            v3 = (int (*)(int, int, int, int, int))(uintptr_t)(jpeg_idct_islow);
          }
          break;
        default:
          *(uint32_t *)(*a1 + 20) = 7;
          *(uint32_t *)(*a1 + 24) = *(uint32_t *)(v2 + 36);
          G4_VCALL<void>(a1, 0);
          v3 = v131;
          break;
      }
      *(uint32_t *)(v134 + 4) = (uint32_t)(uintptr_t)(v3);
      if ( *(uint8_t *)(v2 + 48) != 0 && *(uint32_t *)(v134 + 44) != v132 )
      {
        v4 = *(__m128i **)(v2 + 76);
        if ( v4 != nullptr )
        {
          *(uint32_t *)(v134 + 44) = v132;
          if ( v132 == 1 )
          {
            v81 = *(__m128i **)(v2 + 80);
            if ( v81 > &v4[8] || v4 > &v81[16] )
            {
              v82 = *v4;
              v83 = _mm_unpacklo_epi16(*v4, g4_m128_from<__m128i>(0LL));
              v84 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDF80));
              v85 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF80), v84);
              v86 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF80), v84);
              *v81 = _mm_srai_epi32(
                       _mm_add_epi32(
                         _mm_unpacklo_epi32(
                           _mm_shuffle_epi32(_mm_mul_epu32(v83, v85), 8),
                           _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v85, 4), _mm_srli_si128(v83, 4)), 8)),
                         G4_BITCAST<__m128i>(xmmword_1C7C830)),
                       0xCu);
              v87 = _mm_unpackhi_epi16(v82, g4_m128_from<__m128i>(0LL));
              v81[1] = _mm_srai_epi32(
                         _mm_add_epi32(
                           _mm_unpacklo_epi32(
                             _mm_shuffle_epi32(_mm_mul_epu32(v87, v86), 8),
                             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v86, 4), _mm_srli_si128(v87, 4)), 8)),
                           G4_BITCAST<__m128i>(xmmword_1C7C830)),
                         0xCu);
              v88 = v4[1];
              v89 = _mm_unpacklo_epi16(v88, g4_m128_from<__m128i>(0LL));
              v90 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDF90));
              v91 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF90), v90);
              v92 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDF90), v90);
              v81[2] = _mm_srai_epi32(
                         _mm_add_epi32(
                           _mm_unpacklo_epi32(
                             _mm_shuffle_epi32(_mm_mul_epu32(v89, v91), 8),
                             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v89, 4), _mm_srli_si128(v91, 4)), 8)),
                           G4_BITCAST<__m128i>(xmmword_1C7C830)),
                         0xCu);
              v93 = _mm_unpackhi_epi16(v88, g4_m128_from<__m128i>(0LL));
              v81[3] = _mm_srai_epi32(
                         _mm_add_epi32(
                           _mm_unpacklo_epi32(
                             _mm_shuffle_epi32(_mm_mul_epu32(v93, v92), 8),
                             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v92, 4), _mm_srli_si128(v93, 4)), 8)),
                           G4_BITCAST<__m128i>(xmmword_1C7C830)),
                         0xCu);
              v94 = v4[2];
              v95 = _mm_unpacklo_epi16(v94, g4_m128_from<__m128i>(0LL));
              v96 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDFA0));
              v97 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDFA0), v96);
              v98 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDFA0), v96);
              v81[4] = _mm_srai_epi32(
                         _mm_add_epi32(
                           _mm_unpacklo_epi32(
                             _mm_shuffle_epi32(_mm_mul_epu32(v95, v97), 8),
                             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v95, 4), _mm_srli_si128(v97, 4)), 8)),
                           G4_BITCAST<__m128i>(xmmword_1C7C830)),
                         0xCu);
              v99 = _mm_unpackhi_epi16(v94, g4_m128_from<__m128i>(0LL));
              v81[5] = _mm_srai_epi32(
                         _mm_add_epi32(
                           _mm_unpacklo_epi32(
                             _mm_shuffle_epi32(_mm_mul_epu32(v99, v98), 8),
                             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v98, 4), _mm_srli_si128(v99, 4)), 8)),
                           G4_BITCAST<__m128i>(xmmword_1C7C830)),
                         0xCu);
              v100 = v4[3];
              v101 = _mm_unpacklo_epi16(v100, g4_m128_from<__m128i>(0LL));
              v102 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDFB0));
              v103 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDFB0), v102);
              v104 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDFB0), v102);
              v81[6] = _mm_srai_epi32(
                         _mm_add_epi32(
                           _mm_unpacklo_epi32(
                             _mm_shuffle_epi32(_mm_mul_epu32(v101, v103), 8),
                             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v101, 4), _mm_srli_si128(v103, 4)), 8)),
                           G4_BITCAST<__m128i>(xmmword_1C7C830)),
                         0xCu);
              v105 = _mm_unpackhi_epi16(v100, g4_m128_from<__m128i>(0LL));
              v81[7] = _mm_srai_epi32(
                         _mm_add_epi32(
                           _mm_unpacklo_epi32(
                             _mm_shuffle_epi32(_mm_mul_epu32(v105, v104), 8),
                             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v104, 4), _mm_srli_si128(v105, 4)), 8)),
                           G4_BITCAST<__m128i>(xmmword_1C7C830)),
                         0xCu);
              v106 = v4[4];
              v107 = _mm_unpacklo_epi16(v106, g4_m128_from<__m128i>(0LL));
              v108 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDFC0));
              v109 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDFC0), v108);
              v110 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDFC0), v108);
              v81[8] = _mm_srai_epi32(
                         _mm_add_epi32(
                           _mm_unpacklo_epi32(
                             _mm_shuffle_epi32(_mm_mul_epu32(v107, v109), 8),
                             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v107, 4), _mm_srli_si128(v109, 4)), 8)),
                           G4_BITCAST<__m128i>(xmmword_1C7C830)),
                         0xCu);
              v111 = _mm_unpackhi_epi16(v106, g4_m128_from<__m128i>(0LL));
              v81[9] = _mm_srai_epi32(
                         _mm_add_epi32(
                           _mm_unpacklo_epi32(
                             _mm_shuffle_epi32(_mm_mul_epu32(v111, v110), 8),
                             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v110, 4), _mm_srli_si128(v111, 4)), 8)),
                           G4_BITCAST<__m128i>(xmmword_1C7C830)),
                         0xCu);
              v112 = v4[5];
              v113 = _mm_unpacklo_epi16(v112, g4_m128_from<__m128i>(0LL));
              v114 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDFD0));
              v115 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDFD0), v114);
              v116 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDFD0), v114);
              v81[10] = _mm_srai_epi32(
                          _mm_add_epi32(
                            _mm_unpacklo_epi32(
                              _mm_shuffle_epi32(_mm_mul_epu32(v113, v115), 8),
                              _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v113, 4), _mm_srli_si128(v115, 4)), 8)),
                            G4_BITCAST<__m128i>(xmmword_1C7C830)),
                          0xCu);
              v117 = _mm_unpackhi_epi16(v112, g4_m128_from<__m128i>(0LL));
              v81[11] = _mm_srai_epi32(
                          _mm_add_epi32(
                            _mm_unpacklo_epi32(
                              _mm_shuffle_epi32(_mm_mul_epu32(v117, v116), 8),
                              _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v116, 4), _mm_srli_si128(v117, 4)), 8)),
                            G4_BITCAST<__m128i>(xmmword_1C7C830)),
                          0xCu);
              v118 = v4[6];
              v119 = _mm_unpacklo_epi16(v118, g4_m128_from<__m128i>(0LL));
              v120 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDFE0));
              v121 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDFE0), v120);
              v122 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDFE0), v120);
              v81[12] = _mm_srai_epi32(
                          _mm_add_epi32(
                            _mm_unpacklo_epi32(
                              _mm_shuffle_epi32(_mm_mul_epu32(v119, v121), 8),
                              _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v119, 4), _mm_srli_si128(v121, 4)), 8)),
                            G4_BITCAST<__m128i>(xmmword_1C7C830)),
                          0xCu);
              v123 = _mm_unpackhi_epi16(v118, g4_m128_from<__m128i>(0LL));
              v81[13] = _mm_srai_epi32(
                          _mm_add_epi32(
                            _mm_unpacklo_epi32(
                              _mm_shuffle_epi32(_mm_mul_epu32(v123, v122), 8),
                              _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v122, 4), _mm_srli_si128(v123, 4)), 8)),
                            G4_BITCAST<__m128i>(xmmword_1C7C830)),
                          0xCu);
              v124 = _mm_unpacklo_epi16(v4[7], g4_m128_from<__m128i>(0LL));
              v125 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), G4_BITCAST<__m128i>(xmmword_1CBDFF0));
              v126 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1CBDFF0), v125);
              v127 = _mm_unpackhi_epi16(v4[7], g4_m128_from<__m128i>(0LL));
              v128 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1CBDFF0), v125);
              v81[14] = _mm_srai_epi32(
                          _mm_add_epi32(
                            _mm_unpacklo_epi32(
                              _mm_shuffle_epi32(_mm_mul_epu32(v124, v126), 8),
                              _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v124, 4), _mm_srli_si128(v126, 4)), 8)),
                            G4_BITCAST<__m128i>(xmmword_1C7C830)),
                          0xCu);
              v81[15] = _mm_srai_epi32(
                          _mm_add_epi32(
                            _mm_unpacklo_epi32(
                              _mm_shuffle_epi32(_mm_mul_epu32(v127, v128), 8),
                              _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v128, 4), _mm_srli_si128(v127, 4)), 8)),
                            G4_BITCAST<__m128i>(xmmword_1C7C830)),
                          0xCu);
            }
            else
            {
              for ( i = 0; i != 64; ++i )
g4_m128_lane<int32_t>(*(v81), i) = (*(int16_t *)((char *)&xmmword_1CBDF80 + i * 2) *g4_m128_lane<uint16_t>(*(v4), i) + 2048) >> 12;
            }
          }
          else if ( v132 == 2 )
          {
            v16 = *(float **)(v2 + 80);
            v17 = (float)g4_m128_lane<uint16_t>(*(v4), 0);
            *v16 = v17;
            v18 = (double)g4_m128_lane<uint16_t>(*(v4), 1) * 1.387039845;
            v16[1] = v18;
            v19 = (double)g4_m128_lane<uint16_t>(*(v4), 2) * 1.306562965;
            v16[2] = v19;
            v20 = (double)g4_m128_lane<uint16_t>(*(v4), 3) * 1.175875602;
            v16[3] = v20;
            v21 = (float)g4_m128_lane<uint16_t>(*(v4), 4);
            v16[4] = v21;
            v22 = (double)g4_m128_lane<uint16_t>(*(v4), 5) * 0.785694958;
            v16[5] = v22;
            v23 = (double)g4_m128_lane<uint16_t>(*(v4), 6) * 0.5411961;
            v16[6] = v23;
            v24 = (double)g4_m128_lane<uint16_t>(*(v4), 7) * 0.275899379;
            v16[7] = v24;
            v25 = (double)g4_m128_lane<uint16_t>(v4[1], 0) * 1.387039845;
            v16[8] = v25;
            v26 = (double)g4_m128_lane<uint16_t>(v4[1], 1) * 1.9238795316176243;
            v16[9] = v26;
            v27 = (double)g4_m128_lane<uint16_t>(v4[1], 2) * 1.8122548924563404;
            v16[10] = v27;
            v28 = (double)g4_m128_lane<uint16_t>(v4[1], 3) * 1.6309863127373618;
            v16[11] = v28;
            v29 = (double)g4_m128_lane<uint16_t>(v4[1], 4) * 1.387039845;
            v16[12] = v29;
            v30 = (double)g4_m128_lane<uint16_t>(v4[1], 5) * 1.0897902127616015;
            v16[13] = v30;
            v31 = (double)g4_m128_lane<uint16_t>(v4[1], 6) * 0.7506605546586045;
            v16[14] = v31;
            v32 = (double)g4_m128_lane<uint16_t>(v4[1], 7) * 0.3826834318837563;
            v16[15] = v32;
            v33 = (double)g4_m128_lane<uint16_t>(v4[2], 0) * 1.306562965;
            v16[16] = v33;
            v34 = (double)g4_m128_lane<uint16_t>(v4[2], 1) * 1.8122548924563404;
            v16[17] = v34;
            v35 = (double)g4_m128_lane<uint16_t>(v4[2], 2) * 1.707106781509591;
            v16[18] = v35;
            v36 = (double)g4_m128_lane<uint16_t>(v4[2], 3) * 1.53635551302028;
            v16[19] = v36;
            v37 = (double)g4_m128_lane<uint16_t>(v4[2], 4) * 1.306562965;
            v16[20] = v37;
            v38 = (double)g4_m128_lane<uint16_t>(v4[2], 5) * 1.0265599339100304;
            v16[21] = v38;
            v39 = (double)g4_m128_lane<uint16_t>(v4[2], 6) * 0.7071067810624364;
            v16[22] = v39;
            v40 = (double)g4_m128_lane<uint16_t>(v4[2], 7) * 0.3604799106678987;
            v16[23] = v40;
            v41 = (double)g4_m128_lane<uint16_t>(v4[3], 0) * 1.175875602;
            v16[24] = v41;
            v42 = (double)g4_m128_lane<uint16_t>(v4[3], 1) * 1.6309863127373618;
            v16[25] = v42;
            v43 = (double)g4_m128_lane<uint16_t>(v4[3], 2) * 1.53635551302028;
            v16[26] = v43;
            v44 = (double)g4_m128_lane<uint16_t>(v4[3], 3) * 1.3826834313788625;
            v16[27] = v44;
            v45 = (double)g4_m128_lane<uint16_t>(v4[3], 4) * 1.175875602;
            v16[28] = v45;
            v46 = (double)g4_m128_lane<uint16_t>(v4[3], 5) * 0.9238795317266147;
            v16[29] = v46;
            v47 = (double)g4_m128_lane<uint16_t>(v4[3], 6) * 0.6363792898875522;
            v16[30] = v47;
            v48 = (double)g4_m128_lane<uint16_t>(v4[3], 7) * 0.3244233483730512;
            v16[31] = v48;
            v49 = (float)g4_m128_lane<uint16_t>(v4[4], 0);
            v16[32] = v49;
            v50 = (double)g4_m128_lane<uint16_t>(v4[4], 1) * 1.387039845;
            v16[33] = v50;
            v51 = (double)g4_m128_lane<uint16_t>(v4[4], 2) * 1.306562965;
            v16[34] = v51;
            v52 = (double)g4_m128_lane<uint16_t>(v4[4], 3) * 1.175875602;
            v16[35] = v52;
            v53 = (float)g4_m128_lane<uint16_t>(v4[4], 4);
            v16[36] = v53;
            v54 = (double)g4_m128_lane<uint16_t>(v4[4], 5) * 0.785694958;
            v16[37] = v54;
            v55 = (double)g4_m128_lane<uint16_t>(v4[4], 6) * 0.5411961;
            v16[38] = v55;
            v56 = (double)g4_m128_lane<uint16_t>(v4[4], 7) * 0.275899379;
            v16[39] = v56;
            v57 = (double)g4_m128_lane<uint16_t>(v4[5], 0) * 0.785694958;
            v16[40] = v57;
            v58 = (double)g4_m128_lane<uint16_t>(v4[5], 1) * 1.0897902127616015;
            v16[41] = v58;
            v59 = (double)g4_m128_lane<uint16_t>(v4[5], 2) * 1.0265599339100304;
            v16[42] = v59;
            v60 = (double)g4_m128_lane<uint16_t>(v4[5], 3) * 0.9238795317266147;
            v16[43] = v60;
            v61 = (double)g4_m128_lane<uint16_t>(v4[5], 4) * 0.785694958;
            v16[44] = v61;
            v62 = (double)g4_m128_lane<uint16_t>(v4[5], 5) * 0.6173165670266217;
            v16[45] = v62;
            v63 = (double)g4_m128_lane<uint16_t>(v4[5], 6) * 0.4252150470592638;
            v16[46] = v63;
            v64 = (double)g4_m128_lane<uint16_t>(v4[5], 7) * 0.2167727509956311;
            v16[47] = v64;
            v65 = (double)g4_m128_lane<uint16_t>(v4[6], 0) * 0.5411961;
            v16[48] = v65;
            v66 = (double)g4_m128_lane<uint16_t>(v4[6], 1) * 0.7506605546586045;
            v16[49] = v66;
            v67 = (double)g4_m128_lane<uint16_t>(v4[6], 2) * 0.7071067810624364;
            v16[50] = v67;
            v68 = (double)g4_m128_lane<uint16_t>(v4[6], 3) * 0.6363792898875522;
            v16[51] = v68;
            v69 = (double)g4_m128_lane<uint16_t>(v4[6], 4) * 0.5411961;
            v16[52] = v69;
            v70 = (double)g4_m128_lane<uint16_t>(v4[6], 5) * 0.4252150470592638;
            v16[53] = v70;
            v71 = (double)g4_m128_lane<uint16_t>(v4[6], 6) * 0.29289321865520995;
            v16[54] = v71;
            v72 = (double)g4_m128_lane<uint16_t>(v4[6], 7) * 0.1493156679072219;
            v16[55] = v72;
            v73 = (double)g4_m128_lane<uint16_t>(v4[7], 0) * 0.275899379;
            v16[56] = v73;
            v74 = (double)g4_m128_lane<uint16_t>(v4[7], 1) * 0.3826834318837563;
            v16[57] = v74;
            v75 = (double)g4_m128_lane<uint16_t>(v4[7], 2) * 0.3604799106678987;
            v16[58] = v75;
            v76 = (double)g4_m128_lane<uint16_t>(v4[7], 3) * 0.3244233483730512;
            v16[59] = v76;
            v77 = (double)g4_m128_lane<uint16_t>(v4[7], 4) * 0.275899379;
            v16[60] = v77;
            v78 = (double)g4_m128_lane<uint16_t>(v4[7], 5) * 0.2167727509956311;
            v16[61] = v78;
            v79 = (double)g4_m128_lane<uint16_t>(v4[7], 6) * 0.1493156679072219;
            v16[62] = v79;
            v80 = (double)g4_m128_lane<uint16_t>(v4[7], 7) * 0.07612046733258564;
            v16[63] = v80;
          }
          else
          {
            v5 = *(__m128i **)(v2 + 80);
            if ( v4 > &v5[16] || v5 > &v4[8] )
            {
              v6 = _mm_unpackhi_epi16(*v4, g4_m128_from<__m128i>(0LL));
              *v5 = _mm_unpacklo_epi16(*v4, g4_m128_from<__m128i>(0LL));
              v5[1] = v6;
              v7 = v4[1];
              v5[2] = _mm_unpacklo_epi16(v7, g4_m128_from<__m128i>(0LL));
              v5[3] = _mm_unpackhi_epi16(v7, g4_m128_from<__m128i>(0LL));
              v8 = v4[2];
              v5[4] = _mm_unpacklo_epi16(v8, g4_m128_from<__m128i>(0LL));
              v5[5] = _mm_unpackhi_epi16(v8, g4_m128_from<__m128i>(0LL));
              v9 = v4[3];
              v5[6] = _mm_unpacklo_epi16(v9, g4_m128_from<__m128i>(0LL));
              v5[7] = _mm_unpackhi_epi16(v9, g4_m128_from<__m128i>(0LL));
              v10 = v4[4];
              v5[8] = _mm_unpacklo_epi16(v10, g4_m128_from<__m128i>(0LL));
              v5[9] = _mm_unpackhi_epi16(v10, g4_m128_from<__m128i>(0LL));
              v11 = v4[5];
              v5[10] = _mm_unpacklo_epi16(v11, g4_m128_from<__m128i>(0LL));
              v5[11] = _mm_unpackhi_epi16(v11, g4_m128_from<__m128i>(0LL));
              v12 = v4[6];
              v5[12] = _mm_unpacklo_epi16(v12, g4_m128_from<__m128i>(0LL));
              v5[13] = _mm_unpackhi_epi16(v12, g4_m128_from<__m128i>(0LL));
              v13 = v4[7];
              v5[14] = _mm_unpacklo_epi16(v13, g4_m128_from<__m128i>(0LL));
              v5[15] = _mm_unpackhi_epi16(v13, g4_m128_from<__m128i>(0LL));
            }
            else
            {
              for ( j = 0; j != 64; ++j )
g4_m128_lane<int32_t>(*(v5), j) =g4_m128_lane<uint16_t>(*(v4), j);
            }
          }
        }
      }
      ++v133;
      v2 += 84;
      v134 += 4;
      result = v133;
    }
    while ( a1[9] > v133 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FC1F00  (binary VA: 0xfc1f00)
// Original: sub_FC1F00
// ----------------------------------------------------------------------------
int sub_FC1F00(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  unsigned int v8;
  int v9;

  v1 = a1[102];
  if ( a1[91] != 0 || a1[92] != 63 || a1[93] != 0 || a1[94] != 0 )
  {
    *(uint32_t *)(*a1 + 20) = 122;
    G4_VCALL<void>(a1, 4, -1);
  }
  if ( (int)a1[73] > 0 )
  {
    v2 = 0;
    do
    {
      v3 = a1[v2 + 74];
      v8 = *(uint32_t *)(v3 + 24);
      jpeg_make_d_derived_tbl(
        (int (***)(uint32_t, uint32_t, uint32_t))a1,
        1,
        *(uint32_t *)(v3 + 20),
        (int *)(v1 + 4 * *(uint32_t *)(v3 + 20) + 40));
      jpeg_make_d_derived_tbl((int (***)(uint32_t, uint32_t, uint32_t))a1, 0, v8, (int *)(v1 + 4 * v8 + 56));
      *(uint32_t *)(v1 + 4 * v2++ + 20) = 0;
    }
    while ( a1[73] > v2 );
  }
  if ( (int)a1[80] > 0 )
  {
    v4 = v1;
    v9 = v1;
    v5 = 0;
    do
    {
      v6 = a1[a1[v5 + 81] + 74];
      *(uint32_t *)(v4 + 72) = *(uint32_t *)(v1 + 4 * *(uint32_t *)(v6 + 20) + 40);
      *(uint32_t *)(v4 + 112) = *(uint32_t *)(v1 + 4 * *(uint32_t *)(v6 + 24) + 56);
      if ( *(uint8_t *)(v6 + 48) != 0 )
      {
        *(uint8_t *)(v9 + 152) = 1;
        *(uint8_t *)(v9 + 162) = *(uint32_t *)(v6 + 36) > 1;
      }
      else
      {
        *(uint8_t *)(v9 + 162) = 0;
        *(uint8_t *)(v9 + 152) = 0;
      }
      ++v5;
      v4 += 4;
      ++v9;
    }
    while ( a1[80] > v5 );
  }
  *(uint32_t *)(v1 + 16) = 0;
  *(uint32_t *)(v1 + 12) = 0;
  *(uint8_t *)(v1 + 8) = 0;
  result = a1[63];
  *(uint32_t *)(v1 + 36) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FC2330  (binary VA: 0xfc2330)
// Original: sub_FC2330
// ----------------------------------------------------------------------------
int sub_FC2330(uint32_t *a1, int a2)
{
  int v2;
  char v3;
  int v4;
  uint8_t *v5;
  int v6;
  int v7;
  uint32_t *v8;
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
  int result;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  char v31;
  char v32;
  int v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint16_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint8_t *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v34)) > _g4_s0 ? (8u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v35)) > _g4_s1 ? (12u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v36)) > _g4_s2 ? (16u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v37)) > _g4_s3 ? (20u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v38)) > _g4_s4 ? (24u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v39)) > _g4_s5 ? (28u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v40)) > _g4_s6 ? (32u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v41)) > _g4_s7 ? (36u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v42)) > _g4_s8 ? (36u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v43)) > _g4_s9 ? (40u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v44)) > _g4_s10 ? (44u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v45)) > _g4_s11 ? (44u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v46)) > _g4_s12 ? (44u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v47)) > _g4_s13 ? (44u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v48)) > _g4_s14 ? (48u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v49)) > _g4_s15 ? (52u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v50)) > _g4_s16 ? (56u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v51)) > _g4_s17 ? (60u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v52)) > _g4_s18 ? (64u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v53)) > _g4_s19 ? (68u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v54)) > _g4_s20 ? (72u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v55)) > _g4_s21 ? (76u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v56)) > _g4_s22 ? (80u + sizeof(_g4_t_v56)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 72u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 76u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);

  v2 = a1[102];
  v39 = v2;
  if ( a1[63] == 0 || *(uint32_t *)(v2 + 36) != 0 )
  {
    v3 = *(uint8_t *)(v2 + 8);
    goto LABEL_4;
  }
  *(uint32_t *)(a1[101] + 20) += *(uint32_t *)(v2 + 16) / 8;
  *(uint32_t *)(v2 + 16) = 0;
  v32 = (*(int (**)(uint32_t *))(a1[101] + 8))(a1);
  result = 0;
  if ( v32 != 0 )
  {
    if ( (int)a1[73] > 0 )
    {
      v33 = 0;
      do
        *(uint32_t *)(v39 + 4 * v33++ + 20) = 0;
      while ( v33 < a1[73] );
    }
    *(uint32_t *)(v39 + 36) = a1[63];
    if ( a1[95] == 0 )
    {
      *(uint8_t *)(v39 + 8) = 0;
      goto LABEL_5;
    }
    v3 = *(uint8_t *)(v39 + 8);
LABEL_4:
    if ( v3 != 0 )
    {
LABEL_31:
      result = 1;
      --*(uint32_t *)(v39 + 36);
      return result;
    }
LABEL_5:
    v56 = a1;
    v4 = a1[6];
    v5 = *(uint8_t **)v4;
    v53 = *(uint32_t *)(v4 + 4);
    v52 = v5;
    v6 = *(uint32_t *)(v39 + 12);
    v7 = *(uint32_t *)(v39 + 16);
    v48 = *(uint32_t *)(v39 + 20);
    v49 = *(uint32_t *)(v39 + 24);
    v50 = *(uint32_t *)(v39 + 28);
    v51 = *(uint32_t *)(v39 + 32);
    v8 = a1;
    if ( (int)a1[80] > 0 )
    {
      v37 = 0;
      v36 = v39;
      v35 = v39;
      while ( 1 )
      {
        v38 = *(uint16_t **)(a2 + 4 * v37);
        v9 = *(uint32_t *)(v36 + 72);
        v43 = *(uint32_t *)(v36 + 112);
        if ( v7 <= 7 )
        {
          if ( (uint8_t)jpeg_fill_bit_buffer(&v52, v6, v7, 0) == 0 )
            return 0;
          v7 = v55;
          v6 = v54;
          v41 = 1;
          if ( v55 <= 7 )
            goto LABEL_56;
        }
        v41 = 9;
        v40 = (uint8_t)(v6 >> (v7 - 8));
        v10 = *(uint32_t *)(v9 + 4 * v40 + 144);
        if ( v10 != 0 )
        {
          v7 -= v10;
          v11 = *(uint8_t *)(v9 + v40 + 1168);
        }
        else
        {
LABEL_56:
          v11 = jpeg_huff_decode((int)(uintptr_t)(&v52), v6, v7, v9, v41);
          if ( v11 < 0 )
            return 0;
          v6 = v54;
          v7 = v55;
        }
        if ( v11 != 0 )
        {
          if ( v7 < v11 )
          {
            if ( (uint8_t)jpeg_fill_bit_buffer(&v52, v6, v7, v11) == 0 )
              return 0;
            v6 = v54;
            v7 = v55;
          }
          v7 -= v11;
          v12 = (1 << v11) - 1;
          v13 = v12 & (v6 >> v7);
          if ( v13 >= dword_1CBE000[v11] )
            v11 = v12 & (v6 >> v7);
          else
            v11 = v13 + dword_1CBE040[v11];
        }
        if ( *(uint8_t *)(v35 + 152) != 0 )
        {
          v14 = a1[v37 + 81];
          v15 = *(&v48 + v14) + v11;
          *(&v48 + v14) = v15;
          *v38 = v15;
        }
        v44 = 1;
        if ( *(uint8_t *)(v35 + 162) == 0 )
        {
          while ( 1 )
          {
            if ( v7 <= 7 )
            {
              if ( (uint8_t)jpeg_fill_bit_buffer(&v52, v6, v7, 0) == 0 )
                return 0;
              v7 = v55;
              v6 = v54;
              v27 = 1;
              if ( v55 <= 7 )
                goto LABEL_48;
            }
            v25 = (uint8_t)(v6 >> (v7 - 8));
            v26 = *(uint32_t *)(v43 + 4 * v25 + 144);
            v27 = 9;
            if ( v26 != 0 )
            {
              v7 -= v26;
              v28 = *(uint8_t *)(v43 + v25 + 1168);
            }
            else
            {
LABEL_48:
              v28 = jpeg_huff_decode((int)(uintptr_t)(&v52), v6, v7, v43, v27);
              if ( v28 < 0 )
                return 0;
              v6 = v54;
              v7 = v55;
            }
            v29 = v28 >> 4;
            v30 = v28 & 0xF;
            if ( v30 != 0 )
            {
              if ( v7 < v30 )
              {
                v34 = v29;
                v31 = jpeg_fill_bit_buffer(&v52, v6, v7, v30);
                v29 = v34;
                if ( v31 == 0 )
                  return 0;
                v6 = v54;
                v7 = v55;
              }
              v24 = v44 + v29;
              v7 -= v30;
            }
            else
            {
              if ( v29 != 15 )
                goto LABEL_28;
              v24 = v44 + 15;
            }
            v44 = v24 + 1;
            if ( v24 + 1 > 63 )
              goto LABEL_28;
          }
        }
        v42 = 1;
        do
        {
          while ( 1 )
          {
            if ( v7 <= 7 )
            {
              if ( (uint8_t)jpeg_fill_bit_buffer(&v52, v6, v7, 0) == 0 )
                return 0;
              v7 = v55;
              v6 = v54;
              v46 = 1;
              if ( v55 <= 7 )
                goto LABEL_44;
            }
            v46 = 9;
            v17 = (uint8_t)(v6 >> (v7 - 8));
            v18 = *(uint32_t *)(v43 + 4 * v17 + 144);
            if ( v18 != 0 )
            {
              v7 -= v18;
              v19 = *(uint8_t *)(v43 + v17 + 1168);
            }
            else
            {
LABEL_44:
              v19 = jpeg_huff_decode((int)(uintptr_t)(&v52), v6, v7, v43, v46);
              if ( v19 < 0 )
                return 0;
              v6 = v54;
              v7 = v55;
            }
            v20 = v19 >> 4;
            v21 = v19 & 0xF;
            v47 = v21;
            if ( v21 != 0 )
              break;
            if ( v20 == 15 )
            {
              v42 += 16;
              if ( v42 <= 63 )
                continue;
            }
            goto LABEL_28;
          }
          if ( v7 < v21 )
          {
            if ( (uint8_t)jpeg_fill_bit_buffer(&v52, v6, v7, v21) == 0 )
              return 0;
            v6 = v54;
            v7 = v55;
          }
          v7 -= v47;
          v16 = ((1 << v47) - 1) & (v6 >> v7);
          if ( v16 < dword_1CBE000[v47] )
            v16 += dword_1CBE040[v47];
          v45 = v20 + v42;
          v38[(&jpeg_natural_order)[v20 + v42]] = v16;
          v42 += v20 + 1;
        }
        while ( v45 + 1 <= 63 );
LABEL_28:
        ++v37;
        v36 += 4;
        ++v35;
        if ( a1[80] <= v37 )
        {
          v4 = a1[6];
          v5 = v52;
          v8 = a1;
          break;
        }
      }
    }
    *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v5);
    *(uint32_t *)(v8[6] + 4) = v53;
    *(uint32_t *)(v39 + 20) = v48;
    *(uint32_t *)(v39 + 24) = v49;
    *(uint32_t *)(v39 + 28) = v50;
    v22 = v51;
    *(uint32_t *)(v39 + 12) = v6;
    *(uint32_t *)(v39 + 16) = v7;
    *(uint32_t *)(v39 + 32) = v22;
    goto LABEL_31;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FC29F0  (binary VA: 0xfc29f0)
// Original: sub_FC29F0
// ----------------------------------------------------------------------------
int sub_FC29F0(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  unsigned int v6;

  v4 = a1[97];
  if ( *(uint8_t *)(v4 + 48) == 0 )
  {
    result = (*(int (**)(uint32_t *, int))(a1[98] + 12))(a1, v4 + 8);
    if ( result == 0 )
      return result;
    *(uint8_t *)(v4 + 48) = 1;
  }
  v6 = a1[70];
  (*(void (**)(uint32_t *, int, int, unsigned int, int, int, int))(a1[99] + 4))(
    a1,
    v4 + 8,
    v4 + 52,
    v6,
    a2,
    a3,
    a4);
  result = v6;
  if ( v6 <= *(uint32_t *)(v4 + 52) )
  {
    *(uint8_t *)(v4 + 48) = 0;
    *(uint32_t *)(v4 + 52) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FC2A90  (binary VA: 0xfc2a90)
// Original: sub_FC2A90
// ----------------------------------------------------------------------------
unsigned int sub_FC2A90(uint32_t *a1, int a2, unsigned int *a3, unsigned int a4)
{
  int v4;
  unsigned int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
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

  v4 = a1[97];
  v25 = v4;
  if ( *(uint8_t *)(v4 + 48) == 0 )
  {
    result = (*(int (**)(uint32_t *, uint32_t))(a1[98] + 12))(a1, *(uint32_t *)(v4 + 4 * *(uint32_t *)(v4 + 64) + 56));
    if ( result == 0 )
      return result;
    v4 = v25;
    ++*(uint32_t *)(v25 + 76);
    *(uint8_t *)(v25 + 48) = 1;
    result = *(uint32_t *)(v25 + 68);
    if ( result != 1 )
      goto LABEL_3;
LABEL_16:
    v6 = *(uint32_t *)(v4 + 72);
    v27 = v4 + 52;
    goto LABEL_7;
  }
  result = *(uint32_t *)(v4 + 68);
  if ( result == 1 )
    goto LABEL_16;
LABEL_3:
  if ( result == 2 )
  {
    v27 = v25 + 52;
    (*(void (**)(uint32_t *, uint32_t, int, uint32_t, int, unsigned int *, unsigned int))(a1[99] + 4))(
      a1,
      *(uint32_t *)(v25 + 4 * *(uint32_t *)(v25 + 64) + 56),
      v25 + 52,
      *(uint32_t *)(v25 + 72),
      a2,
      a3,
      a4);
    result = *(uint32_t *)(v25 + 72);
    if ( *(uint32_t *)(v25 + 52) < result )
      return result;
    *(uint32_t *)(v25 + 68) = 0;
    if ( a4 <= *a3 )
      return result;
  }
  else
  {
    v27 = v4 + 52;
    if ( result != 0 )
      return result;
  }
  *(uint32_t *)(v25 + 52) = 0;
  v6 = a1[70] - 1;
  *(uint32_t *)(v25 + 72) = v6;
  if ( *(uint32_t *)(v25 + 76) == a1[71] )
  {
    v23 = a1[97];
    v13 = (uint32_t *)a1[49];
    if ( (int)a1[9] > 0 )
    {
      v21 = 0;
      do
      {
        v14 = v13[9] * v13[3];
        v15 = (int)v14 / a1[70];
        if ( v13[11] % v14 != 0 )
          v14 = v13[11] % v14;
        if ( v21 == 0 )
          *(uint32_t *)(v23 + 72) = (int)(v14 - 1) / v15 + 1;
        v16 = 2 * v15;
        v17 = *(uint32_t *)(*(uint32_t *)(v23 + 4 * *(uint32_t *)(v23 + 64) + 56) + 4 * v21);
        if ( v16 > 0 )
        {
          v18 = (uint32_t *)(v17 + 4 * v14 - 4);
          v19 = 0;
          v20 = v17 + 4 * v14;
          do
            *(uint32_t *)(v20 + 4 * v19++) = *v18;
          while ( v19 != v16 );
        }
        ++v21;
        v13 += 21;
      }
      while ( v21 < a1[9] );
      v6 = *(uint32_t *)(v25 + 72);
    }
  }
  *(uint32_t *)(v25 + 68) = 1;
LABEL_7:
  (*(void (**)(uint32_t *, uint32_t, int, int, int, unsigned int *, unsigned int))(a1[99] + 4))(
    a1,
    *(uint32_t *)(v25 + 4 * *(uint32_t *)(v25 + 64) + 56),
    v27,
    v6,
    a2,
    a3,
    a4);
  result = *(uint32_t *)(v25 + 72);
  if ( *(uint32_t *)(v25 + 52) >= result )
  {
    if ( *(uint32_t *)(v25 + 76) == 1 )
    {
      v30 = a1[97];
      v7 = a1[70];
      v29 = a1[49];
      v8 = a1[9];
      if ( v8 > 0 )
      {
        v28 = 0;
        v31 = v7 + 1;
        v32 = v7 + 2;
        while ( 1 )
        {
          v9 = *(uint32_t *)(v29 + 36) * *(uint32_t *)(v29 + 12) / v7;
          v22 = v9;
          v10 = *(uint32_t *)(*(uint32_t *)(v30 + 56) + 4 * v28);
          v11 = *(uint32_t *)(*(uint32_t *)(v30 + 60) + 4 * v28);
          if ( v9 > 0 )
          {
            v26 = v32 * v9;
            v24 = 4 * v31 * v9;
            v12 = 0;
            do
            {
              *(uint32_t *)(v10 - 4 * v22 + 4 * v12) = *(uint32_t *)(v10 + v24 + 4 * v12);
              *(uint32_t *)(v11 - 4 * v22 + 4 * v12) = *(uint32_t *)(v11 + v24 + 4 * v12);
              *(uint32_t *)(v10 + 4 * v26 + 4 * v12) = *(uint32_t *)(v10 + 4 * v12);
              *(uint32_t *)(v11 + 4 * v26 + 4 * v12) = *(uint32_t *)(v11 + 4 * v12);
              ++v12;
            }
            while ( v12 != v22 );
            v8 = a1[9];
          }
          if ( ++v28 >= v8 )
            break;
          v29 += 84;
          v7 = a1[70];
        }
      }
    }
    *(uint32_t *)(v25 + 64) ^= 1u;
    *(uint8_t *)(v25 + 48) = 0;
    *(uint32_t *)(v25 + 52) = a1[70] + 1;
    result = a1[70] + 2;
    *(uint32_t *)(v25 + 68) = 2;
    *(uint32_t *)(v25 + 72) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FC2E60  (binary VA: 0xfc2e60)
// Original: sub_FC2E60
// ----------------------------------------------------------------------------
int sub_FC2E60(int a1, int a2, int a3, int a4)
{
  return (*(int (**)(int, uint32_t, uint32_t, uint32_t, int, int, int))(*(uint32_t *)(a1 + 396) + 4))(
           a1,
           0,
           0,
           0,
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: sub_FC2EB0  (binary VA: 0xfc2eb0)
// Original: sub_FC2EB0
// ----------------------------------------------------------------------------
unsigned int sub_FC2EB0(uint32_t *a1, int a2)
{
  unsigned int result;
  int v3;
  unsigned int v4;
  uint32_t *v5;
  int v6;
  unsigned int v7;
  __m128i v8;
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  uint32_t *v15;
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
  uint32_t *v26;
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
  unsigned int v42;
  int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  unsigned int v51;
  uint32_t *v52;

  v26 = (uint32_t *)a1[97];
  if ( a2 != 0 )
  {
    if ( a2 == 2 )
    {
      v26[1] = (uint32_t)(uintptr_t)(((int (*)(int, int, int, int))sub_FC2E60));
      return (unsigned int)(uintptr_t)(((int (*)(int, int, int, int))sub_FC2E60));
    }
    else
    {
      *(uint32_t *)(*a1 + 20) = 4;
      return G4_VCALL<int>(a1, 0, v16, v17, v18, v19, v20, v21, v22, v24, v26, v27, v28, v29, v30, v32, v34, v36, v38, v39, v40, v41, v43, v45, v47);
    }
  }
  else
  {
    if ( *(uint8_t *)(a1[104] + 8) != 0 )
    {
      result = (unsigned int)(uintptr_t)(sub_FC2A90);
      v26[1] = (uint32_t)(uintptr_t)(sub_FC2A90);
      v31 = a1[97];
      v25 = a1[70];
      v33 = a1[49];
      if ( (int)a1[9] > 0 )
      {
        v3 = a1[70];
        v35 = 0;
        v23 = v25 + 2;
        while ( 1 )
        {
          v4 = *(uint32_t *)(v31 + 4 * v35 + 8);
          v37 = *(uint32_t *)(v33 + 36) * *(uint32_t *)(v33 + 12) / v3;
          v5 = *(uint32_t **)(*(uint32_t *)(v31 + 56) + 4 * v35);
          result = *(uint32_t *)(*(uint32_t *)(v31 + 60) + 4 * v35);
          v48 = v23 * v37;
          if ( v23 * v37 > 0 )
          {
            if ( 4 * (v48 >> 2) == 0
              || result <= (unsigned int)(uintptr_t)(v5 + 4) && (unsigned int)(uintptr_t)(v5) <= result + 16
              || v4 <= (unsigned int)(uintptr_t)(v5 + 4) && (unsigned int)(uintptr_t)(v5) <= v4 + 16
              || v4 <= result + 16 && result <= v4 + 16
              || v48 <= 9 )
            {
              break;
            }
            v6 = 0;
            v7 = 0;
            do
            {
              v8 = *(__m128i *)(v4 + v6 * 4);
              ++v7;
              *(__m128i *)(result + v6 * 4) = v8;
              *(__m128i *)&v5[v6] = v8;
              v6 += 4;
            }
            while ( v48 >> 2 > v7 );
            v9 = 4 * (v48 >> 2);
            if ( v48 != v9 )
              goto LABEL_11;
          }
LABEL_12:
          v44 = 2 * v37;
          if ( 2 * v37 > 0 )
          {
            v11 = v4 + 4 * v37 * v25;
            v49 = 4 * (v25 - 2) * v37;
            v12 = result + v49;
            v13 = v49 + v4;
            v46 = 4 * v37 * v25 + result;
            v50 = result + v49 + 16;
            if ( 4 * (v44 >> 2) == 0
              || v12 <= v46 + 16 && v46 <= v50
              || v12 <= v13 + 16 && v13 <= v50
              || v11 <= v46 + 16 && v46 <= v11 + 16
              || v11 <= v50 && v12 <= v11 + 16
              || v44 <= 8
              || v13 <= v46 + 16 && v46 <= v13 + 16 )
            {
              result = 0;
              v52 = v5;
              v42 = v12;
              goto LABEL_19;
            }
            v14 = 0;
            v51 = 0;
            do
            {
              *(__m128i *)(v12 + v14) = *(__m128i *)(v11 + v14);
              ++v51;
              *(__m128i *)(v46 + v14) = *(__m128i *)(v13 + v14);
              v14 += 16;
            }
            while ( v44 >> 2 > v51 );
            result = 4 * (v44 >> 2);
            if ( v44 != result )
            {
              v52 = v5;
              v42 = v12;
              do
              {
LABEL_19:
                *(uint32_t *)(v42 + 4 * result) = *(uint32_t *)(v11 + 4 * result);
                *(uint32_t *)(v46 + 4 * result) = *(uint32_t *)(v13 + 4 * result);
                ++result;
              }
              while ( (int)v44 > (int)result );
              v5 = v52;
            }
          }
          if ( v37 > 0 )
          {
            for ( result = 0; result != v37; ++result )
              v5[result - v37] = *v5;
          }
          if ( ++v35 >= a1[9] )
            goto LABEL_31;
          v33 += 84;
          v3 = a1[70];
        }
        v9 = 0;
        do
        {
LABEL_11:
          v10 = *(uint32_t *)(v4 + 4 * v9);
          *(uint32_t *)(result + 4 * v9) = v10;
          v5[v9++] = v10;
        }
        while ( (int)v48 > v9 );
        goto LABEL_12;
      }
LABEL_31:
      v15 = v26;
      v26[16] = 0;
      v26[17] = 0;
      v26[19] = 0;
    }
    else
    {
      result = (unsigned int)(uintptr_t)(sub_FC29F0);
      v15 = (uint32_t *)a1[97];
      v26[1] = (uint32_t)(uintptr_t)(sub_FC29F0);
    }
    *((uint8_t *)v15 + 48) = 0;
    v15[13] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vox_v_611b06::M_erase  (binary VA: 0xfcf7c0)
// Original: std::_Rb_tree<int,std::pair<int const,vox::vs::VSStreamBuffer>,std::_Select1st<std::pair<int const,vox::vs::VSStreamBuffer>>,vox::vs::VSIntComp,vox::SAllocator<std::pair<int const,vox::vs::VSStreamBuffer>,(vox::VoxMemHint)0>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_int_pair_int_const_vox_v_611b06::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)a2[3];
      v21 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v22 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v23 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v24 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v25 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v20 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              v19 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = v8[3];
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_int_pair_int_const_vox_v_611b06::M_erase(
                                        a1,
                                        (uint32_t *)(*(void **)(v9 + 12)));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      VoxFreeInternal((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  VoxFreeInternal(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              VoxFreeInternal(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v25[2];
                          VoxFreeInternal(v25);
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v24[2];
                      VoxFreeInternal(v24);
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v23[2];
                  VoxFreeInternal(v23);
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v22[2];
              VoxFreeInternal(v22);
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v21[2];
          VoxFreeInternal(v21);
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)a2[2];
      VoxFreeInternal(a2);
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_FCF9A0  (binary VA: 0xfcf9a0)
// Original: sub_FCF9A0
// ----------------------------------------------------------------------------
int * sub_FCF9A0(int *a1, uint32_t *a2, int a3, int a4)
{
  int v5;
  char *v6;
  int v8;
  char *v9;
  uint32_t *v10;
  uint32_t *v11;
  char v12;
  uint32_t *v13;
  char v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  char v18;
  int v19;
  char *v20;
  int v21;
  bool v22;
  int v23;
  char *v24;
  int v25;
  int v26;
  char v27;
  int v28;
  int v29;
  char *v30;
  char *v31;
  int v32;
  char *v33;
  int v34;
  int v35;
  int v36;
  char *v37;
  bool v38;
  int v39;
  int v40;
  int v41;
  int v42;
  bool v43;
  int v44;
  char v45;
  char *v46;
  char *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  char v52;
  int v53;
  int v54;
  int v55;
  char v56;
  char v57;
  uint32_t *v59;
  char *v60;
  int v61;
  bool v62;
  int v63;
  char v64;
  char v65;
  char v66;
  char v67;
  int v68;
  char v69;
  char v70;

  v59 = a2 + 1;
  if ( (uint32_t *)a3 != a2 + 1 )
  {
    if ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(a3 + 16)) != 0 )
    {
      if ( a3 == a2[3] )
      {
LABEL_6:
        v5 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        if ( v5 != -16 )
        {
          v6 = *(char **)a4;
          *(uint32_t *)(v5 + 20) = *(uint32_t *)(a4 + 4);
          *(uint32_t *)(v5 + 16) = (uint32_t)(uintptr_t)(v6);
        }
        v47 = (char *)a3;
        v48 = (int)(uintptr_t)(v59);
        v46 = (char *)v5;
        v45 = 1;
        goto LABEL_9;
      }
      v61 = sub_1904940(a3);
      if ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)(v61 + 16), *(char **)a4) != 0 )
      {
        if ( *(uint32_t *)(v61 + 12) == 0 )
        {
          v22 = true;
          if ( v59 != (uint32_t *)v61 )
            v22 = (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(v61 + 16)) != 0;
          v52 = v22;
          v23 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
          if ( v23 != -16 )
          {
            v24 = *(char **)a4;
            *(uint32_t *)(v23 + 20) = *(uint32_t *)(a4 + 4);
            *(uint32_t *)(v23 + 16) = (uint32_t)(uintptr_t)(v24);
          }
          sub_1904970(v52, v23, v61, v59);
          ++a2[5];
          *a1 = v23;
          return a1;
        }
        goto LABEL_6;
      }
      v16 = (uint32_t *)a2[2];
      if ( v16 != nullptr )
      {
        while ( 1 )
        {
          v18 = vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, (char *)v16[4]);
          v17 = (uint32_t *)(v18 != 0 ? v16[2] : v16[3]);
          if ( v17 == nullptr )
            break;
          v16 = v17;
        }
        if ( v18 == 0 )
        {
          v63 = (int)(uintptr_t)(v16);
          v21 = (int)(uintptr_t)(v16);
          goto LABEL_46;
        }
      }
      else
      {
        v16 = v59;
      }
      if ( (uint32_t *)a2[3] == v16 )
      {
        v38 = true;
        if ( v59 != v16 )
          v38 = (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, (char *)v16[4]) != 0;
        v56 = v38;
        v39 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        v63 = v39;
        if ( v39 != -16 )
        {
          v40 = *(uint32_t *)(a4 + 4);
          *(uint32_t *)(v39 + 16) = *(uint32_t *)a4;
          *(uint32_t *)(v39 + 20) = v40;
        }
        sub_1904970(v56, v39, v16, v59);
        ++a2[5];
        goto LABEL_47;
      }
      v63 = sub_19048F0(v16);
      v21 = v63;
LABEL_46:
      if ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)(v21 + 16), *(char **)a4) != 0 )
      {
        v70 = 1;
        if ( v59 != v16 )
          v70 = (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, (char *)v16[4]) != 0;
        v34 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        v63 = v34;
        if ( v34 != -16 )
        {
          v35 = *(uint32_t *)(a4 + 4);
          *(uint32_t *)(v34 + 16) = *(uint32_t *)a4;
          *(uint32_t *)(v34 + 20) = v35;
        }
        sub_1904970(v70, v34, v16, v59);
        ++a2[5];
      }
LABEL_47:
      *a1 = v63;
      return a1;
    }
    if ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)(a3 + 16), *(char **)a4) == 0 )
    {
      *a1 = a3;
      return a1;
    }
    if ( a3 == a2[4] )
    {
      v64 = vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(a3 + 16));
      v29 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v29 != -16 )
      {
        v30 = *(char **)a4;
        *(uint32_t *)(v29 + 20) = *(uint32_t *)(a4 + 4);
        *(uint32_t *)(v29 + 16) = (uint32_t)(uintptr_t)(v30);
      }
      v53 = v29;
      sub_1904970(v64, v29, a3, v59);
      ++a2[5];
      *a1 = v53;
      return a1;
    }
    v50 = sub_19048E0(a3);
    if ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(v50 + 16)) != 0 )
    {
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v8 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        if ( v8 != -16 )
        {
          v9 = *(char **)a4;
          *(uint32_t *)(v8 + 20) = *(uint32_t *)(a4 + 4);
          *(uint32_t *)(v8 + 16) = (uint32_t)(uintptr_t)(v9);
        }
        sub_1904970(1, v8, v50, v59);
        ++a2[5];
        *a1 = v8;
        return a1;
      }
      v65 = vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(a3 + 16));
      v5 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v5 != -16 )
      {
        v31 = *(char **)a4;
        *(uint32_t *)(v5 + 20) = *(uint32_t *)(a4 + 4);
        *(uint32_t *)(v5 + 16) = (uint32_t)(uintptr_t)(v31);
      }
      v47 = (char *)a3;
      v48 = (int)(uintptr_t)(v59);
      v46 = (char *)v5;
      v45 = v65;
LABEL_9:
      v49 = v5;
      sub_1904970(v45, v46, v47, v48);
      ++a2[5];
      *a1 = v49;
      return a1;
    }
    v25 = a2[2];
    if ( v25 != 0 )
    {
      while ( 1 )
      {
        v27 = vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(v25 + 16));
        v26 = v27 != 0 ? *(uint32_t *)(v25 + 8) : *(uint32_t *)(v25 + 12);
        if ( v26 == 0 )
          break;
        v25 = v26;
      }
      if ( v27 == 0 )
      {
        v68 = v25;
        v28 = v25;
        goto LABEL_65;
      }
    }
    else
    {
      v25 = (int)(uintptr_t)(v59);
    }
    if ( a2[3] == v25 )
    {
      v43 = true;
      if ( v59 != (uint32_t *)v25 )
        v43 = (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(v25 + 16)) != 0;
      v57 = v43;
      v68 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v68 != -16 )
      {
        v44 = *(uint32_t *)(a4 + 4);
        *(uint32_t *)(v68 + 16) = *(uint32_t *)a4;
        *(uint32_t *)(v68 + 20) = v44;
      }
      sub_1904970(v57, v68, v25, v59);
      ++a2[5];
      goto LABEL_66;
    }
    v68 = sub_19048F0(v25);
    v28 = v68;
LABEL_65:
    if ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)(v28 + 16), *(char **)a4) != 0 )
    {
      v67 = 1;
      if ( v59 != (uint32_t *)v25 )
        v67 = (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(v25 + 16)) != 0;
      v41 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      v68 = v41;
      if ( v41 != -16 )
      {
        v42 = *(uint32_t *)(a4 + 4);
        *(uint32_t *)(v41 + 16) = *(uint32_t *)a4;
        *(uint32_t *)(v41 + 20) = v42;
      }
      sub_1904970(v67, v41, v25, v59);
      ++a2[5];
    }
LABEL_66:
    *a1 = v68;
    return a1;
  }
  if ( a2[5] != 0
    && (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)(a2[4] + 16), *(char **)a4) != 0 )
  {
    v19 = a2[4];
    v62 = true;
    v60 = (char *)v19;
    if ( a3 != v19 )
      v62 = (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(v19 + 16)) != 0;
    v5 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v5 != -16 )
    {
      v20 = *(char **)a4;
      *(uint32_t *)(v5 + 20) = *(uint32_t *)(a4 + 4);
      *(uint32_t *)(v5 + 16) = (uint32_t)(uintptr_t)(v20);
    }
    v48 = a3;
    v47 = v60;
    v46 = (char *)v5;
    v45 = v62;
    goto LABEL_9;
  }
  v10 = (uint32_t *)a2[2];
  if ( v10 == nullptr )
  {
    v10 = v59;
    goto LABEL_25;
  }
  while ( 1 )
  {
    v12 = vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, (char *)v10[4]);
    if ( v12 == 0 )
      break;
    v11 = (uint32_t *)v10[2];
    if ( v11 == nullptr )
      goto LABEL_24;
LABEL_21:
    v10 = v11;
  }
  v11 = (uint32_t *)v10[3];
  if ( v11 != nullptr )
    goto LABEL_21;
LABEL_24:
  if ( v12 == 0 )
  {
    v13 = v10;
    goto LABEL_27;
  }
LABEL_25:
  if ( (uint32_t *)a2[3] == v10 )
  {
    v66 = 1;
    if ( v59 != v10 )
      v66 = (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, (char *)v10[4]) != 0;
    v36 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v36 != -16 )
    {
      v37 = *(char **)a4;
      *(uint32_t *)(v36 + 20) = *(uint32_t *)(a4 + 4);
      *(uint32_t *)(v36 + 16) = (uint32_t)(uintptr_t)(v37);
    }
    v55 = v36;
    sub_1904970(v66, v36, v10, v59);
    ++a2[5];
    v15 = v55;
  }
  else
  {
    v13 = (uint32_t *)sub_19048F0(v10);
LABEL_27:
    v51 = (int)(uintptr_t)(v13);
    v14 = vox::c8stringcompare::opCall((int)(uintptr_t)(a2), (char *)v13[4], *(char **)a4);
    v15 = v51;
    if ( v14 != 0 )
    {
      v69 = 1;
      if ( v59 != v10 )
        v69 = (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, (char *)v10[4]) != 0;
      v32 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v32 != -16 )
      {
        v33 = *(char **)a4;
        *(uint32_t *)(v32 + 20) = *(uint32_t *)(a4 + 4);
        *(uint32_t *)(v32 + 16) = (uint32_t)(uintptr_t)(v33);
      }
      v54 = v32;
      sub_1904970(v69, v32, v10, v59);
      ++a2[5];
      v15 = v54;
    }
  }
  *a1 = v15;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_char_pair_char_const_vox_3a5088::M_erase  (binary VA: 0xfd31e0)
// Original: std::_Rb_tree<char *,std::pair<char * const,vox::AmbienceElementParams *>,std::_Select1st<std::pair<char * const,vox::AmbienceElementParams *>>,vox::c8stringcompare,vox::SAllocator<std::pair<char * const,vox::AmbienceElementParams *>,(vox::VoxMemHint)0>>::_M_erase
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_char_pair_char_const_vox_3a5088::M_erase(int a1, uint32_t *a2)
{
  uint32_t *result;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;

  result = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v3 = (uint32_t *)a2[3];
      v22 = v3;
      if ( v3 != nullptr )
      {
        while ( 1 )
        {
          v4 = (uint32_t *)v3[3];
          v23 = v4;
          if ( v4 != nullptr )
          {
            while ( 1 )
            {
              v5 = (uint32_t *)v4[3];
              v24 = v5;
              if ( v5 != nullptr )
              {
                while ( 1 )
                {
                  v6 = (uint32_t *)v5[3];
                  v25 = v6;
                  if ( v6 != nullptr )
                  {
                    while ( 1 )
                    {
                      v7 = (uint32_t *)v6[3];
                      v26 = v7;
                      if ( v7 != nullptr )
                      {
                        while ( 1 )
                        {
                          v8 = (uint32_t *)v7[3];
                          v21 = v8;
                          if ( v8 != nullptr )
                          {
                            while ( 1 )
                            {
                              v9 = (uint32_t *)v8[3];
                              v20 = v9;
                              if ( v9 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v10 = v9[3];
                                  if ( v10 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_char_pair_char_const_vox_3a5088::M_erase(
                                        a1,
                                        *(void **)(v10 + 12));
                                      v11 = *(uint32_t *)(v10 + 8);
                                      VoxFreeInternal((void *)v10);
                                      if ( v11 == 0 )
                                        break;
                                      v10 = v11;
                                    }
                                  }
                                  v12 = (uint32_t *)v20[2];
                                  VoxFreeInternal(v20);
                                  if ( v12 == nullptr )
                                    break;
                                  v20 = v12;
                                  v9 = v12;
                                }
                              }
                              v13 = (uint32_t *)v21[2];
                              VoxFreeInternal(v21);
                              if ( v13 == nullptr )
                                break;
                              v21 = v13;
                              v8 = v13;
                            }
                          }
                          v14 = (uint32_t *)v26[2];
                          VoxFreeInternal(v26);
                          if ( v14 == nullptr )
                            break;
                          v26 = v14;
                          v7 = v14;
                        }
                      }
                      v15 = (uint32_t *)v25[2];
                      VoxFreeInternal(v25);
                      if ( v15 == nullptr )
                        break;
                      v25 = v15;
                      v6 = v15;
                    }
                  }
                  v16 = (uint32_t *)v24[2];
                  VoxFreeInternal(v24);
                  if ( v16 == nullptr )
                    break;
                  v24 = v16;
                  v5 = v16;
                }
              }
              v17 = (uint32_t *)v23[2];
              VoxFreeInternal(v23);
              if ( v17 == nullptr )
                break;
              v23 = v17;
              v4 = v17;
            }
          }
          v18 = (uint32_t *)v22[2];
          VoxFreeInternal(v22);
          if ( v18 == nullptr )
            break;
          v22 = v18;
          v3 = v18;
        }
      }
      v19 = (uint32_t *)a2[2];
      result = (uint32_t *)VoxFreeInternal(a2);
      if ( v19 == nullptr )
        break;
      a2 = v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_char_pair_char_const_vox_d0f1ce::M_erase  (binary VA: 0xfd3390)
// Original: std::_Rb_tree<char *,std::pair<char * const,vox::AmbienceFileParams *>,std::_Select1st<std::pair<char * const,vox::AmbienceFileParams *>>,vox::c8stringcompare,vox::SAllocator<std::pair<char * const,vox::AmbienceFileParams *>,(vox::VoxMemHint)0>>::_M_erase
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_char_pair_char_const_vox_d0f1ce::M_erase(int a1, uint32_t *a2)
{
  uint32_t *result;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;

  result = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v3 = (uint32_t *)a2[3];
      v22 = v3;
      if ( v3 != nullptr )
      {
        while ( 1 )
        {
          v4 = (uint32_t *)v3[3];
          v23 = v4;
          if ( v4 != nullptr )
          {
            while ( 1 )
            {
              v5 = (uint32_t *)v4[3];
              v24 = v5;
              if ( v5 != nullptr )
              {
                while ( 1 )
                {
                  v6 = (uint32_t *)v5[3];
                  v25 = v6;
                  if ( v6 != nullptr )
                  {
                    while ( 1 )
                    {
                      v7 = (uint32_t *)v6[3];
                      v26 = v7;
                      if ( v7 != nullptr )
                      {
                        while ( 1 )
                        {
                          v8 = (uint32_t *)v7[3];
                          v21 = v8;
                          if ( v8 != nullptr )
                          {
                            while ( 1 )
                            {
                              v9 = (uint32_t *)v8[3];
                              v20 = v9;
                              if ( v9 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v10 = v9[3];
                                  if ( v10 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_char_pair_char_const_vox_d0f1ce::M_erase(
                                        a1,
                                        *(void **)(v10 + 12));
                                      v11 = *(uint32_t *)(v10 + 8);
                                      VoxFreeInternal((void *)v10);
                                      if ( v11 == 0 )
                                        break;
                                      v10 = v11;
                                    }
                                  }
                                  v12 = (uint32_t *)v20[2];
                                  VoxFreeInternal(v20);
                                  if ( v12 == nullptr )
                                    break;
                                  v20 = v12;
                                  v9 = v12;
                                }
                              }
                              v13 = (uint32_t *)v21[2];
                              VoxFreeInternal(v21);
                              if ( v13 == nullptr )
                                break;
                              v21 = v13;
                              v8 = v13;
                            }
                          }
                          v14 = (uint32_t *)v26[2];
                          VoxFreeInternal(v26);
                          if ( v14 == nullptr )
                            break;
                          v26 = v14;
                          v7 = v14;
                        }
                      }
                      v15 = (uint32_t *)v25[2];
                      VoxFreeInternal(v25);
                      if ( v15 == nullptr )
                        break;
                      v25 = v15;
                      v6 = v15;
                    }
                  }
                  v16 = (uint32_t *)v24[2];
                  VoxFreeInternal(v24);
                  if ( v16 == nullptr )
                    break;
                  v24 = v16;
                  v5 = v16;
                }
              }
              v17 = (uint32_t *)v23[2];
              VoxFreeInternal(v23);
              if ( v17 == nullptr )
                break;
              v23 = v17;
              v4 = v17;
            }
          }
          v18 = (uint32_t *)v22[2];
          VoxFreeInternal(v22);
          if ( v18 == nullptr )
            break;
          v22 = v18;
          v3 = v18;
        }
      }
      v19 = (uint32_t *)a2[2];
      result = (uint32_t *)VoxFreeInternal(a2);
      if ( v19 == nullptr )
        break;
      a2 = v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_char_pair_char_const_vox_d0f1ce::M_insert_unique  (binary VA: 0xfd3540)
// Original: std::_Rb_tree<char *,std::pair<char * const,vox::AmbienceFileParams *>,std::_Select1st<std::pair<char * const,vox::AmbienceFileParams *>>,vox::c8stringcompare,vox::SAllocator<std::pair<char * const,vox::AmbienceFileParams *>,(vox::VoxMemHint)0>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_char_pair_char_const_vox_d0f1ce::M_insert_unique(int *a1, uint32_t *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  int v10;
  char *v11;
  uint32_t *v12;
  uint32_t *v13;
  char v14;
  char *v15;
  uint32_t *v16;
  char v17;
  char *v18;
  int v19;
  bool v20;
  char *v21;
  bool v22;
  int v23;
  char *v24;
  uint32_t *v25;
  char v26;
  char *v27;
  char *v28;
  char *v29;
  char v30;
  char v31;
  uint32_t *v32;
  char v33;
  char v34;
  char v35;

  v4 = a3;
  v32 = a2 + 1;
  if ( a2 + 1 != (uint32_t *)a3 )
  {
    if ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(a3 + 16)) != 0 )
    {
      v5 = a2[3];
      if ( v5 != a3 )
      {
        v6 = sub_1904940(a3);
        if ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)(v6 + 16), *(char **)a4) != 0 )
        {
          if ( *(uint32_t *)(v6 + 12) == 0 )
          {
            v22 = true;
            if ( v32 != (uint32_t *)v6 )
              v22 = (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(v6 + 16)) != 0;
            v31 = v22;
            v23 = VoxAllocInternal(
                    0x18u,
                    0,
                    (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                    (int)(uintptr_t)("internal_new"),
                    181);
            if ( v23 != -16 )
            {
              v24 = *(char **)a4;
              *(uint32_t *)(v23 + 20) = *(uint32_t *)(a4 + 4);
              *(uint32_t *)(v23 + 16) = (uint32_t)(uintptr_t)(v24);
            }
            sub_1904970(v31, v23, v6, v32);
            ++a2[5];
            *a1 = v23;
            return a1;
          }
          v7 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
          if ( v7 != -16 )
          {
            v8 = *(char **)a4;
            *(uint32_t *)(v7 + 20) = *(uint32_t *)(a4 + 4);
            *(uint32_t *)(v7 + 16) = (uint32_t)(uintptr_t)(v8);
          }
          sub_1904970(1, v7, a3, v32);
LABEL_9:
          ++a2[5];
          goto LABEL_10;
        }
        v12 = (uint32_t *)a2[2];
        if ( v12 == nullptr )
        {
          v12 = a2 + 1;
LABEL_50:
          v19 = (int)(uintptr_t)(a2);
          if ( (uint32_t *)a2[3] == v12 )
          {
LABEL_51:
            v20 = true;
            if ( v32 != v12 )
              v20 = (uint8_t)vox::c8stringcompare::opCall(v19, *(char **)a4, (char *)v12[4]) != 0;
            v30 = v20;
            v7 = VoxAllocInternal(
                   0x18u,
                   0,
                   (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                   (int)(uintptr_t)("internal_new"),
                   181);
            if ( v7 != -16 )
            {
              v21 = *(char **)a4;
              *(uint32_t *)(v7 + 20) = *(uint32_t *)(a4 + 4);
              *(uint32_t *)(v7 + 16) = (uint32_t)(uintptr_t)(v21);
            }
            sub_1904970(v30, v7, v12, v32);
            ++a2[5];
            goto LABEL_10;
          }
LABEL_29:
          v7 = sub_19048F0(v12);
LABEL_30:
          if ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)(v7 + 16), *(char **)a4) != 0 )
          {
            v33 = 1;
            if ( v32 != v12 )
              v33 = (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, (char *)v12[4]) != 0;
            v7 = VoxAllocInternal(
                   0x18u,
                   0,
                   (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                   (int)(uintptr_t)("internal_new"),
                   181);
            if ( v7 != -16 )
            {
              v15 = *(char **)a4;
              *(uint32_t *)(v7 + 20) = *(uint32_t *)(a4 + 4);
              *(uint32_t *)(v7 + 16) = (uint32_t)(uintptr_t)(v15);
            }
            goto LABEL_35;
          }
          goto LABEL_10;
        }
        while ( 1 )
        {
          v17 = vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, (char *)v12[4]);
          v16 = (uint32_t *)(v17 != 0 ? v12[2] : v12[3]);
          if ( v16 == nullptr )
            break;
          v12 = v16;
        }
        if ( v17 != 0 )
          goto LABEL_50;
LABEL_56:
        v7 = (int)(uintptr_t)(v12);
        goto LABEL_30;
      }
      goto LABEL_15;
    }
    if ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)(a3 + 16), *(char **)a4) == 0 )
    {
LABEL_19:
      *a1 = v4;
      return a1;
    }
    v10 = a2[4];
    if ( v10 != a3 )
    {
      v5 = sub_19048E0(a3);
      if ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(v5 + 16)) != 0 )
      {
        if ( *(uint32_t *)(a3 + 12) == 0 )
        {
          v35 = vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(a3 + 16));
          v7 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
          if ( v7 != -16 )
          {
            v29 = *(char **)a4;
            *(uint32_t *)(v7 + 20) = *(uint32_t *)(a4 + 4);
            *(uint32_t *)(v7 + 16) = (uint32_t)(uintptr_t)(v29);
          }
          sub_1904970(v35, v7, a3, v32);
          goto LABEL_9;
        }
LABEL_15:
        v4 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        if ( v4 != -16 )
        {
          v11 = *(char **)a4;
          *(uint32_t *)(v4 + 20) = *(uint32_t *)(a4 + 4);
          *(uint32_t *)(v4 + 16) = (uint32_t)(uintptr_t)(v11);
        }
        sub_1904970(1, v4, v5, v32);
        goto LABEL_18;
      }
      v12 = (uint32_t *)a2[2];
      if ( v12 != nullptr )
      {
        while ( 1 )
        {
          v26 = vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, (char *)v12[4]);
          v25 = (uint32_t *)(v26 != 0 ? v12[2] : v12[3]);
          if ( v25 == nullptr )
            break;
          v12 = v25;
        }
        if ( v26 == 0 )
        {
          v7 = (int)(uintptr_t)(v12);
          goto LABEL_72;
        }
      }
      else
      {
        v12 = a2 + 1;
      }
      v19 = (int)(uintptr_t)(a2);
      if ( (uint32_t *)a2[3] == v12 )
        goto LABEL_51;
      v7 = sub_19048F0(v12);
LABEL_72:
      if ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)(v7 + 16), *(char **)a4) != 0 )
      {
        v33 = 1;
        if ( v32 != v12 )
          goto LABEL_74;
        goto LABEL_75;
      }
      goto LABEL_10;
    }
    v34 = vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(v10 + 16));
    v4 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v4 != -16 )
    {
      v28 = *(char **)a4;
      *(uint32_t *)(v4 + 20) = *(uint32_t *)(a4 + 4);
      *(uint32_t *)(v4 + 16) = (uint32_t)(uintptr_t)(v28);
    }
LABEL_48:
    sub_1904970(v34, v4, v10, v32);
LABEL_18:
    ++a2[5];
    goto LABEL_19;
  }
  if ( a2[5] != 0
    && (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)(a2[4] + 16), *(char **)a4) != 0 )
  {
    v34 = 1;
    v10 = a2[4];
    if ( v32 != (uint32_t *)v10 )
      v34 = (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, *(char **)(v10 + 16)) != 0;
    v4 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v4 != -16 )
    {
      v18 = *(char **)a4;
      *(uint32_t *)(v4 + 20) = *(uint32_t *)(a4 + 4);
      *(uint32_t *)(v4 + 16) = (uint32_t)(uintptr_t)(v18);
    }
    goto LABEL_48;
  }
  v12 = (uint32_t *)a2[2];
  if ( v12 == nullptr )
  {
    v12 = a2 + 1;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v14 = vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, (char *)v12[4]);
    if ( v14 == 0 )
      break;
    v13 = (uint32_t *)v12[2];
    if ( v13 == nullptr )
      goto LABEL_27;
LABEL_24:
    v12 = v13;
  }
  v13 = (uint32_t *)v12[3];
  if ( v13 != nullptr )
    goto LABEL_24;
LABEL_27:
  if ( v14 == 0 )
    goto LABEL_56;
LABEL_28:
  if ( (uint32_t *)a2[3] != v12 )
    goto LABEL_29;
  v33 = 1;
  if ( v32 != v12 )
LABEL_74:
    v33 = (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(a2), *(char **)a4, (char *)v12[4]) != 0;
LABEL_75:
  v7 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  if ( v7 != -16 )
  {
    v27 = *(char **)a4;
    *(uint32_t *)(v7 + 20) = *(uint32_t *)(a4 + 4);
    *(uint32_t *)(v7 + 16) = (uint32_t)(uintptr_t)(v27);
  }
LABEL_35:
  sub_1904970(v33, v7, v12, v32);
  ++a2[5];
LABEL_10:
  *a1 = v7;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GetTimeDT  (binary VA: 0xfd3d20)
// Original: GetTimeDT
// ----------------------------------------------------------------------------
long double GetTimeDT(double a1, double a2)
{
  return fmax(a2 - a1, 0.0);
}

// ----------------------------------------------------------------------------
// Function: GetTime  (binary VA: 0xfd3d50)
// Original: _GetTime
// ----------------------------------------------------------------------------
long double GetTime()
{
  typedef struct timeval _g4_t_tv;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_tv)) > _g4_s0 ? (8u + sizeof(_g4_t_tv)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 8u);

  gettimeofday(&tv, nullptr);
  return (double)tv.tv_usec * 0.000001 + (double)tv.tv_sec;
}

// ----------------------------------------------------------------------------
// Function: mpc_tell  (binary VA: 0xfdfab0)
// Original: mpc_tell
// ----------------------------------------------------------------------------
int mpc_tell(int a1)
{
  int CurThreadId;
  int v2;
  int v3;
  vox::VoxThread::Self *v5;

  CurThreadId = vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = 0;
  v3 = *(uint32_t *)(a1 + 20);
  if ( v3 != 0 )
    v2 = (*(int (**)(uint32_t, int))(*(uint32_t *)v3 + 24))(*(uint32_t *)(a1 + 20), CurThreadId);
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: mpc_read  (binary VA: 0xfdfb30)
// Original: mpc_read
// ----------------------------------------------------------------------------
int mpc_read(int a1, int a2, int a3)
{
  int v3;
  int v4;
  vox::VoxThread::Self *v6;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v3 = 0;
  v4 = *(uint32_t *)(a1 + 20);
  if ( v4 != 0 )
    v3 = G4_VCALL<int>(v4, 28, a2, a3);
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: mpc_seek  (binary VA: 0xfdfbc0)
// Original: mpc_seek
// ----------------------------------------------------------------------------
int mpc_seek(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  vox::VoxThread::Self *v6;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v2 = 0;
  v3 = *(uint32_t *)(a1 + 20);
  if ( v3 != 0 )
  {
    v4 = G4_VCALL<int>(v3, 16, a2, 0);
    LOBYTE(v4) = v4 == 0;
    v2 = v4;
  }
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: mpc_getsize  (binary VA: 0xfdfc50)
// Original: mpc_getsize
// ----------------------------------------------------------------------------
int mpc_getsize(int a1)
{
  int CurThreadId;
  int v2;
  int v3;
  vox::VoxThread::Self *v5;

  CurThreadId = vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = 0;
  v3 = *(uint32_t *)(a1 + 20);
  if ( v3 != 0 )
    v2 = (*(int (**)(uint32_t, int))(*(uint32_t *)v3 + 44))(*(uint32_t *)(a1 + 20), CurThreadId);
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: mpc_canseek  (binary VA: 0xfdfcd0)
// Original: mpc_canseek
// ----------------------------------------------------------------------------
int mpc_canseek()
{
  vox::VoxThread::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  sub_BA06B0();
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_FE0D50  (binary VA: 0xfe0d50)
// Original: sub_FE0D50
// ----------------------------------------------------------------------------
int sub_FE0D50(int a1)
{
  int result;
  int v3;
  uint8_t *v4;
  int v5;
  uint64_t v6; // kr08_8
  int v7;
  int v8;
  uint64_t v9; // rax
  int v10;
  unsigned int v11;
  int *v12;
  bool v13;
  unsigned int i;
  unsigned int v15;
  int v16;
  unsigned int v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint64_t _g4_t_v21;
  typedef char _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef uint64_t _g4_t_v25[2];
  typedef uint32_t _g4_t_v26[2];
  typedef uint8_t *_g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v23)) > _g4_s5 ? (24u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v25)) > _g4_s6 ? (32u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v26)) > _g4_s7 ? (48u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v27)) > _g4_s8 ? (56u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v28)) > _g4_s9 ? (60u + sizeof(_g4_t_v28)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);

  v27 = *(uint8_t **)(a1 + 65900);
  result = *(uint32_t *)(a1 + 65916);
  v28 = *(uint32_t *)(a1 + 65904);
  if ( result == 0 )
  {
    mpc_bits_get_size(&v27, v25);
    v23 = v25[0];
    v3 = *(uint32_t *)(a1 + 44);
    v4 = &v27[-((v28 - 4) >> 3)];
    v28 = (v28 - 4) & 7;
    v27 = v4;
    v5 = (((*v4 | (*(v4 - 1) << 8)) >> v28) & 0xF) + v3;
    *(uint32_t *)(a1 + 65920) = v5;
    v21 = *(uint64_t *)(a1 + 60);
    v25[0] = v21 / (1152 << v5) + 2;
    v6 = v25[0];
    if ( v25[0] <= 0x10000u )
    {
      v18 = 0;
      v19 = 1;
      v22 = 0;
      v20 = 0;
    }
    else
    {
      v7 = v5;
      v8 = 0;
      do
      {
        ++v7;
        ++v8;
        v9 = v21 / (1152 << v7) + 2;
      }
      while ( v9 > 0x10000 );
      v10 = v7;
      v11 = v21 / (1152 << v7) + 2;
      v20 = v8;
      v25[0] = v9;
      *(uint32_t *)(a1 + 65920) = v10;
      v22 = v8;
      v19 = 1 << v8;
      v18 = (1 << v8) - 1;
      v6 = __PAIR64__(HIDWORD(v9), v11);
    }
    if ( v23 >> v22 > v6 )
    {
      v17 = (uint32_t)v6 << v22;
      if ( (v22 & 0x20) != 0 )
        v17 = 0;
      v23 = v17;
    }
    v12 = (int *)VoxAlloc_c(4 * v6, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/mpc/mpc_demux.c"), (int)(uintptr_t)("mpc_demux_ST"), 280);
    *(uint32_t *)(a1 + 65916) = (uint32_t)(uintptr_t)(v12);
    *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10184)->st_name + a1) = (v18 + v23) >> v22;
    mpc_bits_get_size(&v27, v25);
    result = 8 * (LODWORD(v25[0]) + *(uint32_t *)(a1 + 348));
    *v12 = result;
    v13 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10184)->st_name + a1) == 1;
    v26[0] = result;
    if ( !v13 )
    {
      mpc_bits_get_size(&v27, v25);
      result = 8 * (LODWORD(v25[0]) + *(uint32_t *)(a1 + 348));
      v26[1] = result;
      if ( v20 != 0 )
        result = v12[1];
      v12[1] = result;
      if ( v23 > 2 )
      {
        for ( i = 2; i != v23; ++i )
        {
          v15 = mpc_bits_golomb_dec(&v27, 12);
          if ( (v15 & 1) != 0 )
            v15 = -(v15 & 0xFFFFFFFE);
          v16 = i & 1;
          result = 2 * v26[((uint8_t)i - 1) & 1] - v26[v16] + 4 * v15;
          v26[v16] = result;
          if ( (i & (v19 - 1)) == 0 )
            v12[i >> v22] = result;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FE1090  (binary VA: 0xfe1090)
// Original: sub_FE1090
// ----------------------------------------------------------------------------
int sub_FE1090(uint32_t *a1)
{
  unsigned int v2;
  unsigned int v3;
  bool v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  bool v14; // cc
  unsigned int v15;
  char *v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  int size;
  int v35;
  int v36;
  int v37;
  uint8_t *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  uint8_t *v43;
  int v44;
  int v45;
  int v46;
  size_t v47;
  size_t v48;
  unsigned int v49;
  unsigned int v50;
  int result;
  int v52;
  unsigned int v53;
  unsigned int v54;
  uint32_t *v55;
  int block;
  int v57;
  unsigned int v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  uint32_t *v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  int v69;
  unsigned int v70;
  unsigned int v71;
  int v72;
  int v73;
  unsigned int v74;
  unsigned int v75;
  int v76;
  int v77;
  unsigned int v78;
  int v79;
  char *v80;
  unsigned int v81;
  unsigned int v82;
  int v83;
  int v84;
  char *v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef unsigned int _g4_t_v89;
  typedef unsigned int _g4_t_v90;
  typedef unsigned int _g4_t_v91;
  typedef unsigned int _g4_t_v92;
  typedef unsigned int _g4_t_v93;
  typedef unsigned int _g4_t_v94;
  typedef unsigned int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef unsigned int _g4_t_v98;
  typedef unsigned int _g4_t_v99;
  typedef char *_g4_t_v100;
  typedef char *_g4_t_v101;
  typedef int _g4_t_v102;
  typedef uint32_t *_g4_t_v103;
  typedef unsigned int _g4_t_v104;
  typedef char *_g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef unsigned int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef char *_g4_t_v110;
  typedef unsigned int _g4_t_v111;
  typedef unsigned int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef unsigned int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef uint32_t _g4_t_v118[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v86)) > _g4_s0 ? (12u + sizeof(_g4_t_v86)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v87)) > _g4_s1 ? (12u + sizeof(_g4_t_v87)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v88)) > _g4_s2 ? (12u + sizeof(_g4_t_v88)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v89)) > _g4_s3 ? (12u + sizeof(_g4_t_v89)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v90)) > _g4_s4 ? (12u + sizeof(_g4_t_v90)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v91)) > _g4_s5 ? (12u + sizeof(_g4_t_v91)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v92)) > _g4_s6 ? (12u + sizeof(_g4_t_v92)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v93)) > _g4_s7 ? (12u + sizeof(_g4_t_v93)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v94)) > _g4_s8 ? (16u + sizeof(_g4_t_v94)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v95)) > _g4_s9 ? (16u + sizeof(_g4_t_v95)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v96)) > _g4_s10 ? (20u + sizeof(_g4_t_v96)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v97)) > _g4_s11 ? (24u + sizeof(_g4_t_v97)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v98)) > _g4_s12 ? (28u + sizeof(_g4_t_v98)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v99)) > _g4_s13 ? (32u + sizeof(_g4_t_v99)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v100)) > _g4_s14 ? (32u + sizeof(_g4_t_v100)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v101)) > _g4_s15 ? (36u + sizeof(_g4_t_v101)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v102)) > _g4_s16 ? (36u + sizeof(_g4_t_v102)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v103)) > _g4_s17 ? (40u + sizeof(_g4_t_v103)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v104)) > _g4_s18 ? (40u + sizeof(_g4_t_v104)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v105)) > _g4_s19 ? (44u + sizeof(_g4_t_v105)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v106)) > _g4_s20 ? (48u + sizeof(_g4_t_v106)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v107)) > _g4_s21 ? (52u + sizeof(_g4_t_v107)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v108)) > _g4_s22 ? (52u + sizeof(_g4_t_v108)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v109)) > _g4_s23 ? (52u + sizeof(_g4_t_v109)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v110)) > _g4_s24 ? (52u + sizeof(_g4_t_v110)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v111)) > _g4_s25 ? (52u + sizeof(_g4_t_v111)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v112)) > _g4_s26 ? (52u + sizeof(_g4_t_v112)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v113)) > _g4_s27 ? (56u + sizeof(_g4_t_v113)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v114)) > _g4_s28 ? (56u + sizeof(_g4_t_v114)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v115)) > _g4_s29 ? (56u + sizeof(_g4_t_v115)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v116)) > _g4_s30 ? (56u + sizeof(_g4_t_v116)) : _g4_s30,
    _g4_s32 = (72u + sizeof(_g4_t_v117)) > _g4_s31 ? (72u + sizeof(_g4_t_v117)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v118)) > _g4_s32 ? (80u + sizeof(_g4_t_v118)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 12u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 12u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 12u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 12u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 12u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 12u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 12u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 12u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 16u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 16u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 20u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 24u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 28u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 32u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 32u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 36u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 36u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 40u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 40u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 44u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 48u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 52u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 52u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 52u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 52u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 52u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 52u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 56u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 56u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 56u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 56u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 72u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 80u);

  v2 = a1[16482];
  if ( v2 != 0 )
  {
    v105 = (char *)(a1 + 90);
    v103 = a1 + 16475;
  }
  else
  {
    v52 = a1[87];
    v53 = (unsigned int)(8 * v52 + 32) >> 3;
    v116 = 8 * v52 + 32;
    if ( a1[4] == 7 )
      v53 = v52 + ((v53 - v52) & 0xFFFFFFFC);
    v106 = 8 * v52 + 32 - 8 * v53;
    (*(void (**)(uint32_t, unsigned int))(*a1 + 4))(*a1, v53);
    v4 = a1[4] == 7;
    a1[16474] = 0;
    v105 = (char *)(a1 + 90);
    a1[16475] = (uint32_t)(uintptr_t)(a1 + 90);
    a1[16476] = 8;
    *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) = 0;
    a1[16478] = 0;
    if ( v4 )
    {
      v70 = ((v106 >> 3) + 14) & 0xFFFFFFFC;
      if ( v70 - 1 >= 0xEF00 )
        v70 = 61184;
      v71 = v70 & 0xFFFFFFFC;
      if ( (v70 & 0xFFFFFFFC) > 0xEF00 )
      {
        memmove(v105, v105, 0);
        a1[16474] = 0;
        a1[16475] = (uint32_t)(uintptr_t)(v105);
      }
      v104 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v71);
      v72 = a1[16474];
      if ( v104 >> 2 != 0 )
      {
        v73 = 0;
        do
        {
          *(uint32_t *)((char *)&a1[v73 + 90] + v72) = __builtin_bswap32(*(uint32_t *)((char *)&a1[v73 + 90] + v72));
          ++v73;
        }
        while ( v73 != v104 >> 2 );
        v72 = a1[16474];
      }
      a1[16474] = v104 + v72;
      v55 = (uint32_t *)a1[16475];
    }
    else
    {
      v54 = 61184;
      if ( (unsigned int)((v106 >> 3) + 10) <= 0xEEFF )
        v54 = (v106 >> 3) + 11;
      v55 = a1 + 90;
      if ( v54 != 0 )
      {
        if ( v54 > 0xEF00 )
        {
          memmove(v105, v105, 0);
          a1[16474] = 0;
          a1[16475] = (uint32_t)(uintptr_t)(v105);
        }
        a1[16474] += (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v54);
        v55 = (uint32_t *)a1[16475];
      }
    }
    a1[16476] = 8;
    v103 = a1 + 16475;
    a1[16475] = (uint32_t)(uintptr_t)((char *)v55 + (v106 >> 3));
    block = mpc_bits_get_block(a1 + 16475, v118);
    while ( memcmp(v118, "SE", 2u) != 0 )
    {
      result = LOBYTE(v118[0]) - 65;
      if ( (uint8_t)result > 0x19u )
        return result;
      result = BYTE1(v118[0]);
      if ( SBYTE1(v118[0]) <= 64 || SBYTE1(v118[0]) > 90 )
        return result;
      if ( memcmp(v118, "CT", 2u) == 0 )
      {
        if ( a1[16482] == 0 )
          a1[16482] = v116;
      }
      else
      {
        a1[16482] = 0;
      }
      v116 += 8 * (v118[1] + block);
      v63 = v116 >> 3;
      if ( a1[4] == 7 )
        v63 = a1[87] + ((v63 - a1[87]) & 0xFFFFFFFC);
      v57 = v116 - 8 * v63;
      (*(void (**)(uint32_t, unsigned int))(*a1 + 4))(*a1, v63);
      v4 = a1[4] == 7;
      a1[16474] = 0;
      a1[16475] = (uint32_t)(uintptr_t)(v105);
      a1[16476] = 8;
      *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) = 0;
      a1[16478] = 0;
      if ( v4 )
      {
        v66 = (((v57 + 7) >> 3) + 14) & 0xFFFFFFFC;
        if ( v66 - 1 >= 0xEF00 )
          v66 = 61184;
        v67 = v66 & 0xFFFFFFFC;
        if ( (v66 & 0xFFFFFFFC) > 0xEF00 )
        {
          v91 = v66 & 0xFFFFFFFC;
          memmove(a1 + 90, v105, 0);
          a1[16474] = 0;
          a1[16475] = (uint32_t)(uintptr_t)(a1 + 90);
          v67 = v91;
        }
        v98 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v67);
        v68 = a1[16474];
        if ( v98 >> 2 != 0 )
        {
          v69 = 0;
          do
          {
            *(uint32_t *)((char *)&a1[v69 + 90] + v68) = __builtin_bswap32(*(uint32_t *)((char *)&a1[v69 + 90] + v68));
            ++v69;
          }
          while ( v69 != v98 >> 2 );
          v68 = a1[16474];
        }
        v62 = (uint32_t *)a1[16475];
        a1[16474] = v98 + v68;
      }
      else
      {
        v58 = 61184;
        v59 = (v57 + 7) >> 3;
        v60 = v59 + 10;
        v61 = v59 + 11;
        if ( v60 <= 0xEEFF )
          v58 = v61;
        v62 = a1 + 90;
        if ( v58 != 0 )
        {
          v64 = v58;
          if ( v58 > 0xEF00 )
          {
            v90 = v58;
            memmove(v105, v105, 0);
            a1[16474] = 0;
            a1[16475] = (uint32_t)(uintptr_t)(v105);
            v64 = v90;
          }
          v65 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v64);
          v62 = (uint32_t *)a1[16475];
          a1[16474] += v65;
        }
      }
      a1[16476] = 8;
      a1[16475] = (uint32_t)(uintptr_t)((char *)v62 + (v57 >> 3));
      block = mpc_bits_get_block(v103, v118);
    }
    v2 = a1[16482];
    if ( v2 == 0 )
    {
      v2 = v116;
      a1[16482] = v116;
      v3 = v116 >> 3;
      if ( a1[4] != 7 )
        goto LABEL_4;
LABEL_93:
      v3 = a1[87] + ((v3 - a1[87]) & 0xFFFFFFFC);
      goto LABEL_4;
    }
  }
  v3 = v2 >> 3;
  if ( a1[4] == 7 )
    goto LABEL_93;
LABEL_4:
  v113 = v2 - 8 * v3;
  (*(void (**)(uint32_t, unsigned int))(*a1 + 4))(*a1, v3);
  v4 = a1[4] == 7;
  a1[16474] = 0;
  v101 = v105;
  a1[16475] = (uint32_t)(uintptr_t)(v105);
  a1[16476] = 8;
  *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) = 0;
  a1[16478] = 0;
  if ( v4 )
  {
    v74 = (((v113 + 7) >> 3) + 23) & 0xFFFFFFFC;
    if ( v74 - 1 >= 0xEF00 )
      v74 = 61184;
    v75 = v74 & 0xFFFFFFFC;
    if ( (v74 & 0xFFFFFFFC) > 0xEF00 )
    {
      memmove(v105, v105, 0);
      a1[16474] = 0;
      a1[16475] = (uint32_t)(uintptr_t)(v105);
    }
    v111 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v75);
    v76 = a1[16474];
    if ( v111 >> 2 != 0 )
    {
      v77 = 0;
      do
      {
        *(uint32_t *)((char *)&a1[v77 + 90] + v76) = __builtin_bswap32(*(uint32_t *)((char *)&a1[v77 + 90] + v76));
        ++v77;
      }
      while ( v77 != v111 >> 2 );
      v76 = a1[16474];
    }
    a1[16474] = v111 + v76;
    v9 = (char *)a1[16475];
  }
  else
  {
    v5 = 61184;
    v6 = (v113 + 7) >> 3;
    v7 = v6 + 19;
    v8 = v6 + 20;
    if ( v7 <= 0xEEFF )
      v5 = v8;
    v9 = v105;
    if ( v5 != 0 )
    {
      if ( v5 > 0xEF00 )
      {
        memmove(v105, v105, 0);
        a1[16474] = 0;
        a1[16475] = (uint32_t)(uintptr_t)(v105);
      }
      a1[16474] += (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v5);
      v9 = (char *)a1[16475];
    }
  }
  a1[16475] = (uint32_t)(uintptr_t)(&v9[v113 >> 3]);
  v10 = 0;
  a1[16476] = 8 - (v113 & 7);
  v107 = mpc_bits_get_block(v103, v118);
  v114 = 0;
  while ( memcmp(v118, "CT", 2u) == 0 )
  {
    ++a1[16483];
    v17 = mpc_bits_get_size(v103, &v117) + 4;
    v10 = v118[1] + v10 - v17;
    v114 += v17 + v107;
    v18 = a1[16482] + 8 * (v10 + v114);
    v19 = v18 >> 3;
    if ( a1[4] == 7 )
      v19 = a1[87] + ((v19 - a1[87]) & 0xFFFFFFFC);
    v86 = v18 - 8 * v19;
    (*(void (**)(uint32_t, unsigned int))(*a1 + 4))(*a1, v19);
    v11 = v86;
    v4 = a1[4] == 7;
    a1[16475] = (uint32_t)(uintptr_t)(v105);
    a1[16474] = 0;
    a1[16476] = 8;
    *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) = 0;
    a1[16478] = 0;
    v12 = v86 + 7;
    if ( v4 )
    {
      v22 = ((v12 >> 3) + 23) & 0xFFFFFFFC;
      if ( v22 - 1 >= 0xEF00 )
        v22 = 61184;
      v23 = v22 & 0xFFFFFFFC;
      if ( (v22 & 0xFFFFFFFC) > 0xEF00 )
      {
        v95 = v22 & 0xFFFFFFFC;
        memmove(a1 + 90, v105, 0);
        a1[16474] = 0;
        a1[16475] = (uint32_t)(uintptr_t)(a1 + 90);
        v23 = v95;
        v11 = v86;
      }
      v88 = v11;
      v99 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v23);
      v24 = a1[16474];
      v11 = v88;
      v96 = (int)(uintptr_t)(a1) + v24 + 360;
      if ( v99 >> 2 != 0 )
      {
        v25 = 0;
        do
        {
          *(uint32_t *)(v96 + 4 * v25) = __builtin_bswap32(*(uint32_t *)(v96 + 4 * v25));
          ++v25;
        }
        while ( v25 != v99 >> 2 );
        v24 = a1[16474];
      }
      v16 = (char *)a1[16475];
      a1[16474] = v99 + v24;
    }
    else
    {
      v13 = v12 >> 3;
      v108 = v13 + 20;
      v14 = (unsigned int)(v13 + 19) <= 0xEEFF;
      v15 = 61184;
      if ( v14 )
        v15 = v108;
      v16 = v105;
      if ( v15 != 0 )
      {
        v20 = v15;
        if ( v15 > 0xEF00 )
        {
          v94 = v15;
          memmove(v105, v105, 0);
          a1[16474] = 0;
          a1[16475] = (uint32_t)(uintptr_t)(v105);
          v20 = v94;
          v11 = v86;
        }
        v87 = v11;
        v21 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v20);
        v16 = (char *)a1[16475];
        a1[16474] += v21;
        v11 = v87;
      }
    }
    a1[16475] = (uint32_t)(uintptr_t)(&v16[v11 >> 3]);
    a1[16476] = 8 - (v11 & 7);
    v107 = mpc_bits_get_block(v103, v118);
  }
  v26 = a1[16483];
  if ( v26 > 0 )
  {
    v27 = VoxAlloc_c(
            v10 + 20 * v26,
            (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/mpc/mpc_demux.c"),
            (int)(uintptr_t)("mpc_demux_chap_find"),
            370);
    a1[16484] = v27;
    v100 = (char *)(v27 + 20 * a1[16483]);
    v28 = a1[16482] >> 3;
    if ( a1[4] == 7 )
      v28 = a1[87] + ((v28 - a1[87]) & 0xFFFFFFFC);
    v29 = a1[16482] - 8 * v28;
    (*(void (**)(uint32_t, unsigned int))(*a1 + 4))(*a1, v28);
    a1[16474] = 0;
    a1[16475] = (uint32_t)(uintptr_t)(v105);
    a1[16476] = 8;
    *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) = 0;
    v30 = (v29 + 7) >> 3;
    v4 = a1[4] == 7;
    a1[16478] = 0;
    if ( v4 )
    {
      v81 = (v30 + 14) & 0xFFFFFFFC;
      if ( v81 - 1 >= 0xEF00 )
        v81 = 61184;
      v82 = v81 & 0xFFFFFFFC;
      if ( (v81 & 0xFFFFFFFC) > 0xEF00 )
      {
        v93 = v81 & 0xFFFFFFFC;
        memmove(a1 + 90, v105, 0);
        a1[16474] = 0;
        a1[16475] = (uint32_t)(uintptr_t)(a1 + 90);
        v82 = v93;
      }
      v112 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v82);
      v83 = a1[16474];
      if ( v112 >> 2 != 0 )
      {
        v84 = 0;
        do
        {
          *(uint32_t *)((char *)&a1[v84 + 90] + v83) = __builtin_bswap32(*(uint32_t *)((char *)&a1[v84 + 90] + v83));
          ++v84;
        }
        while ( v84 != v112 >> 2 );
        v83 = a1[16474];
      }
      v85 = (char *)a1[16475];
      a1[16474] = v112 + v83;
      v101 = v85;
    }
    else
    {
      v31 = v30 + 11;
      v14 = (unsigned int)(v30 + 10) <= 0xEEFF;
      v32 = 61184;
      if ( v14 )
        v32 = v31;
      if ( v32 != 0 )
      {
        v78 = v32;
        if ( v32 > 0xEF00 )
        {
          v92 = v32;
          memmove(v105, v105, 0);
          a1[16474] = 0;
          a1[16475] = (uint32_t)(uintptr_t)(v105);
          v78 = v92;
        }
        v79 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v78);
        v80 = (char *)a1[16475];
        a1[16474] += v79;
        v101 = v80;
      }
    }
    a1[16475] = (uint32_t)(uintptr_t)(&v101[v29 >> 3]);
    a1[16476] = 8 - (v29 & 7);
    v33 = mpc_bits_get_block(v103, v118);
    v115 = 0;
    while ( memcmp(v118, "CT", 2u) == 0 )
    {
      v102 = a1[16474];
      v47 = v102 + 352;
      v97 = a1[16476];
      v110 = (char *)a1[16475];
      v48 = (char *)a1 + v102 + 360 - v110 - ((unsigned int)(8 - v97) >> 3);
      v49 = v118[1] + 11;
      if ( (unsigned int)(v118[1] + 10) > 0xEEFF )
        v49 = 61184;
      if ( v48 < v49 )
      {
        v50 = v49 - v48;
        if ( v50 > 61184 - v102 )
        {
          if ( v97 == 0 )
          {
            ++v110;
            a1[16476] = 8;
            a1[16475] = (uint32_t)(uintptr_t)(v110);
          }
          v89 = v50;
          memmove(v105, v110, v48);
          a1[16474] = v48;
          a1[16475] = (uint32_t)(uintptr_t)(v105);
          v47 = v48 + 352;
          v50 = v89;
        }
        a1[16474] += (*(int (**)(uint32_t, size_t, unsigned int))*a1)(*a1, (size_t)a1 + v47 + 8, v50);
      }
      size = mpc_bits_get_size(v103, a1[16484] + v115);
      v35 = a1[16476] - 16;
      v109 = size + 4;
      v36 = v35 >> 3;
      v37 = v35 & 7;
      v38 = (uint8_t *)(a1[16475] - v36);
      a1[16476] = v37;
      a1[16475] = (uint32_t)(uintptr_t)(v38);
      v39 = (*v38 | (*(v38 - 1) << 8)) >> v37;
      if ( v37 != 0 )
        v39 |= (unsigned int)((*(v38 - 2) << 16) | (*(v38 - 3) << 24)) >> v37;
      *(uint16_t *)(a1[16484] + v115 + 8) = v39;
      v40 = a1[16476] - 16;
      v41 = v40 & 7;
      v42 = a1[16484] + v115;
      v43 = (uint8_t *)(a1[16475] - (v40 >> 3));
      a1[16476] = v41;
      a1[16475] = (uint32_t)(uintptr_t)(v43);
      v44 = (*v43 | (*(v43 - 1) << 8)) >> (v40 & 7);
      if ( v41 != 0 )
        v44 |= (unsigned int)((*(v43 - 2) << 16) | (*(v43 - 3) << 24)) >> v41;
      *(uint16_t *)(v42 + 10) = v44;
      memcpy(v100, (const void *)(a1[16475] + ((unsigned int)(8 - a1[16476]) >> 3)), v118[1] - v109);
      v45 = a1[16484];
      v46 = v118[1] - v109;
      a1[16475] += v118[1] - v109;
      *(uint32_t *)(v45 + v115 + 12) = v46;
      *(uint32_t *)(a1[16484] + v115 + 16) = (uint32_t)(uintptr_t)(v100);
      v100 += v46;
      v33 = mpc_bits_get_block(v103, v118);
      v115 += 20;
    }
    v107 = v33;
  }
  result = v107;
  a1[16475] -= v107;
  return result;
}

// ----------------------------------------------------------------------------
// Function: streaminfo_read_header_sv7  (binary VA: 0xfe4a80)
// Original: streaminfo_read_header_sv7
// ----------------------------------------------------------------------------
int streaminfo_read_header_sv7(int a1, uint8_t **a2)
{
  uint8_t *v2;
  int v3;
  uint8_t *v4;
  int v5;
  int v6;
  uint8_t *v7;
  int v8;
  uint8_t *v9;
  int v10;
  uint8_t *v11;
  uint8_t *v12;
  int v13;
  uint8_t *v14;
  int v15;
  float v16; // xmm1_4
  float v17; // xmm0_4
  const char *v18;
  float v19; // xmm0_4
  int v20;
  uint8_t *v21;
  uint8_t *v22;
  int v23;
  int v24;
  uint8_t *v25;
  int v26;
  uint8_t *v27;
  int v28;
  int v29;
  uint8_t *v30;
  int v31;
  uint8_t *v32;
  int v33;
  int v34;
  uint8_t *v35;
  int v36;
  uint8_t *v37;
  int v38;
  int v39;
  uint8_t *v40;
  int v41;
  uint8_t *v42;
  int v43;
  uint8_t *v44;
  uint8_t *v45;
  int v46;
  uint8_t *v47;
  int v48;
  int v49;
  uint8_t *v50;
  uint8_t *v51;
  int v52;
  uint8_t *v53;
  int v54;
  int v55;
  int v56;
  int16_t v57;
  int v58;
  double v59; // xmm1_8
  int v60;
  double v61; // xmm0_8
  int16_t v62;
  double v63; // xmm1_8
  int v64;
  double v65; // xmm0_8
  uint16_t v66;
  uint16_t v67;
  int v68;
  int v69;
  int64_t v70; // rax
  bool v71;
  long double v72; // fst7
  unsigned int v73;
  unsigned int v74;
  int result;
  int v76;
  unsigned int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;

  *(uint32_t *)(a1 + 12) = 0;
  v2 = *a2;
  v3 = (int)(uintptr_t)(a2[1] - 16);
  a2[1] = (uint8_t *)(v3 & 7);
  v4 = &v2[-(v3 >> 3)];
  v78 = v3 & 7;
  *a2 = v4;
  v5 = (*v4 | (*(v4 - 1) << 8)) >> (v3 & 7);
  if ( (v3 & 7) != 0 )
    v5 |= (unsigned int)((*(v4 - 2) << 16) | (*(v4 - 3) << 24)) >> v78;
  *a2 = v4 + 2;
  a2[1] = (uint8_t *)v78;
  v6 = (v4[2] | (v4[1] << 8)) >> v78;
  if ( v78 != 0 )
    v6 |= (unsigned int)((*v4 << 16) | (*(v4 - 1) << 24)) >> v78;
  v82 = (v5 << 16) | (uint16_t)v6;
  v7 = &v4[-((v78 - 1) >> 3) + 2 - (((((uint8_t)v78 - 1) & 7) - 1) >> 3)];
  v8 = ((((uint8_t)v78 - 1) & 7) - 1) & 7;
  *a2 = v7;
  a2[1] = (uint8_t *)v8;
  *(uint32_t *)(a1 + 28) = ((*v7 | (*(v7 - 1) << 8)) >> v8) & 1;
  v9 = *a2;
  v10 = (int)(uintptr_t)(a2[1] - 6);
  a2[1] = (uint8_t *)(v10 & 7);
  v11 = &v9[-(v10 >> 3)];
  *a2 = v11;
  *(uint32_t *)(a1 + 24) = ((*v11 | (*(v11 - 1) << 8)) >> (v10 & 7)) & 0x3F;
  v12 = *a2;
  v13 = (int)(uintptr_t)(a2[1] - 4);
  a2[1] = (uint8_t *)(v13 & 7);
  v14 = &v12[-(v13 >> 3)];
  *a2 = v14;
  v15 = ((*v14 | (*(v14 - 1) << 8)) >> (v13 & 7)) & 0xF;
  v16 = (float)v15;
  v17 = (float)HIWORD(v15) * 65536.0;
  v18 = "n.a.";
  v19 = v17 + v16;
  *(float *)(a1 + 332) = v19;
  if ( v19 < 16.0 )
    v18 = (const char *)(uintptr_t)off_2033E20[(int)v19];
  *(uint32_t *)(a1 + 336) = (uint32_t)(uintptr_t)(v18);
  v20 = (((*((uint8_t *)a2 + 4) - 2) & 7) - 2) & 7;
  v21 = &(*a2)[-((int)(uintptr_t)(a2[1] - 2) >> 3) - ((((*((uint8_t *)a2 + 4) - 2) & 7) - 2) >> 3)];
  a2[1] = (uint8_t *)v20;
  *a2 = v21;
  *(uint32_t *)a1 = *(&off_1CBE580 + (((*v21 | (*(v21 - 1) << 8)) >> v20) & 3));
  v22 = *a2;
  v23 = (int)(uintptr_t)(a2[1] - 16);
  v24 = v23 & 7;
  a2[1] = (uint8_t *)v24;
  v25 = &v22[-(v23 >> 3)];
  *a2 = v25 + 2;
  v26 = (v25[2] | (v25[1] << 8)) >> (v23 & 7);
  if ( v24 != 0 )
    v26 |= (unsigned int)((*v25 << 16) | (*(v25 - 1) << 24)) >> v24;
  *(uint16_t *)(a1 + 40) = v26;
  v27 = *a2;
  v28 = (int)(uintptr_t)(a2[1] - 16);
  v29 = v28 & 7;
  a2[1] = (uint8_t *)v29;
  v30 = &v27[-(v28 >> 3)];
  *a2 = v30;
  v31 = (*v30 | (*(v30 - 1) << 8)) >> (v28 & 7);
  if ( v29 != 0 )
    v31 |= (unsigned int)((*(v30 - 2) << 16) | (*(v30 - 3) << 24)) >> v29;
  *(uint16_t *)(a1 + 46) = v31;
  v32 = *a2;
  v33 = (int)(uintptr_t)(a2[1] - 16);
  v34 = v33 & 7;
  a2[1] = (uint8_t *)v34;
  v35 = &v32[-(v33 >> 3)];
  *a2 = v35;
  v36 = (*v35 | (*(v35 - 1) << 8)) >> (v33 & 7);
  if ( v34 != 0 )
    v36 |= (unsigned int)((*(v35 - 2) << 16) | (*(v35 - 3) << 24)) >> v34;
  *(uint16_t *)(a1 + 42) = v36;
  v37 = *a2;
  v38 = (int)(uintptr_t)(a2[1] - 16);
  v39 = v38 & 7;
  a2[1] = (uint8_t *)v39;
  v40 = &v37[-(v38 >> 3)];
  *a2 = v40;
  v41 = (*v40 | (*(v40 - 1) << 8)) >> (v38 & 7);
  if ( v39 != 0 )
    v41 |= (unsigned int)((*(v40 - 2) << 16) | (*(v40 - 3) << 24)) >> v39;
  *(uint16_t *)(a1 + 44) = v41;
  v42 = *a2;
  v43 = (int)(uintptr_t)(a2[1] - 1);
  a2[1] = (uint8_t *)(v43 & 7);
  v44 = &v42[-(v43 >> 3)];
  *a2 = v44;
  *(uint32_t *)(a1 + 48) = ((*v44 | (*(v44 - 1) << 8)) >> (v43 & 7)) & 1;
  v45 = *a2;
  v46 = (int)(uintptr_t)(a2[1] - 11);
  a2[1] = (uint8_t *)(v46 & 7);
  v47 = &v45[-(v46 >> 3)];
  v79 = v46 & 7;
  *a2 = v47;
  v48 = (*v47 | (*(v47 - 1) << 8)) >> (v46 & 7);
  if ( (unsigned int)(16 - v79) <= 0xA )
    v48 |= (unsigned int)((*(v47 - 2) << 16) | (*(v47 - 3) << 24)) >> v79;
  v80 = v48 & 0x7FF;
  v49 = (v79 - 1) & 7;
  a2[1] = (uint8_t *)v49;
  v50 = &v47[-((v79 - 1) >> 3)];
  *a2 = v50;
  *(uint32_t *)(a1 + 32) = ((*v50 | (*(v50 - 1) << 8)) >> v49) & 1;
  v51 = *a2;
  v52 = (int)(uintptr_t)(a2[1] - 19);
  LOBYTE(v49) = v52 & 7;
  a2[1] = (uint8_t *)(v52 & 7);
  v53 = &v51[-(v52 >> 3)];
  *a2 = v53 + 1;
  v54 = *v53;
  v55 = v53[1];
  *(uint32_t *)(a1 + 4) = 2;
  *(uint32_t *)(a1 + 36) = 0;
  v56 = v55 | (v54 << 8);
  v57 = *(uint16_t *)(a1 + 40);
  v58 = (uint8_t)(v56 >> v49);
  *(uint32_t *)(a1 + 68) = v58;
  if ( v57 != 0 )
  {
    v59 = (double)v57 * 0.01;
    LOWORD(v60) = 0;
    v61 = (64.82 - v59) * 256.0 + 0.5;
    if ( (unsigned int)(int)v61 <= 0xFFFF )
      v60 = (int)v61;
    *(uint16_t *)(a1 + 40) = v60;
  }
  v62 = *(uint16_t *)(a1 + 42);
  if ( v62 != 0 )
  {
    v63 = (double)v62 * 0.01;
    LOWORD(v64) = 0;
    v65 = (64.82 - v63) * 256.0 + 0.5;
    if ( (unsigned int)(int)v65 <= 0xFFFF )
      v64 = (int)v65;
    *(uint16_t *)(a1 + 42) = v64;
  }
  v66 = *(uint16_t *)(a1 + 46);
  if ( v66 != 0 )
    *(uint16_t *)(a1 + 46) = (int)(log10((double)v66) * 5120.0 + 0.5);
  v67 = *(uint16_t *)(a1 + 44);
  if ( v67 != 0 )
    *(uint16_t *)(a1 + 44) = (int)(log10((double)v67) * 5120.0 + 0.5);
  if ( *(uint32_t *)(a1 + 8) > 7u )
    goto LABEL_30;
  if ( v58 > 116 )
  {
    sprintf((char *)(a1 + 72), "%s %u.%u.%u", "--Stable--", 0, 0, 0);
    goto LABEL_31;
  }
  if ( v58 == 0 )
  {
LABEL_30:
    strcpy((char *)(a1 + 72), "Buschmann 1.7.0...9, Klemm 0.90...1.05");
    goto LABEL_31;
  }
  v76 = (int)((uint64_t)(1717986919LL * v58) >> 32) >> 2;
  v77 = v58 - 10 * v76;
  if ( v77 > 8 )
    goto LABEL_45;
  if ( ((1 << v77) & 0x154) != 0 )
  {
    sprintf(
      (char *)(a1 + 72),
      "Beta %u.%02u",
      (int)((uint64_t)(1374389535LL * v58) >> 32) >> 5,
      v58 - 100 * ((int)((uint64_t)(1374389535LL * v58) >> 32) >> 5));
  }
  else
  {
    if ( ((1 << v77) & 1) == 0 )
    {
LABEL_45:
      sprintf(
        (char *)(a1 + 72),
        "--Alpha-- %u.%02u",
        (int)((uint64_t)(1374389535LL * v58) >> 32) >> 5,
        v58 - 100 * ((int)((uint64_t)(1374389535LL * v58) >> 32) >> 5));
      goto LABEL_31;
    }
    sprintf((char *)(a1 + 72), "Release %u.%u", (int)((uint64_t)(1374389535LL * v58) >> 32) >> 5, v76 % 10);
  }
LABEL_31:
  v68 = v80;
  v69 = *(uint32_t *)(a1 + 48);
  if ( v80 == 0 )
    v68 = 1152;
  v81 = v68;
  v70 = 1152LL * (unsigned int)v82;
  *(uint64_t *)(a1 + 52) = v70;
  if ( v69 != 0 )
  {
    v71 = (unsigned int)v70 < 1152 - v81;
    LODWORD(v70) = v70 - (1152 - v81);
    *(uint32_t *)(a1 + 52) = v70;
    HIDWORD(v70) -= v71;
  }
  else
  {
    v71 = __CFADD__((uint32_t)v70, -481);
    LODWORD(v70) = v70 - 481;
    *(uint32_t *)(a1 + 52) = v70;
    HIDWORD(v70) = v71 + HIDWORD(v70) - 1;
  }
  *(uint32_t *)(a1 + 56) = HIDWORD(v70);
  v72 = (long double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v70), _mm_cvtsi32_si128(HIDWORD(v70))), 0);
  if ( v70 < 0 )
    v72 = v72 + 1.8446744e19f;
  v73 = *(uint32_t *)(a1 + 24) - 1;
  v74 = *(uint32_t *)(a1 + 4);
  result = -1;
  *(double *)(a1 + 16) = (double)*(unsigned int *)a1
                       * 8.0
                       * (double)(*(uint32_t *)(a1 + 344) - *(uint32_t *)(a1 + 340))
                       / (double)v72;
  if ( v73 <= 0x1E )
    return -(v74 >= 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: streaminfo_gain  (binary VA: 0xfe51e0)
// Original: streaminfo_gain
// ----------------------------------------------------------------------------
uint8_t * streaminfo_gain(uint16_t *a1, uint32_t *a2)
{
  int v2;
  int v3;
  uint8_t *result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = a2[1] - 8;
  v3 = v2 & 7;
  result = (uint8_t *)(*a2 - (v2 >> 3));
  v5 = *result;
  if ( (uint8_t)((v5 | (*(result - 1) << 8)) >> (v2 & 7)) == 1 )
  {
    v6 = (result[2] | (result[1] << 8)) >> v3;
    if ( v3 != 0 )
      v6 |= (unsigned int)((v5 << 16) | (*(result - 1) << 24)) >> v3;
    a1[20] = v6;
    v7 = (result[4] | (result[3] << 8)) >> v3;
    if ( v3 != 0 )
      v7 |= (unsigned int)((result[2] << 16) | (result[1] << 24)) >> v3;
    a1[23] = v7;
    v8 = (result[6] | (result[5] << 8)) >> v3;
    if ( v3 != 0 )
      v8 |= (unsigned int)((result[4] << 16) | (result[3] << 24)) >> v3;
    a1[21] = v8;
    v9 = (result[8] | (result[7] << 8)) >> v3;
    if ( v3 != 0 )
      v9 |= (unsigned int)((result[6] << 16) | (result[5] << 24)) >> v3;
    a1[22] = v9;
    return (uint8_t *)a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: streaminfo_read_header_sv8  (binary VA: 0xfe5300)
// Original: streaminfo_read_header_sv8
// ----------------------------------------------------------------------------
int streaminfo_read_header_sv8(int a1, int *a2, int a3)
{
  int v3;
  int v4;
  uint8_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint8_t *v13;
  int v14;
  uint8_t *v15;
  unsigned int v16;
  int v17;
  uint8_t *v18;
  int v19;
  int v20;
  int v21;
  uint8_t *v22;
  int v23;
  uint8_t *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  long double v32; // fst7
  typedef int _g4_t_v34;
  typedef int64_t _g4_t_v35;
  typedef int64_t _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef uint8_t *_g4_t_v39;
  typedef int _g4_t_v40;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v34)) > _g4_s0 ? (0u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v35)) > _g4_s1 ? (0u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v36)) > _g4_s2 ? (8u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v37)) > _g4_s3 ? (16u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v38)) > _g4_s4 ? (20u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v39)) > _g4_s5 ? (40u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v40)) > _g4_s6 ? (44u + sizeof(_g4_t_v40)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);

  v3 = *a2;
  v40 = a2[1];
  v4 = (v40 - 16) & 7;
  v5 = (uint8_t *)(v3 - ((v40 - 16) >> 3));
  v40 = v4;
  v39 = v5;
  v6 = (*v5 | (*(v5 - 1) << 8)) >> v4;
  if ( v4 != 0 )
    v6 |= (unsigned int)((*(v5 - 2) << 16) | (*(v5 - 3) << 24)) >> v4;
  v40 = v4;
  v34 = v6 << 16;
  v39 = v5 + 2;
  v7 = (v5[2] | (v5[1] << 8)) >> v4;
  if ( v4 != 0 )
    v7 |= (unsigned int)((*v5 << 16) | (*(v5 - 1) << 24)) >> v4;
  v8 = v34 | (uint16_t)v7;
  v9 = crc32mpc(v5 + 3, a3 - 4);
  v10 = -1;
  if ( v9 != v8 )
    return v10;
  v11 = (v40 - 8) >> 3;
  v40 = (v40 - 8) & 7;
  v39 -= v11;
  v10 = -6;
  v12 = (uint8_t)((*v39 | (*(v39 - 1) << 8)) >> v40);
  *(uint32_t *)(a1 + 8) = v12;
  if ( v12 != 8 )
    return v10;
  mpc_bits_get_size(&v39, a1 + 52);
  mpc_bits_get_size(&v39, a1 + 60);
  v13 = v39;
  v14 = v40 - 3;
  *(uint32_t *)(a1 + 48) = 1;
  v40 = v14 & 7;
  v15 = &v13[-(v14 >> 3)];
  v39 = v15;
  v16 = (unsigned int)*(&off_1CBE580 + (((*v15 | (*(v15 - 1) << 8)) >> (v14 & 7)) & 7));
  *(uint32_t *)a1 = v16;
  v37 = v16;
  v17 = (v14 & 7) - 5;
  v40 = v17 & 7;
  v18 = &v15[-(v17 >> 3)];
  v39 = v18;
  v19 = ((*v18 | (*(v18 - 1) << 8)) >> (v17 & 7)) & 0x1F;
  *(uint32_t *)(a1 + 24) = v19 + 1;
  v20 = (v17 & 7) - 4;
  v21 = v20 & 7;
  v40 = v21;
  v22 = &v18[-(v20 >> 3)];
  v39 = v22;
  v23 = (((*v22 | (*(v22 - 1) << 8)) >> (v20 & 7)) & 0xF) + 1;
  *(uint32_t *)(a1 + 4) = v23;
  v38 = v23;
  v40 = (v21 - 1) & 7;
  v24 = &v22[-((v21 - 1) >> 3)];
  v39 = v24;
  v25 = v40 - 3;
  *(uint32_t *)(a1 + 28) = ((*v24 | (*(v24 - 1) << 8)) >> v40) & 1;
  v26 = v25 >> 3;
  v27 = v25 & 7;
  v40 = v27;
  v39 = &v24[-v26];
  v28 = v24[-v26 - 1] << 8;
  v29 = *v39;
  *(uint32_t *)(a1 + 12) = 0;
  v30 = v29 | v28;
  v31 = *(uint32_t *)(a1 + 56);
  *(uint32_t *)(a1 + 36) = 2 * ((v30 >> v27) & 7);
  LODWORD(v35) = *(uint32_t *)(a1 + 52);
  HIDWORD(v35) = v31;
  v36 = *(uint64_t *)(a1 + 60);
  if ( v36 != __PAIR64__(v31, v35) )
  {
    v32 = (long double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(
                         _mm_cvtsi32_si128((int)v35 - (int)v36),
                         _mm_cvtsi32_si128((uint64_t)(v35 - v36) >> 32)), 0);
    if ( (((uint64_t)(v35 - v36) >> 32) & 0x80000000) != 0LL )
      v32 = v32 + 1.8446744e19f;
    *(double *)(a1 + 16) = (double)(*(uint32_t *)(a1 + 344) - *(uint32_t *)(a1 + 340)) * 8.0 * (double)v37 / (double)v32;
  }
  v10 = -1;
  if ( v19 != 31 )
    return -(v38 >= 3);
  else
    return v10;
}

// ----------------------------------------------------------------------------
// Function: streaminfo_encoder_info  (binary VA: 0xfe5600)
// Original: streaminfo_encoder_info
// ----------------------------------------------------------------------------
int streaminfo_encoder_info(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  uint8_t *v4;
  double v5; // xmm0_8
  const char *v6;
  float v7; // xmm0_4
  int v8;
  char v9;
  uint8_t *v10;
  int v11;
  int v12;
  int v13;
  int result;
  unsigned int v15;
  bool v16; // cc
  int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  const char *v23;

  v2 = a2[1] - 7;
  v3 = v2 & 7;
  v4 = (uint8_t *)(*a2 - (v2 >> 3));
  v5 = (double)(((*v4 | (*(v4 - 1) << 8)) >> (v2 & 7)) & 0x7F);
  v6 = "n.a.";
  v7 = v5 * 0.125;
  *(float *)(a1 + 332) = v7;
  if ( v7 < 16.0 )
    v6 = (const char *)(uintptr_t)off_2033E20[(int)v7];
  *(uint32_t *)(a1 + 336) = (uint32_t)(uintptr_t)(v6);
  v8 = v3 - 1;
  v9 = (v3 - 1) & 7;
  v10 = &v4[-(v8 >> 3)];
  *(uint8_t *)(a1 + 328) = ((*v10 | (*(v10 - 1) << 8)) >> v9) & 1;
  v11 = (v10[1] | (*v10 << 8)) >> v9 << 24;
  *(uint32_t *)(a1 + 68) = v11;
  v12 = v11 | ((uint8_t)((v10[2] | (v10[1] << 8)) >> v9) << 16);
  *(uint32_t *)(a1 + 68) = v12;
  v13 = v10[2] << 8;
  result = v10[3];
  v15 = v12 | ((uint8_t)((result | v13) >> v9) << 8);
  v16 = *(uint32_t *)(a1 + 8) <= 7u;
  *(uint32_t *)(a1 + 68) = v15;
  v17 = v15;
  if ( !v16 )
  {
    result = 100 * HIBYTE(v15);
    v17 = result + BYTE2(v15);
  }
  if ( v17 > 116 )
  {
    v19 = v15;
    v20 = HIWORD(v15);
    v21 = BYTE1(v15);
    v22 = HIBYTE(v19);
    v23 = "--Unstable--";
    if ( (v20 & 1) == 0 )
      v23 = "--Stable--";
    return sprintf((char *)(a1 + 72), "%s %u.%u.%u", v23, v22, (uint8_t)v20, v21);
  }
  else if ( v17 != 0 )
  {
    v18 = v17 % 10;
    if ( (unsigned int)(v17 % 10) > 8 )
      return sprintf((char *)(a1 + 72), "--Alpha-- %u.%02u", v17 / 100, v17 % 100);
    if ( ((1 << v18) & 0x154) == 0 )
    {
      if ( ((1 << v18) & 1) != 0 )
        return sprintf((char *)(a1 + 72), "Release %u.%u", v17 / 100, v17 / 10 % 10);
      return sprintf((char *)(a1 + 72), "--Alpha-- %u.%02u", v17 / 100, v17 % 100);
    }
    return sprintf((char *)(a1 + 72), "Beta %u.%02u", v17 / 100, v17 % 100);
  }
  else
  {
    strcpy((char *)(a1 + 72), "Buschmann 1.7.0...9, Klemm 0.90...1.05");
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FE5CB0  (binary VA: 0xfe5cb0)
// Original: sub_FE5CB0
// ----------------------------------------------------------------------------
uint32_t ** sub_FE5CB0(uint32_t **result)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  void *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t **v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;

  v1 = *result;
  v17 = result;
  if ( *result != nullptr )
  {
    v2 = (uint32_t *)v1[2];
    if ( v2 == nullptr )
      return (uint32_t **)VoxFreeInternal(v1);
    v3 = (uint32_t *)v2[2];
    if ( v3 == nullptr )
      goto LABEL_25;
    v4 = (uint32_t *)v3[2];
    if ( v4 == nullptr )
      goto LABEL_23;
    v5 = (uint32_t *)v4[2];
    if ( v5 == nullptr )
      goto LABEL_21;
    v6 = (uint32_t *)v5[2];
    v18 = v6;
    if ( v6 == nullptr )
      goto LABEL_19;
    v7 = (uint32_t *)v6[2];
    v19 = v7;
    if ( v7 == nullptr )
      goto LABEL_17;
    v8 = (uint32_t *)v7[2];
    v20 = v8;
    if ( v8 == nullptr )
      goto LABEL_15;
    if ( v8[2] == 0 )
      goto LABEL_13;
    v10 = (uint32_t *)v3[2];
    v14 = (uint32_t *)v4[2];
    sub_FE5CB0();
    v4 = v10;
    v5 = v14;
    v9 = (void *)v20[2];
    if ( v9 != nullptr )
    {
      VoxFreeInternal(v9);
      v5 = v14;
      v4 = v10;
    }
    v20 = (uint32_t *)v19[2];
    if ( v20 != nullptr )
    {
LABEL_13:
      v11 = v4;
      v15 = v5;
      VoxFreeInternal(v20);
      v5 = v15;
      v4 = v11;
    }
    v19 = (uint32_t *)v18[2];
    if ( v19 != nullptr )
    {
LABEL_15:
      v12 = v4;
      v16 = v5;
      VoxFreeInternal(v19);
      v5 = v16;
      v4 = v12;
    }
    v18 = (uint32_t *)v5[2];
    if ( v18 != nullptr )
    {
LABEL_17:
      v13 = v4;
      VoxFreeInternal(v18);
      v4 = v13;
    }
    v5 = (uint32_t *)v4[2];
    if ( v5 != nullptr )
LABEL_19:
      VoxFreeInternal(v5);
    v4 = (uint32_t *)v3[2];
    if ( v4 != nullptr )
LABEL_21:
      VoxFreeInternal(v4);
    v3 = (uint32_t *)v2[2];
    if ( v3 != nullptr )
LABEL_23:
      VoxFreeInternal(v3);
    v2 = (uint32_t *)v1[2];
    if ( v2 != nullptr )
LABEL_25:
      VoxFreeInternal(v2);
    result = v17;
    v1 = *v17;
    if ( *v17 != nullptr )
      return (uint32_t **)VoxFreeInternal(v1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: fgetc  (binary VA: 0xfe9de0)
// Original: fgetc
// ----------------------------------------------------------------------------
int fgetc(vox::StreamCursorInterface::Self *a1)
{
  int v1;
  typedef vox::VoxThread::Self *_g4_t_v3;
  typedef uint8_t _g4_t_v4[13];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v4)) > _g4_s1 ? (31u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 31u);

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( a1 != nullptr )
  {
    G4_VCALL<void>(a1, 28, v4, 1);
    v1 = v4[0];
  }
  else
  {
    v1 = -1;
  }
  sub_BA06B0();
  return v1;
}

// ----------------------------------------------------------------------------
// Function: fread  (binary VA: 0xfe9e70)
// Original: fread
// ----------------------------------------------------------------------------
unsigned int fread(void *a1, unsigned int a2, unsigned int a3, vox::StreamCursorInterface::Self *a4)
{
  unsigned int v4;
  vox::VoxThread::Self *v6;
  unsigned int v7;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v4 = 0;
  if ( a4 != nullptr )
    v4 = G4_VCALL<int>(a4, 28, a1, a3 * a2)
       / a2;
  v7 = v4;
  sub_BA06B0();
  return v7;
}

// ----------------------------------------------------------------------------
// Function: ftell  (binary VA: 0xfe9f00)
// Original: ftell
// ----------------------------------------------------------------------------
int ftell(vox::StreamCursorInterface::Self *a1)
{
  int CurThreadId;
  int v2;
  vox::VoxThread::Self *v4;

  CurThreadId = vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( a1 != nullptr )
    v2 = G4_VCALL<int>(a1, 24, CurThreadId);
  else
    v2 = -1;
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: fseek  (binary VA: 0xfe9f80)
// Original: fseek
// ----------------------------------------------------------------------------
int fseek(vox::StreamCursorInterface::Self *a1, int a2, int a3)
{
  int v3;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( a1 != nullptr )
  {
    v3 = 0;
    G4_VCALL<void>(a1, 16, a2, a3);
  }
  else
  {
    v3 = -1;
  }
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: fclose  (binary VA: 0xfea010)
// Original: fclose
// ----------------------------------------------------------------------------
int fclose()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_basic_string_char_char_t_fd25b5::M_erase  (binary VA: 0xfef9a0)
// Original: std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>>,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>>::_M_erase
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_basic_string_char_char_t_fd25b5::M_erase(int a1, uint32_t *a2)
{
  uint32_t *result;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;

  result = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v24 = (uint32_t *)result[3];
      if ( v24 != nullptr )
      {
        while ( 1 )
        {
          v25 = (uint32_t *)v24[3];
          if ( v25 != nullptr )
          {
            while ( 1 )
            {
              v26 = (uint32_t *)v25[3];
              if ( v26 != nullptr )
              {
                while ( 1 )
                {
                  v27 = (uint32_t *)v26[3];
                  if ( v27 != nullptr )
                  {
                    while ( 1 )
                    {
                      v28 = (uint32_t *)v27[3];
                      if ( v28 != nullptr )
                      {
                        while ( 1 )
                        {
                          v23 = (uint32_t *)v28[3];
                          if ( v23 != nullptr )
                          {
                            while ( 1 )
                            {
                              v22 = (uint32_t *)v23[3];
                              if ( v22 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v3 = v22[3];
                                  if ( v3 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_basic_string_char_char_t_fd25b5::M_erase(
                                        a1,
                                        *(void **)(v3 + 12));
                                      v4 = *(uint32_t *)(v3 + 16);
                                      v5 = *(uint32_t *)(v3 + 8);
                                      if ( (void *)(v4 - 12) != (void *)g4_empty_string_rep
                                        && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        VoxFreeInternal((void *)(v4 - 12));
                                      }
                                      VoxFreeInternal((void *)v3);
                                      if ( v5 == 0 )
                                        break;
                                      v3 = v5;
                                    }
                                  }
                                  v6 = (uint32_t *)v22[2];
                                  v7 = v22[4];
                                  if ( (void *)(v7 - 12) != (void *)g4_empty_string_rep
                                    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    VoxFreeInternal((void *)(v7 - 12));
                                  }
                                  VoxFreeInternal(v22);
                                  if ( v6 == nullptr )
                                    break;
                                  v22 = v6;
                                }
                              }
                              v8 = v23[4];
                              v9 = (uint32_t *)v23[2];
                              if ( (void *)(v8 - 12) != (void *)g4_empty_string_rep
                                && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                VoxFreeInternal((void *)(v8 - 12));
                              }
                              VoxFreeInternal(v23);
                              if ( v9 == nullptr )
                                break;
                              v23 = v9;
                            }
                          }
                          v10 = v28[4];
                          v11 = (uint32_t *)v28[2];
                          if ( (void *)(v10 - 12) != (void *)g4_empty_string_rep
                            && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            VoxFreeInternal((void *)(v10 - 12));
                          }
                          VoxFreeInternal(v28);
                          if ( v11 == nullptr )
                            break;
                          v28 = v11;
                        }
                      }
                      v12 = v27[4];
                      v13 = (uint32_t *)v27[2];
                      if ( (void *)(v12 - 12) != (void *)g4_empty_string_rep
                        && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        VoxFreeInternal((void *)(v12 - 12));
                      }
                      VoxFreeInternal(v27);
                      if ( v13 == nullptr )
                        break;
                      v27 = v13;
                    }
                  }
                  v16 = v26[4];
                  v17 = (uint32_t *)v26[2];
                  if ( (void *)(v16 - 12) != (void *)g4_empty_string_rep
                    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    VoxFreeInternal((void *)(v16 - 12));
                  }
                  VoxFreeInternal(v26);
                  if ( v17 == nullptr )
                    break;
                  v26 = v17;
                }
              }
              v18 = v25[4];
              v19 = (uint32_t *)v25[2];
              if ( (void *)(v18 - 12) != (void *)g4_empty_string_rep
                && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
              {
                VoxFreeInternal((void *)(v18 - 12));
              }
              VoxFreeInternal(v25);
              if ( v19 == nullptr )
                break;
              v25 = v19;
            }
          }
          v14 = v24[4];
          v15 = (uint32_t *)v24[2];
          if ( (void *)(v14 - 12) != (void *)g4_empty_string_rep
            && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
          {
            VoxFreeInternal((void *)(v14 - 12));
          }
          VoxFreeInternal(v24);
          if ( v15 == nullptr )
            break;
          v24 = v15;
        }
      }
      v20 = a2[4];
      v21 = (uint32_t *)a2[2];
      if ( (void *)(v20 - 12) != (void *)g4_empty_string_rep
        && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
      {
        VoxFreeInternal((void *)(v20 - 12));
      }
      result = (uint32_t *)VoxFreeInternal(a2);
      if ( v21 == nullptr )
        break;
      a2 = v21;
      result = v21;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_basic_string_char_char_t_fd25b5::M_insert_unique  (binary VA: 0xfefd30)
// Original: std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>>,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_basic_string_char_char_t_fd25b5::M_insert_unique(int a1, uint32_t *a2, int a3)
{
  int v3;
  size_t v4;
  int v5;
  uint32_t *v6;
  size_t v7;
  size_t n;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  size_t v12;
  uint32_t *s1;
  int v14;
  int v15;
  size_t v17;
  size_t v18;
  size_t v19;
  int v20;
  int v21;
  int v22;
  uint8_t *v23;
  size_t v24;
  size_t v25;
  int v26;
  int v27;
  int v28;
  volatile int32_t *v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  int v37;
  size_t v38;
  size_t v39;
  size_t v40;
  size_t v41;
  size_t v42;
  int v43;
  int v44;
  int v45;
  int v46;
  unsigned int v47;
  int v48;
  char v49;
  int v50;
  char v51;
  char v52;
  void *dest;
  void *desta;
  void *destb;
  uint32_t *v56;

  v56 = a2 + 1;
  if ( a2[2] == 0 )
  {
    v11 = a2 + 1;
    goto LABEL_18;
  }
  v3 = a2[2];
  dest = *(void **)a3;
  v4 = *(uint32_t *)(*(uint32_t *)a3 - 12);
  while ( 1 )
  {
    v6 = *(uint32_t **)(v3 + 16);
    v7 = *(v6 - 3);
    n = v7;
    v43 = v3;
    if ( v4 <= v7 )
      n = v4;
    v38 = n;
    v9 = memcmp(dest, *(const void **)(v3 + 16), n);
    if ( v9 == 0 )
      v9 = v4 - v7;
    if ( v9 >= 0 )
      break;
    v5 = *(uint32_t *)(v43 + 8);
    v49 = 1;
    if ( v5 == 0 )
      goto LABEL_11;
LABEL_4:
    v3 = v5;
  }
  v5 = *(uint32_t *)(v43 + 12);
  v49 = 0;
  if ( v5 != 0 )
    goto LABEL_4;
LABEL_11:
  v10 = v6;
  v11 = (uint32_t *)v43;
  v12 = v38;
  s1 = v10;
  if ( v49 == 0 )
  {
    v50 = v43;
    goto LABEL_13;
  }
LABEL_18:
  if ( v11 == (uint32_t *)a2[3] )
  {
    v51 = 1;
    if ( v11 != v56 )
    {
      v17 = *(uint32_t *)(*(uint32_t *)a3 - 12);
      v18 = *(uint32_t *)(v11[4] - 12);
      v19 = v17;
      if ( v18 <= v17 )
        v19 = *(uint32_t *)(v11[4] - 12);
      v20 = v17 - v18;
      v21 = memcmp(*(const void **)a3, (const void *)v11[4], v19);
      if ( v21 == 0 )
        v21 = v20;
      v51 = v21 < 0;
    }
    v22 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v22 != -16 )
    {
      v23 = *(uint8_t **)a3;
      if ( *(int *)(*(uint32_t *)a3 - 4) < 0 )
      {
        v34 = *((uint32_t *)v23 - 3);
        v41 = *((uint32_t *)v23 - 2);
        if ( v34 > 0x3FFFFFFC )
          goto LABEL_76;
        if ( v34 > v41 && v34 < 2 * v41 )
          v34 = 2 * v41;
        if ( v34 + 29 > 0x1000 && v41 < v34 )
        {
          v35 = v34 + 4096 - (((uint16_t)v34 + 29) & 0xFFF);
          v34 = 1073741820;
          if ( v35 <= 0x3FFFFFFC )
            v34 = v35;
        }
        v48 = v22;
        v36 = VoxAllocInternal(
                v34 + 13,
                0,
                (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                (int)(uintptr_t)("internal_new"),
                181);
        *(uint32_t *)(v36 + 4) = v34;
        *(uint32_t *)(v36 + 8) = 0;
        v42 = *((uint32_t *)v23 - 3);
        v37 = 0;
        v22 = v48;
        destb = (void *)(v36 + 12);
        if ( v42 != 0 )
        {
          if ( v42 == 1 )
          {
            *(uint8_t *)(v36 + 12) = *v23;
            v37 = *((uint32_t *)v23 - 3);
          }
          else
          {
            v45 = v36;
            memcpy(destb, v23, v42);
            v37 = *((uint32_t *)v23 - 3);
            v22 = v48;
            v36 = v45;
          }
        }
        if ( (void *)v36 != (void *)g4_empty_string_rep )
        {
          *(uint32_t *)(v36 + 8) = 0;
          *(uint32_t *)v36 = v37;
          *(uint8_t *)(v36 + v37 + 12) = 0;
        }
        v23 = (uint8_t *)(destb);
      }
      else if ( v23 - 12 != (uint8_t *)(void *)g4_empty_string_rep )
      {
        __sync_add_and_fetch((volatile int32_t *)v23 - 1, 1u);
      }
      *(uint32_t *)(v22 + 16) = (uint32_t)(uintptr_t)(v23);
      *(uint32_t *)(v22 + 20) = *(uint32_t *)(a3 + 4);
    }
    v46 = v22;
    sub_1904970(v51, v22, v11, v56);
    ++a2[5];
    *(uint32_t *)a1 = v46;
    *(uint8_t *)(a1 + 4) = 1;
    return a1;
  }
  v50 = sub_19048F0(v11);
  dest = *(void **)a3;
  v4 = *(uint32_t *)(*(uint32_t *)a3 - 12);
  s1 = *(uint32_t **)(v50 + 16);
  v7 = *(s1 - 3);
  v12 = v7;
  if ( v4 <= v7 )
    v12 = *((uint32_t *)dest - 3);
LABEL_13:
  v14 = memcmp(s1, dest, v12);
  v15 = v7 - v4;
  if ( v14 == 0 )
    v14 = v15;
  if ( v14 >= 0 )
  {
    *(uint32_t *)a1 = v50;
    *(uint8_t *)(a1 + 4) = 0;
    return a1;
  }
  v52 = 1;
  if ( v11 != v56 )
  {
    v24 = *(uint32_t *)(v11[4] - 12);
    v25 = v24;
    if ( v4 <= v24 )
      v25 = v4;
    v26 = v4 - v24;
    v27 = memcmp(dest, (const void *)v11[4], v25);
    if ( v27 == 0 )
      v27 = v26;
    v52 = v27 < 0;
  }
  v28 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  if ( v28 == -16 )
    goto LABEL_45;
  v29 = *(volatile int32_t **)a3;
  if ( *(int *)(*(uint32_t *)a3 - 4) >= 0 )
  {
    if ( v29 - 3 != (volatile int32_t *)(void *)g4_empty_string_rep )
      __sync_add_and_fetch(v29 - 1, 1u);
    goto LABEL_44;
  }
  v30 = *((uint32_t *)v29 - 3);
  v39 = *((uint32_t *)v29 - 2);
  if ( v30 > 0x3FFFFFFC )
LABEL_76:
    sub_1900180("basic_string::_S_create");
  if ( v30 > v39 && v30 < 2 * v39 )
    v30 = 2 * v39;
  if ( v30 + 29 > 0x1000 && v39 < v30 )
  {
    v31 = v30 + 4096 - (((uint16_t)v30 + 29) & 0xFFF);
    v30 = 1073741820;
    if ( v31 <= 0x3FFFFFFC )
      v30 = v31;
  }
  v47 = v30;
  v32 = VoxAllocInternal(v30 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  *(uint32_t *)(v32 + 4) = v47;
  *(uint32_t *)(v32 + 8) = 0;
  v33 = 0;
  v40 = *((uint32_t *)v29 - 3);
  desta = (void *)(v32 + 12);
  if ( v40 != 0 )
  {
    if ( v40 == 1 )
    {
      *(uint8_t *)(v32 + 12) = *(uint8_t *)v29;
      v33 = *((uint32_t *)v29 - 3);
    }
    else
    {
      v44 = v32;
      memcpy(desta, (const void *)v29, v40);
      v33 = *((uint32_t *)v29 - 3);
      v32 = v44;
    }
  }
  if ( (void *)v32 != (void *)g4_empty_string_rep )
  {
    *(uint32_t *)(v32 + 8) = 0;
    *(uint32_t *)v32 = v33;
    *(uint8_t *)(v32 + v33 + 12) = 0;
  }
  v29 = (volatile int32_t *)desta;
LABEL_44:
  *(uint32_t *)(v28 + 16) = (uint32_t)(uintptr_t)(v29);
  *(uint32_t *)(v28 + 20) = *(uint32_t *)(a3 + 4);
LABEL_45:
  sub_1904970(v52, v28, v11, v56);
  ++a2[5];
  *(uint32_t *)a1 = v28;
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_basic_string_char_char_t_fd25b5::M_insert_unique  (binary VA: 0xff0270)
// Original: std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>>,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_basic_string_char_char_t_fd25b5::M_insert_unique(int *a1, uint32_t *a2, int a3, int a4)
{
  uint32_t *s1;
  const void *s2;
  size_t v6;
  size_t n;
  int v8;
  int v9;
  int v10;
  size_t v11;
  size_t v12;
  int v13;
  int v14;
  volatile int32_t *v15;
  int v17;
  int v18;
  size_t v19;
  size_t v20;
  int v21;
  int v22;
  uint8_t *v23;
  uint32_t *v24;
  const void *v25;
  size_t v26;
  size_t v27;
  int v28;
  int v29;
  int v30;
  uint8_t *v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  size_t v36;
  int v37;
  volatile int32_t *v38;
  int v39;
  int v40;
  uint8_t *v41;
  size_t v42;
  uint8_t *v43;
  uint32_t *v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  int v48;
  size_t v49;
  int v50;
  uint8_t *v51;
  size_t v52;
  int v53;
  int v54;
  int v55;
  int v56;
  uint32_t *v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  int v61;
  size_t v62;
  int v63;
  uint8_t *v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  size_t v69;
  int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  int v74;
  size_t v75;
  int v76;
  uint8_t *v77;
  unsigned int v78;
  unsigned int v79;
  int v80;
  int v81;
  int v82;
  unsigned int v83;
  unsigned int v84;
  int v85;
  int v86;
  typedef size_t _g4_t_v87;
  typedef const void *_g4_t_v88;
  typedef size_t _g4_t_v89;
  typedef size_t _g4_t_v90;
  typedef size_t _g4_t_v91;
  typedef size_t _g4_t_v92;
  typedef size_t _g4_t_v93;
  typedef size_t _g4_t_v94;
  typedef uint8_t *_g4_t_v95;
  typedef uint8_t *_g4_t_v96;
  typedef size_t _g4_t_v97;
  typedef int _g4_t_v98;
  typedef unsigned int _g4_t_v99;
  typedef size_t _g4_t_v100;
  typedef size_t _g4_t_v101;
  typedef char _g4_t_v102;
  typedef signed int _g4_t_v103;
  typedef size_t _g4_t_v104;
  typedef uint32_t *_g4_t_dest;
  typedef char _g4_t_desta;
  typedef void *_g4_t_destb;
  typedef uint32_t *_g4_t_v108;
  typedef size_t _g4_t_v109;
  typedef size_t _g4_t_v110;
  typedef size_t _g4_t_v111;
  typedef size_t _g4_t_v112;
  typedef size_t _g4_t_v113;
  typedef uint32_t *_g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v87)) > _g4_s0 ? (8u + sizeof(_g4_t_v87)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v88)) > _g4_s1 ? (8u + sizeof(_g4_t_v88)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v89)) > _g4_s2 ? (8u + sizeof(_g4_t_v89)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v90)) > _g4_s3 ? (8u + sizeof(_g4_t_v90)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v91)) > _g4_s4 ? (8u + sizeof(_g4_t_v91)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v92)) > _g4_s5 ? (8u + sizeof(_g4_t_v92)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v93)) > _g4_s6 ? (8u + sizeof(_g4_t_v93)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v94)) > _g4_s7 ? (8u + sizeof(_g4_t_v94)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v95)) > _g4_s8 ? (8u + sizeof(_g4_t_v95)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v96)) > _g4_s9 ? (8u + sizeof(_g4_t_v96)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v97)) > _g4_s10 ? (12u + sizeof(_g4_t_v97)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v98)) > _g4_s11 ? (12u + sizeof(_g4_t_v98)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v99)) > _g4_s12 ? (12u + sizeof(_g4_t_v99)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v100)) > _g4_s13 ? (16u + sizeof(_g4_t_v100)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v101)) > _g4_s14 ? (16u + sizeof(_g4_t_v101)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v102)) > _g4_s15 ? (16u + sizeof(_g4_t_v102)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v103)) > _g4_s16 ? (16u + sizeof(_g4_t_v103)) : _g4_s16,
    _g4_s18 = (16u + sizeof(_g4_t_v104)) > _g4_s17 ? (16u + sizeof(_g4_t_v104)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_dest)) > _g4_s18 ? (40u + sizeof(_g4_t_dest)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_desta)) > _g4_s19 ? (40u + sizeof(_g4_t_desta)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_destb)) > _g4_s20 ? (40u + sizeof(_g4_t_destb)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v108)) > _g4_s21 ? (44u + sizeof(_g4_t_v108)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v109)) > _g4_s22 ? (48u + sizeof(_g4_t_v109)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v110)) > _g4_s23 ? (48u + sizeof(_g4_t_v110)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v111)) > _g4_s24 ? (48u + sizeof(_g4_t_v111)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v112)) > _g4_s25 ? (48u + sizeof(_g4_t_v112)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v113)) > _g4_s26 ? (48u + sizeof(_g4_t_v113)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v114)) > _g4_s27 ? (52u + sizeof(_g4_t_v114)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v115)) > _g4_s28 ? (52u + sizeof(_g4_t_v115)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v116)) > _g4_s29 ? (56u + sizeof(_g4_t_v116)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 8u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 8u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 8u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 8u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 8u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 8u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 8u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 8u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 8u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 8u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 12u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 12u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 12u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 16u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 16u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 16u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 16u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 16u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 40u);
  _g4_t_desta &desta = *reinterpret_cast<_g4_t_desta *>(_g4_sf + 40u);
  _g4_t_destb &destb = *reinterpret_cast<_g4_t_destb *>(_g4_sf + 40u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 44u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 48u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 48u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 48u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 48u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 48u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 52u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 52u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 56u);

  v108 = a2 + 1;
  if ( a2 + 1 == (uint32_t *)a3 )
  {
    if ( a2[5] != 0 )
    {
      dest = (uint32_t *)a2[4];
      v24 = (uint32_t *)dest[4];
      v25 = *(const void **)a4;
      v26 = *(v24 - 3);
      v27 = *(uint32_t *)(*(uint32_t *)a4 - 12);
      v89 = v26;
      if ( v27 <= v26 )
        v26 = *(uint32_t *)(*(uint32_t *)a4 - 12);
      v110 = v26;
      v28 = memcmp((const void *)dest[4], *(const void **)a4, v26);
      if ( v28 == 0 )
        v28 = v89 - v27;
      if ( v28 < 0 )
      {
        v102 = 1;
        if ( v108 != dest )
        {
          v29 = memcmp(v25, v24, v110);
          v30 = v27 - v89;
          if ( v29 == 0 )
            v29 = v30;
          v102 = v29 < 0;
        }
        v14 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        if ( v14 != -16 )
        {
          v31 = *(uint8_t **)a4;
          if ( *(int *)(*(uint32_t *)a4 - 4) < 0 )
          {
            v58 = *((uint32_t *)v31 - 3);
            v59 = *((uint32_t *)v31 - 2);
            if ( v58 > 0x3FFFFFFC )
              goto LABEL_197;
            if ( v58 > v59 && v58 < 2 * v59 )
              v58 = 2 * v59;
            if ( v58 + 29 > 0x1000 && v59 < v58 )
            {
              v60 = v58 + 4096 - (((uint16_t)v58 + 29) & 0xFFF);
              v58 = 1073741820;
              if ( v60 <= 0x3FFFFFFC )
                v58 = v60;
            }
            v92 = v58;
            v61 = VoxAllocInternal(
                    v58 + 13,
                    0,
                    (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                    (int)(uintptr_t)("internal_new"),
                    181);
            *(uint32_t *)(v61 + 4) = v92;
            *(uint32_t *)(v61 + 8) = 0;
            v62 = *((uint32_t *)v31 - 3);
            v63 = 0;
            v64 = (uint8_t *)(v61 + 12);
            if ( v62 != 0 )
            {
              if ( v62 == 1 )
              {
                *(uint8_t *)(v61 + 12) = *v31;
                v63 = *((uint32_t *)v31 - 3);
              }
              else
              {
                memcpy((void *)(v61 + 12), v31, v62);
                v63 = *((uint32_t *)v31 - 3);
                v64 = (uint8_t *)(v61 + 12);
              }
            }
            if ( (void *)v61 == (void *)g4_empty_string_rep )
            {
              v31 = v64;
            }
            else
            {
              *(uint32_t *)(v61 + 8) = 0;
              *(uint32_t *)v61 = v63;
              v31 = v64;
              *(uint8_t *)(v61 + v63 + 12) = 0;
            }
          }
          else if ( v31 - 12 != (uint8_t *)(void *)g4_empty_string_rep )
          {
            __sync_add_and_fetch((volatile int32_t *)v31 - 1, 1u);
          }
          *(uint32_t *)(v14 + 16) = (uint32_t)(uintptr_t)(v31);
          *(uint32_t *)(v14 + 20) = *(uint32_t *)(a4 + 4);
        }
        sub_1904970(v102, v14, dest, v108);
        goto LABEL_20;
      }
    }
LABEL_38:
    g4_std::Rb_tree_basic_string_char_char_t_fd25b5::M_insert_unique(
      (int)(uintptr_t)(v116),
      a2,
      a4);
    *a1 = v116[0];
    return a1;
  }
  s1 = *(uint32_t **)(a3 + 16);
  s2 = *(const void **)a4;
  v6 = *(uint32_t *)(*(uint32_t *)a4 - 12);
  n = v6;
  v97 = *(s1 - 3);
  if ( v97 <= v6 )
    n = *(s1 - 3);
  v87 = n;
  v8 = memcmp(*(const void **)a4, *(const void **)(a3 + 16), n);
  v100 = v8;
  v109 = v6 - v97;
  if ( v8 == 0 )
    v8 = v6 - v97;
  if ( v8 < 0 )
  {
    v9 = a2[3];
    if ( v9 == a3 )
    {
      v14 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v14 != -16 )
      {
        v44 = *(uint32_t **)a4;
        if ( *(int *)(*(uint32_t *)a4 - 4) < 0 )
        {
          v78 = *(v44 - 3);
          v111 = *(v44 - 2);
          if ( v78 > 0x3FFFFFFC )
            goto LABEL_197;
          if ( v78 > v111 && v78 < 2 * v111 )
            v78 = 2 * v111;
          if ( v78 + 29 > 0x1000 && v111 < v78 )
          {
            v79 = v78 + 4096 - (((uint16_t)v78 + 29) & 0xFFF);
            v78 = 1073741820;
            if ( v79 <= 0x3FFFFFFC )
              v78 = v79;
          }
          v95 = *(uint8_t **)a4;
          v99 = v78;
          v80 = VoxAllocInternal(
                  v78 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          *(uint32_t *)(v80 + 8) = 0;
          *(uint32_t *)(v80 + 4) = v99;
          v81 = v80;
          v82 = 0;
          v112 = *((uint32_t *)v95 - 3);
          if ( v112 != 0 )
          {
            if ( v112 == 1 )
              *(uint8_t *)(v81 + 12) = *v95;
            else
              memcpy((void *)(v81 + 12), v95, v112);
            v82 = *((uint32_t *)v95 - 3);
          }
          if ( (void *)v81 != (void *)g4_empty_string_rep )
          {
            *(uint32_t *)(v81 + 8) = 0;
            *(uint32_t *)v81 = v82;
            *(uint8_t *)(v81 + v82 + 12) = 0;
          }
          v44 = (uint32_t *)(v81 + 12);
        }
        else if ( v44 - 3 != (uint32_t *)(void *)g4_empty_string_rep )
        {
          __sync_add_and_fetch(v44 - 1, 1u);
        }
        *(uint32_t *)(v14 + 16) = (uint32_t)(uintptr_t)(v44);
        *(uint32_t *)(v14 + 20) = *(uint32_t *)(a4 + 4);
      }
      sub_1904970(1, v14, v9, v108);
      goto LABEL_20;
    }
    v10 = sub_1904940(a3);
    v11 = v6;
    v114 = (uint32_t *)v10;
    v12 = *(uint32_t *)(*(uint32_t *)(v10 + 16) - 12);
    v88 = *(const void **)(v10 + 16);
    if ( v12 <= v6 )
      v11 = *(uint32_t *)(*(uint32_t *)(v10 + 16) - 12);
    v101 = v11;
    v13 = memcmp(*(const void **)(v10 + 16), s2, v11);
    if ( v13 == 0 )
      v13 = v12 - v6;
    if ( v13 < 0 )
    {
      if ( v114[3] == 0 )
      {
        desta = 1;
        if ( v108 != v114 )
        {
          v39 = memcmp(s2, v88, v101);
          v40 = v6 - v12;
          if ( v39 == 0 )
            v39 = v40;
          desta = v39 < 0;
        }
        v14 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        if ( v14 != -16 )
        {
          v41 = *(uint8_t **)a4;
          if ( *(int *)(*(uint32_t *)a4 - 4) < 0 )
          {
            v65 = *((uint32_t *)v41 - 3);
            v66 = *((uint32_t *)v41 - 2);
            if ( v65 > 0x3FFFFFFC )
              goto LABEL_197;
            if ( v65 > v66 && v65 < 2 * v66 )
              v65 = 2 * v66;
            if ( v65 + 29 > 0x1000 && v66 < v65 )
            {
              v67 = v65 + 4096 - (((uint16_t)v65 + 29) & 0xFFF);
              v65 = 1073741820;
              if ( v67 <= 0x3FFFFFFC )
                v65 = v67;
            }
            v93 = v65;
            v68 = VoxAllocInternal(
                    v65 + 13,
                    0,
                    (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                    (int)(uintptr_t)("internal_new"),
                    181);
            *(uint32_t *)(v68 + 4) = v93;
            *(uint32_t *)(v68 + 8) = 0;
            v69 = *((uint32_t *)v41 - 3);
            v70 = 0;
            if ( v69 != 0 )
            {
              if ( v69 == 1 )
                *(uint8_t *)(v68 + 12) = *v41;
              else
                memcpy((void *)(v68 + 12), v41, v69);
              v70 = *((uint32_t *)v41 - 3);
            }
            if ( (void *)v68 != (void *)g4_empty_string_rep )
            {
              *(uint32_t *)(v68 + 8) = 0;
              *(uint32_t *)v68 = v70;
              *(uint8_t *)(v68 + v70 + 12) = 0;
            }
            v41 = (uint8_t *)(v68 + 12);
          }
          else if ( v41 - 12 != (uint8_t *)(void *)g4_empty_string_rep )
          {
            __sync_add_and_fetch((volatile int32_t *)v41 - 1, 1u);
          }
          *(uint32_t *)(v14 + 16) = (uint32_t)(uintptr_t)(v41);
          *(uint32_t *)(v14 + 20) = *(uint32_t *)(a4 + 4);
        }
        sub_1904970(desta, v14, v114, v108);
        goto LABEL_20;
      }
      v14 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v14 == -16 )
      {
LABEL_19:
        sub_1904970(1, v14, a3, v108);
LABEL_20:
        ++a2[5];
        *a1 = v14;
        return a1;
      }
      v15 = *(volatile int32_t **)a4;
      if ( *(int *)(*(uint32_t *)a4 - 4) >= 0 )
      {
        if ( v15 - 3 != (volatile int32_t *)(void *)g4_empty_string_rep )
          __sync_add_and_fetch(v15 - 1, 1u);
LABEL_18:
        *(uint32_t *)(v14 + 16) = (uint32_t)(uintptr_t)(v15);
        *(uint32_t *)(v14 + 20) = *(uint32_t *)(a4 + 4);
        goto LABEL_19;
      }
      v32 = *((uint32_t *)v15 - 3);
      v33 = *((uint32_t *)v15 - 2);
      if ( v32 <= 0x3FFFFFFC )
      {
        if ( v32 > v33 && v32 < 2 * v33 )
          v32 = 2 * v33;
        if ( v32 + 29 > 0x1000 && v33 < v32 )
        {
          v34 = v32 + 4096 - (((uint16_t)v32 + 29) & 0xFFF);
          v32 = 1073741820;
          if ( v34 <= 0x3FFFFFFC )
            v32 = v34;
        }
        v90 = v32;
        v35 = VoxAllocInternal(
                v32 + 13,
                0,
                (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                (int)(uintptr_t)("internal_new"),
                181);
        *(uint32_t *)(v35 + 4) = v90;
        *(uint32_t *)(v35 + 8) = 0;
        v36 = *((uint32_t *)v15 - 3);
        v37 = 0;
        v38 = (volatile int32_t *)(v35 + 12);
        if ( v36 != 0 )
        {
          if ( v36 == 1 )
          {
            *(uint8_t *)(v35 + 12) = *(uint8_t *)v15;
            v37 = *((uint32_t *)v15 - 3);
          }
          else
          {
            memcpy((void *)(v35 + 12), (const void *)v15, v36);
            v37 = *((uint32_t *)v15 - 3);
            v38 = (volatile int32_t *)(v35 + 12);
          }
        }
        if ( (void *)v35 == (void *)g4_empty_string_rep )
        {
          v15 = v38;
        }
        else
        {
          *(uint32_t *)(v35 + 8) = 0;
          *(uint32_t *)v35 = v37;
          v15 = v38;
          *(uint8_t *)(v35 + v37 + 12) = 0;
        }
        goto LABEL_18;
      }
LABEL_197:
      sub_1900180("basic_string::_S_create");
    }
    goto LABEL_38;
  }
  v17 = memcmp(s1, s2, v87);
  if ( v17 == 0 )
    v17 = v97 - v6;
  if ( v17 >= 0 )
  {
    *a1 = a3;
    return a1;
  }
  v18 = a2[4];
  if ( v18 != a3 )
  {
    v115 = sub_19048E0(a3);
    v19 = v6;
    v20 = *(uint32_t *)(*(uint32_t *)(v115 + 16) - 12);
    if ( v20 <= v6 )
      v19 = *(uint32_t *)(*(uint32_t *)(v115 + 16) - 12);
    v21 = v6 - v20;
    v22 = memcmp(s2, *(const void **)(v115 + 16), v19);
    if ( v22 == 0 )
      v22 = v21;
    if ( v22 < 0 )
    {
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v14 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        if ( v14 != -16 )
        {
          v23 = *(uint8_t **)a4;
          if ( *(int *)(*(uint32_t *)a4 - 4) < 0 )
          {
            v45 = *((uint32_t *)v23 - 3);
            v46 = *((uint32_t *)v23 - 2);
            if ( v45 > 0x3FFFFFFC )
              goto LABEL_197;
            if ( v45 > v46 && v45 < 2 * v46 )
              v45 = 2 * v46;
            if ( v45 + 29 > 0x1000 && v46 < v45 )
            {
              v47 = v45 + 4096 - (((uint16_t)v45 + 29) & 0xFFF);
              v45 = 1073741820;
              if ( v47 <= 0x3FFFFFFC )
                v45 = v47;
            }
            v91 = v45;
            v48 = VoxAllocInternal(
                    v45 + 13,
                    0,
                    (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                    (int)(uintptr_t)("internal_new"),
                    181);
            *(uint32_t *)(v48 + 4) = v91;
            *(uint32_t *)(v48 + 8) = 0;
            v49 = *((uint32_t *)v23 - 3);
            v50 = 0;
            v51 = (uint8_t *)(v48 + 12);
            if ( v49 != 0 )
            {
              if ( v49 == 1 )
              {
                *(uint8_t *)(v48 + 12) = *v23;
                v50 = *((uint32_t *)v23 - 3);
              }
              else
              {
                memcpy((void *)(v48 + 12), v23, v49);
                v50 = *((uint32_t *)v23 - 3);
                v51 = (uint8_t *)(v48 + 12);
              }
            }
            if ( (void *)v48 == (void *)g4_empty_string_rep )
            {
              v23 = v51;
            }
            else
            {
              *(uint32_t *)(v48 + 8) = 0;
              *(uint32_t *)v48 = v50;
              v23 = v51;
              *(uint8_t *)(v48 + v50 + 12) = 0;
            }
          }
          else if ( v23 - 12 != (uint8_t *)(void *)g4_empty_string_rep )
          {
            __sync_add_and_fetch((volatile int32_t *)v23 - 1, 1u);
          }
          *(uint32_t *)(v14 + 16) = (uint32_t)(uintptr_t)(v23);
          *(uint32_t *)(v14 + 20) = *(uint32_t *)(a4 + 4);
        }
        sub_1904970(1, v14, v115, v108);
        goto LABEL_20;
      }
      v42 = v100;
      if ( v100 == 0 )
        v42 = v109;
      v103 = v42;
      v14 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v14 != -16 )
      {
        v43 = *(uint8_t **)a4;
        if ( *(int *)(*(uint32_t *)a4 - 4) < 0 )
        {
          v71 = *((uint32_t *)v43 - 3);
          v72 = *((uint32_t *)v43 - 2);
          if ( v71 > 0x3FFFFFFC )
            goto LABEL_197;
          if ( v71 > v72 && v71 < 2 * v72 )
            v71 = 2 * v72;
          if ( v71 + 29 > 0x1000 && v72 < v71 )
          {
            v73 = v71 + 4096 - (((uint16_t)v71 + 29) & 0xFFF);
            v71 = 1073741820;
            if ( v73 <= 0x3FFFFFFC )
              v71 = v73;
          }
          v94 = v71;
          v74 = VoxAllocInternal(
                  v71 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          *(uint32_t *)(v74 + 4) = v94;
          *(uint32_t *)(v74 + 8) = 0;
          v75 = *((uint32_t *)v43 - 3);
          v76 = 0;
          v77 = (uint8_t *)(v74 + 12);
          if ( v75 != 0 )
          {
            if ( v75 == 1 )
            {
              *(uint8_t *)(v74 + 12) = *v43;
              v76 = *((uint32_t *)v43 - 3);
            }
            else
            {
              memcpy((void *)(v74 + 12), v43, v75);
              v76 = *((uint32_t *)v43 - 3);
              v77 = (uint8_t *)(v74 + 12);
            }
          }
          if ( (void *)v74 == (void *)g4_empty_string_rep )
          {
            v43 = v77;
          }
          else
          {
            *(uint32_t *)(v74 + 8) = 0;
            *(uint32_t *)v74 = v76;
            v43 = v77;
            *(uint8_t *)(v74 + v76 + 12) = 0;
          }
        }
        else if ( v43 - 12 != (uint8_t *)(void *)g4_empty_string_rep )
        {
          __sync_add_and_fetch((volatile int32_t *)v43 - 1, 1u);
        }
        *(uint32_t *)(v14 + 16) = (uint32_t)(uintptr_t)(v43);
        *(uint32_t *)(v14 + 20) = *(uint32_t *)(a4 + 4);
      }
      sub_1904970(v103 < 0, v14, a3, v108);
      goto LABEL_20;
    }
    goto LABEL_38;
  }
  v52 = *(uint32_t *)(*(uint32_t *)(v18 + 16) - 12);
  if ( v52 > v6 )
    v52 = v6;
  v53 = v6 - *(uint32_t *)(*(uint32_t *)(v18 + 16) - 12);
  v54 = memcmp(s2, *(const void **)(v18 + 16), v52);
  if ( v54 == 0 )
    v54 = v53;
  v98 = v54;
  v55 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  v56 = v98;
  if ( v55 != -16 )
  {
    v57 = *(uint32_t **)a4;
    if ( *(int *)(*(uint32_t *)a4 - 4) < 0 )
    {
      destb = (void *)*(v57 - 3);
      v83 = *(v57 - 2);
      if ( (unsigned int)(uintptr_t)(destb) > 0x3FFFFFFC )
        goto LABEL_197;
      if ( (unsigned int)(uintptr_t)(destb) > v83 )
      {
        v84 = 2 * v83;
        if ( (unsigned int)(uintptr_t)(destb) >= v84 )
          v84 = *(v57 - 3);
        destb = (void *)v84;
      }
      if ( (unsigned int)(uintptr_t)(destb) + 29 <= 0x1000 || *(v57 - 2) >= (unsigned int)(uintptr_t)(destb) )
      {
        v104 = (size_t)destb + 13;
      }
      else
      {
        v85 = 1073741820;
        if ( (unsigned int)(uintptr_t)(destb) + 4096 - (((uint16_t)(uintptr_t)(destb) + 29) & 0xFFF) <= 0x3FFFFFFC )
          v85 = (int)(uintptr_t)(destb) - (((uint16_t)(uintptr_t)(destb) + 29) & 0xFFF) + 4096;
        destb = (void *)v85;
        v104 = v85 + 13;
      }
      v96 = *(uint8_t **)a4;
      v86 = VoxAllocInternal(v104, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v86 + 4) = (uint32_t)(uintptr_t)(destb);
      *(uint32_t *)(v86 + 8) = 0;
      v56 = v98;
      v113 = *((uint32_t *)v96 - 3);
      if ( v113 != 0 )
      {
        if ( v113 == 1 )
        {
          *(uint8_t *)(v86 + 12) = *v96;
        }
        else
        {
          memcpy((void *)(v86 + 12), v96, v113);
          v56 = v98;
        }
        v113 = *((uint32_t *)v96 - 3);
      }
      if ( (void *)v86 != (void *)g4_empty_string_rep )
      {
        *(uint32_t *)(v86 + 8) = 0;
        *(uint32_t *)v86 = v113;
        *(uint8_t *)(v86 + v113 + 12) = 0;
      }
      v57 = (uint32_t *)(v86 + 12);
    }
    else if ( v57 - 3 != (uint32_t *)(void *)g4_empty_string_rep )
    {
      __sync_add_and_fetch(v57 - 1, 1u);
    }
    *(uint32_t *)(v55 + 16) = (uint32_t)(uintptr_t)(v57);
    *(uint32_t *)(v55 + 20) = *(uint32_t *)(a4 + 4);
  }
  sub_1904970(v56 < 0, v55, v18, v108);
  ++a2[5];
  *a1 = v55;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vox_M_73eb4c::M_erase  (binary VA: 0xffbba0)
// Original: std::_Rb_tree<int,std::pair<int const,vox::MpcSegmentDecoder *>,std::_Select1st<std::pair<int const,vox::MpcSegmentDecoder *>>,vox::SegmentIdCompare,vox::SAllocator<std::pair<int const,vox::MpcSegmentDecoder *>,(vox::VoxMemHint)0>>::_M_erase
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_int_pair_int_const_vox_M_73eb4c::M_erase(int a1, uint32_t *a2)
{
  uint32_t *result;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;

  result = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v3 = (uint32_t *)a2[3];
      v22 = v3;
      if ( v3 != nullptr )
      {
        while ( 1 )
        {
          v4 = (uint32_t *)v3[3];
          v23 = v4;
          if ( v4 != nullptr )
          {
            while ( 1 )
            {
              v5 = (uint32_t *)v4[3];
              v24 = v5;
              if ( v5 != nullptr )
              {
                while ( 1 )
                {
                  v6 = (uint32_t *)v5[3];
                  v25 = v6;
                  if ( v6 != nullptr )
                  {
                    while ( 1 )
                    {
                      v7 = (uint32_t *)v6[3];
                      v26 = v7;
                      if ( v7 != nullptr )
                      {
                        while ( 1 )
                        {
                          v8 = (uint32_t *)v7[3];
                          v21 = v8;
                          if ( v8 != nullptr )
                          {
                            while ( 1 )
                            {
                              v9 = (uint32_t *)v8[3];
                              v20 = v9;
                              if ( v9 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v10 = v9[3];
                                  if ( v10 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_int_pair_int_const_vox_M_73eb4c::M_erase(
                                        a1,
                                        *(void **)(v10 + 12));
                                      v11 = *(uint32_t *)(v10 + 8);
                                      VoxFreeInternal((void *)v10);
                                      if ( v11 == 0 )
                                        break;
                                      v10 = v11;
                                    }
                                  }
                                  v12 = (uint32_t *)v20[2];
                                  VoxFreeInternal(v20);
                                  if ( v12 == nullptr )
                                    break;
                                  v20 = v12;
                                  v9 = v12;
                                }
                              }
                              v13 = (uint32_t *)v21[2];
                              VoxFreeInternal(v21);
                              if ( v13 == nullptr )
                                break;
                              v21 = v13;
                              v8 = v13;
                            }
                          }
                          v14 = (uint32_t *)v26[2];
                          VoxFreeInternal(v26);
                          if ( v14 == nullptr )
                            break;
                          v26 = v14;
                          v7 = v14;
                        }
                      }
                      v15 = (uint32_t *)v25[2];
                      VoxFreeInternal(v25);
                      if ( v15 == nullptr )
                        break;
                      v25 = v15;
                      v6 = v15;
                    }
                  }
                  v16 = (uint32_t *)v24[2];
                  VoxFreeInternal(v24);
                  if ( v16 == nullptr )
                    break;
                  v24 = v16;
                  v5 = v16;
                }
              }
              v17 = (uint32_t *)v23[2];
              VoxFreeInternal(v23);
              if ( v17 == nullptr )
                break;
              v23 = v17;
              v4 = v17;
            }
          }
          v18 = (uint32_t *)v22[2];
          VoxFreeInternal(v22);
          if ( v18 == nullptr )
            break;
          v22 = v18;
          v3 = v18;
        }
      }
      v19 = (uint32_t *)a2[2];
      result = (uint32_t *)VoxFreeInternal(a2);
      if ( v19 == nullptr )
        break;
      a2 = v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_FFE9C0  (binary VA: 0xffe9c0)
// Original: sub_FFE9C0
// ----------------------------------------------------------------------------
int sub_FFE9C0(int a1, char *src, uint32_t *a3)
{
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char *v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  uint32_t *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  char *v18;
  char *v19;
  uint32_t *v20;
  char *v21;
  char *v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  size_t v27;
  int v28;
  char v29;
  int v30;

  v4 = *(uint32_t **)(a1 + 4);
  if ( v4 != *(uint32_t **)(a1 + 8) )
  {
    v5 = 0;
    if ( v4 != nullptr )
    {
      *v4 = *(v4 - 6);
      v4[1] = *(v4 - 5);
      v4[2] = *(v4 - 4);
      v4[3] = *(v4 - 3);
      v4[4] = *(v4 - 2);
      v4[5] = *(v4 - 1);
      v5 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v5 + 24;
    v6 = *a3;
    v23 = a3[2];
    v7 = a3[1];
    v25 = a3[3];
    v27 = a3[4];
    v30 = a3[5];
    v29 = *((uint8_t *)a3 + 20);
    v8 = (v5 - 24 - (int)(uintptr_t)(src)) >> 3;
    if ( -1431655765 * v8 != 0 )
    {
      v21 = src;
      memmove((void *)(v5 - 8 * v8), src, 8 * v8);
      src = v21;
    }
    *(uint32_t *)src = v6;
    *((uint32_t *)src + 3) = v25;
    *((uint32_t *)src + 2) = v23;
    *((uint32_t *)src + 5) = v30;
    *((uint32_t *)src + 1) = v7;
    *((uint32_t *)src + 4) = v27;
    src[20] = v29;
    return v30;
  }
  v10 = *(char **)a1;
  v11 = -1431655765 * (((int)(uintptr_t)(v4) - *(uint32_t *)a1) >> 3);
  if ( v11 != 0 )
  {
    v12 = 2 * v11;
    if ( v11 > 2 * v11 || v12 > 0xAAAAAAA )
    {
      v28 = -16;
      v13 = -1431655765 * ((src - v10) >> 3);
    }
    else
    {
      v28 = 48 * v11;
      v13 = -1431655765 * ((src - v10) >> 3);
      if ( v12 == 0 )
      {
        v26 = 24;
        v24 = 0;
        goto LABEL_11;
      }
    }
  }
  else
  {
    v28 = 24;
    v13 = -1431655765 * ((src - v10) >> 3);
  }
  v22 = src;
  v24 = VoxAllocInternal(v28, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  v26 = v24 + 24;
  src = v22;
LABEL_11:
  v14 = (uint32_t *)(v24 + 24 * v13);
  if ( v14 != nullptr )
  {
    *v14 = *a3;
    v14[1] = a3[1];
    v14[2] = a3[2];
    v14[3] = a3[3];
    v14[4] = a3[4];
    v14[5] = a3[5];
  }
  v15 = *(char **)a1;
  if ( src != *(char **)a1 )
  {
    v16 = *(char **)a1;
    v17 = (uint32_t *)v24;
    do
    {
      if ( v17 != nullptr )
      {
        *v17 = *(uint32_t *)v16;
        v17[1] = *((uint32_t *)v16 + 1);
        v17[2] = *((uint32_t *)v16 + 2);
        v17[3] = *((uint32_t *)v16 + 3);
        v17[4] = *((uint32_t *)v16 + 4);
        v17[5] = *((uint32_t *)v16 + 5);
      }
      v16 += 24;
      v17 += 6;
    }
    while ( src != v16 );
    v26 = v24 + 8 * ((unsigned int)(src - (v15 + 24)) >> 3) + 48;
  }
  v18 = *(char **)(a1 + 4);
  if ( src != v18 )
  {
    v19 = src;
    v20 = (uint32_t *)v26;
    do
    {
      if ( v20 != nullptr )
      {
        *v20 = *(uint32_t *)v19;
        v20[1] = *((uint32_t *)v19 + 1);
        v20[2] = *((uint32_t *)v19 + 2);
        v20[3] = *((uint32_t *)v19 + 3);
        v20[4] = *((uint32_t *)v19 + 4);
        v20[5] = *((uint32_t *)v19 + 5);
      }
      v19 += 24;
      v20 += 6;
    }
    while ( v18 != v19 );
    v26 += 8 * ((unsigned int)(v18 - (src + 24)) >> 3) + 24;
  }
  if ( *(uint32_t *)a1 != 0 )
    VoxFreeInternal(*(void **)a1);
  *(uint32_t *)a1 = v24;
  *(uint32_t *)(a1 + 4) = v26;
  *(uint32_t *)(a1 + 8) = v28 + v24;
  return v28 + v24;
}

// ----------------------------------------------------------------------------
// Function: sub_FFFBE0  (binary VA: 0xfffbe0)
// Original: sub_FFFBE0
// ----------------------------------------------------------------------------
int sub_FFFBE0(int a1, const char *a2, float *a3)
{
  int v5;
  size_t v6;
  int v7;
  int v8;
  int v9;
  float v11;
  float v12;
  float v13;

  v11 = a3[2];
  v12 = a3[1];
  v5 = a1 + 12;
  v13 = *a3;
  g4_std_compat::ostream_write(a1 + 12, "\"", 1);
  if ( a2 != nullptr )
  {
    v6 = strlen(a2);
    g4_std_compat::ostream_write(v5, a2, v6);
  }
  else
  {
    sub_1911530(
      *(uint32_t *)(*(uint32_t *)(a1 + 12) - 12) + v5,
      *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) - 12) + v5 + 20) | 1);
  }
  g4_std_compat::ostream_write(v5, &off_1B6645C, 3);
  v7 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v5, COERCE__INT64(v13)));
  g4_std_compat::ostream_write(v7, ",", 1);
  v8 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v7, COERCE__INT64(v12)));
  g4_std_compat::ostream_write(v8, ",", 1);
  v9 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v8, COERCE__INT64(v11)));
  g4_std_compat::ostream_write(v9, "]", 1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1008650  (binary VA: 0x1008650)
// Original: sub_1008650
// ----------------------------------------------------------------------------
int * sub_1008650()
{
  vox::DriverCallbackSourceInterface::s_listenerParameters = 0;
  *(uintptr_t *)(unk_20E2030) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20E2040) = (uintptr_t)(0);
  vox::DriverCallbackInterface::m_sWorkBuffer[0] = 0;
  vox::DriverCallbackInterface::m_sWorkBuffer[1] = 0;
  vox::DriverCallbackInterface::m_sMixingBuffer[0] = 0;
  vox::DriverCallbackInterface::m_sMixingBuffer[1] = 0;
  return (int *)(vox::DriverCallbackInterface::m_sMixingBuffer);
}

// ----------------------------------------------------------------------------
// Function: sub_100D600  (binary VA: 0x100d600)
// Original: sub_100D600
// ----------------------------------------------------------------------------
uint32_t * sub_100D600()
{
  vox::FileSystemInterface::m_IOFunc = 0;
  dword_20E2064 = 0;
  dword_20E2068 = 0;
  dword_20E206C = 0;
  *(uintptr_t *)(unk_20E2070) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20E2074) = (uintptr_t)(0);
  dword_20E2078[0] = 0;
  return (uint32_t *)(&vox::FileSystemInterface::m_IOFunc);
}



// ============================================================================
// Address:   0x100f0e0 (size: 711 bytes)
// Symbol:    _ZNSt6vectorIcN3vox10SAllocatorIcLNS0_10VoxMemHintE0EEEE6insertIN9__gnu_cxx17__normal_iteratorIPcSbIcSt11char_traitsIcES3_EEEEEvNS7_IS8_S4_EET_SE_
// Demangled: void vox::vector_char_insert(__gnu_cxx::__normal_iterator<char *,std::vector<char,vox::SAllocator<char,(vox::VoxMemHint)0>>>,__gnu_cxx::__normal_iterator<char *,std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>>,__gnu_cxx::__normal_iterator<char *,std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>>)
// ============================================================================
void vox::vector_char_insert(
        int a1,
        char *dest,
        char *src,
        char *a4)
{
  char *v4;
  char *v5;
  char *v6;
  char *v7;
  char *v8;
  char *v9;
  char *v10;
  size_t n;
  unsigned int v12;
  unsigned int v13;
  bool v14;
  size_t v15;
  int v16;
  char *v17;
  char *v18;
  char *v19;
  char *v20;
  char *v21;
  char *v22;
  char *v23;
  char *v24;
  unsigned int v25;
  char *v26;
  char *v27;
  int v28;
  char *v29;
  char *v30;
  size_t v31;

  if ( a4 == src )
    return;
  v25 = a4 - src;
  v4 = *(char **)(a1 + 4);
  if ( a4 - src > (unsigned int)(*(uint32_t *)(a1 + 8) - (uint32_t)(uintptr_t)(v4)) )
  {
    v12 = (unsigned int)(uintptr_t)(&v4[-*(uint32_t *)a1]);
    v29 = *(char **)a1;
    if ( v25 > ~v12 )
      sub_1900180("vector::_M_range_insert");
    v13 = a4 - src;
    if ( v12 >= v25 )
      v13 = v12;
    v31 = 0xFFFFFFFF;
    v14 = __CFADD__(v13, v12);
    v15 = v13 + v12;
    if ( v14 )
    {
      v16 = VoxAllocInternal(
              0xFFFFFFFF,
              0,
              (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
              (int)(uintptr_t)("internal_new"),
              181);
    }
    else
    {
      v31 = 0;
      v26 = nullptr;
      if ( v15 == 0 )
        goto LABEL_33;
      v31 = v15;
      v16 = VoxAllocInternal(v15, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    }
    v26 = (char *)v16;
    v29 = *(char **)a1;
LABEL_33:
    v17 = v26;
    v30 = v26;
    if ( v29 != dest )
    {
      v18 = v29;
      do
      {
        if ( v17 != nullptr )
          *v17 = *v18;
        ++v18;
        ++v17;
      }
      while ( v18 != dest );
      v30 = &v26[dest - v29];
    }
    v19 = src;
    v20 = v30;
    do
    {
      if ( v20 != nullptr )
        *v20 = *v19;
      ++v19;
      ++v20;
    }
    while ( v19 != a4 );
    v21 = *(char **)(a1 + 4);
    v22 = &v30[v19 - src];
    v27 = v22;
    if ( v21 != dest )
    {
      v23 = v22;
      v24 = dest;
      do
      {
        if ( v23 != nullptr )
          *v23 = *v24;
        ++v24;
        ++v23;
      }
      while ( v24 != v21 );
      v27 += v24 - dest;
    }
    if ( *(uint32_t *)a1 != 0 )
      VoxFreeInternal(*(void **)a1);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v26);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v27);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&v26[v31]);
    return;
  }
  v28 = v4 - dest;
  if ( v25 >= v4 - dest )
  {
    v7 = *(char **)(a1 + 4);
    if ( &src[v28] != a4 )
    {
      v8 = &src[v28];
      do
      {
        if ( v7 != nullptr )
          *v7 = *v8;
        ++v8;
        ++v7;
      }
      while ( v8 != a4 );
      v7 = *(char **)(a1 + 4);
    }
    v9 = &v7[v25 - v28];
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v9);
    if ( v4 != dest )
    {
      v10 = dest;
      do
      {
        if ( v9 != nullptr )
          *v9 = *v10;
        ++v10;
        ++v9;
      }
      while ( v10 != v4 );
      v9 = *(char **)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&v9[v28]);
    n = v4 - dest;
    if ( &src[v28] != src )
      goto LABEL_26;
  }
  else
  {
    v5 = *(char **)(a1 + 4);
    if ( v4 != &v4[-v25] )
    {
      v6 = &v4[-v25];
      do
      {
        if ( v5 != nullptr )
          *v5 = *v6;
        ++v6;
        ++v5;
      }
      while ( v6 != v4 );
      v5 = *(char **)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&v5[v25]);
    if ( &v4[-v25] == dest )
    {
      if ( v25 == 0 )
        return;
      goto LABEL_53;
    }
    memmove(&dest[v25], dest, &v4[-v25] - dest);
    if ( v25 != 0 )
    {
LABEL_53:
      n = a4 - src;
LABEL_26:
      memmove(dest, src, n);
    }
  }
}
// ----------------------------------------------------------------------------
// Function: g4_std::vector_char_vox_SAllocator_char_95e632::M_range_insert_char_const_552bf1  (binary VA: 0x100f3b0)
// Original: std::vector<char,vox::SAllocator<char,(vox::VoxMemHint)0>>::_M_range_insert<char const*>
// ----------------------------------------------------------------------------
void g4_std::vector_char_vox_SAllocator_char_95e632::M_range_insert_char_const_552bf1(int a1, char *dest, char *src, char *a4)
{
  char *v4;
  char *v5;
  char *v6;
  size_t n;
  char *v8;
  char *v9;
  char *v10;
  char *v11;
  size_t v12;
  size_t v13;
  bool v14;
  size_t v15;
  int v16;
  uint8_t *v17;
  char *v18;
  char *v19;
  char *v20;
  char *v21;
  char *v22;
  char *v23;
  char *v24;
  size_t v25;
  size_t v26;
  char *v27;
  int v28;
  char *v29;
  char *v30;
  size_t v31;

  if ( src == a4 )
    return;
  v25 = a4 - src;
  v4 = *(char **)(a1 + 4);
  if ( a4 - src > (unsigned int)(*(uint32_t *)(a1 + 8) - (uint32_t)(uintptr_t)(v4)) )
  {
    v12 = (size_t)&v4[-*(uint32_t *)a1];
    v29 = *(char **)a1;
    if ( v25 > ~v12 )
      sub_1900180("vector::_M_range_insert");
    v13 = a4 - src;
    if ( v25 < v12 )
      v13 = v12;
    v31 = 0xFFFFFFFF;
    v14 = __CFADD__(v13, v12);
    v15 = v13 + v12;
    if ( v14 )
    {
      v16 = VoxAllocInternal(
              0xFFFFFFFF,
              0,
              (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
              (int)(uintptr_t)("internal_new"),
              181);
    }
    else
    {
      v31 = 0;
      v26 = 0;
      if ( v15 == 0 )
        goto LABEL_33;
      v31 = v15;
      v16 = VoxAllocInternal(v15, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    }
    v26 = v16;
    v29 = *(char **)a1;
LABEL_33:
    v17 = (uint8_t *)v26;
    v30 = (char *)v26;
    if ( dest != v29 )
    {
      v18 = v29;
      do
      {
        if ( v17 != nullptr )
          *v17 = *v18;
        ++v18;
        ++v17;
      }
      while ( v18 != dest );
      v30 = (char *)(v26 + dest - v29);
    }
    v19 = src;
    v20 = v30;
    do
    {
      if ( v20 != nullptr )
        *v20 = *v19;
      ++v19;
      ++v20;
    }
    while ( v19 != a4 );
    v21 = *(char **)(a1 + 4);
    v22 = &v30[v19 - src];
    v27 = v22;
    if ( v21 != dest )
    {
      v23 = v22;
      v24 = dest;
      do
      {
        if ( v23 != nullptr )
          *v23 = *v24;
        ++v24;
        ++v23;
      }
      while ( v24 != v21 );
      v27 += v24 - dest;
    }
    if ( *(uint32_t *)a1 != 0 )
      VoxFreeInternal(*(void **)a1);
    *(uint32_t *)a1 = v26;
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v27);
    *(uint32_t *)(a1 + 8) = v31 + v26;
    return;
  }
  v28 = v4 - dest;
  if ( v25 >= v4 - dest )
  {
    v8 = *(char **)(a1 + 4);
    if ( a4 != &src[v28] )
    {
      v9 = &src[v28];
      do
      {
        if ( v8 != nullptr )
          *v8 = *v9;
        ++v9;
        ++v8;
      }
      while ( v9 != a4 );
      v8 = *(char **)(a1 + 4);
    }
    v10 = &v8[v25 - v28];
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v10);
    if ( v4 != dest )
    {
      v11 = dest;
      do
      {
        if ( v10 != nullptr )
          *v10 = *v11;
        ++v11;
        ++v10;
      }
      while ( v11 != v4 );
      v10 = *(char **)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&v10[v28]);
    n = v4 - dest;
    if ( &src[v28] != src )
      goto LABEL_26;
  }
  else
  {
    v5 = *(char **)(a1 + 4);
    if ( v4 != &v4[-v25] )
    {
      v6 = &v4[-v25];
      do
      {
        if ( v5 != nullptr )
          *v5 = *v6;
        ++v6;
        ++v5;
      }
      while ( v6 != v4 );
      v5 = *(char **)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&v5[v25]);
    if ( &v4[-v25] == dest )
    {
      n = a4 - src;
      if ( v25 == 0 )
        return;
LABEL_26:
      memmove(dest, src, n);
      return;
    }
    memmove(&dest[v25], dest, &v4[-v25] - dest);
    n = a4 - src;
    if ( v25 != 0 )
      goto LABEL_26;
  }
}



// ============================================================================
// Address:   0x100f680 (size: 523 bytes)
// Symbol:    _ZSt27__unguarded_partition_pivotIN9__gnu_cxx17__normal_iteratorIPN3vox21VoxFolderArchiveValueESt6vectorIS3_NS2_10SAllocatorIS3_LNS2_10VoxMemHintE0EEEEEEET_SB_SB_
// Demangled: __gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>> std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>>>(__gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>>,__gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>>)
// ============================================================================
static unsigned int **g4_compat_def_1(
        unsigned int **a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int *v3;
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int *v11;
  unsigned int v12;
  unsigned int *i;
  unsigned int v14;
  unsigned int v15;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;

  v3 = a3;
  v4 = &a2[3 * ((int)(((unsigned int)(-1431655765 * (a3 - a2)) >> 31) - 1431655765 * (a3 - a2)) >> 1)];
  v5 = *a2;
  v6 = *v4;
  v17 = v4[1];
  v18 = a2[1];
  if ( *a2 >= *v4 && (v5 > v6 || v17 <= a2[1]) )
  {
    v20 = *(a3 - 3);
    v22 = *(a3 - 2);
    if ( v5 < v20 || v5 <= v20 && v22 > v18 )
      goto LABEL_10;
    if ( v6 >= v20 && (v6 > v20 || v17 >= v22) )
      goto LABEL_9;
    v7 = a2;
    v8 = *(a3 - 3);
    v9 = a2[2];
LABEL_24:
    *v7 = v8;
    v7[1] = *(a3 - 2);
    v7[2] = *(a3 - 1);
    *(a3 - 3) = v5;
    *(a3 - 1) = v9;
    *(a3 - 2) = v18;
    v5 = *v7;
    v18 = v7[1];
    goto LABEL_10;
  }
  v21 = *(a3 - 3);
  if ( v6 >= v21 && (v6 > v21 || v17 >= *(a3 - 2)) )
  {
    if ( v5 >= v21 && (v5 > v21 || *(a3 - 2) <= v18) )
      goto LABEL_10;
    v7 = a2;
    v9 = a2[2];
    v8 = *(a3 - 3);
    goto LABEL_24;
  }
LABEL_9:
  v10 = a2[2];
  *a2 = *v4;
  a2[1] = v4[1];
  a2[2] = v4[2];
  *v4 = v5;
  v4[2] = v10;
  v4[1] = v18;
  v5 = *a2;
  v18 = a2[1];
LABEL_10:
  v11 = a2;
  do
  {
    do
    {
LABEL_11:
      v11 += 3;
      v12 = *v11;
    }
    while ( *v11 < v5 );
    if ( *v11 > v5 )
      break;
LABEL_19:
    ;
  }
  while ( v11[1] < v18 );
  while ( 1 )
  {
    for ( i = v3 - 3; ; i -= 3 )
    {
      v3 = i;
      if ( v5 >= *i && (v5 > *i || i[1] <= v18) )
        break;
    }
    if ( i <= v11 )
      break;
    v14 = v11[1];
    *v11 = *i;
    v11[1] = i[1];
    v19 = v14;
    v15 = v11[2];
    v11[2] = i[2];
    *i = v12;
    v11 += 3;
    i[2] = v15;
    i[1] = v19;
    v12 = *v11;
    v5 = *a2;
    v18 = a2[1];
    if ( *v11 < *a2 )
      goto LABEL_11;
    if ( *v11 <= *a2 )
      goto LABEL_19;
  }
  *a1 = v11;
  return a1;
}
// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_4ed53e  (binary VA: 0x100f890)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>>,int>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gnu_cxx_normal_iterator_4ed53e(unsigned int *a1, unsigned int *a2, int a3)
{
  int result;
  unsigned int *v4;
  int v5;
  int v6;
  int v7;
  unsigned int *v8;
  int v9;
  unsigned int *v10;
  int v11;
  int v12;
  int v13;
  unsigned int *v14;
  unsigned int *v15;
  int v16;
  int v17;
  unsigned int *v18;
  unsigned int *v19;
  int v20;
  unsigned int *i;
  int v22;
  int j;
  unsigned int *v24;
  unsigned int *v25;
  int k;
  unsigned int *v27;
  unsigned int *v28;
  int v29;
  int m;
  unsigned int *v31;
  unsigned int *v32;
  unsigned int *v33;
  int v34;
  unsigned int *v35;
  int v36;
  unsigned int *v37;
  int v38;
  int v39;
  int v40;
  unsigned int *v41;
  unsigned int *v42;
  int n;
  unsigned int *v44;
  int jj;
  unsigned int *v46;
  char *v47;
  char *v48;
  int v49;
  int v50;
  char *v51;
  char *v52;
  unsigned int *v53;
  int v54;
  unsigned int *v55;
  unsigned int *v56;
  int i12;
  int v58;
  int v59;
  int v60;
  unsigned int *v61;
  unsigned int *v62;
  char *v63;
  int kk;
  char *v65;
  int i1;
  unsigned int *v67;
  char *v68;
  char *v69;
  int v70;
  int v71;
  char *i2;
  char *v73;
  char *v74;
  unsigned int *v75;
  int v76;
  int v77;
  unsigned int *v78;
  unsigned int *v79;
  int v80;
  unsigned int *v81;
  int v82;
  int v83;
  unsigned int *v84;
  char *v85;
  int i3;
  char *v87;
  char *v88;
  int i11;
  unsigned int *v90;
  int v91;
  int v92;
  unsigned int *v93;
  unsigned int *v94;
  int v95;
  int v96;
  int v97;
  unsigned int *v98;
  unsigned int *v99;
  int i9;
  unsigned int *v101;
  int v102;
  int i10;
  int v104;
  unsigned int *v105;
  unsigned int *v106;
  unsigned int *v107;
  int i13;
  unsigned int *v109;
  char *v110;
  unsigned int *v111;
  int v112;
  int i14;
  unsigned int *v114;
  int v115;
  unsigned int *v116;
  int i15;
  unsigned int *v118;
  int i5;
  unsigned int *v120;
  char *v121;
  unsigned int *v122;
  int v123;
  int i6;
  unsigned int *v125;
  int v126;
  unsigned int *v127;
  int i7;
  unsigned int *v129;
  typedef unsigned int *_g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef unsigned int *_g4_t_v135;
  typedef unsigned int *_g4_t_v136;
  typedef unsigned int *_g4_t_v137;
  typedef unsigned int *_g4_t_v138;
  typedef unsigned int *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef unsigned int *_g4_t_v142;
  typedef unsigned int *_g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef char *_g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef unsigned int *_g4_t_v150;
  typedef unsigned int _g4_t_nn;
  typedef int _g4_t_v152;
  typedef int _g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef unsigned int *_g4_t_v158;
  typedef unsigned int *_g4_t_v159;
  typedef unsigned int _g4_t_v160;
  typedef unsigned int _g4_t_v161;
  typedef int _g4_t_v162;
  typedef unsigned int _g4_t_v163;
  typedef unsigned int _g4_t_v164;
  typedef char *_g4_t_v165;
  typedef char *_g4_t_v166;
  typedef char *_g4_t_v167;
  typedef unsigned int *_g4_t_v168;
  typedef int _g4_t_v169;
  typedef unsigned int _g4_t_v170;
  typedef int _g4_t_v171;
  typedef uint64_t _g4_t_v172 __attribute__((aligned(1)));
  typedef int _g4_t_v173;
  typedef unsigned int _g4_t_v174;
  typedef unsigned int _g4_t_v175;
  typedef int _g4_t_v176;
  typedef unsigned int _g4_t_v177;
  typedef unsigned int _g4_t_v178;
  typedef unsigned int _g4_t_v179;
  typedef int _g4_t_v180;
  typedef unsigned int _g4_t_v181;
  typedef int _g4_t_v182;
  typedef unsigned int _g4_t_v183;
  typedef unsigned int _g4_t_v184;
  typedef uint64_t _g4_t_v185;
  typedef unsigned int _g4_t_v186;
  typedef unsigned int _g4_t_v187;
  typedef int _g4_t_v188;
  typedef unsigned int _g4_t_v189;
  typedef unsigned int *_g4_t_v190;
  typedef unsigned int _g4_t_v191;
  typedef unsigned int _g4_t_v192;
  typedef unsigned int _g4_t_v193;
  typedef unsigned int _g4_t_v194;
  typedef unsigned int _g4_t_v195;
  typedef unsigned int _g4_t_v196;
  typedef unsigned int *_g4_t_v197;
  typedef int _g4_t_v198;
  typedef int _g4_t_v199;
  typedef unsigned int *_g4_t_ii;
  typedef unsigned int *_g4_t_v201;
  typedef int _g4_t_v202;
  typedef unsigned int _g4_t_v203;
  typedef int _g4_t_v204;
  typedef unsigned int _g4_t_v205;
  typedef int _g4_t_v206;
  typedef int _g4_t_v207;
  typedef int _g4_t_v208;
  typedef int _g4_t_v209;
  typedef int _g4_t_v210;
  typedef unsigned int _g4_t_v211;
  typedef unsigned int _g4_t_v212;
  typedef char *_g4_t_v213;
  typedef unsigned int *_g4_t_v214;
  typedef char *_g4_t_v215;
  typedef unsigned int *_g4_t_v216;
  typedef int _g4_t_v217;
  typedef int _g4_t_v218;
  typedef int _g4_t_v219;
  typedef int _g4_t_v220;
  typedef unsigned int _g4_t_v221;
  typedef unsigned int *_g4_t_mm;
  typedef unsigned int _g4_t_v223;
  typedef int _g4_t_v224;
  typedef char *_g4_t_v225;
  typedef unsigned int *_g4_t_v226;
  typedef unsigned int *_g4_t_v227;
  typedef int _g4_t_v228;
  typedef int _g4_t_v229;
  typedef int _g4_t_v230;
  typedef int _g4_t_v231;
  typedef int _g4_t_v232;
  typedef int _g4_t_v233;
  typedef unsigned int *_g4_t_v234;
  typedef unsigned int *_g4_t_i4;
  typedef unsigned int *_g4_t_i8;
  typedef unsigned int *_g4_t_v237;
  typedef unsigned int *_g4_t_v238;
  typedef int _g4_t_v239;
  typedef unsigned int *_g4_t_v240;
  typedef unsigned int *_g4_t_v241;
  typedef unsigned int *_g4_t_v242;
  typedef int _g4_t_v243;
  typedef char *_g4_t_v244;
  typedef int _g4_t_v245;
  typedef int _g4_t_v246;
  typedef int _g4_t_v247;
  typedef int _g4_t_v248;
  typedef unsigned int *_g4_t_v249;
  typedef int _g4_t_v250;
  typedef unsigned int *_g4_t_v251;
  typedef int _g4_t_v252;
  typedef unsigned int *_g4_t_v253;
  typedef unsigned int *_g4_t_v254;
  typedef char *_g4_t_v255;
  typedef char *_g4_t_v256;
  typedef char *_g4_t_v257;
  typedef unsigned int *_g4_t_v258;
  typedef unsigned int *_g4_t_v259[10];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v130)) > _g4_s0 ? (0u + sizeof(_g4_t_v130)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v131)) > _g4_s1 ? (4u + sizeof(_g4_t_v131)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v132)) > _g4_s2 ? (8u + sizeof(_g4_t_v132)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v133)) > _g4_s3 ? (12u + sizeof(_g4_t_v133)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v134)) > _g4_s4 ? (16u + sizeof(_g4_t_v134)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v135)) > _g4_s5 ? (20u + sizeof(_g4_t_v135)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v136)) > _g4_s6 ? (24u + sizeof(_g4_t_v136)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v137)) > _g4_s7 ? (28u + sizeof(_g4_t_v137)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v138)) > _g4_s8 ? (32u + sizeof(_g4_t_v138)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v139)) > _g4_s9 ? (40u + sizeof(_g4_t_v139)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v140)) > _g4_s10 ? (40u + sizeof(_g4_t_v140)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v141)) > _g4_s11 ? (44u + sizeof(_g4_t_v141)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v142)) > _g4_s12 ? (44u + sizeof(_g4_t_v142)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v143)) > _g4_s13 ? (48u + sizeof(_g4_t_v143)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v144)) > _g4_s14 ? (48u + sizeof(_g4_t_v144)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v145)) > _g4_s15 ? (48u + sizeof(_g4_t_v145)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v146)) > _g4_s16 ? (48u + sizeof(_g4_t_v146)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v147)) > _g4_s17 ? (48u + sizeof(_g4_t_v147)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v148)) > _g4_s18 ? (48u + sizeof(_g4_t_v148)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v149)) > _g4_s19 ? (52u + sizeof(_g4_t_v149)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v150)) > _g4_s20 ? (52u + sizeof(_g4_t_v150)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_nn)) > _g4_s21 ? (52u + sizeof(_g4_t_nn)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v152)) > _g4_s22 ? (52u + sizeof(_g4_t_v152)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v153)) > _g4_s23 ? (52u + sizeof(_g4_t_v153)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v154)) > _g4_s24 ? (52u + sizeof(_g4_t_v154)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v155)) > _g4_s25 ? (52u + sizeof(_g4_t_v155)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v156)) > _g4_s26 ? (52u + sizeof(_g4_t_v156)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v157)) > _g4_s27 ? (52u + sizeof(_g4_t_v157)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v158)) > _g4_s28 ? (56u + sizeof(_g4_t_v158)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v159)) > _g4_s29 ? (56u + sizeof(_g4_t_v159)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v160)) > _g4_s30 ? (56u + sizeof(_g4_t_v160)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v161)) > _g4_s31 ? (56u + sizeof(_g4_t_v161)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v162)) > _g4_s32 ? (56u + sizeof(_g4_t_v162)) : _g4_s32,
    _g4_s34 = (56u + sizeof(_g4_t_v163)) > _g4_s33 ? (56u + sizeof(_g4_t_v163)) : _g4_s33,
    _g4_s35 = (56u + sizeof(_g4_t_v164)) > _g4_s34 ? (56u + sizeof(_g4_t_v164)) : _g4_s34,
    _g4_s36 = (56u + sizeof(_g4_t_v165)) > _g4_s35 ? (56u + sizeof(_g4_t_v165)) : _g4_s35,
    _g4_s37 = (56u + sizeof(_g4_t_v166)) > _g4_s36 ? (56u + sizeof(_g4_t_v166)) : _g4_s36,
    _g4_s38 = (56u + sizeof(_g4_t_v167)) > _g4_s37 ? (56u + sizeof(_g4_t_v167)) : _g4_s37,
    _g4_s39 = (60u + sizeof(_g4_t_v168)) > _g4_s38 ? (60u + sizeof(_g4_t_v168)) : _g4_s38,
    _g4_s40 = (60u + sizeof(_g4_t_v169)) > _g4_s39 ? (60u + sizeof(_g4_t_v169)) : _g4_s39,
    _g4_s41 = (60u + sizeof(_g4_t_v170)) > _g4_s40 ? (60u + sizeof(_g4_t_v170)) : _g4_s40,
    _g4_s42 = (60u + sizeof(_g4_t_v171)) > _g4_s41 ? (60u + sizeof(_g4_t_v171)) : _g4_s41,
    _g4_s43 = (60u + sizeof(_g4_t_v172)) > _g4_s42 ? (60u + sizeof(_g4_t_v172)) : _g4_s42,
    _g4_s44 = (60u + sizeof(_g4_t_v173)) > _g4_s43 ? (60u + sizeof(_g4_t_v173)) : _g4_s43,
    _g4_s45 = (60u + sizeof(_g4_t_v174)) > _g4_s44 ? (60u + sizeof(_g4_t_v174)) : _g4_s44,
    _g4_s46 = (60u + sizeof(_g4_t_v175)) > _g4_s45 ? (60u + sizeof(_g4_t_v175)) : _g4_s45,
    _g4_s47 = (60u + sizeof(_g4_t_v176)) > _g4_s46 ? (60u + sizeof(_g4_t_v176)) : _g4_s46,
    _g4_s48 = (60u + sizeof(_g4_t_v177)) > _g4_s47 ? (60u + sizeof(_g4_t_v177)) : _g4_s47,
    _g4_s49 = (60u + sizeof(_g4_t_v178)) > _g4_s48 ? (60u + sizeof(_g4_t_v178)) : _g4_s48,
    _g4_s50 = (64u + sizeof(_g4_t_v179)) > _g4_s49 ? (64u + sizeof(_g4_t_v179)) : _g4_s49,
    _g4_s51 = (64u + sizeof(_g4_t_v180)) > _g4_s50 ? (64u + sizeof(_g4_t_v180)) : _g4_s50,
    _g4_s52 = (64u + sizeof(_g4_t_v181)) > _g4_s51 ? (64u + sizeof(_g4_t_v181)) : _g4_s51,
    _g4_s53 = (64u + sizeof(_g4_t_v182)) > _g4_s52 ? (64u + sizeof(_g4_t_v182)) : _g4_s52,
    _g4_s54 = (64u + sizeof(_g4_t_v183)) > _g4_s53 ? (64u + sizeof(_g4_t_v183)) : _g4_s53,
    _g4_s55 = (64u + sizeof(_g4_t_v184)) > _g4_s54 ? (64u + sizeof(_g4_t_v184)) : _g4_s54,
    _g4_s56 = (64u + sizeof(_g4_t_v185)) > _g4_s55 ? (64u + sizeof(_g4_t_v185)) : _g4_s55,
    _g4_s57 = (64u + sizeof(_g4_t_v186)) > _g4_s56 ? (64u + sizeof(_g4_t_v186)) : _g4_s56,
    _g4_s58 = (64u + sizeof(_g4_t_v187)) > _g4_s57 ? (64u + sizeof(_g4_t_v187)) : _g4_s57,
    _g4_s59 = (68u + sizeof(_g4_t_v188)) > _g4_s58 ? (68u + sizeof(_g4_t_v188)) : _g4_s58,
    _g4_s60 = (68u + sizeof(_g4_t_v189)) > _g4_s59 ? (68u + sizeof(_g4_t_v189)) : _g4_s59,
    _g4_s61 = (68u + sizeof(_g4_t_v190)) > _g4_s60 ? (68u + sizeof(_g4_t_v190)) : _g4_s60,
    _g4_s62 = (68u + sizeof(_g4_t_v191)) > _g4_s61 ? (68u + sizeof(_g4_t_v191)) : _g4_s61,
    _g4_s63 = (68u + sizeof(_g4_t_v192)) > _g4_s62 ? (68u + sizeof(_g4_t_v192)) : _g4_s62,
    _g4_s64 = (68u + sizeof(_g4_t_v193)) > _g4_s63 ? (68u + sizeof(_g4_t_v193)) : _g4_s63,
    _g4_s65 = (72u + sizeof(_g4_t_v194)) > _g4_s64 ? (72u + sizeof(_g4_t_v194)) : _g4_s64,
    _g4_s66 = (72u + sizeof(_g4_t_v195)) > _g4_s65 ? (72u + sizeof(_g4_t_v195)) : _g4_s65,
    _g4_s67 = (72u + sizeof(_g4_t_v196)) > _g4_s66 ? (72u + sizeof(_g4_t_v196)) : _g4_s66,
    _g4_s68 = (72u + sizeof(_g4_t_v197)) > _g4_s67 ? (72u + sizeof(_g4_t_v197)) : _g4_s67,
    _g4_s69 = (72u + sizeof(_g4_t_v198)) > _g4_s68 ? (72u + sizeof(_g4_t_v198)) : _g4_s68,
    _g4_s70 = (72u + sizeof(_g4_t_v199)) > _g4_s69 ? (72u + sizeof(_g4_t_v199)) : _g4_s69,
    _g4_s71 = (76u + sizeof(_g4_t_ii)) > _g4_s70 ? (76u + sizeof(_g4_t_ii)) : _g4_s70,
    _g4_s72 = (76u + sizeof(_g4_t_v201)) > _g4_s71 ? (76u + sizeof(_g4_t_v201)) : _g4_s71,
    _g4_s73 = (76u + sizeof(_g4_t_v202)) > _g4_s72 ? (76u + sizeof(_g4_t_v202)) : _g4_s72,
    _g4_s74 = (76u + sizeof(_g4_t_v203)) > _g4_s73 ? (76u + sizeof(_g4_t_v203)) : _g4_s73,
    _g4_s75 = (76u + sizeof(_g4_t_v204)) > _g4_s74 ? (76u + sizeof(_g4_t_v204)) : _g4_s74,
    _g4_s76 = (76u + sizeof(_g4_t_v205)) > _g4_s75 ? (76u + sizeof(_g4_t_v205)) : _g4_s75,
    _g4_s77 = (76u + sizeof(_g4_t_v206)) > _g4_s76 ? (76u + sizeof(_g4_t_v206)) : _g4_s76,
    _g4_s78 = (76u + sizeof(_g4_t_v207)) > _g4_s77 ? (76u + sizeof(_g4_t_v207)) : _g4_s77,
    _g4_s79 = (76u + sizeof(_g4_t_v208)) > _g4_s78 ? (76u + sizeof(_g4_t_v208)) : _g4_s78,
    _g4_s80 = (76u + sizeof(_g4_t_v209)) > _g4_s79 ? (76u + sizeof(_g4_t_v209)) : _g4_s79,
    _g4_s81 = (76u + sizeof(_g4_t_v210)) > _g4_s80 ? (76u + sizeof(_g4_t_v210)) : _g4_s80,
    _g4_s82 = (80u + sizeof(_g4_t_v211)) > _g4_s81 ? (80u + sizeof(_g4_t_v211)) : _g4_s81,
    _g4_s83 = (80u + sizeof(_g4_t_v212)) > _g4_s82 ? (80u + sizeof(_g4_t_v212)) : _g4_s82,
    _g4_s84 = (80u + sizeof(_g4_t_v213)) > _g4_s83 ? (80u + sizeof(_g4_t_v213)) : _g4_s83,
    _g4_s85 = (80u + sizeof(_g4_t_v214)) > _g4_s84 ? (80u + sizeof(_g4_t_v214)) : _g4_s84,
    _g4_s86 = (80u + sizeof(_g4_t_v215)) > _g4_s85 ? (80u + sizeof(_g4_t_v215)) : _g4_s85,
    _g4_s87 = (80u + sizeof(_g4_t_v216)) > _g4_s86 ? (80u + sizeof(_g4_t_v216)) : _g4_s86,
    _g4_s88 = (80u + sizeof(_g4_t_v217)) > _g4_s87 ? (80u + sizeof(_g4_t_v217)) : _g4_s87,
    _g4_s89 = (80u + sizeof(_g4_t_v218)) > _g4_s88 ? (80u + sizeof(_g4_t_v218)) : _g4_s88,
    _g4_s90 = (84u + sizeof(_g4_t_v219)) > _g4_s89 ? (84u + sizeof(_g4_t_v219)) : _g4_s89,
    _g4_s91 = (84u + sizeof(_g4_t_v220)) > _g4_s90 ? (84u + sizeof(_g4_t_v220)) : _g4_s90,
    _g4_s92 = (84u + sizeof(_g4_t_v221)) > _g4_s91 ? (84u + sizeof(_g4_t_v221)) : _g4_s91,
    _g4_s93 = (84u + sizeof(_g4_t_mm)) > _g4_s92 ? (84u + sizeof(_g4_t_mm)) : _g4_s92,
    _g4_s94 = (84u + sizeof(_g4_t_v223)) > _g4_s93 ? (84u + sizeof(_g4_t_v223)) : _g4_s93,
    _g4_s95 = (84u + sizeof(_g4_t_v224)) > _g4_s94 ? (84u + sizeof(_g4_t_v224)) : _g4_s94,
    _g4_s96 = (84u + sizeof(_g4_t_v225)) > _g4_s95 ? (84u + sizeof(_g4_t_v225)) : _g4_s95,
    _g4_s97 = (84u + sizeof(_g4_t_v226)) > _g4_s96 ? (84u + sizeof(_g4_t_v226)) : _g4_s96,
    _g4_s98 = (84u + sizeof(_g4_t_v227)) > _g4_s97 ? (84u + sizeof(_g4_t_v227)) : _g4_s97,
    _g4_s99 = (84u + sizeof(_g4_t_v228)) > _g4_s98 ? (84u + sizeof(_g4_t_v228)) : _g4_s98,
    _g4_s100 = (84u + sizeof(_g4_t_v229)) > _g4_s99 ? (84u + sizeof(_g4_t_v229)) : _g4_s99,
    _g4_s101 = (84u + sizeof(_g4_t_v230)) > _g4_s100 ? (84u + sizeof(_g4_t_v230)) : _g4_s100,
    _g4_s102 = (88u + sizeof(_g4_t_v231)) > _g4_s101 ? (88u + sizeof(_g4_t_v231)) : _g4_s101,
    _g4_s103 = (88u + sizeof(_g4_t_v232)) > _g4_s102 ? (88u + sizeof(_g4_t_v232)) : _g4_s102,
    _g4_s104 = (88u + sizeof(_g4_t_v233)) > _g4_s103 ? (88u + sizeof(_g4_t_v233)) : _g4_s103,
    _g4_s105 = (88u + sizeof(_g4_t_v234)) > _g4_s104 ? (88u + sizeof(_g4_t_v234)) : _g4_s104,
    _g4_s106 = (88u + sizeof(_g4_t_i4)) > _g4_s105 ? (88u + sizeof(_g4_t_i4)) : _g4_s105,
    _g4_s107 = (88u + sizeof(_g4_t_i8)) > _g4_s106 ? (88u + sizeof(_g4_t_i8)) : _g4_s106,
    _g4_s108 = (92u + sizeof(_g4_t_v237)) > _g4_s107 ? (92u + sizeof(_g4_t_v237)) : _g4_s107,
    _g4_s109 = (92u + sizeof(_g4_t_v238)) > _g4_s108 ? (92u + sizeof(_g4_t_v238)) : _g4_s108,
    _g4_s110 = (92u + sizeof(_g4_t_v239)) > _g4_s109 ? (92u + sizeof(_g4_t_v239)) : _g4_s109,
    _g4_s111 = (92u + sizeof(_g4_t_v240)) > _g4_s110 ? (92u + sizeof(_g4_t_v240)) : _g4_s110,
    _g4_s112 = (96u + sizeof(_g4_t_v241)) > _g4_s111 ? (96u + sizeof(_g4_t_v241)) : _g4_s111,
    _g4_s113 = (96u + sizeof(_g4_t_v242)) > _g4_s112 ? (96u + sizeof(_g4_t_v242)) : _g4_s112,
    _g4_s114 = (96u + sizeof(_g4_t_v243)) > _g4_s113 ? (96u + sizeof(_g4_t_v243)) : _g4_s113,
    _g4_s115 = (96u + sizeof(_g4_t_v244)) > _g4_s114 ? (96u + sizeof(_g4_t_v244)) : _g4_s114,
    _g4_s116 = (96u + sizeof(_g4_t_v245)) > _g4_s115 ? (96u + sizeof(_g4_t_v245)) : _g4_s115,
    _g4_s117 = (96u + sizeof(_g4_t_v246)) > _g4_s116 ? (96u + sizeof(_g4_t_v246)) : _g4_s116,
    _g4_s118 = (96u + sizeof(_g4_t_v247)) > _g4_s117 ? (96u + sizeof(_g4_t_v247)) : _g4_s117,
    _g4_s119 = (96u + sizeof(_g4_t_v248)) > _g4_s118 ? (96u + sizeof(_g4_t_v248)) : _g4_s118,
    _g4_s120 = (96u + sizeof(_g4_t_v249)) > _g4_s119 ? (96u + sizeof(_g4_t_v249)) : _g4_s119,
    _g4_s121 = (96u + sizeof(_g4_t_v250)) > _g4_s120 ? (96u + sizeof(_g4_t_v250)) : _g4_s120,
    _g4_s122 = (96u + sizeof(_g4_t_v251)) > _g4_s121 ? (96u + sizeof(_g4_t_v251)) : _g4_s121,
    _g4_s123 = (96u + sizeof(_g4_t_v252)) > _g4_s122 ? (96u + sizeof(_g4_t_v252)) : _g4_s122,
    _g4_s124 = (96u + sizeof(_g4_t_v253)) > _g4_s123 ? (96u + sizeof(_g4_t_v253)) : _g4_s123,
    _g4_s125 = (100u + sizeof(_g4_t_v254)) > _g4_s124 ? (100u + sizeof(_g4_t_v254)) : _g4_s124,
    _g4_s126 = (104u + sizeof(_g4_t_v255)) > _g4_s125 ? (104u + sizeof(_g4_t_v255)) : _g4_s125,
    _g4_s127 = (120u + sizeof(_g4_t_v256)) > _g4_s126 ? (120u + sizeof(_g4_t_v256)) : _g4_s126,
    _g4_s128 = (136u + sizeof(_g4_t_v257)) > _g4_s127 ? (136u + sizeof(_g4_t_v257)) : _g4_s127,
    _g4_s129 = (152u + sizeof(_g4_t_v258)) > _g4_s128 ? (152u + sizeof(_g4_t_v258)) : _g4_s128,
    _g4_s130 = (168u + sizeof(_g4_t_v259)) > _g4_s129 ? (168u + sizeof(_g4_t_v259)) : _g4_s129
  };
  alignas(16) uint8_t _g4_sf[_g4_s130];
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 0u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 4u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 8u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 12u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 16u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 20u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 24u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 28u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 32u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 40u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 40u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 44u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 44u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 48u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 48u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 48u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 48u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 48u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 48u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 52u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 52u);
  _g4_t_nn &nn = *reinterpret_cast<_g4_t_nn *>(_g4_sf + 52u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 52u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 52u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 52u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 52u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 52u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 52u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 56u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 56u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 56u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 56u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 56u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 56u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 56u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 56u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 56u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 56u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 60u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 60u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 60u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 60u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 60u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 60u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 60u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 60u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 60u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 60u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 60u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 64u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 64u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 64u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 64u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 64u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 64u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 64u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 64u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 64u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 68u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 68u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 68u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 68u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 68u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 68u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 72u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 72u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 72u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 72u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 72u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 72u);
  _g4_t_ii &ii = *reinterpret_cast<_g4_t_ii *>(_g4_sf + 76u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 76u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 76u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 76u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 76u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 76u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 76u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 76u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 76u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 76u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 76u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 80u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 80u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 80u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 80u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 80u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 80u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 80u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 80u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 84u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 84u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 84u);
  _g4_t_mm &mm = *reinterpret_cast<_g4_t_mm *>(_g4_sf + 84u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 84u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 84u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 84u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 84u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 84u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 84u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 84u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 84u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 88u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 88u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 88u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 88u);
  _g4_t_i4 &i4 = *reinterpret_cast<_g4_t_i4 *>(_g4_sf + 88u);
  _g4_t_i8 &i8 = *reinterpret_cast<_g4_t_i8 *>(_g4_sf + 88u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 92u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 92u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 92u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 92u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 96u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 96u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 96u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 96u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 96u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 96u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 96u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 96u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 96u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 96u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 96u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 96u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 96u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 100u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 104u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 120u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 136u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 152u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 168u);

  v259[6] = (unsigned int *)&a1;
  v135 = a1;
  result = (char *)a2 - (char *)a1;
  v134 = a3;
  if ( (char *)a2 - (char *)a1 > 203 )
  {
    v4 = a2;
    if ( a3 == 0 )
    {
      v240 = a2;
      goto LABEL_212;
    }
    while ( 1 )
    {
      --v134;
      g4_std_compat::unguarded_partition_pivot(
        (unsigned int **)&v255,
        v135,
        v4);
      v5 = (char *)v4 - v255;
      v136 = (unsigned int *)v255;
      if ( (char *)v4 - v255 <= 203 )
      {
        v4 = (unsigned int *)v255;
        v90 = (unsigned int *)v255;
        goto LABEL_208;
      }
      v237 = v4;
      if ( v134 == 0 )
        break;
      v133 = v134;
      while ( 1 )
      {
        --v133;
        g4_std_compat::unguarded_partition_pivot(
          (unsigned int **)&v256,
          v136,
          v4);
        v6 = (char *)v4 - v256;
        v137 = (unsigned int *)v256;
        if ( (char *)v4 - v256 <= 203 )
        {
          v4 = (unsigned int *)v256;
          v53 = (unsigned int *)v256;
          goto LABEL_127;
        }
        v238 = v4;
        if ( v133 == 0 )
          goto LABEL_178;
        v132 = v133;
        do
        {
          --v132;
          g4_std_compat::unguarded_partition_pivot(
            (unsigned int **)&v257,
            v137,
            v4);
          v7 = (char *)v4 - v257;
          v138 = (unsigned int *)v257;
          if ( (char *)v4 - v257 > 203 )
          {
            if ( v132 == 0 )
            {
              v214 = v4;
              goto LABEL_77;
            }
            v8 = v4;
            v131 = v132;
            while ( 1 )
            {
              --v131;
              g4_std_compat::unguarded_partition_pivot(
                &v258,
                v138,
                v8);
              v143 = v258;
              v9 = (char *)v8 - (char *)v258;
              if ( (char *)v8 - (char *)v258 <= 203 )
              {
                v8 = v258;
                v33 = v258;
LABEL_74:
                v7 = (char *)v33 - (char *)v138;
                if ( v7 <= 203 )
                  goto LABEL_125;
                goto LABEL_75;
              }
              v158 = v8;
              if ( v131 != 0 )
              {
                v149 = v131;
                while ( 1 )
                {
                  --v149;
                  g4_std_compat::unguarded_partition_pivot(
                    v259,
                    v143,
                    v8);
                  v10 = v259[0];
                  v11 = (char *)v8 - (char *)v259[0];
                  if ( (char *)v8 - (char *)v259[0] <= 203 )
                  {
                    v8 = v259[0];
                    goto LABEL_21;
                  }
                  v159 = v8;
                  if ( v149 != 0 )
                  {
                    v241 = v259[0];
                    v12 = v149;
                    while ( 1 )
                    {
                      --v12;
                      g4_std_compat::unguarded_partition_pivot(
                        &v254,
                        v241,
                        v8);
                      v130 = v254;
                      g4_std::introsort_loop_gnu_cxx_normal_iterator_4ed53e(
                        v254,
                        v8,
                        v12);
                      v8 = v130;
                      v11 = (char *)v130 - (char *)v241;
                      if ( (char *)v130 - (char *)v241 <= 203 )
                        break;
                      if ( v12 == 0 )
                      {
                        v159 = v130;
                        v10 = v241;
                        goto LABEL_35;
                      }
                    }
                    v10 = v241;
                    v8 = v241;
LABEL_21:
                    v9 = (char *)v10 - (char *)v143;
                    if ( v9 <= 203 )
                      goto LABEL_73;
                    goto LABEL_22;
                  }
LABEL_35:
                  v20 = -1431655765 * (v11 >> 2);
                  v169 = v20 & 1;
                  v232 = (v20 - 1) >> 1;
                  v180 = (v20 - 2) >> 1;
                  v142 = &v10[3 * v180];
                  v139 = &v10[6 * v180 + 3];
                  v220 = v180;
                  v201 = v142;
                  for ( i = v142; ; i = v201 )
                  {
                    v212 = *i;
                    v195 = i[1];
                    v22 = v220;
                    v189 = i[2];
                    if ( v220 < v232 )
                    {
                      for ( j = v220; ; j = v22 )
                      {
                        v22 = 2 * (j + 1) - 1;
                        i = &v10[3 * v22];
                        v25 = &v10[6 * j + 6];
                        if ( *v25 >= *i )
                        {
                          if ( *v25 <= *i )
                          {
                            if ( i[1] <= v25[1] )
                            {
                              i = &v10[6 * j + 6];
                              v22 = 2 * (j + 1);
                            }
                          }
                          else
                          {
                            i = &v10[6 * j + 6];
                            v22 = 2 * (j + 1);
                          }
                        }
                        v24 = &v10[3 * j];
                        *v24 = *i;
                        v24[1] = i[1];
                        v24[2] = i[2];
                        if ( v22 >= v232 )
                          break;
                      }
                    }
                    if ( v169 == 0 && v180 == v22 )
                    {
                      *v142 = *v139;
                      v142[1] = v139[1];
                      v142[2] = v139[2];
                      i = &v10[6 * v180 + 3];
                      v22 = 2 * v180 + 1;
                    }
                    if ( v220 < v22 )
                    {
                      for ( k = (v22 - 1) / 2; ; k = (k - 1) / 2 )
                      {
                        i = &v10[3 * k];
                        if ( *i >= v212 && (*i > v212 || i[1] >= v195) )
                          break;
                        v27 = &v10[3 * v22];
                        *v27 = *i;
                        v27[1] = i[1];
                        v27[2] = i[2];
                        if ( v220 >= k )
                          goto LABEL_54;
                        v22 = k;
                      }
                      i = &v10[3 * v22];
                    }
LABEL_54:
                    i[2] = v189;
                    v201 -= 3;
                    *i = v212;
                    i[1] = v195;
                    if ( v220 == 0 )
                      break;
                    --v220;
                  }
                  v213 = (char *)v159;
                  do
                  {
                    v213 -= 12;
                    v221 = *(uint32_t *)v213;
                    v170 = *((uint32_t *)v213 + 2);
                    v196 = *((uint32_t *)v213 + 1);
                    *(uint32_t *)v213 = *v10;
                    *((uint32_t *)v213 + 1) = v10[1];
                    *((uint32_t *)v213 + 2) = v10[2];
                    v202 = -1431655765 * ((v213 - (char *)v10) >> 2);
                    v28 = v10;
                    v29 = 0;
                    if ( (v202 - 1) / 2 > 0 )
                    {
                      for ( m = 0; ; m = v29 )
                      {
                        v29 = 2 * (m + 1) - 1;
                        v28 = &v10[3 * v29];
                        v32 = &v10[6 * m + 6];
                        if ( *v32 >= *v28 )
                        {
                          if ( *v32 <= *v28 )
                          {
                            if ( v28[1] <= v32[1] )
                            {
                              v28 = &v10[6 * m + 6];
                              v29 = 2 * (m + 1);
                            }
                          }
                          else
                          {
                            v28 = &v10[6 * m + 6];
                            v29 = 2 * (m + 1);
                          }
                        }
                        v31 = &v10[3 * m];
                        *v31 = *v28;
                        v31[1] = v28[1];
                        v31[2] = v28[2];
                        if ( v29 >= (v202 - 1) / 2 )
                          break;
                      }
                    }
                    if ( (v202 & 1) == 0 && v29 == (v202 - 2) / 2 )
                    {
                      v29 = 2 * v29 + 1;
                      v42 = &v10[3 * v29];
                      *v28 = *v42;
                      v28[1] = v42[1];
                      v28[2] = v42[2];
                    }
                    else if ( v29 <= 0 )
                    {
                      goto LABEL_71;
                    }
                    for ( n = (v29 - 1) >> 1; ; n = (n - 1) / 2 )
                    {
                      v28 = &v10[3 * n];
                      if ( v221 <= *v28 && (v221 < *v28 || v196 <= v28[1]) )
                        break;
                      v44 = &v10[3 * v29];
                      *v44 = *v28;
                      v44[1] = v28[1];
                      v44[2] = v28[2];
                      if ( n <= 0 )
                        goto LABEL_71;
                      v29 = n;
                    }
                    v28 = &v10[3 * v29];
LABEL_71:
                    *v28 = v221;
                    v28[1] = v196;
                    v28[2] = v170;
                  }
                  while ( v213 - (char *)v10 > 23 );
                  v8 = v259[0];
                  v9 = (char *)v259[0] - (char *)v143;
                  if ( (char *)v259[0] - (char *)v143 <= 203 )
                  {
LABEL_73:
                    v8 = v258;
                    v33 = v258;
                    goto LABEL_74;
                  }
LABEL_22:
                  if ( v149 == 0 )
                  {
                    v158 = v8;
                    break;
                  }
                }
              }
              v13 = -1431655765 * (v9 >> 2);
              v141 = v13 & 1;
              v14 = v143;
              v231 = (v13 - 1) >> 1;
              v188 = (v13 - 2) >> 1;
              v219 = v188;
              v168 = &v143[3 * v188];
              v150 = &v143[6 * v188 + 3];
              v15 = v168;
              for ( ii = v168; ; v15 = ii )
              {
                v211 = *v15;
                v194 = v15[1];
                v16 = v219;
                v179 = v15[2];
                if ( v219 < v231 )
                {
                  v17 = v219;
                  v242 = v14;
                  while ( 1 )
                  {
                    v16 = 2 * (v17 + 1) - 1;
                    v15 = &v242[3 * v16];
                    v19 = &v242[6 * v17 + 6];
                    if ( *v19 >= *v15 )
                    {
                      if ( *v19 <= *v15 )
                      {
                        if ( v15[1] <= v19[1] )
                        {
                          v15 = &v242[6 * v17 + 6];
                          v16 = 2 * (v17 + 1);
                        }
                      }
                      else
                      {
                        v15 = &v242[6 * v17 + 6];
                        v16 = 2 * (v17 + 1);
                      }
                    }
                    v18 = &v242[3 * v17];
                    *v18 = *v15;
                    v18[1] = v15[1];
                    v18[2] = v15[2];
                    if ( v16 >= v231 )
                      break;
                    v17 = v16;
                  }
                  v14 = v242;
                }
                if ( v141 == 0 && v188 == v16 )
                {
                  *v168 = *v150;
                  v168[1] = v150[1];
                  v168[2] = v150[2];
                  v15 = &v143[6 * v188 + 3];
                  v16 = 2 * v188 + 1;
                }
                if ( v219 < v16 )
                {
                  for ( jj = (v16 - 1) / 2; ; jj = (jj - 1) / 2 )
                  {
                    v15 = &v14[3 * jj];
                    if ( *v15 >= v211 && (*v15 > v211 || v15[1] >= v194) )
                      break;
                    v46 = &v14[3 * v16];
                    *v46 = *v15;
                    v46[1] = v15[1];
                    v46[2] = v15[2];
                    if ( v219 >= jj )
                      goto LABEL_104;
                    v16 = jj;
                  }
                  v15 = &v14[3 * v16];
                }
LABEL_104:
                v15[2] = v179;
                ii -= 3;
                *v15 = v211;
                v15[1] = v194;
                if ( v219 == 0 )
                  break;
                --v219;
              }
              v47 = (char *)v143;
              v215 = (char *)v158;
              do
              {
                v215 -= 12;
                v223 = *(uint32_t *)v215;
                v171 = *((uint32_t *)v215 + 2);
                v203 = *((uint32_t *)v215 + 1);
                *(uint32_t *)v215 = *(uint32_t *)v47;
                *((uint32_t *)v215 + 1) = *((uint32_t *)v47 + 1);
                *((uint32_t *)v215 + 2) = *((uint32_t *)v47 + 2);
                v182 = v215 - v47;
                v198 = -1431655765 * ((v215 - v47) >> 2);
                v48 = v47;
                v49 = 0;
                if ( (v198 - 1) / 2 > 0 )
                {
                  v50 = 0;
                  v244 = v47;
                  while ( 1 )
                  {
                    v49 = 2 * (v50 + 1) - 1;
                    v48 = &v244[12 * v49];
                    v52 = &v244[24 * v50 + 24];
                    if ( *(uint32_t *)v52 >= *(uint32_t *)v48 )
                    {
                      if ( *(uint32_t *)v52 <= *(uint32_t *)v48 )
                      {
                        if ( *((uint32_t *)v48 + 1) <= *((uint32_t *)v52 + 1) )
                        {
                          v48 = &v244[24 * v50 + 24];
                          v49 = 2 * (v50 + 1);
                        }
                      }
                      else
                      {
                        v48 = &v244[24 * v50 + 24];
                        v49 = 2 * (v50 + 1);
                      }
                    }
                    v51 = &v244[12 * v50];
                    *(uint32_t *)v51 = *(uint32_t *)v48;
                    *((uint32_t *)v51 + 1) = *((uint32_t *)v48 + 1);
                    *((uint32_t *)v51 + 2) = *((uint32_t *)v48 + 2);
                    if ( v49 >= (v198 - 1) / 2 )
                      break;
                    v50 = v49;
                  }
                  v47 = v244;
                }
                if ( (v198 & 1) == 0 && v49 == (v198 - 2) / 2 )
                {
                  v49 = 2 * v49 + 1;
                  v63 = &v47[12 * v49];
                  *(uint32_t *)v48 = *(uint32_t *)v63;
                  *((uint32_t *)v48 + 1) = *((uint32_t *)v63 + 1);
                  *((uint32_t *)v48 + 2) = *((uint32_t *)v63 + 2);
                }
                else if ( v49 <= 0 )
                {
                  goto LABEL_123;
                }
                for ( kk = (v49 - 1) >> 1; ; kk = (kk - 1) / 2 )
                {
                  v48 = &v47[12 * kk];
                  if ( v223 <= *(uint32_t *)v48 && (v223 < *(uint32_t *)v48 || *((uint32_t *)v48 + 1) >= v203) )
                    break;
                  v65 = &v47[12 * v49];
                  *(uint32_t *)v65 = *(uint32_t *)v48;
                  *((uint32_t *)v65 + 1) = *((uint32_t *)v48 + 1);
                  *((uint32_t *)v65 + 2) = *((uint32_t *)v48 + 2);
                  if ( kk == 0 )
                    goto LABEL_123;
                  v49 = kk;
                }
                v48 = &v47[12 * v49];
LABEL_123:
                *(uint32_t *)v48 = v223;
                *((uint32_t *)v48 + 1) = v203;
                *((uint32_t *)v48 + 2) = v171;
              }
              while ( v182 > 23 );
              v8 = v258;
              v7 = (char *)v258 - (char *)v138;
              if ( (char *)v258 - (char *)v138 <= 203 )
              {
LABEL_125:
                v4 = (unsigned int *)v257;
                v6 = v257 - (char *)v137;
                if ( v257 - (char *)v137 <= 203 )
                  goto LABEL_126;
                goto LABEL_176;
              }
LABEL_75:
              if ( v131 == 0 )
              {
                v214 = v8;
LABEL_77:
                v34 = -1431655765 * (v7 >> 2);
                v144 = v34 & 1;
                v233 = (v34 - 1) >> 1;
                v239 = (v34 - 2) >> 1;
                v243 = v239;
                v197 = &v138[3 * v239];
                v190 = &v138[6 * v239 + 3];
                v35 = v197;
                for ( mm = v197; ; v35 = mm )
                {
                  v181 = *v35;
                  v36 = v243;
                  v160 = v35[1];
                  for ( nn = v35[2]; v36 < v233; v37[2] = v35[2] )
                  {
                    v38 = v36 + 1;
                    v39 = v36;
                    v40 = 2 * (v36 + 1);
                    v36 = v40 - 1;
                    v140 = v40;
                    v35 = &v138[3 * v40 - 3];
                    v41 = &v138[4 * v38 + v140];
                    if ( *v41 >= *v35 )
                    {
                      if ( *v41 <= *v35 )
                      {
                        if ( v35[1] <= v41[1] )
                        {
                          v35 = &v138[4 * v38 + v140];
                          v36 = v140;
                        }
                      }
                      else
                      {
                        v35 = &v138[4 * v38 + v140];
                        v36 = v140;
                      }
                    }
                    v37 = &v138[3 * v39];
                    *v37 = *v35;
                    v37[1] = v35[1];
                  }
                  if ( v144 == 0 && v239 == v36 )
                  {
                    *v197 = *v190;
                    v197[1] = v190[1];
                    v197[2] = v190[2];
                    v35 = &v138[6 * v239 + 3];
                    v36 = 2 * v239 + 1;
                  }
                  if ( v243 < v36 )
                  {
                    for ( i1 = (v36 - 1) / 2; ; i1 = (i1 - 1) / 2 )
                    {
                      v35 = &v138[3 * i1];
                      if ( v181 <= *v35 && (v181 < *v35 || v35[1] >= v160) )
                        break;
                      v67 = &v138[3 * v36];
                      *v67 = *v35;
                      v67[1] = v35[1];
                      v67[2] = v35[2];
                      if ( v243 >= i1 )
                        goto LABEL_156;
                      v36 = i1;
                    }
                    v35 = &v138[3 * v36];
                  }
LABEL_156:
                  mm -= 3;
                  *v35 = v181;
                  v35[1] = v160;
                  v35[2] = nn;
                  if ( v243 == 0 )
                    break;
                  --v243;
                }
                v68 = (char *)v138;
                v225 = (char *)v214;
                while ( 2 )
                {
                  v225 -= 12;
                  v205 = *(uint32_t *)v225;
                  v162 = *((uint32_t *)v225 + 2);
                  v183 = *((uint32_t *)v225 + 1);
                  *(uint32_t *)v225 = *(uint32_t *)v68;
                  *((uint32_t *)v225 + 1) = *((uint32_t *)v68 + 1);
                  *((uint32_t *)v225 + 2) = *((uint32_t *)v68 + 2);
                  v173 = v225 - v68;
                  v199 = -1431655765 * ((v225 - v68) >> 2);
                  v69 = v68;
                  v70 = 0;
                  if ( (v199 - 1) / 2 > 0 )
                  {
                    v71 = 0;
                    v146 = v68;
                    for ( i2 = v68; ; i2 = v146 )
                    {
                      v70 = 2 * (v71 + 1) - 1;
                      v69 = &i2[12 * v70];
                      v74 = &v146[24 * v71 + 24];
                      if ( *(uint32_t *)v74 >= *(uint32_t *)v69 )
                      {
                        if ( *(uint32_t *)v74 <= *(uint32_t *)v69 )
                        {
                          if ( *((uint32_t *)v69 + 1) <= *((uint32_t *)v74 + 1) )
                          {
                            v69 = &v146[24 * v71 + 24];
                            v70 = 2 * (v71 + 1);
                          }
                        }
                        else
                        {
                          v69 = &v146[24 * v71 + 24];
                          v70 = 2 * (v71 + 1);
                        }
                      }
                      v68 = v146;
                      v73 = &v146[12 * v71];
                      *(uint32_t *)v73 = *(uint32_t *)v69;
                      *((uint32_t *)v73 + 1) = *((uint32_t *)v69 + 1);
                      *((uint32_t *)v73 + 2) = *((uint32_t *)v69 + 2);
                      if ( v70 >= (v199 - 1) / 2 )
                        break;
                      v71 = v70;
                    }
                  }
                  if ( (v199 & 1) == 0 && v70 == (v199 - 2) / 2 )
                  {
                    v70 = 2 * v70 + 1;
                    v85 = &v68[12 * v70];
                    *(uint32_t *)v69 = *(uint32_t *)v85;
                    *((uint32_t *)v69 + 1) = *((uint32_t *)v85 + 1);
                    *((uint32_t *)v69 + 2) = *((uint32_t *)v85 + 2);
                  }
                  else if ( v70 <= 0 )
                  {
                    goto LABEL_173;
                  }
                  for ( i3 = (v70 - 1) >> 1; ; i3 = (i3 - 1) / 2 )
                  {
                    v69 = &v68[12 * i3];
                    if ( *(uint32_t *)v69 >= v205 && (*(uint32_t *)v69 > v205 || v183 <= *((uint32_t *)v69 + 1)) )
                      break;
                    v87 = &v68[12 * v70];
                    *(uint32_t *)v87 = *(uint32_t *)v69;
                    *((uint32_t *)v87 + 1) = *((uint32_t *)v69 + 1);
                    *((uint32_t *)v87 + 2) = *((uint32_t *)v69 + 2);
                    if ( i3 <= 0 )
                      goto LABEL_173;
                    v70 = i3;
                  }
                  v69 = &v68[12 * v70];
LABEL_173:
                  *(uint32_t *)v69 = v205;
                  *((uint32_t *)v69 + 1) = v183;
                  *((uint32_t *)v69 + 2) = v162;
                  if ( v173 <= 23 )
                  {
                    v75 = (unsigned int *)v257;
                    v4 = (unsigned int *)v257;
                    goto LABEL_175;
                  }
                  continue;
                }
              }
            }
          }
          v4 = (unsigned int *)v257;
          v75 = (unsigned int *)v257;
LABEL_175:
          v6 = (char *)v75 - (char *)v137;
          if ( v6 <= 203 )
          {
LABEL_126:
            v4 = (unsigned int *)v256;
            v53 = (unsigned int *)v256;
            goto LABEL_127;
          }
LABEL_176:
          ;
        }
        while ( v132 != 0 );
        v238 = v4;
LABEL_178:
        v76 = -1431655765 * (v6 >> 2);
        v153 = v76 & 1;
        v246 = (v76 - 2) >> 1;
        v206 = (v76 - 1) >> 1;
        v77 = v246;
        v226 = &v137[3 * v246];
        v78 = &v137[6 * v246 + 3];
        v79 = v226;
        for ( i4 = v226; ; v79 = i4 )
        {
          v174 = *v79;
          v191 = v79[1];
          v163 = v79[2];
          v80 = v77;
          if ( v77 < v206 )
          {
            v217 = v77;
            v147 = v77;
            while ( 1 )
            {
              v82 = v77 + 1;
              v83 = 2 * v82;
              v80 = 2 * v82 - 1;
              v84 = &v137[6 * v82];
              v79 = &v137[3 * v80];
              if ( *v84 >= *v79 )
              {
                if ( *v84 <= *v79 )
                {
                  if ( v79[1] <= v84[1] )
                  {
                    v79 = v84;
                    v80 = v83;
                  }
                }
                else
                {
                  v79 = v84;
                  v80 = v83;
                }
              }
              v81 = &v137[3 * v217];
              *v81 = *v79;
              v81[1] = v79[1];
              v81[2] = v79[2];
              if ( v80 >= v206 )
                break;
              v217 = v80;
              v77 = v80;
            }
            v77 = v147;
          }
          if ( v153 == 0 && v246 == v80 )
          {
            *v226 = *v78;
            v226[1] = v78[1];
            v226[2] = v78[2];
            v79 = &v137[6 * v246 + 3];
            v80 = 2 * v246 + 1;
          }
          if ( v77 < v80 )
          {
            for ( i5 = (v80 - 1) / 2; ; i5 = (i5 - 1) / 2 )
            {
              v79 = &v137[3 * i5];
              if ( *v79 >= v174 && (*v79 > v174 || v191 <= v79[1]) )
                break;
              v120 = &v137[3 * v80];
              *v120 = *v79;
              v120[1] = v79[1];
              v120[2] = v79[2];
              if ( v77 >= i5 )
                goto LABEL_302;
              v80 = i5;
            }
            v79 = &v137[3 * v80];
          }
LABEL_302:
          *v79 = v174;
          i4 -= 3;
          v79[1] = v191;
          v79[2] = v163;
          if ( v77 == 0 )
            break;
          --v77;
        }
        v121 = (char *)v238;
        while ( 2 )
        {
          v121 -= 12;
          v187 = *(uint32_t *)v121;
          v193 = *((uint32_t *)v121 + 1);
          v210 = v121 - (char *)v137;
          v178 = *((uint32_t *)v121 + 2);
          *(uint32_t *)v121 = *v137;
          *((uint32_t *)v121 + 1) = v137[1];
          *((uint32_t *)v121 + 2) = v137[2];
          v230 = -1431655765 * ((v121 - (char *)v137) >> 2);
          v122 = v137;
          v123 = 0;
          if ( (v230 - 1) / 2 > 0 )
          {
            v252 = 0;
            v167 = v121;
            for ( i6 = 0; ; i6 = v123 )
            {
              v126 = i6 + 1;
              v123 = 2 * v126 - 1;
              v157 = 2 * v126;
              v122 = &v137[3 * v123];
              v127 = &v137[6 * v126];
              if ( *v127 >= *v122 )
              {
                if ( *v127 <= *v122 )
                {
                  if ( v122[1] <= v127[1] )
                  {
                    v122 = v127;
                    v123 = v157;
                  }
                }
                else
                {
                  v122 = v127;
                  v123 = v157;
                }
              }
              v125 = &v137[3 * v252];
              *v125 = *v122;
              v125[1] = v122[1];
              v125[2] = v122[2];
              if ( (v230 - 1) / 2 <= v123 )
                break;
              v252 = v123;
            }
            v121 = v167;
          }
          if ( (v230 & 1) == 0 && v123 == (v230 - 2) / 2 )
          {
            v123 = 2 * v123 + 1;
            v253 = &v137[3 * v123];
            *v122 = *v253;
            v122[1] = v253[1];
            v122[2] = v253[2];
            goto LABEL_320;
          }
          if ( v123 > 0 )
          {
LABEL_320:
            for ( i7 = (v123 - 1) >> 1; ; i7 = (i7 - 1) / 2 )
            {
              v122 = &v137[3 * i7];
              if ( *v122 >= v187 && (*v122 > v187 || v122[1] >= v193) )
                break;
              v129 = &v137[3 * v123];
              *v129 = *v122;
              v129[1] = v122[1];
              v129[2] = v122[2];
              if ( i7 <= 0 )
                goto LABEL_323;
              v123 = i7;
            }
            v122 = &v137[3 * v123];
          }
LABEL_323:
          *v122 = v187;
          v122[1] = v193;
          v122[2] = v178;
          if ( v210 > 23 )
            continue;
          break;
        }
        v53 = (unsigned int *)v256;
        v4 = (unsigned int *)v256;
LABEL_127:
        v5 = (char *)v53 - (char *)v136;
        if ( v5 <= 203 )
          break;
        if ( v133 == 0 )
        {
          v237 = v4;
          goto LABEL_130;
        }
      }
LABEL_284:
      v90 = (unsigned int *)v255;
      v4 = (unsigned int *)v255;
LABEL_208:
      result = (char *)v90 - (char *)v135;
      if ( result <= 203 )
        return result;
      if ( v134 == 0 )
      {
        v240 = v4;
LABEL_212:
        v91 = -1431655765 * (result >> 2);
        v154 = v91 & 1;
        v207 = (v91 - 1) >> 1;
        v247 = (v91 - 2) >> 1;
        v92 = v247;
        v227 = &v135[3 * v247];
        v93 = &v135[6 * v247 + 3];
        v94 = v227;
        for ( i8 = v227; ; v94 = i8 )
        {
          v175 = *v94;
          v184 = v94[1];
          v164 = v94[2];
          v95 = v92;
          if ( v92 < v207 )
          {
            v218 = v92;
            v148 = v92;
            while ( 1 )
            {
              v96 = v92 + 1;
              v97 = 2 * v96;
              v95 = 2 * v96 - 1;
              v98 = &v135[6 * v96];
              v94 = &v135[3 * v95];
              if ( *v98 >= *v94 )
              {
                if ( *v98 > *v94 )
                {
                  v94 = v98;
                  v95 = v97;
                }
                else if ( v94[1] <= v98[1] )
                {
                  v94 = v98;
                  v95 = v97;
                }
              }
              v99 = &v135[3 * v218];
              *v99 = *v94;
              v99[1] = v94[1];
              v99[2] = v94[2];
              if ( v95 >= v207 )
                break;
              v218 = v95;
              v92 = v95;
            }
            v92 = v148;
          }
          if ( v154 == 0 && v247 == v95 )
          {
            *v227 = *v93;
            v227[1] = v93[1];
            v227[2] = v93[2];
            v94 = &v135[6 * v247 + 3];
            v95 = 2 * v247 + 1;
          }
          if ( v92 < v95 )
          {
            for ( i9 = (v95 - 1) / 2; ; i9 = (i9 - 1) / 2 )
            {
              v94 = &v135[3 * i9];
              if ( *v94 >= v175 && (*v94 > v175 || v94[1] >= v184) )
                break;
              v101 = &v135[3 * v95];
              *v101 = *v94;
              v101[1] = v94[1];
              v101[2] = v94[2];
              if ( v92 >= i9 )
                goto LABEL_231;
              v95 = i9;
            }
            v94 = &v135[3 * v95];
          }
LABEL_231:
          *v94 = v175;
          i8 -= 3;
          v94[1] = v184;
          v94[2] = v164;
          if ( v92 == 0 )
            break;
          --v92;
        }
        v88 = (char *)v240;
        while ( 2 )
        {
          v88 -= 12;
          HIDWORD(v185) = *(uint32_t *)v88;
          LODWORD(v185) = *((uint32_t *)v88 + 1);
          v208 = v88 - (char *)v135;
          v176 = *((uint32_t *)v88 + 2);
          *(uint32_t *)v88 = *v135;
          *((uint32_t *)v88 + 1) = v135[1];
          *((uint32_t *)v88 + 2) = v135[2];
          v228 = -1431655765 * ((v88 - (char *)v135) >> 2);
          result = (int)(uintptr_t)(v135);
          v102 = 0;
          if ( (v228 - 1) / 2 > 0 )
          {
            v248 = 0;
            v165 = v88;
            for ( i10 = 0; ; i10 = v102 )
            {
              v104 = i10 + 1;
              v102 = 2 * v104 - 1;
              v155 = 2 * v104;
              result = (int)(uintptr_t)(&v135[3 * v102]);
              v105 = &v135[6 * v104];
              if ( *v105 >= *(uint32_t *)result )
              {
                if ( *v105 > *(uint32_t *)result )
                {
                  result = (int)(uintptr_t)(v105);
                  v102 = v155;
                }
                else if ( *(uint32_t *)(result + 4) <= v105[1] )
                {
                  result = (int)(uintptr_t)(v105);
                  v102 = v155;
                }
              }
              v106 = &v135[3 * v248];
              *v106 = *(uint32_t *)result;
              v106[1] = *(uint32_t *)(result + 4);
              v106[2] = *(uint32_t *)(result + 8);
              if ( v102 >= (v228 - 1) / 2 )
                break;
              v248 = v102;
            }
            v88 = v165;
          }
          if ( (v228 & 1) != 0 || v102 != (v228 - 2) / 2 )
          {
            if ( v102 > 0 )
            {
LABEL_201:
              for ( i11 = (v102 - 1) >> 1; ; i11 = (i11 - 1) / 2 )
              {
                result = (int)(uintptr_t)(&v135[3 * i11]);
                if ( __PAIR64__(*(uint32_t *)result, *(uint32_t *)(result + 4)) >= v185 )
                  break;
                v107 = &v135[3 * v102];
                *v107 = *(uint32_t *)result;
                v107[1] = *(uint32_t *)(result + 4);
                v107[2] = *(uint32_t *)(result + 8);
                if ( i11 == 0 )
                  goto LABEL_204;
                v102 = i11;
              }
              result = (int)(uintptr_t)(&v135[3 * v102]);
            }
LABEL_204:
            *(uint32_t *)result = HIDWORD(v185);
            *(uint32_t *)(result + 4) = v185;
            *(uint32_t *)(result + 8) = v176;
            if ( v208 <= 23 )
              return result;
            continue;
          }
          break;
        }
        v102 = 2 * v102 + 1;
        v249 = &v135[3 * v102];
        *(uint32_t *)result = *v249;
        *(uint32_t *)(result + 4) = v249[1];
        *(uint32_t *)(result + 8) = v249[2];
        goto LABEL_201;
      }
    }
LABEL_130:
    v54 = -1431655765 * (v5 >> 2);
    v152 = v54 & 1;
    v245 = (v54 - 2) >> 1;
    v204 = (v54 - 1) >> 1;
    v216 = &v136[3 * v245];
    v55 = &v136[6 * v245 + 3];
    v56 = v216;
    v234 = v216;
    for ( i12 = v245; ; --i12 )
    {
      HIDWORD(v172) = *v56;
      LODWORD(v172) = v56[1];
      v161 = v56[2];
      v58 = i12;
      if ( i12 < v204 )
      {
        v224 = i12;
        v145 = i12;
        while ( 1 )
        {
          v59 = i12 + 1;
          v60 = 2 * v59;
          v58 = 2 * v59 - 1;
          v61 = &v136[6 * v59];
          v56 = &v136[3 * v58];
          if ( *v61 >= *v56 )
          {
            if ( *v61 > *v56 )
            {
              v56 = v61;
              v58 = v60;
            }
            else if ( v56[1] <= v61[1] )
            {
              v56 = v61;
              v58 = v60;
            }
          }
          v62 = &v136[3 * v224];
          *v62 = *v56;
          v62[1] = v56[1];
          v62[2] = v56[2];
          if ( v58 >= v204 )
            break;
          v224 = v58;
          i12 = v58;
        }
        i12 = v145;
      }
      if ( v152 == 0 && v245 == v58 )
      {
        *v216 = *v55;
        v216[1] = v55[1];
        v216[2] = v55[2];
        v56 = &v136[6 * v245 + 3];
        v58 = 2 * v245 + 1;
      }
      if ( i12 < v58 )
      {
        for ( i13 = (v58 - 1) / 2; ; i13 = (i13 - 1) / 2 )
        {
          v56 = &v136[3 * i13];
          if ( __PAIR64__(*v56, v56[1]) >= v172 )
            break;
          v109 = &v136[3 * v58];
          *v109 = *v56;
          v109[1] = v56[1];
          v109[2] = v56[2];
          if ( i12 >= i13 )
            goto LABEL_260;
          v58 = i13;
        }
        v56 = &v136[3 * v58];
      }
LABEL_260:
      *v56 = HIDWORD(v172);
      v234 -= 3;
      v56[1] = v172;
      v56[2] = v161;
      if ( i12 == 0 )
        break;
      v56 = v234;
    }
    v110 = (char *)v237;
    while ( 1 )
    {
      v110 -= 12;
      v186 = *(uint32_t *)v110;
      v192 = *((uint32_t *)v110 + 1);
      v209 = v110 - (char *)v136;
      v177 = *((uint32_t *)v110 + 2);
      *(uint32_t *)v110 = *v136;
      *((uint32_t *)v110 + 1) = v136[1];
      *((uint32_t *)v110 + 2) = v136[2];
      v229 = -1431655765 * ((v110 - (char *)v136) >> 2);
      v111 = v136;
      v112 = 0;
      if ( (v229 - 1) / 2 > 0 )
      {
        v250 = 0;
        v166 = v110;
        for ( i14 = 0; ; i14 = v112 )
        {
          v115 = i14 + 1;
          v112 = 2 * v115 - 1;
          v156 = 2 * v115;
          v111 = &v136[3 * v112];
          v116 = &v136[6 * v115];
          if ( *v116 >= *v111 )
          {
            if ( *v116 <= *v111 )
            {
              if ( v111[1] <= v116[1] )
              {
                v111 = v116;
                v112 = v156;
              }
            }
            else
            {
              v111 = v116;
              v112 = v156;
            }
          }
          v114 = &v136[3 * v250];
          *v114 = *v111;
          v114[1] = v111[1];
          v114[2] = v111[2];
          if ( v112 >= (v229 - 1) / 2 )
            break;
          v250 = v112;
        }
        v110 = v166;
      }
      if ( (v229 & 1) == 0 && v112 == (v229 - 2) / 2 )
        break;
      if ( v112 > 0 )
        goto LABEL_278;
LABEL_283:
      *v111 = v186;
      v111[1] = v192;
      v111[2] = v177;
      if ( v209 <= 23 )
        goto LABEL_284;
    }
    v112 = 2 * v112 + 1;
    v251 = &v136[3 * v112];
    *v111 = *v251;
    v111[1] = v251[1];
    v111[2] = v251[2];
LABEL_278:
    for ( i15 = (v112 - 1) >> 1; ; i15 = (i15 - 1) / 2 )
    {
      v111 = &v136[3 * i15];
      if ( *v111 >= v186 && (*v111 > v186 || v111[1] >= v192) )
        break;
      v118 = &v136[3 * v112];
      *v118 = *v111;
      v118[1] = v111[1];
      v118[2] = v111[2];
      if ( i15 == 0 )
        goto LABEL_283;
      v112 = i15;
    }
    v111 = &v136[3 * v112];
    goto LABEL_283;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10117F0  (binary VA: 0x10117f0)
// Original: sub_10117F0
// ----------------------------------------------------------------------------
uint32_t * sub_10117F0(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  uint32_t *v6;
  uint32_t *v7;
  volatile int32_t *v8;
  volatile int32_t *v9;
  volatile int32_t *v10;
  size_t v12;
  size_t n;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  size_t v20;
  int v21;
  unsigned int v22;
  size_t v23;
  int v24;
  int v25;
  size_t v26;
  int v27;
  unsigned int v28;
  size_t v29;
  int v30;
  int v31;
  size_t v32;
  int v33;
  unsigned int v34;
  size_t v35;
  int v36;
  int v37;
  uint8_t *src;
  volatile int32_t *srca;
  volatile int32_t *srcb;
  volatile int32_t *srcc;
  unsigned int v42;
  size_t v43;
  size_t v44;
  size_t v45;
  size_t v46;
  size_t v47;
  size_t v48;
  size_t v49;
  char v50;
  int v51;
  int v52;
  unsigned int v53;
  void *v54;
  uint8_t *v55;
  uint8_t *v56;
  void *v57;
  uint8_t *dest;
  void *desta;
  void *destb;

  v50 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
  {
    v12 = *(uint32_t *)(*(uint32_t *)a5 - 12);
    n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v51 = n;
    if ( n > v12 )
      n = *(uint32_t *)(*(uint32_t *)a5 - 12);
    v14 = memcmp(*(const void **)a5, *(const void **)(a4 + 16), n);
    v15 = v12 - v51;
    if ( v14 == 0 )
      v14 = v15;
    v50 = v14 < 0;
  }
  v6 = (uint32_t *)VoxAllocInternal(
                   0x44u,
                   0,
                   (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                   (int)(uintptr_t)("internal_new"),
                   181);
  if ( v6 != (uint32_t *)-16 )
  {
    v7 = *(uint32_t **)a5;
    if ( *(int *)(*(uint32_t *)a5 - 4) < 0 )
    {
      v16 = *(v7 - 3);
      v53 = *(v7 - 2);
      if ( v16 > 0x3FFFFFFC )
        goto LABEL_96;
      if ( v16 > v53 && v16 < 2 * v53 )
        v16 = 2 * v53;
      if ( v16 + 29 > 0x1000 && v53 < v16 )
      {
        v17 = v16 + 4096 - (((uint16_t)v16 + 29) & 0xFFF);
        v16 = 1073741820;
        if ( v17 <= 0x3FFFFFFC )
          v16 = v17;
      }
      src = *(uint8_t **)a5;
      v42 = v16;
      v18 = VoxAllocInternal(v16 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v18 + 8) = 0;
      *(uint32_t *)(v18 + 4) = v42;
      v43 = v18;
      dest = nullptr;
      v54 = (void *)(v18 + 12);
      v19 = *((uint32_t *)src - 3);
      if ( v19 != 0 )
      {
        if ( v19 == 1 )
          *(uint8_t *)(v18 + 12) = *src;
        else
          memcpy(v54, src, *((uint32_t *)src - 3));
        dest = *((uint8_t **)src - 3);
      }
      if ( (uint32_t *)v43 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
      {
        *(uint32_t *)(v43 + 8) = 0;
        *(uint32_t *)v43 = (uint32_t)(uintptr_t)(dest);
        dest[v43 + 12] = 0;
      }
      v6[4] = (uint32_t)(uintptr_t)(v54);
      v8 = *(volatile int32_t **)(a5 + 4);
      if ( *((int *)v8 - 1) >= 0 )
      {
LABEL_7:
        if ( v8 - 3 != (volatile int32_t *)(uintptr_t)(g4_empty_string_rep) )
          __sync_add_and_fetch(v8 - 1, 1u);
        v6[5] = (uint32_t)(uintptr_t)(v8);
        v9 = *(volatile int32_t **)(a5 + 8);
        if ( *((int *)v9 - 1) >= 0 )
        {
LABEL_10:
          if ( v9 - 3 != (volatile int32_t *)(uintptr_t)(g4_empty_string_rep) )
            __sync_add_and_fetch(v9 - 1, 1u);
          v6[6] = (uint32_t)(uintptr_t)(v9);
          v10 = *(volatile int32_t **)(a5 + 12);
          if ( *((int *)v10 - 1) >= 0 )
          {
LABEL_13:
            if ( v10 - 3 != (volatile int32_t *)(uintptr_t)(g4_empty_string_rep) )
              __sync_add_and_fetch(v10 - 1, 1u);
LABEL_15:
            v6[7] = (uint32_t)(uintptr_t)(v10);
            v6[8] = *(uint32_t *)(a5 + 16);
            v6[9] = *(uint32_t *)(a5 + 20);
            v6[10] = *(uint32_t *)(a5 + 24);
            v6[11] = *(uint32_t *)(a5 + 28);
            v6[12] = *(uint32_t *)(a5 + 32);
            v6[13] = *(uint32_t *)(a5 + 36);
            v6[14] = *(uint32_t *)(a5 + 40);
            v6[15] = *(uint32_t *)(a5 + 44);
            v6[16] = *(uint32_t *)(a5 + 48);
            goto LABEL_16;
          }
          goto LABEL_63;
        }
LABEL_49:
        v26 = *((uint32_t *)v9 - 2);
        v46 = *((uint32_t *)v9 - 3);
        if ( v46 > 0x3FFFFFFC )
          goto LABEL_96;
        if ( v46 > v26 )
        {
          v27 = 2 * v26;
          if ( v46 >= 2 * v26 )
            v27 = *((uint32_t *)v9 - 3);
          v46 = v27;
        }
        if ( v46 + 29 <= 0x1000 || v26 >= v46 )
        {
          v29 = v46 + 13;
        }
        else
        {
          v28 = v46 + 4096 - (((uint16_t)v46 + 29) & 0xFFF);
          if ( v28 > 0x3FFFFFFC )
            v28 = 1073741820;
          v46 = v28;
          v29 = v28 + 13;
        }
        srcb = v9;
        v30 = VoxAllocInternal(v29, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        *(uint32_t *)(v30 + 8) = 0;
        *(uint32_t *)(v30 + 4) = v46;
        v56 = (uint8_t *)v30;
        destb = (void *)(v30 + 12);
        v47 = *((uint32_t *)srcb - 3);
        v31 = 0;
        if ( v47 != 0 )
        {
          if ( v47 == 1 )
            v56[12] = *(uint8_t *)srcb;
          else
            memcpy(destb, (const void *)srcb, v47);
          v31 = *((uint32_t *)srcb - 3);
        }
        if ( v56 != (uint8_t *)g4_empty_string_rep )
        {
          *((uint32_t *)v56 + 2) = 0;
          *(uint32_t *)v56 = v31;
          v56[v31 + 12] = 0;
        }
        v6[6] = (uint32_t)(uintptr_t)(destb);
        v10 = *(volatile int32_t **)(a5 + 12);
        if ( *((int *)v10 - 1) >= 0 )
          goto LABEL_13;
LABEL_63:
        v32 = *((uint32_t *)v10 - 2);
        v48 = *((uint32_t *)v10 - 3);
        if ( v48 <= 0x3FFFFFFC )
        {
          if ( v48 > v32 )
          {
            v33 = 2 * v32;
            if ( v48 >= 2 * v32 )
              v33 = *((uint32_t *)v10 - 3);
            v48 = v33;
          }
          if ( v48 + 29 <= 0x1000 || v32 >= v48 )
          {
            v35 = v48 + 13;
          }
          else
          {
            v34 = v48 + 4096 - (((uint16_t)v48 + 29) & 0xFFF);
            if ( v34 > 0x3FFFFFFC )
              v34 = 1073741820;
            v48 = v34;
            v35 = v34 + 13;
          }
          srcc = v10;
          v36 = VoxAllocInternal(v35, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
          *(uint32_t *)(v36 + 8) = 0;
          *(uint32_t *)(v36 + 4) = v48;
          v52 = v36;
          v57 = (void *)(v36 + 12);
          v49 = *((uint32_t *)srcc - 3);
          v37 = 0;
          if ( v49 != 0 )
          {
            if ( v49 == 1 )
              *(uint8_t *)(v52 + 12) = *(uint8_t *)srcc;
            else
              memcpy(v57, (const void *)srcc, v49);
            v37 = *((uint32_t *)srcc - 3);
          }
          if ( (uint32_t *)v52 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
          {
            *(uint32_t *)(v52 + 8) = 0;
            *(uint32_t *)v52 = v37;
            *(uint8_t *)(v52 + v37 + 12) = 0;
          }
          v10 = (volatile int32_t *)v57;
          goto LABEL_15;
        }
LABEL_96:
        sub_1900180("basic_string::_S_create");
      }
    }
    else
    {
      if ( v7 - 3 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
        __sync_add_and_fetch(v7 - 1, 1u);
      v6[4] = (uint32_t)(uintptr_t)(v7);
      v8 = *(volatile int32_t **)(a5 + 4);
      if ( *((int *)v8 - 1) >= 0 )
        goto LABEL_7;
    }
    v44 = *((uint32_t *)v8 - 3);
    v20 = *((uint32_t *)v8 - 2);
    if ( v44 > 0x3FFFFFFC )
      goto LABEL_96;
    if ( v44 > v20 )
    {
      v21 = 2 * v20;
      if ( v44 >= 2 * v20 )
        v21 = *((uint32_t *)v8 - 3);
      v44 = v21;
    }
    if ( v44 + 29 <= 0x1000 || v20 >= v44 )
    {
      v23 = v44 + 13;
    }
    else
    {
      v22 = v44 + 4096 - (((uint16_t)v44 + 29) & 0xFFF);
      if ( v22 > 0x3FFFFFFC )
        v22 = 1073741820;
      v44 = v22;
      v23 = v22 + 13;
    }
    srca = v8;
    v24 = VoxAllocInternal(v23, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v24 + 8) = 0;
    *(uint32_t *)(v24 + 4) = v44;
    v55 = (uint8_t *)v24;
    desta = (void *)(v24 + 12);
    v45 = *((uint32_t *)srca - 3);
    v25 = 0;
    if ( v45 != 0 )
    {
      if ( v45 == 1 )
        v55[12] = *(uint8_t *)srca;
      else
        memcpy(desta, (const void *)srca, v45);
      v25 = *((uint32_t *)srca - 3);
    }
    if ( v55 != (uint8_t *)g4_empty_string_rep )
    {
      *((uint32_t *)v55 + 2) = 0;
      *(uint32_t *)v55 = v25;
      v55[v25 + 12] = 0;
    }
    v6[5] = (uint32_t)(uintptr_t)(desta);
    v9 = *(volatile int32_t **)(a5 + 8);
    if ( *((int *)v9 - 1) >= 0 )
      goto LABEL_10;
    goto LABEL_49;
  }
LABEL_16:
  sub_1904970(v50, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v6);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1011F90  (binary VA: 0x1011f90)
// Original: sub_1011F90
// ----------------------------------------------------------------------------
int sub_1011F90(uint32_t *a1, uint32_t *a2)
{
  uint8_t *v2;
  int v3;
  size_t v4;
  size_t v5;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  char *v13;
  size_t v14;
  uint32_t *v15;
  int v16;
  int v17;
  uint32_t *v18;
  size_t v19;
  size_t v20;
  int v21;
  int v22;
  char *v23;
  char *v24;
  char *v25;
  int v27;
  int v28;
  int v29;
  uint32_t *v30;
  size_t v31;
  size_t v32;
  int v33;
  int i;
  int v35;
  uint32_t *v36;
  size_t v37;
  size_t v38;
  int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  int v54;
  int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  int v60;
  size_t v61;
  size_t v62;
  size_t v63;
  int v64;
  int v65;
  int v66;
  char v67;
  uint32_t *v68;
  int v69;
  size_t v70;
  size_t v71;
  int v72;
  bool v73;
  int v74;
  size_t v75;
  int v76;
  int v77;
  size_t v78;
  size_t v79;
  int v80;
  int v81;
  int v82;
  char v83;
  uint32_t *v84;
  int v85;
  size_t v86;
  size_t v87;
  int v88;
  int v89;
  size_t v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  typedef int _g4_t_v97;
  typedef size_t _g4_t_v98;
  typedef size_t _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef size_t _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef size_t _g4_t_v107;
  typedef char *_g4_t_v108;
  typedef uint32_t *_g4_t_v109;
  typedef char _g4_t_v110;
  typedef uint32_t *_g4_t_v112;
  typedef uint32_t *_g4_t_v113;
  typedef int _g4_t_v114;
  typedef uint8_t *_g4_t_v115;
  typedef size_t _g4_t_v116;
  typedef size_t _g4_t_v117;
  typedef int _g4_t_v118;
  typedef uint32_t _g4_t_v119[13];
  typedef uint32_t *_g4_t_v120;
  typedef char *_g4_t_v121;
  typedef char *_g4_t_v122;
  typedef char *_g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int16_t _g4_t_v126;
  typedef int16_t _g4_t_v127;
  typedef int16_t _g4_t_v128;
  typedef int16_t _g4_t_v129;
  typedef int16_t _g4_t_v130;
  typedef int16_t _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int16_t _g4_t_v135;
  typedef int16_t _g4_t_v136;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v97)) > _g4_s0 ? (4u + sizeof(_g4_t_v97)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v98)) > _g4_s1 ? (40u + sizeof(_g4_t_v98)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v99)) > _g4_s2 ? (40u + sizeof(_g4_t_v99)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v100)) > _g4_s3 ? (40u + sizeof(_g4_t_v100)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v101)) > _g4_s4 ? (40u + sizeof(_g4_t_v101)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v102)) > _g4_s5 ? (40u + sizeof(_g4_t_v102)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v103)) > _g4_s6 ? (40u + sizeof(_g4_t_v103)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v104)) > _g4_s7 ? (40u + sizeof(_g4_t_v104)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v105)) > _g4_s8 ? (40u + sizeof(_g4_t_v105)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v106)) > _g4_s9 ? (44u + sizeof(_g4_t_v106)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v107)) > _g4_s10 ? (44u + sizeof(_g4_t_v107)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v108)) > _g4_s11 ? (48u + sizeof(_g4_t_v108)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v109)) > _g4_s12 ? (52u + sizeof(_g4_t_v109)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v110)) > _g4_s13 ? (52u + sizeof(_g4_t_v110)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v112)) > _g4_s14 ? (64u + sizeof(_g4_t_v112)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v113)) > _g4_s15 ? (64u + sizeof(_g4_t_v113)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v114)) > _g4_s16 ? (68u + sizeof(_g4_t_v114)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v115)) > _g4_s17 ? (72u + sizeof(_g4_t_v115)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v116)) > _g4_s18 ? (72u + sizeof(_g4_t_v116)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v117)) > _g4_s19 ? (72u + sizeof(_g4_t_v117)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v118)) > _g4_s20 ? (72u + sizeof(_g4_t_v118)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v119)) > _g4_s21 ? (76u + sizeof(_g4_t_v119)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v120)) > _g4_s22 ? (128u + sizeof(_g4_t_v120)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v121)) > _g4_s23 ? (132u + sizeof(_g4_t_v121)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v122)) > _g4_s24 ? (136u + sizeof(_g4_t_v122)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v123)) > _g4_s25 ? (140u + sizeof(_g4_t_v123)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v124)) > _g4_s26 ? (144u + sizeof(_g4_t_v124)) : _g4_s26,
    _g4_s28 = (148u + sizeof(_g4_t_v125)) > _g4_s27 ? (148u + sizeof(_g4_t_v125)) : _g4_s27,
    _g4_s29 = (152u + sizeof(_g4_t_v126)) > _g4_s28 ? (152u + sizeof(_g4_t_v126)) : _g4_s28,
    _g4_s30 = (154u + sizeof(_g4_t_v127)) > _g4_s29 ? (154u + sizeof(_g4_t_v127)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v128)) > _g4_s30 ? (156u + sizeof(_g4_t_v128)) : _g4_s30,
    _g4_s32 = (158u + sizeof(_g4_t_v129)) > _g4_s31 ? (158u + sizeof(_g4_t_v129)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v130)) > _g4_s32 ? (160u + sizeof(_g4_t_v130)) : _g4_s32,
    _g4_s34 = (162u + sizeof(_g4_t_v131)) > _g4_s33 ? (162u + sizeof(_g4_t_v131)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v132)) > _g4_s34 ? (164u + sizeof(_g4_t_v132)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v133)) > _g4_s35 ? (168u + sizeof(_g4_t_v133)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v134)) > _g4_s36 ? (172u + sizeof(_g4_t_v134)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v135)) > _g4_s37 ? (176u + sizeof(_g4_t_v135)) : _g4_s37,
    _g4_s39 = (178u + sizeof(_g4_t_v136)) > _g4_s38 ? (178u + sizeof(_g4_t_v136)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 4u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 40u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 40u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 40u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 40u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 40u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 40u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 40u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 40u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 44u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 44u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 48u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 52u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 52u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 64u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 64u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 68u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 72u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 72u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 72u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 72u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 76u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 128u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 132u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 136u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 140u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 144u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 148u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 152u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 154u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 156u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 158u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 160u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 162u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 164u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 168u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 172u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 176u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 178u);

  v2 = (uint8_t *)*a2;
  v112 = a1 + 1;
  v115 = v2;
  v3 = a1[2];
  if ( v3 == 0 )
  {
    v114 = (int)(uintptr_t)(a1 + 1);
    goto LABEL_16;
  }
  v4 = *((uint32_t *)v2 - 3);
  v114 = (int)(uintptr_t)(a1 + 1);
  do
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
      v6 = v5;
      v98 = v4;
      if ( v4 <= v5 )
        v6 = v4;
      v7 = memcmp(*(const void **)(v3 + 16), v115, v6);
      v4 = v98;
      v8 = v5 - v98;
      if ( v7 == 0 )
        v7 = v8;
      if ( v7 < 0 )
        break;
      v114 = v3;
      v3 = *(uint32_t *)(v3 + 8);
      if ( v3 == 0 )
        goto LABEL_10;
    }
    v3 = *(uint32_t *)(v3 + 12);
  }
  while ( v3 != 0 );
LABEL_10:
  if ( v112 == (uint32_t *)v114 )
    goto LABEL_16;
  v9 = *(uint32_t *)(*(uint32_t *)(v114 + 16) - 12);
  v10 = v9;
  if ( v98 <= v9 )
    v10 = v98;
  v11 = memcmp(v115, *(const void **)(v114 + 16), v10);
  if ( v11 == 0 )
    v11 = v98 - v9;
  if ( v11 < 0 )
  {
LABEL_16:
    memset(&v119[1], 0, 0x30u);
    if ( *((int *)v115 - 1) < 0 )
    {
      v40 = *((uint32_t *)v115 - 3);
      v41 = *((uint32_t *)v115 - 2);
      if ( v40 > 0x3FFFFFFC )
        goto LABEL_190;
      if ( v40 > v41 && v40 < 2 * v41 )
        v40 = 2 * v41;
      if ( v40 + 29 > 0x1000 && v41 < v40 )
      {
        v42 = v40 + 4096 - (((uint16_t)v40 + 29) & 0xFFF);
        v40 = 1073741820;
        if ( v42 <= 0x3FFFFFFC )
          v40 = v42;
      }
      v43 = VoxAllocInternal(v40 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v43 + 4) = v40;
      *(uint32_t *)(v43 + 8) = 0;
      v44 = 0;
      v45 = *((uint32_t *)v115 - 3);
      if ( v45 != 0 )
      {
        if ( v45 == 1 )
          *(uint8_t *)(v43 + 12) = *v115;
        else
          memcpy((void *)(v43 + 12), v115, *((uint32_t *)v115 - 3));
        v44 = *((uint32_t *)v115 - 3);
      }
      if ( (uint32_t *)v43 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
      {
        *(uint32_t *)(v43 + 8) = 0;
        *(uint32_t *)v43 = v44;
        *(uint8_t *)(v43 + v44 + 12) = 0;
      }
      v115 = (uint8_t *)(v43 + 12);
    }
    else if ( v115 - 12 != (uint8_t *)g4_empty_string_rep )
    {
      __sync_add_and_fetch((volatile int32_t *)v115 - 1, 1u);
    }
    v12 = g4_empty_string_rep[2];
    v120 = (uint32_t *)(v115);
    if ( v12 >= 0 )
    {
      v121 = (char *)(byte_20E1FB4);
LABEL_21:
      v122 = (char *)(byte_20E1FB4);
      v108 = (char *)(byte_20E1FB4);
      v13 = (char *)(byte_20E1FB4);
      goto LABEL_22;
    }
    v46 = g4_empty_string_rep[0];
    v47 = g4_empty_string_rep[1];
    if ( g4_empty_string_rep[0] <= 0x3FFFFFFCu )
    {
      if ( g4_empty_string_rep[0] > v47
        &(void *)g4_empty_string_rep[0] < (void *)(intptr_t)(2 * v47) )
      {
        v46 = 2 * v47;
      }
      if ( v46 + 29 > 0x1000 && v47 < v46 )
      {
        v48 = v46 + 4096 - (((uint16_t)v46 + 29) & 0xFFF);
        v46 = 1073741820;
        if ( v48 <= 0x3FFFFFFC )
          v46 = v48;
      }
      v49 = VoxAllocInternal(v46 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v49 + 4) = v46;
      *(uint32_t *)(v49 + 8) = 0;
      v50 = 0;
      if ( g4_empty_string_rep[0] != 0 )
      {
        if ( g4_empty_string_rep[0] == 1 )
        {
          *(uint8_t *)(v49 + 12) = byte_20E1FB4[0];
          v50 = 1;
        }
        else
        {
          memcpy(
            (void *)(v49 + 12),
            byte_20E1FB4,
            g4_empty_string_rep[0]);
          v50 = g4_empty_string_rep[0];
        }
      }
      if ( (uint32_t *)v49 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
      {
        *(uint32_t *)(v49 + 8) = 0;
        *(uint32_t *)v49 = v50;
        *(uint8_t *)(v49 + v50 + 12) = 0;
      }
      v121 = (char *)(v49 + 12);
      if ( (int)g4_empty_string_rep[2] >= 0 )
        goto LABEL_21;
      v51 = g4_empty_string_rep[0];
      v52 = g4_empty_string_rep[1];
      if ( g4_empty_string_rep[0] <= 0x3FFFFFFCu )
      {
        if ( g4_empty_string_rep[0] > v52
          &(void *)g4_empty_string_rep[0] < (void *)(intptr_t)(2 * v52) )
        {
          v51 = 2 * v52;
        }
        if ( v51 + 29 > 0x1000 && v52 < v51 )
        {
          v53 = v51 + 4096 - (((uint16_t)v51 + 29) & 0xFFF);
          v51 = 1073741820;
          if ( v53 <= 0x3FFFFFFC )
            v51 = v53;
        }
        v54 = VoxAllocInternal(
                v51 + 13,
                0,
                (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                (int)(uintptr_t)("internal_new"),
                181);
        *(uint32_t *)(v54 + 4) = v51;
        *(uint32_t *)(v54 + 8) = 0;
        v55 = 0;
        if ( g4_empty_string_rep[0] != 0 )
        {
          if ( g4_empty_string_rep[0] == 1 )
          {
            *(uint8_t *)(v54 + 12) = byte_20E1FB4[0];
            v55 = 1;
          }
          else
          {
            memcpy(
              (void *)(v54 + 12),
              byte_20E1FB4,
              g4_empty_string_rep[0]);
            v55 = g4_empty_string_rep[0];
          }
        }
        if ( (uint32_t *)v54 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
        {
          *(uint32_t *)(v54 + 8) = 0;
          *(uint32_t *)v54 = v55;
          *(uint8_t *)(v54 + v55 + 12) = 0;
        }
        v122 = (char *)(v54 + 12);
        if ( (int)g4_empty_string_rep[2] >= 0 )
        {
          v108 = (char *)(byte_20E1FB4);
          v13 = (char *)(byte_20E1FB4);
          goto LABEL_22;
        }
        v56 = g4_empty_string_rep[0];
        v57 = g4_empty_string_rep[1];
        if ( g4_empty_string_rep[0] <= 0x3FFFFFFCu )
        {
          if ( g4_empty_string_rep[0] > v57
            &(void *)g4_empty_string_rep[0] < (void *)(intptr_t)(2 * v57) )
          {
            v56 = 2 * v57;
          }
          if ( v56 + 29 > 0x1000 && v57 < v56 )
          {
            v58 = v56 + 4096 - (((uint16_t)v56 + 29) & 0xFFF);
            v56 = 1073741820;
            if ( v58 <= 0x3FFFFFFC )
              v56 = v58;
          }
          v59 = VoxAllocInternal(
                  v56 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          *(uint32_t *)(v59 + 4) = v56;
          *(uint32_t *)(v59 + 8) = 0;
          v60 = 0;
          if ( g4_empty_string_rep[0] != 0 )
          {
            if ( g4_empty_string_rep[0] == 1 )
            {
              *(uint8_t *)(v59 + 12) = byte_20E1FB4[0];
              v60 = 1;
            }
            else
            {
              memcpy(
                (void *)(v59 + 12),
                byte_20E1FB4,
                g4_empty_string_rep[0]);
              v60 = g4_empty_string_rep[0];
            }
          }
          if ( (uint32_t *)v59 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
          {
            *(uint32_t *)(v59 + 8) = 0;
            *(uint32_t *)v59 = v60;
            *(uint8_t *)(v59 + v60 + 12) = 0;
          }
          v108 = (char *)(v59 + 12);
          v13 = (char *)(v59 + 12);
LABEL_22:
          v123 = v13;
          v131 = HIWORD(v119[8]);
          v124 = 0;
          v125 = 0;
          v126 = 0;
          v127 = 0;
          v128 = 0;
          v129 = 0;
          v130 = 0;
          v132 = 0;
          v133 = 0;
          v134 = 0;
          v135 = 0;
          v136 = 0;
          if ( v112 != (uint32_t *)v114 )
          {
            v109 = v120;
            v14 = *(v120 - 3);
            v116 = v14;
            v15 = *(uint32_t **)(v114 + 16);
            v99 = *(v15 - 3);
            if ( v99 <= v14 )
              v14 = *(v15 - 3);
            v16 = memcmp(v120, *(const void **)(v114 + 16), v14);
            if ( v16 == 0 )
              v16 = v116 - v99;
            if ( v16 < 0 )
            {
              v106 = a1[3];
              if ( v106 == v114 )
              {
                sub_10117F0(v119, (int)(uintptr_t)(a1), v114, v114, (int)(uintptr_t)(&v120));
                goto LABEL_36;
              }
              v17 = sub_1904940(v114);
              v18 = *(uint32_t **)(v17 + 16);
              v19 = v116;
              v20 = *(v18 - 3);
              if ( v20 <= v116 )
                v19 = *(v18 - 3);
              v21 = memcmp(v18, v109, v19);
              v22 = v20 - v116;
              if ( v21 == 0 )
                v21 = v22;
              if ( v21 < 0 )
              {
                if ( *(uint32_t *)(v17 + 12) != 0 )
                  sub_10117F0(v119, (int)(uintptr_t)(a1), v114, v114, (int)(uintptr_t)(&v120));
                else
                  sub_10117F0(v119, (int)(uintptr_t)(a1), 0, v17, (int)(uintptr_t)(&v120));
                goto LABEL_36;
              }
              v66 = a1[2];
              if ( v66 != 0 )
              {
                do
                {
                  v68 = *(uint32_t **)(v66 + 16);
                  v69 = v66;
                  v70 = v116;
                  v71 = *(v68 - 3);
                  if ( v71 <= v116 )
                    v70 = *(v68 - 3);
                  v101 = v69;
                  v72 = memcmp(v109, v68, v70);
                  if ( v72 == 0 )
                    v72 = v116 - v71;
                  if ( v72 < 0 )
                  {
                    v66 = *(uint32_t *)(v101 + 8);
                    v67 = 1;
                  }
                  else
                  {
                    v66 = *(uint32_t *)(v101 + 12);
                    v67 = 0;
                  }
                }
                while ( v66 != 0 );
                v114 = v101;
                v73 = v67 == 0;
                v74 = v101;
                if ( v73 )
                  goto LABEL_140;
                v28 = v101;
              }
              else
              {
                v28 = (int)(uintptr_t)(v112);
                v114 = (int)(uintptr_t)(v112);
              }
              if ( v106 != v28 )
              {
                v93 = sub_19048F0(v28);
                v68 = *(uint32_t **)(v93 + 16);
                v74 = v114;
                v114 = v93;
                v71 = *(v68 - 3);
LABEL_140:
                v75 = v116;
                if ( v71 <= v116 )
                  v75 = v71;
                v102 = v74;
                v76 = memcmp(v68, v109, v75);
                v77 = v71 - v116;
                if ( v76 == 0 )
                  v76 = v77;
                if ( v76 < 0 )
                {
                  sub_10117F0(v119, (int)(uintptr_t)(a1), 0, v102, (int)(uintptr_t)(&v120));
LABEL_36:
                  v114 = v119[0];
                  v108 = v123;
                }
LABEL_37:
                if ( v108 - 12 != (char *)g4_empty_string_rep
                  && __sync_fetch_and_add((volatile int32_t *)v108 - 1, 0xFFFFFFFF) <= 0 )
                {
                  VoxFreeInternal(v108 - 12);
                }
                v23 = v122 - 12;
                if ( v122 - 12 != (char *)g4_empty_string_rep
                  && __sync_fetch_and_add((volatile int32_t *)v122 - 1, 0xFFFFFFFF) <= 0 )
                {
                  VoxFreeInternal(v23);
                }
                v24 = v121 - 12;
                if ( v121 - 12 != (char *)g4_empty_string_rep
                  && __sync_fetch_and_add((volatile int32_t *)v121 - 1, 0xFFFFFFFF) <= 0 )
                {
                  VoxFreeInternal(v24);
                }
                v25 = (char *)(v120 - 3);
                if ( v120 - 3 != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                  && __sync_fetch_and_add(v120 - 1, 0xFFFFFFFF) <= 0 )
                {
                  VoxFreeInternal(v25);
                }
                return v114 + 20;
              }
LABEL_188:
              sub_10117F0(v119, (int)(uintptr_t)(a1), 0, v28, (int)(uintptr_t)(&v120));
              goto LABEL_36;
            }
            v27 = memcmp(v15, v109, v14);
            if ( v27 == 0 )
              v27 = v99 - v116;
            if ( v27 >= 0 )
              goto LABEL_37;
            v28 = v114;
            if ( a1[4] == v114 )
              goto LABEL_188;
            v29 = sub_19048E0(v114);
            v30 = *(uint32_t **)(v29 + 16);
            v31 = v116;
            v32 = *(v30 - 3);
            if ( v32 <= v116 )
              v31 = *(v30 - 3);
            v33 = memcmp(v109, v30, v31);
            if ( v33 == 0 )
              v33 = v116 - v32;
            if ( v33 < 0 )
            {
              if ( *(uint32_t *)(v114 + 12) != 0 )
                sub_10117F0(v119, (int)(uintptr_t)(a1), v29, v29, (int)(uintptr_t)(&v120));
              else
                sub_10117F0(v119, (int)(uintptr_t)(a1), 0, v114, (int)(uintptr_t)(&v120));
              goto LABEL_36;
            }
            v82 = a1[2];
            if ( v82 != 0 )
            {
              do
              {
                v84 = *(uint32_t **)(v82 + 16);
                v85 = v82;
                v86 = v116;
                v87 = *(v84 - 3);
                if ( v87 <= v116 )
                  v86 = *(v84 - 3);
                v104 = v85;
                v88 = memcmp(v109, v84, v86);
                if ( v88 == 0 )
                  v88 = v116 - v87;
                if ( v88 < 0 )
                {
                  v82 = *(uint32_t *)(v104 + 8);
                  v83 = 1;
                }
                else
                {
                  v82 = *(uint32_t *)(v104 + 12);
                  v83 = 0;
                }
              }
              while ( v82 != 0 );
              v114 = v104;
              v73 = v83 == 0;
              v89 = v104;
              if ( v73 )
                goto LABEL_163;
              v96 = v104;
            }
            else
            {
              v96 = (int)(uintptr_t)(v112);
              v114 = (int)(uintptr_t)(v112);
            }
            if ( a1[3] != v96 )
            {
              v95 = sub_19048F0(v96);
              v84 = *(uint32_t **)(v95 + 16);
              v89 = v114;
              v114 = v95;
              v87 = *(v84 - 3);
LABEL_163:
              v90 = v116;
              if ( v87 <= v116 )
                v90 = v87;
              v105 = v89;
              v91 = memcmp(v84, v109, v90);
              v92 = v87 - v116;
              if ( v91 == 0 )
                v91 = v92;
              if ( v91 >= 0 )
                goto LABEL_37;
              v97 = v105;
              goto LABEL_169;
            }
LABEL_189:
            v97 = v96;
LABEL_169:
            sub_10117F0(v119, (int)(uintptr_t)(a1), 0, v97, (int)(uintptr_t)(&v120));
            goto LABEL_36;
          }
          if ( a1[5] != 0 )
          {
            v118 = a1[4];
            v61 = *(uint32_t *)(*(uint32_t *)(v118 + 16) - 12);
            v62 = *(v120 - 3);
            v63 = v61;
            if ( v62 <= v61 )
              v63 = *(v120 - 3);
            v64 = v61 - v62;
            v65 = memcmp(*(const void **)(v118 + 16), v120, v63);
            if ( v65 == 0 )
              v65 = v64;
            if ( v65 < 0 )
            {
LABEL_119:
              sub_10117F0(v119, (int)(uintptr_t)(a1), 0, v118, (int)(uintptr_t)(&v120));
              goto LABEL_36;
            }
          }
          if ( a1[2] != 0 )
          {
            v113 = v120;
            v107 = *(v120 - 3);
            for ( i = a1[2]; ; i = v35 )
            {
              v36 = *(uint32_t **)(i + 16);
              v37 = v107;
              v38 = *(v36 - 3);
              if ( v38 <= v107 )
                v37 = *(v36 - 3);
              v117 = v37;
              v100 = i;
              v39 = memcmp(v113, v36, v37);
              if ( v39 == 0 )
                v39 = v107 - v38;
              if ( v39 < 0 )
              {
                v35 = *(uint32_t *)(v100 + 8);
                v110 = 1;
              }
              else
              {
                v35 = *(uint32_t *)(v100 + 12);
                v110 = 0;
              }
              if ( v35 == 0 )
                break;
            }
            v114 = v100;
            v78 = v117;
            v79 = v107;
            v118 = v100;
            if ( v110 == 0 )
            {
LABEL_147:
              v103 = v79;
              v80 = memcmp(v36, v113, v78);
              v81 = v38 - v103;
              if ( v80 == 0 )
                v80 = v81;
              if ( v80 >= 0 )
                goto LABEL_37;
              goto LABEL_119;
            }
            v96 = v100;
          }
          else
          {
            v96 = (int)(uintptr_t)(v112);
            v114 = (int)(uintptr_t)(v112);
          }
          if ( a1[3] == v96 )
            goto LABEL_189;
          v94 = sub_19048F0(v96);
          v36 = *(uint32_t **)(v94 + 16);
          v113 = v120;
          v118 = v114;
          v79 = *(v120 - 3);
          v38 = *(v36 - 3);
          v78 = v79;
          v114 = v94;
          if ( v38 <= v79 )
            v78 = *(v36 - 3);
          goto LABEL_147;
        }
      }
    }
LABEL_190:
    sub_1900180("basic_string::_S_create");
  }
  return v114 + 20;
}

// ----------------------------------------------------------------------------
// Function: g4_std::basic_string_char_char_traits_char_vo_fb0ee3::opAssign  (binary VA: 0x1015d50)
// Original: std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>::operator=
// ----------------------------------------------------------------------------
void ** g4_std::basic_string_char_char_traits_char_vo_fb0ee3::opAssign(void **self, char *s)
{
  size_t v2;
  char *v3;
  size_t n;
  size_t v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  uint8_t *v9;
  unsigned int v11;
  int v12;
  char *v13;

  v2 = strlen(s);
  v3 = (char *)*self;
  n = v2;
  if ( v2 > 0x3FFFFFFC )
    sub_1900180("basic_string::assign");
  if ( s >= v3 && s <= &v3[*((uint32_t *)*self - 3)] && *((int *)v3 - 1) <= 0 )
  {
    if ( v2 <= s - v3 )
    {
      if ( v2 != 1 )
      {
        memcpy(*self, s, v2);
        v3 = (char *)*self;
        goto LABEL_23;
      }
    }
    else
    {
      if ( s == v3 )
        goto LABEL_23;
      if ( v2 != 1 )
      {
        memmove(*self, s, v2);
        v3 = (char *)*self;
        goto LABEL_23;
      }
    }
    *v3 = *s;
    v3 = (char *)*self;
LABEL_23:
    if ( v3 - 12 != (char *)g4_empty_string_rep )
    {
      *((uint32_t *)v3 - 1) = 0;
      *((uint32_t *)v3 - 3) = n;
      v3[n] = 0;
    }
    return self;
  }
  v5 = *((uint32_t *)v3 - 2);
  if ( n > v5 )
  {
    v6 = 2 * v5;
    if ( n >= 2 * v5 )
      v6 = n;
    goto LABEL_6;
  }
  v6 = n;
  if ( *((int *)v3 - 1) > 0 )
  {
LABEL_6:
    if ( v6 + 29 > 0x1000 && v5 < v6 )
    {
      v7 = v6 + 4096 - (((uint16_t)v6 + 29) & 0xFFF);
      v6 = 1073741820;
      if ( v7 <= 0x3FFFFFFC )
        v6 = v7;
    }
    v11 = v6;
    v8 = VoxAllocInternal(v6 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v8 + 8) = 0;
    *(uint32_t *)(v8 + 4) = v11;
    v12 = v8;
    v13 = (char *)*self - 12;
    if ( v13 != (char *)g4_empty_string_rep
      && __sync_fetch_and_add((volatile int32_t *)*self - 1, 0xFFFFFFFF) <= 0 )
    {
      VoxFreeInternal(v13);
    }
    v3 = (char *)(v12 + 12);
    *self = (void *)(v12 + 12);
  }
  if ( v3 - 12 != (char *)g4_empty_string_rep )
  {
    *((uint32_t *)v3 - 1) = 0;
    *((uint32_t *)v3 - 3) = n;
    v3[n] = 0;
  }
  if ( n != 0 )
  {
    v9 = (uint8_t *)(*self);
    if ( n == 1 )
      *v9 = *s;
    else
      memcpy(v9, s, n);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_basic_string_char_char_t_31aa61::M_erase  (binary VA: 0x1015f90)
// Original: std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,vox::SZipFileEntry>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,vox::SZipFileEntry>>,vox::StringComp,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,vox::SZipFileEntry>,(vox::VoxMemHint)0>>::_M_erase
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_basic_string_char_char_t_31aa61::M_erase(int a1, uint32_t *a2)
{
  uint32_t *result;
  uint32_t *i;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint32_t *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  uint32_t *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  uint32_t *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  uint32_t *v46;
  int v47;
  int v48;
  int v49;
  uint32_t *v50;
  uint32_t *v51;
  uint32_t *v52;
  uint32_t *v53;
  uint32_t *v54;
  uint32_t *v55;
  uint32_t *v56;

  result = a2;
  if ( a2 != nullptr )
  {
    for ( i = a2; ; i = v46 )
    {
      v52 = (uint32_t *)i[3];
      if ( v52 != nullptr )
      {
        while ( 1 )
        {
          v53 = (uint32_t *)v52[3];
          if ( v53 != nullptr )
          {
            while ( 1 )
            {
              v54 = (uint32_t *)v53[3];
              if ( v54 != nullptr )
              {
                while ( 1 )
                {
                  v55 = (uint32_t *)v54[3];
                  if ( v55 != nullptr )
                  {
                    while ( 1 )
                    {
                      v56 = (uint32_t *)v55[3];
                      if ( v56 != nullptr )
                      {
                        while ( 1 )
                        {
                          v51 = (uint32_t *)v56[3];
                          if ( v51 != nullptr )
                          {
                            while ( 1 )
                            {
                              v50 = (uint32_t *)v51[3];
                              if ( v50 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v4 = v50[3];
                                  if ( v4 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_basic_string_char_char_t_31aa61::M_erase(
                                        a1,
                                        *(void **)(v4 + 12));
                                      v5 = *(uint32_t *)(v4 + 28);
                                      v6 = *(uint32_t *)(v4 + 8);
                                      if ( (uint32_t *)(v5 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                                        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        VoxFreeInternal((void *)(v5 - 12));
                                      }
                                      v7 = *(uint32_t *)(v4 + 24);
                                      if ( (uint32_t *)(v7 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                                        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        VoxFreeInternal((void *)(v7 - 12));
                                      }
                                      v8 = *(uint32_t *)(v4 + 20);
                                      if ( (uint32_t *)(v8 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                                        && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        VoxFreeInternal((void *)(v8 - 12));
                                      }
                                      v9 = *(uint32_t *)(v4 + 16);
                                      if ( (uint32_t *)(v9 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                                        && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        VoxFreeInternal((void *)(v9 - 12));
                                      }
                                      VoxFreeInternal((void *)v4);
                                      if ( v6 == 0 )
                                        break;
                                      v4 = v6;
                                    }
                                  }
                                  v10 = v50[7];
                                  v11 = (uint32_t *)v50[2];
                                  if ( (uint32_t *)(v10 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                                    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    VoxFreeInternal((void *)(v10 - 12));
                                  }
                                  v12 = v50[6];
                                  if ( (uint32_t *)(v12 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                                    && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    VoxFreeInternal((void *)(v12 - 12));
                                  }
                                  v13 = v50[5];
                                  if ( (uint32_t *)(v13 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                                    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    VoxFreeInternal((void *)(v13 - 12));
                                  }
                                  v14 = v50[4];
                                  if ( (uint32_t *)(v14 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                                    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    VoxFreeInternal((void *)(v14 - 12));
                                  }
                                  VoxFreeInternal(v50);
                                  if ( v11 == nullptr )
                                    break;
                                  v50 = v11;
                                }
                              }
                              v15 = v51[7];
                              v16 = (uint32_t *)v51[2];
                              if ( (uint32_t *)(v15 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                                && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                VoxFreeInternal((void *)(v15 - 12));
                              }
                              v17 = v51[6];
                              if ( (uint32_t *)(v17 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                                && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                VoxFreeInternal((void *)(v17 - 12));
                              }
                              v18 = v51[5];
                              if ( (uint32_t *)(v18 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                                && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                VoxFreeInternal((void *)(v18 - 12));
                              }
                              v19 = v51[4];
                              if ( (uint32_t *)(v19 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                                && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                VoxFreeInternal((void *)(v19 - 12));
                              }
                              VoxFreeInternal(v51);
                              if ( v16 == nullptr )
                                break;
                              v51 = v16;
                            }
                          }
                          v20 = v56[7];
                          v21 = (uint32_t *)v56[2];
                          if ( (uint32_t *)(v20 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                            && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            VoxFreeInternal((void *)(v20 - 12));
                          }
                          v22 = v56[6];
                          if ( (uint32_t *)(v22 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            VoxFreeInternal((void *)(v22 - 12));
                          }
                          v23 = v56[5];
                          if ( (uint32_t *)(v23 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                            && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            VoxFreeInternal((void *)(v23 - 12));
                          }
                          v24 = v56[4];
                          if ( (uint32_t *)(v24 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            VoxFreeInternal((void *)(v24 - 12));
                          }
                          VoxFreeInternal(v56);
                          if ( v21 == nullptr )
                            break;
                          v56 = v21;
                        }
                      }
                      v25 = v55[7];
                      v26 = (uint32_t *)v55[2];
                      if ( (uint32_t *)(v25 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                        && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        VoxFreeInternal((void *)(v25 - 12));
                      }
                      v27 = v55[6];
                      if ( (uint32_t *)(v27 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        VoxFreeInternal((void *)(v27 - 12));
                      }
                      v28 = v55[5];
                      if ( (uint32_t *)(v28 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                        && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        VoxFreeInternal((void *)(v28 - 12));
                      }
                      v29 = v55[4];
                      if ( (uint32_t *)(v29 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                        && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        VoxFreeInternal((void *)(v29 - 12));
                      }
                      VoxFreeInternal(v55);
                      if ( v26 == nullptr )
                        break;
                      v55 = v26;
                    }
                  }
                  v30 = v54[7];
                  v31 = (uint32_t *)v54[2];
                  if ( (uint32_t *)(v30 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    VoxFreeInternal((void *)(v30 - 12));
                  }
                  v32 = v54[6];
                  if ( (uint32_t *)(v32 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    VoxFreeInternal((void *)(v32 - 12));
                  }
                  v33 = v54[5];
                  if ( (uint32_t *)(v33 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    VoxFreeInternal((void *)(v33 - 12));
                  }
                  v34 = v54[4];
                  if ( (uint32_t *)(v34 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    VoxFreeInternal((void *)(v34 - 12));
                  }
                  VoxFreeInternal(v54);
                  if ( v31 == nullptr )
                    break;
                  v54 = v31;
                }
              }
              v35 = v53[7];
              v36 = (uint32_t *)v53[2];
              if ( (uint32_t *)(v35 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
              {
                VoxFreeInternal((void *)(v35 - 12));
              }
              v37 = v53[6];
              if ( (uint32_t *)(v37 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
              {
                VoxFreeInternal((void *)(v37 - 12));
              }
              v38 = v53[5];
              if ( (uint32_t *)(v38 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
              {
                VoxFreeInternal((void *)(v38 - 12));
              }
              v39 = v53[4];
              if ( (uint32_t *)(v39 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)                && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
              {
                VoxFreeInternal((void *)(v39 - 12));
              }
              VoxFreeInternal(v53);
              if ( v36 == nullptr )
                break;
              v53 = v36;
            }
          }
          v40 = v52[7];
          v41 = (uint32_t *)v52[2];
          if ( (uint32_t *)(v40 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)            && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
          {
            VoxFreeInternal((void *)(v40 - 12));
          }
          v42 = v52[6];
          if ( (uint32_t *)(v42 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)            && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
          {
            VoxFreeInternal((void *)(v42 - 12));
          }
          v43 = v52[5];
          if ( (uint32_t *)(v43 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)            && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
          {
            VoxFreeInternal((void *)(v43 - 12));
          }
          v44 = v52[4];
          if ( (uint32_t *)(v44 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)            && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
          {
            VoxFreeInternal((void *)(v44 - 12));
          }
          VoxFreeInternal(v52);
          if ( v41 == nullptr )
            break;
          v52 = v41;
        }
      }
      v45 = a2[7];
      v46 = (uint32_t *)a2[2];
      if ( (uint32_t *)(v45 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)        && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
      {
        VoxFreeInternal((void *)(v45 - 12));
      }
      v47 = a2[6];
      if ( (uint32_t *)(v47 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)        && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
      {
        VoxFreeInternal((void *)(v47 - 12));
      }
      v48 = a2[5];
      if ( (uint32_t *)(v48 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)        && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
      {
        VoxFreeInternal((void *)(v48 - 12));
      }
      v49 = a2[4];
      if ( (uint32_t *)(v49 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)        && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
      {
        VoxFreeInternal((void *)(v49 - 12));
      }
      result = (uint32_t *)VoxFreeInternal(a2);
      if ( v46 == nullptr )
        break;
      a2 = v46;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: VoxAllocInternal  (binary VA: 0x1016820)
// Original: VoxAllocInternal
// ----------------------------------------------------------------------------
int VoxAllocInternal(size_t a1, const char *a2, const char *a3, int a4)
{
  return sub_4EC020(a1, (int)(uintptr_t)(a2), (int)(uintptr_t)(a3), a4);
}

// ----------------------------------------------------------------------------
// Function: VoxAllocInternal  (binary VA: 0x1016860)
// Original: VoxAllocInternal
// ----------------------------------------------------------------------------
int VoxAllocInternal(size_t a1)
{
  return sub_4EC060(a1);
}

// ----------------------------------------------------------------------------
// Function: VoxAllocInternal_ea1016890  (binary VA: 0x1016890)
// Original: VoxAllocInternal
// ----------------------------------------------------------------------------
int VoxAllocInternal_ea1016890(size_t a1)
{
  return sub_4EC0E0(a1);
}

// ----------------------------------------------------------------------------
// Function: VoxAllocInternal  (binary VA: 0x10168c0)
// Original: VoxAllocInternal
// ----------------------------------------------------------------------------
int VoxAllocInternal(size_t a1, int a2, int a3, int a4, int a5)
{
  return sub_4EC0A0(a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: VoxFreeInternal  (binary VA: 0x1016910)
// Original: VoxFreeInternal
// ----------------------------------------------------------------------------
int VoxFreeInternal(void *a1)
{
  return sub_4EC120((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: VoxAlloc_c  (binary VA: 0x1016940)
// Original: VoxAlloc_c
// ----------------------------------------------------------------------------
int VoxAlloc_c(size_t a1, int a2, int a3, int a4)
{
  return sub_4EC020(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: VoxFree_c  (binary VA: 0x1016980)
// Original: VoxFree_c
// ----------------------------------------------------------------------------
int VoxFree_c(int a1)
{
  return sub_4EC120(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1016F20  (binary VA: 0x1016f20)
// Original: sub_1016F20
// ----------------------------------------------------------------------------
int sub_1016F20(unsigned int *a1, unsigned int *a2, int a3)
{
  unsigned int *v3;
  int result;
  unsigned int *v5;
  unsigned int v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int *v11;
  unsigned int *v12;
  unsigned int *v13;
  uint32_t *v14;
  unsigned int *v15;
  unsigned int *v16;
  unsigned int v17;
  unsigned int *v18;
  unsigned int v19;
  int v20;
  unsigned int *v21;
  unsigned int *v22;
  int i5;
  int v24;
  int i6;
  int v26;
  int v27;
  int v28;
  unsigned int *v29;
  unsigned int *v30;
  unsigned int v31;
  unsigned int *v32;
  int v33;
  char *v34;
  char *i;
  unsigned int *v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  char *v41;
  unsigned int *v42;
  unsigned int *v43;
  uint32_t *v44;
  unsigned int *v45;
  char *v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  char *v50;
  char *j;
  unsigned int *v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  char *v57;
  unsigned int *v58;
  unsigned int *v59;
  uint32_t *v60;
  unsigned int *v61;
  char *v62;
  unsigned int v63;
  int v64;
  int v65;
  unsigned int *v66;
  int i3;
  unsigned int *v68;
  int v69;
  int i4;
  int v71;
  int v72;
  int v73;
  unsigned int *v74;
  unsigned int *v75;
  unsigned int v76;
  unsigned int *v77;
  char *v78;
  unsigned int v79;
  unsigned int *v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  unsigned int *v86;
  unsigned int v87;
  unsigned int *v88;
  int v89;
  unsigned int v90;
  unsigned int *v91;
  unsigned int *v92;
  int v93;
  unsigned int v94;
  unsigned int *v95;
  int v96;
  int v97;
  char *v98;
  unsigned int *i1;
  int v100;
  int i2;
  int v102;
  int v103;
  int v104;
  char *v105;
  char *v106;
  int v107;
  char *v108;
  unsigned int v109;
  unsigned int *v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  unsigned int *v116;
  unsigned int v117;
  unsigned int *v118;
  int v119;
  unsigned int v120;
  unsigned int *v121;
  unsigned int *v122;
  int v123;
  unsigned int v124;
  unsigned int *v125;
  char *v126;
  unsigned int v127;
  char *v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  char *v134;
  int v135;
  char *v136;
  int v137;
  unsigned int v138;
  unsigned int *v139;
  char *v140;
  int v141;
  unsigned int v142;
  unsigned int *v143;
  int v144;
  char *v145;
  char *k;
  unsigned int *v147;
  unsigned int v148;
  unsigned int v149;
  unsigned int v150;
  unsigned int v151;
  char *v152;
  int v153;
  char *m;
  char *v155;
  int v156;
  int v157;
  char *v158;
  unsigned int v159;
  char *v160;
  unsigned int v161;
  unsigned int v162;
  int v163;
  unsigned int *v164;
  unsigned int v165;
  unsigned int v166;
  unsigned int *n;
  unsigned int v168;
  char *v169;
  unsigned int v170;
  int v171;
  char *v172;
  unsigned int v173;
  unsigned int v174;
  unsigned int *v175;
  unsigned int v176;
  unsigned int v177;
  char *v178;
  int v179;
  char *ii;
  unsigned int v181;
  char *v182;
  int v183;
  int v184;
  int v185;
  int v186;
  char *v187;
  int v188;
  int v189;
  char *v190;
  int v191;
  int v192;
  int v193;
  unsigned int *v194;
  int v195;
  unsigned int v196;
  char *v197;
  unsigned int v198;
  int v199;
  int v200;
  char *v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  unsigned int v207;
  unsigned int *v208;
  int v209;
  char *v210;
  int v211;
  int v212;
  unsigned int v213;
  unsigned int *v214;
  unsigned int v215;
  unsigned int v216;
  int v217;
  int v218;
  char *v219;
  int v220;
  char *v221;
  int v222;
  int v223;
  int v224;
  char *jj;
  int v226;
  int v227;
  int v228;
  unsigned int v229;
  char *v230;
  char *v231;
  int v232;
  unsigned int v233;
  char *v234;
  char *v235;
  int v236;
  unsigned int v237;
  char *v238;
  int v239;
  int v240;
  char *v241;
  unsigned int *kk;
  int v243;
  int mm;
  int v245;
  int v246;
  int v247;
  char *v248;
  char *v249;
  int v250;
  char *v251;
  int v252;
  char *v253;
  unsigned int v254;
  char *v255;
  int v256;
  int nn;
  int v258;
  int v259;
  int v260;
  char *v261;
  int v262;
  char *v263;
  int v264;
  unsigned int v265;
  unsigned int *v266;
  char *v267;
  int v268;
  unsigned int v269;
  unsigned int *v270;
  unsigned int v271;
  unsigned int *v272;
  unsigned int v273;
  unsigned int v274;
  unsigned int *v275;
  char *v276;
  unsigned int *v277;
  unsigned int *v278;
  char *v279;
  char *v280;
  char *v281;
  char *v282;
  char *v283;
  char *v284;
  unsigned int *v285;
  int v286;
  unsigned int *v287;
  unsigned int *v288;
  int v289;
  unsigned int *v290;
  unsigned int *v291;
  int v292;
  int v293;
  int v294;
  int v295;
  int v296;
  char *v297;
  char *v298;
  char *v299;
  char *v300;
  int v301;
  unsigned int v302;
  char *v303;
  int v304;
  char *v305;
  char *v306;
  int v307;
  int v308;
  char *v309;
  int v310;
  int v311;
  char *v312;
  char *v313;
  unsigned int *v314;
  char *v315;
  int v316;
  int v317;
  int v318;
  char *v319;
  unsigned int *v320;
  char *v321;
  char *v322;
  unsigned int *v323;
  unsigned int v324;
  unsigned int v325;
  unsigned int v326;
  unsigned int v327;
  char *v328;
  char *v329;
  int v330;
  int v331;
  int v332;
  int v333;
  int v334;
  int v335;
  int v336;
  char *v337;
  unsigned int v338;
  int v339;
  unsigned int *v340;
  unsigned int *v341;
  char *v342;
  int v343;
  unsigned int v344;
  char *v345;
  int v346;
  int v347;
  unsigned int v348;
  char *v349;
  char *v350;
  int v351;
  unsigned int v352;
  char *v353;
  int v354;
  unsigned int *v355;
  int v356;
  unsigned int v357;
  int v358;
  unsigned int v359;
  unsigned int v360;
  unsigned int v361;
  int v362;
  int v363;
  int v364;
  int v365;
  char *v366;
  int v367;
  int v368;
  unsigned int v369;
  char *v370;
  int v371;
  unsigned int v372;
  int v373;
  int v374;
  int v375;
  unsigned int v376;
  unsigned int v377;
  char *v378;
  char *v379;
  unsigned int v380;
  unsigned int *v381;
  int v383;
  int v384;
  int v385;
  int v386;
  char *v387;
  unsigned int v388;
  int v389;
  unsigned int v390;
  char *v391;
  unsigned int *v392;
  int v393;
  int v394;
  char *v395;
  int v396;
  int v397;
  int v398;
  unsigned int *v399;
  int v400;
  int v401;
  int v402;
  char *v403;
  int v404;
  int v405;
  int v406;
  int v407;
  int v408;
  char *v409;
  char *v410;
  char *v411;
  char *v412;
  int v413;
  char *v414;
  int v415;
  unsigned int *v416;
  char *v417;

  v3 = a2;
  result = (char *)a2 - (char *)a1;
  v414 = (char *)a2;
  if ( result > 135 )
  {
    if ( a3 != 0 )
    {
      while ( 1 )
      {
        v5 = a1;
        --a3;
        v6 = *(v3 - 2);
        v7 = &a1[2 * ((int)(((unsigned int)(v414 - (char *)a1) >> 31) + ((v414 - (char *)a1) >> 3)) >> 1)];
        v8 = *a1;
        v9 = *v7;
        if ( *a1 >= *v7 )
          break;
        if ( v6 > v9 )
          goto LABEL_5;
        if ( v6 > v8 )
          goto LABEL_23;
LABEL_6:
        v11 = v3;
        v12 = a1 + 2;
        v319 = (char *)v3;
        while ( 1 )
        {
          v271 = *v12;
          v13 = v12;
          if ( v8 > *v12 )
          {
            v303 = (char *)v12;
            v14 = v12 + 2;
            do
            {
              v13 += 2;
              v271 = *(uint32_t *)((char *)v14  + ((uintptr_t)((char *)v13) - (uintptr_t)(v303 ))- 8);
            }
            while ( v8 > v271 );
          }
          v15 = v11 - 2;
          if ( v8 < v6 )
          {
            v16 = v11 - 4;
            do
            {
              v288 = v16;
              v16 -= 2;
              v6 = v16[2];
            }
            while ( v8 < v6 );
            v15 = v288;
          }
          if ( v15 <= v13 )
            break;
          *v13 = v6;
          v17 = v13[1];
          v13[1] = v15[1];
          *v15 = v271;
          v15[1] = v17;
          v12 = v13 + 2;
          v8 = *a1;
          v6 = *(v15 - 2);
          v11 = v15;
        }
        v381 = v13;
        v33 = v319 - (char *)v13;
        v414 = (char *)v13;
        if ( v319 - (char *)v13 > 135 )
        {
          if ( a3 != 0 )
          {
            v34 = v319;
            v407 = a3;
            for ( i = v319; ; i = v379 )
            {
              --v407;
              v36 = &v381[2 * ((int)(((unsigned int)(i - (char *)v381) >> 31) + ((i - (char *)v381) >> 3)) >> 1)];
              v37 = *v381;
              v38 = *v36;
              v39 = *((uint32_t *)v34 - 2);
              if ( *v36 <= *v381 )
                break;
              if ( v38 < v39 )
                goto LABEL_42;
              if ( v39 > v37 )
                goto LABEL_54;
LABEL_43:
              v41 = v34;
              v42 = v381 + 2;
              v321 = v34;
              while ( 1 )
              {
                v273 = *v42;
                v43 = v42;
                if ( *v42 < v37 )
                {
                  v305 = (char *)v42;
                  v44 = v42 + 2;
                  do
                  {
                    v43 += 2;
                    v273 = *(uint32_t *)((char *)v44  + ((uintptr_t)((char *)v43) - (uintptr_t)(v305 ))- 8);
                  }
                  while ( v273 < v37 );
                }
                v45 = (unsigned int *)(v41 - 8);
                if ( v37 < v39 )
                {
                  v46 = v41 - 16;
                  do
                  {
                    v290 = (unsigned int *)v46;
                    v46 -= 8;
                    v39 = *((uint32_t *)v46 + 2);
                  }
                  while ( v39 > v37 );
                  v45 = v290;
                }
                if ( v45 <= v43 )
                  break;
                *v43 = v39;
                v47 = v43[1];
                v43[1] = v45[1];
                *v45 = v273;
                v45[1] = v47;
                v42 = v43 + 2;
                v41 = (char *)v45;
                v37 = *v381;
                v39 = *(v45 - 2);
              }
              v379 = (char *)v43;
              v49 = v321 - (char *)v43;
              if ( v321 - (char *)v43 > 135 )
              {
                if ( v407 != 0 )
                {
                  v50 = v321;
                  v408 = v407;
                  for ( j = v321; ; j = v378 )
                  {
                    --v408;
                    v52 = (unsigned int *)&v379[8 * ((int)(((unsigned int)(j - v379) >> 31) + ((j - v379) >> 3)) >> 1)];
                    v53 = *(uint32_t *)v379;
                    v54 = *v52;
                    v55 = *((uint32_t *)v50 - 2);
                    if ( *v52 <= *(uint32_t *)v379 )
                      break;
                    if ( v54 < v55 )
                      goto LABEL_63;
                    if ( v55 > v53 )
                      goto LABEL_75;
LABEL_64:
                    v57 = v50;
                    v58 = (unsigned int *)(v379 + 8);
                    v322 = v50;
                    while ( 1 )
                    {
                      v274 = *v58;
                      v59 = v58;
                      if ( v53 > *v58 )
                      {
                        v306 = (char *)v58;
                        v60 = v58 + 2;
                        do
                        {
                          v59 += 2;
                          v274 = *(uint32_t *)((char *)v60  + ((uintptr_t)((char *)v59) - (uintptr_t)(v306 ))- 8);
                        }
                        while ( v53 > v274 );
                      }
                      v61 = (unsigned int *)(v57 - 8);
                      if ( v53 < v55 )
                      {
                        v62 = v57 - 16;
                        do
                        {
                          v291 = (unsigned int *)v62;
                          v62 -= 8;
                          v55 = *((uint32_t *)v62 + 2);
                        }
                        while ( v53 < v55 );
                        v61 = v291;
                      }
                      if ( v61 <= v59 )
                        break;
                      *v59 = v55;
                      v63 = v59[1];
                      v59[1] = v61[1];
                      *v61 = v274;
                      v61[1] = v63;
                      v58 = v59 + 2;
                      v57 = (char *)v61;
                      v53 = *(uint32_t *)v379;
                      v55 = *(v61 - 2);
                    }
                    v378 = (char *)v59;
                    v144 = v322 - (char *)v59;
                    if ( v322 - (char *)v59 > 135 )
                    {
                      if ( v408 != 0 )
                      {
                        v145 = v322;
                        v401 = v408;
                        for ( k = v322; ; k = v409 )
                        {
                          --v401;
                          v147 = (unsigned int *)&v378[8
                                                     * ((int)(((unsigned int)(k - v378) >> 31) + ((k - v378) >> 3)) >> 1)];
                          v148 = *(uint32_t *)v378;
                          v149 = *v147;
                          v150 = *((uint32_t *)v145 - 2);
                          if ( *(uint32_t *)v378 >= *v147 )
                            break;
                          if ( v150 > v149 )
                            goto LABEL_198;
                          if ( v150 > v148 )
                            goto LABEL_346;
LABEL_199:
                          v280 = v145;
                          v152 = v378 + 8;
                          v297 = v145;
                          while ( 1 )
                          {
                            v153 = *(uint32_t *)v152;
                            for ( m = v152; *(uint32_t *)m < v148; v153 = *(uint32_t *)m )
                              m += 8;
                            v155 = v280 - 8;
                            if ( v150 > v148 )
                            {
                              do
                              {
                                v155 -= 8;
                                v150 = *(uint32_t *)v155;
                              }
                              while ( v148 < *(uint32_t *)v155 );
                            }
                            if ( v155 <= m )
                              break;
                            *(uint32_t *)m = v150;
                            v156 = *((uint32_t *)m + 1);
                            *((uint32_t *)m + 1) = *((uint32_t *)v155 + 1);
                            *(uint32_t *)v155 = v153;
                            *((uint32_t *)v155 + 1) = v156;
                            v152 = m + 8;
                            v280 = v155;
                            v148 = *(uint32_t *)v378;
                            v150 = *((uint32_t *)v155 - 2);
                          }
                          v366 = m;
                          v157 = v297 - m;
                          v409 = m;
                          if ( v297 - m > 135 )
                          {
                            if ( v401 != 0 )
                            {
                              v416 = (unsigned int *)(m + 8);
                              v404 = v401;
                              v158 = v297;
                              while ( 1 )
                              {
                                --v404;
                                v159 = *(uint32_t *)v366;
                                v160 = &v366[8
                                           * ((int)(((unsigned int)(v158 - v366) >> 31) + ((v158 - v366) >> 3)) >> 1)];
                                v161 = *(uint32_t *)v160;
                                if ( *(uint32_t *)v366 >= *(uint32_t *)v160 )
                                {
                                  v162 = *((uint32_t *)v297 - 2);
                                  if ( v159 < v162 )
                                    goto LABEL_212;
                                  if ( v162 > v161 )
                                    goto LABEL_278;
                                }
                                else
                                {
                                  v162 = *((uint32_t *)v297 - 2);
                                  if ( v162 <= v161 )
                                  {
                                    if ( v162 <= v159 )
                                      goto LABEL_212;
LABEL_278:
                                    *(uint32_t *)v366 = v162;
                                    v209 = *((uint32_t *)v366 + 1);
                                    *((uint32_t *)v366 + 1) = *((uint32_t *)v297 - 1);
                                    *((uint32_t *)v297 - 2) = v159;
                                    *((uint32_t *)v297 - 1) = v209;
                                    v162 = v159;
                                    v159 = *(uint32_t *)v366;
                                    goto LABEL_212;
                                  }
                                }
                                *(uint32_t *)v366 = v161;
                                v163 = *((uint32_t *)v366 + 1);
                                *((uint32_t *)v366 + 1) = *((uint32_t *)v160 + 1);
                                *(uint32_t *)v160 = v159;
                                *((uint32_t *)v160 + 1) = v163;
                                v159 = *(uint32_t *)v366;
                                v162 = *((uint32_t *)v297 - 2);
LABEL_212:
                                v164 = v416;
                                v281 = v297;
                                v165 = v162;
                                while ( 1 )
                                {
                                  v166 = *v164;
                                  for ( n = v164; v159 > *n; v166 = *n )
                                    n += 2;
                                  v168 = v165;
                                  v169 = v281 - 8;
                                  if ( v159 < v165 )
                                  {
                                    do
                                    {
                                      v169 -= 8;
                                      v168 = *(uint32_t *)v169;
                                    }
                                    while ( v159 < *(uint32_t *)v169 );
                                  }
                                  if ( v169 <= (char *)n )
                                    break;
                                  *n = v168;
                                  v170 = n[1];
                                  n[1] = *((uint32_t *)v169 + 1);
                                  *(uint32_t *)v169 = v166;
                                  *((uint32_t *)v169 + 1) = v170;
                                  v164 = n + 2;
                                  v165 = *((uint32_t *)v169 - 2);
                                  v281 = v169;
                                  v159 = *(uint32_t *)v366;
                                }
                                v328 = (char *)n;
                                v312 = v297;
                                v171 = v297 - (char *)n;
                                if ( v171 > 135 )
                                {
                                  if ( v404 != 0 )
                                  {
                                    v334 = v404;
                                    while ( 1 )
                                    {
                                      v172 = v312;
                                      --v334;
                                      v173 = *(uint32_t *)v328;
                                      v174 = *((uint32_t *)v312 - 2);
                                      v175 = (unsigned int *)&v328[8
                                                                 * ((int)(((unsigned int)(v312 - v328) >> 31)
                                                                        + ((v312 - v328) >> 3)) >> 1)];
                                      v176 = *v175;
                                      if ( *v175 <= *(uint32_t *)v328 )
                                      {
                                        if ( v174 > v173 )
                                          goto LABEL_225;
                                        v194 = (unsigned int *)v328;
                                        if ( v174 > v176 )
                                        {
                                          *(uint32_t *)v328 = v174;
                                          v195 = *((uint32_t *)v328 + 1);
                                          v196 = *((uint32_t *)v312 - 1);
LABEL_252:
                                          v194[1] = v196;
                                          v174 = v173;
                                          *((uint32_t *)v172 - 2) = v173;
                                          *((uint32_t *)v172 - 1) = v195;
                                          v173 = *v194;
                                          goto LABEL_225;
                                        }
                                      }
                                      else if ( v174 <= v176 )
                                      {
                                        if ( v174 <= v173 )
                                          goto LABEL_225;
                                        v172 = v312;
                                        v194 = (unsigned int *)v328;
                                        v195 = *((uint32_t *)v328 + 1);
                                        *(uint32_t *)v328 = v174;
                                        v196 = *((uint32_t *)v312 - 1);
                                        goto LABEL_252;
                                      }
                                      *(uint32_t *)v328 = v176;
                                      v177 = *((uint32_t *)v328 + 1);
                                      *((uint32_t *)v328 + 1) = v175[1];
                                      *v175 = v173;
                                      v175[1] = v177;
                                      v173 = *(uint32_t *)v328;
                                      v174 = *((uint32_t *)v312 - 2);
LABEL_225:
                                      v178 = v328 + 8;
                                      v282 = v312;
                                      while ( 1 )
                                      {
                                        v179 = *(uint32_t *)v178;
                                        for ( ii = v178; *(uint32_t *)ii < v173; v179 = *(uint32_t *)ii )
                                          ii += 8;
                                        v181 = v174;
                                        v182 = v282 - 8;
                                        if ( v173 < v174 )
                                        {
                                          do
                                          {
                                            v182 -= 8;
                                            v181 = *(uint32_t *)v182;
                                          }
                                          while ( v173 < *(uint32_t *)v182 );
                                        }
                                        if ( v182 <= ii )
                                          break;
                                        *(uint32_t *)ii = v181;
                                        v183 = *((uint32_t *)ii + 1);
                                        *((uint32_t *)ii + 1) = *((uint32_t *)v182 + 1);
                                        v178 = ii + 8;
                                        *(uint32_t *)v182 = v179;
                                        *((uint32_t *)v182 + 1) = v183;
                                        v174 = *((uint32_t *)v182 - 2);
                                        v282 = v182;
                                        v173 = *(uint32_t *)v328;
                                      }
                                      sub_1016F20(v334);
                                      v171 = ii - v328;
                                      v312 = ii;
                                      if ( ii - v328 <= 135 )
                                        goto LABEL_268;
                                      if ( v334 == 0 )
                                        goto LABEL_234;
                                    }
                                  }
                                  ii = v297;
LABEL_234:
                                  v184 = v171 >> 3;
                                  v417 = ii;
                                  v415 = v184 & 1;
                                  v185 = (v184 - 1) >> 1;
                                  v347 = v185;
                                  v343 = (v184 - 2) >> 1;
                                  v186 = v343;
                                  v386 = v343;
                                  v413 = 2 * v343 + 1;
                                  v395 = &v328[8 * v413];
                                  v412 = &v328[8 * v343];
                                  v313 = v412;
                                  while ( 1 )
                                  {
                                    v187 = v313;
                                    v335 = v186;
                                    v371 = *((uint32_t *)v313 + 1);
                                    v357 = *(uint32_t *)v313;
                                    v188 = v186;
                                    if ( v186 < v185 )
                                    {
                                      while ( 1 )
                                      {
                                        v189 = v188 + 1;
                                        v190 = &v328[8 * v188];
                                        v191 = 2 * v189 - 1;
                                        v192 = 2 * v189;
                                        v283 = &v328[8 * v191];
                                        v298 = &v328[16 * v189];
                                        v193 = *(uint32_t *)v298;
                                        if ( *(uint32_t *)v298 < *(uint32_t *)v283 )
                                          v192 = v191;
                                        v187 = v298;
                                        if ( *(uint32_t *)v298 < *(uint32_t *)v283 )
                                        {
                                          v187 = v283;
                                          v193 = *(uint32_t *)v283;
                                        }
                                        *(uint32_t *)v190 = v193;
                                        v335 = v192;
                                        *((uint32_t *)v190 + 1) = *((uint32_t *)v187 + 1);
                                        if ( v192 >= v347 )
                                          break;
                                        v188 = v192;
                                      }
                                    }
                                    if ( v415 == 0 && v386 == v335 )
                                    {
                                      v187 = &v328[8 * v413];
                                      v335 = v413;
                                      *(uint32_t *)v412 = *(uint32_t *)v395;
                                      *((uint32_t *)v412 + 1) = *((uint32_t *)v395 + 1);
                                    }
                                    if ( v343 < v335 )
                                    {
                                      v205 = v335;
                                      v206 = (v335 - 1) / 2;
                                      v207 = *(uint32_t *)&v328[8 * v206];
                                      if ( v207 < v357 )
                                      {
                                        while ( 1 )
                                        {
                                          v208 = (unsigned int *)&v328[8 * v205];
                                          v187 = &v328[8 * v206];
                                          *v208 = v207;
                                          v208[1] = *((uint32_t *)v187 + 1);
                                          if ( v343 >= v206 )
                                            break;
                                          v207 = *(uint32_t *)&v328[8 * ((v206 - 1) / 2)];
                                          if ( v207 >= v357 )
                                            break;
                                          v205 = v206;
                                          v206 = (v206 - 1) / 2;
                                        }
                                      }
                                    }
                                    *(uint32_t *)v187 = v357;
                                    *((uint32_t *)v187 + 1) = v371;
                                    v313 -= 8;
                                    if ( v343 == 0 )
                                      break;
                                    --v343;
                                    v185 = v347;
                                    v186 = v343;
                                  }
                                  v387 = v417;
                                  v314 = (unsigned int *)(v417 - 8);
                                  while ( 2 )
                                  {
                                    v387 -= 8;
                                    v197 = v328;
                                    v336 = 0;
                                    v372 = v314[1];
                                    v198 = *v314;
                                    *v314 = *(uint32_t *)v328;
                                    v314[1] = *((uint32_t *)v328 + 1);
                                    v348 = v198;
                                    v199 = 0;
                                    v396 = (v387 - v328) >> 3;
                                    if ( (v396 - 1) / 2 > 0 )
                                    {
                                      while ( 1 )
                                      {
                                        v200 = v199 + 1;
                                        v201 = &v328[8 * v199];
                                        v202 = 2 * v200 - 1;
                                        v203 = 2 * v200;
                                        v284 = &v328[8 * v202];
                                        v299 = &v328[16 * v200];
                                        v204 = *(uint32_t *)v299;
                                        if ( *(uint32_t *)v299 < *(uint32_t *)v284 )
                                          v203 = v202;
                                        v197 = v299;
                                        if ( *(uint32_t *)v299 < *(uint32_t *)v284 )
                                        {
                                          v197 = v284;
                                          v204 = *(uint32_t *)v284;
                                        }
                                        *(uint32_t *)v201 = v204;
                                        v336 = v203;
                                        *((uint32_t *)v201 + 1) = *((uint32_t *)v197 + 1);
                                        if ( v203 >= (((v387 - v328) >> 3) - 1) / 2 )
                                          break;
                                        v199 = v203;
                                      }
                                    }
                                    if ( (v396 & 1) == 0 && v336 == (v396 - 2) / 2 )
                                    {
                                      v336 = 2 * v336 + 1;
                                      v210 = &v328[8 * v336];
                                      *(uint32_t *)v197 = *(uint32_t *)v210;
                                      *((uint32_t *)v197 + 1) = *((uint32_t *)v210 + 1);
                                      v197 = v210;
                                    }
                                    else if ( v336 <= 0 )
                                    {
                                      goto LABEL_267;
                                    }
                                    v211 = v336;
                                    v212 = (v336 - 1) >> 1;
                                    v213 = *(uint32_t *)&v328[8 * v212];
                                    if ( v348 > v213 )
                                    {
                                      while ( 1 )
                                      {
                                        v214 = (unsigned int *)&v328[8 * v211];
                                        v197 = &v328[8 * v212];
                                        *v214 = v213;
                                        v214[1] = *((uint32_t *)v197 + 1);
                                        if ( v212 == 0 )
                                          break;
                                        v213 = *(uint32_t *)&v328[8 * ((v212 - 1) >> 1)];
                                        if ( v348 <= v213 )
                                          break;
                                        v211 = v212;
                                        v212 = (v212 - 1) >> 1;
                                      }
                                    }
LABEL_267:
                                    v314 -= 2;
                                    *(uint32_t *)v197 = v348;
                                    *((uint32_t *)v197 + 1) = v372;
                                    if ( v387 - v328 <= 15 )
                                      break;
                                    continue;
                                  }
                                }
LABEL_268:
                                v157 = v328 - v366;
                                if ( v328 - v366 <= 135 )
                                  goto LABEL_299;
                                if ( v404 == 0 )
                                  goto LABEL_303;
                                v158 = v328;
                                v297 = v328;
                              }
                            }
                            v328 = v297;
LABEL_303:
                            v223 = v157 >> 3;
                            v389 = v223 & 1;
                            v316 = (v223 - 1) >> 1;
                            v286 = (v223 - 2) >> 1;
                            v224 = v286;
                            v345 = &v366[16 * v286 + 8];
                            v349 = &v366[8 * v286];
                            v337 = v349;
                            for ( jj = v349; ; jj = v337 )
                            {
                              v359 = *(uint32_t *)jj;
                              v397 = *((uint32_t *)jj + 1);
                              v226 = v224;
                              if ( v224 < v316 )
                              {
                                v227 = v224;
                                v405 = v224;
                                while ( 1 )
                                {
                                  v228 = 2 * (v227 + 1) - 1;
                                  jj = &v366[16 * v227 + 16];
                                  v411 = &v366[8 * v228];
                                  v229 = *(uint32_t *)jj;
                                  if ( *(uint32_t *)v411 <= *(uint32_t *)jj )
                                  {
                                    v228 = 2 * (v227 + 1);
                                  }
                                  else
                                  {
                                    jj = &v366[8 * v228];
                                    v229 = *(uint32_t *)v411;
                                  }
                                  v230 = &v366[8 * v227];
                                  *(uint32_t *)v230 = v229;
                                  *((uint32_t *)v230 + 1) = *((uint32_t *)jj + 1);
                                  if ( v228 >= v316 )
                                    break;
                                  v227 = v228;
                                }
                                v226 = v228;
                                v224 = v405;
                              }
                              if ( v389 == 0 && v286 == v226 )
                              {
                                v226 = 2 * v286 + 1;
                                *(uint32_t *)v349 = *(uint32_t *)v345;
                                *((uint32_t *)v349 + 1) = *((uint32_t *)v345 + 1);
                                jj = &v366[8 * v226];
                              }
                              if ( v224 < v226 )
                              {
                                v231 = v366;
                                v232 = (v226 - 1) / 2;
                                v233 = *(uint32_t *)&v366[8 * v232];
                                if ( v359 > v233 )
                                {
                                  while ( 1 )
                                  {
                                    v234 = &v231[8 * v226];
                                    jj = &v231[8 * v232];
                                    *(uint32_t *)v234 = v233;
                                    *((uint32_t *)v234 + 1) = *((uint32_t *)jj + 1);
                                    if ( v232 <= v224 )
                                      break;
                                    v233 = *(uint32_t *)&v366[8 * ((v232 - 1) / 2)];
                                    if ( v359 <= v233 )
                                      break;
                                    v226 = v232;
                                    v232 = (v232 - 1) / 2;
                                    v231 = v366;
                                  }
                                }
                              }
                              v337 -= 8;
                              *(uint32_t *)jj = v359;
                              *((uint32_t *)jj + 1) = v397;
                              if ( v224 == 0 )
                                break;
                              --v224;
                            }
                            v285 = (unsigned int *)(v328 - 8);
                            while ( 2 )
                            {
                              v328 -= 8;
                              v215 = *v285;
                              v216 = v285[1];
                              *v285 = *(uint32_t *)v366;
                              v388 = v216;
                              v285[1] = *((uint32_t *)v366 + 1);
                              v217 = 0;
                              v218 = 0;
                              v344 = v215;
                              v358 = (v328 - v366) >> 3;
                              v219 = v366;
                              if ( (v358 - 1) / 2 > 0 )
                              {
                                while ( 1 )
                                {
                                  v220 = v218 + 1;
                                  v221 = &v366[8 * v218];
                                  v217 = 2 * v220 - 1;
                                  v373 = 2 * v220;
                                  v300 = &v366[8 * v217];
                                  v315 = &v366[16 * v220];
                                  v219 = v315;
                                  v222 = *(uint32_t *)v315;
                                  if ( *(uint32_t *)v300 <= *(uint32_t *)v315 )
                                  {
                                    v217 = v373;
                                  }
                                  else
                                  {
                                    v219 = &v366[8 * v217];
                                    v222 = *(uint32_t *)v300;
                                  }
                                  *(uint32_t *)v221 = v222;
                                  *((uint32_t *)v221 + 1) = *((uint32_t *)v219 + 1);
                                  if ( v217 >= (v358 - 1) / 2 )
                                    break;
                                  v218 = v217;
                                }
                              }
                              if ( (v358 & 1) == 0 && v217 == (v358 - 2) / 2 )
                              {
                                v217 = 2 * v217 + 1;
                                v235 = &v366[8 * v217];
                                *(uint32_t *)v219 = *(uint32_t *)v235;
                                *((uint32_t *)v219 + 1) = *((uint32_t *)v235 + 1);
                                v219 = v235;
                              }
                              else if ( v217 <= 0 )
                              {
                                goto LABEL_298;
                              }
                              v236 = (v217 - 1) >> 1;
                              v237 = *(uint32_t *)&v366[8 * v236];
                              if ( v237 < v344 )
                              {
                                while ( 1 )
                                {
                                  v238 = &v366[8 * v217];
                                  v219 = &v366[8 * v236];
                                  *(uint32_t *)v238 = v237;
                                  *((uint32_t *)v238 + 1) = *((uint32_t *)v219 + 1);
                                  if ( v236 == 0 )
                                    break;
                                  v237 = *(uint32_t *)&v366[8 * ((v236 - 1) >> 1)];
                                  if ( v237 >= v344 )
                                    break;
                                  v217 = v236;
                                  v236 = (v236 - 1) >> 1;
                                }
                              }
LABEL_298:
                              v285 -= 2;
                              *(uint32_t *)v219 = v344;
                              *((uint32_t *)v219 + 1) = v388;
                              if ( v328 - v366 <= 15 )
                                break;
                              continue;
                            }
                          }
LABEL_299:
                          v144 = v366 - v378;
                          if ( v366 - v378 <= 135 )
                            goto LABEL_361;
                          if ( v401 == 0 )
                            goto LABEL_328;
                          v145 = v366;
                        }
                        if ( v150 > v148 )
                          goto LABEL_199;
                        if ( v150 > v149 )
                        {
LABEL_346:
                          *(uint32_t *)v378 = v150;
                          v252 = *((uint32_t *)v378 + 1);
                          *((uint32_t *)v378 + 1) = *((uint32_t *)v145 - 1);
                          *((uint32_t *)v145 - 2) = v148;
                          *((uint32_t *)v145 - 1) = v252;
                          v150 = v148;
                          v148 = *(uint32_t *)v378;
                          goto LABEL_199;
                        }
LABEL_198:
                        *(uint32_t *)v378 = v149;
                        v151 = *((uint32_t *)v378 + 1);
                        *((uint32_t *)v378 + 1) = v147[1];
                        *v147 = v148;
                        v147[1] = v151;
                        v148 = *(uint32_t *)v378;
                        v150 = *((uint32_t *)v145 - 2);
                        goto LABEL_199;
                      }
                      v366 = v322;
LABEL_328:
                      v239 = v144 >> 3;
                      v398 = v239 & 1;
                      v301 = (v239 - 1) >> 1;
                      v240 = (v239 - 2) >> 1;
                      v402 = v240;
                      v374 = 2 * v240 + 1;
                      v329 = &v378[8 * v240];
                      v241 = &v378[8 * v374];
                      v287 = (unsigned int *)v329;
                      for ( kk = (unsigned int *)v329; ; kk = v287 )
                      {
                        v338 = *kk;
                        v390 = kk[1];
                        v243 = v240;
                        if ( v240 < v301 )
                        {
                          v317 = v240;
                          v406 = v240;
                          v410 = v241;
                          for ( mm = v240; ; mm = v346 )
                          {
                            v245 = mm + 1;
                            v246 = 2 * v245;
                            v247 = 2 * v245 - 1;
                            v248 = &v378[16 * v245];
                            v249 = &v378[8 * v247];
                            v250 = *(uint32_t *)v248;
                            if ( *(uint32_t *)v249 > *(uint32_t *)v248 )
                            {
                              v246 = v247;
                              v250 = *(uint32_t *)v249;
                            }
                            v243 = v246;
                            v346 = v246;
                            kk = (unsigned int *)v248;
                            if ( *(uint32_t *)v249 > *(uint32_t *)v248 )
                              kk = (unsigned int *)v249;
                            v251 = &v378[8 * v317];
                            *(uint32_t *)v251 = v250;
                            *((uint32_t *)v251 + 1) = kk[1];
                            if ( v243 >= v301 )
                              break;
                            v317 = v346;
                          }
                          v240 = v406;
                          v241 = v410;
                        }
                        if ( v398 == 0 && v402 == v243 )
                        {
                          *(uint32_t *)v329 = *(uint32_t *)v241;
                          *((uint32_t *)v329 + 1) = *((uint32_t *)v241 + 1);
                          kk = (unsigned int *)v241;
                          v243 = v374;
                        }
                        if ( v240 < v243 )
                        {
                          v264 = (v243 - 1) / 2;
                          if ( *(uint32_t *)&v378[8 * v264] < v338 )
                          {
                            v265 = *(uint32_t *)&v378[8 * v264];
                            while ( 1 )
                            {
                              v266 = (unsigned int *)&v378[8 * v243];
                              kk = (unsigned int *)&v378[8 * v264];
                              *v266 = v265;
                              v266[1] = kk[1];
                              if ( v240 >= v264 )
                                break;
                              v265 = *(uint32_t *)&v378[8 * ((v264 - 1) / 2)];
                              if ( v265 >= v338 )
                                break;
                              v243 = v264;
                              v264 = (v264 - 1) / 2;
                            }
                          }
                        }
                        v287 -= 2;
                        *kk = v338;
                        kk[1] = v390;
                        if ( v240 == 0 )
                          break;
                        --v240;
                      }
                      v253 = v366 - 8;
                      while ( 2 )
                      {
                        v366 -= 8;
                        v375 = *((uint32_t *)v253 + 1);
                        v254 = *(uint32_t *)v253;
                        *(uint32_t *)v253 = *(uint32_t *)v378;
                        *((uint32_t *)v253 + 1) = *((uint32_t *)v378 + 1);
                        v318 = (v366 - v378) >> 3;
                        v302 = v254;
                        v255 = v378;
                        v256 = 0;
                        if ( (v318 - 1) / 2 > 0 )
                        {
                          v330 = 0;
                          v391 = v253;
                          for ( nn = 0; ; nn = v339 )
                          {
                            v258 = nn + 1;
                            v259 = 2 * v258;
                            v260 = 2 * v258 - 1;
                            v350 = &v378[8 * v260];
                            v261 = &v378[16 * v258];
                            v262 = *(uint32_t *)v261;
                            if ( *(uint32_t *)v261 < *(uint32_t *)v350 )
                            {
                              v259 = v260;
                              v262 = *(uint32_t *)v350;
                            }
                            v256 = v259;
                            v339 = v259;
                            v255 = v261;
                            if ( *(uint32_t *)v261 < *(uint32_t *)v350 )
                              v255 = v350;
                            v263 = &v378[8 * v330];
                            *(uint32_t *)v263 = v262;
                            *((uint32_t *)v263 + 1) = *((uint32_t *)v255 + 1);
                            if ( v256 >= (v318 - 1) / 2 )
                              break;
                            v330 = v339;
                          }
                          v253 = v391;
                        }
                        if ( (v318 & 1) == 0 && v256 == (v318 - 2) / 2 )
                        {
                          v256 = 2 * v256 + 1;
                          v267 = &v378[8 * v256];
                          *(uint32_t *)v255 = *(uint32_t *)v267;
                          *((uint32_t *)v255 + 1) = *((uint32_t *)v267 + 1);
                          v255 = v267;
                        }
                        else if ( v256 <= 0 )
                        {
                          goto LABEL_360;
                        }
                        v268 = (v256 - 1) >> 1;
                        v269 = *(uint32_t *)&v378[8 * v268];
                        if ( v302 > v269 )
                        {
                          while ( 1 )
                          {
                            v270 = (unsigned int *)&v378[8 * v256];
                            v255 = &v378[8 * v268];
                            *v270 = v269;
                            v270[1] = *((uint32_t *)v255 + 1);
                            if ( v268 == 0 )
                              break;
                            v269 = *(uint32_t *)&v378[8 * ((v268 - 1) >> 1)];
                            if ( v302 <= v269 )
                              break;
                            v256 = v268;
                            v268 = (v268 - 1) >> 1;
                          }
                        }
LABEL_360:
                        v253 -= 8;
                        *(uint32_t *)v255 = v302;
                        *((uint32_t *)v255 + 1) = v375;
                        if ( v366 - v378 <= 15 )
                          break;
                        continue;
                      }
                    }
LABEL_361:
                    v49 = v378 - v379;
                    if ( v378 - v379 <= 135 )
                      goto LABEL_183;
                    if ( v408 == 0 )
                      goto LABEL_128;
                    v50 = v378;
                  }
                  if ( v55 > v53 )
                    goto LABEL_64;
                  if ( v54 < v55 )
                  {
LABEL_75:
                    *(uint32_t *)v379 = v55;
                    v64 = *((uint32_t *)v379 + 1);
                    *((uint32_t *)v379 + 1) = *((uint32_t *)v50 - 1);
                    *((uint32_t *)v50 - 2) = v53;
                    *((uint32_t *)v50 - 1) = v64;
                    v55 = v53;
                    v53 = *(uint32_t *)v379;
                    goto LABEL_64;
                  }
LABEL_63:
                  *(uint32_t *)v379 = v54;
                  v56 = *((uint32_t *)v379 + 1);
                  *((uint32_t *)v379 + 1) = v52[1];
                  *v52 = v53;
                  v52[1] = v56;
                  v53 = *(uint32_t *)v379;
                  v55 = *((uint32_t *)v50 - 2);
                  goto LABEL_64;
                }
                v378 = v321;
LABEL_128:
                v96 = v49 >> 3;
                v385 = v96 & 1;
                v294 = (v96 - 1) >> 1;
                v97 = (v96 - 2) >> 1;
                v394 = v97;
                v354 = 2 * v97 + 1;
                v309 = &v379[8 * v97];
                v98 = &v379[8 * v354];
                v277 = (unsigned int *)v309;
                for ( i1 = (unsigned int *)v309; ; i1 = v277 )
                {
                  v325 = *i1;
                  v369 = i1[1];
                  v100 = v97;
                  if ( v97 < v294 )
                  {
                    v363 = v97;
                    v400 = v97;
                    v403 = v98;
                    for ( i2 = v97; ; i2 = v333 )
                    {
                      v102 = i2 + 1;
                      v103 = 2 * v102;
                      v104 = 2 * v102 - 1;
                      v105 = &v379[16 * v102];
                      v106 = &v379[8 * v104];
                      v107 = *(uint32_t *)v105;
                      if ( *(uint32_t *)v106 > *(uint32_t *)v105 )
                      {
                        v103 = v104;
                        v107 = *(uint32_t *)v106;
                      }
                      v100 = v103;
                      v333 = v103;
                      i1 = (unsigned int *)v105;
                      if ( *(uint32_t *)v106 > *(uint32_t *)v105 )
                        i1 = (unsigned int *)v106;
                      v108 = &v379[8 * v363];
                      *(uint32_t *)v108 = v107;
                      *((uint32_t *)v108 + 1) = i1[1];
                      if ( v100 >= v294 )
                        break;
                      v363 = v333;
                    }
                    v97 = v400;
                    v98 = v403;
                  }
                  if ( v385 == 0 && v394 == v100 )
                  {
                    *(uint32_t *)v309 = *(uint32_t *)v98;
                    *((uint32_t *)v309 + 1) = *((uint32_t *)v98 + 1);
                    i1 = (unsigned int *)v98;
                    v100 = v354;
                  }
                  if ( v97 < v100 )
                  {
                    v137 = (v100 - 1) / 2;
                    v138 = *(uint32_t *)&v379[8 * v137];
                    if ( v325 > v138 )
                    {
                      while ( 1 )
                      {
                        v139 = (unsigned int *)&v379[8 * v100];
                        i1 = (unsigned int *)&v379[8 * v137];
                        *v139 = v138;
                        v139[1] = i1[1];
                        if ( v97 >= v137 )
                          break;
                        v138 = *(uint32_t *)&v379[8 * ((v137 - 1) / 2)];
                        if ( v325 <= v138 )
                          break;
                        v100 = v137;
                        v137 = (v137 - 1) / 2;
                      }
                    }
                  }
                  v277 -= 2;
                  *i1 = v325;
                  i1[1] = v369;
                  if ( v97 == 0 )
                    break;
                  --v97;
                }
                v126 = v378 - 8;
                while ( 2 )
                {
                  v378 -= 8;
                  v356 = *((uint32_t *)v126 + 1);
                  v127 = *(uint32_t *)v126;
                  *(uint32_t *)v126 = *(uint32_t *)v379;
                  *((uint32_t *)v126 + 1) = *((uint32_t *)v379 + 1);
                  v311 = (v378 - v379) >> 3;
                  v327 = v127;
                  v128 = v379;
                  v129 = 0;
                  if ( (v311 - 1) / 2 > 0 )
                  {
                    v296 = 0;
                    v370 = v126;
                    v130 = 0;
                    while ( 1 )
                    {
                      v131 = v130 + 1;
                      v132 = 2 * v131;
                      v133 = 2 * v131 - 1;
                      v342 = &v379[8 * v133];
                      v134 = &v379[16 * v131];
                      v135 = *(uint32_t *)v134;
                      if ( *(uint32_t *)v342 > *(uint32_t *)v134 )
                      {
                        v132 = v133;
                        v135 = *(uint32_t *)v342;
                      }
                      v129 = v132;
                      v365 = v132;
                      v128 = v134;
                      if ( *(uint32_t *)v342 > *(uint32_t *)v134 )
                        v128 = v342;
                      v136 = &v379[8 * v296];
                      *(uint32_t *)v136 = v135;
                      *((uint32_t *)v136 + 1) = *((uint32_t *)v128 + 1);
                      if ( v129 >= (v311 - 1) / 2 )
                        break;
                      v130 = v365;
                      v296 = v365;
                    }
                    v126 = v370;
                  }
                  if ( (v311 & 1) == 0 && v129 == (v311 - 2) / 2 )
                  {
                    v129 = 2 * v129 + 1;
                    v140 = &v379[8 * v129];
                    *(uint32_t *)v128 = *(uint32_t *)v140;
                    *((uint32_t *)v128 + 1) = *((uint32_t *)v140 + 1);
                    v128 = v140;
                  }
                  else if ( v129 <= 0 )
                  {
                    goto LABEL_182;
                  }
                  v141 = (v129 - 1) >> 1;
                  v142 = *(uint32_t *)&v379[8 * v141];
                  if ( v327 > v142 )
                  {
                    v279 = v126;
                    while ( 1 )
                    {
                      v143 = (unsigned int *)&v379[8 * v129];
                      v128 = &v379[8 * v141];
                      *v143 = v142;
                      v143[1] = *((uint32_t *)v128 + 1);
                      if ( v141 == 0 )
                        break;
                      v142 = *(uint32_t *)&v379[8 * ((v141 - 1) >> 1)];
                      if ( v327 <= v142 )
                        break;
                      v129 = v141;
                      v141 = (v141 - 1) >> 1;
                    }
                    v126 = v279;
                  }
LABEL_182:
                  v126 -= 8;
                  *(uint32_t *)v128 = v327;
                  *((uint32_t *)v128 + 1) = v356;
                  if ( v378 - v379 <= 15 )
                    break;
                  continue;
                }
              }
LABEL_183:
              v33 = v379 - (char *)v381;
              if ( v379 - (char *)v381 <= 135 )
                goto LABEL_91;
              if ( v407 == 0 )
                goto LABEL_77;
              v34 = v379;
            }
            if ( v39 > v37 )
              goto LABEL_43;
            if ( v38 < v39 )
            {
LABEL_54:
              *v381 = v39;
              v48 = v381[1];
              v381[1] = *((uint32_t *)v34 - 1);
              *((uint32_t *)v34 - 2) = v37;
              *((uint32_t *)v34 - 1) = v48;
              v39 = v37;
              v37 = *v381;
              goto LABEL_43;
            }
LABEL_42:
            *v381 = v38;
            v40 = v381[1];
            v381[1] = v36[1];
            *v36 = v37;
            v36[1] = v40;
            v37 = *v381;
            v39 = *((uint32_t *)v34 - 2);
            goto LABEL_43;
          }
          v379 = v319;
LABEL_77:
          v65 = v33 >> 3;
          v368 = v65 & 1;
          v292 = (v65 - 1) >> 1;
          v384 = (v65 - 2) >> 1;
          v323 = &v381[2 * v384];
          v275 = v323;
          v66 = &v381[4 * v384 + 2];
          for ( i3 = v384; ; --i3 )
          {
            v68 = v275;
            v361 = *v275;
            v352 = v275[1];
            v69 = i3;
            if ( i3 < v292 )
            {
              v307 = i3;
              v393 = i3;
              v399 = v66;
              for ( i4 = i3; ; i4 = v332 )
              {
                v71 = i4 + 1;
                v72 = 2 * v71;
                v73 = 2 * v71 - 1;
                v74 = &v381[4 * v71];
                v75 = &v381[2 * v73];
                v76 = *v74;
                if ( *v75 > *v74 )
                {
                  v72 = v73;
                  v76 = *v75;
                }
                v69 = v72;
                v332 = v72;
                v68 = v74;
                if ( *v75 > *v74 )
                  v68 = v75;
                v77 = &v381[2 * v307];
                *v77 = v76;
                v77[1] = v68[1];
                if ( v69 >= v292 )
                  break;
                v307 = v332;
              }
              i3 = v393;
              v66 = v399;
            }
            if ( v368 == 0 && v384 == v69 )
            {
              *v323 = *v66;
              v323[1] = v66[1];
              v68 = v66;
              v69 = 2 * v384 + 1;
            }
            if ( i3 < v69 )
            {
              v89 = (v69 - 1) / 2;
              v90 = v381[2 * v89];
              if ( v361 > v90 )
              {
                while ( 1 )
                {
                  v91 = &v381[2 * v69];
                  v68 = &v381[2 * v89];
                  *v91 = v90;
                  v91[1] = v68[1];
                  if ( i3 >= v89 )
                    break;
                  v90 = v381[2 * ((v89 - 1) / 2)];
                  if ( v361 <= v90 )
                    break;
                  v69 = v89;
                  v89 = (v89 - 1) / 2;
                }
              }
            }
            v275 -= 2;
            *v68 = v361;
            v68[1] = v352;
            if ( i3 == 0 )
              break;
          }
          v78 = v379 - 8;
          while ( 2 )
          {
            v379 -= 8;
            v377 = *((uint32_t *)v78 + 1);
            v79 = *(uint32_t *)v78;
            *(uint32_t *)v78 = *v381;
            *((uint32_t *)v78 + 1) = v381[1];
            v308 = (v379 - (char *)v381) >> 3;
            v324 = v79;
            v80 = v381;
            v81 = 0;
            if ( (v308 - 1) / 2 > 0 )
            {
              v293 = 0;
              v353 = v78;
              v82 = 0;
              while ( 1 )
              {
                v83 = v82 + 1;
                v84 = 2 * v83;
                v85 = 2 * v83 - 1;
                v340 = &v381[2 * v85];
                v86 = &v381[4 * v83];
                v87 = *v86;
                if ( *v340 > *v86 )
                {
                  v84 = v85;
                  v87 = *v340;
                }
                v81 = v84;
                v362 = v84;
                v80 = v86;
                if ( *v340 > *v86 )
                  v80 = v340;
                v88 = &v381[2 * v293];
                *v88 = v87;
                v88[1] = v80[1];
                if ( v81 >= (v308 - 1) / 2 )
                  break;
                v82 = v362;
                v293 = v362;
              }
              v78 = v353;
            }
            if ( (v308 & 1) == 0 && v81 == (v308 - 2) / 2 )
            {
              v81 = 2 * v81 + 1;
              v92 = &v381[2 * v81];
              *v80 = *v92;
              v80[1] = v92[1];
              v80 = v92;
            }
            else if ( v81 <= 0 )
            {
              goto LABEL_90;
            }
            v93 = (v81 - 1) >> 1;
            v94 = v381[2 * v93];
            if ( v324 > v94 )
            {
              v276 = v78;
              while ( 1 )
              {
                v95 = &v381[2 * v81];
                v80 = &v381[2 * v93];
                *v95 = v94;
                v95[1] = v80[1];
                if ( v93 == 0 )
                  break;
                v94 = v381[2 * ((v93 - 1) >> 1)];
                if ( v324 <= v94 )
                  break;
                v81 = v93;
                v93 = (v93 - 1) >> 1;
              }
              v78 = v276;
            }
LABEL_90:
            v78 -= 8;
            *v80 = v324;
            v80[1] = v377;
            if ( v379 - (char *)v381 <= 15 )
              break;
            continue;
          }
        }
LABEL_91:
        result = (char *)v381 - (char *)a1;
        if ( (char *)v381 - (char *)a1 <= 135 )
          return result;
        if ( a3 == 0 )
          goto LABEL_28;
        v3 = v381;
      }
      if ( v6 > v8 )
        goto LABEL_6;
      v5 = a1;
      if ( v6 > v9 )
      {
LABEL_23:
        *a1 = v6;
        v19 = a1[1];
        a1[1] = *(v3 - 1);
        *(v3 - 2) = v8;
        *(v3 - 1) = v19;
        v6 = v8;
        v8 = *a1;
        goto LABEL_6;
      }
LABEL_5:
      *v5 = v9;
      v10 = v5[1];
      v5[1] = v7[1];
      *v7 = v8;
      v7[1] = v10;
      v8 = *v5;
      v6 = *(v3 - 2);
      goto LABEL_6;
    }
    v381 = a2;
LABEL_28:
    v20 = result >> 3;
    v351 = v20 & 1;
    v289 = (v20 - 1) >> 1;
    v367 = (v20 - 2) >> 1;
    v21 = &a1[2 * v367];
    v22 = &a1[4 * v367 + 2];
    v320 = v21;
    v272 = v21;
    for ( i5 = v367; ; --i5 )
    {
      v360 = *v21;
      v376 = v21[1];
      v24 = i5;
      if ( i5 < v289 )
      {
        v304 = i5;
        v383 = i5;
        v392 = v22;
        for ( i6 = i5; ; i6 = v331 )
        {
          v26 = i6 + 1;
          v27 = 2 * v26;
          v28 = 2 * v26 - 1;
          v29 = &a1[2 * v28];
          v30 = &a1[4 * v26];
          v31 = *v30;
          if ( *v29 > *v30 )
          {
            v27 = v28;
            v31 = *v29;
          }
          v24 = v27;
          v331 = v27;
          v21 = v30;
          if ( *v29 > *v30 )
            v21 = v29;
          v32 = &a1[2 * v304];
          *v32 = v31;
          v32[1] = v21[1];
          if ( v24 >= v289 )
            break;
          v304 = v331;
        }
        i5 = v383;
        v22 = v392;
      }
      if ( v351 == 0 && v367 == v24 )
      {
        *v320 = *v22;
        v320[1] = v22[1];
        v21 = v22;
        v24 = 2 * v367 + 1;
      }
      if ( i5 < v24 )
      {
        v119 = (v24 - 1) / 2;
        v120 = a1[2 * v119];
        if ( v360 > v120 )
        {
          while ( 1 )
          {
            v121 = &a1[2 * v24];
            v21 = &a1[2 * v119];
            *v121 = v120;
            v121[1] = v21[1];
            if ( i5 >= v119 )
              break;
            v120 = a1[2 * ((v119 - 1) / 2)];
            if ( v360 <= v120 )
              break;
            v24 = v119;
            v119 = (v119 - 1) / 2;
          }
        }
      }
      v272 -= 2;
      *v21 = v360;
      v21[1] = v376;
      if ( i5 == 0 )
        break;
      v21 = v272;
    }
    result = (int)(uintptr_t)(a1);
    v18 = v381 - 2;
    while ( 1 )
    {
      v381 -= 2;
      v380 = v18[1];
      v109 = *v18;
      *v18 = *a1;
      v18[1] = a1[1];
      v310 = ((char *)v381 - (char *)a1) >> 3;
      v326 = v109;
      v110 = a1;
      v111 = 0;
      if ( (v310 - 1) / 2 > 0 )
      {
        v295 = 0;
        v355 = v18;
        v112 = 0;
        while ( 1 )
        {
          v113 = v112 + 1;
          v114 = 2 * v113;
          v115 = 2 * v113 - 1;
          v341 = &a1[2 * v115];
          v116 = &a1[4 * v113];
          v117 = *v116;
          if ( *v341 > *v116 )
          {
            v114 = v115;
            v117 = *v341;
          }
          v111 = v114;
          v364 = v114;
          v110 = v116;
          if ( *v341 > *v116 )
            v110 = v341;
          v118 = &a1[2 * v295];
          *v118 = v117;
          v118[1] = v110[1];
          if ( v111 >= (v310 - 1) / 2 )
            break;
          v112 = v364;
          v295 = v364;
        }
        v18 = v355;
      }
      if ( (v310 & 1) == 0 && v111 == (v310 - 2) / 2 )
        break;
      if ( v111 > 0 )
        goto LABEL_152;
LABEL_20:
      v18 -= 2;
      *v110 = v326;
      v110[1] = v380;
      if ( (char *)v381 - (char *)a1 <= 15 )
        return result;
    }
    v111 = 2 * v111 + 1;
    v122 = &a1[2 * v111];
    *v110 = *v122;
    v110[1] = v122[1];
    v110 = v122;
LABEL_152:
    v123 = (v111 - 1) >> 1;
    v124 = a1[2 * v123];
    if ( v326 > v124 )
    {
      v278 = v18;
      while ( 1 )
      {
        v125 = &a1[2 * v111];
        v110 = &a1[2 * v123];
        *v125 = v124;
        v125[1] = v110[1];
        if ( v123 == 0 )
          break;
        v124 = a1[2 * ((v123 - 1) >> 1)];
        if ( v326 <= v124 )
          break;
        v111 = v123;
        v123 = (v123 - 1) >> 1;
      }
      v18 = v278;
    }
    goto LABEL_20;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_vox_SoundXMLDef_vox_SAll_d9abd2::opAssign  (binary VA: 0x1020ab0)
// Original: std::vector<vox::SoundXMLDef,vox::SAllocator<vox::SoundXMLDef,(vox::VoxMemHint)0>>::operator=
// ----------------------------------------------------------------------------
std::vector<vox::SoundXMLDef::Self, vox::SAllocator<vox::SoundXMLDef::Self, (vox::VoxMemHint)0>> * g4_std::vector_vox_SoundXMLDef_vox_SAll_d9abd2::opAssign(std::vector<vox::SoundXMLDef::Self, vox::SAllocator<vox::SoundXMLDef::Self, (vox::VoxMemHint)0>> *self, const std::vector<vox::SoundXMLDef::Self, vox::SAllocator<vox::SoundXMLDef::Self, (vox::VoxMemHint)0>> *a2)
{
  std::vector<vox::SoundXMLDef::Self, vox::SAllocator<vox::SoundXMLDef::Self, (vox::VoxMemHint)0>> *result;
  char *v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  void **v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  void *v15;
  const void *v16;
  void **v17;
  int v18;
  char *v19;
  const void *v20;
  char *v21;
  char *v22;
  char *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  char *v29;

  result = self;
  if ( a2 != self )
  {
    v3 = *(char **)a2;
    v23 = *((char **)a2 + 1);
    v4 = (int)(uintptr_t)(&v23[-*(uint32_t *)a2]) >> 5;
    v5 = -1431655765 * v4;
    v28 = -1431655765 * v4;
    v6 = *(uint32_t *)self;
    if ( -1431655765 * v4 > (unsigned int)(-1431655765 * ((*((uint32_t *)self + 2) - *(uint32_t *)self) >> 5)) )
    {
      v27 = 0;
      v25 = 0;
      if ( v5 != 0 )
      {
        v22 = *(char **)a2;
        v27 = 32 * v4;
        v25 = VoxAllocInternal(32 * v4, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        v3 = v22;
      }
      if ( v3 != v23 )
      {
        v7 = (char *)v25;
        do
        {
          if ( v7 != nullptr )
            std::memcpy(v7, v3, 96);
          v3 += 96;
          v7 += 96;
        }
        while ( v23 != v3 );
      }
      v8 = *((uint32_t *)self + 1);
      v9 = *(uint32_t *)self;
      if ( v8 != *(uint32_t *)self )
      {
        do
        {
          if ( *(uint32_t *)(v9 + 4) != 0 )
            VoxFreeInternal(*(void **)(v9 + 4));
          if ( *(uint32_t *)(v9 + 8) != 0 )
            VoxFreeInternal(*(void **)(v9 + 8));
          if ( *(uint32_t *)(v9 + 20) != 0 )
            VoxFreeInternal(*(void **)(v9 + 20));
          v10 = *(void ***)(v9 + 92);
          if ( v10 != nullptr )
          {
            if ( *v10 != nullptr )
            {
              VoxFreeInternal(*v10);
              v10 = *(void ***)(v9 + 92);
            }
            VoxFreeInternal(v10);
          }
          v9 += 96;
        }
        while ( v8 != v9 );
        v9 = *(uint32_t *)self;
      }
      if ( v9 != 0 )
        VoxFreeInternal((void *)v9);
      result = self;
      v11 = v25 + v27;
      *(uint32_t *)self = v25;
      *((uint32_t *)self + 2) = v25 + v27;
      goto LABEL_26;
    }
    v29 = *((char **)self + 1);
    v12 = (int)(uintptr_t)(&v29[-v6]) >> 5;
    if ( v28 > (unsigned int)(-1431655765 * v12) )
    {
      v18 = 32 * v12;
      v19 = &v3[v18];
      v26 = -1431655765 * (v18 >> 5);
      if ( v26 > 0 )
      {
        do
        {
          v20 = v3;
          v3 += 96;
          std::memcpy((void *)v6, v20, 96);
          v6 += 96;
          --v26;
        }
        while ( v26 != 0 );
        v29 = *((char **)self + 1);
        v23 = *((char **)a2 + 1);
        v6 = *(uint32_t *)self;
        v19 = (char *)(*(uint32_t *)a2 + ((unsigned int)(uintptr_t)(&v29[-*(uint32_t *)self]) & 0xFFFFFFE0));
      }
      if ( v23 == v19 )
      {
        v11 = 96 * v28 + v6;
        result = self;
        goto LABEL_26;
      }
      v21 = v29;
      do
      {
        if ( v21 != nullptr )
          std::memcpy(v21, v19, 96);
        v19 += 96;
        v21 += 96;
      }
      while ( v23 != v19 );
    }
    else
    {
      if ( v28 > 0 )
      {
        v13 = *(char **)self;
        v24 = *(uint32_t *)self;
        v14 = v5;
        do
        {
          v15 = v13;
          v16 = v3;
          v13 += 96;
          v3 += 96;
          --v14;
          std::memcpy(v15, v16, 96);
        }
        while ( v14 != 0 );
        v6 = 96 * v28 + v24;
      }
      if ( v29 != (char *)v6 )
      {
        do
        {
          if ( *(uint32_t *)(v6 + 4) != 0 )
            VoxFreeInternal(*(void **)(v6 + 4));
          if ( *(uint32_t *)(v6 + 8) != 0 )
            VoxFreeInternal(*(void **)(v6 + 8));
          if ( *(uint32_t *)(v6 + 20) != 0 )
            VoxFreeInternal(*(void **)(v6 + 20));
          v17 = *(void ***)(v6 + 92);
          if ( v17 != nullptr )
          {
            if ( *v17 != nullptr )
            {
              VoxFreeInternal(*v17);
              v17 = *(void ***)(v6 + 92);
            }
            VoxFreeInternal(v17);
          }
          v6 += 96;
        }
        while ( v29 != (char *)v6 );
        result = self;
        v11 = *(uint32_t *)self + 96 * v28;
        goto LABEL_26;
      }
    }
    result = self;
    v11 = *(uint32_t *)self + 96 * v28;
LABEL_26:
    *((uint32_t *)result + 1) = v11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10211D0  (binary VA: 0x10211d0)
// Original: sub_10211D0
// ----------------------------------------------------------------------------
size_t sub_10211D0(int *a1, uint32_t *a2)
{
  char *src;
  int v4;
  size_t result;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  char *v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  int v15;
  int v17;
  unsigned int v18;
  size_t v19;

  src = (char *)a1[1];
  if ( src == (char *)a1[2] )
  {
    v7 = (int)(uintptr_t)(&src[-*a1]) >> 2;
    v19 = 4;
    if ( v7 != 0 )
    {
      v19 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v15 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v15 = -4;
        v19 = v15;
      }
    }
    v17 = VoxAllocInternal(v19, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    v18 = v17 + 4;
    v8 = (uint32_t *)(v17 + 4 * v7);
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = (char *)*a1;
    if ( src != (char *)*a1 )
    {
      v10 = (char *)*a1;
      v11 = (uint32_t *)v17;
      do
      {
        if ( v11 != nullptr )
          *v11 = *(uint32_t *)v10;
        v10 += 4;
        ++v11;
      }
      while ( src != v10 );
      v18 = v17 + 4 * ((unsigned int)(src - (v9 + 4)) >> 2) + 8;
    }
    v12 = (char *)a1[1];
    if ( src != v12 )
    {
      v13 = src;
      v14 = (uint32_t *)v18;
      do
      {
        if ( v14 != nullptr )
          *v14 = *(uint32_t *)v13;
        v13 += 4;
        ++v14;
      }
      while ( v12 != v13 );
      v18 += 4 * ((unsigned int)(v12 - (src + 4)) >> 2) + 4;
    }
    if ( *a1 != 0 )
      VoxFreeInternal((void *)*a1);
    *a1 = v17;
    a1[1] = v18;
    a1[2] = v19 + v17;
    return v19 + v17;
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *(uint32_t *)src = *((uint32_t *)src - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( result != 0 )
      result = (size_t)memmove((void *)(v4 - 4 * result), src, 4 * result);
    *(uint32_t *)src = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1021370  (binary VA: 0x1021370)
// Original: sub_1021370
// ----------------------------------------------------------------------------
int sub_1021370(int a1, int a2)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;

  v3 = *(uint32_t **)(a1 + 4);
  v4 = *(uint32_t **)a1;
  v5 = (int)(uintptr_t)(v3) - *(uint32_t *)a1;
  v6 = 0;
  v11 = v5 >> 2;
  v12 = 0;
  if ( a2 != 0 )
  {
    v12 = 4 * a2;
    v6 = VoxAllocInternal(4 * a2, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  }
  if ( v4 != v3 )
  {
    v7 = (uint32_t *)v6;
    do
    {
      if ( v7 != nullptr )
        *v7 = *v4;
      ++v4;
      ++v7;
    }
    while ( v3 != v4 );
  }
  if ( *(uint32_t *)a1 != 0 )
  {
    v10 = v6;
    VoxFreeInternal(*(void **)a1);
    v6 = v10;
  }
  *(uint32_t *)a1 = v6;
  v8 = v6 + 4 * v11;
  result = v12 + v6;
  *(uint32_t *)(a1 + 4) = v8;
  *(uint32_t *)(a1 + 8) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1021430  (binary VA: 0x1021430)
// Original: sub_1021430
// ----------------------------------------------------------------------------
int sub_1021430(int a1, int a2)
{
  uint32_t *v3;
  uint32_t *src;
  unsigned int v5;
  uint32_t *v6;
  unsigned int v7;
  uint32_t *v8;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  unsigned int v14;
  int v16;
  void *dest;

  if ( a2 == a1 )
    return a1;
  v3 = *(uint32_t **)(a2 + 4);
  src = *(uint32_t **)a2;
  dest = *(void **)a1;
  v5 = ((int)(uintptr_t)(v3) - *(uint32_t *)a2) >> 2;
  v14 = v5;
  if ( v5 > (*(uint32_t *)(a1 + 8) - *(uint32_t *)a1) >> 2 )
  {
    v11 = 0;
    v16 = 0;
    if ( v5 != 0 )
    {
      v16 = 4 * v5;
      v11 = VoxAllocInternal(4 * v5, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    }
    if ( src != v3 )
    {
      v12 = (uint32_t *)v11;
      do
      {
        if ( v12 != nullptr )
          *v12 = *src;
        ++src;
        ++v12;
      }
      while ( v3 != src );
    }
    if ( *(uint32_t *)a1 != 0 )
    {
      v13 = v11;
      VoxFreeInternal(*(void **)a1);
      v11 = v13;
    }
    *(uint32_t *)a1 = v11;
    v10 = v16 + v11;
    *(uint32_t *)(a1 + 8) = v10;
  }
  else
  {
    v6 = *(uint32_t **)(a1 + 4);
    v7 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(dest)) >> 2;
    if ( v5 <= v7 )
    {
      v10 = (int)(uintptr_t)(dest);
      if ( v5 != 0 )
      {
        memmove(dest, src, 4 * v5);
        v10 = 4 * v14 + *(uint32_t *)a1;
      }
    }
    else
    {
      v8 = &src[v7];
      if ( v7 != 0 )
      {
        memmove(dest, src, 4 * v7);
        v6 = *(uint32_t **)(a1 + 4);
        dest = *(void **)a1;
        v3 = *(uint32_t **)(a2 + 4);
        v8 = (uint32_t *)(*(uint32_t *)a2 + (((unsigned int)(uintptr_t)(v6) - *(uint32_t *)a1) & 0xFFFFFFFC));
      }
      if ( v3 != v8 )
      {
        do
        {
          if ( v6 != nullptr )
            *v6 = *v8;
          ++v8;
          ++v6;
        }
        while ( v3 != v8 );
        *(uint32_t *)(a1 + 4) = *(uint32_t *)a1 + 4 * v14;
        return a1;
      }
      v10 = (int)(uintptr_t)(dest) + 4 * v14;
    }
  }
  *(uint32_t *)(a1 + 4) = v10;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_unsigned_char_vox_SAlloc_aac539::reserve  (binary VA: 0x10381f0)
// Original: std::vector<unsigned char *,vox::SAllocator<unsigned char *,(vox::VoxMemHint)0>>::reserve
// ----------------------------------------------------------------------------
unsigned int g4_std::vector_unsigned_char_vox_SAlloc_aac539::reserve(std::vector<unsigned char *, vox::SAllocator<unsigned char *, (vox::VoxMemHint)0>> *self, unsigned int a2)
{
  uint32_t *v2;
  unsigned int result;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;

  if ( a2 > 0x3FFFFFFF )
    sub_1900180("vector::reserve");
  v2 = *(uint32_t **)self;
  result = (*((uint32_t *)self + 2) - *(uint32_t *)self) >> 2;
  if ( a2 > result )
  {
    v4 = *((uint32_t **)self + 1);
    v5 = 0;
    v10 = 0;
    v9 = v4 - v2;
    if ( a2 != 0 )
    {
      v10 = 4 * a2;
      v5 = VoxAllocInternal(4 * a2, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    }
    if ( v2 != v4 )
    {
      v6 = (uint32_t *)v5;
      do
      {
        if ( v6 != nullptr )
          *v6 = *v2;
        ++v2;
        ++v6;
      }
      while ( v4 != v2 );
    }
    if ( *(uint32_t *)self != 0 )
    {
      v8 = v5;
      VoxFreeInternal(*(void **)self);
      v5 = v8;
    }
    *(uint32_t *)self = v5;
    v7 = v5 + 4 * v9;
    result = v10 + v5;
    *((uint32_t *)self + 1) = v7;
    *((uint32_t *)self + 2) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_long_long_pair_long_long_00a3e4::M_erase  (binary VA: 0x10382f0)
// Original: std::_Rb_tree<long long,std::pair<long long const,vox::Handlable *>,std::_Select1st<std::pair<long long const,vox::Handlable *>>,vox::HandleIdCompStruct,vox::SAllocator<std::pair<long long const,vox::Handlable *>,(vox::VoxMemHint)0>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_long_long_pair_long_long_00a3e4::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)a2[3];
      v21 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v22 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v23 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v24 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v25 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v20 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              v19 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = v8[3];
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_long_long_pair_long_long_00a3e4::M_erase(
                                        a1,
                                        *(void **)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      VoxFreeInternal((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  VoxFreeInternal(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              VoxFreeInternal(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v25[2];
                          VoxFreeInternal(v25);
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v24[2];
                      VoxFreeInternal(v24);
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v23[2];
                  VoxFreeInternal(v23);
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v22[2];
              VoxFreeInternal(v22);
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v21[2];
          VoxFreeInternal(v21);
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)a2[2];
      VoxFreeInternal(a2);
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_10384A0  (binary VA: 0x10384a0)
// Original: sub_10384A0
// ----------------------------------------------------------------------------
int sub_10384A0(int a1, char *a2, int *a3)
{
  uint32_t *v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  char *v10;
  char *v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int *v16;
  char *v17;
  char *v18;
  uint32_t *v19;
  char *v20;
  char *v21;
  uint32_t *v22;
  char *v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  int v28;

  v4 = *(uint32_t **)(a1 + 4);
  if ( v4 != *(uint32_t **)(a1 + 8) )
  {
    v5 = 0;
    if ( v4 != nullptr )
    {
      *v4 = *(v4 - 3);
      v4[1] = *(v4 - 2);
      v4[2] = *(v4 - 1);
      v5 = *(uint32_t *)(a1 + 4);
    }
    v6 = v5 + 12;
    v7 = (char *)(v5 - 12);
    *(uint32_t *)(a1 + 4) = v6;
    v8 = *a3;
    v9 = -1431655765 * ((v7 - a2) >> 2);
    v24 = a3[1];
    v26 = a3[2];
    v10 = v7;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        v10 -= 12;
        --v9;
        *(uint32_t *)v7 = *(uint32_t *)v10;
        *((uint32_t *)v7 + 1) = *((uint32_t *)v10 + 1);
        *((uint32_t *)v7 + 2) = *((uint32_t *)v10 + 2);
        if ( v9 == 0 )
          break;
        v7 -= 12;
      }
    }
    *(uint32_t *)a2 = v8;
    *((uint32_t *)a2 + 2) = v26;
    *((uint32_t *)a2 + 1) = v24;
    return v26;
  }
  v12 = *(char **)a1;
  v13 = -1431655765 * (((int)(uintptr_t)(v4) - *(uint32_t *)a1) >> 2);
  if ( v13 != 0 )
  {
    v14 = 2 * v13;
    if ( v13 > 2 * v13 || v14 > 0x15555555 )
    {
      v28 = -4;
      v15 = -1431655765 * ((a2 - v12) >> 2);
    }
    else
    {
      v28 = 24 * v13;
      v15 = -1431655765 * ((a2 - v12) >> 2);
      if ( v14 == 0 )
      {
        v27 = 12;
        v25 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v28 = 12;
    v15 = -1431655765 * ((a2 - v12) >> 2);
  }
  v23 = a2;
  v25 = VoxAllocInternal(v28, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  v27 = v25 + 12;
  a2 = v23;
LABEL_13:
  v16 = (int *)(v25 + 12 * v15);
  if ( v16 != nullptr )
  {
    *v16 = *a3;
    v16[1] = a3[1];
    v16[2] = a3[2];
  }
  v17 = *(char **)a1;
  if ( a2 != *(char **)a1 )
  {
    v18 = *(char **)a1;
    v19 = (uint32_t *)v25;
    do
    {
      if ( v19 != nullptr )
      {
        *v19 = *(uint32_t *)v18;
        v19[1] = *((uint32_t *)v18 + 1);
        v19[2] = *((uint32_t *)v18 + 2);
      }
      v18 += 12;
      v19 += 3;
    }
    while ( a2 != v18 );
    v27 = v25 + 4 * ((unsigned int)(a2 - (v17 + 12)) >> 2) + 24;
  }
  v20 = *(char **)(a1 + 4);
  if ( a2 != v20 )
  {
    v21 = a2;
    v22 = (uint32_t *)v27;
    do
    {
      if ( v22 != nullptr )
      {
        *v22 = *(uint32_t *)v21;
        v22[1] = *((uint32_t *)v21 + 1);
        v22[2] = *((uint32_t *)v21 + 2);
      }
      v21 += 12;
      v22 += 3;
    }
    while ( v20 != v21 );
    v27 += 4 * ((unsigned int)(v20 - (a2 + 12)) >> 2) + 12;
  }
  if ( *(uint32_t *)a1 != 0 )
    VoxFreeInternal(*(void **)a1);
  *(uint32_t *)a1 = v25;
  *(uint32_t *)(a1 + 4) = v27;
  *(uint32_t *)(a1 + 8) = v28 + v25;
  return v28 + v25;
}

// ----------------------------------------------------------------------------
// Function: sub_103E600  (binary VA: 0x103e600)
// Original: sub_103E600
// ----------------------------------------------------------------------------
int sub_103E600(int a1, uint32_t *a2, int a3)
{
  size_t v3;
  uint32_t *v4;
  size_t v5;
  size_t i;
  size_t v7;
  uint32_t *v8;
  size_t v9;
  size_t n;
  int v11;
  uint32_t *v12;
  size_t v13;
  size_t v14;
  uint32_t *v15;
  int v16;
  int v17;
  size_t v19;
  unsigned int v20;
  size_t v21;
  size_t v22;
  size_t v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  unsigned int v28;
  size_t v29;
  size_t v30;
  unsigned int v31;
  int v32;
  int v33;
  size_t v34;
  char v35;
  void *s1;
  size_t v39;
  size_t v40;
  uint32_t *v41;

  v3 = a2[2];
  v4 = a2 + 1;
  v41 = v4;
  if ( v3 == 0 )
  {
    v13 = (size_t)v4;
    goto LABEL_17;
  }
  s1 = *(void **)a3;
  v5 = *(uint32_t *)(*(uint32_t *)a3 - 12);
  for ( i = v3; ; i = v7 )
  {
    v8 = *(uint32_t **)(i + 16);
    v9 = *(v8 - 3);
    n = v9;
    v34 = i;
    if ( v5 <= v9 )
      n = v5;
    v39 = n;
    v11 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v11 == 0 )
      v11 = v5 - v9;
    if ( v11 >= 0 )
      break;
    v7 = *(uint32_t *)(v34 + 8);
    v35 = 1;
    if ( v7 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v7 = *(uint32_t *)(v34 + 12);
  v35 = 0;
  if ( v7 != 0 )
    goto LABEL_4;
LABEL_11:
  v12 = v8;
  v13 = v34;
  v14 = v39;
  v15 = v12;
  v40 = v34;
  if ( v35 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( a2[3] == v13 )
  {
    LOBYTE(v20) = 1;
    if ( v41 != (uint32_t *)v13 )
    {
      v21 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v22 = *(uint32_t *)(*(uint32_t *)a3 - 12);
      v23 = v22;
      if ( v21 <= v22 )
        v23 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v24 = v22 - v21;
      v25 = memcmp(*(const void **)a3, *(const void **)(v13 + 16), v23);
      if ( v25 == 0 )
        v25 = v24;
      v20 = v25 >> 31;
    }
    v26 = VoxAllocInternal(0x1Cu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v26 != -16 )
    {
      g4_std::string::construct_copy(v26 + 16, a3);
      v27 = *(uint32_t *)(a3 + 4);
      *(uint32_t *)(v26 + 24) = *(uint32_t *)(a3 + 8);
      *(uint32_t *)(v26 + 20) = v27;
    }
    sub_1904970(v20, v26, v13, v41);
  }
  else
  {
    v19 = sub_19048F0(v13);
    v15 = *(uint32_t **)(v19 + 16);
    v40 = v13;
    v13 = v19;
    v9 = *(v15 - 3);
    s1 = *(void **)a3;
    v5 = *(uint32_t *)(*(uint32_t *)a3 - 12);
    v14 = v5;
    if ( v9 <= v5 )
      v14 = *(v15 - 3);
LABEL_12:
    v16 = memcmp(v15, s1, v14);
    v17 = v9 - v5;
    if ( v16 != 0 )
      v17 = v16;
    if ( v17 >= 0 )
    {
      *(uint32_t *)a1 = v13;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    LOBYTE(v28) = 1;
    if ( v41 != (uint32_t *)v40 )
    {
      v29 = *(uint32_t *)(*(uint32_t *)(v40 + 16) - 12);
      v30 = v29;
      if ( v5 <= v29 )
        v30 = v5;
      v31 = v5 - v29;
      v32 = memcmp(s1, *(const void **)(v40 + 16), v30);
      if ( v32 != 0 )
        v31 = v32;
      v28 = v31 >> 31;
    }
    v26 = VoxAllocInternal(0x1Cu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v26 != -16 )
    {
      g4_std::string::construct_copy(v26 + 16, a3);
      v33 = *(uint32_t *)(a3 + 4);
      *(uint32_t *)(v26 + 24) = *(uint32_t *)(a3 + 8);
      *(uint32_t *)(v26 + 20) = v33;
    }
    sub_1904970(v28, v26, v40, v41);
  }
  ++a2[5];
  *(uint32_t *)a1 = v26;
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_73770e::M_erase  (binary VA: 0x103fb60)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,unsigned long long>,std::_Select1st<std::pair<std::string const,unsigned long long>>,std::less<std::string>,vox::SAllocator<std::pair<std::string const,unsigned long long>,(vox::VoxMemHint)0>>::_M_erase
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_string_pair_string_const_73770e::M_erase(int a1, uint32_t *a2)
{
  uint32_t *result;
  uint32_t *i;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;

  result = a2;
  if ( a2 != nullptr )
  {
    for ( i = a2; ; i = v22 )
    {
      v25 = (uint32_t *)i[3];
      if ( v25 != nullptr )
      {
        while ( 1 )
        {
          v26 = (uint32_t *)v25[3];
          if ( v26 != nullptr )
          {
            while ( 1 )
            {
              v27 = (uint32_t *)v26[3];
              if ( v27 != nullptr )
              {
                while ( 1 )
                {
                  v28 = (uint32_t *)v27[3];
                  if ( v28 != nullptr )
                  {
                    while ( 1 )
                    {
                      v29 = (uint32_t *)v28[3];
                      if ( v29 != nullptr )
                      {
                        while ( 1 )
                        {
                          v24 = (uint32_t *)v29[3];
                          if ( v24 != nullptr )
                          {
                            while ( 1 )
                            {
                              v23 = (uint32_t *)v24[3];
                              if ( v23 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v4 = v23[3];
                                  if ( v4 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_73770e::M_erase(
                                        a1,
                                        *(void **)(v4 + 12));
                                      v5 = *(uint32_t *)(v4 + 16);
                                      v6 = *(uint32_t *)(v4 + 8);
                                      if ( (uint32_t *)(v5 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
                                      }
                                      VoxFreeInternal((void *)v4);
                                      if ( v6 == 0 )
                                        break;
                                      v4 = v6;
                                    }
                                  }
                                  v7 = v23[4];
                                  v8 = (uint32_t *)v23[2];
                                  if ( (uint32_t *)(v7 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
                                  }
                                  VoxFreeInternal(v23);
                                  if ( v8 == nullptr )
                                    break;
                                  v23 = v8;
                                }
                              }
                              v9 = v24[4];
                              v10 = (uint32_t *)v24[2];
                              if ( (uint32_t *)(v9 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v9 - 12));
                              }
                              VoxFreeInternal(v24);
                              if ( v10 == nullptr )
                                break;
                              v24 = v10;
                            }
                          }
                          v11 = v29[4];
                          v12 = (uint32_t *)v29[2];
                          if ( (uint32_t *)(v11 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v11 - 12));
                          }
                          VoxFreeInternal(v29);
                          if ( v12 == nullptr )
                            break;
                          v29 = v12;
                        }
                      }
                      v13 = v28[4];
                      v14 = (uint32_t *)v28[2];
                      if ( (uint32_t *)(v13 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v13 - 12));
                      }
                      VoxFreeInternal(v28);
                      if ( v14 == nullptr )
                        break;
                      v28 = v14;
                    }
                  }
                  v17 = v27[4];
                  v18 = (uint32_t *)v27[2];
                  if ( (uint32_t *)(v17 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v17 - 12));
                  }
                  VoxFreeInternal(v27);
                  if ( v18 == nullptr )
                    break;
                  v27 = v18;
                }
              }
              v19 = v26[4];
              v20 = (uint32_t *)v26[2];
              if ( (uint32_t *)(v19 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v19 - 12));
              }
              VoxFreeInternal(v26);
              if ( v20 == nullptr )
                break;
              v26 = v20;
            }
          }
          v15 = v25[4];
          v16 = (uint32_t *)v25[2];
          if ( (uint32_t *)(v15 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v15 - 12));
          }
          VoxFreeInternal(v25);
          if ( v16 == nullptr )
            break;
          v25 = v16;
        }
      }
      v21 = a2[4];
      v22 = (uint32_t *)a2[2];
      if ( (uint32_t *)(v21 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v21 - 12));
      }
      result = (uint32_t *)VoxFreeInternal(a2);
      if ( v22 == nullptr )
        break;
      a2 = v22;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: crc32mpc  (binary VA: 0x10410e0)
// Original: crc32mpc
// ----------------------------------------------------------------------------
int crc32mpc(int a1, int a2)
{
  unsigned int i;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int result;
  unsigned int v12;
  int j;
  char v14;

  if ( dword_20E24A0 == 0 )
  {
    for ( i = 0; i != 256; ++i )
    {
      v3 = (i >> 1) ^ 0xEDB88320;
      if ( (i & 1) == 0 )
        v3 = i >> 1;
      v4 = (v3 >> 1) ^ 0xEDB88320;
      if ( (v3 & 1) == 0 )
        v4 = v3 >> 1;
      v5 = (v4 >> 1) ^ 0xEDB88320;
      if ( (v4 & 1) == 0 )
        v5 = v4 >> 1;
      v6 = (v5 >> 1) ^ 0xEDB88320;
      if ( (v5 & 1) == 0 )
        v6 = v5 >> 1;
      v7 = (v6 >> 1) ^ 0xEDB88320;
      if ( (v6 & 1) == 0 )
        v7 = v6 >> 1;
      v8 = (v7 >> 1) ^ 0xEDB88320;
      if ( (v7 & 1) == 0 )
        v8 = v7 >> 1;
      v9 = (v8 >> 1) ^ 0xEDB88320;
      if ( (v8 & 1) == 0 )
        v9 = v8 >> 1;
      v10 = v9 >> 1;
      if ( (v9 & 1) != 0 )
        v10 = (v9 >> 1) ^ 0xEDB88320;
      dword_20E24C0[i] = v10;
    }
    dword_20E24A0 = 1;
  }
  result = 0;
  if ( a2 > 0 )
  {
    v12 = 0xFFFFFFFF;
    for ( j = 0; j != a2; ++j )
    {
      v14 = *(uint8_t *)(a1 + j);
      v12 = dword_20E24C0[(uint8_t)(v12 ^ v14)] ^ (v12 >> 8);
    }
    return ~v12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10454A0  (binary VA: 0x10454a0)
// Original: sub_10454A0
// ----------------------------------------------------------------------------
int * sub_10454A0(float *a1, float *a2)
{
  float v2; // xmm4_4
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v5; // xmm5_4
  float v6; // xmm5_4
  float v7; // xmm2_4
  float v8; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm7_4
  float v13; // xmm5_4
  float v14; // xmm2_4
  float v15; // xmm2_4
  float v16; // xmm6_4
  float v17; // xmm4_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm7_4
  float v21; // xmm5_4
  float v22; // xmm2_4
  float v23; // xmm6_4
  float v24; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  float v27; // xmm6_4
  float v28; // xmm2_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm4_4
  float v32; // xmm4_4
  float v33; // xmm2_4
  float v34; // xmm6_4
  float v35; // xmm2_4
  float v36; // xmm6_4
  float v37; // xmm2_4
  float v38; // xmm6_4
  float v39; // xmm5_4
  float v40; // xmm4_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm7_4
  float v45; // xmm3_4
  float v46; // xmm7_4
  float v47; // xmm4_4
  float v48; // xmm3_4
  float v49; // xmm5_4
  float v50; // xmm6_4
  float v51; // xmm7_4
  float v52; // xmm4_4
  float v53; // xmm3_4
  float v54; // xmm7_4
  float v55; // xmm4_4
  float v56; // xmm6_4
  float v57; // xmm5_4
  float v58; // xmm7_4
  float v59; // xmm3_4
  float v60; // xmm5_4
  float v61; // xmm2_4
  float v62; // xmm1_4
  float v63; // xmm2_4
  float v64; // xmm2_4
  float v65; // xmm1_4
  float v66; // xmm1_4
  float v67; // xmm2_4
  float v68; // xmm3_4
  float v69; // xmm5_4
  float v70; // xmm3_4
  float v71; // xmm6_4
  float v72; // xmm1_4
  float v73; // xmm6_4
  float v74; // xmm1_4
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  float v165;
  float v166;
  float v167;
  float v168;
  float v169;
  float v170;
  float v171;
  float v172;
  float v173;
  float v174;
  float v175;
  float v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  float v182;
  float v183;
  float v184;
  float v185;
  float v186;

  v163 = a1[23] + a1[8];
  v156 = a1[22] + a1[9];
  v117 = a1[21] + a1[10];
  v114 = a1[20] + a1[11];
  v171 = a1[19] + a1[12];
  v2 = a1[17] + a1[14];
  v179 = a1[18] + a1[13];
  v3 = a1[16] + a1[15];
  v144 = (float)(a1[29] + a1[2]) + v179;
  v138 = (float)(a1[28] + a1[3]) + v171;
  v108 = (float)(a1[25] + a1[6]) + v156;
  v99 = (float)(a1[24] + a1[7]) + v163;
  v150 = 0.5024193f * (float)((float)(a1[31] + *a1) - v3);
  v126 = 0.5224986f * (float)((float)(a1[30] + a1[1]) - v2);
  v180 = 0.56694406f * (float)((float)(a1[29] + a1[2]) - v179);
  v172 = 0.6468218f * (float)((float)(a1[28] + a1[3]) - v171);
  v104 = 0.7881546f * (float)((float)(a1[27] + a1[4]) - v114);
  v4 = (float)((float)(a1[24] + a1[7]) - v163) * 5.1011486f;
  v5 = (float)(a1[25] + a1[6]) - v156;
  v164 = (float)((float)(a1[31] + *a1) + v3) + v99;
  v123 = (float)((float)(a1[30] + a1[1]) + v2) + v108;
  v120 = (float)((float)(a1[26] + a1[5]) + v117) + v144;
  v157 = (float)((float)(a1[27] + a1[4]) + v114) + v138;
  v6 = v5 * 1.7224472f;
  v7 = (float)((float)(a1[26] + a1[5]) - v117) * 1.0606776f;
  v8 = (float)((float)((float)(a1[31] + *a1) + v3) - v99) * 0.5097956f;
  v9 = (float)(v144 - (float)((float)(a1[26] + a1[5]) + v117)) * 0.8999762f;
  v10 = (float)(v138 - (float)((float)(a1[27] + a1[4]) + v114)) * 2.5629156f;
  v11 = (float)((float)((float)(a1[30] + a1[1]) + v2) - v108) * 0.6013449f;
  v118 = v150 + v4;
  v115 = v126 + v6;
  v112 = v180 + v7;
  v110 = v172 + v104;
  v12 = (float)(v150 - v4) * 0.5097956f;
  v13 = (float)(v126 - v6) * 0.6013449f;
  v181 = 0.8999762f * (float)(v180 - v7);
  v14 = v172 - v104;
  v173 = v157 + v164;
  v15 = v14 * 2.5629156f;
  v151 = v120 + v123;
  v165 = 0.5411961f * (float)(v164 - v157);
  v124 = 1.306563f * (float)(v123 - v120);
  v158 = v10 + v8;
  v16 = (float)(v8 - v10) * 0.5411961f;
  v127 = v110 + v118;
  v121 = v9 + v11;
  v17 = (float)(v11 - v9) * 1.306563f;
  v18 = (float)(v115 - v112) * 1.306563f;
  v145 = v112 + v115;
  v19 = (float)(v118 - v110) * 0.5411961f;
  v139 = v15 + v12;
  v20 = (float)(v12 - v15) * 0.5411961f;
  v134 = v181 + v13;
  v21 = (float)(v13 - v181) * 1.306563f;
  v100 = (float)(v173 - v151) * 0.70710677f;
  v109 = (float)(v165 - v124) * 0.70710677f;
  v22 = v17 + v16;
  v23 = v16 - v17;
  v24 = v18 + v19;
  v182 = v22;
  v25 = (float)(v110 + v118) - (float)(v112 + v115);
  v26 = (float)(v19 - v18) * 0.70710677f;
  v113 = v23 * 0.70710677f;
  v130 = v24;
  v27 = v21 + v20;
  v28 = v25 * 0.70710677f;
  a2[48] = -(float)(v151 + v173);
  *a2 = v100;
  v119 = (float)(v20 - v21) * 0.70710677f;
  a2[8] = v109;
  v29 = (float)(v139 - v134) * 0.70710677f;
  a2[12] = v113;
  v125 = -(float)((float)(v124 + v165) + v109);
  a2[40] = v125;
  a2[14] = v119;
  v116 = v113 + (float)((float)(v158 - v121) * 0.70710677f);
  a2[4] = v116;
  v80 = v119 + v26;
  v82 = -(float)(v116 + v182);
  a2[36] = v82;
  v122 = -(float)((float)((float)(v121 + v158) + v182) + v113);
  a2[44] = v122;
  a2[10] = v119 + v26;
  v30 = (float)(v119 + v26) + v29;
  a2[6] = v30;
  v31 = (float)(v29 + v28) + v119;
  v78 = v30;
  a2[2] = v31;
  v77 = -v31;
  v32 = (float)-v31 - v27;
  v33 = (float)((float)(v28 - v130) - v26) + v32;
  a2[34] = v32;
  v79 = v32;
  a2[38] = v33;
  v111 = v33;
  v34 = -(float)((float)((float)(v134 + v139) + v27) + v119);
  v35 = v34 - v130;
  v36 = v34 - (float)(v127 + v145);
  v37 = v35 - v26;
  a2[46] = v36;
  v76 = v36;
  a2[42] = v37;
  v81 = v37;
  v84 = (float)(*a1 - a1[31]) * 0.500603f;
  v38 = (float)(a1[1] - a1[30]) * 0.50547093f;
  v39 = (float)(a1[2] - a1[29]) * 0.5154473f;
  v40 = (float)(a1[3] - a1[28]) * 0.5310426f;
  v41 = (float)(a1[4] - a1[27]) * 0.5531039f;
  v42 = (float)(a1[5] - a1[26]) * 0.582935f;
  v183 = (float)(a1[6] - a1[25]) * 0.6225041f;
  v174 = (float)(a1[7] - a1[24]) * 0.6748083f;
  v152 = (float)(a1[8] - a1[23]) * 0.7445363f;
  v128 = (float)(a1[9] - a1[22]) * 0.8393496f;
  v146 = (float)(a1[10] - a1[21]) * 0.9725682f;
  v140 = (float)(a1[11] - a1[20]) * 1.1694399f;
  v159 = (float)(a1[12] - a1[19]) * 1.4841646f;
  v166 = (float)(a1[13] - a1[18]) * 2.057781f;
  v135 = (float)(a1[14] - a1[17]) * 3.4076085f;
  v43 = a1[15] - a1[16];
  v105 = (float)(v43 * 10.190008f) + v84;
  v101 = v135 + v38;
  v97 = v166 + v39;
  v95 = v159 + v40;
  v93 = v140 + v41;
  v91 = v146 + v42;
  v88 = v128 + v183;
  v86 = v152 + v174;
  v131 = 0.5024193f * (float)(v84 - (float)(v43 * 10.190008f));
  v136 = 0.5224986f * (float)(v38 - v135);
  v167 = 0.56694406f * (float)(v39 - v166);
  v160 = 0.6468218f * (float)(v40 - v159);
  v141 = 0.7881546f * (float)(v41 - v140);
  v147 = 1.0606776f * (float)(v42 - v146);
  v75 = 1.7224472f * (float)(v183 - v128);
  v45 = (float)(v128 + v183) + v101;
  v46 = (float)(v174 - v152) * 5.1011486f;
  v184 = (float)(v152 + v174) + v105;
  v175 = v45;
  v85 = v91 + v97;
  v83 = v93 + v95;
  v47 = (float)(v105 - v86) * 0.5097956f;
  v48 = (float)(v101 - v88) * 0.6013449f;
  v49 = (float)(v97 - v91) * 0.8999762f;
  v50 = (float)(v95 - v93) * 2.5629156f;
  v153 = v131 + v46;
  v106 = v147 + v167;
  v102 = v141 + v160;
  v51 = (float)(v131 - v46) * 0.5097956f;
  v89 = 0.6013449f * (float)(v136 - v75);
  v168 = 0.8999762f * (float)(v167 - v147);
  v161 = 2.5629156f * (float)(v160 - v141);
  v98 = (float)(v93 + v95) + v184;
  v96 = v85 + v175;
  v185 = 0.5411961f * (float)(v184 - v83);
  v176 = 1.306563f * (float)(v175 - v85);
  v148 = v50 + v47;
  v52 = (float)(v47 - v50) * 0.5411961f;
  v142 = v49 + v48;
  v92 = (float)(v136 + v75) + v106;
  v53 = (float)(v48 - v49) * 1.306563f;
  v94 = v102 + v153;
  v154 = 0.5411961f * (float)(v153 - v102);
  v129 = 1.306563f * (float)((float)(v136 + v75) - v106);
  v137 = v161 + v51;
  v132 = v168 + v89;
  v107 = v176 + v185;
  v54 = (float)(v51 - v161) * 0.5411961f;
  v169 = 1.306563f * (float)(v89 - v168);
  v186 = (float)(v185 - v176) * 0.70710677f;
  v162 = v53 + v52;
  v55 = (float)(v52 - v53) * 0.70710677f;
  v103 = v142 + v148;
  v90 = v132 + v137;
  v177 = (float)(v94 - v92) * 0.70710677f;
  v56 = (float)(v154 - v129) * 0.70710677f;
  v57 = v148 - v142;
  v149 = v169 + v54;
  v58 = (float)(v54 - v169) * 0.70710677f;
  v59 = (float)(v137 - v132) * 0.70710677f;
  v60 = v57 * 0.70710677f;
  a2[15] = v58;
  a2[13] = v58 + v55;
  v133 = (float)(v58 + v55) + v56;
  a2[11] = v133;
  v143 = (float)(v59 + v60) + v133;
  a2[5] = v143;
  v170 = (float)(v186 + v56) + v58;
  a2[9] = v170;
  v87 = v170 + v59;
  a2[7] = v170 + v59;
  v61 = (float)((float)((float)((float)(v98 - v96) * 0.70710677f) + v177) + v59) + v58;
  v62 = (float)((float)((float)(v177 + v60) + v55) + v59) + v58;
  a2[1] = v61;
  v63 = -v61;
  a2[31] = v63;
  v64 = v63 - v149;
  a2[3] = v62;
  v65 = -v62;
  a2[29] = v65;
  a2[63] = v64;
  a2[33] = v64;
  v178 = (float)(v65 - v162) - v149;
  a2[35] = v178;
  v66 = (float)((float)((float)((float)(v129 + v154) + v56) + v59) + v149) + v58;
  v67 = (float)((float)((float)-v66 - v60) - v162) - v55;
  v155 = (float)((float)-v66 - v107) - v186;
  a2[37] = v67;
  a2[39] = v155;
  v68 = (float)(v59 - v90) - v66;
  v69 = (float)(v68 - v107) - v186;
  a2[41] = v69;
  v70 = (float)((float)(v68 - v103) - v162) - v55;
  v71 = -(float)((float)((float)((float)(v92 + v94) + v90) + v149) + v58);
  v72 = v71 - v103;
  v73 = v71 - (float)(v98 + v96);
  a2[43] = v70;
  a2[49] = v73;
  a2[47] = v73;
  v74 = (float)(v72 - v162) - v55;
  a2[32] = -v100;
  a2[30] = v77;
  a2[28] = -v116;
  a2[27] = -v143;
  a2[26] = -v78;
  a2[25] = -v87;
  a2[45] = v74;
  a2[24] = -v109;
  a2[23] = -v170;
  a2[22] = -v80;
  a2[21] = -v133;
  a2[19] = -(float)(v58 + v55);
  a2[20] = -v113;
  a2[17] = -v58;
  a2[18] = -v119;
  a2[62] = v79;
  a2[61] = v178;
  a2[60] = v82;
  a2[59] = v67;
  a2[51] = v74;
  a2[58] = v111;
  a2[57] = v155;
  a2[56] = v125;
  a2[55] = v69;
  a2[54] = v81;
  a2[53] = v70;
  a2[52] = v122;
  a2[50] = v76;
  return (int *)(&dword_1C7BC08);
}


