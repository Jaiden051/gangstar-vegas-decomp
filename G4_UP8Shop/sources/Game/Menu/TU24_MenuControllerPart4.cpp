#include "Core/Utils/DecompTypes.h"
#include "TU24_MenuControllerPart4.h"

// ----------------------------------------------------------------------------
// Function: sub_BF9EC0  (binary VA: 0xbf9ec0)
// Original: sub_BF9EC0
// ----------------------------------------------------------------------------
int sub_BF9EC0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE684);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE684, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE688), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE688, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE68C), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE68C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE690), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE690, &unk_20D1280);
  dword_20DE694 = 1056964608;
  dword_20DE698 = 1056964608;
  dword_20DE69C = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_BF9FC0  (binary VA: 0xbf9fc0)
// Original: sub_BF9FC0
// ----------------------------------------------------------------------------
int sub_BF9FC0(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[2] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[8] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::assign_str(a1, a2);
  g4_std::string::assign_str(a1 + 1, a3);
  g4_std::string::assign_str(a1 + 2, a4);
  a1[3] = a5;
  a1[4] = a6;
  a1[5] = a7;
  a1[6] = a8;
  a1[7] = a9;
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 8, a10));
}

// ----------------------------------------------------------------------------
// Function: sub_BFA060  (binary VA: 0xbfa060)
// Original: sub_BFA060
// ----------------------------------------------------------------------------
void sub_BFA060(int a1, char a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  gameswf::Self *v5;
  unsigned int *v6;
  gameswf::Self *v7;
  typedef unsigned int _g4_t_v8;
  typedef unsigned int _g4_t_v9;
  typedef char _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef int64_t _g4_t_v12 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v13;
  typedef int64_t _g4_t_v14;
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
  typedef uint8_t _g4_t_v29[36];
  typedef char _g4_t_v30[44];
  typedef int *_g4_t_v31;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v10)) > _g4_s2 ? (31u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v11)) > _g4_s3 ? (40u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v12)) > _g4_s4 ? (44u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v13)) > _g4_s5 ? (52u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v14)) > _g4_s6 ? (56u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v15)) > _g4_s7 ? (64u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (65u + sizeof(_g4_t_v16)) > _g4_s8 ? (65u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v17)) > _g4_s9 ? (72u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v18)) > _g4_s10 ? (76u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v19)) > _g4_s11 ? (80u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (82u + sizeof(_g4_t_v20)) > _g4_s12 ? (82u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (83u + sizeof(_g4_t_v21)) > _g4_s13 ? (83u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v22)) > _g4_s14 ? (96u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (97u + sizeof(_g4_t_v23)) > _g4_s15 ? (97u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v24)) > _g4_s16 ? (104u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v25)) > _g4_s17 ? (108u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v26)) > _g4_s18 ? (112u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (114u + sizeof(_g4_t_v27)) > _g4_s19 ? (114u + sizeof(_g4_t_v27)) : _g4_s19,
    _g4_s21 = (115u + sizeof(_g4_t_v28)) > _g4_s20 ? (115u + sizeof(_g4_t_v28)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v29)) > _g4_s21 ? (120u + sizeof(_g4_t_v29)) : _g4_s21,
    _g4_s23 = (156u + sizeof(_g4_t_v30)) > _g4_s22 ? (156u + sizeof(_g4_t_v30)) : _g4_s22,
    _g4_s24 = (200u + sizeof(_g4_t_v31)) > _g4_s23 ? (200u + sizeof(_g4_t_v31)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 31u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 65u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 82u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 83u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 96u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 97u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 104u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 108u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 112u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 114u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 115u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 120u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 156u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 200u);

  v31 = &a1;
  v10 = a2;
  v2 = *(uint32_t *)(a1 + 28);
  v3 = sub_732CE0();
  v4 = (uint32_t *)sub_733A60(v3, v2);
  if ( v4 != nullptr && *v4 != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v30, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v29);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v30);
    if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v29) != 0 )
    {
      if ( v10 != 0 )
      {
        v12 = 0x416FF4A000000000LL;
        LOWORD(v11) = 2;
        v15 = 1;
        v16 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v15, 9);
        v7 = (gameswf::Self *)&v16;
        if ( v15 == -1 )
          v7 = v18;
        gameswf::Strcpy_s(v7, &byte_9[1], (gameswf::Self *)"textColor", v30);
        v19 = -1;
        v20 = 127;
        v21 |= 1u;
        gameswf::CharacterHandle::setMember(
          (gameswf::CharacterHandle::Self *)v29,
          (const gameswf::String::Self *)&v15,
          (const gameswf::ASValue::Self *)&v11);
        v6 = &v11;
        if ( v15 == -1 && (v21 & 1) != 0 )
        {
          gameswf::free_internal(v18, v17, v9);
          v6 = &v11;
        }
      }
      else
      {
        v14 = 0x416FFFFFE0000000LL;
        LOWORD(v13) = 2;
        v22 = 1;
        v23 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v22, 9);
        v5 = (gameswf::Self *)&v23;
        if ( v22 == -1 )
          v5 = v25;
        gameswf::Strcpy_s(v5, &byte_9[1], (gameswf::Self *)"textColor", v30);
        v26 = -1;
        v27 = 127;
        v28 |= 1u;
        gameswf::CharacterHandle::setMember(
          (gameswf::CharacterHandle::Self *)v29,
          (const gameswf::String::Self *)&v22,
          (const gameswf::ASValue::Self *)&v13);
        v6 = &v13;
        if ( v22 == -1 && (v28 & 1) != 0 )
        {
          gameswf::free_internal(v25, v24, v8);
          v6 = &v13;
        }
      }
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
    }
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v29);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_BFA330  (binary VA: 0xbfa330)
// Original: sub_BFA330
// ----------------------------------------------------------------------------
int sub_BFA330(int a1, char a2)
{
  uint8_t *v2;
  int v3;
  int v4;
  uint32_t *v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef uint8_t _g4_t_v11[4];
  typedef uint8_t _g4_t_v12[36];
  typedef uint8_t _g4_t_v13[64];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (43u + sizeof(_g4_t_v9)) > _g4_s2 ? (43u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v10)) > _g4_s3 ? (48u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v11)) > _g4_s4 ? (52u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v12)) > _g4_s5 ? (56u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v13)) > _g4_s6 ? (92u + sizeof(_g4_t_v13)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 43u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 92u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(&v9));
  if ( g4_std_compat::string_find(a1, ".hitzone", 0, 8) != -1 )
  {
    v7 = g4_std_compat::string_find(a1, ".hitzone", 0, 8);
    v2 = v10;
    sub_193A6F0(v10, a1, 0, v7);
LABEL_3:
    g4_std::string::assign_str((char *)&v9 + 1, v2);
    g4_std::string::Destroy(v2);
    goto LABEL_4;
  }
  if ( g4_std_compat::string_find(a1, ".mc_hitzone", 0, 11) != -1 )
  {
    v8 = g4_std_compat::string_find(a1, ".mc_hitzone", 0, 11);
    v2 = v11;
    sub_193A6F0(v11, a1, 0, v8);
    goto LABEL_3;
  }
  g4_std::string::assign_str((char *)&v9 + 1, a1);
LABEL_4:
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 32) - 12) != 0 )
  {
    sub_BFA060(a1, a2);
  }
  else
  {
    v3 = *(uint32_t *)(a1 + 28);
    v4 = sub_732CE0();
    v5 = (uint32_t *)sub_733A60(v4, v3);
    if ( v5 != nullptr && *v5 != 0 )
    {
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v13, nullptr);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v12);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v13);
      if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v12) != 0 )
      {
        if ( a2 == 0 )
        {
          gameswf::CharacterHandle::gotoAndStop((gameswf::CharacterHandle::Self *)v12, *(const char **)(a1 + 8));
          gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v12);
          { g4_std::string::Destroy((char *)&v9 + 1); return 0; }
        }
        gameswf::CharacterHandle::gotoAndStop((gameswf::CharacterHandle::Self *)v12, *(const char **)(a1 + 4));
      }
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v12);
    }
  }
  return ((g4_std::string::Destroy((char *)&v9 + 1)), (int)0);
}


