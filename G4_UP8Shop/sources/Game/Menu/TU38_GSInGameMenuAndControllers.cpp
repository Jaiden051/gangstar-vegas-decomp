#include "Core/Utils/DecompTypes.h"
#include "TU38_GSInGameMenuAndControllers.h"

// ----------------------------------------------------------------------------
// Function: sub_C22AF0  (binary VA: 0xc22af0)
// Original: sub_C22AF0
// ----------------------------------------------------------------------------
int sub_C22AF0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE9FC);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE9FC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEA00), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEA00, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEA04), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEA04, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEA08), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEA08, &unk_20D1280);
  dword_20DEA0C = 1056964608;
  dword_20DEA10 = 1056964608;
  dword_20DEA14 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_C22BF0  (binary VA: 0xc22bf0)
// Original: sub_C22BF0
// ----------------------------------------------------------------------------
int sub_C22BF0(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 12);
  if ( result != a2 )
  {
    if ( result != -1 )
    {
      result = *(uint32_t *)(a1 + 4 * result + 16);
      if ( result != 0 )
        result = G4_VCALL<int>(result, 16, *(uint32_t *)(a1 + 8));
    }
    *(uint32_t *)(a1 + 12) = a2;
    if ( a2 != -1 )
    {
      result = *(uint32_t *)(a1 + 4 * a2 + 16);
      if ( result != 0 )
        return G4_VCALL<int>(result, 12, *(uint32_t *)(a1 + 8));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C22C60  (binary VA: 0xc22c60)
// Original: sub_C22C60
// ----------------------------------------------------------------------------
void sub_C22C60(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (uint32_t *)a1[5];
  if ( v1 != a1 + 5 )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)*v1;
      opDelete(v1);
      if ( v2 == a1 + 5 )
        break;
      v1 = v2;
    }
  }
  v3 = (uint32_t *)a1[3];
  if ( v3 != a1 + 3 )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)*v3;
      opDelete(v3);
      if ( v4 == a1 + 3 )
        break;
      v3 = v4;
    }
  }
  v5 = (uint32_t *)a1[1];
  if ( v5 != a1 + 1 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)*v5;
      opDelete(v5);
      if ( v6 == a1 + 1 )
        break;
      v5 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C22CF0  (binary VA: 0xc22cf0)
// Original: sub_C22CF0
// ----------------------------------------------------------------------------
uint32_t * sub_C22CF0(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  *a1 = (uint32_t)(uintptr_t)(&off_206B818);
  v1 = a1[4];
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(a1[4]);
  v2 = a1[5];
  a1[4] = 0;
  if ( v2 != 0 )
    G4_VCALL<void>(v2, 4);
  v3 = a1[6];
  a1[5] = 0;
  if ( v3 != 0 )
    G4_VCALL<void>(v3, 4);
  v4 = a1[7];
  a1[6] = 0;
  if ( v4 != 0 )
    G4_VCALL<void>(v4, 4);
  v5 = a1[8];
  a1[7] = 0;
  if ( v5 != 0 )
    G4_VCALL<void>(v5, 4);
  v6 = a1[9];
  a1[8] = 0;
  if ( v6 != 0 )
    G4_VCALL<void>(v6, 4);
  v7 = a1[10];
  a1[9] = 0;
  if ( v7 != 0 )
    G4_VCALL<void>(v7, 4);
  v8 = a1[11];
  a1[10] = 0;
  if ( v8 != 0 )
    G4_VCALL<void>(v8, 4);
  a1[11] = 0;
  return sub_5A8060(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C22DD0  (binary VA: 0xc22dd0)
// Original: sub_C22DD0
// ----------------------------------------------------------------------------
int sub_C22DD0(int a1, uint32_t *a2)
{
  uint32_t *v4;

  v4 = (uint32_t *)opNew(0x1Cu);
  if ( v4 != (uint32_t *)-8 )
  {
    v4[2] = *a2;
    v4[3] = a2[1];
    v4[4] = a2[2];
    v4[5] = a2[3];
    v4[6] = a2[4];
  }
  return sub_1901920(v4, a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C22E40  (binary VA: 0xc22e40)
// Original: sub_C22E40
// ----------------------------------------------------------------------------
int sub_C22E40(int a1, char *s)
{
  size_t v4;
  char *v5;
  gameswf::Self *v6;
  unsigned int v7;
  int v8;
  int result;
  const char *v10;

  *(uint8_t *)a1 = 1;
  *(uint8_t *)(a1 + 1) = 0;
  if ( s != nullptr )
  {
    v4 = strlen(s);
    v5 = (char *)(v4 + 1);
    gameswf::String::resize((gameswf::String::Self *)a1, v4);
    v6 = (gameswf::Self *)(a1 + 1);
    if ( *(uint8_t *)a1 == 0xFF )
      v6 = *(gameswf::Self **)(a1 + 12);
    gameswf::Strcpy_s(v6, v5, (gameswf::Self *)s, v10);
  }
  v7 = *(uint32_t *)(a1 + 16) | 0x7FFFFF;
  *(uint32_t *)(a1 + 16) = v7;
  v8 = HIWORD(v7) & 0x7F;
  result = HIBYTE(v7) | 1;
  *(uint8_t *)(a1 + 18) = v8;
  *(uint8_t *)(a1 + 19) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C22EE0  (binary VA: 0xc22ee0)
// Original: sub_C22EE0
// ----------------------------------------------------------------------------
void sub_C22EE0(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  *a1 = (uint32_t)(uintptr_t)(&off_206B818);
  v1 = a1[4];
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(a1[4]);
  v2 = a1[5];
  a1[4] = 0;
  if ( v2 != 0 )
    G4_VCALL<void>(v2, 4);
  v3 = a1[6];
  a1[5] = 0;
  if ( v3 != 0 )
    G4_VCALL<void>(v3, 4);
  v4 = a1[7];
  a1[6] = 0;
  if ( v4 != 0 )
    G4_VCALL<void>(v4, 4);
  v5 = a1[8];
  a1[7] = 0;
  if ( v5 != 0 )
    G4_VCALL<void>(v5, 4);
  v6 = a1[9];
  a1[8] = 0;
  if ( v6 != 0 )
    G4_VCALL<void>(v6, 4);
  v7 = a1[10];
  a1[9] = 0;
  if ( v7 != 0 )
    G4_VCALL<void>(v7, 4);
  v8 = a1[11];
  a1[10] = 0;
  if ( v8 != 0 )
    G4_VCALL<void>(v8, 4);
  a1[11] = 0;
  sub_5A8060(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C22FD0  (binary VA: 0xc22fd0)
// Original: sub_C22FD0
// ----------------------------------------------------------------------------
void sub_C22FD0(unsigned int a1, char *a2, int a3)
{
  int v4;
  int v5;
  char *v6;
  gameswf::Self *v7;
  char *v8;
  gameswf::Self *v9;
  char *v10;
  gameswf::Self *v11;
  gameswf::Self *v12;
  typedef unsigned int _g4_t_v13;
  typedef const char *_g4_t_v14;
  typedef const char *_g4_t_v15;
  typedef const char *_g4_t_v16;
  typedef gameswf::CharacterHandle::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef char *_g4_t_s;
  typedef uint8_t _g4_t_v20[4];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[4];
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[4];
  typedef double _g4_t_v27;
  typedef char _g4_t_v28;
  typedef char _g4_t_v29;
  typedef void *_g4_t_v30;
  typedef gameswf::Self *_g4_t_v31;
  typedef int16_t _g4_t_v32;
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
  typedef uint8_t _g4_t_v35[36];
  typedef char _g4_t_v36[36];
  typedef unsigned int _g4_t_v37[3];
  typedef gameswf::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint8_t _g4_t_v40[12];
  typedef char _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char *_g4_t_v43;
  typedef void *_g4_t_v44;
  typedef gameswf::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint8_t _g4_t_v47[12];
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef char *_g4_t_v50;
  typedef void *_g4_t_v51;
  typedef gameswf::Self *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint8_t _g4_t_v54[20];
  typedef char **_g4_t_v55;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v18)) > _g4_s5 ? (24u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_s)) > _g4_s6 ? (28u + sizeof(_g4_t_s)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v20)) > _g4_s7 ? (44u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v21)) > _g4_s8 ? (48u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v22)) > _g4_s9 ? (52u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v23)) > _g4_s10 ? (56u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v24)) > _g4_s11 ? (60u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v25)) > _g4_s12 ? (64u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v26)) > _g4_s13 ? (68u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v27)) > _g4_s14 ? (72u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v28)) > _g4_s15 ? (80u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (81u + sizeof(_g4_t_v29)) > _g4_s16 ? (81u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v30)) > _g4_s17 ? (88u + sizeof(_g4_t_v30)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v31)) > _g4_s18 ? (92u + sizeof(_g4_t_v31)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v32)) > _g4_s19 ? (96u + sizeof(_g4_t_v32)) : _g4_s19,
    _g4_s21 = (98u + sizeof(_g4_t_v33)) > _g4_s20 ? (98u + sizeof(_g4_t_v33)) : _g4_s20,
    _g4_s22 = (99u + sizeof(_g4_t_v34)) > _g4_s21 ? (99u + sizeof(_g4_t_v34)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v35)) > _g4_s22 ? (104u + sizeof(_g4_t_v35)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v36)) > _g4_s23 ? (140u + sizeof(_g4_t_v36)) : _g4_s23,
    _g4_s25 = (176u + sizeof(_g4_t_v37)) > _g4_s24 ? (176u + sizeof(_g4_t_v37)) : _g4_s24,
    _g4_s26 = (188u + sizeof(_g4_t_v38)) > _g4_s25 ? (188u + sizeof(_g4_t_v38)) : _g4_s25,
    _g4_s27 = (192u + sizeof(_g4_t_v39)) > _g4_s26 ? (192u + sizeof(_g4_t_v39)) : _g4_s26,
    _g4_s28 = (196u + sizeof(_g4_t_v40)) > _g4_s27 ? (196u + sizeof(_g4_t_v40)) : _g4_s27,
    _g4_s29 = (208u + sizeof(_g4_t_v41)) > _g4_s28 ? (208u + sizeof(_g4_t_v41)) : _g4_s28,
    _g4_s30 = (209u + sizeof(_g4_t_v42)) > _g4_s29 ? (209u + sizeof(_g4_t_v42)) : _g4_s29,
    _g4_s31 = (212u + sizeof(_g4_t_v43)) > _g4_s30 ? (212u + sizeof(_g4_t_v43)) : _g4_s30,
    _g4_s32 = (216u + sizeof(_g4_t_v44)) > _g4_s31 ? (216u + sizeof(_g4_t_v44)) : _g4_s31,
    _g4_s33 = (220u + sizeof(_g4_t_v45)) > _g4_s32 ? (220u + sizeof(_g4_t_v45)) : _g4_s32,
    _g4_s34 = (224u + sizeof(_g4_t_v46)) > _g4_s33 ? (224u + sizeof(_g4_t_v46)) : _g4_s33,
    _g4_s35 = (228u + sizeof(_g4_t_v47)) > _g4_s34 ? (228u + sizeof(_g4_t_v47)) : _g4_s34,
    _g4_s36 = (240u + sizeof(_g4_t_v48)) > _g4_s35 ? (240u + sizeof(_g4_t_v48)) : _g4_s35,
    _g4_s37 = (241u + sizeof(_g4_t_v49)) > _g4_s36 ? (241u + sizeof(_g4_t_v49)) : _g4_s36,
    _g4_s38 = (244u + sizeof(_g4_t_v50)) > _g4_s37 ? (244u + sizeof(_g4_t_v50)) : _g4_s37,
    _g4_s39 = (248u + sizeof(_g4_t_v51)) > _g4_s38 ? (248u + sizeof(_g4_t_v51)) : _g4_s38,
    _g4_s40 = (252u + sizeof(_g4_t_v52)) > _g4_s39 ? (252u + sizeof(_g4_t_v52)) : _g4_s39,
    _g4_s41 = (256u + sizeof(_g4_t_v53)) > _g4_s40 ? (256u + sizeof(_g4_t_v53)) : _g4_s40,
    _g4_s42 = (260u + sizeof(_g4_t_v54)) > _g4_s41 ? (260u + sizeof(_g4_t_v54)) : _g4_s41,
    _g4_s43 = (280u + sizeof(_g4_t_v55)) > _g4_s42 ? (280u + sizeof(_g4_t_v55)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 81u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 88u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 98u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 99u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 140u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 176u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 188u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 192u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 196u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 208u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 209u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 212u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 216u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 220u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 224u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 228u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 240u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 241u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 244u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 248u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 252u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 256u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 260u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 280u);

  v55 = &a2;
  s = a2;
  v18 = a3;
  v4 = sub_732CE0();
  if ( sub_733A60(v4, a1) != 0 )
  {
    v5 = sub_732CE0();
    if ( *(uint32_t *)sub_733A60(v5, a1) != 0 )
    {
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v36, nullptr);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v35);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v36);
      if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v35) != 0
        && (uint8_t)gameswf::CharacterHandle::isEnabled((gameswf::CharacterHandle::Self *)v35) != 0 )
      {
        LOWORD(v37[0]) = 1;
        LOWORD(v39) = -1;
        v40[0] = 0;
        HIBYTE(v39) = ((uint16_t)(HIWORD(v39) | 0x7F) >> 8) | 1;
        BYTE2(v39) = 127;
        LOWORD(v46) = -1;
        v40[1] = 0;
        v41 = 1;
        HIBYTE(v46) = ((uint16_t)(HIWORD(v46) | 0x7F) >> 8) | 1;
        BYTE2(v46) = 127;
        LOWORD(v53) = -1;
        v42 = 0;
        BYTE2(v53) = 127;
        v47[0] = 0;
        v47[1] = 0;
        v48 = 1;
        v49 = 0;
        HIBYTE(v53) |= 1u;
        v54[0] = 0;
        v54[1] = 0;
        gameswf::String::resize((gameswf::String::Self *)v37, 12);
        if ( LOBYTE(v37[0]) == 0xFF )
        {
          v6 = (char *)v37[1];
          v7 = v38;
        }
        else
        {
          v6 = (char *)SLOBYTE(v37[0]);
          v7 = (gameswf::Self *)((char *)v37 + 1);
        }
        gameswf::Strcpy_s(v7, v6, (gameswf::Self *)"controllerID", v36);
        v39 |= 0x7FFFFFu;
        v26[0] = 2;
        v27 = (double)(v18 + 4);
        v26[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v40, (const gameswf::ASValue::Self *)v26);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v26);
        gameswf::String::resize((gameswf::String::Self *)&v41, 6);
        if ( v41 == -1 )
        {
          v8 = v43;
          v9 = v45;
        }
        else
        {
          v8 = (char *)v41;
          v9 = (gameswf::Self *)&v42;
        }
        gameswf::Strcpy_s(v9, v8, (gameswf::Self *)"stageX", v14);
        v46 |= 0x7FFFFFu;
        v23[0] = 2;
        v23[1] = 0;
        v24 = 0;
        v25 = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v47, (const gameswf::ASValue::Self *)v23);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v23);
        gameswf::String::resize((gameswf::String::Self *)&v48, 6);
        if ( v48 == -1 )
        {
          v10 = v50;
          v11 = v52;
        }
        else
        {
          v10 = (char *)v48;
          v11 = (gameswf::Self *)&v49;
        }
        gameswf::Strcpy_s(v11, v10, (gameswf::Self *)"stageY", v15);
        v53 |= 0x7FFFFFu;
        v20[0] = 2;
        v20[1] = 0;
        v21 = 0;
        v22 = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v54, (const gameswf::ASValue::Self *)v20);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
        v28 = 1;
        v29 = 0;
        if ( s != nullptr )
        {
          v17 = (gameswf::CharacterHandle::Self *)strlen(s);
          gameswf::String::resize((gameswf::String::Self *)&v28, (int)(uintptr_t)(v17));
          v12 = (gameswf::Self *)&v29;
          if ( v28 == -1 )
            v12 = v31;
          gameswf::Strcpy_s(v12, (char *)v17 + 1, (gameswf::Self *)s, v16);
        }
        v32 = -1;
        v33 = 127;
        v34 |= 1u;
        gameswf::CharacterHandle::dispatchEvent((gameswf::CharacterHandle::Self *)v35, (gameswf::String::Self *)&v28, (int)(uintptr_t)(v37), 3);
        if ( v28 == -1 && (v34 & 1) != 0 )
          gameswf::free_internal(v31, v30, v13);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v54);
        if ( v48 == -1 && (v53 & 0x1000000) != 0 )
          gameswf::free_internal(v52, v51, v13);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v47);
        if ( v41 == -1 && (v46 & 0x1000000) != 0 )
          gameswf::free_internal(v45, v44, v13);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v40);
        if ( LOBYTE(v37[0]) == 0xFF && (v39 & 0x1000000) != 0 )
          gameswf::free_internal(v38, (void *)v37[2], v13);
      }
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v35);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C234B0  (binary VA: 0xc234b0)
// Original: sub_C234B0
// ----------------------------------------------------------------------------
void sub_C234B0(uint32_t *a1, int a2)
{
  int **v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  int *v6;
  unsigned int v7;

  if ( a2 != 0 )
  {
    v2 = (int **)a1[3];
    if ( v2 != (int **)(a1 + 3) )
    {
      while ( 1 )
      {
        v5 = (unsigned int)(uintptr_t)(v2[2]);
        v3 = *(uint32_t *)(a2 + 4);
        if ( v5 >= v3 && byte_20D6580 == 0 )
        {
          v7 = (unsigned int)(uintptr_t)(v2[2]);
          glf::Console::Println(
            (glf::Console::Self *)"%s(%d): %s - %s",
            "../../../../../lib/glf/include/glf/input/inputDevice.h",
            233,
            "operator[]",
            "idx >= mNum");
          byte_20D6580 = 1;
          v3 = *(uint32_t *)(a2 + 4);
          v5 = v7;
        }
        if ( v3 > v5 )
          v3 = v5;
        if ( (uint8_t)glf::SimpleButton::IsDown((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + 4 * v3)) == 0 )
          goto LABEL_11;
        v2[6] = (int *)-1;
        if ( a1[7] == -1 )
          break;
        if ( a1[8] == -1 )
        {
          v4 = 1;
LABEL_17:
          v6 = v2[2];
          v2[6] = (int *)v4;
          a1[v4 + 7] = (uint32_t)(uintptr_t)(v6);
          if ( (unsigned int)(uintptr_t)(v2[6]) < 4 )
            sub_C22FD0((unsigned int)(uintptr_t)(v2[3]), (char *)v2[5], (int)(uintptr_t)(v2[6]));
          goto LABEL_11;
        }
        if ( a1[9] == -1 )
        {
          v4 = 2;
          goto LABEL_17;
        }
        v4 = 3;
        if ( a1[10] == -1 )
          goto LABEL_17;
LABEL_11:
        v2 = (int **)*v2;
        if ( a1 + 3 == (uint32_t *)(v2) )
          return;
      }
      v4 = 0;
      goto LABEL_17;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C23610  (binary VA: 0xc23610)
// Original: sub_C23610
// ----------------------------------------------------------------------------
void sub_C23610(uint32_t *a1, int a2)
{
  int v2;
  typedef uint8_t _g4_t_v3[36];
  typedef uint8_t _g4_t_v4[48];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v4)) > _g4_s1 ? (44u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 44u);

  v2 = sub_732CE0();
  if ( *(uint32_t *)sub_733A60(v2, 1u) != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v3, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v4);
    gameswf::CharacterHandle::opAssign((int)(uintptr_t)(a1 + 13), (gameswf::CharacterHandle::Self *)v4);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v4);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v3);
  }
  sub_C234B0(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C23700  (binary VA: 0xc23700)
// Original: sub_C23700
// ----------------------------------------------------------------------------
void sub_C23700(uint32_t *a1, int a2)
{
  int **v2;
  unsigned int v3;
  int *v4;
  unsigned int v5;
  int v6;
  unsigned int v7;

  if ( a2 != 0 )
  {
    v2 = (int **)a1[5];
    if ( v2 != (int **)(a1 + 5) )
    {
      while ( 1 )
      {
        v5 = (unsigned int)(uintptr_t)(v2[2]);
        v3 = *(uint32_t *)(a2 + 4);
        if ( v5 >= v3 && byte_20D6580 == 0 )
        {
          v7 = (unsigned int)(uintptr_t)(v2[2]);
          glf::Console::Println(
            (glf::Console::Self *)"%s(%d): %s - %s",
            "../../../../../lib/glf/include/glf/input/inputDevice.h",
            233,
            "operator[]",
            "idx >= mNum");
          byte_20D6580 = 1;
          v3 = *(uint32_t *)(a2 + 4);
          v5 = v7;
        }
        if ( v3 > v5 )
          v3 = v5;
        if ( (uint8_t)glf::SimpleButton::IsDown((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + 4 * v3)) == 0 )
          goto LABEL_11;
        v2[6] = (int *)-1;
        v4 = v2[2];
        if ( (int *)a1[7] == v4 )
          break;
        if ( v4 == (int *)a1[8] )
        {
          v6 = 1;
          goto LABEL_17;
        }
        if ( v4 == (int *)a1[9] )
        {
          v6 = 2;
          goto LABEL_17;
        }
        if ( v4 == (int *)a1[10] )
        {
          v6 = 3;
          goto LABEL_17;
        }
LABEL_11:
        v2 = (int **)*v2;
        if ( a1 + 5 == (uint32_t *)(v2) )
          return;
      }
      v6 = 0;
LABEL_17:
      v2[6] = (int *)v6;
      sub_C22FD0((unsigned int)(uintptr_t)(v2[3]), (char *)v2[5], v6);
      a1[(uint32_t)(uintptr_t)(v2[6]) + 7] = -1;
      goto LABEL_11;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C23850  (binary VA: 0xc23850)
// Original: sub_C23850
// ----------------------------------------------------------------------------
void sub_C23850(uint32_t *a1, int a2)
{
  int v2;
  typedef uint8_t _g4_t_v3[36];
  typedef uint8_t _g4_t_v4[48];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v4)) > _g4_s1 ? (44u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 44u);

  v2 = sub_732CE0();
  if ( *(uint32_t *)sub_733A60(v2, 1u) != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v3, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v4);
    gameswf::CharacterHandle::opAssign((int)(uintptr_t)(a1 + 13), (gameswf::CharacterHandle::Self *)v4);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v4);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v3);
  }
  sub_C23700(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C23940  (binary VA: 0xc23940)
// Original: sub_C23940
// ----------------------------------------------------------------------------
float sub_C23940(float result, int a2, int a3, float a4, uint8_t a5)
{
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  float *v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;

  if ( sub_8F0680() != 0 )
  {
    v5 = a5 ^ 1;
    *(uint8_t *)(a2 + v5 + 44) = 0;
    v6 = *(uint32_t *)(a3 + 12);
    if ( v5 >= v6 && byte_20DEA35 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        233,
        "operator[]",
        "idx >= mNum");
      byte_20DEA35 = 1;
      v6 = *(uint32_t *)(a3 + 12);
      v5 = a5 ^ 1;
    }
    v7 = v5;
    if ( v6 <= v5 )
      v7 = v6;
    v8 = (float *)(*(uint32_t *)(a3 + 16) + 8 * v7);
    if ( a4 < *v8 )
      goto LABEL_7;
    if ( v5 >= v6 && byte_20DEA35 == 0 )
    {
      v18 = v5;
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        233,
        "operator[]",
        "idx >= mNum");
      v6 = *(uint32_t *)(a3 + 12);
      v5 = v18;
      v13 = v6;
      byte_20DEA35 = 1;
      if ( v18 <= v6 )
        v13 = v18;
      v8 = (float *)(*(uint32_t *)(a3 + 16) + 8 * v13);
    }
    if ( a4 < v8[1] )
      goto LABEL_7;
    if ( v5 >= v6 && byte_20DEA35 == 0 )
    {
      v17 = v5;
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        233,
        "operator[]",
        "idx >= mNum");
      v6 = *(uint32_t *)(a3 + 12);
      v5 = v17;
      v12 = v6;
      byte_20DEA35 = 1;
      if ( v17 <= v6 )
        v12 = v17;
      v8 = (float *)(*(uint32_t *)(a3 + 16) + 8 * v12);
    }
    result = -a4;
    if ( (float)-a4 > *v8 )
      goto LABEL_7;
    if ( v5 >= v6 && byte_20DEA35 == 0 )
    {
      v19 = v5;
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        233,
        "operator[]",
        "idx >= mNum");
      v6 = *(uint32_t *)(a3 + 12);
      v5 = v19;
      v14 = v6;
      byte_20DEA35 = 1;
      if ( v19 <= v6 )
        v14 = v19;
      v8 = (float *)(*(uint32_t *)(a3 + 16) + 8 * v14);
    }
    if ( result > v8[1] )
    {
LABEL_7:
      if ( v5 >= v6 && byte_20DEA35 == 0 )
      {
        v15 = v5;
        glf::Console::Println(
          (glf::Console::Self *)"%s(%d): %s - %s",
          "../../../../../lib/glf/include/glf/input/inputDevice.h",
          233,
          "operator[]",
          "idx >= mNum");
        v9 = *(uint32_t *)(a3 + 12);
        v5 = v15;
        v10 = *(uint32_t *)(a3 + 16);
        byte_20DEA35 = 1;
        if ( v15 <= v9 )
          v9 = v15;
        v8 = (float *)(v10 + 8 * v9);
      }
      *(float *)(a2 + 48) = fminf(fmaxf(*v8, -1.0), 1.0);
      v11 = *(uint32_t *)(a3 + 12);
      if ( v5 >= v11 && byte_20DEA35 == 0 )
      {
        v16 = v5;
        glf::Console::Println(
          (glf::Console::Self *)"%s(%d): %s - %s",
          "../../../../../lib/glf/include/glf/input/inputDevice.h",
          233,
          "operator[]",
          "idx >= mNum");
        byte_20DEA35 = 1;
        v11 = *(uint32_t *)(a3 + 12);
        v5 = v16;
      }
      if ( v11 > v5 )
        v11 = v5;
      result = fminf(fmaxf(-1.0, *(float *)(*(uint32_t *)(a3 + 16) + 8 * v11 + 4)), 1.0);
      *(float *)(a2 + 52) = result;
      *(uint8_t *)(a2 + v5 + 44) = 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C23CB0  (binary VA: 0xc23cb0)
// Original: sub_C23CB0
// ----------------------------------------------------------------------------
void sub_C23CB0(uint32_t *a1)
{
  void **v1;
  void **v2;
  void **v3;
  void **v4;
  void **v5;
  void **v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (void **)a1[5];
  if ( v1 != (void **)(uintptr_t)(a1 + 5) )
  {
    while ( 1 )
    {
      v2 = (void **)*v1;
      opDelete(v1);
      if ( v2 == (void **)(uintptr_t)(a1 + 5) )
        break;
      v1 = v2;
    }
  }
  v3 = (void **)a1[3];
  if ( v3 != (void **)(uintptr_t)(a1 + 3) )
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      opDelete(v3);
      if ( v4 == (void **)(uintptr_t)(a1 + 3) )
        break;
      v3 = v4;
    }
  }
  v5 = (void **)a1[1];
  if ( v5 != (void **)(uintptr_t)(a1 + 1) )
  {
    while ( 1 )
    {
      v6 = (void **)*v5;
      opDelete(v5);
      if ( v6 == (void **)(uintptr_t)(a1 + 1) )
        break;
      v5 = v6;
    }
  }
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C24280  (binary VA: 0xc24280)
// Original: sub_C24280
// ----------------------------------------------------------------------------
int sub_C24280(int a1)
{
  *(uint32_t *)(a1 + 28) = -1;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B848);
  *(uint32_t *)(a1 + 32) = -1;
  *(uint32_t *)(a1 + 36) = -1;
  *(uint32_t *)(a1 + 4) = a1 + 4;
  *(uint32_t *)(a1 + 8) = a1 + 4;
  *(uint32_t *)(a1 + 40) = -1;
  *(uint8_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 12) = a1 + 12;
  *(uint32_t *)(a1 + 16) = a1 + 12;
  *(uint8_t *)(a1 + 45) = 0;
  *(uint8_t *)(a1 + 46) = 0;
  *(uint32_t *)(a1 + 20) = a1 + 20;
  *(uint32_t *)(a1 + 24) = a1 + 20;
  *(uint8_t *)(a1 + 47) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C242E0  (binary VA: 0xc242e0)
