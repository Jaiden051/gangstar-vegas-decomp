#include "Core/Utils/DecompTypes.h"
#include "TU33_MenuControllerPart13.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: sub_C1C5F0  (binary VA: 0xc1c5f0)
// Original: sub_C1C5F0
// ----------------------------------------------------------------------------
int sub_C1C5F0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE860);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE860, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE864), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE864, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE868), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE868, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE86C), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE86C, &unk_20D1280);
  dword_20DE870 = 1056964608;
  dword_20DE874 = 1056964608;
  dword_20DE878 = 1056964608;
  dword_20DE818 = (int)(uintptr_t)(&dword_20D61E8);
  dword_20DE814 = 1920234601;
  dword_20DE81C = (int)(uintptr_t)("LevelObject");
  return __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &dword_20DE814, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_C1C730  (binary VA: 0xc1c730)
// Original: sub_C1C730
// ----------------------------------------------------------------------------
int sub_C1C730(int a1, int a2)
{
  int result;
  int v3;

  result = a1;
  v3 = *(uint32_t *)(a1 + 92);
  if ( v3 != a2 && v3 <= 7 )
    *(uint32_t *)(a1 + 92) = a2;
  *(uint8_t *)(a1 + 128) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1C750  (binary VA: 0xc1c750)
// Original: sub_C1C750
// ----------------------------------------------------------------------------
int * sub_C1C750(int *a1, int a2, int a3, int a4, int *a5)
{
  int v7;
  int v8;
  int v9;
  int v11;
  char v12;
  int v13;

  v7 = a2 + 4;
  v12 = 1;
  v11 = v7;
  if ( a3 == 0 && a4 != v7 )
    v12 = *a5 < *(uint32_t *)(a4 + 16);
  v8 = opNew(0x18u);
  if ( v8 != -16 )
  {
    v9 = *a5;
    *(uint32_t *)(v8 + 20) = a5[1];
    *(uint32_t *)(v8 + 16) = v9;
  }
  v13 = v8;
  sub_1904970(v12, v8, a4, v11);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C1C810  (binary VA: 0xc1c810)
// Original: sub_C1C810
// ----------------------------------------------------------------------------
uint32_t * sub_C1C810(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v7;
  uint32_t *v8;
  int v9;
  char v11;
  int v12;
  uint32_t *v13;

  v11 = 1;
  v7 = a2 + 4;
  if ( a3 == 0 && a4 != v7 )
    v11 = *a5 < *(uint32_t *)(a4 + 16);
  v12 = v7;
  v8 = (uint32_t *)opNew(0x20u);
  v9 = v12;
  if ( v8 != (uint32_t *)-16 )
  {
    v8[4] = *a5;
    v8[5] = a5[1];
    v8[6] = a5[2];
    v8[7] = a5[3];
  }
  v13 = v8;
  sub_1904970(v11, v8, a4, v9);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v13);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C1C8E0  (binary VA: 0xc1c8e0)
// Original: sub_C1C8E0
// ----------------------------------------------------------------------------
int sub_C1C8E0(int a1, uint32_t *a2)
{
  uint8_t *v4;
  int v5;
  uint8_t *i;

  v4 = (uint8_t *)*a2;
  v5 = *(uint32_t *)(*a2 - 4);
  if ( v5 >= 0 )
  {
    sub_19397C0(a2);
    v4 = (uint8_t *)*a2;
    v5 = *(uint32_t *)(*a2 - 4);
  }
  for ( i = v4; ; ++i )
  {
    if ( v5 >= 0 )
    {
      sub_19397C0(a2);
      v4 = (uint8_t *)*a2;
    }
    if ( i == &v4[*((uint32_t *)v4 - 3)] )
      break;
    if ( *i == 32 )
    {
      *i = 95;
      v4 = (uint8_t *)*a2;
    }
    v5 = *((uint32_t *)v4 - 1);
  }
  g4_std::string::construct_copy(a1, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C1C960  (binary VA: 0xc1c960)
// Original: sub_C1C960
// ----------------------------------------------------------------------------
int sub_C1C960(int a1)
{
  glf::InputManager::Self *InputMgr;
  int result;
  bool v3;
  glf::App::Self *Instance;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  void *v13;
  g4_cxa_guard_t *v14;
  void *lpdso_handle;
  int v16;

  InputMgr = (glf::InputManager::Self *)glf::App::GetInputMgr((glf::App::Self *)dword_20DDDC0);
  result = glf::InputManager::GetGamepad(InputMgr, 1u);
  v3 = *(uint8_t *)(a1 + 32) == 0;
  *(uint32_t *)(a1 + 8) = result;
  if ( v3 )
  {
    result = sub_629790();
    if ( (uint8_t)result != 0 )
      *(uint8_t *)(a1 + 32) = 1;
  }
  if ( *(uint8_t *)(a1 + 4) != 0 && *(uint32_t *)(a1 + 12) != 0 && *(uint8_t *)(a1 + 32) != 0 )
  {
    Instance = (glf::App::Self *)glf::App::GetInstance((glf::App::Self *)v14);
    v5 = glf::App::GetInputMgr(Instance);
    glf::InputManager::EmulateGamepadWin32(v5, 9);
    v7 = *(uint32_t *)(a1 + 12);
    if ( v7 != 0 )
    {
      if ( *(uint8_t *)(a1 + 128) != 0 )
      {
        v16 = a1 + 68;
        lpdso_handle = (void *)(a1 + 44);
        sub_5C6B50(v7, *(uint32_t *)(a1 + 132));
      }
      v8 = *(uint32_t *)(a1 + 92);
      if ( v8 != -1 )
        (*(void (**)(uint32_t, uint32_t, void *, int))(**(uint32_t **)(a1 + 4 * v8 + 96) + 8))(
          *(uint32_t *)(a1 + 4 * v8 + 96),
          *(uint32_t *)(a1 + 132),
          lpdso_handle,
          v16);
      if ( sub_8F0680(v6) != 0 )
      {
        v10 = *(uint32_t *)(sub_8F0680(v9) + 1872);
        if ( (v10 & 0x2000) != 0 && (v10 & 0x1000) == 0 )
        {
          if ( byte_20D54E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D54E0) != 0 )
          {
            sub_51DC30(&unk_20D5500);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D54E0);
            __cxa_atexit((void (*)(void *))sub_4EEA60, &unk_20D5500, &unk_20D1280);
          }
          if ( byte_20D1866 != 0 )
          {
            if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
            {
              sub_630BF0(&dword_20D3C40);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
              __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
            }
            v11 = nullptr;
            if ( byte_20D3C44 == 0 )
              v11 = (int *)(&dword_20D3C40);
            if ( (uint8_t)sub_631070(v11) == 0 )
            {
              v12 = *(uint32_t *)(a1 + 56);
              *(uint32_t *)(a1 + 152) = v12;
              if ( a1 + 48 != v12 )
              {
                while ( *(uint8_t *)(v12 + 20) == 0 )
                {
                  v12 = sub_19048E0(v12);
                  *(uint32_t *)(a1 + 152) = v12;
                  if ( a1 + 48 == v12 )
                    goto LABEL_13;
                }
                if ( byte_20D54E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D54E0) != 0 )
                {
                  sub_51DC30(&unk_20D5500);
                  _cxa_guard_release((g4_cxa_guard_t *)&byte_20D54E0);
                  __cxa_atexit((void (*)(void *))sub_4EEA60, &unk_20D5500, &unk_20D1280);
                }
                v13 = nullptr;
                if ( byte_20D5514 == 0 )
                  v13 = &unk_20D5500;
                sub_51DED0(v13);
              }
            }
          }
        }
      }
    }
LABEL_13:
    glf::InputManager::EmulateGamepadWin32(v5, 5);
    *(uint8_t *)(a1 + 128) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1CC50  (binary VA: 0xc1cc50)
// Original: sub_C1CC50
// ----------------------------------------------------------------------------
int sub_C1CC50(int a1, uint32_t *a2, int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  char v8; // bp
  int v9;
  char v11; // bp
  int v12;
  int v13;
  int v14;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v17 = v5;
  if ( v4 == nullptr )
  {
    v4 = v5;
    goto LABEL_12;
  }
  v6 = *a3;
  while ( 1 )
  {
    v9 = v4[4];
    if ( v9 <= v6 )
      break;
    v7 = (uint32_t *)v4[2];
    v8 = 1;
    if ( v7 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v7;
  }
  v7 = (uint32_t *)v4[3];
  v8 = 0;
  if ( v7 != nullptr )
    goto LABEL_4;
LABEL_7:
  v16 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v17 != v16 )
      v11 = v16[4] > v6;
    v12 = opNew(0x18u);
    if ( v12 != -16 )
    {
      v13 = *a3;
      *(uint32_t *)(v12 + 20) = a3[1];
      *(uint32_t *)(v12 + 16) = v13;
    }
    sub_1904970(v11, v12, v16, v17);
    *(uint32_t *)a1 = v12;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    sub_C1C750(v18, (int)(uintptr_t)(a2), 0, (int)(uintptr_t)(v4), a3);
    v14 = v18[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v14;
  }
  else
  {
    v16 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v6 = *a3;
    if ( v4[4] < *a3 )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C1CD90  (binary VA: 0xc1cd90)
// Original: sub_C1CD90
// ----------------------------------------------------------------------------
int sub_C1CD90(int a1, uint32_t *a2, int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  char v8; // bp
  int v9;
  char v11; // bp
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v17 = v5;
  if ( v4 == nullptr )
  {
    v4 = v5;
    goto LABEL_12;
  }
  v6 = *a3;
  while ( 1 )
  {
    v9 = v4[4];
    if ( v9 <= v6 )
      break;
    v7 = (uint32_t *)v4[2];
    v8 = 1;
    if ( v7 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v7;
  }
  v7 = (uint32_t *)v4[3];
  v8 = 0;
  if ( v7 != nullptr )
    goto LABEL_4;
LABEL_7:
  v16 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v17 != v16 )
      v11 = v16[4] > v6;
    v12 = (uint32_t *)opNew(0x20u);
    v13 = v12;
    if ( v12 != (uint32_t *)-16 )
    {
      v12[4] = *a3;
      v12[5] = a3[1];
      v12[6] = a3[2];
      v12[7] = a3[3];
    }
    sub_1904970(v11, v12, v16, v17);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v13);
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    sub_C1C810(v18, (int)(uintptr_t)(a2), 0, (int)(uintptr_t)(v4), a3);
    v14 = v18[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v14;
  }
  else
  {
    v16 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v6 = *a3;
    if ( v4[4] < *a3 )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C1CEE0  (binary VA: 0xc1cee0)
// Original: sub_C1CEE0
// ----------------------------------------------------------------------------
int * sub_C1CEE0(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  typedef char _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef bool _g4_t_v22;
  typedef int _g4_t_v23[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v19)) > _g4_s6 ? (28u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v20)) > _g4_s7 ? (32u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v21)) > _g4_s8 ? (36u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v22)) > _g4_s9 ? (36u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v23)) > _g4_s10 ? (40u + sizeof(_g4_t_v23)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);

  v6 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] != 0 )
    {
      v12 = a2[4];
      v20 = v12;
      if ( *(uint32_t *)(v12 + 16) < *a4 )
      {
        v22 = a3 == v12;
        v8 = (uint32_t *)opNew(0x20u);
        if ( v8 != (uint32_t *)-16 )
        {
          v8[4] = *a4;
          v8[5] = a4[1];
          v8[6] = a4[2];
          v8[7] = a4[3];
        }
        v16 = (uint32_t *)a3;
        v15 = v20;
        v14 = v8;
        v13 = v22;
LABEL_9:
        v18 = v8;
        sub_1904970(v13, v14, v15, v16);
        ++a2[5];
        *a1 = (int)(uintptr_t)(v18);
        return a1;
      }
    }
