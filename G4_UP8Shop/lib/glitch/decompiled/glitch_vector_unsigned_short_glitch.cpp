#include "Core/Utils/DecompTypes.h"
#include "glitch_vector_unsigned_short_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::vector_unsigned_short_SAllocato_e4c7ed::M_fill_insert  (binary VA: 0xd86bb0)
// Original: std::vector<unsigned short,glitch::core::SAllocator<unsigned short,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_unsigned_short_SAllocato_e4c7ed::M_fill_insert(int *a1, char *src, unsigned int a3, uint16_t *a4)
{
  char *v4;
  unsigned int v5;
  char *v6;
  uint16_t *v7;
  unsigned int v8;
  char *v9;
  unsigned int j;
  __m128i v11;
  __m128i v12;
  unsigned int v13;
  __m128i *v14;
  uint16_t *v15;
  unsigned int v16;
  uint16_t *v17;
  char *v18;
  unsigned int v19;
  char *v20;
  unsigned int i;
  __m128i v22;
  __m128i v23;
  unsigned int v24;
  __m128i *v25;
  char *v26;
  uint8_t *v27;
  unsigned int v28;
  unsigned int v29;
  bool v30;
  unsigned int v31;
  int v32;
  size_t v33;
  int v34;
  int v35;
  uint16_t *v36;
  unsigned int k;
  int *v38;
  uint16_t *v39;
  char *v40;
  char *v41;
  uint16_t *v42;
  char *v43;
  uint16_t *v44;
  int v45;
  __m128i *v46;
  __m128i *v47;
  int v48;
  char *v49;
  int v50;
  unsigned int v51;
  int v52;
  int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;

  if ( a3 == 0 )
    return;
  v4 = (char *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v4)) >> 1 )
  {
    v5 = (uint16_t)*a4;
    v51 = (v4 - src) >> 1;
    if ( a3 >= v51 )
    {
      v15 = (uint16_t *)a1[1];
      if ( a3 != v51 )
      {
        v16 = a3 - v51;
        do
        {
          if ( v15 != nullptr )
            *v15 = v5;
          ++v15;
          --v16;
        }
        while ( v16 != 0 );
        v15 = (uint16_t *)a1[1];
      }
      v17 = &v15[a3 - v51];
      a1[1] = (int)(uintptr_t)(v17);
      if ( v4 == src )
      {
        a1[1] = (int)(uintptr_t)(&v17[v51]);
      }
      else
      {
        v18 = src;
        do
        {
          if ( v17 != nullptr )
            *v17 = *(uint16_t *)v18;
          v18 += 2;
          ++v17;
        }
        while ( v4 != v18 );
        a1[1] += 2 * v51;
        v19 = -((uint8_t)((uint8_t)(uintptr_t)src & 0xF) >> 1) & 7;
        v56 = ((unsigned int)(v4 - (src + 2)) >> 1) + 1;
        if ( v19 > v56 )
          v19 = ((unsigned int)(v4 - (src + 2)) >> 1) + 1;
        v20 = src;
        if ( v19 == 0 )
          goto LABEL_81;
        for ( i = 0; i < v19; ++i )
        {
          *(uint16_t *)v20 = v5;
          v20 += 2;
        }
        if ( v56 != v19 )
        {
LABEL_81:
          v57 = v56 - v19;
          if ( 8 * (v57 >> 3) == 0 )
            goto LABEL_82;
          v22 = _mm_cvtsi32_si128(v5);
          v23 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v22, v22), 0);
          v47 = (__m128i *)&src[2 * v19];
          v24 = 0;
          v25 = v47;
          do
          {
            ++v24;
            *v25++ = v23;
          }
          while ( v24 < v57 >> 3 );
          v20 += 16 * (v57 >> 3);
          if ( v57 != 8 * (v57 >> 3) )
          {
LABEL_82:
            do
            {
              *(uint16_t *)v20 = v5;
              v26 = v20 + 2;
              if ( v4 == v26 )
                break;
              *(uint16_t *)v26 = v5;
              v20 = v26 + 2;
            }
            while ( v4 != v20 );
          }
        }
      }
    }
    else
    {
      v6 = &v4[-2 * a3];
      v52 = 2 * a3;
      v49 = v6;
      v7 = (uint16_t *)a1[1];
      if ( v4 != v6 )
      {
        do
        {
          if ( v7 != nullptr )
            *v7 = *(uint16_t *)v6;
          v6 += 2;
          ++v7;
        }
        while ( v4 != v6 );
        v7 = (uint16_t *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v52 / 2u]);
      if ( (v49 - src) >> 1 != 0 )
        memmove(&v4[-2 * ((v49 - src) >> 1)], src, 2 * ((v49 - src) >> 1));
      if ( &src[v52] != src )
      {
        v8 = -((uint8_t)((uint8_t)(uintptr_t)src & 0xF) >> 1) & 7;
        v54 = ((unsigned int)(v52 - 2) >> 1) + 1;
        if ( v54 <= v8 )
          v8 = ((unsigned int)(v52 - 2) >> 1) + 1;
        v9 = src;
        if ( v8 == 0 )
          goto LABEL_18;
        for ( j = 0; j < v8; ++j )
        {
          *(uint16_t *)v9 = v5;
          v9 += 2;
        }
        if ( v54 != v8 )
        {
LABEL_18:
          v55 = v54 - v8;
          if ( 8 * (v55 >> 3) == 0 )
            goto LABEL_83;
          v11 = _mm_cvtsi32_si128(v5);
          v12 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v11, v11), 0);
          v46 = (__m128i *)&src[2 * v8];
          v13 = 0;
          v14 = v46;
          do
          {
            ++v13;
            *v14++ = v12;
          }
          while ( v13 < v55 >> 3 );
          v9 += 16 * (v55 >> 3);
          if ( v55 != 8 * (v55 >> 3) )
          {
LABEL_83:
            do
            {
              *(uint16_t *)v9 = v5;
              v9 += 2;
            }
            while ( &src[v52] != v9 );
          }
        }
      }
    }
    return;
  }
  v27 = (uint8_t *)*a1;
  v28 = (int)(uintptr_t)(&v4[-*a1]) >> 1;
  if ( a3 > 0x7FFFFFFF - v28 )
    sub_1900180("vector::_M_fill_insert");
  v29 = a3;
  if ( v28 >= a3 )
    v29 = v28;
  v30 = __CFADD__(v29, v28);
  v31 = v29 + v28;
  if ( v30 || v31 > 0x7FFFFFFF )
  {
    v50 = -2;
    v32 = src - (char *)(v27);
    v33 = 0xFFFFFFFE;
    v34 = v32 >> 1;
LABEL_53:
    v45 = v34;
    v53 = sub_4EBDC0(v33);
    v34 = v45;
    v35 = v53;
    goto LABEL_54;
  }
  v34 = (src - (char *)(v27)) >> 1;
  if ( v31 != 0 )
  {
    v50 = 2 * v31;
    v33 = 2 * v31;
    goto LABEL_53;
  }
  v53 = 0;
  v50 = 0;
  v35 = 0;