// Original: sub_C242E0
// ----------------------------------------------------------------------------
void sub_C242E0(uint32_t *a1, int a2)
{
  uint32_t *v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  char v8;
  const char *v9;
  uint32_t *v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  uint32_t *v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  typedef unsigned int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef char _g4_t_v24[12];
  typedef char _g4_t_v25[36];
  typedef uint8_t _g4_t_v26[64];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v23)) > _g4_s2 ? (4u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v24)) > _g4_s3 ? (28u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v25)) > _g4_s4 ? (40u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v26)) > _g4_s5 ? (76u + sizeof(_g4_t_v26)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);

  if ( a2 != 0 )
  {
    v2 = (uint32_t *)a1[3];
    if ( v2 != a1 + 3 )
    {
      while ( 1 )
      {
        v5 = v2[2];
        v3 = *(uint32_t *)(a2 + 4);
        if ( v5 >= v3 && byte_20D6580 == 0 )
        {
          v21 = v2[2];
          glf::Console::Println(
            (glf::Console::Self *)"%s(%d): %s - %s",
            "../../../../../lib/glf/include/glf/input/inputDevice.h",
            233,
            "operator[]",
            "idx >= mNum");
          byte_20D6580 = 1;
          v3 = *(uint32_t *)(a2 + 4);
          v5 = v21;
        }
        if ( v3 > v5 )
          v3 = v5;
        if ( (uint8_t)glf::SimpleButton::WasPressed((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + 4 * v3)) == 0 )
          goto LABEL_11;
        v2[6] = -1;
        if ( a1[7] == -1 )
          break;
        if ( a1[8] == -1 )
        {
          v4 = 1;
LABEL_58:
          v18 = v2[2];
          v2[6] = v4;
          a1[v4 + 7] = v18;
          if ( v2[6] < 4u )
            sub_C22FD0(v2[5], v2[6]);
          goto LABEL_11;
        }
        if ( a1[9] == -1 )
        {
          v4 = 2;
          goto LABEL_58;
        }
        v4 = 3;
        if ( a1[10] == -1 )
          goto LABEL_58;
LABEL_11:
        v2 = (uint32_t *)*v2;
        if ( a1 + 3 == v2 )
          goto LABEL_31;
      }
      v4 = 0;
      goto LABEL_58;
    }
LABEL_31:
    v10 = (uint32_t *)a1[5];
    if ( v10 != a1 + 5 )
    {
      while ( 1 )
      {
        v13 = v10[2];
        v11 = *(uint32_t *)(a2 + 4);
        if ( v13 >= v11 && byte_20D6580 == 0 )
        {
          v22 = v10[2];
          glf::Console::Println(
            (glf::Console::Self *)"%s(%d): %s - %s",
            "../../../../../lib/glf/include/glf/input/inputDevice.h",
            233,
            "operator[]",
            "idx >= mNum");
          byte_20D6580 = 1;
          v11 = *(uint32_t *)(a2 + 4);
          v13 = v22;
        }
        if ( v11 > v13 )
          v11 = v13;
        if ( (uint8_t)glf::SimpleButton::WasReleased((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + 4 * v11)) == 0 )
          goto LABEL_40;
        v10[6] = -1;
        v12 = v10[2];
        if ( a1[7] == v12 )
          break;
        if ( v12 == a1[8] )
        {
          v20 = 1;
          goto LABEL_69;
        }
        if ( v12 == a1[9] )
        {
          v20 = 2;
          goto LABEL_69;
        }
        if ( v12 == a1[10] )
        {
          v20 = 3;
          goto LABEL_69;
        }
LABEL_40:
        v10 = (uint32_t *)*v10;
        if ( a1 + 5 == v10 )
          goto LABEL_44;
      }
      v20 = 0;
LABEL_69:
      v10[6] = v20;
      sub_C22FD0(v10[5], v20);
      a1[v10[6] + 7] = -1;
      goto LABEL_40;
    }
LABEL_44:
    v14 = (uint32_t *)a1[1];
    if ( v14 != a1 + 1 )
    {
      while ( 1 )
      {
        v17 = v14[2];
        v15 = *(uint32_t *)(a2 + 4);
        if ( v17 >= v15 && byte_20D6580 == 0 )
        {
          v23 = v14[2];
          glf::Console::Println(
            (glf::Console::Self *)"%s(%d): %s - %s",
            "../../../../../lib/glf/include/glf/input/inputDevice.h",
            233,
            "operator[]",
            "idx >= mNum");
          byte_20D6580 = 1;
          v15 = *(uint32_t *)(a2 + 4);
          v17 = v23;
        }
        if ( v15 > v17 )
          v15 = v17;
        if ( (uint8_t)glf::SimpleButton::IsDown((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + 4 * v15)) == 0 )
          goto LABEL_53;
        v14[6] = -1;
        v16 = v14[2];
        if ( a1[7] == v16 )
          break;
        if ( v16 == a1[8] )
        {
          v19 = 1;
          goto LABEL_67;
        }
        if ( v16 == a1[9] )
        {
          v19 = 2;
          goto LABEL_67;
        }
        if ( v16 == a1[10] )
        {
          v19 = 3;
          goto LABEL_67;
        }
LABEL_53:
        v14 = (uint32_t *)*v14;
        if ( a1 + 1 == v14 )
          goto LABEL_15;
      }
      v19 = 0;
LABEL_67:
      v14[6] = v19;
      sub_C22FD0(v14[5], v19);
      goto LABEL_53;
    }
LABEL_15:
    if ( *(uint32_t *)(a2 + 4) == 0 && byte_20D6580 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        233,
        "operator[]",
        "idx >= mNum");
      byte_20D6580 = 1;
    }
    if ( (uint8_t)glf::SimpleButton::WasPressed(*(glf::SimpleButton::Self **)(a2 + 8)) != 0 )
      goto LABEL_19;
    if ( *(uint32_t *)(a2 + 4) == 0 && byte_20D6580 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        233,
        "operator[]",
        "idx >= mNum");
      byte_20D6580 = 1;
    }
    if ( (uint8_t)glf::SimpleButton::WasReleased(*(glf::SimpleButton::Self **)(a2 + 8)) != 0 )
    {
LABEL_19:
      v6 = sub_732CE0();
      if ( sub_733A60(v6, 1) != 0 )
      {
        v7 = sub_732CE0();
        if ( *(uint32_t *)sub_733A60(v7, 1) != 0 )
        {
          gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v26, nullptr);
          gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v25);
          gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v26);
          if ( (uint8_t)gameswf::CharacterHandle::opNe((gameswf::CharacterHandle::Self *)v25, (gameswf::Character::Self *)nullptr) != 0
            && (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v25) != 0 )
          {
            if ( *(uint32_t *)(a2 + 4) == 0 && byte_20D6580 == 0 )
            {
              glf::Console::Println(
                (glf::Console::Self *)"%s(%d): %s - %s",
                "../../../../../lib/glf/include/glf/input/inputDevice.h",
                233,
                "operator[]",
                "idx >= mNum");
              byte_20D6580 = 1;
            }
            v8 = glf::SimpleButton::WasPressed(*(glf::SimpleButton::Self **)(a2 + 8));
            v9 = "press";
            if ( v8 == 0 )
              v9 = "release";
            gameswf::CharacterHandle::invokeMethod(
              (gameswf::CharacterHandle::Self *)v24,
              v25,
              (const gameswf::ASValue::Self *)v9,
              0);
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v24);
          }
          gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v25);
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C248B0  (binary VA: 0xc248b0)
// Original: sub_C248B0
// ----------------------------------------------------------------------------
int sub_C248B0(uint32_t *a1, int a2)
{
  int v2;
  int v3;

  sub_C242E0(a1, a2);
  if ( a2 != 0 && *(uint8_t *)(a2 + 152) != 0 )
  {
    v2 = 0;
    v3 = 1048576000;
  }
  else
  {
    v2 = 1;
    v3 = 1028443341;
  }
  G4_VCALL<void>(a1, 20, a2, v3, v2, 0, 1065353216);
  G4_VCALL<void>(a1, 24, a2, v3);
  return G4_VCALL<int>(a1, 28, a2, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_C24970  (binary VA: 0xc24970)
// Original: sub_C24970
// ----------------------------------------------------------------------------
void sub_C24970(uint32_t *a1, int a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int *v5;
  unsigned int v6;
  int v7;
  int v8;
  gameswf::String::Self *v9;
  int v10;
  gameswf::String::Self *v11;
  int savedregs;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef void *_g4_t_obj;
  typedef gameswf::String::Self *_g4_t_obja;
  typedef gameswf::String::Self *_g4_t_v21;
  typedef gameswf::String::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[3];
  typedef void *_g4_t_v25[2];
  typedef void *_g4_t_v26;
  typedef gameswf::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef void *_g4_t_v32[2];
  typedef void *_g4_t_v33;
  typedef gameswf::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t _g4_t_v36[9];
  typedef char _g4_t_v37[36];
  typedef uint32_t _g4_t_v38[12];
  typedef gameswf::String::Self *_g4_t_v39;
  typedef const char *_g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_obj)) > _g4_s7 ? (32u + sizeof(_g4_t_obj)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_obja)) > _g4_s8 ? (32u + sizeof(_g4_t_obja)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v21)) > _g4_s9 ? (36u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v22)) > _g4_s10 ? (36u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v23)) > _g4_s11 ? (40u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v24)) > _g4_s12 ? (44u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v25)) > _g4_s13 ? (56u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v26)) > _g4_s14 ? (64u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v27)) > _g4_s15 ? (68u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v28)) > _g4_s16 ? (72u + sizeof(_g4_t_v28)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v29)) > _g4_s17 ? (76u + sizeof(_g4_t_v29)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v30)) > _g4_s18 ? (80u + sizeof(_g4_t_v30)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v31)) > _g4_s19 ? (84u + sizeof(_g4_t_v31)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v32)) > _g4_s20 ? (88u + sizeof(_g4_t_v32)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v33)) > _g4_s21 ? (96u + sizeof(_g4_t_v33)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v34)) > _g4_s22 ? (100u + sizeof(_g4_t_v34)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v35)) > _g4_s23 ? (104u + sizeof(_g4_t_v35)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v36)) > _g4_s24 ? (108u + sizeof(_g4_t_v36)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v37)) > _g4_s25 ? (144u + sizeof(_g4_t_v37)) : _g4_s25,
    _g4_s27 = (180u + sizeof(_g4_t_v38)) > _g4_s26 ? (180u + sizeof(_g4_t_v38)) : _g4_s26,
    _g4_s28 = (228u + sizeof(_g4_t_v39)) > _g4_s27 ? (228u + sizeof(_g4_t_v39)) : _g4_s27,
    _g4_s29 = (232u + sizeof(_g4_t_v40)) > _g4_s28 ? (232u + sizeof(_g4_t_v40)) : _g4_s28,
    _g4_s30 = (236u + sizeof(_g4_t_v41)) > _g4_s29 ? (236u + sizeof(_g4_t_v41)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 32u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 100u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 144u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 180u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 228u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 232u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 236u);

  v38[11] = (uint32_t)(uintptr_t)(&a1);
  v2 = a2;
  v3 = a1;
  sub_C242E0(a1, a2);
  if ( v2 != 0 && *(uint8_t *)(v2 + 152) != 0 )
    v4 = 1048576000;
  else
    v4 = 1028443341;
  G4_VCALL<void>(v3, 24, v2, v4, v12, v13, v14, v15, v16, v17, v18, obj, v21, v23, v24[0], v24[1], v24[2], v25[0], v25[1], v26, v27, v28, v29, v30, v31, v32[0], v32[1], v33, v34, v35, v36[0], v36[1], v36[2], v36[3], v36[4], v36[5], v36[6], v36[7], v36[8], *(uint32_t *)v37, *(uint32_t *)&v37[4], *(uint32_t *)&v37[8], *(uint32_t *)&v37[12], *(uint32_t *)&v37[16], *(uint32_t *)&v37[20], *(uint32_t *)&v37[24], *(uint32_t *)&v37[28], *(uint32_t *)&v37[32], v38[0], v38[1], v38[2], v38[3], v38[4], v38[5], v38[6], v38[7], v38[8], v38[9], v38[10]);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v5 = nullptr;
  if ( byte_20D49A8 == 0 )
    v5 = (int *)(&dword_20D49A0);
  if ( *((uint8_t *)v5 + 74) != 0 )
  {
    if ( *(uint32_t *)(v2 + 4) == 0 && byte_20D6580 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        233,
        "operator[]",
        "idx >= mNum");
      byte_20D6580 = 1;
    }
    if ( (uint8_t)glf::SimpleButton::WasPressed(*(glf::SimpleButton::Self **)(v2 + 8)) != 0 )
    {
      v10 = sub_732CE0();
      v11 = *(gameswf::String::Self **)sub_733A60(v10, 1u);
      if ( v11 != nullptr )
      {
        v22 = v11;
        gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v36, nullptr);
        v39 = v22;
        v40 = "mc_crosshair";
        v41 = v36;
        gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v37);
        gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v36);
        if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v37) != 0 )
        {
          if ( *(uint32_t *)(v2 + 4) == 0 && byte_20D6580 == 0 )
          {
            glf::Console::Println(
              (glf::Console::Self *)"%s(%d): %s - %s",
              "../../../../../lib/glf/include/glf/input/inputDevice.h",
              233,
              "operator[]",
              "idx >= mNum");
            byte_20D6580 = 1;
          }
          if ( (uint8_t)glf::SimpleButton::WasPressed(*(glf::SimpleButton::Self **)(v2 + 8)) != 0 )
          {
            sub_C22E40((int)(uintptr_t)(v25), "mouseDown");
            gameswf::CharacterHandle::dispatchEvent((gameswf::CharacterHandle::Self *)v37, (gameswf::String::Self *)v25, 0, -1);
            if ( LOBYTE(v25[0]) == 0xFF && (v28 & 0x1000000) != 0 )
              gameswf::free_internal(v27, v26, (unsigned int)(uintptr_t)(v40));
          }
          else
          {
            sub_C22E40((int)(uintptr_t)(v32), "mouseUp");
            gameswf::CharacterHandle::dispatchEvent((gameswf::CharacterHandle::Self *)v37, (gameswf::String::Self *)v32, 0, -1);
            if ( LOBYTE(v32[0]) == 0xFF && (v35 & 0x1000000) != 0 )
              gameswf::free_internal(v34, v33, (unsigned int)(uintptr_t)(v40));
          }
        }
        gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v37);
      }
    }
  }
  v6 = *(uint32_t *)(v2 + 4);
  v7 = 44;
  if ( v6 <= 0xB )
  {
    if ( byte_20D6580 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        233,
        "operator[]",
        "idx >= mNum");
      byte_20D6580 = 1;
      v6 = *(uint32_t *)(v2 + 4);
    }
    v7 = 44;
    if ( v6 <= 0xA )
      v7 = 4 * v6;
  }
  if ( (uint8_t)glf::SimpleButton::WasPressed((glf::SimpleButton::Self *)(*(uint32_t *)(v2 + 8) + v7)) != 0 )
  {
    v8 = sub_732CE0();
    v9 = *(gameswf::String::Self **)sub_733A60(v8, 1u);
    if ( v9 != nullptr )
    {
      obja = v9;
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v38, nullptr);
      v40 = "RadioAnimated_mc.Radio_mc";
      v39 = obja;
      v41 = v38;
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v37);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v38);
      savedregs = 0;
      gameswf::CharacterHandle::invokeMethod(
        (gameswf::CharacterHandle::Self *)v24,
        v37,
        (const gameswf::ASValue::Self *)"nextStation",
        0);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v24);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v37);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C24E00  (binary VA: 0xc24e00)
