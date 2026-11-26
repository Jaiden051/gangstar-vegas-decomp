#include "Core/Utils/DecompTypes.h"
#include "cxx_stl_runtime_part03.h"

// ----------------------------------------------------------------------------
// Function: sub_192C340  (binary VA: 0x192c340)
// Original: sub_192C340
// ----------------------------------------------------------------------------
int sub_192C340(uint32_t *a1, int a2, int a3)
{
  int result;
  int64_t v4;

  result = (*(int (**)(uint32_t, int, int))(**(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120) + 48))(
             *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120),
             a2,
             a3);
  if ( a3 != result )
  {
    LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v4) = *(uint32_t *)(v4 + 20) | 1;
    return sub_1911530(v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::ostream::flush  (binary VA: 0x192c3b0)
// Original: std::ostream::flush
// ----------------------------------------------------------------------------
uint32_t * g4_std_compat::ostream_flush(uint32_t *a1)
{
  int v1;
  int64_t v3;

  v1 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
  if ( v1 != 0
    && (*(int (**)(uint32_t))(*(uint32_t *)v1 + 24))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120)) == -1 )
  {
    LODWORD(v3) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v3) = *(uint32_t *)(v3 + 20) | 1;
    sub_1911530(v3);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192C480  (binary VA: 0x192c480)
// Original: sub_192C480
// ----------------------------------------------------------------------------
uint32_t * sub_192C480(uint32_t *a1, int *a2)
{
  int v2;
  char *v3;
  uint32_t v5[3];

  v2 = *a2;
  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  v3 = (char *)a2 + *(uint32_t *)(v2 - 12);
  if ( (v3[20] & 5) == 0 )
  {
    (*(void (**)(uint32_t *, uint32_t *, int64_t, int, int))(**((uint32_t **)v3 + 30) + 16))(v5, *((uint32_t **)v3 + 30), (int64_t)0, 1, 16);
    *a1 = v5[0];
    a1[1] = v5[1];
    a1[2] = v5[2];
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192C5A0  (binary VA: 0x192c5a0)
// Original: sub_192C5A0
// ----------------------------------------------------------------------------
uint32_t * sub_192C5A0(uint32_t *a1, int a2, int a3, int a4)
{
  char *v4;
  int v6;
  typedef int64_t _g4_t_v7 __attribute__((aligned(1)));
  typedef uint32_t _g4_t_v8[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v8)) > _g4_s1 ? (44u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);

  v4 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  if ( (v4[20] & 5) == 0 )
  {
    v6 = *((uint32_t *)v4 + 30);
    v8[3] = a2;
    v8[4] = a3;
    v8[5] = a4;
    (*(void (**)(uint32_t *, int, int, int, int, int))(*(uint32_t *)v6 + 20))(v8, v6, a2, a3, a4, 16);
    if ( (v8[1] & v8[0]) == -1 )
    {
      LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v7) = *(uint32_t *)(v7 + 20) | 4;
      sub_1911530(v7);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192C6D0  (binary VA: 0x192c6d0)
// Original: sub_192C6D0
// ----------------------------------------------------------------------------
uint32_t * sub_192C6D0(uint32_t *a1)
{
  char *v1;
  typedef int64_t _g4_t_v3 __attribute__((aligned(1)));
  typedef uint32_t _g4_t_v4[6];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v4)) > _g4_s1 ? (56u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 56u);

  v1 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  if ( (v1[20] & 5) == 0 )
  {
    (*(void (**)(uint32_t *, uint32_t *, int64_t, int, int))(**((uint32_t **)v1 + 30) + 16))(v4, *((uint32_t **)v1 + 30), (int64_t)0, 0, 16);
    if ( (v4[1] & v4[0]) == -1 )
    {
      LODWORD(v3) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v3) = *(uint32_t *)(v3 + 20) | 4;
      sub_1911530(v3);
    }
  }
  return a1;
}

uint32_t *g4_sub_192C6D0(uint32_t *a1, int a2, int a3, int a4)
{
  char *v1;
  typedef int64_t _g4_t_v3 __attribute__((aligned(1)));
  typedef uint32_t _g4_t_v4[6];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v4)) > _g4_s1 ? (56u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 56u);

  v1 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  if ( (v1[20] & 5) == 0 )
  {
    (*(void (**)(uint32_t *, uint32_t *, int, int, int, int))(**((uint32_t **)v1 + 30) + 16))(v4, *((uint32_t **)v1 + 30), a2, a3, a4, 16);
    if ( (v4[1] & v4[0]) == -1 )
    {
      LODWORD(v3) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v3) = *(uint32_t *)(v3 + 20) | 4;
      sub_1911530(v3);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192C7F0  (binary VA: 0x192c7f0)
// Original: sub_192C7F0
// ----------------------------------------------------------------------------
bool sub_192C7F0(int *a1, int *a2)
{
  int v2;
  uint32_t *v3;

  v2 = *a2;
  *a1 = *a2;
  v3 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v2 - 12)));
  *v3 = a2[1];
  return sub_19119D0((int)(uintptr_t)(v3), 0);
}

// ----------------------------------------------------------------------------
// Function: sub_192C830  (binary VA: 0x192c830)
// Original: sub_192C830
// ----------------------------------------------------------------------------
bool sub_192C830(int a1)
{
  sub_1900810((uint32_t *)(a1 + 4));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AACCC);
  *(uint32_t *)(a1 + 116) = 0;
  *(uint8_t *)(a1 + 120) = 0;
  *(uint8_t *)(a1 + 121) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AACE0);
  return sub_19119D0(a1 + 4, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_192C8D0  (binary VA: 0x192c8d0)
// Original: sub_192C8D0
// ----------------------------------------------------------------------------
int sub_192C8D0(int a1, uint32_t *a2)
{
  int64_t v2; // rax

  HIDWORD(v2) = *a2;
  *(uint8_t *)a1 = 0;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(a2);
  LODWORD(v2) = (uint32_t)(uintptr_t)((char *)a2 + *(uint32_t *)(HIDWORD(v2) - 12));
  if ( *(uint32_t *)(v2 + 112) != 0 )
  {
    HIDWORD(v2) = *(uint32_t *)(v2 + 20);
    if ( HIDWORD(v2) != 0 )
      goto LABEL_7;
    g4_std_compat::ostream_flush(*(uint32_t **)(v2 + 112));
    HIDWORD(v2) = *a2;
  }
  LODWORD(v2) = (uint32_t)(uintptr_t)((char *)a2 + *(uint32_t *)(HIDWORD(v2) - 12));
  HIDWORD(v2) = *(uint32_t *)(v2 + 20);
  if ( HIDWORD(v2) == 0 )
  {
    *(uint8_t *)a1 = 1;
    return v2;
  }
LABEL_7:
  LODWORD(v2) = sub_1911530(v2 | 0x400000000LL);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_192C960  (binary VA: 0x192c960)
// Original: sub_192C960
// ----------------------------------------------------------------------------
int sub_192C960(int a1)
{
  int *v1;
  int result;
  char *v3;
  int64_t v4;

  v1 = *(int **)(a1 + 4);
  result = *v1;
  v3 = (char *)v1 + *(uint32_t *)(*v1 - 12);
  if ( (v3[13] & 0x20) != 0 )
  {
    result = std::uncaught_exception();
    if ( (uint8_t)result == 0 )
    {
      result = *((uint32_t *)v3 + 30);
      if ( result != 0 )
      {
        result = (*(int (**)(uint32_t))(*(uint32_t *)result + 24))(*((uint32_t *)v3 + 30));
        if ( result == -1 )
        {
          LODWORD(v4) = *(uint32_t *)(**(uint32_t **)(a1 + 4) - 12) + *(uint32_t *)(a1 + 4);
          HIDWORD(v4) = *(uint32_t *)(v4 + 20) | 1;
          return sub_1911530(v4);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_192C9E0  (binary VA: 0x192c9e0)
// Original: sub_192C9E0
// ----------------------------------------------------------------------------
uint32_t * sub_192C9E0(uint32_t *a1, int a2, int a3)
{
  char *v3;
  int v4;
  typedef int64_t _g4_t_v6;
  typedef int64_t _g4_t_v7;
  typedef uint8_t _g4_t_v8[4];
  typedef uint32_t *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v7)) > _g4_s1 ? (0u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v9)) > _g4_s3 ? (28u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  sub_192C8D0((int)(uintptr_t)(v8), a1);
  if ( v8[0] != 0
    && a3 != (*(int (**)(uint32_t, int, int))(**(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120) + 48))(
               *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120),
               a2,
               a3) )
  {
    LODWORD(v6) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v6) = *(uint32_t *)(v6 + 20) | 1;
    sub_1911530(v6);
  }
  v3 = (char *)v9 + *(uint32_t *)(*v9 - 12);
  if ( (v3[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v4 = *((uint32_t *)v3 + 30);
    if ( v4 != 0 && (*(int (**)(uint32_t))(*(uint32_t *)v4 + 24))(*((uint32_t *)v3 + 30)) == -1 )
    {
      LODWORD(v7) = (uint32_t)(uintptr_t)((char *)v9 + *(uint32_t *)(*v9 - 12));
      HIDWORD(v7) = *(uint32_t *)(v7 + 20) | 1;
      sub_1911530(v7);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::ostream::put  (binary VA: 0x192cb40)
// Original: std::ostream::put
// ----------------------------------------------------------------------------
uint32_t * g4_std::ostream::put(uint32_t *a1, uint8_t a2)
{
  uint32_t *v2;
  uint8_t *v3;
  char *v4;
  int v5;
  typedef int64_t _g4_t_v7;
  typedef int64_t _g4_t_v8;
  typedef uint8_t _g4_t_v9[4];
  typedef uint32_t *_g4_t_v10;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v8)) > _g4_s1 ? (0u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v9)) > _g4_s2 ? (40u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v10)) > _g4_s3 ? (44u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);

  sub_192C8D0((int)(uintptr_t)(v9), a1);
  if ( v9[0] != 0 )
  {
    v2 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
    v3 = (uint8_t *)v2[5];
    if ( (unsigned int)(uintptr_t)(v3) >= v2[6] )
    {
      if ( (*(int (**)(uint32_t, uint32_t))(*v2 + 52))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120), a2) == -1 )
      {
        LODWORD(v8) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
        HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 1;
        sub_1911530(v8);
      }
    }
    else
    {
      *v3 = a2;
      ++v2[5];
    }
  }
  v4 = (char *)v10 + *(uint32_t *)(*v10 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 30);
    if ( v5 != 0 && (*(int (**)(uint32_t))(*(uint32_t *)v5 + 24))(*((uint32_t *)v4 + 30)) == -1 )
    {
      LODWORD(v7) = (uint32_t)(uintptr_t)((char *)v10 + *(uint32_t *)(*v10 - 12));
      HIDWORD(v7) = *(uint32_t *)(v7 + 20) | 1;
      sub_1911530(v7);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192CCB0  (binary VA: 0x192ccb0)
// Original: sub_192CCB0
// ----------------------------------------------------------------------------
uint32_t * sub_192CCB0(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  char *v4;
  int v5;
  typedef int64_t _g4_t_v7;
  typedef int64_t _g4_t_v8;
  typedef char _g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef uint32_t *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v8)) > _g4_s1 ? (0u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (23u + sizeof(_g4_t_v9)) > _g4_s2 ? (23u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 23u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  sub_192C8D0((int)(uintptr_t)(v10), a1);
  if ( v10[0] == 0 )
  {
    if ( a2 != 0 )
      goto LABEL_5;
  }
  else if ( a2 != 0 )
  {
    v2 = sub_1953F10(a2, *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120), &v9);
    v3 = 4;
    if ( v2 == 0 )
    {
LABEL_4:
      LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v7) = *(uint32_t *)(v7 + 20) | v3;
      sub_1911530(v7);
    }
LABEL_5:
    v4 = (char *)v11 + *(uint32_t *)(*v11 - 12);
    if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
    {
      v5 = *((uint32_t *)v4 + 30);
      if ( v5 != 0 && (*(int (**)(uint32_t))(*(uint32_t *)v5 + 24))(*((uint32_t *)v4 + 30)) == -1 )
      {
        LODWORD(v8) = (uint32_t)(uintptr_t)((char *)v11 + *(uint32_t *)(*v11 - 12));
        HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 1;
        sub_1911530(v8);
      }
    }
    return a1;
  }
  v3 = 1;
  goto LABEL_4;
}

// ----------------------------------------------------------------------------
// Function: sub_192CE40  (binary VA: 0x192ce40)
// Original: sub_192CE40
// ----------------------------------------------------------------------------
uint32_t * sub_192CE40(uint32_t *a1)
{
  int v1;
  uint8_t *v2;
  uint8_t v3;
  uint32_t *v4;

  v1 = *(uint32_t *)(*a1 - 12);
  v2 = *(uint8_t **)((char *)a1 + v1 + 124);
  if ( v2 == nullptr )
    sub_18FFF30();
  if ( v2[28] != 0 )
  {
    v3 = v2[39];
  }
  else
  {
    sub_18FFC70(*(uint8_t **)((char *)a1 + v1 + 124));
    v3 = G4_VCALL<int>(v2, 24, 10);
  }
  v4 = g4_std::ostream::put(a1, v3);
  return (uint32_t *)(uintptr_t)(g4_std_compat::ostream_flush(v4));
}

// ----------------------------------------------------------------------------
// Function: sub_192CEC0  (binary VA: 0x192cec0)
// Original: sub_192CEC0
// ----------------------------------------------------------------------------
uint32_t * sub_192CEC0(uint32_t *a1)
{
  return g4_std::ostream::put(a1, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_192CEF0  (binary VA: 0x192cef0)
// Original: sub_192CEF0
// ----------------------------------------------------------------------------
uint32_t * sub_192CEF0(uint32_t *a1, char a2)
{
  char *v2;
  uint8_t *v3;
  char v4;

  v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  if ( v2[117] == 0 )
  {
    v3 = *((uint8_t **)v2 + 31);
    if ( v3 == nullptr )
      sub_18FFF30();
    if ( v3[28] != 0 )
    {
      v4 = v3[61];
    }
    else
    {
      sub_18FFC70(*((uint8_t **)v2 + 31));
      v4 = G4_VCALL<int>(v3, 24, 32);
    }
    v2[116] = v4;
    v2[117] = 1;
  }
  v2[116] = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192CF80  (binary VA: 0x192cf80)
// Original: sub_192CF80
// ----------------------------------------------------------------------------
uint32_t * sub_192CF80(uint32_t *a1, int a2)
{
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12) |= a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192CFC0  (binary VA: 0x192cfc0)
// Original: sub_192CFC0
// ----------------------------------------------------------------------------
uint32_t * sub_192CFC0(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;

  result = a1;
  v3 = 64;
  if ( a2 != 8 )
  {
    LOBYTE(v3) = 2;
    if ( a2 != 10 )
      v3 = 8 * (a2 == 16);
  }
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12) = v3
                                                       | *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12)
                                                       & 0xFFFFFFB5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::ostream::write  (binary VA: 0x192d040)
// Original: std::ostream::write
// ----------------------------------------------------------------------------
int * g4_std_compat::ostream_write(int *a1, int a2, int a3)
{
  int v3;
  char *v4;
  int v5;
  char *v6;
  int v7;
  uint8_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint8_t *v13;
  bool v14;
  int v15;
  uint8_t *v16;
  int v17;
  uint32_t *v18;
  uint8_t *v19;
  typedef int64_t _g4_t_v20;
  typedef int64_t _g4_t_v21;
  typedef int64_t _g4_t_v22;
  typedef int64_t _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25;
  typedef uint8_t _g4_t_v26;
  typedef bool _g4_t_v27;
  typedef char _g4_t_v28[4];
  typedef uint32_t *_g4_t_v29;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v21)) > _g4_s1 ? (0u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v22)) > _g4_s2 ? (0u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v23)) > _g4_s3 ? (0u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v24)) > _g4_s4 ? (24u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (30u + sizeof(_g4_t_v25)) > _g4_s5 ? (30u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (30u + sizeof(_g4_t_v26)) > _g4_s6 ? (30u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (31u + sizeof(_g4_t_v27)) > _g4_s7 ? (31u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v28)) > _g4_s8 ? (40u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v29)) > _g4_s9 ? (44u + sizeof(_g4_t_v29)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 30u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 30u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 31u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);

  sub_192C8D0((int)(uintptr_t)(v28), a1);
  if ( v28[0] != 0 )
  {
    v3 = *(uint32_t *)(*a1 - 12);
    v4 = (char *)a1 + v3;
    v24 = *(int *)((char *)a1 + v3 + 8);
    if ( v24 <= a3 )
    {
      v14 = a3 == (*(int (**)(uint32_t, int, int))(**((uint32_t **)v4 + 30) + 48))(*((uint32_t *)v4 + 30), a2, a3);
      v11 = *a1;
      if ( !v14 )
      {
LABEL_26:
        LODWORD(v20) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(v11 - 12));
        HIDWORD(v20) = *(uint32_t *)(v20 + 20) | 1;
        sub_1911530(v20);
        v11 = *a1;
      }
LABEL_27:
      v4 = (char *)a1 + *(uint32_t *)(v11 - 12);
      goto LABEL_6;
    }
    v5 = *((uint32_t *)v4 + 3) & 0xB0;
    v27 = v5 == 32;
    if ( v5 != 32 )
    {
      if ( v4[117] != 0 )
      {
        v26 = v4[116];
      }
      else
      {
        v16 = *((uint8_t **)v4 + 31);
        if ( v16 == nullptr )
          sub_18FFF30();
        if ( v16[28] != 0 )
        {
          v26 = v16[61];
        }
        else
        {
          sub_18FFC70(*((uint8_t **)v4 + 31));
          v26 = G4_VCALL<int>(v16, 24, 32);
        }
        v4[117] = 1;
        v4[116] = v26;
        v3 = *(uint32_t *)(*a1 - 12);
        v4 = (char *)a1 + v3;
      }
      v17 = v24 - a3;
      if ( v24 - a3 > 0 )
      {
        while ( 1 )
        {
          v18 = *(uint32_t **)((char *)a1 + v3 + 120);
          v19 = (uint8_t *)v18[5];
          if ( (unsigned int)(uintptr_t)(v19) >= v18[6] )
          {
            if ( G4_VCALL<int>(v18, 52, v26) == -1 )
            {
              LODWORD(v23) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
              HIDWORD(v23) = *(uint32_t *)(v23 + 20) | 1;
              sub_1911530(v23);
              v3 = *(uint32_t *)(*a1 - 12);
              v4 = (char *)a1 + v3;
              break;
            }
          }
          else
          {
            *v19 = v26;
            ++v18[5];
          }
          --v17;
          v3 = *(uint32_t *)(*a1 - 12);
          if ( v17 == 0 )
          {
            v4 = (char *)a1 + v3;
            break;
          }
        }
      }
    }
    if ( *((uint32_t *)v4 + 5) != 0 )
    {
      if ( !v27 )
      {
LABEL_6:
        *((uint32_t *)v4 + 2) = 0;
        goto LABEL_7;
      }
    }
    else
    {
      v14 = a3 == (*(int (**)(uint32_t, int, int))(**((uint32_t **)v4 + 30) + 48))(*((uint32_t *)v4 + 30), a2, a3);
      v15 = *a1;
      if ( !v14 )
      {
        LODWORD(v21) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(v15 - 12));
        HIDWORD(v21) = *(uint32_t *)(v21 + 20) | 1;
        sub_1911530(v21);
        v15 = *a1;
      }
      v3 = *(uint32_t *)(v15 - 12);
      v4 = (char *)a1 + v3;
      if ( !v27 )
        goto LABEL_6;
    }
    if ( *((uint32_t *)v4 + 5) == 0 )
    {
      if ( v4[117] != 0 )
      {
        v25 = v4[116];
      }
      else
      {
        v9 = *((uint8_t **)v4 + 31);
        if ( v9 == nullptr )
          sub_18FFF30();
        if ( v9[28] != 0 )
        {
          v25 = v9[61];
        }
        else
        {
          sub_18FFC70(*((uint8_t **)v4 + 31));
          v25 = G4_VCALL<int>(v9, 24, 32);
        }
        v4[117] = 1;
        v4[116] = v25;
        v3 = *(uint32_t *)(*a1 - 12);
        v4 = (char *)a1 + v3;
      }
      v10 = v24 - a3;
      if ( v24 - a3 > 0 )
      {
        while ( 1 )
        {
          v12 = *(uint32_t **)((char *)a1 + v3 + 120);
          v13 = (uint8_t *)v12[5];
          if ( (unsigned int)(uintptr_t)(v13) < v12[6] )
          {
            *v13 = v25;
            ++v12[5];
          }
          else if ( G4_VCALL<int>(v12, 52, v25) == -1 )
          {
            v11 = *a1;
            goto LABEL_26;
          }
          --v10;
          v11 = *a1;
          if ( v10 == 0 )
            goto LABEL_27;
          v3 = *(uint32_t *)(v11 - 12);
        }
      }
    }
    goto LABEL_6;
  }
LABEL_7:
  v6 = (char *)v29 + *(uint32_t *)(*v29 - 12);
  if ( (v6[13] & 0x20) == 0 )
    return a1;
  if ( (uint8_t)std::uncaught_exception() != 0 )
    return a1;
  v7 = *((uint32_t *)v6 + 30);
  if ( v7 == 0 || (*(int (**)(uint32_t))(*(uint32_t *)v7 + 24))(*((uint32_t *)v6 + 30)) != -1 )
    return a1;
  LODWORD(v22) = (uint32_t)(uintptr_t)((char *)v29 + *(uint32_t *)(*v29 - 12));
  HIDWORD(v22) = *(uint32_t *)(v22 + 20) | 1;
  sub_1911530(v22);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192D410  (binary VA: 0x192d410)
// Original: sub_192D410
// ----------------------------------------------------------------------------
int * sub_192D410(int *a1, char *a2)
{
  size_t v2;
  int64_t s;

  if ( a2 != nullptr )
  {
    v2 = strlen(a2);
    g4_std_compat::ostream_write(a1, (int)(uintptr_t)(a2), v2);
  }
  else
  {
    LODWORD(s) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(s) = *(uint32_t *)(s + 20) | 1;
    sub_1911530(s);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192D490  (binary VA: 0x192d490)
// Original: sub_192D490
// ----------------------------------------------------------------------------
int * sub_192D490(int *a1, char a2)
{
  uint8_t v3[16];

  v3[0] = a2;
  return (int *)(uintptr_t)(g4_std_compat::ostream_write(a1, (int)(uintptr_t)(v3), 1));
}

// ----------------------------------------------------------------------------
// Function: sub_192D4C0  (binary VA: 0x192d4c0)
// Original: sub_192D4C0
// ----------------------------------------------------------------------------
int * sub_192D4C0(int *a1, char a2)
{
  uint8_t v3[13];

  v3[0] = a2;
  return (int *)(uintptr_t)(g4_std_compat::ostream_write(a1, (int)(uintptr_t)(v3), 1));
}

// ----------------------------------------------------------------------------
// Function: sub_192D4F0  (binary VA: 0x192d4f0)
// Original: sub_192D4F0
// ----------------------------------------------------------------------------
int * sub_192D4F0(int *a1, char a2)
{
  uint8_t v3[13];

  v3[0] = a2;
  return (int *)(uintptr_t)(g4_std_compat::ostream_write(a1, (int)(uintptr_t)(v3), 1));
}

// ----------------------------------------------------------------------------
// Function: sub_192D520  (binary VA: 0x192d520)
// Original: sub_192D520
// ----------------------------------------------------------------------------
int * sub_192D520(int *a1, char *a2)
{
  size_t v2;
  int64_t s;

  if ( a2 != nullptr )
  {
    v2 = strlen(a2);
    g4_std_compat::ostream_write(a1, (int)(uintptr_t)(a2), v2);
  }
  else
  {
    LODWORD(s) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(s) = *(uint32_t *)(s + 20) | 1;
    sub_1911530(s);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192D5A0  (binary VA: 0x192d5a0)
// Original: sub_192D5A0
// ----------------------------------------------------------------------------
int * sub_192D5A0(int *a1, char *a2)
{
  size_t v2;
  int64_t s;

  if ( a2 != nullptr )
  {
    v2 = strlen(a2);
    g4_std_compat::ostream_write(a1, (int)(uintptr_t)(a2), v2);
  }
  else
  {
    LODWORD(s) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(s) = *(uint32_t *)(s + 20) | 1;
    sub_1911530(s);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192D620  (binary VA: 0x192d620)
// Original: sub_192D620
// ----------------------------------------------------------------------------
uint32_t * sub_192D620(uint32_t *a1, int a2)
{
  char *v2;
  uint8_t *v3;
  char *v4;
  int v5;
  typedef int64_t _g4_t_v7 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v8 __attribute__((aligned(1)));
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef bool _g4_t_v11;
  typedef char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[16];
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v11)) > _g4_s4 ? (16u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v12)) > _g4_s5 ? (20u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v13)) > _g4_s6 ? (24u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v14)) > _g4_s7 ? (28u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (51u + sizeof(_g4_t_v15)) > _g4_s8 ? (51u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v16)) > _g4_s9 ? (52u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v17)) > _g4_s10 ? (60u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v18)) > _g4_s11 ? (76u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v19)) > _g4_s12 ? (80u + sizeof(_g4_t_v19)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 51u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);

  sub_192C8D0((int)(uintptr_t)(&v18), a1);
  if ( (uint8_t)v18 != 0 )
  {
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v16 = *((uint32_t *)v2 + 32);
    if ( v16 == 0 )
      sub_18FFF30();
    if ( v2[117] != 0 )
    {
      v15 = v2[116];
    }
    else
    {
      v3 = *((uint8_t **)v2 + 31);
      if ( v3 == nullptr )
        sub_18FFF30();
      if ( v3[28] != 0 )
      {
        v15 = v3[61];
      }
      else
      {
        sub_18FFC70(*((uint8_t **)v2 + 31));
        v15 = G4_VCALL<int>(v3, 24, 32);
      }
      v2[117] = 1;
      v2[116] = v15;
      v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    }
    v11 = *((uint32_t *)v2 + 30) == 0;
    v14 = a2;
    v12 = v2;
    v13 = v15;
    v10 = *((uint32_t *)v2 + 30);
    v9 = v16;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int))(*(uint32_t *)v16 + 12))(v17, v9, v10, v11, v12, v13, v14);
    if ( v17[4] != 0 )
    {
      LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v7) = *(uint32_t *)(v7 + 20) | 1;
      sub_1911530(v7);
    }
  }
  v4 = (char *)v19 + *(uint32_t *)(*v19 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 30);
    if ( v5 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, int))(*(uint32_t *)v5 + 24))(
           *((uint32_t *)v4 + 30),
           v9,
           v10,
           v11,
           v12,
           v13,
           v14) == -1 )
    {
      LODWORD(v8) = (uint32_t)(uintptr_t)((char *)v19 + *(uint32_t *)(*v19 - 12));
      HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 1;
      sub_1911530(v8);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::ostream::op_shl_int  (binary VA: 0x192d840)
// Original: std::ostream::operator_shl_int
// ----------------------------------------------------------------------------
uint32_t * g4_std::ostream::op_shl_int(uint32_t *a1, int a2)
{
  return sub_192D620(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_192D860  (binary VA: 0x192d860)
// Original: sub_192D860
// ----------------------------------------------------------------------------
uint32_t * sub_192D860(uint32_t *a1, uint16_t a2)
{
  int v2;

  v2 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12) & 0x4A;
  if ( v2 == 8 || v2 == 64 )
    return sub_192D620(a1, a2);
  else
    return sub_192D620(a1, (int16_t)a2);
}

// ----------------------------------------------------------------------------
// Function: sub_192D8B0  (binary VA: 0x192d8b0)
// Original: sub_192D8B0
// ----------------------------------------------------------------------------
uint32_t * sub_192D8B0(uint32_t *a1, int a2)
{
  char *v2;
  uint8_t *v3;
  char *v4;
  int v5;
  typedef int64_t _g4_t_v7 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v8 __attribute__((aligned(1)));
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef bool _g4_t_v11;
  typedef char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[16];
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v11)) > _g4_s4 ? (16u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v12)) > _g4_s5 ? (20u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v13)) > _g4_s6 ? (24u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v14)) > _g4_s7 ? (28u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (51u + sizeof(_g4_t_v15)) > _g4_s8 ? (51u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v16)) > _g4_s9 ? (52u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v17)) > _g4_s10 ? (60u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v18)) > _g4_s11 ? (76u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v19)) > _g4_s12 ? (80u + sizeof(_g4_t_v19)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 51u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);

  sub_192C8D0((int)(uintptr_t)(&v18), a1);
  if ( (uint8_t)v18 != 0 )
  {
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v16 = *((uint32_t *)v2 + 32);
    if ( v16 == 0 )
      sub_18FFF30();
    if ( v2[117] != 0 )
    {
      v15 = v2[116];
    }
    else
    {
      v3 = *((uint8_t **)v2 + 31);
      if ( v3 == nullptr )
        sub_18FFF30();
      if ( v3[28] != 0 )
      {
        v15 = v3[61];
      }
      else
      {
        sub_18FFC70(*((uint8_t **)v2 + 31));
        v15 = G4_VCALL<int>(v3, 24, 32);
      }
      v2[117] = 1;
      v2[116] = v15;
      v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    }
    v11 = *((uint32_t *)v2 + 30) == 0;
    v14 = a2;
    v12 = v2;
    v13 = v15;
    v10 = *((uint32_t *)v2 + 30);
    v9 = v16;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int))(*(uint32_t *)v16 + 16))(v17, v9, v10, v11, v12, v13, v14);
    if ( v17[4] != 0 )
    {
      LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v7) = *(uint32_t *)(v7 + 20) | 1;
      sub_1911530(v7);
    }
  }
  v4 = (char *)v19 + *(uint32_t *)(*v19 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 30);
    if ( v5 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, int))(*(uint32_t *)v5 + 24))(
           *((uint32_t *)v4 + 30),
           v9,
           v10,
           v11,
           v12,
           v13,
           v14) == -1 )
    {
      LODWORD(v8) = (uint32_t)(uintptr_t)((char *)v19 + *(uint32_t *)(*v19 - 12));
      HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 1;
      sub_1911530(v8);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192DB00  (binary VA: 0x192db00)
// Original: sub_192DB00
// ----------------------------------------------------------------------------
uint32_t * sub_192DB00(uint32_t *a1, uint8_t a2)
{
  char *v2;
  uint8_t *v3;
  char *v4;
  int v5;
  typedef int64_t _g4_t_v7 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v8 __attribute__((aligned(1)));
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef bool _g4_t_v11;
  typedef char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef char _g4_t_v16;
  typedef uint8_t _g4_t_v17[16];
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v11)) > _g4_s4 ? (16u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v12)) > _g4_s5 ? (20u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v13)) > _g4_s6 ? (24u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v14)) > _g4_s7 ? (28u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v15)) > _g4_s8 ? (48u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (54u + sizeof(_g4_t_v16)) > _g4_s9 ? (54u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v17)) > _g4_s10 ? (60u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v18)) > _g4_s11 ? (76u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v19)) > _g4_s12 ? (80u + sizeof(_g4_t_v19)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 54u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);

  sub_192C8D0((int)(uintptr_t)(&v18), a1);
  if ( (uint8_t)v18 != 0 )
  {
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v15 = *((uint32_t *)v2 + 32);
    if ( v15 == 0 )
      sub_18FFF30();
    if ( v2[117] != 0 )
    {
      v16 = v2[116];
    }
    else
    {
      v3 = *((uint8_t **)v2 + 31);
      if ( v3 == nullptr )
        sub_18FFF30();
      if ( v3[28] != 0 )
      {
        v16 = v3[61];
      }
      else
      {
        sub_18FFC70(*((uint8_t **)v2 + 31));
        v16 = G4_VCALL<int>(v3, 24, 32);
      }
      v2[117] = 1;
      v2[116] = v16;
      v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    }
    v11 = *((uint32_t *)v2 + 30) == 0;
    v12 = v2;
    v14 = a2;
    v10 = *((uint32_t *)v2 + 30);
    v9 = v15;
    v13 = v16;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, uint8_t))(*(uint32_t *)v15 + 8))(v17, v9, v10, v11, v12, v13, v14);
    if ( v17[4] != 0 )
    {
      LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v7) = *(uint32_t *)(v7 + 20) | 1;
      sub_1911530(v7);
    }
  }
  v4 = (char *)v19 + *(uint32_t *)(*v19 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 30);
    if ( v5 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, int))(*(uint32_t *)v5 + 24))(
           *((uint32_t *)v4 + 30),
           v9,
           v10,
           v11,
           v12,
           v13,
           v14) == -1 )
    {
      LODWORD(v8) = (uint32_t)(uintptr_t)((char *)v19 + *(uint32_t *)(*v19 - 12));
      HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 1;
      sub_1911530(v8);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192DD40  (binary VA: 0x192dd40)
// Original: sub_192DD40
// ----------------------------------------------------------------------------
uint32_t * sub_192DD40(uint32_t *a1, int a2, int a3)
{
  char *v3;
  uint8_t *v4;
  char *v5;
  int v6;
  typedef int64_t _g4_t_v8 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v9 __attribute__((aligned(1)));
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef bool _g4_t_v12;
  typedef char *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[16];
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v12)) > _g4_s4 ? (16u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v13)) > _g4_s5 ? (20u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v14)) > _g4_s6 ? (24u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v15)) > _g4_s7 ? (28u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v16)) > _g4_s8 ? (32u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (39u + sizeof(_g4_t_v17)) > _g4_s9 ? (39u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v18)) > _g4_s10 ? (52u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v19)) > _g4_s11 ? (60u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v20)) > _g4_s12 ? (76u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v21)) > _g4_s13 ? (80u + sizeof(_g4_t_v21)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 39u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);

  sub_192C8D0((int)(uintptr_t)(&v20), a1);
  if ( (uint8_t)v20 != 0 )
  {
    v3 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v18 = *((uint32_t *)v3 + 32);
    if ( v18 == 0 )
      sub_18FFF30();
    if ( v3[117] != 0 )
    {
      v17 = v3[116];
    }
    else
    {
      v4 = *((uint8_t **)v3 + 31);
      if ( v4 == nullptr )
        sub_18FFF30();
      if ( v4[28] != 0 )
      {
        v17 = v4[61];
      }
      else
      {
        sub_18FFC70(*((uint8_t **)v3 + 31));
        v17 = G4_VCALL<int>(v4, 24, 32);
      }
      v3[117] = 1;
      v3[116] = v17;
      v3 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    }
    v15 = a2;
    v16 = a3;
    v12 = *((uint32_t *)v3 + 30) == 0;
    v14 = v17;
    v13 = v3;
    v11 = *((uint32_t *)v3 + 30);
    v10 = v18;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int, int))(*(uint32_t *)v18 + 20))(v19, v10, v11, v12, v13, v14, v15, v16);
    if ( v19[4] != 0 )
    {
      LODWORD(v8) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 1;
      sub_1911530(v8);
    }
  }
  v5 = (char *)v21 + *(uint32_t *)(*v21 - 12);
  if ( (v5[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v6 = *((uint32_t *)v5 + 30);
    if ( v6 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, int, int))(*(uint32_t *)v6 + 24))(
           *((uint32_t *)v5 + 30),
           v10,
           v11,
           v12,
           v13,
           v14,
           v15,
           v16) == -1 )
    {
      LODWORD(v9) = (uint32_t)(uintptr_t)((char *)v21 + *(uint32_t *)(*v21 - 12));
      HIDWORD(v9) = *(uint32_t *)(v9 + 20) | 1;
      sub_1911530(v9);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192DF90  (binary VA: 0x192df90)
// Original: sub_192DF90
// ----------------------------------------------------------------------------
uint32_t * sub_192DF90(uint32_t *a1, int a2, int a3)
{
  char *v3;
  uint8_t *v4;
  char *v5;
  int v6;
  typedef int64_t _g4_t_v8 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v9 __attribute__((aligned(1)));
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef bool _g4_t_v12;
  typedef char *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[16];
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v12)) > _g4_s4 ? (16u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v13)) > _g4_s5 ? (20u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v14)) > _g4_s6 ? (24u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v15)) > _g4_s7 ? (28u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v16)) > _g4_s8 ? (32u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (39u + sizeof(_g4_t_v17)) > _g4_s9 ? (39u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v18)) > _g4_s10 ? (52u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v19)) > _g4_s11 ? (60u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v20)) > _g4_s12 ? (76u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v21)) > _g4_s13 ? (80u + sizeof(_g4_t_v21)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 39u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);

  sub_192C8D0((int)(uintptr_t)(&v20), a1);
  if ( (uint8_t)v20 != 0 )
  {
    v3 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v18 = *((uint32_t *)v3 + 32);
    if ( v18 == 0 )
      sub_18FFF30();
    if ( v3[117] != 0 )
    {
      v17 = v3[116];
    }
    else
    {
      v4 = *((uint8_t **)v3 + 31);
      if ( v4 == nullptr )
        sub_18FFF30();
      if ( v4[28] != 0 )
      {
        v17 = v4[61];
      }
      else
      {
        sub_18FFC70(*((uint8_t **)v3 + 31));
        v17 = G4_VCALL<int>(v4, 24, 32);
      }
      v3[117] = 1;
      v3[116] = v17;
      v3 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    }
    v15 = a2;
    v16 = a3;
    v12 = *((uint32_t *)v3 + 30) == 0;
    v14 = v17;
    v13 = v3;
    v11 = *((uint32_t *)v3 + 30);
    v10 = v18;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int, int))(*(uint32_t *)v18 + 24))(v19, v10, v11, v12, v13, v14, v15, v16);
    if ( v19[4] != 0 )
    {
      LODWORD(v8) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 1;
      sub_1911530(v8);
    }
  }
  v5 = (char *)v21 + *(uint32_t *)(*v21 - 12);
  if ( (v5[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v6 = *((uint32_t *)v5 + 30);
    if ( v6 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, int, int))(*(uint32_t *)v6 + 24))(
           *((uint32_t *)v5 + 30),
           v10,
           v11,
           v12,
           v13,
           v14,
           v15,
           v16) == -1 )
    {
      LODWORD(v9) = (uint32_t)(uintptr_t)((char *)v21 + *(uint32_t *)(*v21 - 12));
      HIDWORD(v9) = *(uint32_t *)(v9 + 20) | 1;
      sub_1911530(v9);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::ostream::op_shl_double  (binary VA: 0x192e1e0)
// Original: std::ostream::operator_shl_double
// ----------------------------------------------------------------------------
uint32_t * g4_std::ostream::op_shl_double(uint32_t *a1, int64_t a2)
{
  char *v2;
  uint8_t *v3;
  char *v4;
  int v5;
  typedef int64_t _g4_t_v7 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v8 __attribute__((aligned(1)));
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef bool _g4_t_v11;
  typedef char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int64_t _g4_t_v14 __attribute__((aligned(1)));
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[16];
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v11)) > _g4_s4 ? (16u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v12)) > _g4_s5 ? (20u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v13)) > _g4_s6 ? (24u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v14)) > _g4_s7 ? (28u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (43u + sizeof(_g4_t_v15)) > _g4_s8 ? (43u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v16)) > _g4_s9 ? (52u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v17)) > _g4_s10 ? (60u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v18)) > _g4_s11 ? (76u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v19)) > _g4_s12 ? (80u + sizeof(_g4_t_v19)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 43u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);

  sub_192C8D0((int)(uintptr_t)(&v18), a1);
  if ( (uint8_t)v18 != 0 )
  {
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v16 = *((uint32_t *)v2 + 32);
    if ( v16 == 0 )
      sub_18FFF30();
    if ( v2[117] != 0 )
    {
      v15 = v2[116];
    }
    else
    {
      v3 = *((uint8_t **)v2 + 31);
      if ( v3 == nullptr )
        sub_18FFF30();
      if ( v3[28] != 0 )
      {
        v15 = v3[61];
      }
      else
      {
        sub_18FFC70(*((uint8_t **)v2 + 31));
        v15 = G4_VCALL<int>(v3, 24, 32);
      }
      v2[117] = 1;
      v2[116] = v15;
      v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    }
    v11 = *((uint32_t *)v2 + 30) == 0;
    v12 = v2;
    v13 = v15;
    v14 = a2;
    v10 = *((uint32_t *)v2 + 30);
    v9 = v16;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int64_t))(*(uint32_t *)v16 + 28))(v17, v9, v10, v11, v12, v13, v14);
    if ( v17[4] != 0 )
    {
      LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v7) = *(uint32_t *)(v7 + 20) | 1;
      sub_1911530(v7);
    }
  }
  v4 = (char *)v19 + *(uint32_t *)(*v19 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 30);
    if ( v5 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, uint32_t, uint32_t))(*(uint32_t *)v5 + 24))(
           *((uint32_t *)v4 + 30),
           v9,
           v10,
           v11,
           v12,
           v13,
           v14,
           HIDWORD(v14)) == -1 )
    {
      LODWORD(v8) = (uint32_t)(uintptr_t)((char *)v19 + *(uint32_t *)(*v19 - 12));
      HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 1;
      sub_1911530(v8);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192E410  (binary VA: 0x192e410)
// Original: sub_192E410
// ----------------------------------------------------------------------------
uint32_t * sub_192E410(uint32_t *a1, float a2)
{
  return g4_std::ostream::op_shl_double(a1, COERCE__INT64(a2));
}

// ----------------------------------------------------------------------------
// Function: sub_192E450  (binary VA: 0x192e450)
// Original: sub_192E450
// ----------------------------------------------------------------------------
uint32_t * sub_192E450(uint32_t *a1, int64_t a2)
{
  char *v2;
  uint8_t *v3;
  char *v4;
  int v5;
  typedef int64_t _g4_t_v7 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v8 __attribute__((aligned(1)));
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef bool _g4_t_v11;
  typedef char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int64_t _g4_t_v14 __attribute__((aligned(1)));
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[16];
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v11)) > _g4_s4 ? (16u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v12)) > _g4_s5 ? (20u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v13)) > _g4_s6 ? (24u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v14)) > _g4_s7 ? (28u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (43u + sizeof(_g4_t_v15)) > _g4_s8 ? (43u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v16)) > _g4_s9 ? (52u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v17)) > _g4_s10 ? (60u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v18)) > _g4_s11 ? (76u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v19)) > _g4_s12 ? (80u + sizeof(_g4_t_v19)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 43u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);

  sub_192C8D0((int)(uintptr_t)(&v18), a1);
  if ( (uint8_t)v18 != 0 )
  {
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v16 = *((uint32_t *)v2 + 32);
    if ( v16 == 0 )
      sub_18FFF30();
    if ( v2[117] != 0 )
    {
      v15 = v2[116];
    }
    else
    {
      v3 = *((uint8_t **)v2 + 31);
      if ( v3 == nullptr )
        sub_18FFF30();
      if ( v3[28] != 0 )
      {
        v15 = v3[61];
      }
      else
      {
        sub_18FFC70(*((uint8_t **)v2 + 31));
        v15 = G4_VCALL<int>(v3, 24, 32);
      }
      v2[117] = 1;
      v2[116] = v15;
      v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    }
    v11 = *((uint32_t *)v2 + 30) == 0;
    v12 = v2;
    v13 = v15;
    v14 = a2;
    v10 = *((uint32_t *)v2 + 30);
    v9 = v16;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int64_t))(*(uint32_t *)v16 + 32))(v17, v9, v10, v11, v12, v13, v14);
    if ( v17[4] != 0 )
    {
      LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v7) = *(uint32_t *)(v7 + 20) | 1;
      sub_1911530(v7);
    }
  }
  v4 = (char *)v19 + *(uint32_t *)(*v19 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 30);
    if ( v5 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, uint32_t, uint32_t))(*(uint32_t *)v5 + 24))(
           *((uint32_t *)v4 + 30),
           v9,
           v10,
           v11,
           v12,
           v13,
           v14,
           HIDWORD(v14)) == -1 )
    {
      LODWORD(v8) = (uint32_t)(uintptr_t)((char *)v19 + *(uint32_t *)(*v19 - 12));
      HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 1;
      sub_1911530(v8);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192E690  (binary VA: 0x192e690)
// Original: sub_192E690
// ----------------------------------------------------------------------------
uint32_t * sub_192E690(uint32_t *a1, int a2)
{
  char *v2;
  uint8_t *v3;
  char *v4;
  int v5;
  typedef int64_t _g4_t_v7 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v8 __attribute__((aligned(1)));
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef bool _g4_t_v11;
  typedef char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[16];
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v11)) > _g4_s4 ? (16u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v12)) > _g4_s5 ? (20u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v13)) > _g4_s6 ? (24u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v14)) > _g4_s7 ? (28u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (51u + sizeof(_g4_t_v15)) > _g4_s8 ? (51u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v16)) > _g4_s9 ? (52u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v17)) > _g4_s10 ? (60u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v18)) > _g4_s11 ? (76u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v19)) > _g4_s12 ? (80u + sizeof(_g4_t_v19)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 51u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);

  sub_192C8D0((int)(uintptr_t)(&v18), a1);
  if ( (uint8_t)v18 != 0 )
  {
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v16 = *((uint32_t *)v2 + 32);
    if ( v16 == 0 )
      sub_18FFF30();
    if ( v2[117] != 0 )
    {
      v15 = v2[116];
    }
    else
    {
      v3 = *((uint8_t **)v2 + 31);
      if ( v3 == nullptr )
        sub_18FFF30();
      if ( v3[28] != 0 )
      {
        v15 = v3[61];
      }
      else
      {
        sub_18FFC70(*((uint8_t **)v2 + 31));
        v15 = G4_VCALL<int>(v3, 24, 32);
      }
      v2[117] = 1;
      v2[116] = v15;
      v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    }
    v11 = *((uint32_t *)v2 + 30) == 0;
    v14 = a2;
    v12 = v2;
    v13 = v15;
    v10 = *((uint32_t *)v2 + 30);
    v9 = v16;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int))(*(uint32_t *)v16 + 36))(v17, v9, v10, v11, v12, v13, v14);
    if ( v17[4] != 0 )
    {
      LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v7) = *(uint32_t *)(v7 + 20) | 1;
      sub_1911530(v7);
    }
  }
  v4 = (char *)v19 + *(uint32_t *)(*v19 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 30);
    if ( v5 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, int))(*(uint32_t *)v5 + 24))(
           *((uint32_t *)v4 + 30),
           v9,
           v10,
           v11,
           v12,
           v13,
           v14) == -1 )
    {
      LODWORD(v8) = (uint32_t)(uintptr_t)((char *)v19 + *(uint32_t *)(*v19 - 12));
      HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 1;
      sub_1911530(v8);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192E8C0  (binary VA: 0x192e8c0)
// Original: sub_192E8C0
// ----------------------------------------------------------------------------
bool sub_192E8C0(int *a1, int *a2, int a3)
{
  int v3;
  uint32_t *v4;

  v3 = *a2;
  *a1 = *a2;
  v4 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v3 - 12)));
  *v4 = a2[1];
  return sub_1912230((int)(uintptr_t)(v4), a3);
}

