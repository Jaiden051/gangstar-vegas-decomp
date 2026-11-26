#include "Core/Utils/DecompTypes.h"
#include "TU34_MenuControllerPart14.h"

// ----------------------------------------------------------------------------
// Function: sub_C205F0  (binary VA: 0xc205f0)
// Original: sub_C205F0
// ----------------------------------------------------------------------------
int sub_C205F0()
{
  int result;
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE968);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE968, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE96C), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE96C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE970), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE970, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE974), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE974, &unk_20D1280);
  dword_20DE978 = 1056964608;
  dword_20DE97C = 1056964608;
  dword_20DE980 = 1056964608;
  dword_20DE984 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE984, &unk_20D1280);
  dword_20DE988 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE988, &unk_20D1280);
  dword_20DE98C = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE98C, &unk_20D1280);
  dword_20DE990 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE990, &unk_20D1280);
  dword_20DE994 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE994, &unk_20D1280);
  dword_20DE998 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE998, &unk_20D1280);
  dword_20DE99C = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE99C, &unk_20D1280);
  dword_20DE9A0 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DE9A0, &unk_20D1280);
  result = opNewArray(0x10u);
  dword_20DE9A4 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C207E0  (binary VA: 0xc207e0)
// Original: sub_C207E0
// ----------------------------------------------------------------------------
int sub_C207E0(int a1)
{
  return *(uint32_t *)(a1 + 24) + *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: sub_C207F0  (binary VA: 0xc207f0)
// Original: sub_C207F0
// ----------------------------------------------------------------------------
int sub_C207F0(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: sub_C20800  (binary VA: 0xc20800)
// Original: sub_C20800
// ----------------------------------------------------------------------------
size_t sub_C20800(uint32_t *a1, void *dest, size_t a3)
{
  size_t n;
  int v4;

  n = a3;
  v4 = a1[6];
  if ( (signed int)(v4 + a3) > a1[4] )
    n = a1[4] - v4;
  memcpy(dest, (const void *)(a1[3] + v4), n);
  a1[6] += n;
  return n;
}

// ----------------------------------------------------------------------------
// Function: sub_C20870  (binary VA: 0xc20870)
// Original: sub_C20870
// ----------------------------------------------------------------------------
void sub_C20870(int a1)
{
  int v1;
  int v2;

  if ( *(uint8_t *)(a1 + 28) != 0 )
  {
    v1 = *(uint32_t *)(a1 + 12);
    v2 = a1 + 5;
    if ( v1 != 0 && v1 != v2 )
      opDeleteArray(*(void **)(a1 + 12));
    *(uint32_t *)(a1 + 12) = v2;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 20) = 1;
  }
  *(uint8_t *)(a1 + 4) = 0;
}

// ----------------------------------------------------------------------------
// Function: sub_C208E0  (binary VA: 0xc208e0)
// Original: sub_C208E0
// ----------------------------------------------------------------------------
void sub_C208E0(int a1, int a2)
{
  int v3;
  size_t v4;
  void *dest;
  void *v6;

  v3 = a2;
  v4 = a2;
  if ( a2 <= 0 )
  {
    v4 = 1;
    v3 = 1;
  }
  dest = (void *)sub_4EBC30(v4, 1);
  if ( *(int *)(a1 + 16) > 0 )
    memcpy(dest, *(const void **)(a1 + 12), *(uint32_t *)(a1 + 16));
  v6 = *(void **)(a1 + 12);
  if ( v6 != (void *)(a1 + 5) && v6 != nullptr )
    opDeleteArray(v6);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(dest);
  *(uint32_t *)(a1 + 20) = v3;
}

// ----------------------------------------------------------------------------
// Function: sub_C20980  (binary VA: 0xc20980)
// Original: sub_C20980
// ----------------------------------------------------------------------------
void sub_C20980(char *a1)
{
  bool v1;
  char *v2;
  char *v3;

  v1 = a1[28] == 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B728);
  if ( !v1 )
  {
    v2 = *((char **)a1 + 3);
    v3 = a1 + 5;
    if ( v2 != nullptr && v2 != v3 )
      opDeleteArray(*((void **)a1 + 3));
    *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(v3);
    *((uint32_t *)a1 + 4) = 0;
    *((uint32_t *)a1 + 5) = 1;
  }
  a1[4] = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B7E8);
  opDelete(a1);
}



