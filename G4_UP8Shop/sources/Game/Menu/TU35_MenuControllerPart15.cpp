#include "Core/Utils/DecompTypes.h"
#include "TU35_MenuControllerPart15.h"

// ----------------------------------------------------------------------------
// Function: sub_C211B0  (binary VA: 0xc211b0)
// Original: sub_C211B0
// ----------------------------------------------------------------------------
int sub_C211B0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE9A8);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE9A8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE9AC), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE9AC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE9B0), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE9B0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE9B4), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE9B4, &unk_20D1280);
  dword_20DE9B8 = 1056964608;
  dword_20DE9BC = 1056964608;
  dword_20DE9C0 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_C212B0  (binary VA: 0xc212b0)
// Original: sub_C212B0
// ----------------------------------------------------------------------------
int sub_C212B0(int a1, int a2, int a3)
{
  return (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 12))(*(uint32_t *)(a1 + 8), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_C212E0  (binary VA: 0xc212e0)
// Original: sub_C212E0
// ----------------------------------------------------------------------------
int sub_C212E0(int a1, int a2, int a3)
{
  return (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 16))(*(uint32_t *)(a1 + 8), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_C21310  (binary VA: 0xc21310)
// Original: sub_C21310
// ----------------------------------------------------------------------------
int sub_C21310(int a1, int a2, int a3)
{
  return (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 20))(*(uint32_t *)(a1 + 8), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_C21340  (binary VA: 0xc21340)
// Original: sub_C21340
// ----------------------------------------------------------------------------
int sub_C21340(int a1)
{
  return (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 8) + 24))(*(uint32_t *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: sub_C21360  (binary VA: 0xc21360)
// Original: sub_C21360
// ----------------------------------------------------------------------------
int sub_C21360(int a1, int a2, int a3)
{
  int result;

  sub_C22A10(a1);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B768);
  *(uint32_t *)(a1 + 8) = a2;
  result = *(uint8_t *)(a2 + 4);
  *(uint8_t *)(a1 + 4) = result;
  *(uint8_t *)(a1 + 12) = a3 == 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C213C0  (binary VA: 0xc213c0)
// Original: sub_C213C0
// ----------------------------------------------------------------------------
int sub_C213C0(int a1, int a2)
{
  return G4_VCALL<int>(a1, 20, a2, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_C213F0  (binary VA: 0xc213f0)
// Original: sub_C213F0
// ----------------------------------------------------------------------------
bool sub_C213F0(int a1)
{
  return (uint8_t)sub_C22A30(*(uint32_t *)(a1 + 8)) != 0;
}

// ----------------------------------------------------------------------------
// Function: sub_C21420  (binary VA: 0xc21420)
// Original: sub_C21420
// ----------------------------------------------------------------------------
int sub_C21420(int a1)
{
  return sub_C22A30(*(uint32_t *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: sub_C21450  (binary VA: 0xc21450)
// Original: sub_C21450
// ----------------------------------------------------------------------------
int sub_C21450(int a1)
{
  return sub_C22A30(*(uint32_t *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: sub_C21480  (binary VA: 0xc21480)
// Original: sub_C21480
// ----------------------------------------------------------------------------
int sub_C21480(uint8_t *a1)
{
  int result;
  typedef uint16_t _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);

  v2 = 0;
  G4_VCALL<void>(a1, 12, &v2, 2);
  result = v2;
  if ( a1[12] != 0 )
    return ((int16_t)v2 << 8) | HIBYTE(v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C214D0  (binary VA: 0xc214d0)
// Original: sub_C214D0
// ----------------------------------------------------------------------------
int sub_C214D0(uint8_t *a1)
{
  int result;
  typedef uint16_t _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);

  v2 = 0;
  G4_VCALL<void>(a1, 12, &v2, 2);
  result = v2;
  if ( a1[12] != 0 )
    return ((int16_t)v2 << 8) | HIBYTE(v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C21520  (binary VA: 0xc21520)
// Original: sub_C21520
// ----------------------------------------------------------------------------
unsigned int sub_C21520(uint8_t *a1)
{
  unsigned int result;
  uint32_t v2;
  unsigned int v3[4];

  v3[0] = 0;
  G4_VCALL<void>(a1, 12, v3, 4);
  result = v3[0];
  v2 = __builtin_bswap32(v3[0]);
  if ( a1[12] != 0 )
    return v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C21570  (binary VA: 0xc21570)
// Original: sub_C21570
// ----------------------------------------------------------------------------
long double sub_C21570(uint8_t *a1)
{
  float v1;
  uint32_t v2;
  unsigned int v4[4];

  G4_VCALL<void>(a1, 12, v4, 4);
  v1 = *(float *)v4;
  *(float *)&v2 = COERCE_FLOAT(__builtin_bswap32(v4[0]));
  if ( a1[12] != 0 )
    return *(float *)&v2;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_C215C0  (binary VA: 0xc215c0)
// Original: sub_C215C0
// ----------------------------------------------------------------------------
int sub_C215C0(uint32_t **a1)
{
  int result;
  uint8_t v2[13];

  while ( 1 )
  {
    result = (*(int (**)(uint32_t *, uint8_t *, int))(*a1[2] + 32))(a1[2], v2, 1);
    if ( v2[0] != 0 )
      break;
    ((void (*)(uint32_t **, int, int))(*a1)[5])(a1, 1, 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C21610  (binary VA: 0xc21610)
// Original: sub_C21610
// ----------------------------------------------------------------------------
int sub_C21610(uint8_t *a1, int a2)
{
  int16_t v2;
  int v3;
  typedef int _g4_t_v5;
  typedef int16_t _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  v6 = 0;
  G4_VCALL<void>(a1, 12, &v6, 2);
  v2 = v6;
  if ( a1[12] != 0 )
    v2 = (v6 << 8) | HIBYTE(v6);
  v3 = *(uint32_t *)a1;
  v6 = v2;
  v5 = v2;
  (*(void (**)(uint8_t *, int, uint32_t))(v3 + 12))(a1, a2, v2);
  *(uint8_t *)(a2 + v5) = 0;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_C21690  (binary VA: 0xc21690)
// Original: sub_C21690
// ----------------------------------------------------------------------------
int sub_C21690(uint8_t *a1, int a2)
{
  unsigned int v2;
  uint32_t v3;
  int v4;
  unsigned int v6[6];

  v6[0] = 0;
  G4_VCALL<void>(a1, 12, v6, 4);
  v2 = v6[0];
  v3 = __builtin_bswap32(v6[0]);
  if ( a1[12] != 0 )
    v2 = v3;
  v4 = *(uint32_t *)a1;
  v6[0] = v2;
  (*(void (**)(uint8_t *, int, unsigned int))(v4 + 12))(a1, a2, v2);
  *(uint8_t *)(a2 + v2) = 0;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_C21700  (binary VA: 0xc21700)
// Original: sub_C21700
// ----------------------------------------------------------------------------
int sub_C21700(uint32_t *a1, int *a2, int a3, uint16_t a4)
{
  uint16_t v5;
  int (*v6)(uint32_t *);
  int v7;
  int v8;
  int v9;
  int v19;
  int v20;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v17)) > _g4_s6 ? (52u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v18)) > _g4_s7 ? (56u + sizeof(_g4_t_v18)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);

  v16 = 0;
  G4_VCALL<void>(a1, 12, &v16, 2, v11, v12, v13, v14, v15);
  v5 = a4;
  if ( *((uint8_t *)a1 + 12) != 0 )
    v5 = (a4 << 8) | HIBYTE(a4);
  v20 = v5;
  sub_1939D80((int)(uintptr_t)(a2), v5, 0);
  v6 = *(int (**)(uint32_t *))(*a1 + 12);
  v7 = *a2;
  if ( *(int *)(*a2 - 4) >= 0 )
  {
    v19 = *(uint32_t *)(*a1 + 12);
    sub_19397C0(a2);
    v7 = *a2;
    v6 = (int (*)(uint32_t *))v19;
  }
  v18 = v20;
  v17 = v7;
  v8 = v6(a1);
  LOBYTE(v8) = v20 == v8;
  v9 = v8;
  sub_C22A30(a1[2]);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: sub_C217E0  (binary VA: 0xc217e0)
// Original: sub_C217E0
// ----------------------------------------------------------------------------
size_t sub_C217E0(uint8_t *a1, uint8_t *a2, int *a3, int a4, unsigned int a5)
{
  size_t result;
  uint32_t v7;
  int (*v8)(void);
  int v9;
  int v10;
  int v20;
  int (*v21)(void);
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v18)) > _g4_s7 ? (52u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v19)) > _g4_s8 ? (56u + sizeof(_g4_t_v19)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);

  v17 = a1;
  v16 = 0;
  G4_VCALL<void>(a2, 12, &v16, 4, v11, v12, v13, v14, v15);
  result = a5;
  v7 = __builtin_bswap32(a5);
  if ( a2[12] != 0 )
    result = v7;
  if ( result != 0 )
  {
    v20 = result;
    sub_1939D80((int)(uintptr_t)(a3), result, 0);
    v8 = *(int (**)(void))(*(uint32_t *)a2 + 12);
    v9 = *a3;
    v10 = v20;
    if ( *(int *)(*a3 - 4) >= 0 )
    {
      v21 = *(int (**)(void))(*(uint32_t *)a2 + 12);
      sub_19397C0(a3);
      v9 = *a3;
      v8 = v21;
      v10 = v20;
    }
    v17 = a2;
    v19 = v10;
    v18 = v9;
    return v8();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C218B0  (binary VA: 0xc218b0)
// Original: sub_C218B0
// ----------------------------------------------------------------------------
int sub_C218B0(int a1, uint8_t a2)
{
  return sub_C22A60(*(uint32_t *)(a1 + 8), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C218E0  (binary VA: 0xc218e0)
// Original: sub_C218E0
// ----------------------------------------------------------------------------
int sub_C218E0(int a1, char a2)
{
  return sub_C22A60(*(uint32_t *)(a1 + 8), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C21910  (binary VA: 0xc21910)
// Original: sub_C21910
// ----------------------------------------------------------------------------
int sub_C21910(uint8_t *a1, int16_t a2)
{
  int16_t v2;
  uint16_t v4[7];

  v2 = a2;
  if ( a1[12] != 0 )
    v2 = (a2 << 8) | HIBYTE(a2);
  v4[0] = v2;
  return G4_VCALL<int>(a1, 16, v4, 2);
}

// ----------------------------------------------------------------------------
// Function: sub_C21960  (binary VA: 0xc21960)
// Original: sub_C21960
// ----------------------------------------------------------------------------
int sub_C21960(uint8_t *a1, unsigned int a2)
{
  unsigned int v2;
  uint32_t v3;

  v2 = a2;
  v3 = __builtin_bswap32(a2);
  if ( a1[12] != 0 )
    v2 = v3;
  a2 = v2;
  return G4_VCALL<int>(a1, 16, &a2, 4);
}

// ----------------------------------------------------------------------------
// Function: sub_C219A0  (binary VA: 0xc219a0)
// Original: sub_C219A0
// ----------------------------------------------------------------------------
int sub_C219A0(uint8_t *a1, unsigned int a2)
{
  uint32_t v2;
  uint32_t v4[4];

  v2 = a2;
  if ( a1[12] != 0 )
    v2 = __builtin_bswap32(a2);
  v4[0] = v2;
  return G4_VCALL<int>(a1, 16, v4, 4);
}

// ----------------------------------------------------------------------------
// Function: sub_C219E0  (binary VA: 0xc219e0)
// Original: sub_C219E0
// ----------------------------------------------------------------------------
int sub_C219E0(uint8_t *a1, char *s)
{
  size_t v2;
  size_t v3;
  uint16_t v5[7];

  v2 = strlen(s);
  v3 = v2;
  if ( a1[12] != 0 )
    LOWORD(v2) = ((uint16_t)v2 << 8) | BYTE1(v2);
  v5[0] = v2;
  G4_VCALL<void>(a1, 16, v5, 2);
  return G4_VCALL<int>(a1, 16, s, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_C21A70  (binary VA: 0xc21a70)
// Original: sub_C21A70
// ----------------------------------------------------------------------------
int sub_C21A70(int a1)
{
  uint8_t v2[13];

  (*(void (**)(uint32_t, uint8_t *, int))(**(uint32_t **)(a1 + 8) + 32))(*(uint32_t *)(a1 + 8), v2, 1);
  return v2[0];
}

// ----------------------------------------------------------------------------
// Function: sub_C21AA0  (binary VA: 0xc21aa0)
// Original: sub_C21AA0
// ----------------------------------------------------------------------------
int sub_C21AA0(int a1)
{
  int result;
  typedef uint16_t _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);

  (*(void (**)(uint32_t, uint16_t *, int))(**(uint32_t **)(a1 + 8) + 32))(*(uint32_t *)(a1 + 8), &v2, 2);
  result = v2;
  if ( *(uint8_t *)(a1 + 12) != 0 )
    return ((int16_t)v2 << 8) | HIBYTE(v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C21AF0  (binary VA: 0xc21af0)
// Original: sub_C21AF0
// ----------------------------------------------------------------------------
int sub_C21AF0(int a1)
{
  int result;
  unsigned int v2[4];

  (*(void (**)(uint32_t, unsigned int *, int))(**(uint32_t **)(a1 + 8) + 32))(*(uint32_t *)(a1 + 8), v2, 4);
  result = v2[0];
  if ( *(uint8_t *)(a1 + 12) != 0 )
    return ((int)(v2[0] & 0xFF0000) >> 8) | HIBYTE(v2[0]) | (v2[0] << 24) | ((v2[0] & 0xFF00) << 8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C21B50  (binary VA: 0xc21b50)
// Original: sub_C21B50
// ----------------------------------------------------------------------------
uint32_t * sub_C21B50(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206B7E8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C21B70  (binary VA: 0xc21b70)
// Original: sub_C21B70
// ----------------------------------------------------------------------------
int sub_C21B70(int a1)
{
  return (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 8) + 36))(*(uint32_t *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: sub_C21B90  (binary VA: 0xc21b90)
// Original: sub_C21B90
// ----------------------------------------------------------------------------
void sub_C21B90(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206B7E8);
  opDelete(a1);
}


