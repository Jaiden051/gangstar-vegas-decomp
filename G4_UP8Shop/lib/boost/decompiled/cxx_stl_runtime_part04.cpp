#include "Core/Utils/DecompTypes.h"
#include "cxx_stl_runtime_part04.h"

// ----------------------------------------------------------------------------
// Function: sub_193D8C0  (binary VA: 0x193d8c0)
// Original: sub_193D8C0
// ----------------------------------------------------------------------------
int sub_193D8C0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D930  (binary VA: 0x193d930)
// Original: sub_193D930
// ----------------------------------------------------------------------------
int sub_193D930(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193D9A0  (binary VA: 0x193d9a0)
// Original: sub_193D9A0
// ----------------------------------------------------------------------------
int sub_193D9A0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193DA10  (binary VA: 0x193da10)
// Original: sub_193DA10
// ----------------------------------------------------------------------------
int sub_193DA10(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 24))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193DA80  (binary VA: 0x193da80)
// Original: sub_193DA80
// ----------------------------------------------------------------------------
int sub_193DA80(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 28))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193DAF0  (binary VA: 0x193daf0)
// Original: sub_193DAF0
// ----------------------------------------------------------------------------
int sub_193DAF0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 32))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193DB60  (binary VA: 0x193db60)
// Original: sub_193DB60
// ----------------------------------------------------------------------------
int sub_193DB60(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 36))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193DBD0  (binary VA: 0x193dbd0)
// Original: sub_193DBD0
// ----------------------------------------------------------------------------
int sub_193DBD0(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB6A8);
  a1[4] = (uint32_t)(uintptr_t)(sub_1902030());
  return sub_1954B30(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193DC50  (binary VA: 0x193dc50)
// Original: sub_193DC50
// ----------------------------------------------------------------------------
int sub_193DC50(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB6A8);
  a1[2] = a2;
  a1[4] = (uint32_t)(uintptr_t)(sub_1902030());
  return sub_1954B30(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_193DCD0  (binary VA: 0x193dcd0)
// Original: sub_193DCD0
// ----------------------------------------------------------------------------
int sub_193DCD0(uint32_t *a1, int a2, char *s, int a4)
{
  const char *s2;
  uint8_t *v6;
  void *v7;
  uint8_t *v8;
  void *v9;
  size_t n;
  size_t v11;

  a1[1] = a4 != 0;
  a1[2] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB6A8);
  s2 = (const char *)(uintptr_t)(sub_1902030());
  if ( strcmp(s, s2) == 0 )
  {
    a1[4] = (uint32_t)(uintptr_t)(s2);
  }
  else
  {
    v11 = strlen(s);
    n = v11 + 1;
    v6 = (uint8_t *)opNewArray(v11 + 1);
    v7 = v6;
    if ( v11 != -1 )
    {
      v8 = &v6[n];
      do
        *v6++ = 0;
      while ( v6 != v8 );
    }
    v9 = v7;
    memcpy(v7, s, n);
    a1[4] = (uint32_t)(uintptr_t)(v9);
  }
  return sub_1954B30(a1);
}

// ----------------------------------------------------------------------------
// Function: nullsub_870  (binary VA: 0x193de68)
// Original: nullsub_870
// ----------------------------------------------------------------------------
void nullsub_870()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_193E060  (binary VA: 0x193e060)
// Original: sub_193E060
// ----------------------------------------------------------------------------
int sub_193E060(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2 != 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20AB698);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  *(uint32_t *)(a1 + 72) = 0;
  *(uint32_t *)(a1 + 76) = 0;
  *(uint32_t *)(a1 + 80) = 0;
  *(uint32_t *)(a1 + 84) = 0;
  *(uint32_t *)(a1 + 88) = 0;
  *(uint32_t *)(a1 + 92) = 0;
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 100) = 0;
  *(uint32_t *)(a1 + 104) = 0;
  *(uint32_t *)(a1 + 108) = 0;
  *(uint32_t *)(a1 + 112) = 0;
  *(uint32_t *)(a1 + 116) = 0;
  *(uint32_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = 0;
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)(a1 + 188) = 0;
  *(uint32_t *)(a1 + 192) = 0;
  *(uint8_t *)(a1 + 196) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193E210  (binary VA: 0x193e210)
// Original: sub_193E210
// ----------------------------------------------------------------------------
uint32_t * sub_193E210(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB890);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193E240  (binary VA: 0x193e240)
// Original: sub_193E240
// ----------------------------------------------------------------------------
int sub_193E240(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 8))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193E2C0  (binary VA: 0x193e2c0)
// Original: sub_193E2C0
// ----------------------------------------------------------------------------
uint32_t * sub_193E2C0(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB8A8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193E2F0  (binary VA: 0x193e2f0)
// Original: sub_193E2F0
// ----------------------------------------------------------------------------
uint32_t * sub_193E2F0(uint32_t *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB8C8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193E320  (binary VA: 0x193e320)
// Original: sub_193E320
// ----------------------------------------------------------------------------
int sub_193E320(int a1)
{
  return G4_VCALL<int>(a1, 8);
}

// ----------------------------------------------------------------------------
// Function: sub_193E340  (binary VA: 0x193e340)
// Original: sub_193E340
// ----------------------------------------------------------------------------
int sub_193E340(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193E3C0  (binary VA: 0x193e3c0)
// Original: sub_193E3C0
// ----------------------------------------------------------------------------
int sub_193E3C0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193E440  (binary VA: 0x193e440)
// Original: sub_193E440
// ----------------------------------------------------------------------------
int sub_193E440(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193E4C0  (binary VA: 0x193e4c0)
// Original: sub_193E4C0
// ----------------------------------------------------------------------------
int sub_193E4C0(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 24))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193E540  (binary VA: 0x193e540)
// Original: sub_193E540
// ----------------------------------------------------------------------------
int sub_193E540(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 28))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193E5C0  (binary VA: 0x193e5c0)
// Original: sub_193E5C0
// ----------------------------------------------------------------------------
uint32_t * sub_193E5C0(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB908);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193E5F0  (binary VA: 0x193e5f0)
// Original: sub_193E5F0
// ----------------------------------------------------------------------------
int sub_193E5F0(uint32_t *a1, int a2)
{
  int result;

  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB740);
  result = sub_1901FF0();
  a1[2] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193E650  (binary VA: 0x193e650)
// Original: sub_193E650
// ----------------------------------------------------------------------------
int sub_193E650(uint32_t *a1, int a2, int a3, int a4)
{
  int result;

  a1[1] = a4 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB740);
  result = sub_1901FF0();
  a1[2] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193E6B0  (binary VA: 0x193e6b0)
// Original: sub_193E6B0
// ----------------------------------------------------------------------------
int sub_193E6B0(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 8, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_193E6E0  (binary VA: 0x193e6e0)
// Original: sub_193E6E0
// ----------------------------------------------------------------------------
int sub_193E6E0(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 8, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_193E710  (binary VA: 0x193e710)
// Original: sub_193E710
// ----------------------------------------------------------------------------
int sub_193E710(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193E760  (binary VA: 0x193e760)
// Original: sub_193E760
// ----------------------------------------------------------------------------
int sub_193E760(int a1, int a2)
{
  return G4_VCALL<int>(a1, 16, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_193E790  (binary VA: 0x193e790)
// Original: sub_193E790
// ----------------------------------------------------------------------------
uint32_t * sub_193E790(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&unk_213B8B4);
  return a1;
}



// ============================================================================
// Address:   0x193e7b0 (size: 175 bytes)
// Symbol:    sub_193E7B0
// Demangled: sub_193E7B0
// ============================================================================
int (**sub_193E7B0(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);

  sub_193E5F0(a1, a3);
  result = (int (**)(int))(uintptr_t)(&off_20AB930);
  *a1 = (uint32_t)(uintptr_t)(&off_20AB930);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908860(a1 + 2);
    return (int (**)(int))sub_1908800(a1 + 2, a2);
  }
  return result;
}


// ============================================================================
// Address:   0x193e860 (size: 175 bytes)
// Symbol:    sub_193E860
// Demangled: sub_193E860
// ============================================================================
int (**sub_193E860(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);

  sub_19537A0(a1, a3);
  result = (int (**)(int))(uintptr_t)(&off_20AB7A8);
  *a1 = (uint32_t)(uintptr_t)(&off_20AB7A8);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908860(a1 + 2);
    return (int (**)(int))sub_1908800(a1 + 2, a2);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_193E910  (binary VA: 0x193e910)
// Original: sub_193E910
// ----------------------------------------------------------------------------
int sub_193E910(uint32_t *a1, int a2)
{
  int result;

  a1[1] = a2 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB528);
  result = sub_1901FF0();
  a1[2] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193E970  (binary VA: 0x193e970)
// Original: sub_193E970
// ----------------------------------------------------------------------------
int sub_193E970(uint32_t *a1, char a2, int a3)
{
  int result;

  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB528);
  result = sub_1908870();
  a1[2] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193E9C0  (binary VA: 0x193e9c0)
// Original: sub_193E9C0
// ----------------------------------------------------------------------------
int sub_193E9C0(int a1, int a2, int a3, int a4, int a5)
{
  return G4_VCALL<int>(a1, 8, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: sub_193EA00  (binary VA: 0x193ea00)
// Original: sub_193EA00
// ----------------------------------------------------------------------------
int sub_193EA00(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193EA40  (binary VA: 0x193ea40)
// Original: sub_193EA40
// ----------------------------------------------------------------------------
int sub_193EA40(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 16, a2, a3);
}



// ============================================================================
// Address:   0x193ea70 (size: 209 bytes)
// Symbol:    sub_193EA70
// Demangled: sub_193EA70
// ============================================================================
int (**sub_193EA70(uint32_t *a1, const char *a2, int a3))(int)
{
  int (**result)(int);

  a1[1] = a3 != 0;
  *a1 = (uint32_t)(uintptr_t)(&off_20AB528);
  a1[2] = sub_1901FF0();
  result = (int (**)(int))(uintptr_t)(&off_20AB548);
  *a1 = (uint32_t)(uintptr_t)(&off_20AB548);
  if ( strcmp(a2, "C") != 0 && strcmp(a2, "POSIX") != 0 )
  {
    sub_1908860(a1 + 2);
    return (int (**)(int))sub_1908800(a1 + 2, a2);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_193EB50  (binary VA: 0x193eb50)
// Original: sub_193EB50
// ----------------------------------------------------------------------------
void * sub_193EB50(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_2139F20);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_2ad0d8704b,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193EBC0  (binary VA: 0x193ebc0)
// Original: sub_193EBC0
// ----------------------------------------------------------------------------
uint32_t * sub_193EBC0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int *a8, int *a9)
{
  void *v9;
  int *v10;
  void *v11;
  char v12;
  int *v13;
  int v14;
  int *v15;
  int *v16;
  char v18;
  typedef int *_g4_t_v19;
  typedef uint32_t _g4_t_v20[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v20)) > _g4_s1 ? (24u + sizeof(_g4_t_v20)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);

  v9 = sub_193EB50(a5 + 108);
  v10 = a8;
  v11 = v9;
  if ( a8 != a9 )
  {
    do
    {
      v19 = v10;
      v12 = G4_VCALL<int>(v11, 48, *v10, 0);
      v13 = v19;
      if ( v12 == 37 )
      {
        v16 = v19 + 1;
        if ( a9 == v19 + 1 )
          break;
        v18 = G4_VCALL<int>(v11, 48, v19[1], 0);
        if ( v18 == 79 || v18 == 69 )
        {
          v16 = v19 + 2;
          if ( a9 == v19 + 2 )
            break;
          G4_VCALL<void>(v11, 48, v19[2], 0);
        }
        (*(void (**)(uint32_t *))(*(uint32_t *)a2 + 8))(v20);
        a3 = (uint32_t *)v20[0];
        LOBYTE(a4) = v20[1];
      }
      else
      {
        v14 = *v19;
        if ( (uint8_t)a4 == 0 )
        {
          v15 = (int *)a3[5];
          if ( (unsigned int)(uintptr_t)(v15) >= a3[6] )
          {
            v14 = G4_VCALL<int>(a3, 52, *v19);
            v13 = v19;
          }
          else
          {
            *v15 = v14;
            a3[5] = (uint32_t)(uintptr_t)(v15 + 1);
          }
          if ( v14 == -1 )
            LOBYTE(a4) = 1;
        }
        v16 = v13;
      }
      v10 = v16 + 1;
    }
    while ( a9 != v16 + 1 );
  }
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = a4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_193ED70  (binary VA: 0x193ed70)
// Original: sub_193ED70
// ----------------------------------------------------------------------------
void * sub_193ED70(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_21402F4);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_2fcd454a8e,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193EDE0  (binary VA: 0x193ede0)
// Original: sub_193EDE0
// ----------------------------------------------------------------------------
void * sub_193EDE0(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B818);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_82b174953d,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193EE50  (binary VA: 0x193ee50)
// Original: sub_193EE50
// ----------------------------------------------------------------------------
void * sub_193EE50(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B834);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_d23faff564,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193EEC0  (binary VA: 0x193eec0)
// Original: sub_193EEC0
// ----------------------------------------------------------------------------
int sub_193EEC0(int a1, int a2)
{
  void *v2;
  int v3;
  size_t v4;
  void *v5;
  bool v6;
  char *v7;
  char *v8;
  void *v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  void *v14;
  void *v15;
  int v16;
  int v17;
  void *v18;
  void *v19;
  void *v20;
  typedef wchar_t *_g4_t_v22;
  typedef size_t _g4_t_v23;
  typedef size_t _g4_t_v24;
  typedef wchar_t *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef wchar_t *_g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v23)) > _g4_s1 ? (24u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v24)) > _g4_s2 ? (24u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v25)) > _g4_s3 ? (24u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v26)) > _g4_s4 ? (28u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v27)) > _g4_s5 ? (32u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v28)) > _g4_s6 ? (36u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v29)) > _g4_s7 ? (44u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v30)) > _g4_s8 ? (48u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v31)) > _g4_s9 ? (52u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v32)) > _g4_s10 ? (56u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v33)) > _g4_s11 ? (60u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v34)) > _g4_s12 ? (64u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v35)) > _g4_s13 ? (68u + sizeof(_g4_t_v35)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);

  *(uint8_t *)(a1 + 292) = 1;
  v2 = sub_193EE50(a2);
  (*(void (**)(int *))(*(uint32_t *)v2 + 16))(&v30);
  v3 = v30;
  v4 = *(uint32_t *)(v30 - 12);
  v5 = (void *)(v30 - 12);
  v6 = v30 - 12 == (uint32_t)(uintptr_t)(dword_213B808);
  *(uint32_t *)(a1 + 12) = v4;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v5);
    v4 = *(uint32_t *)(a1 + 12);
  }
  v7 = (char *)opNewArray(v4);
  v26 = v7;
  if ( v4 != 0 )
  {
    v8 = &v7[v4];
    do
      *v7++ = 0;
    while ( v7 != v8 );
  }
  v23 = *(uint32_t *)(a1 + 12);
  (*(void (**)(int *))(*(uint32_t *)v2 + 16))(&v31);
  sub_1937C00(&v31, v26, v23, 0);
  v9 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = *(uint32_t *)(a1 + 12);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v26);
  v11 = false;
  if ( v10 != 0 && *v26 > 0 )
    v11 = *v26 != 127;
  *(uint8_t *)(a1 + 16) = v11;
  (*(void (**)(int *))(*(uint32_t *)v2 + 20))(&v32);
  v12 = v32;
  v13 = *(uint32_t *)(v32 - 12);
  v14 = (void *)(v32 - 12);
  v6 = v32 - 12 == (uint32_t)(uintptr_t)(&unk_213B8A8);
  *(uint32_t *)(a1 + 24) = v13;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
      sub_194E070(v14);
    v13 = *(uint32_t *)(a1 + 24);
  }
  v27 = (wchar_t *)opNewArray(4 * v13);
  v24 = *(uint32_t *)(a1 + 24);
  (*(void (**)(int *))(*(uint32_t *)v2 + 20))(&v33);
  sub_194D130((int)(uintptr_t)(&v33), v27, v24, 0);
  v15 = (void *)(v33 - 12);
  if ( (void *)(v33 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070(v15);
  }
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v27);
  (*(void (**)(int *))(*(uint32_t *)v2 + 24))(&v34);
  v16 = v34;
  v17 = *(uint32_t *)(v34 - 12);
  v18 = (void *)(v34 - 12);
  v6 = v34 - 12 == (uint32_t)(uintptr_t)(&unk_213B8A8);
  *(uint32_t *)(a1 + 32) = v17;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
      sub_194E070(v18);
    v17 = *(uint32_t *)(a1 + 32);
  }
  v25 = (wchar_t *)opNewArray(4 * v17);
  v28 = *(uint32_t *)(a1 + 32);
  (*(void (**)(int *))(*(uint32_t *)v2 + 24))(v35);
  sub_194D130((int)(uintptr_t)(v35), v25, v28, 0);
  v19 = (void *)(v35[0] - 12);
  if ( (void *)(v35[0] - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v22 = (wchar_t *)((int *)((char *)&v29 + 3));
    sub_194E070(v19);
  }
  *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v25);
  *(uint32_t *)(a1 + 36) = G4_VCALL<int>(v2, 8, v22);
  *(uint32_t *)(a1 + 40) = G4_VCALL<int>(v2, 12);
  v20 = sub_193EB50(a2);
  G4_VCALL<void>(v20, 44, off_20CB480[0], off_20CB480[0] + 36, a1 + 44);
  return G4_VCALL<int>(v20, 44, off_20CB484[0], off_20CB484[0] + 26, a1 + 188);
}

// ----------------------------------------------------------------------------
// Function: sub_193F300  (binary VA: 0x193f300)
// Original: sub_193F300
// ----------------------------------------------------------------------------
void * sub_193F300(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B82C);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_432cd9a859,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193F370  (binary VA: 0x193f370)
// Original: sub_193F370
// ----------------------------------------------------------------------------
void * sub_193F370(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B830);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_6774a59ae8,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193F3E0  (binary VA: 0x193f3e0)
// Original: sub_193F3E0
// ----------------------------------------------------------------------------
void * sub_193F3E0(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B840);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_023ecf8497,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193F450  (binary VA: 0x193f450)
// Original: sub_193F450
// ----------------------------------------------------------------------------
int sub_193F450(int a1, int a2)
{
  void *v2;
  int v3;
  size_t v4;
  void *v5;
  bool v6;
  char *v7;
  char *v8;
  void *v9;
  int v10;
  bool v11;
  int v12;
  void *v13;
  int v14;
  void *v15;
  int v16;
  void *v17;
  int v18;
  void *v19;
  int v20;
  void *v21;
  int v22;
  void *v23;
  void *v24;
  typedef int _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef wchar_t *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef wchar_t *_g4_t_v32;
  typedef wchar_t *_g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef uint8_t _g4_t_v35[12];
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43[6];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v27)) > _g4_s1 ? (40u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v28)) > _g4_s2 ? (40u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v29)) > _g4_s3 ? (40u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v30)) > _g4_s4 ? (40u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v31)) > _g4_s5 ? (44u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v32)) > _g4_s6 ? (48u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v33)) > _g4_s7 ? (52u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v34)) > _g4_s8 ? (56u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v35)) > _g4_s9 ? (60u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v36)) > _g4_s10 ? (80u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v37)) > _g4_s11 ? (84u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v38)) > _g4_s12 ? (88u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v39)) > _g4_s13 ? (92u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v40)) > _g4_s14 ? (96u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v41)) > _g4_s15 ? (100u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v42)) > _g4_s16 ? (104u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v43)) > _g4_s17 ? (108u + sizeof(_g4_t_v43)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 100u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 104u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);

  *(uint8_t *)(a1 + 108) = 1;
  v2 = sub_193F3E0(a2);
  *(uint32_t *)(a1 + 20) = G4_VCALL<int>(v2, 8, v26);
  *(uint32_t *)(a1 + 24) = G4_VCALL<int>(v2, 12);
  *(uint32_t *)(a1 + 52) = G4_VCALL<int>(v2, 32);
  (*(void (**)(int *))(*(uint32_t *)v2 + 16))(&v36);
  v3 = v36;
  v4 = *(uint32_t *)(v36 - 12);
  v5 = (void *)(v36 - 12);
  v6 = v36 - 12 == (uint32_t)(uintptr_t)(dword_213B808);
  *(uint32_t *)(a1 + 12) = v4;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v5);
    v4 = *(uint32_t *)(a1 + 12);
  }
  v7 = (char *)opNewArray(v4);
  v31 = v7;
  if ( v4 != 0 )
  {
    v8 = &v7[v4];
    do
      *v7++ = 0;
    while ( v7 != v8 );
  }
  v27 = *(uint32_t *)(a1 + 12);
  (*(void (**)(int *))(*(uint32_t *)v2 + 16))(&v37);
  sub_1937C00(&v37, v31, v27, 0);
  v9 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = *(uint32_t *)(a1 + 12);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v31);
  v11 = false;
  if ( v10 != 0 && *v31 > 0 )
    v11 = *v31 != 127;
  *(uint8_t *)(a1 + 16) = v11;
  (*(void (**)(int *))(*(uint32_t *)v2 + 20))(&v38);
  v12 = v38;
  v13 = (void *)(v38 - 12);
  v14 = *(uint32_t *)(v38 - 12);
  v6 = v38 - 12 == (uint32_t)(uintptr_t)(&unk_213B8A8);
  *(uint32_t *)(a1 + 32) = v14;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
      sub_194E070(v13);
    v14 = *(uint32_t *)(a1 + 32);
  }
  v33 = (wchar_t *)opNewArray(4 * v14);
  v28 = *(uint32_t *)(a1 + 32);
  (*(void (**)(int *))(*(uint32_t *)v2 + 20))(&v39);
  sub_194D130((int)(uintptr_t)(&v39), v33, v28, 0);
  v15 = (void *)(v39 - 12);
  if ( (void *)(v39 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070(v15);
  }
  *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v33);
  (*(void (**)(int *))(*(uint32_t *)v2 + 24))(&v40);
  v16 = v40;
  v17 = (void *)(v40 - 12);
  v18 = *(uint32_t *)(v40 - 12);
  v6 = v40 - 12 == (uint32_t)(uintptr_t)(&unk_213B8A8);
  *(uint32_t *)(a1 + 40) = v18;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
      sub_194E070(v17);
    v18 = *(uint32_t *)(a1 + 40);
  }
  v32 = (wchar_t *)opNewArray(4 * v18);
  v29 = *(uint32_t *)(a1 + 40);
  (*(void (**)(int *))(*(uint32_t *)v2 + 24))(&v41);
  sub_194D130((int)(uintptr_t)(&v41), v32, v29, 0);
  v19 = (void *)(v41 - 12);
  if ( (void *)(v41 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070(v19);
  }
  *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(v32);
  (*(void (**)(int *))(*(uint32_t *)v2 + 28))(&v42);
  v20 = v42;
  v21 = (void *)(v42 - 12);
  v22 = *(uint32_t *)(v42 - 12);
  v6 = v42 - 12 == (uint32_t)(uintptr_t)(&unk_213B8A8);
  *(uint32_t *)(a1 + 48) = v22;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
      sub_194E070(v21);
    v22 = *(uint32_t *)(a1 + 48);
  }
  v30 = (wchar_t *)opNewArray(4 * v22);
  v34 = *(uint32_t *)(a1 + 48);
  (*(void (**)(int *))(*(uint32_t *)v2 + 28))(v43);
  sub_194D130((int)(uintptr_t)(v43), v30, v34, 0);
  v23 = (void *)(v43[0] - 12);
  if ( (void *)(v43[0] - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v43[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070(v23);
  }
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(v30);
  (*(void (**)(uint8_t *, void *))(*(uint32_t *)v2 + 36))(v35, v2);
  *(uint32_t *)(a1 + 56) = v34;
  (*(void (**)(uint8_t *, void *))(*(uint32_t *)v2 + 40))(v35, v2);
  *(uint32_t *)(a1 + 60) = (uint32_t)(uintptr_t)(v33);
  v24 = sub_193EB50(a2);
  return G4_VCALL<int>(v24, 44, off_20CB488, off_20CB488 + 11, a1 + 64);
}

// ----------------------------------------------------------------------------
// Function: sub_193F9F0  (binary VA: 0x193f9f0)
// Original: sub_193F9F0
// ----------------------------------------------------------------------------
void * sub_193F9F0(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B844);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_922548f7b2,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_193FA60  (binary VA: 0x193fa60)
// Original: sub_193FA60
// ----------------------------------------------------------------------------
int sub_193FA60(int a1, int a2)
{
  void *v2;
  int v3;
  size_t v4;
  void *v5;
  bool v6;
  char *v7;
  char *v8;
  void *v9;
  int v10;
  bool v11;
  int v12;
  void *v13;
  int v14;
  void *v15;
  int v16;
  void *v17;
  int v18;
  void *v19;
  int v20;
  void *v21;
  int v22;
  void *v23;
  void *v24;
  typedef int _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef wchar_t *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef wchar_t *_g4_t_v32;
  typedef wchar_t *_g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef uint8_t _g4_t_v35[12];
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43[6];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v27)) > _g4_s1 ? (40u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v28)) > _g4_s2 ? (40u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v29)) > _g4_s3 ? (40u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v30)) > _g4_s4 ? (40u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v31)) > _g4_s5 ? (44u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v32)) > _g4_s6 ? (48u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v33)) > _g4_s7 ? (52u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v34)) > _g4_s8 ? (56u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v35)) > _g4_s9 ? (60u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v36)) > _g4_s10 ? (80u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v37)) > _g4_s11 ? (84u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v38)) > _g4_s12 ? (88u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v39)) > _g4_s13 ? (92u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v40)) > _g4_s14 ? (96u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v41)) > _g4_s15 ? (100u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v42)) > _g4_s16 ? (104u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v43)) > _g4_s17 ? (108u + sizeof(_g4_t_v43)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 100u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 104u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);

  *(uint8_t *)(a1 + 108) = 1;
  v2 = sub_193F9F0(a2);
  *(uint32_t *)(a1 + 20) = G4_VCALL<int>(v2, 8, v26);
  *(uint32_t *)(a1 + 24) = G4_VCALL<int>(v2, 12);
  *(uint32_t *)(a1 + 52) = G4_VCALL<int>(v2, 32);
  (*(void (**)(int *))(*(uint32_t *)v2 + 16))(&v36);
  v3 = v36;
  v4 = *(uint32_t *)(v36 - 12);
  v5 = (void *)(v36 - 12);
  v6 = v36 - 12 == (uint32_t)(uintptr_t)(dword_213B808);
  *(uint32_t *)(a1 + 12) = v4;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v5);
    v4 = *(uint32_t *)(a1 + 12);
  }
  v7 = (char *)opNewArray(v4);
  v31 = v7;
  if ( v4 != 0 )
  {
    v8 = &v7[v4];
    do
      *v7++ = 0;
    while ( v7 != v8 );
  }
  v27 = *(uint32_t *)(a1 + 12);
  (*(void (**)(int *))(*(uint32_t *)v2 + 16))(&v37);
  sub_1937C00(&v37, v31, v27, 0);
  v9 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = *(uint32_t *)(a1 + 12);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v31);
  v11 = false;
  if ( v10 != 0 && *v31 > 0 )
    v11 = *v31 != 127;
  *(uint8_t *)(a1 + 16) = v11;
  (*(void (**)(int *))(*(uint32_t *)v2 + 20))(&v38);
  v12 = v38;
  v13 = (void *)(v38 - 12);
  v14 = *(uint32_t *)(v38 - 12);
  v6 = v38 - 12 == (uint32_t)(uintptr_t)(&unk_213B8A8);
  *(uint32_t *)(a1 + 32) = v14;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
      sub_194E070(v13);
    v14 = *(uint32_t *)(a1 + 32);
  }
  v33 = (wchar_t *)opNewArray(4 * v14);
  v28 = *(uint32_t *)(a1 + 32);
  (*(void (**)(int *))(*(uint32_t *)v2 + 20))(&v39);
  sub_194D130((int)(uintptr_t)(&v39), v33, v28, 0);
  v15 = (void *)(v39 - 12);
  if ( (void *)(v39 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070(v15);
  }
  *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v33);
  (*(void (**)(int *))(*(uint32_t *)v2 + 24))(&v40);
  v16 = v40;
  v17 = (void *)(v40 - 12);
  v18 = *(uint32_t *)(v40 - 12);
  v6 = v40 - 12 == (uint32_t)(uintptr_t)(&unk_213B8A8);
  *(uint32_t *)(a1 + 40) = v18;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
      sub_194E070(v17);
    v18 = *(uint32_t *)(a1 + 40);
  }
  v32 = (wchar_t *)opNewArray(4 * v18);
  v29 = *(uint32_t *)(a1 + 40);
  (*(void (**)(int *))(*(uint32_t *)v2 + 24))(&v41);
  sub_194D130((int)(uintptr_t)(&v41), v32, v29, 0);
  v19 = (void *)(v41 - 12);
  if ( (void *)(v41 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070(v19);
  }
  *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(v32);
  (*(void (**)(int *))(*(uint32_t *)v2 + 28))(&v42);
  v20 = v42;
  v21 = (void *)(v42 - 12);
  v22 = *(uint32_t *)(v42 - 12);
  v6 = v42 - 12 == (uint32_t)(uintptr_t)(&unk_213B8A8);
  *(uint32_t *)(a1 + 48) = v22;
  if ( !v6 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
      sub_194E070(v21);
    v22 = *(uint32_t *)(a1 + 48);
  }
  v30 = (wchar_t *)opNewArray(4 * v22);
  v34 = *(uint32_t *)(a1 + 48);
  (*(void (**)(int *))(*(uint32_t *)v2 + 28))(v43);
  sub_194D130((int)(uintptr_t)(v43), v30, v34, 0);
  v23 = (void *)(v43[0] - 12);
  if ( (void *)(v43[0] - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v43[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070(v23);
  }
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(v30);
  (*(void (**)(uint8_t *, void *))(*(uint32_t *)v2 + 36))(v35, v2);
  *(uint32_t *)(a1 + 56) = v34;
  (*(void (**)(uint8_t *, void *))(*(uint32_t *)v2 + 40))(v35, v2);
  *(uint32_t *)(a1 + 60) = (uint32_t)(uintptr_t)(v33);
  v24 = sub_193EB50(a2);
  return G4_VCALL<int>(v24, 44, off_20CB488, off_20CB488 + 11, a1 + 64);
}

// ----------------------------------------------------------------------------
// Function: sub_1940000  (binary VA: 0x1940000)
// Original: sub_1940000
// ----------------------------------------------------------------------------
void * sub_1940000(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B838);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_e4156e3bab,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940070  (binary VA: 0x1940070)
// Original: sub_1940070
// ----------------------------------------------------------------------------
void * sub_1940070(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B83C);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_e51aa32f43,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19400E0  (binary VA: 0x19400e0)
// Original: sub_19400E0
// ----------------------------------------------------------------------------
void * sub_19400E0(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B828);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_4828e1204d,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940150  (binary VA: 0x1940150)
// Original: sub_1940150
// ----------------------------------------------------------------------------
uint32_t * sub_1940150(uint32_t *a1, int a2, int a3, bool a4, int a5, int a6, struct tm *a7, char a8, char a9)
{
  void *v9;
  size_t v10;
  bool v11;
  typedef void *_g4_t_v13;
  typedef wchar_t _g4_t_format;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef wchar_t _g4_t_s[131];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_format)) > _g4_s1 ? (16u + sizeof(_g4_t_format)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_s)) > _g4_s5 ? (32u + sizeof(_g4_t_s)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 32u);

  v9 = sub_193EB50(a5 + 108);
  v13 = sub_19400E0(a5 + 108);
  format = G4_VCALL<int>(v9, 40, 37);
  if ( a9 != 0 )
  {
    v17 = 0;
    v15 = a9;
    v16 = a8;
  }
  else
  {
    v16 = 0;
    v15 = a8;
  }
  sub_19549F0((int)(uintptr_t)(v13), s, 0x80u, &format, a7);
  v10 = wcslen(s);
  v11 = a4;
  if ( !a4 )
    v11 = v10 != G4_VCALL<int>(a3, 48, s, v10);
  *a1 = a3;
  a1[1] = a4;
  *((uint8_t *)a1 + 4) = v11;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19402D0  (binary VA: 0x19402d0)