// Original: sub_C24E00
// ----------------------------------------------------------------------------
int sub_C24E00(uint32_t *a1, int a2)
{
  int v2;
  unsigned int v3;
  int v5;
  typedef int _g4_t_v6;
  typedef char _g4_t_v7[12];
  typedef char _g4_t_v8[36];
  typedef uint8_t _g4_t_v9[48];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v8)) > _g4_s2 ? (40u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v9)) > _g4_s3 ? (76u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 76u);

  sub_C24970(a1, a2);
  if ( a2 != 0 && *(uint8_t *)(a2 + 152) != 0 )
  {
    v2 = 0;
    v6 = 1048576000;
  }
  else
  {
    v2 = 1;
    v6 = 1028443341;
  }
  v3 = *(uint32_t *)(a2 + 4);
  if ( v3 <= 1 && byte_20D6580 == 0 )
  {
    glf::Console::Println(
      (glf::Console::Self *)"%s(%d): %s - %s",
      "../../../../../lib/glf/include/glf/input/inputDevice.h",
      233,
      "operator[]",
      "idx >= mNum");
    byte_20D6580 = 1;
    v3 = *(uint32_t *)(a2 + 4);
  }
  if ( (uint8_t)glf::SimpleButton::WasReleased((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + 4 * (v3 != 0))) != 0 )
  {
    v5 = sub_732CE0();
    if ( *(uint32_t *)sub_733A60(v5, 1u) != 0 )
    {
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v9, nullptr);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v8);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v9);
      if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v8) != 0 )
      {
        gameswf::CharacterHandle::invokeMethod(
          (gameswf::CharacterHandle::Self *)v7,
          v8,
          (const gameswf::ASValue::Self *)"toggle",
          0);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
      }
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v8);
    }
  }
  G4_VCALL<void>(a1, 20, a2, v6, v2, 0, 1065353216);
  return G4_VCALL<int>(a1, 28, a2, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_C25050  (binary VA: 0xc25050)
// Original: sub_C25050
// ----------------------------------------------------------------------------
int sub_C25050(uint32_t *a1, int a2)
{
  int v2;
  int v3;

  sub_C24970(a1, a2);
  if ( a2 != 0 && *(uint8_t *)(a2 + 152) != 0 )
  {
    v2 = 0;
    v3 = 1048576000;
  }
  else
  {
    v2 = 1;
    v3 = 1028443341;
  }
  G4_VCALL<void>(a1, 20, a2, v3, v2, 0, 1065353216);
  return G4_VCALL<int>(a1, 28, a2, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_C250F0  (binary VA: 0xc250f0)
// Original: sub_C250F0
// ----------------------------------------------------------------------------
int sub_C250F0(uint32_t *a1, int a2)
{
  int v2;
  int v3;

  sub_C24970(a1, a2);
  if ( a2 != 0 && *(uint8_t *)(a2 + 152) != 0 )
  {
    v2 = 0;
    v3 = 1048576000;
  }
  else
  {
    v2 = 1;
    v3 = 1028443341;
  }
  G4_VCALL<void>(a1, 20, a2, v3, v2, 1, 1065353216);
  return G4_VCALL<int>(a1, 28, a2, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_C25190  (binary VA: 0xc25190)
// Original: sub_C25190
// ----------------------------------------------------------------------------
void sub_C25190(float *a1, int a2)
{
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int *v11;
  gameswf::CharacterHandle::Self *v12;
  float v13; // xmm0_4
  int v14;
  unsigned int v15;
  int v16;
  int *v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  typedef const char *_g4_t_lpdso_handle;
  typedef uint8_t *_g4_t_v28;
  typedef float _g4_t_v29;
  typedef gameswf::CharacterHandle::Self *_g4_t_v30;
  typedef float _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t _g4_t_v36[12];
  typedef uint8_t _g4_t_v37[36];
  typedef char _g4_t_v38[36];
  typedef char _g4_t_v39[36];
  typedef uint8_t _g4_t_v40[64];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (8u + sizeof(_g4_t_lpdso_handle)) > _g4_s0 ? (8u + sizeof(_g4_t_lpdso_handle)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v28)) > _g4_s1 ? (12u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v29)) > _g4_s2 ? (32u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v30)) > _g4_s3 ? (36u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v31)) > _g4_s4 ? (44u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v32)) > _g4_s5 ? (44u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v33)) > _g4_s6 ? (52u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (59u + sizeof(_g4_t_v34)) > _g4_s7 ? (59u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v35)) > _g4_s8 ? (60u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v36)) > _g4_s9 ? (68u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v37)) > _g4_s10 ? (80u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v38)) > _g4_s11 ? (116u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (152u + sizeof(_g4_t_v39)) > _g4_s12 ? (152u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (188u + sizeof(_g4_t_v40)) > _g4_s13 ? (188u + sizeof(_g4_t_v40)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_lpdso_handle &lpdso_handle = *reinterpret_cast<_g4_t_lpdso_handle *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 59u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 152u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 188u);

  sub_C24970(a1, a2);
  if ( a2 != 0 && *(uint8_t *)(a2 + 152) != 0 )
  {
    v2 = 0;
    v3 = 1048576000;
  }
  else
  {
    v2 = 1;
    v3 = 1028443341;
  }
  G4_VCALL<void>(a1, 20, a2, v3, v2, 0, 1065353216);
  G4_VCALL<void>(a1, 28, a2, 0);
  if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)(a1 + 13)) != 0 )
    gameswf::CharacterHandle::setVisible((gameswf::CharacterHandle::Self *)(a1 + 13), false);
  v4 = *(uint32_t *)(a2 + 4);
  v5 = 40;
  if ( v4 <= 0xA )
  {
    if ( byte_20D6580 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        233,
        "operator[]",
        "idx >= mNum");
      byte_20D6580 = 1;
      v4 = *(uint32_t *)(a2 + 4);
    }
    v5 = 40;
    if ( v4 <= 9 )
      v5 = 4 * v4;
  }
  if ( (uint8_t)glf::SimpleButton::IsDown((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + v5)) != 0 )
    goto LABEL_12;
  v20 = *(uint32_t *)(a2 + 4);
  v21 = 32;
  if ( v20 <= 8 )
  {
    if ( byte_20D6580 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        233,
        "operator[]",
        "idx >= mNum");
      byte_20D6580 = 1;
      v20 = *(uint32_t *)(a2 + 4);
    }
    v21 = 32;
    if ( v20 <= 7 )
      v21 = 4 * v20;
  }
  if ( (uint8_t)glf::SimpleButton::IsDown((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + v21)) != 0 )
  {
LABEL_12:
    v6 = *(uint32_t *)(a2 + 4);
    v7 = 40;
    if ( v6 <= 0xA )
    {
      if ( byte_20D6580 == 0 )
      {
        glf::Console::Println(
          (glf::Console::Self *)"%s(%d): %s - %s",
          "../../../../../lib/glf/include/glf/input/inputDevice.h",
          233,
          "operator[]",
          "idx >= mNum");
        byte_20D6580 = 1;
        v6 = *(uint32_t *)(a2 + 4);
      }
      v7 = 40;
      if ( v6 <= 9 )
        v7 = 4 * v6;
    }
    if ( (uint8_t)glf::SimpleButton::IsDown((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + v7)) != 0 )
    {
      v34 = 0;
      v33 = 0;
      v35 = 0;
      v8 = 0xFFFF;
      v31 = 65535.0;
    }
    else
    {
      v34 = 1;
      v35 = -947912960;
      v33 = -65535;
      v8 = 0;
      v31 = 0.0;
    }
    v9 = *(uint32_t *)(a2 + 4);
    v10 = 32;
    if ( v9 <= 8 )
    {
      if ( byte_20D6580 == 0 )
      {
        glf::Console::Println(
          (glf::Console::Self *)"%s(%d): %s - %s",
          "../../../../../lib/glf/include/glf/input/inputDevice.h",
          233,
          "operator[]",
          "idx >= mNum");
        byte_20D6580 = 1;
        v9 = *(uint32_t *)(a2 + 4);
      }
      v10 = 32;
      if ( v9 <= 7 )
        v10 = 4 * v9;
    }
    if ( (uint8_t)glf::SimpleButton::IsDown((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + v10)) != 0 )
    {
      v8 = v33;
      v31 = *(float *)&v35;
    }
    else
    {
      v34 = 0;
    }
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0(&dword_20D49A0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v11 = nullptr;
    if ( byte_20D49A8 == 0 )
      v11 = (int *)(&dword_20D49A0);
    v12 = *(gameswf::CharacterHandle::Self **)(v11[3] + 116);
    if ( v12 != nullptr )
    {
      v30 = v12;
      G4_VCALL<void>(v12, 48, 0);
      v29 = sub_800D50(v30);
      a1[12] = v29;
      if ( v8 != 0 )
      {
        v13 = fminf(
                fmaxf(
                  (float)((float)((float)(0.000000015259022f * 0.4f) * (float)*(int *)(dword_20DDDC0 + 1076)) * v31)
                + v29,
                  0.0),
                1.0);
        a1[12] = v13;
        sub_800CB0(v30, LODWORD(v13));
        v14 = sub_732CE0();
        v32 = *(uint32_t *)sub_733A60(v14, 1);
        gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v39, nullptr);
        if ( v32 != 0 )
        {
          gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v37, nullptr);
          lpdso_handle = "BrakeSmall_mc";
          v28 = v37;
          gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v38);
          gameswf::CharacterHandle::opAssign((int)(uintptr_t)(v39), (gameswf::CharacterHandle::Self *)v38);
          gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v38);
          gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v37);
        }
        if ( v34 != 0
          && a1[12] == 0.0
          && (uint8_t)gameswf::CharacterHandle::opNe((gameswf::CharacterHandle::Self *)v39, (gameswf::Character::Self *)nullptr) != 0
          && (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v39) != 0
          && (uint8_t)gameswf::CharacterHandle::isEnabled((gameswf::CharacterHandle::Self *)v39) != 0 )
        {
          v26 = sub_8F0680(v25);
          G4_VCALL<void>(v26, 400, 1065353216, lpdso_handle, v28);
        }
        gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v39);
      }
    }
  }
  v15 = *(uint32_t *)(a2 + 4);
  v16 = 40;
  if ( v15 <= 0xA )
  {
    if ( byte_20D6580 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        233,
        "operator[]",
        "idx >= mNum");
      byte_20D6580 = 1;
      v15 = *(uint32_t *)(a2 + 4);
    }
    v16 = 40;
    if ( v15 <= 9 )
      v16 = 4 * v15;
  }
  if ( (uint8_t)glf::SimpleButton::WasReleased((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + v16)) != 0 )
    goto LABEL_71;
  v23 = *(uint32_t *)(a2 + 4);
  v24 = 32;
  if ( v23 <= 8 )
  {
    if ( byte_20D6580 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        233,
        "operator[]",
        "idx >= mNum");
      byte_20D6580 = 1;
      v23 = *(uint32_t *)(a2 + 4);
    }
    v24 = 32;
    if ( v23 <= 7 )
      v24 = 4 * v23;
  }
  if ( (uint8_t)glf::SimpleButton::WasReleased((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + v24)) != 0 )
  {
LABEL_71:
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0(&dword_20D49A0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v17 = nullptr;
    if ( byte_20D49A8 == 0 )
      v17 = (int *)(&dword_20D49A0);
    v18 = *(uint32_t *)(v17[3] + 116);
    if ( v18 != 0 )
      G4_VCALL<void>(v18, 52, 0);
  }
  v19 = *(uint32_t *)(a2 + 4);
  if ( v19 <= 1 && byte_20D6580 == 0 )
  {
    glf::Console::Println(
      (glf::Console::Self *)"%s(%d): %s - %s",
      "../../../../../lib/glf/include/glf/input/inputDevice.h",
      233,
      "operator[]",
      "idx >= mNum");
    byte_20D6580 = 1;
    v19 = *(uint32_t *)(a2 + 4);
  }
  if ( (uint8_t)glf::SimpleButton::WasReleased((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + 4 * (v19 != 0))) != 0 )
  {
    v22 = sub_732CE0();
    if ( *(uint32_t *)sub_733A60(v22, 1) != 0 )
    {
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v40, nullptr);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v39);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v40);
      if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v39) != 0 )
      {
        gameswf::CharacterHandle::invokeMethod(
          (gameswf::CharacterHandle::Self *)v36,
          v39,
          (const gameswf::ASValue::Self *)"toggle",
          0);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v36);
      }
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v39);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C25A40  (binary VA: 0xc25a40)
// Original: sub_C25A40
// ----------------------------------------------------------------------------
void sub_C25A40(float *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15)
{
  uint32_t **v15;
  float *v16;
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  uint32_t **v20;
  int *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;

  if ( a2 != 0 && *(uint8_t *)(a2 + 152) != 0 )
    G4_VCALL<void>(a1, 32, a2, 1048576000, 0, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, 1);
  else
    G4_VCALL<void>(a1, 32, a2, 1028443341, 1, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, 0);
  if ( *((uint8_t *)a1 + a15 + 44) != 0 )
  {
    if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
    {
      sub_7D7730((int)(uintptr_t)(&unk_20D2D60));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
      __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
    }
    v16 = nullptr;
    if ( byte_20D2D64 == 0 )
      v16 = (float *)&unk_20D2D60;
    v17 = v16[11];
    v18 = (float)(a1[12] * v17) * 10.0;
    v19 = (float)(v17 * a1[13]) * 10.0;
    if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
    {
      sub_9C9CC0((int)(uintptr_t)(&unk_20D4E60));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
    }
    v20 = nullptr;
    if ( byte_20D4E64 == 0 )
      v20 = (uint32_t **)&unk_20D4E60;
    (*(void (**)(uint32_t *, float, uint32_t))(*v20[5] + 40))(v20[5], COERCE_FLOAT(LODWORD(v18)), -v19);
    if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
    v21 = nullptr;
    if ( byte_20D49A8 == 0 )
      v21 = (int *)(&dword_20D49A0);
    *(uint8_t *)(v21[10] + 152) = 1;
  }
  else
  {
    if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
    {
      sub_9C9CC0((int)(uintptr_t)(&unk_20D4E60));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
    }
    v15 = nullptr;
    if ( byte_20D4E64 == 0 )
      v15 = (uint32_t **)&unk_20D4E60;
    (*(void (**)(uint32_t *, uint32_t, uint32_t))(*v15[5] + 40))(v15[5], 0, 0);
  }
  sub_C242E0(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_C25D70  (binary VA: 0xc25d70)
// Original: sub_C25D70
// ----------------------------------------------------------------------------
int sub_C25D70(uint32_t *a1, int a2)
{
  int v2;
  int v4;

  sub_C242E0(a1, a2);
  if ( a2 != 0 && *(uint8_t *)(a2 + 152) != 0 )
  {
    v4 = 0;
    v2 = 1048576000;
  }
  else
  {
    v4 = 1;
    v2 = 1028443341;
  }
  G4_VCALL<void>(a1, 28, a2, 0);
  G4_VCALL<void>(a1, 20, a2, v2, v4, 0, 0x40000000);
  return G4_VCALL<int>(a1, 24, a2, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_C25E40  (binary VA: 0xc25e40)
// Original: sub_C25E40
// ----------------------------------------------------------------------------
int sub_C25E40(int a1)
{
  typedef uint8_t _g4_t_v2[20];
  typedef uint8_t _g4_t_v3[20];
  typedef uint8_t _g4_t_v4[20];
  typedef uint8_t _g4_t_v5[20];
  typedef uint8_t _g4_t_v6[20];
  typedef uint8_t _g4_t_v7[20];
  typedef uint8_t _g4_t_v8[20];
  typedef uint8_t _g4_t_v9[20];
  typedef uint8_t _g4_t_v10[20];
  typedef uint8_t _g4_t_v11[20];
  typedef uint8_t _g4_t_v12[20];
  typedef uint8_t _g4_t_v13[20];
  typedef uint8_t _g4_t_v14[20];
  typedef uint8_t _g4_t_v15[20];
  typedef uint8_t _g4_t_v16[20];
  typedef uint8_t _g4_t_v17[20];
  typedef uint8_t _g4_t_v18[20];
  typedef uint8_t _g4_t_v19[20];
  typedef uint8_t _g4_t_v20[20];
  typedef uint8_t _g4_t_v21[20];
  typedef uint8_t _g4_t_v22[20];
  typedef uint8_t _g4_t_v23[20];
  typedef uint8_t _g4_t_v24[20];
  typedef uint8_t _g4_t_v25[20];
  typedef uint8_t _g4_t_v26[20];
  typedef uint8_t _g4_t_v27[20];
  typedef uint8_t _g4_t_v28[20];
  typedef uint8_t _g4_t_v29[20];
  typedef uint8_t _g4_t_v30[20];
  typedef uint8_t _g4_t_v31[20];
  typedef uint8_t _g4_t_v32[20];
  typedef uint8_t _g4_t_v33[48];
  enum : size_t {
    _g4_s0 = 736u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v3)) > _g4_s1 ? (20u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v4)) > _g4_s2 ? (40u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v5)) > _g4_s3 ? (60u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v6)) > _g4_s4 ? (80u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (100u + sizeof(_g4_t_v7)) > _g4_s5 ? (100u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (120u + sizeof(_g4_t_v8)) > _g4_s6 ? (120u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (140u + sizeof(_g4_t_v9)) > _g4_s7 ? (140u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (160u + sizeof(_g4_t_v10)) > _g4_s8 ? (160u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (180u + sizeof(_g4_t_v11)) > _g4_s9 ? (180u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (200u + sizeof(_g4_t_v12)) > _g4_s10 ? (200u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (220u + sizeof(_g4_t_v13)) > _g4_s11 ? (220u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (240u + sizeof(_g4_t_v14)) > _g4_s12 ? (240u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (260u + sizeof(_g4_t_v15)) > _g4_s13 ? (260u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (280u + sizeof(_g4_t_v16)) > _g4_s14 ? (280u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (300u + sizeof(_g4_t_v17)) > _g4_s15 ? (300u + sizeof(_g4_t_v17)) : _g4_s15,
    _g4_s17 = (320u + sizeof(_g4_t_v18)) > _g4_s16 ? (320u + sizeof(_g4_t_v18)) : _g4_s16,
    _g4_s18 = (340u + sizeof(_g4_t_v19)) > _g4_s17 ? (340u + sizeof(_g4_t_v19)) : _g4_s17,
    _g4_s19 = (360u + sizeof(_g4_t_v20)) > _g4_s18 ? (360u + sizeof(_g4_t_v20)) : _g4_s18,
    _g4_s20 = (380u + sizeof(_g4_t_v21)) > _g4_s19 ? (380u + sizeof(_g4_t_v21)) : _g4_s19,
    _g4_s21 = (400u + sizeof(_g4_t_v22)) > _g4_s20 ? (400u + sizeof(_g4_t_v22)) : _g4_s20,
    _g4_s22 = (420u + sizeof(_g4_t_v23)) > _g4_s21 ? (420u + sizeof(_g4_t_v23)) : _g4_s21,
    _g4_s23 = (440u + sizeof(_g4_t_v24)) > _g4_s22 ? (440u + sizeof(_g4_t_v24)) : _g4_s22,
    _g4_s24 = (460u + sizeof(_g4_t_v25)) > _g4_s23 ? (460u + sizeof(_g4_t_v25)) : _g4_s23,
    _g4_s25 = (480u + sizeof(_g4_t_v26)) > _g4_s24 ? (480u + sizeof(_g4_t_v26)) : _g4_s24,
    _g4_s26 = (500u + sizeof(_g4_t_v27)) > _g4_s25 ? (500u + sizeof(_g4_t_v27)) : _g4_s25,
    _g4_s27 = (520u + sizeof(_g4_t_v28)) > _g4_s26 ? (520u + sizeof(_g4_t_v28)) : _g4_s26,
    _g4_s28 = (540u + sizeof(_g4_t_v29)) > _g4_s27 ? (540u + sizeof(_g4_t_v29)) : _g4_s27,
    _g4_s29 = (560u + sizeof(_g4_t_v30)) > _g4_s28 ? (560u + sizeof(_g4_t_v30)) : _g4_s28,
    _g4_s30 = (580u + sizeof(_g4_t_v31)) > _g4_s29 ? (580u + sizeof(_g4_t_v31)) : _g4_s29,
    _g4_s31 = (600u + sizeof(_g4_t_v32)) > _g4_s30 ? (600u + sizeof(_g4_t_v32)) : _g4_s30,
    _g4_s32 = (620u + sizeof(_g4_t_v33)) > _g4_s31 ? (620u + sizeof(_g4_t_v33)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 20u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 40u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 80u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 100u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 120u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 140u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 160u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 180u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 200u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 220u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 240u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 260u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 280u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 300u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 320u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 340u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 360u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 380u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 400u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 420u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 440u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 460u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 480u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 500u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 520u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 540u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 560u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 580u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 600u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 620u);

  *(uint32_t *)(a1 + 28) = -1;
  *(uint32_t *)(a1 + 20) = a1 + 20;
  *(uint32_t *)(a1 + 24) = a1 + 20;
  *(uint32_t *)(a1 + 32) = -1;
  *(uint32_t *)(a1 + 36) = -1;
  *(uint32_t *)(a1 + 40) = -1;
  *(uint8_t *)(a1 + 44) = 0;
  *(uint8_t *)(a1 + 45) = 0;
  *(uint8_t *)(a1 + 46) = 0;
  *(uint8_t *)(a1 + 47) = 0;
  *(uint32_t *)(a1 + 4) = a1 + 4;
  *(uint32_t *)(a1 + 8) = a1 + 4;
  *(uint32_t *)(a1 + 12) = a1 + 12;
  *(uint32_t *)(a1 + 16) = a1 + 12;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B888);
  sub_5BC910(v2, 1, 1, "Cover_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v2);
  sub_5BC910(v3, 1, 1, "Cover_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v3);
  sub_5BC910(v4, 1, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v4);
  sub_5BC910(v5, 0, 1, "ActionButton_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v5);
  sub_5BC910(v6, 0, 1, "ActionButton_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v6);
  sub_5BC910(v7, 0, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v7);
  sub_5BC910(v8, 10, 1, "RunButton_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v8);
  sub_5BC910(v9, 10, 1, "RunButton_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v9);
  sub_5BC910(v10, 10, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v10);
  sub_5BC910(v11, 8, 1, "ThrowButton_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v11);
  sub_5BC910(v12, 8, 1, "ThrowButton_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v12);
  sub_5BC910(v13, 8, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v13);
  sub_5BC910(v14, 2, 1, "FirstAidButton_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v14);
  sub_5BC910(v15, 2, 1, "FirstAidButton_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v15);
  sub_5BC910(v16, 2, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v16);
  sub_5BC910(v17, 3, 1, "EnterCar_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v17);
  sub_5BC910(v18, 3, 1, "EnterCar_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v18);
  sub_5BC910(v19, 3, 1, "dialog_enter_zone.btn_ok.hitzone", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v19);
  sub_5BC910(v20, 3, 1, "dialog_enter_zone.btn_ok.hitzone", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v20);
  sub_5BC910(v21, 3, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v21);
  sub_5BC910(v22, 9, 1, "MiniMap_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v22);
  sub_5BC910(v23, 9, 1, "MiniMap_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v23);
  sub_5BC910(v24, 9, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v24);
  sub_5BC910(v25, 11, 1, "weapons_list.btn_inc.hitzone", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v25);
  sub_5BC910(v26, 11, 1, "weapons_list.btn_inc.hitzone", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v26);
  sub_5BC910(v27, 11, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v27);
  sub_5BC910(v28, 7, 1, "weapons_list.btn_dec.hitzone", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v28);
  sub_5BC910(v29, 7, 1, "weapons_list.btn_dec.hitzone", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v29);
  sub_5BC910(v30, 7, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v30);
  sub_5BC910(v31, 4, 1, "ArmorButton_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v31);
  sub_5BC910(v32, 4, 1, "ArmorButton_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v32);
  sub_5BC910(v33, 4, 1, "stage", "mouseUp", 0);
  return sub_C22DD0(a1 + 20, (uint32_t *)v33);
}

// ----------------------------------------------------------------------------
// Function: sub_C266B0  (binary VA: 0xc266b0)
// Original: sub_C266B0
// ----------------------------------------------------------------------------
int sub_C266B0(int a1)
{
  typedef uint32_t _g4_t_v2[5];
  typedef uint32_t _g4_t_v3[5];
  typedef uint32_t _g4_t_v4[5];
  typedef uint32_t _g4_t_v5[5];
  typedef uint32_t _g4_t_v6[5];
  typedef uint32_t _g4_t_v7[5];
  typedef uint32_t _g4_t_v8[5];
  typedef uint32_t _g4_t_v9[5];
  typedef uint32_t _g4_t_v10[5];
  typedef uint32_t _g4_t_v11[5];
  typedef uint32_t _g4_t_v12[5];
  typedef uint32_t _g4_t_v13[5];
  typedef uint32_t _g4_t_v14[5];
  typedef uint32_t _g4_t_v15[5];
  typedef uint32_t _g4_t_v16[12];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (4u + sizeof(_g4_t_v2)) > _g4_s0 ? (4u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v3)) > _g4_s1 ? (24u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v4)) > _g4_s2 ? (44u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v5)) > _g4_s3 ? (64u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (84u + sizeof(_g4_t_v6)) > _g4_s4 ? (84u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (104u + sizeof(_g4_t_v7)) > _g4_s5 ? (104u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (124u + sizeof(_g4_t_v8)) > _g4_s6 ? (124u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (144u + sizeof(_g4_t_v9)) > _g4_s7 ? (144u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (164u + sizeof(_g4_t_v10)) > _g4_s8 ? (164u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (184u + sizeof(_g4_t_v11)) > _g4_s9 ? (184u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (204u + sizeof(_g4_t_v12)) > _g4_s10 ? (204u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (224u + sizeof(_g4_t_v13)) > _g4_s11 ? (224u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (244u + sizeof(_g4_t_v14)) > _g4_s12 ? (244u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (264u + sizeof(_g4_t_v15)) > _g4_s13 ? (264u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (284u + sizeof(_g4_t_v16)) > _g4_s14 ? (284u + sizeof(_g4_t_v16)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 24u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 44u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 64u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 84u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 104u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 124u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 144u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 164u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 184u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 204u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 224u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 244u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 264u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 284u);

  *(uint32_t *)(a1 + 4) = a1 + 4;
  *(uint32_t *)(a1 + 8) = a1 + 4;
  *(uint32_t *)(a1 + 12) = a1 + 12;
  *(uint32_t *)(a1 + 16) = a1 + 12;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B8C8);
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 20) = a1 + 20;
  *(uint32_t *)(a1 + 24) = a1 + 20;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 28) = -1;
  *(uint32_t *)(a1 + 32) = -1;
  *(uint32_t *)(a1 + 36) = -1;
  *(uint32_t *)(a1 + 40) = -1;
  *(uint8_t *)(a1 + 44) = 0;
  *(uint8_t *)(a1 + 45) = 0;
  *(uint8_t *)(a1 + 46) = 0;
  *(uint8_t *)(a1 + 47) = 0;
  sub_5BC910(v2, 0, 1, (int)(uintptr_t)("ActionButton_mc"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0(a1 + 12, v2);
  sub_5BC910(v3, 0, 1, (int)(uintptr_t)("ActionButton_mc"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0(a1 + 20, v3);
  sub_5BC910(v4, 0, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0(a1 + 20, v4);
  sub_5BC910(v5, 1, 1, (int)(uintptr_t)("CloseSniper_mc"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0(a1 + 12, v5);
  sub_5BC910(v6, 1, 1, (int)(uintptr_t)("CloseSniper_mc"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0(a1 + 20, v6);
  sub_5BC910(v7, 1, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0(a1 + 20, v7);
  sub_5BC910(v8, 10, 1, (int)(uintptr_t)("btn_dec"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0(a1 + 12, v8);
  sub_5BC910(v9, 10, 1, (int)(uintptr_t)("btn_dec"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0(a1 + 20, v9);
  sub_5BC910(v10, 10, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0(a1 + 20, v10);
  sub_5BC910(v11, 8, 1, (int)(uintptr_t)("btn_inc"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0(a1 + 12, v11);
  sub_5BC910(v12, 8, 1, (int)(uintptr_t)("btn_inc"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0(a1 + 20, v12);
  sub_5BC910(v13, 8, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0(a1 + 20, v13);
  sub_5BC910(v14, 9, 1, (int)(uintptr_t)("MiniMap_mc"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0(a1 + 12, v14);
  sub_5BC910(v15, 9, 1, (int)(uintptr_t)("MiniMap_mc"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0(a1 + 20, v15);
  sub_5BC910(v16, 9, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  return sub_C22DD0(a1 + 20, v16);
}

// ----------------------------------------------------------------------------
// Function: sub_C26AF0  (binary VA: 0xc26af0)
// Original: sub_C26AF0
// ----------------------------------------------------------------------------
int sub_C26AF0(int a1)
{
  typedef uint8_t _g4_t_v2[20];
  typedef uint8_t _g4_t_v3[20];
  typedef uint8_t _g4_t_v4[20];
  typedef uint8_t _g4_t_v5[20];
  typedef uint8_t _g4_t_v6[20];
  typedef uint8_t _g4_t_v7[20];
  typedef uint8_t _g4_t_v8[20];
  typedef uint8_t _g4_t_v9[20];
  typedef uint8_t _g4_t_v10[20];
  typedef uint8_t _g4_t_v11[20];
  typedef uint8_t _g4_t_v12[20];
  typedef uint8_t _g4_t_v13[20];
  typedef uint8_t _g4_t_v14[20];
  typedef uint8_t _g4_t_v15[20];
  typedef uint8_t _g4_t_v16[20];
  typedef uint8_t _g4_t_v17[20];
  typedef uint8_t _g4_t_v18[20];
  typedef uint8_t _g4_t_v19[20];
  typedef uint8_t _g4_t_v20[20];
  typedef uint8_t _g4_t_v21[20];
  typedef uint8_t _g4_t_v22[20];
  typedef uint8_t _g4_t_v23[20];
  typedef uint8_t _g4_t_v24[20];
  typedef uint8_t _g4_t_v25[48];
  enum : size_t {
    _g4_s0 = 576u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v3)) > _g4_s1 ? (20u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v4)) > _g4_s2 ? (40u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v5)) > _g4_s3 ? (60u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v6)) > _g4_s4 ? (80u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (100u + sizeof(_g4_t_v7)) > _g4_s5 ? (100u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (120u + sizeof(_g4_t_v8)) > _g4_s6 ? (120u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (140u + sizeof(_g4_t_v9)) > _g4_s7 ? (140u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (160u + sizeof(_g4_t_v10)) > _g4_s8 ? (160u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (180u + sizeof(_g4_t_v11)) > _g4_s9 ? (180u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (200u + sizeof(_g4_t_v12)) > _g4_s10 ? (200u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (220u + sizeof(_g4_t_v13)) > _g4_s11 ? (220u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (240u + sizeof(_g4_t_v14)) > _g4_s12 ? (240u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (260u + sizeof(_g4_t_v15)) > _g4_s13 ? (260u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (280u + sizeof(_g4_t_v16)) > _g4_s14 ? (280u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (300u + sizeof(_g4_t_v17)) > _g4_s15 ? (300u + sizeof(_g4_t_v17)) : _g4_s15,
    _g4_s17 = (320u + sizeof(_g4_t_v18)) > _g4_s16 ? (320u + sizeof(_g4_t_v18)) : _g4_s16,
    _g4_s18 = (340u + sizeof(_g4_t_v19)) > _g4_s17 ? (340u + sizeof(_g4_t_v19)) : _g4_s17,
    _g4_s19 = (360u + sizeof(_g4_t_v20)) > _g4_s18 ? (360u + sizeof(_g4_t_v20)) : _g4_s18,
    _g4_s20 = (380u + sizeof(_g4_t_v21)) > _g4_s19 ? (380u + sizeof(_g4_t_v21)) : _g4_s19,
    _g4_s21 = (400u + sizeof(_g4_t_v22)) > _g4_s20 ? (400u + sizeof(_g4_t_v22)) : _g4_s20,
    _g4_s22 = (420u + sizeof(_g4_t_v23)) > _g4_s21 ? (420u + sizeof(_g4_t_v23)) : _g4_s21,
    _g4_s23 = (440u + sizeof(_g4_t_v24)) > _g4_s22 ? (440u + sizeof(_g4_t_v24)) : _g4_s22,
    _g4_s24 = (460u + sizeof(_g4_t_v25)) > _g4_s23 ? (460u + sizeof(_g4_t_v25)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 20u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 40u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 80u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 100u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 120u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 140u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 160u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 180u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 200u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 220u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 240u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 260u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 280u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 300u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 320u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 340u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 360u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 380u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 400u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 420u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 440u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 460u);

  *(uint32_t *)(a1 + 28) = -1;
  *(uint32_t *)(a1 + 20) = a1 + 20;
  *(uint32_t *)(a1 + 24) = a1 + 20;
  *(uint32_t *)(a1 + 32) = -1;
  *(uint32_t *)(a1 + 36) = -1;
  *(uint32_t *)(a1 + 40) = -1;
  *(uint8_t *)(a1 + 44) = 0;
  *(uint8_t *)(a1 + 45) = 0;
  *(uint8_t *)(a1 + 46) = 0;
  *(uint8_t *)(a1 + 47) = 0;
  *(uint32_t *)(a1 + 4) = a1 + 4;
  *(uint32_t *)(a1 + 8) = a1 + 4;
  *(uint32_t *)(a1 + 12) = a1 + 12;
  *(uint32_t *)(a1 + 16) = a1 + 12;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B908);
  sub_5BC910(v2, 0, 1, "ShootSmallButton_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v2);
  sub_5BC910(v3, 0, 1, "ShootSmallButton_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v3);
  sub_5BC910(v4, 0, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v4);
  sub_5BC910(v5, 2, 1, "RepairKitButton_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v5);
  sub_5BC910(v6, 2, 1, "RepairKitButton_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v6);
  sub_5BC910(v7, 2, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v7);
  sub_5BC910(v8, 3, 1, "ExitCar_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v8);
  sub_5BC910(v9, 3, 1, "ExitCar_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v9);
  sub_5BC910(v10, 3, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v10);
  sub_5BC910(v11, 9, 1, "MiniMap_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v11);
  sub_5BC910(v12, 9, 1, "MiniMap_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v12);
  sub_5BC910(v13, 9, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v13);
  sub_5BC910(v14, 4, 1, "ArmorButton_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v14);
  sub_5BC910(v15, 4, 1, "ArmorButton_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v15);
  sub_5BC910(v16, 4, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v16);
  sub_5BC910(v17, 5, 1, "weapons_list.btn_inc.hitzone", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v17);
  sub_5BC910(v18, 5, 1, "weapons_list.btn_inc.hitzone", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v18);
  sub_5BC910(v19, 5, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v19);
  sub_5BC910(v20, 7, 1, "weapons_list.btn_dec.hitzone", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v20);
  sub_5BC910(v21, 7, 1, "weapons_list.btn_dec.hitzone", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v21);
  sub_5BC910(v22, 7, 1, "stage", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v22);
  sub_5BC910(v23, 6, 1, "FirstAidButton_mc", "mouseDown", 0);
  sub_C22DD0(a1 + 12, (uint32_t *)v23);
  sub_5BC910(v24, 6, 1, "FirstAidButton_mc", "mouseUp", 0);
  sub_C22DD0(a1 + 20, (uint32_t *)v24);
  sub_5BC910(v25, 6, 1, "stage", "mouseUp", 0);
  return sub_C22DD0(a1 + 20, (uint32_t *)v25);
}

// ----------------------------------------------------------------------------
// Function: sub_C27160  (binary VA: 0xc27160)
// Original: sub_C27160
// ----------------------------------------------------------------------------
int sub_C27160(uint32_t *a1)
{
  typedef uint32_t _g4_t_v2[5];
  typedef uint32_t _g4_t_v3[5];
  typedef uint32_t _g4_t_v4[5];
  typedef uint32_t _g4_t_v5[5];
  typedef uint32_t _g4_t_v6[5];
  typedef uint32_t _g4_t_v7[12];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v3)) > _g4_s1 ? (28u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v4)) > _g4_s2 ? (48u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v5)) > _g4_s3 ? (68u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (88u + sizeof(_g4_t_v6)) > _g4_s4 ? (88u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (108u + sizeof(_g4_t_v7)) > _g4_s5 ? (108u + sizeof(_g4_t_v7)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 28u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 48u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 68u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 88u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 108u);

  sub_C26AF0((int)(uintptr_t)(a1));
  *a1 = (uint32_t)(uintptr_t)(&off_206B948);
  sub_5BC910(v2, 10, 1, (int)(uintptr_t)("Accel_mc"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 3), v2);
  sub_5BC910(v3, 10, 1, (int)(uintptr_t)("Accel_mc"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 5), v3);
  sub_5BC910(v4, 10, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 5), v4);
  sub_5BC910(v5, 8, 1, (int)(uintptr_t)("Brake_mc"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 3), v5);
  sub_5BC910(v6, 8, 1, (int)(uintptr_t)("Brake_mc"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 5), v6);
  sub_5BC910(v7, 8, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  return sub_C22DD0((int)(uintptr_t)(a1 + 5), v7);
}



// ============================================================================
// Address:   0xc27320 (size: 461 bytes)
// Symbol:    sub_C27320
// Demangled: sub_C27320
// ============================================================================
int (**sub_C27320(uint32_t *a1))(int)
{
  typedef uint32_t _g4_t_v2[5];
  typedef uint32_t _g4_t_v3[5];
  typedef uint32_t _g4_t_v4[5];
  typedef uint32_t _g4_t_v5[5];
  typedef uint32_t _g4_t_v6[5];
  typedef uint32_t _g4_t_v7[12];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v3)) > _g4_s1 ? (28u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v4)) > _g4_s2 ? (48u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v5)) > _g4_s3 ? (68u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (88u + sizeof(_g4_t_v6)) > _g4_s4 ? (88u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (108u + sizeof(_g4_t_v7)) > _g4_s5 ? (108u + sizeof(_g4_t_v7)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 28u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 48u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 68u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 88u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 108u);

  sub_C26AF0((int)(uintptr_t)(a1));
  *a1 = (uint32_t)(uintptr_t)(&off_206B948);
  sub_5BC910(v2, 10, 1, (int)(uintptr_t)("Accel_mc"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 3), v2);
  sub_5BC910(v3, 10, 1, (int)(uintptr_t)("Accel_mc"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 5), v3);
  sub_5BC910(v4, 10, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 5), v4);
  sub_5BC910(v5, 8, 1, (int)(uintptr_t)("Brake_mc"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 3), v5);
  sub_5BC910(v6, 8, 1, (int)(uintptr_t)("Brake_mc"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 5), v6);
  sub_5BC910(v7, 8, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 5), v7);
  *a1 = (uint32_t)(uintptr_t)(&off_206B988);
  return (int (**)(int))(uintptr_t)(&off_206B988);
}
// ----------------------------------------------------------------------------
// Function: sub_C274F0  (binary VA: 0xc274f0)
// Original: sub_C274F0
// ----------------------------------------------------------------------------
int sub_C274F0(uint32_t *a1)
{
  typedef uint32_t _g4_t_v2[5];
  typedef uint32_t _g4_t_v3[5];
  typedef uint32_t _g4_t_v4[5];
  typedef uint32_t _g4_t_v5[5];
  typedef uint32_t _g4_t_v6[5];
  typedef uint32_t _g4_t_v7[12];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v3)) > _g4_s1 ? (28u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v4)) > _g4_s2 ? (48u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v5)) > _g4_s3 ? (68u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (88u + sizeof(_g4_t_v6)) > _g4_s4 ? (88u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (108u + sizeof(_g4_t_v7)) > _g4_s5 ? (108u + sizeof(_g4_t_v7)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 28u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 48u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 68u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 88u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 108u);

  sub_C26AF0((int)(uintptr_t)(a1));
  *a1 = (uint32_t)(uintptr_t)(&off_206B9C8);
  sub_5BC910(v2, 10, 1, (int)(uintptr_t)("btn_drive_arrow_up"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 3), v2);
  sub_5BC910(v3, 10, 1, (int)(uintptr_t)("btn_drive_arrow_up"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 5), v3);
  sub_5BC910(v4, 10, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 5), v4);
  sub_5BC910(v5, 8, 1, (int)(uintptr_t)("btn_drive_arrow_down"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 3), v5);
  sub_5BC910(v6, 8, 1, (int)(uintptr_t)("btn_drive_arrow_down"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(a1 + 5), v6);
  sub_5BC910(v7, 8, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  return sub_C22DD0((int)(uintptr_t)(a1 + 5), v7);
}

// ----------------------------------------------------------------------------
// Function: sub_C276B0  (binary VA: 0xc276b0)
// Original: sub_C276B0
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * sub_C276B0(uint32_t *a1)
{
  sub_C26AF0((int)(uintptr_t)(a1));
  a1[12] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_206BA08);
  return gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)(a1 + 13), nullptr);
}

// ----------------------------------------------------------------------------
// Function: sub_C27710  (binary VA: 0xc27710)
// Original: sub_C27710
// ----------------------------------------------------------------------------
int sub_C27710(int a1)
{
  typedef uint32_t _g4_t_v2[5];
  typedef uint32_t _g4_t_v3[5];
  typedef uint32_t _g4_t_v4[5];
  typedef uint32_t _g4_t_v5[5];
  typedef uint32_t _g4_t_v6[5];
  typedef uint32_t _g4_t_v7[12];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v3)) > _g4_s1 ? (28u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v4)) > _g4_s2 ? (48u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v5)) > _g4_s3 ? (68u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (88u + sizeof(_g4_t_v6)) > _g4_s4 ? (88u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (108u + sizeof(_g4_t_v7)) > _g4_s5 ? (108u + sizeof(_g4_t_v7)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 28u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 48u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 68u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 88u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 108u);

  *(uint32_t *)(a1 + 28) = -1;
  *(uint32_t *)(a1 + 32) = -1;
  *(uint32_t *)(a1 + 36) = -1;
  *(uint32_t *)(a1 + 40) = -1;
  *(uint8_t *)(a1 + 44) = 0;
  *(uint8_t *)(a1 + 45) = 0;
  *(uint8_t *)(a1 + 46) = 0;
  *(uint8_t *)(a1 + 47) = 0;
  *(uint32_t *)(a1 + 20) = a1 + 20;
  *(uint32_t *)(a1 + 12) = a1 + 12;
  *(uint32_t *)(a1 + 16) = a1 + 12;
  *(uint32_t *)(a1 + 24) = a1 + 20;
  *(uint32_t *)(a1 + 4) = a1 + 4;
  *(uint32_t *)(a1 + 8) = a1 + 4;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BA48);
  sub_5BC910(v2, 0, 1, (int)(uintptr_t)("Parachute_mc"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0(a1 + 12, v2);
  sub_5BC910(v3, 0, 1, (int)(uintptr_t)("Parachute_mc"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0(a1 + 20, v3);
  sub_5BC910(v4, 0, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0(a1 + 20, v4);
  sub_5BC910(v5, 9, 1, (int)(uintptr_t)("MiniMap_mc"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0(a1 + 12, v5);
  sub_5BC910(v6, 9, 1, (int)(uintptr_t)("MiniMap_mc"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0(a1 + 20, v6);
  sub_5BC910(v7, 9, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  return sub_C22DD0(a1 + 20, v7);
}

// ----------------------------------------------------------------------------
// Function: sub_C27910  (binary VA: 0xc27910)
// Original: sub_C27910
// ----------------------------------------------------------------------------
int sub_C27910(int a1)
{
  int v1;
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  int result;
  typedef uint32_t _g4_t_v9[5];
  typedef uint32_t _g4_t_v10[5];
  typedef uint32_t _g4_t_v11[5];
  typedef uint32_t _g4_t_v12[5];
  typedef uint32_t _g4_t_v13[5];
  typedef uint32_t _g4_t_v14[5];
  typedef uint32_t _g4_t_v15[5];
  typedef uint32_t _g4_t_v16[5];
  typedef uint32_t _g4_t_v17[5];
  typedef uint32_t _g4_t_v18[5];
  typedef uint32_t _g4_t_v19[5];
  typedef uint32_t _g4_t_v20[12];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v11)) > _g4_s2 ? (40u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v12)) > _g4_s3 ? (60u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v13)) > _g4_s4 ? (80u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (100u + sizeof(_g4_t_v14)) > _g4_s5 ? (100u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (120u + sizeof(_g4_t_v15)) > _g4_s6 ? (120u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (140u + sizeof(_g4_t_v16)) > _g4_s7 ? (140u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (160u + sizeof(_g4_t_v17)) > _g4_s8 ? (160u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (180u + sizeof(_g4_t_v18)) > _g4_s9 ? (180u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (200u + sizeof(_g4_t_v19)) > _g4_s10 ? (200u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (220u + sizeof(_g4_t_v20)) > _g4_s11 ? (220u + sizeof(_g4_t_v20)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 80u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 100u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 120u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 140u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 160u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 180u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 200u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 220u);

  sub_5BC980(a1);
  *(uint32_t *)(a1 + 12) = -1;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B818);
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 6000;
  *(uint8_t *)(a1 + 4) = 0;
  v1 = sub_4EBBF0(0x30u, 1);
  sub_C25E40(v1);
  *(uint32_t *)(a1 + 16) = v1;
  v2 = sub_4EBBF0(0x38u, 1);
  sub_C266B0(v2);
  *(uint32_t *)(a1 + 20) = v2;
  v3 = (uint32_t *)sub_4EBBF0(0x30u, 1);
  sub_C27160(v3);
  *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v3);
  v4 = (uint32_t *)sub_4EBBF0(0x30u, 1);
  sub_C26AF0((int)(uintptr_t)(v4));
  *v4 = (uint32_t)(uintptr_t)(&off_206B948);
  sub_5BC910(v9, 10, 1, (int)(uintptr_t)("Accel_mc"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0((int)(uintptr_t)(v4 + 3), v9);
  sub_5BC910(v10, 10, 1, (int)(uintptr_t)("Accel_mc"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(v4 + 5), v10);
  sub_5BC910(v11, 10, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(v4 + 5), v11);
  sub_5BC910(v12, 8, 1, (int)(uintptr_t)("Brake_mc"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0((int)(uintptr_t)(v4 + 3), v12);
  sub_5BC910(v13, 8, 1, (int)(uintptr_t)("Brake_mc"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(v4 + 5), v13);
  sub_5BC910(v14, 8, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(v4 + 5), v14);
  *v4 = (uint32_t)(uintptr_t)(&off_206B988);
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v4);
  v5 = (uint32_t *)sub_4EBBF0(0x30u, 1);
  sub_C26AF0((int)(uintptr_t)(v5));
  *v5 = (uint32_t)(uintptr_t)(&off_206B9C8);
  sub_5BC910(v15, 10, 1, (int)(uintptr_t)("btn_drive_arrow_up"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0((int)(uintptr_t)(v5 + 3), v15);
  sub_5BC910(v16, 10, 1, (int)(uintptr_t)("btn_drive_arrow_up"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(v5 + 5), v16);
  sub_5BC910(v17, 10, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(v5 + 5), v17);
  sub_5BC910(v18, 8, 1, (int)(uintptr_t)("btn_drive_arrow_down"), (int)(uintptr_t)("mouseDown"), 0);
  sub_C22DD0((int)(uintptr_t)(v5 + 3), v18);
  sub_5BC910(v19, 8, 1, (int)(uintptr_t)("btn_drive_arrow_down"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(v5 + 5), v19);
  sub_5BC910(v20, 8, 1, (int)(uintptr_t)("stage"), (int)(uintptr_t)("mouseUp"), 0);
  sub_C22DD0((int)(uintptr_t)(v5 + 5), v20);
  *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(v5);
  v6 = (uint32_t *)sub_4EBBF0(0x58u, 1);
  sub_C26AF0((int)(uintptr_t)(v6));
  v6[12] = 0;
  *v6 = (uint32_t)(uintptr_t)(&off_206BA08);
  gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)(v6 + 13), nullptr);
  *(uint32_t *)(a1 + 40) = (uint32_t)(uintptr_t)(v6);
  v7 = sub_4EBBF0(0x34u, 1);
  result = sub_C27710(v7);
  *(uint32_t *)(a1 + 44) = v7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C27DD0  (binary VA: 0xc27dd0)
// Original: sub_C27DD0
// ----------------------------------------------------------------------------
int sub_C27DD0(int a1, int a2)
{
  int result;
  void *v3;
  void *v4;
  int v5;
  char *v6;
  void *v7;
  char *v8;
  void *v9;
  char *v10;
  void *v11;
  char *v12;
  void *v13;
  char *v14;
  void *v15;
  char *v16;
  void *v17;
  char *v18;
  void *v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[4];
  typedef uint32_t _g4_t_v24[4];
  typedef uint32_t _g4_t_v25[4];
  typedef uint32_t _g4_t_v26[4];
  typedef uint32_t _g4_t_v27[4];
  typedef uint32_t _g4_t_v28[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v23)) > _g4_s3 ? (16u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v24)) > _g4_s4 ? (32u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v25)) > _g4_s5 ? (48u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v26)) > _g4_s6 ? (64u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v27)) > _g4_s7 ? (80u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v28)) > _g4_s8 ? (96u + sizeof(_g4_t_v28)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);

  result = a2;
  switch ( a2 )
  {
    case 0:
      memset(v23, 0, 12);
      v8 = (char *)(uintptr_t)(off_20BB78C[0]);
      if ( byte_20D2B90 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90) != 0 )
      {
        sub_793360(&unk_20D2B98);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
        __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
      }
      v9 = nullptr;
      if ( byte_20D2B9C == 0 )
        v9 = &unk_20D2B98;
      sub_7B8B70(v9, v8, v23, 0);
      result = v23[0];
      if ( v23[0] != 0 )
        return sub_4EB870(result);
      break;
    case 1:
      if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
      {
        sub_7D7730(&unk_20D2D60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
        __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
      }
      v3 = nullptr;
      if ( byte_20D2D64 == 0 )
        v3 = &unk_20D2D60;
      result = sub_795DB0(v3, 0);
      if ( (uint8_t)result == 0 )
      {
        if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
        {
          sub_7D7730(&unk_20D2D60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
          __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
        }
        v4 = nullptr;
        if ( byte_20D2D64 == 0 )
          v4 = &unk_20D2D60;
        result = sub_795DB0(v4, 5);
        if ( (uint8_t)result == 0 )
        {
          v5 = sub_656420();
          result = sub_795DB0(v5, 7);
          if ( (uint8_t)result == 0 )
          {
            memset(v24, 0, 12);
            v6 = (char *)(uintptr_t)(off_20BB788[0]);
            if ( byte_20D2B90 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90) != 0 )
            {
              sub_793360(&unk_20D2B98);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
              __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
            }
            v7 = nullptr;
            if ( byte_20D2B9C == 0 )
              v7 = &unk_20D2B98;
            sub_7B8B70(v7, v6, v24, 0);
            result = v24[0];
            if ( v24[0] != 0 )
              return sub_4EB870(result);
          }
        }
      }
      break;
    case 2:
      memset(v25, 0, 12);
      v14 = (char *)(uintptr_t)(off_20BB784[0]);
      if ( byte_20D2B90 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90) != 0 )
      {
        sub_793360(&unk_20D2B98);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
        __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
      }
      v15 = nullptr;
      if ( byte_20D2B9C == 0 )
        v15 = &unk_20D2B98;
      sub_7B8B70(v15, v14, v25, 0);
      result = v25[0];
      if ( v25[0] != 0 )
        return sub_4EB870(result);
      break;
    case 3:
      memset(v26, 0, 12);
      v16 = (char *)(uintptr_t)(off_20BB780[0]);
      if ( byte_20D2B90 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90) != 0 )
      {
        sub_793360(&unk_20D2B98);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
        __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
      }
      v17 = nullptr;
      if ( byte_20D2B9C == 0 )
        v17 = &unk_20D2B98;
      sub_7B8B70(v17, v16, v26, 0);
      result = v26[0];
      if ( v26[0] != 0 )
        return sub_4EB870(result);
      break;
    case 4:
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v10 = (char *)(uintptr_t)(off_20BB794[0]);
      if ( byte_20D2B90 != 0 )
        goto LABEL_32;
      goto LABEL_37;
    case 5:
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v10 = (char *)(uintptr_t)(off_20BB79C[0]);
      if ( byte_20D2B90 == 0 )
      {
LABEL_37:
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90) != 0 )
        {
          sub_793360(&unk_20D2B98);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
          __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
        }
      }
LABEL_32:
      v11 = nullptr;
      if ( byte_20D2B9C == 0 )
        v11 = &unk_20D2B98;
      sub_7B8B70(v11, v10, &v20, 0);
      result = v20;
      if ( v20 != 0 )
        return sub_4EB870(result);
      return result;
    case 6:
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v10 = (char *)(uintptr_t)(off_20BB790[0]);
      if ( byte_20D2B90 != 0 )
        goto LABEL_32;
      goto LABEL_37;
    case 7:
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v10 = (char *)(uintptr_t)(off_20BB798[0]);
      if ( byte_20D2B90 != 0 )
        goto LABEL_32;
      goto LABEL_37;
    case 8:
      memset(v27, 0, 12);
      v18 = (char *)(uintptr_t)(off_20BB77C[0]);
      if ( byte_20D2B90 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90) != 0 )
      {
        sub_793360(&unk_20D2B98);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
        __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
      }
      v19 = nullptr;
      if ( byte_20D2B9C == 0 )
        v19 = &unk_20D2B98;
      sub_7B8B70(v19, v18, v27, 0);
      result = v27[0];
      if ( v27[0] != 0 )
        return sub_4EB870(result);
      break;
    case 10:
      memset(v28, 0, 12);
      v12 = (char *)(uintptr_t)(off_20BB778[0]);
      if ( byte_20D2B90 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90) != 0 )
      {
        sub_793360(&unk_20D2B98);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
        __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
      }
      v13 = nullptr;
      if ( byte_20D2B9C == 0 )
        v13 = &unk_20D2B98;
      sub_7B8B70(v13, v12, v28, 0);
      result = v28[0];
      if ( v28[0] == 0 )
        return result;
      return sub_4EB870(result);
    default:
      return result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C285A0  (binary VA: 0xc285a0)
// Original: sub_C285A0
// ----------------------------------------------------------------------------
int sub_C285A0(int a1)
{
  glf::App::Self *Instance;
  glf::InputManager::Self *v2;
  int Gamepad;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  unsigned int i;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  float v13; // xmm1_4
  float v14; // xmm1_4
  int v15;
  unsigned int v16;
  void *v18;
  int v19;
  int v20;
  uint32_t *v21;
  bool v22;
  void *v23;
  typedef g4_cxa_guard_t *_g4_t_v24;
  typedef void *_g4_t_obj;
  typedef const char *_g4_t_lpdso_handle;
  typedef uint8_t *_g4_t_v27;
  typedef char _g4_t_v28;
  typedef int _g4_t_InputMgr;
  typedef uint8_t _g4_t_v30[36];
  typedef uint8_t _g4_t_v31[36];
  typedef uint8_t _g4_t_v32[36];
  typedef uint8_t _g4_t_v33[64];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_obj)) > _g4_s1 ? (4u + sizeof(_g4_t_obj)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_lpdso_handle)) > _g4_s2 ? (8u + sizeof(_g4_t_lpdso_handle)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v27)) > _g4_s3 ? (12u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v28)) > _g4_s4 ? (56u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_InputMgr)) > _g4_s5 ? (60u + sizeof(_g4_t_InputMgr)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v30)) > _g4_s6 ? (64u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (100u + sizeof(_g4_t_v31)) > _g4_s7 ? (100u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (136u + sizeof(_g4_t_v32)) > _g4_s8 ? (136u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (172u + sizeof(_g4_t_v33)) > _g4_s9 ? (172u + sizeof(_g4_t_v33)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 4u);
  _g4_t_lpdso_handle &lpdso_handle = *reinterpret_cast<_g4_t_lpdso_handle *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_InputMgr &InputMgr = *reinterpret_cast<_g4_t_InputMgr *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 136u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 172u);

  Instance = (glf::App::Self *)glf::App::GetInstance((glf::App::Self *)v24);
  InputMgr = glf::App::GetInputMgr(Instance);
  glf::InputManager::EmulateGamepadWin32(InputMgr, 9);
  v2 = (glf::InputManager::Self *)glf::App::GetInputMgr((glf::App::Self *)dword_20DDDC0);
  Gamepad = glf::InputManager::GetGamepad(v2, 1u);
  v4 = (uint32_t *)Gamepad;
  v28 = 0;
  if ( Gamepad != 0 )
    v28 = *(uint8_t *)(Gamepad + 72);
  if ( *(uint8_t *)(a1 + 4) == 0 && v28 != 0 )
  {
    *(uint32_t *)(a1 + 68) = 6000;
    if ( (uint8_t)sub_629790() != 0 )
    {
      v20 = sub_732CE0();
      v21 = (uint32_t *)sub_733A60(v20, 1);
      if ( v21 != nullptr && *v21 != 0 )
      {
        gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v30, nullptr);
        v27 = v30;
        lpdso_handle = "AnalogStick_mc";
        gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v31);
        gameswf::CharacterHandle::setVisible((gameswf::CharacterHandle::Self *)v31, false);
        gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v31);
        gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v30);
      }
    }
  }
  else
  {
    v5 = sub_732CE0();
    v6 = (uint32_t *)sub_733A60(v5, 1);
    if ( v6 != nullptr && *v6 != 0 )
    {
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v32, nullptr);
      v27 = v32;
      lpdso_handle = "AnalogStick_mc";
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v33);
      gameswf::CharacterHandle::setVisible((gameswf::CharacterHandle::Self *)v33, true);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v33);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v32);
    }
  }
  if ( *(uint8_t *)(a1 + 4) != 0 && v28 == 0 )
  {
    if ( byte_20D54E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D54E0) != 0 )
    {
      sub_51DC30(&unk_20D5500);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D54E0);
      __cxa_atexit((void (*)(void *))sub_4EEA60, &unk_20D5500, &unk_20D1280);
    }
    v18 = nullptr;
    if ( byte_20D5514 == 0 )
      v18 = &unk_20D5500;
    v19 = *(uint32_t *)(a1 + 68) - sub_51DF40(v18);
    *(uint32_t *)(a1 + 68) = v19;
    if ( v19 < 0 )
    {
      v22 = byte_20D2D50 == 0;
      *(uint8_t *)(a1 + 4) = 0;
      if ( v22 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
      {
        sub_7D7730(&unk_20D2D60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
        __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
      }
      v23 = nullptr;
      if ( byte_20D2D64 == 0 )
        v23 = &unk_20D2D60;
      sub_7A9D50(v23, 22);
    }
    v28 = *(uint8_t *)(a1 + 4);
  }
  else
  {
    *(uint8_t *)(a1 + 4) = v28;
  }
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v4);
  if ( v28 != 0 )
  {
    v7 = *(uint32_t *)(a1 + 12);
    if ( v7 != -1 )
    {
      v8 = *(uint32_t *)(a1 + 4 * v7 + 16);
      if ( v8 != 0 )
        G4_VCALL<void>(v8, 8, v4, lpdso_handle, v27);
    }
    for ( i = 0; i != 12; ++i )
    {
      if ( *(uint8_t *)(a1 + i + 48) != 0 )
      {
        v11 = v4[1];
        if ( v11 <= i && byte_20D6580 == 0 )
        {
          glf::Console::Println(
            (glf::Console::Self *)"%s(%d): %s - %s",
            "../../../../../lib/glf/include/glf/input/inputDevice.h",
            233,
            "operator[]",
            "idx >= mNum");
          byte_20D6580 = 1;
          v11 = v4[1];
        }
        if ( i <= v11 )
          v11 = i;
        if ( (uint8_t)glf::SimpleButton::IsDown((glf::SimpleButton::Self *)(v4[2] + 4 * v11)) == 0 )
          sub_C27DD0(a1, i);
      }
      v10 = v4[1];
      if ( v10 <= i && byte_20D6580 == 0 )
      {
        glf::Console::Println(
          (glf::Console::Self *)"%s(%d): %s - %s",
          "../../../../../lib/glf/include/glf/input/inputDevice.h",
          233,
          "operator[]",
          "idx >= mNum");
        byte_20D6580 = 1;
        v10 = v4[1];
      }
      if ( v10 > i )
        v10 = i;
      *(uint8_t *)(a1 + i + 48) = glf::SimpleButton::IsDown((glf::SimpleButton::Self *)(v4[2] + 4 * v10));
    }
    v12 = v4[3];
    if ( v12 <= 1 && byte_20DEA34 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        242,
        "operator[]",
        "idx >= mNum");
      byte_20DEA34 = 1;
      v12 = v4[3];
    }
    v13 = *(float *)(v4[4] + 8 * (v12 != 0));
    if ( v13 <= 0.5 || *(float *)(a1 + 60) >= 0.5 )
    {
      if ( v12 <= 1 && byte_20DEA34 == 0 )
      {
        glf::Console::Println(
          (glf::Console::Self *)"%s(%d): %s - %s",
          "../../../../../lib/glf/include/glf/input/inputDevice.h",
          242,
          "operator[]",
          "idx >= mNum");
        v12 = v4[3];
        byte_20DEA34 = 1;
        v13 = *(float *)(v4[4] + 8 * (v12 != 0));
      }
      if ( v13 >= -0.5 || *(float *)(a1 + 60) <= -0.5 )
        goto LABEL_41;
      obj = &loc_6 + 1;
    }
    else
    {
      obj = &loc_4 + 1;
    }
    sub_C27DD0(a1, (int)(uintptr_t)(obj));
    v12 = v4[3];
LABEL_41:
    if ( v12 <= 1 && byte_20DEA34 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        242,
        "operator[]",
        "idx >= mNum");
      byte_20DEA34 = 1;
      v12 = v4[3];
    }
    v14 = *(float *)(v4[4] + 8 * (v12 != 0) + 4);
    if ( v14 > 0.5 && *(float *)(a1 + 64) < 0.5 )
    {
      sub_C27DD0(a1, 4);
      v12 = v4[3];
    }
    else
    {
      if ( v12 <= 1 && byte_20DEA34 == 0 )
      {
        glf::Console::Println(
          (glf::Console::Self *)"%s(%d): %s - %s",
          "../../../../../lib/glf/include/glf/input/inputDevice.h",
          242,
          "operator[]",
          "idx >= mNum");
        v12 = v4[3];
        v15 = v4[4];
        byte_20DEA34 = 1;
        v14 = *(float *)(v15 + 8 * (v12 != 0) + 4);
      }
      if ( v14 < -0.5 && *(float *)(a1 + 64) > -0.5 )
      {
        sub_C27DD0(a1, 6);
        v12 = v4[3];
      }
    }
    if ( v12 <= 1 && byte_20DEA34 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        242,
        "operator[]",
        "idx >= mNum");
      byte_20DEA34 = 1;
      v12 = v4[3];
    }
    *(uint32_t *)(a1 + 64) = *(uint32_t *)(v4[4] + 8 * (v12 != 0) + 4);
    v16 = v4[3];
    if ( v16 <= 1 && byte_20DEA34 == 0 )
    {
      glf::Console::Println(
        (glf::Console::Self *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        242,
        "operator[]",
        "idx >= mNum");
      byte_20DEA34 = 1;
      v16 = v4[3];
    }
    *(uint32_t *)(a1 + 60) = *(uint32_t *)(v4[4] + 8 * (v16 != 0));
  }
  return ((glf::InputManager::EmulateGamepadWin32(InputMgr, 5)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C28D30  (binary VA: 0xc28d30)
// Original: sub_C28D30
// ----------------------------------------------------------------------------
unsigned int sub_C28D30(unsigned int a1, int a2, float a3, char a4, char a5, float a6)
{
  int v6;
  unsigned int result;
  int *v8;
  int *v9;
  unsigned int v10;
  unsigned int v11;
  float *v12;
  float *v13;
  float v14; // xmm1_4
  int *v15;
  int v16;
  unsigned int v17;
  float v18; // xmm0_4
  float v19; // xmm0_4
  int *v20;
  unsigned int v21;
  int *v22;
  int *v23;
  int v24;
  unsigned int v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[4];
  typedef uint32_t _g4_t_v29[4];
  typedef uint32_t _g4_t_v30[4];
  typedef float _g4_t_v31[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v27)) > _g4_s1 ? (28u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v28)) > _g4_s2 ? (32u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v29)) > _g4_s3 ? (48u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v30)) > _g4_s4 ? (64u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v31)) > _g4_s5 ? (80u + sizeof(_g4_t_v31)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);

  result = sub_8F0680(v6);
  if ( result != 0 )
  {
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v8 = nullptr;
    if ( byte_20D5248 == 0 )
      v8 = (int *)(&dword_20D5240);
    result = sub_9767E0(v8);
    if ( (uint8_t)result == 0 )
    {
      if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
      {
        sub_976230(&dword_20D5240);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
        __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      }
      v9 = nullptr;
      if ( byte_20D5248 == 0 )
        v9 = (int *)(&dword_20D5240);
      result = sub_977850(v9);
      if ( (uint8_t)result == 0 )
      {
        result = *(uint32_t *)(a2 + 12);
        if ( a4 != 0 )
        {
          v10 = 0;
          v27 = 0;
        }
        else
        {
          if ( result == 0 )
            return result;
          v10 = 1;
          v27 = 1;
        }
        if ( v10 >= result && byte_20DEA35 == 0 )
        {
          glf::Console::Println(
            (glf::Console::Self *)"%s(%d): %s - %s",
            "../../../../../lib/glf/include/glf/input/inputDevice.h",
            233,
            "operator[]",
            "idx >= mNum");
          byte_20DEA35 = 1;
          result = *(uint32_t *)(a2 + 12);
        }
        v11 = v10;
        if ( result <= v10 )
          v11 = result;
        v12 = (float *)(*(uint32_t *)(a2 + 16) + 8 * v11);
        if ( a3 < *v12 )
          goto LABEL_21;
        if ( v10 >= result && byte_20DEA35 == 0 )
        {
          glf::Console::Println(
            (glf::Console::Self *)"%s(%d): %s - %s",
            "../../../../../lib/glf/include/glf/input/inputDevice.h",
            233,
            "operator[]",
            "idx >= mNum");
          result = *(uint32_t *)(a2 + 12);
          v16 = *(uint32_t *)(a2 + 16);
          v17 = result;
          byte_20DEA35 = 1;
          if ( v10 <= result )
            v17 = v10;
          v12 = (float *)(v16 + 8 * v17);
        }
        if ( a3 < v12[1] )
          goto LABEL_21;
        if ( v10 >= result && byte_20DEA35 == 0 )
        {
          glf::Console::Println(
            (glf::Console::Self *)"%s(%d): %s - %s",
            "../../../../../lib/glf/include/glf/input/inputDevice.h",
            233,
            "operator[]",
            "idx >= mNum");
          result = *(uint32_t *)(a2 + 12);
          v24 = *(uint32_t *)(a2 + 16);
          v25 = result;
          byte_20DEA35 = 1;
          if ( v10 <= result )
            v25 = v10;
          v12 = (float *)(v24 + 8 * v25);
        }
        if ( (float)-a3 > *v12 )
          goto LABEL_21;
        if ( (float)-a3 > *(float *)(sub_C2AB10(a2 + 12, v10) + 4) )
        {
          result = *(uint32_t *)(a2 + 12);
LABEL_21:
          if ( a6 <= 0.0 )
            a6 = 1.0;
          if ( a5 != 0 )
          {
            if ( v10 >= result && byte_20DEA35 == 0 )
            {
              glf::Console::Println(
                (glf::Console::Self *)"%s(%d): %s - %s",
                "../../../../../lib/glf/include/glf/input/inputDevice.h",
                233,
                "operator[]",
                "idx >= mNum");
              byte_20DEA35 = 1;
              result = *(uint32_t *)(a2 + 12);
            }
            if ( result > v10 )
              result = v10;
            v18 = *(float *)(*(uint32_t *)(a2 + 16) + 8 * result);
            v30[1] = 9;
            v30[0] = (uint32_t)(uintptr_t)(&off_205B680);
            v19 = fminf(fmaxf(v18 / a6, -1.0), 1.0);
            LOBYTE(v30[2]) = v19 > 0.0;
            v30[3] = fabs(v19);
            if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
            {
              sub_A6BF60(&dword_20D54A0);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
              __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
            }
            v20 = nullptr;
            if ( byte_20D54A8 == 0 )
              v20 = (int *)(&dword_20D54A0);
            sub_A736A0(v20, v30);
          }
          else
          {
            if ( v10 < result || byte_20DEA35 != 0 )
            {
              if ( result > v10 )
                result = v10;
              v13 = (float *)(*(uint32_t *)(a2 + 16) + 8 * result);
              v14 = v13[1] / a6;
            }
            else
            {
              glf::Console::Println(
                (glf::Console::Self *)"%s(%d): %s - %s",
                "../../../../../lib/glf/include/glf/input/inputDevice.h",
                233,
                "operator[]",
                "idx >= mNum");
              v21 = *(uint32_t *)(a2 + 12);
              byte_20DEA35 = 1;
              if ( v10 <= v21 )
                v21 = v10;
              v13 = (float *)(*(uint32_t *)(a2 + 16) + 8 * v21);
              v14 = v13[1] / a6;
            }
            v26 = *v13 / a6;
            LODWORD(v31[1]) = 7;
            LODWORD(v31[0]) = (uint32_t)(uintptr_t)(&off_205C570);
            v31[2] = atan2f(-v26, v14);
            v31[3] = fminf(fsqrt((float)(v26 * v26) + (float)(v14 * v14)), 1.0);
            if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
            {
              sub_A6BF60(&dword_20D54A0);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
              __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
            }
            v15 = nullptr;
            if ( byte_20D54A8 == 0 )
              v15 = (int *)(&dword_20D54A0);
            sub_A736A0(v15, v31);
          }
          *(uint8_t *)(a1 + v27 + 44) = 1;
          return a1;
        }
        result = a1;
        if ( *(uint8_t *)(a1 + v27 + 44) != 0 )
        {
          *(uint8_t *)(a1 + v27 + 44) = 0;
          if ( a5 != 0 )
          {
            v29[1] = 10;
            v29[0] = (uint32_t)(uintptr_t)(&off_205B668);
            LOBYTE(v29[2]) = 0;
            v29[3] = 0;
            if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
            {
              sub_A6BF60(&dword_20D54A0);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
              __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
            }
            v23 = nullptr;
            if ( byte_20D54A8 == 0 )
              v23 = (int *)(&dword_20D54A0);
            return sub_A736A0(v23, v29);
          }
          else
          {
            v28[1] = 8;
            v28[0] = (uint32_t)(uintptr_t)(&off_205C558);
            v28[2] = 0;
            v28[3] = 0;
            if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
            {
              sub_A6BF60(&dword_20D54A0);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
              __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
            }
            v22 = nullptr;
            if ( byte_20D54A8 == 0 )
              v22 = (int *)(&dword_20D54A0);
            return sub_A736A0(v22, v28);
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C294C0  (binary VA: 0xc294c0)
// Original: sub_C294C0
// ----------------------------------------------------------------------------
void sub_C294C0(int a1, int a2, float a3)
{
  int *v3;
  int *v4;
  unsigned int v5;
  int v6;
  int v7;
  char v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  unsigned int v12;
  int v13;
  float v14; // xmm0_4
  int v15;
  char v16;
  int *v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  char v22;
  int *v23;
  int *v24;
  int v25;
  void (*v26)(int, uint32_t, uint32_t);

  if ( a2 != 0 )
  {
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v3 = nullptr;
    if ( byte_20D5248 == 0 )
      v3 = (int *)(&dword_20D5240);
    if ( (uint8_t)sub_9767E0(v3) == 0 )
    {
      if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
      {
        sub_976230(&dword_20D5240);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
        __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      }
      v4 = nullptr;
      if ( byte_20D5248 == 0 )
        v4 = (int *)(&dword_20D5240);
      if ( (uint8_t)sub_977850(v4) == 0 )
      {
        v5 = *(uint32_t *)(a2 + 12);
        if ( v5 > 1 )
        {
          if ( v5 != 2
            || byte_20DEA35 != 0
            || (glf::Console::Println(
                  (glf::Console::Self *)"%s(%d): %s - %s",
                  "../../../../../lib/glf/include/glf/input/inputDevice.h",
                  233,
                  "operator[]",
                  "idx >= mNum"),
                v5 = *(uint32_t *)(a2 + 12),
                byte_20DEA35 = 1,
                v5 > 1) )
          {
            v6 = 16;
          }
          else
          {
            v6 = 8 * v5;
          }
          v7 = *(uint32_t *)(a2 + 16);
          if ( a3 >= *(float *)(v7 + v6) )
          {
            v20 = 16;
            if ( v5 <= 2 )
            {
              if ( byte_20DEA35 == 0 )
              {
                glf::Console::Println(
                  (glf::Console::Self *)"%s(%d): %s - %s",
                  "../../../../../lib/glf/include/glf/input/inputDevice.h",
                  233,
                  "operator[]",
                  "idx >= mNum");
                byte_20DEA35 = 1;
                v5 = *(uint32_t *)(a2 + 12);
                v7 = *(uint32_t *)(a2 + 16);
              }
              v20 = 16;
              if ( v5 <= 1 )
                v20 = 8 * v5;
            }
            if ( a3 >= *(float *)(v7 + v20 + 4) )
            {
              v21 = 16;
              if ( v5 <= 2 )
              {
                if ( byte_20DEA35 == 0 )
                {
                  glf::Console::Println(
                    (glf::Console::Self *)"%s(%d): %s - %s",
                    "../../../../../lib/glf/include/glf/input/inputDevice.h",
                    233,
                    "operator[]",
                    "idx >= mNum");
                  byte_20DEA35 = 1;
                  v5 = *(uint32_t *)(a2 + 12);
                  v7 = *(uint32_t *)(a2 + 16);
                }
                v21 = 16;
                if ( v5 <= 1 )
                  v21 = 8 * v5;
              }
              if ( (float)-a3 <= *(float *)(v7 + v21) && (float)-a3 <= *(float *)(sub_C2AB10(a2 + 12, 2) + 4) )
              {
                if ( *(uint8_t *)(a1 + 46) != 0 )
                {
                  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
                  {
                    sub_82DAB0(&dword_20D49A0);
                    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
                    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
                  }
                  v22 = byte_20D49A8;
                  v23 = nullptr;
                  if ( byte_20D49A8 == 0 )
                    v23 = (int *)(&dword_20D49A0);
                  if ( v23[10] != 0 )
                  {
                    if ( byte_20D4980 == 0 )
                    {
                      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
                      {
                        sub_82DAB0(&dword_20D49A0);
                        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
                        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
                      }
                      v22 = byte_20D49A8;
                    }
                    v24 = nullptr;
                    if ( v22 == 0 )
                      v24 = (int *)(&dword_20D49A0);
                    v25 = v24[10];
                    *(uint32_t *)(v25 + 144) = 0;
                    *(uint8_t *)(*(uint32_t *)(v25 + 140) + 1) = 0;
                  }
                  *(uint8_t *)(a1 + 46) = 0;
                }
                return;
              }
            }
          }
          if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
          {
            sub_9C9CC0(&unk_20D4E60);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
            __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
          }
          v8 = byte_20D4E64;
          v9 = nullptr;
          if ( byte_20D4E64 == 0 )
            v9 = (uint32_t *)(&unk_20D4E60);
          if ( v9[5] == 0 )
          {
LABEL_39:
            if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
            {
              sub_82DAB0(&dword_20D49A0);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
              __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
            }
            v16 = byte_20D49A8;
            v17 = nullptr;
            if ( byte_20D49A8 == 0 )
              v17 = (int *)(&dword_20D49A0);
            if ( v17[10] != 0 )
            {
              if ( byte_20D4980 == 0 )
              {
                if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
                {
                  sub_82DAB0(&dword_20D49A0);
                  _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
                  __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
                }
                v16 = byte_20D49A8;
              }
              v18 = nullptr;
              if ( v16 == 0 )
                v18 = (int *)(&dword_20D49A0);
              v19 = v18[10];
              *(uint32_t *)(v19 + 144) = 0;
              *(uint8_t *)(*(uint32_t *)(v19 + 140) + 1) = 1;
            }
            *(uint8_t *)(a1 + 46) = 1;
            return;
          }
          if ( byte_20D4E40 == 0 )
          {
            if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
            {
              sub_9C9CC0(&unk_20D4E60);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
              __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
            }
            v8 = byte_20D4E64;
          }
          v10 = nullptr;
          if ( v8 == 0 )
            v10 = (uint32_t *)(&unk_20D4E60);
          v11 = v10[5];
          v26 = *(void (**)(int, uint32_t, uint32_t))(*(uint32_t *)v11 + 40);
          v12 = *(uint32_t *)(a2 + 12);
          if ( v12 > 2 )
            goto LABEL_37;
          if ( byte_20DEA35 == 0 )
          {
            glf::Console::Println(
              (glf::Console::Self *)"%s(%d): %s - %s",
              "../../../../../lib/glf/include/glf/input/inputDevice.h",
              233,
              "operator[]",
              "idx >= mNum");
            byte_20DEA35 = 1;
            v12 = *(uint32_t *)(a2 + 12);
          }
          if ( v12 > 1 )
          {
LABEL_37:
            v13 = *(uint32_t *)(a2 + 16);
            v15 = 16;
            v14 = (float)-*(float *)(v13 + 20) * 10.0;
            if ( v12 != 2 )
            {
LABEL_38:
              v26(v11, 10.0 * *(float *)(v13 + v15), LODWORD(v14));
              goto LABEL_39;
            }
          }
          else
          {
            v13 = *(uint32_t *)(a2 + 16);
            v14 = (float)-*(float *)(v13 + 8 * v12 + 4) * 10.0;
          }
          if ( byte_20DEA35 == 0 )
          {
            glf::Console::Println(
              (glf::Console::Self *)"%s(%d): %s - %s",
              "../../../../../lib/glf/include/glf/input/inputDevice.h",
              233,
              "operator[]",
              "idx >= mNum");
            byte_20DEA35 = 1;
            v12 = *(uint32_t *)(a2 + 12);
            v13 = *(uint32_t *)(a2 + 16);
          }
          v15 = 16;
          if ( v12 <= 1 )
            v15 = 8 * v12;
          goto LABEL_38;
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C29C40  (binary VA: 0xc29c40)
// Original: sub_C29C40
// ----------------------------------------------------------------------------
char sub_C29C40(int a1, int a2, char a3)
{
  int v3;
  int *v4;
  int *v5;
  unsigned int v6;
  int v7;
  int *v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  glf::SimpleButton::Self *v13;
  int *v14;
  int *v15;
  typedef uint32_t _g4_t_v17[4];
  typedef uint32_t _g4_t_v18[4];
  typedef uint32_t _g4_t_v19[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v19)) > _g4_s2 ? (32u + sizeof(_g4_t_v19)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);

  v3 = sub_8F0680();
  if ( v3 != 0 )
  {
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230((int)(uintptr_t)(&dword_20D5240));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D5248 == 0 )
      v4 = (int *)(&dword_20D5240);
    LOBYTE(v3) = sub_9767E0((int)(uintptr_t)(v4));
    if ( (uint8_t)v3 == 0 )
    {
      if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
      {
        sub_976230((int)(uintptr_t)(&dword_20D5240));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
        __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      }
      v5 = nullptr;
      if ( byte_20D5248 == 0 )
        v5 = (int *)(&dword_20D5240);
      LOBYTE(v3) = sub_977850((int)(uintptr_t)(v5));
      if ( (uint8_t)v3 == 0 && *(uint8_t *)(a1 + 47) != 0 )
      {
        v6 = *(uint32_t *)(a2 + 4);
        v7 = 28;
        if ( v6 <= 7 )
        {
          if ( byte_20D6580 == 0 )
          {
            glf::Console::Println(
              (glf::Console::Self *)"%s(%d): %s - %s",
              "../../../../../lib/glf/include/glf/input/inputDevice.h",
              233,
              "operator[]",
              "idx >= mNum");
            byte_20D6580 = 1;
            v6 = *(uint32_t *)(a2 + 4);
          }
          v7 = 28;
          if ( v6 <= 6 )
            v7 = 4 * v6;
        }
        LOBYTE(v3) = glf::SimpleButton::IsUp((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + v7));
        if ( (uint8_t)v3 == 0 )
          goto LABEL_21;
        v9 = *(uint32_t *)(a2 + 4);
        v10 = 20;
        if ( v9 <= 5 )
        {
          if ( byte_20D6580 == 0 )
          {
            glf::Console::Println(
              (glf::Console::Self *)"%s(%d): %s - %s",
              "../../../../../lib/glf/include/glf/input/inputDevice.h",
              233,
              "operator[]",
              "idx >= mNum");
            byte_20D6580 = 1;
            v9 = *(uint32_t *)(a2 + 4);
          }
          v10 = 20;
          if ( v9 <= 4 )
            v10 = 4 * v9;
        }
        LOBYTE(v3) = glf::SimpleButton::IsUp((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + v10));
        if ( (uint8_t)v3 == 0 )
          goto LABEL_21;
        v11 = *(uint32_t *)(a2 + 4);
        v12 = 16;
        if ( v11 <= 4 )
        {
          if ( byte_20D6580 == 0 )
          {
            glf::Console::Println(
              (glf::Console::Self *)"%s(%d): %s - %s",
              "../../../../../lib/glf/include/glf/input/inputDevice.h",
              233,
              "operator[]",
              "idx >= mNum");
            byte_20D6580 = 1;
            v11 = *(uint32_t *)(a2 + 4);
          }
          v12 = 16;
          if ( v11 <= 3 )
            v12 = 4 * v11;
        }
        LOBYTE(v3) = glf::SimpleButton::IsUp((glf::SimpleButton::Self *)(*(uint32_t *)(a2 + 8) + v12));
        if ( (uint8_t)v3 != 0
          && (v13 = (glf::SimpleButton::Self *)sub_7EAAC0((unsigned int *)(a2 + 4), 6u),
              LOBYTE(v3) = glf::SimpleButton::IsUp(v13),
              (uint8_t)v3 != 0) )
        {
          *(uint8_t *)(a1 + 47) = 0;
          if ( a3 != 0 )
          {
            v19[1] = 10;
            v19[0] = (uint32_t)(uintptr_t)(&off_205B668);
            LOBYTE(v19[2]) = 0;
            v19[3] = 0;
            if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
            {
              sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
              __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
            }
            v14 = nullptr;
            if ( byte_20D54A8 == 0 )
              v14 = (int *)(&dword_20D54A0);
            LOBYTE(v3) = sub_A736A0(v14, (int)(uintptr_t)(v19));
          }
          else
          {
            v17[1] = 8;
            v17[0] = (uint32_t)(uintptr_t)(&off_205C558);
            v17[2] = 0;
            v17[3] = 0;
            if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
            {
              sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
              __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
            }
            v15 = nullptr;
            if ( byte_20D54A8 == 0 )
              v15 = (int *)(&dword_20D54A0);
            LOBYTE(v3) = sub_A736A0(v15, (int)(uintptr_t)(v17));
          }
        }
        else
        {
LABEL_21:
          if ( *(uint8_t *)(a1 + 47) != 0 && a3 != 0 )
          {
            v18[1] = 9;
            v18[0] = (uint32_t)(uintptr_t)(&off_205B680);
            LOBYTE(v18[2]) = 0;
            v18[3] = 0;
            if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
            {
              sub_A6BF60((int)(uintptr_t)(&dword_20D54A0));
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
              __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
            }
            v8 = nullptr;
            if ( byte_20D54A8 == 0 )
              v8 = (int *)(&dword_20D54A0);
            LOBYTE(v3) = sub_A736A0(v8, (int)(uintptr_t)(v18));
          }
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_C2A170  (binary VA: 0xc2a170)
// Original: sub_C2A170
// ----------------------------------------------------------------------------
void sub_C2A170(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (uint32_t *)a1[5];
  if ( v1 != a1 + 5 )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)*v1;
      opDelete(v1);
      if ( v2 == a1 + 5 )
        break;
      v1 = v2;
    }
  }
  v3 = (uint32_t *)a1[3];
  if ( v3 != a1 + 3 )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)*v3;
      opDelete(v3);
      if ( v4 == a1 + 3 )
        break;
      v3 = v4;
    }
  }
  v5 = (uint32_t *)a1[1];
  if ( v5 != a1 + 1 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)*v5;
      opDelete(v5);
      if ( v6 == a1 + 1 )
        break;
      v5 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2A200  (binary VA: 0xc2a200)
// Original: sub_C2A200
// ----------------------------------------------------------------------------
void sub_C2A200(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (uint32_t *)a1[5];
  if ( v1 != a1 + 5 )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)*v1;
      opDelete(v1);
      if ( v2 == a1 + 5 )
        break;
      v1 = v2;
    }
  }
  v3 = (uint32_t *)a1[3];
  if ( v3 != a1 + 3 )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)*v3;
      opDelete(v3);
      if ( v4 == a1 + 3 )
        break;
      v3 = v4;
    }
  }
  v5 = (uint32_t *)a1[1];
  if ( v5 != a1 + 1 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)*v5;
      opDelete(v5);
      if ( v6 == a1 + 1 )
        break;
      v5 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2A290  (binary VA: 0xc2a290)
// Original: sub_C2A290
// ----------------------------------------------------------------------------
void sub_C2A290(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (uint32_t *)a1[5];
  if ( v1 != a1 + 5 )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)*v1;
      opDelete(v1);
      if ( v2 == a1 + 5 )
        break;
      v1 = v2;
    }
  }
  v3 = (uint32_t *)a1[3];
  if ( v3 != a1 + 3 )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)*v3;
      opDelete(v3);
      if ( v4 == a1 + 3 )
        break;
      v3 = v4;
    }
  }
  v5 = (uint32_t *)a1[1];
  if ( v5 != a1 + 1 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)*v5;
      opDelete(v5);
      if ( v6 == a1 + 1 )
        break;
      v5 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2A320  (binary VA: 0xc2a320)
// Original: sub_C2A320
// ----------------------------------------------------------------------------
void sub_C2A320(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (uint32_t *)a1[5];
  if ( v1 != a1 + 5 )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)*v1;
      opDelete(v1);
      if ( v2 == a1 + 5 )
        break;
      v1 = v2;
    }
  }
  v3 = (uint32_t *)a1[3];
  if ( v3 != a1 + 3 )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)*v3;
      opDelete(v3);
      if ( v4 == a1 + 3 )
        break;
      v3 = v4;
    }
  }
  v5 = (uint32_t *)a1[1];
  if ( v5 != a1 + 1 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)*v5;
      opDelete(v5);
      if ( v6 == a1 + 1 )
        break;
      v5 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2A3B0  (binary VA: 0xc2a3b0)
// Original: sub_C2A3B0
// ----------------------------------------------------------------------------
void sub_C2A3B0(uint32_t *a1)
{
  void **v1;
  void **v2;
  void **v3;
  void **v4;
  void **v5;
  void **v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (void **)a1[5];
  if ( v1 != (void **)(uintptr_t)(a1 + 5) )
  {
    while ( 1 )
    {
      v2 = (void **)*v1;
      opDelete(v1);
      if ( v2 == (void **)(uintptr_t)(a1 + 5) )
        break;
      v1 = v2;
    }
  }
  v3 = (void **)a1[3];
  if ( v3 != (void **)(uintptr_t)(a1 + 3) )
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      opDelete(v3);
      if ( v4 == (void **)(uintptr_t)(a1 + 3) )
        break;
      v3 = v4;
    }
  }
  v5 = (void **)a1[1];
  if ( v5 != (void **)(uintptr_t)(a1 + 1) )
  {
    while ( 1 )
    {
      v6 = (void **)*v5;
      opDelete(v5);
      if ( v6 == (void **)(uintptr_t)(a1 + 1) )
        break;
      v5 = v6;
    }
  }
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2A450  (binary VA: 0xc2a450)
// Original: sub_C2A450
// ----------------------------------------------------------------------------
void sub_C2A450(uint32_t *a1)
{
  void **v1;
  void **v2;
  void **v3;
  void **v4;
  void **v5;
  void **v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (void **)a1[5];
  if ( v1 != (void **)(uintptr_t)(a1 + 5) )
  {
    while ( 1 )
    {
      v2 = (void **)*v1;
      opDelete(v1);
      if ( v2 == (void **)(uintptr_t)(a1 + 5) )
        break;
      v1 = v2;
    }
  }
  v3 = (void **)a1[3];
  if ( v3 != (void **)(uintptr_t)(a1 + 3) )
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      opDelete(v3);
      if ( v4 == (void **)(uintptr_t)(a1 + 3) )
        break;
      v3 = v4;
    }
  }
  v5 = (void **)a1[1];
  if ( v5 != (void **)(uintptr_t)(a1 + 1) )
  {
    while ( 1 )
    {
      v6 = (void **)*v5;
      opDelete(v5);
      if ( v6 == (void **)(uintptr_t)(a1 + 1) )
        break;
      v5 = v6;
    }
  }
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2A4F0  (binary VA: 0xc2a4f0)
// Original: sub_C2A4F0
// ----------------------------------------------------------------------------
void sub_C2A4F0(uint32_t *a1)
{
  void **v1;
  void **v2;
  void **v3;
  void **v4;
  void **v5;
  void **v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (void **)a1[5];
  if ( v1 != (void **)(uintptr_t)(a1 + 5) )
  {
    while ( 1 )
    {
      v2 = (void **)*v1;
      opDelete(v1);
      if ( v2 == (void **)(uintptr_t)(a1 + 5) )
        break;
      v1 = v2;
    }
  }
  v3 = (void **)a1[3];
  if ( v3 != (void **)(uintptr_t)(a1 + 3) )
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      opDelete(v3);
      if ( v4 == (void **)(uintptr_t)(a1 + 3) )
        break;
      v3 = v4;
    }
  }
  v5 = (void **)a1[1];
  if ( v5 != (void **)(uintptr_t)(a1 + 1) )
  {
    while ( 1 )
    {
      v6 = (void **)*v5;
      opDelete(v5);
      if ( v6 == (void **)(uintptr_t)(a1 + 1) )
        break;
      v5 = v6;
    }
  }
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2A590  (binary VA: 0xc2a590)
// Original: sub_C2A590
// ----------------------------------------------------------------------------
void sub_C2A590(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (uint32_t *)a1[5];
  if ( v1 != a1 + 5 )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)*v1;
      opDelete(v1);
      if ( v2 == a1 + 5 )
        break;
      v1 = v2;
    }
  }
  v3 = (uint32_t *)a1[3];
  if ( v3 != a1 + 3 )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)*v3;
      opDelete(v3);
      if ( v4 == a1 + 3 )
        break;
      v3 = v4;
    }
  }
  v5 = (uint32_t *)a1[1];
  if ( v5 != a1 + 1 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)*v5;
      opDelete(v5);
      if ( v6 == a1 + 1 )
        break;
      v5 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2A620  (binary VA: 0xc2a620)
// Original: sub_C2A620
// ----------------------------------------------------------------------------
void sub_C2A620(uint32_t *a1)
{
  void **v1;
  void **v2;
  void **v3;
  void **v4;
  void **v5;
  void **v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206BA08);
  gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)(a1 + 13));
  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (void **)a1[5];
  if ( v1 != (void **)(uintptr_t)(a1 + 5) )
  {
    while ( 1 )
    {
      v2 = (void **)*v1;
      opDelete(v1);
      if ( v2 == (void **)(uintptr_t)(a1 + 5) )
        break;
      v1 = v2;
    }
  }
  v3 = (void **)a1[3];
  if ( v3 != (void **)(uintptr_t)(a1 + 3) )
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      opDelete(v3);
      if ( v4 == (void **)(uintptr_t)(a1 + 3) )
        break;
      v3 = v4;
    }
  }
  v5 = (void **)a1[1];
  if ( v5 != (void **)(uintptr_t)(a1 + 1) )
  {
    while ( 1 )
    {
      v6 = (void **)*v5;
      opDelete(v5);
      if ( v6 == (void **)(uintptr_t)(a1 + 1) )
        break;
      v5 = v6;
    }
  }
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2A6D0  (binary VA: 0xc2a6d0)
// Original: sub_C2A6D0
// ----------------------------------------------------------------------------
void sub_C2A6D0(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206BA08);
  gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)(a1 + 13));
  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (uint32_t *)a1[5];
  if ( v1 != a1 + 5 )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)*v1;
      opDelete(v1);
      if ( v2 == a1 + 5 )
        break;
      v1 = v2;
    }
  }
  v3 = (uint32_t *)a1[3];
  if ( v3 != a1 + 3 )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)*v3;
      opDelete(v3);
      if ( v4 == a1 + 3 )
        break;
      v3 = v4;
    }
  }
  v5 = (uint32_t *)a1[1];
  if ( v5 != a1 + 1 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)*v5;
      opDelete(v5);
      if ( v6 == a1 + 1 )
        break;
      v5 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2A770  (binary VA: 0xc2a770)
// Original: sub_C2A770
// ----------------------------------------------------------------------------
void sub_C2A770(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (uint32_t *)a1[5];
  if ( v1 != a1 + 5 )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)*v1;
      opDelete(v1);
      if ( v2 == a1 + 5 )
        break;
      v1 = v2;
    }
  }
  v3 = (uint32_t *)a1[3];
  if ( v3 != a1 + 3 )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)*v3;
      opDelete(v3);
      if ( v4 == a1 + 3 )
        break;
      v3 = v4;
    }
  }
  v5 = (uint32_t *)a1[1];
  if ( v5 != a1 + 1 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)*v5;
      opDelete(v5);
      if ( v6 == a1 + 1 )
        break;
      v5 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2A800  (binary VA: 0xc2a800)
// Original: sub_C2A800
// ----------------------------------------------------------------------------
void sub_C2A800(uint32_t *a1)
{
  void **v1;
  void **v2;
  void **v3;
  void **v4;
  void **v5;
  void **v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (void **)a1[5];
  if ( v1 != (void **)(uintptr_t)(a1 + 5) )
  {
    while ( 1 )
    {
      v2 = (void **)*v1;
      opDelete(v1);
      if ( v2 == (void **)(uintptr_t)(a1 + 5) )
        break;
      v1 = v2;
    }
  }
  v3 = (void **)a1[3];
  if ( v3 != (void **)(uintptr_t)(a1 + 3) )
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      opDelete(v3);
      if ( v4 == (void **)(uintptr_t)(a1 + 3) )
        break;
      v3 = v4;
    }
  }
  v5 = (void **)a1[1];
  if ( v5 != (void **)(uintptr_t)(a1 + 1) )
  {
    while ( 1 )
    {
      v6 = (void **)*v5;
      opDelete(v5);
      if ( v6 == (void **)(uintptr_t)(a1 + 1) )
        break;
      v5 = v6;
    }
  }
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2A8A0  (binary VA: 0xc2a8a0)
// Original: sub_C2A8A0
// ----------------------------------------------------------------------------
void sub_C2A8A0(uint32_t *a1)
{
  void **v1;
  void **v2;
  void **v3;
  void **v4;
  void **v5;
  void **v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (void **)a1[5];
  if ( v1 != (void **)(uintptr_t)(a1 + 5) )
  {
    while ( 1 )
    {
      v2 = (void **)*v1;
      opDelete(v1);
      if ( v2 == (void **)(uintptr_t)(a1 + 5) )
        break;
      v1 = v2;
    }
  }
  v3 = (void **)a1[3];
  if ( v3 != (void **)(uintptr_t)(a1 + 3) )
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      opDelete(v3);
      if ( v4 == (void **)(uintptr_t)(a1 + 3) )
        break;
      v3 = v4;
    }
  }
  v5 = (void **)a1[1];
  if ( v5 != (void **)(uintptr_t)(a1 + 1) )
  {
    while ( 1 )
    {
      v6 = (void **)*v5;
      opDelete(v5);
      if ( v6 == (void **)(uintptr_t)(a1 + 1) )
        break;
      v5 = v6;
    }
  }
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2A940  (binary VA: 0xc2a940)
// Original: sub_C2A940
// ----------------------------------------------------------------------------
void sub_C2A940(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (uint32_t *)a1[5];
  if ( v1 != a1 + 5 )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)*v1;
      opDelete(v1);
      if ( v2 == a1 + 5 )
        break;
      v1 = v2;
    }
  }
  v3 = (uint32_t *)a1[3];
  if ( v3 != a1 + 3 )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)*v3;
      opDelete(v3);
      if ( v4 == a1 + 3 )
        break;
      v3 = v4;
    }
  }
  v5 = (uint32_t *)a1[1];
  if ( v5 != a1 + 1 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)*v5;
      opDelete(v5);
      if ( v6 == a1 + 1 )
        break;
      v5 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2A9D0  (binary VA: 0xc2a9d0)
// Original: sub_C2A9D0
// ----------------------------------------------------------------------------
void sub_C2A9D0(uint32_t *a1)
{
  void **v1;
  void **v2;
  void **v3;
  void **v4;
  void **v5;
  void **v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (void **)a1[5];
  if ( v1 != (void **)(uintptr_t)(a1 + 5) )
  {
    while ( 1 )
    {
      v2 = (void **)*v1;
      opDelete(v1);
      if ( v2 == (void **)(uintptr_t)(a1 + 5) )
        break;
      v1 = v2;
    }
  }
  v3 = (void **)a1[3];
  if ( v3 != (void **)(uintptr_t)(a1 + 3) )
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      opDelete(v3);
      if ( v4 == (void **)(uintptr_t)(a1 + 3) )
        break;
      v3 = v4;
    }
  }
  v5 = (void **)a1[1];
  if ( v5 != (void **)(uintptr_t)(a1 + 1) )
  {
    while ( 1 )
    {
      v6 = (void **)*v5;
      opDelete(v5);
      if ( v6 == (void **)(uintptr_t)(a1 + 1) )
        break;
      v5 = v6;
    }
  }
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2AA70  (binary VA: 0xc2aa70)
// Original: sub_C2AA70
// ----------------------------------------------------------------------------
void sub_C2AA70(uint32_t *a1)
{
  void **v1;
  void **v2;
  void **v3;
  void **v4;
  void **v5;
  void **v6;

  *a1 = (uint32_t)(uintptr_t)(&off_206B848);
  v1 = (void **)a1[5];
  if ( v1 != (void **)(uintptr_t)(a1 + 5) )
  {
    while ( 1 )
    {
      v2 = (void **)*v1;
      opDelete(v1);
      if ( v2 == (void **)(uintptr_t)(a1 + 5) )
        break;
      v1 = v2;
    }
  }
  v3 = (void **)a1[3];
  if ( v3 != (void **)(uintptr_t)(a1 + 3) )
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      opDelete(v3);
      if ( v4 == (void **)(uintptr_t)(a1 + 3) )
        break;
      v3 = v4;
    }
  }
  v5 = (void **)a1[1];
  if ( v5 != (void **)(uintptr_t)(a1 + 1) )
  {
    while ( 1 )
    {
      v6 = (void **)*v5;
      opDelete(v5);
      if ( v6 == (void **)(uintptr_t)(a1 + 1) )
        break;
      v5 = v6;
    }
  }
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2AB10  (binary VA: 0xc2ab10)
// Original: sub_C2AB10
// ----------------------------------------------------------------------------
int sub_C2AB10(unsigned int *a1, unsigned int a2)
{
  unsigned int v2;

  v2 = *a1;
  if ( *a1 <= a2 && byte_20DEA35 == 0 )
  {
    glf::Console::Println(
      (glf::Console::Self *)"%s(%d): %s - %s",
      "../../../../../lib/glf/include/glf/input/inputDevice.h",
      233,
      "operator[]",
      "idx >= mNum");
    byte_20DEA35 = 1;
    v2 = *a1;
  }
  if ( v2 > a2 )
    v2 = a2;
  return a1[1] + 8 * v2;
}