LABEL_20:
    sub_C1CD90((int)(uintptr_t)(v23), a2, v6);
    *a1 = v23[0];
    return a1;
  }
  if ( *a4 < *(uint32_t *)(a3 + 16) )
  {
    if ( a3 == a2[3] )
    {
      sub_C1C810(a1, (int)(uintptr_t)(a2), a3, a3, a4);
      return a1;
    }
    v17 = *a4;
    v7 = sub_1904940(a3);
    v6 = a4;
    if ( v17 > *(uint32_t *)(v7 + 16) )
    {
      if ( *(uint32_t *)(v7 + 12) == 0 )
      {
        sub_C1C810(a1, (int)(uintptr_t)(a2), 0, v7, a4);
        return a1;
      }
      v8 = (uint32_t *)opNew(0x20u);
      if ( v8 != (uint32_t *)-16 )
      {
        v8[4] = *a4;
        v8[5] = a4[1];
        v8[6] = a4[2];
        v8[7] = a4[3];
      }
      v15 = a3;
      v16 = a2 + 1;
      v14 = v8;
      v13 = 1;
      goto LABEL_9;
    }
    goto LABEL_20;
  }
  if ( *a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  if ( a3 != a2[4] )
  {
    v19 = *a4;
    v21 = sub_19048E0(a3);
    v6 = a4;
    if ( v19 >= *(uint32_t *)(v21 + 16) )
      goto LABEL_20;
    if ( *(uint32_t *)(a3 + 12) != 0 )
    {
      v10 = (uint32_t *)opNew(0x20u);
      v11 = v10;
      if ( v10 != (uint32_t *)-16 )
      {
        v10[4] = *a4;
        v10[5] = a4[1];
        v10[6] = a4[2];
        v10[7] = a4[3];
      }
      sub_1904970(1, v10, v21, a2 + 1);
      ++a2[5];
      *a1 = (int)(uintptr_t)(v11);
      return a1;
    }
  }
  sub_C1C810(a1, (int)(uintptr_t)(a2), 0, a3, v6);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C1D160  (binary VA: 0xc1d160)
// Original: sub_C1D160
// ----------------------------------------------------------------------------
int * sub_C1D160(int *result, uint32_t *a2, int a3, int *a4)
{
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef char _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v19)) > _g4_s4 ? (12u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v20)) > _g4_s5 ? (12u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v21)) > _g4_s6 ? (16u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v22)) > _g4_s7 ? (20u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v23)) > _g4_s8 ? (20u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v24)) > _g4_s9 ? (20u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v25)) > _g4_s10 ? (20u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v26)) > _g4_s11 ? (24u + sizeof(_g4_t_v26)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);

  v21 = result;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_19;
    v10 = a2[4];
    v25 = v10;
    if ( *(uint32_t *)(v10 + 16) >= *a4 )
      goto LABEL_19;
    v15 = a3 == v10;
    v11 = opNew(0x18u);
    if ( v11 != -16 )
    {
      v12 = *a4;
      *(uint32_t *)(v11 + 20) = a4[1];
      *(uint32_t *)(v11 + 16) = v12;
    }
    v20 = v11;
    sub_1904970(v15, v11, v25, a3);
    ++a2[5];
    *v21 = v20;
    return v21;
  }
  else
  {
    if ( *a4 < *(uint32_t *)(a3 + 16) )
    {
      if ( a3 == a2[3] )
      {
        sub_C1C750(result, (int)(uintptr_t)(a2), a3, a3, a4);
        return v21;
      }
      v18 = *a4;
      v16 = a2 + 1;
      v5 = (uint32_t *)sub_1904940(a3);
      v22 = v5;
      if ( v18 > v5[4] )
      {
        if ( v5[3] != 0 )
        {
          v6 = opNew(0x18u);
          v23 = v6;
          if ( v6 != -16 )
          {
            v7 = a4[1];
            *(uint32_t *)(v6 + 16) = *a4;
            *(uint32_t *)(v6 + 20) = v7;
          }
          sub_1904970(1, v6, a3, v16);
          ++a2[5];
          *v21 = v23;
          return v21;
        }
        else
        {
          v13 = opNew(0x18u);
          if ( v13 != -16 )
          {
            v14 = *a4;
            *(uint32_t *)(v13 + 20) = a4[1];
            *(uint32_t *)(v13 + 16) = v14;
          }
          sub_1904970(v16 == v22, v13, v22, v16);
          ++a2[5];
          *v21 = v13;
          return v21;
        }
      }
LABEL_19:
      sub_C1CC50((int)(uintptr_t)(v26), a2, a4);
      *v21 = v26[0];
      return v21;
    }
    if ( *a4 <= *(uint32_t *)(a3 + 16) )
    {
      *result = a3;
      return result;
    }
    if ( a3 == a2[4] )
      goto LABEL_27;
    v19 = *a4;
    v17 = a2 + 1;
    v24 = sub_19048E0(a3);
    if ( v19 >= *(uint32_t *)(v24 + 16) )
      goto LABEL_19;
    if ( *(uint32_t *)(a3 + 12) == 0 )
    {
LABEL_27:
      sub_C1C750(v21, (int)(uintptr_t)(a2), 0, a3, a4);
      return v21;
    }
    v8 = opNew(0x18u);
    if ( v8 != -16 )
    {
      v9 = *a4;
      *(uint32_t *)(v8 + 20) = a4[1];
      *(uint32_t *)(v8 + 16) = v9;
    }
    sub_1904970(1, v8, v24, v17);
    ++a2[5];
    *v21 = v8;
    return v21;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C1D440  (binary VA: 0xc1d440)
// Original: sub_C1D440
// ----------------------------------------------------------------------------
int * sub_C1D440()
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  glf::SimpleButton::Self *v10;
  glf::SimpleButton::Self *v11;

  if ( byte_20DE880 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DE880) != 0 )
  {
    sub_5BC980(&dword_20DE8A0);
    dword_20DE8AC = 0;
    dword_20DE8A0 = (int)(uintptr_t)(&off_206B6D0);
    byte_20DE8B0 = 0;
    byte_20DE8B1 = 0;
    dword_20DE8D8 = (int)(uintptr_t)(&dword_20DE8D0);
    dword_20DE8DC = (int)(uintptr_t)(&dword_20DE8D0);
    byte_20DE8B2 = 0;
    dword_20DE8B4 = -1;
    dword_20DE8F0 = (int)(uintptr_t)(&dword_20DE8E8);
    dword_20DE8F4 = (int)(uintptr_t)(&dword_20DE8E8);
    dword_20DE8B8 = -1;
    dword_20DE8BC = -1;
    byte_20DE8C0 = 0;
    dword_20DE8D0 = 0;
    dword_20DE8D4 = 0;
    dword_20DE8E0 = 0;
    dword_20DE8E8 = 0;
    dword_20DE8EC = 0;
    dword_20DE8F8 = 0;
    dword_20DE924 = 0;
    dword_20DE938 = 0;
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)&unk_20DE93C, nullptr);
    dword_20DE8FC = -1;
    v1 = sub_4EBBF0(0x30u, 1);
    sub_C25E40(v1);
    dword_20DE900 = v1;
    v2 = sub_4EBBF0(0x38u, 1);
    sub_C266B0(v2);
    dword_20DE904 = v2;
    v3 = sub_4EBBF0(0x30u, 1);
    sub_C27160(v3);
    dword_20DE90C = v3;
    v4 = sub_4EBBF0(0x30u, 1);
    sub_C27320(v4);
    dword_20DE910 = v4;
    v5 = sub_4EBBF0(0x30u, 1);
    sub_C274F0(v5);
    dword_20DE914 = v5;
    v6 = sub_4EBBF0(0x58u, 1);
    sub_C276B0(v6);
    dword_20DE918 = v6;
    v7 = sub_4EBBF0(0x34u, 1);
    sub_C27710(v7);
    dword_20DE91C = v7;
    byte_20DE920 = 1;
    dword_20DE8C4 = 0;
    dword_20DE8C8 = -1;
    v8 = (uint32_t *)opNew(0xD4u);
    memset(v8, 0, 0xD4u);
    v8[46] = (uint32_t)(uintptr_t)(v8 + 44);
    v8[47] = (uint32_t)(uintptr_t)(v8 + 44);
    dword_20DE8AC = (int)(uintptr_t)(v8);
    byte_20DE8A4 = 0;
    v9 = opNew(0xA0u);
    glf::InputDevice::Construct((glf::InputDevice::Self *)v9);
    *(uint32_t *)v9 = (uint32_t)(uintptr_t)(&off_206B708);
    *(uint32_t *)(v9 + 80) = 0;
    v10 = (glf::SimpleButton::Self *)(v9 + 104);
    *(uint32_t *)(v9 + 84) = 0;
    *(uint32_t *)(v9 + 88) = 0;
    *(uint32_t *)(v9 + 92) = 0;
    *(uint32_t *)(v9 + 96) = 0;
    *(uint32_t *)(v9 + 100) = 0;
    do
    {
      v11 = v10;
      glf::SimpleButton::SimpleButton(v10);
      v10 = (glf::SimpleButton::Self *)((char *)v11 + 4);
    }
    while ( (glf::SimpleButton::Self *)((char *)v11 + 4) != (glf::SimpleButton::Self *)(v9 + 152) );
    *(uint32_t *)(v9 + 4) = 12;
    *(uint32_t *)(v9 + 12) = 3;
    *(uint32_t *)(v9 + 156) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint32_t *)(v9 + 8) = v9 + 104;
    *(uint8_t *)(v9 + 152) = 1;
    *(uint8_t *)(v9 + 153) = 0;
    *(uint32_t *)(v9 + 16) = v9 + 80;
    g4_std_compat::string_assign(v9 + 156, "Generic", 7u);
    dword_20DE924 = v9;
    dword_20DE960 = 0;
    dword_20DE964 = 0;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20DE880);
    __cxa_atexit((void (*)(void *))sub_C20180, &dword_20DE8A0, &unk_20D1280);
  }
  dword_20D42D0 = (int)(uintptr_t)(&dword_20DE8A0);
  return (int *)(&dword_20D42D0);
}

// ----------------------------------------------------------------------------
// Function: sub_C1D7F0  (binary VA: 0xc1d7f0)
// Original: sub_C1D7F0
// ----------------------------------------------------------------------------
int sub_C1D7F0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  glf::SimpleButton::Self *v10;
  int result;
  glf::SimpleButton::Self *v12;

  sub_5BC980(a1);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B6D0);
  *(uint8_t *)(a1 + 16) = 0;
  *(uint8_t *)(a1 + 17) = 0;
  *(uint8_t *)(a1 + 18) = 0;
  *(uint32_t *)(a1 + 20) = -1;
  *(uint32_t *)(a1 + 24) = -1;
  *(uint32_t *)(a1 + 28) = -1;
  *(uint8_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 72) = 0;
  *(uint32_t *)(a1 + 56) = a1 + 48;
  *(uint32_t *)(a1 + 60) = a1 + 48;
  *(uint32_t *)(a1 + 76) = 0;
  *(uint32_t *)(a1 + 88) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 80) = a1 + 72;
  *(uint32_t *)(a1 + 84) = a1 + 72;
  *(uint32_t *)(a1 + 152) = 0;
  gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)(a1 + 156), nullptr);
  *(uint32_t *)(a1 + 92) = -1;
  v1 = sub_4EBBF0(0x30u, 1);
  sub_C25E40(v1);
  *(uint32_t *)(a1 + 96) = v1;
  v2 = sub_4EBBF0(0x38u, 1);
  sub_C266B0(v2);
  *(uint32_t *)(a1 + 100) = v2;
  v3 = sub_4EBBF0(0x30u, 1);
  sub_C27160(v3);
  *(uint32_t *)(a1 + 108) = v3;
  v4 = sub_4EBBF0(0x30u, 1);
  sub_C27320(v4);
  *(uint32_t *)(a1 + 112) = v4;
  v5 = sub_4EBBF0(0x30u, 1);
  sub_C274F0(v5);
  *(uint32_t *)(a1 + 116) = v5;
  v6 = sub_4EBBF0(0x58u, 1);
  sub_C276B0(v6);
  *(uint32_t *)(a1 + 120) = v6;
  v7 = sub_4EBBF0(0x34u, 1);
  sub_C27710(v7);
  *(uint32_t *)(a1 + 124) = v7;
  *(uint8_t *)(a1 + 128) = 1;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = -1;
  v8 = (uint32_t *)opNew(0xD4u);
  memset(v8, 0, 0xD4u);
  v8[46] = (uint32_t)(uintptr_t)(v8 + 44);
  v8[47] = (uint32_t)(uintptr_t)(v8 + 44);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v8);
  *(uint8_t *)(a1 + 4) = 0;
  v9 = opNew(0xA0u);
  glf::InputDevice::Construct((glf::InputDevice::Self *)v9);
  *(uint32_t *)(v9 + 80) = 0;
  *(uint32_t *)v9 = (uint32_t)(uintptr_t)(&off_206B708);
  *(uint32_t *)(v9 + 84) = 0;
  *(uint32_t *)(v9 + 88) = 0;
  v10 = (glf::SimpleButton::Self *)(v9 + 104);
  *(uint32_t *)(v9 + 92) = 0;
  *(uint32_t *)(v9 + 96) = 0;
  *(uint32_t *)(v9 + 100) = 0;
  do
  {
    v12 = v10;
    v10 = (glf::SimpleButton::Self *)((char *)v10 + 4);
    glf::SimpleButton::SimpleButton(v12);
  }
  while ( v10 != (glf::SimpleButton::Self *)(v9 + 152) );
  *(uint32_t *)(v9 + 4) = 12;
  *(uint32_t *)(v9 + 12) = 3;
  *(uint32_t *)(v9 + 156) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(v9 + 8) = v9 + 104;
  *(uint8_t *)(v9 + 152) = 1;
  *(uint8_t *)(v9 + 153) = 0;
  *(uint32_t *)(v9 + 16) = v9 + 80;
  result = (int)(uintptr_t)(g4_std_compat::string_assign(v9 + 156, "Generic", 7u));
  *(uint32_t *)(a1 + 132) = v9;
  *(uint32_t *)(a1 + 192) = 0;
  *(uint32_t *)(a1 + 196) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1DAD0  (binary VA: 0xc1dad0)
