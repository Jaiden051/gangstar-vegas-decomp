#include "Core/Utils/DecompTypes.h"
#include "TU37_VIPSettingStorage.h"

// ----------------------------------------------------------------------------
// Function: sub_C22820  (binary VA: 0xc22820)
// Original: sub_C22820
// ----------------------------------------------------------------------------
int sub_C22820()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE9E0);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE9E0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE9E4), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE9E4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE9E8), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE9E8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE9EC), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE9EC, &unk_20D1280);
  dword_20DE9F0 = 1056964608;
  dword_20DE9F4 = 1056964608;
  dword_20DE9F8 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_C22920  (binary VA: 0xc22920)
// Original: sub_C22920
// ----------------------------------------------------------------------------
int sub_C22920(int a1)
{
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C22930  (binary VA: 0xc22930)
// Original: sub_C22930
// ----------------------------------------------------------------------------
void sub_C22930(int a1, int a2, int a3)
{
  int i;
  int v5;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[1036];
  enum : size_t {
    _g4_s0 = 1120u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  for ( i = a3; i != 0; a2 = v6 )
  {
    v5 = 1024;
    if ( i <= 1024 )
      v5 = i;
    v6 = a2;
    G4_VCALL<void>(a2, 12, v7, v5);
    G4_VCALL<void>(a1, 16, v7, v5);
    i -= v5;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C229B0  (binary VA: 0xc229b0)
// Original: sub_C229B0
// ----------------------------------------------------------------------------
int sub_C229B0(int a1, int a2, int a3)
{
  int v4;
  int v5;

  v4 = G4_VCALL<int>(a1, 24);
  v5 = G4_VCALL<int>(a1, 12, a2, a3);
  G4_VCALL<void>(a1, 20, v4, 0);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_C22A10  (binary VA: 0xc22a10)
// Original: sub_C22A10
// ----------------------------------------------------------------------------
int sub_C22A10(int a1)
{
  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B7E8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C22A30  (binary VA: 0xc22a30)
// Original: sub_C22A30
// ----------------------------------------------------------------------------
int sub_C22A30(int a1)
{
  uint8_t v2[13];

  G4_VCALL<void>(a1, 12, v2, 1);
  return v2[0];
}

// ----------------------------------------------------------------------------
// Function: sub_C22A60  (binary VA: 0xc22a60)
// Original: sub_C22A60
// ----------------------------------------------------------------------------
int sub_C22A60(int a1, char a2)
{
  uint8_t v3[16];

  v3[0] = a2;
  return G4_VCALL<int>(a1, 16, v3, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_C22A90  (binary VA: 0xc22a90)
// Original: sub_C22A90
// ----------------------------------------------------------------------------
uint32_t * sub_C22A90(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206B7E8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C22AB0  (binary VA: 0xc22ab0)
// Original: sub_C22AB0
// ----------------------------------------------------------------------------
int sub_C22AB0()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_C22AC0  (binary VA: 0xc22ac0)
// Original: sub_C22AC0
// ----------------------------------------------------------------------------
void sub_C22AC0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206B7E8);
  opDelete(a1);
}


