#include "Core/Utils/DecompTypes.h"
#include "havok_base_part02.h"

// ----------------------------------------------------------------------------
// Function: hkStackTracer::Construct  (binary VA: 0x1562040)
// Original: hkStackTracer::hkStackTracer
// ----------------------------------------------------------------------------
void hkStackTracer::Construct(hkStackTracer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20972F0);
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::dumpStackTrace  (binary VA: 0x1562060)
// Original: hkStackTracer::dumpStackTrace
// ----------------------------------------------------------------------------
int hkStackTracer::dumpStackTrace(hkStackTracer::Self *self, const unsigned int *a2, int a3, void (*a4)(const char *, void *), void *a5)
{
  int result;
  int i;
  uint8_t v7[284];

  result = a3;
  if ( a3 > 0 )
  {
    for ( i = 0; i != a3; ++i )
    {
      hkString::snprintf((hkString::Self *)v7, 0x100u, "0x%x\n", (const char *)a2[i]);
      result = ((int (*)(uint8_t *, void *))a4)(v7, a5);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::dumpTrace  (binary VA: 0x15620f0)
// Original: hkStackTracer::CallTree::dumpTrace
// ----------------------------------------------------------------------------
void hkStackTracer::CallTree::dumpTrace(hkStackTracer::CallTree::Self *self, int a2, hkOstream::Self *a3)
{
  int v3;
  typedef uint8_t _g4_t_v4[4];
  typedef unsigned int _g4_t_v5[23];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);

  if ( a2 < 0 )
  {
    hkOstream::opShl((int)(uintptr_t)(a3), (hkString::Self *)"No stack trace\n");
  }
  else
  {
    v3 = hkStackTracer::CallTree::getCallStack(self, a2, v5, 16);
    hkStackTracer::Construct((hkStackTracer::Self *)v4);
    hkStackTracer::dumpStackTrace((hkStackTracer::Self *)v4, v5, v3, (void (*)(const char *, void *))sub_1561780, a3);
    hkStackTracer::Destroy((hkStackTracer::Self *)v4);
  }
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::getStackTrace  (binary VA: 0x15621a0)
// Original: hkStackTracer::getStackTrace
// ----------------------------------------------------------------------------
int hkStackTracer::getStackTrace()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::insertCallStack  (binary VA: 0x15621b0)
// Original: hkStackTracer::CallTree::insertCallStack
// ----------------------------------------------------------------------------
int hkStackTracer::CallTree::insertCallStack(hkStackTracer::CallTree::Self *self)
{
  int StackTrace;
  unsigned int v3[130];

  StackTrace = hkStackTracer::getStackTrace();
  if ( StackTrace <= 0 )
    return -1;
  else
    return hkStackTracer::CallTree::insertCallStack(self, v3, StackTrace - 1);
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::refreshSymbols  (binary VA: 0x1562220)
// Original: hkStackTracer::refreshSymbols
// ----------------------------------------------------------------------------
void hkStackTracer::refreshSymbols()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::getModuleInfo  (binary VA: 0x1562230)
// Original: hkStackTracer::getModuleInfo
// ----------------------------------------------------------------------------
void hkStackTracer::getModuleInfo()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::getImplementation  (binary VA: 0x1562240)
// Original: hkStackTracer::getImplementation
// ----------------------------------------------------------------------------
int hkStackTracer::getImplementation()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::replaceImplementation  (binary VA: 0x1562250)
// Original: hkStackTracer::replaceImplementation
// ----------------------------------------------------------------------------
void hkStackTracer::replaceImplementation()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::setNeedsSymInitialize  (binary VA: 0x1562260)
// Original: hkStackTracer::setNeedsSymInitialize
// ----------------------------------------------------------------------------
void hkStackTracer::setNeedsSymInitialize()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkUuidPseudoRandomGenerator::Destroy  (binary VA: 0x1562270)
// Original: hkUuidPseudoRandomGenerator::~hkUuidPseudoRandomGenerator
// ----------------------------------------------------------------------------
void hkUuidPseudoRandomGenerator::Destroy(hkUuidPseudoRandomGenerator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097328);
  hkMT19937RandomGenerator::Destroy((hkUuidPseudoRandomGenerator::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkUuidPseudoRandomGenerator::Destroy_ea15622b0  (binary VA: 0x15622b0)
// Original: hkUuidPseudoRandomGenerator::~hkUuidPseudoRandomGenerator
// ----------------------------------------------------------------------------
void hkUuidPseudoRandomGenerator::Destroy_ea15622b0(hkUuidPseudoRandomGenerator::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097328);
  hkMT19937RandomGenerator::Destroy((hkUuidPseudoRandomGenerator::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkUuid::getNil  (binary VA: 0x15623c0)
// Original: hkUuid::getNil
// ----------------------------------------------------------------------------
void * hkUuid::getNil()
{
  return &unk_2120D54;
}

// ----------------------------------------------------------------------------
// Function: hkUuid::isValidUuidString  (binary VA: 0x15623e0)
// Original: hkUuid::isValidUuidString
// ----------------------------------------------------------------------------
int hkUuid::isValidUuidString(hkUuid::Self *self)
{
  int v1;
  int v3;
  const char *v4;

  v1 = 0;
  if ( hkString::strLen(self, v4) == 36
    && isxdigit(*(char *)self) != 0
    && isxdigit(*((char *)self + 1)) != 0
    && isxdigit(*((char *)self + 2)) != 0
    && isxdigit(*((char *)self + 3)) != 0
    && isxdigit(*((char *)self + 4)) != 0
    && isxdigit(*((char *)self + 5)) != 0
    && isxdigit(*((char *)self + 6)) != 0
    && isxdigit(*((char *)self + 7)) != 0
    && *((uint8_t *)self + 8) == 45 )
  {
    if ( isxdigit(*((char *)self + 9)) == 0
      || isxdigit(*((char *)self + 10)) == 0
      || isxdigit(*((char *)self + 11)) == 0
      || isxdigit(*((char *)self + 12)) == 0 )
    {
      return 0;
    }
    if ( *((uint8_t *)self + 13) == 45
      && isxdigit(*((char *)self + 14)) != 0
      && isxdigit(*((char *)self + 15)) != 0
      && isxdigit(*((char *)self + 16)) != 0
      && isxdigit(*((char *)self + 17)) != 0
      && *((uint8_t *)self + 18) == 45 )
    {
      if ( isxdigit(*((char *)self + 19)) == 0
        || isxdigit(*((char *)self + 20)) == 0
        || isxdigit(*((char *)self + 21)) == 0
        || isxdigit(*((char *)self + 22)) == 0 )
      {
        return 0;
      }
      if ( *((uint8_t *)self + 23) == 45
        && isxdigit(*((char *)self + 24)) != 0
        && isxdigit(*((char *)self + 25)) != 0
        && isxdigit(*((char *)self + 26)) != 0
        && isxdigit(*((char *)self + 27)) != 0 )
      {
        if ( isxdigit(*((char *)self + 28)) != 0
          && isxdigit(*((char *)self + 29)) != 0
          && isxdigit(*((char *)self + 30)) != 0
          && isxdigit(*((char *)self + 31)) != 0
          && isxdigit(*((char *)self + 32)) != 0
          && isxdigit(*((char *)self + 33)) != 0
          && isxdigit(*((char *)self + 34)) != 0 )
        {
          v3 = isxdigit(*((char *)self + 35));
          LOBYTE(v3) = v3 != 0;
          return v3;
        }
        return 0;
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkUuid::Construct  (binary VA: 0x1562690)
// Original: hkUuid::hkUuid
// ----------------------------------------------------------------------------
void hkUuid::Construct(hkUuid::Self *self, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  g4_int128_t v5;
  *(uint64_t *)&v5 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)), 0);
  *((uint64_t *)&v5 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5)), 0);
  *(g4_int128_t *)self = v5;
}

// ----------------------------------------------------------------------------
// Function: hkUuid::Construct  (binary VA: 0x15626c0)
// Original: hkUuid::hkUuid
// ----------------------------------------------------------------------------
void hkUuid::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkUuid::setRandom  (binary VA: 0x15626d0)
// Original: hkUuid::setRandom
// ----------------------------------------------------------------------------
int hkUuid::setRandom(hkUuid::Self *self)
{
  int v1;
  int v2;
  int Rand;
  int v5;
  int v6;
  int v7;
  int v8;

  hkReferencedObject::lockAll();
  Rand = hkMT19937RandomGenerator::getRand((hkMT19937RandomGenerator::Self *)(hkSingleton<hkUuidPseudoRandomGenerator::Self>::s_instance
                                                                      + 8));
  v5 = hkMT19937RandomGenerator::getRand((hkMT19937RandomGenerator::Self *)(hkSingleton<hkUuidPseudoRandomGenerator::Self>::s_instance
                                                                    + 8));
  v1 = hkMT19937RandomGenerator::getRand((hkMT19937RandomGenerator::Self *)(hkSingleton<hkUuidPseudoRandomGenerator::Self>::s_instance
                                                                    + 8));
  v2 = hkMT19937RandomGenerator::getRand((hkMT19937RandomGenerator::Self *)(hkSingleton<hkUuidPseudoRandomGenerator::Self>::s_instance
                                                                    + 8));
  HIBYTE(v8) = v2;
  BYTE1(v7) = BYTE2(v1);
  BYTE2(v7) = BYTE1(v1);
  HIBYTE(v7) = v1;
  LOBYTE(v8) = HIBYTE(v2);
  BYTE1(v8) = BYTE2(v2);
  HIWORD(v6) = v5 & 0xFFF | 0x4000;
  LOBYTE(v7) = HIBYTE(v1) & 0x3F | 0x80;
  LOWORD(v6) = HIWORD(v5);
  *(uint32_t *)self = Rand;
  *((uint32_t *)self + 1) = v6;
  BYTE2(v8) = BYTE1(v2);
  *((uint32_t *)self + 2) = v7;
  *((uint32_t *)self + 3) = v8;
  return hkReferencedObject::unlockAll();
}

// ----------------------------------------------------------------------------
// Function: hkUuid::setFromString  (binary VA: 0x15627d0)
// Original: hkUuid::setFromString
// ----------------------------------------------------------------------------
hkUuid::Self * hkUuid::setFromString(hkUuid::Self *self, char *a2, hkUuid::Self *a3)
{
  int v3;
  int v4;
  int v5;
  typedef hkString::Self *_g4_t_v7;
  typedef hkString::Self *_g4_t_v8;
  typedef hkString::Self *_g4_t_v9;
  typedef hkString::Self *_g4_t_v10;
  typedef hkString::Self *_g4_t_v11;
  typedef hkString::Self *_g4_t_v12;
  typedef hkString::Self *_g4_t_v13;
  typedef hkString::Self *_g4_t_v14;
  typedef hkString::Self *_g4_t_v15;
  typedef hkString::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[2];
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int16_t _g4_t_v26;
  typedef uint8_t _g4_t_v27[3];
  typedef int16_t _g4_t_v28;
  typedef char _g4_t_v29;
  typedef int16_t _g4_t_v30;
  typedef char _g4_t_v31;
  typedef int16_t _g4_t_v32;
  typedef char _g4_t_v33;
  typedef uint8_t _g4_t_v34[3];
  typedef int16_t _g4_t_v35;
  typedef char _g4_t_v36;
  typedef uint8_t _g4_t_v37[31];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v10)) > _g4_s3 ? (8u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v11)) > _g4_s4 ? (8u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v12)) > _g4_s5 ? (8u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v13)) > _g4_s6 ? (8u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v14)) > _g4_s7 ? (8u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v15)) > _g4_s8 ? (8u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v16)) > _g4_s9 ? (8u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v17)) > _g4_s10 ? (12u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v18)) > _g4_s11 ? (20u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v19)) > _g4_s12 ? (24u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v20)) > _g4_s13 ? (28u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v21)) > _g4_s14 ? (32u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (37u + sizeof(_g4_t_v22)) > _g4_s15 ? (37u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (45u + sizeof(_g4_t_v23)) > _g4_s16 ? (45u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (49u + sizeof(_g4_t_v24)) > _g4_s17 ? (49u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (53u + sizeof(_g4_t_v25)) > _g4_s18 ? (53u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (57u + sizeof(_g4_t_v26)) > _g4_s19 ? (57u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (59u + sizeof(_g4_t_v27)) > _g4_s20 ? (59u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (62u + sizeof(_g4_t_v28)) > _g4_s21 ? (62u + sizeof(_g4_t_v28)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v29)) > _g4_s22 ? (64u + sizeof(_g4_t_v29)) : _g4_s22,
    _g4_s24 = (65u + sizeof(_g4_t_v30)) > _g4_s23 ? (65u + sizeof(_g4_t_v30)) : _g4_s23,
    _g4_s25 = (67u + sizeof(_g4_t_v31)) > _g4_s24 ? (67u + sizeof(_g4_t_v31)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v32)) > _g4_s25 ? (68u + sizeof(_g4_t_v32)) : _g4_s25,
    _g4_s27 = (70u + sizeof(_g4_t_v33)) > _g4_s26 ? (70u + sizeof(_g4_t_v33)) : _g4_s26,
    _g4_s28 = (71u + sizeof(_g4_t_v34)) > _g4_s27 ? (71u + sizeof(_g4_t_v34)) : _g4_s27,
    _g4_s29 = (74u + sizeof(_g4_t_v35)) > _g4_s28 ? (74u + sizeof(_g4_t_v35)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v36)) > _g4_s29 ? (76u + sizeof(_g4_t_v36)) : _g4_s29,
    _g4_s31 = (77u + sizeof(_g4_t_v37)) > _g4_s30 ? (77u + sizeof(_g4_t_v37)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 37u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 45u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 49u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 53u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 57u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 59u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 62u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 65u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 67u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 70u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 71u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 74u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 77u);

  if ( (uint8_t)hkUuid::isValidUuidString(a3) != 0 )
  {
    v3 = *((uint32_t *)a3 + 8);
    v22[0] = *(uint32_t *)a3;
    v22[1] = *((uint32_t *)a3 + 1);
    v23 = *((uint32_t *)a3 + 2);
    v24 = *((uint32_t *)a3 + 3);
    v25 = *((uint32_t *)a3 + 4);
    v17 = *((uint32_t *)a3 + 6);
    v4 = *((uint32_t *)a3 + 7);
    v37[1] = HIBYTE(v3);
    v35 = v3;
    v37[0] = BYTE2(v3);
    v5 = *((uint32_t *)a3 + 5);
    v34[1] = HIBYTE(v4);
    v26 = (uint8_t)v5;
    v34[0] = BYTE2(v4);
    v32 = v4;
    v37[2] = 0;
    v36 = 0;
    v30 = HIWORD(v17);
    v34[2] = 0;
    v33 = 0;
    v31 = 0;
    v29 = 0;
    v28 = v17;
    v27[1] = BYTE2(v5);
    v27[2] = 0;
    v27[0] = BYTE1(v5);
    BYTE2(v25) = 0;
    BYTE1(v24) = 0;
    LOBYTE(v23) = 0;
    v18 = hkString::atoull((hkString::Self *)v22, (const char *)&word_10, (int)(uintptr_t)(v22));
    LOWORD(v19) = hkString::atoi((hkString::Self *)((char *)&v23 + 1), (const char *)&word_10, (int)(uintptr_t)(v7));
    HIWORD(v19) = hkString::atoi((hkString::Self *)((char *)&v24 + 2), (const char *)&word_10, (int)(uintptr_t)(v8));
    LOBYTE(v20) = hkString::atoi((hkString::Self *)((char *)&v25 + 3), (const char *)&word_10, (int)(uintptr_t)(v9));
    BYTE1(v20) = hkString::atoi((hkString::Self *)v27, (const char *)&word_10, (int)(uintptr_t)(v10));
    BYTE2(v20) = hkString::atoi((hkString::Self *)&v28, (const char *)&word_10, (int)(uintptr_t)(v11));
    HIBYTE(v20) = hkString::atoi((hkString::Self *)&v30, (const char *)&word_10, (int)(uintptr_t)(v12));
    LOBYTE(v21) = hkString::atoi((hkString::Self *)&v32, (const char *)&word_10, (int)(uintptr_t)(v13));
    BYTE1(v21) = hkString::atoi((hkString::Self *)v34, (const char *)&word_10, (int)(uintptr_t)(v14));
    BYTE2(v21) = hkString::atoi((hkString::Self *)&v35, (const char *)&word_10, (int)(uintptr_t)(v15));
    HIBYTE(v21) = hkString::atoi((hkString::Self *)v37, (const char *)&word_10, (int)(uintptr_t)(v16));
    *(uint32_t *)self = 0;
    *(uint32_t *)a2 = v18;
    *((uint32_t *)a2 + 1) = v19;
    *((uint32_t *)a2 + 2) = v20;
    *((uint32_t *)a2 + 3) = v21;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkUuid::setCombination  (binary VA: 0x1562a40)
// Original: hkUuid::setCombination
// ----------------------------------------------------------------------------
hkUuid::Self * hkUuid::setCombination(hkUuid::Self *self, __m128i *a2, const hkUuid::Self *a3)
{
  int16_t v3;
  hkUuid::Self *result;
  int32_t v5;
  int32_t v6;
  typedef __m128i _g4_t_v7;
  typedef __m128i _g4_t_v8;
  typedef __m128i _g4_t_v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v10)) > _g4_s3 ? (48u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);

  if ( &v8 >= &a2[1] || a2 >= &v9 )
  {
    v8 = *a2;
    if ( &v9 >= (__m128i *)a3 + 1 )
      goto LABEL_3;
  }
  else
  {
g4_m128_lane<int64_t>(v8, 0) =g4_m128_lane<int64_t>(*(a2), 0);
    v5 =g4_m128_lane<int32_t>(*(a2), 3);
g4_m128_lane<int32_t>(v8, 2) =g4_m128_lane<int32_t>(*(a2), 2);
g4_m128_lane<int32_t>(v8, 3) = v5;
    if ( &v9 >= (__m128i *)a3 + 1 )
      goto LABEL_3;
  }
  if ( a3 < (const hkUuid::Self *)&v10 )
  {
g4_m128_lane<int64_t>(v9, 0) = *(uint64_t *)a3;
    v6 = *((uint32_t *)a3 + 3);
g4_m128_lane<int32_t>(v9, 2) = *((uint32_t *)a3 + 2);
g4_m128_lane<int32_t>(v9, 3) = v6;
    goto LABEL_4;
  }
LABEL_3:
  v9 = *(__m128i *)a3;
LABEL_4:
  *(int32_t *)((char *)&g4_m128_lane<int32_t>(v7, 2) + 1) = *(int32_t *)((char *)&g4_m128_lane<int32_t>(v8, 2) + 1)
                                             ^ *(int32_t *)((char *)&g4_m128_lane<int32_t>(v9, 2) + 1);
g4_m128_lane<int32_t>(v7, 0) =g4_m128_lane<int32_t>(v8, 0) ^g4_m128_lane<int32_t>(v9, 0);
g4_m128_lane<int16_t>(v7, 2) =g4_m128_lane<int16_t>(v8, 2) ^g4_m128_lane<int16_t>(v9, 2);
  v3 = (g4_m128_lane<int16_t>(v8, 3) ^g4_m128_lane<int16_t>(v9, 3)) & 0x4FFF;
  HIBYTE(v3) |= 0x40u;
  *(int16_t *)((char *)&g4_m128_lane<int16_t>(v7, 6) + 1) = *(int16_t *)((char *)&g4_m128_lane<int16_t>(v8, 6) + 1)
                                             ^ *(int16_t *)((char *)&g4_m128_lane<int16_t>(v9, 6) + 1);
g4_m128_lane<int8_t>(v7, 15) =g4_m128_lane<int8_t>(v8, 15) ^g4_m128_lane<int8_t>(v9, 15);
g4_m128_lane<int16_t>(v7, 3) = v3;
g4_m128_lane<int8_t>(v7, 8) = (g4_m128_lane<int8_t>(v8, 8) ^g4_m128_lane<int8_t>(v9, 8)) & 0x3F | 0x80;
  result = self;
  if ( &v7 >= (__m128i *)self + 1 || self >= (hkUuid::Self *)&v8 )
  {
    *(__m128i *)self = v7;
  }
  else
  {
    *(uint32_t *)self =g4_m128_lane<int32_t>(v8, 0) ^g4_m128_lane<int32_t>(v9, 0);
    *(uint64_t *)((char *)self + 4) = *(int64_t *)((char *)g4_m128_ptr<int64_t>(v7) + 4);
    result = (hkUuid::Self *)g4_m128_lane<int32_t>(v7, 3);
    *((uint32_t *)self + 3) =g4_m128_lane<int32_t>(v7, 3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkUuid::setCombination  (binary VA: 0x1562c10)
// Original: hkUuid::setCombination
// ----------------------------------------------------------------------------
__m128i * hkUuid::setCombination(__m128i *self, __m128i *a2, const char *a3)
{
  const char *v3;
  char v4;
  int v5;
  __m128i *result;
  int32_t v7;
  typedef __m128i _g4_t_v8;
  typedef uint8_t _g4_t_v9[8];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v3 = a3;
  if ( &v8 >= &a2[1] || a2 >= (__m128i *)v9 )
  {
    v8 = *a2;
  }
  else
  {
g4_m128_lane<int64_t>(v8, 0) =g4_m128_lane<int64_t>(*(a2), 0);
    v7 =g4_m128_lane<int32_t>(*(a2), 3);
g4_m128_lane<int32_t>(v8, 2) =g4_m128_lane<int32_t>(*(a2), 2);
g4_m128_lane<int32_t>(v8, 3) = v7;
  }
  v4 = *a3;
  v5 = 0;
  if ( *a3 != 0 )
  {
    do
    {
g4_m128_lane<int8_t>(v8, v5 + 10) ^= v4;
      v4 = *++v3;
      v5 = (v5 + 1) % 6;
    }
    while ( *v3 != 0 );
  }
  if ( &v8 >= self + 1 || self >= (__m128i *)v9 )
  {
    *self = v8;
    return self;
  }
  else
  {
g4_m128_lane<int64_t>(*(self), 0) =g4_m128_lane<int64_t>(v8, 0);
g4_m128_lane<int32_t>(*(self), 2) =g4_m128_lane<int32_t>(v8, 2);
    result = (__m128i *)g4_m128_lane<int32_t>(v8, 3);
g4_m128_lane<int32_t>(*(self), 3) =g4_m128_lane<int32_t>(v8, 3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkUuid::toString  (binary VA: 0x1562cf0)
// Original: hkUuid::toString
// ----------------------------------------------------------------------------
int hkUuid::toString(__m128i *self, hkStringBuf::Self *a2)
{
  int32_t v3;
  typedef __m128i _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);

  if ( &v4 >= self + 1 || self >= (__m128i *)&v5 )
  {
    v4 = *self;
  }
  else
  {
g4_m128_lane<int64_t>(v4, 0) =g4_m128_lane<int64_t>(*(self), 0);
    v3 =g4_m128_lane<int32_t>(*(self), 3);
g4_m128_lane<int32_t>(v4, 2) =g4_m128_lane<int32_t>(*(self), 2);
g4_m128_lane<int32_t>(v4, 3) = v3;
  }
  hkStringBuf::printf(
    a2,
    "%.8x-%.4x-%.4x-%.2x%.2x-%.2x%.2x%.2x%.2x%.2x%.2x",
g4_m128_lane<int32_t>(v4, 0),
g4_m128_lane<uint16_t>(v4, 2),
g4_m128_lane<uint16_t>(v4, 3),
g4_m128_lane<uint8_t>(v4, 8),
g4_m128_lane<uint8_t>(v4, 9),
g4_m128_lane<uint8_t>(v4, 10),
g4_m128_lane<uint8_t>(v4, 11),
g4_m128_lane<uint8_t>(v4, 12),
g4_m128_lane<uint8_t>(v4, 13),
g4_m128_lane<uint8_t>(v4, 14),
g4_m128_lane<uint8_t>(v4, 15));
  return *(uint32_t *)a2;
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::staticClass  (binary VA: 0x1562ea0)
// Original: hkReferencedObject::staticClass
// ----------------------------------------------------------------------------
void * hkReferencedObject::staticClass()
{
  return &hkReferencedObjectClass;
}

// ----------------------------------------------------------------------------
// Function: hkContactPoint::staticClass  (binary VA: 0x1563030)
// Original: hkContactPoint::staticClass
// ----------------------------------------------------------------------------
void * hkContactPoint::staticClass()
{
  return &hkContactPointClass;
}

// ----------------------------------------------------------------------------
// Function: hkStringPtr::Construct  (binary VA: 0x15631e0)
// Original: hkStringPtr::hkStringPtr
// ----------------------------------------------------------------------------
void hkStringPtr::Construct(hkStringPtr::Self *self)
{
  *(uint32_t *)self = 0;
}

// ----------------------------------------------------------------------------
// Function: hkStringPtr::Construct  (binary VA: 0x15631f0)
// Original: hkStringPtr::hkStringPtr
// ----------------------------------------------------------------------------
void hkStringPtr::Construct(hkStringPtr::Self *self, hkString::Self *a2)
{
  hkMemoryAllocator::Self *v2;
  int address;
  hkString::Self *v4;
  char *v5;
  hkMemoryAllocator::Self *v6;
  const char *v7;

  *(uint32_t *)self = 0;
  if ( a2 != nullptr )
  {
    v2 = (hkMemoryAllocator::Self *)(hkString::strLen(a2, (const char *)v6) + 1);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v4 = (hkString::Self *)hkMemoryRouter::easyAlloc(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), v2);
    v5 = (char *)v4 + 1;
    hkString::strCpy(v4, (char *)a2, v7);
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
  }
}

// ----------------------------------------------------------------------------
// Function: hkStringPtr::Construct  (binary VA: 0x1563260)
// Original: hkStringPtr::hkStringPtr
// ----------------------------------------------------------------------------
void hkStringPtr::Construct(hkStringPtr::Self *self, hkString::Self *a2, int a3)
{
  size_t v3;
  int v4;
  int v5;
  hkString::Self *v6;
  hkMemoryAllocator::Self *v7;
  int address;
  hkMemoryAllocator::Self *v9;
  const char *v10;
  int v11;

  v3 = a3;
  *(uint32_t *)self = 0;
  if ( a2 != nullptr )
  {
    if ( a3 == -1 )
    {
      v7 = (hkMemoryAllocator::Self *)(hkString::strLen(a2, (const char *)v9) + 1);
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v6 = (hkString::Self *)hkMemoryRouter::easyAlloc(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), v7);
      hkString::strCpy(v6, (char *)a2, v10);
    }
    else
    {
      v4 = hkString::strLen(a2, (const char *)v9);
      if ( v4 <= a3 )
        v3 = v4;
      v5 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v6 = (hkString::Self *)hkMemoryRouter::easyAlloc(
                         *(hkMemoryRouter::Self **)(*(uint32_t *)v5 + 44),
                         (hkMemoryAllocator::Self *)(v3 + 1));
      hkString::strNcpy(v6, (char *)a2, v3, v11);
      *((uint8_t *)v6 + v3) = 0;
    }
    *(uint32_t *)self = (uint32_t)(uintptr_t)((char *)v6 + 1);
  }
}

// ----------------------------------------------------------------------------
// Function: hkStringPtr::Construct  (binary VA: 0x1563330)
// Original: hkStringPtr::hkStringPtr
// ----------------------------------------------------------------------------
void hkStringPtr::Construct(hkStringPtr::Self *self, const hkStringPtr::Self *a2)
{
  hkString::Self *v2;
  char *v3;
  hkMemoryAllocator::Self *v4;
  int address;
  hkString::Self *v6;
  char *v7;
  hkMemoryAllocator::Self *v8;
  const char *v9;

  *(uint32_t *)self = 0;
  v2 = (hkString::Self *)(*(uint32_t *)a2 & 0xFFFFFFFE);
  if ( v2 != nullptr )
  {
    v3 = (char *)(*(uint32_t *)a2 & 0xFFFFFFFE);
    v4 = (hkMemoryAllocator::Self *)(hkString::strLen(v2, (const char *)v8) + 1);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (hkString::Self *)hkMemoryRouter::easyAlloc(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), v4);
    v7 = (char *)v6 + 1;
    hkString::strCpy(v6, v3, v9);
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v7);
  }
}

// ----------------------------------------------------------------------------
// Function: hkStringPtr::Construct  (binary VA: 0x15633b0)
// Original: hkStringPtr::hkStringPtr
// ----------------------------------------------------------------------------
void hkStringPtr::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkStringPtr::Destroy  (binary VA: 0x15633c0)
// Original: hkStringPtr::~hkStringPtr
// ----------------------------------------------------------------------------
void hkStringPtr::Destroy(hkStringPtr::Self *self)
{
  int v1;
  int address;

  v1 = *(uint32_t *)self;
  if ( (*(uint32_t *)self & 0xFFFFFFFE) != 0 )
  {
    if ( (v1 & 1) != 0 )
    {
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), (hkMemoryAllocator::Self *)(v1 - 1));
    }
    *(uint32_t *)self = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkStringPtr::opAssign  (binary VA: 0x1563420)
// Original: hkStringPtr::operator=
// ----------------------------------------------------------------------------
hkStringPtr::Self * hkStringPtr::opAssign(hkStringPtr::Self *self, hkString::Self *a2)
{
  int v2;
  hkMemoryAllocator::Self *v3;
  int v4;
  hkString::Self *v5;
  char *v6;
  int address;
  hkMemoryAllocator::Self *v9;
  const char *v10;

  v2 = *(uint32_t *)self;
  if ( a2 == (hkString::Self *)(*(uint32_t *)self & 0xFFFFFFFE) )
    return self;
  if ( (v2 & 1) != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), (hkMemoryAllocator::Self *)(v2 - 1));
    if ( a2 != nullptr )
      goto LABEL_4;
  }
  else if ( a2 != nullptr )
  {
LABEL_4:
    v3 = (hkMemoryAllocator::Self *)(hkString::strLen(a2, (const char *)v9) + 1);
    v4 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v5 = (hkString::Self *)hkMemoryRouter::easyAlloc(*(hkMemoryRouter::Self **)(*(uint32_t *)v4 + 44), v3);
    v6 = (char *)v5 + 1;
    hkString::strCpy(v5, (char *)a2, v10);
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v6);
    return self;
  }
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkStringPtr::opAssign  (binary VA: 0x15634e0)
// Original: hkStringPtr::operator=
// ----------------------------------------------------------------------------
hkStringPtr::Self * hkStringPtr::opAssign(hkStringPtr::Self *self, const hkStringPtr::Self *a2)
{
  int v2;
  hkString::Self *v3;
  hkMemoryAllocator::Self *v4;
  int v5;
  hkString::Self *v6;
  char *v7;
  int address;
  hkMemoryAllocator::Self *v10;
  const char *v11;

  v2 = *(uint32_t *)self;
  v3 = (hkString::Self *)(*(uint32_t *)a2 & 0xFFFFFFFE);
  if ( v3 == (hkString::Self *)(*(uint32_t *)self & 0xFFFFFFFE) )
    return self;
  if ( (v2 & 1) != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), (hkMemoryAllocator::Self *)(v2 - 1));
    if ( v3 != nullptr )
      goto LABEL_4;
  }
  else if ( v3 != nullptr )
  {
LABEL_4:
    v4 = (hkMemoryAllocator::Self *)(hkString::strLen(v3, (const char *)v10) + 1);
    v5 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (hkString::Self *)hkMemoryRouter::easyAlloc(*(hkMemoryRouter::Self **)(*(uint32_t *)v5 + 44), v4);
    v7 = (char *)v6 + 1;
    hkString::strCpy(v6, (char *)v3, v11);
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v7);
    return self;
  }
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkStringPtr::getLength  (binary VA: 0x15635a0)
// Original: hkStringPtr::getLength
// ----------------------------------------------------------------------------
int hkStringPtr::getLength(hkStringPtr::Self *self)
{
  int result;
  const char *v2;

  result = 0;
  if ( (*(uint32_t *)self & 0xFFFFFFFE) != 0 )
    return hkString::strLen((hkString::Self *)(*(uint32_t *)self & 0xFFFFFFFE), v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringPtr::printf  (binary VA: 0x15635d0)
// Original: hkStringPtr::printf
// ----------------------------------------------------------------------------
int hkStringPtr::printf(hkStringPtr::Self *self, char *a2, ...)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int result;
  va_list va;
  typedef char *_g4_t_v8;
  typedef hkStringPtr::Self *_g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef hkString::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[71];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v13)) > _g4_s5 ? (36u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v14)) > _g4_s6 ? (40u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);

  va_start(va, a2);
  v2 = -2147483393;
  v14[67] = (uint32_t)(uintptr_t)(&self);
  v9 = self;
  v3 = a2;
  v12 = 0;
  v11 = (hkString::Self *)v14;
  v13 = -2147483393;
  while ( 1 )
  {
    v4 = v2 & 0x3FFFFFFF;
    v5 = hkString::vsnprintf(v11, v2 & 0x3FFFFFFF, v3, va, v8);
    if ( v5 < v4 && v5 >= 0 )
      break;
    if ( v5 < 0 )
    {
      v2 = v13;
      if ( 2 * (v13 & 0x3FFFFFFFu) > (v13 & 0x3FFFFFFFu) )
      {
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v10,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)&v11,
          2 * (v13 & 0x3FFFFFFF),
          1);
        v2 = v13;
      }
    }
    else
    {
      v2 = v13;
      v6 = v5 + 1;
      if ( v6 > (v13 & 0x3FFFFFFF) )
      {
        if ( v6 < 2 * (v13 & 0x3FFFFFFF) )
          v6 = 2 * (v13 & 0x3FFFFFFF);
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v10,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)&v11,
          v6,
          1);
        v2 = v13;
      }
    }
  }
  hkStringPtr::opAssign(v9, v11);
  hkStringPtr::opAssign(v9, v11);
  result = v13;
  v12 = 0;
  if ( v13 >= 0 )
    return (*(int (**)(uint32_t *, hkString::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v11,
             v13 & 0x3FFFFFFF);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringPtr::set  (binary VA: 0x1563790)
// Original: hkStringPtr::set
// ----------------------------------------------------------------------------
hkString::Self * hkStringPtr::set(hkStringPtr::Self *self, hkString::Self *a2, int a3)
{
  size_t v3;
  int v4;
  hkString::Self *result;
  int v6;
  int v7;
  hkString::Self *v8;
  int address;
  hkMemoryAllocator::Self *v10;
  int v11;
  hkMemoryAllocator::Self *v12;
  const char *v13;
  int v14;

  v3 = a3;
  v4 = *(uint32_t *)self;
  result = (hkString::Self *)(*(uint32_t *)self & 0xFFFFFFFE);
  if ( a2 == result )
    return result;
  if ( (v4 & 1) != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), (hkMemoryAllocator::Self *)(v4 - 1));
    if ( a2 != nullptr )
      goto LABEL_4;
LABEL_11:
    *(uint32_t *)self = 0;
    return (hkString::Self *)(self);
  }
  if ( a2 == nullptr )
    goto LABEL_11;
LABEL_4:
  if ( a3 == -1 )
  {
    v10 = (hkMemoryAllocator::Self *)(hkString::strLen(a2, (const char *)v12) + 1);
    v11 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v8 = (hkString::Self *)hkMemoryRouter::easyAlloc(*(hkMemoryRouter::Self **)(*(uint32_t *)v11 + 44), v10);
    hkString::strCpy(v8, (char *)a2, v13);
  }
  else
  {
    v6 = hkString::strLen(a2, (const char *)v12);
    if ( v6 <= a3 )
      v3 = v6;
    v7 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v8 = (hkString::Self *)hkMemoryRouter::easyAlloc(*(hkMemoryRouter::Self **)(*(uint32_t *)v7 + 44), (hkMemoryAllocator::Self *)(v3 + 1));
    hkString::strNcpy(v8, (char *)a2, v3, v14);
    *((uint8_t *)v8 + v3) = 0;
  }
  result = (hkString::Self *)((char *)v8 + 1);
  *(uint32_t *)self = (uint32_t)(uintptr_t)((char *)v8 + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringPtr::setPointerAligned  (binary VA: 0x15638b0)
// Original: hkStringPtr::setPointerAligned
// ----------------------------------------------------------------------------
const char * hkStringPtr::setPointerAligned(hkStringPtr::Self *self, const char *a2)
{
  int v2;
  const char *result;
  int address;

  v2 = *(uint32_t *)self;
  result = (const char *)(*(uint32_t *)self & 0xFFFFFFFE);
  if ( a2 != result )
  {
    if ( result != nullptr )
    {
      if ( (v2 & 1) != 0 )
      {
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        result = (const char *)hkMemoryRouter::easyFree(
                                 *(hkMemoryRouter::Self **)(*(uint32_t *)address + 44),
                                 (hkMemoryAllocator::Self *)(v2 - 1));
      }
      *(uint32_t *)self = 0;
    }
    *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::Construct  (binary VA: 0x1563960)
// Original: hkMemorySnapshot::hkMemorySnapshot
// ----------------------------------------------------------------------------
void hkMemorySnapshot::Construct(hkMemorySnapshot::Self *self, hkMemoryAllocator::Self *a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0x80000000;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 16) = -1;
  *((uint32_t *)self + 17) = -1;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::Construct  (binary VA: 0x15639c0)
// Original: hkMemorySnapshot::hkMemorySnapshot
// ----------------------------------------------------------------------------
void hkMemorySnapshot::Construct(hkMemorySnapshot::Self *self, const hkMemorySnapshot::Self *a2)
{
  hkMemorySnapshot::Self *v2;
  const hkMemorySnapshot::Self *v3;
  int v4;
  const hkMemorySnapshot::Self *v5;
  int v6;
  int v7;
  hkMemoryAllocator::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  hkMemorySnapshot::Self *i;
  unsigned int v15;
  int v16;
  unsigned int v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  int j;
  int v29;
  typedef int _g4_t_v30;
  typedef hkMemoryAllocator::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef const hkMemorySnapshot::Self *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef hkMemorySnapshot::Self *_g4_t_v39;
  typedef int *_g4_t_v40;
  typedef uint32_t _g4_t_v41[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v30)) > _g4_s0 ? (4u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v31)) > _g4_s1 ? (16u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v32)) > _g4_s2 ? (28u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v33)) > _g4_s3 ? (32u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v34)) > _g4_s4 ? (36u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v35)) > _g4_s5 ? (36u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v36)) > _g4_s6 ? (40u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v37)) > _g4_s7 ? (44u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v38)) > _g4_s8 ? (44u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v39)) > _g4_s9 ? (48u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v40)) > _g4_s10 ? (48u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v41)) > _g4_s11 ? (52u + sizeof(_g4_t_v41)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);

  v41[3] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v39 = self;
  v3 = a2;
  v36 = a2;
  v4 = *(uint32_t *)a2;
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)v2 = v4;
  *((uint32_t *)v2 + 2) = 0;
  *((uint32_t *)v2 + 3) = 0x80000000;
  *((uint32_t *)v2 + 4) = 0;
  *((uint32_t *)v2 + 5) = 0;
  *((uint32_t *)v2 + 6) = 0x80000000;
  hkStackTracer::CallTree::Construct((hkMemorySnapshot::Self *)((char *)v2 + 48), (const hkMemorySnapshot::Self *)((char *)v3 + 48));
  v5 = v3;
  v6 = *((uint32_t *)v3 + 2);
  v7 = *((uint32_t *)v2 + 3);
  v34 = *((uint32_t *)v5 + 1);
  v8 = *(hkMemoryAllocator::Self **)v2;
  v9 = *((uint32_t *)v2 + 2);
  v10 = v9 + v6;
  v11 = v7 & 0x3FFFFFFF;
  v37 = v9 + v6;
  if ( v9 + v6 > v11 )
  {
    v29 = 2 * v11;
    if ( 2 * v11 < v10 )
      v29 = v10;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v41, v8, (int *)v39 + 1, v29, 20);
    v9 = *((uint32_t *)v39 + 2);
  }
  v12 = *((uint32_t *)v39 + 1) + 20 * v9;
  if ( v6 > 0 )
  {
    v13 = 0;
    do
    {
      *(uint32_t *)(v12 + v13) = *(uint32_t *)(v34 + v13);
      *(uint32_t *)(v12 + v13 + 4) = *(uint32_t *)(v34 + v13 + 4);
      *(uint32_t *)(v12 + v13 + 8) = *(uint32_t *)(v34 + v13 + 8);
      *(uint32_t *)(v12 + v13 + 12) = *(uint32_t *)(v34 + v13 + 12);
      *(uint32_t *)(v12 + v13 + 16) = *(uint32_t *)(v34 + v13 + 16);
      v13 += 20;
    }
    while ( v13 != 20 * v6 );
  }
  v35 = 0;
  *((uint32_t *)v39 + 2) = v37;
  v31 = (hkMemoryAllocator::Self *)((hkMemorySnapshot::Self *)((char *)v39 + 16));
  for ( i = v39; *((uint32_t *)v36 + 5) > v35; v40[9] = v33 )
  {
    v18 = *((uint32_t *)i + 5);
    if ( v18 == (*((uint32_t *)i + 6) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)i, v31, 44, v30);
      v18 = *((uint32_t *)i + 5);
    }
    v19 = (uint32_t *)(*((uint32_t *)i + 4) + 44 * v18);
    v19[8] = 0;
    v19[9] = 0;
    v19[10] = 0x80000000;
    v20 = *((uint32_t *)i + 5);
    *((uint32_t *)i + 5) = v20 + 1;
    v40 = (int *)(*((uint32_t *)i + 4) + 44 * v20);
    hkString::strNcpy((hkString::Self *)v40, (char *)(44 * v35 + *((uint32_t *)v36 + 4)), 0x20u, v30);
    v21 = *((uint32_t *)v36 + 4) + 44 * v35;
    v22 = v40[9];
    v23 = v40[10] & 0x3FFFFFFF;
    v24 = *(uint32_t *)(v21 + 36);
    v25 = *(uint32_t *)(v21 + 32);
    v38 = v24;
    v26 = v22 + v24;
    v33 = v26;
    if ( v26 > v23 )
    {
      v27 = 2 * v23;
      if ( v26 >= v27 )
        v27 = v26;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v41, *(hkMemoryAllocator::Self **)i, v40 + 8, v27, 4);
      v22 = v40[9];
    }
    v15 = v40[8] + 4 * v22;
    if ( (int)v38 > 0 )
    {
      if ( (v15 >= v25 + 16 || v25 >= v15 + 16) && v38 > 0xB )
      {
        v16 = 0;
        v32 = 4 * (v38 >> 2);
        v17 = 0;
        do
        {
          ++v17;
          *(__m128i *)(v15 + v16) = *(__m128i *)(v25 + v16);
          v16 += 16;
        }
        while ( v38 >> 2 > v17 );
        if ( v38 != v32 )
        {
          *(uint32_t *)(v15 + 16 * (v38 >> 2)) = *(uint32_t *)(v25 + 16 * (v38 >> 2));
          if ( (int)v38 > v32 + 1 )
          {
            *(uint32_t *)(v15 + 4 * (v32 + 1)) = *(uint32_t *)(v25 + 4 * (v32 + 1));
            if ( (int)v38 > v32 + 2 )
              *(uint32_t *)(v15 + 4 * (v32 + 2)) = *(uint32_t *)(v25 + 4 * (v32 + 2));
          }
        }
      }
      else
      {
        for ( j = 0; j != v38; ++j )
          *(uint32_t *)(v15 + 4 * j) = *(uint32_t *)(v25 + 4 * j);
      }
    }
    ++v35;
  }
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::setAllocator  (binary VA: 0x1563cf0)
// Original: hkMemorySnapshot::setAllocator
// ----------------------------------------------------------------------------
hkMemorySnapshot::Self * hkMemorySnapshot::setAllocator(hkMemorySnapshot::Self *self, hkMemoryAllocator::Self *a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::swap  (binary VA: 0x1563d00)
// Original: hkMemorySnapshot::swap
// ----------------------------------------------------------------------------
int hkMemorySnapshot::swap(hkMemorySnapshot::Self *self, hkMemorySnapshot::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;

  *(uint32_t *)self = *(uint32_t *)a2;
  v2 = *((uint32_t *)a2 + 3);
  v3 = *((uint32_t *)a2 + 2);
  v4 = *((uint32_t *)a2 + 1);
  *(uint32_t *)a2 = 0;
  *((uint32_t *)self + 1) = v4;
  *((uint32_t *)self + 2) = v3;
  *((uint32_t *)self + 3) = v2;
  v5 = *((uint32_t *)a2 + 6);
  v6 = *((uint32_t *)a2 + 5);
  v7 = *((uint32_t *)a2 + 4);
  *((uint32_t *)a2 + 1) = 0;
  *((uint32_t *)a2 + 2) = 0;
  *((uint32_t *)a2 + 3) = 0x80000000;
  *((uint32_t *)self + 4) = v7;
  *((uint32_t *)self + 5) = v6;
  *((uint32_t *)self + 6) = v5;
  *((uint32_t *)a2 + 4) = 0;
  *((uint32_t *)a2 + 5) = 0;
  *((uint32_t *)a2 + 6) = 0x80000000;
  hkStackTracer::CallTree::swap((hkMemorySnapshot::Self *)((char *)self + 48), (hkMemorySnapshot::Self *)((char *)a2 + 48));
  return (int)(uintptr_t)(hkString::memCpy((hkMemorySnapshot::Self *)((char *)self + 28), (char *)a2 + 28, 0x14u, v9));
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::clear  (binary VA: 0x1563db0)
// Original: hkMemorySnapshot::clear
// ----------------------------------------------------------------------------
int hkMemorySnapshot::clear(hkMemorySnapshot::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int result;

  v1 = *((uint32_t *)self + 3);
  v2 = *(uint32_t *)self;
  *((uint32_t *)self + 2) = 0;
  if ( v1 >= 0 )
  {
    G4_VCALL<void>(v2, 20, *((uint32_t *)self + 1), 20 * v1);
    v2 = *(uint32_t *)self;
  }
  v3 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 3) = 0x80000000;
  if ( v3 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = (uint32_t *)(*((uint32_t *)self + 4) + 44 * v4);
      v6 = v5[10];
      v5[9] = 0;
      if ( v6 >= 0 )
        G4_VCALL<void>(v2, 20, v5[8], 4 * v6);
      v5[8] = 0;
      v5[10] = 0x80000000;
      ++v4;
      v2 = *(uint32_t *)self;
    }
    while ( *((uint32_t *)self + 5) > v4 );
  }
  result = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( result >= 0 )
    result = G4_VCALL<int>(v2, 20, *((uint32_t *)self + 4), 44 * (result & 0x3FFFFFFF));
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::Destroy  (binary VA: 0x1563e90)
// Original: hkMemorySnapshot::~hkMemorySnapshot
// ----------------------------------------------------------------------------
void hkMemorySnapshot::Destroy(hkMemorySnapshot::Self *self)
{
  hkMemorySnapshot::clear(self);
  hkStackTracer::CallTree::Destroy((hkMemorySnapshot::Self *)((char *)self + 48));
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::addProvider  (binary VA: 0x1563ec0)
// Original: hkMemorySnapshot::addProvider
// ----------------------------------------------------------------------------
int hkMemorySnapshot::addProvider(hkMemorySnapshot::Self *self, char *a2, int a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v3 = *((uint32_t *)self + 5);
  v4 = v3;
  if ( v3 == (*((uint32_t *)self + 6) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)self, (hkMemorySnapshot::Self *)((char *)self + 16), 44, v10);
    v4 = *((uint32_t *)self + 5);
  }
  v5 = (uint32_t *)(*((uint32_t *)self + 4) + 44 * v4);
  v5[8] = 0;
  v5[9] = 0;
  v5[10] = 0x80000000;
  v6 = *((uint32_t *)self + 5);
  v7 = *((uint32_t *)self + 4) + 44 * v6;
  *((uint32_t *)self + 5) = v6 + 1;
  hkString::strNcpy((hkString::Self *)v7, a2, 0x1Fu, v10);
  *(uint8_t *)(v7 + 31) = 0;
  if ( a3 != -1 )
  {
    v8 = *(uint32_t *)(v7 + 36);
    if ( v8 == (*(uint32_t *)(v7 + 40) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)self, (hkMemoryAllocator::Self *)(v7 + 32), 4, v11);
      v8 = *(uint32_t *)(v7 + 36);
    }
    *(uint32_t *)(*(uint32_t *)(v7 + 32) + 4 * v8) = a3;
    ++*(uint32_t *)(v7 + 36);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::addParentProvider  (binary VA: 0x1563fb0)
// Original: hkMemorySnapshot::addParentProvider
// ----------------------------------------------------------------------------
int hkMemorySnapshot::addParentProvider(hkMemorySnapshot::Self *self, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  int result;
  int v6;

  v3 = (uint32_t *)(*((uint32_t *)self + 4) + 44 * a2);
  v4 = v3[9];
  if ( v4 == (v3[10] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)self, (hkMemoryAllocator::Self *)(v3 + 8), 4, v6);
    v4 = v3[9];
  }
  result = v3[8];
  *(uint32_t *)(result + 4 * v4) = a3;
  ++v3[9];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::addItem  (binary VA: 0x1564020)
// Original: hkMemorySnapshot::addItem
// ----------------------------------------------------------------------------
int hkMemorySnapshot::addItem(int a1, int a2, char a3, int a4, int a5)
{
  int result;
  int v6;
  int v7;
  int v8;
  int v9;

  result = *(uint32_t *)(a1 + 8);
  v6 = result;
  if ( result == (*(uint32_t *)(a1 + 12) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)a1, (hkMemoryAllocator::Self *)(a1 + 4), 20, result);
    v6 = *(uint32_t *)(a1 + 8);
    result = v9;
  }
  v7 = *(uint32_t *)(a1 + 4);
  *(uint32_t *)(a1 + 8) = v6 + 1;
  v8 = v7 + 20 * v6;
  *(uint32_t *)v8 = a4;
  *(uint32_t *)(v8 + 4) = a5;
  *(uint32_t *)(v8 + 8) = a2;
  *(uint32_t *)(v8 + 12) = -1;
  *(uint8_t *)(v8 + 16) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::setCallStack  (binary VA: 0x15640b0)
// Original: hkMemorySnapshot::setCallStack
// ----------------------------------------------------------------------------
int hkMemorySnapshot::setCallStack(hkMemorySnapshot::Self *self, int a2, unsigned int *a3, int a4)
{
  int v4;
  int result;

  v4 = *((uint32_t *)self + 1) + 20 * a2;
  result = hkStackTracer::CallTree::insertCallStack((hkMemorySnapshot::Self *)((char *)self + 48), a3, a4);
  *(uint32_t *)(v4 + 12) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::setRouterWiring  (binary VA: 0x1564100)
// Original: hkMemorySnapshot::setRouterWiring
// ----------------------------------------------------------------------------
hkMemorySnapshot::Self * hkMemorySnapshot::setRouterWiring(hkMemorySnapshot::Self *self, int a2, int a3, int a4, int a5, int a6)
{
  *((uint32_t *)self + 7) = a2;
  *((uint32_t *)self + 8) = a3;
  *((uint32_t *)self + 9) = a4;
  *((uint32_t *)self + 10) = a5;
  *((uint32_t *)self + 11) = a6;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::allocationDiff  (binary VA: 0x1564130)
// Original: hkMemorySnapshot::allocationDiff
// ----------------------------------------------------------------------------
int hkMemorySnapshot::allocationDiff(int a1, int a2, int a3, hkMemoryAllocator::Self *a4)
{
  int result;
  hkMemoryAllocator::Self *v5;
  uint32_t *v6;
  unsigned int v7;
  int v8;
  uint32_t *v9;
  int v10;
  hkMemoryAllocator::Self *v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  unsigned int v19;
  uint32_t *v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  uint32_t *v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;

  result = a3;
  v5 = a4;
  *(uint32_t *)(a3 + 4) = 0;
  *((uint32_t *)a4 + 1) = 0;
  v6 = *(uint32_t **)(a1 + 4);
  v24 = &v6[5 * *(uint32_t *)(a1 + 8)];
  v7 = *(uint32_t *)(a2 + 4);
  v22 = v7 + 20 * *(uint32_t *)(a2 + 8);
LABEL_2:
  if ( v7 < v22 )
  {
    while ( v6 < v24 )
    {
      if ( *v6 == *(uint32_t *)v7 )
      {
        if ( v6[1] == *(uint32_t *)(v7 + 4) && v6[2] == *(uint32_t *)(v7 + 8) && *(uint8_t *)(v7 + 16) == *((uint8_t *)v6 + 16) )
        {
          v6 += 5;
          v7 += 20;
        }
        else
        {
          v15 = *(uint32_t *)(result + 4);
          if ( v15 == (*(uint32_t *)(result + 8) & 0x3FFFFFFF) )
          {
            v28 = result;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)result,
              20,
              v21);
            result = v28;
            v15 = *(uint32_t *)(v28 + 4);
          }
          v16 = (uint32_t *)(*(uint32_t *)result + 20 * v15);
          *v16 = *v6;
          v16[1] = v6[1];
          v16[2] = v6[2];
          v16[3] = v6[3];
          v16[4] = v6[4];
          ++*(uint32_t *)(result + 4);
          v17 = *((uint32_t *)a4 + 1);
          if ( v17 == (*((uint32_t *)a4 + 2) & 0x3FFFFFFF) )
          {
            v29 = result;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a4, 20, v21);
            v17 = *((uint32_t *)a4 + 1);
            result = v29;
          }
          v6 += 5;
          v7 += 20;
          v18 = (uint32_t *)(*(uint32_t *)a4 + 20 * v17);
          *v18 = *(uint32_t *)(v7 - 20);
          v18[1] = *(uint32_t *)(v7 - 16);
          v18[2] = *(uint32_t *)(v7 - 12);
          v18[3] = *(uint32_t *)(v7 - 8);
          v18[4] = *(uint32_t *)(v7 - 4);
          ++*((uint32_t *)a4 + 1);
        }
        goto LABEL_2;
      }
      if ( *v6 >= *(uint32_t *)v7 )
      {
        v13 = *((uint32_t *)a4 + 1);
        if ( v13 == (*((uint32_t *)a4 + 2) & 0x3FFFFFFF) )
        {
          v26 = result;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a4, 20, v21);
          v13 = *((uint32_t *)a4 + 1);
          result = v26;
        }
        v7 += 20;
        v14 = (uint32_t *)(*(uint32_t *)a4 + 20 * v13);
        *v14 = *(uint32_t *)(v7 - 20);
        v14[1] = *(uint32_t *)(v7 - 16);
        v14[2] = *(uint32_t *)(v7 - 12);
        v14[3] = *(uint32_t *)(v7 - 8);
        v14[4] = *(uint32_t *)(v7 - 4);
        ++*((uint32_t *)a4 + 1);
        goto LABEL_2;
      }
      v8 = *(uint32_t *)(result + 4);
      if ( v8 == (*(uint32_t *)(result + 8) & 0x3FFFFFFF) )
      {
        v27 = result;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)result,
          20,
          v21);
        result = v27;
        v8 = *(uint32_t *)(v27 + 4);
      }
      v6 += 5;
      v9 = (uint32_t *)(*(uint32_t *)result + 20 * v8);
      *v9 = *(v6 - 5);
      v9[1] = *(v6 - 4);
      v9[2] = *(v6 - 3);
      v9[3] = *(v6 - 2);
      v9[4] = *(v6 - 1);
      ++*(uint32_t *)(result + 4);
      if ( v7 >= v22 )
        break;
    }
  }
  if ( v24 > v6 )
  {
    v25 = v7;
    v10 = *(uint32_t *)(result + 4);
    v11 = (hkMemoryAllocator::Self *)result;
    do
    {
      if ( (*((uint32_t *)v11 + 2) & 0x3FFFFFFF) == v10 )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v11, 20, v21);
        v10 = *((uint32_t *)v11 + 1);
      }
      v6 += 5;
      v12 = (uint32_t *)(*(uint32_t *)v11 + 20 * v10);
      *v12 = *(v6 - 5);
      v12[1] = *(v6 - 4);
      v12[2] = *(v6 - 3);
      v12[3] = *(v6 - 2);
      v12[4] = *(v6 - 1);
      result = *((uint32_t *)v11 + 1);
      v10 = result + 1;
      *((uint32_t *)v11 + 1) = result + 1;
    }
    while ( v6 < v24 );
    v7 = v25;
    v5 = a4;
  }
  if ( v22 > v7 )
  {
    result = *((uint32_t *)v5 + 1);
    v19 = v22;
    do
    {
      if ( result == (*((uint32_t *)v5 + 2) & 0x3FFFFFFF) )
      {
        v23 = v19;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v5, 20, v21);
        result = *((uint32_t *)v5 + 1);
        v19 = v23;
      }
      v7 += 20;
      v20 = (uint32_t *)(*(uint32_t *)v5 + 20 * result);
      *v20 = *(uint32_t *)(v7 - 20);
      v20[1] = *(uint32_t *)(v7 - 16);
      v20[2] = *(uint32_t *)(v7 - 12);
      v20[3] = *(uint32_t *)(v7 - 8);
      v20[4] = *(uint32_t *)(v7 - 4);
      result = *((uint32_t *)v5 + 1) + 1;
      *((uint32_t *)v5 + 1) = result;
    }
    while ( v7 < v19 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::dumpAllocation  (binary VA: 0x15644d0)
// Original: hkMemorySnapshot::dumpAllocation
// ----------------------------------------------------------------------------
void hkMemorySnapshot::dumpAllocation(int a1, int a2, hkOstream::Self *a3)
{
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v10;
  const char *v11;
  int v12;
  int v13;
  int v14;
  char *v15;
  hkString::Self *v16;

  hkOstream::opShl((int)(uintptr_t)(a3), (hkString::Self *)"Alloc: ");
  v3 = *(char **)(a2 + 4);
  v4 = hkOstream::opShl((int)(uintptr_t)(a3), *(char **)a2);
  v5 = hkOstream::opShl(v4, (hkString::Self *)" Size: ");
  v6 = hkOstream::opShl(v5, v3);
  hkOstream::opShl(v6, (hkString::Self *)&a0[1]);
  v15 = *(char **)(a2 + 8);
  v7 = hkOstream::opShl((int)(uintptr_t)(a3), *(char **)a2);
  v8 = hkOstream::opShl(v7, (hkString::Self *)" Provider: ");
  v9 = hkOstream::opShl(v8, v15);
  hkOstream::opShl(v9, (hkString::Self *)&a0[1]);
  v10 = *(uint8_t *)(a2 + 16);
  v11 = "overhead";
  if ( v10 != 0 )
  {
    v11 = "used";
    if ( v10 != 1 )
      v11 = "unused";
  }
  v16 = (hkString::Self *)v11;
  v12 = hkOstream::opShl((int)(uintptr_t)(a3), *(char **)a2);
  v13 = hkOstream::opShl(v12, (hkString::Self *)" Status: ");
  v14 = hkOstream::opShl(v13, v16);
  hkOstream::opShl(v14, (hkString::Self *)&a0[1]);
  hkStackTracer::CallTree::dumpTrace((hkStackTracer::CallTree::Self *)(a1 + 48), *(uint32_t *)(a2 + 12), a3);
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshot::sort  (binary VA: 0x15647c0)
// Original: hkMemorySnapshot::sort
// ----------------------------------------------------------------------------
int hkMemorySnapshot::sort(hkMemorySnapshot::Self *self)
{
  int result;
  int v2;
  int i;
  int v4;
  unsigned int *v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int k;
  int v12;
  int v13;
  int v14;
  unsigned int *v15;
  unsigned int v16;
  int m;
  int v18;
  int n;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int j;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  char v37;
  int v38;
  int v39;

  result = *((uint32_t *)self + 2);
  if ( result <= 1 )
    return result;
  v38 = 0;
  v39 = result - 1;
  v2 = *((uint32_t *)self + 1);
  for ( i = 0; ; i = result )
  {
    v4 = v39;
    v5 = (unsigned int *)(v2 + 20 * ((i + v39) >> 1));
    v6 = *v5;
    v27 = v5[1];
    v7 = v2 + 20 * i;
    v8 = i + 1;
    v36 = i + 1;
    for ( j = i + 1; ; v8 = j )
    {
      v30 = v8 - 1;
      if ( *(uint32_t *)v7 >= v6 && (*(uint32_t *)v7 != v6 || *(uint32_t *)(v7 + 4) <= v27) )
      {
        for ( k = v2 + 20 * v4; ; k -= 20 )
        {
          while ( *(uint32_t *)k > v6 )
          {
            --v4;
            k -= 20;
          }
          if ( *(uint32_t *)k != v6 || *(uint32_t *)(k + 4) >= v27 )
            break;
          --v4;
        }
        v22 = *(uint32_t *)k;
        if ( v30 > v4 )
          break;
        if ( v30 != v4 )
        {
          v33 = *(uint32_t *)(k + 12);
          *(uint32_t *)k = *(uint32_t *)v7;
          v9 = *(uint32_t *)(k + 4);
          *(uint32_t *)(k + 4) = *(uint32_t *)(v7 + 4);
          v29 = v9;
          v10 = *(uint32_t *)(k + 8);
          *(uint32_t *)(k + 8) = *(uint32_t *)(v7 + 8);
          v31 = v10;
          LOBYTE(v10) = *(uint8_t *)(k + 16);
          *(uint32_t *)(k + 12) = *(uint32_t *)(v7 + 12);
          *(uint8_t *)(k + 16) = *(uint8_t *)(v7 + 16);
          *(uint32_t *)v7 = v22;
          *(uint32_t *)(v7 + 4) = v29;
          *(uint32_t *)(v7 + 8) = v31;
          *(uint32_t *)(v7 + 12) = v33;
          *(uint8_t *)(v7 + 16) = v10;
        }
        --v4;
        v30 = j;
        if ( v4 < j )
          break;
      }
      ++j;
      v7 += 20;
    }
    v34 = v4;
    if ( v38 < v4 )
      break;
    result = v30;
    if ( v39 <= v30 )
      return result;
LABEL_17:
    v38 = result;
  }
  v26 = v2;
  v12 = v36;
  v13 = v2;
  while ( 2 )
  {
    v14 = v34;
    v28 = v12;
    v15 = (unsigned int *)(v13 + 20 * ((v38 + v34) >> 1));
    v16 = *v15;
    v32 = v15[1];
    for ( m = v13 + 20 * v38; ; m += 20 )
    {
      while ( 1 )
      {
        if ( *(uint32_t *)m < v16 )
          goto LABEL_37;
        if ( *(uint32_t *)m != v16 || *(uint32_t *)(m + 4) <= v32 )
          break;
        ++v28;
        m += 20;
        v12 = v28;
      }
      v18 = v12 - 1;
      v23 = v12 - 1;
      for ( n = v26 + 20 * v14; ; n -= 20 )
      {
        while ( 1 )
        {
          v20 = *(uint32_t *)n;
          if ( *(uint32_t *)n <= v16 )
            break;
          --v14;
          n -= 20;
        }
        if ( *(uint32_t *)n != v16 || *(uint32_t *)(n + 4) >= v32 )
          break;
        --v14;
      }
      if ( v18 > v14 )
        break;
      if ( v23 != v14 )
      {
        v24 = *(uint32_t *)(n + 8);
        v35 = *(uint32_t *)(n + 12);
        v21 = *(uint32_t *)(n + 4);
        v37 = *(uint8_t *)(n + 16);
        *(uint32_t *)n = *(uint32_t *)m;
        *(uint32_t *)(n + 4) = *(uint32_t *)(m + 4);
        *(uint32_t *)(n + 8) = *(uint32_t *)(m + 8);
        *(uint32_t *)(n + 12) = *(uint32_t *)(m + 12);
        *(uint8_t *)(n + 16) = *(uint8_t *)(m + 16);
        *(uint32_t *)(m + 4) = v21;
        *(uint32_t *)m = v20;
        *(uint32_t *)(m + 8) = v24;
        *(uint32_t *)(m + 12) = v35;
        *(uint8_t *)(m + 16) = v37;
      }
      --v14;
      v18 = v28;
      if ( v14 < v28 )
        break;
LABEL_37:
      v12 = ++v28;
    }
    if ( v14 > v38 )
    {
      hkAlgorithm::quickSortRecursive_f0995c(
        v26,
        v38,
        v14,
        sub_1563930);
      if ( v18 < v34 )
      {
LABEL_27:
        v38 = v18;
        v12 = v18 + 1;
        v13 = v26;
        continue;
      }
    }
    else if ( v18 < v34 )
    {
      goto LABEL_27;
    }
    break;
  }
  result = v30;
  v2 = v26;
  if ( v39 > v30 )
    goto LABEL_17;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::getMemoryStatistics  (binary VA: 0x1564b00)
// Original: hkLifoAllocator::getMemoryStatistics
// ----------------------------------------------------------------------------
void hkLifoAllocator::getMemoryStatistics()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::getAllocatedSize  (binary VA: 0x1564b10)
// Original: hkLifoAllocator::getAllocatedSize
// ----------------------------------------------------------------------------
int hkLifoAllocator::getAllocatedSize(hkLifoAllocator::Self *self, const void *a2, int a3)
{
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::bufRealloc  (binary VA: 0x1564b20)
// Original: hkLifoAllocator::bufRealloc
// ----------------------------------------------------------------------------
char * hkLifoAllocator::bufRealloc(hkLifoAllocator::Self *self, char *a2, int a3, int *a4)
{
  signed int v4;
  unsigned int v5;
  hkMemUtil::Self *v6;
  size_t v7;
  int v9;

  v4 = (a3 + 15) & 0xFFFFFFF0;
  v5 = (*a4 + 15) & 0xFFFFFFF0;
  *a4 = v5;
  if ( *((char **)self + 3) == &a2[v4] && *((uint32_t *)self + 4) >= (unsigned int)(uintptr_t)(&a2[v5]) )
  {
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&a2[v5]);
    return a2;
  }
  else
  {
    v6 = (hkMemUtil::Self *)G4_VCALL<int>(self, 8, v5);
    v9 = (int)(uintptr_t)(v6);
    v7 = *a4;
    if ( v4 <= *a4 )
      v7 = (a3 + 15) & 0xFFFFFFF0;
    hkMemUtil::memCpy(v6, a2, v7);
    G4_VCALL<void>(self, 12, a2, v4);
    return (char *)v9;
  }
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::Destroy  (binary VA: 0x1564bd0)
// Original: hkLifoAllocator::~hkLifoAllocator
// ----------------------------------------------------------------------------
void hkLifoAllocator::Destroy(hkLifoAllocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097368);
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::Destroy_ea1564c00  (binary VA: 0x1564c00)
// Original: hkLifoAllocator::~hkLifoAllocator
// ----------------------------------------------------------------------------
void hkLifoAllocator::Destroy_ea1564c00(hkLifoAllocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097368);
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::Construct  (binary VA: 0x1564c30)
// Original: hkLifoAllocator::hkLifoAllocator
// ----------------------------------------------------------------------------
void hkLifoAllocator::Construct(hkLifoAllocator::Self *self, int a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097368);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = a2;
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::init  (binary VA: 0x1564c60)
// Original: hkLifoAllocator::init
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * hkLifoAllocator::init(hkLifoAllocator::Self *self, hkMemoryAllocator::Self *a2, hkMemoryAllocator::Self *a3, hkMemoryAllocator::Self *a4)
{
  uint32_t *v4;

  v4 = (uint32_t *)G4_VCALL<int>(a4, 8, 28);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0x80000000;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0x80000000;
  v4[6] = 0;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v4);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(a4);
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::quit  (binary VA: 0x1564cf0)
// Original: hkLifoAllocator::quit
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * hkLifoAllocator::quit(hkLifoAllocator::Self *self, hkMemoryAllocator::Self **a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  hkMemoryAllocator::Self *result;

  if ( *((uint32_t *)self + 3) != 0 )
    (*(void (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 9) + 12))(
      *((uint32_t *)self + 9),
      **(uint32_t **)(*((uint32_t *)self + 1) + 12),
      *((uint32_t *)self + 2));
  v2 = *((uint32_t *)self + 6);
  if ( v2 != 0 )
    (*(void (**)(uint32_t, int, uint32_t))(**((uint32_t **)self + 9) + 12))(
      *((uint32_t *)self + 9),
      v2,
      *((uint32_t *)self + 2));
  v3 = *((uint32_t **)self + 1);
  v4 = *((uint32_t *)self + 9);
  v5 = v3[5];
  v3[4] = 0;
  if ( v5 >= 0 )
    G4_VCALL<void>(v4, 20, v3[3], 4 * v5);
  v3[3] = 0;
  v3[5] = 0x80000000;
  v6 = *((uint32_t **)self + 1);
  v7 = *((uint32_t *)self + 9);
  v8 = v6[2];
  v6[1] = 0;
  if ( v8 >= 0 )
    G4_VCALL<void>(v7, 20, *v6, 12 * v8);
  *v6 = 0;
  v6[2] = 0x80000000;
  result = (hkMemoryAllocator::Self *)(*(int (**)(uint32_t, uint32_t, int))(**((uint32_t **)self + 9) + 12))(
                                  *((uint32_t *)self + 9),
                                  *((uint32_t *)self + 1),
                                  28);
  *((uint32_t *)self + 1) = 0;
  if ( a2 != nullptr )
  {
    *a2 = *((hkMemoryAllocator::Self **)self + 7);
    a2[1] = *((hkMemoryAllocator::Self **)self + 8);
    result = *((hkMemoryAllocator::Self **)self + 9);
    a2[2] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::isEmpty  (binary VA: 0x1564e00)
// Original: hkLifoAllocator::isEmpty
// ----------------------------------------------------------------------------
bool hkLifoAllocator::isEmpty(hkLifoAllocator::Self *self)
{
  int v1;
  bool result;

  v1 = *((uint32_t *)self + 1);
  result = false;
  if ( *(uint32_t *)(v1 + 4) == 0 )
    return *(uint32_t *)(v1 + 16) <= 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::numExternalAllocations  (binary VA: 0x1564e20)
// Original: hkLifoAllocator::numExternalAllocations
// ----------------------------------------------------------------------------
int hkLifoAllocator::numExternalAllocations(hkLifoAllocator::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 1) + 24);
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::allocateFromNewSlab  (binary VA: 0x1564e30)
// Original: hkLifoAllocator::allocateFromNewSlab
// ----------------------------------------------------------------------------
int hkLifoAllocator::allocateFromNewSlab(hkLifoAllocator::Self *self, int a2)
{
  int v2;
  uint32_t *v3;
  hkArrayUtil::Self *v4;
  int v5;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;

  if ( *((uint32_t *)self + 2) < a2 )
  {
    ++*(uint32_t *)(*((uint32_t *)self + 1) + 24);
    return (*(int (**)(uint32_t, int))(**((uint32_t **)self + 8) + 8))(*((uint32_t *)self + 8), a2);
  }
  else
  {
    v2 = *((uint32_t *)self + 6);
    if ( v2 != 0 )
    {
      *((uint32_t *)self + 6) = 0;
    }
    else
    {
      v10 = *((uint32_t *)self + 1);
      if ( *(int *)(v10 + 16) <= 1 )
      {
        v2 = (*(int (**)(uint32_t, uint32_t))(**((uint32_t **)self + 9) + 8))(
               *((uint32_t *)self + 9),
               *((uint32_t *)self + 2));
      }
      else
      {
        ++*(uint32_t *)(v10 + 24);
        v2 = (*(int (**)(uint32_t, uint32_t))(**((uint32_t **)self + 7) + 8))(
               *((uint32_t *)self + 7),
               *((uint32_t *)self + 2));
      }
    }
    v3 = *((uint32_t **)self + 1);
    if ( v3[4] != 0 )
    {
      v7 = v3[1];
      if ( v7 == (v3[2] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(*((hkArrayUtil::Self **)self + 9), (hkMemoryAllocator::Self *)v3, 12, v11);
        v7 = v3[1];
      }
      v8 = *v3;
      v3[1] = v7 + 1;
      v9 = (uint32_t *)(v8 + 12 * v7);
      v9[1] = v2;
      *v9 = *((uint32_t *)self + 3);
      v9[2] = *(uint32_t *)(*((uint32_t *)self + 1) + 16) - 1;
      *((uint32_t *)self + 5) = v2;
      v3 = *((uint32_t **)self + 1);
    }
    v4 = *((hkArrayUtil::Self **)self + 9);
    *((uint32_t *)self + 4) = v2 + *((uint32_t *)self + 2);
    *((uint32_t *)self + 3) = v2 + a2;
    v5 = v3[4];
    if ( v5 == (v3[5] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(v4, (hkMemoryAllocator::Self *)(v3 + 3), 4, v11);
      v5 = v3[4];
    }
    *(uint32_t *)(v3[3] + 4 * v5) = v2;
    ++v3[4];
    return v2;
  }
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::bufAlloc  (binary VA: 0x1564fa0)
// Original: hkLifoAllocator::bufAlloc
// ----------------------------------------------------------------------------
int hkLifoAllocator::bufAlloc(hkLifoAllocator::Self *self, int *a2)
{
  signed int v2;
  int v3;
  bool v4; // cc
  int result;

  v2 = (*a2 + 15) & 0xFFFFFFF0;
  *a2 = v2;
  v3 = v2;
  v4 = v2 <= *((uint32_t *)self + 2);
  result = *((uint32_t *)self + 3);
  if ( !v4 || (unsigned int)(v3 + result) > *((uint32_t *)self + 4) )
    return hkLifoAllocator::allocateFromNewSlab(self, v3);
  *((uint32_t *)self + 3) = v3 + result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::blockAlloc  (binary VA: 0x1565000)
// Original: hkLifoAllocator::blockAlloc
// ----------------------------------------------------------------------------
int hkLifoAllocator::blockAlloc(hkLifoAllocator::Self *self, int a2)
{
  signed int v2;
  int result;

  v2 = (a2 + 15) & 0xFFFFFFF0;
  result = *((uint32_t *)self + 3);
  if ( v2 > *((uint32_t *)self + 2) || (unsigned int)(v2 + result) > *((uint32_t *)self + 4) )
    return hkLifoAllocator::allocateFromNewSlab(self, (a2 + 15) & 0xFFFFFFF0);
  *((uint32_t *)self + 3) = v2 + result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::popNonLifoFrees  (binary VA: 0x1565060)
// Original: hkLifoAllocator::popNonLifoFrees
// ----------------------------------------------------------------------------
uint32_t * hkLifoAllocator::popNonLifoFrees(hkLifoAllocator::Self *self)
{
  hkLifoAllocator::Self *v1;
  uint32_t *result;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int i;
  int j;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v1 = self;
  result = *((uint32_t **)self + 1);
  v3 = *((uint32_t *)self + 3);
  v4 = result[1] - 1;
  if ( v4 < 0 )
    goto LABEL_12;
  v5 = result[1] - 1;
  v17 = v5;
  v6 = 12 * v4;
  v7 = (int *)(*result + 12 * v4);
  if ( v3 != v7[1] )
    goto LABEL_12;
  v8 = v6 - 12;
  for ( i = result[1] - 1; ; i = result[1] - 1 )
  {
    --v5;
    v3 = *v7;
    result[1] = i;
    if ( v5 == -1 )
      break;
    result = *((uint32_t **)self + 1);
    v7 = (int *)(*result + v8);
    v8 -= 12;
    if ( v7[1] != v3 )
    {
      v1 = self;
      goto LABEL_12;
    }
  }
  v1 = self;
  result = *((uint32_t **)self + 1);
  for ( j = result[4]; j > 1; j = result[4] )
  {
    v11 = j + 0x3FFFFFFF;
    v12 = *(uint32_t *)(result[3] + 4 * v11);
    if ( v12 != v3 && (unsigned int)(v3 - v12) <= *((uint32_t *)v1 + 2) )
      break;
    v13 = *((uint32_t *)v1 + 6);
    if ( v13 != 0 )
    {
      (*(void (**)(uint32_t, int, uint32_t, int))(**((uint32_t **)v1 + 7) + 12))(
        *((uint32_t *)v1 + 7),
        v13,
        *((uint32_t *)v1 + 2),
        v17);
      --*(uint32_t *)(*((uint32_t *)v1 + 1) + 24);
      result = *((uint32_t **)v1 + 1);
      v11 = result[4] + 0x3FFFFFFF;
    }
    *((uint32_t *)v1 + 6) = *(uint32_t *)(result[3] + 4 * v11);
    --result[4];
    result = *((uint32_t **)v1 + 1);
LABEL_12:
    ;
  }
  *((uint32_t *)v1 + 3) = v3;
  v14 = result[4];
  if ( v14 != 0 )
    v14 = *((uint32_t *)v1 + 2) + *(uint32_t *)(result[3] + 4 * v14 - 4);
  *((uint32_t *)v1 + 4) = v14;
  v15 = result[1];
  v16 = 0;
  if ( v15 != 0 )
    v16 = *(uint32_t *)(*result + 12 * v15 - 8);
  *((uint32_t *)v1 + 5) = v16;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::insertNonLifoFree  (binary VA: 0x15651a0)
// Original: hkLifoAllocator::insertNonLifoFree
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkLifoAllocator::insertNonLifoFree(hkLifoAllocator::Self *self, char *a2, int a3)
{
  int v3;
  int v4;
  char *v5;
  int v6;
  int *v7;
  char **v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char **v14;
  int v15;
  uint32_t *v16;
  int v17;
  int v19;
  typedef int _g4_t_v20;
  typedef hkMemoryAllocator::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef char _g4_t_v27[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v23)) > _g4_s3 ? (12u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v24)) > _g4_s4 ? (16u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v25)) > _g4_s5 ? (20u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v26)) > _g4_s6 ? (24u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v27)) > _g4_s7 ? (28u + sizeof(_g4_t_v27)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);

  v25 = *((int **)self + 1);
  v3 = v25[4] - 1;
  if ( v3 < 0 )
  {
LABEL_6:
    v3 = -1;
    goto LABEL_7;
  }
  v4 = v25[3];
  v5 = *((char **)self + 2);
  if ( &a2[-*(uint32_t *)(v4 + 4 * v3)] >= v5 )
  {
    while ( --v3 != -1 )
    {
      if ( &a2[-*(uint32_t *)(v4 + 4 * v3)] < v5 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  v26 = &a2[a3];
  v22 = v25[1];
  v6 = v22 - 1;
  if ( v22 - 1 < 0 )
  {
    v12 = v22 + 1;
    v21 = *((hkMemoryAllocator::Self **)self + 9);
    v13 = v25[2] & 0x3FFFFFFF;
    if ( v22 + 1 > v13 )
    {
      v11 = 12;
      v24 = 0;
LABEL_23:
      v19 = 2 * v13;
      v20 = v11;
      if ( v19 < v12 )
        v19 = v12;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v27, v21, v25, v19, 12);
      v11 = v20;
      v23 = *v25;
    }
    else
    {
      v24 = 0;
      v23 = *v25;
      v11 = 12;
    }
  }
  else
  {
    v23 = *v25;
    v7 = (int *)(*v25 + 12 * v6 + 8);
    do
    {
      v8 = (char **)(v7 - 2);
      if ( *v7 == v3 )
      {
        if ( (char *)*(v7 - 1) == a2 )
        {
          v8[1] = v26;
          goto LABEL_18;
        }
        v9 = *(v7 - 2);
        if ( (char *)v9 == v26 )
        {
          *v8 = a2;
          goto LABEL_18;
        }
        if ( v9 < (unsigned int)(uintptr_t)(a2) )
        {
LABEL_15:
          v10 = v6 + 1;
          v24 = 12 * v10;
          v11 = 12 * v10 + 12;
          goto LABEL_16;
        }
      }
      else if ( v3 > *v7 )
      {
        goto LABEL_15;
      }
      --v6;
      v7 -= 3;
    }
    while ( v6 != -1 );
    v11 = 12;
    v24 = 0;
    v10 = 0;
LABEL_16:
    v21 = *((hkMemoryAllocator::Self **)self + 9);
    v22 -= v10;
    v12 = v25[1] + 1;
    v13 = v25[2] & 0x3FFFFFFF;
    if ( v12 > v13 )
      goto LABEL_23;
  }
  hkMemUtil::memMove((hkMemUtil::Self *)(v11 + v23), (char *)(v23 + v24), 12 * v22);
  v14 = (char **)(*v25 + v24);
  v25[1] = v12;
  *v14 = a2;
  v14[1] = v26;
  v14[2] = (char *)v3;
LABEL_18:
  v15 = 0;
  v16 = *((uint32_t **)self + 1);
  v17 = v16[1];
  if ( v17 != 0 )
    v15 = *(uint32_t *)(*v16 + 12 * v17 - 8);
  *((uint32_t *)self + 5) = v15;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::slowBlockFree  (binary VA: 0x15653c0)
// Original: hkLifoAllocator::slowBlockFree
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkLifoAllocator::slowBlockFree(hkLifoAllocator::Self *self, char *a2, int a3)
{
  hkLifoAllocator::Self *result;
  unsigned int v4;

  result = self;
  if ( a2 != nullptr )
  {
    if ( *((uint32_t *)self + 2) < a3 )
    {
      --*(uint32_t *)(*((uint32_t *)self + 1) + 24);
      return (hkLifoAllocator::Self *)(*(int (**)(uint32_t, char *, int))(**((uint32_t **)self + 8) + 12))(
                                  *((uint32_t *)self + 8),
                                  a2,
                                  a3);
    }
    else
    {
      v4 = (a3 + 15) & 0xFFFFFFF0;
      if ( *((char **)self + 3) == &a2[v4] )
      {
        *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
        return (hkLifoAllocator::Self *)hkLifoAllocator::popNonLifoFrees(self);
      }
      else
      {
        return hkLifoAllocator::insertNonLifoFree(self, a2, v4);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::bufFree  (binary VA: 0x1565450)
// Original: hkLifoAllocator::bufFree
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkLifoAllocator::bufFree(hkLifoAllocator::Self *self, char *a2, int a3)
{
  hkLifoAllocator::Self *result;

  result = (hkLifoAllocator::Self *)((a3 + 15) & 0xFFFFFFF0);
  if ( a3 > *((uint32_t *)self + 2) || *((char **)self + 3) != &a2[(uint32_t)(uintptr_t)(result)] || a2 == *((char **)self + 5) )
    return hkLifoAllocator::slowBlockFree(self, a2, (a3 + 15) & 0xFFFFFFF0);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLifoAllocator::blockFree  (binary VA: 0x15654b0)
// Original: hkLifoAllocator::blockFree
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkLifoAllocator::blockFree(hkLifoAllocator::Self *self, char *a2, int a3)
{
  hkLifoAllocator::Self *result;

  result = (hkLifoAllocator::Self *)((a3 + 15) & 0xFFFFFFF0);
  if ( a3 > *((uint32_t *)self + 2) || *((char **)self + 3) != &a2[(uint32_t)(uintptr_t)(result)] || a2 == *((char **)self + 5) )
    return hkLifoAllocator::slowBlockFree(self, a2, (a3 + 15) & 0xFFFFFFF0);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkArrayTypeAttribute::staticClass  (binary VA: 0x15655e0)
// Original: hkArrayTypeAttribute::staticClass
// ----------------------------------------------------------------------------
void * hkArrayTypeAttribute::staticClass()
{
  return &hkArrayTypeAttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkDataObjectTypeAttribute::staticClass  (binary VA: 0x1565600)
// Original: hkDataObjectTypeAttribute::staticClass
// ----------------------------------------------------------------------------
void * hkDataObjectTypeAttribute::staticClass()
{
  return &hkDataObjectTypeAttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkDescriptionAttribute::staticClass  (binary VA: 0x1565620)
// Original: hkDescriptionAttribute::staticClass
// ----------------------------------------------------------------------------
void * hkDescriptionAttribute::staticClass()
{
  return &hkDescriptionAttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkDocumentationAttribute::staticClass  (binary VA: 0x1565640)
// Original: hkDocumentationAttribute::staticClass
// ----------------------------------------------------------------------------
void * hkDocumentationAttribute::staticClass()
{
  return &hkDocumentationAttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkGizmoAttribute::staticClass  (binary VA: 0x1565660)
// Original: hkGizmoAttribute::staticClass
// ----------------------------------------------------------------------------
void * hkGizmoAttribute::staticClass()
{
  return &hkGizmoAttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkLinkAttribute::staticClass  (binary VA: 0x1565680)
// Original: hkLinkAttribute::staticClass
// ----------------------------------------------------------------------------
void * hkLinkAttribute::staticClass()
{
  return &hkLinkAttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkModelerNodeTypeAttribute::staticClass  (binary VA: 0x15656a0)
// Original: hkModelerNodeTypeAttribute::staticClass
// ----------------------------------------------------------------------------
void * hkModelerNodeTypeAttribute::staticClass()
{
  return &hkModelerNodeTypeAttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkPostFinishAttribute::staticClass  (binary VA: 0x15656c0)
// Original: hkPostFinishAttribute::staticClass
// ----------------------------------------------------------------------------
void * hkPostFinishAttribute::staticClass()
{
  return &hkPostFinishAttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkRangeInt32Attribute::staticClass  (binary VA: 0x15656e0)
// Original: hkRangeInt32Attribute::staticClass
// ----------------------------------------------------------------------------
void * hkRangeInt32Attribute::staticClass()
{
  return &hkRangeInt32AttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkRangeRealAttribute::staticClass  (binary VA: 0x1565700)
// Original: hkRangeRealAttribute::staticClass
// ----------------------------------------------------------------------------
void * hkRangeRealAttribute::staticClass()
{
  return &hkRangeRealAttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkScriptableAttribute::staticClass  (binary VA: 0x1565720)
// Original: hkScriptableAttribute::staticClass
// ----------------------------------------------------------------------------
void * hkScriptableAttribute::staticClass()
{
  return &hkScriptableAttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkSemanticsAttribute::staticClass  (binary VA: 0x1565740)
// Original: hkSemanticsAttribute::staticClass
// ----------------------------------------------------------------------------
void * hkSemanticsAttribute::staticClass()
{
  return &hkSemanticsAttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkUiAttribute::staticClass  (binary VA: 0x1565760)
// Original: hkUiAttribute::staticClass
// ----------------------------------------------------------------------------
void * hkUiAttribute::staticClass()
{
  return &hkUiAttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkThread::Construct  (binary VA: 0x1566090)
// Original: hkThread::hkThread
// ----------------------------------------------------------------------------
void hkThread::Construct(hkThread::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 2;
  *((uint32_t *)self + 2) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkThread::joinThread  (binary VA: 0x15660b0)
// Original: hkThread::joinThread
// ----------------------------------------------------------------------------
pthread_t hkThread::joinThread(pthread_t *self)
{
  pthread_t result;

  result = *self;
  if ( *self != 0 )
  {
    result = pthread_join(result, nullptr);
    if ( result != 0 )
    {
      printf("%s:%d:%s\n", "Thread/Thread/Posix/hkPosixThread.cpp", 41, "joinThread");
      perror("pthread_join((pthread_t)m_thread, HK_NULL)");
      __builtin_debugtrap();
    }
    *self = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkThread::Destroy  (binary VA: 0x1566130)
// Original: hkThread::~hkThread
// ----------------------------------------------------------------------------
void hkThread::Destroy(pthread_t *self)
{
  hkThread::joinThread(self);
}

// ----------------------------------------------------------------------------
// Function: hkThread::startThread  (binary VA: 0x1566160)
// Original: hkThread::startThread
// ----------------------------------------------------------------------------
hkThread::Self * hkThread::startThread(hkThread::Self *self, void *(*a2)(void *), void *(*start_routine)(void *), char *arg, int a5)
{
  int v5;
  typedef pthread_t _g4_t_newthread[2];
  typedef pthread_attr_t _g4_t_attr;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_newthread)) > _g4_s0 ? (0u + sizeof(_g4_t_newthread)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_attr)) > _g4_s1 ? (8u + sizeof(_g4_t_attr)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_newthread &newthread = *reinterpret_cast<_g4_t_newthread *>(_g4_sf + 0u);
  _g4_t_attr &attr = *reinterpret_cast<_g4_t_attr *>(_g4_sf + 8u);

  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, 0);
  v5 = pthread_create(newthread, &attr, start_routine, arg);
  pthread_attr_destroy(&attr);
  if ( v5 != 0 )
  {
    perror("Thread Error\n");
    *(uint32_t *)self = 1;
  }
  else
  {
    pthread_setname_np(newthread[0], (const char *)(uintptr_t)a5);
    *(uint32_t *)a2 = newthread[0];
    *((uint32_t *)a2 + 1) = 1;
    *((uint32_t *)a2 + 2) = 0;
    *(uint32_t *)self = 0;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkThread::getStatus  (binary VA: 0x1566230)
// Original: hkThread::getStatus
// ----------------------------------------------------------------------------
int hkThread::getStatus(hkThread::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: hkThread::getChildThreadId  (binary VA: 0x1566240)
// Original: hkThread::getChildThreadId
// ----------------------------------------------------------------------------
int64_t hkThread::getChildThreadId(hkThread::Self *self)
{
  return *(unsigned int *)self;
}

// ----------------------------------------------------------------------------
// Function: hkThread::getHandle  (binary VA: 0x1566250)
// Original: hkThread::getHandle
// ----------------------------------------------------------------------------
int hkThread::getHandle(hkThread::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkThread::getMyThreadId  (binary VA: 0x1566260)
// Original: hkThread::getMyThreadId
// ----------------------------------------------------------------------------
int64_t hkThread::getMyThreadId()
{
  return (int)pthread_self();
}

// ----------------------------------------------------------------------------
// Function: hkMT19937RandomGenerator::Construct  (binary VA: 0x1566280)
// Original: hkMT19937RandomGenerator::hkMT19937RandomGenerator
// ----------------------------------------------------------------------------
void hkMT19937RandomGenerator::Construct(hkMT19937RandomGenerator::Self *self)
{
  *((uint32_t *)self + 1) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkMT19937RandomGenerator::Destroy  (binary VA: 0x1566290)
// Original: hkMT19937RandomGenerator::~hkMT19937RandomGenerator
// ----------------------------------------------------------------------------
void hkMT19937RandomGenerator::Destroy(hkMT19937RandomGenerator::Self *self)
{
  int v1;
  int address;

  v1 = *((uint32_t *)self + 1);
  if ( v1 != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v1,
      2496);
    *((uint32_t *)self + 1) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkMT19937RandomGenerator::initialize  (binary VA: 0x15662f0)
// Original: hkMT19937RandomGenerator::initialize
// ----------------------------------------------------------------------------
int hkMT19937RandomGenerator::initialize(hkMT19937RandomGenerator::Self *self, unsigned int a2)
{
  uint32_t *v2;
  int v3;
  int result;
  int v5;
  unsigned int v6;
  int address;

  v2 = *((uint32_t **)self + 1);
  if ( v2 == nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     2496);
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v2);
  }
  v3 = 0;
  *v2 = a2;
  for ( result = 1; result != 624; ++result )
  {
    v5 = *((uint32_t *)self + 1);
    v6 = *(uint32_t *)(v5 + v3);
    v3 += 4;
    *(uint32_t *)(v5 + 4 * result) = result + 1812433253 * (v6 ^ (v6 >> 30));
  }
  *(uint16_t *)self = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMT19937RandomGenerator::generateNumbers  (binary VA: 0x1566380)
// Original: hkMT19937RandomGenerator::generateNumbers
// ----------------------------------------------------------------------------
unsigned int * hkMT19937RandomGenerator::generateNumbers(hkMT19937RandomGenerator::Self *self)
{
  int i;
  unsigned int v2;
  unsigned int *result;
  int v4;
  unsigned int *v5;

  for ( i = 0; ; ++i )
  {
    v4 = *((uint32_t *)self + 1);
    v5 = (unsigned int *)(4 * i + v4);
    v2 = (*v5 & 0x80000000) + (*(uint32_t *)(v4 + 4 * ((i + 1) % 0x270u)) & 0x7FFFFFFF);
    result = v5;
    *v5 = *(uint32_t *)(v4 + 4 * ((i + 397) % 0x270u)) ^ (v2 >> 1);
    if ( (v2 & 1) != 0 )
    {
      result = (unsigned int *)(*((uint32_t *)self + 1) + 4 * i);
      *result ^= 0x9908B0DF;
    }
    if ( i == 623 )
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMT19937RandomGenerator::getRand  (binary VA: 0x1566440)
// Original: hkMT19937RandomGenerator::getRand
// ----------------------------------------------------------------------------
unsigned int hkMT19937RandomGenerator::getRand(hkMT19937RandomGenerator::Self *self)
{
  int v1;
  unsigned int v2;
  unsigned int v3;

  v1 = *(uint16_t *)self;
  if ( (uint16_t)v1 == 0 )
  {
    hkMT19937RandomGenerator::generateNumbers(self);
    v1 = *(uint16_t *)self;
  }
  v2 = *(uint32_t *)(*((uint32_t *)self + 1) + 4 * v1);
  v3 = v2 ^ (v2 >> 11) ^ ((v2 ^ (v2 >> 11)) << 7) & 0x9D2C5680;
  *(uint16_t *)self = (v1 + 1) % 0x270u;
  return v3 ^ (v3 << 15) & 0xEFC60000 ^ ((v3 ^ (v3 << 15) & 0xEFC60000) >> 18);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStream::init  (binary VA: 0x15664c0)
// Original: hkMonitorStream::init
// ----------------------------------------------------------------------------
int * hkMonitorStream::init()
{
  int address;
  int v1;
  int *result;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v1 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 48) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 48),
         20);
  *(uint32_t *)v1 = 0;
  *(uint32_t *)(v1 + 4) = 0;
  *(uint32_t *)(v1 + 8) = 0;
  *(uint32_t *)(v1 + 12) = 0;
  *(uint8_t *)(v1 + 16) = 0;
  result = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  *result = v1;
  *(uint32_t *)v1 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStream::clear  (binary VA: 0x1566540)
// Original: hkMonitorStream::clear
// ----------------------------------------------------------------------------
void hkMonitorStream::clear(hkMonitorStream::Self *self)
{
  int v1;
  int address;

  v1 = *(uint32_t *)self;
  if ( *(uint32_t *)self != 0 && *((uint8_t *)self + 16) != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 48) + 20))(
      *(uint32_t *)(*(uint32_t *)address + 48),
      v1,
      *((uint32_t *)self + 2) - v1);
  }
  *((uint8_t *)self + 16) = 0;
  *(__m128i *)self = g4_m128_from<__m128i>(0LL);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStream::quit  (binary VA: 0x15665b0)
// Original: hkMonitorStream::quit
// ----------------------------------------------------------------------------
int hkMonitorStream::quit()
{
  hkMonitorStream::Self **address;
  hkMonitorStream::Self *v1;
  hkMonitorStream::Self **v2;
  int v3;
  int result;

  address = (hkMonitorStream::Self **)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v1 = *address;
  v2 = address;
  hkMonitorStream::clear(*address);
  v3 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (*(int (**)(uint32_t, hkMonitorStream::Self *, int))(**(uint32_t **)(*(uint32_t *)v3 + 48) + 12))(
             *(uint32_t *)(*(uint32_t *)v3 + 48),
             v1,
             20);
  *v2 = nullptr;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStream::resize  (binary VA: 0x1566620)
// Original: hkMonitorStream::resize
// ----------------------------------------------------------------------------
void hkMonitorStream::resize(hkMonitorStream::Self *self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5[4];

  if ( *((uint32_t *)self + 2) - *(uint32_t *)self != a2 )
  {
    hkMonitorStream::clear(self);
    if ( a2 > 0 )
    {
      *((uint8_t *)self + 16) = 1;
      v2 = *(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v5[0] = a2;
      v3 = (*(int (**)(uint32_t, int *))(**(uint32_t **)(v2 + 48) + 16))(*(uint32_t *)(v2 + 48), v5);
      *(uint32_t *)self = v3;
      *((uint32_t *)self + 1) = v3;
      v4 = v5[0] + v3;
      *((uint32_t *)self + 2) = v4;
      *((uint32_t *)self + 3) = v4 - 32;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStream::setStaticBuffer  (binary VA: 0x15666a0)
// Original: hkMonitorStream::setStaticBuffer
// ----------------------------------------------------------------------------
void hkMonitorStream::setStaticBuffer(hkMonitorStream::Self *self, char *a2, int a3, bool a4)
{
  if ( a4 )
    hkMonitorStream::clear(self);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  *((uint8_t *)self + 16) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&a2[a3]);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&a2[a3 - 32]);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStream::reset  (binary VA: 0x15666f0)
// Original: hkMonitorStream::reset
// ----------------------------------------------------------------------------
hkMonitorStream::Self * hkMonitorStream::reset(hkMonitorStream::Self *self)
{
  *((uint32_t *)self + 1) = *(uint32_t *)self;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMotionState::staticClass  (binary VA: 0x1566710)
// Original: hkMotionState::staticClass
// ----------------------------------------------------------------------------
void * hkMotionState::staticClass()
{
  return &hkMotionStateClass;
}

// ----------------------------------------------------------------------------
// Function: hkStringObject::Destroy  (binary VA: 0x1566820)
// Original: hkStringObject::~hkStringObject
// ----------------------------------------------------------------------------
void hkStringObject::Destroy(hkStringObject::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20974A8);
  hkStringPtr::Destroy((hkStringObject::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkStringObject::Destroy_ea15668a0  (binary VA: 0x15668a0)
// Original: hkStringObject::~hkStringObject
// ----------------------------------------------------------------------------
void hkStringObject::Destroy_ea15668a0(hkStringObject::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20974A8);
  hkStringPtr::Destroy((hkStringObject::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkStringObject::staticClass  (binary VA: 0x1566920)
// Original: hkStringObject::staticClass
// ----------------------------------------------------------------------------
void * hkStringObject::staticClass()
{
  return &hkStringObjectClass;
}

// ----------------------------------------------------------------------------
// Function: hkTransformf::get4x4ColumnMajor  (binary VA: 0x1566a30)
// Original: hkTransformf::get4x4ColumnMajor
// ----------------------------------------------------------------------------
float * hkTransformf::get4x4ColumnMajor(hkTransformf::Self *self, float *a2)
{
  int v3; // xmm2_4
  int v4; // xmm1_4
  int v5; // xmm1_4
  int v6; // xmm3_4
  int v7; // xmm1_4
  int v8; // xmm2_4
  int v9; // xmm2_4
  int v10; // xmm1_4
  int v11; // xmm0_4

  v3 = *((uint32_t *)self + 1);
  v4 = *((uint32_t *)self + 2);
  *a2 = *(float *)self;
  *((uint32_t *)a2 + 1) = v3;
  *((uint32_t *)a2 + 2) = v4;
  a2[3] = 0.0;
  v5 = *((uint32_t *)self + 4);
  v6 = *((uint32_t *)self + 5);
  a2[6] = *((float *)self + 6);
  *((uint32_t *)a2 + 4) = v5;
  *((uint32_t *)a2 + 5) = v6;
  a2[7] = 0.0;
  v7 = *((uint32_t *)self + 8);
  v8 = *((uint32_t *)self + 10);
  a2[9] = *((float *)self + 9);
  *((uint32_t *)a2 + 8) = v7;
  *((uint32_t *)a2 + 10) = v8;
  a2[11] = 0.0;
  v9 = *((uint32_t *)self + 12);
  v10 = *((uint32_t *)self + 13);
  v11 = *((uint32_t *)self + 14);
  a2[15] = 1.0;
  *((uint32_t *)a2 + 12) = v9;
  *((uint32_t *)a2 + 13) = v10;
  *((uint32_t *)a2 + 14) = v11;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkTransformf::get4x4ColumnMajor  (binary VA: 0x1566ad0)
// Original: hkTransformf::get4x4ColumnMajor
// ----------------------------------------------------------------------------
double * hkTransformf::get4x4ColumnMajor(hkTransformf::Self *self, double *a2)
{
  double v3; // xmm1_8
  double v4; // xmm3_8
  double v5; // xmm1_8
  double v6; // xmm4_8
  double v7; // xmm1_8
  double v8; // xmm2_8
  double v9; // xmm1_8
  double v10; // xmm6_8

  v3 = *((float *)self + 1);
  v4 = *(float *)self;
  a2[2] = *((float *)self + 2);
  *a2 = v4;
  a2[1] = v3;
  a2[3] = 0.0;
  v5 = *((float *)self + 6);
  v6 = *((float *)self + 4);
  a2[5] = *((float *)self + 5);
  a2[4] = v6;
  a2[6] = v5;
  a2[7] = 0.0;
  v7 = *((float *)self + 10);
  v8 = *((float *)self + 9);
  a2[8] = *((float *)self + 8);
  a2[9] = v8;
  a2[10] = v7;
  a2[11] = 0.0;
  v9 = *((float *)self + 13);
  v10 = *((float *)self + 12);
  a2[14] = *((float *)self + 14);
  a2[12] = v10;
  a2[13] = v9;
  a2[15] = 1.0;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkTransformf::set4x4ColumnMajor  (binary VA: 0x1566b80)
// Original: hkTransformf::set4x4ColumnMajor
// ----------------------------------------------------------------------------
hkTransformf::Self * hkTransformf::set4x4ColumnMajor(hkTransformf::Self *self, const float *a2)
{
  int v3; // xmm2_4
  int v4; // xmm1_4
  int v5; // xmm1_4
  int v6; // xmm3_4
  int v7; // xmm1_4
  int v8; // xmm2_4
  int v9; // xmm2_4
  int v10; // xmm1_4
  int v11; // xmm0_4

  v3 = *((uint32_t *)a2 + 1);
  v4 = *((uint32_t *)a2 + 2);
  *(float *)self = *a2;
  *((uint32_t *)self + 1) = v3;
  *((uint32_t *)self + 2) = v4;
  *((uint32_t *)self + 3) = 0;
  v5 = *((uint32_t *)a2 + 4);
  v6 = *((uint32_t *)a2 + 5);
  *((float *)self + 6) = a2[6];
  *((uint32_t *)self + 4) = v5;
  *((uint32_t *)self + 5) = v6;
  *((uint32_t *)self + 7) = 0;
  v7 = *((uint32_t *)a2 + 8);
  v8 = *((uint32_t *)a2 + 10);
  *((float *)self + 9) = a2[9];
  *((uint32_t *)self + 8) = v7;
  *((uint32_t *)self + 10) = v8;
  *((uint32_t *)self + 11) = 0;
  v9 = *((uint32_t *)a2 + 12);
  v10 = *((uint32_t *)a2 + 13);
  v11 = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 15) = 1065353216;
  *((uint32_t *)self + 12) = v9;
  *((uint32_t *)self + 13) = v10;
  *((uint32_t *)self + 14) = v11;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkTransformf::set4x4ColumnMajor  (binary VA: 0x1566c20)
// Original: hkTransformf::set4x4ColumnMajor
// ----------------------------------------------------------------------------
hkTransformf::Self * hkTransformf::set4x4ColumnMajor(hkTransformf::Self *self, const double *a2)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm4_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm5_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm6_4

  v3 = a2[2];
  v4 = a2[1];
  v5 = *a2;
  *((float *)self + 2) = v3;
  *(float *)self = v5;
  *((float *)self + 1) = v4;
  *((uint32_t *)self + 3) = 0;
  v6 = a2[5];
  v7 = a2[6];
  v8 = a2[4];
  *((float *)self + 5) = v6;
  *((float *)self + 4) = v8;
  *((float *)self + 6) = v7;
  *((uint32_t *)self + 7) = 0;
  v9 = a2[10];
  v10 = a2[9];
  v11 = a2[8];
  *((float *)self + 9) = v10;
  *((float *)self + 8) = v11;
  *((float *)self + 10) = v9;
  *((uint32_t *)self + 11) = 0;
  v12 = a2[13];
  v13 = a2[14];
  v14 = a2[12];
  *((float *)self + 13) = v12;
  *((uint32_t *)self + 15) = 1065353216;
  *((float *)self + 12) = v14;
  *((float *)self + 14) = v13;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkTransformf::setInverse  (binary VA: 0x1566cc0)
// Original: hkTransformf::setInverse
// ----------------------------------------------------------------------------
hkTransformf::Self * hkTransformf::setInverse(hkTransformf::Self *self, const hkTransformf::Self *a2)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6;
  float v7; // xmm4_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm5_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm7_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19;
  float v20;
  float v21;

  v3 = *((float *)a2 + 1);
  v4 = *((float *)a2 + 2);
  v5 = *((float *)a2 + 10);
  v6 = *((float *)a2 + 5);
  v7 = *(float *)a2;
  v8 = *((float *)a2 + 4);
  v9 = *((float *)a2 + 8);
  v10 = *((float *)a2 + 6);
  v11 = *((float *)a2 + 9);
  *((float *)self + 5) = v6;
  *(float *)self = v7;
  *((float *)self + 9) = v10;
  *((float *)self + 10) = v5;
  *((float *)self + 11) = v5;
  *((float *)self + 1) = v8;
  *((float *)self + 2) = v9;
  *((float *)self + 3) = v9;
  *((float *)self + 4) = v3;
  *((float *)self + 6) = v11;
  *((float *)self + 7) = v11;
  *((float *)self + 8) = v4;
  v21 = v3;
  v20 = v4;
  v19 = v8;
  v12 = -*((float *)a2 + 12);
  v13 = -*((float *)a2 + 13);
  v14 = -*((float *)a2 + 14);
  v15 = v10 * v14;
  *((float *)self + 12) = (float)((float)(v7 * v12) + (float)(v21 * v13)) + (float)(v20 * v14);
  v16 = v14 * v5;
  v17 = (float)((float)(v19 * v12) + (float)(v6 * v13)) + v15;
  v18 = (float)((float)(v12 * v9) + (float)(v13 * v11)) + v16;
  *((float *)self + 13) = v17;
  *((float *)self + 14) = v18;
  *((float *)self + 15) = v18;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkTransformf::setMul  (binary VA: 0x1566df0)
// Original: hkTransformf::setMul
// ----------------------------------------------------------------------------
hkTransformf::Self * hkTransformf::setMul(hkTransformf::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3)
{
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm4_4
  float v8; // xmm7_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm6_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;

  v29 = *((float *)a2 + 7);
  v30 = *((float *)a2 + 9);
  v4 = *((float *)a3 + 12);
  v5 = *(float *)a2;
  v26 = *((float *)a2 + 2);
  v28 = *((float *)a2 + 6);
  v6 = *((float *)a2 + 4);
  v32 = *((float *)a2 + 11);
  v7 = *((float *)a3 + 13);
  v8 = *((float *)a2 + 1);
  v34 = *((float *)a2 + 3);
  v31 = *((float *)a2 + 10);
  v9 = *((float *)a3 + 14);
  v27 = *((float *)a2 + 5);
  v10 = *((float *)a2 + 8);
  v25 = (float)((float)(v6 * v7) + (float)(v4 * *(float *)a2)) + (float)(v9 * v10);
  *((float *)self + 12) = v25;
  v33 = v8;
  v11 = (float)((float)(v27 * v7) + (float)(v8 * v4)) + (float)(v30 * v9);
  *((float *)self + 13) = v11;
  v12 = (float)((float)(v28 * v7) + (float)(v26 * v4)) + (float)(v31 * v9);
  v13 = (float)((float)(v7 * v29) + (float)(v4 * v34)) + (float)(v9 * v32);
  *((float *)self + 14) = v12;
  *((float *)self + 15) = v13;
  v35 = v12;
  v14 = *((float *)a3 + 8);
  v15 = *((float *)a3 + 9);
  v36 = v13;
  v16 = *((float *)a3 + 10);
  *((float *)self + 8) = (float)((float)(v14 * v5) + (float)(v6 * v15)) + (float)(v16 * v10);
  *((float *)self + 9) = (float)((float)(v33 * v14) + (float)(v27 * v15)) + (float)(v30 * v16);
  *((float *)self + 10) = (float)((float)(v26 * v14) + (float)(v28 * v15)) + (float)(v31 * v16);
  *((float *)self + 11) = (float)((float)(v14 * v34) + (float)(v15 * v29)) + (float)(v16 * v32);
  v17 = *((float *)a3 + 4);
  v18 = *((float *)a3 + 5);
  v19 = *((float *)a3 + 6);
  *((float *)self + 4) = (float)((float)(v17 * v5) + (float)(v6 * v18)) + (float)(v19 * v10);
  *((float *)self + 5) = (float)((float)(v33 * v17) + (float)(v27 * v18)) + (float)(v30 * v19);
  *((float *)self + 6) = (float)((float)(v26 * v17) + (float)(v28 * v18)) + (float)(v31 * v19);
  *((float *)self + 7) = (float)((float)(v17 * v34) + (float)(v18 * v29)) + (float)(v19 * v32);
  v20 = *(float *)a3;
  v21 = *((float *)a3 + 1);
  v22 = *((float *)a3 + 2);
  v23 = (float)((float)(v5 * *(float *)a3) + (float)(v6 * v21)) + (float)(v10 * v22);
  v24 = v33 * *(float *)a3;
  *(float *)self = v23;
  *((float *)self + 1) = (float)(v24 + (float)(v27 * v21)) + (float)(v30 * v22);
  *((float *)self + 2) = (float)((float)(v26 * v20) + (float)(v28 * v21)) + (float)(v31 * v22);
  *((float *)self + 3) = (float)((float)(v20 * v34) + (float)(v21 * v29)) + (float)(v22 * v32);
  *((float *)self + 12) = v25 + *((float *)a2 + 12);
  *((float *)self + 13) = v11 + *((float *)a2 + 13);
  *((float *)self + 14) = v35 + *((float *)a2 + 14);
  *((float *)self + 15) = v36 + *((float *)a2 + 15);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkTransformf::setMulEq  (binary VA: 0x1567190)
// Original: hkTransformf::setMulEq
// ----------------------------------------------------------------------------
hkTransformf::Self * hkTransformf::setMulEq(hkTransformf::Self *self, const hkTransformf::Self *a2)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;

  v22 = *((float *)self + 12);
  v21 = *((float *)self + 13);
  v24 = *(float *)self;
  v25 = *((float *)self + 1);
  v26 = *((float *)self + 2);
  v27 = *((float *)self + 3);
  v28 = *((float *)self + 4);
  v29 = *((float *)self + 5);
  v30 = *((float *)self + 6);
  v31 = *((float *)self + 7);
  v32 = *((float *)self + 8);
  v33 = *((float *)self + 9);
  v34 = *((float *)self + 10);
  v35 = *((float *)self + 11);
  v20 = *((float *)self + 14);
  v3 = *((float *)a2 + 12);
  v19 = *((float *)self + 15);
  v4 = *((float *)a2 + 13);
  v5 = *((float *)a2 + 14);
  v6 = (float)((float)(v28 * v4) + (float)(*(float *)self * v3)) + (float)(v32 * v5);
  *((float *)self + 12) = v6;
  v23 = v6;
  v7 = (float)((float)(v25 * v3) + (float)(v29 * v4)) + (float)(v33 * v5);
  *((float *)self + 13) = v7;
  v8 = (float)((float)(v26 * v3) + (float)(v30 * v4)) + (float)(v34 * v5);
  *((float *)self + 14) = v8;
  v9 = (float)((float)(v27 * v3) + (float)(v4 * v31)) + (float)(v5 * v35);
  *((float *)self + 15) = v9;
  v10 = *((float *)a2 + 8);
  v11 = *((float *)a2 + 9);
  v12 = *((float *)a2 + 10);
  *((float *)self + 8) = (float)((float)(v24 * v10) + (float)(v28 * v11)) + (float)(v32 * v12);
  *((float *)self + 9) = (float)((float)(v25 * v10) + (float)(v29 * v11)) + (float)(v33 * v12);
  *((float *)self + 10) = (float)((float)(v26 * v10) + (float)(v30 * v11)) + (float)(v34 * v12);
  *((float *)self + 11) = (float)((float)(v10 * v27) + (float)(v11 * v31)) + (float)(v12 * v35);
  v13 = *((float *)a2 + 4);
  v14 = *((float *)a2 + 5);
  v15 = *((float *)a2 + 6);
  *((float *)self + 4) = (float)((float)(v24 * v13) + (float)(v28 * v14)) + (float)(v32 * v15);
  *((float *)self + 5) = (float)((float)(v25 * v13) + (float)(v29 * v14)) + (float)(v33 * v15);
  *((float *)self + 6) = (float)((float)(v26 * v13) + (float)(v30 * v14)) + (float)(v34 * v15);
  *((float *)self + 7) = (float)((float)(v13 * v27) + (float)(v14 * v31)) + (float)(v15 * v35);
  v16 = *(float *)a2;
  v17 = *((float *)a2 + 1);
  v18 = *((float *)a2 + 2);
  *(float *)self = (float)((float)(v24 * *(float *)a2) + (float)(v28 * v17)) + (float)(v32 * v18);
  *((float *)self + 1) = (float)((float)(v25 * v16) + (float)(v29 * v17)) + (float)(v33 * v18);
  *((float *)self + 13) = v7 + v21;
  *((float *)self + 14) = v8 + v20;
  *((float *)self + 15) = v9 + v19;
  *((float *)self + 2) = (float)((float)(v26 * v16) + (float)(v30 * v17)) + (float)(v34 * v18);
  *((float *)self + 3) = (float)((float)(v16 * v27) + (float)(v17 * v31)) + (float)(v18 * v35);
  *((float *)self + 12) = v23 + v22;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkTransformf::setMul  (binary VA: 0x1567520)
// Original: hkTransformf::setMul
// ----------------------------------------------------------------------------
const hkQsTransformf::Self * hkTransformf::setMul(hkTransformf::Self *self, const hkQsTransformf::Self *a2, const hkTransformf::Self *a3)
{
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm7_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm5_4
  float v21; // xmm0_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm5_4
  float v30; // xmm0_4
  float v31; // xmm5_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm3_4
  float v35; // xmm5_4
  float v36; // xmm2_4
  float v37; // xmm3_4
  float v38; // xmm1_4
  float v39; // xmm6_4
  float v40; // xmm5_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm6_4
  float v46; // xmm1_4
  float v47; // xmm7_4
  float v48; // xmm5_4
  float v49; // xmm0_4
  float v50; // xmm7_4
  float v51; // xmm0_4
  float v52; // xmm6_4
  typedef uint8_t _g4_t_v54[48];
  typedef uint32_t _g4_t_v55[12];
  typedef float _g4_t_v56[15];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v54)) > _g4_s0 ? (0u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v55)) > _g4_s1 ? (48u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (96u + sizeof(_g4_t_v56)) > _g4_s2 ? (96u + sizeof(_g4_t_v56)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 96u);

  hkRotationf::set((hkRotationf::Self *)v54, (const hkQsTransformf::Self *)((char *)a2 + 16));
  memset(&v55[1], 0, 16);
  memset(&v55[6], 0, 16);
  v55[11] = 0;
  v55[0] = *((uint32_t *)a2 + 8);
  v55[5] = *((uint32_t *)a2 + 9);
  v55[10] = *((uint32_t *)a2 + 10);
  hkMatrix3f::setMul((hkMatrix3f::Self *)v56, (const hkMatrix3f::Self *)v54, (const hkMatrix3f::Self *)v55);
  v3 = *(float *)a3;
  v4 = *((float *)a3 + 1);
  v5 = *((float *)a3 + 2);
  v6 = v56[9];
  v7 = v56[4];
  v8 = v56[5] * v4;
  *(float *)self = (float)((float)(v56[0] * *(float *)a3) + (float)(v56[4] * v4)) + (float)(v56[8] * v5);
  v9 = (float)((float)(v56[1] * v3) + v8) + (float)(v5 * v6);
  v10 = v56[6] * v4;
  v11 = v4 * v56[7];
  *((float *)self + 1) = v9;
  v12 = (float)((float)(v56[2] * v3) + v10) + (float)(v56[10] * v5);
  v13 = v56[11];
  v14 = (float)((float)(v3 * v56[3]) + v11) + (float)(v5 * v56[11]);
  *((float *)self + 2) = v12;
  v15 = v56[0];
  *((float *)self + 3) = v14;
  v16 = *((float *)a3 + 4);
  v17 = *((float *)a3 + 5);
  v18 = *((float *)a3 + 6);
  v19 = (float)((float)(v15 * v16) + (float)(v7 * v17)) + (float)(v56[8] * v18);
  v20 = v56[5] * v17;
  *((float *)self + 4) = v19;
  v21 = (float)((float)(v56[1] * v16) + v20) + (float)(v6 * v18);
  v22 = v56[6] * v17;
  v23 = v17 * v56[7];
  *((float *)self + 5) = v21;
  v24 = v56[2] * v16;
  v25 = (float)((float)(v16 * v56[3]) + v23) + (float)(v18 * v13);
  *((float *)self + 6) = (float)(v24 + v22) + (float)(v56[10] * v18);
  *((float *)self + 7) = v25;
  v26 = *((float *)a3 + 8);
  v27 = *((float *)a3 + 9);
  v28 = *((float *)a3 + 10);
  v29 = v56[5] * v27;
  *((float *)self + 8) = (float)((float)(v56[0] * v26) + (float)(v56[4] * v27)) + (float)(v56[8] * v28);
  v30 = (float)((float)(v56[1] * v26) + v29) + (float)(v6 * v28);
  v31 = v56[6] * v27;
  v32 = v27 * v56[7];
  *((float *)self + 9) = v30;
  v33 = (float)(v56[2] * v26) + v31;
  v34 = (float)(v26 * v56[3]) + v32;
  v35 = v56[10] * v28;
  v36 = v56[0];
  v37 = v34 + (float)(v28 * v13);
  v38 = v56[1];
  *((float *)self + 10) = v33 + v35;
  *((float *)self + 11) = v37;
  v39 = *((float *)a3 + 12);
  v40 = *((float *)a3 + 13);
  v41 = *((float *)a3 + 14);
  v42 = (float)((float)(v36 * v39) + (float)(v56[4] * v40)) + (float)(v56[8] * v41);
  v43 = (float)(v38 * v39) + (float)(v56[5] * v40);
  v44 = v56[2] * v39;
  v45 = v39 * v56[3];
  *((float *)self + 12) = v42;
  v46 = v43 + (float)(v6 * v41);
  v47 = v56[6] * v40;
  v48 = v40 * v56[7];
  v49 = v44 + v47;
  v50 = v56[10] * v41;
  *((float *)self + 13) = v46;
  v51 = v49 + v50;
  v52 = (float)(v45 + v48) + (float)(v41 * v13);
  *((float *)self + 14) = v51;
  *((float *)self + 15) = v52;
  *((float *)self + 12) = v42 + *(float *)a2;
  *((float *)self + 13) = v46 + *((float *)a2 + 1);
  *((float *)self + 14) = v51 + *((float *)a2 + 2);
  *((float *)self + 15) = v52 + *((float *)a2 + 3);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkTransformf::setMulInverseMul  (binary VA: 0x1567940)
// Original: hkTransformf::setMulInverseMul
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkTransformf::setMulInverseMul(hkTransformf::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3)
{
  const hkTransformf::Self *result;
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm6_4
  float v7; // xmm5_4
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm5_4
  float v29; // xmm0_4
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;

  result = a2;
  v4 = *(float *)a2;
  v36 = *((float *)a2 + 2);
  v5 = *((float *)a2 + 1);
  v31 = *((float *)a2 + 5);
  v32 = *((float *)a2 + 6);
  v6 = *((float *)a3 + 8);
  v7 = *((float *)a3 + 9);
  v30 = *((float *)a2 + 9);
  v33 = *((float *)a2 + 8);
  v34 = *((float *)a2 + 10);
  v35 = *((float *)a2 + 4);
  v8 = (float)(*(float *)a2 * v6) + (float)(v5 * v7);
  v9 = *((float *)a3 + 10);
  v10 = (float)(v35 * v6) + (float)(v31 * v7);
  v11 = (float)((float)(v6 * v33) + (float)(v7 * v30)) + (float)(v34 * v9);
  *((float *)self + 10) = v11;
  *((float *)self + 11) = v11;
  *((float *)self + 8) = v8 + (float)(v36 * v9);
  *((float *)self + 9) = v10 + (float)(v9 * v32);
  v12 = *((float *)a3 + 4);
  v13 = *((float *)a3 + 5);
  v14 = (float)(v35 * v12) + (float)(v31 * v13);
  v15 = (float)(v4 * v12) + (float)(v5 * v13);
  v16 = *((float *)a3 + 6);
  v17 = (float)((float)(v12 * v33) + (float)(v13 * v30)) + (float)(v34 * v16);
  *((float *)self + 4) = v15 + (float)(v36 * v16);
  *((float *)self + 6) = v17;
  *((float *)self + 7) = v17;
  *((float *)self + 5) = v14 + (float)(v16 * v32);
  v18 = *((float *)a3 + 1);
  v19 = (float)(v4 * *(float *)a3) + (float)(v5 * v18);
  v20 = *((float *)a3 + 2);
  v21 = (float)(v35 * *(float *)a3) + (float)(v31 * v18);
  v22 = (float)((float)(*(float *)a3 * v33) + (float)(v18 * v30)) + (float)(v34 * v20);
  *((float *)self + 2) = v22;
  *((float *)self + 3) = v22;
  *(float *)self = v19 + (float)(v36 * v20);
  *((float *)self + 1) = v21 + (float)(v20 * v32);
  v23 = *((float *)a3 + 12) - *((float *)a2 + 12);
  v24 = *((float *)a3 + 13) - *((float *)a2 + 13);
  v25 = *((float *)a3 + 14) - *((float *)a2 + 14);
  v26 = (float)(*(float *)a2 * v23) + (float)(*((float *)a2 + 1) * v24);
  v27 = (float)(*((float *)a2 + 4) * v23) + (float)(*((float *)a2 + 5) * v24);
  v28 = *((float *)a2 + 6) * v25;
  v29 = (float)((float)(v23 * *((float *)result + 8)) + (float)(v24 * *((float *)result + 9)))
      + (float)(*((float *)a2 + 10) * v25);
  *((float *)self + 12) = v26 + (float)(v25 * *((float *)a2 + 2));
  *((float *)self + 13) = v27 + v28;
  *((float *)self + 14) = v29;
  *((float *)self + 15) = v29;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTransformf::isOk  (binary VA: 0x1567bc0)
// Original: hkTransformf::isOk
// ----------------------------------------------------------------------------
int hkTransformf::isOk(hkTransformf::Self *self)
{
  int result;

  result = 0;
  if ( (*((uint32_t *)self + 12) & 0x7F800000) != 0x7F800000
    && (*((uint32_t *)self + 13) & 0x7F800000) != 0x7F800000
    && (*((uint32_t *)self + 14) & 0x7F800000) != 0x7F800000 )
  {
    return hkRotationf::isOk(self);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTransformf::setMulMulInverse  (binary VA: 0x1567c20)
// Original: hkTransformf::setMulMulInverse
// ----------------------------------------------------------------------------
hkTransformf::Self * hkTransformf::setMulMulInverse(hkTransformf::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3)
{
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v7; // xmm6_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm7_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm1_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;

  v4 = *((float *)a3 + 2);
  v5 = *((float *)a3 + 6);
  v6 = *((float *)a3 + 10);
  v7 = *((float *)a2 + 8);
  v8 = *((float *)a3 + 1);
  v9 = *((float *)a3 + 5);
  v10 = *((float *)a3 + 9);
  v38 = (float)((float)(*((float *)a2 + 4) * v5) + (float)(*(float *)a2 * v4)) + (float)(v6 * v7);
  v37 = (float)((float)(*((float *)a2 + 5) * v5) + (float)(*((float *)a2 + 1) * v4)) + (float)(*((float *)a2 + 9) * v6);
  v36 = (float)((float)(*((float *)a2 + 6) * v5) + (float)(*((float *)a2 + 2) * v4)) + (float)(*((float *)a2 + 10) * v6);
  v11 = (float)((float)(v4 * *((float *)a2 + 3)) + (float)(v5 * *((float *)a2 + 7))) + (float)(v6 * *((float *)a2 + 11));
  v12 = (float)((float)(*((float *)a2 + 4) * v9) + (float)(*(float *)a2 * v8)) + (float)(v10 * v7);
  v33 = (float)((float)(*((float *)a2 + 5) * v9) + (float)(*((float *)a2 + 1) * v8)) + (float)(*((float *)a2 + 9) * v10);
  v32 = (float)((float)(v9 * *((float *)a2 + 7)) + (float)(v8 * *((float *)a2 + 3)))
      + (float)(v10 * *((float *)a2 + 11));
  v35 = (float)((float)(*((float *)a2 + 6) * v9) + (float)(*((float *)a2 + 2) * v8))
      + (float)(*((float *)a2 + 10) * v10);
  v13 = (float)((float)(*((float *)a3 + 4) * *((float *)a2 + 4)) + (float)(*(float *)a3 * *(float *)a2))
      + (float)(v7 * *((float *)a3 + 8));
  v31 = (float)((float)(*((float *)a3 + 4) * *((float *)a2 + 6)) + (float)(*(float *)a3 * *((float *)a2 + 2)))
      + (float)(*((float *)a3 + 8) * *((float *)a2 + 10));
  v14 = *((float *)a3 + 13);
  v29 = v13;
  v30 = v12;
  v28 = (float)((float)(*((float *)a3 + 4) * *((float *)a2 + 5)) + (float)(*(float *)a3 * *((float *)a2 + 1)))
      + (float)(*((float *)a3 + 8) * *((float *)a2 + 9));
  v15 = *((float *)a3 + 14);
  v16 = (float)((float)(*(float *)a3 * *((float *)a2 + 3)) + (float)(*((float *)a3 + 4) * *((float *)a2 + 7)))
      + (float)(*((float *)a3 + 8) * *((float *)a2 + 11));
  v17 = *((float *)a3 + 12);
  v18 = v28 * v17;
  v34 = (float)(v12 * v14) + (float)(v13 * v17);
  v19 = (float)(v31 * v17) + (float)(v35 * v14);
  v20 = (float)(v17 * v16) + (float)(v14 * v32);
  v21 = (float)(v18 + (float)(v33 * v14)) + (float)(v37 * v15);
  v22 = v36 * v15;
  v23 = v20 + (float)(v15 * v11);
  v24 = *((float *)a2 + 12) - (float)((float)(v38 * v15) + v34);
  v25 = *((float *)a2 + 13) - v21;
  v26 = *((float *)a2 + 14) - (float)(v19 + v22);
  v27 = *((float *)a2 + 15) - v23;
  *(float *)self = v29;
  *((float *)self + 1) = v28;
  *((float *)self + 2) = v31;
  *((float *)self + 3) = v16;
  *((float *)self + 8) = v38;
  *((float *)self + 4) = v30;
  *((float *)self + 5) = v33;
  *((float *)self + 9) = v37;
  *((float *)self + 6) = v35;
  *((float *)self + 7) = v32;
  *((float *)self + 10) = v36;
  *((float *)self + 11) = v11;
  *((float *)self + 12) = v24;
  *((float *)self + 13) = v25;
  *((float *)self + 14) = v26;
  *((float *)self + 15) = v27;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkTransformf::isApproximatelyEqual  (binary VA: 0x1567fc0)
// Original: hkTransformf::isApproximatelyEqual
// ----------------------------------------------------------------------------
int hkTransformf::isApproximatelyEqual(hkTransformf::Self *self, const hkTransformf::Self *a2, float a3)
{
  char isApproximatelyEqualSimd;
  int v4;
  float v5; // xmm0_4
  typedef float _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);

  v7 = a3;
  isApproximatelyEqualSimd = hkMatrix3f::isApproximatelyEqualSimd(self, a2, &v7);
  v4 = 0;
  if ( isApproximatelyEqualSimd != 0 )
  {
    v5 = fabs(*((float *)self + 14) - *((float *)a2 + 14));
    v4 = v7 >= v5 ? 4 : 0;
    if ( v7 >= fabs(*((float *)self + 15) - *((float *)a2 + 15)) )
      v4 = v7 < v5 ? 8 : 12;
    LOBYTE(v4) = (v4 & 7
                | (v7 >= fabs(*((float *)self + 12) - *((float *)a2 + 12)))
                | (v7 >= fabs(*((float *)self + 13) - *((float *)a2 + 13)) ? 2 : 0)) == 7;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkTransformf::isApproximatelyEqualSimd  (binary VA: 0x1568090)
// Original: hkTransformf::isApproximatelyEqualSimd
// ----------------------------------------------------------------------------
bool hkTransformf::isApproximatelyEqualSimd(float *a1, float *a2, float *a3)
{
  float v3; // xmm1_4
  float v4; // xmm0_4
  uint8_t v5;
  int v6;

  v3 = fmaxf(fmaxf(fabs(a2[2] - a1[2]), fabs(a2[6] - a1[6])), fmaxf(fabs(a2[10] - a1[10]), fabs(a2[14] - a1[14])));
  v4 = *a3;
  v5 = (v4 >= fmaxf(fmaxf(fabs(*a2 - *a1), fabs(a2[4] - a1[4])), fmaxf(fabs(a2[8] - a1[8]), fabs(a2[12] - a1[12]))))
     | (v4 >= fmaxf(fmaxf(fabs(a2[1] - a1[1]), fabs(a2[5] - a1[5])), fmaxf(fabs(a2[9] - a1[9]), fabs(a2[13] - a1[13])))
      ? 2
      : 0);
  LOBYTE(v6) = *a3 >= v3 ? 4 : 0;
  if ( *a3 >= fmaxf(
                fmaxf(fabs(a2[3] - a1[3]), fabs(a2[7] - a1[7])),
                fmaxf(fabs(a2[11] - a1[11]), fabs(a2[15] - a1[15]))) )
    v6 = v4 < v3 ? 8 : 12;
  return (((uint8_t)v6 | v5) & 7) == 7;
}

// ----------------------------------------------------------------------------
// Function: hkVector4f::setRotatedDir  (binary VA: 0x1568250)
// Original: hkVector4f::setRotatedDir
// ----------------------------------------------------------------------------
hkVector4f::Self * hkVector4f::setRotatedDir(hkVector4f::Self *self, const hkMatrix3f::Self *a2, const hkVector4f::Self *a3)
{
  float v3; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm4_4
  float v8; // xmm7_4
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4

  v3 = *(float *)a3;
  v5 = *(float *)a2 * *(float *)a3;
  v6 = *((float *)a3 + 1);
  v7 = *((float *)a3 + 2);
  *(float *)self = v5;
  v8 = *((float *)a2 + 1) * v3;
  *((float *)self + 1) = v8;
  v9 = *((float *)a2 + 2) * v3;
  *((float *)self + 2) = v9;
  v10 = *((float *)a2 + 3) * v3;
  *((float *)self + 3) = v10;
  v11 = (float)(*((float *)a2 + 4) * v6) + v5;
  *(float *)self = v11;
  v12 = (float)(*((float *)a2 + 5) * v6) + v8;
  *((float *)self + 1) = v12;
  v13 = (float)(*((float *)a2 + 6) * v6) + v9;
  *((float *)self + 2) = v13;
  v14 = (float)(v6 * *((float *)a2 + 7)) + v10;
  *((float *)self + 3) = v14;
  *(float *)self = (float)(*((float *)a2 + 8) * v7) + v11;
  *((float *)self + 1) = (float)(*((float *)a2 + 9) * v7) + v12;
  *((float *)self + 2) = (float)(*((float *)a2 + 10) * v7) + v13;
  *((float *)self + 3) = (float)(v7 * *((float *)a2 + 11)) + v14;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkVector4f::setRotatedInverseDir  (binary VA: 0x1568330)
// Original: hkVector4f::setRotatedInverseDir
// ----------------------------------------------------------------------------
const hkMatrix3f::Self * hkVector4f::setRotatedInverseDir(hkVector4f::Self *self, const hkMatrix3f::Self *a2, const hkVector4f::Self *a3)
{
  float v4; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm2_4

  v4 = *((float *)a3 + 1);
  v5 = *((float *)a3 + 2);
  v6 = (float)((float)(*(float *)a3 * *((float *)a2 + 8)) + (float)(v4 * *((float *)a2 + 9)))
     + (float)(*((float *)a2 + 10) * v5);
  v7 = (float)((float)(*(float *)a2 * *(float *)a3) + (float)(*((float *)a2 + 1) * v4))
     + (float)(v5 * *((float *)a2 + 2));
  *((float *)self + 1) = (float)((float)(*((float *)a2 + 4) * *(float *)a3) + (float)(*((float *)a2 + 5) * v4))
                       + (float)(*((float *)a2 + 6) * v5);
  *((float *)self + 2) = v6;
  *(float *)self = v7;
  *((float *)self + 3) = v6;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkVector4f::setTransformedPos  (binary VA: 0x15683c0)
// Original: hkVector4f::setTransformedPos
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkVector4f::setTransformedPos(hkVector4f::Self *self, const hkTransformf::Self *a2, const hkVector4f::Self *a3)
{
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm6_4

  v4 = *((float *)a3 + 1);
  v5 = *((float *)a3 + 2);
  v6 = (float)((float)(*((float *)a2 + 1) * *(float *)a3) + (float)(*((float *)a2 + 5) * v4))
     + (float)(*((float *)a2 + 9) * v5);
  v7 = (float)((float)(*((float *)a2 + 2) * *(float *)a3) + (float)(*((float *)a2 + 6) * v4))
     + (float)(*((float *)a2 + 10) * v5);
  v8 = (float)(*((float *)a2 + 3) * *(float *)a3) + (float)(*((float *)a2 + 7) * v4);
  v9 = *((float *)a2 + 11) * v5;
  *(float *)self = (float)((float)((float)(*(float *)a3 * *(float *)a2) + (float)(v4 * *((float *)a2 + 4)))
                         + (float)(v5 * *((float *)a2 + 8)))
                 + *((float *)a2 + 12);
  *((float *)self + 1) = v6 + *((float *)a2 + 13);
  *((float *)self + 2) = v7 + *((float *)a2 + 14);
  *((float *)self + 3) = (float)(v8 + v9) + *((float *)a2 + 15);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkVector4f::setTransformedInversePos  (binary VA: 0x1568490)
// Original: hkVector4f::setTransformedInversePos
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkVector4f::setTransformedInversePos(hkVector4f::Self *self, const hkTransformf::Self *a2, const hkVector4f::Self *a3)
{
  float v4; // xmm0_4
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm2_4

  v4 = *(float *)a3 - *((float *)a2 + 12);
  v5 = *((float *)a3 + 1) - *((float *)a2 + 13);
  v6 = *((float *)a3 + 2) - *((float *)a2 + 14);
  v7 = (float)(*(float *)a2 * v4) + (float)(*((float *)a2 + 1) * v5);
  v8 = (float)(*((float *)a2 + 4) * v4) + (float)(*((float *)a2 + 5) * v5);
  v9 = (float)((float)(v4 * *((float *)a2 + 8)) + (float)(v5 * *((float *)a2 + 9))) + (float)(*((float *)a2 + 10) * v6);
  v10 = v7 + (float)(v6 * *((float *)a2 + 2));
  *((float *)self + 1) = v8 + (float)(*((float *)a2 + 6) * v6);
  *((float *)self + 2) = v9;
  *(float *)self = v10;
  *((float *)self + 3) = v9;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkVector4f::setTransformedPos  (binary VA: 0x1568530)
// Original: hkVector4f::setTransformedPos
// ----------------------------------------------------------------------------
const hkQsTransformf::Self * hkVector4f::setTransformedPos(hkVector4f::Self *self, const hkQsTransformf::Self *a2, const hkVector4f::Self *a3)
{
  float v4; // xmm2_4
  float v5; // xmm6_4
  float v6; // xmm3_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11;
  float v12;
  float v13;
  float v14;

  v4 = *((float *)a2 + 7);
  v5 = *((float *)a2 + 8) * *(float *)a3;
  v12 = *((float *)a2 + 9) * *((float *)a3 + 1);
  v6 = *((float *)a2 + 4);
  v7 = *((float *)a2 + 10) * *((float *)a3 + 2);
  v13 = *((float *)a2 + 5);
  v8 = (float)(v4 * v4) - 0.5;
  v14 = *((float *)a2 + 6);
  v9 = (float)((float)(v5 * v6) + (float)(v12 * v13)) + (float)(v14 * v7);
  v11 = (float)(v4 * v9) + (float)((float)(*((float *)a2 + 11) * *((float *)a3 + 3)) * v8);
  v10 = (float)((float)(v5 * v8) + (float)(v6 * v9)) + (float)((float)((float)(v13 * v7) - (float)(v14 * v12)) * v4);
  *(float *)self = (float)(v10 + v10) + *(float *)a2;
  *((float *)self + 1) = (float)((float)((float)((float)(v12 * v8) + (float)(v13 * v9))
                                       + (float)((float)((float)(v5 * v14) - (float)(v6 * v7)) * v4))
                               + (float)((float)((float)(v12 * v8) + (float)(v13 * v9))
                                       + (float)((float)((float)(v5 * v14) - (float)(v6 * v7)) * v4)))
                       + *((float *)a2 + 1);
  *((float *)self + 2) = (float)((float)((float)((float)(v8 * v7) + (float)(v9 * v14))
                                       + (float)((float)((float)(v12 * v6) - (float)(v5 * v13)) * v4))
                               + (float)((float)((float)(v8 * v7) + (float)(v9 * v14))
                                       + (float)((float)((float)(v12 * v6) - (float)(v5 * v13)) * v4)))
                       + *((float *)a2 + 2);
  *((float *)self + 3) = (float)((float)((float)(0.0 * v4) + v11) + (float)((float)(0.0 * v4) + v11))
                       + *((float *)a2 + 3);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkVector4f::setTransformedInversePos  (binary VA: 0x15686f0)
// Original: hkVector4f::setTransformedInversePos
// ----------------------------------------------------------------------------
int hkVector4f::setTransformedInversePos(hkVector4f::Self *self, const hkQsTransformf::Self *a2, const hkVector4f::Self *a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm6_4
  __m128i v6;
  int v7;
  int v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm4_4
  __m128i v11;
  int v12;
  int v13; // xmm4_4
  float v14; // xmm4_4
  __m128i v15;
  int v16;
  int v17; // xmm4_4
  int v18;
  int result;
  float v20; // xmm4_4
  float v21; // xmm6_4
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;

  v23 = *((float *)a2 + 4);
  v24 = *((float *)a2 + 5);
  v26 = *(float *)a3 - *(float *)a2;
  v27 = *((float *)a3 + 1) - *((float *)a2 + 1);
  v3 = *((float *)a2 + 7);
  v28 = *((float *)a3 + 2) - *((float *)a2 + 2);
  v4 = (float)((float)(v26 * v23) + (float)(v27 * v24)) + (float)(v28 * *((float *)a2 + 6));
  v25 = *((float *)a2 + 6);
  v5 = (float)(*((float *)a3 + 3) - *((float *)a2 + 3)) * (float)((float)(v3 * v3) - 0.5);
  v22 = (float)(v3 * v3) - 0.5;
g4_m128_raw(v6) = *((unsigned int *)a2 + 8);
  v7 = _mm_cvtsi128_si32(v6);
  v8 = (2130706432 - v7) & ((v7 ^ (v7 + 2139095040)) >> 31);
  v9 = (float)(2.0 - (float)(*((float *)a2 + 8) * *(float *)&v8)) * *(float *)&v8;
  v29 = v9 * (float)(2.0 - (float)(*((float *)a2 + 8) * v9));
  v10 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v6) * v29);
g4_m128_raw(v11) = *((unsigned int *)a2 + 9);
  v12 = _mm_cvtsi128_si32(v11);
  v32 = v10;
  v13 = (2130706432 - v12) & ((v12 ^ (v12 + 2139095040)) >> 31);
  v30 = (float)((float)(2.0 - (float)(*((float *)a2 + 9) * *(float *)&v13)) * *(float *)&v13)
      * (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v11)
                      * (float)((float)(2.0 - (float)(*((float *)a2 + 9) * *(float *)&v13)) * *(float *)&v13)));
  v14 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v11) * v30);
g4_m128_raw(v15) = *((unsigned int *)a2 + 10);
  v16 = _mm_cvtsi128_si32(v15);
  v33 = v14;
  v17 = (2130706432 - v16) & ((v16 ^ (v16 + 2139095040)) >> 31);
  v31 = (float)((float)(2.0 - (float)(*((float *)a2 + 10) * *(float *)&v17)) * *(float *)&v17)
      * (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v15)
                      * (float)((float)(2.0 - (float)(*((float *)a2 + 10) * *(float *)&v17)) * *(float *)&v17)));
  v34 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * v31);
  v18 = _mm_cvtsi128_si32(g4_to_m128i(*((unsigned int *)a2 + 11)));
  result = (2130706432 - v18) & ((v18 ^ (v18 + 2139095040)) >> 31);
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)(2.0 - (float)(*((float *)a2 + 11) * *(float *)&result)) * *(float *)&result;
  v20 = (float)(2.0 - (float)(*((float *)a2 + 11) * *(float *)g4_m128_ptr<int32_t>(v15))) * *(float *)g4_m128_ptr<int32_t>(v15);
  v21 = (float)((float)((float)(v5 + (float)(v3 * v4)) + (float)(0.0 * v3))
              + (float)((float)(v5 + (float)(v3 * v4)) + (float)(0.0 * v3)))
      * (float)((float)(2.0 - (float)(*((float *)a2 + 11) * v20)) * v20);
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)(v26 * v22) + (float)(v23 * v4))
                          + (float)((float)((float)(v27 * v25) - (float)(v28 * v24)) * v3);
  *(float *)self = (float)(*(float *)g4_m128_ptr<int32_t>(v15) + *(float *)g4_m128_ptr<int32_t>(v15)) * (float)(v29 * v32);
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)(v27 * v22) + (float)(v24 * v4))
                          + (float)((float)((float)(v28 * v23) - (float)(v26 * v25)) * v3);
  *((float *)self + 1) = (float)(*(float *)g4_m128_ptr<int32_t>(v15) + *(float *)g4_m128_ptr<int32_t>(v15)) * (float)(v30 * v33);
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)(v28 * v22) + (float)(v4 * v25))
                          + (float)((float)((float)(v26 * v24) - (float)(v27 * v23)) * v3);
  *((float *)self + 2) = (float)(*(float *)g4_m128_ptr<int32_t>(v15) + *(float *)g4_m128_ptr<int32_t>(v15)) * (float)(v31 * v34);
  *((float *)self + 3) = v21;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVector4f::setTransformedPos  (binary VA: 0x1568a60)
// Original: hkVector4f::setTransformedPos
// ----------------------------------------------------------------------------
const hkQTransformf::Self * hkVector4f::setTransformedPos(hkVector4f::Self *self, const hkQTransformf::Self *a2, const hkVector4f::Self *a3)
{
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm6_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;

  v4 = *(float *)a2;
  v13 = *((float *)a3 + 1);
  v5 = *((float *)a2 + 3);
  v11 = *((float *)a2 + 1);
  v6 = *((float *)a3 + 2);
  v14 = *(float *)a3;
  v7 = (float)(v5 * v5) - 0.5;
  v12 = *((float *)a2 + 2);
  v8 = (float)((float)(*(float *)a2 * *(float *)a3) + (float)(v11 * v13)) + (float)(v12 * v6);
  v10 = (float)(v5 * v8) + (float)(*((float *)a3 + 3) * v7);
  v9 = (float)((float)(*(float *)a3 * v7) + (float)(*(float *)a2 * v8))
     + (float)((float)((float)(v11 * v6) - (float)(v13 * v12)) * v5);
  *(float *)self = (float)(v9 + v9) + *((float *)a2 + 4);
  *((float *)self + 1) = (float)((float)((float)((float)(v13 * v7) + (float)(v11 * v8))
                                       + (float)((float)((float)(v14 * v12) - (float)(v4 * v6)) * v5))
                               + (float)((float)((float)(v13 * v7) + (float)(v11 * v8))
                                       + (float)((float)((float)(v14 * v12) - (float)(v4 * v6)) * v5)))
                       + *((float *)a2 + 5);
  *((float *)self + 2) = (float)((float)((float)((float)(v7 * v6) + (float)(v8 * v12))
                                       + (float)((float)((float)(v4 * v13) - (float)(v11 * v14)) * v5))
                               + (float)((float)((float)(v7 * v6) + (float)(v8 * v12))
                                       + (float)((float)((float)(v4 * v13) - (float)(v11 * v14)) * v5)))
                       + *((float *)a2 + 6);
  *((float *)self + 3) = (float)((float)((float)(0.0 * v5) + v10) + (float)((float)(0.0 * v5) + v10))
                       + *((float *)a2 + 7);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkVector4f::setTransformedInversePos  (binary VA: 0x1568c00)
// Original: hkVector4f::setTransformedInversePos
// ----------------------------------------------------------------------------
const hkQTransformf::Self * hkVector4f::setTransformedInversePos(hkVector4f::Self *self, const hkQTransformf::Self *a2, const hkVector4f::Self *a3)
{
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm5_4
  float v7; // xmm0_4
  float v8; // xmm7_4
  float v9; // xmm1_4
  float v10; // xmm6_4
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;

  v4 = *((float *)a2 + 3);
  v5 = *(float *)a3 - *((float *)a2 + 4);
  v6 = *((float *)a3 + 2) - *((float *)a2 + 6);
  v12 = *((float *)a3 + 1) - *((float *)a2 + 5);
  v11 = (float)(v4 * v4) - 0.5;
  v13 = *((float *)a2 + 2);
  v14 = *(float *)a2;
  v15 = *((float *)a2 + 1);
  v7 = (float)((float)(*(float *)a2 * v5) + (float)(v12 * v15)) + (float)(v13 * v6);
  v8 = (float)((float)((float)(*((float *)a3 + 3) - *((float *)a2 + 7)) * v11) + (float)(v4 * v7)) + (float)(0.0 * v4);
  v9 = (float)((float)(v11 * v5) + (float)(*(float *)a2 * v7))
     + (float)((float)((float)(v12 * v13) - (float)(v15 * v6)) * v4);
  v10 = *(float *)a2;
  *(float *)self = v9 + v9;
  *((float *)self + 1) = (float)((float)((float)(v12 * v11) + (float)(v15 * v7))
                               + (float)((float)((float)(v10 * v6) - (float)(v13 * v5)) * v4))
                       + (float)((float)((float)(v12 * v11) + (float)(v15 * v7))
                               + (float)((float)((float)(v10 * v6) - (float)(v13 * v5)) * v4));
  *((float *)self + 3) = v8 + v8;
  *((float *)self + 2) = (float)((float)((float)(v11 * v6) + (float)(v7 * v13))
                               + (float)((float)((float)(v5 * v15) - (float)(v12 * v14)) * v4))
                       + (float)((float)((float)(v11 * v6) + (float)(v7 * v13))
                               + (float)((float)((float)(v5 * v15) - (float)(v12 * v14)) * v4));
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkVector4f::setRotatedDir  (binary VA: 0x1568d90)
// Original: hkVector4f::setRotatedDir
// ----------------------------------------------------------------------------
hkVector4f::Self * hkVector4f::setRotatedDir(hkVector4f::Self *self, const hkQuaternionf::Self *a2, const hkVector4f::Self *a3)
{
  float v4; // xmm2_4
  float v5; // xmm5_4
  float v6; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm7_4
  float v9; // xmm6_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;

  v4 = *((float *)a2 + 3);
  v14 = *((float *)a3 + 2);
  v16 = *((float *)a2 + 1);
  v5 = *((float *)a2 + 2);
  v6 = (float)(v4 * v4) - 0.5;
  v15 = *(float *)a2;
  v17 = *(float *)a3;
  v18 = *((float *)a3 + 1);
  v7 = (float)((float)(*(float *)a3 * *(float *)a2) + (float)(v18 * v16)) + (float)(v14 * v5);
  v8 = (float)((float)((float)(*((float *)a3 + 3) * v6) + (float)(v4 * v7)) + (float)(0.0 * v4))
     + (float)((float)((float)(*((float *)a3 + 3) * v6) + (float)(v4 * v7)) + (float)(0.0 * v4));
  v9 = v18 * v6;
  v10 = (float)((float)(*(float *)a3 * v6) + (float)(*(float *)a2 * v7))
      + (float)((float)((float)(v16 * v14) - (float)(v18 * v5)) * v4);
  v11 = v16 * v7;
  v12 = (float)(v6 * v14) + (float)(v7 * v5);
  v13 = v18 * *(float *)a2;
  *(float *)self = v10 + v10;
  *((float *)self + 1) = (float)((float)(v9 + v11) + (float)((float)((float)(v17 * v5) - (float)(v15 * v14)) * v4))
                       + (float)((float)(v9 + v11) + (float)((float)((float)(v17 * v5) - (float)(v15 * v14)) * v4));
  *((float *)self + 2) = (float)(v12 + (float)((float)(v13 - (float)(v17 * v16)) * v4))
                       + (float)(v12 + (float)((float)(v13 - (float)(v17 * v16)) * v4));
  *((float *)self + 3) = v8;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkVector4f::setRotatedInverseDir  (binary VA: 0x1568f10)
// Original: hkVector4f::setRotatedInverseDir
// ----------------------------------------------------------------------------
hkVector4f::Self * hkVector4f::setRotatedInverseDir(hkVector4f::Self *self, const hkQuaternionf::Self *a2, const hkVector4f::Self *a3)
{
  float v4; // xmm2_4
  float v5; // xmm6_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm4_4
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;

  v12 = *((float *)a3 + 2);
  v4 = *((float *)a2 + 3);
  v5 = *(float *)a3;
  v13 = *((float *)a3 + 1);
  v6 = *((float *)a2 + 2);
  v7 = (float)(v4 * v4) - 0.5;
  v14 = *(float *)a2;
  v15 = *((float *)a2 + 1);
  v8 = (float)((float)(*(float *)a3 * *(float *)a2) + (float)(v13 * v15)) + (float)(v12 * v6);
  v11 = (float)((float)(v4 * v8) + (float)(*((float *)a3 + 3) * v7)) + (float)(0.0 * v4);
  v9 = (float)((float)(*(float *)a3 * v7) + (float)(*(float *)a2 * v8))
     + (float)((float)((float)(v13 * v6) - (float)(v15 * v12)) * v4);
  v10 = *(float *)a2 * v12;
  *(float *)self = v9 + v9;
  *((float *)self + 1) = (float)((float)((float)(v13 * v7) + (float)(v15 * v8))
                               + (float)((float)(v10 - (float)(v5 * v6)) * v4))
                       + (float)((float)((float)(v13 * v7) + (float)(v15 * v8))
                               + (float)((float)(v10 - (float)(v5 * v6)) * v4));
  *((float *)self + 3) = v11 + v11;
  *((float *)self + 2) = (float)((float)((float)(v7 * v12) + (float)(v8 * v6))
                               + (float)((float)((float)(v15 * v5) - (float)(v13 * v14)) * v4))
                       + (float)((float)((float)(v7 * v12) + (float)(v8 * v6))
                               + (float)((float)((float)(v15 * v5) - (float)(v13 * v14)) * v4));
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkColor::rgbFromChars  (binary VA: 0x15690a0)
// Original: hkColor::rgbFromChars
// ----------------------------------------------------------------------------
int hkColor::rgbFromChars(hkColor::Self *self, uint8_t a2, uint8_t a3, uint8_t a4)
{
  return a3 + ((a2 + (((uint8_t)(uintptr_t)(self) + (a4 << 8)) << 8)) << 8);
}

// ----------------------------------------------------------------------------
// Function: hkColor::rgbFromFloats  (binary VA: 0x15690d0)
// Original: hkColor::rgbFromFloats
// ----------------------------------------------------------------------------
int hkColor::rgbFromFloats(hkColor::Self *self, unsigned int a2, float a3, unsigned int a4)
{
  __m128i v4;
  __m128i v5;
  __m128i v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  __m128i v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  int v26;
  int v27;
  int v28;
  int v29;
  char v30;
  char v31;
  char v32;
  char v33;
  int v34;
  int v35;
  int v36;
  int v37;
  char v38;
  char v39;
  char v40;
  char v41;
  char v42;
  char v43;
  int v44;

g4_m128_raw(v4) = 0x437F0000u;
g4_m128_raw(v5) = a4;
  *(float *)g4_m128_ptr<int32_t>(v5) = *(float *)&a4 * 255.0;
g4_m128_raw(v6) = (unsigned int)(uintptr_t)(self);
  *(float *)g4_m128_ptr<int32_t>(v6) = *(float *)&self * 255.0;
  v7 = (_mm_cvtsi128_si32(v5) & 0x7F800000u) >> 23;
  v34 = v7 - 127;
  v30 = 23 - (v7 - 127);
  v38 = v7 + 106;
  v8 = (int)(v7 - 151) >> 31;
  v31 = v8 & v30;
  v9 = v8;
  v10 = _mm_cvtsi128_si32(v5) & ~(((_mm_cvtsi128_si32(v5) & 0x7FFFFFFF) - 1) >> 31);
  v11 = -8388608 >> ((v8 & 0x17) - v31);
  v12 = (_mm_cvtsi128_si32(v6) & 0x7F800000u) >> 23;
  v13 = ~v9;
  v27 = (v10 & 0x7FFFFF | 0x800000) & (v13 | v11);
  v14 = v12 - 127;
  v41 = v12 + 106;
  v15 = (int)(v12 - 151) >> 31;
  v32 = v15 & (23 - v14);
  v35 = v14;
  v26 = _mm_cvtsi128_si32(v6) & ~(((_mm_cvtsi128_si32(v6) & 0x7FFFFFFF) - 1) >> 31);
  v42 = v13;
g4_m128_raw(v16) = a2;
  *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)&a2 * 255.0;
  v28 = (v26 & 0x7FFFFF | 0x800000) & (~v15 | (-8388608 >> ((v15 & 0x17) - v32)));
  v43 = ~(uint8_t)v15;
  *(float *)g4_m128_ptr<int32_t>(v4) = 255.0 * a3;
  v17 = (_mm_cvtsi128_si32(v16) & 0x7F800000u) >> 23;
  LOBYTE(v11) = 23 - (v17 - 127);
  v36 = v17 - 127;
  LOBYTE(v14) = v17 + 106;
  v18 = (int)(v17 - 151) >> 31;
  v40 = v14;
  v33 = v18 & v11;
  v19 = _mm_cvtsi128_si32(v16) & ~(((_mm_cvtsi128_si32(v16) & 0x7FFFFFFF) - 1) >> 31);
  v44 = ~v18;
  v20 = -8388608 >> ((v18 & 0x17) - (v18 & v11));
  v21 = (_mm_cvtsi128_si32(v4) & 0x7F800000u) >> 23;
  v29 = (v19 & 0x7FFFFF | 0x800000) & (v44 | v20);
  v39 = v21 + 106;
  v37 = v21 - 127;
  LOBYTE(v14) = 23 - (v21 - 127);
  v22 = (int)(v21 - 151) >> 31;
  v23 = _mm_cvtsi128_si32(v4) & ~(((_mm_cvtsi128_si32(v4) & 0x7FFFFFFF) - 1) >> 31);
  v24 = (v23 & 0x7FFFFF | 0x800000) & (~v22 | (-8388608 >> ((v22 & 0x17) - (v22 & v14))));
  return hkColor::rgbFromChars(
           (hkColor::Self *)(uint8_t)((~(v35 >> 31) & (((v26 >> 31) | (v28 + v28 - 1)) - v28 + 1)) >> v32 << (v43 & v41)),
           (~(v36 >> 31) & (((v19 >> 31) | (v29 + v29 - 1)) - v29 + 1)) >> v33 << (v44 & v40),
           (~(v37 >> 31) & (((v23 >> 31) | (v24 + v24 - 1)) - v24 + 1)) >> (v22 & v14) << (~(uint8_t)v22 & v39),
           (~(v34 >> 31) & (((v10 >> 31) | (v27 + v27 - 1)) - v27 + 1)) >> v31 << (v42 & v38));
}

// ----------------------------------------------------------------------------
// Function: hkColor::rgbFromHSV  (binary VA: 0x1569480)
// Original: hkColor::rgbFromHSV
// ----------------------------------------------------------------------------
int hkColor::rgbFromHSV(hkColor::Self *self, float a2, hkColor::Self *a3, unsigned int a4)
{
  hkColor::Self *v4; // xmm3_4
  float v5; // xmm5_4
  hkColor::Self *v6; // xmm4_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v10;

  v4 = a3;
  if ( a2 == 0.0 )
  {
    v8 = *(float *)&a3;
    v7 = *(float *)&a3;
    v6 = a3;
  }
  else if ( *(float *)&self == 1.0 )
  {
    v7 = (float)(1.0 - a2) * *(float *)&a3;
    v8 = v7;
LABEL_5:
    v6 = v4;
  }
  else
  {
    v10 = floorf(*(float *)&self * 6.0);
    v5 = (float)(*(float *)&self * 6.0) - (float)(int)v10;
    v4 = a3;
    *(float *)&v6 = (float)(1.0 - a2) * *(float *)&a3;
    v7 = (float)(1.0 - (float)(a2 * v5)) * *(float *)&a3;
    v8 = (float)(1.0 - (float)((float)(1.0 - v5) * a2)) * *(float *)&a3;
    switch ( (int)v10 )
    {
      case 0:
        v7 = (float)(1.0 - (float)((float)(1.0 - v5) * a2)) * *(float *)&a3;
        v8 = (float)(1.0 - a2) * *(float *)&a3;
        v6 = a3;
        return hkColor::rgbFromFloats(v6, LODWORD(v7), v8, a4);
      case 1:
        v8 = (float)(1.0 - a2) * *(float *)&a3;
        *(float *)&v6 = (float)(1.0 - (float)(a2 * v5)) * *(float *)&a3;
      case 2:
        v7 = *(float *)&a3;
        return hkColor::rgbFromFloats(v6, LODWORD(v7), v8, a4);
      case 3:
        goto LABEL_8;
      case 4:
        v7 = (float)(1.0 - a2) * *(float *)&a3;
        *(float *)&v6 = (float)(1.0 - (float)((float)(1.0 - v5) * a2)) * *(float *)&a3;
LABEL_8:
        v8 = *(float *)&a3;
        break;
      default:
        v8 = (float)(1.0 - (float)(a2 * v5)) * *(float *)&a3;
        v7 = (float)(1.0 - a2) * *(float *)&a3;
        goto LABEL_5;
    }
  }
  return hkColor::rgbFromFloats(v6, LODWORD(v7), v8, a4);
}

// ----------------------------------------------------------------------------
// Function: hkColor::getRandomColor  (binary VA: 0x1569600)
// Original: hkColor::getRandomColor
// ----------------------------------------------------------------------------
int hkColor::getRandomColor(long double a1, hkColor::Self *self)
{
  float v3;
  float v4;
  float v5;
  float v6;

  hkPseudoRandomGenerator::getRandReal01(self);
  v3 = a1;
  hkPseudoRandomGenerator::getRandReal01(self);
  v4 = a1;
  v6 = v4;
  hkPseudoRandomGenerator::getRandReal01(self);
  v5 = a1;
  return hkColor::rgbFromFloats((hkColor::Self *)(uintptr_t)(COERCE_UNSIGNED_INT(v3 + 0.0)), COERCE_UNSIGNED_INT(v6 + 0.0), v5 + 0.0, 0x3F800000u);
}

// ----------------------------------------------------------------------------
// Function: hkColor::getRandomColor  (binary VA: 0x1569690)
// Original: hkColor::getRandomColor
// ----------------------------------------------------------------------------
int hkColor::getRandomColor(long double a1)
{
  if ( byte_2121420 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2121420) != 0 )
  {
    dword_2121410 = 0;
    dword_2121414 = 0;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_2121420);
  }
  return hkColor::getRandomColor(a1, (hkColor::Self *)&dword_2121410);
}

// ----------------------------------------------------------------------------
// Function: hkColor::getSpectrumColor  (binary VA: 0x15696f0)
// Original: hkColor::getSpectrumColor
// ----------------------------------------------------------------------------
int hkColor::getSpectrumColor(hkColor::Self *self)
{
  float v1; // xmm0_4
  float v2; // xmm2_4
  float v3; // xmm3_4
  float v5; // xmm1_4
  float *v6;
  float *v7;
  g4_int128_t v8[6];

  v8[0] = xmmword_1C7C230;
  v8[1] = xmmword_1C7C280;
  v8[2] = xmmword_1C7CC20;
  v8[3] = xmmword_1C7CC30;
  v8[4] = xmmword_1C7CC40;
  v8[5] = xmmword_1C7C320;
  v1 = 0.0;
  if ( *(float *)&self <= 0.0 )
  {
    v3 = 0.0;
    v2 = 0.0;
  }
  else
  {
    v2 = 1.0;
    v3 = 0.0;
    if ( *(float *)&self < 1.0 )
    {
      v5 = (float)(*(float *)&self * 5.0) - (float)(int)(float)(*(float *)&self * 5.0);
      v6 = (float *)&v8[(int)(float)(*(float *)&self * 5.0) + 1];
      v7 = (float *)&v8[(int)(float)(*(float *)&self * 5.0)];
      v2 = (float)((float)(*v6 - *v7) * v5) + *v7;
      v3 = (float)((float)(v6[1] - v7[1]) * v5) + v7[1];
      v1 = (float)((float)(v6[2] - v7[2]) * v5) + v7[2];
    }
  }
  return hkColor::rgbFromFloats((hkColor::Self *)LODWORD(v2), LODWORD(v3), v1, 0x3F800000u);
}

// ----------------------------------------------------------------------------
// Function: hkColor::getPaletteColor  (binary VA: 0x1569810)
// Original: hkColor::getPaletteColor
// ----------------------------------------------------------------------------
int hkColor::getPaletteColor(hkColor::Self *self, uint8_t a2)
{
  return (a2 << 24) | (&hkColor::s_colorTable)[(uint8_t)(uintptr_t)(self) & 0x1F] & 0xFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkAabbHalf::staticClass  (binary VA: 0x1569850)
// Original: hkAabbHalf::staticClass
// ----------------------------------------------------------------------------
void * hkAabbHalf::staticClass()
{
  return &hkAabbHalfClass;
}

// ----------------------------------------------------------------------------
// Function: hkUFloat8::opAssign  (binary VA: 0x1569940)
// Original: hkUFloat8::operator=
// ----------------------------------------------------------------------------
hkUFloat8::Self * hkUFloat8::opAssign(hkUFloat8::Self *self, const float *a2)
{
  uint16_t EncodedFloat;
  float v3; // xmm0_4
  float v4; // xmm1_4
  int v5;
  int v6;
  int v7;
  uint16_t v8;
  float v9; // xmm0_4
  float v10;
  uint16_t v11;
  float v12; // xmm0_4
  int v14;

  EncodedFloat = hkUFloat8::getEncodedFloat((hkUFloat8::Self *)((char *)&dword_0 + 1));
  v3 = 0.0;
  if ( EncodedFloat != 0 )
    LODWORD(v3) = (EncodedFloat + 243712) << 12;
  v4 = *a2;
  if ( v3 > *a2 )
  {
    *(uint8_t *)self = 0;
    return self;
  }
  else
  {
    v14 = 7;
    v5 = 128;
    v6 = 256;
    v7 = 0;
    while ( 1 )
    {
      v8 = hkUFloat8::getEncodedFloat((hkUFloat8::Self *)(uint8_t)v5);
      v9 = 0.0;
      if ( v8 != 0 )
        LODWORD(v9) = (v8 + 243712) << 12;
      if ( v4 <= v9 )
        v6 = v5;
      else
        v7 = v5;
      v5 = (v6 + v7) >> 1;
      if ( --v14 == 0 )
        break;
      v4 = *a2;
    }
    v10 = *a2;
    v11 = hkUFloat8::getEncodedFloat((hkUFloat8::Self *)(uint8_t)v5);
    v12 = 0.0;
    if ( v11 != 0 )
      LODWORD(v12) = (v11 + 243712) << 12;
    if ( v10 > v12 )
      LOBYTE(v5) = (v5 <= 254) + v5;
    *(uint8_t *)self = v5;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkUFloat8::opAssign  (binary VA: 0x1569a50)
// Original: hkUFloat8::operator=
// ----------------------------------------------------------------------------
hkUFloat8::Self * hkUFloat8::opAssign(hkUFloat8::Self *self, const double *a2)
{
  float v2; // xmm0_4
  float v4[4];

  v2 = *a2;
  v4[0] = v2;
  return hkUFloat8::opAssign(self, v4);
}

// ----------------------------------------------------------------------------
// Function: hkQsTransformf::fastRenormalizeQuaternionBatch  (binary VA: 0x1569a90)
// Original: hkQsTransformf::fastRenormalizeQuaternionBatch
// ----------------------------------------------------------------------------
float * hkQsTransformf::fastRenormalizeQuaternionBatch(hkQsTransformf::Self *self, hkQsTransformf::Self *a2)
{
  char *v2;
  char *v3;
  char *v4;
  int v5;
  float v6; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  int v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  float v14; // xmm4_4
  int v15;
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  int v20;
  float v21; // xmm1_4
  float v22; // xmm0_4
  int v23;
  float v24; // xmm0_4
  float v25; // xmm3_4
  float *result;
  float *v27;
  float v28; // xmm4_4
  __m128i v29;
  float v30; // xmm3_4
  float v31; // xmm2_4
  int v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36;
  int v37;
  int v38;
  hkQsTransformf::Self *v39;
  char *v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  int v56;

  if ( (unsigned int)(uintptr_t)(a2) >> 2 != 0 )
  {
    v38 = 0;
    v39 = self;
    v2 = (char *)self + 160;
    v3 = (char *)self + 112;
    v40 = (char *)self + 64;
    v4 = (char *)self + 16;
    do
    {
      v9 = v39 - self;
g4_m128_raw(v10) = *((unsigned int *)v39 + 40);
      v41 = *(float *)g4_m128_ptr<int32_t>(v10);
      v42 = *((float *)v39 + 41);
      v43 = *((float *)v39 + 42);
      v44 = *((float *)v39 + 43);
g4_m128_raw(v11) = *((unsigned int *)v39 + 28);
      v45 = *((float *)v39 + 28);
      *(float *)g4_m128_ptr<int32_t>(v10) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v10) * *(float *)g4_m128_ptr<int32_t>(v10))
                                              + (float)(v42 * v42))
                                      + (float)(v43 * v43))
                              + (float)(v44 * v44);
      v46 = *((float *)v39 + 29);
      v47 = *((float *)v39 + 30);
      v48 = *((float *)v39 + 31);
      v49 = *((float *)v39 + 16);
      *(float *)g4_m128_ptr<int32_t>(v11) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)g4_m128_ptr<int32_t>(v11))
                                              + (float)(v46 * v46))
                                      + (float)(v47 * v47))
                              + (float)(v48 * v48);
g4_m128_raw(v12) = LODWORD(v49);
      v50 = *((float *)v39 + 17);
      v51 = *((float *)v39 + 18);
      v52 = *((float *)v39 + 19);
      *(float *)g4_m128_ptr<int32_t>(v12) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)g4_m128_ptr<int32_t>(v12))
                                              + (float)(v50 * v50))
                                      + (float)(v51 * v51))
                              + (float)(v52 * v52);
g4_m128_raw(v13) = *((unsigned int *)v39 + 4);
      v53 = *((float *)v39 + 5);
      v54 = *((float *)v39 + 6);
      v55 = *((float *)v39 + 7);
      v36 = 0.0;
      *(float *)g4_m128_ptr<int32_t>(v13) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)g4_m128_ptr<int32_t>(v13))
                                              + (float)(v53 * v53))
                                      + (float)(v54 * v54))
                              + (float)(v55 * v55);
      if ( *(float *)g4_m128_ptr<int32_t>(v13) > 0.0 )
      {
        v14 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v13);
        v15 = ((_mm_cvtsi128_si32(v13) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v13) >> 1));
        v16 = (float)(1.5 * *(float *)&v15)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v13)) * *(float *)&v15)
                    * (float)(*(float *)&v15 * *(float *)&v15));
        v17 = (float)(1.5 * v16) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v13)) * v16) * (float)(v16 * v16));
        v36 = (float)(1.5 * v17) - (float)((float)(v14 * v17) * (float)(v17 * v17));
      }
      v18 = 0.0;
      if ( *(float *)g4_m128_ptr<int32_t>(v12) > 0.0 )
      {
        v19 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v12);
        v20 = ((_mm_cvtsi128_si32(v12) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v12) >> 1));
        v21 = (float)(1.5 * *(float *)&v20)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * *(float *)&v20)
                    * (float)(*(float *)&v20 * *(float *)&v20));
        v18 = (float)(1.5 * (float)((float)(1.5 * v21) - (float)((float)(v19 * v21) * (float)(v21 * v21))))
            - (float)((float)(v19 * (float)((float)(1.5 * v21) - (float)((float)(v19 * v21) * (float)(v21 * v21))))
                    * (float)((float)((float)(1.5 * v21) - (float)((float)(v19 * v21) * (float)(v21 * v21)))
                            * (float)((float)(1.5 * v21) - (float)((float)(v19 * v21) * (float)(v21 * v21)))));
      }
      v22 = 0.0;
      if ( *(float *)g4_m128_ptr<int32_t>(v11) > 0.0 )
      {
        v23 = (_mm_cvtsi128_si32(v11) + 2139095040) >> 31;
        v56 = _mm_cvtsi128_si32(v11) >> 1;
        v24 = (float)(COERCE_FLOAT(v23 & (1597463174 - v56)) * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * COERCE_FLOAT(v23 & (1597463174 - v56)))
                    * (float)(COERCE_FLOAT(v23 & (1597463174 - v56)) * COERCE_FLOAT(v23 & (1597463174 - v56))));
        v25 = (float)(v24 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v24) * (float)(v24 * v24));
        v22 = (float)(1.5 * v25) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v25) * (float)(v25 * v25));
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v10) > 0.0 )
      {
        v5 = ((_mm_cvtsi128_si32(v10) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v10) >> 1));
        v6 = (float)(*(float *)&v5 * 1.5)
           - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * *(float *)&v5)
                   * (float)(*(float *)&v5 * *(float *)&v5));
        v7 = (float)(v6 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * v6) * (float)(v6 * v6));
        v8 = (float)(1.5 * v7) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * v7) * (float)(v7 * v7));
      }
      else
      {
        v8 = 0.0;
      }
      *((float *)v39 + 4) = *((float *)v39 + 4) * v36;
      *(float *)&v4[v9 + 4] = v53 * v36;
      *(float *)&v4[v9 + 8] = v54 * v36;
      *(float *)&v4[v9 + 12] = v55 * v36;
      *(float *)&v40[v9] = v49 * v18;
      *(float *)&v40[v9 + 4] = v50 * v18;
      *(float *)&v40[v9 + 8] = v51 * v18;
      *(float *)&v40[v9 + 12] = v18 * v52;
      *(float *)&v3[v9] = v45 * v22;
      *(float *)&v3[v9 + 4] = v46 * v22;
      *(float *)&v3[v9 + 8] = v47 * v22;
      *(float *)&v3[v9 + 12] = v22 * v48;
      *(float *)&v2[v9] = v41 * v8;
      *(float *)&v2[v9 + 4] = v42 * v8;
      *(float *)&v2[v9 + 8] = v43 * v8;
      *(float *)&v2[v9 + 12] = v8 * v44;
      v39 = (hkQsTransformf::Self *)((char *)v39 + 192);
      ++v38;
    }
    while ( v38 != (unsigned int)(uintptr_t)(a2) >> 2 );
    self = (hkQsTransformf::Self *)((char *)self + 192 * v38);
  }
  result = (float *)((uint8_t)(uintptr_t)(a2) & 3);
  if ( ((uint8_t)(uintptr_t)(a2) & 3) != 0 )
  {
    result = (float *)((char *)self + 16);
    v27 = (float *)((char *)self + 16);
    v37 = 0;
    do
    {
      v28 = result[1];
g4_m128_raw(v29) = *(unsigned int *)result;
      ++v37;
      result += 12;
      v30 = *(result - 10);
      v27 += 12;
      v31 = *(result - 9);
      *(float *)g4_m128_ptr<int32_t>(v29) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v29) * *(float *)g4_m128_ptr<int32_t>(v29))
                                              + (float)(v28 * v28))
                                      + (float)(v30 * v30))
                              + (float)(v31 * v31);
      v32 = ((_mm_cvtsi128_si32(v29) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v29) >> 1));
      v33 = (float)(*(float *)&v32 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * *(float *)&v32)
                  * (float)(*(float *)&v32 * *(float *)&v32));
      v34 = (float)(v33 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * v33) * (float)(v33 * v33));
      v35 = (float)(v34 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * v34) * (float)(v34 * v34));
      *(v27 - 12) = *(result - 12) * v35;
      *(v27 - 11) = v28 * v35;
      *(v27 - 10) = v30 * v35;
      *(v27 - 9) = v31 * v35;
    }
    while ( v37 != ((uint8_t)(uintptr_t)(a2) & 3) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkQsTransformf::fastRenormalizeBatch  (binary VA: 0x156a100)
// Original: hkQsTransformf::fastRenormalizeBatch
// ----------------------------------------------------------------------------
float * hkQsTransformf::fastRenormalizeBatch(hkQsTransformf::Self *self, hkQsTransformf::Self *a2, hkQsTransformf::Self *a3)
{
  hkQsTransformf::Self *v3;
  float *v4;
  float *v5;
  __m128i v6;
  int v7;
  float v8; // xmm2_4
  int v9;
  float v10; // xmm1_4
  float v11; // xmm6_4
  hkQsTransformf::Self *v13;

  if ( a3 != nullptr )
  {
    v3 = self;
    v4 = (float *)((char *)self + 32);
    v13 = a2;
    v5 = (float *)((char *)self + 36);
    do
    {
g4_m128_raw(v6) = *(unsigned int *)v13;
      v7 = _mm_cvtsi128_si32(v6);
      v8 = *(float *)v13;
      v9 = (2130706432 - v7) & ((v7 ^ (v7 + 2139095040)) >> 31);
      v13 = (hkQsTransformf::Self *)((char *)v13 + 4);
      v3 = (hkQsTransformf::Self *)((char *)v3 + 48);
      v4 += 12;
      v5 += 12;
      v10 = (float)(2.0
                  - (float)(*(float *)g4_m128_ptr<int32_t>(v6) * (float)((float)(2.0 - (float)(v8 * *(float *)&v9)) * *(float *)&v9)))
          * (float)((float)(2.0 - (float)(v8 * *(float *)&v9)) * *(float *)&v9);
      v11 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v6) * v10);
      *((float *)v3 - 12) = *((float *)v3 - 12) * (float)(v11 * v10);
      *((float *)v3 - 11) = *((float *)v3 - 11) * (float)(v11 * v10);
      *((float *)v3 - 10) = *((float *)v3 - 10) * (float)(v11 * v10);
      *((float *)v3 - 9) = *((float *)v3 - 9) * (float)(v11 * v10);
      *(v4 - 12) = *(v5 - 13) * (float)(v11 * v10);
      *(v4 - 11) = *(v5 - 12) * (float)(v11 * v10);
      *(v4 - 10) = *(v5 - 11) * (float)(v11 * v10);
      *(v4 - 9) = (float)(v11 * v10) * *(v5 - 10);
    }
    while ( v13 != (hkQsTransformf::Self *)((char *)a2 + 4 * (uint32_t)(uintptr_t)(a3)) );
  }
  return hkQsTransformf::fastRenormalizeQuaternionBatch(self, a3);
}

// ----------------------------------------------------------------------------
// Function: hkQsTransformf::fastRenormalizeBatch_ea156a260  (binary VA: 0x156a260)
// Original: hkQsTransformf::fastRenormalizeBatch
// ----------------------------------------------------------------------------
float * hkQsTransformf::fastRenormalizeBatch_ea156a260(hkQsTransformf::Self *self, hkQsTransformf::Self *a2, hkQsTransformf::Self *a3)
{
  int v3;
  int v4;
  float v5; // xmm1_4
  float v6; // xmm0_4
  hkQsTransformf::Self *v7;
  float *v8;
  float *v9;
  float v10; // xmm1_4

  v3 = _mm_cvtsi128_si32(g4_to_m128i((unsigned int)(uintptr_t)(a2)));
  v4 = (2130706432 - v3) & ((v3 ^ (v3 + 2139095040)) >> 31);
  v5 = (float)(2.0
             - (float)(*(float *)&a2 * (float)((float)(2.0 - (float)(*(float *)&a2 * *(float *)&v4)) * *(float *)&v4)))
     * (float)((float)(2.0 - (float)(*(float *)&a2 * *(float *)&v4)) * *(float *)&v4);
  v6 = (float)(2.0 - (float)(*(float *)&a2 * v5)) * v5;
  if ( a3 != nullptr )
  {
    v7 = self;
    v8 = (float *)((char *)self + 32);
    v9 = (float *)((char *)self + 36);
    do
    {
      v10 = *(float *)v7;
      v7 = (hkQsTransformf::Self *)((char *)v7 + 48);
      v8 += 12;
      v9 += 12;
      *((float *)v7 - 12) = v10 * v6;
      *((float *)v7 - 11) = *((float *)v7 - 11) * v6;
      *((float *)v7 - 10) = *((float *)v7 - 10) * v6;
      *((float *)v7 - 9) = *((float *)v7 - 9) * v6;
      *(v8 - 12) = *(v9 - 13) * v6;
      *(v8 - 11) = *(v9 - 12) * v6;
      *(v8 - 10) = *(v9 - 11) * v6;
      *(v8 - 9) = *(v9 - 10) * v6;
    }
    while ( v7 != (hkQsTransformf::Self *)((char *)self + 48 * (uint32_t)(uintptr_t)(a3)) );
  }
  return hkQsTransformf::fastRenormalizeQuaternionBatch(self, a3);
}

// ----------------------------------------------------------------------------
// Function: hkQsTransformf::get4x4ColumnMajor  (binary VA: 0x156a3a0)
// Original: hkQsTransformf::get4x4ColumnMajor
// ----------------------------------------------------------------------------
float * hkQsTransformf::get4x4ColumnMajor(hkQsTransformf::Self *self, float *a2)
{
  typedef uint8_t _g4_t_v3[48];
  typedef uint32_t _g4_t_v4[12];
  typedef uint8_t _g4_t_v5[48];
  typedef uint32_t _g4_t_v6[19];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v4)) > _g4_s1 ? (48u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (96u + sizeof(_g4_t_v5)) > _g4_s2 ? (96u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (144u + sizeof(_g4_t_v6)) > _g4_s3 ? (144u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 48u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 96u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 144u);

  hkRotationf::set((hkRotationf::Self *)v3, (hkQsTransformf::Self *)((char *)self + 16));
  memset(&v4[1], 0, 16);
  memset(&v4[6], 0, 16);
  v4[11] = 0;
  v4[0] = *((uint32_t *)self + 8);
  v4[5] = *((uint32_t *)self + 9);
  v4[10] = *((uint32_t *)self + 10);
  hkMatrix3f::setMul((hkMatrix3f::Self *)v5, (const hkMatrix3f::Self *)v3, (const hkMatrix3f::Self *)v4);
  std::memcpy(v6, v5, 48);
  v6[12] = *(uint32_t *)self;
  v6[13] = *((uint32_t *)self + 1);
  v6[14] = *((uint32_t *)self + 2);
  v6[15] = *((uint32_t *)self + 3);
  return hkTransformf::get4x4ColumnMajor((hkTransformf::Self *)v6, a2);
}

// ----------------------------------------------------------------------------
// Function: hkQsTransformf::setFromTransformNoScale  (binary VA: 0x156a530)
// Original: hkQsTransformf::setFromTransformNoScale
// ----------------------------------------------------------------------------
int hkQsTransformf::setFromTransformNoScale(hkQsTransformf::Self *self, const hkTransformf::Self *a2)
{
  hkQuaternionf::set((hkQsTransformf::Self *)((char *)self + 16), a2);
  *(uint32_t *)self = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 13);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 15);
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 1065353216;
  *((uint32_t *)self + 11) = 1065353216;
  return 1065353216;
}

// ----------------------------------------------------------------------------
// Function: hkQsTransformf::copyToTransformNoScale  (binary VA: 0x156a5a0)
// Original: hkQsTransformf::copyToTransformNoScale
// ----------------------------------------------------------------------------
int hkQsTransformf::copyToTransformNoScale(hkQsTransformf::Self *self, hkTransformf::Self *a2)
{
  int result;

  hkRotationf::set(a2, (hkQsTransformf::Self *)((char *)self + 16));
  *((uint32_t *)a2 + 12) = *(uint32_t *)self;
  *((uint32_t *)a2 + 13) = *((uint32_t *)self + 1);
  *((uint32_t *)a2 + 14) = *((uint32_t *)self + 2);
  result = *((uint32_t *)self + 3);
  *((uint32_t *)a2 + 15) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkQsTransformf::setFromTransform  (binary VA: 0x156a5f0)
// Original: hkQsTransformf::setFromTransform
// ----------------------------------------------------------------------------
hkQsTransformf::Self * hkQsTransformf::setFromTransform(hkQsTransformf::Self *self, const hkQTransformf::Self *a2)
{
  *((uint32_t *)self + 4) = *(uint32_t *)a2;
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 3);
  *(uint32_t *)self = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 1065353216;
  *((uint32_t *)self + 11) = 1065353216;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkQsTransformf::copyToTransform  (binary VA: 0x156a660)
// Original: hkQsTransformf::copyToTransform
// ----------------------------------------------------------------------------
float * hkQsTransformf::copyToTransform(hkQsTransformf::Self *self, hkTransformf::Self *a2)
{
  return hkQsTransformf::get4x4ColumnMajor(self, (float *)a2);
}

// ----------------------------------------------------------------------------
// Function: hkQsTransformf::isOk  (binary VA: 0x156a690)
// Original: hkQsTransformf::isOk
// ----------------------------------------------------------------------------
int hkQsTransformf::isOk(hkQsTransformf::Self *self, float a2)
{
  bool v2; // si
  bool v3; // di
  int isOk;
  int result;

  v2 = (*(uint32_t *)self & 0x7F800000) != 0x7F800000
    && (*((uint32_t *)self + 1) & 0x7F800000) != 0x7F800000
    && (*((uint32_t *)self + 2) & 0x7F800000) != 2139095040;
  if ( (*((uint32_t *)self + 8) & 0x7F800000) == 0x7F800000 || (*((uint32_t *)self + 9) & 0x7F800000) == 0x7F800000 )
  {
    hkQuaternionf::isOk((hkQsTransformf::Self *)((char *)self + 16), a2);
    return 0;
  }
  v3 = (*((uint32_t *)self + 10) & 0x7F800000) != 2139095040;
  isOk = hkQuaternionf::isOk((hkQsTransformf::Self *)((char *)self + 16), a2);
  if ( !v2 )
    return 0;
  if ( !v3 )
    return 0;
  result = 1;
  if ( isOk == 0 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkQsTransformf::isApproximatelyEqual  (binary VA: 0x156a770)
// Original: hkQsTransformf::isApproximatelyEqual
// ----------------------------------------------------------------------------
bool hkQsTransformf::isApproximatelyEqual(hkQsTransformf::Self *self, const hkQsTransformf::Self *a2, float a3)
{
  __m128i v3;
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm4_4
  float v8; // xmm5_4
  int v9;
  float v11; // xmm1_4
  int v12;
  float v13; // xmm1_4
  int v14;
  float v15;
  float v16;

g4_m128_raw(v3) = *((unsigned int *)self + 4);
  v4 = *((float *)a2 + 5);
  v15 = *(float *)g4_m128_ptr<int32_t>(v3);
  v5 = *((float *)a2 + 6);
  v16 = *((float *)a2 + 4);
  v6 = *((float *)a2 + 7);
  *(float *)g4_m128_ptr<int32_t>(v3) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v3) * v16) + (float)(*((float *)self + 5) * v4))
                                 + (float)(*((float *)self + 6) * v5))
                         + (float)(*((float *)self + 7) * v6);
  if ( _mm_cvtsi128_si32(v3) < 0 )
  {
    v4 = -v4;
    v16 = -v16;
    v5 = -v5;
    v6 = -v6;
  }
  v7 = fabs(*((float *)self + 5) - v4);
  v8 = fabs(*((float *)self + 7) - v6);
  v9 = a3 >= v7 ? 2 : 0;
  if ( a3 >= fabs(*((float *)self + 6) - v5) )
    v9 = a3 < v7 ? 4 : 6;
  if ( a3 < v8 || (v9 | (a3 >= fabs(v15 - v16)) | 8) != 0xF )
    return false;
  v11 = fabs(*((float *)self + 2) - *((float *)a2 + 2));
  LOBYTE(v12) = a3 >= v11 ? 4 : 0;
  if ( a3 >= fabs(*((float *)self + 3) - *((float *)a2 + 3)) )
    v12 = a3 < v11 ? 8 : 12;
  if ( (v12 & 7
      | (a3 >= fabs(*(float *)self - *(float *)a2))
      | (a3 >= fabs(*((float *)self + 1) - *((float *)a2 + 1)) ? 2 : 0)) != 7 )
    return false;
  v13 = fabs(*((float *)self + 10) - *((float *)a2 + 10));
  LOBYTE(v14) = a3 >= v13 ? 4 : 0;
  if ( a3 >= fabs(*((float *)self + 11) - *((float *)a2 + 11)) )
    v14 = a3 < v13 ? 8 : 12;
  return (v14 & 7
        | (a3 >= fabs(*((float *)self + 8) - *((float *)a2 + 8)))
        | (a3 >= fabs(*((float *)self + 9) - *((float *)a2 + 9)) ? 2 : 0)) == 7;
}

// ----------------------------------------------------------------------------
// Function: hkMatrixDecompositionImpl_float_id_8c470d::decomposeMatrix  (binary VA: 0x156a980)
// Original: hkMatrixDecompositionImpl<float>::decomposeMatrix
// ----------------------------------------------------------------------------
int hkMatrixDecompositionImpl_float_id_8c470d::decomposeMatrix(int a1, int *a2)
{
  int *v2;
  uint64_t v3; // rax
  uint64_t v4; // rax
  __m128i v5;
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  __m128i v9;
  float v10; // xmm6_4
  int v11;
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm2_4
  __m128i v16;
  float v17; // xmm6_4
  __m128i v18;
  float v19; // xmm4_4
  int v20;
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm5_4
  __m128i v24;
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm6_4
  __m128 v28;
  __m128 v29;
  unsigned int v30;
  __m128 v31;
  __m128i m128_i128;
  float v33; // xmm5_4
  int v34;
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm6_4
  __m128 v38;
  __m128 v39;
  char v40;
  g4_int128_t v41;
  g4_int128_t v42;
  __m128i v43;
  float v44; // xmm4_4
  __m128i v45;
  float v46; // xmm2_4
  float v47; // xmm6_4
  float v48; // xmm7_4
  float v49; // xmm1_4
  float v50; // xmm1_4
  __m128 v51;
  __m128 v52;
  __m128 v53;
  __m128 v54;
  __m128 v55;
  __m128 v56;
  __m128 v57;
  __m128 v58;
  __m128 v59;
  __m128 v60;
  __m128 v61;
  __m128 v62;
  __m128 v63;
  __m128 v64;
  __m128 v65;
  __m128 v66;
  __m128 v67;
  __m128 v68;
  __m128 v69;
  __m128 v70;
  __m128 v71;
  __m128 v72;
  __m128 v73;
  __m128 v74;
  __m128 v75;
  __m128i v76;
  __m128i v77;
  __m128i v78;
  float v79; // xmm0_4
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86; // xmm4_4
  int v87;
  int v88;
  float v89; // xmm5_4
  int v90; // xmm3_4
  float v91; // xmm3_4
  __m128 v92;
  __m128 v93;
  __m128 v94;
  __m128 v95;
  __m128 v96;
  __m128 v97;
  __m128 v98;
  __m128 v99;
  __m128 v100;
  __m128 v101;
  __m128 v102;
  __m128 v103;
  __m128 v104;
  __m128 v105;
  __m128 v106;
  __m128 v107;
  __m128 v108;
  __m128 v109;
  __m128 v110;
  __m128 v111;
  __m128 v112;
  __m128 v113;
  __m128 v114;
  __m128 v115;
  __m128 v116;
  __m128 v117;
  __m128 v118;
  __m128 v119;
  __m128 v120;
  int v121;
  float v122; // xmm7_4
  int v123;
  int result;
  typedef float _g4_t_v125;
  typedef int32_t _g4_t_v126;
  typedef float _g4_t_v127;
  typedef int32_t _g4_t_v128;
  typedef float _g4_t_v129;
  typedef hkTransformf::Self *_g4_t_v130;
  typedef uint64_t _g4_t_v131 __attribute__((aligned(1)));
  typedef float _g4_t_v132;
  typedef int _g4_t_v133;
  typedef float _g4_t_v134;
  typedef uint64_t _g4_t_v135 __attribute__((aligned(1)));
  typedef float _g4_t_v136;
  typedef float _g4_t_v137;
  typedef uint64_t _g4_t_v138 __attribute__((aligned(1)));
  typedef float _g4_t_v139;
  typedef hkTransformf::Self *_g4_t_v140;
  typedef uint8_t _g4_t_v141[16];
  typedef int _g4_t_v142;
  typedef __m128 _g4_t_v143;
  typedef __m128 _g4_t_v144;
  typedef __m128 _g4_t_v145;
  typedef __m128 _g4_t_v146;
  typedef uint64_t _g4_t_v147;
  typedef int32_t _g4_t_v148;
  typedef int _g4_t_v149;
  typedef uint64_t _g4_t_v150;
  typedef int _g4_t_v151;
  typedef int _g4_t_v152;
  typedef int _g4_t_v153;
  typedef int _g4_t_v154;
  typedef hkTransformf::Self *_g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int32_t _g4_t_v159;
  typedef int32_t _g4_t_v160;
  typedef uint64_t _g4_t_v161[6];
  typedef float _g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef uint32_t _g4_t_v166[12];
  typedef unsigned int _g4_t_v167;
  typedef unsigned int _g4_t_v168;
  typedef unsigned int _g4_t_v169;
  typedef uint64_t _g4_t_v170[6];
  typedef unsigned int _g4_t_v171;
  typedef unsigned int _g4_t_v172;
  typedef unsigned int _g4_t_v173;
  typedef int _g4_t_v174;
  typedef uint64_t _g4_t_v175[6];
  typedef unsigned int _g4_t_v176;
  typedef unsigned int _g4_t_v177;
  typedef unsigned int _g4_t_v178;
  typedef int _g4_t_v179;
  typedef int *_g4_t_v180;
  enum : size_t {
    _g4_s0 = 560u,
    _g4_s1 = (8u + sizeof(_g4_t_v125)) > _g4_s0 ? (8u + sizeof(_g4_t_v125)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v126)) > _g4_s1 ? (12u + sizeof(_g4_t_v126)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v127)) > _g4_s2 ? (12u + sizeof(_g4_t_v127)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v128)) > _g4_s3 ? (20u + sizeof(_g4_t_v128)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v129)) > _g4_s4 ? (20u + sizeof(_g4_t_v129)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v130)) > _g4_s5 ? (24u + sizeof(_g4_t_v130)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v131)) > _g4_s6 ? (28u + sizeof(_g4_t_v131)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v132)) > _g4_s7 ? (28u + sizeof(_g4_t_v132)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v133)) > _g4_s8 ? (32u + sizeof(_g4_t_v133)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v134)) > _g4_s9 ? (32u + sizeof(_g4_t_v134)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v135)) > _g4_s10 ? (36u + sizeof(_g4_t_v135)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v136)) > _g4_s11 ? (36u + sizeof(_g4_t_v136)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v137)) > _g4_s12 ? (40u + sizeof(_g4_t_v137)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v138)) > _g4_s13 ? (44u + sizeof(_g4_t_v138)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v139)) > _g4_s14 ? (52u + sizeof(_g4_t_v139)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v140)) > _g4_s15 ? (56u + sizeof(_g4_t_v140)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v141)) > _g4_s16 ? (60u + sizeof(_g4_t_v141)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v142)) > _g4_s17 ? (76u + sizeof(_g4_t_v142)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v143)) > _g4_s18 ? (80u + sizeof(_g4_t_v143)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v144)) > _g4_s19 ? (96u + sizeof(_g4_t_v144)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v145)) > _g4_s20 ? (112u + sizeof(_g4_t_v145)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v146)) > _g4_s21 ? (128u + sizeof(_g4_t_v146)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v147)) > _g4_s22 ? (144u + sizeof(_g4_t_v147)) : _g4_s22,
    _g4_s24 = (152u + sizeof(_g4_t_v148)) > _g4_s23 ? (152u + sizeof(_g4_t_v148)) : _g4_s23,
    _g4_s25 = (156u + sizeof(_g4_t_v149)) > _g4_s24 ? (156u + sizeof(_g4_t_v149)) : _g4_s24,
    _g4_s26 = (160u + sizeof(_g4_t_v150)) > _g4_s25 ? (160u + sizeof(_g4_t_v150)) : _g4_s25,
    _g4_s27 = (168u + sizeof(_g4_t_v151)) > _g4_s26 ? (168u + sizeof(_g4_t_v151)) : _g4_s26,
    _g4_s28 = (172u + sizeof(_g4_t_v152)) > _g4_s27 ? (172u + sizeof(_g4_t_v152)) : _g4_s27,
    _g4_s29 = (176u + sizeof(_g4_t_v153)) > _g4_s28 ? (176u + sizeof(_g4_t_v153)) : _g4_s28,
    _g4_s30 = (180u + sizeof(_g4_t_v154)) > _g4_s29 ? (180u + sizeof(_g4_t_v154)) : _g4_s29,
    _g4_s31 = (184u + sizeof(_g4_t_v155)) > _g4_s30 ? (184u + sizeof(_g4_t_v155)) : _g4_s30,
    _g4_s32 = (188u + sizeof(_g4_t_v156)) > _g4_s31 ? (188u + sizeof(_g4_t_v156)) : _g4_s31,
    _g4_s33 = (192u + sizeof(_g4_t_v157)) > _g4_s32 ? (192u + sizeof(_g4_t_v157)) : _g4_s32,
    _g4_s34 = (196u + sizeof(_g4_t_v158)) > _g4_s33 ? (196u + sizeof(_g4_t_v158)) : _g4_s33,
    _g4_s35 = (200u + sizeof(_g4_t_v159)) > _g4_s34 ? (200u + sizeof(_g4_t_v159)) : _g4_s34,
    _g4_s36 = (204u + sizeof(_g4_t_v160)) > _g4_s35 ? (204u + sizeof(_g4_t_v160)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v161)) > _g4_s36 ? (208u + sizeof(_g4_t_v161)) : _g4_s36,
    _g4_s38 = (256u + sizeof(_g4_t_v162)) > _g4_s37 ? (256u + sizeof(_g4_t_v162)) : _g4_s37,
    _g4_s39 = (260u + sizeof(_g4_t_v163)) > _g4_s38 ? (260u + sizeof(_g4_t_v163)) : _g4_s38,
    _g4_s40 = (264u + sizeof(_g4_t_v164)) > _g4_s39 ? (264u + sizeof(_g4_t_v164)) : _g4_s39,
    _g4_s41 = (268u + sizeof(_g4_t_v165)) > _g4_s40 ? (268u + sizeof(_g4_t_v165)) : _g4_s40,
    _g4_s42 = (272u + sizeof(_g4_t_v166)) > _g4_s41 ? (272u + sizeof(_g4_t_v166)) : _g4_s41,
    _g4_s43 = (320u + sizeof(_g4_t_v167)) > _g4_s42 ? (320u + sizeof(_g4_t_v167)) : _g4_s42,
    _g4_s44 = (324u + sizeof(_g4_t_v168)) > _g4_s43 ? (324u + sizeof(_g4_t_v168)) : _g4_s43,
    _g4_s45 = (328u + sizeof(_g4_t_v169)) > _g4_s44 ? (328u + sizeof(_g4_t_v169)) : _g4_s44,
    _g4_s46 = (336u + sizeof(_g4_t_v170)) > _g4_s45 ? (336u + sizeof(_g4_t_v170)) : _g4_s45,
    _g4_s47 = (384u + sizeof(_g4_t_v171)) > _g4_s46 ? (384u + sizeof(_g4_t_v171)) : _g4_s46,
    _g4_s48 = (388u + sizeof(_g4_t_v172)) > _g4_s47 ? (388u + sizeof(_g4_t_v172)) : _g4_s47,
    _g4_s49 = (392u + sizeof(_g4_t_v173)) > _g4_s48 ? (392u + sizeof(_g4_t_v173)) : _g4_s48,
    _g4_s50 = (396u + sizeof(_g4_t_v174)) > _g4_s49 ? (396u + sizeof(_g4_t_v174)) : _g4_s49,
    _g4_s51 = (400u + sizeof(_g4_t_v175)) > _g4_s50 ? (400u + sizeof(_g4_t_v175)) : _g4_s50,
    _g4_s52 = (448u + sizeof(_g4_t_v176)) > _g4_s51 ? (448u + sizeof(_g4_t_v176)) : _g4_s51,
    _g4_s53 = (452u + sizeof(_g4_t_v177)) > _g4_s52 ? (452u + sizeof(_g4_t_v177)) : _g4_s52,
    _g4_s54 = (456u + sizeof(_g4_t_v178)) > _g4_s53 ? (456u + sizeof(_g4_t_v178)) : _g4_s53,
    _g4_s55 = (460u + sizeof(_g4_t_v179)) > _g4_s54 ? (460u + sizeof(_g4_t_v179)) : _g4_s54,
    _g4_s56 = (472u + sizeof(_g4_t_v180)) > _g4_s55 ? (472u + sizeof(_g4_t_v180)) : _g4_s55
  };
  alignas(16) uint8_t _g4_sf[_g4_s56];
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 8u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 12u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 12u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 20u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 20u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 24u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 28u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 28u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 32u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 32u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 36u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 36u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 40u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 44u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 52u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 56u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 60u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 76u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 80u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 96u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 112u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 128u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 144u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 152u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 156u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 160u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 168u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 172u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 176u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 180u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 184u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 188u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 192u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 196u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 200u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 204u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 208u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 256u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 260u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 264u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 268u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 272u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 320u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 324u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 328u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 336u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 384u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 388u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 392u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 396u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 400u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 448u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 452u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 456u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 460u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 472u);

  v180 = &a1;
  v2 = a2;
  HIDWORD(v3) = *(uint32_t *)(a1 + 8);
g4_m128_lane<int32_t>(v143, 0) = *(uint32_t *)a1;
  LODWORD(v3) = *(uint32_t *)(a1 + 4);
  v140 = (hkTransformf::Self *)v3;
  *(uint64_t *)((char *)g4_m128_ptr<uint64_t>(v143) + 4) = v3;
g4_m128_lane<uint64_t>(v144, 0) = *(uint64_t *)(a1 + 16);
  v4 =g4_m128_lane<uint64_t>(v144, 0);
  v138 =g4_m128_lane<uint64_t>(v144, 0);
  LODWORD(v4) = *(uint32_t *)(a1 + 24);
  v135 = v4;
  HIDWORD(v4) = *(uint32_t *)(a1 + 32);
g4_m128_lane<uint64_t>(v144, 1) = (unsigned int)v4;
  LODWORD(v4) = *(uint32_t *)(a1 + 36);
g4_m128_lane<int32_t>(v145, 0) = HIDWORD(v4);
  v131 = v4;
  HIDWORD(v4) = *(uint32_t *)(a1 + 40);
  *(uint64_t *)((char *)g4_m128_ptr<uint64_t>(v145) + 4) = v4;
  v130 = (hkTransformf::Self *)HIDWORD(v4);
  LODWORD(v4) = *(uint32_t *)(a1 + 52);
  HIDWORD(v4) = *(uint32_t *)(a1 + 48);
g4_m128_lane<int32_t>(v146, 2) = *(uint32_t *)(a1 + 56);
  v128 =g4_m128_lane<int32_t>(v146, 2);
  v126 =g4_m128_lane<int32_t>(v143, 0);
  v147 =g4_m128_lane<uint64_t>(v143, 0);
  v148 =g4_m128_lane<int32_t>(v144, 1);
  v150 =g4_m128_lane<uint64_t>(v144, 0);
  v151 = v135;
g4_m128_lane<uint64_t>(v146, 0) = __PAIR64__(v4, HIDWORD(v4));
g4_m128_lane<int32_t>(v143, 3) = 0;
g4_m128_lane<int32_t>(v145, 3) = 0;
  v149 = 0;
g4_m128_lane<int32_t>(v146, 3) = 1065353216;
  v152 = 0;
  v153 = HIDWORD(v131);
  a2[1] = v4;
  v158 = v4;
  v166[0] = v126;
  *v2 = HIDWORD(v4);
  v157 = HIDWORD(v4);
  v159 = v128;
  *(uint64_t *)&v166[1] = __PAIR64__(HIDWORD(v138), (unsigned int)(uintptr_t)(v140));
  v154 = v131;
  v160 =g4_m128_lane<int32_t>(v146, 3);
  v166[4] = v138;
  v2[2] = v128;
  v155 = v130;
  *(uint64_t *)&v166[5] = __PAIR64__(v135, HIDWORD(v135));
  v2[3] =g4_m128_lane<int32_t>(v146, 3);
  v156 = 0;
  *(uint64_t *)&v166[8] = __PAIR64__(v131, HIDWORD(v131));
  v166[3] = 0;
  v166[7] = 0;
  *(uint64_t *)&v166[10] = (unsigned int)(uintptr_t)(v130);
  v133 = 30;
  do
  {
    std::memcpy(v161, v166, sizeof(v161));
    std::memcpy(v170, v166, sizeof(v170));
    hkMatrix3f::invert((hkMatrix3f::Self *)v141, COERCE_FLOAT(v170));
    hkMatrix3f::transpose((hkMatrix3f::Self *)v170);
    std::memcpy(v175, v161, sizeof(v175));
    hkMatrix3f::add((hkMatrix3f::Self *)v175, (const hkMatrix3f::Self *)v170);
    v142 = 1056964608;
    hkMatrix3f::setMul(v166, &v142, v175);
    --v133;
  }
  while ( v133 != 0
       && (uint8_t)hkMatrix3f::isApproximatelyEqual(
                             (hkMatrix3f::Self *)v166,
                             (const hkMatrix3f::Self *)v161,
                             0.00000011920929f) == 0 );
  v2[44] = v166[0];
g4_m128_raw(v5) = (unsigned int)v2[44];
  v2[45] = v166[1];
  v6 = *((float *)v2 + 45);
  v9 = v5;
  v2[46] = v166[2];
  v7 = *((float *)v2 + 46);
  v2[47] = v166[3];
  v8 = *((float *)v2 + 47);
  *((g4_int128_t *)v2 + 12) = *(g4_int128_t *)&v166[4];
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v5) * *(float *)g4_m128_ptr<int32_t>(v5)) + (float)(v6 * v6))
                         + (float)(v7 * v7);
  *((g4_int128_t *)v2 + 13) = *(g4_int128_t *)&v166[8];
  if ( *(float *)g4_m128_ptr<int32_t>(v9) <= 0.0 )
  {
    v14 = 0.0;
  }
  else
  {
    v10 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v9);
    v11 = ((_mm_cvtsi128_si32(v9) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v9) >> 1));
    v12 = (float)(1.5 * *(float *)&v11)
        - (float)((float)(*(float *)&v11 * *(float *)&v11)
                * (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * *(float *)&v11));
    v13 = (float)(1.5 * v12) - (float)((float)(v12 * v12) * (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * v12));
    v14 = (float)(1.5 * v13) - (float)((float)(v10 * v13) * (float)(v13 * v13));
  }
  v134 = *(float *)g4_m128_ptr<int32_t>(v5) * v14;
  v129 = v7 * v14;
  v15 = *((float *)v2 + 49);
  v125 = v8 * v14;
g4_m128_raw(v16) = (unsigned int)v2[48];
  v132 = v6 * v14;
  v18 = v16;
  v17 = *((float *)v2 + 50);
  *(float *)g4_m128_ptr<int32_t>(v18) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)) + (float)(v15 * v15))
                          + (float)(v17 * v17);
  if ( *(float *)g4_m128_ptr<int32_t>(v18) <= 0.0 )
  {
g4_m128_raw(v24) = 0;
  }
  else
  {
    v19 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v18);
    v20 = ((_mm_cvtsi128_si32(v18) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v18) >> 1));
    v21 = (float)(1.5 * *(float *)&v20)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v18)) * *(float *)&v20)
                * (float)(*(float *)&v20 * *(float *)&v20));
    v22 = 1.5 * v21;
    v23 = (float)(v19 * v21) * (float)(v21 * v21);
g4_m128_raw(v24) = 0x3FC00000u;
    *(float *)g4_m128_ptr<int32_t>(v24) = (float)(1.5 * (float)(v22 - v23))
                            - (float)((float)(v19 * (float)(v22 - v23))
                                    * (float)((float)(v22 - v23) * (float)(v22 - v23)));
  }
  v25 = *(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v24);
  v26 = v15 * *(float *)g4_m128_ptr<int32_t>(v24);
  v27 = v17 * *(float *)g4_m128_ptr<int32_t>(v24);
  *(float *)g4_m128_ptr<int32_t>(v24) = *(float *)g4_m128_ptr<int32_t>(v24) * *((float *)v2 + 51);
g4_m128_raw(v28) = (unsigned int)v2[52];
  v137 = v25;
  m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v28));
g4_m128_raw(v29) = (unsigned int)v2[53];
  v30 = _mm_cvtsi128_si32(v24);
  v136 = v26;
g4_m128_raw(v31) = (unsigned int)v2[54];
  v127 = v27;
  *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)((float)(g4_m128_lane<float>(v28, 0) *g4_m128_lane<float>(v28, 0))
                                        + (float)(g4_m128_lane<float>(v29, 0) *g4_m128_lane<float>(v29, 0)))
                                + (float)(g4_m128_lane<float>(v31, 0) *g4_m128_lane<float>(v31, 0));
  if ( *(float *)g4_m128_ptr<int32_t>(m128_i128) <= 0.0 )
  {
g4_m128_raw(v38) = 0;
  }
  else
  {
    v33 = 0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128);
    v34 = ((_mm_cvtsi128_si32(m128_i128) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(m128_i128) >> 1));
    v35 = (float)(1.5 * *(float *)&v34)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * *(float *)&v34)
                * (float)(*(float *)&v34 * *(float *)&v34));
    v36 = 1.5 * v35;
    v37 = (float)(v33 * v35) * (float)(v35 * v35);
g4_m128_raw(v38) = 0x3FC00000u;
g4_m128_lane<float>(v38, 0) = (float)(1.5 * (float)(v36 - v37))
                    - (float)((float)(v33 * (float)(v36 - v37)) * (float)((float)(v36 - v37) * (float)(v36 - v37)));
  }
g4_m128_lane<float>(v29, 0) =g4_m128_lane<float>(v29, 0) *g4_m128_lane<float>(v38, 0);
g4_m128_lane<float>(v31, 0) =g4_m128_lane<float>(v31, 0) *g4_m128_lane<float>(v38, 0);
g4_m128_lane<float>(v28, 0) =g4_m128_lane<float>(v28, 0) *g4_m128_lane<float>(v38, 0);
g4_m128_lane<float>(v38, 0) =g4_m128_lane<float>(v38, 0) * *((float *)v2 + 55);
  if ( (float)((float)((float)((float)((float)(v136 *g4_m128_lane<float>(v31, 0)) - (float)(v127 *g4_m128_lane<float>(v29, 0))) * v134)
                     + (float)((float)((float)(v127 *g4_m128_lane<float>(v28, 0)) - (float)(v137 *g4_m128_lane<float>(v31, 0))) * v132))
             + (float)((float)((float)(v137 *g4_m128_lane<float>(v29, 0)) - (float)(v136 *g4_m128_lane<float>(v28, 0))) * v129)) < 0.0 )
  {
    v40 = 1;
    v134 = -v134;
    v132 = -v132;
    v129 = -v129;
    v39 = _mm_xor_ps(g4_m128_from<__m128>(LODWORD(v125)), g4_m128_from<__m128>(0x80000000));
  }
  else
  {
g4_m128_raw(v39) = LODWORD(v125);
    v40 = 0;
  }
  *((uint8_t *)v2 + 226) = v40;
  *(uint64_t *)&v41 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v134)), g4_m128_from<__m128>(LODWORD(v132))), 0);
  *((uint64_t *)&v41 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v129)), v39), 0);
  *(g4_int128_t *)v175 = v41;
  *(uint64_t *)&v41 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v137)), g4_m128_from<__m128>(LODWORD(v136))), 0);
  *((uint64_t *)&v41 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v127)), g4_m128_from<__m128>(_mm_cvtsi32_si128(v30))), 0);
  *(g4_int128_t *)&v175[2] = v41;
  *(uint64_t *)&v42 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v28, v29), 0);
  *((uint64_t *)&v42 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v31, v38), 0);
  *(g4_int128_t *)&v175[4] = v42;
  hkQuaternionf::set((hkQuaternionf::Self *)(v2 + 4), (const hkRotationf::Self *)v175);
g4_m128_raw(v43) = (unsigned int)v2[4];
  v44 = *((float *)v2 + 5);
  v45 = v43;
  LODWORD(v42) = v2[6];
  v46 = *((float *)v2 + 7);
  *(float *)g4_m128_ptr<int32_t>(v45) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v43) * *(float *)g4_m128_ptr<int32_t>(v43))
                                          + (float)(v44 * v44))
                                  + (float)(*(float *)&v42 * *(float *)&v42))
                          + (float)(v46 * v46);
  v47 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v45);
  v48 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v45);
g4_m128_lane<int32_t>(v45, 0) = ((_mm_cvtsi128_si32(v45) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v45) >> 1));
  v49 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v45))
      - (float)((float)(v48 * *(float *)g4_m128_ptr<int32_t>(v45)) * (float)(*(float *)g4_m128_ptr<int32_t>(v45) * *(float *)g4_m128_ptr<int32_t>(v45)));
  v50 = (float)(1.5 * (float)((float)(1.5 * v49) - (float)((float)(v47 * v49) * (float)(v49 * v49))))
      - (float)((float)(v47 * (float)((float)(1.5 * v49) - (float)((float)(v47 * v49) * (float)(v49 * v49))))
              * (float)((float)((float)(1.5 * v49) - (float)((float)(v47 * v49) * (float)(v49 * v49)))
                      * (float)((float)(1.5 * v49) - (float)((float)(v47 * v49) * (float)(v49 * v49)))));
  *((float *)v2 + 4) = *(float *)g4_m128_ptr<int32_t>(v43) * v50;
  *((float *)v2 + 5) = v44 * v50;
  *((float *)v2 + 6) = *(float *)&v42 * v50;
  *((float *)v2 + 7) = v46 * v50;
  hkRotationf::set((hkRotationf::Self *)v161, (const hkQuaternionf::Self *)(v2 + 4));
  v162 = *(float *)v2;
  v163 = v2[1];
  v164 = v2[2];
  v165 = v2[3];
  hkTransformf::setInverse((hkTransformf::Self *)v166, (const hkTransformf::Self *)v161);
  v170[2] = *(uint64_t *)&v166[4];
  v170[3] = v166[6];
  v170[4] = *(uint64_t *)&v166[8];
  v170[5] = v166[10];
  v170[0] = *(uint64_t *)v166;
  v171 = v167;
  v175[0] = *(uint64_t *)v166;
  v172 = v168;
  v170[1] = v166[2];
  v174 = 1065353216;
  v173 = v169;
  v175[1] = v166[2];
  v178 = v169;
  v175[2] = *(uint64_t *)&v166[4];
  v175[3] = v166[6];
  v175[4] = *(uint64_t *)&v166[8];
  v179 = 1065353216;
  v175[5] = v166[10];
  v176 = v167;
  v177 = v168;
  hkMatrix4f::transpose((hkMatrix4f::Self *)v175);
  v51 = _mm_shuffle_ps(v143, v144, 221);
  v52 = _mm_shuffle_ps(v143, v144, 136);
  v53 = _mm_shuffle_ps(v145, v146, 221);
  v54 = _mm_shuffle_ps(v145, v146, 136);
  v55 = _mm_shuffle_ps(v51, v53, 136);
  v56 = _mm_shuffle_ps(v51, v53, 221);
  v57 = _mm_shuffle_ps(v52, v54, 136);
  v58 = _mm_shuffle_ps(v52, v54, 221);
  v59 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v175[0])), g4_m128_from<__m128>(LODWORD(v175[0])), 0), v57),
              _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(HIDWORD(v175[0])), g4_m128_from<__m128>(HIDWORD(v175[0])), 0), v55)),
            _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v175[1])), g4_m128_from<__m128>(LODWORD(v175[1])), 0), v58)),
          _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(HIDWORD(v175[1])), g4_m128_from<__m128>(HIDWORD(v175[1])), 0), v56));
  v60 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v175[2])), g4_m128_from<__m128>(LODWORD(v175[2])), 0), v57),
              _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(HIDWORD(v175[2])), g4_m128_from<__m128>(HIDWORD(v175[2])), 0), v55)),
            _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v175[3])), g4_m128_from<__m128>(LODWORD(v175[3])), 0), v58)),
          _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(HIDWORD(v175[3])), g4_m128_from<__m128>(HIDWORD(v175[3])), 0), v56));
  v61 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v175[4])), g4_m128_from<__m128>(LODWORD(v175[4])), 0), v57),
              _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(HIDWORD(v175[4])), g4_m128_from<__m128>(HIDWORD(v175[4])), 0), v55)),
            _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v175[5])), g4_m128_from<__m128>(LODWORD(v175[5])), 0), v58)),
          _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(HIDWORD(v175[5])), g4_m128_from<__m128>(HIDWORD(v175[5])), 0), v56));
  v62 = _mm_mul_ps(_mm_shuffle_ps(G4_BITCAST<__m128>(v176), G4_BITCAST<__m128>(v176), 0), v57);
  v63 = _mm_mul_ps(_mm_shuffle_ps(G4_BITCAST<__m128>(v177), G4_BITCAST<__m128>(v177), 0), v55);
  v64 = _mm_mul_ps(_mm_shuffle_ps(G4_BITCAST<__m128>(v178), G4_BITCAST<__m128>(v178), 0), v58);
  v65 = _mm_mul_ps(_mm_shuffle_ps(g4_to_m128((unsigned int)v179), g4_to_m128((unsigned int)v179), 0), v56);
  v66 = _mm_unpacklo_ps(v59, v61);
  v67 = _mm_unpackhi_ps(v59, v61);
  v68 = _mm_add_ps(_mm_add_ps(_mm_add_ps(v62, v63), v64), v65);
  v69 = _mm_unpacklo_ps(v60, v68);
  v70 = _mm_unpackhi_ps(v60, v68);
  v71 = v66;
  v72 = _mm_unpackhi_ps(v66, v69);
  _mm_storel_ps((double *)v2 + 8, v72);
  v73 = _mm_unpacklo_ps(v71, v69);
  _mm_storel_ps((double *)v2 + 6, v73);
  _mm_storeh_ps((double *)v2 + 7, v73);
  v74 = _mm_unpacklo_ps(v67, v70);
  v75 = _mm_unpackhi_ps(v67, v70);
  _mm_storeh_ps((double *)v2 + 11, v74);
g4_m128_raw(v76) = (unsigned int)v2[22];
g4_m128_raw(v77) = (unsigned int)v2[12];
  _mm_storel_ps((double *)v2 + 10, v74);
  _mm_storel_ps((double *)v2 + 12, v75);
  _mm_storeh_ps((double *)v2 + 13, v75);
  _mm_storeh_ps((double *)v2 + 9, v72);
g4_m128_raw(v78) = (unsigned int)v2[17];
  v2[8] =g4_m128_lane<int32_t>(v77, 0);
  HIDWORD(v175[0]) = 0;
  v2[11] = 1065353216;
  memset(&v175[1], 0, 12);
  v79 = fabs(*(float *)g4_m128_ptr<int32_t>(v76) - 1.0);
  v2[9] =g4_m128_lane<int32_t>(v78, 0);
  LODWORD(v175[3]) = 0;
  v2[10] =g4_m128_lane<int32_t>(v76, 0);
  HIDWORD(v175[3]) = 0;
  v175[4] = 0;
  HIDWORD(v175[5]) = 0;
  v176 = 0;
  v177 = 0;
  v178 = 0;
  v80 = (fabs(*(float *)g4_m128_ptr<int32_t>(v77) - 1.0) <= 0.001f) | (fabs(*(float *)g4_m128_ptr<int32_t>(v78) - 1.0) <= 0.001f ? 2 : 0);
  v81 = v79 > 0.001f ? 0 : 4;
  if ( fabs(1.0 - 1.0) <= 0.001f )
    v81 = v79 > 0.001f ? 8 : 12;
  v82 = _mm_cvtsi128_si32(v77);
  *((uint8_t *)v2 + 224) = (v81 | v80) != 15;
  v83 = 2130706432 - v82;
  v84 = (v82 ^ (v82 + 2139095040)) >> 31;
  v85 = _mm_cvtsi128_si32(v78);
  v86 = v83 & v84;
  v87 = (2130706432 - v85) & ((v85 ^ (v85 + 2139095040)) >> 31);
  v88 = _mm_cvtsi128_si32(v76);
  v89 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v77)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v77) * *(float *)&v86)) * *(float *)&v86)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v77) * *(float *)&v86)) * *(float *)&v86);
  v139 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v78) * *(float *)&v87)) * *(float *)&v87)
       * (float)(2.0
               - (float)(*(float *)g4_m128_ptr<int32_t>(v78)
                       * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v78) * *(float *)&v87)) * *(float *)&v87)));
  v90 = (2130706432 - v88) & ((v88 ^ (v88 + 2139095040)) >> 31);
  v91 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v76)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v76) * *(float *)&v90)) * *(float *)&v90)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v76) * *(float *)&v90)) * *(float *)&v90);
  *(float *)v175 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v77) * v89)) * v89;
  v179 = 1065353216;
  *((float *)&v175[2] + 1) = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v78) * v139)) * v139;
  *(float *)&v175[5] = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v76) * v91)) * v91;
  hkMatrix4f::transpose((hkMatrix4f::Self *)v175);
  v92 = _mm_loadh_ps((const double *)v2 + 7);
  v93 = _mm_loadh_ps((const double *)v2 + 9);
  v94 = _mm_loadh_ps((const double *)v2 + 11);
  v95 = _mm_loadh_ps((const double *)v2 + 13);
  v96 = _mm_shuffle_ps(v92, v93, 136);
  v97 = _mm_shuffle_ps(v92, v93, 221);
  v98 = _mm_shuffle_ps(v94, v95, 136);
  v99 = _mm_shuffle_ps(v94, v95, 221);
  v100 = _mm_shuffle_ps(v96, v98, 136);
  v101 = _mm_shuffle_ps(v97, v99, 136);
  v102 = _mm_shuffle_ps(v96, v98, 221);
  v103 = _mm_shuffle_ps(v97, v99, 221);
  v104 = _mm_add_ps(
           _mm_add_ps(
             _mm_add_ps(
               _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v175[0])), g4_m128_from<__m128>(LODWORD(v175[0])), 0), v100),
               _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(HIDWORD(v175[0])), g4_m128_from<__m128>(HIDWORD(v175[0])), 0), v101)),
             _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v175[1])), g4_m128_from<__m128>(LODWORD(v175[1])), 0), v102)),
           _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(HIDWORD(v175[1])), g4_m128_from<__m128>(HIDWORD(v175[1])), 0), v103));
  v105 = _mm_add_ps(
           _mm_add_ps(
             _mm_add_ps(
               _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v175[2])), g4_m128_from<__m128>(LODWORD(v175[2])), 0), v100),
               _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(HIDWORD(v175[2])), g4_m128_from<__m128>(HIDWORD(v175[2])), 0), v101)),
             _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v175[3])), g4_m128_from<__m128>(LODWORD(v175[3])), 0), v102)),
           _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(HIDWORD(v175[3])), g4_m128_from<__m128>(HIDWORD(v175[3])), 0), v103));
  v106 = _mm_add_ps(
           _mm_add_ps(
             _mm_add_ps(
               _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v175[4])), g4_m128_from<__m128>(LODWORD(v175[4])), 0), v100),
               _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(HIDWORD(v175[4])), g4_m128_from<__m128>(HIDWORD(v175[4])), 0), v101)),
             _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v175[5])), g4_m128_from<__m128>(LODWORD(v175[5])), 0), v102)),
           _mm_mul_ps(_mm_shuffle_ps(g4_m128_from<__m128>(HIDWORD(v175[5])), g4_m128_from<__m128>(HIDWORD(v175[5])), 0), v103));
  v107 = _mm_mul_ps(_mm_shuffle_ps(G4_BITCAST<__m128>(v176), G4_BITCAST<__m128>(v176), 0), v100);
  v108 = _mm_mul_ps(_mm_shuffle_ps(G4_BITCAST<__m128>(v177), G4_BITCAST<__m128>(v177), 0), v101);
  v109 = _mm_mul_ps(_mm_shuffle_ps(G4_BITCAST<__m128>(v178), G4_BITCAST<__m128>(v178), 0), v102);
  v110 = _mm_mul_ps(_mm_shuffle_ps(g4_to_m128((unsigned int)v179), g4_to_m128((unsigned int)v179), 0), v103);
  v111 = _mm_unpacklo_ps(v104, v106);
  v112 = _mm_unpackhi_ps(v104, v106);
  v113 = _mm_add_ps(_mm_add_ps(_mm_add_ps(v107, v108), v109), v110);
  v114 = _mm_unpacklo_ps(v105, v113);
  v115 = _mm_unpackhi_ps(v105, v113);
  v116 = v111;
  v117 = _mm_unpackhi_ps(v111, v114);
  _mm_storel_ps((double *)v2 + 16, v117);
  v118 = _mm_unpacklo_ps(v116, v114);
  _mm_storel_ps((double *)v2 + 14, v118);
  _mm_storeh_ps((double *)v2 + 15, v118);
  v119 = _mm_unpacklo_ps(v112, v115);
  v120 = _mm_unpackhi_ps(v112, v115);
  _mm_storel_ps((double *)v2 + 18, v119);
  _mm_storeh_ps((double *)v2 + 19, v119);
g4_m128_lane<float>(v119, 0) = *((float *)v2 + 28) - 1.0;
  _mm_storeh_ps((double *)v2 + 17, v117);
  _mm_storel_ps((double *)v2 + 20, v120);
  _mm_storeh_ps((double *)v2 + 21, v120);
  v121 = (fmaxf(
            fmaxf(fabs(g4_m128_lane<float>(v119, 0)), fabs(*((float *)v2 + 32) - 0.0)),
            fmaxf(fabs(*((float *)v2 + 36) - 0.0), fabs(*((float *)v2 + 40) - 0.0))) <= 0.001f)
       | (fmaxf(
            fmaxf(fabs(*((float *)v2 + 29) - 0.0), fabs(*((float *)v2 + 33) - 1.0)),
            fmaxf(fabs(*((float *)v2 + 37) - 0.0), fabs(*((float *)v2 + 41) - 0.0))) <= 0.001f
        ? 2
        : 0);
  v122 = fmaxf(
           fmaxf(fabs(*((float *)v2 + 30) - 0.0), fabs(*((float *)v2 + 34) - 0.0)),
           fmaxf(fabs(*((float *)v2 + 38) - 1.0), fabs(*((float *)v2 + 42) - 0.0)));
  v123 = v122 <= 0.001f ? 4 : 0;
  if ( fmaxf(
         fmaxf(fabs(*((float *)v2 + 31) - 0.0), fabs(*((float *)v2 + 35) - 0.0)),
         fmaxf(fabs(*((float *)v2 + 39) - 0.0), fabs(*((float *)v2 + 43) - 1.0))) <= 0.001f )
    v123 = v122 > 0.001f ? 8 : 12;
  result = v123 | v121;
  *((uint8_t *)v2 + 225) = result != 15;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkQsTransformf::set4x4ColumnMajor  (binary VA: 0x156be80)
// Original: hkQsTransformf::set4x4ColumnMajor
// ----------------------------------------------------------------------------
bool hkQsTransformf::set4x4ColumnMajor(hkQsTransformf::Self *self, float *a2)
{
  bool v2;
  typedef uint8_t _g4_t_v4[64];
  typedef int _g4_t_v5[63];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v5)) > _g4_s1 ? (64u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 64u);

  hkMatrix4f::set4x4ColumnMajor((hkMatrix4f::Self *)v4, a2);
  hkMatrixDecompositionImpl_float_id_8c470d::decomposeMatrix((int)(uintptr_t)(v4), v5);
  v2 = BYTE1(v5[56]) == 0;
  std::memcpy(self, v5, 48);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkQsTransformf::setFromTransform  (binary VA: 0x156bf30)
// Original: hkQsTransformf::setFromTransform
// ----------------------------------------------------------------------------
bool hkQsTransformf::setFromTransform(hkQsTransformf::Self *self, const hkTransformf::Self *a2)
{
  return hkQsTransformf::set4x4ColumnMajor(self, (float *)a2);
}

// ----------------------------------------------------------------------------
// Function: hkQsTransformf::set  (binary VA: 0x156bf60)
// Original: hkQsTransformf::set
// ----------------------------------------------------------------------------
bool hkQsTransformf::set(hkQsTransformf::Self *self, const hkMatrix4f::Self *a2)
{
  bool v2;
  int v4[62];

  hkMatrixDecompositionImpl_float_id_8c470d::decomposeMatrix((int)(uintptr_t)(a2), v4);
  v2 = BYTE1(v4[56]) == 0;
  std::memcpy(self, v4, 48);
  return v2;
}



// ============================================================================
// Address:   0x156c030 (size: 361 bytes)
// Symbol:    _ZN17hkCriticalSectionC2Ei
// Demangled: hkCriticalSection::Construct(int)
// ============================================================================
// Alternative name is '_ZN17hkCriticalSectionC1Ei'
struct hkCriticalSection *hkCriticalSection::Construct(pthread_mutex_t *mutex, unsigned int a2)
{
  struct hkCriticalSection *result;
  typedef pthread_mutexattr_t _g4_t_attr;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_attr)) > _g4_s0 ? (0u + sizeof(_g4_t_attr)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_attr &attr = *reinterpret_cast<_g4_t_attr *>(_g4_sf + 0u);

  ((int32_t *)(mutex))[1] = a2;
  if ( pthread_mutexattr_init(&attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      16,
      "hkCriticalSection");
    perror("pthread_mutexattr_init(&attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_settype(&attr, 1) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      17,
      "hkCriticalSection");
    perror("pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE)");
    __builtin_debugtrap();
  }
  if ( pthread_mutex_init(mutex, &attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      18,
      "hkCriticalSection");
    perror("pthread_mutex_init(&m_mutex, &attr)");
    __builtin_debugtrap();
  }
  result = (struct hkCriticalSection *)pthread_mutexattr_destroy(&attr);
  if ( result != nullptr )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      19,
      "hkCriticalSection");
    perror("pthread_mutexattr_destroy(&attr)");
    __builtin_debugtrap();
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opNew  (binary VA: 0x156fe60)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator new
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opNew()
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           16);
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opDelete  (binary VA: 0x156fea0)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opDelete(void *a1)
{
  int address;

  if ( a1 != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      16);
  }
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opNew  (binary VA: 0x156fef0)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator new
// ----------------------------------------------------------------------------
unsigned int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opNew(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opNewArray  (binary VA: 0x156ff00)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opNewArray(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opDelete  (binary VA: 0x156ff10)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opDeleteArray  (binary VA: 0x156ff20)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator delete[]
// ----------------------------------------------------------------------------
void hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::Construct  (binary VA: 0x156ff30)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::hkCachedHashMap
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::Construct(hkString::Self **a1)
{
  int Instance;
  hkString::Self *v2;
  int result;
  int v4;

  Instance = extAllocator::getInstance();
  v2 = (hkString::Self *)G4_VCALL<int>(Instance, 8, 192);
  *a1 = v2;
  result = (int)(uintptr_t)(hkString::memSet(v2, (char *)off_FC + 3, 0xC0u, v4));
  a1[1] = nullptr;
  a1[2] = (hkString::Self *)(byte_9 + 6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::Destroy  (binary VA: 0x156ff90)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::~hkCachedHashMap
// ----------------------------------------------------------------------------
void hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::Destroy(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self)
{
  int Instance;

  Instance = extAllocator::getInstance();
  G4_VCALL<void>(Instance, 12, *(uint32_t *)self, 4 * (3 * *((uint32_t *)self + 2) + 3));
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getIterator  (binary VA: 0x156ffd0)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getIterator
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getIterator(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self)
{
  int v1;
  uint32_t *v2;
  int result;

  v1 = *((uint32_t *)self + 2);
  if ( v1 < 0 )
    return 0;
  v2 = *(uint32_t **)self;
  for ( result = 0; *v2 == -1; v2 += 3 )
  {
    if ( ++result > v1 )
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getKey  (binary VA: 0x1570010)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getKey
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getKey(uint32_t *a1, int a2)
{
  return *(uint32_t *)(*a1 + 12 * a2 + 4);
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getValue  (binary VA: 0x1570030)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getValue
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getValue(uint32_t *a1, int a2)
{
  return *(uint32_t *)(*a1 + 12 * a2 + 8);
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::setValue  (binary VA: 0x1570050)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::setValue
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::setValue(uint32_t *a1, int a2, int a3)
{
  int result;

  result = *a1 + 12 * a2;
  *(uint32_t *)(result + 8) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getNext  (binary VA: 0x1570070)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getNext
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getNext(uint32_t *a1, int a2)
{
  int result;
  int v3;
  int v4;

  result = a2 + 1;
  v3 = a1[2];
  if ( a2 + 1 <= v3 && *(uint32_t *)(*a1 + 12 * result) == -1 )
  {
    v4 = *a1 + 12 * a2;
    do
    {
      if ( ++result > v3 )
        break;
      v4 += 12;
    }
    while ( *(uint32_t *)(v4 + 12) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::isValid  (binary VA: 0x15700c0)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::isValid
// ----------------------------------------------------------------------------
bool * hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::isValid(bool *a1, int a2, int a3)
{
  *a1 = a3 <= *(uint32_t *)(a2 + 8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::findKey  (binary VA: 0x15700e0)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::findKey
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::findKey(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, hkString::Self *a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  const char *v14;

  v2 = *(char *)a2;
  if ( (uint8_t)v2 != 0 )
  {
    v3 = (char *)a2 + 1;
    v4 = 0;
    do
    {
      ++v3;
      v5 = 31 * v4;
      v6 = v2;
      v2 = *(v3 - 1);
      v4 = v5 + v6;
    }
    while ( (uint8_t)v2 != 0 );
    v7 = v4 & 0x7FFFFFFF;
  }
  else
  {
    v7 = 0;
  }
  v8 = *((uint32_t *)self + 2);
  v9 = *(uint32_t *)self;
  v10 = v8 & v7;
  v11 = *(uint32_t *)self + 12 * (v8 & v7);
  v12 = *(uint32_t *)v11;
  if ( *(uint32_t *)v11 == -1 )
    return v8 + 1;
  while ( v12 != v7 )
  {
LABEL_7:
    v10 = v8 & (v10 + 1);
    v11 = v9 + 12 * v10;
    v12 = *(uint32_t *)v11;
    if ( *(uint32_t *)v11 == -1 )
      return v8 + 1;
  }
  if ( hkString::strCmp(a2, *(const char **)(v11 + 4), v14) != 0 )
  {
    v9 = *(uint32_t *)self;
    v8 = *((uint32_t *)self + 2);
    goto LABEL_7;
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::hasKey  (binary VA: 0x15701c0)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::hasKey
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, extContainerAllocator> * hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::hasKey(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *a2, hkString::Self *a3)
{
  int Key;

  Key = hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::findKey(a2, a3);
  hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::isValid((bool *)self, (int)(uintptr_t)(a2), Key);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::get  (binary VA: 0x1570210)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::get
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, extContainerAllocator> * hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::get(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *a2, hkString::Self *a3, int *a4)
{
  int Key;
  int Value;
  typedef bool _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);

  Key = hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::findKey(a2, a3);
  hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::isValid(&v7, (int)(uintptr_t)(a2), Key);
  if ( v7 )
  {
    Value = hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getValue((uint32_t *)(a2), Key);
    *(uint32_t *)self = 0;
    *a4 = Value;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getWithDefault  (binary VA: 0x15702a0)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getWithDefault
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getWithDefault(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, hkString::Self *a2, int a3)
{
  typedef uint8_t _g4_t_v4[4];
  typedef int _g4_t_v5[10];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);

  v5[7] = (int)(uintptr_t)(&self);
  v5[0] = a3;
  hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::get(
    (hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *)v4,
    self,
    a2,
    v5);
  return v5[0];
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::remove  (binary VA: 0x1570300)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::remove
// ----------------------------------------------------------------------------
unsigned int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::remove(int *a1, unsigned int a2)
{
  unsigned int v2;
  int v3;
  int v4;
  unsigned int result;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;

  --a1[1];
  *(uint32_t *)(*a1 + 12 * a2) = -1;
  v2 = a1[2];
  v3 = *a1;
  v4 = v2 & (v2 + a2);
  if ( *(uint32_t *)(*a1 + 12 * v4) != -1 )
  {
    do
      v4 = v2 & (v2 + v4);
    while ( *(uint32_t *)(v3 + 12 * v4) != -1 );
  }
  result = v2 & (a2 + 1);
  v12 = v2 & (v4 + 1);
  v6 = 12 * result;
  v7 = *(uint32_t *)(v3 + 12 * result);
  if ( v7 != -1 )
  {
    v8 = a2;
    v11 = *a1;
    do
    {
      v9 = v7 & v2;
      if ( ((v7 & v2) <= v8 || result < v12)
        && (result >= v8 || v9 > result && (v7 & v2) <= v8)
        && (v9 >= v12 || (v7 & v2) <= v8) )
      {
        v10 = 12 * v8;
        *(uint32_t *)(v11 + v10) = v7;
        *(uint32_t *)(*a1 + v10 + 4) = *(uint32_t *)(*a1 + v6 + 4);
        *(uint32_t *)(*a1 + v10 + 8) = *(uint32_t *)(*a1 + v6 + 8);
        *(uint32_t *)(*a1 + v6) = -1;
        v2 = a1[2];
        v11 = *a1;
        v8 = result;
      }
      result = v2 & (result + 1);
      v6 = 12 * result;
      v7 = *(uint32_t *)(v11 + 12 * result);
    }
    while ( v7 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::remove  (binary VA: 0x1570410)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::remove
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, extContainerAllocator> * hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::remove(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *a2, hkString::Self *a3)
{
  int Key;
  typedef bool _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);

  Key = hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::findKey(a2, a3);
  hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::isValid(&v5, (int)(uintptr_t)(a2), Key);
  if ( v5 )
  {
    hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::remove((int *)a2, Key);
    *(uint32_t *)self = 0;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getSize  (binary VA: 0x15704a0)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getSize
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getSize(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::isOk  (binary VA: 0x15704b0)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::isOk
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, extContainerAllocator> * hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::isOk(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  hkString::Self *v11;

  v2 = 0;
  v3 = a2[2];
  if ( v3 < 0 )
    goto LABEL_11;
  while ( 2 )
  {
    v4 = v3;
    v5 = *a2;
    v6 = (int *)(*a2 + 12 * v2);
    v7 = *v6;
    if ( *v6 != -1 )
    {
      v8 = v7 & v3;
      v11 = (hkString::Self *)v6[1];
      while ( 1 )
      {
        v9 = v5 + 12 * v8;
        if ( v7 == *(uint32_t *)v9 )
        {
          if ( hkString::strCmp(v11, *(const char **)(v9 + 4), (const char *)v11) == 0 )
            break;
          v5 = *a2;
          v3 = a2[2];
        }
        v8 = v3 & (v8 + 1);
      }
      v4 = a2[2];
    }
    if ( ++v2 <= v4 )
    {
      v3 = v4;
      continue;
    }
    break;
  }
LABEL_11:
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opAssign  (binary VA: 0x1570560)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator=
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, extContainerAllocator> * hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::opAssign(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, const hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *a2)
{
  int Instance;
  int v3;
  hkString::Self *v4;
  int v5;
  int v7;

  Instance = extAllocator::getInstance();
  G4_VCALL<void>(Instance, 12, *(uint32_t *)self, 4 * (3 * *((uint32_t *)self + 2) + 3));
  v3 = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 2) = v3;
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  v4 = (hkString::Self *)G4_VCALL<int>(Instance, 8, 4 * (3 * v3 + 3));
  v5 = *((uint32_t *)self + 2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v4);
  hkString::memCpy(v4, *(void **)a2, 4 * (3 * v5 + 3), v7);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::clear  (binary VA: 0x15705f0)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::clear
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::clear(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self)
{
  int64_t i; // rax

  for ( i = 0; *((uint32_t *)self + 2) >= (int)i; HIDWORD(i) += 12 )
  {
    LODWORD(i) = i + 1;
    *(uint32_t *)(*(uint32_t *)self + HIDWORD(i)) = -1;
  }
  *((uint32_t *)self + 1) = 0;
  return i;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::swap  (binary VA: 0x1570620)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::swap
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, extContainerAllocator> * hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::swap(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *a2)
{
  int v3;
  int v4;
  int v5;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  v4 = *((uint32_t *)self + 1);
  v5 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *(uint32_t *)a2 = v3;
  *((uint32_t *)a2 + 1) = v4;
  *((uint32_t *)a2 + 2) = v5;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getCapacity  (binary VA: 0x1570650)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getCapacity
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getCapacity(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self)
{
  return *((uint32_t *)self + 2) + 1;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::resizeTable  (binary VA: 0x1570660)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::resizeTable
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::resizeTable(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, int a2)
{
  int v2;
  hkString::Self *v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int Instance;

  v2 = *((uint32_t *)self + 2) + 1;
  v8 = *(uint32_t *)self;
  Instance = extAllocator::getInstance();
  v3 = (hkString::Self *)G4_VCALL<int>(Instance, 8, 12 * a2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  hkString::memSet(v3, (char *)off_FC + 3, 12 * a2, v7);
  v4 = 0;
  v5 = v8;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = a2 - 1;
  if ( v2 > 0 )
  {
    do
    {
      if ( *(uint32_t *)v5 != -1 )
        hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::insert(
          self,
          *(hkString::Self **)(v5 + 4),
          *(uint32_t *)(v5 + 8));
      ++v4;
      v5 += 12;
    }
    while ( v2 != v4 );
  }
  return G4_VCALL<int>(Instance, 12, v8, 12 * v2);
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::insert  (binary VA: 0x1570740)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::insert
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::insert(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, hkString::Self *a2, unsigned int a3)
{
  int v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int i;
  int v12;
  int v13;
  int v14;
  int result;
  int v16;

  v3 = *(char *)a2;
  if ( (uint8_t)v3 != 0 )
  {
    v4 = (char *)a2 + 1;
    v5 = 0;
    do
    {
      ++v4;
      v6 = 31 * v5;
      v7 = v3;
      v3 = *(v4 - 1);
      v5 = v6 + v7;
    }
    while ( (uint8_t)v3 != 0 );
    v16 = v5 & 0x7FFFFFFF;
  }
  else
  {
    v16 = 0;
  }
  v8 = *((uint32_t *)self + 2);
  if ( 2 * *((uint32_t *)self + 1) > v8 )
  {
    hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::resizeTable(self, 2 * v8 + 2);
    v8 = *((uint32_t *)self + 2);
  }
  v9 = v8 & v16;
  v10 = *(uint32_t *)self;
  for ( i = 3 * (v8 & v16); ; i = 3 * v9 )
  {
    v12 = 4 * i;
    v13 = v10 + v12;
    v14 = *(uint32_t *)(v10 + v12);
    if ( v14 == -1 )
    {
      ++*((uint32_t *)self + 1);
      goto LABEL_14;
    }
    if ( v14 == v16 )
      break;
LABEL_8:
    v9 = v8 & (v9 + 1);
  }
  if ( hkString::strCmp(a2, *(const char **)(v13 + 4), (const char *)v16) != 0 )
  {
    v10 = *(uint32_t *)self;
    v8 = *((uint32_t *)self + 2);
    goto LABEL_8;
  }
  v13 = v12 + *(uint32_t *)self;
LABEL_14:
  *(uint32_t *)v13 = v16;
  *(uint32_t *)(*(uint32_t *)self + v12 + 4) = (uint32_t)(uintptr_t)(a2);
  result = *(uint32_t *)self;
  *(uint32_t *)(*(uint32_t *)self + v12 + 8) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getOrInsert  (binary VA: 0x1570880)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getOrInsert
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getOrInsert(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, hkString::Self *a2, unsigned int a3)
{
  int Key;
  typedef bool _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);

  Key = hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::findKey(self, a2);
  hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::isValid(&v5, (int)(uintptr_t)(self), Key);
  if ( v5 )
    return hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::getValue((uint32_t *)(self), Key);
  hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::insert(self, a2, a3);
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::merge  (binary VA: 0x1570900)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::merge
// ----------------------------------------------------------------------------
void hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::merge(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, const hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *a2)
{
  int v2;
  int v3;
  int v4;

  v2 = 0;
  v3 = *((uint32_t *)a2 + 2);
  if ( v3 >= 0 )
  {
    do
    {
      v4 = *(uint32_t *)a2 + 12 * v2;
      if ( *(uint32_t *)v4 != -1 )
        hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::insert(
          self,
          *(hkString::Self **)(v4 + 4),
          *(uint32_t *)(v4 + 8));
      ++v2;
    }
    while ( v3 >= v2 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::findOrInsertKey  (binary VA: 0x1570960)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::findOrInsertKey
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::findOrInsertKey(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, hkString::Self *a2, unsigned int a3)
{
  int v3;
  int v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  const char *v14;
  int v15;

  v3 = *((uint32_t *)self + 2);
  if ( 2 * *((uint32_t *)self + 1) > v3 )
  {
    hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::resizeTable(self, 2 * v3 + 2);
    v3 = *((uint32_t *)self + 2);
  }
  v4 = *(char *)a2;
  if ( (uint8_t)v4 != 0 )
  {
    v5 = (char *)a2 + 1;
    v6 = 0;
    do
    {
      ++v5;
      v7 = 31 * v6;
      v8 = v4;
      v4 = *(v5 - 1);
      v6 = v7 + v8;
    }
    while ( (uint8_t)v4 != 0 );
    v15 = v6 & 0x7FFFFFFF;
    v9 = v6 & 0x7FFFFFFF & v3;
  }
  else
  {
    v9 = 0;
    v15 = 0;
  }
  v10 = *(uint32_t *)self;
  while ( 1 )
  {
    v11 = 12 * v9;
    v12 = v10 + 12 * v9;
    if ( *(uint32_t *)v12 == v15 )
      break;
    if ( *(uint32_t *)v12 == -1 )
      goto LABEL_13;
LABEL_9:
    v9 = *((uint32_t *)self + 2) & (v9 + 1);
  }
  if ( hkString::strCmp(a2, *(const char **)(v12 + 4), v14) == 0 )
    return v9;
  v10 = *(uint32_t *)self;
  v12 = *(uint32_t *)self + v11;
  if ( *(uint32_t *)v12 != -1 )
    goto LABEL_9;
LABEL_13:
  *(uint32_t *)v12 = v15;
  *(uint32_t *)(*(uint32_t *)self + v11 + 4) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)(*(uint32_t *)self + v11 + 8) = a3;
  ++*((uint32_t *)self + 1);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::reserve  (binary VA: 0x1570a70)
// Original: hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::reserve
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::reserve(hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *self, int a2)
{
  int result;

  for ( result = 8; 2 * a2 > result; result *= 2 )
    ;
  if ( *((uint32_t *)self + 2) + 1 < result )
    return hkCachedHashMap_hkStringMapOperations_ex_c7ef5f::resizeTable(self, result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::Destroy  (binary VA: 0x1570bc0)
// Original: hkLeakDetectAllocator::~hkLeakDetectAllocator
// ----------------------------------------------------------------------------
void hkLeakDetectAllocator::Destroy(hkLeakDetectAllocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097648);
  if ( pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 32)) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      28,
      "~hkCriticalSection");
    perror("pthread_mutex_destroy(&m_mutex)");
    __builtin_debugtrap();
  }
  hkStackTracer::CallTree::Destroy((hkLeakDetectAllocator::Self *)((char *)self + 8));
  hkStackTracer::Destroy((hkLeakDetectAllocator::Self *)((char *)self + 4));
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::Destroy_ea1570c50  (binary VA: 0x1570c50)
// Original: hkLeakDetectAllocator::~hkLeakDetectAllocator
// ----------------------------------------------------------------------------
void hkLeakDetectAllocator::Destroy_ea1570c50(hkLeakDetectAllocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097648);
  if ( pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 32)) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      28,
      "~hkCriticalSection");
    perror("pthread_mutex_destroy(&m_mutex)");
    __builtin_debugtrap();
  }
  hkStackTracer::CallTree::Destroy((hkLeakDetectAllocator::Self *)((char *)self + 8));
  hkStackTracer::Destroy((hkLeakDetectAllocator::Self *)((char *)self + 4));
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::Construct  (binary VA: 0x1570ce0)
// Original: hkStringBuf::hkStringBuf
// ----------------------------------------------------------------------------
void hkStringBuf::Construct(hkStringBuf::Self *self, hkString::Self *a2)
{
  size_t v2;
  int v3;
  int v4;
  int v5;
  typedef const char *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef size_t _g4_t_v8;
  typedef size_t _g4_t_v9;
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v9)) > _g4_s3 ? (20u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v10)) > _g4_s4 ? (24u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -2147483520;
  if ( a2 != nullptr )
  {
    v2 = hkString::strLen(a2, v6);
    v3 = v2 + 1;
    v4 = *((uint32_t *)self + 2) & 0x3FFFFFFF;
    if ( (int)(v2 + 1) > v4 )
    {
      v5 = 2 * v4;
      v8 = v2;
      if ( v3 >= v5 )
        v5 = v2 + 1;
      v9 = v2 + 1;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v10,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)self,
        v5,
        1);
      v2 = v8;
      v3 = v9;
    }
    *((uint32_t *)self + 1) = v3;
    *(uint8_t *)(*(uint32_t *)self + v2) = 0;
    hkString::memCpy(*(hkString::Self **)self, a2, v2, v7);
  }
  else
  {
    *((uint32_t *)self + 1) = 1;
    *((uint8_t *)self + 12) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::Construct  (binary VA: 0x1570db0)
// Original: hkStringBuf::hkStringBuf
// ----------------------------------------------------------------------------
void hkStringBuf::Construct(hkStringBuf::Self *self, char *a2, size_t a3)
{
  char *v3;
  int v4;
  int v5;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v7)) > _g4_s1 ? (20u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);

  v3 = (char *)self + 12;
  v4 = a3 + 1;
  *(uint32_t *)self = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -2147483520;
  if ( (int)(a3 + 1) > 128 )
  {
    v5 = 256;
    if ( v4 > 255 )
      v5 = a3 + 1;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v7, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, (int *)self, v5, 1);
    v3 = *(char **)self;
    v4 = a3 + 1;
  }
  *((uint32_t *)self + 1) = v4;
  v3[a3] = 0;
  hkString::memCpy(*(hkString::Self **)self, a2, a3, v6);
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::Construct  (binary VA: 0x1570e50)
// Original: hkStringBuf::hkStringBuf
// ----------------------------------------------------------------------------
void hkStringBuf::Construct(hkStringBuf::Self *self, const hkStringBuf::Self *a2)
{
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int i;
  typedef int _g4_t_v8;
  typedef unsigned int _g4_t_v9;
  typedef char *_g4_t_v10;
  typedef int _g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v11)) > _g4_s3 ? (16u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -2147483520;
  v2 = *((uint32_t *)a2 + 1);
  if ( v2 <= 128 )
  {
    v10 = (char *)self + 12;
  }
  else
  {
    v11 = *((uint32_t *)a2 + 1);
    v3 = (*(int (**)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
           (uint32_t *)(hkContainerTempAllocator::s_alloc),
           &v11);
    v4 = v11;
    *(uint32_t *)self = v3;
    *((uint32_t *)self + 2) = v4;
    v10 = (char *)v3;
    v2 = *((uint32_t *)a2 + 1);
  }
  *((uint32_t *)self + 1) = v2;
  v5 = *(uint32_t *)a2;
  if ( v2 > 0 )
  {
    if ( ((unsigned int)(uintptr_t)(v10) >= v5 + 16 || v5 >= (unsigned int)(uintptr_t)(v10 + 16)) && (unsigned int)v2 > 0xF )
    {
      v6 = 0;
      v9 = 0;
      v8 = 16 * ((unsigned int)v2 >> 4);
      do
      {
        ++v9;
        *(__m128i *)&v10[v6] = *(__m128i *)(v5 + v6);
        v6 += 16;
      }
      while ( (unsigned int)v2 >> 4 > v9 );
      if ( v2 != v8 )
      {
        v10[v8] = *(uint8_t *)(v5 + v8);
        if ( v8 + 1 < v2 )
        {
          v10[v8 + 1] = *(uint8_t *)(v5 + v8 + 1);
          if ( v2 > v8 + 2 )
          {
            v10[v8 + 2] = *(uint8_t *)(v5 + v8 + 2);
            if ( v2 > v8 + 3 )
            {
              v10[v8 + 3] = *(uint8_t *)(v5 + v8 + 3);
              if ( v2 > v8 + 4 )
              {
                v10[v8 + 4] = *(uint8_t *)(v5 + v8 + 4);
                if ( v2 > v8 + 5 )
                {
                  v10[v8 + 5] = *(uint8_t *)(v5 + v8 + 5);
                  if ( v2 > v8 + 6 )
                  {
                    v10[v8 + 6] = *(uint8_t *)(v5 + v8 + 6);
                    if ( v2 > v8 + 7 )
                    {
                      v10[v8 + 7] = *(uint8_t *)(v5 + v8 + 7);
                      if ( v2 > v8 + 8 )
                      {
                        v10[v8 + 8] = *(uint8_t *)(v5 + v8 + 8);
                        if ( v2 > v8 + 9 )
                        {
                          v10[v8 + 9] = *(uint8_t *)(v5 + v8 + 9);
                          if ( v2 > v8 + 10 )
                          {
                            v10[v8 + 10] = *(uint8_t *)(v5 + v8 + 10);
                            if ( v2 > v8 + 11 )
                            {
                              v10[v8 + 11] = *(uint8_t *)(v5 + v8 + 11);
                              if ( v2 > v8 + 12 )
                              {
                                v10[v8 + 12] = *(uint8_t *)(v5 + v8 + 12);
                                if ( v2 > v8 + 13 )
                                {
                                  v10[v8 + 13] = *(uint8_t *)(v5 + v8 + 13);
                                  if ( v2 > v8 + 14 )
                                    v10[v8 + 14] = *(uint8_t *)(v5 + v8 + 14);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      for ( i = 0; i != v2; ++i )
        v10[i] = *(uint8_t *)(v5 + i);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::opAssign  (binary VA: 0x15710d0)
// Original: hkStringBuf::operator=
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkStringBuf::opAssign(hkStringBuf::Self *self, const hkStringBuf::Self *a2)
{
  int v2;
  hkStringBuf::Self *v3;
  unsigned int v4;
  int v5;
  int v7;
  int v8;
  int i;
  typedef int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  v2 = *((uint32_t *)a2 + 1);
  if ( (*((uint32_t *)self + 2) & 0x3FFFFFFF) < v2 )
  {
    if ( *((int *)self + 2) >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
        (uint32_t *)(hkContainerTempAllocator::s_alloc),
        *(uint32_t *)self,
        *((uint32_t *)self + 2) & 0x3FFFFFFF);
      v2 = *((uint32_t *)a2 + 1);
    }
    v13 = v2;
    v7 = (*(int (**)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
           (uint32_t *)(hkContainerTempAllocator::s_alloc),
           &v13);
    v8 = v13;
    v12 = v7;
    *(uint32_t *)self = v7;
    *((uint32_t *)self + 2) = v8;
    v3 = self;
    v2 = *((uint32_t *)a2 + 1);
  }
  else
  {
    v12 = *(uint32_t *)self;
    v3 = self;
  }
  *((uint32_t *)v3 + 1) = v2;
  v4 = *(uint32_t *)a2;
  if ( v2 <= 0 )
    return self;
  if ( (v12 >= v4 + 16 || v4 >= v12 + 16) && (unsigned int)v2 > 0xF )
  {
    v5 = 0;
    v11 = 0;
    v10 = 16 * ((unsigned int)v2 >> 4);
    do
    {
      ++v11;
      *(__m128i *)(v12 + v5) = *(__m128i *)(v4 + v5);
      v5 += 16;
    }
    while ( (unsigned int)v2 >> 4 > v11 );
    if ( v2 != v10 )
    {
      *(uint8_t *)(v12 + v10) = *(uint8_t *)(v4 + v10);
      if ( v2 > v10 + 1 )
      {
        *(uint8_t *)(v12 + v10 + 1) = *(uint8_t *)(v4 + v10 + 1);
        if ( v2 > v10 + 2 )
        {
          *(uint8_t *)(v12 + v10 + 2) = *(uint8_t *)(v4 + v10 + 2);
          if ( v2 > v10 + 3 )
          {
            *(uint8_t *)(v12 + v10 + 3) = *(uint8_t *)(v4 + v10 + 3);
            if ( v2 > v10 + 4 )
            {
              *(uint8_t *)(v12 + v10 + 4) = *(uint8_t *)(v4 + v10 + 4);
              if ( v2 > v10 + 5 )
              {
                *(uint8_t *)(v12 + v10 + 5) = *(uint8_t *)(v4 + v10 + 5);
                if ( v2 > v10 + 6 )
                {
                  *(uint8_t *)(v12 + v10 + 6) = *(uint8_t *)(v4 + v10 + 6);
                  if ( v2 > v10 + 7 )
                  {
                    *(uint8_t *)(v12 + v10 + 7) = *(uint8_t *)(v4 + v10 + 7);
                    if ( v2 > v10 + 8 )
                    {
                      *(uint8_t *)(v12 + v10 + 8) = *(uint8_t *)(v4 + v10 + 8);
                      if ( v2 > v10 + 9 )
                      {
                        *(uint8_t *)(v12 + v10 + 9) = *(uint8_t *)(v4 + v10 + 9);
                        if ( v2 > v10 + 10 )
                        {
                          *(uint8_t *)(v12 + v10 + 10) = *(uint8_t *)(v4 + v10 + 10);
                          if ( v2 > v10 + 11 )
                          {
                            *(uint8_t *)(v12 + v10 + 11) = *(uint8_t *)(v4 + v10 + 11);
                            if ( v2 > v10 + 12 )
                            {
                              *(uint8_t *)(v12 + v10 + 12) = *(uint8_t *)(v4 + v10 + 12);
                              if ( v2 > v10 + 13 )
                              {
                                *(uint8_t *)(v12 + v10 + 13) = *(uint8_t *)(v4 + v10 + 13);
                                if ( v2 > v10 + 14 )
                                  *(uint8_t *)(v12 + v10 + 14) = *(uint8_t *)(v4 + v10 + 14);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return self;
  }
  for ( i = 0; i != v2; ++i )
    *(uint8_t *)(v12 + i) = *(uint8_t *)(v4 + i);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::opAssign  (binary VA: 0x1571360)
// Original: hkStringBuf::operator=
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkStringBuf::opAssign(hkStringBuf::Self *self, hkString::Self *a2)
{
  size_t v2;
  int v3;
  int v4;
  int v6;
  uint8_t *v7;
  typedef const char *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef size_t _g4_t_v10;
  typedef size_t _g4_t_v11;
  typedef uint8_t _g4_t_v12[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  if ( a2 != nullptr )
  {
    v2 = hkString::strLen(a2, v8);
    v3 = v2 + 1;
    v4 = *((uint32_t *)self + 2) & 0x3FFFFFFF;
    if ( (int)(v2 + 1) > v4 )
    {
      v6 = 2 * v4;
      v10 = v2;
      if ( v3 >= v6 )
        v6 = v2 + 1;
      v11 = v2 + 1;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v12,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)self,
        v6,
        1);
      v2 = v10;
      v3 = v11;
    }
    *((uint32_t *)self + 1) = v3;
    *(uint8_t *)(*(uint32_t *)self + v2) = 0;
    hkString::memCpy(*(hkString::Self **)self, a2, v2, v9);
    return self;
  }
  else
  {
    if ( (*((uint32_t *)self + 2) & 0x3FFFFFFF) == 0 )
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v12,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)self,
        1,
        1);
    v7 = *(uint8_t **)self;
    *((uint32_t *)self + 1) = 1;
    *v7 = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::Construct  (binary VA: 0x1571450)
// Original: hkStringBuf::hkStringBuf
// ----------------------------------------------------------------------------
void hkStringBuf::Construct(hkStringBuf::Self *self, const hkStringPtr::Self *a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -2147483520;
  hkStringBuf::opAssign(self, (hkString::Self *)(*(uint32_t *)a2 & 0xFFFFFFFE));
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::indexOf  (binary VA: 0x15714a0)
// Original: hkStringBuf::indexOf
// ----------------------------------------------------------------------------
int hkStringBuf::indexOf(hkStringBuf::Self *self, char a2, int a3, int a4)
{
  int result;
  int v5;

  result = a3;
  v5 = *((uint32_t *)self + 1) - 1;
  if ( v5 > a4 )
    v5 = a4;
  if ( a3 >= v5 )
    return -1;
  if ( *(uint8_t *)(*(uint32_t *)self + a3) != a2 )
  {
    while ( ++result != v5 )
    {
      if ( *(uint8_t *)(*(uint32_t *)self + result) == a2 )
        return result;
    }
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::indexOf  (binary VA: 0x15714f0)
// Original: hkStringBuf::indexOf
// ----------------------------------------------------------------------------
int hkStringBuf::indexOf(hkStringBuf::Self *self, char *a2, int a3)
{
  int v3;
  const char *v5;

  v3 = (int)(uintptr_t)(hkString::strStr((hkString::Self *)(*(uint32_t *)self + a3), a2, v5));
  if ( v3 != 0 )
    return v3 - *(uint32_t *)self;
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::indexOfCase  (binary VA: 0x1571530)
// Original: hkStringBuf::indexOfCase
// ----------------------------------------------------------------------------
int hkStringBuf::indexOfCase(hkStringBuf::Self *self, char *a2)
{
  uint8_t *v2;
  char v3;
  char v4;
  int v6;
  int v7;

  v2 = *(uint8_t **)self;
  if ( **(uint8_t **)self == 0 )
    return -1;
  if ( *a2 != 0 )
  {
    v7 = 0;
    while ( 2 )
    {
      v3 = *a2;
      v6 = 0;
      while ( 1 )
      {
        v4 = v2[v6];
        if ( (uint8_t)(v4 - 65) <= 0x19u )
          v4 += 32;
        if ( (uint8_t)(v3 - 65) <= 0x19u )
          v3 += 32;
        if ( v4 != v3 )
          break;
        v3 = a2[++v6];
        if ( v3 == 0 )
          return v7;
      }
      ++v2;
      ++v7;
      if ( *v2 != 0 )
        continue;
      break;
    }
    return -1;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::lastIndexOf  (binary VA: 0x15715d0)
// Original: hkStringBuf::lastIndexOf
// ----------------------------------------------------------------------------
int hkStringBuf::lastIndexOf(hkStringBuf::Self *self, char a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = a4;
  if ( a4 >= *((uint32_t *)self + 1) )
    v4 = *((uint32_t *)self + 1) - 1;
  v5 = v4 - 1;
  if ( v4 - 1 < a3 )
    return -1;
  if ( *(uint8_t *)(*(uint32_t *)self + v4 - 1) != a2 )
  {
    while ( a3 <= --v5 )
    {
      if ( *(uint8_t *)(*(uint32_t *)self + v5) == a2 )
        return v5;
    }
    return -1;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::lastIndexOf  (binary VA: 0x1571630)
// Original: hkStringBuf::lastIndexOf
// ----------------------------------------------------------------------------
int hkStringBuf::lastIndexOf(hkString::Self **self, char *a2)
{
  int v2;
  hkString::Self *v3;
  int v4;
  int v5;
  const char *v7;

  v2 = -1;
  v3 = *self;
  while ( 1 )
  {
    v5 = (int)(uintptr_t)(hkString::strStr(v3, a2, v7));
    if ( v5 == 0 )
      break;
    v4 = v5;
    v3 = (hkString::Self *)(v5 + 1);
    v2 = v4 - (uint32_t)(uintptr_t)(*self);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::compareTo  (binary VA: 0x1571680)
// Original: hkStringBuf::compareTo
// ----------------------------------------------------------------------------
int hkStringBuf::compareTo(hkString::Self **self, char *a2)
{
  const char *v3;

  return hkString::strCmp(*self, a2, v3);
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::compareToIgnoreCase  (binary VA: 0x15716b0)
// Original: hkStringBuf::compareToIgnoreCase
// ----------------------------------------------------------------------------
int hkStringBuf::compareToIgnoreCase(hkString::Self **self, char *a2)
{
  const char *v3;

  return hkString::strCasecmp(*self, a2, v3);
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::opLt  (binary VA: 0x15716e0)
// Original: hkStringBuf::operator<
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkStringBuf::opLt(hkStringBuf::Self *self, const char *a2, char *a3)
{
  const char *v4;

  *(uint8_t *)self = (int)hkString::strCmp(*(hkString::Self **)a2, a3, v4) < 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::opEq  (binary VA: 0x1571720)
// Original: hkStringBuf::operator==
// ----------------------------------------------------------------------------
bool hkStringBuf::opEq(hkString::Self **self, char *a2)
{
  return hkStringBuf::compareTo(self, a2) == 0;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::startsWith  (binary VA: 0x1571760)
// Original: hkStringBuf::startsWith
// ----------------------------------------------------------------------------
int hkStringBuf::startsWith(hkStringBuf::Self *self, char *a2)
{
  char v2;
  char v3;
  bool v4;
  int result;
  char v6;
  char v7;

  v2 = *a2;
  v3 = **(uint8_t **)self;
  if ( v3 == 0 || v2 == 0 )
    return v2 == 0;
  v4 = v3 == v2;
  result = 0;
  if ( v4 )
  {
    do
    {
      ++result;
      v6 = *(uint8_t *)(*(uint32_t *)self + result);
      if ( v6 == 0 )
      {
        v2 = a2[result];
        return v2 == 0;
      }
      v7 = a2[result];
      if ( v7 == 0 )
      {
        v2 = 0;
        return v2 == 0;
      }
    }
    while ( v6 == v7 );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::startsWithCase  (binary VA: 0x15717d0)
// Original: hkStringBuf::startsWithCase
// ----------------------------------------------------------------------------
int hkStringBuf::startsWithCase(hkStringBuf::Self *self, char *a2)
{
  int result;
  char v3; // si
  int v4;
  char v5;

  result = 1;
  if ( **(uint8_t **)self != 0 )
  {
    v3 = *a2;
    if ( *a2 != 0 )
    {
      v4 = 0;
      v5 = **(uint8_t **)self;
      while ( 1 )
      {
        if ( (uint8_t)(v5 - 65) < 0x1Au )
          v5 += 32;
        if ( (uint8_t)(v3 - 65) <= 0x19u )
          v3 += 32;
        if ( v5 != v3 )
          break;
        ++v4;
        v5 = *(uint8_t *)(*(uint32_t *)self + v4);
        if ( v5 != 0 )
        {
          v3 = a2[v4];
          if ( v3 != 0 )
            continue;
        }
        return 1;
      }
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::endsWith  (binary VA: 0x1571870)
// Original: hkStringBuf::endsWith
// ----------------------------------------------------------------------------
int hkStringBuf::endsWith(hkStringBuf::Self *self, hkString::Self *a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  uint8_t *v6;
  int v7;
  const char *v8;

  v2 = hkString::strLen(a2, v8);
  result = 0;
  v4 = *((uint32_t *)self + 1);
  if ( v2 < v4 )
  {
    v5 = v4 - 1 - v2;
    if ( v2 > 0 )
    {
      v6 = (uint8_t *)(*(uint32_t *)self + v5);
      if ( *v6 != *(uint8_t *)a2 )
        return result;
      v7 = 0;
      while ( ++v7 != v2 )
      {
        if ( v6[v7] != *((uint8_t *)a2 + v7) )
          return 0;
      }
    }
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::endsWithCase  (binary VA: 0x15718f0)
// Original: hkStringBuf::endsWithCase
// ----------------------------------------------------------------------------
int hkStringBuf::endsWithCase(hkStringBuf::Self *self, hkString::Self *a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  char v7;
  char v8;
  const char *v9;
  int v10;
  int v11;

  v2 = hkString::strLen(a2, v9);
  v11 = v2;
  v3 = *((uint32_t *)self + 1);
  result = 0;
  if ( v2 < v3 )
  {
    v5 = v3 - 1 - v2;
    if ( v2 <= 0 )
    {
      return 1;
    }
    else
    {
      v6 = *(uint32_t *)self + v5;
      v10 = 0;
      while ( 1 )
      {
        v7 = *(uint8_t *)(v6 + v10) + 32;
        if ( (uint8_t)(*(uint8_t *)(v6 + v10) - 65) > 0x19u )
          v7 = *(uint8_t *)(v6 + v10);
        v8 = *((uint8_t *)a2 + v10);
        if ( (uint8_t)(v8 - 65) <= 0x19u )
          v8 += 32;
        if ( v7 != v8 )
          break;
        if ( ++v10 == v11 )
          return 1;
      }
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::split  (binary VA: 0x15719a0)
// Original: hkStringBuf::split
// ----------------------------------------------------------------------------
int hkStringBuf::split(hkStringBuf::Self *a1, char a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  int v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;

  v3 = *((uint32_t *)a3 + 1);
  v4 = *(uint32_t *)a1;
  if ( v3 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, a3, 4, v11);
    v3 = *((uint32_t *)a3 + 1);
  }
  *(uint32_t *)(*(uint32_t *)a3 + 4 * v3) = v4;
  v5 = 0;
  v6 = a2;
  ++*((uint32_t *)a3 + 1);
  while ( 1 )
  {
    v7 = hkStringBuf::indexOf(a1, v6, v5, 0x7FFFFFFF);
    if ( v7 < 0 )
      break;
    v5 = v7 + 1;
    *(uint8_t *)(*(uint32_t *)a1 + v7) = 0;
    v8 = *((uint32_t *)a3 + 1);
    v9 = v7 + 1 + *(uint32_t *)a1;
    if ( v8 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
    {
      v13 = v9;
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, a3, 4, v12);
      v8 = *((uint32_t *)a3 + 1);
      v9 = v13;
    }
    *(uint32_t *)(*(uint32_t *)a3 + 4 * v8) = v9;
    v6 = a2;
    ++*((uint32_t *)a3 + 1);
  }
  return *((uint32_t *)a3 + 1);
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::clear  (binary VA: 0x1571a90)
// Original: hkStringBuf::clear
// ----------------------------------------------------------------------------
uint8_t * hkStringBuf::clear(hkStringBuf::Self *self)
{
  uint8_t *result;
  uint8_t v2[12];

  if ( (*((uint32_t *)self + 2) & 0x3FFFFFFF) == 0 )
    hkArrayUtil::reserve((hkArrayUtil::Self *)v2, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, (int *)self, 1, 1);
  result = *(uint8_t **)self;
  *((uint32_t *)self + 1) = 1;
  *result = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::printf  (binary VA: 0x1571af0)
// Original: hkStringBuf::printf
// ----------------------------------------------------------------------------
int hkStringBuf::printf(hkStringBuf::Self *self, char *a2, ...)
{
  signed int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int result;
  va_list va;
  typedef char *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v21)) > _g4_s3 ? (24u + sizeof(_g4_t_v21)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);

  va_start(va, a2);
  while ( 1 )
  {
    v2 = *((uint32_t *)self + 2) & 0x3FFFFFFF;
    v3 = hkString::vsnprintf(*(hkString::Self **)self, v2, a2, va, v18);
    if ( v3 < v2 && v3 >= 0 )
      break;
    if ( v3 < 0 )
    {
      v8 = 2 * v2;
      if ( v8 < 255 )
        v8 = 255;
      v9 = *((uint32_t *)self + 2) & 0x3FFFFFFF;
      v10 = v8 + 1;
      if ( v8 + 1 > v9 )
      {
        v11 = 2 * v9;
        if ( v10 >= v11 )
          v11 = v8 + 1;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v21,
          (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
          (int *)self,
          v11,
          1);
        v10 = v8 + 1;
      }
      v12 = *(uint32_t *)self;
      *((uint32_t *)self + 1) = v10;
      *(uint8_t *)(v12 + v8) = 0;
    }
    else
    {
      v4 = v3 + 1;
      v5 = *((uint32_t *)self + 2) & 0x3FFFFFFF;
      if ( v3 + 1 > v5 )
      {
        v6 = 2 * v5;
        v19 = v3;
        if ( v4 >= v6 )
          v6 = v3 + 1;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v21,
          (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
          (int *)self,
          v6,
          1);
        v3 = v19;
      }
      v7 = *(uint32_t *)self;
      *((uint32_t *)self + 1) = v4;
      *(uint8_t *)(v7 + v3) = 0;
    }
  }
  v13 = v3;
  v14 = v3 + 1;
  v15 = *((uint32_t *)self + 2) & 0x3FFFFFFF;
  if ( v14 > v15 )
  {
    v16 = 2 * v15;
    if ( v14 >= v16 )
      v16 = v14;
    v20 = v14;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v21,
      (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
      (int *)self,
      v16,
      1);
    v14 = v20;
  }
  result = *(uint32_t *)self;
  *((uint32_t *)self + 1) = v14;
  *(uint8_t *)(result + v13) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::opAddAssign  (binary VA: 0x1571c70)
// Original: hkStringBuf::operator+=
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkStringBuf::opAddAssign(hkStringBuf::Self *self, hkString::Self *a2)
{
  hkString::Self *v2;
  hkStringBuf::Self *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int i;
  int v12;
  typedef const char *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int *_g4_t_v19;
  typedef uint32_t _g4_t_v20[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v14)) > _g4_s1 ? (24u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v15)) > _g4_s2 ? (24u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v16)) > _g4_s3 ? (28u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v19)) > _g4_s6 ? (36u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v20)) > _g4_s7 ? (40u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);

  v20[3] = (uint32_t)(uintptr_t)(&self);
  v2 = a2;
  result = self;
  v19 = (int *)self;
  if ( a2 != nullptr )
  {
    v4 = hkString::strLen(a2, v13);
    v14 = v19[1];
    v5 = v19[2] & 0x3FFFFFFF;
    v6 = v14 - 1;
    v18 = v4 + v14;
    if ( v4 + v14 > v5 )
    {
      v12 = 2 * v5;
      if ( v18 >= v12 )
        v12 = v4 + v14;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v20, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, v19, v12, 1);
      v6 = v14 - 1;
    }
    v16 = v6;
    hkMemUtil::memMove((hkMemUtil::Self *)(v4 + v6 + *v19), (char *)(v6 + *v19), 1u);
    v7 = v16 + *v19;
    if ( v4 <= 0 )
      goto LABEL_24;
    v8 = v14 + *v19;
    v15 = v8;
    if ( (unsigned int)v4 > 0xF && (v8 - 1 >= (unsigned int)(uintptr_t)(v2) + 16 || (unsigned int)(uintptr_t)(v2) >= v8 + 15) )
    {
      v17 = 0;
      v9 = 16 * ((unsigned int)v4 >> 4);
      v10 = 0;
      do
      {
        ++v17;
        *(__m128i *)(v15 + v10 - 1) = *(__m128i *)((char *)v2 + v10);
        v10 += 16;
      }
      while ( (unsigned int)v4 >> 4 > v17 );
      if ( v4 != v9 )
      {
        *(uint8_t *)(v7 + v9) = *((uint8_t *)v2 + v9);
        if ( v4 > v9 + 1 )
        {
          *(uint8_t *)(v7 + v9 + 1) = *((uint8_t *)v2 + v9 + 1);
          if ( v4 > v9 + 2 )
          {
            *(uint8_t *)(v7 + v9 + 2) = *((uint8_t *)v2 + v9 + 2);
            if ( v4 > v9 + 3 )
            {
              *(uint8_t *)(v7 + v9 + 3) = *((uint8_t *)v2 + v9 + 3);
              if ( v4 > v9 + 4 )
              {
                *(uint8_t *)(v7 + v9 + 4) = *((uint8_t *)v2 + v9 + 4);
                if ( v4 > v9 + 5 )
                {
                  *(uint8_t *)(v7 + v9 + 5) = *((uint8_t *)v2 + v9 + 5);
                  if ( v4 > v9 + 6 )
                  {
                    *(uint8_t *)(v7 + v9 + 6) = *((uint8_t *)v2 + v9 + 6);
                    if ( v4 > v9 + 7 )
                    {
                      *(uint8_t *)(v7 + v9 + 7) = *((uint8_t *)v2 + v9 + 7);
                      if ( v4 > v9 + 8 )
                      {
                        *(uint8_t *)(v7 + v9 + 8) = *((uint8_t *)v2 + v9 + 8);
                        if ( v4 > v9 + 9 )
                        {
                          *(uint8_t *)(v7 + v9 + 9) = *((uint8_t *)v2 + v9 + 9);
                          if ( v4 > v9 + 10 )
                          {
                            *(uint8_t *)(v7 + v9 + 10) = *((uint8_t *)v2 + v9 + 10);
                            if ( v4 > v9 + 11 )
                            {
                              *(uint8_t *)(v7 + v9 + 11) = *((uint8_t *)v2 + v9 + 11);
                              if ( v4 > v9 + 12 )
                              {
                                *(uint8_t *)(v7 + v9 + 12) = *((uint8_t *)v2 + v9 + 12);
                                if ( v4 > v9 + 13 )
                                {
                                  *(uint8_t *)(v7 + v9 + 13) = *((uint8_t *)v2 + v9 + 13);
                                  if ( v4 > v9 + 14 )
                                    *(uint8_t *)(v7 + v9 + 14) = *((uint8_t *)v2 + v9 + 14);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_24:
      result = (hkStringBuf::Self *)v19;
      v19[1] = v18;
      return result;
    }
    for ( i = 0; i != v4; ++i )
      *(uint8_t *)(v7 + i) = *((uint8_t *)v2 + i);
    v19[1] = v18;
    return (hkStringBuf::Self *)v19;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::appendJoin  (binary VA: 0x1571f00)
// Original: hkStringBuf::appendJoin
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkStringBuf::appendJoin(hkStringBuf::Self *self, hkString::Self *a2, const char *a3, const char *a4, const char *a5, const char *a6, const char *a7)
{
  int v7;
  hkString::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  hkString::Self *v15;
  int v16;
  typedef const char *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef size_t _g4_t_v23;
  typedef uint32_t _g4_t_v24[23];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v20)) > _g4_s2 ? (32u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v21)) > _g4_s3 ? (32u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v22)) > _g4_s4 ? (36u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v23)) > _g4_s5 ? (36u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v24)) > _g4_s6 ? (44u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);

  memset(&v24[4], 0, 52);
  v24[10] = (uint32_t)(uintptr_t)(a2);
  v24[11] = (uint32_t)(uintptr_t)(a3);
  v24[12] = (uint32_t)(uintptr_t)(a4);
  v24[13] = (uint32_t)(uintptr_t)(a5);
  v24[14] = (uint32_t)(uintptr_t)(a6);
  v24[15] = (uint32_t)(uintptr_t)(a7);
  v7 = *((uint32_t *)self + 1) - 1;
  if ( a2 != nullptr )
  {
    v22 = *((uint32_t *)self + 1) - 1;
    v20 = v22;
    v8 = a2;
    v9 = 0;
    do
    {
      v10 = hkString::strLen(v8, v18);
      v24[v9 + 4] = v10;
      v22 += v10;
      v8 = (hkString::Self *)v24[++v9 + 10];
    }
    while ( v8 != nullptr );
    v7 = v20;
    v11 = v22;
  }
  else
  {
    v22 = *((uint32_t *)self + 1) - 1;
    v11 = v22;
  }
  v12 = v11 + 1;
  v13 = *((uint32_t *)self + 2) & 0x3FFFFFFF;
  if ( v12 > v13 )
  {
    v14 = 2 * v13;
    v21 = v12;
    if ( v12 >= v14 )
      v14 = v12;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v24,
      (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
      (int *)self,
      v14,
      1);
    v12 = v21;
  }
  *((uint32_t *)self + 1) = v12;
  v15 = a2;
  *(uint8_t *)(*(uint32_t *)self + v22) = 0;
  if ( a2 != nullptr )
  {
    v16 = 0;
    do
    {
      v23 = v24[v16++ + 4];
      hkString::memCpy((hkString::Self *)(v7 + *(uint32_t *)self), v15, v23, v19);
      v7 += v23;
      v15 = (hkString::Self *)v24[v16 + 10];
    }
    while ( v15 != nullptr );
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::Construct  (binary VA: 0x1572060)
// Original: hkStringBuf::hkStringBuf
// ----------------------------------------------------------------------------
void hkStringBuf::Construct(hkStringBuf::Self *self, hkString::Self *a2, char *a3, char *a4, char *a5, char *a6, char *a7)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 2) = -2147483520;
  *((uint8_t *)self + 12) = 0;
  *((uint32_t *)self + 1) = 1;
  hkStringBuf::appendJoin(self, a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::setJoin  (binary VA: 0x15720d0)
// Original: hkStringBuf::setJoin
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkStringBuf::setJoin(hkStringBuf::Self *self, hkString::Self *a2, char *a3, char *a4, char *a5, char *a6, char *a7)
{
  hkStringBuf::clear(self);
  hkStringBuf::appendJoin(self, a2, a3, a4, a5, a6, a7);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::chompStart  (binary VA: 0x1572130)
// Original: hkStringBuf::chompStart
// ----------------------------------------------------------------------------
unsigned int hkStringBuf::chompStart(hkStringBuf::Self *self, int a2)
{
  unsigned int result;
  int v3;
  int v4;
  unsigned int v5;
  signed int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;

  result = (unsigned int)(uintptr_t)(self);
  v3 = *((uint32_t *)self + 1);
  v4 = v3 - 1;
  if ( v3 - 1 > a2 )
    v4 = a2;
  if ( v4 > 0 )
  {
    v5 = *(uint32_t *)self;
    v6 = v3 - v4;
    *((uint32_t *)self + 1) = v3 - v4;
    result = v4 + v5;
    v11 = v4 + v5;
    if ( v3 - v4 > 0 )
    {
      if ( (result >= v5 + 16 || v5 >= result + 16) && (unsigned int)v6 > 0xF )
      {
        v7 = 0;
        v10 = 0;
        v9 = 16 * ((unsigned int)v6 >> 4);
        do
        {
          ++v10;
          *(__m128i *)(v5 + v7) = *(__m128i *)(v11 + v7);
          v7 += 16;
        }
        while ( (unsigned int)v6 >> 4 > v10 );
        result = 16 * ((unsigned int)v6 >> 4);
        if ( v6 != v9 )
        {
          *(uint8_t *)(v5 + v9) = *(uint8_t *)(v11 + v9);
          if ( v6 > v9 + 1 )
          {
            *(uint8_t *)(v5 + v9 + 1) = *(uint8_t *)(v11 + v9 + 1);
            if ( v6 > v9 + 2 )
            {
              *(uint8_t *)(v5 + v9 + 2) = *(uint8_t *)(v11 + v9 + 2);
              if ( v6 > v9 + 3 )
              {
                *(uint8_t *)(v5 + v9 + 3) = *(uint8_t *)(v11 + v9 + 3);
                if ( v6 > v9 + 4 )
                {
                  *(uint8_t *)(v5 + v9 + 4) = *(uint8_t *)(v11 + v9 + 4);
                  if ( v6 > v9 + 5 )
                  {
                    *(uint8_t *)(v5 + v9 + 5) = *(uint8_t *)(v11 + v9 + 5);
                    if ( v6 > v9 + 6 )
                    {
                      *(uint8_t *)(v5 + v9 + 6) = *(uint8_t *)(v11 + v9 + 6);
                      if ( v6 > v9 + 7 )
                      {
                        *(uint8_t *)(v5 + v9 + 7) = *(uint8_t *)(v11 + v9 + 7);
                        if ( v6 > v9 + 8 )
                        {
                          *(uint8_t *)(v5 + v9 + 8) = *(uint8_t *)(v11 + v9 + 8);
                          if ( v6 > v9 + 9 )
                          {
                            *(uint8_t *)(v5 + v9 + 9) = *(uint8_t *)(v11 + v9 + 9);
                            if ( v6 > v9 + 10 )
                            {
                              *(uint8_t *)(v5 + v9 + 10) = *(uint8_t *)(v11 + v9 + 10);
                              if ( v6 > v9 + 11 )
                              {
                                *(uint8_t *)(v5 + v9 + 11) = *(uint8_t *)(v11 + v9 + 11);
                                if ( v6 > v9 + 12 )
                                {
                                  *(uint8_t *)(v5 + v9 + 12) = *(uint8_t *)(v11 + v9 + 12);
                                  if ( v6 > v9 + 13 )
                                  {
                                    *(uint8_t *)(v5 + v9 + 13) = *(uint8_t *)(v11 + v9 + 13);
                                    if ( v6 > v9 + 14 )
                                      *(uint8_t *)(v5 + v9 + 14) = *(uint8_t *)(v11 + v9 + 14);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v8 = 0;
        do
        {
          result = *(uint8_t *)(v11 + v8);
          *(uint8_t *)(v5 + v8++) = result;
        }
        while ( v8 != v6 );
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::chompEnd  (binary VA: 0x1572350)
// Original: hkStringBuf::chompEnd
// ----------------------------------------------------------------------------
void hkStringBuf::chompEnd(hkStringBuf::Self *self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint8_t v7[28];

  if ( a2 > 0 )
  {
    v2 = *((uint32_t *)self + 1) + ~a2;
    if ( v2 < 0 )
      v2 = 0;
    v3 = *((uint32_t *)self + 2) & 0x3FFFFFFF;
    v4 = v2 + 1;
    if ( v2 + 1 > v3 )
    {
      v6 = 2 * v3;
      if ( v4 >= v6 )
        v6 = v2 + 1;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v7,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)self,
        v6,
        1);
      v4 = v2 + 1;
    }
    v5 = *(uint32_t *)self;
    *((uint32_t *)self + 1) = v4;
    *(uint8_t *)(v5 + v2) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::slice  (binary VA: 0x15723e0)
// Original: hkStringBuf::slice
// ----------------------------------------------------------------------------
hkMemUtil::Self * hkStringBuf::slice(hkMemUtil::Self **self, int a2, size_t a3)
{
  hkMemUtil::Self *v3;
  int v4;
  int v5;
  hkMemUtil::Self *result;
  uint8_t v7[28];

  if ( a2 != 0 )
    hkMemUtil::memMove(*self, (char *)*self + a2, a3);
  v3 = (hkMemUtil::Self *)(a3 + 1);
  v4 = (unsigned int)(uintptr_t)(*(self + 2)) & 0x3FFFFFFF;
  if ( (int)(a3 + 1) > v4 )
  {
    v5 = 2 * v4;
    if ( v5 < (int)(uintptr_t)(v3) )
      v5 = a3 + 1;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v7, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, (int *)self, v5, 1);
    v3 = (hkMemUtil::Self *)(a3 + 1);
  }
  result = *self;
  *(self + 1) = v3;
  *((uint8_t *)result + a3) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::set  (binary VA: 0x1572470)
// Original: hkStringBuf::set
// ----------------------------------------------------------------------------
void * hkStringBuf::set(hkStringBuf::Self *self, hkString::Self *a2, signed int a3)
{
  size_t v3;
  int v4;
  int v5;
  int v6;
  typedef const char *_g4_t_v8;
  typedef uint8_t _g4_t_v9[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v9)) > _g4_s1 ? (36u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);

  v3 = a3;
  if ( a3 < 0 )
    v3 = hkString::strLen(a2, v8);
  v4 = v3 + 1;
  v5 = *((uint32_t *)self + 2) & 0x3FFFFFFF;
  if ( (int)(v3 + 1) > v5 )
  {
    v6 = 2 * v5;
    if ( v4 >= v6 )
      v6 = v3 + 1;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v9, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, (int *)self, v6, 1);
    v4 = v3 + 1;
  }
  *((uint32_t *)self + 1) = v4;
  *(uint8_t *)(*(uint32_t *)self + v3) = 0;
  return hkMemUtil::memCpy(*(hkMemUtil::Self **)self, a2, v3);
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::append  (binary VA: 0x1572510)
// Original: hkStringBuf::append
// ----------------------------------------------------------------------------
void hkStringBuf::append(hkStringBuf::Self *self, hkString::Self *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef const char *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  if ( a2 != nullptr )
  {
    if ( a3 < 0 )
      a3 = hkString::strLen(a2, v9);
    v3 = *((uint32_t *)self + 1) - 1;
    v4 = *((uint32_t *)self + 2) & 0x3FFFFFFF;
    v5 = v3 + a3;
    v6 = *((uint32_t *)self + 1) + a3;
    if ( v6 > v4 )
    {
      v8 = 2 * v4;
      v10 = *((uint32_t *)self + 1) - 1;
      if ( v6 >= v8 )
        v8 = *((uint32_t *)self + 1) + a3;
      v11 = v3 + a3;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v12,
        (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
        (int *)self,
        v8,
        1);
      v3 = v10;
      v5 = v11;
    }
    v7 = *(uint32_t *)self;
    *((uint32_t *)self + 1) = v6;
    *(uint8_t *)(v7 + v5) = 0;
    hkMemUtil::memCpy((hkMemUtil::Self *)(*(uint32_t *)self + v3), a2, a3);
  }
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::appendPrintf  (binary VA: 0x15725e0)
// Original: hkStringBuf::appendPrintf
// ----------------------------------------------------------------------------
int hkStringBuf::appendPrintf(hkStringBuf::Self *self, char *a2, ...)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;
  va_list va;
  typedef char *_g4_t_v12;
  typedef hkStringBuf::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef uint8_t _g4_t_v16[4];
  typedef hkString::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[39];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v17)) > _g4_s5 ? (36u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v18)) > _g4_s6 ? (40u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v19)) > _g4_s7 ? (44u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v20)) > _g4_s8 ? (48u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);

  va_start(va, a2);
  v20[35] = (uint32_t)(uintptr_t)(&self);
  v13 = self;
  v15 = a2;
  v19 = -2147483520;
  v18 = 1;
  v17 = (hkString::Self *)v20;
  LOBYTE(v20[0]) = 0;
  while ( 1 )
  {
    v2 = v19 & 0x3FFFFFFF;
    v3 = hkString::vsnprintf(v17, v19 & 0x3FFFFFFF, v15, va, v12);
    if ( v3 < v2 && v3 >= 0 )
      break;
    if ( v3 < 0 )
    {
      v6 = 2 * v2;
      if ( v6 < 255 )
        v6 = 255;
      if ( v6 + 1 > (v19 & 0x3FFFFFFF) )
      {
        v7 = 2 * (v19 & 0x3FFFFFFF);
        if ( v6 + 1 >= v7 )
          v7 = v6 + 1;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v16,
          (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
          (int *)&v17,
          v7,
          1);
      }
      v18 = v6 + 1;
      *((uint8_t *)v17 + v6) = 0;
    }
    else
    {
      v4 = v3 + 1;
      if ( v3 + 1 > (v19 & 0x3FFFFFFF) )
      {
        v5 = 2 * (v19 & 0x3FFFFFFF);
        v14 = v3;
        if ( v4 >= v5 )
          v5 = v3 + 1;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v16,
          (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
          (int *)&v17,
          v5,
          1);
        v3 = v14;
      }
      v18 = v4;
      *((uint8_t *)v17 + v3) = 0;
    }
  }
  v8 = v3;
  v9 = v3 + 1;
  if ( v3 + 1 > (v19 & 0x3FFFFFFF) )
  {
    v10 = 2 * (v19 & 0x3FFFFFFF);
    if ( v9 >= v10 )
      v10 = v9;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v16,
      (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
      (int *)&v17,
      v10,
      1);
  }
  v18 = v9;
  *((uint8_t *)v17 + v8) = 0;
  hkStringBuf::append(v13, v17, -1);
  result = v19;
  v18 = 0;
  if ( v19 >= 0 )
    return (*(int (**)(uint32_t *, hkString::Self *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             v17,
             v19 & 0x3FFFFFFF);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::insert  (binary VA: 0x1572850)
// Original: hkStringBuf::insert
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkStringBuf::insert(hkStringBuf::Self *self, int a2, hkString::Self *a3, int a4)
{
  hkString::Self *v4;
  hkStringBuf::Self *result;
  int v6;
  int v7;
  int v8;
  int v9;
  size_t v10;
  int v11;
  unsigned int v12;
  int v13;
  int i;
  int v15;
  int v16;
  typedef const char *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef size_t _g4_t_v24;
  typedef int *_g4_t_v25;
  typedef uint32_t _g4_t_v26[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v18)) > _g4_s1 ? (32u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v19)) > _g4_s2 ? (36u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v20)) > _g4_s3 ? (40u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v21)) > _g4_s4 ? (44u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v22)) > _g4_s5 ? (44u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v23)) > _g4_s6 ? (44u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v24)) > _g4_s7 ? (44u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v25)) > _g4_s8 ? (48u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v26)) > _g4_s9 ? (52u + sizeof(_g4_t_v26)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);

  v26[3] = (uint32_t)(uintptr_t)(&self);
  v4 = a3;
  result = self;
  v25 = (int *)self;
  v6 = a2;
  v7 = a4;
  if ( a3 == nullptr )
    return result;
  if ( a4 < 0 )
  {
    v23 = a2;
    v7 = hkString::strLen(a3, v17);
    v15 = v25[1];
    v11 = v25[2] & 0x3FFFFFFF;
    v20 = v15 + v7;
    v6 = v23;
    v10 = v15 - v23;
    if ( v20 <= v11 )
      goto LABEL_4;
LABEL_31:
    v19 = v6;
    v24 = v10;
    v16 = 2 * v11;
    if ( v16 < v20 )
      v16 = v20;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v26, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, v25, v16, 1);
    v6 = v19;
    v10 = v24;
    goto LABEL_4;
  }
  v8 = *((uint32_t *)self + 1);
  v9 = v8 + a4;
  v10 = v8 - a2;
  v20 = v9;
  v11 = *((uint32_t *)self + 2) & 0x3FFFFFFF;
  if ( v20 > v11 )
    goto LABEL_31;
LABEL_4:
  v21 = v6;
  hkMemUtil::memMove((hkMemUtil::Self *)(v7 + v6 + *v25), (char *)(v6 + *v25), v10);
  v12 = v21 + *v25;
  if ( v7 <= 0 )
  {
LABEL_25:
    result = (hkStringBuf::Self *)v25;
    v25[1] = v20;
    return result;
  }
  if ( (unsigned int)v7 > 0xF && ((unsigned int)(uintptr_t)(v4) >= v12 + 16 || v12 >= (unsigned int)(uintptr_t)(v4) + 16) )
  {
    v13 = 0;
    v22 = 0;
    v18 = 16 * ((unsigned int)v7 >> 4);
    do
    {
      ++v22;
      *(__m128i *)(v12 + v13) = *(__m128i *)((char *)v4 + v13);
      v13 += 16;
    }
    while ( (unsigned int)v7 >> 4 > v22 );
    if ( v7 != v18 )
    {
      *(uint8_t *)(v12 + v18) = *((uint8_t *)v4 + v18);
      if ( v18 + 1 < v7 )
      {
        *(uint8_t *)(v12 + v18 + 1) = *((uint8_t *)v4 + v18 + 1);
        if ( v7 > v18 + 2 )
        {
          *(uint8_t *)(v12 + v18 + 2) = *((uint8_t *)v4 + v18 + 2);
          if ( v7 > v18 + 3 )
          {
            *(uint8_t *)(v12 + v18 + 3) = *((uint8_t *)v4 + v18 + 3);
            if ( v7 > v18 + 4 )
            {
              *(uint8_t *)(v12 + v18 + 4) = *((uint8_t *)v4 + v18 + 4);
              if ( v7 > v18 + 5 )
              {
                *(uint8_t *)(v12 + v18 + 5) = *((uint8_t *)v4 + v18 + 5);
                if ( v7 > v18 + 6 )
                {
                  *(uint8_t *)(v12 + v18 + 6) = *((uint8_t *)v4 + v18 + 6);
                  if ( v7 > v18 + 7 )
                  {
                    *(uint8_t *)(v12 + v18 + 7) = *((uint8_t *)v4 + v18 + 7);
                    if ( v7 > v18 + 8 )
                    {
                      *(uint8_t *)(v12 + v18 + 8) = *((uint8_t *)v4 + v18 + 8);
                      if ( v7 > v18 + 9 )
                      {
                        *(uint8_t *)(v12 + v18 + 9) = *((uint8_t *)v4 + v18 + 9);
                        if ( v7 > v18 + 10 )
                        {
                          *(uint8_t *)(v12 + v18 + 10) = *((uint8_t *)v4 + v18 + 10);
                          if ( v7 > v18 + 11 )
                          {
                            *(uint8_t *)(v12 + v18 + 11) = *((uint8_t *)v4 + v18 + 11);
                            if ( v7 > v18 + 12 )
                            {
                              *(uint8_t *)(v12 + v18 + 12) = *((uint8_t *)v4 + v18 + 12);
                              if ( v7 > v18 + 13 )
                              {
                                *(uint8_t *)(v12 + v18 + 13) = *((uint8_t *)v4 + v18 + 13);
                                if ( v7 > v18 + 14 )
                                  *(uint8_t *)(v12 + v18 + 14) = *((uint8_t *)v4 + v18 + 14);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_25;
  }
  for ( i = 0; i != v7; ++i )
    *(uint8_t *)(v12 + i) = *((uint8_t *)v4 + i);
  v25[1] = v20;
  return (hkStringBuf::Self *)v25;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::prepend  (binary VA: 0x1572b10)
// Original: hkStringBuf::prepend
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkStringBuf::prepend(hkStringBuf::Self *self, char *a2, int a3)
{
  return hkStringBuf::insert(self, 0, (hkString::Self *)a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::pathBasename  (binary VA: 0x1572b50)
// Original: hkStringBuf::pathBasename
// ----------------------------------------------------------------------------
signed int hkStringBuf::pathBasename(hkStringBuf::Self *self)
{
  int IndexOf;
  signed int result;

  IndexOf = hkStringBuf::lastIndexOf(self, 47, 0, 0x7FFFFFFF);
  result = hkStringBuf::lastIndexOf(self, 92, 0, 0x7FFFFFFF);
  if ( result >= IndexOf )
    IndexOf = result;
  if ( IndexOf >= 0 )
    return hkStringBuf::chompStart(self, IndexOf + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::pathDirname  (binary VA: 0x1572bd0)
// Original: hkStringBuf::pathDirname
// ----------------------------------------------------------------------------
hkMemUtil::Self * hkStringBuf::pathDirname(hkStringBuf::Self *self)
{
  signed int IndexOf;
  int v2;

  IndexOf = hkStringBuf::lastIndexOf(self, 47, 0, 0x7FFFFFFF);
  v2 = hkStringBuf::lastIndexOf(self, 92, 0, 0x7FFFFFFF);
  if ( v2 >= IndexOf )
    IndexOf = v2;
  if ( IndexOf < 0 )
    return (hkMemUtil::Self *)hkStringBuf::clear(self);
  else
    return hkStringBuf::slice((hkMemUtil::Self **)self, 0, IndexOf);
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::pathExtension  (binary VA: 0x1572c60)
// Original: hkStringBuf::pathExtension
// ----------------------------------------------------------------------------
uint8_t * hkStringBuf::pathExtension(hkStringBuf::Self *self)
{
  int IndexOf;

  IndexOf = hkStringBuf::lastIndexOf(self, 46, 0, 0x7FFFFFFF);
  if ( IndexOf == -1 )
    return hkStringBuf::clear(self);
  else
    return (uint8_t *)hkStringBuf::chompStart(self, IndexOf);
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::pathAppend  (binary VA: 0x1572cc0)
// Original: hkStringBuf::pathAppend
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkStringBuf::pathAppend(hkStringBuf::Self *self, hkString::Self *a2, const char *a3, const char *a4)
{
  hkStringBuf::Self *v4;
  hkString::Self *v5;
  bool v6;
  int v7;
  int v8;
  char v9; // si
  unsigned int v10;
  hkStringBuf::Self *v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  unsigned int v18;
  hkStringBuf::Self *v19;
  int v20;
  int i;
  int v22;
  typedef const char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef signed int _g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef hkStringBuf::Self *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef char _g4_t_v32[4];
  typedef const char *_g4_t_v33;
  typedef uint32_t _g4_t_v34[9];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v26)) > _g4_s3 ? (40u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v27)) > _g4_s4 ? (44u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v28)) > _g4_s5 ? (48u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v29)) > _g4_s6 ? (52u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v30)) > _g4_s7 ? (56u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v31)) > _g4_s8 ? (56u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v32)) > _g4_s9 ? (60u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v33)) > _g4_s10 ? (64u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v34)) > _g4_s11 ? (68u + sizeof(_g4_t_v34)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);

  v34[5] = (uint32_t)(uintptr_t)(&self);
  v4 = self;
  v34[1] = (uint32_t)(uintptr_t)(a4);
  v5 = a2;
  v34[0] = (uint32_t)(uintptr_t)(a3);
  v6 = false;
  v7 = *((uint32_t *)self + 1);
  v34[2] = 0;
  v8 = v7 - 1;
  v33 = (const char *)a2;
  *((uint32_t *)self + 1) = v8;
  if ( v8 != 0 )
    v6 = *(uint8_t *)(*(uint32_t *)v4 + v8 - 1) != 47;
  v29 = v34;
  if ( v5 != nullptr )
  {
    v28 = v4;
    v9 = v6;
    while ( 1 )
    {
      if ( *(uint8_t *)v5 != 0 )
      {
        for ( ; *(uint8_t *)v5 == 47; v5 = (hkString::Self *)((char *)v5 + 1) )
          ;
        v10 = hkString::strLen(v5, v23);
        if ( v10 != 0 )
        {
          while ( *((uint8_t *)v5 + v10 - 1) == 47 )
          {
            if ( --v10 == 0 )
              goto LABEL_17;
          }
          if ( v9 == 0 )
          {
LABEL_17:
            v12 = v28;
            v13 = *((uint32_t *)v28 + 1);
            goto LABEL_18;
          }
          v19 = v28;
          v20 = *((uint32_t *)v28 + 1);
          if ( v20 == (*((uint32_t *)v28 + 2) & 0x3FFFFFFF) )
          {
            v31 = v10;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, v28, 1, v24);
            v20 = *((uint32_t *)v28 + 1);
            v10 = v31;
            v19 = v28;
          }
          *(uint8_t *)(*(uint32_t *)v19 + v20) = 47;
          v13 = *((uint32_t *)v19 + 1) + 1;
          *((uint32_t *)v19 + 1) = v13;
          v12 = v19;
LABEL_18:
          v14 = *((uint32_t *)v12 + 2) & 0x3FFFFFFF;
          v27 = v13 + v10;
          if ( (int)(v13 + v10) > v14 )
          {
            v22 = 2 * v14;
            v30 = v10;
            if ( (int)(v13 + v10) >= v22 )
              v22 = v13 + v10;
            hkArrayUtil::reserve(
              (hkArrayUtil::Self *)v32,
              (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
              (int *)v28,
              v22,
              1);
            v13 = *((uint32_t *)v28 + 1);
            v10 = v30;
          }
          v15 = *(uint32_t *)v28 + v13;
          if ( (int)v10 > 0 )
          {
            if ( v15 < (unsigned int)(uintptr_t)(v5) + 16 && (unsigned int)(uintptr_t)(v5) < v15 + 16 || v10 <= 0xF )
            {
              for ( i = 0; i != v10; ++i )
                *(uint8_t *)(v15 + i) = *((uint8_t *)v5 + i);
              v9 = 1;
              *((uint32_t *)v28 + 1) = v27;
              goto LABEL_10;
            }
            v25 = v10;
            v16 = 0;
            v17 = 16 * (v10 >> 4);
            v26 = 0;
            v18 = v10 >> 4;
            do
            {
              ++v26;
              *(__m128i *)(v15 + v16) = *(__m128i *)((char *)v5 + v16);
              v16 += 16;
            }
            while ( v26 < v18 );
            if ( v25 != v17 )
            {
              *(uint8_t *)(v15 + v17) = *((uint8_t *)v5 + v17);
              if ( v17 + 1 < v25 )
              {
                *(uint8_t *)(v15 + v17 + 1) = *((uint8_t *)v5 + v17 + 1);
                if ( v25 > v17 + 2 )
                {
                  *(uint8_t *)(v15 + v17 + 2) = *((uint8_t *)v5 + v17 + 2);
                  if ( v25 > v17 + 3 )
                  {
                    *(uint8_t *)(v15 + v17 + 3) = *((uint8_t *)v5 + v17 + 3);
                    if ( v25 > v17 + 4 )
                    {
                      *(uint8_t *)(v15 + v17 + 4) = *((uint8_t *)v5 + v17 + 4);
                      if ( v25 > v17 + 5 )
                      {
                        *(uint8_t *)(v15 + v17 + 5) = *((uint8_t *)v5 + v17 + 5);
                        if ( v25 > v17 + 6 )
                        {
                          *(uint8_t *)(v15 + v17 + 6) = *((uint8_t *)v5 + v17 + 6);
                          if ( v25 > v17 + 7 )
                          {
                            *(uint8_t *)(v15 + v17 + 7) = *((uint8_t *)v5 + v17 + 7);
                            if ( v25 > v17 + 8 )
                            {
                              *(uint8_t *)(v15 + v17 + 8) = *((uint8_t *)v5 + v17 + 8);
                              if ( v25 > v17 + 9 )
                              {
                                *(uint8_t *)(v15 + v17 + 9) = *((uint8_t *)v5 + v17 + 9);
                                if ( v25 > v17 + 10 )
                                {
                                  *(uint8_t *)(v15 + v17 + 10) = *((uint8_t *)v5 + v17 + 10);
                                  if ( v25 > v17 + 11 )
                                  {
                                    *(uint8_t *)(v15 + v17 + 11) = *((uint8_t *)v5 + v17 + 11);
                                    if ( v25 > v17 + 12 )
                                    {
                                      *(uint8_t *)(v15 + v17 + 12) = *((uint8_t *)v5 + v17 + 12);
                                      if ( v25 > v17 + 13 )
                                      {
                                        *(uint8_t *)(v15 + v17 + 13) = *((uint8_t *)v5 + v17 + 13);
                                        if ( v25 > v17 + 14 )
                                          *(uint8_t *)(v15 + v17 + 14) = *((uint8_t *)v5 + v17 + 14);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          v9 = 1;
          *((uint32_t *)v28 + 1) = v27;
        }
        else
        {
          v9 = 1;
        }
      }
LABEL_10:
      v5 = (hkString::Self *)*v29++;
      if ( v5 == nullptr )
      {
        v4 = v28;
        v8 = *((uint32_t *)v28 + 1);
        break;
      }
    }
  }
  if ( (*((uint32_t *)v4 + 2) & 0x3FFFFFFF) == v8 )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, v4, 1, v24);
    v8 = *((uint32_t *)v4 + 1);
  }
  *(uint8_t *)(*(uint32_t *)v4 + v8) = 0;
  ++*((uint32_t *)v4 + 1);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::replace  (binary VA: 0x1573090)
// Original: hkStringBuf::replace
// ----------------------------------------------------------------------------
int hkStringBuf::replace(uint32_t *a1, char a2, char a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint8_t *v7;
  uint8_t *v9;

  v4 = a1[1];
  if ( v4 <= 1 )
    return 0;
  if ( a4 != 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = (uint8_t *)(v5 + *a1);
        if ( *v7 == a2 )
          break;
        if ( ++v5 >= v4 - 1 )
          return v6;
      }
      ++v5;
      *v7 = a3;
      v4 = a1[1];
      v6 = 1;
    }
    while ( v5 < v4 - 1 );
    return v6;
  }
  v9 = (uint8_t *)*a1;
  while ( *v9 != a2 )
  {
    if ( ++v9 == (uint8_t *)(*a1 + v4 - 1) )
      return 0;
  }
  *v9 = a3;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::pathNormalize  (binary VA: 0x1573140)
// Original: hkStringBuf::pathNormalize
// ----------------------------------------------------------------------------
int hkStringBuf::pathNormalize(hkStringBuf::Self *self)
{
  int v1;
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int result;
  int v7;
  uint32_t *v8;
  const char *v9;
  typedef hkString::Self *_g4_t_v10;
  typedef const char *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef hkString::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[2];
  typedef int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v15)) > _g4_s5 ? (32u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v16)) > _g4_s6 ? (36u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v17)) > _g4_s7 ? (40u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v18)) > _g4_s8 ? (48u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v19)) > _g4_s9 ? (52u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v20)) > _g4_s10 ? (56u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v21)) > _g4_s11 ? (64u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v22)) > _g4_s12 ? (72u + sizeof(_g4_t_v22)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);

  hkStringBuf::Construct((hkStringBuf::Self *)v21, self);
  hkStringBuf::replace(v21, 92, 47, 1);
  v13 = (hkString::Self *)"//";
  if ( hkStringBuf::startsWith((hkStringBuf::Self *)v21, "//") == 0 )
  {
    v9 = "/";
    if ( hkStringBuf::startsWith((hkStringBuf::Self *)v21, "/") == 0 )
      v9 = (const char *)&unk_1B15112;
    v13 = (hkString::Self *)v9;
  }
  v15 = 0;
  v16 = 0;
  v17 = 0x80000000;
  hkStringBuf::split((hkStringBuf::Self *)v21, 47, (hkMemoryAllocator::Self *)&v15);
  v18 = 0;
  v19 = 0;
  v20 = 0x80000000;
  if ( v16 > 0 )
  {
    v14 = 0;
    v1 = 0;
    while ( 1 )
    {
      v2 = 4 * v1;
      if ( hkString::strCmp((hkString::Self *)"..", *(const char **)(v15 + 4 * v1), v11) == 0 )
        break;
      if ( hkString::strCmp((hkString::Self *)".", *(const char **)(v15 + 4 * v1), v11) != 0
        && hkString::strCmp(*(hkString::Self **)(v15 + 4 * v1), (const char *)&unk_1B15112, v11) != 0 )
      {
        v3 = v19;
        ++v14;
        v4 = (uint32_t *)(v15 + v2);
        if ( v19 == (v20 & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)&v18, 4, v12);
          v3 = v19;
        }
        ++v1;
        *(uint32_t *)(v18 + 4 * v3) = *v4;
        ++v19;
        if ( v16 <= v1 )
          goto LABEL_13;
      }
      else
      {
LABEL_6:
        if ( v16 <= ++v1 )
          goto LABEL_13;
      }
    }
    if ( v14 != 0 )
    {
      --v19;
      --v14;
    }
    else
    {
      v7 = v19;
      v8 = (uint32_t *)(v15 + v2);
      if ( v19 == (v20 & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)&v18, 4, v12);
        v7 = v19;
      }
      *(uint32_t *)(v18 + 4 * v7) = *v8;
      ++v19;
    }
    goto LABEL_6;
  }
LABEL_13:
  v5 = 0;
  hkStringBuf::opAssign(self, v13);
  if ( v19 > 0 )
  {
    do
    {
      v10 = *(hkString::Self **)(v18 + 4 * v5++);
      hkStringBuf::pathAppend(self, v10, nullptr, nullptr);
    }
    while ( v19 > v5 );
  }
  v19 = 0;
  if ( v20 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v18,
      4 * v20);
  v18 = 0;
  v20 = 0x80000000;
  v16 = 0;
  if ( v17 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v15,
      4 * v17);
  result = v22;
  v15 = 0;
  v17 = 0x80000000;
  v21[1] = 0;
  if ( v22 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             v21[0],
             v22 & 0x3FFFFFFF);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::replace  (binary VA: 0x1573470)
// Original: hkStringBuf::replace
// ----------------------------------------------------------------------------
int hkStringBuf::replace(hkStringBuf::Self *a1, hkString::Self *a2, hkString::Self *a3, int a4)
{
  hkString::Self *v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  int v9;
  uint8_t *v10;
  int v11;
  unsigned int v12;
  char *v13;
  char *v14;
  int v15;
  int v16;
  hkStringBuf::Self *v17;
  int v18;
  int v19;
  int v20;
  char v22;
  char *v23;
  int i;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  typedef const char *_g4_t_v30;
  typedef const char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef signed int _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef hkStringBuf::Self *_g4_t_v37;
  typedef hkStringBuf::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef signed int _g4_t_v43;
  typedef hkStringBuf::Self *_g4_t_v44;
  typedef hkString::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_j;
  typedef int _g4_t_v48;
  typedef char _g4_t_v49[4];
  typedef hkString::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef hkStringBuf::Self **_g4_t_v53;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v30)) > _g4_s0 ? (4u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v31)) > _g4_s1 ? (4u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v32)) > _g4_s2 ? (36u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v33)) > _g4_s3 ? (48u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v34)) > _g4_s4 ? (52u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v35)) > _g4_s5 ? (60u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v36)) > _g4_s6 ? (64u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v37)) > _g4_s7 ? (68u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v38)) > _g4_s8 ? (72u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v39)) > _g4_s9 ? (76u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v40)) > _g4_s10 ? (80u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v41)) > _g4_s11 ? (84u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v42)) > _g4_s12 ? (88u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v43)) > _g4_s13 ? (92u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v44)) > _g4_s14 ? (96u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v45)) > _g4_s15 ? (100u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v46)) > _g4_s16 ? (104u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_j)) > _g4_s17 ? (104u + sizeof(_g4_t_j)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v48)) > _g4_s18 ? (104u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v49)) > _g4_s19 ? (108u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v50)) > _g4_s20 ? (112u + sizeof(_g4_t_v50)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v51)) > _g4_s21 ? (116u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v52)) > _g4_s22 ? (120u + sizeof(_g4_t_v52)) : _g4_s22,
    _g4_s24 = (264u + sizeof(_g4_t_v53)) > _g4_s23 ? (264u + sizeof(_g4_t_v53)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 84u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 88u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 92u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 96u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 100u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 104u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 104u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 104u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 112u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 116u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 120u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 264u);

  v53 = &a1;
  v37 = a1;
  v4 = a3;
  v34 = a4;
  v36 = (char *)a2;
  v45 = a3;
  v35 = hkString::strLen(a2, v30);
  v43 = hkString::strLen(v4, v31);
  if ( v35 >= v43 )
  {
    v44 = nullptr;
    v46 = 0;
    v5 = *(uint32_t *)v37;
    v40 = 16 * ((unsigned int)v43 >> 4);
    v6 = 0;
    while ( 1 )
    {
      v7 = hkStringBuf::indexOf(v37, v36, v6);
      v42 = v7;
      if ( v7 == -1 )
      {
LABEL_37:
        v16 = v46;
        v17 = v44;
        if ( v46 < *((uint32_t *)v37 + 1) - 1 )
        {
          do
          {
            ++v16;
            v17 = (hkStringBuf::Self *)((char *)v17 + 1);
            *((uint8_t *)v17 + v5 - 1) = *(uint8_t *)(v5 + v16 - 1);
          }
          while ( v16 < *((uint32_t *)v37 + 1) - 1 );
          v44 = v17;
        }
        *((uint8_t *)v17 + v5) = 0;
        v18 = (int)(uintptr_t)(v17) + 1;
        v19 = *((uint32_t *)v37 + 2) & 0x3FFFFFFF;
        if ( v18 > v19 )
        {
          v25 = 2 * v19;
          if ( v18 >= v25 )
            v25 = v18;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v49,
            (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
            (int *)v37,
            v25,
            1);
        }
        *((uint32_t *)v37 + 1) = v18;
        v20 = 0;
        *((uint8_t *)v44 + *(uint32_t *)v37) = 0;
        return v20;
      }
      if ( v46 < v7 )
      {
        v41 = v7 - v46;
        v8 = (char *)(v5 + v46);
        v38 = v44;
        v39 = v46;
        if ( ((unsigned int)(uintptr_t)(v44) + v5 >= v5 + v46 + 16 || v5 + v46 >= (unsigned int)(uintptr_t)(v44) + v5 + 16) && v41 > 0xF )
        {
          if ( 16 * (v41 >> 4) == 0 )
            goto LABEL_79;
          v9 = 0;
          v33 = 0;
          v32 = 16 * (v41 >> 4);
          do
          {
            ++v33;
            *(__m128i *)((char *)v44 + v5 + v9) = *(__m128i *)&v8[v9];
            v9 += 16;
          }
          while ( v41 >> 4 > v33 );
          v44 = (hkStringBuf::Self *)((char *)v44 + v32);
          v46 += v32;
          if ( v41 != v32 )
          {
LABEL_79:
            *((uint8_t *)v44 + v5) = *(uint8_t *)(v5 + v46);
            if ( v42 > v46 + 1 )
            {
              *((uint8_t *)v44 + v5 + 1) = *(uint8_t *)(v5 + v46 + 1);
              if ( v42 > v46 + 2 )
              {
                *((uint8_t *)v44 + v5 + 2) = *(uint8_t *)(v5 + v46 + 2);
                if ( v42 > v46 + 3 )
                {
                  *((uint8_t *)v44 + v5 + 3) = *(uint8_t *)(v5 + v46 + 3);
                  if ( v42 > v46 + 4 )
                  {
                    *((uint8_t *)v44 + v5 + 4) = *(uint8_t *)(v5 + v46 + 4);
                    if ( v42 > v46 + 5 )
                    {
                      *((uint8_t *)v44 + v5 + 5) = *(uint8_t *)(v5 + v46 + 5);
                      if ( v42 > v46 + 6 )
                      {
                        *((uint8_t *)v44 + v5 + 6) = *(uint8_t *)(v5 + v46 + 6);
                        if ( v42 > v46 + 7 )
                        {
                          *((uint8_t *)v44 + v5 + 7) = *(uint8_t *)(v5 + v46 + 7);
                          if ( v42 > v46 + 8 )
                          {
                            *((uint8_t *)v44 + v5 + 8) = *(uint8_t *)(v5 + v46 + 8);
                            if ( v42 > v46 + 9 )
                            {
                              *((uint8_t *)v44 + v5 + 9) = *(uint8_t *)(v5 + v46 + 9);
                              if ( v42 > v46 + 10 )
                              {
                                *((uint8_t *)v44 + v5 + 10) = *(uint8_t *)(v5 + v46 + 10);
                                if ( v42 > v46 + 11 )
                                {
                                  *((uint8_t *)v44 + v5 + 11) = *(uint8_t *)(v5 + v46 + 11);
                                  if ( v42 > v46 + 12 )
                                  {
                                    *((uint8_t *)v44 + v5 + 12) = *(uint8_t *)(v5 + v46 + 12);
                                    if ( v42 > v46 + 13 )
                                    {
                                      *((uint8_t *)v44 + v5 + 13) = *(uint8_t *)(v5 + v46 + 13);
                                      if ( v42 > v46 + 14 )
                                        *((uint8_t *)v44 + v5 + 14) = *(uint8_t *)(v5 + v46 + 14);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          do
          {
            v22 = *v8;
            v23 = &v8[-v46];
            ++v8;
            *((uint8_t *)v44 + (uint32_t)(uintptr_t)(v23)) = v22;
          }
          while ( v8 != (char *)(v42 + v5) );
        }
        v46 = v42;
        v44 = (hkStringBuf::Self *)((char *)v38 + v42 - v39);
      }
      if ( v43 > 0 )
      {
        v10 = (uint8_t *)((char *)v44 + v5);
        if ( (char *)v44 + v5 < (char *)v45 + 16 && v45 < (hkString::Self *)(uintptr_t)((hkString::Self *)(uintptr_t)((hkStringBuf::Self *)((char *)v44 + v5 + 16)
))          || (unsigned int)v43 <= 0xF )
        {
          for ( i = 0; i != v43; ++i )
            v10[i] = *((uint8_t *)v45 + i);
          goto LABEL_58;
        }
        if ( v40 == 0 )
        {
          v14 = (char *)v44 + 1;
          *v10 = *(uint8_t *)v45;
          v15 = 1;
LABEL_44:
          v14[v5] = *((uint8_t *)v45 + v15);
          if ( v43 > v15 + 1 )
          {
            v14[v5 + 1] = *((uint8_t *)v45 + v15 + 1);
            if ( v43 > v15 + 2 )
            {
              v14[v5 + 2] = *((uint8_t *)v45 + v15 + 2);
              if ( v43 > v15 + 3 )
              {
                v14[v5 + 3] = *((uint8_t *)v45 + v15 + 3);
                if ( v43 > v15 + 4 )
                {
                  v14[v5 + 4] = *((uint8_t *)v45 + v15 + 4);
                  if ( v43 > v15 + 5 )
                  {
                    v14[v5 + 5] = *((uint8_t *)v45 + v15 + 5);
                    if ( v43 > v15 + 6 )
                    {
                      v14[v5 + 6] = *((uint8_t *)v45 + v15 + 6);
                      if ( v43 > v15 + 7 )
                      {
                        v14[v5 + 7] = *((uint8_t *)v45 + v15 + 7);
                        if ( v43 > v15 + 8 )
                        {
                          v14[v5 + 8] = *((uint8_t *)v45 + v15 + 8);
                          if ( v43 > v15 + 9 )
                          {
                            v14[v5 + 9] = *((uint8_t *)v45 + v15 + 9);
                            if ( v43 > v15 + 10 )
                            {
                              v14[v5 + 10] = *((uint8_t *)v45 + v15 + 10);
                              if ( v43 > v15 + 11 )
                              {
                                v14[v5 + 11] = *((uint8_t *)v45 + v15 + 11);
                                if ( v43 > v15 + 12 )
                                {
                                  v14[v5 + 12] = *((uint8_t *)v45 + v15 + 12);
                                  if ( v43 > v15 + 13 )
                                    v14[v5 + 13] = *((uint8_t *)v45 + v15 + 13);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_58:
          v44 = (hkStringBuf::Self *)((char *)v44 + v43);
          goto LABEL_36;
        }
        v11 = 0;
        v12 = 0;
        do
        {
          ++v12;
          *(__m128i *)&v10[v11] = *(__m128i *)((char *)v45 + v11);
          v11 += 16;
        }
        while ( (unsigned int)v43 >> 4 > v12 );
        v13 = (char *)v44 + v40;
        if ( v40 == v43 )
          goto LABEL_58;
        v14 = v13 + 1;
        v13[v5] = *((uint8_t *)v45 + v40);
        v15 = v40 + 1;
        if ( v43 > v40 + 1 )
          goto LABEL_44;
        v44 = (hkStringBuf::Self *)((char *)v44 + v43);
      }
LABEL_36:
      v46 += v35;
      v6 = v35 + v42;
      if ( v34 == 0 )
        goto LABEL_37;
    }
  }
  hkStringBuf::Construct((hkStringBuf::Self *)&v50, v37);
  hkStringBuf::clear(v37);
  if ( v34 != 0 )
  {
    v26 = 0;
    for ( j = 0; ; j = 1 )
    {
      v27 = hkStringBuf::indexOf((hkStringBuf::Self *)&v50, v36, v26);
      if ( v27 < 0 )
        break;
      v48 = v27;
      hkStringBuf::append(v37, (hkString::Self *)((char *)v50 + v26), v27 - v26);
      hkStringBuf::append(v37, v45, v43);
      v26 = v48 + v35;
    }
    v20 = j;
  }
  else
  {
    v28 = hkStringBuf::indexOf((hkStringBuf::Self *)&v50, v36, 0);
    v29 = v28;
    if ( v28 < 0 )
    {
      v26 = 0;
      v20 = 0;
    }
    else
    {
      hkStringBuf::append(v37, v50, v28);
      v20 = 1;
      hkStringBuf::append(v37, v45, v43);
      v26 = v35 + v29;
    }
  }
  hkStringBuf::append(v37, (hkString::Self *)((char *)v50 + v26), v51 + ~v26);
  v51 = 0;
  if ( v52 < 0 )
    return v20;
  (*(void (**)(uint32_t *, hkString::Self *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
    (uint32_t *)(hkContainerTempAllocator::s_alloc),
    v50,
    v52 & 0x3FFFFFFF,
    0x7FFFFFFF);
  return v20;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::lowerCase  (binary VA: 0x1573d80)
// Original: hkStringBuf::lowerCase
// ----------------------------------------------------------------------------
int hkStringBuf::lowerCase()
{
  int result;
  char *v1;
  char v2;
  void *retaddr;

  result = 0;
  if ( (*(int **)((char *)&retaddr + 3))[1] > 1 )
  {
    do
    {
      v1 = (char *)(**(uint32_t **)((char *)&retaddr + 3) + result);
      v2 = *v1;
      if ( (uint8_t)(*v1 - 65) <= 0x19u )
        v2 = *v1 + 32;
      ++result;
      *v1 = v2;
    }
    while ( result < (*(uint32_t **)((char *)&retaddr + 3))[1] - 1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::upperCase  (binary VA: 0x1573de0)
// Original: hkStringBuf::upperCase
// ----------------------------------------------------------------------------
int hkStringBuf::upperCase()
{
  int result;
  char *v1;
  char v2;
  void *retaddr;

  result = 0;
  if ( (*(int **)((char *)&retaddr + 3))[1] > 1 )
  {
    do
    {
      v1 = (char *)(**(uint32_t **)((char *)&retaddr + 3) + result);
      v2 = *v1;
      if ( (uint8_t)(*v1 - 97) <= 0x19u )
        v2 = *v1 - 32;
      ++result;
      *v1 = v2;
    }
    while ( result < (*(uint32_t **)((char *)&retaddr + 3))[1] - 1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStringBuf::getArray  (binary VA: 0x1573e40)
// Original: hkStringBuf::getArray
// ----------------------------------------------------------------------------
hkStringBuf::Self * hkStringBuf::getArray(hkStringBuf::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkClassEnum::Item::staticClass  (binary VA: 0x1573e70)
// Original: hkClassEnum::Item::staticClass
// ----------------------------------------------------------------------------
void * hkClassEnum::Item::staticClass()
{
  return &hkClassEnumItemClass;
}

// ----------------------------------------------------------------------------
// Function: hkClassEnum::staticClass  (binary VA: 0x1573e90)
// Original: hkClassEnum::staticClass
// ----------------------------------------------------------------------------
void * hkClassEnum::staticClass()
{
  return &hkClassEnumClass;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::FixedMemoryBlockServer::blockAlloc  (binary VA: 0x1574030)
// Original: hkLargeBlockAllocator::FixedMemoryBlockServer::blockAlloc
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::FixedMemoryBlockServer::blockAlloc()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::FixedMemoryBlockServer::blockFree  (binary VA: 0x1574040)
// Original: hkLargeBlockAllocator::FixedMemoryBlockServer::blockFree
// ----------------------------------------------------------------------------
void hkLargeBlockAllocator::FixedMemoryBlockServer::blockFree()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::FixedMemoryBlockServer::getAllocatedSize  (binary VA: 0x1574050)
// Original: hkLargeBlockAllocator::FixedMemoryBlockServer::getAllocatedSize
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::FixedMemoryBlockServer::getAllocatedSize(hkLargeBlockAllocator::FixedMemoryBlockServer::Self *self, const void *a2, int a3)
{
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::getExtendedInterface  (binary VA: 0x1574060)
// Original: hkLargeBlockAllocator::getExtendedInterface
// ----------------------------------------------------------------------------
char * hkLargeBlockAllocator::getExtendedInterface(hkLargeBlockAllocator::Self *self)
{
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::FixedMemoryBlockServer::bufAlloc  (binary VA: 0x1574070)
// Original: hkLargeBlockAllocator::FixedMemoryBlockServer::bufAlloc
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::FixedMemoryBlockServer::bufAlloc(hkLargeBlockAllocator::FixedMemoryBlockServer::Self *self, int *a2)
{
  int result;
  int v3;
  int v4;

  result = 0;
  v3 = *((uint32_t *)self + 4);
  if ( v3 == *((uint32_t *)self + 1) )
  {
    v4 = *((uint32_t *)self + 3) - v3;
    if ( v4 >= *a2 )
    {
      *((uint32_t *)self + 4) = *((uint32_t *)self + 3);
      *a2 = v4;
      return *((uint32_t *)self + 1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::FixedMemoryBlockServer::bufFree  (binary VA: 0x15740a0)
// Original: hkLargeBlockAllocator::FixedMemoryBlockServer::bufFree
// ----------------------------------------------------------------------------
hkLargeBlockAllocator::FixedMemoryBlockServer::Self * hkLargeBlockAllocator::FixedMemoryBlockServer::bufFree(hkLargeBlockAllocator::FixedMemoryBlockServer::Self *self, void *a2, int a3)
{
  hkLargeBlockAllocator::FixedMemoryBlockServer::Self *result;
  int v4;
  int v5;

  result = self;
  v4 = *((uint32_t *)self + 4);
  v5 = *((uint32_t *)self + 1);
  if ( v4 != v5 && v4 - v5 == a3 )
    *((uint32_t *)self + 4) = 0;
  else
    __builtin_debugtrap();
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::FixedMemoryBlockServer::getMemoryStatistics  (binary VA: 0x15740c0)
// Original: hkLargeBlockAllocator::FixedMemoryBlockServer::getMemoryStatistics
// ----------------------------------------------------------------------------
int * hkLargeBlockAllocator::FixedMemoryBlockServer::getMemoryStatistics(uint32_t *a1, int *a2)
{
  int v3;
  int v4;

  v3 = a1[4] - a1[1];
  *a2 = v3;
  a2[1] = v3;
  a2[2] = v3;
  v4 = a1[2] - a1[4];
  a2[3] = v4;
  a2[4] = v4;
  a2[5] = a1[2] - a1[1];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::incrementalGarbageCollect  (binary VA: 0x15740f0)
// Original: hkLargeBlockAllocator::incrementalGarbageCollect
// ----------------------------------------------------------------------------
void hkLargeBlockAllocator::incrementalGarbageCollect()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::setMemorySoftLimit  (binary VA: 0x1574110)
// Original: hkLargeBlockAllocator::setMemorySoftLimit
// ----------------------------------------------------------------------------
hkLargeBlockAllocator::Self * hkLargeBlockAllocator::setMemorySoftLimit(hkLargeBlockAllocator::Self *self, unsigned int a2)
{
  *(uint32_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::getMemorySoftLimit  (binary VA: 0x1574130)
// Original: hkLargeBlockAllocator::getMemorySoftLimit
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::getMemorySoftLimit()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::getApproxTotalAllocated  (binary VA: 0x1574150)
// Original: hkLargeBlockAllocator::getApproxTotalAllocated
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::getApproxTotalAllocated(hkLargeBlockAllocator::Self *self)
{
  return *((uint32_t *)self + 54);
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::setScrubValues  (binary VA: 0x1574170)
// Original: hkLargeBlockAllocator::setScrubValues
// ----------------------------------------------------------------------------
void hkLargeBlockAllocator::setScrubValues()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::canAllocTotal  (binary VA: 0x1574190)
// Original: hkLargeBlockAllocator::canAllocTotal
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::canAllocTotal(hkLargeBlockAllocator::Self *self, int a2)
{
  int v2;
  int v3;

  v2 = G4_VCALL<int>(self, 8, a2);
  v3 = 0;
  if ( v2 != 0 )
  {
    G4_VCALL<void>(self, 12, v2, a2);
    return 1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::getAllocatedSize  (binary VA: 0x15741e0)
// Original: hkLargeBlockAllocator::getAllocatedSize
// ----------------------------------------------------------------------------
unsigned int hkLargeBlockAllocator::getAllocatedSize(hkLargeBlockAllocator::Self *self, uint32_t *a2)
{
  return (*(a2 - 3) & 0xFFFFFFFC) - 16;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::FixedMemoryBlockServer::Destroy  (binary VA: 0x15741f0)
// Original: hkLargeBlockAllocator::FixedMemoryBlockServer::~FixedMemoryBlockServer
// ----------------------------------------------------------------------------
void hkLargeBlockAllocator::FixedMemoryBlockServer::Destroy(hkLargeBlockAllocator::FixedMemoryBlockServer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097508);
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::Destroy  (binary VA: 0x1574220)
// Original: hkLargeBlockAllocator::~hkLargeBlockAllocator
// ----------------------------------------------------------------------------
void hkLargeBlockAllocator::Destroy(hkLargeBlockAllocator::Self *self)
{
  hkLargeBlockAllocator::Self *v1;
  hkLargeBlockAllocator::Self *v2;

  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_20975A8);
  v1 = *((hkLargeBlockAllocator::Self **)self + 48);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097548);
  if ( v1 != (hkLargeBlockAllocator::Self *)((char *)self + 188) )
  {
    while ( 1 )
    {
      v2 = *((hkLargeBlockAllocator::Self **)v1 + 1);
      (*(void (**)(uint32_t, hkLargeBlockAllocator::Self *, uint32_t))(**((uint32_t **)self + 44) + 20))(
        *((uint32_t *)self + 44),
        v1,
        *((uint32_t *)v1 + 3));
      if ( (hkLargeBlockAllocator::Self *)((char *)self + 188) == v2 )
        break;
      v1 = v2;
    }
  }
  *((uint32_t *)self + 39) = ((uint32_t)(uintptr_t)&off_2097508);
  hkMemoryAllocator::Destroy((hkLargeBlockAllocator::Self *)((char *)self + 156));
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2096AE8);
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::Destroy_ea15742e0  (binary VA: 0x15742e0)
// Original: hkLargeBlockAllocator::~hkLargeBlockAllocator
// ----------------------------------------------------------------------------
void hkLargeBlockAllocator::Destroy_ea15742e0(hkLargeBlockAllocator::Self *self)
{
  hkLargeBlockAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::FixedMemoryBlockServer::Destroy_ea1574320  (binary VA: 0x1574320)
// Original: hkLargeBlockAllocator::FixedMemoryBlockServer::~FixedMemoryBlockServer
// ----------------------------------------------------------------------------
void hkLargeBlockAllocator::FixedMemoryBlockServer::Destroy_ea1574320(hkLargeBlockAllocator::FixedMemoryBlockServer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097508);
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::addToSnapshot  (binary VA: 0x1574350)
// Original: hkLargeBlockAllocator::addToSnapshot
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::addToSnapshot(hkLargeBlockAllocator::Self *self, hkMemorySnapshot::Self *a2, int a3)
{
  int v3;
  int v4;
  int v6;
  uint32_t *i;
  int v8;
  int v9;

  v9 = hkMemorySnapshot::addProvider(a2, "hkLargeBlockAllocator", a3);
  for ( i = *((uint32_t **)self + 48); i != (uint32_t *)((char *)self + 188); i = (uint32_t *)i[1] )
  {
    hkMemorySnapshot::addItem((int)(uintptr_t)(a2), a3, 1, (int)(uintptr_t)(i), i[3]);
    v3 = (int)(uintptr_t)(i);
    v4 = i[4];
    v8 = i[5] - 16;
    v6 = v3 + *(uint32_t *)(v3 + 12);
    hkMemorySnapshot::addItem((int)(uintptr_t)(a2), v9, 0, v3, v4 - v3);
    for ( ; v8 != v4; v4 += *(uint32_t *)(v4 + 4) & 0xFFFFFFFC )
    {
      hkMemorySnapshot::addItem((int)(uintptr_t)(a2), v9, 0, v4, 16);
      hkMemorySnapshot::addItem(
        (int)(uintptr_t)(a2),
        v9,
        2 - ((*(uint32_t *)(v4 + 4) & 2) != 0),
        v4 + 16,
        (*(uint32_t *)(v4 + 4) & 0xFFFFFFFC) - 16);
    }
    hkMemorySnapshot::addItem((int)(uintptr_t)(a2), v9, 0, v8, v6 - v8);
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::FixedMemoryBlockServer::Construct  (binary VA: 0x15744e0)
// Original: hkLargeBlockAllocator::FixedMemoryBlockServer::FixedMemoryBlockServer
// ----------------------------------------------------------------------------
hkLargeBlockAllocator::FixedMemoryBlockServer::Self * hkLargeBlockAllocator::FixedMemoryBlockServer::Construct(hkLargeBlockAllocator::FixedMemoryBlockServer::Self *self, void *a2, int a3)
{
  unsigned int v4;
  unsigned int v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097508);
  v4 = ((unsigned int)(uintptr_t)(a2) + 15) & 0xFFFFFFF0;
  v5 = ((unsigned int)(uintptr_t)(a2) + a3) & 0xFFFFFFF0;
  *((uint32_t *)self + 1) = v4;
  *((uint32_t *)self + 2) = v5;
  *((uint32_t *)self + 3) = v5;
  *((uint32_t *)self + 4) = v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::FixedMemoryBlockServer::resize  (binary VA: 0x1574520)
// Original: hkLargeBlockAllocator::FixedMemoryBlockServer::resize
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::FixedMemoryBlockServer::resize(hkLargeBlockAllocator::FixedMemoryBlockServer::Self *self, char *a2, int a3, unsigned int a4, unsigned int *a5)
{
  int result;
  char *v6;
  char *v7;

  result = 0;
  v6 = *((char **)self + 1);
  if ( v6 == a2 )
  {
    v7 = &v6[a4];
    if ( !__CFADD__(a4, v6) && (unsigned int)(uintptr_t)(v7) <= *((uint32_t *)self + 3) )
    {
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v7);
      *a5 = a4;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::init  (binary VA: 0x1574560)
// Original: hkLargeBlockAllocator::_init
// ----------------------------------------------------------------------------
char * hkLargeBlockAllocator::init(hkLargeBlockAllocator::Self *self)
{
  unsigned int v1;
  char *v2;
  char *v3;

  v1 = 128;
  v2 = (char *)self + 28;
  *((uint32_t *)self + 54) = 0;
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  if ( (((unsigned int)(uintptr_t)(self) + 28) & 1) != 0 )
  {
    v2 = (char *)self + 29;
    *((uint8_t *)self + 28) = 0;
    LOWORD(v1) = 127;
    if ( (((unsigned int)(uintptr_t)(self) + 29) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v2) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v2 = 0;
  v1 -= 2;
  v2 += 2;
LABEL_3:
  memset(v2, 0, 4 * (v1 >> 2));
  v3 = &v2[4 * (v1 >> 2)];
  if ( (v1 & 2) != 0 )
  {
    *(uint16_t *)v3 = 0;
    v3 += 2;
  }
  if ( (v1 & 1) != 0 )
    *v3 = 0;
  *((uint32_t *)self + 46) = 3;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 180);
  *((uint32_t *)self + 48) = (uint32_t)(uintptr_t)((char *)self + 188);
  *((uint32_t *)self + 47) = (uint32_t)(uintptr_t)((char *)self + 188);
  return (char *)self + 188;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::Construct  (binary VA: 0x1574630)
// Original: hkLargeBlockAllocator::hkLargeBlockAllocator
// ----------------------------------------------------------------------------
void hkLargeBlockAllocator::Construct(hkLargeBlockAllocator::Self *self, hkMemoryAllocator::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097548);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_20975A8);
  *((uint32_t *)self + 2) = 0;
  hkLargeBlockAllocator::FixedMemoryBlockServer::Construct(
    (hkLargeBlockAllocator::FixedMemoryBlockServer::Self *)((hkLargeBlockAllocator::Self *)((char *)self + 156)),
    nullptr,
    0);
  *((uint32_t *)self + 44) = (uint32_t)(uintptr_t)(a2);
  hkLargeBlockAllocator::init(self);
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::Construct  (binary VA: 0x15746a0)
// Original: hkLargeBlockAllocator::hkLargeBlockAllocator
// ----------------------------------------------------------------------------
void hkLargeBlockAllocator::Construct(hkLargeBlockAllocator::Self *self, void *a2, int a3)
{
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_20975A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097548);
  *((uint32_t *)self + 2) = 0;
  hkLargeBlockAllocator::FixedMemoryBlockServer::Construct(
    (hkLargeBlockAllocator::FixedMemoryBlockServer::Self *)((hkLargeBlockAllocator::Self *)((char *)self + 156)),
    a2,
    a3);
  *((uint32_t *)self + 44) = (uint32_t)(uintptr_t)((char *)self + 156);
  hkLargeBlockAllocator::init(self);
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::freeAll  (binary VA: 0x1574710)
// Original: hkLargeBlockAllocator::freeAll
// ----------------------------------------------------------------------------
char * hkLargeBlockAllocator::freeAll(hkLargeBlockAllocator::Self *self)
{
  hkLargeBlockAllocator::Self *v1;
  hkLargeBlockAllocator::Self *v2;

  v1 = *((hkLargeBlockAllocator::Self **)self + 48);
  if ( v1 != (hkLargeBlockAllocator::Self *)((char *)self + 188) )
  {
    while ( 1 )
    {
      v2 = *((hkLargeBlockAllocator::Self **)v1 + 1);
      (*(void (**)(uint32_t, hkLargeBlockAllocator::Self *, uint32_t))(**((uint32_t **)self + 44) + 20))(
        *((uint32_t *)self + 44),
        v1,
        *((uint32_t *)v1 + 3));
      if ( (hkLargeBlockAllocator::Self *)((char *)self + 188) == v2 )
        break;
      v1 = v2;
    }
  }
  return hkLargeBlockAllocator::init(self);
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::insertLargeChunk  (binary VA: 0x1574780)
// Original: hkLargeBlockAllocator::_insertLargeChunk
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::insertLargeChunk(int a1, uint32_t *a2, unsigned int a3)
{
  int result;
  unsigned int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;

  result = a3;
  v4 = a3 >> 8;
  if ( a3 >> 8 != 0 )
  {
    if ( v4 <= 0xFFFF )
    {
      v14 = ((v4 - 256) >> 16) & 8;
      v15 = v4 << (((v4 - 256) >> 16) & 8);
      v16 = ((v15 - 4096) >> 16) & 4;
      v17 = v15 << (((v15 - 4096) >> 16) & 4);
      v18 = (v17 << (((v17 - 0x4000) >> 16) & 2) >> 15) - (((v17 - 0x4000) >> 16) & 2) - (v16 + v14);
      v7 = ((a3 >> (v18 + 21)) & 1) + 2 * v18 + 28;
      v6 = v7;
      v5 = 1 << v7;
    }
    else
    {
      v5 = 0x80000000;
      v6 = 31;
      v7 = 31;
    }
  }
  else
  {
    v5 = 1;
    v6 = 0;
    v7 = 0;
  }
  a2[7] = v7;
  a2[5] = 0;
  a2[4] = 0;
  v8 = *(uint32_t *)(a1 + 12);
  if ( (v8 & v5) != 0 )
  {
    v9 = *(uint32_t *)(a1 + 4 * v7 + 28);
    v10 = 0;
    if ( v6 != 31 )
      v10 = 25 - (v6 >> 1);
    v11 = a3 << v10;
    while ( 1 )
    {
      if ( a3 == (*(uint32_t *)(v9 + 4) & 0xFFFFFFFC) )
      {
        result = *(uint32_t *)(v9 + 8);
        *(uint32_t *)(result + 12) = (uint32_t)(uintptr_t)(a2);
        *(uint32_t *)(v9 + 8) = (uint32_t)(uintptr_t)(a2);
        a2[2] = result;
        a2[3] = v9;
        a2[6] = 0;
        return result;
      }
      v12 = v11;
      v11 *= 2;
      v13 = (v12 >> 31) + 4;
      if ( *(uint32_t *)(v9 + 4 * v13) == 0 )
        break;
      v9 = *(uint32_t *)(v9 + 4 * v13);
    }
    *(uint32_t *)(v9 + 4 * v13) = (uint32_t)(uintptr_t)(a2);
    a2[6] = v9;
    a2[2] = (uint32_t)(uintptr_t)(a2);
    a2[3] = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    v19 = v7 + 4;
    *(uint32_t *)(a1 + 12) = v8 | v5;
    *(uint32_t *)(a1 + 4 * v19 + 12) = (uint32_t)(uintptr_t)(a2);
    a2[2] = (uint32_t)(uintptr_t)(a2);
    a2[3] = (uint32_t)(uintptr_t)(a2);
    result = a1 + 4 * v19 + 12;
    a2[6] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::unlinkLargeChunk  (binary VA: 0x15748e0)
// Original: hkLargeBlockAllocator::_unlinkLargeChunk
// ----------------------------------------------------------------------------
unsigned int hkLargeBlockAllocator::unlinkLargeChunk(int a1, uint32_t *a2)
{
  unsigned int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;

  result = a2[3];
  v3 = a2[6];
  if ( (uint32_t *)result == a2 )
  {
    v8 = *(uint32_t **)(result + 20);
    v9 = (uint32_t *)(result + 20);
    if ( v8 != nullptr || (v8 = *(uint32_t **)(result + 16), v9 = (uint32_t *)(result + 16), result = 0, v8 != nullptr) )
    {
      while ( 1 )
      {
        v10 = (uint32_t *)v8[5];
        v11 = v8 + 5;
        if ( v10 == nullptr )
        {
          v10 = (uint32_t *)v8[4];
          v11 = v8 + 4;
          if ( v10 == nullptr )
            break;
        }
        v8 = v10;
        v9 = v11;
      }
      *v9 = 0;
      result = (unsigned int)(uintptr_t)(v8);
    }
  }
  else
  {
    v4 = a2[2];
    *(uint32_t *)(v4 + 12) = result;
    *(uint32_t *)(result + 8) = v4;
  }
  if ( v3 != 0 )
  {
    v5 = a1 + 4 * a2[7];
    if ( *(uint32_t **)(v5 + 28) == a2 )
    {
      *(uint32_t *)(v5 + 28) = result;
      if ( result == 0 )
      {
        result = __builtin_rotateleft32(-2, a2[7]);
        *(uint32_t *)(a1 + 12) &= result;
        return result;
      }
    }
    else
    {
      if ( *(uint32_t **)(v3 + 16) == a2 )
        *(uint32_t *)(v3 + 16) = result;
      else
        *(uint32_t *)(v3 + 20) = result;
      if ( result == 0 )
        return result;
    }
    *(uint32_t *)(result + 24) = v3;
    v6 = a2[4];
    if ( v6 != 0 )
    {
      *(uint32_t *)(result + 16) = v6;
      *(uint32_t *)(v6 + 24) = result;
    }
    v7 = a2[5];
    if ( v7 != 0 )
    {
      *(uint32_t *)(result + 20) = v7;
      *(uint32_t *)(v7 + 24) = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::blockFree  (binary VA: 0x15749c0)
// Original: hkLargeBlockAllocator::blockFree
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::blockFree(hkLargeBlockAllocator::Self *self, uint32_t *a2)
{
  int result;
  int v3;
  unsigned int v4;
  uint32_t *v5;
  uint32_t *v6;
  unsigned int v7;
  unsigned int v8;
  int v9;

  result = (int)(uintptr_t)(a2);
  if ( a2 != nullptr )
  {
    v3 = *((uint32_t *)self + 54);
    v4 = *(a2 - 3) & 0xFFFFFFFC;
    v5 = a2 - 4;
    *((uint32_t *)self + 53) -= v4;
    *((uint32_t *)self + 54) = v3 + 16 - (*(a2 - 3) & 0xFFFFFFFC);
    v6 = (uint32_t *)((char *)a2 + v4 - 16);
    if ( (*(uint8_t *)(a2 - 3) & 1) == 0 )
    {
      v5 = (uint32_t *)((char *)v5 - *(a2 - 4));
      v9 = *(a2 - 4);
      hkLargeBlockAllocator::unlinkLargeChunk((int)(uintptr_t)(self), v5);
      v6 = (uint32_t *)((char *)a2 + v4 - 16);
      v4 += v9;
    }
    result = v6[1];
    if ( (result & 2) != 0 )
    {
      v6[1] = result & 0xFFFFFFFE;
      v5[1] = v4 | 1;
      *(uint32_t *)((char *)v5 + v4) = v4;
      return hkLargeBlockAllocator::insertLargeChunk((int)(uintptr_t)(self), v5, v4);
    }
    else if ( *((uint32_t **)self + 5) == v6 )
    {
      v8 = *((uint32_t *)self + 6) + v4;
      *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v5);
      *((uint32_t *)self + 6) = v8;
      v5[1] = v8 | 1;
    }
    else
    {
      v7 = (result & 0xFFFFFFFC) + v4;
      hkLargeBlockAllocator::unlinkLargeChunk((int)(uintptr_t)(self), v6);
      v5[1] = v7 | 1;
      *(uint32_t *)((char *)v5 + v7) = v7;
      return hkLargeBlockAllocator::insertLargeChunk((int)(uintptr_t)(self), v5, v7);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::allocLarge  (binary VA: 0x1574ad0)
// Original: hkLargeBlockAllocator::_allocLarge
// ----------------------------------------------------------------------------
uint32_t * hkLargeBlockAllocator::allocLarge(hkLargeBlockAllocator::Self *self, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  char v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  signed int v11;
  int v12;
  unsigned int v13;
  uint32_t *v14;
  unsigned int v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  uint32_t *result;
  int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  char *v29;
  int v30;
  uint32_t *v31;
  char v32;

  v2 = -a2;
  v3 = a2 >> 8;
  if ( a2 >> 8 == 0 )
  {
    LOBYTE(v12) = 25;
    v32 = 0;
    v5 = *((uint32_t *)self + 7);
    if ( v5 == 0 )
    {
      v5 = -2;
      goto LABEL_33;
    }
    goto LABEL_8;
  }
  if ( v3 > 0xFFFF )
  {
    v4 = 0;
    v32 = 31;
    v5 = *((uint32_t *)self + 38);
    if ( v5 == 0 )
    {
LABEL_33:
      result = nullptr;
      v21 = *((uint32_t *)self + 3) & v5;
      if ( v21 != 0 )
      {
        v22 = (v21 & -v21) - 1;
        v23 = (v22 >> 12) & 0x10;
        v24 = v22 >> ((v22 >> 12) & 0x10);
        v25 = ((v24 >> 5) & 8) + v23;
        v26 = v24 >> ((v24 >> 5) & 8);
        v27 = (v26 >> 2) & 4;
        v28 = v26 >> ((v26 >> 2) & 4);
        v31 = nullptr;
        v14 = *((uint32_t **)self
              + (v28 >> ((v28 >> 1) & 2) >> (((v28 >> ((v28 >> 1) & 2)) & 2) != 0))
              + ((v28 >> 1) & 2)
              + v27
              + v25
              + (((v28 >> ((v28 >> 1) & 2)) & 2) != 0)
              + 7);
        goto LABEL_19;
      }
      return result;
    }
    goto LABEL_9;
  }
  v6 = ((v3 - 256) >> 16) & 8;
  v7 = v3 << (((v3 - 256) >> 16) & 8);
  v8 = v6 + (((v7 - 4096) >> 16) & 4);
  v9 = v7 << (((v7 - 4096) >> 16) & 4);
  v10 = (v9 << (((v9 - 0x4000) >> 16) & 2) >> 15) - (((v9 - 0x4000) >> 16) & 2) - v8;
  v11 = ((a2 >> (v10 + 21)) & 1) + 2 * v10 + 28;
  v32 = v11;
  v5 = *((uint32_t *)self + v11 + 7);
  if ( v5 == 0 )
    goto LABEL_32;
  v4 = 0;
  if ( v11 != 31 )
  {
    v12 = 25 - (v11 >> 1);
LABEL_8:
    v4 = v12;
  }
LABEL_9:
  v31 = nullptr;
  v13 = a2 << v4;
  v14 = nullptr;
  while ( 1 )
  {
    v15 = (*(uint32_t *)(v5 + 4) & 0xFFFFFFFC) - a2;
    if ( v2 > v15 )
      break;
LABEL_14:
    v16 = *(uint32_t **)(v5 + 20);
    v5 = *(uint32_t *)(v5 + 4 * ((v13 >> 31) + 4));
    if ( v16 != (uint32_t *)v5 && v16 != nullptr )
      v14 = v16;
    if ( v5 == 0 )
      goto LABEL_18;
    v13 *= 2;
  }
  if ( v15 != 0 )
  {
    v2 = (*(uint32_t *)(v5 + 4) & 0xFFFFFFFC) - a2;
    v31 = (uint32_t *)v5;
    goto LABEL_14;
  }
  v14 = (uint32_t *)v5;
  v2 = 0;
  v31 = (uint32_t *)v5;
LABEL_18:
  if ( v31 == nullptr && v14 == nullptr )
  {
LABEL_32:
    v5 = -2 << v32;
    goto LABEL_33;
  }
LABEL_19:
  v17 = v31;
  if ( v14 != nullptr )
  {
    while ( 1 )
    {
      if ( (v14[1] & 0xFFFFFFFC) - a2 < v2 )
      {
        v2 = (v14[1] & 0xFFFFFFFC) - a2;
        v17 = v14;
      }
      v18 = (uint32_t *)v14[4];
      if ( v18 == nullptr )
      {
        v18 = (uint32_t *)v14[5];
        if ( v18 == nullptr )
          break;
      }
      v14 = v18;
    }
    v31 = v17;
  }
  if ( v17 == nullptr )
    return nullptr;
  hkLargeBlockAllocator::unlinkLargeChunk((int)(uintptr_t)(self), v17);
  if ( v2 > 0xFF )
  {
    v29 = (char *)v31 + a2;
    v31[1] = a2 | 3;
    v30 = *((uint32_t *)self + 54);
    *((uint32_t *)self + 53) += a2;
    *((uint32_t *)self + 54) = a2 + v30 - 16;
    *((uint32_t *)v29 + 1) = v2 | 1;
    *(uint32_t *)&v29[v2] = v2;
    hkLargeBlockAllocator::insertLargeChunk((int)(uintptr_t)(self), (uint32_t *)((char *)v31 + a2), v2);
  }
  else
  {
    v17[1] = (v2 + a2) | 3;
    *(uint32_t *)((char *)v17 + v2 + a2 + 4) |= 1u;
    v19 = *((uint32_t *)self + 54);
    *((uint32_t *)self + 53) += v2 + a2;
    *((uint32_t *)self + 54) = v19 + v2 + a2 - 16;
  }
  return v31 + 4;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::findLargestTreeBlockSize  (binary VA: 0x1574dc0)
// Original: hkLargeBlockAllocator::_findLargestTreeBlockSize
// ----------------------------------------------------------------------------
unsigned int hkLargeBlockAllocator::findLargestTreeBlockSize(int a1, uint32_t *a2, unsigned int a3)
{
  uint32_t *v3;
  unsigned int result;
  uint32_t *v5;

  v3 = a2;
  result = a3;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      if ( result < (v3[1] & 0xFFFFFFFC) )
        result = v3[1] & 0xFFFFFFFC;
      v5 = (uint32_t *)v3[5];
      if ( v5 == nullptr )
      {
        v5 = (uint32_t *)v3[4];
        if ( v5 == nullptr )
          break;
      }
      v3 = v5;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::findLargestBlockSize  (binary VA: 0x1574e00)
// Original: hkLargeBlockAllocator::findLargestBlockSize
// ----------------------------------------------------------------------------
unsigned int hkLargeBlockAllocator::findLargestBlockSize(hkLargeBlockAllocator::Self *self)
{
  unsigned int v1;
  int v2;
  uint32_t *v3;
  int v4;
  unsigned int result;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;

  v1 = *((uint32_t *)self + 6) >> 8;
  if ( v1 != 0 )
  {
    v2 = 31;
    if ( v1 <= 0xFFFF )
    {
      v6 = ((v1 - 256) >> 16) & 8;
      v7 = v1 << (((v1 - 256) >> 16) & 8);
      v8 = ((v7 - 4096) >> 16) & 4;
      v9 = v7 << (((v7 - 4096) >> 16) & 4);
      v10 = (v9 << (((v9 - 0x4000) >> 16) & 2) >> 15) - (((v9 - 0x4000) >> 16) & 2) - (v8 + v6);
      v2 = ((*((uint32_t *)self + 6) >> (v10 + 21)) & 1) + 2 * v10 + 28;
      result = *((uint32_t *)self + 6);
      if ( v2 > 31 )
        return result;
    }
  }
  else
  {
    v2 = 0;
  }
  v3 = *((uint32_t **)self + 38);
  v4 = 31;
  if ( v3 != nullptr )
    return hkLargeBlockAllocator::findLargestTreeBlockSize((int)(uintptr_t)(self), v3, *((uint32_t *)self + 6));
  while ( --v4 >= v2 )
  {
    v3 = *((uint32_t **)self + v4 + 7);
    if ( v3 != nullptr )
      return hkLargeBlockAllocator::findLargestTreeBlockSize((int)(uintptr_t)(self), v3, *((uint32_t *)self + 6));
  }
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::makeTopValid  (binary VA: 0x1574ef0)
// Original: hkLargeBlockAllocator::_makeTopValid
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::makeTopValid(hkLargeBlockAllocator::Self *self)
{
  int result;

  *(uint32_t *)(*((uint32_t *)self + 5) + 4) = *((uint32_t *)self + 6) | 1;
  result = *((uint32_t *)self + 5);
  *(uint32_t *)(result + *((uint32_t *)self + 6)) = *((uint32_t *)self + 6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::allocFromTop  (binary VA: 0x1574f10)
// Original: hkLargeBlockAllocator::_allocFromTop
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::allocFromTop(hkLargeBlockAllocator::Self *self, unsigned int a2)
{
  int v2;
  unsigned int v3;
  int v4;
  uint32_t *v5;
  int result;

  v2 = *((uint32_t *)self + 6) - a2;
  v3 = a2 + *((uint32_t *)self + 54) - 16;
  *((uint32_t *)self + 53) += a2;
  *((uint32_t *)self + 54) = v3;
  v4 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 6) = v2;
  v5 = (uint32_t *)(a2 + v4);
  *((uint32_t *)self + 5) = a2 + v4;
  result = v4 + 16;
  *v5 = a2;
  v5[1] = v2 | 1;
  *(uint32_t *)(result - 12) = a2 | 3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::resizeSingleBlockServerPage  (binary VA: 0x1574f60)
// Original: hkLargeBlockAllocator::_resizeSingleBlockServerPage
// ----------------------------------------------------------------------------
hkLargeBlockAllocator::Self * hkLargeBlockAllocator::resizeSingleBlockServerPage(hkLargeBlockAllocator::Self *self, uint32_t *a2, unsigned int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  unsigned int v8[7];

  v8[0] = 0;
  v3 = a2[48];
  if ( (uint8_t)hkLargeBlockAllocator::FixedMemoryBlockServer::resize(
                          (hkLargeBlockAllocator::FixedMemoryBlockServer::Self *)(a2 + 39),
                          (char *)v3,
                          *(uint32_t *)(v3 + 12),
                          a3,
                          v8) != 0 )
  {
    v4 = a2[6];
    v5 = (v8[0] - *(uint32_t *)(v3 + 12)) & 0xFFFFFFF0;
    v6 = *(uint32_t *)(a2[5] + v4 + 4);
    a2[6] = v5 + v4;
    *(uint32_t *)(v3 + 12) = v8[0];
    *(uint32_t *)(v3 + 20) += v5;
    *(uint32_t *)(a2[5] + a2[6] + 4) = ((v6 & 0xFFFFFFFC) - v5) | 2;
    *(uint8_t *)self = 1;
    return self;
  }
  else
  {
    *(uint8_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::garbageCollect  (binary VA: 0x1575010)
// Original: hkLargeBlockAllocator::garbageCollect
// ----------------------------------------------------------------------------
hkLargeBlockAllocator::Self * hkLargeBlockAllocator::garbageCollect(hkLargeBlockAllocator::Self *self)
{
  char *v1;
  hkLargeBlockAllocator::Self *result;
  int v3;
  char *v4;
  uint32_t *v5;
  char *v6;
  char *v7;
  uint32_t *v8;
  int v9;
  typedef char *_g4_t_v10;
  typedef char *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef char _g4_t_v13[25];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (15u + sizeof(_g4_t_v13)) > _g4_s3 ? (15u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 15u);

  hkLargeBlockAllocator::makeTopValid(self);
  v1 = *((char **)self + 48);
  v11 = (char *)self + 188;
  result = (hkLargeBlockAllocator::Self *)((char *)self + 180);
  while ( v1 != v11 )
  {
    result = *((hkLargeBlockAllocator::Self **)v1 + 4);
    v3 = *((uint32_t *)result + 1);
    if ( (v3 & 2) == 0
      && (hkLargeBlockAllocator::Self *)(*((uint32_t *)v1 + 5) - 16) == (hkLargeBlockAllocator::Self *)((char *)result
                                                                                        + (v3 & 0xFFFFFFFC)) )
    {
      v10 = *((char **)v1 + 1);
      *(uint32_t *)(*(uint32_t *)v1 + 4) = (uint32_t)(uintptr_t)(v10);
      **((uint32_t **)v1 + 1) = *(uint32_t *)v1;
      if ( result == *((hkLargeBlockAllocator::Self **)self + 5) )
      {
        *((uint32_t *)self + 6) = 0;
        *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 180);
      }
      else
      {
        hkLargeBlockAllocator::unlinkLargeChunk((int)(uintptr_t)(self), (uint32_t *)(result));
      }
      result = (hkLargeBlockAllocator::Self *)(*(int (**)(uint32_t, char *, uint32_t))(**((uint32_t **)self + 44) + 20))(
                                          *((uint32_t *)self + 44),
                                          v1,
                                          *((uint32_t *)v1 + 3));
      v1 = v10;
    }
    else
    {
      v1 = *((char **)v1 + 1);
    }
  }
  v4 = *((char **)self + 48);
  if ( v4 == v1 )
  {
    *((uint32_t *)self + 6) = 0;
    *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 180);
    return (hkLargeBlockAllocator::Self *)((char *)self + 180);
  }
  if ( *((uint32_t *)self + 40) == 0 )
  {
    v5 = *((uint32_t **)self + 5);
    if ( v5 == (uint32_t *)((char *)self + 180) )
    {
      v7 = *((char **)self + 48);
    }
    else
    {
      hkLargeBlockAllocator::insertLargeChunk((int)(uintptr_t)(self), v5, *((uint32_t *)self + 6));
      v6 = *((char **)self + 48);
      *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 180);
      *((uint32_t *)self + 6) = 0;
      if ( v6 == v11 )
      {
LABEL_28:
        *((uint32_t *)self + 6) = 0;
        *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 180);
        return (hkLargeBlockAllocator::Self *)((char *)self + 180);
      }
      v7 = v6;
    }
    v8 = nullptr;
    do
    {
      v9 = *((uint32_t *)v7 + 5);
      if ( (*(uint8_t *)(v9 - 12) & 1) == 0 )
      {
        if ( v8 != nullptr )
        {
          if ( (*(uint32_t *)(v9 - 16 - *(uint32_t *)(v9 - 16) + 4) & 0xFFFFFFFC) > (v8[1] & 0xFFFFFFFC) )
            v8 = (uint32_t *)(v9 - 16 - *(uint32_t *)(v9 - 16));
        }
        else
        {
          v8 = (uint32_t *)(v9 - 16 - *(uint32_t *)(v9 - 16));
        }
      }
      v7 = *((char **)v7 + 1);
    }
    while ( v7 != v11 );
    if ( v8 != nullptr )
    {
      v12 = v8;
      hkLargeBlockAllocator::unlinkLargeChunk((int)(uintptr_t)(self), v8);
      *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v12);
      result = (hkLargeBlockAllocator::Self *)(v12[1] & 0xFFFFFFFC);
      *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(result);
      return result;
    }
    goto LABEL_28;
  }
  if ( *((uint32_t *)self + 6) > 0x7FFFu )
    return hkLargeBlockAllocator::resizeSingleBlockServerPage(
             (hkLargeBlockAllocator::Self *)v13,
             (uint32_t *)(self),
             *((uint32_t *)self + 5) + 288 - *((uint32_t *)v4 + 4));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::alloc  (binary VA: 0x1575210)
// Original: hkLargeBlockAllocator::_alloc
// ----------------------------------------------------------------------------
uint32_t * hkLargeBlockAllocator::alloc(hkLargeBlockAllocator::Self *self, unsigned int a2)
{
  uint32_t *result;

  if ( *((uint32_t *)self + 3) == 0 || (result = hkLargeBlockAllocator::allocLarge(self, a2)) == nullptr )
  {
    if ( a2 + 256 > *((uint32_t *)self + 6) )
      return nullptr;
    else
      return (uint32_t *)hkLargeBlockAllocator::allocFromTop(self, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::blockAlloc  (binary VA: 0x1575280)
// Original: hkLargeBlockAllocator::blockAlloc
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::blockAlloc(hkLargeBlockAllocator::Self *self, int a2)
{
  unsigned int v2;
  uint32_t *v3;
  int v5;
  hkLargeBlockAllocator::Self *v6;
  int v7;
  hkLargeBlockAllocator::Self *v8;
  int v9;
  hkLargeBlockAllocator::Self *v10;
  hkLargeBlockAllocator::Self *v11;
  int v12;
  hkLargeBlockAllocator::Self *v13;
  hkLargeBlockAllocator::Self *v14;
  int v15;
  int v16;
  hkLargeBlockAllocator::Self *v17;
  hkLargeBlockAllocator::Self *v18;
  int v19;
  typedef hkLargeBlockAllocator::Self *_g4_t_v20;
  typedef hkLargeBlockAllocator::Self *_g4_t_v21;
  typedef hkLargeBlockAllocator::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef hkLargeBlockAllocator::Self *_g4_t_v24;
  typedef hkLargeBlockAllocator::Self *_g4_t_v25;
  typedef hkLargeBlockAllocator::Self *_g4_t_v26;
  typedef char _g4_t_v27;
  typedef uint32_t _g4_t_v28[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v21)) > _g4_s1 ? (0u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v22)) > _g4_s2 ? (0u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v23)) > _g4_s3 ? (4u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v24)) > _g4_s4 ? (4u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v25)) > _g4_s5 ? (8u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v26)) > _g4_s6 ? (8u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (15u + sizeof(_g4_t_v27)) > _g4_s7 ? (15u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v28)) > _g4_s8 ? (16u + sizeof(_g4_t_v28)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 15u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);

  v28[6] = (uint32_t)(uintptr_t)(&self);
  v2 = (a2 + 31) & 0xFFFFFFF0;
  v25 = self;
  if ( v2 <= 0xFF )
    v2 = 256;
  v3 = hkLargeBlockAllocator::alloc(self, v2);
  if ( v3 != nullptr )
    return (int)(uintptr_t)(v3);
  if ( *((uint32_t *)v25 + 40) == 0
    || (hkLargeBlockAllocator::Self *)(v5 = *((uint32_t *)v25 + 48)) == (hkLargeBlockAllocator::Self *)((char *)v25 + 188) )
  {
    v28[0] = v2 + 312;
    v8 = (hkLargeBlockAllocator::Self *)(*(int (**)(uint32_t, uint32_t *))(**((uint32_t **)v25 + 44) + 16))(
                                    *((uint32_t *)v25 + 44),
                                    v28);
    v6 = v25;
    if ( v8 == nullptr )
    {
      v19 = *((uint32_t *)v25 + 2);
      if ( v19 == 0 )
        return 0;
      G4_VCALL<void>(v19, 8, v2);
      v3 = hkLargeBlockAllocator::alloc(v25, v2);
      if ( v3 != nullptr )
        return (int)(uintptr_t)(v3);
      v28[0] = v2 + 312;
      v8 = (hkLargeBlockAllocator::Self *)(*(int (**)(uint32_t, uint32_t *))(**((uint32_t **)v25 + 44) + 16))(
                                      *((uint32_t *)v25 + 44),
                                      v28);
      v6 = v25;
      if ( v8 == nullptr )
        goto LABEL_11;
    }
    v9 = v28[0];
    *((uint32_t *)v8 + 3) = v28[0];
    *((uint32_t *)v8 + 4) = ((unsigned int)(uintptr_t)(v8) + 39) & 0xFFFFFFF0;
    *((uint32_t *)v8 + 2) = 0;
    *((uint32_t *)v8 + 5) = ((unsigned int)(uintptr_t)(v8) + v9) & 0xFFFFFFF0;
    v10 = *((hkLargeBlockAllocator::Self **)v6 + 48);
    v26 = (hkLargeBlockAllocator::Self *)((char *)v6 + 188);
    if ( v10 != (hkLargeBlockAllocator::Self *)((char *)v6 + 188) && v8 > v10 )
    {
      do
        v10 = *((hkLargeBlockAllocator::Self **)v10 + 1);
      while ( v10 != (hkLargeBlockAllocator::Self *)((char *)v6 + 188) && v8 > v10 );
      v26 = (hkLargeBlockAllocator::Self *)((char *)v6 + 188);
    }
    *((uint32_t *)v8 + 1) = (uint32_t)(uintptr_t)(v10);
    v11 = v6;
    v12 = *(uint32_t *)v10;
    *(uint32_t *)v8 = *(uint32_t *)v10;
    *(uint32_t *)(v12 + 4) = (uint32_t)(uintptr_t)(v8);
    *(uint32_t *)v10 = (uint32_t)(uintptr_t)(v8);
    v13 = v11;
    if ( *((hkLargeBlockAllocator::Self **)v11 + 5) != (hkLargeBlockAllocator::Self *)((char *)v11 + 180) )
    {
      v20 = v8;
      hkLargeBlockAllocator::makeTopValid(v11);
      hkLargeBlockAllocator::insertLargeChunk(
        (int)(uintptr_t)(v11),
        *((uint32_t **)v11 + 5),
        *(uint32_t *)(*((uint32_t *)v11 + 5) + 4) & 0xFFFFFFFC);
      v8 = v20;
      v13 = v11;
    }
    v21 = v8;
    *((uint32_t *)v13 + 6) = *((uint32_t *)v8 + 5) - *((uint32_t *)v8 + 4) - 16;
    *((uint32_t *)v13 + 5) = *((uint32_t *)v8 + 4);
    v24 = v13;
    hkLargeBlockAllocator::makeTopValid(v13);
    v14 = v21;
    v15 = *((uint32_t *)v21 + 5);
    v22 = (hkLargeBlockAllocator::Self *)(v15 - 16);
    v16 = v15;
    *(uint32_t *)(v15 - 12) = 2;
    v17 = *((hkLargeBlockAllocator::Self **)v14 + 1);
    v6 = v24;
    if ( v17 != v26 )
      *(uint32_t *)(v16 - 12) = (*((uint32_t *)v17 + 4) - (uint32_t)(uintptr_t)(v22)) | 2;
    v18 = *(hkLargeBlockAllocator::Self **)v14;
    if ( v18 != v26 )
      *(uint32_t *)(*((uint32_t *)v18 + 5) - 12) = *(uint32_t *)(*((uint32_t *)v18 + 5) - 12) & 3
                                             | (*((uint32_t *)v24 + 5) - (*((uint32_t *)v18 + 5) - 16));
    return hkLargeBlockAllocator::allocFromTop(v6, v2);
  }
  v23 = *((uint32_t *)v25 + 48);
  hkLargeBlockAllocator::resizeSingleBlockServerPage((hkLargeBlockAllocator::Self *)&v27, (uint32_t *)(v25), v2 + *(uint32_t *)(v5 + 12));
  v6 = v25;
  if ( v27 != 0 )
    return hkLargeBlockAllocator::allocFromTop(v6, v2);
  v7 = *((uint32_t *)v25 + 2);
  if ( v7 == 0 )
    return 0;
  (*(void (**)(uint32_t, unsigned int))(*(uint32_t *)v7 + 8))(*((uint32_t *)v25 + 2), v2);
  v3 = hkLargeBlockAllocator::alloc(v25, v2);
  if ( v3 != nullptr )
    return (int)(uintptr_t)(v3);
  hkLargeBlockAllocator::resizeSingleBlockServerPage((hkLargeBlockAllocator::Self *)&v27, (uint32_t *)(v25), v2 + *(uint32_t *)(v23 + 12));
  v6 = v25;
  if ( v27 == 0 )
  {
LABEL_11:
    (*(void (**)(uint32_t, unsigned int))(**((uint32_t **)v6 + 2) + 12))(*((uint32_t *)v6 + 2), v2);
    return (int)(uintptr_t)(v3);
  }
  return hkLargeBlockAllocator::allocFromTop(v6, v2);
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::isValidAlloc  (binary VA: 0x1575580)
// Original: hkLargeBlockAllocator::isValidAlloc
// ----------------------------------------------------------------------------
hkLargeBlockAllocator::Self * hkLargeBlockAllocator::isValidAlloc(hkLargeBlockAllocator::Self *self, uint32_t *a2, unsigned int a3)
{
  hkLargeBlockAllocator::Self *result;
  uint32_t *v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int i;

  result = self;
  if ( (a3 & 0xF) != 0 )
    goto LABEL_8;
  if ( (*(uint8_t *)(a3 - 12) & 2) == 0 )
    goto LABEL_8;
  v4 = (uint32_t *)a2[48];
  if ( v4 == a2 + 47 )
    goto LABEL_8;
  v5 = v4[4];
  v6 = v4[5];
  if ( a3 < v5 || a3 >= v6 )
  {
    do
    {
      v4 = (uint32_t *)v4[1];
      if ( v4 == a2 + 47 )
        goto LABEL_8;
      v6 = v4[5];
      v5 = v4[4];
    }
    while ( a3 >= v6 || a3 < v5 );
  }
  v7 = v6 - 16;
  if ( v7 == v5 )
  {
LABEL_8:
    *(uint8_t *)self = 0;
    return result;
  }
  for ( i = *(uint32_t *)(v5 + 4) & 0xFFFFFFFC; a3 - 16 != v5; i = *(uint32_t *)(v5 + 4) & 0xFFFFFFFC )
  {
    v5 += i;
    if ( v7 == v5 )
      goto LABEL_8;
  }
  *(uint8_t *)self = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::forAllAllocs  (binary VA: 0x1575640)
// Original: hkLargeBlockAllocator::forAllAllocs
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::forAllAllocs(hkLargeBlockAllocator::Self *self, void (*a2)(void *, unsigned int, void *), void *a3)
{
  int result;
  uint32_t *v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  uint32_t *v9;

  result = (int)(uintptr_t)(self) + 188;
  *(uint32_t *)(*((uint32_t *)self + 5) + 4) = *((uint32_t *)self + 6) | 1;
  if ( *((hkLargeBlockAllocator::Self **)self + 48) != (hkLargeBlockAllocator::Self *)((char *)self + 188) )
  {
    v4 = *((uint32_t **)self + 48);
    do
    {
      result = v4[5];
      v5 = v4[4];
      if ( v5 != result - 16 )
      {
        v6 = v4[5] - 16;
        v9 = v4;
        do
        {
          while ( 1 )
          {
            result = *(uint32_t *)(v5 + 4);
            v7 = result & 0xFFFFFFFC;
            if ( (result & 2) != 0 )
              break;
            v5 += v7;
            if ( v6 == v5 )
              goto LABEL_8;
          }
          v8 = v5 + 16;
          v5 += v7;
          result = ((int (*)(int, unsigned int, void *))a2)(v8, v7 - 16, a3);
        }
        while ( v6 != v5 );
LABEL_8:
        v4 = v9;
      }
      v4 = (uint32_t *)v4[1];
    }
    while ( v4 != (uint32_t *)((char *)self + 188) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::getIterator  (binary VA: 0x15756d0)
// Original: hkLargeBlockAllocator::getIterator
// ----------------------------------------------------------------------------
hkLargeBlockAllocator::Self * hkLargeBlockAllocator::getIterator(hkLargeBlockAllocator::Self *self, uint32_t *a2)
{
  hkLargeBlockAllocator::Self *result;
  uint32_t *v3;
  int v4;
  int v5;

  result = self;
  *(uint32_t *)(a2[5] + 4) = a2[6] | 1;
  v3 = (uint32_t *)a2[48];
  if ( v3 == a2 + 47 )
  {
    *(uint32_t *)self = 0;
  }
  else
  {
    v4 = v3[4];
    v5 = v3[5] - 16;
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v3);
    *((uint32_t *)self + 2) = v5;
    *(uint32_t *)self = v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::nextBlock  (binary VA: 0x1575720)
// Original: hkLargeBlockAllocator::nextBlock
// ----------------------------------------------------------------------------
uint8_t * hkLargeBlockAllocator::nextBlock(uint8_t *a1, int a2, unsigned int *a3)
{
  uint8_t *result;
  unsigned int v4;
  bool v5;
  unsigned int v6;

  result = a1;
  if ( *a3 != 0 )
  {
    v4 = (*(uint32_t *)(*a3 + 4) & 0xFFFFFFFC) + *a3;
    v5 = a3[2] == v4;
    *a3 = v4;
    if ( !v5 )
    {
LABEL_3:
      *a1 = 1;
      return result;
    }
    v6 = *(uint32_t *)(a3[1] + 4);
    if ( v6 != a2 + 188 )
    {
      a3[1] = v6;
      *a3 = *(uint32_t *)(v6 + 16);
      a3[2] = *(uint32_t *)(v6 + 20) - 16;
      goto LABEL_3;
    }
    *a3 = 0;
  }
  *a1 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::walkMemory  (binary VA: 0x1575790)
// Original: hkLargeBlockAllocator::walkMemory
// ----------------------------------------------------------------------------
hkLargeBlockAllocator::Self * hkLargeBlockAllocator::walkMemory(hkLargeBlockAllocator::Self *self, void (*a2)(void *, unsigned int, bool, int, void *), void (*a3)(unsigned int, unsigned int, bool, uint32_t, int), int a4)
{
  unsigned int i;
  typedef uint8_t _g4_t_v6[5];
  typedef unsigned int _g4_t_v7[9];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (5u + sizeof(_g4_t_v7)) > _g4_s1 ? (5u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 5u);

  hkLargeBlockAllocator::getIterator((hkLargeBlockAllocator::Self *)v7, (uint32_t *)(a2));
  for ( i = v7[0]; v7[0] != 0; i = v7[0] )
  {
    a3(i + 16, *(uint32_t *)(i + 4) & 0xFFFFFFFC, (*(uint32_t *)(i + 4) & 2) != 0, 0, a4);
    hkLargeBlockAllocator::nextBlock(v6, (int)(uintptr_t)(a2), v7);
  }
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::calculateUsed  (binary VA: 0x1575840)
// Original: hkLargeBlockAllocator::_calculateUsed
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::calculateUsed(hkLargeBlockAllocator::Self *self)
{
  uint32_t *v1;
  int result;
  int v3;
  int v4;
  int v5;
  bool v6;

  hkLargeBlockAllocator::makeTopValid(self);
  v1 = *((uint32_t **)self + 48);
  for ( result = 0; v1 != (uint32_t *)((char *)self + 188); v1 = (uint32_t *)v1[1] )
  {
    v3 = v1[4];
    v4 = v1[5] - 16;
    while ( v4 != v3 )
    {
      v5 = result + (*(uint32_t *)(v3 + 4) & 0xFFFFFFFC);
      v6 = (*(uint32_t *)(v3 + 4) & 2) == 0;
      v3 += *(uint32_t *)(v3 + 4) & 0xFFFFFFFC;
      if ( !v6 )
        result = v5;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::calculateMemoryUsedByThisAllocator  (binary VA: 0x15758d0)
// Original: hkLargeBlockAllocator::calculateMemoryUsedByThisAllocator
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::calculateMemoryUsedByThisAllocator(hkLargeBlockAllocator::Self *self)
{
  int result;
  uint32_t *i;

  result = 0;
  for ( i = *((uint32_t **)self + 48); i != (uint32_t *)((char *)self + 188); i = (uint32_t *)i[1] )
    result += i[3];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::getMemoryStatistics  (binary VA: 0x1575900)
// Original: hkLargeBlockAllocator::getMemoryStatistics
// ----------------------------------------------------------------------------
unsigned int hkLargeBlockAllocator::getMemoryStatistics(hkLargeBlockAllocator::Self *a1, int *a2)
{
  int v2;
  unsigned int result;

  v2 = hkLargeBlockAllocator::calculateMemoryUsedByThisAllocator(a1);
  *a2 = v2;
  a2[1] = *((uint32_t *)a1 + 54);
  a2[3] = v2 - *((uint32_t *)a1 + 54);
  result = hkLargeBlockAllocator::findLargestBlockSize(a1);
  a2[5] = result;
  a2[4] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::checkUsedAlloc  (binary VA: 0x1575950)
// Original: hkLargeBlockAllocator::_checkUsedAlloc
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::checkUsedAlloc(hkLargeBlockAllocator::Self *self, uint32_t *a2)
{
  int result;
  char *v3;
  int v4;
  int v5;
  int v6;

  result = 0;
  if ( ((uint8_t)(uintptr_t)(a2) & 0xF) == 0 )
  {
    v3 = (char *)(a2 - 4);
    if ( (unsigned int)(uintptr_t)(a2 - 4) >= *((uint32_t *)self + 4) )
    {
      v4 = *(a2 - 3);
      if ( (v4 & 2) != 0 && (v4 & 0xFFFFFFFC) > 0xF && (v3[(v4 & 0xFFFFFFFC) + 4] & 1) != 0 )
      {
        if ( (v4 & 1) != 0 )
          return 1;
        v5 = *(a2 - 4);
        v6 = *(uint32_t *)&v3[-v5 + 4];
        if ( (v6 & 2) == 0 && v5 == (v6 & 0xFFFFFFFC) )
          return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::checkFreeChunk  (binary VA: 0x15759b0)
// Original: hkLargeBlockAllocator::_checkFreeChunk
// ----------------------------------------------------------------------------
bool * hkLargeBlockAllocator::checkFreeChunk(bool *a1, int a2, unsigned int a3)
{
  bool *result;
  int v4;
  int v5;

  result = a1;
  *a1 = (a3 & 0xF) == 0
     && ((v4 = *(uint32_t *)(a3 + 4)) & 2) == 0
     && a3 >= *(uint32_t *)(a2 + 16)
     && ((v5 = *(uint32_t *)(a3 + (v4 & 0xFFFFFFFC) + 4)) & 1) == 0
     && (v5 & 2) != 0
     && (v4 & 1) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::checkAllocations  (binary VA: 0x1575a00)
// Original: hkLargeBlockAllocator::checkAllocations
// ----------------------------------------------------------------------------
hkLargeBlockAllocator::Self * hkLargeBlockAllocator::checkAllocations(hkLargeBlockAllocator::Self *self, void **a2, int a3, int a4)
{
  int v4;

  v4 = 0;
  if ( a4 > 0 )
  {
    while ( (uint8_t)hkLargeBlockAllocator::checkUsedAlloc(
                               (hkLargeBlockAllocator::Self *)a2,
                               *(uint32_t **)(a3 + 4 * v4)) != 0 )
    {
      if ( ++v4 == a4 )
        goto LABEL_6;
    }
    *(uint8_t *)self = 0;
    return self;
  }
  else
  {
LABEL_6:
    *(uint8_t *)self = 1;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::addAlloc  (binary VA: 0x1575a70)
// Original: hkLargeBlockAllocator::_addAlloc
// ----------------------------------------------------------------------------
int hkLargeBlockAllocator::addAlloc(hkLargeBlockAllocator::Self *self, void *a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  int result;
  int v5;

  v3 = *((uint32_t *)a3 + 1);
  if ( v3 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a3, 4, v5);
    v3 = *((uint32_t *)a3 + 1);
  }
  result = *(uint32_t *)a3;
  *(uint32_t *)(*(uint32_t *)a3 + 4 * v3) = (uint32_t)(uintptr_t)(self);
  ++*((uint32_t *)a3 + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkAabb16::staticClass  (binary VA: 0x1575ae0)
// Original: hkAabb16::staticClass
// ----------------------------------------------------------------------------
void * hkAabb16::staticClass()
{
  return &hkAabb16Class;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::isOk  (binary VA: 0x1575bd0)
// Original: hkMatrix4f::isOk
// ----------------------------------------------------------------------------
bool hkMatrix4f::isOk(hkMatrix4f::Self *self)
{
  return (*(uint32_t *)self & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 1) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 2) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 3) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 4) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 5) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 6) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 7) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 8) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 9) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 10) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 11) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 12) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 13) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 14) & 0x7F800000) != 0x7F800000
      && (*((uint32_t *)self + 15) & 0x7F800000) != 2139095040;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::setInverse  (binary VA: 0x1575d10)
// Original: hkMatrix4f::setInverse
// ----------------------------------------------------------------------------
int hkMatrix4f::setInverse(int a1)
{
  hkMatrix4UtilAlgo::setInverse(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::transpose  (binary VA: 0x1575d60)
// Original: hkMatrix4f::transpose
// ----------------------------------------------------------------------------
hkMatrix4f::Self * hkMatrix4f::transpose(hkMatrix4f::Self *self)
{
  int v2; // xmm1_4
  int v3; // xmm0_4
  int v4; // xmm1_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm0_4

  v2 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 1) = *((uint32_t *)self + 4);
  *((uint32_t *)self + 4) = v2;
  v3 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 8) = *((uint32_t *)self + 2);
  *((uint32_t *)self + 2) = v3;
  v4 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 3) = *((uint32_t *)self + 12);
  *((uint32_t *)self + 12) = v4;
  v5 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 9) = *((uint32_t *)self + 6);
  *((uint32_t *)self + 6) = v5;
  v6 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 7) = *((uint32_t *)self + 13);
  *((uint32_t *)self + 13) = v6;
  v7 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 14) = *((uint32_t *)self + 11);
  *((uint32_t *)self + 11) = v7;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::add  (binary VA: 0x1575de0)
// Original: hkMatrix4f::add
// ----------------------------------------------------------------------------
hkMatrix4f::Self * hkMatrix4f::add(hkMatrix4f::Self *self, const hkMatrix4f::Self *a2)
{
  *(float *)self = *(float *)self + *(float *)a2;
  *((float *)self + 1) = *((float *)self + 1) + *((float *)a2 + 1);
  *((float *)self + 2) = *((float *)self + 2) + *((float *)a2 + 2);
  *((float *)self + 3) = *((float *)self + 3) + *((float *)a2 + 3);
  *((float *)self + 4) = *((float *)self + 4) + *((float *)a2 + 4);
  *((float *)self + 5) = *((float *)self + 5) + *((float *)a2 + 5);
  *((float *)self + 6) = *((float *)self + 6) + *((float *)a2 + 6);
  *((float *)self + 7) = *((float *)self + 7) + *((float *)a2 + 7);
  *((float *)self + 8) = *((float *)self + 8) + *((float *)a2 + 8);
  *((float *)self + 9) = *((float *)self + 9) + *((float *)a2 + 9);
  *((float *)self + 10) = *((float *)self + 10) + *((float *)a2 + 10);
  *((float *)self + 11) = *((float *)self + 11) + *((float *)a2 + 11);
  *((float *)self + 12) = *((float *)self + 12) + *((float *)a2 + 12);
  *((float *)self + 13) = *((float *)self + 13) + *((float *)a2 + 13);
  *((float *)self + 14) = *((float *)self + 14) + *((float *)a2 + 14);
  *((float *)self + 15) = *((float *)self + 15) + *((float *)a2 + 15);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::sub  (binary VA: 0x1575ee0)
// Original: hkMatrix4f::sub
// ----------------------------------------------------------------------------
hkMatrix4f::Self * hkMatrix4f::sub(hkMatrix4f::Self *self, const hkMatrix4f::Self *a2)
{
  *(float *)self = *(float *)self - *(float *)a2;
  *((float *)self + 1) = *((float *)self + 1) - *((float *)a2 + 1);
  *((float *)self + 2) = *((float *)self + 2) - *((float *)a2 + 2);
  *((float *)self + 3) = *((float *)self + 3) - *((float *)a2 + 3);
  *((float *)self + 4) = *((float *)self + 4) - *((float *)a2 + 4);
  *((float *)self + 5) = *((float *)self + 5) - *((float *)a2 + 5);
  *((float *)self + 6) = *((float *)self + 6) - *((float *)a2 + 6);
  *((float *)self + 7) = *((float *)self + 7) - *((float *)a2 + 7);
  *((float *)self + 8) = *((float *)self + 8) - *((float *)a2 + 8);
  *((float *)self + 9) = *((float *)self + 9) - *((float *)a2 + 9);
  *((float *)self + 10) = *((float *)self + 10) - *((float *)a2 + 10);
  *((float *)self + 11) = *((float *)self + 11) - *((float *)a2 + 11);
  *((float *)self + 12) = *((float *)self + 12) - *((float *)a2 + 12);
  *((float *)self + 13) = *((float *)self + 13) - *((float *)a2 + 13);
  *((float *)self + 14) = *((float *)self + 14) - *((float *)a2 + 14);
  *((float *)self + 15) = *((float *)self + 15) - *((float *)a2 + 15);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::isAffineTransformation  (binary VA: 0x1575fe0)
// Original: hkMatrix4f::isAffineTransformation
// ----------------------------------------------------------------------------
bool hkMatrix4f::isAffineTransformation(hkMatrix4f::Self *self)
{
  float v1; // xmm0_4
  bool v2;
  bool v3; // pf
  float v4; // xmm0_4
  float v5; // xmm1_4
  bool v6;
  char v7; // si
  uint8_t v8;
  char v9; // si
  char v10;
  char v11;

  v1 = *((float *)self + 3);
  v3 = __builtin_isnan(v1);
  v2 = v1 == 0.0;
  v4 = *((float *)self + 7);
  v5 = *((float *)self + 15);
  v6 = false;
  if ( v2 )
    v6 = !v3;
  if ( __builtin_isnan(v4) || (v7 = 2, v4 != 0.0) )
    v7 = 0;
  v8 = v7 | v6;
  if ( *((float *)self + 11) == 0.0 )
  {
    v9 = 12;
    v10 = 4;
  }
  else
  {
    v9 = 8;
    v10 = 0;
  }
  v11 = v10;
  if ( v5 != 1.0 )
    v9 = v10;
  if ( !__builtin_isnan(v5) )
    v11 = v9;
  return ((v8 | (uint8_t)v11) & 7) == 7;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::get4x4RowMajor  (binary VA: 0x1576080)
// Original: hkMatrix4f::get4x4RowMajor
// ----------------------------------------------------------------------------
double * hkMatrix4f::get4x4RowMajor(hkMatrix4f::Self *self, double *a2)
{
  double *result;
  __m128 v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  __m128 v13;
  int v14; // xmm0_4
  int v15; // xmm3_4
  int v16; // xmm2_4
  int v17; // xmm0_4
  int v18; // xmm3_4
  int v19; // xmm2_4
  int v20; // xmm0_4
  int v21; // xmm3_4
  int v22; // xmm2_4
  int v23; // xmm3_4
  int v24; // xmm2_4
  int v25; // xmm1_4

  result = a2;
  if ( (self >= (hkMatrix4f::Self *)(a2 + 2) || a2 >= (double *)self + 8)
    && (self >= (hkMatrix4f::Self *)(a2 + 4) || a2 + 2 >= (double *)self + 8)
    && (self >= (hkMatrix4f::Self *)(a2 + 6) || (char *)self + 64 <= (char *)(a2 + 4))
    && (self >= (hkMatrix4f::Self *)(a2 + 8) || (char *)self + 64 <= (char *)(a2 + 6)) )
  {
    v3 = *((__m128 *)self + 1);
    v4 = _mm_shuffle_ps(*(__m128 *)self, v3, 136);
    v5 = *((__m128 *)self + 3);
    v6 = _mm_shuffle_ps(*(__m128 *)self, v3, 221);
    v7 = *((__m128 *)self + 2);
    v8 = _mm_shuffle_ps(v7, v5, 221);
    v9 = _mm_shuffle_ps(v7, v5, 136);
    v10 = _mm_shuffle_ps(v4, v9, 136);
    v11 = _mm_shuffle_ps(v4, v9, 221);
    _mm_storel_ps(a2, v10);
    _mm_storeh_ps(a2 + 1, v10);
    v12 = _mm_shuffle_ps(v6, v8, 136);
    v13 = _mm_shuffle_ps(v6, v8, 221);
    _mm_storel_ps(a2 + 2, v12);
    _mm_storeh_ps(a2 + 3, v12);
    _mm_storel_ps(a2 + 4, v11);
    _mm_storeh_ps(a2 + 5, v11);
    _mm_storel_ps(a2 + 6, v13);
    _mm_storeh_ps(a2 + 7, v13);
  }
  else
  {
    v14 = *(uint32_t *)self;
    v15 = *((uint32_t *)self + 1);
    v16 = *((uint32_t *)self + 2);
    *((uint32_t *)a2 + 12) = *((uint32_t *)self + 3);
    *(uint32_t *)a2 = v14;
    *((uint32_t *)a2 + 4) = v15;
    *((uint32_t *)a2 + 8) = v16;
    v17 = *((uint32_t *)self + 4);
    v18 = *((uint32_t *)self + 5);
    v19 = *((uint32_t *)self + 6);
    *((uint32_t *)a2 + 13) = *((uint32_t *)self + 7);
    *((uint32_t *)a2 + 1) = v17;
    *((uint32_t *)a2 + 5) = v18;
    *((uint32_t *)a2 + 9) = v19;
    v20 = *((uint32_t *)self + 8);
    v21 = *((uint32_t *)self + 9);
    v22 = *((uint32_t *)self + 10);
    *((uint32_t *)a2 + 14) = *((uint32_t *)self + 11);
    *((uint32_t *)a2 + 2) = v20;
    *((uint32_t *)a2 + 6) = v21;
    *((uint32_t *)a2 + 10) = v22;
    v23 = *((uint32_t *)self + 12);
    v24 = *((uint32_t *)self + 13);
    v25 = *((uint32_t *)self + 14);
    *((uint32_t *)a2 + 15) = *((uint32_t *)self + 15);
    *((uint32_t *)a2 + 3) = v23;
    *((uint32_t *)a2 + 7) = v24;
    *((uint32_t *)a2 + 11) = v25;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::get4x4RowMajor  (binary VA: 0x1576210)
// Original: hkMatrix4f::get4x4RowMajor
// ----------------------------------------------------------------------------
__m128d * hkMatrix4f::get4x4RowMajor(hkMatrix4f::Self *self, __m128d *a2)
{
  __m128d *result;
  __m128 v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  double v19; // xmm1_8
  double v20; // xmm0_8
  double v21; // xmm5_8
  double v22; // xmm1_8
  double v23; // xmm0_8
  double v24; // xmm6_8
  double v25; // xmm1_8
  double v26; // xmm0_8
  double v27; // xmm7_8
  double v28; // xmm1_8
  double v29; // xmm0_8
  double v30; // xmm5_8

  result = a2;
  if ( (self >= (hkMatrix4f::Self *)&a2[2] || a2 >= (__m128d *)self + 4)
    && (self >= (hkMatrix4f::Self *)&a2[4] || &a2[2] >= (__m128d *)self + 4)
    && (self >= (hkMatrix4f::Self *)&a2[6] || (char *)self + 64 <= (char *)&a2[4])
    && (self >= (hkMatrix4f::Self *)&a2[8] || (char *)self + 64 <= (char *)&a2[6]) )
  {
    v3 = *((__m128 *)self + 1);
    v4 = _mm_shuffle_ps(*(__m128 *)self, v3, 136);
    v5 = *((__m128 *)self + 3);
    v6 = _mm_shuffle_ps(*(__m128 *)self, v3, 221);
    v7 = *((__m128 *)self + 2);
    v8 = _mm_shuffle_ps(v7, v5, 221);
    v9 = _mm_shuffle_ps(v7, v5, 136);
    v10 = _mm_shuffle_ps(v4, v9, 136);
    v11 = _mm_shuffle_ps(v4, v9, 221);
    v12 = v6;
    v13 = _mm_shuffle_ps(v6, v8, 221);
    v14 = _mm_shuffle_ps(v12, v8, 136);
    *a2 = _mm_cvtps_pd(v10);
g4_m128_raw(v15) = 0;
g4_m128_lane<uint64_t>(v15, 0) =g4_m128_lane<uint64_t>(v10, 1);
    a2[1] = _mm_cvtps_pd(v15);
    a2[2] = _mm_cvtps_pd(v14);
g4_m128_raw(v16) = 0;
g4_m128_lane<uint64_t>(v16, 0) =g4_m128_lane<uint64_t>(v14, 1);
    a2[3] = _mm_cvtps_pd(v16);
    a2[4] = _mm_cvtps_pd(v11);
g4_m128_raw(v17) = 0;
g4_m128_lane<uint64_t>(v17, 0) =g4_m128_lane<uint64_t>(v11, 1);
    a2[5] = _mm_cvtps_pd(v17);
    a2[6] = _mm_cvtps_pd(v13);
g4_m128_raw(v18) = 0;
g4_m128_lane<uint64_t>(v18, 0) =g4_m128_lane<uint64_t>(v13, 1);
    a2[7] = _mm_cvtps_pd(v18);
  }
  else
  {
    v19 = *((float *)self + 2);
    v20 = *((float *)self + 3);
    v21 = *(float *)self;
    g4_m128d_ref(a2[2], 0) = *((float *)self + 1);
    g4_m128d_ref(a2[0], 0) = v21;
    g4_m128d_ref(a2[4], 0) = v19;
    g4_m128d_ref(a2[6], 0) = v20;
    v22 = *((float *)self + 6);
    v23 = *((float *)self + 7);
    v24 = *((float *)self + 4);
    g4_m128d_ref(a2[2], 1) = *((float *)self + 5);
    g4_m128d_ref(a2[0], 1) = v24;
    g4_m128d_ref(a2[4], 1) = v22;
    g4_m128d_ref(a2[6], 1) = v23;
    v25 = *((float *)self + 10);
    v26 = *((float *)self + 11);
    v27 = *((float *)self + 8);
    g4_m128d_ref(a2[3], 0) = *((float *)self + 9);
    g4_m128d_ref(a2[1], 0) = v27;
    g4_m128d_ref(a2[5], 0) = v25;
    g4_m128d_ref(a2[7], 0) = v26;
    v28 = *((float *)self + 14);
    v29 = *((float *)self + 15);
    v30 = *((float *)self + 12);
    g4_m128d_ref(a2[3], 1) = *((float *)self + 13);
    g4_m128d_ref(a2[1], 1) = v30;
    g4_m128d_ref(a2[5], 1) = v28;
    g4_m128d_ref(a2[7], 1) = v29;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::set4x4RowMajor  (binary VA: 0x1576410)
// Original: hkMatrix4f::set4x4RowMajor
// ----------------------------------------------------------------------------
hkMatrix4f::Self * hkMatrix4f::set4x4RowMajor(hkMatrix4f::Self *self, const double *a2)
{
  hkMatrix4f::Self *result;
  __m128 v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  int v11; // xmm0_4
  int v12; // xmm3_4
  int v13; // xmm2_4
  int v14; // xmm0_4
  int v15; // xmm3_4
  int v16; // xmm2_4
  int v17; // xmm0_4
  int v18; // xmm3_4
  int v19; // xmm2_4
  int v20; // xmm3_4
  int v21; // xmm2_4
  int v22; // xmm1_4

  result = (hkMatrix4f::Self *)a2;
  if ( (self >= (hkMatrix4f::Self *)(a2 + 2) || a2 >= (const double *)self + 8)
    && (self >= (hkMatrix4f::Self *)(a2 + 4) || a2 + 2 >= (const double *)self + 8)
    && (self >= (hkMatrix4f::Self *)(a2 + 6) || (char *)self + 64 <= (char *)(a2 + 4))
    && (self >= (hkMatrix4f::Self *)(a2 + 8) || (char *)self + 64 <= (char *)(a2 + 6)) )
  {
    v3 = _mm_loadh_ps(a2 + 1);
    v4 = _mm_loadh_ps(a2 + 5);
    v5 = _mm_loadh_ps(a2 + 7);
    v6 = _mm_unpacklo_ps(v3, v4);
    v7 = _mm_unpackhi_ps(v3, v4);
    v8 = _mm_loadh_ps(a2 + 3);
    v9 = _mm_unpackhi_ps(v8, v5);
    v10 = _mm_unpacklo_ps(v8, v5);
    *(__m128 *)self = _mm_unpacklo_ps(v6, v10);
    *((__m128 *)self + 1) = _mm_unpackhi_ps(v6, v10);
    *((__m128 *)self + 2) = _mm_unpacklo_ps(v7, v9);
    *((__m128 *)self + 3) = _mm_unpackhi_ps(v7, v9);
    return self;
  }
  else
  {
    v11 = *(uint32_t *)a2;
    v12 = *((uint32_t *)a2 + 4);
    v13 = *((uint32_t *)a2 + 8);
    *((uint32_t *)self + 3) = *((uint32_t *)a2 + 12);
    *(uint32_t *)self = v11;
    *((uint32_t *)self + 1) = v12;
    *((uint32_t *)self + 2) = v13;
    v14 = *((uint32_t *)a2 + 1);
    v15 = *((uint32_t *)a2 + 5);
    v16 = *((uint32_t *)a2 + 9);
    *((uint32_t *)self + 7) = *((uint32_t *)a2 + 13);
    *((uint32_t *)self + 4) = v14;
    *((uint32_t *)self + 5) = v15;
    *((uint32_t *)self + 6) = v16;
    v17 = *((uint32_t *)a2 + 2);
    v18 = *((uint32_t *)a2 + 6);
    v19 = *((uint32_t *)a2 + 10);
    *((uint32_t *)self + 11) = *((uint32_t *)a2 + 14);
    *((uint32_t *)self + 8) = v17;
    *((uint32_t *)self + 9) = v18;
    *((uint32_t *)self + 10) = v19;
    v20 = *((uint32_t *)a2 + 3);
    v21 = *((uint32_t *)a2 + 7);
    v22 = *((uint32_t *)a2 + 11);
    *((uint32_t *)self + 15) = *((uint32_t *)a2 + 15);
    *((uint32_t *)self + 12) = v20;
    *((uint32_t *)self + 13) = v21;
    *((uint32_t *)self + 14) = v22;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::set4x4RowMajor_ea15765b0  (binary VA: 0x15765b0)
// Original: hkMatrix4f::set4x4RowMajor
// ----------------------------------------------------------------------------
hkMatrix4f::Self * hkMatrix4f::set4x4RowMajor_ea15765b0(hkMatrix4f::Self *self, const double *a2)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm5_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm6_4

  v3 = a2[4];
  v4 = a2[8];
  v5 = a2[12];
  v6 = *a2;
  *((float *)self + 1) = v3;
  *(float *)self = v6;
  *((float *)self + 2) = v4;
  *((float *)self + 3) = v5;
  v7 = a2[5];
  v8 = a2[9];
  v9 = a2[13];
  v10 = a2[1];
  *((float *)self + 5) = v7;
  *((float *)self + 4) = v10;
  *((float *)self + 6) = v8;
  *((float *)self + 7) = v9;
  v11 = a2[6];
  v12 = a2[10];
  v13 = a2[14];
  v14 = a2[2];
  *((float *)self + 9) = v11;
  *((float *)self + 8) = v14;
  *((float *)self + 10) = v12;
  *((float *)self + 11) = v13;
  v15 = a2[7];
  v16 = a2[11];
  v17 = a2[15];
  v18 = a2[3];
  *((float *)self + 13) = v15;
  *((float *)self + 12) = v18;
  *((float *)self + 14) = v16;
  *((float *)self + 15) = v17;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::get4x4ColumnMajor  (binary VA: 0x1576660)
// Original: hkMatrix4f::get4x4ColumnMajor
// ----------------------------------------------------------------------------
float * hkMatrix4f::get4x4ColumnMajor(hkMatrix4f::Self *self, float *a2)
{
  *a2 = *(float *)self;
  a2[1] = *((float *)self + 1);
  a2[2] = *((float *)self + 2);
  a2[3] = *((float *)self + 3);
  a2[4] = *((float *)self + 4);
  a2[5] = *((float *)self + 5);
  a2[6] = *((float *)self + 6);
  a2[7] = *((float *)self + 7);
  a2[8] = *((float *)self + 8);
  a2[9] = *((float *)self + 9);
  a2[10] = *((float *)self + 10);
  a2[11] = *((float *)self + 11);
  a2[12] = *((float *)self + 12);
  a2[13] = *((float *)self + 13);
  a2[14] = *((float *)self + 14);
  a2[15] = *((float *)self + 15);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::set4x4ColumnMajor  (binary VA: 0x1576710)
// Original: hkMatrix4f::set4x4ColumnMajor
// ----------------------------------------------------------------------------
hkMatrix4f::Self * hkMatrix4f::set4x4ColumnMajor(hkMatrix4f::Self *self, const float *a2)
{
  *(float *)self = *a2;
  *((float *)self + 1) = a2[1];
  *((float *)self + 2) = a2[2];
  *((float *)self + 3) = a2[3];
  *((float *)self + 4) = a2[4];
  *((float *)self + 5) = a2[5];
  *((float *)self + 6) = a2[6];
  *((float *)self + 7) = a2[7];
  *((float *)self + 8) = a2[8];
  *((float *)self + 9) = a2[9];
  *((float *)self + 10) = a2[10];
  *((float *)self + 11) = a2[11];
  *((float *)self + 12) = a2[12];
  *((float *)self + 13) = a2[13];
  *((float *)self + 14) = a2[14];
  *((float *)self + 15) = a2[15];
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::get4x4ColumnMajor  (binary VA: 0x15767c0)
// Original: hkMatrix4f::get4x4ColumnMajor
// ----------------------------------------------------------------------------
double * hkMatrix4f::get4x4ColumnMajor(hkMatrix4f::Self *self, double *a2)
{
  *a2 = *(float *)self;
  a2[1] = *((float *)self + 1);
  a2[2] = *((float *)self + 2);
  a2[3] = *((float *)self + 3);
  a2[4] = *((float *)self + 4);
  a2[5] = *((float *)self + 5);
  a2[6] = *((float *)self + 6);
  a2[7] = *((float *)self + 7);
  a2[8] = *((float *)self + 8);
  a2[9] = *((float *)self + 9);
  a2[10] = *((float *)self + 10);
  a2[11] = *((float *)self + 11);
  a2[12] = *((float *)self + 12);
  a2[13] = *((float *)self + 13);
  a2[14] = *((float *)self + 14);
  a2[15] = *((float *)self + 15);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::set4x4ColumnMajor  (binary VA: 0x1576870)
// Original: hkMatrix4f::set4x4ColumnMajor
// ----------------------------------------------------------------------------
hkMatrix4f::Self * hkMatrix4f::set4x4ColumnMajor(hkMatrix4f::Self *self, const double *a2)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm3_4
  float v7; // xmm4_4
  float v8; // xmm5_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm7_4

  v3 = *a2;
  *(float *)self = v3;
  v4 = a2[1];
  *((float *)self + 1) = v4;
  v5 = a2[2];
  *((float *)self + 2) = v5;
  v6 = a2[3];
  *((float *)self + 3) = v6;
  v7 = a2[4];
  *((float *)self + 4) = v7;
  v8 = a2[5];
  *((float *)self + 5) = v8;
  v9 = a2[6];
  *((float *)self + 6) = v9;
  v10 = a2[7];
  *((float *)self + 7) = v10;
  v11 = a2[8];
  *((float *)self + 8) = v11;
  v12 = a2[9];
  *((float *)self + 9) = v12;
  v13 = a2[10];
  *((float *)self + 10) = v13;
  v14 = a2[11];
  *((float *)self + 11) = v14;
  v15 = a2[12];
  *((float *)self + 12) = v15;
  v16 = a2[13];
  *((float *)self + 13) = v16;
  v17 = a2[14];
  *((float *)self + 14) = v17;
  v18 = a2[15];
  *((float *)self + 15) = v18;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::set  (binary VA: 0x1576920)
// Original: hkMatrix4f::set
// ----------------------------------------------------------------------------
void * hkMatrix4f::set(hkMatrix4f::Self *self, const hkQTransformf::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;
  uint32_t v8[19];

  hkRotationf::set((hkRotationf::Self *)v8, a2);
  v2 = *((uint32_t *)a2 + 4);
  v3 = *((uint32_t *)a2 + 5);
  v4 = v8[0];
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 6);
  *(uint32_t *)self = v4;
  *((uint32_t *)self + 1) = v8[1];
  *((uint32_t *)self + 2) = v8[2];
  *((uint32_t *)self + 4) = v8[4];
  *((uint32_t *)self + 5) = v8[5];
  *((uint32_t *)self + 6) = v8[6];
  *((uint32_t *)self + 8) = v8[8];
  v6 = v8[9];
  *((uint32_t *)self + 12) = v2;
  *((uint32_t *)self + 9) = v6;
  v7 = v8[10];
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 10) = v7;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 13) = v3;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 15) = 1065353216;
  return &g_vectorfConstants;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4f::set  (binary VA: 0x15769d0)
// Original: hkMatrix4f::set
// ----------------------------------------------------------------------------
void * hkMatrix4f::set(hkMatrix4f::Self *self, const hkQsTransformf::Self *a2)
{
  float v2; // xmm0_4
  __m128i v3;
  float v4; // xmm1_4
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15[15];

  hkRotationf::set((hkRotationf::Self *)v15, (const hkQsTransformf::Self *)((char *)a2 + 16));
  v2 = *((float *)a2 + 8);
g4_m128_raw(v3) = LODWORD(v15[1]);
  *(float *)g4_m128_ptr<int32_t>(v3) = v15[1] * v2;
  v4 = *((float *)a2 + 9);
  v5 = v15[2] * v2;
  v6 = v15[4] * v4;
  v7 = v2 * v15[0];
  v8 = v15[5] * v4;
  v9 = v15[6] * v4;
  v10 = v15[8];
  v11 = *((float *)a2 + 10);
  *((uint32_t *)self + 1) = _mm_cvtsi128_si32(v3);
  v13 = v10 * v11;
  *(float *)g4_m128_ptr<int32_t>(v3) = v15[9] * v11;
  v14 = v11 * v15[10];
  *(float *)self = v7;
  *((float *)self + 2) = v5;
  *((float *)self + 10) = v14;
  *((uint32_t *)self + 3) = 0;
  *((float *)self + 4) = v6;
  *((float *)self + 5) = v8;
  *((float *)self + 6) = v9;
  *((uint32_t *)self + 7) = 0;
  *((float *)self + 8) = v13;
  *((uint32_t *)self + 9) =g4_m128_lane<int32_t>(v3, 0);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = *(uint32_t *)a2;
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 15) = 1065353216;
  return &g_vectorfConstants;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::opNew  (binary VA: 0x1576ae0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator new
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::opNew()
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           12);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::opDelete  (binary VA: 0x1576b20)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator delete
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_unsigned_l_393416::opDelete(void *a1)
{
  int address;

  if ( a1 != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      12);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::opNew  (binary VA: 0x1576b70)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator new
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_unsigned_l_393416::opNew(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::opNewArray  (binary VA: 0x1576b80)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_unsigned_l_393416::opNewArray(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::opDelete  (binary VA: 0x1576b90)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator delete
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_unsigned_l_393416::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::opDeleteArray  (binary VA: 0x1576ba0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator delete[]
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_unsigned_l_393416::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::Construct  (binary VA: 0x1576bb0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_unsigned_l_393416::Construct(hkMapBase_Raw *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::Construct  (binary VA: 0x1576bd0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_unsigned_l_393416::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::Destroy  (binary VA: 0x1576be0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::~hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_unsigned_l_393416::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::getIterator  (binary VA: 0x1576bf0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getIterator
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::getIterator(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 2);
  if ( v1 < 0 )
    return 0;
  result = 0;
  if ( **(uint32_t **)self == -1 )
  {
    do
      ++result;
    while ( result <= v1 && *(uint32_t *)(*(uint32_t *)self + 8 * result) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::getKey  (binary VA: 0x1576c30)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getKey
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::getKey(uint32_t *a1, int a2)
{
  return *(uint32_t *)(*a1 + 8 * a2);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::getValue  (binary VA: 0x1576c40)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getValue
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::getValue(uint32_t *a1, int a2)
{
  return *(uint32_t *)(*a1 + 8 * a2 + 4);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::setValue  (binary VA: 0x1576c50)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::setValue
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::setValue(int *a1, int a2, int a3)
{
  int result;

  result = *a1;
  *(uint32_t *)(*a1 + 8 * a2 + 4) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::getNext  (binary VA: 0x1576c70)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getNext
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::getNext(uint32_t *a1, int a2)
{
  int result;
  int v3;

  result = a2 + 1;
  v3 = a1[2];
  if ( a2 + 1 <= v3 && *(uint32_t *)(*a1 + 8 * result) == -1 )
  {
    do
      ++result;
    while ( result <= v3 && *(uint32_t *)(*a1 + 8 * result) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::isValid  (binary VA: 0x1576cb0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::isValid
// ----------------------------------------------------------------------------
bool * hkMapBase_unsigned_long_unsigned_l_393416::isValid(bool *a1, int a2, int a3)
{
  *a1 = a3 <= *(uint32_t *)(a2 + 8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::findKey  (binary VA: 0x1576cd0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::findKey
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_unsigned_l_393416::findKey(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, unsigned int a2)
{
  int v2;
  unsigned int result;
  int v4;

  v2 = *((uint32_t *)self + 2);
  if ( v2 <= 0 )
    return v2 + 1;
  result = v2 & (-1640531535 * (a2 >> 4));
  v4 = *(uint32_t *)(*(uint32_t *)self + 8 * result);
  if ( v4 == -1 )
    return v2 + 1;
  while ( a2 != v4 )
  {
    result = v2 & (result + 1);
    v4 = *(uint32_t *)(*(uint32_t *)self + 8 * result);
    if ( v4 == -1 )
      return v2 + 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::hasKey  (binary VA: 0x1576d30)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::hasKey
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_unsigned_l_393416::hasKey(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a2, unsigned int a3)
{
  unsigned int Key;
  bool v4;
  bool v5;
  bool v6;

  Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(a2, a3);
  v6 = __OFSUB__(Key, *((uint32_t *)a2 + 2));
  v4 = Key == *((uint32_t *)a2 + 2);
  v5 = (int)(Key - *((uint32_t *)a2 + 2)) < 0;
  *(uint8_t *)self = v5 ^ v6 | v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault  (binary VA: 0x1576d70)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getWithDefault
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, unsigned int a2, unsigned int a3)
{
  int v3;
  unsigned int v4;
  int *v5;
  int v6;

  v3 = *((uint32_t *)self + 2);
  if ( v3 <= 0 )
    return a3;
  v4 = v3 & (-1640531535 * (a2 >> 4));
  v5 = (int *)(*(uint32_t *)self + 8 * v4);
  v6 = *v5;
  if ( *v5 == -1 )
    return a3;
  while ( a2 != v6 )
  {
    v4 = v3 & (v4 + 1);
    v5 = (int *)(*(uint32_t *)self + 8 * v4);
    v6 = *v5;
    if ( *v5 == -1 )
      return a3;
  }
  return v5[1];
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::get  (binary VA: 0x1576dd0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::get
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_unsigned_l_393416::get(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a2, unsigned int *a3, uint32_t *a4)
{
  signed int Key;
  int v5;

  Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(a2, (unsigned int)(uintptr_t)(a3));
  v5 = 1;
  if ( Key <= *((uint32_t *)a2 + 2) )
  {
    *a4 = *(uint32_t *)(*(uint32_t *)a2 + 8 * Key + 4);
    v5 = 0;
  }
  *(uint32_t *)self = v5;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::remove  (binary VA: 0x1576e20)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::remove
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_unsigned_l_393416::remove(int64_t a1)
{
  unsigned int result;
  unsigned int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  void *retaddr;

  result = *(uint32_t *)((char *)&a1 + 3);
  v2 = *(uint32_t *)((char *)&a1 + 3);
  v3 = **(uint32_t **)((char *)&retaddr + 3);
  --(*(uint32_t **)((char *)&retaddr + 3))[1];
  *(uint32_t *)(v3 + 8 * *(uint32_t *)((char *)&a1 + 3)) = -1;
  v4 = (*(uint32_t **)((char *)&retaddr + 3))[2];
  v5 = **(uint32_t **)((char *)&retaddr + 3);
  v6 = v4 & (v4 + *(uint32_t *)((char *)&a1 + 3));
  if ( *(uint32_t *)(**(uint32_t **)((char *)&retaddr + 3) + 8 * v6) != -1 )
  {
    do
      v6 = v4 & (v4 + v6);
    while ( *(uint32_t *)(v5 + 8 * v6) != -1 );
  }
  v9 = v4 & (v6 + 1);
  while ( 1 )
  {
    result = v4 & (result + 1);
    v7 = *(uint32_t *)(v5 + 8 * result);
    if ( v7 == -1 )
      break;
    v8 = v4 & (-1640531535 * (v7 >> 4));
    if ( (v2 >= v8 || result < v9) && (result >= v2 || result < v8 && v2 >= v8) && (v9 <= v8 || v2 >= v8) )
    {
      *(uint32_t *)(v5 + 8 * v2) = v7;
      *(uint32_t *)(**(uint32_t **)((char *)&retaddr + 3) + 8 * v2 + 4) = *(uint32_t *)(**(uint32_t **)((char *)&retaddr + 3)
                                                                                + 8 * result
                                                                                + 4);
      v2 = result;
      *(uint32_t *)(**(uint32_t **)((char *)&retaddr + 3) + 8 * result) = -1;
      v4 = (*(uint32_t **)((char *)&retaddr + 3))[2];
      v5 = **(uint32_t **)((char *)&retaddr + 3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::remove  (binary VA: 0x1576f00)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::remove
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_unsigned_l_393416::remove(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a2, unsigned int a3)
{
  signed int Key;

  Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(a2, a3);
  if ( Key <= *((uint32_t *)a2 + 2) )
  {
    hkMapBase_unsigned_long_unsigned_l_393416::remove(__SPAIR64__(Key, (unsigned int)(uintptr_t)(a2)));
    *(uint32_t *)self = 0;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::getSize  (binary VA: 0x1576f70)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getSize
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::getSize(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self)
{
  return *((uint32_t *)self + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::getCapacity  (binary VA: 0x1576f80)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getCapacity
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::getCapacity(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self)
{
  return (*((uint32_t *)self + 2) + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::getMemSize  (binary VA: 0x1576f90)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getMemSize
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::getMemSize(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self)
{
  return 8 * *((uint32_t *)self + 2) + 8;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::getMemStart  (binary VA: 0x1576fb0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getMemStart
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::getMemStart(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::isOk  (binary VA: 0x1576fc0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::isOk
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_unsigned_l_393416::isOk(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, unsigned int **a2)
{
  int v2;
  unsigned int *v3;
  unsigned int *v4;
  unsigned int v5;
  int i;

  v2 = (int)(uintptr_t)(a2[2]);
  if ( v2 >= 0 )
  {
    v3 = *a2;
    v4 = *a2;
    do
    {
      v5 = *v4;
      if ( *v4 != -1 )
      {
        for ( i = v2 & (-1640531535 * (v5 >> 4)); v5 != v3[2 * i]; i = v2 & (i + 1) )
          ;
      }
      v4 += 2;
    }
    while ( v4 != &(*a2)[2 * v2 + 2] );
  }
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::clear  (binary VA: 0x1577020)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::clear
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::clear(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self)
{
  int result;
  int v2;

  result = 0;
  v2 = *((uint32_t *)self + 2) + 1;
  if ( *((int *)self + 2) >= 0 )
  {
    do
      *(uint32_t *)(*(uint32_t *)self + 8 * result++) = -1;
    while ( result != v2 );
  }
  *((uint32_t *)self + 1) &= 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate  (binary VA: 0x1577060)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::clearAndDeallocate
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, hkMemoryAllocator::Self *a2)
{
  int result;

  hkMapBase_unsigned_long_unsigned_l_393416::clear(self);
  result = *((uint32_t *)self + 1);
  if ( result >= 0 )
    result = G4_VCALL<int>(a2, 12, *(uint32_t *)self, 8 * *((uint32_t *)self + 2) + 8);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::wasReallocated  (binary VA: 0x15770d0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::wasReallocated
// ----------------------------------------------------------------------------
int64_t hkMapBase_unsigned_long_unsigned_l_393416::wasReallocated(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, int a2)
{
  int64_t result; // rax

  LODWORD(result) = (uint32_t)(uintptr_t)(self);
  HIDWORD(result) = *(uint32_t *)(a2 + 4) >= 0;
  *(uint8_t *)self = BYTE4(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::setOwnedData  (binary VA: 0x15770f0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::setOwnedData
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_unsigned_l_393416::setOwnedData(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, void *a2, int a3, int a4)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = a3 | 0x80000000;
  *((uint32_t *)self + 2) = a4 - 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::getSizeInBytesFor  (binary VA: 0x1577120)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getSizeInBytesFor
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::getSizeInBytesFor(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self)
{
  int v1;

  if ( 2 * (int)(uintptr_t)(self) <= 8 )
    return 64;
  v1 = 8;
  do
    v1 *= 2;
  while ( 2 * (int)(uintptr_t)(self) > v1 );
  return 8 * v1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::init  (binary VA: 0x1577150)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::init
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::init(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, uint32_t *a2, unsigned int a3)
{
  uint32_t *v3;
  int result;

  v3 = a2;
  *((uint32_t *)self + 2) = (a3 >> 3) - 1;
  result = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = 0x80000000;
  if ( a3 >> 3 != 0 )
  {
    while ( 1 )
    {
      v3[2 * result++] = -1;
      if ( a3 >> 3 == result )
        break;
      v3 = *(uint32_t **)self;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::Construct  (binary VA: 0x15771a0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_unsigned_l_393416::Construct(hkMapBase_Raw *self, uint32_t *a2, unsigned int a3)
{
  hkMapBase_unsigned_long_unsigned_l_393416::init((hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(self), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::resizeTable  (binary VA: 0x15771e0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::resizeTable
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_unsigned_l_393416::resizeTable(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, hkMemoryAllocator::Self *a2, hkMemoryAllocator::Self *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  unsigned int *v7;
  int i;
  int v10;
  unsigned int v11;
  unsigned int *v12;

  v4 = 8;
  if ( a4 >= 8 )
    v4 = a4;
  v11 = *((uint32_t *)a2 + 1) & 0x80000000;
  v10 = *((uint32_t *)a2 + 2) + 1;
  v12 = *(unsigned int **)a2;
  v5 = G4_VCALL<int>(a3, 8, 8 * v4);
  if ( v5 != 0 )
  {
    *(uint32_t *)a2 = v5;
    v6 = 0;
    while ( 1 )
    {
      *(uint32_t *)(v5 + 8 * v6++) = -1;
      if ( v4 <= v6 )
        break;
      v5 = *(uint32_t *)a2;
    }
    *((uint32_t *)a2 + 2) = v4 - 1;
    *((uint32_t *)a2 + 1) = 0;
    v7 = v12;
    if ( v10 > 0 )
    {
      for ( i = 0; i != v10; ++i )
      {
        if ( *v7 != -1 )
          hkMapBase_unsigned_long_unsigned_l_393416::insert(a2, a3, *v7, v7[1]);
        v7 += 2;
      }
    }
    if ( v11 == 0 )
      G4_VCALL<void>(a3, 12, v12, 8 * v10);
    *(uint32_t *)self = 0;
    return self;
  }
  else
  {
    *(uint32_t *)self = 1;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::insert  (binary VA: 0x1577320)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::insert
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::insert(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, hkMemoryAllocator::Self *a2, unsigned int a3, unsigned int a4)
{
  int v4;
  unsigned int i;
  int v6;
  uint32_t *v7;
  int result;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);

  v4 = *((uint32_t *)self + 2);
  v9 = *((uint32_t *)self + 1);
  v10 = v4;
  if ( 2 * v9 > v4 )
  {
    hkMapBase_unsigned_long_unsigned_l_393416::resizeTable(
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v11,
      (hkMemoryAllocator::Self *)(self),
      a2,
      v4 + v4 + 2);
    v10 = *((uint32_t *)self + 2);
    v9 = *((uint32_t *)self + 1);
  }
  for ( i = v10 & (-1640531535 * (a3 >> 4)); ; i = v10 & (i + 1) )
  {
    v6 = 8 * i;
    v7 = (uint32_t *)(*(uint32_t *)self + 8 * i);
    if ( *v7 == -1 )
    {
      result = 1;
      goto LABEL_8;
    }
    if ( a3 == *v7 )
      break;
  }
  result = 0;
LABEL_8:
  *((uint32_t *)self + 1) = result + v9;
  *v7 = a3;
  *(uint32_t *)(*(uint32_t *)self + v6 + 4) = a4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::tryInsert  (binary VA: 0x1577400)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::tryInsert
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_unsigned_l_393416::tryInsert(hkMemoryAllocator::Self *a1, hkMemoryAllocator::Self *a2, unsigned int a3, unsigned int a4, uint32_t *a5)
{
  int v5;
  int result;
  int v7;
  uint32_t v8[7];

  v5 = *((uint32_t *)a1 + 2);
  if ( 2 * *((uint32_t *)a1 + 1) <= v5 )
  {
    *a5 = 0;
    return hkMapBase_unsigned_long_unsigned_l_393416::insert(a1, a2, a3, a4);
  }
  hkMapBase_unsigned_long_unsigned_l_393416::resizeTable(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v8,
    a1,
    a2,
    2 * v5 + 2);
  v7 = v8[0];
  *a5 = v8[0];
  result = 0;
  if ( v7 == 0 )
    return hkMapBase_unsigned_long_unsigned_l_393416::insert(a1, a2, a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::findOrInsertKey  (binary VA: 0x1577490)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::findOrInsertKey
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_unsigned_l_393416::findOrInsertKey(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, hkMemoryAllocator::Self *a2, unsigned int a3, unsigned int a4)
{
  int v4;
  unsigned int result;
  uint32_t *v6;
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);

  v4 = *((uint32_t *)self + 2);
  v7 = v4;
  if ( 2 * *((uint32_t *)self + 1) > v4 )
  {
    hkMapBase_unsigned_long_unsigned_l_393416::resizeTable(
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v8,
      (hkMemoryAllocator::Self *)(self),
      a2,
      2 * v4 + 2);
    v7 = *((uint32_t *)self + 2);
  }
  for ( result = v7 & (-1640531535 * (a3 >> 4)); ; result = v7 & (result + 1) )
  {
    v6 = (uint32_t *)(*(uint32_t *)self + 8 * result);
    if ( a3 == *v6 )
      break;
    if ( *v6 == -1 )
    {
      *v6 = a3;
      *(uint32_t *)(*(uint32_t *)self + 8 * result + 4) = a4;
      ++*((uint32_t *)self + 1);
      return result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::reserve  (binary VA: 0x1577560)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::reserve
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_unsigned_l_393416::reserve(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self, hkMemoryAllocator::Self *a2, int a3)
{
  int i;
  uint8_t v5[8];

  for ( i = 8; 2 * a3 > i; i *= 2 )
    ;
  return hkMapBase_unsigned_long_unsigned_l_393416::resizeTable(
           (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v5,
           (hkMemoryAllocator::Self *)(self),
           a2,
           i);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_unsigned_l_393416::isPower2  (binary VA: 0x15775c0)
// Original: hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::isPower2
// ----------------------------------------------------------------------------
bool hkMapBase_unsigned_long_unsigned_l_393416::isPower2(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *self)
{
  return ((unsigned int)(uintptr_t)(self) & ((unsigned int)(uintptr_t)(self) - 1)) == 0;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::opNew  (binary VA: 0x15775e0)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
int hkMap_unsigned_long_unsigned_l_1e7623::opNew()
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           12);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::opDelete  (binary VA: 0x1577620)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_unsigned_l_1e7623::opDelete(void *a1)
{
  int address;

  if ( a1 != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      12);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::opNew  (binary VA: 0x1577670)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
unsigned int hkMap_unsigned_long_unsigned_l_1e7623::opNew(hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::opNewArray  (binary VA: 0x1577680)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkMap_unsigned_long_unsigned_l_1e7623::opNewArray(hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::opDelete  (binary VA: 0x1577690)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_unsigned_l_1e7623::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::opDeleteArray  (binary VA: 0x15776a0)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete[]
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_unsigned_l_1e7623::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::Construct  (binary VA: 0x15776b0)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_unsigned_l_1e7623::Construct(hkMap_Raw *self, int a2)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
  if ( a2 != 0 )
    hkMapBase_unsigned_long_unsigned_l_393416::reserve(
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(self),
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      a2);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::Construct  (binary VA: 0x1577700)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_unsigned_l_1e7623::Construct(hkMap_Raw *self, uint32_t *a2, unsigned int a3)
{
  hkMapBase_unsigned_long_unsigned_l_393416::Construct(self, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::Construct  (binary VA: 0x1577740)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_unsigned_l_1e7623::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::Destroy  (binary VA: 0x1577750)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::~hkMap
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_unsigned_l_1e7623::Destroy(hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self)
{
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    self,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::insert  (binary VA: 0x1577790)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::insert
// ----------------------------------------------------------------------------
int hkMap_unsigned_long_unsigned_l_1e7623::insert(hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2, unsigned int a3)
{
  return hkMapBase_unsigned_long_unsigned_l_393416::insert(
           self,
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::tryInsert  (binary VA: 0x15777d0)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::tryInsert
// ----------------------------------------------------------------------------
int hkMap_unsigned_long_unsigned_l_1e7623::tryInsert(hkMemoryAllocator::Self *a1, unsigned int a2, unsigned int a3, uint32_t *a4)
{
  return hkMapBase_unsigned_long_unsigned_l_393416::tryInsert(
           a1,
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::findOrInsertKey  (binary VA: 0x1577820)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::findOrInsertKey
// ----------------------------------------------------------------------------
unsigned int hkMap_unsigned_long_unsigned_l_1e7623::findOrInsertKey(hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2, unsigned int a3)
{
  return hkMapBase_unsigned_long_unsigned_l_393416::findOrInsertKey(
           self,
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::swap  (binary VA: 0x1577860)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::swap
// ----------------------------------------------------------------------------
hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> * hkMap_unsigned_long_unsigned_l_1e7623::swap(hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *a2)
{
  int v3;
  int v4;
  int v5;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  v4 = *((uint32_t *)self + 1);
  v5 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *(uint32_t *)a2 = v3;
  *((uint32_t *)a2 + 1) = v4;
  *((uint32_t *)a2 + 2) = v5;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_unsigned_l_1e7623::reserve  (binary VA: 0x1577890)
// Original: hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::reserve
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> * hkMap_unsigned_long_unsigned_l_1e7623::reserve(hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, int a2)
{
  return hkMapBase_unsigned_long_unsigned_l_393416::reserve(
           (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(self),
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::opNew  (binary VA: 0x15778d0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator new
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::opNew()
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           12);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::opDelete  (binary VA: 0x1577910)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator delete
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_long_unsig_cbedf5::opDelete(void *a1)
{
  int address;

  if ( a1 != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      12);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::opNew  (binary VA: 0x1577960)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator new
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_long_unsig_cbedf5::opNew(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::opNewArray  (binary VA: 0x1577970)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_long_unsig_cbedf5::opNewArray(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::opDelete  (binary VA: 0x1577980)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator delete
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_long_unsig_cbedf5::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::opDeleteArray  (binary VA: 0x1577990)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator delete[]
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_long_unsig_cbedf5::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::Construct  (binary VA: 0x15779a0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_long_unsig_cbedf5::Construct(hkMapBase_Raw *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::Construct  (binary VA: 0x15779c0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_long_unsig_cbedf5::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::Destroy  (binary VA: 0x15779d0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::~hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_long_unsig_cbedf5::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::getIterator  (binary VA: 0x15779e0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getIterator
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::getIterator(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 2);
  if ( v1 < 0 )
    return 0;
  result = 0;
  if ( (*(uint32_t *)(*(uint32_t *)self + 4) & **(uint32_t **)self) == -1 )
  {
    do
      ++result;
    while ( result <= v1
         && (*(uint32_t *)(*(uint32_t *)self + 16 * result + 4) & *(uint32_t *)(*(uint32_t *)self + 16 * result)) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::getKey  (binary VA: 0x1577a30)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getKey
// ----------------------------------------------------------------------------
int64_t hkMapBase_unsigned_long_long_unsig_cbedf5::getKey(uint32_t *a1, int a2)
{
  return *(uint64_t *)(*a1 + 16 * a2);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::getValue  (binary VA: 0x1577a50)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getValue
// ----------------------------------------------------------------------------
int64_t hkMapBase_unsigned_long_long_unsig_cbedf5::getValue(uint32_t *a1, int a2)
{
  return *(uint64_t *)(*a1 + 16 * a2 + 8);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::setValue  (binary VA: 0x1577a70)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::setValue
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::setValue(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;

  v4 = *a1 + 16 * a2;
  *(uint32_t *)(v4 + 8) = a3;
  *(uint32_t *)(v4 + 12) = a4;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::getNext  (binary VA: 0x1577a90)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getNext
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::getNext(uint32_t *a1, int a2)
{
  int result;
  int v3;
  int v4;

  result = a2 + 1;
  v3 = a1[2];
  if ( a2 + 1 <= v3 && (*(uint32_t *)(16 * result + *a1 + 4) & *(uint32_t *)(16 * result + *a1)) == -1 )
  {
    v4 = *a1 + 16 * (a2 + 2);
    do
    {
      if ( ++result > v3 )
        break;
      v4 += 16;
    }
    while ( (*(uint32_t *)(v4 - 12) & *(uint32_t *)(v4 - 16)) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::isValid  (binary VA: 0x1577af0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::isValid
// ----------------------------------------------------------------------------
bool * hkMapBase_unsigned_long_long_unsig_cbedf5::isValid(bool *a1, int a2, int a3)
{
  *a1 = a3 <= *(uint32_t *)(a2 + 8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::findKey  (binary VA: 0x1577b10)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::findKey
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_long_unsig_cbedf5::findKey(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, uint64_t a2)
{
  int v2;
  unsigned int result;
  uint32_t *v4;
  uint32_t *v5;
  uint64_t v7; // 0:edx.4,4:ecx.4

  v2 = *((uint32_t *)self + 2);
  if ( v2 <= 0 )
    return v2 + 1;
  result = v2 & (-1640531535 * ((unsigned int)a2 >> 4));
  v4 = (uint32_t *)(16 * result + *(uint32_t *)self);
  if ( (v4[1] & *v4) == -1 )
    return v2 + 1;
  if ( a2 != *(uint64_t *)v4 )
  {
    while ( 1 )
    {
      result = v2 & (result + 1);
      v5 = (uint32_t *)(*(uint32_t *)self + 16 * result);
      HIDWORD(v7) = *v5;
      LODWORD(v7) = v5[1];
      if ( ((unsigned int)v7 & HIDWORD(v7)) == 0xFFFFFFFF )
        break;
      if ( v7 == __PAIR64__(a2, HIDWORD(a2)) )
        return result;
    }
    return v2 + 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::hasKey  (binary VA: 0x1577ba0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::hasKey
// ----------------------------------------------------------------------------
hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> * hkMapBase_unsigned_long_long_unsig_cbedf5::hasKey(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, uint64_t a2, unsigned int a3)
{
  unsigned int Key;
  bool v4;
  bool v5;
  bool v6;

  Key = hkMapBase_unsigned_long_long_unsig_cbedf5::findKey(
          (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)a2,
          __PAIR64__(a3, HIDWORD(a2)));
  v6 = __OFSUB__(Key, *(uint32_t *)(a2 + 8));
  v4 = Key == *(uint32_t *)(a2 + 8);
  v5 = (int)(Key - *(uint32_t *)(a2 + 8)) < 0;
  *(uint8_t *)self = v5 ^ v6 | v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::getWithDefault  (binary VA: 0x1577bf0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getWithDefault
// ----------------------------------------------------------------------------
uint64_t hkMapBase_unsigned_long_long_unsig_cbedf5::getWithDefault(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, uint64_t a2, uint64_t a3)
{
  int v3;
  unsigned int v4;
  int v5;

  v3 = *((uint32_t *)self + 2);
  if ( v3 <= 0 )
    return a3;
  v4 = v3 & (-1640531535 * ((unsigned int)a2 >> 4));
  v5 = 16 * v4 + *(uint32_t *)self;
  if ( (*(uint32_t *)(v5 + 4) & *(uint32_t *)v5) == -1 )
    return a3;
  if ( a2 != *(uint64_t *)v5 )
  {
    while ( 1 )
    {
      v4 = v3 & (v4 + 1);
      v5 = *(uint32_t *)self + 16 * v4;
      if ( (*(uint32_t *)(v5 + 4) & *(uint32_t *)v5) == -1 )
        break;
      if ( a2 == *(uint64_t *)v5 )
        return *(uint64_t *)(v5 + 8);
    }
    return a3;
  }
  return *(uint64_t *)(v5 + 8);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::get  (binary VA: 0x1577ca0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::get
// ----------------------------------------------------------------------------
hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> * hkMapBase_unsigned_long_long_unsig_cbedf5::get(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, uint64_t a2, uint64_t *a3, uint32_t *a4)
{
  signed int Key;
  int v5;
  int v6;
  int v7;

  Key = hkMapBase_unsigned_long_long_unsig_cbedf5::findKey(
          (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)a2,
          __PAIR64__((unsigned int)(uintptr_t)(a3), HIDWORD(a2)));
  v5 = 1;
  if ( Key <= *(uint32_t *)(a2 + 8) )
  {
    v6 = *(uint32_t *)a2 + 16 * Key;
    v7 = *(uint32_t *)(v6 + 12);
    *a4 = *(uint32_t *)(v6 + 8);
    a4[1] = v7;
    v5 = 0;
  }
  *(uint32_t *)self = v5;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::remove  (binary VA: 0x1577d00)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::remove
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_long_unsig_cbedf5::remove(int *a1, unsigned int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int i;
  unsigned int result;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;

  v16 = a2;
  --a1[1];
  v2 = (uint32_t *)(*a1 + 16 * a2);
  *v2 = -1;
  v2[1] = -1;
  v3 = a1[2];
  v4 = *a1;
  for ( i = v3 & (v3 + a2); (*(uint32_t *)(16 * i + v4 + 4) & *(uint32_t *)(16 * i + v4)) != -1; i = v3 & (v3 + i) )
    ;
  v17 = i + 1;
  result = v3 & (a2 + 1);
  v18 = v3 & v17;
  v7 = 16 * result;
  v8 = *(uint32_t *)(v4 + 16 * result);
  if ( (v8 & *(uint32_t *)(v4 + 16 * result + 4)) != 0xFFFFFFFF )
  {
    v15 = a1[2];
    v9 = *(uint32_t *)(v4 + v7 + 4);
    do
    {
      v10 = v15 & (-1640531535 * (v8 >> 4));
      if ( (v16 >= v10 || result < v18) && (result >= v16 || result < v10 && v16 >= v10) && (v18 <= v10 || v16 >= v10) )
      {
        v11 = v16;
        v16 = result;
        v11 *= 16;
        *(uint32_t *)(v4 + v11) = v8;
        *(uint32_t *)(v4 + v11 + 4) = v9;
        v12 = *a1;
        v13 = *(uint32_t *)(*a1 + v7 + 12);
        *(uint32_t *)(v12 + v11 + 8) = *(uint32_t *)(*a1 + v7 + 8);
        *(uint32_t *)(v12 + v11 + 12) = v13;
        v14 = *a1;
        *(uint32_t *)(v14 + v7) = -1;
        *(uint32_t *)(v14 + v7 + 4) = -1;
        v15 = a1[2];
        v4 = *a1;
      }
      result = v15 & (result + 1);
      v7 = 16 * result;
      v8 = *(uint32_t *)(v4 + 16 * result);
      v9 = *(uint32_t *)(v4 + 16 * result + 4);
    }
    while ( (v9 & v8) != 0xFFFFFFFF );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::remove  (binary VA: 0x1577e40)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::remove
// ----------------------------------------------------------------------------
hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> * hkMapBase_unsigned_long_long_unsig_cbedf5::remove(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, uint64_t a2, unsigned int a3)
{
  signed int Key;

  Key = hkMapBase_unsigned_long_long_unsig_cbedf5::findKey(
          (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)a2,
          __PAIR64__(a3, HIDWORD(a2)));
  if ( Key <= *(uint32_t *)(a2 + 8) )
  {
    hkMapBase_unsigned_long_long_unsig_cbedf5::remove((int *)a2, Key);
    *(uint32_t *)self = 0;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::getSize  (binary VA: 0x1577eb0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getSize
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::getSize(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self)
{
  return *((uint32_t *)self + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::getCapacity  (binary VA: 0x1577ec0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getCapacity
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::getCapacity(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self)
{
  return (*((uint32_t *)self + 2) + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::getMemSize  (binary VA: 0x1577ed0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getMemSize
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::getMemSize(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self)
{
  return 16 * (*((uint32_t *)self + 2) + 1);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::getMemStart  (binary VA: 0x1577ee0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getMemStart
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::getMemStart(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::isOk  (binary VA: 0x1577ef0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::isOk
// ----------------------------------------------------------------------------
hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> * hkMapBase_unsigned_long_long_unsig_cbedf5::isOk(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, int64_t **a2)
{
  int v2;
  unsigned int i;
  int64_t *v6;
  int64_t *v7;
  int64_t v8; // 0:esi.4,4:edi.4

  v2 = (int)(uintptr_t)(a2[2]);
  if ( v2 >= 0 )
  {
    v6 = *a2;
    v7 = *a2;
    do
    {
      v8 = *v7;
      if ( (*((uint32_t *)v7 + 1) & *(uint32_t *)v7) != -1 )
      {
        for ( i = v2 & (-1640531535 * ((unsigned int)v8 >> 4)); v6[2 * i] != v8; i = v2 & (i + 1) )
          ;
      }
      v7 += 2;
    }
    while ( v7 != &(*a2)[2 * v2 + 2] );
  }
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::clear  (binary VA: 0x1577fb0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::clear
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::clear(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self)
{
  int result;
  int v2;
  int v3;
  uint32_t *v4;

  result = 0;
  v2 = *((uint32_t *)self + 2) + 1;
  if ( *((int *)self + 2) >= 0 )
  {
    do
    {
      v3 = result++;
      v4 = (uint32_t *)(*(uint32_t *)self + 16 * v3);
      *v4 = -1;
      v4[1] = -1;
    }
    while ( result != v2 );
  }
  *((uint32_t *)self + 1) &= 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::clearAndDeallocate  (binary VA: 0x1578000)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::clearAndDeallocate
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::clearAndDeallocate(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, hkMemoryAllocator::Self *a2)
{
  int result;

  hkMapBase_unsigned_long_long_unsig_cbedf5::clear(self);
  result = *((uint32_t *)self + 1);
  if ( result >= 0 )
    result = G4_VCALL<int>(a2, 12, *(uint32_t *)self, 16 * (*((uint32_t *)self + 2) + 1));
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::wasReallocated  (binary VA: 0x1578060)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::wasReallocated
// ----------------------------------------------------------------------------
int64_t hkMapBase_unsigned_long_long_unsig_cbedf5::wasReallocated(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, int a2)
{
  int64_t result; // rax

  LODWORD(result) = (uint32_t)(uintptr_t)(self);
  HIDWORD(result) = *(uint32_t *)(a2 + 4) >= 0;
  *(uint8_t *)self = BYTE4(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::setOwnedData  (binary VA: 0x1578080)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::setOwnedData
// ----------------------------------------------------------------------------
hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> * hkMapBase_unsigned_long_long_unsig_cbedf5::setOwnedData(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, void *a2, int a3, int a4)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = a3 | 0x80000000;
  *((uint32_t *)self + 2) = a4 - 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::getSizeInBytesFor  (binary VA: 0x15780b0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getSizeInBytesFor
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::getSizeInBytesFor(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self)
{
  int v1;

  if ( 2 * (int)(uintptr_t)(self) <= 8 )
    return 128;
  v1 = 8;
  do
    v1 *= 2;
  while ( 2 * (int)(uintptr_t)(self) > v1 );
  return 16 * v1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::init  (binary VA: 0x15780e0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::init
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::init(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, char *a2, unsigned int a3)
{
  char *v3;
  int result;
  int v5;

  v3 = a2;
  *((uint32_t *)self + 2) = (a3 >> 4) - 1;
  result = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = 0x80000000;
  if ( a3 >> 4 != 0 )
  {
    while ( 1 )
    {
      v5 = result++;
      v5 *= 16;
      *(uint32_t *)&v3[v5] = -1;
      *(uint32_t *)&v3[v5 + 4] = -1;
      if ( a3 >> 4 == result )
        break;
      v3 = *(char **)self;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::Construct  (binary VA: 0x1578130)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_long_unsig_cbedf5::Construct(hkMapBase_Raw *self, char *a2, unsigned int a3)
{
  hkMapBase_unsigned_long_long_unsig_cbedf5::init((hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)(self), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::resizeTable  (binary VA: 0x1578170)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::resizeTable
// ----------------------------------------------------------------------------
hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> * hkMapBase_unsigned_long_long_unsig_cbedf5::resizeTable(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, hkMemoryAllocator::Self *a2, hkMemoryAllocator::Self *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  unsigned int v12;
  int v13;

  v4 = 8;
  if ( a4 >= 8 )
    v4 = a4;
  v12 = *((uint32_t *)a2 + 1) & 0x80000000;
  v11 = *((uint32_t *)a2 + 2) + 1;
  v13 = *(uint32_t *)a2;
  v5 = G4_VCALL<int>(a3, 8, 16 * v4);
  if ( v5 != 0 )
  {
    *(uint32_t *)a2 = v5;
    v6 = 0;
    while ( 1 )
    {
      v7 = v6++;
      v7 *= 16;
      *(uint32_t *)(v5 + v7) = -1;
      *(uint32_t *)(v5 + v7 + 4) = -1;
      if ( v4 <= v6 )
        break;
      v5 = *(uint32_t *)a2;
    }
    v8 = 0;
    *((uint32_t *)a2 + 2) = v4 - 1;
    *((uint32_t *)a2 + 1) = 0;
    v9 = v13;
    if ( v11 > 0 )
    {
      do
      {
        if ( (*(uint32_t *)(v9 + 4) & *(uint32_t *)v9) != -1 )
          hkMapBase_unsigned_long_long_unsig_cbedf5::insert(
            a2,
            a3,
            *(uint64_t *)v9,
            *(uint64_t *)(v9 + 8));
        ++v8;
        v9 += 16;
      }
      while ( v11 != v8 );
    }
    if ( v12 == 0 )
      G4_VCALL<void>(a3, 12, v13, 16 * v11);
    *(uint32_t *)self = 0;
    return self;
  }
  else
  {
    *(uint32_t *)self = 1;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::insert  (binary VA: 0x15782c0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::insert
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::insert(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, hkMemoryAllocator::Self *a2, uint64_t a3, uint64_t a4)
{
  hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *v4;
  int v5;
  uint32_t *v6;
  unsigned int v7;
  int result;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v13)) > _g4_s4 ? (36u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);

  v4 = self;
  v5 = *((uint32_t *)self + 2);
  v9 = *((uint32_t *)self + 1);
  v12 = v5;
  if ( 2 * v9 > v5 )
  {
    hkMapBase_unsigned_long_long_unsig_cbedf5::resizeTable(
      (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v13,
      (hkMemoryAllocator::Self *)(self),
      a2,
      2 * v5 + 2);
    v4 = self;
    v12 = *((uint32_t *)self + 2);
    v9 = *((uint32_t *)self + 1);
  }
  v10 = *(uint32_t *)v4;
  v11 = 16 * (v12 & (-1640531535 * ((unsigned int)a3 >> 4)));
  v6 = (uint32_t *)(v10 + v11);
  if ( (*(uint32_t *)(v10 + v11 + 4) & *(uint32_t *)(v10 + v11)) != -1 )
  {
    if ( *(uint64_t *)(v10 + v11) == a3 )
    {
LABEL_10:
      result = 0;
      goto LABEL_9;
    }
    v7 = v12 & (-1640531535 * ((unsigned int)a3 >> 4));
    while ( 1 )
    {
      v7 = v12 & (v7 + 1);
      v11 = 16 * v7;
      v6 = (uint32_t *)(v10 + 16 * v7);
      if ( (v6[1] & *v6) == -1 )
        break;
      if ( *(uint64_t *)v6 == a3 )
        goto LABEL_10;
    }
  }
  result = 1;
LABEL_9:
  *((uint32_t *)self + 1) = result + v9;
  *(uint64_t *)v6 = a3;
  *(uint64_t *)(*(uint32_t *)self + v11 + 8) = a4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::tryInsert  (binary VA: 0x1578400)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::tryInsert
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_long_unsig_cbedf5::tryInsert(hkMemoryAllocator::Self *a1, hkMemoryAllocator::Self *a2, uint64_t a3, uint64_t a4, uint32_t *a5)
{
  hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *v5;
  int v6;
  int result;
  int v8;
  uint32_t v9[7];

  v5 = (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)(a1);
  v6 = *((uint32_t *)a1 + 2);
  if ( 2 * *((uint32_t *)a1 + 1) <= v6 )
  {
    *a5 = 0;
    return hkMapBase_unsigned_long_long_unsig_cbedf5::insert(v5, a2, a3, a4);
  }
  hkMapBase_unsigned_long_long_unsig_cbedf5::resizeTable(
    (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v9,
    a1,
    a2,
    2 * v6 + 2);
  v8 = v9[0];
  v5 = (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)(a1);
  *a5 = v9[0];
  result = 0;
  if ( v8 == 0 )
    return hkMapBase_unsigned_long_long_unsig_cbedf5::insert(v5, a2, a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::findOrInsertKey  (binary VA: 0x15784b0)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::findOrInsertKey
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_long_unsig_cbedf5::findOrInsertKey(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, hkMemoryAllocator::Self *a2, uint64_t a3, uint64_t a4)
{
  int v4;
  unsigned int v5;
  uint32_t *v6;
  unsigned int v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef uint8_t _g4_t_v12[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);

  v4 = *((uint32_t *)self + 2);
  v10 = v4;
  if ( 2 * *((uint32_t *)self + 1) > v4 )
  {
    hkMapBase_unsigned_long_long_unsig_cbedf5::resizeTable(
      (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v12,
      (hkMemoryAllocator::Self *)(self),
      a2,
      2 * v4 + 2);
    v10 = *((uint32_t *)self + 2);
  }
  v5 = v10 & (-1640531535 * ((unsigned int)a3 >> 4));
  v9 = 16 * v5;
  v6 = (uint32_t *)(*(uint32_t *)self + 16 * v5);
  v11 = v6[1];
  if ( __PAIR64__(a3, HIDWORD(a3)) == __PAIR64__(*v6, v11) )
    return v5;
  v7 = v10 & (-1640531535 * ((unsigned int)a3 >> 4));
  if ( (*v6 & v11) != 0xFFFFFFFF )
  {
    do
    {
      v7 = v10 & (v7 + 1);
      v9 = 16 * v7;
      v6 = (uint32_t *)(*(uint32_t *)self + 16 * v7);
      if ( *(uint64_t *)v6 == a3 )
        return v7;
    }
    while ( (v6[1] & *v6) != -1 );
    v5 = v7;
  }
  *(uint64_t *)v6 = a3;
  *(uint64_t *)(*(uint32_t *)self + v9 + 8) = a4;
  ++*((uint32_t *)self + 1);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::reserve  (binary VA: 0x1578600)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::reserve
// ----------------------------------------------------------------------------
hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> * hkMapBase_unsigned_long_long_unsig_cbedf5::reserve(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self, hkMemoryAllocator::Self *a2, int a3)
{
  int i;
  uint8_t v5[8];

  for ( i = 8; 2 * a3 > i; i *= 2 )
    ;
  return hkMapBase_unsigned_long_long_unsig_cbedf5::resizeTable(
           (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)v5,
           (hkMemoryAllocator::Self *)(self),
           a2,
           i);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_long_unsig_cbedf5::isPower2  (binary VA: 0x1578660)
// Original: hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::isPower2
// ----------------------------------------------------------------------------
bool hkMapBase_unsigned_long_long_unsig_cbedf5::isPower2(hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *self)
{
  return ((unsigned int)(uintptr_t)(self) & ((unsigned int)(uintptr_t)(self) - 1)) == 0;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::opNew  (binary VA: 0x1578680)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
int hkMap_unsigned_long_long_unsig_c0166e::opNew()
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           12);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::opDelete  (binary VA: 0x15786c0)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_long_unsig_c0166e::opDelete(void *a1)
{
  int address;

  if ( a1 != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      12);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::opNew  (binary VA: 0x1578710)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
unsigned int hkMap_unsigned_long_long_unsig_c0166e::opNew(hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::opNewArray  (binary VA: 0x1578720)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkMap_unsigned_long_long_unsig_c0166e::opNewArray(hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::opDelete  (binary VA: 0x1578730)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_long_unsig_c0166e::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::opDeleteArray  (binary VA: 0x1578740)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete[]
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_long_unsig_c0166e::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::Construct  (binary VA: 0x1578750)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_long_unsig_c0166e::Construct(hkMap_Raw *self, int a2)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
  if ( a2 != 0 )
    hkMapBase_unsigned_long_long_unsig_cbedf5::reserve(
      (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)(self),
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      a2);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::Construct  (binary VA: 0x15787a0)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_long_unsig_c0166e::Construct(hkMap_Raw *self, char *a2, unsigned int a3)
{
  hkMapBase_unsigned_long_long_unsig_cbedf5::Construct(self, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::Construct  (binary VA: 0x15787e0)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_long_unsig_c0166e::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::Destroy  (binary VA: 0x15787f0)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::~hkMap
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_long_unsig_c0166e::Destroy(hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self)
{
  hkMapBase_unsigned_long_long_unsig_cbedf5::clearAndDeallocate(
    self,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_long_unsig_cbedf5::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::insert  (binary VA: 0x1578830)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::insert
// ----------------------------------------------------------------------------
int hkMap_unsigned_long_long_unsig_c0166e::insert(hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2, uint64_t a3)
{
  return hkMapBase_unsigned_long_long_unsig_cbedf5::insert(
           self,
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::tryInsert  (binary VA: 0x1578880)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::tryInsert
// ----------------------------------------------------------------------------
int hkMap_unsigned_long_long_unsig_c0166e::tryInsert(hkMemoryAllocator::Self *a1, uint64_t a2, uint64_t a3, uint32_t *a4)
{
  return hkMapBase_unsigned_long_long_unsig_cbedf5::tryInsert(
           a1,
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::findOrInsertKey  (binary VA: 0x15788e0)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::findOrInsertKey
// ----------------------------------------------------------------------------
unsigned int hkMap_unsigned_long_long_unsig_c0166e::findOrInsertKey(hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2, uint64_t a3)
{
  return hkMapBase_unsigned_long_long_unsig_cbedf5::findOrInsertKey(
           (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)(self),
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::swap  (binary VA: 0x1578930)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::swap
// ----------------------------------------------------------------------------
hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> * hkMap_unsigned_long_long_unsig_c0166e::swap(hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *a2)
{
  int v3;
  int v4;
  int v5;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  v4 = *((uint32_t *)self + 1);
  v5 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *(uint32_t *)a2 = v3;
  *((uint32_t *)a2 + 1) = v4;
  *((uint32_t *)a2 + 2) = v5;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_long_unsig_c0166e::reserve  (binary VA: 0x1578960)
// Original: hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::reserve
// ----------------------------------------------------------------------------
hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> * hkMap_unsigned_long_long_unsig_c0166e::reserve(hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, int a2)
{
  return hkMapBase_unsigned_long_long_unsig_cbedf5::reserve(
           (hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *)(self),
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::bufAlloc  (binary VA: 0x15789a0)
// Original: hkThreadMemory::bufAlloc
// ----------------------------------------------------------------------------
int hkThreadMemory::bufAlloc(hkThreadMemory::Self *self, int *a2)
{
  return G4_VCALL<int>(self, 8, *a2);
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::bufFree  (binary VA: 0x15789c0)
// Original: hkThreadMemory::bufFree
// ----------------------------------------------------------------------------
int hkThreadMemory::bufFree(hkThreadMemory::Self *self, void *a2, int a3)
{
  return G4_VCALL<int>(self, 12, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::getMemoryStatistics  (binary VA: 0x15789f0)
// Original: hkThreadMemory::getMemoryStatistics
// ----------------------------------------------------------------------------
int hkThreadMemory::getMemoryStatistics(int a1, uint32_t *a2)
{
  __m128i v3;
  __m128i v4;
  __m128i v5;
  __m128i v6;
  __m128i v7;
  int v8;
  __m128i v9;
  int result;

  *a2 = -1;
  a2[1] = -1;
  a2[2] = -1;
g4_m128_raw(v3) = (g4_int128_t)_mm_shuffle_ps(*(__m128 *)(a1 + 16), *(__m128 *)(a1 + 32), 136);
g4_m128_raw(v4) = (g4_int128_t)_mm_shuffle_ps(*(__m128 *)(a1 + 48), *(__m128 *)(a1 + 64), 136);
g4_m128_raw(v5) = (g4_int128_t)_mm_shuffle_ps(*(__m128 *)(a1 + 80), *(__m128 *)(a1 + 96), 136);
g4_m128_raw(v6) = (g4_int128_t)_mm_shuffle_ps(*(__m128 *)(a1 + 112), *(__m128 *)(a1 + 128), 136);
  v7 = _mm_add_epi32(
         _mm_unpacklo_epi32(
           _mm_shuffle_epi32(_mm_mul_epu32(v6, *(__m128i *)(a1 + 196)), 8),
           _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v6, 0x20u), _mm_srli_epi64(*(__m128i *)(a1 + 196), 0x20u)), 8)),
         _mm_add_epi32(
           _mm_add_epi32(
             _mm_unpacklo_epi32(
               _mm_shuffle_epi32(_mm_mul_epu32(v3, *(__m128i *)(a1 + 148)), 8),
               _mm_shuffle_epi32(
                 _mm_mul_epu32(_mm_srli_epi64(v3, 0x20u), _mm_srli_epi64(*(__m128i *)(a1 + 148), 0x20u)),
                 8)),
             _mm_unpacklo_epi32(
               _mm_shuffle_epi32(_mm_mul_epu32(v4, *(__m128i *)(a1 + 164)), 8),
               _mm_shuffle_epi32(
                 _mm_mul_epu32(_mm_srli_epi64(v4, 0x20u), _mm_srli_epi64(*(__m128i *)(a1 + 164), 0x20u)),
                 8))),
           _mm_unpacklo_epi32(
             _mm_shuffle_epi32(_mm_mul_epu32(v5, *(__m128i *)(a1 + 180)), 8),
             _mm_shuffle_epi32(
               _mm_mul_epu32(_mm_srli_epi64(v5, 0x20u), _mm_srli_epi64(*(__m128i *)(a1 + 180), 0x20u)),
               8))));
  v8 = *(uint32_t *)(a1 + 212) * *(uint32_t *)(a1 + 144);
  v9 = _mm_add_epi32(v7, _mm_srli_si128(v7, 8));
  a2[4] = -1;
  a2[5] = -1;
  result = _mm_cvtsi128_si32(_mm_add_epi32(v9, _mm_srli_si128(v9, 4)));
  a2[3] = result + v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::getAllocatedSize  (binary VA: 0x1578b50)
// Original: hkThreadMemory::getAllocatedSize
// ----------------------------------------------------------------------------
int hkThreadMemory::getAllocatedSize(hkThreadMemory::Self *self, const void *a2, int a3)
{
  int v3;
  int v4;

  v3 = a3;
  if ( a3 <= 0x2000 )
  {
    if ( a3 <= 640 )
      v4 = *((char *)self + ((a3 + 15) >> 4) + 216);
    else
      v4 = *((uint32_t *)self + ((a3 - 1) >> 10) + 65);
    v3 = *((uint32_t *)self + v4 + 37);
  }
  return (*(int (**)(uint32_t, const void *, int))(**((uint32_t **)self + 1) + 40))(*((uint32_t *)self + 1), a2, v3);
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::blockAllocBatch  (binary VA: 0x1578bb0)
// Original: hkThreadMemory::blockAllocBatch
// ----------------------------------------------------------------------------
void * hkThreadMemory::blockAllocBatch(hkThreadMemory::Self *self, void **a2, void *a3, int a4)
{
  void *result;
  void *v5;

  if ( a4 > 0x2000 )
    return (void *)(*(int (**)(uint32_t, void **, void *, int))(**((uint32_t **)self + 1) + 28))(
                     *((uint32_t *)self + 1),
                     a2,
                     a3,
                     a4);
  result = a3;
  v5 = nullptr;
  if ( (int)(uintptr_t)(a3) > 0 )
  {
    do
    {
      result = (void *)G4_VCALL<int>(self, 8, a4);
      a2[(uint32_t)(uintptr_t)(v5)] = result;
      v5 = (char *)v5 + 1;
    }
    while ( v5 != a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::blockFreeBatch  (binary VA: 0x1578c30)
// Original: hkThreadMemory::blockFreeBatch
// ----------------------------------------------------------------------------
int hkThreadMemory::blockFreeBatch(hkThreadMemory::Self *self, void **a2, int a3, int a4)
{
  int v4;
  int result;
  void *v6;

  if ( a4 > 0x2000 )
    return (*(int (**)(uint32_t, void **, int, int))(**((uint32_t **)self + 1) + 32))(
             *((uint32_t *)self + 1),
             a2,
             a3,
             a4);
  v4 = 0;
  if ( a3 > 0 )
  {
    do
    {
      v6 = a2[v4++];
      result = G4_VCALL<int>(self, 12, v6, a4);
    }
    while ( v4 != a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::initLookupTables  (binary VA: 0x1578d10)
// Original: hkThreadMemory::initLookupTables
// ----------------------------------------------------------------------------
char hkThreadMemory::initLookupTables(hkThreadMemory::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = 1;
  v2 = 0;
  v3 = 0;
  while ( 1 )
  {
    *((uint8_t *)self + v3++ + 216) = v1;
    *((uint32_t *)self + v1 + 37) = v2;
    if ( v3 == 41 )
      break;
    v1 = 1;
    v2 = 16 * v3;
    if ( 16 * v3 != 16 )
    {
      LOBYTE(v1) = 2;
      if ( v2 > 32 )
      {
        LOBYTE(v1) = 3;
        if ( v2 > 48 )
        {
          LOBYTE(v1) = 4;
          if ( v2 > 64 )
          {
            LOBYTE(v1) = 5;
            if ( v2 > 96 )
            {
              LOBYTE(v1) = 6;
              if ( v2 > 128 )
              {
                LOBYTE(v1) = 7;
                if ( v2 > 160 )
                {
                  LOBYTE(v1) = 8;
                  if ( v2 > 192 )
                  {
                    LOBYTE(v1) = 9;
                    if ( v2 > 256 )
                    {
                      LOBYTE(v1) = 10;
                      if ( v2 > 320 )
                        LOBYTE(v1) = sub_1578CB8(16 * v3);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  LOWORD(v3) = 0;
  do
  {
    LOBYTE(v4) = sub_1578CB8(++v3 << 10);
    *((uint32_t *)self + v3 + 64) = v4;
    *((uint32_t *)self + v4 + 37) = v3 << 10;
  }
  while ( v3 != 8 );
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::getCachedSizeUnchecked  (binary VA: 0x1578de0)
// Original: hkThreadMemory::getCachedSizeUnchecked
// ----------------------------------------------------------------------------
int hkThreadMemory::getCachedSizeUnchecked(hkThreadMemory::Self *self)
{
  __m128i v2;
  __m128i v3;
  __m128i v4;
  __m128i v5;
  __m128i v6;
  __m128i v7;
g4_m128_raw(v2) = (g4_int128_t)_mm_shuffle_ps(*((__m128 *)self + 1), *((__m128 *)self + 2), 136);
g4_m128_raw(v3) = (g4_int128_t)_mm_shuffle_ps(*((__m128 *)self + 3), *((__m128 *)self + 4), 136);
g4_m128_raw(v4) = (g4_int128_t)_mm_shuffle_ps(*((__m128 *)self + 5), *((__m128 *)self + 6), 136);
g4_m128_raw(v5) = (g4_int128_t)_mm_shuffle_ps(*((__m128 *)self + 7), *((__m128 *)self + 8), 136);
  v6 = _mm_add_epi32(
         _mm_unpacklo_epi32(
           _mm_shuffle_epi32(_mm_mul_epu32(v5, *(__m128i *)((char *)self + 196)), 8),
           _mm_shuffle_epi32(
             _mm_mul_epu32(_mm_srli_epi64(v5, 0x20u), _mm_srli_epi64(*(__m128i *)((char *)self + 196), 0x20u)),
             8)),
         _mm_add_epi32(
           _mm_add_epi32(
             _mm_unpacklo_epi32(
               _mm_shuffle_epi32(_mm_mul_epu32(v2, *(__m128i *)((char *)self + 148)), 8),
               _mm_shuffle_epi32(
                 _mm_mul_epu32(_mm_srli_epi64(v2, 0x20u), _mm_srli_epi64(*(__m128i *)((char *)self + 148), 0x20u)),
                 8)),
             _mm_unpacklo_epi32(
               _mm_shuffle_epi32(_mm_mul_epu32(v3, *(__m128i *)((char *)self + 164)), 8),
               _mm_shuffle_epi32(
                 _mm_mul_epu32(_mm_srli_epi64(v3, 0x20u), _mm_srli_epi64(*(__m128i *)((char *)self + 164), 0x20u)),
                 8))),
           _mm_unpacklo_epi32(
             _mm_shuffle_epi32(_mm_mul_epu32(v4, *(__m128i *)((char *)self + 180)), 8),
             _mm_shuffle_epi32(
               _mm_mul_epu32(_mm_srli_epi64(v4, 0x20u), _mm_srli_epi64(*(__m128i *)((char *)self + 180), 0x20u)),
               8))));
  v7 = _mm_add_epi32(v6, _mm_srli_si128(v6, 8));
  return _mm_cvtsi128_si32(_mm_add_epi32(v7, _mm_srli_si128(v7, 4))) + *((uint32_t *)self + 53) * *((uint32_t *)self + 36);
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::setMemory  (binary VA: 0x1578f10)
// Original: hkThreadMemory::setMemory
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * hkThreadMemory::setMemory(hkThreadMemory::Self *self, hkMemoryAllocator::Self *a2, int a3)
{
  hkMemoryAllocator::Self *result;

  result = a2;
  if ( a2 != nullptr )
    *((uint32_t *)self + 2) = a3;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::Construct  (binary VA: 0x1578f30)
// Original: hkThreadMemory::hkThreadMemory
// ----------------------------------------------------------------------------
void hkThreadMemory::Construct(hkThreadMemory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20975E8);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  hkThreadMemory::initLookupTables(self);
  hkThreadMemory::setMemory(self, nullptr, 8);
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::Construct  (binary VA: 0x1579080)
// Original: hkThreadMemory::hkThreadMemory
// ----------------------------------------------------------------------------
void hkThreadMemory::Construct(hkThreadMemory::Self *self, hkMemoryAllocator::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20975E8);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  hkThreadMemory::initLookupTables(self);
  hkThreadMemory::setMemory(self, a2, 8);
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::onRowEmpty  (binary VA: 0x15791d0)
// Original: hkThreadMemory::onRowEmpty
// ----------------------------------------------------------------------------
int hkThreadMemory::onRowEmpty(hkThreadMemory::Self *self, int a2)
{
  int v2;
  int v3;
  char *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t v10[6];

  v2 = *((uint32_t *)self + 2);
  if ( v2 == 0 )
    return (*(int (**)(uint32_t, uint32_t))(**((uint32_t **)self + 1) + 8))(
             *((uint32_t *)self + 1),
             *((uint32_t *)self + a2 + 37));
  v3 = 4;
  if ( v2 <= 4 )
    v3 = *((uint32_t *)self + 2);
  (*(void (**)(uint32_t, uint32_t *, int, uint32_t))(**((uint32_t **)self + 1) + 28))(
    *((uint32_t *)self + 1),
    v10,
    v3,
    *((uint32_t *)self + a2 + 37));
  v4 = (char *)self + 8 * a2;
  if ( v3 > 1 )
  {
    v5 = (uint32_t *)v10[1];
    v6 = *((uint32_t *)v4 + 3);
    ++*((uint32_t *)v4 + 4);
    *v5 = v6;
    *((uint32_t *)v4 + 3) = (uint32_t)(uintptr_t)(v5);
    if ( v3 > 2 )
    {
      v7 = (uint32_t *)v10[2];
      ++*((uint32_t *)v4 + 4);
      *v7 = (uint32_t)(uintptr_t)(v5);
      *((uint32_t *)v4 + 3) = (uint32_t)(uintptr_t)(v7);
      if ( v3 > 3 )
      {
        v8 = (uint32_t *)v10[3];
        ++*((uint32_t *)v4 + 4);
        *v8 = (uint32_t)(uintptr_t)(v7);
        *((uint32_t *)v4 + 3) = (uint32_t)(uintptr_t)(v8);
      }
    }
  }
  return v10[0];
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::blockAlloc  (binary VA: 0x1579290)
// Original: hkThreadMemory::blockAlloc
// ----------------------------------------------------------------------------
uint32_t * hkThreadMemory::blockAlloc(hkThreadMemory::Self *self, int a2)
{
  int v2;
  char *v3;
  uint32_t *result;
  char *v5;

  if ( a2 > 0x2000 )
    return (uint32_t *)(*(int (**)(uint32_t, int))(**((uint32_t **)self + 1) + 8))(*((uint32_t *)self + 1), a2);
  if ( a2 <= 640 )
  {
    v2 = *((char *)self + ((a2 + 15) >> 4) + 216);
    v3 = (char *)self + 8 * v2;
    result = *((uint32_t **)v3 + 3);
    v5 = v3 + 12;
    if ( result != nullptr )
      goto LABEL_4;
  }
  else
  {
    v2 = *((uint32_t *)self + ((a2 - 1) >> 10) + 65);
    v3 = (char *)self + 8 * v2;
    result = *((uint32_t **)v3 + 3);
    v5 = v3 + 12;
    if ( result != nullptr )
    {
LABEL_4:
      --*((uint32_t *)v5 + 1);
      *((uint32_t *)v3 + 3) = *result;
      return result;
    }
  }
  return (uint32_t *)hkThreadMemory::onRowEmpty(self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::onRowFull  (binary VA: 0x1579330)
// Original: hkThreadMemory::onRowFull
// ----------------------------------------------------------------------------
char * hkThreadMemory::onRowFull(hkThreadMemory::Self *self, int a2, uint32_t *a3)
{
  char *v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  uint32_t **v7;
  int v8;
  uint32_t **v9;
  typedef char *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v12)) > _g4_s1 ? (20u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v14)) > _g4_s3 ? (32u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  v12 = *((uint32_t *)self + a2 + 37);
  if ( *((uint32_t *)self + 2) == 0 )
    return (char *)(*(int (**)(uint32_t, uint32_t *, int))(**((uint32_t **)self + 1) + 12))(
                     *((uint32_t *)self + 1),
                     a3,
                     v12);
  v3 = (char *)self + 8 * a2;
  v4 = (uint32_t *)(v3 + 12);
  v11 = v3;
  v5 = *((uint32_t *)v3 + 4);
  v13 = *((uint32_t *)self + 2) / 2;
  if ( v5 <= v13 )
    goto LABEL_22;
  do
  {
    v8 = v5 - v13;
    if ( v5 - v13 > 4 )
      v8 = 4;
    if ( v8 <= 0 )
      goto LABEL_14;
    v9 = (uint32_t **)*v4;
    if ( *v4 != 0 )
    {
      --v4[1];
      v6 = *v9;
      v14[0] = (uint32_t)(uintptr_t)(v9);
      *v4 = (uint32_t)(uintptr_t)(v6);
      if ( v8 == 1 )
        goto LABEL_14;
      if ( v6 == nullptr )
      {
        v7 = nullptr;
        v14[1] = 0;
        if ( v8 != 2 )
          goto LABEL_10;
        goto LABEL_14;
      }
      --v4[1];
      v7 = (uint32_t **)*v6;
      *v4 = *v6;
    }
    else
    {
      v6 = nullptr;
      v7 = nullptr;
      v14[0] = 0;
      if ( v8 == 1 )
        goto LABEL_14;
    }
    v14[1] = (uint32_t)(uintptr_t)(v6);
    if ( v8 == 2 )
      goto LABEL_14;
    if ( v7 != nullptr )
    {
      --v4[1];
      v6 = *v7;
      *v4 = (uint32_t)(uintptr_t)(*v7);
LABEL_10:
      v14[2] = (uint32_t)(uintptr_t)(v7);
      if ( v8 == 3 )
        goto LABEL_14;
      if ( v6 != nullptr )
      {
        --v4[1];
        *v4 = *v6;
      }
LABEL_13:
      v14[3] = (uint32_t)(uintptr_t)(v6);
      goto LABEL_14;
    }
    v6 = nullptr;
    v14[2] = 0;
    if ( v8 != 3 )
      goto LABEL_13;
LABEL_14:
    v5 -= v8;
    (*(void (**)(uint32_t, uint32_t *, int, int))(**((uint32_t **)self + 1) + 32))(
      *((uint32_t *)self + 1),
      v14,
      v8,
      v12);
  }
  while ( v13 < v5 );
  v5 = v4[1];
LABEL_22:
  v4[1] = v5 + 1;
  *a3 = *((uint32_t *)v11 + 3);
  *((uint32_t *)v11 + 3) = (uint32_t)(uintptr_t)(a3);
  return (char *)self + 8 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::blockFree  (binary VA: 0x15794e0)
// Original: hkThreadMemory::blockFree
// ----------------------------------------------------------------------------
char * hkThreadMemory::blockFree(hkThreadMemory::Self *self, uint32_t *a2, int a3)
{
  char *result;
  int v4;
  int v5;

  result = (char *)self;
  if ( a2 != nullptr )
  {
    if ( a3 > 0x2000 )
      return (char *)(*(int (**)(uint32_t, uint32_t *, int))(**((uint32_t **)self + 1) + 12))(
                       *((uint32_t *)self + 1),
                       a2,
                       a3);
    if ( a3 <= 640 )
    {
      v4 = *((char *)self + ((a3 + 15) >> 4) + 216);
      if ( *((uint32_t *)self + 2 * v4 + 4) < *((uint32_t *)self + 2) )
        goto LABEL_5;
    }
    else
    {
      v4 = *((uint32_t *)self + ((a3 - 1) >> 10) + 65);
      if ( *((uint32_t *)self + 2 * v4 + 4) < *((uint32_t *)self + 2) )
      {
LABEL_5:
        result = (char *)self + 8 * v4;
        v5 = *((uint32_t *)result + 3);
        ++*((uint32_t *)result + 4);
        *a2 = v5;
        *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(a2);
        return result;
      }
    }
    return hkThreadMemory::onRowFull(self, v4, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::bufRealloc  (binary VA: 0x1579590)
// Original: hkThreadMemory::bufRealloc
// ----------------------------------------------------------------------------
hkMemUtil::Self * hkThreadMemory::bufRealloc(hkThreadMemory::Self *self, uint32_t *a2, signed int a3, int *a4)
{
  hkMemUtil::Self *v4;
  size_t v5;

  v4 = (hkMemUtil::Self *)hkThreadMemory::blockAlloc(self, *a4);
  if ( v4 != nullptr )
  {
    v5 = *a4;
    if ( *a4 > a3 )
      v5 = a3;
    hkMemUtil::memCpy(v4, a2, v5);
  }
  hkThreadMemory::blockFree(self, a2, a3);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::clearRow  (binary VA: 0x1579610)
// Original: hkThreadMemory::clearRow
// ----------------------------------------------------------------------------
uint32_t * hkThreadMemory::clearRow(hkThreadMemory::Self *self, int a2)
{
  uint32_t *v2;
  uint32_t *result;
  int v4;
  uint32_t *v5;
  uint32_t **v6;
  int v7;
  uint32_t **v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[6];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  v9 = *((uint32_t *)self + a2 + 37);
  v2 = (uint32_t *)((char *)self + 8 * a2 + 12);
  result = v10;
  v4 = *((uint32_t *)self + 2 * a2 + 4);
  if ( v4 > 0 )
  {
    while ( 1 )
    {
      v7 = 4;
      v8 = (uint32_t **)*v2;
      if ( v4 <= 4 )
        v7 = v4;
      if ( v8 == nullptr )
        break;
      --*((uint32_t *)self + 2 * a2 + 4);
      v5 = *v8;
      v10[0] = (uint32_t)(uintptr_t)(v8);
      *v2 = (uint32_t)(uintptr_t)(v5);
      if ( v7 == 1 )
        goto LABEL_13;
      if ( v5 != nullptr )
      {
        --*((uint32_t *)self + 2 * a2 + 4);
        v6 = (uint32_t **)*v5;
        *v2 = *v5;
LABEL_6:
        v10[1] = (uint32_t)(uintptr_t)(v5);
        if ( v7 == 2 )
          goto LABEL_13;
        if ( v6 == nullptr )
        {
          v5 = nullptr;
          v10[2] = 0;
          if ( v7 != 4 )
            goto LABEL_13;
          goto LABEL_12;
        }
        --*((uint32_t *)self + 2 * a2 + 4);
        v5 = *v6;
        *v2 = (uint32_t)(uintptr_t)(*v6);
        goto LABEL_9;
      }
      v6 = nullptr;
      v10[1] = 0;
      if ( v7 != 2 )
      {
LABEL_9:
        v10[2] = (uint32_t)(uintptr_t)(v6);
        if ( v7 == 4 )
        {
          if ( v5 != nullptr )
          {
            --*((uint32_t *)self + 2 * a2 + 4);
            *v2 = *v5;
          }
LABEL_12:
          v10[3] = (uint32_t)(uintptr_t)(v5);
        }
      }
LABEL_13:
      v4 -= v7;
      result = (uint32_t *)(*(int (**)(uint32_t, uint32_t *, int, int))(**((uint32_t **)self + 1) + 32))(
                           *((uint32_t *)self + 1),
                           v10,
                           v7,
                           v9);
      if ( v4 <= 0 )
        return result;
    }
    v5 = nullptr;
    v6 = nullptr;
    v10[0] = 0;
    if ( v7 == 1 )
      goto LABEL_13;
    goto LABEL_6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::releaseCachedMemory  (binary VA: 0x1579740)
// Original: hkThreadMemory::releaseCachedMemory
// ----------------------------------------------------------------------------
uint32_t * hkThreadMemory::releaseCachedMemory(hkThreadMemory::Self *self)
{
  uint32_t *result;

  if ( *((uint32_t *)self + 36) != 0 )
  {
    hkThreadMemory::clearRow(self, 16);
    if ( *((uint32_t *)self + 34) == 0 )
    {
LABEL_3:
      if ( *((uint32_t *)self + 32) == 0 )
        goto LABEL_4;
      goto LABEL_21;
    }
  }
  else if ( *((uint32_t *)self + 34) == 0 )
  {
    goto LABEL_3;
  }
  hkThreadMemory::clearRow(self, 15);
  if ( *((uint32_t *)self + 32) == 0 )
  {
LABEL_4:
    if ( *((uint32_t *)self + 30) == 0 )
      goto LABEL_5;
    goto LABEL_22;
  }
LABEL_21:
  hkThreadMemory::clearRow(self, 14);
  if ( *((uint32_t *)self + 30) == 0 )
  {
LABEL_5:
    if ( *((uint32_t *)self + 28) == 0 )
      goto LABEL_6;
    goto LABEL_23;
  }
LABEL_22:
  hkThreadMemory::clearRow(self, 13);
  if ( *((uint32_t *)self + 28) == 0 )
  {
LABEL_6:
    if ( *((uint32_t *)self + 26) == 0 )
      goto LABEL_7;
    goto LABEL_24;
  }
LABEL_23:
  hkThreadMemory::clearRow(self, 12);
  if ( *((uint32_t *)self + 26) == 0 )
  {
LABEL_7:
    if ( *((uint32_t *)self + 24) == 0 )
      goto LABEL_8;
    goto LABEL_25;
  }
LABEL_24:
  hkThreadMemory::clearRow(self, 11);
  if ( *((uint32_t *)self + 24) == 0 )
  {
LABEL_8:
    if ( *((uint32_t *)self + 22) == 0 )
      goto LABEL_9;
    goto LABEL_26;
  }
LABEL_25:
  hkThreadMemory::clearRow(self, 10);
  if ( *((uint32_t *)self + 22) == 0 )
  {
LABEL_9:
    if ( *((uint32_t *)self + 20) == 0 )
      goto LABEL_10;
    goto LABEL_27;
  }
LABEL_26:
  hkThreadMemory::clearRow(self, 9);
  if ( *((uint32_t *)self + 20) == 0 )
  {
LABEL_10:
    if ( *((uint32_t *)self + 18) == 0 )
      goto LABEL_11;
    goto LABEL_28;
  }
LABEL_27:
  hkThreadMemory::clearRow(self, 8);
  if ( *((uint32_t *)self + 18) == 0 )
  {
LABEL_11:
    if ( *((uint32_t *)self + 16) == 0 )
      goto LABEL_12;
    goto LABEL_29;
  }
LABEL_28:
  hkThreadMemory::clearRow(self, 7);
  if ( *((uint32_t *)self + 16) == 0 )
  {
LABEL_12:
    if ( *((uint32_t *)self + 14) == 0 )
      goto LABEL_13;
    goto LABEL_30;
  }
LABEL_29:
  hkThreadMemory::clearRow(self, 6);
  if ( *((uint32_t *)self + 14) == 0 )
  {
LABEL_13:
    if ( *((uint32_t *)self + 12) == 0 )
      goto LABEL_14;
    goto LABEL_31;
  }
LABEL_30:
  hkThreadMemory::clearRow(self, 5);
  if ( *((uint32_t *)self + 12) == 0 )
  {
LABEL_14:
    if ( *((uint32_t *)self + 10) == 0 )
      goto LABEL_15;
    goto LABEL_32;
  }
LABEL_31:
  hkThreadMemory::clearRow(self, 4);
  if ( *((uint32_t *)self + 10) == 0 )
  {
LABEL_15:
    if ( *((uint32_t *)self + 8) == 0 )
      goto LABEL_16;
    goto LABEL_33;
  }
LABEL_32:
  hkThreadMemory::clearRow(self, 3);
  if ( *((uint32_t *)self + 8) == 0 )
  {
LABEL_16:
    result = *((uint32_t **)self + 6);
    if ( result == nullptr )
      goto LABEL_17;
    goto LABEL_34;
  }
LABEL_33:
  hkThreadMemory::clearRow(self, 2);
  result = *((uint32_t **)self + 6);
  if ( result == nullptr )
  {
LABEL_17:
    if ( *((uint32_t *)self + 4) == 0 )
      return result;
    return hkThreadMemory::clearRow(self, 0);
  }
LABEL_34:
  result = hkThreadMemory::clearRow(self, 1);
  if ( *((uint32_t *)self + 4) != 0 )
    return hkThreadMemory::clearRow(self, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::Destroy  (binary VA: 0x15799f0)
// Original: hkThreadMemory::~hkThreadMemory
// ----------------------------------------------------------------------------
void hkThreadMemory::Destroy(hkThreadMemory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20975E8);
  hkThreadMemory::releaseCachedMemory(self);
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkThreadMemory::Destroy_ea1579a30  (binary VA: 0x1579a30)
// Original: hkThreadMemory::~hkThreadMemory
// ----------------------------------------------------------------------------
void hkThreadMemory::Destroy_ea1579a30(hkThreadMemory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20975E8);
  hkThreadMemory::releaseCachedMemory(self);
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::getMemoryStatistics  (binary VA: 0x1579a70)
// Original: hkLeakDetectAllocator::getMemoryStatistics
// ----------------------------------------------------------------------------
int hkLeakDetectAllocator::getMemoryStatistics(int a1, int a2)
{
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(a1 + 40) + 36))(*(uint32_t *)(a1 + 40), a2);
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::getAllocatedSize  (binary VA: 0x1579a90)
// Original: hkLeakDetectAllocator::getAllocatedSize
// ----------------------------------------------------------------------------
int hkLeakDetectAllocator::getAllocatedSize(hkLeakDetectAllocator::Self *self, const void *a2, int a3)
{
  return (*(int (**)(uint32_t, const void *, int))(**((uint32_t **)self + 10) + 40))(*((uint32_t *)self + 10), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::init  (binary VA: 0x1579c70)
// Original: hkLeakDetectAllocator::init
// ----------------------------------------------------------------------------
uint32_t * hkLeakDetectAllocator::init(hkLeakDetectAllocator::Self *self, hkMemoryAllocator::Self *a2, hkMemoryAllocator::Self *a3, void (*a4)(const char *, void *), void *a5)
{
  uint32_t *result;

  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(a4);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(a5);
  *((uint32_t *)self + 15) = 0;
  result = (uint32_t *)G4_VCALL<int>(a3, 8, 12);
  *result = 0;
  result[1] = 0;
  result[2] = -1;
  *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::danger  (binary VA: 0x1579cd0)
// Original: hkLeakDetectAllocator::danger
// ----------------------------------------------------------------------------
int hkLeakDetectAllocator::danger(int a1, int a2, char *a3, int a4)
{
  int v5;
  typedef unsigned int _g4_t_v7[32];
  typedef uint8_t _g4_t_v8[284];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (128u + sizeof(_g4_t_v8)) > _g4_s1 ? (128u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 128u);

  hkString::snprintf((hkString::Self *)v8, 0x100u, "\nAddress=0x%p size=%i\n", a3, *(uint32_t *)(a4 + 12));
  (*(void (**)(int, uint32_t))(a1 + 48))(a2, *(uint32_t *)(a1 + 52));
  (*(void (**)(uint8_t *, uint32_t))(a1 + 48))(v8, *(uint32_t *)(a1 + 52));
  v5 = hkStackTracer::CallTree::getCallStack((hkStackTracer::CallTree::Self *)(a1 + 8), *(uint32_t *)(a4 + 8), v7, 32);
  hkStackTracer::dumpStackTrace(
    (hkStackTracer::Self *)(a1 + 4),
    v7,
    v5,
    *(void (**)(const char *, void *))(a1 + 48),
    *(void **)(a1 + 52));
  return (*(int (**)(const char *, uint32_t))(a1 + 48))(
           "-------------------------------------------------------------------\n\n",
           *(uint32_t *)(a1 + 52));
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::Construct  (binary VA: 0x1579db0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::hkMapBase
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_hkLeakDete_b60829::Construct(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::Destroy  (binary VA: 0x1579dd0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::~hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_hkLeakDete_b60829::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::getSize  (binary VA: 0x1579de0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getSize
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::getSize(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self)
{
  return *((uint32_t *)self + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::getIterator  (binary VA: 0x1579df0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getIterator
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::getIterator(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self)
{
  int v1;
  uint32_t *v2;
  int result;

  v1 = *((uint32_t *)self + 2);
  if ( v1 < 0 )
    return 0;
  v2 = *(uint32_t **)self;
  for ( result = 0; *v2 == -1; v2 += 6 )
  {
    if ( ++result > v1 )
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::isValid  (binary VA: 0x1579e30)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::isValid
// ----------------------------------------------------------------------------
bool * hkMapBase_unsigned_long_hkLeakDete_b60829::isValid(bool *a1, int a2, int a3)
{
  *a1 = a3 <= *(uint32_t *)(a2 + 8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::getNext  (binary VA: 0x1579e50)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getNext
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::getNext(uint32_t *a1, int a2)
{
  int result;
  int v3;
  int v4;

  result = a2 + 1;
  v3 = a1[2];
  if ( a2 + 1 <= v3 && *(uint32_t *)(*a1 + 24 * result) == -1 )
  {
    v4 = *a1 + 24 * a2;
    do
    {
      if ( ++result > v3 )
        break;
      v4 += 24;
    }
    while ( *(uint32_t *)(v4 + 24) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::getValue  (binary VA: 0x1579ea0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getValue
// ----------------------------------------------------------------------------
uint32_t * hkMapBase_unsigned_long_hkLeakDete_b60829::getValue(uint32_t *a1, uint32_t *a2, int a3)
{
  uint32_t *v4;
  int v5;
  int v6;

  v4 = (uint32_t *)(*a2 + 24 * a3);
  *a1 = v4[1];
  a1[1] = v4[2];
  a1[2] = v4[3];
  v5 = v4[4];
  v6 = v4[5];
  a1[3] = v5;
  a1[4] = v6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::findKey  (binary VA: 0x1579ee0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::findKey
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_hkLeakDete_b60829::findKey(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self, unsigned int a2)
{
  int v2;
  unsigned int result;
  int v4;

  v2 = *((uint32_t *)self + 2);
  if ( v2 <= 0 )
    return v2 + 1;
  result = v2 & (-1640531535 * (a2 >> 4));
  v4 = *(uint32_t *)(*(uint32_t *)self + 24 * result);
  if ( v4 == -1 )
    return v2 + 1;
  while ( a2 != v4 )
  {
    result = v2 & (result + 1);
    v4 = *(uint32_t *)(*(uint32_t *)self + 24 * result);
    if ( v4 == -1 )
      return v2 + 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::remove  (binary VA: 0x1579f40)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::remove
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::remove(int *a1, unsigned int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;

  v2 = *a1;
  --a1[1];
  *(uint32_t *)(v2 + 24 * a2) = -1;
  v3 = a1[2];
  v4 = *a1;
  v5 = v3 & (v3 + a2);
  if ( *(uint32_t *)(*a1 + 24 * v5) != -1 )
  {
    do
      v5 = v3 & (v3 + v5);
    while ( *(uint32_t *)(v4 + 24 * v5) != -1 );
  }
  result = v3 & (a2 + 1);
  v15 = v3 & (v5 + 1);
  v7 = 24 * result;
  v8 = *(uint32_t *)(v4 + 24 * result);
  if ( v8 != -1 )
  {
    v14 = *a1;
    v13 = v3 & (a2 + 1);
    v9 = a2;
    do
    {
      v10 = v3 & (-1640531535 * (v8 >> 4));
      if ( (v9 >= v10 || v13 < v15) && (v13 >= v9 || v13 < v10 && v9 >= v10) && (v15 <= v10 || v9 >= v10) )
      {
        v11 = 24 * v9;
        v9 = v13;
        *(uint32_t *)(v14 + v11) = v8;
        v12 = *a1;
        *(uint32_t *)(v12 + v11 + 4) = *(uint32_t *)(*a1 + v7 + 4);
        *(uint32_t *)(v12 + v11 + 8) = *(uint32_t *)(v12 + v7 + 8);
        *(uint32_t *)(v12 + v11 + 12) = *(uint32_t *)(v12 + v7 + 12);
        *(uint32_t *)(v12 + v11 + 16) = *(uint32_t *)(v12 + v7 + 16);
        *(uint8_t *)(v12 + v11 + 20) = *(uint8_t *)(v12 + v7 + 20);
        *(uint32_t *)(*a1 + v7) = -1;
        v3 = a1[2];
        v14 = *a1;
      }
      v13 = v3 & (v13 + 1);
      result = v14;
      v8 = *(uint32_t *)(v14 + 24 * v13);
      v7 = 24 * v13;
    }
    while ( v8 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::checkedFree  (binary VA: 0x157a090)
// Original: hkLeakDetectAllocator::checkedFree
// ----------------------------------------------------------------------------
int hkLeakDetectAllocator::checkedFree(hkLeakDetectAllocator::Self *self, unsigned int a2, char *a3, int a4)
{
  pthread_mutex_t *v4;
  int v5;
  signed int Key;
  uint32_t *v7;
  int *v8;
  int result;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v14)) > _g4_s4 ? (16u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  v4 = (pthread_mutex_t *)((char *)self + 32);
  v5 = *((uint32_t *)self + 9);
  if ( v5 != 0 )
  {
    while ( pthread_mutex_trylock(v4) != 0 )
    {
      if ( --v5 == 0 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    if ( pthread_mutex_lock(v4) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  if ( a3 != nullptr && a4 == 0 )
  {
    (*((void (**)(const char *, uint32_t))self + 12))(
      "Given zero bytes to free with an non-null address\n",
      *((uint32_t *)self + 13));
    __builtin_debugtrap();
    goto LABEL_17;
  }
  if ( a3 == nullptr )
  {
    if ( a4 != 0 )
    {
      (*((void (**)(const char *, uint32_t))self + 12))(
        "Given nonzero bytes to free with an null address\n",
        *((uint32_t *)self + 13));
      __builtin_debugtrap();
    }
LABEL_17:
    result = pthread_mutex_unlock(v4);
    if ( result == 0 )
      return result;
LABEL_12:
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      38,
      "leave",
      v10,
      v11);
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  Key = hkMapBase_unsigned_long_hkLeakDete_b60829::findKey(
          *((hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> **)self + 14),
          (unsigned int)(uintptr_t)(a3));
  v7 = *((uint32_t **)self + 14);
  if ( Key > v7[2] )
  {
    (*((void (**)(const char *, uint32_t))self + 12))(
      "Freeing block not from this allocator",
      *((uint32_t *)self + 13));
    __builtin_debugtrap();
    v7 = *((uint32_t **)self + 14);
  }
  v8 = (int *)(*v7 + 24 * Key);
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  v13 = v8[4];
  v14 = v8[5];
  if ( v13 != a4 )
  {
    hkLeakDetectAllocator::danger((int)(uintptr_t)(self), (int)(uintptr_t)("Freeing block of incorrect size"), a3, (int)(uintptr_t)(&v10));
    __builtin_debugtrap();
  }
  hkStackTracer::CallTree::releaseCallStack((hkLeakDetectAllocator::Self *)((char *)self + 8), v12);
  hkMapBase_unsigned_long_hkLeakDete_b60829::remove(
    *((int **)self + 14),
    Key);
  *((uint32_t *)self + 15) -= (*(int (**)(uint32_t, char *, int))(**((uint32_t **)self + 10) + 40))(
                              *((uint32_t *)self + 10),
                              a3,
                              a4);
  (*(void (**)(uint32_t, char *, int))(**((uint32_t **)self + 10) + 12))(*((uint32_t *)self + 10), a3, a4);
  result = pthread_mutex_unlock(v4);
  if ( result != 0 )
    goto LABEL_12;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::blockFree  (binary VA: 0x157a330)
// Original: hkLeakDetectAllocator::blockFree
// ----------------------------------------------------------------------------
int hkLeakDetectAllocator::blockFree(hkLeakDetectAllocator::Self *self, char *a2, int a3)
{
  return hkLeakDetectAllocator::checkedFree(self, 0, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::bufFree  (binary VA: 0x157a370)
// Original: hkLeakDetectAllocator::bufFree
// ----------------------------------------------------------------------------
int hkLeakDetectAllocator::bufFree(hkLeakDetectAllocator::Self *self, char *a2, int a3)
{
  return hkLeakDetectAllocator::checkedFree(self, 1u, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::opNew  (binary VA: 0x157a3b0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator new
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::opNew()
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           12);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::opDelete  (binary VA: 0x157a3f0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator delete
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_hkLeakDete_b60829::opDelete(void *a1)
{
  int address;

  if ( a1 != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      12);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::opNew  (binary VA: 0x157a440)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator new
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_hkLeakDete_b60829::opNew(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::opNewArray  (binary VA: 0x157a450)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkMapBase_unsigned_long_hkLeakDete_b60829::opNewArray(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::opDelete  (binary VA: 0x157a460)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator delete
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_hkLeakDete_b60829::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::opDeleteArray  (binary VA: 0x157a470)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator delete[]
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_hkLeakDete_b60829::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::Construct  (binary VA: 0x157a480)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::hkMapBase
// ----------------------------------------------------------------------------
void hkMapBase_unsigned_long_hkLeakDete_b60829::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::getKey  (binary VA: 0x157a490)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getKey
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::getKey(uint32_t *a1, int a2)
{
  return *(uint32_t *)(*a1 + 24 * a2);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::setValue  (binary VA: 0x157a4b0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::setValue
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::setValue(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, char a7)
{
  int result;

  result = *a1 + 24 * a2;
  *(uint32_t *)(result + 4) = a3;
  *(uint32_t *)(result + 8) = a4;
  *(uint32_t *)(result + 12) = a5;
  *(uint32_t *)(result + 16) = a6;
  *(uint8_t *)(result + 20) = a7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::hasKey  (binary VA: 0x157a4f0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::hasKey
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_hkLeakDete_b60829::hasKey(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self, hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *a2, unsigned int a3)
{
  unsigned int Key;
  bool v4;
  bool v5;
  bool v6;

  Key = hkMapBase_unsigned_long_hkLeakDete_b60829::findKey(a2, a3);
  v6 = __OFSUB__(Key, *((uint32_t *)a2 + 2));
  v4 = Key == *((uint32_t *)a2 + 2);
  v5 = (int)(Key - *((uint32_t *)a2 + 2)) < 0;
  *(uint8_t *)self = v5 ^ v6 | v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::getWithDefault  (binary VA: 0x157a530)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getWithDefault
// ----------------------------------------------------------------------------
uint32_t * hkMapBase_unsigned_long_hkLeakDete_b60829::getWithDefault(uint32_t *a1, uint32_t *a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8)
{
  uint32_t *result;
  int v9;
  int v10;
  uint32_t *v11;

  result = a1;
  v9 = a2[2];
  if ( v9 <= 0 || (v10 = v9 & (-1640531535 * (a3 >> 4)), *(v11 = (uint32_t *)(*a2 + 24 * v10)) == -1) )
  {
LABEL_8:
    *result = a4;
    result[1] = a5;
    result[2] = a6;
    result[3] = a7;
    result[4] = a8;
  }
  else
  {
    if ( a3 != *v11 )
    {
      do
      {
        v10 = v9 & (v10 + 1);
        v11 = (uint32_t *)(*a2 + 24 * v10);
        if ( *v11 == -1 )
        {
          result = a1;
          goto LABEL_8;
        }
      }
      while ( a3 != *v11 );
      result = a1;
    }
    *result = v11[1];
    result[1] = v11[2];
    result[2] = v11[3];
    result[3] = v11[4];
    result[4] = v11[5];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::get  (binary VA: 0x157a5f0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::get
// ----------------------------------------------------------------------------
int * hkMapBase_unsigned_long_hkLeakDete_b60829::get(int *a1, hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *a2, unsigned int a3, int a4)
{
  signed int Key;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v11;

  Key = hkMapBase_unsigned_long_hkLeakDete_b60829::findKey(a2, a3);
  v5 = 1;
  if ( Key <= *((uint32_t *)a2 + 2) )
  {
    v6 = *(uint32_t *)a2 + 24 * Key;
    v7 = *(uint32_t *)(v6 + 16);
    v8 = *(uint32_t *)(v6 + 4);
    v9 = *(uint32_t *)(v6 + 8);
    v11 = *(uint8_t *)(v6 + 20);
    *(uint32_t *)(a4 + 8) = *(uint32_t *)(v6 + 12);
    *(uint32_t *)(a4 + 12) = v7;
    *(uint32_t *)a4 = v8;
    *(uint32_t *)(a4 + 4) = v9;
    *(uint8_t *)(a4 + 16) = v11;
    v5 = 0;
  }
  *a1 = v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::remove  (binary VA: 0x157a670)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::remove
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_hkLeakDete_b60829::remove(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self, hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *a2, unsigned int a3)
{
  signed int Key;

  Key = hkMapBase_unsigned_long_hkLeakDete_b60829::findKey(a2, a3);
  if ( Key <= *((uint32_t *)a2 + 2) )
  {
    hkMapBase_unsigned_long_hkLeakDete_b60829::remove((int *)a2, Key);
    *(uint32_t *)self = 0;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::getCapacity  (binary VA: 0x157a6e0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getCapacity
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::getCapacity(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self)
{
  return (*((uint32_t *)self + 2) + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::getMemSize  (binary VA: 0x157a6f0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getMemSize
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::getMemSize(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self)
{
  return 8 * (3 * *((uint32_t *)self + 2) + 3);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::getMemStart  (binary VA: 0x157a700)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getMemStart
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::getMemStart(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::isOk  (binary VA: 0x157a710)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::isOk
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_hkLeakDete_b60829::isOk(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self, unsigned int **a2)
{
  int v2;
  unsigned int *v3;
  unsigned int *v4;
  unsigned int v5;
  int i;

  v2 = (int)(uintptr_t)(a2[2]);
  if ( v2 >= 0 )
  {
    v3 = *a2;
    v4 = *a2;
    do
    {
      v5 = *v4;
      if ( *v4 != -1 )
      {
        for ( i = v2 & (-1640531535 * (v5 >> 4)); v5 != v3[6 * i]; i = v2 & (i + 1) )
          ;
      }
      v4 += 6;
    }
    while ( v4 != &(*a2)[6 * v2 + 6] );
  }
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::clear  (binary VA: 0x157a780)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::clear
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::clear(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self)
{
  int result;
  int v2;
  int v3;

  result = 0;
  v2 = *((uint32_t *)self + 2) + 1;
  if ( *((int *)self + 2) >= 0 )
  {
    do
    {
      v3 = 3 * result++;
      *(uint32_t *)(*(uint32_t *)self + 8 * v3) = -1;
    }
    while ( result != v2 );
  }
  *((uint32_t *)self + 1) &= 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::clearAndDeallocate  (binary VA: 0x157a7c0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::clearAndDeallocate
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::clearAndDeallocate(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self, hkMemoryAllocator::Self *a2)
{
  int result;

  hkMapBase_unsigned_long_hkLeakDete_b60829::clear(self);
  result = *((uint32_t *)self + 1);
  if ( result >= 0 )
    result = G4_VCALL<int>(a2, 12, *(uint32_t *)self, 8 * (3 * *((uint32_t *)self + 2) + 3));
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::wasReallocated  (binary VA: 0x157a830)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::wasReallocated
// ----------------------------------------------------------------------------
int64_t hkMapBase_unsigned_long_hkLeakDete_b60829::wasReallocated(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self, int a2)
{
  int64_t result; // rax

  LODWORD(result) = (uint32_t)(uintptr_t)(self);
  HIDWORD(result) = *(uint32_t *)(a2 + 4) >= 0;
  *(uint8_t *)self = BYTE4(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::setOwnedData  (binary VA: 0x157a850)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::setOwnedData
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_hkLeakDete_b60829::setOwnedData(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self, void *a2, int a3, int a4)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = a3 | 0x80000000;
  *((uint32_t *)self + 2) = a4 - 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::getSizeInBytesFor  (binary VA: 0x157a880)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getSizeInBytesFor
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::getSizeInBytesFor(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self)
{
  int v1;

  if ( 2 * (int)(uintptr_t)(self) <= 8 )
    return 192;
  v1 = 8;
  do
    v1 *= 2;
  while ( 2 * (int)(uintptr_t)(self) > v1 );
  return 24 * v1;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::init  (binary VA: 0x157a8c0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::init
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::init(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self, char *a2, unsigned int a3)
{
  int v3;
  char *v4;
  int result;

  v3 = 0;
  v4 = a2;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = 0x80000000;
  *((uint32_t *)self + 2) = a3 / 0x18 - 1;
  result = 0;
  if ( a3 / 0x18 != 0 )
  {
    while ( 1 )
    {
      ++result;
      *(uint32_t *)&v4[v3] = -1;
      v3 += 24;
      if ( a3 / 0x18 == result )
        break;
      v4 = *(char **)self;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::Construct  (binary VA: 0x157a910)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::hkMapBase
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::Construct(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self, char *a2, unsigned int a3)
{
  return hkMapBase_unsigned_long_hkLeakDete_b60829::init(self, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::resizeTable  (binary VA: 0x157a950)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::resizeTable
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_hkLeakDete_b60829::resizeTable(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self, hkMemoryAllocator::Self *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v11;
  unsigned int v12;
  int *v13;

  v4 = 8;
  if ( a4 >= 8 )
    v4 = a4;
  v12 = *((uint32_t *)a2 + 1) & 0x80000000;
  v11 = *((uint32_t *)a2 + 2) + 1;
  v13 = *(int **)a2;
  v5 = G4_VCALL<int>(a3, 8, 24 * v4);
  if ( v5 != 0 )
  {
    *(uint32_t *)a2 = v5;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)(v5 + v6) = -1;
      v6 += 24;
      if ( v4 <= v7 )
        break;
      v5 = *(uint32_t *)a2;
    }
    v8 = 0;
    *((uint32_t *)a2 + 2) = v4 - 1;
    *((uint32_t *)a2 + 1) = 0;
    v9 = v13;
    if ( v11 > 0 )
    {
      do
      {
        if ( *v9 != -1 )
          hkMapBase_unsigned_long_hkLeakDete_b60829::insert(
            a2,
            a3,
            *v9,
            v9[1],
            v9[2],
            v9[3],
            v9[4],
            v9[5]);
        ++v8;
        v9 += 6;
      }
      while ( v11 != v8 );
    }
    if ( v12 == 0 )
      G4_VCALL<void>(a3, 12, v13, 24 * v11);
    *(uint32_t *)self = 0;
    return self;
  }
  else
  {
    *(uint32_t *)self = 1;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::insert  (binary VA: 0x157aa90)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::insert
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::insert(hkMemoryAllocator::Self *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, char a8)
{
  int v8;
  unsigned int v9;
  int v10;
  int i;
  int v12;
  int v13;
  int result;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);

  v8 = *((uint32_t *)a1 + 2);
  v16 = *((uint32_t *)a1 + 1);
  v17 = v8;
  if ( 2 * v16 > v8 )
  {
    hkMapBase_unsigned_long_hkLeakDete_b60829::resizeTable(
      (hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *)v18,
      a1,
      a2,
      2 * v8 + 2);
    v17 = *((uint32_t *)a1 + 2);
    v16 = *((uint32_t *)a1 + 1);
  }
  v9 = v17 & (-1640531535 * (a3 >> 4));
  v10 = *(uint32_t *)a1;
  for ( i = 3 * v9; ; i = 3 * v9 )
  {
    v12 = 8 * i;
    v13 = *(uint32_t *)(v10 + v12);
    if ( v13 == -1 )
    {
      result = 1;
      goto LABEL_8;
    }
    if ( a3 == v13 )
      break;
    v9 = v17 & (v9 + 1);
  }
  result = 0;
LABEL_8:
  *((uint32_t *)a1 + 1) = result + v16;
  *(uint32_t *)(v10 + v12) = a3;
  v15 = *(uint32_t *)a1;
  *(uint32_t *)(v15 + v12 + 4) = a4;
  *(uint32_t *)(v15 + v12 + 8) = a5;
  *(uint32_t *)(v15 + v12 + 12) = a6;
  *(uint32_t *)(v15 + v12 + 16) = a7;
  *(uint8_t *)(v15 + v12 + 20) = a8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::checkedAlloc  (binary VA: 0x157ab90)
// Original: hkLeakDetectAllocator::checkedAlloc
// ----------------------------------------------------------------------------
unsigned int hkLeakDetectAllocator::checkedAlloc(hkLeakDetectAllocator::Self *self, unsigned int a2, int a3)
{
  pthread_mutex_t *v3;
  int v4;
  unsigned int v5;
  int v6;
  int StackTrace;
  typedef hkStopwatch::Self *_g4_t_mutex;
  typedef int _g4_t_TickCounter;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef unsigned int _g4_t_v13[135];
  enum : size_t {
    _g4_s0 = 688u,
    _g4_s1 = (0u + sizeof(_g4_t_mutex)) > _g4_s0 ? (0u + sizeof(_g4_t_mutex)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_TickCounter)) > _g4_s1 ? (60u + sizeof(_g4_t_TickCounter)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v11)) > _g4_s2 ? (64u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v12)) > _g4_s3 ? (68u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v13)) > _g4_s4 ? (80u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 0u);
  _g4_t_TickCounter &TickCounter = *reinterpret_cast<_g4_t_TickCounter *>(_g4_sf + 60u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 64u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 68u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 80u);

  v3 = (pthread_mutex_t *)((char *)self + 32);
  v4 = *((uint32_t *)self + 9);
  if ( v4 != 0 )
  {
    while ( pthread_mutex_trylock(v3) != 0 )
    {
      if ( --v4 == 0 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( pthread_mutex_lock(v3) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  v5 = (*(int (**)(uint32_t, int))(**((uint32_t **)self + 10) + 8))(*((uint32_t *)self + 10), a3);
  mutex = *((hkStopwatch::Self **)self + 10);
  *((uint32_t *)self + 15) += (*(int (**)(void))(*(uint32_t *)mutex + 40))();
  TickCounter = hkStopwatch::getTickCounter(mutex);
  v11 = v6;
  StackTrace = hkStackTracer::getStackTrace();
  v12 = hkStackTracer::CallTree::insertCallStack((hkLeakDetectAllocator::Self *)((char *)self + 8), v13, StackTrace);
  hkMapBase_unsigned_long_hkLeakDete_b60829::insert(
    *((hkMemoryAllocator::Self **)self + 14),
    *((uint32_t *)self + 11),
    v5,
    TickCounter,
    v11,
    v12,
    a3,
    a2 != 0);
  if ( pthread_mutex_unlock(v3) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::blockAlloc  (binary VA: 0x157ad50)
// Original: hkLeakDetectAllocator::blockAlloc
// ----------------------------------------------------------------------------
unsigned int hkLeakDetectAllocator::blockAlloc(hkLeakDetectAllocator::Self *self, int a2)
{
  return hkLeakDetectAllocator::checkedAlloc(self, 0, a2);
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::bufAlloc  (binary VA: 0x157ad90)
// Original: hkLeakDetectAllocator::bufAlloc
// ----------------------------------------------------------------------------
unsigned int hkLeakDetectAllocator::bufAlloc(hkLeakDetectAllocator::Self *self, int *a2)
{
  return hkLeakDetectAllocator::checkedAlloc(self, 1u, *a2);
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::bufRealloc  (binary VA: 0x157add0)
// Original: hkLeakDetectAllocator::bufRealloc
// ----------------------------------------------------------------------------
hkMemUtil::Self * hkLeakDetectAllocator::bufRealloc(hkLeakDetectAllocator::Self *self, char *a2, signed int a3, int *a4)
{
  hkMemUtil::Self *v4;
  size_t v5;
  hkMemUtil::Self *v7;

  v4 = (hkMemUtil::Self *)hkLeakDetectAllocator::checkedAlloc(self, 1u, *a4);
  v5 = *a4;
  if ( *a4 > a3 )
    v5 = a3;
  v7 = v4;
  hkMemUtil::memCpy(v4, a2, v5);
  hkLeakDetectAllocator::checkedFree(self, 1u, a2, a3);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::tryInsert  (binary VA: 0x157ae50)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::tryInsert
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::tryInsert(hkMemoryAllocator::Self *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, char a8, uint32_t *a9)
{
  int v9;
  int result;
  int v11;
  uint32_t v12[7];

  v9 = *((uint32_t *)a1 + 2);
  if ( 2 * *((uint32_t *)a1 + 1) <= v9 )
  {
    *a9 = 0;
    return hkMapBase_unsigned_long_hkLeakDete_b60829::insert(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8);
  }
  hkMapBase_unsigned_long_hkLeakDete_b60829::resizeTable(
    (hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *)v12,
    a1,
    a2,
    2 * v9 + 2);
  v11 = v12[0];
  *a9 = v12[0];
  result = 0;
  if ( v11 == 0 )
    return hkMapBase_unsigned_long_hkLeakDete_b60829::insert(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::findOrInsertKey  (binary VA: 0x157af00)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::findOrInsertKey
// ----------------------------------------------------------------------------
int hkMapBase_unsigned_long_hkLeakDete_b60829::findOrInsertKey(hkMemoryAllocator::Self *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, char a8)
{
  int v8;
  int result;
  int v10;
  int i;
  int v12;
  int v13;
  int v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);

  v8 = *((uint32_t *)a1 + 2);
  v15 = v8;
  if ( 2 * *((uint32_t *)a1 + 1) > v8 )
  {
    hkMapBase_unsigned_long_hkLeakDete_b60829::resizeTable(
      (hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *)v16,
      a1,
      a2,
      2 * v8 + 2);
    v15 = *((uint32_t *)a1 + 2);
  }
  result = v15 & (-1640531535 * (a3 >> 4));
  v10 = *(uint32_t *)a1;
  for ( i = 3 * result; ; i = 3 * result )
  {
    v12 = 8 * i;
    v13 = *(uint32_t *)(v10 + v12);
    if ( a3 == v13 )
      break;
    if ( v13 == -1 )
    {
      *(uint32_t *)(v10 + v12) = a3;
      v14 = *(uint32_t *)a1;
      *(uint32_t *)(v14 + v12 + 4) = a4;
      *(uint32_t *)(v14 + v12 + 8) = a5;
      *(uint32_t *)(v14 + v12 + 12) = a6;
      *(uint32_t *)(v14 + v12 + 16) = a7;
      *(uint8_t *)(v14 + v12 + 20) = a8;
      ++*((uint32_t *)a1 + 1);
      return result;
    }
    result = v15 & (result + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::reserve  (binary VA: 0x157aff0)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::reserve
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> * hkMapBase_unsigned_long_hkLeakDete_b60829::reserve(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self, hkMemoryAllocator::Self *a2, int a3)
{
  int i;
  uint8_t v5[8];

  for ( i = 8; 2 * a3 > i; i *= 2 )
    ;
  return hkMapBase_unsigned_long_hkLeakDete_b60829::resizeTable(
           (hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *)v5,
           (hkMemoryAllocator::Self *)(self),
           (int)(uintptr_t)(a2),
           i);
}

// ----------------------------------------------------------------------------
// Function: hkMapBase_unsigned_long_hkLeakDete_b60829::isPower2  (binary VA: 0x157b050)
// Original: hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::isPower2
// ----------------------------------------------------------------------------
bool hkMapBase_unsigned_long_hkLeakDete_b60829::isPower2(hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *self)
{
  return ((unsigned int)(uintptr_t)(self) & ((unsigned int)(uintptr_t)(self) - 1)) == 0;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::opNew  (binary VA: 0x157b070)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
int hkMap_unsigned_long_hkLeakDete_4ca4f1::opNew()
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           12);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::opDelete  (binary VA: 0x157b0b0)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_hkLeakDete_4ca4f1::opDelete(void *a1)
{
  int address;

  if ( a1 != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      12);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::opNew  (binary VA: 0x157b100)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
unsigned int hkMap_unsigned_long_hkLeakDete_4ca4f1::opNew(hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::opNewArray  (binary VA: 0x157b110)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkMap_unsigned_long_hkLeakDete_4ca4f1::opNewArray(hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::opDelete  (binary VA: 0x157b120)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_hkLeakDete_4ca4f1::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::opDeleteArray  (binary VA: 0x157b130)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete[]
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_hkLeakDete_4ca4f1::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::Construct  (binary VA: 0x157b140)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> * hkMap_unsigned_long_hkLeakDete_4ca4f1::Construct(hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, int a2)
{
  hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *result;

  result = (hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *)(self);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
  if ( a2 != 0 )
    return hkMapBase_unsigned_long_hkLeakDete_b60829::reserve(
             (hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *)(self),
             (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
             a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::Construct  (binary VA: 0x157b190)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
int hkMap_unsigned_long_hkLeakDete_4ca4f1::Construct(hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, char *a2, unsigned int a3)
{
  return hkMapBase_unsigned_long_hkLeakDete_b60829::Construct(
           self,
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::Construct  (binary VA: 0x157b1d0)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_hkLeakDete_4ca4f1::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::Destroy  (binary VA: 0x157b1e0)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::~hkMap
// ----------------------------------------------------------------------------
void hkMap_unsigned_long_hkLeakDete_4ca4f1::Destroy(hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self)
{
  hkMapBase_unsigned_long_hkLeakDete_b60829::clearAndDeallocate(
    (hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *)(self),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_hkLeakDete_b60829::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::insert  (binary VA: 0x157b220)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::insert
// ----------------------------------------------------------------------------
int hkMap_unsigned_long_hkLeakDete_4ca4f1::insert(hkMemoryAllocator::Self *a1, unsigned int a2, int a3, int a4, int a5, int a6, char a7)
{
  return hkMapBase_unsigned_long_hkLeakDete_b60829::insert(
           a1,
           (int)(uintptr_t)(&hkContainerHeapAllocator::s_alloc),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::tryInsert  (binary VA: 0x157b280)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::tryInsert
// ----------------------------------------------------------------------------
int hkMap_unsigned_long_hkLeakDete_4ca4f1::tryInsert(hkMemoryAllocator::Self *a1, unsigned int a2, int a3, int a4, int a5, int a6, char a7, uint32_t *a8)
{
  return hkMapBase_unsigned_long_hkLeakDete_b60829::tryInsert(
           a1,
           (int)(uintptr_t)(&hkContainerHeapAllocator::s_alloc),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::findOrInsertKey  (binary VA: 0x157b2f0)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::findOrInsertKey
// ----------------------------------------------------------------------------
int hkMap_unsigned_long_hkLeakDete_4ca4f1::findOrInsertKey(hkMemoryAllocator::Self *a1, unsigned int a2, int a3, int a4, int a5, int a6, char a7)
{
  return hkMapBase_unsigned_long_hkLeakDete_b60829::findOrInsertKey(
           a1,
           (int)(uintptr_t)(&hkContainerHeapAllocator::s_alloc),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::swap  (binary VA: 0x157b350)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::swap
// ----------------------------------------------------------------------------
hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> * hkMap_unsigned_long_hkLeakDete_4ca4f1::swap(hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *a2)
{
  int v3;
  int v4;
  int v5;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  v4 = *((uint32_t *)self + 1);
  v5 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *(uint32_t *)a2 = v3;
  *((uint32_t *)a2 + 1) = v4;
  *((uint32_t *)a2 + 2) = v5;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMap_unsigned_long_hkLeakDete_4ca4f1::reserve  (binary VA: 0x157b380)
// Original: hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::reserve
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> * hkMap_unsigned_long_hkLeakDete_4ca4f1::reserve(hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, int a2)
{
  return hkMapBase_unsigned_long_hkLeakDete_b60829::reserve(
           (hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *)(self),
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_hkLeakDetectAllocator_Al_72dd16  (binary VA: 0x157b3c0)
// Original: hkAlgorithm::quickSortRecursive<hkLeakDetectAllocator::AllocInfo,hkAlgorithm::less<hkLeakDetectAllocator::AllocInfo>>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_hkLeakDetectAllocator_Al_72dd16(int a1, int a2, int a3)
{
  bool v3;
  int result;
  int v5;
  unsigned int *v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  int i;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  char v19;

  while ( 2 )
  {
    v5 = a3;
    v6 = (unsigned int *)(a1 + 20 * ((a3 + a2) >> 1));
    v13 = v6[1];
    v17 = *v6;
    v7 = a1 + 20 * a2;
    v8 = a2 + 1;
    for ( i = a2 + 1; ; v8 = i )
    {
      v15 = v8 - 1;
      if ( __PAIR64__(v13, v17) > *(uint64_t *)v7 )
        goto LABEL_17;
      v9 = a1 + 20 * v5;
      v10 = *(uint32_t *)(v9 + 4);
      v11 = *(uint32_t *)v9;
      if ( __PAIR64__(v13, v17) < *(uint64_t *)v9 )
      {
        v12 = a1 + 20 * v5 - 20;
        while ( 1 )
        {
          v9 = v12;
          v12 -= 20;
          --v5;
          v10 = *(uint32_t *)(v12 + 24);
          v11 = *(uint32_t *)(v12 + 20);
          if ( v13 > v10 )
            break;
          if ( v13 >= v10 && v17 >= v11 )
          {
            v3 = v5 == v15;
            if ( v5 < v15 )
              goto LABEL_3;
            goto LABEL_14;
          }
        }
      }
      v3 = v5 == v15;
      if ( v5 < v15 )
        break;
LABEL_14:
      if ( !v3 )
      {
        v18 = *(uint32_t *)(v9 + 8);
        v16 = *(uint32_t *)(v9 + 12);
        v19 = *(uint8_t *)(v9 + 16);
        *(uint32_t *)v9 = *(uint32_t *)v7;
        *(uint32_t *)(v9 + 4) = *(uint32_t *)(v7 + 4);
        *(uint32_t *)(v9 + 8) = *(uint32_t *)(v7 + 8);
        *(uint32_t *)(v9 + 12) = *(uint32_t *)(v7 + 12);
        *(uint8_t *)(v9 + 16) = *(uint8_t *)(v7 + 16);
        *(uint32_t *)v7 = v11;
        *(uint32_t *)(v7 + 8) = v18;
        *(uint32_t *)(v7 + 4) = v10;
        *(uint32_t *)(v7 + 12) = v16;
        *(uint8_t *)(v7 + 16) = v19;
      }
      --v5;
      v15 = i;
      if ( v5 < i )
        break;
LABEL_17:
      ++i;
      v7 += 20;
    }
LABEL_3:
    if ( a2 < v5 )
    {
      hkAlgorithm::quickSortRecursive_hkLeakDetectAllocator_Al_72dd16(
        a1,
        a2,
        v5);
      result = v15;
      if ( a3 > v15 )
      {
LABEL_5:
        a2 = result;
        continue;
      }
    }
    else
    {
      result = v15;
      if ( a3 > v15 )
        goto LABEL_5;
    }
    return result;
  }
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::quit  (binary VA: 0x157b590)
// Original: hkLeakDetectAllocator::quit
// ----------------------------------------------------------------------------
int hkLeakDetectAllocator::quit(hkLeakDetectAllocator::Self *self)
{
  hkLeakDetectAllocator::Self *v1;
  uint32_t *v3;
  int v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  hkLeakDetectAllocator::Self *v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  int v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef char _g4_t_v27;
  typedef hkLeakDetectAllocator::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32[4];
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t _g4_t_v36[70];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v25)) > _g4_s1 ? (40u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v26)) > _g4_s2 ? (44u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v27)) > _g4_s3 ? (48u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v28)) > _g4_s4 ? (52u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v29)) > _g4_s5 ? (56u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v30)) > _g4_s6 ? (56u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v31)) > _g4_s7 ? (56u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v32)) > _g4_s8 ? (60u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v33)) > _g4_s9 ? (64u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v34)) > _g4_s10 ? (68u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v35)) > _g4_s11 ? (72u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v36)) > _g4_s12 ? (80u + sizeof(_g4_t_v36)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);

  v36[66] = (uint32_t)(uintptr_t)(&self);
  v28 = self;
  if ( (*(uint32_t *)(*((uint32_t *)self + 14) + 4) & 0x7FFFFFFF) != 0 )
  {
    (*((void (**)(const char *, uint32_t))self + 12))(
      "**************************************************************\n"
      "* Begin hkLeakDetectorAllocator                              *\n"
      "**************************************************************\n",
      *((uint32_t *)self + 13));
    v3 = *((uint32_t **)v28 + 14);
    v34 = 0;
    v35 = 0x80000000;
    v33 = 0;
    if ( (v3[1] & 0x7FFFFFFF) != 0 )
    {
      hkArrayUtil::reserve((hkArrayUtil::Self *)v32, *((hkMemoryAllocator::Self **)v28 + 11), &v33, v3[1] & 0x7FFFFFFF, 20);
      v4 = v34;
      v29 = v33;
      v3 = *((uint32_t **)v28 + 14);
    }
    else
    {
      v29 = 0;
      v4 = 0;
    }
    v5 = v3[2];
    if ( v5 >= 0 )
    {
      v6 = (uint32_t *)*v3;
      if ( *(uint32_t *)*v3 == -1 )
      {
        v7 = (uint32_t *)*v3;
        v8 = 0;
        while ( ++v8 <= v5 )
        {
          v7 += 6;
          if ( *v7 != -1 )
          {
            v16 = v8;
            goto LABEL_27;
          }
        }
      }
      else
      {
        v8 = 0;
        v16 = 0;
LABEL_27:
        v17 = v6;
        while ( 1 )
        {
          v18 = &v17[6 * v16];
          ++v8;
          v25 = v18[3];
          v27 = *((uint8_t *)v18 + 20);
          v26 = v18[4];
          v19 = v18[2];
          v20 = v29 + 20 * v4;
          *(uint32_t *)v20 = v18[1];
          *(uint32_t *)(v20 + 4) = v19;
          *(uint8_t *)(v20 + 16) = v27;
          v21 = v34;
          *(uint32_t *)(v20 + 12) = v26;
          *(uint32_t *)(v20 + 8) = v25;
          v4 = v21 + 1;
          v34 = v21 + 1;
          v22 = *((uint32_t **)v28 + 14);
          v31 = v22[2];
          if ( v8 > v31 )
            break;
          v17 = (uint32_t *)*v22;
          if ( v17[6 * v8] == -1 )
          {
            v23 = (int)(uintptr_t)(&v17[6 * v8 - 6]);
            while ( ++v8 <= v31 )
            {
              v23 += 24;
              if ( *(uint32_t *)(v23 + 24) != -1 )
                goto LABEL_34;
            }
            break;
          }
LABEL_34:
          v16 = v8;
          v29 = v33;
        }
        v29 = v33;
      }
    }
    if ( v4 > 1 )
    {
      LOBYTE(v24) = 0;
      hkAlgorithm::quickSortRecursive_hkLeakDetectAllocator_Al_72dd16(
        v29,
        0,
        v4 - 1);
      v4 = v34;
    }
    v9 = 1;
    v30 = 0;
    if ( v4 > 0 )
    {
      do
      {
        v10 = v30 + v33;
        v11 = *(uint32_t *)(v30 + v33 + 8);
        if ( v11 >= 0 )
        {
          if ( v9 < v4 )
          {
            v12 = v30 + v33;
            v13 = v33 + 20 * v4 - 20;
            while ( 1 )
            {
              if ( *(uint32_t *)(v12 + 28) == v11 )
              {
                *(uint32_t *)(v12 + 28) = -1;
                v12 += 20;
                if ( v12 == v13 )
                  break;
              }
              else
              {
                v12 += 20;
                if ( v12 == v13 )
                  break;
              }
              v11 = *(uint32_t *)(v10 + 8);
            }
          }
          hkLeakDetectAllocator::danger((int)(uintptr_t)(v28), (int)(uintptr_t)("Memory Leaked:\n"), nullptr, v10);
          v4 = v34;
        }
        v14 = v9;
        v30 += 20;
        ++v9;
      }
      while ( v14 < v4 );
    }
    v34 = 0;
    if ( v35 >= 0 )
      (*(void (**)(uint32_t, int, int, int))(**((uint32_t **)v28 + 11) + 20))(
        *((uint32_t *)v28 + 11),
        v33,
        20 * v35,
        v24);
    v15 = v28;
    v35 = 0x80000000;
    v33 = 0;
    hkString::snprintf(
      (hkString::Self *)v36,
      0x100u,
      "\n%i leaks found\n",
      (const char *)(*(uint32_t *)(*((uint32_t *)v28 + 14) + 4) & 0x7FFFFFFF));
    (*((void (**)(uint32_t *, uint32_t))v15 + 12))(v36, *((uint32_t *)v15 + 13));
    (*((void (**)(const char *, uint32_t))v15 + 12))(
      "**************************************************************\n"
      "* End hkLeakDetectorAllocator                                *\n"
      "**************************************************************\n",
      *((uint32_t *)v15 + 13));
  }
  v1 = v28;
  hkStackTracer::CallTree::quit((hkLeakDetectAllocator::Self *)((char *)v28 + 8));
  hkMapBase_unsigned_long_hkLeakDete_b60829::clearAndDeallocate(
    *((hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> **)v1 + 14),
    *((hkMemoryAllocator::Self **)v1 + 11));
  hkMapBase_unsigned_long_hkLeakDete_b60829::Destroy();
  return (*(int (**)(uint32_t, uint32_t, int))(**((uint32_t **)v1 + 11) + 12))(
           *((uint32_t *)v1 + 11),
           *((uint32_t *)v1 + 14),
           12);
}

// ----------------------------------------------------------------------------
// Function: hkLeakDetectAllocator::printAllocationsByCallTree  (binary VA: 0x157b990)
// Original: hkLeakDetectAllocator::printAllocationsByCallTree
// ----------------------------------------------------------------------------
int hkLeakDetectAllocator::printAllocationsByCallTree(hkLeakDetectAllocator::Self *self, hkOstream::Self *a2)
{
  int v2;
  pthread_mutex_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  int j;
  int v12;
  int result;
  int i;
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef hkOstream::Self *_g4_t_v20;
  typedef int *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[4];
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef hkLeakDetectAllocator::Self **_g4_t_v28;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_mutex)) > _g4_s0 ? (0u + sizeof(_g4_t_mutex)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v20)) > _g4_s1 ? (4u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v22)) > _g4_s3 ? (24u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v24)) > _g4_s5 ? (44u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v25)) > _g4_s6 ? (48u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v26)) > _g4_s7 ? (52u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v27)) > _g4_s8 ? (56u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v28)) > _g4_s9 ? (72u + sizeof(_g4_t_v28)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);

  v28 = &self;
  v21 = (int *)self;
  v20 = a2;
  v2 = *((uint32_t *)self + 9);
  mutex = (pthread_mutex_t *)((char *)self + 32);
  v3 = (pthread_mutex_t *)((char *)self + 32);
  if ( v2 != 0 )
  {
    while ( pthread_mutex_trylock(v3) != 0 )
    {
      if ( --v2 == 0 )
        goto LABEL_22;
    }
  }
  else
  {
LABEL_22:
    if ( pthread_mutex_lock(mutex) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  v25 = 0;
  v26 = 0;
  v27 = 0x80000000;
  v4 = v21[3];
  if ( v4 > 0 )
  {
    hkArrayUtil::reserve((hkArrayUtil::Self *)v23, (hkMemoryAllocator::Self *)hkContainerDebugAllocator::s_alloc, &v25, v4, 8);
    if ( v4 - v26 > 0 )
      memset((void *)(v25 + 8 * v26), 0, 8 * (v4 - v26));
  }
  v26 = v4;
  v5 = (uint32_t *)v21[14];
  v22 = v5;
  v6 = v5[2];
  if ( v6 >= 0 )
  {
    v7 = (uint32_t *)*v5;
    if ( *(uint32_t *)*v5 == -1 )
    {
      v8 = (uint32_t *)*v5;
      v9 = 0;
      while ( ++v9 <= v6 )
      {
        v8 += 6;
        if ( *v8 != -1 )
        {
          i = v9;
          goto LABEL_25;
        }
      }
    }
    else
    {
      v9 = 0;
      for ( i = 0; ; i = v9 )
      {
LABEL_25:
        v15 = &v7[6 * i];
        v16 = v15[3];
        v17 = v15[4];
        if ( v16 >= 0 )
        {
          do
          {
            *(uint64_t *)(v25 + 8 * v16) += v17;
            v16 = *(uint32_t *)(v21[2] + 20 * v16 + 4);
          }
          while ( v16 >= 0 );
          v6 = v22[2];
        }
        if ( ++v9 > v6 )
          break;
        v7 = (uint32_t *)*v22;
        if ( *(uint32_t *)(*v22 + 24 * v9) == -1 )
        {
          v18 = (int)(uintptr_t)(&v7[6 * v9 - 6]);
          while ( ++v9 <= v6 )
          {
            v18 += 24;
            if ( *(uint32_t *)(v18 + 24) != -1 )
              goto LABEL_34;
          }
          break;
        }
LABEL_34:
        ;
      }
    }
  }
  v10 = 0;
  for ( j = v21[2]; ; v10 = *(uint32_t *)(j + 20 * v10 + 8) )
  {
    v12 = *(uint32_t *)(j + 20 * v10 + 8);
    if ( v12 <= 0 || *(int *)(j + 20 * v12 + 12) >= 0 )
      break;
  }
  hkStackTracer::Construct((hkStackTracer::Self *)v24);
  sub_1579AC0(v20, v10, 0, (hkStackTracer::Self *)v24, v21 + 2, &v25);
  hkStackTracer::Destroy((hkStackTracer::Self *)v24);
  v26 = 0;
  if ( v27 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerDebugAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerDebugAllocator::s_alloc),
      v25,
      8 * v27);
  v25 = 0;
  v27 = 0x80000000;
  result = pthread_mutex_unlock(mutex);
  if ( result != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformf::staticClass  (binary VA: 0x157bcc0)
// Original: hkSweptTransformf::staticClass
// ----------------------------------------------------------------------------
void * hkSweptTransformf::staticClass()
{
  return &hkSweptTransformfClass;
}

// ----------------------------------------------------------------------------
// Function: hkFixedSizeAllocator::blockFree  (binary VA: 0x157bdb0)
// Original: hkFixedSizeAllocator::blockFree
// ----------------------------------------------------------------------------
hkFixedSizeAllocator::Self * hkFixedSizeAllocator::blockFree(hkFixedSizeAllocator::Self *self, uint32_t *a2)
{
  int v3;

  v3 = *((uint32_t *)self + 1);
  ++*((uint32_t *)self + 14);
  *a2 = v3;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkFixedSizeAllocator::bufFree  (binary VA: 0x157bdd0)
// Original: hkFixedSizeAllocator::bufFree
// ----------------------------------------------------------------------------
hkFixedSizeAllocator::Self * hkFixedSizeAllocator::bufFree(hkFixedSizeAllocator::Self *self, uint32_t *a2)
{
  int v3;

  v3 = *((uint32_t *)self + 1);
  ++*((uint32_t *)self + 14);
  *a2 = v3;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkFixedSizeAllocator::bufRealloc  (binary VA: 0x157bdf0)
// Original: hkFixedSizeAllocator::bufRealloc
// ----------------------------------------------------------------------------
void * hkFixedSizeAllocator::bufRealloc(hkFixedSizeAllocator::Self *self, void *a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkFixedSizeAllocator::blockFreeBatch  (binary VA: 0x157be00)
// Original: hkFixedSizeAllocator::blockFreeBatch
// ----------------------------------------------------------------------------
void hkFixedSizeAllocator::blockFreeBatch(hkFixedSizeAllocator::Self *self, void **a2, int a3)
{
  int v3;
  uint32_t *v5;
  uint32_t *v6;

  v3 = a3;
  *((uint32_t *)self + 14) += a3;
  v5 = *((uint32_t **)self + 1);
  while ( --v3 >= 0 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)(*a2++);
      if ( v6 == nullptr )
        break;
      --v3;
      *v6 = (uint32_t)(uintptr_t)(v5);
      v5 = v6;
      if ( v3 < 0 )
        goto LABEL_5;
    }
    --*((uint32_t *)self + 14);
  }
LABEL_5:
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v5);
}

// ----------------------------------------------------------------------------
// Function: hkFixedSizeAllocator::getAllocatedSize  (binary VA: 0x157be40)
// Original: hkFixedSizeAllocator::getAllocatedSize
// ----------------------------------------------------------------------------
int hkFixedSizeAllocator::getAllocatedSize(hkFixedSizeAllocator::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: hkFixedSizeAllocator::blockAllocBatch  (binary VA: 0x157be50)
// Original: hkFixedSizeAllocator::blockAllocBatch
// ----------------------------------------------------------------------------
int hkFixedSizeAllocator::blockAllocBatch(hkFixedSizeAllocator::Self *self, void **a2, int a3)
{
  void **v3;
  int result;
  void **v5;
  int v6;
  unsigned int v7;
  void **v8;
  bool v9;
  int v10;
  void **v11;

  v3 = a2;
  result = *((uint32_t *)self + 1);
  v5 = &a2[a3];
  if ( a2 < v5 && result != 0 )
  {
    do
    {
      *v3++ = (void *)result;
      result = *(uint32_t *)result;
    }
    while ( v5 > v3 && result != 0 );
    v6 = -(v3 - a2);
  }
  else
  {
    v6 = 0;
  }
  *((uint32_t *)self + 1) = result;
  *((uint32_t *)self + 14) += v6;
  while ( v5 > v3 )
  {
    while ( 1 )
    {
      v7 = *((uint32_t *)self + 9);
      if ( v7 >= *((uint32_t *)self + 10) )
        break;
      if ( v5 <= v3 )
      {
        result = 0;
      }
      else
      {
        v8 = v3;
        do
        {
          *v8++ = (void *)v7;
          v7 = *((uint32_t *)self + 2) + *((uint32_t *)self + 9);
          v9 = v7 < *((uint32_t *)self + 10);
          *((uint32_t *)self + 9) = v7;
        }
        while ( v9 && v5 > v8 );
        v10 = (char *)v8 - (char *)v3;
        v3 = v8;
        result = -(v10 >> 2);
      }
      *((uint32_t *)self + 14) += result;
      if ( v5 <= v3 )
        return result;
    }
    v11 = v5;
    result = hkFreeList::addSpace((hkFixedSizeAllocator::Self *)((char *)self + 4));
    *v3 = (void *)result;
    v5 = v11;
    ++v3;
  }
  return result;
}


