#include "Core/Utils/DecompTypes.h"
#include "gameswf_File.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_File.cpp
// Library: gameswf | Module: gameswf_File
// Binary Address Span: 0x1172e50 .. 0x1173580 (15 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1172e50 (size: 67 bytes)
// Symbol:    _ZN7gameswf4FileC2EPvPFiS1_iS1_EPFiPKviS1_EPFiiS1_EPFiS1_EPFiS5_EPFbS1_ESB_
// Demangled: gameswf::File::File(void *,int (*)(void *,int,void *),int (*)(void const*,int,void *),int (*)(int,void *),int (*)(void *),int (*)(void const*),bool (*)(void *),int (*)(void *))
// ============================================================================
// Alternative name is '_ZN7gameswf4FileC1EPvPFiS1_iS1_EPFiPKviS1_EPFiiS1_EPFiS1_EPFiS5_EPFbS1_ESB_'
struct gameswf::File::Self *gameswf::File::Construct(
        gameswf::File::Self *self,
        void *a2,
        int (*a3)(void *, int, void *),
        int (*a4)(const void *, int, void *),
        int (*a5)(int, void *),
        int (*a6)(void *),
        int (*a7)(const void *),
        bool (*a8)(void *),
        int (*a9)(void *))
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a5);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a6);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a7);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(a8);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(a9);
  *((uint32_t *)self + 9) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: gameswf::File::Construct  (binary VA: 0x1172ea0)