// Original: sub_C1DAD0
// ----------------------------------------------------------------------------
int * sub_C1DAD0(int a1, int a2)
{
  int *result;
  int v3;
  typedef int _g4_t_v4[3];
  typedef int _g4_t_v5;
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v5)) > _g4_s1 ? (24u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  result = *(int **)(a1 + 52);
  *(uint8_t *)(a1 + 128) = 1;
  v3 = a1 + 48;
  if ( result == nullptr )
    goto LABEL_8;
  do
  {
    while ( result[4] >= a2 )
    {
      v3 = (int)(uintptr_t)(result);
      result = (int *)result[2];
      if ( result == nullptr )
        goto LABEL_6;
    }
    result = (int *)result[3];
  }
  while ( result != nullptr );
LABEL_6:
  if ( a1 + 48 == v3 || *(uint32_t *)(v3 + 16) > a2 )
  {
LABEL_8:
    v5 = a2;
    v6 = 0;
    result = sub_C1D160(v4, (uint32_t *)(a1 + 44), v3, &v5);
    v3 = v4[0];
  }
  *(uint8_t *)(v3 + 20) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1DB50  (binary VA: 0xc1db50)
// Original: sub_C1DB50
// ----------------------------------------------------------------------------
uint32_t * sub_C1DB50(int a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *result;
  uint32_t *v5;
  uint32_t *v6;

  v2 = *(uint32_t **)(a1 + 52);
  if ( v2 == nullptr )
    return nullptr;
  v3 = (uint32_t *)(a1 + 48);
  result = *(uint32_t **)(a1 + 52);
  v5 = (uint32_t *)(a1 + 48);
  do
  {
    while ( result[4] >= a2 )
    {
      v5 = result;
      result = (uint32_t *)result[2];
      if ( result == nullptr )
        goto LABEL_6;
    }
    result = (uint32_t *)result[3];
  }
  while ( result != nullptr );
LABEL_6:
  if ( v3 == v5 )
    return nullptr;
  if ( v5[4] <= a2 )
  {
    v6 = (uint32_t *)(a1 + 48);
    do
    {
      while ( v2[4] >= a2 )
      {
        v6 = v2;
        v2 = (uint32_t *)v2[2];
        if ( v2 == nullptr )
          goto LABEL_12;
      }
      v2 = (uint32_t *)v2[3];
    }
    while ( v2 != nullptr );
LABEL_12:
    if ( v3 == v6 || v6[4] > a2 )
      sub_1900210("map::at");
    return (uint32_t *)*((uint8_t *)v6 + 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1DC10  (binary VA: 0xc1dc10)
// Original: sub_C1DC10
// ----------------------------------------------------------------------------
int * sub_C1DC10(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t *v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int v11;
  int *result;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[4];
  typedef int _g4_t_v19[4];
  typedef int _g4_t_v20[4];
  typedef int _g4_t_v21[4];
  typedef int _g4_t_v22[11];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v19)) > _g4_s2 ? (32u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v20)) > _g4_s3 ? (48u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v21)) > _g4_s4 ? (64u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v22)) > _g4_s5 ? (80u + sizeof(_g4_t_v22)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);

  v5 = *(uint32_t **)(a1 + 76);
  v6 = a1 + 72;
  v7 = a1 + 72;
  if ( v5 == nullptr )
    goto LABEL_40;
  do
  {
    while ( v5[4] >= a5 )
    {
      v7 = (int)(uintptr_t)(v5);
      v5 = (uint32_t *)v5[2];
      if ( v5 == nullptr )
        goto LABEL_6;
    }
    v5 = (uint32_t *)v5[3];
  }
  while ( v5 != nullptr );
LABEL_6:
  if ( v6 == v7 || *(uint32_t *)(v7 + 16) > a5 )
  {
LABEL_40:
    v18[0] = a5;
    memset(&v18[1], 0, 12);
    sub_C1CEE0(&v17, (uint32_t *)(a1 + 68), v7, v18);
    v7 = v17;
  }
  *(uint32_t *)(v7 + 28) = a4;
  v8 = *(uint32_t **)(a1 + 76);
  v9 = a1 + 72;
  if ( v8 == nullptr )
    goto LABEL_41;
  do
  {
    while ( v8[4] >= a5 )
    {
      v9 = (int)(uintptr_t)(v8);
      v8 = (uint32_t *)v8[2];
      if ( v8 == nullptr )
        goto LABEL_13;
    }
    v8 = (uint32_t *)v8[3];
  }
  while ( v8 != nullptr );
LABEL_13:
  if ( v6 == v9 || *(uint32_t *)(v9 + 16) > a5 )
  {
LABEL_41:
    v19[0] = a5;
    memset(&v19[1], 0, 12);
    sub_C1CEE0(&v17, (uint32_t *)(a1 + 68), v9, v19);
    v9 = v17;
  }
  *(uint32_t *)(v9 + 20) = a2;
  v10 = *(uint32_t **)(a1 + 76);
  v11 = a1 + 72;
  if ( v10 == nullptr )
    goto LABEL_42;
  do
  {
    while ( v10[4] >= a5 )
    {
      v11 = (int)(uintptr_t)(v10);
      v10 = (uint32_t *)v10[2];
      if ( v10 == nullptr )
        goto LABEL_20;
    }
    v10 = (uint32_t *)v10[3];
  }
  while ( v10 != nullptr );
LABEL_20:
  if ( v6 == v11 || *(uint32_t *)(v11 + 16) > a5 )
  {
LABEL_42:
    v20[0] = a5;
    memset(&v20[1], 0, 12);
    sub_C1CEE0(&v17, (uint32_t *)(a1 + 68), v11, v20);
    v11 = v17;
  }
  *(uint32_t *)(v11 + 24) = a3;
  result = *(int **)(a1 + 76);
  v13 = a1 + 72;
  if ( result == nullptr )
    goto LABEL_45;
  v14 = *(uint32_t **)(a1 + 76);
  do
  {
    while ( v14[4] >= a5 )
    {
      v13 = (int)(uintptr_t)(v14);
      v14 = (uint32_t *)v14[2];
      if ( v14 == nullptr )
        goto LABEL_27;
    }
    v14 = (uint32_t *)v14[3];
  }
  while ( v14 != nullptr );
LABEL_27:
  if ( v6 == v13 || *(uint32_t *)(v13 + 16) > a5 )
  {
LABEL_45:
    v21[0] = a5;
    memset(&v21[1], 0, 12);
    sub_C1CEE0(&v17, (uint32_t *)(a1 + 68), v13, v21);
    result = *(int **)(a1 + 76);
    v16 = (uint32_t *)(a1 + 68);
    if ( result == nullptr )
    {
      v15 = a1 + 72;
      goto LABEL_36;
    }
  }
  v15 = a1 + 72;
  do
  {
    while ( result[4] >= a5 )
    {
      v15 = (int)(uintptr_t)(result);
      result = (int *)result[2];
      if ( result == nullptr )
        goto LABEL_33;
    }
    result = (int *)result[3];
  }
  while ( result != nullptr );
LABEL_33:
  if ( v6 == v15 || *(uint32_t *)(v15 + 16) > a5 )
  {
    v16 = (uint32_t *)(a1 + 68);
LABEL_36:
    v22[0] = a5;
    memset(&v22[1], 0, 12);
    result = sub_C1CEE0(&v17, v16, v15, v22);
  }
  *(uint8_t *)(a1 + 128) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1DED0  (binary VA: 0xc1ded0)
