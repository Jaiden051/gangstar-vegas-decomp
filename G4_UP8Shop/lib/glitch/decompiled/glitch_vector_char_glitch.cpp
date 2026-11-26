#include "Core/Utils/DecompTypes.h"
#include "glitch_vector_char_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::vector_char_SAllocator_char_mem_11ef6d::M_fill_insert  (binary VA: 0xf13780)
// Original: std::vector<char,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_char_SAllocator_char_mem_11ef6d::M_fill_insert(int *a1, char *s, size_t n, char *a4)
{
  int *v4;
  char *v5;
  size_t v6;
  size_t v7;
  bool v8;
  size_t v9;
  int v10;
  char *v11;
  size_t i;
  char *v13;
  char *v14;
  char *v15;
  char *v16;
  uint8_t *v17;
  char *v18;
  char *v19;
  uint8_t *v20;
  size_t v21;
  char *v22;
  char *v23;
  char *v24;
  size_t v25;
  size_t v26;
  size_t v27;
  char *v28;
  uint8_t v29;
  size_t v30;

  v4 = a1;
  if ( n == 0 )
    return;
  v5 = (char *)a1[1];
  if ( n > a1[2] - (int)(uintptr_t)(v5) )
  {
    v6 = (size_t)&v5[-*a1];
    if ( n > ~v6 )
      sub_1900180("vector::_M_fill_insert");
    v7 = n;
    v30 = 0xFFFFFFFF;
    if ( v6 >= n )
      v7 = v6;
    v8 = __CFADD__(v7, v6);
    v9 = v7 + v6;
    v24 = &s[-*a1];
    if ( !v8 )
    {
      if ( v9 == 0 )
      {
        v28 = nullptr;
        v30 = 0;
        v10 = 0;
        goto LABEL_9;
      }
      v30 = v9;
    }
    v10 = sub_4EBDC0(v30);
    v28 = (char *)v10;
LABEL_9:
    v11 = &v24[v10];
    for ( i = n; i != 0; --i )
    {
      if ( v11 != nullptr )
        *v11 = *a4;
      ++v11;
    }
    v25 = *a1;
    v13 = v28;
    if ( (char *)*a1 != s )
    {
      v14 = (char *)*a1;
      do
      {
        if ( v13 != nullptr )
          *v13 = *v14;
        ++v14;
        ++v13;
      }
      while ( v14 != s );
      v13 = &s[(uint32_t)(uintptr_t)(v28) - v25];
    }
    v26 = (size_t)&v13[n];
    v15 = (char *)a1[1];
    if ( v15 != s )
    {
      v16 = s;
      v17 = (uint8_t *)v26;
      do
      {
        if ( v17 != nullptr )
          *v17 = *v16;
        ++v16;
        ++v17;
      }
      while ( v16 != v15 );
      v26 += v16 - s;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = (int)(uintptr_t)(v28);
    a1[1] = v26;
    a1[2] = (int)(uintptr_t)(&v28[v30]);
    return;
  }
  v27 = v5 - s;
  v29 = *a4;
  if ( n >= v5 - s )
  {
    v20 = (uint8_t *)a1[1];
    if ( n != v27 )
    {
      v21 = n - v27;
      do
      {
        if ( v20 != nullptr )
          *v20 = v29;
        ++v20;
        --v21;
      }
      while ( v21 != 0 );
      v20 = (uint8_t *)a1[1];
    }
    v22 = (char *)&v20[n - v27];
    a1[1] = (int)(uintptr_t)(v22);
    if ( v5 != s )
    {
      v23 = s;
      do
      {
        if ( v22 != nullptr )
          *v22 = *v23;
        ++v23;
        ++v22;
      }
      while ( v23 != v5 );
      v22 = (char *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(&v22[v27]);
    memset(s, v29, v27);
  }
  else
  {
    v18 = (char *)a1[1];
    v19 = &v5[-n];
    if ( v5 != &v5[-n] )
    {
      do
      {
        if ( v18 != nullptr )
          *v18 = *v19;
        ++v19;
        ++v18;
      }
      while ( v19 != v5 );
      v4 = a1;
      v18 = (char *)a1[1];
    }
    v4[1] = (int)(uintptr_t)(&v18[n]);
    if ( &v5[-n] != s )
      memmove(&s[n], s, &v5[-n] - s);
    memset(s, v29, n);
  }
}


