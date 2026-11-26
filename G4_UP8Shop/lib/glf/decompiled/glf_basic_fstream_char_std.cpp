#include "Core/Utils/DecompTypes.h"
#include "glf_basic_fstream_char_std.h"

// ----------------------------------------------------------------------------
// Function: glf::basic_fstream_char_char_traits_char_c0ee4b::Destroy  (binary VA: 0xc7b630)
// Original: glf::basic_fstream<char,std::char_traits<char>>::~basic_fstream
// ----------------------------------------------------------------------------
void glf::basic_fstream_char_char_traits_char_c0ee4b::Destroy(glf::basic_fstream<char, std::char_traits<char>> *self)
{
  volatile int32_t *v1;
  int v2;
  volatile int32_t *v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D6EC);
  v1 = *((volatile int32_t **)self + 76);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_206D700);
  *((uint32_t *)self + 77) = ((uint32_t)(uintptr_t)&off_206D714);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_206D728);
  if ( v1 != nullptr )
  {
    if ( __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v1, 8);
      G4_VCALL<void>(v1, 16);
    }
    else
    {
      v2 = *((uint32_t *)v1 + 1);
      _mm_mfence();
      if ( v2 == 1 )
        G4_VCALL<void>(v1, 12);
    }
  }
  v3 = *((volatile int32_t **)self + 75);
  if ( v3 != nullptr )
  {
    if ( __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v3, 8);
      G4_VCALL<void>(v3, 16);
    }
    else
    {
      v4 = *((uint32_t *)v3 + 1);
      _mm_mfence();
      if ( v4 == 1 )
        G4_VCALL<void>(v3, 12);
    }
  }
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 40);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_206D80C);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206D7CC);
  *((uint32_t *)self + 77) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((char *)self + 308);
}

// ----------------------------------------------------------------------------
// Function: glf::basic_fstream_char_char_traits_char_c0ee4b::Destroy_eac7b980  (binary VA: 0xc7b980)
// Original: glf::basic_fstream<char,std::char_traits<char>>::~basic_fstream
// ----------------------------------------------------------------------------
void glf::basic_fstream_char_char_traits_char_c0ee4b::Destroy_eac7b980(glf::basic_fstream<char, std::char_traits<char>> *self)
{
  volatile int32_t *v1;
  int v2;
  volatile int32_t *v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D6EC);
  v1 = *((volatile int32_t **)self + 76);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_206D700);
  *((uint32_t *)self + 77) = ((uint32_t)(uintptr_t)&off_206D714);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_206D728);
  if ( v1 != nullptr )
  {
    if ( __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v1, 8);
      G4_VCALL<void>(v1, 16);
    }
    else
    {
      v2 = *((uint32_t *)v1 + 1);
      _mm_mfence();
      if ( v2 == 1 )
        G4_VCALL<void>(v1, 12);
    }
  }
  v3 = *((volatile int32_t **)self + 75);
  if ( v3 != nullptr )
  {
    if ( __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v3, 8);
      G4_VCALL<void>(v3, 16);
    }
    else
    {
      v4 = *((uint32_t *)v3 + 1);
      _mm_mfence();
      if ( v4 == 1 )
        G4_VCALL<void>(v3, 12);
    }
  }
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 40);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_206D80C);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206D7CC);
  *((uint32_t *)self + 77) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((char *)self + 308);
  opDelete(self);
}


