#include "Core/Utils/DecompTypes.h"
#include "jsoncpp_all.h"

// ============================================================================
// G4_UP8Shop/lib/jsoncpp/decompiled/jsoncpp_all.cpp
// Library: jsoncpp | Module: jsoncpp_all
// Binary Address Span: 0x119aed0 .. 0x11aa240 (206 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x119aed0 (size: 14 bytes)
// Symbol:    _ZN4Json8FeaturesC2Ev
// Demangled: Json::Features::Features(void)
// ============================================================================
// Alternative name is '_ZN4Json8FeaturesC1Ev'
struct Json::Features::Self *Json::Features::Features(Json::Features::Self *self)
{
  *(uint8_t *)self = 1;
  *((uint8_t *)self + 1) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: Json::Features::all  (binary VA: 0x119aee0)
// Original: Json::Features::all
// ----------------------------------------------------------------------------
Json::Features::Self * Json::Features::all(Json::Features::Self *self)
{
  Json::Features::Features(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Features::strictMode  (binary VA: 0x119af20)
// Original: Json::Features::strictMode
// ----------------------------------------------------------------------------
Json::Features::Self * Json::Features::strictMode(Json::Features::Self *self)
{
  Json::Features::Features(self);
  *(uint8_t *)self = 0;
  *((uint8_t *)self + 1) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::skipSpaces  (binary VA: 0x119af60)
// Original: Json::Reader::skipSpaces
// ----------------------------------------------------------------------------
char * Json::Reader::skipSpaces(Json::Reader::Self *self)
{
  char *result;
  char *i;
  char v3;

  result = *((char **)self + 23);
  for ( i = *((char **)self + 22); result != i; *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(++result) )
  {
    v3 = *result;
    if ( *result != 9 && v3 != 32 && v3 != 10 && v3 != 13 )
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::match  (binary VA: 0x119afa0)
// Original: Json::Reader::match
// ----------------------------------------------------------------------------
int Json::Reader::match(Json::Reader::Self *self, const char *a2, int a3)
{
  int result;
  int v4;
  int v5;

  result = 0;
  v4 = *((uint32_t *)self + 23);
  if ( *((uint32_t *)self + 22) - v4 >= a3 )
  {
    v5 = a3;
    while ( v5 != 0 )
    {
      --v5;
      if ( *(uint8_t *)(v4 + v5) != a2[v5] )
        return 0;
    }
    *((uint32_t *)self + 23) = a3 + v4;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::readNumber  (binary VA: 0x119b010)
// Original: Json::Reader::readNumber
// ----------------------------------------------------------------------------
char * Json::Reader::readNumber(Json::Reader::Self *self)
{
  char *result;
  char *i;
  char v3;

  result = *((char **)self + 23);
  for ( i = *((char **)self + 22); i != result; *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(++result) )
  {
    v3 = *result;
    if ( (uint8_t)(*result - 48) > 9u && v3 != 101 && v3 != 46 && v3 != 43 && v3 != 69 && v3 != 45 )
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::currentValue  (binary VA: 0x119b060)
// Original: Json::Reader::currentValue
// ----------------------------------------------------------------------------
int Json::Reader::currentValue(Json::Reader::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 6);
  if ( v1 == *((uint32_t *)self + 7) )
    return *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 9) - 4) + 508);
  else
    return *(uint32_t *)(v1 - 4);
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::getNextChar  (binary VA: 0x119b090)
// Original: Json::Reader::getNextChar
// ----------------------------------------------------------------------------
int Json::Reader::getNextChar(Json::Reader::Self *self)
{
  int result;
  uint8_t *v2;

  result = 0;
  v2 = *((uint8_t **)self + 23);
  if ( v2 != *((uint8_t **)self + 22) )
  {
    result = *v2;
    *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(v2 + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::readString  (binary VA: 0x119b0b0)
// Original: Json::Reader::readString
// ----------------------------------------------------------------------------
int Json::Reader::readString(Json::Reader::Self *self)
{
  char NextChar;

  while ( *((uint32_t *)self + 23) != *((uint32_t *)self + 22) )
  {
    while ( 1 )
    {
      NextChar = Json::Reader::getNextChar(self);
      if ( NextChar != 92 )
        break;
      Json::Reader::getNextChar(self);
      if ( *((uint32_t *)self + 23) == *((uint32_t *)self + 22) )
        return 0;
    }
    if ( NextChar == 34 )
      return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::readCppStyleComment  (binary VA: 0x119b110)
// Original: Json::Reader::readCppStyleComment
// ----------------------------------------------------------------------------
int Json::Reader::readCppStyleComment(Json::Reader::Self *self)
{
  char NextChar;

  do
  {
    if ( *((uint32_t *)self + 23) == *((uint32_t *)self + 22) )
      break;
    NextChar = Json::Reader::getNextChar(self);
    if ( NextChar == 10 )
      break;
  }
  while ( NextChar != 13 );
  return 1;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::readCStyleComment  (binary VA: 0x119b150)
// Original: Json::Reader::readCStyleComment
// ----------------------------------------------------------------------------
bool Json::Reader::readCStyleComment(Json::Reader::Self *self)
{
  uint8_t *v1;
  bool v2;

  v1 = *((uint8_t **)self + 23);
  while ( *((uint8_t **)self + 22) != v1 )
  {
    v2 = (uint8_t)Json::Reader::getNextChar(self) == 42;
    v1 = *((uint8_t **)self + 23);
    if ( v2 && *v1 == 47 )
      break;
  }
  return (uint8_t)Json::Reader::getNextChar(self) == 47;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::getLocationLineAndColumn  (binary VA: 0x119b1a0)
// Original: Json::Reader::getLocationLineAndColumn
// ----------------------------------------------------------------------------
int * Json::Reader::getLocationLineAndColumn(Json::Reader::Self *self, const char *a2, int *a3, int *a4)
{
  const char *v4;
  const char *v5;
  char v6;
  const char *v7;

  v4 = *((const char **)self + 21);
  *a3 = 0;
  v5 = v4;
  if ( v4 < a2 && v4 != *((const char **)self + 22) )
  {
    v6 = *v4;
    v7 = v4 + 1;
    if ( *v4 == 13 )
      goto LABEL_10;
LABEL_4:
    if ( v6 == 10 )
    {
      ++*a3;
      v5 = v7;
    }
    while ( a2 > v7 && *((const char **)self + 22) != v7 )
    {
      v4 = v7;
      v6 = *v7++;
      if ( v6 != 13 )
        goto LABEL_4;
LABEL_10:
      if ( v4[1] == 10 )
        v7 = v4 + 2;
      ++*a3;
      v5 = v7;
    }
  }
  *a4 = a2 - v5 + 1;
  ++*a3;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::getLocationLineAndColumn  (binary VA: 0x119b220)
// Original: Json::Reader::getLocationLineAndColumn
// ----------------------------------------------------------------------------
Json::Reader::Self * Json::Reader::getLocationLineAndColumn(Json::Reader::Self *self, Json::Reader::Self *a2, char *a3)
{
  typedef uint8_t _g4_t_v4[5];
  typedef int _g4_t_v5;
  typedef char _g4_t_s[51];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (3u + sizeof(_g4_t_v4)) > _g4_s0 ? (3u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (13u + sizeof(_g4_t_s)) > _g4_s2 ? (13u + sizeof(_g4_t_s)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 3u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 13u);

  Json::Reader::getLocationLineAndColumn(a2, a3, (int *)&v4[1], &v5);
  sprintf(s, "Line %d, Column %d", *(uint32_t *)&v4[1], v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), s, (int)(uintptr_t)(v4));
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::addComment  (binary VA: 0x119b2c0)
// Original: Json::Reader::addComment
// ----------------------------------------------------------------------------
int Json::Reader::addComment(int a1, void *a2, int a3, int a4)
{
  int v4;
  int result;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  if ( *(uint8_t *)(a1 + 110) != 0 )
  {
    if ( a4 != 1 )
    {
LABEL_3:
      v4 = a1 + 104;
      if ( *(uint32_t *)(*(uint32_t *)(a1 + 104) - 12) != 0 )
        g4_std::string::append(v4, &a0[1], 1u);
      sub_119F570((int)(uintptr_t)(v10), a2, a3, (int)(uintptr_t)(&v8) + 1);
      g4_std::string::append_str(v4, v10);
      result = v10[0];
      v6 = (void *)(v10[0] - 12);
      if ( (uint32_t *)(v10[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        { g4_std::string::Rep::M_destroy(v6); return 0; }
      }
      return result;
    }
  }
  else
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/jsoncpp/source/json_reader.cpp",
      459,
      "void Json::Reader::addComment(Json::Reader::Location, Json::Reader::Location, Json::CommentPlacement)",
      "collectComments_");
    if ( a4 != 1 )
      goto LABEL_3;
  }
  if ( *(uint32_t *)(a1 + 100) == 0 )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/jsoncpp/source/json_reader.cpp",
      462,
      "void Json::Reader::addComment(Json::Reader::Location, Json::Reader::Location, Json::CommentPlacement)",
      "lastValue_ != 0");
  sub_119F570((int)(uintptr_t)(&v9), a2, a3, (int)(uintptr_t)(&v8));
  Json::Value::setComment(*(uint32_t *)(a1 + 100), &v9, 1);
  result = v9;
  v7 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v7); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::readComment  (binary VA: 0x119b490)
// Original: Json::Reader::readComment
// ----------------------------------------------------------------------------
int Json::Reader::readComment(Json::Reader::Self *self)
{
  int v1;
  char NextChar;
  int result;
  char CStyleComment;
  char v5;
  uint8_t *v6;
  unsigned int v7;
  unsigned int v8;
  char v9;
  uint8_t *v10;

  v1 = *((uint32_t *)self + 23);
  NextChar = Json::Reader::getNextChar(self);
  if ( NextChar == 42 )
  {
    CStyleComment = Json::Reader::readCStyleComment(self);
    v5 = 42;
  }
  else
  {
    result = 0;
    if ( NextChar != 47 )
      return result;
    CStyleComment = Json::Reader::readCppStyleComment(self);
    v5 = 47;
  }
  if ( CStyleComment == 0 )
    return 0;
  result = 1;
  if ( *((uint8_t *)self + 110) != 0 )
  {
    v6 = *((uint8_t **)self + 24);
    v7 = v1 - 1;
    if ( v6 != nullptr )
    {
      if ( v7 > (unsigned int)(uintptr_t)(v6) )
      {
        if ( *v6 == 10 || *v6 == 13 )
        {
LABEL_17:
          v8 = *((uint32_t *)self + 23);
          v6 = nullptr;
LABEL_16:
          Json::Reader::addComment((int)(uintptr_t)(self), (void *)(v1 - 1), v8, (int)(uintptr_t)(v6));
          return 1;
        }
        while ( v7 > (unsigned int)(uintptr_t)(++v6) )
        {
          if ( *v6 == 13 || *v6 == 10 )
            goto LABEL_17;
        }
      }
      v8 = *((uint32_t *)self + 23);
      v6 = (uint8_t *)(&dword_0 + 1);
      if ( v5 == 42 && v7 < v8 )
      {
        v9 = *(uint8_t *)(v1 - 1);
        if ( v9 == 13 || v9 == 10 )
        {
LABEL_28:
          v6 = nullptr;
        }
        else
        {
          v10 = (uint8_t *)(v1 - 1);
          while ( v8 > (unsigned int)(uintptr_t)(++v10) )
          {
            if ( *v10 == 13 || *v10 == 10 )
              goto LABEL_28;
          }
          v6 = (uint8_t *)(&dword_0 + 1);
        }
      }
      goto LABEL_16;
    }
    v8 = *((uint32_t *)self + 23);
    goto LABEL_16;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::readToken  (binary VA: 0x119b5e0)
// Original: Json::Reader::readToken
// ----------------------------------------------------------------------------
int Json::Reader::readToken(Json::Reader::Self *a1, uint32_t *a2)
{
  char String;

  Json::Reader::skipSpaces(a1);
  a2[1] = *((uint32_t *)a1 + 23);
  switch ( (uint8_t)Json::Reader::getNextChar(a1) )
  {
    case 0u:
      *a2 = 0;
      goto LABEL_5;
    case '"':
      *a2 = 5;
      String = Json::Reader::readString(a1);
      goto LABEL_3;
    case ',':
      *a2 = 10;
      goto LABEL_5;
    case '-':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      *a2 = 6;
      Json::Reader::readNumber(a1);
      goto LABEL_5;
    case '/':
      *a2 = 12;
      String = Json::Reader::readComment(a1);
      goto LABEL_3;
    case ':':
      *a2 = 11;
      goto LABEL_5;
    case '[':
      *a2 = 3;
      goto LABEL_5;
    case ']':
      *a2 = 4;
      goto LABEL_5;
    case 'f':
      *a2 = 8;
      String = Json::Reader::match(a1, "alse", 4);
      goto LABEL_3;
    case 'n':
      *a2 = 9;
      String = Json::Reader::match(a1, "ull", 3);
      goto LABEL_3;
    case 't':
      *a2 = 7;
      String = Json::Reader::match(a1, "rue", 3);
LABEL_3:
      if ( String == 0 )
        goto LABEL_4;
      goto LABEL_5;
    case '{':
      *a2 = 1;
      goto LABEL_5;
    case '}':
      *a2 = 2;
      goto LABEL_5;
    default:
LABEL_4:
      *a2 = 13;
LABEL_5:
      a2[2] = *((uint32_t *)a1 + 23);
      return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::skipCommentTokens  (binary VA: 0x119b740)
// Original: Json::Reader::skipCommentTokens
// ----------------------------------------------------------------------------
int Json::Reader::skipCommentTokens(Json::Reader::Self *a1, uint32_t *a2)
{
  int result;

  if ( *((uint8_t *)a1 + 108) == 0 )
    return Json::Reader::readToken(a1, a2);
  do
    result = Json::Reader::readToken(a1, a2);
  while ( *a2 == 12 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::getFormatedErrorMessages  (binary VA: 0x119b7b0)
// Original: Json::Reader::getFormatedErrorMessages
// ----------------------------------------------------------------------------
Json::Reader::Self * Json::Reader::getFormatedErrorMessages(Json::Reader::Self *self, char *a2)
{
  int v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v15)) > _g4_s3 ? (36u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v16)) > _g4_s4 ? (40u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v17)) > _g4_s5 ? (44u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v18)) > _g4_s6 ? (48u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v19)) > _g4_s7 ? (52u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v20)) > _g4_s8 ? (56u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v21)) > _g4_s9 ? (60u + sizeof(_g4_t_v21)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  v2 = *((uint32_t *)a2 + 12);
  v12 = *((uint32_t *)a2 + 14);
  v13 = *((uint32_t *)a2 + 15);
  while ( *((uint32_t *)a2 + 16) != v2 )
  {
    while ( 1 )
    {
      Json::Reader::getLocationLineAndColumn((Json::Reader::Self *)&v14, (Json::Reader::Self *)a2, *(char **)(v2 + 4));
      sub_59E340(&v15, "* ", &v14);
      g4_std::string::construct_copy(&v16, &v15);
      g4_std::string::append((int)(uintptr_t)(&v16), &a0[1], 1u);
      g4_std::string::append_str(self, &v16);
      v3 = (void *)(v16 - 12);
      if ( (uint32_t *)(v16 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v3);
      }
      v4 = (void *)(v15 - 12);
      if ( (uint32_t *)(v15 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      v5 = (void *)(v14 - 12);
      if ( (uint32_t *)(v14 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
      sub_59E340(&v17, "  ", (uint32_t *)(v2 + 12));
      g4_std::string::construct_copy(&v18, &v17);
      g4_std::string::append((int)(uintptr_t)(&v18), &a0[1], 1u);
      g4_std::string::append_str(self, &v18);
      v6 = (void *)(v18 - 12);
      if ( (uint32_t *)(v18 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
      v7 = (void *)(v17 - 12);
      if ( (uint32_t *)(v17 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v7);
      }
      if ( *(uint32_t *)(v2 + 16) != 0 )
      {
        Json::Reader::getLocationLineAndColumn((Json::Reader::Self *)&v19, (Json::Reader::Self *)a2, *(char **)(v2 + 16));
        sub_59E340(&v20, "See ", &v19);
        g4_std::string::construct_copy(v21, &v20);
        g4_std::string::append((int)(uintptr_t)(v21), " for detail.\n", 0xDu);
        g4_std::string::append_str(self, v21);
        v8 = (void *)(v21[0] - 12);
        if ( (uint32_t *)(v21[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v21[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v8);
        }
        v9 = (void *)(v20 - 12);
        if ( (uint32_t *)(v20 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
        v10 = (void *)(v19 - 12);
        if ( (uint32_t *)(v19 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v10);
        }
      }
      v2 += 20;
      if ( v2 != v12 )
        break;
      v2 = *(uint32_t *)(v13 + 4);
      v12 = v2 + 500;
      v13 += 4;
      if ( *((uint32_t *)a2 + 16) == v2 )
        return self;
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::Construct  (binary VA: 0x119bb90)
// Original: Json::Reader::Reader
// ----------------------------------------------------------------------------
Json::Reader::Self * Json::Reader::Construct(Json::Reader::Self *self)
{
  Json::Reader::Self *v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  int *v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;
  void *v11;
  void **v12;
  unsigned int v13;
  void *v14;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  typedef unsigned int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef void *_g4_t_v23[2];
  typedef int *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int *_g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v23)) > _g4_s2 ? (24u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v24)) > _g4_s3 ? (32u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v25)) > _g4_s4 ? (36u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v26)) > _g4_s5 ? (40u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v27)) > _g4_s6 ? (44u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v28)) > _g4_s7 ? (48u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v29)) > _g4_s8 ? (52u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v30)) > _g4_s9 ? (56u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v31)) > _g4_s10 ? (60u + sizeof(_g4_t_v31)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);

  v1 = self;
  v23[0] = nullptr;
  v23[1] = nullptr;
  v24 = nullptr;
  v25 = 0;
  v26 = nullptr;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  g4_std::Deque_base_Json_Value_740ed4::M_initialize_map((std::_Deque_base<Json::Value::Self *> *)v23, 0);
  v2 = (int)(v31 - v27) >> 2;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  v3 = v2 - 1;
  v4 = v28 - v29;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  g4_std::Deque_base_Json_Value_740ed4::M_initialize_map(self, (v4 >> 2) + (v3 << 7) + v26 - v24);
  v22 = *((uint32_t *)self + 5);
  v21 = v27;
  v5 = v26;
  v6 = v24;
  v7 = *((uint32_t **)self + 2);
  v8 = ((v28 - v29) >> 2) + ((((int)(v31 - v27) >> 2) - 1) << 7) + v26 - v24;
  if ( v8 > 0 )
  {
    v9 = *((uint32_t **)self + 4);
    while ( 1 )
    {
      v10 = *v6++;
      *v7 = v10;
      if ( v6 == v5 )
      {
        ++v7;
        v6 = *(int **)(v21 + 4);
        v21 += 4;
        v5 = v6 + 128;
        if ( v7 == v9 )
          goto LABEL_7;
LABEL_4:
        if ( --v8 == 0 )
          goto LABEL_8;
      }
      else
      {
        if ( ++v7 != v9 )
          goto LABEL_4;
LABEL_7:
        v7 = *(uint32_t **)(v22 + 4);
        --v8;
        v22 += 4;
        v9 = v7 + 128;
        if ( v8 == 0 )
        {
LABEL_8:
          v1 = self;
          break;
        }
      }
    }
  }
  v11 = v23[0];
  if ( v23[0] != nullptr )
  {
    v12 = (void **)v27;
    v13 = v31 + 4;
    if ( v31 + 4 > v27 )
    {
      do
      {
        v14 = *v12++;
        opDelete(v14);
      }
      while ( v13 > (unsigned int)(uintptr_t)(v12) );
      v11 = v23[0];
    }
    opDelete(v11);
  }
  *((uint32_t *)v1 + 10) = 0;
  *((uint32_t *)v1 + 12) = 0;
  *((uint32_t *)v1 + 13) = 0;
  *((uint32_t *)v1 + 14) = 0;
  *((uint32_t *)v1 + 15) = 0;
  *((uint32_t *)v1 + 16) = 0;
  *((uint32_t *)v1 + 17) = 0;
  *((uint32_t *)v1 + 18) = 0;
  *((uint32_t *)v1 + 19) = 0;
  *((uint32_t *)v1 + 11) = 8;
  v15 = opNew(0x20u);
  v16 = *((uint32_t *)v1 + 11);
  *((uint32_t *)v1 + 10) = v15;
  v17 = (int *)(v15 + ((2 * v16 - 2) & 0xFFFFFFFC));
  *v17 = opNew(0x1F4u);
  *((uint32_t *)v1 + 15) = (uint32_t)(uintptr_t)(v17);
  v18 = *v17;
  *((uint32_t *)v1 + 19) = (uint32_t)(uintptr_t)(v17);
  *((uint32_t *)v1 + 13) = v18;
  *((uint32_t *)v1 + 14) = v18 + 500;
  v19 = *v17;
  *((uint32_t *)v1 + 12) = v18;
  *((uint32_t *)v1 + 17) = v19;
  *((uint32_t *)v1 + 16) = v19;
  *((uint32_t *)v1 + 18) = v19 + 500;
  *((uint32_t *)v1 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)v1 + 26) = (uint32_t)(uintptr_t)(&dword_213B814);
  return (Json::Reader::Self *)(Json::Features::all((Json::Reader::Self *)((char *)v1 + 108)));
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::Construct  (binary VA: 0x119be40)
// Original: Json::Reader::Reader
// ----------------------------------------------------------------------------
Json::Reader::Self * Json::Reader::Construct(Json::Reader::Self *self, const Json::Features::Self *a2)
{
  Json::Reader::Self *v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int *v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int v11;
  void *v12;
  void **v13;
  unsigned int v14;
  void *v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  Json::Reader::Self *result;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef void *_g4_t_v24[2];
  typedef int *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int *_g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v24)) > _g4_s2 ? (24u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v25)) > _g4_s3 ? (32u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v26)) > _g4_s4 ? (36u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v27)) > _g4_s5 ? (40u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v28)) > _g4_s6 ? (44u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v29)) > _g4_s7 ? (48u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v30)) > _g4_s8 ? (52u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v31)) > _g4_s9 ? (56u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v32)) > _g4_s10 ? (60u + sizeof(_g4_t_v32)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);

  v2 = self;
  v24[0] = nullptr;
  v24[1] = nullptr;
  v25 = nullptr;
  v26 = 0;
  v27 = nullptr;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  g4_std::Deque_base_Json_Value_740ed4::M_initialize_map((std::_Deque_base<Json::Value::Self *> *)v24, 0);
  v3 = (int)(v32 - v28) >> 2;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  v4 = v3 - 1;
  v5 = v29 - v30;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  g4_std::Deque_base_Json_Value_740ed4::M_initialize_map(self, (v5 >> 2) + (v4 << 7) + v27 - v25);
  v23 = *((uint32_t *)self + 5);
  v22 = v28;
  v6 = v27;
  v7 = v25;
  v8 = *((uint32_t **)self + 2);
  v9 = ((v29 - v30) >> 2) + ((((int)(v32 - v28) >> 2) - 1) << 7) + v27 - v25;
  if ( v9 > 0 )
  {
    v10 = *((uint32_t **)self + 4);
    while ( 1 )
    {
      v11 = *v7++;
      *v8 = v11;
      if ( v7 == v6 )
      {
        ++v8;
        v7 = *(int **)(v22 + 4);
        v22 += 4;
        v6 = v7 + 128;
        if ( v8 == v10 )
          goto LABEL_7;
LABEL_4:
        if ( --v9 == 0 )
          goto LABEL_8;
      }
      else
      {
        if ( ++v8 != v10 )
          goto LABEL_4;
LABEL_7:
        v8 = *(uint32_t **)(v23 + 4);
        --v9;
        v23 += 4;
        v10 = v8 + 128;
        if ( v9 == 0 )
        {
LABEL_8:
          v2 = self;
          break;
        }
      }
    }
  }
  v12 = v24[0];
  if ( v24[0] != nullptr )
  {
    v13 = (void **)v28;
    v14 = v32 + 4;
    if ( v32 + 4 > v28 )
    {
      do
      {
        v15 = *v13++;
        opDelete(v15);
      }
      while ( v14 > (unsigned int)(uintptr_t)(v13) );
      v12 = v24[0];
    }
    opDelete(v12);
  }
  *((uint32_t *)v2 + 10) = 0;
  *((uint32_t *)v2 + 12) = 0;
  *((uint32_t *)v2 + 13) = 0;
  *((uint32_t *)v2 + 14) = 0;
  *((uint32_t *)v2 + 15) = 0;
  *((uint32_t *)v2 + 16) = 0;
  *((uint32_t *)v2 + 17) = 0;
  *((uint32_t *)v2 + 18) = 0;
  *((uint32_t *)v2 + 19) = 0;
  *((uint32_t *)v2 + 11) = 8;
  v16 = opNew(0x20u);
  v17 = *((uint32_t *)v2 + 11);
  *((uint32_t *)v2 + 10) = v16;
  v18 = (int *)(v16 + ((2 * v17 - 2) & 0xFFFFFFFC));
  *v18 = opNew(0x1F4u);
  *((uint32_t *)v2 + 15) = (uint32_t)(uintptr_t)(v18);
  v19 = *v18;
  *((uint32_t *)v2 + 19) = (uint32_t)(uintptr_t)(v18);
  *((uint32_t *)v2 + 13) = v19;
  *((uint32_t *)v2 + 14) = v19 + 500;
  v20 = *v18;
  *((uint32_t *)v2 + 12) = v19;
  *((uint32_t *)v2 + 17) = v20;
  *((uint32_t *)v2 + 16) = v20;
  *((uint32_t *)v2 + 18) = v20 + 500;
  *((uint32_t *)v2 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)v2 + 26) = (uint32_t)(uintptr_t)(&dword_213B814);
  result = (Json::Reader::Self *)*(uint16_t *)a2;
  *((uint16_t *)v2 + 54) = (uint16_t)(uintptr_t)result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::addError  (binary VA: 0x119c0e0)
// Original: Json::Reader::addError
// ----------------------------------------------------------------------------
int Json::Reader::addError(uint32_t *a1, int a2, int *a3, int a4)
{
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v9;
  uint32_t *v10;
  int *v11;
  int v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v17)) > _g4_s4 ? (36u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v18)) > _g4_s5 ? (40u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v19)) > _g4_s6 ? (44u + sizeof(_g4_t_v19)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);

  v18 = &dword_213B814;
  v15 = *a3;
  v16 = a3[1];
  v17 = a3[2];
  g4_std::string::assign_str(&v18, a2);
  v4 = a1[18];
  v19 = a4;
  v5 = (uint32_t *)a1[16];
  if ( v5 == (uint32_t *)(v4 - 20) )
  {
    v9 = a1[19];
    if ( (unsigned int)(a1[11] - ((v9 - a1[10]) >> 2)) <= 1 )
    {
      g4_std::deque_Json_Reader_ErrorInfo_1d5bf2::M_reallocate_map(
        (std::deque<Json::Reader::ErrorInfo> *)(a1 + 10),
        1u,
        false);
      v9 = a1[19];
    }
    *(uint32_t *)(v9 + 4) = opNew(0x1F4u);
    v10 = (uint32_t *)a1[16];
    if ( v10 != nullptr )
    {
      *v10 = v15;
      v10[1] = v16;
      v10[2] = v17;
      v14 = v10;
      g4_std::string::construct_copy(v10 + 3, &v18);
      v14[4] = v19;
    }
    v11 = (int *)(a1[19] + 4);
    a1[19] = (uint32_t)(uintptr_t)(v11);
    v12 = *v11;
    a1[17] = *v11;
    a1[16] = v12;
    a1[18] = v12 + 500;
  }
  else
  {
    v6 = 0;
    if ( v5 != nullptr )
    {
      *v5 = v15;
      v5[1] = v16;
      v5[2] = v17;
      v13 = v5;
      g4_std::string::construct_copy(v5 + 3, &v18);
      v13[4] = v19;
      v6 = a1[16];
    }
    a1[16] = v6 + 20;
  }
  v7 = v18 - 3;
  if ( v18 - 3 != dword_213B808 && __sync_fetch_and_add(v18 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v7);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::decodeUnicodeEscapeSequence  (binary VA: 0x119c290)
// Original: Json::Reader::decodeUnicodeEscapeSequence
// ----------------------------------------------------------------------------
int Json::Reader::decodeUnicodeEscapeSequence(uint32_t *a1, int *a2, int *a3, int a4, int *a5)
{
  int v5;
  int v6;
  char v7;
  int v8;
  int result;
  void *v10;
  int v11;
  typedef uint8_t _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v5 = *a3;
  if ( a4 - *a3 > 3 )
  {
    *a5 = 0;
    v6 = 4;
    while ( 1 )
    {
      v7 = *(uint8_t *)(*a3)++;
      v8 = 16 * *a5;
      *a5 = v8;
      if ( (uint8_t)(v7 - 48) > 9u )
      {
        if ( (uint8_t)(v7 - 97) > 5u )
        {
          if ( (uint8_t)(v7 - 65) > 5u )
          {
            v11 = *a3;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Bad unicode escape sequence in string: hexadecimal digit expected.", (int)(uintptr_t)(&v13) + 2);
            result = Json::Reader::addError(a1, (int)(uintptr_t)(v15), a2, v11);
            v10 = (void *)(v15[0] - 12);
            if ( (uint32_t *)(v15[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              goto LABEL_17;
            }
            return result;
          }
          *a5 = v8 + v7 - 55;
        }
        else
        {
          *a5 = v8 + v7 - 87;
        }
      }
      else
      {
        *a5 = v8 + v7 - 48;
      }
      if ( --v6 == 0 )
        return 1;
    }
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Bad unicode escape sequence in string: four digits expected.", (int)(uintptr_t)(&v13));
  result = Json::Reader::addError(a1, (int)(uintptr_t)(&v14), a2, v5);
  v10 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
LABEL_17:
    v12 = result;
    g4_std::string::Rep::M_destroy(v10);
    return v12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::decodeUnicodeCodePoint  (binary VA: 0x119c430)
// Original: Json::Reader::decodeUnicodeCodePoint
// ----------------------------------------------------------------------------
int Json::Reader::decodeUnicodeCodePoint(uint32_t *a1, int *a2, int *a3, int a4, int *a5)
{
  char v5;
  int v6;
  char *v7;
  char v8;
  uint8_t *v9;
  void *v10;
  char v12;
  char v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v18)) > _g4_s4 ? (20u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v19)) > _g4_s5 ? (24u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v20)) > _g4_s6 ? (28u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);

  v5 = Json::Reader::decodeUnicodeEscapeSequence(a1, a2, a3, a4, a5);
  v6 = 0;
  if ( v5 == 0 )
    return v6;
  v6 = 1;
  if ( (unsigned int)(*a5 - 55296) > 0x3FF )
    return v6;
  v7 = (char *)*a3;
  if ( a4 - *a3 <= 5 )
  {
    v15 = *a3;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "additional six characters expected to parse unicode surrogate pair.", (int)(uintptr_t)(&v17));
    v6 = Json::Reader::addError(a1, (int)(uintptr_t)(&v18), a2, v15);
    v10 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) == dword_213B808
      || __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) > 0 )
    {
      return v6;
    }
LABEL_14:
    v16 = v6;
    g4_std::string::Rep::M_destroy(v10);
    return v16;
  }
  v8 = *v7;
  v9 = (uint8_t *)(v7 + 1);
  *a3 = (int)(uintptr_t)(v7 + 1);
  if ( v8 != 92 || (v12 = v7[1], v9 = (uint8_t *)(v7 + 2), *a3 = (int)(uintptr_t)(v7 + 2), v12 != 117) )
  {
    v14 = (int)(uintptr_t)(v9);
    g4_std::string::construct_from_cstr(
      (int)(uintptr_t)(v20),
      "expecting another \\u token to begin the second half of a unicode surrogate pair",
      (int)(uintptr_t)(&v17) + 1);
    v6 = Json::Reader::addError(a1, (int)(uintptr_t)(v20), a2, v14);
    v10 = (void *)(v20[0] - 12);
    if ( (uint32_t *)(v20[0] - 12) == dword_213B808
      || __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) > 0 )
    {
      return v6;
    }
    goto LABEL_14;
  }
  v13 = Json::Reader::decodeUnicodeEscapeSequence(a1, a2, a3, a4, &v19);
  v6 = 0;
  if ( v13 != 0 )
  {
    v6 = 1;
    *a5 = (v19 & 0x3FF) + ((*a5 & 0x3FF) << 10) + 0x10000;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::decodeString  (binary VA: 0x119c620)
// Original: Json::Reader::decodeString
// ----------------------------------------------------------------------------
int Json::Reader::decodeString(uint32_t *a1, int *a2, int *a3)
{
  char *i;
  int v4;
  char v5;
  int v6;
  char v7;
  int result;
  void *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  void *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  uint8_t *v31;
  char v32;
  unsigned int v33;
  uint8_t *v34;
  unsigned int v35;
  uint8_t *v36;
  unsigned int v37;
  uint8_t *v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef uint8_t _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef char *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v39)) > _g4_s0 ? (0u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v40)) > _g4_s1 ? (0u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v41)) > _g4_s2 ? (0u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v42)) > _g4_s3 ? (0u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v43)) > _g4_s4 ? (0u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v44)) > _g4_s5 ? (0u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v45)) > _g4_s6 ? (4u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v46)) > _g4_s7 ? (4u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v47)) > _g4_s8 ? (4u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v48)) > _g4_s9 ? (4u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v49)) > _g4_s10 ? (4u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v50)) > _g4_s11 ? (4u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (4u + sizeof(_g4_t_v51)) > _g4_s12 ? (4u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (4u + sizeof(_g4_t_v52)) > _g4_s13 ? (4u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (4u + sizeof(_g4_t_v53)) > _g4_s14 ? (4u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (4u + sizeof(_g4_t_v54)) > _g4_s15 ? (4u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (4u + sizeof(_g4_t_v55)) > _g4_s16 ? (4u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (4u + sizeof(_g4_t_v56)) > _g4_s17 ? (4u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (23u + sizeof(_g4_t_v57)) > _g4_s18 ? (23u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v58)) > _g4_s19 ? (28u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v59)) > _g4_s20 ? (32u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v60)) > _g4_s21 ? (36u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v61)) > _g4_s22 ? (40u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_v62)) > _g4_s23 ? (44u + sizeof(_g4_t_v62)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 4u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 4u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 23u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);

  sub_1939B80(a3, a2[2] - a2[1] - 2);
  v4 = a2[2] - 1;
  v58 = (char *)(a2[1] + 1);
  for ( i = v58; (char *)v4 != v58; i = v58 )
  {
    v5 = *i;
    v58 = i + 1;
    if ( v5 == 34 )
      break;
    if ( v5 == 92 )
    {
      if ( (char *)v4 == i + 1 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "Empty escape sequence in string", (int)(uintptr_t)(&v57));
        result = Json::Reader::addError(a1, (int)(uintptr_t)(&v59), a2, v4);
        v9 = (void *)(v59 - 12);
        if ( (uint32_t *)(v59 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
        {
LABEL_68:
          v47 = result;
          g4_std::string::Rep::M_destroy(v9);
          return v47;
        }
      }
      else
      {
        v6 = (int)(uintptr_t)(i + 2);
        v7 = i[1] - 34;
        v58 = i + 2;
        switch ( v7 )
        {
          case 0:
            v29 = *a3;
            v30 = *(uint32_t *)(*a3 - 12);
            v12 = v30 + 1;
            if ( (unsigned int)(v30 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v29 - 4) > 0 )
            {
              sub_1939B80(a3, v30 + 1);
              v29 = *a3;
              v30 = *(uint32_t *)(*a3 - 12);
            }
            *(uint8_t *)(v29 + v30) = 34;
            v13 = *a3;
            if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
              goto LABEL_27;
            continue;
          case 13:
            v27 = *a3;
            v28 = *(uint32_t *)(*a3 - 12);
            v12 = v28 + 1;
            if ( (unsigned int)(v28 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v27 - 4) > 0 )
            {
              sub_1939B80(a3, v28 + 1);
              v27 = *a3;
              v28 = *(uint32_t *)(*a3 - 12);
            }
            *(uint8_t *)(v27 + v28) = 47;
            v13 = *a3;
            if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
              goto LABEL_27;
            continue;
          case 58:
            v25 = *a3;
            v26 = *(uint32_t *)(*a3 - 12);
            v12 = v26 + 1;
            if ( (unsigned int)(v26 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v25 - 4) > 0 )
            {
              sub_1939B80(a3, v26 + 1);
              v25 = *a3;
              v26 = *(uint32_t *)(*a3 - 12);
            }
            *(uint8_t *)(v25 + v26) = 92;
            v13 = *a3;
            if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
              goto LABEL_27;
            continue;
          case 64:
            v23 = *a3;
            v24 = *(uint32_t *)(*a3 - 12);
            v12 = v24 + 1;
            if ( (unsigned int)(v24 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v23 - 4) > 0 )
            {
              sub_1939B80(a3, v24 + 1);
              v23 = *a3;
              v24 = *(uint32_t *)(*a3 - 12);
            }
            *(uint8_t *)(v23 + v24) = 8;
            v13 = *a3;
            if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
              goto LABEL_27;
            continue;
          case 68:
            v21 = *a3;
            v22 = *(uint32_t *)(*a3 - 12);
            v12 = v22 + 1;
            if ( (unsigned int)(v22 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v21 - 4) > 0 )
            {
              sub_1939B80(a3, v22 + 1);
              v21 = *a3;
              v22 = *(uint32_t *)(*a3 - 12);
            }
            *(uint8_t *)(v21 + v22) = 12;
            v13 = *a3;
            if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
              goto LABEL_27;
            continue;
          case 76:
            v19 = *a3;
            v20 = *(uint32_t *)(*a3 - 12);
            v12 = v20 + 1;
            if ( (unsigned int)(v20 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v19 - 4) > 0 )
            {
              sub_1939B80(a3, v20 + 1);
              v19 = *a3;
              v20 = *(uint32_t *)(*a3 - 12);
            }
            *(uint8_t *)(v19 + v20) = 10;
            v13 = *a3;
            if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
              goto LABEL_27;
            continue;
          case 80:
            v17 = *a3;
            v18 = *(uint32_t *)(*a3 - 12);
            v12 = v18 + 1;
            if ( (unsigned int)(v18 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v17 - 4) > 0 )
            {
              sub_1939B80(a3, v18 + 1);
              v17 = *a3;
              v18 = *(uint32_t *)(*a3 - 12);
            }
            *(uint8_t *)(v17 + v18) = 13;
            v13 = *a3;
            if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
              goto LABEL_27;
            continue;
          case 82:
            v15 = *a3;
            v16 = *(uint32_t *)(*a3 - 12);
            v12 = v16 + 1;
            if ( (unsigned int)(v16 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v15 - 4) > 0 )
            {
              sub_1939B80(a3, v16 + 1);
              v15 = *a3;
              v16 = *(uint32_t *)(*a3 - 12);
            }
            *(uint8_t *)(v15 + v16) = 9;
            v13 = *a3;
            if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
              goto LABEL_27;
            continue;
          case 83:
            if ( (uint8_t)Json::Reader::decodeUnicodeCodePoint(a1, a2, (int *)&v58, v4, (int *)&v60) != 0 )
            {
              v61 = (int)(uintptr_t)(&dword_213B814);
              if ( v60 <= 0x7F )
              {
                v46 = v60;
                sub_1939D80((int)(uintptr_t)(&v61), 1u, 0);
                v31 = (uint8_t *)v61;
                v32 = v46;
                if ( *(int *)(v61 - 4) >= 0 )
                {
                  sub_19397C0(&v61);
                  v31 = (uint8_t *)v61;
                  v32 = v46;
                }
                *v31 = v32;
              }
              else if ( v60 <= 0x7FF )
              {
                v48 = v60;
                sub_1939D80((int)(uintptr_t)(&v61), 2u, 0);
                v39 = v61;
                v33 = v48;
                if ( *(int *)(v61 - 4) >= 0 )
                {
                  sub_19397C0(&v61);
                  v39 = v61;
                  v33 = v48;
                }
                *(uint8_t *)(v39 + 1) = v33 & 0x3F | 0x80;
                v34 = (uint8_t *)v61;
                if ( *(int *)(v61 - 4) >= 0 )
                {
                  v49 = v33;
                  sub_19397C0(&v61);
                  v34 = (uint8_t *)v61;
                  v33 = v49;
                }
                *v34 = (v33 >> 6) | 0xC0;
              }
              else if ( v60 <= 0xFFFF )
              {
                v50 = v60;
                sub_1939D80((int)(uintptr_t)(&v61), 3u, 0);
                v35 = v50;
                v40 = v61;
                if ( *(int *)(v61 - 4) >= 0 )
                {
                  sub_19397C0(&v61);
                  v40 = v61;
                  v35 = v50;
                }
                *(uint8_t *)(v40 + 2) = v35 & 0x3F | 0x80;
                v41 = v61;
                if ( *(int *)(v61 - 4) >= 0 )
                {
                  v51 = v35;
                  sub_19397C0(&v61);
                  v41 = v61;
                  v35 = v51;
                }
                *(uint8_t *)(v41 + 1) = (v35 >> 6) & 0x3F | 0x80;
                v36 = (uint8_t *)v61;
                if ( *(int *)(v61 - 4) >= 0 )
                {
                  v52 = v35;
                  sub_19397C0(&v61);
                  v36 = (uint8_t *)v61;
                  v35 = v52;
                }
                *v36 = (v35 >> 12) | 0xE0;
              }
              else if ( v60 <= 0x10FFFF )
              {
                v53 = v60;
                sub_1939D80((int)(uintptr_t)(&v61), 4u, 0);
                v42 = v61;
                v37 = v53;
                if ( *(int *)(v61 - 4) >= 0 )
                {
                  sub_19397C0(&v61);
                  v42 = v61;
                  v37 = v53;
                }
                *(uint8_t *)(v42 + 3) = v37 & 0x3F | 0x80;
                v43 = v61;
                if ( *(int *)(v61 - 4) >= 0 )
                {
                  v54 = v37;
                  sub_19397C0(&v61);
                  v43 = v61;
                  v37 = v54;
                }
                *(uint8_t *)(v43 + 2) = (v37 >> 6) & 0x3F | 0x80;
                v44 = v61;
                if ( *(int *)(v61 - 4) >= 0 )
                {
                  v55 = v37;
                  sub_19397C0(&v61);
                  v44 = v61;
                  v37 = v55;
                }
                *(uint8_t *)(v44 + 1) = (v37 >> 12) & 0x3F | 0x80;
                v38 = (uint8_t *)v61;
                if ( *(int *)(v61 - 4) >= 0 )
                {
                  v56 = v37;
                  sub_19397C0(&v61);
                  v38 = (uint8_t *)v61;
                  v37 = v56;
                }
                *v38 = (v37 >> 18) | 0xF0;
              }
              g4_std::string::append_str(a3, &v61);
              v14 = (void *)(v61 - 12);
              if ( (uint32_t *)(v61 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v14);
              }
            }
            continue;
          default:
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v62), "Bad escape sequence in string", (int)(uintptr_t)(&v57) + 1);
            result = Json::Reader::addError(a1, (int)(uintptr_t)(v62), a2, v6);
            v9 = (void *)(v62[0] - 12);
            if ( (uint32_t *)(v62[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v62[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              goto LABEL_68;
            }
            break;
        }
      }
      return result;
    }
    v10 = *a3;
    v11 = *(uint32_t *)(*a3 - 12);
    v12 = v11 + 1;
    if ( (unsigned int)(v11 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v10 - 4) > 0 )
    {
      v45 = v5;
      sub_1939B80(a3, v11 + 1);
      v10 = *a3;
      v5 = v45;
      v11 = *(uint32_t *)(*a3 - 12);
    }
    *(uint8_t *)(v10 + v11) = v5;
    v13 = *a3;
    if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
    {
LABEL_27:
      *(uint32_t *)(v13 - 4) = 0;
      *(uint32_t *)(v13 - 12) = v12;
      *(uint8_t *)(v13 + v12) = 0;
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::decodeString  (binary VA: 0x119cdf0)
// Original: Json::Reader::decodeString
// ----------------------------------------------------------------------------
int Json::Reader::decodeString(Json::Reader::Self *a1, int *a2)
{
  char v2;
  int v3;
  Json::Value::Self *v4;
  uint32_t *v5;
  typedef uint8_t _g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef uint8_t _g4_t_v9[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  v8 = &dword_213B814;
  v2 = Json::Reader::decodeString(a1, a2, (int *)&v8);
  v3 = 0;
  if ( v2 != 0 )
  {
    Json::Value::Construct(v9, &v8);
    v4 = (Json::Value::Self *)Json::Reader::currentValue(a1);
    Json::Value::opAssign(v4, (const Json::Value::Self *)v9);
    Json::Value::Destroy((Json::Value::Self *)v9);
    v3 = 1;
  }
  v5 = v8 - 3;
  if ( v8 - 3 != dword_213B808 && __sync_fetch_and_add(v8 - 1, 0xFFFFFFFF) <= 0 )
  {
    v7 = v3;
    g4_std::string::Rep::M_destroy(v5);
    return v7;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::decodeDouble  (binary VA: 0x119cec0)
// Original: Json::Reader::decodeDouble
// ----------------------------------------------------------------------------
int Json::Reader::decodeDouble(Json::Reader::Self *a1, int a2)
{
  void *src;
  int v3;
  int v4;
  int result;
  void *v6;
  void *v7;
  void *v8;
  char *v9;
  Json::Value::Self *v10;
  typedef char *_g4_t_s;
  typedef uint8_t _g4_t_sa;
  typedef uint8_t _g4_t_sb;
  typedef uint8_t _g4_t_sc;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef double _g4_t_v19;
  typedef uint8_t _g4_t_v20[16];
  typedef char *_g4_t_dest[15];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_s)) > _g4_s0 ? (12u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_sa)) > _g4_s1 ? (12u + sizeof(_g4_t_sa)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_sb)) > _g4_s2 ? (12u + sizeof(_g4_t_sb)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_sc)) > _g4_s3 ? (12u + sizeof(_g4_t_sc)) : _g4_s3,
    _g4_s5 = (22u + sizeof(_g4_t_v15)) > _g4_s4 ? (22u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v18)) > _g4_s7 ? (36u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v19)) > _g4_s8 ? (40u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v20)) > _g4_s9 ? (48u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_dest)) > _g4_s10 ? (64u + sizeof(_g4_t_dest)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 12u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 12u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 12u);
  _g4_t_sc &sc = *reinterpret_cast<_g4_t_sc *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 22u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 64u);

  v19 = 0.0;
  src = *(void **)(a2 + 4);
  v3 = *(uint32_t *)(a2 + 8) - (uint32_t)(uintptr_t)(src);
  if ( v3 > 32 )
  {
    sub_119F570((int)(uintptr_t)(dest), src, *(uint32_t *)(a2 + 8), (int)(uintptr_t)(&v15));
    v4 = sscanf(dest[0], (const char *)&off_1B67382, &v19);
    v9 = dest[0] - 12;
    if ( (uint32_t *)dest[0] - 3 != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)dest[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      s = (char *)v4;
      g4_std::string::Rep::M_destroy(v9);
      v4 = (int)(uintptr_t)(s);
    }
  }
  else
  {
    memcpy(dest, src, *(uint32_t *)(a2 + 8) - (uint32_t)(uintptr_t)(src));
    *((uint8_t *)dest + v3) = 0;
    v4 = sscanf((const char *)dest, (const char *)&off_1B67382, &v19);
  }
  if ( v4 == 1 )
  {
    Json::Value::Construct((Json::Value::Self *)v20, v19);
    v10 = (Json::Value::Self *)Json::Reader::currentValue(a1);
    Json::Value::opAssign(v10, (const Json::Value::Self *)v20);
    Json::Value::Destroy((Json::Value::Self *)v20);
    return 1;
  }
  else
  {
    sub_119F570((int)(uintptr_t)(&v18), *(void **)(a2 + 4), *(uint32_t *)(a2 + 8), (int)(uintptr_t)(&v15) + 2);
    sub_59E340(&v17, (char *)a0, &v18);
    g4_std::string::construct_copy(&v16, &v17);
    g4_std::string::append((int)(uintptr_t)(&v16), "' is not a number.", 0x12u);
    result = Json::Reader::addError(a1, (int)(uintptr_t)(&v16), (int *)a2, 0);
    v6 = (void *)(v16 - 12);
    if ( (uint32_t *)(v16 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
    {
      sa = result;
      g4_std::string::Rep::M_destroy(v6);
      result = sa;
    }
    v7 = (void *)(v17 - 12);
    if ( (uint32_t *)(v17 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
    {
      sc = result;
      g4_std::string::Rep::M_destroy(v7);
      result = sc;
    }
    v8 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      sb = result;
      g4_std::string::Rep::M_destroy(v8);
      return sb;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::decodeNumber  (binary VA: 0x119d160)
// Original: Json::Reader::decodeNumber
// ----------------------------------------------------------------------------
int Json::Reader::decodeNumber(Json::Reader::Self *a1, int *a2)
{
  unsigned int v2;
  char *v3;
  bool v4;
  char *v5;
  char v6;
  bool v7; // si
  char *v8;
  int v9;
  char v10; // di
  unsigned int v11;
  char *v12;
  char v13;
  unsigned int v14;
  const Json::Value::Self *v15;
  Json::Value::Self *v16;
  int result;
  void *v18;
  void *v19;
  void *v20;
  typedef uint8_t _g4_t_v21;
  typedef uint8_t _g4_t_v22;
  typedef uint8_t _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v23)) > _g4_s2 ? (4u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v24)) > _g4_s3 ? (8u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v25)) > _g4_s4 ? (16u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v26)) > _g4_s5 ? (20u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v27)) > _g4_s6 ? (24u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v28)) > _g4_s7 ? (28u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v29)) > _g4_s8 ? (32u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v30)) > _g4_s9 ? (48u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v31)) > _g4_s10 ? (64u + sizeof(_g4_t_v31)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);

  v24 = (char *)a2[1];
  v2 = a2[2];
  if ( v24 == (char *)v2 )
    goto LABEL_13;
  v3 = (char *)a2[1];
  v4 = false;
  v5 = (char *)a2[2];
  do
  {
    while ( v4 )
    {
LABEL_8:
      if ( ++v3 == v5 )
        goto LABEL_12;
    }
    v6 = *v3;
    if ( *v3 != 101 && v6 != 46 && v6 != 43 && v6 != 69 )
    {
      if ( v6 == 45 )
        v4 = v3 != v24;
      goto LABEL_8;
    }
    ++v3;
    v4 = true;
  }
  while ( v3 != v5 );
