#include "Core/Utils/DecompTypes.h"
#include "TU30_MenuControllerPart10.h"

// ----------------------------------------------------------------------------
// Function: sub_C0C730  (binary VA: 0xc0c730)
// Original: sub_C0C730
// ----------------------------------------------------------------------------
const char * sub_C0C730()
{
  const char *result;
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE764);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE764, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE768), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE768, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE76C), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE76C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE770), "HDIDFV", (int)(uintptr_t)(&v1));
  result = (const char *)__cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE770, &unk_20D1280);
  dword_20DE774 = 1056964608;
  dword_20DE778 = 1056964608;
  dword_20DE77C = 1056964608;
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
    return "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
  }
  return result;
}



// ============================================================================
// Address:   0xc0c850 (size: 229 bytes)
// Symbol:    sub_C0C850
// Demangled: sub_C0C850
// ============================================================================
int (**sub_C0C850(uint32_t *a1))(int)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206B468);
  byte_20D186A = 0;
  if ( byte_20D32F8 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D32F8) != 0 )
  {
    sub_A728F0((int)byte_20D3300);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D32F8);
    __cxa_atexit((void (*)(void *))sub_545B10, byte_20D3300, &unk_20D1280);
  }
  byte_20D3365 = 0;
  if ( (uint8_t)GameUtils_IsKeyboardVisible() != 0 )
    GameUtils_HideKeyboard();
  if ( a1[7] != 0 )
    sub_4EB870(a1[7]);
  g4_std::string::Destroy(a1 + 6);
  *a1 = (uint32_t)(uintptr_t)(&off_204BDA8);
  return (int (**)(int))(uintptr_t)(&off_204BDA8);
}
// ----------------------------------------------------------------------------
// Function: sub_C0C940  (binary VA: 0xc0c940)
// Original: sub_C0C940
// ----------------------------------------------------------------------------
size_t sub_C0C940(int *a1, uint32_t *a2)
{
  char *src;
  int v4;
  size_t result;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  int v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  int v15;
  unsigned int v17;
  int v18;
  size_t v19;

  src = (char *)a1[1];
  if ( src == (char *)a1[2] )
  {
    v7 = (int)(uintptr_t)(&src[-*a1]) >> 2;
    v19 = 4;
    if ( v7 != 0 )
    {
      v19 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v15 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v15 = -4;
        v19 = v15;
      }
    }
    v18 = sub_4EB830(v19);
    v17 = v18 + 4;
    v8 = (uint32_t *)(v18 + 4 * v7);
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = *a1;
    if ( src != (char *)*a1 )
    {
      v10 = (char *)*a1;
      v11 = (uint32_t *)v18;
      do
      {
        if ( v11 != nullptr )
          *v11 = *(uint32_t *)v10;
        v10 += 4;
        ++v11;
      }
      while ( src != v10 );
      v17 = v18 + 4 * ((unsigned int)(uintptr_t)(&src[-v9 - 4]) >> 2) + 8;
    }
    v12 = (char *)a1[1];
    if ( src != v12 )
    {
      v13 = src;
      v14 = (uint32_t *)v17;
      do
      {
        if ( v14 != nullptr )
          *v14 = *(uint32_t *)v13;
        v13 += 4;
        ++v14;
      }
      while ( v12 != v13 );
      v17 += 4 * ((unsigned int)(v12 - (src + 4)) >> 2) + 4;
    }
    if ( *a1 != 0 )
      sub_4EB870(*a1);
    *a1 = v18;
    a1[1] = v17;
    a1[2] = v19 + v18;
    return v19 + v18;
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *(uint32_t *)src = *((uint32_t *)src - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( result != 0 )
      result = (size_t)memmove((void *)(v4 - 4 * result), src, 4 * result);
    *(uint32_t *)src = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C0CAC0  (binary VA: 0xc0cac0)
// Original: sub_C0CAC0
// ----------------------------------------------------------------------------
int * sub_C0CAC0()
{
  int *v0;
  int v1;
  int v2;
  bool v3;
  int *v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int *result;
  int v13;
  int v14;
  int v15;
  int v16;

  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v0 = nullptr;
  if ( byte_20D49A8 == 0 )
    v0 = (int *)(&dword_20D49A0);
  sub_82DD80(v0, 0);
  v1 = sub_732CE0();
  v2 = sub_733A60(v1, 1);
  v3 = byte_20D2CF0 == 0;
  *(uint8_t *)(*(uint32_t *)v2 + 312) = 1;
  if ( v3 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2CF0) != 0 )
  {
    sub_6E55D0(&dword_20D2D00);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2CF0);
    __cxa_atexit((void (*)(void *))sub_6D4BF0, &dword_20D2D00, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D2D0C == 0 )
    v4 = (int *)(&dword_20D2D00);
  sub_6E5770(v4, 0);
  v6 = (uint32_t *)sub_8F0680(v5);
  if ( G4_VCALL<int>(v6, 456) == 0
    || (v8 = v6[468], v9 = v6[469], (v8 & 0x100) == 0)
    || v8 < 0
    || (v9 & 1) != 0
    || (v9 & 4) != 0 )
  {
    if ( *(uint8_t *)(sub_8F0680(v7) + 3201) == 0 && *(uint8_t *)(sub_8F0680(v10) + 3202) == 0 )
    {
      v14 = sub_8F0680(v13);
      if ( (uint8_t)sub_9873E0(v14) != 0 )
      {
        v16 = sub_8F0680(v15);
        G4_VCALL<void>(v16, 76);
      }
    }
  }
  *(uint8_t *)(dword_20DDDC0 + 889) = 0;
  sub_5BCA80(dword_20D42C0);
  if ( byte_20D5530 != 0 || _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) == 0 )
  {
    byte_20D5570 = 0;
    if ( byte_20D5220 != 0 )
      goto LABEL_12;
  }
  else
  {
    sub_902F90(&dword_20D5540);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
    __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
    byte_20D5570 = 0;
    if ( byte_20D5220 != 0 )
      goto LABEL_12;
  }
  if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
LABEL_12:
  v11 = nullptr;
  if ( byte_20D5248 == 0 )
    v11 = (int *)(&dword_20D5240);
  sub_976670(v11);
  if ( byte_20D5C00 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5C00) != 0 )
  {
    sub_76C650(&dword_20D5C20);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5C00);
    __cxa_atexit((void (*)(void *))sub_76F420, &dword_20D5C20, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D5C24 == 0 )
    result = (int *)(&dword_20D5C20);
  *((uint8_t *)result + 92) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C0CE10  (binary VA: 0xc0ce10)
