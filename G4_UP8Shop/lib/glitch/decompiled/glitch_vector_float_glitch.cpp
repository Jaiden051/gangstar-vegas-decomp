#include "Core/Utils/DecompTypes.h"
#include "glitch_vector_float_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::vector_float_SAllocator_float_m_63bc30::Destroy  (binary VA: 0xd35460)
// Original: std::vector<float,glitch::core::SAllocator<float,(glitch::memory::E_MEMORY_HINT)0>>::~vector
// ----------------------------------------------------------------------------
void g4_std::vector_float_SAllocator_float_m_63bc30::Destroy(std::vector<float, glitch::core::SAllocator<float, (glitch::memory::E_MEMORY_HINT)0>> *self)
{
  if ( *(uint32_t *)self != 0 )
    gll_operator_delete_arr(*(uint32_t *)self);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_float_SAllocator_float_m_63bc30::push_back  (binary VA: 0xf06ff0)
// Original: std::vector<float,glitch::core::SAllocator<float,(glitch::memory::E_MEMORY_HINT)0>>::push_back
// ----------------------------------------------------------------------------
uint32_t * g4_std::vector_float_SAllocator_float_m_63bc30::push_back(std::vector<float, glitch::core::SAllocator<float, (glitch::memory::E_MEMORY_HINT)0>> *self, const float *a2)
{
  float *v2;
  int v3;
  uint32_t *result;
  unsigned int v5;
  size_t v6;
  uint32_t *v7;
  size_t v8;
  float *v9;
  float *v10;
  float *v11;
  uint32_t *v12;
  size_t v13;
  int v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  float *v18;

  v2 = *((float **)self + 1);
  if ( v2 == *((float **)self + 2) )
  {
    v5 = ((int)(uintptr_t)(v2) - *(uint32_t *)self) >> 2;
    v6 = 4;
    if ( v5 != 0 )
    {
      v6 = 0xFFFFFFFC;
      if ( v5 <= 2 * v5 && 2 * v5 <= 0x3FFFFFFF )
        v6 = 8 * v5;
    }
    v13 = v6;
    v14 = ((int)(uintptr_t)(v2) - *(uint32_t *)self) >> 2;
    v7 = (uint32_t *)sub_4EBDC0(v6);
    v17 = v7;
    v8 = v13;
    if ( &v7[v14] != nullptr )
      v7[v14] = *(uint32_t *)a2;
    v9 = *(float **)self;
    v15 = *(uint32_t *)self;
    if ( v2 != *(float **)self )
    {
      do
      {
        if ( v7 != nullptr )
          *v7 = *(uint32_t *)v9;
        ++v9;
        ++v7;
      }
      while ( v2 != v9 );
      v7 = &v17[(((unsigned int)(uintptr_t)(v2) - v15 - 4) >> 2) + 1];
    }
    v16 = v7 + 1;
    v18 = *((float **)self + 1);
    if ( v2 != v18 )
    {
      v10 = *((float **)self + 1);
      v11 = v2;
      v12 = v7 + 1;
      do
      {
        if ( v12 != nullptr )
          *v12 = *(uint32_t *)v11;
        ++v11;
        ++v12;
      }
      while ( v10 != v11 );
      v16 += ((unsigned int)((char *)v18 - (char *)(v2 + 1)) >> 2) + 1;
    }
    if ( *(uint32_t *)self != 0 )
    {
      gll_operator_delete_arr(*(uint32_t *)self);
      v8 = v13;
    }
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v17);
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v16);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)((char *)v17 + v8);
    return v17;
  }
  else
  {
    v3 = 0;
    if ( v2 != nullptr )
    {
      *v2 = *a2;
      v3 = *((uint32_t *)self + 1);
    }
    result = (uint32_t *)(v3 + 4);
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_float_SAllocator_float_m_63bc30::opAssign  (binary VA: 0xf07290)
// Original: std::vector<float,glitch::core::SAllocator<float,(glitch::memory::E_MEMORY_HINT)0>>::operator=
// ----------------------------------------------------------------------------
std::vector<float, glitch::core::SAllocator<float, (glitch::memory::E_MEMORY_HINT)0>> * g4_std::vector_float_SAllocator_float_m_63bc30::opAssign(std::vector<float, glitch::core::SAllocator<float, (glitch::memory::E_MEMORY_HINT)0>> *self, const std::vector<float, glitch::core::SAllocator<float, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  uint32_t *v2;
  uint32_t *src;
  unsigned int v4;
  char *v5;
  unsigned int v6;
  uint32_t *v7;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  unsigned int v13;
  int v14;
  uint8_t *dest;

  if ( a2 == self )
    return self;
  dest = *(uint8_t **)self;
  v2 = *((uint32_t **)a2 + 1);
  src = *(uint32_t **)a2;
  v4 = ((int)(uintptr_t)(v2) - *(uint32_t *)a2) >> 2;
  v13 = v4;
  if ( v4 > (*((uint32_t *)self + 2) - *(uint32_t *)self) >> 2 )
  {
    v10 = 0;
    v14 = 0;
    if ( v4 != 0 )
    {
      v14 = 4 * v4;
      v10 = sub_4EBDC0(4 * v4);
    }
    if ( src != v2 )
    {
      v11 = (uint32_t *)v10;
      do
      {
        if ( v11 != nullptr )
          *v11 = *src;
        ++src;
        ++v11;
      }
      while ( v2 != src );
    }
    if ( *(uint32_t *)self != 0 )
    {
      v12 = v10;
      gll_operator_delete_arr(*(uint32_t *)self);
      v10 = v12;
    }
    *(uint32_t *)self = v10;
    v9 = v14 + v10;
    *((uint32_t *)self + 2) = v9;
  }
  else
  {
    v5 = *((char **)self + 1);
    v6 = (v5 - (char *)(dest)) >> 2;
    if ( v13 <= v6 )
    {
      v9 = *(uint32_t *)self;
      if ( v13 != 0 )
      {
        memmove(dest, src, 4 * v13);
        v9 = 4 * v13 + *(uint32_t *)self;
      }
    }
    else
    {
      v7 = &src[v6];
      if ( v6 != 0 )
      {
        memmove(dest, src, 4 * v6);
        v5 = *((char **)self + 1);
        dest = *(uint8_t **)self;
        v2 = *((uint32_t **)a2 + 1);
        v7 = (uint32_t *)(*(uint32_t *)a2 + ((unsigned int)(uintptr_t)(&v5[-*(uint32_t *)self]) & 0xFFFFFFFC));
      }
      if ( v2 != v7 )
      {
        do
        {
          if ( v5 != nullptr )
            *(uint32_t *)v5 = *v7;
          ++v7;
          v5 += 4;
        }
        while ( v2 != v7 );
        *((uint32_t *)self + 1) = *(uint32_t *)self + 4 * v13;
        return self;
      }
      v9 = (int)(uintptr_t)(&dest[4 * v13]);
    }
  }
  *((uint32_t *)self + 1) = v9;
  return self;
}