// Original: sub_19402D0
// ----------------------------------------------------------------------------
void * sub_19402D0(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B824);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_fdee47eb41,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940340  (binary VA: 0x1940340)
// Original: sub_1940340
// ----------------------------------------------------------------------------
void * sub_1940340(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B820);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_3cf6aa16a7,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19403B0  (binary VA: 0x19403b0)
// Original: sub_19403B0
// ----------------------------------------------------------------------------
void * sub_19403B0(int a1)
{
  uint32_t v1;
  const void *lpsrc;
  void *result;

  v1 = sub_1902550(&dword_213B81C);
  if ( v1 >= *(uint32_t *)(*(uint32_t *)a1 + 8)
    || (lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1)) == nullptr )
  {
    sub_18FFF30();
  }
  result = dynamic_cast_id(
             lpsrc,
             (const __class_type_info *)&g4_typeinfo_a8275c73b0,
             (const __class_type_info *)&g4_typeinfo_d32d1785e9,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940420  (binary VA: 0x1940420)
// Original: sub_1940420
// ----------------------------------------------------------------------------
bool sub_1940420(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_2139F20);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_2ad0d8704b,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19404A0  (binary VA: 0x19404a0)
// Original: sub_19404A0
// ----------------------------------------------------------------------------
bool sub_19404A0(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_21402F4);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_2fcd454a8e,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940520  (binary VA: 0x1940520)
// Original: sub_1940520
// ----------------------------------------------------------------------------
bool sub_1940520(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B818);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_82b174953d,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19405A0  (binary VA: 0x19405a0)
// Original: sub_19405A0
// ----------------------------------------------------------------------------
bool sub_19405A0(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B834);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_d23faff564,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940620  (binary VA: 0x1940620)
// Original: sub_1940620
// ----------------------------------------------------------------------------
bool sub_1940620(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B82C);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_432cd9a859,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19406A0  (binary VA: 0x19406a0)
// Original: sub_19406A0
// ----------------------------------------------------------------------------
bool sub_19406A0(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B830);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_6774a59ae8,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940720  (binary VA: 0x1940720)
// Original: sub_1940720
// ----------------------------------------------------------------------------
bool sub_1940720(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B844);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_922548f7b2,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19407A0  (binary VA: 0x19407a0)
// Original: sub_19407A0
// ----------------------------------------------------------------------------
bool sub_19407A0(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B838);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_e4156e3bab,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940820  (binary VA: 0x1940820)
// Original: sub_1940820
// ----------------------------------------------------------------------------
bool sub_1940820(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B83C);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_e51aa32f43,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19408A0  (binary VA: 0x19408a0)
// Original: sub_19408A0
// ----------------------------------------------------------------------------
bool sub_19408A0(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B828);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_4828e1204d,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940920  (binary VA: 0x1940920)
// Original: sub_1940920
// ----------------------------------------------------------------------------
bool sub_1940920(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B824);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_fdee47eb41,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19409A0  (binary VA: 0x19409a0)
// Original: sub_19409A0
// ----------------------------------------------------------------------------
bool sub_19409A0(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B820);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_3cf6aa16a7,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940A20  (binary VA: 0x1940a20)
// Original: sub_1940A20
// ----------------------------------------------------------------------------
bool sub_1940A20(int a1)
{
  uint32_t v1;
  bool result;
  const void *lpsrc;

  v1 = sub_1902550(&dword_213B81C);
  result = false;
  if ( v1 < *(uint32_t *)(*(uint32_t *)a1 + 8) )
  {
    lpsrc = *(const void **)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 4 * v1);
    if ( lpsrc != nullptr )
      return dynamic_cast_id(
               lpsrc,
               (const __class_type_info *)&g4_typeinfo_a8275c73b0,
               (const __class_type_info *)&g4_typeinfo_d32d1785e9,
               0) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940AA0  (binary VA: 0x1940aa0)
// Original: sub_1940AA0
// ----------------------------------------------------------------------------
uint32_t * sub_1940AA0(uint32_t *a1, int a2, char *a3, int a4, char *a5, char *a6)
{
  int v6;
  uint32_t *result;
  unsigned int v9;
  int v10;
  char *v11;
  uint32_t *v12;
  int v13;
  char *v14;
  unsigned int v15;
  uint32_t *v16;
  char v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  char v21; // si
  unsigned int v22;
  int v23;
  char v24;
  unsigned int v25;
  uint32_t *v26;
  uint32_t *v27;
  char *v28;
  unsigned int v29;

  v6 = 0;
  v28 = a3;
  result = a1;
  v24 = *a3;
  v9 = 0;
  v10 = *a3;
  while ( (a6 - a5) >> 2 > v10 && v24 > 0 && v24 != 127 )
  {
    a6 -= 4 * v10;
    if ( v9 >= a4 - 1 )
    {
      ++v6;
    }
    else
    {
      v24 = a3[++v9];
      v28 = &a3[v9];
      v10 = v24;
    }
  }
  if ( a5 == a6 )
  {
    v29 = v9;
    v14 = v28;
  }
  else
  {
    v11 = a5;
    v12 = a1;
    v25 = v9;
    do
    {
      v13 = *(uint32_t *)v11;
      v11 += 4;
      *v12++ = v13;
    }
    while ( v11 != a6 );
    v29 = v25;
    v14 = v28;
    v15 = 4 * ((unsigned int)(v11 - (a5 + 4)) >> 2) + 4;
    result = (uint32_t *)((char *)a1 + v15);
    a5 += v15;
  }
  while ( v6 != 0 )
  {
    *result = a2;
    v16 = result + 1;
    v17 = *v14;
    if ( *v14 > 0 )
    {
      v26 = result + 1;
      v18 = 0;
      do
      {
        result[v18 / 4 + 1] = *(uint32_t *)&a5[v18];
        v18 += 4;
      }
      while ( v18 != 4 * (uint8_t)(v17 - 1) + 4 );
      v19 = 4 * (uint8_t)(v17 - 1) + 4;
      v16 = (uint32_t *)((char *)v26 + v19);
      a5 += v19;
    }
    --v6;
    result = v16;
  }
  v20 = v29;
  while ( v20 != 0 )
  {
    --v20;
    *result = a2;
    v21 = a3[v20];
    v27 = result + 1;
    if ( v21 > 0 )
    {
      v22 = 0;
      do
      {
        result[v22 / 4 + 1] = *(uint32_t *)&a5[v22];
        v22 += 4;
      }
      while ( v22 != 4 * (uint8_t)(v21 - 1) + 4 );
      v23 = 4 * (uint8_t)(v21 - 1) + 4;
      v27 = (uint32_t *)((char *)v27 + v23);
      a5 += v23;
    }
    result = v27;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940C90  (binary VA: 0x1940c90)
// Original: sub_1940C90
// ----------------------------------------------------------------------------
int sub_1940C90(int a1, char *a2, int a3, int a4, int a5, uint32_t *a6, char *a7, int *a8)
{
  int result;

  result = sub_1940AA0(a6, a4, a2, a3, a7, &a7[4 * *a8]) - a6;
  *a8 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940CF0  (binary VA: 0x1940cf0)
// Original: sub_1940CF0
// ----------------------------------------------------------------------------
wchar_t * sub_1940CF0(int a1, char *a2, int a3, int a4, wchar_t *s2, uint32_t *a6, char *a7, uint32_t *a8)
{
  int v8;
  wchar_t *s1;
  wchar_t *result;
  int v11;
  int v12;

  if ( s2 != nullptr )
  {
    v8 = ((char *)s2 - a7) >> 2;
    s1 = (wchar_t *)(sub_1940AA0(a6, a4, a2, a3, a7, &a7[4 * v8]));
    v12 = s1 - (wchar_t *)(a6);
    result = wmemcpy(s1, s2, *a8 - v8);
    v11 = *a8 + v12 - v8;
  }
  else
  {
    result = (wchar_t *)(sub_1940AA0(a6, a4, a2, a3, a7, &a7[4 * *a8]));
    v11 = result - (wchar_t *)(a6);
  }
  *a8 = v11;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1940DD0  (binary VA: 0x1940dd0)
// Original: sub_1940DD0
// ----------------------------------------------------------------------------
uint32_t * sub_1940DD0(uint32_t *a1, int a2, int a3, bool a4, int a5, wchar_t a6, char **a7)
{
  int *v7;
  int v8;
  char *v9;
  int *v10;
  int v11;
  int v12;
  size_t v13;
  uint32_t *v14;
  uint32_t *v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  size_t v26;
  void *v27;
  int v29;
  int v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  typedef void *_g4_t_v35;
  typedef signed int _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef bool _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef size_t _g4_t_v40;
  typedef int _g4_t_v41;
  typedef bool _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef size_t _g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef size_t _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t _g4_t_v58[2];
  typedef bool _g4_t_v59;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v35)) > _g4_s0 ? (12u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v36)) > _g4_s1 ? (12u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v37)) > _g4_s2 ? (12u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v38)) > _g4_s3 ? (12u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v39)) > _g4_s4 ? (16u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v40)) > _g4_s5 ? (24u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v41)) > _g4_s6 ? (24u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v42)) > _g4_s7 ? (24u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v43)) > _g4_s8 ? (28u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v44)) > _g4_s9 ? (28u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v45)) > _g4_s10 ? (28u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v46)) > _g4_s11 ? (28u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v47)) > _g4_s12 ? (28u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v48)) > _g4_s13 ? (32u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v49)) > _g4_s14 ? (32u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v50)) > _g4_s15 ? (32u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v51)) > _g4_s16 ? (36u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v52)) > _g4_s17 ? (40u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v53)) > _g4_s18 ? (40u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v54)) > _g4_s19 ? (40u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v55)) > _g4_s20 ? (44u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v56)) > _g4_s21 ? (60u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v57)) > _g4_s22 ? (64u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v58)) > _g4_s23 ? (68u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v59)) > _g4_s24 ? (76u + sizeof(_g4_t_v59)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 76u);

  v35 = sub_193EB50(a5 + 108);
  v40 = sub_1902550(&dword_213B840);
  v7 = (int *)(*(uint32_t *)(*(uint32_t *)(a5 + 108) + 12) + 4 * v40);
  v8 = *v7;
  if ( *v7 == 0 )
  {
    v34 = opNew(0x70u);
    *(uint32_t *)(v34 + 4) = 0;
    *(uint32_t *)(v34 + 8) = 0;
    *(uint32_t *)v34 = (uint32_t)(uintptr_t)(&off_20AB960);
    *(uint32_t *)(v34 + 12) = 0;
    *(uint8_t *)(v34 + 16) = 0;
    *(uint32_t *)(v34 + 20) = 0;
    *(uint32_t *)(v34 + 24) = 0;
    *(uint32_t *)(v34 + 28) = 0;
    *(uint32_t *)(v34 + 32) = 0;
    *(uint32_t *)(v34 + 36) = 0;
    *(uint32_t *)(v34 + 40) = 0;
    *(uint32_t *)(v34 + 44) = 0;
    *(uint32_t *)(v34 + 48) = 0;
    *(uint32_t *)(v34 + 52) = 0;
    *(uint8_t *)(v34 + 56) = 0;
    *(uint8_t *)(v34 + 57) = 0;
    *(uint8_t *)(v34 + 58) = 0;
    *(uint8_t *)(v34 + 59) = 0;
    *(uint8_t *)(v34 + 60) = 0;
    *(uint8_t *)(v34 + 61) = 0;
    *(uint8_t *)(v34 + 62) = 0;
    *(uint8_t *)(v34 + 63) = 0;
    *(uint8_t *)(v34 + 108) = 0;
    sub_193F450(v34, a5 + 108);
    sub_19023D0(*(uint32_t *)(a5 + 108), (volatile int32_t *)v34, v40);
    v8 = *v7;
  }
  v9 = *a7;
  if ( *(uint32_t *)*a7 == *(uint32_t *)(v8 + 64) )
  {
    v31 = *(int **)(v8 + 44);
    v58[0] = *(uint32_t *)(v8 + 60);
    v11 = *((uint32_t *)v9 - 3);
    v51 = v31;
    v39 = *(uint32_t *)(v8 + 48);
    if ( v11 != 0 )
      v9 += 4;
  }
  else
  {
    v10 = *(int **)(v8 + 36);
    v58[0] = *(uint32_t *)(v8 + 56);
    v39 = *(uint32_t *)(v8 + 40);
    v51 = v10;
    v11 = *((uint32_t *)v9 - 3);
  }
  v41 = (G4_VCALL<int>(v35, 20, 4, v9, &v9[4 * v11]) - (int)(uintptr_t)(v9)) >> 2;
  if ( v41 != 0 )
  {
    v56 = (int)(uintptr_t)(&unk_213B8B4);
    sub_194F140(&v56, 2 * v41);
    v12 = *(uint32_t *)(v8 + 52);
    v36 = v41 - v12;
    if ( v41 - v12 > 0 )
    {
      v13 = v41;
      if ( v12 >= 0 )
        v13 = v41 - v12;
      v36 = v13;
      if ( *(uint32_t *)(v8 + 12) != 0 )
      {
        sub_194E610((int)(uintptr_t)(&v56), 0, *(uint32_t *)(v56 - 12), 2 * v13, 0);
        v52 = *(uint32_t *)(v8 + 24);
        v14 = (uint32_t *)v56;
        v43 = *(uint32_t *)(v8 + 12);
        v48 = *(char **)(v8 + 8);
        if ( *(int *)(v56 - 4) >= 0 )
        {
          sub_194ED80(&v56);
          v14 = (uint32_t *)v56;
        }
        v15 = sub_1940AA0(v14, v52, v48, v43, v9, &v9[4 * v36]);
        v16 = v56;
        v44 = (size_t)v15;
        if ( *(int *)(v56 - 4) >= 0 )
        {
          sub_194ED80(&v56);
          v16 = v56;
        }
        v17 = v44 - v16;
        v18 = *(uint32_t *)(v16 - 12);
        v19 = v17 >> 2;
        if ( v19 > v18 )
          sub_1900210("basic_string::erase");
        sub_194E130(&v56, v19, v18 - v19, 0);
      }
      else
      {
        sub_194E3B0((int)(uintptr_t)(&v56), (wchar_t *)v9, v13);
      }
      v12 = *(uint32_t *)(v8 + 52);
    }
    if ( v12 > 0 )
    {
      v49 = *(uint32_t *)(v8 + 20);
      v20 = v56;
      v21 = *(uint32_t *)(v56 - 12);
      v45 = v21 + 1;
      if ( (unsigned int)(v21 + 1) > *(uint32_t *)(v56 - 8) || *(int *)(v56 - 4) > 0 )
      {
        sub_194F140(&v56, v45);
        v20 = v56;
        v21 = *(uint32_t *)(v56 - 12);
      }
      *(uint32_t *)(v20 + 4 * v21) = v49;
      if ( (void *)(v20 - 12) != &unk_213B8A8 )
      {
        *(uint32_t *)(v20 - 4) = 0;
        *(uint32_t *)(v20 - 12) = v45;
        *(uint32_t *)(v20 + 4 * v45) = 0;
      }
      if ( v36 < 0 )
      {
        sub_194F260((int)(uintptr_t)(&v56), -v36, *(uint32_t *)(v8 + 68));
        sub_194F410((int)(uintptr_t)(&v56), (wchar_t *)v9, v41);
      }
      else
      {
        sub_194F410((int)(uintptr_t)(&v56), (wchar_t *)&v9[4 * v36], *(uint32_t *)(v8 + 52));
      }
    }
    v22 = *(uint32_t *)(a5 + 12);
    v23 = 0;
    if ( (v22 & 0x200) != 0 )
      v23 = *(uint32_t *)(v8 + 32);
    v46 = v23 + *(uint32_t *)(v56 - 12) + v39;
    v57 = (int)(uintptr_t)(&unk_213B8B4);
    sub_194F140(&v57, 2 * v46);
    v37 = *(uint32_t *)(a5 + 8);
    v50 = v22 & 0xB0;
    v42 = v50 == 16 && v46 < v37;
    v24 = 0;
    v47 = v37 - v46;
    while ( 2 )
    {
      switch ( *((uint8_t *)v58 + v24) )
      {
        case 0:
          if ( !v42 )
            goto LABEL_30;
          sub_194F260((int)(uintptr_t)(&v57), v47, a6);
          if ( ++v24 != 4 )
            continue;
          goto LABEL_31;
        case 1:
          if ( v42 )
          {
            sub_194F260((int)(uintptr_t)(&v57), v47, a6);
          }
          else
          {
            v32 = v57;
            v33 = *(uint32_t *)(v57 - 12);
            v54 = v33 + 1;
            if ( (unsigned int)(v33 + 1) > *(uint32_t *)(v57 - 8) || *(int *)(v57 - 4) > 0 )
            {
              sub_194F140(&v57, v54);
              v32 = v57;
              v33 = *(uint32_t *)(v57 - 12);
            }
            *(uint32_t *)(v32 + 4 * v33) = a6;
            if ( (void *)(v32 - 12) != &unk_213B8A8 )
            {
              *(uint32_t *)(v32 - 4) = 0;
              *(uint32_t *)(v32 - 12) = v54;
              *(uint32_t *)(v32 + 4 * v54) = 0;
            }
          }
          goto LABEL_30;
        case 2:
          if ( (*(uint8_t *)(a5 + 13) & 2) == 0 )
            goto LABEL_30;
          sub_194F410((int)(uintptr_t)(&v57), *(wchar_t **)(v8 + 28), *(uint32_t *)(v8 + 32));
          if ( ++v24 == 4 )
            goto LABEL_31;
          continue;
        case 3:
          if ( v39 != 0 )
          {
            v29 = v57;
            v55 = *v51;
            v30 = *(uint32_t *)(v57 - 12);
            v53 = v30 + 1;
            if ( (unsigned int)(v30 + 1) > *(uint32_t *)(v57 - 8) || *(int *)(v57 - 4) > 0 )
            {
              sub_194F140(&v57, v53);
              v29 = v57;
              v30 = *(uint32_t *)(v57 - 12);
            }
            *(uint32_t *)(v29 + 4 * v30) = v55;
            if ( (void *)(v29 - 12) != &unk_213B8A8 )
            {
              *(uint32_t *)(v29 - 4) = 0;
              *(uint32_t *)(v29 - 12) = v53;
              *(uint32_t *)(v29 + 4 * v53) = 0;
            }
          }
          goto LABEL_30;
        case 4:
          sub_194F6E0(&v57, &v56);
          if ( ++v24 != 4 )
            continue;
          goto LABEL_31;
        default:
LABEL_30:
          if ( ++v24 != 4 )
            continue;
LABEL_31:
          if ( v39 > 1 )
            sub_194F410((int)(uintptr_t)(&v57), v51 + 1, v39 - 1);
          v25 = v57;
          v26 = *(uint32_t *)(v57 - 12);
          if ( v37 > v26 )
          {
            if ( v50 == 32 )
              sub_194F260((int)(uintptr_t)(&v57), v37 - v26, a6);
            else
              sub_194E610((int)(uintptr_t)(&v57), 0, 0, v37 - v26, a6);
            v25 = v57;
            v26 = v37;
          }
          v38 = a4;
          if ( !a4 )
          {
            v38 = v26 != G4_VCALL<int>(a3, 48, v25, v26);
            v25 = v57;
          }
          v59 = a4;
          v58[1] = a3;
          LOBYTE(v59) = v38;
          LOBYTE(a4) = v38;
          if ( (void *)(v25 - 12) != &unk_213B8A8
            && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
          {
            sub_194E070((void *)(v25 - 12));
          }
          v27 = (void *)(v56 - 12);
          if ( (void *)(v56 - 12) != &unk_213B8A8
            && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
          {
            sub_194E070(v27);
          }
          break;
      }
      break;
    }
  }
  *(uint32_t *)(a5 + 8) = 0;
  *a1 = a3;
  a1[1] = a4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1941620  (binary VA: 0x1941620)
// Original: sub_1941620
// ----------------------------------------------------------------------------
uint32_t * sub_1941620(uint32_t *a1, int a2, int a3, bool a4, int a5, wchar_t a6, char **a7)
{
  int *v7;
  int v8;
  char *v9;
  int *v10;
  int v11;
  int v12;
  size_t v13;
  uint32_t *v14;
  uint32_t *v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  size_t v26;
  void *v27;
  int v29;
  int v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  typedef void *_g4_t_v35;
  typedef signed int _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef bool _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef size_t _g4_t_v40;
  typedef int _g4_t_v41;
  typedef bool _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef size_t _g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef size_t _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t _g4_t_v58[2];
  typedef bool _g4_t_v59;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v35)) > _g4_s0 ? (12u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v36)) > _g4_s1 ? (12u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v37)) > _g4_s2 ? (12u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v38)) > _g4_s3 ? (12u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v39)) > _g4_s4 ? (16u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v40)) > _g4_s5 ? (24u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v41)) > _g4_s6 ? (24u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v42)) > _g4_s7 ? (24u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v43)) > _g4_s8 ? (28u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v44)) > _g4_s9 ? (28u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v45)) > _g4_s10 ? (28u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v46)) > _g4_s11 ? (28u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v47)) > _g4_s12 ? (28u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v48)) > _g4_s13 ? (32u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v49)) > _g4_s14 ? (32u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v50)) > _g4_s15 ? (32u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v51)) > _g4_s16 ? (36u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v52)) > _g4_s17 ? (40u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v53)) > _g4_s18 ? (40u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v54)) > _g4_s19 ? (40u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v55)) > _g4_s20 ? (44u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v56)) > _g4_s21 ? (60u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v57)) > _g4_s22 ? (64u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v58)) > _g4_s23 ? (68u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v59)) > _g4_s24 ? (76u + sizeof(_g4_t_v59)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 76u);

  v35 = sub_193EB50(a5 + 108);
  v40 = sub_1902550(&dword_213B844);
  v7 = (int *)(*(uint32_t *)(*(uint32_t *)(a5 + 108) + 12) + 4 * v40);
  v8 = *v7;
  if ( *v7 == 0 )
  {
    v34 = opNew(0x70u);
    *(uint32_t *)(v34 + 4) = 0;
    *(uint32_t *)(v34 + 8) = 0;
    *(uint32_t *)v34 = (uint32_t)(uintptr_t)(&off_20AB950);
    *(uint32_t *)(v34 + 12) = 0;
    *(uint8_t *)(v34 + 16) = 0;
    *(uint32_t *)(v34 + 20) = 0;
    *(uint32_t *)(v34 + 24) = 0;
    *(uint32_t *)(v34 + 28) = 0;
    *(uint32_t *)(v34 + 32) = 0;
    *(uint32_t *)(v34 + 36) = 0;
    *(uint32_t *)(v34 + 40) = 0;
    *(uint32_t *)(v34 + 44) = 0;
    *(uint32_t *)(v34 + 48) = 0;
    *(uint32_t *)(v34 + 52) = 0;
    *(uint8_t *)(v34 + 56) = 0;
    *(uint8_t *)(v34 + 57) = 0;
    *(uint8_t *)(v34 + 58) = 0;
    *(uint8_t *)(v34 + 59) = 0;
    *(uint8_t *)(v34 + 60) = 0;
    *(uint8_t *)(v34 + 61) = 0;
    *(uint8_t *)(v34 + 62) = 0;
    *(uint8_t *)(v34 + 63) = 0;
    *(uint8_t *)(v34 + 108) = 0;
    sub_193FA60(v34, a5 + 108);
    sub_19023D0(*(uint32_t *)(a5 + 108), (volatile int32_t *)v34, v40);
    v8 = *v7;
  }
  v9 = *a7;
  if ( *(uint32_t *)*a7 == *(uint32_t *)(v8 + 64) )
  {
    v31 = *(int **)(v8 + 44);
    v58[0] = *(uint32_t *)(v8 + 60);
    v11 = *((uint32_t *)v9 - 3);
    v51 = v31;
    v39 = *(uint32_t *)(v8 + 48);
    if ( v11 != 0 )
      v9 += 4;
  }
  else
  {
    v10 = *(int **)(v8 + 36);
    v58[0] = *(uint32_t *)(v8 + 56);
    v39 = *(uint32_t *)(v8 + 40);
    v51 = v10;
    v11 = *((uint32_t *)v9 - 3);
  }
  v41 = (G4_VCALL<int>(v35, 20, 4, v9, &v9[4 * v11]) - (int)(uintptr_t)(v9)) >> 2;
  if ( v41 != 0 )
  {
    v56 = (int)(uintptr_t)(&unk_213B8B4);
    sub_194F140(&v56, 2 * v41);
    v12 = *(uint32_t *)(v8 + 52);
    v36 = v41 - v12;
    if ( v41 - v12 > 0 )
    {
      v13 = v41;
      if ( v12 >= 0 )
        v13 = v41 - v12;
      v36 = v13;
      if ( *(uint32_t *)(v8 + 12) != 0 )
      {
        sub_194E610((int)(uintptr_t)(&v56), 0, *(uint32_t *)(v56 - 12), 2 * v13, 0);
        v52 = *(uint32_t *)(v8 + 24);
        v14 = (uint32_t *)v56;
        v43 = *(uint32_t *)(v8 + 12);
        v48 = *(char **)(v8 + 8);
        if ( *(int *)(v56 - 4) >= 0 )
        {
          sub_194ED80(&v56);
          v14 = (uint32_t *)v56;
        }
        v15 = sub_1940AA0(v14, v52, v48, v43, v9, &v9[4 * v36]);
        v16 = v56;
        v44 = (size_t)v15;
        if ( *(int *)(v56 - 4) >= 0 )
        {
          sub_194ED80(&v56);
          v16 = v56;
        }
        v17 = v44 - v16;
        v18 = *(uint32_t *)(v16 - 12);
        v19 = v17 >> 2;
        if ( v19 > v18 )
          sub_1900210("basic_string::erase");
        sub_194E130(&v56, v19, v18 - v19, 0);
      }
      else
      {
        sub_194E3B0((int)(uintptr_t)(&v56), (wchar_t *)v9, v13);
      }
      v12 = *(uint32_t *)(v8 + 52);
    }
    if ( v12 > 0 )
    {
      v49 = *(uint32_t *)(v8 + 20);
      v20 = v56;
      v21 = *(uint32_t *)(v56 - 12);
      v45 = v21 + 1;
      if ( (unsigned int)(v21 + 1) > *(uint32_t *)(v56 - 8) || *(int *)(v56 - 4) > 0 )
      {
        sub_194F140(&v56, v45);
        v20 = v56;
        v21 = *(uint32_t *)(v56 - 12);
      }
      *(uint32_t *)(v20 + 4 * v21) = v49;
      if ( (void *)(v20 - 12) != &unk_213B8A8 )
      {
        *(uint32_t *)(v20 - 4) = 0;
        *(uint32_t *)(v20 - 12) = v45;
        *(uint32_t *)(v20 + 4 * v45) = 0;
      }
      if ( v36 < 0 )
      {
        sub_194F260((int)(uintptr_t)(&v56), -v36, *(uint32_t *)(v8 + 68));
        sub_194F410((int)(uintptr_t)(&v56), (wchar_t *)v9, v41);
      }
      else
      {
        sub_194F410((int)(uintptr_t)(&v56), (wchar_t *)&v9[4 * v36], *(uint32_t *)(v8 + 52));
      }
    }
    v22 = *(uint32_t *)(a5 + 12);
    v23 = 0;
    if ( (v22 & 0x200) != 0 )
      v23 = *(uint32_t *)(v8 + 32);
    v46 = v23 + *(uint32_t *)(v56 - 12) + v39;
    v57 = (int)(uintptr_t)(&unk_213B8B4);
    sub_194F140(&v57, 2 * v46);
    v37 = *(uint32_t *)(a5 + 8);
    v50 = v22 & 0xB0;
    v42 = v50 == 16 && v46 < v37;
    v24 = 0;
    v47 = v37 - v46;
    while ( 2 )
    {
      switch ( *((uint8_t *)v58 + v24) )
      {
        case 0:
          if ( !v42 )
            goto LABEL_30;
          sub_194F260((int)(uintptr_t)(&v57), v47, a6);
          if ( ++v24 != 4 )
            continue;
          goto LABEL_31;
        case 1:
          if ( v42 )
          {
            sub_194F260((int)(uintptr_t)(&v57), v47, a6);
          }
          else
          {
            v32 = v57;
            v33 = *(uint32_t *)(v57 - 12);
            v54 = v33 + 1;
            if ( (unsigned int)(v33 + 1) > *(uint32_t *)(v57 - 8) || *(int *)(v57 - 4) > 0 )
            {
              sub_194F140(&v57, v54);
              v32 = v57;
              v33 = *(uint32_t *)(v57 - 12);
            }
            *(uint32_t *)(v32 + 4 * v33) = a6;
            if ( (void *)(v32 - 12) != &unk_213B8A8 )
            {
              *(uint32_t *)(v32 - 4) = 0;
              *(uint32_t *)(v32 - 12) = v54;
              *(uint32_t *)(v32 + 4 * v54) = 0;
            }
          }
          goto LABEL_30;
        case 2:
          if ( (*(uint8_t *)(a5 + 13) & 2) == 0 )
            goto LABEL_30;
          sub_194F410((int)(uintptr_t)(&v57), *(wchar_t **)(v8 + 28), *(uint32_t *)(v8 + 32));
          if ( ++v24 == 4 )
            goto LABEL_31;
          continue;
        case 3:
          if ( v39 != 0 )
          {
            v29 = v57;
            v55 = *v51;
            v30 = *(uint32_t *)(v57 - 12);
            v53 = v30 + 1;
            if ( (unsigned int)(v30 + 1) > *(uint32_t *)(v57 - 8) || *(int *)(v57 - 4) > 0 )
            {
              sub_194F140(&v57, v53);
              v29 = v57;
              v30 = *(uint32_t *)(v57 - 12);
            }
            *(uint32_t *)(v29 + 4 * v30) = v55;
            if ( (void *)(v29 - 12) != &unk_213B8A8 )
            {
              *(uint32_t *)(v29 - 4) = 0;
              *(uint32_t *)(v29 - 12) = v53;
              *(uint32_t *)(v29 + 4 * v53) = 0;
            }
          }
          goto LABEL_30;
        case 4:
          sub_194F6E0(&v57, &v56);
          if ( ++v24 != 4 )
            continue;
          goto LABEL_31;
        default:
LABEL_30:
          if ( ++v24 != 4 )
            continue;
LABEL_31:
          if ( v39 > 1 )
            sub_194F410((int)(uintptr_t)(&v57), v51 + 1, v39 - 1);
          v25 = v57;
          v26 = *(uint32_t *)(v57 - 12);
          if ( v37 > v26 )
          {
            if ( v50 == 32 )
              sub_194F260((int)(uintptr_t)(&v57), v37 - v26, a6);
            else
              sub_194E610((int)(uintptr_t)(&v57), 0, 0, v37 - v26, a6);
            v25 = v57;
            v26 = v37;
          }
          v38 = a4;
          if ( !a4 )
          {
            v38 = v26 != G4_VCALL<int>(a3, 48, v25, v26);
            v25 = v57;
          }
          v59 = a4;
          v58[1] = a3;
          LOBYTE(v59) = v38;
          LOBYTE(a4) = v38;
          if ( (void *)(v25 - 12) != &unk_213B8A8
            && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
          {
            sub_194E070((void *)(v25 - 12));
          }
          v27 = (void *)(v56 - 12);
          if ( (void *)(v56 - 12) != &unk_213B8A8
            && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
          {
            sub_194E070(v27);
          }
          break;
      }
      break;
    }
  }
  *(uint32_t *)(a5 + 8) = 0;
  *a1 = a3;
  a1[1] = a4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1941E70  (binary VA: 0x1941e70)
// Original: sub_1941E70
// ----------------------------------------------------------------------------
uint32_t * sub_1941E70(uint32_t *a1, int a2, int a3, bool a4, char a5, int a6, wchar_t a7, char **a8)
{
  if ( a5 != 0 )
    sub_1940DD0(a1, a2, a3, a4, a6, a7, a8);
  else
    sub_1941620(a1, a2, a3, a4, a6, a7, a8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19420A0  (binary VA: 0x1941ee0)
// Original: sub_19420A0
// ----------------------------------------------------------------------------
wchar_t * sub_19420A0(int a1, wchar_t a2, wchar_t *s1, wchar_t *s2, int a5, int a6)
{
  size_t n;
  int v7;
  wchar_t c;
  wchar_t *s;
  int v10;
  void *v12;
  wchar_t v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  n = a5 - a6;
  v7 = *(uint32_t *)(a1 + 12) & 0xB0;
  c = a2;
  s = s1;
  if ( v7 == 32 )
  {
    wmemcpy(s1, s2, a6);
    return wmemset(&s1[a6], a2, n);
  }
  else
  {
    v10 = 0;
    v17 = 0;
    if ( v7 == 16 )
    {
      v12 = sub_193EB50(a1 + 108);
      v18 = G4_VCALL<int>(v12, 40, 45);
      c = a2;
      v13 = *s2;
      if ( *s2 == v18
        || (v19 = (*(int (**)(wchar_t, void *, int))(*(uint32_t *)v12 + 40))(a2, v12, 43),
            c = a2,
            v13 = *s2,
            *s2 == v19) )
      {
        *s1 = v13;
        v17 = 1;
        s = s1 + 1;
        v10 = 1;
      }
      else
      {
        v14 = G4_VCALL<int>(v12, 40, 48);
        c = a2;
        if ( *s2 == v14
          && a6 > 1
          && ((v15 = G4_VCALL<int>(v12, 40, 120), c = a2, s2[1] == v15)
           || (v16 = (*(int (**)(wchar_t, void *, int))(*(uint32_t *)v12 + 40))(a2, v12, 88),
               c = a2,
               s2[1] == v16)) )
        {
          v17 = 2;
          v10 = 2;
          *s1 = *s2;
          s1[1] = s2[1];
          s = s1 + 2;
        }
        else
        {
          v17 = 0;
          v10 = 0;
        }
      }
    }
    wmemset(s, c, n);
    return wmemcpy(&s[n], &s2[v17], a6 - v10);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19422A0  (binary VA: 0x19422a0)
// Original: sub_19422A0
// ----------------------------------------------------------------------------
wchar_t * sub_19422A0(int a1, wchar_t a2, int a3, int a4, wchar_t *s1, wchar_t *s2, int *a7)
{
  wchar_t *result;

  result = sub_19420A0(a4, a2, s1, s2, a3, *a7);
  *a7 = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19426E0  (binary VA: 0x1942300)
// Original: sub_19426E0
// ----------------------------------------------------------------------------
int sub_19426E0(int a1)
{
  sub_1942300(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1942B20  (binary VA: 0x1942740)
// Original: sub_1942B20
// ----------------------------------------------------------------------------
int sub_1942B20(int a1)
{
  sub_1942740(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1942B80  (binary VA: 0x1942b80)
// Original: sub_1942B80
// ----------------------------------------------------------------------------
int sub_1942B80(uint32_t *a1, unsigned int a2, int a3, int16_t a4, char a5)
{
  uint32_t *v6;
  int v7;
  int v9;
  int v10;

  if ( a5 != 0 )
  {
    v6 = a1;
    do
    {
      --v6;
      v7 = *(uint32_t *)(a3 + 4 * (a2 % 0xA) + 16);
      a2 /= 0xAu;
      *v6 = v7;
    }
    while ( a2 != 0 );
  }
  else if ( (a4 & 0x4A) == 0x40 )
  {
    v6 = a1;
    do
    {
      --v6;
      v10 = a2 & 7;
      a2 >>= 3;
      *v6 = *(uint32_t *)(a3 + 4 * v10 + 16);
    }
    while ( a2 != 0 );
  }
  else
  {
    v6 = a1;
    do
    {
      --v6;
      v9 = a2 & 0xF;
      a2 >>= 4;
      *v6 = *(uint32_t *)(a3 + 4 * (v9 + ((a4 & 0x4000) == 0 ? 4 : 20)));
    }
    while ( a2 != 0 );
  }
  return a1 - v6;
}

// ----------------------------------------------------------------------------
// Function: sub_1942C20  (binary VA: 0x1942c20)
// Original: sub_1942C20
// ----------------------------------------------------------------------------
uint32_t * sub_1942C20(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, wchar_t a6, unsigned int a7)
{
  int *v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  int v12;
  void *v13;
  char v14; // si
  bool v15;
  void *v17;
  char *v18;
  int v19;
  int v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef wchar_t *_g4_t_v23;
  typedef int *_g4_t_v24;
  typedef wchar_t _g4_t_v25[2];
  typedef uint32_t _g4_t_v26[18];
  typedef int _g4_t_v27;
  typedef wchar_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34[7];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v23)) > _g4_s2 ? (16u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v24)) > _g4_s3 ? (20u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v25)) > _g4_s4 ? (24u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v26)) > _g4_s5 ? (32u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (104u + sizeof(_g4_t_v27)) > _g4_s6 ? (104u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v28)) > _g4_s7 ? (128u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (132u + sizeof(_g4_t_v29)) > _g4_s8 ? (132u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (136u + sizeof(_g4_t_v30)) > _g4_s9 ? (136u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (140u + sizeof(_g4_t_v31)) > _g4_s10 ? (140u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v32)) > _g4_s11 ? (144u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (148u + sizeof(_g4_t_v33)) > _g4_s12 ? (148u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (164u + sizeof(_g4_t_v34)) > _g4_s13 ? (164u + sizeof(_g4_t_v34)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 104u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 128u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 132u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 136u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 140u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 144u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 148u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 164u);

  v32 = a3;
  v29 = a4;
  v33 = sub_1902550(&dword_213B834);
  v7 = (int *)(*(uint32_t *)(a5[27] + 12) + 4 * v33);
  v8 = *v7;
  if ( *v7 == 0 )
  {
    v19 = opNew(0x128u);
    *(uint32_t *)(v19 + 4) = 0;
    *(uint32_t *)v19 = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(v19 + 8) = 0;
    *(uint32_t *)(v19 + 12) = 0;
    *(uint8_t *)(v19 + 16) = 0;
    *(uint32_t *)(v19 + 20) = 0;
    *(uint32_t *)(v19 + 24) = 0;
    *(uint32_t *)(v19 + 28) = 0;
    *(uint32_t *)(v19 + 32) = 0;
    *(uint32_t *)(v19 + 36) = 0;
    *(uint32_t *)(v19 + 40) = 0;
    *(uint8_t *)(v19 + 292) = 0;
    sub_193EEC0(v19, (int)(uintptr_t)(a5 + 27));
    sub_19023D0(a5[27], (volatile int32_t *)v19, v33);
    v8 = *v7;
  }
  v9 = a5[3];
  v28 = v25;
  v31 = v9;
  v30 = v9 & 0x4A;
  LOBYTE(v33) = v30 != 64 && v30 != 8;
  v10 = sub_1942B80(&v27, a7, v8 + 44, v9, v33);
  v34[0] = v10;
  v11 = (char *)&v28[20 - v10];
  if ( *(uint8_t *)(v8 + 16) != 0 )
  {
    v17 = alloca(16 * ((8 * v10 + 38) / 0x10u));
    v23 = &v28[20 - v10];
    v24 = v34;
    v22 = *(uint32_t *)(v8 + 40);
    v21 = *(uint32_t *)(v8 + 12);
    v18 = *(char **)(v8 + 8);
    v28 = (wchar_t *)(v26);
    sub_1940C90(a2, v18, v21, v22, (int)(uintptr_t)(a5), v26, v11, v34);
    v10 = v34[0];
    v11 = (char *)v28;
  }
  if ( (uint8_t)v33 == 0 && (v31 & 0x200) != 0 && a7 != 0 )
  {
    if ( v30 == 64 )
    {
      ++v10;
      *((uint32_t *)v11 - 1) = *(uint32_t *)(v8 + 60);
      v34[0] = v10;
      v11 -= 4;
    }
    else
    {
      v10 += 2;
      v20 = *(uint32_t *)(v8 + 4 * (((v31 & 0x4000) != 0) + 10) + 12);
      v34[0] = v10;
      *((uint32_t *)v11 - 1) = v20;
      *((uint32_t *)v11 - 2) = *(uint32_t *)(v8 + 60);
      v11 -= 8;
    }
  }
  v12 = a5[2];
  if ( v10 < v12 )
  {
    v13 = alloca(4 * v12 + 15);
    sub_19422A0(a2, a6, v12, (int)(uintptr_t)(a5), v25, (wchar_t *)v11, v34);
    v10 = v34[0];
    v11 = (char *)v25;
  }
  v14 = v29;
  v15 = (uint8_t)v29 == 0;
  a5[2] = 0;
  if ( v15 && v10 != G4_VCALL<int>(v32, 48, v11, v10) )
    v14 = 1;
  a1[1] = v29;
  *a1 = v32;
  *((uint8_t *)a1 + 4) = v14;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1942F20  (binary VA: 0x1942f20)
// Original: sub_1942F20
// ----------------------------------------------------------------------------
uint32_t * sub_1942F20(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, wchar_t a6, unsigned int a7)
{
  int v7;
  typedef int _g4_t_v9;
  typedef char _g4_t_v10;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v7 = a5[3];
  a5[3] = v7 & 0xFFFFBDB5 | 0x208;
  sub_1942C20(&v9, a2, a3, a4, a5, a6, a7);
  a5[3] = v7;
  LOBYTE(a4) = v10;
  *a1 = v9;
  a1[1] = a4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1942FC0  (binary VA: 0x1942fc0)
// Original: sub_1942FC0
// ----------------------------------------------------------------------------
uint32_t * sub_1942FC0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, wchar_t a6, unsigned int a7)
{
  sub_1942C20(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1943010  (binary VA: 0x1943010)
// Original: sub_1943010
// ----------------------------------------------------------------------------
uint32_t * sub_1943010(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, wchar_t a6, int a7)
{
  int *v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  char v12;
  char *v13;
  int v14;
  void *v15;
  char v16; // di
  bool v17;
  int v19;
  void *v20;
  int v21;
  int v22;
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef wchar_t *_g4_t_v26;
  typedef int *_g4_t_v27;
  typedef wchar_t _g4_t_v28[2];
  typedef uint32_t _g4_t_v29[18];
  typedef int _g4_t_v30;
  typedef wchar_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38[7];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v25)) > _g4_s2 ? (8u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v26)) > _g4_s3 ? (20u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v27)) > _g4_s4 ? (24u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v28)) > _g4_s5 ? (28u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v29)) > _g4_s6 ? (36u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (108u + sizeof(_g4_t_v30)) > _g4_s7 ? (108u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (128u + sizeof(_g4_t_v31)) > _g4_s8 ? (128u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (132u + sizeof(_g4_t_v32)) > _g4_s9 ? (132u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (136u + sizeof(_g4_t_v33)) > _g4_s10 ? (136u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (140u + sizeof(_g4_t_v34)) > _g4_s11 ? (140u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v35)) > _g4_s12 ? (144u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (148u + sizeof(_g4_t_v36)) > _g4_s13 ? (148u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (152u + sizeof(_g4_t_v37)) > _g4_s14 ? (152u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (168u + sizeof(_g4_t_v38)) > _g4_s15 ? (168u + sizeof(_g4_t_v38)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 108u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 128u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 132u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 136u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 140u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 144u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 148u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 152u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 168u);

  v36 = a3;
  v34 = a4;
  v37 = sub_1902550(&dword_213B834);
  v7 = (int *)(*(uint32_t *)(a5[27] + 12) + 4 * v37);
  v8 = *v7;
  if ( *v7 == 0 )
  {
    v21 = opNew(0x128u);
    *(uint32_t *)(v21 + 4) = 0;
    *(uint32_t *)v21 = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(v21 + 8) = 0;
    *(uint32_t *)(v21 + 12) = 0;
    *(uint8_t *)(v21 + 16) = 0;
    *(uint32_t *)(v21 + 20) = 0;
    *(uint32_t *)(v21 + 24) = 0;
    *(uint32_t *)(v21 + 28) = 0;
    *(uint32_t *)(v21 + 32) = 0;
    *(uint32_t *)(v21 + 36) = 0;
    *(uint32_t *)(v21 + 40) = 0;
    *(uint8_t *)(v21 + 292) = 0;
    sub_193EEC0(v21, (int)(uintptr_t)(a5 + 27));
    sub_19023D0(a5[27], (volatile int32_t *)v21, v37);
    v8 = *v7;
  }
  v33 = v8 + 44;
  v9 = a5[3];
  v35 = v9 & 0x4A;
  LOBYTE(v37) = v35 != 64 && v35 != 8;
  if ( a7 > 0 || (v10 = -a7, (uint8_t)v37 == 0) )
    v10 = a7;
  v31 = v28;
  v32 = v9;
  v11 = sub_1942B80(&v30, v10, v33, v9, v37);
  v38[0] = v11;
  v12 = BYTE1(v32);
  v13 = (char *)&v31[20 - v11];
  if ( *(uint8_t *)(v8 + 16) != 0 )
  {
    v20 = alloca(8 * v11 + 23);
    v26 = &v31[20 - v11];
    v27 = v38;
    v25 = *(uint32_t *)(v8 + 40);
    v24 = *(uint32_t *)(v8 + 12);
    v23 = *(char **)(v8 + 8);
    v31 = (wchar_t *)(v29);
    sub_1940C90(a2, v23, v24, v25, (int)(uintptr_t)(a5), v29, v13, v38);
    v11 = v38[0];
    v13 = (char *)v31;
    v12 = BYTE1(v32);
  }
  if ( (uint8_t)v37 != 0 )
  {
    if ( a7 < 0 )
    {
      ++v11;
      *((uint32_t *)v13 - 1) = *(uint32_t *)(v8 + 44);
      v38[0] = v11;
      v13 -= 4;
    }
    else if ( (v12 & 8) != 0 )
    {
      ++v11;
      *((uint32_t *)v13 - 1) = *(uint32_t *)(v8 + 48);
      v38[0] = v11;
      v13 -= 4;
    }
  }
  else if ( (v12 & 2) != 0 && a7 != 0 )
  {
    if ( v35 == 64 )
    {
      ++v11;
      *((uint32_t *)v13 - 1) = *(uint32_t *)(v8 + 60);
      v38[0] = v11;
      v13 -= 4;
    }
    else
    {
      v11 += 2;
      v22 = *(uint32_t *)(v8 + 4 * (((v12 & 0x40) != 0) + 10) + 12);
      v38[0] = v11;
      *((uint32_t *)v13 - 1) = v22;
      *((uint32_t *)v13 - 2) = *(uint32_t *)(v8 + 60);
      v13 -= 8;
    }
  }
  v14 = a5[2];
  if ( v14 > v11 )
  {
    v15 = alloca(4 * v14 + 15);
    sub_19422A0(a2, a6, v14, (int)(uintptr_t)(a5), v28, (wchar_t *)v13, v38);
    v11 = v38[0];
    v13 = (char *)v28;
  }
  v16 = v34;
  v17 = (uint8_t)v34 == 0;
  a5[2] = 0;
  if ( v17 && v11 != G4_VCALL<int>(v36, 48, v13, v11) )
    v16 = 1;
  v19 = v36;
  a1[1] = v34;
  *a1 = v19;
  *((uint8_t *)a1 + 4) = v16;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1943360  (binary VA: 0x1943360)
// Original: sub_1943360
// ----------------------------------------------------------------------------
uint32_t * sub_1943360(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, wchar_t a6, int a7)
{
  sub_1943010(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19433B0  (binary VA: 0x19433b0)
// Original: sub_19433B0
// ----------------------------------------------------------------------------
int sub_19433B0(uint32_t *a1, unsigned int a2, unsigned int a3, int a4, int16_t a5, char a6)
{
  uint64_t v6; // rdi
  uint32_t *v7;
  uint64_t v8;
  int v10;
  char v11;

  v6 = __PAIR64__(a2, a3);
  if ( a6 != 0 )
  {
    v7 = a1;
    do
    {
      *--v7 = *(uint32_t *)(a4 + 4 * (__PAIR64__(v6, HIDWORD(v6)) % 0xA) + 16);
      v8 = __PAIR64__(v6, HIDWORD(v6)) / 0xA;
      LODWORD(v6) = (__PAIR64__(v6, HIDWORD(v6)) / 0xA) >> 32;
      HIDWORD(v6) = v8;
    }
    while ( v6 != 0 );
  }
  else if ( (a5 & 0x4A) == 0x40 )
  {
    v7 = a1;
    do
    {
      v11 = BYTE4(v6);
      --v7;
      HIDWORD(v6) = __PAIR64__(v6, HIDWORD(v6)) >> 3;
      LODWORD(v6) = (unsigned int)v6 >> 3;
      *v7 = *(uint32_t *)(a4 + 4 * (v11 & 7) + 16);
    }
    while ( v6 != 0 );
  }
  else
  {
    v7 = a1;
    do
    {
      --v7;
      v10 = BYTE4(v6) & 0xF;
      HIDWORD(v6) = __PAIR64__(v6, HIDWORD(v6)) >> 4;
      LODWORD(v6) = (unsigned int)v6 >> 4;
      *v7 = *(uint32_t *)(a4 + 4 * (v10 + ((a5 & 0x4000) == 0 ? 4 : 20)));
    }
    while ( v6 != 0 );
  }
  return a1 - v7;
}

// ----------------------------------------------------------------------------
// Function: sub_19434B0  (binary VA: 0x19434b0)
// Original: sub_19434B0
// ----------------------------------------------------------------------------
uint32_t * sub_19434B0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, wchar_t a6, unsigned int a7, unsigned int a8)
{
  int *v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  int v13;
  void *v14;
  char v15; // si
  bool v16;
  void *v18;
  char *v19;
  int v20;
  int v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef wchar_t *_g4_t_v24;
  typedef int *_g4_t_v25;
  typedef wchar_t _g4_t_v26[2];
  typedef uint32_t _g4_t_v27[38];
  typedef int _g4_t_v28;
  typedef wchar_t *_g4_t_v29;
  typedef uint64_t _g4_t_v30 __attribute__((aligned(1)));
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36[7];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v24)) > _g4_s2 ? (24u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v25)) > _g4_s3 ? (28u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v26)) > _g4_s4 ? (32u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v27)) > _g4_s5 ? (40u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (192u + sizeof(_g4_t_v28)) > _g4_s6 ? (192u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (208u + sizeof(_g4_t_v29)) > _g4_s7 ? (208u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (212u + sizeof(_g4_t_v30)) > _g4_s8 ? (212u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (220u + sizeof(_g4_t_v31)) > _g4_s9 ? (220u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (224u + sizeof(_g4_t_v32)) > _g4_s10 ? (224u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (228u + sizeof(_g4_t_v33)) > _g4_s11 ? (228u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (232u + sizeof(_g4_t_v34)) > _g4_s12 ? (232u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (236u + sizeof(_g4_t_v35)) > _g4_s13 ? (236u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (252u + sizeof(_g4_t_v36)) > _g4_s14 ? (252u + sizeof(_g4_t_v36)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 192u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 208u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 212u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 220u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 224u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 228u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 232u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 236u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 252u);

  v34 = a3;
  v31 = a4;
  v30 = __PAIR64__(a7, a8);
  v35 = sub_1902550(&dword_213B834);
  v8 = (int *)(*(uint32_t *)(a5[27] + 12) + 4 * v35);
  v9 = *v8;
  if ( *v8 == 0 )
  {
    v20 = opNew(0x128u);
    *(uint32_t *)(v20 + 4) = 0;
    *(uint32_t *)v20 = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(v20 + 8) = 0;
    *(uint32_t *)(v20 + 12) = 0;
    *(uint8_t *)(v20 + 16) = 0;
    *(uint32_t *)(v20 + 20) = 0;
    *(uint32_t *)(v20 + 24) = 0;
    *(uint32_t *)(v20 + 28) = 0;
    *(uint32_t *)(v20 + 32) = 0;
    *(uint32_t *)(v20 + 36) = 0;
    *(uint32_t *)(v20 + 40) = 0;
    *(uint8_t *)(v20 + 292) = 0;
    sub_193EEC0(v20, (int)(uintptr_t)(a5 + 27));
    sub_19023D0(a5[27], (volatile int32_t *)v20, v35);
    v9 = *v8;
  }
  v10 = a5[3];
  v29 = v26;
  v33 = v10;
  v32 = v10 & 0x4A;
  LOBYTE(v35) = v32 != 64 && v32 != 8;
  v11 = sub_19433B0(&v28, HIDWORD(v30), v30, v9 + 44, v10, v35);
  v36[0] = v11;
  v12 = (char *)&v29[40 - v11];
  if ( *(uint8_t *)(v9 + 16) != 0 )
  {
    v18 = alloca(16 * ((8 * v11 + 38) / 0x10u));
    v24 = &v29[40 - v11];
    v25 = v36;
    v23 = *(uint32_t *)(v9 + 40);
    v22 = *(uint32_t *)(v9 + 12);
    v19 = *(char **)(v9 + 8);
    v29 = (wchar_t *)(v27);
    sub_1940C90(a2, v19, v22, v23, (int)(uintptr_t)(a5), v27, v12, v36);
    v11 = v36[0];
    v12 = (char *)v29;
  }
  if ( (uint8_t)v35 == 0 && (v33 & 0x200) != 0 && v30 != 0 )
  {
    if ( v32 == 64 )
    {
      ++v11;
      *((uint32_t *)v12 - 1) = *(uint32_t *)(v9 + 60);
      v36[0] = v11;
      v12 -= 4;
    }
    else
    {
      v11 += 2;
      v21 = *(uint32_t *)(v9 + 4 * (((v33 & 0x4000) != 0) + 10) + 12);
      v36[0] = v11;
      *((uint32_t *)v12 - 1) = v21;
      *((uint32_t *)v12 - 2) = *(uint32_t *)(v9 + 60);
      v12 -= 8;
    }
  }
  v13 = a5[2];
  if ( v11 < v13 )
  {
    v14 = alloca(4 * v13 + 15);
    sub_19422A0(a2, a6, v13, (int)(uintptr_t)(a5), v26, (wchar_t *)v12, v36);
    v11 = v36[0];
    v12 = (char *)v26;
  }
  v15 = v31;
  v16 = (uint8_t)v31 == 0;
  a5[2] = 0;
  if ( v16 && v11 != G4_VCALL<int>(v34, 48, v12, v11) )
    v15 = 1;
  a1[1] = v31;
  *a1 = v34;
  *((uint8_t *)a1 + 4) = v15;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19437C0  (binary VA: 0x19437c0)
// Original: sub_19437C0
// ----------------------------------------------------------------------------
uint32_t * sub_19437C0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, wchar_t a6, unsigned int a7, unsigned int a8)
{
  sub_19434B0(a1, a2, a3, a4, a5, a6, a7, a8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1943820  (binary VA: 0x1943820)
// Original: sub_1943820
// ----------------------------------------------------------------------------
uint32_t * sub_1943820(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, wchar_t a6, int64_t a7)
{
  int *v7;
  int v8;
  int v9;
  int v10;
  char v11;
  char *v12;
  int v13;
  void *v14;
  char v15; // di
  bool v16;
  int v18;
  void *v19;
  int v20;
  int v21;
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef wchar_t *_g4_t_v25;
  typedef int *_g4_t_v26;
  typedef wchar_t _g4_t_v27[2];
  typedef uint32_t _g4_t_v28[43];
  typedef wchar_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef char *_g4_t_v31;
  typedef int64_t _g4_t_v32 __attribute__((aligned(1)));
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int64_t _g4_t_v35 __attribute__((aligned(1)));
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38[7];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v25)) > _g4_s3 ? (20u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v26)) > _g4_s4 ? (24u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v27)) > _g4_s5 ? (28u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v28)) > _g4_s6 ? (36u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (208u + sizeof(_g4_t_v29)) > _g4_s7 ? (208u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (212u + sizeof(_g4_t_v30)) > _g4_s8 ? (212u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (216u + sizeof(_g4_t_v31)) > _g4_s9 ? (216u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (220u + sizeof(_g4_t_v32)) > _g4_s10 ? (220u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (228u + sizeof(_g4_t_v33)) > _g4_s11 ? (228u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (232u + sizeof(_g4_t_v34)) > _g4_s12 ? (232u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (236u + sizeof(_g4_t_v35)) > _g4_s13 ? (236u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (244u + sizeof(_g4_t_v36)) > _g4_s14 ? (244u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (248u + sizeof(_g4_t_v37)) > _g4_s15 ? (248u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (264u + sizeof(_g4_t_v38)) > _g4_s16 ? (264u + sizeof(_g4_t_v38)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 208u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 212u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 216u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 220u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 228u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 232u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 236u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 244u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 248u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 264u);

  v36 = a3;
  v33 = a4;
  v35 = a7;
  v37 = sub_1902550(&dword_213B834);
  v7 = (int *)(*(uint32_t *)(a5[27] + 12) + 4 * v37);
  v8 = *v7;
  if ( *v7 == 0 )
  {
    v20 = opNew(0x128u);
    *(uint32_t *)(v20 + 4) = 0;
    *(uint32_t *)v20 = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(v20 + 8) = 0;
    *(uint32_t *)(v20 + 12) = 0;
    *(uint8_t *)(v20 + 16) = 0;
    *(uint32_t *)(v20 + 20) = 0;
    *(uint32_t *)(v20 + 24) = 0;
    *(uint32_t *)(v20 + 28) = 0;
    *(uint32_t *)(v20 + 32) = 0;
    *(uint32_t *)(v20 + 36) = 0;
    *(uint32_t *)(v20 + 40) = 0;
    *(uint8_t *)(v20 + 292) = 0;
    sub_193EEC0(v20, (int)(uintptr_t)(a5 + 27));
    sub_19023D0(a5[27], (volatile int32_t *)v20, v37);
    v8 = *v7;
  }
  v9 = a5[3];
  v29 = v27;
  v34 = v9 & 0x4A;
  LOBYTE(v37) = v34 != 64 && v34 != 8;
  if ( v35 > 0 || (v32 = -v35, (uint8_t)v37 == 0) )
    v32 = v35;
  v30 = v9;
  v10 = sub_19433B0(v29 + 40, v32, HIDWORD(v32), v8 + 44, v9, v37);
  v38[0] = v10;
  v11 = BYTE1(v30);
  v12 = (char *)&v29[40 - v10];
  if ( *(uint8_t *)(v8 + 16) != 0 )
  {
    v19 = alloca(8 * v10 + 23);
    v25 = &v29[40 - v10];
    v26 = v38;
    v24 = *(uint32_t *)(v8 + 40);
    v23 = *(uint32_t *)(v8 + 12);
    v22 = *(char **)(v8 + 8);
    v31 = (char *)v28;
    sub_1940C90(a2, v22, v23, v24, (int)(uintptr_t)(a5), v28, v12, v38);
    v10 = v38[0];
    v12 = v31;
    v11 = BYTE1(v30);
  }
  if ( (uint8_t)v37 != 0 )
  {
    if ( v35 < 0 )
    {
      ++v10;
      *((uint32_t *)v12 - 1) = *(uint32_t *)(v8 + 44);
      v38[0] = v10;
      v12 -= 4;
    }
    else if ( (v11 & 8) != 0 )
    {
      ++v10;
      *((uint32_t *)v12 - 1) = *(uint32_t *)(v8 + 48);
      v38[0] = v10;
      v12 -= 4;
    }
  }
  else if ( (v11 & 2) != 0 && v35 != 0 )
  {
    if ( v34 == 64 )
    {
      ++v10;
      *((uint32_t *)v12 - 1) = *(uint32_t *)(v8 + 60);
      v38[0] = v10;
      v12 -= 4;
    }
    else
    {
      v10 += 2;
      v21 = *(uint32_t *)(v8 + 4 * (((v11 & 0x40) != 0) + 10) + 12);
      v38[0] = v10;
      *((uint32_t *)v12 - 1) = v21;
      *((uint32_t *)v12 - 2) = *(uint32_t *)(v8 + 60);
      v12 -= 8;
    }
  }
  v13 = a5[2];
  if ( v13 > v10 )
  {
    v14 = alloca(4 * v13 + 15);
    sub_19422A0(a2, a6, v13, (int)(uintptr_t)(a5), v27, (wchar_t *)v12, v38);
    v10 = v38[0];
    v12 = (char *)v27;
  }
  v15 = v33;
  v16 = (uint8_t)v33 == 0;
  a5[2] = 0;
  if ( v16 && v10 != G4_VCALL<int>(v36, 48, v12, v10) )
    v15 = 1;
  v18 = v36;
  a1[1] = v33;
  *a1 = v18;
  *((uint8_t *)a1 + 4) = v15;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1943BB0  (binary VA: 0x1943bb0)
// Original: sub_1943BB0
// ----------------------------------------------------------------------------
uint32_t * sub_1943BB0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, wchar_t a6, int64_t a7)
{
  sub_1943820(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1943C10  (binary VA: 0x1943c10)
// Original: sub_1943C10
// ----------------------------------------------------------------------------
int sub_1943C10(int a1, int *a2)
{
  int32_t v2;
  int v3;
  int result;
  int v5;

  v2 = sub_1902550(&dword_213B834);
  v3 = *(uint32_t *)(*a2 + 12) + 4 * v2;
  result = *(uint32_t *)v3;
  if ( *(uint32_t *)v3 == 0 )
  {
    v5 = opNew(0x128u);
    *(uint32_t *)(v5 + 4) = 0;
    *(uint32_t *)(v5 + 8) = 0;
    *(uint32_t *)v5 = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(v5 + 12) = 0;
    *(uint8_t *)(v5 + 16) = 0;
    *(uint32_t *)(v5 + 20) = 0;
    *(uint32_t *)(v5 + 24) = 0;
    *(uint32_t *)(v5 + 28) = 0;
    *(uint32_t *)(v5 + 32) = 0;
    *(uint32_t *)(v5 + 36) = 0;
    *(uint32_t *)(v5 + 40) = 0;
    *(uint8_t *)(v5 + 292) = 0;
    sub_193EEC0(v5, (int)(uintptr_t)(a2));
    sub_19023D0(*a2, (volatile int32_t *)v5, v2);
    return *(uint32_t *)v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1943D40  (binary VA: 0x1943d40)
// Original: sub_1943D40
// ----------------------------------------------------------------------------
int * sub_1943D40(int *a1, int a2, int a3, int a4, uint32_t *a5, wchar_t c, uint8_t a7)
{
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  void *v12;
  int v13;
  wchar_t *v14;
  int v15;
  bool v16;
  int v17;
  int v18;
  int v19;
  bool v20;
  int v21;
  typedef wchar_t _g4_t_v22;
  typedef bool _g4_t_v23;
  typedef wchar_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef size_t _g4_t_n;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef char _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v23)) > _g4_s1 ? (15u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v24)) > _g4_s2 ? (16u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v25)) > _g4_s3 ? (20u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v26)) > _g4_s4 ? (24u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_n)) > _g4_s5 ? (28u + sizeof(_g4_t_n)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v28)) > _g4_s6 ? (32u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v29)) > _g4_s7 ? (36u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (55u + sizeof(_g4_t_v30)) > _g4_s8 ? (55u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v31)) > _g4_s9 ? (56u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v32)) > _g4_s10 ? (60u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v33)) > _g4_s11 ? (64u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v34)) > _g4_s12 ? (68u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v35)) > _g4_s13 ? (80u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v36)) > _g4_s14 ? (84u + sizeof(_g4_t_v36)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 15u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 55u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);

  if ( (a5[3] & 1) == 0 )
  {
    sub_1943010(&v31, a2, a3, a4, a5, c, a7);
    a3 = v31;
    LOBYTE(a4) = v32;
    goto LABEL_3;
  }
  v25 = a5[3];
  LOBYTE(v24) = a7;
  v8 = (uint32_t *)sub_1943C10((int)(uintptr_t)(&v30), a5 + 27);
  if ( a7 == 0 )
  {
    v9 = v8[7];
    v10 = v8[8];
    v11 = a5[2];
    v26 = v9;
    if ( v10 < v11 )
      goto LABEL_6;
LABEL_12:
    v16 = a4;
    a5[2] = 0;
    v15 = a3;
    if ( (uint8_t)a4 == 0 )
      v16 = v10 != G4_VCALL<int>(a3, 48, v26, v10);
    goto LABEL_14;
  }
  v18 = v8[5];
  v10 = v8[6];
  v11 = a5[2];
  v26 = v18;
  if ( v10 >= v11 )
    goto LABEL_12;
LABEL_6:
  n = v11 - v10;
  v12 = alloca(4 * (v11 - v10) + 15);
  v24 = &v22;
  wmemset(&v22, c, v11 - v10);
  v13 = v25 & 0xB0;
  a5[2] = 0;
  v14 = v24;
  v28 = a3;
  v29 = a4;
  v15 = a3;
  if ( v13 != 32 )
  {
    v16 = a4;
    if ( (uint8_t)a4 == 0 )
    {
      v17 = G4_VCALL<int>(a3, 48, v24, n);
      v16 = n != v17;
    }
    v36 = v29;
    v35 = a3;
    LOBYTE(v36) = v16;
    if ( !v16 )
      v16 = v10 != G4_VCALL<int>(a3, 48, v26, v10);
LABEL_14:
    a3 = v15;
    LOBYTE(a4) = v16;
    goto LABEL_3;
  }
  v23 = a4;
  if ( (uint8_t)a4 == 0 )
  {
    v19 = G4_VCALL<int>(a3, 48, v26, v10);
    v14 = v24;
    v23 = v10 != v19;
  }
  v33 = a3;
  v34 = v29;
  LOBYTE(v34) = v23;
  v20 = v23;
  if ( !v23 )
  {
    v21 = G4_VCALL<int>(a3, 48, v14, n);
    v20 = n != v21;
  }
  LOBYTE(a4) = v20;
LABEL_3:
  *a1 = a3;
  a1[1] = a4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1943F80  (binary VA: 0x1943f80)
// Original: sub_1943F80
// ----------------------------------------------------------------------------
int sub_1943F80(uint32_t *a1)
{
  int result;
  uint32_t *v2;
  int *v3;
  int v4;

  result = 1;
  v2 = (uint32_t *)*a1;
  if ( *a1 != 0 )
  {
    result = 0;
    if ( a1[1] == -1 )
    {
      v3 = (int *)v2[2];
      if ( (unsigned int)(uintptr_t)(v3) >= v2[3] )
        v4 = (*(int (**)(uint32_t))(*v2 + 36))(*a1);
      else
        v4 = *v3;
      if ( v4 == -1 )
      {
        *a1 = 0;
        return 1;
      }
      else
      {
        a1[1] = v4;
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1943FE0  (binary VA: 0x1943fe0)
// Original: sub_1943FE0
// ----------------------------------------------------------------------------
uint32_t * sub_1943FE0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int *a7, int a8, int a9, int a10, int a11, uint32_t *a12)
{
  int v12;
  int v13;
  int i;
  int v15;
  int v17;
  char v18;
  unsigned int v19;
  char v20;
  void *v21;

  v12 = 10;
  v21 = sub_193EB50(a11 + 108);
  if ( a10 != 2 )
  {
    LOWORD(v12) = 1000;
    if ( a10 != 4 )
      v12 = 1;
  }
  v13 = 0;
  for ( i = 0; ; ++i )
  {
    v20 = sub_1943F80(&a3);
    if ( v20 == (uint8_t)sub_1943F80(&a5) )
      break;
    if ( i == a10 )
      goto LABEL_10;
    v17 = sub_193BA20((int)(uintptr_t)(&a3));
    v18 = G4_VCALL<int>(v21, 48, v17, 42);
    if ( (uint8_t)(v18 - 48) > 9u )
      goto LABEL_7;
    v13 = v18 + 10 * v13 - 48;
    if ( v12 * v13 > a9 || a8 >= v12 + v12 * v13 )
      goto LABEL_7;
    v12 /= 10;
    if ( a3 != nullptr )
    {
      v19 = a3[2];
      if ( v19 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v19 + 4;
      a4 = -1;
    }
  }
  if ( i != a10 )
  {
LABEL_7:
    if ( i != 2 || a10 != 4 )
    {
      *a12 |= 4u;
      goto LABEL_11;
    }
    v13 -= 100;
  }
LABEL_10:
  *a7 = v13;
LABEL_11:
  v15 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v15;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1944140  (binary VA: 0x1944140)
// Original: sub_1944140
// ----------------------------------------------------------------------------
uint32_t * sub_1944140(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int a9)
{
  int v9;
  uint32_t *v10;
  int v11;
  char v12; // bp
  int v13;
  typedef uint32_t _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v16)) > _g4_s1 ? (24u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v17)) > _g4_s2 ? (28u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);

  v9 = a7;
  v10 = a8;
  sub_193EB50(a7 + 108);
  v17[0] = 0;
  sub_1943FE0(v15, a2, a3, a4, a5, a6, &v16, 0, 9999, 4, v9, v17);
  a3 = (uint32_t *)v15[0];
  a4 = v15[1];
  if ( v17[0] != 0 )
  {
    *v10 |= 4u;
  }
  else
  {
    v11 = v16 + 100;
    if ( v16 >= 0 )
      v11 = v16 - 1900;
    *(uint32_t *)(a9 + 20) = v11;
  }
  v12 = sub_1943F80(&a3);
  if ( v12 == (uint8_t)sub_1943F80(&a5) )
    *v10 |= 2u;
  v13 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1944250  (binary VA: 0x1944250)
// Original: sub_1944250
// ----------------------------------------------------------------------------
uint32_t * sub_1944250(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  int *v10;
  int i;
  unsigned int v12;
  unsigned int v13;
  size_t *v14;
  int v15;
  size_t v16;
  char v17; // bp
  size_t *v18;
  char v19; // di
  int v20;
  int v21;
  size_t *v22;
  int v24;
  char v25; // bp
  int v26;
  unsigned int v27;
  char v28;
  int v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  char v34; // bp
  wchar_t c;
  wchar_t *v36;
  size_t *v37;
  int v38;
  size_t v39;
  size_t *v40;
  unsigned int v41;
  char v42;
  int v43;
  unsigned int v44;
  char v45; // bp
  unsigned int v46;
  char v47; // bp
  unsigned int v48;
  unsigned int v49;
  int *v50;
  int v51;
  typedef int32_t _g4_t_v52;
  typedef char _g4_t_v53;
  typedef char _g4_t_v54;
  typedef char _g4_t_v55;
  typedef char _g4_t_v56;
  typedef void *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef char _g4_t_v60;
  typedef int _g4_t_v61;
  typedef char _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef unsigned int _g4_t_v66;
  typedef char _g4_t_v67;
  typedef char _g4_t_v68;
  typedef bool _g4_t_v69;
  typedef char _g4_t_v70;
  typedef size_t *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t _g4_t_v73[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v52)) > _g4_s0 ? (4u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v53)) > _g4_s1 ? (4u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v54)) > _g4_s2 ? (4u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v55)) > _g4_s3 ? (4u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v56)) > _g4_s4 ? (4u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v57)) > _g4_s5 ? (8u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v58)) > _g4_s6 ? (8u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v59)) > _g4_s7 ? (12u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v60)) > _g4_s8 ? (16u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v61)) > _g4_s9 ? (16u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v62)) > _g4_s10 ? (16u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v63)) > _g4_s11 ? (32u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v64)) > _g4_s12 ? (40u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v65)) > _g4_s13 ? (44u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v66)) > _g4_s14 ? (52u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v67)) > _g4_s15 ? (56u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (61u + sizeof(_g4_t_v68)) > _g4_s16 ? (61u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (62u + sizeof(_g4_t_v69)) > _g4_s17 ? (62u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (63u + sizeof(_g4_t_v70)) > _g4_s18 ? (63u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v71)) > _g4_s19 ? (68u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v72)) > _g4_s20 ? (72u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v73)) > _g4_s21 ? (76u + sizeof(_g4_t_v73)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 4u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 40u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 44u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 61u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 62u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 63u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 68u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 72u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 76u);

  v9 = a7 + 108;
  v57 = sub_193EB50(a7 + 108);
  v52 = sub_1902550(&dword_213B844);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(a7 + 108) + 12) + 4 * v52);
  v63 = *v10;
  if ( *v10 == 0 )
  {
    v51 = opNew(0x70u);
    *(uint32_t *)(v51 + 4) = 0;
    *(uint32_t *)(v51 + 8) = 0;
    *(uint32_t *)v51 = (uint32_t)(uintptr_t)(&off_20AB950);
    *(uint32_t *)(v51 + 12) = 0;
    *(uint8_t *)(v51 + 16) = 0;
    *(uint32_t *)(v51 + 20) = 0;
    *(uint32_t *)(v51 + 24) = 0;
    *(uint32_t *)(v51 + 28) = 0;
    *(uint32_t *)(v51 + 32) = 0;
    *(uint32_t *)(v51 + 36) = 0;
    *(uint32_t *)(v51 + 40) = 0;
    *(uint32_t *)(v51 + 44) = 0;
    *(uint32_t *)(v51 + 48) = 0;
    *(uint32_t *)(v51 + 52) = 0;
    *(uint8_t *)(v51 + 56) = 0;
    *(uint8_t *)(v51 + 57) = 0;
    *(uint8_t *)(v51 + 58) = 0;
    *(uint8_t *)(v51 + 59) = 0;
    *(uint8_t *)(v51 + 60) = 0;
    *(uint8_t *)(v51 + 61) = 0;
    *(uint8_t *)(v51 + 62) = 0;
    *(uint8_t *)(v51 + 63) = 0;
    *(uint8_t *)(v51 + 108) = 0;
    sub_193FA60(v51, v9);
    sub_19023D0(*(uint32_t *)(a7 + 108), (volatile int32_t *)v51, v52);
    v63 = *v10;
  }
  v69 = *(uint32_t *)(v63 + 40) != 0 && *(uint32_t *)(v63 + 48) != 0;
  v71 = (size_t *)(&dword_213B814);
  if ( *(uint8_t *)(v63 + 16) != 0 )
    sub_1939B80(&v71, 0x20u);
  v72 = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80((size_t **)&v72, 0x20u);
  v64 = 1;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v73[0] = *(uint32_t *)(v63 + 60);
  v59 = 0;
  v70 = 0;
  while ( 2 )
  {
    v60 = 1;
    switch ( *((uint8_t *)v73 + v65) )
    {
      case 0:
        goto LABEL_63;
      case 1:
        v25 = sub_1943F80(&a3);
        if ( v25 == (uint8_t)sub_1943F80(&a5)
          || (v43 = sub_193BA20((int)(uintptr_t)(&a3)),
              G4_VCALL<uint8_t>(v57, 8, 8, v43) == 0) )
        {
          v60 = 0;
        }
        else if ( a3 != nullptr )
        {
          v44 = a3[2];
          if ( v44 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v44 + 4;
          a4 = -1;
          v60 = 1;
        }
        else
        {
LABEL_63:
          v60 = 1;
        }
        if ( v65 == 3 )
          goto LABEL_16;
        while ( 1 )
        {
          v55 = sub_1943F80(&a3);
          if ( v55 == (uint8_t)sub_1943F80(&a5) )
            break;
          v26 = sub_193BA20((int)(uintptr_t)(&a3));
          if ( G4_VCALL<uint8_t>(v57, 8, 8, v26) == 0 )
            break;
          if ( a3 != nullptr )
          {
            v27 = a3[2];
            if ( v27 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v27 + 4;
            a4 = -1;
          }
        }
        goto LABEL_14;
      case 2:
        if ( (*(uint8_t *)(a7 + 13) & 2) == 0 && v65 != 0 && v66 <= 1 )
        {
          if ( v65 == 1 )
          {
            if ( !v69 && LOBYTE(v73[0]) != 3 && BYTE2(v73[0]) != 1 )
            {
              v60 = 1;
              goto LABEL_15;
            }
          }
          else
          {
            if ( v65 != 2 )
              goto LABEL_53;
            if ( HIBYTE(v73[0]) != 4 )
            {
              v60 = 1;
              if ( !v69 || HIBYTE(v73[0]) != 3 )
                goto LABEL_15;
            }
          }
        }
        v24 = 0;
        v61 = *(uint32_t *)(v63 + 32);
        while ( 1 )
        {
          v54 = sub_1943F80(&a3);
          if ( v54 == (uint8_t)sub_1943F80(&a5) )
            break;
          if ( v24 == v61 )
            goto LABEL_53;
          if ( sub_193BA20((int)(uintptr_t)(&a3)) != *(uint32_t *)(*(uint32_t *)(v63 + 28) + 4 * v24) )
            goto LABEL_87;
          if ( a3 != nullptr )
          {
            v41 = a3[2];
            if ( v41 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v41 + 4;
            a4 = -1;
          }
          ++v24;
        }
        if ( v24 == v61 )
          goto LABEL_53;
LABEL_87:
        v60 = 0;
        if ( v24 != 0 || (*(uint8_t *)(a7 + 13) & 2) != 0 )
          goto LABEL_14;
        goto LABEL_53;
      case 3:
        if ( *(uint32_t *)(v63 + 40) != 0
          && (v45 = sub_1943F80(&a3)) != (uint8_t)sub_1943F80(&a5)
          && sub_193BA20((int)(uintptr_t)(&a3)) == **(uint32_t **)(v63 + 36) )
        {
          v66 = *(uint32_t *)(v63 + 40);
          if ( a3 != nullptr )
          {
            v46 = a3[2];
            if ( v46 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v46 + 4;
            a4 = -1;
            v60 = 1;
          }
          else
          {
LABEL_53:
            v60 = 1;
          }
        }
        else if ( *(uint32_t *)(v63 + 48) != 0
               && (v47 = sub_1943F80(&a3)) != (uint8_t)sub_1943F80(&a5)
               && sub_193BA20((int)(uintptr_t)(&a3)) == **(uint32_t **)(v63 + 44) )
        {
          v66 = *(uint32_t *)(v63 + 48);
          if ( a3 == nullptr )
            goto LABEL_13;
          v48 = a3[2];
          if ( v48 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v48 + 4;
          a4 = -1;
          v60 = 1;
          v70 = 1;
        }
        else
        {
          if ( *(uint32_t *)(v63 + 40) != 0 && *(uint32_t *)(v63 + 48) == 0 )
          {
LABEL_13:
            v60 = 1;
            v70 = 1;
            goto LABEL_14;
          }
          v60 = !v69;
        }
        goto LABEL_14;
      case 4:
        while ( 2 )
        {
          v34 = sub_1943F80(&a3);
          if ( v34 == (uint8_t)sub_1943F80(&a5) )
            goto LABEL_99;
          c = sub_193BA20((int)(uintptr_t)(&a3));
          v36 = (wchar_t *)(wmemchr((const wchar_t *)(v63 + 68), c, 0xAu));
          if ( v36 != nullptr )
          {
            v28 = off_20CB488[((int)(uintptr_t)(v36) - v63 - 64) >> 2];
            v29 = v72;
            v56 = v28;
            v30 = *(uint32_t *)(v72 - 12);
            v31 = v30 + 1;
            if ( (unsigned int)(v30 + 1) > *(uint32_t *)(v72 - 8) || *(int *)(v72 - 4) > 0 )
            {
              sub_1939B80((size_t **)&v72, v30 + 1);
              v29 = v72;
              v30 = *(uint32_t *)(v72 - 12);
            }
            *(uint8_t *)(v29 + v30) = v56;
            v32 = v72;
            if ( (uint32_t *)(v72 - 12) != dword_213B808 )
            {
              *(uint32_t *)(v72 - 4) = 0;
              *(uint32_t *)(v32 - 12) = v31;
              *(uint8_t *)(v32 + v31) = 0;
            }
            ++v59;
            goto LABEL_70;
          }
          if ( c == *(uint32_t *)(v63 + 20) && v68 == 0 )
          {
            if ( *(int *)(v63 + 52) > 0 )
            {
              v68 = 1;
              v67 = v59;
              v59 = 0;
LABEL_70:
              if ( a3 != nullptr )
              {
                v33 = a3[2];
                if ( v33 >= a3[3] )
                  G4_VCALL<void>(a3, 40);
                else
                  a3[2] = v33 + 4;
                a4 = -1;
              }
              continue;
            }
LABEL_99:
            v62 = 1;
            goto LABEL_100;
          }
          break;
        }
        if ( *(uint8_t *)(v63 + 16) == 0 || c != *(uint32_t *)(v63 + 24) || v68 != 0 )
          goto LABEL_99;
        if ( v59 != 0 )
        {
          v37 = v71;
          v38 = *(v71 - 3);
          v39 = v38 + 1;
          if ( v38 + 1 > *(v71 - 2) || (int)*(v71 - 1) > 0 )
          {
            sub_1939B80(&v71, v38 + 1);
            v37 = v71;
            v38 = *(v71 - 3);
          }
          *((uint8_t *)v37 + v38) = v59;
          v40 = v71;
          if ( v71 - 3 == (size_t *)(uintptr_t)(dword_213B808) )
          {
            v59 = 0;
          }
          else
          {
            *(v71 - 1) = 0;
            *(v40 - 3) = v39;
            v59 = 0;
            *((uint8_t *)v40 + v39) = 0;
          }
          goto LABEL_70;
        }
        v62 = 0;
LABEL_100:
        v42 = v62;
        if ( *(uint32_t *)(v72 - 12) == 0 )
          v42 = 0;
        v60 = v42;
LABEL_14:
        if ( v64 <= 3 )
        {
LABEL_15:
          ++v65;
          ++v64;
          if ( v60 != 0 )
            continue;
        }
LABEL_16:
        if ( v66 <= 1 )
        {
          if ( v60 != 0 )
            goto LABEL_23;
          goto LABEL_43;
        }
        if ( v60 == 0 )
          goto LABEL_43;
        v58 = v70 != 0 ? *(uint32_t *)(v63 + 44) : *(uint32_t *)(v63 + 36);
        for ( i = 1; ; ++i )
        {
          v53 = sub_1943F80(&a3);
          if ( v53 == (uint8_t)sub_1943F80(&a5) )
            break;
          if ( i == v66 )
            goto LABEL_23;
          if ( sub_193BA20((int)(uintptr_t)(&a3)) != *(uint32_t *)(v58 + 4 * i) )
            goto LABEL_43;
          if ( a3 != nullptr )
          {
            v49 = a3[2];
            if ( v49 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v49 + 4;
            a4 = -1;
          }
        }
        if ( i != v66 )
        {
LABEL_43:
          *a8 |= 4u;
          goto LABEL_44;
        }
LABEL_23:
        if ( *(uint32_t *)(v72 - 12) > 1u )
        {
          v12 = sub_19383A0(&v72, 48, 0);
          if ( v12 != 0 )
          {
            v13 = *(uint32_t *)(v72 - 12);
            if ( v12 == -1 )
              v12 = v13 - 1;
            if ( v12 > v13 )
              v12 = *(uint32_t *)(v72 - 12);
            g4_std::string::clear((const void **)&v72, 0, v12, 0);
          }
        }
        if ( v70 != 0 )
        {
          v50 = (int *)v72;
          if ( *(int *)(v72 - 4) >= 0 )
          {
            sub_19397C0((const void **)&v72);
            v50 = (int *)v72;
          }
          if ( *(uint8_t *)v50 != 48 )
          {
            if ( *(v50 - 1) >= 0 )
              sub_19397C0((const void **)&v72);
            sub_1939050((const void **)&v72, 0, 0, 1u, 45);
            *(uint32_t *)(v72 - 4) = -1;
          }
        }
        v14 = v71;
        v15 = *(v71 - 3);
        if ( v15 != 0 )
        {
          v16 = v15 + 1;
          v17 = v67;
          if ( v68 == 0 )
            v17 = v59;
          if ( v16 > *(v71 - 2) || (int)*(v71 - 1) > 0 )
          {
            sub_1939B80(&v71, v15 + 1);
            v14 = v71;
            v15 = *(v71 - 3);
          }
          *((uint8_t *)v14 + v15) = v17;
          v18 = v71;
          if ( v71 - 3 != (size_t *)(uintptr_t)(dword_213B808) )
          {
            *(v71 - 1) = 0;
            *(v18 - 3) = v16;
            *((uint8_t *)v18 + v16) = 0;
          }
          if ( (uint8_t)sub_1953E80(*(uint32_t *)(v63 + 8), *(uint32_t *)(v63 + 12), &v71) == 0 )
            *a8 |= 4u;
        }
        if ( v68 != 0 && v59 != *(uint32_t *)(v63 + 52) )
          goto LABEL_43;
        sub_1937C90(a9, &v72);
LABEL_44:
        v19 = sub_1943F80(&a3);
        if ( v19 == (uint8_t)sub_1943F80(&a5) )
          *a8 |= 2u;
        v20 = a4;
        *a1 = (uint32_t)(uintptr_t)(a3);
        v21 = v72;
        a1[1] = v20;
        if ( (uint32_t *)(v21 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v21 - 12));
        }
        v22 = v71 - 3;
        if ( v71 - 3 != (size_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add((volatile int32_t *)v71 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v22);
        return a1;
      default:
        goto LABEL_14;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1944F50  (binary VA: 0x1944f50)
// Original: sub_1944F50
// ----------------------------------------------------------------------------
uint32_t * sub_1944F50(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  int *v10;
  int i;
  unsigned int v12;
  unsigned int v13;
  size_t *v14;
  int v15;
  size_t v16;
  char v17; // bp
  size_t *v18;
  char v19; // di
  int v20;
  int v21;
  size_t *v22;
  int v24;
  char v25; // bp
  int v26;
  unsigned int v27;
  char v28;
  int v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  char v34; // bp
  wchar_t c;
  wchar_t *v36;
  size_t *v37;
  int v38;
  size_t v39;
  size_t *v40;
  unsigned int v41;
  char v42;
  int v43;
  unsigned int v44;
  char v45; // bp
  unsigned int v46;
  char v47; // bp
  unsigned int v48;
  unsigned int v49;
  int *v50;
  int v51;
  typedef int32_t _g4_t_v52;
  typedef char _g4_t_v53;
  typedef char _g4_t_v54;
  typedef char _g4_t_v55;
  typedef char _g4_t_v56;
  typedef void *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef char _g4_t_v60;
  typedef int _g4_t_v61;
  typedef char _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef unsigned int _g4_t_v66;
  typedef char _g4_t_v67;
  typedef char _g4_t_v68;
  typedef bool _g4_t_v69;
  typedef char _g4_t_v70;
  typedef size_t *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t _g4_t_v73[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v52)) > _g4_s0 ? (4u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v53)) > _g4_s1 ? (4u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v54)) > _g4_s2 ? (4u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v55)) > _g4_s3 ? (4u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v56)) > _g4_s4 ? (4u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v57)) > _g4_s5 ? (8u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v58)) > _g4_s6 ? (8u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v59)) > _g4_s7 ? (12u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v60)) > _g4_s8 ? (16u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v61)) > _g4_s9 ? (16u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v62)) > _g4_s10 ? (16u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v63)) > _g4_s11 ? (32u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v64)) > _g4_s12 ? (40u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v65)) > _g4_s13 ? (44u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v66)) > _g4_s14 ? (52u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v67)) > _g4_s15 ? (56u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (61u + sizeof(_g4_t_v68)) > _g4_s16 ? (61u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (62u + sizeof(_g4_t_v69)) > _g4_s17 ? (62u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (63u + sizeof(_g4_t_v70)) > _g4_s18 ? (63u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v71)) > _g4_s19 ? (68u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v72)) > _g4_s20 ? (72u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v73)) > _g4_s21 ? (76u + sizeof(_g4_t_v73)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 4u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 40u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 44u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 61u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 62u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 63u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 68u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 72u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 76u);

  v9 = a7 + 108;
  v57 = sub_193EB50(a7 + 108);
  v52 = sub_1902550(&dword_213B840);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(a7 + 108) + 12) + 4 * v52);
  v63 = *v10;
  if ( *v10 == 0 )
  {
    v51 = opNew(0x70u);
    *(uint32_t *)(v51 + 4) = 0;
    *(uint32_t *)(v51 + 8) = 0;
    *(uint32_t *)v51 = (uint32_t)(uintptr_t)(&off_20AB960);
    *(uint32_t *)(v51 + 12) = 0;
    *(uint8_t *)(v51 + 16) = 0;
    *(uint32_t *)(v51 + 20) = 0;
    *(uint32_t *)(v51 + 24) = 0;
    *(uint32_t *)(v51 + 28) = 0;
    *(uint32_t *)(v51 + 32) = 0;
    *(uint32_t *)(v51 + 36) = 0;
    *(uint32_t *)(v51 + 40) = 0;
    *(uint32_t *)(v51 + 44) = 0;
    *(uint32_t *)(v51 + 48) = 0;
    *(uint32_t *)(v51 + 52) = 0;
    *(uint8_t *)(v51 + 56) = 0;
    *(uint8_t *)(v51 + 57) = 0;
    *(uint8_t *)(v51 + 58) = 0;
    *(uint8_t *)(v51 + 59) = 0;
    *(uint8_t *)(v51 + 60) = 0;
    *(uint8_t *)(v51 + 61) = 0;
    *(uint8_t *)(v51 + 62) = 0;
    *(uint8_t *)(v51 + 63) = 0;
    *(uint8_t *)(v51 + 108) = 0;
    sub_193F450(v51, v9);
    sub_19023D0(*(uint32_t *)(a7 + 108), (volatile int32_t *)v51, v52);
    v63 = *v10;
  }
  v69 = *(uint32_t *)(v63 + 40) != 0 && *(uint32_t *)(v63 + 48) != 0;
  v71 = (size_t *)(&dword_213B814);
  if ( *(uint8_t *)(v63 + 16) != 0 )
    sub_1939B80(&v71, 0x20u);
  v72 = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80((size_t **)&v72, 0x20u);
  v64 = 1;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v73[0] = *(uint32_t *)(v63 + 60);
  v59 = 0;
  v70 = 0;
  while ( 2 )
  {
    v60 = 1;
    switch ( *((uint8_t *)v73 + v65) )
    {
      case 0:
        goto LABEL_63;
      case 1:
        v25 = sub_1943F80(&a3);
        if ( v25 == (uint8_t)sub_1943F80(&a5)
          || (v43 = sub_193BA20((int)(uintptr_t)(&a3)),
              G4_VCALL<uint8_t>(v57, 8, 8, v43) == 0) )
        {
          v60 = 0;
        }
        else if ( a3 != nullptr )
        {
          v44 = a3[2];
          if ( v44 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v44 + 4;
          a4 = -1;
          v60 = 1;
        }
        else
        {
LABEL_63:
          v60 = 1;
        }
        if ( v65 == 3 )
          goto LABEL_16;
        while ( 1 )
        {
          v55 = sub_1943F80(&a3);
          if ( v55 == (uint8_t)sub_1943F80(&a5) )
            break;
          v26 = sub_193BA20((int)(uintptr_t)(&a3));
          if ( G4_VCALL<uint8_t>(v57, 8, 8, v26) == 0 )
            break;
          if ( a3 != nullptr )
          {
            v27 = a3[2];
            if ( v27 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v27 + 4;
            a4 = -1;
          }
        }
        goto LABEL_14;
      case 2:
        if ( (*(uint8_t *)(a7 + 13) & 2) == 0 && v65 != 0 && v66 <= 1 )
        {
          if ( v65 == 1 )
          {
            if ( !v69 && LOBYTE(v73[0]) != 3 && BYTE2(v73[0]) != 1 )
            {
              v60 = 1;
              goto LABEL_15;
            }
          }
          else
          {
            if ( v65 != 2 )
              goto LABEL_53;
            if ( HIBYTE(v73[0]) != 4 )
            {
              v60 = 1;
              if ( !v69 || HIBYTE(v73[0]) != 3 )
                goto LABEL_15;
            }
          }
        }
        v24 = 0;
        v61 = *(uint32_t *)(v63 + 32);
        while ( 1 )
        {
          v54 = sub_1943F80(&a3);
          if ( v54 == (uint8_t)sub_1943F80(&a5) )
            break;
          if ( v24 == v61 )
            goto LABEL_53;
          if ( sub_193BA20((int)(uintptr_t)(&a3)) != *(uint32_t *)(*(uint32_t *)(v63 + 28) + 4 * v24) )
            goto LABEL_87;
          if ( a3 != nullptr )
          {
            v41 = a3[2];
            if ( v41 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v41 + 4;
            a4 = -1;
          }
          ++v24;
        }
        if ( v24 == v61 )
          goto LABEL_53;
LABEL_87:
        v60 = 0;
        if ( v24 != 0 || (*(uint8_t *)(a7 + 13) & 2) != 0 )
          goto LABEL_14;
        goto LABEL_53;
      case 3:
        if ( *(uint32_t *)(v63 + 40) != 0
          && (v45 = sub_1943F80(&a3)) != (uint8_t)sub_1943F80(&a5)
          && sub_193BA20((int)(uintptr_t)(&a3)) == **(uint32_t **)(v63 + 36) )
        {
          v66 = *(uint32_t *)(v63 + 40);
          if ( a3 != nullptr )
          {
            v46 = a3[2];
            if ( v46 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v46 + 4;
            a4 = -1;
            v60 = 1;
          }
          else
          {
LABEL_53:
            v60 = 1;
          }
        }
        else if ( *(uint32_t *)(v63 + 48) != 0
               && (v47 = sub_1943F80(&a3)) != (uint8_t)sub_1943F80(&a5)
               && sub_193BA20((int)(uintptr_t)(&a3)) == **(uint32_t **)(v63 + 44) )
        {
          v66 = *(uint32_t *)(v63 + 48);
          if ( a3 == nullptr )
            goto LABEL_13;
          v48 = a3[2];
          if ( v48 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v48 + 4;
          a4 = -1;
          v60 = 1;
          v70 = 1;
        }
        else
        {
          if ( *(uint32_t *)(v63 + 40) != 0 && *(uint32_t *)(v63 + 48) == 0 )
          {
LABEL_13:
            v60 = 1;
            v70 = 1;
            goto LABEL_14;
          }
          v60 = !v69;
        }
        goto LABEL_14;
      case 4:
        while ( 2 )
        {
          v34 = sub_1943F80(&a3);
          if ( v34 == (uint8_t)sub_1943F80(&a5) )
            goto LABEL_99;
          c = sub_193BA20((int)(uintptr_t)(&a3));
          v36 = (wchar_t *)(wmemchr((const wchar_t *)(v63 + 68), c, 0xAu));
          if ( v36 != nullptr )
          {
            v28 = off_20CB488[((int)(uintptr_t)(v36) - v63 - 64) >> 2];
            v29 = v72;
            v56 = v28;
            v30 = *(uint32_t *)(v72 - 12);
            v31 = v30 + 1;
            if ( (unsigned int)(v30 + 1) > *(uint32_t *)(v72 - 8) || *(int *)(v72 - 4) > 0 )
            {
              sub_1939B80((size_t **)&v72, v30 + 1);
              v29 = v72;
              v30 = *(uint32_t *)(v72 - 12);
            }
            *(uint8_t *)(v29 + v30) = v56;
            v32 = v72;
            if ( (uint32_t *)(v72 - 12) != dword_213B808 )
            {
              *(uint32_t *)(v72 - 4) = 0;
              *(uint32_t *)(v32 - 12) = v31;
              *(uint8_t *)(v32 + v31) = 0;
            }
            ++v59;
            goto LABEL_70;
          }
          if ( c == *(uint32_t *)(v63 + 20) && v68 == 0 )
          {
            if ( *(int *)(v63 + 52) > 0 )
            {
              v68 = 1;
              v67 = v59;
              v59 = 0;
LABEL_70:
              if ( a3 != nullptr )
              {
                v33 = a3[2];
                if ( v33 >= a3[3] )
                  G4_VCALL<void>(a3, 40);
                else
                  a3[2] = v33 + 4;
                a4 = -1;
              }
              continue;
            }
LABEL_99:
            v62 = 1;
            goto LABEL_100;
          }
          break;
        }
        if ( *(uint8_t *)(v63 + 16) == 0 || c != *(uint32_t *)(v63 + 24) || v68 != 0 )
          goto LABEL_99;
        if ( v59 != 0 )
        {
          v37 = v71;
          v38 = *(v71 - 3);
          v39 = v38 + 1;
          if ( v38 + 1 > *(v71 - 2) || (int)*(v71 - 1) > 0 )
          {
            sub_1939B80(&v71, v38 + 1);
            v37 = v71;
            v38 = *(v71 - 3);
          }
          *((uint8_t *)v37 + v38) = v59;
          v40 = v71;
          if ( v71 - 3 == (size_t *)(uintptr_t)(dword_213B808) )
          {
            v59 = 0;
          }
          else
          {
            *(v71 - 1) = 0;
            *(v40 - 3) = v39;
            v59 = 0;
            *((uint8_t *)v40 + v39) = 0;
          }
          goto LABEL_70;
        }
        v62 = 0;
LABEL_100:
        v42 = v62;
        if ( *(uint32_t *)(v72 - 12) == 0 )
          v42 = 0;
        v60 = v42;
LABEL_14:
        if ( v64 <= 3 )
        {
LABEL_15:
          ++v65;
          ++v64;
          if ( v60 != 0 )
            continue;
        }
LABEL_16:
        if ( v66 <= 1 )
        {
          if ( v60 != 0 )
            goto LABEL_23;
          goto LABEL_43;
        }
        if ( v60 == 0 )
          goto LABEL_43;
        v58 = v70 != 0 ? *(uint32_t *)(v63 + 44) : *(uint32_t *)(v63 + 36);
        for ( i = 1; ; ++i )
        {
          v53 = sub_1943F80(&a3);
          if ( v53 == (uint8_t)sub_1943F80(&a5) )
            break;
          if ( i == v66 )
            goto LABEL_23;
          if ( sub_193BA20((int)(uintptr_t)(&a3)) != *(uint32_t *)(v58 + 4 * i) )
            goto LABEL_43;
          if ( a3 != nullptr )
          {
            v49 = a3[2];
            if ( v49 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v49 + 4;
            a4 = -1;
          }
        }
        if ( i != v66 )
        {
LABEL_43:
          *a8 |= 4u;
          goto LABEL_44;
        }
LABEL_23:
        if ( *(uint32_t *)(v72 - 12) > 1u )
        {
          v12 = sub_19383A0(&v72, 48, 0);
          if ( v12 != 0 )
          {
            v13 = *(uint32_t *)(v72 - 12);
            if ( v12 == -1 )
              v12 = v13 - 1;
            if ( v12 > v13 )
              v12 = *(uint32_t *)(v72 - 12);
            g4_std::string::clear((const void **)&v72, 0, v12, 0);
          }
        }
        if ( v70 != 0 )
        {
          v50 = (int *)v72;
          if ( *(int *)(v72 - 4) >= 0 )
          {
            sub_19397C0((const void **)&v72);
            v50 = (int *)v72;
          }
          if ( *(uint8_t *)v50 != 48 )
          {
            if ( *(v50 - 1) >= 0 )
              sub_19397C0((const void **)&v72);
            sub_1939050((const void **)&v72, 0, 0, 1u, 45);
            *(uint32_t *)(v72 - 4) = -1;
          }
        }
        v14 = v71;
        v15 = *(v71 - 3);
        if ( v15 != 0 )
        {
          v16 = v15 + 1;
          v17 = v67;
          if ( v68 == 0 )
            v17 = v59;
          if ( v16 > *(v71 - 2) || (int)*(v71 - 1) > 0 )
          {
            sub_1939B80(&v71, v15 + 1);
            v14 = v71;
            v15 = *(v71 - 3);
          }
          *((uint8_t *)v14 + v15) = v17;
          v18 = v71;
          if ( v71 - 3 != (size_t *)(uintptr_t)(dword_213B808) )
          {
            *(v71 - 1) = 0;
            *(v18 - 3) = v16;
            *((uint8_t *)v18 + v16) = 0;
          }
          if ( (uint8_t)sub_1953E80(*(uint32_t *)(v63 + 8), *(uint32_t *)(v63 + 12), &v71) == 0 )
            *a8 |= 4u;
        }
        if ( v68 != 0 && v59 != *(uint32_t *)(v63 + 52) )
          goto LABEL_43;
        sub_1937C90(a9, &v72);
LABEL_44:
        v19 = sub_1943F80(&a3);
        if ( v19 == (uint8_t)sub_1943F80(&a5) )
          *a8 |= 2u;
        v20 = a4;
        *a1 = (uint32_t)(uintptr_t)(a3);
        v21 = v72;
        a1[1] = v20;
        if ( (uint32_t *)(v21 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v21 - 12));
        }
        v22 = v71 - 3;
        if ( v71 - 3 != (size_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add((volatile int32_t *)v71 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v22);
        return a1;
      default:
        goto LABEL_14;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1945C50  (binary VA: 0x1945c50)
// Original: sub_1945C50
// ----------------------------------------------------------------------------
uint32_t * sub_1945C50(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, char a7, int a8, uint32_t *a9, int *a10)
{
  void *v10;
  int v11;
  size_t v12;
  int v13;
  int v17;
  int v18;
  typedef uint32_t _g4_t_v15[4];
  typedef int _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v16)) > _g4_s1 ? (28u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  v10 = sub_193EB50(a8 + 108);
  v16[0] = (int)(uintptr_t)(&dword_213B814);
  if ( a7 != 0 )
    sub_1944F50(v15, a2, a3, a4, a5, a6, a8, a9, v16);
  else
    sub_1944250(v15, a2, a3, a4, a5, a6, a8, a9, v16);
  v17 = v15[0];
  v11 = v16[0];
  v18 = v15[1];
  v12 = *(uint32_t *)(v16[0] - 12);
  if ( v12 != 0 )
  {
    sub_194F340((int)(uintptr_t)(a10), v12, 0);
    v13 = *a10;
    if ( *(int *)(*a10 - 4) >= 0 )
    {
      sub_194ED80(a10);
      v13 = *a10;
    }
    G4_VCALL<void>(v10, 44, v16[0], v16[0] + v12, v13);
    v11 = v16[0];
  }
  *a1 = v17;
  a1[1] = v18;
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v11 - 12));
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1945DF0  (binary VA: 0x1945df0)
// Original: sub_1945DF0
// ----------------------------------------------------------------------------
uint32_t * sub_1945DF0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, char a7, int a8, uint32_t *a9, int64_t *a10)
{
  int v10;
  int v11;
  char *v12;
  typedef uint32_t _g4_t_v14[3];
  typedef char *_g4_t_s[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_s)) > _g4_s1 ? (24u + sizeof(_g4_t_s)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 24u);

  s[0] = (char *)&dword_213B814;
  if ( a7 != 0 )
    sub_1944F50(v14, a2, a3, a4, a5, a6, a8, a9, (int *)s);
  else
    sub_1944250(v14, a2, a3, a4, a5, a6, a8, a9, (int *)s);
  v10 = v14[0];
  v11 = v14[1];
  s[1] = (char *)sub_1901FF0();
  g4_std_compat::convert_to_v(s[0], a10, a9);
  v12 = s[0];
  *a1 = v10;
  a1[1] = v11;
  if ( v12 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v12 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v12 - 12);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1945F40  (binary VA: 0x1945f40)
// Original: sub_1945F40
// ----------------------------------------------------------------------------
uint32_t * sub_1945F40(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int *a7, int a8, int a9, int a10, uint32_t *a11)
{
  int *v11;
  void *v12;
  char v13; // si
  int v14;
  int v16;
  int v17;
  int v18;
  int v19;
  const wchar_t *v20;
  int v21;
  int v22;
  unsigned int v23;
  size_t v24;
  int v25;
  size_t v26;
  unsigned int v27;
  char v28; // si
  unsigned int v29;
  int *v30;
  int v31;
  unsigned int v32;
  size_t v33;
  size_t v34;
  size_t v35;
  char v36; // di
  wchar_t v37;
  unsigned int v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef const wchar_t *_g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef int *_g4_t_v47;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v39)) > _g4_s0 ? (0u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v40)) > _g4_s1 ? (12u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v41)) > _g4_s2 ? (16u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v42)) > _g4_s3 ? (20u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v43)) > _g4_s4 ? (24u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v44)) > _g4_s5 ? (28u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v45)) > _g4_s6 ? (32u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v46)) > _g4_s7 ? (36u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v47)) > _g4_s8 ? (40u + sizeof(_g4_t_v47)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);

  v11 = (int *)sub_193EB50(a10 + 108);
  v12 = alloca(4 * a9 + 15);
  v47 = &v40;
  v13 = sub_1943F80(&a3);
  if ( v13 != (uint8_t)sub_1943F80(&a5) )
  {
    v16 = sub_193BA20((int)(uintptr_t)(&a3));
    if ( a9 != 0 )
    {
      v43 = v11;
      v17 = 0;
      v45 = nullptr;
      v18 = v16;
      v19 = a8;
      do
      {
        while ( 1 )
        {
          if ( v18 != **(uint32_t **)(v19 + 4 * v17) )
          {
            v21 = *v43;
            v39 = **(uint32_t **)(v19 + 4 * v17);
            v41 = v19;
            v22 = (*(int (**)(int *, int))(v21 + 24))(v43, v39);
            v19 = v41;
            if ( v18 != v22 )
              break;
          }
          v20 = v45;
          v47[(uint32_t)(uintptr_t)(v45)] = v17++;
          v45 = (const wchar_t *)((char *)v20 + 1);
          if ( v17 == a9 )
            goto LABEL_10;
        }
        ++v17;
      }
      while ( v17 != a9 );
LABEL_10:
      v44 = 0;
      if ( (unsigned int)(uintptr_t)(v45) <= 1 )
      {
LABEL_26:
        if ( v45 == (const wchar_t *)(uintptr_t)((int *)((char *)&dword_0 + 1)) )
        {
          if ( a3 != nullptr )
          {
            v32 = a3[2];
            if ( v32 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v32 + 4;
            a4 = -1;
          }
          v33 = v44 + 1;
          v45 = *(const wchar_t **)(a8 + 4 * *v47);
          v34 = wcslen(v45);
          v35 = v34;
          if ( v33 < v34 )
          {
            v46 = v34;
            do
            {
              v36 = sub_1943F80(&a3);
              if ( v36 == (uint8_t)sub_1943F80(&a5) )
                break;
              v37 = v45[v33];
              if ( v37 != sub_193BA20((int)(uintptr_t)(&a3)) )
                break;
              if ( a3 != nullptr )
              {
                v38 = a3[2];
                if ( v38 >= a3[3] )
                  G4_VCALL<void>(a3, 40);
                else
                  a3[2] = v38 + 4;
                a4 = -1;
              }
              ++v33;
            }
            while ( v33 < v46 );
            v35 = v46;
          }
          if ( v33 == v35 )
          {
            *a7 = *v47;
            goto LABEL_3;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v23 = 1;
          v24 = wcslen(*(const wchar_t **)(a8 + 4 * *v47));
          do
          {
            v25 = v47[v23++];
            v26 = wcslen(*(const wchar_t **)(a8 + 4 * v25));
            if ( v24 > v26 )
              v24 = v26;
          }
          while ( v23 < (unsigned int)(uintptr_t)(v45) );
          if ( a3 != nullptr )
          {
            v27 = a3[2];
            if ( v27 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v27 + 4;
            a4 = -1;
          }
          if ( ++v44 >= v24 )
            break;
          v28 = sub_1943F80(&a3);
          if ( v28 == (uint8_t)sub_1943F80(&a5) )
            break;
          v29 = 0;
          v42 = 4 * v44;
          do
          {
            v30 = &v47[v29];
            v43 = *(int **)(*(uint32_t *)(a8 + 4 * *v30) + v42);
            v31 = sub_193BA20((int)(uintptr_t)(&a3));
            if ( v43 == (int *)v31 )
            {
              ++v29;
            }
            else
            {
              v45 = (const wchar_t *)((char *)v45 - 1);
              *v30 = v47[(uint32_t)(uintptr_t)(v45)];
            }
          }
          while ( v29 < (unsigned int)(uintptr_t)(v45) );
          if ( (unsigned int)(uintptr_t)(v45) <= 1 )
            goto LABEL_26;
        }
      }
    }
  }
  *a11 |= 4u;
LABEL_3:
  v14 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v14;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1946210  (binary VA: 0x1946210)
// Original: sub_1946210
// ----------------------------------------------------------------------------
uint32_t * sub_1946210(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9, wchar_t *s)
{
  int v10;
  int *v11;
  char v12; // bp
  int v13;
  wchar_t *v15;
  wchar_t v16;
  size_t v17;
  char v18;
  unsigned int v19;
  uint32_t *v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char *v28;
  int *v29;
  int v30;
  uint32_t *v31;
  int v32;
  int v33;
  uint32_t *v34;
  int v35;
  int v36;
  int v37;
  int *v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  int v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int *_g4_t_v47;
  typedef int *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint8_t *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int *_g4_t_v54;
  typedef size_t _g4_t_i;
  typedef char _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef size_t _g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t _g4_t_v66[7];
  typedef uint32_t _g4_t_v67[7];
  typedef uint8_t _g4_t_v68[40];
  typedef uint32_t _g4_t_v69[12];
  typedef uint32_t _g4_t_v70[19];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (12u + sizeof(_g4_t_v43)) > _g4_s0 ? (12u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v44)) > _g4_s1 ? (16u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v45)) > _g4_s2 ? (20u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v46)) > _g4_s3 ? (24u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v47)) > _g4_s4 ? (24u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v48)) > _g4_s5 ? (28u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v49)) > _g4_s6 ? (28u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v50)) > _g4_s7 ? (32u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v51)) > _g4_s8 ? (32u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v52)) > _g4_s9 ? (36u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v53)) > _g4_s10 ? (40u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v54)) > _g4_s11 ? (56u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_i)) > _g4_s12 ? (60u + sizeof(_g4_t_i)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v56)) > _g4_s13 ? (60u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v57)) > _g4_s14 ? (60u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v58)) > _g4_s15 ? (60u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v59)) > _g4_s16 ? (64u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v60)) > _g4_s17 ? (68u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v61)) > _g4_s18 ? (72u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v62)) > _g4_s19 ? (76u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v63)) > _g4_s20 ? (84u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v64)) > _g4_s21 ? (88u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v65)) > _g4_s22 ? (92u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v66)) > _g4_s23 ? (96u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v67)) > _g4_s24 ? (124u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v68)) > _g4_s25 ? (152u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (192u + sizeof(_g4_t_v69)) > _g4_s26 ? (192u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (240u + sizeof(_g4_t_v70)) > _g4_s27 ? (240u + sizeof(_g4_t_v70)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 56u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 60u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 60u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 64u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 72u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 76u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 84u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 88u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 92u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 96u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 124u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 152u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 192u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 240u);

  v10 = a7 + 108;
  v60 = (uint32_t *)(sub_19400E0(a7 + 108));
  v11 = (int *)sub_193EB50(v10);
  v59 = wcslen(s);
  v63 = 0;
  for ( i = 0; ; ++i )
  {
    v12 = sub_1943F80(&a3);
    if ( v12 == (uint8_t)sub_1943F80(&a5) || i >= v59 || v63 != 0 )
      break;
    v15 = &s[i];
    if ( G4_VCALL<uint8_t>(v11, 48, *v15, 0, v43, v44, v45, v46, v48, v50, v52) == 37 )
    {
      v17 = i + 1;
      v18 = G4_VCALL<int>(v11, 48, s[i + 1], 0);
      v64 = 0;
      if ( v18 == 79 || v18 == 69 )
      {
        v17 = i + 2;
        v18 = G4_VCALL<int>(v11, 48, s[i + 2], 0);
      }
      switch ( v18 )
      {
        case 'A':
          v20 = (uint32_t *)v60[2];
          v67[0] = v20[11];
          v21 = v20[12];
          v22 = v20[13];
          v67[1] = v21;
          v67[2] = v22;
          v67[3] = *(uint32_t *)(v60[2] + 56);
          v67[4] = *(uint32_t *)(v60[2] + 60);
          v67[5] = *(uint32_t *)(v60[2] + 64);
          v67[6] = *(uint32_t *)(v60[2] + 68);
          sub_1945F40(&v61, a2, a3, a4, a5, a6, a9 + 6, (int)(uintptr_t)(v67), 7, a7, &v63);
          goto LABEL_26;
        case 'B':
          v23 = (uint32_t *)v60[2];
          v70[0] = v23[25];
          v24 = v23[26];
          v25 = v23[27];
          v70[1] = v24;
          v70[2] = v25;
          v70[3] = *(uint32_t *)(v60[2] + 112);
          v70[4] = *(uint32_t *)(v60[2] + 116);
          v70[5] = *(uint32_t *)(v60[2] + 120);
          v70[6] = *(uint32_t *)(v60[2] + 124);
          v70[7] = *(uint32_t *)(v60[2] + 128);
          v70[8] = *(uint32_t *)(v60[2] + 132);
          v70[9] = *(uint32_t *)(v60[2] + 136);
          v70[10] = *(uint32_t *)(v60[2] + 140);
          v70[11] = *(uint32_t *)(v60[2] + 144);
          sub_1945F40(&v61, a2, a3, a4, a5, a6, a9 + 4, (int)(uintptr_t)(v70), 12, a7, &v63);
          goto LABEL_26;
        case 'C':
        case 'Y':
        case 'y':
          sub_1943FE0(&v61, a2, a3, a4, a5, a6, &v64, 0, 9999, 4, a7, &v63);
          a3 = v61;
          a4 = v62;
          i = v17;
          if ( v63 == 0 )
          {
            v26 = v64 + 100;
            if ( v64 >= 0 )
              v26 = v64 - 1900;
            a9[5] = v26;
          }
          continue;
        case 'D':
          v27 = *v11;
          v28 = (char *)(&aHM_0 /* "%H:%M" */[-9]);
          goto LABEL_34;
        case 'H':
          v53 = a7;
          v51 = 23;
          v49 = 0;
          v29 = a9 + 2;
          goto LABEL_36;
        case 'I':
          v53 = a7;
          v51 = 12;
          v49 = 1;
          v29 = a9 + 2;
          goto LABEL_36;
        case 'M':
          v53 = a7;
          v51 = 59;
          v49 = 0;
          v47 = a9 + 1;
          goto LABEL_37;
        case 'R':
          v27 = *v11;
          v28 = (char *)(&aHMS_1 /* "%H:%M:%S" */[-6]);
LABEL_34:
          (*(void (**)(int *, char *))(v27 + 44))(v11, v28);
          v52 = v68;
          v50 = a9;
          v46 = a7;
          v48 = &v63;
          v45 = a6;
          v44 = a5;
          v43 = a4;
          sub_1946210(&v61);
          goto LABEL_26;
        case 'S':
          v53 = a7;
          v51 = 61;
          v49 = 0;
          v47 = a9;
          goto LABEL_37;
        case 'T':
          G4_VCALL<void>(v11, 44, &aBasicStringCop /* "basic_string::copy" */[-9], "basic_string::copy", v68);
          v52 = v68;
          v50 = a9;
          v46 = a7;
          v48 = &v63;
          v45 = a6;
          v44 = a5;
          v43 = a4;
          sub_1946210(&v61);
          goto LABEL_26;
        case 'X':
          v50 = a9;
          v46 = a7;
          v52 = *(uint8_t **)(v60[2] + 16);
          v45 = a6;
          v48 = &v63;
          v43 = a4;
          v44 = a5;
          sub_1946210(&v61);
          goto LABEL_26;
        case 'Z':
          v30 = sub_193BA20((int)(uintptr_t)(&a3));
          if ( G4_VCALL<uint8_t>(v11, 8, 1, v30) == 0 )
            goto LABEL_15;
          sub_1945F40(&v61, a2, a3, a4, a5, a6, &v65, (int)(uintptr_t)(&off_20CB4A0), 14, a7, &v63);
          a4 = v62;
          a3 = v61;
          v56 = sub_1943F80(&a3);
          if ( v56 != (uint8_t)sub_1943F80(&a5) )
          {
            if ( v63 != 0 )
              goto LABEL_27;
            if ( v65 != 0 )
              goto LABEL_27;
            v57 = sub_193BA20((int)(uintptr_t)(&a3));
            if ( v57 != G4_VCALL<int>(v11, 40, 45) )
            {
              v58 = sub_193BA20((int)(uintptr_t)(&a3));
              if ( v58 != G4_VCALL<int>(v11, 40, 43) )
                goto LABEL_27;
            }
            sub_1943FE0(&v61, a2, a3, a4, a5, a6, &v65, 0, 23, 2, a7, &v63);
            a4 = v62;
            a3 = v61;
            sub_1943FE0(&v61, a2, v61, v62, a5, a6, &v65, 0, 59, 2, a7, &v63);
LABEL_26:
            a3 = v61;
            a4 = v62;
          }
LABEL_27:
          i = v17;
          break;
        case 'a':
          v31 = (uint32_t *)v60[2];
          v66[0] = v31[18];
          v32 = v31[19];
          v33 = v31[20];
          v66[1] = v32;
          v66[2] = v33;
          v66[3] = *(uint32_t *)(v60[2] + 84);
          v66[4] = *(uint32_t *)(v60[2] + 88);
          v66[5] = *(uint32_t *)(v60[2] + 92);
          v66[6] = *(uint32_t *)(v60[2] + 96);
          sub_1945F40(&v61, a2, a3, a4, a5, a6, a9 + 6, (int)(uintptr_t)(v66), 7, a7, &v63);
          goto LABEL_26;
        case 'b':
        case 'h':
          v34 = (uint32_t *)v60[2];
          v69[0] = v34[37];
          v35 = v34[38];
          v36 = v34[39];
          v69[1] = v35;
          v69[2] = v36;
          v69[3] = *(uint32_t *)(v60[2] + 160);
          v69[4] = *(uint32_t *)(v60[2] + 164);
          v69[5] = *(uint32_t *)(v60[2] + 168);
          v69[6] = *(uint32_t *)(v60[2] + 172);
          v69[7] = *(uint32_t *)(v60[2] + 176);
          v69[8] = *(uint32_t *)(v60[2] + 180);
          v69[9] = *(uint32_t *)(v60[2] + 184);
          v69[10] = *(uint32_t *)(v60[2] + 188);
          v69[11] = *(uint32_t *)(v60[2] + 192);
          sub_1945F40(&v61, a2, a3, a4, a5, a6, a9 + 4, (int)(uintptr_t)(v69), 12, a7, &v63);
          goto LABEL_26;
        case 'c':
          v50 = a9;
          v46 = a7;
          v52 = *(uint8_t **)(v60[2] + 24);
          v45 = a6;
          v48 = &v63;
          v43 = a4;
          v44 = a5;
          sub_1946210(&v61);
          goto LABEL_26;
        case 'd':
          v53 = a7;
          v51 = 31;
          v49 = 1;
          v29 = a9 + 3;
          goto LABEL_36;
        case 'e':
          v37 = sub_193BA20((int)(uintptr_t)(&a3));
          if ( G4_VCALL<uint8_t>(v11, 8, 8, v37) != 0 )
          {
            v38 = a9 + 3;
            if ( a3 != nullptr )
            {
              v39 = a3[2];
              if ( v39 >= a3[3] )
              {
                v54 = a9 + 3;
                G4_VCALL<void>(a3, 40);
                v38 = v54;
              }
              else
              {
                a3[2] = v39 + 4;
              }
              a4 = -1;
            }
            sub_1943FE0(&v61, a2, a3, a4, a5, a6, v38, 1, 9, 1, a7, &v63);
          }
          else
          {
            v53 = a7;
            v51 = 31;
            v49 = 10;
            v29 = a9 + 3;
LABEL_36:
            v47 = v29;
LABEL_37:
            sub_1943FE0(&v61, a2, a3, a4, a5, a6, v47, v49, v51, 2, v53, &v63);
          }
          goto LABEL_26;
        case 'm':
          sub_1943FE0(&v61, a2, a3, a4, a5, a6, &v64, 1, 12, 2, a7, &v63);
          a3 = v61;
          a4 = v62;
          i = v17;
          if ( v63 == 0 )
            a9[4] = v64 - 1;
          continue;
        case 'n':
          v40 = sub_193BA20((int)(uintptr_t)(&a3));
          if ( G4_VCALL<uint8_t>(v11, 48, v40, 0) == 10 )
            goto LABEL_64;
          goto LABEL_15;
        case 't':
          v42 = sub_193BA20((int)(uintptr_t)(&a3));
          if ( G4_VCALL<uint8_t>(v11, 48, v42, 0) != 9 )
            goto LABEL_15;
LABEL_64:
          i = v17;
          if ( a3 != nullptr )
          {
            v41 = a3[2];
            if ( v41 >= a3[3] )
              G4_VCALL<void>(a3, 40);
            else
              a3[2] = v41 + 4;
            a4 = -1;
            i = v17;
          }
          break;
        case 'x':
          v50 = a9;
          v46 = a7;
          v52 = *(uint8_t **)(v60[2] + 8);
          v45 = a6;
          v48 = &v63;
          v43 = a4;
          v44 = a5;
          sub_1946210(&v61);
          a3 = v61;
          a4 = v62;
          i = v17;
          continue;
        default:
LABEL_15:
          v63 |= 4u;
          i = v17;
          break;
      }
    }
    else
    {
      v16 = *v15;
      if ( v16 == sub_193BA20((int)(uintptr_t)(&a3)) )
      {
        if ( a3 != nullptr )
        {
          v19 = a3[2];
          if ( v19 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v19 + 4;
          a4 = -1;
        }
      }
      else
      {
        v63 |= 4u;
      }
    }
  }
  if ( i != v59 || v63 != 0 )
    *a8 |= 4u;
  v13 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19470F0  (binary VA: 0x19470f0)
// Original: sub_19470F0
// ----------------------------------------------------------------------------
uint32_t * sub_19470F0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t v14[5];

  v9 = a7;
  v10 = a8;
  v11 = (uint32_t *)(sub_19400E0(a7 + 108));
  sub_1946210(v14, a2, a3, a4, a5, a6, v9, v10, a9, *(wchar_t **)(v11[2] + 8));
  a4 = v14[1];
  a3 = (uint32_t *)v14[0];
  LOBYTE(v9) = sub_1943F80(&a3);
  if ( (uint8_t)v9 == (uint8_t)sub_1943F80(&a5) )
    *v10 |= 2u;
  v12 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v12;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19471B0  (binary VA: 0x19471b0)
// Original: sub_19471B0
// ----------------------------------------------------------------------------
uint32_t * sub_19471B0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t v14[5];

  v9 = a7;
  v10 = a8;
  v11 = (uint32_t *)(sub_19400E0(a7 + 108));
  sub_1946210(v14, a2, a3, a4, a5, a6, v9, v10, a9, *(wchar_t **)(v11[2] + 16));
  a4 = v14[1];
  a3 = (uint32_t *)v14[0];
  LOBYTE(v9) = sub_1943F80(&a3);
  if ( (uint8_t)v9 == (uint8_t)sub_1943F80(&a5) )
    *v10 |= 2u;
  v12 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v12;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1947270  (binary VA: 0x1947270)
// Original: sub_1947270
// ----------------------------------------------------------------------------
uint32_t * sub_1947270(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, unsigned int *a7, int a8, unsigned int a9, int a10, uint32_t *a11)
{
  void *v11;
  char v12; // si
  unsigned int v13;
  char v14; // di
  int *v15;
  int v16;
  bool v17;
  unsigned int *v18;
  unsigned int v19;
  int v20;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  void *v30;
  int v31;
  int v32;
  size_t v33;
  unsigned int v34;
  typedef int _g4_t_v35;
  typedef uint8_t _g4_t_v36[8];
  typedef unsigned int _g4_t_v37;
  typedef unsigned int *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef int *_g4_t_v45;
  typedef unsigned int *_g4_t_v46;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v35)) > _g4_s0 ? (12u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v36)) > _g4_s1 ? (24u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v37)) > _g4_s2 ? (32u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v38)) > _g4_s3 ? (36u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v39)) > _g4_s4 ? (40u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v40)) > _g4_s5 ? (44u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v41)) > _g4_s6 ? (48u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v42)) > _g4_s7 ? (52u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v43)) > _g4_s8 ? (56u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v44)) > _g4_s9 ? (60u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v45)) > _g4_s10 ? (64u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v46)) > _g4_s11 ? (68u + sizeof(_g4_t_v46)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 52u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 68u);

  v45 = (int *)sub_193EB50(a10 + 108);
  v11 = alloca(8 * a9 + 15);
  v46 = (unsigned int *)v36;
  v12 = sub_1943F80(&a3);
  if ( v12 == (uint8_t)sub_1943F80(&a5) || (v22 = sub_193BA20((int)(uintptr_t)(&a3)), v44 = 2 * a9, 2 * a9 == 0) )
  {
    v13 = 0;
    v44 = 0;
    v45 = nullptr;
  }
  else
  {
    v23 = 0;
    v43 = 0;
    v24 = a8;
    v25 = v22;
    do
    {
      while ( 1 )
      {
        if ( v25 != **(uint32_t **)(v24 + 4 * v23) )
        {
          v27 = *v45;
          v35 = **(uint32_t **)(v24 + 4 * v23);
          v40 = v24;
          v28 = (*(int (**)(int *, int))(v27 + 24))(v45, v35);
          v24 = v40;
          if ( v25 != v28 )
            break;
        }
        v26 = v43;
        v46[v43] = v23++;
        v43 = v26 + 1;
        if ( v23 == v44 )
          goto LABEL_30;
      }
      ++v23;
    }
    while ( v23 != v44 );
LABEL_30:
    v13 = v43;
    if ( v43 != 0 )
    {
      if ( a3 != nullptr )
      {
        v29 = a3[2];
        if ( v29 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v29 + 4;
        a4 = -1;
      }
      v30 = alloca(4 * v13 + 15);
      v43 = v13;
      v31 = 0;
      v32 = a8;
      v44 = (unsigned int)(uintptr_t)(v36);
      v45 = (int *)v36;
      do
      {
        v33 = wcslen(*(const wchar_t **)(v32 + 4 * v46[v31]));
        *(uint32_t *)(v44 + 4 * v31++) = v33;
      }
      while ( v31 != v43 );
      v13 = v43;
      v44 = 1;
    }
    else
    {
      v44 = 0;
      v45 = nullptr;
    }
  }
  v42 = 4 * v44;
LABEL_4:
  v14 = sub_1943F80(&a3);
  if ( v14 != (uint8_t)sub_1943F80(&a5) )
  {
    v41 = sub_193BA20((int)(uintptr_t)(&a3));
    if ( v13 == 0 )
      goto LABEL_22;
    v43 = 0;
    v37 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = (int *)&v46[v37];
        v16 = *v15;
        v38 = (unsigned int *)&v45[v37];
        v17 = v44 < *v38;
        v39 = *(uint32_t *)(a8 + 4 * v16);
        if ( v17 )
          break;
        ++v43;
        ++v37;
LABEL_8:
        if ( v37 >= v13 )
          goto LABEL_12;
      }
      if ( v41 == *(uint32_t *)(v39 + v42) )
      {
        ++v37;
        goto LABEL_8;
      }
      --v13;
      v18 = v38;
      v17 = v37 < v13;
      *v15 = v46[v13];
      *v18 = v45[v13];
      if ( !v17 )
      {
LABEL_12:
        if ( v13 == v43 )
          break;
        if ( a3 != nullptr )
        {
          v19 = a3[2];
          if ( v19 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v19 + 4;
          a4 = -1;
        }
        ++v44;
        v42 += 4;
        goto LABEL_4;
      }
    }
  }
  if ( v13 != 1 )
  {
    if ( v13 == 2 && (*v45 == v44 || v45[1] == v44) )
      goto LABEL_40;
LABEL_22:
    *a11 |= 4u;
    goto LABEL_23;
  }
  if ( *v45 != v44 )
    goto LABEL_22;
