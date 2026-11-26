#include "Core/Utils/DecompTypes.h"
#include "glitch_vector_unsigned_char_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::vector_unsigned_char_SAllocator_a27ac8::M_check_len  (binary VA: 0xf10da0)
// Original: std::vector<unsigned char,glitch::core::SAllocator<unsigned char,(glitch::memory::E_MEMORY_HINT)0>>::_M_check_len
// ----------------------------------------------------------------------------
int g4_std::vector_unsigned_char_SAllocator_a27ac8::M_check_len(std::vector<unsigned char, glitch::core::SAllocator<unsigned char, (glitch::memory::E_MEMORY_HINT)0>> *self, unsigned int a2, char *a3)
{
  unsigned int v3;
  int v4;
  int result;
  bool v6;
  unsigned int v7;

  v3 = *((uint32_t *)self + 1) - *(uint32_t *)self;
  if ( ~v3 < a2 )
    sub_1900180(a3);
  v4 = a2;
  result = -1;
  if ( v3 >= a2 )
    v4 = *((uint32_t *)self + 1) - *(uint32_t *)self;
  v6 = __CFADD__(v4, v3);
  v7 = v4 + v3;
  if ( !v6 )
    return v7;
  return result;
}