// Original: sub_C1DED0
// ----------------------------------------------------------------------------
void sub_C1DED0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_C1DEE0  (binary VA: 0xc1dee0)
// Original: sub_C1DEE0
// ----------------------------------------------------------------------------
int sub_C1DEE0(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  v2 = *(uint32_t *)(a1 + 56);
  *(uint32_t *)(a1 + 152) = v2;
  if ( v2 == a1 + 48 )
    return v1;
  v1 = 1;
  if ( *(uint8_t *)(v2 + 20) != 0 )
    return v1;
  do
  {
    v2 = sub_19048E0(v2);
    *(uint32_t *)(a1 + 152) = v2;
    if ( v2 == a1 + 48 )
      return 0;
  }
  while ( *(uint8_t *)(v2 + 20) == 0 );
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_C1DF50  (binary VA: 0xc1df50)
// Original: sub_C1DF50
// ----------------------------------------------------------------------------
int sub_C1DF50(int a1)
{
  return *(uint32_t *)(a1 + 12) + 200;
}

// ----------------------------------------------------------------------------
// Function: sub_C1DF60  (binary VA: 0xc1df60)
// Original: sub_C1DF60
// ----------------------------------------------------------------------------
void sub_C1DF60(int a1, char a2)
{
  int v2;
  int v3;
  int v4;
  const gameswf::String::Self **v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  gameswf::Self *v9;
  bool v10;
  gameswf::ASArray::Self *v11;
  int v12;
  int v13;
  unsigned int v14;
  const char **v15;
  int v16;
  gameswf::Self *v17;
  gameswf::Self *v18;
  gameswf::Self *v19;
  gameswf::Self *v20;
  const char **v21;
  gameswf::ASArray::Self *v22;
  const char **v23;
  typedef const char **_g4_t_v24;
  typedef const char *_g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef const char *_g4_t_v28;
  typedef const char *_g4_t_v29;
  typedef const char *_g4_t_v30;
  typedef const char *_g4_t_v31;
  typedef const char *_g4_t_v32;
  typedef const char *_g4_t_v33;
  typedef char _g4_t_v34;
  typedef gameswf::Player::Self *_g4_t_v35;
  typedef gameswf::ASArray::Self *_g4_t_v36;
  typedef char _g4_t_v37;
  typedef const gameswf::String::Self **_g4_t_v38;
  typedef const char **_g4_t_v39;
  typedef int _g4_t_v40;
  typedef const char **_g4_t_v41;
  typedef gameswf::Self *_g4_t_v42[2];
  typedef gameswf::Self *_g4_t_v43[2];
  typedef unsigned int _g4_t_v44[3];
  typedef char _g4_t_v45[12];
  typedef uint8_t _g4_t_v46[12];
  typedef uint8_t _g4_t_v47[12];
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef void *_g4_t_v50;
  typedef gameswf::Self *_g4_t_v51;
  typedef int16_t _g4_t_v52;
  typedef char _g4_t_v53;
  typedef char _g4_t_v54;
  typedef char _g4_t_v55;
  typedef char _g4_t_v56;
  typedef void *_g4_t_v57;
  typedef gameswf::Self *_g4_t_v58;
  typedef int16_t _g4_t_v59;
  typedef char _g4_t_v60;
  typedef char _g4_t_v61;
  typedef unsigned int _g4_t_v62[3];
  typedef gameswf::Self *_g4_t_v63;
  typedef int16_t _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char _g4_t_v66;
  typedef char _g4_t_v67;
  typedef char _g4_t_v68;
  typedef void *_g4_t_v69;
  typedef gameswf::Self *_g4_t_v70;
  typedef int16_t _g4_t_v71;
  typedef char _g4_t_v72;
  typedef char _g4_t_v73;
  typedef char _g4_t_v74;
  typedef char _g4_t_v75;
  typedef void *_g4_t_v76;
  typedef gameswf::Self *_g4_t_v77;
  typedef int16_t _g4_t_v78;
  typedef char _g4_t_v79;
  typedef char _g4_t_v80;
  typedef char _g4_t_v81;
  typedef char _g4_t_v82;
  typedef void *_g4_t_v83;
  typedef gameswf::Self *_g4_t_v84;
  typedef int16_t _g4_t_v85;
  typedef char _g4_t_v86;
  typedef char _g4_t_v87;
  typedef int *_g4_t_v88;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v25)) > _g4_s1 ? (4u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v26)) > _g4_s2 ? (8u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v27)) > _g4_s3 ? (8u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v28)) > _g4_s4 ? (12u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v29)) > _g4_s5 ? (12u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v30)) > _g4_s6 ? (12u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v31)) > _g4_s7 ? (12u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v32)) > _g4_s8 ? (12u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v33)) > _g4_s9 ? (12u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v34)) > _g4_s10 ? (48u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v35)) > _g4_s11 ? (48u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v36)) > _g4_s12 ? (52u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (59u + sizeof(_g4_t_v37)) > _g4_s13 ? (59u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v38)) > _g4_s14 ? (68u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v39)) > _g4_s15 ? (72u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v40)) > _g4_s16 ? (76u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v41)) > _g4_s17 ? (76u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v42)) > _g4_s18 ? (80u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v43)) > _g4_s19 ? (88u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v44)) > _g4_s20 ? (96u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v45)) > _g4_s21 ? (108u + sizeof(_g4_t_v45)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v46)) > _g4_s22 ? (120u + sizeof(_g4_t_v46)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v47)) > _g4_s23 ? (132u + sizeof(_g4_t_v47)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v48)) > _g4_s24 ? (144u + sizeof(_g4_t_v48)) : _g4_s24,
    _g4_s26 = (145u + sizeof(_g4_t_v49)) > _g4_s25 ? (145u + sizeof(_g4_t_v49)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v50)) > _g4_s26 ? (152u + sizeof(_g4_t_v50)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v51)) > _g4_s27 ? (156u + sizeof(_g4_t_v51)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v52)) > _g4_s28 ? (160u + sizeof(_g4_t_v52)) : _g4_s28,
    _g4_s30 = (162u + sizeof(_g4_t_v53)) > _g4_s29 ? (162u + sizeof(_g4_t_v53)) : _g4_s29,
    _g4_s31 = (163u + sizeof(_g4_t_v54)) > _g4_s30 ? (163u + sizeof(_g4_t_v54)) : _g4_s30,
    _g4_s32 = (176u + sizeof(_g4_t_v55)) > _g4_s31 ? (176u + sizeof(_g4_t_v55)) : _g4_s31,
    _g4_s33 = (177u + sizeof(_g4_t_v56)) > _g4_s32 ? (177u + sizeof(_g4_t_v56)) : _g4_s32,
    _g4_s34 = (184u + sizeof(_g4_t_v57)) > _g4_s33 ? (184u + sizeof(_g4_t_v57)) : _g4_s33,
    _g4_s35 = (188u + sizeof(_g4_t_v58)) > _g4_s34 ? (188u + sizeof(_g4_t_v58)) : _g4_s34,
    _g4_s36 = (192u + sizeof(_g4_t_v59)) > _g4_s35 ? (192u + sizeof(_g4_t_v59)) : _g4_s35,
    _g4_s37 = (194u + sizeof(_g4_t_v60)) > _g4_s36 ? (194u + sizeof(_g4_t_v60)) : _g4_s36,
    _g4_s38 = (195u + sizeof(_g4_t_v61)) > _g4_s37 ? (195u + sizeof(_g4_t_v61)) : _g4_s37,
    _g4_s39 = (208u + sizeof(_g4_t_v62)) > _g4_s38 ? (208u + sizeof(_g4_t_v62)) : _g4_s38,
    _g4_s40 = (220u + sizeof(_g4_t_v63)) > _g4_s39 ? (220u + sizeof(_g4_t_v63)) : _g4_s39,
    _g4_s41 = (224u + sizeof(_g4_t_v64)) > _g4_s40 ? (224u + sizeof(_g4_t_v64)) : _g4_s40,
    _g4_s42 = (226u + sizeof(_g4_t_v65)) > _g4_s41 ? (226u + sizeof(_g4_t_v65)) : _g4_s41,
    _g4_s43 = (227u + sizeof(_g4_t_v66)) > _g4_s42 ? (227u + sizeof(_g4_t_v66)) : _g4_s42,
    _g4_s44 = (240u + sizeof(_g4_t_v67)) > _g4_s43 ? (240u + sizeof(_g4_t_v67)) : _g4_s43,
    _g4_s45 = (241u + sizeof(_g4_t_v68)) > _g4_s44 ? (241u + sizeof(_g4_t_v68)) : _g4_s44,
    _g4_s46 = (248u + sizeof(_g4_t_v69)) > _g4_s45 ? (248u + sizeof(_g4_t_v69)) : _g4_s45,
    _g4_s47 = (252u + sizeof(_g4_t_v70)) > _g4_s46 ? (252u + sizeof(_g4_t_v70)) : _g4_s46,
    _g4_s48 = (256u + sizeof(_g4_t_v71)) > _g4_s47 ? (256u + sizeof(_g4_t_v71)) : _g4_s47,
    _g4_s49 = (258u + sizeof(_g4_t_v72)) > _g4_s48 ? (258u + sizeof(_g4_t_v72)) : _g4_s48,
    _g4_s50 = (259u + sizeof(_g4_t_v73)) > _g4_s49 ? (259u + sizeof(_g4_t_v73)) : _g4_s49,
    _g4_s51 = (272u + sizeof(_g4_t_v74)) > _g4_s50 ? (272u + sizeof(_g4_t_v74)) : _g4_s50,
    _g4_s52 = (273u + sizeof(_g4_t_v75)) > _g4_s51 ? (273u + sizeof(_g4_t_v75)) : _g4_s51,
    _g4_s53 = (280u + sizeof(_g4_t_v76)) > _g4_s52 ? (280u + sizeof(_g4_t_v76)) : _g4_s52,
    _g4_s54 = (284u + sizeof(_g4_t_v77)) > _g4_s53 ? (284u + sizeof(_g4_t_v77)) : _g4_s53,
    _g4_s55 = (288u + sizeof(_g4_t_v78)) > _g4_s54 ? (288u + sizeof(_g4_t_v78)) : _g4_s54,
    _g4_s56 = (290u + sizeof(_g4_t_v79)) > _g4_s55 ? (290u + sizeof(_g4_t_v79)) : _g4_s55,
    _g4_s57 = (291u + sizeof(_g4_t_v80)) > _g4_s56 ? (291u + sizeof(_g4_t_v80)) : _g4_s56,
    _g4_s58 = (304u + sizeof(_g4_t_v81)) > _g4_s57 ? (304u + sizeof(_g4_t_v81)) : _g4_s57,
    _g4_s59 = (305u + sizeof(_g4_t_v82)) > _g4_s58 ? (305u + sizeof(_g4_t_v82)) : _g4_s58,
    _g4_s60 = (312u + sizeof(_g4_t_v83)) > _g4_s59 ? (312u + sizeof(_g4_t_v83)) : _g4_s59,
    _g4_s61 = (316u + sizeof(_g4_t_v84)) > _g4_s60 ? (316u + sizeof(_g4_t_v84)) : _g4_s60,
    _g4_s62 = (320u + sizeof(_g4_t_v85)) > _g4_s61 ? (320u + sizeof(_g4_t_v85)) : _g4_s61,
    _g4_s63 = (322u + sizeof(_g4_t_v86)) > _g4_s62 ? (322u + sizeof(_g4_t_v86)) : _g4_s62,
    _g4_s64 = (323u + sizeof(_g4_t_v87)) > _g4_s63 ? (323u + sizeof(_g4_t_v87)) : _g4_s63,
    _g4_s65 = (344u + sizeof(_g4_t_v88)) > _g4_s64 ? (344u + sizeof(_g4_t_v88)) : _g4_s64
  };
  alignas(16) uint8_t _g4_sf[_g4_s65];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 59u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 88u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 96u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 120u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 132u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 144u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 145u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 152u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 156u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 160u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 162u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 163u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 176u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 177u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 184u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 188u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 192u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 194u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 195u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 208u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 220u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 224u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 226u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 227u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 240u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 241u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 248u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 252u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 256u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 258u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 259u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 272u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 273u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 280u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 284u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 288u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 290u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 291u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 304u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 305u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 312u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 316u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 320u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 322u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 323u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 344u);

  v88 = &a1;
  v2 = a1;
  v3 = *(uint32_t *)(a1 + 40);
  if ( *(uint8_t *)(a1 + 32) != 0 )
  {
    v34 = a2;
    v4 = sub_732CE0();
    v5 = (const gameswf::String::Self **)sub_733A60(v4, 1);
    v38 = v5;
    if ( v5 != nullptr && *v5 != nullptr )
    {
      v45[0] = 1;
      v45[1] = 0;
      v37 = (v3 == -1) | v34;
      v45[4] = v37;
      LOWORD(v62[0]) = 1;
      gameswf::String::resize((gameswf::String::Self *)v62, 23);
      v6 = (gameswf::Self *)((char *)v62 + 1);
      if ( LOBYTE(v62[0]) == 0xFF )
        v6 = v63;
      gameswf::Strcpy_s(v6, (char *)&dword_18, (gameswf::Self *)"actionButtonsVisibility", v28);
      v64 = -1;
      v55 = 1;
      v65 = 127;
      v66 |= 1u;
      v56 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v55, 9);
      v7 = (gameswf::Self *)&v56;
      if ( v55 == -1 )
        v7 = v58;
      gameswf::Strcpy_s(v7, &byte_9[1], (gameswf::Self *)"menus_hud", v29);
      v48 = 1;
      v59 = -1;
      v49 = 0;
      v60 = 127;
      v61 |= 1u;
      gameswf::String::resize((gameswf::String::Self *)&v48, 9);
      v8 = (gameswf::Self *)&v49;
      if ( v48 == -1 )
        v8 = v51;
      gameswf::Strcpy_s(v8, &byte_9[1], (gameswf::Self *)"documents", v30);
      v52 = -1;
      v53 = 127;
      v54 |= 1u;
      gameswf::RenderFX::findClass((gameswf::RenderFX::Self *)v42, *v38, (const gameswf::String::Self *)&v48);
      gameswf::ASClassHandle::invokeStaticMethod(
        (gameswf::ASClassHandle::Self *)v46,
        (const gameswf::String::Self *)v42,
        (const gameswf::ASValue::Self *)v62,
        (int)(uintptr_t)(v45));
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v46);
      v9 = v42[0];
      if ( v42[0] != nullptr )
      {
        v10 = (*(uint16_t *)v42[0])-- == 1;
        if ( v10 )
          gameswf::free_internal(v9, nullptr, v26);
      }
      if ( v48 == -1 && (v54 & 1) != 0 )
        gameswf::free_internal(v51, v50, v26);
      if ( v55 == -1 && (v61 & 1) != 0 )
        gameswf::free_internal(v58, v57, v26);
      if ( LOBYTE(v62[0]) == 0xFF && (v66 & 1) != 0 )
        gameswf::free_internal(v63, (void *)v62[2], v26);
      v35 = *((gameswf::Player::Self **)*v38 + 9);
      v11 = (gameswf::ASArray::Self *)sub_4EBBF0(0x4Cu, 1);
      gameswf::ASArray::Construct(v11, v35);
      v12 = *(uint32_t *)(v2 + 12);
      v39 = nullptr;
      v13 = *(uint32_t *)(v12 + 200);
      v40 = *(uint32_t *)(v12 + 204);
      v14 = (v40 - v13) >> 2;
      if ( v14 != 0 )
      {
        if ( v14 > 0x3FFFFFFF )
          sub_18FFEE0(v40, v14);
        v39 = (const char **)opNew(4 * v14);
        v40 = *(uint32_t *)(v12 + 204);
        v13 = *(uint32_t *)(v12 + 200);
      }
      v15 = v39;
      if ( v40 != v13 )
      {
        v36 = v11;
        v16 = v13;
        do
        {
          if ( v15 != nullptr )
            g4_std::string::construct_copy(v15, v16);
          ++v15;
          v16 += 4;
        }
        while ( v40 != v16 );
        v11 = v36;
      }
      if ( v37 != 0 && v39 != v15 )
      {
        v41 = v15;
        v22 = v11;
        v23 = v39;
        do
        {
          v25 = *v23;
          v47[0] = 0;
          v47[1] = 0;
          ++v23;
          gameswf::ASValue::setString((gameswf::ASValue::Self *)v47, v25);
          gameswf::ASArray::push(v22, (const gameswf::ASValue::Self *)v47);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v47);
        }
        while ( v41 != v23 );
        v11 = v22;
        v15 = v41;
      }
      LOWORD(v44[0]) = 5;
      v44[1] = (unsigned int)(uintptr_t)(v11);
      if ( v11 != nullptr )
        gameswf::RefCounted::addRef(v11);
      v81 = 1;
      v82 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v81, 17);
      v17 = (gameswf::Self *)&v82;
      if ( v81 == -1 )
        v17 = v84;
      gameswf::Strcpy_s(v17, (char *)&word_12, (gameswf::Self *)"setButtonsMapping", v31);
      v85 = -1;
      v74 = 1;
      v86 = 127;
      v87 |= 1u;
      v75 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v74, 9);
      v18 = (gameswf::Self *)&v75;
      if ( v74 == -1 )
        v18 = v77;
      gameswf::Strcpy_s(v18, &byte_9[1], (gameswf::Self *)"menus_hud", v32);
      v67 = 1;
      v78 = -1;
      v68 = 0;
      v79 = 127;
      v80 |= 1u;
      gameswf::String::resize((gameswf::String::Self *)&v67, 9);
      v19 = (gameswf::Self *)&v68;
      if ( v67 == -1 )
        v19 = v70;
      gameswf::Strcpy_s(v19, &byte_9[1], (gameswf::Self *)"documents", v33);
      v71 = -1;
      v72 = 127;
      v73 |= 1u;
      gameswf::RenderFX::findClass((gameswf::RenderFX::Self *)v43, *v38, (const gameswf::String::Self *)&v67);
      gameswf::ASClassHandle::setMember(
        (gameswf::ASClassHandle::Self *)v43,
        (const gameswf::String::Self *)&v81,
        (const gameswf::ASValue::Self *)v44);
      v20 = v43[0];
      if ( v43[0] != nullptr )
      {
        v10 = (*(uint16_t *)v43[0])-- == 1;
        if ( v10 )
          gameswf::free_internal(v20, nullptr, v27);
      }
      if ( v67 == -1 && (v73 & 1) != 0 )
        gameswf::free_internal(v70, v69, v27);
      if ( v74 == -1 && (v80 & 1) != 0 )
        gameswf::free_internal(v77, v76, v27);
      if ( v81 == -1 && (v87 & 1) != 0 )
        gameswf::free_internal(v84, v83, v27);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v44);
      if ( v39 != v15 )
      {
        v21 = v39;
        do
        {
          v24 = v21++;
          g4_std::string::Destroy(v24);
        }
        while ( v15 != v21 );
      }
      if ( v39 != nullptr )
        opDelete(v39);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v45);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C1E6F0  (binary VA: 0xc1e6f0)
