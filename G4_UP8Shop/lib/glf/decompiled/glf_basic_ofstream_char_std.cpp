#include "Core/Utils/DecompTypes.h"
#include "glf_basic_ofstream_char_std.h"

// ----------------------------------------------------------------------------
// Function: glf::basic_ofstream_char_char_traits_char_145cdd::Destroy  (binary VA: 0xcae330)
// Original: glf::basic_ofstream<char,std::char_traits<char>>::~basic_ofstream
// ----------------------------------------------------------------------------
void glf::basic_ofstream_char_char_traits_char_145cdd::Destroy(glf::basic_ofstream<char, std::char_traits<char>> *self)
{
  volatile int32_t *v1;
  int v2;
  volatile int32_t *v3;
  int v4;

  *((uint32_t *)self + 75) = ((uint32_t)(uintptr_t)&off_206DEA0);
  v1 = *((volatile int32_t **)self + 74);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DE8C);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_206D728);
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
  v3 = *((volatile int32_t **)self + 73);
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
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 32);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206DECC);
  *((uint32_t *)self + 75) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((char *)self + 300);
}

// ----------------------------------------------------------------------------
// Function: glf::basic_ofstream_char_char_traits_char_145cdd::Destroy_eacae460  (binary VA: 0xcae460)
// Original: glf::basic_ofstream<char,std::char_traits<char>>::~basic_ofstream
// ----------------------------------------------------------------------------
void glf::basic_ofstream_char_char_traits_char_145cdd::Destroy_eacae460(glf::basic_ofstream<char, std::char_traits<char>> *self)
{
  volatile int32_t *v1;
  int v2;
  volatile int32_t *v3;
  int v4;

  *((uint32_t *)self + 75) = ((uint32_t)(uintptr_t)&off_206DEA0);
  v1 = *((volatile int32_t **)self + 74);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DE8C);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_206D728);
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
  v3 = *((volatile int32_t **)self + 73);
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
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 32);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206DECC);
  *((uint32_t *)self + 75) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((char *)self + 300);
  opDelete(self);
}


