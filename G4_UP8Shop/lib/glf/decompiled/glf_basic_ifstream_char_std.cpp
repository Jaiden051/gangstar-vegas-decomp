#include "Core/Utils/DecompTypes.h"
#include "glf_basic_ifstream_char_std.h"

// ----------------------------------------------------------------------------
// Function: glf::basic_ifstream_char_char_traits_char_dc15f6::Destroy  (binary VA: 0xcae1f0)
// Original: glf::basic_ifstream<char,std::char_traits<char>>::~basic_ifstream
// ----------------------------------------------------------------------------
void glf::basic_ifstream_char_char_traits_char_dc15f6::Destroy(glf::basic_ifstream<char, std::char_traits<char>> *self)
{
  volatile int32_t *v1;
  int v2;
  volatile int32_t *v3;
  int v4;

  *((uint32_t *)self + 76) = ((uint32_t)(uintptr_t)&off_206DF20);
  v1 = *((volatile int32_t **)self + 75);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DF0C);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_206D728);
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
  v3 = *((volatile int32_t **)self + 74);
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
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 36);
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206DF4C);
  *((uint32_t *)self + 76) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((char *)self + 304);
}

// ----------------------------------------------------------------------------
// Function: glf::basic_ifstream_char_char_traits_char_dc15f6::Destroy_eacae5a0  (binary VA: 0xcae5a0)
// Original: glf::basic_ifstream<char,std::char_traits<char>>::~basic_ifstream
// ----------------------------------------------------------------------------
void glf::basic_ifstream_char_char_traits_char_dc15f6::Destroy_eacae5a0(glf::basic_ifstream<char, std::char_traits<char>> *self)
{
  volatile int32_t *v1;
  int v2;
  volatile int32_t *v3;
  int v4;

  *((uint32_t *)self + 76) = ((uint32_t)(uintptr_t)&off_206DF20);
  v1 = *((volatile int32_t **)self + 75);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DF0C);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_206D728);
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
  v3 = *((volatile int32_t **)self + 74);
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
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 36);
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206DF4C);
  *((uint32_t *)self + 76) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((char *)self + 304);
  opDelete(self);
}