// Original: sub_C1E6F0
// ----------------------------------------------------------------------------
void sub_C1E6F0(int a1, char a2)
{
  *(uint8_t *)(a1 + 18) = a2;
  sub_C1DF60(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C1E710  (binary VA: 0xc1e710)
// Original: sub_C1E710
// ----------------------------------------------------------------------------
int sub_C1E710()
{
  bool v0;
  int v1;
  char *v3;
  uint32_t *v4;
  int v5[4];

  v0 = sub_629790();
  v1 = 0;
  if ( v0 )
  {
    if ( byte_20D186A != 0 || byte_20D186E != 0 )
    {
      v3 = (char *)sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), 13864);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v5) + 1, v3, (int)(uintptr_t)(v5));
      if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
      {
        sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
        __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
      }
      v4 = nullptr;
      if ( byte_20D2D64 == 0 )
        v4 = (uint32_t *)(&unk_20D2D60);
      sub_7BDAA0(v4, (int)(uintptr_t)(v5) + 1, 1, 33);
      g4_std::string::Destroy((char *)v5 + 1);
      return 1;
    }
    else if ( (*(uint8_t *)unk_20D1865) == 0 )
    {
      *(uint8_t *)(unk_20D1865) = (uint8_t)(uintptr_t)(1);
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::FireManualEvent((grapher::ActorManager::Self *)&unk_20D5B60, "OpenInGameMenu", nullptr);
      return 0;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_C1E8C0  (binary VA: 0xc1e8c0)
// Original: sub_C1E8C0
// ----------------------------------------------------------------------------
void sub_C1E8C0(int a1)
{
  uint8_t *v1;
  int v2;
  uint8_t *i;
  int v4;
  int v5;
  uint8_t *j;
  char *v7;
  typedef char *_g4_t_v8;
  typedef uint8_t *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[16];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (46u + sizeof(_g4_t_v10)) > _g4_s2 ? (46u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v11)) > _g4_s3 ? (48u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v12)) > _g4_s4 ? (52u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v13)) > _g4_s5 ? (56u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v14)) > _g4_s6 ? (60u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v15)) > _g4_s7 ? (64u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v16)) > _g4_s8 ? (80u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v17)) > _g4_s9 ? (84u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v18)) > _g4_s10 ? (88u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v19)) > _g4_s11 ? (92u + sizeof(_g4_t_v19)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 46u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);

  if ( *(uint32_t *)(a1 + 12) != 0 )
  {
    switch ( *(uint32_t *)(a1 + 28) )
    {
      case 0:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Moga pocket", (int)(uintptr_t)(&v10));
        break;
      case 1:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Moga mode A", (int)(uintptr_t)(&v10) + 1);
        break;
      case 2:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Moga hid", (int)(uintptr_t)(&v11));
        break;
      case 3:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Xperia", (int)(uintptr_t)(&v11) + 1);
        break;
      case 4:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Shield", (int)(uintptr_t)(&v11) + 2);
        break;
      case 6:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Nyko", (int)(uintptr_t)(&v11) + 3);
        break;
      case 7:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Samsung game pad", (int)(uintptr_t)(&v12));
        break;
      case 8:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Generic", (int)(uintptr_t)(&v12) + 1);
        break;
      case 9:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Keyboard", (int)(uintptr_t)(&v12) + 2);
        break;
      default:
        break;
    }
    v1 = (uint8_t *)v15[0];
    v2 = *(uint32_t *)(v15[0] - 4);
    if ( v2 >= 0 )
    {
      sub_19397C0(v15);
      v1 = (uint8_t *)v15[0];
      v2 = *(uint32_t *)(v15[0] - 4);
    }
    for ( i = v1; ; ++i )
    {
      if ( v2 >= 0 )
      {
        v9 = i;
        sub_19397C0(v15);
        v1 = (uint8_t *)v15[0];
        i = v9;
      }
      if ( i == &v1[*((uint32_t *)v1 - 3)] )
        break;
      if ( *i == 32 )
      {
        *i = 95;
        v1 = (uint8_t *)v15[0];
      }
      v2 = *((uint32_t *)v1 - 1);
    }
    g4_std::string::construct_copy(&v17, v15);
    g4_std::string::construct_copy(&v18, &v17);
    g4_std::string::append((int)(uintptr_t)(&v18), ".json", 5u);
    sub_5D9810(*(uint32_t *)(a1 + 12), &v18);
    g4_std::string::Destroy(&v18);
    g4_std::string::Destroy(&v17);
    g4_std::string::Destroy(v15);
    switch ( *(uint32_t *)(a1 + 28) )
    {
      case 0:
        v8 = (char *)&v12 + 3;
        v7 = "Moga pocket";
        goto LABEL_36;
      case 1:
        v8 = (char *)&v13;
        v7 = "Moga mode A";
        goto LABEL_36;
      case 2:
        v8 = (char *)&v13 + 1;
        v7 = "Moga hid";
        goto LABEL_36;
      case 3:
        v8 = (char *)&v13 + 2;
        v7 = "Xperia";
        goto LABEL_36;
      case 4:
        v8 = (char *)&v13 + 3;
        v7 = "Shield";
        goto LABEL_36;
      case 6:
        v8 = (char *)&v14;
        v7 = "Nyko";
        goto LABEL_36;
      case 7:
        v8 = (char *)&v14 + 1;
        v7 = "Samsung game pad";
        goto LABEL_36;
      case 8:
        v8 = (char *)&v14 + 2;
        v7 = "Generic";
        goto LABEL_36;
      case 9:
        v8 = (char *)&v14 + 3;
        v7 = "Keyboard";
LABEL_36:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), v7, (int)(uintptr_t)(v8));
        v4 = v16;
        v5 = *(uint32_t *)(v16 - 4);
        if ( v5 < 0 )
          goto LABEL_17;
        goto LABEL_16;
      default:
        v4 = v16;
        v5 = *(uint32_t *)(v16 - 4);
        if ( v5 >= 0 )
        {
LABEL_16:
          sub_19397C0(&v16);
          v4 = v16;
          v5 = *(uint32_t *)(v16 - 4);
        }
LABEL_17:
        for ( j = (uint8_t *)v4; ; ++j )
        {
          if ( v5 >= 0 )
          {
            sub_19397C0(&v16);
            v4 = v16;
          }
          if ( j == (uint8_t *)(v4 + *(uint32_t *)(v4 - 12)) )
            break;
          if ( *j == 32 )
          {
            *j = 95;
            v4 = v16;
          }
          v5 = *(uint32_t *)(v4 - 4);
        }
        g4_std::string::construct_copy(v19, &v16);
        sub_5BAA10(*(uint32_t *)(a1 + 12), v19);
        g4_std::string::Destroy(v19);
        g4_std::string::Destroy(&v16);
        break;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C1ECB0  (binary VA: 0xc1ecb0)