// ----------------------------------------------------------------------------
// Function: sub_192E900  (binary VA: 0x192e900)
// Original: sub_192E900
// ----------------------------------------------------------------------------
bool sub_192E900(int a1, int a2)
{
  sub_1900810((uint32_t *)(a1 + 4));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAD0C);
  *(uint32_t *)(a1 + 116) = 0;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AAD20);
  *(uint32_t *)(a1 + 120) = 0;
  *(uint8_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  return sub_1912230(a1 + 4, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_192E9D0  (binary VA: 0x192e9d0)
// Original: sub_192E9D0
// ----------------------------------------------------------------------------
int sub_192E9D0(int a1, int (*a2)(int))
{
  return a2(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_192E9F0  (binary VA: 0x192e9f0)
// Original: sub_192E9F0
// ----------------------------------------------------------------------------
char * sub_192E9F0(char *a1, void (*a2)(char *))
{
  a2(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192EA10  (binary VA: 0x192ea10)
// Original: sub_192EA10
// ----------------------------------------------------------------------------
char * sub_192EA10(char *a1, void (*a2)(char *))
{
  a2(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192EA30  (binary VA: 0x192ea30)
// Original: sub_192EA30
// ----------------------------------------------------------------------------
int sub_192EA30(uint32_t *a1, int a2, int a3)
{
  int result;
  int64_t v4;

  result = (*(int (**)(uint32_t, int, int))(**(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124) + 48))(
             *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124),
             a2,
             a3);
  if ( a3 != result )
  {
    LODWORD(v4) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v4) = *(uint32_t *)(v4 + 20) | 1;
    return sub_1911E40(v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_192EAA0  (binary VA: 0x192eaa0)
// Original: sub_192EAA0
// ----------------------------------------------------------------------------
uint32_t * sub_192EAA0(uint32_t *a1)
{
  int v1;
  int64_t v3;

  v1 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
  if ( v1 != 0
    && (*(int (**)(uint32_t))(*(uint32_t *)v1 + 24))(*(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124)) == -1 )
  {
    LODWORD(v3) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v3) = *(uint32_t *)(v3 + 20) | 1;
    sub_1911E40(v3);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192EB70  (binary VA: 0x192eb70)
// Original: sub_192EB70
// ----------------------------------------------------------------------------
uint32_t * sub_192EB70(uint32_t *a1, int *a2)
{
  int v2;
  char *v3;
  uint32_t v5[3];

  v2 = *a2;
  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  v3 = (char *)a2 + *(uint32_t *)(v2 - 12);
  if ( (v3[20] & 5) == 0 )
  {
    (*(void (**)(uint32_t *, uint32_t *, int64_t, int, int))(**((uint32_t **)v3 + 31) + 16))(v5, *((uint32_t **)v3 + 31), (int64_t)0, 1, 16);
    *a1 = v5[0];
    a1[1] = v5[1];
    a1[2] = v5[2];
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192EC90  (binary VA: 0x192ec90)
// Original: sub_192EC90
// ----------------------------------------------------------------------------
uint32_t * sub_192EC90(uint32_t *a1, int a2, int a3, int a4)
{
  char *v4;
  int v6;
  typedef int64_t _g4_t_v7 __attribute__((aligned(1)));
  typedef uint32_t _g4_t_v8[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v8)) > _g4_s1 ? (44u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);

  v4 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  if ( (v4[20] & 5) == 0 )
  {
    v6 = *((uint32_t *)v4 + 31);
    v8[3] = a2;
    v8[4] = a3;
    v8[5] = a4;
    (*(void (**)(uint32_t *, int, int, int, int, int))(*(uint32_t *)v6 + 20))(v8, v6, a2, a3, a4, 16);
    if ( (v8[1] & v8[0]) == -1 )
    {
      LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v7) = *(uint32_t *)(v7 + 20) | 4;
      sub_1911E40(v7);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192EDC0  (binary VA: 0x192edc0)
// Original: sub_192EDC0
// ----------------------------------------------------------------------------
uint32_t * sub_192EDC0(uint32_t *a1)
{
  char *v1;
  typedef int64_t _g4_t_v3 __attribute__((aligned(1)));
  typedef uint32_t _g4_t_v4[6];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v4)) > _g4_s1 ? (56u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 56u);

  v1 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  if ( (v1[20] & 5) == 0 )
  {
    (*(void (**)(uint32_t *, uint32_t *, int64_t, int, int))(**((uint32_t **)v1 + 31) + 16))(v4, *((uint32_t **)v1 + 31), (int64_t)0, 0, 16);
    if ( (v4[1] & v4[0]) == -1 )
    {
      LODWORD(v3) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v3) = *(uint32_t *)(v3 + 20) | 4;
      sub_1911E40(v3);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192EEE0  (binary VA: 0x192eee0)
// Original: sub_192EEE0
// ----------------------------------------------------------------------------
bool sub_192EEE0(int *a1, int *a2)
{
  int v2;
  uint32_t *v3;

  v2 = *a2;
  *a1 = *a2;
  v3 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v2 - 12)));
  *v3 = a2[1];
  return sub_1912230((int)(uintptr_t)(v3), 0);
}

// ----------------------------------------------------------------------------
// Function: sub_192EF20  (binary VA: 0x192ef20)
// Original: sub_192EF20
// ----------------------------------------------------------------------------
bool sub_192EF20(int a1)
{
  sub_1900810((uint32_t *)(a1 + 4));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAD0C);
  *(uint32_t *)(a1 + 116) = 0;
  *(uint32_t *)(a1 + 120) = 0;
  *(uint8_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AAD20);
  return sub_1912230(a1 + 4, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_192EFD0  (binary VA: 0x192efd0)
// Original: sub_192EFD0
// ----------------------------------------------------------------------------
int sub_192EFD0(int a1, int *a2)
{
  int v2;
  int64_t v3; // rax

  v2 = *a2;
  *(uint8_t *)a1 = 0;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(a2);
  LODWORD(v3) = (uint32_t)(uintptr_t)((char *)a2 + *(uint32_t *)(v2 - 12));
  if ( *(uint32_t *)(v3 + 112) != 0 )
  {
    HIDWORD(v3) = *(uint32_t *)(v3 + 20);
    if ( HIDWORD(v3) != 0 )
      goto LABEL_7;
    sub_192EAA0(*(uint32_t **)(v3 + 112));
    LODWORD(v3) = (uint32_t)(uintptr_t)((char *)a2 + *(uint32_t *)(*a2 - 12));
  }
  HIDWORD(v3) = *(uint32_t *)(v3 + 20);
  if ( HIDWORD(v3) == 0 )
  {
    *(uint8_t *)a1 = 1;
    return v3;
  }
LABEL_7:
  LODWORD(v3) = sub_1911E40(v3 | 0x400000000LL);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_192F060  (binary VA: 0x192f060)
// Original: sub_192F060
// ----------------------------------------------------------------------------
int sub_192F060(int a1)
{
  int *v1;
  int result;
  char *v3;
  int64_t v4;

  v1 = *(int **)(a1 + 4);
  result = *v1;
  v3 = (char *)v1 + *(uint32_t *)(*v1 - 12);
  if ( (v3[13] & 0x20) != 0 )
  {
    result = std::uncaught_exception();
    if ( (uint8_t)result == 0 )
    {
      result = *((uint32_t *)v3 + 31);
      if ( result != 0 )
      {
        result = (*(int (**)(uint32_t))(*(uint32_t *)result + 24))(*((uint32_t *)v3 + 31));
        if ( result == -1 )
        {
          LODWORD(v4) = *(uint32_t *)(**(uint32_t **)(a1 + 4) - 12) + *(uint32_t *)(a1 + 4);
          HIDWORD(v4) = *(uint32_t *)(v4 + 20) | 1;
          return sub_1911E40(v4);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_192F0E0  (binary VA: 0x192f0e0)
// Original: sub_192F0E0
// ----------------------------------------------------------------------------
int * sub_192F0E0(int *a1, int a2, int a3)
{
  char *v3;
  int v4;
  typedef int64_t _g4_t_v6;
  typedef int64_t _g4_t_v7;
  typedef uint8_t _g4_t_v8[4];
  typedef uint32_t *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v7)) > _g4_s1 ? (0u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v9)) > _g4_s3 ? (28u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  sub_192EFD0((int)(uintptr_t)(v8), a1);
  if ( v8[0] != 0
    && a3 != (*(int (**)(uint32_t, int, int))(**(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124) + 48))(
               *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124),
               a2,
               a3) )
  {
    LODWORD(v6) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(v6) = *(uint32_t *)(v6 + 20) | 1;
    sub_1911E40(v6);
  }
  v3 = (char *)v9 + *(uint32_t *)(*v9 - 12);
  if ( (v3[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v4 = *((uint32_t *)v3 + 31);
    if ( v4 != 0 && (*(int (**)(uint32_t))(*(uint32_t *)v4 + 24))(*((uint32_t *)v3 + 31)) == -1 )
    {
      LODWORD(v7) = (uint32_t)(uintptr_t)((char *)v9 + *(uint32_t *)(*v9 - 12));
      HIDWORD(v7) = *(uint32_t *)(v7 + 20) | 1;
      sub_1911E40(v7);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192F240  (binary VA: 0x192f240)
// Original: sub_192F240
// ----------------------------------------------------------------------------
int * sub_192F240(int *a1, int a2)
{
  int v2;
  uint32_t *v3;
  int *v4;
  char *v5;
  int v6;
  typedef int64_t _g4_t_v8;
  typedef int64_t _g4_t_v9;
  typedef char _g4_t_v10[4];
  typedef uint32_t *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v9)) > _g4_s1 ? (0u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v2 = a2;
  sub_192EFD0((int)(uintptr_t)(v10), a1);
  if ( v10[0] != 0 )
  {
    v3 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124);
    v4 = (int *)v3[5];
    if ( (unsigned int)(uintptr_t)(v4) >= v3[6] )
    {
      v2 = G4_VCALL<int>(v3, 52, a2);
    }
    else
    {
      *v4 = a2;
      v3[5] = (uint32_t)(uintptr_t)(v4 + 1);
    }
    if ( v2 == -1 )
    {
      LODWORD(v8) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 1;
      sub_1911E40(v8);
    }
  }
  v5 = (char *)v11 + *(uint32_t *)(*v11 - 12);
  if ( (v5[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v6 = *((uint32_t *)v5 + 31);
    if ( v6 != 0 && (*(int (**)(uint32_t))(*(uint32_t *)v6 + 24))(*((uint32_t *)v5 + 31)) == -1 )
    {
      LODWORD(v9) = (uint32_t)(uintptr_t)((char *)v11 + *(uint32_t *)(*v11 - 12));
      HIDWORD(v9) = *(uint32_t *)(v9 + 20) | 1;
      sub_1911E40(v9);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192F3C0  (binary VA: 0x192f3c0)
// Original: sub_192F3C0
// ----------------------------------------------------------------------------
int * sub_192F3C0(int *a1, int a2)
{
  int v2;
  int v3;
  char *v4;
  int v5;
  typedef int64_t _g4_t_v7;
  typedef int64_t _g4_t_v8;
  typedef char _g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef uint32_t *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v8)) > _g4_s1 ? (0u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (23u + sizeof(_g4_t_v9)) > _g4_s2 ? (23u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 23u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  sub_192EFD0((int)(uintptr_t)(v10), a1);
  if ( v10[0] == 0 )
  {
    if ( a2 != 0 )
      goto LABEL_5;
  }
  else if ( a2 != 0 )
  {
    v2 = sub_1954010(a2, *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 124), &v9);
    v3 = 4;
    if ( v2 == 0 )
    {
LABEL_4:
      LODWORD(v7) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v7) = *(uint32_t *)(v7 + 20) | v3;
      sub_1911E40(v7);
    }
LABEL_5:
    v4 = (char *)v11 + *(uint32_t *)(*v11 - 12);
    if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
    {
      v5 = *((uint32_t *)v4 + 31);
      if ( v5 != 0 && (*(int (**)(uint32_t))(*(uint32_t *)v5 + 24))(*((uint32_t *)v4 + 31)) == -1 )
      {
        LODWORD(v8) = (uint32_t)(uintptr_t)((char *)v11 + *(uint32_t *)(*v11 - 12));
        HIDWORD(v8) = *(uint32_t *)(v8 + 20) | 1;
        sub_1911E40(v8);
      }
    }
    return a1;
  }
  v3 = 1;
  goto LABEL_4;
}

// ----------------------------------------------------------------------------
// Function: sub_192F550  (binary VA: 0x192f550)
// Original: sub_192F550
// ----------------------------------------------------------------------------
uint32_t * sub_192F550(int *a1)
{
  int v1;
  int v2;
  int *v3;

  v1 = *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 128);
  if ( v1 == 0 )
    sub_18FFF30();
  v2 = G4_VCALL<int>(v1, 40, 10);
  v3 = sub_192F240(a1, v2);
  return sub_192EAA0(v3);
}

// ----------------------------------------------------------------------------
// Function: sub_192F5C0  (binary VA: 0x192f5c0)
// Original: sub_192F5C0
// ----------------------------------------------------------------------------
int * sub_192F5C0(int *a1)
{
  return sub_192F240(a1, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_192F5F0  (binary VA: 0x192f5f0)
// Original: sub_192F5F0
// ----------------------------------------------------------------------------
uint32_t * sub_192F5F0(uint32_t *a1, int a2)
{
  char *v2;
  int v4;

  v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  if ( v2[120] == 0 )
  {
    v4 = *((uint32_t *)v2 + 32);
    if ( v4 == 0 )
      sub_18FFF30();
    *((uint32_t *)v2 + 29) = G4_VCALL<int>(v4, 40, 32);
    v2[120] = 1;
  }
  *((uint32_t *)v2 + 29) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192F660  (binary VA: 0x192f660)
// Original: sub_192F660
// ----------------------------------------------------------------------------
uint32_t * sub_192F660(uint32_t *a1, int a2)
{
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12) |= a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192F6A0  (binary VA: 0x192f6a0)
// Original: sub_192F6A0
// ----------------------------------------------------------------------------
uint32_t * sub_192F6A0(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;

  result = a1;
  v3 = 64;
  if ( a2 != 8 )
  {
    LOBYTE(v3) = 2;
    if ( a2 != 10 )
      v3 = 8 * (a2 == 16);
  }
  *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12) = v3
                                                       | *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 12)
                                                       & 0xFFFFFFB5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_192F720  (binary VA: 0x192f720)
// Original: sub_192F720
// ----------------------------------------------------------------------------
int * sub_192F720(int *a1, int a2, int a3)
{
  int v3;
  char *v4;
  int v5;
  char *v6;
  int v7;
  int v9;
  bool v10;
  int v11;
  uint32_t *v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  typedef int64_t _g4_t_v26;
  typedef int64_t _g4_t_v27;
  typedef int64_t _g4_t_v28;
  typedef int64_t _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef bool _g4_t_v33;
  typedef char _g4_t_v34[4];
  typedef uint32_t *_g4_t_v35;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v27)) > _g4_s1 ? (0u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v28)) > _g4_s2 ? (0u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v29)) > _g4_s3 ? (0u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v30)) > _g4_s4 ? (20u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v31)) > _g4_s5 ? (20u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v32)) > _g4_s6 ? (24u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (31u + sizeof(_g4_t_v33)) > _g4_s7 ? (31u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v34)) > _g4_s8 ? (40u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v35)) > _g4_s9 ? (44u + sizeof(_g4_t_v35)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 31u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);

  sub_192EFD0((int)(uintptr_t)(v34), a1);
  if ( v34[0] != 0 )
  {
    v3 = *(uint32_t *)(*a1 - 12);
    v4 = (char *)a1 + v3;
    v30 = *(int *)((char *)a1 + v3 + 8);
    if ( v30 <= a3 )
    {
      v10 = a3 == (*(int (**)(uint32_t, int, int))(**((uint32_t **)v4 + 31) + 48))(*((uint32_t *)v4 + 31), a2, a3);
      v11 = *a1;
      if ( v10 )
        goto LABEL_24;
    }
    else
    {
      v5 = *((uint32_t *)v4 + 3) & 0xB0;
      v33 = v5 == 32;
      if ( v5 != 32 )
      {
        if ( v4[120] != 0 )
        {
          v16 = *((uint32_t *)v4 + 29);
        }
        else
        {
          v20 = *((uint32_t *)v4 + 32);
          if ( v20 == 0 )
            sub_18FFF30();
          v21 = G4_VCALL<int>(v20, 40, 32);
          *((uint32_t *)v4 + 29) = v21;
          v16 = v21;
          v22 = *a1;
          v4[120] = 1;
          v3 = *(uint32_t *)(v22 - 12);
          v4 = (char *)a1 + v3;
        }
        v32 = v30 - a3;
        if ( v30 - a3 > 0 )
        {
          do
          {
            v17 = *(uint32_t **)((char *)a1 + v3 + 124);
            v18 = (int *)v17[5];
            if ( (unsigned int)(uintptr_t)(v18) >= v17[6] )
            {
              v19 = G4_VCALL<int>(v17, 52, v16);
            }
            else
            {
              *v18 = v16;
              v17[5] = (uint32_t)(uintptr_t)(v18 + 1);
              v19 = v16;
            }
            if ( v19 == -1 )
            {
              LODWORD(v28) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
              HIDWORD(v28) = *(uint32_t *)(v28 + 20) | 1;
              sub_1911E40(v28);
              v3 = *(uint32_t *)(*a1 - 12);
              v4 = (char *)a1 + v3;
              goto LABEL_4;
            }
            v10 = v32-- == 1;
            v3 = *(uint32_t *)(*a1 - 12);
          }
          while ( !v10 );
          v4 = (char *)a1 + v3;
        }
      }
LABEL_4:
      if ( *((uint32_t *)v4 + 5) != 0 )
      {
        if ( !v33 )
        {
LABEL_6:
          *((uint32_t *)v4 + 2) = 0;
          goto LABEL_7;
        }
      }
      else
      {
        v10 = a3 == (*(int (**)(uint32_t, int, int))(**((uint32_t **)v4 + 31) + 48))(*((uint32_t *)v4 + 31), a2, a3);
        v15 = *a1;
        if ( !v10 )
        {
          LODWORD(v27) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(v15 - 12));
          HIDWORD(v27) = *(uint32_t *)(v27 + 20) | 1;
          sub_1911E40(v27);
          v15 = *a1;
        }
        v3 = *(uint32_t *)(v15 - 12);
        v4 = (char *)a1 + v3;
        if ( !v33 )
          goto LABEL_6;
      }
      if ( *((uint32_t *)v4 + 5) != 0 )
        goto LABEL_6;
      if ( v4[120] != 0 )
      {
        v9 = *((uint32_t *)v4 + 29);
      }
      else
      {
        v23 = *((uint32_t *)v4 + 32);
        if ( v23 == 0 )
          sub_18FFF30();
        v24 = G4_VCALL<int>(v23, 40, 32);
        *((uint32_t *)v4 + 29) = v24;
        v9 = v24;
        v25 = *a1;
        v4[120] = 1;
        v3 = *(uint32_t *)(v25 - 12);
        v4 = (char *)a1 + v3;
      }
      v31 = v30 - a3;
      if ( v31 <= 0 )
        goto LABEL_6;
      while ( 1 )
      {
        v12 = *(uint32_t **)((char *)a1 + v3 + 124);
        v13 = (int *)v12[5];
        if ( (unsigned int)(uintptr_t)(v13) >= v12[6] )
        {
          v14 = G4_VCALL<int>(v12, 52, v9);
        }
        else
        {
          *v13 = v9;
          v12[5] = (uint32_t)(uintptr_t)(v13 + 1);
          v14 = v9;
        }
        if ( v14 == -1 )
          break;
        v10 = v31-- == 1;
        v11 = *a1;
        if ( v10 )
          goto LABEL_24;
        v3 = *(uint32_t *)(v11 - 12);
      }
      v11 = *a1;
    }
    LODWORD(v26) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(v11 - 12));
    HIDWORD(v26) = *(uint32_t *)(v26 + 20) | 1;
    sub_1911E40(v26);
    v11 = *a1;
LABEL_24:
    v4 = (char *)a1 + *(uint32_t *)(v11 - 12);
    goto LABEL_6;
  }
LABEL_7:
  v6 = (char *)v35 + *(uint32_t *)(*v35 - 12);
  if ( (v6[13] & 0x20) == 0 )
    return a1;
  if ( (uint8_t)std::uncaught_exception() != 0 )
    return a1;
  v7 = *((uint32_t *)v6 + 31);
  if ( v7 == 0 || (*(int (**)(uint32_t))(*(uint32_t *)v7 + 24))(*((uint32_t *)v6 + 31)) != -1 )
    return a1;
  LODWORD(v29) = (uint32_t)(uintptr_t)((char *)v35 + *(uint32_t *)(*v35 - 12));
  HIDWORD(v29) = *(uint32_t *)(v29 + 20) | 1;
  sub_1911E40(v29);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192FA90  (binary VA: 0x192fa90)
// Original: sub_192FA90
// ----------------------------------------------------------------------------
int * sub_192FA90(int *a1, wchar_t *a2)
{
  size_t v2;
  int64_t s;

  if ( a2 != nullptr )
  {
    v2 = wcslen(a2);
    sub_192F720(a1, (int)(uintptr_t)(a2), v2);
  }
  else
  {
    LODWORD(s) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(s) = *(uint32_t *)(s + 20) | 1;
    sub_1911E40(s);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192FB10  (binary VA: 0x192fb10)
// Original: sub_192FB10
// ----------------------------------------------------------------------------
int * sub_192FB10(int *a1, ...)
{
  va_list va;

  va_start(va, a1);
  return sub_192F720(a1, ((int)(uintptr_t)g4_va_cast<void *>(va)), 1);
}

// ----------------------------------------------------------------------------
// Function: sub_192FB40  (binary VA: 0x192fb40)
// Original: sub_192FB40
// ----------------------------------------------------------------------------
int * sub_192FB40(int *a1, char *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int64_t s;
  uint32_t *v8;
  size_t v9;
  uint32_t *v10;

  if ( a2 != nullptr )
  {
    v9 = strlen(a2);
    v10 = (uint32_t *)opNewArray(4 * v9);
    if ( v9 != 0 )
    {
      LOBYTE(v2) = *a2;
      v3 = *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 128);
      if ( v3 == 0 )
LABEL_11:
        sub_18FFF30();
      v2 = (char)v2;
      v4 = v10 + 1;
      v8 = v10;
      v5 = 0;
      while ( 1 )
      {
        ++v5;
        *v8 = G4_VCALL<int>(v3, 40, v2);
        if ( v5 == v9 )
          break;
        v8 = v4++;
        v2 = a2[v5];
        v3 = *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 128);
        if ( v3 == 0 )
          goto LABEL_11;
      }
    }
    sub_192F720(a1, (int)(uintptr_t)(v10), v9);
    if ( v10 != nullptr )
      opDeleteArray(v10);
    return a1;
  }
  else
  {
    LODWORD(s) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
    HIDWORD(s) = *(uint32_t *)(s + 20) | 1;
    sub_1911E40(s);
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_192FCF0  (binary VA: 0x192fcf0)
// Original: sub_192FCF0
// ----------------------------------------------------------------------------
int * sub_192FCF0(int *a1, char a2)
{
  int v2;
  int v4[4];

  v2 = *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 128);
  if ( v2 == 0 )
    sub_18FFF30();
  v4[0] = (*(int (**)(uint32_t, uint32_t))(*(uint32_t *)v2 + 40))(
            *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 128),
            a2);
  return sub_192F720(a1, (int)(uintptr_t)(v4), 1);
}

// ----------------------------------------------------------------------------
// Function: sub_192FD60  (binary VA: 0x192fd60)
// Original: sub_192FD60
// ----------------------------------------------------------------------------
int * sub_192FD60(int *a1, int a2)
{
  char *v2;
  int v3;
  char *v4;
  int v5;
  int v7;
  int v8;
  int v9;
  typedef int64_t _g4_t_v10 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v11 __attribute__((aligned(1)));
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef bool _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[16];
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v14)) > _g4_s4 ? (16u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v16)) > _g4_s6 ? (24u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v18)) > _g4_s8 ? (40u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v19)) > _g4_s9 ? (44u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v20)) > _g4_s10 ? (60u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v21)) > _g4_s11 ? (64u + sizeof(_g4_t_v21)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);

  sub_192EFD0((int)(uintptr_t)(&v20), a1);
  if ( (uint8_t)v20 != 0 )
  {
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v3 = *((uint32_t *)v2 + 33);
    if ( v3 == 0 )
      sub_18FFF30();
    if ( v2[120] != 0 )
    {
      v18 = *((uint32_t *)v2 + 29);
    }
    else
    {
      v7 = *((uint32_t *)v2 + 32);
      if ( v7 == 0 )
        sub_18FFF30();
      v8 = G4_VCALL<int>(v7, 40, 32);
      *((uint32_t *)v2 + 29) = v8;
      v18 = v8;
      v9 = *a1;
      v2[120] = 1;
      v2 = (char *)a1 + *(uint32_t *)(v9 - 12);
    }
    v17 = a2;
    v16 = v18;
    v14 = *((uint32_t *)v2 + 31) == 0;
    v15 = v2;
    v13 = *((uint32_t *)v2 + 31);
    v12 = v3;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int))(*(uint32_t *)v3 + 12))(v19, v12, v13, v14, v15, v16, v17);
    if ( v19[4] != 0 )
    {
      LODWORD(v10) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v10) = *(uint32_t *)(v10 + 20) | 1;
      sub_1911E40(v10);
    }
  }
  v4 = (char *)v21 + *(uint32_t *)(*v21 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 31);
    if ( v5 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, int))(*(uint32_t *)v5 + 24))(
           *((uint32_t *)v4 + 31),
           v12,
           v13,
           v14,
           v15,
           v16,
           v17) == -1 )
    {
      LODWORD(v11) = (uint32_t)(uintptr_t)((char *)v21 + *(uint32_t *)(*v21 - 12));
      HIDWORD(v11) = *(uint32_t *)(v11 + 20) | 1;
      sub_1911E40(v11);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_192FFC0  (binary VA: 0x192ffc0)
// Original: sub_192FFC0
// ----------------------------------------------------------------------------
int * sub_192FFC0(int *a1, int a2)
{
  char *v2;
  int v3;
  char *v4;
  int v5;
  int v7;
  int v8;
  int v9;
  typedef int64_t _g4_t_v10 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v11 __attribute__((aligned(1)));
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef bool _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[16];
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v14)) > _g4_s4 ? (16u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v16)) > _g4_s6 ? (24u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v18)) > _g4_s8 ? (40u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v19)) > _g4_s9 ? (44u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v20)) > _g4_s10 ? (60u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v21)) > _g4_s11 ? (64u + sizeof(_g4_t_v21)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);

  sub_192EFD0((int)(uintptr_t)(&v20), a1);
  if ( (uint8_t)v20 != 0 )
  {
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v3 = *((uint32_t *)v2 + 33);
    if ( v3 == 0 )
      sub_18FFF30();
    if ( v2[120] != 0 )
    {
      v18 = *((uint32_t *)v2 + 29);
    }
    else
    {
      v7 = *((uint32_t *)v2 + 32);
      if ( v7 == 0 )
        sub_18FFF30();
      v8 = G4_VCALL<int>(v7, 40, 32);
      *((uint32_t *)v2 + 29) = v8;
      v18 = v8;
      v9 = *a1;
      v2[120] = 1;
      v2 = (char *)a1 + *(uint32_t *)(v9 - 12);
    }
    v17 = a2;
    v16 = v18;
    v14 = *((uint32_t *)v2 + 31) == 0;
    v15 = v2;
    v13 = *((uint32_t *)v2 + 31);
    v12 = v3;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int))(*(uint32_t *)v3 + 16))(v19, v12, v13, v14, v15, v16, v17);
    if ( v19[4] != 0 )
    {
      LODWORD(v10) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v10) = *(uint32_t *)(v10 + 20) | 1;
      sub_1911E40(v10);
    }
  }
  v4 = (char *)v21 + *(uint32_t *)(*v21 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 31);
    if ( v5 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, int))(*(uint32_t *)v5 + 24))(
           *((uint32_t *)v4 + 31),
           v12,
           v13,
           v14,
           v15,
           v16,
           v17) == -1 )
    {
      LODWORD(v11) = (uint32_t)(uintptr_t)((char *)v21 + *(uint32_t *)(*v21 - 12));
      HIDWORD(v11) = *(uint32_t *)(v11 + 20) | 1;
      sub_1911E40(v11);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19301E0  (binary VA: 0x19301e0)
// Original: sub_19301E0
// ----------------------------------------------------------------------------
int * sub_19301E0(int *a1, uint8_t a2)
{
  char *v2;
  int v3;
  char *v4;
  int v5;
  int v7;
  int v8;
  int v9;
  typedef int64_t _g4_t_v10 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v11 __attribute__((aligned(1)));
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef bool _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[16];
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v14)) > _g4_s4 ? (16u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v16)) > _g4_s6 ? (24u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v18)) > _g4_s8 ? (48u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v19)) > _g4_s9 ? (60u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v20)) > _g4_s10 ? (76u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v21)) > _g4_s11 ? (80u + sizeof(_g4_t_v21)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);

  sub_192EFD0((int)(uintptr_t)(&v20), a1);
  if ( (uint8_t)v20 != 0 )
  {
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v3 = *((uint32_t *)v2 + 33);
    if ( v3 == 0 )
      sub_18FFF30();
    if ( v2[120] != 0 )
    {
      v18 = *((uint32_t *)v2 + 29);
    }
    else
    {
      v7 = *((uint32_t *)v2 + 32);
      if ( v7 == 0 )
        sub_18FFF30();
      v8 = G4_VCALL<int>(v7, 40, 32);
      *((uint32_t *)v2 + 29) = v8;
      v18 = v8;
      v9 = *a1;
      v2[120] = 1;
      v2 = (char *)a1 + *(uint32_t *)(v9 - 12);
    }
    v17 = a2;
    v16 = v18;
    v14 = *((uint32_t *)v2 + 31) == 0;
    v15 = v2;
    v13 = *((uint32_t *)v2 + 31);
    v12 = v3;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, uint8_t))(*(uint32_t *)v3 + 8))(v19, v12, v13, v14, v15, v16, v17);
    if ( v19[4] != 0 )
    {
      LODWORD(v10) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v10) = *(uint32_t *)(v10 + 20) | 1;
      sub_1911E40(v10);
    }
  }
  v4 = (char *)v21 + *(uint32_t *)(*v21 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 31);
    if ( v5 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, int))(*(uint32_t *)v5 + 24))(
           *((uint32_t *)v4 + 31),
           v12,
           v13,
           v14,
           v15,
           v16,
           v17) == -1 )
    {
      LODWORD(v11) = (uint32_t)(uintptr_t)((char *)v21 + *(uint32_t *)(*v21 - 12));
      HIDWORD(v11) = *(uint32_t *)(v11 + 20) | 1;
      sub_1911E40(v11);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19303F0  (binary VA: 0x19303f0)
// Original: sub_19303F0
// ----------------------------------------------------------------------------
int * sub_19303F0(int *a1, int a2, int a3)
{
  char *v3;
  int v4;
  char *v5;
  int v6;
  int v8;
  int v9;
  int v10;
  typedef int64_t _g4_t_v11 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v12 __attribute__((aligned(1)));
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef bool _g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[16];
  typedef int _g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v15)) > _g4_s4 ? (16u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v16)) > _g4_s5 ? (20u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v17)) > _g4_s6 ? (24u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v18)) > _g4_s7 ? (28u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v19)) > _g4_s8 ? (32u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v20)) > _g4_s9 ? (48u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v21)) > _g4_s10 ? (60u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v22)) > _g4_s11 ? (76u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v23)) > _g4_s12 ? (80u + sizeof(_g4_t_v23)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);

  sub_192EFD0((int)(uintptr_t)(&v22), a1);
  if ( (uint8_t)v22 != 0 )
  {
    v3 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v20 = *((uint32_t *)v3 + 33);
    if ( v20 == 0 )
      sub_18FFF30();
    if ( v3[120] != 0 )
    {
      v4 = *((uint32_t *)v3 + 29);
    }
    else
    {
      v8 = *((uint32_t *)v3 + 32);
      if ( v8 == 0 )
        sub_18FFF30();
      v9 = G4_VCALL<int>(v8, 40, 32);
      *((uint32_t *)v3 + 29) = v9;
      v4 = v9;
      v10 = *a1;
      v3[120] = 1;
      v3 = (char *)a1 + *(uint32_t *)(v10 - 12);
    }
    v19 = a3;
    v14 = *((uint32_t *)v3 + 31);
    v15 = v14 == 0;
    v18 = a2;
    v17 = v4;
    v16 = v3;
    v13 = v20;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int, int))(*(uint32_t *)v20 + 20))(v21, v13, v14, v15, v16, v17, v18, v19);
    if ( v21[4] != 0 )
    {
      LODWORD(v11) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v11) = *(uint32_t *)(v11 + 20) | 1;
      sub_1911E40(v11);
    }
  }
  v5 = (char *)v23 + *(uint32_t *)(*v23 - 12);
  if ( (v5[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v6 = *((uint32_t *)v5 + 31);
    if ( v6 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, int, int))(*(uint32_t *)v6 + 24))(
           *((uint32_t *)v5 + 31),
           v13,
           v14,
           v15,
           v16,
           v17,
           v18,
           v19) == -1 )
    {
      LODWORD(v12) = (uint32_t)(uintptr_t)((char *)v23 + *(uint32_t *)(*v23 - 12));
      HIDWORD(v12) = *(uint32_t *)(v12 + 20) | 1;
      sub_1911E40(v12);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1930610  (binary VA: 0x1930610)
// Original: sub_1930610
// ----------------------------------------------------------------------------
int * sub_1930610(int *a1, int a2, int a3)
{
  char *v3;
  int v4;
  char *v5;
  int v6;
  int v8;
  int v9;
  int v10;
  typedef int64_t _g4_t_v11 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v12 __attribute__((aligned(1)));
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef bool _g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[16];
  typedef int _g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v15)) > _g4_s4 ? (16u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v16)) > _g4_s5 ? (20u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v17)) > _g4_s6 ? (24u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v18)) > _g4_s7 ? (28u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v19)) > _g4_s8 ? (32u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v20)) > _g4_s9 ? (48u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v21)) > _g4_s10 ? (60u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v22)) > _g4_s11 ? (76u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v23)) > _g4_s12 ? (80u + sizeof(_g4_t_v23)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);

  sub_192EFD0((int)(uintptr_t)(&v22), a1);
  if ( (uint8_t)v22 != 0 )
  {
    v3 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v20 = *((uint32_t *)v3 + 33);
    if ( v20 == 0 )
      sub_18FFF30();
    if ( v3[120] != 0 )
    {
      v4 = *((uint32_t *)v3 + 29);
    }
    else
    {
      v8 = *((uint32_t *)v3 + 32);
      if ( v8 == 0 )
        sub_18FFF30();
      v9 = G4_VCALL<int>(v8, 40, 32);
      *((uint32_t *)v3 + 29) = v9;
      v4 = v9;
      v10 = *a1;
      v3[120] = 1;
      v3 = (char *)a1 + *(uint32_t *)(v10 - 12);
    }
    v19 = a3;
    v14 = *((uint32_t *)v3 + 31);
    v15 = v14 == 0;
    v18 = a2;
    v17 = v4;
    v16 = v3;
    v13 = v20;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int, int))(*(uint32_t *)v20 + 24))(v21, v13, v14, v15, v16, v17, v18, v19);
    if ( v21[4] != 0 )
    {
      LODWORD(v11) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v11) = *(uint32_t *)(v11 + 20) | 1;
      sub_1911E40(v11);
    }
  }
  v5 = (char *)v23 + *(uint32_t *)(*v23 - 12);
  if ( (v5[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v6 = *((uint32_t *)v5 + 31);
    if ( v6 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, int, int))(*(uint32_t *)v6 + 24))(
           *((uint32_t *)v5 + 31),
           v13,
           v14,
           v15,
           v16,
           v17,
           v18,
           v19) == -1 )
    {
      LODWORD(v12) = (uint32_t)(uintptr_t)((char *)v23 + *(uint32_t *)(*v23 - 12));
      HIDWORD(v12) = *(uint32_t *)(v12 + 20) | 1;
      sub_1911E40(v12);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1930830  (binary VA: 0x1930830)
// Original: sub_1930830
// ----------------------------------------------------------------------------
int * sub_1930830(int *a1, int64_t a2)
{
  char *v2;
  int v3;
  char *v4;
  int v5;
  int v7;
  int v8;
  int v9;
  typedef int64_t _g4_t_v10 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v11 __attribute__((aligned(1)));
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef bool _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int64_t _g4_t_v17 __attribute__((aligned(1)));
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[16];
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v14)) > _g4_s4 ? (16u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v16)) > _g4_s6 ? (24u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v18)) > _g4_s8 ? (48u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v19)) > _g4_s9 ? (60u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v20)) > _g4_s10 ? (76u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v21)) > _g4_s11 ? (80u + sizeof(_g4_t_v21)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);

  sub_192EFD0((int)(uintptr_t)(&v20), a1);
  if ( (uint8_t)v20 != 0 )
  {
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v3 = *((uint32_t *)v2 + 33);
    if ( v3 == 0 )
      sub_18FFF30();
    if ( v2[120] != 0 )
    {
      v18 = *((uint32_t *)v2 + 29);
    }
    else
    {
      v7 = *((uint32_t *)v2 + 32);
      if ( v7 == 0 )
        sub_18FFF30();
      v8 = G4_VCALL<int>(v7, 40, 32);
      *((uint32_t *)v2 + 29) = v8;
      v18 = v8;
      v9 = *a1;
      v2[120] = 1;
      v2 = (char *)a1 + *(uint32_t *)(v9 - 12);
    }
    v16 = v18;
    v14 = *((uint32_t *)v2 + 31) == 0;
    v15 = v2;
    v13 = *((uint32_t *)v2 + 31);
    v17 = a2;
    v12 = v3;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int64_t))(*(uint32_t *)v3 + 28))(v19, v12, v13, v14, v15, v16, v17);
    if ( v19[4] != 0 )
    {
      LODWORD(v10) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v10) = *(uint32_t *)(v10 + 20) | 1;
      sub_1911E40(v10);
    }
  }
  v4 = (char *)v21 + *(uint32_t *)(*v21 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 31);
    if ( v5 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, uint32_t, uint32_t))(*(uint32_t *)v5 + 24))(
           *((uint32_t *)v4 + 31),
           v12,
           v13,
           v14,
           v15,
           v16,
           v17,
           HIDWORD(v17)) == -1 )
    {
      LODWORD(v11) = (uint32_t)(uintptr_t)((char *)v21 + *(uint32_t *)(*v21 - 12));
      HIDWORD(v11) = *(uint32_t *)(v11 + 20) | 1;
      sub_1911E40(v11);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1930A30  (binary VA: 0x1930a30)
// Original: sub_1930A30
// ----------------------------------------------------------------------------
int * sub_1930A30(int *a1, float a2)
{
  return sub_1930830(a1, COERCE__INT64(a2));
}

// ----------------------------------------------------------------------------
// Function: sub_1930A70  (binary VA: 0x1930a70)
// Original: sub_1930A70
// ----------------------------------------------------------------------------
int * sub_1930A70(int *a1, int64_t a2)
{
  char *v2;
  int v3;
  char *v4;
  int v5;
  int v7;
  int v8;
  int v9;
  typedef int64_t _g4_t_v10 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v11 __attribute__((aligned(1)));
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef bool _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int64_t _g4_t_v17 __attribute__((aligned(1)));
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[16];
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v14)) > _g4_s4 ? (16u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v16)) > _g4_s6 ? (24u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v18)) > _g4_s8 ? (48u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v19)) > _g4_s9 ? (60u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v20)) > _g4_s10 ? (76u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v21)) > _g4_s11 ? (80u + sizeof(_g4_t_v21)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);

  sub_192EFD0((int)(uintptr_t)(&v20), a1);
  if ( (uint8_t)v20 != 0 )
  {
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v3 = *((uint32_t *)v2 + 33);
    if ( v3 == 0 )
      sub_18FFF30();
    if ( v2[120] != 0 )
    {
      v18 = *((uint32_t *)v2 + 29);
    }
    else
    {
      v7 = *((uint32_t *)v2 + 32);
      if ( v7 == 0 )
        sub_18FFF30();
      v8 = G4_VCALL<int>(v7, 40, 32);
      *((uint32_t *)v2 + 29) = v8;
      v18 = v8;
      v9 = *a1;
      v2[120] = 1;
      v2 = (char *)a1 + *(uint32_t *)(v9 - 12);
    }
    v16 = v18;
    v14 = *((uint32_t *)v2 + 31) == 0;
    v15 = v2;
    v13 = *((uint32_t *)v2 + 31);
    v17 = a2;
    v12 = v3;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int64_t))(*(uint32_t *)v3 + 32))(v19, v12, v13, v14, v15, v16, v17);
    if ( v19[4] != 0 )
    {
      LODWORD(v10) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v10) = *(uint32_t *)(v10 + 20) | 1;
      sub_1911E40(v10);
    }
  }
  v4 = (char *)v21 + *(uint32_t *)(*v21 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 31);
    if ( v5 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, uint32_t, uint32_t))(*(uint32_t *)v5 + 24))(
           *((uint32_t *)v4 + 31),
           v12,
           v13,
           v14,
           v15,
           v16,
           v17,
           HIDWORD(v17)) == -1 )
    {
      LODWORD(v11) = (uint32_t)(uintptr_t)((char *)v21 + *(uint32_t *)(*v21 - 12));
      HIDWORD(v11) = *(uint32_t *)(v11 + 20) | 1;
      sub_1911E40(v11);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1930C80  (binary VA: 0x1930c80)
// Original: sub_1930C80
// ----------------------------------------------------------------------------
int * sub_1930C80(int *a1, int a2)
{
  char *v2;
  int v3;
  char *v4;
  int v5;
  int v7;
  int v8;
  int v9;
  typedef int64_t _g4_t_v10 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v11 __attribute__((aligned(1)));
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef bool _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[16];
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v14)) > _g4_s4 ? (16u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v16)) > _g4_s6 ? (24u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v18)) > _g4_s8 ? (40u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v19)) > _g4_s9 ? (44u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v20)) > _g4_s10 ? (60u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v21)) > _g4_s11 ? (64u + sizeof(_g4_t_v21)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);

  sub_192EFD0((int)(uintptr_t)(&v20), a1);
  if ( (uint8_t)v20 != 0 )
  {
    v2 = (char *)a1 + *(uint32_t *)(*a1 - 12);
    v3 = *((uint32_t *)v2 + 33);
    if ( v3 == 0 )
      sub_18FFF30();
    if ( v2[120] != 0 )
    {
      v18 = *((uint32_t *)v2 + 29);
    }
    else
    {
      v7 = *((uint32_t *)v2 + 32);
      if ( v7 == 0 )
        sub_18FFF30();
      v8 = G4_VCALL<int>(v7, 40, 32);
      *((uint32_t *)v2 + 29) = v8;
      v18 = v8;
      v9 = *a1;
      v2[120] = 1;
      v2 = (char *)a1 + *(uint32_t *)(v9 - 12);
    }
    v17 = a2;
    v16 = v18;
    v14 = *((uint32_t *)v2 + 31) == 0;
    v15 = v2;
    v13 = *((uint32_t *)v2 + 31);
    v12 = v3;
    (*(void (**)(uint8_t *, int, int, bool, char *, int, int))(*(uint32_t *)v3 + 36))(v19, v12, v13, v14, v15, v16, v17);
    if ( v19[4] != 0 )
    {
      LODWORD(v10) = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
      HIDWORD(v10) = *(uint32_t *)(v10 + 20) | 1;
      sub_1911E40(v10);
    }
  }
  v4 = (char *)v21 + *(uint32_t *)(*v21 - 12);
  if ( (v4[13] & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v5 = *((uint32_t *)v4 + 31);
    if ( v5 != 0
      && (*(int (**)(uint32_t, int, int, bool, char *, int, int))(*(uint32_t *)v5 + 24))(
           *((uint32_t *)v4 + 31),
           v12,
           v13,
           v14,
           v15,
           v16,
           v17) == -1 )
    {
      LODWORD(v11) = (uint32_t)(uintptr_t)((char *)v21 + *(uint32_t *)(*v21 - 12));
      HIDWORD(v11) = *(uint32_t *)(v11 + 20) | 1;
      sub_1911E40(v11);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1930E80  (binary VA: 0x1930e80)
// Original: sub_1930E80
// ----------------------------------------------------------------------------
int sub_1930E80(uint32_t *a1, int a2)
{
  int result;
  unsigned int v3;

  result = -1;
  v3 = a1[2];
  if ( a1[1] < v3 )
  {
    if ( a2 == -1 )
    {
      a1[2] = v3 - 4;
      return 0;
    }
    else if ( *(uint32_t *)(v3 - 4) == a2 )
    {
      a1[2] = v3 - 4;
      return a2;
    }
    else if ( (a1[8] & 0x10) != 0 )
    {
      a1[2] = v3 - 4;
      *(uint32_t *)(v3 - 4) = a2;
      return a2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1930F00  (binary VA: 0x1930f00)
// Original: sub_1930F00
// ----------------------------------------------------------------------------
int sub_1930F00(uint32_t *a1, int a2)
{
  int v2;
  unsigned int v3;

  v2 = -1;
  v3 = a1[2];
  if ( a1[1] < v3 )
  {
    if ( a2 == -1 )
    {
      v2 = 0;
      a1[2] = v3 - 1;
    }
    else if ( *(uint8_t *)(v3 - 1) == (uint8_t)a2 )
    {
      v2 = a2;
      a1[2] = v3 - 1;
    }
    else if ( (a1[8] & 0x10) != 0 )
    {
      a1[2] = v3 - 1;
      v2 = a2;
      *(uint8_t *)(v3 - 1) = a2;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1930F80  (binary VA: 0x1930f80)
// Original: sub_1930F80
// ----------------------------------------------------------------------------
int sub_1930F80(int a1)
{
  int result;
  unsigned int v2;
  unsigned int v3;
  uint8_t *v4;

  result = -1;
  if ( (*(uint8_t *)(a1 + 32) & 8) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 20);
    v3 = *(uint32_t *)(a1 + 12);
    if ( v2 != 0 && v2 > v3 )
    {
      *(uint32_t *)(a1 + 12) = v2;
      v3 = v2;
    }
    v4 = *(uint8_t **)(a1 + 8);
    result = -1;
    if ( (unsigned int)(uintptr_t)(v4) < v3 )
      return *v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1930FC0  (binary VA: 0x1930fc0)
// Original: sub_1930FC0
// ----------------------------------------------------------------------------
int sub_1930FC0(int a1)
{
  int result;
  unsigned int v2;
  unsigned int v3;

  result = -1;
  if ( (*(uint8_t *)(a1 + 32) & 8) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 20);
    v3 = *(uint32_t *)(a1 + 12);
    if ( v2 != 0 && v2 > v3 )
    {
      *(uint32_t *)(a1 + 12) = v2;
      v3 = v2;
    }
    return v3 - *(uint32_t *)(a1 + 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1930FF0  (binary VA: 0x1930ff0)
// Original: sub_1930FF0
// ----------------------------------------------------------------------------
int sub_1930FF0(int a1)
{
  int result;
  unsigned int v2;
  unsigned int v3;

  result = -1;
  if ( (*(uint8_t *)(a1 + 32) & 8) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 20);
    v3 = *(uint32_t *)(a1 + 12);
    if ( v2 != 0 && v2 > v3 )
    {
      *(uint32_t *)(a1 + 12) = v2;
      v3 = v2;
    }
    return (int)(v3 - *(uint32_t *)(a1 + 8)) >> 2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1931020  (binary VA: 0x1931020)
// Original: sub_1931020
// ----------------------------------------------------------------------------
void sub_1931020(void *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB028);
  v1 = *((uint32_t *)a1 + 9);
  if ( (void *)(v1 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v1 - 12));
  }
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)a1 + 7);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19310A0  (binary VA: 0x19310a0)
// Original: sub_19310A0
// ----------------------------------------------------------------------------
int sub_19310A0(uint32_t *a1)
{
  return sub_19310B0((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19310B0  (binary VA: 0x19310b0)
// Original: sub_19310B0
// ----------------------------------------------------------------------------
int sub_19310B0(int a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAE2C);
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&off_20AAE40);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AADA8);
  v1 = *(uint32_t *)(a1 + 44);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 36));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AADEC);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90((uint32_t *)(a1 + 48));
}

// ----------------------------------------------------------------------------
// Function: sub_1931150  (binary VA: 0x1931150)
// Original: sub_1931150
// ----------------------------------------------------------------------------
int sub_1931150(int a1)
{
  int result;
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;

  result = -1;
  if ( (*(uint8_t *)(a1 + 32) & 8) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 20);
    v3 = *(uint32_t *)(a1 + 12);
    if ( v2 != 0 && v2 > v3 )
    {
      *(uint32_t *)(a1 + 12) = v2;
      v3 = v2;
    }
    v4 = *(uint32_t *)(a1 + 8);
    result = -1;
    if ( v4 < v3 )
      return *(uint32_t *)v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1931190  (binary VA: 0x1931190)
// Original: sub_1931190
// ----------------------------------------------------------------------------
int sub_1931190(char *a1)
{
  return ((sub_19311B0(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19311A0  (binary VA: 0x19311a0)
// Original: sub_19311A0
// ----------------------------------------------------------------------------
int sub_19311A0(int a1)
{
  return ((sub_19311B0((void *)(a1 - 8))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19311B0  (binary VA: 0x19311b0)
// Original: sub_19311B0
// ----------------------------------------------------------------------------
void sub_19311B0(void *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAFEC);
  *((uint32_t *)a1 + 2) = ((uint32_t)(uintptr_t)&off_20AB000);
  *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(&off_20AADA8);
  v1 = *((uint32_t *)a1 + 12);
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_20AB014);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)a1 + 10);
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAF2C);
  *((uint32_t *)a1 + 1) = 0;
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((uint32_t *)a1 + 13);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1931270  (binary VA: 0x1931270)
// Original: sub_1931270
// ----------------------------------------------------------------------------
int sub_1931270(uint32_t *a1)
{
  return sub_1931290((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_1931280  (binary VA: 0x1931280)
// Original: sub_1931280
// ----------------------------------------------------------------------------
int sub_1931280(int a1)
{
  return sub_1931290(a1 - 8);
}

// ----------------------------------------------------------------------------
// Function: sub_1931290  (binary VA: 0x1931290)
// Original: sub_1931290
// ----------------------------------------------------------------------------
int sub_1931290(int a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAFEC);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AB000);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AADA8);
  v1 = *(uint32_t *)(a1 + 48);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AB014);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 40));
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAF2C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90((uint32_t *)(a1 + 52));
}

// ----------------------------------------------------------------------------
// Function: sub_1931340  (binary VA: 0x1931340)
// Original: sub_1931340
// ----------------------------------------------------------------------------
int sub_1931340(uint32_t *a1)
{
  return sub_1931350((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_1931350  (binary VA: 0x1931350)
// Original: sub_1931350
// ----------------------------------------------------------------------------
int sub_1931350(int a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAEAC);
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AAEC0);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AADA8);
  v1 = *(uint32_t *)(a1 + 40);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 32));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90((uint32_t *)(a1 + 44));
}

// ----------------------------------------------------------------------------
// Function: sub_19313F0  (binary VA: 0x19313f0)
// Original: sub_19313F0
// ----------------------------------------------------------------------------
int sub_19313F0(char *a1)
{
  return ((sub_1931400(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_1931400  (binary VA: 0x1931400)
// Original: sub_1931400
// ----------------------------------------------------------------------------
void sub_1931400(void *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAEAC);
  *((uint32_t *)a1 + 11) = (uint32_t)(uintptr_t)(&off_20AAEC0);
  *((uint32_t *)a1 + 1) = (uint32_t)(uintptr_t)(&off_20AADA8);
  v1 = *((uint32_t *)a1 + 10);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  *((uint32_t *)a1 + 1) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)a1 + 8);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAE6C);
  *((uint32_t *)a1 + 11) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((uint32_t *)a1 + 11);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19314A0  (binary VA: 0x19314a0)
// Original: sub_19314A0
// ----------------------------------------------------------------------------
int sub_19314A0(char *a1)
{
  return ((sub_19314B0(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19314B0  (binary VA: 0x19314b0)
// Original: sub_19314B0
// ----------------------------------------------------------------------------
void sub_19314B0(void *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAE2C);
  *((uint32_t *)a1 + 12) = (uint32_t)(uintptr_t)(&off_20AAE40);
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(&off_20AADA8);
  v1 = *((uint32_t *)a1 + 11);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)a1 + 9);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AADEC);
  *((uint32_t *)a1 + 1) = 0;
  *((uint32_t *)a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90((uint32_t *)a1 + 12);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1931560  (binary VA: 0x1931560)
// Original: sub_1931560
// ----------------------------------------------------------------------------
void sub_1931560(int a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB028);
  v1 = *(uint32_t *)(a1 + 36);
  if ( (void *)(v1 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v1 - 12));
  }
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 28));
}

// ----------------------------------------------------------------------------
// Function: sub_19315E0  (binary VA: 0x19315e0)
// Original: sub_19315E0
// ----------------------------------------------------------------------------
int sub_19315E0(uint32_t *a1)
{
  return sub_19315F0((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19315F0  (binary VA: 0x19315f0)
// Original: sub_19315F0
// ----------------------------------------------------------------------------
int sub_19315F0(int a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB0AC);
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&off_20AB0C0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB028);
  v1 = *(uint32_t *)(a1 + 44);
  if ( (void *)(v1 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v1 - 12));
  }
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 36));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB06C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&off_20AA2D0);
  return sub_1900B90((uint32_t *)(a1 + 48));
}

// ----------------------------------------------------------------------------
// Function: sub_1931690  (binary VA: 0x1931690)
// Original: sub_1931690
// ----------------------------------------------------------------------------
int sub_1931690(char *a1)
{
  return ((sub_19316A0(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19316A0  (binary VA: 0x19316a0)
// Original: sub_19316A0
// ----------------------------------------------------------------------------
void sub_19316A0(void *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB0AC);
  *((uint32_t *)a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB0C0);
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(&off_20AB028);
  v1 = *((uint32_t *)a1 + 11);
  if ( (void *)(v1 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v1 - 12));
  }
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)a1 + 9);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB06C);
  *((uint32_t *)a1 + 1) = 0;
  *((uint32_t *)a1 + 12) = (uint32_t)(uintptr_t)(&off_20AA2D0);
  sub_1900B90((uint32_t *)a1 + 12);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1931750  (binary VA: 0x1931750)
// Original: sub_1931750
// ----------------------------------------------------------------------------
int sub_1931750(uint32_t *a1)
{
  return sub_1931770((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_1931760  (binary VA: 0x1931760)
// Original: sub_1931760
// ----------------------------------------------------------------------------
int sub_1931760(int a1)
{
  return sub_1931770(a1 - 8);
}

// ----------------------------------------------------------------------------
// Function: sub_1931770  (binary VA: 0x1931770)
// Original: sub_1931770
// ----------------------------------------------------------------------------
int sub_1931770(int a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB26C);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AB280);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB028);
  v1 = *(uint32_t *)(a1 + 48);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AB294);
  if ( (void *)(v1 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v1 - 12));
  }
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 40));
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB16C);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB1AC);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AA2D0);
  return sub_1900B90((uint32_t *)(a1 + 52));
}

