#include "Core/Utils/DecompTypes.h"
#include "TU26_MenuControllerPart6.h"

// ----------------------------------------------------------------------------
// Function: sub_BFEF90  (binary VA: 0xbfef90)
// Original: sub_BFEF90
// ----------------------------------------------------------------------------
int sub_BFEF90()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE6BC);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE6BC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE6C0), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE6C0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE6C4), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE6C4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE6C8), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE6C8, &unk_20D1280);
  dword_20DE6CC = 1056964608;
  dword_20DE6D0 = 1056964608;
  dword_20DE6D4 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_BFF090  (binary VA: 0xbff090)
// Original: sub_BFF090
// ----------------------------------------------------------------------------
int sub_BFF090(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: sub_BFF0A0  (binary VA: 0xbff0a0)
// Original: sub_BFF0A0
// ----------------------------------------------------------------------------
int sub_BFF0A0(int a1, int a2)
{
  int v2;
  int v3;
  void *v4;
  int v6;

  if ( *(uint8_t *)(*(uint32_t *)(dword_20DDDC0 + 868) + 34) == 0 )
    goto LABEL_8;
  v2 = *(uint32_t *)(a1 + 4);
  if ( v2 == 0 || *(uint32_t *)(*(uint32_t *)(v2 + 408) - 12) == 0 || (v6 = *(uint32_t *)(v2 + 404)) == 0 )
  {
LABEL_4:
    v3 = 2;
    if ( byte_20D4E40 == 0 )
      goto LABEL_13;
    goto LABEL_5;
  }
  if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v6 + 36))(*(uint32_t *)(v2 + 404)) == 0 )
  {
    v2 = *(uint32_t *)(a1 + 4);
    goto LABEL_4;
  }
  v3 = (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 4) + 568))(*(uint32_t *)(a1 + 4));
  v2 = *(uint32_t *)(a1 + 4);
  if ( byte_20D4E40 == 0 )
  {
LABEL_13:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
    {
      sub_9C9CC0(&unk_20D4E60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
    }
  }
LABEL_5:
  v4 = nullptr;
  if ( byte_20D4E64 == 0 )
    v4 = &unk_20D4E60;
  sub_9CB030(v4, v3, v2, a2, 0, 1, 0, 1065353216);
LABEL_8:
  if ( byte_20D32F8 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D32F8) != 0 )
  {
    sub_A728F0(&byte_20D3300);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D32F8);
    __cxa_atexit((void (*)(void *))sub_545B10, &byte_20D3300, &unk_20D1280);
  }
  return sub_A6CC50(&byte_20D3300, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_BFF270  (binary VA: 0xbff270)
// Original: sub_BFF270
// ----------------------------------------------------------------------------
int sub_BFF270()
{
  if ( byte_20D32F8 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D32F8) != 0 )
  {
    sub_A728F0((int)byte_20D3300);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D32F8);
    __cxa_atexit((void (*)(void *))sub_545B10, byte_20D3300, &unk_20D1280);
  }
  return sub_A6CC50((int)byte_20D3300, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_BFF300  (binary VA: 0xbff300)
// Original: sub_BFF300
// ----------------------------------------------------------------------------
int sub_BFF300(int a1, long double a2)
{
  int *v3;
  int *v4;
  int *v5;
  int *v6;
  const char *v7;
  uint8_t v9[60];

  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v3 = (int *)(&dword_20D4AC0);
  sub_AC4910(a2, (int)(uintptr_t)(v3), 4, 0.0);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D49A8 == 0 )
    v4 = (int *)(&dword_20D49A0);
  sub_82A420(v4, 1, 0);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v5 = nullptr;
  if ( byte_20D49A8 == 0 )
    v5 = (int *)(&dword_20D49A0);
  sub_82AAB0(v5);
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v6 = (int *)(&dword_20D4AC0);
  sub_AC4FE0((vox::EmitterHandle::Self *)v9, (int)(uintptr_t)(v6), (glf::Self *)"menu_pause", 1028443341);
  v7 = "OpenInGameMenu";
  vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v9);
  if ( a1 != 0 )
    v7 = "OpenInGameMap";
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  return (int)(uintptr_t)(grapher::ActorManager::FireManualEvent((grapher::ActorManager::Self *)&unk_20D5B60, v7, nullptr));
}