LABEL_54:
  v36 = (uint16_t *)(v35 + 2 * v34);
  for ( k = a3; k != 0; --k )
  {
    if ( v36 != nullptr )
      *v36 = *a4;
    ++v36;
  }
  v38 = a1;
  v39 = (uint16_t *)v53;
  if ( (char *)*a1 != src )
  {
    v40 = (char *)*a1;
    v48 = *a1;
    do
    {
      if ( v39 != nullptr )
        *v39 = *(uint16_t *)v40;
      v40 += 2;
      ++v39;
    }
    while ( v40 != src );
    v38 = a1;
    v39 = (uint16_t *)(v53 + 2 * ((unsigned int)(uintptr_t)(&src[-v48 - 2]) >> 1) + 2);
  }
  v41 = (char *)v38[1];
  v42 = &v39[a3];
  if ( v41 != src )
  {
    v43 = src;
    v44 = &v39[a3];
    do
    {
      if ( v44 != nullptr )
        *v44 = *(uint16_t *)v43;
      v43 += 2;
      ++v44;
    }
    while ( v41 != v43 );
    v42 += ((unsigned int)(v41 - (src + 2)) >> 1) + 1;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v53;
  a1[1] = (int)(uintptr_t)(v42);
  a1[2] = v50 + v53;
}