// ----------------------------------------------------------------------------
// Function: sub_1931820  (binary VA: 0x1931820)
// Original: sub_1931820
// ----------------------------------------------------------------------------
int sub_1931820(uint32_t *a1)
{
  return sub_1931830((char *)a1 + *(uint32_t *)(*a1 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_1931830  (binary VA: 0x1931830)
// Original: sub_1931830
// ----------------------------------------------------------------------------
int sub_1931830(int a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB12C);
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AB140);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB028);
  v1 = *(uint32_t *)(a1 + 40);
  if ( (void *)(v1 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v1 - 12));
  }
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 32));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB0EC);
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AA2D0);
  return sub_1900B90((uint32_t *)(a1 + 44));
}

// ----------------------------------------------------------------------------
// Function: sub_19318D0  (binary VA: 0x19318d0)
// Original: sub_19318D0
// ----------------------------------------------------------------------------
int sub_19318D0(char *a1)
{
  return ((sub_19318E0(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19318E0  (binary VA: 0x19318e0)
// Original: sub_19318E0
// ----------------------------------------------------------------------------
void sub_19318E0(void *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB12C);
  *((uint32_t *)a1 + 11) = (uint32_t)(uintptr_t)(&off_20AB140);
  *((uint32_t *)a1 + 1) = (uint32_t)(uintptr_t)(&off_20AB028);
  v1 = *((uint32_t *)a1 + 10);
  if ( (void *)(v1 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v1 - 12));
  }
  *((uint32_t *)a1 + 1) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)a1 + 8);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB0EC);
  *((uint32_t *)a1 + 11) = (uint32_t)(uintptr_t)(&off_20AA2D0);
  sub_1900B90((uint32_t *)a1 + 11);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1931980  (binary VA: 0x1931980)