// Original: sub_C0CE10
// ----------------------------------------------------------------------------
int sub_C0CE10(int a1)
{
  bool v1;
  int *v2;
  int *v3;
  int *v4;
  int v5;
  int v6;
  int *v7;

  v1 = byte_20D4980 == 0;
  *(uint8_t *)(dword_20DDDC0 + 889) = 1;
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D49A8 == 0 )
    v2 = (int *)(&dword_20D49A0);
  sub_82D060(v2, 0);
  sub_5BCA80(dword_20D42C0);
  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D5248 == 0 )
    v3 = (int *)(&dword_20D5240);
  sub_976660(v3);
  if ( byte_20D5530 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) != 0 )
  {
    sub_902F90(&dword_20D5540);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
    __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
  }
  v1 = byte_20D5C00 == 0;
  byte_20D5570 = 1;
  *(uint64_t *)(a1 + 12) = qword_20D554C;
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5C00) != 0 )
  {
    sub_76C650(&dword_20D5C20);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5C00);
    __cxa_atexit((void (*)(void *))sub_76F420, &dword_20D5C20, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D5C24 == 0 )
    v4 = (int *)(&dword_20D5C20);
  *((uint8_t *)v4 + 92) = 1;
  v5 = sub_732CE0();
  v6 = sub_733A60(v5, 1);
  v1 = byte_20D4980 == 0;
  *(uint8_t *)(*(uint32_t *)v6 + 312) = 0;
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v7 = nullptr;
  if ( byte_20D49A8 == 0 )
    v7 = (int *)(&dword_20D49A0);
  return sub_82DD80(v7, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_C0D0D0  (binary VA: 0xc0d0d0)
// Original: sub_C0D0D0
// ----------------------------------------------------------------------------
void sub_C0D0D0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206B468);
  byte_20D186A = 0;
  if ( byte_20D32F8 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D32F8) != 0 )
  {
    sub_A728F0((int)byte_20D3300);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D32F8);
    __cxa_atexit((void (*)(void *))sub_545B10, byte_20D3300, &unk_20D1280);
  }
  byte_20D3365 = 0;
  if ( (uint8_t)GameUtils_IsKeyboardVisible() != 0 )
    GameUtils_HideKeyboard();
  if ( a1[7] != 0 )
    sub_4EB870(a1[7]);
  g4_std::string::Destroy(a1 + 6);
  *a1 = (uint32_t)(uintptr_t)(&off_204BDA8);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C0D1C0  (binary VA: 0xc0d1c0)