// Original: gameswf::File::File
// ----------------------------------------------------------------------------
int gameswf::File::Construct(uint32_t *a1, int a2, char a3)
{
  int64_t v3; // rax

  *a1 = a2;
  a1[2] = (uint32_t)(uintptr_t)(sub_1172DD0);
  a1[3] = (uint32_t)(uintptr_t)(sub_1172D90);
  a1[4] = (uint32_t)(uintptr_t)(sub_1172D30);
  a1[5] = (uint32_t)(uintptr_t)(sub_1172CF0);
  a1[6] = (uint32_t)(uintptr_t)(sub_1172CC0);
  a1[7] = (uint32_t)(uintptr_t)(sub_11727B0);
  v3 = (unsigned int)(uintptr_t)(a1);
  a1[9] = 0;
  if ( a3 != 0 )
    HIDWORD(v3) = (uint32_t)(uintptr_t)(sub_1172C90);
  *(uint32_t *)(v3 + 32) = HIDWORD(v3);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::File::Construct  (binary VA: 0x1172f10)
// Original: gameswf::File::File
// ----------------------------------------------------------------------------
gameswf::File::Self * gameswf::File::Construct(gameswf::File::Self *self, const char *a2, const char *a3)
{
  int HostInterface;
  gameswf::File::Self *result;
  gameswf::File::Self *v5;

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1;
  HostInterface = gameswf::getHostInterface();
  result = (gameswf::File::Self *)G4_VCALL<int>(HostInterface, 24, a2, a3);
  v5 = result;
  if ( result != nullptr )
  {
    if ( G4_VCALL<uint8_t>(result, 48) != 0 )
    {
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(sub_11726D0);
      *((uint32_t *)self + 9) = 0;
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(sub_1172700);
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(sub_1172710);
      *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(sub_1172760);
      *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(sub_1172790);
      *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(sub_1172C60);
      result = (gameswf::File::Self *)sub_1172980;
      *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(sub_1172980);
    }
    else
    {
      (**(void (***)(gameswf::File::Self *))v5)(v5);
      return (gameswf::File::Self *)gameswf::free_internal(v5);
    }
  }
  return result;
}



// ============================================================================
// Address:   0x1173020 (size: 161 bytes)
// Symbol:    _ZN7gameswf4FileC2ENS0_18memory_buffer_enumE
// Demangled: gameswf::File::File(gameswf::File::memory_buffer_enum)
// ============================================================================
// Alternative name is '_ZN7gameswf4FileC1ENS0_18memory_buffer_enumE'
int (*gameswf::File::Construct(int *a1))(gameswf::Self *a1)
{
  int v1;

  v1 = opNew(0x18u);
  gameswf::MemBuf::Construct((gameswf::MemBuf::Self *)v1);
  *(uint32_t *)(v1 + 16) = 0;
  *(uint8_t *)(v1 + 20) = 0;
  a1[2] = (int)(uintptr_t)(sub_1172AF0);
  *a1 = v1;
  a1[9] = 0;
  a1[3] = (int)(uintptr_t)(sub_1172B60);
  a1[4] = (int)(uintptr_t)(sub_1172E10);
  a1[5] = (int)(uintptr_t)(sub_11727C0);
  a1[6] = (int)(uintptr_t)(sub_11727D0);
  a1[7] = (int)(uintptr_t)(sub_11727E0);
  a1[8] = (int)(uintptr_t)(sub_1172C10);
  return sub_1172C10;
}


// ============================================================================
// Address:   0x11730d0 (size: 185 bytes)
// Symbol:    _ZN7gameswf4FileC2ENS0_18memory_buffer_enumEiPv
// Demangled: gameswf::File::File(gameswf::File::memory_buffer_enum,int,void *)
// ============================================================================
// Alternative name is '_ZN7gameswf4FileC1ENS0_18memory_buffer_enumEiPv'
int (*gameswf::File::Construct(int *a1, int a2, int a3, int a4))(gameswf::Self *a1)
{
  int v4;

  v4 = opNew(0x18u);
  gameswf::MemBuf::Construct(v4, 0, a4, a3);
  *(uint32_t *)(v4 + 16) = 0;
  *(uint8_t *)(v4 + 20) = 1;
  *a1 = v4;
  a1[2] = (int)(uintptr_t)(sub_1172AF0);
  a1[9] = 0;
  a1[3] = (int)(uintptr_t)(sub_1172B60);
  a1[4] = (int)(uintptr_t)(sub_1172E10);
  a1[5] = (int)(uintptr_t)(sub_11727C0);
  a1[6] = (int)(uintptr_t)(sub_11727D0);
  a1[7] = (int)(uintptr_t)(sub_11727E0);
  a1[8] = (int)(uintptr_t)(sub_1172C10);
  return sub_1172C10;
}


// ============================================================================
// Address:   0x1173190 (size: 70 bytes)
// Symbol:    _ZN7gameswf4File5closeEv
// Demangled: gameswf::File::close(void)
// ============================================================================
int (*gameswf::File::close(gameswf::File::Self *self))(uint32_t)
{
  int (*result)(uint32_t);

  result = *((int (**)(uint32_t))self + 8);
  if ( result != nullptr )
    result = (int (*)(uint32_t))result(*(uint32_t *)self);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 8) = 0;
  return result;
}
// ----------------------------------------------------------------------------
// Function: gameswf::File::Destroy  (binary VA: 0x11731e0)
// Original: gameswf::File::~File
// ----------------------------------------------------------------------------
void gameswf::File::Destroy(gameswf::File::Self *self)
{
  gameswf::File::close(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::File::copyFrom  (binary VA: 0x1173210)
// Original: gameswf::File::copyFrom
// ----------------------------------------------------------------------------
int gameswf::File::copyFrom(gameswf::File::Self *self, gameswf::File::Self *a2)
{
  int result;
  uint8_t v3[13];

  while ( 1 )
  {
    result = (*((int (**)(uint32_t))a2 + 7))(*(uint32_t *)a2);
    if ( (uint8_t)result != 0 )
      break;
    result = (*((int (**)(uint8_t *, int, uint32_t))a2 + 2))(v3, 1, *(uint32_t *)a2);
    if ( *((uint32_t *)a2 + 9) != 0 )
      break;
    (*((void (**)(uint8_t *, int, uint32_t))self + 3))(v3, 1, *(uint32_t *)self);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::File::copyTo  (binary VA: 0x1173270)
// Original: gameswf::File::copyTo
// ----------------------------------------------------------------------------
int gameswf::File::copyTo(gameswf::File::Self *self, gameswf::MemBuf::Self *a2)
{
  int result;
  int v3;
  size_t v4;
  int v5;
  size_t v6;
  size_t v7;

  while ( 1 )
  {
    result = (*((int (**)(uint32_t))self + 7))(*(uint32_t *)self);
    if ( (uint8_t)result != 0 )
      break;
    v3 = *(uint32_t *)a2 + 4096;
    if ( v3 > *((uint32_t *)a2 + 1) )
    {
      v4 = gameswf::MemBuf::capacity((gameswf::MemBuf::Self *)(*(uint32_t *)a2 + 4096), v7);
      gameswf::MemBuf::reserve(a2, v4);
    }
    *(uint32_t *)a2 = v3;
    v7 = 4096;
    result = (*((int (**)(int))self + 2))(*((uint32_t *)a2 + 2) + v3 - 4096);
    if ( result > 4095 || (v5 = *(uint32_t *)a2 + result - 4096, *(uint32_t *)a2 == v5) )
    {
      if ( *((uint32_t *)self + 9) != 0 )
        return result;
    }
    else
    {
      if ( v5 > *((uint32_t *)a2 + 1) )
      {
        v6 = gameswf::MemBuf::capacity((gameswf::MemBuf::Self *)(*(uint32_t *)a2 + result - 4096), 4096);
        result = (int)(uintptr_t)(gameswf::MemBuf::reserve(a2, v6));
      }
      *(uint32_t *)a2 = v5;
      if ( *((uint32_t *)self + 9) != 0 )
        return result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::File::readFully  (binary VA: 0x1173340)
// Original: gameswf::File::readFully
// ----------------------------------------------------------------------------
int gameswf::File::readFully(gameswf::File::Self *self, gameswf::MemBuf::Self *a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = a3;
  if ( a3 == -1 )
    v3 = *(uint32_t *)a2;
  v4 = 0;
  do
  {
    result = (*((int (**)(uint32_t))self + 7))(*(uint32_t *)self);
    if ( (uint8_t)result != 0 )
      break;
    if ( v3 <= 0 )
      break;
    result = (*((int (**)(int, int, uint32_t))self + 2))(*((uint32_t *)a2 + 2) + v4, v3, *(uint32_t *)self);
    v4 += result;
    v3 -= result;
    if ( *((uint32_t *)self + 9) != 0 )
      break;
  }
  while ( result > 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::File::readFully  (binary VA: 0x11733b0)
// Original: gameswf::File::readFully
// ----------------------------------------------------------------------------
void gameswf::File::readFully(gameswf::File::Self *self, char *a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a3;
  if ( a3 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = (*((int (**)(char *, int, uint32_t))self + 2))(&a2[v4], v3, *(uint32_t *)self);
      v4 += v5;
      if ( v5 <= 0 )
        break;
      v3 -= v5;
    }
    while ( v3 > 0 );
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::File::copyBytes  (binary VA: 0x1173400)
// Original: gameswf::File::copyBytes
// ----------------------------------------------------------------------------
int gameswf::File::copyBytes(gameswf::File::Self *self, gameswf::File::Self *a2, int a3)
{
  int v4;
  int v5;
  int v6;
  int v7;
  typedef gameswf::File::Self *_g4_t_v9;
  typedef uint8_t _g4_t_v10[4108];
  enum : size_t {
    _g4_s0 = 4192u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  if ( a3 != 0 )
  {
    v4 = a3;
    while ( 1 )
    {
      v5 = 4096;
      v9 = a2;
      if ( v4 <= 4095 )
        v5 = v4;
      v6 = (*((int (**)(uint8_t *, int, uint32_t))a2 + 2))(v10, v5, *(uint32_t *)a2);
      v7 = (*((int (**)(uint8_t *, int, uint32_t))self + 3))(v10, v6, *(uint32_t *)self);
      v4 -= v7;
      a2 = v9;
      if ( v5 > v7 )
        break;
      if ( v4 == 0 )
        return a3;
    }
    a3 -= v4;
  }
  return a3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::File::writeString  (binary VA: 0x11734a0)
// Original: gameswf::File::writeString
// ----------------------------------------------------------------------------
int gameswf::File::writeString(gameswf::File::Self *self, const char *a2)
{
  int v3;
  int (*v4)(uint8_t *, int, int);
  int result;
  uint8_t v6[9];

  while ( 1 )
  {
    v3 = *(uint32_t *)self;
    v4 = *((int (**)(uint8_t *, int, int))self + 3);
    v6[0] = *a2;
    result = v4(v6, 1, v3);
    if ( *a2 == 0 )
      break;
    ++a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::File::readString  (binary VA: 0x11734f0)
// Original: gameswf::File::readString
// ----------------------------------------------------------------------------
int gameswf::File::readString(gameswf::File::Self *self, char *a2, int a3, uint8_t a4)
{
  char *v4;
  int v5;
  bool v6;
  char v8[13];

  if ( a3 <= 0 )
  {
LABEL_6:
    a2[a3 - 1] = 0;
    return -1;
  }
  else
  {
    v4 = a2;
    v5 = 0;
    while ( 1 )
    {
      (*((void (**)(char *, int, uint32_t))self + 2))(v8, 1, *(uint32_t *)self);
      v6 = v8[0] == a4;
      *v4 = v8[0];
      if ( v6 )
        break;
      ++v5;
      ++v4;
      if ( v5 == a3 )
        goto LABEL_6;
    }
    *v4 = 0;
    return v5;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::File::printf  (binary VA: 0x1173580)
// Original: gameswf::File::printf
// ----------------------------------------------------------------------------
int gameswf::File::printf(gameswf::File::Self *self, char *format, ...)
{
  char s[1000];
  va_list va;

  va_start(va, format);
  vsnprintf(s, 0x3E8u, format, va);
  return (*((int (**)(char *, unsigned int, uint32_t))self + 3))(s, strlen(s), *(uint32_t *)self);
}