// Original: sub_C1ECB0
// ----------------------------------------------------------------------------
void sub_C1ECB0(int a1)
{
  int v1;
  const gameswf::String::Self **v2;
  const gameswf::String::Self *v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  int v9;
  typedef unsigned int _g4_t_v10;
  typedef const char *_g4_t_v11;
  typedef const char *_g4_t_v12;
  typedef gameswf::Self *_g4_t_v13[5];
  typedef uint8_t _g4_t_v14[12];
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef void *_g4_t_v17;
  typedef gameswf::Self *_g4_t_v18;
  typedef int16_t _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef void *_g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef int16_t _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef unsigned int _g4_t_v29[3];
  typedef gameswf::Self *_g4_t_v30;
  typedef int16_t _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef uint8_t _g4_t_v34[36];
  typedef char _g4_t_v35[44];
  typedef int *_g4_t_v36;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v13)) > _g4_s3 ? (48u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v14)) > _g4_s4 ? (68u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v15)) > _g4_s5 ? (80u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (81u + sizeof(_g4_t_v16)) > _g4_s6 ? (81u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v17)) > _g4_s7 ? (88u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v18)) > _g4_s8 ? (92u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v19)) > _g4_s9 ? (96u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (98u + sizeof(_g4_t_v20)) > _g4_s10 ? (98u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (99u + sizeof(_g4_t_v21)) > _g4_s11 ? (99u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v22)) > _g4_s12 ? (112u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (113u + sizeof(_g4_t_v23)) > _g4_s13 ? (113u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v24)) > _g4_s14 ? (120u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v25)) > _g4_s15 ? (124u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v26)) > _g4_s16 ? (128u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (130u + sizeof(_g4_t_v27)) > _g4_s17 ? (130u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (131u + sizeof(_g4_t_v28)) > _g4_s18 ? (131u + sizeof(_g4_t_v28)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v29)) > _g4_s19 ? (144u + sizeof(_g4_t_v29)) : _g4_s19,
    _g4_s21 = (156u + sizeof(_g4_t_v30)) > _g4_s20 ? (156u + sizeof(_g4_t_v30)) : _g4_s20,
    _g4_s22 = (160u + sizeof(_g4_t_v31)) > _g4_s21 ? (160u + sizeof(_g4_t_v31)) : _g4_s21,
    _g4_s23 = (162u + sizeof(_g4_t_v32)) > _g4_s22 ? (162u + sizeof(_g4_t_v32)) : _g4_s22,
    _g4_s24 = (163u + sizeof(_g4_t_v33)) > _g4_s23 ? (163u + sizeof(_g4_t_v33)) : _g4_s23,
    _g4_s25 = (168u + sizeof(_g4_t_v34)) > _g4_s24 ? (168u + sizeof(_g4_t_v34)) : _g4_s24,
    _g4_s26 = (204u + sizeof(_g4_t_v35)) > _g4_s25 ? (204u + sizeof(_g4_t_v35)) : _g4_s25,
    _g4_s27 = (248u + sizeof(_g4_t_v36)) > _g4_s26 ? (248u + sizeof(_g4_t_v36)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 68u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 81u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 92u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 98u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 99u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 112u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 113u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 120u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 128u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 130u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 131u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 144u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 156u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 160u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 162u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 163u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 168u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 204u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 248u);

  v36 = &a1;
  v1 = sub_732CE0();
  v2 = (const gameswf::String::Self **)sub_733A60(v1, 0);
  if ( v2 != nullptr || (v9 = sub_732CE0(), (v2 = (const gameswf::String::Self **)sub_733A60(v9, 2)) != nullptr) )
  {
    v3 = *v2;
    if ( *v2 != nullptr )
    {
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v35, nullptr);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v34);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v35);
      if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v34) != 0 )
      {
        LOWORD(v29[0]) = 1;
        gameswf::String::resize((gameswf::String::Self *)v29, 25);
        v4 = (gameswf::Self *)((char *)v29 + 1);
        if ( LOBYTE(v29[0]) == 0xFF )
          v4 = v30;
        gameswf::Strcpy_s(v4, (char *)&dword_18 + 2, (gameswf::Self *)"hideCustomControlsSection", v35);
        v22 = 1;
        v31 = -1;
        v23 = 0;
        v32 = 127;
        v33 |= 1u;
        gameswf::String::resize((gameswf::String::Self *)&v22, 8);
        v5 = (gameswf::Self *)&v23;
        if ( v22 == -1 )
          v5 = v25;
        gameswf::Strcpy_s(v5, byte_9, (gameswf::Self *)"MogaHelp", v11);
        v15 = 1;
        v26 = -1;
        v16 = 0;
        v27 = 127;
        v28 |= 1u;
        gameswf::String::resize((gameswf::String::Self *)&v15, 13);
        v6 = (gameswf::Self *)&v16;
        if ( v15 == -1 )
          v6 = v18;
        gameswf::Strcpy_s(v6, &byte_9[5], (gameswf::Self *)"menus.options", v12);
        v19 = -1;
        v20 = 127;
        v21 |= 1u;
        gameswf::RenderFX::findClass((gameswf::RenderFX::Self *)v13, v3, (const gameswf::String::Self *)&v15);
        gameswf::ASClassHandle::invokeStaticMethod(
          (gameswf::ASClassHandle::Self *)v14,
          (const gameswf::String::Self *)v13,
          (const gameswf::ASValue::Self *)v29,
          0);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
        v7 = v13[0];
        if ( v13[0] != nullptr && (*(uint16_t *)v13[0])-- == 1 )
          gameswf::free_internal(v7, nullptr, v10);
        if ( v15 == -1 && (v21 & 1) != 0 )
          gameswf::free_internal(v18, v17, v10);
        if ( v22 == -1 && (v28 & 1) != 0 )
          gameswf::free_internal(v25, v24, v10);
        if ( LOBYTE(v29[0]) == 0xFF && (v33 & 1) != 0 )
          gameswf::free_internal(v30, (void *)v29[2], v10);
      }
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v34);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C1F020  (binary VA: 0xc1f020)
// Original: sub_C1F020
// ----------------------------------------------------------------------------
int sub_C1F020()
{
  int v0;
  int result;
  int v2;

  v0 = sub_732CE0();
  result = sub_733A60(v0, 0);
  if ( result == 0 )
  {
    v2 = sub_732CE0();
    return sub_733A60(v2, 2u);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C1F070  (binary VA: 0xc1f070)
// Original: sub_C1F070
// ----------------------------------------------------------------------------
void sub_C1F070(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  char *v7;
  char *v8;
  gameswf::Self *v9;
  bool v10;
  gameswf::Self *v11;
  gameswf::Self *v12;
  gameswf::Self *v13;
  gameswf::Self *v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  int v18;
  typedef const char *_g4_t_v19;
  typedef unsigned int *_g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef const char *_g4_t_v22;
  typedef const char *_g4_t_v23;
  typedef const char *_g4_t_v24;
  typedef const char *_g4_t_v25;
  typedef const char *_g4_t_v26;
  typedef const char *_g4_t_v27;
  typedef char _g4_t_v28;
  typedef const char **_g4_t_v29;
  typedef const gameswf::String::Self **_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef char _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef char _g4_t_v37[4];
  typedef gameswf::Self *_g4_t_v38[4];
  typedef gameswf::Self *_g4_t_v39[2];
  typedef int _g4_t_v40;
  typedef char _g4_t_v41;
  typedef char _g4_t_v42[4];
  typedef char *_g4_t_v43;
  typedef uint16_t _g4_t_v44[6];
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef void *_g4_t_v47;
  typedef gameswf::Self *_g4_t_v48;
  typedef int16_t _g4_t_v49;
  typedef char _g4_t_v50;
  typedef char _g4_t_v51;
  typedef char _g4_t_v52;
  typedef char _g4_t_v53;
  typedef void *_g4_t_v54;
  typedef gameswf::Self *_g4_t_v55;
  typedef int16_t _g4_t_v56;
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef unsigned int _g4_t_v59[3];
  typedef gameswf::Self *_g4_t_v60;
  typedef int16_t _g4_t_v61;
  typedef char _g4_t_v62;
  typedef char _g4_t_v63;
  typedef char _g4_t_v64;
  typedef char _g4_t_v65;
  typedef void *_g4_t_v66;
  typedef gameswf::Self *_g4_t_v67;
  typedef int16_t _g4_t_v68;
  typedef char _g4_t_v69;
  typedef char _g4_t_v70;
  typedef char _g4_t_v71;
  typedef char _g4_t_v72;
  typedef void *_g4_t_v73;
  typedef gameswf::Self *_g4_t_v74;
  typedef int16_t _g4_t_v75;
  typedef char _g4_t_v76;
  typedef char _g4_t_v77;
  typedef char _g4_t_v78;
  typedef char _g4_t_v79;
  typedef void *_g4_t_v80;
  typedef gameswf::Self *_g4_t_v81;
  typedef int16_t _g4_t_v82;
  typedef char _g4_t_v83;
  typedef char _g4_t_v84;
  typedef uint32_t **_g4_t_v85;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v24)) > _g4_s5 ? (16u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v25)) > _g4_s6 ? (16u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v26)) > _g4_s7 ? (16u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v27)) > _g4_s8 ? (16u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v28)) > _g4_s9 ? (40u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v29)) > _g4_s10 ? (40u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v30)) > _g4_s11 ? (44u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v31)) > _g4_s12 ? (48u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (66u + sizeof(_g4_t_v32)) > _g4_s13 ? (66u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (67u + sizeof(_g4_t_v33)) > _g4_s14 ? (67u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v34)) > _g4_s15 ? (68u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v35)) > _g4_s16 ? (72u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v36)) > _g4_s17 ? (76u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v37)) > _g4_s18 ? (80u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v38)) > _g4_s19 ? (84u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v39)) > _g4_s20 ? (100u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v40)) > _g4_s21 ? (108u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v41)) > _g4_s22 ? (112u + sizeof(_g4_t_v41)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v42)) > _g4_s23 ? (116u + sizeof(_g4_t_v42)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v43)) > _g4_s24 ? (120u + sizeof(_g4_t_v43)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v44)) > _g4_s25 ? (136u + sizeof(_g4_t_v44)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v45)) > _g4_s26 ? (148u + sizeof(_g4_t_v45)) : _g4_s26,
    _g4_s28 = (149u + sizeof(_g4_t_v46)) > _g4_s27 ? (149u + sizeof(_g4_t_v46)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v47)) > _g4_s28 ? (156u + sizeof(_g4_t_v47)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v48)) > _g4_s29 ? (160u + sizeof(_g4_t_v48)) : _g4_s29,
    _g4_s31 = (164u + sizeof(_g4_t_v49)) > _g4_s30 ? (164u + sizeof(_g4_t_v49)) : _g4_s30,
    _g4_s32 = (166u + sizeof(_g4_t_v50)) > _g4_s31 ? (166u + sizeof(_g4_t_v50)) : _g4_s31,
    _g4_s33 = (167u + sizeof(_g4_t_v51)) > _g4_s32 ? (167u + sizeof(_g4_t_v51)) : _g4_s32,
    _g4_s34 = (180u + sizeof(_g4_t_v52)) > _g4_s33 ? (180u + sizeof(_g4_t_v52)) : _g4_s33,
    _g4_s35 = (181u + sizeof(_g4_t_v53)) > _g4_s34 ? (181u + sizeof(_g4_t_v53)) : _g4_s34,
    _g4_s36 = (188u + sizeof(_g4_t_v54)) > _g4_s35 ? (188u + sizeof(_g4_t_v54)) : _g4_s35,
    _g4_s37 = (192u + sizeof(_g4_t_v55)) > _g4_s36 ? (192u + sizeof(_g4_t_v55)) : _g4_s36,
    _g4_s38 = (196u + sizeof(_g4_t_v56)) > _g4_s37 ? (196u + sizeof(_g4_t_v56)) : _g4_s37,
    _g4_s39 = (198u + sizeof(_g4_t_v57)) > _g4_s38 ? (198u + sizeof(_g4_t_v57)) : _g4_s38,
    _g4_s40 = (199u + sizeof(_g4_t_v58)) > _g4_s39 ? (199u + sizeof(_g4_t_v58)) : _g4_s39,
    _g4_s41 = (212u + sizeof(_g4_t_v59)) > _g4_s40 ? (212u + sizeof(_g4_t_v59)) : _g4_s40,
    _g4_s42 = (224u + sizeof(_g4_t_v60)) > _g4_s41 ? (224u + sizeof(_g4_t_v60)) : _g4_s41,
    _g4_s43 = (228u + sizeof(_g4_t_v61)) > _g4_s42 ? (228u + sizeof(_g4_t_v61)) : _g4_s42,
    _g4_s44 = (230u + sizeof(_g4_t_v62)) > _g4_s43 ? (230u + sizeof(_g4_t_v62)) : _g4_s43,
    _g4_s45 = (231u + sizeof(_g4_t_v63)) > _g4_s44 ? (231u + sizeof(_g4_t_v63)) : _g4_s44,
    _g4_s46 = (244u + sizeof(_g4_t_v64)) > _g4_s45 ? (244u + sizeof(_g4_t_v64)) : _g4_s45,
    _g4_s47 = (245u + sizeof(_g4_t_v65)) > _g4_s46 ? (245u + sizeof(_g4_t_v65)) : _g4_s46,
    _g4_s48 = (252u + sizeof(_g4_t_v66)) > _g4_s47 ? (252u + sizeof(_g4_t_v66)) : _g4_s47,
    _g4_s49 = (256u + sizeof(_g4_t_v67)) > _g4_s48 ? (256u + sizeof(_g4_t_v67)) : _g4_s48,
    _g4_s50 = (260u + sizeof(_g4_t_v68)) > _g4_s49 ? (260u + sizeof(_g4_t_v68)) : _g4_s49,
    _g4_s51 = (262u + sizeof(_g4_t_v69)) > _g4_s50 ? (262u + sizeof(_g4_t_v69)) : _g4_s50,
    _g4_s52 = (263u + sizeof(_g4_t_v70)) > _g4_s51 ? (263u + sizeof(_g4_t_v70)) : _g4_s51,
    _g4_s53 = (276u + sizeof(_g4_t_v71)) > _g4_s52 ? (276u + sizeof(_g4_t_v71)) : _g4_s52,
    _g4_s54 = (277u + sizeof(_g4_t_v72)) > _g4_s53 ? (277u + sizeof(_g4_t_v72)) : _g4_s53,
    _g4_s55 = (284u + sizeof(_g4_t_v73)) > _g4_s54 ? (284u + sizeof(_g4_t_v73)) : _g4_s54,
    _g4_s56 = (288u + sizeof(_g4_t_v74)) > _g4_s55 ? (288u + sizeof(_g4_t_v74)) : _g4_s55,
    _g4_s57 = (292u + sizeof(_g4_t_v75)) > _g4_s56 ? (292u + sizeof(_g4_t_v75)) : _g4_s56,
    _g4_s58 = (294u + sizeof(_g4_t_v76)) > _g4_s57 ? (294u + sizeof(_g4_t_v76)) : _g4_s57,
    _g4_s59 = (295u + sizeof(_g4_t_v77)) > _g4_s58 ? (295u + sizeof(_g4_t_v77)) : _g4_s58,
    _g4_s60 = (308u + sizeof(_g4_t_v78)) > _g4_s59 ? (308u + sizeof(_g4_t_v78)) : _g4_s59,
    _g4_s61 = (309u + sizeof(_g4_t_v79)) > _g4_s60 ? (309u + sizeof(_g4_t_v79)) : _g4_s60,
    _g4_s62 = (316u + sizeof(_g4_t_v80)) > _g4_s61 ? (316u + sizeof(_g4_t_v80)) : _g4_s61,
    _g4_s63 = (320u + sizeof(_g4_t_v81)) > _g4_s62 ? (320u + sizeof(_g4_t_v81)) : _g4_s62,
    _g4_s64 = (324u + sizeof(_g4_t_v82)) > _g4_s63 ? (324u + sizeof(_g4_t_v82)) : _g4_s63,
    _g4_s65 = (326u + sizeof(_g4_t_v83)) > _g4_s64 ? (326u + sizeof(_g4_t_v83)) : _g4_s64,
    _g4_s66 = (327u + sizeof(_g4_t_v84)) > _g4_s65 ? (327u + sizeof(_g4_t_v84)) : _g4_s65,
    _g4_s67 = (348u + sizeof(_g4_t_v85)) > _g4_s66 ? (348u + sizeof(_g4_t_v85)) : _g4_s66
  };
  alignas(16) uint8_t _g4_sf[_g4_s67];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 66u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 67u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 84u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 108u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 112u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 116u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 120u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 136u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 148u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 149u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 156u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 160u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 164u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 166u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 167u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 180u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 181u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 188u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 192u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 196u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 198u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 199u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 212u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 224u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 228u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 230u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 231u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 244u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 245u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 252u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 256u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 260u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 262u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 263u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 276u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 277u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 284u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 288u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 292u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 294u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 295u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 308u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 309u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 316u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 320u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 324u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 326u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 327u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 348u);

  v85 = &a1;
  v2 = (int)(uintptr_t)(a1);
  if ( a1[5] != -1 )
  {
    if ( a1[3] == 0 )
      return;
    v3 = sub_732CE0();
    v30 = (const gameswf::String::Self **)sub_733A60(v3, 2);
    if ( v30 == nullptr )
    {
      v18 = sub_732CE0();
      v30 = (const gameswf::String::Self **)sub_733A60(v18, 0);
      if ( v30 == nullptr )
        goto LABEL_22;
    }
    LOWORD(v59[0]) = 1;
    gameswf::String::resize((gameswf::String::Self *)v59, 10);
    v4 = (gameswf::Self *)((char *)v59 + 1);
    if ( LOBYTE(v59[0]) == 0xFF )
      v4 = v60;
    gameswf::Strcpy_s(v4, &byte_9[2], (gameswf::Self *)"currentKey", v22);
    v52 = 1;
    v61 = -1;
    v53 = 0;
    v62 = 127;
    v63 |= 1u;
    gameswf::String::resize((gameswf::String::Self *)&v52, 8);
    v5 = (gameswf::Self *)&v53;
    if ( v52 == -1 )
      v5 = v55;
    gameswf::Strcpy_s(v5, byte_9, (gameswf::Self *)"MogaHelp", v23);
    v56 = -1;
    v57 = 127;
    v58 |= 1u;
    v45 = 1;
    v46 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v45, 13);
    v6 = (gameswf::Self *)&v46;
    if ( v45 == -1 )
      v6 = v48;
    gameswf::Strcpy_s(v6, &byte_9[5], (gameswf::Self *)"menus.options", v24);
    v49 = -1;
    v50 = 127;
    v51 |= 1u;
    gameswf::RenderFX::findClass((gameswf::RenderFX::Self *)v38, *v30, (const gameswf::String::Self *)&v45);
    v20 = v59;
    gameswf::ASClassHandle::getMember((gameswf::ASClassHandle::Self *)v42, (const gameswf::String::Self *)v38);
    if ( v42[0] == 3 || v42[0] == 4 )
    {
      v7 = v43;
      if ( *v43 != -1 )
      {
LABEL_14:
        v8 = v7 + 1;
LABEL_15:
        v28 = *v8;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v42);
        v9 = v38[0];
        if ( v38[0] != nullptr )
        {
          v10 = (*(uint16_t *)v38[0])-- == 1;
          if ( v10 )
            gameswf::free_internal(v9, nullptr, (unsigned int)(uintptr_t)(v20));
        }
        if ( v45 == -1 && (v51 & 1) != 0 )
          gameswf::free_internal(v48, v47, (unsigned int)(uintptr_t)(v20));
        if ( v52 == -1 && (v58 & 1) != 0 )
          gameswf::free_internal(v55, v54, (unsigned int)(uintptr_t)(v20));
        if ( LOBYTE(v59[0]) == 0xFF && (v63 & 1) != 0 )
          gameswf::free_internal(v60, (void *)v59[2], (unsigned int)(uintptr_t)(v20));
        if ( v28 == 0 )
        {
          *(uint32_t *)(v2 + 20) = -1;
          sub_C1F070(v2, a2);
          return;
        }
LABEL_22:
        v32 = 1;
        v29 = (const char **)sub_5C69B0(*(uint32_t *)(v2 + 12), *(uint32_t *)(v2 + 20), a2, &v32);
        if ( v32 != 0 )
        {
          sub_5C6220(*(uint32_t *)(v2 + 12));
          switch ( *(uint32_t *)(v2 + 28) )
          {
            case 0:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Moga pocket", (int)(uintptr_t)(&v33));
              break;
            case 1:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Moga mode A", (int)(uintptr_t)(&v34));
              break;
            case 2:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Moga hid", (int)(uintptr_t)(&v34) + 1);
              break;
            case 3:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Xperia", (int)(uintptr_t)(&v34) + 2);
              break;
            case 4:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Shield", (int)(uintptr_t)(&v34) + 3);
              break;
            case 6:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Nyko", (int)(uintptr_t)(&v35));
              break;
            case 7:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Samsung game pad", (int)(uintptr_t)(&v35) + 1);
              break;
            case 8:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Generic", (int)(uintptr_t)(&v35) + 2);
              break;
            case 9:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Keyboard", (int)(uintptr_t)(&v35) + 3);
              break;
            default:
              break;
          }
          sub_C1C8E0();
          sub_5BAA10(*(uint32_t *)(v2 + 12), v37);
          g4_std::string::Destroy(v37);
          g4_std::string::Destroy(&v36);
          if ( v30 != nullptr )
          {
            v19 = *v29;
            v44[0] = 0;
            gameswf::ASValue::setString((gameswf::ASValue::Self *)v44, v19);
            v78 = 1;
            v79 = 0;
            gameswf::String::resize((gameswf::String::Self *)&v78, 10);
            v11 = (gameswf::Self *)&v79;
            if ( v78 == -1 )
              v11 = v81;
            gameswf::Strcpy_s(v11, &byte_9[2], (gameswf::Self *)"currentKey", v25);
            v71 = 1;
            v82 = -1;
            v72 = 0;
            v83 = 127;
            v84 |= 1u;
            gameswf::String::resize((gameswf::String::Self *)&v71, 8);
            v12 = (gameswf::Self *)&v72;
            if ( v71 == -1 )
              v12 = v74;
            gameswf::Strcpy_s(v12, byte_9, (gameswf::Self *)"MogaHelp", v26);
            v75 = -1;
            v76 = 127;
            v77 |= 1u;
            v64 = 1;
            v65 = 0;
            gameswf::String::resize((gameswf::String::Self *)&v64, 13);
            v13 = (gameswf::Self *)&v65;
            if ( v64 == -1 )
              v13 = v67;
            gameswf::Strcpy_s(v13, &byte_9[5], (gameswf::Self *)"menus.options", v27);
            v68 = -1;
            v69 = 127;
            v70 |= 1u;
            gameswf::RenderFX::findClass((gameswf::RenderFX::Self *)v39, *v30, (const gameswf::String::Self *)&v64);
            gameswf::ASClassHandle::setMember(
              (gameswf::ASClassHandle::Self *)v39,
              (const gameswf::String::Self *)&v78,
              (const gameswf::ASValue::Self *)v44);
            v14 = v39[0];
            if ( v39[0] != nullptr )
            {
              v10 = (*(uint16_t *)v39[0])-- == 1;
              if ( v10 )
                gameswf::free_internal(v14, nullptr, v21);
            }
            if ( v64 == -1 && (v70 & 1) != 0 )
              gameswf::free_internal(v67, v66, v21);
            if ( v71 == -1 && (v77 & 1) != 0 )
              gameswf::free_internal(v74, v73, v21);
            if ( v78 == -1 && (v84 & 1) != 0 )
              gameswf::free_internal(v81, v80, v21);
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v44);
            sub_C1DF60(v2, *(uint8_t *)(v2 + 18));
          }
          *(uint32_t *)(v2 + 20) = -1;
        }
        return;
      }
    }
    else
    {
      v7 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 )
      {
        v17 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
        v7 = (char *)(&byte_20D6378);
        if ( v17 != 0 )
        {
          dword_20D6388 |= 0x7FFFFFu;
          byte_20D6378 = 1;
          byte_20D6379 = 0;
          BYTE2(dword_20D6388) &= ~0x80u;
          HIBYTE(dword_20D6388) |= 1u;
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
          __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
          v7 = (char *)(&byte_20D6378);
        }
      }
      if ( byte_20D6378 != -1 )
        goto LABEL_14;
    }
    v8 = *((char **)v7 + 3);
    goto LABEL_15;
  }
  v15 = (uint32_t *)a1[13];
  v16 = a1 + 12;
  if ( v15 == nullptr )
    goto LABEL_56;
  do
  {
    while ( v15[4] >= a2 )
    {
      v16 = v15;
      v15 = (uint32_t *)v15[2];
      if ( v15 == nullptr )
        goto LABEL_54;
    }
    v15 = (uint32_t *)v15[3];
  }
  while ( v15 != nullptr );