// Original: sub_1931980
// ----------------------------------------------------------------------------
int sub_1931980(char *a1)
{
  return ((sub_19319A0(&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_1931990  (binary VA: 0x1931990)
// Original: sub_1931990
// ----------------------------------------------------------------------------
int sub_1931990(int a1)
{
  return ((sub_19319A0((void *)(a1 - 8))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19319A0  (binary VA: 0x19319a0)
// Original: sub_19319A0
// ----------------------------------------------------------------------------
void sub_19319A0(void *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB26C);
  *((uint32_t *)a1 + 2) = ((uint32_t)(uintptr_t)&off_20AB280);
  *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(&off_20AB028);
  v1 = *((uint32_t *)a1 + 12);
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_20AB294);
  if ( (void *)(v1 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v1 - 12));
  }
  *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)a1 + 10);
  *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(&off_20AB16C);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB1AC);
  *((uint32_t *)a1 + 1) = 0;
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(&off_20AA2D0);
  sub_1900B90((uint32_t *)a1 + 13);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1931A60  (binary VA: 0x1931a60)
// Original: sub_1931A60
// ----------------------------------------------------------------------------
uint32_t * sub_1931A60(uint32_t *a1, int a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB2C8);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_1903A70(a1 + 7);
  *a1 = (uint32_t)(uintptr_t)(&off_20AADA8);
  a1[8] = a2;
  a1[9] = (uint32_t)(uintptr_t)(&dword_213B814);
  return &dword_213B814;
}

// ----------------------------------------------------------------------------
// Function: sub_1931AF0  (binary VA: 0x1931af0)
// Original: sub_1931AF0
// ----------------------------------------------------------------------------
uint32_t * sub_1931AF0(uint32_t *a1, int a2)
{
  unsigned int v2;
  void *v3;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  v2 = *(uint32_t *)(a2 + 20);
  if ( v2 != 0 )
  {
    if ( v2 > *(uint32_t *)(a2 + 12) )
    {
      sub_11A9950(&v6, *(uint8_t **)(a2 + 16), *(uint8_t **)(a2 + 20));
      g4_std::string::assign_str(a1, &v6);
      v5 = (void *)(v6 - 12);
      if ( (uint32_t *)(v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
    }
    else
    {
      sub_11A9950(v7, *(uint8_t **)(a2 + 16), *(uint8_t **)(a2 + 12));
      g4_std::string::assign_str(a1, v7);
      v3 = (void *)(v7[0] - 12);
      if ( (uint32_t *)(v7[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v3);
      }
    }
  }
  else
  {
    g4_std::string::assign_str(a1, a2 + 36);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1931C80  (binary VA: 0x1931c80)
// Original: sub_1931C80
// ----------------------------------------------------------------------------
int sub_1931C80(uint32_t *a1, int a2, int a3, int64_t a4)
{
  int v4;
  int64_t v5; // rax
  int result;

  v4 = a2;
  v5 = a4;
  a1[5] = a2;
  a1[4] = a2;
  a1[6] = a3;
  if ( a4 >= 0 )
  {
    if ( SHIDWORD(a4) <= 0 )
      goto LABEL_5;
    do
    {
      do
      {
        v4 += 0x7FFFFFFF;
        v5 -= 0x7FFFFFFF;
      }
      while ( SHIDWORD(v5) > 0 );
      if ( v5 < 0 )
        break;
LABEL_5:
      ;
    }
    while ( (unsigned int)v5 > 0x7FFFFFFF );
  }
  result = v4 + v5;
  a1[5] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1931CD0  (binary VA: 0x1931cd0)
// Original: sub_1931CD0
// ----------------------------------------------------------------------------
int sub_1931CD0(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  result = a2;
  v5 = a3;
  v6 = a1[9];
  v7 = a1[8];
  v8 = a2 + *(uint32_t *)(v6 - 12);
  if ( a2 == v6 )
  {
    v9 = a2 + *(uint32_t *)(v6 - 8);
  }
  else
  {
    v8 += a3;
    v5 = 0;
    v9 = v8;
  }
  if ( (v7 & 8) != 0 )
  {
    a1[1] = a2;
    a1[2] = a2 + v5;
    a1[3] = v8;
  }
  if ( (v7 & 0x10) != 0 )
  {
    result = sub_1931C80(a1, a2, v9,g4_m128_lane<int64_t>(_mm_cvtsi32_si128(a4), 0));
    if ( (v7 & 8) == 0 )
    {
      a1[1] = v8;
      a1[2] = v8;
      a1[3] = v8;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1931D80  (binary VA: 0x1931d80)
// Original: sub_1931D80
// ----------------------------------------------------------------------------
uint32_t * sub_1931D80(uint32_t *a1, int a2, int a3)
{
  if ( a3 >= 0 && a2 != 0 )
  {
    g4_std::string::clear(a1 + 9, 0, *(uint32_t *)(a1[9] - 12), 0);
    sub_1931CD0(a1, a2, a3, 0);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1931E20  (binary VA: 0x1931e20)
// Original: sub_1931E20
// ----------------------------------------------------------------------------
int sub_1931E20(uint32_t *a1, int a2)
{
  int v2;
  unsigned int v3;

  a1[8] = a2;
  if ( (a2 & 3) != 0 )
  {
    v2 = a1[9];
    v3 = *(uint32_t *)(v2 - 12);
  }
  else
  {
    v3 = 0;
    v2 = a1[9];
  }
  return sub_1931CD0(a1, v2, 0, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_1931E60  (binary VA: 0x1931e60)
// Original: sub_1931E60
// ----------------------------------------------------------------------------
int sub_1931E60(int a1, int a2)
{
  int v2;
  int v3;
  uint8_t *v4;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  void *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v13)) > _g4_s1 ? (28u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v2 = a2;
  if ( (*(uint8_t *)(a1 + 32) & 0x10) == 0 )
    return -1;
  if ( a2 == -1 )
    return 0;
  v3 = *(uint32_t *)(*(uint32_t *)(a1 + 36) - 8);
  v4 = *(uint8_t **)(a1 + 20);
  if ( (unsigned int)(uintptr_t)(v4) >= *(uint32_t *)(a1 + 24) )
  {
    if ( v3 != 1073741820 )
    {
      v6 = 2 * v3;
      if ( v6 <= 0x1FF )
      {
        v6 = 512;
      }
      else if ( v6 > 0x3FFFFFFC )
      {
        v6 = 1073741820;
      }
      v13[0] = (int)(uintptr_t)(&dword_213B814);
      sub_1939B80(v13, v6);
      v7 = *(uint32_t *)(a1 + 16);
      if ( v7 != 0 )
        g4_std_compat::string_assign((int)(uintptr_t)(v13), *(void **)(a1 + 16), *(uint32_t *)(a1 + 24) - v7);
      v8 = v13[0];
      v9 = *(uint32_t *)(v13[0] - 12);
      v12 = v9 + 1;
      if ( (unsigned int)(v9 + 1) > *(uint32_t *)(v13[0] - 8) || *(int *)(v13[0] - 4) > 0 )
      {
        sub_1939B80(v13, v12);
        v8 = v13[0];
        v9 = *(uint32_t *)(v13[0] - 12);
      }
      *(uint8_t *)(v8 + v9) = a2;
      v10 = v13[0];
      if ( (uint32_t *)(v13[0] - 12) != dword_213B808 )
      {
        *(uint32_t *)(v13[0] - 4) = 0;
        *(uint32_t *)(v10 - 12) = v12;
        *(uint8_t *)(v10 + v12) = 0;
      }
      sub_1937C90(a1 + 36, v13);
      sub_1931CD0(
        (uint32_t *)a1,
        *(uint32_t *)(a1 + 36),
        *(uint32_t *)(a1 + 8) - *(uint32_t *)(a1 + 4),
        *(uint32_t *)(a1 + 20) - *(uint32_t *)(a1 + 16));
      v11 = (void *)(v13[0] - 12);
      if ( (uint32_t *)(v13[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v11);
      }
      goto LABEL_5;
    }
    return -1;
  }
  *v4 = a2;
LABEL_5:
  ++*(uint32_t *)(a1 + 20);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1932030  (binary VA: 0x1932030)
// Original: sub_1932030
// ----------------------------------------------------------------------------
int sub_1932030(int a1, void **a2)
{
  unsigned int v2;
  int v3;

  g4_std_compat::string_assign(a1 + 36, *a2, *((uint32_t *)*a2 - 3));
  v2 = 0;
  v3 = *(uint32_t *)(a1 + 36);
  if ( (*(uint8_t *)(a1 + 32) & 3) != 0 )
    v2 = *(uint32_t *)(v3 - 12);
  return sub_1931CD0((uint32_t *)a1, v3, 0, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_19320A0  (binary VA: 0x19320a0)
// Original: sub_19320A0
// ----------------------------------------------------------------------------
int sub_19320A0(uint32_t *a1, void **a2, int a3)
{
  int v3;
  unsigned int v4;
  int v6[3];

  *a1 = (uint32_t)(uintptr_t)(&off_20AB2C8);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_1903A70(a1 + 7);
  *a1 = (uint32_t)(uintptr_t)(&off_20AADA8);
  a1[8] = 0;
  sub_193A970((int)(uintptr_t)(a1 + 9), *a2, *((uint32_t *)*a2 - 3), (int)(uintptr_t)(v6));
  a1[8] = a3;
  if ( (a3 & 3) != 0 )
  {
    v3 = a1[9];
    v4 = *(uint32_t *)(v3 - 12);
  }
  else
  {
    v4 = 0;
    v3 = a1[9];
  }
  return sub_1931CD0(a1, v3, 0, v4);
}

// ----------------------------------------------------------------------------
// Function: sub_19321A0  (binary VA: 0x19321a0)
// Original: sub_19321A0
// ----------------------------------------------------------------------------
uint32_t * sub_19321A0(uint32_t *a1, uint32_t *a2, int64_t a3, int a4, int a5)
{
  int v5;
  bool v6;
  int v7;
  unsigned int v8;
  int64_t v10;
  int64_t v11;
  char v12;
  bool v13;
  bool v14;

  v5 = a2[8] & 8;
  v6 = ((uint8_t)a5 & a2[8] & 0x10) != 0;
  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  if ( (v5 & a5) != 0 )
  {
    v13 = false;
    if ( v6 )
      v13 = a4 != 1;
    v14 = v6 && (a5 & 8) == 0;
    if ( (a5 & 0x10) == 0 )
    {
      v7 = a2[1];
      v12 = 1;
      if ( v7 != 0 )
        goto LABEL_6;
      goto LABEL_26;
    }
  }
  else
  {
    v13 = false;
    v14 = (a5 & 8) == 0 && v6;
  }
  v7 = a2[4];
  v12 = 0;
  if ( v7 == 0 )
  {
LABEL_26:
    if ( a3 != 0 )
      return a1;
  }
LABEL_6:
  if ( v12 == 0 && !v14 && !v13 )
    return a1;
  v8 = a2[5];
  if ( v8 == 0 || v8 <= a2[3] )
  {
LABEL_13:
    if ( a4 != 1 )
      goto LABEL_14;
    goto LABEL_28;
  }
  if ( v5 == 0 )
  {
    a2[1] = v8;
    a2[2] = v8;
    a2[3] = v8;
    goto LABEL_13;
  }
  a2[3] = v8;
  if ( a4 != 1 )
  {
LABEL_14:
    v10 = a3;
    v11 = a3;
    if ( a4 == 2 )
    {
      v11 = a3 + a2[3] - v7;
      v10 = v11;
    }
    goto LABEL_16;
  }
LABEL_28:
  v11 = a3 + a2[2] - v7;
  v10 = a3 + (int)(v8 - v7);
LABEL_16:
  if ( (v12 != 0 || v13) && v11 >= 0 && v11 <= a2[3] - v7 )
  {
    a2[2] = a2[1] + v11;
    *(uint64_t *)a1 = v11;
    a1[2] = 0;
  }
  if ( !v14 && !v13 || v10 < 0 || v10 > a2[3] - v7 )
    return a1;
  sub_1931C80(a2, a2[4], a2[6], v10);
  *(uint64_t *)a1 = v10;
  a1[2] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1932470  (binary VA: 0x1932470)
// Original: sub_1932470
// ----------------------------------------------------------------------------
uint32_t * sub_1932470(uint32_t *a1, uint32_t *a2, int64_t a3, int a4, int a5)
{
  uint32_t *result;
  int v6;
  int v7;
  int v8;
  unsigned int v9;

  result = a1;
  v6 = a2[8];
  *a1 = -1;
  v7 = v6 & 8;
  a1[1] = -1;
  a1[2] = 0;
  if ( (v7 & a5) == 0 )
  {
    v8 = a2[4];
    if ( v8 != 0 )
      goto LABEL_3;
LABEL_19:
    if ( a3 != 0 )
      return result;
    goto LABEL_3;
  }
  v8 = a2[1];
  if ( v8 == 0 )
    goto LABEL_19;
LABEL_3:
  if ( (v7 & a5) != 0 || (v6 & 0x10 & (uint8_t)a5) != 0 )
  {
    v9 = a2[5];
    if ( v9 != 0 && v9 > a2[3] )
    {
      if ( (v6 & 8) == 0 )
      {
        a2[1] = v9;
        a2[2] = v9;
      }
      a2[3] = v9;
    }
    if ( a3 >= 0 && a2[3] - v8 >= a3 )
    {
      if ( (v7 & a5) != 0 )
        a2[2] = a2[1] + a3;
      if ( (v6 & 0x10 & (uint8_t)a5) != 0 )
      {
        sub_1931C80(a2, a2[4], a2[6], a3);
        result = a1;
      }
      result[2] = a4;
      *(uint64_t *)result = a3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19325B0  (binary VA: 0x19325b0)
// Original: sub_19325B0
// ----------------------------------------------------------------------------
bool sub_19325B0(int *a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2[1];
  v4 = *(uint32_t *)(v3 - 12);
  *a1 = v3;
  *(int *)((char *)a1 + v4) = a2[2];
  a1[1] = 0;
  sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(v3 - 12), 0);
  v5 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v5 - 12)) = a2[3];
  a1[3] = 0;
  a1[2] = (int)(uintptr_t)(&off_20AB2C8);
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  sub_1903A70(a1 + 9);
  a1[2] = (int)(uintptr_t)(&off_20AADA8);
  a1[10] = a3 | 8;
  a1[11] = (int)(uintptr_t)(&dword_213B814);
  return sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12), (int)(uintptr_t)(a1 + 2));
}

// ----------------------------------------------------------------------------
// Function: sub_19326D0  (binary VA: 0x19326d0)
// Original: sub_19326D0
// ----------------------------------------------------------------------------
bool sub_19326D0(int a1, int a2)
{
  sub_1900810((uint32_t *)(a1 + 48));
  *(uint32_t *)(a1 + 160) = 0;
  *(uint8_t *)(a1 + 164) = 0;
  *(uint8_t *)(a1 + 165) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AADEC);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&off_20AAE00);
  sub_19119D0(a1 + 48, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAE2C);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&off_20AAE40);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  sub_1903A70((uint32_t *)(a1 + 36));
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AADA8);
  *(uint32_t *)(a1 + 40) = a2 | 8;
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&dword_213B814);
  return sub_19119D0(a1 + 48, a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: sub_1932840  (binary VA: 0x1932840)
// Original: sub_1932840
// ----------------------------------------------------------------------------
bool sub_1932840(int *a1, int *a2, void **a3, int a4)
{
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v9[7];

  v4 = a2[1];
  *a1 = v4;
  *(int *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[2];
  a1[1] = 0;
  sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(v4 - 12), 0);
  v5 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v5 - 12)) = a2[3];
  a1[3] = 0;
  a1[2] = (int)(uintptr_t)(&off_20AB2C8);
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  sub_1903A70(a1 + 9);
  a1[2] = (int)(uintptr_t)(&off_20AADA8);
  a1[10] = 0;
  sub_193A970((int)(uintptr_t)(a1 + 11), *a3, *((uint32_t *)*a3 - 3), (int)(uintptr_t)(v9));
  a1[10] = a4 | 8;
  if ( (a4 & 3) != 0 )
  {
    v6 = a1[11];
    v7 = *(uint32_t *)(v6 - 12);
  }
  else
  {
    v7 = 0;
    v6 = a1[11];
  }
  sub_1931CD0(a1 + 2, v6, 0, v7);
  return sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12), (int)(uintptr_t)(a1 + 2));
}

// ----------------------------------------------------------------------------
// Function: sub_19329C0  (binary VA: 0x19329c0)
// Original: sub_19329C0
// ----------------------------------------------------------------------------
bool sub_19329C0(int a1, void **a2, int a3)
{
  int v3;
  unsigned int v4;
  int v6[7];

  sub_1900810((uint32_t *)(a1 + 48));
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AADEC);
  *(uint8_t *)(a1 + 164) = 0;
  *(uint8_t *)(a1 + 165) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&off_20AAE00);
  sub_19119D0(a1 + 48, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAE2C);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&off_20AAE40);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  sub_1903A70((uint32_t *)(a1 + 36));
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AADA8);
  *(uint32_t *)(a1 + 40) = 0;
  sub_193A970(a1 + 44, *a2, *((uint32_t *)*a2 - 3), (int)(uintptr_t)(v6));
  *(uint32_t *)(a1 + 40) = a3 | 8;
  if ( (a3 & 3) != 0 )
  {
    v3 = *(uint32_t *)(a1 + 44);
    v4 = *(uint32_t *)(v3 - 12);
  }
  else
  {
    v4 = 0;
    v3 = *(uint32_t *)(a1 + 44);
  }
  sub_1931CD0((uint32_t *)(a1 + 8), v3, 0, v4);
  return sub_19119D0(a1 + 48, a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: sub_1932B90  (binary VA: 0x1932b90)
// Original: sub_1932B90
// ----------------------------------------------------------------------------
int sub_1932B90(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)(a1 + *(uint32_t *)(v2 - 12)) = a2[3];
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AADA8);
  v3 = *(uint32_t *)(a1 + 44);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 36));
  v4 = a2[1];
  *(uint32_t *)a1 = v4;
  result = *(uint32_t *)(v4 - 12);
  *(uint32_t *)(a1 + result) = a2[2];
  *(uint32_t *)(a1 + 4) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1932C50  (binary VA: 0x1932c50)
// Original: sub_1932C50
// ----------------------------------------------------------------------------
uint32_t * sub_1932C50(uint32_t *a1, int a2)
{
  unsigned int v2;
  void *v3;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  v2 = *(uint32_t *)(a2 + 28);
  if ( v2 != 0 )
  {
    if ( v2 > *(uint32_t *)(a2 + 20) )
    {
      sub_11A9950(&v6, *(uint8_t **)(a2 + 24), *(uint8_t **)(a2 + 28));
      g4_std::string::assign_str(a1, &v6);
      v5 = (void *)(v6 - 12);
      if ( (uint32_t *)(v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
    }
    else
    {
      sub_11A9950(v7, *(uint8_t **)(a2 + 24), *(uint8_t **)(a2 + 20));
      g4_std::string::assign_str(a1, v7);
      v3 = (void *)(v7[0] - 12);
      if ( (uint32_t *)(v7[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v3);
      }
    }
  }
  else
  {
    g4_std::string::assign_str(a1, a2 + 44);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1932DB0  (binary VA: 0x1932db0)
// Original: sub_1932DB0
// ----------------------------------------------------------------------------
int sub_1932DB0(int a1, void **a2)
{
  unsigned int v2;
  int v3;

  g4_std_compat::string_assign(a1 + 44, *a2, *((uint32_t *)*a2 - 3));
  v2 = 0;
  v3 = *(uint32_t *)(a1 + 44);
  if ( (*(uint8_t *)(a1 + 40) & 3) != 0 )
    v2 = *(uint32_t *)(v3 - 12);
  return sub_1931CD0((uint32_t *)(a1 + 8), v3, 0, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1932E30  (binary VA: 0x1932e30)
// Original: sub_1932E30
// ----------------------------------------------------------------------------
bool sub_1932E30(int *a1, int *a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;

  v3 = a2[1];
  *a1 = v3;
  v4 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v3 - 12)));
  *v4 = a2[2];
  sub_19119D0((int)(uintptr_t)(v4), 0);
  v5 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v5 - 12)) = a2[3];
  a1[2] = 0;
  a1[1] = (int)(uintptr_t)(&off_20AB2C8);
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  sub_1903A70(a1 + 8);
  a1[1] = (int)(uintptr_t)(&off_20AADA8);
  a1[9] = a3 | 0x10;
  a1[10] = (int)(uintptr_t)(&dword_213B814);
  return sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12), (int)(uintptr_t)(a1 + 1));
}

// ----------------------------------------------------------------------------
// Function: sub_1932F40  (binary VA: 0x1932f40)
// Original: sub_1932F40
// ----------------------------------------------------------------------------
bool sub_1932F40(int a1, int a2)
{
  sub_1900810((uint32_t *)(a1 + 44));
  *(uint32_t *)(a1 + 156) = 0;
  *(uint8_t *)(a1 + 160) = 0;
  *(uint8_t *)(a1 + 161) = 0;
  *(uint32_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0(a1 + 44, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAEAC);
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AAEC0);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  sub_1903A70((uint32_t *)(a1 + 32));
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AADA8);
  *(uint32_t *)(a1 + 36) = a2 | 0x10;
  *(uint32_t *)(a1 + 40) = (uint32_t)(uintptr_t)(&dword_213B814);
  return sub_19119D0(a1 + 44, a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: sub_19330A0  (binary VA: 0x19330a0)
// Original: sub_19330A0
// ----------------------------------------------------------------------------
bool sub_19330A0(int *a1, int *a2, void **a3, int a4)
{
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  unsigned int v8;
  int v10[7];

  v4 = a2[1];
  *a1 = v4;
  v5 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v4 - 12)));
  *v5 = a2[2];
  sub_19119D0((int)(uintptr_t)(v5), 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[3];
  a1[2] = 0;
  a1[1] = (int)(uintptr_t)(&off_20AB2C8);
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  sub_1903A70(a1 + 8);
  a1[1] = (int)(uintptr_t)(&off_20AADA8);
  a1[9] = 0;
  sub_193A970((int)(uintptr_t)(a1 + 10), *a3, *((uint32_t *)*a3 - 3), (int)(uintptr_t)(v10));
  a1[9] = a4 | 0x10;
  if ( (a4 & 3) != 0 )
  {
    v7 = a1[10];
    v8 = *(uint32_t *)(v7 - 12);
  }
  else
  {
    v8 = 0;
    v7 = a1[10];
  }
  sub_1931CD0(a1 + 1, v7, 0, v8);
  return sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12), (int)(uintptr_t)(a1 + 1));
}

// ----------------------------------------------------------------------------
// Function: sub_1933210  (binary VA: 0x1933210)
// Original: sub_1933210
// ----------------------------------------------------------------------------
bool sub_1933210(int a1, void **a2, int a3)
{
  int v3;
  unsigned int v4;
  int v6[7];

  sub_1900810((uint32_t *)(a1 + 44));
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAE6C);
  *(uint8_t *)(a1 + 160) = 0;
  *(uint8_t *)(a1 + 161) = 0;
  *(uint32_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0(a1 + 44, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAEAC);
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AAEC0);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  sub_1903A70((uint32_t *)(a1 + 32));
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AADA8);
  *(uint32_t *)(a1 + 36) = 0;
  sub_193A970(a1 + 40, *a2, *((uint32_t *)*a2 - 3), (int)(uintptr_t)(v6));
  *(uint32_t *)(a1 + 36) = a3 | 0x10;
  if ( (a3 & 3) != 0 )
  {
    v3 = *(uint32_t *)(a1 + 40);
    v4 = *(uint32_t *)(v3 - 12);
  }
  else
  {
    v4 = 0;
    v3 = *(uint32_t *)(a1 + 40);
  }
  sub_1931CD0((uint32_t *)(a1 + 4), v3, 0, v4);
  return sub_19119D0(a1 + 44, a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: sub_19333D0  (binary VA: 0x19333d0)
// Original: sub_19333D0
// ----------------------------------------------------------------------------
int sub_19333D0(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)(a1 + *(uint32_t *)(v2 - 12)) = a2[3];
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AADA8);
  v3 = *(uint32_t *)(a1 + 40);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 32));
  v4 = a2[1];
  *(uint32_t *)a1 = v4;
  result = *(uint32_t *)(v4 - 12);
  *(uint32_t *)(a1 + result) = a2[2];
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1933480  (binary VA: 0x1933480)
// Original: sub_1933480
// ----------------------------------------------------------------------------
uint32_t * sub_1933480(uint32_t *a1, int a2)
{
  unsigned int v2;
  void *v3;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  v2 = *(uint32_t *)(a2 + 24);
  if ( v2 != 0 )
  {
    if ( v2 > *(uint32_t *)(a2 + 16) )
    {
      sub_11A9950(&v6, *(uint8_t **)(a2 + 20), *(uint8_t **)(a2 + 24));
      g4_std::string::assign_str(a1, &v6);
      v5 = (void *)(v6 - 12);
      if ( (uint32_t *)(v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
    }
    else
    {
      sub_11A9950(v7, *(uint8_t **)(a2 + 20), *(uint8_t **)(a2 + 16));
      g4_std::string::assign_str(a1, v7);
      v3 = (void *)(v7[0] - 12);
      if ( (uint32_t *)(v7[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v3);
      }
    }
  }
  else
  {
    g4_std::string::assign_str(a1, a2 + 40);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19335E0  (binary VA: 0x19335e0)
// Original: sub_19335E0
// ----------------------------------------------------------------------------
int sub_19335E0(int a1, void **a2)
{
  unsigned int v2;
  int v3;

  g4_std_compat::string_assign(a1 + 40, *a2, *((uint32_t *)*a2 - 3));
  v2 = 0;
  v3 = *(uint32_t *)(a1 + 40);
  if ( (*(uint8_t *)(a1 + 36) & 3) != 0 )
    v2 = *(uint32_t *)(v3 - 12);
  return sub_1931CD0((uint32_t *)(a1 + 4), v3, 0, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1933660  (binary VA: 0x1933660)
// Original: sub_1933660
// ----------------------------------------------------------------------------
bool sub_1933660(int *a1, int *a2, int a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;

  v3 = a2[2];
  *a1 = v3;
  *(int *)((char *)a1 + *(uint32_t *)(v3 - 12)) = a2[3];
  a1[1] = 0;
  sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(v3 - 12), 0);
  v4 = a2[4];
  a1[2] = v4;
  v5 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v4 - 12) + 8));
  *v5 = a2[5];
  sub_19119D0((int)(uintptr_t)(v5), 0);
  v6 = a2[1];
  *a1 = v6;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[6];
  a1[2] = a2[7];
  v7 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v7 - 12)) = a2[8];
  a1[2] = a2[9];
  a1[4] = 0;
  a1[3] = (int)(uintptr_t)(&off_20AB2C8);
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  sub_1903A70(a1 + 10);
  a1[3] = (int)(uintptr_t)(&off_20AADA8);
  a1[11] = a3;
  a1[12] = (int)(uintptr_t)(&dword_213B814);
  return sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12), (int)(uintptr_t)(a1 + 3));
}

// ----------------------------------------------------------------------------
// Function: sub_19337B0  (binary VA: 0x19337b0)
// Original: sub_19337B0
// ----------------------------------------------------------------------------
bool sub_19337B0(int a1, int a2)
{
  sub_1900810((uint32_t *)(a1 + 52));
  *(uint32_t *)(a1 + 164) = 0;
  *(uint8_t *)(a1 + 168) = 0;
  *(uint8_t *)(a1 + 169) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAF2C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AAF40);
  sub_19119D0(a1 + 52, 0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0(a1 + 52, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAFEC);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AB000);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AB014);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  sub_1903A70((uint32_t *)(a1 + 40));
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AADA8);
  *(uint32_t *)(a1 + 44) = a2;
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&dword_213B814);
  return sub_19119D0(a1 + 52, a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: sub_1933950  (binary VA: 0x1933950)
// Original: sub_1933950
// ----------------------------------------------------------------------------
bool sub_1933950(int *a1, int *a2, void **a3, int a4)
{
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v12[7];

  v4 = a2[2];
  *a1 = v4;
  *(int *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[3];
  a1[1] = 0;
  sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(v4 - 12), 0);
  v5 = a2[4];
  a1[2] = v5;
  v6 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v5 - 12) + 8));
  *v6 = a2[5];
  sub_19119D0((int)(uintptr_t)(v6), 0);
  v7 = a2[1];
  *a1 = v7;
  *(int *)((char *)a1 + *(uint32_t *)(v7 - 12)) = a2[6];
  a1[2] = a2[7];
  v8 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v8 - 12)) = a2[8];
  a1[2] = a2[9];
  a1[4] = 0;
  a1[3] = (int)(uintptr_t)(&off_20AB2C8);
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  sub_1903A70(a1 + 10);
  a1[3] = (int)(uintptr_t)(&off_20AADA8);
  a1[11] = 0;
  sub_193A970((int)(uintptr_t)(a1 + 12), *a3, *((uint32_t *)*a3 - 3), (int)(uintptr_t)(v12));
  a1[11] = a4;
  if ( (a4 & 3) != 0 )
  {
    v9 = a1[12];
    v10 = *(uint32_t *)(v9 - 12);
  }
  else
  {
    v10 = 0;
    v9 = a1[12];
  }
  sub_1931CD0(a1 + 3, v9, 0, v10);
  return sub_19119D0((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12), (int)(uintptr_t)(a1 + 3));
}

// ----------------------------------------------------------------------------
// Function: sub_1933B30  (binary VA: 0x1933b30)
// Original: sub_1933B30
// ----------------------------------------------------------------------------
bool sub_1933B30(int a1, void **a2, int a3)
{
  int v3;
  unsigned int v4;
  int v6[7];

  sub_1900810((uint32_t *)(a1 + 52));
  *(uint32_t *)(a1 + 164) = 0;
  *(uint8_t *)(a1 + 168) = 0;
  *(uint8_t *)(a1 + 169) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAF2C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AAF40);
  sub_19119D0(a1 + 52, 0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0(a1 + 52, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AAFEC);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AB000);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AB014);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  sub_1903A70((uint32_t *)(a1 + 40));
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AADA8);
  *(uint32_t *)(a1 + 44) = 0;
  sub_193A970(a1 + 48, *a2, *((uint32_t *)*a2 - 3), (int)(uintptr_t)(v6));
  *(uint32_t *)(a1 + 44) = a3;
  if ( (a3 & 3) != 0 )
  {
    v3 = *(uint32_t *)(a1 + 48);
    v4 = *(uint32_t *)(v3 - 12);
  }
  else
  {
    v4 = 0;
    v3 = *(uint32_t *)(a1 + 48);
  }
  sub_1931CD0((uint32_t *)(a1 + 12), v3, 0, v4);
  return sub_19119D0(a1 + 52, a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: sub_1933D40  (binary VA: 0x1933d40)
// Original: sub_1933D40
// ----------------------------------------------------------------------------
int sub_1933D40(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)(a1 + *(uint32_t *)(v2 - 12)) = a2[8];
  *(uint32_t *)(a1 + 8) = a2[9];
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AADA8);
  v3 = *(uint32_t *)(a1 + 48);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 40));
  v4 = a2[1];
  *(uint32_t *)a1 = v4;
  *(uint32_t *)(a1 + *(uint32_t *)(v4 - 12)) = a2[6];
  *(uint32_t *)(a1 + 8) = a2[7];
  v5 = a2[4];
  *(uint32_t *)(a1 + 8) = v5;
  *(uint32_t *)(a1 + *(uint32_t *)(v5 - 12) + 8) = a2[5];
  v6 = a2[2];
  *(uint32_t *)a1 = v6;
  result = *(uint32_t *)(v6 - 12);
  *(uint32_t *)(a1 + result) = a2[3];
  *(uint32_t *)(a1 + 4) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1933E20  (binary VA: 0x1933e20)
// Original: sub_1933E20
// ----------------------------------------------------------------------------
uint32_t * sub_1933E20(uint32_t *a1, int a2)
{
  unsigned int v2;
  void *v3;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  v2 = *(uint32_t *)(a2 + 32);
  if ( v2 != 0 )
  {
    if ( v2 > *(uint32_t *)(a2 + 24) )
    {
      sub_11A9950(&v6, *(uint8_t **)(a2 + 28), *(uint8_t **)(a2 + 32));
      g4_std::string::assign_str(a1, &v6);
      v5 = (void *)(v6 - 12);
      if ( (uint32_t *)(v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
    }
    else
    {
      sub_11A9950(v7, *(uint8_t **)(a2 + 28), *(uint8_t **)(a2 + 24));
      g4_std::string::assign_str(a1, v7);
      v3 = (void *)(v7[0] - 12);
      if ( (uint32_t *)(v7[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v3);
      }
    }
  }
  else
  {
    g4_std::string::assign_str(a1, a2 + 48);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1933F80  (binary VA: 0x1933f80)
// Original: sub_1933F80
// ----------------------------------------------------------------------------
int sub_1933F80(int a1, void **a2)
{
  unsigned int v2;
  int v3;

  g4_std_compat::string_assign(a1 + 48, *a2, *((uint32_t *)*a2 - 3));
  v2 = 0;
  v3 = *(uint32_t *)(a1 + 48);
  if ( (*(uint8_t *)(a1 + 44) & 3) != 0 )
    v2 = *(uint32_t *)(v3 - 12);
  return sub_1931CD0((uint32_t *)(a1 + 12), v3, 0, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1934000  (binary VA: 0x1934000)
// Original: sub_1934000
// ----------------------------------------------------------------------------
void * sub_1934000(uint32_t *a1, int a2)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB308);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_1903A70(a1 + 7);
  *a1 = (uint32_t)(uintptr_t)(&off_20AB028);
  a1[8] = a2;
  a1[9] = (uint32_t)(uintptr_t)(&unk_213B8B4);
  return &unk_213B8B4;
}

// ----------------------------------------------------------------------------
// Function: sub_1934090  (binary VA: 0x1934090)
// Original: sub_1934090
// ----------------------------------------------------------------------------
uint32_t * sub_1934090(uint32_t *a1, int a2)
{
  unsigned int v2;
  void *v3;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  *a1 = (uint32_t)(uintptr_t)(&unk_213B8B4);
  v2 = *(uint32_t *)(a2 + 20);
  if ( v2 != 0 )
  {
    if ( v2 > *(uint32_t *)(a2 + 12) )
    {
      sub_194FD10((int)(uintptr_t)(&v7), *(wchar_t **)(a2 + 16), *(uint32_t *)(a2 + 20), (int)(uintptr_t)(&v6));
      sub_194F8F0(a1, &v7);
      v5 = (void *)(v7 - 12);
      if ( (void *)(v7 - 12) != &unk_213B8A8
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        sub_194E070(v5);
      }
    }
    else
    {
      sub_194FD10((int)(uintptr_t)(v8), *(wchar_t **)(a2 + 16), *(uint32_t *)(a2 + 12), (int)(uintptr_t)(&v6) + 1);
      sub_194F8F0(a1, v8);
      v3 = (void *)(v8[0] - 12);
      if ( (void *)(v8[0] - 12) != &unk_213B8A8
        && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        sub_194E070(v3);
      }
    }
  }
  else
  {
    sub_194F8F0(a1, a2 + 36);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1934220  (binary VA: 0x1934220)
// Original: sub_1934220
// ----------------------------------------------------------------------------
int sub_1934220(uint32_t *a1, int a2, int a3, int64_t a4)
{
  int v4;
  int64_t v5; // rax
  int result;

  v4 = a2;
  v5 = a4;
  a1[5] = a2;
  a1[4] = a2;
  a1[6] = a3;
  if ( a4 >= 0 )
  {
    if ( SHIDWORD(a4) <= 0 )
      goto LABEL_5;
    do
    {
      do
      {
        v4 -= 4;
        v5 -= 0x7FFFFFFF;
      }
      while ( SHIDWORD(v5) > 0 );
      if ( v5 < 0 )
        break;
LABEL_5:
      ;
    }
    while ( (unsigned int)v5 > 0x7FFFFFFF );
  }
  result = v4 + 4 * v5;
  a1[5] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1934270  (binary VA: 0x1934270)
// Original: sub_1934270
// ----------------------------------------------------------------------------
int sub_1934270(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  bool v9;
  int v10;

  result = a2;
  v5 = a3;
  v9 = (a1[8] & 8) != 0;
  v10 = a1[8] & 0x10;
  v6 = a1[9];
  v7 = a2 + 4 * *(uint32_t *)(v6 - 12);
  if ( a2 == v6 )
  {
    v8 = a2 + 4 * *(uint32_t *)(v6 - 8);
  }
  else
  {
    v7 += 4 * a3;
    v5 = 0;
    v8 = v7;
  }
  if ( (a1[8] & 8) != 0 )
  {
    a1[1] = a2;
    a1[2] = a2 + 4 * v5;
    a1[3] = v7;
  }
  if ( v10 != 0 )
  {
    result = sub_1934220(a1, a2, v8,g4_m128_lane<int64_t>(_mm_cvtsi32_si128(a4), 0));
    if ( !v9 )
    {
      a1[1] = v7;
      a1[2] = v7;
      a1[3] = v7;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1934320  (binary VA: 0x1934320)
// Original: sub_1934320
// ----------------------------------------------------------------------------
uint32_t * sub_1934320(uint32_t *a1, int a2, int a3)
{
  if ( a3 >= 0 && a2 != 0 )
  {
    sub_194E130(a1 + 9, 0, *(uint32_t *)(a1[9] - 12), 0);
    sub_1934270(a1, a2, a3, 0);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19343C0  (binary VA: 0x19343c0)
// Original: sub_19343C0
// ----------------------------------------------------------------------------
int sub_19343C0(uint32_t *a1, int a2)
{
  int v2;
  unsigned int v3;

  a1[8] = a2;
  if ( (a2 & 3) != 0 )
  {
    v2 = a1[9];
    v3 = *(uint32_t *)(v2 - 12);
  }
  else
  {
    v3 = 0;
    v2 = a1[9];
  }
  return sub_1934270(a1, v2, 0, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_1934400  (binary VA: 0x1934400)
// Original: sub_1934400
// ----------------------------------------------------------------------------
int sub_1934400(int a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  void *v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v12)) > _g4_s1 ? (28u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v2 = a2;
  if ( (*(uint8_t *)(a1 + 32) & 0x10) == 0 )
    return -1;
  if ( a2 == -1 )
    return 0;
  v3 = *(uint32_t *)(*(uint32_t *)(a1 + 36) - 8);
  v4 = *(uint32_t **)(a1 + 20);
  if ( (unsigned int)(uintptr_t)(v4) >= *(uint32_t *)(a1 + 24) )
  {
    if ( v3 != 268435454 )
    {
      v6 = 2 * v3;
      if ( v6 <= 0x1FF )
      {
        v6 = 512;
      }
      else if ( v6 > 0xFFFFFFE )
      {
        v6 = 268435454;
      }
      v12[0] = (int)(uintptr_t)(&unk_213B8B4);
      sub_194F140(v12, v6);
      v7 = *(uint32_t *)(a1 + 16);
      if ( v7 != 0 )
        sub_194E3B0((int)(uintptr_t)(v12), *(wchar_t **)(a1 + 16), (*(uint32_t *)(a1 + 24) - v7) >> 2);
      v8 = v12[0];
      v9 = *(uint32_t *)(v12[0] - 12);
      v11 = v9 + 1;
      if ( (unsigned int)(v9 + 1) > *(uint32_t *)(v12[0] - 8) || *(int *)(v12[0] - 4) > 0 )
      {
        sub_194F140(v12, v11);
        v8 = v12[0];
        v9 = *(uint32_t *)(v12[0] - 12);
      }
      *(uint32_t *)(v8 + 4 * v9) = a2;
      if ( (void *)(v8 - 12) != &unk_213B8A8 )
      {
        *(uint32_t *)(v8 - 4) = 0;
        *(uint32_t *)(v8 - 12) = v11;
        *(uint32_t *)(v8 + 4 * v11) = 0;
      }
      sub_194D1C0(a1 + 36, v12);
      sub_1934270(
        (uint32_t *)a1,
        *(uint32_t *)(a1 + 36),
        (*(uint32_t *)(a1 + 8) - *(uint32_t *)(a1 + 4)) >> 2,
        (*(uint32_t *)(a1 + 20) - *(uint32_t *)(a1 + 16)) >> 2);
      v10 = (void *)(v12[0] - 12);
      if ( (void *)(v12[0] - 12) != &unk_213B8A8
        && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        sub_194E070(v10);
      }
      v4 = *(uint32_t **)(a1 + 20);
      goto LABEL_5;
    }
    return -1;
  }
  *v4 = a2;
LABEL_5:
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v4 + 1);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_19345D0  (binary VA: 0x19345d0)
// Original: sub_19345D0
// ----------------------------------------------------------------------------
int sub_19345D0(int a1, wchar_t **a2)
{
  unsigned int v2;
  int v3;

  sub_194E3B0(a1 + 36, *a2, *(*a2 - 3));
  v2 = 0;
  v3 = *(uint32_t *)(a1 + 36);
  if ( (*(uint8_t *)(a1 + 32) & 3) != 0 )
    v2 = *(uint32_t *)(v3 - 12);
  return sub_1934270((uint32_t *)a1, v3, 0, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1934640  (binary VA: 0x1934640)
// Original: sub_1934640
// ----------------------------------------------------------------------------
int sub_1934640(uint32_t *a1, wchar_t **a2, int a3)
{
  int v3;
  unsigned int v4;
  int v6[3];

  *a1 = (uint32_t)(uintptr_t)(&off_20AB308);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_1903A70(a1 + 7);
  *a1 = (uint32_t)(uintptr_t)(&off_20AB028);
  a1[8] = 0;
  sub_1950070((int)(uintptr_t)(a1 + 9), *a2, *(*a2 - 3), (int)(uintptr_t)(v6));
  a1[8] = a3;
  if ( (a3 & 3) != 0 )
  {
    v3 = a1[9];
    v4 = *(uint32_t *)(v3 - 12);
  }
  else
  {
    v4 = 0;
    v3 = a1[9];
  }
  return sub_1934270(a1, v3, 0, v4);
}

// ----------------------------------------------------------------------------
// Function: sub_1934740  (binary VA: 0x1934740)
// Original: sub_1934740
// ----------------------------------------------------------------------------
uint32_t * sub_1934740(uint32_t *a1, uint32_t *a2, int64_t a3, int a4, int a5)
{
  int v5;
  bool v6;
  int v7;
  unsigned int v8;
  int v10;
  int64_t v11;
  int64_t v12;
  char v13;
  bool v14;
  bool v15;

  v5 = a2[8] & 8;
  v6 = ((uint8_t)a5 & a2[8] & 0x10) != 0;
  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  if ( (v5 & a5) != 0 )
  {
    v14 = false;
    if ( v6 )
      v14 = a4 != 1;
    v15 = v6 && (a5 & 8) == 0;
    if ( (a5 & 0x10) == 0 )
    {
      v7 = a2[1];
      v13 = 1;
      if ( v7 != 0 )
        goto LABEL_6;
      goto LABEL_26;
    }
  }
  else
  {
    v14 = false;
    v15 = (a5 & 8) == 0 && v6;
  }
  v7 = a2[4];
  v13 = 0;
  if ( v7 == 0 )
  {
LABEL_26:
    if ( a3 != 0 )
      return a1;
  }
LABEL_6:
  if ( v13 == 0 && !v15 && !v14 )
    return a1;
  v8 = a2[5];
  if ( v8 == 0 || v8 <= a2[3] )
  {
LABEL_13:
    if ( a4 != 1 )
      goto LABEL_14;
    goto LABEL_28;
  }
  if ( v5 == 0 )
  {
    a2[1] = v8;
    a2[2] = v8;
    a2[3] = v8;
    goto LABEL_13;
  }
  a2[3] = v8;
  if ( a4 != 1 )
  {
LABEL_14:
    v11 = a3;
    v12 = a3;
    if ( a4 == 2 )
    {
      v12 = a3 + ((a2[3] - v7) >> 2);
      v11 = v12;
    }
    goto LABEL_16;
  }
LABEL_28:
  v12 = a3 + ((a2[2] - v7) >> 2);
  v11 = a3 + ((int)(v8 - v7) >> 2);
LABEL_16:
  if ( (v13 != 0 || v14) && v12 >= 0 && v12 <= __SPAIR64__((a2[3] - v7) >> 31, (a2[3] - v7) >> 2) )
  {
    v10 = a2[1];
    a1[2] = 0;
    a2[2] = v10 + 4 * v12;
    *(uint64_t *)a1 = v12;
  }
  if ( !v15 && !v14 || v11 < 0 || v11 > __SPAIR64__((a2[3] - v7) >> 31, (a2[3] - v7) >> 2) )
    return a1;
  sub_1934220(a2, a2[4], a2[6], v11);
  *(uint64_t *)a1 = v11;
  a1[2] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1934A20  (binary VA: 0x1934a20)
// Original: sub_1934A20
// ----------------------------------------------------------------------------
uint32_t * sub_1934A20(uint32_t *a1, uint32_t *a2, int64_t a3, int a4, int a5)
{
  uint32_t *result;
  int v6;
  int v7;
  int v8;
  unsigned int v9;

  result = a1;
  v6 = a2[8];
  *a1 = -1;
  v7 = v6 & 8;
  a1[1] = -1;
  a1[2] = 0;
  if ( (v7 & a5) == 0 )
  {
    v8 = a2[4];
    if ( v8 != 0 )
      goto LABEL_3;
LABEL_19:
    if ( a3 != 0 )
      return result;
    goto LABEL_3;
  }
  v8 = a2[1];
  if ( v8 == 0 )
    goto LABEL_19;
LABEL_3:
  if ( (v7 & a5) != 0 || (v6 & 0x10 & (uint8_t)a5) != 0 )
  {
    v9 = a2[5];
    if ( v9 != 0 && v9 > a2[3] )
    {
      if ( (v6 & 8) == 0 )
      {
        a2[1] = v9;
        a2[2] = v9;
      }
      a2[3] = v9;
    }
    if ( a3 >= 0 && __SPAIR64__((a2[3] - v8) >> 31, (a2[3] - v8) >> 2) >= a3 )
    {
      if ( (v7 & a5) != 0 )
        a2[2] = a2[1] + 4 * a3;
      if ( (v6 & 0x10 & (uint8_t)a5) != 0 )
      {
        sub_1934220(a2, a2[4], a2[6], a3);
        result = a1;
      }
      result[2] = a4;
      *(uint64_t *)result = a3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1934B70  (binary VA: 0x1934b70)
// Original: sub_1934B70
// ----------------------------------------------------------------------------
bool sub_1934B70(int *a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2[1];
  v4 = *(uint32_t *)(v3 - 12);
  *a1 = v3;
  *(int *)((char *)a1 + v4) = a2[2];
  a1[1] = 0;
  sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(v3 - 12), 0);
  v5 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v5 - 12)) = a2[3];
  a1[3] = 0;
  a1[2] = (int)(uintptr_t)(&off_20AB308);
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  sub_1903A70(a1 + 9);
  a1[2] = (int)(uintptr_t)(&off_20AB028);
  a1[10] = a3 | 8;
  a1[11] = (int)(uintptr_t)(&unk_213B8B4);
  return sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12), (int)(uintptr_t)(a1 + 2));
}

// ----------------------------------------------------------------------------
// Function: sub_1934C90  (binary VA: 0x1934c90)
// Original: sub_1934C90
// ----------------------------------------------------------------------------
bool sub_1934C90(int a1, int a2)
{
  sub_1900810((uint32_t *)(a1 + 48));
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)(a1 + 164) = 0;
  *(uint8_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB06C);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&off_20AB080);
  sub_1912230(a1 + 48, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB0AC);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&off_20AB0C0);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB308);
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  sub_1903A70((uint32_t *)(a1 + 36));
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB028);
  *(uint32_t *)(a1 + 40) = a2 | 8;
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&unk_213B8B4);
  return sub_1912230(a1 + 48, a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: sub_1934E00  (binary VA: 0x1934e00)
// Original: sub_1934E00
// ----------------------------------------------------------------------------
bool sub_1934E00(int *a1, int *a2, wchar_t **a3, int a4)
{
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v9[7];

  v4 = a2[1];
  *a1 = v4;
  *(int *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[2];
  a1[1] = 0;
  sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(v4 - 12), 0);
  v5 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v5 - 12)) = a2[3];
  a1[3] = 0;
  a1[2] = (int)(uintptr_t)(&off_20AB308);
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  sub_1903A70(a1 + 9);
  a1[2] = (int)(uintptr_t)(&off_20AB028);
  a1[10] = 0;
  sub_1950070((int)(uintptr_t)(a1 + 11), *a3, *(*a3 - 3), (int)(uintptr_t)(v9));
  a1[10] = a4 | 8;
  if ( (a4 & 3) != 0 )
  {
    v6 = a1[11];
    v7 = *(uint32_t *)(v6 - 12);
  }
  else
  {
    v7 = 0;
    v6 = a1[11];
  }
  sub_1934270(a1 + 2, v6, 0, v7);
  return sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12), (int)(uintptr_t)(a1 + 2));
}

// ----------------------------------------------------------------------------
// Function: sub_1934F80  (binary VA: 0x1934f80)
// Original: sub_1934F80
// ----------------------------------------------------------------------------
bool sub_1934F80(int a1, wchar_t **a2, int a3)
{
  int v3;
  unsigned int v4;
  int v6[7];

  sub_1900810((uint32_t *)(a1 + 48));
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB06C);
  *(uint32_t *)(a1 + 164) = 0;
  *(uint8_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&off_20AB080);
  sub_1912230(a1 + 48, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB0AC);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&off_20AB0C0);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB308);
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  sub_1903A70((uint32_t *)(a1 + 36));
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB028);
  *(uint32_t *)(a1 + 40) = 0;
  sub_1950070(a1 + 44, *a2, *(*a2 - 3), (int)(uintptr_t)(v6));
  *(uint32_t *)(a1 + 40) = a3 | 8;
  if ( (a3 & 3) != 0 )
  {
    v3 = *(uint32_t *)(a1 + 44);
    v4 = *(uint32_t *)(v3 - 12);
  }
  else
  {
    v4 = 0;
    v3 = *(uint32_t *)(a1 + 44);
  }
  sub_1934270((uint32_t *)(a1 + 8), v3, 0, v4);
  return sub_1912230(a1 + 48, a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: sub_1935150  (binary VA: 0x1935150)
// Original: sub_1935150
// ----------------------------------------------------------------------------
int sub_1935150(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)(a1 + *(uint32_t *)(v2 - 12)) = a2[3];
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB028);
  v3 = *(uint32_t *)(a1 + 44);
  if ( (void *)(v3 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v3 - 12));
  }
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 36));
  v4 = a2[1];
  *(uint32_t *)a1 = v4;
  result = *(uint32_t *)(v4 - 12);
  *(uint32_t *)(a1 + result) = a2[2];
  *(uint32_t *)(a1 + 4) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1935210  (binary VA: 0x1935210)
// Original: sub_1935210
// ----------------------------------------------------------------------------
uint32_t * sub_1935210(uint32_t *a1, int a2)
{
  unsigned int v2;
  void *v3;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  *a1 = (uint32_t)(uintptr_t)(&unk_213B8B4);
  v2 = *(uint32_t *)(a2 + 28);
  if ( v2 != 0 )
  {
    if ( v2 > *(uint32_t *)(a2 + 20) )
    {
      sub_194FD10((int)(uintptr_t)(&v7), *(wchar_t **)(a2 + 24), *(uint32_t *)(a2 + 28), (int)(uintptr_t)(&v6));
      sub_194F8F0(a1, &v7);
      v5 = (void *)(v7 - 12);
      if ( (void *)(v7 - 12) != &unk_213B8A8
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        sub_194E070(v5);
      }
    }
    else
    {
      sub_194FD10((int)(uintptr_t)(v8), *(wchar_t **)(a2 + 24), *(uint32_t *)(a2 + 20), (int)(uintptr_t)(&v6) + 1);
      sub_194F8F0(a1, v8);
      v3 = (void *)(v8[0] - 12);
      if ( (void *)(v8[0] - 12) != &unk_213B8A8
        && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        sub_194E070(v3);
      }
    }
  }
  else
  {
    sub_194F8F0(a1, a2 + 44);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1935370  (binary VA: 0x1935370)
// Original: sub_1935370
// ----------------------------------------------------------------------------
int sub_1935370(int a1, wchar_t **a2)
{
  unsigned int v2;
  int v3;

  sub_194E3B0(a1 + 44, *a2, *(*a2 - 3));
  v2 = 0;
  v3 = *(uint32_t *)(a1 + 44);
  if ( (*(uint8_t *)(a1 + 40) & 3) != 0 )
    v2 = *(uint32_t *)(v3 - 12);
  return sub_1934270((uint32_t *)(a1 + 8), v3, 0, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_19353F0  (binary VA: 0x19353f0)
// Original: sub_19353F0
// ----------------------------------------------------------------------------
bool sub_19353F0(int *a1, int *a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;

  v3 = a2[1];
  *a1 = v3;
  v4 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v3 - 12)));
  *v4 = a2[2];
  sub_1912230((int)(uintptr_t)(v4), 0);
  v5 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v5 - 12)) = a2[3];
  a1[2] = 0;
  a1[1] = (int)(uintptr_t)(&off_20AB308);
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  sub_1903A70(a1 + 8);
  a1[1] = (int)(uintptr_t)(&off_20AB028);
  a1[9] = a3 | 0x10;
  a1[10] = (int)(uintptr_t)(&unk_213B8B4);
  return sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12), (int)(uintptr_t)(a1 + 1));
}