// Original: sub_C0D1C0
// ----------------------------------------------------------------------------
int * sub_C0D1C0(int *a1, int a2, int a3, const void **a4)
{
  unsigned int v5;
  int v6;
  size_t v8;
  size_t n;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  size_t v14;

  LOBYTE(v5) = 1;
  if ( a2 == 0 && (int *)a3 != (int *)(uintptr_t)(&dword_20DE784) )
  {
    v8 = *((uint32_t *)*a4 - 3);
    n = *(uint32_t *)(*(uint32_t *)(a3 + 16) - 12);
    v14 = n;
    if ( n > v8 )
      n = *((uint32_t *)*a4 - 3);
    v10 = memcmp(*a4, *(const void **)(a3 + 16), n);
    v11 = v8 - v14;
    if ( v10 != 0 )
      v11 = v10;
    v5 = v11 >> 31;
  }
  v6 = opNew(0x18u);
  if ( v6 != -16 )
  {
    v12 = v6;
    g4_std::string::construct_copy(v6 + 16, a4);
    g4_std::string::construct_copy(v12 + 20, a4 + 1);
    v6 = v12;
  }
  v13 = v6;
  sub_1904970(v5, v6, a3, &dword_20DE784);
  ++dword_20DE794;
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C0D2D0  (binary VA: 0xc0d2d0)
// Original: sub_C0D2D0
// ----------------------------------------------------------------------------
int sub_C0D2D0(int a1, const void **a2)
{
  size_t v2;
  int i;
  int v4;
  uint32_t *v5;
  size_t v6;
  size_t n;
  int v8;
  uint32_t *v9;
  int *v10;
  size_t v11;
  uint32_t *v12;
  int v13;
  int v14;
  typedef int *_g4_t_v16;
  typedef char _g4_t_v17;
  typedef void *_g4_t_s1;
  typedef size_t _g4_t_v21;
  typedef size_t _g4_t_v22;
  typedef int _g4_t_v23[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_s1)) > _g4_s2 ? (12u + sizeof(_g4_t_s1)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v21)) > _g4_s3 ? (24u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v22)) > _g4_s4 ? (24u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);

  if ( dword_20DE788 == 0 )
  {
    v10 = (int *)(&dword_20DE784);
    goto LABEL_18;
  }
  s1 = (void *)*a2;
  v2 = *((uint32_t *)*a2 - 3);
  for ( i = dword_20DE788; ; i = v4 )
  {
    v5 = *(uint32_t **)(i + 16);
    v6 = *(v5 - 3);
    n = v6;
    v16 = (int *)i;
    if ( v2 <= v6 )
      n = v2;
    v21 = n;
    v8 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v8 == 0 )
      v8 = v2 - v6;
    if ( v8 >= 0 )
      break;
    v4 = v16[2];
    v17 = 1;
    if ( v4 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v4 = v16[3];
  v17 = 0;
  if ( v4 != 0 )
    goto LABEL_4;
LABEL_11:
  v9 = v5;
  v10 = v16;
  v11 = v21;
  v12 = v9;
  v22 = (size_t)v16;
  if ( v17 == 0 )
    goto LABEL_12;
LABEL_18:
  if ( (int *)dword_20DE78C == v10 )
  {
    sub_C0D1C0(v23, 0, (int)(uintptr_t)(v10), a2);
    *(uint32_t *)a1 = v23[0];
    *(uint8_t *)(a1 + 4) = 1;
    return a1;
  }
  else
  {
    v22 = (size_t)v10;
    v10 = (int *)sub_19048F0(v10);
    s1 = (void *)*a2;
    v2 = *((uint32_t *)*a2 - 3);
    v12 = (uint32_t *)v10[4];
    v6 = *(v12 - 3);
    v11 = v6;
    if ( v2 <= v6 )
      v11 = *((uint32_t *)s1 - 3);
LABEL_12:
    v13 = memcmp(v12, s1, v11);
    v14 = v6 - v2;
    if ( v13 == 0 )
      v13 = v14;
    if ( v13 < 0 )
    {
      sub_C0D1C0(v23, 0, v22, a2);
      *(uint32_t *)a1 = v23[0];
      *(uint8_t *)(a1 + 4) = 1;
    }
    else
    {
      *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v10);
      *(uint8_t *)(a1 + 4) = 0;
    }
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C0D440  (binary VA: 0xc0d440)
// Original: sub_C0D440
// ----------------------------------------------------------------------------
size_t sub_C0D440(int *a1, char *s, int a3, int a4, int a5)
{
  size_t v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int v9;
  size_t result;
  uint32_t *v11;
  int v12;

  v5 = strlen(s);
  g4_std_compat::string_assign((int)(uintptr_t)(a1 + 6), s, v5);
  if ( a3 >= 0 )
  {
    v6 = (uint32_t *)a1[8];
    if ( v6 == (uint32_t *)a1[9] )
    {
      sub_C0C940(a1 + 7, &a3);
    }
    else
    {
      v7 = 0;
      if ( v6 != nullptr )
      {
        *v6 = a3;
        v7 = a1[8];
      }
      a1[8] = v7 + 4;
    }
  }
  if ( a4 >= 0 )
  {
    v8 = (uint32_t *)a1[8];
    if ( v8 == (uint32_t *)a1[9] )
    {
      sub_C0C940(a1 + 7, &a4);
    }
    else
    {
      v9 = 0;
      if ( v8 != nullptr )
      {
        *v8 = a4;
        v9 = a1[8];
      }
      a1[8] = v9 + 4;
    }
  }
  result = a5;
  if ( a5 >= 0 )
  {
    v11 = (uint32_t *)a1[8];
    if ( v11 == (uint32_t *)a1[9] )
    {
      return sub_C0C940(a1 + 7, &a5);
    }
    else
    {
      v12 = 0;
      if ( v11 != nullptr )
      {
        *v11 = a5;
        v12 = a1[8];
      }
      a1[8] = v12 + 4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C0D530  (binary VA: 0xc0d530)
// Original: sub_C0D530
// ----------------------------------------------------------------------------
unsigned int * sub_C0D530()
{
  unsigned int *result;
  unsigned int v1;
  unsigned int *v2;
  int v3;
  unsigned int **v4;
  unsigned int v5;
  int *v6;
  unsigned int v7;
  int v8;
  int v9;
  char *v10;
  int32_t v11;
  unsigned int v12;
  bool v13;
  unsigned int v14;
  int v15;
  unsigned int *v16;
  int v17;
  size_t v18;
  size_t v19;
  size_t v20;
  int v21;
  int v22;
  int v23;
  size_t v24;
  size_t v25;
  int v26;
  size_t v27;
  int v28;
  int32_t v29;
  uint32_t *v30;
  size_t v31;
  int v32;
  int v33;
  int v34;
  uint32_t *v35;
  size_t v36;
  int v37;
  size_t v38;
  size_t v39;
  int v40;
  int v41;
  int v42;
  uint32_t *v43;
  size_t v44;
  int v45;
  int *v46;
  typedef size_t _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef size_t _g4_t_v52;
  typedef size_t _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef unsigned int *_g4_t_v55;
  typedef char *_g4_t_v56;
  typedef int *_g4_t_v57;
  typedef size_t _g4_t_v58;
  typedef const void *_g4_t_v59;
  typedef size_t _g4_t_v60;
  typedef int _g4_t_v61;
  typedef unsigned int *_g4_t_v62;
  typedef unsigned int *_g4_t_v63;
  typedef int *_g4_t_v64;
  typedef int *_g4_t_v65;
  typedef uint8_t _g4_t_v66[17];
  typedef void *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef uint32_t *_g4_t_v69;
  typedef uint8_t _g4_t_v70[16];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v47)) > _g4_s0 ? (8u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v48)) > _g4_s1 ? (8u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v49)) > _g4_s2 ? (8u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v50)) > _g4_s3 ? (8u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v51)) > _g4_s4 ? (12u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v52)) > _g4_s5 ? (12u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v53)) > _g4_s6 ? (20u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v54)) > _g4_s7 ? (20u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v55)) > _g4_s8 ? (24u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v56)) > _g4_s9 ? (28u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v57)) > _g4_s10 ? (32u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v58)) > _g4_s11 ? (32u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v59)) > _g4_s12 ? (36u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v60)) > _g4_s13 ? (36u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v61)) > _g4_s14 ? (36u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v62)) > _g4_s15 ? (40u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v63)) > _g4_s16 ? (44u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v64)) > _g4_s17 ? (48u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v65)) > _g4_s18 ? (60u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (79u + sizeof(_g4_t_v66)) > _g4_s19 ? (79u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v67)) > _g4_s20 ? (96u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v68)) > _g4_s21 ? (100u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v69)) > _g4_s22 ? (104u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v70)) > _g4_s23 ? (108u + sizeof(_g4_t_v70)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 36u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 60u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 79u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 96u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 100u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 104u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 108u);

  result = *(unsigned int **)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 456);
  v62 = result;
  if ( result != nullptr )
  {
    v55 = result + 3;
    result = *(unsigned int **)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 456);
    v1 = v62[4];
    if ( v1 == 0 )
    {
      v2 = (unsigned int *)v62[3];
      goto LABEL_28;
    }
    v2 = (unsigned int *)v62[3];
    v3 = 0;
    while ( 1 )
    {
      v4 = (unsigned int **)&v2[v3];
      result = *v4;
      if ( *v4 != nullptr && v4 != (unsigned int **)result )
        break;
      if ( ++v3 == v1 )
        goto LABEL_28;
    }
    v63 = *v4;
    while ( 1 )
    {
      if ( v2 == v63 )
        return result;
LABEL_8:
      v5 = *((uint16_t *)v63 + 13);
      glf::Mutex::Lock((glf::Mutex::Self *)(v62 + 39));
      v6 = (int *)&glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,2>::Invalid;
      v7 = v62[5];
      if ( v5 < (int)(v62[6] - v7) >> 2 )
      {
        v8 = *(uint32_t *)(v7 + 4 * v5);
        v6 = (int *)(v8 + 16);
        if ( v8 == 0 )
          v6 = (int *)&glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,2>::Invalid;
      }
      v9 = *v6;
      if ( *v6 != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v9 + 4), 1u);
      result = (unsigned int *)glf::Mutex::Unlock((glf::Mutex::Self *)(v62 + 39));
      if ( v9 != 0 )
        break;
