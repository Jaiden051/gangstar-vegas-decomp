#include "Core/Utils/DecompTypes.h"
#include "glf_basic_filebuf_char_std.h"

// ----------------------------------------------------------------------------
// Function: glf::basic_filebuf_char_char_traits_char_ad9e6b::setbuf  (binary VA: 0xc7b040)
// Original: glf::basic_filebuf<char,std::char_traits<char>>::setbuf
// ----------------------------------------------------------------------------
glf::basic_filebuf<char, std::char_traits<char>> * glf::basic_filebuf_char_char_traits_char_ad9e6b::setbuf(glf::basic_filebuf<char, std::char_traits<char>> *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::basic_filebuf_char_char_traits_char_ad9e6b::sync  (binary VA: 0xc7b050)
// Original: glf::basic_filebuf<char,std::char_traits<char>>::sync
// ----------------------------------------------------------------------------
int glf::basic_filebuf_char_char_traits_char_ad9e6b::sync()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::basic_filebuf_char_char_traits_char_ad9e6b::showmanyc  (binary VA: 0xc7b060)
// Original: glf::basic_filebuf<char,std::char_traits<char>>::showmanyc
// ----------------------------------------------------------------------------
int glf::basic_filebuf_char_char_traits_char_ad9e6b::showmanyc()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::basic_filebuf_char_char_traits_char_ad9e6b::xsgetn  (binary VA: 0xc7b070)
// Original: glf::basic_filebuf<char,std::char_traits<char>>::xsgetn
// ----------------------------------------------------------------------------
int glf::basic_filebuf_char_char_traits_char_ad9e6b::xsgetn(glf::basic_filebuf<char, std::char_traits<char>> *self, char *a2, int a3)
{
  return (*(int (**)(uint32_t, char *, int, int))(**((uint32_t **)self + 73) + 36))(
           *((uint32_t *)self + 73),
           a2,
           a3,
           a3 >> 31);
}

// ----------------------------------------------------------------------------
// Function: glf::basic_filebuf_char_char_traits_char_ad9e6b::underflow  (binary VA: 0xc7b0b0)
// Original: glf::basic_filebuf<char,std::char_traits<char>>::underflow
// ----------------------------------------------------------------------------
int glf::basic_filebuf_char_char_traits_char_ad9e6b::underflow(glf::basic_filebuf<char, std::char_traits<char>> *self)
{
  char *v1;
  int64_t v2; // rax
  unsigned int v3;
  int result;

  v1 = (char *)self + 32;
  v2 = ((int64_t (*)(uint32_t, char *, int, uint32_t))*(uint32_t *)(**((uint32_t **)self + 73) + 36))(
         *((uint32_t *)self + 73),
         (char *)self + 32,
         256,
         0);
  v3 = v2;
  result = -1;
  if ( __PAIR64__(HIDWORD(v2), v3) != 0 )
  {
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v1);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + v3 + 32);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v1);
    return *((char *)self + 32);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::basic_filebuf_char_char_traits_char_ad9e6b::uflow  (binary VA: 0xc7b110)
// Original: glf::basic_filebuf<char,std::char_traits<char>>::uflow
// ----------------------------------------------------------------------------
int glf::basic_filebuf_char_char_traits_char_ad9e6b::uflow()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::basic_filebuf_char_char_traits_char_ad9e6b::pbackfail  (binary VA: 0xc7b120)
// Original: glf::basic_filebuf<char,std::char_traits<char>>::pbackfail
// ----------------------------------------------------------------------------
int glf::basic_filebuf_char_char_traits_char_ad9e6b::pbackfail()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: glf::basic_filebuf_char_char_traits_char_ad9e6b::xsputn  (binary VA: 0xc7b130)
// Original: glf::basic_filebuf<char,std::char_traits<char>>::xsputn
// ----------------------------------------------------------------------------
int glf::basic_filebuf_char_char_traits_char_ad9e6b::xsputn(glf::basic_filebuf<char, std::char_traits<char>> *self, const char *a2, int a3)
{
  return (*(int (**)(uint32_t, const char *, int, int))(**((uint32_t **)self + 73) + 40))(
           *((uint32_t *)self + 73),
           a2,
           a3,
           a3 >> 31);
}

