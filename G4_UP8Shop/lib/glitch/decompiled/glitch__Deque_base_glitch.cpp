#include "Core/Utils/DecompTypes.h"
#include "glitch__Deque_base_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::Deque_base_quickhull2d_detail_SEdge_11b627::M_initialize_map  (binary VA: 0xf7efa0)
// Original: std::_Deque_base<glitch::core::quickhull2d_detail::SEdge *,glitch::core::SAllocator<glitch::core::quickhull2d_detail::SEdge *,(glitch::memory::E_MEMORY_HINT)0>>::_M_initialize_map
// ----------------------------------------------------------------------------
int g4_std::Deque_base_quickhull2d_detail_SEdge_11b627::M_initialize_map(std::_Deque_base<glitch::core::quickhull2d_detail::SEdge *, glitch::core::SAllocator<glitch::core::quickhull2d_detail::SEdge *, (glitch::memory::E_MEMORY_HINT)0>> *self, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  int v5;
  int *v6;
  unsigned int v7;
  int *v8;
  int v9;
  int v10;
  int result;
  int *v12;

  v2 = (a2 >> 7) + 1;
  v3 = (a2 >> 7) + 3;
  if ( v3 < 8 )
    v3 = 8;
  *((uint32_t *)self + 1) = v3;
  v4 = sub_4EBDC0(4 * v3);
  v5 = *((uint32_t *)self + 1);
  *(uint32_t *)self = v4;
  v6 = (int *)(v4 + 4 * ((v5 - v2) >> 1));
  v12 = v6;
  v7 = (unsigned int)(uintptr_t)(&v6[v2]);
  if ( (unsigned int)(uintptr_t)(v6) < v7 )
  {
    v8 = v6;
    do
      *v8++ = sub_4EBDC0(0x200u);
    while ( v7 > (unsigned int)(uintptr_t)(v8) );
  }
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v12);
  v9 = *v12;
  *((uint32_t *)self + 3) = *v12;
  *((uint32_t *)self + 4) = v9 + 512;
  *((uint32_t *)self + 9) = v7 - 4;
  v10 = *(uint32_t *)(v7 - 4);
  *((uint32_t *)self + 2) = v9;
  *((uint32_t *)self + 7) = v10;
  *((uint32_t *)self + 8) = v10 + 512;
  result = v10 + 4 * (a2 & 0x7F);
  *((uint32_t *)self + 6) = result;
  return result;
}