LABEL_12:
  v7 = v4;
  v2 = a2[2];
  if ( v7 )
    return Json::Reader::decodeDouble(a1, (int)(uintptr_t)(a2));
LABEL_13:
  if ( *v24 == 45 )
  {
    v8 = v24 + 1;
    v9 = 214748364;
  }
  else
  {
    v8 = (char *)a2[1];
    v9 = 429496729;
  }
  if ( (unsigned int)(uintptr_t)(v8) >= v2 )
  {
    v14 = 0;
    goto LABEL_21;
  }
  v10 = *v8;
  if ( (uint8_t)(*v8 - 48) > 9u )
  {
LABEL_28:
    sub_119F570((int)(uintptr_t)(&v26), v24, v2, (int)(uintptr_t)(&v25));
    sub_59E340(&v27, (char *)a0, &v26);
    g4_std::string::construct_copy(&v28, &v27);
    g4_std::string::append((int)(uintptr_t)(&v28), "' is not a number.", 0x12u);
    result = Json::Reader::addError(a1, (int)(uintptr_t)(&v28), a2, 0);
    v18 = (void *)(v28 - 12);
    if ( (uint32_t *)(v28 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
    {
      v22 = result;
      g4_std::string::Rep::M_destroy(v18);
      result = v22;
    }
    v19 = (void *)(v27 - 12);
    if ( (uint32_t *)(v27 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
    {
      v23 = result;
      g4_std::string::Rep::M_destroy(v19);
      result = v23;
    }
    v20 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      v21 = result;
      g4_std::string::Rep::M_destroy(v20);
      return v21;
    }
  }
  else
  {
    v11 = v9;
    v12 = v8 + 1;
    v13 = v10;
    v14 = 0;
    while ( 1 )
    {
      v14 = v13 + 10 * v14 - 48;
      if ( v12 == (char *)v2 )
        break;
      v13 = *v12++;
      if ( (uint8_t)(v13 - 48) > 9u )
        goto LABEL_28;
      if ( v11 <= v14 )
        return Json::Reader::decodeDouble(a1, (int)(uintptr_t)(a2));
    }
LABEL_21:
    if ( *v24 == 45 )
    {
      v15 = (const Json::Value::Self *)v29;
      Json::Value::Construct((Json::Value::Self *)v29, -v14);
    }
    else if ( v14 <= 0x7FFFFFFF )
    {
      v15 = (const Json::Value::Self *)v30;
      Json::Value::Construct((Json::Value::Self *)v30, v14);
    }
    else
    {
      v15 = (const Json::Value::Self *)v31;
      Json::Value::Construct((Json::Value::Self *)v31, v14);
    }
    v16 = (Json::Value::Self *)Json::Reader::currentValue(a1);
    Json::Value::opAssign(v16, v15);
    Json::Value::Destroy(v15);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::expectToken  (binary VA: 0x119d4a0)
// Original: Json::Reader::expectToken
// ----------------------------------------------------------------------------
int Json::Reader::expectToken(Json::Reader::Self *a1, int a2, int *a3, char *a4)
{
  int result;
  void *v5;
  typedef uint8_t _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v7)) > _g4_s1 ? (26u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 26u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  Json::Reader::readToken(a1, a3);
  result = 1;
  if ( *a3 != a2 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), a4, (int)(uintptr_t)(&v7));
    result = Json::Reader::addError(a1, (int)(uintptr_t)(v8), a3, 0);
    v5 = (void *)(v8[0] - 12);
    if ( (uint32_t *)(v8[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v6 = result;
      g4_std::string::Rep::M_destroy(v5);
      return v6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::recoverFromError  (binary VA: 0x119d560)
// Original: Json::Reader::recoverFromError
// ----------------------------------------------------------------------------
int Json::Reader::recoverFromError(Json::Reader::Self *a1, int a2)
{
  unsigned int v2;
  int v3;
  int v4;
  unsigned int v5;
  bool v6;
  std::deque<Json::Reader::ErrorInfo> *v7;
  unsigned int v8;
  unsigned int v9;
  uint32_t *v10;
  int *v11;
  int v12;
  unsigned int v13;
  std::deque<Json::Reader::ErrorInfo> *v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int *v25;
  int v26;
  unsigned int v27;
  int v28;
  uint32_t *v29;
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  int v34;
  std::deque<Json::Reader::ErrorInfo> *v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  void **v40;
  void *v41;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  unsigned int v51;
  void **v52;
  void *v53;
  std::deque<Json::Reader::ErrorInfo> *i;
  int v55;
  unsigned int v56;
  int v57;
  unsigned int v58;
  unsigned int v59;
  uint32_t *v60;
  int v61;
  unsigned int v62;
  std::deque<Json::Reader::ErrorInfo> *v63;
  std::deque<Json::Reader::ErrorInfo> *v64;
  unsigned int v65;
  int v66;
  unsigned int v67;
  int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  uint32_t *k;
  int v73;
  unsigned int v74;
  uint32_t *v75;
  int v76;
  uint32_t *v77;
  uint32_t *v78;
  int v79;
  uint32_t *v80;
  int j;
  int v82;
  typedef int _g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef unsigned int _g4_t_v85;
  typedef unsigned int _g4_t_v86;
  typedef unsigned int _g4_t_v87;
  typedef uint32_t *_g4_t_v88;
  typedef uint32_t *_g4_t_v89;
  typedef unsigned int _g4_t_v90;
  typedef unsigned int _g4_t_v91;
  typedef unsigned int _g4_t_v92;
  typedef unsigned int _g4_t_v93;
  typedef unsigned int _g4_t_v94;
  typedef uint32_t *_g4_t_v95;
  typedef unsigned int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef uint32_t *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef uint32_t *_g4_t_v105;
  typedef uint32_t *_g4_t_v106;
  typedef uint32_t *_g4_t_v107;
  typedef uint32_t *_g4_t_v108;
  typedef int _g4_t_v109;
  typedef unsigned int _g4_t_v110;
  typedef unsigned int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef std::deque<Json::Reader::ErrorInfo> *_g4_t_v113;
  typedef std::deque<Json::Reader::ErrorInfo> *_g4_t_v114;
  typedef std::deque<Json::Reader::ErrorInfo> *_g4_t_v115;
  typedef std::deque<Json::Reader::ErrorInfo> *_g4_t_v116;
  typedef std::deque<Json::Reader::ErrorInfo> *_g4_t_v117;
  typedef std::deque<Json::Reader::ErrorInfo> *_g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121[3];
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef uint32_t *_g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef uint32_t *_g4_t_v130;
  typedef int _g4_t_v131;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v83)) > _g4_s0 ? (4u + sizeof(_g4_t_v83)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v84)) > _g4_s1 ? (8u + sizeof(_g4_t_v84)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v85)) > _g4_s2 ? (12u + sizeof(_g4_t_v85)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v86)) > _g4_s3 ? (12u + sizeof(_g4_t_v86)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v87)) > _g4_s4 ? (12u + sizeof(_g4_t_v87)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v88)) > _g4_s5 ? (12u + sizeof(_g4_t_v88)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v89)) > _g4_s6 ? (12u + sizeof(_g4_t_v89)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v90)) > _g4_s7 ? (12u + sizeof(_g4_t_v90)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v91)) > _g4_s8 ? (16u + sizeof(_g4_t_v91)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v92)) > _g4_s9 ? (16u + sizeof(_g4_t_v92)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v93)) > _g4_s10 ? (16u + sizeof(_g4_t_v93)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v94)) > _g4_s11 ? (16u + sizeof(_g4_t_v94)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v95)) > _g4_s12 ? (20u + sizeof(_g4_t_v95)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v96)) > _g4_s13 ? (20u + sizeof(_g4_t_v96)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v97)) > _g4_s14 ? (20u + sizeof(_g4_t_v97)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v98)) > _g4_s15 ? (20u + sizeof(_g4_t_v98)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v99)) > _g4_s16 ? (24u + sizeof(_g4_t_v99)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v100)) > _g4_s17 ? (24u + sizeof(_g4_t_v100)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v101)) > _g4_s18 ? (24u + sizeof(_g4_t_v101)) : _g4_s18,
    _g4_s20 = (24u + sizeof(_g4_t_v102)) > _g4_s19 ? (24u + sizeof(_g4_t_v102)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v103)) > _g4_s20 ? (28u + sizeof(_g4_t_v103)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v104)) > _g4_s21 ? (28u + sizeof(_g4_t_v104)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v105)) > _g4_s22 ? (28u + sizeof(_g4_t_v105)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v106)) > _g4_s23 ? (32u + sizeof(_g4_t_v106)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v107)) > _g4_s24 ? (32u + sizeof(_g4_t_v107)) : _g4_s24,
    _g4_s26 = (32u + sizeof(_g4_t_v108)) > _g4_s25 ? (32u + sizeof(_g4_t_v108)) : _g4_s25,
    _g4_s27 = (32u + sizeof(_g4_t_v109)) > _g4_s26 ? (32u + sizeof(_g4_t_v109)) : _g4_s26,
    _g4_s28 = (36u + sizeof(_g4_t_v110)) > _g4_s27 ? (36u + sizeof(_g4_t_v110)) : _g4_s27,
    _g4_s29 = (36u + sizeof(_g4_t_v111)) > _g4_s28 ? (36u + sizeof(_g4_t_v111)) : _g4_s28,
    _g4_s30 = (36u + sizeof(_g4_t_v112)) > _g4_s29 ? (36u + sizeof(_g4_t_v112)) : _g4_s29,
    _g4_s31 = (40u + sizeof(_g4_t_v113)) > _g4_s30 ? (40u + sizeof(_g4_t_v113)) : _g4_s30,
    _g4_s32 = (40u + sizeof(_g4_t_v114)) > _g4_s31 ? (40u + sizeof(_g4_t_v114)) : _g4_s31,
    _g4_s33 = (40u + sizeof(_g4_t_v115)) > _g4_s32 ? (40u + sizeof(_g4_t_v115)) : _g4_s32,
    _g4_s34 = (40u + sizeof(_g4_t_v116)) > _g4_s33 ? (40u + sizeof(_g4_t_v116)) : _g4_s33,
    _g4_s35 = (40u + sizeof(_g4_t_v117)) > _g4_s34 ? (40u + sizeof(_g4_t_v117)) : _g4_s34,
    _g4_s36 = (40u + sizeof(_g4_t_v118)) > _g4_s35 ? (40u + sizeof(_g4_t_v118)) : _g4_s35,
    _g4_s37 = (56u + sizeof(_g4_t_v119)) > _g4_s36 ? (56u + sizeof(_g4_t_v119)) : _g4_s36,
    _g4_s38 = (60u + sizeof(_g4_t_v120)) > _g4_s37 ? (60u + sizeof(_g4_t_v120)) : _g4_s37,
    _g4_s39 = (76u + sizeof(_g4_t_v121)) > _g4_s38 ? (76u + sizeof(_g4_t_v121)) : _g4_s38,
    _g4_s40 = (88u + sizeof(_g4_t_v122)) > _g4_s39 ? (88u + sizeof(_g4_t_v122)) : _g4_s39,
    _g4_s41 = (92u + sizeof(_g4_t_v123)) > _g4_s40 ? (92u + sizeof(_g4_t_v123)) : _g4_s40,
    _g4_s42 = (96u + sizeof(_g4_t_v124)) > _g4_s41 ? (96u + sizeof(_g4_t_v124)) : _g4_s41,
    _g4_s43 = (100u + sizeof(_g4_t_v125)) > _g4_s42 ? (100u + sizeof(_g4_t_v125)) : _g4_s42,
    _g4_s44 = (104u + sizeof(_g4_t_v126)) > _g4_s43 ? (104u + sizeof(_g4_t_v126)) : _g4_s43,
    _g4_s45 = (108u + sizeof(_g4_t_v127)) > _g4_s44 ? (108u + sizeof(_g4_t_v127)) : _g4_s44,
    _g4_s46 = (112u + sizeof(_g4_t_v128)) > _g4_s45 ? (112u + sizeof(_g4_t_v128)) : _g4_s45,
    _g4_s47 = (116u + sizeof(_g4_t_v129)) > _g4_s46 ? (116u + sizeof(_g4_t_v129)) : _g4_s46,
    _g4_s48 = (120u + sizeof(_g4_t_v130)) > _g4_s47 ? (120u + sizeof(_g4_t_v130)) : _g4_s47,
    _g4_s49 = (124u + sizeof(_g4_t_v131)) > _g4_s48 ? (124u + sizeof(_g4_t_v131)) : _g4_s48
  };
  alignas(16) uint8_t _g4_sf[_g4_s49];
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 4u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 8u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 12u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 12u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 12u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 12u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 12u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 12u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 16u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 16u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 16u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 16u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 20u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 20u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 20u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 20u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 24u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 24u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 24u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 24u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 28u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 28u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 28u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 32u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 32u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 32u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 32u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 36u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 36u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 36u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 40u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 40u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 40u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 40u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 40u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 40u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 56u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 60u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 76u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 88u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 92u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 96u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 100u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 104u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 108u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 112u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 116u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 120u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 124u);

  v110 = -858993459 * ((*((uint32_t *)a1 + 16) - *((uint32_t *)a1 + 17)) >> 2)
       + 5 * (5 * ((*((uint32_t *)a1 + 19) - *((uint32_t *)a1 + 15)) >> 2) - 5)
       - 858993459 * ((*((uint32_t *)a1 + 14) - *((uint32_t *)a1 + 12)) >> 2);
  v120 = 20 * v110;
  do
  {
    if ( (uint8_t)Json::Reader::readToken(a1, v121) != 0 )
      continue;
    v125 = &dword_213B814;
    v122 = 0;
    v123 = 0;
    v124 = 0;
    v2 = *((uint32_t *)a1 + 19);
    v126 = 0;
    v95 = (uint32_t *)v2;
    v106 = *((uint32_t **)a1 + 15);
    v91 = *((uint32_t *)a1 + 16);
    v103 = *((uint32_t *)a1 + 17);
    v99 = *((uint32_t *)a1 + 14);
    v3 = *((uint32_t *)a1 + 12);
    v4 = -858993459 * ((int)(v91 - v103) >> 2);
    v5 = v4 + 5 * (5 * ((int)(v2 - (uint32_t)(uintptr_t)(v106)) >> 2) - 5) - 858993459 * ((v99 - v3) >> 2);
    v6 = v110 < v5;
    if ( v110 <= v5 )
    {
      v15 = &dword_213B814;
      if ( !v6 )
        goto LABEL_25;
      v119 = *((uint32_t *)a1 + 13);
      v30 = -858993459 * ((v3 - v119) >> 2) + v110;
      if ( v30 < 0 )
      {
        v31 = ~(~v30 / 0x19u);
      }
      else
      {
        if ( v30 <= 24 )
        {
          v116 = (std::deque<Json::Reader::ErrorInfo> *)(v120 + v3);
          goto LABEL_55;
        }
        v31 = v30 / 25;
      }
      v106 += v31;
      v119 = *v106;
      v99 = *v106 + 500;
      v116 = (std::deque<Json::Reader::ErrorInfo> *)(*v106 + 20 * (v30 - 25 * v31));
LABEL_55:
      if ( v2 > (unsigned int)(uintptr_t)(v106 + 1) )
      {
        v88 = v106 + 1;
        do
        {
          v32 = 0;
          v33 = *v88 + 12;
          do
          {
            v34 = *(uint32_t *)(v33 + v32);
            if ( (uint32_t *)(v34 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v34 - 12));
            }
            v32 += 20;
          }
          while ( v32 != 500 );
          ++v88;
        }
        while ( v95 > v88 );
      }
      if ( v95 == v106 )
      {
        for ( i = v116;
              (std::deque<Json::Reader::ErrorInfo> *)v91 != i;
              i = (std::deque<Json::Reader::ErrorInfo> *)((char *)i + 20) )
        {
          v55 = *((uint32_t *)i + 3);
          if ( (uint32_t *)(v55 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v55 - 12));
          }
        }
      }
      else
      {
        if ( v116 != (std::deque<Json::Reader::ErrorInfo> *)v99 )
        {
          v35 = v116;
          do
          {
            v36 = *((uint32_t *)v35 + 3);
            if ( (uint32_t *)(v36 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v36 - 12));
            }
            v35 = (std::deque<Json::Reader::ErrorInfo> *)((char *)v35 + 20);
          }
          while ( (std::deque<Json::Reader::ErrorInfo> *)v99 != v35 );
        }
        if ( v91 != v103 )
        {
          v37 = v103;
          do
          {
            v38 = *(uint32_t *)(v37 + 12);
            if ( (uint32_t *)(v38 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v38 - 12));
            }
            v37 += 20;
          }
          while ( v91 != v37 );
        }
      }
      v39 = *((uint32_t *)a1 + 19) + 4;
      if ( (unsigned int)(uintptr_t)(v106 + 1) < v39 )
      {
        v40 = (void **)(v106 + 1);
        do
        {
          v41 = *v40++;
          opDelete(v41);
        }
        while ( v39 > (unsigned int)(uintptr_t)(v40) );
      }
      *((uint32_t *)a1 + 16) = (uint32_t)(uintptr_t)(v116);
      *((uint32_t *)a1 + 18) = v99;
      *((uint32_t *)a1 + 17) = v119;
      *((uint32_t *)a1 + 19) = (uint32_t)(uintptr_t)(v106);
      v15 = v125;
      goto LABEL_25;
    }
    v85 = v110 - v5;
    v113 = (std::deque<Json::Reader::ErrorInfo> *)((Json::Reader::Self *)((char *)a1 + 40));
    v7 = *((std::deque<Json::Reader::ErrorInfo> **)a1 + 18);
    if ( v91 == v3 )
    {
      v97 = *((uint32_t *)a1 + 13);
      v56 = -858993459 * ((int)(v91 - v97) >> 2);
      v57 = v56;
      if ( v85 > v56 )
      {
        if ( v85 - v56 > 214748364 - v5 )
          goto LABEL_169;
        v58 = (v85 - v56 + 24) / 0x19;
        v94 = v58;
        if ( v58 > ((int)(uintptr_t)(v106) - *((uint32_t *)a1 + 10)) >> 2 )
        {
          g4_std::deque_Json_Reader_ErrorInfo_1d5bf2::M_reallocate_map(v113, v58, true);
          v106 = *((uint32_t **)a1 + 15);
        }
        v59 = 2;
        v60 = v106;
        if ( v94 != 0 )
        {
          while ( 1 )
          {
            v60[-v59 + 1] = opNew(0x1F4u);
            if ( v94 < v59 )
              break;
            ++v59;
            v60 = *((uint32_t **)a1 + 15);
          }
          v91 = *((uint32_t *)a1 + 12);
          v57 = -858993459 * ((int)(v91 - *((uint32_t *)a1 + 13)) >> 2);
          v97 = *((uint32_t *)a1 + 13);
          v99 = *((uint32_t *)a1 + 14);
          v106 = *((uint32_t **)a1 + 15);
        }
        else
        {
          v91 = *((uint32_t *)a1 + 12);
          v97 = *((uint32_t *)a1 + 13);
          v99 = *((uint32_t *)a1 + 14);
          v57 = -858993459 * ((int)(v91 - v97) >> 2);
        }
      }
      v61 = v57 - v85;
      if ( (int)(v57 - v85) < 0 )
      {
        v62 = ~(~v61 / 0x19u);
      }
      else
      {
        if ( v61 <= 24 )
        {
          v118 = (std::deque<Json::Reader::ErrorInfo> *)(v91 - 20 * v85);
LABEL_120:
          v63 = (std::deque<Json::Reader::ErrorInfo> *)v99;
          v105 = v106;
          v64 = v118;
          while ( (std::deque<Json::Reader::ErrorInfo> *)v91 != v64 )
          {
            if ( v64 != nullptr )
            {
              *(uint32_t *)v64 = v122;
              *((uint32_t *)v64 + 1) = v123;
              *((uint32_t *)v64 + 2) = v124;
              g4_std::string::construct_copy((char *)v64 + 12, &v125);
              *((uint32_t *)v64 + 4) = v126;
            }
            v64 = (std::deque<Json::Reader::ErrorInfo> *)((char *)v64 + 20);
            if ( v63 == v64 )
            {
              v64 = (std::deque<Json::Reader::ErrorInfo> *)v105[1];
              ++v105;
              v63 = (std::deque<Json::Reader::ErrorInfo> *)((char *)v64 + 500);
            }
          }
          *((uint32_t *)a1 + 14) = v99;
          *((uint32_t *)a1 + 12) = (uint32_t)(uintptr_t)(v118);
          *((uint32_t *)a1 + 13) = v97;
          *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)(v106);
          v15 = v125;
          goto LABEL_25;
        }
        v62 = v61 / 25;
      }
      v106 += v62;
      v97 = *v106;
      v99 = *v106 + 500;
      v118 = (std::deque<Json::Reader::ErrorInfo> *)(*v106 + 20 * (v61 - 25 * v62));
      goto LABEL_120;
    }
    v8 = -858993459 * ((int)((int)(uintptr_t)(v7) - v91) >> 2) - 1;
    if ( v85 > v8 )
    {
      if ( v85 - v8 > 214748364 - v5 )
        goto LABEL_173;
      v92 = (v85 - v8 + 24) / 0x19;
      if ( v92 + 1 > *((uint32_t *)a1 + 11) - (((int)(uintptr_t)(v95) - *((uint32_t *)a1 + 10)) >> 2) )
      {
        g4_std::deque_Json_Reader_ErrorInfo_1d5bf2::M_reallocate_map(v113, v92, false);
        v95 = *((uint32_t **)a1 + 19);
      }
      v9 = 1;
      v10 = v95;
      if ( v92 != 0 )
      {
        while ( 1 )
        {
          v11 = (int *)(&v10[v9++]);
          *v11 = opNew(0x1F4u);
          if ( v92 < v9 )
            break;
          v10 = *((uint32_t **)a1 + 19);
        }
        v91 = *((uint32_t *)a1 + 16);
        v103 = *((uint32_t *)a1 + 17);
        v7 = *((std::deque<Json::Reader::ErrorInfo> **)a1 + 18);
        v95 = *((uint32_t **)a1 + 19);
        v4 = -858993459 * ((int)(v91 - v103) >> 2);
      }
      else
      {
        v91 = *((uint32_t *)a1 + 16);
        v103 = *((uint32_t *)a1 + 17);
        v7 = *((std::deque<Json::Reader::ErrorInfo> **)a1 + 18);
        v4 = -858993459 * ((int)(v91 - v103) >> 2);
      }
    }
    v12 = v85 + v4;
    if ( v12 < 0 )
    {
      v13 = ~(~v12 / 0x19u);
      goto LABEL_17;
    }
    if ( v12 > 24 )
    {
      v13 = v12 / 25;
LABEL_17:
      v107 = &v95[v13];
      v103 = *v107;
      v114 = (std::deque<Json::Reader::ErrorInfo> *)(*v107 + 500);
      v100 = *v107 + 20 * (v12 - 25 * v13);
      goto LABEL_18;
    }
    v114 = v7;
    v107 = v95;
    v100 = v91 + 20 * v85;