// ============================================================================
// Address:   0xc20a00 (size: 116 bytes)
// Symbol:    sub_C20A00
// Demangled: sub_C20A00
// ============================================================================
int (**sub_C20A00(int a1))(int)
{
  bool v1;
  int v2;
  int v3;

  v1 = *(uint8_t *)(a1 + 28) == 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B728);
  if ( !v1 )
  {
    v2 = *(uint32_t *)(a1 + 12);
    v3 = a1 + 5;
    if ( v2 != 0 && v2 != v3 )
      opDeleteArray(*(void **)(a1 + 12));
    *(uint32_t *)(a1 + 12) = v3;
    *(uint32_t *)(a1 + 16) = 0;
    *(uint32_t *)(a1 + 20) = 1;
  }
  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B7E8);
  return (int (**)(int))(uintptr_t)(&off_206B7E8);
}
// ----------------------------------------------------------------------------
// Function: sub_C20A80  (binary VA: 0xc20a80)
// Original: sub_C20A80
// ----------------------------------------------------------------------------
int sub_C20A80(int a1, int a2, int a3)
{
  int result;
  int v4;

  result = a3;
  v4 = *(uint32_t *)(a1 + 24);
  switch ( a3 )
  {
    case 0:
      v4 = a2;
      goto LABEL_7;
    case 1:
      v4 += a2;
LABEL_7:
      if ( v4 < 0 )
        goto LABEL_5;
      goto LABEL_8;
    case 2:
      v4 = a2 + *(uint32_t *)(a1 + 16);
      if ( v4 < 0 )
      {
LABEL_5:
        *(uint32_t *)(a1 + 24) = 0;
        return result;
      }
LABEL_8:
      result = *(uint32_t *)(a1 + 16);
      if ( v4 <= result )
      {
        *(uint32_t *)(a1 + 24) = v4;
      }
      else if ( *(uint8_t *)(a1 + 28) != 0 && (*(uint8_t *)(a1 + 8) & 2) != 0 )
      {
        if ( v4 > *(uint32_t *)(a1 + 20) )
        {
          sub_C208E0(a1, v4);
          result = *(uint32_t *)(a1 + 16);
        }
        *(uint32_t *)(a1 + 24) = result;
      }
      return result;
    default:
      goto LABEL_7;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C20B10  (binary VA: 0xc20b10)
// Original: sub_C20B10
// ----------------------------------------------------------------------------
int sub_C20B10(int a1, int a2, int a3)
{
  int v3;
  void *dest;
  int result;
  size_t v6;
  signed int n;
  void *v8;
  void *v9;
  void *v10;
  size_t v11;

  v3 = a3 + *(uint32_t *)(a1 + 24);
  if ( v3 <= *(uint32_t *)(a1 + 16) )
    goto LABEL_4;
  if ( v3 <= *(uint32_t *)(a1 + 20) )
  {
    *(uint32_t *)(a1 + 16) = v3;
    goto LABEL_4;
  }
  if ( *(uint8_t *)(a1 + 28) == 0 )
  {
LABEL_4:
    dest = *(void **)(a1 + 12);
    goto LABEL_5;
  }
  v6 = 1;
  if ( v3 > 0 )
    v6 = a3 + *(uint32_t *)(a1 + 24);
  v11 = v6;
  dest = (void *)sub_4EBC30(v6, 1);
  n = *(uint32_t *)(a1 + 16);
  if ( n > 0 )
  {
    v9 = dest;
    memcpy(dest, *(const void **)(a1 + 12), n);
    dest = v9;
  }
  v8 = *(void **)(a1 + 12);
  if ( v8 != (void *)(a1 + 5) && v8 != nullptr )
  {
    v10 = dest;
    opDeleteArray(v8);
    dest = v10;
  }
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(dest);
  *(uint32_t *)(a1 + 20) = v11;
LABEL_5:
  result = G4_VCALL<int>(a2, 12, dest, a3);
  *(uint32_t *)(a1 + 24) += a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C20C00  (binary VA: 0xc20c00)
// Original: sub_C20C00
// ----------------------------------------------------------------------------
size_t sub_C20C00(int a1, void *src, size_t n)
{
  int v3;
  int v4;
  char *dest;
  size_t v7;
  int v8;
  size_t v9;

  v3 = *(uint32_t *)(a1 + 24);
  v4 = v3 + n;
  if ( (signed int)(v3 + n) <= *(uint32_t *)(a1 + 16) )
    goto LABEL_7;
  if ( v4 <= *(uint32_t *)(a1 + 20) )
  {
    *(uint32_t *)(a1 + 16) = v4;
LABEL_7:
    dest = *(char **)(a1 + 12);
    goto LABEL_8;
  }
  if ( *(uint8_t *)(a1 + 28) != 0 )
  {
    v7 = 1;
    if ( v4 > 0 )
      v7 = v3 + n;
    v9 = v7;
    dest = (char *)sub_4EBC30(v7, 1);
    if ( *(int *)(a1 + 16) > 0 )
      memcpy(dest, *(const void **)(a1 + 12), *(uint32_t *)(a1 + 16));
    v8 = *(uint32_t *)(a1 + 12);
    if ( v8 != a1 + 5 && v8 != 0 )
      opDeleteArray(*(void **)(a1 + 12));
    v3 = *(uint32_t *)(a1 + 24);
    *(uint32_t *)(a1 + 20) = v9;
    *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(dest);
    v4 = n + v3;
  }
  else
  {
    dest = *(char **)(a1 + 12);
  }
  *(uint32_t *)(a1 + 16) = v4;
LABEL_8:
  memcpy(&dest[v3], src, n);
  *(uint32_t *)(a1 + 24) += n;
  return n;
}

// ----------------------------------------------------------------------------
// Function: sub_C20CF0  (binary VA: 0xc20cf0)
// Original: sub_C20CF0
// ----------------------------------------------------------------------------
void sub_C20CF0(int a1, signed int a2)
{
  int v2;
  size_t v3;
  void *dest;
  void *v5;

  v2 = a2;
  if ( *(uint32_t *)(a1 + 20) < a2 )
  {
    v3 = a2;
    if ( a2 <= 0 )
    {
      v3 = 1;
      v2 = 1;
    }
    dest = (void *)sub_4EBC30(v3, 1);
    if ( *(int *)(a1 + 16) > 0 )
      memcpy(dest, *(const void **)(a1 + 12), *(uint32_t *)(a1 + 16));
    v5 = *(void **)(a1 + 12);
    if ( v5 != (void *)(a1 + 5) && v5 != nullptr )
      opDeleteArray(v5);
    *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(dest);
    *(uint32_t *)(a1 + 20) = v2;
  }
}



// ============================================================================
// Address:   0xc20d90 (size: 95 bytes)
// Symbol:    sub_C20D90
// Demangled: sub_C20D90
// ============================================================================
int (**sub_C20D90(int a1))(int)
{
  sub_C22A10(a1);
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B728);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint8_t *)(a1 + 28) = 0;
  return (int (**)(int))(uintptr_t)(&off_206B728);
}
// ----------------------------------------------------------------------------
// Function: sub_C20DF0  (binary VA: 0xc20df0)
// Original: sub_C20DF0
// ----------------------------------------------------------------------------
int sub_C20DF0(int a1, int a2, int a3, int a4, uint8_t a5)
{
  sub_C22A10(a1);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B728);
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint8_t *)(a1 + 28) = 1;
  sub_C20870(a1);
  *(uint32_t *)(a1 + 8) = a2;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  if ( a4 != 0 )
  {
    *(uint32_t *)(a1 + 20) = a3;
    *(uint32_t *)(a1 + 12) = a4;
  }
  else
  {
    *(uint8_t *)(a1 + 28) = 1;
    *(uint32_t *)(a1 + 12) = a1 + 5;
    *(uint32_t *)(a1 + 20) = 1;
    if ( a3 > 1 )
      sub_C208E0();
  }
  *(uint32_t *)(a1 + 16) = a3;
  *(uint8_t *)(a1 + 4) = 1;
  *(uint8_t *)(a1 + 28) = a5;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_C20EC0  (binary VA: 0xc20ec0)
