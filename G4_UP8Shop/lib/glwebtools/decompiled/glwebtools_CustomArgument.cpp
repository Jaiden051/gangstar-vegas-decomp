#include "Core/Utils/DecompTypes.h"
#include "glwebtools_CustomArgument.h"

// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_CustomArgument.cpp
// Library: glwebtools | Module: glwebtools_CustomArgument
// Binary Address Span: 0x13d8670 .. 0x13d98f0 (36 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13d8670 (size: 34 bytes)
// Symbol:    _ZN10glwebtools14CustomArgumentC2Ev
// Demangled: glwebtools::CustomArgument::CustomArgument(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools14CustomArgumentC1Ev'
struct glwebtools::CustomArgument::Self *glwebtools::CustomArgument::Construct(glwebtools::CustomArgument::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::Construct  (binary VA: 0x13d86a0)
// Original: glwebtools::CustomArgument::CustomArgument
// ----------------------------------------------------------------------------
glwebtools::CustomArgument::Self * glwebtools::CustomArgument::Construct(glwebtools::CustomArgument::Self *self, const glwebtools::CustomArgument::Self *a2)
{
  glwebtools::CustomArgument::Self *result;

  g4_std::string::construct_copy(self, a2);
  result = *((glwebtools::CustomArgument::Self **)a2 + 1);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::opAssign  (binary VA: 0x13d86f0)
// Original: glwebtools::CustomArgument::operator=
// ----------------------------------------------------------------------------
glwebtools::CustomArgument::Self * glwebtools::CustomArgument::opAssign(glwebtools::CustomArgument::Self *self, const glwebtools::CustomArgument::Self *a2)
{
  g4_std::string::assign_str(self, a2);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::Construct  (binary VA: 0x13d8740)
// Original: glwebtools::CustomArgument::CustomArgument
// ----------------------------------------------------------------------------
int glwebtools::CustomArgument::Construct(int a1, int a2)
{
  int result;

  result = (int)(uintptr_t)(g4_std::string::construct_copy(a1, a2));
  *(uint32_t *)(a1 + 4) = 6;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::Construct  (binary VA: 0x13d8780)
// Original: glwebtools::CustomArgument::CustomArgument
// ----------------------------------------------------------------------------
glwebtools::CustomArgument::Self * glwebtools::CustomArgument::Construct(glwebtools::CustomArgument::Self *self, char *a2)
{
  char *v2;
  glwebtools::CustomArgument::Self *result;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v2 = (char *)&unk_1B15112;
  if ( a2 != nullptr )
    v2 = a2;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), v2, (int)(uintptr_t)(&v4));
  result = a2 != nullptr ? (glwebtools::CustomArgument::Self *)&loc_6 : nullptr;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::Construct  (binary VA: 0x13d87e0)
// Original: glwebtools::CustomArgument::CustomArgument
// ----------------------------------------------------------------------------
glwebtools::CustomArgument::Self * glwebtools::CustomArgument::Construct(glwebtools::CustomArgument::Self *self, const glwebtools::JSONValue::Self *a2)
{
  int v2;
  glwebtools::CustomArgument::Self *result;

  v2 = (int)(uintptr_t)(glwebtools::JSONValue::op_std::string_const(a2));
  result = (glwebtools::CustomArgument::Self *)g4_std::string::construct_copy(self, v2);
  *((uint32_t *)self + 1) = 7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::opEq  (binary VA: 0x13d8830)
// Original: glwebtools::CustomArgument::operator==
// ----------------------------------------------------------------------------
bool glwebtools::CustomArgument::opEq(const void **self, const void **a2)
{
  size_t n;
  bool result;

  n = *((uint32_t *)*self - 3);
  result = false;
  if ( n == *((uint32_t *)*a2 - 3) )
    return memcmp(*self, *a2, n) == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::ToString  (binary VA: 0x13d88a0)
// Original: glwebtools::CustomArgument::ToString
// ----------------------------------------------------------------------------
glwebtools::CustomArgument::Self * glwebtools::CustomArgument::ToString(glwebtools::CustomArgument::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::ToInt  (binary VA: 0x13d88b0)
// Original: glwebtools::CustomArgument::ToInt
// ----------------------------------------------------------------------------
int glwebtools::CustomArgument::ToInt(void **self)
{
  uint32_t v2[4];

  sub_13D79F0((int)(uintptr_t)(v2), self);
  return v2[0];
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::ToUInt  (binary VA: 0x13d88d0)
// Original: glwebtools::CustomArgument::ToUInt
// ----------------------------------------------------------------------------
int glwebtools::CustomArgument::ToUInt(void **self)
{
  uint32_t v2[4];

  sub_13D76D0((int)(uintptr_t)(v2), self);
  return v2[0];
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::ToFloat  (binary VA: 0x13d88f0)
// Original: glwebtools::CustomArgument::ToFloat
// ----------------------------------------------------------------------------
long double glwebtools::CustomArgument::ToFloat(void **self)
{
  float v2[4];

  sub_13D8350((int)(uintptr_t)(v2), self);
  return v2[0];
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::ToDouble  (binary VA: 0x13d8910)
// Original: glwebtools::CustomArgument::ToDouble
// ----------------------------------------------------------------------------
long double glwebtools::CustomArgument::ToDouble(void **self)
{
  double v2[2];

  sub_13D8030((int)(uintptr_t)(v2), self);
  return v2[0];
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::ToBool  (binary VA: 0x13d8930)
// Original: glwebtools::CustomArgument::ToBool
// ----------------------------------------------------------------------------
int glwebtools::CustomArgument::ToBool(void **self)
{
  uint8_t v2[13];

  sub_13D7D10((int)(uintptr_t)(v2), self);
  return v2[0];
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::IsValid  (binary VA: 0x13d8950)
// Original: glwebtools::CustomArgument::IsValid
// ----------------------------------------------------------------------------
bool glwebtools::CustomArgument::IsValid(glwebtools::CustomArgument::Self *self)
{
  return *((uint32_t *)self + 1) != 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::IsInt  (binary VA: 0x13d8960)
// Original: glwebtools::CustomArgument::IsInt
// ----------------------------------------------------------------------------
bool glwebtools::CustomArgument::IsInt(glwebtools::CustomArgument::Self *self)
{
  return *((uint32_t *)self + 1) == 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::ToInt  (binary VA: 0x13d8970)
// Original: glwebtools::CustomArgument::ToInt
// ----------------------------------------------------------------------------
unsigned int glwebtools::CustomArgument::ToInt(void **self, int *a2)
{
  if ( glwebtools::CustomArgument::IsInt((glwebtools::CustomArgument::Self *)self) )
    return sub_13D79F0((int)(uintptr_t)(a2), self);
  else
    return -2147483646;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::opShr  (binary VA: 0x13d89d0)
// Original: glwebtools::CustomArgument::operator>>
// ----------------------------------------------------------------------------
unsigned int glwebtools::CustomArgument::opShr(void **self, int *a2)
{
  return glwebtools::CustomArgument::ToInt(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::IsUInt  (binary VA: 0x13d8a00)
// Original: glwebtools::CustomArgument::IsUInt
// ----------------------------------------------------------------------------
bool glwebtools::CustomArgument::IsUInt(glwebtools::CustomArgument::Self *self)
{
  return *((uint32_t *)self + 1) == 2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::ToUInt  (binary VA: 0x13d8a10)
// Original: glwebtools::CustomArgument::ToUInt
// ----------------------------------------------------------------------------
unsigned int glwebtools::CustomArgument::ToUInt(void **self, unsigned int *a2)
{
  if ( glwebtools::CustomArgument::IsUInt((glwebtools::CustomArgument::Self *)self) )
    return sub_13D76D0((int)(uintptr_t)(a2), self);
  else
    return -2147483646;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::opShr  (binary VA: 0x13d8a70)
// Original: glwebtools::CustomArgument::operator>>
// ----------------------------------------------------------------------------
unsigned int glwebtools::CustomArgument::opShr(void **self, unsigned int *a2)
{
  return glwebtools::CustomArgument::ToUInt(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::IsFloat  (binary VA: 0x13d8aa0)
// Original: glwebtools::CustomArgument::IsFloat
// ----------------------------------------------------------------------------
bool glwebtools::CustomArgument::IsFloat(glwebtools::CustomArgument::Self *self)
{
  return *((uint32_t *)self + 1) == 3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::IsDouble  (binary VA: 0x13d8ab0)
// Original: glwebtools::CustomArgument::IsDouble
// ----------------------------------------------------------------------------
bool glwebtools::CustomArgument::IsDouble(glwebtools::CustomArgument::Self *self)
{
  return *((uint32_t *)self + 1) == 4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::ToDouble  (binary VA: 0x13d8ac0)
// Original: glwebtools::CustomArgument::ToDouble
// ----------------------------------------------------------------------------
unsigned int glwebtools::CustomArgument::ToDouble(void **self, double *a2)
{
  if ( glwebtools::CustomArgument::IsDouble((glwebtools::CustomArgument::Self *)self) )
    return sub_13D8030((int)(uintptr_t)(a2), self);
  else
    return -2147483646;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::opShr  (binary VA: 0x13d8b20)
// Original: glwebtools::CustomArgument::operator>>
// ----------------------------------------------------------------------------
unsigned int glwebtools::CustomArgument::opShr(void **self, double *a2)
{
  return glwebtools::CustomArgument::ToDouble(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::ToFloat  (binary VA: 0x13d8b50)
// Original: glwebtools::CustomArgument::ToFloat
// ----------------------------------------------------------------------------
unsigned int glwebtools::CustomArgument::ToFloat(void **self, float *a2)
{
  if ( glwebtools::CustomArgument::IsDouble((glwebtools::CustomArgument::Self *)self) )
    return sub_13D8350((int)(uintptr_t)(a2), self);
  else
    return -2147483646;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::opShr  (binary VA: 0x13d8bb0)
// Original: glwebtools::CustomArgument::operator>>
// ----------------------------------------------------------------------------
unsigned int glwebtools::CustomArgument::opShr(void **self, float *a2)
{
  return glwebtools::CustomArgument::ToFloat(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::IsBool  (binary VA: 0x13d8be0)
// Original: glwebtools::CustomArgument::IsBool
// ----------------------------------------------------------------------------
bool glwebtools::CustomArgument::IsBool(glwebtools::CustomArgument::Self *self)
{
  return *((uint32_t *)self + 1) == 5;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::ToBool  (binary VA: 0x13d8bf0)
// Original: glwebtools::CustomArgument::ToBool
// ----------------------------------------------------------------------------
unsigned int glwebtools::CustomArgument::ToBool(void **self, bool *a2)
{
  if ( glwebtools::CustomArgument::IsBool((glwebtools::CustomArgument::Self *)self) )
    return sub_13D7D10((int)(uintptr_t)(a2), self);
  else
    return -2147483646;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::opShr  (binary VA: 0x13d8c50)
// Original: glwebtools::CustomArgument::operator>>
// ----------------------------------------------------------------------------
unsigned int glwebtools::CustomArgument::opShr(void **self, bool *a2)
{
  return glwebtools::CustomArgument::ToBool(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::IsString  (binary VA: 0x13d8c80)
// Original: glwebtools::CustomArgument::IsString
// ----------------------------------------------------------------------------
bool glwebtools::CustomArgument::IsString(glwebtools::CustomArgument::Self *self)
{
  return *((uint32_t *)self + 1) == 6;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::ToString  (binary VA: 0x13d8c90)
// Original: glwebtools::CustomArgument::ToString
// ----------------------------------------------------------------------------
int glwebtools::CustomArgument::ToString(glwebtools::CustomArgument::Self *a1, int a2)
{
  bool IsString;
  int v3;

  IsString = glwebtools::CustomArgument::IsString(a1);
  v3 = -2147483646;
  if ( IsString )
  {
    g4_std::string::assign_str(a2, a1);
    return 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::opShr  (binary VA: 0x13d8ce0)
// Original: glwebtools::CustomArgument::operator>>
// ----------------------------------------------------------------------------
int glwebtools::CustomArgument::opShr(glwebtools::CustomArgument::Self *a1, int a2)
{
  return glwebtools::CustomArgument::ToString(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::ToString  (binary VA: 0x13d8d10)
// Original: glwebtools::CustomArgument::ToString
// ----------------------------------------------------------------------------
int glwebtools::CustomArgument::ToString(const char **self, glwebtools::SecureString::Self *a2)
{
  int v2;
  unsigned int v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef unsigned int _g4_t_v7[2];
  typedef uint32_t *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v2 = -2147483646;
  if ( glwebtools::CustomArgument::IsString((glwebtools::CustomArgument::Self *)self) )
  {
    v8 = &dword_213B814;
    v9 = &dword_213B814;
    v3 = *((uint32_t *)*self - 3);
    if ( v3 != 0 )
      glwebtools::SecureString::Set((unsigned int (*)[2])v7, *self, v3);
    else
      glwebtools::SecureString::Set((unsigned int (*)[2])v7, nullptr, 0);
    *(uint64_t *)a2 = *(uint64_t *)v7;
    g4_std::string::assign_str((char *)a2 + 8, &v8);
    g4_std::string::assign_str((char *)a2 + 12, &v9);
    glwebtools::SecureString::Set((unsigned int (*)[2])v7, nullptr, 0);
    v4 = v9 - 3;
    if ( v9 - 3 != dword_213B808 && __sync_fetch_and_add(v9 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v4);
    v5 = v8 - 3;
    if ( v8 - 3 == dword_213B808 )
    {
      return 0;
    }
    else
    {
      v2 = 0;
      if ( __sync_fetch_and_add(v8 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v5);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::opShr  (binary VA: 0x13d8e60)
// Original: glwebtools::CustomArgument::operator>>
// ----------------------------------------------------------------------------
int glwebtools::CustomArgument::opShr(const char **self, glwebtools::SecureString::Self *a2)
{
  return glwebtools::CustomArgument::ToString(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::IsJSON  (binary VA: 0x13d8e90)
// Original: glwebtools::CustomArgument::IsJSON
// ----------------------------------------------------------------------------
bool glwebtools::CustomArgument::IsJSON(glwebtools::CustomArgument::Self *self)
{
  return *((uint32_t *)self + 1) == 7;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomArgument::Destroy  (binary VA: 0x13d98f0)
// Original: glwebtools::CustomArgument::~CustomArgument
// ----------------------------------------------------------------------------
void glwebtools::CustomArgument::Destroy(glwebtools::CustomArgument::Self *self)
{
  uint32_t *v1;

  v1 = (uint32_t *)(*(uint32_t *)self - 12);
  if ( v1 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
}


