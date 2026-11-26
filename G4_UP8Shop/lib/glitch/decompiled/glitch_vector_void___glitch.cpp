#include "Core/Utils/DecompTypes.h"
#include "glitch_vector_void___glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::vector_void_SAllocator_void_mem_63b24e::M_fill_insert  (binary VA: 0xd88140)
// Original: std::vector<void *,glitch::core::SAllocator<void *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_void_SAllocator_void_mem_63b24e::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int *v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int *v9;
  unsigned int j;
  __m128i v11;
  unsigned int v12;
  __m128i *v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int i;
  __m128i v21;
  unsigned int v22;
  __m128i *v23;
  unsigned int *v24;
  uint8_t *v25;
  unsigned int v26;
  unsigned int v27;
  bool v28;
  unsigned int v29;
  int v30;
  size_t v31;
  int v32;
  int v33;
  unsigned int *v34;
  unsigned int k;
  int *v36;
  uint32_t *v37;
  char *v38;
  char *v39;
  uint32_t *v40;
  char *v41;
  uint32_t *v42;
  int v43;
  __m128i *v44;
  __m128i *v45;
  int v46;
  unsigned int *v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v49 = ((char *)v4 - src) >> 2;
    if ( a3 >= v49 )
    {
      v14 = (unsigned int *)a1[1];
      if ( a3 != v49 )
      {
        v15 = a3 - v49;
        do
        {
          if ( v14 != nullptr )
            *v14 = v5;
          ++v14;
          --v15;
        }
        while ( v15 != 0 );
        v14 = (unsigned int *)a1[1];
      }
      v16 = &v14[a3 - v49];
      a1[1] = (int)(uintptr_t)(v16);
      if ( v4 == (unsigned int *)src )
      {
        a1[1] = (int)(uintptr_t)(&v16[v49]);
      }
      else
      {
        v17 = (unsigned int *)src;
        do
        {
          if ( v16 != nullptr )
            *v16 = *v17;
          ++v17;
          ++v16;
        }
        while ( v4 != v17 );
        a1[1] += 4 * v49;
        v18 = -((uint8_t)((uint8_t)(uintptr_t)src & 0xF) >> 2) & 3;
        v54 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        if ( v18 > v54 )
          v18 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        v19 = (unsigned int *)src;
        if ( v18 == 0 )
          goto LABEL_81;
        for ( i = 0; i < v18; ++i )
          *v19++ = v5;
        if ( v54 != v18 )
        {
LABEL_81:
          v55 = v54 - v18;
          if ( 4 * (v55 >> 2) == 0 )
            goto LABEL_82;
          v21 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v45 = (__m128i *)&src[4 * v18];
          v22 = 0;
          v23 = v45;
          do
          {
            ++v22;
            *v23++ = v21;
          }
          while ( v22 < v55 >> 2 );
          v19 += 4 * (v55 >> 2);
          if ( v55 != 4 * (v55 >> 2) )
          {
LABEL_82:
            do
            {
              *v19 = v5;
              v24 = v19 + 1;
              if ( v4 == v24 )
                break;
              *v24 = v5;
              v19 = v24 + 1;
            }
            while ( v4 != v19 );
          }
        }
      }
    }
    else
    {
      v6 = &v4[-a3];
      v50 = 4 * a3;
      v47 = v6;
      v7 = (unsigned int *)a1[1];
      if ( v4 != v6 )
      {
        do
        {
          if ( v7 != nullptr )
            *v7 = *v6;
          ++v6;
          ++v7;
        }
        while ( v4 != v6 );
        v7 = (unsigned int *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v50 / 4u]);
      if ( ((char *)v47 - src) >> 2 != 0 )
        memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      if ( &src[v50] != src )
      {
        v8 = -((uint8_t)((uint8_t)(uintptr_t)src & 0xF) >> 2) & 3;
        v52 = ((unsigned int)(v50 - 4) >> 2) + 1;
        if ( v52 <= v8 )
          v8 = ((unsigned int)(v50 - 4) >> 2) + 1;
        v9 = (unsigned int *)src;
        if ( v8 == 0 )
          goto LABEL_18;
        for ( j = 0; j < v8; ++j )
          *v9++ = v5;
        if ( v52 != v8 )
        {
LABEL_18:
          v53 = v52 - v8;
          if ( 4 * (v53 >> 2) == 0 )
            goto LABEL_83;
          v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v44 = (__m128i *)&src[4 * v8];
          v12 = 0;
          v13 = v44;
          do
          {
            ++v12;
            *v13++ = v11;
          }
          while ( v12 < v53 >> 2 );
          v9 += 4 * (v53 >> 2);
          if ( v53 != 4 * (v53 >> 2) )
          {
LABEL_83:
            do
              *v9++ = v5;
            while ( &src[v50] != (char *)v9 );
          }
        }
      }
    }
    return;
  }
  v25 = (uint8_t *)*a1;
  v26 = ((int)(uintptr_t)(v4) - *a1) >> 2;
  if ( a3 > 0x3FFFFFFF - v26 )
    sub_1900180("vector::_M_fill_insert");
  v27 = a3;
  if ( v26 >= a3 )
    v27 = v26;
  v28 = __CFADD__(v27, v26);
  v29 = v27 + v26;
  if ( v28 || v29 > 0x3FFFFFFF )
  {
    v48 = -4;
    v30 = src - (char *)(v25);
    v31 = 0xFFFFFFFC;
    v32 = v30 >> 2;
LABEL_53:
    v43 = v32;
    v51 = sub_4EBDC0(v31);
    v32 = v43;
    v33 = v51;
    goto LABEL_54;
  }
  v32 = (src - (char *)(v25)) >> 2;
  if ( v29 != 0 )
  {
    v48 = 4 * v29;
    v31 = 4 * v29;
    goto LABEL_53;
  }
  v51 = 0;
  v48 = 0;
  v33 = 0;
LABEL_54:
  v34 = (unsigned int *)(v33 + 4 * v32);
  for ( k = a3; k != 0; --k )
  {
    if ( v34 != nullptr )
      *v34 = *a4;
    ++v34;
  }
  v36 = a1;
  v37 = (uint32_t *)v51;
  if ( (char *)*a1 != src )
  {
    v38 = (char *)*a1;
    v46 = *a1;
    do
    {
      if ( v37 != nullptr )
        *v37 = *(uint32_t *)v38;
      v38 += 4;
      ++v37;
    }
    while ( v38 != src );
    v36 = a1;
    v37 = (uint32_t *)(v51 + 4 * ((unsigned int)(uintptr_t)(&src[-v46 - 4]) >> 2) + 4);
  }
  v39 = (char *)v36[1];
  v40 = &v37[a3];
  if ( v39 != src )
  {
    v41 = src;
    v42 = &v37[a3];
    do
    {
      if ( v42 != nullptr )
        *v42 = *(uint32_t *)v41;
      v41 += 4;
      ++v42;
    }
    while ( v39 != v41 );
    v40 += ((unsigned int)(v39 - (src + 4)) >> 2) + 1;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v51;
  a1[1] = (int)(uintptr_t)(v40);
  a1[2] = v48 + v51;
}