LABEL_18:
    v14 = (std::deque<Json::Reader::ErrorInfo> *)v91;
    while ( (std::deque<Json::Reader::ErrorInfo> *)v100 != v14 )
    {
      if ( v14 != nullptr )
      {
        *(uint32_t *)v14 = v122;
        *((uint32_t *)v14 + 1) = v123;
        *((uint32_t *)v14 + 2) = v124;
        g4_std::string::construct_copy((char *)v14 + 12, &v125);
        *((uint32_t *)v14 + 4) = v126;
      }
      v14 = (std::deque<Json::Reader::ErrorInfo> *)((char *)v14 + 20);
      if ( v7 == v14 )
      {
        v14 = (std::deque<Json::Reader::ErrorInfo> *)v95[1];
        ++v95;
        v7 = (std::deque<Json::Reader::ErrorInfo> *)((char *)v14 + 500);
      }
    }
    *((uint32_t *)a1 + 18) = (uint32_t)(uintptr_t)(v114);
    *((uint32_t *)a1 + 16) = v100;
    *((uint32_t *)a1 + 17) = v103;
    *((uint32_t *)a1 + 19) = (uint32_t)(uintptr_t)(v107);
    v15 = v125;
LABEL_25:
    if ( v15 - 3 != dword_213B808 && __sync_fetch_and_add(v15 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v15 - 3);
  }
  while ( v121[0] != a2 && v121[0] != 0 );
  v16 = &dword_213B814;
  v127 = 0;
  v128 = 0;
  v129 = 0;
  v131 = 0;
  v130 = &dword_213B814;
  v96 = *((uint32_t *)a1 + 19);
  v108 = *((uint32_t **)a1 + 15);
  v17 = *((uint32_t *)a1 + 16) - *((uint32_t *)a1 + 17);
  v93 = *((uint32_t *)a1 + 16);
  v104 = *((uint32_t *)a1 + 17);
  v18 = -858993459 * (v17 >> 2);
  v101 = *((uint32_t *)a1 + 14);
  v19 = *((uint32_t *)a1 + 12);
  v20 = 5 * (5 * ((int)(v96 - (uint32_t)(uintptr_t)(v108)) >> 2) - 5) - 858993459 * (v17 >> 2) - 858993459 * ((v101 - v19) >> 2);
  if ( v110 <= v20 )
  {
    if ( v110 >= v20 )
      goto LABEL_75;
    v117 = *((std::deque<Json::Reader::ErrorInfo> **)a1 + 13);
    v43 = -858993459 * ((v19 - (int)(uintptr_t)(v117)) >> 2) + v110;
    if ( v43 < 0 )
    {
      v65 = ~(~v43 / 0x19u);
    }
    else
    {
      if ( v43 <= 24 )
      {
        v112 = v120 + v19;
LABEL_81:
        if ( v96 > (unsigned int)(uintptr_t)(v108 + 1) )
        {
          v89 = v108 + 1;
          do
          {
            v44 = 0;
            v45 = *v89 + 12;
            do
            {
              v46 = *(uint32_t *)(v45 + v44);
              if ( (uint32_t *)(v46 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v46 - 12));
              }
              v44 += 20;
            }
            while ( v44 != 500 );
            ++v89;
          }
          while ( v96 > (unsigned int)(uintptr_t)(v89) );
        }
        if ( (uint32_t *)v96 == v108 )
        {
          for ( j = v112; v93 != j; j += 20 )
          {
            v82 = *(uint32_t *)(j + 12);
            if ( (uint32_t *)(v82 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v82 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v82 - 12));
            }
          }
        }
        else
        {
          if ( v112 != v101 )
          {
            v47 = v112;
            do
            {
              v48 = *(uint32_t *)(v47 + 12);
              if ( (uint32_t *)(v48 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v48 - 12));
              }
              v47 += 20;
            }
            while ( v101 != v47 );
          }
          if ( v93 != v104 )
          {
            v49 = v104;
            do
            {
              v50 = *(uint32_t *)(v49 + 12);
              if ( (uint32_t *)(v50 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v50 - 12));
              }
              v49 += 20;
            }
            while ( v93 != v49 );
          }
        }
        v51 = *((uint32_t *)a1 + 19) + 4;
        if ( (unsigned int)(uintptr_t)(v108 + 1) < v51 )
        {
          v52 = (void **)(v108 + 1);
          do
          {
            v53 = *v52++;
            opDelete(v53);
          }
          while ( v51 > (unsigned int)(uintptr_t)(v52) );
        }
        *((uint32_t *)a1 + 16) = v112;
        *((uint32_t *)a1 + 17) = (uint32_t)(uintptr_t)(v117);
        *((uint32_t *)a1 + 18) = v101;
        *((uint32_t *)a1 + 19) = (uint32_t)(uintptr_t)(v108);
        v16 = v130;
        goto LABEL_75;
      }
      v65 = v43 / 25;
    }
    v108 += v65;
    v117 = (std::deque<Json::Reader::ErrorInfo> *)*v108;
    v101 = *v108 + 500;
    v112 = *v108 + 20 * (v43 - 25 * v65);
    goto LABEL_81;
  }
  v111 = v110 - v20;
  v115 = (std::deque<Json::Reader::ErrorInfo> *)((Json::Reader::Self *)((char *)a1 + 40));
  v21 = *((uint32_t *)a1 + 18);
  if ( v93 == v19 )
  {
    v66 = *((uint32_t *)a1 + 13);
    v67 = -858993459 * ((int)(v93 - v66) >> 2);
    v68 = v67;
    if ( v111 > v67 )
    {
      v69 = v111 - v67;
      if ( v69 > 214748364 - v20 )
LABEL_169:
        sub_1900180("deque::_M_new_elements_at_front");
      v70 = (v69 + 24) / 0x19;
      if ( v70 > ((int)(uintptr_t)(v108) - *((uint32_t *)a1 + 10)) >> 2 )
      {
        g4_std::deque_Json_Reader_ErrorInfo_1d5bf2::M_reallocate_map(v115, v70, true);
        v108 = *((uint32_t **)a1 + 15);
      }
      if ( v70 != 0 )
      {
        v71 = 2;
        for ( k = v108; ; k = *((uint32_t **)a1 + 15) )
        {
          k[-v71 + 1] = opNew(0x1F4u);
          if ( v70 < v71 )
            break;
          ++v71;
        }
        v93 = *((uint32_t *)a1 + 12);
        v66 = *((uint32_t *)a1 + 13);
        v101 = *((uint32_t *)a1 + 14);
        v108 = *((uint32_t **)a1 + 15);
        v68 = -858993459 * ((int)(v93 - v66) >> 2);
      }
      else
      {
        v93 = *((uint32_t *)a1 + 12);
        v66 = *((uint32_t *)a1 + 13);
        v101 = *((uint32_t *)a1 + 14);
        v68 = -858993459 * ((int)(v93 - v66) >> 2);
      }
    }
    v73 = v68 - v111;
    if ( (int)(v68 - v111) < 0 )
    {
      v74 = ~(~v73 / 0x19u);
    }
    else
    {
      if ( v73 <= 24 )
      {
        v75 = v108;
        v76 = v93 - 20 * v111;
LABEL_148:
        v77 = v75;
        v90 = v101;
        v98 = v75;
        v78 = (uint32_t *)v76;
        v79 = v66;
LABEL_149:
        v80 = v78;
        while ( (uint32_t *)v93 != v80 )
        {
          if ( v80 != nullptr )
          {
            *v80 = v127;
            v80[1] = v128;
            v80[2] = v129;
            v83 = v76;
            v84 = v77;
            g4_std::string::construct_copy(v80 + 3, &v130);
            v80[4] = v131;
            v77 = v84;
            v76 = v83;
          }
          v80 += 5;
          if ( (uint32_t *)v90 == v80 )
          {
            v78 = (uint32_t *)v77[1];
            ++v77;
            v90 = (unsigned int)(uintptr_t)(v78 + 125);
            goto LABEL_149;
          }
        }
        *((uint32_t *)a1 + 13) = v79;
        *((uint32_t *)a1 + 12) = v76;
        *((uint32_t *)a1 + 14) = v101;
        *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)(v98);
        v16 = v130;
        goto LABEL_75;
      }
      v74 = v73 / 25;
    }
    v75 = &v108[v74];
    v66 = *v75;
    v101 = *v75 + 500;
    v76 = *v75 + 20 * (v73 - 25 * v74);
    goto LABEL_148;
  }
  v22 = -858993459 * ((int)(v21 - v93) >> 2) - 1;
  if ( v111 > v22 )
  {
    if ( v111 - v22 > 214748364 - v20 )
LABEL_173:
      sub_1900180("deque::_M_new_elements_at_back");
    v86 = (v111 - v22 + 24) / 0x19;
    if ( v86 + 1 > *((uint32_t *)a1 + 11) - ((int)(v96 - *((uint32_t *)a1 + 10)) >> 2) )
    {
      g4_std::deque_Json_Reader_ErrorInfo_1d5bf2::M_reallocate_map(v115, v86, false);
      v96 = *((uint32_t *)a1 + 19);
    }
    v23 = 1;
    v24 = v96;
    if ( v86 != 0 )
    {
      while ( 1 )
      {
        v25 = (int *)(v24 + 4 * v23++);
        *v25 = opNew(0x1F4u);
        if ( v86 < v23 )
          break;
        v24 = *((uint32_t *)a1 + 19);
      }
      v104 = *((uint32_t *)a1 + 17);
      v93 = *((uint32_t *)a1 + 16);
      v96 = *((uint32_t *)a1 + 19);
      v21 = *((uint32_t *)a1 + 18);
      v18 = -858993459 * ((int)(v93 - v104) >> 2);
    }
    else
    {
      v104 = *((uint32_t *)a1 + 17);
      v21 = *((uint32_t *)a1 + 18);
      v93 = *((uint32_t *)a1 + 16);
      v18 = -858993459 * ((int)(v93 - v104) >> 2);
    }
  }
  v26 = v111 + v18;
  if ( v26 < 0 )
  {
    v27 = ~(~v26 / 0x19u);
LABEL_44:
    v102 = (int *)(v96 + 4 * v27);
    v104 = *v102;
    v109 = *v102 + 500;
    v28 = *v102 + 20 * (v26 - 25 * v27);
  }
  else
  {
    if ( v26 > 24 )
    {
      v27 = v26 / 25;
      goto LABEL_44;
    }
    v109 = v21;
    v28 = v93 + 20 * v111;
    v102 = (int *)v96;
  }
  v87 = v21;
  v29 = (uint32_t *)v93;
  while ( v29 != (uint32_t *)v28 )
  {
    if ( v29 != nullptr )
    {
      *v29 = v127;
      v29[1] = v128;
      v29[2] = v129;
      g4_std::string::construct_copy(v29 + 3, &v130);
      v29[4] = v131;
    }
    v29 += 5;
    if ( (uint32_t *)v87 == v29 )
    {
      v29 = *(uint32_t **)(v96 + 4);
      v96 += 4;
      v87 = (unsigned int)(uintptr_t)(v29 + 125);
    }
  }
  v16 = v130;
  *((uint32_t *)a1 + 16) = (uint32_t)(uintptr_t)(v29);
  *((uint32_t *)a1 + 17) = v104;
  *((uint32_t *)a1 + 18) = v109;
  *((uint32_t *)a1 + 19) = (uint32_t)(uintptr_t)(v102);
LABEL_75:
  if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v16 - 3);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::addErrorAndRecover  (binary VA: 0x119e770)
// Original: Json::Reader::addErrorAndRecover
// ----------------------------------------------------------------------------
int Json::Reader::addErrorAndRecover(Json::Reader::Self *a1, int a2, int *a3, int a4)
{
  Json::Reader::addError(a1, a2, a3, 0);
  return Json::Reader::recoverFromError(a1, a4);
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::readObject  (binary VA: 0x119e7d0)
// Original: Json::Reader::readObject
// ----------------------------------------------------------------------------
int Json::Reader::readObject(void **a1)
{
  Json::Value::Self *v1;
  int v2;
  int result;
  void *v4;
  int v5;
  char Token;
  Json::Value::Self *v7;
  char Value;
  char *v9;
  int v10;
  char v11;
  void **v12;
  char *v13;
  typedef uint8_t _g4_t_v14;
  typedef char _g4_t_v15;
  typedef uint8_t _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef Json::Value::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23[3];
  typedef int _g4_t_v24[3];
  typedef int _g4_t_v25[3];
  typedef uint8_t _g4_t_v26[44];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (17u + sizeof(_g4_t_v17)) > _g4_s3 ? (17u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v19)) > _g4_s5 ? (28u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v20)) > _g4_s6 ? (32u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v21)) > _g4_s7 ? (36u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v22)) > _g4_s8 ? (40u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v23)) > _g4_s9 ? (44u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v24)) > _g4_s10 ? (56u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v25)) > _g4_s11 ? (68u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v26)) > _g4_s12 ? (80u + sizeof(_g4_t_v26)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 17u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);

  v18 = (int)(uintptr_t)(&dword_213B814);
  Json::Value::Construct(v26, 7);
  v1 = (Json::Value::Self *)Json::Reader::currentValue((Json::Reader::Self *)a1);
  Json::Value::opAssign(v1, (const Json::Value::Self *)v26);
  Json::Value::Destroy((Json::Value::Self *)v26);
  while ( 1 )
  {
LABEL_2:
    if ( (uint8_t)Json::Reader::readToken((Json::Reader::Self *)a1, v23) == 0 )
      goto LABEL_15;
    v2 = v23[0];
    if ( v23[0] == 12 )
    {
      while ( 1 )
      {
        Token = Json::Reader::readToken((Json::Reader::Self *)a1, v23);
        v2 = v23[0];
        if ( v23[0] != 12 )
          break;
        if ( Token == 0 )
          goto LABEL_15;
      }
      if ( Token == 0 )
        goto LABEL_15;
    }
    if ( v2 == 2 )
    {
      v5 = v18;
      result = 1;
      if ( *(uint32_t *)(v18 - 12) == 0 )
        goto LABEL_10;
LABEL_15:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Missing '}' or object member name", (int)(uintptr_t)(&v17) + 2);
      result = Json::Reader::addErrorAndRecover((Json::Reader::Self *)a1, (int)(uintptr_t)(&v22), v23, 2);
      v4 = (void *)(v22 - 12);
      if ( (uint32_t *)(v22 - 12) == dword_213B808
        || __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) > 0 )
      {
        goto LABEL_9;
      }
LABEL_25:
      v14 = result;
      g4_std::string::Rep::M_destroy(v4);
      v5 = v18;
      result = v14;
      goto LABEL_10;
    }
    if ( v2 != 5 )
      goto LABEL_15;
    g4_std_compat::string_assign((int)(uintptr_t)(&v18), &unk_1B15112, 0);
    if ( (uint8_t)Json::Reader::decodeString(a1, v23, &v18) == 0 )
      break;
    if ( (uint8_t)Json::Reader::readToken((Json::Reader::Self *)a1, v24) == 0 || v24[0] != 11 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Missing ':' after object member name", (int)(uintptr_t)(&v17));
      result = Json::Reader::addErrorAndRecover((Json::Reader::Self *)a1, (int)(uintptr_t)(&v19), v24, 2);
      v4 = (void *)(v19 - 12);
      if ( (uint32_t *)(v19 - 12) == dword_213B808
        || __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) > 0 )
      {
        goto LABEL_9;
      }
      goto LABEL_25;
    }
    v7 = (Json::Value::Self *)Json::Reader::currentValue((Json::Reader::Self *)a1);
    v20 = (Json::Value::Self *)Json::Value::opIndex(v7, (int)(uintptr_t)(&v18));
    g4_std::deque_Json_Value_be3ad0::push_back((std::deque<Json::Value::Self *> *)a1, &v20);
    Value = Json::Reader::readValue((Json::Reader::Self *)a1);
    v9 = (char *)a1[6];
    if ( v9 == a1[7] )
    {
      v15 = Value;
      opDelete(a1[6]);
      v12 = (void **)((char *)a1[9] - 4);
      a1[9] = v12;
      v13 = (char *)*v12;
      a1[7] = *v12;
      a1[8] = v13 + 512;
      a1[6] = v13 + 508;
      Value = v15;
    }
    else
    {
      a1[6] = v9 - 4;
    }
    if ( Value == 0 )
      break;
    if ( (uint8_t)Json::Reader::readToken((Json::Reader::Self *)a1, v25) == 0 )
      goto LABEL_23;
    v10 = v25[0];
    if ( v25[0] == 10 || v25[0] == 2 )
      goto LABEL_32;
    if ( v25[0] != 12 )
    {
LABEL_23:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Missing ',' or '}' in object declaration", (int)(uintptr_t)(&v17) + 1);
      result = Json::Reader::addErrorAndRecover((Json::Reader::Self *)a1, (int)(uintptr_t)(&v21), v25, 2);
      v4 = (void *)(v21 - 12);
      if ( (uint32_t *)(v21 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        goto LABEL_25;
      }
LABEL_9:
      v5 = v18;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v11 = Json::Reader::readToken((Json::Reader::Self *)a1, v25);
      v10 = v25[0];
      if ( v25[0] != 12 )
        break;
      if ( v11 == 0 )
        goto LABEL_2;
    }
LABEL_32:
    if ( v10 == 2 )
    {
      v5 = v18;
      result = 1;
      goto LABEL_10;
    }
  }
  result = Json::Reader::recoverFromError((Json::Reader::Self *)a1, 2);
  v5 = v18;
LABEL_10:
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = result;
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
    return v16;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::readValue  (binary VA: 0x119ebc0)
// Original: Json::Reader::readValue
// ----------------------------------------------------------------------------
int Json::Reader::readValue(Json::Reader::Self *self)
{
  int Object;
  void *v2;
  int v4;
  const Json::Value::Self *v5;
  Json::Value::Self *v6;
  typedef Json::Reader::Self *_g4_t_v7;
  typedef uint16_t _g4_t_v8[3];
  typedef int _g4_t_v9[3];
  typedef uint8_t _g4_t_v10[16];
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[28];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v8)) > _g4_s1 ? (30u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v9)) > _g4_s2 ? (36u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v10)) > _g4_s3 ? (48u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v11)) > _g4_s4 ? (64u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v12)) > _g4_s5 ? (80u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 30u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 64u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 80u);

  Json::Reader::skipCommentTokens(self, (uint32_t *)(v9));
  if ( *((uint8_t *)self + 110) != 0 && *(uint32_t *)(*((uint32_t *)self + 26) - 12) != 0 )
  {
    v4 = Json::Reader::currentValue(self);
    Json::Value::setComment(v4, (char *)self + 104, 0);
    g4_std_compat::string_assign((int)(uintptr_t)(self) + 104, &unk_1B15112, 0);
  }
  switch ( v9[0] )
  {
    case 1:
      Object = Json::Reader::readObject((void **)self);
      goto LABEL_10;
    case 3:
      Object = Json::Reader::readArray(self);
      goto LABEL_10;
    case 5:
      Object = Json::Reader::decodeString(self, v9);
      goto LABEL_10;
    case 6:
      Object = Json::Reader::decodeNumber(self, v9);
      goto LABEL_10;
    case 7:
      v5 = (const Json::Value::Self *)v10;
      Json::Value::Construct((Json::Value::Self *)v10, true);
      goto LABEL_9;
    case 8:
      v5 = (const Json::Value::Self *)v11;
      Json::Value::Construct((Json::Value::Self *)v11, false);
      goto LABEL_9;
    case 9:
      v5 = (const Json::Value::Self *)v12;
      Json::Value::Construct(v12, 0);
LABEL_9:
      v6 = (Json::Value::Self *)Json::Reader::currentValue(self);
      Json::Value::opAssign(v6, v5);
      v7 = (Json::Reader::Self *)(v5);
      Object = 1;
      Json::Value::Destroy(v7);
LABEL_10:
      if ( *((uint8_t *)self + 110) != 0 )
      {
        *((uint32_t *)self + 24) = *((uint32_t *)self + 23);
        *((uint32_t *)self + 25) = Json::Reader::currentValue(self);
      }
      break;
    default:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8[1]), "Syntax error: value, object or array expected.", (int)(uintptr_t)(v8));
      Object = Json::Reader::addError(self, (int)(uintptr_t)(&v8[1]), v9, 0);
      v2 = (void *)(*(uint32_t *)&v8[1] - 12);
      if ( (uint32_t *)(*(uint32_t *)&v8[1] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v8[1] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v2);
      }
      break;
  }
  return Object;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::readArray  (binary VA: 0x119edc0)
// Original: Json::Reader::readArray
// ----------------------------------------------------------------------------
int Json::Reader::readArray(void **a1)
{
  Json::Value::Self *v1;
  unsigned int v2;
  Json::Value::Self *v3;
  char Value;
  char *v5;
  char Token;
  int result;
  void *v8;
  void **v9;
  char *v10;
  typedef unsigned int _g4_t_v11;
  typedef uint8_t _g4_t_v12;
  typedef char _g4_t_v13;
  typedef uint16_t _g4_t_v14[3];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[3];
  typedef uint8_t _g4_t_v17[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (26u + sizeof(_g4_t_v14)) > _g4_s3 ? (26u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v15)) > _g4_s4 ? (32u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v16)) > _g4_s5 ? (36u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 26u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  Json::Value::Construct(v17, 6);
  v1 = (Json::Value::Self *)Json::Reader::currentValue((Json::Reader::Self *)a1);
  Json::Value::opAssign(v1, (const Json::Value::Self *)v17);
  v2 = 0;
  Json::Value::Destroy((Json::Value::Self *)v17);
  Json::Reader::skipSpaces((Json::Reader::Self *)a1);
  if ( *(uint8_t *)a1[23] == 93 )
  {
    Json::Reader::readToken((Json::Reader::Self *)a1, v16);
    return 1;
  }
  else
  {
    while ( 2 )
    {
      v11 = v2++;
      v3 = (Json::Value::Self *)Json::Reader::currentValue((Json::Reader::Self *)a1);
      *(uint32_t *)&v14[1] = (uint32_t)(uintptr_t)(Json::Value::opIndex(v3, v11));
      g4_std::deque_Json_Value_be3ad0::push_back((std::deque<Json::Value::Self *> *)a1, (Json::Value::Self *const *)&v14[1]);
      Value = Json::Reader::readValue((Json::Reader::Self *)a1);
      v5 = (char *)a1[6];
      if ( v5 != a1[7] )
      {
        a1[6] = v5 - 4;
        if ( Value != 0 )
          goto LABEL_4;
        return Json::Reader::recoverFromError((Json::Reader::Self *)a1, 4);
      }
      v13 = Value;
      opDelete(a1[6]);
      v9 = (void **)((char *)a1[9] - 4);
      a1[9] = v9;
      v10 = (char *)*v9;
      a1[7] = *v9;
      a1[8] = v10 + 512;
      a1[6] = v10 + 508;
      if ( v13 == 0 )
        return Json::Reader::recoverFromError((Json::Reader::Self *)a1, 4);
LABEL_4:
      while ( 1 )
      {
        Token = Json::Reader::readToken((Json::Reader::Self *)a1, v16);
        if ( v16[0] != 12 )
          break;
        if ( Token == 0 )
          goto LABEL_10;
      }
      if ( Token == 0 )
      {
LABEL_10:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Missing ',' or ']' in array declaration", (int)(uintptr_t)(v14));
        result = Json::Reader::addErrorAndRecover((Json::Reader::Self *)a1, (int)(uintptr_t)(&v15), v16, 4);
        v8 = (void *)(v15 - 12);
        if ( (uint32_t *)(v15 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
        {
          v12 = result;
          g4_std::string::Rep::M_destroy(v8);
          return v12;
        }
        return result;
      }
      if ( v16[0] != 4 )
        continue;
      return 1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::parse  (binary VA: 0x119efa0)
// Original: Json::Reader::parse
// ----------------------------------------------------------------------------
int Json::Reader::parse(Json::Reader::Self *self, const char *a2, const char *a3, Json::Value::Self *a4, bool a5)
{
  bool v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  void **v14;
  void *v15;
  char *v16;
  char *v17;
  int *v18;
  int v19;
  int v20;
  int Value;
  void *v23;
  int v24;
  int v25;
  typedef uint32_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef Json::Value::Self *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37[10];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v26)) > _g4_s0 ? (8u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v27)) > _g4_s1 ? (12u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v29)) > _g4_s3 ? (20u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v30)) > _g4_s4 ? (24u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v31)) > _g4_s5 ? (28u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v32)) > _g4_s6 ? (36u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v33)) > _g4_s7 ? (44u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (54u + sizeof(_g4_t_v34)) > _g4_s8 ? (54u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v35)) > _g4_s9 ? (60u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v36)) > _g4_s10 ? (64u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v37)) > _g4_s11 ? (68u + sizeof(_g4_t_v37)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 54u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);

  v5 = false;
  if ( *((uint8_t *)self + 108) != 0 )
    v5 = a5;
  *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)(a3);
  *((uint8_t *)self + 110) = v5;
  *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 104, &unk_1B15112, 0);
  v27 = *((uint32_t *)self + 12);
  v33 = *((uint32_t *)self + 13);
  v31 = *((uint32_t *)self + 14);
  v32 = *((uint32_t *)self + 15);
  v29 = *((uint32_t *)self + 16);
  v30 = *((uint32_t *)self + 17);
  v28 = *((uint32_t *)self + 19);
  if ( v28 > v32 + 4 )
  {
    v26 = (uint32_t *)(v32 + 4);
    do
    {
      v6 = 0;
      v7 = *v26 + 12;
      do
      {
        v8 = *(uint32_t *)(v7 + v6);
        if ( (uint32_t *)(v8 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v8 - 12));
        }
        v6 += 20;
      }
      while ( v6 != 500 );
      ++v26;
    }
    while ( v28 > (unsigned int)(uintptr_t)(v26) );
  }
  if ( v32 == v28 )
  {
    if ( v27 != v29 )
    {
      v24 = v27;
      do
      {
        v25 = *(uint32_t *)(v24 + 12);
        if ( (uint32_t *)(v25 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v25 - 12));
        }
        v24 += 20;
      }
      while ( v29 != v24 );
    }
  }
  else
  {
    if ( v27 != v31 )
    {
      v9 = v27;
      do
      {
        v10 = *(uint32_t *)(v9 + 12);
        if ( (uint32_t *)(v10 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v10 - 12));
        }
        v9 += 20;
      }
      while ( v31 != v9 );
    }
    if ( v29 != v30 )
    {
      v11 = v30;
      do
      {
        v12 = *(uint32_t *)(v11 + 12);
        if ( (uint32_t *)(v12 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v12 - 12));
        }
        v11 += 20;
      }
      while ( v29 != v11 );
    }
  }
  v13 = *((uint32_t *)self + 19) + 4;
  if ( v32 + 4 < v13 )
  {
    v14 = (void **)(v32 + 4);
    do
    {
      v15 = *v14++;
      opDelete(v15);
    }
    while ( v13 > (unsigned int)(uintptr_t)(v14) );
  }
  *((uint32_t *)self + 16) = v27;
  *((uint32_t *)self + 17) = v33;
  *((uint32_t *)self + 18) = v31;
  *((uint32_t *)self + 19) = v32;
  v16 = *((char **)self + 6);
  v17 = *((char **)self + 2);
  while ( v16 != v17 )
  {
    while ( v16 == *((char **)self + 7) )
    {
      opDelete(v16);
      v18 = (int *)(*((uint32_t *)self + 9) - 4);
      *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v18);
      v19 = *v18;
      *((uint32_t *)self + 7) = *v18;
      v20 = v19 + 512;
      v16 = (char *)(v19 + 508);
      *((uint32_t *)self + 8) = v20;
      v17 = *((char **)self + 2);
      *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v16);
      if ( v16 == v17 )
        goto LABEL_26;
    }
    v16 -= 4;
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v16);
  }
LABEL_26:
  v35 = a4;
  g4_std::deque_Json_Value_be3ad0::push_back(self, &v35);
  Value = Json::Reader::readValue(self);
  Json::Reader::skipCommentTokens(self, (uint32_t *)(v37));
  if ( *((uint8_t *)self + 110) != 0 && *(uint32_t *)(*((uint32_t *)self + 26) - 12) != 0 )
  {
    Json::Value::setComment(a4, (char *)self + 104, 2);
    if ( *((uint8_t *)self + 109) == 0 )
      return Value;
  }
  else if ( *((uint8_t *)self + 109) == 0 )
  {
    return Value;
  }
  if ( (uint8_t)Json::Value::isArray(a4) == 0 && (uint8_t)Json::Value::isObject(a4) == 0 )
  {
    v37[2] = (int)(uintptr_t)(a3);
    v37[1] = (int)(uintptr_t)(a2);
    v37[0] = 13;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "A valid JSON document must be either an array or an object value.", (int)(uintptr_t)(&v34));
    Json::Reader::addError(self, (int)(uintptr_t)(&v36), v37, 0);
    v23 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) == dword_213B808 )
    {
      return 0;
    }
    else
    {
      Value = 0;
      if ( __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v23);
    }
  }
  return Value;
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::parse  (binary VA: 0x119f430)
// Original: Json::Reader::parse
// ----------------------------------------------------------------------------
int Json::Reader::parse(const char **a1, int a2, Json::Value::Self *a3, char a4)
{
  g4_std::string::assign_str(a1 + 20, a2);
  return Json::Reader::parse((Json::Reader::Self *)a1, a1[20], &a1[20][*((uint32_t *)a1[20] - 3)], a3, a4);
}