LABEL_19:
      v2 = (unsigned int *)*v55;
      v12 = *v63;
      v13 = *v63 < *v55;
      v14 = v55[1];
      v63 = (unsigned int *)*v63;
      if ( !v13 )
      {
        result = &v2[v14 - 1];
        if ( v12 <= (unsigned int)(uintptr_t)(result) )
        {
          v15 = (int)(v12 - (uint32_t)(uintptr_t)(v2)) >> 2;
          for ( result = &v2[v15 + 1]; v14 > ++v15; ++result )
          {
            v16 = (unsigned int *)*result;
            if ( *result != 0 && result != v16 )
            {
              v63 = (unsigned int *)*result;
              if ( v2 != v16 )
                goto LABEL_8;
              return result;
            }
          }
LABEL_28:
          v63 = v2;
        }
      }
    }
    v10 = *(char **)(v9 + 12);
    v56 = **(char ***)(v9 + 16);
    if ( (strstr(v56, "lightmap") != nullptr
       || strstr(v56, "citylowres") != nullptr
       || strstr(v56, "ground") != nullptr
       || strstr(v56, "menus_hud") != nullptr
       || strstr(v56, "tree_") != nullptr
       || strstr(v56, "water") != nullptr
       || strstr(v56, "downtown") != nullptr
       || strstr(v56, "industrial") != nullptr
       || strstr(v56, "merge") != nullptr && strstr(v56, "_merged_menu") == nullptr)
      && *v56 != 0
      && strstr(v10, "tga-alpha") == nullptr )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v68), v10, (int)(uintptr_t)(v66));
      v17 = dword_20DE788;
      if ( dword_20DE788 != 0 )
      {
        v51 = v9;
        v59 = (const void *)v68;
        v53 = *(uint32_t *)(v68 - 12);
        v57 = (int *)(&dword_20DE784);
        v18 = v53;
        do
        {
          while ( 1 )
          {
            v19 = *(uint32_t *)(*(uint32_t *)(v17 + 16) - 12);
            v20 = v19;
            v47 = v18;
            if ( v18 <= v19 )
              v20 = v18;
            v21 = memcmp(*(const void **)(v17 + 16), v59, v20);
            v18 = v47;
            v22 = v19 - v47;
            if ( v21 == 0 )
              v21 = v22;
            if ( v21 < 0 )
              break;
            v57 = (int *)v17;
            v17 = *(uint32_t *)(v17 + 8);
            if ( v17 == 0 )
              goto LABEL_39;
          }
          v17 = *(uint32_t *)(v17 + 12);
        }
        while ( v17 != 0 );
LABEL_39:
        v9 = v51;
        if ( v57 != (int *)(uintptr_t)(&dword_20DE784) )
        {
          v23 = v57[4];
          v24 = v53;
          v25 = *(uint32_t *)(v23 - 12);
          if ( v53 > v25 )
            v24 = *(uint32_t *)(v23 - 12);
          v26 = memcmp(v59, (const void *)v57[4], v24);
          if ( v26 == 0 )
            v26 = v53 - v25;
          if ( v26 >= 0 )
          {
LABEL_45:
            v27 = strlen(v56);
            g4_std_compat::string_assign((int)(uintptr_t)(v57 + 5), v56, v27);
            g4_std::string::Destroy(&v68);
            *(uint32_t *)&v66[1] = v9;
            __sync_add_and_fetch((volatile int32_t *)(v9 + 4), 1u);
            glitch::video::CTextureManager::reloadTexture(v62, &v66[1], "empty_texture.tga");
            v28 = *(uint32_t *)&v66[1];
            if ( *(uint32_t *)&v66[1] == 0 )
              goto LABEL_16;
            while ( 1 )
            {
              v29 = *(uint32_t *)(v28 + 4);
              _mm_mfence();
              if ( v29 != 2 )
                break;
              while ( *(uint16_t *)(v28 + 32) == 0xFFFF )
              {
LABEL_48:
                if ( v29 == __sync_val_compare_and_swap((volatile int32_t *)(v28 + 4), v29, v29 - 1) )
                  goto LABEL_16;
                v29 = *(uint32_t *)(v28 + 4);
                _mm_mfence();
                if ( v29 != 2 )
                  goto LABEL_47;
              }
              glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v28);
            }
LABEL_47:
            if ( v29 == 1 )
            {
              G4_VCALL<void>(v28, 4);
              goto LABEL_16;
            }
            goto LABEL_48;
          }
        }
      }
      else
      {
        v57 = (int *)(&dword_20DE784);
      }
      v67 = &dword_213B814;
      g4_std::string::construct_copy(&v69, &v68);
      g4_std::string::construct_copy(v70, &v67);
      if ( v57 == (int *)(uintptr_t)(&dword_20DE784) )
      {
        if ( dword_20DE794 != 0 )
        {
          v61 = dword_20DE790;
          v38 = *(v69 - 3);
          v58 = v38;
          v39 = *(uint32_t *)(*(uint32_t *)(dword_20DE790 + 16) - 12);
          if ( v38 > v39 )
            v38 = *(uint32_t *)(*(uint32_t *)(dword_20DE790 + 16) - 12);
          v40 = memcmp(*(const void **)(dword_20DE790 + 16), v69, v38);
          v41 = v39 - v58;
          if ( v40 == 0 )
            v40 = v41;
          if ( v40 < 0 )
          {
            v46 = (int *)v61;
LABEL_104:
            sub_C0D1C0(v46, &v69);
LABEL_105:
            v57 = v65;
            goto LABEL_79;
          }
        }
        goto LABEL_94;
      }
      v54 = v69;
      v60 = *(v69 - 3);
      v30 = (uint32_t *)v57[4];
      v31 = v60;
      if ( *(v30 - 3) <= v60 )
        v31 = *(v30 - 3);
      v52 = v31;
      v48 = *(v30 - 3);
      v32 = memcmp(v69, (const void *)v57[4], v31);
      if ( v32 == 0 )
        v32 = v60 - v48;
      if ( v32 >= 0 )
      {
        v33 = memcmp(v30, v54, v52);
        if ( v33 == 0 )
          v33 = v48 - v60;
        if ( v33 >= 0 )
          goto LABEL_79;
        if ( (int *)dword_20DE790 == v57 )
        {
          sub_C0D1C0(v57, &v69);
          goto LABEL_105;
        }
        v42 = sub_19048E0(v57);
        v43 = *(uint32_t **)(v42 + 16);
        v44 = v60;
        if ( *(v43 - 3) <= v60 )
          v44 = *(v43 - 3);
        v50 = *(v43 - 3);
        v45 = memcmp(v54, v43, v44);
        if ( v45 == 0 )
          v45 = v60 - v50;
        if ( v45 < 0 )
        {
          v46 = v57;
          if ( v57[3] != 0 )
          {
            sub_C0D1C0(v42, &v69);
            v57 = v65;
            goto LABEL_79;
          }
          goto LABEL_104;
        }
        goto LABEL_94;
      }
      if ( (int *)dword_20DE78C != v57 )
      {
        v34 = sub_1904940(v57);
        v35 = *(uint32_t **)(v34 + 16);
        v36 = v60;
        if ( *(v35 - 3) <= v60 )
          v36 = *(v35 - 3);
        v49 = *(v35 - 3);
        v37 = memcmp(v35, v54, v36);
        if ( v37 == 0 )
          v37 = v49 - v60;
        if ( v37 >= 0 )
        {
LABEL_94:
          sub_C0D2D0();
          v57 = v64;
          goto LABEL_79;
        }
        if ( *(uint32_t *)(v34 + 12) == 0 )
        {
          sub_C0D1C0(v34, &v69);
          goto LABEL_105;
        }
      }
      sub_C0D1C0(v57, &v69);
      v57 = v65;
