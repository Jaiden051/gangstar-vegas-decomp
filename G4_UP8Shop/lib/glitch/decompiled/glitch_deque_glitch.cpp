#include "Core/Utils/DecompTypes.h"
#include "glitch_deque_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::deque_quickhull3d_detail_SEdge_c3a971::push_back  (binary VA: 0xf7a440)
// Original: std::deque<glitch::core::quickhull3d_detail::SEdge *,glitch::core::SAllocator<glitch::core::quickhull3d_detail::SEdge *,(glitch::memory::E_MEMORY_HINT)0>>::push_back
// ----------------------------------------------------------------------------
uint32_t * g4_std::deque_quickhull3d_detail_SEdge_c3a971::push_back(int *a1, uint32_t *a2)
{
  uint32_t *result;
  int v3;
  char *v4;
  unsigned int v5;
  uint32_t *v6;
  uint32_t **v7;
  int v8;
  int *dest;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char *v15;
  const void *v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  unsigned int v21;
  unsigned int v22;
  int *src;
  char *v24;
  int v25;

  result = (uint32_t *)a1[6];
  if ( result == (uint32_t *)(a1[8] - 4) )
  {
    v4 = (char *)a1[9];
    v5 = a1[1];
    if ( v5 - ((int)(uintptr_t)(&v4[-*a1]) >> 2) <= 1 )
    {
      src = (int *)a1[5];
      v25 = ((v4 - (char *)src) >> 2) + 1;
      v19 = ((v4 - (char *)src) >> 2) + 2;
      if ( v5 <= 2 * v19 )
      {
        v13 = 1;
        if ( v5 != 0 )
          v13 = a1[1];
        v14 = v5 + v13 + 2;
        v24 = (char *)sub_4EBDC0(4 * v14);
        v15 = &v24[4 * ((unsigned int)(v14 - v19) >> 1)];
        v16 = (const void *)a1[5];
        v17 = (a1[9] + 4 - (int)(uintptr_t)(v16)) >> 2;
        if ( v17 != 0 )
        {
          memmove(v15, v16, 4 * v17);
          v15 = &v24[4 * ((unsigned int)(v14 - v19) >> 1)];
        }
        v20 = (int *)v15;
        gll_operator_delete_arr(*a1);
        a1[1] = v14;
        *a1 = (int)(uintptr_t)(v24);
        dest = v20;
      }
      else
      {
        v8 = v4 + 4 - (char *)src;
        dest = (int *)(*a1 + 4 * ((v5 - v19) >> 1));
        if ( src <= dest )
        {
          v18 = v8 >> 2;
          if ( v18 != 0 )
          {
            v21 = *a1 + 4 * ((v5 - v19) >> 1);
            memmove(&dest[v25 - v18], src, 4 * v18);
            dest = (int *)v21;
          }
        }
        else
        {
          v10 = v8 >> 2;
          if ( v10 != 0 )
          {
            v22 = *a1 + 4 * ((v5 - v19) >> 1);
            memmove(dest, src, 4 * v10);
            dest = (int *)v22;
          }
        }
      }
      a1[5] = (int)(uintptr_t)(dest);
      v11 = *dest;
      a1[3] = *dest;
      a1[4] = v11 + 512;
      v4 = (char *)&dest[v25 - 1];
      a1[9] = (int)(uintptr_t)(v4);
      v12 = *(uint32_t *)v4;
      a1[7] = *(uint32_t *)v4;
      a1[8] = v12 + 512;
    }
    *((uint32_t *)v4 + 1) = sub_4EBDC0(0x200u);
    v6 = (uint32_t *)a1[6];
    if ( v6 != nullptr )
      *v6 = *a2;
    v7 = (uint32_t **)(a1[9] + 4);
    a1[9] = (int)(uintptr_t)(v7);
    result = *v7;
    a1[7] = (int)(uintptr_t)(*v7);
    a1[6] = (int)(uintptr_t)(result);
    a1[8] = (int)(uintptr_t)(result + 128);
  }
  else
  {
    v3 = 0;
    if ( result != nullptr )
    {
      *result = *a2;
      v3 = a1[6];
    }
    a1[6] = v3 + 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::deque_quickhull2d_detail_SEdge_479217::push_back  (binary VA: 0xf7c3d0)
// Original: std::deque<glitch::core::quickhull2d_detail::SEdge *,glitch::core::SAllocator<glitch::core::quickhull2d_detail::SEdge *,(glitch::memory::E_MEMORY_HINT)0>>::push_back
// ----------------------------------------------------------------------------
uint32_t * g4_std::deque_quickhull2d_detail_SEdge_479217::push_back(int *a1, uint32_t *a2)
{
  uint32_t *result;
  int v3;
  char *v4;
  unsigned int v5;
  uint32_t *v6;
  uint32_t **v7;
  int v8;
  int *dest;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char *v15;
  const void *v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  unsigned int v21;
  unsigned int v22;
  int *src;
  char *v24;
  int v25;

  result = (uint32_t *)a1[6];
  if ( result == (uint32_t *)(a1[8] - 4) )
  {
    v4 = (char *)a1[9];
    v5 = a1[1];
    if ( v5 - ((int)(uintptr_t)(&v4[-*a1]) >> 2) <= 1 )
    {
      src = (int *)a1[5];
      v25 = ((v4 - (char *)src) >> 2) + 1;
      v19 = ((v4 - (char *)src) >> 2) + 2;
      if ( v5 <= 2 * v19 )
      {
        v13 = 1;
        if ( v5 != 0 )
          v13 = a1[1];
        v14 = v5 + v13 + 2;
        v24 = (char *)sub_4EBDC0(4 * v14);
        v15 = &v24[4 * ((unsigned int)(v14 - v19) >> 1)];
        v16 = (const void *)a1[5];
        v17 = (a1[9] + 4 - (int)(uintptr_t)(v16)) >> 2;
        if ( v17 != 0 )
        {
          memmove(v15, v16, 4 * v17);
          v15 = &v24[4 * ((unsigned int)(v14 - v19) >> 1)];
        }
        v20 = (int *)v15;
        gll_operator_delete_arr(*a1);
        a1[1] = v14;
        *a1 = (int)(uintptr_t)(v24);
        dest = v20;
      }
      else
      {
        v8 = v4 + 4 - (char *)src;
        dest = (int *)(*a1 + 4 * ((v5 - v19) >> 1));
        if ( src <= dest )
        {
          v18 = v8 >> 2;
          if ( v18 != 0 )
          {
            v21 = *a1 + 4 * ((v5 - v19) >> 1);
            memmove(&dest[v25 - v18], src, 4 * v18);
            dest = (int *)v21;
          }
        }
        else
        {
          v10 = v8 >> 2;
          if ( v10 != 0 )
          {
            v22 = *a1 + 4 * ((v5 - v19) >> 1);
            memmove(dest, src, 4 * v10);
            dest = (int *)v22;
          }
        }
      }
      a1[5] = (int)(uintptr_t)(dest);
      v11 = *dest;
      a1[3] = *dest;
      a1[4] = v11 + 512;
      v4 = (char *)&dest[v25 - 1];
      a1[9] = (int)(uintptr_t)(v4);
      v12 = *(uint32_t *)v4;
      a1[7] = *(uint32_t *)v4;
      a1[8] = v12 + 512;
    }
    *((uint32_t *)v4 + 1) = sub_4EBDC0(0x200u);
    v6 = (uint32_t *)a1[6];
    if ( v6 != nullptr )
      *v6 = *a2;
    v7 = (uint32_t **)(a1[9] + 4);
    a1[9] = (int)(uintptr_t)(v7);
    result = *v7;
    a1[7] = (int)(uintptr_t)(*v7);
    a1[6] = (int)(uintptr_t)(result);
    a1[8] = (int)(uintptr_t)(result + 128);
  }
  else
  {
    v3 = 0;
    if ( result != nullptr )
    {
      *result = *a2;
      v3 = a1[6];
    }
    a1[6] = v3 + 4;
  }
  return result;
}