LABEL_40:
  v34 = *v46;
  if ( a9 <= *v46 )
    v34 = *v46 - a9;
  *a7 = v34;
LABEL_23:
  v20 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v20;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1947560  (binary VA: 0x1947560)
// Original: sub_1947560
// ----------------------------------------------------------------------------
uint32_t * sub_1947560(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int a9)
{
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  char v15; // di
  int v16;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[4];
  typedef unsigned int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[27];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v20)) > _g4_s2 ? (24u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v21)) > _g4_s3 ? (28u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);

  v9 = a7;
  v10 = a8;
  v18 = a7 + 108;
  v11 = (uint32_t *)(sub_19400E0(a7 + 108));
  sub_193EB50(v18);
  v12 = (uint32_t *)v11[2];
  v22[0] = v12[37];
  v13 = v12[38];
  v14 = v12[39];
  v22[1] = v13;
  v22[2] = v14;
  v22[3] = *(uint32_t *)(v11[2] + 160);
  v22[4] = *(uint32_t *)(v11[2] + 164);
  v22[5] = *(uint32_t *)(v11[2] + 168);
  v22[6] = *(uint32_t *)(v11[2] + 172);
  v22[7] = *(uint32_t *)(v11[2] + 176);
  v22[8] = *(uint32_t *)(v11[2] + 180);
  v22[9] = *(uint32_t *)(v11[2] + 184);
  v22[10] = *(uint32_t *)(v11[2] + 188);
  v22[11] = *(uint32_t *)(v11[2] + 192);
  v22[12] = *(uint32_t *)(v11[2] + 100);
  v22[13] = *(uint32_t *)(v11[2] + 104);
  v22[14] = *(uint32_t *)(v11[2] + 108);
  v22[15] = *(uint32_t *)(v11[2] + 112);
  v22[16] = *(uint32_t *)(v11[2] + 116);
  v22[17] = *(uint32_t *)(v11[2] + 120);
  v22[18] = *(uint32_t *)(v11[2] + 124);
  v22[19] = *(uint32_t *)(v11[2] + 128);
  v22[20] = *(uint32_t *)(v11[2] + 132);
  v22[21] = *(uint32_t *)(v11[2] + 136);
  v22[22] = *(uint32_t *)(v11[2] + 140);
  v22[23] = *(uint32_t *)(v11[2] + 144);
  v21 = 0;
  sub_1947270(v19, a2, a3, a4, a5, a6, &v20, (int)(uintptr_t)(v22), 0xCu, v9, &v21);
  a3 = (uint32_t *)v19[0];
  a4 = v19[1];
  if ( v21 != 0 )
    *v10 |= 4u;
  else
    *(uint32_t *)(a9 + 16) = v20;
  v15 = sub_1943F80(&a3);
  if ( v15 == (uint8_t)sub_1943F80(&a5) )
    *v10 |= 2u;
  v16 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v16;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19477D0  (binary VA: 0x19477d0)