// ----------------------------------------------------------------------------
// Function: Json::Reader::parse_ea119f4b0  (binary VA: 0x119f4b0)
// Original: Json::Reader::parse
// ----------------------------------------------------------------------------
int Json::Reader::parse_ea119f4b0(const char **a1, int a2, Json::Value::Self *a3, char a4)
{
  int result;
  void *v5;
  typedef uint8_t _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v7[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1905A30(a2, v7, -1);
  result = Json::Reader::parse(a1, (int)(uintptr_t)(v7), a3, a4);
  v5 = (void *)(v7[0] - 12);
  if ( (uint32_t *)(v7[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v6 = result;
    g4_std::string::Rep::M_destroy(v5);
    return v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::ValueAllocator::Destroy  (binary VA: 0x11a1490)
// Original: Json::ValueAllocator::~ValueAllocator
// ----------------------------------------------------------------------------
void Json::ValueAllocator::Destroy(Json::ValueAllocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091B08);
}

// ----------------------------------------------------------------------------
// Function: Json::ValueAllocator::Destroy_ea11a14b0  (binary VA: 0x11a14b0)
// Original: Json::ValueAllocator::~ValueAllocator
// ----------------------------------------------------------------------------
void Json::ValueAllocator::Destroy_ea11a14b0(Json::ValueAllocator::Self *self)
{
  Json::ValueAllocator::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x11a1580 (size: 17 bytes)
// Symbol:    _ZN4Json17ValueIteratorBaseC2Ev
// Demangled: Json::ValueIteratorBase::ValueIteratorBase(void)
// ============================================================================
// Alternative name is '_ZN4Json17ValueIteratorBaseC1Ev'
Json::ValueIteratorBase::Self *Json::ValueIteratorBase::Construct(Json::ValueIteratorBase::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint8_t *)self + 4) = 1;
  return self;
}
// ----------------------------------------------------------------------------
// Function: Json::ValueIteratorBase::Construct  (binary VA: 0x11a15a0)
// Original: Json::ValueIteratorBase::ValueIteratorBase
// ----------------------------------------------------------------------------
int Json::ValueIteratorBase::Construct(int a1, int *a2)
{
  int v3;

  v3 = *a2;
  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)a1 = v3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Json::ValueIteratorBase::deref  (binary VA: 0x11a15c0)
// Original: Json::ValueIteratorBase::deref
// ----------------------------------------------------------------------------
int Json::ValueIteratorBase::deref(Json::ValueIteratorBase::Self *self)
{
  return *(uint32_t *)self + 24;
}

// ----------------------------------------------------------------------------
// Function: Json::ValueIteratorBase::increment  (binary VA: 0x11a15d0)
// Original: Json::ValueIteratorBase::increment
// ----------------------------------------------------------------------------
int Json::ValueIteratorBase::increment(Json::ValueIteratorBase::Self *self)
{
  int result;

  result = sub_1904890(*(uint32_t *)self);
  *(uint32_t *)self = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::ValueIteratorBase::decrement  (binary VA: 0x11a1610)
// Original: Json::ValueIteratorBase::decrement
// ----------------------------------------------------------------------------
int Json::ValueIteratorBase::decrement(Json::ValueIteratorBase::Self *self)
{
  int result;

  result = sub_19048F0(*(uint32_t *)self);
  *(uint32_t *)self = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::ValueIteratorBase::computeDistance  (binary VA: 0x11a1650)
// Original: Json::ValueIteratorBase::computeDistance
// ----------------------------------------------------------------------------
int Json::ValueIteratorBase::computeDistance(Json::ValueIteratorBase::Self *self, const Json::ValueIteratorBase::Self *a2)
{
  int i;
  int v3;
  int v4;

  if ( *((uint8_t *)self + 4) == 0 || (i = 0, *((uint8_t *)a2 + 4) == 0) )
  {
    v3 = *(uint32_t *)self;
    v4 = *(uint32_t *)a2;
    for ( i = 0; v3 != v4; v3 = sub_1904890(v3) )
      ++i;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: Json::ValueIteratorBase::isEqual  (binary VA: 0x11a16b0)
// Original: Json::ValueIteratorBase::isEqual
// ----------------------------------------------------------------------------
char Json::ValueIteratorBase::isEqual(Json::ValueIteratorBase::Self *self, const Json::ValueIteratorBase::Self *a2)
{
  if ( *((uint8_t *)self + 4) != 0 )
    return *((uint8_t *)a2 + 4);
  else
    return *(uint32_t *)self == *(uint32_t *)a2;
}

// ----------------------------------------------------------------------------
// Function: Json::ValueIteratorBase::copy  (binary VA: 0x11a16d0)
// Original: Json::ValueIteratorBase::copy
// ----------------------------------------------------------------------------
Json::ValueIteratorBase::Self * Json::ValueIteratorBase::copy(Json::ValueIteratorBase::Self *self, const Json::ValueIteratorBase::Self *a2)
{
  *(uint32_t *)self = *(uint32_t *)a2;
  return self;
}



// ============================================================================
// Address:   0x11a16e0 (size: 34 bytes)
// Symbol:    _ZN4Json18ValueConstIteratorC2Ev
// Demangled: Json::ValueConstIterator::ValueConstIterator(void)
// ============================================================================
// Alternative name is '_ZN4Json18ValueConstIteratorC1Ev'
Json::ValueConstIterator::Self *Json::ValueConstIterator::Construct(Json::ValueConstIterator::Self *self)
{
  return (Json::ValueConstIterator::Self *)(Json::ValueIteratorBase::Construct(self));
}
// ----------------------------------------------------------------------------
// Function: Json::ValueConstIterator::Construct  (binary VA: 0x11a1710)
// Original: Json::ValueConstIterator::ValueConstIterator
// ----------------------------------------------------------------------------
int Json::ValueConstIterator::Construct(int a1, int *a2)
{
  return Json::ValueIteratorBase::Construct(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: Json::ValueConstIterator::opAssign  (binary VA: 0x11a1740)
// Original: Json::ValueConstIterator::operator=
// ----------------------------------------------------------------------------
Json::ValueConstIterator::Self * Json::ValueConstIterator::opAssign(Json::ValueConstIterator::Self *self, const Json::ValueIteratorBase::Self *a2)
{
  Json::ValueIteratorBase::copy((Json::ValueIteratorBase::Self *)(self), a2);
  return self;
}



// ============================================================================
// Address:   0x11a1780 (size: 34 bytes)
// Symbol:    _ZN4Json13ValueIteratorC2Ev
// Demangled: Json::ValueIterator::ValueIterator(void)
// ============================================================================
// Alternative name is '_ZN4Json13ValueIteratorC1Ev'
Json::ValueIterator::Self *Json::ValueIterator::Construct(Json::ValueIterator::Self *self)
{
  return (Json::ValueIterator::Self *)(Json::ValueIteratorBase::Construct(self));
}
// ----------------------------------------------------------------------------
// Function: Json::ValueIterator::Construct  (binary VA: 0x11a17b0)
// Original: Json::ValueIterator::ValueIterator
// ----------------------------------------------------------------------------
int Json::ValueIterator::Construct(int a1, int *a2)
{
  return Json::ValueIteratorBase::Construct(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: Json::ValueIterator::Construct  (binary VA: 0x11a17e0)
// Original: Json::ValueIterator::ValueIterator
// ----------------------------------------------------------------------------
Json::ValueIterator::Self * Json::ValueIterator::Construct(Json::ValueIterator::Self *self, const Json::ValueConstIterator::Self *a2)
{
  int64_t v3; // rt0

  HIDWORD(v3) = *((uint8_t *)a2 + 4);
  LODWORD(v3) = *(uint32_t *)a2;
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint8_t *)self + 4) = (uint64_t)(v3 << 24) >> 56;
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::ValueIterator::Construct  (binary VA: 0x11a1820)
// Original: Json::ValueIterator::ValueIterator
// ----------------------------------------------------------------------------
Json::ValueIterator::Self * Json::ValueIterator::Construct(Json::ValueIterator::Self *self, const Json::ValueIterator::Self *a2)
{
  int64_t v3; // rt0

  HIDWORD(v3) = *((uint8_t *)a2 + 4);
  LODWORD(v3) = *(uint32_t *)a2;
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint8_t *)self + 4) = (uint64_t)(v3 << 24) >> 56;
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::ValueIterator::opAssign  (binary VA: 0x11a1860)
// Original: Json::ValueIterator::operator=
// ----------------------------------------------------------------------------
Json::ValueIterator::Self * Json::ValueIterator::opAssign(Json::ValueIterator::Self *self, const Json::ValueIterator::Self *a2)
{
  Json::ValueIteratorBase::copy((Json::ValueIteratorBase::Self *)(self), (const Json::ValueIteratorBase::Self *)(a2));
  return self;
}



// ============================================================================
// Address:   0x11a18a0 (size: 15 bytes)
// Symbol:    _ZN4Json5Value11CommentInfoC2Ev
// Demangled: Json::Value::CommentInfo::CommentInfo(void)
// ============================================================================
// Alternative name is '_ZN4Json5Value11CommentInfoC1Ev'
Json::Value::CommentInfo::Self *Json::Value::CommentInfo::Construct(Json::Value::CommentInfo::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: Json::Value::CommentInfo::Destroy  (binary VA: 0x11a18b0)
// Original: Json::Value::CommentInfo::~CommentInfo
// ----------------------------------------------------------------------------
void Json::Value::CommentInfo::Destroy(Json::Value::CommentInfo::Self *self)
{
  int **v1;

  if ( *(uint32_t *)self != 0 )
  {
    v1 = sub_11A14F0();
    (*(void (**)(int *, uint32_t))(**v1 + 20))(*v1, *(uint32_t *)self);
  }
}

// ----------------------------------------------------------------------------
// Function: Json::Value::CommentInfo::setComment  (binary VA: 0x11a18e0)
// Original: Json::Value::CommentInfo::setComment
// ----------------------------------------------------------------------------
int Json::Value::CommentInfo::setComment(Json::Value::CommentInfo::Self *self, const char *a2)
{
  int **v2;
  int **v3;
  int result;

  if ( *(uint32_t *)self != 0 )
  {
    v2 = sub_11A14F0();
    (*(void (**)(int *, uint32_t))(**v2 + 20))(*v2, *(uint32_t *)self);
  }
  v3 = sub_11A14F0();
  result = (*(int (**)(int *, const char *, int))(**v3 + 16))(*v3, a2, -1);
  *(uint32_t *)self = result;
  return result;
}



// ============================================================================
// Address:   0x11a1930 (size: 18 bytes)
// Symbol:    _ZN4Json5Value8CZStringC2Ei
// Demangled: Json::Value::CZString::CZString(int)
// ============================================================================
// Alternative name is '_ZN4Json5Value8CZStringC1Ei'
Json::Value::CZString::Self *Json::Value::CZString::Construct(Json::Value::CZString::Self *self, int a2)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = a2;
  return self;
}
// ----------------------------------------------------------------------------
// Function: Json::Value::CZString::Construct  (binary VA: 0x11a1950)
// Original: Json::Value::CZString::CZString
// ----------------------------------------------------------------------------
void Json::Value::CZString::Construct(int *a1, int a2, int a3)
{
  int v3;
  int **v4;

  v3 = a2;
  if ( a3 == 1 )
  {
    v4 = sub_11A14F0();
    v3 = (*(int (**)(int *, int))(**v4 + 8))(*v4, a2);
  }
  *a1 = v3;
  a1[1] = a3;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::CZString::Construct  (binary VA: 0x11a19a0)
// Original: Json::Value::CZString::CZString
// ----------------------------------------------------------------------------
Json::Value::CZString::Self * Json::Value::CZString::Construct(Json::Value::CZString::Self *self, const Json::Value::CZString::Self *a2)
{
  int v2;
  int **v3;
  Json::Value::CZString::Self *result;

  if ( *((uint32_t *)a2 + 1) != 0 )
  {
    v2 = 0;
    if ( *(uint32_t *)a2 != 0 )
    {
      v3 = sub_11A14F0();
      v2 = (*(int (**)(int *, uint32_t))(**v3 + 8))(*v3, *(uint32_t *)a2);
    }
    *(uint32_t *)self = v2;
    if ( *(uint32_t *)a2 != 0 )
      goto LABEL_5;
  }
  else
  {
    *(uint32_t *)self = *(uint32_t *)a2;
    if ( *(uint32_t *)a2 != 0 )
    {
LABEL_5:
      result = (Json::Value::CZString::Self *)(*((uint32_t *)a2 + 1) != 0);
      *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
      return result;
    }
  }
  result = *((Json::Value::CZString::Self **)a2 + 1);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::CZString::Destroy  (binary VA: 0x11a1a20)
// Original: Json::Value::CZString::~CZString
// ----------------------------------------------------------------------------
void Json::Value::CZString::Destroy(Json::Value::CZString::Self *self)
{
  int **v1;

  if ( *(uint32_t *)self != 0 && *((uint32_t *)self + 1) == 1 )
  {
    v1 = sub_11A14F0();
    (*(void (**)(int *, uint32_t))(**v1 + 12))(*v1, *(uint32_t *)self);
  }
}

// ----------------------------------------------------------------------------
// Function: Json::Value::CZString::swap  (binary VA: 0x11a1a60)
// Original: Json::Value::CZString::swap
// ----------------------------------------------------------------------------
Json::Value::CZString::Self * Json::Value::CZString::swap(Json::Value::CZString::Self *self, Json::Value::CZString::Self *a2)
{
  int v3;
  int v4;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  *(uint32_t *)a2 = v3;
  v4 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)a2 + 1) = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::CZString::opAssign  (binary VA: 0x11a1a80)
// Original: Json::Value::CZString::operator=
// ----------------------------------------------------------------------------
Json::Value::CZString::Self * Json::Value::CZString::opAssign(Json::Value::CZString::Self *self, const Json::Value::CZString::Self *a2)
{
  uint8_t v3[8];

  Json::Value::CZString::Construct((Json::Value::CZString::Self *)v3, a2);
  Json::Value::CZString::swap(self, (Json::Value::CZString::Self *)v3);
  Json::Value::CZString::Destroy((Json::Value::CZString::Self *)v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::CZString::opLt  (binary VA: 0x11a1ae0)
// Original: Json::Value::CZString::operator<
// ----------------------------------------------------------------------------
char Json::Value::CZString::opLt(const char **self, const char **a2)
{
  int v2;

  if ( *self != nullptr )
    return (unsigned int)strcmp(*self, *a2) >> 31;
  else
    LOBYTE(v2) = (int)(uintptr_t)(*(self + 1)) < (int)(uintptr_t)(a2[1]);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::CZString::opEq  (binary VA: 0x11a1b30)
// Original: Json::Value::CZString::operator==
// ----------------------------------------------------------------------------
bool Json::Value::CZString::opEq(const char **self, const char **a2)
{
  if ( *self != nullptr )
    return strcmp(*self, *a2) == 0;
  else
    return *(self + 1) == a2[1];
}

// ----------------------------------------------------------------------------
// Function: Json::Value::CZString::index  (binary VA: 0x11a1b80)
// Original: Json::Value::CZString::index
// ----------------------------------------------------------------------------
int Json::Value::CZString::index(Json::Value::CZString::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: Json::Value::CZString::c_str  (binary VA: 0x11a1b90)
// Original: Json::Value::CZString::c_str
// ----------------------------------------------------------------------------
int Json::Value::CZString::c_str(Json::Value::CZString::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: Json::ValueIteratorBase::memberName  (binary VA: 0x11a1ba0)
// Original: Json::ValueIteratorBase::memberName
// ----------------------------------------------------------------------------
void * Json::ValueIteratorBase::memberName(Json::ValueIteratorBase::Self *self)
{
  void *result;

  result = (void *)Json::Value::CZString::c_str((Json::Value::CZString::Self *)(*(uint32_t *)self + 16));
  if ( result == nullptr )
    return &unk_1B15112;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::ValueIteratorBase::index  (binary VA: 0x11a1be0)
// Original: Json::ValueIteratorBase::index
// ----------------------------------------------------------------------------
int Json::ValueIteratorBase::index(Json::ValueIteratorBase::Self *self)
{
  int v1;
  uint8_t v3[8];

  v1 = -1;
  Json::Value::CZString::Construct((Json::Value::CZString::Self *)v3, (const Json::Value::CZString::Self *)(*(uint32_t *)self + 16));
  if ( Json::Value::CZString::c_str((Json::Value::CZString::Self *)v3) == 0 )
    v1 = Json::Value::CZString::index((Json::Value::CZString::Self *)v3);
  Json::Value::CZString::Destroy((Json::Value::CZString::Self *)v3);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::CZString::isStaticString  (binary VA: 0x11a1c50)
// Original: Json::Value::CZString::isStaticString
// ----------------------------------------------------------------------------
bool Json::Value::CZString::isStaticString(Json::Value::CZString::Self *self)
{
  return *((uint32_t *)self + 1) == 0;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::Construct  (binary VA: 0x11a1c60)
// Original: Json::Value::Value
// ----------------------------------------------------------------------------
uint32_t * Json::Value::Construct(int a1, uint32_t *a2)
{
  uint32_t *result;

  *(uint8_t *)(a1 + 9) &= ~1u;
  *(uint8_t *)(a1 + 8) = (uint8_t)(uintptr_t)(a2);
  *(uint32_t *)(a1 + 12) = 0;
  result = (uint32_t *)((int *)((char *)dword_20B9FF4 + (uint32_t)jpt_11A1C9B[(uint32_t)(uintptr_t)(a2)]));
  switch ( (unsigned int)(uintptr_t)(a2) )
  {
    case 0u:
      return result;
    case 1u:
    case 2u:
    case 4u:
      *(uint32_t *)a1 = 0;
      break;
    case 3u:
      *(uint64_t *)a1 = 0;
      break;
    case 5u:
      *(uint8_t *)a1 = 0;
      break;
    case 6u:
    case 7u:
      result = (uint32_t *)opNew(0x18u);
      result[1] = 0;
      result[2] = 0;
      result[5] = 0;
      result[3] = (uint32_t)(uintptr_t)(result + 1);
      result[4] = (uint32_t)(uintptr_t)(result + 1);
      *(uint32_t *)a1 = (uint32_t)(uintptr_t)(result);
      break;
    default:
      result = a2;
      break;
  }
  return result;
}



// ============================================================================
// Address:   0x11a1d20 (size: 22 bytes)
// Symbol:    _ZN4Json5ValueC1Ei
// Demangled: Json::Value::Value(int)
// ============================================================================
// Alternative name is '_ZN4Json5ValueC2Ei'
Json::Value::Self *Json::Value::Construct(Json::Value::Self *self, int a2)
{
  *((uint8_t *)self + 8) = 1;
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = a2;
  return self;
}
// ----------------------------------------------------------------------------
// Function: Json::Value::Construct  (binary VA: 0x11a1d40)
// Original: Json::Value::Value
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::Construct(Json::Value::Self *self, unsigned int a2)
{
  *((uint8_t *)self + 8) = 2;
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::Construct  (binary VA: 0x11a1d60)
// Original: Json::Value::Value
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::Construct(Json::Value::Self *self, double a2)
{
  *(double *)self = a2;
  *((uint8_t *)self + 8) = 3;
  *((uint32_t *)self + 3) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::Construct  (binary VA: 0x11a1d80)
// Original: Json::Value::Value
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::Construct(Json::Value::Self *self, const char *a2)
{
  int **v2;
  Json::Value::Self *result;

  *((uint8_t *)self + 8) = 4;
  *((uint8_t *)self + 9) |= 1u;
  *((uint32_t *)self + 3) = 0;
  v2 = sub_11A14F0();
  result = (Json::Value::Self *)(*(int (**)(int *, const char *, int))(**v2 + 16))(*v2, a2, -1);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::Construct  (binary VA: 0x11a1dc0)
// Original: Json::Value::Value
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::Construct(Json::Value::Self *self, const char *a2, const char *a3)
{
  int **v3;
  Json::Value::Self *result;

  *((uint8_t *)self + 8) = 4;
  *((uint8_t *)self + 9) |= 1u;
  *((uint32_t *)self + 3) = 0;
  v3 = sub_11A14F0();
  result = (Json::Value::Self *)(*(int (**)(int *, const char *, int))(**v3 + 16))(*v3, a2, a3 - a2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::Construct_ea11a1e10  (binary VA: 0x11a1e10)
// Original: Json::Value::Value
// ----------------------------------------------------------------------------
int Json::Value::Construct_ea11a1e10(int a1, uint32_t *a2)
{
  int **v2;
  int result;

  *(uint8_t *)(a1 + 8) = 4;
  *(uint8_t *)(a1 + 9) |= 1u;
  *(uint32_t *)(a1 + 12) = 0;
  v2 = sub_11A14F0();
  result = (*(int (**)(int *, uint32_t, uint32_t))(**v2 + 16))(*v2, *a2, *(uint32_t *)(*a2 - 12));
  *(uint32_t *)a1 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::Construct_ea11a1e60  (binary VA: 0x11a1e60)
// Original: Json::Value::Value
// ----------------------------------------------------------------------------
int Json::Value::Construct_ea11a1e60(int a1, uint32_t *a2)
{
  *(uint8_t *)(a1 + 9) &= ~1u;
  *(uint8_t *)(a1 + 8) = 4;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = *a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Json::ValueIteratorBase::key  (binary VA: 0x11a1e80)
// Original: Json::ValueIteratorBase::key
// ----------------------------------------------------------------------------
Json::ValueIteratorBase::Self * Json::ValueIteratorBase::key(Json::ValueIteratorBase::Self *self, int a2)
{
  const char *v2;
  int v4;
  typedef int _g4_t_v5;
  typedef uint8_t _g4_t_v6[8];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);

  Json::Value::CZString::Construct((Json::Value::CZString::Self *)v6, (const Json::Value::CZString::Self *)(*(uint32_t *)a2 + 16));
  if ( Json::Value::CZString::c_str((Json::Value::CZString::Self *)v6) != 0 )
  {
    if ( Json::Value::CZString::isStaticString((Json::Value::CZString::Self *)v6) )
    {
      v5 = Json::Value::CZString::c_str((Json::Value::CZString::Self *)v6);
      Json::Value::Construct((int)(uintptr_t)(self), &v5);
    }
    else
    {
      v2 = (const char *)Json::Value::CZString::c_str((Json::Value::CZString::Self *)v6);
      Json::Value::Construct(self, v2);
    }
  }
  else
  {
    v4 = Json::Value::CZString::index((Json::Value::CZString::Self *)v6);
    Json::Value::Construct(self, v4);
  }
  Json::Value::CZString::Destroy((Json::Value::CZString::Self *)v6);
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::Construct  (binary VA: 0x11a1f40)
// Original: Json::Value::Value
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::Construct(Json::Value::Self *self, bool a2)
{
  *((uint8_t *)self + 8) = 5;
  *((uint32_t *)self + 3) = 0;
  *(uint8_t *)self = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::swap  (binary VA: 0x11a1f60)
// Original: Json::Value::swap
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::swap(Json::Value::Self *self, Json::Value::Self *a2)
{
  char v3; // di
  int v4;
  int v5;
  int v6;

  v3 = *((uint8_t *)self + 8);
  *((uint8_t *)self + 8) = *((uint8_t *)a2 + 8);
  *((uint8_t *)a2 + 8) = v3;
  v5 = *(uint32_t *)self;
  v6 = *((uint32_t *)self + 1);
  v4 = *((uint32_t *)a2 + 1);
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint32_t *)self + 1) = v4;
  *(uint32_t *)a2 = v5;
  *((uint32_t *)a2 + 1) = v6;
  LOBYTE(v4) = *((uint8_t *)self + 9) & 1;
  *((uint8_t *)self + 9) = *((uint8_t *)a2 + 9) & 1 | *((uint8_t *)self + 9) & 0xFE;
  *((uint8_t *)a2 + 9) = v4 | *((uint8_t *)a2 + 9) & 0xFE;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::type  (binary VA: 0x11a1fd0)
// Original: Json::Value::type
// ----------------------------------------------------------------------------
int Json::Value::type(Json::Value::Self *self)
{
  return *((uint8_t *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: Json::Value::compare  (binary VA: 0x11a1fe0)
// Original: Json::Value::compare
// ----------------------------------------------------------------------------
int Json::Value::compare()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opLt  (binary VA: 0x11a1ff0)
// Original: Json::Value::operator<
// ----------------------------------------------------------------------------
char Json::Value::opLt(Json::Value::Self *self, const char **a2)
{
  uint8_t v2;
  unsigned int v3;
  int v4;
  int v5;
  const char *v6;
  int v7;
  const char **v8;
  int v10;
  const char *v11;
  int v12;

  v2 = *((uint8_t *)self + 8);
  v3 = v2 - *((uint8_t *)a2 + 8);
  if ( v3 != 0 )
  {
    return v3 >> 31;
  }
  else
  {
    switch ( v2 )
    {
      case 1u:
        LOBYTE(v4) = *(uint32_t *)self < (int)(uintptr_t)(*a2);
        break;
      case 2u:
        LOBYTE(v4) = *(uint32_t *)self < (unsigned int)(uintptr_t)(*a2);
        break;
      case 3u:
        LOBYTE(v4) = *(double *)a2 > *(double *)self;
        break;
      case 4u:
        if ( *(uint32_t *)self != 0 )
        {
          LOBYTE(v4) = 0;
          if ( *a2 != nullptr )
          {
            v3 = strcmp(*(const char **)self, *a2);
            return v3 >> 31;
          }
        }
        else
        {
          LOBYTE(v4) = *a2 != nullptr;
        }
        break;
      case 5u:
        LOBYTE(v4) = *(uint8_t *)a2 > *(uint8_t *)self;
        break;
      case 6u:
      case 7u:
        v5 = *(uint32_t *)self;
        v6 = *a2;
        v3 = *(uint32_t *)(*(uint32_t *)self + 20) - *((uint32_t *)*a2 + 5);
        if ( v3 != 0 )
          return v3 >> 31;
        v11 = v6 + 4;
        v7 = *((uint32_t *)v6 + 3);
        v12 = v5 + 4;
        v10 = *(uint32_t *)(v5 + 12);
        if ( v5 + 4 == v10 )
        {
LABEL_23:
          LOBYTE(v4) = v11 != (const char *)v7;
        }
        else
        {
          while ( 1 )
          {
            if ( v11 == (const char *)v7 )
              goto LABEL_3;
            v8 = (const char **)(v10 + 16);
            if ( Json::Value::CZString::opLt((const char **)(v10 + 16), (const char **)(v7 + 16)) != 0
              || Json::Value::CZString::opLt((const char **)(v7 + 16), v8) == 0
              && (uint8_t)Json::Value::opLt((Json::Value::Self *)(v10 + 24), (const char **)((const Json::Value::Self *)(v7 + 24))) != 0 )
            {
              break;
            }
            if ( Json::Value::CZString::opLt((const char **)(v7 + 16), v8) != 0
              || Json::Value::CZString::opLt(v8, (const char **)(v7 + 16)) == 0
              && (uint8_t)Json::Value::opLt((Json::Value::Self *)(v7 + 24), (const char **)((const Json::Value::Self *)(v10 + 24))) != 0 )
            {
              goto LABEL_3;
            }
            v10 = sub_19048E0(v10);
            v7 = sub_19048E0(v7);
            if ( v12 == v10 )
              goto LABEL_23;
          }
          LOBYTE(v4) = 1;
        }
        break;
      default:
LABEL_3:
        LOBYTE(v4) = 0;
        break;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opGe  (binary VA: 0x11a21e0)
// Original: Json::Value::operator>=
// ----------------------------------------------------------------------------
int Json::Value::opGe(Json::Value::Self *self, const char **a2)
{
  int v2;

  LOBYTE(v2) = Json::Value::opLt(self, a2);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opGt  (binary VA: 0x11a2210)
// Original: Json::Value::operator>
// ----------------------------------------------------------------------------
char Json::Value::opGt(const char **self, const Json::Value::Self *a2)
{
  return Json::Value::opLt((Json::Value::Self *)(a2), self);
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opLe  (binary VA: 0x11a2240)
// Original: Json::Value::operator<=
// ----------------------------------------------------------------------------
int Json::Value::opLe(Json::Value::Self *self, const char **a2)
{
  int v2;

  LOBYTE(v2) = Json::Value::opGt(a2, self);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opEq  (binary VA: 0x11a2270)
// Original: Json::Value::operator==
// ----------------------------------------------------------------------------
char Json::Value::opEq(const char **self, const Json::Value::Self *a2)
{
  char result;
  char v3;
  int v4;
  int v5;
  const char *v6;
  const char *v7;
  const char *s1;

  result = 0;
  v3 = *((uint8_t *)a2 + 8);
  if ( v3 == *((uint8_t *)self + 8) )
  {
    switch ( v3 )
    {
      case 0:
        return 1;
      case 1:
      case 2:
        return *self == *(const char **)a2;
      case 3:
        return *(double *)self == *(double *)a2;
      case 4:
        s1 = *self;
        result = 1;
        if ( *self != *(const char **)a2 )
        {
          result = 0;
          if ( *(uint32_t *)a2 != 0 && s1 != nullptr )
            return strcmp(s1, *(const char **)a2) == 0;
        }
        return result;
      case 5:
        return *(uint8_t *)self == *(uint8_t *)a2;
      case 6:
      case 7:
        v6 = *self;
        result = 0;
        if ( *((uint32_t *)*self + 5) != *(uint32_t *)(*(uint32_t *)a2 + 20) )
          return result;
        v7 = v6 + 4;
        v4 = *((uint32_t *)v6 + 3);
        v5 = *(uint32_t *)(*(uint32_t *)a2 + 12);
        result = 1;
        if ( v6 + 4 == (const char *)v4 )
          return result;
        break;
      default:
        return 0;
    }
    while ( Json::Value::CZString::opEq((const char **)(v4 + 16), (const char **)(v5 + 16)) )
    {
      result = Json::Value::opEq((const char **)((Json::Value::Self *)(v4 + 24)), (const Json::Value::Self *)(v5 + 24));
      if ( result == 0 )
        return result;
      v4 = sub_19048E0(v4);
      v5 = sub_19048E0(v5);
      if ( v7 == (const char *)v4 )
        return 1;
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opNe  (binary VA: 0x11a23c0)
// Original: Json::Value::operator!=
// ----------------------------------------------------------------------------
int Json::Value::opNe(const char **self, const Json::Value::Self *a2)
{
  int v2;

  LOBYTE(v2) = Json::Value::opEq(self, a2);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::asCString  (binary VA: 0x11a23f0)
// Original: Json::Value::asCString
// ----------------------------------------------------------------------------
int Json::Value::asCString(Json::Value::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::asString  (binary VA: 0x11a2400)
// Original: Json::Value::asString
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::asString(Json::Value::Self *self, int a2)
{
  char v2;
  char *v3;
  char *v5;
  char *v6;
  typedef char _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (13u + sizeof(_g4_t_v8)) > _g4_s1 ? (13u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 13u);

  v2 = *(uint8_t *)(a2 + 8);
  if ( v2 == 4 )
  {
    v6 = *(char **)a2;
    if ( *(uint32_t *)a2 == 0 )
      v6 = (char *)&unk_1B15112;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), v6, (int)(uintptr_t)(&v8));
  }
  else if ( v2 == 5 )
  {
    v5 = "true";
    if ( *(uint8_t *)a2 == 0 )
      v5 = "false";
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), v5, (int)(uintptr_t)(&v8) + 1);
  }
  else
  {
    if ( v2 != 0 )
      v3 = (char *)&v8 + 2;
    else
      v3 = &v7;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(v3));
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::asInt  (binary VA: 0x11a24c0)
// Original: Json::Value::asInt
// ----------------------------------------------------------------------------
int Json::Value::asInt(Json::Value::Self *self)
{
  uint8_t v1;

  v1 = *((uint8_t *)self + 8);
  switch ( v1 )
  {
    case 1u:
    case 2u:
      return *(uint32_t *)self;
    case 3u:
      return (int)*(double *)self;
    case 5u:
      return *(uint8_t *)self;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: Json::Value::asUInt  (binary VA: 0x11a2510)
// Original: Json::Value::asUInt
// ----------------------------------------------------------------------------
int Json::Value::asUInt(Json::Value::Self *self)
{
  uint8_t v1;
  __m128d v3;
  __m128d v4;
  v1 = *((uint8_t *)self + 8);
  switch ( v1 )
  {
    case 1u:
    case 2u:
      return *(uint32_t *)self;
    case 3u:
      v3 = g4_to_m128d(*(uint64_t *)self);
      v4 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v3);
      return _mm_cvtsi128_si32(
               _mm_xor_si128(
                 _mm_cvttpd_epi32(_mm_sub_pd(v3, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v4))),
                 _mm_slli_epi32(G4_BITCAST<__m128i>(v4), 0x1Fu)));
    case 5u:
      return *(uint8_t *)self;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: Json::Value::asDouble  (binary VA: 0x11a2580)
// Original: Json::Value::asDouble
// ----------------------------------------------------------------------------
long double Json::Value::asDouble(Json::Value::Self *self)
{
  uint8_t v1;
  long double result; // fst7

  v1 = *((uint8_t *)self + 8);
  switch ( v1 )
  {
    case 1u:
      return (double)*(int *)self;
    case 2u:
      return (double)*(unsigned int *)self;
    case 3u:
      return *(double *)self;
    case 5u:
      result = 0.0;
      if ( *(uint8_t *)self != 0 )
        return 1.0;
      return result;
    default:
      return 0.0;
  }
}

// ----------------------------------------------------------------------------
// Function: Json::Value::asBool  (binary VA: 0x11a2600)
// Original: Json::Value::asBool
// ----------------------------------------------------------------------------
char Json::Value::asBool(Json::Value::Self *self)
{
  char result;

  switch ( *((uint8_t *)self + 8) )
  {
    case 1:
    case 2:
      result = *(uint32_t *)self != 0;
      break;
    case 3:
      result = *(double *)self != 0.0;
      break;
    case 4:
      result = 0;
      if ( *(uint32_t *)self != 0 )
        result = **(uint8_t **)self != 0;
      break;
    case 5:
      result = *(uint8_t *)self;
      break;
    case 6:
    case 7:
      result = *(uint32_t *)(*(uint32_t *)self + 20) != 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isConvertibleTo  (binary VA: 0x11a2670)
// Original: Json::Value::isConvertibleTo
// ----------------------------------------------------------------------------
char Json::Value::isConvertibleTo(uint8_t *a1, int a2)
{
  char result;

  switch ( a1[8] )
  {
    case 0:
      return 1;
    case 1:
      result = 1;
      switch ( a2 )
      {
        case 0:
          if ( *(uint32_t *)a1 == 0 )
            return result;
          return a2 == 5;
        case 1:
          return result;
        case 2:
          if ( *(int *)a1 < 0 )
            return a2 == 5;
          return result;
        default:
          goto LABEL_9;
      }
    case 2:
      switch ( a2 )
      {
        case 0:
          result = 1;
          if ( *(uint32_t *)a1 == 0 )
            return result;
          return a2 == 4 || a2 == 5;
        case 1:
          result = 1;
          if ( *(int *)a1 < 0 )
            return a2 == 4 || a2 == 5;
          return result;
        case 2:
        case 3:
          return 1;
        default:
          return a2 == 4 || a2 == 5;
      }
    case 3:
      switch ( a2 )
      {
        case 0:
          result = 1;
          if ( *(double *)a1 != 0.0 )
            return a2 == 5;
          return result;
        case 1:
          if ( *(double *)a1 < -2147483648.0 )
            return a2 == 5;
          result = 1;
          if ( *(double *)a1 > 2147483647.0 )
            return a2 == 5;
          break;
        case 2:
          if ( *(double *)a1 < 0.0 )
            return a2 == 5;
          result = 1;
          if ( *(double *)a1 > 4294967295.0 )
            return a2 == 5;
          break;
        default:
          goto LABEL_9;
      }
      return result;
    case 4:
      result = 1;
      if ( a2 != 4 )
      {
        result = 0;
        if ( a2 == 0 )
        {
          result = 1;
          if ( *(uint32_t *)a1 != 0 )
            return **(uint8_t **)a1 == 0;
        }
      }
      return result;
    case 5:
      if ( a2 != 0 )
      {
        if ( a2 != 2 && a2 != 1 )
        {
LABEL_9:
          if ( a2 != 4 && a2 != 3 )
            return a2 == 5;
        }
        return 1;
      }
      result = 1;
      if ( *a1 != 0 )
        return a2 == 5;
      return result;
    case 6:
      result = 1;
      if ( a2 == 6 )
        return result;
      goto LABEL_4;
    case 7:
      result = 1;
      if ( a2 != 7 )
      {
LABEL_4:
        result = 0;
        if ( a2 == 0 )
          return *(uint32_t *)(*(uint32_t *)a1 + 20) == 0;
      }
      return result;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: Json::Value::size  (binary VA: 0x11a2870)
// Original: Json::Value::size
// ----------------------------------------------------------------------------
int Json::Value::size(Json::Value::Self *self)
{
  char v1;
  int result;
  int v3;

  v1 = *((uint8_t *)self + 8);
  if ( v1 == 6 )
  {
    result = 0;
    if ( *(uint32_t *)(*(uint32_t *)self + 20) != 0 )
    {
      v3 = sub_1904940(*(uint32_t *)self + 4);
      return Json::Value::CZString::index((Json::Value::CZString::Self *)(v3 + 16)) + 1;
    }
  }
  else if ( v1 == 7 )
  {
    return *(uint32_t *)(*(uint32_t *)self + 20);
  }
  else
  {
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opIndex  (binary VA: 0x11a28d0)
// Original: Json::Value::operator[]
// ----------------------------------------------------------------------------
void * Json::Value::opIndex(Json::Value::Self *self, unsigned int a2)
{
  int v3;
  int v4;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef const char *_g4_t_v8[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  if ( *((uint8_t *)self + 8) == 0 )
    return &Json::Value::null;
  Json::Value::CZString::Construct((Json::Value::CZString::Self *)v8, a2);
  v3 = *(uint32_t *)(*(uint32_t *)self + 8);
  v6 = *(uint32_t *)self + 4;
  v7 = v6;
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)self + 4;
    do
    {
      while ( Json::Value::CZString::opLt((const char **)(v3 + 16), v8) == 0 )
      {
        v4 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_8;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_8:
    if ( v6 == v4 )
    {
      v6 = *(uint32_t *)self + 4;
    }
    else
    {
      if ( Json::Value::CZString::opLt(v8, (const char **)(v4 + 16)) == 0 )
        v7 = v4;
      v6 = *(uint32_t *)self + 4;
    }
  }
  v5 = (void *)(v7 + 24);
  if ( v7 == v6 )
    v5 = &Json::Value::null;
  Json::Value::CZString::Destroy((Json::Value::CZString::Self *)v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isValidIndex  (binary VA: 0x11a29d0)
// Original: Json::Value::isValidIndex
// ----------------------------------------------------------------------------
bool Json::Value::isValidIndex(Json::Value::Self *self, unsigned int a2)
{
  return Json::Value::size(self) > a2;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opIndex  (binary VA: 0x11a2a00)
// Original: Json::Value::operator[]
// ----------------------------------------------------------------------------
void * Json::Value::opIndex(Json::Value::Self *self, const char *a2)
{
  int v3;
  int v4;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef const char *_g4_t_v8[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  if ( *((uint8_t *)self + 8) == 0 )
    return &Json::Value::null;
  Json::Value::CZString::Construct((int *)v8, (int)(uintptr_t)(a2), 0);
  v3 = *(uint32_t *)(*(uint32_t *)self + 8);
  v6 = *(uint32_t *)self + 4;
  v7 = v6;
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)self + 4;
    do
    {
      while ( Json::Value::CZString::opLt((const char **)(v3 + 16), v8) == 0 )
      {
        v4 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_8;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_8:
    if ( v6 == v4 )
    {
      v6 = *(uint32_t *)self + 4;
    }
    else
    {
      if ( Json::Value::CZString::opLt(v8, (const char **)(v4 + 16)) == 0 )
        v7 = v4;
      v6 = *(uint32_t *)self + 4;
    }
  }
  v5 = (void *)(v7 + 24);
  if ( v7 == v6 )
    v5 = &Json::Value::null;
  Json::Value::CZString::Destroy((Json::Value::CZString::Self *)v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opIndex  (binary VA: 0x11a2b00)
// Original: Json::Value::operator[]
// ----------------------------------------------------------------------------
void * Json::Value::opIndex(Json::Value::Self *a1, const char **a2)
{
  return Json::Value::opIndex(a1, *a2);
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isMember  (binary VA: 0x11a2b30)
// Original: Json::Value::isMember
// ----------------------------------------------------------------------------
bool Json::Value::isMember(Json::Value::Self *self, char *a2)
{
  return (uintptr_t *)(intptr_t)(Json::Value::opIndex(self, a2)) != &Json::Value::null;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isMember  (binary VA: 0x11a2b70)
// Original: Json::Value::isMember
// ----------------------------------------------------------------------------
bool Json::Value::isMember(Json::Value::Self *a1, char **a2)
{
  return Json::Value::isMember(a1, *a2);
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isNull  (binary VA: 0x11a2ba0)
// Original: Json::Value::isNull
// ----------------------------------------------------------------------------
bool Json::Value::isNull(Json::Value::Self *self)
{
  return *((uint8_t *)self + 8) == 0;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opNot  (binary VA: 0x11a2bb0)
// Original: Json::Value::operator!
// ----------------------------------------------------------------------------
bool Json::Value::opNot(Json::Value::Self *self)
{
  return Json::Value::isNull(self);
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isBool  (binary VA: 0x11a2be0)
// Original: Json::Value::isBool
// ----------------------------------------------------------------------------
bool Json::Value::isBool(Json::Value::Self *self)
{
  return *((uint8_t *)self + 8) == 5;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isInt  (binary VA: 0x11a2bf0)
// Original: Json::Value::isInt
// ----------------------------------------------------------------------------
bool Json::Value::isInt(Json::Value::Self *self)
{
  return *((uint8_t *)self + 8) == 1;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isUInt  (binary VA: 0x11a2c00)
// Original: Json::Value::isUInt
// ----------------------------------------------------------------------------
bool Json::Value::isUInt(Json::Value::Self *self)
{
  return *((uint8_t *)self + 8) == 2;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isIntegral  (binary VA: 0x11a2c10)
// Original: Json::Value::isIntegral
// ----------------------------------------------------------------------------
int Json::Value::isIntegral(Json::Value::Self *self)
{
  int v1;
  int v2;

  v1 = *((uint8_t *)self + 8);
  v2 = v1 - 1;
  LOBYTE(v2) = (uint8_t)(v1 - 1) <= 1u;
  return ((uint8_t)v1 == 5) | v2;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isDouble  (binary VA: 0x11a2c30)
// Original: Json::Value::isDouble
// ----------------------------------------------------------------------------
bool Json::Value::isDouble(Json::Value::Self *self)
{
  return *((uint8_t *)self + 8) == 3;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isNumeric  (binary VA: 0x11a2c40)
// Original: Json::Value::isNumeric
// ----------------------------------------------------------------------------
int Json::Value::isNumeric(Json::Value::Self *self)
{
  char isIntegral;
  int v2;
  int v3;

  isIntegral = Json::Value::isIntegral(self);
  v2 = 1;
  if ( isIntegral == 0 )
  {
    LOBYTE(v3) = Json::Value::isDouble(self);
    return v3;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isString  (binary VA: 0x11a2c90)
// Original: Json::Value::isString
// ----------------------------------------------------------------------------
bool Json::Value::isString(Json::Value::Self *self)
{
  return *((uint8_t *)self + 8) == 4;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isArray  (binary VA: 0x11a2ca0)
// Original: Json::Value::isArray
// ----------------------------------------------------------------------------
int Json::Value::isArray(Json::Value::Self *self)
{
  unsigned int v1;
  char v2;

  v1 = (unsigned int)(uintptr_t)(self);
  v2 = *((uint8_t *)self + 8);
  LOBYTE(v1) = v2 == 6;
  return (v2 == 0) | v1;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::isObject  (binary VA: 0x11a2cc0)
// Original: Json::Value::isObject
// ----------------------------------------------------------------------------
int Json::Value::isObject(Json::Value::Self *self)
{
  unsigned int v1;
  char v2;

  v1 = (unsigned int)(uintptr_t)(self);
  v2 = *((uint8_t *)self + 8);
  LOBYTE(v1) = v2 == 7;
  return (v2 == 0) | v1;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::empty  (binary VA: 0x11a2ce0)
// Original: Json::Value::empty
// ----------------------------------------------------------------------------
bool Json::Value::empty(Json::Value::Self *self)
{
  bool result;
  char isObject;

  if ( Json::Value::isNull(self) )
    return Json::Value::size(self) == 0;
  if ( (uint8_t)Json::Value::isArray(self) != 0 )
    return Json::Value::size(self) == 0;
  isObject = Json::Value::isObject(self);
  result = false;
  if ( isObject != 0 )
    return Json::Value::size(self) == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::setComment  (binary VA: 0x11a2d50)
// Original: Json::Value::setComment
// ----------------------------------------------------------------------------
int Json::Value::setComment(int a1, char *a2, int a3)
{
  uint32_t *v3;
  uint32_t *v5;

  v3 = *(uint32_t **)(a1 + 12);
  if ( v3 == nullptr )
  {
    v5 = (uint32_t *)opNewArray(0x10u);
    *v5 = 3;
    Json::Value::CommentInfo::CommentInfo((Json::Value::CommentInfo::Self *)(v5 + 1));
    Json::Value::CommentInfo::CommentInfo((Json::Value::CommentInfo::Self *)(v5 + 2));
    Json::Value::CommentInfo::CommentInfo((Json::Value::CommentInfo::Self *)(v5 + 3));
    v3 = v5 + 1;
    *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v5 + 1);
  }
  return Json::Value::CommentInfo::setComment((Json::Value::CommentInfo::Self *)&v3[a3], a2);
}

// ----------------------------------------------------------------------------
// Function: Json::Value::setComment  (binary VA: 0x11a2df0)
// Original: Json::Value::setComment
// ----------------------------------------------------------------------------
int Json::Value::setComment(int a1, char **a2, int a3)
{
  return Json::Value::setComment(a1, *a2, a3);
}

// ----------------------------------------------------------------------------
// Function: Json::Value::hasComment  (binary VA: 0x11a2e30)
// Original: Json::Value::hasComment
// ----------------------------------------------------------------------------
bool Json::Value::hasComment(int a1, int a2)
{
  int v2;
  bool result;

  v2 = *(uint32_t *)(a1 + 12);
  result = false;
  if ( v2 != 0 )
    return *(uint32_t *)(v2 + 4 * a2) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::getComment  (binary VA: 0x11a2e50)
// Original: Json::Value::getComment
// ----------------------------------------------------------------------------
int Json::Value::getComment(int a1, int a2, int a3)
{
  int v4[3];

  if ( Json::Value::hasComment(a2, a3) )
    g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 12) + 4 * a3), (int)(uintptr_t)(v4));
  else
    g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(v4) + 1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::toStyledString  (binary VA: 0x11a2ee0)
// Original: Json::Value::toStyledString
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::toStyledString(Json::Value::Self *self)
{
  void *v1;
  void *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef void (**_g4_t_v7)(Json::StyledWriter::Self *);
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v11)) > _g4_s4 ? (32u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);

  Json::StyledWriter::Construct((Json::StyledWriter::Self *)&v7);
  Json::StyledWriter::write(self, (const Json::Value::Self *)&v7);
  v7 = (void (**)(Json::StyledWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091B90));
  v1 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  v2 = (void *)(v10 - 12);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = v9;
  v4 = (uint32_t *)(v8);
  if ( v9 != v8 )
  {
    do
    {
      v5 = (uint32_t *)(*v4 - 12);
      if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v5);
      ++v4;
    }
    while ( v3 != v4 );
    v4 = (uint32_t *)(v8);
  }
  if ( v4 != nullptr )
    opDelete(v4);
  Json::Writer::Destroy((Json::Writer::Self *)&v7);
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::begin  (binary VA: 0x11a3000)
// Original: Json::Value::begin
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::begin(Json::Value::Self *self, uint8_t *a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  if ( (uint8_t)(a2[8] - 6) <= 1u && *(uint32_t *)a2 != 0 )
  {
    v3 = *(uint32_t *)(*(uint32_t *)a2 + 12);
    Json::ValueConstIterator::Construct((int)(uintptr_t)(self), &v3);
  }
  else
  {
    Json::ValueConstIterator::Construct(self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::end  (binary VA: 0x11a3070)
// Original: Json::Value::end
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::end(Json::Value::Self *self, int a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  if ( (uint8_t)(*(uint8_t *)(a2 + 8) - 6) <= 1u && *(uint32_t *)a2 != 0 )
  {
    v3 = *(uint32_t *)a2 + 4;
    Json::ValueConstIterator::Construct((int)(uintptr_t)(self), &v3);
  }
  else
  {
    Json::ValueConstIterator::Construct(self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::begin_ea11a30e0  (binary VA: 0x11a30e0)
// Original: Json::Value::begin
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::begin_ea11a30e0(Json::Value::Self *self, uint8_t *a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  if ( (uint8_t)(a2[8] - 6) <= 1u && *(uint32_t *)a2 != 0 )
  {
    v3 = *(uint32_t *)(*(uint32_t *)a2 + 12);
    Json::ValueIterator::Construct((int)(uintptr_t)(self), &v3);
  }
  else
  {
    Json::ValueIterator::Construct(self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::end_ea11a3150  (binary VA: 0x11a3150)
// Original: Json::Value::end
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::end_ea11a3150(Json::Value::Self *self, int a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  if ( (uint8_t)(*(uint8_t *)(a2 + 8) - 6) <= 1u && *(uint32_t *)a2 != 0 )
  {
    v3 = *(uint32_t *)a2 + 4;
    Json::ValueIterator::Construct((int)(uintptr_t)(self), &v3);
  }
  else
  {
    Json::ValueIterator::Construct(self);
  }
  return self;
}



// ============================================================================
// Address:   0x11a31c0 (size: 34 bytes)
// Symbol:    _ZN4Json12PathArgumentC2Ev
// Demangled: Json::PathArgument::PathArgument(void)
// ============================================================================
// Alternative name is '_ZN4Json12PathArgumentC1Ev'
Json::PathArgument::Self *Json::PathArgument::Construct(Json::PathArgument::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 2) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: Json::PathArgument::Construct  (binary VA: 0x11a31f0)
// Original: Json::PathArgument::PathArgument
// ----------------------------------------------------------------------------
Json::PathArgument::Self * Json::PathArgument::Construct(Json::PathArgument::Self *self, unsigned int a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = a2;
  *((uint32_t *)self + 2) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::PathArgument::Construct  (binary VA: 0x11a3220)
// Original: Json::PathArgument::PathArgument
// ----------------------------------------------------------------------------
Json::PathArgument::Self * Json::PathArgument::Construct(Json::PathArgument::Self *self, char *a2)
{
  Json::PathArgument::Self *result;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  result = (Json::PathArgument::Self *)g4_std::string::construct_from_cstr((int)(uintptr_t)(self), a2, (int)(uintptr_t)(&v3));
  *((uint32_t *)self + 2) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::PathArgument::Construct  (binary VA: 0x11a3270)
// Original: Json::PathArgument::PathArgument
// ----------------------------------------------------------------------------
int Json::PathArgument::Construct(int a1, char **a2)
{
  int result;
  uint8_t v3[5];

  result = (int)(uintptr_t)(g4_std::string::construct_from_cstr(a1, *a2, (int)(uintptr_t)(v3)));
  *(uint32_t *)(a1 + 8) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Path::invalidPath  (binary VA: 0x11a32c0)
// Original: Json::Path::invalidPath
// ----------------------------------------------------------------------------
void Json::Path::invalidPath()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: Json::Path::resolve  (binary VA: 0x11a32d0)
// Original: Json::Path::resolve
// ----------------------------------------------------------------------------
const Json::Value::Self * Json::Path::resolve(Json::Path::Self *self, const Json::Value::Self *a2)
{
  int i;
  int v4;
  unsigned int v6;

  for ( i = *(uint32_t *)self; *((uint32_t *)self + 1) != i; i += 12 )
  {
    while ( 1 )
    {
      v4 = *(uint32_t *)(i + 8);
      if ( v4 != 1 )
        break;
      if ( (uint8_t)Json::Value::isArray((Json::Value::Self *)(a2)) != 0 )
        Json::Value::isValidIndex((Json::Value::Self *)(a2), *(uint32_t *)(i + 4));
      v6 = *(uint32_t *)(i + 4);
      i += 12;
      a2 = (const Json::Value::Self *)Json::Value::opIndex(a2, v6);
      if ( *((uint32_t *)self + 1) == i )
        return a2;
    }
    if ( v4 == 2 )
    {
      Json::Value::isObject((Json::Value::Self *)(a2));
      a2 = (const Json::Value::Self *)Json::Value::opIndex(a2, (const char **)i);
    }
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::clear  (binary VA: 0x11a3380)
// Original: Json::Value::clear
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::clear(Json::Value::Self *self)
{
  Json::Value::Self *result;
  uint32_t *v2;

  result = self;
  if ( (uint8_t)(*((uint8_t *)self + 8) - 6) <= 1u )
  {
    v2 = *(uint32_t **)self;
    g4_std::Rb_tree_Json_Value_CZString_pair_bd5427::M_erase(
      *(uint32_t *)self,
      *(void **)(*(uint32_t *)self + 8));
    v2[2] = 0;
    v2[3] = (uint32_t)(uintptr_t)(v2 + 1);
    v2[4] = (uint32_t)(uintptr_t)(v2 + 1);
    v2[5] = 0;
    return (Json::Value::Self *)(v2 + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::Destroy  (binary VA: 0x11a33e0)
// Original: Json::Value::~Value
// ----------------------------------------------------------------------------
void Json::Value::Destroy(Json::Value::Self *self)
{
  uint8_t v1;
  Json::Value::CommentInfo::Self *v2;
  Json::Value::CommentInfo::Self *i;
  void **v4;
  int **v5;

  v1 = *((uint8_t *)self + 8);
  if ( v1 == 4 )
  {
    if ( (*((uint8_t *)self + 9) & 1) != 0 )
    {
      v5 = sub_11A14F0();
      (*(void (**)(int *, uint32_t))(**v5 + 20))(*v5, *(uint32_t *)self);
    }
  }
  else if ( v1 >= 4u && (uint8_t)(v1 - 6) <= 1u )
  {
    v4 = *(void ***)self;
    if ( *(uint32_t *)self != 0 )
    {
      g4_std::Rb_tree_Json_Value_CZString_pair_bd5427::M_erase(
        *(uint32_t *)self,
        v4[2]);
      opDelete(v4);
    }
  }
  v2 = *((Json::Value::CommentInfo::Self **)self + 3);
  if ( v2 != nullptr )
  {
    for ( i = (Json::Value::CommentInfo::Self *)((char *)v2 + 4 * *((uint32_t *)v2 - 1));
          v2 != i;
          v2 = *((Json::Value::CommentInfo::Self **)self + 3) )
    {
      i = (Json::Value::CommentInfo::Self *)((char *)i - 4);
      Json::Value::CommentInfo::Destroy(i);
    }
    opDeleteArray((char *)v2 - 4);
  }
}

// ----------------------------------------------------------------------------
// Function: Json::Value::getMemberNames  (binary VA: 0x11a3490)
// Original: Json::Value::getMemberNames
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::getMemberNames(int a1, Json::Value::Self *self, uint8_t *a3)
{
  int v3;
  unsigned int v4;
  int v5;
  char *v6;
  char *v7;
  void *v8;
  char *v9;
  char *v10;
  unsigned int v11;
  size_t v12;
  int v13;
  int v14;
  char *v15;
  bool v16;
  uint32_t *v17;
  typedef int _g4_t_i;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef void *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef char *_g4_t_v26;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_i)) > _g4_s0 ? (4u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v22)) > _g4_s3 ? (28u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v23)) > _g4_s4 ? (32u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v24)) > _g4_s5 ? (36u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v25)) > _g4_s6 ? (40u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v26)) > _g4_s7 ? (44u + sizeof(_g4_t_v26)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);

  if ( a3[8] != 0 )
  {
    v24 = nullptr;
    v25 = nullptr;
    v26 = nullptr;
    v3 = *(uint32_t *)a3;
    v4 = *(uint32_t *)(*(uint32_t *)a3 + 20);
    if ( v4 > 0x3FFFFFFF )
      sub_1900180("vector::reserve");
    if ( v4 != 0 )
    {
      v21 = 4 * v4;
      v20 = (char *)opNew(4 * v4);
      v4 = (unsigned int)(uintptr_t)(a3);
      v24 = v20;
      v25 = v20;
      v26 = &v20[v21];
      v3 = *(uint32_t *)a3;
    }
    v5 = *(uint32_t *)(v3 + 12);
    for ( i = v3 + 4; i != v5; v5 = sub_19048E0(v5) )
    {
      v6 = (char *)Json::Value::CZString::c_str((Json::Value::CZString::Self *)(v5 + 16));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), v6, (int)(uintptr_t)(&v22));
      if ( v25 == v26 )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)&v24, v25, (int)(uintptr_t)(&v23));
      }
      else
      {
        v7 = nullptr;
        if ( v25 != nullptr )
        {
          g4_std::string::construct_copy(v25, &v23);
          v7 = v25;
        }
        v25 = v7 + 4;
      }
      v8 = (void *)(v23 - 12);
      if ( (uint32_t *)(v23 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
    }
    v9 = v25;
    v10 = (char *)v24;
    v11 = (v25 - (char *)((uint8_t *)v24)) >> 2;
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    if ( v11 != 0 )
    {
      if ( v11 > 0x3FFFFFFF )
        sub_18FFEE0(a1, v4);
      v12 = 4 * v11;
      v13 = opNew(v12);
      v9 = v25;
      v10 = (char *)v24;
    }
    else
    {
      v12 = 0;
      v13 = 0;
    }
    *(uint32_t *)self = v13;
    *((uint32_t *)self + 1) = v13;
    *((uint32_t *)self + 2) = v13 + v12;
    if ( v9 == v10 )
    {
      *((uint32_t *)self + 1) = v13;
    }
    else
    {
      v14 = v13;
      do
      {
        if ( v14 != 0 )
          g4_std::string::construct_copy(v14, v10);
        v10 += 4;
        v14 += 4;
      }
      while ( v9 != v10 );
      v15 = v25;
      v10 = (char *)v24;
      v16 = v25 == v24;
      *((uint32_t *)self + 1) = v14;
      if ( !v16 )
      {
        do
        {
          v17 = (uint32_t *)(*(uint32_t *)v10 - 12);
          if ( v17 != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v10 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v17);
          }
          v10 += 4;
        }
        while ( v10 != v15 );
        v10 = (char *)v24;
      }
    }
    if ( v10 != nullptr )
      opDelete(v10);
    return self;
  }
  else
  {
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: Json::Path::addPathInArg  (binary VA: 0x11a3790)
// Original: Json::Path::addPathInArg
// ----------------------------------------------------------------------------
int * Json::Path::addPathInArg(int a1, int a2, int a3, int **a4, int *a5)
{
  int *result;
  int v6;
  int v7;
  int v8;

  result = *a4;
  if ( *(int **)(a3 + 4) != *a4 )
  {
    v6 = *result;
    result = a5;
    if ( *(int **)(v6 + 8) == a5 )
    {
      v7 = *(uint32_t *)(a1 + 4);
      if ( v7 == *(uint32_t *)(a1 + 8) )
      {
        return (int *)g4_std::vector_Json_PathArgument_b5c2fb::M_insert_aux(a1, v7, v6);
      }
      else
      {
        v8 = 0;
        if ( v7 != 0 )
        {
          g4_std::string::construct_copy(v7, v6);
          *(uint32_t *)(v7 + 4) = *(uint32_t *)(v6 + 4);
          *(uint32_t *)(v7 + 8) = *(uint32_t *)(v6 + 8);
          v8 = *(uint32_t *)(a1 + 4);
        }
        result = (int *)(v8 + 12);
        *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(result);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Path::makePath  (binary VA: 0x11a3840)
// Original: Json::Path::makePath
// ----------------------------------------------------------------------------
void Json::Path::makePath(int a1, uint32_t *a2, int **a3)
{
  uint8_t *v3;
  int v4;
  char v5;
  size_t *v6;
  uint32_t *v7;
  int v8;
  int v9;
  void *v10;
  char *v11;
  char v12;
  char *v13;
  unsigned int v14;
  int v15;
  int v16;
  void *v17;
  typedef size_t *_g4_t_v18;
  typedef uint8_t *_g4_t_v19;
  typedef size_t _g4_t_n;
  typedef int *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef uint32_t _g4_t_v23[3];
  typedef uint32_t _g4_t_v24[10];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_n)) > _g4_s2 ? (12u + sizeof(_g4_t_n)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v21)) > _g4_s3 ? (32u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v22)) > _g4_s4 ? (36u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v24)) > _g4_s6 ? (52u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);

  v3 = (uint8_t *)*a2;
  v4 = *a2 + *(uint32_t *)(*a2 - 12);
  v21 = *a3;
LABEL_2:
  while ( (uint8_t *)v4 != v3 )
  {
    while ( 1 )
    {
      v5 = *v3;
      if ( *v3 == 91 )
        break;
      if ( v5 == 37 )
      {
        ++v3;
        Json::Path::addPathInArg(a1, (int)(uintptr_t)(a2), (int)(uintptr_t)(a3), &v21, (int *)((char *)&dword_0 + 2));
        goto LABEL_2;
      }
      if ( v5 == 46 )
      {
        ++v3;
        goto LABEL_2;
      }
      v19 = v3;
      if ( v3 != (uint8_t *)v4 )
      {
        while ( strchr("[.", v5) == nullptr )
        {
          if ( (uint8_t *)v4 == ++v19 )
            break;
          v5 = *v19;
        }
      }
      if ( v3 == v19 )
      {
        v7 = &dword_213B814;
      }
      else
      {
        n = v19 - v3;
        v6 = (size_t *)sub_1938930(v19 - v3, 0);
        v7 = (uint32_t *)(v6 + 3);
        if ( v19 - v3 == 1 )
        {
          *((uint8_t *)v6 + 12) = *v3;
        }
        else
        {
          v18 = v6;
          memcpy(v7, v3, n);
          v6 = v18;
        }
        if ( v6 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v6[2] = 0;
          *v6 = n;
          *((uint8_t *)v6 + n + 12) = 0;
        }
      }
      v22 = (char *)v7;
      Json::PathArgument::Construct((int)(uintptr_t)(v24), &v22);
      v8 = *(uint32_t *)(a1 + 4);
      if ( v8 == *(uint32_t *)(a1 + 8) )
      {
        g4_std::vector_Json_PathArgument_b5c2fb::M_insert_aux(a1, v8, v24);
      }
      else
      {
        v9 = 0;
        if ( v8 != 0 )
        {
          g4_std::string::construct_copy(v8, v24);
          *(uint32_t *)(v8 + 4) = v24[1];
          *(uint32_t *)(v8 + 8) = v24[2];
          v9 = *(uint32_t *)(a1 + 4);
        }
        *(uint32_t *)(a1 + 4) = v9 + 12;
      }
      v10 = (void *)(v24[0] - 12);
      if ( (uint32_t *)(v24[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v24[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v10);
      }
      v11 = v22 - 12;
      if ( v22 - 12 != (char *)dword_213B808 )
      {
        v3 = v19;
        if ( __sync_fetch_and_add((volatile int32_t *)v22 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v11);
        goto LABEL_2;
      }
      v3 = v19;
      if ( (uint8_t *)v4 == v19 )
        return;
    }
    v12 = v3[1];
    v13 = (char *)(v3 + 1);
    if ( v12 == 37 )
    {
      Json::Path::addPathInArg(a1, (int)(uintptr_t)(a2), (int)(uintptr_t)(a3), &v21, (int *)((char *)&dword_0 + 1));
    }
    else
    {
      v14 = 0;
      if ( (char *)v4 != v13 )
      {
        while ( v12 > 47 )
        {
          if ( v12 > 57 )
            break;
          ++v13;
          v14 = v12 + 10 * v14 - 48;
          if ( (char *)v4 == v13 )
            break;
          v12 = *v13;
        }
      }
      Json::PathArgument::Construct((Json::PathArgument::Self *)v23, v14);
      v15 = *(uint32_t *)(a1 + 4);
      if ( v15 == *(uint32_t *)(a1 + 8) )
      {
        g4_std::vector_Json_PathArgument_b5c2fb::M_insert_aux(a1, v15, v23);
      }
      else
      {
        v16 = 0;
        if ( v15 != 0 )
        {
          g4_std::string::construct_copy(v15, v23);
          *(uint32_t *)(v15 + 4) = v23[1];
          *(uint32_t *)(v15 + 8) = v23[2];
          v16 = *(uint32_t *)(a1 + 4);
        }
        *(uint32_t *)(a1 + 4) = v16 + 12;
      }
      v17 = (void *)(v23[0] - 12);
      if ( (uint32_t *)(v23[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v23[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v17);
      }
    }
    if ( v13 == (char *)v4 )
    {
      v3 = (uint8_t *)v4;
    }
    else
    {
      v3 = (uint8_t *)(v13 + 1);
      if ( *v13 == 93 )
        continue;
    }
    Json::Path::invalidPath();
  }
}

// ----------------------------------------------------------------------------
// Function: Json::Path::Construct  (binary VA: 0x11a3c50)
// Original: Json::Path::Path
// ----------------------------------------------------------------------------
void Json::Path::Construct(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v7;
  int *v8;
  int *v9;
  int *v10;
  int *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef void *_g4_t_v17;
  typedef int *_g4_t_v18;
  typedef void *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v16)) > _g4_s4 ? (16u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v17)) > _g4_s5 ? (20u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v18)) > _g4_s6 ? (24u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v19)) > _g4_s7 ? (28u + sizeof(_g4_t_v19)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);

  v12 = a3;
  v17 = nullptr;
  v18 = nullptr;
  v19 = nullptr;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  g4_std::vector_Json_PathArgument_const_7c07f7::M_insert_aux((int)(uintptr_t)(&v17), nullptr, (int)(uintptr_t)(&v12));
  v7 = (int *)v19;
  v13 = a4;
  if ( v18 == v19 )
  {
    g4_std::vector_Json_PathArgument_const_7c07f7::M_insert_aux((int)(uintptr_t)(&v17), v19, (int)(uintptr_t)(&v13));
    v9 = v18;
    v7 = (int *)v19;
  }
  else
  {
    v8 = nullptr;
    if ( v18 != nullptr )
    {
      *v18 = a4;
      v8 = v18;
      v7 = (int *)v19;
    }
    v9 = v8 + 1;
    v18 = v9;
  }
  v14 = a5;
  if ( v7 == v9 )
  {
    g4_std::vector_Json_PathArgument_const_7c07f7::M_insert_aux((int)(uintptr_t)(&v17), v7, (int)(uintptr_t)(&v14));
    v10 = v18;
    v7 = (int *)v19;
  }
  else
  {
    if ( v9 != nullptr )
    {
      *v9 = a5;
      v9 = v18;
      v7 = (int *)v19;
    }
    v10 = v9 + 1;
    v18 = v10;
  }
  v15 = a6;
  if ( v10 == v7 )
  {
    g4_std::vector_Json_PathArgument_const_7c07f7::M_insert_aux((int)(uintptr_t)(&v17), v7, (int)(uintptr_t)(&v15));
    v11 = v18;
    v7 = (int *)v19;
  }
  else
  {
    if ( v10 != nullptr )
    {
      *v10 = a6;
      v10 = v18;
      v7 = (int *)v19;
    }
    v11 = v10 + 1;
    v18 = v11;
  }
  v16 = a7;
  if ( v11 == v7 )
  {
    g4_std::vector_Json_PathArgument_const_7c07f7::M_insert_aux((int)(uintptr_t)(&v17), v11, (int)(uintptr_t)(&v16));
  }
  else
  {
    if ( v11 != nullptr )
    {
      *v11 = a7;
      v11 = v18;
    }
    v18 = v11 + 1;
  }
  Json::Path::makePath((int)(uintptr_t)(a1), a2, (int **)&v17);
  if ( v17 != nullptr )
    opDelete(v17);
}

// ----------------------------------------------------------------------------
// Function: Json::Value::Construct  (binary VA: 0x11a3e20)
// Original: Json::Value::Value
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::Construct(Json::Value::Self *self, const Json::Value::Self *a2)
{
  uint8_t v2;
  int v3;
  int v4;
  Json::Value::Self *result;
  uint32_t *v6;
  int v7;
  int **v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int i;
  Json::Value::CommentInfo::Self *v14;
  uint32_t *v15;
  int v16;

  v2 = *((uint8_t *)a2 + 8);
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 8) = v2;
  if ( v2 <= 7u )
  {
    v3 = 1 << v2;
    if ( ((1 << v2) & 0x2F) != 0 )
    {
      v4 = *(uint32_t *)a2;
      *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
      *(uint32_t *)self = v4;
    }
    else if ( (v3 & 0xC0) != 0 )
    {
      v9 = (uint32_t *)opNew(0x18u);
      v16 = *(uint32_t *)a2;
      v10 = *(uint32_t *)a2;
      v9[1] = 0;
      v9[2] = 0;
      v9[5] = 0;
      v9[3] = (uint32_t)(uintptr_t)(v9 + 1);
      v9[4] = (uint32_t)(uintptr_t)(v9 + 1);
      v11 = *(uint32_t *)(v10 + 8);
      if ( v11 != 0 )
      {
        v12 = (int)(uintptr_t)(g4_std::Rb_tree_Json_Value_CZString_pair_bd5427::M_copy(
                v9,
                v11,
                v9 + 1));
        v9[2] = v12;
        for ( i = v12; *(uint32_t *)(i + 8) != 0; i = *(uint32_t *)(i + 8) )
          ;
        v9[3] = i;
        while ( *(uint32_t *)(v12 + 12) != 0 )
          v12 = *(uint32_t *)(v12 + 12);
        v9[4] = v12;
        v9[5] = *(uint32_t *)(v16 + 20);
      }
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v9);
    }
    else if ( (v3 & 0x10) != 0 )
    {
      if ( *(uint32_t *)a2 != 0 )
      {
        v8 = sub_11A14F0();
        *(uint32_t *)self = (*(int (**)(int *, uint32_t, int))(**v8 + 16))(*v8, *(uint32_t *)a2, -1);
        *((uint8_t *)self + 9) |= 1u;
      }
      else
      {
        *(uint32_t *)self = 0;
      }
    }
  }
  result = *((Json::Value::Self **)a2 + 3);
  if ( result != nullptr )
  {
    v6 = (uint32_t *)opNewArray(0x10u);
    *v6 = 3;
    v15 = v6 + 1;
    Json::Value::CommentInfo::CommentInfo((Json::Value::CommentInfo::Self *)(v6 + 1));
    Json::Value::CommentInfo::CommentInfo((Json::Value::CommentInfo::Self *)(v6 + 2));
    v14 = (Json::Value::CommentInfo::Self *)(v6 + 3);
    v7 = 0;
    Json::Value::CommentInfo::CommentInfo(v14);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v15);
    do
    {
      result = *(Json::Value::Self **)(*((uint32_t *)a2 + 3) + v7);
      if ( result != nullptr )
        result = (Json::Value::Self *)Json::Value::CommentInfo::setComment(
                                  (Json::Value::CommentInfo::Self *)(v7 + *((uint32_t *)self + 3)),
                                  *(const char **)(*((uint32_t *)a2 + 3) + v7));
      v7 += 4;
    }
    while ( v7 != 12 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::Path::resolve  (binary VA: 0x11a3fb0)
// Original: Json::Path::resolve
// ----------------------------------------------------------------------------
Json::Path::Self * Json::Path::resolve(Json::Path::Self *self, const Json::Value::Self *a2, const Json::Value::Self *a3, Json::Value::Self *a4)
{
  int v5;
  int v6;

  v5 = *(uint32_t *)a2;
  if ( *(uint32_t *)a2 != *((uint32_t *)a2 + 1) )
  {
    while ( 1 )
    {
      v6 = *(uint32_t *)(v5 + 8);
      if ( v6 == 1 )
      {
        if ( (uint8_t)Json::Value::isArray((Json::Value::Self *)(a3)) == 0 || Json::Value::isValidIndex(a3, *(uint32_t *)(v5 + 4)) )
          goto LABEL_7;
        a3 = (const Json::Value::Self *)Json::Value::opIndex(a3, *(uint32_t *)(v5 + 4));
LABEL_4:
        v5 += 12;
        if ( *((uint32_t *)a2 + 1) == v5 )
          break;
      }
      else
      {
        if ( v6 != 2 )
          goto LABEL_4;
        if ( (uint8_t)Json::Value::isObject((Json::Value::Self *)(a3)) == 0
          || (a3 = (const Json::Value::Self *)Json::Value::opIndex(a3, (const char **)v5)) == (const Json::Value::Self *)&Json::Value::null )
        {
LABEL_7:
          Json::Value::Construct(self, a4);
          return self;
        }
        v5 += 12;
        if ( *((uint32_t *)a2 + 1) == v5 )
          break;
      }
    }
  }
  Json::Value::Construct(self, a3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::get  (binary VA: 0x11a40a0)
// Original: Json::Value::get
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::get(Json::Value::Self *self, Json::Value::Self *a2, const Json::Value::Self *a3, Json::Value::Self *a4)
{
  const Json::Value::Self *v4;

  v4 = (const Json::Value::Self *)Json::Value::opIndex(a2, (const char *)a3);
  if ( v4 == (const Json::Value::Self *)&Json::Value::null )
    v4 = a4;
  Json::Value::Construct(self, v4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::get  (binary VA: 0x11a4100)
// Original: Json::Value::get
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::get(Json::Value::Self *a1, char *a2, const Json::Value::Self **a3, Json::Value::Self *a4)
{
  Json::Value::get(a1, (Json::Value::Self *)a2, *a3, a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::get_ea11a4160  (binary VA: 0x11a4160)
// Original: Json::Value::get
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::get_ea11a4160(Json::Value::Self *self, Json::Value::Self *a2, const Json::Value::Self *a3, Json::Value::Self *a4)
{
  const Json::Value::Self *v4;

  v4 = (const Json::Value::Self *)Json::Value::opIndex(a2, (unsigned int)(uintptr_t)(a3));
  if ( v4 == (const Json::Value::Self *)&Json::Value::null )
    v4 = a4;
  Json::Value::Construct(self, v4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opAssign  (binary VA: 0x11a41c0)
// Original: Json::Value::operator=
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::opAssign(Json::Value::Self *self, const Json::Value::Self *a2)
{
  uint8_t v3[16];

  Json::Value::Construct((Json::Value::Self *)v3, a2);
  Json::Value::swap(self, (Json::Value::Self *)v3);
  Json::Value::Destroy((Json::Value::Self *)v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::resolveReference  (binary VA: 0x11a4220)
// Original: Json::Value::resolveReference
// ----------------------------------------------------------------------------
int Json::Value::resolveReference(Json::Value::Self *self, const char *a2, bool a3)
{
  bool v3;
  int v4;
  int v5;
  int v6;
  typedef int _g4_t_v8;
  typedef const char *_g4_t_v9[2];
  typedef uint8_t _g4_t_v10[16];
  typedef uint8_t _g4_t_v11[8];
  typedef uint8_t _g4_t_v12[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v11)) > _g4_s3 ? (40u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v12)) > _g4_s4 ? (48u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);

  v3 = a3;
  if ( *((uint8_t *)self + 8) == 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v10), (char *)&loc_6 + 1);
    Json::Value::opAssign(self, (const Json::Value::Self *)v10);
    Json::Value::Destroy((Json::Value::Self *)v10);
    v3 = a3;
  }
  Json::Value::CZString::Construct((int *)v9, (int)(uintptr_t)(a2), !v3 ? 2 : 0);
  v4 = *(uint32_t *)(*(uint32_t *)self + 8);
  v5 = *(uint32_t *)self + 4;
  if ( v4 == 0 )
    goto LABEL_10;
  do
  {
    while ( Json::Value::CZString::opLt((const char **)(v4 + 16), v9) == 0 )
    {
      v5 = v4;
      v4 = *(uint32_t *)(v4 + 8);
      if ( v4 == 0 )
        goto LABEL_8;
    }
    v4 = *(uint32_t *)(v4 + 12);
  }
  while ( v4 != 0 );
LABEL_8:
  if ( v5 != *(uint32_t *)self + 4 && Json::Value::CZString::opEq((const char **)(v5 + 16), v9) )
  {
    v6 = v5 + 24;
  }
  else
  {
LABEL_10:
    Json::Value::CZString::Construct((Json::Value::CZString::Self *)v11, (const Json::Value::CZString::Self *)v9);
    Json::Value::Construct((Json::Value::Self *)v12, (const Json::Value::Self *)&Json::Value::null);
    g4_std::Rb_tree_Json_Value_CZString_pair_bd5427::M_insert_unique(&v8);
    v6 = v8 + 24;
    Json::Value::Destroy((Json::Value::Self *)v12);
    Json::Value::CZString::Destroy((Json::Value::CZString::Self *)v11);
  }
  Json::Value::CZString::Destroy((Json::Value::CZString::Self *)v9);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opIndex_ea11a4380  (binary VA: 0x11a4380)
// Original: Json::Value::operator[]
// ----------------------------------------------------------------------------
int Json::Value::opIndex_ea11a4380(Json::Value::Self *a1, const char **a2)
{
  return Json::Value::resolveReference(a1, *a2, true);
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opIndex  (binary VA: 0x11a43c0)
// Original: Json::Value::operator[]
// ----------------------------------------------------------------------------
int Json::Value::opIndex(Json::Value::Self *self, char *a2)
{
  return Json::Value::resolveReference(self, a2, false);
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opIndex  (binary VA: 0x11a4400)
// Original: Json::Value::operator[]
// ----------------------------------------------------------------------------
int Json::Value::opIndex(Json::Value::Self *a1, char **a2)
{
  return Json::Value::opIndex(a1, *a2);
}

// ----------------------------------------------------------------------------
// Function: Json::Value::opIndex_ea11a4430  (binary VA: 0x11a4430)
// Original: Json::Value::operator[]
// ----------------------------------------------------------------------------
int Json::Value::opIndex_ea11a4430(Json::Value::Self *self, unsigned int a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v6;
  typedef const char *_g4_t_v7[2];
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[8];
  typedef uint8_t _g4_t_v10[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v9)) > _g4_s3 ? (40u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v10)) > _g4_s4 ? (48u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);

  if ( *((uint8_t *)self + 8) == 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v8), &loc_6);
    Json::Value::opAssign(self, (const Json::Value::Self *)v8);
    Json::Value::Destroy((Json::Value::Self *)v8);
  }
  Json::Value::CZString::Construct((Json::Value::CZString::Self *)v7, a2);
  v2 = *(uint32_t *)(*(uint32_t *)self + 8);
  v3 = *(uint32_t *)self + 4;
  if ( v2 == 0 )
    goto LABEL_10;
  do
  {
    while ( Json::Value::CZString::opLt((const char **)(v2 + 16), v7) == 0 )
    {
      v3 = v2;
      v2 = *(uint32_t *)(v2 + 8);
      if ( v2 == 0 )
        goto LABEL_8;
    }
    v2 = *(uint32_t *)(v2 + 12);
  }
  while ( v2 != 0 );
LABEL_8:
  if ( v3 != *(uint32_t *)self + 4 && Json::Value::CZString::opEq((const char **)(v3 + 16), v7) )
  {
    v4 = v3 + 24;
  }
  else
  {
LABEL_10:
    Json::Value::CZString::Construct((Json::Value::CZString::Self *)v9, (const Json::Value::CZString::Self *)v7);
    Json::Value::Construct((Json::Value::Self *)v10, (const Json::Value::Self *)&Json::Value::null);
    g4_std::Rb_tree_Json_Value_CZString_pair_bd5427::M_insert_unique(&v6);
    v4 = v6 + 24;
    Json::Value::Destroy((Json::Value::Self *)v10);
    Json::Value::CZString::Destroy((Json::Value::CZString::Self *)v9);
  }
  Json::Value::CZString::Destroy((Json::Value::CZString::Self *)v7);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: Json::Path::make  (binary VA: 0x11a4580)
// Original: Json::Path::make
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Path::make(Json::Path::Self *self, Json::Value::Self *a2)
{
  int i;
  int v4;
  unsigned int v6;

  for ( i = *(uint32_t *)self; *((uint32_t *)self + 1) != i; i += 12 )
  {
    while ( 1 )
    {
      v4 = *(uint32_t *)(i + 8);
      if ( v4 != 1 )
        break;
      Json::Value::isArray(a2);
      v6 = *(uint32_t *)(i + 4);
      i += 12;
      a2 = (Json::Value::Self *)Json::Value::opIndex(a2, v6);
      if ( *((uint32_t *)self + 1) == i )
        return a2;
    }
    if ( v4 == 2 )
    {
      Json::Value::isObject(a2);
      a2 = (Json::Value::Self *)Json::Value::opIndex(a2, (char **)i);
    }
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::append  (binary VA: 0x11a4610)
// Original: Json::Value::append
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::append(Json::Value::Self *self, const Json::Value::Self *a2)
{
  unsigned int v2;
  Json::Value::Self *v3;

  v2 = Json::Value::size(self);
  v3 = (Json::Value::Self *)Json::Value::opIndex(self, v2);
  return Json::Value::opAssign(v3, a2);
}

// ----------------------------------------------------------------------------
// Function: Json::Value::removeMember  (binary VA: 0x11a4660)
// Original: Json::Value::removeMember
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::removeMember(Json::Value::Self *self, const char *a2, int a3)
{
  int v3;
  int v4;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef const char *_g4_t_v8[2];
  typedef uint8_t _g4_t_v9[44];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v9)) > _g4_s3 ? (32u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  if ( a2[8] != 0 )
  {
    Json::Value::CZString::Construct((int *)v8, a3, 0);
    v3 = *(uint32_t *)(*(uint32_t *)a2 + 8);
    v6 = *(uint32_t *)a2 + 4;
    v7 = v6;
    if ( v3 != 0 )
    {
      v4 = *(uint32_t *)a2 + 4;
      do
      {
        while ( Json::Value::CZString::opLt((const char **)(v3 + 16), v8) == 0 )
        {
          v4 = v3;
          v3 = *(uint32_t *)(v3 + 8);
          if ( v3 == 0 )
            goto LABEL_7;
        }
        v3 = *(uint32_t *)(v3 + 12);
      }
      while ( v3 != 0 );
LABEL_7:
      if ( v6 == v4 )
      {
        v6 = *(uint32_t *)a2 + 4;
      }
      else
      {
        if ( Json::Value::CZString::opLt(v8, (const char **)(v4 + 16)) == 0 )
          v7 = v4;
        v6 = *(uint32_t *)a2 + 4;
      }
    }
    if ( v7 == v6 )
    {
      Json::Value::Construct(self, (const Json::Value::Self *)&Json::Value::null);
    }
    else
    {
      Json::Value::Construct((Json::Value::Self *)v9, (const Json::Value::Self *)(v7 + 24));
      g4_std::Rb_tree_Json_Value_CZString_pair_bd5427::M_erase_aux(
        *(uint32_t *)a2,
        v7);
      Json::Value::Construct(self, (const Json::Value::Self *)v9);
      Json::Value::Destroy((Json::Value::Self *)v9);
    }
    Json::Value::CZString::Destroy((Json::Value::CZString::Self *)v8);
    return self;
  }
  else
  {
    Json::Value::Construct(self, (const Json::Value::Self *)&Json::Value::null);
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: Json::Value::removeMember  (binary VA: 0x11a47f0)
// Original: Json::Value::removeMember
// ----------------------------------------------------------------------------
Json::Value::Self * Json::Value::removeMember(Json::Value::Self *a1, char *a2, int *a3)
{
  Json::Value::removeMember(a1, a2, *a3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Json::Value::resize  (binary VA: 0x11a4840)
// Original: Json::Value::resize
// ----------------------------------------------------------------------------
int Json::Value::resize(Json::Value::Self *self, unsigned int a2)
{
  unsigned int v2;
  uint32_t *v3;
  uint32_t *v4;
  int result;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  typedef uint32_t *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef unsigned int _g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint8_t _g4_t_v16[8];
  typedef uint8_t _g4_t_v17[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v12)) > _g4_s3 ? (16u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v13)) > _g4_s4 ? (20u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v14)) > _g4_s5 ? (24u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v15)) > _g4_s6 ? (28u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v16)) > _g4_s7 ? (40u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v17)) > _g4_s8 ? (48u + sizeof(_g4_t_v17)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  if ( *((uint8_t *)self + 8) == 0 )
  {
    Json::Value::Construct(v17, 6);
    Json::Value::opAssign(self, (const Json::Value::Self *)v17);
    Json::Value::Destroy((Json::Value::Self *)v17);
  }
  v2 = Json::Value::size(self);
  v14 = v2;
  if ( a2 == 0 )
    return (int)(uintptr_t)(Json::Value::clear(self));
  if ( v2 < a2 )
    return (int)(uintptr_t)(Json::Value::opIndex(self, a2 - 1));
  v13 = a2;
  if ( v2 > a2 )
  {
    do
    {
      Json::Value::CZString::Construct((Json::Value::CZString::Self *)v16, v13);
      v10 = *(uint32_t *)self;
      v3 = *(uint32_t **)(*(uint32_t *)self + 8);
      v12 = *(uint32_t *)self + 4;
      v11 = (uint32_t *)v12;
      v4 = (uint32_t *)v12;
      if ( v3 != nullptr )
      {
        while ( 1 )
        {
          while ( (uint8_t)Json::Value::CZString::opLt(
                                     (const char **)((Json::Value::CZString::Self *)(v3 + 4)),
                                     (const char **)((const Json::Value::CZString::Self *)v16)) != 0 )
          {
            v3 = (uint32_t *)v3[3];
            if ( v3 == nullptr )
              goto LABEL_12;
          }
          if ( (uint8_t)Json::Value::CZString::opLt(
                                  (const char **)((Json::Value::CZString::Self *)v16),
                                  (const char **)((const Json::Value::CZString::Self *)(v3 + 4))) == 0 )
            break;
          v11 = v3;
          v3 = (uint32_t *)v3[2];
          if ( v3 == nullptr )
          {
LABEL_12:
            v4 = v11;
            goto LABEL_13;
          }
        }
        v6 = (uint32_t *)v3[2];
        if ( v3[3] != 0 )
        {
          v7 = (uint32_t *)v3[3];
          v15 = (uint32_t *)v3[2];
          do
          {
            while ( (uint8_t)Json::Value::CZString::opLt(
                                       (const char **)((Json::Value::CZString::Self *)v16),
                                       (const char **)((const Json::Value::CZString::Self *)(v7 + 4))) != 0 )
            {
              v11 = v7;
              v7 = (uint32_t *)v7[2];
              if ( v7 == nullptr )
                goto LABEL_27;
            }
            v7 = (uint32_t *)v7[3];
          }
          while ( v7 != nullptr );
LABEL_27:
          v6 = v15;
        }
        v4 = v3;
        if ( v6 != nullptr )
        {
          v8 = v6;
          do
          {
            if ( (uint8_t)Json::Value::CZString::opLt(
                                    (const char **)((Json::Value::CZString::Self *)(v8 + 4)),
                                    (const char **)((const Json::Value::CZString::Self *)v16)) != 0 )
            {
              v8 = (uint32_t *)v8[3];
            }
            else
            {
              v4 = v8;
              v8 = (uint32_t *)v8[2];
            }
          }
          while ( v8 != nullptr );
        }
      }
LABEL_13:
      if ( *(uint32_t **)(v10 + 12) == v4 && (uint32_t *)v12 == v11 )
      {
        g4_std::Rb_tree_Json_Value_CZString_pair_bd5427::M_erase(
          v10,
          *(void **)(v10 + 8));
        *(uint32_t *)(v10 + 12) = v12;
        *(uint32_t *)(v10 + 8) = 0;
        *(uint32_t *)(v10 + 16) = v12;
        *(uint32_t *)(v10 + 20) = 0;
      }
      else if ( v11 != v4 )
      {
        while ( 1 )
        {
          v9 = (uint32_t *)sub_19048E0(v4);
          g4_std::Rb_tree_Json_Value_CZString_pair_bd5427::M_erase_aux(
            v10,
            v4);
          if ( v11 == v9 )
            break;
          v4 = v9;
        }
      }
      Json::Value::CZString::Destroy((Json::Value::CZString::Self *)v16);
      ++v13;
    }
    while ( v14 > v13 );
  }
  result = Json::Value::size(self);
  if ( result != a2 )
    return ((__assert2(
             "F:/G4/G4_UP8Shop/lib/jsoncpp/source/json_value.cpp",
             967,
             "void Json::Value::resize(Json::Value::UInt)",
             "size() == newSize")), (int)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::DefaultValueAllocator::Destroy  (binary VA: 0x11a4ad0)
// Original: Json::DefaultValueAllocator::~DefaultValueAllocator
// ----------------------------------------------------------------------------
void Json::DefaultValueAllocator::Destroy(Json::DefaultValueAllocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091B28);
  Json::ValueAllocator::Destroy((Json::ValueAllocator::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: Json::DefaultValueAllocator::makeMemberName  (binary VA: 0x11a4b00)
// Original: Json::DefaultValueAllocator::makeMemberName
// ----------------------------------------------------------------------------
int Json::DefaultValueAllocator::makeMemberName(Json::DefaultValueAllocator::Self *self, const char *a2)
{
  return G4_VCALL<int>(self, 16, a2, -1);
}

// ----------------------------------------------------------------------------
// Function: Json::DefaultValueAllocator::releaseMemberName  (binary VA: 0x11a4b30)
// Original: Json::DefaultValueAllocator::releaseMemberName
// ----------------------------------------------------------------------------
int Json::DefaultValueAllocator::releaseMemberName(Json::DefaultValueAllocator::Self *self, char *a2)
{
  return G4_VCALL<int>(self, 20, a2);
}

// ----------------------------------------------------------------------------
// Function: Json::DefaultValueAllocator::releaseStringValue  (binary VA: 0x11a4b50)
// Original: Json::DefaultValueAllocator::releaseStringValue
// ----------------------------------------------------------------------------
void Json::DefaultValueAllocator::releaseStringValue(Json::DefaultValueAllocator::Self *self, char *ptr)
{
  if ( ptr != nullptr )
    free(ptr);
}

// ----------------------------------------------------------------------------
// Function: Json::DefaultValueAllocator::duplicateStringValue  (binary VA: 0x11a4b80)
// Original: Json::DefaultValueAllocator::duplicateStringValue
// ----------------------------------------------------------------------------
void * Json::DefaultValueAllocator::duplicateStringValue(Json::DefaultValueAllocator::Self *self, char *s, size_t a3)
{
  size_t n;
  void *v4;

  n = a3;
  if ( a3 == -1 )
    n = strlen(s);
  v4 = malloc(n + 1);
  memcpy(v4, s, n);
  *((uint8_t *)v4 + n) = 0;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: Json::DefaultValueAllocator::Destroy_ea11a4bf0  (binary VA: 0x11a4bf0)
// Original: Json::DefaultValueAllocator::~DefaultValueAllocator
// ----------------------------------------------------------------------------
void Json::DefaultValueAllocator::Destroy_ea11a4bf0(Json::DefaultValueAllocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091B28);
  Json::ValueAllocator::Destroy((Json::ValueAllocator::Self *)(self));
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: Json::Writer::Destroy  (binary VA: 0x11a57c0)
// Original: Json::Writer::~Writer
// ----------------------------------------------------------------------------
void Json::Writer::Destroy(Json::Writer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091B48);
}

// ----------------------------------------------------------------------------
// Function: Json::Writer::Destroy_ea11a57e0  (binary VA: 0x11a57e0)
// Original: Json::Writer::~Writer
// ----------------------------------------------------------------------------
void Json::Writer::Destroy_ea11a57e0(Json::Writer::Self *self)
{
  Json::Writer::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x11a5820 (size: 43 bytes)
// Symbol:    _ZN4Json10GLOTWriterC2Ev
// Demangled: Json::GLOTWriter::GLOTWriter(void)
// ============================================================================
// Alternative name is '_ZN4Json10GLOTWriterC1Ev'
Json::GLOTWriter::Self *Json::GLOTWriter::Construct(Json::GLOTWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091B60);
  *((uint8_t *)self + 8) = 0;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  return self;
}
// ----------------------------------------------------------------------------
// Function: Json::GLOTWriter::enableYAMLCompatibility  (binary VA: 0x11a5850)
// Original: Json::GLOTWriter::enableYAMLCompatibility
// ----------------------------------------------------------------------------
Json::GLOTWriter::Self * Json::GLOTWriter::enableYAMLCompatibility(Json::GLOTWriter::Self *self)
{
  *((uint8_t *)self + 8) = 1;
  return self;
}



// ============================================================================
// Address:   0x11a5860 (size: 43 bytes)
// Symbol:    _ZN4Json10FastWriterC1Ev
// Demangled: Json::FastWriter::FastWriter(void)
// ============================================================================
// Alternative name is '_ZN4Json10FastWriterC2Ev'
Json::FastWriter::Self *Json::FastWriter::Construct(Json::FastWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091B78);
  *((uint8_t *)self + 8) = 0;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  return self;
}
// ----------------------------------------------------------------------------
// Function: Json::FastWriter::enableYAMLCompatibility  (binary VA: 0x11a5890)
// Original: Json::FastWriter::enableYAMLCompatibility
// ----------------------------------------------------------------------------
Json::FastWriter::Self * Json::FastWriter::enableYAMLCompatibility(Json::FastWriter::Self *self)
{
  *((uint8_t *)self + 8) = 1;
  return self;
}



// ============================================================================
// Address:   0x11a58a0 (size: 77 bytes)
// Symbol:    _ZN4Json12StyledWriterC1Ev
// Demangled: Json::StyledWriter::StyledWriter(void)
// ============================================================================
// Alternative name is '_ZN4Json12StyledWriterC2Ev'
Json::StyledWriter::Self *Json::StyledWriter::Construct(Json::StyledWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091B90);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 6) = 74;
  *((uint32_t *)self + 7) = 3;
  return self;
}
// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::writeIndent  (binary VA: 0x11a58f0)
// Original: Json::StyledWriter::writeIndent
// ----------------------------------------------------------------------------
int Json::StyledWriter::writeIndent(Json::StyledWriter::Self *self)
{
  int result;
  int v2;
  char v3;
  int v4;
  int v5;
  int v6;

  result = *((uint32_t *)self + 4);
  v2 = *(uint32_t *)(result - 12);
  if ( v2 == 0 )
    return (int)(uintptr_t)(g4_std::string::append_str((char *)self + 16, (char *)self + 20));
  if ( *(int *)(result - 4) >= 0 )
  {
    sub_19397C0((char *)self + 16);
    result = *((uint32_t *)self + 4);
  }
  v3 = *(uint8_t *)(result + v2 - 1);
  if ( v3 != 32 )
  {
    if ( v3 != 10 )
    {
      v4 = *(uint32_t *)(result - 12);
      v5 = v4 + 1;
      if ( (unsigned int)(v4 + 1) > *(uint32_t *)(result - 8) || *(int *)(result - 4) > 0 )
      {
        sub_1939B80((char *)self + 16, v4 + 1);
        result = *((uint32_t *)self + 4);
        v4 = *(uint32_t *)(result - 12);
      }
      *(uint8_t *)(result + v4) = 10;
      v6 = *((uint32_t *)self + 4);
      if ( (uint32_t *)(v6 - 12) != dword_213B808 )
      {
        *(uint32_t *)(v6 - 4) = 0;
        *(uint32_t *)(v6 - 12) = v5;
        *(uint8_t *)(v6 + v5) = 0;
      }
    }
    return (int)(uintptr_t)(g4_std::string::append_str((char *)self + 16, (char *)self + 20));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::writeWithIndent  (binary VA: 0x11a59b0)
// Original: Json::StyledWriter::writeWithIndent
// ----------------------------------------------------------------------------
int Json::StyledWriter::writeWithIndent(Json::StyledWriter::Self *a1, int a2)
{
  Json::StyledWriter::writeIndent(a1);
  return (int)(uintptr_t)(g4_std::string::append_str((char *)a1 + 16, a2));
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::indent  (binary VA: 0x11a5a00)
// Original: Json::StyledWriter::indent
// ----------------------------------------------------------------------------
int Json::StyledWriter::indent(Json::StyledWriter::Self *self)
{
  int result;
  void *v2;
  uint16_t v3[3];

  sub_1938A90((int)(uintptr_t)(&v3[1]), *((uint32_t *)self + 7), 32, (int)(uintptr_t)(v3));
  g4_std::string::append_str((char *)self + 20, &v3[1]);
  result = *(uint32_t *)&v3[1];
  v2 = (void *)(*(uint32_t *)&v3[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v3[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v3[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v2)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::unindent  (binary VA: 0x11a5a90)
// Original: Json::StyledWriter::unindent
// ----------------------------------------------------------------------------
int Json::StyledWriter::unindent(Json::StyledWriter::Self *self)
{
  int v1;
  int v2;

  v1 = *(uint32_t *)(*((uint32_t *)self + 5) - 12);
  v2 = *((uint32_t *)self + 7);
  if ( v1 < v2 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/jsoncpp/source/json_writer.cpp",
      464,
      "void Json::StyledWriter::unindent()",
      "int(indentString_.size()) >= indentSize_");
    v2 = *((uint32_t *)self + 7);
    v1 = *(uint32_t *)(*((uint32_t *)self + 5) - 12);
  }
  return (int)(uintptr_t)(sub_1939D80((int)(uintptr_t)(self) + 20, v1 - v2, 0));
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::hasCommentForValue  (binary VA: 0x11a5b20)
// Original: Json::StyledWriter::hasCommentForValue
// ----------------------------------------------------------------------------
int Json::StyledWriter::hasCommentForValue(Json::StyledWriter::Self *self, const Json::Value::Self *a2)
{
  int v2;
  int v4;

  v2 = 1;
  if ( !Json::Value::hasComment((int)(uintptr_t)(a2), 0) && !Json::Value::hasComment((int)(uintptr_t)(a2), 1) )
  {
    LOBYTE(v4) = Json::Value::hasComment((int)(uintptr_t)(a2), 2);
    return v4;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::normalizeEOL  (binary VA: 0x11a5ba0)
// Original: Json::StyledWriter::normalizeEOL
// ----------------------------------------------------------------------------
int * Json::StyledWriter::normalizeEOL(int *a1, uint32_t *a2)
{
  uint8_t *v2;
  bool v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char v8;
  uint8_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v15;
  uint8_t *v16;

  *a1 = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(a1, *(uint32_t *)(*a2 - 12));
  v2 = (uint8_t *)*a2;
  v16 = &v2[*((uint32_t *)v2 - 3)];
  if ( v16 != (uint8_t *)*a2 )
  {
    while ( 1 )
    {
      v8 = *v2;
      v9 = v2 + 1;
      if ( *v2 == 13 )
        break;
      v10 = *a1;
      v11 = *(uint32_t *)(*a1 - 12);
      v12 = v11 + 1;
      if ( (unsigned int)(v11 + 1) > *(uint32_t *)(*a1 - 8) || *(int *)(v10 - 4) > 0 )
      {
        v15 = v8;
        sub_1939B80(a1, v11 + 1);
        v10 = *a1;
        v8 = v15;
        v11 = *(uint32_t *)(*a1 - 12);
      }
      *(uint8_t *)(v10 + v11) = v8;
      v13 = *a1;
      if ( (uint32_t *)(*a1 - 12) == dword_213B808 )
      {
        v2 = v9;
        if ( v9 == v16 )
          return a1;
      }
      else
      {
        *(uint32_t *)(v13 - 12) = v12;
        *(uint32_t *)(v13 - 4) = 0;
        *(uint8_t *)(v13 + v12) = 0;
        v2 = v9;
LABEL_10:
        if ( v2 == v16 )
          return a1;
      }
    }
    v3 = v2[1] == 10;
    v2 += 2;
    v4 = *a1;
    if ( !v3 )
      v2 = v9;
    v5 = *(uint32_t *)(v4 - 12);
    v6 = v5 + 1;
    if ( (unsigned int)(v5 + 1) > *(uint32_t *)(v4 - 8) || *(int *)(v4 - 4) > 0 )
    {
      sub_1939B80(a1, v5 + 1);
      v4 = *a1;
      v5 = *(uint32_t *)(*a1 - 12);
    }
    *(uint8_t *)(v4 + v5) = 10;
    v7 = *a1;
    if ( (uint32_t *)(*a1 - 12) != dword_213B808 )
    {
      *(uint32_t *)(v7 - 4) = 0;
      *(uint32_t *)(v7 - 12) = v6;
      *(uint8_t *)(v7 + v6) = 0;
    }
    goto LABEL_10;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::writeCommentBeforeValue  (binary VA: 0x11a5cc0)
// Original: Json::StyledWriter::writeCommentBeforeValue
// ----------------------------------------------------------------------------
char Json::StyledWriter::writeCommentBeforeValue(Json::StyledWriter::Self *self, const Json::Value::Self *a2)
{
  char result;
  void *v3;
  void *v4;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  result = Json::Value::hasComment((int)(uintptr_t)(a2), 0);
  if ( result != 0 )
  {
    Json::Value::getComment((int)(uintptr_t)(v6), (int)(uintptr_t)(a2), 0);
    Json::StyledWriter::normalizeEOL(&v5, v6);
    g4_std::string::append_str((char *)self + 16, &v5);
    v3 = (void *)(v5 - 12);
    if ( (uint32_t *)(v5 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v6[0] - 12);
    if ( (uint32_t *)(v6[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    return (char)(uintptr_t)(g4_std::string::append((int)(uintptr_t)(self) + 16, &a0[1], 1u));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::Construct  (binary VA: 0x11a5dd0)
// Original: Json::StyledStreamWriter::StyledStreamWriter
// ----------------------------------------------------------------------------
int Json::StyledStreamWriter::Construct(uint32_t *a1, int a2)
{
  a1[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[5] = 74;
  return (int)(uintptr_t)(g4_std::string::construct_copy(a1 + 6, a2));
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::writeIndent  (binary VA: 0x11a5e30)
// Original: Json::StyledStreamWriter::writeIndent
// ----------------------------------------------------------------------------
int Json::StyledStreamWriter::writeIndent(Json::StyledStreamWriter::Self *self)
{
  int v1;
  char v3[5];

  v3[0] = 10;
  v1 = (int)(uintptr_t)(g4_std_compat::ostream_write(*((uint32_t *)self + 3), v3, 1));
  return (int)(uintptr_t)(g4_std_compat::ostream_write(v1, *((uint32_t *)self + 4), *(uint32_t *)(*((uint32_t *)self + 4) - 12)));
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::writeWithIndent  (binary VA: 0x11a5e90)
// Original: Json::StyledStreamWriter::writeWithIndent
// ----------------------------------------------------------------------------
int Json::StyledStreamWriter::writeWithIndent(Json::StyledStreamWriter::Self *a1, uint32_t *a2)
{
  Json::StyledStreamWriter::writeIndent(a1);
  return (int)(uintptr_t)(g4_std_compat::ostream_write(*((uint32_t *)a1 + 3), *a2, *(uint32_t *)(*a2 - 12)));
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::indent  (binary VA: 0x11a5ee0)
// Original: Json::StyledStreamWriter::indent
// ----------------------------------------------------------------------------
int Json::StyledStreamWriter::indent(Json::StyledStreamWriter::Self *self)
{
  return (int)(uintptr_t)(g4_std::string::append_str((char *)self + 16, (char *)self + 24));
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::unindent  (binary VA: 0x11a5f10)
// Original: Json::StyledStreamWriter::unindent
// ----------------------------------------------------------------------------
int Json::StyledStreamWriter::unindent(Json::StyledStreamWriter::Self *self)
{
  unsigned int v1;
  unsigned int v2;

  v1 = *(uint32_t *)(*((uint32_t *)self + 4) - 12);
  v2 = *(uint32_t *)(*((uint32_t *)self + 6) - 12);
  if ( v1 < v2 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/jsoncpp/source/json_writer.cpp",
      766,
      "void Json::StyledStreamWriter::unindent()",
      "indentString_.size() >= indentation_.size()");
    v1 = *(uint32_t *)(*((uint32_t *)self + 4) - 12);
    v2 = *(uint32_t *)(*((uint32_t *)self + 6) - 12);
  }
  return (int)(uintptr_t)(sub_1939D80((int)(uintptr_t)(self) + 16, v1 - v2, 0));
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::hasCommentForValue  (binary VA: 0x11a5fa0)
// Original: Json::StyledStreamWriter::hasCommentForValue
// ----------------------------------------------------------------------------
int Json::StyledStreamWriter::hasCommentForValue(Json::StyledStreamWriter::Self *self, const Json::Value::Self *a2)
{
  int v2;
  int v4;

  v2 = 1;
  if ( !Json::Value::hasComment((int)(uintptr_t)(a2), 0) && !Json::Value::hasComment((int)(uintptr_t)(a2), 1) )
  {
    LOBYTE(v4) = Json::Value::hasComment((int)(uintptr_t)(a2), 2);
    return v4;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::normalizeEOL  (binary VA: 0x11a6020)
// Original: Json::StyledStreamWriter::normalizeEOL
// ----------------------------------------------------------------------------
int * Json::StyledStreamWriter::normalizeEOL(int *a1, uint32_t *a2)
{
  uint8_t *v2;
  bool v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char v8;
  uint8_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v15;
  uint8_t *v16;

  *a1 = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(a1, *(uint32_t *)(*a2 - 12));
  v2 = (uint8_t *)*a2;
  v16 = &v2[*((uint32_t *)v2 - 3)];
  if ( v16 != (uint8_t *)*a2 )
  {
    while ( 1 )
    {
      v8 = *v2;
      v9 = v2 + 1;
      if ( *v2 == 13 )
        break;
      v10 = *a1;
      v11 = *(uint32_t *)(*a1 - 12);
      v12 = v11 + 1;
      if ( (unsigned int)(v11 + 1) > *(uint32_t *)(*a1 - 8) || *(int *)(v10 - 4) > 0 )
      {
        v15 = v8;
        sub_1939B80(a1, v11 + 1);
        v10 = *a1;
        v8 = v15;
        v11 = *(uint32_t *)(*a1 - 12);
      }
      *(uint8_t *)(v10 + v11) = v8;
      v13 = *a1;
      if ( (uint32_t *)(*a1 - 12) == dword_213B808 )
      {
        v2 = v9;
        if ( v9 == v16 )
          return a1;
      }
      else
      {
        *(uint32_t *)(v13 - 12) = v12;
        *(uint32_t *)(v13 - 4) = 0;
        *(uint8_t *)(v13 + v12) = 0;
        v2 = v9;
LABEL_10:
        if ( v2 == v16 )
          return a1;
      }
    }
    v3 = v2[1] == 10;
    v2 += 2;
    v4 = *a1;
    if ( !v3 )
      v2 = v9;
    v5 = *(uint32_t *)(v4 - 12);
    v6 = v5 + 1;
    if ( (unsigned int)(v5 + 1) > *(uint32_t *)(v4 - 8) || *(int *)(v4 - 4) > 0 )
    {
      sub_1939B80(a1, v5 + 1);
      v4 = *a1;
      v5 = *(uint32_t *)(*a1 - 12);
    }
    *(uint8_t *)(v4 + v5) = 10;
    v7 = *a1;
    if ( (uint32_t *)(*a1 - 12) != dword_213B808 )
    {
      *(uint32_t *)(v7 - 4) = 0;
      *(uint32_t *)(v7 - 12) = v6;
      *(uint8_t *)(v7 + v6) = 0;
    }
    goto LABEL_10;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::writeCommentBeforeValue  (binary VA: 0x11a6140)
// Original: Json::StyledStreamWriter::writeCommentBeforeValue
// ----------------------------------------------------------------------------
char Json::StyledStreamWriter::writeCommentBeforeValue(Json::StyledStreamWriter::Self *self, const Json::Value::Self *a2)
{
  char result;
  void *v3;
  void *v4;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  result = Json::Value::hasComment((int)(uintptr_t)(a2), 0);
  if ( result != 0 )
  {
    Json::Value::getComment((int)(uintptr_t)(v6), (int)(uintptr_t)(a2), 0);
    Json::StyledStreamWriter::normalizeEOL(&v5, v6);
    g4_std_compat::ostream_write(*((uint32_t *)self + 3), v5, *(uint32_t *)(v5 - 12));
    v3 = (void *)(v5 - 12);
    if ( (uint32_t *)(v5 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v6[0] - 12);
    if ( (uint32_t *)(v6[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    return (char)(uintptr_t)(g4_std_compat::ostream_write(*((uint32_t *)self + 3), &a0[1], 1));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::writeCommentAfterValueOnSameLine  (binary VA: 0x11a6260)
// Original: Json::StyledStreamWriter::writeCommentAfterValueOnSameLine
// ----------------------------------------------------------------------------
char Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(Json::StyledStreamWriter::Self *self, const Json::Value::Self *a2)
{
  char result;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  if ( Json::Value::hasComment((int)(uintptr_t)(a2), 1) )
  {
    Json::Value::getComment((int)(uintptr_t)(&v8), (int)(uintptr_t)(a2), 1);
    Json::StyledStreamWriter::normalizeEOL(&v9, (uint32_t *)(&v8));
    sub_59E340(&v10, " ", &v9);
    g4_std_compat::ostream_write(*((uint32_t *)self + 3), v10, *(uint32_t *)(v10 - 12));
    v5 = (void *)(v10 - 12);
    if ( (uint32_t *)(v10 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v9 - 12);
    if ( (uint32_t *)(v9 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v8 - 12);
    if ( (uint32_t *)(v8 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
  }
  result = Json::Value::hasComment((int)(uintptr_t)(a2), 2);
  if ( result != 0 )
  {
    g4_std_compat::ostream_write(*((uint32_t *)self + 3), &a0[1], 1);
    Json::Value::getComment((int)(uintptr_t)(v12), (int)(uintptr_t)(a2), 2);
    Json::StyledStreamWriter::normalizeEOL(&v11, v12);
    g4_std_compat::ostream_write(*((uint32_t *)self + 3), v11, *(uint32_t *)(v11 - 12));
    v3 = (void *)(v11 - 12);
    if ( (uint32_t *)(v11 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    return (char)(uintptr_t)(g4_std_compat::ostream_write(*((uint32_t *)self + 3), &a0[1], 1));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::writeCommentAfterValueOnSameLine  (binary VA: 0x11a64f0)
// Original: Json::StyledWriter::writeCommentAfterValueOnSameLine
// ----------------------------------------------------------------------------
char Json::StyledWriter::writeCommentAfterValueOnSameLine(Json::StyledWriter::Self *self, const Json::Value::Self *a2)
{
  char result;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  if ( Json::Value::hasComment((int)(uintptr_t)(a2), 1) )
  {
    Json::Value::getComment((int)(uintptr_t)(&v8), (int)(uintptr_t)(a2), 1);
    Json::StyledWriter::normalizeEOL(&v9, (uint32_t *)(&v8));
    sub_59E340(&v10, " ", &v9);
    g4_std::string::append_str((char *)self + 16, &v10);
    v5 = (void *)(v10 - 12);
    if ( (uint32_t *)(v10 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v9 - 12);
    if ( (uint32_t *)(v9 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v8 - 12);
    if ( (uint32_t *)(v8 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
  }
  result = Json::Value::hasComment((int)(uintptr_t)(a2), 2);
  if ( result != 0 )
  {
    g4_std::string::append((int)(uintptr_t)(self) + 16, &a0[1], 1u);
    Json::Value::getComment((int)(uintptr_t)(v12), (int)(uintptr_t)(a2), 2);
    Json::StyledWriter::normalizeEOL(&v11, v12);
    g4_std::string::append_str((char *)self + 16, &v11);
    v3 = (void *)(v11 - 12);
    if ( (uint32_t *)(v11 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    return (char)(uintptr_t)(g4_std::string::append((int)(uintptr_t)(self) + 16, &a0[1], 1u));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::pushValue  (binary VA: 0x11a6770)
// Original: Json::StyledWriter::pushValue
// ----------------------------------------------------------------------------
int Json::StyledWriter::pushValue(int a1, int a2)
{
  int result;
  char *v3;
  int v4;

  result = a2;
  if ( *(uint8_t *)(a1 + 32) == 0 )
    return (int)(uintptr_t)(g4_std::string::append_str(a1 + 16, a2));
  v3 = *(char **)(a1 + 8);
  if ( v3 == *(char **)(a1 + 12) )
    return g4_std::vector_string_86c307::M_insert_aux((int *)(a1 + 4), v3, a2);
  v4 = 0;
  if ( v3 != nullptr )
  {
    result = (int)(uintptr_t)(g4_std::string::construct_copy(v3, a2));
    v4 = *(uint32_t *)(a1 + 8);
  }
  *(uint32_t *)(a1 + 8) = v4 + 4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::pushValue  (binary VA: 0x11a6800)
// Original: Json::StyledStreamWriter::pushValue
// ----------------------------------------------------------------------------
int Json::StyledStreamWriter::pushValue(int a1, uint32_t *a2)
{
  int result;
  char *v3;
  int v4;

  result = (int)(uintptr_t)(a2);
  if ( *(uint8_t *)(a1 + 28) == 0 )
    return (int)(uintptr_t)(g4_std_compat::ostream_write(*(uint32_t *)(a1 + 12), *a2, *(uint32_t *)(*a2 - 12)));
  v3 = *(char **)(a1 + 4);
  if ( v3 == *(char **)(a1 + 8) )
    return g4_std::vector_string_86c307::M_insert_aux((int *)a1, v3, (int)(uintptr_t)(a2));
  v4 = 0;
  if ( v3 != nullptr )
  {
    result = (int)(uintptr_t)(g4_std::string::construct_copy(v3, a2));
    v4 = *(uint32_t *)(a1 + 4);
  }
  *(uint32_t *)(a1 + 4) = v4 + 4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::writeValue  (binary VA: 0x11a68a0)
// Original: Json::StyledStreamWriter::writeValue
// ----------------------------------------------------------------------------
void Json::StyledStreamWriter::writeValue(long double a1, Json::StyledStreamWriter::Self *self, const Json::Value::Self *a3)
{
  void **v3;
  char *v4;
  char v5;
  int *v6;
  void *v7;
  void *v8;
  const char **v9;
  const Json::Value::Self *v10;
  void *v11;
  void *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  void *v16;
  uint8_t *v17;
  int v18;
  unsigned int v19;
  char *v20;
  void *v21;
  char *v22;
  unsigned int v23;
  char *v24;
  void *v25;
  unsigned int v26;
  const char *v27;
  void *v28;
  char v29;
  char *v30;
  void *v31;
  char *v32;
  void *v33;
  typedef char *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef void *_g4_t_s;
  typedef uint32_t *_g4_t_v51;
  typedef uint8_t _g4_t_v52[29];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v34)) > _g4_s0 ? (12u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (50u + sizeof(_g4_t_v35)) > _g4_s1 ? (50u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (54u + sizeof(_g4_t_v36)) > _g4_s2 ? (54u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v37)) > _g4_s3 ? (56u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (62u + sizeof(_g4_t_v38)) > _g4_s4 ? (62u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v39)) > _g4_s5 ? (64u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v40)) > _g4_s6 ? (72u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v41)) > _g4_s7 ? (76u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v42)) > _g4_s8 ? (80u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v43)) > _g4_s9 ? (84u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v44)) > _g4_s10 ? (88u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v45)) > _g4_s11 ? (92u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v46)) > _g4_s12 ? (96u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v47)) > _g4_s13 ? (100u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v48)) > _g4_s14 ? (104u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v49)) > _g4_s15 ? (108u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_s)) > _g4_s16 ? (112u + sizeof(_g4_t_s)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v51)) > _g4_s17 ? (116u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (143u + sizeof(_g4_t_v52)) > _g4_s18 ? (143u + sizeof(_g4_t_v52)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 50u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 54u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 62u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 92u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 100u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 104u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 112u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 116u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 143u);

  switch ( Json::Value::type(a3) )
  {
    case 0:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "null", (int)(uintptr_t)(&v35));
      Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v40));
      v16 = (void *)(v40 - 12);
      if ( (uint32_t *)(v40 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v16);
      }
      return;
    case 1:
      v17 = v52;
      v18 = Json::Value::asInt((Json::Value::Self *)(a3));
      v52[0] = 0;
      v19 = -v18;
      if ( v18 >= 0 )
        v19 = v18;
      while ( 1 )
      {
        *(v17 - 1) = v19 % 0xA + 48;
        v19 /= 0xAu;
        if ( v19 == 0 )
          break;
        --v17;
      }
      v20 = (char *)(v17 - 1);
      if ( v18 < 0 )
      {
        v20 = (char *)(v17 - 2);
        *(v17 - 2) = 45;
      }
      if ( v20 < (char *)&s )
      {
        v34 = v20;
        __assert2(
          "../../../../../lib/jsoncpp/include/json/writer.h",
          235,
          "std::string Json::valueToString(Json::Int)",
          "current >= buffer");
        v20 = v34;
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), v20, (int)(uintptr_t)(&v35) + 2);
      Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v41));
      v21 = (void *)(v41 - 12);
      if ( (uint32_t *)(v41 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v21);
      }
      return;
    case 2:
      v22 = (char *)(v52);
      v23 = Json::Value::asUInt((Json::Value::Self *)(a3));
      v52[0] = 0;
      do
      {
        v24 = v22 - 1;
        v22 = v24;
        *v24 = v23 % 0xA + 48;
        v23 /= 0xAu;
      }
      while ( v23 != 0 );
      if ( v24 < (char *)&s )
        __assert2(
          "../../../../../lib/jsoncpp/include/json/writer.h",
          247,
          "std::string Json::valueToString(Json::UInt)",
          "current >= buffer");
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), v24, (int)(uintptr_t)(&v36));
      Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v42));
      v25 = (void *)(v42 - 12);
      if ( (uint32_t *)(v42 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v25);
      }
      return;
    case 3:
      Json::Value::asDouble((Json::Value::Self *)(a3));
      sprintf((char *)&s, "%#.16g", (double)a1);
      v26 = strlen((const char *)&s) - 1;
      if ( *((uint8_t *)&s + v26) == 48 )
      {
        v3 = (void **)((char *)&s + v26);
        if ( v3 > &s )
        {
          do
            v3 = (void **)((char *)v3 - 1);
          while ( v3 != &s && *(uint8_t *)v3 == 48 );
        }
        else if ( v3 < &s )
        {
LABEL_9:
          v6 = &v37;
LABEL_10:
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), (char *)&s, (int)(uintptr_t)(v6));
          goto LABEL_11;
        }
        v4 = (char *)v3;
        while ( 1 )
        {
          v5 = *v4;
          if ( *v4 == 46 )
            break;
          if ( v5 < 46 || (uint8_t)(v5 - 48) > 9u )
          {
            v32 = (char *)&v37 + 1;
            goto LABEL_64;
          }
          if ( --v4 < (char *)&s )
            goto LABEL_9;
        }
        *((uint8_t *)v3 + 2) = 0;
        v6 = (int *)((char *)&v37 + 2);
        goto LABEL_10;
      }
      v32 = (char *)&v37 + 3;
LABEL_64:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), (char *)&s, (int)(uintptr_t)(v32));
LABEL_11:
      Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v43));
      v7 = (void *)(v43 - 12);
      if ( (uint32_t *)(v43 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v7);
      }
      return;
    case 4:
      v27 = (const char *)Json::Value::asCString((Json::Value::Self *)(a3));
      Json::valueToQuotedString((Json::Self *)&v44, v27);
      Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v44));
      v28 = (void *)(v44 - 12);
      if ( (uint32_t *)(v44 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v28);
      }
      return;
    case 5:
      v29 = Json::Value::asBool((Json::Value::Self *)(a3));
      v30 = "true";
      if ( v29 == 0 )
        v30 = "false";
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), v30, (int)(uintptr_t)(&v38));
      Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v45));
      v31 = (void *)(v45 - 12);
      if ( (uint32_t *)(v45 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v31);
      }
      return;
    case 6:
      Json::StyledStreamWriter::writeArrayValue(self, a3);
      return;
    case 7:
      Json::Value::getMemberNames((Json::Value::Self *)&s);
      if ( v51 == s )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "{}", (int)(uintptr_t)(&v39));
        Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v46));
        v33 = (void *)(v46 - 12);
        if ( (uint32_t *)(v46 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v33);
        }
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "{", (int)(uintptr_t)(&v39) + 1);
        Json::StyledStreamWriter::writeWithIndent(self, (uint32_t *)(uintptr_t)((int)(uintptr_t)(&v47)));
        v8 = (void *)(v47 - 12);
        if ( (uint32_t *)(v47 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v8);
        }
        Json::StyledStreamWriter::indent(self);
        v9 = (const char **)s;
        while ( 1 )
        {
          v10 = (const Json::Value::Self *)Json::Value::opIndex(a3, (int)(uintptr_t)(v9));
          Json::StyledStreamWriter::writeCommentBeforeValue(self, v10);
          Json::valueToQuotedString((Json::Self *)&v48, *v9);
          Json::StyledStreamWriter::writeWithIndent(self, (uint32_t *)(uintptr_t)((int)(uintptr_t)(&v48)));
          v11 = (void *)(v48 - 12);
          if ( (uint32_t *)(v48 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
          }
          ++v9;
          g4_std_compat::ostream_write(*((uint32_t *)self + 3), " : ", 3);
          Json::StyledStreamWriter::writeValue(self, v10);
          if ( v51 == (uint32_t *)(uintptr_t)(v9) )
            break;
          g4_std_compat::ostream_write(*((uint32_t *)self + 3), ",", 1);
          Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(self, v10);
        }
        Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(self, v10);
        Json::StyledStreamWriter::unindent(self);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "}", (int)(uintptr_t)(&v39) + 2);
        Json::StyledStreamWriter::writeWithIndent(self, (uint32_t *)(uintptr_t)((int)(uintptr_t)(&v49)));
        v12 = (void *)(v49 - 12);
        if ( (uint32_t *)(v49 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v12);
        }
      }
      v13 = v51;
      v14 = (uint32_t *)(s);
      if ( v51 != s )
      {
        do
        {
          v15 = (uint32_t *)(*v14 - 12);
          if ( v15 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v14 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v15);
          ++v14;
        }
        while ( v13 != v14 );
        v14 = (uint32_t *)(s);
      }
      if ( v14 != nullptr )
        opDelete(v14);
      return;
    default:
      return;
  }
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::isMultineArray  (binary VA: 0x11a70c0)
// Original: Json::StyledStreamWriter::isMultineArray
// ----------------------------------------------------------------------------
bool Json::StyledStreamWriter::isMultineArray(long double a1, Json::StyledStreamWriter::Self *self, const Json::Value::Self *a3)
{
  Json::StyledStreamWriter::Self *v3;
  signed int v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  unsigned int v8;
  bool result;
  Json::Value::Self *v10;
  char isObject;
  int v12;
  unsigned int v13;
  int v14;
  const Json::Value::Self *v15;
  int v16;
  bool v17;
  bool v18;
  Json::StyledStreamWriter::Self *v19;
  Json::StyledStreamWriter::Self *v20;
  bool v21;
  signed int v22;

  v3 = self;
  v4 = Json::Value::size(a3);
  v19 = *(Json::StyledStreamWriter::Self **)self;
  v21 = 3 * v4 >= *((uint32_t *)self + 5);
  if ( *(uint32_t *)self != *((uint32_t *)self + 1) )
  {
    v22 = v4;
    v5 = *(uint32_t **)self;
    v6 = *((uint32_t **)self + 1);
    do
    {
      v7 = (uint32_t *)(*v5 - 12);
      if ( v7 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v5 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v7);
      ++v5;
    }
    while ( v6 != v5 );
    v4 = v22;
  }
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v19);
  if ( v4 <= 0 )
  {
    result = v21;
  }
  else
  {
    v8 = 0;
    result = v21;
    if ( v21 )
      return result;
    while ( 1 )
    {
      v10 = (Json::Value::Self *)Json::Value::opIndex(a3, v8);
      if ( (uint8_t)Json::Value::isArray(v10) != 0
        || (isObject = Json::Value::isObject(v10), result = false, isObject != 0) )
      {
        result = Json::Value::size(v10) != 0;
      }
      if ( v4 == ++v8 )
        break;
      if ( result )
        return result;
    }
    v3 = self;
  }
  if ( !result )
  {
    g4_std::vector_string_86c307::reserve(v3, v4);
    *((uint8_t *)v3 + 28) = 1;
    v12 = 2 * v4 + 2;
    if ( v4 > 0 )
    {
      v20 = (Json::StyledStreamWriter::Self *)v4;
      v13 = 0;
      v14 = 2 * v4 + 2;
      do
      {
        v15 = (const Json::Value::Self *)Json::Value::opIndex(a3, v13);
        Json::StyledStreamWriter::writeValue(a1, v3, v15);
        v16 = *(uint32_t *)(*(uint32_t *)v3 + 4 * v13++);
        v14 += *(uint32_t *)(v16 - 12);
      }
      while ( v20 != (Json::StyledStreamWriter::Self *)v13 );
      v12 = v14;
    }
    v18 = __OFSUB__(v12, *((uint32_t *)v3 + 5));
    v17 = v12 - *((uint32_t *)v3 + 5) < 0;
    *((uint8_t *)v3 + 28) = 0;
    return v17 == v18;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::writeArrayValue  (binary VA: 0x11a7240)
// Original: Json::StyledStreamWriter::writeArrayValue
// ----------------------------------------------------------------------------
int Json::StyledStreamWriter::writeArrayValue(long double a1, Json::StyledStreamWriter::Self *self, const Json::Value::Self *a3)
{
  int v3;
  long double v4; // fst7
  int v5;
  int v6;
  int result;
  void *v8;
  void *v9;
  unsigned int v10;
  const Json::Value::Self *v11;
  void *v12;
  typedef Json::Value::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v14)) > _g4_s1 ? (32u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v15)) > _g4_s2 ? (36u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v16)) > _g4_s3 ? (40u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (62u + sizeof(_g4_t_v17)) > _g4_s4 ? (62u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v18)) > _g4_s5 ? (64u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v19)) > _g4_s6 ? (68u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v20)) > _g4_s7 ? (72u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v21)) > _g4_s8 ? (76u + sizeof(_g4_t_v21)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 62u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);

  v3 = Json::Value::size(a3);
  if ( v3 != 0 )
  {
    if ( !Json::StyledStreamWriter::isMultineArray(a1, self, a3) )
    {
      if ( v3 != (*((uint32_t *)self + 1) - *(uint32_t *)self) >> 2 )
        __assert2(
          "F:/G4/G4_UP8Shop/lib/jsoncpp/source/json_writer.cpp",
          666,
          "void Json::StyledStreamWriter::writeArrayValue(const Json::Value::Self&)",
          "childValues_.size() == size");
      v5 = 0;
      g4_std_compat::ostream_write(*((uint32_t *)self + 3), "[ ", 2);
      while ( 1 )
      {
        v6 = *(uint32_t *)(*(uint32_t *)self + 4 * v5++);
        g4_std_compat::ostream_write(*((uint32_t *)self + 3), v6, *(uint32_t *)(v6 - 12));
        if ( v5 == v3 )
          break;
        if ( v5 != 0 )
          g4_std_compat::ostream_write(*((uint32_t *)self + 3), ", ", 2);
      }
      return (int)(uintptr_t)(g4_std_compat::ostream_write(*((uint32_t *)self + 3), " ]", 2));
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "[", (int)(uintptr_t)(&v17) + 1);
    Json::StyledStreamWriter::writeWithIndent(self, (uint32_t *)(&v20));
    v9 = (void *)(v20 - 12);
    if ( (uint32_t *)(v20 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    v10 = 0;
    Json::StyledStreamWriter::indent(self);
    v16 = v3;
    v14 = *((uint32_t *)self + 1);
    v15 = *(uint32_t *)self;
    while ( 1 )
    {
      v11 = (const Json::Value::Self *)Json::Value::opIndex(a3, v10);
      Json::StyledStreamWriter::writeCommentBeforeValue(self, v11);
      if ( v14 == v15 )
      {
        ++v10;
        Json::StyledStreamWriter::writeIndent(self);
        Json::StyledStreamWriter::writeValue(v4, self, v11);
        if ( v16 == v10 )
        {
LABEL_20:
          Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(self, v11);
          Json::StyledStreamWriter::unindent(self);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "]", (int)(uintptr_t)(&v18));
          Json::StyledStreamWriter::writeWithIndent(self, (uint32_t *)(v21));
          result = v21[0];
          v12 = (void *)(v21[0] - 12);
          if ( (uint32_t *)(v21[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v21[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            return ((g4_std::string::Rep::M_destroy(v12)), (int)0);
          }
          return result;
        }
      }
      else
      {
        v13 = (Json::Value::Self *)(*(uint32_t *)self + 4 * v10++);
        Json::StyledStreamWriter::writeWithIndent(self, (uint32_t *)(v13));
        if ( v16 == v10 )
          goto LABEL_20;
      }
      g4_std_compat::ostream_write(*((uint32_t *)self + 3), ",", 1);
      Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(self, v11);
    }
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "[]", (int)(uintptr_t)(&v17));
  Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v19));
  result = v19;
  v8 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v8)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledStreamWriter::write  (binary VA: 0x11a7540)
// Original: Json::StyledStreamWriter::write
// ----------------------------------------------------------------------------
int Json::StyledStreamWriter::write(long double a1, Json::StyledStreamWriter::Self *a2, int a3, Json::Value::Self *a4)
{
  int result;

  *((uint32_t *)a2 + 3) = a3;
  *((uint8_t *)a2 + 28) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(a2) + 16, &unk_1B15112, 0);
  Json::StyledStreamWriter::writeCommentBeforeValue(a2, a4);
  Json::StyledStreamWriter::writeValue(a1, a2, a4);
  Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(a2, a4);
  result = (int)(uintptr_t)(g4_std_compat::ostream_write(*((uint32_t *)a2 + 3), &a0[1], 1));
  *((uint32_t *)a2 + 3) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::opShl  (binary VA: 0x11a75f0)
// Original: Json::operator<<
// ----------------------------------------------------------------------------
int Json::opShl(long double a1, int a2, Json::Value::Self *a3)
{
  void *v3;
  void *v4;
  void *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef void *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (7u + sizeof(_g4_t_v10)) > _g4_s0 ? (7u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v15)) > _g4_s5 ? (40u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 7u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "\t", (int)(uintptr_t)(&v10));
  Json::StyledStreamWriter::Construct((uint32_t *)(&v12), (int)(uintptr_t)(&v11));
  v3 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  Json::StyledStreamWriter::write(a1, (Json::StyledStreamWriter::Self *)&v12, a2, a3);
  v4 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = v13;
  v7 = (uint32_t *)(v12);
  if ( v13 != v12 )
  {
    do
    {
      v8 = (uint32_t *)(*v7 - 12);
      if ( v8 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v7 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v8);
      ++v7;
    }
    while ( v6 != v7 );
    v7 = (uint32_t *)(v12);
  }
  if ( v7 != nullptr )
    opDelete(v7);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::writeValue  (binary VA: 0x11a7750)
// Original: Json::StyledWriter::writeValue
// ----------------------------------------------------------------------------
void Json::StyledWriter::writeValue(long double a1, Json::StyledWriter::Self *self, const Json::Value::Self *a3)
{
  void **v3;
  char *v4;
  char v5;
  int *v6;
  void *v7;
  void *v8;
  const char **v9;
  const Json::Value::Self *v10;
  void *v11;
  void *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  void *v16;
  uint8_t *v17;
  int v18;
  unsigned int v19;
  char *v20;
  void *v21;
  char *v22;
  unsigned int v23;
  char *v24;
  void *v25;
  unsigned int v26;
  const char *v27;
  void *v28;
  char v29;
  char *v30;
  void *v31;
  char *v32;
  void *v33;
  typedef char *_g4_t_v34;
  typedef char *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef void *_g4_t_s;
  typedef uint32_t *_g4_t_v52;
  typedef uint8_t _g4_t_v53[29];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v34)) > _g4_s0 ? (12u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v35)) > _g4_s1 ? (48u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (66u + sizeof(_g4_t_v36)) > _g4_s2 ? (66u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (70u + sizeof(_g4_t_v37)) > _g4_s3 ? (70u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v38)) > _g4_s4 ? (72u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (78u + sizeof(_g4_t_v39)) > _g4_s5 ? (78u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v40)) > _g4_s6 ? (80u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v41)) > _g4_s7 ? (88u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v42)) > _g4_s8 ? (92u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v43)) > _g4_s9 ? (96u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v44)) > _g4_s10 ? (100u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v45)) > _g4_s11 ? (104u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_v46)) > _g4_s12 ? (108u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v47)) > _g4_s13 ? (112u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (116u + sizeof(_g4_t_v48)) > _g4_s14 ? (116u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (120u + sizeof(_g4_t_v49)) > _g4_s15 ? (120u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (124u + sizeof(_g4_t_v50)) > _g4_s16 ? (124u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (128u + sizeof(_g4_t_s)) > _g4_s17 ? (128u + sizeof(_g4_t_s)) : _g4_s17,
    _g4_s19 = (132u + sizeof(_g4_t_v52)) > _g4_s18 ? (132u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (159u + sizeof(_g4_t_v53)) > _g4_s19 ? (159u + sizeof(_g4_t_v53)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 66u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 70u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 78u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 88u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 100u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 104u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 108u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 112u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 116u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 120u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 124u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 128u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 132u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 159u);

  switch ( Json::Value::type(a3) )
  {
    case 0:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "null", (int)(uintptr_t)(&v36));
      Json::StyledWriter::pushValue((int)(uintptr_t)(self), (int)(uintptr_t)(&v41));
      v16 = (void *)(v41 - 12);
      if ( (uint32_t *)(v41 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v16);
      }
      return;
    case 1:
      v17 = v53;
      v18 = Json::Value::asInt((Json::Value::Self *)(a3));
      v53[0] = 0;
      v19 = -v18;
      if ( v18 >= 0 )
        v19 = v18;
      while ( 1 )
      {
        *(v17 - 1) = v19 % 0xA + 48;
        v19 /= 0xAu;
        if ( v19 == 0 )
          break;
        --v17;
      }
      v20 = (char *)(v17 - 1);
      if ( v18 < 0 )
      {
        v20 = (char *)(v17 - 2);
        *(v17 - 2) = 45;
      }
      if ( v20 < (char *)&s )
      {
        v34 = v20;
        __assert2(
          "../../../../../lib/jsoncpp/include/json/writer.h",
          235,
          "std::string Json::valueToString(Json::Int)",
          "current >= buffer");
        v20 = v34;
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), v20, (int)(uintptr_t)(&v36) + 2);
      Json::StyledWriter::pushValue((int)(uintptr_t)(self), (int)(uintptr_t)(&v42));
      v21 = (void *)(v42 - 12);
      if ( (uint32_t *)(v42 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v21);
      }
      return;
    case 2:
      v22 = (char *)(v53);
      v23 = Json::Value::asUInt((Json::Value::Self *)(a3));
      v53[0] = 0;
      do
      {
        v24 = v22 - 1;
        v22 = v24;
        *v24 = v23 % 0xA + 48;
        v23 /= 0xAu;
      }
      while ( v23 != 0 );
      if ( v24 < (char *)&s )
        __assert2(
          "../../../../../lib/jsoncpp/include/json/writer.h",
          247,
          "std::string Json::valueToString(Json::UInt)",
          "current >= buffer");
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), v24, (int)(uintptr_t)(&v37));
      Json::StyledWriter::pushValue((int)(uintptr_t)(self), (int)(uintptr_t)(&v43));
      v25 = (void *)(v43 - 12);
      if ( (uint32_t *)(v43 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v25);
      }
      return;
    case 3:
      Json::Value::asDouble((Json::Value::Self *)(a3));
      sprintf((char *)&s, "%#.16g", (double)a1);
      v26 = strlen((const char *)&s) - 1;
      if ( *((uint8_t *)&s + v26) == 48 )
      {
        v3 = (void **)((char *)&s + v26);
        if ( v3 > &s )
        {
          do
            v3 = (void **)((char *)v3 - 1);
          while ( v3 != &s && *(uint8_t *)v3 == 48 );
        }
        else if ( v3 < &s )
        {
LABEL_9:
          v6 = &v38;
LABEL_10:
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), (char *)&s, (int)(uintptr_t)(v6));
          goto LABEL_11;
        }
        v4 = (char *)v3;
        while ( 1 )
        {
          v5 = *v4;
          if ( *v4 == 46 )
            break;
          if ( v5 < 46 || (uint8_t)(v5 - 48) > 9u )
          {
            v32 = (char *)&v38 + 1;
            goto LABEL_64;
          }
          if ( --v4 < (char *)&s )
            goto LABEL_9;
        }
        *((uint8_t *)v3 + 2) = 0;
        v6 = (int *)((char *)&v38 + 2);
        goto LABEL_10;
      }
      v32 = (char *)&v38 + 3;
LABEL_64:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), (char *)&s, (int)(uintptr_t)(v32));
LABEL_11:
      Json::StyledWriter::pushValue((int)(uintptr_t)(self), (int)(uintptr_t)(&v44));
      v7 = (void *)(v44 - 12);
      if ( (uint32_t *)(v44 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v7);
      }
      return;
    case 4:
      v27 = (const char *)Json::Value::asCString((Json::Value::Self *)(a3));
      Json::valueToQuotedString((Json::Self *)&v45, v27);
      Json::StyledWriter::pushValue((int)(uintptr_t)(self), (int)(uintptr_t)(&v45));
      v28 = (void *)(v45 - 12);
      if ( (uint32_t *)(v45 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v28);
      }
      return;
    case 5:
      v29 = Json::Value::asBool((Json::Value::Self *)(a3));
      v30 = "true";
      if ( v29 == 0 )
        v30 = "false";
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), v30, (int)(uintptr_t)(&v39));
      Json::StyledWriter::pushValue((int)(uintptr_t)(self), (int)(uintptr_t)(&v46));
      v31 = (void *)(v46 - 12);
      if ( (uint32_t *)(v46 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v31);
      }
      return;
    case 6:
      Json::StyledWriter::writeArrayValue(self, a3);
      return;
    case 7:
      Json::Value::getMemberNames((Json::Value::Self *)&s);
      if ( v52 == s )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "{}", (int)(uintptr_t)(&v40));
        Json::StyledWriter::pushValue((int)(uintptr_t)(self), (int)(uintptr_t)(&v47));
        v33 = (void *)(v47 - 12);
        if ( (uint32_t *)(v47 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v33);
        }
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "{", (int)(uintptr_t)(&v40) + 1);
        Json::StyledWriter::writeWithIndent(self, (int)(uintptr_t)(&v48));
        v8 = (void *)(v48 - 12);
        if ( (uint32_t *)(v48 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v8);
        }
        Json::StyledWriter::indent(self);
        v35 = (char *)self + 16;
        v9 = (const char **)s;
        while ( 1 )
        {
          v10 = (const Json::Value::Self *)Json::Value::opIndex(a3, (int)(uintptr_t)(v9));
          Json::StyledWriter::writeCommentBeforeValue(self, v10);
          Json::valueToQuotedString((Json::Self *)&v49, *v9);
          Json::StyledWriter::writeWithIndent(self, (int)(uintptr_t)(&v49));
          v11 = (void *)(v49 - 12);
          if ( (uint32_t *)(v49 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
          }
          ++v9;
          g4_std::string::append((int)(uintptr_t)(v35), " : ", 3u);
          Json::StyledWriter::writeValue(self, v10);
          if ( v52 == (uint32_t *)(uintptr_t)(v9) )
            break;
          g4_std::string::append((int)(uintptr_t)(v35), ",", 1u);
          Json::StyledWriter::writeCommentAfterValueOnSameLine(self, v10);
        }
        Json::StyledWriter::writeCommentAfterValueOnSameLine(self, v10);
        Json::StyledWriter::unindent(self);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "}", (int)(uintptr_t)(&v40) + 2);
        Json::StyledWriter::writeWithIndent(self, (int)(uintptr_t)(&v50));
        v12 = (void *)(v50 - 12);
        if ( (uint32_t *)(v50 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v12);
        }
      }
      v13 = v52;
      v14 = (uint32_t *)(s);
      if ( v52 != s )
      {
        do
        {
          v15 = (uint32_t *)(*v14 - 12);
          if ( v15 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v14 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v15);
          ++v14;
        }
        while ( v13 != v14 );
        v14 = (uint32_t *)(s);
      }
      if ( v14 != nullptr )
        opDelete(v14);
      return;
    default:
      return;
  }
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::isMultineArray  (binary VA: 0x11a7f90)
// Original: Json::StyledWriter::isMultineArray
// ----------------------------------------------------------------------------
bool Json::StyledWriter::isMultineArray(long double a1, Json::StyledWriter::Self **self, const Json::Value::Self *a3)
{
  Json::StyledWriter::Self *v3;
  signed int v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  unsigned int v8;
  bool result;
  Json::Value::Self *v10;
  char isObject;
  int v12;
  unsigned int v13;
  int v14;
  const Json::Value::Self *v15;
  int v16;
  bool v17;
  bool v18;
  Json::StyledWriter::Self *v19;
  Json::StyledWriter::Self *v20;
  bool v21;
  signed int v22;

  v3 = (Json::StyledWriter::Self *)self;
  v4 = Json::Value::size(a3);
  v19 = *(self + 1);
  v21 = 3 * v4 >= (int)(uintptr_t)(*(self + 6));
  if ( v19 != *(self + 2) )
  {
    v22 = v4;
    v5 = (uint32_t *)(*(self + 1));
    v6 = (uint32_t *)(*(self + 2));
    do
    {
      v7 = (uint32_t *)(*v5 - 12);
      if ( v7 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v5 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v7);
      ++v5;
    }
    while ( v6 != v5 );
    v4 = v22;
  }
  *(self + 2) = v19;
  if ( v4 <= 0 )
  {
    result = v21;
  }
  else
  {
    v8 = 0;
    result = v21;
    if ( v21 )
      return result;
    while ( 1 )
    {
      v10 = (Json::Value::Self *)Json::Value::opIndex(a3, v8);
      if ( (uint8_t)Json::Value::isArray(v10) != 0
        || (isObject = Json::Value::isObject(v10), result = false, isObject != 0) )
      {
        result = Json::Value::size(v10) != 0;
      }
      if ( v4 == ++v8 )
        break;
      if ( result )
        return result;
    }
    v3 = (Json::StyledWriter::Self *)self;
  }
  if ( !result )
  {
    g4_std::vector_string_86c307::reserve((Json::StyledWriter::Self *)((char *)v3 + 4), v4);
    *((uint8_t *)v3 + 32) = 1;
    v12 = 2 * v4 + 2;
    if ( v4 > 0 )
    {
      v20 = (Json::StyledWriter::Self *)v4;
      v13 = 0;
      v14 = 2 * v4 + 2;
      do
      {
        v15 = (const Json::Value::Self *)Json::Value::opIndex(a3, v13);
        Json::StyledWriter::writeValue(a1, v3, v15);
        v16 = *(uint32_t *)(*((uint32_t *)v3 + 1) + 4 * v13++);
        v14 += *(uint32_t *)(v16 - 12);
      }
      while ( v20 != (Json::StyledWriter::Self *)v13 );
      v12 = v14;
    }
    v18 = __OFSUB__(v12, *((uint32_t *)v3 + 6));
    v17 = v12 - *((uint32_t *)v3 + 6) < 0;
    *((uint8_t *)v3 + 32) = 0;
    return v17 == v18;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::writeArrayValue  (binary VA: 0x11a8120)
// Original: Json::StyledWriter::writeArrayValue
// ----------------------------------------------------------------------------
int Json::StyledWriter::writeArrayValue(long double a1, Json::StyledWriter::Self *self, const Json::Value::Self *a3)
{
  long double v3; // fst7
  int v4;
  int result;
  void *v6;
  void *v7;
  unsigned int v8;
  const Json::Value::Self *v9;
  void *v10;
  typedef Json::Value::Self *_g4_t_v11;
  typedef Json::Value::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v14)) > _g4_s3 ? (36u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v15)) > _g4_s4 ? (40u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (62u + sizeof(_g4_t_v16)) > _g4_s5 ? (62u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v17)) > _g4_s6 ? (64u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v18)) > _g4_s7 ? (68u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v19)) > _g4_s8 ? (72u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v20)) > _g4_s9 ? (76u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 62u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);

  v13 = Json::Value::size(a3);
  if ( v13 != 0 )
  {
    if ( !Json::StyledWriter::isMultineArray(a1, (Json::StyledWriter::Self **)self, a3) )
    {
      if ( v13 != (*((uint32_t *)self + 2) - *((uint32_t *)self + 1)) >> 2 )
        __assert2(
          "F:/G4/G4_UP8Shop/lib/jsoncpp/source/json_writer.cpp",
          364,
          "void Json::StyledWriter::writeArrayValue(const Json::Value::Self&)",
          "childValues_.size() == size");
      v4 = 0;
      g4_std::string::append((int)(uintptr_t)(self) + 16, "[ ", 2u);
      while ( 1 )
      {
        v11 = (Json::Value::Self *)(*((uint32_t *)self + 1) + 4 * v4++);
        g4_std::string::append_str((char *)self + 16, v11);
        if ( v4 == v13 )
          break;
        if ( v4 != 0 )
          g4_std::string::append((int)(uintptr_t)(self) + 16, ", ", 2u);
      }
      return (int)(uintptr_t)(g4_std::string::append((int)(uintptr_t)(self) + 16, " ]", 2u));
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "[", (int)(uintptr_t)(&v16) + 1);
    Json::StyledWriter::writeWithIndent(self, (int)(uintptr_t)(&v19));
    v7 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = 0;
    Json::StyledWriter::indent(self);
    v14 = *((uint32_t *)self + 2);
    v15 = *((uint32_t *)self + 1);
    while ( 1 )
    {
      v9 = (const Json::Value::Self *)Json::Value::opIndex(a3, v8);
      Json::StyledWriter::writeCommentBeforeValue(self, v9);
      if ( v14 == v15 )
      {
        ++v8;
        Json::StyledWriter::writeIndent(self);
        Json::StyledWriter::writeValue(v3, self, v9);
        if ( v13 == v8 )
        {
LABEL_20:
          Json::StyledWriter::writeCommentAfterValueOnSameLine(self, v9);
          Json::StyledWriter::unindent(self);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "]", (int)(uintptr_t)(&v17));
          Json::StyledWriter::writeWithIndent(self, (int)(uintptr_t)(v20));
          result = v20[0];
          v10 = (void *)(v20[0] - 12);
          if ( (uint32_t *)(v20[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            return ((g4_std::string::Rep::M_destroy(v10)), (int)0);
          }
          return result;
        }
      }
      else
      {
        v12 = (Json::Value::Self *)(*((uint32_t *)self + 1) + 4 * v8++);
        Json::StyledWriter::writeWithIndent(self, (int)(uintptr_t)(v12));
        if ( v13 == v8 )
          goto LABEL_20;
      }
      g4_std::string::append((int)(uintptr_t)(self) + 16, ",", 1u);
      Json::StyledWriter::writeCommentAfterValueOnSameLine(self, v9);
    }
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "[]", (int)(uintptr_t)(&v16));
  Json::StyledWriter::pushValue((int)(uintptr_t)(self), (int)(uintptr_t)(&v18));
  result = v18;
  v6 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v6)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::write  (binary VA: 0x11a8420)
// Original: Json::StyledWriter::write
// ----------------------------------------------------------------------------
Json::StyledWriter::Self * Json::StyledWriter::write(long double a1, Json::StyledWriter::Self *self, const Json::Value::Self *a3, Json::Value::Self *a4)
{
  g4_std_compat::string_assign((int)(uintptr_t)(a3) + 16, &unk_1B15112, 0);
  *((uint8_t *)a3 + 32) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(a3) + 20, &unk_1B15112, 0);
  Json::StyledWriter::writeCommentBeforeValue((Json::StyledWriter::Self *)(a3), a4);
  Json::StyledWriter::writeValue(a1, (Json::StyledWriter::Self *)(a3), a4);
  Json::StyledWriter::writeCommentAfterValueOnSameLine((Json::StyledWriter::Self *)(a3), a4);
  g4_std::string::append((int)(uintptr_t)(a3) + 16, &a0[1], 1u);
  g4_std::string::construct_copy(self, (char *)a3 + 16);
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::FastWriter::writeValue  (binary VA: 0x11a84f0)
// Original: Json::FastWriter::writeValue
// ----------------------------------------------------------------------------
void Json::FastWriter::writeValue(Json::FastWriter::Self *self, const Json::Value::Self *a2)
{
  int v2;
  void **v3;
  char *v4;
  char v5;
  int *v6;
  void *v7;
  int v8;
  int v9;
  const Json::Value::Self *v10;
  const char **v11;
  void *v12;
  size_t v13;
  char *v14;
  const Json::Value::Self *v15;
  uint8_t *v16;
  int v17;
  unsigned int v18;
  char *v19;
  void *v20;
  unsigned int v21;
  char *v22;
  char *v23;
  void *v24;
  long double v25; // fst7
  unsigned int v26;
  const char *v27;
  void *v28;
  char v29;
  char *v30;
  void *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  typedef char *_g4_t_format;
  typedef char *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef void *_g4_t_s;
  typedef uint32_t *_g4_t_v49;
  typedef uint8_t _g4_t_v50[29];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_format)) > _g4_s0 ? (4u + sizeof(_g4_t_format)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v36)) > _g4_s1 ? (20u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v37)) > _g4_s2 ? (20u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (42u + sizeof(_g4_t_v38)) > _g4_s3 ? (42u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (46u + sizeof(_g4_t_v39)) > _g4_s4 ? (46u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v40)) > _g4_s5 ? (48u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v41)) > _g4_s6 ? (52u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v42)) > _g4_s7 ? (56u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v43)) > _g4_s8 ? (60u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v44)) > _g4_s9 ? (64u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v45)) > _g4_s10 ? (68u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v46)) > _g4_s11 ? (72u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v47)) > _g4_s12 ? (76u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_s)) > _g4_s13 ? (80u + sizeof(_g4_t_s)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v49)) > _g4_s14 ? (84u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (111u + sizeof(_g4_t_v50)) > _g4_s15 ? (111u + sizeof(_g4_t_v50)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 42u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 46u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 68u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 72u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 76u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 80u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 84u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 111u);

  switch ( Json::Value::type(a2) )
  {
    case 0:
      g4_std::string::append((int)(uintptr_t)(self) + 4, "null", 4u);
      return;
    case 1:
      v16 = v50;
      v17 = Json::Value::asInt((Json::Value::Self *)(a2));
      v50[0] = 0;
      v18 = -v17;
      if ( v17 >= 0 )
        v18 = v17;
      while ( 1 )
      {
        v19 = (char *)(v16 - 1);
        *(v16 - 1) = v18 % 0xA + 48;
        v18 /= 0xAu;
        if ( v18 == 0 )
          break;
        --v16;
      }
      if ( v17 < 0 )
      {
        v19 = (char *)(v16 - 2);
        *(v16 - 2) = 45;
      }
      if ( v19 < (char *)&s )
        __assert2(
          "../../../../../lib/jsoncpp/include/json/writer.h",
          235,
          "std::string Json::valueToString(Json::Int)",
          "current >= buffer");
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), v19, (int)(uintptr_t)(&v38));
      g4_std::string::append_str((char *)self + 4, &v42);
      v20 = (void *)(v42 - 12);
      if ( (uint32_t *)(v42 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v20);
      }
      return;
    case 2:
      v21 = Json::Value::asUInt((Json::Value::Self *)(a2));
      v50[0] = 0;
      v22 = (char *)(v50);
      do
      {
        v23 = v22 - 1;
        v22 = v23;
        *v23 = v21 % 0xA + 48;
        v21 /= 0xAu;
      }
      while ( v21 != 0 );
      if ( v23 < (char *)&s )
        __assert2(
          "../../../../../lib/jsoncpp/include/json/writer.h",
          247,
          "std::string Json::valueToString(Json::UInt)",
          "current >= buffer");
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), v23, (int)(uintptr_t)(&v38) + 2);
      g4_std::string::append_str((char *)self + 4, &v43);
      v24 = (void *)(v43 - 12);
      if ( (uint32_t *)(v43 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v24);
      }
      return;
    case 3:
      v25 = Json::Value::asDouble((Json::Value::Self *)(a2));
      sprintf((char *)&s, "%#.16g", (double)v25);
      v26 = strlen((const char *)&s) - 1;
      if ( *((uint8_t *)&s + v26) == 48 )
      {
        v3 = (void **)((char *)&s + v26);
        if ( v3 > &s )
        {
          do
            v3 = (void **)((char *)v3 - 1);
          while ( v3 != &s && *(uint8_t *)v3 == 48 );
        }
        else if ( v3 < &s )
        {
LABEL_9:
          v6 = &v39;
          goto LABEL_10;
        }
        v4 = (char *)v3;
        while ( 1 )
        {
          v5 = *v4;
          if ( *v4 == 46 )
            break;
          if ( v5 < 46 || (uint8_t)(v5 - 48) > 9u )
          {
            v6 = (int *)((char *)&v39 + 1);
            goto LABEL_10;
          }
          if ( --v4 < (char *)&s )
            goto LABEL_9;
        }
        *((uint8_t *)v3 + 2) = 0;
        v6 = &v40;
      }
      else
      {
        v6 = (int *)((char *)&v40 + 1);
      }
LABEL_10:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), (char *)&s, (int)(uintptr_t)(v6));
      g4_std::string::append_str((char *)self + 4, &v44);
      v7 = (void *)(v44 - 12);
      if ( (uint32_t *)(v44 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v7);
      }
      return;
    case 4:
      v27 = (const char *)Json::Value::asCString((Json::Value::Self *)(a2));
      Json::valueToQuotedString((Json::Self *)&v45, v27);
      g4_std::string::append_str((char *)self + 4, &v45);
      v28 = (void *)(v45 - 12);
      if ( (uint32_t *)(v45 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v28);
      }
      return;
    case 5:
      v29 = Json::Value::asBool((Json::Value::Self *)(a2));
      v30 = "true";
      if ( v29 == 0 )
        v30 = "false";
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), v30, (int)(uintptr_t)(&v41));
      g4_std::string::append_str((char *)self + 4, &v46);
      v31 = (void *)(v46 - 12);
      if ( (uint32_t *)(v46 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v31);
      }
      return;
    case 6:
      v36 = (char *)self + 4;
      v8 = 0;
      g4_std::string::append((int)(uintptr_t)(self) + 4, "[", 1u);
      v9 = Json::Value::size(a2);
      if ( v9 > 0 )
      {
        while ( 1 )
        {
          format = (char *)v8++;
          v10 = (const Json::Value::Self *)Json::Value::opIndex(a2, (unsigned int)(uintptr_t)(format));
          Json::FastWriter::writeValue(self, v10);
          if ( v9 == v8 )
            break;
          if ( v8 > 0 )
            g4_std::string::append((int)(uintptr_t)(v36), ",", 1u);
        }
      }
      g4_std::string::append((int)(uintptr_t)(v36), "]", 1u);
      return;
    case 7:
      Json::Value::getMemberNames(v2, (Json::Value::Self *)&s, a2);
      v37 = (char *)self + 4;
      g4_std::string::append((int)(uintptr_t)(self) + 4, "{", 1u);
      v11 = (const char **)s;
      if ( s != v49 )
      {
        while ( 1 )
        {
          Json::valueToQuotedString((Json::Self *)&v47, *v11);
          g4_std::string::append_str(v37, &v47);
          v12 = (void *)(v47 - 12);
          if ( (uint32_t *)(v47 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v12);
          }
          v13 = 1;
          v14 = ":";
          if ( *((uint8_t *)self + 8) != 0 )
          {
            LOBYTE(v13) = 2;
            v14 = (char *)&unk_1B152C0;
          }
          g4_std::string::append((int)(uintptr_t)(v37), v14, v13);
          v15 = (const Json::Value::Self *)Json::Value::opIndex(a2, v11++);
          Json::FastWriter::writeValue(self, v15);
          if ( v11 == (const char **)(uintptr_t)(v49) )
            break;
          if ( s != v11 )
            g4_std::string::append((int)(uintptr_t)(v37), ",", 1u);
        }
      }
      g4_std::string::append((int)(uintptr_t)(v37), "}", 1u);
      v32 = v49;
      v33 = (uint32_t *)(s);
      if ( v49 != s )
      {
        do
        {
          v34 = (uint32_t *)(*v33 - 12);
          if ( v34 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v33 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v34);
          ++v33;
        }
        while ( v32 != v33 );
        v33 = (uint32_t *)(s);
      }
      if ( v33 != nullptr )
        opDelete(v33);
      return;
    default:
      return;
  }
}

// ----------------------------------------------------------------------------
// Function: Json::FastWriter::write  (binary VA: 0x11a8c10)
// Original: Json::FastWriter::write
// ----------------------------------------------------------------------------
Json::FastWriter::Self * Json::FastWriter::write(Json::FastWriter::Self *self, const Json::Value::Self *a2, Json::Value::Self *a3)
{
  g4_std_compat::string_assign((int)(uintptr_t)(a2) + 4, &unk_1B15112, 0);
  Json::FastWriter::writeValue((Json::FastWriter::Self *)(a2), a3);
  g4_std::string::append((int)(uintptr_t)(a2) + 4, &a0[1], 1u);
  g4_std::string::construct_copy(self, (char *)a2 + 4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::GLOTWriter::writeValue  (binary VA: 0x11a8cb0)
// Original: Json::GLOTWriter::writeValue
// ----------------------------------------------------------------------------
void Json::GLOTWriter::writeValue(Json::GLOTWriter::Self *self, const Json::Value::Self *a2, unsigned int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  signed int v6;
  int v7;
  const Json::Value::Self *v8;
  char *v9;
  const char **v10;
  void *v11;
  size_t v12;
  char *v13;
  const Json::Value::Self *v14;
  uint8_t *v15;
  int v16;
  unsigned int v17;
  char *v18;
  void *v19;
  unsigned int v20;
  char *v21;
  char *v22;
  void *v23;
  long double v24; // fst7
  void *v25;
  const char *v26;
  void *v27;
  char v28;
  char *v29;
  void *v30;
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef void *_g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef uint8_t _g4_t_v42[29];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v31)) > _g4_s0 ? (8u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v32)) > _g4_s1 ? (30u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v33)) > _g4_s2 ? (36u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v34)) > _g4_s3 ? (40u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v35)) > _g4_s4 ? (44u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v36)) > _g4_s5 ? (48u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v37)) > _g4_s6 ? (52u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v38)) > _g4_s7 ? (56u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v39)) > _g4_s8 ? (60u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v40)) > _g4_s9 ? (64u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v41)) > _g4_s10 ? (68u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (95u + sizeof(_g4_t_v42)) > _g4_s11 ? (95u + sizeof(_g4_t_v42)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 30u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 95u);

  switch ( Json::Value::type(a2) )
  {
    case 0:
      g4_std::string::append((int)(uintptr_t)(self) + 4, "null", 4u);
      break;
    case 1:
      v15 = v42;
      v16 = Json::Value::asInt((Json::Value::Self *)(a2));
      v42[0] = 0;
      v17 = -v16;
      if ( v16 >= 0 )
        v17 = v16;
      while ( 1 )
      {
        v18 = (char *)(v15 - 1);
        *(v15 - 1) = v17 % 0xA + 48;
        v17 /= 0xAu;
        if ( v17 == 0 )
          break;
        --v15;
      }
      if ( v16 < 0 )
      {
        v18 = (char *)(v15 - 2);
        *(v15 - 2) = 45;
      }
      if ( v18 < (char *)&v40 )
        __assert2(
          "../../../../../lib/jsoncpp/include/json/writer.h",
          235,
          "std::string Json::valueToString(Json::Int)",
          "current >= buffer");
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), v18, (int)(uintptr_t)(&v32));
      g4_std::string::append_str((char *)self + 4, &v34);
      v19 = (void *)(v34 - 12);
      if ( (uint32_t *)(v34 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v19);
      }
      break;
    case 2:
      v20 = Json::Value::asUInt((Json::Value::Self *)(a2));
      v42[0] = 0;
      v21 = (char *)(v42);
      do
      {
        v22 = v21 - 1;
        v21 = v22;
        *v22 = v20 % 0xA + 48;
        v20 /= 0xAu;
      }
      while ( v20 != 0 );
      if ( v22 < (char *)&v40 )
        __assert2(
          "../../../../../lib/jsoncpp/include/json/writer.h",
          247,
          "std::string Json::valueToString(Json::UInt)",
          "current >= buffer");
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), v22, (int)(uintptr_t)(&v32) + 2);
      g4_std::string::append_str((char *)self + 4, &v35);
      v23 = (void *)(v35 - 12);
      if ( (uint32_t *)(v35 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v23);
      }
      break;
    case 3:
      v24 = Json::Value::asDouble((Json::Value::Self *)(a2));
      Json::valueToString((Json::Self *)&v36, v24, a3);
      g4_std::string::append_str((char *)self + 4, &v36);
      v25 = (void *)(v36 - 12);
      if ( (uint32_t *)(v36 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v25);
      }
      break;
    case 4:
      v26 = (const char *)Json::Value::asCString((Json::Value::Self *)(a2));
      Json::valueToQuotedString((Json::Self *)&v37, v26);
      g4_std::string::append_str((char *)self + 4, &v37);
      v27 = (void *)(v37 - 12);
      if ( (uint32_t *)(v37 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v27);
      }
      break;
    case 5:
      v28 = Json::Value::asBool((Json::Value::Self *)(a2));
      v29 = "true";
      if ( v28 == 0 )
        v29 = "false";
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), v29, (int)(uintptr_t)(&v33));
      g4_std::string::append_str((char *)self + 4, &v38);
      v30 = (void *)(v38 - 12);
      if ( (uint32_t *)(v38 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v30);
      }
      break;
    case 6:
      v31 = (char *)self + 4;
      v6 = 0;
      g4_std::string::append((int)(uintptr_t)(self) + 4, "[", 1u);
      v7 = Json::Value::size(a2);
      if ( v7 > 0 )
      {
        while ( 1 )
        {
          v8 = (const Json::Value::Self *)Json::Value::opIndex(a2, v6++);
          Json::GLOTWriter::writeValue(self, v8, a3);
          if ( v7 == v6 )
            break;
          if ( v6 > 0 )
            g4_std::string::append((int)(uintptr_t)(v31), ",", 1u);
        }
      }
      g4_std::string::append((int)(uintptr_t)(v31), "]", 1u);
      break;
    case 7:
      Json::Value::getMemberNames((int)(uintptr_t)(&v40), (Json::Value::Self *)&v40, a2);
      v9 = (char *)self + 4;
      g4_std::string::append((int)(uintptr_t)(self) + 4, "{", 1u);
      v10 = (const char **)v40;
      if ( v40 != v41 )
      {
        while ( 1 )
        {
          Json::valueToQuotedString((Json::Self *)&v39, *v10);
          g4_std::string::append_str(v9, &v39);
          v11 = (void *)(v39 - 12);
          if ( (uint32_t *)(v39 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
          }
          v12 = 1;
          v13 = ":";
          if ( *((uint8_t *)self + 8) != 0 )
          {
            LOBYTE(v12) = 2;
            v13 = (char *)&unk_1B152C0;
          }
          g4_std::string::append((int)(uintptr_t)(v9), v13, v12);
          v14 = (const Json::Value::Self *)Json::Value::opIndex(a2, v10++);
          Json::GLOTWriter::writeValue(self, v14, a3);
          if ( v10 == (const char **)(uintptr_t)(v41) )
            break;
          if ( v40 != v10 )
            g4_std::string::append((int)(uintptr_t)(v9), ",", 1u);
        }
      }
      g4_std::string::append((int)(uintptr_t)(v9), "}", 1u);
      v3 = v41;
      v4 = (uint32_t *)(v40);
      if ( v41 != v40 )
      {
        do
        {
          v5 = (uint32_t *)(*v4 - 12);
          if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v5);
          ++v4;
        }
        while ( v3 != v4 );
        v4 = (uint32_t *)(v40);
      }
      if ( v4 != nullptr )
        opDelete(v4);
      break;
    default:
      return;
  }
}

// ----------------------------------------------------------------------------
// Function: Json::GLOTWriter::write  (binary VA: 0x11a9310)
// Original: Json::GLOTWriter::write
// ----------------------------------------------------------------------------
Json::GLOTWriter::Self * Json::GLOTWriter::write(Json::GLOTWriter::Self *self, const Json::Value::Self *a2, Json::Value::Self *a3, unsigned int a4)
{
  g4_std_compat::string_assign((int)(uintptr_t)(a2) + 4, &unk_1B15112, 0);
  Json::GLOTWriter::writeValue((Json::GLOTWriter::Self *)(a2), a3, a4);
  g4_std::string::append((int)(uintptr_t)(a2) + 4, &a0[1], 1u);
  g4_std::string::construct_copy(self, (char *)a2 + 4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::GLOTWriter::write  (binary VA: 0x11a93b0)
// Original: Json::GLOTWriter::write
// ----------------------------------------------------------------------------
Json::GLOTWriter::Self * Json::GLOTWriter::write(Json::GLOTWriter::Self *self, const Json::Value::Self *a2, Json::Value::Self *a3)
{
  g4_std_compat::string_assign((int)(uintptr_t)(a2) + 4, &unk_1B15112, 0);
  Json::GLOTWriter::writeValue((Json::GLOTWriter::Self *)(a2), a3, 0x10u);
  g4_std::string::append((int)(uintptr_t)(a2) + 4, &a0[1], 1u);
  g4_std::string::construct_copy(self, (char *)a2 + 4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::GLOTWriter::Destroy  (binary VA: 0x11a9450)
// Original: Json::GLOTWriter::~GLOTWriter
// ----------------------------------------------------------------------------
void Json::GLOTWriter::Destroy(Json::GLOTWriter::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091B60);
  v1 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  Json::Writer::Destroy((Json::Writer::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: Json::FastWriter::Destroy  (binary VA: 0x11a94c0)
// Original: Json::FastWriter::~FastWriter
// ----------------------------------------------------------------------------
void Json::FastWriter::Destroy(Json::FastWriter::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091B78);
  v1 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  Json::Writer::Destroy((Json::Writer::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: Json::GLOTWriter::Destroy_ea11a9530  (binary VA: 0x11a9530)
// Original: Json::GLOTWriter::~GLOTWriter
// ----------------------------------------------------------------------------
void Json::GLOTWriter::Destroy_ea11a9530(Json::GLOTWriter::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091B60);
  v1 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  Json::Writer::Destroy((Json::Writer::Self *)(self));
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: Json::FastWriter::Destroy_ea11a95a0  (binary VA: 0x11a95a0)
// Original: Json::FastWriter::~FastWriter
// ----------------------------------------------------------------------------
void Json::FastWriter::Destroy_ea11a95a0(Json::FastWriter::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091B78);
  v1 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  Json::Writer::Destroy((Json::Writer::Self *)(self));
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::Destroy  (binary VA: 0x11a9610)
// Original: Json::StyledWriter::~StyledWriter
// ----------------------------------------------------------------------------
void Json::StyledWriter::Destroy(Json::StyledWriter::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091B90);
  v1 = *((uint32_t *)self + 5);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t **)self + 2);
  v4 = *((uint32_t **)self + 1);
  if ( v3 != v4 )
  {
    do
    {
      v5 = (uint32_t *)(*v4 - 12);
      if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v5);
      ++v4;
    }
    while ( v3 != v4 );
    v4 = *((uint32_t **)self + 1);
  }
  if ( v4 != nullptr )
    opDelete(v4);
  Json::Writer::Destroy((Json::Writer::Self *)(self));
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: Json::StyledWriter::Destroy_ea11a9720  (binary VA: 0x11a9720)
// Original: Json::StyledWriter::~StyledWriter
// ----------------------------------------------------------------------------
void Json::StyledWriter::Destroy_ea11a9720(Json::StyledWriter::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091B90);
  v1 = *((uint32_t *)self + 5);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t **)self + 2);
  v4 = *((uint32_t **)self + 1);
  if ( v3 != v4 )
  {
    do
    {
      v5 = (uint32_t *)(*v4 - 12);
      if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v5);
      ++v4;
    }
    while ( v3 != v4 );
    v4 = *((uint32_t **)self + 1);
  }
  if ( v4 != nullptr )
    opDelete(v4);
  Json::Writer::Destroy((Json::Writer::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: Json::valueToQuotedString  (binary VA: 0x11a9a50)
// Original: Json::valueToQuotedString
// ----------------------------------------------------------------------------
Json::Self * Json::valueToQuotedString(Json::Self *self, char *s)
{
  char *v2;
  size_t v3;
  char v4;
  bool v5; // cc
  int (**v6)(int);
  char *v7;
  int v8;
  char v9;
  uint32_t *v10;
  uint32_t *v11;
  void *v12;
  char *i;
  int v15;
  int v16;
  size_t v17;
  void *v18;
  void *v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef char _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char _g4_t_v24;
  typedef void *_g4_t_v25;
  typedef uint8_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int (**_g4_t_v34)(int);
  typedef int (**_g4_t_v35)(int);
  typedef uint32_t _g4_t_v36[2];
  typedef int _g4_t_v37;
  typedef void *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint8_t _g4_t_v41[4];
  typedef int _g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef uint32_t _g4_t_v44[29];
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v21)) > _g4_s1 ? (16u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v22)) > _g4_s2 ? (20u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v23)) > _g4_s3 ? (20u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v24)) > _g4_s4 ? (24u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v25)) > _g4_s5 ? (24u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v26)) > _g4_s6 ? (24u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (42u + sizeof(_g4_t_v27)) > _g4_s7 ? (42u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v28)) > _g4_s8 ? (52u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v29)) > _g4_s9 ? (56u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v30)) > _g4_s10 ? (60u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v31)) > _g4_s11 ? (64u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v32)) > _g4_s12 ? (68u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v33)) > _g4_s13 ? (72u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v34)) > _g4_s14 ? (76u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v35)) > _g4_s15 ? (80u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v36)) > _g4_s16 ? (84u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v37)) > _g4_s17 ? (92u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v38)) > _g4_s18 ? (96u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v39)) > _g4_s19 ? (100u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v40)) > _g4_s20 ? (104u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v41)) > _g4_s21 ? (108u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v42)) > _g4_s22 ? (112u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v43)) > _g4_s23 ? (116u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v44)) > _g4_s24 ? (120u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (236u + sizeof(_g4_t_v45)) > _g4_s25 ? (236u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (237u + sizeof(_g4_t_v46)) > _g4_s26 ? (237u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (240u + sizeof(_g4_t_v47)) > _g4_s27 ? (240u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (244u + sizeof(_g4_t_v48)) > _g4_s28 ? (244u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (248u + sizeof(_g4_t_v49)) > _g4_s29 ? (248u + sizeof(_g4_t_v49)) : _g4_s29,
    _g4_s31 = (252u + sizeof(_g4_t_v50)) > _g4_s30 ? (252u + sizeof(_g4_t_v50)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 42u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 104u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 108u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 116u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 120u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 236u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 237u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 240u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 244u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 248u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 252u);

  v2 = s;
  if ( strpbrk(s, (const char *)asc_1B69B5E) == nullptr )
  {
    for ( i = s; ; i += 2 )
    {
      while ( 1 )
      {
        if ( *i == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "\"", (int)(uintptr_t)(&v27));
          g4_std::string::construct_copy(&v29, &v28);
          v17 = strlen(s);
          g4_std::string::append((int)(uintptr_t)(&v29), s, v17);
          g4_std::string::construct_copy(self, &v29);
          g4_std::string::append((int)(uintptr_t)(self), "\"", 1u);
          v18 = (void *)(v29 - 12);
          if ( (uint32_t *)(v29 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v18);
          }
          v19 = (void *)(v28 - 12);
          if ( (uint32_t *)(v28 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v19);
          }
          return self;
        }
        if ( *i > 0 )
          break;
        ++i;
      }
      if ( i[1] <= 31 )
        break;
    }
  }
  v3 = strlen(s);
  v30 = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(&v30, 2 * v3 + 3);
  g4_std::string::append((int)(uintptr_t)(&v30), "\"", 1u);
  v4 = *s;
  if ( *s == 0 )
    goto LABEL_20;
  while ( 1 )
  {
    v5 = v4 <= 12;
    if ( v4 == 12 )
      break;
LABEL_4:
    if ( v5 )
    {
      switch ( v4 )
      {
        case 9:
          g4_std::string::append((int)(uintptr_t)(&v30), &unk_1B69B78, 2u);
          goto LABEL_26;
        case 10:
          g4_std::string::append((int)(uintptr_t)(&v30), &unk_1B69B72, 2u);
          goto LABEL_26;
        case 8:
          g4_std::string::append((int)(uintptr_t)(&v30), &unk_1B69B6C, 2u);
          goto LABEL_26;
        default:
          break;
      }
    }
    else
    {
      switch ( v4 )
      {
        case 34:
          g4_std::string::append((int)(uintptr_t)(&v30), &unk_1B69B66, 2u);
          goto LABEL_26;
        case 92:
          g4_std::string::append((int)(uintptr_t)(&v30), &unk_1B69B69, 2u);
          goto LABEL_26;
        case 13:
          g4_std::string::append((int)(uintptr_t)(&v30), &unk_1B69B75, 2u);
          goto LABEL_26;
        default:
          break;
      }
    }
    if ( (uint8_t)(v4 - 1) > 0x1Eu )
    {
      v15 = v30;
      v20 = *(uint32_t *)(v30 - 12);
      v26 = (uint8_t *)(v20 + 1);
      if ( (unsigned int)(v20 + 1) > *(uint32_t *)(v30 - 8) || *(int *)(v30 - 4) > 0 )
      {
        v22 = v4;
        sub_1939B80(&v30, v26);
        v15 = v30;
        v4 = v22;
        v20 = *(uint32_t *)(v30 - 12);
      }
      *(uint8_t *)(v15 + v20) = v4;
      v16 = v30;
      if ( (uint32_t *)(v30 - 12) != dword_213B808 )
      {
        *(uint32_t *)(v30 - 4) = 0;
        *(uint32_t *)(v16 - 12) = (uint32_t)(uintptr_t)(v26);
        v26[v16] = 0;
      }
      goto LABEL_26;
    }
    sub_1900810(v44);
    v44[28] = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v44[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v50 = 0;
    v34 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    *(int (***)(int))((char *)&v34 + (uint32_t)*(&off_20AAE6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE80);
    sub_19119D0((char *)&v34 + (uint32_t)(uintptr_t)(*(v34 - 3)), 0);
    v36[0] = 0;
    v36[1] = 0;
    v37 = 0;
    v38 = nullptr;
    v39 = 0;
    v40 = 0;
    v34 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v44[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v35 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v41);
    v42 = 16;
    v35 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    v43 = &dword_213B814;
    sub_19119D0(v44, &v35);
    v24 = *v2;
    g4_std_compat::ostream_write(&v34, &unk_1B69B7B, 2);
    v6 = v34;
    *(int (***)(int))((char *)&v34 + (uint32_t)(uintptr_t)(*(v34 - 3)) + 12) = (int (**)(int))(*(int *)((uint8_t *)&v34 + (uint32_t)(uintptr_t)(*(v34 - 3)) + 12)
                                                                                              & 0xFFFFFFB5
                                                                                              | 8);
    *(int (***)(int))((char *)&v34 + (uint32_t)(uintptr_t)(*(v6 - 3)) + 12) = (int (**)(int))(*(int *)((char *)&v34 + (uint32_t)(uintptr_t)(*(v6 - 3)) + 12)
                                                                                             | 0x4000);
    v7 = (char *)&v34 + (uint32_t)(uintptr_t)(*(v6 - 3));
    if ( v7[117] == 0 )
    {
      v8 = *((uint32_t *)v7 + 31);
      if ( v8 == 0 )
        sub_18FFF30(v7);
      if ( *(uint8_t *)(v8 + 28) != 0 )
      {
        v9 = *(uint8_t *)(v8 + 61);
      }
      else
      {
        v21 = (char *)&v34 + (uint32_t)(uintptr_t)(*(v6 - 3));
        v23 = *((uint32_t *)v7 + 31);
        sub_18FFC70(v8);
        v9 = G4_VCALL<int>(v23, 24, 32);
        v7 = v21;
        v6 = v34;
      }
      v7[116] = v9;
      v7[117] = 1;
    }
    v7[116] = 48;
    *(uint32_t *)((char *)v36 + (uint32_t)(uintptr_t)(*(v6 - 3))) = 4;
    g4_std::ostream::op_shl_int(&v34, v24);
    v31 = &dword_213B814;
    if ( v39 != 0 )
    {
      if ( v39 <= (unsigned int)v37 )
      {
        sub_11A9950(&v32, v38, (uint8_t *)v37);
        g4_std::string::assign_str(&v31, &v32);
        v25 = (void *)(v32 - 12);
        if ( (uint32_t *)(v32 - 12) == dword_213B808
          || __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) > 0 )
        {
          goto LABEL_17;
        }
      }
      else
      {
        sub_11A9950(&v33, v38, (uint8_t *)v39);
        g4_std::string::assign_str(&v31, &v33);
        v25 = (void *)(v33 - 12);
        if ( (uint32_t *)(v33 - 12) == dword_213B808
          || __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) > 0 )
        {
          goto LABEL_17;
        }
      }
      g4_std::string::Rep::M_destroy(v25);
    }
    else
    {
      g4_std::string::assign_str(&v31, &v43);
    }
LABEL_17:
    g4_std::string::append_str(&v30, &v31);
    v10 = v31 - 3;
    if ( v31 - 3 != dword_213B808 && __sync_fetch_and_add(v31 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v10);
    v34 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v44[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v35 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    v11 = v43 - 3;
    if ( v43 - 3 != dword_213B808 && __sync_fetch_and_add(v43 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v11);
    ++v2;
    v35 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    sub_1902180(v41);
    v34 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    *(int (***)(int))((char *)&v34 + (uint32_t)*(&off_20AAE6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE80);
    v44[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v44);
    v4 = *v2;
    if ( *v2 == 0 )
      goto LABEL_20;
  }
  while ( 1 )
  {
    g4_std::string::append((int)(uintptr_t)(&v30), &unk_1B69B6F, 2u);
LABEL_26:
    v4 = *++v2;
    if ( *v2 == 0 )
      break;
    v5 = v4 <= 12;
    if ( v4 != 12 )
      goto LABEL_4;
  }
LABEL_20:
  g4_std::string::append((int)(uintptr_t)(&v30), "\"", 1u);
  g4_std::string::construct_copy(self, &v30);
  v12 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: Json::valueToString  (binary VA: 0x11aa240)
// Original: Json::valueToString
// ----------------------------------------------------------------------------
Json::Self * Json::valueToString(Json::Self *self, double a2, unsigned int a3)
{
  int v3;
  void *v4;
  char *v5;
  char *v6; // kr00_4
  int *v7;
  int v8;
  char *v9;
  char *v10;
  char v11;
  bool v12; // cc
  uint32_t *v13;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef char *_g4_t_format;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char _g4_t_s[32];
  typedef int (**_g4_t_v21)(int);
  typedef int _g4_t_v22;
  typedef int (**_g4_t_v23)(int);
  typedef uint32_t _g4_t_v24[3];
  typedef int _g4_t_v25;
  typedef void *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[4];
  typedef int _g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef uint32_t _g4_t_v32[29];
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (14u + sizeof(_g4_t_v15)) > _g4_s0 ? (14u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_format)) > _g4_s2 ? (24u + sizeof(_g4_t_format)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_s)) > _g4_s5 ? (36u + sizeof(_g4_t_s)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v21)) > _g4_s6 ? (68u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v22)) > _g4_s7 ? (72u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v23)) > _g4_s8 ? (76u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v24)) > _g4_s9 ? (80u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v25)) > _g4_s10 ? (92u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v26)) > _g4_s11 ? (96u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v27)) > _g4_s12 ? (100u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v28)) > _g4_s13 ? (104u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v29)) > _g4_s14 ? (108u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v30)) > _g4_s15 ? (112u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v31)) > _g4_s16 ? (116u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v32)) > _g4_s17 ? (120u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (236u + sizeof(_g4_t_v33)) > _g4_s18 ? (236u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (237u + sizeof(_g4_t_v34)) > _g4_s19 ? (237u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (240u + sizeof(_g4_t_v35)) > _g4_s20 ? (240u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (244u + sizeof(_g4_t_v36)) > _g4_s21 ? (244u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (248u + sizeof(_g4_t_v37)) > _g4_s22 ? (248u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (252u + sizeof(_g4_t_v38)) > _g4_s23 ? (252u + sizeof(_g4_t_v38)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 14u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 96u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 100u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 104u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 108u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 116u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 120u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 236u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 237u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 240u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 244u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 248u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 252u);

  sub_1900810(v32);
  v32[28] = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v32[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v38 = 0;
  v21 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v21 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v22 = 0;
  sub_19119D0((char *)&v21 + (uint32_t)(uintptr_t)(*(v21 - 3)), 0);
  v23 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v24[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v24[-1] + (uint32_t)(uintptr_t)(*(v23 - 3)), 0);
  v21 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v21 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v24[1] = 0;
  v21 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v24[2] = 0;
  v25 = 0;
  v32[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v26 = nullptr;
  v27 = 0;
  v23 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v28 = 0;
  v24[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v29);
  v30 = 24;
  v24[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v31 = &dword_213B814;
  sub_19119D0(v32, v24);
  g4_std_compat::ostream_write(&v23, "%#.", 3);
  v3 = (int)(uintptr_t)(sub_192D8B0(&v23, a3));
  g4_std_compat::ostream_write(v3, "f", 1);
  format = (char *)&dword_213B814;
  if ( v27 == 0 )
  {
    g4_std::string::assign_str(&format, &v31);
    goto LABEL_4;
  }
  if ( v27 > (unsigned int)v25 )
  {
    sub_11A9950(&v19, v26, (uint8_t *)v27);
    g4_std::string::assign_str(&format, &v19);
    v4 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      goto LABEL_11;
    }
  }
  else
  {
    sub_11A9950(&v18, v26, (uint8_t *)v25);
    g4_std::string::assign_str(&format, &v18);
    v4 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
LABEL_11:
      g4_std::string::Rep::M_destroy(v4);
    }
  }
LABEL_4:
  sprintf(s, format, a2);
  v5 = format - 12;
  if ( format - 12 != (char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)format - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = &s[strlen(s)];
  v7 = &v15;
  v8 = v6 - s - 1;
  if ( s[v8] == 48 )
  {
    v9 = &s[v8];
    if ( v9 > s )
    {
      do
        --v9;
      while ( v9 != s && *v9 == 48 );
    }
    else if ( v9 < s )
    {
LABEL_8:
      v7 = (int *)((char *)&v16 + 1);
      goto LABEL_18;
    }
    v10 = v9;
    v11 = *v9;
    v12 = *v9 < 46;
    if ( *v9 == 46 )
    {
LABEL_22:
      v9[2] = 0;
      v7 = (int *)((char *)&v15 + 1);
    }
    else
    {
      while ( !v12 && (uint8_t)(v11 - 48) <= 9u )
      {
        if ( --v10 < s )
          goto LABEL_8;
        v11 = *v10;
        v12 = *v10 < 46;
        if ( *v10 == 46 )
          goto LABEL_22;
      }
      v7 = &v16;
    }
  }
LABEL_18:
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), s, (int)(uintptr_t)(v7));
  v21 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v32[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v23 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v24[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v13 = v31 - 3;
  if ( v31 - 3 != dword_213B808 && __sync_fetch_and_add(v31 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v13);
  v24[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v29);
  v21 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v21 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v23 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v24[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v21 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v21 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v22 = 0;
  v32[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v32);
  return self;
}


