#include "Core/Utils/DecompTypes.h"
#include "glitch___adjust_heap_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::adjust_heap_SEvent_int_SEvent_a959a1  (binary VA: 0xf810f0)
// Original: std::__adjust_heap<glitch::core::detail::SEvent *,int,glitch::core::detail::SEvent>
// ----------------------------------------------------------------------------
int g4_std::adjust_heap_SEvent_int_SEvent_a959a1(int a1, int a2, int a3, float a4, int a5)
{
  int v5;
  int v6;
  bool v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  bool v13;
  bool v14;
  bool i; // di
  float v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v5 = a2;
  v6 = a1;
  if ( a2 >= (a3 - 1) / 2 )
  {
    result = a1 + 8 * a2;
    v8 = a2;
  }
  else
  {
    while ( 1 )
    {
      v8 = 2 * (v5 + 1);
      v11 = v6 + 8 * (v8 - 1);
      v19 = v8 - 1;
      result = 16 * (v5 + 1) + v6;
      if ( *(float *)result == *(float *)v11 )
        v7 = (*(uint32_t *)(result + 4) & 3u) < (*(uint32_t *)(v11 + 4) & 3u);
      else
        v7 = *(float *)v11 > *(float *)result;
      if ( v7 )
      {
        --v8;
        result = a1 + 8 * v19;
      }
      v6 = a1;
      v10 = *(uint32_t *)(result + 4);
      *(uint32_t *)(a1 + 8 * v5) = *(uint32_t *)result;
      *(uint32_t *)(a1 + 8 * v5 + 4) = v10;
      if ( v8 >= (a3 - 1) / 2 )
        break;
      v5 = v8;
      v6 = a1;
    }
  }
  if ( (a3 & 1) == 0 && v8 == (a3 - 2) / 2 )
  {
    v8 = 2 * v8 + 1;
    v18 = *(uint32_t *)(v6 + 8 * v8);
    *(uint32_t *)(result + 4) = *(uint32_t *)(v6 + 8 * v8 + 4);
    *(uint32_t *)result = v18;
    result = v6 + 8 * v8;
  }
  if ( v8 > a2 )
  {
    v12 = (v8 - 1) / 2;
    v20 = v8;
    result = v6 + 8 * v12;
    v13 = a4 < *(float *)result;
    v14 = a4 == *(float *)result;
    if ( a4 == *(float *)result )
      goto LABEL_22;
LABEL_16:
    for ( i = !v13 && !v14; i; i = (*(uint32_t *)(result + 4) & 3) < (a5 & 3) )
    {
      v16 = *(float *)result;
      *(uint32_t *)(v6 + 8 * v20 + 4) = *(uint32_t *)(result + 4);
      *(float *)(v6 + 8 * v20) = v16;
      v17 = (v12 - 1) / 2;
      if ( a2 >= v12 )
        goto LABEL_19;
      v20 = v12;
      v12 = (v12 - 1) / 2;
      result = v6 + 8 * v17;
      v13 = a4 < *(float *)result;
      v14 = a4 == *(float *)result;
      if ( a4 != *(float *)result )
        goto LABEL_16;
LABEL_22:
      ;
    }
    result = v6 + 8 * v20;
  }
LABEL_19:
  *(float *)result = a4;
  *(uint32_t *)(result + 4) = a5;
  return result;
}


