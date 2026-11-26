#include "Core/Utils/DecompTypes.h"
#include "TU28_MenuControllerPart8.h"

// ----------------------------------------------------------------------------
// Function: sub_C044E0  (binary VA: 0xc044e0)
// Original: sub_C044E0
// ----------------------------------------------------------------------------
int sub_C044E0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE724);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE724, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE728), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE728, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE72C), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE72C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE730), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE730, &unk_20D1280);
  dword_20DE734 = 1056964608;
  dword_20DE738 = 1056964608;
  dword_20DE73C = 1056964608;
  dword_20DE710 = 0;
  dword_20DE714 = 0;
  dword_20DE718 = 0;
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_Data_AnimationDescriptor_f287e0::Destroy,
    &dword_20DE710,
    &unk_20D1280);
  dword_20DE700 = 0;
  dword_20DE704 = 0;
  dword_20DE708 = 0;
  return __cxa_atexit(
           (void (*)(void *))g4_std::vector_vector_int_GameAllocator_9a14cd::Destroy,
           &dword_20DE700,
           &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_C04650  (binary VA: 0xc04650)
// Original: sub_C04650
// ----------------------------------------------------------------------------
int sub_C04650(int a1)
{
  *(uint8_t *)a1 = 0;
  sub_BDF7A0((uint32_t *)(a1 + 4), 0);
  sub_BDF7A0((uint32_t *)(a1 + 12), 0);
  *(uint8_t *)(a1 + 20) = 0;
  sub_BDF7A0((uint32_t *)(a1 + 24), 0);
  return sub_AA7A50(a1 + 36);
}

// ----------------------------------------------------------------------------
// Function: sub_C046D0  (binary VA: 0xc046d0)
// Original: sub_C046D0
// ----------------------------------------------------------------------------
void sub_C046D0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_C046E0  (binary VA: 0xc046e0)
// Original: sub_C046E0
// ----------------------------------------------------------------------------
uint8_t * sub_C046E0(uint8_t *a1, char a2)
{
  *a1 = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C046F0  (binary VA: 0xc046f0)
// Original: sub_C046F0
// ----------------------------------------------------------------------------
int sub_C046F0(uint8_t *a1)
{
  return *a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C04700  (binary VA: 0xc04700)
// Original: sub_C04700
// ----------------------------------------------------------------------------
uint32_t * sub_C04700(int a1, int a2, char a3)
{
  int v3;
  uint32_t *result;

  if ( a3 == 0 || (result = (uint32_t *)sub_BDF7E0((int *)(a1 + 4)), a2 >= (int)(uintptr_t)(result)) )
  {
    v3 = 3;
    if ( a2 <= 3 )
      v3 = a2;
    return sub_BDF8B0((uint32_t *)(a1 + 4), v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C04770  (binary VA: 0xc04770)
// Original: sub_C04770
// ----------------------------------------------------------------------------
int sub_C04770(int a1)
{
  return sub_BDF7E0((int *)(a1 + 4));
}

// ----------------------------------------------------------------------------
// Function: sub_C047A0  (binary VA: 0xc047a0)
// Original: sub_C047A0
// ----------------------------------------------------------------------------
int sub_C047A0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int result;
  uint32_t *v9;
  char v10;
  int v11;
  unsigned int i;
  int v13;
  int v14;

  sub_BDF830(a1 + 12, a2);
  v2 = sub_BDF7E0(a1 + 12);
  v3 = sub_C0BDD0();
  v4 = sub_C07B10(v3, v2);
  v5 = a1 + 4;
  if ( (unsigned int)v4 > sub_BDF7E0(a1 + 4) )
  {
    *(uint8_t *)(a1 + 20) = 1;
    for ( i = sub_BDF7E0(v5) + 1; v4 >= i; ++i )
    {
      v13 = sub_C0BDD0();
      v14 = sub_C09730(v13, i);
      sub_BDF830(a1 + 24, v14);
    }
  }
  if ( v4 >= sub_BDF7E0(v5) )
  {
    v6 = 3;
    if ( v4 <= 3 )
      v6 = v4;
    sub_BDF8B0(v5, v6);
  }
  if ( byte_20D2450 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2450) != 0 )
  {
    sub_557B70(&unk_20D2460);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2450);
    __cxa_atexit((void (*)(void *))sub_550A70, &unk_20D2460, &unk_20D1280);
  }
  v7 = nullptr;
  if ( byte_20D2464 == 0 )
    v7 = (uint32_t *)(&unk_20D2460);
  result = sub_557AC0(1);
  if ( (uint8_t)result != 0 && v7[42] != 0 && a2 > 0 )
  {
    if ( byte_20D2450 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2450) != 0 )
    {
      sub_557B70(&unk_20D2460);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2450);
      __cxa_atexit((void (*)(void *))sub_550A70, &unk_20D2460, &unk_20D1280);
    }
    v9 = nullptr;
    if ( byte_20D2464 == 0 )
      v9 = (uint32_t *)(&unk_20D2460);
    v10 = sub_557AC0(1);
    v11 = 0;
    if ( v10 != 0 )
      v11 = v9[42];
    return sub_5157E0(v11, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C049B0  (binary VA: 0xc049b0)
// Original: sub_C049B0
// ----------------------------------------------------------------------------
uint32_t * sub_C049B0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *result;
  int v7;

  sub_BDF8B0((uint32_t *)(a1 + 12), a2);
  v2 = sub_BDF7E0((int *)(a1 + 12));
  v4 = sub_C0BDD0(v3);
  v5 = sub_C07B10(v4, v2);
  result = (uint32_t *)sub_BDF7E0((int *)(a1 + 4));
  if ( v5 >= (int)(uintptr_t)(result) )
  {
    v7 = 3;
    if ( v5 <= 3 )
      v7 = v5;
    return sub_BDF8B0((uint32_t *)(a1 + 4), v7);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C04A40  (binary VA: 0xc04a40)
// Original: sub_C04A40
// ----------------------------------------------------------------------------
int sub_C04A40(int a1)
{
  return sub_BDF7E0((int *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_C04A70  (binary VA: 0xc04a70)
// Original: sub_C04A70
// ----------------------------------------------------------------------------
int sub_C04A70(int a1)
{
  return *(uint8_t *)(a1 + 20);
}

// ----------------------------------------------------------------------------
// Function: sub_C04A80  (binary VA: 0xc04a80)
// Original: sub_C04A80
// ----------------------------------------------------------------------------
int sub_C04A80(int a1, char a2)
{
  *(uint8_t *)(a1 + 20) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C04A90  (binary VA: 0xc04a90)
// Original: sub_C04A90
// ----------------------------------------------------------------------------
void sub_C04A90(int a1)
{
  int v1;
  int *v2;
  uint32_t *v3;
  char v4;
  int v5;
  bool v6;
  int *v7;
  g4_cxa_guard_t *v8;

  if ( *(uint8_t *)(a1 + 20) != 0 )
  {
    v1 = sub_BDF7E0(a1 + 24);
    if ( byte_20D34B0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
    {
      sub_5B54D0(&dword_20D34C0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
      __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
    }
    v2 = nullptr;
    if ( byte_20D34C4 == 0 )
      v2 = (int *)(&dword_20D34C0);
    sub_5B80A0(v2, 1, v1);
    v8 = (g4_cxa_guard_t *)sub_BDF7E0(a1 + 24);
    if ( byte_20D2450 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2450) != 0 )
    {
      sub_557B70(&unk_20D2460);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2450);
      __cxa_atexit((void (*)(void *))sub_550A70, &unk_20D2460, &unk_20D1280);
    }
    v3 = nullptr;
    if ( byte_20D2464 == 0 )
      v3 = (uint32_t *)(&unk_20D2460);
    v4 = sub_557AC0(1);
    v5 = 0;
    if ( v4 != 0 )
      v5 = v3[42];
    sub_5040D0(v5, 0, v8, 0, 0);
    sub_BDF8B0(a1 + 24, 0);
    v6 = byte_20D2CF0 == 0;
    *(uint8_t *)(a1 + 20) = 0;
    if ( v6 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2CF0) != 0 )
    {
      sub_6E55D0(&dword_20D2D00);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2CF0);
      __cxa_atexit((void (*)(void *))sub_6D4BF0, &dword_20D2D00, &unk_20D1280);
    }
    v7 = nullptr;
    if ( byte_20D2D0C == 0 )
      v7 = (int *)(&dword_20D2D00);
    sub_6E5770(v7, 0);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C04CD0  (binary VA: 0xc04cd0)
// Original: sub_C04CD0
// ----------------------------------------------------------------------------
int sub_C04CD0(int a1, int a2)
{
  int v2;
  int v3;

  v3 = sub_C0BDD0(v2);
  return sub_C09730(v3, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C04D00  (binary VA: 0xc04d00)
// Original: sub_C04D00
// ----------------------------------------------------------------------------
bool sub_C04D00(int a1)
{
  int v1;
  int *v3;
  char v4;
  bool v5;
  int *v6;
  char v7;
  int *v8;
  typedef bool _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (17u + sizeof(_g4_t_v10)) > _g4_s1 ? (17u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 17u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v1 = 0;
  if ( *(uint8_t *)(a1 + 32) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "u3m01_cellunlock", (int)(uintptr_t)(&v10));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "u3m01", (int)(uintptr_t)(&v10) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "u3m02_cellunlock", (int)(uintptr_t)(&v10) + 2);
    if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
    {
      sub_630BF0(&dword_20D3C40);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
    }
    v3 = nullptr;
    if ( byte_20D3C44 == 0 )
      v3 = (int *)(&dword_20D3C40);
    v4 = sub_64F550(v3, &v11);
    v5 = false;
    if ( v4 != 0 )
    {
      if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
      {
        sub_630BF0(&dword_20D3C40);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
        __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
      }
      v6 = nullptr;
      if ( byte_20D3C44 == 0 )
        v6 = (int *)(&dword_20D3C40);
      v7 = sub_64F550(v6, &v12);
      v5 = false;
      if ( v7 != 0 )
      {
        if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
        {
          sub_630BF0(&dword_20D3C40);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
          __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
        }
        v8 = nullptr;
        if ( byte_20D3C44 == 0 )
          v8 = (int *)(&dword_20D3C40);
        v5 = (uint8_t)sub_64F550(v8, v13) != 0;
      }
    }
    v9 = v5;
    g4_std::string::Destroy(v13);
    g4_std::string::Destroy(&v12);
    g4_std::string::Destroy(&v11);
    return v9;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_C04F80  (binary VA: 0xc04f80)
// Original: sub_C04F80
// ----------------------------------------------------------------------------
int sub_C04F80(int a1)
{
  return *(uint8_t *)(a1 + 32);
}

// ----------------------------------------------------------------------------
// Function: sub_C04F90  (binary VA: 0xc04f90)
// Original: sub_C04F90
// ----------------------------------------------------------------------------
int * sub_C04F90(int a1, char a2)
{
  bool v2;
  int *result;
  int *v4;

  v2 = byte_20D2800 == 0;
  *(uint8_t *)(a1 + 32) = a2;
  if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2800) != 0 )
  {
    sub_AABC00((int)(uintptr_t)(&dword_20D2820));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2800);
    __cxa_atexit((void (*)(void *))sub_542BE0, &dword_20D2820, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D2824 == 0 )
    result = (int *)(&dword_20D2820);
  if ( result[124] == 0 )
  {
    if ( byte_20D2CF0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2CF0) != 0 )
    {
      sub_6E55D0(&dword_20D2D00);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2CF0);
      __cxa_atexit((void (*)(void *))sub_6D4BF0, &dword_20D2D00, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D2D0C == 0 )
      v4 = (int *)(&dword_20D2D00);
    return (int *)sub_6E5770(v4, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C050C0  (binary VA: 0xc050c0)
// Original: sub_C050C0
// ----------------------------------------------------------------------------
int sub_C050C0(int a1)
{
  return sub_BDF7E0((int *)(a1 + 24));
}

// ----------------------------------------------------------------------------
// Function: sub_C050F0  (binary VA: 0xc050f0)
// Original: sub_C050F0
// ----------------------------------------------------------------------------
uint32_t * sub_C050F0(int a1, int a2)
{
  return sub_BDF8B0((uint32_t *)(a1 + 24), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C05120  (binary VA: 0xc05120)
// Original: sub_C05120
// ----------------------------------------------------------------------------
uint32_t * sub_C05120(int a1, char a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *result;

  v2 = sub_BDF7E0((int *)(a1 + 12));
  v3 = (int *)(a1 + 4);
  v5 = sub_C0BDD0(v4);
  v6 = sub_C07B10(v5, v2);
  if ( a2 == 0 || (result = (uint32_t *)sub_BDF7E0(v3), v6 >= (int)(uintptr_t)(result)) )
  {
    v7 = 3;
    if ( v6 <= 3 )
      v7 = v6;
    return sub_BDF8B0(v3, v7);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C051B0  (binary VA: 0xc051b0)
// Original: sub_C051B0
// ----------------------------------------------------------------------------
int sub_C051B0(int a1, int a2)
{
  int *v2;

  sub_AA7BB0(a1 + 36, a2);
  if ( byte_20D2CF0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2CF0) != 0 )
  {
    sub_6E55D0(&dword_20D2D00);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2CF0);
    __cxa_atexit((void (*)(void *))sub_6D4BF0, &dword_20D2D00, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D2D0C == 0 )
    v2 = (int *)(&dword_20D2D00);
  return sub_6E5770(v2, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_C05270  (binary VA: 0xc05270)
// Original: sub_C05270
// ----------------------------------------------------------------------------
int sub_C05270(uint8_t *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;
  int *v7;
  int v8;
  int *v9;
  int Instance;
  int v11;
  int *v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  char *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  typedef g4_cxa_guard_t *_g4_t_v22;
  typedef int *_g4_t_lpdso_handle;
  typedef void *_g4_t_ProfileField;
  typedef int _g4_t_v25;
  typedef char _g4_t_v26[4];
  typedef glwebtools::Time::Self *_g4_t_v27;
  typedef int _g4_t_v28[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_lpdso_handle)) > _g4_s1 ? (8u + sizeof(_g4_t_lpdso_handle)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_ProfileField)) > _g4_s2 ? (24u + sizeof(_g4_t_ProfileField)) : _g4_s2,
    _g4_s4 = (35u + sizeof(_g4_t_v25)) > _g4_s3 ? (35u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v26)) > _g4_s4 ? (40u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v27)) > _g4_s5 ? (44u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v28)) > _g4_s6 ? (48u + sizeof(_g4_t_v28)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_lpdso_handle &lpdso_handle = *reinterpret_cast<_g4_t_lpdso_handle *>(_g4_sf + 8u);
  _g4_t_ProfileField &ProfileField = *reinterpret_cast<_g4_t_ProfileField *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 35u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);

  v2 = sub_8F0680(v1);
  v4 = (int)(uintptr_t)(a1 + 36);
  if ( (uint8_t)sub_8F61C0(v2) == 0 )
  {
    if ( byte_20D2800 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2800) != 0 )
    {
      sub_AABC00((int)(uintptr_t)(&dword_20D2820));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2800);
      __cxa_atexit((void (*)(void *))sub_542BE0, &dword_20D2820, &unk_20D1280);
    }
    v7 = nullptr;
    v4 = (int)(uintptr_t)(a1 + 36);
    if ( byte_20D2824 == 0 )
      v7 = (int *)(&dword_20D2820);
    if ( v7[124] == 0 && *(uint8_t *)(sub_8F0680(v3) + 5465) != 0 )
    {
      if ( *(uint8_t *)(sub_8F0680(v8) + 5464) != 0 )
      {
        sub_AA7BB0((int)(uintptr_t)(a1 + 36), (int)(uintptr_t)(&unk_1E13380));
        if ( byte_20D2CF0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2CF0) != 0 )
        {
          sub_6E55D0(&dword_20D2D00);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2CF0);
          __cxa_atexit((void (*)(void *))sub_6D4BF0, &dword_20D2D00, &unk_20D1280);
        }
        v12 = nullptr;
        if ( byte_20D2D0C == 0 )
          v12 = (int *)(&dword_20D2D00);
        sub_6E5770(v12, 0);
        v14 = sub_8F0680(v13);
        sub_8F61D0(v14, 1);
      }
      else
      {
        if ( byte_20D12E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
        {
          sub_A3F880(&dword_20D1300);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
          __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
        }
        v9 = nullptr;
        v4 = (int)(uintptr_t)(a1 + 36);
        if ( byte_20D1304 == 0 )
          v9 = (int *)(&dword_20D1300);
        if ( (uint8_t)sub_A41690(v9) != 0 )
        {
          Json::Value::Construct(v28, 0);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25) + 1, "last_purchase", (int)(uintptr_t)(&v25));
          Instance = (int)(uintptr_t)(gaia::UserProfile::GetInstance((gaia::UserProfile::Self *)v22));
          ProfileField = (void *)gaia::UserProfile::GetProfileField(Instance, (int)(uintptr_t)(&v25) + 1, (Json::Value::Self *)v28);
          g4_std::string::Destroy((char *)&v25 + 1);
          if ( ProfileField == (void *)-27 )
          {
            v21 = sub_8F0680(v11);
            sub_8F61D0(v21, 1);
          }
          else if ( ProfileField == nullptr )
          {
            *(uint32_t *)v26 = 0;
            Json::Value::asString((Json::Value::Self *)&v27);
            glwebtools::Time::ConvertISOTimeUTCToTimestamp(v27, v26, lpdso_handle);
            if ( byte_20D12E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
            {
              sub_A3F880(&dword_20D1300);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
              __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
            }
            v15 = (int *)(&dword_20D1300);
            if ( byte_20D1304 != 0 )
              v15 = nullptr;
            v16 = sub_A41350(v15);
            v17 = (char *)((uint8_t *)(uintptr_t)0x76A700u) - (v16 - *(uint32_t *)v26);
            v19 = sub_8F0680(v18);
            sub_8F61D0(v19, 1);
            v20 = 0;
            if ( (int)(uintptr_t)(v17) >= 0 )
              v20 = (int)(uintptr_t)(v17);
            sub_C051B0((int)(uintptr_t)(a1), v20);
            g4_std::string::Destroy(&v27);
          }
          v4 = (int)(uintptr_t)(a1 + 36);
          Json::Value::Destroy((Json::Value::Self *)v28);
        }
      }
    }
  }
  sub_AA7BF0(v4);
  LOBYTE(v5) = sub_AA7BC0(v4);
  result = v5 ^ 1;
  *a1 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C05650  (binary VA: 0xc05650)
// Original: sub_C05650
// ----------------------------------------------------------------------------
int sub_C05650(int a1)
{
  return sub_AA7BD0(a1 + 36);
}

// ----------------------------------------------------------------------------
// Function: sub_C05680  (binary VA: 0xc05680)
// Original: sub_C05680
// ----------------------------------------------------------------------------
int sub_C05680(int a1, uint32_t *a2)
{
  return sub_AA7DC0(a1 + 36, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C056B0  (binary VA: 0xc056b0)
// Original: sub_C056B0
// ----------------------------------------------------------------------------
uint32_t * sub_C056B0(int a1, uint32_t *a2)
{
  return sub_AA7E40((uint32_t *)(a1 + 36), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C056E0  (binary VA: 0xc056e0)
// Original: sub_C056E0
// ----------------------------------------------------------------------------
int sub_C056E0(int a1)
{
  return sub_AA7BE0(a1 + 36);
}