// Original: sub_C20EC0
// ----------------------------------------------------------------------------
int sub_C20EC0(int a1, int a2, int a3, int a4)
{
  int result;

  sub_C22A10(a1);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B728);
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint8_t *)(a1 + 28) = 1;
  sub_C20870(a1);
  result = a2;
  *(uint32_t *)(a1 + 8) = a2;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  if ( a4 != 0 )
  {
    *(uint32_t *)(a1 + 12) = a4;
    *(uint32_t *)(a1 + 20) = a3;
    *(uint32_t *)(a1 + 16) = a3;
    *(uint8_t *)(a1 + 28) = 0;
  }
  else
  {
    result = a1 + 5;
    *(uint8_t *)(a1 + 28) = 1;
    *(uint32_t *)(a1 + 12) = a1 + 5;
    *(uint32_t *)(a1 + 20) = 1;
    if ( a3 > 1 )
      sub_C208E0();
    *(uint32_t *)(a1 + 16) = a3;
  }
  *(uint8_t *)(a1 + 4) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C20F90  (binary VA: 0xc20f90)
// Original: sub_C20F90
// ----------------------------------------------------------------------------
int sub_C20F90(int a1, int a2, int a3, int a4, uint8_t a5)
{
  G4_VCALL<void>(a1, 8);
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 8) = a2;
  *(uint32_t *)(a1 + 16) = 0;
  if ( a4 != 0 )
  {
    *(uint32_t *)(a1 + 20) = a3;
    *(uint32_t *)(a1 + 12) = a4;
  }
  else
  {
    *(uint8_t *)(a1 + 28) = 1;
    *(uint32_t *)(a1 + 12) = a1 + 5;
    *(uint32_t *)(a1 + 20) = 1;
    if ( a3 > 1 )
      sub_C208E0(a1, a3);
  }
  *(uint32_t *)(a1 + 16) = a3;
  *(uint8_t *)(a1 + 4) = 1;
  *(uint8_t *)(a1 + 28) = a5;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_C21030  (binary VA: 0xc21030)