// Original: sub_19477D0
// ----------------------------------------------------------------------------
uint32_t * sub_19477D0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int a9)
{
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  char v16; // di
  int v17;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[2];
  typedef unsigned int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[17];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v22)) > _g4_s3 ? (20u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v23)) > _g4_s4 ? (24u + sizeof(_g4_t_v23)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);

  v9 = a7;
  v10 = a8;
  v19 = a7 + 108;
  v11 = (uint32_t *)(sub_19400E0(a7 + 108));
  sub_193EB50(v19);
  v12 = (uint32_t *)v11[2];
  v23[0] = v12[18];
  v13 = v12[19];
  v14 = v12[20];
  v23[1] = v13;
  v23[2] = v14;
  v23[3] = *(uint32_t *)(v11[2] + 84);
  v23[4] = *(uint32_t *)(v11[2] + 88);
  v23[5] = *(uint32_t *)(v11[2] + 92);
  v23[6] = *(uint32_t *)(v11[2] + 96);
  v23[7] = *(uint32_t *)(v11[2] + 44);
  v23[8] = *(uint32_t *)(v11[2] + 48);
  v23[9] = *(uint32_t *)(v11[2] + 52);
  v23[10] = *(uint32_t *)(v11[2] + 56);
  v23[11] = *(uint32_t *)(v11[2] + 60);
  v15 = v11[2];
  v22 = 0;
  v23[12] = *(uint32_t *)(v15 + 64);
  v23[13] = *(uint32_t *)(v11[2] + 68);
  sub_1947270(v20, a2, a3, a4, a5, a6, &v21, (int)(uintptr_t)(v23), 7u, v9, &v22);
  a3 = (uint32_t *)v20[0];
  a4 = v20[1];
  if ( v22 != 0 )
    *v10 |= 4u;
  else
    *(uint32_t *)(a9 + 24) = v21;
  v16 = sub_1943F80(&a3);
  if ( v16 == (uint8_t)sub_1943F80(&a5) )
    *v10 |= 2u;
  v17 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v17;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1947990  (binary VA: 0x1947990)