LABEL_79:
      g4_std::string::Destroy(v70);
      g4_std::string::Destroy(&v69);
      g4_std::string::Destroy(&v67);
      goto LABEL_45;
    }
    while ( 1 )
    {
LABEL_16:
      v11 = *(uint32_t *)(v9 + 4);
      _mm_mfence();
      if ( v11 == 2 )
      {
        if ( *(uint16_t *)(v9 + 32) == 0xFFFF )
          goto LABEL_18;
        glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v9);
      }
      else
      {
        if ( v11 == 1 )
        {
          result = (unsigned int *)G4_VCALL<int>(v9, 4);
          goto LABEL_19;
        }
LABEL_18:
        result = (unsigned int *)__sync_val_compare_and_swap((volatile int32_t *)(v9 + 4), v11, v11 - 1);
        if ( (unsigned int *)v11 == result )
          goto LABEL_19;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C0DCA0  (binary VA: 0xc0dca0)
// Original: sub_C0DCA0
// ----------------------------------------------------------------------------
void sub_C0DCA0(int a1)
{
  int v1;
  int v2;
  int v3;
  void *v4;
  g4_cxa_guard_t *v5;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B468);
  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 8) = 0;
  *(uint8_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  v1 = sub_732CE0();
  sub_733C70(v1);
  if ( *(uint8_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 149) != 0 )
    sub_C0D530();
  v2 = sub_732CE0();
  v3 = (int)(uintptr_t)(sub_767E40(v2, 2, 0, 0));
  if ( byte_20D2B90 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90) != 0 )
  {
    sub_793360(&unk_20D2B98);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
    __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D2B9C == 0 )
    v4 = &unk_20D2B98;
  sub_7A32E0(v4, v3, 1);
  byte_20D186A = 1;
  if ( (*(uint8_t *)unk_20D596F) != 0 )
    sub_62C940((int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: sub_C0DE10  (binary VA: 0xc0de10)
// Original: sub_C0DE10
// ----------------------------------------------------------------------------
int sub_C0DE10()
{
  uint8_t *v0;
  uint32_t *v1;
  int v2;
  unsigned int *v3;
  int v4;
  unsigned int **v5;
  unsigned int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  size_t v12;
  size_t v13;
  size_t v14;
  int v15;
  int v16;
  size_t v17;
  int v18;
  size_t v19;
  int v20;
  int *v21;
  int v22;
  int v23;
  int32_t v24;
  size_t v25;
  size_t v26;
  int v27;
  int v28;
  int v29;
  void *v30;
  int v31;
  int v32;
  int32_t v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  unsigned int *i;
  unsigned int *v38;
  void *v39;
  int v40;
  int result;
  typedef size_t _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef void *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef char _g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef unsigned int **_g4_t_v50;
  typedef size_t _g4_t_v51;
  typedef char *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef const void *_g4_t_v54;
  typedef int *_g4_t_v55;
  typedef unsigned int *_g4_t_v56;
  typedef uint8_t _g4_t_v57[5];
  typedef int _g4_t_v58;
  typedef volatile int32_t *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int *_g4_t_v63;
  typedef int *_g4_t_v64;
  typedef int _g4_t_v65;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v42)) > _g4_s0 ? (4u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v43)) > _g4_s1 ? (4u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v44)) > _g4_s2 ? (8u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v45)) > _g4_s3 ? (8u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v46)) > _g4_s4 ? (12u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (19u + sizeof(_g4_t_v47)) > _g4_s5 ? (19u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v48)) > _g4_s6 ? (20u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v49)) > _g4_s7 ? (24u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v50)) > _g4_s8 ? (28u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v51)) > _g4_s9 ? (32u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v52)) > _g4_s10 ? (40u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v53)) > _g4_s11 ? (44u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v54)) > _g4_s12 ? (48u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v55)) > _g4_s13 ? (52u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v56)) > _g4_s14 ? (56u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (63u + sizeof(_g4_t_v57)) > _g4_s15 ? (63u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v58)) > _g4_s16 ? (68u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v59)) > _g4_s17 ? (72u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v60)) > _g4_s18 ? (76u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v61)) > _g4_s19 ? (80u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v62)) > _g4_s20 ? (84u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v63)) > _g4_s21 ? (88u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v64)) > _g4_s22 ? (92u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v65)) > _g4_s23 ? (96u + sizeof(_g4_t_v65)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 19u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 63u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 72u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 76u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 80u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 84u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 88u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 92u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 96u);

  v0 = (uint8_t *)sub_B97E20();
  v48 = (uint32_t *)(v0);
  v46 = 0;
  v47 = 0;
  if ( v0 != nullptr )
  {
    v46 = 1;
    v47 = v0[240] & 1;
    if ( v47 != 1 )
    {
      G4_VCALL<void>(v0, 156, 1, 1);
      v46 = 0;
    }
  }
  v1 = *(uint32_t **)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 456);
  v53 = v1;
  if ( v1 != nullptr )
  {
    v50 = (unsigned int **)(v1 + 3);
    v2 = v1[4];
    if ( v2 != 0 )
    {
      v3 = (unsigned int *)v1[3];
      v4 = 0;
      while ( 1 )
      {
        v5 = (unsigned int **)&v3[v4];
        if ( *v5 != nullptr && v5 != (unsigned int **)*v5 )
          break;
        if ( ++v4 == v2 )
          goto LABEL_70;
      }
      v56 = *v5;
    }
    else
    {
      v3 = (unsigned int *)v1[3];
LABEL_70:
      v56 = v3;
    }
LABEL_10:
    if ( v3 != v56 )
    {
      while ( 1 )
      {
        v6 = *((uint16_t *)v56 + 13);
        glf::Mutex::Lock((glf::Mutex::Self *)(v53 + 39));
        v7 = v53[5];
        v8 = (int *)&glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,2>::Invalid;
        if ( v6 < (v53[6] - v7) >> 2 )
        {
          v9 = *(uint32_t *)(v7 + 4 * v6);
          v8 = (int *)(v9 + 16);
          if ( v9 == 0 )
            v8 = (int *)&glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,2>::Invalid;
        }
        v10 = *v8;
        if ( *v8 != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1u);
        glf::Mutex::Unlock((glf::Mutex::Self *)(v53 + 39));
        if ( v10 != 0 )
          break;
LABEL_55:
        v3 = *v50;
        v34 = (unsigned int)(uintptr_t)(v50[1]);
        v35 = *v56;
        v56 = (unsigned int *)*v56;
        if ( v56 < *v50 || v35 > (unsigned int)(uintptr_t)(&v3[v34 - 1]) )
          goto LABEL_10;
        v36 = (int)(v35 - (uint32_t)(uintptr_t)(v3)) >> 2;
        for ( i = &v3[v36 + 1]; ; ++i )
        {
          if ( v34 <= ++v36 )
            goto LABEL_70;
          v38 = (unsigned int *)*i;
          if ( *i != 0 && i != v38 )
            break;
        }
        v56 = (unsigned int *)*i;
        if ( v3 == v38 )
          goto LABEL_62;
      }
      v52 = *(char **)(v10 + 12);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57[1]), v52, (int)(uintptr_t)(v57));
      v11 = dword_20DE788;
      v55 = (int *)(&dword_20DE784);
      if ( dword_20DE788 != 0 )
      {
        v49 = v10;
        v54 = *(const void **)&v57[1];
        v12 = *(uint32_t *)(*(uint32_t *)&v57[1] - 12);
        v51 = v12;
        do
        {
          while ( 1 )
          {
            v13 = v12;
            v14 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
            v42 = v12;
            if ( v14 <= v12 )
              v13 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
            v15 = memcmp(*(const void **)(v11 + 16), v54, v13);
            v12 = v42;
            v16 = v14 - v42;
            if ( v15 == 0 )
              v15 = v16;
            if ( v15 < 0 )
              break;
            v55 = (int *)v11;
            v11 = *(uint32_t *)(v11 + 8);
            if ( v11 == 0 )
              goto LABEL_26;
          }
          v11 = *(uint32_t *)(v11 + 12);
        }
        while ( v11 != 0 );
LABEL_26:
        v10 = v49;
        if ( v55 != (int *)(uintptr_t)(&dword_20DE784) )
        {
          v17 = v51;
          v18 = v55[4];
          v19 = *(uint32_t *)(v18 - 12);
          if ( v19 <= v51 )
            v17 = *(uint32_t *)(v18 - 12);
          v20 = memcmp(v54, (const void *)v55[4], v17);
          v21 = (int *)(&dword_20DE784);
          if ( v20 == 0 )
            v20 = v51 - v19;
          if ( v20 >= 0 )
            v21 = v55;
          v55 = v21;
        }
      }
      g4_std::string::Destroy(&v57[1]);
      if ( v55 == (int *)(uintptr_t)(&dword_20DE784) )
        goto LABEL_52;
      v58 = v10;
      v22 = v55[5];
      __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1u);
      glitch::video::CTextureManager::reloadTexture(v53, &v58, v22);
      v23 = v58;
      if ( v58 == 0 )
      {
LABEL_39:
        if ( v52 == nullptr )
          goto LABEL_80;
        goto LABEL_40;
      }
      while ( 1 )
      {
        v24 = *(uint32_t *)(v23 + 4);
        _mm_mfence();
        if ( v24 == 2 )
        {
          if ( *(uint16_t *)(v23 + 32) == 0xFFFF )
            goto LABEL_38;
          glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v23);
        }
        else
        {
          if ( v24 == 1 )
          {
            G4_VCALL<void>(v23, 4);
            if ( v52 == nullptr )
LABEL_80:
              sub_18FFFD0("basic_string::_S_construct null not valid");
LABEL_40:
            v25 = strlen(v52);
            if ( v52 == &v52[v25] )
            {
              v30 = &unk_20D3E78;
            }
            else
            {
              v26 = v25;
              if ( v25 > 0x3FFFFFFC )
                sub_1900180("basic_string::_S_create");
              if ( v25 + 29 > 0x1000 && v25 != 0 )
              {
                v27 = ((uint16_t)v25 + 29) & 0xFFF;
                v28 = 1073741820;
                if ( v25 + 4096 - v27 <= 0x3FFFFFFC )
                  v28 = v25 + 4096 - v27;
                v44 = v28;
                v29 = sub_4EBDC0(v28 + 13);
                *(uint32_t *)(v29 + 4) = v44;
                *(uint32_t *)(v29 + 8) = 0;
                v30 = (void *)(v29 + 12);
LABEL_47:
                v43 = v29;
                v45 = v30;
                memcpy(v30, v52, v26);
                v30 = v45;
                v29 = v43;
              }
              else
              {
                v29 = sub_4EBDC0(v25 + 13);
                *(uint32_t *)(v29 + 4) = v26;
                *(uint32_t *)(v29 + 8) = 0;
                v30 = (void *)(v29 + 12);
                if ( v26 != 1 )
                  goto LABEL_47;
                *(uint8_t *)(v29 + 12) = *v52;
              }
              if ( (void *)v29 != &unk_20D3E6C )
              {
                *(uint32_t *)(v29 + 8) = 0;
                *(uint32_t *)v29 = v26;
                *((uint8_t *)v30 + v26) = 0;
              }
            }
            v59 = (volatile int32_t *)v30;
            v31 = sub_854940(&v59);
            v32 = (int)(uintptr_t)(v59 - 3);
            if ( v59 - 3 != (volatile int32_t *)&unk_20D3E6C && __sync_fetch_and_add(v59 - 1, 0xFFFFFFFF) <= 0 )
              gll_operator_delete_arr(v32);
            glitch::video::ITexture::setMinFilter(v10, 5);
            glitch::video::ITexture::setMagFilter(v10, 1);
            sub_8546D0((glitch::video::ITexture::Self *)v10, v31);
            while ( 1 )
            {
LABEL_52:
              v33 = *(uint32_t *)(v10 + 4);
              _mm_mfence();
              if ( v33 == 2 )
              {
                if ( *(uint16_t *)(v10 + 32) != 0xFFFF )
                {
                  glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v10);
                  continue;
                }
              }
              else if ( v33 == 1 )
              {
                G4_VCALL<void>(v10, 4);
                goto LABEL_55;
              }
              if ( v33 == __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v33, v33 - 1) )
                goto LABEL_55;
            }
          }