// ----------------------------------------------------------------------------
// Function: glf::basic_filebuf_char_char_traits_char_ad9e6b::overflow  (binary VA: 0xc7b170)
// Original: glf::basic_filebuf<char,std::char_traits<char>>::overflow
// ----------------------------------------------------------------------------
int glf::basic_filebuf_char_char_traits_char_ad9e6b::overflow()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: glf::basic_filebuf_char_char_traits_char_ad9e6b::seekoff  (binary VA: 0xc7b370)
// Original: glf::basic_filebuf<char,std::char_traits<char>>::seekoff
// ----------------------------------------------------------------------------
int glf::basic_filebuf_char_char_traits_char_ad9e6b::seekoff(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  void (*v8)(int, int, int, int);

  v5 = *(uint32_t *)(a2 + 292);
  v8 = *(void (**)(int, int, int, int))(*(uint32_t *)v5 + 20);
  v6 = glf::io2::Device::ConvertToSeekDir(a5);
  v8(v5, a3, a4, v6);
  *(uint64_t *)a1 = ((int64_t (*)(uint32_t))*(uint32_t *)(**(uint32_t **)(a2 + 292) + 24))(*(uint32_t *)(a2 + 292));
  *(uint32_t *)(a1 + 8) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::basic_filebuf_char_char_traits_char_ad9e6b::seekpos  (binary VA: 0xc7b420)
// Original: glf::basic_filebuf<char,std::char_traits<char>>::seekpos
// ----------------------------------------------------------------------------
uint32_t * glf::basic_filebuf_char_char_traits_char_ad9e6b::seekpos(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  uint8_t (*v6)(int, int, int, int);
  int v7;

  v5 = *(uint32_t *)(a2 + 292);
  v6 = *(uint8_t (**)(int, int, int, int))(*(uint32_t *)v5 + 20);
  v7 = glf::io2::Device::ConvertToSeekDir(0);
  if ( v6(v5, a3, a4, v7) != 0 )
  {
    *a1 = a3;
    a1[1] = a4;
    a1[2] = a5;
  }
  else
  {
    *a1 = -1;
    a1[1] = -1;
    a1[2] = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::basic_filebuf_char_char_traits_char_ad9e6b::Destroy  (binary VA: 0xc7b520)
// Original: glf::basic_filebuf<char,std::char_traits<char>>::~basic_filebuf
// ----------------------------------------------------------------------------
void glf::basic_filebuf_char_char_traits_char_ad9e6b::Destroy(glf::basic_filebuf<char, std::char_traits<char>> *self)
{
  volatile int32_t *v1;
  int v2;
  volatile int32_t *v3;
  int v4;

  v1 = *((volatile int32_t **)self + 73);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D728);
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
  v3 = *((volatile int32_t **)self + 72);
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
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 28);
}

// ----------------------------------------------------------------------------
// Function: glf::basic_filebuf_char_char_traits_char_ad9e6b::Destroy_eac7b770  (binary VA: 0xc7b770)
// Original: glf::basic_filebuf<char,std::char_traits<char>>::~basic_filebuf
// ----------------------------------------------------------------------------
void glf::basic_filebuf_char_char_traits_char_ad9e6b::Destroy_eac7b770(glf::basic_filebuf<char, std::char_traits<char>> *self)
{
  volatile int32_t *v1;
  int v2;
  volatile int32_t *v3;
  int v4;

  v1 = *((volatile int32_t **)self + 73);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D728);
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
  v3 = *((volatile int32_t **)self + 72);
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
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((char *)self + 28);
  opDelete(self);
}