// ----------------------------------------------------------------------------
// Function: sub_1935500  (binary VA: 0x1935500)
// Original: sub_1935500
// ----------------------------------------------------------------------------
bool sub_1935500(int a1, int a2)
{
  sub_1900810((uint32_t *)(a1 + 44));
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint8_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB0EC);
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AB100);
  sub_1912230(a1 + 44, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB12C);
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AB140);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB308);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  sub_1903A70((uint32_t *)(a1 + 32));
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB028);
  *(uint32_t *)(a1 + 36) = a2 | 0x10;
  *(uint32_t *)(a1 + 40) = (uint32_t)(uintptr_t)(&unk_213B8B4);
  return sub_1912230(a1 + 44, a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: sub_1935660  (binary VA: 0x1935660)
// Original: sub_1935660
// ----------------------------------------------------------------------------
bool sub_1935660(int *a1, int *a2, wchar_t **a3, int a4)
{
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  unsigned int v8;
  int v10[7];

  v4 = a2[1];
  *a1 = v4;
  v5 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v4 - 12)));
  *v5 = a2[2];
  sub_1912230((int)(uintptr_t)(v5), 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[3];
  a1[2] = 0;
  a1[1] = (int)(uintptr_t)(&off_20AB308);
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  sub_1903A70(a1 + 8);
  a1[1] = (int)(uintptr_t)(&off_20AB028);
  a1[9] = 0;
  sub_1950070((int)(uintptr_t)(a1 + 10), *a3, *(*a3 - 3), (int)(uintptr_t)(v10));
  a1[9] = a4 | 0x10;
  if ( (a4 & 3) != 0 )
  {
    v7 = a1[10];
    v8 = *(uint32_t *)(v7 - 12);
  }
  else
  {
    v8 = 0;
    v7 = a1[10];
  }
  sub_1934270(a1 + 1, v7, 0, v8);
  return sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12), (int)(uintptr_t)(a1 + 1));
}

// ----------------------------------------------------------------------------
// Function: sub_19357D0  (binary VA: 0x19357d0)
// Original: sub_19357D0
// ----------------------------------------------------------------------------
bool sub_19357D0(int a1, wchar_t **a2, int a3)
{
  int v3;
  unsigned int v4;
  int v6[7];

  sub_1900810((uint32_t *)(a1 + 44));
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB0EC);
  *(uint32_t *)(a1 + 160) = 0;
  *(uint8_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AB100);
  sub_1912230(a1 + 44, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB12C);
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(&off_20AB140);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB308);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  sub_1903A70((uint32_t *)(a1 + 32));
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB028);
  *(uint32_t *)(a1 + 36) = 0;
  sub_1950070(a1 + 40, *a2, *(*a2 - 3), (int)(uintptr_t)(v6));
  *(uint32_t *)(a1 + 36) = a3 | 0x10;
  if ( (a3 & 3) != 0 )
  {
    v3 = *(uint32_t *)(a1 + 40);
    v4 = *(uint32_t *)(v3 - 12);
  }
  else
  {
    v4 = 0;
    v3 = *(uint32_t *)(a1 + 40);
  }
  sub_1934270((uint32_t *)(a1 + 4), v3, 0, v4);
  return sub_1912230(a1 + 44, a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: sub_1935990  (binary VA: 0x1935990)
// Original: sub_1935990
// ----------------------------------------------------------------------------
int sub_1935990(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int result;

  v2 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)(a1 + *(uint32_t *)(v2 - 12)) = a2[3];
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB028);
  v3 = *(uint32_t *)(a1 + 40);
  if ( (void *)(v3 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v3 - 12));
  }
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 32));
  v4 = a2[1];
  *(uint32_t *)a1 = v4;
  result = *(uint32_t *)(v4 - 12);
  *(uint32_t *)(a1 + result) = a2[2];
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1935A40  (binary VA: 0x1935a40)
// Original: sub_1935A40
// ----------------------------------------------------------------------------
uint32_t * sub_1935A40(uint32_t *a1, int a2)
{
  unsigned int v2;
  void *v3;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  *a1 = (uint32_t)(uintptr_t)(&unk_213B8B4);
  v2 = *(uint32_t *)(a2 + 24);
  if ( v2 != 0 )
  {
    if ( v2 > *(uint32_t *)(a2 + 16) )
    {
      sub_194FD10((int)(uintptr_t)(&v7), *(wchar_t **)(a2 + 20), *(uint32_t *)(a2 + 24), (int)(uintptr_t)(&v6));
      sub_194F8F0(a1, &v7);
      v5 = (void *)(v7 - 12);
      if ( (void *)(v7 - 12) != &unk_213B8A8
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        sub_194E070(v5);
      }
    }
    else
    {
      sub_194FD10((int)(uintptr_t)(v8), *(wchar_t **)(a2 + 20), *(uint32_t *)(a2 + 16), (int)(uintptr_t)(&v6) + 1);
      sub_194F8F0(a1, v8);
      v3 = (void *)(v8[0] - 12);
      if ( (void *)(v8[0] - 12) != &unk_213B8A8
        && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        sub_194E070(v3);
      }
    }
  }
  else
  {
    sub_194F8F0(a1, a2 + 40);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1935BA0  (binary VA: 0x1935ba0)
// Original: sub_1935BA0
// ----------------------------------------------------------------------------
int sub_1935BA0(int a1, wchar_t **a2)
{
  unsigned int v2;
  int v3;

  sub_194E3B0(a1 + 40, *a2, *(*a2 - 3));
  v2 = 0;
  v3 = *(uint32_t *)(a1 + 40);
  if ( (*(uint8_t *)(a1 + 36) & 3) != 0 )
    v2 = *(uint32_t *)(v3 - 12);
  return sub_1934270((uint32_t *)(a1 + 4), v3, 0, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1935C20  (binary VA: 0x1935c20)
// Original: sub_1935C20
// ----------------------------------------------------------------------------
bool sub_1935C20(int *a1, int *a2, int a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;

  v3 = a2[2];
  *a1 = v3;
  *(int *)((char *)a1 + *(uint32_t *)(v3 - 12)) = a2[3];
  a1[1] = 0;
  sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(v3 - 12), 0);
  v4 = a2[4];
  a1[2] = v4;
  v5 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v4 - 12) + 8));
  *v5 = a2[5];
  sub_1912230((int)(uintptr_t)(v5), 0);
  v6 = a2[1];
  *a1 = v6;
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12)) = a2[6];
  a1[2] = a2[7];
  v7 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v7 - 12)) = a2[8];
  a1[2] = a2[9];
  a1[4] = 0;
  a1[3] = (int)(uintptr_t)(&off_20AB308);
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  sub_1903A70(a1 + 10);
  a1[3] = (int)(uintptr_t)(&off_20AB028);
  a1[11] = a3;
  a1[12] = (int)(uintptr_t)(&unk_213B8B4);
  return sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12), (int)(uintptr_t)(a1 + 3));
}

// ----------------------------------------------------------------------------
// Function: sub_1935D70  (binary VA: 0x1935d70)
// Original: sub_1935D70
// ----------------------------------------------------------------------------
bool sub_1935D70(int a1, int a2)
{
  sub_1900810((uint32_t *)(a1 + 52));
  *(uint32_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint8_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)(a1 + 188) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB1AC);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AB1C0);
  sub_1912230(a1 + 52, 0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB16C);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AB180);
  sub_1912230(a1 + 52, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB26C);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AB280);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AB294);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB308);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  sub_1903A70((uint32_t *)(a1 + 40));
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB028);
  *(uint32_t *)(a1 + 44) = a2;
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(&unk_213B8B4);
  return sub_1912230(a1 + 52, a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: sub_1935F10  (binary VA: 0x1935f10)
// Original: sub_1935F10
// ----------------------------------------------------------------------------
bool sub_1935F10(int *a1, int *a2, wchar_t **a3, int a4)
{
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v12[7];

  v4 = a2[2];
  *a1 = v4;
  *(int *)((char *)a1 + *(uint32_t *)(v4 - 12)) = a2[3];
  a1[1] = 0;
  sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(v4 - 12), 0);
  v5 = a2[4];
  a1[2] = v5;
  v6 = (uint32_t *)((int *)((char *)a1 + *(uint32_t *)(v5 - 12) + 8));
  *v6 = a2[5];
  sub_1912230((int)(uintptr_t)(v6), 0);
  v7 = a2[1];
  *a1 = v7;
  *(int *)((char *)a1 + *(uint32_t *)(v7 - 12)) = a2[6];
  a1[2] = a2[7];
  v8 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(uint32_t *)(v8 - 12)) = a2[8];
  a1[2] = a2[9];
  a1[4] = 0;
  a1[3] = (int)(uintptr_t)(&off_20AB308);
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  sub_1903A70(a1 + 10);
  a1[3] = (int)(uintptr_t)(&off_20AB028);
  a1[11] = 0;
  sub_1950070((int)(uintptr_t)(a1 + 12), *a3, *(*a3 - 3), (int)(uintptr_t)(v12));
  a1[11] = a4;
  if ( (a4 & 3) != 0 )
  {
    v9 = a1[12];
    v10 = *(uint32_t *)(v9 - 12);
  }
  else
  {
    v10 = 0;
    v9 = a1[12];
  }
  sub_1934270(a1 + 3, v9, 0, v10);
  return sub_1912230((int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12), (int)(uintptr_t)(a1 + 3));
}

// ----------------------------------------------------------------------------
// Function: sub_19360F0  (binary VA: 0x19360f0)
// Original: sub_19360F0
// ----------------------------------------------------------------------------
bool sub_19360F0(int a1, wchar_t **a2, int a3)
{
  int v3;
  unsigned int v4;
  int v6[7];

  sub_1900810((uint32_t *)(a1 + 52));
  *(uint32_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint8_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)(a1 + 188) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB1AC);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AB1C0);
  sub_1912230(a1 + 52, 0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_20AB16C);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AB180);
  sub_1912230(a1 + 52, 0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB26C);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20AB280);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_20AB294);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB308);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  sub_1903A70((uint32_t *)(a1 + 40));
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB028);
  *(uint32_t *)(a1 + 44) = 0;
  sub_1950070(a1 + 48, *a2, *(*a2 - 3), (int)(uintptr_t)(v6));
  *(uint32_t *)(a1 + 44) = a3;
  if ( (a3 & 3) != 0 )
  {
    v3 = *(uint32_t *)(a1 + 48);
    v4 = *(uint32_t *)(v3 - 12);
  }
  else
  {
    v4 = 0;
    v3 = *(uint32_t *)(a1 + 48);
  }
  sub_1934270((uint32_t *)(a1 + 12), v3, 0, v4);
  return sub_1912230(a1 + 52, a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: sub_1936300  (binary VA: 0x1936300)
// Original: sub_1936300
// ----------------------------------------------------------------------------
int sub_1936300(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = *a2;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)(a1 + *(uint32_t *)(v2 - 12)) = a2[8];
  *(uint32_t *)(a1 + 8) = a2[9];
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB028);
  v3 = *(uint32_t *)(a1 + 48);
  if ( (void *)(v3 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v3 - 12));
  }
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 40));
  v4 = a2[1];
  *(uint32_t *)a1 = v4;
  *(uint32_t *)(a1 + *(uint32_t *)(v4 - 12)) = a2[6];
  *(uint32_t *)(a1 + 8) = a2[7];
  v5 = a2[4];
  *(uint32_t *)(a1 + 8) = v5;
  *(uint32_t *)(a1 + *(uint32_t *)(v5 - 12) + 8) = a2[5];
  v6 = a2[2];
  *(uint32_t *)a1 = v6;
  result = *(uint32_t *)(v6 - 12);
  *(uint32_t *)(a1 + result) = a2[3];
  *(uint32_t *)(a1 + 4) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19363E0  (binary VA: 0x19363e0)