LABEL_38:
          if ( v24 == __sync_val_compare_and_swap((volatile int32_t *)(v23 + 4), v24, v24 - 1) )
            goto LABEL_39;
        }
      }
    }
LABEL_62:
    v39 = nullptr;
    v40 = 0;
    v61 = 0;
    v62 = 0;
    v65 = 0;
    v63 = &v61;
    v64 = &v61;
    if ( dword_20DE788 != 0 )
    {
      v62 = dword_20DE788;
      v63 = (int *)dword_20DE78C;
      v64 = (int *)dword_20DE790;
      *(uint32_t *)(dword_20DE788 + 4) = (uint32_t)(uintptr_t)(&v61);
      dword_20DE788 = 0;
      dword_20DE78C = (int)(uintptr_t)(&dword_20DE784);
      dword_20DE790 = (int)(uintptr_t)(&dword_20DE784);
      v40 = v65;
      v39 = (void *)v62;
    }
    v65 = dword_20DE794;
    dword_20DE794 = v40;
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      (int)(uintptr_t)(&v60),
      v39);
  }
  result = (int)(uintptr_t)(v48);
  if ( v48 != nullptr )
  {
    result = v48[60] & 1;
    if ( v47 != (uint8_t)result )
      return G4_VCALL<int>(v48, 156, 1, v46);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C0E430  (binary VA: 0xc0e430)
// Original: sub_C0E430
// ----------------------------------------------------------------------------
int sub_C0E430(long double a1)
{
  int *v1;
  int *v2;
  int *v3;
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  glitch::os::Timer::Self *v9;
  int *v10;
  uint32_t *i;
  int v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  void *v21;
  void *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  void *v27;
  void *v28;
  int v29;
  int v30;
  int v31;
  bool v32;
  int *v33;
  int *v35;

  sub_C0DE10();
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0(&dword_20D3C40);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D3C44 == 0 )
    v1 = (int *)(&dword_20D3C40);
  if ( sub_669490(v1[13]) == 5 )
  {
    if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
    {
      sub_630BF0(&dword_20D3C40);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
    }
    v35 = nullptr;
    if ( byte_20D3C44 == 0 )
      v35 = (int *)(&dword_20D3C40);
    sub_63DD70(v35, 1, 1, -1);
  }
  if ( byte_20D33C0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D33C0) != 0 )
  {
    sub_55B1B0(&dword_20D33E0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D33C0);
    __cxa_atexit((void (*)(void *))sub_5785F0, &dword_20D33E0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D33E4 == 0 )
    v2 = (int *)(&dword_20D33E0);
  sub_55C4F0(v2, 0);
  sub_66E380(1);
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0(&dword_20D3C40);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D3C44 == 0 )
    v3 = (int *)(&dword_20D3C40);
  sub_677820(v3[13]);
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v4 = (int *)(&dword_20D4AC0);
  sub_AB0F40((int)(uintptr_t)(v4), 1.0, "g_sfx_menu_stopped", 0.05f);
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v5 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v5 = (int *)(&dword_20D4AC0);
  sub_AC4910(a1, (int)(uintptr_t)(v5), 2, 0.0);
  v7 = sub_8F0680(v6);
  if ( G4_VCALL<int>(v7, 456) != 0 )
  {
    v9 = (glitch::os::Timer::Self *)sub_8F0680(v8);
    sub_90C010(v9, 0);
  }
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0(&dword_20D4A60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v10 = nullptr;
  if ( byte_20D4A64 == 0 )
    v10 = (int *)(&dword_20D4A60);
  for ( i = *(uint32_t **)(v10[8] + 88); i != nullptr; i = (uint32_t *)i[111] )
  {
    if ( i[42] == 22 )
      G4_VCALL<void>(i, 68);
    if ( *(uint32_t *)(i[102] - 12) != 0 )
    {
      v12 = i[101];
      if ( v12 != 0 && ((*(int (**)(uint32_t))(*(uint32_t *)v12 + 32))(i[101]) & 8) != 0 )
        G4_VCALL<void>(i, 392, 1);
    }
  }
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0(&dword_20D3C40);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v13 = nullptr;
  if ( byte_20D3C44 == 0 )
    v13 = (int *)(&dword_20D3C40);
  *(uint32_t *)(v13[13] + 64) = 0;
  v14 = sub_8F0680(v8);
  sub_924080(v14, 0);
  v16 = sub_8F0680(v15);
  G4_VCALL<void>(v16, 64);
  v18 = sub_8F0680(v17);
  G4_VCALL<void>(v18, 108, 1);
  v19 = sub_5BC940();
  v20 = v19;
  if ( v19 != 0 )
  {
    g4_std::Rb_tree_int_pair_int_const_bool_c1a45c::M_erase(
      v19 + 44,
      *(void **)(v19 + 52));
    *(uint32_t *)(v20 + 52) = 0;
    *(uint32_t *)(v20 + 56) = v20 + 48;
    *(uint32_t *)(v20 + 60) = v20 + 48;
    *(uint32_t *)(v20 + 64) = 0;
    g4_std::Rb_tree_int_pair_int_const_Analo_5877fa::M_erase(
      v20 + 68,
      *(void **)(v20 + 76));
    *(uint32_t *)(v20 + 76) = 0;
    *(uint32_t *)(v20 + 80) = v20 + 72;
    *(uint32_t *)(v20 + 84) = v20 + 72;
    *(uint32_t *)(v20 + 88) = 0;
  }
  sub_978220(*(uint32_t *)(dword_20DDDC0 + 868));
  if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
  {
    sub_9C9CC0(&unk_20D4E60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
    __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
  }
  v21 = nullptr;
  if ( byte_20D4E64 == 0 )
    v21 = &unk_20D4E60;
  sub_974480(v21, 0);
  if ( byte_20D54E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D54E0) != 0 )
  {
    sub_51DC30(&unk_20D5500);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D54E0);
    __cxa_atexit((void (*)(void *))sub_4EEA60, &unk_20D5500, &unk_20D1280);
  }
  v22 = nullptr;
  if ( byte_20D5514 == 0 )
    v22 = &unk_20D5500;
  sub_51DED0(v22);
  v23 = sub_732CE0();
  sub_733930(v23, 2);
  v24 = sub_732CE0();
  sub_733C70(v24);
  v25 = sub_732CE0();
  v26 = (int)(uintptr_t)(sub_767E40(v25, 0, 1, 0));
  if ( byte_20D2B90 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90) != 0 )
  {
    sub_793360(&unk_20D2B98);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
    __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
  }
  v27 = nullptr;
  if ( byte_20D2B9C == 0 )
    v27 = &unk_20D2B98;
  sub_7A32E0(v27, v26, 0);
  if ( byte_20D54E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D54E0) != 0 )
  {
    sub_51DC30(&unk_20D5500);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D54E0);
    __cxa_atexit((void (*)(void *))sub_4EEA60, &unk_20D5500, &unk_20D1280);
  }
  v28 = nullptr;
  if ( byte_20D5514 == 0 )
    v28 = &unk_20D5500;
  v29 = sub_4EBBF0(0xCu, 1);
  sub_C0FF40(v29);
  sub_51DCA0(v28, v29);
  v30 = *(uint32_t *)(v29 + 4);
  if ( v30 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v30 + 4))(*(uint32_t *)(v29 + 4));
  v31 = sub_4EBBF0(0x10u, 1);
  sub_C10450(v31);
  v32 = byte_20D3BA0 == 0;
  *(uint32_t *)(v29 + 4) = v31;
  if ( v32 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
  {
    sub_971D40(&dword_20D3BC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
    __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
  }
  v33 = nullptr;
  if ( byte_20D3BC4 == 0 )
    v33 = (int *)(&dword_20D3BC0);
  sub_9727C0(v33);
  *(uintptr_t *)(unk_20DDE08) = (uintptr_t)(0);
  return sub_5BCB70(*(uint32_t *)(dword_20DDDC0 + 852));
}

// ----------------------------------------------------------------------------
// Function: sub_C0ECC0  (binary VA: 0xc0ecc0)
// Original: sub_C0ECC0
// ----------------------------------------------------------------------------
char * sub_C0ECC0(int a1, long double a2, int a3)
{
  int v3;
  char *result;
  int v5;
  int *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  void *v16;
  int *v17;
  char *v18;
  void *v19;
  void *v20;
  int v21;
  typedef g4_cxa_guard_t *_g4_t_v22;
  typedef int _g4_t_v23[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v23)) > _g4_s1 ? (20u + sizeof(_g4_t_v23)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);

  v3 = dword_20DDDC0;
  result = *(char **)(a3 + 8);
  if ( result == (char *)(uintptr_t)(uint8_t *)&dword_0 + 1 )
  {
    if ( *(uint8_t *)(a3 + 20) != 0 )
    {
      return (char *)sub_C0E430(a2);
    }
    else
    {
      if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
      {
        sub_7D7730(&unk_20D2D60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
        __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
      }
      v20 = nullptr;
      if ( byte_20D2D64 == 0 )
        v20 = &unk_20D2D60;
      return (char *)sub_7A9A00(v20);
    }
  }
  else if ( result == (char *)(uintptr_t)(uint8_t *)&dword_0 + 2 )
  {
    sub_B9D390(dword_20DDDC0, 1);
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::FireManualEvent((grapher::ActorManager::Self *)&unk_20D5B60, "CloseInGameMenu", nullptr);
    v11 = sub_8F0680(v10);
    sub_8F5BC0(v11);
    v13 = sub_8F0680(v12);
    G4_VCALL<void>(v13, 112, 0);
    v14 = sub_732CE0();
    sub_733930(v14, 2);
    v15 = sub_732CE0();
    sub_733C70(v15);
    if ( *(uint8_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 149) != 0 )
      sub_C0DE10();
    if ( byte_20D54E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D54E0) != 0 )
    {
      sub_51DC30(&unk_20D5500);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D54E0);
      __cxa_atexit((void (*)(void *))sub_4EEA60, &unk_20D5500, &unk_20D1280);
    }
    v16 = nullptr;
    if ( byte_20D5514 == 0 )
      v16 = &unk_20D5500;
    sub_51DED0(v16);
    sub_64C700(v22);
    if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
    {
      sub_ADB4E0(&dword_20D4AC0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
      __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
    }
    v17 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v17 = (int *)(&dword_20D4AC0);
    sub_AB0F40((int)(uintptr_t)(v17), 1.0, "g_sfx_menu_stopped", 0.05f);
    memset(v23, 0, 12);
    v18 = (char *)(uintptr_t)(off_20BB9B4[0]);
    if ( byte_20D2B90 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90) != 0 )
    {
      sub_793360(&unk_20D2B98);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
      __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
    }
    v19 = nullptr;
    if ( byte_20D2B9C == 0 )
      v19 = &unk_20D2B98;
    sub_7B8B70(v19, v18, v23, 0);
    result = (char *)v23[0];
    if ( v23[0] != 0 )
      return (char *)sub_4EB870(v23[0]);
  }
  else if ( result == nullptr )
  {
    *(uint32_t *)(a3 + 8) = 1;
    if ( *(uint8_t *)(sub_8F0680(a1) + 3904) != 0 )
    {
      v21 = sub_8F0680(v5);
      sub_90E610(v21);
    }
    if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
    {
      sub_ADB4E0(&dword_20D4AC0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
      __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
    }
    v6 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v6 = (int *)(&dword_20D4AC0);
    sub_AB0F40((int)(uintptr_t)(v6), 0.0, "g_sfx_menu_stopped", 0.05f);
    sub_B9D390(v3, 0);
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0(&dword_20D49A0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v7 = nullptr;
    if ( byte_20D49A8 == 0 )
      v7 = (int *)(&dword_20D49A0);
    sub_82D060(v7, 0);
    v8 = sub_5BC940();
    v9 = v8;
    if ( v8 != 0 )
    {
      g4_std::Rb_tree_int_pair_int_const_bool_c1a45c::M_erase(
        v8 + 44,
        *(void **)(v8 + 52));
      *(uint32_t *)(v9 + 52) = 0;
      *(uint32_t *)(v9 + 56) = v9 + 48;
      *(uint32_t *)(v9 + 60) = v9 + 48;
      *(uint32_t *)(v9 + 64) = 0;
      g4_std::Rb_tree_int_pair_int_const_Analo_5877fa::M_erase(
        v9 + 68,
        *(void **)(v9 + 76));
      *(uint32_t *)(v9 + 76) = 0;
      *(uint32_t *)(v9 + 80) = v9 + 72;
      *(uint32_t *)(v9 + 84) = v9 + 72;
      *(uint32_t *)(v9 + 88) = 0;
    }
    sub_5BCA80(dword_20D42C0);
    result = (char *)&unk_20D1865;
    *(uint8_t *)(unk_20D1865) = (uint8_t)(uintptr_t)(0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C0F250  (binary VA: 0xc0f250)
// Original: sub_C0F250
// ----------------------------------------------------------------------------
int * sub_C0F250()
{
  return (int *)(&dword_20DE798);
}

// ----------------------------------------------------------------------------
// Function: nullsub_521  (binary VA: 0xc0f278)
// Original: nullsub_521
// ----------------------------------------------------------------------------
void nullsub_521()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_string_string_7c7b5d::Destroy  (binary VA: 0xc0f280)
// Original: std::map<std::string,std::string>::~map
// ----------------------------------------------------------------------------
void g4_std::map_string_string_7c7b5d::Destroy(void **self)
{
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)(uintptr_t)(self),
    *(self + 2));
}