LABEL_54:
  if ( a1 + 12 == v16 || v16[4] > a2 )
  {
LABEL_56:
    v40 = a2;
    v41 = 0;
    sub_C1D160(v16, &v40);
    v16 = v31;
  }
  if ( *((uint8_t *)v16 + 20) == 0 )
  {
    *(uint8_t *)(v2 + 128) = 1;
    *(uint8_t *)g4_std::map_int_bool_89bed7::opIndex((std::map<int,bool> *)(v2 + 44), &a2) = 1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C1FA10  (binary VA: 0xc1fa10)
// Original: sub_C1FA10
// ----------------------------------------------------------------------------
void sub_C1FA10(int a1)
{
  int v1;
  bool v2;
  uint32_t *v3;

  if ( *(uint8_t *)(a1 + 4) != 0 )
  {
    v1 = *(uint32_t *)(a1 + 12);
    if ( v1 != 0 )
    {
      *(uint8_t *)(a1 + 16) = 0;
      sub_5BB5A0(v1);
      *(uint32_t *)(a1 + 28) = -1;
      *(uint32_t *)(a1 + 40) = -1;
      *(uint8_t *)(a1 + 4) = 0;
      sub_C1ECB0(a1);
      g4_std::Rb_tree_int_pair_int_const_bool_c1a45c::M_erase(
        a1 + 44,
        *(uint32_t **)(a1 + 52));
      *(uint32_t *)(a1 + 52) = 0;
      *(uint32_t *)(a1 + 56) = a1 + 48;
      *(uint32_t *)(a1 + 60) = a1 + 48;
      *(uint32_t *)(a1 + 64) = 0;
      g4_std::Rb_tree_int_pair_int_const_Analo_5877fa::M_erase(
        a1 + 68,
        *(uint32_t **)(a1 + 76));
      v2 = byte_20D2D50 == 0;
      *(uint32_t *)(a1 + 76) = 0;
      *(uint32_t *)(a1 + 80) = a1 + 72;
      *(uint32_t *)(a1 + 84) = a1 + 72;
      *(uint32_t *)(a1 + 88) = 0;
      *(uint8_t *)(a1 + 128) = 1;
      if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
      {
        sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
        __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
      }
      v3 = nullptr;
      if ( byte_20D2D64 == 0 )
        v3 = (uint32_t *)(&unk_20D2D60);
      sub_7A9D50(v3, 22);
      sub_C1DF60(a1, 1);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C1FB80  (binary VA: 0xc1fb80)
// Original: sub_C1FB80
// ----------------------------------------------------------------------------
int sub_C1FB80(int a1, int a2, uint8_t a3)
{
  int result;
  char v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (10u + sizeof(_g4_t_v5)) > _g4_s0 ? (10u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v11)) > _g4_s6 ? (32u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v12)) > _g4_s7 ? (36u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v13)) > _g4_s8 ? (40u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v14)) > _g4_s9 ? (44u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v15)) > _g4_s10 ? (48u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v16)) > _g4_s11 ? (52u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v17)) > _g4_s12 ? (56u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v18)) > _g4_s13 ? (60u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v19)) > _g4_s14 ? (64u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v20)) > _g4_s15 ? (68u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v21)) > _g4_s16 ? (72u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v22)) > _g4_s17 ? (76u + sizeof(_g4_t_v22)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 10u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);

  result = a3;
  if ( *(uint8_t *)(a1 + 4) == 0 || a2 != 8 )
  {
    if ( a3 == 0 )
      *(uint32_t *)(a1 + 28) = a2;
    if ( *(uint32_t *)(a1 + 40) != a2 )
    {
      if ( a2 == 8 )
      {
        *(uint8_t *)(a1 + 17) = 1;
        *(uint32_t *)(a1 + 24) = 8;
        sub_5BB5A0(*(uint32_t *)(a1 + 12));
        *(uint8_t *)(a1 + 16) = a3;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Generic.json", (int)(uintptr_t)(&v7));
        sub_5D9810(*(uint32_t *)(a1 + 12), &v16);
        g4_std::string::Destroy(&v16);
        *(uint32_t *)(a1 + 40) = 8;
      }
      else
      {
        *(uint32_t *)(a1 + 24) = a2;
        if ( a2 == 10 )
        {
          *(uint8_t *)(a1 + 16) = a3;
          switch ( *(uint32_t *)(a1 + 28) )
          {
            case 0:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Moga pocket", (int)(uintptr_t)(&v7) + 3);
              break;
            case 1:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Moga mode A", (int)(uintptr_t)(&v8));
              break;
            case 2:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Moga hid", (int)(uintptr_t)(&v8) + 1);
              break;
            case 3:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Xperia", (int)(uintptr_t)(&v8) + 2);
              break;
            case 4:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Shield", (int)(uintptr_t)(&v8) + 3);
              break;
            case 6:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Nyko", (int)(uintptr_t)(&v9));
              break;
            case 7:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Samsung game pad", (int)(uintptr_t)(&v9) + 1);
              break;
            case 8:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Generic", (int)(uintptr_t)(&v9) + 2);
              break;
            case 9:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Keyboard", (int)(uintptr_t)(&v9) + 3);
              break;
            default:
              break;
          }
          sub_C1C8E0();
          v20 = (int)(uintptr_t)(&dword_213B814);
          sub_1939B80(&v20, *(uint32_t *)(v19 - 12) + 16);
          g4_std::string::append((int)(uintptr_t)(&v20), "customController", 0x10u);
          g4_std::string::append_str(&v20, &v19);
          g4_std::string::construct_copy(&v21, &v20);
          g4_std::string::append((int)(uintptr_t)(&v21), ".json", 5u);
          sub_5D9810(*(uint32_t *)(a1 + 12), &v21);
          g4_std::string::Destroy(&v21);
          g4_std::string::Destroy(&v20);
          g4_std::string::Destroy(&v19);
          g4_std::string::Destroy(&v18);
          *(uint32_t *)(a1 + 40) = 10;
        }
        else
        {
          sub_5BB5A0(*(uint32_t *)(a1 + 12));
          *(uint8_t *)(a1 + 16) = a3;
          switch ( a2 )
          {
            case 0:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Moga_pocket.json", (int)(uintptr_t)(&v5));
              sub_5D9810(*(uint32_t *)(a1 + 12), &v10);
              g4_std::string::Destroy(&v10);
              *(uint32_t *)(a1 + 36) = 1;
              *(uint32_t *)(a1 + 40) = 0;
              break;
            case 1:
              *(uint32_t *)(a1 + 36) = 2;
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Moga_mode_A.json", (int)(uintptr_t)(&v5) + 1);
              sub_5D9810(*(uint32_t *)(a1 + 12), &v11);
              g4_std::string::Destroy(&v11);
              *(uint32_t *)(a1 + 40) = 1;
              break;
            case 2:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Moga_hid.json", (int)(uintptr_t)(&v6));
              sub_5D9810(*(uint32_t *)(a1 + 12), &v12);
              g4_std::string::Destroy(&v12);
              *(uint32_t *)(a1 + 40) = 2;
              break;
            case 4:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Shield.json", (int)(uintptr_t)(&v6) + 2);
              sub_5D9810(*(uint32_t *)(a1 + 12), &v14);
              g4_std::string::Destroy(&v14);
              *(uint32_t *)(a1 + 40) = 4;
              break;
            case 6:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Nyko.json", (int)(uintptr_t)(&v6) + 1);
              sub_5D9810(*(uint32_t *)(a1 + 12), &v13);
              g4_std::string::Destroy(&v13);
              *(uint32_t *)(a1 + 40) = 6;
              break;
            case 7:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Samsung_game_pad.json", (int)(uintptr_t)(&v6) + 3);
              sub_5D9810(*(uint32_t *)(a1 + 12), &v15);
              g4_std::string::Destroy(&v15);
              *(uint32_t *)(a1 + 40) = 7;
              break;
            case 9:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Keyboard.json", (int)(uintptr_t)(&v7) + 1);
              sub_5D9810(*(uint32_t *)(a1 + 12), &v17);
              g4_std::string::Destroy(&v17);
              *(uint32_t *)(a1 + 40) = 9;
              break;
            default:
              g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Dummy.json", (int)(uintptr_t)(&v7) + 2);
              sub_5D9810(*(uint32_t *)(a1 + 12), v22);
              g4_std::string::Destroy(v22);
              *(uint32_t *)(a1 + 28) = -1;
              *(uint32_t *)(a1 + 40) = -1;
              break;
          }
        }
      }
      v4 = *(uint8_t *)(a1 + 18);
      *(uint8_t *)(a1 + 4) = 1;
      sub_C1DF60(a1, v4);
      g4_std::Rb_tree_int_pair_int_const_bool_c1a45c::M_erase(
        a1 + 44,
        *(void **)(a1 + 52));
      *(uint32_t *)(a1 + 52) = 0;
      *(uint32_t *)(a1 + 56) = a1 + 48;
      *(uint32_t *)(a1 + 60) = a1 + 48;
      *(uint32_t *)(a1 + 64) = 0;
      g4_std::Rb_tree_int_pair_int_const_Analo_5877fa::M_erase(
        a1 + 68,
        *(void **)(a1 + 76));
      result = a1 + 72;
      *(uint32_t *)(a1 + 76) = 0;
      *(uint32_t *)(a1 + 80) = a1 + 72;
      *(uint32_t *)(a1 + 84) = a1 + 72;
      *(uint32_t *)(a1 + 88) = 0;
      *(uint8_t *)(a1 + 128) = 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C20180  (binary VA: 0xc20180)
// Original: sub_C20180
// ----------------------------------------------------------------------------
uint32_t * sub_C20180(int a1)
{
  uint32_t *v1;
  gameswf::CharacterHandle::Self *v2;
  gameswf::CharacterHandle::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  gameswf::CharacterHandle::Self *v14;
  uint32_t *v15;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B6D0);
  v1 = *(uint32_t **)(a1 + 12);
  v15 = v1;
  if ( v1 != nullptr )
  {
    v2 = (gameswf::CharacterHandle::Self *)v1[51];
    v3 = (gameswf::CharacterHandle::Self *)v1[50];
    if ( v2 != v3 )
    {
      do
      {
        v14 = v3;
        v3 = (gameswf::CharacterHandle::Self *)((char *)v3 + 4);
        g4_std::string::Destroy(v14);
      }
      while ( v2 != v3 );
      v3 = (gameswf::CharacterHandle::Self *)v15[50];
    }
    if ( v3 != nullptr )
      opDelete(v3);
    g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_erase(
      (int)(uintptr_t)(v15 + 43),
      (uint32_t *)v15[45]);
    opDelete(v15);
  }
  v4 = *(uint32_t *)(a1 + 132);
  *(uint32_t *)(a1 + 12) = 0;
  if ( v4 != 0 )
    G4_VCALL<void>(v4, 20);
  *(uint32_t *)(a1 + 132) = 0;
  sub_5BC940();
  v5 = *(uint32_t *)(a1 + 96);
  if ( v5 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v5 + 4))(*(uint32_t *)(a1 + 96));
  v6 = *(uint32_t *)(a1 + 100);
  *(uint32_t *)(a1 + 96) = 0;
  if ( v6 != 0 )
    G4_VCALL<void>(v6, 4);
  v7 = *(uint32_t *)(a1 + 104);
  *(uint32_t *)(a1 + 100) = 0;
  if ( v7 != 0 )
    G4_VCALL<void>(v7, 4);
  v8 = *(uint32_t *)(a1 + 108);
  *(uint32_t *)(a1 + 104) = 0;
  if ( v8 != 0 )
    G4_VCALL<void>(v8, 4);
  v9 = *(uint32_t *)(a1 + 112);
  *(uint32_t *)(a1 + 108) = 0;
  if ( v9 != 0 )
    G4_VCALL<void>(v9, 4);
  v10 = *(uint32_t *)(a1 + 116);
  *(uint32_t *)(a1 + 112) = 0;
  if ( v10 != 0 )
    G4_VCALL<void>(v10, 4);
  v11 = *(uint32_t *)(a1 + 120);
  *(uint32_t *)(a1 + 116) = 0;
  if ( v11 != 0 )
    G4_VCALL<void>(v11, 4);
  v12 = *(uint32_t *)(a1 + 124);
  *(uint32_t *)(a1 + 120) = 0;
  if ( v12 != 0 )
    G4_VCALL<void>(v12, 4);
  *(uint32_t *)(a1 + 124) = 0;
  gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)(a1 + 156));
  g4_std::Rb_tree_int_pair_int_const_Analo_5877fa::M_erase(
    a1 + 68,
    *(uint32_t **)(a1 + 76));
  g4_std::Rb_tree_int_pair_int_const_bool_c1a45c::M_erase(
    a1 + 44,
    *(uint32_t **)(a1 + 52));
  return sub_5A8060((uint32_t *)a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C20330  (binary VA: 0xc20330)
// Original: sub_C20330
// ----------------------------------------------------------------------------
void sub_C20330(uint32_t *a1)
{
  uint32_t *v1;
  gameswf::CharacterHandle::Self *v2;
  gameswf::CharacterHandle::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  gameswf::CharacterHandle::Self *v13;
  uint32_t *v14;

  *a1 = (uint32_t)(uintptr_t)(&off_206B6D0);
  v1 = (uint32_t *)a1[3];
  v14 = v1;
  if ( v1 != nullptr )
  {
    v2 = (gameswf::CharacterHandle::Self *)v1[51];
    v3 = (gameswf::CharacterHandle::Self *)v1[50];
    if ( v2 != v3 )
    {
      do
      {
        v13 = v3;
        v3 = (gameswf::CharacterHandle::Self *)((char *)v3 + 4);
        g4_std::string::Destroy(v13);
      }
      while ( v2 != v3 );
      v3 = (gameswf::CharacterHandle::Self *)v14[50];
    }
    if ( v3 != nullptr )
      opDelete(v3);
    g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_erase(
      (int)(uintptr_t)(v14 + 43),
      (uint32_t *)v14[45]);
    opDelete(v14);
  }
  v4 = a1[33];
  a1[3] = 0;
  if ( v4 != 0 )
    G4_VCALL<void>(v4, 20);
  a1[33] = 0;
  sub_5BC940();
  v5 = a1[24];
  if ( v5 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v5 + 4))(a1[24]);
  v6 = a1[25];
  a1[24] = 0;
  if ( v6 != 0 )
    G4_VCALL<void>(v6, 4);
  v7 = a1[26];
  a1[25] = 0;
  if ( v7 != 0 )
    G4_VCALL<void>(v7, 4);
  v8 = a1[27];
  a1[26] = 0;
  if ( v8 != 0 )
    G4_VCALL<void>(v8, 4);
  v9 = a1[28];
  a1[27] = 0;
  if ( v9 != 0 )
    G4_VCALL<void>(v9, 4);
  v10 = a1[29];
  a1[28] = 0;
  if ( v10 != 0 )
    G4_VCALL<void>(v10, 4);
  v11 = a1[30];
  a1[29] = 0;
  if ( v11 != 0 )
    G4_VCALL<void>(v11, 4);
  v12 = a1[31];
  a1[30] = 0;
  if ( v12 != 0 )
    G4_VCALL<void>(v12, 4);
  a1[31] = 0;
  gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)(a1 + 39));
  g4_std::Rb_tree_int_pair_int_const_Analo_5877fa::M_erase(
    (int)(uintptr_t)(a1 + 17),
    (uint32_t *)a1[19]);
  g4_std::Rb_tree_int_pair_int_const_bool_c1a45c::M_erase(
    (int)(uintptr_t)(a1 + 11),
    (uint32_t *)a1[13]);
  sub_5A8060(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C204F0  (binary VA: 0xc204f0)
// Original: sub_C204F0
// ----------------------------------------------------------------------------
int sub_C204F0()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_C20500  (binary VA: 0xc20500)
// Original: sub_C20500
// ----------------------------------------------------------------------------
void * sub_C20500()
{
  return &glf::IOSGameController::sRtti;
}

// ----------------------------------------------------------------------------
// Function: sub_C20520  (binary VA: 0xc20520)
// Original: sub_C20520
// ----------------------------------------------------------------------------
int sub_C20520(int a1, char a2)
{
  *(uint8_t *)(a1 + 32) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C20530  (binary VA: 0xc20530)
// Original: sub_C20530
// ----------------------------------------------------------------------------
void sub_C20530(glf::InputDevice::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B708);
  g4_std::string::Destroy((char *)a1 + 156);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206E008);
  glf::InputDevice::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C20590  (binary VA: 0xc20590)
// Original: sub_C20590
// ----------------------------------------------------------------------------
void sub_C20590(glf::InputDevice::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B708);
  g4_std::string::Destroy((char *)a1 + 156);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206E008);
  glf::InputDevice::Destroy(a1);
  opDelete(a1);
}