// Original: sub_19363E0
// ----------------------------------------------------------------------------
uint32_t * sub_19363E0(uint32_t *a1, int a2)
{
  unsigned int v2;
  void *v3;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  *a1 = (uint32_t)(uintptr_t)(&unk_213B8B4);
  v2 = *(uint32_t *)(a2 + 32);
  if ( v2 != 0 )
  {
    if ( v2 > *(uint32_t *)(a2 + 24) )
    {
      sub_194FD10((int)(uintptr_t)(&v7), *(wchar_t **)(a2 + 28), *(uint32_t *)(a2 + 32), (int)(uintptr_t)(&v6));
      sub_194F8F0(a1, &v7);
      v5 = (void *)(v7 - 12);
      if ( (void *)(v7 - 12) != &unk_213B8A8
        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        sub_194E070(v5);
      }
    }
    else
    {
      sub_194FD10((int)(uintptr_t)(v8), *(wchar_t **)(a2 + 28), *(uint32_t *)(a2 + 24), (int)(uintptr_t)(&v6) + 1);
      sub_194F8F0(a1, v8);
      v3 = (void *)(v8[0] - 12);
      if ( (void *)(v8[0] - 12) != &unk_213B8A8
        && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        sub_194E070(v3);
      }
    }
  }
  else
  {
    sub_194F8F0(a1, a2 + 48);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936540  (binary VA: 0x1936540)
// Original: sub_1936540
// ----------------------------------------------------------------------------
int sub_1936540(int a1, wchar_t **a2)
{
  unsigned int v2;
  int v3;

  sub_194E3B0(a1 + 48, *a2, *(*a2 - 3));
  v2 = 0;
  v3 = *(uint32_t *)(a1 + 48);
  if ( (*(uint8_t *)(a1 + 44) & 3) != 0 )
    v2 = *(uint32_t *)(v3 - 12);
  return sub_1934270((uint32_t *)(a1 + 12), v3, 0, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_19365C0  (binary VA: 0x19365c0)
// Original: sub_19365C0
// ----------------------------------------------------------------------------
void sub_19365C0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_19365D0  (binary VA: 0x19365d0)
// Original: sub_19365D0
// ----------------------------------------------------------------------------
int sub_19365D0(int a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19365E0  (binary VA: 0x19365e0)
// Original: sub_19365E0
// ----------------------------------------------------------------------------
uint32_t * sub_19365E0(uint32_t *a1)
{
  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936600  (binary VA: 0x1936600)
// Original: sub_1936600
// ----------------------------------------------------------------------------
uint32_t * sub_1936600(uint32_t *a1)
{
  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936620  (binary VA: 0x1936620)
// Original: sub_1936620
// ----------------------------------------------------------------------------
int sub_1936620()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1936630  (binary VA: 0x1936630)
// Original: sub_1936630
// ----------------------------------------------------------------------------
int sub_1936630()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1936640  (binary VA: 0x1936640)
// Original: sub_1936640
// ----------------------------------------------------------------------------
int sub_1936640()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936650  (binary VA: 0x1936650)
// Original: sub_1936650
// ----------------------------------------------------------------------------
int sub_1936650(uint32_t *a1)
{
  uint8_t *v1;
  int result;

  if ( G4_VCALL<int>(a1, 36) == -1 )
    return -1;
  v1 = (uint8_t *)a1[2];
  result = *v1;
  a1[2] = (uint32_t)(uintptr_t)(v1 + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1936680  (binary VA: 0x1936680)
// Original: sub_1936680
// ----------------------------------------------------------------------------
int sub_1936680()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936690  (binary VA: 0x1936690)
// Original: sub_1936690
// ----------------------------------------------------------------------------
int sub_1936690()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_19366A0  (binary VA: 0x19366a0)
// Original: sub_19366A0
// ----------------------------------------------------------------------------
void sub_19366A0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_19366B0  (binary VA: 0x19366b0)
// Original: sub_19366B0
// ----------------------------------------------------------------------------
int sub_19366B0(int a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19366C0  (binary VA: 0x19366c0)
// Original: sub_19366C0
// ----------------------------------------------------------------------------
uint32_t * sub_19366C0(uint32_t *a1)
{
  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19366E0  (binary VA: 0x19366e0)
// Original: sub_19366E0
// ----------------------------------------------------------------------------
uint32_t * sub_19366E0(uint32_t *a1)
{
  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936700  (binary VA: 0x1936700)
// Original: sub_1936700
// ----------------------------------------------------------------------------
int sub_1936700()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1936710  (binary VA: 0x1936710)
// Original: sub_1936710
// ----------------------------------------------------------------------------
int sub_1936710()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1936720  (binary VA: 0x1936720)
// Original: sub_1936720
// ----------------------------------------------------------------------------
int sub_1936720()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936730  (binary VA: 0x1936730)
// Original: sub_1936730
// ----------------------------------------------------------------------------
int sub_1936730()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936740  (binary VA: 0x1936740)
// Original: sub_1936740
// ----------------------------------------------------------------------------
int sub_1936740()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936750  (binary VA: 0x1936750)
// Original: sub_1936750
// ----------------------------------------------------------------------------
int sub_1936750(uint32_t *a1, wchar_t *s2, int a3)
{
  int v3;
  wchar_t *s1;
  signed int n;
  int v7;

  v3 = 0;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      s1 = (wchar_t *)a1[5];
      n = (a1[6] - (int)(uintptr_t)(s1)) >> 2;
      if ( n != 0 )
      {
        if ( a3 - v3 <= n )
          n = a3 - v3;
        v3 += n;
        wmemcpy(s1, s2, n);
        v7 = 4 * n;
        a1[5] += v7;
        if ( a3 <= v3 )
          return v3;
        s2 = (wchar_t *)((char *)s2 + v7);
      }
      if ( G4_VCALL<int>(a1, 52, *s2) != -1 )
      {
        ++v3;
        ++s2;
        if ( a3 > v3 )
          continue;
      }
      return v3;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_19367F0  (binary VA: 0x19367f0)
// Original: sub_19367F0
// ----------------------------------------------------------------------------
int sub_19367F0(int a1, wchar_t *s1, int a3)
{
  int v3;
  signed int n;
  wchar_t v5;
  int v7;

  v3 = 0;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      n = (*(uint32_t *)(a1 + 12) - *(uint32_t *)(a1 + 8)) >> 2;
      if ( n != 0 )
      {
        if ( a3 - v3 <= n )
          n = a3 - v3;
        v3 += n;
        wmemcpy(s1, *(const wchar_t **)(a1 + 8), n);
        v7 = 4 * n;
        *(uint32_t *)(a1 + 8) += v7;
        if ( a3 <= v3 )
          return v3;
        s1 = (wchar_t *)((char *)s1 + v7);
      }
      v5 = G4_VCALL<int>(a1, 40);
      if ( v5 != -1 )
      {
        ++v3;
        *s1++ = v5;
        if ( a3 > v3 )
          continue;
      }
      return v3;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1936890  (binary VA: 0x1936890)
// Original: sub_1936890
// ----------------------------------------------------------------------------
void sub_1936890(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB308);
  sub_1902180((volatile int32_t **)(a1 + 28));
}

// ----------------------------------------------------------------------------
// Function: sub_19368C0  (binary VA: 0x19368c0)
// Original: sub_19368C0
// ----------------------------------------------------------------------------
void sub_19368C0(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180((volatile int32_t **)(a1 + 28));
}

// ----------------------------------------------------------------------------
// Function: sub_19368F0  (binary VA: 0x19368f0)
// Original: sub_19368F0
// ----------------------------------------------------------------------------
int sub_19368F0(uint32_t *a1, uint8_t *src, int a3)
{
  int v3;
  void *dest;
  signed int n;

  v3 = 0;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      dest = (void *)a1[5];
      n = a1[6] - (uint32_t)(uintptr_t)(dest);
      if ( n != 0 )
      {
        if ( a3 - v3 <= n )
          n = a3 - v3;
        v3 += n;
        memcpy(dest, src, n);
        a1[5] += n;
        if ( a3 <= v3 )
          return v3;
        src += n;
      }
      if ( G4_VCALL<int>(a1, 52, *src) != -1 )
      {
        ++v3;
        ++src;
        if ( a3 > v3 )
          continue;
      }
      return v3;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1936980  (binary VA: 0x1936980)
// Original: sub_1936980
// ----------------------------------------------------------------------------
int sub_1936980(int a1, char *dest, int a3)
{
  int v3;
  signed int n;
  int v5;

  v3 = 0;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      n = *(uint32_t *)(a1 + 12) - *(uint32_t *)(a1 + 8);
      if ( n != 0 )
      {
        if ( a3 - v3 <= n )
          n = a3 - v3;
        v3 += n;
        memcpy(dest, *(const void **)(a1 + 8), n);
        *(uint32_t *)(a1 + 8) += n;
        if ( a3 <= v3 )
          return v3;
        dest += n;
      }
      v5 = G4_VCALL<int>(a1, 40);
      if ( v5 != -1 )
      {
        ++v3;
        *dest++ = v5;
        if ( a3 > v3 )
          continue;
      }
      return v3;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1936A10  (binary VA: 0x1936a10)
// Original: sub_1936A10
// ----------------------------------------------------------------------------
int sub_1936A10(uint32_t *a1)
{
  int v1;
  int v2;
  int *v3;

  v1 = G4_VCALL<int>(a1, 36);
  v2 = -1;
  if ( v1 != -1 )
  {
    v3 = (int *)a1[2];
    v2 = *v3;
    a1[2] = (uint32_t)(uintptr_t)(v3 + 1);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1936A40  (binary VA: 0x1936a40)
// Original: sub_1936A40
// ----------------------------------------------------------------------------
void sub_1936A40(volatile int32_t **a1)
{
  *a1 = (volatile int32_t *)&off_20AB2C8;
  sub_1902180(a1 + 7);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1936A90  (binary VA: 0x1936a90)
// Original: sub_1936A90
// ----------------------------------------------------------------------------
void sub_1936A90(volatile int32_t **a1)
{
  *a1 = (volatile int32_t *)&off_20AB308;
  sub_1902180(a1 + 7);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1936AE0  (binary VA: 0x1936ae0)
// Original: sub_1936AE0
// ----------------------------------------------------------------------------
volatile int32_t ** sub_1936AE0(volatile int32_t **a1, volatile int32_t **a2, volatile int32_t **a3)
{
  sub_1901AC0(a1, a2 + 7);
  (*((void (**)(volatile int32_t **, volatile int32_t **))*a2 + 2))(a2, a3);
  sub_19021E0(a2 + 7, a3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936B70  (binary VA: 0x1936b70)
// Original: sub_1936B70
// ----------------------------------------------------------------------------
volatile int32_t ** sub_1936B70(volatile int32_t **a1, int a2)
{
  sub_1901AC0(a1, (volatile int32_t **)(a2 + 28));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936BB0  (binary VA: 0x1936bb0)
// Original: sub_1936BB0
// ----------------------------------------------------------------------------
int sub_1936BB0(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 12, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_1936BE0  (binary VA: 0x1936be0)
// Original: sub_1936BE0
// ----------------------------------------------------------------------------
int sub_1936BE0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936C40  (binary VA: 0x1936c40)
// Original: sub_1936C40
// ----------------------------------------------------------------------------
int sub_1936C40(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936C90  (binary VA: 0x1936c90)
// Original: sub_1936C90
// ----------------------------------------------------------------------------
int sub_1936C90(int a1)
{
  return G4_VCALL<int>(a1, 24);
}

// ----------------------------------------------------------------------------
// Function: sub_1936CB0  (binary VA: 0x1936cb0)
// Original: sub_1936CB0
// ----------------------------------------------------------------------------
int sub_1936CB0(uint32_t *a1)
{
  int result;

  result = a1[3] - a1[2];
  if ( result == 0 )
    return G4_VCALL<int>(a1, 28);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1936CD0  (binary VA: 0x1936cd0)
// Original: sub_1936CD0
// ----------------------------------------------------------------------------
int sub_1936CD0(uint32_t *a1)
{
  unsigned int v1;
  unsigned int v2;
  uint8_t *v3;
  int result;
  int v5;

  v1 = a1[2];
  v2 = a1[3];
  if ( v1 >= v2 )
  {
    v5 = G4_VCALL<int>(a1, 40);
    result = -1;
    if ( v5 == -1 )
      return result;
    v3 = (uint8_t *)a1[2];
    v2 = a1[3];
  }
  else
  {
    v3 = (uint8_t *)(v1 + 1);
    a1[2] = (uint32_t)(uintptr_t)(v3);
  }
  if ( (unsigned int)(uintptr_t)(v3) >= v2 )
    return G4_VCALL<int>(a1, 36);
  else
    return *v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1936D20  (binary VA: 0x1936d20)
// Original: sub_1936D20
// ----------------------------------------------------------------------------
int sub_1936D20(uint32_t *a1)
{
  uint8_t *v1;
  int result;

  v1 = (uint8_t *)a1[2];
  if ( (unsigned int)(uintptr_t)(v1) >= a1[3] )
    return G4_VCALL<int>(a1, 40);
  result = *v1;
  a1[2] = (uint32_t)(uintptr_t)(v1 + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1936D50  (binary VA: 0x1936d50)
// Original: sub_1936D50
// ----------------------------------------------------------------------------
int sub_1936D50(uint32_t *a1)
{
  uint8_t *v1;

  v1 = (uint8_t *)a1[2];
  if ( (unsigned int)(uintptr_t)(v1) >= a1[3] )
    return G4_VCALL<int>(a1, 36);
  else
    return *v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1936D80  (binary VA: 0x1936d80)
// Original: sub_1936D80
// ----------------------------------------------------------------------------
int sub_1936D80(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 32, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_1936DB0  (binary VA: 0x1936db0)
// Original: sub_1936DB0
// ----------------------------------------------------------------------------
int sub_1936DB0(uint32_t *a1, uint8_t a2)
{
  unsigned int v2;

  v2 = a1[2];
  if ( a1[1] >= v2 || *(uint8_t *)(v2 - 1) != a2 )
    return G4_VCALL<int>(a1, 44, a2);
  a1[2] = v2 - 1;
  return *(uint8_t *)(v2 - 1);
}

// ----------------------------------------------------------------------------
// Function: sub_1936E00  (binary VA: 0x1936e00)
// Original: sub_1936E00
// ----------------------------------------------------------------------------
int sub_1936E00(uint32_t *a1)
{
  unsigned int v1;

  v1 = a1[2];
  if ( a1[1] >= v1 )
    return G4_VCALL<int>(a1, 44, -1);
  a1[2] = v1 - 1;
  return *(uint8_t *)(v1 - 1);
}

// ----------------------------------------------------------------------------
// Function: sub_1936E40  (binary VA: 0x1936e40)
// Original: sub_1936E40
// ----------------------------------------------------------------------------
int sub_1936E40(uint32_t *a1, uint8_t a2)
{
  uint8_t *v2;

  v2 = (uint8_t *)a1[5];
  if ( (unsigned int)(uintptr_t)(v2) >= a1[6] )
    return G4_VCALL<int>(a1, 52, a2);
  *v2 = a2;
  ++a1[5];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_1936E80  (binary VA: 0x1936e80)
// Original: sub_1936E80
// ----------------------------------------------------------------------------
int sub_1936E80(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 48, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_1936EB0  (binary VA: 0x1936eb0)
// Original: sub_1936EB0
// ----------------------------------------------------------------------------
volatile int32_t * sub_1936EB0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB2C8);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  return (volatile int32_t *)(uintptr_t)(sub_1903A70(a1 + 7));
}

// ----------------------------------------------------------------------------
// Function: sub_1936FD0  (binary VA: 0x1936fd0)
// Original: sub_1936FD0
// ----------------------------------------------------------------------------
int sub_1936FD0(uint32_t *a1)
{
  int result;
  unsigned int v2;

  result = (int)(uintptr_t)(a1);
  v2 = a1[2];
  if ( v2 >= a1[3] )
    return G4_VCALL<int>(a1, 40);
  a1[2] = v2 + 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1937020  (binary VA: 0x1937020)
// Original: sub_1937020
// ----------------------------------------------------------------------------
volatile int32_t * sub_1937020(int a1, int a2)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB2C8);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 8) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 16) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 20);
  return (volatile int32_t *)(uintptr_t)(sub_1901AC0((volatile int32_t **)(a1 + 28), (volatile int32_t **)(a2 + 28)));
}

// ----------------------------------------------------------------------------
// Function: sub_1937090  (binary VA: 0x1937090)
// Original: sub_1937090
// ----------------------------------------------------------------------------
int sub_1937090(int a1, int a2)
{
  uint8_t v3[13];

  return sub_1953F10(a1, a2, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_19370D0  (binary VA: 0x19370d0)
// Original: sub_19370D0
// ----------------------------------------------------------------------------
volatile int32_t ** sub_19370D0(volatile int32_t **a1, volatile int32_t **a2, volatile int32_t **a3)
{
  sub_1901AC0(a1, a2 + 7);
  (*((void (**)(volatile int32_t **, volatile int32_t **))*a2 + 2))(a2, a3);
  sub_19021E0(a2 + 7, a3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1937160  (binary VA: 0x1937160)
// Original: sub_1937160
// ----------------------------------------------------------------------------
volatile int32_t ** sub_1937160(volatile int32_t **a1, int a2)
{
  sub_1901AC0(a1, (volatile int32_t **)(a2 + 28));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19371A0  (binary VA: 0x19371a0)
// Original: sub_19371A0
// ----------------------------------------------------------------------------
int sub_19371A0(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 12, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19371D0  (binary VA: 0x19371d0)
// Original: sub_19371D0
// ----------------------------------------------------------------------------
int sub_19371D0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1937230  (binary VA: 0x1937230)
// Original: sub_1937230
// ----------------------------------------------------------------------------
int sub_1937230(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1937280  (binary VA: 0x1937280)
// Original: sub_1937280
// ----------------------------------------------------------------------------
int sub_1937280(int a1)
{
  return G4_VCALL<int>(a1, 24);
}

// ----------------------------------------------------------------------------
// Function: sub_19372A0  (binary VA: 0x19372a0)
// Original: sub_19372A0
// ----------------------------------------------------------------------------
int sub_19372A0(uint32_t *a1)
{
  int result;

  result = (a1[3] - a1[2]) >> 2;
  if ( result == 0 )
    return G4_VCALL<int>(a1, 28);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19372C0  (binary VA: 0x19372c0)
// Original: sub_19372C0
// ----------------------------------------------------------------------------
int sub_19372C0(uint32_t *a1)
{
  int *v1;
  int v2;
  unsigned int v3;

  v1 = (int *)a1[2];
  if ( (unsigned int)(uintptr_t)(v1) >= a1[3] )
  {
    v2 = G4_VCALL<int>(a1, 40);
  }
  else
  {
    v2 = *v1;
    a1[2] = (uint32_t)(uintptr_t)(v1 + 1);
  }
  if ( v2 == -1 )
    return -1;
  v3 = a1[2];
  if ( v3 >= a1[3] )
    return G4_VCALL<int>(a1, 36);
  else
    return *(uint32_t *)v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1937310  (binary VA: 0x1937310)
// Original: sub_1937310
// ----------------------------------------------------------------------------
int sub_1937310(uint32_t *a1)
{
  int *v1;
  int result;

  v1 = (int *)a1[2];
  if ( (unsigned int)(uintptr_t)(v1) >= a1[3] )
    return G4_VCALL<int>(a1, 40);
  result = *v1;
  a1[2] = (uint32_t)(uintptr_t)(v1 + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1937340  (binary VA: 0x1937340)
// Original: sub_1937340
// ----------------------------------------------------------------------------
int sub_1937340(uint32_t *a1)
{
  unsigned int v1;

  v1 = a1[2];
  if ( v1 >= a1[3] )
    return G4_VCALL<int>(a1, 36);
  else
    return *(uint32_t *)v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1937370  (binary VA: 0x1937370)
// Original: sub_1937370
// ----------------------------------------------------------------------------
int sub_1937370(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 32, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19373A0  (binary VA: 0x19373a0)
// Original: sub_19373A0
// ----------------------------------------------------------------------------
int sub_19373A0(uint32_t *a1, int a2)
{
  unsigned int v2;
  int result;

  v2 = a1[2];
  if ( a1[1] >= v2 )
    return G4_VCALL<int>(a1, 44, a2);
  result = *(uint32_t *)(v2 - 4);
  if ( result != a2 )
    return G4_VCALL<int>(a1, 44, a2);
  a1[2] = v2 - 4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19373E0  (binary VA: 0x19373e0)
// Original: sub_19373E0
// ----------------------------------------------------------------------------
int sub_19373E0(uint32_t *a1)
{
  unsigned int v1;

  v1 = a1[2];
  if ( a1[1] >= v1 )
    return G4_VCALL<int>(a1, 44, -1);
  a1[2] = v1 - 4;
  return *(uint32_t *)(v1 - 4);
}

// ----------------------------------------------------------------------------
// Function: sub_1937410  (binary VA: 0x1937410)
// Original: sub_1937410
// ----------------------------------------------------------------------------
int sub_1937410(uint32_t *a1, int a2)
{
  int result;
  int *v3;

  result = a2;
  v3 = (int *)a1[5];
  if ( (unsigned int)(uintptr_t)(v3) >= a1[6] )
    return G4_VCALL<int>(a1, 52, a2);
  *v3 = a2;
  a1[5] = (uint32_t)(uintptr_t)(v3 + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1937440  (binary VA: 0x1937440)
// Original: sub_1937440
// ----------------------------------------------------------------------------
int sub_1937440(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 48, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_1937470  (binary VA: 0x1937470)
// Original: sub_1937470
// ----------------------------------------------------------------------------
volatile int32_t * sub_1937470(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB308);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  return (volatile int32_t *)(uintptr_t)(sub_1903A70(a1 + 7));
}

// ----------------------------------------------------------------------------
// Function: sub_1937590  (binary VA: 0x1937590)
// Original: sub_1937590
// ----------------------------------------------------------------------------
int sub_1937590(uint32_t *a1)
{
  int result;
  unsigned int v2;

  result = (int)(uintptr_t)(a1);
  v2 = a1[2];
  if ( v2 >= a1[3] )
    return G4_VCALL<int>(a1, 40);
  a1[2] = v2 + 4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19375E0  (binary VA: 0x19375e0)
// Original: sub_19375E0
// ----------------------------------------------------------------------------
volatile int32_t * sub_19375E0(int a1, int a2)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB308);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 8) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 16) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 20);
  return (volatile int32_t *)(uintptr_t)(sub_1901AC0((volatile int32_t **)(a1 + 28), (volatile int32_t **)(a2 + 28)));
}

// ----------------------------------------------------------------------------
// Function: sub_1937650  (binary VA: 0x1937650)
// Original: sub_1937650
// ----------------------------------------------------------------------------
int sub_1937650(int a1, int a2)
{
  uint8_t v3[13];

  return sub_1954010(a1, a2, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_1937710  (binary VA: 0x1937710)
// Original: sub_1937710
// ----------------------------------------------------------------------------
unsigned int sub_1937710(uint32_t *a1, unsigned int a2, char *a3)
{
  unsigned int result;

  result = a2;
  if ( a2 > *(uint32_t *)(*a1 - 12) )
    sub_1900210(a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1937750  (binary VA: 0x1937750)
// Original: sub_1937750
// ----------------------------------------------------------------------------
unsigned int sub_1937750(uint32_t *a1, int a2, unsigned int a3, char *a4)
{
  unsigned int result;

  result = a2 + 1073741820 - *(uint32_t *)(*a1 - 12);
  if ( result < a3 )
    sub_1900180(a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19377D0  (binary VA: 0x19377d0)
// Original: sub_19377D0
// ----------------------------------------------------------------------------
int sub_19377D0(uint8_t *dest, uint8_t *src, size_t n)
{
  int result;

  if ( n != 1 )
    return (int)(uintptr_t)(memcpy(dest, src, n));
  result = *src;
  *dest = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1937820  (binary VA: 0x1937820)
// Original: sub_1937820
// ----------------------------------------------------------------------------
int sub_1937820(uint8_t *dest, uint8_t *src, size_t n)
{
  int result;

  if ( n != 1 )
    return (int)(uintptr_t)(memmove(dest, src, n));
  result = *src;
  *dest = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1937870  (binary VA: 0x1937870)
// Original: sub_1937870
// ----------------------------------------------------------------------------
void * sub_1937870(uint8_t *s, size_t n, char a3)
{
  void *result;

  result = (void *)n;
  if ( n != 1 )
    return memset(s, a3, n);
  *s = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19378D0  (binary VA: 0x19378d0)
// Original: sub_19378D0
// ----------------------------------------------------------------------------
int sub_19378D0(uint8_t *dest, uint8_t *src, int a3)
{
  int result;

  if ( a3 - (uint32_t)(uintptr_t)(src) != 1 )
    return (int)(uintptr_t)(uintptr_t)(memcpy(dest, src, a3 - (uint32_t)(uintptr_t)(src)));
  result = *src;
  *dest = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1937920  (binary VA: 0x1937920)
// Original: sub_1937920
// ----------------------------------------------------------------------------
int sub_1937920(uint8_t *dest, uint8_t *src, int a3)
{
  int result;

  if ( a3 - (uint32_t)(uintptr_t)(src) != 1 )
    return (int)(uintptr_t)(uintptr_t)(memcpy(dest, src, a3 - (uint32_t)(uintptr_t)(src)));
  result = *src;
  *dest = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1937970  (binary VA: 0x1937970)
// Original: sub_1937970
// ----------------------------------------------------------------------------
int sub_1937970(uint8_t *dest, uint8_t *src, int a3)
{
  int result;

  if ( a3 - (uint32_t)(uintptr_t)(src) != 1 )
    return (int)(uintptr_t)(uintptr_t)(memcpy(dest, src, a3 - (uint32_t)(uintptr_t)(src)));
  result = *src;
  *dest = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19379C0  (binary VA: 0x19379c0)
// Original: sub_19379C0
// ----------------------------------------------------------------------------
int sub_19379C0(uint8_t *dest, uint8_t *src, int a3)
{
  int result;

  if ( a3 - (uint32_t)(uintptr_t)(src) != 1 )
    return (int)(uintptr_t)(uintptr_t)(memcpy(dest, src, a3 - (uint32_t)(uintptr_t)(src)));
  result = *src;
  *dest = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1937A20  (binary VA: 0x1937a20)
// Original: sub_1937A20
// ----------------------------------------------------------------------------
uint32_t * sub_1937A20()
{
  return dword_213B808;
}

// ----------------------------------------------------------------------------
// Function: sub_1937A40  (binary VA: 0x1937a40)
// Original: sub_1937A40
// ----------------------------------------------------------------------------
uint32_t * sub_1937A40(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1937A60  (binary VA: 0x1937a60)
// Original: sub_1937A60
// ----------------------------------------------------------------------------
uint32_t * sub_1937A60(uint32_t *a1, uint32_t *a2)
{
  *a1 = *a2;
  *a2 = (uint32_t)(uintptr_t)(&dword_213B814);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_1937BA0  (binary VA: 0x1937ba0)
// Original: sub_1937BA0
// ----------------------------------------------------------------------------
unsigned int sub_1937BA0(uint32_t *a1, unsigned int a2)
{
  if ( a2 >= *(uint32_t *)(*a1 - 12) )
    sub_1900210("basic_string::at");
  return *a1 + a2;
}

// ----------------------------------------------------------------------------
// Function: sub_1937C00  (binary VA: 0x1937c00)
// Original: sub_1937C00
// ----------------------------------------------------------------------------
size_t sub_1937C00(uint32_t *a1, uint8_t *dest, size_t a3, unsigned int a4)
{
  unsigned int v4;
  size_t n;
  uint8_t *src;

  v4 = *(uint32_t *)(*a1 - 12);
  if ( a4 > v4 )
    sub_1900210("basic_string::copy");
  n = v4 - a4;
  if ( n > a3 )
    n = a3;
  if ( n != 0 )
  {
    src = (uint8_t *)(*a1 + a4);
    if ( n == 1 )
      *dest = *src;
    else
      memcpy(dest, src, n);
  }
  return n;
}

// ----------------------------------------------------------------------------
// Function: sub_1937C90  (binary VA: 0x1937c90)
// Original: sub_1937C90
// ----------------------------------------------------------------------------
int sub_1937C90(int *a1, int *a2)
{
  int result;
  int v3;

  result = *a1;
  if ( *(int *)(*a1 - 4) < 0 )
  {
    v3 = *a2;
    *(uint32_t *)(result - 4) = 0;
    if ( *(int *)(v3 - 4) >= 0 )
      goto LABEL_3;
  }
  else
  {
    v3 = *a2;
    if ( *(int *)(*a2 - 4) >= 0 )
    {
LABEL_3:
      *a1 = v3;
      *a2 = result;
      return result;
    }
  }
  *(uint32_t *)(v3 - 4) = 0;
  *a1 = v3;
  *a2 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1937CD0  (binary VA: 0x1937cd0)
// Original: sub_1937CD0
// ----------------------------------------------------------------------------
int * sub_1937CD0(int *a1, int *a2)
{
  sub_1937C90(a1, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1937D00  (binary VA: 0x1937d00)
// Original: sub_1937D00
// ----------------------------------------------------------------------------
int * sub_1937D00(int *a1, int *a2)
{
  sub_1937C90(a1, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::string::find  (binary VA: 0x1937d50)
// Original: std::string::find
// ----------------------------------------------------------------------------
int g4_std_compat::string_find(uint32_t *a1, char *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v7;
  unsigned int v8;
  char *s1;
  unsigned int v10;
  int v11;
  unsigned int v12;
  char v13;

  v4 = a3;
  v5 = *(uint32_t *)(*a1 - 12);
  if ( a4 != 0 )
  {
    if ( a4 <= v5 )
    {
      v7 = v5 - a4;
      if ( a3 <= v7 )
      {
        v8 = a3 + 1;
        s1 = (char *)(a3 + 1 + *a1);
        v13 = *a2;
        do
        {
          v4 = v8 - 1;
          v10 = v8;
          if ( v13 == *(s1 - 1) )
          {
            v12 = v7;
            v11 = memcmp(s1, a2 + 1, a4 - 1);
            v7 = v12;
            if ( v11 == 0 )
              return v4;
            v10 = v8;
          }
          ++v8;
          ++s1;
        }
        while ( v7 >= v10 );
      }
    }
    return -1;
  }
  else if ( a3 > v5 )
  {
    return -1;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1937E30  (binary VA: 0x1937e30)
// Original: sub_1937E30
// ----------------------------------------------------------------------------
int sub_1937E30(uint32_t *a1, char **a2, unsigned int a3)
{
  return g4_std_compat::string_find(a1, *a2, a3, *((uint32_t *)*a2 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_1937E60  (binary VA: 0x1937e60)
// Original: sub_1937E60
// ----------------------------------------------------------------------------
int sub_1937E60(uint32_t *a1, char *s, unsigned int a3)
{
  size_t v3;

  v3 = strlen(s);
  return g4_std_compat::string_find(a1, s, a3, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_1937EB0  (binary VA: 0x1937eb0)
// Original: sub_1937EB0
// ----------------------------------------------------------------------------
char * sub_1937EB0(int *a1, char a2, unsigned int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  char *v7;

  v3 = *a1;
  v4 = -1;
  v5 = *(uint32_t *)(*a1 - 12);
  if ( a3 < v5 )
  {
    v7 = (char *)memchr((const void *)(v3 + a3), a2, v5 - a3);
    if ( v7 != nullptr )
      return &v7[-v3];
  }
  return (char *)v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1937F30  (binary VA: 0x1937f30)
// Original: sub_1937F30
// ----------------------------------------------------------------------------
unsigned int sub_1937F30(int *a1, void *s2, unsigned int a3, size_t n)
{
  int v4;
  unsigned int v5;
  size_t v6;
  unsigned int v8;

  v4 = *a1;
  v5 = 0xFFFFFFFF;
  v6 = *(uint32_t *)(*a1 - 12);
  if ( n <= v6 )
  {
    v8 = v6 - n;
    v5 = a3;
    if ( v8 <= a3 )
      v5 = v8;
    while ( memcmp((const void *)(v4 + v5), s2, n) != 0 )
    {
      if ( v5 == 0 )
        return -1;
      --v5;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_1937FC0  (binary VA: 0x1937fc0)
// Original: sub_1937FC0
// ----------------------------------------------------------------------------
unsigned int sub_1937FC0(int *a1, void **a2, unsigned int a3)
{
  return sub_1937F30(a1, *a2, a3, *((uint32_t *)*a2 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_1937FF0  (binary VA: 0x1937ff0)
// Original: sub_1937FF0
// ----------------------------------------------------------------------------
unsigned int sub_1937FF0(int *a1, char *s, unsigned int a3)
{
  size_t v3;

  v3 = strlen(s);
  return sub_1937F30(a1, s, a3, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_1938040  (binary VA: 0x1938040)
// Original: sub_1938040
// ----------------------------------------------------------------------------
int sub_1938040(uint32_t *a1, char a2, unsigned int a3)
{
  int result;
  int v4;
  unsigned int v5;

  result = -1;
  v4 = *(uint32_t *)(*a1 - 12);
  if ( v4 != 0 )
  {
    v5 = v4 - 1;
    if ( a3 <= v5 )
      v5 = a3;
    result = v5 + 1;
    while ( result != 0 )
    {
      --result;
      if ( *(uint8_t *)(*a1 + result) == a2 )
        return result;
    }
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1938090  (binary VA: 0x1938090)
// Original: sub_1938090
// ----------------------------------------------------------------------------
unsigned int sub_1938090(int *a1, void *s, unsigned int a3, size_t n)
{
  unsigned int v4;
  unsigned int v5;
  int v7;

  v4 = a3;
  if ( n == 0 )
    return -1;
  v7 = *a1;
  v5 = *(uint32_t *)(*a1 - 12);
  if ( a3 >= v5 )
    return -1;
  while ( memchr(s, *(char *)(v7 + v4), n) == nullptr )
  {
    if ( ++v4 >= v5 )
      return -1;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1938100  (binary VA: 0x1938100)
// Original: sub_1938100
// ----------------------------------------------------------------------------
unsigned int sub_1938100(int *a1, void **a2, unsigned int a3)
{
  return sub_1938090(a1, *a2, a3, *((uint32_t *)*a2 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_1938130  (binary VA: 0x1938130)
// Original: sub_1938130
// ----------------------------------------------------------------------------
unsigned int sub_1938130(int *a1, char *s, unsigned int a3)
{
  size_t v3;

  v3 = strlen(s);
  return sub_1938090(a1, s, a3, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_1938190  (binary VA: 0x1938190)
// Original: sub_1938190
// ----------------------------------------------------------------------------
unsigned int sub_1938190(int *a1, void *s, unsigned int a3, size_t n)
{
  int v4;
  int v5;
  unsigned int v6;

  v4 = *a1;
  v5 = *(uint32_t *)(*a1 - 12);
  if ( n == 0 || v5 == 0 )
    return -1;
  v6 = v5 - 1;
  if ( a3 <= v6 )
    v6 = a3;
  while ( memchr(s, *(char *)(v4 + v6), n) == nullptr )
  {
    if ( v6 == 0 )
      return -1;
    --v6;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_1938220  (binary VA: 0x1938220)
// Original: sub_1938220
// ----------------------------------------------------------------------------
unsigned int sub_1938220(int *a1, void **a2, unsigned int a3)
{
  return sub_1938190(a1, *a2, a3, *((uint32_t *)*a2 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_1938250  (binary VA: 0x1938250)
// Original: sub_1938250
// ----------------------------------------------------------------------------
unsigned int sub_1938250(int *a1, char *s, unsigned int a3)
{
  size_t v3;

  v3 = strlen(s);
  return sub_1938190(a1, s, a3, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_19382B0  (binary VA: 0x19382b0)
// Original: sub_19382B0
// ----------------------------------------------------------------------------
unsigned int sub_19382B0(int *a1, void *s, unsigned int a3, size_t n)
{
  unsigned int v4;
  int v5;
  unsigned int v7;

  v4 = a3;
  v5 = *a1;
  v7 = *(uint32_t *)(*a1 - 12);
  if ( a3 >= v7 )
    return -1;
  while ( memchr(s, *(char *)(v5 + v4), n) != nullptr )
  {
    if ( ++v4 >= v7 )
      return -1;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1938320  (binary VA: 0x1938320)
// Original: sub_1938320
// ----------------------------------------------------------------------------
unsigned int sub_1938320(int *a1, void **a2, unsigned int a3)
{
  return sub_19382B0(a1, *a2, a3, *((uint32_t *)*a2 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_1938350  (binary VA: 0x1938350)
// Original: sub_1938350
// ----------------------------------------------------------------------------
unsigned int sub_1938350(int *a1, char *s, unsigned int a3)
{
  size_t v3;

  v3 = strlen(s);
  return sub_19382B0(a1, s, a3, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_19383A0  (binary VA: 0x19383a0)
// Original: sub_19383A0
// ----------------------------------------------------------------------------
int sub_19383A0(int *a1, char a2, unsigned int a3)
{
  int result;
  int v4;

  result = a3;
  v4 = *a1;
  if ( a3 >= *(uint32_t *)(*a1 - 12) )
    return -1;
  if ( *(uint8_t *)(v4 + a3) == a2 )
  {
    while ( (unsigned int)++result < *(uint32_t *)(*a1 - 12) )
    {
      if ( *(uint8_t *)(v4 + result) != *(uint8_t *)(v4 + a3) )
        return result;
    }
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19383F0  (binary VA: 0x19383f0)
// Original: sub_19383F0
// ----------------------------------------------------------------------------
unsigned int sub_19383F0(int *a1, void *s, unsigned int a3, size_t n)
{
  int v4;
  unsigned int v5;
  int v6;

  v4 = *a1;
  v5 = 0xFFFFFFFF;
  v6 = *(uint32_t *)(*a1 - 12);
  if ( v6 != 0 )
  {
    v5 = v6 - 1;
    if ( a3 <= v6 - 1 )
      v5 = a3;
    while ( memchr(s, *(char *)(v4 + v5), n) != nullptr )
    {
      if ( v5 == 0 )
        return -1;
      --v5;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_1938480  (binary VA: 0x1938480)
// Original: sub_1938480
// ----------------------------------------------------------------------------
unsigned int sub_1938480(int *a1, void **a2, unsigned int a3)
{
  return sub_19383F0(a1, *a2, a3, *((uint32_t *)*a2 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_19384B0  (binary VA: 0x19384b0)
// Original: sub_19384B0
// ----------------------------------------------------------------------------
unsigned int sub_19384B0(int *a1, char *s, unsigned int a3)
{
  size_t v3;

  v3 = strlen(s);
  return sub_19383F0(a1, s, a3, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_1938500  (binary VA: 0x1938500)
// Original: sub_1938500
// ----------------------------------------------------------------------------
int sub_1938500(uint32_t *a1, char a2, unsigned int a3)
{
  int result;
  int v4;

  result = -1;
  v4 = *(uint32_t *)(*a1 - 12);
  if ( v4 != 0 )
  {
    result = v4 - 1;
    if ( a3 <= v4 - 1 )
      result = a3;
    while ( *(uint8_t *)(*a1 + result) == a2 )
    {
      if ( result == 0 )
        return -1;
      --result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::string::compare_str  (binary VA: 0x1938550)
// Original: std::string::compare_str
// ----------------------------------------------------------------------------
int g4_std::string::compare_str(const void **a1, const void **a2)
{
  size_t v2;
  size_t v3;
  size_t n;
  size_t v5;
  int result;

  v2 = *((uint32_t *)*a2 - 3);
  v3 = *((uint32_t *)*a1 - 3);
  n = v3;
  if ( v2 <= v3 )
    n = *((uint32_t *)*a2 - 3);
  v5 = v3 - v2;
  result = memcmp(*a1, *a2, n);
  if ( result == 0 )
    return v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19385B0  (binary VA: 0x19385b0)
// Original: sub_19385B0
// ----------------------------------------------------------------------------
size_t sub_19385B0(uint32_t *a1, unsigned int a2, size_t a3, const void **a4)
{
  unsigned int v4;
  size_t v5;
  size_t v6;
  size_t n;
  size_t result;
  size_t v9;

  v4 = *(uint32_t *)(*a1 - 12);
  if ( a2 > v4 )
    sub_1900210("basic_string::compare");
  v5 = v4 - a2;
  if ( v5 > a3 )
    v5 = a3;
  v6 = *((uint32_t *)*a4 - 3);
  n = v6;
  if ( v5 <= v6 )
    n = v5;
  result = memcmp((const void *)(*a1 + a2), *a4, n);
  v9 = v5 - v6;
  if ( result == 0 )
    return v9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1938640  (binary VA: 0x1938640)
// Original: sub_1938640
// ----------------------------------------------------------------------------
unsigned int sub_1938640(uint32_t *a1, unsigned int a2, unsigned int a3, uint32_t *a4, unsigned int a5, size_t a6)
{
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  size_t v9;
  size_t n;
  unsigned int result;
  unsigned int v12;

  v6 = *(uint32_t *)(*a1 - 12);
  if ( a2 > v6 || (v7 = *(uint32_t *)(*a4 - 12), a5 > v7) )
    sub_1900210("basic_string::compare");
  v8 = v6 - a2;
  if ( v8 > a3 )
    v8 = a3;
  v9 = v7 - a5;
  if ( a6 <= v9 )
    v9 = a6;
  n = v8;
  if ( v9 <= v8 )
    n = v9;
  result = memcmp((const void *)(*a1 + a2), (const void *)(a5 + *a4), n);
  v12 = v8 - v9;
  if ( result == 0 )
    return v12;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::string::compare  (binary VA: 0x19386e0)
// Original: std::string::compare
// ----------------------------------------------------------------------------
size_t g4_std::string::compare(const void **a1, char *s)
{
  const void *v2;
  size_t v3;
  size_t v4;
  bool v5; // cc
  size_t v6;
  size_t n;
  size_t result;
  size_t v9;

  v2 = *a1;
  v3 = *((uint32_t *)*a1 - 3);
  v4 = strlen(s);
  v5 = v4 <= v3;
  v6 = v4;
  n = v3;
  if ( v5 )
    n = v6;
  result = memcmp(v2, s, n);
  v9 = v3 - v6;
  if ( result == 0 )
    return v9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1938760  (binary VA: 0x1938760)
// Original: sub_1938760
// ----------------------------------------------------------------------------
unsigned int sub_1938760(int *a1, unsigned int a2, unsigned int a3, char *s)
{
  unsigned int v4;
  unsigned int v5;
  size_t v6;
  bool v7; // cc
  size_t v8;
  size_t n;
  unsigned int result;
  unsigned int v11;
  int v12;

  v4 = *(uint32_t *)(*a1 - 12);
  if ( a2 > v4 )
    sub_1900210("basic_string::compare");
  v5 = v4 - a2;
  v12 = *a1;
  if ( v5 > a3 )
    v5 = a3;
  v6 = strlen(s);
  v7 = v6 <= v5;
  v8 = v6;
  n = v5;
  if ( v7 )
    n = v8;
  result = memcmp((const void *)(v12 + a2), s, n);
  v11 = v5 - v8;
  if ( result == 0 )
    return v11;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1938800  (binary VA: 0x1938800)
// Original: sub_1938800
// ----------------------------------------------------------------------------
int sub_1938800(uint32_t *a1, unsigned int a2, unsigned int a3, void *s2, size_t a5)
{
  unsigned int v5;
  unsigned int v6;
  size_t n;
  int result;
  size_t v9;

  v5 = *(uint32_t *)(*a1 - 12);
  if ( a2 > v5 )
    sub_1900210("basic_string::compare");
  v6 = v5 - a2;
  if ( v6 > a3 )
    v6 = a3;
  n = v6;
  if ( a5 <= v6 )
    n = a5;
  result = memcmp((const void *)(*a1 + a2), s2, n);
  v9 = v6 - a5;
  if ( result == 0 )
    return v9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1938890  (binary VA: 0x1938890)
// Original: sub_1938890
// ----------------------------------------------------------------------------
uint32_t * sub_1938890()
{
  return dword_213B808;
}

// ----------------------------------------------------------------------------
// Function: sub_19388F0  (binary VA: 0x19388f0)
// Original: sub_19388F0
// ----------------------------------------------------------------------------
uint32_t * sub_19388F0(uint32_t *a1, int a2)
{
  uint32_t *result;

  result = a1;
  if ( a1 != dword_213B808 )
  {
    a1[2] = 0;
    *a1 = a2;
    *((uint8_t *)a1 + a2 + 12) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1938930  (binary VA: 0x1938930)
// Original: sub_1938930
// ----------------------------------------------------------------------------
int sub_1938930(unsigned int a1, unsigned int a2)
{
  unsigned int v2;
  size_t v3;
  unsigned int v4;
  int result;

  v2 = a1;
  if ( a1 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  v3 = a1 + 13;
  if ( a1 > a2 )
  {
    if ( a1 < 2 * a2 )
      v2 = 2 * a2;
    if ( v2 + 29 > 0x1000 && a2 < v2 )
    {
      v4 = v2 + 4096 - (((uint16_t)v2 + 29) & 0xFFF);
      v2 = 1073741820;
      if ( v4 <= 0x3FFFFFFC )
        v2 = v4;
    }
    v3 = v2 + 13;
  }
  result = opNew(v3);
  *(uint32_t *)(result + 4) = v2;
  *(uint32_t *)(result + 8) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19389C0  (binary VA: 0x19389c0)
// Original: sub_19389C0
// ----------------------------------------------------------------------------
uint32_t * sub_19389C0(size_t n, char a2)
{
  uint32_t *result;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;

  result = &dword_213B814;
  if ( n != 0 )
  {
    v3 = sub_1938930(n, 0);
    v4 = (uint32_t *)v3;
    v5 = v3 + 12;
    if ( n == 1 )
    {
      *(uint8_t *)(v3 + 12) = a2;
    }
    else
    {
      v6 = (uint32_t *)v3;
      memset((void *)(v3 + 12), a2, n);
      v4 = v6;
    }
    if ( v4 != dword_213B808 )
    {
      v4[2] = 0;
      *v4 = n;
      *((uint8_t *)v4 + n + 12) = 0;
    }
    return (uint32_t *)v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1938A90  (binary VA: 0x1938a90)
// Original: sub_1938A90
// ----------------------------------------------------------------------------
uint32_t * sub_1938A90(uint32_t *a1, size_t a2, char a3)
{
  uint32_t *result;

  result = sub_19389C0(a2, a3);
  *a1 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1938AC0  (binary VA: 0x1938ac0)
// Original: sub_1938AC0
// ----------------------------------------------------------------------------
uint32_t * sub_1938AC0(uint32_t *a1)
{
  uint32_t *result;

  result = sub_19389C0(0, 0);
  *a1 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::string::Rep::M_destroy  (binary VA: 0x1938af0)
// Original: std::string::_Rep::_M_destroy
// ----------------------------------------------------------------------------
void g4_std::string::Rep::M_destroy(void *a1)
{
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1938B12  (binary VA: 0x1938b12)
// Original: sub_1938B12
// ----------------------------------------------------------------------------
void sub_1938B12(volatile int32_t *a1)
{
  if ( __sync_fetch_and_add(a1 + 2, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1938B40  (binary VA: 0x1938b40)
// Original: sub_1938B40
// ----------------------------------------------------------------------------
void sub_1938B40(volatile int32_t *a1)
{
  if ( a1 != (volatile int32_t *)(uintptr_t)(dword_213B808) )
    sub_1938B12(a1);
}

// ----------------------------------------------------------------------------
// Function: g4_std::string::Destroy  (binary VA: 0x1938b70)
// Original: std::string::~string
// ----------------------------------------------------------------------------
void g4_std::string::Destroy(uint32_t *a1)
{
  volatile int32_t *v1;

  v1 = (volatile int32_t *)(*a1 - 12);
  if ( v1 != (volatile int32_t *)(uintptr_t)(dword_213B808) )
    sub_1938B12(v1);
}

// ----------------------------------------------------------------------------
// Function: g4_std::string::clear  (binary VA: 0x1938bb0)
// Original: std::string::clear
// ----------------------------------------------------------------------------
int * g4_std::string::clear(const void **a1, size_t a2, int a3, int a4)
{
  int *result;
  int v5;
  size_t n;
  unsigned int v7;
  int v8;
  size_t v9;
  volatile int32_t *v10;
  char *src;
  char *dest;
  unsigned int v13;
  char *v14;

  result = (int *)*a1;
  v5 = *((uint32_t *)*a1 - 3);
  v13 = v5 + a4 - a3;
  n = v5 - a2 - a3;
  v7 = *((uint32_t *)*a1 - 2);
  if ( v13 > v7 || *(result - 1) > 0 )
  {
    v8 = sub_1938930(v13, v7);
    v9 = a2;
    v14 = (char *)(v8 + 12);
    if ( a2 != 0 )
    {
      if ( a2 == 1 )
      {
        *(uint8_t *)(v8 + 12) = *(uint8_t *)*a1;
      }
      else
      {
        memcpy(v14, *a1, a2);
        v9 = a2;
      }
    }
    if ( n != 0 )
    {
      src = (char *)*a1 + v9 + a3;
      dest = &v14[a4 + v9];
      if ( n == 1 )
        *dest = *src;
      else
        memcpy(dest, src, n);
    }
    v10 = (volatile int32_t *)((char *)*a1 - 12);
    if ( v10 != (volatile int32_t *)(uintptr_t)(dword_213B808) )
      sub_1938B12(v10);
    result = (int *)v14;
    *a1 = v14;
  }
  else if ( a3 != a4 && n != 0 )
  {
    if ( n == 1 )
      *((uint8_t *)result + a4 + a2) = *((uint8_t *)result + a2 + a3);
    else
      memmove((char *)result + a4 + a2, (char *)result + a2 + a3, n);
    result = (int *)*a1;
  }
  if ( result - 3 != (int *)(uintptr_t)(dword_213B808) )
  {
    *(result - 1) = 0;
    *(result - 3) = v13;
    *((uint8_t *)result + v13) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1938D60  (binary VA: 0x1938d60)
// Original: sub_1938D60
// ----------------------------------------------------------------------------
const void ** sub_1938D60(const void **a1, size_t a2, int a3, uint8_t *src, size_t n)
{
  uint8_t *dest;

  g4_std::string::clear(a1, a2, a3, n);
  if ( n != 0 )
  {
    dest = (uint8_t *)((char *)*a1 + a2);
    if ( n == 1 )
      *dest = *src;
    else
      memcpy(dest, src, n);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::string::assign  (binary VA: 0x1938df0)
// Original: std::string::assign
// ----------------------------------------------------------------------------
static const void **g4_compat_def_26(const void **a1, int *src, size_t n)
{
  int *dest;
  int v4;

  dest = (int *)*a1;
  v4 = *((uint32_t *)*a1 - 3);
  if ( n > 0x3FFFFFFC )
    sub_1900180("basic_string::assign");
  if ( src < dest || src > (int *)((char *)dest + v4) || *(dest - 1) > 0 )
    return sub_1938D60(a1, 0, v4, src, n);
  if ( n <= (char *)src - (char *)dest )
  {
    if ( n != 1 )
    {
      memcpy(dest, src, n);
      dest = (int *)*a1;
      goto LABEL_9;
    }
LABEL_16:
    *(uint8_t *)dest = *(uint8_t *)src;
    dest = (int *)*a1;
    goto LABEL_9;
  }
  if ( src != dest )
  {
    if ( n != 1 )
    {
      memmove(dest, src, n);
      dest = (int *)*a1;
      goto LABEL_9;
    }
    goto LABEL_16;
  }
LABEL_9:
  if ( dest - 3 != (int *)(uintptr_t)(dword_213B808) )
  {
    *(dest - 1) = 0;
    *(dest - 3) = n;
    *((uint8_t *)dest + n) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1938F10  (binary VA: 0x1938f10)
// Original: sub_1938F10
// ----------------------------------------------------------------------------
const void ** sub_1938F10(const void **a1, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return (const void **)(uintptr_t)(g4_std_compat::string_assign(a1, (int *)s, v2));
}

// ----------------------------------------------------------------------------
// Function: sub_1938F60  (binary VA: 0x1938f60)
// Original: sub_1938F60
// ----------------------------------------------------------------------------
const void ** sub_1938F60(const void **a1, uint32_t *a2, size_t a3, size_t a4)
{
  size_t v4;
  size_t v5;

  v4 = *(uint32_t *)(*a2 - 12);
  if ( a3 > v4 )
    sub_1900210("basic_string::assign");
  v5 = v4 - a3;
  if ( v5 > a4 )
    v5 = a4;
  return (const void **)(uintptr_t)(g4_std_compat::string_assign(a1, (int *)(*a2 + a3), v5));
}

// ----------------------------------------------------------------------------
// Function: sub_1938FD0  (binary VA: 0x1938fd0)
// Original: sub_1938FD0
// ----------------------------------------------------------------------------
const void ** sub_1938FD0(const void **a1, int *a2, size_t a3)
{
  g4_std_compat::string_assign(a1, a2, a3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1939000  (binary VA: 0x1939000)
// Original: sub_1939000
// ----------------------------------------------------------------------------
const void ** sub_1939000(const void **a1, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return (const void **)(uintptr_t)(g4_std_compat::string_assign(a1, (int *)s, v2));
}

// ----------------------------------------------------------------------------
// Function: sub_1939050  (binary VA: 0x1939050)
// Original: sub_1939050
// ----------------------------------------------------------------------------
const void ** sub_1939050(const void **a1, size_t a2, int a3, size_t n, char a5)
{
  uint8_t *s;

  if ( n > a3 - *((uint32_t *)*a1 - 3) + 1073741820 )
    sub_1900180("basic_string::_M_replace_aux");
  g4_std::string::clear(a1, a2, a3, n);
  if ( n != 0 )
  {
    s = (uint8_t *)((char *)*a1 + a2);
    if ( n == 1 )
      *s = a5;
    else
      memset(s, a5, n);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1939110  (binary VA: 0x1939110)
// Original: sub_1939110
// ----------------------------------------------------------------------------
const void ** sub_1939110(const void **a1, int a2, int a3, size_t a4, char a5)
{
  return sub_1939050(a1, a2 - (uint32_t)(uintptr_t)(*a1), a3 - a2, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: sub_1939140  (binary VA: 0x1939140)
// Original: sub_1939140
// ----------------------------------------------------------------------------
const void ** sub_1939140(const void **a1, size_t a2, unsigned int a3, size_t a4, char a5)
{
  int v5;
  unsigned int v7;

  v7 = *((uint32_t *)*a1 - 3);
  if ( a2 > v7 )
    sub_1900210("basic_string::replace");
  v5 = v7 - a2;
  if ( v7 - a2 > a3 )
    v5 = a3;
  return sub_1939050(a1, a2, v5, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: sub_19391D0  (binary VA: 0x19391d0)
// Original: sub_19391D0
// ----------------------------------------------------------------------------
uint32_t * sub_19391D0(uint32_t *a1, const void **a2, int a3, char a4)
{
  size_t v4;
  uint32_t *v5;

  v4 = a3 - (uint32_t)(uintptr_t)(*a2);
  sub_1939050(a2, v4, 0, 1u, a4);
  v5 = (uint32_t *)(*a2);
  *a1 = (uint32_t)(uintptr_t)((char *)*a2 + v4);
  *(v5 - 1) = -1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1939240  (binary VA: 0x1939240)
// Original: sub_1939240
// ----------------------------------------------------------------------------
const void ** sub_1939240(const void **a1, size_t a2, size_t a3, char a4)
{
  if ( a2 > *((uint32_t *)*a1 - 3) )
    sub_1900210("basic_string::insert");
  return sub_1939050(a1, a2, 0, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: sub_19392B0  (binary VA: 0x19392b0)
// Original: sub_19392B0
// ----------------------------------------------------------------------------
const void ** sub_19392B0(const void **a1, size_t a2, char a3)
{
  return sub_1939050(a1, 0, *((uint32_t *)*a1 - 3), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19392F0  (binary VA: 0x19392f0)
// Original: sub_19392F0
// ----------------------------------------------------------------------------
const void ** sub_19392F0(const void **a1, int a2, size_t a3, char a4)
{
  return sub_1939050(a1, a2 - (uint32_t)(uintptr_t)(*a1), 0, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: sub_1939330  (binary VA: 0x1939330)
// Original: sub_1939330
// ----------------------------------------------------------------------------
const void ** sub_1939330(const void **a1, char a2)
{
  sub_1939050(a1, 0, *((uint32_t *)*a1 - 3), 1u, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1939370  (binary VA: 0x1939370)
// Original: sub_1939370
// ----------------------------------------------------------------------------
uint32_t * sub_1939370(uint32_t *a1, const void **a2, int a3, int a4)
{
  uint32_t *result;
  size_t v5;
  uint32_t *v6;

  result = a1;
  if ( a4 == a3 )
  {
    *a1 = a3;
  }
  else
  {
    v5 = a3 - (uint32_t)(uintptr_t)(*a2);
    g4_std::string::clear(a2, v5, a4 - a3, 0);
    v6 = (uint32_t *)(*a2);
    *(v6 - 1) = -1;
    *a1 = (uint32_t)(uintptr_t)((char *)v6 + v5);
    return a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19393F0  (binary VA: 0x19393f0)
// Original: sub_19393F0
// ----------------------------------------------------------------------------
uint32_t * sub_19393F0(uint32_t *a1, const void **a2, int a3)
{
  size_t v3;
  uint32_t *v4;

  v3 = a3 - (uint32_t)(uintptr_t)(*a2);
  g4_std::string::clear(a2, v3, 1, 0);
  v4 = (uint32_t *)(*a2);
  *a1 = (uint32_t)(uintptr_t)((char *)*a2 + v3);
  *(v4 - 1) = -1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1939450  (binary VA: 0x1939450)
// Original: sub_1939450
// ----------------------------------------------------------------------------
const void ** sub_1939450(const void **a1, size_t a2, unsigned int a3)
{
  size_t v3;
  unsigned int v4;

  v3 = *((uint32_t *)*a1 - 3);
  if ( a2 > v3 )
    sub_1900210("basic_string::erase");
  v4 = v3 - a2;
  if ( v4 > a3 )
    v4 = a3;
  g4_std::string::clear(a1, a2, v4, 0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19394C0  (binary VA: 0x19394c0)
// Original: sub_19394C0
// ----------------------------------------------------------------------------
const void ** sub_19394C0(const void **a1, size_t a2, int *a3, size_t n)
{
  int *v4;
  unsigned int v5;
  uint8_t *src;
  uint8_t *dest;
  int v9;
  uint8_t *v10;
  uint8_t *v11;
  int v12;

  v4 = (int *)*a1;
  v5 = *((uint32_t *)*a1 - 3);
  if ( a2 > v5 )
    sub_1900210("basic_string::insert");
  if ( n > 1073741820 - v5 )
    sub_1900180("basic_string::insert");
  if ( a3 < v4 || a3 > (int *)((char *)v4 + v5) || *(v4 - 1) > 0 )
    return sub_1938D60(a1, a2, 0, a3, n);
  g4_std::string::clear(a1, a2, 0, n);
  src = (uint8_t *)((char *)*a1  + ((uintptr_t)((char *)a3) - (uintptr_t)(char *)(v4)));
  dest = (uint8_t *)((char *)*a1 + a2);
  if ( dest >= &src[n] )
  {
    if ( n == 1 )
      *dest = *src;
    else
      memcpy(dest, src, n);
    return a1;
  }
  else if ( src >= dest )
  {
    if ( n == 1 )
      *dest = src[1];
    else
      memcpy(dest, &src[n], n);
    return a1;
  }
  else
  {
    v9 = dest - src;
    if ( dest - src == 1 )
    {
      *dest = *src;
    }
    else
    {
      v12 = dest - src;
      memcpy(dest, src, dest - src);
      v9 = v12;
    }
    v10 = &dest[n];
    v11 = &dest[v9];
    if ( n - v9 == 1 )
      *v11 = *v10;
    else
      memcpy(v11, v10, n - v9);
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1939670  (binary VA: 0x1939670)
// Original: sub_1939670
// ----------------------------------------------------------------------------
const void ** sub_1939670(const void **a1, size_t a2, char *s)
{
  size_t v3;

  v3 = strlen(s);
  return sub_19394C0(a1, a2, (int *)s, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_19396C0  (binary VA: 0x19396c0)
// Original: sub_19396C0
// ----------------------------------------------------------------------------
const void ** sub_19396C0(const void **a1, size_t a2, uint32_t *a3, size_t a4, size_t a5)
{
  size_t v5;
  size_t v6;

  v5 = *(uint32_t *)(*a3 - 12);
  if ( a4 > v5 )
    sub_1900210("basic_string::insert");
  v6 = v5 - a4;
  if ( v6 > a5 )
    v6 = a5;
  return sub_19394C0(a1, a2, (int *)(*a3 + a4), v6);
}

// ----------------------------------------------------------------------------
// Function: sub_1939740  (binary VA: 0x1939740)
// Original: sub_1939740
// ----------------------------------------------------------------------------
const void ** sub_1939740(const void **a1, int a2, int *a3, size_t a4)
{
  return sub_19394C0(a1, a2 - (uint32_t)(uintptr_t)(*a1), a3, a4);
}

// ----------------------------------------------------------------------------
// Function: sub_1939760  (binary VA: 0x1939760)
// Original: sub_1939760
// ----------------------------------------------------------------------------
const void ** sub_1939760(const void **a1, size_t a2, int **a3)
{
  return sub_19394C0(a1, a2, *a3, *(*a3 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_1939790  (binary VA: 0x1939790)
// Original: sub_1939790
// ----------------------------------------------------------------------------
int * sub_1939790(const void **a1)
{
  return g4_std::string::clear(a1, 0, *((uint32_t *)*a1 - 3), 0);
}

// ----------------------------------------------------------------------------
// Function: sub_19397C0  (binary VA: 0x19397c0)
// Original: sub_19397C0
// ----------------------------------------------------------------------------
int * sub_19397C0(const void **a1)
{
  int *result;

  result = (int *)*a1;
  if ( (char *)*a1 - 12 != (char *)dword_213B808 )
  {
    if ( *(result - 1) > 0 )
    {
      g4_std::string::clear(a1, 0, 0, 0);
      result = (int *)*a1;
    }
    *(result - 1) = -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1939830  (binary VA: 0x1939830)
// Original: sub_1939830
// ----------------------------------------------------------------------------
int * sub_1939830(const void **a1)
{
  int *result;

  result = (int *)a1;
  if ( *((int *)*a1 - 1) >= 0 )
    return sub_19397C0(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1939850  (binary VA: 0x1939850)
// Original: sub_1939850
// ----------------------------------------------------------------------------
char * sub_1939850(const void **a1, int a2)
{
  char *v2;

  v2 = (char *)*a1;
  if ( *((int *)*a1 - 1) >= 0 )
  {
    sub_19397C0(a1);
    v2 = (char *)*a1;
  }
  return &v2[a2];
}

// ----------------------------------------------------------------------------
// Function: sub_1939880  (binary VA: 0x1939880)
// Original: sub_1939880
// ----------------------------------------------------------------------------
char * sub_1939880(const void **a1)
{
  char *v1;
  int v2;

  v1 = (char *)*a1;
  v2 = *((uint32_t *)*a1 - 3) - 1;
  if ( *((int *)*a1 - 1) >= 0 )
  {
    sub_19397C0(a1);
    v1 = (char *)*a1;
  }
  return &v1[v2];
}

// ----------------------------------------------------------------------------
// Function: sub_19398C0  (binary VA: 0x19398c0)
// Original: sub_19398C0
// ----------------------------------------------------------------------------
const void * sub_19398C0(const void **a1)
{
  const void *result;

  result = *a1;
  if ( *((int *)*a1 - 1) >= 0 )
  {
    sub_19397C0(a1);
    return *a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19398F0  (binary VA: 0x19398f0)
// Original: sub_19398F0
// ----------------------------------------------------------------------------
uint32_t * sub_19398F0(uint32_t *a1, const void **a2)
{
  uint32_t *v2;

  v2 = (uint32_t *)(*a2);
  if ( *((int *)*a2 - 1) >= 0 )
  {
    sub_19397C0(a2);
    v2 = (uint32_t *)(*a2);
  }
  *a1 = (uint32_t)(uintptr_t)((char *)v2 + *(v2 - 3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1939930  (binary VA: 0x1939930)
// Original: sub_1939930
// ----------------------------------------------------------------------------
uint32_t * sub_1939930(uint32_t *a1, const void **a2)
{
  const void *v2;

  v2 = *a2;
  if ( *((int *)*a2 - 1) >= 0 )
  {
    sub_19397C0(a2);
    v2 = *a2;
  }
  *a1 = (uint32_t)(uintptr_t)(v2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1939970  (binary VA: 0x1939970)
// Original: sub_1939970
// ----------------------------------------------------------------------------
uint32_t * sub_1939970(uint32_t *a1, const void **a2)
{
  const void *v2;

  v2 = *a2;
  if ( *((int *)*a2 - 1) >= 0 )
  {
    sub_19397C0(a2);
    v2 = *a2;
  }
  *a1 = (uint32_t)(uintptr_t)(v2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19399B0  (binary VA: 0x19399b0)
// Original: sub_19399B0
// ----------------------------------------------------------------------------
uint32_t * sub_19399B0(uint32_t *a1, const void **a2)
{
  uint32_t *v2;

  v2 = (uint32_t *)(*a2);
  if ( *((int *)*a2 - 1) >= 0 )
  {
    sub_19397C0(a2);
    v2 = (uint32_t *)(*a2);
  }
  *a1 = (uint32_t)(uintptr_t)((char *)v2 + *(v2 - 3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19399F0  (binary VA: 0x19399f0)
// Original: sub_19399F0
// ----------------------------------------------------------------------------
char * sub_19399F0(const void **a1, unsigned int a2)
{
  int *v2;

  v2 = (int *)*a1;
  if ( a2 >= *((uint32_t *)*a1 - 3) )
    sub_1900210("basic_string::at");
  if ( *(v2 - 1) >= 0 )
  {
    sub_19397C0(a1);
    v2 = (int *)*a1;
  }
  return (char *)v2 + a2;
}

// ----------------------------------------------------------------------------
// Function: sub_1939A50  (binary VA: 0x1939a50)
// Original: sub_1939A50
// ----------------------------------------------------------------------------
int sub_1939A50(int a1)
{
  if ( (uint32_t *)a1 != dword_213B808 )
    __sync_add_and_fetch((volatile int32_t *)(a1 + 8), 1u);
  return a1 + 12;
}

// ----------------------------------------------------------------------------
// Function: sub_1939A80  (binary VA: 0x1939a80)
// Original: sub_1939A80
// ----------------------------------------------------------------------------
size_t * sub_1939A80(int a1, int a2, int a3)
{
  size_t *v3;
  size_t v4;

  v3 = (size_t *)sub_1938930(*(uint32_t *)a1 + a3, *(uint32_t *)(a1 + 4));
  v4 = 0;
  if ( *(uint32_t *)a1 != 0 )
  {
    if ( *(uint32_t *)a1 == 1 )
      *((uint8_t *)v3 + 12) = *(uint8_t *)(a1 + 12);
    else
      memcpy(v3 + 3, (const void *)(a1 + 12), *(uint32_t *)a1);
    v4 = *(uint32_t *)a1;
  }
  if ( v3 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    v3[2] = 0;
    *v3 = v4;
    *((uint8_t *)v3 + v4 + 12) = 0;
  }
  return v3 + 3;
}

// ----------------------------------------------------------------------------
// Function: sub_1939B30  (binary VA: 0x1939b30)
// Original: sub_1939B30
// ----------------------------------------------------------------------------
size_t * sub_1939B30(int a1, int a2)
{
  if ( *(int *)(a1 + 8) < 0 )
    return sub_1939A80(a1, a2, 0);
  if ( (uint32_t *)a1 != dword_213B808 )
    __sync_add_and_fetch((volatile int32_t *)(a1 + 8), 1u);
  return (size_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: sub_1939B80  (binary VA: 0x1939b80)
// Original: sub_1939B80
// ----------------------------------------------------------------------------
void sub_1939B80(size_t **a1, unsigned int a2)
{
  unsigned int v2;
  size_t *v3;
  unsigned int v4;
  size_t *v5;
  volatile int32_t *v6;
  char v7[13];

  v2 = a2;
  v3 = *a1;
  if ( a2 != *(*a1 - 2) || (int)*(v3 - 1) > 0 )
  {
    v4 = *(v3 - 3);
    if ( a2 < v4 )
      v2 = *(v3 - 3);
    v5 = sub_1939A80((int)(uintptr_t)(v3 - 3), (int)(uintptr_t)(v7), v2 - v4);
    v6 = (volatile int32_t *)(*a1 - 3);
    if ( v6 != (volatile int32_t *)(uintptr_t)(dword_213B808) )
      sub_1938B12(v6);
    *a1 = v5;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1939C10  (binary VA: 0x1939c10)
// Original: sub_1939C10
// ----------------------------------------------------------------------------
size_t * sub_1939C10(size_t **a1, char a2)
{
  size_t *v2;
  char v3;
  int v4;
  size_t v5;
  size_t *result;

  v2 = *a1;
  v3 = a2;
  v4 = *(*a1 - 3);
  v5 = v4 + 1;
  if ( v4 + 1 > *(*a1 - 2) || (int)*(v2 - 1) > 0 )
  {
    sub_1939B80(a1, v4 + 1);
    v2 = *a1;
    v3 = a2;
    v4 = *(*a1 - 3);
  }
  *((uint8_t *)v2 + v4) = v3;
  result = *a1;
  if ( *a1 - 3 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    *(result - 1) = 0;
    *(result - 3) = v5;
    *((uint8_t *)result + v5) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::string::reserve  (binary VA: 0x1939ca0)
// Original: std::string::reserve
// ----------------------------------------------------------------------------
size_t ** g4_std_compat::string_reserve(size_t **a1, size_t n, char a3)
{
  char v3;
  size_t *v5;
  int v6;
  size_t v7;
  char *s;
  size_t *v9;

  v3 = a3;
  if ( n != 0 )
  {
    v5 = *a1;
    v6 = *(*a1 - 3);
    if ( n > 1073741820 - v6 )
      sub_1900180("basic_string::append");
    v7 = n + v6;
    if ( n + v6 > *(v5 - 2) || (int)*(v5 - 1) > 0 )
    {
      sub_1939B80(a1, n + v6);
      v5 = *a1;
      v3 = a3;
      v6 = *(*a1 - 3);
    }
    s = (char *)v5 + v6;
    if ( n == 1 )
      *s = v3;
    else
      memset(s, v3, n);
    v9 = *a1;
    if ( *a1 - 3 != (size_t *)(uintptr_t)(dword_213B808) )
    {
      *(v9 - 1) = 0;
      *(v9 - 3) = v7;
      *((uint8_t *)v9 + v7) = 0;
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1939D80  (binary VA: 0x1939d80)
// Original: sub_1939D80
// ----------------------------------------------------------------------------
int * sub_1939D80(size_t **a1, size_t a2, char a3)
{
  int *result;
  unsigned int v4;

  result = (int *)a2;
  v4 = *(*a1 - 3);
  if ( a2 > 0x3FFFFFFC )
    sub_1900180("basic_string::resize");
  if ( a2 > v4 )
    return (int *)g4_std_compat::string_reserve(a1, a2 - v4, a3);
  if ( a2 < v4 )
    return g4_std::string::clear((const void **)a1, a2, v4 - a2, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1939E30  (binary VA: 0x1939e30)
// Original: sub_1939E30
// ----------------------------------------------------------------------------
int * sub_1939E30(size_t **a1, size_t a2)
{
  return sub_1939D80(a1, a2, 0);
}

// ----------------------------------------------------------------------------
// Function: g4_std::string::append  (binary VA: 0x1939e60)
// Original: std::string::append
// ----------------------------------------------------------------------------
size_t ** g4_std::string::append(size_t **a1, char *a2, size_t n)
{
  char *src;
  size_t *v5;
  int v6;
  unsigned int v7;
  char *dest;
  size_t *v9;
  char *v10;

  src = a2;
  if ( n != 0 )
  {
    v5 = *a1;
    v6 = *(*a1 - 3);
    if ( n > 1073741820 - v6 )
      sub_1900180("basic_string::append");
    v7 = n + v6;
    if ( n + v6 > *(v5 - 2) || (int)*(v5 - 1) > 0 )
    {
      if ( a2 < (char *)v5 || a2 > (char *)v5 + v6 )
      {
        sub_1939B80(a1, v7);
        v5 = *a1;
        src = a2;
        v6 = *(*a1 - 3);
      }
      else
      {
        v10 = (char *)(a2 - (char *)v5);
        sub_1939B80(a1, v7);
        v5 = *a1;
        src = &v10[(uint32_t)(uintptr_t)(*a1)];
        v6 = *(*a1 - 3);
      }
    }
    dest = (char *)v5 + v6;
    if ( n == 1 )
      *dest = *src;
    else
      memcpy(dest, src, n);
    v9 = *a1;
    if ( *a1 - 3 != (size_t *)(uintptr_t)(dword_213B808) )
    {
      *(v9 - 1) = 0;
      *(v9 - 3) = v7;
      *((uint8_t *)v9 + v7) = 0;
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1939F80  (binary VA: 0x1939f80)
// Original: sub_1939F80
// ----------------------------------------------------------------------------
size_t ** sub_1939F80(size_t **a1, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return g4_std::string::append(a1, s, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1939FE0  (binary VA: 0x1939fe0)
// Original: sub_1939FE0
// ----------------------------------------------------------------------------
size_t ** sub_1939FE0(size_t **a1, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return g4_std::string::append(a1, s, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_193A030  (binary VA: 0x193a030)
// Original: sub_193A030
// ----------------------------------------------------------------------------
size_t ** sub_193A030(size_t **a1, int *a2, unsigned int a3, size_t a4)
{
  int v4;
  unsigned int v5;
  size_t n;
  size_t *v7;
  uint8_t *src;
  uint8_t *dest;
  size_t *v10;
  int v12;
  unsigned int v13;

  v4 = *a2;
  v5 = *(uint32_t *)(*a2 - 12);
  if ( a3 > v5 )
    sub_1900210("basic_string::append");
  n = v5 - a3;
  if ( n > a4 )
    n = a4;
  if ( n != 0 )
  {
    v7 = *a1;
    v12 = *(*a1 - 3);
    v13 = n + v12;
    if ( n + v12 > *(*a1 - 2) || (int)*(v7 - 1) > 0 )
    {
      sub_1939B80(a1, v13);
      v7 = *a1;
      v4 = *a2;
      v12 = *(*a1 - 3);
    }
    src = (uint8_t *)(v4 + a3);
    dest = (uint8_t *)((char *)v7 + v12);
    if ( n == 1 )
      *dest = *src;
    else
      memcpy(dest, src, n);
    v10 = *a1;
    if ( *a1 - 3 != (size_t *)(uintptr_t)(dword_213B808) )
    {
      *(v10 - 1) = 0;
      *(v10 - 3) = v13;
      *((uint8_t *)v10 + v13) = 0;
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::string::append_str  (binary VA: 0x193a130)
// Original: std::string::append_str
// ----------------------------------------------------------------------------
size_t ** g4_std::string::append_str(size_t **a1, uint8_t **a2)
{
  uint8_t *src;
  size_t n;
  size_t *v4;
  int v5;
  uint8_t *dest;
  size_t *v7;
  unsigned int v9;

  src = *a2;
  n = *((uint32_t *)*a2 - 3);
  if ( n != 0 )
  {
    v4 = *a1;
    v5 = *(*a1 - 3);
    v9 = v5 + n;
    if ( v5 + n > *(*a1 - 2) || (int)*(v4 - 1) > 0 )
    {
      sub_1939B80(a1, v9);
      v4 = *a1;
      src = *a2;
      v5 = *(*a1 - 3);
    }
    dest = (uint8_t *)((char *)v4 + v5);
    if ( n == 1 )
      *dest = *src;
    else
      memcpy(dest, src, n);
    v7 = *a1;
    if ( *a1 - 3 != (size_t *)(uintptr_t)(dword_213B808) )
    {
      *(v7 - 1) = 0;
      *(v7 - 3) = v9;
      *((uint8_t *)v7 + v9) = 0;
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193A210  (binary VA: 0x193a210)
// Original: sub_193A210
// ----------------------------------------------------------------------------
void sub_193A210(size_t **a1)
{
  sub_1939B80(a1, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_193A250  (binary VA: 0x193a250)
// Original: sub_193A250
// ----------------------------------------------------------------------------
size_t ** sub_193A250(size_t **a1, char a2)
{
  size_t *v2;
  char v3;
  int v4;
  size_t v5;
  size_t *v6;

  v2 = *a1;
  v3 = a2;
  v4 = *(*a1 - 3);
  v5 = v4 + 1;
  if ( v4 + 1 > *(*a1 - 2) || (int)*(v2 - 1) > 0 )
  {
    sub_1939B80(a1, v4 + 1);
    v2 = *a1;
    v3 = a2;
    v4 = *(*a1 - 3);
  }
  *((uint8_t *)v2 + v4) = v3;
  v6 = *a1;
  if ( *a1 - 3 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    *(v6 - 1) = 0;
    *(v6 - 3) = v5;
    *((uint8_t *)v6 + v5) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::string::construct_copy  (binary VA: 0x193a2e0)
// Original: std::string::__construct_copy
// ----------------------------------------------------------------------------
size_t * g4_std::string::construct_copy(size_t **a1, size_t **a2)
{
  size_t *result;
  uint8_t v3[13];

  result = *a2;
  if ( (*(*a2 - 1) & 0x80000000) != 0 )
  {
    result = sub_1939A80((int)(uintptr_t)(*a2 - 3), (int)(uintptr_t)(v3), 0);
    *a1 = result;
  }
  else
  {
    if ( *a2 - 3 != (size_t *)(uintptr_t)(dword_213B808) )
      __sync_add_and_fetch((volatile int32_t *)result - 1, 1u);
    *a1 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::string::assign_str  (binary VA: 0x193a350)
// Original: std::string::assign_str
// ----------------------------------------------------------------------------
size_t ** g4_std::string::assign_str(size_t **a1, size_t **a2)
{
  size_t *v2;
  volatile int32_t *v3;
  volatile int32_t *v4;
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v2 = *a2;
  v3 = (volatile int32_t *)(*a1 - 3);
  v4 = (volatile int32_t *)(*a2 - 3);
  if ( v4 != v3 )
  {
    if ( (*(v2 - 1) & 0x80000000) != 0 )
    {
      v2 = sub_1939A80((int)(uintptr_t)(v4), (int)(uintptr_t)(&v6), 0);
      v3 = (volatile int32_t *)(*a1 - 3);
    }
    else if ( v4 != (volatile int32_t *)(uintptr_t)(dword_213B808) )
    {
      __sync_add_and_fetch((volatile int32_t *)v2 - 1, 1u);
      v3 = (volatile int32_t *)(*a1 - 3);
    }
    if ( v3 != (volatile int32_t *)(uintptr_t)(dword_213B808) )
      sub_1938B12(v3);
    *a1 = v2;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193A400  (binary VA: 0x193a400)
// Original: sub_193A400
// ----------------------------------------------------------------------------
size_t ** sub_193A400(size_t **a1, char a2, uint8_t **a3)
{
  *a1 = (size_t *)(&dword_213B814);
  sub_1939B80(a1, *((uint32_t *)*a3 - 3) + 1);
  g4_std_compat::string_reserve(a1, 1u, a2);
  g4_std::string::append_str(a1, a3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193A4A0  (binary VA: 0x193a4a0)
// Original: sub_193A4A0
// ----------------------------------------------------------------------------
uint32_t * sub_193A4A0(uint8_t *src, uint8_t *a2)
{
  uint32_t *v2;
  size_t n;
  int v5;
  size_t *v6;
  size_t *v7;

  v2 = &dword_213B814;
  if ( src != a2 )
  {
    n = a2 - src;
    v5 = sub_1938930(a2 - src, 0);
    v6 = (size_t *)v5;
    v2 = (uint32_t *)(v5 + 12);
    if ( a2 - src == 1 )
    {
      *(uint8_t *)(v5 + 12) = *src;
    }
    else
    {
      v7 = (size_t *)v5;
      memcpy((void *)(v5 + 12), src, n);
      v6 = v7;
    }
    if ( v6 != (size_t *)(uintptr_t)(dword_213B808) )
    {
      v6[2] = 0;
      *v6 = n;
      *((uint8_t *)v6 + n + 12) = 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_193A550  (binary VA: 0x193a550)
// Original: sub_193A550
// ----------------------------------------------------------------------------
uint32_t * sub_193A550(uint32_t *a1, uint8_t *a2, uint8_t *a3)
{
  uint32_t *result;

  result = sub_193A4A0(a2, a3);
  *a1 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193A580  (binary VA: 0x193a580)
// Original: sub_193A580
// ----------------------------------------------------------------------------
uint32_t * sub_193A580(uint8_t *src, uint8_t *a2)
{
  size_t n;
  int v3;
  void *dest;
  int v6;

  if ( src == a2 )
    return &dword_213B814;
  if ( src == nullptr )
  {
    if ( a2 != nullptr )
      sub_18FFFD0("basic_string::_S_construct null not valid");
    n = 0;
    v3 = sub_1938930(0, 0);
    dest = (void *)(v3 + 12);
    goto LABEL_4;
  }
  n = a2 - src;
  v3 = sub_1938930(a2 - src, 0);
  dest = (void *)(v3 + 12);
  if ( a2 - src != 1 )
  {
LABEL_4:
    v6 = v3;
    memcpy(dest, src, n);
    v3 = v6;
    goto LABEL_5;
  }
  *(uint8_t *)(v3 + 12) = *src;
LABEL_5:
  if ( (uint32_t *)v3 != dword_213B808 )
  {
    *(uint32_t *)(v3 + 8) = 0;
    *(uint32_t *)v3 = n;
    *((uint8_t *)dest + n) = 0;
  }
  return (uint32_t *)(dest);
}

// ----------------------------------------------------------------------------
// Function: sub_193A670  (binary VA: 0x193a670)
// Original: sub_193A670
// ----------------------------------------------------------------------------
uint32_t * sub_193A670(uint32_t *a1, uint32_t *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  uint32_t *result;

  v4 = *(uint32_t *)(*a2 - 12);
  if ( a3 > v4 )
    sub_1900210("basic_string::basic_string");
  v5 = v4 - a3;
  if ( v5 > a4 )
    v5 = a4;
  result = sub_193A580((uint8_t *)(*a2 + a3), (uint8_t *)(*a2 + a3 + v5));
  *a1 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193A6F0  (binary VA: 0x193a6f0)
// Original: sub_193A6F0
// ----------------------------------------------------------------------------
uint32_t * sub_193A6F0(uint32_t *a1, uint32_t *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  uint32_t *result;

  v4 = *(uint32_t *)(*a2 - 12);
  if ( a3 > v4 )
    sub_1900210("basic_string::basic_string");
  v5 = v4 - a3;
  if ( v5 > a4 )
    v5 = a4;
  result = sub_193A580((uint8_t *)(*a2 + a3), (uint8_t *)(*a2 + a3 + v5));
  *a1 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193A770  (binary VA: 0x193a770)
// Original: sub_193A770
// ----------------------------------------------------------------------------
uint32_t * sub_193A770(uint32_t *a1, uint32_t *a2, unsigned int a3, unsigned int a4)
{
  if ( a3 > *(uint32_t *)(*a2 - 12) )
    sub_1900210("basic_string::substr");
  sub_193A6F0(a1, a2, a3, a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193A7E0  (binary VA: 0x193a7e0)
// Original: sub_193A7E0
// ----------------------------------------------------------------------------
uint32_t * sub_193A7E0(uint8_t *src, uint8_t *a2)
{
  size_t n;
  int v3;
  void *dest;
  int v6;

  if ( src == a2 )
    return &dword_213B814;
  if ( src == nullptr )
  {
    if ( a2 != nullptr )
      sub_18FFFD0("basic_string::_S_construct null not valid");
    n = 0;
    v3 = sub_1938930(0, 0);
    dest = (void *)(v3 + 12);
    goto LABEL_4;
  }
  n = a2 - src;
  v3 = sub_1938930(a2 - src, 0);
  dest = (void *)(v3 + 12);
  if ( a2 - src != 1 )
  {
LABEL_4:
    v6 = v3;
    memcpy(dest, src, n);
    v3 = v6;
    goto LABEL_5;
  }
  *(uint8_t *)(v3 + 12) = *src;
LABEL_5:
  if ( (uint32_t *)v3 != dword_213B808 )
  {
    *(uint32_t *)(v3 + 8) = 0;
    *(uint32_t *)v3 = n;
    *((uint8_t *)dest + n) = 0;
  }
  return (uint32_t *)(dest);
}

// ----------------------------------------------------------------------------
// Function: sub_193A8D0  (binary VA: 0x193a8d0)
// Original: sub_193A8D0
// ----------------------------------------------------------------------------
uint32_t * sub_193A8D0(uint32_t *a1, uint8_t *a2, int a3)
{
  uint32_t *result;

  result = sub_193A7E0(a2, &a2[a3]);
  *a1 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::string::construct_from_cstr  (binary VA: 0x193a910)
// Original: std::string::__construct_from_cstr
// ----------------------------------------------------------------------------
uint32_t * g4_std::string::construct_from_cstr(uint32_t *a1, char *s)
{
  int v2;
  uint32_t *result;

  v2 = -1;
  if ( s != nullptr )
    v2 = (int)(uintptr_t)(&s[strlen(s)]);
  result = sub_193A7E0(s, (uint8_t *)v2);
  *a1 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193A970  (binary VA: 0x193a970)
// Original: sub_193A970
// ----------------------------------------------------------------------------
uint32_t * sub_193A970(uint32_t *a1, uint8_t *a2, int a3)
{
  uint32_t *result;

  result = sub_193A7E0(a2, &a2[a3]);
  *a1 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193A9B0  (binary VA: 0x193a9b0)
// Original: sub_193A9B0
// ----------------------------------------------------------------------------
const void ** sub_193A9B0(const void **a1, size_t a2, unsigned int a3, int *a4, size_t n)
{
  const void **v5;
  int *v6;
  unsigned int v7;
  int v8;
  uint8_t *dest;
  typedef char *_g4_t_v11;
  typedef uint16_t _g4_t_v12[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v12)) > _g4_s1 ? (26u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 26u);

  v5 = a1;
  v6 = (int *)*a1;
  v7 = *((uint32_t *)*a1 - 3);
  if ( a2 > v7 )
    sub_1900210("basic_string::replace");
  v8 = v7 - a2;
  if ( v7 - a2 > a3 )
    v8 = a3;
  if ( n > v8 - v7 + 1073741820 )
    sub_1900180("basic_string::replace");
  if ( a4 < v6 || a4 > (int *)((char *)v6 + v7) || *(v6 - 1) > 0 )
    return sub_1938D60(a1, a2, v8, a4, n);
  v11 = (char *)((char *)a4 - (char *)v6);
  if ( (char *)a4 + n <= (char *)v6 + a2 )
    goto LABEL_13;
  if ( a4 >= (int *)((char *)v6 + v8 + a2) )
  {
    v11 += n - v8;
LABEL_13:
    g4_std::string::clear(a1, a2, v8, n);
    dest = (uint8_t *)((char *)*a1 + a2);
    if ( n == 1 )
      *dest = v11[(uint32_t)(uintptr_t)(*a1)];
    else
      memcpy(dest, &v11[(uint32_t)(uintptr_t)(*a1)], n);
    return v5;
  }
  sub_193A970(&v12[1], a4, n);
  v5 = sub_1938D60(a1, a2, v8, *(uint8_t **)&v12[1], n);
  if ( (uint32_t *)(*(uint32_t *)&v12[1] - 12) != dword_213B808 )
    sub_1938B12((volatile int32_t *)(*(uint32_t *)&v12[1] - 12));
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_193AB80  (binary VA: 0x193ab80)
// Original: sub_193AB80
// ----------------------------------------------------------------------------
const void ** sub_193AB80(const void **a1, int a2, int a3, int *a4, int a5)
{
  return sub_193A9B0(a1, a2 - (uint32_t)(uintptr_t)(*a1), a3 - a2, a4, a5 - (uint32_t)(uintptr_t)(a4));
}

// ----------------------------------------------------------------------------
// Function: sub_193ABB0  (binary VA: 0x193abb0)
// Original: sub_193ABB0
// ----------------------------------------------------------------------------
const void ** sub_193ABB0(const void **a1, int a2, int a3, int *a4, int a5)
{
  return sub_193A9B0(a1, a2 - (uint32_t)(uintptr_t)(*a1), a3 - a2, a4, a5 - (uint32_t)(uintptr_t)(a4));
}

// ----------------------------------------------------------------------------
// Function: sub_193ABE0  (binary VA: 0x193abe0)
// Original: sub_193ABE0
// ----------------------------------------------------------------------------
const void ** sub_193ABE0(const void **a1, int a2, int a3, int *a4, int a5)
{
  return sub_193A9B0(a1, a2 - (uint32_t)(uintptr_t)(*a1), a3 - a2, a4, a5 - (uint32_t)(uintptr_t)(a4));
}

// ----------------------------------------------------------------------------
// Function: sub_193AC10  (binary VA: 0x193ac10)
// Original: sub_193AC10
// ----------------------------------------------------------------------------
const void ** sub_193AC10(const void **a1, int a2, int a3, int *a4, int a5)
{
  return sub_193A9B0(a1, a2 - (uint32_t)(uintptr_t)(*a1), a3 - a2, a4, a5 - (uint32_t)(uintptr_t)(a4));
}

// ----------------------------------------------------------------------------
// Function: sub_193AC40  (binary VA: 0x193ac40)
// Original: sub_193AC40
// ----------------------------------------------------------------------------
const void ** sub_193AC40(const void **a1, int a2, int a3, int *a4, size_t a5)
{
  return sub_193A9B0(a1, a2 - (uint32_t)(uintptr_t)(*a1), a3 - a2, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: sub_193AC60  (binary VA: 0x193ac60)
// Original: sub_193AC60
// ----------------------------------------------------------------------------
const void ** sub_193AC60(const void **a1, size_t a2, unsigned int a3, char *s)
{
  size_t v4;

  v4 = strlen(s);
  return sub_193A9B0(a1, a2, a3, (int *)s, v4);
}

// ----------------------------------------------------------------------------
// Function: sub_193ACC0  (binary VA: 0x193acc0)
// Original: sub_193ACC0
// ----------------------------------------------------------------------------
const void ** sub_193ACC0(const void **a1, size_t a2, unsigned int a3, uint32_t *a4, size_t a5, size_t a6)
{
  size_t v6;
  size_t v7;

  v6 = *(uint32_t *)(*a4 - 12);
  if ( a5 > v6 )
    sub_1900210("basic_string::replace");
  v7 = v6 - a5;
  if ( v7 > a6 )
    v7 = a6;
  return sub_193A9B0(a1, a2, a3, (int *)(*a4 + a5), v7);
}

// ----------------------------------------------------------------------------
// Function: sub_193AD50  (binary VA: 0x193ad50)
// Original: sub_193AD50
// ----------------------------------------------------------------------------
const void ** sub_193AD50(const void **a1, size_t a2, unsigned int a3, int **a4)
{
  return sub_193A9B0(a1, a2, a3, *a4, *(*a4 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_193AD90  (binary VA: 0x193ad90)
// Original: sub_193AD90
// ----------------------------------------------------------------------------
const void ** sub_193AD90(const void **a1, int a2, int a3, int *a4, size_t a5)
{
  return sub_193A9B0(a1, a2 - (uint32_t)(uintptr_t)(*a1), a3 - a2, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: sub_193ADB0  (binary VA: 0x193adb0)
// Original: sub_193ADB0
// ----------------------------------------------------------------------------
const void ** sub_193ADB0(const void **a1, int a2, int a3, char *s)
{
  size_t v4;

  v4 = strlen(s);
  return sub_193A9B0(a1, a2 - (uint32_t)(uintptr_t)(*a1), a3 - a2, (int *)s, v4);
}

// ----------------------------------------------------------------------------
// Function: sub_193AE20  (binary VA: 0x193ae20)
// Original: sub_193AE20
// ----------------------------------------------------------------------------
const void ** sub_193AE20(const void **a1, int a2, int a3, int **a4)
{
  return sub_193A9B0(a1, a2 - (uint32_t)(uintptr_t)(*a1), a3 - a2, *a4, *(*a4 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_193AE90  (binary VA: 0x193ae90)
// Original: sub_193AE90
// ----------------------------------------------------------------------------
int sub_193AE90(int a1)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 8) + 20);
}

// ----------------------------------------------------------------------------
// Function: sub_193AEA0  (binary VA: 0x193aea0)
// Original: sub_193AEA0
// ----------------------------------------------------------------------------
int sub_193AEA0(int a1)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 8) + 24);
}

// ----------------------------------------------------------------------------
// Function: sub_193AEB0  (binary VA: 0x193aeb0)
// Original: sub_193AEB0
// ----------------------------------------------------------------------------
int sub_193AEB0(int a1)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 8) + 52);
}

// ----------------------------------------------------------------------------
// Function: sub_193AEC0  (binary VA: 0x193aec0)
// Original: sub_193AEC0
// ----------------------------------------------------------------------------
uint32_t * sub_193AEC0(uint32_t *a1, int a2)
{
  *a1 = *(uint32_t *)(*(uint32_t *)(a2 + 8) + 56);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193AEE0  (binary VA: 0x193aee0)
// Original: sub_193AEE0
// ----------------------------------------------------------------------------
uint32_t * sub_193AEE0(uint32_t *a1, int a2)
{
  *a1 = *(uint32_t *)(*(uint32_t *)(a2 + 8) + 60);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193AF00  (binary VA: 0x193af00)
// Original: sub_193AF00
// ----------------------------------------------------------------------------
int sub_193AF00(int a1)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 8) + 20);
}

// ----------------------------------------------------------------------------
// Function: sub_193AF10  (binary VA: 0x193af10)
// Original: sub_193AF10
// ----------------------------------------------------------------------------
int sub_193AF10(int a1)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 8) + 24);
}

// ----------------------------------------------------------------------------
// Function: sub_193AF20  (binary VA: 0x193af20)
// Original: sub_193AF20
// ----------------------------------------------------------------------------
int sub_193AF20(int a1)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 8) + 52);
}

// ----------------------------------------------------------------------------
// Function: sub_193AF30  (binary VA: 0x193af30)
// Original: sub_193AF30
// ----------------------------------------------------------------------------
uint32_t * sub_193AF30(uint32_t *a1, int a2)
{
  *a1 = *(uint32_t *)(*(uint32_t *)(a2 + 8) + 56);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193AF50  (binary VA: 0x193af50)
// Original: sub_193AF50
// ----------------------------------------------------------------------------
uint32_t * sub_193AF50(uint32_t *a1, int a2)
{
  *a1 = *(uint32_t *)(*(uint32_t *)(a2 + 8) + 60);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193AF70  (binary VA: 0x193af70)
// Original: sub_193AF70
// ----------------------------------------------------------------------------
int sub_193AF70(int a1)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 8) + 36);
}

// ----------------------------------------------------------------------------
// Function: sub_193AF80  (binary VA: 0x193af80)
// Original: sub_193AF80
// ----------------------------------------------------------------------------
int sub_193AF80(int a1)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 8) + 40);
}

// ----------------------------------------------------------------------------
// Function: sub_193AF90  (binary VA: 0x193af90)
// Original: sub_193AF90
// ----------------------------------------------------------------------------
int sub_193AF90()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_193AFA0  (binary VA: 0x193afa0)
// Original: sub_193AFA0
// ----------------------------------------------------------------------------
int sub_193AFA0()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_193AFB0  (binary VA: 0x193afb0)
// Original: sub_193AFB0
// ----------------------------------------------------------------------------
void sub_193AFB0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_193AFC0  (binary VA: 0x193afc0)
// Original: sub_193AFC0
// ----------------------------------------------------------------------------
int sub_193AFC0(int a1, uint32_t *a2, unsigned int a3)
{
  uint32_t *v3;
  int result;

  v3 = a2;
  for ( result = 0; a3 > (unsigned int)(uintptr_t)(v3); ++v3 )
    result = *v3 + __builtin_rotateleft32(result, 7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193AFE0  (binary VA: 0x193afe0)
// Original: sub_193AFE0
// ----------------------------------------------------------------------------
uint32_t * sub_193AFE0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB568);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B010  (binary VA: 0x193b010)
// Original: sub_193B010
// ----------------------------------------------------------------------------
uint32_t * sub_193B010(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB768);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B040  (binary VA: 0x193b040)
// Original: sub_193B040
// ----------------------------------------------------------------------------
uint32_t * sub_193B040(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB8C8);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B070  (binary VA: 0x193b070)
// Original: sub_193B070
// ----------------------------------------------------------------------------
uint32_t * sub_193B070(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB890);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B0A0  (binary VA: 0x193b0a0)
// Original: sub_193B0A0
// ----------------------------------------------------------------------------
uint32_t * sub_193B0A0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB698);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B0D0  (binary VA: 0x193b0d0)
// Original: sub_193B0D0
// ----------------------------------------------------------------------------
uint32_t * sub_193B0D0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB668);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B100  (binary VA: 0x193b100)
// Original: sub_193B100
// ----------------------------------------------------------------------------
uint32_t * sub_193B100(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB628);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B130  (binary VA: 0x193b130)
// Original: sub_193B130
// ----------------------------------------------------------------------------
uint32_t * sub_193B130(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB878);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B160  (binary VA: 0x193b160)
// Original: sub_193B160
// ----------------------------------------------------------------------------
uint32_t * sub_193B160(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB860);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B190  (binary VA: 0x193b190)
// Original: sub_193B190
// ----------------------------------------------------------------------------
void sub_193B190(uint32_t *a1)
{
  sub_193B0A0(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193B1D0  (binary VA: 0x193b1d0)
// Original: sub_193B1D0
// ----------------------------------------------------------------------------
uint32_t * sub_193B1D0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB528);
  sub_1908860(a1 + 2);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B230  (binary VA: 0x193b230)
// Original: sub_193B230
// ----------------------------------------------------------------------------
uint32_t * sub_193B230(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB740);
  sub_1908860(a1 + 2);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B290  (binary VA: 0x193b290)
// Original: sub_193B290
// ----------------------------------------------------------------------------
uint32_t * sub_193B290(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB930);
  return sub_193B230(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193B2B0  (binary VA: 0x193b2b0)
// Original: sub_193B2B0
// ----------------------------------------------------------------------------
void sub_193B2B0(uint32_t *a1)
{
  sub_193B230(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193B2F0  (binary VA: 0x193b2f0)
// Original: sub_193B2F0
// ----------------------------------------------------------------------------
uint32_t * sub_193B2F0(int a1)
{
  bool v1;

  v1 = *(uint8_t *)(a1 + 292) == 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB970);
  if ( !v1 )
  {
    if ( *(uint32_t *)(a1 + 8) != 0 )
      opDeleteArray(*(void **)(a1 + 8));
    if ( *(uint32_t *)(a1 + 20) != 0 )
      opDeleteArray(*(void **)(a1 + 20));
    if ( *(uint32_t *)(a1 + 28) != 0 )
      opDeleteArray(*(void **)(a1 + 28));
  }
  return (uint32_t *)(uintptr_t)(sub_1901990((uint32_t *)a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B360  (binary VA: 0x193b360)
// Original: sub_193B360
// ----------------------------------------------------------------------------
void sub_193B360(void *a1)
{
  sub_193B2F0((int)(uintptr_t)(a1));
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193B3A0  (binary VA: 0x193b3a0)
// Original: sub_193B3A0
// ----------------------------------------------------------------------------
uint32_t * sub_193B3A0(int a1)
{
  bool v1;

  v1 = *(uint8_t *)(a1 + 108) == 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB960);
  if ( !v1 )
  {
    if ( *(uint32_t *)(a1 + 8) != 0 )
      opDeleteArray(*(void **)(a1 + 8));
    if ( *(uint32_t *)(a1 + 28) != 0 )
      opDeleteArray(*(void **)(a1 + 28));
    if ( *(uint32_t *)(a1 + 36) != 0 )
      opDeleteArray(*(void **)(a1 + 36));
    if ( *(uint32_t *)(a1 + 44) != 0 )
      opDeleteArray(*(void **)(a1 + 44));
  }
  return (uint32_t *)(uintptr_t)(sub_1901990((uint32_t *)a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B420  (binary VA: 0x193b420)
// Original: sub_193B420
// ----------------------------------------------------------------------------
void sub_193B420(void *a1)
{
  sub_193B3A0((int)(uintptr_t)(a1));
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193B460  (binary VA: 0x193b460)
// Original: sub_193B460
// ----------------------------------------------------------------------------
uint32_t * sub_193B460(int a1)
{
  bool v1;

  v1 = *(uint8_t *)(a1 + 108) == 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB950);
  if ( !v1 )
  {
    if ( *(uint32_t *)(a1 + 8) != 0 )
      opDeleteArray(*(void **)(a1 + 8));
    if ( *(uint32_t *)(a1 + 28) != 0 )
      opDeleteArray(*(void **)(a1 + 28));
    if ( *(uint32_t *)(a1 + 36) != 0 )
      opDeleteArray(*(void **)(a1 + 36));
    if ( *(uint32_t *)(a1 + 44) != 0 )
      opDeleteArray(*(void **)(a1 + 44));
  }
  return (uint32_t *)(uintptr_t)(sub_1901990((uint32_t *)a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B4E0  (binary VA: 0x193b4e0)
// Original: sub_193B4E0
// ----------------------------------------------------------------------------
void sub_193B4E0(void *a1)
{
  sub_193B460((int)(uintptr_t)(a1));
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193B520  (binary VA: 0x193b520)
// Original: sub_193B520
// ----------------------------------------------------------------------------
int sub_193B520(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB7A8);
  return sub_1953620(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193B550  (binary VA: 0x193b550)
// Original: sub_193B550
// ----------------------------------------------------------------------------
uint32_t * sub_193B550(uint32_t *a1)
{
  char *v1;
  int v2;

  *a1 = (uint32_t)(uintptr_t)(&off_20AB6A8);
  v1 = (char *)a1[4];
  if ( v1 != (char *)(intptr_t)(sub_1902030()) && v1 != nullptr )
    opDeleteArray(v1);
  v2 = a1[2];
  if ( v2 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v2 + 4))(a1[2]);
  sub_1908860(a1 + 3);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B5E0  (binary VA: 0x193b5e0)
// Original: sub_193B5E0
// ----------------------------------------------------------------------------
void sub_193B5E0(uint32_t *a1)
{
  sub_193B550(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193B620  (binary VA: 0x193b620)
// Original: sub_193B620
// ----------------------------------------------------------------------------
uint32_t * sub_193B620(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB5E8);
  return (uint32_t *)(uintptr_t)(sub_1907C80(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B650  (binary VA: 0x193b650)
// Original: sub_193B650
// ----------------------------------------------------------------------------
int sub_193B650(int a1, int a2)
{
  uint8_t v3[5];

  sub_1950010(a1, *(wchar_t **)(*(uint32_t *)(a2 + 8) + 28), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193B6A0  (binary VA: 0x193b6a0)
// Original: sub_193B6A0
// ----------------------------------------------------------------------------
int sub_193B6A0(int a1, int a2)
{
  uint8_t v3[5];

  sub_1950010(a1, *(wchar_t **)(*(uint32_t *)(a2 + 8) + 20), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193B6F0  (binary VA: 0x193b6f0)
// Original: sub_193B6F0
// ----------------------------------------------------------------------------
int sub_193B6F0(int a1, int a2)
{
  uint8_t v3[5];

  sub_1950010(a1, *(wchar_t **)(*(uint32_t *)(a2 + 8) + 44), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193B740  (binary VA: 0x193b740)
// Original: sub_193B740
// ----------------------------------------------------------------------------
int sub_193B740(int a1, int a2)
{
  uint8_t v3[5];

  sub_1950010(a1, *(wchar_t **)(*(uint32_t *)(a2 + 8) + 36), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193B790  (binary VA: 0x193b790)
// Original: sub_193B790
// ----------------------------------------------------------------------------
int sub_193B790(int a1, int a2)
{
  uint8_t v3[5];

  sub_1950010(a1, *(wchar_t **)(*(uint32_t *)(a2 + 8) + 28), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193B7E0  (binary VA: 0x193b7e0)
// Original: sub_193B7E0
// ----------------------------------------------------------------------------
int sub_193B7E0(int a1, int a2)
{
  uint8_t v3[5];

  sub_1950010(a1, *(wchar_t **)(*(uint32_t *)(a2 + 8) + 44), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193B830  (binary VA: 0x193b830)
// Original: sub_193B830
// ----------------------------------------------------------------------------
int sub_193B830(int a1, int a2)
{
  uint8_t v3[5];

  sub_1950010(a1, *(wchar_t **)(*(uint32_t *)(a2 + 8) + 36), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193B880  (binary VA: 0x193b880)
// Original: sub_193B880
// ----------------------------------------------------------------------------
int sub_193B880(int a1, int a2)
{
  uint8_t v3[5];

  sub_1950010(a1, *(wchar_t **)(*(uint32_t *)(a2 + 8) + 28), (int)(uintptr_t)(v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193B8D0  (binary VA: 0x193b8d0)
// Original: sub_193B8D0
// ----------------------------------------------------------------------------
uint32_t * sub_193B8D0(uint32_t *a1, int a2)
{
  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 8));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193B920  (binary VA: 0x193b920)
// Original: sub_193B920
// ----------------------------------------------------------------------------
uint32_t * sub_193B920(uint32_t *a1, int a2)
{
  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 8));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193B970  (binary VA: 0x193b970)
// Original: sub_193B970
// ----------------------------------------------------------------------------
uint32_t * sub_193B970(uint32_t *a1, int a2)
{
  g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 8) + 8));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193B9C0  (binary VA: 0x193b9c0)
// Original: sub_193B9C0
// ----------------------------------------------------------------------------
uint32_t * sub_193B9C0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB828);
  return (uint32_t *)(uintptr_t)(sub_1907840(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193B9F0  (binary VA: 0x193b9f0)
// Original: sub_193B9F0
// ----------------------------------------------------------------------------
uint32_t * sub_193B9F0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB7E8);
  return (uint32_t *)(uintptr_t)(sub_19078F0(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193BA20  (binary VA: 0x193ba20)
// Original: sub_193BA20
// ----------------------------------------------------------------------------
int sub_193BA20(int a1)
{
  uint32_t *v2;
  bool v3;
  int result;
  int *v5;

  v2 = *(uint32_t **)a1;
  v3 = *(uint32_t *)a1 == 0;
  result = -1;
  if ( !v3 )
  {
    result = *(uint32_t *)(a1 + 4);
    if ( result == -1 )
    {
      v5 = (int *)v2[2];
      if ( (unsigned int)(uintptr_t)(v5) >= v2[3] )
        result = G4_VCALL<int>(v2, 36);
      else
        result = *v5;
      if ( result == -1 )
      {
        *(uint32_t *)a1 = 0;
        return -1;
      }
      else
      {
        *(uint32_t *)(a1 + 4) = result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193BA70  (binary VA: 0x193ba70)
// Original: sub_193BA70
// ----------------------------------------------------------------------------
void sub_193BA70(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB7E8);
  sub_19078F0(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BAB0  (binary VA: 0x193bab0)
// Original: sub_193BAB0
// ----------------------------------------------------------------------------
void sub_193BAB0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB828);
  sub_1907840(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BAF0  (binary VA: 0x193baf0)
// Original: sub_193BAF0
// ----------------------------------------------------------------------------
void sub_193BAF0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB860);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BB30  (binary VA: 0x193bb30)
// Original: sub_193BB30
// ----------------------------------------------------------------------------
void sub_193BB30(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB878);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BB70  (binary VA: 0x193bb70)
// Original: sub_193BB70
// ----------------------------------------------------------------------------
void sub_193BB70(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB5E8);
  sub_1907C80(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BBB0  (binary VA: 0x193bbb0)
// Original: sub_193BBB0
// ----------------------------------------------------------------------------
void sub_193BBB0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB628);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BBF0  (binary VA: 0x193bbf0)
// Original: sub_193BBF0
// ----------------------------------------------------------------------------
void sub_193BBF0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB668);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BC30  (binary VA: 0x193bc30)
// Original: sub_193BC30
// ----------------------------------------------------------------------------
void sub_193BC30(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB930);
  sub_193B230(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BC70  (binary VA: 0x193bc70)
// Original: sub_193BC70
// ----------------------------------------------------------------------------
void sub_193BC70(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB7A8);
  sub_1953620(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BCB0  (binary VA: 0x193bcb0)
// Original: sub_193BCB0
// ----------------------------------------------------------------------------
void sub_193BCB0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB768);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BCF0  (binary VA: 0x193bcf0)
// Original: sub_193BCF0
// ----------------------------------------------------------------------------
void sub_193BCF0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB568);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BD30  (binary VA: 0x193bd30)
// Original: sub_193BD30
// ----------------------------------------------------------------------------
uint32_t * sub_193BD30(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB8C8);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193BD60  (binary VA: 0x193bd60)
// Original: sub_193BD60
// ----------------------------------------------------------------------------
void sub_193BD60(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB8C8);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BDA0  (binary VA: 0x193bda0)
// Original: sub_193BDA0
// ----------------------------------------------------------------------------
void sub_193BDA0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB8C8);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BDE0  (binary VA: 0x193bde0)
// Original: sub_193BDE0
// ----------------------------------------------------------------------------
void sub_193BDE0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB890);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BE20  (binary VA: 0x193be20)
// Original: sub_193BE20
// ----------------------------------------------------------------------------
uint32_t * sub_193BE20(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB890);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193BE50  (binary VA: 0x193be50)
// Original: sub_193BE50
// ----------------------------------------------------------------------------
void sub_193BE50(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB890);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BE90  (binary VA: 0x193be90)
// Original: sub_193BE90
// ----------------------------------------------------------------------------
uint32_t * sub_193BE90(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB528);
  sub_1908860(a1 + 2);
  return (uint32_t *)(uintptr_t)(sub_1901990(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193BEF0  (binary VA: 0x193bef0)
// Original: sub_193BEF0
// ----------------------------------------------------------------------------
void sub_193BEF0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB528);
  sub_1908860(a1 + 2);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BF60  (binary VA: 0x193bf60)
// Original: sub_193BF60
// ----------------------------------------------------------------------------
void sub_193BF60(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20AB528);
  sub_1908860(a1 + 2);
  sub_1901990(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193BFD0  (binary VA: 0x193bfd0)
// Original: sub_193BFD0
// ----------------------------------------------------------------------------
int * sub_193BFD0(int *a1, int a2, wchar_t *a3, int a4)
{
  wchar_t *s;
  size_t v5;
  wchar_t *v6;
  int v7;
  int v8;
  size_t v9;
  wchar_t *v10;
  void *v11;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint16_t _g4_t_v15[17];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (26u + sizeof(_g4_t_v15)) > _g4_s2 ? (26u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 26u);

  *a1 = (int)(uintptr_t)(&unk_213B8B4);
  sub_194FFA0((int)(uintptr_t)(&v15[1]), a3, a4, (int)(uintptr_t)(v15));
  s = *(wchar_t **)&v15[1];
  v5 = (a4 - (int)(uintptr_t)(a3)) >> 1;
  v14 = *(uint32_t *)&v15[1] + 4 * *(uint32_t *)(*(uint32_t *)&v15[1] - 12);
  v6 = (wchar_t *)opNewArray(4 * v5);
  while ( 1 )
  {
    v9 = sub_1954490(a2, v6, s, v5);
    if ( v5 <= v9 )
    {
      v5 = v9 + 1;
      if ( v6 != nullptr )
        opDeleteArray(v6);
      v6 = (wchar_t *)opNewArray(4 * v5);
      v9 = sub_1954490(a2, v6, s, v5);
    }
    sub_194F410((int)(uintptr_t)(a1), v6, v9);
    v10 = &s[wcslen(s)];
    if ( v10 == (wchar_t *)v14 )
      break;
    s = v10 + 1;
    v7 = *a1;
    v8 = *(uint32_t *)(*a1 - 12);
    v13 = v8 + 1;
    if ( (unsigned int)(v8 + 1) > *(uint32_t *)(*a1 - 8) || *(int *)(v7 - 4) > 0 )
    {
      sub_194F140(a1, v13);
      v7 = *a1;
      v8 = *(uint32_t *)(*a1 - 12);
    }
    *(uint32_t *)(v7 + 4 * v8) = 0;
    if ( (void *)(v7 - 12) != &unk_213B8A8 )
    {
      *(uint32_t *)(v7 - 4) = 0;
      *(uint32_t *)(v7 - 12) = v13;
      *(uint32_t *)(v7 + 4 * v13) = 0;
    }
  }
  if ( v6 != nullptr )
    opDeleteArray(v6);
  v11 = (void *)(*(uint32_t *)&v15[1] - 12);
  if ( (void *)(*(uint32_t *)&v15[1] - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v15[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070(v11);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C1D0  (binary VA: 0x193c1d0)
// Original: sub_193C1D0
// ----------------------------------------------------------------------------
int sub_193C1D0(int a1, wchar_t *a2, int a3, wchar_t *a4, int a5)
{
  wchar_t *s;
  wchar_t *v6;
  wchar_t *v7;
  wchar_t *v8;
  wchar_t *v9;
  int result;
  wchar_t *v11;
  wchar_t *v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef wchar_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef wchar_t *_g4_t_v17;
  typedef wchar_t *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  sub_194FFA0((int)(uintptr_t)(&v17), a2, a3, (int)(uintptr_t)(&v16));
  sub_194FFA0((int)(uintptr_t)(&v18), a4, a5, (int)(uintptr_t)(&v16) + 1);
  s = v17;
  v6 = v18;
  v15 = &v17[*(v17 - 3)];
  v7 = &v18[*(v18 - 3)];
  while ( 1 )
  {
    result = sub_1954450(a1, s, v6);
    if ( result != 0 )
      break;
    v8 = &s[wcslen(s)];
    v9 = &v6[wcslen(v6)];
    if ( v9 == v7 )
    {
      result = v8 != v15;
      break;
    }
    if ( v8 == v15 )
    {
      result = -1;
      break;
    }
    s = v8 + 1;
    v6 = v9 + 1;
  }
  v11 = v18 - 3;
  if ( v18 - 3 != (wchar_t *)&unk_213B8A8 && __sync_fetch_and_add(v18 - 1, 0xFFFFFFFF) <= 0 )
  {
    v13 = result;
    sub_194E070(v11);
    result = v13;
  }
  v12 = v17 - 3;
  if ( v17 - 3 != (wchar_t *)&unk_213B8A8 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
  {
    v14 = result;
    sub_194E070(v12);
    return v14;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193C330  (binary VA: 0x193c330)
// Original: sub_193C330
// ----------------------------------------------------------------------------
int sub_193C330(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB708);
  return sub_1907700((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193C3B0  (binary VA: 0x193c3b0)
// Original: sub_193C3B0
// ----------------------------------------------------------------------------
int sub_193C3B0(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB708);
  a1[2] = a2;
  return sub_1907700((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193C430  (binary VA: 0x193c430)
// Original: sub_193C430
// ----------------------------------------------------------------------------
int sub_193C430(uint32_t *a1, int a2, int a3, int a4)
{
  a1[1] = a4 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB708);
  a1[2] = 0;
  return sub_1907700((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193C4B0  (binary VA: 0x193c4b0)
// Original: sub_193C4B0
// ----------------------------------------------------------------------------
int sub_193C4B0(int a1)
{
  return G4_VCALL<int>(a1, 8);
}

// ----------------------------------------------------------------------------
// Function: sub_193C4D0  (binary VA: 0x193c4d0)
// Original: sub_193C4D0
// ----------------------------------------------------------------------------
int sub_193C4D0(int a1)
{
  return G4_VCALL<int>(a1, 12);
}

// ----------------------------------------------------------------------------
// Function: sub_193C4F0  (binary VA: 0x193c4f0)
// Original: sub_193C4F0
// ----------------------------------------------------------------------------
int sub_193C4F0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C520  (binary VA: 0x193c520)
// Original: sub_193C520
// ----------------------------------------------------------------------------
int sub_193C520(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C550  (binary VA: 0x193c550)
// Original: sub_193C550
// ----------------------------------------------------------------------------
int sub_193C550(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 24))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C580  (binary VA: 0x193c580)
// Original: sub_193C580
// ----------------------------------------------------------------------------
int sub_193C580(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 28))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C5B0  (binary VA: 0x193c5b0)
// Original: sub_193C5B0
// ----------------------------------------------------------------------------
int sub_193C5B0(int a1)
{
  return G4_VCALL<int>(a1, 32);
}

// ----------------------------------------------------------------------------
// Function: sub_193C5D0  (binary VA: 0x193c5d0)
// Original: sub_193C5D0
// ----------------------------------------------------------------------------
int sub_193C5D0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 36))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C600  (binary VA: 0x193c600)
// Original: sub_193C600
// ----------------------------------------------------------------------------
int sub_193C600(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 40))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C630  (binary VA: 0x193c630)
// Original: sub_193C630
// ----------------------------------------------------------------------------
int sub_193C630(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB6C8);
  return sub_19075C0((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193C6B0  (binary VA: 0x193c6b0)
// Original: sub_193C6B0
// ----------------------------------------------------------------------------
int sub_193C6B0(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB6C8);
  a1[2] = a2;
  return sub_19075C0((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193C730  (binary VA: 0x193c730)
// Original: sub_193C730
// ----------------------------------------------------------------------------
int sub_193C730(uint32_t *a1, int a2, int a3, int a4)
{
  a1[1] = a4 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB6C8);
  a1[2] = 0;
  return sub_19075C0((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193C7B0  (binary VA: 0x193c7b0)
// Original: sub_193C7B0
// ----------------------------------------------------------------------------
int sub_193C7B0(int a1)
{
  return G4_VCALL<int>(a1, 8);
}

// ----------------------------------------------------------------------------
// Function: sub_193C7D0  (binary VA: 0x193c7d0)
// Original: sub_193C7D0
// ----------------------------------------------------------------------------
int sub_193C7D0(int a1)
{
  return G4_VCALL<int>(a1, 12);
}

// ----------------------------------------------------------------------------
// Function: sub_193C7F0  (binary VA: 0x193c7f0)
// Original: sub_193C7F0
// ----------------------------------------------------------------------------
int sub_193C7F0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C820  (binary VA: 0x193c820)
// Original: sub_193C820
// ----------------------------------------------------------------------------
int sub_193C820(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C850  (binary VA: 0x193c850)
// Original: sub_193C850
// ----------------------------------------------------------------------------
int sub_193C850(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 24))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C880  (binary VA: 0x193c880)
// Original: sub_193C880
// ----------------------------------------------------------------------------
int sub_193C880(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 28))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C8B0  (binary VA: 0x193c8b0)
// Original: sub_193C8B0
// ----------------------------------------------------------------------------
int sub_193C8B0(int a1)
{
  return G4_VCALL<int>(a1, 32);
}

// ----------------------------------------------------------------------------
// Function: sub_193C8D0  (binary VA: 0x193c8d0)
// Original: sub_193C8D0
// ----------------------------------------------------------------------------
int sub_193C8D0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 36))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C900  (binary VA: 0x193c900)
// Original: sub_193C900
// ----------------------------------------------------------------------------
int sub_193C900(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 40))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C930  (binary VA: 0x193c930)
// Original: sub_193C930
// ----------------------------------------------------------------------------
int sub_193C930(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2 != 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB950);
  *(uint8_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint8_t *)(a1 + 56) = 0;
  *(uint8_t *)(a1 + 57) = 0;
  *(uint8_t *)(a1 + 58) = 0;
  *(uint8_t *)(a1 + 59) = 0;
  *(uint8_t *)(a1 + 60) = 0;
  *(uint8_t *)(a1 + 61) = 0;
  *(uint8_t *)(a1 + 62) = 0;
  *(uint8_t *)(a1 + 63) = 0;
  *(uint8_t *)(a1 + 108) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193C9D0  (binary VA: 0x193c9d0)
// Original: sub_193C9D0
// ----------------------------------------------------------------------------
int sub_193C9D0(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2 != 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB960);
  *(uint8_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint8_t *)(a1 + 56) = 0;
  *(uint8_t *)(a1 + 57) = 0;
  *(uint8_t *)(a1 + 58) = 0;
  *(uint8_t *)(a1 + 59) = 0;
  *(uint8_t *)(a1 + 60) = 0;
  *(uint8_t *)(a1 + 61) = 0;
  *(uint8_t *)(a1 + 62) = 0;
  *(uint8_t *)(a1 + 63) = 0;
  *(uint8_t *)(a1 + 108) = 0;
  return a1;
}



// ============================================================================
// Address:   0x193ca70 (size: 258 bytes)
// Symbol:    sub_193CA70
// Demangled: sub_193CA70
// ============================================================================
int (**sub_193CA70(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);
  uint32_t v4[4];

  a1[1] = a3 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB708);
  sub_1907700((int)(uintptr_t)(a1));
  result = (int (**)(int))(uintptr_t)(&off_20AB7E8);
  *a1 = (uint32_t)(uintptr_t)(&off_20AB7E8);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908800(v4, a2);
    sub_1907700((int)(uintptr_t)(a1));
    return (int (**)(int))sub_1908860(v4);
  }
  return result;
}


// ============================================================================
// Address:   0x193cb80 (size: 258 bytes)
// Symbol:    sub_193CB80
// Demangled: sub_193CB80
// ============================================================================
int (**sub_193CB80(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);
  uint32_t v4[4];

  a1[1] = a3 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB6C8);
  sub_19075C0((int)(uintptr_t)(a1));
  result = (int (**)(int))(uintptr_t)(&off_20AB828);
  *a1 = (uint32_t)(uintptr_t)(&off_20AB828);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908800(v4, a2);
    sub_19075C0((int)(uintptr_t)(a1));
    return (int (**)(int))sub_1908860(v4);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_193CC90  (binary VA: 0x193cc90)
// Original: sub_193CC90
// ----------------------------------------------------------------------------
uint32_t * sub_193CC90(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB860);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193CCC0  (binary VA: 0x193ccc0)
// Original: sub_193CCC0
// ----------------------------------------------------------------------------
int sub_193CCC0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 8))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193CD40  (binary VA: 0x193cd40)
// Original: sub_193CD40
// ----------------------------------------------------------------------------
int sub_193CD40(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193CDC0  (binary VA: 0x193cdc0)
// Original: sub_193CDC0
// ----------------------------------------------------------------------------
uint32_t * sub_193CDC0(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB878);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193CDF0  (binary VA: 0x193cdf0)
// Original: sub_193CDF0
// ----------------------------------------------------------------------------
int sub_193CDF0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 8))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193CE70  (binary VA: 0x193ce70)
// Original: sub_193CE70
// ----------------------------------------------------------------------------
int sub_193CE70(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193CEE0  (binary VA: 0x193cee0)
// Original: sub_193CEE0
// ----------------------------------------------------------------------------
int sub_193CEE0(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB5A8);
  return sub_1907B60((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193CF50  (binary VA: 0x193cf50)
// Original: sub_193CF50
// ----------------------------------------------------------------------------
int sub_193CF50(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB5A8);
  a1[2] = a2;
  return sub_1907B60((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193CFC0  (binary VA: 0x193cfc0)
// Original: sub_193CFC0
// ----------------------------------------------------------------------------
int sub_193CFC0(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB5A8);
  return sub_1907B60((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_193D030  (binary VA: 0x193d030)
// Original: sub_193D030
// ----------------------------------------------------------------------------
int sub_193D030(int a1)
{
  return G4_VCALL<int>(a1, 8);
}

// ----------------------------------------------------------------------------
// Function: sub_193D050  (binary VA: 0x193d050)
// Original: sub_193D050
// ----------------------------------------------------------------------------
int sub_193D050(int a1)
{
  return G4_VCALL<int>(a1, 12);
}

// ----------------------------------------------------------------------------
// Function: sub_193D070  (binary VA: 0x193d070)
// Original: sub_193D070
// ----------------------------------------------------------------------------
int sub_193D070(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D0A0  (binary VA: 0x193d0a0)
// Original: sub_193D0A0
// ----------------------------------------------------------------------------
int sub_193D0A0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D0D0  (binary VA: 0x193d0d0)
// Original: sub_193D0D0
// ----------------------------------------------------------------------------
int sub_193D0D0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 24))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D100  (binary VA: 0x193d100)
// Original: sub_193D100
// ----------------------------------------------------------------------------
int sub_193D100(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2 != 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB970);
  *(uint8_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint8_t *)(a1 + 292) = 0;
  return a1;
}



// ============================================================================
// Address:   0x193d170 (size: 242 bytes)
// Symbol:    sub_193D170
// Demangled: sub_193D170
// ============================================================================
int (**sub_193D170(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);
  uint32_t v4[4];

  a1[1] = a3 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB5A8);
  sub_1907B60((int)(uintptr_t)(a1));
  result = (int (**)(int))(uintptr_t)(&off_20AB5E8);
  *a1 = (uint32_t)(uintptr_t)(&off_20AB5E8);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908800(v4, a2);
    sub_1907B60((int)(uintptr_t)(a1));
    return (int (**)(int))sub_1908860(v4);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_193D270  (binary VA: 0x193d270)
// Original: sub_193D270
// ----------------------------------------------------------------------------
uint32_t * sub_193D270(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB628);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D2A0  (binary VA: 0x193d2a0)
// Original: sub_193D2A0
// ----------------------------------------------------------------------------
int sub_193D2A0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 8))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D320  (binary VA: 0x193d320)
// Original: sub_193D320
// ----------------------------------------------------------------------------
int sub_193D320(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D3A0  (binary VA: 0x193d3a0)
// Original: sub_193D3A0
// ----------------------------------------------------------------------------
int sub_193D3A0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D420  (binary VA: 0x193d420)
// Original: sub_193D420
// ----------------------------------------------------------------------------
int sub_193D420(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D4A0  (binary VA: 0x193d4a0)
// Original: sub_193D4A0
// ----------------------------------------------------------------------------
int sub_193D4A0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 24))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D520  (binary VA: 0x193d520)
// Original: sub_193D520
// ----------------------------------------------------------------------------
int sub_193D520(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 28))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D5A0  (binary VA: 0x193d5a0)
// Original: sub_193D5A0
// ----------------------------------------------------------------------------
int sub_193D5A0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 32))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D620  (binary VA: 0x193d620)
// Original: sub_193D620
// ----------------------------------------------------------------------------
int sub_193D620(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 36))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D6A0  (binary VA: 0x193d6a0)
// Original: sub_193D6A0
// ----------------------------------------------------------------------------
int sub_193D6A0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 40))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D720  (binary VA: 0x193d720)
// Original: sub_193D720
// ----------------------------------------------------------------------------
int sub_193D720(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 44))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D7A0  (binary VA: 0x193d7a0)
// Original: sub_193D7A0
// ----------------------------------------------------------------------------
int sub_193D7A0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 48))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D820  (binary VA: 0x193d820)
// Original: sub_193D820
// ----------------------------------------------------------------------------
uint32_t * sub_193D820(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB668);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D850  (binary VA: 0x193d850)
// Original: sub_193D850
// ----------------------------------------------------------------------------
int sub_193D850(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 8))(a1);
  return a1;
}



struct G4RbNode {
  uint32_t color;
  G4RbNode *parent;
  G4RbNode *left;
  G4RbNode *right;
  int32_t key;
};

static void g4_rb_rotate_left(G4RbNode *x, G4RbNode *&root) {
  G4RbNode *y = x->right;
  x->right = y->left;
  if (y->left != nullptr) y->left->parent = x;
  y->parent = x->parent;
  if (x == root)
    root = y;
  else if (x == x->parent->left)
    x->parent->left = y;
  else
    x->parent->right = y;
  y->left = x;
  x->parent = y;
}

static void g4_rb_rotate_right(G4RbNode *x, G4RbNode *&root) {
  G4RbNode *y = x->left;
  x->left = y->right;
  if (y->right != nullptr) y->right->parent = x;
  y->parent = x->parent;
  if (x == root)
    root = y;
  else if (x == x->parent->right)
    x->parent->right = y;
  else
    x->parent->left = y;
  y->right = x;
  x->parent = y;
}

static void g4_rb_insert_and_rebalance(bool insert_left, G4RbNode *x, G4RbNode *p, G4RbNode *header) {
  x->parent = p;
  x->left = nullptr;
  x->right = nullptr;
  x->color = 0;

  if (insert_left) {
    p->left = x;
    if (p == header) {
      header->parent = x;
      header->right = x;
    } else if (p == header->left) {
      header->left = x;
    }
  } else {
    p->right = x;
    if (p == header->right) {
      header->right = x;
    }
  }

  G4RbNode *&root = header->parent;
  while (x != root && x->parent->color == 0) {
    G4RbNode *const xpp = x->parent->parent;
    if (x->parent == xpp->left) {
      G4RbNode *const y = xpp->right;
      if (y != nullptr && y->color == 0) {
        x->parent->color = 1;
        y->color = 1;
        xpp->color = 0;
        x = xpp;
      } else {
        if (x == x->parent->right) {
          x = x->parent;
          g4_rb_rotate_left(x, root);
        }
        x->parent->color = 1;
        xpp->color = 0;
        g4_rb_rotate_right(xpp, root);
      }
    } else {
      G4RbNode *const y = xpp->left;
      if (y != nullptr && y->color == 0) {
        x->parent->color = 1;
        y->color = 1;
        xpp->color = 0;
        x = xpp;
      } else {
        if (x == x->parent->left) {
          x = x->parent;
          g4_rb_rotate_right(x, root);
        }
        x->parent->color = 1;
        xpp->color = 0;
        g4_rb_rotate_left(xpp, root);
      }
    }
  }
  root->color = 1;
}

static uintptr_t g4_rb_map_int_index(void *map_ptr, int32_t key, size_t val_size, void (*init_val)(void *)) {
  if (!map_ptr) return 0;
  G4RbNode *header = reinterpret_cast<G4RbNode *>(static_cast<char *>(map_ptr) + 4);
  if (header->parent == nullptr) {
    header->color = 0;
    header->left = header;
    header->right = header;
  }
  G4RbNode *parent = header;
  G4RbNode *cur = header->parent;
  bool insert_left = true;
  while (cur != nullptr) {
    parent = cur;
    if (key < cur->key) {
      insert_left = true;
      cur = cur->left;
    } else if (cur->key < key) {
      insert_left = false;
      cur = cur->right;
    } else {
      return reinterpret_cast<uintptr_t>(reinterpret_cast<char *>(cur) + 20);
    }
  }

  int raw_mem = opNew(20u + val_size);
  G4RbNode *node = reinterpret_cast<G4RbNode *>(static_cast<uintptr_t>(static_cast<uint32_t>(raw_mem)));
  if (!node) return 0;
  std::memset(node, 0, 20u + val_size);
  node->key = key;
  void *val = reinterpret_cast<char *>(node) + 20;
  if (init_val) init_val(val);
  g4_rb_insert_and_rebalance(insert_left, node, parent, header);
  ++(*reinterpret_cast<uint32_t *>(static_cast<char *>(map_ptr) + 20));
  return reinterpret_cast<uintptr_t>(val);
}

static void g4_init_typeinfo_val(void *val) {
  *reinterpret_cast<uint32_t **>(val) = &dword_213B814;
}

static void g4_init_list_val(void *val) {
  uint32_t self_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(val));
  uint32_t *s = reinterpret_cast<uint32_t *>(val);
  s[0] = self_addr;
  s[1] = self_addr;
}

extern "C" {
int g4_compat_string_construct_from_cstr(void *dst, const char *s) {
  if (!dst) return 0;
  return static_cast<int>(reinterpret_cast<uintptr_t>(
      g4_std::string::construct_from_cstr(reinterpret_cast<uint32_t *>(dst), const_cast<char *>(s))));
}
int g4_compat_string_construct_copy(void *dst, void *src) {
  if (!dst || !src) return 0;
  return static_cast<int>(reinterpret_cast<uintptr_t>(
      g4_std::string::construct_copy(reinterpret_cast<size_t **>(dst), reinterpret_cast<size_t **>(src))));
}
int g4_compat_string_rep_destroy(void *rep) {
  if (rep) g4_std::string::Rep::M_destroy(rep);
  return 0;
}
int g4_compat_string_assign(void *dst, const void *src, size_t n) {
  if (!dst) return 0;
  if (*reinterpret_cast<void **>(dst) == nullptr)
    *reinterpret_cast<uint32_t **>(dst) = &dword_213B814;
  return static_cast<int>(reinterpret_cast<uintptr_t>(
      g4_compat_def_26(reinterpret_cast<const void **>(dst),
                       const_cast<int *>(reinterpret_cast<const int *>(src)), n)));
}
int g4_compat_string_assign_str(void *dst, void *src) {
  if (!dst || !src) return 0;
  if (*reinterpret_cast<void **>(dst) == nullptr)
    *reinterpret_cast<uint32_t **>(dst) = &dword_213B814;
  return static_cast<int>(reinterpret_cast<uintptr_t>(
      g4_std::string::assign_str(reinterpret_cast<size_t **>(dst), reinterpret_cast<size_t **>(src))));
}
int g4_compat_string_compare_cstr(const void *a1, const char *s) {
  if (!a1 || !s) return 0;
  return static_cast<int>(g4_std::string::compare(
      reinterpret_cast<const void **>(const_cast<void *>(a1)), const_cast<char *>(s)));
}
int g4_compat_string_compare_str(const void *a1, const void *a2) {
  if (!a1 || !a2) return 0;
  return g4_std::string::compare_str(
      reinterpret_cast<const void **>(const_cast<void *>(a1)),
      reinterpret_cast<const void **>(const_cast<void *>(a2)));
}
void g4_compat_string_append(void *dst, const char *s, size_t n) {
  if (!dst) return;
  if (*reinterpret_cast<void **>(dst) == nullptr)
    *reinterpret_cast<uint32_t **>(dst) = &dword_213B814;
  g4_std::string::append(reinterpret_cast<size_t **>(dst), const_cast<char *>(s), n);
}
uint32_t *g4_compat_ostream_shl_int(void *os, int val) {
  if (!os) return nullptr;
  return g4_std::ostream::op_shl_int(reinterpret_cast<uint32_t *>(os), val);
}
uintptr_t g4_compat_map_int_typeinfo_index(void *map_ptr, const int *key_ptr) {
  return g4_rb_map_int_index(map_ptr, key_ptr ? *key_ptr : 0, 16u, g4_init_typeinfo_val);
}
uintptr_t g4_compat_map_int_list_index(void *map_ptr, const int *key_ptr) {
  return g4_rb_map_int_index(map_ptr, key_ptr ? *key_ptr : 0, 8u, g4_init_list_val);
}
void g4_compat_vector_u8_fill_insert(void *vec_ptr, void *pos_ptr, size_t n, const uint8_t *val_ptr) {
  if (!vec_ptr || n == 0) return;
  struct G4VecU8 {
    uint8_t *begin;
    uint8_t *end;
    uint8_t *cap;
  };
  G4VecU8 *vec = reinterpret_cast<G4VecU8 *>(vec_ptr);
  uint8_t fill = val_ptr ? *val_ptr : 0;
  uint8_t *pos = pos_ptr ? reinterpret_cast<uint8_t *>(pos_ptr) : vec->end;
  if (vec->begin) {
    if (pos < vec->begin) pos = vec->begin;
    if (pos > vec->end) pos = vec->end;
  } else {
    pos = nullptr;
  }
  size_t old_size = vec->begin ? static_cast<size_t>(vec->end - vec->begin) : 0;
  size_t old_cap = vec->begin ? static_cast<size_t>(vec->cap - vec->begin) : 0;
  size_t prefix = vec->begin ? static_cast<size_t>(pos - vec->begin) : 0;
  size_t suffix = old_size - prefix;
  if (vec->begin && n <= old_cap - old_size) {
    if (suffix > 0) std::memmove(pos + n, pos, suffix);
    std::memset(pos, fill, n);
    vec->end += n;
  } else {
    size_t grow = old_size > n ? old_size : n;
    size_t new_cap = old_size + grow;
    if (new_cap == 0) new_cap = n;
    int raw = opNew(new_cap);
    uint8_t *new_buf = reinterpret_cast<uint8_t *>(static_cast<uintptr_t>(static_cast<uint32_t>(raw)));
    if (!new_buf) return;
    if (prefix > 0 && vec->begin) std::memcpy(new_buf, vec->begin, prefix);
    std::memset(new_buf + prefix, fill, n);
    if (suffix > 0 && vec->begin && pos) std::memcpy(new_buf + prefix + n, pos, suffix);
    if (vec->begin) opDelete(vec->begin);
    vec->begin = new_buf;
    vec->end = new_buf + old_size + n;
    vec->cap = new_buf + new_cap;
  }
}
} // extern "C"
