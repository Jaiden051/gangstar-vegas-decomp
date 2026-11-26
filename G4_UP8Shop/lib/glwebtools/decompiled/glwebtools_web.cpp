#include "Core/Utils/DecompTypes.h"
#include "glwebtools_web.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::IsOperationSuccess  (binary VA: 0x13d9ca0)
// Original: glwebtools::IsOperationSuccess
// ----------------------------------------------------------------------------
bool glwebtools::IsOperationSuccess(glwebtools::Self *self)
{
  return self == nullptr;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::opShl  (binary VA: 0x13e43b0)
// Original: glwebtools::operator<<
// ----------------------------------------------------------------------------
int glwebtools::opShl(glwebtools::JsonWriter::Self *a1, char *a2)
{
  return glwebtools::JsonWriter::write(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::md5_init  (binary VA: 0x13e58e0)
// Original: glwebtools::md5_init
// ----------------------------------------------------------------------------
uint32_t * glwebtools::md5_init(uint32_t *a1)
{
  a1[1] = 0;
  *a1 = 0;
  a1[2] = 1732584193;
  a1[3] = -271733879;
  a1[4] = -1732584194;
  a1[5] = 271733878;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::md5_append  (binary VA: 0x13e5910)
// Original: glwebtools::md5_append
// ----------------------------------------------------------------------------
unsigned int glwebtools::md5_append(int a1, char *src, signed int a3)
{
  unsigned int result;
  size_t v4;
  int v5;
  unsigned int v6;
  int v7;
  size_t n;
  int v9;
  uint8_t *v10;
  uint8_t *v11;
  unsigned int v12;
  int v13;
  int v14;
  char *v15;

  result = *(uint32_t *)a1;
  if ( a3 <= 0 )
    return result;
  v4 = 8 * a3 + result;
  *(uint32_t *)a1 = v4;
  v5 = *(uint32_t *)(a1 + 4) + (a3 >> 29);
  *(uint32_t *)(a1 + 4) = v5;
  if ( 8 * a3 > v4 )
    *(uint32_t *)(a1 + 4) = v5 + 1;
  v6 = (result >> 3) & 0x3F;
  v14 = a3;
  v15 = src;
  if ( v6 == 0 )
    goto LABEL_10;
  v7 = v6 + a3;
  n = a3;
  if ( (int)(v6 + a3) > 64 )
  {
    v7 = 64;
    n = 64 - v6;
  }
  v13 = v7;
  result = (unsigned int)(uintptr_t)(memcpy((void *)(a1 + v6 + 24), src, n));
  if ( v13 > 63 )
  {
    v15 = &src[n];
    v14 = a3 - n;
    sub_13E5140((uint32_t *)a1, (uint8_t *)(a1 + 24));
LABEL_10:
    if ( v14 > 63 )
    {
      v9 = v14;
      v10 = (uint8_t *)v15;
      do
      {
        v11 = v10;
        v9 -= 64;
        v10 += 64;
        sub_13E5140((uint32_t *)a1, v11);
      }
      while ( v9 > 63 );
      v12 = (unsigned int)(v14 - 64) >> 6;
      v14 = v14 - 64 - (v12 << 6);
      v15 += 64 * v12 + 64;
    }
    result = v14;
    if ( v14 != 0 )
      return (unsigned int)(uintptr_t)(memcpy((void *)(a1 + 24), v15, v14));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::md5_finish  (binary VA: 0x13e5a40)
// Original: glwebtools::md5_finish
// ----------------------------------------------------------------------------
int glwebtools::md5_finish(uint32_t *a1, int a2)
{
  int i;
  int result;
  char v4[36];

  for ( i = 0; i != 8; ++i )
    v4[i] = a1[i >> 2] >> (8 * (i & 3));
  glwebtools::md5_append((int)(uintptr_t)(a1), ((char *)(&byte_1D0F9A0)), ((55 - (uint8_t)(*a1 >> 3)) & 0x3F) + 1);
  glwebtools::md5_append((int)(uintptr_t)(a1), v4, 8);
  for ( result = 0; result != 16; ++result )
    *(uint8_t *)(a2 + result) = a1[(result >> 2) + 2] >> (8 * (result & 3));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GetAppInfo  (binary VA: 0x13e6310)
// Original: glwebtools::GetAppInfo
// ----------------------------------------------------------------------------
int glwebtools::GetAppInfo(int a1, int a2, int a3, int a4, int a5)
{
  g4_std_compat::string_assign(a1, "AndroidApp", 0xAu);
  g4_std_compat::string_assign(a2, "0.0", 3u);
  g4_std_compat::string_assign(a3, "AndroidOS", 9u);
  g4_std_compat::string_assign(a4, "0.0", 3u);
  g4_std_compat::string_assign(a5, "AndroidDevice", 0xDu);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::SHA256_Init  (binary VA: 0x13e8d90)
// Original: glwebtools::SHA256_Init
// ----------------------------------------------------------------------------
int glwebtools::SHA256_Init(glwebtools::Self *self)
{
  glwebtools::internal::SHA256_Init(*(uint32_t *)self);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::SHA256_Update  (binary VA: 0x13e8dc0)
// Original: glwebtools::SHA256_Update
// ----------------------------------------------------------------------------
int glwebtools::SHA256_Update(int *a1, char *a2, size_t a3)
{
  glwebtools::internal::SHA256_Update(*a1, a2, a3);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::SHA256_Final  (binary VA: 0x13e8e00)
// Original: glwebtools::SHA256_Final
// ----------------------------------------------------------------------------
int glwebtools::SHA256_Final(glwebtools::Self *self, uint8_t *a2)
{
  glwebtools::internal::SHA256_Final((int)(uintptr_t)(self), *(uint32_t *)a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Find  (binary VA: 0x1403ad0)
// Original: glwebtools::Find
// ----------------------------------------------------------------------------
int glwebtools::Find(char **a1, char **a2, int a3, uint8_t *a4)
{
  char **v4;
  int result;
  char *v6;

  v4 = a1;
  if ( a1 == nullptr || a2 == nullptr )
    return -2147483646;
  *a4 = 0;
  result = 0;
  if ( a1 != a2 )
  {
    v6 = *a1;
    result = -2147483646;
    if ( *a1 != nullptr )
    {
      while ( 1 )
      {
        if ( g4_std::string::compare(a3, v6) == 0 )
        {
          *a4 = 1;
          return 0;
        }
        if ( a2 == ++v4 )
          break;
        v6 = *v4;
        if ( *v4 == nullptr )
          return -2147483646;
      }
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::MemBar  (binary VA: 0x1405b80)
// Original: glwebtools::MemBar
// ----------------------------------------------------------------------------
void glwebtools::MemBar()
{
  _mm_mfence();
}

// ----------------------------------------------------------------------------
// Function: glwebtools::roundAllocToPowerOfTwo  (binary VA: 0x1405c40)
// Original: glwebtools::roundAllocToPowerOfTwo
// ----------------------------------------------------------------------------
unsigned int glwebtools::roundAllocToPowerOfTwo(glwebtools::Self *self)
{
  int v1;
  char v3; // si
  unsigned int v4;
  unsigned int result;

  v1 = 0;
  v3 = 0;
  v4 = 0;
  do
  {
    if ( _bittest((const int *)&self, (uint8_t)v1) )
    {
      ++v4;
      v3 = v1;
    }
    ++v1;
  }
  while ( v1 != 32 );
  result = (((v3 + (v4 > 1)) & 0x20) == 0) << (v3 + (v4 > 1));
  if ( result < 4 )
    return 4;
  return result;
}