// ----------------------------------------------------------------------------
// Function: sub_BFF5C0  (binary VA: 0xbff5c0)
// Original: sub_BFF5C0
// ----------------------------------------------------------------------------
int sub_BFF5C0(int a1)
{
  int *v1;
  int result;
  int v3;
  int *v4;

  if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60(&dword_20D54A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D54A8 == 0 )
    v1 = (int *)(&dword_20D54A0);
  sub_A6C300(v1, 7, a1);
  sub_A6C300(v1, 8, a1);
  sub_A6C300(v1, 9, a1);
  sub_A6C300(v1, 11, a1);
  sub_A6C300(v1, 14, a1);
  sub_A6C300(v1, 13, a1);
  result = sub_A6C300(v1, 6, a1);
  v3 = *(uint32_t *)(a1 + 24);
  if ( (v3 & 0x8000) == 0 )
  {
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0(&dword_20D49A0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D49A8 == 0 )
      v4 = (int *)(&dword_20D49A0);
    return sub_82D5A0(v4, v3, 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFF790  (binary VA: 0xbff790)
// Original: sub_BFF790
// ----------------------------------------------------------------------------
void sub_BFF790(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  Elf32_Sym *v8;
  int v9;
  int v10;
  int *v11;
  int *v12;
  int v13;
  int *v14;
  int *v15;
  int *v16;
  char v17;
  int *v18;
  int v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v1 = a1[1];
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  if ( v1 == 0 )
    return;
  v2 = *(uint32_t *)(*(uint32_t *)(v1 + 408) - 12);
  if ( v2 == 0 )
    goto LABEL_3;
  v21 = *(uint32_t *)(v1 + 404);
  if ( v21 == 0 )
    goto LABEL_65;
  v22 = (*(int (**)(uint32_t))(*(uint32_t *)v21 + 28))(*(uint32_t *)(v1 + 404));
  v8 = (Elf32_Sym *)(&stru_20004);
  if ( v22 == 11 )
    goto LABEL_32;
  v1 = a1[1];
  if ( v1 == 0 )
    goto LABEL_54;
  v2 = *(uint32_t *)(*(uint32_t *)(v1 + 408) - 12);
  if ( v2 == 0 )
    goto LABEL_3;
  v24 = *(uint32_t *)(v1 + 404);
  if ( v24 == 0 )
  {
LABEL_65:
    v3 = v2;
LABEL_66:
    if ( v2 == 0 )
      goto LABEL_54;
    v23 = *(uint32_t *)(v1 + 404);
    if ( v23 != 0 )
    {
      if ( (*(int (**)(uint32_t))(*(uint32_t *)v23 + 28))(*(uint32_t *)(v1 + 404)) == 8 )
      {
LABEL_74:
        v8 = (Elf32_Sym *)(&stru_40004);
        goto LABEL_32;
      }
      v1 = a1[1];
      if ( v1 == 0 )
        goto LABEL_54;
      v2 = *(uint32_t *)(*(uint32_t *)(v1 + 408) - 12);
LABEL_3:
      v3 = v2;
    }
    if ( v2 == 0 || (v4 = *(uint32_t *)(v1 + 404)) == 0 )
    {
LABEL_12:
      if ( v3 != 0 )
      {
        v6 = *(uint32_t *)(v1 + 404);
        if ( v6 != 0 && (*(int (**)(uint32_t))(*(uint32_t *)v6 + 28))(*(uint32_t *)(v1 + 404)) == 12 )
        {
          if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
          {
            sub_82DAB0(&dword_20D49A0);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
            __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
          }
          v7 = nullptr;
          v8 = (Elf32_Sym *)&loc_4;
          if ( byte_20D49A8 == 0 )
            v7 = (int *)(&dword_20D49A0);
          v9 = *(uint32_t *)(v7[3] + 176);
          if ( v9 == 0 )
            goto LABEL_32;
          v10 = a1[1];
          if ( v10 != 0 )
          {
            v11 = (int *)(*(int (**)(uint32_t))(*(uint32_t *)v10 + 16))(a1[1]);
            if ( v11 != nullptr )
            {
              if ( v11 == (int *)(uintptr_t)(&dword_20D68C4) )
              {
LABEL_77:
                if ( sub_8715E0(v10) == 0 )
                {
                  v8 = (Elf32_Sym *)(&stru_20004);
                  v27 = 1065353216;
                  v26 = 0x20000;
LABEL_26:
                  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
                  {
                    sub_82DAB0(&dword_20D49A0);
                    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
                    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
                  }
                  v12 = nullptr;
                  if ( byte_20D49A8 == 0 )
                    v12 = (int *)(&dword_20D49A0);
                  v13 = *(uint32_t *)(v12[16] + 4);
                  if ( v13 != 0 )
                    G4_VCALL<void>(v13, 40, "value", v27, v9 + 24, 0);
                  *(uint32_t *)(v9 + 56) |= v26;
                  goto LABEL_32;
                }
              }
              else
              {
                while ( 1 )
                {
                  v11 = (int *)v11[1];
                  if ( v11 == nullptr )
                    break;
                  if ( v11 == (int *)(uintptr_t)(&dword_20D68C4) )
                    goto LABEL_77;
                }
              }
            }
          }
          v8 = (Elf32_Sym *)(&stru_40004);
          v27 = 0;
          v26 = 0x40000;
          goto LABEL_26;
        }
      }
      goto LABEL_54;
    }
    if ( (*(int (**)(uint32_t))(*(uint32_t *)v4 + 28))(*(uint32_t *)(v1 + 404)) != 9
      && (*(uint32_t *)(*(uint32_t *)(v1 + 408) - 12) == 0
       || (v5 = *(uint32_t *)(v1 + 404)) == 0
       || (*(int (**)(uint32_t))(*(uint32_t *)v5 + 28))(*(uint32_t *)(v1 + 404)) != 10) )
    {
      v1 = a1[1];
      if ( v1 != 0 )
      {
        v3 = *(uint32_t *)(*(uint32_t *)(v1 + 408) - 12);
        goto LABEL_12;
      }
LABEL_54:
      v8 = (Elf32_Sym *)&loc_4;
      goto LABEL_32;
    }
    goto LABEL_74;
  }
  v25 = (*(int (**)(uint32_t))(*(uint32_t *)v24 + 28))(*(uint32_t *)(v1 + 404));
  v8 = (Elf32_Sym *)(&stru_7FFF4 + 12);
  if ( v25 != 10 )
  {
    v1 = a1[1];
    if ( v1 == 0 )
      goto LABEL_54;
    v2 = *(uint32_t *)(*(uint32_t *)(v1 + 408) - 12);
    v3 = v2;
    goto LABEL_66;
  }
LABEL_32:
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v14 = nullptr;
  if ( byte_20D49A8 == 0 )
    v14 = (int *)(&dword_20D49A0);
  sub_82E090((int)(uintptr_t)(v14), (int)(uintptr_t)(v8));
  if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60(&dword_20D54A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v15 = nullptr;
  if ( byte_20D54A8 == 0 )
    v15 = (int *)(&dword_20D54A0);
  sub_A6C280(v15, 7, a1);
  sub_A6C280(v15, 8, a1);
  sub_A6C280(v15, 9, a1);
  sub_A6C280(v15, 11, a1);
  sub_A6C280(v15, 14, a1);
  sub_A6C280(v15, 13, a1);
  sub_A6C280(v15, 6, a1);
  if ( byte_20D7750 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D7750) != 0 )
  {
    sub_A726A0(&dword_20D7758);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D7750);
    __cxa_atexit((void (*)(void *))sub_A23BD0, &dword_20D7758, &unk_20D1280);
  }
  v16 = nullptr;
  if ( byte_20D775C == 0 )
    v16 = (int *)(&dword_20D7758);
  sub_A6BEE0(v16, 3);
  if ( byte_20D32F8 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D32F8) != 0 )
  {
    sub_A728F0(&byte_20D3300);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D32F8);
    __cxa_atexit((void (*)(void *))sub_545B10, &byte_20D3300, &unk_20D1280);
  }
  sub_A72E10(&byte_20D3300);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v17 = byte_20D49A8;
  v18 = nullptr;
  if ( byte_20D49A8 == 0 )
    v18 = (int *)(&dword_20D49A0);
  v19 = v18[14];
  a1[6] = v19;
  if ( (v19 & 0x8000) == 0 )
  {
    if ( byte_20D4980 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0(&dword_20D49A0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v17 = byte_20D49A8;
    }
    v20 = nullptr;
    if ( v17 == 0 )
      v20 = (int *)(&dword_20D49A0);
    sub_82D5A0(v20, 0x8000, 1);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_BFFE70  (binary VA: 0xbffe70)
// Original: sub_BFFE70
// ----------------------------------------------------------------------------
int sub_BFFE70(int a1)
{
  int *v1;

  if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D54A8 == 0 )
    v1 = (int *)(&dword_20D54A0);
  sub_A6C300((int)(uintptr_t)(v1), 7, a1);
  sub_A6C300((int)(uintptr_t)(v1), 8, a1);
  sub_A6C300((int)(uintptr_t)(v1), 9, a1);
  sub_A6C300((int)(uintptr_t)(v1), 11, a1);
  sub_A6C300((int)(uintptr_t)(v1), 14, a1);
  sub_A6C300((int)(uintptr_t)(v1), 13, a1);
  return sub_A6C300((int)(uintptr_t)(v1), 6, a1);
}

// ----------------------------------------------------------------------------
// Function: sub_BFFFC0  (binary VA: 0xbfffc0)
// Original: sub_BFFFC0
// ----------------------------------------------------------------------------
int sub_BFFFC0(int a1)
{
  int v1;
  void *v2;

  *(uint8_t *)(a1 + 8) = 0;
  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 )
    *(uint32_t *)(v1 + 500) = 0;
  if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
  {
    sub_9C9CC0((int)(uintptr_t)(&unk_20D4E60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
    __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D4E64 == 0 )
    v2 = &unk_20D4E60;
  return sub_974480((int)(uintptr_t)(v2), 0);
}

// ----------------------------------------------------------------------------
// Function: sub_C00080  (binary VA: 0xc00080)
// Original: sub_C00080
// ----------------------------------------------------------------------------
int * sub_C00080(int a1, int a2)
{
  int *result;
  uint8_t *v3;
  float v4; // xmm0_4
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  float v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int *v18;

  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    v18 = (int *)(&dword_20D49A0);
    sub_82DAB0(&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D49A8 == 0 )
    result = (int *)(&dword_20D49A0);
  if ( *((uint8_t *)result + 72) == 0 )
  {
    result = *(int **)(a1 + 4);
    if ( result[274] > 0 )
    {
      result = (int *)result[276];
      v3 = (uint8_t *)*result;
      if ( *result != 0 )
      {
        if ( G4_VCALL<int>(v3, 456) != 0 && (v3[1873] & 8) != 0 )
        {
          result = (int *)G4_VCALL<int>(v3, 572, *(uint32_t *)(a2 + 8), *(uint32_t *)(a2 + 12), v5, v6, v7, v8, v9, v10, v12, v13, v14, v15, v16, v17, v18);
          v3[1916] = 0;
        }
        else
        {
          v11 = *(float *)(a2 + 8);
          v4 = fabs(sin(v11)) * *(float *)(a2 + 12);
          G4_VCALL<void>(v3, 404, v11 < 0.0, LODWORD(v4));
          return (int *)G4_VCALL<int>(v3, 412, *(uint32_t *)(a2 + 8), *(uint32_t *)(a2 + 12));
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C00220  (binary VA: 0xc00220)
// Original: sub_C00220
// ----------------------------------------------------------------------------
int sub_C00220(int a1)
{
  int result;
  int v2;
  int v3;

  result = *(uint32_t *)(a1 + 4);
  if ( result != 0 )
  {
    v2 = 0;
    if ( *(int *)(result + 1096) > 0 )
      v2 = **(uint32_t **)(result + 1104);
    result = sub_8F0680();
    v3 = result;
    if ( result == v2 && v2 != 0 )
    {
      result = G4_VCALL<int>(v2, 456);
      if ( result != 0 && (*(uint8_t *)(v2 + 1873) & 8) != 0 )
      {
        G4_VCALL<void>(v2, 572, 0, 0);
        if ( *(uint8_t *)(v2 + 2336) == 0 )
        {
          *(uint32_t *)(v2 + 1872) &= ~1u;
          *(uint32_t *)(v2 + 1876) = *(uint32_t *)(v2 + 1876);
        }
        sub_987540(v3, 0);
        sub_987580(v3, 0);
        sub_9875C0(v3, 0);
        return sub_987600(v3, 0);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C00310  (binary VA: 0xc00310)
// Original: sub_C00310
// ----------------------------------------------------------------------------
int sub_C00310(int a1, int a2)
{
  int v2;

  v2 = sub_8F0680();
  return G4_VCALL<int>(v2, 404, *(uint8_t *)(a2 + 8), *(uint32_t *)(a2 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_C00360  (binary VA: 0xc00360)
// Original: sub_C00360
// ----------------------------------------------------------------------------
int sub_C00360(int a1, int a2)
{
  int v2;
  int v4;

  if ( *(uint8_t *)(a2 + 8) != 0 )
  {
    v4 = sub_8F0680();
    return G4_VCALL<int>(v4, 396, *(uint32_t *)(a2 + 12));
  }
  else
  {
    v2 = sub_8F0680();
    return G4_VCALL<int>(v2, 400, *(uint32_t *)(a2 + 12));
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C003D0  (binary VA: 0xc003d0)
// Original: sub_C003D0
// ----------------------------------------------------------------------------
int sub_C003D0(int a1, int a2)
{
  int v2;

  v2 = sub_8F0680();
  return G4_VCALL<int>(v2, 404, *(uint8_t *)(a2 + 8), *(uint32_t *)(a2 + 12));
}

// ----------------------------------------------------------------------------
// Function: nullsub_520  (binary VA: 0xc00428)
// Original: nullsub_520
// ----------------------------------------------------------------------------
void nullsub_520()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_C00430  (binary VA: 0xc00430)
// Original: sub_C00430
// ----------------------------------------------------------------------------
void sub_C00430(int a1, int a2)
{
  int v2;
  uint8_t *v3;
  int v4;
  int v5;

  v2 = *(uint32_t *)(a2 + 8);
  if ( v2 == 1 )
    goto LABEL_7;
  if ( v2 <= 1 )
  {
    if ( v2 != 0 )
      return;
    v3 = (uint8_t *)sub_8F0680();
    sub_8F4C10(v3);
LABEL_7:
    v4 = sub_8F0680();
    sub_90E4D0(v4);
    return;
  }
  if ( v2 <= 3 )
  {
    v5 = sub_8F0680();
    sub_90E610(v5);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C004A0  (binary VA: 0xc004a0)
// Original: sub_C004A0
// ----------------------------------------------------------------------------
int sub_C004A0(int a1, int a2)
{
  int result;
  int v3;

  result = a2;
  if ( *(uint32_t *)(a2 + 8) == 2 )
  {
    v3 = sub_8F0680();
    return G4_VCALL<int>(v3, 668, 1, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C00500  (binary VA: 0xc00500)
// Original: sub_C00500
// ----------------------------------------------------------------------------
int sub_C00500(int a1, int a2, char a3)
{
  int v3;
  int result;
  int v5;
  int v6;

  v3 = sub_8F0680();
  result = G4_VCALL<int>(v3, 456);
  if ( *(uint32_t *)(a2 + 8) == 1 )
  {
    result = sub_5B5320(result);
    if ( (uint8_t)result != 0 )
    {
      v5 = sub_8F0680();
      v6 = -1082130432;
      if ( a3 != 0 )
        v6 = 1065353216;
      return G4_VCALL<int>(v5, 408, v6);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C00590  (binary VA: 0xc00590)
// Original: sub_C00590
// ----------------------------------------------------------------------------
int * sub_C00590(int a1, int a2, long double a3, int a4, int a5)
{
  int *result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  result = (int *)((char *)&dword_20B9FF4 + (uint32_t)jpt_C005C9[*(uint32_t *)(a5 + 12)]);
  switch ( *(uint32_t *)(a5 + 12) )
  {
    case 0:
      result = *(int **)(a5 + 8);
      if ( result == (int *)((char *)&dword_0 + 1) )
        goto LABEL_38;
      if ( (int)(uintptr_t)(result) <= 1 )
      {
        if ( result == nullptr )
        {
          v14 = sub_8F0680(a2);
          sub_8F4C10(v14);
LABEL_38:
          v15 = sub_8F0680(a2);
          return (sub_90E4D0(v15), (int *)0);
        }
      }
      else if ( (int)(uintptr_t)(result) <= 3 )
      {
        v10 = sub_8F0680(a2);
        return (int *)sub_90E610(v10);
      }
      return result;
    case 1:
    case 2:
    case 4:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
      return result;
    case 3:
      if ( *(uint32_t *)(a5 + 8) == 2 )
      {
        v11 = sub_8F0680(a2);
        return (int *)G4_VCALL<int>(v11, 668, 1, 0);
      }
      return result;
    case 5:
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0(&dword_20D49A0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      result = nullptr;
      if ( byte_20D49A8 == 0 )
        result = (int *)(&dword_20D49A0);
      if ( *((uint8_t *)result + 72) == 0 )
      {
        v12 = sub_8F0680(a2);
        return (int *)G4_VCALL<int>(v12, 396, 1065353216);
      }
      return result;
    case 6:
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0(&dword_20D49A0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      result = nullptr;
      if ( byte_20D49A8 == 0 )
        result = (int *)(&dword_20D49A0);
      if ( *((uint8_t *)result + 72) == 0 )
      {
        v13 = sub_8F0680(a2);
        return (int *)G4_VCALL<int>(v13, 400, 1065353216);
      }
      return result;
    case 7:
      result = (int *)(&dword_0 + 1);
      if ( *(uint32_t *)(a5 + 8) == 2 )
        return (int *)sub_BFF300((int)(uintptr_t)(result), a3);
      return result;
    case 0xD:
      if ( *(uint32_t *)(a5 + 8) == 2 )
      {
        result = nullptr;
        return (int *)sub_BFF300((int)(uintptr_t)(result), a3);
      }
      return result;
    case 0xE:
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0(&dword_20D49A0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      result = nullptr;
      if ( byte_20D49A8 == 0 )
        result = (int *)(&dword_20D49A0);
      if ( *((uint8_t *)result + 72) == 0 )
        return (int *)sub_C00500(a4, a5, 1);
      return result;
    case 0xF:
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0(&dword_20D49A0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      result = nullptr;
      if ( byte_20D49A8 == 0 )
        result = (int *)(&dword_20D49A0);
      if ( *((uint8_t *)result + 72) == 0 )
      {
        v7 = sub_8F0680(a2);
        result = (int *)G4_VCALL<int>(v7, 456);
        if ( *(uint32_t *)(a5 + 8) == 1 )
        {
          result = (int *)sub_5B5320(result);
          if ( (uint8_t)(uintptr_t)(result) != 0 )
          {
            v9 = sub_8F0680(v8);
            return (int *)G4_VCALL<int>(v9, 408, -1082130432);
          }
        }
      }
      return result;
    default:
      return (int *)a1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C00920  (binary VA: 0xc00920)
// Original: sub_C00920
// ----------------------------------------------------------------------------
int * sub_C00920(long double a1, int a2, int a3)
{
  int *result;
  int v4;
  int v5; // kr04_4
  int v6;
  int v7;
  int v8;

  if ( G4_VCALL<int>(a3, 8) == 13 && *(uint32_t *)(a3 + 12) == 7 )
  {
    result = (int *)sub_9784C0(*(uint32_t *)(dword_20DDDC0 + 868));
    if ( (uint8_t)(uintptr_t)(result) != 0 )
      return result;
  }
  else
  {
    result = *(int **)(a2 + 4);
    if ( result == nullptr )
      return result;
    if ( (result[44] & 1) == 0 )
      return result;
    result = (int *)&byte_20D186E;
    if ( byte_20D186E != 0 )
      return result;
  }
  v5 = G4_VCALL<int>(a3, 8) - 7;
  result = (int *)((char *)&dword_20B9FF4 + (uint32_t)jpt_C0099C[v5]);
  switch ( v5 )
  {
    case 0:
      result = sub_C00080(a2, a3);
      break;
    case 1:
      result = (int *)sub_C00220(a2);
      break;
    case 2:
    case 7:
      v6 = sub_8F0680(v4);
      result = (int *)G4_VCALL<int>(v6, 404, *(uint8_t *)(a3 + 8), *(uint32_t *)(a3 + 12));
      break;
    case 3:
    case 5:
      return result;
    case 4:
      if ( *(uint8_t *)(a3 + 8) != 0 )
      {
        v8 = sub_8F0680(v4);
        result = (int *)G4_VCALL<int>(v8, 396, *(uint32_t *)(a3 + 12));
      }
      else
      {
        v7 = sub_8F0680(v4);
        result = (int *)G4_VCALL<int>(v7, 400, *(uint32_t *)(a3 + 12));
      }
      break;
    case 6:
      result = sub_C00590((int)(uintptr_t)(result), v4, a1, a2, a3);
      break;
    default:
      result = (int *)v5;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C00AA0  (binary VA: 0xc00aa0)
// Original: sub_C00AA0
// ----------------------------------------------------------------------------
void sub_C00AA0(uint32_t *a1)
{
  int *v1;
  int v2;

  *a1 = (uint32_t)(uintptr_t)(&off_206B408);
  if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60(&dword_20D54A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D54A8 == 0 )
    v1 = (int *)(&dword_20D54A0);
  sub_A6C300(v1, 7, a1);
  sub_A6C300(v1, 8, a1);
  sub_A6C300(v1, 9, a1);
  sub_A6C300(v1, 11, a1);
  sub_A6C300(v1, 14, a1);
  sub_A6C300(v1, 13, a1);
  sub_A6C300(v1, 6, a1);
  v2 = a1[1];
  if ( v2 != 0 )
    sub_5459F0(a1 + 1, v2 + 16);
  a1[1] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_204BDE8);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C00C10  (binary VA: 0xc00c10)
// Original: sub_C00C10
// ----------------------------------------------------------------------------
void sub_C00C10(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  char *v5;
  int v6;
  int v7[4];

  v2 = 0;
  v3 = *(uint32_t *)(a1 + 4);
  if ( a2 != 0 )
    v2 = a2 + 12;
  if ( v3 != 0 )
    sub_5459F0(a1 + 4, v3 + 16);
  if ( v2 != 0 )
  {
    v4 = 0;
    *(uint32_t *)(a1 + 4) = v2 - 12;
    v7[0] = a1 + 4;
    if ( v2 != 12 )
      v4 = v2;
    v5 = *(char **)(v4 + 8);
    if ( v5 == *(char **)(v4 + 12) )
    {
      g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux(v4 + 4, v5, v7);
    }
    else
    {
      v6 = 0;
      if ( v5 != nullptr )
      {
        *(uint32_t *)v5 = a1 + 4;
        v6 = *(uint32_t *)(v4 + 8);
      }
      *(uint32_t *)(v4 + 8) = v6 + 4;
    }
  }
  else
  {
    *(uint32_t *)(a1 + 4) = 0;
  }
}



// ============================================================================
// Address:   0xc00ce0 (size: 357 bytes)
// Symbol:    sub_C00CE0
// Demangled: sub_C00CE0
// ============================================================================
int (**sub_C00CE0(uint32_t *a1))(int)
{
  int *v1;
  int v2;

  *a1 = (uint32_t)(uintptr_t)(&off_206B408);
  if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D54A8 == 0 )
    v1 = (int *)(&dword_20D54A0);
  sub_A6C300((int)(uintptr_t)(v1), 7, (int)(uintptr_t)(a1));
  sub_A6C300((int)(uintptr_t)(v1), 8, (int)(uintptr_t)(a1));
  sub_A6C300((int)(uintptr_t)(v1), 9, (int)(uintptr_t)(a1));
  sub_A6C300((int)(uintptr_t)(v1), 11, (int)(uintptr_t)(a1));
  sub_A6C300((int)(uintptr_t)(v1), 14, (int)(uintptr_t)(a1));
  sub_A6C300((int)(uintptr_t)(v1), 13, (int)(uintptr_t)(a1));
  sub_A6C300((int)(uintptr_t)(v1), 6, (int)(uintptr_t)(a1));
  v2 = a1[1];
  if ( v2 != 0 )
    sub_5459F0((int)(uintptr_t)(a1 + 1), v2 + 16);
  a1[1] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_204BDE8);
  return (int (**)(int))(uintptr_t)(&off_204BDE8);
}
// ----------------------------------------------------------------------------
// Function: sub_C00E50  (binary VA: 0xc00e50)
// Original: sub_C00E50
// ----------------------------------------------------------------------------
int sub_C00E50(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B408);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint8_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  return a1;
}