// Original: sub_1947990
// ----------------------------------------------------------------------------
uint32_t * sub_1947990(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, size_t **a9)
{
  size_t **v9;
  int v10;
  char v11; // si
  wchar_t c;
  char v13;
  char v14;
  size_t *v15;
  int v16;
  unsigned int v17;
  size_t *v18;
  size_t *v19;
  int v20;
  size_t v21;
  size_t *v22;
  unsigned int v23;
  char v24; // si
  size_t *v25;
  int v26;
  unsigned int v27;
  size_t *v28;
  bool v29;
  size_t *v30;
  int v31;
  size_t *v32;
  unsigned int v33;
  char v34; // si
  size_t *v35;
  int v36;
  size_t *v37;
  int v38;
  size_t *v40;
  int v41;
  size_t v42;
  size_t *v43;
  unsigned int v44;
  char v45; // si
  int v46;
  size_t *v47;
  int v48;
  size_t v49;
  size_t *v50;
  size_t *v51;
  int v52;
  size_t v53;
  size_t *v54;
  size_t *v55;
  int v56;
  size_t v57;
  size_t *v58;
  size_t *v59;
  int v60;
  size_t v61;
  size_t *v62;
  unsigned int v63;
  char v64; // si
  int v65;
  bool v66;
  size_t *v67;
  int v68;
  int v69;
  char v70; // si
  size_t *v71;
  size_t *v72;
  int v73;
  size_t v74;
  size_t *v75;
  int v76;
  bool v77;
  unsigned int v78;
  char v79; // bp
  size_t *v80;
  int v81;
  size_t *v82;
  unsigned int v83;
  size_t *v84;
  int v85;
  unsigned int v86;
  size_t *v87;
  unsigned int v88;
  unsigned int v89;
  typedef size_t **_g4_t_v90;
  typedef unsigned int _g4_t_v91;
  typedef char _g4_t_v92;
  typedef char _g4_t_v93;
  typedef unsigned int _g4_t_v94;
  typedef char _g4_t_v95;
  typedef unsigned int _g4_t_v96;
  typedef char _g4_t_v97;
  typedef char _g4_t_v98;
  typedef char _g4_t_v99;
  typedef unsigned int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef char _g4_t_v102;
  typedef wchar_t *_g4_t_v103;
  typedef wchar_t *_g4_t_s;
  typedef char _g4_t_v105;
  typedef size_t *_g4_t_v106[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v90)) > _g4_s0 ? (0u + sizeof(_g4_t_v90)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v91)) > _g4_s1 ? (0u + sizeof(_g4_t_v91)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v92)) > _g4_s2 ? (0u + sizeof(_g4_t_v92)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v93)) > _g4_s3 ? (4u + sizeof(_g4_t_v93)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v94)) > _g4_s4 ? (4u + sizeof(_g4_t_v94)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v95)) > _g4_s5 ? (4u + sizeof(_g4_t_v95)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v96)) > _g4_s6 ? (4u + sizeof(_g4_t_v96)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v97)) > _g4_s7 ? (8u + sizeof(_g4_t_v97)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v98)) > _g4_s8 ? (8u + sizeof(_g4_t_v98)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v99)) > _g4_s9 ? (8u + sizeof(_g4_t_v99)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v100)) > _g4_s10 ? (8u + sizeof(_g4_t_v100)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v101)) > _g4_s11 ? (12u + sizeof(_g4_t_v101)) : _g4_s11,
    _g4_s13 = (23u + sizeof(_g4_t_v102)) > _g4_s12 ? (23u + sizeof(_g4_t_v102)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v103)) > _g4_s13 ? (24u + sizeof(_g4_t_v103)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_s)) > _g4_s14 ? (28u + sizeof(_g4_t_s)) : _g4_s14,
    _g4_s16 = (42u + sizeof(_g4_t_v105)) > _g4_s15 ? (42u + sizeof(_g4_t_v105)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v106)) > _g4_s16 ? (44u + sizeof(_g4_t_v106)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 0u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 0u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 0u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 4u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 4u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 4u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 4u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 8u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 8u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 8u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 8u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 12u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 23u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 24u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 28u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 42u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 44u);

  v9 = a9;
  v10 = sub_1943C10((int)(uintptr_t)(&v105), (int *)(a7 + 108));
  v11 = sub_1943F80(&a3);
  if ( v11 == (uint8_t)sub_1943F80(&a5) )
  {
    c = 0;
LABEL_3:
    v13 = *(uint8_t *)(v10 + 16);
    v101 = 0;
    v93 = 0;
    v97 = 1;
    goto LABEL_4;
  }
  v76 = sub_193BA20((int)(uintptr_t)(&a3));
  c = v76;
  v77 = v76 == *(uint32_t *)(v10 + 192);
  if ( v76 == *(uint32_t *)(v10 + 192) || v76 == *(uint32_t *)(v10 + 188) )
  {
    v13 = *(uint8_t *)(v10 + 16);
    if ( (v13 == 0 || c != *(uint32_t *)(v10 + 40)) && c != *(uint32_t *)(v10 + 36) )
    {
      v95 = !v77 ? 45 : 43;
      v80 = *v9;
      v81 = *(*v9 - 3);
      v91 = v81 + 1;
      if ( v81 + 1 > *(*v9 - 2) || (int)*(v80 - 1) > 0 )
      {
        sub_1939B80(v9, v91);
        v80 = *v9;
        v81 = *(*v9 - 3);
      }
      *((uint8_t *)v80 + v81) = v95;
      v82 = *v9;
      if ( *v9 - 3 != (size_t *)(uintptr_t)(dword_213B808) )
      {
        *(v82 - 1) = 0;
        *(v82 - 3) = v91;
        *((uint8_t *)v82 + v91) = 0;
      }
      if ( a3 != nullptr )
      {
        v83 = a3[2];
        if ( v83 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v83 + 4;
        a4 = -1;
      }
      v92 = sub_1943F80(&a3);
      if ( v92 == (uint8_t)sub_1943F80(&a5) )
        goto LABEL_3;
      c = sub_193BA20((int)(uintptr_t)(&a3));
      v13 = *(uint8_t *)(v10 + 16);
    }
  }
  else
  {
    v13 = *(uint8_t *)(v10 + 16);
  }
  v101 = 0;
  v93 = 0;
  v90 = v9;
  while ( (v13 == 0 || *(uint32_t *)(v10 + 40) != c) && *(uint32_t *)(v10 + 36) != c && *(uint32_t *)(v10 + 204) == c )
  {
    if ( v93 == 0 )
    {
      v84 = *v90;
      v85 = *(*v90 - 3);
      v86 = v85 + 1;
      if ( v85 + 1 > *(*v90 - 2) || (int)*(v84 - 1) > 0 )
      {
        sub_1939B80(v90, v86);
        v84 = *v90;
        v85 = *(*v90 - 3);
      }
      *((uint8_t *)v84 + v85) = 48;
      v87 = *v90;
      if ( *v90 - 3 == (size_t *)(uintptr_t)(dword_213B808) )
      {
        v93 = 1;
      }
      else
      {
        *(v87 - 1) = 0;
        *(v87 - 3) = v86;
        v93 = 1;
        *((uint8_t *)v87 + v86) = 0;
      }
    }
    ++v101;
    if ( a3 != nullptr )
    {
      v78 = a3[2];
      if ( v78 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v78 + 4;
      a4 = -1;
    }
    v79 = sub_1943F80(&a3);
    if ( v79 == (uint8_t)sub_1943F80(&a5) )
    {
      v9 = v90;
      v97 = 1;
      v13 = *(uint8_t *)(v10 + 16);
      goto LABEL_4;
    }
    c = sub_193BA20((int)(uintptr_t)(&a3));
    v13 = *(uint8_t *)(v10 + 16);
  }
  v9 = v90;
  v97 = 0;
LABEL_4:
  v106[0] = (size_t *)(&dword_213B814);
  if ( v13 != 0 )
    sub_1939B80(v106, 0x20u);
  s = (wchar_t *)(v10 + 204);
  if ( *(uint8_t *)(v10 + 292) == 0 )
  {
    v29 = v97 == 0;
    v102 = 0;
    v98 = 0;
    if ( !v29 )
      goto LABEL_52;
LABEL_41:
    if ( c <= 47 )
      goto LABEL_62;
LABEL_42:
    if ( c <= 57 )
    {
      v30 = *v9;
      v31 = *(*v9 - 3);
      v94 = v31 + 1;
      if ( v31 + 1 > *(*v9 - 2) || (int)*(v30 - 1) > 0 )
      {
        sub_1939B80(v9, v94);
        v30 = *v9;
        v31 = *(*v9 - 3);
      }
      *((uint8_t *)v30 + v31) = c;
      v32 = *v9;
      if ( *v9 - 3 == (size_t *)(uintptr_t)(dword_213B808) )
      {
        v93 = 1;
      }
      else
      {
        v88 = v94;
        *(v32 - 1) = 0;
        *(v32 - 3) = v94;
        v93 = 1;
        *((uint8_t *)v32 + v88) = 0;
      }
      goto LABEL_47;
    }
    while ( 1 )
    {
LABEL_62:
      if ( *(uint32_t *)(v10 + 36) != c || v102 != 0 || v98 != 0 )
      {
        if ( *(uint32_t *)(v10 + 260) != c && *(uint32_t *)(v10 + 284) != c || v98 != 0 || v93 == 0 )
          goto LABEL_52;
        v40 = *v9;
        v41 = *(*v9 - 3);
        v42 = v41 + 1;
        if ( v41 + 1 > *(*v9 - 2) || (int)*(v40 - 1) > 0 )
        {
          sub_1939B80(v9, v41 + 1);
          v40 = *v9;
          v41 = *(*v9 - 3);
        }
        *((uint8_t *)v40 + v41) = 101;
        v43 = *v9;
        if ( *v9 - 3 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          *(v43 - 1) = 0;
          *(v43 - 3) = v42;
          *((uint8_t *)v43 + v42) = 0;
        }
        if ( a3 != nullptr )
        {
          v44 = a3[2];
          if ( v44 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v44 + 4;
          a4 = -1;
        }
        v45 = sub_1943F80(&a3);
        if ( v45 == (uint8_t)sub_1943F80(&a5) )
        {
LABEL_174:
          v98 = 1;
          goto LABEL_52;
        }
        v46 = sub_193BA20((int)(uintptr_t)(&a3));
        c = v46;
        v99 = 43;
        if ( v46 != *(uint32_t *)(v10 + 192) )
        {
          v98 = 1;
          if ( v46 != *(uint32_t *)(v10 + 188) )
            goto LABEL_41;
          v99 = 45;
        }
        v47 = *v9;
        v48 = *(*v9 - 3);
        v49 = v48 + 1;
        if ( v48 + 1 > *(*v9 - 2) || (int)*(v47 - 1) > 0 )
        {
          sub_1939B80(v9, v48 + 1);
          v47 = *v9;
          v48 = *(*v9 - 3);
        }
        *((uint8_t *)v47 + v48) = v99;
        v50 = *v9;
        if ( *v9 - 3 == (size_t *)(uintptr_t)(dword_213B808) )
        {
          v98 = 1;
        }
        else
        {
          *(v50 - 1) = 0;
          *(v50 - 3) = v49;
          v98 = 1;
          *((uint8_t *)v50 + v49) = 0;
        }
      }
      else
      {
        v72 = *v9;
        v73 = *(*v9 - 3);
        v74 = v73 + 1;
        if ( v73 + 1 > *(*v9 - 2) || (int)*(v72 - 1) > 0 )
        {
          sub_1939B80(v9, v73 + 1);
          v72 = *v9;
          v73 = *(*v9 - 3);
        }
        *((uint8_t *)v72 + v73) = 46;
        v75 = *v9;
        if ( *v9 - 3 == (size_t *)(uintptr_t)(dword_213B808) )
        {
          v102 = 1;
        }
        else
        {
          *(v75 - 1) = 0;
          *(v75 - 3) = v74;
          v102 = 1;
          *((uint8_t *)v75 + v74) = 0;
        }
      }
LABEL_47:
      if ( a3 != nullptr )
      {
        v33 = a3[2];
        if ( v33 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v33 + 4;
        a4 = -1;
      }
      v34 = sub_1943F80(&a3);
      if ( v34 == (uint8_t)sub_1943F80(&a5) )
        goto LABEL_52;
      c = sub_193BA20((int)(uintptr_t)(&a3));
      if ( c > 47 )
        goto LABEL_42;
    }
  }
  if ( v97 != 0 )
  {
    v98 = 0;
    v102 = 0;
  }
  else
  {
    v14 = *(uint8_t *)(v10 + 16);
    v98 = 0;
    v102 = 0;
    while ( v14 == 0 || *(uint32_t *)(v10 + 40) != c )
    {
LABEL_11:
      if ( *(uint32_t *)(v10 + 36) == c )
      {
        if ( v102 == 0 && v98 == 0 )
        {
          v15 = v106[0];
          v16 = *(v106[0] - 3);
          if ( v16 != 0 )
          {
            v17 = v16 + 1;
            if ( v16 + 1 > *(v106[0] - 2) || *((int *)v106[0] - 1) > 0 )
            {
              sub_1939B80(v106, v17);
              v15 = v106[0];
              v16 = *(v106[0] - 3);
            }
            *((uint8_t *)v15 + v16) = v101;
            v18 = v106[0];
            if ( v106[0] - 3 != (size_t *)(uintptr_t)(dword_213B808) )
            {
              *(v106[0] - 1) = 0;
              *(v18 - 3) = v17;
              *((uint8_t *)v18 + v17) = 0;
            }
          }
          v19 = *v9;
          v20 = *(*v9 - 3);
          v21 = v20 + 1;
          if ( v20 + 1 > *(*v9 - 2) || (int)*(v19 - 1) > 0 )
          {
            sub_1939B80(v9, v20 + 1);
            v19 = *v9;
            v20 = *(*v9 - 3);
          }
          *((uint8_t *)v19 + v20) = 46;
          v22 = *v9;
          if ( *v9 - 3 == (size_t *)(uintptr_t)(dword_213B808) )
          {
            v102 = 1;
          }
          else
          {
            *(v22 - 1) = 0;
            *(v22 - 3) = v21;
            v102 = 1;
            *((uint8_t *)v22 + v21) = 0;
          }
          goto LABEL_25;
        }
        goto LABEL_52;
      }
      v103 = wmemchr(s, c, 0xAu);
      if ( v103 != nullptr )
      {
        v51 = *v9;
        v52 = *(*v9 - 3);
        v53 = v52 + 1;
        if ( v52 + 1 > *(*v9 - 2) || (int)*(v51 - 1) > 0 )
        {
          sub_1939B80(v9, v52 + 1);
          v51 = *v9;
          v52 = *(*v9 - 3);
        }
        *((uint8_t *)v51 + v52) = v103 - s + 48;
        v54 = *v9;
        if ( *v9 - 3 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          *(v54 - 1) = 0;
          *(v54 - 3) = v53;
          *((uint8_t *)v54 + v53) = 0;
        }
        ++v101;
        v93 = 1;
        goto LABEL_25;
      }
      if ( *(uint32_t *)(v10 + 260) != c && *(uint32_t *)(v10 + 284) != c || v98 != 0 || v93 == 0 )
        goto LABEL_52;
      v55 = v106[0];
      v56 = *(v106[0] - 3);
      if ( v56 != 0 && v102 == 0 )
      {
        v57 = v56 + 1;
        if ( v56 + 1 > *(v106[0] - 2) || *((int *)v106[0] - 1) > 0 )
        {
          sub_1939B80(v106, v56 + 1);
          v55 = v106[0];
          v56 = *(v106[0] - 3);
        }
        *((uint8_t *)v55 + v56) = v101;
        v58 = v106[0];
        if ( v106[0] - 3 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          *(v106[0] - 1) = 0;
          *(v58 - 3) = v57;
          *((uint8_t *)v58 + v57) = 0;
        }
      }
      v59 = *v9;
      v60 = *(*v9 - 3);
      v61 = v60 + 1;
      if ( v60 + 1 > *(*v9 - 2) || (int)*(v59 - 1) > 0 )
      {
        sub_1939B80(v9, v60 + 1);
        v59 = *v9;
        v60 = *(*v9 - 3);
      }
      *((uint8_t *)v59 + v60) = 101;
      v62 = *v9;
      if ( *v9 - 3 != (size_t *)(uintptr_t)(dword_213B808) )
      {
        *(v62 - 1) = 0;
        *(v62 - 3) = v61;
        *((uint8_t *)v62 + v61) = 0;
      }
      if ( a3 != nullptr )
      {
        v63 = a3[2];
        if ( v63 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v63 + 4;
        a4 = -1;
      }
      v64 = sub_1943F80(&a3);
      if ( v64 == (uint8_t)sub_1943F80(&a5) )
        goto LABEL_174;
      v65 = sub_193BA20((int)(uintptr_t)(&a3));
      c = v65;
      v66 = v65 == *(uint32_t *)(v10 + 192);
      if ( v65 == *(uint32_t *)(v10 + 192) || v65 == *(uint32_t *)(v10 + 188) )
      {
        v14 = *(uint8_t *)(v10 + 16);
        if ( (v14 == 0 || c != *(uint32_t *)(v10 + 40)) && c != *(uint32_t *)(v10 + 36) )
        {
          v67 = *v9;
          v68 = !v66 ? 2 : 0;
          v69 = *(*v9 - 3);
          v70 = v68 + 43;
          v100 = v69 + 1;
          if ( v69 + 1 > *(*v9 - 2) || (int)*(v67 - 1) > 0 )
          {
            sub_1939B80(v9, v100);
            v67 = *v9;
            v69 = *(*v9 - 3);
          }
          *((uint8_t *)v67 + v69) = v70;
          v71 = *v9;
          if ( *v9 - 3 == (size_t *)(uintptr_t)(dword_213B808) )
          {
            v98 = 1;
          }
          else
          {
            v89 = v100;
            *(v71 - 1) = 0;
            *(v71 - 3) = v100;
            v98 = 1;
            *((uint8_t *)v71 + v89) = 0;
          }
          goto LABEL_25;
        }
        v98 = 1;
      }
      else
      {
        v14 = *(uint8_t *)(v10 + 16);
        v98 = 1;
      }
    }
    while ( v102 == 0 && v98 == 0 )
    {
      if ( v101 == 0 )
      {
        g4_std::string::clear((const void **)v9, 0, *(*v9 - 3), 0);
        break;
      }
      v25 = v106[0];
      v26 = *(v106[0] - 3);
      v27 = v26 + 1;
      if ( v26 + 1 > *(v106[0] - 2) || *((int *)v106[0] - 1) > 0 )
      {
        sub_1939B80(v106, v27);
        v25 = v106[0];
        v26 = *(v106[0] - 3);
      }
      *((uint8_t *)v25 + v26) = v101;
      v28 = v106[0];
      if ( v106[0] - 3 == (size_t *)(uintptr_t)(dword_213B808) )
      {
        v101 = 0;
      }
      else
      {
        *(v106[0] - 1) = 0;
        *(v28 - 3) = v27;
        v101 = 0;
        *((uint8_t *)v28 + v27) = 0;
      }
LABEL_25:
      if ( a3 != nullptr )
      {
        v23 = a3[2];
        if ( v23 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v23 + 4;
        a4 = -1;
      }
      v24 = sub_1943F80(&a3);
      if ( v24 == (uint8_t)sub_1943F80(&a5) )
        break;
      c = sub_193BA20((int)(uintptr_t)(&a3));
      if ( *(uint8_t *)(v10 + 16) == 0 || *(uint32_t *)(v10 + 40) != c )
        goto LABEL_11;
    }
  }
LABEL_52:
  v35 = v106[0];
  v36 = *(v106[0] - 3);
  v37 = v106[0] - 3;
  if ( v36 != 0 )
  {
    v37 = v106[0] - 3;
    if ( v102 == 0 && v98 == 0 )
    {
      v96 = v36 + 1;
      if ( v36 + 1 > *(v106[0] - 2) || *((int *)v106[0] - 1) > 0 )
      {
        sub_1939B80(v106, v96);
        v35 = v106[0];
        v36 = *(v106[0] - 3);
      }
      *((uint8_t *)v35 + v36) = v101;
      v35 = v106[0];
      v37 = v106[0] - 3;
      if ( v106[0] - 3 != (size_t *)(uintptr_t)(dword_213B808) )
      {
        *(v106[0] - 1) = 0;
        *(v35 - 3) = v96;
        *((uint8_t *)v35 + v96) = 0;
        v35 = v106[0];
        v37 = v106[0] - 3;
      }
    }
    if ( (uint8_t)sub_1953E80(*(uint32_t *)(v10 + 8), *(uint32_t *)(v10 + 12), v106) == 0 )
      *a8 = 4;
  }
  v38 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v38;
  if ( v37 != (size_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add((volatile int32_t *)v35 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v37);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19486B0  (binary VA: 0x19486b0)
// Original: sub_19486B0
// ----------------------------------------------------------------------------
uint32_t * sub_19486B0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  uint32_t *v9;
  int v10;
  char *v11;
  typedef char _g4_t_v13;
  typedef uint32_t _g4_t_v14[3];
  typedef char *_g4_t_s[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v13)) > _g4_s0 ? (7u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_s)) > _g4_s2 ? (24u + sizeof(_g4_t_s)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 7u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 24u);

  v9 = (uint32_t *)a8;
  s[0] = (char *)&dword_213B814;
  sub_1939B80((size_t **)s, 0x20u);
  sub_1947990(v14, a2, a3, a4, a5, a6, a7, v9, (size_t **)s);
  a3 = (uint32_t *)v14[0];
  a4 = v14[1];
  s[1] = (char *)sub_1901FF0();
  g4_std_compat::convert_to_v(s[0], (int64_t *)a9, v9);
  v13 = sub_1943F80(&a3);
  if ( v13 == (uint8_t)sub_1943F80(&a5) )
    *v9 |= 2u;
  v10 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  v11 = s[0];
  a1[1] = v10;
  if ( v11 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v11 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v11 - 12);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1948820  (binary VA: 0x1948820)
// Original: sub_1948820
// ----------------------------------------------------------------------------
uint32_t * sub_1948820(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  uint32_t *v9;
  int v10;
  char *v11;
  typedef char _g4_t_v13;
  typedef uint32_t _g4_t_v14[3];
  typedef char *_g4_t_nptr[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v13)) > _g4_s0 ? (7u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_nptr)) > _g4_s2 ? (24u + sizeof(_g4_t_nptr)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 7u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 24u);

  v9 = (uint32_t *)a8;
  nptr[0] = (char *)&dword_213B814;
  sub_1939B80((size_t **)nptr, 0x20u);
  sub_1947990(v14, a2, a3, a4, a5, a6, a7, v9, (size_t **)nptr);
  a3 = (uint32_t *)v14[0];
  a4 = v14[1];
  nptr[1] = (char *)sub_1901FF0();
  g4_std_compat::convert_to_v(nptr[0], (double *)a9, v9);
  v13 = sub_1943F80(&a3);
  if ( v13 == (uint8_t)sub_1943F80(&a5) )
    *v9 |= 2u;
  v10 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  v11 = nptr[0];
  a1[1] = v10;
  if ( v11 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v11 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v11 - 12);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1948990  (binary VA: 0x1948990)
// Original: sub_1948990
// ----------------------------------------------------------------------------
uint32_t * sub_1948990(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  uint32_t *v9;
  int v10;
  char *v11;
  typedef char _g4_t_v13;
  typedef uint32_t _g4_t_v14[3];
  typedef char *_g4_t_nptr[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v13)) > _g4_s0 ? (7u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_nptr)) > _g4_s2 ? (24u + sizeof(_g4_t_nptr)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 7u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 24u);

  v9 = (uint32_t *)a8;
  nptr[0] = (char *)&dword_213B814;
  sub_1939B80((size_t **)nptr, 0x20u);
  sub_1947990(v14, a2, a3, a4, a5, a6, a7, v9, (size_t **)nptr);
  a3 = (uint32_t *)v14[0];
  a4 = v14[1];
  nptr[1] = (char *)sub_1901FF0();
  g4_std_compat::convert_to_v(nptr[0], (float *)a9, v9);
  v13 = sub_1943F80(&a3);
  if ( v13 == (uint8_t)sub_1943F80(&a5) )
    *v9 |= 2u;
  v10 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  v11 = nptr[0];
  a1[1] = v10;
  if ( v11 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v11 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v11 - 12);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1948B00  (binary VA: 0x1948b00)
// Original: sub_1948B00
// ----------------------------------------------------------------------------
uint32_t * sub_1948B00(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  wchar_t c;
  char v15;
  wchar_t *v16;
  int v17;
  bool v18;
  unsigned int v19;
  char v20; // si
  char v21; // si
  size_t *v22;
  int v23;
  size_t *v24;
  int v25;
  size_t *v27;
  size_t *v28;
  char v29;
  size_t *v30;
  int v31;
  size_t v32;
  size_t *v33;
  int v34;
  bool v35;
  unsigned int v36;
  char v37; // si
  int v38;
  unsigned int v39;
  char v40; // bp
  int v41;
  unsigned int v42;
  int v43;
  typedef size_t *_g4_t_v44;
  typedef size_t *_g4_t_v45;
  typedef int32_t _g4_t_v46;
  typedef char _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef char _g4_t_v50;
  typedef int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef wchar_t *_g4_t_s;
  typedef size_t _g4_t_n;
  typedef unsigned int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef char _g4_t_v58;
  typedef char _g4_t_v59;
  typedef char _g4_t_v60;
  typedef bool _g4_t_v61;
  typedef size_t *_g4_t_v62[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v44)) > _g4_s0 ? (8u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v45)) > _g4_s1 ? (12u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v46)) > _g4_s2 ? (16u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v47)) > _g4_s3 ? (16u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v48)) > _g4_s4 ? (16u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v49)) > _g4_s5 ? (16u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v50)) > _g4_s6 ? (16u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v51)) > _g4_s7 ? (20u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v52)) > _g4_s8 ? (24u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v53)) > _g4_s9 ? (24u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_s)) > _g4_s10 ? (28u + sizeof(_g4_t_s)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_n)) > _g4_s11 ? (32u + sizeof(_g4_t_n)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v56)) > _g4_s12 ? (36u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v57)) > _g4_s13 ? (40u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v58)) > _g4_s14 ? (44u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (45u + sizeof(_g4_t_v59)) > _g4_s15 ? (45u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (46u + sizeof(_g4_t_v60)) > _g4_s16 ? (46u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (47u + sizeof(_g4_t_v61)) > _g4_s17 ? (47u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v62)) > _g4_s18 ? (60u + sizeof(_g4_t_v62)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 28u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 45u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 46u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 47u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);

  v9 = a7;
  v46 = sub_1902550(&dword_213B834);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(v9 + 108) + 12) + 4 * v46);
  v11 = *v10;
  if ( *v10 == 0 )
  {
    v43 = opNew(0x128u);
    *(uint32_t *)(v43 + 4) = 0;
    *(uint32_t *)(v43 + 8) = 0;
    *(uint32_t *)v43 = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(v43 + 12) = 0;
    *(uint8_t *)(v43 + 16) = 0;
    *(uint32_t *)(v43 + 20) = 0;
    *(uint32_t *)(v43 + 24) = 0;
    *(uint32_t *)(v43 + 28) = 0;
    *(uint32_t *)(v43 + 32) = 0;
    *(uint32_t *)(v43 + 36) = 0;
    *(uint32_t *)(v43 + 40) = 0;
    *(uint8_t *)(v43 + 292) = 0;
    sub_193EEC0(v43, v9 + 108);
    sub_19023D0(*(uint32_t *)(v9 + 108), (volatile int32_t *)v43, v46);
    v11 = *v10;
  }
  v52 = 8;
  v12 = *(uint32_t *)(v9 + 12) & 0x4A;
  if ( v12 != 64 )
  {
    v13 = 10;
    if ( v12 == 8 )
      v13 = 16;
    v52 = v13;
  }
  v47 = sub_1943F80(&a3);
  c = 0;
  v61 = false;
  if ( v47 == (uint8_t)sub_1943F80(&a5) )
    goto LABEL_8;
  v38 = sub_193BA20((int)(uintptr_t)(&a3));
  c = v38;
  v61 = v38 == *(uint32_t *)(v11 + 188);
  if ( v38 != *(uint32_t *)(v11 + 188) && v38 != *(uint32_t *)(v11 + 192) )
  {
    v15 = *(uint8_t *)(v11 + 16);
LABEL_80:
    v51 = 0;
    v60 = 0;
    v49 = v12;
    while ( 1 )
    {
      if ( v15 != 0 && *(uint32_t *)(v11 + 40) == c || *(uint32_t *)(v11 + 36) == c )
      {
LABEL_117:
        v59 = 0;
        goto LABEL_9;
      }
      if ( *(uint32_t *)(v11 + 204) == c )
      {
        if ( v60 == 0 || v52 == 10 )
        {
          if ( v49 != 0 )
          {
            if ( v52 == 8 )
              v51 = 0;
            else
              ++v51;
            v60 = 1;
          }
          else
          {
            v51 = 0;
            v60 = 1;
            v52 = 8;
          }
          goto LABEL_91;
        }
      }
      else if ( v60 == 0 )
      {
        goto LABEL_117;
      }
      if ( *(uint32_t *)(v11 + 196) != c && *(uint32_t *)(v11 + 200) != c )
        goto LABEL_117;
      if ( v49 != 0 )
      {
        if ( v52 != 16 )
        {
          v59 = 0;
          goto LABEL_10;
        }
        v51 = 0;
        v60 = 0;
      }
      else
      {
        v51 = 0;
        v60 = 0;
        v52 = 16;
      }
LABEL_91:
      if ( a3 != nullptr )
      {
        v39 = a3[2];
        if ( v39 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v39 + 4;
        a4 = -1;
      }
      v40 = sub_1943F80(&a3);
      if ( v40 == (uint8_t)sub_1943F80(&a5) )
      {
        v15 = *(uint8_t *)(v11 + 16);
        v59 = 1;
        goto LABEL_9;
      }
      c = sub_193BA20((int)(uintptr_t)(&a3));
      v15 = *(uint8_t *)(v11 + 16);
      if ( v60 == 0 )
        goto LABEL_117;
    }
  }
  v15 = *(uint8_t *)(v11 + 16);
  if ( v15 != 0 && c == *(uint32_t *)(v11 + 40) || c == *(uint32_t *)(v11 + 36) )
    goto LABEL_80;
  if ( a3 != nullptr )
  {
    v42 = a3[2];
    if ( v42 >= a3[3] )
      G4_VCALL<void>(a3, 40);
    else
      a3[2] = v42 + 4;
    a4 = -1;
  }
  v50 = sub_1943F80(&a3);
  if ( v50 != (uint8_t)sub_1943F80(&a5) )
  {
    c = sub_193BA20((int)(uintptr_t)(&a3));
    v15 = *(uint8_t *)(v11 + 16);
    goto LABEL_80;
  }
LABEL_8:
  v15 = *(uint8_t *)(v11 + 16);
  v59 = 1;
  v51 = 0;
  v60 = 0;
LABEL_9:
  n = 22;
  if ( v52 != 16 )
LABEL_10:
    n = v52;
  v62[0] = (size_t *)(&dword_213B814);
  if ( v15 != 0 )
    sub_1939B80(v62, 0x20u);
  v57 = 0x80000000 - !v61;
  s = (wchar_t *)(v11 + 204);
  v56 = v57 / v52;
  if ( *(uint8_t *)(v11 + 292) == 0 )
  {
    v48 = 0;
    v58 = 0;
    if ( v59 != 0 )
      goto LABEL_42;
    if ( n <= 0xA )
      goto LABEL_59;
LABEL_70:
    if ( (unsigned int)(c - 48) <= 9 )
    {
      v34 = c - 48;
      goto LABEL_62;
    }
    if ( (unsigned int)(c - 97) <= 5 )
    {
      v34 = c - 87;
LABEL_62:
      while ( v48 <= v56 )
      {
LABEL_63:
        v35 = v57 - v34 < v52 * v48;
        v48 = v52 * v48 + v34;
        v58 |= v35;
        ++v51;
LABEL_64:
        if ( a3 != nullptr )
        {
          v36 = a3[2];
          if ( v36 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v36 + 4;
          a4 = -1;
        }
        v37 = sub_1943F80(&a3);
        if ( v37 == (uint8_t)sub_1943F80(&a5) )
        {
LABEL_28:
          v21 = 0;
          v59 = 1;
          goto LABEL_29;
        }
        c = sub_193BA20((int)(uintptr_t)(&a3));
        if ( n > 0xA )
          goto LABEL_70;
LABEL_59:
        if ( c <= 47 || (int)(n + 48) <= c )
          goto LABEL_42;
        v34 = c - 48;
      }
    }
    else
    {
      if ( (unsigned int)(c - 65) > 5 )
      {
LABEL_42:
        v22 = v62[0];
        v21 = 0;
        v23 = *(v62[0] - 3);
        v24 = v62[0] - 3;
        if ( v23 == 0 )
          goto LABEL_30;
        goto LABEL_43;
      }
      v34 = c - 55;
      if ( v48 <= v56 )
        goto LABEL_63;
    }
    v58 = 1;
    goto LABEL_64;
  }
  v48 = 0;
  v58 = 0;
  if ( v59 != 0 )
    goto LABEL_42;
  while ( *(uint8_t *)(v11 + 16) == 0 || *(uint32_t *)(v11 + 40) != c )
  {
    if ( *(uint32_t *)(v11 + 36) == c )
      goto LABEL_42;
    v16 = wmemchr(s, c, n);
    if ( v16 == nullptr )
      goto LABEL_42;
    v17 = v16 - s;
    if ( v17 >= 16 )
      v17 -= 6;
    if ( v56 < v48 )
    {
      v58 = 1;
    }
    else
    {
      v18 = v57 - v17 < v48 * v52;
      v48 = v17 + v48 * v52;
      v58 |= v18;
      ++v51;
    }
LABEL_23:
    if ( a3 != nullptr )
    {
      v19 = a3[2];
      if ( v19 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v19 + 4;
      a4 = -1;
    }
    v20 = sub_1943F80(&a3);
    if ( v20 == (uint8_t)sub_1943F80(&a5) )
      goto LABEL_28;
    c = sub_193BA20((int)(uintptr_t)(&a3));
  }
  if ( v51 != 0 )
  {
    v30 = v62[0];
    v31 = *(v62[0] - 3);
    v32 = v31 + 1;
    if ( v31 + 1 > *(v62[0] - 2) || *((int *)v62[0] - 1) > 0 )
    {
      sub_1939B80(v62, v31 + 1);
      v30 = v62[0];
      v31 = *(v62[0] - 3);
    }
    *((uint8_t *)v30 + v31) = v51;
    v33 = v62[0];
    if ( v62[0] - 3 == (size_t *)(uintptr_t)(dword_213B808) )
    {
      v51 = 0;
    }
    else
    {
      *(v62[0] - 1) = 0;
      *(v33 - 3) = v32;
      v51 = 0;
      *((uint8_t *)v33 + v32) = 0;
    }
    goto LABEL_23;
  }
  v21 = 1;
LABEL_29:
  v22 = v62[0];
  v23 = *(v62[0] - 3);
  v24 = v62[0] - 3;
  if ( v23 != 0 )
  {
LABEL_43:
    v53 = v23 + 1;
    if ( v23 + 1 > *(v22 - 2) || (int)*(v22 - 1) > 0 )
    {
      sub_1939B80(v62, v53);
      v22 = v62[0];
      v23 = *(v62[0] - 3);
    }
    *((uint8_t *)v22 + v23) = v51;
    v27 = v62[0];
    v28 = v62[0] - 3;
    if ( v62[0] - 3 != (size_t *)(uintptr_t)(dword_213B808) )
    {
      *(v62[0] - 1) = 0;
      *(v27 - 3) = v53;
      *((uint8_t *)v27 + v53) = 0;
      v27 = v62[0];
      v28 = v62[0] - 3;
    }
    v45 = v27;
    v44 = v28;
    v29 = sub_1953E80(*(uint32_t *)(v11 + 8), *(uint32_t *)(v11 + 12), v62);
    v22 = v45;
    v24 = v44;
    if ( v29 == 0 )
      *a8 = 4;
  }
LABEL_30:
  if ( (v51 != 0 || v60 != 0 || *(v22 - 3) != 0) && v21 == 0 )
  {
    if ( v58 != 0 )
    {
      *a9 = 0x80000000 - !v61;
      *a8 = 4;
    }
    else
    {
      v41 = -v48;
      if ( !v61 )
        v41 = v48;
      *a9 = v41;
    }
  }
  else
  {
    *a9 = 0;
    *a8 = 4;
  }
  if ( v59 != 0 )
    *a8 |= 2u;
  v25 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v25;
  if ( v24 != (size_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add((volatile int32_t *)v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v24);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1949430  (binary VA: 0x1949430)
// Original: sub_1949430
// ----------------------------------------------------------------------------
uint32_t * sub_1949430(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  sub_1948B00(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1949490  (binary VA: 0x1949490)
// Original: sub_1949490
// ----------------------------------------------------------------------------
uint32_t * sub_1949490(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int *a8, uint8_t *a9)
{
  int *v9;
  char v10; // si
  int v11;
  int v13;
  bool v14; // di
  bool v15; // bp
  unsigned int v16;
  char v17;
  int v18;
  unsigned int v19;
  int v20;
  int *v21;
  typedef int _g4_t_v22;
  typedef bool _g4_t_v23;
  typedef bool _g4_t_v24;
  typedef char _g4_t_v25;
  typedef uint32_t _g4_t_v26[4];
  typedef char _g4_t_v27;
  typedef unsigned int _g4_t_v28[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (5u + sizeof(_g4_t_v23)) > _g4_s1 ? (5u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (6u + sizeof(_g4_t_v24)) > _g4_s2 ? (6u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (7u + sizeof(_g4_t_v25)) > _g4_s3 ? (7u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v26)) > _g4_s4 ? (8u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (27u + sizeof(_g4_t_v27)) > _g4_s5 ? (27u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v28)) > _g4_s6 ? (28u + sizeof(_g4_t_v28)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 5u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 6u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 7u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 27u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);

  if ( (*(uint8_t *)(a7 + 12) & 1) == 0 )
  {
    v28[0] = 0xFFFFFFFF;
    sub_1948B00(v26, a2, a3, a4, a5, a6, a7, a8, (int *)v28);
    a3 = (uint32_t *)v26[0];
    a4 = v26[1];
    if ( v28[0] <= 1 )
    {
      *a9 = v28[0];
    }
    else
    {
      v9 = a8;
      *a9 = 1;
      *v9 = 4;
      v10 = sub_1943F80(&a3);
      if ( v10 == (uint8_t)sub_1943F80(&a5) )
        *a8 |= 2u;
    }
    goto LABEL_5;
  }
  v13 = sub_1943C10((int)(uintptr_t)(&v27), (int *)(a7 + 108));
  v14 = *(uint32_t *)(v13 + 32) == 0;
  v15 = *(uint32_t *)(v13 + 24) == 0;
  v16 = 0;
  v24 = true;
  v23 = true;
LABEL_7:
  if ( v14 )
    goto LABEL_25;
  do
  {
    do
    {
      v22 = v13;
      v25 = sub_1943F80(&a3);
      v17 = sub_1943F80(&a5);
      v13 = v22;
      if ( v25 == v17 )
      {
        v20 = 1;
        goto LABEL_27;
      }
      v18 = sub_193BA20((int)(uintptr_t)(&a3));
      v13 = v22;
      if ( !v14 )
        v23 = v18 == *(uint32_t *)(*(uint32_t *)(v22 + 28) + 4 * v16);
      if ( v23 )
      {
        if ( v15 )
          goto LABEL_14;
      }
      else if ( v15 )
      {
        goto LABEL_35;
      }
      v24 = v18 == *(uint32_t *)(*(uint32_t *)(v22 + 20) + 4 * v16);
LABEL_14:
      if ( !v24 )
      {
        if ( v14 )
          goto LABEL_26;
        if ( !v23 )
        {
LABEL_35:
          v20 = 0;
          goto LABEL_36;
        }
      }
      ++v16;
      if ( a3 != nullptr )
      {
        v19 = a3[2];
        if ( v19 >= a3[3] )
        {
          G4_VCALL<void>(a3, 40);
          v13 = v22;
        }
        else
        {
          a3[2] = v19 + 4;
        }
        a4 = -1;
      }
      v14 = true;
      if ( v23 )
        v14 = v16 >= *(uint32_t *)(v13 + 32);
      v15 = true;
      if ( !v24 )
        goto LABEL_7;
      v15 = v16 >= *(uint32_t *)(v13 + 24);
    }
    while ( !v14 );
LABEL_25:
    ;
  }
  while ( !v15 );
LABEL_26:
  v20 = 0;
LABEL_27:
  if ( v23 && v16 != 0 && *(uint32_t *)(v13 + 32) == v16 )
  {
    *a9 = 0;
    if ( v24 && *(uint32_t *)(v13 + 24) == v16 )
      *a8 = 4;
    else
LABEL_32:
      *a8 = (v20 << 31 >> 31) & 2;
  }
  else
  {
LABEL_36:
    if ( v24 && v16 != 0 && *(uint32_t *)(v13 + 24) == v16 )
    {
      *a9 = 1;
      goto LABEL_32;
    }
    v21 = a8;
    *a9 = 0;
    *v21 = (uint8_t)v20 == 0 ? 4 : 6;
  }
LABEL_5:
  v11 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v11;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1949780  (binary VA: 0x1949780)
// Original: sub_1949780
// ----------------------------------------------------------------------------
uint32_t * sub_1949780(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, uint16_t *a9)
{
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  wchar_t c;
  char v15;
  wchar_t *v16;
  int v17;
  bool v18;
  unsigned int v19;
  char v20; // si
  char v21; // si
  size_t *v22;
  int v23;
  size_t *v24;
  int v25;
  size_t *v27;
  size_t *v28;
  char v29;
  size_t *v30;
  int v31;
  size_t v32;
  size_t *v33;
  int v34;
  bool v35;
  unsigned int v36;
  char v37; // si
  int v38;
  unsigned int v39;
  char v40; // bp
  int v41;
  unsigned int v42;
  int v43;
  typedef size_t *_g4_t_v44;
  typedef size_t *_g4_t_v45;
  typedef int32_t _g4_t_v46;
  typedef char _g4_t_v47;
  typedef uint16_t _g4_t_v48;
  typedef int _g4_t_v49;
  typedef char _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef char _g4_t_v54;
  typedef char _g4_t_v55;
  typedef wchar_t *_g4_t_s;
  typedef size_t _g4_t_n;
  typedef uint16_t _g4_t_v58;
  typedef char _g4_t_v59;
  typedef bool _g4_t_v60;
  typedef size_t *_g4_t_v61[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v44)) > _g4_s0 ? (8u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v45)) > _g4_s1 ? (12u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v46)) > _g4_s2 ? (16u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v47)) > _g4_s3 ? (16u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v48)) > _g4_s4 ? (16u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v49)) > _g4_s5 ? (16u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v50)) > _g4_s6 ? (16u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v51)) > _g4_s7 ? (40u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v52)) > _g4_s8 ? (44u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v53)) > _g4_s9 ? (44u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (50u + sizeof(_g4_t_v54)) > _g4_s10 ? (50u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (51u + sizeof(_g4_t_v55)) > _g4_s11 ? (51u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_s)) > _g4_s12 ? (52u + sizeof(_g4_t_s)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_n)) > _g4_s13 ? (56u + sizeof(_g4_t_n)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v58)) > _g4_s14 ? (60u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (62u + sizeof(_g4_t_v59)) > _g4_s15 ? (62u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (63u + sizeof(_g4_t_v60)) > _g4_s16 ? (63u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v61)) > _g4_s17 ? (76u + sizeof(_g4_t_v61)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 50u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 51u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 52u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 60u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 62u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 63u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 76u);

  v9 = a7;
  v46 = sub_1902550(&dword_213B834);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(v9 + 108) + 12) + 4 * v46);
  v11 = *v10;
  if ( *v10 == 0 )
  {
    v43 = opNew(0x128u);
    *(uint32_t *)(v43 + 4) = 0;
    *(uint32_t *)(v43 + 8) = 0;
    *(uint32_t *)v43 = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(v43 + 12) = 0;
    *(uint8_t *)(v43 + 16) = 0;
    *(uint32_t *)(v43 + 20) = 0;
    *(uint32_t *)(v43 + 24) = 0;
    *(uint32_t *)(v43 + 28) = 0;
    *(uint32_t *)(v43 + 32) = 0;
    *(uint32_t *)(v43 + 36) = 0;
    *(uint32_t *)(v43 + 40) = 0;
    *(uint8_t *)(v43 + 292) = 0;
    sub_193EEC0(v43, v9 + 108);
    sub_19023D0(*(uint32_t *)(v9 + 108), (volatile int32_t *)v43, v46);
    v11 = *v10;
  }
  v52 = 8;
  v12 = *(uint32_t *)(v9 + 12) & 0x4A;
  if ( v12 != 64 )
  {
    v13 = 10;
    if ( v12 == 8 )
      v13 = 16;
    v52 = v13;
  }
  v47 = sub_1943F80(&a3);
  c = 0;
  v60 = false;
  if ( v47 == (uint8_t)sub_1943F80(&a5) )
    goto LABEL_8;
  v38 = sub_193BA20((int)(uintptr_t)(&a3));
  c = v38;
  v60 = v38 == *(uint32_t *)(v11 + 188);
  if ( v38 != *(uint32_t *)(v11 + 188) && v38 != *(uint32_t *)(v11 + 192) )
  {
    v15 = *(uint8_t *)(v11 + 16);
LABEL_80:
    v51 = 0;
    v59 = 0;
    v49 = v12;
    while ( 1 )
    {
      if ( v15 != 0 && *(uint32_t *)(v11 + 40) == c || *(uint32_t *)(v11 + 36) == c )
      {
LABEL_117:
        v55 = 0;
        goto LABEL_9;
      }
      if ( *(uint32_t *)(v11 + 204) == c )
      {
        if ( v59 == 0 || v52 == 10 )
        {
          if ( v49 != 0 )
          {
            if ( v52 == 8 )
              v51 = 0;
            else
              ++v51;
            v59 = 1;
          }
          else
          {
            v51 = 0;
            v59 = 1;
            v52 = 8;
          }
          goto LABEL_91;
        }
      }
      else if ( v59 == 0 )
      {
        goto LABEL_117;
      }
      if ( *(uint32_t *)(v11 + 196) != c && *(uint32_t *)(v11 + 200) != c )
        goto LABEL_117;
      if ( v49 != 0 )
      {
        if ( v52 != 16 )
        {
          v55 = 0;
          goto LABEL_10;
        }
        v51 = 0;
        v59 = 0;
      }
      else
      {
        v51 = 0;
        v59 = 0;
        v52 = 16;
      }
LABEL_91:
      if ( a3 != nullptr )
      {
        v39 = a3[2];
        if ( v39 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v39 + 4;
        a4 = -1;
      }
      v40 = sub_1943F80(&a3);
      if ( v40 == (uint8_t)sub_1943F80(&a5) )
      {
        v15 = *(uint8_t *)(v11 + 16);
        v55 = 1;
        goto LABEL_9;
      }
      c = sub_193BA20((int)(uintptr_t)(&a3));
      v15 = *(uint8_t *)(v11 + 16);
      if ( v59 == 0 )
        goto LABEL_117;
    }
  }
  v15 = *(uint8_t *)(v11 + 16);
  if ( v15 != 0 && c == *(uint32_t *)(v11 + 40) || c == *(uint32_t *)(v11 + 36) )
    goto LABEL_80;
  if ( a3 != nullptr )
  {
    v42 = a3[2];
    if ( v42 >= a3[3] )
      G4_VCALL<void>(a3, 40);
    else
      a3[2] = v42 + 4;
    a4 = -1;
  }
  v50 = sub_1943F80(&a3);
  if ( v50 != (uint8_t)sub_1943F80(&a5) )
  {
    c = sub_193BA20((int)(uintptr_t)(&a3));
    v15 = *(uint8_t *)(v11 + 16);
    goto LABEL_80;
  }
LABEL_8:
  v15 = *(uint8_t *)(v11 + 16);
  v55 = 1;
  v51 = 0;
  v59 = 0;
LABEL_9:
  n = 22;
  if ( v52 != 16 )
LABEL_10:
    n = v52;
  v61[0] = (size_t *)(&dword_213B814);
  if ( v15 != 0 )
    sub_1939B80(v61, 0x20u);
  v58 = 0xFFFF / v52;
  s = (wchar_t *)(v11 + 204);
  if ( *(uint8_t *)(v11 + 292) == 0 )
  {
    v48 = 0;
    v54 = 0;
    if ( v55 != 0 )
      goto LABEL_42;
    if ( n <= 0xA )
      goto LABEL_59;
LABEL_70:
    if ( (unsigned int)(c - 48) <= 9 )
    {
      v34 = c - 48;
      goto LABEL_62;
    }
    if ( (unsigned int)(c - 97) <= 5 )
    {
      v34 = c - 87;
LABEL_62:
      while ( v48 <= v58 )
      {
LABEL_63:
        v35 = (uint16_t)(v52 * v48) > 0xFFFF - v34;
        v48 = v52 * v48 + v34;
        v54 |= v35;
        ++v51;
LABEL_64:
        if ( a3 != nullptr )
        {
          v36 = a3[2];
          if ( v36 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v36 + 4;
          a4 = -1;
        }
        v37 = sub_1943F80(&a3);
        if ( v37 == (uint8_t)sub_1943F80(&a5) )
        {
LABEL_28:
          v21 = 0;
          v55 = 1;
          goto LABEL_29;
        }
        c = sub_193BA20((int)(uintptr_t)(&a3));
        if ( n > 0xA )
          goto LABEL_70;
LABEL_59:
        if ( c <= 47 || (int)(n + 48) <= c )
          goto LABEL_42;
        v34 = c - 48;
      }
    }
    else
    {
      if ( (unsigned int)(c - 65) > 5 )
      {
LABEL_42:
        v22 = v61[0];
        v21 = 0;
        v23 = *(v61[0] - 3);
        v24 = v61[0] - 3;
        if ( v23 == 0 )
          goto LABEL_30;
        goto LABEL_43;
      }
      v34 = c - 55;
      if ( v48 <= v58 )
        goto LABEL_63;
    }
    v54 = 1;
    goto LABEL_64;
  }
  v48 = 0;
  v54 = 0;
  if ( v55 != 0 )
    goto LABEL_42;
  while ( *(uint8_t *)(v11 + 16) == 0 || *(uint32_t *)(v11 + 40) != c )
  {
    if ( *(uint32_t *)(v11 + 36) == c )
      goto LABEL_42;
    v16 = wmemchr(s, c, n);
    if ( v16 == nullptr )
      goto LABEL_42;
    v17 = v16 - s;
    if ( v17 >= 16 )
      v17 -= 6;
    if ( v58 < v48 )
    {
      v54 = 1;
    }
    else
    {
      v18 = (uint16_t)(v52 * v48) > 0xFFFF - v17;
      v48 = v17 + v52 * v48;
      v54 |= v18;
      ++v51;
    }
LABEL_23:
    if ( a3 != nullptr )
    {
      v19 = a3[2];
      if ( v19 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v19 + 4;
      a4 = -1;
    }
    v20 = sub_1943F80(&a3);
    if ( v20 == (uint8_t)sub_1943F80(&a5) )
      goto LABEL_28;
    c = sub_193BA20((int)(uintptr_t)(&a3));
  }
  if ( v51 != 0 )
  {
    v30 = v61[0];
    v31 = *(v61[0] - 3);
    v32 = v31 + 1;
    if ( v31 + 1 > *(v61[0] - 2) || *((int *)v61[0] - 1) > 0 )
    {
      sub_1939B80(v61, v31 + 1);
      v30 = v61[0];
      v31 = *(v61[0] - 3);
    }
    *((uint8_t *)v30 + v31) = v51;
    v33 = v61[0];
    if ( v61[0] - 3 == (size_t *)(uintptr_t)(dword_213B808) )
    {
      v51 = 0;
    }
    else
    {
      *(v61[0] - 1) = 0;
      *(v33 - 3) = v32;
      v51 = 0;
      *((uint8_t *)v33 + v32) = 0;
    }
    goto LABEL_23;
  }
  v21 = 1;
LABEL_29:
  v22 = v61[0];
  v23 = *(v61[0] - 3);
  v24 = v61[0] - 3;
  if ( v23 != 0 )
  {
LABEL_43:
    v53 = v23 + 1;
    if ( v23 + 1 > *(v22 - 2) || (int)*(v22 - 1) > 0 )
    {
      sub_1939B80(v61, v53);
      v22 = v61[0];
      v23 = *(v61[0] - 3);
    }
    *((uint8_t *)v22 + v23) = v51;
    v27 = v61[0];
    v28 = v61[0] - 3;
    if ( v61[0] - 3 != (size_t *)(uintptr_t)(dword_213B808) )
    {
      *(v61[0] - 1) = 0;
      *(v27 - 3) = v53;
      *((uint8_t *)v27 + v53) = 0;
      v27 = v61[0];
      v28 = v61[0] - 3;
    }
    v45 = v27;
    v44 = v28;
    v29 = sub_1953E80(*(uint32_t *)(v11 + 8), *(uint32_t *)(v11 + 12), v61);
    v22 = v45;
    v24 = v44;
    if ( v29 == 0 )
      *a8 = 4;
  }
LABEL_30:
  if ( (v51 != 0 || v59 != 0 || *(v22 - 3) != 0) && v21 == 0 )
  {
    if ( v54 != 0 )
    {
      *a9 = -1;
      *a8 = 4;
    }
    else
    {
      LOWORD(v41) = v48;
      if ( v60 )
        v41 = -v48;
      *a9 = v41;
    }
  }
  else
  {
    *a9 = 0;
    *a8 = 4;
  }
  if ( v55 != 0 )
    *a8 |= 2u;
  v25 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v25;
  if ( v24 != (size_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add((volatile int32_t *)v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v24);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194A0F0  (binary VA: 0x194a0f0)
// Original: sub_194A0F0
// ----------------------------------------------------------------------------
uint32_t * sub_194A0F0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, uint16_t *a9)
{
  sub_1949780(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194A150  (binary VA: 0x194a150)
// Original: sub_194A150
// ----------------------------------------------------------------------------
uint32_t * sub_194A150(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  wchar_t c;
  char v15;
  wchar_t *v16;
  int v17;
  bool v18;
  unsigned int v19;
  char v20; // si
  char v21; // si
  size_t *v22;
  int v23;
  size_t *v24;
  int v25;
  size_t *v27;
  size_t *v28;
  char v29;
  size_t *v30;
  int v31;
  size_t v32;
  size_t *v33;
  int v34;
  bool v35;
  unsigned int v36;
  char v37; // si
  int v38;
  unsigned int v39;
  char v40; // bp
  int v41;
  unsigned int v42;
  int v43;
  typedef size_t *_g4_t_v44;
  typedef size_t *_g4_t_v45;
  typedef int32_t _g4_t_v46;
  typedef char _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef char _g4_t_v50;
  typedef int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef wchar_t *_g4_t_s;
  typedef size_t _g4_t_n;
  typedef unsigned int _g4_t_v56;
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef char _g4_t_v59;
  typedef bool _g4_t_v60;
  typedef size_t *_g4_t_v61[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v44)) > _g4_s0 ? (12u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v45)) > _g4_s1 ? (16u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v46)) > _g4_s2 ? (20u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v47)) > _g4_s3 ? (20u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v48)) > _g4_s4 ? (20u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v49)) > _g4_s5 ? (20u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v50)) > _g4_s6 ? (20u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v51)) > _g4_s7 ? (24u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v52)) > _g4_s8 ? (28u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v53)) > _g4_s9 ? (28u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_s)) > _g4_s10 ? (32u + sizeof(_g4_t_s)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_n)) > _g4_s11 ? (36u + sizeof(_g4_t_n)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v56)) > _g4_s12 ? (40u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v57)) > _g4_s13 ? (44u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (45u + sizeof(_g4_t_v58)) > _g4_s14 ? (45u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (46u + sizeof(_g4_t_v59)) > _g4_s15 ? (46u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (47u + sizeof(_g4_t_v60)) > _g4_s16 ? (47u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v61)) > _g4_s17 ? (60u + sizeof(_g4_t_v61)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 32u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 45u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 46u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 47u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);

  v9 = a7;
  v46 = sub_1902550(&dword_213B834);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(v9 + 108) + 12) + 4 * v46);
  v11 = *v10;
  if ( *v10 == 0 )
  {
    v43 = opNew(0x128u);
    *(uint32_t *)(v43 + 4) = 0;
    *(uint32_t *)(v43 + 8) = 0;
    *(uint32_t *)v43 = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(v43 + 12) = 0;
    *(uint8_t *)(v43 + 16) = 0;
    *(uint32_t *)(v43 + 20) = 0;
    *(uint32_t *)(v43 + 24) = 0;
    *(uint32_t *)(v43 + 28) = 0;
    *(uint32_t *)(v43 + 32) = 0;
    *(uint32_t *)(v43 + 36) = 0;
    *(uint32_t *)(v43 + 40) = 0;
    *(uint8_t *)(v43 + 292) = 0;
    sub_193EEC0(v43, v9 + 108);
    sub_19023D0(*(uint32_t *)(v9 + 108), (volatile int32_t *)v43, v46);
    v11 = *v10;
  }
  v52 = 8;
  v12 = *(uint32_t *)(v9 + 12) & 0x4A;
  if ( v12 != 64 )
  {
    v13 = 10;
    if ( v12 == 8 )
      v13 = 16;
    v52 = v13;
  }
  v47 = sub_1943F80(&a3);
  c = 0;
  v60 = false;
  if ( v47 == (uint8_t)sub_1943F80(&a5) )
    goto LABEL_8;
  v38 = sub_193BA20((int)(uintptr_t)(&a3));
  c = v38;
  v60 = v38 == *(uint32_t *)(v11 + 188);
  if ( v38 != *(uint32_t *)(v11 + 188) && v38 != *(uint32_t *)(v11 + 192) )
  {
    v15 = *(uint8_t *)(v11 + 16);
LABEL_80:
    v51 = 0;
    v59 = 0;
    v49 = v12;
    while ( 1 )
    {
      if ( v15 != 0 && *(uint32_t *)(v11 + 40) == c || *(uint32_t *)(v11 + 36) == c )
      {
LABEL_117:
        v58 = 0;
        goto LABEL_9;
      }
      if ( *(uint32_t *)(v11 + 204) == c )
      {
        if ( v59 == 0 || v52 == 10 )
        {
          if ( v49 != 0 )
          {
            if ( v52 == 8 )
              v51 = 0;
            else
              ++v51;
            v59 = 1;
          }
          else
          {
            v51 = 0;
            v59 = 1;
            v52 = 8;
          }
          goto LABEL_91;
        }
      }
      else if ( v59 == 0 )
      {
        goto LABEL_117;
      }
      if ( *(uint32_t *)(v11 + 196) != c && *(uint32_t *)(v11 + 200) != c )
        goto LABEL_117;
      if ( v49 != 0 )
      {
        if ( v52 != 16 )
        {
          v58 = 0;
          goto LABEL_10;
        }
        v51 = 0;
        v59 = 0;
      }
      else
      {
        v51 = 0;
        v59 = 0;
        v52 = 16;
      }
LABEL_91:
      if ( a3 != nullptr )
      {
        v39 = a3[2];
        if ( v39 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v39 + 4;
        a4 = -1;
      }
      v40 = sub_1943F80(&a3);
      if ( v40 == (uint8_t)sub_1943F80(&a5) )
      {
        v15 = *(uint8_t *)(v11 + 16);
        v58 = 1;
        goto LABEL_9;
      }
      c = sub_193BA20((int)(uintptr_t)(&a3));
      v15 = *(uint8_t *)(v11 + 16);
      if ( v59 == 0 )
        goto LABEL_117;
    }
  }
  v15 = *(uint8_t *)(v11 + 16);
  if ( v15 != 0 && c == *(uint32_t *)(v11 + 40) || c == *(uint32_t *)(v11 + 36) )
    goto LABEL_80;
  if ( a3 != nullptr )
  {
    v42 = a3[2];
    if ( v42 >= a3[3] )
      G4_VCALL<void>(a3, 40);
    else
      a3[2] = v42 + 4;
    a4 = -1;
  }
  v50 = sub_1943F80(&a3);
  if ( v50 != (uint8_t)sub_1943F80(&a5) )
  {
    c = sub_193BA20((int)(uintptr_t)(&a3));
    v15 = *(uint8_t *)(v11 + 16);
    goto LABEL_80;
  }
LABEL_8:
  v15 = *(uint8_t *)(v11 + 16);
  v58 = 1;
  v51 = 0;
  v59 = 0;
LABEL_9:
  n = 22;
  if ( v52 != 16 )
LABEL_10:
    n = v52;
  v61[0] = (size_t *)(&dword_213B814);
  if ( v15 != 0 )
    sub_1939B80(v61, 0x20u);
  v56 = 0xFFFFFFFF / v52;
  s = (wchar_t *)(v11 + 204);
  if ( *(uint8_t *)(v11 + 292) == 0 )
  {
    v48 = 0;
    v57 = 0;
    if ( v58 != 0 )
      goto LABEL_42;
    if ( n <= 0xA )
      goto LABEL_59;
LABEL_70:
    if ( (unsigned int)(c - 48) <= 9 )
    {
      v34 = c - 48;
      goto LABEL_62;
    }
    if ( (unsigned int)(c - 97) <= 5 )
    {
      v34 = c - 87;
LABEL_62:
      while ( v48 <= v56 )
      {
LABEL_63:
        v35 = ~v34 < v52 * v48;
        v48 = v52 * v48 + v34;
        v57 |= v35;
        ++v51;
LABEL_64:
        if ( a3 != nullptr )
        {
          v36 = a3[2];
          if ( v36 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v36 + 4;
          a4 = -1;
        }
        v37 = sub_1943F80(&a3);
        if ( v37 == (uint8_t)sub_1943F80(&a5) )
        {
LABEL_28:
          v21 = 0;
          v58 = 1;
          goto LABEL_29;
        }
        c = sub_193BA20((int)(uintptr_t)(&a3));
        if ( n > 0xA )
          goto LABEL_70;
LABEL_59:
        if ( c <= 47 || (int)(n + 48) <= c )
          goto LABEL_42;
        v34 = c - 48;
      }
    }
    else
    {
      if ( (unsigned int)(c - 65) > 5 )
      {
LABEL_42:
        v22 = v61[0];
        v21 = 0;
        v23 = *(v61[0] - 3);
        v24 = v61[0] - 3;
        if ( v23 == 0 )
          goto LABEL_30;
        goto LABEL_43;
      }
      v34 = c - 55;
      if ( v48 <= v56 )
        goto LABEL_63;
    }
    v57 = 1;
    goto LABEL_64;
  }
  v48 = 0;
  v57 = 0;
  if ( v58 != 0 )
    goto LABEL_42;
  while ( *(uint8_t *)(v11 + 16) == 0 || *(uint32_t *)(v11 + 40) != c )
  {
    if ( *(uint32_t *)(v11 + 36) == c )
      goto LABEL_42;
    v16 = wmemchr(s, c, n);
    if ( v16 == nullptr )
      goto LABEL_42;
    v17 = v16 - s;
    if ( v17 >= 16 )
      v17 -= 6;
    if ( v56 < v48 )
    {
      v57 = 1;
    }
    else
    {
      v18 = ~v17 < v48 * v52;
      v48 = v17 + v48 * v52;
      v57 |= v18;
      ++v51;
    }
LABEL_23:
    if ( a3 != nullptr )
    {
      v19 = a3[2];
      if ( v19 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v19 + 4;
      a4 = -1;
    }
    v20 = sub_1943F80(&a3);
    if ( v20 == (uint8_t)sub_1943F80(&a5) )
      goto LABEL_28;
    c = sub_193BA20((int)(uintptr_t)(&a3));
  }
  if ( v51 != 0 )
  {
    v30 = v61[0];
    v31 = *(v61[0] - 3);
    v32 = v31 + 1;
    if ( v31 + 1 > *(v61[0] - 2) || *((int *)v61[0] - 1) > 0 )
    {
      sub_1939B80(v61, v31 + 1);
      v30 = v61[0];
      v31 = *(v61[0] - 3);
    }
    *((uint8_t *)v30 + v31) = v51;
    v33 = v61[0];
    if ( v61[0] - 3 == (size_t *)(uintptr_t)(dword_213B808) )
    {
      v51 = 0;
    }
    else
    {
      *(v61[0] - 1) = 0;
      *(v33 - 3) = v32;
      v51 = 0;
      *((uint8_t *)v33 + v32) = 0;
    }
    goto LABEL_23;
  }
  v21 = 1;
LABEL_29:
  v22 = v61[0];
  v23 = *(v61[0] - 3);
  v24 = v61[0] - 3;
  if ( v23 != 0 )
  {
LABEL_43:
    v53 = v23 + 1;
    if ( v23 + 1 > *(v22 - 2) || (int)*(v22 - 1) > 0 )
    {
      sub_1939B80(v61, v53);
      v22 = v61[0];
      v23 = *(v61[0] - 3);
    }
    *((uint8_t *)v22 + v23) = v51;
    v27 = v61[0];
    v28 = v61[0] - 3;
    if ( v61[0] - 3 != (size_t *)(uintptr_t)(dword_213B808) )
    {
      *(v61[0] - 1) = 0;
      *(v27 - 3) = v53;
      *((uint8_t *)v27 + v53) = 0;
      v27 = v61[0];
      v28 = v61[0] - 3;
    }
    v45 = v27;
    v44 = v28;
    v29 = sub_1953E80(*(uint32_t *)(v11 + 8), *(uint32_t *)(v11 + 12), v61);
    v22 = v45;
    v24 = v44;
    if ( v29 == 0 )
      *a8 = 4;
  }
LABEL_30:
  if ( (v51 != 0 || v59 != 0 || *(v22 - 3) != 0) && v21 == 0 )
  {
    if ( v57 != 0 )
    {
      *a9 = -1;
      *a8 = 4;
    }
    else
    {
      v41 = -v48;
      if ( !v60 )
        v41 = v48;
      *a9 = v41;
    }
  }
  else
  {
    *a9 = 0;
    *a8 = 4;
  }
  if ( v58 != 0 )
    *a8 |= 2u;
  v25 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v25;
  if ( v24 != (size_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add((volatile int32_t *)v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v24);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194AA60  (binary VA: 0x194aa60)
// Original: sub_194AA60
// ----------------------------------------------------------------------------
uint32_t * sub_194AA60(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  sub_194A150(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194AAC0  (binary VA: 0x194aac0)
// Original: sub_194AAC0
// ----------------------------------------------------------------------------
uint32_t * sub_194AAC0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  wchar_t c;
  char v15;
  wchar_t *v16;
  int v17;
  bool v18;
  unsigned int v19;
  char v20; // si
  char v21; // si
  size_t *v22;
  int v23;
  size_t *v24;
  int v25;
  size_t *v27;
  size_t *v28;
  char v29;
  size_t *v30;
  int v31;
  size_t v32;
  size_t *v33;
  int v34;
  bool v35;
  unsigned int v36;
  char v37; // si
  int v38;
  unsigned int v39;
  char v40; // bp
  int v41;
  unsigned int v42;
  int v43;
  typedef size_t *_g4_t_v44;
  typedef size_t *_g4_t_v45;
  typedef int32_t _g4_t_v46;
  typedef char _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef char _g4_t_v50;
  typedef int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef wchar_t *_g4_t_s;
  typedef size_t _g4_t_n;
  typedef unsigned int _g4_t_v56;
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef char _g4_t_v59;
  typedef bool _g4_t_v60;
  typedef size_t *_g4_t_v61[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v44)) > _g4_s0 ? (12u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v45)) > _g4_s1 ? (16u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v46)) > _g4_s2 ? (20u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v47)) > _g4_s3 ? (20u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v48)) > _g4_s4 ? (20u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v49)) > _g4_s5 ? (20u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v50)) > _g4_s6 ? (20u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v51)) > _g4_s7 ? (24u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v52)) > _g4_s8 ? (28u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v53)) > _g4_s9 ? (28u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_s)) > _g4_s10 ? (32u + sizeof(_g4_t_s)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_n)) > _g4_s11 ? (36u + sizeof(_g4_t_n)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v56)) > _g4_s12 ? (40u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v57)) > _g4_s13 ? (44u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (45u + sizeof(_g4_t_v58)) > _g4_s14 ? (45u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (46u + sizeof(_g4_t_v59)) > _g4_s15 ? (46u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (47u + sizeof(_g4_t_v60)) > _g4_s16 ? (47u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v61)) > _g4_s17 ? (60u + sizeof(_g4_t_v61)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 32u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 45u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 46u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 47u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);

  v9 = a7;
  v46 = sub_1902550(&dword_213B834);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(v9 + 108) + 12) + 4 * v46);
  v11 = *v10;
  if ( *v10 == 0 )
  {
    v43 = opNew(0x128u);
    *(uint32_t *)(v43 + 4) = 0;
    *(uint32_t *)(v43 + 8) = 0;
    *(uint32_t *)v43 = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(v43 + 12) = 0;
    *(uint8_t *)(v43 + 16) = 0;
    *(uint32_t *)(v43 + 20) = 0;
    *(uint32_t *)(v43 + 24) = 0;
    *(uint32_t *)(v43 + 28) = 0;
    *(uint32_t *)(v43 + 32) = 0;
    *(uint32_t *)(v43 + 36) = 0;
    *(uint32_t *)(v43 + 40) = 0;
    *(uint8_t *)(v43 + 292) = 0;
    sub_193EEC0(v43, v9 + 108);
    sub_19023D0(*(uint32_t *)(v9 + 108), (volatile int32_t *)v43, v46);
    v11 = *v10;
  }
  v52 = 8;
  v12 = *(uint32_t *)(v9 + 12) & 0x4A;
  if ( v12 != 64 )
  {
    v13 = 10;
    if ( v12 == 8 )
      v13 = 16;
    v52 = v13;
  }
  v47 = sub_1943F80(&a3);
  c = 0;
  v60 = false;
  if ( v47 == (uint8_t)sub_1943F80(&a5) )
    goto LABEL_8;
  v38 = sub_193BA20((int)(uintptr_t)(&a3));
  c = v38;
  v60 = v38 == *(uint32_t *)(v11 + 188);
  if ( v38 != *(uint32_t *)(v11 + 188) && v38 != *(uint32_t *)(v11 + 192) )
  {
    v15 = *(uint8_t *)(v11 + 16);
LABEL_80:
    v51 = 0;
    v59 = 0;
    v49 = v12;
    while ( 1 )
    {
      if ( v15 != 0 && *(uint32_t *)(v11 + 40) == c || *(uint32_t *)(v11 + 36) == c )
      {
LABEL_117:
        v58 = 0;
        goto LABEL_9;
      }
      if ( *(uint32_t *)(v11 + 204) == c )
      {
        if ( v59 == 0 || v52 == 10 )
        {
          if ( v49 != 0 )
          {
            if ( v52 == 8 )
              v51 = 0;
            else
              ++v51;
            v59 = 1;
          }
          else
          {
            v51 = 0;
            v59 = 1;
            v52 = 8;
          }
          goto LABEL_91;
        }
      }
      else if ( v59 == 0 )
      {
        goto LABEL_117;
      }
      if ( *(uint32_t *)(v11 + 196) != c && *(uint32_t *)(v11 + 200) != c )
        goto LABEL_117;
      if ( v49 != 0 )
      {
        if ( v52 != 16 )
        {
          v58 = 0;
          goto LABEL_10;
        }
        v51 = 0;
        v59 = 0;
      }
      else
      {
        v51 = 0;
        v59 = 0;
        v52 = 16;
      }
LABEL_91:
      if ( a3 != nullptr )
      {
        v39 = a3[2];
        if ( v39 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v39 + 4;
        a4 = -1;
      }
      v40 = sub_1943F80(&a3);
      if ( v40 == (uint8_t)sub_1943F80(&a5) )
      {
        v15 = *(uint8_t *)(v11 + 16);
        v58 = 1;
        goto LABEL_9;
      }
      c = sub_193BA20((int)(uintptr_t)(&a3));
      v15 = *(uint8_t *)(v11 + 16);
      if ( v59 == 0 )
        goto LABEL_117;
    }
  }
  v15 = *(uint8_t *)(v11 + 16);
  if ( v15 != 0 && c == *(uint32_t *)(v11 + 40) || c == *(uint32_t *)(v11 + 36) )
    goto LABEL_80;
  if ( a3 != nullptr )
  {
    v42 = a3[2];
    if ( v42 >= a3[3] )
      G4_VCALL<void>(a3, 40);
    else
      a3[2] = v42 + 4;
    a4 = -1;
  }
  v50 = sub_1943F80(&a3);
  if ( v50 != (uint8_t)sub_1943F80(&a5) )
  {
    c = sub_193BA20((int)(uintptr_t)(&a3));
    v15 = *(uint8_t *)(v11 + 16);
    goto LABEL_80;
  }
LABEL_8:
  v15 = *(uint8_t *)(v11 + 16);
  v58 = 1;
  v51 = 0;
  v59 = 0;
LABEL_9:
  n = 22;
  if ( v52 != 16 )
LABEL_10:
    n = v52;
  v61[0] = (size_t *)(&dword_213B814);
  if ( v15 != 0 )
    sub_1939B80(v61, 0x20u);
  v56 = 0xFFFFFFFF / v52;
  s = (wchar_t *)(v11 + 204);
  if ( *(uint8_t *)(v11 + 292) == 0 )
  {
    v48 = 0;
    v57 = 0;
    if ( v58 != 0 )
      goto LABEL_42;
    if ( n <= 0xA )
      goto LABEL_59;
LABEL_70:
    if ( (unsigned int)(c - 48) <= 9 )
    {
      v34 = c - 48;
      goto LABEL_62;
    }
    if ( (unsigned int)(c - 97) <= 5 )
    {
      v34 = c - 87;
LABEL_62:
      while ( v48 <= v56 )
      {
LABEL_63:
        v35 = ~v34 < v52 * v48;
        v48 = v52 * v48 + v34;
        v57 |= v35;
        ++v51;
LABEL_64:
        if ( a3 != nullptr )
        {
          v36 = a3[2];
          if ( v36 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v36 + 4;
          a4 = -1;
        }
        v37 = sub_1943F80(&a3);
        if ( v37 == (uint8_t)sub_1943F80(&a5) )
        {
LABEL_28:
          v21 = 0;
          v58 = 1;
          goto LABEL_29;
        }
        c = sub_193BA20((int)(uintptr_t)(&a3));
        if ( n > 0xA )
          goto LABEL_70;
LABEL_59:
        if ( c <= 47 || (int)(n + 48) <= c )
          goto LABEL_42;
        v34 = c - 48;
      }
    }
    else
    {
      if ( (unsigned int)(c - 65) > 5 )
      {
LABEL_42:
        v22 = v61[0];
        v21 = 0;
        v23 = *(v61[0] - 3);
        v24 = v61[0] - 3;
        if ( v23 == 0 )
          goto LABEL_30;
        goto LABEL_43;
      }
      v34 = c - 55;
      if ( v48 <= v56 )
        goto LABEL_63;
    }
    v57 = 1;
    goto LABEL_64;
  }
  v48 = 0;
  v57 = 0;
  if ( v58 != 0 )
    goto LABEL_42;
  while ( *(uint8_t *)(v11 + 16) == 0 || *(uint32_t *)(v11 + 40) != c )
  {
    if ( *(uint32_t *)(v11 + 36) == c )
      goto LABEL_42;
    v16 = wmemchr(s, c, n);
    if ( v16 == nullptr )
      goto LABEL_42;
    v17 = v16 - s;
    if ( v17 >= 16 )
      v17 -= 6;
    if ( v56 < v48 )
    {
      v57 = 1;
    }
    else
    {
      v18 = ~v17 < v48 * v52;
      v48 = v17 + v48 * v52;
      v57 |= v18;
      ++v51;
    }
LABEL_23:
    if ( a3 != nullptr )
    {
      v19 = a3[2];
      if ( v19 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v19 + 4;
      a4 = -1;
    }
    v20 = sub_1943F80(&a3);
    if ( v20 == (uint8_t)sub_1943F80(&a5) )
      goto LABEL_28;
    c = sub_193BA20((int)(uintptr_t)(&a3));
  }
  if ( v51 != 0 )
  {
    v30 = v61[0];
    v31 = *(v61[0] - 3);
    v32 = v31 + 1;
    if ( v31 + 1 > *(v61[0] - 2) || *((int *)v61[0] - 1) > 0 )
    {
      sub_1939B80(v61, v31 + 1);
      v30 = v61[0];
      v31 = *(v61[0] - 3);
    }
    *((uint8_t *)v30 + v31) = v51;
    v33 = v61[0];
    if ( v61[0] - 3 == (size_t *)(uintptr_t)(dword_213B808) )
    {
      v51 = 0;
    }
    else
    {
      *(v61[0] - 1) = 0;
      *(v33 - 3) = v32;
      v51 = 0;
      *((uint8_t *)v33 + v32) = 0;
    }
    goto LABEL_23;
  }
  v21 = 1;
LABEL_29:
  v22 = v61[0];
  v23 = *(v61[0] - 3);
  v24 = v61[0] - 3;
  if ( v23 != 0 )
  {
LABEL_43:
    v53 = v23 + 1;
    if ( v23 + 1 > *(v22 - 2) || (int)*(v22 - 1) > 0 )
    {
      sub_1939B80(v61, v53);
      v22 = v61[0];
      v23 = *(v61[0] - 3);
    }
    *((uint8_t *)v22 + v23) = v51;
    v27 = v61[0];
    v28 = v61[0] - 3;
    if ( v61[0] - 3 != (size_t *)(uintptr_t)(dword_213B808) )
    {
      *(v61[0] - 1) = 0;
      *(v27 - 3) = v53;
      *((uint8_t *)v27 + v53) = 0;
      v27 = v61[0];
      v28 = v61[0] - 3;
    }
    v45 = v27;
    v44 = v28;
    v29 = sub_1953E80(*(uint32_t *)(v11 + 8), *(uint32_t *)(v11 + 12), v61);
    v22 = v45;
    v24 = v44;
    if ( v29 == 0 )
      *a8 = 4;
  }
LABEL_30:
  if ( (v51 != 0 || v59 != 0 || *(v22 - 3) != 0) && v21 == 0 )
  {
    if ( v57 != 0 )
    {
      *a9 = -1;
      *a8 = 4;
    }
    else
    {
      v41 = -v48;
      if ( !v60 )
        v41 = v48;
      *a9 = v41;
    }
  }
  else
  {
    *a9 = 0;
    *a8 = 4;
  }
  if ( v58 != 0 )
    *a8 |= 2u;
  v25 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v25;
  if ( v24 != (size_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add((volatile int32_t *)v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v24);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194B3D0  (binary VA: 0x194b3d0)
// Original: sub_194B3D0
// ----------------------------------------------------------------------------
uint32_t * sub_194B3D0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, uint32_t *a9)
{
  int v9;
  int v10;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[5];
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v14)) > _g4_s2 ? (28u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  v12 = *(uint32_t *)(a7 + 12);
  *(uint32_t *)(a7 + 12) = v12 & 0xFFFFFFB5 | 8;
  sub_194AAC0(v13, a2, a3, a4, a5, a6, a7, a8, &v14);
  v9 = v13[0];
  v10 = v13[1];
  *(uint32_t *)(a7 + 12) = v12;
  *a9 = v14;
  *a1 = v9;
  a1[1] = v10;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194B480  (binary VA: 0x194b480)
// Original: sub_194B480
// ----------------------------------------------------------------------------
uint32_t * sub_194B480(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  sub_194AAC0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194B4E0  (binary VA: 0x194b4e0)
// Original: sub_194B4E0
// ----------------------------------------------------------------------------
uint32_t * sub_194B4E0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  wchar_t v14;
  char v15;
  uint64_t v16; // kr08_8
  wchar_t *v17;
  int v18;
  int v19;
  unsigned int v20;
  char v21; // si
  char v22; // si
  size_t *v23;
  int v24;
  size_t *v25;
  int *v26;
  uint32_t *v27;
  int v28;
  int v30;
  unsigned int v31;
  int *v32;
  uint32_t *v33;
  size_t *v34;
  size_t *v35;
  char v36;
  size_t *v37;
  int v38;
  size_t v39;
  size_t *v40;
  int v41;
  bool v42;
  unsigned int v43;
  char v44; // si
  int v45;
  unsigned int v46;
  char v47; // di
  unsigned int v48;
  int v49;
  typedef size_t *_g4_t_v50;
  typedef size_t *_g4_t_v51;
  typedef int32_t _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint64_t _g4_t_v54;
  typedef int64_t _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef char _g4_t_v58;
  typedef int _g4_t_v59;
  typedef char _g4_t_v60;
  typedef wchar_t *_g4_t_s;
  typedef size_t _g4_t_n;
  typedef uint64_t _g4_t_v63;
  typedef char _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char _g4_t_v66;
  typedef bool _g4_t_v67;
  typedef size_t *_g4_t_v68[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v50)) > _g4_s0 ? (8u + sizeof(_g4_t_v50)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v51)) > _g4_s1 ? (12u + sizeof(_g4_t_v51)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v52)) > _g4_s2 ? (16u + sizeof(_g4_t_v52)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v53)) > _g4_s3 ? (16u + sizeof(_g4_t_v53)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v54)) > _g4_s4 ? (16u + sizeof(_g4_t_v54)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v55)) > _g4_s5 ? (24u + sizeof(_g4_t_v55)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v56)) > _g4_s6 ? (24u + sizeof(_g4_t_v56)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v57)) > _g4_s7 ? (24u + sizeof(_g4_t_v57)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v58)) > _g4_s8 ? (32u + sizeof(_g4_t_v58)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v59)) > _g4_s9 ? (32u + sizeof(_g4_t_v59)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v60)) > _g4_s10 ? (32u + sizeof(_g4_t_v60)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_s)) > _g4_s11 ? (36u + sizeof(_g4_t_s)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_n)) > _g4_s12 ? (40u + sizeof(_g4_t_n)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v63)) > _g4_s13 ? (48u + sizeof(_g4_t_v63)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v64)) > _g4_s14 ? (60u + sizeof(_g4_t_v64)) : _g4_s14,
    _g4_s16 = (61u + sizeof(_g4_t_v65)) > _g4_s15 ? (61u + sizeof(_g4_t_v65)) : _g4_s15,
    _g4_s17 = (62u + sizeof(_g4_t_v66)) > _g4_s16 ? (62u + sizeof(_g4_t_v66)) : _g4_s16,
    _g4_s18 = (63u + sizeof(_g4_t_v67)) > _g4_s17 ? (63u + sizeof(_g4_t_v67)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v68)) > _g4_s18 ? (76u + sizeof(_g4_t_v68)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 36u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 61u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 62u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 63u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);

  v9 = a7;
  v52 = sub_1902550(&dword_213B834);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(v9 + 108) + 12) + 4 * v52);
  v11 = *v10;
  if ( *v10 == 0 )
  {
    v49 = opNew(0x128u);
    *(uint32_t *)(v49 + 4) = 0;
    *(uint32_t *)(v49 + 8) = 0;
    *(uint32_t *)v49 = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(v49 + 12) = 0;
    *(uint8_t *)(v49 + 16) = 0;
    *(uint32_t *)(v49 + 20) = 0;
    *(uint32_t *)(v49 + 24) = 0;
    *(uint32_t *)(v49 + 28) = 0;
    *(uint32_t *)(v49 + 32) = 0;
    *(uint32_t *)(v49 + 36) = 0;
    *(uint32_t *)(v49 + 40) = 0;
    *(uint8_t *)(v49 + 292) = 0;
    sub_193EEC0(v49, v9 + 108);
    sub_19023D0(*(uint32_t *)(v9 + 108), (volatile int32_t *)v49, v52);
    v11 = *v10;
  }
  v53 = 8;
  v12 = *(uint32_t *)(v9 + 12) & 0x4A;
  if ( v12 != 64 )
  {
    v13 = 10;
    if ( v12 == 8 )
      v13 = 16;
    v53 = v13;
  }
  v58 = sub_1943F80(&a3);
  v14 = 0;
  v67 = false;
  if ( v58 == (uint8_t)sub_1943F80(&a5) )
    goto LABEL_8;
  v45 = sub_193BA20((int)(uintptr_t)(&a3));
  v14 = v45;
  v67 = v45 == *(uint32_t *)(v11 + 188);
  if ( v45 != *(uint32_t *)(v11 + 188) && v45 != *(uint32_t *)(v11 + 192) )
  {
    v15 = *(uint8_t *)(v11 + 16);
LABEL_86:
    v59 = 0;
    v66 = 0;
    v57 = v12;
    while ( 1 )
    {
      if ( v15 != 0 && *(uint32_t *)(v11 + 40) == v14 || *(uint32_t *)(v11 + 36) == v14 )
      {
LABEL_123:
        v65 = 0;
        goto LABEL_9;
      }
      if ( *(uint32_t *)(v11 + 204) == v14 )
      {
        if ( v66 == 0 || v53 == 10 )
        {
          if ( v57 != 0 )
          {
            if ( v53 == 8 )
              v59 = 0;
            else
              ++v59;
            v66 = 1;
          }
          else
          {
            v59 = 0;
            v66 = 1;
            v53 = 8;
          }
          goto LABEL_97;
        }
      }
      else if ( v66 == 0 )
      {
        goto LABEL_123;
      }
      if ( *(uint32_t *)(v11 + 196) != v14 && *(uint32_t *)(v11 + 200) != v14 )
        goto LABEL_123;
      if ( v57 != 0 )
      {
        if ( v53 != 16 )
        {
          v65 = 0;
          goto LABEL_10;
        }
        v59 = 0;
        v66 = 0;
      }
      else
      {
        v59 = 0;
        v66 = 0;
        v53 = 16;
      }
LABEL_97:
      if ( a3 != nullptr )
      {
        v46 = a3[2];
        if ( v46 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v46 + 4;
        a4 = -1;
      }
      v47 = sub_1943F80(&a3);
      if ( v47 == (uint8_t)sub_1943F80(&a5) )
      {
        v15 = *(uint8_t *)(v11 + 16);
        v65 = 1;
        goto LABEL_9;
      }
      v14 = sub_193BA20((int)(uintptr_t)(&a3));
      v15 = *(uint8_t *)(v11 + 16);
      if ( v66 == 0 )
        goto LABEL_123;
    }
  }
  v15 = *(uint8_t *)(v11 + 16);
  if ( v15 != 0 && v14 == *(uint32_t *)(v11 + 40) || v14 == *(uint32_t *)(v11 + 36) )
    goto LABEL_86;
  if ( a3 != nullptr )
  {
    v48 = a3[2];
    if ( v48 >= a3[3] )
      G4_VCALL<void>(a3, 40);
    else
      a3[2] = v48 + 4;
    a4 = -1;
  }
  v60 = sub_1943F80(&a3);
  if ( v60 != (uint8_t)sub_1943F80(&a5) )
  {
    v14 = sub_193BA20((int)(uintptr_t)(&a3));
    v15 = *(uint8_t *)(v11 + 16);
    goto LABEL_86;
  }
LABEL_8:
  v15 = *(uint8_t *)(v11 + 16);
  v65 = 1;
  v59 = 0;
  v66 = 0;
LABEL_9:
  n = 22;
  if ( v53 != 16 )
LABEL_10:
    n = v53;
  v68[0] = (size_t *)(&dword_213B814);
  if ( v15 != 0 )
    sub_1939B80(v68, 0x20u);
  v63 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v67 )
    v63 = 0x8000000000000000LL;
  v55 = v53;
  v16 = v63 / v53;
  s = (wchar_t *)(v11 + 204);
  if ( *(uint8_t *)(v11 + 292) == 0 )
  {
    v54 = 0;
    v64 = 0;
    if ( v65 != 0 )
      goto LABEL_46;
    if ( n <= 0xA )
      goto LABEL_63;
LABEL_76:
    if ( (unsigned int)(v14 - 48) <= 9 )
    {
      v41 = v14 - 48;
      goto LABEL_66;
    }
    if ( (unsigned int)(v14 - 97) <= 5 )
    {
      v41 = v14 - 87;
LABEL_66:
      while ( 1 )
      {
        v42 = HIDWORD(v54) < HIDWORD(v16);
        if ( HIDWORD(v54) > HIDWORD(v16) )
          break;
LABEL_67:
        if ( !v42 && (unsigned int)v54 > (unsigned int)v16 )
          break;
        v64 |= v63 - v41 < v55 * v54;
        v54 = v41 + v55 * v54;
        ++v59;
LABEL_70:
        if ( a3 != nullptr )
        {
          v43 = a3[2];
          if ( v43 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v43 + 4;
          a4 = -1;
        }
        v44 = sub_1943F80(&a3);
        if ( v44 == (uint8_t)sub_1943F80(&a5) )
        {
LABEL_30:
          v22 = 0;
          v65 = 1;
          goto LABEL_31;
        }
        v14 = sub_193BA20((int)(uintptr_t)(&a3));
        if ( n > 0xA )
          goto LABEL_76;
LABEL_63:
        if ( v14 <= 47 || (int)(n + 48) <= v14 )
          goto LABEL_46;
        v41 = v14 - 48;
      }
    }
    else
    {
      if ( (unsigned int)(v14 - 65) > 5 )
      {
LABEL_46:
        v23 = v68[0];
        v22 = 0;
        v24 = *(v68[0] - 3);
        v25 = v68[0] - 3;
        if ( v24 == 0 )
          goto LABEL_32;
        goto LABEL_47;
      }
      v41 = v14 - 55;
      v42 = HIDWORD(v54) < HIDWORD(v16);
      if ( HIDWORD(v54) <= HIDWORD(v16) )
        goto LABEL_67;
    }
    v64 = 1;
    goto LABEL_70;
  }
  v54 = 0;
  v64 = 0;
  if ( v65 != 0 )
    goto LABEL_46;
  while ( *(uint8_t *)(v11 + 16) == 0 || *(uint32_t *)(v11 + 40) != v14 )
  {
    if ( *(uint32_t *)(v11 + 36) == v14 )
      goto LABEL_46;
    v17 = wmemchr(s, v14, n);
    if ( v17 == nullptr )
      goto LABEL_46;
    v18 = v17 - s;
    v19 = v18;
    if ( v18 >= 16 )
      v19 = v18 - 6;
    if ( v16 < v54 )
    {
      v64 = 1;
    }
    else
    {
      v64 |= v63 - v19 < v55 * v54;
      v54 = v19 + v55 * v54;
      ++v59;
    }
LABEL_25:
    if ( a3 != nullptr )
    {
      v20 = a3[2];
      if ( v20 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v20 + 4;
      a4 = -1;
    }
    v21 = sub_1943F80(&a3);
    if ( v21 == (uint8_t)sub_1943F80(&a5) )
      goto LABEL_30;
    v14 = sub_193BA20((int)(uintptr_t)(&a3));
  }
  if ( v59 != 0 )
  {
    v37 = v68[0];
    v38 = *(v68[0] - 3);
    v39 = v38 + 1;
    if ( v38 + 1 > *(v68[0] - 2) || *((int *)v68[0] - 1) > 0 )
    {
      sub_1939B80(v68, v38 + 1);
      v37 = v68[0];
      v38 = *(v68[0] - 3);
    }
    *((uint8_t *)v37 + v38) = v59;
    v40 = v68[0];
    if ( v68[0] - 3 == (size_t *)(uintptr_t)(dword_213B808) )
    {
      v59 = 0;
    }
    else
    {
      *(v68[0] - 1) = 0;
      *(v40 - 3) = v39;
      v59 = 0;
      *((uint8_t *)v40 + v39) = 0;
    }
    goto LABEL_25;
  }
  v22 = 1;
LABEL_31:
  v23 = v68[0];
  v24 = *(v68[0] - 3);
  v25 = v68[0] - 3;
  if ( v24 != 0 )
  {
LABEL_47:
    v56 = v24 + 1;
    if ( v24 + 1 > *(v23 - 2) || (int)*(v23 - 1) > 0 )
    {
      sub_1939B80(v68, v56);
      v23 = v68[0];
      v24 = *(v68[0] - 3);
    }
    *((uint8_t *)v23 + v24) = v59;
    v34 = v68[0];
    v35 = v68[0] - 3;
    if ( v68[0] - 3 != (size_t *)(uintptr_t)(dword_213B808) )
    {
      *(v68[0] - 1) = 0;
      *(v34 - 3) = v56;
      *((uint8_t *)v34 + v56) = 0;
      v34 = v68[0];
      v35 = v68[0] - 3;
    }
    v51 = v34;
    v50 = v35;
    v36 = sub_1953E80(*(uint32_t *)(v11 + 8), *(uint32_t *)(v11 + 12), v68);
    v23 = v51;
    v25 = v50;
    if ( v36 == 0 )
      *a8 = 4;
  }
LABEL_32:
  if ( (v59 != 0 || v66 != 0 || *(v23 - 3) != 0) && v22 == 0 )
  {
    if ( v64 != 0 )
    {
      v30 = -1;
      v31 = 0x7FFFFFFF;
      if ( v67 )
      {
        v30 = 0;
        v31 = 0x80000000;
      }
      v32 = a9;
      *a9 = v30;
      v33 = a8;
      v32[1] = v31;
      *v33 = 4;
    }
    else
    {
      if ( v67 )
        v54 = -(int64_t)v54;
      *(uint64_t *)a9 = v54;
    }
  }
  else
  {
    v26 = a9;
    v27 = a8;
    *a9 = 0;
    v26[1] = 0;
    *v27 = 4;
  }
  if ( v65 != 0 )
    *a8 |= 2u;
  v28 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v28;
  if ( v25 != (size_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add((volatile int32_t *)v23 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v25);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194BFB0  (binary VA: 0x194bfb0)
// Original: sub_194BFB0
// ----------------------------------------------------------------------------
uint32_t * sub_194BFB0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, int *a9)
{
  sub_194B4E0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194C010  (binary VA: 0x194c010)
// Original: sub_194C010
// ----------------------------------------------------------------------------
uint32_t * sub_194C010(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, uint32_t *a9)
{
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  wchar_t v14;
  char v15;
  uint64_t v16;
  wchar_t *v17;
  int v18;
  int v19;
  unsigned int v20;
  char v21; // si
  char v22; // si
  size_t *v23;
  int v24;
  size_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  int v30;
  size_t *v32;
  size_t *v33;
  char v34;
  size_t *v35;
  int v36;
  size_t v37;
  size_t *v38;
  int v39;
  bool v40;
  uint64_t v41; // rdi
  unsigned int v42;
  char v43; // si
  int v44;
  unsigned int v45;
  char v46; // di
  unsigned int v47;
  int v48;
  typedef uint64_t _g4_t_v49;
  typedef size_t *_g4_t_v50;
  typedef size_t *_g4_t_v51;
  typedef int32_t _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint64_t _g4_t_v54;
  typedef int64_t _g4_t_v55;
  typedef int64_t _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef char _g4_t_v59;
  typedef int _g4_t_v60;
  typedef char _g4_t_v61;
  typedef wchar_t *_g4_t_s;
  typedef size_t _g4_t_n;
  typedef char _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char _g4_t_v66;
  typedef bool _g4_t_v67;
  typedef size_t *_g4_t_v68[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v49)) > _g4_s0 ? (8u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v50)) > _g4_s1 ? (16u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v51)) > _g4_s2 ? (20u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v52)) > _g4_s3 ? (24u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v53)) > _g4_s4 ? (24u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v54)) > _g4_s5 ? (24u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v55)) > _g4_s6 ? (24u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v56)) > _g4_s7 ? (32u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v57)) > _g4_s8 ? (32u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v58)) > _g4_s9 ? (32u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v59)) > _g4_s10 ? (40u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v60)) > _g4_s11 ? (40u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v61)) > _g4_s12 ? (40u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_s)) > _g4_s13 ? (44u + sizeof(_g4_t_s)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_n)) > _g4_s14 ? (48u + sizeof(_g4_t_n)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v64)) > _g4_s15 ? (60u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (61u + sizeof(_g4_t_v65)) > _g4_s16 ? (61u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (62u + sizeof(_g4_t_v66)) > _g4_s17 ? (62u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (63u + sizeof(_g4_t_v67)) > _g4_s18 ? (63u + sizeof(_g4_t_v67)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v68)) > _g4_s19 ? (76u + sizeof(_g4_t_v68)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 44u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 61u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 62u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 63u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);

  v9 = a7;
  v52 = sub_1902550(&dword_213B834);
  v10 = (int *)(*(uint32_t *)(*(uint32_t *)(v9 + 108) + 12) + 4 * v52);
  v11 = *v10;
  if ( *v10 == 0 )
  {
    v48 = opNew(0x128u);
    *(uint32_t *)(v48 + 4) = 0;
    *(uint32_t *)(v48 + 8) = 0;
    *(uint32_t *)v48 = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(v48 + 12) = 0;
    *(uint8_t *)(v48 + 16) = 0;
    *(uint32_t *)(v48 + 20) = 0;
    *(uint32_t *)(v48 + 24) = 0;
    *(uint32_t *)(v48 + 28) = 0;
    *(uint32_t *)(v48 + 32) = 0;
    *(uint32_t *)(v48 + 36) = 0;
    *(uint32_t *)(v48 + 40) = 0;
    *(uint8_t *)(v48 + 292) = 0;
    sub_193EEC0(v48, v9 + 108);
    sub_19023D0(*(uint32_t *)(v9 + 108), (volatile int32_t *)v48, v52);
    v11 = *v10;
  }
  v53 = 8;
  v12 = *(uint32_t *)(v9 + 12) & 0x4A;
  if ( v12 != 64 )
  {
    v13 = 10;
    if ( v12 == 8 )
      v13 = 16;
    v53 = v13;
  }
  v59 = sub_1943F80(&a3);
  v14 = 0;
  v67 = false;
  if ( v59 == (uint8_t)sub_1943F80(&a5) )
    goto LABEL_8;
  v44 = sub_193BA20((int)(uintptr_t)(&a3));
  v14 = v44;
  v67 = v44 == *(uint32_t *)(v11 + 188);
  if ( v44 != *(uint32_t *)(v11 + 188) && v44 != *(uint32_t *)(v11 + 192) )
  {
    v15 = *(uint8_t *)(v11 + 16);
LABEL_81:
    v60 = 0;
    v66 = 0;
    v58 = v12;
    while ( 1 )
    {
      if ( v15 != 0 && *(uint32_t *)(v11 + 40) == v14 || *(uint32_t *)(v11 + 36) == v14 )
      {
LABEL_120:
        v65 = 0;
        goto LABEL_9;
      }
      if ( *(uint32_t *)(v11 + 204) == v14 )
      {
        if ( v66 == 0 || v53 == 10 )
        {
          if ( v58 != 0 )
          {
            if ( v53 == 8 )
              v60 = 0;
            else
              ++v60;
            v66 = 1;
          }
          else
          {
            v60 = 0;
            v66 = 1;
            v53 = 8;
          }
          goto LABEL_92;
        }
      }
      else if ( v66 == 0 )
      {
        goto LABEL_120;
      }
      if ( *(uint32_t *)(v11 + 196) != v14 && *(uint32_t *)(v11 + 200) != v14 )
        goto LABEL_120;
      if ( v58 != 0 )
      {
        if ( v53 != 16 )
        {
          v65 = 0;
          goto LABEL_10;
        }
        v60 = 0;
        v66 = 0;
      }
      else
      {
        v60 = 0;
        v66 = 0;
        v53 = 16;
      }
LABEL_92:
      if ( a3 != nullptr )
      {
        v45 = a3[2];
        if ( v45 >= a3[3] )
          G4_VCALL<void>(a3, 40);
        else
          a3[2] = v45 + 4;
        a4 = -1;
      }
      v46 = sub_1943F80(&a3);
      if ( v46 == (uint8_t)sub_1943F80(&a5) )
      {
        v15 = *(uint8_t *)(v11 + 16);
        v65 = 1;
        goto LABEL_9;
      }
      v14 = sub_193BA20((int)(uintptr_t)(&a3));
      v15 = *(uint8_t *)(v11 + 16);
      if ( v66 == 0 )
        goto LABEL_120;
    }
  }
  v15 = *(uint8_t *)(v11 + 16);
  if ( v15 != 0 && v14 == *(uint32_t *)(v11 + 40) || v14 == *(uint32_t *)(v11 + 36) )
    goto LABEL_81;
  if ( a3 != nullptr )
  {
    v47 = a3[2];
    if ( v47 >= a3[3] )
      G4_VCALL<void>(a3, 40);
    else
      a3[2] = v47 + 4;
    a4 = -1;
  }
  v61 = sub_1943F80(&a3);
  if ( v61 != (uint8_t)sub_1943F80(&a5) )
  {
    v14 = sub_193BA20((int)(uintptr_t)(&a3));
    v15 = *(uint8_t *)(v11 + 16);
    goto LABEL_81;
  }
LABEL_8:
  v15 = *(uint8_t *)(v11 + 16);
  v65 = 1;
  v60 = 0;
  v66 = 0;
LABEL_9:
  n = 22;
  if ( v53 != 16 )
LABEL_10:
    n = v53;
  v68[0] = (size_t *)(&dword_213B814);
  if ( v15 != 0 )
    sub_1939B80(v68, 0x20u);
  v56 = v53;
  v16 = 0xFFFFFFFFFFFFFFFFLL / v53;
  s = (wchar_t *)(v11 + 204);
  if ( *(uint8_t *)(v11 + 292) == 0 )
  {
    v54 = 0;
    v64 = 0;
    if ( v65 != 0 )
      goto LABEL_42;
    if ( n <= 0xA )
      goto LABEL_58;
LABEL_71:
    if ( (unsigned int)(v14 - 48) <= 9 )
    {
      v39 = v14 - 48;
      goto LABEL_61;
    }
    if ( (unsigned int)(v14 - 97) <= 5 )
    {
      v39 = v14 - 87;
LABEL_61:
      while ( 1 )
      {
        v40 = HIDWORD(v54) < HIDWORD(v16);
        if ( HIDWORD(v54) > HIDWORD(v16) )
          break;
LABEL_62:
        if ( !v40 && (unsigned int)v54 > (unsigned int)v16 )
          break;
        LODWORD(v41) = ~v39;
        v49 = v56 * v54;
        v55 = v39;
        HIDWORD(v41) = ~(v39 >> 31);
        v64 |= v41 < v49;
        v54 = v49 + v55;
        ++v60;
LABEL_65:
        if ( a3 != nullptr )
        {
          v42 = a3[2];
          if ( v42 >= a3[3] )
            G4_VCALL<void>(a3, 40);
          else
            a3[2] = v42 + 4;
          a4 = -1;
        }
        v43 = sub_1943F80(&a3);
        if ( v43 == (uint8_t)sub_1943F80(&a5) )
        {
LABEL_28:
          v22 = 0;
          v65 = 1;
          goto LABEL_29;
        }
        v14 = sub_193BA20((int)(uintptr_t)(&a3));
        if ( n > 0xA )
          goto LABEL_71;
LABEL_58:
        if ( v14 <= 47 || (int)(n + 48) <= v14 )
          goto LABEL_42;
        v39 = v14 - 48;
      }
    }
    else
    {
      if ( (unsigned int)(v14 - 65) > 5 )
      {
LABEL_42:
        v23 = v68[0];
        v22 = 0;
        v24 = *(v68[0] - 3);
        v25 = v68[0] - 3;
        if ( v24 == 0 )
          goto LABEL_30;
        goto LABEL_43;
      }
      v39 = v14 - 55;
      v40 = HIDWORD(v54) < HIDWORD(v16);
      if ( HIDWORD(v54) <= HIDWORD(v16) )
        goto LABEL_62;
    }
    v64 = 1;
    goto LABEL_65;
  }
  v54 = 0;
  v64 = 0;
  if ( v65 != 0 )
    goto LABEL_42;
  while ( *(uint8_t *)(v11 + 16) == 0 || *(uint32_t *)(v11 + 40) != v14 )
  {
    if ( *(uint32_t *)(v11 + 36) == v14 )
      goto LABEL_42;
    v17 = wmemchr(s, v14, n);
    if ( v17 == nullptr )
      goto LABEL_42;
    v18 = v17 - s;
    v19 = v18;
    if ( v18 >= 16 )
      v19 = v18 - 6;
    if ( v16 < v54 )
    {
      v64 = 1;
    }
    else
    {
      v64 |= __PAIR64__(~(v19 >> 31), ~v19) < v56 * v54;
      v54 = v56 * v54 + v19;
      ++v60;
    }
LABEL_23:
    if ( a3 != nullptr )
    {
      v20 = a3[2];
      if ( v20 >= a3[3] )
        G4_VCALL<void>(a3, 40);
      else
        a3[2] = v20 + 4;
      a4 = -1;
    }
    v21 = sub_1943F80(&a3);
    if ( v21 == (uint8_t)sub_1943F80(&a5) )
      goto LABEL_28;
    v14 = sub_193BA20((int)(uintptr_t)(&a3));
  }
  if ( v60 != 0 )
  {
    v35 = v68[0];
    v36 = *(v68[0] - 3);
    v37 = v36 + 1;
    if ( v36 + 1 > *(v68[0] - 2) || *((int *)v68[0] - 1) > 0 )
    {
      sub_1939B80(v68, v36 + 1);
      v35 = v68[0];
      v36 = *(v68[0] - 3);
    }
    *((uint8_t *)v35 + v36) = v60;
    v38 = v68[0];
    if ( v68[0] - 3 == (size_t *)(uintptr_t)(dword_213B808) )
    {
      v60 = 0;
    }
    else
    {
      *(v68[0] - 1) = 0;
      *(v38 - 3) = v37;
      v60 = 0;
      *((uint8_t *)v38 + v37) = 0;
    }
    goto LABEL_23;
  }
  v22 = 1;
LABEL_29:
  v23 = v68[0];
  v24 = *(v68[0] - 3);
  v25 = v68[0] - 3;
  if ( v24 != 0 )
  {
LABEL_43:
    v57 = v24 + 1;
    if ( v24 + 1 > *(v23 - 2) || (int)*(v23 - 1) > 0 )
    {
      sub_1939B80(v68, v57);
      v23 = v68[0];
      v24 = *(v68[0] - 3);
    }
    *((uint8_t *)v23 + v24) = v60;
    v32 = v68[0];
    v33 = v68[0] - 3;
    if ( v68[0] - 3 != (size_t *)(uintptr_t)(dword_213B808) )
    {
      *(v68[0] - 1) = 0;
      *(v32 - 3) = v57;
      *((uint8_t *)v32 + v57) = 0;
      v32 = v68[0];
      v33 = v68[0] - 3;
    }
    v51 = v32;
    v50 = v33;
    v34 = sub_1953E80(*(uint32_t *)(v11 + 8), *(uint32_t *)(v11 + 12), v68);
    v23 = v51;
    v25 = v50;
    if ( v34 == 0 )
      *a8 = 4;
  }
LABEL_30:
  if ( (v60 != 0 || v66 != 0 || *(v23 - 3) != 0) && v22 == 0 )
  {
    if ( v64 != 0 )
    {
      v28 = a9;
      v29 = a8;
      *a9 = -1;
      v28[1] = -1;
      *v29 = 4;
    }
    else
    {
      if ( v67 )
        v54 = -(int64_t)v54;
      *(uint64_t *)a9 = v54;
    }
  }
  else
  {
    v26 = a9;
    v27 = a8;
    *a9 = 0;
    v26[1] = 0;
    *v27 = 4;
  }
  if ( v65 != 0 )
    *a8 |= 2u;
  v30 = a4;
  *a1 = (uint32_t)(uintptr_t)(a3);
  a1[1] = v30;
  if ( v25 != (size_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add((volatile int32_t *)v23 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v25);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194CAB0  (binary VA: 0x194cab0)
// Original: sub_194CAB0
// ----------------------------------------------------------------------------
uint32_t * sub_194CAB0(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, uint32_t *a9)
{
  sub_194C010(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194CB10  (binary VA: 0x194cb10)
// Original: sub_194CB10
// ----------------------------------------------------------------------------
void sub_194CB10()
{
  if ( byte_213B848 == 0 )
    byte_213B848 = 1;
  if ( byte_213B850 == 0 )
    byte_213B850 = 1;
  if ( byte_213B858 == 0 )
    byte_213B858 = 1;
  if ( byte_213B860 == 0 )
    byte_213B860 = 1;
  if ( byte_213B868 == 0 )
    byte_213B868 = 1;
  if ( byte_213B870 == 0 )
    byte_213B870 = 1;
  if ( byte_213B878 == 0 )
    byte_213B878 = 1;
  if ( byte_213B880 == 0 )
    byte_213B880 = 1;
  if ( byte_213B888 == 0 )
    byte_213B888 = 1;
  if ( byte_213B890 == 0 )
    byte_213B890 = 1;
  if ( byte_213B898 == 0 )
    byte_213B898 = 1;
  if ( byte_213B8A0 == 0 )
    byte_213B8A0 = 1;
}

// ----------------------------------------------------------------------------
// Function: sub_194CC60  (binary VA: 0x194cc60)
// Original: sub_194CC60
// ----------------------------------------------------------------------------
unsigned int sub_194CC60(uint32_t *a1, unsigned int a2, char *a3)
{
  unsigned int result;

  result = a2;
  if ( a2 > *(uint32_t *)(*a1 - 12) )
    sub_1900210(a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194CCA0  (binary VA: 0x194cca0)
// Original: sub_194CCA0
// ----------------------------------------------------------------------------
unsigned int sub_194CCA0(uint32_t *a1, int a2, unsigned int a3, char *a4)
{
  unsigned int result;

  result = a2 + 268435454 - *(uint32_t *)(*a1 - 12);
  if ( result < a3 )
    sub_1900180(a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194CD20  (binary VA: 0x194cd20)
// Original: sub_194CD20
// ----------------------------------------------------------------------------
wchar_t * sub_194CD20(wchar_t *s1, wchar_t *s2, size_t n)
{
  wchar_t *result;

  if ( n != 1 )
    return wmemcpy(s1, s2, n);
  result = (wchar_t *)*s2;
  *s1 = *s2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194CD70  (binary VA: 0x194cd70)
// Original: sub_194CD70
// ----------------------------------------------------------------------------
wchar_t * sub_194CD70(wchar_t *s1, wchar_t *s2, size_t n)
{
  wchar_t *result;

  if ( n != 1 )
    return wmemmove(s1, s2, n);
  result = (wchar_t *)*s2;
  *s1 = *s2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194CDC0  (binary VA: 0x194cdc0)
// Original: sub_194CDC0
// ----------------------------------------------------------------------------
wchar_t * sub_194CDC0(wchar_t *s, int n, wchar_t c)
{
  wchar_t *result;

  result = (wchar_t *)n;
  if ( n != 1 )
    return wmemset(s, c, n);
  *s = c;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194CE00  (binary VA: 0x194ce00)
// Original: sub_194CE00
// ----------------------------------------------------------------------------
wchar_t * sub_194CE00(wchar_t *s1, wchar_t *s2, int a3)
{
  wchar_t *result;

  if ( (a3 - (int)(uintptr_t)(s2)) >> 2 != 1 )
    return wmemcpy(s1, s2, (a3 - (int)(uintptr_t)(s2)) >> 2);
  result = (wchar_t *)*s2;
  *s1 = *s2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194CE50  (binary VA: 0x194ce50)
// Original: sub_194CE50
// ----------------------------------------------------------------------------
wchar_t * sub_194CE50(wchar_t *s1, wchar_t *s2, int a3)
{
  wchar_t *result;

  if ( (a3 - (int)(uintptr_t)(s2)) >> 2 != 1 )
    return wmemcpy(s1, s2, (a3 - (int)(uintptr_t)(s2)) >> 2);
  result = (wchar_t *)*s2;
  *s1 = *s2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194CEA0  (binary VA: 0x194cea0)
// Original: sub_194CEA0
// ----------------------------------------------------------------------------
wchar_t * sub_194CEA0(wchar_t *s1, wchar_t *s2, int a3)
{
  wchar_t *result;

  if ( (a3 - (int)(uintptr_t)(s2)) >> 2 != 1 )
    return wmemcpy(s1, s2, (a3 - (int)(uintptr_t)(s2)) >> 2);
  result = (wchar_t *)*s2;
  *s1 = *s2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194CEF0  (binary VA: 0x194cef0)
// Original: sub_194CEF0
// ----------------------------------------------------------------------------
wchar_t * sub_194CEF0(wchar_t *s1, wchar_t *s2, int a3)
{
  wchar_t *result;

  if ( (a3 - (int)(uintptr_t)(s2)) >> 2 != 1 )
    return wmemcpy(s1, s2, (a3 - (int)(uintptr_t)(s2)) >> 2);
  result = (wchar_t *)*s2;
  *s1 = *s2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194CF50  (binary VA: 0x194cf50)
// Original: sub_194CF50
// ----------------------------------------------------------------------------
void * sub_194CF50()
{
  return &unk_213B8A8;
}

// ----------------------------------------------------------------------------
// Function: sub_194CF70  (binary VA: 0x194cf70)
// Original: sub_194CF70
// ----------------------------------------------------------------------------
uint32_t * sub_194CF70(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&unk_213B8B4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194CF90  (binary VA: 0x194cf90)
// Original: sub_194CF90
// ----------------------------------------------------------------------------
uint32_t * sub_194CF90(uint32_t *a1, uint32_t *a2)
{
  *a1 = *a2;
  *a2 = (uint32_t)(uintptr_t)(&unk_213B8B4);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_194D0D0  (binary VA: 0x194d0d0)
// Original: sub_194D0D0
// ----------------------------------------------------------------------------
int sub_194D0D0(uint32_t *a1, unsigned int a2)
{
  if ( a2 >= *(uint32_t *)(*a1 - 12) )
    sub_1900210("basic_string::at");
  return *a1 + 4 * a2;
}

// ----------------------------------------------------------------------------
// Function: sub_194D130  (binary VA: 0x194d130)
// Original: sub_194D130
// ----------------------------------------------------------------------------
size_t sub_194D130(uint32_t *a1, wchar_t *s1, size_t a3, unsigned int a4)
{
  unsigned int v4;
  size_t n;
  const wchar_t *s2;

  v4 = *(uint32_t *)(*a1 - 12);
  if ( a4 > v4 )
    sub_1900210("basic_string::copy");
  n = v4 - a4;
  if ( n > a3 )
    n = a3;
  if ( n != 0 )
  {
    s2 = (const wchar_t *)(*a1 + 4 * a4);
    if ( n == 1 )
      *s1 = *s2;
    else
      wmemcpy(s1, s2, n);
  }
  return n;
}

// ----------------------------------------------------------------------------
// Function: sub_194D1C0  (binary VA: 0x194d1c0)
// Original: sub_194D1C0
// ----------------------------------------------------------------------------
int sub_194D1C0(int *a1, int *a2)
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
// Function: sub_194D200  (binary VA: 0x194d200)
// Original: sub_194D200
// ----------------------------------------------------------------------------
int * sub_194D200(int *a1, int *a2)
{
  sub_194D1C0(a1, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194D230  (binary VA: 0x194d230)
// Original: sub_194D230
// ----------------------------------------------------------------------------
int * sub_194D230(int *a1, int *a2)
{
  sub_194D1C0(a1, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_194D280  (binary VA: 0x194d280)
// Original: sub_194D280
// ----------------------------------------------------------------------------
int sub_194D280(uint32_t *a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5;
  unsigned int v6;
  unsigned int v8;
  const wchar_t *s1;
  unsigned int v10;
  int v11;
  int v12;
  unsigned int v13;

  v5 = a3;
  v6 = *(uint32_t *)(*a1 - 12);
  if ( a4 != 0 )
  {
    if ( a4 > v6 )
      return -1;
    v13 = v6 - a4;
    if ( a3 > v6 - a4 )
    {
      return -1;
    }
    else
    {
      v8 = a3 + 1;
      for ( s1 = (const wchar_t *)(*a1 + 4 * (a3 + 1)); ; ++s1 )
      {
        v10 = v8;
        if ( *(s1 - 1) == *(uint32_t *)a2 )
        {
          v12 = a2;
          v11 = wmemcmp(s1, (const wchar_t *)(a2 + 4), a4 - 1);
          a2 = v12;
          if ( v11 == 0 )
            break;
        }
        ++v8;
        if ( v13 < v10 )
          return -1;
      }
      return v8 - 1;
    }
  }
  else if ( a3 > v6 )
  {
    return -1;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_194D360  (binary VA: 0x194d360)
// Original: sub_194D360
// ----------------------------------------------------------------------------
int sub_194D360(uint32_t *a1, int *a2, unsigned int a3)
{
  return sub_194D280(a1, *a2, a3, *(uint32_t *)(*a2 - 12));
}

// ----------------------------------------------------------------------------
// Function: sub_194D390  (binary VA: 0x194d390)
// Original: sub_194D390
// ----------------------------------------------------------------------------
int sub_194D390(uint32_t *a1, wchar_t *s, unsigned int a3)
{
  size_t v3;

  v3 = wcslen(s);
  return sub_194D280(a1, (int)(uintptr_t)(s), a3, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_194D3E0  (binary VA: 0x194d3e0)
// Original: sub_194D3E0
// ----------------------------------------------------------------------------
int sub_194D3E0(int *a1, wchar_t c, unsigned int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  wchar_t *v7;

  v3 = *a1;
  v4 = -1;
  v5 = *(uint32_t *)(*a1 - 12);
  if ( a3 < v5 )
  {
    v7 = (wchar_t *)(wmemchr((const wchar_t *)(v3 + 4 * a3), c, v5 - a3));
    if ( v7 != nullptr )
      return ((int)(uintptr_t)(v7) - v3) >> 2;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_194D450  (binary VA: 0x194d450)
// Original: sub_194D450
// ----------------------------------------------------------------------------
unsigned int sub_194D450(uint32_t *a1, wchar_t *s2, unsigned int a3, size_t n)
{
  unsigned int v4;
  size_t v5;
  unsigned int v7;
  const wchar_t *s1;

  v4 = 0xFFFFFFFF;
  v5 = *(uint32_t *)(*a1 - 12);
  if ( n <= v5 )
  {
    v7 = v5 - n;
    v4 = a3;
    if ( v7 <= a3 )
      v4 = v7;
    for ( s1 = (const wchar_t *)(*a1 + 4 * v4); wmemcmp(s1, s2, n) != 0; --s1 )
    {
      if ( v4 == 0 )
        return -1;
      --v4;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_194D4E0  (binary VA: 0x194d4e0)
// Original: sub_194D4E0
// ----------------------------------------------------------------------------
unsigned int sub_194D4E0(uint32_t *a1, wchar_t **a2, unsigned int a3)
{
  return sub_194D450(a1, *a2, a3, *(*a2 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_194D510  (binary VA: 0x194d510)
// Original: sub_194D510
// ----------------------------------------------------------------------------
unsigned int sub_194D510(uint32_t *a1, wchar_t *s, unsigned int a3)
{
  size_t v3;

  v3 = wcslen(s);
  return sub_194D450(a1, s, a3, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_194D560  (binary VA: 0x194d560)
// Original: sub_194D560
// ----------------------------------------------------------------------------
int sub_194D560(uint32_t *a1, int a2, unsigned int a3)
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
      if ( *(uint32_t *)(*a1 + 4 * result) == a2 )
        return result;
    }
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194D5B0  (binary VA: 0x194d5b0)
// Original: sub_194D5B0
// ----------------------------------------------------------------------------
unsigned int sub_194D5B0(int *a1, wchar_t *s, unsigned int a3, size_t n)
{
  unsigned int v4;
  int v5;
  int i;

  v4 = a3;
  if ( n == 0 )
    return -1;
  v5 = *a1;
  if ( a3 >= *(uint32_t *)(*a1 - 12) )
    return -1;
  for ( i = 4 * a3; wmemchr(s, *(uint32_t *)(v5 + i), n) == nullptr; i += 4 )
  {
    v5 = *a1;
    if ( ++v4 >= *(uint32_t *)(*a1 - 12) )
      return -1;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_194D630  (binary VA: 0x194d630)
// Original: sub_194D630
// ----------------------------------------------------------------------------
unsigned int sub_194D630(int *a1, wchar_t **a2, unsigned int a3)
{
  return sub_194D5B0(a1, *a2, a3, *(*a2 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_194D660  (binary VA: 0x194d660)
// Original: sub_194D660
// ----------------------------------------------------------------------------
unsigned int sub_194D660(int *a1, wchar_t *s, unsigned int a3)
{
  size_t v3;

  v3 = wcslen(s);
  return sub_194D5B0(a1, s, a3, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_194D6C0  (binary VA: 0x194d6c0)
// Original: sub_194D6C0
// ----------------------------------------------------------------------------
unsigned int sub_194D6C0(int *a1, wchar_t *s, unsigned int a3, size_t n)
{
  int v4;
  int v5;
  unsigned int v6;
  int v8;

  v4 = *a1;
  v5 = *(uint32_t *)(*a1 - 12);
  if ( n == 0 || v5 == 0 )
    return -1;
  v6 = v5 - 1;
  if ( a3 <= v6 )
    v6 = a3;
  v8 = 4 * v6;
  while ( wmemchr(s, *(uint32_t *)(v4 + v8), n) == nullptr )
  {
    v8 -= 4;
    if ( v6 == 0 )
      return -1;
    --v6;
    v4 = *a1;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_194D760  (binary VA: 0x194d760)
// Original: sub_194D760
// ----------------------------------------------------------------------------
unsigned int sub_194D760(int *a1, wchar_t **a2, unsigned int a3)
{
  return sub_194D6C0(a1, *a2, a3, *(*a2 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_194D790  (binary VA: 0x194d790)
// Original: sub_194D790
// ----------------------------------------------------------------------------
unsigned int sub_194D790(int *a1, wchar_t *s, unsigned int a3)
{
  size_t v3;

  v3 = wcslen(s);
  return sub_194D6C0(a1, s, a3, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_194D7F0  (binary VA: 0x194d7f0)
// Original: sub_194D7F0
// ----------------------------------------------------------------------------
unsigned int sub_194D7F0(int *a1, wchar_t *s, unsigned int a3, size_t n)
{
  unsigned int v4;
  int v5;
  int i;

  v4 = a3;
  v5 = *a1;
  if ( a3 >= *(uint32_t *)(*a1 - 12) )
    return -1;
  for ( i = 4 * a3; wmemchr(s, *(uint32_t *)(v5 + i), n) != nullptr; i += 4 )
  {
    v5 = *a1;
    if ( ++v4 >= *(uint32_t *)(*a1 - 12) )
      return -1;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_194D870  (binary VA: 0x194d870)
// Original: sub_194D870
// ----------------------------------------------------------------------------
unsigned int sub_194D870(int *a1, wchar_t **a2, unsigned int a3)
{
  return sub_194D7F0(a1, *a2, a3, *(*a2 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_194D8A0  (binary VA: 0x194d8a0)
// Original: sub_194D8A0
// ----------------------------------------------------------------------------
unsigned int sub_194D8A0(int *a1, wchar_t *s, unsigned int a3)
{
  size_t v3;

  v3 = wcslen(s);
  return sub_194D7F0(a1, s, a3, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_194D8F0  (binary VA: 0x194d8f0)
// Original: sub_194D8F0
// ----------------------------------------------------------------------------
int sub_194D8F0(int *a1, int a2, unsigned int a3)
{
  int result;
  int v4;
  unsigned int v5;
  int v6;

  result = a3;
  v4 = *a1;
  v5 = *(uint32_t *)(*a1 - 12);
  if ( a3 >= v5 )
    return -1;
  v6 = *(uint32_t *)(v4 + 4 * a3);
  if ( v6 == a2 )
  {
    while ( ++result < v5 )
    {
      if ( *(uint32_t *)(v4 + 4 * result) != v6 )
        return result;
    }
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194D930  (binary VA: 0x194d930)
// Original: sub_194D930
// ----------------------------------------------------------------------------
unsigned int sub_194D930(int *a1, wchar_t *s, unsigned int a3, size_t n)
{
  int v4;
  unsigned int v5;
  int v6;
  int v8;

  v4 = *a1;
  v5 = 0xFFFFFFFF;
  v6 = *(uint32_t *)(*a1 - 12);
  if ( v6 != 0 )
  {
    v5 = v6 - 1;
    if ( a3 <= v6 - 1 )
      v5 = a3;
    v8 = 4 * v5;
    while ( wmemchr(s, *(uint32_t *)(v4 + v8), n) != nullptr )
    {
      v8 -= 4;
      if ( v5 == 0 )
        return -1;
      --v5;
      v4 = *a1;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_194D9E0  (binary VA: 0x194d9e0)
// Original: sub_194D9E0
// ----------------------------------------------------------------------------
unsigned int sub_194D9E0(int *a1, wchar_t **a2, unsigned int a3)
{
  return sub_194D930(a1, *a2, a3, *(*a2 - 3));
}

// ----------------------------------------------------------------------------
// Function: sub_194DA10  (binary VA: 0x194da10)
// Original: sub_194DA10
// ----------------------------------------------------------------------------
unsigned int sub_194DA10(int *a1, wchar_t *s, unsigned int a3)
{
  size_t v3;

  v3 = wcslen(s);
  return sub_194D930(a1, s, a3, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_194DA60  (binary VA: 0x194da60)
// Original: sub_194DA60
// ----------------------------------------------------------------------------
int sub_194DA60(uint32_t *a1, int a2, unsigned int a3)
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
    while ( *(uint32_t *)(*a1 + 4 * result) == a2 )
    {
      if ( result == 0 )
        return -1;
      --result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194DAB0  (binary VA: 0x194dab0)
// Original: sub_194DAB0
// ----------------------------------------------------------------------------
int sub_194DAB0(const wchar_t **a1, const wchar_t **a2)
{
  size_t v2;
  size_t v3;
  size_t n;
  size_t v5;
  int result;

  v2 = *(*a2 - 3);
  v3 = *(*a1 - 3);
  n = v3;
  if ( v2 <= v3 )
    n = *(*a2 - 3);
  v5 = v3 - v2;
  result = wmemcmp(*a1, *a2, n);
  if ( result == 0 )
    return v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194DB10  (binary VA: 0x194db10)
// Original: sub_194DB10
// ----------------------------------------------------------------------------
size_t sub_194DB10(uint32_t *a1, unsigned int a2, size_t a3, const wchar_t **a4)
{
  unsigned int v4;
  size_t v5;
  size_t v6;
  size_t n;
  size_t v8;
  size_t result;

  v4 = *(uint32_t *)(*a1 - 12);
  if ( a2 > v4 )
    sub_1900210("basic_string::compare");
  v5 = v4 - a2;
  if ( v5 > a3 )
    v5 = a3;
  v6 = *(*a4 - 3);
  n = v6;
  if ( v5 <= v6 )
    n = v5;
  v8 = v5 - v6;
  result = wmemcmp((const wchar_t *)(*a1 + 4 * a2), *a4, n);
  if ( result == 0 )
    return v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194DBA0  (binary VA: 0x194dba0)
// Original: sub_194DBA0
// ----------------------------------------------------------------------------
unsigned int sub_194DBA0(uint32_t *a1, unsigned int a2, unsigned int a3, uint32_t *a4, unsigned int a5, size_t a6)
{
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  size_t v9;
  size_t n;
  unsigned int v11;
  unsigned int result;

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
  v11 = v8 - v9;
  result = wmemcmp((const wchar_t *)(*a1 + 4 * a2), (const wchar_t *)(*a4 + 4 * a5), n);
  if ( result == 0 )
    return v11;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194DC50  (binary VA: 0x194dc50)
// Original: sub_194DC50
// ----------------------------------------------------------------------------
size_t sub_194DC50(const wchar_t **a1, wchar_t *s)
{
  size_t v2;
  size_t v3;
  bool v4; // cc
  size_t v5;
  size_t n;
  size_t v7;
  size_t result;

  v2 = *(*a1 - 3);
  v3 = wcslen(s);
  v4 = v3 <= v2;
  v5 = v3;
  n = v2;
  if ( v4 )
    n = v5;
  v7 = v2 - v5;
  result = wmemcmp(*a1, s, n);
  if ( result == 0 )
    return v7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194DCD0  (binary VA: 0x194dcd0)
// Original: sub_194DCD0
// ----------------------------------------------------------------------------
unsigned int sub_194DCD0(uint32_t *a1, unsigned int a2, unsigned int a3, wchar_t *s)
{
  unsigned int v4;
  unsigned int v5;
  size_t v6;
  bool v7; // cc
  size_t v8;
  size_t n;
  unsigned int v10;
  unsigned int result;

  v4 = *(uint32_t *)(*a1 - 12);
  if ( a2 > v4 )
    sub_1900210("basic_string::compare");
  v5 = v4 - a2;
  if ( v5 > a3 )
    v5 = a3;
  v6 = wcslen(s);
  v7 = v6 <= v5;
  v8 = v6;
  n = v5;
  if ( v7 )
    n = v8;
  v10 = v5 - v8;
  result = wmemcmp((const wchar_t *)(*a1 + 4 * a2), s, n);
  if ( result == 0 )
    return v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194DD70  (binary VA: 0x194dd70)
// Original: sub_194DD70
// ----------------------------------------------------------------------------
int sub_194DD70(uint32_t *a1, unsigned int a2, unsigned int a3, wchar_t *s2, size_t a5)
{
  unsigned int v5;
  unsigned int v6;
  size_t n;
  size_t v8;
  int result;

  v5 = *(uint32_t *)(*a1 - 12);
  if ( a2 > v5 )
    sub_1900210("basic_string::compare");
  v6 = v5 - a2;
  if ( v6 > a3 )
    v6 = a3;
  n = v6;
  if ( a5 <= v6 )
    n = a5;
  v8 = v6 - a5;
  result = wmemcmp((const wchar_t *)(*a1 + 4 * a2), s2, n);
  if ( result == 0 )
    return v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194DE00  (binary VA: 0x194de00)
// Original: sub_194DE00
// ----------------------------------------------------------------------------
void * sub_194DE00()
{
  return &unk_213B8A8;
}

// ----------------------------------------------------------------------------
// Function: sub_194DE60  (binary VA: 0x194de60)
// Original: sub_194DE60
// ----------------------------------------------------------------------------
int sub_194DE60(int a1, int a2)
{
  int result;

  result = a1;
  if ( (void *)a1 != &unk_213B8A8 )
  {
    *(uint32_t *)(a1 + 8) = 0;
    *(uint32_t *)a1 = a2;
    *(uint32_t *)(a1 + 4 * a2 + 12) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194DEB0  (binary VA: 0x194deb0)
// Original: sub_194DEB0
// ----------------------------------------------------------------------------
int sub_194DEB0(unsigned int a1, unsigned int a2)
{
  unsigned int v2;
  size_t v3;
  unsigned int v4;
  unsigned int v5;
  int result;

  v2 = a1;
  if ( a1 > 0xFFFFFFE )
    sub_1900180("basic_string::_S_create");
  v3 = 4 * a1 + 16;
  if ( a1 > a2 )
  {
    if ( a1 < 2 * a2 )
      v2 = 2 * a2;
    v3 = 4 * v2 + 16;
    v4 = 4 * v2 + 32;
    if ( v4 > 0x1000 && a2 < v2 )
    {
      v5 = v2 + ((4096 - (v4 & 0xFFF)) >> 2);
      v2 = 268435454;
      if ( v5 <= 0xFFFFFFE )
        v2 = v5;
      v3 = 4 * v2 + 16;
    }
  }
  result = opNew(v3);
  *(uint32_t *)(result + 4) = v2;
  *(uint32_t *)(result + 8) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194DF50  (binary VA: 0x194df50)
// Original: sub_194DF50
// ----------------------------------------------------------------------------
void * sub_194DF50(size_t n, wchar_t c)
{
  void *result;
  int v3;
  int v4;
  int v5;

  result = &unk_213B8B4;
  if ( n != 0 )
  {
    v3 = sub_194DEB0(n, 0);
    v4 = v3;
    if ( n == 1 )
    {
      *(uint32_t *)(v3 + 12) = c;
      v5 = v3 + 12;
    }
    else
    {
      v5 = v3 + 12;
      wmemset((wchar_t *)(v3 + 12), c, n);
    }
    if ( (void *)v4 != &unk_213B8A8 )
    {
      *(uint32_t *)(v4 + 8) = 0;
      *(uint32_t *)v4 = n;
      *(uint32_t *)(v4 + 4 * n + 12) = 0;
    }
    return (void *)v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194E010  (binary VA: 0x194e010)
// Original: sub_194E010
// ----------------------------------------------------------------------------
void * sub_194E010(uint32_t *a1, size_t a2, wchar_t a3)
{
  void *result;

  result = sub_194DF50(a2, a3);
  *a1 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194E040  (binary VA: 0x194e040)
// Original: sub_194E040
// ----------------------------------------------------------------------------
void * sub_194E040(uint32_t *a1)
{
  void *result;

  result = sub_194DF50(0, 0);
  *a1 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194E070  (binary VA: 0x194e070)
// Original: sub_194E070
// ----------------------------------------------------------------------------
void sub_194E070(void *a1)
{
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_194E092  (binary VA: 0x194e092)
// Original: sub_194E092
// ----------------------------------------------------------------------------
void sub_194E092(volatile int32_t *a1)
{
  if ( __sync_fetch_and_add(a1 + 2, 0xFFFFFFFF) <= 0 )
    sub_194E070((void *)a1);
}

// ----------------------------------------------------------------------------
// Function: sub_194E0C0  (binary VA: 0x194e0c0)
// Original: sub_194E0C0
// ----------------------------------------------------------------------------
void sub_194E0C0(volatile int32_t *a1)
{
  if ( a1 != (volatile int32_t *)&unk_213B8A8 )
    sub_194E092(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_194E0F0  (binary VA: 0x194e0f0)
// Original: sub_194E0F0
// ----------------------------------------------------------------------------
void sub_194E0F0(uint32_t *a1)
{
  volatile int32_t *v1;

  v1 = (volatile int32_t *)(*a1 - 12);
  if ( v1 != (volatile int32_t *)&unk_213B8A8 )
    sub_194E092(v1);
}

// ----------------------------------------------------------------------------
// Function: sub_194E130  (binary VA: 0x194e130)
// Original: sub_194E130
// ----------------------------------------------------------------------------
wchar_t * sub_194E130(wchar_t **a1, size_t a2, int a3, int a4)
{
  wchar_t *result;
  int v5;
  size_t n;
  int v7;
  size_t v8;
  size_t v9;
  size_t v10;
  const wchar_t *s2;
  wchar_t *v12;
  unsigned int v13;
  wchar_t *v14;

  result = *a1;
  v5 = *(*a1 - 3);
  v13 = v5 + a4 - a3;
  n = v5 - a2 - a3;
  if ( v13 <= *(*a1 - 2) && *(result - 1) <= 0 )
  {
    if ( a3 != a4 && n != 0 )
    {
      if ( n == 1 )
      {
        result[a4 + a2] = result[a2 + a3];
      }
      else
      {
        wmemmove(&result[a4 + a2], &result[a2 + a3], n);
        result = *a1;
      }
    }
    goto LABEL_8;
  }
  v7 = sub_194DEB0(v13, *(result - 2));
  v8 = a2;
  v12 = *a1;
  if ( a2 != 0 )
  {
    if ( a2 != 1 )
    {
      v14 = (wchar_t *)(v7 + 12);
      wmemcpy((wchar_t *)(v7 + 12), v12, a2);
      v8 = a2;
      v12 = *a1;
      goto LABEL_4;
    }
    *(uint32_t *)(v7 + 12) = **a1;
  }
  v14 = (wchar_t *)(v7 + 12);
LABEL_4:
  if ( n != 0 )
  {
    v9 = v8 + a3;
    v10 = a4 + v8;
    s2 = &v12[v9];
    if ( n == 1 )
    {
      v14[v10] = *s2;
    }
    else
    {
      wmemcpy(&v14[v10], s2, n);
      v12 = *a1;
    }
  }
  if ( v12 - 3 != (wchar_t *)&unk_213B8A8 )
    sub_194E092(v12 - 3);
  result = v14;
  *a1 = v14;
LABEL_8:
  if ( result - 3 != (wchar_t *)&unk_213B8A8 )
  {
    *(result - 1) = 0;
    *(result - 3) = v13;
    result[v13] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_194E320  (binary VA: 0x194e320)
// Original: sub_194E320
// ----------------------------------------------------------------------------
wchar_t ** sub_194E320(wchar_t **a1, size_t a2, int a3, wchar_t *s2, size_t n)
{
  wchar_t *s1;

  sub_194E130(a1, a2, a3, n);
  if ( n != 0 )
  {
    s1 = &(*a1)[a2];
    if ( n == 1 )
      *s1 = *s2;
    else
      wmemcpy(s1, s2, n);
  }
  return a1;
}


