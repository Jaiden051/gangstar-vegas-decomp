#include "Core/Utils/DecompTypes.h"
#include "glitch_vector_unsigned_long_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::vector_unsigned_long_SAllocator_3a32df::M_fill_insert  (binary VA: 0xf80c70)
// Original: std::vector<unsigned long,glitch::core::SAllocator<unsigned long,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_unsigned_long_SAllocator_3a32df::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int *v11;
  unsigned int i;
  uint32_t *v13;
  char *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int *v20;
  char *v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int *v24;
  unsigned int j;
  __m128i *v26;
  __m128i v27;
  unsigned int v28;
  size_t v29;
  unsigned int v30;
  unsigned int *v31;
  unsigned int *v32;
  unsigned int *v33;
  unsigned int v34;
  bool v35;
  unsigned int *v36;
  unsigned int v37;
  __m128i v38;
  unsigned int v39;
  __m128i *v40;
  unsigned int *v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  uint32_t *v46;
  unsigned int *v47;
  uint8_t *v48;
  int v49;
  unsigned int v50;
  int v51;
  char *v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 > (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v48 = (uint8_t *)*a1;
    v5 = ((int)(uintptr_t)(v4) - *a1) >> 2;
    if ( a3 > 0x3FFFFFFF - v5 )
      sub_1900180("vector::_M_fill_insert");
    v6 = a3;
    if ( v5 >= a3 )
      v6 = v5;
    v7 = __CFADD__(v6, v5);
    v8 = v6 + v5;
    if ( v7 || v8 > 0x3FFFFFFF )
    {
      v44 = -4;
      v29 = 0xFFFFFFFC;
      v9 = (src - (char *)(v48)) >> 2;
    }
    else
    {
      v9 = (src - (char *)(v48)) >> 2;
      if ( v8 == 0 )
      {
        v49 = 0;
        v44 = 0;
        v10 = 0;
        goto LABEL_10;
      }
      v44 = 4 * v8;
      v29 = 4 * v8;
    }
    v42 = v9;
    v49 = sub_4EBDC0(v29);
    v9 = v42;
    v10 = v49;
LABEL_10:
    v11 = (unsigned int *)(v10 + 4 * v9);
    for ( i = a3; i != 0; --i )
    {
      if ( v11 != nullptr )
        *v11 = *a4;
      ++v11;
    }
    v13 = (uint32_t *)v49;
    v45 = *a1;
    if ( (char *)*a1 != src )
    {
      v14 = (char *)*a1;
      do
      {
        if ( v13 != nullptr )
          *v13 = *(uint32_t *)v14;
        v14 += 4;
        ++v13;
      }
      while ( v14 != src );
      v13 = (uint32_t *)(v49 + 4 * ((unsigned int)(uintptr_t)(&src[-v45 - 4]) >> 2) + 4);
    }
    v46 = &v13[a3];
    v15 = (char *)a1[1];
    if ( v15 != src )
    {
      v16 = src;
      v17 = &v13[a3];
      do
      {
        if ( v17 != nullptr )
          *v17 = *(uint32_t *)v16;
        v16 += 4;
        ++v17;
      }
      while ( v15 != v16 );
      v46 += ((unsigned int)(v15 - (src + 4)) >> 2) + 1;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v49;
    a1[1] = (int)(uintptr_t)(v46);
    a1[2] = v44 + v49;
    return;
  }
  v18 = *a4;
  v50 = ((char *)v4 - src) >> 2;
  if ( a3 >= v50 )
  {
    v30 = a3 - v50;
    v31 = (unsigned int *)a1[1];
    if ( a3 != v50 )
    {
      do
      {
        if ( v31 != nullptr )
          *v31 = v18;
        ++v31;
        --v30;
      }
      while ( v30 != 0 );
      v31 = (unsigned int *)a1[1];
      v30 = a3 - v50;
    }
    v32 = &v31[v30];
    a1[1] = (int)(uintptr_t)(v32);
    if ( v4 == (unsigned int *)src )
    {
      a1[1] = (int)(uintptr_t)(&v32[v50]);
    }
    else
    {
      v33 = (unsigned int *)src;
      do
      {
        if ( v32 != nullptr )
          *v32 = *v33;
        ++v33;
        ++v32;
      }
      while ( v4 != v33 );
      a1[1] += 4 * v50;
      v56 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v34 = -((uint8_t)((uint8_t)(uintptr_t)src & 0xF) >> 2) & 3;
      if ( v34 > v56 )
        v34 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v35 = v34 == 0;
      v53 = v34;
      v36 = (unsigned int *)src;
      if ( v35 )
        goto LABEL_82;
      v37 = 0;
      do
      {
        ++v37;
        *v36++ = v18;
      }
      while ( v53 > v37 );
      if ( v56 != v53 )
      {
LABEL_82:
        v57 = v56 - v53;
        if ( 4 * (v57 >> 2) == 0 )
          goto LABEL_83;
        v38 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v39 = 0;
        v40 = (__m128i *)&src[4 * v53];
        do
        {
          ++v39;
          *v40++ = v38;
        }
        while ( v39 < v57 >> 2 );
        v36 += 4 * (v57 >> 2);
        if ( v57 != 4 * (v57 >> 2) )
        {
LABEL_83:
          do
          {
            *v36 = v18;
            v41 = v36 + 1;
            if ( v4 == v41 )
              break;
            *v41 = v18;
            v36 = v41 + 1;
          }
          while ( v4 != v36 );
        }
      }
    }
  }
  else
  {
    v51 = 4 * a3;
    v47 = &v4[-a3];
    v19 = (unsigned int *)a1[1];
    if ( v4 != v47 )
    {
      v20 = &v4[-a3];
      do
      {
        if ( v19 != nullptr )
          *v19 = *v20;
        ++v20;
        ++v19;
      }
      while ( v4 != v20 );
      v19 = (unsigned int *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(&v19[v51 / 4u]);
    if ( ((char *)v47 - src) >> 2 != 0 )
    {
      v43 = v18;
      memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      v18 = v43;
    }
    v21 = &src[v51];
    v52 = &src[v51];
    if ( v52 != src )
    {
      v22 = ((unsigned int)(v21 - (src + 4)) >> 2) + 1;
      v23 = -((uint8_t)((uint8_t)(uintptr_t)src & 0xF) >> 2) & 3;
      v54 = v22;
      if ( v22 <= v23 )
        v23 = v22;
      v24 = (unsigned int *)src;
      if ( v23 == 0 )
        goto LABEL_84;
      for ( j = 0; j < v23; ++j )
        *v24++ = v18;
      if ( v54 != v23 )
      {
LABEL_84:
        v55 = v54 - v23;
        if ( 4 * (v55 >> 2) == 0 )
          goto LABEL_85;
        v26 = (__m128i *)&src[4 * v23];
        v27 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v28 = 0;
        do
        {
          ++v28;
          *v26++ = v27;
        }
        while ( v28 < v55 >> 2 );
        v24 += 4 * (v55 >> 2);
        if ( v55 != 4 * (v55 >> 2) )
        {
LABEL_85:
          do
            *v24++ = v18;
          while ( v52 != (char *)v24 );
        }
      }
    }
  }
}


