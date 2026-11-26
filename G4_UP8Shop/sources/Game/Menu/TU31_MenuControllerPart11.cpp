#include "Core/Utils/DecompTypes.h"
#include "TU31_MenuControllerPart11.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: sub_C0F2B0  (binary VA: 0xc0f2b0)
// Original: sub_C0F2B0
// ----------------------------------------------------------------------------
int sub_C0F2B0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE7A4);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE7A4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE7A8), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE7A8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE7AC), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE7AC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE7B0), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE7B0, &unk_20D1280);
  dword_20DE7B4 = 1056964608;
  dword_20DE7B8 = 1056964608;
  dword_20DE7BC = 1056964608;
  dword_20DE79C = (int)(uintptr_t)(&dword_20D1870);
  dword_20DE798 = 1920234601;
  dword_20DE7A0 = (int)(uintptr_t)("GSInGameMenu");
  __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &dword_20DE798, &unk_20D1280);
  dword_20DE78C = (int)(uintptr_t)(&dword_20DE784);
  dword_20DE790 = (int)(uintptr_t)(&dword_20DE784);
  dword_20DE784 = 0;
  dword_20DE788 = 0;
  dword_20DE794 = 0;
  return __cxa_atexit((void (*)(void *))g4_std::map_string_string_7c7b5d::Destroy, &dword_20DE784 - 1, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_C0F430  (binary VA: 0xc0f430)
// Original: sub_C0F430
// ----------------------------------------------------------------------------
uint32_t * sub_C0F430(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204BDA8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C0F450  (binary VA: 0xc0f450)
// Original: sub_C0F450
// ----------------------------------------------------------------------------
void sub_C0F450(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204BDA8);
  opDelete(a1);
}



// ============================================================================
// Address:   0xc0f480 (size: 81 bytes)
// Symbol:    sub_C0F480
// Demangled: sub_C0F480
// ============================================================================
int (**sub_C0F480(uint32_t *a1))(int)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206B4E8);
  sub_5BCA80(dword_20D42C0);
  *(uint8_t *)(unk_20D186D) = (uint8_t)(uintptr_t)(0);
  *a1 = (uint32_t)(uintptr_t)(&off_206B518);
  return (int (**)(int))(uintptr_t)(&off_206B518);
}
// ----------------------------------------------------------------------------
// Function: sub_C0F4E0  (binary VA: 0xc0f4e0)
// Original: sub_C0F4E0
// ----------------------------------------------------------------------------
uint8_t sub_C0F4E0(int a1)
{
  uint8_t result;
  typedef int _g4_t_v2;
  typedef uint8_t _g4_t_v3[68];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v3)) > _g4_s1 ? (28u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 28u);

  result = sub_AB7290();
  if ( result == 0 )
  {
    result = sub_64D8C0(v2);
    if ( result != 0 && *(uint8_t *)(a1 + 4) == 0 )
    {
      sub_6E55D0((int)(uintptr_t)(v3));
      sub_6E74A0();
      *(uint8_t *)(a1 + 4) = 1;
      return (uint8_t)sub_6D4BF0((int)(uintptr_t)(v3));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C0F560  (binary VA: 0xc0f560)
// Original: sub_C0F560
// ----------------------------------------------------------------------------
void sub_C0F560(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206B4E8);
  sub_5BCA80(dword_20D42C0);
  *(uint8_t *)(unk_20D186D) = (uint8_t)(uintptr_t)(0);
  *a1 = (uint32_t)(uintptr_t)(&off_206B518);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C0F5C0  (binary VA: 0xc0f5c0)
// Original: sub_C0F5C0
// ----------------------------------------------------------------------------
int sub_C0F5C0(int a1)
{
  char v1;
  uint8_t *v2;
  uint8_t *v3;
  uint8_t *v4;
  void *v5;
  int result;
  int *v7;
  int v8;
  bool v9;

  if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
  {
    sub_7D7730(&unk_20D2D60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
    __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
  }
  v1 = byte_20D2D64;
  v2 = nullptr;
  if ( byte_20D2D64 == 0 )
    v2 = (uint8_t *)(&unk_20D2D60);
  if ( v2[89] != 0 && *(uint8_t *)(dword_20DDDC0 + 904) != 0 )
  {
    if ( *(uint8_t *)(a1 + 9) == 0 )
    {
      v9 = byte_20D2D50 == 0;
      *(uint8_t *)(a1 + 9) = 1;
      *(uint8_t *)(a1 + 8) = 1;
      if ( !v9 )
        goto LABEL_7;
      goto LABEL_35;
    }
    if ( *(uint8_t *)(dword_20DDDC0 + 872) != 0 )
      exit(1);
  }
  if ( byte_20D2D50 == 0 )
  {
LABEL_35:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
    {
      sub_7D7730(&unk_20D2D60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
      __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
    }
    v1 = byte_20D2D64;
  }
LABEL_7:
  v3 = nullptr;
  if ( v1 == 0 )
    v3 = (uint8_t *)(&unk_20D2D60);
  if ( v3[89] != 0 && unk_20DDDCD != 0 && *(uint8_t *)(dword_20DDDC0 + 904) == 0 )
  {
    v8 = sub_732CE0();
    if ( (uint8_t)sub_733A40(v8, 0) != 0 && byte_20D186E != 0 )
      *(uint8_t *)(unk_20DDDCD) = (uint8_t)(uintptr_t)(0);
  }
  if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
  {
    sub_7D7730(&unk_20D2D60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
    __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D2D64 == 0 )
    v4 = (uint8_t *)(&unk_20D2D60);
  if ( v4[89] != 0 )
  {
    if ( (*(uint8_t *)unk_20D1864) != 0 )
    {
      if ( byte_20D2800 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2800) != 0 )
      {
        sub_AABC00((int)(uintptr_t)(&dword_20D2820));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2800);
        __cxa_atexit((void (*)(void *))sub_542BE0, &dword_20D2820, &unk_20D1280);
      }
      v7 = nullptr;
      if ( byte_20D2824 == 0 )
        v7 = (int *)(&dword_20D2820);
      sub_AAFA40((int)(uintptr_t)(v7));
      *(uint8_t *)(unk_20D1864) = (uint8_t)(uintptr_t)(0);
      if ( byte_20D2D50 != 0 )
        goto LABEL_17;
    }
    else if ( byte_20D2D50 != 0 )
    {
LABEL_17:
      v5 = nullptr;
      if ( byte_20D2D64 == 0 )
        v5 = &unk_20D2D60;
      sub_7A9A00(v5);
      goto LABEL_20;
    }
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
    {
      sub_7D7730(&unk_20D2D60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
      __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
    }
    goto LABEL_17;
  }
LABEL_20:
  result = *(uint32_t *)(a1 + 4);
  if ( result != 0 )
    return G4_VCALL<int>(result, 8, a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C0F930  (binary VA: 0xc0f930)
// Original: sub_C0F930
// ----------------------------------------------------------------------------
uint8_t * sub_C0F930()
{
  uint8_t *result;
  void *v1;

  if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
  {
    sub_7D7730(&unk_20D2D60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
    __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D2D64 == 0 )
    result = (uint8_t *)(&unk_20D2D60);
  if ( result[88] != 0 )
  {
    if ( byte_20D54E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D54E0) != 0 )
    {
      sub_51DC30(&unk_20D5500);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D54E0);
      __cxa_atexit((void (*)(void *))sub_4EEA60, &unk_20D5500, &unk_20D1280);
    }
    v1 = nullptr;
    if ( byte_20D5514 == 0 )
      v1 = &unk_20D5500;
    return (uint8_t *)sub_51DED0(v1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C0FA40  (binary VA: 0xc0fa40)
// Original: sub_C0FA40
// ----------------------------------------------------------------------------
int sub_C0FA40(int a1)
{
  int *v1;
  int v2;
  int result;

  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D49A8 == 0 )
    v1 = (int *)(&dword_20D49A0);
  sub_82DD80((int)(uintptr_t)(v1), 0);
  v2 = sub_732CE0();
  sub_733930(v2, 0);
  result = *(uint32_t *)(a1 + 4);
  if ( result != 0 )
  {
    result = (*(int (**)(uint32_t))(*(uint32_t *)result + 4))(*(uint32_t *)(a1 + 4));
    *(uint32_t *)(a1 + 4) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C0FB20  (binary VA: 0xc0fb20)
// Original: sub_C0FB20
// ----------------------------------------------------------------------------
int sub_C0FB20(int a1)
{
  bool v1;
  int *v2;

  v1 = byte_20D4980 == 0;
  *(uint8_t *)(a1 + 8) = 0;
  *(uint8_t *)(a1 + 9) = 0;
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D49A8 == 0 )
    v2 = (int *)(&dword_20D49A0);
  return sub_82DD80((int)(uintptr_t)(v2), 1);
}



// ============================================================================
// Address:   0xc0fbd0 (size: 805 bytes)
// Symbol:    sub_C0FBD0
// Demangled: sub_C0FBD0
// ============================================================================
int (**sub_C0FBD0(uint32_t *a1))(int)
{
  int v1;
  int v2;
  void *v3;
  int *v4;
  int *v5;
  uint8_t *v6;
  bool v7;
  g4_cxa_guard_t *v9;

  *a1 = (uint32_t)(uintptr_t)(&off_206B500);
  v2 = sub_8F0680(v1);
  if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
  {
    sub_9C9CC0(&unk_20D4E60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
    __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4E64 == 0 )
    v3 = &unk_20D4E60;
  sub_9CB030(v3, 0, v2, 0, 0, 1, 0, 1065353216);
  sub_B9D390(dword_20DDDC0, 0);
  sub_B9D390(dword_20DDDC0, 1);
  sub_5BCA80(dword_20D42C0);
  byte_20D186E = 0;
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D49A8 == 0 )
    v4 = (int *)(&dword_20D49A0);
  sub_82AAC0(v4);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v5 = nullptr;
  if ( byte_20D49A8 == 0 )
    v5 = (int *)(&dword_20D49A0);
  sub_82D430(v5, 0);
  sub_5BCB60(*(uint32_t *)(dword_20DDDC0 + 852));
  sub_64C700(v9);
  if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
  {
    sub_9C9CC0(&unk_20D4E60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
    __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D4E64 == 0 )
    v6 = (uint8_t *)(&unk_20D4E60);
  v7 = byte_20D5B50 == 0;
  v6[75] = 1;
  if ( v7 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::FireManualEvent((grapher::ActorManager::Self *)&unk_20D5B60, "NewGame", nullptr);
  *a1 = (uint32_t)(uintptr_t)(&off_206B518);
  return (int (**)(int))(uintptr_t)(&off_206B518);
}
// ----------------------------------------------------------------------------
// Function: sub_C0FF00  (binary VA: 0xc0ff00)
// Original: sub_C0FF00
// ----------------------------------------------------------------------------
void sub_C0FF00(uint32_t *a1)
{
  sub_C0FBD0(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C0FF40  (binary VA: 0xc0ff40)
// Original: sub_C0FF40
// ----------------------------------------------------------------------------
uint8_t * sub_C0FF40(int a1)
{
  bool v1;
  uint8_t *result;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B4A8);
  v1 = byte_20D2D50 == 0;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint8_t *)(a1 + 8) = 0;
  *(uint8_t *)(a1 + 9) = 0;
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
  {
    sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
    __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D2D64 == 0 )
    result = (uint8_t *)(&unk_20D2D60);
  result[88] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C0FFF0  (binary VA: 0xc0fff0)
// Original: sub_C0FFF0
// ----------------------------------------------------------------------------
int sub_C0FFF0(int a1, int a2)
{
  uint8_t *v2;
  uint8_t *v3;
  void *v4;
  int result;
  int v6;
  int v7;
  int v8;

  if ( *(uint8_t *)(*(uint32_t *)(dword_20DDDC0 + 864) + 32) == 0 )
  {
    v8 = sub_4EB830(0xCu);
    if ( v8 != -8 )
      *(uint32_t *)(v8 + 8) = 1;
    sub_1901920(v8, a2);
  }
  if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
  {
    sub_7D7730(&unk_20D2D60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
    __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D2D64 == 0 )
    v2 = (uint8_t *)(&unk_20D2D60);
  if ( v2[51] == 0 && *(uint8_t *)(sub_5BC940() + 4) == 0 )
  {
    v7 = sub_4EB830(0xCu);
    if ( v7 != -8 )
      *(uint32_t *)(v7 + 8) = 0;
    sub_1901920(v7, a2);
  }
  if ( byte_20D2BC0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2BC0) != 0 )
  {
    sub_53C740(&unk_20D2BC8);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2BC0);
    __cxa_atexit((void (*)(void *))sub_4EFD40, &unk_20D2BC8, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D2BCC == 0 )
    v3 = (uint8_t *)(&unk_20D2BC8);
  if ( v3[20] != 0 )
  {
    v6 = sub_4EB830(0xCu);
    if ( v6 != -8 )
      *(uint32_t *)(v6 + 8) = 5;
    return sub_1901920(v6, a2);
  }
  if ( byte_20D2BE0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2BE0) != 0 )
  {
    sub_A47850(&unk_20D2C00);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2BE0);
    __cxa_atexit((void (*)(void *))sub_A70B50, &unk_20D2C00, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D2C04 == 0 )
    v4 = &unk_20D2C00;
  result = sub_A48050(v4);
  if ( result == 2 )
  {
    v6 = sub_4EB830(0xCu);
    if ( v6 != -8 )
      *(uint32_t *)(v6 + 8) = 2;
    return sub_1901920(v6, a2);
  }
  if ( result >= 2 && result <= 4 )
  {
    if ( byte_20D32F8 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D32F8) != 0 )
    {
      sub_A728F0(&byte_20D3300);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D32F8);
      __cxa_atexit((void (*)(void *))sub_545B10, &byte_20D3300, &unk_20D1280);
    }
    byte_20D3364 = 1;
    v6 = sub_4EB830(0xCu);
    if ( v6 != -8 )
      *(uint32_t *)(v6 + 8) = 3;
    return sub_1901920(v6, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C10300  (binary VA: 0xc10300)
// Original: sub_C10300
// ----------------------------------------------------------------------------
int sub_C10300(int a1)
{
  int *v1;
  int *v2;
  int v3;
  int result;

  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B4E8);
  *(uint8_t *)(unk_20D186D) = (uint8_t)(uintptr_t)(1);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D49A8 == 0 )
    v1 = (int *)(&dword_20D49A0);
  sub_82AAB0(v1);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D49A8 == 0 )
    v2 = (int *)(&dword_20D49A0);
  sub_82D060(v2, 0);
  v3 = sub_B97E00();
  result = (*(int (**)(uint32_t))(**(uint32_t **)(v3 + 20) + 12))(*(uint32_t *)(v3 + 20));
  dword_20DE7C0 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C10450  (binary VA: 0xc10450)
// Original: sub_C10450
// ----------------------------------------------------------------------------
int sub_C10450(uint32_t *a1)
{
  int *v1;
  int *v2;
  int v3;
  bool v4;
  uint8_t *v5;
  int *v6;
  int *v7;
  typedef float _g4_t_v9[6];
  typedef float _g4_t_v10[3];
  typedef float _g4_t_v11[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v10)) > _g4_s1 ? (24u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v11)) > _g4_s2 ? (36u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);

  *a1 = (uint32_t)(uintptr_t)(&off_206B500);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  sub_5BCA80(dword_20D42C0);
  sub_B9D390(dword_20DDDC0, 0);
  sub_B9D390(dword_20DDDC0, 1);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D49A8 == 0 )
    v1 = (int *)(&dword_20D49A0);
  sub_82D060(v1, 0);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D49A8 == 0 )
    v2 = (int *)(&dword_20D49A0);
  sub_82AAB0(v2);
  byte_20D186E = 1;
  v3 = sub_BF6360();
  v4 = byte_20D4E40 == 0;
  *(uint8_t *)(v3 + 16) = 1;
  if ( v4 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
  {
    sub_9C9CC0(&unk_20D4E60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
    __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
  }
  v5 = nullptr;
  v9[0] = -1000000.0;
  if ( byte_20D4E64 == 0 )
    v5 = (uint8_t *)(&unk_20D4E60);
  v4 = byte_20D4AB0 == 0;
  v9[1] = 1000000.0;
  v9[2] = 0.0;
  v5[75] = 0;
  if ( v4 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v6 = (int *)(&dword_20D4AC0);
  sub_AB1340((int)(uintptr_t)(v6), v9);
  v11[0] = 0.0;
  v11[1] = 0.0;
  v11[2] = 1.0;
  v10[0] = 0.0;
  v10[1] = 1.0;
  v10[2] = 0.0;
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v7 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v7 = (int *)(&dword_20D4AC0);
  return sub_AB1390((int)(uintptr_t)(v7), v10, v11);
}

// ----------------------------------------------------------------------------
// Function: sub_C10790  (binary VA: 0xc10790)
// Original: sub_C10790
// ----------------------------------------------------------------------------
int sub_C10790()
{
  int result;
  uint32_t *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm5_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm1_4
  int v18;
  int32_t v19;
  float v20; // xmm1_4
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t _g4_t_v38[3];
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
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v27)) > _g4_s0 ? (4u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v28)) > _g4_s1 ? (8u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v30)) > _g4_s3 ? (16u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v31)) > _g4_s4 ? (20u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v32)) > _g4_s5 ? (24u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v33)) > _g4_s6 ? (28u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v34)) > _g4_s7 ? (32u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v35)) > _g4_s8 ? (36u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v36)) > _g4_s9 ? (40u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v37)) > _g4_s10 ? (44u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v38)) > _g4_s11 ? (48u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v39)) > _g4_s12 ? (60u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v40)) > _g4_s13 ? (64u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v41)) > _g4_s14 ? (68u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v42)) > _g4_s15 ? (72u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v43)) > _g4_s16 ? (76u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v44)) > _g4_s17 ? (80u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v45)) > _g4_s18 ? (84u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v46)) > _g4_s19 ? (88u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v47)) > _g4_s20 ? (92u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v48)) > _g4_s21 ? (96u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v49)) > _g4_s22 ? (100u + sizeof(_g4_t_v49)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v50)) > _g4_s23 ? (104u + sizeof(_g4_t_v50)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v51)) > _g4_s24 ? (108u + sizeof(_g4_t_v51)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v52)) > _g4_s25 ? (112u + sizeof(_g4_t_v52)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v53)) > _g4_s26 ? (116u + sizeof(_g4_t_v53)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v54)) > _g4_s27 ? (120u + sizeof(_g4_t_v54)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v55)) > _g4_s28 ? (124u + sizeof(_g4_t_v55)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v56)) > _g4_s29 ? (128u + sizeof(_g4_t_v56)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v57)) > _g4_s30 ? (132u + sizeof(_g4_t_v57)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v58)) > _g4_s31 ? (136u + sizeof(_g4_t_v58)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v59)) > _g4_s32 ? (140u + sizeof(_g4_t_v59)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v60)) > _g4_s33 ? (144u + sizeof(_g4_t_v60)) : _g4_s33,
    _g4_s35 = (148u + sizeof(_g4_t_v61)) > _g4_s34 ? (148u + sizeof(_g4_t_v61)) : _g4_s34,
    _g4_s36 = (152u + sizeof(_g4_t_v62)) > _g4_s35 ? (152u + sizeof(_g4_t_v62)) : _g4_s35,
    _g4_s37 = (156u + sizeof(_g4_t_v63)) > _g4_s36 ? (156u + sizeof(_g4_t_v63)) : _g4_s36,
    _g4_s38 = (160u + sizeof(_g4_t_v64)) > _g4_s37 ? (160u + sizeof(_g4_t_v64)) : _g4_s37,
    _g4_s39 = (164u + sizeof(_g4_t_v65)) > _g4_s38 ? (164u + sizeof(_g4_t_v65)) : _g4_s38,
    _g4_s40 = (168u + sizeof(_g4_t_v66)) > _g4_s39 ? (168u + sizeof(_g4_t_v66)) : _g4_s39,
    _g4_s41 = (172u + sizeof(_g4_t_v67)) > _g4_s40 ? (172u + sizeof(_g4_t_v67)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 80u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 84u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 88u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 92u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 96u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 100u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 104u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 108u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 112u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 116u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 120u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 124u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 128u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 132u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 136u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 140u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 144u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 148u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 152u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 156u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 160u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 164u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 168u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 172u);

  result = dword_20DDAF0;
  v38[0] = dword_20DDAF0;
  if ( dword_20DDAF0 != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(dword_20DDAF0 + 4), 1u);
    v37 = *(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8);
    v1 = **(uint32_t ***)(v37 + 300);
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v2 = v1[7] - v1[5];
    v3 = v1[8] - v1[6];
    v4 = *(uint32_t *)(v38[0] + 20);
    v5 = *(uint32_t *)(v38[0] + 24);
    if ( (*(uint32_t *)unk_20DDAE8) != 0 )
    {
      v6 = (float)v2;
      v7 = (float)v4;
      v8 = 0.9f * (float)v2;
      v9 = (float)v5;
      if ( (float)v4 > v8 )
      {
        v20 = v8 / v7;
        v11 = v20 * v7;
        v10 = v20 * v9;
      }
      else
      {
        v10 = (float)v5;
        v11 = (float)v4;
      }
      if ( v10 > (float)v3 )
      {
        v12 = (float)v3 / v10;
        v11 = v11 * v12;
        v10 = v10 * v12;
      }
      if ( (float)(0.45f * v6) > v7 )
      {
        v13 = (float)(0.8f * v6) / v7;
        v11 = v13 * v7;
        v10 = v13 * v9;
      }
      v47 = *(uint32_t *)(v38[0] + 24);
      v14 = (float)(v3 / 2);
      v44 = 0;
      v45 = 0;
      v15 = (float)(v2 / 2);
      v46 = v4;
      v16 = v11 * 0.5;
      v17 = v10 * 0.5;
      v40 = (int)(float)(v15 - v16);
      v41 = (int)(float)(v14 - v17);
      v42 = (int)(float)(v16 + v15);
      v43 = (int)(float)(v17 + v14);
      result = glitch::video::C2DDriver::draw2DImage(v37, v38, &v40, &v44, 0, 0, 0);
      v18 = v38[0];
    }
    else
    {
      v50 = *(uint32_t *)(v38[0] + 20);
      v51 = v5;
      v42 = v2;
      v43 = v2;
      v48 = 0;
      v49 = 0;
      glitch::video::C2DDriver::draw2DImage(v37, v38, &v40, &v48, 0, 0, 0);
      v21 = 0;
      v39 = dword_20D575C;
      if ( dword_20D575C != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v39 + 4), 1u);
        v21 = v39;
      }
      v22 = *(uint32_t *)(v21 + 20);
      v23 = *(uint32_t *)(v21 + 24);
      v58 = v22;
      v59 = v23;
      v56 = 0;
      v57 = 0;
      v52 = 10;
      v24 = v2 * v22 / 2560;
      v54 = v24 + 10;
      v34 = v24 * v23 / v58;
      v53 = v3 - v34 - 10;
      v55 = v3 - 10;
      glitch::video::C2DDriver::draw2DImage(v37, &v39, &v52, &v56, 0, 0, 0);
      sub_5ED480((int)(uintptr_t)(&v39));
      v25 = 0;
      v39 = dword_20D5758;
      if ( dword_20D5758 != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v39 + 4), 1u);
        v25 = v39;
      }
      v36 = *(uint32_t *)(v25 + 24);
      v66 = *(uint32_t *)(v25 + 20);
      v35 = v2 * v66;
      v62 = v2;
      v64 = 0;
      v65 = 0;
      v26 = v2 * v66 / 2560;
      v67 = v36;
      v63 = v3;
      v60 = v2 - v26;
      v61 = v3 - v26 * v36 / v66;
      glitch::video::C2DDriver::draw2DImage(v37, &v39, &v60, &v64, 0, 0, 0);
      result = sub_5ED480((int)(uintptr_t)(&v39));
      v18 = v38[0];
    }
    if ( v18 != 0 )
    {
      while ( 1 )
      {
        v19 = *(uint32_t *)(v18 + 4);
        _mm_mfence();
        if ( v19 == 2 )
        {
          if ( *(uint16_t *)(v18 + 32) == 0xFFFF )
            goto LABEL_13;
          glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v18);
        }
        else
        {
          if ( v19 == 1 )
            return G4_VCALL<int>(v18, 4, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38[0], v38[1], v38[2], v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67);
LABEL_13:
          result = __sync_val_compare_and_swap((volatile int32_t *)(v18 + 4), v19, v19 - 1);
          if ( v19 == result )
            return result;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C10C00  (binary VA: 0xc10c00)
// Original: sub_C10C00
// ----------------------------------------------------------------------------
int * sub_C10C00()
{
  return (int *)(&dword_20DE7C4);
}

// ----------------------------------------------------------------------------
// Function: sub_C10C20  (binary VA: 0xc10c20)
// Original: sub_C10C20
// ----------------------------------------------------------------------------
uint32_t * sub_C10C20(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206B518);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C10C40  (binary VA: 0xc10c40)
// Original: sub_C10C40
// ----------------------------------------------------------------------------
void sub_C10C40(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206B518);
  opDelete(a1);
}