// Original: sub_C21030
// ----------------------------------------------------------------------------
void sub_C21030(int a1, int a2, int a3, int a4)
{
  G4_VCALL<void>(a1, 8);
  *(uint32_t *)(a1 + 8) = a2;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  if ( a4 != 0 )
  {
    *(uint32_t *)(a1 + 12) = a4;
    *(uint32_t *)(a1 + 20) = a3;
    *(uint32_t *)(a1 + 16) = a3;
    *(uint8_t *)(a1 + 28) = 0;
  }
  else
  {
    *(uint8_t *)(a1 + 28) = 1;
    *(uint32_t *)(a1 + 12) = a1 + 5;
    *(uint32_t *)(a1 + 20) = 1;
    if ( a3 > 1 )
      sub_C208E0(a1, a3);
    *(uint32_t *)(a1 + 16) = a3;
  }
  *(uint8_t *)(a1 + 4) = 1;
}

// ----------------------------------------------------------------------------
// Function: sub_C210C0  (binary VA: 0xc210c0)
// Original: sub_C210C0
// ----------------------------------------------------------------------------
size_t sub_C210C0(int a1, uint32_t *a2)
{
  size_t n;
  void *dest;

  n = *(char *)(*(uint32_t *)(a1 + 12) + *(uint32_t *)(a1 + 24));
  dest = (void *)sub_4EBC30(n + 1, 1);
  *a2 = (uint32_t)(uintptr_t)(dest);
  memcpy(dest, (const void *)(*(uint32_t *)(a1 + 12) + *(uint32_t *)(a1 + 24) + 1), n);
  *(uint8_t *)(*a2 + n) = 0;
  *(uint32_t *)(a1 + 24) += n + 1;
  return n + 1;
}

// ----------------------------------------------------------------------------
// Function: sub_C21150  (binary VA: 0xc21150)
// Original: sub_C21150
// ----------------------------------------------------------------------------
int sub_C21150(uint32_t *a1, int a2)
{
  G4_VCALL<void>(a1, 20, a2, 1);
  return a1[3] + a1[6] - a2;
}

// ----------------------------------------------------------------------------
// Function: sub_C21190  (binary VA: 0xc21190)
// Original: sub_C21190
// ----------------------------------------------------------------------------
int sub_C21190(int a1)
{
  return *(uint32_t *)(a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: sub_C211A0  (binary VA: 0xc211a0)
// Original: sub_C211A0
// ----------------------------------------------------------------------------
int sub_C211A0(int a1)
{
  return *(uint32_t *)(a1 + 24);
}


