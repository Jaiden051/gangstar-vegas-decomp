#include "Core/Utils/DecompTypes.h"
#include "glitch_queue_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::queue_quickhull2d_detail_SEdge_87f23c::Construct  (binary VA: 0xf7a290)
// Original: std::queue<glitch::core::quickhull2d_detail::SEdge *,std::deque<glitch::core::quickhull2d_detail::SEdge *,glitch::core::SAllocator<glitch::core::quickhull2d_detail::SEdge *,(glitch::memory::E_MEMORY_HINT)0>>>::queue
// ----------------------------------------------------------------------------
uint32_t * g4_std::queue_quickhull2d_detail_SEdge_87f23c::Construct(std::queue<glitch::core::quickhull2d_detail::SEdge *, std::deque<glitch::core::quickhull2d_detail::SEdge *, glitch::core::SAllocator<glitch::core::quickhull2d_detail::SEdge *, (glitch::memory::E_MEMORY_HINT)0>>> *self, const std::deque<glitch::core::quickhull2d_detail::SEdge *, glitch::core::SAllocator<glitch::core::quickhull2d_detail::SEdge *, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  uint32_t **v8;
  unsigned int v9;
  uint32_t *v10;
  uint32_t *result;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t **v17;
  int v18;
  int v19;
  uint32_t **v20;
  unsigned int v21;

  v2 = ((*((uint32_t *)a2 + 6) - *((uint32_t *)a2 + 7)) >> 2)
     + ((((*((uint32_t *)a2 + 9) - *((uint32_t *)a2 + 5)) >> 2) - 1) << 7);
  v3 = *((uint32_t *)a2 + 4) - *((uint32_t *)a2 + 2);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 2) = 0;
  v21 = v2 + (v3 >> 2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  v4 = (v21 >> 7) + 1;
  v5 = (v21 >> 7) + 3;
  if ( v5 < 8 )
    v5 = 8;
  *((uint32_t *)self + 1) = v5;
  v6 = sub_4EBDC0(4 * v5);
  v7 = *((uint32_t *)self + 1);
  *(uint32_t *)self = v6;
  v8 = (uint32_t **)(v6 + 4 * ((unsigned int)(v7 - v4) >> 1));
  v20 = v8;
  v9 = (unsigned int)(uintptr_t)(&v8[v4]);
  if ( (unsigned int)(uintptr_t)(v8) < v9 )
  {
    v10 = (uint32_t *)(v8);
    do
      *v10++ = sub_4EBDC0(0x200u);
    while ( v9 > (unsigned int)(uintptr_t)(v10) );
  }
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v20);
  result = *v20;
  *((uint32_t *)self + 9) = v9 - 4;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(result);
  v12 = result + 128;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(result + 128);
  v13 = *(uint32_t *)(v9 - 4);
  *((uint32_t *)self + 7) = v13;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 8) = v13 + 512;
  *((uint32_t *)self + 6) = v13 + 4 * (v21 & 0x7F);
  v14 = *((uint32_t **)a2 + 6);
  v15 = *((uint32_t **)a2 + 2);
  v16 = *((uint32_t **)a2 + 4);
  v19 = *((uint32_t *)a2 + 5);
  while ( v14 != v15 )
  {
    while ( 1 )
    {
      if ( result != nullptr )
        *result = *v15;
      if ( ++v15 == v16 )
      {
        v18 = v19;
        v19 += 4;
        v15 = *(uint32_t **)(v18 + 4);
        v16 = v15 + 128;
      }
      if ( ++result != v12 )
        break;
      v17 = v20++;
      result = v17[1];
      v12 = result + 128;
      if ( v14 == v15 )
        return result;
    }
  }
  return result;
}


