#include "Core/Utils/DecompTypes.h"
#include "glitch_vector_unsigned_int_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::vector_unsigned_int_SAllocator_8578e9::resize  (binary VA: 0xf0fb30)
// Original: std::vector<unsigned int,glitch::core::SAllocator<unsigned int,(glitch::memory::E_MEMORY_HINT)0>>::resize
// ----------------------------------------------------------------------------
void g4_std::vector_unsigned_int_SAllocator_8578e9::resize(std::vector<unsigned int, glitch::core::SAllocator<unsigned int, (glitch::memory::E_MEMORY_HINT)0>> *self, unsigned int a2, unsigned int a3)
{
  unsigned int v3;

  v3 = (*((uint32_t *)self + 1) - *(uint32_t *)self) >> 2;
  if ( a2 > v3 )
  {
    g4_std::vector_unsigned_int_SAllocator_8578e9::M_fill_insert(
      (int *)self,
      *((char **)self + 1),
      a2 - v3,
      &a3);
  }
  else if ( a2 < v3 )
  {
    *((uint32_t *)self + 1) = *(uint32_t *)self + 4 * a2;
  }
}


