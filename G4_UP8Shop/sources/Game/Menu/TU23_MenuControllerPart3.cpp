#include "Core/Utils/DecompTypes.h"
#include "TU23_MenuControllerPart3.h"

// ----------------------------------------------------------------------------
// Function: sub_BE0250  (binary VA: 0xbe0250)
// Original: sub_BE0250
// ----------------------------------------------------------------------------
int sub_BE0250()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE658);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE658, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE65C), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE65C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE660), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE660, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE664), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE664, &unk_20D1280);
  dword_20DE668 = 1056964608;
  dword_20DE66C = 1056964608;
  dword_20DE670 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_BE0350  (binary VA: 0xbe0350)
// Original: sub_BE0350
// ----------------------------------------------------------------------------
int sub_BE0350(int a1, unsigned int a2)
{
  int v3;
  uint32_t *v4;
  int v5;
  typedef uint8_t _g4_t_v7[36];
  typedef uint8_t _g4_t_v8[48];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v8)) > _g4_s1 ? (44u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);

  v3 = sub_732CE0();
  v4 = (uint32_t *)sub_733A60(v3, a2);
  v5 = 0;
  if ( v4 != nullptr && *v4 != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v8, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v7);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v8);
    if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v7) != 0 )
    {
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v7);
      return 1;
    }
    else
    {
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v7);
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_BE0440  (binary VA: 0xbe0440)
// Original: sub_BE0440
// ----------------------------------------------------------------------------
void sub_BE0440(int a1, const char **a2, unsigned int a3, char a4)
{
  int v5;
  uint32_t *v6;
  gameswf::RenderFX::Self *Player;
  gameswf::Root::Self *Root;
  int Character;
  int v10;
  float v11; // xmm0_4
  const char *v12;
  glf::InputManager::Self *InputMgr;
  int Gamepad;
  typedef glf::Self *_g4_t_v15;
  typedef float _g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef uint32_t _g4_t_v27[2];
  typedef uint8_t _g4_t_v28[36];
  typedef uint8_t _g4_t_v29[48];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v16)) > _g4_s1 ? (44u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v17)) > _g4_s2 ? (44u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v18)) > _g4_s3 ? (44u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v19)) > _g4_s4 ? (44u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v21)) > _g4_s5 ? (80u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v22)) > _g4_s6 ? (80u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v23)) > _g4_s7 ? (80u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v24)) > _g4_s8 ? (84u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v25)) > _g4_s9 ? (84u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v26)) > _g4_s10 ? (92u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v27)) > _g4_s11 ? (96u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v28)) > _g4_s12 ? (104u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (140u + sizeof(_g4_t_v29)) > _g4_s13 ? (140u + sizeof(_g4_t_v29)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 104u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 140u);

  v5 = sub_732CE0();
  v6 = (uint32_t *)sub_733A60(v5, a3);
  if ( v6 != nullptr && *v6 != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v29, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v28);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v29);
    if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v28) != 0 )
    {
      gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)v27);
      Player = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v28);
      Root = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(Player);
      gameswf::Root::logicalToScreen(Root, (gameswf::Point::Self *)v27);
      v21 = *(float *)v27;
      Character = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v28);
      v24 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)Character + 292))(Character);
      v25 = (float)(0.5 * v24) + v21;
      v26 = *(float *)&v27[1];
      v10 = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v28);
      v22 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v10 + 288))(v10);
      v23 = (float)(0.5 * v22) + v26;
      v11 = 0.0;
      if ( g4_std::string::compare(a1 + 12, "menu_pawn_shop") == 0 )
      {
        v15 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v28);
        v19 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v15 + 292))();
        v11 = v19 * 0.5;
      }
      v12 = *a2;
      if ( strcmp(*a2, "mc_items_list.mc_btn_dec") == 0 )
      {
        v15 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v28);
        v18 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v15 + 292))();
        v12 = *a2;
        v11 = v18 * 0.7;
      }
      if ( strcmp(v12, "mc_pages_navigator.btn_prev") == 0 )
      {
        v15 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v28);
        v17 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v15 + 292))();
        v12 = *a2;
        v11 = v17 * 0.7;
      }
      if ( strcmp(v12, "controls_schemes_list.mc_btn_dec") == 0 )
      {
        v15 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v28);
        v16 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v15 + 292))();
        v11 = v16;
      }
      InputMgr = (glf::InputManager::Self *)glf::GetInputMgr(v15);
      Gamepad = glf::InputManager::GetGamepad(InputMgr, 0);
      if ( a4 != 0 )
        glf::Gamepad::RaiseTouchEvent(Gamepad, 0, 216, 4, (float)((int)v25 - (int)v11), (float)(int)v23, 1);
      else
        glf::Gamepad::RaiseTouchEvent(Gamepad, 0, 218, 4, (float)((int)v25 - (int)v11), (float)(int)v23, 1);
    }
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v28);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_BE07F0  (binary VA: 0xbe07f0)
// Original: sub_BE07F0
// ----------------------------------------------------------------------------
char * sub_BE07F0(int a1, uint32_t *a2)
{
  uint32_t *src;
  int v4;
  char *result;
  unsigned int v6;
  size_t v7;
  char *v8;
  int v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  char *v14;
  int v16;
  int v17;
  int v18;
  char *v19;
  char *dest;

  src = *(uint32_t **)(a1 + 4);
  if ( src == *(uint32_t **)(a1 + 8) )
  {
    v6 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    v7 = 4;
    if ( v6 != 0 )
    {
      v7 = 0xFFFFFFFC;
      if ( v6 <= 2 * v6 && 2 * v6 <= 0x3FFFFFFF )
        v7 = 8 * v6;
    }
    v18 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    dest = (char *)opNew(v7);
    v8 = &dest[4 * v18];
    if ( v8 != nullptr )
      *(uint32_t *)v8 = *a2;
    v9 = 0;
    v10 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    if ( v10 != 0 )
    {
      v17 = 4 * v10;
      memmove(dest, *(const void **)a1, 4 * v10);
      v9 = v17;
    }
    v11 = &dest[v9 + 4];
    v12 = 0;
    v13 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(src)) >> 2;
    if ( v13 != 0 )
    {
      v16 = 4 * v13;
      v19 = v11;
      memmove(v11, src, 4 * v13);
      v11 = v19;
      v12 = v16;
    }
    v14 = &v11[v12];
    if ( *(uint32_t *)a1 != 0 )
      opDelete(*(void **)a1);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v14);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(dest);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&dest[v7]);
    return dest;
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *src = *a2;
      v4 = *(uint32_t *)(a1 + 4);
    }
    result = (char *)(v4 + 4);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BE0950  (binary VA: 0xbe0950)
// Original: sub_BE0950
// ----------------------------------------------------------------------------
void sub_BE0950(unsigned int **a1, unsigned int *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int *v5;
  unsigned int *v6;
  unsigned int v7;
  int v8;
  char *v9;
  unsigned int **v10;
  unsigned int *v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  char *v15;
  size_t v16;
  unsigned int *v17;
  unsigned int *v18;
  unsigned int *v19;
  bool v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  unsigned int v25;
  uint8_t *v26;
  unsigned int v27;
  size_t v28;
  size_t v29;
  unsigned int *v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  size_t v34;
  int v35;
  uint32_t *v36;
  unsigned int v37;
  char *v38;
  int v39;
  int v40;
  int v41;
  uint32_t *v42;
  unsigned int *v43;
  char *v44;
  int v45;
  int v46;
  unsigned int *v47;
  char *v48;
  int v49;
  int v50;
  void **v51;
  unsigned int v52;
  typedef unsigned int *_g4_t_v53;
  typedef unsigned int *_g4_t_v54;
  typedef unsigned int *_g4_t_v55;
  typedef unsigned int *_g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef unsigned int *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef char *_g4_t_v60;
  typedef char *_g4_t_v61;
  typedef void *_g4_t_v62;
  typedef const void *_g4_t_v63;
  typedef char *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v68;
  typedef char *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef const void *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef char *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v76;
  typedef uint8_t *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef unsigned int *_g4_t_v81;
  typedef char *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef const void *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef size_t _g4_t_v87;
  typedef char *_g4_t_v88;
  typedef char *_g4_t_v89;
  typedef unsigned int *_g4_t_v90;
  typedef char *_g4_t_v91;
  typedef char *_g4_t_v92;
  typedef char *_g4_t_v93;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v53)) > _g4_s0 ? (0u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v54)) > _g4_s1 ? (8u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v55)) > _g4_s2 ? (8u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v56)) > _g4_s3 ? (8u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v57)) > _g4_s4 ? (8u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v58)) > _g4_s5 ? (8u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v59)) > _g4_s6 ? (8u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v60)) > _g4_s7 ? (8u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v61)) > _g4_s8 ? (8u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v62)) > _g4_s9 ? (8u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v63)) > _g4_s10 ? (12u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v64)) > _g4_s11 ? (12u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v65)) > _g4_s12 ? (12u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v66)) > _g4_s13 ? (12u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v68)) > _g4_s14 ? (24u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v69)) > _g4_s15 ? (28u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v70)) > _g4_s16 ? (28u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v71)) > _g4_s17 ? (32u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v72)) > _g4_s18 ? (32u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v73)) > _g4_s19 ? (32u + sizeof(_g4_t_v73)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v74)) > _g4_s20 ? (32u + sizeof(_g4_t_v74)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v76)) > _g4_s21 ? (36u + sizeof(_g4_t_v76)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v77)) > _g4_s22 ? (36u + sizeof(_g4_t_v77)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v78)) > _g4_s23 ? (36u + sizeof(_g4_t_v78)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v79)) > _g4_s24 ? (40u + sizeof(_g4_t_v79)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v80)) > _g4_s25 ? (40u + sizeof(_g4_t_v80)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v81)) > _g4_s26 ? (40u + sizeof(_g4_t_v81)) : _g4_s26,
    _g4_s28 = (40u + sizeof(_g4_t_v82)) > _g4_s27 ? (40u + sizeof(_g4_t_v82)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v83)) > _g4_s28 ? (40u + sizeof(_g4_t_v83)) : _g4_s28,
    _g4_s30 = (40u + sizeof(_g4_t_v84)) > _g4_s29 ? (40u + sizeof(_g4_t_v84)) : _g4_s29,
    _g4_s31 = (40u + sizeof(_g4_t_v85)) > _g4_s30 ? (40u + sizeof(_g4_t_v85)) : _g4_s30,
    _g4_s32 = (40u + sizeof(_g4_t_v86)) > _g4_s31 ? (40u + sizeof(_g4_t_v86)) : _g4_s31,
    _g4_s33 = (44u + sizeof(_g4_t_v87)) > _g4_s32 ? (44u + sizeof(_g4_t_v87)) : _g4_s32,
    _g4_s34 = (44u + sizeof(_g4_t_v88)) > _g4_s33 ? (44u + sizeof(_g4_t_v88)) : _g4_s33,
    _g4_s35 = (44u + sizeof(_g4_t_v89)) > _g4_s34 ? (44u + sizeof(_g4_t_v89)) : _g4_s34,
    _g4_s36 = (44u + sizeof(_g4_t_v90)) > _g4_s35 ? (44u + sizeof(_g4_t_v90)) : _g4_s35,
    _g4_s37 = (48u + sizeof(_g4_t_v91)) > _g4_s36 ? (48u + sizeof(_g4_t_v91)) : _g4_s36,
    _g4_s38 = (52u + sizeof(_g4_t_v92)) > _g4_s37 ? (52u + sizeof(_g4_t_v92)) : _g4_s37,
    _g4_s39 = (56u + sizeof(_g4_t_v93)) > _g4_s38 ? (56u + sizeof(_g4_t_v93)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 0u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 8u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 32u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 32u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 36u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 36u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 36u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 40u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 40u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 40u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 40u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 40u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 40u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 40u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 44u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 44u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 44u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 44u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 48u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 52u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 56u);

  v4 = a1[1];
  v5 = a4;
  v6 = a2;
  if ( v4 != a1[2] )
  {
    if ( v4 != nullptr )
    {
      v71 = (const void *)*(v4 - 3);
      v7 = (int)(*(v4 - 2) - (uint32_t)(uintptr_t)(v71)) >> 2;
      *v4 = 0;
      v8 = v7;
      v4[1] = 0;
      v4[2] = 0;
      if ( v7 != 0 )
      {
        if ( v7 > 0x3FFFFFFF )
          goto LABEL_105;
        v79 = 4 * v7;
        v9 = (char *)opNew(4 * v7);
        v71 = (const void *)*(v4 - 3);
        v5 = a4;
        v8 = (int)(*(v4 - 2) - (uint32_t)(uintptr_t)(v71)) >> 2;
        v87 = 4 * v8;
      }
      else
      {
        v87 = 0;
        v79 = 0;
        v9 = nullptr;
      }
      *v4 = (unsigned int)(uintptr_t)(v9);
      v4[1] = (unsigned int)(uintptr_t)(v9);
      v4[2] = (unsigned int)(uintptr_t)(&v9[v79]);
      if ( v8 != 0 )
      {
        v56 = v5;
        memmove(v9, v71, v87);
        v5 = v56;
      }
      v4[1] = (unsigned int)(uintptr_t)(&v9[v87]);
      v10 = a1;
      v11 = a1[1];
    }
    else
    {
      v11 = nullptr;
      v10 = a1;
    }
    v91 = nullptr;
    v10[1] = v11 + 3;
    a3 = *v5;
    v12 = v5[1];
    v92 = nullptr;
    v93 = nullptr;
    v13 = (int)(v12 - a3) >> 2;
    v14 = v13;
    if ( v13 != 0 )
    {
      if ( v13 > 0x3FFFFFFF )
        goto LABEL_105;
      v54 = v5;
      v80 = 4 * v13;
      v15 = (char *)opNew(4 * v13);
      a3 = *v54;
      v14 = (int)(v54[1] - *v54) >> 2;
      v16 = 4 * v14;
    }
    else
    {
      v16 = 0;
      v80 = 0;
      v15 = nullptr;
    }
    v91 = v15;
    v92 = v15;
    v93 = &v15[v80];
    if ( v14 != 0 )
      memmove(v15, (const void *)a3, v16);
    v92 = &v15[v16];
    v81 = a1[1];
    v76 = -1431655765 * (v81 - 6 - a2);
    if ( v76 > 0 )
    {
      v17 = v81 - 3;
      v53 = v81 - 8;
      do
      {
        v17 -= 3;
        a3 = *(v17 - 3);
        v5 = (unsigned int *)*v17;
        v21 = (int)(*(v17 - 2) - a3) >> 2;
        if ( v21 > (int)(v17[2] - *v17) >> 2 )
        {
          if ( v21 != 0 )
          {
            if ( v21 > 0x3FFFFFFF )
              goto LABEL_105;
            v63 = (const void *)*(v17 - 3);
            v70 = 4 * v21;
            v73 = (char *)opNew(4 * v21);
            memmove(v73, v63, 4 * v21);
          }
          else
          {
            v70 = 0;
            v73 = nullptr;
          }
          v24 = (char *)v17 - (char *)v81;
          v18 = v81 - 6;
          if ( *v17 != 0 )
          {
            opDelete((void *)*v17);
            v18 = v81 - 6;
            v24 = (char *)v17 - (char *)v81;
          }
          v19 = (unsigned int *)&v73[v70];
          *(unsigned int *)((char *)v18 + v24 + 24) = (unsigned int)(uintptr_t)(v73);
          *(unsigned int *)((char *)v18 + v24 + 32) = (unsigned int)(uintptr_t)(&v73[v70]);
        }
        else
        {
          v22 = (int)(v17[1] - (uint32_t)(uintptr_t)(v5)) >> 2;
          if ( v21 <= v22 )
          {
            if ( v21 != 0 )
            {
              v28 = 4 * v21;
              memmove((void *)*v17, (const void *)a3, v28);
              v18 = v81 - 6;
              v19 = (unsigned int *)(*v17 + v28);
            }
            else
            {
              v18 = v81 - 6;
              v19 = (unsigned int *)*v17;
            }
          }
          else
          {
            v72 = (char *)v17 - (char *)v81;
            v18 = v81 - 6;
            v69 = (char *)*(v53 - 1);
            v88 = &v69[4 * v22];
            if ( v22 != 0 )
            {
              memmove((void *)*v17, v69, 4 * v22);
              v18 = v81 - 6;
              v88 = (char *)(*(v53 - 1) + ((v17[1] - *v17) & 0xFFFFFFFC));
            }
            v23 = (int)(*v53 - (uint32_t)(uintptr_t)(v88)) >> 2;
            if ( v23 != 0 )
            {
              v55 = v18;
              memmove(*(void **)((char *)v18 + v72 + 28), v88, 4 * v23);
              v18 = v55;
              v19 = (unsigned int *)(*(unsigned int *)((char *)v55 + v72 + 24) + 4 * v21);
            }
            else
            {
              v19 = (unsigned int *)(*(unsigned int *)((char *)v18 + v72 + 24) + 4 * v21);
            }
          }
        }
        v53 -= 3;
        v20 = v76-- == 1;
        *(unsigned int *)((char *)v18  + ((uintptr_t)((char *)v17) - (uintptr_t)(char *)(v81)) + 28) = (unsigned int)(uintptr_t)(v19);
      }
      while ( !v20 );
      v15 = v91;
    }
    if ( a2 == (unsigned int *)&v91 )
      goto LABEL_38;
    v5 = a2;
    v89 = v92;
    v25 = (v92 - v15) >> 2;
    v26 = (uint8_t *)*a2;
    a3 = (int)(a2[2] - *a2) >> 2;
    if ( v25 <= a3 )
    {
      v77 = (uint8_t *)a2[1];
      v27 = (v77 - v26) >> 2;
      if ( v25 > v27 )
      {
        v82 = &v15[4 * v27];
        if ( v27 != 0 )
        {
          memmove(v26, v15, 4 * v27);
          v77 = (uint8_t *)a2[1];
          v26 = (uint8_t *)*a2;
          v82 = &v15[(unsigned int)(uintptr_t)(&v77[-*a2]) & 0xFFFFFFFC];
        }
        if ( (v89 - v82) >> 2 == 0 )
        {
          a2[1] = (unsigned int)(uintptr_t)(&v26[4 * v25]);
LABEL_38:
          if ( v15 != nullptr )
            opDelete(v15);
          return;
        }
        memmove(v77, v82, 4 * ((v89 - v82) >> 2));
        v26 = (uint8_t *)(*a2 + 4 * v25);
      }
      else if ( v25 != 0 )
      {
        v29 = 4 * v25;
        memmove(v26, v15, v29);
        v26 = (uint8_t *)(v29 + *a2);
      }
      a2[1] = (unsigned int)(uintptr_t)(v26);
      goto LABEL_38;
    }
    if ( v25 == 0 )
    {
      v78 = 0;
      v52 = 0;
      goto LABEL_52;
    }
    if ( v25 <= 0x3FFFFFFF )
    {
      v78 = 4 * v25;
      v62 = (void *)opNew(4 * v25);
      memmove(v62, v15, 4 * v25);
      v52 = (unsigned int)(uintptr_t)(v62);
LABEL_52:
      if ( *a2 != 0 )
      {
        v57 = v52;
        opDelete((void *)*a2);
        v52 = v57;
      }
      *a2 = v52;
      a2[2] = v52 + v78;
      a2[1] = v52 + v78;
      goto LABEL_38;
    }
LABEL_105:
    sub_18FFEE0(a3, v5);
  }
  v30 = *a1;
  v31 = -1431655765 * (v4 - v30);
  if ( v31 == 0 )
  {
    v32 = 1;
    v35 = -1431655765 * (a2 - v30);
    goto LABEL_101;
  }
  v32 = 2 * v31;
  if ( v31 > 2 * v31 || v32 > 0x15555555 )
  {
    v68 = 357913941;
    v33 = (char *)a2 - (char *)v30;
    v34 = 0xFFFFFFFC;
    v35 = -1431655765 * (v33 >> 2);
LABEL_59:
    v74 = opNew(v34);
    v5 = a4;
    a3 = v74;
    goto LABEL_60;
  }
  v35 = -1431655765 * (a2 - v30);
  if ( v32 != 0 )
  {
LABEL_101:
    v34 = 12 * v32;
    v68 = v32;
    goto LABEL_59;
  }
  v74 = 0;
  v68 = 0;
  a3 = 0;
LABEL_60:
  v36 = (uint32_t *)(a3 + 12 * v35);
  if ( v36 != nullptr )
  {
    v37 = (int)(v5[1] - *v5) >> 2;
    *v36 = 0;
    v36[1] = 0;
    v36[2] = 0;
    if ( v37 != 0 )
    {
      if ( v37 > 0x3FFFFFFF )
        goto LABEL_105;
      v58 = v5;
      v83 = 4 * v37;
      v38 = (char *)opNew(4 * v37);
      v5 = v58;
    }
    else
    {
      v83 = 0;
      v38 = nullptr;
    }
    *v36 = (uint32_t)(uintptr_t)(v38);
    v36[1] = (uint32_t)(uintptr_t)(v38);
    v36[2] = (uint32_t)(uintptr_t)(&v38[v83]);
    v84 = (const void *)*v5;
    v39 = v5[1] - *v5;
    v40 = 0;
    v41 = v39 >> 2;
    if ( v41 != 0 )
    {
      v59 = 4 * v41;
      v64 = v38;
      memmove(v38, v84, 4 * v41);
      v38 = v64;
      v40 = v59;
    }
    v36[1] = (uint32_t)(uintptr_t)(&v38[v40]);
  }
  v42 = (uint32_t *)v74;
  v5 = *a1;
  if ( a2 != *a1 )
  {
    v43 = *a1;
    do
    {
      if ( v42 != nullptr )
      {
        a3 = (int)(v43[1] - *v43) >> 2;
        *v42 = 0;
        v42[1] = 0;
        v42[2] = 0;
        if ( a3 != 0 )
        {
          if ( a3 > 0x3FFFFFFF )
            goto LABEL_105;
          v65 = 4 * a3;
          v44 = (char *)opNew(4 * a3);
          v45 = v65;
        }
        else
        {
          v45 = 0;
          v44 = nullptr;
        }
        *v42 = (uint32_t)(uintptr_t)(v44);
        v42[1] = (uint32_t)(uintptr_t)(v44);
        v42[2] = (uint32_t)(uintptr_t)(&v44[v45]);
        v85 = 0;
        v46 = (int)(v43[1] - *v43) >> 2;
        if ( v46 != 0 )
        {
          v60 = v44;
          v85 = 4 * v46;
          memmove(v44, (const void *)*v43, 4 * v46);
          v44 = v60;
        }
        v5 = (unsigned int *)&v44[v85];
        v42[1] = (uint32_t)(uintptr_t)(v5);
      }
      v43 += 3;
      v42 += 3;
    }
    while ( a2 != v43 );
    v6 = a2;
  }
  v47 = v42 + 3;
  v90 = a1[1];
  if ( a2 != v90 )
  {
    do
    {
      if ( v47 != nullptr )
      {
        a3 = (int)(v6[1] - *v6) >> 2;
        *v47 = 0;
        v47[1] = 0;
        v47[2] = 0;
        if ( a3 != 0 )
        {
          if ( a3 > 0x3FFFFFFF )
            goto LABEL_105;
          v66 = 4 * a3;
          v48 = (char *)opNew(4 * a3);
          v49 = v66;
        }
        else
        {
          v49 = 0;
          v48 = nullptr;
        }
        *v47 = (unsigned int)(uintptr_t)(v48);
        v47[1] = (unsigned int)(uintptr_t)(v48);
        v47[2] = (unsigned int)(uintptr_t)(&v48[v49]);
        v86 = 0;
        v50 = (int)(v6[1] - *v6) >> 2;
        if ( v50 != 0 )
        {
          v61 = v48;
          v86 = 4 * v50;
          memmove(v48, (const void *)*v6, 4 * v50);
          v48 = v61;
        }
        v5 = (unsigned int *)&v48[v86];
        v47[1] = (unsigned int)(uintptr_t)(v5);
      }
      v6 += 3;
      v47 += 3;
    }
    while ( v90 != v6 );
    v90 = a1[1];
  }
  v51 = (void **)*a1;
  if ( *a1 != v90 )
  {
    do
    {
      if ( *v51 != nullptr )
        opDelete(*v51);
      v51 += 3;
    }
    while ( v51 != (void **)v90 );
    v51 = (void **)*a1;
  }
  if ( v51 != nullptr )
    opDelete(v51);
  *a1 = (unsigned int *)v74;
  a1[1] = v47;
  a1[2] = (unsigned int *)(v74 + 12 * v68);
}

// ----------------------------------------------------------------------------
// Function: sub_BE12A0  (binary VA: 0xbe12a0)
// Original: sub_BE12A0
// ----------------------------------------------------------------------------
int sub_BE12A0(int a1)
{
  int v1;
  int v2;
  gameswf::CharacterHandle::Self *v3;
  int v4;
  char v5;
  int v6;
  gameswf::Self *v7;
  char *v8;
  gameswf::Self *v9;
  int v10;
  unsigned int v11;
  int result;
  char v13;
  int v14;
  int v15;
  int v16;
  int v17;
  typedef const char *_g4_t_v18;
  typedef gameswf::CharacterHandle::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint16_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char *_g4_t_v27;
  typedef gameswf::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef char _g4_t_v30;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v19)) > _g4_s1 ? (32u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v20)) > _g4_s2 ? (36u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v21)) > _g4_s3 ? (40u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v22)) > _g4_s4 ? (48u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v23)) > _g4_s5 ? (52u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v24)) > _g4_s6 ? (56u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v25)) > _g4_s7 ? (60u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (61u + sizeof(_g4_t_v26)) > _g4_s8 ? (61u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v27)) > _g4_s9 ? (64u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v28)) > _g4_s10 ? (72u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v29)) > _g4_s11 ? (76u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v30)) > _g4_s12 ? (80u + sizeof(_g4_t_v30)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 61u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);

  v1 = sub_5BC940();
  v2 = v1;
  v3 = (gameswf::CharacterHandle::Self *)(a1 + 40);
  if ( v1 != 0 )
  {
    v19 = (gameswf::CharacterHandle::Self *)(v1 + 156);
    if ( gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)(v1 + 156)) != 0
      && (uint8_t)gameswf::CharacterHandle::isValid(v19) != 0 )
    {
      v22 = *(uint32_t *)(v2 + 156);
      v23 = *(uint16_t **)(v2 + 160);
      if ( v23 != nullptr )
        ++*v23;
      v4 = *(uint32_t *)(v2 + 164);
      v25 = 1;
      v24 = v4;
      v26 = 0;
      v5 = *(uint8_t *)(v2 + 168);
      if ( v5 == -1 )
        v6 = *(uint32_t *)(v2 + 172) - 1;
      else
        v6 = v5 - 1;
      gameswf::String::resize((gameswf::String::Self *)&v25, v6);
      v7 = (gameswf::Self *)(v2 + 169);
      if ( *(uint8_t *)(v2 + 168) == 0xFF )
        v7 = *(gameswf::Self **)(v2 + 180);
      if ( v25 == -1 )
      {
        v8 = v27;
        v9 = v28;
      }
      else
      {
        v8 = (char *)v25;
        v9 = (gameswf::Self *)&v26;
      }
      gameswf::Strcpy_s(v9, v8, v7, v18);
      v21 = *(uint32_t *)(v2 + 184);
      if ( (uint8_t *)(v21 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        v13 = *(uint8_t *)(v2 + 168);
        if ( v13 == -1 )
        {
          v14 = *(uint32_t *)(v2 + 180);
          v15 = *(uint32_t *)(v2 + 172) - 1;
        }
        else
        {
          v14 = v2 + 169;
          v15 = v13 - 1;
        }
        v10 = 5381;
        if ( v15 > 0 )
        {
          v20 = v2;
          do
          {
            --v15;
            v16 = 33 * v10;
            v17 = *(uint8_t *)(v14 + v15) + 32;
            if ( (uint8_t)(*(uint8_t *)(v14 + v15) - 65) > 0x19u )
              v17 = *(uint8_t *)(v14 + v15);
            v10 = v16 ^ v17;
          }
          while ( v15 != 0 );
          v2 = v20;
          v10 = v10 << 9 >> 9;
        }
        *(uint32_t *)(v2 + 184) = v10 & 0x7FFFFF | v21 & 0xFF800000;
      }
      else
      {
        v10 = v21 << 9 >> 9;
      }
      v11 = v10 & 0x7FFFFF | v29 & 0xFF800000;
      v3 = (gameswf::CharacterHandle::Self *)(a1 + 40);
      LOWORD(v29) = v10;
      BYTE2(v29) = BYTE2(v11) & 0x7F;
      HIBYTE(v29) = HIBYTE(v11) | 1;
      v30 = *(uint8_t *)(v2 + 188);
      gameswf::CharacterHandle::opAssign(a1 + 40, (gameswf::CharacterHandle::Self *)&v22);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)&v22);
    }
  }
  result = gameswf::CharacterHandle::isValid(v3);
  if ( (uint8_t)result != 0 )
    return gameswf::CharacterHandle::gotoAndStop(v3, "invis");
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BE1500  (binary VA: 0xbe1500)
// Original: sub_BE1500
// ----------------------------------------------------------------------------
void sub_BE1500()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_BE1510  (binary VA: 0xbe1510)
// Original: sub_BE1510
// ----------------------------------------------------------------------------
unsigned int sub_BE1510(uint32_t *a1, int a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  unsigned int result;
  unsigned int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;

  v2 = a2 != 0 ? 2 : 0;
  v3 = (uint32_t *)a1[20];
  v4 = a1[21] - (uint32_t)(uintptr_t)(v3);
  a1[5] = v2;
  v5 = -1431655765 * (v4 >> 2);
  if ( v5 <= 4 )
    goto LABEL_42;
  v6 = v3[12];
  if ( (unsigned int)(v3[13] - v6) >> 2 != 0 )
  {
    v26 = 0;
    v7 = 0;
    while ( 1 )
    {
      *(uint32_t *)(*(uint32_t *)(v6 + 4 * v26) + 28) = v2;
      v3 = (uint32_t *)a1[20];
      v5 = -1431655765 * ((a1[21] - (int)(uintptr_t)(v3)) >> 2);
      if ( v5 <= 4 )
        break;
      v6 = v3[12];
      v26 = ++v7;
      if ( v7 >= (v3[13] - v6) >> 2 )
        goto LABEL_7;
      v2 = a1[5];
    }
LABEL_42:
    sub_1900210("vector::_M_range_check");
  }
LABEL_7:
  if ( v5 == 5 )
    goto LABEL_42;
  v8 = v3[15];
  if ( (unsigned int)(v3[16] - v8) >> 2 != 0 )
  {
    v9 = 0;
    v27 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(v8 + 4 * v9) + 28) = a1[5];
      v3 = (uint32_t *)a1[20];
      v5 = -1431655765 * ((a1[21] - (int)(uintptr_t)(v3)) >> 2);
      if ( v5 <= 5 )
        goto LABEL_42;
      v8 = v3[15];
      v9 = ++v27;
    }
    while ( v27 < (v3[16] - v8) >> 2 );
  }
  if ( v5 == 6 )
    goto LABEL_42;
  v10 = v3[18];
  if ( (unsigned int)(v3[19] - v10) >> 2 != 0 )
  {
    v11 = 0;
    v28 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(v10 + 4 * v11) + 28) = a1[5];
      v3 = (uint32_t *)a1[20];
      v5 = -1431655765 * ((a1[21] - (int)(uintptr_t)(v3)) >> 2);
      if ( v5 <= 6 )
        goto LABEL_42;
      v10 = v3[18];
      v11 = ++v28;
    }
    while ( v28 < (v3[19] - v10) >> 2 );
  }
  if ( v5 == 7 )
    goto LABEL_42;
  v12 = v3[21];
  if ( (unsigned int)(v3[22] - v12) >> 2 != 0 )
  {
    v13 = 0;
    v29 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(v12 + 4 * v13) + 28) = a1[5];
      v3 = (uint32_t *)a1[20];
      v5 = -1431655765 * ((a1[21] - (int)(uintptr_t)(v3)) >> 2);
      if ( v5 <= 7 )
        goto LABEL_42;
      v12 = v3[21];
      v13 = ++v29;
    }
    while ( v29 < (v3[22] - v12) >> 2 );
  }
  if ( v5 <= 0xA )
    goto LABEL_42;
  v14 = v3[30];
  if ( (unsigned int)(v3[31] - v14) >> 2 != 0 )
  {
    v15 = 0;
    v30 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(v14 + 4 * v15) + 28) = a1[5];
      v3 = (uint32_t *)a1[20];
      v5 = -1431655765 * ((a1[21] - (int)(uintptr_t)(v3)) >> 2);
      if ( v5 <= 0xA )
        goto LABEL_42;
      v14 = v3[30];
      v15 = ++v30;
    }
    while ( v30 < (v3[31] - v14) >> 2 );
  }
  if ( v5 <= 0xC )
    goto LABEL_42;
  v16 = v3[36];
  if ( (unsigned int)(v3[37] - v16) >> 2 != 0 )
  {
    v17 = 0;
    v31 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(v16 + 4 * v17) + 28) = a1[5];
      v3 = (uint32_t *)a1[20];
      v5 = -1431655765 * ((a1[21] - (int)(uintptr_t)(v3)) >> 2);
      if ( v5 <= 0xC )
        goto LABEL_42;
      v16 = v3[36];
      v17 = ++v31;
    }
    while ( v31 < (v3[37] - v16) >> 2 );
  }
  if ( v5 <= 0x15 )
    goto LABEL_42;
  v18 = v3[63];
  if ( (unsigned int)(v3[64] - v18) >> 2 != 0 )
  {
    v19 = 0;
    v20 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(v18 + 4 * v19) + 28) = a1[5];
      v3 = (uint32_t *)a1[20];
      if ( (unsigned int)(-1431655765 * ((a1[21] - (int)(uintptr_t)(v3)) >> 2)) <= 0x15 )
        goto LABEL_42;
      v18 = v3[63];
      v19 = ++v20;
    }
    while ( v20 < (v3[64] - v18) >> 2 );
  }
  v21 = v3[57];
  result = (unsigned int)(v3[58] - v21) >> 2;
  if ( result != 0 )
  {
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      *(uint32_t *)(*(uint32_t *)(v21 + 4 * v23) + 28) = a1[5];
      v25 = a1[20];
      if ( (unsigned int)(-1431655765 * ((a1[21] - v25) >> 2)) <= 0x13 )
        break;
      v21 = *(uint32_t *)(v25 + 228);
      ++v24;
      result = (*(uint32_t *)(v25 + 232) - v21) >> 2;
      v23 = v24;
      if ( v24 >= result )
        return result;
    }
    goto LABEL_42;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BE1840  (binary VA: 0xbe1840)
// Original: sub_BE1840
// ----------------------------------------------------------------------------
int sub_BE1840(uint32_t *a1)
{
  void **v1;
  void **v2;

  v1 = (void **)a1[21];
  v2 = (void **)a1[20];
  if ( v1 != v2 )
  {
    do
    {
      if ( *v2 != nullptr )
        opDelete(*v2);
      v2 += 3;
    }
    while ( v1 != v2 );
    v2 = (void **)a1[20];
  }
  if ( v2 != nullptr )
    opDelete(v2);
  gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)(a1 + 10));
  return ((g4_std::string::Destroy(a1 + 3)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_BE18B0  (binary VA: 0xbe18b0)
// Original: sub_BE18B0
// ----------------------------------------------------------------------------
int sub_BE18B0(int a1, int a2, int a3)
{
  int result;
  uint32_t *v4;
  float v5; // xmm0_4
  float v6; // xmm0_4
  glf::InputManager::Self *InputMgr;
  int Gamepad;
  float v9; // xmm0_4
  glf::InputManager::Self *v10;
  int v11;
  glf::InputManager::Self *v12;
  int v13;
  uint32_t *v14;
  float v15; // xmm0_4
  float v16; // xmm0_4
  glf::InputManager::Self *v17;
  int v18;
  glf::Self *v19;
  glf::Self *v20;
  glf::Self *v21;
  float v22;
  float v23;
  float v24;
  float v25;

  result = a3;
  if ( a3 == 1 )
  {
    v4 = **(uint32_t ***)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 300);
    v5 = (double)(v4[7] - v4[5]) * 0.5;
    v22 = v5;
    v6 = (double)(v4[8] - v4[6]) * 0.5;
    v25 = (float)(int)v6;
    InputMgr = (glf::InputManager::Self *)glf::GetInputMgr(v19);
    Gamepad = glf::InputManager::GetGamepad(InputMgr, 0);
    glf::Gamepad::RaiseTouchEvent(Gamepad, 0, 216, 4, (float)(int)v22, LODWORD(v25), 1);
    v9 = v22 - 80.0;
LABEL_5:
    v23 = (float)(int)v9;
    v10 = (glf::InputManager::Self *)glf::GetInputMgr(v20);
    v11 = glf::InputManager::GetGamepad(v10, 0);
    glf::Gamepad::RaiseTouchEvent(v11, 0, 217, 4, LODWORD(v23), LODWORD(v25), 1);
    v12 = (glf::InputManager::Self *)glf::GetInputMgr(v21);
    v13 = glf::InputManager::GetGamepad(v12, 0);
    return glf::Gamepad::RaiseTouchEvent(v13, 0, 218, 4, LODWORD(v23), LODWORD(v25), 1);
  }
  if ( a3 == 3 )
  {
    v14 = **(uint32_t ***)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 300);
    v15 = (double)(v14[7] - v14[5]) * 0.5;
    v24 = v15;
    v16 = (double)(v14[8] - v14[6]) * 0.5;
    v25 = (float)(int)v16;
    v17 = (glf::InputManager::Self *)glf::GetInputMgr(v19);
    v18 = glf::InputManager::GetGamepad(v17, 0);
    glf::Gamepad::RaiseTouchEvent(v18, 0, 216, 4, (float)(int)v24, LODWORD(v25), 1);
    v9 = v24 + 80.0;
    goto LABEL_5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BE1B20  (binary VA: 0xbe1b20)
// Original: sub_BE1B20
// ----------------------------------------------------------------------------
void sub_BE1B20(int a1, char a2, int a3)
{
  int v3;
  uint32_t *v4;
  gameswf::RenderFX::Self *v5;
  gameswf::Root::Self *v6;
  int v7;
  long double v8; // fst7
  float v9; // xmm0_4
  glf::InputManager::Self *v10;
  int v11;
  glf::InputManager::Self *v12;
  int v13;
  float v14; // xmm0_4
  gameswf::RenderFX::Self *v15;
  gameswf::Root::Self *v16;
  glf::InputManager::Self *v17;
  int v18;
  double v19; // xmm0_8
  float v20; // xmm0_4
  glf::InputManager::Self *v21;
  int v22;
  glf::InputManager::Self *v23;
  gameswf::RenderFX::Self *Player;
  gameswf::Root::Self *Root;
  int Character;
  glf::InputManager::Self *InputMgr;
  int Gamepad;
  glf::InputManager::Self *v29;
  int v30;
  gameswf::RenderFX::Self *v31;
  gameswf::Root::Self *v32;
  glf::InputManager::Self *v33;
  int v34;
  typedef glf::Self *_g4_t_v35;
  typedef glf::Self *_g4_t_v36;
  typedef glf::Self *_g4_t_v37;
  typedef glf::Self *_g4_t_v38;
  typedef glf::Self *_g4_t_v39;
  typedef glf::Self *_g4_t_v40;
  typedef glf::Self *_g4_t_v41;
  typedef glf::Self *_g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef int64_t _g4_t_v49 __attribute__((aligned(1)));
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef int64_t _g4_t_v52 __attribute__((aligned(1)));
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef int64_t _g4_t_v59 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v60[36];
  typedef uint8_t _g4_t_v61[36];
  typedef uint8_t _g4_t_v62[36];
  typedef uint8_t _g4_t_v63[36];
  typedef uint8_t _g4_t_v64[48];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v36)) > _g4_s1 ? (0u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v37)) > _g4_s2 ? (0u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v38)) > _g4_s3 ? (0u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v39)) > _g4_s4 ? (0u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v40)) > _g4_s5 ? (0u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v41)) > _g4_s6 ? (0u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v42)) > _g4_s7 ? (0u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v43)) > _g4_s8 ? (44u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v44)) > _g4_s9 ? (44u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v45)) > _g4_s10 ? (44u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v46)) > _g4_s11 ? (44u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v47)) > _g4_s12 ? (68u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v48)) > _g4_s13 ? (68u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v49)) > _g4_s14 ? (68u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v50)) > _g4_s15 ? (68u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v51)) > _g4_s16 ? (68u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v52)) > _g4_s17 ? (68u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v53)) > _g4_s18 ? (72u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v54)) > _g4_s19 ? (72u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v55)) > _g4_s20 ? (72u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v56)) > _g4_s21 ? (76u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v57)) > _g4_s22 ? (76u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v58)) > _g4_s23 ? (76u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v59)) > _g4_s24 ? (84u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v60)) > _g4_s25 ? (92u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v61)) > _g4_s26 ? (128u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (164u + sizeof(_g4_t_v62)) > _g4_s27 ? (164u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (200u + sizeof(_g4_t_v63)) > _g4_s28 ? (200u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (236u + sizeof(_g4_t_v64)) > _g4_s29 ? (236u + sizeof(_g4_t_v64)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 68u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 68u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 68u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 72u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 72u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 72u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 76u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 76u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 84u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 92u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 128u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 164u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 200u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 236u);

  v3 = sub_732CE0();
  v4 = (uint32_t *)sub_733A60(v3, 2);
  if ( a3 == 2 )
  {
    if ( v4 != nullptr && *v4 != 0 )
    {
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v61, nullptr);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v63);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v61);
      if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v63) != 0 )
      {
        gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)&v59);
        Player = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v63);
        Root = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(Player);
        gameswf::Root::logicalToScreen(Root, (gameswf::Point::Self *)&v59);
        v50 = *(float *)&v59;
        Character = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v63);
        v55 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)Character + 292))(Character);
        v57 = *((float *)&v59 + 1);
        v40 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v63);
        v45 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v40 + 288))();
        if ( a2 == 0 )
        {
          v58 = (float)(int)(float)(v57 - (float)(v45 * 0.5));
          v51 = (float)(int)(float)((float)(0.5 * v55) + v50);
          InputMgr = (glf::InputManager::Self *)glf::GetInputMgr(v40);
          Gamepad = glf::InputManager::GetGamepad(InputMgr, 0);
          glf::Gamepad::RaiseTouchEvent(Gamepad, 0, 216, 4, LODWORD(v51), LODWORD(v58), 1);
          v29 = (glf::InputManager::Self *)glf::GetInputMgr(v41);
          v30 = glf::InputManager::GetGamepad(v29, 0);
          glf::Gamepad::RaiseTouchEvent(v30, 0, 218, 4, LODWORD(v51), LODWORD(v58), 1);
        }
      }
      goto LABEL_29;
    }
    return;
  }
  if ( a3 <= 2 )
  {
    if ( a3 != 1 || v4 == nullptr || *v4 == 0 )
      return;
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v62, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v63);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v62);
    if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v63) == 0 )
      goto LABEL_29;
    gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)&v59);
    v31 = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v63);
    v32 = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(v31);
    gameswf::Root::logicalToScreen(v32, (gameswf::Point::Self *)&v59);
    v52 = v59;
    v42 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v63);
    v46 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v42 + 292))();
    if ( a2 != 0 )
      goto LABEL_29;
    v54 = (float)(int)*((float *)&v52 + 1);
    v33 = (glf::InputManager::Self *)glf::GetInputMgr(v42);
    v34 = glf::InputManager::GetGamepad(v33, 0);
    glf::Gamepad::RaiseTouchEvent(v34, 0, 216, 4, (float)(int)*(float *)&v52, LODWORD(v54), 1);
    v19 = v46 * 0.4 + *(float *)&v52;
LABEL_19:
    v20 = v19;
    v48 = (float)(int)v20;
    v21 = (glf::InputManager::Self *)glf::GetInputMgr(v38);
    v22 = glf::InputManager::GetGamepad(v21, 0);
    glf::Gamepad::RaiseTouchEvent(v22, 0, 217, 4, LODWORD(v48), LODWORD(v54), 1);
    v23 = (glf::InputManager::Self *)glf::GetInputMgr(v39);
    v13 = glf::InputManager::GetGamepad(v23, 0);
    v14 = v54;
    goto LABEL_10;
  }
  if ( a3 == 3 )
  {
    if ( v4 == nullptr || *v4 == 0 )
      return;
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v60, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v63);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v60);
    if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v63) == 0 )
      goto LABEL_29;
    gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)&v59);
    v15 = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v63);
    v16 = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(v15);
    gameswf::Root::logicalToScreen(v16, (gameswf::Point::Self *)&v59);
    v49 = v59;
    v37 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v63);
    v44 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v37 + 292))();
    if ( a2 != 0 )
      goto LABEL_29;
    v54 = (float)(int)*((float *)&v49 + 1);
    v17 = (glf::InputManager::Self *)glf::GetInputMgr(v37);
    v18 = glf::InputManager::GetGamepad(v17, 0);
    glf::Gamepad::RaiseTouchEvent(v18, 0, 216, 4, (float)(int)*(float *)&v49, LODWORD(v54), 1);
    v19 = *(float *)&v49 - v44 * 0.4;
    goto LABEL_19;
  }
  if ( a3 == 4 && v4 != nullptr && *v4 != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v64, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v63);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v64);
    if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v63) != 0 )
    {
      gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)&v59);
      v5 = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v63);
      v6 = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(v5);
      gameswf::Root::logicalToScreen(v6, (gameswf::Point::Self *)&v59);
      v47 = *(float *)&v59;
      v7 = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v63);
      v8 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v7 + 292))(v7);
      v56 = *((float *)&v59 + 1);
      v35 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v63);
      (*(void (**)(void))(*(uint32_t *)v35 + 288))();
      if ( a2 != 0 )
        goto LABEL_29;
      v43 = v8;
      v9 = v43 * 2.3 + v56;
      v53 = v8;
      v48 = (float)(int)(float)((float)(v53 * 0.25) + v47);
      v10 = (glf::InputManager::Self *)glf::GetInputMgr(v35);
      v11 = glf::InputManager::GetGamepad(v10, 0);
      glf::Gamepad::RaiseTouchEvent(v11, 0, 216, 4, LODWORD(v48), (float)(int)v9, 1);
      v12 = (glf::InputManager::Self *)glf::GetInputMgr(v36);
      v13 = glf::InputManager::GetGamepad(v12, 0);
      v14 = (float)(int)v9;
LABEL_10:
      glf::Gamepad::RaiseTouchEvent(v13, 0, 218, 4, LODWORD(v48), LODWORD(v14), 1);
    }
LABEL_29:
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v63);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_BE2300  (binary VA: 0xbe2300)
// Original: sub_BE2300
// ----------------------------------------------------------------------------
void sub_BE2300(int a1, char a2, int a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  gameswf::RenderFX::Self *v6;
  gameswf::Root::Self *v7;
  int v8;
  float v9; // xmm0_4
  glf::InputManager::Self *v10;
  int v11;
  glf::InputManager::Self *v12;
  int v13;
  gameswf::RenderFX::Self *v14;
  gameswf::Root::Self *v15;
  glf::InputManager::Self *v16;
  int v17;
  double v18; // xmm0_8
  float v19; // xmm0_4
  glf::InputManager::Self *v20;
  int v21;
  glf::InputManager::Self *v22;
  int v23;
  gameswf::RenderFX::Self *v24;
  gameswf::Root::Self *v25;
  int v26;
  gameswf::RenderFX::Self *Player;
  gameswf::Root::Self *Root;
  glf::InputManager::Self *InputMgr;
  int Gamepad;
  typedef glf::Self *_g4_t_v31;
  typedef glf::Self *_g4_t_v32;
  typedef glf::Self *_g4_t_v33;
  typedef glf::Self *_g4_t_v34;
  typedef glf::Self *_g4_t_v35;
  typedef glf::Self *_g4_t_Character;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef uint8_t _g4_t_v55[36];
  typedef uint8_t _g4_t_v56[36];
  typedef uint8_t _g4_t_v57[36];
  typedef uint8_t _g4_t_v58[36];
  typedef uint8_t _g4_t_v59[48];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v32)) > _g4_s1 ? (0u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v33)) > _g4_s2 ? (0u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v34)) > _g4_s3 ? (0u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v35)) > _g4_s4 ? (0u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_Character)) > _g4_s5 ? (0u + sizeof(_g4_t_Character)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v37)) > _g4_s6 ? (44u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v38)) > _g4_s7 ? (44u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v39)) > _g4_s8 ? (48u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v40)) > _g4_s9 ? (48u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v41)) > _g4_s10 ? (68u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v42)) > _g4_s11 ? (68u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v43)) > _g4_s12 ? (68u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v44)) > _g4_s13 ? (68u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v45)) > _g4_s14 ? (72u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v46)) > _g4_s15 ? (72u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v47)) > _g4_s16 ? (72u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v48)) > _g4_s17 ? (76u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v49)) > _g4_s18 ? (76u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v50)) > _g4_s19 ? (76u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v51)) > _g4_s20 ? (76u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v52)) > _g4_s21 ? (76u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v53)) > _g4_s22 ? (84u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v54)) > _g4_s23 ? (88u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v55)) > _g4_s24 ? (92u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v56)) > _g4_s25 ? (128u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (164u + sizeof(_g4_t_v57)) > _g4_s26 ? (164u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (200u + sizeof(_g4_t_v58)) > _g4_s27 ? (200u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (236u + sizeof(_g4_t_v59)) > _g4_s28 ? (236u + sizeof(_g4_t_v59)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_Character &Character = *reinterpret_cast<_g4_t_Character *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 72u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 72u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 76u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 76u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 76u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 84u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 88u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 128u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 164u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 200u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 236u);

  v3 = *(uint32_t *)(a1 + 20);
  v4 = sub_732CE0();
  v5 = (uint32_t *)sub_733A60(v4, v3);
  if ( a3 != 2 )
  {
    if ( a3 <= 2 )
    {
      if ( a3 != 1 || v5 == nullptr || *v5 == 0 )
        return;
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v57, nullptr);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v58);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v57);
      if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v58) == 0 )
        goto LABEL_26;
      gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)&v53);
      Player = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v58);
      Root = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(Player);
      gameswf::Root::logicalToScreen(Root, (gameswf::Point::Self *)&v53);
      v44 = v53;
      v40 = v54;
      Character = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v58);
      v52 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)Character + 292))();
      v47 = (float)(int)v40;
      InputMgr = (glf::InputManager::Self *)glf::GetInputMgr(Character);
      Gamepad = glf::InputManager::GetGamepad(InputMgr, 0);
      glf::Gamepad::RaiseTouchEvent(Gamepad, 0, 216, 4, (float)(int)v44, LODWORD(v47), 1);
      v18 = v52 * 0.3 + v44;
    }
    else
    {
      if ( a3 != 3 )
      {
        if ( a3 == 4 && v5 != nullptr && *v5 != 0 )
        {
          gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v59, nullptr);
          gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v58);
          gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v59);
          if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v58) == 0 )
            goto LABEL_26;
          gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)&v53);
          v6 = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v58);
          v7 = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(v6);
          gameswf::Root::logicalToScreen(v7, (gameswf::Point::Self *)&v53);
          v45 = v53;
          v8 = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v58);
          v41 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v8 + 292))(v8);
          v48 = v54;
          v31 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v58);
          v37 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v31 + 288))();
          if ( a2 != 0 )
            goto LABEL_26;
          v9 = (float)(v37 + v37) + v48;
          goto LABEL_10;
        }
        return;
      }
      if ( v5 == nullptr || *v5 == 0 )
        return;
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v55, nullptr);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v58);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v55);
      if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v58) == 0 )
        goto LABEL_26;
      gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)&v53);
      v14 = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v58);
      v15 = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(v14);
      gameswf::Root::logicalToScreen(v15, (gameswf::Point::Self *)&v53);
      v42 = v53;
      v39 = v54;
      v33 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v58);
      v50 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v33 + 292))();
      v47 = (float)(int)v39;
      v16 = (glf::InputManager::Self *)glf::GetInputMgr(v33);
      v17 = glf::InputManager::GetGamepad(v16, 0);
      glf::Gamepad::RaiseTouchEvent(v17, 0, 216, 4, (float)(int)v42, LODWORD(v47), 1);
      v18 = v42 - v50 * 0.3;
    }
    v19 = v18;
    v43 = (float)(int)v19;
    v20 = (glf::InputManager::Self *)glf::GetInputMgr(v34);
    v21 = glf::InputManager::GetGamepad(v20, 0);
    glf::Gamepad::RaiseTouchEvent(v21, 0, 217, 4, LODWORD(v43), LODWORD(v47), 1);
    v22 = (glf::InputManager::Self *)glf::GetInputMgr(v35);
    v23 = glf::InputManager::GetGamepad(v22, 0);
    glf::Gamepad::RaiseTouchEvent(v23, 0, 218, 4, LODWORD(v43), LODWORD(v47), 1);
    goto LABEL_26;
  }
  if ( v5 != nullptr && *v5 != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v56, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v58);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v56);
    if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v58) != 0 )
    {
      gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)&v53);
      v24 = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v58);
      v25 = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(v24);
      gameswf::Root::logicalToScreen(v25, (gameswf::Point::Self *)&v53);
      v45 = v53;
      v26 = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v58);
      v41 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v26 + 292))(v26);
      v51 = v54;
      v31 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v58);
      v38 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v31 + 288))();
      if ( a2 != 0 )
        goto LABEL_26;
      v9 = v51 - (float)(v38 * 0.5);
LABEL_10:
      v49 = (float)(int)v9;
      v46 = (float)(int)(float)((float)(v41 * 0.25) + v45);
      v10 = (glf::InputManager::Self *)glf::GetInputMgr(v31);
      v11 = glf::InputManager::GetGamepad(v10, 0);
      glf::Gamepad::RaiseTouchEvent(v11, 0, 216, 4, LODWORD(v46), LODWORD(v49), 1);
      v12 = (glf::InputManager::Self *)glf::GetInputMgr(v32);
      v13 = glf::InputManager::GetGamepad(v12, 0);
      glf::Gamepad::RaiseTouchEvent(v13, 0, 218, 4, LODWORD(v46), LODWORD(v49), 1);
    }
LABEL_26:
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v58);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_BE29E0  (binary VA: 0xbe29e0)
// Original: sub_BE29E0
// ----------------------------------------------------------------------------
int sub_BE29E0(int a1, int a2, int a3)
{
  int result;
  uint32_t *v4;
  glf::InputManager::Self *InputMgr;
  int Gamepad;
  glf::InputManager::Self *v7;
  int v8;
  glf::InputManager::Self *v9;
  int v10;
  glf::InputManager::Self *v11;
  int v12;
  glf::InputManager::Self *v13;
  int v14;
  glf::InputManager::Self *v15;
  int v16;
  uint32_t *v17;
  glf::InputManager::Self *v18;
  int v19;
  glf::InputManager::Self *v20;
  int v21;
  glf::InputManager::Self *v22;
  int v23;
  glf::InputManager::Self *v24;
  int v25;
  glf::InputManager::Self *v26;
  int v27;
  glf::Self *v28;
  glf::Self *v29;
  glf::Self *v30;
  glf::Self *v31;
  glf::Self *v32;
  glf::Self *v33;
  glf::Self *v34;
  glf::Self *v35;
  glf::Self *v36;
  glf::Self *v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;

  result = a3;
  if ( a3 == 1 )
  {
    v4 = **(uint32_t ***)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 300);
    v38 = (float)((v4[7] - v4[5]) / 2);
    v41 = (float)(int)(float)((v4[8] - v4[6]) / 2);
    InputMgr = (glf::InputManager::Self *)glf::GetInputMgr(v28);
    Gamepad = glf::InputManager::GetGamepad(InputMgr, 0);
    glf::Gamepad::RaiseTouchEvent(Gamepad, 0, 216, 4, (float)(int)(float)(v38 + 5.0), LODWORD(v41), 1);
    v7 = (glf::InputManager::Self *)glf::GetInputMgr(v29);
    v8 = glf::InputManager::GetGamepad(v7, 0);
    glf::Gamepad::RaiseTouchEvent(v8, 0, 216, 5, (float)(int)(float)(v38 - 5.0), LODWORD(v41), 1);
    v39 = (float)(int)v38;
    v9 = (glf::InputManager::Self *)glf::GetInputMgr(v30);
    v10 = glf::InputManager::GetGamepad(v9, 0);
    glf::Gamepad::RaiseTouchEvent(v10, 0, 217, 4, LODWORD(v39), LODWORD(v41), 1);
    v11 = (glf::InputManager::Self *)glf::GetInputMgr(v31);
    v12 = glf::InputManager::GetGamepad(v11, 0);
    glf::Gamepad::RaiseTouchEvent(v12, 0, 217, 5, LODWORD(v39), LODWORD(v41), 1);
    v13 = (glf::InputManager::Self *)glf::GetInputMgr(v32);
    v14 = glf::InputManager::GetGamepad(v13, 0);
    glf::Gamepad::RaiseTouchEvent(v14, 0, 218, 4, LODWORD(v39), LODWORD(v41), 1);
LABEL_5:
    v15 = (glf::InputManager::Self *)glf::GetInputMgr(v33);
    v16 = glf::InputManager::GetGamepad(v15, 0);
    return glf::Gamepad::RaiseTouchEvent(v16, 0, 218, 5, LODWORD(v39), LODWORD(v41), 1);
  }
  if ( a3 == 3 )
  {
    v17 = **(uint32_t ***)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 300);
    v40 = (float)((v17[7] - v17[5]) / 2);
    v41 = (float)(int)(float)((v17[8] - v17[6]) / 2);
    v42 = (float)(int)v40;
    v18 = (glf::InputManager::Self *)glf::GetInputMgr(v28);
    v19 = glf::InputManager::GetGamepad(v18, 0);
    glf::Gamepad::RaiseTouchEvent(v19, 0, 216, 4, LODWORD(v42), LODWORD(v41), 1);
    v20 = (glf::InputManager::Self *)glf::GetInputMgr(v34);
    v21 = glf::InputManager::GetGamepad(v20, 0);
    glf::Gamepad::RaiseTouchEvent(v21, 0, 216, 5, LODWORD(v42), LODWORD(v41), 1);
    v43 = (float)(int)(float)(v40 + 5.0);
    v22 = (glf::InputManager::Self *)glf::GetInputMgr(v35);
    v23 = glf::InputManager::GetGamepad(v22, 0);
    glf::Gamepad::RaiseTouchEvent(v23, 0, 217, 4, LODWORD(v43), LODWORD(v41), 1);
    v39 = (float)(int)(float)(v40 - 5.0);
    v24 = (glf::InputManager::Self *)glf::GetInputMgr(v36);
    v25 = glf::InputManager::GetGamepad(v24, 0);
    glf::Gamepad::RaiseTouchEvent(v25, 0, 217, 5, LODWORD(v39), LODWORD(v41), 1);
    v26 = (glf::InputManager::Self *)glf::GetInputMgr(v37);
    v27 = glf::InputManager::GetGamepad(v26, 0);
    glf::Gamepad::RaiseTouchEvent(v27, 0, 218, 4, LODWORD(v43), LODWORD(v41), 1);
    goto LABEL_5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BE2ED0  (binary VA: 0xbe2ed0)
// Original: sub_BE2ED0
// ----------------------------------------------------------------------------
void sub_BE2ED0(int a1, char a2, int a3)
{
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  int v7;
  glf::InputManager::Self *v8;
  int v9;
  uint32_t *v10;
  float v11; // xmm0_4
  float v12; // xmm0_4
  glf::InputManager::Self *v13;
  int v14;
  glf::InputManager::Self *v15;
  int v16;
  uint32_t *v17;
  float v18; // xmm0_4
  float v19; // xmm0_4
  glf::InputManager::Self *v20;
  int v21;
  glf::InputManager::Self *v22;
  int v23;
  uint32_t *v24;
  float v25; // xmm0_4
  float v26; // xmm0_4
  glf::InputManager::Self *InputMgr;
  int Gamepad;
  glf::InputManager::Self *v29;
  int v30;
  gameswf::RenderFX::Self *Player;
  gameswf::Root::Self *Root;
  int Character;
  uint32_t *v34;
  int v35;
  float v36; // xmm0_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  glf::InputManager::Self *v39;
  int v40;
  glf::InputManager::Self *v41;
  int v42;
  typedef glf::Self *_g4_t_v43;
  typedef glf::Self *_g4_t_v44;
  typedef glf::Self *_g4_t_v45;
  typedef glf::Self *_g4_t_v46;
  typedef glf::Self *_g4_t_v47;
  typedef float _g4_t_v48;
  typedef double _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef uint8_t _g4_t_v57[8];
  typedef uint32_t _g4_t_v58[2];
  typedef uint8_t _g4_t_v59[36];
  typedef uint8_t _g4_t_v60[64];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v43)) > _g4_s0 ? (0u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v44)) > _g4_s1 ? (0u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v45)) > _g4_s2 ? (0u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v46)) > _g4_s3 ? (0u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v47)) > _g4_s4 ? (0u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v48)) > _g4_s5 ? (44u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v49)) > _g4_s6 ? (48u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v50)) > _g4_s7 ? (64u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v51)) > _g4_s8 ? (88u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v52)) > _g4_s9 ? (88u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v53)) > _g4_s10 ? (88u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v54)) > _g4_s11 ? (88u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v55)) > _g4_s12 ? (92u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v56)) > _g4_s13 ? (92u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v57)) > _g4_s14 ? (104u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v58)) > _g4_s15 ? (112u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v59)) > _g4_s16 ? (120u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (156u + sizeof(_g4_t_v60)) > _g4_s17 ? (156u + sizeof(_g4_t_v60)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 88u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 88u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 88u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 92u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 104u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 112u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 120u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 156u);

  v3 = sub_732CE0();
  v4 = (uint32_t *)sub_733A60(v3, 2);
  if ( v4 != nullptr && *v4 != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v60, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v59);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v60);
    if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v59) != 0 )
    {
      gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)v57);
      Player = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v59);
      Root = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(Player);
      gameswf::Root::logicalToScreen(Root, (gameswf::Point::Self *)v57);
      Character = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v59);
      G4_VCALL<void>(Character, 292);
      v34 = **(uint32_t ***)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 300);
      v50 = (float)((v34[8] - v34[6]) / 2);
      v49 = (double)((v34[7] - v34[5]) / 2);
      v35 = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v59);
      v48 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v35 + 292))(v35);
      *(float *)&v58[1] = v50;
      v36 = v49 - v48 * 3.5;
      *(float *)v58 = v36;
      gameswf::CharacterHandle::setPosition((gameswf::CharacterHandle::Self *)v59, (const gameswf::Point::Self *)v58);
      gameswf::CharacterHandle::gotoAndStop((gameswf::CharacterHandle::Self *)v59, (const char *)&off_1B58C1F);
    }
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v59);
  }
  if ( a3 == 2 )
  {
    v24 = **(uint32_t ***)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 300);
    v6 = v24[7] - v24[5];
    v7 = v24[8] - v24[6];
    if ( a2 == 0 )
      goto LABEL_11;
    v25 = (double)v7 * 0.5;
    v53 = v25;
    v26 = (double)v6 * 0.2;
    v55 = (float)(int)v26;
    InputMgr = (glf::InputManager::Self *)glf::GetInputMgr(v43);
    Gamepad = glf::InputManager::GetGamepad(InputMgr, 0);
    glf::Gamepad::RaiseTouchEvent(Gamepad, 0, 216, 4, LODWORD(v55), (float)(int)v53, 1);
    v29 = (glf::InputManager::Self *)glf::GetInputMgr(v46);
    v30 = glf::InputManager::GetGamepad(v29, 0);
    glf::Gamepad::RaiseTouchEvent(v30, 0, 217, 4, LODWORD(v55), (float)(int)(float)(v53 - 100.0), 1);
  }
  else if ( a3 <= 2 )
  {
    if ( a3 == 1 )
    {
      v17 = **(uint32_t ***)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 300);
      v6 = v17[7] - v17[5];
      v7 = v17[8] - v17[6];
      if ( a2 == 0 )
        goto LABEL_11;
      v18 = (double)v6 * 0.2;
      v52 = v18;
      v19 = (double)v7 * 0.5;
      v20 = (glf::InputManager::Self *)glf::GetInputMgr(v43);
      v21 = glf::InputManager::GetGamepad(v20, 0);
      glf::Gamepad::RaiseTouchEvent(v21, 0, 216, 4, (float)(int)v52, (float)(int)v19, 1);
      v22 = (glf::InputManager::Self *)glf::GetInputMgr(v45);
      v23 = glf::InputManager::GetGamepad(v22, 0);
      glf::Gamepad::RaiseTouchEvent(v23, 0, 217, 4, (float)(int)(float)(v52 - 100.0), (float)(int)v19, 1);
    }
  }
  else if ( a3 == 3 )
  {
    v10 = **(uint32_t ***)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 300);
    v6 = v10[7] - v10[5];
    v7 = v10[8] - v10[6];
    if ( a2 == 0 )
      goto LABEL_11;
    v11 = (double)v6 * 0.2;
    v51 = v11;
    v12 = (double)v7 * 0.5;
    v13 = (glf::InputManager::Self *)glf::GetInputMgr(v43);
    v14 = glf::InputManager::GetGamepad(v13, 0);
    glf::Gamepad::RaiseTouchEvent(v14, 0, 216, 4, (float)(int)v51, (float)(int)v12, 1);
    v15 = (glf::InputManager::Self *)glf::GetInputMgr(v44);
    v16 = glf::InputManager::GetGamepad(v15, 0);
    glf::Gamepad::RaiseTouchEvent(v16, 0, 217, 4, (float)(int)(float)(v51 + 100.0), (float)(int)v12, 1);
  }
  else if ( a3 == 4 )
  {
    v5 = **(uint32_t ***)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 300);
    v6 = v5[7] - v5[5];
    v7 = v5[8] - v5[6];
    if ( a2 == 0 )
    {
LABEL_11:
      v8 = (glf::InputManager::Self *)glf::GetInputMgr(v43);
      v9 = glf::InputManager::GetGamepad(v8, 0);
      glf::Gamepad::RaiseTouchEvent(v9, 0, 218, 4, (float)(v6 - 5), (float)(v7 - 5), 1);
      return;
    }
    v37 = (double)v7 * 0.5;
    v54 = v37;
    v38 = (double)v6 * 0.2;
    v56 = (float)(int)v38;
    v39 = (glf::InputManager::Self *)glf::GetInputMgr(v43);
    v40 = glf::InputManager::GetGamepad(v39, 0);
    glf::Gamepad::RaiseTouchEvent(v40, 0, 216, 4, LODWORD(v56), (float)(int)v54, 1);
    v41 = (glf::InputManager::Self *)glf::GetInputMgr(v47);
    v42 = glf::InputManager::GetGamepad(v41, 0);
    glf::Gamepad::RaiseTouchEvent(v42, 0, 217, 4, LODWORD(v56), (float)(int)(float)(v54 + 100.0), 1);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_BE3560  (binary VA: 0xbe3560)
// Original: sub_BE3560
// ----------------------------------------------------------------------------
bool sub_BE3560(int a1)
{
  return g4_std::string::compare(a1 + 12, "menu_map") == 0;
}

// ----------------------------------------------------------------------------
// Function: sub_BE35A0  (binary VA: 0xbe35a0)
// Original: sub_BE35A0
// ----------------------------------------------------------------------------
int sub_BE35A0(int a1, uint8_t a2, int a3)
{
  int v3;
  int result;
  typedef unsigned int _g4_t_v5;
  typedef unsigned int _g4_t_v6;
  typedef uint16_t _g4_t_v7[3];
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (22u + sizeof(_g4_t_v7)) > _g4_s2 ? (22u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 22u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v3 = a1 + 12;
  if ( g4_std::string::compare(a1 + 12, "menu_status") == 0 )
  {
    if ( a3 == 1 )
    {
      sub_BE18B0(a1, a2, 1);
    }
    else if ( a3 == 3 )
    {
      sub_BE18B0(a1, a2, 3);
    }
  }
  if ( g4_std::string::compare(v3, "menu_options_controls") == 0 )
  {
    if ( a3 == 1 )
    {
      v5 = *(uint32_t *)(a1 + 20);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7[1]), "controls_schemes_list.mc_btn_dec", (int)(uintptr_t)(v7));
      sub_BE0440(a1, (const char **)&v7[1], v5, a2);
      g4_std::string::Destroy(&v7[1]);
    }
    else if ( a3 == 3 )
    {
      v6 = *(uint32_t *)(a1 + 20);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), "controls_schemes_list.mc_btn_inc", (int)(uintptr_t)(v7) + 1);
      sub_BE0440(a1, (const char **)v8, v6, a2);
      g4_std::string::Destroy(v8);
    }
  }
  result = g4_std::string::compare(v3, "menu_map_2");
  if ( result == 0 || (result = g4_std::string::compare(v3, "menu_map")) == 0 )
  {
    if ( a3 == 1 )
    {
      return sub_BE29E0(a1, a2, 1);
    }
    else if ( a3 == 3 )
    {
      return sub_BE29E0(a1, a2, 3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BE37B0  (binary VA: 0xbe37b0)
// Original: sub_BE37B0
// ----------------------------------------------------------------------------
void sub_BE37B0(int a1, const char *a2)
{
  unsigned int v2;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  typedef uint8_t _g4_t_v7[36];
  typedef uint8_t _g4_t_v8[36];
  typedef uint8_t _g4_t_v9[36];
  typedef uint8_t _g4_t_v10[36];
  typedef uint8_t _g4_t_v11[36];
  typedef uint8_t _g4_t_v12[36];
  typedef uint8_t _g4_t_v13[48];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v8)) > _g4_s1 ? (40u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (76u + sizeof(_g4_t_v9)) > _g4_s2 ? (76u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v10)) > _g4_s3 ? (112u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (148u + sizeof(_g4_t_v11)) > _g4_s4 ? (148u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (184u + sizeof(_g4_t_v12)) > _g4_s5 ? (184u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (220u + sizeof(_g4_t_v13)) > _g4_s6 ? (220u + sizeof(_g4_t_v13)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 76u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 112u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 148u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 184u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 220u);

  v2 = *(uint32_t *)(a1 + 20);
  if ( strcmp(a2, "menu_options") == 0 )
  {
    v3 = sub_732CE0();
    v4 = (uint32_t *)sub_733A60(v3, v2);
    if ( v4 != nullptr && *v4 != 0 )
    {
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v8, nullptr);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v7);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v8);
      if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v7) != 0 )
      {
        sub_B9EE40();
        goto LABEL_9;
      }
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v10, nullptr);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v9);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v10);
      if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v9) != 0 )
      {
LABEL_8:
        gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v9);
LABEL_9:
        gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v7);
        return;
      }
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v11, nullptr);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v12);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v11);
      if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v12) != 0 )
      {
        gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v12);
        goto LABEL_8;
      }
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v12);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v9);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v7);
    }
  }
  else
  {
    v5 = sub_732CE0();
    v6 = (uint32_t *)sub_733A60(v5, v2);
    if ( v6 != nullptr && *v6 != 0 )
    {
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v13, nullptr);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v12);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v13);
      if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v12) != 0 )
        g4_std::string::compare(a1 + 12, "menu_quickplay");
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v12);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_BE4940  (binary VA: 0xbe4940)
// Original: sub_BE4940
// ----------------------------------------------------------------------------
int sub_BE4940(uint32_t *a1)
{
  int v1;
  int result;

  v1 = (int)(uintptr_t)(a1 + 3);
  if ( g4_std::string::compare((int)(uintptr_t)(a1 + 3), "menu_mainmenu") == 0 )
    *a1 = 0;
  if ( g4_std::string::compare(v1, "menu_options_game") == 0 )
    *a1 = 1;
  if ( g4_std::string::compare(v1, "menu_options_game2") == 0 )
    *a1 = 13;
  if ( g4_std::string::compare(v1, "menu_options_sounds") == 0 )
    *a1 = 6;
  if ( g4_std::string::compare(v1, "menu_options_controls") == 0 )
    *a1 = 7;
  if ( g4_std::string::compare(v1, "menu_about") == 0 )
    *a1 = 8;
  if ( g4_std::string::compare(v1, "menu_igm") == 0 )
    *a1 = 2;
  if ( g4_std::string::compare(v1, "menu_stock") == 0 )
    *a1 = 19;
  if ( g4_std::string::compare(v1, "menu_pawn_shop") == 0 )
    *a1 = 3;
  if ( g4_std::string::compare(v1, "menu_language") == 0 )
    *a1 = 4;
  if ( g4_std::string::compare(v1, "menu_help") == 0 )
    *a1 = 5;
  if ( g4_std::string::compare(v1, "menu_minigames") == 0 )
    *a1 = 9;
  if ( g4_std::string::compare(v1, "menu_connection_type_select") == 0 )
    *a1 = 22;
  if ( g4_std::string::compare(v1, "menu_notifications") == 0 )
    *a1 = 10;
  if ( g4_std::string::compare(v1, "menu_graphics") == 0 )
    *a1 = 11;
  if ( g4_std::string::compare(v1, "menu_popup") == 0 )
    *a1 = 12;
  if ( g4_std::string::compare(v1, "menu_iap_store") == 0 )
    *a1 = 14;
  if ( g4_std::string::compare(v1, "menu_weekly_event") == 0 )
    *a1 = 15;
  if ( g4_std::string::compare(v1, "minigame_slotmachine") == 0 )
    *a1 = 16;
  if ( g4_std::string::compare(v1, "minigame_videopoker") == 0 )
    *a1 = 17;
  result = g4_std::string::compare(v1, "menu_item_anim");
  if ( result == 0 )
    *a1 = 21;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BE4BB0  (binary VA: 0xbe4bb0)
// Original: sub_BE4BB0
// ----------------------------------------------------------------------------
int sub_BE4BB0(int a1)
{
  unsigned int v1;
  int v2;
  uint32_t *v3;
  int result;
  typedef uint8_t _g4_t_v5[36];
  typedef uint8_t _g4_t_v6[48];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v6)) > _g4_s1 ? (44u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 44u);

  v1 = *(uint32_t *)(a1 + 20);
  v2 = sub_732CE0();
  v3 = (uint32_t *)sub_733A60(v2, v1);
  result = 0;
  if ( v3 != nullptr && *v3 != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v6, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v5);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v6);
    if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v5) != 0
      && g4_std::string::compare(a1 + 12, "menu_quickplay") != 0 )
    {
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v5);
      return 1;
    }
    else
    {
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v5);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BE4CB0  (binary VA: 0xbe4cb0)
// Original: sub_BE4CB0
// ----------------------------------------------------------------------------
int sub_BE4CB0(int a1)
{
  int v1;
  int v2;
  const gameswf::String::Self **v3;
  const gameswf::String::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  char *v9;
  char *v10;
  gameswf::Self *v11;
  bool v12;
  size_t v13;
  char *v14;
  size_t v15;
  char v16;
  int v18;
  const gameswf::String::Self **v19;
  const gameswf::String::Self *v20;
  gameswf::Self *v21;
  gameswf::Self *v22;
  gameswf::Self *v23;
  gameswf::Self *v24;
  char *v25;
  char *v26;
  gameswf::Self *v27;
  size_t v28;
  int v29;
  const gameswf::String::Self **v30;
  const gameswf::String::Self *v31;
  gameswf::Self *v32;
  gameswf::Self *v33;
  gameswf::Self *v34;
  gameswf::Self *v35;
  char *v36;
  char *v37;
  gameswf::Self *v38;
  size_t v39;
  int v40;
  int v41;
  int v42;
  int v43;
  typedef unsigned int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef const char *_g4_t_v47;
  typedef const char *_g4_t_v48;
  typedef const char *_g4_t_v49;
  typedef const char *_g4_t_v50;
  typedef const char *_g4_t_v51;
  typedef const char *_g4_t_v52;
  typedef const char *_g4_t_v53;
  typedef const char *_g4_t_v54;
  typedef const char *_g4_t_v55;
  typedef const char *_g4_t_v56;
  typedef uint8_t _g4_t_v57;
  typedef int _g4_t_v58;
  typedef char *_g4_t_s;
  typedef char *_g4_t_sa;
  typedef void *_g4_t_s2[4];
  typedef gameswf::Self *_g4_t_v62[4];
  typedef gameswf::Self *_g4_t_v63[4];
  typedef gameswf::Self *_g4_t_v64[4];
  typedef unsigned int _g4_t_v65;
  typedef char *_g4_t_v66;
  typedef unsigned int _g4_t_v67[4];
  typedef unsigned int _g4_t_v68[3];
  typedef uint8_t _g4_t_v69[12];
  typedef uint8_t _g4_t_v70[12];
  typedef uint8_t _g4_t_v71[12];
  typedef char _g4_t_v72;
  typedef char _g4_t_v73;
  typedef void *_g4_t_v74;
  typedef gameswf::Self *_g4_t_v75;
  typedef int16_t _g4_t_v76;
  typedef char _g4_t_v77;
  typedef char _g4_t_v78;
  typedef char _g4_t_v79;
  typedef char _g4_t_v80;
  typedef void *_g4_t_v81;
  typedef gameswf::Self *_g4_t_v82;
  typedef int16_t _g4_t_v83;
  typedef char _g4_t_v84;
  typedef char _g4_t_v85;
  typedef char _g4_t_v86;
  typedef char _g4_t_v87;
  typedef void *_g4_t_v88;
  typedef gameswf::Self *_g4_t_v89;
  typedef int16_t _g4_t_v90;
  typedef char _g4_t_v91;
  typedef char _g4_t_v92;
  typedef char _g4_t_v93;
  typedef char _g4_t_v94;
  typedef void *_g4_t_v95;
  typedef gameswf::Self *_g4_t_v96;
  typedef int16_t _g4_t_v97;
  typedef char _g4_t_v98;
  typedef char _g4_t_v99;
  typedef char _g4_t_v100;
  typedef char _g4_t_v101;
  typedef void *_g4_t_v102;
  typedef gameswf::Self *_g4_t_v103;
  typedef int16_t _g4_t_v104;
  typedef char _g4_t_v105;
  typedef char _g4_t_v106;
  typedef char _g4_t_v107;
  typedef char _g4_t_v108;
  typedef void *_g4_t_v109;
  typedef gameswf::Self *_g4_t_v110;
  typedef int16_t _g4_t_v111;
  typedef char _g4_t_v112;
  typedef char _g4_t_v113;
  typedef char _g4_t_v114;
  typedef char _g4_t_v115;
  typedef void *_g4_t_v116;
  typedef gameswf::Self *_g4_t_v117;
  typedef int16_t _g4_t_v118;
  typedef char _g4_t_v119;
  typedef char _g4_t_v120;
  typedef char _g4_t_v121;
  typedef char _g4_t_v122;
  typedef void *_g4_t_v123;
  typedef gameswf::Self *_g4_t_v124;
  typedef int16_t _g4_t_v125;
  typedef char _g4_t_v126;
  typedef char _g4_t_v127;
  typedef char _g4_t_v128;
  typedef char _g4_t_v129;
  typedef void *_g4_t_v130;
  typedef gameswf::Self *_g4_t_v131;
  typedef int16_t _g4_t_v132;
  typedef char _g4_t_v133;
  typedef char _g4_t_v134;
  typedef char _g4_t_v135;
  typedef char _g4_t_v136;
  typedef void *_g4_t_v137;
  typedef gameswf::Self *_g4_t_v138;
  typedef int16_t _g4_t_v139;
  typedef char _g4_t_v140;
  typedef char _g4_t_v141;
  typedef char _g4_t_v142;
  typedef char _g4_t_v143;
  typedef void *_g4_t_v144;
  typedef gameswf::Self *_g4_t_v145;
  typedef int16_t _g4_t_v146;
  typedef char _g4_t_v147;
  typedef char _g4_t_v148;
  typedef char _g4_t_v149;
  typedef char _g4_t_v150;
  typedef void *_g4_t_v151;
  typedef gameswf::Self *_g4_t_v152;
  typedef int16_t _g4_t_v153;
  typedef char _g4_t_v154;
  typedef char _g4_t_v155;
  typedef int *_g4_t_v156;
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (8u + sizeof(_g4_t_v44)) > _g4_s0 ? (8u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v45)) > _g4_s1 ? (8u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v46)) > _g4_s2 ? (8u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v47)) > _g4_s3 ? (12u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v48)) > _g4_s4 ? (12u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v49)) > _g4_s5 ? (12u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v50)) > _g4_s6 ? (12u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v51)) > _g4_s7 ? (12u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v52)) > _g4_s8 ? (12u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v53)) > _g4_s9 ? (12u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v54)) > _g4_s10 ? (12u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v55)) > _g4_s11 ? (12u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v56)) > _g4_s12 ? (12u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v57)) > _g4_s13 ? (32u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v58)) > _g4_s14 ? (40u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_s)) > _g4_s15 ? (44u + sizeof(_g4_t_s)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_sa)) > _g4_s16 ? (44u + sizeof(_g4_t_sa)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_s2)) > _g4_s17 ? (48u + sizeof(_g4_t_s2)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v62)) > _g4_s18 ? (64u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v63)) > _g4_s19 ? (80u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v64)) > _g4_s20 ? (96u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v65)) > _g4_s21 ? (112u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v66)) > _g4_s22 ? (116u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v67)) > _g4_s23 ? (128u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v68)) > _g4_s24 ? (144u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (156u + sizeof(_g4_t_v69)) > _g4_s25 ? (156u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (168u + sizeof(_g4_t_v70)) > _g4_s26 ? (168u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (180u + sizeof(_g4_t_v71)) > _g4_s27 ? (180u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (192u + sizeof(_g4_t_v72)) > _g4_s28 ? (192u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (193u + sizeof(_g4_t_v73)) > _g4_s29 ? (193u + sizeof(_g4_t_v73)) : _g4_s29,
    _g4_s31 = (200u + sizeof(_g4_t_v74)) > _g4_s30 ? (200u + sizeof(_g4_t_v74)) : _g4_s30,
    _g4_s32 = (204u + sizeof(_g4_t_v75)) > _g4_s31 ? (204u + sizeof(_g4_t_v75)) : _g4_s31,
    _g4_s33 = (208u + sizeof(_g4_t_v76)) > _g4_s32 ? (208u + sizeof(_g4_t_v76)) : _g4_s32,
    _g4_s34 = (210u + sizeof(_g4_t_v77)) > _g4_s33 ? (210u + sizeof(_g4_t_v77)) : _g4_s33,
    _g4_s35 = (211u + sizeof(_g4_t_v78)) > _g4_s34 ? (211u + sizeof(_g4_t_v78)) : _g4_s34,
    _g4_s36 = (224u + sizeof(_g4_t_v79)) > _g4_s35 ? (224u + sizeof(_g4_t_v79)) : _g4_s35,
    _g4_s37 = (225u + sizeof(_g4_t_v80)) > _g4_s36 ? (225u + sizeof(_g4_t_v80)) : _g4_s36,
    _g4_s38 = (232u + sizeof(_g4_t_v81)) > _g4_s37 ? (232u + sizeof(_g4_t_v81)) : _g4_s37,
    _g4_s39 = (236u + sizeof(_g4_t_v82)) > _g4_s38 ? (236u + sizeof(_g4_t_v82)) : _g4_s38,
    _g4_s40 = (240u + sizeof(_g4_t_v83)) > _g4_s39 ? (240u + sizeof(_g4_t_v83)) : _g4_s39,
    _g4_s41 = (242u + sizeof(_g4_t_v84)) > _g4_s40 ? (242u + sizeof(_g4_t_v84)) : _g4_s40,
    _g4_s42 = (243u + sizeof(_g4_t_v85)) > _g4_s41 ? (243u + sizeof(_g4_t_v85)) : _g4_s41,
    _g4_s43 = (256u + sizeof(_g4_t_v86)) > _g4_s42 ? (256u + sizeof(_g4_t_v86)) : _g4_s42,
    _g4_s44 = (257u + sizeof(_g4_t_v87)) > _g4_s43 ? (257u + sizeof(_g4_t_v87)) : _g4_s43,
    _g4_s45 = (264u + sizeof(_g4_t_v88)) > _g4_s44 ? (264u + sizeof(_g4_t_v88)) : _g4_s44,
    _g4_s46 = (268u + sizeof(_g4_t_v89)) > _g4_s45 ? (268u + sizeof(_g4_t_v89)) : _g4_s45,
    _g4_s47 = (272u + sizeof(_g4_t_v90)) > _g4_s46 ? (272u + sizeof(_g4_t_v90)) : _g4_s46,
    _g4_s48 = (274u + sizeof(_g4_t_v91)) > _g4_s47 ? (274u + sizeof(_g4_t_v91)) : _g4_s47,
    _g4_s49 = (275u + sizeof(_g4_t_v92)) > _g4_s48 ? (275u + sizeof(_g4_t_v92)) : _g4_s48,
    _g4_s50 = (288u + sizeof(_g4_t_v93)) > _g4_s49 ? (288u + sizeof(_g4_t_v93)) : _g4_s49,
    _g4_s51 = (289u + sizeof(_g4_t_v94)) > _g4_s50 ? (289u + sizeof(_g4_t_v94)) : _g4_s50,
    _g4_s52 = (296u + sizeof(_g4_t_v95)) > _g4_s51 ? (296u + sizeof(_g4_t_v95)) : _g4_s51,
    _g4_s53 = (300u + sizeof(_g4_t_v96)) > _g4_s52 ? (300u + sizeof(_g4_t_v96)) : _g4_s52,
    _g4_s54 = (304u + sizeof(_g4_t_v97)) > _g4_s53 ? (304u + sizeof(_g4_t_v97)) : _g4_s53,
    _g4_s55 = (306u + sizeof(_g4_t_v98)) > _g4_s54 ? (306u + sizeof(_g4_t_v98)) : _g4_s54,
    _g4_s56 = (307u + sizeof(_g4_t_v99)) > _g4_s55 ? (307u + sizeof(_g4_t_v99)) : _g4_s55,
    _g4_s57 = (320u + sizeof(_g4_t_v100)) > _g4_s56 ? (320u + sizeof(_g4_t_v100)) : _g4_s56,
    _g4_s58 = (321u + sizeof(_g4_t_v101)) > _g4_s57 ? (321u + sizeof(_g4_t_v101)) : _g4_s57,
    _g4_s59 = (328u + sizeof(_g4_t_v102)) > _g4_s58 ? (328u + sizeof(_g4_t_v102)) : _g4_s58,
    _g4_s60 = (332u + sizeof(_g4_t_v103)) > _g4_s59 ? (332u + sizeof(_g4_t_v103)) : _g4_s59,
    _g4_s61 = (336u + sizeof(_g4_t_v104)) > _g4_s60 ? (336u + sizeof(_g4_t_v104)) : _g4_s60,
    _g4_s62 = (338u + sizeof(_g4_t_v105)) > _g4_s61 ? (338u + sizeof(_g4_t_v105)) : _g4_s61,
    _g4_s63 = (339u + sizeof(_g4_t_v106)) > _g4_s62 ? (339u + sizeof(_g4_t_v106)) : _g4_s62,
    _g4_s64 = (352u + sizeof(_g4_t_v107)) > _g4_s63 ? (352u + sizeof(_g4_t_v107)) : _g4_s63,
    _g4_s65 = (353u + sizeof(_g4_t_v108)) > _g4_s64 ? (353u + sizeof(_g4_t_v108)) : _g4_s64,
    _g4_s66 = (360u + sizeof(_g4_t_v109)) > _g4_s65 ? (360u + sizeof(_g4_t_v109)) : _g4_s65,
    _g4_s67 = (364u + sizeof(_g4_t_v110)) > _g4_s66 ? (364u + sizeof(_g4_t_v110)) : _g4_s66,
    _g4_s68 = (368u + sizeof(_g4_t_v111)) > _g4_s67 ? (368u + sizeof(_g4_t_v111)) : _g4_s67,
    _g4_s69 = (370u + sizeof(_g4_t_v112)) > _g4_s68 ? (370u + sizeof(_g4_t_v112)) : _g4_s68,
    _g4_s70 = (371u + sizeof(_g4_t_v113)) > _g4_s69 ? (371u + sizeof(_g4_t_v113)) : _g4_s69,
    _g4_s71 = (384u + sizeof(_g4_t_v114)) > _g4_s70 ? (384u + sizeof(_g4_t_v114)) : _g4_s70,
    _g4_s72 = (385u + sizeof(_g4_t_v115)) > _g4_s71 ? (385u + sizeof(_g4_t_v115)) : _g4_s71,
    _g4_s73 = (392u + sizeof(_g4_t_v116)) > _g4_s72 ? (392u + sizeof(_g4_t_v116)) : _g4_s72,
    _g4_s74 = (396u + sizeof(_g4_t_v117)) > _g4_s73 ? (396u + sizeof(_g4_t_v117)) : _g4_s73,
    _g4_s75 = (400u + sizeof(_g4_t_v118)) > _g4_s74 ? (400u + sizeof(_g4_t_v118)) : _g4_s74,
    _g4_s76 = (402u + sizeof(_g4_t_v119)) > _g4_s75 ? (402u + sizeof(_g4_t_v119)) : _g4_s75,
    _g4_s77 = (403u + sizeof(_g4_t_v120)) > _g4_s76 ? (403u + sizeof(_g4_t_v120)) : _g4_s76,
    _g4_s78 = (416u + sizeof(_g4_t_v121)) > _g4_s77 ? (416u + sizeof(_g4_t_v121)) : _g4_s77,
    _g4_s79 = (417u + sizeof(_g4_t_v122)) > _g4_s78 ? (417u + sizeof(_g4_t_v122)) : _g4_s78,
    _g4_s80 = (424u + sizeof(_g4_t_v123)) > _g4_s79 ? (424u + sizeof(_g4_t_v123)) : _g4_s79,
    _g4_s81 = (428u + sizeof(_g4_t_v124)) > _g4_s80 ? (428u + sizeof(_g4_t_v124)) : _g4_s80,
    _g4_s82 = (432u + sizeof(_g4_t_v125)) > _g4_s81 ? (432u + sizeof(_g4_t_v125)) : _g4_s81,
    _g4_s83 = (434u + sizeof(_g4_t_v126)) > _g4_s82 ? (434u + sizeof(_g4_t_v126)) : _g4_s82,
    _g4_s84 = (435u + sizeof(_g4_t_v127)) > _g4_s83 ? (435u + sizeof(_g4_t_v127)) : _g4_s83,
    _g4_s85 = (448u + sizeof(_g4_t_v128)) > _g4_s84 ? (448u + sizeof(_g4_t_v128)) : _g4_s84,
    _g4_s86 = (449u + sizeof(_g4_t_v129)) > _g4_s85 ? (449u + sizeof(_g4_t_v129)) : _g4_s85,
    _g4_s87 = (456u + sizeof(_g4_t_v130)) > _g4_s86 ? (456u + sizeof(_g4_t_v130)) : _g4_s86,
    _g4_s88 = (460u + sizeof(_g4_t_v131)) > _g4_s87 ? (460u + sizeof(_g4_t_v131)) : _g4_s87,
    _g4_s89 = (464u + sizeof(_g4_t_v132)) > _g4_s88 ? (464u + sizeof(_g4_t_v132)) : _g4_s88,
    _g4_s90 = (466u + sizeof(_g4_t_v133)) > _g4_s89 ? (466u + sizeof(_g4_t_v133)) : _g4_s89,
    _g4_s91 = (467u + sizeof(_g4_t_v134)) > _g4_s90 ? (467u + sizeof(_g4_t_v134)) : _g4_s90,
    _g4_s92 = (480u + sizeof(_g4_t_v135)) > _g4_s91 ? (480u + sizeof(_g4_t_v135)) : _g4_s91,
    _g4_s93 = (481u + sizeof(_g4_t_v136)) > _g4_s92 ? (481u + sizeof(_g4_t_v136)) : _g4_s92,
    _g4_s94 = (488u + sizeof(_g4_t_v137)) > _g4_s93 ? (488u + sizeof(_g4_t_v137)) : _g4_s93,
    _g4_s95 = (492u + sizeof(_g4_t_v138)) > _g4_s94 ? (492u + sizeof(_g4_t_v138)) : _g4_s94,
    _g4_s96 = (496u + sizeof(_g4_t_v139)) > _g4_s95 ? (496u + sizeof(_g4_t_v139)) : _g4_s95,
    _g4_s97 = (498u + sizeof(_g4_t_v140)) > _g4_s96 ? (498u + sizeof(_g4_t_v140)) : _g4_s96,
    _g4_s98 = (499u + sizeof(_g4_t_v141)) > _g4_s97 ? (499u + sizeof(_g4_t_v141)) : _g4_s97,
    _g4_s99 = (512u + sizeof(_g4_t_v142)) > _g4_s98 ? (512u + sizeof(_g4_t_v142)) : _g4_s98,
    _g4_s100 = (513u + sizeof(_g4_t_v143)) > _g4_s99 ? (513u + sizeof(_g4_t_v143)) : _g4_s99,
    _g4_s101 = (520u + sizeof(_g4_t_v144)) > _g4_s100 ? (520u + sizeof(_g4_t_v144)) : _g4_s100,
    _g4_s102 = (524u + sizeof(_g4_t_v145)) > _g4_s101 ? (524u + sizeof(_g4_t_v145)) : _g4_s101,
    _g4_s103 = (528u + sizeof(_g4_t_v146)) > _g4_s102 ? (528u + sizeof(_g4_t_v146)) : _g4_s102,
    _g4_s104 = (530u + sizeof(_g4_t_v147)) > _g4_s103 ? (530u + sizeof(_g4_t_v147)) : _g4_s103,
    _g4_s105 = (531u + sizeof(_g4_t_v148)) > _g4_s104 ? (531u + sizeof(_g4_t_v148)) : _g4_s104,
    _g4_s106 = (544u + sizeof(_g4_t_v149)) > _g4_s105 ? (544u + sizeof(_g4_t_v149)) : _g4_s105,
    _g4_s107 = (545u + sizeof(_g4_t_v150)) > _g4_s106 ? (545u + sizeof(_g4_t_v150)) : _g4_s106,
    _g4_s108 = (552u + sizeof(_g4_t_v151)) > _g4_s107 ? (552u + sizeof(_g4_t_v151)) : _g4_s107,
    _g4_s109 = (556u + sizeof(_g4_t_v152)) > _g4_s108 ? (556u + sizeof(_g4_t_v152)) : _g4_s108,
    _g4_s110 = (560u + sizeof(_g4_t_v153)) > _g4_s109 ? (560u + sizeof(_g4_t_v153)) : _g4_s109,
    _g4_s111 = (562u + sizeof(_g4_t_v154)) > _g4_s110 ? (562u + sizeof(_g4_t_v154)) : _g4_s110,
    _g4_s112 = (563u + sizeof(_g4_t_v155)) > _g4_s111 ? (563u + sizeof(_g4_t_v155)) : _g4_s111,
    _g4_s113 = (584u + sizeof(_g4_t_v156)) > _g4_s112 ? (584u + sizeof(_g4_t_v156)) : _g4_s112
  };
  alignas(16) uint8_t _g4_sf[_g4_s113];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 44u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 44u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 80u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 96u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 112u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 116u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 128u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 144u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 156u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 168u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 180u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 192u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 193u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 200u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 204u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 208u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 210u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 211u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 224u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 225u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 232u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 236u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 240u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 242u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 243u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 256u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 257u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 264u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 268u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 272u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 274u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 275u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 288u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 289u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 296u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 300u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 304u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 306u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 307u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 320u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 321u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 328u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 332u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 336u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 338u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 339u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 352u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 353u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 360u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 364u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 368u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 370u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 371u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 384u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 385u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 392u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 396u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 400u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 402u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 403u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 416u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 417u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 424u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 428u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 432u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 434u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 435u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 448u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 449u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 456u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 460u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 464u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 466u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 467u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 480u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 481u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 488u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 492u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 496u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 498u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 499u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 512u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 513u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 520u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 524u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 528u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 530u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 531u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 544u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 545u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 552u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 556u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 560u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 562u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 563u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 584u);

  v1 = 0;
  v156 = &a1;
  v58 = a1;
  if ( *(uint8_t *)(a1 + 16) != 0 )
  {
    s2[0] = &dword_213B814;
    v2 = sub_732CE0();
    v3 = (const gameswf::String::Self **)sub_733A60(v2, 0);
    if ( v3 != nullptr )
    {
      v4 = *v3;
      if ( *v3 != nullptr )
      {
        v93 = 1;
        v94 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v93, 4);
        v5 = (gameswf::Self *)&v94;
        if ( v93 == -1 )
          v5 = v96;
        gameswf::Strcpy_s(v5, (char *)&loc_4 + 1, (gameswf::Self *)"name", v47);
        v86 = 1;
        v97 = -1;
        v87 = 0;
        v98 = 127;
        v99 |= 1u;
        gameswf::String::resize((gameswf::String::Self *)&v86, 19);
        v6 = (gameswf::Self *)&v87;
        if ( v86 == -1 )
          v6 = v89;
        gameswf::Strcpy_s(v6, (char *)&dword_14, (gameswf::Self *)"getMenuOnTopOfStack", v48);
        v79 = 1;
        v90 = -1;
        v80 = 0;
        v91 = 127;
        v92 |= 1u;
        gameswf::String::resize((gameswf::String::Self *)&v79, 10);
        v7 = (gameswf::Self *)&v80;
        if ( v79 == -1 )
          v7 = v82;
        gameswf::Strcpy_s(v7, &byte_9[2], (gameswf::Self *)"MenusStack", v49);
        v83 = -1;
        v72 = 1;
        v84 = 127;
        v85 |= 1u;
        v73 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v72, 22);
        v8 = (gameswf::Self *)&v73;
        if ( v72 == -1 )
          v8 = v75;
        gameswf::Strcpy_s(v8, (char *)&dword_14 + 3, (gameswf::Self *)"gluic.components.menus", v50);
        v76 = -1;
        v77 = 127;
        v78 |= 1u;
        gameswf::RenderFX::findClass((gameswf::RenderFX::Self *)v62, v4, (const gameswf::String::Self *)&v72);
        gameswf::ASClassHandle::invokeStaticMethod(
          (gameswf::ASClassHandle::Self *)v69,
          (const gameswf::String::Self *)v62,
          (const gameswf::ASValue::Self *)&v86,
          0);
        LOWORD(v65) = 0;
        gameswf::ASValue::getMember((gameswf::ASValue::Self *)v69, (const gameswf::String::Self *)&v93, (gameswf::ASValue::Self *)&v65);
        v9 = v66;
        if ( (uint8_t)v65 != 3 )
        {
          if ( (uint8_t)v65 == 4 )
          {
            v9 = v66;
          }
          else
          {
            v9 = (char *)(&byte_20D6378);
            if ( byte_20D6370 == 0 )
            {
              v41 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
              v9 = (char *)(&byte_20D6378);
              if ( v41 != 0 )
              {
                dword_20D6388 |= 0x7FFFFFu;
                byte_20D6378 = 1;
                byte_20D6379 = 0;
                BYTE2(dword_20D6388) &= ~0x80u;
                HIBYTE(dword_20D6388) |= 1u;
                _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
                __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
                v9 = (char *)(&byte_20D6378);
              }
            }
          }
        }
        if ( *v9 == -1 )
          v10 = *((char **)v9 + 3);
        else
          v10 = v9 + 1;
        s = v10;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v65);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v69);
        v11 = v62[0];
        if ( v62[0] != nullptr )
        {
          v12 = (*(uint16_t *)v62[0])-- == 1;
          if ( v12 )
            gameswf::free_internal(v11, nullptr, v44);
        }
        if ( v72 == -1 && (v78 & 1) != 0 )
          gameswf::free_internal(v75, v74, v44);
        if ( v79 == -1 && (v85 & 1) != 0 )
          gameswf::free_internal(v82, v81, v44);
        if ( v86 == -1 && (v92 & 1) != 0 )
          gameswf::free_internal(v89, v88, v44);
        if ( v93 == -1 && (v99 & 1) != 0 )
          gameswf::free_internal(v96, v95, v44);
        v13 = strlen(s);
        g4_std_compat::string_assign((int)(uintptr_t)(s2), s, v13);
        if ( g4_std::string::compare((int)(uintptr_t)(s2), (char *)&unk_1B15112) != 0 )
          goto LABEL_25;
      }
    }
    v18 = sub_732CE0();
    v19 = (const gameswf::String::Self **)sub_733A60(v18, 1);
    if ( v19 != nullptr )
    {
      v20 = *v19;
      if ( *v19 != nullptr )
      {
        v121 = 1;
        v122 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v121, 4);
        v21 = (gameswf::Self *)&v122;
        if ( v121 == -1 )
          v21 = v124;
        gameswf::Strcpy_s(v21, (char *)&loc_4 + 1, (gameswf::Self *)"name", v47);
        v114 = 1;
        v125 = -1;
        v115 = 0;
        v126 = 127;
        v127 |= 1u;
        gameswf::String::resize((gameswf::String::Self *)&v114, 19);
        v22 = (gameswf::Self *)&v115;
        if ( v114 == -1 )
          v22 = v117;
        gameswf::Strcpy_s(v22, (char *)&dword_14, (gameswf::Self *)"getMenuOnTopOfStack", v51);
        v107 = 1;
        v118 = -1;
        v108 = 0;
        v119 = 127;
        v120 |= 1u;
        gameswf::String::resize((gameswf::String::Self *)&v107, 10);
        v23 = (gameswf::Self *)&v108;
        if ( v107 == -1 )
          v23 = v110;
        gameswf::Strcpy_s(v23, &byte_9[2], (gameswf::Self *)"MenusStack", v52);
        v100 = 1;
        v111 = -1;
        v101 = 0;
        v112 = 127;
        v113 |= 1u;
        gameswf::String::resize((gameswf::String::Self *)&v100, 22);
        v24 = (gameswf::Self *)&v101;
        if ( v100 == -1 )
          v24 = v103;
        gameswf::Strcpy_s(v24, (char *)&dword_14 + 3, (gameswf::Self *)"gluic.components.menus", v53);
        v104 = -1;
        v105 = 127;
        v106 |= 1u;
        gameswf::RenderFX::findClass((gameswf::RenderFX::Self *)v63, v20, (const gameswf::String::Self *)&v100);
        gameswf::ASClassHandle::invokeStaticMethod(
          (gameswf::ASClassHandle::Self *)v70,
          (const gameswf::String::Self *)v63,
          (const gameswf::ASValue::Self *)&v114,
          0);
        LOWORD(v67[0]) = 0;
        gameswf::ASValue::getMember((gameswf::ASValue::Self *)v70, (const gameswf::String::Self *)&v121, (gameswf::ASValue::Self *)v67);
        if ( LOBYTE(v67[0]) == 3 || LOBYTE(v67[0]) == 4 )
        {
          v25 = (char *)v67[1];
        }
        else
        {
          v25 = (char *)(&byte_20D6378);
          if ( byte_20D6370 == 0 )
          {
            v42 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
            v25 = (char *)(&byte_20D6378);
            if ( v42 != 0 )
            {
              dword_20D6388 |= 0x7FFFFFu;
              byte_20D6378 = 1;
              byte_20D6379 = 0;
              BYTE2(dword_20D6388) &= ~0x80u;
              HIBYTE(dword_20D6388) |= 1u;
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
              __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
              v25 = (char *)(&byte_20D6378);
            }
          }
        }
        if ( *v25 == -1 )
          v26 = *((char **)v25 + 3);
        else
          v26 = v25 + 1;
        s = v26;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v67);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v70);
        v27 = v63[0];
        if ( v63[0] != nullptr )
        {
          v12 = (*(uint16_t *)v63[0])-- == 1;
          if ( v12 )
            gameswf::free_internal(v27, nullptr, v45);
        }
        if ( v100 == -1 && (v106 & 1) != 0 )
          gameswf::free_internal(v103, v102, v45);
        if ( v107 == -1 && (v113 & 1) != 0 )
          gameswf::free_internal(v110, v109, v45);
        if ( v114 == -1 && (v120 & 1) != 0 )
          gameswf::free_internal(v117, v116, v45);
        if ( v121 == -1 && (v127 & 1) != 0 )
          gameswf::free_internal(v124, v123, v45);
        v28 = strlen(s);
        g4_std_compat::string_assign((int)(uintptr_t)(s2), s, v28);
        if ( g4_std::string::compare((int)(uintptr_t)(s2), (char *)&unk_1B15112) != 0 )
          goto LABEL_25;
      }
    }
    v29 = sub_732CE0();
    v30 = (const gameswf::String::Self **)sub_733A60(v29, 2);
    v16 = 0;
    if ( v30 != nullptr )
    {
      v31 = *v30;
      if ( *v30 != nullptr )
      {
        v149 = 1;
        v150 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v149, 4);
        v32 = (gameswf::Self *)&v150;
        if ( v149 == -1 )
          v32 = v152;
        gameswf::Strcpy_s(v32, (char *)&loc_4 + 1, (gameswf::Self *)"name", v47);
        v142 = 1;
        v153 = -1;
        v143 = 0;
        v154 = 127;
        v155 |= 1u;
        gameswf::String::resize((gameswf::String::Self *)&v142, 19);
        v33 = (gameswf::Self *)&v143;
        if ( v142 == -1 )
          v33 = v145;
        gameswf::Strcpy_s(v33, (char *)&dword_14, (gameswf::Self *)"getMenuOnTopOfStack", v54);
        v135 = 1;
        v146 = -1;
        v136 = 0;
        v147 = 127;
        v148 |= 1u;
        gameswf::String::resize((gameswf::String::Self *)&v135, 10);
        v34 = (gameswf::Self *)&v136;
        if ( v135 == -1 )
          v34 = v138;
        gameswf::Strcpy_s(v34, &byte_9[2], (gameswf::Self *)"MenusStack", v55);
        v128 = 1;
        v139 = -1;
        v129 = 0;
        v140 = 127;
        v141 |= 1u;
        gameswf::String::resize((gameswf::String::Self *)&v128, 22);
        v35 = (gameswf::Self *)&v129;
        if ( v128 == -1 )
          v35 = v131;
        gameswf::Strcpy_s(v35, (char *)&dword_14 + 3, (gameswf::Self *)"gluic.components.menus", v56);
        v132 = -1;
        v133 = 127;
        v134 |= 1u;
        gameswf::RenderFX::findClass((gameswf::RenderFX::Self *)v64, v31, (const gameswf::String::Self *)&v128);
        gameswf::ASClassHandle::invokeStaticMethod(
          (gameswf::ASClassHandle::Self *)v71,
          (const gameswf::String::Self *)v64,
          (const gameswf::ASValue::Self *)&v142,
          0);
        LOWORD(v68[0]) = 0;
        gameswf::ASValue::getMember((gameswf::ASValue::Self *)v71, (const gameswf::String::Self *)&v149, (gameswf::ASValue::Self *)v68);
        if ( LOBYTE(v68[0]) == 3 || LOBYTE(v68[0]) == 4 )
        {
          v36 = (char *)v68[1];
        }
        else
        {
          v36 = (char *)(&byte_20D6378);
          if ( byte_20D6370 == 0 )
          {
            v43 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
            v36 = (char *)(&byte_20D6378);
            if ( v43 != 0 )
            {
              dword_20D6388 |= 0x7FFFFFu;
              byte_20D6378 = 1;
              byte_20D6379 = 0;
              BYTE2(dword_20D6388) &= ~0x80u;
              HIBYTE(dword_20D6388) |= 1u;
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
              __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
              v36 = (char *)(&byte_20D6378);
            }
          }
        }
        if ( *v36 == -1 )
          v37 = *((char **)v36 + 3);
        else
          v37 = v36 + 1;
        s = v37;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v68);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v71);
        v38 = v64[0];
        if ( v64[0] != nullptr )
        {
          v12 = (*(uint16_t *)v64[0])-- == 1;
          if ( v12 )
            gameswf::free_internal(v38, nullptr, v46);
        }
        if ( v128 == -1 && (v134 & 1) != 0 )
          gameswf::free_internal(v131, v130, v46);
        if ( v135 == -1 && (v141 & 1) != 0 )
          gameswf::free_internal(v138, v137, v46);
        if ( v142 == -1 && (v148 & 1) != 0 )
          gameswf::free_internal(v145, v144, v46);
        if ( v149 == -1 && (v155 & 1) != 0 )
          gameswf::free_internal(v152, v151, v46);
        v39 = strlen(s);
        g4_std_compat::string_assign((int)(uintptr_t)(s2), s, v39);
        v40 = g4_std::string::compare((int)(uintptr_t)(s2), (char *)&unk_1B15112);
        v16 = 0;
        if ( v40 != 0 )
        {
LABEL_25:
          sub_BE37B0(v58, s);
          v14 = *(char **)(*(uint32_t *)(v58 + 12) - 12);
          v15 = *((uint32_t *)s2[0] - 3);
          sa = (char *)v15;
          if ( v15 > (unsigned int)(uintptr_t)(v14) )
            v15 = *(uint32_t *)(*(uint32_t *)(v58 + 12) - 12);
          if ( memcmp(*(const void **)(v58 + 12), s2[0], v15) == 0 && v14 == sa )
          {
            v16 = 1;
          }
          else
          {
            *(uint32_t *)(v58 + 4) = 0;
            g4_std::string::assign_str(v58 + 12, s2);
            sub_BE4940(v58);
            *(uint8_t *)(v58 + 8) = 1;
            *(uint32_t *)(v58 + 4) = 0;
            v16 = 1;
          }
        }
      }
    }
    v57 = v16;
    g4_std::string::Destroy(s2);
    return v57;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_BE5C70  (binary VA: 0xbe5c70)
// Original: sub_BE5C70
// ----------------------------------------------------------------------------
void sub_BE5C70(int a1, int a2, char a3, int a4)
{
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  gameswf::RenderFX::Self *v10;
  gameswf::Root::Self *v11;
  glf::InputManager::Self *v12;
  int v13;
  glf::InputManager::Self *v14;
  int v15;
  int v16;
  gameswf::RenderFX::Self *Player;
  gameswf::Root::Self *Root;
  glf::InputManager::Self *InputMgr;
  int Gamepad;
  glf::InputManager::Self *v21;
  glf::InputManager::Self *v22;
  int v23;
  int v24;
  glf::InputManager::Self *v25;
  int v26;
  int Character;
  typedef glf::Self *_g4_t_v28;
  typedef glf::Self *_g4_t_v29;
  typedef glf::Self *_g4_t_v30;
  typedef glf::Self *_g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef int _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef uint8_t _g4_t_v45[36];
  typedef uint8_t _g4_t_v46[36];
  typedef uint8_t _g4_t_v47[48];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v29)) > _g4_s1 ? (0u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v30)) > _g4_s2 ? (0u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v31)) > _g4_s3 ? (0u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v32)) > _g4_s4 ? (20u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v33)) > _g4_s5 ? (20u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v34)) > _g4_s6 ? (36u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v35)) > _g4_s7 ? (36u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v36)) > _g4_s8 ? (36u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v37)) > _g4_s9 ? (36u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v38)) > _g4_s10 ? (52u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v39)) > _g4_s11 ? (52u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v40)) > _g4_s12 ? (56u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v41)) > _g4_s13 ? (56u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v42)) > _g4_s14 ? (60u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v43)) > _g4_s15 ? (76u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v44)) > _g4_s16 ? (80u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v45)) > _g4_s17 ? (84u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v46)) > _g4_s18 ? (120u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v47)) > _g4_s19 ? (156u + sizeof(_g4_t_v47)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 80u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 84u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 120u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 156u);

  if ( a4 != 1 )
  {
    if ( a4 != 3 )
      return;
LABEL_4:
    v4 = *(uint32_t *)(a1 + 20);
    v5 = sub_732CE0();
    v6 = (uint32_t *)sub_733A60(v5, v4);
    if ( v6 != nullptr && *v6 != 0 )
    {
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v47, nullptr);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v46);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v47);
      if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v46) == 0 )
      {
LABEL_7:
        gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v46);
        return;
      }
      gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)&v43);
      Player = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v46);
      Root = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(Player);
      gameswf::Root::logicalToScreen(Root, (gameswf::Point::Self *)&v43);
      v39 = v44;
      v41 = v43;
      if ( g4_std::string::compare(a1 + 12, "menu_options_controls") == 0 )
      {
        Character = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v46);
        v37 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)Character + 292))(Character);
        v42 = (int)(v37 * 0.2);
      }
      if ( g4_std::string::compare(a1 + 12, "menu_options_sounds") == 0 )
      {
        v30 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v46);
        v36 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v30 + 292))();
        v42 = (int)(float)(v36 * 0.5);
      }
      if ( a3 != 0 )
      {
        InputMgr = (glf::InputManager::Self *)glf::GetInputMgr(v30);
        Gamepad = glf::InputManager::GetGamepad(InputMgr, 0);
        glf::Gamepad::RaiseTouchEvent(Gamepad, 0, 216, 4, (float)(int)v41, (float)(int)v39, 1);
        v21 = (glf::InputManager::Self *)glf::GetInputMgr(v31);
        v15 = glf::InputManager::GetGamepad(v21, 0);
        v32 = (float)(int)v39;
        v16 = v42 + (int)v41;
        goto LABEL_17;
      }
      v25 = (glf::InputManager::Self *)glf::GetInputMgr(v30);
      v23 = glf::InputManager::GetGamepad(v25, 0);
      v24 = v42 + (int)v41;
      v33 = (float)(int)v39;
      goto LABEL_25;
    }
    return;
  }
  v7 = *(uint32_t *)(a1 + 20);
  v8 = sub_732CE0();
  v9 = (uint32_t *)sub_733A60(v8, v7);
  if ( v9 == nullptr )
    goto LABEL_4;
  if ( *v9 != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v45, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v46);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v45);
    if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v46) == 0 )
      goto LABEL_7;
    gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)&v43);
    v10 = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v46);
    v11 = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(v10);
    gameswf::Root::logicalToScreen(v11, (gameswf::Point::Self *)&v43);
    v38 = v44;
    v40 = v43;
    if ( g4_std::string::compare(a1 + 12, "menu_options_controls") == 0 )
    {
      v26 = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v46);
      v35 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v26 + 292))(v26);
      v42 = (int)(v35 * 0.2);
    }
    if ( g4_std::string::compare(a1 + 12, "menu_options_sounds") == 0 )
    {
      v28 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v46);
      v34 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v28 + 292))();
      v42 = (int)(float)(v34 * 0.5);
    }
    if ( a3 != 0 )
    {
      v12 = (glf::InputManager::Self *)glf::GetInputMgr(v28);
      v13 = glf::InputManager::GetGamepad(v12, 0);
      glf::Gamepad::RaiseTouchEvent(v13, 0, 216, 4, (float)(int)v40, (float)(int)v38, 1);
      v14 = (glf::InputManager::Self *)glf::GetInputMgr(v29);
      v15 = glf::InputManager::GetGamepad(v14, 0);
      v32 = (float)(int)v38;
      v16 = (int)v40 - v42;
LABEL_17:
      glf::Gamepad::RaiseTouchEvent(v15, 0, 217, 4, (float)v16, LODWORD(v32), 1);
      goto LABEL_7;
    }
    v22 = (glf::InputManager::Self *)glf::GetInputMgr(v28);
    v23 = glf::InputManager::GetGamepad(v22, 0);
    v24 = (int)v40 - v42;
    v33 = (float)(int)v38;
LABEL_25:
    glf::Gamepad::RaiseTouchEvent(v23, 0, 218, 4, (float)v24, LODWORD(v33), 1);
    goto LABEL_7;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_BE6540  (binary VA: 0xbe6540)
// Original: sub_BE6540
// ----------------------------------------------------------------------------
int sub_BE6540(uint32_t *a1, char a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int *v5;
  int v6;
  uint32_t *v7;
  int v9;
  uint32_t *v10;
  char v11;
  int v12;
  uint32_t *v13;
  char v14;
  int v15;
  uint32_t *v16;
  gameswf::RenderFX::Self *v17;
  gameswf::Root::Self *v18;
  int Character;
  int v20;
  unsigned int v21;
  uint32_t *v22;
  float v23; // xmm0_4
  float v24; // xmm1_4
  glf::InputManager::Self *v25;
  int v26;
  glf::InputManager::Self *v27;
  int v28;
  int v29;
  gameswf::CharacterHandle::Self *v30;
  int v31;
  uint16_t *v32;
  int v33;
  char v34;
  int v35;
  gameswf::Self *v36;
  char *v37;
  gameswf::Self *v38;
  unsigned int v39;
  gameswf::RenderFX::Self *Player;
  gameswf::Root::Self *Root;
  glf::InputManager::Self *InputMgr;
  int Gamepad;
  glf::InputManager::Self *v44;
  int v45;
  glf::InputManager::Self *v46;
  int v47;
  int v48;
  unsigned int v49;
  uint32_t *v50;
  int v51;
  char v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  typedef glf::Self *_g4_t_v58;
  typedef glf::Self *_g4_t_v59;
  typedef glf::Self *_g4_t_v60;
  typedef glf::Self *_g4_t_v61;
  typedef glf::Self *_g4_t_v62;
  typedef const char *_g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef char _g4_t_v69;
  typedef char _g4_t_v70;
  typedef char _g4_t_v71;
  typedef gameswf::CharacterHandle::Self *_g4_t_v72;
  typedef char _g4_t_v73;
  typedef gameswf::CharacterHandle::Self *_g4_t_v74;
  typedef gameswf::CharacterHandle::Self *_g4_t_v75;
  typedef uint32_t *_g4_t_v76;
  typedef float _g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef float _g4_t_v79;
  typedef char _g4_t_v80;
  typedef int _g4_t_v81;
  typedef float _g4_t_v82;
  typedef char _g4_t_v83;
  typedef gameswf::CharacterHandle::Self *_g4_t_v84;
  typedef gameswf::CharacterHandle::Self *_g4_t_v85;
  typedef gameswf::CharacterHandle::Self *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef int64_t _g4_t_v88 __attribute__((aligned(1)));
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef uint32_t _g4_t_v96[2];
  typedef uint32_t _g4_t_v97[2];
  typedef uint32_t _g4_t_v98[3];
  typedef char _g4_t_v99;
  typedef char _g4_t_v100;
  typedef char *_g4_t_v101;
  typedef gameswf::Self *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef char _g4_t_v104;
  typedef uint8_t _g4_t_v105[36];
  typedef uint8_t _g4_t_v106[36];
  typedef uint8_t _g4_t_v107[36];
  typedef uint8_t _g4_t_v108[36];
  typedef uint8_t _g4_t_v109[36];
  typedef uint32_t _g4_t_v110[9];
  typedef uint32_t _g4_t_v111[15];
  enum : size_t {
    _g4_s0 = 560u,
    _g4_s1 = (8u + sizeof(_g4_t_v58)) > _g4_s0 ? (8u + sizeof(_g4_t_v58)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v59)) > _g4_s1 ? (8u + sizeof(_g4_t_v59)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v60)) > _g4_s2 ? (8u + sizeof(_g4_t_v60)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v61)) > _g4_s3 ? (8u + sizeof(_g4_t_v61)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v62)) > _g4_s4 ? (8u + sizeof(_g4_t_v62)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v63)) > _g4_s5 ? (20u + sizeof(_g4_t_v63)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v64)) > _g4_s6 ? (52u + sizeof(_g4_t_v64)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v65)) > _g4_s7 ? (52u + sizeof(_g4_t_v65)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v66)) > _g4_s8 ? (52u + sizeof(_g4_t_v66)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v67)) > _g4_s9 ? (56u + sizeof(_g4_t_v67)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v68)) > _g4_s10 ? (56u + sizeof(_g4_t_v68)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v69)) > _g4_s11 ? (72u + sizeof(_g4_t_v69)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v70)) > _g4_s12 ? (72u + sizeof(_g4_t_v70)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v71)) > _g4_s13 ? (72u + sizeof(_g4_t_v71)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v72)) > _g4_s14 ? (72u + sizeof(_g4_t_v72)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v73)) > _g4_s15 ? (92u + sizeof(_g4_t_v73)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v74)) > _g4_s16 ? (92u + sizeof(_g4_t_v74)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v75)) > _g4_s17 ? (92u + sizeof(_g4_t_v75)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v76)) > _g4_s18 ? (96u + sizeof(_g4_t_v76)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v77)) > _g4_s19 ? (100u + sizeof(_g4_t_v77)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v78)) > _g4_s20 ? (104u + sizeof(_g4_t_v78)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v79)) > _g4_s21 ? (104u + sizeof(_g4_t_v79)) : _g4_s21,
    _g4_s23 = (111u + sizeof(_g4_t_v80)) > _g4_s22 ? (111u + sizeof(_g4_t_v80)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v81)) > _g4_s23 ? (112u + sizeof(_g4_t_v81)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v82)) > _g4_s24 ? (112u + sizeof(_g4_t_v82)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v83)) > _g4_s25 ? (116u + sizeof(_g4_t_v83)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v84)) > _g4_s26 ? (116u + sizeof(_g4_t_v84)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v85)) > _g4_s27 ? (116u + sizeof(_g4_t_v85)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_v86)) > _g4_s28 ? (116u + sizeof(_g4_t_v86)) : _g4_s28,
    _g4_s30 = (129u + sizeof(_g4_t_v87)) > _g4_s29 ? (129u + sizeof(_g4_t_v87)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v88)) > _g4_s30 ? (132u + sizeof(_g4_t_v88)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v89)) > _g4_s31 ? (140u + sizeof(_g4_t_v89)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v90)) > _g4_s32 ? (144u + sizeof(_g4_t_v90)) : _g4_s32,
    _g4_s34 = (148u + sizeof(_g4_t_v91)) > _g4_s33 ? (148u + sizeof(_g4_t_v91)) : _g4_s33,
    _g4_s35 = (152u + sizeof(_g4_t_v92)) > _g4_s34 ? (152u + sizeof(_g4_t_v92)) : _g4_s34,
    _g4_s36 = (156u + sizeof(_g4_t_v93)) > _g4_s35 ? (156u + sizeof(_g4_t_v93)) : _g4_s35,
    _g4_s37 = (160u + sizeof(_g4_t_v94)) > _g4_s36 ? (160u + sizeof(_g4_t_v94)) : _g4_s36,
    _g4_s38 = (164u + sizeof(_g4_t_v95)) > _g4_s37 ? (164u + sizeof(_g4_t_v95)) : _g4_s37,
    _g4_s39 = (168u + sizeof(_g4_t_v96)) > _g4_s38 ? (168u + sizeof(_g4_t_v96)) : _g4_s38,
    _g4_s40 = (176u + sizeof(_g4_t_v97)) > _g4_s39 ? (176u + sizeof(_g4_t_v97)) : _g4_s39,
    _g4_s41 = (184u + sizeof(_g4_t_v98)) > _g4_s40 ? (184u + sizeof(_g4_t_v98)) : _g4_s40,
    _g4_s42 = (196u + sizeof(_g4_t_v99)) > _g4_s41 ? (196u + sizeof(_g4_t_v99)) : _g4_s41,
    _g4_s43 = (197u + sizeof(_g4_t_v100)) > _g4_s42 ? (197u + sizeof(_g4_t_v100)) : _g4_s42,
    _g4_s44 = (200u + sizeof(_g4_t_v101)) > _g4_s43 ? (200u + sizeof(_g4_t_v101)) : _g4_s43,
    _g4_s45 = (208u + sizeof(_g4_t_v102)) > _g4_s44 ? (208u + sizeof(_g4_t_v102)) : _g4_s44,
    _g4_s46 = (212u + sizeof(_g4_t_v103)) > _g4_s45 ? (212u + sizeof(_g4_t_v103)) : _g4_s45,
    _g4_s47 = (216u + sizeof(_g4_t_v104)) > _g4_s46 ? (216u + sizeof(_g4_t_v104)) : _g4_s46,
    _g4_s48 = (220u + sizeof(_g4_t_v105)) > _g4_s47 ? (220u + sizeof(_g4_t_v105)) : _g4_s47,
    _g4_s49 = (256u + sizeof(_g4_t_v106)) > _g4_s48 ? (256u + sizeof(_g4_t_v106)) : _g4_s48,
    _g4_s50 = (292u + sizeof(_g4_t_v107)) > _g4_s49 ? (292u + sizeof(_g4_t_v107)) : _g4_s49,
    _g4_s51 = (328u + sizeof(_g4_t_v108)) > _g4_s50 ? (328u + sizeof(_g4_t_v108)) : _g4_s50,
    _g4_s52 = (364u + sizeof(_g4_t_v109)) > _g4_s51 ? (364u + sizeof(_g4_t_v109)) : _g4_s51,
    _g4_s53 = (400u + sizeof(_g4_t_v110)) > _g4_s52 ? (400u + sizeof(_g4_t_v110)) : _g4_s52,
    _g4_s54 = (436u + sizeof(_g4_t_v111)) > _g4_s53 ? (436u + sizeof(_g4_t_v111)) : _g4_s53
  };
  alignas(16) uint8_t _g4_sf[_g4_s54];
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 8u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 52u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 72u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 72u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 92u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 92u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 92u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 96u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 100u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 104u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 104u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 111u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 112u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 112u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 116u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 116u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 116u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 116u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 129u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 132u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 140u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 144u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 148u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 152u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 156u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 160u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 164u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 168u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 176u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 184u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 196u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 197u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 200u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 208u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 212u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 216u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 220u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 256u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 292u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 328u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 364u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 400u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 436u);

  v111[11] = (uint32_t)(uintptr_t)(&a1);
  v2 = a1;
  HIDWORD(v88) = (uint32_t)(uintptr_t)(&dword_213B814);
  v80 = a2;
  if ( g4_std::string::compare((int)(uintptr_t)(a1 + 3), (char *)&unk_1B15112) == 0 )
  {
    sub_BE4CB0((int)(uintptr_t)(v2));
    v75 = (gameswf::CharacterHandle::Self *)v2[5];
    v15 = sub_732CE0();
    v16 = (uint32_t *)sub_733A60(v15, v75);
    v84 = (gameswf::CharacterHandle::Self *)(v2 + 10);
    if ( v16 != nullptr && *v16 != 0 )
    {
      gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v105, nullptr);
      v63 = (const char *)(v105);
      gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v106);
      gameswf::CharacterHandle::opAssign((int)(uintptr_t)(v84), (gameswf::CharacterHandle::Self *)v106);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v106);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v105);
    }
    v96[0] = 1140850688;
    v96[1] = 1135542272;
    gameswf::CharacterHandle::setPosition(v84, (const gameswf::Point::Self *)v96);
  }
  if ( g4_std::string::compare((int)(uintptr_t)(v2 + 3), "menu_stock") != 0 )
    goto LABEL_3;
  v74 = (gameswf::CharacterHandle::Self *)v2[5];
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v89), "btn_ready", (int)(uintptr_t)(&v87));
  v12 = sub_732CE0();
  v13 = (uint32_t *)sub_733A60(v12, v74);
  if ( v13 == nullptr || *v13 == 0 )
    goto LABEL_27;
  gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v108, nullptr);
  v63 = (const char *)(v108);
  gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v110);
  gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v108);
  if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v110) == 0 )
  {
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v110);
LABEL_27:
    v14 = 0;
    goto LABEL_41;
  }
  gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v110);
  v14 = 1;
LABEL_41:
  v70 = v14;
  g4_std::string::Destroy(&v89);
  if ( v70 != 0 )
  {
    v81 = v2[5];
    v5 = &v90;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v90), "btn_ready", (int)(uintptr_t)(&v87) + 1);
    sub_BE0440(v81, v80);
    goto LABEL_9;
  }
LABEL_3:
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v91), "dialog_enter_zone", (int)(uintptr_t)(&v87) + 2);
  v3 = sub_732CE0();
  v4 = (uint32_t *)sub_733A60(v3, 0);
  v83 = 0;
  if ( v4 != nullptr && *v4 != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v109, nullptr);
    v63 = (const char *)(v109);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v110);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v109);
    if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v110) != 0 )
    {
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v110);
      v83 = 1;
    }
    else
    {
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v110);
    }
  }
  g4_std::string::Destroy(&v91);
  if ( v83 != 0 )
  {
    v5 = &v92;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v92), "dialog_enter_zone.btn_ok", (int)(uintptr_t)(&v88));
    sub_BE0440(1, v80);
LABEL_9:
    g4_std::string::Destroy(v5);
    goto LABEL_10;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v93), "mc_popup_buyitems", (int)(uintptr_t)(&v88) + 1);
  v9 = sub_732CE0();
  v10 = (uint32_t *)sub_733A60(v9, 2);
  v11 = 0;
  if ( v10 != nullptr && *v10 != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v111, nullptr);
    v63 = (const char *)v111;
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v110);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v111);
    if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v110) != 0 )
    {
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v110);
      v11 = 1;
    }
    else
    {
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v110);
      v11 = 0;
    }
  }
  v73 = v11;
  g4_std::string::Destroy(&v93);
  if ( v73 != 0 )
  {
    g4_std_compat::string_assign((int)(uintptr_t)(&v88) + 4, "mc_popup_buyitems.btn_confirm", 0x1Du);
    goto LABEL_22;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v94), "mc_craft_popup", (int)(uintptr_t)(&v88) + 2);
  v69 = sub_BE0350();
  g4_std::string::Destroy(&v94);
  if ( v69 != 0 )
  {
    g4_std_compat::string_assign((int)(uintptr_t)(&v88) + 4, "mc_craft_popup.btn_confirm", 0x1Au);
LABEL_22:
    v81 = 2;
    goto LABEL_10;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v95), "prompt_iap", (int)(uintptr_t)(&v88) + 3);
  v71 = sub_BE0350();
  g4_std::string::Destroy(&v95);
  if ( v71 != 0 )
  {
    g4_std_compat::string_assign((int)(uintptr_t)(&v88) + 4, "prompt_iap.btn_ok", 0x11u);
    goto LABEL_22;
  }
  if ( g4_std::string::compare((int)(uintptr_t)(v2 + 3), "menu_abilities") == 0 )
  {
    g4_std_compat::string_assign((int)(uintptr_t)(&v88) + 4, "btn_buy", 7u);
    goto LABEL_22;
  }
  if ( g4_std::string::compare((int)(uintptr_t)(v2 + 3), "menu_rewards") == 0 )
  {
    g4_std_compat::string_assign((int)(uintptr_t)(&v88) + 4, "mc_switch.mc_btn_switch", 0x17u);
    goto LABEL_22;
  }
  if ( g4_std::string::compare((int)(uintptr_t)(v2 + 3), "menu_quickplay") != 0 )
  {
    if ( g4_std::string::compare((int)(uintptr_t)(v2 + 3), "menu_map") != 0
      && g4_std::string::compare((int)(uintptr_t)(v2 + 3), "menu_iap_store") != 0
      && g4_std::string::compare((int)(uintptr_t)(v2 + 3), "minigame_blackjack") != 0
      && g4_std::string::compare((int)(uintptr_t)(v2 + 3), "minigame_videopoker") != 0 )
    {
      v48 = v2[20];
      v49 = v2[1];
      if ( *v2 >= (unsigned int)(-1431655765 * ((v2[21] - v48) >> 2)) )
        goto LABEL_87;
      v50 = (uint32_t *)(v48 + 12 * *v2);
      if ( v49 >= (v50[1] - *v50) >> 2 )
        goto LABEL_87;
      v51 = *(uint32_t *)(*v50 + 4 * v49);
      v81 = *(uint32_t *)(v51 + 28);
      g4_std::string::assign_str((char *)&v88 + 4, v51);
    }
    else
    {
      v29 = sub_5BC940();
      v30 = (gameswf::CharacterHandle::Self *)(v2 + 10);
      v31 = v29;
      v86 = (gameswf::CharacterHandle::Self *)(v2 + 10);
      if ( v29 != 0 )
      {
        v98[0] = *(uint32_t *)(v29 + 156);
        v32 = *(uint16_t **)(v29 + 160);
        v98[1] = *(uint32_t *)(v31 + 160);
        if ( v32 != nullptr )
          ++*v32;
        v33 = *(uint32_t *)(v31 + 164);
        v99 = 1;
        v98[2] = v33;
        v100 = 0;
        v34 = *(uint8_t *)(v31 + 168);
        if ( v34 == -1 )
          v35 = *(uint32_t *)(v31 + 172) - 1;
        else
          v35 = v34 - 1;
        gameswf::String::resize((gameswf::String::Self *)&v99, v35);
        v36 = (gameswf::Self *)(v31 + 169);
        if ( *(uint8_t *)(v31 + 168) == 0xFF )
          v36 = *(gameswf::Self **)(v31 + 180);
        if ( v99 == -1 )
        {
          v37 = v101;
          v38 = v102;
        }
        else
        {
          v37 = (char *)v99;
          v38 = (gameswf::Self *)&v100;
        }
        gameswf::Strcpy_s(v38, v37, v36, v63);
        v78 = *(uint32_t *)(v31 + 184);
        if ( (uint8_t *)(v78 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          v52 = *(uint8_t *)(v31 + 168);
          if ( v52 == -1 )
          {
            v53 = *(uint32_t *)(v31 + 180);
            v54 = *(uint32_t *)(v31 + 172) - 1;
          }
          else
          {
            v53 = v31 + 169;
            v54 = v52 - 1;
          }
          v55 = 5381;
          if ( v54 > 0 )
          {
            v76 = v2;
            do
            {
              --v54;
              v56 = 33 * v55;
              v57 = *(uint8_t *)(v53 + v54) + 32;
              if ( (uint8_t)(*(uint8_t *)(v53 + v54) - 65) > 0x19u )
                v57 = *(uint8_t *)(v53 + v54);
              v55 = v56 ^ v57;
            }
            while ( v54 != 0 );
            v2 = v76;
          }
          v78 = v55 & 0x7FFFFF | v78 & 0xFF800000;
          *(uint32_t *)(v31 + 184) = v78;
        }
        v39 = v78 & 0x7FFFFF | v103 & 0xFF800000;
        LOWORD(v103) = v78;
        BYTE2(v103) = BYTE2(v39) & 0x7F;
        HIBYTE(v103) = HIBYTE(v39) | 1;
        v86 = (gameswf::CharacterHandle::Self *)(v2 + 10);
        v104 = *(uint8_t *)(v31 + 188);
        gameswf::CharacterHandle::opAssign((int)(uintptr_t)(v2 + 10), (gameswf::CharacterHandle::Self *)v98);
        gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v98);
        v30 = (gameswf::CharacterHandle::Self *)(v2 + 10);
      }
      if ( (uint8_t)gameswf::CharacterHandle::isValid(v30) != 0 )
      {
        gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)v110);
        Player = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer(v86);
        Root = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(Player);
        gameswf::Root::logicalToScreen(Root, (gameswf::Point::Self *)v110);
        if ( v80 == 0 )
        {
          v68 = *(float *)v110;
          v72 = (gameswf::CharacterHandle::Self *)v110[1];
          gameswf::CharacterHandle::gotoAndStop(v86, "invis");
          v79 = (float)(int)*(float *)&v72;
          v77 = (float)(int)v68;
          InputMgr = (glf::InputManager::Self *)glf::GetInputMgr(v60);
          Gamepad = glf::InputManager::GetGamepad(InputMgr, 0);
          glf::Gamepad::RaiseTouchEvent(Gamepad, 0, 216, 4, LODWORD(v77), LODWORD(v79), 1);
          v44 = (glf::InputManager::Self *)glf::GetInputMgr(v61);
          v45 = glf::InputManager::GetGamepad(v44, 0);
          glf::Gamepad::RaiseTouchEvent(v45, 0, 217, 4, LODWORD(v77), LODWORD(v79), 1);
          v46 = (glf::InputManager::Self *)glf::GetInputMgr(v62);
          v47 = glf::InputManager::GetGamepad(v46, 0);
          glf::Gamepad::RaiseTouchEvent(v47, 0, 218, 4, LODWORD(v77), LODWORD(v79), 1);
          gameswf::CharacterHandle::gotoAndStop(v86, (const char *)&off_1B58C1F);
        }
      }
    }
  }
  else
  {
    g4_std_compat::string_assign((int)(uintptr_t)(&v88) + 4, "btn_launch", 0xAu);
    v81 = 0;
  }
LABEL_10:
  v6 = sub_732CE0();
  v7 = (uint32_t *)sub_733A60(v6, v81);
  if ( v7 != nullptr && *v7 != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v107, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v110);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v107);
    if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v110) == 0 )
    {
LABEL_13:
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v110);
      return ((g4_std::string::Destroy((char *)&v88 + 4)), (int)0);
    }
    gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)v97);
    v17 = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v110);
    v18 = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(v17);
    gameswf::Root::logicalToScreen(v18, (gameswf::Point::Self *)v97);
    v82 = *(float *)v97;
    Character = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v110);
    v64 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)Character + 292))(Character);
    v67 = v64;
    v85 = (gameswf::CharacterHandle::Self *)v97[1];
    v58 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v110);
    v65 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v58 + 288))();
    v20 = v2[20];
    v21 = v2[1];
    if ( *v2 < (unsigned int)(-1431655765 * ((v2[21] - v20) >> 2)) )
    {
      v22 = (uint32_t *)(v20 + 12 * *v2);
      if ( v21 < (v22[1] - *v22) >> 2 )
      {
        v23 = (float)(v67 * 0.5) + v82;
        v24 = (float)(0.5 * v65) + *(float *)&v85;
        if ( strcmp("igm_overlay.layout_bl.btn_map", **(const char ***)(*v22 + 4 * v21)) == 0 )
        {
          v59 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v110);
          v66 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v59 + 292))();
          v25 = (glf::InputManager::Self *)glf::GetInputMgr(v59);
          v26 = glf::InputManager::GetGamepad(v25, 0);
          if ( v80 != 0 )
            glf::Gamepad::RaiseTouchEvent(v26, 0, 216, 4, (float)(int)v23 - v66, (float)(int)v24, 1);
          else
            glf::Gamepad::RaiseTouchEvent(v26, 0, 218, 4, (float)(int)v23 - v66, (float)(int)v24, 1);
        }
        else
        {
          v27 = (glf::InputManager::Self *)glf::GetInputMgr(v58);
          v28 = glf::InputManager::GetGamepad(v27, 0);
          if ( v80 != 0 )
            glf::Gamepad::RaiseTouchEvent(v28, 0, 216, 4, (float)(int)v23, (float)(int)v24, 1);
          else
            glf::Gamepad::RaiseTouchEvent(v28, 0, 218, 4, (float)(int)v23, (float)(int)v24, 1);
        }
        goto LABEL_13;
      }
    }
LABEL_87:
    sub_1900210("vector::_M_range_check");
  }
  return ((g4_std::string::Destroy((char *)&v88 + 4)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_BE7480  (binary VA: 0xbe7480)
// Original: sub_BE7480
// ----------------------------------------------------------------------------
int sub_BE7480(int a1, int a2, unsigned int a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  typedef uint8_t _g4_t_v7[36];
  typedef uint8_t _g4_t_v8[48];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v8)) > _g4_s1 ? (44u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);

  v3 = sub_732CE0();
  v4 = 0;
  v5 = (uint32_t *)sub_733A60(v3, a3);
  if ( v5 != nullptr && *v5 != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v8, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v7);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v8);
    if ( (uint8_t)gameswf::CharacterHandle::isVisible((gameswf::CharacterHandle::Self *)v7) != 0 )
    {
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v7);
      return 1;
    }
    else
    {
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v7);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_BE7560  (binary VA: 0xbe7560)
// Original: sub_BE7560
// ----------------------------------------------------------------------------
int sub_BE7560(int a1, int a2)
{
  unsigned int v2;
  int v3;
  uint32_t *v4;
  typedef uint8_t _g4_t_v6[36];
  typedef uint8_t _g4_t_v7[48];
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v7)) > _g4_s1 ? (44u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (100u + sizeof(_g4_t_v8)) > _g4_s2 ? (100u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 100u);

  v8 = a1;
  v2 = *(uint32_t *)(a2 + 20);
  v3 = sub_732CE0();
  v4 = (uint32_t *)sub_733A60(v3, v2);
  if ( v4 == nullptr || *v4 == 0 )
    return -1;
  gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v7, nullptr);
  gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v6);
  gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v7);
  if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v6) != 0 )
    a1 = gameswf::CharacterHandle::getCurrentFrame((gameswf::CharacterHandle::Self *)v6) + 1;
  gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v6);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BE7650  (binary VA: 0xbe7650)
// Original: sub_BE7650
// ----------------------------------------------------------------------------
void sub_BE7650(int a1, const char **a2, unsigned int a3, char a4)
{
  int v4;
  uint32_t *v5;
  gameswf::RenderFX::Self *Player;
  gameswf::Root::Self *Root;
  int Character;
  int v9;
  float v10; // xmm0_4
  const char *v11;
  glf::InputManager::Self *InputMgr;
  int Gamepad;
  typedef glf::Self *_g4_t_v14;
  typedef float _g4_t_v15;
  typedef float _g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef uint32_t _g4_t_v25[2];
  typedef uint8_t _g4_t_v26[36];
  typedef uint8_t _g4_t_v27[48];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v15)) > _g4_s1 ? (44u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v16)) > _g4_s2 ? (44u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v17)) > _g4_s3 ? (44u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v18)) > _g4_s4 ? (44u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v19)) > _g4_s5 ? (64u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v20)) > _g4_s6 ? (64u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v21)) > _g4_s7 ? (64u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v22)) > _g4_s8 ? (68u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v23)) > _g4_s9 ? (68u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v24)) > _g4_s10 ? (76u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v25)) > _g4_s11 ? (80u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v26)) > _g4_s12 ? (88u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v27)) > _g4_s13 ? (124u + sizeof(_g4_t_v27)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 68u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 124u);

  v4 = sub_732CE0();
  v5 = (uint32_t *)sub_733A60(v4, a3);
  if ( v5 != nullptr && *v5 != 0 )
  {
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v27, nullptr);
    gameswf::RenderFX::find((gameswf::CharacterHandle::Self *)v26);
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v27);
    if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)v26) != 0 )
    {
      gameswf::CharacterHandle::getWorldPosition((gameswf::CharacterHandle::Self *)v25);
      Player = (gameswf::RenderFX::Self *)gameswf::CharacterHandle::getPlayer((gameswf::CharacterHandle::Self *)v26);
      Root = (gameswf::Root::Self *)gameswf::RenderFX::getRoot(Player);
      gameswf::Root::logicalToScreen(Root, (gameswf::Point::Self *)v25);
      v19 = *(float *)v25;
      Character = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v26);
      v22 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)Character + 292))(Character);
      v23 = (float)(0.5 * v22) + v19;
      v24 = *(float *)&v25[1];
      v9 = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v26);
      v20 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v9 + 288))(v9);
      v21 = (float)(0.5 * v20) + v24;
      v10 = 0.0;
      if ( g4_std::string::compare(a1 + 12, "menu_pawn_shop") == 0 )
      {
        v14 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v26);
        v18 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v14 + 292))();
        v10 = v18 * 0.5;
      }
      v11 = *a2;
      if ( strcmp(*a2, "mc_items_list.mc_btn_dec") == 0 )
      {
        v14 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v26);
        v17 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v14 + 292))();
        v11 = *a2;
        v10 = v17 * 0.7;
      }
      if ( strcmp(v11, "mc_pages_navigator.btn_prev") == 0 )
      {
        v14 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v26);
        v16 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v14 + 292))();
        v11 = *a2;
        v10 = v16 * 0.7;
      }
      if ( strcmp(v11, "controls_schemes_list.mc_btn_dec") == 0 )
      {
        v14 = (glf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v26);
        v15 = ((long double (*)(void))*(uint32_t *)(*(uint32_t *)v14 + 292))();
        v10 = v15;
      }
      InputMgr = (glf::InputManager::Self *)glf::GetInputMgr(v14);
      Gamepad = glf::InputManager::GetGamepad(InputMgr, 0);
      if ( a4 != 0 )
        glf::Gamepad::RaiseTouchEvent(Gamepad, 0, 216, 4, (float)((int)v23 - (int)v10), (float)(int)v21, 1);
      else
        glf::Gamepad::RaiseTouchEvent(Gamepad, 0, 218, 4, (float)((int)v23 - (int)v10), (float)(int)v21, 1);
    }
    gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v26);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_BE7A00  (binary VA: 0xbe7a00)
// Original: sub_BE7A00
// ----------------------------------------------------------------------------
int sub_BE7A00(int a1, int a2, int a3)
{
  int result;
  uint32_t *v4;
  float v5; // xmm0_4
  float v6; // xmm0_4
  glf::InputManager::Self *InputMgr;
  int Gamepad;
  float v9; // xmm0_4
  glf::InputManager::Self *v10;
  int v11;
  glf::InputManager::Self *v12;
  int v13;
  uint32_t *v14;
  float v15; // xmm0_4
  float v16; // xmm0_4
  glf::InputManager::Self *v17;
  int v18;
  glf::Self *v19;
  glf::Self *v20;
  glf::Self *v21;
  float v22;
  float v23;
  float v24;
  float v25;

  result = a3;
  if ( a3 == 2 )
  {
    v4 = **(uint32_t ***)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 300);
    v5 = (double)(v4[8] - v4[6]) * 0.5;
    v22 = v5;
    v6 = (double)(v4[7] - v4[5]) * 0.5;
    v25 = (float)(int)v6;
    InputMgr = (glf::InputManager::Self *)glf::GetInputMgr(v19);
    Gamepad = glf::InputManager::GetGamepad(InputMgr, 0);
    glf::Gamepad::RaiseTouchEvent(Gamepad, 0, 216, 4, LODWORD(v25), (float)(int)v22, 1);
    v9 = v22 - 50.0;
LABEL_5:
    v23 = (float)(int)v9;
    v10 = (glf::InputManager::Self *)glf::GetInputMgr(v20);
    v11 = glf::InputManager::GetGamepad(v10, 0);
    glf::Gamepad::RaiseTouchEvent(v11, 0, 217, 4, LODWORD(v25), LODWORD(v23), 1);
    v12 = (glf::InputManager::Self *)glf::GetInputMgr(v21);
    v13 = glf::InputManager::GetGamepad(v12, 0);
    return glf::Gamepad::RaiseTouchEvent(v13, 0, 218, 4, LODWORD(v25), LODWORD(v23), 1);
  }
  if ( a3 == 4 )
  {
    v14 = **(uint32_t ***)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8) + 300);
    v15 = (double)(v14[8] - v14[6]) * 0.5;
    v24 = v15;
    v16 = (double)(v14[7] - v14[5]) * 0.5;
    v25 = (float)(int)v16;
    v17 = (glf::InputManager::Self *)glf::GetInputMgr(v19);
    v18 = glf::InputManager::GetGamepad(v17, 0);
    glf::Gamepad::RaiseTouchEvent(v18, 0, 216, 4, LODWORD(v25), (float)(int)v24, 1);
    v9 = v24 + 50.0;
    goto LABEL_5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BE7C70  (binary VA: 0xbe7c70)
// Original: sub_BE7C70
// ----------------------------------------------------------------------------
void sub_BE7C70(int a1)
{
  void **v1;
  void **v2;
  unsigned int v3;
  uint32_t *v4;
  unsigned int v5;
  char *v6;
  int v7;
  const void *v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  int v13;
  int v14;
  uint32_t *v15;
  char *v16;
  int v17;
  const void *v18;
  int v19;
  int v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  uint32_t *v25;
  char *v26;
  int v27;
  const void *v28;
  int v29;
  int v30;
  int v31;
  char *v32;
  int v33;
  int v34;
  uint32_t *v35;
  char *v36;
  int v37;
  const void *v38;
  int v39;
  int v40;
  int v41;
  char *v42;
  int v43;
  int v44;
  uint32_t *v45;
  char *v46;
  int v47;
  const void *v48;
  int v49;
  int v50;
  int v51;
  char *v52;
  int v53;
  int v54;
  uint32_t *v55;
  char *v56;
  int v57;
  const void *v58;
  int v59;
  int v60;
  int v61;
  char *v62;
  int v63;
  int v64;
  uint32_t *v65;
  char *v66;
  int v67;
  const void *v68;
  int v69;
  int v70;
  int v71;
  char *v72;
  int v73;
  int v74;
  uint32_t *v75;
  char *v76;
  int v77;
  const void *v78;
  int v79;
  int v80;
  int v81;
  char *v82;
  int v83;
  int v84;
  uint32_t *v85;
  char *v86;
  int v87;
  const void *v88;
  int v89;
  int v90;
  int v91;
  char *v92;
  int v93;
  int v94;
  uint32_t *v95;
  char *v96;
  int v97;
  const void *v98;
  int v99;
  int v100;
  int v101;
  char *v102;
  int v103;
  int v104;
  uint32_t *v105;
  char *v106;
  int v107;
  const void *v108;
  int v109;
  int v110;
  int v111;
  char *v112;
  int v113;
  int v114;
  uint32_t *v115;
  char *v116;
  int v117;
  const void *v118;
  int v119;
  int v120;
  int v121;
  char *v122;
  int v123;
  int v124;
  uint32_t *v125;
  char *v126;
  int v127;
  const void *v128;
  int v129;
  int v130;
  int v131;
  char *v132;
  int v133;
  int v134;
  uint32_t *v135;
  char *v136;
  int v137;
  const void *v138;
  int v139;
  int v140;
  int v141;
  char *v142;
  int v143;
  int v144;
  uint32_t *v145;
  char *v146;
  int v147;
  const void *v148;
  int v149;
  int v150;
  int v151;
  char *v152;
  int v153;
  int v154;
  uint32_t *v155;
  char *v156;
  int v157;
  const void *v158;
  int v159;
  int v160;
  int v161;
  char *v162;
  int v163;
  int v164;
  uint32_t *v165;
  char *v166;
  int v167;
  const void *v168;
  int v169;
  int v170;
  int v171;
  char *v172;
  int v173;
  int v174;
  uint32_t *v175;
  char *v176;
  int v177;
  const void *v178;
  int v179;
  int v180;
  int v181;
  char *v182;
  int v183;
  int v184;
  uint32_t *v185;
  char *v186;
  int v187;
  const void *v188;
  int v189;
  int v190;
  int v191;
  char *v192;
  int v193;
  int v194;
  uint32_t *v195;
  char *v196;
  int v197;
  const void *v198;
  int v199;
  int v200;
  int v201;
  char *v202;
  int v203;
  int v204;
  uint32_t *v205;
  char *v206;
  int v207;
  const void *v208;
  int v209;
  int v210;
  int v211;
  char *v212;
  int v213;
  int v214;
  uint32_t *v215;
  char *v216;
  int v217;
  const void *v218;
  int v219;
  int v220;
  int v221;
  char *v222;
  int v223;
  int v224;
  uint32_t *v225;
  char *v226;
  int v227;
  const void *v228;
  int v229;
  int v230;
  int v231;
  char *v232;
  int v233;
  int v234;
  uint32_t *v235;
  char *v236;
  int v237;
  const void *v238;
  int v239;
  int v240;
  int v241;
  char *v242;
  int v243;
  int v244;
  typedef int _g4_t_v245;
  typedef int _g4_t_v246;
  typedef int _g4_t_v247;
  typedef int _g4_t_v248;
  typedef int _g4_t_v249;
  typedef int _g4_t_v250;
  typedef int _g4_t_v251;
  typedef int _g4_t_v252;
  typedef int _g4_t_v253;
  typedef int _g4_t_v254;
  typedef int _g4_t_v255;
  typedef int _g4_t_v256;
  typedef int _g4_t_v257;
  typedef int _g4_t_v258;
  typedef int _g4_t_v259;
  typedef int _g4_t_v260;
  typedef int _g4_t_v261;
  typedef int _g4_t_v262;
  typedef int _g4_t_v263;
  typedef int _g4_t_v264;
  typedef int _g4_t_v265;
  typedef int _g4_t_v266;
  typedef int _g4_t_v267;
  typedef int _g4_t_v268;
  typedef int _g4_t_v269;
  typedef int _g4_t_v270;
  typedef int _g4_t_v271;
  typedef int _g4_t_v272;
  typedef int _g4_t_v273;
  typedef int _g4_t_v274;
  typedef int _g4_t_v275;
  typedef int _g4_t_v276;
  typedef int _g4_t_v277;
  typedef int _g4_t_v278;
  typedef int _g4_t_v279;
  typedef int _g4_t_v280;
  typedef int _g4_t_v281;
  typedef int _g4_t_v282;
  typedef int _g4_t_v283;
  typedef int _g4_t_v284;
  typedef int _g4_t_v285;
  typedef int _g4_t_v286;
  typedef int _g4_t_v287;
  typedef int _g4_t_v288;
  typedef int _g4_t_v289;
  typedef int _g4_t_v290;
  typedef int _g4_t_v291;
  typedef int _g4_t_v292;
  typedef uint32_t *_g4_t_v293;
  typedef uint32_t *_g4_t_v294;
  typedef uint32_t *_g4_t_v295;
  typedef uint32_t *_g4_t_v296;
  typedef uint32_t *_g4_t_v297;
  typedef uint32_t *_g4_t_v298;
  typedef uint32_t *_g4_t_v299;
  typedef uint32_t *_g4_t_v300;
  typedef uint32_t *_g4_t_v301;
  typedef uint32_t *_g4_t_v302;
  typedef uint32_t *_g4_t_v303;
  typedef uint32_t *_g4_t_v304;
  typedef uint32_t *_g4_t_v305;
  typedef uint32_t *_g4_t_v306;
  typedef uint32_t *_g4_t_v307;
  typedef uint32_t *_g4_t_v308;
  typedef uint32_t *_g4_t_v309;
  typedef uint32_t *_g4_t_v310;
  typedef uint32_t *_g4_t_v311;
  typedef uint32_t *_g4_t_v312;
  typedef uint32_t *_g4_t_v313;
  typedef uint32_t *_g4_t_v314;
  typedef uint32_t *_g4_t_v315;
  typedef uint32_t *_g4_t_v316;
  typedef uint32_t *_g4_t_v317;
  typedef uint32_t *_g4_t_v318;
  typedef uint32_t *_g4_t_v319;
  typedef uint32_t *_g4_t_v320;
  typedef uint32_t *_g4_t_v321;
  typedef uint32_t *_g4_t_v322;
  typedef uint32_t *_g4_t_v323;
  typedef uint32_t *_g4_t_v324;
  typedef uint32_t *_g4_t_v325;
  typedef uint32_t *_g4_t_v326;
  typedef uint32_t *_g4_t_v327;
  typedef uint32_t *_g4_t_v328;
  typedef uint32_t *_g4_t_v329;
  typedef uint32_t *_g4_t_v330;
  typedef uint32_t *_g4_t_v331;
  typedef uint32_t *_g4_t_v332;
  typedef uint32_t *_g4_t_v333;
  typedef uint32_t *_g4_t_v334;
  typedef uint32_t *_g4_t_v335;
  typedef uint32_t *_g4_t_v336;
  typedef uint32_t *_g4_t_v337;
  typedef uint32_t *_g4_t_v338;
  typedef uint32_t *_g4_t_v339;
  typedef uint32_t *_g4_t_v340;
  typedef uint32_t *_g4_t_v341;
  typedef uint32_t *_g4_t_v342;
  typedef uint32_t *_g4_t_v343;
  typedef uint32_t *_g4_t_v344;
  typedef uint32_t *_g4_t_v345;
  typedef uint32_t *_g4_t_v346;
  typedef uint32_t *_g4_t_v347;
  typedef uint32_t *_g4_t_v348;
  typedef uint32_t *_g4_t_v349;
  typedef uint32_t *_g4_t_v350;
  typedef uint32_t *_g4_t_v351;
  typedef uint32_t *_g4_t_v352;
  typedef uint32_t *_g4_t_v353;
  typedef uint32_t *_g4_t_v354;
  typedef uint32_t *_g4_t_v355;
  typedef uint32_t *_g4_t_v356;
  typedef uint32_t *_g4_t_v357;
  typedef uint32_t *_g4_t_v358;
  typedef uint32_t *_g4_t_v359;
  typedef uint32_t *_g4_t_v360;
  typedef uint32_t *_g4_t_v361;
  typedef uint32_t *_g4_t_v362;
  typedef uint32_t *_g4_t_v363;
  typedef uint32_t *_g4_t_v364;
  typedef uint32_t *_g4_t_v365;
  typedef uint32_t *_g4_t_v366;
  typedef uint32_t *_g4_t_v367;
  typedef uint32_t *_g4_t_v368;
  typedef uint32_t *_g4_t_v369;
  typedef uint32_t *_g4_t_v370;
  typedef uint32_t *_g4_t_v371;
  typedef uint32_t *_g4_t_v372;
  typedef uint32_t *_g4_t_v373;
  typedef uint32_t *_g4_t_v374;
  typedef uint32_t *_g4_t_v375;
  typedef uint32_t *_g4_t_v376;
  typedef uint32_t *_g4_t_v377;
  typedef uint32_t *_g4_t_v378;
  typedef uint32_t *_g4_t_v379;
  typedef uint32_t *_g4_t_v380;
  typedef uint32_t *_g4_t_v381;
  typedef uint32_t *_g4_t_v382;
  typedef uint32_t *_g4_t_v383;
  typedef uint32_t *_g4_t_v384;
  typedef uint32_t *_g4_t_v385;
  typedef uint32_t *_g4_t_v386;
  typedef uint32_t *_g4_t_v387;
  typedef uint32_t *_g4_t_v388;
  typedef uint32_t *_g4_t_v389;
  typedef uint32_t *_g4_t_v390;
  typedef uint32_t *_g4_t_v391;
  typedef uint32_t *_g4_t_v392;
  typedef uint32_t *_g4_t_v393;
  typedef uint32_t *_g4_t_v394;
  typedef uint32_t *_g4_t_v395;
  typedef uint32_t *_g4_t_v396;
  typedef uint32_t *_g4_t_v397;
  typedef uint32_t *_g4_t_v398;
  typedef uint32_t *_g4_t_v399;
  typedef uint32_t *_g4_t_v400;
  typedef uint32_t *_g4_t_v401;
  typedef uint32_t *_g4_t_v402;
  typedef uint32_t *_g4_t_v403;
  typedef uint32_t *_g4_t_v404;
  typedef uint32_t *_g4_t_v405;
  typedef uint32_t *_g4_t_v406;
  typedef uint32_t *_g4_t_v407;
  typedef uint32_t *_g4_t_v408;
  typedef uint32_t *_g4_t_v409;
  typedef uint32_t *_g4_t_v410;
  typedef uint32_t *_g4_t_v411;
  typedef uint32_t *_g4_t_v412;
  typedef uint32_t *_g4_t_v413;
  typedef uint32_t *_g4_t_v414;
  typedef uint32_t *_g4_t_v415;
  typedef uint32_t *_g4_t_v416;
  typedef uint32_t *_g4_t_v417;
  typedef uint32_t *_g4_t_v418;
  typedef uint32_t *_g4_t_v419;
  typedef uint32_t *_g4_t_v420;
  typedef uint32_t *_g4_t_v421;
  typedef uint32_t *_g4_t_v422;
  typedef uint32_t *_g4_t_v423;
  typedef uint32_t *_g4_t_v424;
  typedef uint32_t *_g4_t_v425;
  typedef uint32_t *_g4_t_v426;
  typedef uint32_t *_g4_t_v427;
  typedef uint32_t *_g4_t_v428;
  typedef uint32_t *_g4_t_v429;
  typedef uint32_t *_g4_t_v430;
  typedef uint32_t *_g4_t_v431;
  typedef uint32_t *_g4_t_v432;
  typedef uint32_t *_g4_t_v433;
  typedef uint32_t *_g4_t_v434;
  typedef uint32_t *_g4_t_v435;
  typedef uint32_t *_g4_t_v436;
  typedef uint32_t *_g4_t_v437;
  typedef uint32_t *_g4_t_v438;
  typedef uint32_t *_g4_t_v439;
  typedef uint32_t *_g4_t_v440;
  typedef uint32_t *_g4_t_v441;
  typedef uint32_t *_g4_t_v442;
  typedef uint32_t *_g4_t_v443;
  typedef uint32_t *_g4_t_v444;
  typedef uint32_t *_g4_t_v445;
  typedef uint32_t *_g4_t_v446;
  typedef uint32_t *_g4_t_v447;
  typedef uint32_t *_g4_t_v448;
  typedef uint32_t *_g4_t_v449;
  typedef uint32_t *_g4_t_v450;
  typedef uint32_t *_g4_t_v451;
  typedef uint32_t *_g4_t_v452;
  typedef uint32_t *_g4_t_v453;
  typedef uint32_t *_g4_t_v454;
  typedef uint32_t *_g4_t_v455;
  typedef uint32_t *_g4_t_v456;
  typedef uint32_t *_g4_t_v457;
  typedef uint32_t *_g4_t_v458;
  typedef uint32_t *_g4_t_v459;
  typedef uint32_t *_g4_t_v460;
  typedef uint32_t *_g4_t_v461;
  typedef uint32_t *_g4_t_v462;
  typedef uint32_t *_g4_t_v463;
  typedef uint32_t *_g4_t_v464;
  typedef uint32_t *_g4_t_v465;
  typedef uint32_t *_g4_t_v466;
  typedef uint32_t *_g4_t_v467;
  typedef unsigned int **_g4_t_v468;
  typedef void **_g4_t_v469;
  typedef int _g4_t_v470;
  typedef int _g4_t_v471;
  typedef int _g4_t_v472;
  typedef int _g4_t_v473;
  typedef int _g4_t_v474;
  typedef int _g4_t_v475;
  typedef int _g4_t_v476;
  typedef int _g4_t_v477;
  typedef int _g4_t_v478;
  typedef int _g4_t_v479;
  typedef int _g4_t_v480;
  typedef int _g4_t_v481;
  typedef int _g4_t_v482;
  typedef int _g4_t_v483;
  typedef int _g4_t_v484;
  typedef int _g4_t_v485;
  typedef int _g4_t_v486;
  typedef int _g4_t_v487;
  typedef int _g4_t_v488;
  typedef int _g4_t_v489;
  typedef int _g4_t_v490;
  typedef int _g4_t_v491;
  typedef int _g4_t_v492;
  typedef int _g4_t_v493;
  typedef int _g4_t_v494;
  typedef int _g4_t_v495;
  typedef int _g4_t_v496;
  typedef int _g4_t_v497;
  typedef int _g4_t_v498;
  typedef int _g4_t_v499;
  typedef int _g4_t_v500;
  typedef int _g4_t_v501;
  typedef int _g4_t_v502;
  typedef int _g4_t_v503;
  typedef int _g4_t_v504;
  typedef int _g4_t_v505;
  typedef int _g4_t_v506;
  typedef int _g4_t_v507;
  typedef int _g4_t_v508;
  typedef int _g4_t_v509;
  typedef int _g4_t_v510;
  typedef int _g4_t_v511;
  typedef int _g4_t_v512;
  typedef int _g4_t_v513;
  typedef int _g4_t_v514;
  typedef int _g4_t_v515;
  typedef int _g4_t_v516;
  typedef int _g4_t_v517;
  typedef int _g4_t_v518;
  typedef int _g4_t_v519;
  typedef int _g4_t_v520;
  typedef int _g4_t_v521;
  typedef int _g4_t_v522;
  typedef int _g4_t_v523;
  typedef int _g4_t_v524;
  typedef int _g4_t_v525;
  typedef int _g4_t_v526;
  typedef int _g4_t_v527;
  typedef int _g4_t_v528;
  typedef int _g4_t_v529;
  typedef int _g4_t_v530;
  typedef int _g4_t_v531;
  typedef int _g4_t_v532;
  typedef int _g4_t_v533;
  typedef int _g4_t_v534;
  typedef int _g4_t_v535;
  typedef int _g4_t_v536;
  typedef int _g4_t_v537;
  typedef int _g4_t_v538;
  typedef int _g4_t_v539;
  typedef int _g4_t_v540;
  typedef int _g4_t_v541;
  typedef int _g4_t_v542;
  typedef int _g4_t_v543;
  typedef int _g4_t_v544;
  typedef int _g4_t_v545;
  typedef int _g4_t_v546;
  typedef int _g4_t_v547;
  typedef int _g4_t_v548;
  typedef int _g4_t_v549;
  typedef int _g4_t_v550;
  typedef int _g4_t_v551;
  typedef int _g4_t_v552;
  typedef int _g4_t_v553;
  typedef int _g4_t_v554;
  typedef int _g4_t_v555;
  typedef int _g4_t_v556;
  typedef int _g4_t_v557;
  typedef uint32_t *_g4_t_v558;
  typedef int _g4_t_v559;
  typedef int _g4_t_v560;
  typedef int _g4_t_v561;
  typedef int _g4_t_v562;
  typedef int _g4_t_v563;
  typedef int _g4_t_v564;
  typedef int _g4_t_v565;
  typedef int _g4_t_v566;
  typedef int _g4_t_v567;
  typedef int _g4_t_v568;
  typedef int _g4_t_v569;
  typedef int _g4_t_v570;
  typedef int _g4_t_v571;
  typedef int _g4_t_v572;
  typedef int _g4_t_v573;
  typedef int _g4_t_v574;
  typedef int _g4_t_v575;
  typedef int _g4_t_v576;
  typedef int _g4_t_v577;
  typedef int _g4_t_v578;
  typedef int _g4_t_v579;
  typedef int _g4_t_v580;
  typedef int _g4_t_v581;
  typedef int _g4_t_v582;
  typedef int _g4_t_v583;
  typedef int _g4_t_v584;
  typedef int _g4_t_v585;
  typedef int _g4_t_v586;
  typedef int _g4_t_v587;
  typedef int _g4_t_v588;
  typedef int _g4_t_v589;
  typedef int _g4_t_v590;
  typedef int _g4_t_v591;
  typedef int _g4_t_v592;
  typedef int _g4_t_v593;
  typedef int _g4_t_v594;
  typedef int _g4_t_v595;
  typedef int _g4_t_v596;
  typedef int _g4_t_v597;
  typedef int _g4_t_v598;
  typedef int _g4_t_v599;
  typedef int _g4_t_v600;
  typedef int _g4_t_v601;
  typedef int _g4_t_v602;
  typedef int _g4_t_v603;
  typedef int _g4_t_v604;
  typedef int _g4_t_v605;
  typedef int _g4_t_v606;
  typedef int _g4_t_v607;
  typedef int _g4_t_v608;
  typedef int _g4_t_v609;
  typedef int _g4_t_v610;
  typedef int _g4_t_v611;
  typedef int _g4_t_v612;
  typedef int _g4_t_v613;
  typedef int _g4_t_v614;
  typedef int _g4_t_v615;
  typedef int _g4_t_v616;
  typedef int _g4_t_v617;
  typedef int _g4_t_v618;
  typedef int _g4_t_v619;
  typedef int _g4_t_v620;
  typedef int _g4_t_v621;
  typedef int _g4_t_v622;
  typedef int _g4_t_v623;
  typedef int _g4_t_v624;
  typedef int _g4_t_v625;
  typedef int _g4_t_v626;
  typedef int _g4_t_v627;
  typedef int _g4_t_v628;
  typedef int _g4_t_v629;
  typedef int _g4_t_v630;
  typedef int _g4_t_v631;
  typedef int _g4_t_v632;
  typedef int _g4_t_v633;
  typedef int _g4_t_v634;
  typedef int _g4_t_v635;
  typedef int _g4_t_v636;
  typedef int _g4_t_v637;
  typedef int _g4_t_v638;
  typedef int _g4_t_v639;
  typedef int _g4_t_v640;
  typedef int _g4_t_v641;
  typedef int _g4_t_v642;
  typedef int _g4_t_v643;
  typedef int _g4_t_v644;
  typedef int _g4_t_v645;
  typedef int _g4_t_v646;
  typedef int _g4_t_v647;
  typedef int _g4_t_v648;
  typedef int _g4_t_v649;
  typedef int _g4_t_v650;
  typedef int _g4_t_v651;
  typedef int _g4_t_v652;
  typedef int _g4_t_v653;
  typedef int _g4_t_v654;
  typedef int _g4_t_v655;
  typedef int _g4_t_v656;
  typedef int _g4_t_v657;
  typedef int _g4_t_v658;
  typedef int _g4_t_v659;
  typedef int _g4_t_v660;
  typedef int _g4_t_v661;
  typedef int _g4_t_v662;
  typedef int _g4_t_v663;
  typedef int _g4_t_v664;
  typedef int _g4_t_v665;
  typedef int _g4_t_v666;
  typedef int _g4_t_v667;
  typedef int _g4_t_v668;
  typedef int _g4_t_v669;
  typedef int _g4_t_v670;
  typedef int _g4_t_v671;
  typedef int _g4_t_v672;
  typedef int _g4_t_v673;
  typedef int _g4_t_v674;
  typedef int _g4_t_v675;
  typedef int _g4_t_v676;
  typedef int _g4_t_v677;
  typedef int _g4_t_v678;
  typedef int _g4_t_v679;
  typedef int _g4_t_v680;
  typedef int _g4_t_v681;
  typedef int _g4_t_v682;
  typedef int _g4_t_v683;
  typedef int _g4_t_v684;
  typedef int _g4_t_v685;
  typedef int _g4_t_v686;
  typedef int _g4_t_v687;
  typedef int _g4_t_v688;
  typedef int _g4_t_v689;
  typedef int _g4_t_v690;
  typedef int _g4_t_v691;
  typedef int _g4_t_v692;
  typedef int _g4_t_v693;
  typedef int _g4_t_v694;
  typedef int _g4_t_v695;
  typedef int _g4_t_v696;
  typedef int _g4_t_v697;
  typedef int _g4_t_v698;
  typedef int _g4_t_v699;
  typedef int _g4_t_v700;
  typedef int _g4_t_v701;
  typedef int _g4_t_v702;
  typedef int _g4_t_v703;
  typedef int _g4_t_v704;
  typedef int _g4_t_v705;
  typedef int _g4_t_v706;
  typedef int _g4_t_v707;
  typedef int _g4_t_v708;
  typedef int _g4_t_v709;
  typedef int _g4_t_v710;
  typedef int _g4_t_v711;
  typedef int _g4_t_v712;
  typedef int _g4_t_v713;
  typedef int _g4_t_v714;
  typedef int _g4_t_v715;
  typedef int _g4_t_v716;
  typedef int _g4_t_v717;
  typedef int _g4_t_v718;
  typedef int _g4_t_v719;
  typedef int _g4_t_v720;
  typedef int _g4_t_v721;
  typedef int _g4_t_v722;
  typedef int _g4_t_v723;
  typedef int _g4_t_v724;
  typedef int _g4_t_v725;
  typedef int _g4_t_v726;
  typedef int _g4_t_v727;
  typedef int _g4_t_v728;
  typedef int _g4_t_v729;
  typedef int _g4_t_v730;
  typedef int _g4_t_v731;
  typedef int _g4_t_v732;
  typedef int _g4_t_v733;
  typedef int _g4_t_v734;
  typedef int _g4_t_v735;
  typedef int _g4_t_v736;
  typedef int _g4_t_v737;
  typedef int _g4_t_v738;
  typedef int _g4_t_v739;
  typedef int _g4_t_v740;
  typedef int _g4_t_v741;
  typedef int _g4_t_v742;
  typedef int _g4_t_v743;
  typedef int _g4_t_v744;
  typedef int _g4_t_v745;
  typedef int _g4_t_v746;
  typedef int _g4_t_v747;
  typedef int _g4_t_v748;
  typedef int _g4_t_v749;
  typedef int _g4_t_v750;
  typedef int _g4_t_v751;
  typedef int _g4_t_v752;
  typedef int _g4_t_v753;
  typedef int _g4_t_v754;
  typedef int _g4_t_v755;
  typedef int _g4_t_v756;
  typedef int _g4_t_v757;
  typedef int _g4_t_v758;
  typedef int _g4_t_v759;
  typedef int _g4_t_v760;
  typedef int _g4_t_v761;
  typedef int _g4_t_v762;
  typedef int _g4_t_v763;
  typedef int _g4_t_v764;
  typedef int _g4_t_v765;
  typedef int _g4_t_v766;
  typedef int _g4_t_v767;
  typedef int _g4_t_v768;
  typedef int _g4_t_v769;
  typedef int _g4_t_v770;
  typedef int _g4_t_v771;
  typedef int _g4_t_v772;
  typedef int _g4_t_v773;
  typedef int _g4_t_v774;
  typedef int _g4_t_v775;
  typedef int _g4_t_v776;
  typedef int _g4_t_v777;
  typedef int _g4_t_v778;
  typedef int _g4_t_v779;
  typedef int _g4_t_v780;
  typedef int _g4_t_v781;
  typedef int _g4_t_v782;
  typedef int _g4_t_v783;
  typedef int _g4_t_v784;
  typedef int _g4_t_v785;
  typedef int _g4_t_v786;
  typedef int _g4_t_v787;
  typedef int _g4_t_v788;
  typedef int _g4_t_v789;
  typedef int _g4_t_v790;
  typedef int _g4_t_v791;
  typedef int _g4_t_v792;
  typedef int _g4_t_v793;
  typedef int _g4_t_v794;
  typedef int _g4_t_v795;
  typedef int _g4_t_v796;
  typedef int _g4_t_v797;
  typedef int _g4_t_v798;
  typedef int _g4_t_v799;
  typedef int _g4_t_v800;
  typedef int _g4_t_v801;
  typedef int _g4_t_v802;
  typedef int _g4_t_v803;
  typedef int _g4_t_v804;
  typedef int _g4_t_v805;
  typedef int _g4_t_v806;
  typedef int _g4_t_v807;
  typedef int _g4_t_v808;
  typedef int _g4_t_v809;
  typedef int _g4_t_v810;
  typedef int _g4_t_v811;
  typedef int _g4_t_v812;
  typedef int _g4_t_v813;
  typedef int _g4_t_v814;
  typedef int _g4_t_v815;
  typedef int _g4_t_v816;
  typedef int _g4_t_v817;
  typedef int _g4_t_v818;
  typedef int _g4_t_v819;
  typedef int _g4_t_v820;
  typedef int _g4_t_v821;
  typedef int _g4_t_v822;
  typedef int _g4_t_v823;
  typedef int _g4_t_v824;
  typedef int _g4_t_v825;
  typedef int _g4_t_v826;
  typedef int _g4_t_v827;
  typedef int _g4_t_v828;
  typedef int _g4_t_v829;
  typedef int _g4_t_v830;
  typedef int _g4_t_v831;
  typedef int _g4_t_v832;
  typedef int _g4_t_v833;
  typedef int _g4_t_v834;
  typedef int _g4_t_v835;
  typedef int _g4_t_v836;
  typedef int _g4_t_v837;
  typedef int _g4_t_v838;
  typedef int _g4_t_v839;
  typedef int _g4_t_v840;
  typedef int _g4_t_v841;
  typedef int _g4_t_v842;
  typedef int _g4_t_v843;
  typedef int _g4_t_v844;
  typedef int _g4_t_v845;
  typedef int _g4_t_v846;
  typedef int _g4_t_v847;
  typedef int _g4_t_v848;
  typedef int _g4_t_v849;
  typedef int _g4_t_v850;
  typedef int _g4_t_v851;
  typedef int _g4_t_v852;
  typedef int _g4_t_v853;
  typedef int _g4_t_v854;
  typedef int _g4_t_v855;
  typedef int _g4_t_v856;
  typedef int _g4_t_v857;
  typedef int _g4_t_v858;
  typedef int _g4_t_v859;
  typedef int _g4_t_v860;
  typedef int _g4_t_v861;
  typedef int _g4_t_v862;
  typedef int _g4_t_v863;
  typedef int _g4_t_v864;
  typedef int _g4_t_v865;
  typedef int _g4_t_v866;
  typedef int _g4_t_v867;
  typedef int _g4_t_v868;
  typedef int _g4_t_v869;
  typedef int _g4_t_v870;
  typedef int _g4_t_v871;
  typedef int _g4_t_v872;
  typedef int _g4_t_v873;
  typedef int _g4_t_v874;
  typedef int _g4_t_v875;
  typedef int _g4_t_v876;
  typedef int _g4_t_v877;
  typedef int _g4_t_v878;
  typedef int _g4_t_v879;
  typedef int _g4_t_v880;
  typedef int _g4_t_v881;
  typedef int _g4_t_v882;
  typedef int _g4_t_v883;
  typedef int _g4_t_v884;
  typedef int _g4_t_v885;
  typedef int _g4_t_v886;
  typedef int _g4_t_v887;
  typedef int _g4_t_v888;
  typedef int _g4_t_v889;
  typedef int _g4_t_v890;
  typedef int _g4_t_v891;
  typedef int _g4_t_v892;
  typedef int _g4_t_v893;
  typedef int _g4_t_v894;
  typedef int _g4_t_v895;
  typedef int _g4_t_v896;
  typedef int _g4_t_v897;
  typedef int _g4_t_v898;
  typedef int _g4_t_v899;
  typedef int _g4_t_v900;
  typedef int _g4_t_v901;
  typedef int _g4_t_v902;
  typedef int _g4_t_v903;
  typedef int _g4_t_v904;
  typedef int _g4_t_v905;
  typedef int _g4_t_v906;
  typedef int _g4_t_v907;
  typedef int _g4_t_v908;
  typedef int _g4_t_v909;
  typedef int _g4_t_v910;
  typedef int _g4_t_v911;
  typedef int _g4_t_v912;
  typedef int _g4_t_v913;
  typedef int _g4_t_v914;
  typedef int _g4_t_v915;
  typedef int _g4_t_v916;
  typedef int _g4_t_v917;
  typedef int _g4_t_v918;
  typedef int _g4_t_v919;
  typedef int _g4_t_v920;
  typedef int _g4_t_v921;
  typedef int _g4_t_v922;
  typedef int _g4_t_v923;
  typedef int _g4_t_v924;
  typedef int _g4_t_v925;
  typedef int _g4_t_v926;
  typedef int _g4_t_v927;
  typedef int _g4_t_v928;
  typedef int _g4_t_v929;
  typedef int _g4_t_v930;
  typedef int _g4_t_v931;
  typedef int _g4_t_v932;
  typedef int _g4_t_v933;
  typedef int _g4_t_v934;
  typedef int _g4_t_v935;
  typedef int _g4_t_v936;
  typedef int _g4_t_v937;
  typedef int _g4_t_v938;
  typedef int _g4_t_v939;
  typedef int _g4_t_v940;
  typedef int _g4_t_v941;
  typedef int _g4_t_v942;
  typedef int _g4_t_v943;
  typedef int _g4_t_v944;
  typedef int _g4_t_v945;
  typedef int _g4_t_v946;
  typedef int _g4_t_v947;
  typedef int _g4_t_v948;
  typedef int _g4_t_v949;
  typedef int _g4_t_v950;
  typedef int _g4_t_v951;
  typedef int _g4_t_v952;
  typedef int _g4_t_v953;
  typedef int _g4_t_v954;
  typedef int _g4_t_v955;
  typedef int _g4_t_v956;
  typedef int _g4_t_v957;
  typedef int _g4_t_v958;
  typedef int _g4_t_v959;
  typedef int _g4_t_v960;
  typedef int _g4_t_v961;
  typedef int _g4_t_v962;
  typedef int _g4_t_v963;
  typedef int _g4_t_v964;
  typedef int _g4_t_v965;
  typedef int _g4_t_v966;
  typedef int _g4_t_v967;
  typedef int _g4_t_v968;
  typedef int _g4_t_v969;
  typedef int _g4_t_v970;
  typedef int _g4_t_v971;
  typedef int _g4_t_v972;
  typedef int _g4_t_v973;
  typedef int _g4_t_v974;
  typedef int _g4_t_v975;
  typedef int _g4_t_v976;
  typedef int _g4_t_v977;
  typedef int _g4_t_v978;
  typedef int _g4_t_v979;
  typedef int _g4_t_v980;
  typedef int _g4_t_v981;
  typedef int _g4_t_v982;
  typedef int _g4_t_v983;
  typedef int _g4_t_v984;
  typedef int _g4_t_v985;
  typedef int _g4_t_v986;
  typedef int _g4_t_v987;
  typedef int _g4_t_v988;
  typedef int _g4_t_v989;
  typedef int _g4_t_v990;
  typedef int _g4_t_v991;
  typedef int _g4_t_v992;
  typedef int _g4_t_v993;
  typedef int _g4_t_v994;
  typedef int _g4_t_v995;
  typedef int _g4_t_v996;
  typedef int _g4_t_v997;
  typedef int _g4_t_v998;
  typedef int _g4_t_v999;
  typedef int _g4_t_v1000;
  typedef int _g4_t_v1001;
  typedef int _g4_t_v1002;
  typedef int _g4_t_v1003;
  typedef int _g4_t_v1004;
  typedef int _g4_t_v1005;
  typedef int _g4_t_v1006;
  typedef int _g4_t_v1007;
  typedef int _g4_t_v1008;
  typedef int _g4_t_v1009;
  typedef int _g4_t_v1010;
  typedef int _g4_t_v1011;
  typedef int _g4_t_v1012;
  typedef int _g4_t_v1013;
  typedef int _g4_t_v1014;
  typedef int _g4_t_v1015;
  typedef int _g4_t_v1016;
  typedef int _g4_t_v1017;
  typedef int _g4_t_v1018;
  typedef int _g4_t_v1019;
  typedef int _g4_t_v1020;
  typedef int _g4_t_v1021;
  typedef int _g4_t_v1022;
  typedef int _g4_t_v1023;
  typedef int _g4_t_v1024;
  typedef int _g4_t_v1025;
  typedef int _g4_t_v1026;
  typedef int _g4_t_v1027;
  typedef int _g4_t_v1028;
  typedef int _g4_t_v1029;
  typedef int _g4_t_v1030;
  typedef int _g4_t_v1031;
  typedef int _g4_t_v1032;
  typedef int _g4_t_v1033;
  typedef int _g4_t_v1034;
  typedef int _g4_t_v1035;
  typedef int _g4_t_v1036;
  typedef int _g4_t_v1037;
  typedef int _g4_t_v1038;
  typedef int _g4_t_v1039;
  typedef int _g4_t_v1040;
  typedef int _g4_t_v1041;
  typedef int _g4_t_v1042;
  typedef int _g4_t_v1043;
  typedef int _g4_t_v1044;
  typedef int _g4_t_v1045;
  typedef int _g4_t_v1046;
  typedef int _g4_t_v1047;
  typedef int _g4_t_v1048;
  typedef int _g4_t_v1049;
  typedef int _g4_t_v1050;
  typedef int _g4_t_v1051;
  typedef int _g4_t_v1052;
  typedef int _g4_t_v1053;
  typedef int _g4_t_v1054;
  typedef int _g4_t_v1055;
  typedef int _g4_t_v1056;
  typedef int _g4_t_v1057;
  typedef int _g4_t_v1058;
  typedef int _g4_t_v1059;
  typedef int _g4_t_v1060;
  typedef int _g4_t_v1061;
  typedef int _g4_t_v1062;
  typedef int _g4_t_v1063;
  typedef int _g4_t_v1064;
  typedef int _g4_t_v1065;
  typedef int _g4_t_v1066;
  typedef int _g4_t_v1067;
  typedef int _g4_t_v1068;
  typedef int _g4_t_v1069;
  typedef int _g4_t_v1070;
  typedef int _g4_t_v1071;
  typedef int _g4_t_v1072;
  typedef int _g4_t_v1073;
  typedef int _g4_t_v1074;
  typedef int _g4_t_v1075;
  typedef int _g4_t_v1076;
  typedef int _g4_t_v1077;
  typedef int _g4_t_v1078;
  typedef int _g4_t_v1079;
  typedef int _g4_t_v1080;
  typedef int _g4_t_v1081;
  typedef int _g4_t_v1082;
  typedef int _g4_t_v1083;
  typedef int _g4_t_v1084;
  typedef int _g4_t_v1085;
  typedef int _g4_t_v1086;
  typedef int _g4_t_v1087;
  typedef int _g4_t_v1088;
  typedef int _g4_t_v1089;
  typedef int _g4_t_v1090;
  typedef int _g4_t_v1091;
  typedef int _g4_t_v1092;
  typedef int _g4_t_v1093;
  typedef int _g4_t_v1094;
  typedef int _g4_t_v1095;
  typedef int _g4_t_v1096;
  typedef int _g4_t_v1097;
  typedef int _g4_t_v1098;
  typedef int _g4_t_v1099;
  typedef int _g4_t_v1100;
  typedef int _g4_t_v1101;
  typedef int _g4_t_v1102;
  typedef int _g4_t_v1103;
  typedef int _g4_t_v1104;
  typedef int _g4_t_v1105;
  typedef int _g4_t_v1106;
  typedef int _g4_t_v1107;
  typedef int _g4_t_v1108;
  typedef int _g4_t_v1109;
  typedef int _g4_t_v1110;
  typedef int _g4_t_v1111;
  typedef int _g4_t_v1112;
  typedef int _g4_t_v1113;
  typedef int _g4_t_v1114;
  typedef int _g4_t_v1115;
  typedef int _g4_t_v1116;
  typedef int _g4_t_v1117;
  typedef int _g4_t_v1118;
  typedef int _g4_t_v1119;
  typedef int _g4_t_v1120;
  typedef int _g4_t_v1121;
  typedef int _g4_t_v1122;
  typedef int _g4_t_v1123;
  typedef int _g4_t_v1124;
  typedef int _g4_t_v1125;
  typedef int _g4_t_v1126;
  typedef int _g4_t_v1127;
  typedef int _g4_t_v1128;
  typedef int _g4_t_v1129;
  typedef int _g4_t_v1130;
  typedef int _g4_t_v1131;
  typedef int _g4_t_v1132;
  typedef int _g4_t_v1133;
  typedef int _g4_t_v1134;
  typedef int _g4_t_v1135;
  typedef int _g4_t_v1136;
  typedef int _g4_t_v1137;
  typedef int _g4_t_v1138;
  typedef int _g4_t_v1139;
  typedef int _g4_t_v1140;
  typedef int _g4_t_v1141;
  typedef int _g4_t_v1142;
  typedef int _g4_t_v1143;
  typedef int _g4_t_v1144;
  typedef int _g4_t_v1145;
  typedef int _g4_t_v1146;
  typedef int _g4_t_v1147;
  typedef int _g4_t_v1148;
  typedef int _g4_t_v1149;
  typedef int _g4_t_v1150;
  typedef int _g4_t_v1151;
  typedef int _g4_t_v1152;
  typedef int _g4_t_v1153;
  typedef int _g4_t_v1154;
  typedef int _g4_t_v1155;
  typedef int _g4_t_v1156;
  typedef int _g4_t_v1157;
  typedef int _g4_t_v1158;
  typedef int _g4_t_v1159;
  typedef int _g4_t_v1160;
  typedef int _g4_t_v1161;
  typedef int _g4_t_v1162;
  typedef int _g4_t_v1163;
  typedef int _g4_t_v1164;
  typedef int _g4_t_v1165;
  typedef int _g4_t_v1166;
  typedef int _g4_t_v1167;
  typedef int _g4_t_v1168;
  typedef int _g4_t_v1169;
  typedef int _g4_t_v1170;
  typedef int _g4_t_v1171;
  typedef int _g4_t_v1172;
  typedef int _g4_t_v1173;
  typedef int _g4_t_v1174;
  typedef int _g4_t_v1175;
  typedef int _g4_t_v1176;
  typedef int _g4_t_v1177;
  typedef int _g4_t_v1178;
  typedef int _g4_t_v1179;
  typedef int _g4_t_v1180;
  typedef int _g4_t_v1181;
  typedef int _g4_t_v1182;
  typedef int _g4_t_v1183;
  typedef int _g4_t_v1184;
  typedef int _g4_t_v1185;
  typedef int _g4_t_v1186;
  typedef int _g4_t_v1187;
  typedef int _g4_t_v1188;
  typedef int _g4_t_v1189;
  typedef int _g4_t_v1190;
  typedef int _g4_t_v1191;
  typedef int _g4_t_v1192;
  typedef int _g4_t_v1193;
  typedef int _g4_t_v1194;
  typedef int _g4_t_v1195;
  typedef int _g4_t_v1196;
  typedef int _g4_t_v1197;
  typedef int _g4_t_v1198;
  typedef int _g4_t_v1199;
  typedef int _g4_t_v1200;
  typedef int _g4_t_v1201;
  typedef int _g4_t_v1202;
  typedef int _g4_t_v1203;
  typedef int _g4_t_v1204;
  typedef int _g4_t_v1205;
  typedef int _g4_t_v1206;
  typedef int _g4_t_v1207;
  typedef int _g4_t_v1208;
  typedef int _g4_t_v1209;
  typedef int _g4_t_v1210;
  typedef int _g4_t_v1211;
  typedef int _g4_t_v1212;
  typedef int _g4_t_v1213;
  typedef int _g4_t_v1214;
  typedef int _g4_t_v1215;
  typedef int _g4_t_v1216;
  typedef int _g4_t_v1217;
  typedef int _g4_t_v1218;
  typedef int _g4_t_v1219;
  typedef int _g4_t_v1220;
  typedef int _g4_t_v1221;
  typedef int _g4_t_v1222;
  typedef int _g4_t_v1223;
  typedef int _g4_t_v1224;
  typedef int _g4_t_v1225;
  typedef int _g4_t_v1226;
  typedef int _g4_t_v1227;
  typedef int _g4_t_v1228;
  typedef int _g4_t_v1229;
  typedef int _g4_t_v1230;
  typedef int _g4_t_v1231;
  typedef int _g4_t_v1232;
  typedef int _g4_t_v1233;
  typedef int _g4_t_v1234;
  typedef int _g4_t_v1235;
  typedef int _g4_t_v1236;
  typedef int _g4_t_v1237;
  typedef int _g4_t_v1238;
  typedef int _g4_t_v1239;
  typedef int _g4_t_v1240;
  typedef int _g4_t_v1241;
  typedef int _g4_t_v1242;
  typedef int _g4_t_v1243;
  typedef int _g4_t_v1244;
  typedef int _g4_t_v1245;
  typedef int _g4_t_v1246;
  typedef int _g4_t_v1247;
  typedef int _g4_t_v1248;
  typedef int _g4_t_v1249;
  typedef int _g4_t_v1250;
  typedef int _g4_t_v1251;
  typedef int _g4_t_v1252;
  typedef int _g4_t_v1253;
  typedef int _g4_t_v1254;
  typedef int _g4_t_v1255;
  typedef int _g4_t_v1256;
  typedef int _g4_t_v1257;
  typedef int _g4_t_v1258;
  typedef int _g4_t_v1259;
  typedef int _g4_t_v1260;
  typedef uint8_t *_g4_t_v1261;
  typedef uint8_t *_g4_t_v1262;
  typedef int _g4_t_v1263;
  enum : size_t {
    _g4_s0 = 3392u,
    _g4_s1 = (0u + sizeof(_g4_t_v245)) > _g4_s0 ? (0u + sizeof(_g4_t_v245)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v246)) > _g4_s1 ? (0u + sizeof(_g4_t_v246)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v247)) > _g4_s2 ? (0u + sizeof(_g4_t_v247)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v248)) > _g4_s3 ? (0u + sizeof(_g4_t_v248)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v249)) > _g4_s4 ? (0u + sizeof(_g4_t_v249)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v250)) > _g4_s5 ? (0u + sizeof(_g4_t_v250)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v251)) > _g4_s6 ? (0u + sizeof(_g4_t_v251)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v252)) > _g4_s7 ? (0u + sizeof(_g4_t_v252)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v253)) > _g4_s8 ? (0u + sizeof(_g4_t_v253)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v254)) > _g4_s9 ? (0u + sizeof(_g4_t_v254)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_v255)) > _g4_s10 ? (0u + sizeof(_g4_t_v255)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_v256)) > _g4_s11 ? (0u + sizeof(_g4_t_v256)) : _g4_s11,
    _g4_s13 = (0u + sizeof(_g4_t_v257)) > _g4_s12 ? (0u + sizeof(_g4_t_v257)) : _g4_s12,
    _g4_s14 = (0u + sizeof(_g4_t_v258)) > _g4_s13 ? (0u + sizeof(_g4_t_v258)) : _g4_s13,
    _g4_s15 = (0u + sizeof(_g4_t_v259)) > _g4_s14 ? (0u + sizeof(_g4_t_v259)) : _g4_s14,
    _g4_s16 = (0u + sizeof(_g4_t_v260)) > _g4_s15 ? (0u + sizeof(_g4_t_v260)) : _g4_s15,
    _g4_s17 = (0u + sizeof(_g4_t_v261)) > _g4_s16 ? (0u + sizeof(_g4_t_v261)) : _g4_s16,
    _g4_s18 = (0u + sizeof(_g4_t_v262)) > _g4_s17 ? (0u + sizeof(_g4_t_v262)) : _g4_s17,
    _g4_s19 = (0u + sizeof(_g4_t_v263)) > _g4_s18 ? (0u + sizeof(_g4_t_v263)) : _g4_s18,
    _g4_s20 = (0u + sizeof(_g4_t_v264)) > _g4_s19 ? (0u + sizeof(_g4_t_v264)) : _g4_s19,
    _g4_s21 = (0u + sizeof(_g4_t_v265)) > _g4_s20 ? (0u + sizeof(_g4_t_v265)) : _g4_s20,
    _g4_s22 = (0u + sizeof(_g4_t_v266)) > _g4_s21 ? (0u + sizeof(_g4_t_v266)) : _g4_s21,
    _g4_s23 = (0u + sizeof(_g4_t_v267)) > _g4_s22 ? (0u + sizeof(_g4_t_v267)) : _g4_s22,
    _g4_s24 = (0u + sizeof(_g4_t_v268)) > _g4_s23 ? (0u + sizeof(_g4_t_v268)) : _g4_s23,
    _g4_s25 = (0u + sizeof(_g4_t_v269)) > _g4_s24 ? (0u + sizeof(_g4_t_v269)) : _g4_s24,
    _g4_s26 = (0u + sizeof(_g4_t_v270)) > _g4_s25 ? (0u + sizeof(_g4_t_v270)) : _g4_s25,
    _g4_s27 = (0u + sizeof(_g4_t_v271)) > _g4_s26 ? (0u + sizeof(_g4_t_v271)) : _g4_s26,
    _g4_s28 = (0u + sizeof(_g4_t_v272)) > _g4_s27 ? (0u + sizeof(_g4_t_v272)) : _g4_s27,
    _g4_s29 = (0u + sizeof(_g4_t_v273)) > _g4_s28 ? (0u + sizeof(_g4_t_v273)) : _g4_s28,
    _g4_s30 = (0u + sizeof(_g4_t_v274)) > _g4_s29 ? (0u + sizeof(_g4_t_v274)) : _g4_s29,
    _g4_s31 = (0u + sizeof(_g4_t_v275)) > _g4_s30 ? (0u + sizeof(_g4_t_v275)) : _g4_s30,
    _g4_s32 = (0u + sizeof(_g4_t_v276)) > _g4_s31 ? (0u + sizeof(_g4_t_v276)) : _g4_s31,
    _g4_s33 = (0u + sizeof(_g4_t_v277)) > _g4_s32 ? (0u + sizeof(_g4_t_v277)) : _g4_s32,
    _g4_s34 = (0u + sizeof(_g4_t_v278)) > _g4_s33 ? (0u + sizeof(_g4_t_v278)) : _g4_s33,
    _g4_s35 = (0u + sizeof(_g4_t_v279)) > _g4_s34 ? (0u + sizeof(_g4_t_v279)) : _g4_s34,
    _g4_s36 = (0u + sizeof(_g4_t_v280)) > _g4_s35 ? (0u + sizeof(_g4_t_v280)) : _g4_s35,
    _g4_s37 = (0u + sizeof(_g4_t_v281)) > _g4_s36 ? (0u + sizeof(_g4_t_v281)) : _g4_s36,
    _g4_s38 = (0u + sizeof(_g4_t_v282)) > _g4_s37 ? (0u + sizeof(_g4_t_v282)) : _g4_s37,
    _g4_s39 = (0u + sizeof(_g4_t_v283)) > _g4_s38 ? (0u + sizeof(_g4_t_v283)) : _g4_s38,
    _g4_s40 = (0u + sizeof(_g4_t_v284)) > _g4_s39 ? (0u + sizeof(_g4_t_v284)) : _g4_s39,
    _g4_s41 = (0u + sizeof(_g4_t_v285)) > _g4_s40 ? (0u + sizeof(_g4_t_v285)) : _g4_s40,
    _g4_s42 = (0u + sizeof(_g4_t_v286)) > _g4_s41 ? (0u + sizeof(_g4_t_v286)) : _g4_s41,
    _g4_s43 = (0u + sizeof(_g4_t_v287)) > _g4_s42 ? (0u + sizeof(_g4_t_v287)) : _g4_s42,
    _g4_s44 = (0u + sizeof(_g4_t_v288)) > _g4_s43 ? (0u + sizeof(_g4_t_v288)) : _g4_s43,
    _g4_s45 = (0u + sizeof(_g4_t_v289)) > _g4_s44 ? (0u + sizeof(_g4_t_v289)) : _g4_s44,
    _g4_s46 = (0u + sizeof(_g4_t_v290)) > _g4_s45 ? (0u + sizeof(_g4_t_v290)) : _g4_s45,
    _g4_s47 = (0u + sizeof(_g4_t_v291)) > _g4_s46 ? (0u + sizeof(_g4_t_v291)) : _g4_s46,
    _g4_s48 = (0u + sizeof(_g4_t_v292)) > _g4_s47 ? (0u + sizeof(_g4_t_v292)) : _g4_s47,
    _g4_s49 = (4u + sizeof(_g4_t_v293)) > _g4_s48 ? (4u + sizeof(_g4_t_v293)) : _g4_s48,
    _g4_s50 = (4u + sizeof(_g4_t_v294)) > _g4_s49 ? (4u + sizeof(_g4_t_v294)) : _g4_s49,
    _g4_s51 = (4u + sizeof(_g4_t_v295)) > _g4_s50 ? (4u + sizeof(_g4_t_v295)) : _g4_s50,
    _g4_s52 = (4u + sizeof(_g4_t_v296)) > _g4_s51 ? (4u + sizeof(_g4_t_v296)) : _g4_s51,
    _g4_s53 = (4u + sizeof(_g4_t_v297)) > _g4_s52 ? (4u + sizeof(_g4_t_v297)) : _g4_s52,
    _g4_s54 = (4u + sizeof(_g4_t_v298)) > _g4_s53 ? (4u + sizeof(_g4_t_v298)) : _g4_s53,
    _g4_s55 = (4u + sizeof(_g4_t_v299)) > _g4_s54 ? (4u + sizeof(_g4_t_v299)) : _g4_s54,
    _g4_s56 = (4u + sizeof(_g4_t_v300)) > _g4_s55 ? (4u + sizeof(_g4_t_v300)) : _g4_s55,
    _g4_s57 = (4u + sizeof(_g4_t_v301)) > _g4_s56 ? (4u + sizeof(_g4_t_v301)) : _g4_s56,
    _g4_s58 = (4u + sizeof(_g4_t_v302)) > _g4_s57 ? (4u + sizeof(_g4_t_v302)) : _g4_s57,
    _g4_s59 = (4u + sizeof(_g4_t_v303)) > _g4_s58 ? (4u + sizeof(_g4_t_v303)) : _g4_s58,
    _g4_s60 = (4u + sizeof(_g4_t_v304)) > _g4_s59 ? (4u + sizeof(_g4_t_v304)) : _g4_s59,
    _g4_s61 = (4u + sizeof(_g4_t_v305)) > _g4_s60 ? (4u + sizeof(_g4_t_v305)) : _g4_s60,
    _g4_s62 = (4u + sizeof(_g4_t_v306)) > _g4_s61 ? (4u + sizeof(_g4_t_v306)) : _g4_s61,
    _g4_s63 = (4u + sizeof(_g4_t_v307)) > _g4_s62 ? (4u + sizeof(_g4_t_v307)) : _g4_s62,
    _g4_s64 = (4u + sizeof(_g4_t_v308)) > _g4_s63 ? (4u + sizeof(_g4_t_v308)) : _g4_s63,
    _g4_s65 = (4u + sizeof(_g4_t_v309)) > _g4_s64 ? (4u + sizeof(_g4_t_v309)) : _g4_s64,
    _g4_s66 = (4u + sizeof(_g4_t_v310)) > _g4_s65 ? (4u + sizeof(_g4_t_v310)) : _g4_s65,
    _g4_s67 = (4u + sizeof(_g4_t_v311)) > _g4_s66 ? (4u + sizeof(_g4_t_v311)) : _g4_s66,
    _g4_s68 = (4u + sizeof(_g4_t_v312)) > _g4_s67 ? (4u + sizeof(_g4_t_v312)) : _g4_s67,
    _g4_s69 = (4u + sizeof(_g4_t_v313)) > _g4_s68 ? (4u + sizeof(_g4_t_v313)) : _g4_s68,
    _g4_s70 = (4u + sizeof(_g4_t_v314)) > _g4_s69 ? (4u + sizeof(_g4_t_v314)) : _g4_s69,
    _g4_s71 = (4u + sizeof(_g4_t_v315)) > _g4_s70 ? (4u + sizeof(_g4_t_v315)) : _g4_s70,
    _g4_s72 = (4u + sizeof(_g4_t_v316)) > _g4_s71 ? (4u + sizeof(_g4_t_v316)) : _g4_s71,
    _g4_s73 = (4u + sizeof(_g4_t_v317)) > _g4_s72 ? (4u + sizeof(_g4_t_v317)) : _g4_s72,
    _g4_s74 = (4u + sizeof(_g4_t_v318)) > _g4_s73 ? (4u + sizeof(_g4_t_v318)) : _g4_s73,
    _g4_s75 = (4u + sizeof(_g4_t_v319)) > _g4_s74 ? (4u + sizeof(_g4_t_v319)) : _g4_s74,
    _g4_s76 = (4u + sizeof(_g4_t_v320)) > _g4_s75 ? (4u + sizeof(_g4_t_v320)) : _g4_s75,
    _g4_s77 = (4u + sizeof(_g4_t_v321)) > _g4_s76 ? (4u + sizeof(_g4_t_v321)) : _g4_s76,
    _g4_s78 = (4u + sizeof(_g4_t_v322)) > _g4_s77 ? (4u + sizeof(_g4_t_v322)) : _g4_s77,
    _g4_s79 = (4u + sizeof(_g4_t_v323)) > _g4_s78 ? (4u + sizeof(_g4_t_v323)) : _g4_s78,
    _g4_s80 = (4u + sizeof(_g4_t_v324)) > _g4_s79 ? (4u + sizeof(_g4_t_v324)) : _g4_s79,
    _g4_s81 = (4u + sizeof(_g4_t_v325)) > _g4_s80 ? (4u + sizeof(_g4_t_v325)) : _g4_s80,
    _g4_s82 = (4u + sizeof(_g4_t_v326)) > _g4_s81 ? (4u + sizeof(_g4_t_v326)) : _g4_s81,
    _g4_s83 = (4u + sizeof(_g4_t_v327)) > _g4_s82 ? (4u + sizeof(_g4_t_v327)) : _g4_s82,
    _g4_s84 = (4u + sizeof(_g4_t_v328)) > _g4_s83 ? (4u + sizeof(_g4_t_v328)) : _g4_s83,
    _g4_s85 = (4u + sizeof(_g4_t_v329)) > _g4_s84 ? (4u + sizeof(_g4_t_v329)) : _g4_s84,
    _g4_s86 = (4u + sizeof(_g4_t_v330)) > _g4_s85 ? (4u + sizeof(_g4_t_v330)) : _g4_s85,
    _g4_s87 = (4u + sizeof(_g4_t_v331)) > _g4_s86 ? (4u + sizeof(_g4_t_v331)) : _g4_s86,
    _g4_s88 = (4u + sizeof(_g4_t_v332)) > _g4_s87 ? (4u + sizeof(_g4_t_v332)) : _g4_s87,
    _g4_s89 = (4u + sizeof(_g4_t_v333)) > _g4_s88 ? (4u + sizeof(_g4_t_v333)) : _g4_s88,
    _g4_s90 = (4u + sizeof(_g4_t_v334)) > _g4_s89 ? (4u + sizeof(_g4_t_v334)) : _g4_s89,
    _g4_s91 = (4u + sizeof(_g4_t_v335)) > _g4_s90 ? (4u + sizeof(_g4_t_v335)) : _g4_s90,
    _g4_s92 = (4u + sizeof(_g4_t_v336)) > _g4_s91 ? (4u + sizeof(_g4_t_v336)) : _g4_s91,
    _g4_s93 = (4u + sizeof(_g4_t_v337)) > _g4_s92 ? (4u + sizeof(_g4_t_v337)) : _g4_s92,
    _g4_s94 = (4u + sizeof(_g4_t_v338)) > _g4_s93 ? (4u + sizeof(_g4_t_v338)) : _g4_s93,
    _g4_s95 = (4u + sizeof(_g4_t_v339)) > _g4_s94 ? (4u + sizeof(_g4_t_v339)) : _g4_s94,
    _g4_s96 = (4u + sizeof(_g4_t_v340)) > _g4_s95 ? (4u + sizeof(_g4_t_v340)) : _g4_s95,
    _g4_s97 = (4u + sizeof(_g4_t_v341)) > _g4_s96 ? (4u + sizeof(_g4_t_v341)) : _g4_s96,
    _g4_s98 = (4u + sizeof(_g4_t_v342)) > _g4_s97 ? (4u + sizeof(_g4_t_v342)) : _g4_s97,
    _g4_s99 = (4u + sizeof(_g4_t_v343)) > _g4_s98 ? (4u + sizeof(_g4_t_v343)) : _g4_s98,
    _g4_s100 = (4u + sizeof(_g4_t_v344)) > _g4_s99 ? (4u + sizeof(_g4_t_v344)) : _g4_s99,
    _g4_s101 = (4u + sizeof(_g4_t_v345)) > _g4_s100 ? (4u + sizeof(_g4_t_v345)) : _g4_s100,
    _g4_s102 = (4u + sizeof(_g4_t_v346)) > _g4_s101 ? (4u + sizeof(_g4_t_v346)) : _g4_s101,
    _g4_s103 = (4u + sizeof(_g4_t_v347)) > _g4_s102 ? (4u + sizeof(_g4_t_v347)) : _g4_s102,
    _g4_s104 = (4u + sizeof(_g4_t_v348)) > _g4_s103 ? (4u + sizeof(_g4_t_v348)) : _g4_s103,
    _g4_s105 = (4u + sizeof(_g4_t_v349)) > _g4_s104 ? (4u + sizeof(_g4_t_v349)) : _g4_s104,
    _g4_s106 = (4u + sizeof(_g4_t_v350)) > _g4_s105 ? (4u + sizeof(_g4_t_v350)) : _g4_s105,
    _g4_s107 = (4u + sizeof(_g4_t_v351)) > _g4_s106 ? (4u + sizeof(_g4_t_v351)) : _g4_s106,
    _g4_s108 = (4u + sizeof(_g4_t_v352)) > _g4_s107 ? (4u + sizeof(_g4_t_v352)) : _g4_s107,
    _g4_s109 = (4u + sizeof(_g4_t_v353)) > _g4_s108 ? (4u + sizeof(_g4_t_v353)) : _g4_s108,
    _g4_s110 = (4u + sizeof(_g4_t_v354)) > _g4_s109 ? (4u + sizeof(_g4_t_v354)) : _g4_s109,
    _g4_s111 = (4u + sizeof(_g4_t_v355)) > _g4_s110 ? (4u + sizeof(_g4_t_v355)) : _g4_s110,
    _g4_s112 = (4u + sizeof(_g4_t_v356)) > _g4_s111 ? (4u + sizeof(_g4_t_v356)) : _g4_s111,
    _g4_s113 = (4u + sizeof(_g4_t_v357)) > _g4_s112 ? (4u + sizeof(_g4_t_v357)) : _g4_s112,
    _g4_s114 = (4u + sizeof(_g4_t_v358)) > _g4_s113 ? (4u + sizeof(_g4_t_v358)) : _g4_s113,
    _g4_s115 = (4u + sizeof(_g4_t_v359)) > _g4_s114 ? (4u + sizeof(_g4_t_v359)) : _g4_s114,
    _g4_s116 = (4u + sizeof(_g4_t_v360)) > _g4_s115 ? (4u + sizeof(_g4_t_v360)) : _g4_s115,
    _g4_s117 = (4u + sizeof(_g4_t_v361)) > _g4_s116 ? (4u + sizeof(_g4_t_v361)) : _g4_s116,
    _g4_s118 = (4u + sizeof(_g4_t_v362)) > _g4_s117 ? (4u + sizeof(_g4_t_v362)) : _g4_s117,
    _g4_s119 = (4u + sizeof(_g4_t_v363)) > _g4_s118 ? (4u + sizeof(_g4_t_v363)) : _g4_s118,
    _g4_s120 = (4u + sizeof(_g4_t_v364)) > _g4_s119 ? (4u + sizeof(_g4_t_v364)) : _g4_s119,
    _g4_s121 = (4u + sizeof(_g4_t_v365)) > _g4_s120 ? (4u + sizeof(_g4_t_v365)) : _g4_s120,
    _g4_s122 = (4u + sizeof(_g4_t_v366)) > _g4_s121 ? (4u + sizeof(_g4_t_v366)) : _g4_s121,
    _g4_s123 = (4u + sizeof(_g4_t_v367)) > _g4_s122 ? (4u + sizeof(_g4_t_v367)) : _g4_s122,
    _g4_s124 = (4u + sizeof(_g4_t_v368)) > _g4_s123 ? (4u + sizeof(_g4_t_v368)) : _g4_s123,
    _g4_s125 = (4u + sizeof(_g4_t_v369)) > _g4_s124 ? (4u + sizeof(_g4_t_v369)) : _g4_s124,
    _g4_s126 = (4u + sizeof(_g4_t_v370)) > _g4_s125 ? (4u + sizeof(_g4_t_v370)) : _g4_s125,
    _g4_s127 = (4u + sizeof(_g4_t_v371)) > _g4_s126 ? (4u + sizeof(_g4_t_v371)) : _g4_s126,
    _g4_s128 = (4u + sizeof(_g4_t_v372)) > _g4_s127 ? (4u + sizeof(_g4_t_v372)) : _g4_s127,
    _g4_s129 = (4u + sizeof(_g4_t_v373)) > _g4_s128 ? (4u + sizeof(_g4_t_v373)) : _g4_s128,
    _g4_s130 = (4u + sizeof(_g4_t_v374)) > _g4_s129 ? (4u + sizeof(_g4_t_v374)) : _g4_s129,
    _g4_s131 = (4u + sizeof(_g4_t_v375)) > _g4_s130 ? (4u + sizeof(_g4_t_v375)) : _g4_s130,
    _g4_s132 = (4u + sizeof(_g4_t_v376)) > _g4_s131 ? (4u + sizeof(_g4_t_v376)) : _g4_s131,
    _g4_s133 = (4u + sizeof(_g4_t_v377)) > _g4_s132 ? (4u + sizeof(_g4_t_v377)) : _g4_s132,
    _g4_s134 = (4u + sizeof(_g4_t_v378)) > _g4_s133 ? (4u + sizeof(_g4_t_v378)) : _g4_s133,
    _g4_s135 = (4u + sizeof(_g4_t_v379)) > _g4_s134 ? (4u + sizeof(_g4_t_v379)) : _g4_s134,
    _g4_s136 = (4u + sizeof(_g4_t_v380)) > _g4_s135 ? (4u + sizeof(_g4_t_v380)) : _g4_s135,
    _g4_s137 = (4u + sizeof(_g4_t_v381)) > _g4_s136 ? (4u + sizeof(_g4_t_v381)) : _g4_s136,
    _g4_s138 = (4u + sizeof(_g4_t_v382)) > _g4_s137 ? (4u + sizeof(_g4_t_v382)) : _g4_s137,
    _g4_s139 = (4u + sizeof(_g4_t_v383)) > _g4_s138 ? (4u + sizeof(_g4_t_v383)) : _g4_s138,
    _g4_s140 = (4u + sizeof(_g4_t_v384)) > _g4_s139 ? (4u + sizeof(_g4_t_v384)) : _g4_s139,
    _g4_s141 = (4u + sizeof(_g4_t_v385)) > _g4_s140 ? (4u + sizeof(_g4_t_v385)) : _g4_s140,
    _g4_s142 = (4u + sizeof(_g4_t_v386)) > _g4_s141 ? (4u + sizeof(_g4_t_v386)) : _g4_s141,
    _g4_s143 = (4u + sizeof(_g4_t_v387)) > _g4_s142 ? (4u + sizeof(_g4_t_v387)) : _g4_s142,
    _g4_s144 = (4u + sizeof(_g4_t_v388)) > _g4_s143 ? (4u + sizeof(_g4_t_v388)) : _g4_s143,
    _g4_s145 = (4u + sizeof(_g4_t_v389)) > _g4_s144 ? (4u + sizeof(_g4_t_v389)) : _g4_s144,
    _g4_s146 = (4u + sizeof(_g4_t_v390)) > _g4_s145 ? (4u + sizeof(_g4_t_v390)) : _g4_s145,
    _g4_s147 = (4u + sizeof(_g4_t_v391)) > _g4_s146 ? (4u + sizeof(_g4_t_v391)) : _g4_s146,
    _g4_s148 = (4u + sizeof(_g4_t_v392)) > _g4_s147 ? (4u + sizeof(_g4_t_v392)) : _g4_s147,
    _g4_s149 = (4u + sizeof(_g4_t_v393)) > _g4_s148 ? (4u + sizeof(_g4_t_v393)) : _g4_s148,
    _g4_s150 = (4u + sizeof(_g4_t_v394)) > _g4_s149 ? (4u + sizeof(_g4_t_v394)) : _g4_s149,
    _g4_s151 = (4u + sizeof(_g4_t_v395)) > _g4_s150 ? (4u + sizeof(_g4_t_v395)) : _g4_s150,
    _g4_s152 = (4u + sizeof(_g4_t_v396)) > _g4_s151 ? (4u + sizeof(_g4_t_v396)) : _g4_s151,
    _g4_s153 = (4u + sizeof(_g4_t_v397)) > _g4_s152 ? (4u + sizeof(_g4_t_v397)) : _g4_s152,
    _g4_s154 = (4u + sizeof(_g4_t_v398)) > _g4_s153 ? (4u + sizeof(_g4_t_v398)) : _g4_s153,
    _g4_s155 = (4u + sizeof(_g4_t_v399)) > _g4_s154 ? (4u + sizeof(_g4_t_v399)) : _g4_s154,
    _g4_s156 = (4u + sizeof(_g4_t_v400)) > _g4_s155 ? (4u + sizeof(_g4_t_v400)) : _g4_s155,
    _g4_s157 = (4u + sizeof(_g4_t_v401)) > _g4_s156 ? (4u + sizeof(_g4_t_v401)) : _g4_s156,
    _g4_s158 = (4u + sizeof(_g4_t_v402)) > _g4_s157 ? (4u + sizeof(_g4_t_v402)) : _g4_s157,
    _g4_s159 = (4u + sizeof(_g4_t_v403)) > _g4_s158 ? (4u + sizeof(_g4_t_v403)) : _g4_s158,
    _g4_s160 = (4u + sizeof(_g4_t_v404)) > _g4_s159 ? (4u + sizeof(_g4_t_v404)) : _g4_s159,
    _g4_s161 = (4u + sizeof(_g4_t_v405)) > _g4_s160 ? (4u + sizeof(_g4_t_v405)) : _g4_s160,
    _g4_s162 = (4u + sizeof(_g4_t_v406)) > _g4_s161 ? (4u + sizeof(_g4_t_v406)) : _g4_s161,
    _g4_s163 = (4u + sizeof(_g4_t_v407)) > _g4_s162 ? (4u + sizeof(_g4_t_v407)) : _g4_s162,
    _g4_s164 = (4u + sizeof(_g4_t_v408)) > _g4_s163 ? (4u + sizeof(_g4_t_v408)) : _g4_s163,
    _g4_s165 = (4u + sizeof(_g4_t_v409)) > _g4_s164 ? (4u + sizeof(_g4_t_v409)) : _g4_s164,
    _g4_s166 = (4u + sizeof(_g4_t_v410)) > _g4_s165 ? (4u + sizeof(_g4_t_v410)) : _g4_s165,
    _g4_s167 = (4u + sizeof(_g4_t_v411)) > _g4_s166 ? (4u + sizeof(_g4_t_v411)) : _g4_s166,
    _g4_s168 = (4u + sizeof(_g4_t_v412)) > _g4_s167 ? (4u + sizeof(_g4_t_v412)) : _g4_s167,
    _g4_s169 = (4u + sizeof(_g4_t_v413)) > _g4_s168 ? (4u + sizeof(_g4_t_v413)) : _g4_s168,
    _g4_s170 = (4u + sizeof(_g4_t_v414)) > _g4_s169 ? (4u + sizeof(_g4_t_v414)) : _g4_s169,
    _g4_s171 = (4u + sizeof(_g4_t_v415)) > _g4_s170 ? (4u + sizeof(_g4_t_v415)) : _g4_s170,
    _g4_s172 = (4u + sizeof(_g4_t_v416)) > _g4_s171 ? (4u + sizeof(_g4_t_v416)) : _g4_s171,
    _g4_s173 = (4u + sizeof(_g4_t_v417)) > _g4_s172 ? (4u + sizeof(_g4_t_v417)) : _g4_s172,
    _g4_s174 = (4u + sizeof(_g4_t_v418)) > _g4_s173 ? (4u + sizeof(_g4_t_v418)) : _g4_s173,
    _g4_s175 = (4u + sizeof(_g4_t_v419)) > _g4_s174 ? (4u + sizeof(_g4_t_v419)) : _g4_s174,
    _g4_s176 = (4u + sizeof(_g4_t_v420)) > _g4_s175 ? (4u + sizeof(_g4_t_v420)) : _g4_s175,
    _g4_s177 = (4u + sizeof(_g4_t_v421)) > _g4_s176 ? (4u + sizeof(_g4_t_v421)) : _g4_s176,
    _g4_s178 = (4u + sizeof(_g4_t_v422)) > _g4_s177 ? (4u + sizeof(_g4_t_v422)) : _g4_s177,
    _g4_s179 = (4u + sizeof(_g4_t_v423)) > _g4_s178 ? (4u + sizeof(_g4_t_v423)) : _g4_s178,
    _g4_s180 = (4u + sizeof(_g4_t_v424)) > _g4_s179 ? (4u + sizeof(_g4_t_v424)) : _g4_s179,
    _g4_s181 = (4u + sizeof(_g4_t_v425)) > _g4_s180 ? (4u + sizeof(_g4_t_v425)) : _g4_s180,
    _g4_s182 = (4u + sizeof(_g4_t_v426)) > _g4_s181 ? (4u + sizeof(_g4_t_v426)) : _g4_s181,
    _g4_s183 = (4u + sizeof(_g4_t_v427)) > _g4_s182 ? (4u + sizeof(_g4_t_v427)) : _g4_s182,
    _g4_s184 = (4u + sizeof(_g4_t_v428)) > _g4_s183 ? (4u + sizeof(_g4_t_v428)) : _g4_s183,
    _g4_s185 = (4u + sizeof(_g4_t_v429)) > _g4_s184 ? (4u + sizeof(_g4_t_v429)) : _g4_s184,
    _g4_s186 = (4u + sizeof(_g4_t_v430)) > _g4_s185 ? (4u + sizeof(_g4_t_v430)) : _g4_s185,
    _g4_s187 = (4u + sizeof(_g4_t_v431)) > _g4_s186 ? (4u + sizeof(_g4_t_v431)) : _g4_s186,
    _g4_s188 = (4u + sizeof(_g4_t_v432)) > _g4_s187 ? (4u + sizeof(_g4_t_v432)) : _g4_s187,
    _g4_s189 = (4u + sizeof(_g4_t_v433)) > _g4_s188 ? (4u + sizeof(_g4_t_v433)) : _g4_s188,
    _g4_s190 = (4u + sizeof(_g4_t_v434)) > _g4_s189 ? (4u + sizeof(_g4_t_v434)) : _g4_s189,
    _g4_s191 = (4u + sizeof(_g4_t_v435)) > _g4_s190 ? (4u + sizeof(_g4_t_v435)) : _g4_s190,
    _g4_s192 = (4u + sizeof(_g4_t_v436)) > _g4_s191 ? (4u + sizeof(_g4_t_v436)) : _g4_s191,
    _g4_s193 = (4u + sizeof(_g4_t_v437)) > _g4_s192 ? (4u + sizeof(_g4_t_v437)) : _g4_s192,
    _g4_s194 = (4u + sizeof(_g4_t_v438)) > _g4_s193 ? (4u + sizeof(_g4_t_v438)) : _g4_s193,
    _g4_s195 = (4u + sizeof(_g4_t_v439)) > _g4_s194 ? (4u + sizeof(_g4_t_v439)) : _g4_s194,
    _g4_s196 = (4u + sizeof(_g4_t_v440)) > _g4_s195 ? (4u + sizeof(_g4_t_v440)) : _g4_s195,
    _g4_s197 = (4u + sizeof(_g4_t_v441)) > _g4_s196 ? (4u + sizeof(_g4_t_v441)) : _g4_s196,
    _g4_s198 = (4u + sizeof(_g4_t_v442)) > _g4_s197 ? (4u + sizeof(_g4_t_v442)) : _g4_s197,
    _g4_s199 = (4u + sizeof(_g4_t_v443)) > _g4_s198 ? (4u + sizeof(_g4_t_v443)) : _g4_s198,
    _g4_s200 = (4u + sizeof(_g4_t_v444)) > _g4_s199 ? (4u + sizeof(_g4_t_v444)) : _g4_s199,
    _g4_s201 = (4u + sizeof(_g4_t_v445)) > _g4_s200 ? (4u + sizeof(_g4_t_v445)) : _g4_s200,
    _g4_s202 = (4u + sizeof(_g4_t_v446)) > _g4_s201 ? (4u + sizeof(_g4_t_v446)) : _g4_s201,
    _g4_s203 = (4u + sizeof(_g4_t_v447)) > _g4_s202 ? (4u + sizeof(_g4_t_v447)) : _g4_s202,
    _g4_s204 = (4u + sizeof(_g4_t_v448)) > _g4_s203 ? (4u + sizeof(_g4_t_v448)) : _g4_s203,
    _g4_s205 = (4u + sizeof(_g4_t_v449)) > _g4_s204 ? (4u + sizeof(_g4_t_v449)) : _g4_s204,
    _g4_s206 = (4u + sizeof(_g4_t_v450)) > _g4_s205 ? (4u + sizeof(_g4_t_v450)) : _g4_s205,
    _g4_s207 = (4u + sizeof(_g4_t_v451)) > _g4_s206 ? (4u + sizeof(_g4_t_v451)) : _g4_s206,
    _g4_s208 = (4u + sizeof(_g4_t_v452)) > _g4_s207 ? (4u + sizeof(_g4_t_v452)) : _g4_s207,
    _g4_s209 = (4u + sizeof(_g4_t_v453)) > _g4_s208 ? (4u + sizeof(_g4_t_v453)) : _g4_s208,
    _g4_s210 = (4u + sizeof(_g4_t_v454)) > _g4_s209 ? (4u + sizeof(_g4_t_v454)) : _g4_s209,
    _g4_s211 = (4u + sizeof(_g4_t_v455)) > _g4_s210 ? (4u + sizeof(_g4_t_v455)) : _g4_s210,
    _g4_s212 = (4u + sizeof(_g4_t_v456)) > _g4_s211 ? (4u + sizeof(_g4_t_v456)) : _g4_s211,
    _g4_s213 = (4u + sizeof(_g4_t_v457)) > _g4_s212 ? (4u + sizeof(_g4_t_v457)) : _g4_s212,
    _g4_s214 = (4u + sizeof(_g4_t_v458)) > _g4_s213 ? (4u + sizeof(_g4_t_v458)) : _g4_s213,
    _g4_s215 = (4u + sizeof(_g4_t_v459)) > _g4_s214 ? (4u + sizeof(_g4_t_v459)) : _g4_s214,
    _g4_s216 = (4u + sizeof(_g4_t_v460)) > _g4_s215 ? (4u + sizeof(_g4_t_v460)) : _g4_s215,
    _g4_s217 = (4u + sizeof(_g4_t_v461)) > _g4_s216 ? (4u + sizeof(_g4_t_v461)) : _g4_s216,
    _g4_s218 = (4u + sizeof(_g4_t_v462)) > _g4_s217 ? (4u + sizeof(_g4_t_v462)) : _g4_s217,
    _g4_s219 = (4u + sizeof(_g4_t_v463)) > _g4_s218 ? (4u + sizeof(_g4_t_v463)) : _g4_s218,
    _g4_s220 = (4u + sizeof(_g4_t_v464)) > _g4_s219 ? (4u + sizeof(_g4_t_v464)) : _g4_s219,
    _g4_s221 = (4u + sizeof(_g4_t_v465)) > _g4_s220 ? (4u + sizeof(_g4_t_v465)) : _g4_s220,
    _g4_s222 = (4u + sizeof(_g4_t_v466)) > _g4_s221 ? (4u + sizeof(_g4_t_v466)) : _g4_s221,
    _g4_s223 = (4u + sizeof(_g4_t_v467)) > _g4_s222 ? (4u + sizeof(_g4_t_v467)) : _g4_s222,
    _g4_s224 = (8u + sizeof(_g4_t_v468)) > _g4_s223 ? (8u + sizeof(_g4_t_v468)) : _g4_s223,
    _g4_s225 = (120u + sizeof(_g4_t_v469)) > _g4_s224 ? (120u + sizeof(_g4_t_v469)) : _g4_s224,
    _g4_s226 = (128u + sizeof(_g4_t_v470)) > _g4_s225 ? (128u + sizeof(_g4_t_v470)) : _g4_s225,
    _g4_s227 = (132u + sizeof(_g4_t_v471)) > _g4_s226 ? (132u + sizeof(_g4_t_v471)) : _g4_s226,
    _g4_s228 = (136u + sizeof(_g4_t_v472)) > _g4_s227 ? (136u + sizeof(_g4_t_v472)) : _g4_s227,
    _g4_s229 = (140u + sizeof(_g4_t_v473)) > _g4_s228 ? (140u + sizeof(_g4_t_v473)) : _g4_s228,
    _g4_s230 = (144u + sizeof(_g4_t_v474)) > _g4_s229 ? (144u + sizeof(_g4_t_v474)) : _g4_s229,
    _g4_s231 = (148u + sizeof(_g4_t_v475)) > _g4_s230 ? (148u + sizeof(_g4_t_v475)) : _g4_s230,
    _g4_s232 = (152u + sizeof(_g4_t_v476)) > _g4_s231 ? (152u + sizeof(_g4_t_v476)) : _g4_s231,
    _g4_s233 = (156u + sizeof(_g4_t_v477)) > _g4_s232 ? (156u + sizeof(_g4_t_v477)) : _g4_s232,
    _g4_s234 = (160u + sizeof(_g4_t_v478)) > _g4_s233 ? (160u + sizeof(_g4_t_v478)) : _g4_s233,
    _g4_s235 = (164u + sizeof(_g4_t_v479)) > _g4_s234 ? (164u + sizeof(_g4_t_v479)) : _g4_s234,
    _g4_s236 = (168u + sizeof(_g4_t_v480)) > _g4_s235 ? (168u + sizeof(_g4_t_v480)) : _g4_s235,
    _g4_s237 = (172u + sizeof(_g4_t_v481)) > _g4_s236 ? (172u + sizeof(_g4_t_v481)) : _g4_s236,
    _g4_s238 = (176u + sizeof(_g4_t_v482)) > _g4_s237 ? (176u + sizeof(_g4_t_v482)) : _g4_s237,
    _g4_s239 = (180u + sizeof(_g4_t_v483)) > _g4_s238 ? (180u + sizeof(_g4_t_v483)) : _g4_s238,
    _g4_s240 = (184u + sizeof(_g4_t_v484)) > _g4_s239 ? (184u + sizeof(_g4_t_v484)) : _g4_s239,
    _g4_s241 = (188u + sizeof(_g4_t_v485)) > _g4_s240 ? (188u + sizeof(_g4_t_v485)) : _g4_s240,
    _g4_s242 = (192u + sizeof(_g4_t_v486)) > _g4_s241 ? (192u + sizeof(_g4_t_v486)) : _g4_s241,
    _g4_s243 = (196u + sizeof(_g4_t_v487)) > _g4_s242 ? (196u + sizeof(_g4_t_v487)) : _g4_s242,
    _g4_s244 = (200u + sizeof(_g4_t_v488)) > _g4_s243 ? (200u + sizeof(_g4_t_v488)) : _g4_s243,
    _g4_s245 = (204u + sizeof(_g4_t_v489)) > _g4_s244 ? (204u + sizeof(_g4_t_v489)) : _g4_s244,
    _g4_s246 = (208u + sizeof(_g4_t_v490)) > _g4_s245 ? (208u + sizeof(_g4_t_v490)) : _g4_s245,
    _g4_s247 = (212u + sizeof(_g4_t_v491)) > _g4_s246 ? (212u + sizeof(_g4_t_v491)) : _g4_s246,
    _g4_s248 = (216u + sizeof(_g4_t_v492)) > _g4_s247 ? (216u + sizeof(_g4_t_v492)) : _g4_s247,
    _g4_s249 = (220u + sizeof(_g4_t_v493)) > _g4_s248 ? (220u + sizeof(_g4_t_v493)) : _g4_s248,
    _g4_s250 = (224u + sizeof(_g4_t_v494)) > _g4_s249 ? (224u + sizeof(_g4_t_v494)) : _g4_s249,
    _g4_s251 = (228u + sizeof(_g4_t_v495)) > _g4_s250 ? (228u + sizeof(_g4_t_v495)) : _g4_s250,
    _g4_s252 = (232u + sizeof(_g4_t_v496)) > _g4_s251 ? (232u + sizeof(_g4_t_v496)) : _g4_s251,
    _g4_s253 = (236u + sizeof(_g4_t_v497)) > _g4_s252 ? (236u + sizeof(_g4_t_v497)) : _g4_s252,
    _g4_s254 = (240u + sizeof(_g4_t_v498)) > _g4_s253 ? (240u + sizeof(_g4_t_v498)) : _g4_s253,
    _g4_s255 = (244u + sizeof(_g4_t_v499)) > _g4_s254 ? (244u + sizeof(_g4_t_v499)) : _g4_s254,
    _g4_s256 = (248u + sizeof(_g4_t_v500)) > _g4_s255 ? (248u + sizeof(_g4_t_v500)) : _g4_s255,
    _g4_s257 = (252u + sizeof(_g4_t_v501)) > _g4_s256 ? (252u + sizeof(_g4_t_v501)) : _g4_s256,
    _g4_s258 = (256u + sizeof(_g4_t_v502)) > _g4_s257 ? (256u + sizeof(_g4_t_v502)) : _g4_s257,
    _g4_s259 = (260u + sizeof(_g4_t_v503)) > _g4_s258 ? (260u + sizeof(_g4_t_v503)) : _g4_s258,
    _g4_s260 = (264u + sizeof(_g4_t_v504)) > _g4_s259 ? (264u + sizeof(_g4_t_v504)) : _g4_s259,
    _g4_s261 = (268u + sizeof(_g4_t_v505)) > _g4_s260 ? (268u + sizeof(_g4_t_v505)) : _g4_s260,
    _g4_s262 = (272u + sizeof(_g4_t_v506)) > _g4_s261 ? (272u + sizeof(_g4_t_v506)) : _g4_s261,
    _g4_s263 = (276u + sizeof(_g4_t_v507)) > _g4_s262 ? (276u + sizeof(_g4_t_v507)) : _g4_s262,
    _g4_s264 = (280u + sizeof(_g4_t_v508)) > _g4_s263 ? (280u + sizeof(_g4_t_v508)) : _g4_s263,
    _g4_s265 = (284u + sizeof(_g4_t_v509)) > _g4_s264 ? (284u + sizeof(_g4_t_v509)) : _g4_s264,
    _g4_s266 = (288u + sizeof(_g4_t_v510)) > _g4_s265 ? (288u + sizeof(_g4_t_v510)) : _g4_s265,
    _g4_s267 = (292u + sizeof(_g4_t_v511)) > _g4_s266 ? (292u + sizeof(_g4_t_v511)) : _g4_s266,
    _g4_s268 = (296u + sizeof(_g4_t_v512)) > _g4_s267 ? (296u + sizeof(_g4_t_v512)) : _g4_s267,
    _g4_s269 = (300u + sizeof(_g4_t_v513)) > _g4_s268 ? (300u + sizeof(_g4_t_v513)) : _g4_s268,
    _g4_s270 = (304u + sizeof(_g4_t_v514)) > _g4_s269 ? (304u + sizeof(_g4_t_v514)) : _g4_s269,
    _g4_s271 = (308u + sizeof(_g4_t_v515)) > _g4_s270 ? (308u + sizeof(_g4_t_v515)) : _g4_s270,
    _g4_s272 = (312u + sizeof(_g4_t_v516)) > _g4_s271 ? (312u + sizeof(_g4_t_v516)) : _g4_s271,
    _g4_s273 = (316u + sizeof(_g4_t_v517)) > _g4_s272 ? (316u + sizeof(_g4_t_v517)) : _g4_s272,
    _g4_s274 = (320u + sizeof(_g4_t_v518)) > _g4_s273 ? (320u + sizeof(_g4_t_v518)) : _g4_s273,
    _g4_s275 = (324u + sizeof(_g4_t_v519)) > _g4_s274 ? (324u + sizeof(_g4_t_v519)) : _g4_s274,
    _g4_s276 = (328u + sizeof(_g4_t_v520)) > _g4_s275 ? (328u + sizeof(_g4_t_v520)) : _g4_s275,
    _g4_s277 = (332u + sizeof(_g4_t_v521)) > _g4_s276 ? (332u + sizeof(_g4_t_v521)) : _g4_s276,
    _g4_s278 = (336u + sizeof(_g4_t_v522)) > _g4_s277 ? (336u + sizeof(_g4_t_v522)) : _g4_s277,
    _g4_s279 = (340u + sizeof(_g4_t_v523)) > _g4_s278 ? (340u + sizeof(_g4_t_v523)) : _g4_s278,
    _g4_s280 = (344u + sizeof(_g4_t_v524)) > _g4_s279 ? (344u + sizeof(_g4_t_v524)) : _g4_s279,
    _g4_s281 = (348u + sizeof(_g4_t_v525)) > _g4_s280 ? (348u + sizeof(_g4_t_v525)) : _g4_s280,
    _g4_s282 = (352u + sizeof(_g4_t_v526)) > _g4_s281 ? (352u + sizeof(_g4_t_v526)) : _g4_s281,
    _g4_s283 = (356u + sizeof(_g4_t_v527)) > _g4_s282 ? (356u + sizeof(_g4_t_v527)) : _g4_s282,
    _g4_s284 = (360u + sizeof(_g4_t_v528)) > _g4_s283 ? (360u + sizeof(_g4_t_v528)) : _g4_s283,
    _g4_s285 = (364u + sizeof(_g4_t_v529)) > _g4_s284 ? (364u + sizeof(_g4_t_v529)) : _g4_s284,
    _g4_s286 = (368u + sizeof(_g4_t_v530)) > _g4_s285 ? (368u + sizeof(_g4_t_v530)) : _g4_s285,
    _g4_s287 = (372u + sizeof(_g4_t_v531)) > _g4_s286 ? (372u + sizeof(_g4_t_v531)) : _g4_s286,
    _g4_s288 = (376u + sizeof(_g4_t_v532)) > _g4_s287 ? (376u + sizeof(_g4_t_v532)) : _g4_s287,
    _g4_s289 = (380u + sizeof(_g4_t_v533)) > _g4_s288 ? (380u + sizeof(_g4_t_v533)) : _g4_s288,
    _g4_s290 = (384u + sizeof(_g4_t_v534)) > _g4_s289 ? (384u + sizeof(_g4_t_v534)) : _g4_s289,
    _g4_s291 = (388u + sizeof(_g4_t_v535)) > _g4_s290 ? (388u + sizeof(_g4_t_v535)) : _g4_s290,
    _g4_s292 = (392u + sizeof(_g4_t_v536)) > _g4_s291 ? (392u + sizeof(_g4_t_v536)) : _g4_s291,
    _g4_s293 = (396u + sizeof(_g4_t_v537)) > _g4_s292 ? (396u + sizeof(_g4_t_v537)) : _g4_s292,
    _g4_s294 = (400u + sizeof(_g4_t_v538)) > _g4_s293 ? (400u + sizeof(_g4_t_v538)) : _g4_s293,
    _g4_s295 = (404u + sizeof(_g4_t_v539)) > _g4_s294 ? (404u + sizeof(_g4_t_v539)) : _g4_s294,
    _g4_s296 = (408u + sizeof(_g4_t_v540)) > _g4_s295 ? (408u + sizeof(_g4_t_v540)) : _g4_s295,
    _g4_s297 = (412u + sizeof(_g4_t_v541)) > _g4_s296 ? (412u + sizeof(_g4_t_v541)) : _g4_s296,
    _g4_s298 = (416u + sizeof(_g4_t_v542)) > _g4_s297 ? (416u + sizeof(_g4_t_v542)) : _g4_s297,
    _g4_s299 = (420u + sizeof(_g4_t_v543)) > _g4_s298 ? (420u + sizeof(_g4_t_v543)) : _g4_s298,
    _g4_s300 = (424u + sizeof(_g4_t_v544)) > _g4_s299 ? (424u + sizeof(_g4_t_v544)) : _g4_s299,
    _g4_s301 = (428u + sizeof(_g4_t_v545)) > _g4_s300 ? (428u + sizeof(_g4_t_v545)) : _g4_s300,
    _g4_s302 = (432u + sizeof(_g4_t_v546)) > _g4_s301 ? (432u + sizeof(_g4_t_v546)) : _g4_s301,
    _g4_s303 = (436u + sizeof(_g4_t_v547)) > _g4_s302 ? (436u + sizeof(_g4_t_v547)) : _g4_s302,
    _g4_s304 = (440u + sizeof(_g4_t_v548)) > _g4_s303 ? (440u + sizeof(_g4_t_v548)) : _g4_s303,
    _g4_s305 = (444u + sizeof(_g4_t_v549)) > _g4_s304 ? (444u + sizeof(_g4_t_v549)) : _g4_s304,
    _g4_s306 = (448u + sizeof(_g4_t_v550)) > _g4_s305 ? (448u + sizeof(_g4_t_v550)) : _g4_s305,
    _g4_s307 = (452u + sizeof(_g4_t_v551)) > _g4_s306 ? (452u + sizeof(_g4_t_v551)) : _g4_s306,
    _g4_s308 = (456u + sizeof(_g4_t_v552)) > _g4_s307 ? (456u + sizeof(_g4_t_v552)) : _g4_s307,
    _g4_s309 = (460u + sizeof(_g4_t_v553)) > _g4_s308 ? (460u + sizeof(_g4_t_v553)) : _g4_s308,
    _g4_s310 = (464u + sizeof(_g4_t_v554)) > _g4_s309 ? (464u + sizeof(_g4_t_v554)) : _g4_s309,
    _g4_s311 = (468u + sizeof(_g4_t_v555)) > _g4_s310 ? (468u + sizeof(_g4_t_v555)) : _g4_s310,
    _g4_s312 = (472u + sizeof(_g4_t_v556)) > _g4_s311 ? (472u + sizeof(_g4_t_v556)) : _g4_s311,
    _g4_s313 = (476u + sizeof(_g4_t_v557)) > _g4_s312 ? (476u + sizeof(_g4_t_v557)) : _g4_s312,
    _g4_s314 = (480u + sizeof(_g4_t_v558)) > _g4_s313 ? (480u + sizeof(_g4_t_v558)) : _g4_s313,
    _g4_s315 = (484u + sizeof(_g4_t_v559)) > _g4_s314 ? (484u + sizeof(_g4_t_v559)) : _g4_s314,
    _g4_s316 = (488u + sizeof(_g4_t_v560)) > _g4_s315 ? (488u + sizeof(_g4_t_v560)) : _g4_s315,
    _g4_s317 = (492u + sizeof(_g4_t_v561)) > _g4_s316 ? (492u + sizeof(_g4_t_v561)) : _g4_s316,
    _g4_s318 = (496u + sizeof(_g4_t_v562)) > _g4_s317 ? (496u + sizeof(_g4_t_v562)) : _g4_s317,
    _g4_s319 = (500u + sizeof(_g4_t_v563)) > _g4_s318 ? (500u + sizeof(_g4_t_v563)) : _g4_s318,
    _g4_s320 = (504u + sizeof(_g4_t_v564)) > _g4_s319 ? (504u + sizeof(_g4_t_v564)) : _g4_s319,
    _g4_s321 = (508u + sizeof(_g4_t_v565)) > _g4_s320 ? (508u + sizeof(_g4_t_v565)) : _g4_s320,
    _g4_s322 = (512u + sizeof(_g4_t_v566)) > _g4_s321 ? (512u + sizeof(_g4_t_v566)) : _g4_s321,
    _g4_s323 = (516u + sizeof(_g4_t_v567)) > _g4_s322 ? (516u + sizeof(_g4_t_v567)) : _g4_s322,
    _g4_s324 = (520u + sizeof(_g4_t_v568)) > _g4_s323 ? (520u + sizeof(_g4_t_v568)) : _g4_s323,
    _g4_s325 = (524u + sizeof(_g4_t_v569)) > _g4_s324 ? (524u + sizeof(_g4_t_v569)) : _g4_s324,
    _g4_s326 = (528u + sizeof(_g4_t_v570)) > _g4_s325 ? (528u + sizeof(_g4_t_v570)) : _g4_s325,
    _g4_s327 = (532u + sizeof(_g4_t_v571)) > _g4_s326 ? (532u + sizeof(_g4_t_v571)) : _g4_s326,
    _g4_s328 = (536u + sizeof(_g4_t_v572)) > _g4_s327 ? (536u + sizeof(_g4_t_v572)) : _g4_s327,
    _g4_s329 = (540u + sizeof(_g4_t_v573)) > _g4_s328 ? (540u + sizeof(_g4_t_v573)) : _g4_s328,
    _g4_s330 = (544u + sizeof(_g4_t_v574)) > _g4_s329 ? (544u + sizeof(_g4_t_v574)) : _g4_s329,
    _g4_s331 = (548u + sizeof(_g4_t_v575)) > _g4_s330 ? (548u + sizeof(_g4_t_v575)) : _g4_s330,
    _g4_s332 = (552u + sizeof(_g4_t_v576)) > _g4_s331 ? (552u + sizeof(_g4_t_v576)) : _g4_s331,
    _g4_s333 = (556u + sizeof(_g4_t_v577)) > _g4_s332 ? (556u + sizeof(_g4_t_v577)) : _g4_s332,
    _g4_s334 = (560u + sizeof(_g4_t_v578)) > _g4_s333 ? (560u + sizeof(_g4_t_v578)) : _g4_s333,
    _g4_s335 = (564u + sizeof(_g4_t_v579)) > _g4_s334 ? (564u + sizeof(_g4_t_v579)) : _g4_s334,
    _g4_s336 = (568u + sizeof(_g4_t_v580)) > _g4_s335 ? (568u + sizeof(_g4_t_v580)) : _g4_s335,
    _g4_s337 = (572u + sizeof(_g4_t_v581)) > _g4_s336 ? (572u + sizeof(_g4_t_v581)) : _g4_s336,
    _g4_s338 = (576u + sizeof(_g4_t_v582)) > _g4_s337 ? (576u + sizeof(_g4_t_v582)) : _g4_s337,
    _g4_s339 = (580u + sizeof(_g4_t_v583)) > _g4_s338 ? (580u + sizeof(_g4_t_v583)) : _g4_s338,
    _g4_s340 = (584u + sizeof(_g4_t_v584)) > _g4_s339 ? (584u + sizeof(_g4_t_v584)) : _g4_s339,
    _g4_s341 = (588u + sizeof(_g4_t_v585)) > _g4_s340 ? (588u + sizeof(_g4_t_v585)) : _g4_s340,
    _g4_s342 = (592u + sizeof(_g4_t_v586)) > _g4_s341 ? (592u + sizeof(_g4_t_v586)) : _g4_s341,
    _g4_s343 = (596u + sizeof(_g4_t_v587)) > _g4_s342 ? (596u + sizeof(_g4_t_v587)) : _g4_s342,
    _g4_s344 = (600u + sizeof(_g4_t_v588)) > _g4_s343 ? (600u + sizeof(_g4_t_v588)) : _g4_s343,
    _g4_s345 = (604u + sizeof(_g4_t_v589)) > _g4_s344 ? (604u + sizeof(_g4_t_v589)) : _g4_s344,
    _g4_s346 = (608u + sizeof(_g4_t_v590)) > _g4_s345 ? (608u + sizeof(_g4_t_v590)) : _g4_s345,
    _g4_s347 = (612u + sizeof(_g4_t_v591)) > _g4_s346 ? (612u + sizeof(_g4_t_v591)) : _g4_s346,
    _g4_s348 = (616u + sizeof(_g4_t_v592)) > _g4_s347 ? (616u + sizeof(_g4_t_v592)) : _g4_s347,
    _g4_s349 = (620u + sizeof(_g4_t_v593)) > _g4_s348 ? (620u + sizeof(_g4_t_v593)) : _g4_s348,
    _g4_s350 = (624u + sizeof(_g4_t_v594)) > _g4_s349 ? (624u + sizeof(_g4_t_v594)) : _g4_s349,
    _g4_s351 = (628u + sizeof(_g4_t_v595)) > _g4_s350 ? (628u + sizeof(_g4_t_v595)) : _g4_s350,
    _g4_s352 = (632u + sizeof(_g4_t_v596)) > _g4_s351 ? (632u + sizeof(_g4_t_v596)) : _g4_s351,
    _g4_s353 = (636u + sizeof(_g4_t_v597)) > _g4_s352 ? (636u + sizeof(_g4_t_v597)) : _g4_s352,
    _g4_s354 = (640u + sizeof(_g4_t_v598)) > _g4_s353 ? (640u + sizeof(_g4_t_v598)) : _g4_s353,
    _g4_s355 = (644u + sizeof(_g4_t_v599)) > _g4_s354 ? (644u + sizeof(_g4_t_v599)) : _g4_s354,
    _g4_s356 = (648u + sizeof(_g4_t_v600)) > _g4_s355 ? (648u + sizeof(_g4_t_v600)) : _g4_s355,
    _g4_s357 = (652u + sizeof(_g4_t_v601)) > _g4_s356 ? (652u + sizeof(_g4_t_v601)) : _g4_s356,
    _g4_s358 = (656u + sizeof(_g4_t_v602)) > _g4_s357 ? (656u + sizeof(_g4_t_v602)) : _g4_s357,
    _g4_s359 = (660u + sizeof(_g4_t_v603)) > _g4_s358 ? (660u + sizeof(_g4_t_v603)) : _g4_s358,
    _g4_s360 = (664u + sizeof(_g4_t_v604)) > _g4_s359 ? (664u + sizeof(_g4_t_v604)) : _g4_s359,
    _g4_s361 = (668u + sizeof(_g4_t_v605)) > _g4_s360 ? (668u + sizeof(_g4_t_v605)) : _g4_s360,
    _g4_s362 = (672u + sizeof(_g4_t_v606)) > _g4_s361 ? (672u + sizeof(_g4_t_v606)) : _g4_s361,
    _g4_s363 = (676u + sizeof(_g4_t_v607)) > _g4_s362 ? (676u + sizeof(_g4_t_v607)) : _g4_s362,
    _g4_s364 = (680u + sizeof(_g4_t_v608)) > _g4_s363 ? (680u + sizeof(_g4_t_v608)) : _g4_s363,
    _g4_s365 = (684u + sizeof(_g4_t_v609)) > _g4_s364 ? (684u + sizeof(_g4_t_v609)) : _g4_s364,
    _g4_s366 = (688u + sizeof(_g4_t_v610)) > _g4_s365 ? (688u + sizeof(_g4_t_v610)) : _g4_s365,
    _g4_s367 = (692u + sizeof(_g4_t_v611)) > _g4_s366 ? (692u + sizeof(_g4_t_v611)) : _g4_s366,
    _g4_s368 = (696u + sizeof(_g4_t_v612)) > _g4_s367 ? (696u + sizeof(_g4_t_v612)) : _g4_s367,
    _g4_s369 = (700u + sizeof(_g4_t_v613)) > _g4_s368 ? (700u + sizeof(_g4_t_v613)) : _g4_s368,
    _g4_s370 = (704u + sizeof(_g4_t_v614)) > _g4_s369 ? (704u + sizeof(_g4_t_v614)) : _g4_s369,
    _g4_s371 = (708u + sizeof(_g4_t_v615)) > _g4_s370 ? (708u + sizeof(_g4_t_v615)) : _g4_s370,
    _g4_s372 = (712u + sizeof(_g4_t_v616)) > _g4_s371 ? (712u + sizeof(_g4_t_v616)) : _g4_s371,
    _g4_s373 = (716u + sizeof(_g4_t_v617)) > _g4_s372 ? (716u + sizeof(_g4_t_v617)) : _g4_s372,
    _g4_s374 = (720u + sizeof(_g4_t_v618)) > _g4_s373 ? (720u + sizeof(_g4_t_v618)) : _g4_s373,
    _g4_s375 = (724u + sizeof(_g4_t_v619)) > _g4_s374 ? (724u + sizeof(_g4_t_v619)) : _g4_s374,
    _g4_s376 = (728u + sizeof(_g4_t_v620)) > _g4_s375 ? (728u + sizeof(_g4_t_v620)) : _g4_s375,
    _g4_s377 = (732u + sizeof(_g4_t_v621)) > _g4_s376 ? (732u + sizeof(_g4_t_v621)) : _g4_s376,
    _g4_s378 = (736u + sizeof(_g4_t_v622)) > _g4_s377 ? (736u + sizeof(_g4_t_v622)) : _g4_s377,
    _g4_s379 = (740u + sizeof(_g4_t_v623)) > _g4_s378 ? (740u + sizeof(_g4_t_v623)) : _g4_s378,
    _g4_s380 = (744u + sizeof(_g4_t_v624)) > _g4_s379 ? (744u + sizeof(_g4_t_v624)) : _g4_s379,
    _g4_s381 = (748u + sizeof(_g4_t_v625)) > _g4_s380 ? (748u + sizeof(_g4_t_v625)) : _g4_s380,
    _g4_s382 = (752u + sizeof(_g4_t_v626)) > _g4_s381 ? (752u + sizeof(_g4_t_v626)) : _g4_s381,
    _g4_s383 = (756u + sizeof(_g4_t_v627)) > _g4_s382 ? (756u + sizeof(_g4_t_v627)) : _g4_s382,
    _g4_s384 = (760u + sizeof(_g4_t_v628)) > _g4_s383 ? (760u + sizeof(_g4_t_v628)) : _g4_s383,
    _g4_s385 = (764u + sizeof(_g4_t_v629)) > _g4_s384 ? (764u + sizeof(_g4_t_v629)) : _g4_s384,
    _g4_s386 = (768u + sizeof(_g4_t_v630)) > _g4_s385 ? (768u + sizeof(_g4_t_v630)) : _g4_s385,
    _g4_s387 = (772u + sizeof(_g4_t_v631)) > _g4_s386 ? (772u + sizeof(_g4_t_v631)) : _g4_s386,
    _g4_s388 = (776u + sizeof(_g4_t_v632)) > _g4_s387 ? (776u + sizeof(_g4_t_v632)) : _g4_s387,
    _g4_s389 = (780u + sizeof(_g4_t_v633)) > _g4_s388 ? (780u + sizeof(_g4_t_v633)) : _g4_s388,
    _g4_s390 = (784u + sizeof(_g4_t_v634)) > _g4_s389 ? (784u + sizeof(_g4_t_v634)) : _g4_s389,
    _g4_s391 = (788u + sizeof(_g4_t_v635)) > _g4_s390 ? (788u + sizeof(_g4_t_v635)) : _g4_s390,
    _g4_s392 = (792u + sizeof(_g4_t_v636)) > _g4_s391 ? (792u + sizeof(_g4_t_v636)) : _g4_s391,
    _g4_s393 = (796u + sizeof(_g4_t_v637)) > _g4_s392 ? (796u + sizeof(_g4_t_v637)) : _g4_s392,
    _g4_s394 = (800u + sizeof(_g4_t_v638)) > _g4_s393 ? (800u + sizeof(_g4_t_v638)) : _g4_s393,
    _g4_s395 = (804u + sizeof(_g4_t_v639)) > _g4_s394 ? (804u + sizeof(_g4_t_v639)) : _g4_s394,
    _g4_s396 = (808u + sizeof(_g4_t_v640)) > _g4_s395 ? (808u + sizeof(_g4_t_v640)) : _g4_s395,
    _g4_s397 = (812u + sizeof(_g4_t_v641)) > _g4_s396 ? (812u + sizeof(_g4_t_v641)) : _g4_s396,
    _g4_s398 = (816u + sizeof(_g4_t_v642)) > _g4_s397 ? (816u + sizeof(_g4_t_v642)) : _g4_s397,
    _g4_s399 = (820u + sizeof(_g4_t_v643)) > _g4_s398 ? (820u + sizeof(_g4_t_v643)) : _g4_s398,
    _g4_s400 = (824u + sizeof(_g4_t_v644)) > _g4_s399 ? (824u + sizeof(_g4_t_v644)) : _g4_s399,
    _g4_s401 = (828u + sizeof(_g4_t_v645)) > _g4_s400 ? (828u + sizeof(_g4_t_v645)) : _g4_s400,
    _g4_s402 = (832u + sizeof(_g4_t_v646)) > _g4_s401 ? (832u + sizeof(_g4_t_v646)) : _g4_s401,
    _g4_s403 = (836u + sizeof(_g4_t_v647)) > _g4_s402 ? (836u + sizeof(_g4_t_v647)) : _g4_s402,
    _g4_s404 = (840u + sizeof(_g4_t_v648)) > _g4_s403 ? (840u + sizeof(_g4_t_v648)) : _g4_s403,
    _g4_s405 = (844u + sizeof(_g4_t_v649)) > _g4_s404 ? (844u + sizeof(_g4_t_v649)) : _g4_s404,
    _g4_s406 = (848u + sizeof(_g4_t_v650)) > _g4_s405 ? (848u + sizeof(_g4_t_v650)) : _g4_s405,
    _g4_s407 = (852u + sizeof(_g4_t_v651)) > _g4_s406 ? (852u + sizeof(_g4_t_v651)) : _g4_s406,
    _g4_s408 = (856u + sizeof(_g4_t_v652)) > _g4_s407 ? (856u + sizeof(_g4_t_v652)) : _g4_s407,
    _g4_s409 = (860u + sizeof(_g4_t_v653)) > _g4_s408 ? (860u + sizeof(_g4_t_v653)) : _g4_s408,
    _g4_s410 = (864u + sizeof(_g4_t_v654)) > _g4_s409 ? (864u + sizeof(_g4_t_v654)) : _g4_s409,
    _g4_s411 = (868u + sizeof(_g4_t_v655)) > _g4_s410 ? (868u + sizeof(_g4_t_v655)) : _g4_s410,
    _g4_s412 = (872u + sizeof(_g4_t_v656)) > _g4_s411 ? (872u + sizeof(_g4_t_v656)) : _g4_s411,
    _g4_s413 = (876u + sizeof(_g4_t_v657)) > _g4_s412 ? (876u + sizeof(_g4_t_v657)) : _g4_s412,
    _g4_s414 = (880u + sizeof(_g4_t_v658)) > _g4_s413 ? (880u + sizeof(_g4_t_v658)) : _g4_s413,
    _g4_s415 = (884u + sizeof(_g4_t_v659)) > _g4_s414 ? (884u + sizeof(_g4_t_v659)) : _g4_s414,
    _g4_s416 = (888u + sizeof(_g4_t_v660)) > _g4_s415 ? (888u + sizeof(_g4_t_v660)) : _g4_s415,
    _g4_s417 = (892u + sizeof(_g4_t_v661)) > _g4_s416 ? (892u + sizeof(_g4_t_v661)) : _g4_s416,
    _g4_s418 = (896u + sizeof(_g4_t_v662)) > _g4_s417 ? (896u + sizeof(_g4_t_v662)) : _g4_s417,
    _g4_s419 = (900u + sizeof(_g4_t_v663)) > _g4_s418 ? (900u + sizeof(_g4_t_v663)) : _g4_s418,
    _g4_s420 = (904u + sizeof(_g4_t_v664)) > _g4_s419 ? (904u + sizeof(_g4_t_v664)) : _g4_s419,
    _g4_s421 = (908u + sizeof(_g4_t_v665)) > _g4_s420 ? (908u + sizeof(_g4_t_v665)) : _g4_s420,
    _g4_s422 = (912u + sizeof(_g4_t_v666)) > _g4_s421 ? (912u + sizeof(_g4_t_v666)) : _g4_s421,
    _g4_s423 = (916u + sizeof(_g4_t_v667)) > _g4_s422 ? (916u + sizeof(_g4_t_v667)) : _g4_s422,
    _g4_s424 = (920u + sizeof(_g4_t_v668)) > _g4_s423 ? (920u + sizeof(_g4_t_v668)) : _g4_s423,
    _g4_s425 = (924u + sizeof(_g4_t_v669)) > _g4_s424 ? (924u + sizeof(_g4_t_v669)) : _g4_s424,
    _g4_s426 = (928u + sizeof(_g4_t_v670)) > _g4_s425 ? (928u + sizeof(_g4_t_v670)) : _g4_s425,
    _g4_s427 = (932u + sizeof(_g4_t_v671)) > _g4_s426 ? (932u + sizeof(_g4_t_v671)) : _g4_s426,
    _g4_s428 = (936u + sizeof(_g4_t_v672)) > _g4_s427 ? (936u + sizeof(_g4_t_v672)) : _g4_s427,
    _g4_s429 = (940u + sizeof(_g4_t_v673)) > _g4_s428 ? (940u + sizeof(_g4_t_v673)) : _g4_s428,
    _g4_s430 = (944u + sizeof(_g4_t_v674)) > _g4_s429 ? (944u + sizeof(_g4_t_v674)) : _g4_s429,
    _g4_s431 = (948u + sizeof(_g4_t_v675)) > _g4_s430 ? (948u + sizeof(_g4_t_v675)) : _g4_s430,
    _g4_s432 = (952u + sizeof(_g4_t_v676)) > _g4_s431 ? (952u + sizeof(_g4_t_v676)) : _g4_s431,
    _g4_s433 = (956u + sizeof(_g4_t_v677)) > _g4_s432 ? (956u + sizeof(_g4_t_v677)) : _g4_s432,
    _g4_s434 = (960u + sizeof(_g4_t_v678)) > _g4_s433 ? (960u + sizeof(_g4_t_v678)) : _g4_s433,
    _g4_s435 = (964u + sizeof(_g4_t_v679)) > _g4_s434 ? (964u + sizeof(_g4_t_v679)) : _g4_s434,
    _g4_s436 = (968u + sizeof(_g4_t_v680)) > _g4_s435 ? (968u + sizeof(_g4_t_v680)) : _g4_s435,
    _g4_s437 = (972u + sizeof(_g4_t_v681)) > _g4_s436 ? (972u + sizeof(_g4_t_v681)) : _g4_s436,
    _g4_s438 = (976u + sizeof(_g4_t_v682)) > _g4_s437 ? (976u + sizeof(_g4_t_v682)) : _g4_s437,
    _g4_s439 = (980u + sizeof(_g4_t_v683)) > _g4_s438 ? (980u + sizeof(_g4_t_v683)) : _g4_s438,
    _g4_s440 = (984u + sizeof(_g4_t_v684)) > _g4_s439 ? (984u + sizeof(_g4_t_v684)) : _g4_s439,
    _g4_s441 = (988u + sizeof(_g4_t_v685)) > _g4_s440 ? (988u + sizeof(_g4_t_v685)) : _g4_s440,
    _g4_s442 = (992u + sizeof(_g4_t_v686)) > _g4_s441 ? (992u + sizeof(_g4_t_v686)) : _g4_s441,
    _g4_s443 = (996u + sizeof(_g4_t_v687)) > _g4_s442 ? (996u + sizeof(_g4_t_v687)) : _g4_s442,
    _g4_s444 = (1000u + sizeof(_g4_t_v688)) > _g4_s443 ? (1000u + sizeof(_g4_t_v688)) : _g4_s443,
    _g4_s445 = (1004u + sizeof(_g4_t_v689)) > _g4_s444 ? (1004u + sizeof(_g4_t_v689)) : _g4_s444,
    _g4_s446 = (1008u + sizeof(_g4_t_v690)) > _g4_s445 ? (1008u + sizeof(_g4_t_v690)) : _g4_s445,
    _g4_s447 = (1012u + sizeof(_g4_t_v691)) > _g4_s446 ? (1012u + sizeof(_g4_t_v691)) : _g4_s446,
    _g4_s448 = (1016u + sizeof(_g4_t_v692)) > _g4_s447 ? (1016u + sizeof(_g4_t_v692)) : _g4_s447,
    _g4_s449 = (1020u + sizeof(_g4_t_v693)) > _g4_s448 ? (1020u + sizeof(_g4_t_v693)) : _g4_s448,
    _g4_s450 = (1024u + sizeof(_g4_t_v694)) > _g4_s449 ? (1024u + sizeof(_g4_t_v694)) : _g4_s449,
    _g4_s451 = (1028u + sizeof(_g4_t_v695)) > _g4_s450 ? (1028u + sizeof(_g4_t_v695)) : _g4_s450,
    _g4_s452 = (1032u + sizeof(_g4_t_v696)) > _g4_s451 ? (1032u + sizeof(_g4_t_v696)) : _g4_s451,
    _g4_s453 = (1036u + sizeof(_g4_t_v697)) > _g4_s452 ? (1036u + sizeof(_g4_t_v697)) : _g4_s452,
    _g4_s454 = (1040u + sizeof(_g4_t_v698)) > _g4_s453 ? (1040u + sizeof(_g4_t_v698)) : _g4_s453,
    _g4_s455 = (1044u + sizeof(_g4_t_v699)) > _g4_s454 ? (1044u + sizeof(_g4_t_v699)) : _g4_s454,
    _g4_s456 = (1048u + sizeof(_g4_t_v700)) > _g4_s455 ? (1048u + sizeof(_g4_t_v700)) : _g4_s455,
    _g4_s457 = (1052u + sizeof(_g4_t_v701)) > _g4_s456 ? (1052u + sizeof(_g4_t_v701)) : _g4_s456,
    _g4_s458 = (1056u + sizeof(_g4_t_v702)) > _g4_s457 ? (1056u + sizeof(_g4_t_v702)) : _g4_s457,
    _g4_s459 = (1060u + sizeof(_g4_t_v703)) > _g4_s458 ? (1060u + sizeof(_g4_t_v703)) : _g4_s458,
    _g4_s460 = (1064u + sizeof(_g4_t_v704)) > _g4_s459 ? (1064u + sizeof(_g4_t_v704)) : _g4_s459,
    _g4_s461 = (1068u + sizeof(_g4_t_v705)) > _g4_s460 ? (1068u + sizeof(_g4_t_v705)) : _g4_s460,
    _g4_s462 = (1072u + sizeof(_g4_t_v706)) > _g4_s461 ? (1072u + sizeof(_g4_t_v706)) : _g4_s461,
    _g4_s463 = (1076u + sizeof(_g4_t_v707)) > _g4_s462 ? (1076u + sizeof(_g4_t_v707)) : _g4_s462,
    _g4_s464 = (1080u + sizeof(_g4_t_v708)) > _g4_s463 ? (1080u + sizeof(_g4_t_v708)) : _g4_s463,
    _g4_s465 = (1084u + sizeof(_g4_t_v709)) > _g4_s464 ? (1084u + sizeof(_g4_t_v709)) : _g4_s464,
    _g4_s466 = (1088u + sizeof(_g4_t_v710)) > _g4_s465 ? (1088u + sizeof(_g4_t_v710)) : _g4_s465,
    _g4_s467 = (1092u + sizeof(_g4_t_v711)) > _g4_s466 ? (1092u + sizeof(_g4_t_v711)) : _g4_s466,
    _g4_s468 = (1096u + sizeof(_g4_t_v712)) > _g4_s467 ? (1096u + sizeof(_g4_t_v712)) : _g4_s467,
    _g4_s469 = (1100u + sizeof(_g4_t_v713)) > _g4_s468 ? (1100u + sizeof(_g4_t_v713)) : _g4_s468,
    _g4_s470 = (1104u + sizeof(_g4_t_v714)) > _g4_s469 ? (1104u + sizeof(_g4_t_v714)) : _g4_s469,
    _g4_s471 = (1108u + sizeof(_g4_t_v715)) > _g4_s470 ? (1108u + sizeof(_g4_t_v715)) : _g4_s470,
    _g4_s472 = (1112u + sizeof(_g4_t_v716)) > _g4_s471 ? (1112u + sizeof(_g4_t_v716)) : _g4_s471,
    _g4_s473 = (1116u + sizeof(_g4_t_v717)) > _g4_s472 ? (1116u + sizeof(_g4_t_v717)) : _g4_s472,
    _g4_s474 = (1120u + sizeof(_g4_t_v718)) > _g4_s473 ? (1120u + sizeof(_g4_t_v718)) : _g4_s473,
    _g4_s475 = (1124u + sizeof(_g4_t_v719)) > _g4_s474 ? (1124u + sizeof(_g4_t_v719)) : _g4_s474,
    _g4_s476 = (1128u + sizeof(_g4_t_v720)) > _g4_s475 ? (1128u + sizeof(_g4_t_v720)) : _g4_s475,
    _g4_s477 = (1132u + sizeof(_g4_t_v721)) > _g4_s476 ? (1132u + sizeof(_g4_t_v721)) : _g4_s476,
    _g4_s478 = (1136u + sizeof(_g4_t_v722)) > _g4_s477 ? (1136u + sizeof(_g4_t_v722)) : _g4_s477,
    _g4_s479 = (1140u + sizeof(_g4_t_v723)) > _g4_s478 ? (1140u + sizeof(_g4_t_v723)) : _g4_s478,
    _g4_s480 = (1144u + sizeof(_g4_t_v724)) > _g4_s479 ? (1144u + sizeof(_g4_t_v724)) : _g4_s479,
    _g4_s481 = (1148u + sizeof(_g4_t_v725)) > _g4_s480 ? (1148u + sizeof(_g4_t_v725)) : _g4_s480,
    _g4_s482 = (1152u + sizeof(_g4_t_v726)) > _g4_s481 ? (1152u + sizeof(_g4_t_v726)) : _g4_s481,
    _g4_s483 = (1156u + sizeof(_g4_t_v727)) > _g4_s482 ? (1156u + sizeof(_g4_t_v727)) : _g4_s482,
    _g4_s484 = (1160u + sizeof(_g4_t_v728)) > _g4_s483 ? (1160u + sizeof(_g4_t_v728)) : _g4_s483,
    _g4_s485 = (1164u + sizeof(_g4_t_v729)) > _g4_s484 ? (1164u + sizeof(_g4_t_v729)) : _g4_s484,
    _g4_s486 = (1168u + sizeof(_g4_t_v730)) > _g4_s485 ? (1168u + sizeof(_g4_t_v730)) : _g4_s485,
    _g4_s487 = (1172u + sizeof(_g4_t_v731)) > _g4_s486 ? (1172u + sizeof(_g4_t_v731)) : _g4_s486,
    _g4_s488 = (1176u + sizeof(_g4_t_v732)) > _g4_s487 ? (1176u + sizeof(_g4_t_v732)) : _g4_s487,
    _g4_s489 = (1180u + sizeof(_g4_t_v733)) > _g4_s488 ? (1180u + sizeof(_g4_t_v733)) : _g4_s488,
    _g4_s490 = (1184u + sizeof(_g4_t_v734)) > _g4_s489 ? (1184u + sizeof(_g4_t_v734)) : _g4_s489,
    _g4_s491 = (1188u + sizeof(_g4_t_v735)) > _g4_s490 ? (1188u + sizeof(_g4_t_v735)) : _g4_s490,
    _g4_s492 = (1192u + sizeof(_g4_t_v736)) > _g4_s491 ? (1192u + sizeof(_g4_t_v736)) : _g4_s491,
    _g4_s493 = (1196u + sizeof(_g4_t_v737)) > _g4_s492 ? (1196u + sizeof(_g4_t_v737)) : _g4_s492,
    _g4_s494 = (1200u + sizeof(_g4_t_v738)) > _g4_s493 ? (1200u + sizeof(_g4_t_v738)) : _g4_s493,
    _g4_s495 = (1204u + sizeof(_g4_t_v739)) > _g4_s494 ? (1204u + sizeof(_g4_t_v739)) : _g4_s494,
    _g4_s496 = (1208u + sizeof(_g4_t_v740)) > _g4_s495 ? (1208u + sizeof(_g4_t_v740)) : _g4_s495,
    _g4_s497 = (1212u + sizeof(_g4_t_v741)) > _g4_s496 ? (1212u + sizeof(_g4_t_v741)) : _g4_s496,
    _g4_s498 = (1216u + sizeof(_g4_t_v742)) > _g4_s497 ? (1216u + sizeof(_g4_t_v742)) : _g4_s497,
    _g4_s499 = (1220u + sizeof(_g4_t_v743)) > _g4_s498 ? (1220u + sizeof(_g4_t_v743)) : _g4_s498,
    _g4_s500 = (1224u + sizeof(_g4_t_v744)) > _g4_s499 ? (1224u + sizeof(_g4_t_v744)) : _g4_s499,
    _g4_s501 = (1228u + sizeof(_g4_t_v745)) > _g4_s500 ? (1228u + sizeof(_g4_t_v745)) : _g4_s500,
    _g4_s502 = (1232u + sizeof(_g4_t_v746)) > _g4_s501 ? (1232u + sizeof(_g4_t_v746)) : _g4_s501,
    _g4_s503 = (1236u + sizeof(_g4_t_v747)) > _g4_s502 ? (1236u + sizeof(_g4_t_v747)) : _g4_s502,
    _g4_s504 = (1240u + sizeof(_g4_t_v748)) > _g4_s503 ? (1240u + sizeof(_g4_t_v748)) : _g4_s503,
    _g4_s505 = (1244u + sizeof(_g4_t_v749)) > _g4_s504 ? (1244u + sizeof(_g4_t_v749)) : _g4_s504,
    _g4_s506 = (1248u + sizeof(_g4_t_v750)) > _g4_s505 ? (1248u + sizeof(_g4_t_v750)) : _g4_s505,
    _g4_s507 = (1252u + sizeof(_g4_t_v751)) > _g4_s506 ? (1252u + sizeof(_g4_t_v751)) : _g4_s506,
    _g4_s508 = (1256u + sizeof(_g4_t_v752)) > _g4_s507 ? (1256u + sizeof(_g4_t_v752)) : _g4_s507,
    _g4_s509 = (1260u + sizeof(_g4_t_v753)) > _g4_s508 ? (1260u + sizeof(_g4_t_v753)) : _g4_s508,
    _g4_s510 = (1264u + sizeof(_g4_t_v754)) > _g4_s509 ? (1264u + sizeof(_g4_t_v754)) : _g4_s509,
    _g4_s511 = (1268u + sizeof(_g4_t_v755)) > _g4_s510 ? (1268u + sizeof(_g4_t_v755)) : _g4_s510,
    _g4_s512 = (1272u + sizeof(_g4_t_v756)) > _g4_s511 ? (1272u + sizeof(_g4_t_v756)) : _g4_s511,
    _g4_s513 = (1276u + sizeof(_g4_t_v757)) > _g4_s512 ? (1276u + sizeof(_g4_t_v757)) : _g4_s512,
    _g4_s514 = (1280u + sizeof(_g4_t_v758)) > _g4_s513 ? (1280u + sizeof(_g4_t_v758)) : _g4_s513,
    _g4_s515 = (1284u + sizeof(_g4_t_v759)) > _g4_s514 ? (1284u + sizeof(_g4_t_v759)) : _g4_s514,
    _g4_s516 = (1288u + sizeof(_g4_t_v760)) > _g4_s515 ? (1288u + sizeof(_g4_t_v760)) : _g4_s515,
    _g4_s517 = (1292u + sizeof(_g4_t_v761)) > _g4_s516 ? (1292u + sizeof(_g4_t_v761)) : _g4_s516,
    _g4_s518 = (1296u + sizeof(_g4_t_v762)) > _g4_s517 ? (1296u + sizeof(_g4_t_v762)) : _g4_s517,
    _g4_s519 = (1300u + sizeof(_g4_t_v763)) > _g4_s518 ? (1300u + sizeof(_g4_t_v763)) : _g4_s518,
    _g4_s520 = (1304u + sizeof(_g4_t_v764)) > _g4_s519 ? (1304u + sizeof(_g4_t_v764)) : _g4_s519,
    _g4_s521 = (1308u + sizeof(_g4_t_v765)) > _g4_s520 ? (1308u + sizeof(_g4_t_v765)) : _g4_s520,
    _g4_s522 = (1312u + sizeof(_g4_t_v766)) > _g4_s521 ? (1312u + sizeof(_g4_t_v766)) : _g4_s521,
    _g4_s523 = (1316u + sizeof(_g4_t_v767)) > _g4_s522 ? (1316u + sizeof(_g4_t_v767)) : _g4_s522,
    _g4_s524 = (1320u + sizeof(_g4_t_v768)) > _g4_s523 ? (1320u + sizeof(_g4_t_v768)) : _g4_s523,
    _g4_s525 = (1324u + sizeof(_g4_t_v769)) > _g4_s524 ? (1324u + sizeof(_g4_t_v769)) : _g4_s524,
    _g4_s526 = (1328u + sizeof(_g4_t_v770)) > _g4_s525 ? (1328u + sizeof(_g4_t_v770)) : _g4_s525,
    _g4_s527 = (1332u + sizeof(_g4_t_v771)) > _g4_s526 ? (1332u + sizeof(_g4_t_v771)) : _g4_s526,
    _g4_s528 = (1336u + sizeof(_g4_t_v772)) > _g4_s527 ? (1336u + sizeof(_g4_t_v772)) : _g4_s527,
    _g4_s529 = (1340u + sizeof(_g4_t_v773)) > _g4_s528 ? (1340u + sizeof(_g4_t_v773)) : _g4_s528,
    _g4_s530 = (1344u + sizeof(_g4_t_v774)) > _g4_s529 ? (1344u + sizeof(_g4_t_v774)) : _g4_s529,
    _g4_s531 = (1348u + sizeof(_g4_t_v775)) > _g4_s530 ? (1348u + sizeof(_g4_t_v775)) : _g4_s530,
    _g4_s532 = (1352u + sizeof(_g4_t_v776)) > _g4_s531 ? (1352u + sizeof(_g4_t_v776)) : _g4_s531,
    _g4_s533 = (1356u + sizeof(_g4_t_v777)) > _g4_s532 ? (1356u + sizeof(_g4_t_v777)) : _g4_s532,
    _g4_s534 = (1360u + sizeof(_g4_t_v778)) > _g4_s533 ? (1360u + sizeof(_g4_t_v778)) : _g4_s533,
    _g4_s535 = (1364u + sizeof(_g4_t_v779)) > _g4_s534 ? (1364u + sizeof(_g4_t_v779)) : _g4_s534,
    _g4_s536 = (1368u + sizeof(_g4_t_v780)) > _g4_s535 ? (1368u + sizeof(_g4_t_v780)) : _g4_s535,
    _g4_s537 = (1372u + sizeof(_g4_t_v781)) > _g4_s536 ? (1372u + sizeof(_g4_t_v781)) : _g4_s536,
    _g4_s538 = (1376u + sizeof(_g4_t_v782)) > _g4_s537 ? (1376u + sizeof(_g4_t_v782)) : _g4_s537,
    _g4_s539 = (1380u + sizeof(_g4_t_v783)) > _g4_s538 ? (1380u + sizeof(_g4_t_v783)) : _g4_s538,
    _g4_s540 = (1384u + sizeof(_g4_t_v784)) > _g4_s539 ? (1384u + sizeof(_g4_t_v784)) : _g4_s539,
    _g4_s541 = (1388u + sizeof(_g4_t_v785)) > _g4_s540 ? (1388u + sizeof(_g4_t_v785)) : _g4_s540,
    _g4_s542 = (1392u + sizeof(_g4_t_v786)) > _g4_s541 ? (1392u + sizeof(_g4_t_v786)) : _g4_s541,
    _g4_s543 = (1396u + sizeof(_g4_t_v787)) > _g4_s542 ? (1396u + sizeof(_g4_t_v787)) : _g4_s542,
    _g4_s544 = (1400u + sizeof(_g4_t_v788)) > _g4_s543 ? (1400u + sizeof(_g4_t_v788)) : _g4_s543,
    _g4_s545 = (1404u + sizeof(_g4_t_v789)) > _g4_s544 ? (1404u + sizeof(_g4_t_v789)) : _g4_s544,
    _g4_s546 = (1408u + sizeof(_g4_t_v790)) > _g4_s545 ? (1408u + sizeof(_g4_t_v790)) : _g4_s545,
    _g4_s547 = (1412u + sizeof(_g4_t_v791)) > _g4_s546 ? (1412u + sizeof(_g4_t_v791)) : _g4_s546,
    _g4_s548 = (1416u + sizeof(_g4_t_v792)) > _g4_s547 ? (1416u + sizeof(_g4_t_v792)) : _g4_s547,
    _g4_s549 = (1420u + sizeof(_g4_t_v793)) > _g4_s548 ? (1420u + sizeof(_g4_t_v793)) : _g4_s548,
    _g4_s550 = (1424u + sizeof(_g4_t_v794)) > _g4_s549 ? (1424u + sizeof(_g4_t_v794)) : _g4_s549,
    _g4_s551 = (1428u + sizeof(_g4_t_v795)) > _g4_s550 ? (1428u + sizeof(_g4_t_v795)) : _g4_s550,
    _g4_s552 = (1432u + sizeof(_g4_t_v796)) > _g4_s551 ? (1432u + sizeof(_g4_t_v796)) : _g4_s551,
    _g4_s553 = (1436u + sizeof(_g4_t_v797)) > _g4_s552 ? (1436u + sizeof(_g4_t_v797)) : _g4_s552,
    _g4_s554 = (1440u + sizeof(_g4_t_v798)) > _g4_s553 ? (1440u + sizeof(_g4_t_v798)) : _g4_s553,
    _g4_s555 = (1444u + sizeof(_g4_t_v799)) > _g4_s554 ? (1444u + sizeof(_g4_t_v799)) : _g4_s554,
    _g4_s556 = (1448u + sizeof(_g4_t_v800)) > _g4_s555 ? (1448u + sizeof(_g4_t_v800)) : _g4_s555,
    _g4_s557 = (1452u + sizeof(_g4_t_v801)) > _g4_s556 ? (1452u + sizeof(_g4_t_v801)) : _g4_s556,
    _g4_s558 = (1456u + sizeof(_g4_t_v802)) > _g4_s557 ? (1456u + sizeof(_g4_t_v802)) : _g4_s557,
    _g4_s559 = (1460u + sizeof(_g4_t_v803)) > _g4_s558 ? (1460u + sizeof(_g4_t_v803)) : _g4_s558,
    _g4_s560 = (1464u + sizeof(_g4_t_v804)) > _g4_s559 ? (1464u + sizeof(_g4_t_v804)) : _g4_s559,
    _g4_s561 = (1468u + sizeof(_g4_t_v805)) > _g4_s560 ? (1468u + sizeof(_g4_t_v805)) : _g4_s560,
    _g4_s562 = (1472u + sizeof(_g4_t_v806)) > _g4_s561 ? (1472u + sizeof(_g4_t_v806)) : _g4_s561,
    _g4_s563 = (1476u + sizeof(_g4_t_v807)) > _g4_s562 ? (1476u + sizeof(_g4_t_v807)) : _g4_s562,
    _g4_s564 = (1480u + sizeof(_g4_t_v808)) > _g4_s563 ? (1480u + sizeof(_g4_t_v808)) : _g4_s563,
    _g4_s565 = (1484u + sizeof(_g4_t_v809)) > _g4_s564 ? (1484u + sizeof(_g4_t_v809)) : _g4_s564,
    _g4_s566 = (1488u + sizeof(_g4_t_v810)) > _g4_s565 ? (1488u + sizeof(_g4_t_v810)) : _g4_s565,
    _g4_s567 = (1492u + sizeof(_g4_t_v811)) > _g4_s566 ? (1492u + sizeof(_g4_t_v811)) : _g4_s566,
    _g4_s568 = (1496u + sizeof(_g4_t_v812)) > _g4_s567 ? (1496u + sizeof(_g4_t_v812)) : _g4_s567,
    _g4_s569 = (1500u + sizeof(_g4_t_v813)) > _g4_s568 ? (1500u + sizeof(_g4_t_v813)) : _g4_s568,
    _g4_s570 = (1504u + sizeof(_g4_t_v814)) > _g4_s569 ? (1504u + sizeof(_g4_t_v814)) : _g4_s569,
    _g4_s571 = (1508u + sizeof(_g4_t_v815)) > _g4_s570 ? (1508u + sizeof(_g4_t_v815)) : _g4_s570,
    _g4_s572 = (1512u + sizeof(_g4_t_v816)) > _g4_s571 ? (1512u + sizeof(_g4_t_v816)) : _g4_s571,
    _g4_s573 = (1516u + sizeof(_g4_t_v817)) > _g4_s572 ? (1516u + sizeof(_g4_t_v817)) : _g4_s572,
    _g4_s574 = (1520u + sizeof(_g4_t_v818)) > _g4_s573 ? (1520u + sizeof(_g4_t_v818)) : _g4_s573,
    _g4_s575 = (1524u + sizeof(_g4_t_v819)) > _g4_s574 ? (1524u + sizeof(_g4_t_v819)) : _g4_s574,
    _g4_s576 = (1528u + sizeof(_g4_t_v820)) > _g4_s575 ? (1528u + sizeof(_g4_t_v820)) : _g4_s575,
    _g4_s577 = (1532u + sizeof(_g4_t_v821)) > _g4_s576 ? (1532u + sizeof(_g4_t_v821)) : _g4_s576,
    _g4_s578 = (1536u + sizeof(_g4_t_v822)) > _g4_s577 ? (1536u + sizeof(_g4_t_v822)) : _g4_s577,
    _g4_s579 = (1540u + sizeof(_g4_t_v823)) > _g4_s578 ? (1540u + sizeof(_g4_t_v823)) : _g4_s578,
    _g4_s580 = (1544u + sizeof(_g4_t_v824)) > _g4_s579 ? (1544u + sizeof(_g4_t_v824)) : _g4_s579,
    _g4_s581 = (1548u + sizeof(_g4_t_v825)) > _g4_s580 ? (1548u + sizeof(_g4_t_v825)) : _g4_s580,
    _g4_s582 = (1552u + sizeof(_g4_t_v826)) > _g4_s581 ? (1552u + sizeof(_g4_t_v826)) : _g4_s581,
    _g4_s583 = (1556u + sizeof(_g4_t_v827)) > _g4_s582 ? (1556u + sizeof(_g4_t_v827)) : _g4_s582,
    _g4_s584 = (1560u + sizeof(_g4_t_v828)) > _g4_s583 ? (1560u + sizeof(_g4_t_v828)) : _g4_s583,
    _g4_s585 = (1564u + sizeof(_g4_t_v829)) > _g4_s584 ? (1564u + sizeof(_g4_t_v829)) : _g4_s584,
    _g4_s586 = (1568u + sizeof(_g4_t_v830)) > _g4_s585 ? (1568u + sizeof(_g4_t_v830)) : _g4_s585,
    _g4_s587 = (1572u + sizeof(_g4_t_v831)) > _g4_s586 ? (1572u + sizeof(_g4_t_v831)) : _g4_s586,
    _g4_s588 = (1576u + sizeof(_g4_t_v832)) > _g4_s587 ? (1576u + sizeof(_g4_t_v832)) : _g4_s587,
    _g4_s589 = (1580u + sizeof(_g4_t_v833)) > _g4_s588 ? (1580u + sizeof(_g4_t_v833)) : _g4_s588,
    _g4_s590 = (1584u + sizeof(_g4_t_v834)) > _g4_s589 ? (1584u + sizeof(_g4_t_v834)) : _g4_s589,
    _g4_s591 = (1588u + sizeof(_g4_t_v835)) > _g4_s590 ? (1588u + sizeof(_g4_t_v835)) : _g4_s590,
    _g4_s592 = (1592u + sizeof(_g4_t_v836)) > _g4_s591 ? (1592u + sizeof(_g4_t_v836)) : _g4_s591,
    _g4_s593 = (1596u + sizeof(_g4_t_v837)) > _g4_s592 ? (1596u + sizeof(_g4_t_v837)) : _g4_s592,
    _g4_s594 = (1600u + sizeof(_g4_t_v838)) > _g4_s593 ? (1600u + sizeof(_g4_t_v838)) : _g4_s593,
    _g4_s595 = (1604u + sizeof(_g4_t_v839)) > _g4_s594 ? (1604u + sizeof(_g4_t_v839)) : _g4_s594,
    _g4_s596 = (1608u + sizeof(_g4_t_v840)) > _g4_s595 ? (1608u + sizeof(_g4_t_v840)) : _g4_s595,
    _g4_s597 = (1612u + sizeof(_g4_t_v841)) > _g4_s596 ? (1612u + sizeof(_g4_t_v841)) : _g4_s596,
    _g4_s598 = (1616u + sizeof(_g4_t_v842)) > _g4_s597 ? (1616u + sizeof(_g4_t_v842)) : _g4_s597,
    _g4_s599 = (1620u + sizeof(_g4_t_v843)) > _g4_s598 ? (1620u + sizeof(_g4_t_v843)) : _g4_s598,
    _g4_s600 = (1624u + sizeof(_g4_t_v844)) > _g4_s599 ? (1624u + sizeof(_g4_t_v844)) : _g4_s599,
    _g4_s601 = (1628u + sizeof(_g4_t_v845)) > _g4_s600 ? (1628u + sizeof(_g4_t_v845)) : _g4_s600,
    _g4_s602 = (1632u + sizeof(_g4_t_v846)) > _g4_s601 ? (1632u + sizeof(_g4_t_v846)) : _g4_s601,
    _g4_s603 = (1636u + sizeof(_g4_t_v847)) > _g4_s602 ? (1636u + sizeof(_g4_t_v847)) : _g4_s602,
    _g4_s604 = (1640u + sizeof(_g4_t_v848)) > _g4_s603 ? (1640u + sizeof(_g4_t_v848)) : _g4_s603,
    _g4_s605 = (1644u + sizeof(_g4_t_v849)) > _g4_s604 ? (1644u + sizeof(_g4_t_v849)) : _g4_s604,
    _g4_s606 = (1648u + sizeof(_g4_t_v850)) > _g4_s605 ? (1648u + sizeof(_g4_t_v850)) : _g4_s605,
    _g4_s607 = (1652u + sizeof(_g4_t_v851)) > _g4_s606 ? (1652u + sizeof(_g4_t_v851)) : _g4_s606,
    _g4_s608 = (1656u + sizeof(_g4_t_v852)) > _g4_s607 ? (1656u + sizeof(_g4_t_v852)) : _g4_s607,
    _g4_s609 = (1660u + sizeof(_g4_t_v853)) > _g4_s608 ? (1660u + sizeof(_g4_t_v853)) : _g4_s608,
    _g4_s610 = (1664u + sizeof(_g4_t_v854)) > _g4_s609 ? (1664u + sizeof(_g4_t_v854)) : _g4_s609,
    _g4_s611 = (1668u + sizeof(_g4_t_v855)) > _g4_s610 ? (1668u + sizeof(_g4_t_v855)) : _g4_s610,
    _g4_s612 = (1672u + sizeof(_g4_t_v856)) > _g4_s611 ? (1672u + sizeof(_g4_t_v856)) : _g4_s611,
    _g4_s613 = (1676u + sizeof(_g4_t_v857)) > _g4_s612 ? (1676u + sizeof(_g4_t_v857)) : _g4_s612,
    _g4_s614 = (1680u + sizeof(_g4_t_v858)) > _g4_s613 ? (1680u + sizeof(_g4_t_v858)) : _g4_s613,
    _g4_s615 = (1684u + sizeof(_g4_t_v859)) > _g4_s614 ? (1684u + sizeof(_g4_t_v859)) : _g4_s614,
    _g4_s616 = (1688u + sizeof(_g4_t_v860)) > _g4_s615 ? (1688u + sizeof(_g4_t_v860)) : _g4_s615,
    _g4_s617 = (1692u + sizeof(_g4_t_v861)) > _g4_s616 ? (1692u + sizeof(_g4_t_v861)) : _g4_s616,
    _g4_s618 = (1696u + sizeof(_g4_t_v862)) > _g4_s617 ? (1696u + sizeof(_g4_t_v862)) : _g4_s617,
    _g4_s619 = (1700u + sizeof(_g4_t_v863)) > _g4_s618 ? (1700u + sizeof(_g4_t_v863)) : _g4_s618,
    _g4_s620 = (1704u + sizeof(_g4_t_v864)) > _g4_s619 ? (1704u + sizeof(_g4_t_v864)) : _g4_s619,
    _g4_s621 = (1708u + sizeof(_g4_t_v865)) > _g4_s620 ? (1708u + sizeof(_g4_t_v865)) : _g4_s620,
    _g4_s622 = (1712u + sizeof(_g4_t_v866)) > _g4_s621 ? (1712u + sizeof(_g4_t_v866)) : _g4_s621,
    _g4_s623 = (1716u + sizeof(_g4_t_v867)) > _g4_s622 ? (1716u + sizeof(_g4_t_v867)) : _g4_s622,
    _g4_s624 = (1720u + sizeof(_g4_t_v868)) > _g4_s623 ? (1720u + sizeof(_g4_t_v868)) : _g4_s623,
    _g4_s625 = (1724u + sizeof(_g4_t_v869)) > _g4_s624 ? (1724u + sizeof(_g4_t_v869)) : _g4_s624,
    _g4_s626 = (1728u + sizeof(_g4_t_v870)) > _g4_s625 ? (1728u + sizeof(_g4_t_v870)) : _g4_s625,
    _g4_s627 = (1732u + sizeof(_g4_t_v871)) > _g4_s626 ? (1732u + sizeof(_g4_t_v871)) : _g4_s626,
    _g4_s628 = (1736u + sizeof(_g4_t_v872)) > _g4_s627 ? (1736u + sizeof(_g4_t_v872)) : _g4_s627,
    _g4_s629 = (1740u + sizeof(_g4_t_v873)) > _g4_s628 ? (1740u + sizeof(_g4_t_v873)) : _g4_s628,
    _g4_s630 = (1744u + sizeof(_g4_t_v874)) > _g4_s629 ? (1744u + sizeof(_g4_t_v874)) : _g4_s629,
    _g4_s631 = (1748u + sizeof(_g4_t_v875)) > _g4_s630 ? (1748u + sizeof(_g4_t_v875)) : _g4_s630,
    _g4_s632 = (1752u + sizeof(_g4_t_v876)) > _g4_s631 ? (1752u + sizeof(_g4_t_v876)) : _g4_s631,
    _g4_s633 = (1756u + sizeof(_g4_t_v877)) > _g4_s632 ? (1756u + sizeof(_g4_t_v877)) : _g4_s632,
    _g4_s634 = (1760u + sizeof(_g4_t_v878)) > _g4_s633 ? (1760u + sizeof(_g4_t_v878)) : _g4_s633,
    _g4_s635 = (1764u + sizeof(_g4_t_v879)) > _g4_s634 ? (1764u + sizeof(_g4_t_v879)) : _g4_s634,
    _g4_s636 = (1768u + sizeof(_g4_t_v880)) > _g4_s635 ? (1768u + sizeof(_g4_t_v880)) : _g4_s635,
    _g4_s637 = (1772u + sizeof(_g4_t_v881)) > _g4_s636 ? (1772u + sizeof(_g4_t_v881)) : _g4_s636,
    _g4_s638 = (1776u + sizeof(_g4_t_v882)) > _g4_s637 ? (1776u + sizeof(_g4_t_v882)) : _g4_s637,
    _g4_s639 = (1780u + sizeof(_g4_t_v883)) > _g4_s638 ? (1780u + sizeof(_g4_t_v883)) : _g4_s638,
    _g4_s640 = (1784u + sizeof(_g4_t_v884)) > _g4_s639 ? (1784u + sizeof(_g4_t_v884)) : _g4_s639,
    _g4_s641 = (1788u + sizeof(_g4_t_v885)) > _g4_s640 ? (1788u + sizeof(_g4_t_v885)) : _g4_s640,
    _g4_s642 = (1792u + sizeof(_g4_t_v886)) > _g4_s641 ? (1792u + sizeof(_g4_t_v886)) : _g4_s641,
    _g4_s643 = (1796u + sizeof(_g4_t_v887)) > _g4_s642 ? (1796u + sizeof(_g4_t_v887)) : _g4_s642,
    _g4_s644 = (1800u + sizeof(_g4_t_v888)) > _g4_s643 ? (1800u + sizeof(_g4_t_v888)) : _g4_s643,
    _g4_s645 = (1804u + sizeof(_g4_t_v889)) > _g4_s644 ? (1804u + sizeof(_g4_t_v889)) : _g4_s644,
    _g4_s646 = (1808u + sizeof(_g4_t_v890)) > _g4_s645 ? (1808u + sizeof(_g4_t_v890)) : _g4_s645,
    _g4_s647 = (1812u + sizeof(_g4_t_v891)) > _g4_s646 ? (1812u + sizeof(_g4_t_v891)) : _g4_s646,
    _g4_s648 = (1816u + sizeof(_g4_t_v892)) > _g4_s647 ? (1816u + sizeof(_g4_t_v892)) : _g4_s647,
    _g4_s649 = (1820u + sizeof(_g4_t_v893)) > _g4_s648 ? (1820u + sizeof(_g4_t_v893)) : _g4_s648,
    _g4_s650 = (1824u + sizeof(_g4_t_v894)) > _g4_s649 ? (1824u + sizeof(_g4_t_v894)) : _g4_s649,
    _g4_s651 = (1828u + sizeof(_g4_t_v895)) > _g4_s650 ? (1828u + sizeof(_g4_t_v895)) : _g4_s650,
    _g4_s652 = (1832u + sizeof(_g4_t_v896)) > _g4_s651 ? (1832u + sizeof(_g4_t_v896)) : _g4_s651,
    _g4_s653 = (1836u + sizeof(_g4_t_v897)) > _g4_s652 ? (1836u + sizeof(_g4_t_v897)) : _g4_s652,
    _g4_s654 = (1840u + sizeof(_g4_t_v898)) > _g4_s653 ? (1840u + sizeof(_g4_t_v898)) : _g4_s653,
    _g4_s655 = (1844u + sizeof(_g4_t_v899)) > _g4_s654 ? (1844u + sizeof(_g4_t_v899)) : _g4_s654,
    _g4_s656 = (1848u + sizeof(_g4_t_v900)) > _g4_s655 ? (1848u + sizeof(_g4_t_v900)) : _g4_s655,
    _g4_s657 = (1852u + sizeof(_g4_t_v901)) > _g4_s656 ? (1852u + sizeof(_g4_t_v901)) : _g4_s656,
    _g4_s658 = (1856u + sizeof(_g4_t_v902)) > _g4_s657 ? (1856u + sizeof(_g4_t_v902)) : _g4_s657,
    _g4_s659 = (1860u + sizeof(_g4_t_v903)) > _g4_s658 ? (1860u + sizeof(_g4_t_v903)) : _g4_s658,
    _g4_s660 = (1864u + sizeof(_g4_t_v904)) > _g4_s659 ? (1864u + sizeof(_g4_t_v904)) : _g4_s659,
    _g4_s661 = (1868u + sizeof(_g4_t_v905)) > _g4_s660 ? (1868u + sizeof(_g4_t_v905)) : _g4_s660,
    _g4_s662 = (1872u + sizeof(_g4_t_v906)) > _g4_s661 ? (1872u + sizeof(_g4_t_v906)) : _g4_s661,
    _g4_s663 = (1876u + sizeof(_g4_t_v907)) > _g4_s662 ? (1876u + sizeof(_g4_t_v907)) : _g4_s662,
    _g4_s664 = (1880u + sizeof(_g4_t_v908)) > _g4_s663 ? (1880u + sizeof(_g4_t_v908)) : _g4_s663,
    _g4_s665 = (1884u + sizeof(_g4_t_v909)) > _g4_s664 ? (1884u + sizeof(_g4_t_v909)) : _g4_s664,
    _g4_s666 = (1888u + sizeof(_g4_t_v910)) > _g4_s665 ? (1888u + sizeof(_g4_t_v910)) : _g4_s665,
    _g4_s667 = (1892u + sizeof(_g4_t_v911)) > _g4_s666 ? (1892u + sizeof(_g4_t_v911)) : _g4_s666,
    _g4_s668 = (1896u + sizeof(_g4_t_v912)) > _g4_s667 ? (1896u + sizeof(_g4_t_v912)) : _g4_s667,
    _g4_s669 = (1900u + sizeof(_g4_t_v913)) > _g4_s668 ? (1900u + sizeof(_g4_t_v913)) : _g4_s668,
    _g4_s670 = (1904u + sizeof(_g4_t_v914)) > _g4_s669 ? (1904u + sizeof(_g4_t_v914)) : _g4_s669,
    _g4_s671 = (1908u + sizeof(_g4_t_v915)) > _g4_s670 ? (1908u + sizeof(_g4_t_v915)) : _g4_s670,
    _g4_s672 = (1912u + sizeof(_g4_t_v916)) > _g4_s671 ? (1912u + sizeof(_g4_t_v916)) : _g4_s671,
    _g4_s673 = (1916u + sizeof(_g4_t_v917)) > _g4_s672 ? (1916u + sizeof(_g4_t_v917)) : _g4_s672,
    _g4_s674 = (1920u + sizeof(_g4_t_v918)) > _g4_s673 ? (1920u + sizeof(_g4_t_v918)) : _g4_s673,
    _g4_s675 = (1924u + sizeof(_g4_t_v919)) > _g4_s674 ? (1924u + sizeof(_g4_t_v919)) : _g4_s674,
    _g4_s676 = (1928u + sizeof(_g4_t_v920)) > _g4_s675 ? (1928u + sizeof(_g4_t_v920)) : _g4_s675,
    _g4_s677 = (1932u + sizeof(_g4_t_v921)) > _g4_s676 ? (1932u + sizeof(_g4_t_v921)) : _g4_s676,
    _g4_s678 = (1936u + sizeof(_g4_t_v922)) > _g4_s677 ? (1936u + sizeof(_g4_t_v922)) : _g4_s677,
    _g4_s679 = (1940u + sizeof(_g4_t_v923)) > _g4_s678 ? (1940u + sizeof(_g4_t_v923)) : _g4_s678,
    _g4_s680 = (1944u + sizeof(_g4_t_v924)) > _g4_s679 ? (1944u + sizeof(_g4_t_v924)) : _g4_s679,
    _g4_s681 = (1948u + sizeof(_g4_t_v925)) > _g4_s680 ? (1948u + sizeof(_g4_t_v925)) : _g4_s680,
    _g4_s682 = (1952u + sizeof(_g4_t_v926)) > _g4_s681 ? (1952u + sizeof(_g4_t_v926)) : _g4_s681,
    _g4_s683 = (1956u + sizeof(_g4_t_v927)) > _g4_s682 ? (1956u + sizeof(_g4_t_v927)) : _g4_s682,
    _g4_s684 = (1960u + sizeof(_g4_t_v928)) > _g4_s683 ? (1960u + sizeof(_g4_t_v928)) : _g4_s683,
    _g4_s685 = (1964u + sizeof(_g4_t_v929)) > _g4_s684 ? (1964u + sizeof(_g4_t_v929)) : _g4_s684,
    _g4_s686 = (1968u + sizeof(_g4_t_v930)) > _g4_s685 ? (1968u + sizeof(_g4_t_v930)) : _g4_s685,
    _g4_s687 = (1972u + sizeof(_g4_t_v931)) > _g4_s686 ? (1972u + sizeof(_g4_t_v931)) : _g4_s686,
    _g4_s688 = (1976u + sizeof(_g4_t_v932)) > _g4_s687 ? (1976u + sizeof(_g4_t_v932)) : _g4_s687,
    _g4_s689 = (1980u + sizeof(_g4_t_v933)) > _g4_s688 ? (1980u + sizeof(_g4_t_v933)) : _g4_s688,
    _g4_s690 = (1984u + sizeof(_g4_t_v934)) > _g4_s689 ? (1984u + sizeof(_g4_t_v934)) : _g4_s689,
    _g4_s691 = (1988u + sizeof(_g4_t_v935)) > _g4_s690 ? (1988u + sizeof(_g4_t_v935)) : _g4_s690,
    _g4_s692 = (1992u + sizeof(_g4_t_v936)) > _g4_s691 ? (1992u + sizeof(_g4_t_v936)) : _g4_s691,
    _g4_s693 = (1996u + sizeof(_g4_t_v937)) > _g4_s692 ? (1996u + sizeof(_g4_t_v937)) : _g4_s692,
    _g4_s694 = (2000u + sizeof(_g4_t_v938)) > _g4_s693 ? (2000u + sizeof(_g4_t_v938)) : _g4_s693,
    _g4_s695 = (2004u + sizeof(_g4_t_v939)) > _g4_s694 ? (2004u + sizeof(_g4_t_v939)) : _g4_s694,
    _g4_s696 = (2008u + sizeof(_g4_t_v940)) > _g4_s695 ? (2008u + sizeof(_g4_t_v940)) : _g4_s695,
    _g4_s697 = (2012u + sizeof(_g4_t_v941)) > _g4_s696 ? (2012u + sizeof(_g4_t_v941)) : _g4_s696,
    _g4_s698 = (2016u + sizeof(_g4_t_v942)) > _g4_s697 ? (2016u + sizeof(_g4_t_v942)) : _g4_s697,
    _g4_s699 = (2020u + sizeof(_g4_t_v943)) > _g4_s698 ? (2020u + sizeof(_g4_t_v943)) : _g4_s698,
    _g4_s700 = (2024u + sizeof(_g4_t_v944)) > _g4_s699 ? (2024u + sizeof(_g4_t_v944)) : _g4_s699,
    _g4_s701 = (2028u + sizeof(_g4_t_v945)) > _g4_s700 ? (2028u + sizeof(_g4_t_v945)) : _g4_s700,
    _g4_s702 = (2032u + sizeof(_g4_t_v946)) > _g4_s701 ? (2032u + sizeof(_g4_t_v946)) : _g4_s701,
    _g4_s703 = (2036u + sizeof(_g4_t_v947)) > _g4_s702 ? (2036u + sizeof(_g4_t_v947)) : _g4_s702,
    _g4_s704 = (2040u + sizeof(_g4_t_v948)) > _g4_s703 ? (2040u + sizeof(_g4_t_v948)) : _g4_s703,
    _g4_s705 = (2044u + sizeof(_g4_t_v949)) > _g4_s704 ? (2044u + sizeof(_g4_t_v949)) : _g4_s704,
    _g4_s706 = (2048u + sizeof(_g4_t_v950)) > _g4_s705 ? (2048u + sizeof(_g4_t_v950)) : _g4_s705,
    _g4_s707 = (2052u + sizeof(_g4_t_v951)) > _g4_s706 ? (2052u + sizeof(_g4_t_v951)) : _g4_s706,
    _g4_s708 = (2056u + sizeof(_g4_t_v952)) > _g4_s707 ? (2056u + sizeof(_g4_t_v952)) : _g4_s707,
    _g4_s709 = (2060u + sizeof(_g4_t_v953)) > _g4_s708 ? (2060u + sizeof(_g4_t_v953)) : _g4_s708,
    _g4_s710 = (2064u + sizeof(_g4_t_v954)) > _g4_s709 ? (2064u + sizeof(_g4_t_v954)) : _g4_s709,
    _g4_s711 = (2068u + sizeof(_g4_t_v955)) > _g4_s710 ? (2068u + sizeof(_g4_t_v955)) : _g4_s710,
    _g4_s712 = (2072u + sizeof(_g4_t_v956)) > _g4_s711 ? (2072u + sizeof(_g4_t_v956)) : _g4_s711,
    _g4_s713 = (2076u + sizeof(_g4_t_v957)) > _g4_s712 ? (2076u + sizeof(_g4_t_v957)) : _g4_s712,
    _g4_s714 = (2080u + sizeof(_g4_t_v958)) > _g4_s713 ? (2080u + sizeof(_g4_t_v958)) : _g4_s713,
    _g4_s715 = (2084u + sizeof(_g4_t_v959)) > _g4_s714 ? (2084u + sizeof(_g4_t_v959)) : _g4_s714,
    _g4_s716 = (2088u + sizeof(_g4_t_v960)) > _g4_s715 ? (2088u + sizeof(_g4_t_v960)) : _g4_s715,
    _g4_s717 = (2092u + sizeof(_g4_t_v961)) > _g4_s716 ? (2092u + sizeof(_g4_t_v961)) : _g4_s716,
    _g4_s718 = (2096u + sizeof(_g4_t_v962)) > _g4_s717 ? (2096u + sizeof(_g4_t_v962)) : _g4_s717,
    _g4_s719 = (2100u + sizeof(_g4_t_v963)) > _g4_s718 ? (2100u + sizeof(_g4_t_v963)) : _g4_s718,
    _g4_s720 = (2104u + sizeof(_g4_t_v964)) > _g4_s719 ? (2104u + sizeof(_g4_t_v964)) : _g4_s719,
    _g4_s721 = (2108u + sizeof(_g4_t_v965)) > _g4_s720 ? (2108u + sizeof(_g4_t_v965)) : _g4_s720,
    _g4_s722 = (2112u + sizeof(_g4_t_v966)) > _g4_s721 ? (2112u + sizeof(_g4_t_v966)) : _g4_s721,
    _g4_s723 = (2116u + sizeof(_g4_t_v967)) > _g4_s722 ? (2116u + sizeof(_g4_t_v967)) : _g4_s722,
    _g4_s724 = (2120u + sizeof(_g4_t_v968)) > _g4_s723 ? (2120u + sizeof(_g4_t_v968)) : _g4_s723,
    _g4_s725 = (2124u + sizeof(_g4_t_v969)) > _g4_s724 ? (2124u + sizeof(_g4_t_v969)) : _g4_s724,
    _g4_s726 = (2128u + sizeof(_g4_t_v970)) > _g4_s725 ? (2128u + sizeof(_g4_t_v970)) : _g4_s725,
    _g4_s727 = (2132u + sizeof(_g4_t_v971)) > _g4_s726 ? (2132u + sizeof(_g4_t_v971)) : _g4_s726,
    _g4_s728 = (2136u + sizeof(_g4_t_v972)) > _g4_s727 ? (2136u + sizeof(_g4_t_v972)) : _g4_s727,
    _g4_s729 = (2140u + sizeof(_g4_t_v973)) > _g4_s728 ? (2140u + sizeof(_g4_t_v973)) : _g4_s728,
    _g4_s730 = (2144u + sizeof(_g4_t_v974)) > _g4_s729 ? (2144u + sizeof(_g4_t_v974)) : _g4_s729,
    _g4_s731 = (2148u + sizeof(_g4_t_v975)) > _g4_s730 ? (2148u + sizeof(_g4_t_v975)) : _g4_s730,
    _g4_s732 = (2152u + sizeof(_g4_t_v976)) > _g4_s731 ? (2152u + sizeof(_g4_t_v976)) : _g4_s731,
    _g4_s733 = (2156u + sizeof(_g4_t_v977)) > _g4_s732 ? (2156u + sizeof(_g4_t_v977)) : _g4_s732,
    _g4_s734 = (2160u + sizeof(_g4_t_v978)) > _g4_s733 ? (2160u + sizeof(_g4_t_v978)) : _g4_s733,
    _g4_s735 = (2164u + sizeof(_g4_t_v979)) > _g4_s734 ? (2164u + sizeof(_g4_t_v979)) : _g4_s734,
    _g4_s736 = (2168u + sizeof(_g4_t_v980)) > _g4_s735 ? (2168u + sizeof(_g4_t_v980)) : _g4_s735,
    _g4_s737 = (2172u + sizeof(_g4_t_v981)) > _g4_s736 ? (2172u + sizeof(_g4_t_v981)) : _g4_s736,
    _g4_s738 = (2176u + sizeof(_g4_t_v982)) > _g4_s737 ? (2176u + sizeof(_g4_t_v982)) : _g4_s737,
    _g4_s739 = (2180u + sizeof(_g4_t_v983)) > _g4_s738 ? (2180u + sizeof(_g4_t_v983)) : _g4_s738,
    _g4_s740 = (2184u + sizeof(_g4_t_v984)) > _g4_s739 ? (2184u + sizeof(_g4_t_v984)) : _g4_s739,
    _g4_s741 = (2188u + sizeof(_g4_t_v985)) > _g4_s740 ? (2188u + sizeof(_g4_t_v985)) : _g4_s740,
    _g4_s742 = (2192u + sizeof(_g4_t_v986)) > _g4_s741 ? (2192u + sizeof(_g4_t_v986)) : _g4_s741,
    _g4_s743 = (2196u + sizeof(_g4_t_v987)) > _g4_s742 ? (2196u + sizeof(_g4_t_v987)) : _g4_s742,
    _g4_s744 = (2200u + sizeof(_g4_t_v988)) > _g4_s743 ? (2200u + sizeof(_g4_t_v988)) : _g4_s743,
    _g4_s745 = (2204u + sizeof(_g4_t_v989)) > _g4_s744 ? (2204u + sizeof(_g4_t_v989)) : _g4_s744,
    _g4_s746 = (2208u + sizeof(_g4_t_v990)) > _g4_s745 ? (2208u + sizeof(_g4_t_v990)) : _g4_s745,
    _g4_s747 = (2212u + sizeof(_g4_t_v991)) > _g4_s746 ? (2212u + sizeof(_g4_t_v991)) : _g4_s746,
    _g4_s748 = (2216u + sizeof(_g4_t_v992)) > _g4_s747 ? (2216u + sizeof(_g4_t_v992)) : _g4_s747,
    _g4_s749 = (2220u + sizeof(_g4_t_v993)) > _g4_s748 ? (2220u + sizeof(_g4_t_v993)) : _g4_s748,
    _g4_s750 = (2224u + sizeof(_g4_t_v994)) > _g4_s749 ? (2224u + sizeof(_g4_t_v994)) : _g4_s749,
    _g4_s751 = (2228u + sizeof(_g4_t_v995)) > _g4_s750 ? (2228u + sizeof(_g4_t_v995)) : _g4_s750,
    _g4_s752 = (2232u + sizeof(_g4_t_v996)) > _g4_s751 ? (2232u + sizeof(_g4_t_v996)) : _g4_s751,
    _g4_s753 = (2236u + sizeof(_g4_t_v997)) > _g4_s752 ? (2236u + sizeof(_g4_t_v997)) : _g4_s752,
    _g4_s754 = (2240u + sizeof(_g4_t_v998)) > _g4_s753 ? (2240u + sizeof(_g4_t_v998)) : _g4_s753,
    _g4_s755 = (2244u + sizeof(_g4_t_v999)) > _g4_s754 ? (2244u + sizeof(_g4_t_v999)) : _g4_s754,
    _g4_s756 = (2248u + sizeof(_g4_t_v1000)) > _g4_s755 ? (2248u + sizeof(_g4_t_v1000)) : _g4_s755,
    _g4_s757 = (2252u + sizeof(_g4_t_v1001)) > _g4_s756 ? (2252u + sizeof(_g4_t_v1001)) : _g4_s756,
    _g4_s758 = (2256u + sizeof(_g4_t_v1002)) > _g4_s757 ? (2256u + sizeof(_g4_t_v1002)) : _g4_s757,
    _g4_s759 = (2260u + sizeof(_g4_t_v1003)) > _g4_s758 ? (2260u + sizeof(_g4_t_v1003)) : _g4_s758,
    _g4_s760 = (2264u + sizeof(_g4_t_v1004)) > _g4_s759 ? (2264u + sizeof(_g4_t_v1004)) : _g4_s759,
    _g4_s761 = (2268u + sizeof(_g4_t_v1005)) > _g4_s760 ? (2268u + sizeof(_g4_t_v1005)) : _g4_s760,
    _g4_s762 = (2272u + sizeof(_g4_t_v1006)) > _g4_s761 ? (2272u + sizeof(_g4_t_v1006)) : _g4_s761,
    _g4_s763 = (2276u + sizeof(_g4_t_v1007)) > _g4_s762 ? (2276u + sizeof(_g4_t_v1007)) : _g4_s762,
    _g4_s764 = (2280u + sizeof(_g4_t_v1008)) > _g4_s763 ? (2280u + sizeof(_g4_t_v1008)) : _g4_s763,
    _g4_s765 = (2284u + sizeof(_g4_t_v1009)) > _g4_s764 ? (2284u + sizeof(_g4_t_v1009)) : _g4_s764,
    _g4_s766 = (2288u + sizeof(_g4_t_v1010)) > _g4_s765 ? (2288u + sizeof(_g4_t_v1010)) : _g4_s765,
    _g4_s767 = (2292u + sizeof(_g4_t_v1011)) > _g4_s766 ? (2292u + sizeof(_g4_t_v1011)) : _g4_s766,
    _g4_s768 = (2296u + sizeof(_g4_t_v1012)) > _g4_s767 ? (2296u + sizeof(_g4_t_v1012)) : _g4_s767,
    _g4_s769 = (2300u + sizeof(_g4_t_v1013)) > _g4_s768 ? (2300u + sizeof(_g4_t_v1013)) : _g4_s768,
    _g4_s770 = (2304u + sizeof(_g4_t_v1014)) > _g4_s769 ? (2304u + sizeof(_g4_t_v1014)) : _g4_s769,
    _g4_s771 = (2308u + sizeof(_g4_t_v1015)) > _g4_s770 ? (2308u + sizeof(_g4_t_v1015)) : _g4_s770,
    _g4_s772 = (2312u + sizeof(_g4_t_v1016)) > _g4_s771 ? (2312u + sizeof(_g4_t_v1016)) : _g4_s771,
    _g4_s773 = (2316u + sizeof(_g4_t_v1017)) > _g4_s772 ? (2316u + sizeof(_g4_t_v1017)) : _g4_s772,
    _g4_s774 = (2320u + sizeof(_g4_t_v1018)) > _g4_s773 ? (2320u + sizeof(_g4_t_v1018)) : _g4_s773,
    _g4_s775 = (2324u + sizeof(_g4_t_v1019)) > _g4_s774 ? (2324u + sizeof(_g4_t_v1019)) : _g4_s774,
    _g4_s776 = (2328u + sizeof(_g4_t_v1020)) > _g4_s775 ? (2328u + sizeof(_g4_t_v1020)) : _g4_s775,
    _g4_s777 = (2332u + sizeof(_g4_t_v1021)) > _g4_s776 ? (2332u + sizeof(_g4_t_v1021)) : _g4_s776,
    _g4_s778 = (2336u + sizeof(_g4_t_v1022)) > _g4_s777 ? (2336u + sizeof(_g4_t_v1022)) : _g4_s777,
    _g4_s779 = (2340u + sizeof(_g4_t_v1023)) > _g4_s778 ? (2340u + sizeof(_g4_t_v1023)) : _g4_s778,
    _g4_s780 = (2344u + sizeof(_g4_t_v1024)) > _g4_s779 ? (2344u + sizeof(_g4_t_v1024)) : _g4_s779,
    _g4_s781 = (2348u + sizeof(_g4_t_v1025)) > _g4_s780 ? (2348u + sizeof(_g4_t_v1025)) : _g4_s780,
    _g4_s782 = (2352u + sizeof(_g4_t_v1026)) > _g4_s781 ? (2352u + sizeof(_g4_t_v1026)) : _g4_s781,
    _g4_s783 = (2356u + sizeof(_g4_t_v1027)) > _g4_s782 ? (2356u + sizeof(_g4_t_v1027)) : _g4_s782,
    _g4_s784 = (2360u + sizeof(_g4_t_v1028)) > _g4_s783 ? (2360u + sizeof(_g4_t_v1028)) : _g4_s783,
    _g4_s785 = (2364u + sizeof(_g4_t_v1029)) > _g4_s784 ? (2364u + sizeof(_g4_t_v1029)) : _g4_s784,
    _g4_s786 = (2368u + sizeof(_g4_t_v1030)) > _g4_s785 ? (2368u + sizeof(_g4_t_v1030)) : _g4_s785,
    _g4_s787 = (2372u + sizeof(_g4_t_v1031)) > _g4_s786 ? (2372u + sizeof(_g4_t_v1031)) : _g4_s786,
    _g4_s788 = (2376u + sizeof(_g4_t_v1032)) > _g4_s787 ? (2376u + sizeof(_g4_t_v1032)) : _g4_s787,
    _g4_s789 = (2380u + sizeof(_g4_t_v1033)) > _g4_s788 ? (2380u + sizeof(_g4_t_v1033)) : _g4_s788,
    _g4_s790 = (2384u + sizeof(_g4_t_v1034)) > _g4_s789 ? (2384u + sizeof(_g4_t_v1034)) : _g4_s789,
    _g4_s791 = (2388u + sizeof(_g4_t_v1035)) > _g4_s790 ? (2388u + sizeof(_g4_t_v1035)) : _g4_s790,
    _g4_s792 = (2392u + sizeof(_g4_t_v1036)) > _g4_s791 ? (2392u + sizeof(_g4_t_v1036)) : _g4_s791,
    _g4_s793 = (2396u + sizeof(_g4_t_v1037)) > _g4_s792 ? (2396u + sizeof(_g4_t_v1037)) : _g4_s792,
    _g4_s794 = (2400u + sizeof(_g4_t_v1038)) > _g4_s793 ? (2400u + sizeof(_g4_t_v1038)) : _g4_s793,
    _g4_s795 = (2404u + sizeof(_g4_t_v1039)) > _g4_s794 ? (2404u + sizeof(_g4_t_v1039)) : _g4_s794,
    _g4_s796 = (2408u + sizeof(_g4_t_v1040)) > _g4_s795 ? (2408u + sizeof(_g4_t_v1040)) : _g4_s795,
    _g4_s797 = (2412u + sizeof(_g4_t_v1041)) > _g4_s796 ? (2412u + sizeof(_g4_t_v1041)) : _g4_s796,
    _g4_s798 = (2416u + sizeof(_g4_t_v1042)) > _g4_s797 ? (2416u + sizeof(_g4_t_v1042)) : _g4_s797,
    _g4_s799 = (2420u + sizeof(_g4_t_v1043)) > _g4_s798 ? (2420u + sizeof(_g4_t_v1043)) : _g4_s798,
    _g4_s800 = (2424u + sizeof(_g4_t_v1044)) > _g4_s799 ? (2424u + sizeof(_g4_t_v1044)) : _g4_s799,
    _g4_s801 = (2428u + sizeof(_g4_t_v1045)) > _g4_s800 ? (2428u + sizeof(_g4_t_v1045)) : _g4_s800,
    _g4_s802 = (2432u + sizeof(_g4_t_v1046)) > _g4_s801 ? (2432u + sizeof(_g4_t_v1046)) : _g4_s801,
    _g4_s803 = (2436u + sizeof(_g4_t_v1047)) > _g4_s802 ? (2436u + sizeof(_g4_t_v1047)) : _g4_s802,
    _g4_s804 = (2440u + sizeof(_g4_t_v1048)) > _g4_s803 ? (2440u + sizeof(_g4_t_v1048)) : _g4_s803,
    _g4_s805 = (2444u + sizeof(_g4_t_v1049)) > _g4_s804 ? (2444u + sizeof(_g4_t_v1049)) : _g4_s804,
    _g4_s806 = (2448u + sizeof(_g4_t_v1050)) > _g4_s805 ? (2448u + sizeof(_g4_t_v1050)) : _g4_s805,
    _g4_s807 = (2452u + sizeof(_g4_t_v1051)) > _g4_s806 ? (2452u + sizeof(_g4_t_v1051)) : _g4_s806,
    _g4_s808 = (2456u + sizeof(_g4_t_v1052)) > _g4_s807 ? (2456u + sizeof(_g4_t_v1052)) : _g4_s807,
    _g4_s809 = (2460u + sizeof(_g4_t_v1053)) > _g4_s808 ? (2460u + sizeof(_g4_t_v1053)) : _g4_s808,
    _g4_s810 = (2464u + sizeof(_g4_t_v1054)) > _g4_s809 ? (2464u + sizeof(_g4_t_v1054)) : _g4_s809,
    _g4_s811 = (2468u + sizeof(_g4_t_v1055)) > _g4_s810 ? (2468u + sizeof(_g4_t_v1055)) : _g4_s810,
    _g4_s812 = (2472u + sizeof(_g4_t_v1056)) > _g4_s811 ? (2472u + sizeof(_g4_t_v1056)) : _g4_s811,
    _g4_s813 = (2476u + sizeof(_g4_t_v1057)) > _g4_s812 ? (2476u + sizeof(_g4_t_v1057)) : _g4_s812,
    _g4_s814 = (2480u + sizeof(_g4_t_v1058)) > _g4_s813 ? (2480u + sizeof(_g4_t_v1058)) : _g4_s813,
    _g4_s815 = (2484u + sizeof(_g4_t_v1059)) > _g4_s814 ? (2484u + sizeof(_g4_t_v1059)) : _g4_s814,
    _g4_s816 = (2488u + sizeof(_g4_t_v1060)) > _g4_s815 ? (2488u + sizeof(_g4_t_v1060)) : _g4_s815,
    _g4_s817 = (2492u + sizeof(_g4_t_v1061)) > _g4_s816 ? (2492u + sizeof(_g4_t_v1061)) : _g4_s816,
    _g4_s818 = (2496u + sizeof(_g4_t_v1062)) > _g4_s817 ? (2496u + sizeof(_g4_t_v1062)) : _g4_s817,
    _g4_s819 = (2500u + sizeof(_g4_t_v1063)) > _g4_s818 ? (2500u + sizeof(_g4_t_v1063)) : _g4_s818,
    _g4_s820 = (2504u + sizeof(_g4_t_v1064)) > _g4_s819 ? (2504u + sizeof(_g4_t_v1064)) : _g4_s819,
    _g4_s821 = (2508u + sizeof(_g4_t_v1065)) > _g4_s820 ? (2508u + sizeof(_g4_t_v1065)) : _g4_s820,
    _g4_s822 = (2512u + sizeof(_g4_t_v1066)) > _g4_s821 ? (2512u + sizeof(_g4_t_v1066)) : _g4_s821,
    _g4_s823 = (2516u + sizeof(_g4_t_v1067)) > _g4_s822 ? (2516u + sizeof(_g4_t_v1067)) : _g4_s822,
    _g4_s824 = (2520u + sizeof(_g4_t_v1068)) > _g4_s823 ? (2520u + sizeof(_g4_t_v1068)) : _g4_s823,
    _g4_s825 = (2524u + sizeof(_g4_t_v1069)) > _g4_s824 ? (2524u + sizeof(_g4_t_v1069)) : _g4_s824,
    _g4_s826 = (2528u + sizeof(_g4_t_v1070)) > _g4_s825 ? (2528u + sizeof(_g4_t_v1070)) : _g4_s825,
    _g4_s827 = (2532u + sizeof(_g4_t_v1071)) > _g4_s826 ? (2532u + sizeof(_g4_t_v1071)) : _g4_s826,
    _g4_s828 = (2536u + sizeof(_g4_t_v1072)) > _g4_s827 ? (2536u + sizeof(_g4_t_v1072)) : _g4_s827,
    _g4_s829 = (2540u + sizeof(_g4_t_v1073)) > _g4_s828 ? (2540u + sizeof(_g4_t_v1073)) : _g4_s828,
    _g4_s830 = (2544u + sizeof(_g4_t_v1074)) > _g4_s829 ? (2544u + sizeof(_g4_t_v1074)) : _g4_s829,
    _g4_s831 = (2548u + sizeof(_g4_t_v1075)) > _g4_s830 ? (2548u + sizeof(_g4_t_v1075)) : _g4_s830,
    _g4_s832 = (2552u + sizeof(_g4_t_v1076)) > _g4_s831 ? (2552u + sizeof(_g4_t_v1076)) : _g4_s831,
    _g4_s833 = (2556u + sizeof(_g4_t_v1077)) > _g4_s832 ? (2556u + sizeof(_g4_t_v1077)) : _g4_s832,
    _g4_s834 = (2560u + sizeof(_g4_t_v1078)) > _g4_s833 ? (2560u + sizeof(_g4_t_v1078)) : _g4_s833,
    _g4_s835 = (2564u + sizeof(_g4_t_v1079)) > _g4_s834 ? (2564u + sizeof(_g4_t_v1079)) : _g4_s834,
    _g4_s836 = (2568u + sizeof(_g4_t_v1080)) > _g4_s835 ? (2568u + sizeof(_g4_t_v1080)) : _g4_s835,
    _g4_s837 = (2572u + sizeof(_g4_t_v1081)) > _g4_s836 ? (2572u + sizeof(_g4_t_v1081)) : _g4_s836,
    _g4_s838 = (2576u + sizeof(_g4_t_v1082)) > _g4_s837 ? (2576u + sizeof(_g4_t_v1082)) : _g4_s837,
    _g4_s839 = (2580u + sizeof(_g4_t_v1083)) > _g4_s838 ? (2580u + sizeof(_g4_t_v1083)) : _g4_s838,
    _g4_s840 = (2584u + sizeof(_g4_t_v1084)) > _g4_s839 ? (2584u + sizeof(_g4_t_v1084)) : _g4_s839,
    _g4_s841 = (2588u + sizeof(_g4_t_v1085)) > _g4_s840 ? (2588u + sizeof(_g4_t_v1085)) : _g4_s840,
    _g4_s842 = (2592u + sizeof(_g4_t_v1086)) > _g4_s841 ? (2592u + sizeof(_g4_t_v1086)) : _g4_s841,
    _g4_s843 = (2596u + sizeof(_g4_t_v1087)) > _g4_s842 ? (2596u + sizeof(_g4_t_v1087)) : _g4_s842,
    _g4_s844 = (2600u + sizeof(_g4_t_v1088)) > _g4_s843 ? (2600u + sizeof(_g4_t_v1088)) : _g4_s843,
    _g4_s845 = (2604u + sizeof(_g4_t_v1089)) > _g4_s844 ? (2604u + sizeof(_g4_t_v1089)) : _g4_s844,
    _g4_s846 = (2608u + sizeof(_g4_t_v1090)) > _g4_s845 ? (2608u + sizeof(_g4_t_v1090)) : _g4_s845,
    _g4_s847 = (2612u + sizeof(_g4_t_v1091)) > _g4_s846 ? (2612u + sizeof(_g4_t_v1091)) : _g4_s846,
    _g4_s848 = (2616u + sizeof(_g4_t_v1092)) > _g4_s847 ? (2616u + sizeof(_g4_t_v1092)) : _g4_s847,
    _g4_s849 = (2620u + sizeof(_g4_t_v1093)) > _g4_s848 ? (2620u + sizeof(_g4_t_v1093)) : _g4_s848,
    _g4_s850 = (2624u + sizeof(_g4_t_v1094)) > _g4_s849 ? (2624u + sizeof(_g4_t_v1094)) : _g4_s849,
    _g4_s851 = (2628u + sizeof(_g4_t_v1095)) > _g4_s850 ? (2628u + sizeof(_g4_t_v1095)) : _g4_s850,
    _g4_s852 = (2632u + sizeof(_g4_t_v1096)) > _g4_s851 ? (2632u + sizeof(_g4_t_v1096)) : _g4_s851,
    _g4_s853 = (2636u + sizeof(_g4_t_v1097)) > _g4_s852 ? (2636u + sizeof(_g4_t_v1097)) : _g4_s852,
    _g4_s854 = (2640u + sizeof(_g4_t_v1098)) > _g4_s853 ? (2640u + sizeof(_g4_t_v1098)) : _g4_s853,
    _g4_s855 = (2644u + sizeof(_g4_t_v1099)) > _g4_s854 ? (2644u + sizeof(_g4_t_v1099)) : _g4_s854,
    _g4_s856 = (2648u + sizeof(_g4_t_v1100)) > _g4_s855 ? (2648u + sizeof(_g4_t_v1100)) : _g4_s855,
    _g4_s857 = (2652u + sizeof(_g4_t_v1101)) > _g4_s856 ? (2652u + sizeof(_g4_t_v1101)) : _g4_s856,
    _g4_s858 = (2656u + sizeof(_g4_t_v1102)) > _g4_s857 ? (2656u + sizeof(_g4_t_v1102)) : _g4_s857,
    _g4_s859 = (2660u + sizeof(_g4_t_v1103)) > _g4_s858 ? (2660u + sizeof(_g4_t_v1103)) : _g4_s858,
    _g4_s860 = (2664u + sizeof(_g4_t_v1104)) > _g4_s859 ? (2664u + sizeof(_g4_t_v1104)) : _g4_s859,
    _g4_s861 = (2668u + sizeof(_g4_t_v1105)) > _g4_s860 ? (2668u + sizeof(_g4_t_v1105)) : _g4_s860,
    _g4_s862 = (2672u + sizeof(_g4_t_v1106)) > _g4_s861 ? (2672u + sizeof(_g4_t_v1106)) : _g4_s861,
    _g4_s863 = (2676u + sizeof(_g4_t_v1107)) > _g4_s862 ? (2676u + sizeof(_g4_t_v1107)) : _g4_s862,
    _g4_s864 = (2680u + sizeof(_g4_t_v1108)) > _g4_s863 ? (2680u + sizeof(_g4_t_v1108)) : _g4_s863,
    _g4_s865 = (2684u + sizeof(_g4_t_v1109)) > _g4_s864 ? (2684u + sizeof(_g4_t_v1109)) : _g4_s864,
    _g4_s866 = (2688u + sizeof(_g4_t_v1110)) > _g4_s865 ? (2688u + sizeof(_g4_t_v1110)) : _g4_s865,
    _g4_s867 = (2692u + sizeof(_g4_t_v1111)) > _g4_s866 ? (2692u + sizeof(_g4_t_v1111)) : _g4_s866,
    _g4_s868 = (2696u + sizeof(_g4_t_v1112)) > _g4_s867 ? (2696u + sizeof(_g4_t_v1112)) : _g4_s867,
    _g4_s869 = (2700u + sizeof(_g4_t_v1113)) > _g4_s868 ? (2700u + sizeof(_g4_t_v1113)) : _g4_s868,
    _g4_s870 = (2704u + sizeof(_g4_t_v1114)) > _g4_s869 ? (2704u + sizeof(_g4_t_v1114)) : _g4_s869,
    _g4_s871 = (2708u + sizeof(_g4_t_v1115)) > _g4_s870 ? (2708u + sizeof(_g4_t_v1115)) : _g4_s870,
    _g4_s872 = (2712u + sizeof(_g4_t_v1116)) > _g4_s871 ? (2712u + sizeof(_g4_t_v1116)) : _g4_s871,
    _g4_s873 = (2716u + sizeof(_g4_t_v1117)) > _g4_s872 ? (2716u + sizeof(_g4_t_v1117)) : _g4_s872,
    _g4_s874 = (2720u + sizeof(_g4_t_v1118)) > _g4_s873 ? (2720u + sizeof(_g4_t_v1118)) : _g4_s873,
    _g4_s875 = (2724u + sizeof(_g4_t_v1119)) > _g4_s874 ? (2724u + sizeof(_g4_t_v1119)) : _g4_s874,
    _g4_s876 = (2728u + sizeof(_g4_t_v1120)) > _g4_s875 ? (2728u + sizeof(_g4_t_v1120)) : _g4_s875,
    _g4_s877 = (2732u + sizeof(_g4_t_v1121)) > _g4_s876 ? (2732u + sizeof(_g4_t_v1121)) : _g4_s876,
    _g4_s878 = (2736u + sizeof(_g4_t_v1122)) > _g4_s877 ? (2736u + sizeof(_g4_t_v1122)) : _g4_s877,
    _g4_s879 = (2740u + sizeof(_g4_t_v1123)) > _g4_s878 ? (2740u + sizeof(_g4_t_v1123)) : _g4_s878,
    _g4_s880 = (2744u + sizeof(_g4_t_v1124)) > _g4_s879 ? (2744u + sizeof(_g4_t_v1124)) : _g4_s879,
    _g4_s881 = (2748u + sizeof(_g4_t_v1125)) > _g4_s880 ? (2748u + sizeof(_g4_t_v1125)) : _g4_s880,
    _g4_s882 = (2752u + sizeof(_g4_t_v1126)) > _g4_s881 ? (2752u + sizeof(_g4_t_v1126)) : _g4_s881,
    _g4_s883 = (2756u + sizeof(_g4_t_v1127)) > _g4_s882 ? (2756u + sizeof(_g4_t_v1127)) : _g4_s882,
    _g4_s884 = (2760u + sizeof(_g4_t_v1128)) > _g4_s883 ? (2760u + sizeof(_g4_t_v1128)) : _g4_s883,
    _g4_s885 = (2764u + sizeof(_g4_t_v1129)) > _g4_s884 ? (2764u + sizeof(_g4_t_v1129)) : _g4_s884,
    _g4_s886 = (2768u + sizeof(_g4_t_v1130)) > _g4_s885 ? (2768u + sizeof(_g4_t_v1130)) : _g4_s885,
    _g4_s887 = (2772u + sizeof(_g4_t_v1131)) > _g4_s886 ? (2772u + sizeof(_g4_t_v1131)) : _g4_s886,
    _g4_s888 = (2776u + sizeof(_g4_t_v1132)) > _g4_s887 ? (2776u + sizeof(_g4_t_v1132)) : _g4_s887,
    _g4_s889 = (2780u + sizeof(_g4_t_v1133)) > _g4_s888 ? (2780u + sizeof(_g4_t_v1133)) : _g4_s888,
    _g4_s890 = (2784u + sizeof(_g4_t_v1134)) > _g4_s889 ? (2784u + sizeof(_g4_t_v1134)) : _g4_s889,
    _g4_s891 = (2788u + sizeof(_g4_t_v1135)) > _g4_s890 ? (2788u + sizeof(_g4_t_v1135)) : _g4_s890,
    _g4_s892 = (2792u + sizeof(_g4_t_v1136)) > _g4_s891 ? (2792u + sizeof(_g4_t_v1136)) : _g4_s891,
    _g4_s893 = (2796u + sizeof(_g4_t_v1137)) > _g4_s892 ? (2796u + sizeof(_g4_t_v1137)) : _g4_s892,
    _g4_s894 = (2800u + sizeof(_g4_t_v1138)) > _g4_s893 ? (2800u + sizeof(_g4_t_v1138)) : _g4_s893,
    _g4_s895 = (2804u + sizeof(_g4_t_v1139)) > _g4_s894 ? (2804u + sizeof(_g4_t_v1139)) : _g4_s894,
    _g4_s896 = (2808u + sizeof(_g4_t_v1140)) > _g4_s895 ? (2808u + sizeof(_g4_t_v1140)) : _g4_s895,
    _g4_s897 = (2812u + sizeof(_g4_t_v1141)) > _g4_s896 ? (2812u + sizeof(_g4_t_v1141)) : _g4_s896,
    _g4_s898 = (2816u + sizeof(_g4_t_v1142)) > _g4_s897 ? (2816u + sizeof(_g4_t_v1142)) : _g4_s897,
    _g4_s899 = (2820u + sizeof(_g4_t_v1143)) > _g4_s898 ? (2820u + sizeof(_g4_t_v1143)) : _g4_s898,
    _g4_s900 = (2824u + sizeof(_g4_t_v1144)) > _g4_s899 ? (2824u + sizeof(_g4_t_v1144)) : _g4_s899,
    _g4_s901 = (2828u + sizeof(_g4_t_v1145)) > _g4_s900 ? (2828u + sizeof(_g4_t_v1145)) : _g4_s900,
    _g4_s902 = (2832u + sizeof(_g4_t_v1146)) > _g4_s901 ? (2832u + sizeof(_g4_t_v1146)) : _g4_s901,
    _g4_s903 = (2836u + sizeof(_g4_t_v1147)) > _g4_s902 ? (2836u + sizeof(_g4_t_v1147)) : _g4_s902,
    _g4_s904 = (2840u + sizeof(_g4_t_v1148)) > _g4_s903 ? (2840u + sizeof(_g4_t_v1148)) : _g4_s903,
    _g4_s905 = (2844u + sizeof(_g4_t_v1149)) > _g4_s904 ? (2844u + sizeof(_g4_t_v1149)) : _g4_s904,
    _g4_s906 = (2848u + sizeof(_g4_t_v1150)) > _g4_s905 ? (2848u + sizeof(_g4_t_v1150)) : _g4_s905,
    _g4_s907 = (2852u + sizeof(_g4_t_v1151)) > _g4_s906 ? (2852u + sizeof(_g4_t_v1151)) : _g4_s906,
    _g4_s908 = (2856u + sizeof(_g4_t_v1152)) > _g4_s907 ? (2856u + sizeof(_g4_t_v1152)) : _g4_s907,
    _g4_s909 = (2860u + sizeof(_g4_t_v1153)) > _g4_s908 ? (2860u + sizeof(_g4_t_v1153)) : _g4_s908,
    _g4_s910 = (2864u + sizeof(_g4_t_v1154)) > _g4_s909 ? (2864u + sizeof(_g4_t_v1154)) : _g4_s909,
    _g4_s911 = (2868u + sizeof(_g4_t_v1155)) > _g4_s910 ? (2868u + sizeof(_g4_t_v1155)) : _g4_s910,
    _g4_s912 = (2872u + sizeof(_g4_t_v1156)) > _g4_s911 ? (2872u + sizeof(_g4_t_v1156)) : _g4_s911,
    _g4_s913 = (2876u + sizeof(_g4_t_v1157)) > _g4_s912 ? (2876u + sizeof(_g4_t_v1157)) : _g4_s912,
    _g4_s914 = (2880u + sizeof(_g4_t_v1158)) > _g4_s913 ? (2880u + sizeof(_g4_t_v1158)) : _g4_s913,
    _g4_s915 = (2884u + sizeof(_g4_t_v1159)) > _g4_s914 ? (2884u + sizeof(_g4_t_v1159)) : _g4_s914,
    _g4_s916 = (2888u + sizeof(_g4_t_v1160)) > _g4_s915 ? (2888u + sizeof(_g4_t_v1160)) : _g4_s915,
    _g4_s917 = (2892u + sizeof(_g4_t_v1161)) > _g4_s916 ? (2892u + sizeof(_g4_t_v1161)) : _g4_s916,
    _g4_s918 = (2896u + sizeof(_g4_t_v1162)) > _g4_s917 ? (2896u + sizeof(_g4_t_v1162)) : _g4_s917,
    _g4_s919 = (2900u + sizeof(_g4_t_v1163)) > _g4_s918 ? (2900u + sizeof(_g4_t_v1163)) : _g4_s918,
    _g4_s920 = (2904u + sizeof(_g4_t_v1164)) > _g4_s919 ? (2904u + sizeof(_g4_t_v1164)) : _g4_s919,
    _g4_s921 = (2908u + sizeof(_g4_t_v1165)) > _g4_s920 ? (2908u + sizeof(_g4_t_v1165)) : _g4_s920,
    _g4_s922 = (2912u + sizeof(_g4_t_v1166)) > _g4_s921 ? (2912u + sizeof(_g4_t_v1166)) : _g4_s921,
    _g4_s923 = (2916u + sizeof(_g4_t_v1167)) > _g4_s922 ? (2916u + sizeof(_g4_t_v1167)) : _g4_s922,
    _g4_s924 = (2920u + sizeof(_g4_t_v1168)) > _g4_s923 ? (2920u + sizeof(_g4_t_v1168)) : _g4_s923,
    _g4_s925 = (2924u + sizeof(_g4_t_v1169)) > _g4_s924 ? (2924u + sizeof(_g4_t_v1169)) : _g4_s924,
    _g4_s926 = (2928u + sizeof(_g4_t_v1170)) > _g4_s925 ? (2928u + sizeof(_g4_t_v1170)) : _g4_s925,
    _g4_s927 = (2932u + sizeof(_g4_t_v1171)) > _g4_s926 ? (2932u + sizeof(_g4_t_v1171)) : _g4_s926,
    _g4_s928 = (2936u + sizeof(_g4_t_v1172)) > _g4_s927 ? (2936u + sizeof(_g4_t_v1172)) : _g4_s927,
    _g4_s929 = (2940u + sizeof(_g4_t_v1173)) > _g4_s928 ? (2940u + sizeof(_g4_t_v1173)) : _g4_s928,
    _g4_s930 = (2944u + sizeof(_g4_t_v1174)) > _g4_s929 ? (2944u + sizeof(_g4_t_v1174)) : _g4_s929,
    _g4_s931 = (2948u + sizeof(_g4_t_v1175)) > _g4_s930 ? (2948u + sizeof(_g4_t_v1175)) : _g4_s930,
    _g4_s932 = (2952u + sizeof(_g4_t_v1176)) > _g4_s931 ? (2952u + sizeof(_g4_t_v1176)) : _g4_s931,
    _g4_s933 = (2956u + sizeof(_g4_t_v1177)) > _g4_s932 ? (2956u + sizeof(_g4_t_v1177)) : _g4_s932,
    _g4_s934 = (2960u + sizeof(_g4_t_v1178)) > _g4_s933 ? (2960u + sizeof(_g4_t_v1178)) : _g4_s933,
    _g4_s935 = (2964u + sizeof(_g4_t_v1179)) > _g4_s934 ? (2964u + sizeof(_g4_t_v1179)) : _g4_s934,
    _g4_s936 = (2968u + sizeof(_g4_t_v1180)) > _g4_s935 ? (2968u + sizeof(_g4_t_v1180)) : _g4_s935,
    _g4_s937 = (2972u + sizeof(_g4_t_v1181)) > _g4_s936 ? (2972u + sizeof(_g4_t_v1181)) : _g4_s936,
    _g4_s938 = (2976u + sizeof(_g4_t_v1182)) > _g4_s937 ? (2976u + sizeof(_g4_t_v1182)) : _g4_s937,
    _g4_s939 = (2980u + sizeof(_g4_t_v1183)) > _g4_s938 ? (2980u + sizeof(_g4_t_v1183)) : _g4_s938,
    _g4_s940 = (2984u + sizeof(_g4_t_v1184)) > _g4_s939 ? (2984u + sizeof(_g4_t_v1184)) : _g4_s939,
    _g4_s941 = (2988u + sizeof(_g4_t_v1185)) > _g4_s940 ? (2988u + sizeof(_g4_t_v1185)) : _g4_s940,
    _g4_s942 = (2992u + sizeof(_g4_t_v1186)) > _g4_s941 ? (2992u + sizeof(_g4_t_v1186)) : _g4_s941,
    _g4_s943 = (2996u + sizeof(_g4_t_v1187)) > _g4_s942 ? (2996u + sizeof(_g4_t_v1187)) : _g4_s942,
    _g4_s944 = (3000u + sizeof(_g4_t_v1188)) > _g4_s943 ? (3000u + sizeof(_g4_t_v1188)) : _g4_s943,
    _g4_s945 = (3004u + sizeof(_g4_t_v1189)) > _g4_s944 ? (3004u + sizeof(_g4_t_v1189)) : _g4_s944,
    _g4_s946 = (3008u + sizeof(_g4_t_v1190)) > _g4_s945 ? (3008u + sizeof(_g4_t_v1190)) : _g4_s945,
    _g4_s947 = (3012u + sizeof(_g4_t_v1191)) > _g4_s946 ? (3012u + sizeof(_g4_t_v1191)) : _g4_s946,
    _g4_s948 = (3016u + sizeof(_g4_t_v1192)) > _g4_s947 ? (3016u + sizeof(_g4_t_v1192)) : _g4_s947,
    _g4_s949 = (3020u + sizeof(_g4_t_v1193)) > _g4_s948 ? (3020u + sizeof(_g4_t_v1193)) : _g4_s948,
    _g4_s950 = (3024u + sizeof(_g4_t_v1194)) > _g4_s949 ? (3024u + sizeof(_g4_t_v1194)) : _g4_s949,
    _g4_s951 = (3028u + sizeof(_g4_t_v1195)) > _g4_s950 ? (3028u + sizeof(_g4_t_v1195)) : _g4_s950,
    _g4_s952 = (3032u + sizeof(_g4_t_v1196)) > _g4_s951 ? (3032u + sizeof(_g4_t_v1196)) : _g4_s951,
    _g4_s953 = (3036u + sizeof(_g4_t_v1197)) > _g4_s952 ? (3036u + sizeof(_g4_t_v1197)) : _g4_s952,
    _g4_s954 = (3040u + sizeof(_g4_t_v1198)) > _g4_s953 ? (3040u + sizeof(_g4_t_v1198)) : _g4_s953,
    _g4_s955 = (3044u + sizeof(_g4_t_v1199)) > _g4_s954 ? (3044u + sizeof(_g4_t_v1199)) : _g4_s954,
    _g4_s956 = (3048u + sizeof(_g4_t_v1200)) > _g4_s955 ? (3048u + sizeof(_g4_t_v1200)) : _g4_s955,
    _g4_s957 = (3052u + sizeof(_g4_t_v1201)) > _g4_s956 ? (3052u + sizeof(_g4_t_v1201)) : _g4_s956,
    _g4_s958 = (3056u + sizeof(_g4_t_v1202)) > _g4_s957 ? (3056u + sizeof(_g4_t_v1202)) : _g4_s957,
    _g4_s959 = (3060u + sizeof(_g4_t_v1203)) > _g4_s958 ? (3060u + sizeof(_g4_t_v1203)) : _g4_s958,
    _g4_s960 = (3064u + sizeof(_g4_t_v1204)) > _g4_s959 ? (3064u + sizeof(_g4_t_v1204)) : _g4_s959,
    _g4_s961 = (3068u + sizeof(_g4_t_v1205)) > _g4_s960 ? (3068u + sizeof(_g4_t_v1205)) : _g4_s960,
    _g4_s962 = (3072u + sizeof(_g4_t_v1206)) > _g4_s961 ? (3072u + sizeof(_g4_t_v1206)) : _g4_s961,
    _g4_s963 = (3076u + sizeof(_g4_t_v1207)) > _g4_s962 ? (3076u + sizeof(_g4_t_v1207)) : _g4_s962,
    _g4_s964 = (3080u + sizeof(_g4_t_v1208)) > _g4_s963 ? (3080u + sizeof(_g4_t_v1208)) : _g4_s963,
    _g4_s965 = (3084u + sizeof(_g4_t_v1209)) > _g4_s964 ? (3084u + sizeof(_g4_t_v1209)) : _g4_s964,
    _g4_s966 = (3088u + sizeof(_g4_t_v1210)) > _g4_s965 ? (3088u + sizeof(_g4_t_v1210)) : _g4_s965,
    _g4_s967 = (3092u + sizeof(_g4_t_v1211)) > _g4_s966 ? (3092u + sizeof(_g4_t_v1211)) : _g4_s966,
    _g4_s968 = (3096u + sizeof(_g4_t_v1212)) > _g4_s967 ? (3096u + sizeof(_g4_t_v1212)) : _g4_s967,
    _g4_s969 = (3100u + sizeof(_g4_t_v1213)) > _g4_s968 ? (3100u + sizeof(_g4_t_v1213)) : _g4_s968,
    _g4_s970 = (3104u + sizeof(_g4_t_v1214)) > _g4_s969 ? (3104u + sizeof(_g4_t_v1214)) : _g4_s969,
    _g4_s971 = (3108u + sizeof(_g4_t_v1215)) > _g4_s970 ? (3108u + sizeof(_g4_t_v1215)) : _g4_s970,
    _g4_s972 = (3112u + sizeof(_g4_t_v1216)) > _g4_s971 ? (3112u + sizeof(_g4_t_v1216)) : _g4_s971,
    _g4_s973 = (3116u + sizeof(_g4_t_v1217)) > _g4_s972 ? (3116u + sizeof(_g4_t_v1217)) : _g4_s972,
    _g4_s974 = (3120u + sizeof(_g4_t_v1218)) > _g4_s973 ? (3120u + sizeof(_g4_t_v1218)) : _g4_s973,
    _g4_s975 = (3124u + sizeof(_g4_t_v1219)) > _g4_s974 ? (3124u + sizeof(_g4_t_v1219)) : _g4_s974,
    _g4_s976 = (3128u + sizeof(_g4_t_v1220)) > _g4_s975 ? (3128u + sizeof(_g4_t_v1220)) : _g4_s975,
    _g4_s977 = (3132u + sizeof(_g4_t_v1221)) > _g4_s976 ? (3132u + sizeof(_g4_t_v1221)) : _g4_s976,
    _g4_s978 = (3136u + sizeof(_g4_t_v1222)) > _g4_s977 ? (3136u + sizeof(_g4_t_v1222)) : _g4_s977,
    _g4_s979 = (3140u + sizeof(_g4_t_v1223)) > _g4_s978 ? (3140u + sizeof(_g4_t_v1223)) : _g4_s978,
    _g4_s980 = (3144u + sizeof(_g4_t_v1224)) > _g4_s979 ? (3144u + sizeof(_g4_t_v1224)) : _g4_s979,
    _g4_s981 = (3148u + sizeof(_g4_t_v1225)) > _g4_s980 ? (3148u + sizeof(_g4_t_v1225)) : _g4_s980,
    _g4_s982 = (3152u + sizeof(_g4_t_v1226)) > _g4_s981 ? (3152u + sizeof(_g4_t_v1226)) : _g4_s981,
    _g4_s983 = (3156u + sizeof(_g4_t_v1227)) > _g4_s982 ? (3156u + sizeof(_g4_t_v1227)) : _g4_s982,
    _g4_s984 = (3160u + sizeof(_g4_t_v1228)) > _g4_s983 ? (3160u + sizeof(_g4_t_v1228)) : _g4_s983,
    _g4_s985 = (3164u + sizeof(_g4_t_v1229)) > _g4_s984 ? (3164u + sizeof(_g4_t_v1229)) : _g4_s984,
    _g4_s986 = (3168u + sizeof(_g4_t_v1230)) > _g4_s985 ? (3168u + sizeof(_g4_t_v1230)) : _g4_s985,
    _g4_s987 = (3172u + sizeof(_g4_t_v1231)) > _g4_s986 ? (3172u + sizeof(_g4_t_v1231)) : _g4_s986,
    _g4_s988 = (3176u + sizeof(_g4_t_v1232)) > _g4_s987 ? (3176u + sizeof(_g4_t_v1232)) : _g4_s987,
    _g4_s989 = (3180u + sizeof(_g4_t_v1233)) > _g4_s988 ? (3180u + sizeof(_g4_t_v1233)) : _g4_s988,
    _g4_s990 = (3184u + sizeof(_g4_t_v1234)) > _g4_s989 ? (3184u + sizeof(_g4_t_v1234)) : _g4_s989,
    _g4_s991 = (3188u + sizeof(_g4_t_v1235)) > _g4_s990 ? (3188u + sizeof(_g4_t_v1235)) : _g4_s990,
    _g4_s992 = (3192u + sizeof(_g4_t_v1236)) > _g4_s991 ? (3192u + sizeof(_g4_t_v1236)) : _g4_s991,
    _g4_s993 = (3196u + sizeof(_g4_t_v1237)) > _g4_s992 ? (3196u + sizeof(_g4_t_v1237)) : _g4_s992,
    _g4_s994 = (3200u + sizeof(_g4_t_v1238)) > _g4_s993 ? (3200u + sizeof(_g4_t_v1238)) : _g4_s993,
    _g4_s995 = (3204u + sizeof(_g4_t_v1239)) > _g4_s994 ? (3204u + sizeof(_g4_t_v1239)) : _g4_s994,
    _g4_s996 = (3208u + sizeof(_g4_t_v1240)) > _g4_s995 ? (3208u + sizeof(_g4_t_v1240)) : _g4_s995,
    _g4_s997 = (3212u + sizeof(_g4_t_v1241)) > _g4_s996 ? (3212u + sizeof(_g4_t_v1241)) : _g4_s996,
    _g4_s998 = (3216u + sizeof(_g4_t_v1242)) > _g4_s997 ? (3216u + sizeof(_g4_t_v1242)) : _g4_s997,
    _g4_s999 = (3220u + sizeof(_g4_t_v1243)) > _g4_s998 ? (3220u + sizeof(_g4_t_v1243)) : _g4_s998,
    _g4_s1000 = (3224u + sizeof(_g4_t_v1244)) > _g4_s999 ? (3224u + sizeof(_g4_t_v1244)) : _g4_s999,
    _g4_s1001 = (3228u + sizeof(_g4_t_v1245)) > _g4_s1000 ? (3228u + sizeof(_g4_t_v1245)) : _g4_s1000,
    _g4_s1002 = (3232u + sizeof(_g4_t_v1246)) > _g4_s1001 ? (3232u + sizeof(_g4_t_v1246)) : _g4_s1001,
    _g4_s1003 = (3236u + sizeof(_g4_t_v1247)) > _g4_s1002 ? (3236u + sizeof(_g4_t_v1247)) : _g4_s1002,
    _g4_s1004 = (3240u + sizeof(_g4_t_v1248)) > _g4_s1003 ? (3240u + sizeof(_g4_t_v1248)) : _g4_s1003,
    _g4_s1005 = (3244u + sizeof(_g4_t_v1249)) > _g4_s1004 ? (3244u + sizeof(_g4_t_v1249)) : _g4_s1004,
    _g4_s1006 = (3248u + sizeof(_g4_t_v1250)) > _g4_s1005 ? (3248u + sizeof(_g4_t_v1250)) : _g4_s1005,
    _g4_s1007 = (3252u + sizeof(_g4_t_v1251)) > _g4_s1006 ? (3252u + sizeof(_g4_t_v1251)) : _g4_s1006,
    _g4_s1008 = (3256u + sizeof(_g4_t_v1252)) > _g4_s1007 ? (3256u + sizeof(_g4_t_v1252)) : _g4_s1007,
    _g4_s1009 = (3260u + sizeof(_g4_t_v1253)) > _g4_s1008 ? (3260u + sizeof(_g4_t_v1253)) : _g4_s1008,
    _g4_s1010 = (3264u + sizeof(_g4_t_v1254)) > _g4_s1009 ? (3264u + sizeof(_g4_t_v1254)) : _g4_s1009,
    _g4_s1011 = (3268u + sizeof(_g4_t_v1255)) > _g4_s1010 ? (3268u + sizeof(_g4_t_v1255)) : _g4_s1010,
    _g4_s1012 = (3272u + sizeof(_g4_t_v1256)) > _g4_s1011 ? (3272u + sizeof(_g4_t_v1256)) : _g4_s1011,
    _g4_s1013 = (3276u + sizeof(_g4_t_v1257)) > _g4_s1012 ? (3276u + sizeof(_g4_t_v1257)) : _g4_s1012,
    _g4_s1014 = (3280u + sizeof(_g4_t_v1258)) > _g4_s1013 ? (3280u + sizeof(_g4_t_v1258)) : _g4_s1013,
    _g4_s1015 = (3284u + sizeof(_g4_t_v1259)) > _g4_s1014 ? (3284u + sizeof(_g4_t_v1259)) : _g4_s1014,
    _g4_s1016 = (3288u + sizeof(_g4_t_v1260)) > _g4_s1015 ? (3288u + sizeof(_g4_t_v1260)) : _g4_s1015,
    _g4_s1017 = (3292u + sizeof(_g4_t_v1261)) > _g4_s1016 ? (3292u + sizeof(_g4_t_v1261)) : _g4_s1016,
    _g4_s1018 = (3296u + sizeof(_g4_t_v1262)) > _g4_s1017 ? (3296u + sizeof(_g4_t_v1262)) : _g4_s1017,
    _g4_s1019 = (3300u + sizeof(_g4_t_v1263)) > _g4_s1018 ? (3300u + sizeof(_g4_t_v1263)) : _g4_s1018
  };
  alignas(16) uint8_t _g4_sf[_g4_s1019];
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 0u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 0u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 0u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 0u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 0u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 0u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 0u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 0u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 0u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 0u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 0u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 0u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 0u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 0u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 0u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 0u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 0u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 0u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 0u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 0u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 0u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 0u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 0u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 0u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 0u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 0u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 0u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 0u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 0u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 0u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 0u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 0u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 0u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 0u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 0u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 0u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 0u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 0u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 0u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 0u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 0u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 0u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 0u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 0u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 0u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 0u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 0u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 0u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 4u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 4u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 4u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 4u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 4u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 4u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 4u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 4u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 4u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 4u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 4u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 4u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 4u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 4u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 4u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 4u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 4u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 4u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 4u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 4u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 4u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 4u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 4u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 4u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 4u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 4u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 4u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 4u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 4u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 4u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 4u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 4u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 4u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 4u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 4u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 4u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 4u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 4u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 4u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 4u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 4u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 4u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 4u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 4u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 4u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 4u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 4u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 4u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 4u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 4u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 4u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 4u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 4u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 4u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 4u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 4u);
  _g4_t_v349 &v349 = *reinterpret_cast<_g4_t_v349 *>(_g4_sf + 4u);
  _g4_t_v350 &v350 = *reinterpret_cast<_g4_t_v350 *>(_g4_sf + 4u);
  _g4_t_v351 &v351 = *reinterpret_cast<_g4_t_v351 *>(_g4_sf + 4u);
  _g4_t_v352 &v352 = *reinterpret_cast<_g4_t_v352 *>(_g4_sf + 4u);
  _g4_t_v353 &v353 = *reinterpret_cast<_g4_t_v353 *>(_g4_sf + 4u);
  _g4_t_v354 &v354 = *reinterpret_cast<_g4_t_v354 *>(_g4_sf + 4u);
  _g4_t_v355 &v355 = *reinterpret_cast<_g4_t_v355 *>(_g4_sf + 4u);
  _g4_t_v356 &v356 = *reinterpret_cast<_g4_t_v356 *>(_g4_sf + 4u);
  _g4_t_v357 &v357 = *reinterpret_cast<_g4_t_v357 *>(_g4_sf + 4u);
  _g4_t_v358 &v358 = *reinterpret_cast<_g4_t_v358 *>(_g4_sf + 4u);
  _g4_t_v359 &v359 = *reinterpret_cast<_g4_t_v359 *>(_g4_sf + 4u);
  _g4_t_v360 &v360 = *reinterpret_cast<_g4_t_v360 *>(_g4_sf + 4u);
  _g4_t_v361 &v361 = *reinterpret_cast<_g4_t_v361 *>(_g4_sf + 4u);
  _g4_t_v362 &v362 = *reinterpret_cast<_g4_t_v362 *>(_g4_sf + 4u);
  _g4_t_v363 &v363 = *reinterpret_cast<_g4_t_v363 *>(_g4_sf + 4u);
  _g4_t_v364 &v364 = *reinterpret_cast<_g4_t_v364 *>(_g4_sf + 4u);
  _g4_t_v365 &v365 = *reinterpret_cast<_g4_t_v365 *>(_g4_sf + 4u);
  _g4_t_v366 &v366 = *reinterpret_cast<_g4_t_v366 *>(_g4_sf + 4u);
  _g4_t_v367 &v367 = *reinterpret_cast<_g4_t_v367 *>(_g4_sf + 4u);
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 4u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 4u);
  _g4_t_v370 &v370 = *reinterpret_cast<_g4_t_v370 *>(_g4_sf + 4u);
  _g4_t_v371 &v371 = *reinterpret_cast<_g4_t_v371 *>(_g4_sf + 4u);
  _g4_t_v372 &v372 = *reinterpret_cast<_g4_t_v372 *>(_g4_sf + 4u);
  _g4_t_v373 &v373 = *reinterpret_cast<_g4_t_v373 *>(_g4_sf + 4u);
  _g4_t_v374 &v374 = *reinterpret_cast<_g4_t_v374 *>(_g4_sf + 4u);
  _g4_t_v375 &v375 = *reinterpret_cast<_g4_t_v375 *>(_g4_sf + 4u);
  _g4_t_v376 &v376 = *reinterpret_cast<_g4_t_v376 *>(_g4_sf + 4u);
  _g4_t_v377 &v377 = *reinterpret_cast<_g4_t_v377 *>(_g4_sf + 4u);
  _g4_t_v378 &v378 = *reinterpret_cast<_g4_t_v378 *>(_g4_sf + 4u);
  _g4_t_v379 &v379 = *reinterpret_cast<_g4_t_v379 *>(_g4_sf + 4u);
  _g4_t_v380 &v380 = *reinterpret_cast<_g4_t_v380 *>(_g4_sf + 4u);
  _g4_t_v381 &v381 = *reinterpret_cast<_g4_t_v381 *>(_g4_sf + 4u);
  _g4_t_v382 &v382 = *reinterpret_cast<_g4_t_v382 *>(_g4_sf + 4u);
  _g4_t_v383 &v383 = *reinterpret_cast<_g4_t_v383 *>(_g4_sf + 4u);
  _g4_t_v384 &v384 = *reinterpret_cast<_g4_t_v384 *>(_g4_sf + 4u);
  _g4_t_v385 &v385 = *reinterpret_cast<_g4_t_v385 *>(_g4_sf + 4u);
  _g4_t_v386 &v386 = *reinterpret_cast<_g4_t_v386 *>(_g4_sf + 4u);
  _g4_t_v387 &v387 = *reinterpret_cast<_g4_t_v387 *>(_g4_sf + 4u);
  _g4_t_v388 &v388 = *reinterpret_cast<_g4_t_v388 *>(_g4_sf + 4u);
  _g4_t_v389 &v389 = *reinterpret_cast<_g4_t_v389 *>(_g4_sf + 4u);
  _g4_t_v390 &v390 = *reinterpret_cast<_g4_t_v390 *>(_g4_sf + 4u);
  _g4_t_v391 &v391 = *reinterpret_cast<_g4_t_v391 *>(_g4_sf + 4u);
  _g4_t_v392 &v392 = *reinterpret_cast<_g4_t_v392 *>(_g4_sf + 4u);
  _g4_t_v393 &v393 = *reinterpret_cast<_g4_t_v393 *>(_g4_sf + 4u);
  _g4_t_v394 &v394 = *reinterpret_cast<_g4_t_v394 *>(_g4_sf + 4u);
  _g4_t_v395 &v395 = *reinterpret_cast<_g4_t_v395 *>(_g4_sf + 4u);
  _g4_t_v396 &v396 = *reinterpret_cast<_g4_t_v396 *>(_g4_sf + 4u);
  _g4_t_v397 &v397 = *reinterpret_cast<_g4_t_v397 *>(_g4_sf + 4u);
  _g4_t_v398 &v398 = *reinterpret_cast<_g4_t_v398 *>(_g4_sf + 4u);
  _g4_t_v399 &v399 = *reinterpret_cast<_g4_t_v399 *>(_g4_sf + 4u);
  _g4_t_v400 &v400 = *reinterpret_cast<_g4_t_v400 *>(_g4_sf + 4u);
  _g4_t_v401 &v401 = *reinterpret_cast<_g4_t_v401 *>(_g4_sf + 4u);
  _g4_t_v402 &v402 = *reinterpret_cast<_g4_t_v402 *>(_g4_sf + 4u);
  _g4_t_v403 &v403 = *reinterpret_cast<_g4_t_v403 *>(_g4_sf + 4u);
  _g4_t_v404 &v404 = *reinterpret_cast<_g4_t_v404 *>(_g4_sf + 4u);
  _g4_t_v405 &v405 = *reinterpret_cast<_g4_t_v405 *>(_g4_sf + 4u);
  _g4_t_v406 &v406 = *reinterpret_cast<_g4_t_v406 *>(_g4_sf + 4u);
  _g4_t_v407 &v407 = *reinterpret_cast<_g4_t_v407 *>(_g4_sf + 4u);
  _g4_t_v408 &v408 = *reinterpret_cast<_g4_t_v408 *>(_g4_sf + 4u);
  _g4_t_v409 &v409 = *reinterpret_cast<_g4_t_v409 *>(_g4_sf + 4u);
  _g4_t_v410 &v410 = *reinterpret_cast<_g4_t_v410 *>(_g4_sf + 4u);
  _g4_t_v411 &v411 = *reinterpret_cast<_g4_t_v411 *>(_g4_sf + 4u);
  _g4_t_v412 &v412 = *reinterpret_cast<_g4_t_v412 *>(_g4_sf + 4u);
  _g4_t_v413 &v413 = *reinterpret_cast<_g4_t_v413 *>(_g4_sf + 4u);
  _g4_t_v414 &v414 = *reinterpret_cast<_g4_t_v414 *>(_g4_sf + 4u);
  _g4_t_v415 &v415 = *reinterpret_cast<_g4_t_v415 *>(_g4_sf + 4u);
  _g4_t_v416 &v416 = *reinterpret_cast<_g4_t_v416 *>(_g4_sf + 4u);
  _g4_t_v417 &v417 = *reinterpret_cast<_g4_t_v417 *>(_g4_sf + 4u);
  _g4_t_v418 &v418 = *reinterpret_cast<_g4_t_v418 *>(_g4_sf + 4u);
  _g4_t_v419 &v419 = *reinterpret_cast<_g4_t_v419 *>(_g4_sf + 4u);
  _g4_t_v420 &v420 = *reinterpret_cast<_g4_t_v420 *>(_g4_sf + 4u);
  _g4_t_v421 &v421 = *reinterpret_cast<_g4_t_v421 *>(_g4_sf + 4u);
  _g4_t_v422 &v422 = *reinterpret_cast<_g4_t_v422 *>(_g4_sf + 4u);
  _g4_t_v423 &v423 = *reinterpret_cast<_g4_t_v423 *>(_g4_sf + 4u);
  _g4_t_v424 &v424 = *reinterpret_cast<_g4_t_v424 *>(_g4_sf + 4u);
  _g4_t_v425 &v425 = *reinterpret_cast<_g4_t_v425 *>(_g4_sf + 4u);
  _g4_t_v426 &v426 = *reinterpret_cast<_g4_t_v426 *>(_g4_sf + 4u);
  _g4_t_v427 &v427 = *reinterpret_cast<_g4_t_v427 *>(_g4_sf + 4u);
  _g4_t_v428 &v428 = *reinterpret_cast<_g4_t_v428 *>(_g4_sf + 4u);
  _g4_t_v429 &v429 = *reinterpret_cast<_g4_t_v429 *>(_g4_sf + 4u);
  _g4_t_v430 &v430 = *reinterpret_cast<_g4_t_v430 *>(_g4_sf + 4u);
  _g4_t_v431 &v431 = *reinterpret_cast<_g4_t_v431 *>(_g4_sf + 4u);
  _g4_t_v432 &v432 = *reinterpret_cast<_g4_t_v432 *>(_g4_sf + 4u);
  _g4_t_v433 &v433 = *reinterpret_cast<_g4_t_v433 *>(_g4_sf + 4u);
  _g4_t_v434 &v434 = *reinterpret_cast<_g4_t_v434 *>(_g4_sf + 4u);
  _g4_t_v435 &v435 = *reinterpret_cast<_g4_t_v435 *>(_g4_sf + 4u);
  _g4_t_v436 &v436 = *reinterpret_cast<_g4_t_v436 *>(_g4_sf + 4u);
  _g4_t_v437 &v437 = *reinterpret_cast<_g4_t_v437 *>(_g4_sf + 4u);
  _g4_t_v438 &v438 = *reinterpret_cast<_g4_t_v438 *>(_g4_sf + 4u);
  _g4_t_v439 &v439 = *reinterpret_cast<_g4_t_v439 *>(_g4_sf + 4u);
  _g4_t_v440 &v440 = *reinterpret_cast<_g4_t_v440 *>(_g4_sf + 4u);
  _g4_t_v441 &v441 = *reinterpret_cast<_g4_t_v441 *>(_g4_sf + 4u);
  _g4_t_v442 &v442 = *reinterpret_cast<_g4_t_v442 *>(_g4_sf + 4u);
  _g4_t_v443 &v443 = *reinterpret_cast<_g4_t_v443 *>(_g4_sf + 4u);
  _g4_t_v444 &v444 = *reinterpret_cast<_g4_t_v444 *>(_g4_sf + 4u);
  _g4_t_v445 &v445 = *reinterpret_cast<_g4_t_v445 *>(_g4_sf + 4u);
  _g4_t_v446 &v446 = *reinterpret_cast<_g4_t_v446 *>(_g4_sf + 4u);
  _g4_t_v447 &v447 = *reinterpret_cast<_g4_t_v447 *>(_g4_sf + 4u);
  _g4_t_v448 &v448 = *reinterpret_cast<_g4_t_v448 *>(_g4_sf + 4u);
  _g4_t_v449 &v449 = *reinterpret_cast<_g4_t_v449 *>(_g4_sf + 4u);
  _g4_t_v450 &v450 = *reinterpret_cast<_g4_t_v450 *>(_g4_sf + 4u);
  _g4_t_v451 &v451 = *reinterpret_cast<_g4_t_v451 *>(_g4_sf + 4u);
  _g4_t_v452 &v452 = *reinterpret_cast<_g4_t_v452 *>(_g4_sf + 4u);
  _g4_t_v453 &v453 = *reinterpret_cast<_g4_t_v453 *>(_g4_sf + 4u);
  _g4_t_v454 &v454 = *reinterpret_cast<_g4_t_v454 *>(_g4_sf + 4u);
  _g4_t_v455 &v455 = *reinterpret_cast<_g4_t_v455 *>(_g4_sf + 4u);
  _g4_t_v456 &v456 = *reinterpret_cast<_g4_t_v456 *>(_g4_sf + 4u);
  _g4_t_v457 &v457 = *reinterpret_cast<_g4_t_v457 *>(_g4_sf + 4u);
  _g4_t_v458 &v458 = *reinterpret_cast<_g4_t_v458 *>(_g4_sf + 4u);
  _g4_t_v459 &v459 = *reinterpret_cast<_g4_t_v459 *>(_g4_sf + 4u);
  _g4_t_v460 &v460 = *reinterpret_cast<_g4_t_v460 *>(_g4_sf + 4u);
  _g4_t_v461 &v461 = *reinterpret_cast<_g4_t_v461 *>(_g4_sf + 4u);
  _g4_t_v462 &v462 = *reinterpret_cast<_g4_t_v462 *>(_g4_sf + 4u);
  _g4_t_v463 &v463 = *reinterpret_cast<_g4_t_v463 *>(_g4_sf + 4u);
  _g4_t_v464 &v464 = *reinterpret_cast<_g4_t_v464 *>(_g4_sf + 4u);
  _g4_t_v465 &v465 = *reinterpret_cast<_g4_t_v465 *>(_g4_sf + 4u);
  _g4_t_v466 &v466 = *reinterpret_cast<_g4_t_v466 *>(_g4_sf + 4u);
  _g4_t_v467 &v467 = *reinterpret_cast<_g4_t_v467 *>(_g4_sf + 4u);
  _g4_t_v468 &v468 = *reinterpret_cast<_g4_t_v468 *>(_g4_sf + 8u);
  _g4_t_v469 &v469 = *reinterpret_cast<_g4_t_v469 *>(_g4_sf + 120u);
  _g4_t_v470 &v470 = *reinterpret_cast<_g4_t_v470 *>(_g4_sf + 128u);
  _g4_t_v471 &v471 = *reinterpret_cast<_g4_t_v471 *>(_g4_sf + 132u);
  _g4_t_v472 &v472 = *reinterpret_cast<_g4_t_v472 *>(_g4_sf + 136u);
  _g4_t_v473 &v473 = *reinterpret_cast<_g4_t_v473 *>(_g4_sf + 140u);
  _g4_t_v474 &v474 = *reinterpret_cast<_g4_t_v474 *>(_g4_sf + 144u);
  _g4_t_v475 &v475 = *reinterpret_cast<_g4_t_v475 *>(_g4_sf + 148u);
  _g4_t_v476 &v476 = *reinterpret_cast<_g4_t_v476 *>(_g4_sf + 152u);
  _g4_t_v477 &v477 = *reinterpret_cast<_g4_t_v477 *>(_g4_sf + 156u);
  _g4_t_v478 &v478 = *reinterpret_cast<_g4_t_v478 *>(_g4_sf + 160u);
  _g4_t_v479 &v479 = *reinterpret_cast<_g4_t_v479 *>(_g4_sf + 164u);
  _g4_t_v480 &v480 = *reinterpret_cast<_g4_t_v480 *>(_g4_sf + 168u);
  _g4_t_v481 &v481 = *reinterpret_cast<_g4_t_v481 *>(_g4_sf + 172u);
  _g4_t_v482 &v482 = *reinterpret_cast<_g4_t_v482 *>(_g4_sf + 176u);
  _g4_t_v483 &v483 = *reinterpret_cast<_g4_t_v483 *>(_g4_sf + 180u);
  _g4_t_v484 &v484 = *reinterpret_cast<_g4_t_v484 *>(_g4_sf + 184u);
  _g4_t_v485 &v485 = *reinterpret_cast<_g4_t_v485 *>(_g4_sf + 188u);
  _g4_t_v486 &v486 = *reinterpret_cast<_g4_t_v486 *>(_g4_sf + 192u);
  _g4_t_v487 &v487 = *reinterpret_cast<_g4_t_v487 *>(_g4_sf + 196u);
  _g4_t_v488 &v488 = *reinterpret_cast<_g4_t_v488 *>(_g4_sf + 200u);
  _g4_t_v489 &v489 = *reinterpret_cast<_g4_t_v489 *>(_g4_sf + 204u);
  _g4_t_v490 &v490 = *reinterpret_cast<_g4_t_v490 *>(_g4_sf + 208u);
  _g4_t_v491 &v491 = *reinterpret_cast<_g4_t_v491 *>(_g4_sf + 212u);
  _g4_t_v492 &v492 = *reinterpret_cast<_g4_t_v492 *>(_g4_sf + 216u);
  _g4_t_v493 &v493 = *reinterpret_cast<_g4_t_v493 *>(_g4_sf + 220u);
  _g4_t_v494 &v494 = *reinterpret_cast<_g4_t_v494 *>(_g4_sf + 224u);
  _g4_t_v495 &v495 = *reinterpret_cast<_g4_t_v495 *>(_g4_sf + 228u);
  _g4_t_v496 &v496 = *reinterpret_cast<_g4_t_v496 *>(_g4_sf + 232u);
  _g4_t_v497 &v497 = *reinterpret_cast<_g4_t_v497 *>(_g4_sf + 236u);
  _g4_t_v498 &v498 = *reinterpret_cast<_g4_t_v498 *>(_g4_sf + 240u);
  _g4_t_v499 &v499 = *reinterpret_cast<_g4_t_v499 *>(_g4_sf + 244u);
  _g4_t_v500 &v500 = *reinterpret_cast<_g4_t_v500 *>(_g4_sf + 248u);
  _g4_t_v501 &v501 = *reinterpret_cast<_g4_t_v501 *>(_g4_sf + 252u);
  _g4_t_v502 &v502 = *reinterpret_cast<_g4_t_v502 *>(_g4_sf + 256u);
  _g4_t_v503 &v503 = *reinterpret_cast<_g4_t_v503 *>(_g4_sf + 260u);
  _g4_t_v504 &v504 = *reinterpret_cast<_g4_t_v504 *>(_g4_sf + 264u);
  _g4_t_v505 &v505 = *reinterpret_cast<_g4_t_v505 *>(_g4_sf + 268u);
  _g4_t_v506 &v506 = *reinterpret_cast<_g4_t_v506 *>(_g4_sf + 272u);
  _g4_t_v507 &v507 = *reinterpret_cast<_g4_t_v507 *>(_g4_sf + 276u);
  _g4_t_v508 &v508 = *reinterpret_cast<_g4_t_v508 *>(_g4_sf + 280u);
  _g4_t_v509 &v509 = *reinterpret_cast<_g4_t_v509 *>(_g4_sf + 284u);
  _g4_t_v510 &v510 = *reinterpret_cast<_g4_t_v510 *>(_g4_sf + 288u);
  _g4_t_v511 &v511 = *reinterpret_cast<_g4_t_v511 *>(_g4_sf + 292u);
  _g4_t_v512 &v512 = *reinterpret_cast<_g4_t_v512 *>(_g4_sf + 296u);
  _g4_t_v513 &v513 = *reinterpret_cast<_g4_t_v513 *>(_g4_sf + 300u);
  _g4_t_v514 &v514 = *reinterpret_cast<_g4_t_v514 *>(_g4_sf + 304u);
  _g4_t_v515 &v515 = *reinterpret_cast<_g4_t_v515 *>(_g4_sf + 308u);
  _g4_t_v516 &v516 = *reinterpret_cast<_g4_t_v516 *>(_g4_sf + 312u);
  _g4_t_v517 &v517 = *reinterpret_cast<_g4_t_v517 *>(_g4_sf + 316u);
  _g4_t_v518 &v518 = *reinterpret_cast<_g4_t_v518 *>(_g4_sf + 320u);
  _g4_t_v519 &v519 = *reinterpret_cast<_g4_t_v519 *>(_g4_sf + 324u);
  _g4_t_v520 &v520 = *reinterpret_cast<_g4_t_v520 *>(_g4_sf + 328u);
  _g4_t_v521 &v521 = *reinterpret_cast<_g4_t_v521 *>(_g4_sf + 332u);
  _g4_t_v522 &v522 = *reinterpret_cast<_g4_t_v522 *>(_g4_sf + 336u);
  _g4_t_v523 &v523 = *reinterpret_cast<_g4_t_v523 *>(_g4_sf + 340u);
  _g4_t_v524 &v524 = *reinterpret_cast<_g4_t_v524 *>(_g4_sf + 344u);
  _g4_t_v525 &v525 = *reinterpret_cast<_g4_t_v525 *>(_g4_sf + 348u);
  _g4_t_v526 &v526 = *reinterpret_cast<_g4_t_v526 *>(_g4_sf + 352u);
  _g4_t_v527 &v527 = *reinterpret_cast<_g4_t_v527 *>(_g4_sf + 356u);
  _g4_t_v528 &v528 = *reinterpret_cast<_g4_t_v528 *>(_g4_sf + 360u);
  _g4_t_v529 &v529 = *reinterpret_cast<_g4_t_v529 *>(_g4_sf + 364u);
  _g4_t_v530 &v530 = *reinterpret_cast<_g4_t_v530 *>(_g4_sf + 368u);
  _g4_t_v531 &v531 = *reinterpret_cast<_g4_t_v531 *>(_g4_sf + 372u);
  _g4_t_v532 &v532 = *reinterpret_cast<_g4_t_v532 *>(_g4_sf + 376u);
  _g4_t_v533 &v533 = *reinterpret_cast<_g4_t_v533 *>(_g4_sf + 380u);
  _g4_t_v534 &v534 = *reinterpret_cast<_g4_t_v534 *>(_g4_sf + 384u);
  _g4_t_v535 &v535 = *reinterpret_cast<_g4_t_v535 *>(_g4_sf + 388u);
  _g4_t_v536 &v536 = *reinterpret_cast<_g4_t_v536 *>(_g4_sf + 392u);
  _g4_t_v537 &v537 = *reinterpret_cast<_g4_t_v537 *>(_g4_sf + 396u);
  _g4_t_v538 &v538 = *reinterpret_cast<_g4_t_v538 *>(_g4_sf + 400u);
  _g4_t_v539 &v539 = *reinterpret_cast<_g4_t_v539 *>(_g4_sf + 404u);
  _g4_t_v540 &v540 = *reinterpret_cast<_g4_t_v540 *>(_g4_sf + 408u);
  _g4_t_v541 &v541 = *reinterpret_cast<_g4_t_v541 *>(_g4_sf + 412u);
  _g4_t_v542 &v542 = *reinterpret_cast<_g4_t_v542 *>(_g4_sf + 416u);
  _g4_t_v543 &v543 = *reinterpret_cast<_g4_t_v543 *>(_g4_sf + 420u);
  _g4_t_v544 &v544 = *reinterpret_cast<_g4_t_v544 *>(_g4_sf + 424u);
  _g4_t_v545 &v545 = *reinterpret_cast<_g4_t_v545 *>(_g4_sf + 428u);
  _g4_t_v546 &v546 = *reinterpret_cast<_g4_t_v546 *>(_g4_sf + 432u);
  _g4_t_v547 &v547 = *reinterpret_cast<_g4_t_v547 *>(_g4_sf + 436u);
  _g4_t_v548 &v548 = *reinterpret_cast<_g4_t_v548 *>(_g4_sf + 440u);
  _g4_t_v549 &v549 = *reinterpret_cast<_g4_t_v549 *>(_g4_sf + 444u);
  _g4_t_v550 &v550 = *reinterpret_cast<_g4_t_v550 *>(_g4_sf + 448u);
  _g4_t_v551 &v551 = *reinterpret_cast<_g4_t_v551 *>(_g4_sf + 452u);
  _g4_t_v552 &v552 = *reinterpret_cast<_g4_t_v552 *>(_g4_sf + 456u);
  _g4_t_v553 &v553 = *reinterpret_cast<_g4_t_v553 *>(_g4_sf + 460u);
  _g4_t_v554 &v554 = *reinterpret_cast<_g4_t_v554 *>(_g4_sf + 464u);
  _g4_t_v555 &v555 = *reinterpret_cast<_g4_t_v555 *>(_g4_sf + 468u);
  _g4_t_v556 &v556 = *reinterpret_cast<_g4_t_v556 *>(_g4_sf + 472u);
  _g4_t_v557 &v557 = *reinterpret_cast<_g4_t_v557 *>(_g4_sf + 476u);
  _g4_t_v558 &v558 = *reinterpret_cast<_g4_t_v558 *>(_g4_sf + 480u);
  _g4_t_v559 &v559 = *reinterpret_cast<_g4_t_v559 *>(_g4_sf + 484u);
  _g4_t_v560 &v560 = *reinterpret_cast<_g4_t_v560 *>(_g4_sf + 488u);
  _g4_t_v561 &v561 = *reinterpret_cast<_g4_t_v561 *>(_g4_sf + 492u);
  _g4_t_v562 &v562 = *reinterpret_cast<_g4_t_v562 *>(_g4_sf + 496u);
  _g4_t_v563 &v563 = *reinterpret_cast<_g4_t_v563 *>(_g4_sf + 500u);
  _g4_t_v564 &v564 = *reinterpret_cast<_g4_t_v564 *>(_g4_sf + 504u);
  _g4_t_v565 &v565 = *reinterpret_cast<_g4_t_v565 *>(_g4_sf + 508u);
  _g4_t_v566 &v566 = *reinterpret_cast<_g4_t_v566 *>(_g4_sf + 512u);
  _g4_t_v567 &v567 = *reinterpret_cast<_g4_t_v567 *>(_g4_sf + 516u);
  _g4_t_v568 &v568 = *reinterpret_cast<_g4_t_v568 *>(_g4_sf + 520u);
  _g4_t_v569 &v569 = *reinterpret_cast<_g4_t_v569 *>(_g4_sf + 524u);
  _g4_t_v570 &v570 = *reinterpret_cast<_g4_t_v570 *>(_g4_sf + 528u);
  _g4_t_v571 &v571 = *reinterpret_cast<_g4_t_v571 *>(_g4_sf + 532u);
  _g4_t_v572 &v572 = *reinterpret_cast<_g4_t_v572 *>(_g4_sf + 536u);
  _g4_t_v573 &v573 = *reinterpret_cast<_g4_t_v573 *>(_g4_sf + 540u);
  _g4_t_v574 &v574 = *reinterpret_cast<_g4_t_v574 *>(_g4_sf + 544u);
  _g4_t_v575 &v575 = *reinterpret_cast<_g4_t_v575 *>(_g4_sf + 548u);
  _g4_t_v576 &v576 = *reinterpret_cast<_g4_t_v576 *>(_g4_sf + 552u);
  _g4_t_v577 &v577 = *reinterpret_cast<_g4_t_v577 *>(_g4_sf + 556u);
  _g4_t_v578 &v578 = *reinterpret_cast<_g4_t_v578 *>(_g4_sf + 560u);
  _g4_t_v579 &v579 = *reinterpret_cast<_g4_t_v579 *>(_g4_sf + 564u);
  _g4_t_v580 &v580 = *reinterpret_cast<_g4_t_v580 *>(_g4_sf + 568u);
  _g4_t_v581 &v581 = *reinterpret_cast<_g4_t_v581 *>(_g4_sf + 572u);
  _g4_t_v582 &v582 = *reinterpret_cast<_g4_t_v582 *>(_g4_sf + 576u);
  _g4_t_v583 &v583 = *reinterpret_cast<_g4_t_v583 *>(_g4_sf + 580u);
  _g4_t_v584 &v584 = *reinterpret_cast<_g4_t_v584 *>(_g4_sf + 584u);
  _g4_t_v585 &v585 = *reinterpret_cast<_g4_t_v585 *>(_g4_sf + 588u);
  _g4_t_v586 &v586 = *reinterpret_cast<_g4_t_v586 *>(_g4_sf + 592u);
  _g4_t_v587 &v587 = *reinterpret_cast<_g4_t_v587 *>(_g4_sf + 596u);
  _g4_t_v588 &v588 = *reinterpret_cast<_g4_t_v588 *>(_g4_sf + 600u);
  _g4_t_v589 &v589 = *reinterpret_cast<_g4_t_v589 *>(_g4_sf + 604u);
  _g4_t_v590 &v590 = *reinterpret_cast<_g4_t_v590 *>(_g4_sf + 608u);
  _g4_t_v591 &v591 = *reinterpret_cast<_g4_t_v591 *>(_g4_sf + 612u);
  _g4_t_v592 &v592 = *reinterpret_cast<_g4_t_v592 *>(_g4_sf + 616u);
  _g4_t_v593 &v593 = *reinterpret_cast<_g4_t_v593 *>(_g4_sf + 620u);
  _g4_t_v594 &v594 = *reinterpret_cast<_g4_t_v594 *>(_g4_sf + 624u);
  _g4_t_v595 &v595 = *reinterpret_cast<_g4_t_v595 *>(_g4_sf + 628u);
  _g4_t_v596 &v596 = *reinterpret_cast<_g4_t_v596 *>(_g4_sf + 632u);
  _g4_t_v597 &v597 = *reinterpret_cast<_g4_t_v597 *>(_g4_sf + 636u);
  _g4_t_v598 &v598 = *reinterpret_cast<_g4_t_v598 *>(_g4_sf + 640u);
  _g4_t_v599 &v599 = *reinterpret_cast<_g4_t_v599 *>(_g4_sf + 644u);
  _g4_t_v600 &v600 = *reinterpret_cast<_g4_t_v600 *>(_g4_sf + 648u);
  _g4_t_v601 &v601 = *reinterpret_cast<_g4_t_v601 *>(_g4_sf + 652u);
  _g4_t_v602 &v602 = *reinterpret_cast<_g4_t_v602 *>(_g4_sf + 656u);
  _g4_t_v603 &v603 = *reinterpret_cast<_g4_t_v603 *>(_g4_sf + 660u);
  _g4_t_v604 &v604 = *reinterpret_cast<_g4_t_v604 *>(_g4_sf + 664u);
  _g4_t_v605 &v605 = *reinterpret_cast<_g4_t_v605 *>(_g4_sf + 668u);
  _g4_t_v606 &v606 = *reinterpret_cast<_g4_t_v606 *>(_g4_sf + 672u);
  _g4_t_v607 &v607 = *reinterpret_cast<_g4_t_v607 *>(_g4_sf + 676u);
  _g4_t_v608 &v608 = *reinterpret_cast<_g4_t_v608 *>(_g4_sf + 680u);
  _g4_t_v609 &v609 = *reinterpret_cast<_g4_t_v609 *>(_g4_sf + 684u);
  _g4_t_v610 &v610 = *reinterpret_cast<_g4_t_v610 *>(_g4_sf + 688u);
  _g4_t_v611 &v611 = *reinterpret_cast<_g4_t_v611 *>(_g4_sf + 692u);
  _g4_t_v612 &v612 = *reinterpret_cast<_g4_t_v612 *>(_g4_sf + 696u);
  _g4_t_v613 &v613 = *reinterpret_cast<_g4_t_v613 *>(_g4_sf + 700u);
  _g4_t_v614 &v614 = *reinterpret_cast<_g4_t_v614 *>(_g4_sf + 704u);
  _g4_t_v615 &v615 = *reinterpret_cast<_g4_t_v615 *>(_g4_sf + 708u);
  _g4_t_v616 &v616 = *reinterpret_cast<_g4_t_v616 *>(_g4_sf + 712u);
  _g4_t_v617 &v617 = *reinterpret_cast<_g4_t_v617 *>(_g4_sf + 716u);
  _g4_t_v618 &v618 = *reinterpret_cast<_g4_t_v618 *>(_g4_sf + 720u);
  _g4_t_v619 &v619 = *reinterpret_cast<_g4_t_v619 *>(_g4_sf + 724u);
  _g4_t_v620 &v620 = *reinterpret_cast<_g4_t_v620 *>(_g4_sf + 728u);
  _g4_t_v621 &v621 = *reinterpret_cast<_g4_t_v621 *>(_g4_sf + 732u);
  _g4_t_v622 &v622 = *reinterpret_cast<_g4_t_v622 *>(_g4_sf + 736u);
  _g4_t_v623 &v623 = *reinterpret_cast<_g4_t_v623 *>(_g4_sf + 740u);
  _g4_t_v624 &v624 = *reinterpret_cast<_g4_t_v624 *>(_g4_sf + 744u);
  _g4_t_v625 &v625 = *reinterpret_cast<_g4_t_v625 *>(_g4_sf + 748u);
  _g4_t_v626 &v626 = *reinterpret_cast<_g4_t_v626 *>(_g4_sf + 752u);
  _g4_t_v627 &v627 = *reinterpret_cast<_g4_t_v627 *>(_g4_sf + 756u);
  _g4_t_v628 &v628 = *reinterpret_cast<_g4_t_v628 *>(_g4_sf + 760u);
  _g4_t_v629 &v629 = *reinterpret_cast<_g4_t_v629 *>(_g4_sf + 764u);
  _g4_t_v630 &v630 = *reinterpret_cast<_g4_t_v630 *>(_g4_sf + 768u);
  _g4_t_v631 &v631 = *reinterpret_cast<_g4_t_v631 *>(_g4_sf + 772u);
  _g4_t_v632 &v632 = *reinterpret_cast<_g4_t_v632 *>(_g4_sf + 776u);
  _g4_t_v633 &v633 = *reinterpret_cast<_g4_t_v633 *>(_g4_sf + 780u);
  _g4_t_v634 &v634 = *reinterpret_cast<_g4_t_v634 *>(_g4_sf + 784u);
  _g4_t_v635 &v635 = *reinterpret_cast<_g4_t_v635 *>(_g4_sf + 788u);
  _g4_t_v636 &v636 = *reinterpret_cast<_g4_t_v636 *>(_g4_sf + 792u);
  _g4_t_v637 &v637 = *reinterpret_cast<_g4_t_v637 *>(_g4_sf + 796u);
  _g4_t_v638 &v638 = *reinterpret_cast<_g4_t_v638 *>(_g4_sf + 800u);
  _g4_t_v639 &v639 = *reinterpret_cast<_g4_t_v639 *>(_g4_sf + 804u);
  _g4_t_v640 &v640 = *reinterpret_cast<_g4_t_v640 *>(_g4_sf + 808u);
  _g4_t_v641 &v641 = *reinterpret_cast<_g4_t_v641 *>(_g4_sf + 812u);
  _g4_t_v642 &v642 = *reinterpret_cast<_g4_t_v642 *>(_g4_sf + 816u);
  _g4_t_v643 &v643 = *reinterpret_cast<_g4_t_v643 *>(_g4_sf + 820u);
  _g4_t_v644 &v644 = *reinterpret_cast<_g4_t_v644 *>(_g4_sf + 824u);
  _g4_t_v645 &v645 = *reinterpret_cast<_g4_t_v645 *>(_g4_sf + 828u);
  _g4_t_v646 &v646 = *reinterpret_cast<_g4_t_v646 *>(_g4_sf + 832u);
  _g4_t_v647 &v647 = *reinterpret_cast<_g4_t_v647 *>(_g4_sf + 836u);
  _g4_t_v648 &v648 = *reinterpret_cast<_g4_t_v648 *>(_g4_sf + 840u);
  _g4_t_v649 &v649 = *reinterpret_cast<_g4_t_v649 *>(_g4_sf + 844u);
  _g4_t_v650 &v650 = *reinterpret_cast<_g4_t_v650 *>(_g4_sf + 848u);
  _g4_t_v651 &v651 = *reinterpret_cast<_g4_t_v651 *>(_g4_sf + 852u);
  _g4_t_v652 &v652 = *reinterpret_cast<_g4_t_v652 *>(_g4_sf + 856u);
  _g4_t_v653 &v653 = *reinterpret_cast<_g4_t_v653 *>(_g4_sf + 860u);
  _g4_t_v654 &v654 = *reinterpret_cast<_g4_t_v654 *>(_g4_sf + 864u);
  _g4_t_v655 &v655 = *reinterpret_cast<_g4_t_v655 *>(_g4_sf + 868u);
  _g4_t_v656 &v656 = *reinterpret_cast<_g4_t_v656 *>(_g4_sf + 872u);
  _g4_t_v657 &v657 = *reinterpret_cast<_g4_t_v657 *>(_g4_sf + 876u);
  _g4_t_v658 &v658 = *reinterpret_cast<_g4_t_v658 *>(_g4_sf + 880u);
  _g4_t_v659 &v659 = *reinterpret_cast<_g4_t_v659 *>(_g4_sf + 884u);
  _g4_t_v660 &v660 = *reinterpret_cast<_g4_t_v660 *>(_g4_sf + 888u);
  _g4_t_v661 &v661 = *reinterpret_cast<_g4_t_v661 *>(_g4_sf + 892u);
  _g4_t_v662 &v662 = *reinterpret_cast<_g4_t_v662 *>(_g4_sf + 896u);
  _g4_t_v663 &v663 = *reinterpret_cast<_g4_t_v663 *>(_g4_sf + 900u);
  _g4_t_v664 &v664 = *reinterpret_cast<_g4_t_v664 *>(_g4_sf + 904u);
  _g4_t_v665 &v665 = *reinterpret_cast<_g4_t_v665 *>(_g4_sf + 908u);
  _g4_t_v666 &v666 = *reinterpret_cast<_g4_t_v666 *>(_g4_sf + 912u);
  _g4_t_v667 &v667 = *reinterpret_cast<_g4_t_v667 *>(_g4_sf + 916u);
  _g4_t_v668 &v668 = *reinterpret_cast<_g4_t_v668 *>(_g4_sf + 920u);
  _g4_t_v669 &v669 = *reinterpret_cast<_g4_t_v669 *>(_g4_sf + 924u);
  _g4_t_v670 &v670 = *reinterpret_cast<_g4_t_v670 *>(_g4_sf + 928u);
  _g4_t_v671 &v671 = *reinterpret_cast<_g4_t_v671 *>(_g4_sf + 932u);
  _g4_t_v672 &v672 = *reinterpret_cast<_g4_t_v672 *>(_g4_sf + 936u);
  _g4_t_v673 &v673 = *reinterpret_cast<_g4_t_v673 *>(_g4_sf + 940u);
  _g4_t_v674 &v674 = *reinterpret_cast<_g4_t_v674 *>(_g4_sf + 944u);
  _g4_t_v675 &v675 = *reinterpret_cast<_g4_t_v675 *>(_g4_sf + 948u);
  _g4_t_v676 &v676 = *reinterpret_cast<_g4_t_v676 *>(_g4_sf + 952u);
  _g4_t_v677 &v677 = *reinterpret_cast<_g4_t_v677 *>(_g4_sf + 956u);
  _g4_t_v678 &v678 = *reinterpret_cast<_g4_t_v678 *>(_g4_sf + 960u);
  _g4_t_v679 &v679 = *reinterpret_cast<_g4_t_v679 *>(_g4_sf + 964u);
  _g4_t_v680 &v680 = *reinterpret_cast<_g4_t_v680 *>(_g4_sf + 968u);
  _g4_t_v681 &v681 = *reinterpret_cast<_g4_t_v681 *>(_g4_sf + 972u);
  _g4_t_v682 &v682 = *reinterpret_cast<_g4_t_v682 *>(_g4_sf + 976u);
  _g4_t_v683 &v683 = *reinterpret_cast<_g4_t_v683 *>(_g4_sf + 980u);
  _g4_t_v684 &v684 = *reinterpret_cast<_g4_t_v684 *>(_g4_sf + 984u);
  _g4_t_v685 &v685 = *reinterpret_cast<_g4_t_v685 *>(_g4_sf + 988u);
  _g4_t_v686 &v686 = *reinterpret_cast<_g4_t_v686 *>(_g4_sf + 992u);
  _g4_t_v687 &v687 = *reinterpret_cast<_g4_t_v687 *>(_g4_sf + 996u);
  _g4_t_v688 &v688 = *reinterpret_cast<_g4_t_v688 *>(_g4_sf + 1000u);
  _g4_t_v689 &v689 = *reinterpret_cast<_g4_t_v689 *>(_g4_sf + 1004u);
  _g4_t_v690 &v690 = *reinterpret_cast<_g4_t_v690 *>(_g4_sf + 1008u);
  _g4_t_v691 &v691 = *reinterpret_cast<_g4_t_v691 *>(_g4_sf + 1012u);
  _g4_t_v692 &v692 = *reinterpret_cast<_g4_t_v692 *>(_g4_sf + 1016u);
  _g4_t_v693 &v693 = *reinterpret_cast<_g4_t_v693 *>(_g4_sf + 1020u);
  _g4_t_v694 &v694 = *reinterpret_cast<_g4_t_v694 *>(_g4_sf + 1024u);
  _g4_t_v695 &v695 = *reinterpret_cast<_g4_t_v695 *>(_g4_sf + 1028u);
  _g4_t_v696 &v696 = *reinterpret_cast<_g4_t_v696 *>(_g4_sf + 1032u);
  _g4_t_v697 &v697 = *reinterpret_cast<_g4_t_v697 *>(_g4_sf + 1036u);
  _g4_t_v698 &v698 = *reinterpret_cast<_g4_t_v698 *>(_g4_sf + 1040u);
  _g4_t_v699 &v699 = *reinterpret_cast<_g4_t_v699 *>(_g4_sf + 1044u);
  _g4_t_v700 &v700 = *reinterpret_cast<_g4_t_v700 *>(_g4_sf + 1048u);
  _g4_t_v701 &v701 = *reinterpret_cast<_g4_t_v701 *>(_g4_sf + 1052u);
  _g4_t_v702 &v702 = *reinterpret_cast<_g4_t_v702 *>(_g4_sf + 1056u);
  _g4_t_v703 &v703 = *reinterpret_cast<_g4_t_v703 *>(_g4_sf + 1060u);
  _g4_t_v704 &v704 = *reinterpret_cast<_g4_t_v704 *>(_g4_sf + 1064u);
  _g4_t_v705 &v705 = *reinterpret_cast<_g4_t_v705 *>(_g4_sf + 1068u);
  _g4_t_v706 &v706 = *reinterpret_cast<_g4_t_v706 *>(_g4_sf + 1072u);
  _g4_t_v707 &v707 = *reinterpret_cast<_g4_t_v707 *>(_g4_sf + 1076u);
  _g4_t_v708 &v708 = *reinterpret_cast<_g4_t_v708 *>(_g4_sf + 1080u);
  _g4_t_v709 &v709 = *reinterpret_cast<_g4_t_v709 *>(_g4_sf + 1084u);
  _g4_t_v710 &v710 = *reinterpret_cast<_g4_t_v710 *>(_g4_sf + 1088u);
  _g4_t_v711 &v711 = *reinterpret_cast<_g4_t_v711 *>(_g4_sf + 1092u);
  _g4_t_v712 &v712 = *reinterpret_cast<_g4_t_v712 *>(_g4_sf + 1096u);
  _g4_t_v713 &v713 = *reinterpret_cast<_g4_t_v713 *>(_g4_sf + 1100u);
  _g4_t_v714 &v714 = *reinterpret_cast<_g4_t_v714 *>(_g4_sf + 1104u);
  _g4_t_v715 &v715 = *reinterpret_cast<_g4_t_v715 *>(_g4_sf + 1108u);
  _g4_t_v716 &v716 = *reinterpret_cast<_g4_t_v716 *>(_g4_sf + 1112u);
  _g4_t_v717 &v717 = *reinterpret_cast<_g4_t_v717 *>(_g4_sf + 1116u);
  _g4_t_v718 &v718 = *reinterpret_cast<_g4_t_v718 *>(_g4_sf + 1120u);
  _g4_t_v719 &v719 = *reinterpret_cast<_g4_t_v719 *>(_g4_sf + 1124u);
  _g4_t_v720 &v720 = *reinterpret_cast<_g4_t_v720 *>(_g4_sf + 1128u);
  _g4_t_v721 &v721 = *reinterpret_cast<_g4_t_v721 *>(_g4_sf + 1132u);
  _g4_t_v722 &v722 = *reinterpret_cast<_g4_t_v722 *>(_g4_sf + 1136u);
  _g4_t_v723 &v723 = *reinterpret_cast<_g4_t_v723 *>(_g4_sf + 1140u);
  _g4_t_v724 &v724 = *reinterpret_cast<_g4_t_v724 *>(_g4_sf + 1144u);
  _g4_t_v725 &v725 = *reinterpret_cast<_g4_t_v725 *>(_g4_sf + 1148u);
  _g4_t_v726 &v726 = *reinterpret_cast<_g4_t_v726 *>(_g4_sf + 1152u);
  _g4_t_v727 &v727 = *reinterpret_cast<_g4_t_v727 *>(_g4_sf + 1156u);
  _g4_t_v728 &v728 = *reinterpret_cast<_g4_t_v728 *>(_g4_sf + 1160u);
  _g4_t_v729 &v729 = *reinterpret_cast<_g4_t_v729 *>(_g4_sf + 1164u);
  _g4_t_v730 &v730 = *reinterpret_cast<_g4_t_v730 *>(_g4_sf + 1168u);
  _g4_t_v731 &v731 = *reinterpret_cast<_g4_t_v731 *>(_g4_sf + 1172u);
  _g4_t_v732 &v732 = *reinterpret_cast<_g4_t_v732 *>(_g4_sf + 1176u);
  _g4_t_v733 &v733 = *reinterpret_cast<_g4_t_v733 *>(_g4_sf + 1180u);
  _g4_t_v734 &v734 = *reinterpret_cast<_g4_t_v734 *>(_g4_sf + 1184u);
  _g4_t_v735 &v735 = *reinterpret_cast<_g4_t_v735 *>(_g4_sf + 1188u);
  _g4_t_v736 &v736 = *reinterpret_cast<_g4_t_v736 *>(_g4_sf + 1192u);
  _g4_t_v737 &v737 = *reinterpret_cast<_g4_t_v737 *>(_g4_sf + 1196u);
  _g4_t_v738 &v738 = *reinterpret_cast<_g4_t_v738 *>(_g4_sf + 1200u);
  _g4_t_v739 &v739 = *reinterpret_cast<_g4_t_v739 *>(_g4_sf + 1204u);
  _g4_t_v740 &v740 = *reinterpret_cast<_g4_t_v740 *>(_g4_sf + 1208u);
  _g4_t_v741 &v741 = *reinterpret_cast<_g4_t_v741 *>(_g4_sf + 1212u);
  _g4_t_v742 &v742 = *reinterpret_cast<_g4_t_v742 *>(_g4_sf + 1216u);
  _g4_t_v743 &v743 = *reinterpret_cast<_g4_t_v743 *>(_g4_sf + 1220u);
  _g4_t_v744 &v744 = *reinterpret_cast<_g4_t_v744 *>(_g4_sf + 1224u);
  _g4_t_v745 &v745 = *reinterpret_cast<_g4_t_v745 *>(_g4_sf + 1228u);
  _g4_t_v746 &v746 = *reinterpret_cast<_g4_t_v746 *>(_g4_sf + 1232u);
  _g4_t_v747 &v747 = *reinterpret_cast<_g4_t_v747 *>(_g4_sf + 1236u);
  _g4_t_v748 &v748 = *reinterpret_cast<_g4_t_v748 *>(_g4_sf + 1240u);
  _g4_t_v749 &v749 = *reinterpret_cast<_g4_t_v749 *>(_g4_sf + 1244u);
  _g4_t_v750 &v750 = *reinterpret_cast<_g4_t_v750 *>(_g4_sf + 1248u);
  _g4_t_v751 &v751 = *reinterpret_cast<_g4_t_v751 *>(_g4_sf + 1252u);
  _g4_t_v752 &v752 = *reinterpret_cast<_g4_t_v752 *>(_g4_sf + 1256u);
  _g4_t_v753 &v753 = *reinterpret_cast<_g4_t_v753 *>(_g4_sf + 1260u);
  _g4_t_v754 &v754 = *reinterpret_cast<_g4_t_v754 *>(_g4_sf + 1264u);
  _g4_t_v755 &v755 = *reinterpret_cast<_g4_t_v755 *>(_g4_sf + 1268u);
  _g4_t_v756 &v756 = *reinterpret_cast<_g4_t_v756 *>(_g4_sf + 1272u);
  _g4_t_v757 &v757 = *reinterpret_cast<_g4_t_v757 *>(_g4_sf + 1276u);
  _g4_t_v758 &v758 = *reinterpret_cast<_g4_t_v758 *>(_g4_sf + 1280u);
  _g4_t_v759 &v759 = *reinterpret_cast<_g4_t_v759 *>(_g4_sf + 1284u);
  _g4_t_v760 &v760 = *reinterpret_cast<_g4_t_v760 *>(_g4_sf + 1288u);
  _g4_t_v761 &v761 = *reinterpret_cast<_g4_t_v761 *>(_g4_sf + 1292u);
  _g4_t_v762 &v762 = *reinterpret_cast<_g4_t_v762 *>(_g4_sf + 1296u);
  _g4_t_v763 &v763 = *reinterpret_cast<_g4_t_v763 *>(_g4_sf + 1300u);
  _g4_t_v764 &v764 = *reinterpret_cast<_g4_t_v764 *>(_g4_sf + 1304u);
  _g4_t_v765 &v765 = *reinterpret_cast<_g4_t_v765 *>(_g4_sf + 1308u);
  _g4_t_v766 &v766 = *reinterpret_cast<_g4_t_v766 *>(_g4_sf + 1312u);
  _g4_t_v767 &v767 = *reinterpret_cast<_g4_t_v767 *>(_g4_sf + 1316u);
  _g4_t_v768 &v768 = *reinterpret_cast<_g4_t_v768 *>(_g4_sf + 1320u);
  _g4_t_v769 &v769 = *reinterpret_cast<_g4_t_v769 *>(_g4_sf + 1324u);
  _g4_t_v770 &v770 = *reinterpret_cast<_g4_t_v770 *>(_g4_sf + 1328u);
  _g4_t_v771 &v771 = *reinterpret_cast<_g4_t_v771 *>(_g4_sf + 1332u);
  _g4_t_v772 &v772 = *reinterpret_cast<_g4_t_v772 *>(_g4_sf + 1336u);
  _g4_t_v773 &v773 = *reinterpret_cast<_g4_t_v773 *>(_g4_sf + 1340u);
  _g4_t_v774 &v774 = *reinterpret_cast<_g4_t_v774 *>(_g4_sf + 1344u);
  _g4_t_v775 &v775 = *reinterpret_cast<_g4_t_v775 *>(_g4_sf + 1348u);
  _g4_t_v776 &v776 = *reinterpret_cast<_g4_t_v776 *>(_g4_sf + 1352u);
  _g4_t_v777 &v777 = *reinterpret_cast<_g4_t_v777 *>(_g4_sf + 1356u);
  _g4_t_v778 &v778 = *reinterpret_cast<_g4_t_v778 *>(_g4_sf + 1360u);
  _g4_t_v779 &v779 = *reinterpret_cast<_g4_t_v779 *>(_g4_sf + 1364u);
  _g4_t_v780 &v780 = *reinterpret_cast<_g4_t_v780 *>(_g4_sf + 1368u);
  _g4_t_v781 &v781 = *reinterpret_cast<_g4_t_v781 *>(_g4_sf + 1372u);
  _g4_t_v782 &v782 = *reinterpret_cast<_g4_t_v782 *>(_g4_sf + 1376u);
  _g4_t_v783 &v783 = *reinterpret_cast<_g4_t_v783 *>(_g4_sf + 1380u);
  _g4_t_v784 &v784 = *reinterpret_cast<_g4_t_v784 *>(_g4_sf + 1384u);
  _g4_t_v785 &v785 = *reinterpret_cast<_g4_t_v785 *>(_g4_sf + 1388u);
  _g4_t_v786 &v786 = *reinterpret_cast<_g4_t_v786 *>(_g4_sf + 1392u);
  _g4_t_v787 &v787 = *reinterpret_cast<_g4_t_v787 *>(_g4_sf + 1396u);
  _g4_t_v788 &v788 = *reinterpret_cast<_g4_t_v788 *>(_g4_sf + 1400u);
  _g4_t_v789 &v789 = *reinterpret_cast<_g4_t_v789 *>(_g4_sf + 1404u);
  _g4_t_v790 &v790 = *reinterpret_cast<_g4_t_v790 *>(_g4_sf + 1408u);
  _g4_t_v791 &v791 = *reinterpret_cast<_g4_t_v791 *>(_g4_sf + 1412u);
  _g4_t_v792 &v792 = *reinterpret_cast<_g4_t_v792 *>(_g4_sf + 1416u);
  _g4_t_v793 &v793 = *reinterpret_cast<_g4_t_v793 *>(_g4_sf + 1420u);
  _g4_t_v794 &v794 = *reinterpret_cast<_g4_t_v794 *>(_g4_sf + 1424u);
  _g4_t_v795 &v795 = *reinterpret_cast<_g4_t_v795 *>(_g4_sf + 1428u);
  _g4_t_v796 &v796 = *reinterpret_cast<_g4_t_v796 *>(_g4_sf + 1432u);
  _g4_t_v797 &v797 = *reinterpret_cast<_g4_t_v797 *>(_g4_sf + 1436u);
  _g4_t_v798 &v798 = *reinterpret_cast<_g4_t_v798 *>(_g4_sf + 1440u);
  _g4_t_v799 &v799 = *reinterpret_cast<_g4_t_v799 *>(_g4_sf + 1444u);
  _g4_t_v800 &v800 = *reinterpret_cast<_g4_t_v800 *>(_g4_sf + 1448u);
  _g4_t_v801 &v801 = *reinterpret_cast<_g4_t_v801 *>(_g4_sf + 1452u);
  _g4_t_v802 &v802 = *reinterpret_cast<_g4_t_v802 *>(_g4_sf + 1456u);
  _g4_t_v803 &v803 = *reinterpret_cast<_g4_t_v803 *>(_g4_sf + 1460u);
  _g4_t_v804 &v804 = *reinterpret_cast<_g4_t_v804 *>(_g4_sf + 1464u);
  _g4_t_v805 &v805 = *reinterpret_cast<_g4_t_v805 *>(_g4_sf + 1468u);
  _g4_t_v806 &v806 = *reinterpret_cast<_g4_t_v806 *>(_g4_sf + 1472u);
  _g4_t_v807 &v807 = *reinterpret_cast<_g4_t_v807 *>(_g4_sf + 1476u);
  _g4_t_v808 &v808 = *reinterpret_cast<_g4_t_v808 *>(_g4_sf + 1480u);
  _g4_t_v809 &v809 = *reinterpret_cast<_g4_t_v809 *>(_g4_sf + 1484u);
  _g4_t_v810 &v810 = *reinterpret_cast<_g4_t_v810 *>(_g4_sf + 1488u);
  _g4_t_v811 &v811 = *reinterpret_cast<_g4_t_v811 *>(_g4_sf + 1492u);
  _g4_t_v812 &v812 = *reinterpret_cast<_g4_t_v812 *>(_g4_sf + 1496u);
  _g4_t_v813 &v813 = *reinterpret_cast<_g4_t_v813 *>(_g4_sf + 1500u);
  _g4_t_v814 &v814 = *reinterpret_cast<_g4_t_v814 *>(_g4_sf + 1504u);
  _g4_t_v815 &v815 = *reinterpret_cast<_g4_t_v815 *>(_g4_sf + 1508u);
  _g4_t_v816 &v816 = *reinterpret_cast<_g4_t_v816 *>(_g4_sf + 1512u);
  _g4_t_v817 &v817 = *reinterpret_cast<_g4_t_v817 *>(_g4_sf + 1516u);
  _g4_t_v818 &v818 = *reinterpret_cast<_g4_t_v818 *>(_g4_sf + 1520u);
  _g4_t_v819 &v819 = *reinterpret_cast<_g4_t_v819 *>(_g4_sf + 1524u);
  _g4_t_v820 &v820 = *reinterpret_cast<_g4_t_v820 *>(_g4_sf + 1528u);
  _g4_t_v821 &v821 = *reinterpret_cast<_g4_t_v821 *>(_g4_sf + 1532u);
  _g4_t_v822 &v822 = *reinterpret_cast<_g4_t_v822 *>(_g4_sf + 1536u);
  _g4_t_v823 &v823 = *reinterpret_cast<_g4_t_v823 *>(_g4_sf + 1540u);
  _g4_t_v824 &v824 = *reinterpret_cast<_g4_t_v824 *>(_g4_sf + 1544u);
  _g4_t_v825 &v825 = *reinterpret_cast<_g4_t_v825 *>(_g4_sf + 1548u);
  _g4_t_v826 &v826 = *reinterpret_cast<_g4_t_v826 *>(_g4_sf + 1552u);
  _g4_t_v827 &v827 = *reinterpret_cast<_g4_t_v827 *>(_g4_sf + 1556u);
  _g4_t_v828 &v828 = *reinterpret_cast<_g4_t_v828 *>(_g4_sf + 1560u);
  _g4_t_v829 &v829 = *reinterpret_cast<_g4_t_v829 *>(_g4_sf + 1564u);
  _g4_t_v830 &v830 = *reinterpret_cast<_g4_t_v830 *>(_g4_sf + 1568u);
  _g4_t_v831 &v831 = *reinterpret_cast<_g4_t_v831 *>(_g4_sf + 1572u);
  _g4_t_v832 &v832 = *reinterpret_cast<_g4_t_v832 *>(_g4_sf + 1576u);
  _g4_t_v833 &v833 = *reinterpret_cast<_g4_t_v833 *>(_g4_sf + 1580u);
  _g4_t_v834 &v834 = *reinterpret_cast<_g4_t_v834 *>(_g4_sf + 1584u);
  _g4_t_v835 &v835 = *reinterpret_cast<_g4_t_v835 *>(_g4_sf + 1588u);
  _g4_t_v836 &v836 = *reinterpret_cast<_g4_t_v836 *>(_g4_sf + 1592u);
  _g4_t_v837 &v837 = *reinterpret_cast<_g4_t_v837 *>(_g4_sf + 1596u);
  _g4_t_v838 &v838 = *reinterpret_cast<_g4_t_v838 *>(_g4_sf + 1600u);
  _g4_t_v839 &v839 = *reinterpret_cast<_g4_t_v839 *>(_g4_sf + 1604u);
  _g4_t_v840 &v840 = *reinterpret_cast<_g4_t_v840 *>(_g4_sf + 1608u);
  _g4_t_v841 &v841 = *reinterpret_cast<_g4_t_v841 *>(_g4_sf + 1612u);
  _g4_t_v842 &v842 = *reinterpret_cast<_g4_t_v842 *>(_g4_sf + 1616u);
  _g4_t_v843 &v843 = *reinterpret_cast<_g4_t_v843 *>(_g4_sf + 1620u);
  _g4_t_v844 &v844 = *reinterpret_cast<_g4_t_v844 *>(_g4_sf + 1624u);
  _g4_t_v845 &v845 = *reinterpret_cast<_g4_t_v845 *>(_g4_sf + 1628u);
  _g4_t_v846 &v846 = *reinterpret_cast<_g4_t_v846 *>(_g4_sf + 1632u);
  _g4_t_v847 &v847 = *reinterpret_cast<_g4_t_v847 *>(_g4_sf + 1636u);
  _g4_t_v848 &v848 = *reinterpret_cast<_g4_t_v848 *>(_g4_sf + 1640u);
  _g4_t_v849 &v849 = *reinterpret_cast<_g4_t_v849 *>(_g4_sf + 1644u);
  _g4_t_v850 &v850 = *reinterpret_cast<_g4_t_v850 *>(_g4_sf + 1648u);
  _g4_t_v851 &v851 = *reinterpret_cast<_g4_t_v851 *>(_g4_sf + 1652u);
  _g4_t_v852 &v852 = *reinterpret_cast<_g4_t_v852 *>(_g4_sf + 1656u);
  _g4_t_v853 &v853 = *reinterpret_cast<_g4_t_v853 *>(_g4_sf + 1660u);
  _g4_t_v854 &v854 = *reinterpret_cast<_g4_t_v854 *>(_g4_sf + 1664u);
  _g4_t_v855 &v855 = *reinterpret_cast<_g4_t_v855 *>(_g4_sf + 1668u);
  _g4_t_v856 &v856 = *reinterpret_cast<_g4_t_v856 *>(_g4_sf + 1672u);
  _g4_t_v857 &v857 = *reinterpret_cast<_g4_t_v857 *>(_g4_sf + 1676u);
  _g4_t_v858 &v858 = *reinterpret_cast<_g4_t_v858 *>(_g4_sf + 1680u);
  _g4_t_v859 &v859 = *reinterpret_cast<_g4_t_v859 *>(_g4_sf + 1684u);
  _g4_t_v860 &v860 = *reinterpret_cast<_g4_t_v860 *>(_g4_sf + 1688u);
  _g4_t_v861 &v861 = *reinterpret_cast<_g4_t_v861 *>(_g4_sf + 1692u);
  _g4_t_v862 &v862 = *reinterpret_cast<_g4_t_v862 *>(_g4_sf + 1696u);
  _g4_t_v863 &v863 = *reinterpret_cast<_g4_t_v863 *>(_g4_sf + 1700u);
  _g4_t_v864 &v864 = *reinterpret_cast<_g4_t_v864 *>(_g4_sf + 1704u);
  _g4_t_v865 &v865 = *reinterpret_cast<_g4_t_v865 *>(_g4_sf + 1708u);
  _g4_t_v866 &v866 = *reinterpret_cast<_g4_t_v866 *>(_g4_sf + 1712u);
  _g4_t_v867 &v867 = *reinterpret_cast<_g4_t_v867 *>(_g4_sf + 1716u);
  _g4_t_v868 &v868 = *reinterpret_cast<_g4_t_v868 *>(_g4_sf + 1720u);
  _g4_t_v869 &v869 = *reinterpret_cast<_g4_t_v869 *>(_g4_sf + 1724u);
  _g4_t_v870 &v870 = *reinterpret_cast<_g4_t_v870 *>(_g4_sf + 1728u);
  _g4_t_v871 &v871 = *reinterpret_cast<_g4_t_v871 *>(_g4_sf + 1732u);
  _g4_t_v872 &v872 = *reinterpret_cast<_g4_t_v872 *>(_g4_sf + 1736u);
  _g4_t_v873 &v873 = *reinterpret_cast<_g4_t_v873 *>(_g4_sf + 1740u);
  _g4_t_v874 &v874 = *reinterpret_cast<_g4_t_v874 *>(_g4_sf + 1744u);
  _g4_t_v875 &v875 = *reinterpret_cast<_g4_t_v875 *>(_g4_sf + 1748u);
  _g4_t_v876 &v876 = *reinterpret_cast<_g4_t_v876 *>(_g4_sf + 1752u);
  _g4_t_v877 &v877 = *reinterpret_cast<_g4_t_v877 *>(_g4_sf + 1756u);
  _g4_t_v878 &v878 = *reinterpret_cast<_g4_t_v878 *>(_g4_sf + 1760u);
  _g4_t_v879 &v879 = *reinterpret_cast<_g4_t_v879 *>(_g4_sf + 1764u);
  _g4_t_v880 &v880 = *reinterpret_cast<_g4_t_v880 *>(_g4_sf + 1768u);
  _g4_t_v881 &v881 = *reinterpret_cast<_g4_t_v881 *>(_g4_sf + 1772u);
  _g4_t_v882 &v882 = *reinterpret_cast<_g4_t_v882 *>(_g4_sf + 1776u);
  _g4_t_v883 &v883 = *reinterpret_cast<_g4_t_v883 *>(_g4_sf + 1780u);
  _g4_t_v884 &v884 = *reinterpret_cast<_g4_t_v884 *>(_g4_sf + 1784u);
  _g4_t_v885 &v885 = *reinterpret_cast<_g4_t_v885 *>(_g4_sf + 1788u);
  _g4_t_v886 &v886 = *reinterpret_cast<_g4_t_v886 *>(_g4_sf + 1792u);
  _g4_t_v887 &v887 = *reinterpret_cast<_g4_t_v887 *>(_g4_sf + 1796u);
  _g4_t_v888 &v888 = *reinterpret_cast<_g4_t_v888 *>(_g4_sf + 1800u);
  _g4_t_v889 &v889 = *reinterpret_cast<_g4_t_v889 *>(_g4_sf + 1804u);
  _g4_t_v890 &v890 = *reinterpret_cast<_g4_t_v890 *>(_g4_sf + 1808u);
  _g4_t_v891 &v891 = *reinterpret_cast<_g4_t_v891 *>(_g4_sf + 1812u);
  _g4_t_v892 &v892 = *reinterpret_cast<_g4_t_v892 *>(_g4_sf + 1816u);
  _g4_t_v893 &v893 = *reinterpret_cast<_g4_t_v893 *>(_g4_sf + 1820u);
  _g4_t_v894 &v894 = *reinterpret_cast<_g4_t_v894 *>(_g4_sf + 1824u);
  _g4_t_v895 &v895 = *reinterpret_cast<_g4_t_v895 *>(_g4_sf + 1828u);
  _g4_t_v896 &v896 = *reinterpret_cast<_g4_t_v896 *>(_g4_sf + 1832u);
  _g4_t_v897 &v897 = *reinterpret_cast<_g4_t_v897 *>(_g4_sf + 1836u);
  _g4_t_v898 &v898 = *reinterpret_cast<_g4_t_v898 *>(_g4_sf + 1840u);
  _g4_t_v899 &v899 = *reinterpret_cast<_g4_t_v899 *>(_g4_sf + 1844u);
  _g4_t_v900 &v900 = *reinterpret_cast<_g4_t_v900 *>(_g4_sf + 1848u);
  _g4_t_v901 &v901 = *reinterpret_cast<_g4_t_v901 *>(_g4_sf + 1852u);
  _g4_t_v902 &v902 = *reinterpret_cast<_g4_t_v902 *>(_g4_sf + 1856u);
  _g4_t_v903 &v903 = *reinterpret_cast<_g4_t_v903 *>(_g4_sf + 1860u);
  _g4_t_v904 &v904 = *reinterpret_cast<_g4_t_v904 *>(_g4_sf + 1864u);
  _g4_t_v905 &v905 = *reinterpret_cast<_g4_t_v905 *>(_g4_sf + 1868u);
  _g4_t_v906 &v906 = *reinterpret_cast<_g4_t_v906 *>(_g4_sf + 1872u);
  _g4_t_v907 &v907 = *reinterpret_cast<_g4_t_v907 *>(_g4_sf + 1876u);
  _g4_t_v908 &v908 = *reinterpret_cast<_g4_t_v908 *>(_g4_sf + 1880u);
  _g4_t_v909 &v909 = *reinterpret_cast<_g4_t_v909 *>(_g4_sf + 1884u);
  _g4_t_v910 &v910 = *reinterpret_cast<_g4_t_v910 *>(_g4_sf + 1888u);
  _g4_t_v911 &v911 = *reinterpret_cast<_g4_t_v911 *>(_g4_sf + 1892u);
  _g4_t_v912 &v912 = *reinterpret_cast<_g4_t_v912 *>(_g4_sf + 1896u);
  _g4_t_v913 &v913 = *reinterpret_cast<_g4_t_v913 *>(_g4_sf + 1900u);
  _g4_t_v914 &v914 = *reinterpret_cast<_g4_t_v914 *>(_g4_sf + 1904u);
  _g4_t_v915 &v915 = *reinterpret_cast<_g4_t_v915 *>(_g4_sf + 1908u);
  _g4_t_v916 &v916 = *reinterpret_cast<_g4_t_v916 *>(_g4_sf + 1912u);
  _g4_t_v917 &v917 = *reinterpret_cast<_g4_t_v917 *>(_g4_sf + 1916u);
  _g4_t_v918 &v918 = *reinterpret_cast<_g4_t_v918 *>(_g4_sf + 1920u);
  _g4_t_v919 &v919 = *reinterpret_cast<_g4_t_v919 *>(_g4_sf + 1924u);
  _g4_t_v920 &v920 = *reinterpret_cast<_g4_t_v920 *>(_g4_sf + 1928u);
  _g4_t_v921 &v921 = *reinterpret_cast<_g4_t_v921 *>(_g4_sf + 1932u);
  _g4_t_v922 &v922 = *reinterpret_cast<_g4_t_v922 *>(_g4_sf + 1936u);
  _g4_t_v923 &v923 = *reinterpret_cast<_g4_t_v923 *>(_g4_sf + 1940u);
  _g4_t_v924 &v924 = *reinterpret_cast<_g4_t_v924 *>(_g4_sf + 1944u);
  _g4_t_v925 &v925 = *reinterpret_cast<_g4_t_v925 *>(_g4_sf + 1948u);
  _g4_t_v926 &v926 = *reinterpret_cast<_g4_t_v926 *>(_g4_sf + 1952u);
  _g4_t_v927 &v927 = *reinterpret_cast<_g4_t_v927 *>(_g4_sf + 1956u);
  _g4_t_v928 &v928 = *reinterpret_cast<_g4_t_v928 *>(_g4_sf + 1960u);
  _g4_t_v929 &v929 = *reinterpret_cast<_g4_t_v929 *>(_g4_sf + 1964u);
  _g4_t_v930 &v930 = *reinterpret_cast<_g4_t_v930 *>(_g4_sf + 1968u);
  _g4_t_v931 &v931 = *reinterpret_cast<_g4_t_v931 *>(_g4_sf + 1972u);
  _g4_t_v932 &v932 = *reinterpret_cast<_g4_t_v932 *>(_g4_sf + 1976u);
  _g4_t_v933 &v933 = *reinterpret_cast<_g4_t_v933 *>(_g4_sf + 1980u);
  _g4_t_v934 &v934 = *reinterpret_cast<_g4_t_v934 *>(_g4_sf + 1984u);
  _g4_t_v935 &v935 = *reinterpret_cast<_g4_t_v935 *>(_g4_sf + 1988u);
  _g4_t_v936 &v936 = *reinterpret_cast<_g4_t_v936 *>(_g4_sf + 1992u);
  _g4_t_v937 &v937 = *reinterpret_cast<_g4_t_v937 *>(_g4_sf + 1996u);
  _g4_t_v938 &v938 = *reinterpret_cast<_g4_t_v938 *>(_g4_sf + 2000u);
  _g4_t_v939 &v939 = *reinterpret_cast<_g4_t_v939 *>(_g4_sf + 2004u);
  _g4_t_v940 &v940 = *reinterpret_cast<_g4_t_v940 *>(_g4_sf + 2008u);
  _g4_t_v941 &v941 = *reinterpret_cast<_g4_t_v941 *>(_g4_sf + 2012u);
  _g4_t_v942 &v942 = *reinterpret_cast<_g4_t_v942 *>(_g4_sf + 2016u);
  _g4_t_v943 &v943 = *reinterpret_cast<_g4_t_v943 *>(_g4_sf + 2020u);
  _g4_t_v944 &v944 = *reinterpret_cast<_g4_t_v944 *>(_g4_sf + 2024u);
  _g4_t_v945 &v945 = *reinterpret_cast<_g4_t_v945 *>(_g4_sf + 2028u);
  _g4_t_v946 &v946 = *reinterpret_cast<_g4_t_v946 *>(_g4_sf + 2032u);
  _g4_t_v947 &v947 = *reinterpret_cast<_g4_t_v947 *>(_g4_sf + 2036u);
  _g4_t_v948 &v948 = *reinterpret_cast<_g4_t_v948 *>(_g4_sf + 2040u);
  _g4_t_v949 &v949 = *reinterpret_cast<_g4_t_v949 *>(_g4_sf + 2044u);
  _g4_t_v950 &v950 = *reinterpret_cast<_g4_t_v950 *>(_g4_sf + 2048u);
  _g4_t_v951 &v951 = *reinterpret_cast<_g4_t_v951 *>(_g4_sf + 2052u);
  _g4_t_v952 &v952 = *reinterpret_cast<_g4_t_v952 *>(_g4_sf + 2056u);
  _g4_t_v953 &v953 = *reinterpret_cast<_g4_t_v953 *>(_g4_sf + 2060u);
  _g4_t_v954 &v954 = *reinterpret_cast<_g4_t_v954 *>(_g4_sf + 2064u);
  _g4_t_v955 &v955 = *reinterpret_cast<_g4_t_v955 *>(_g4_sf + 2068u);
  _g4_t_v956 &v956 = *reinterpret_cast<_g4_t_v956 *>(_g4_sf + 2072u);
  _g4_t_v957 &v957 = *reinterpret_cast<_g4_t_v957 *>(_g4_sf + 2076u);
  _g4_t_v958 &v958 = *reinterpret_cast<_g4_t_v958 *>(_g4_sf + 2080u);
  _g4_t_v959 &v959 = *reinterpret_cast<_g4_t_v959 *>(_g4_sf + 2084u);
  _g4_t_v960 &v960 = *reinterpret_cast<_g4_t_v960 *>(_g4_sf + 2088u);
  _g4_t_v961 &v961 = *reinterpret_cast<_g4_t_v961 *>(_g4_sf + 2092u);
  _g4_t_v962 &v962 = *reinterpret_cast<_g4_t_v962 *>(_g4_sf + 2096u);
  _g4_t_v963 &v963 = *reinterpret_cast<_g4_t_v963 *>(_g4_sf + 2100u);
  _g4_t_v964 &v964 = *reinterpret_cast<_g4_t_v964 *>(_g4_sf + 2104u);
  _g4_t_v965 &v965 = *reinterpret_cast<_g4_t_v965 *>(_g4_sf + 2108u);
  _g4_t_v966 &v966 = *reinterpret_cast<_g4_t_v966 *>(_g4_sf + 2112u);
  _g4_t_v967 &v967 = *reinterpret_cast<_g4_t_v967 *>(_g4_sf + 2116u);
  _g4_t_v968 &v968 = *reinterpret_cast<_g4_t_v968 *>(_g4_sf + 2120u);
  _g4_t_v969 &v969 = *reinterpret_cast<_g4_t_v969 *>(_g4_sf + 2124u);
  _g4_t_v970 &v970 = *reinterpret_cast<_g4_t_v970 *>(_g4_sf + 2128u);
  _g4_t_v971 &v971 = *reinterpret_cast<_g4_t_v971 *>(_g4_sf + 2132u);
  _g4_t_v972 &v972 = *reinterpret_cast<_g4_t_v972 *>(_g4_sf + 2136u);
  _g4_t_v973 &v973 = *reinterpret_cast<_g4_t_v973 *>(_g4_sf + 2140u);
  _g4_t_v974 &v974 = *reinterpret_cast<_g4_t_v974 *>(_g4_sf + 2144u);
  _g4_t_v975 &v975 = *reinterpret_cast<_g4_t_v975 *>(_g4_sf + 2148u);
  _g4_t_v976 &v976 = *reinterpret_cast<_g4_t_v976 *>(_g4_sf + 2152u);
  _g4_t_v977 &v977 = *reinterpret_cast<_g4_t_v977 *>(_g4_sf + 2156u);
  _g4_t_v978 &v978 = *reinterpret_cast<_g4_t_v978 *>(_g4_sf + 2160u);
  _g4_t_v979 &v979 = *reinterpret_cast<_g4_t_v979 *>(_g4_sf + 2164u);
  _g4_t_v980 &v980 = *reinterpret_cast<_g4_t_v980 *>(_g4_sf + 2168u);
  _g4_t_v981 &v981 = *reinterpret_cast<_g4_t_v981 *>(_g4_sf + 2172u);
  _g4_t_v982 &v982 = *reinterpret_cast<_g4_t_v982 *>(_g4_sf + 2176u);
  _g4_t_v983 &v983 = *reinterpret_cast<_g4_t_v983 *>(_g4_sf + 2180u);
  _g4_t_v984 &v984 = *reinterpret_cast<_g4_t_v984 *>(_g4_sf + 2184u);
  _g4_t_v985 &v985 = *reinterpret_cast<_g4_t_v985 *>(_g4_sf + 2188u);
  _g4_t_v986 &v986 = *reinterpret_cast<_g4_t_v986 *>(_g4_sf + 2192u);
  _g4_t_v987 &v987 = *reinterpret_cast<_g4_t_v987 *>(_g4_sf + 2196u);
  _g4_t_v988 &v988 = *reinterpret_cast<_g4_t_v988 *>(_g4_sf + 2200u);
  _g4_t_v989 &v989 = *reinterpret_cast<_g4_t_v989 *>(_g4_sf + 2204u);
  _g4_t_v990 &v990 = *reinterpret_cast<_g4_t_v990 *>(_g4_sf + 2208u);
  _g4_t_v991 &v991 = *reinterpret_cast<_g4_t_v991 *>(_g4_sf + 2212u);
  _g4_t_v992 &v992 = *reinterpret_cast<_g4_t_v992 *>(_g4_sf + 2216u);
  _g4_t_v993 &v993 = *reinterpret_cast<_g4_t_v993 *>(_g4_sf + 2220u);
  _g4_t_v994 &v994 = *reinterpret_cast<_g4_t_v994 *>(_g4_sf + 2224u);
  _g4_t_v995 &v995 = *reinterpret_cast<_g4_t_v995 *>(_g4_sf + 2228u);
  _g4_t_v996 &v996 = *reinterpret_cast<_g4_t_v996 *>(_g4_sf + 2232u);
  _g4_t_v997 &v997 = *reinterpret_cast<_g4_t_v997 *>(_g4_sf + 2236u);
  _g4_t_v998 &v998 = *reinterpret_cast<_g4_t_v998 *>(_g4_sf + 2240u);
  _g4_t_v999 &v999 = *reinterpret_cast<_g4_t_v999 *>(_g4_sf + 2244u);
  _g4_t_v1000 &v1000 = *reinterpret_cast<_g4_t_v1000 *>(_g4_sf + 2248u);
  _g4_t_v1001 &v1001 = *reinterpret_cast<_g4_t_v1001 *>(_g4_sf + 2252u);
  _g4_t_v1002 &v1002 = *reinterpret_cast<_g4_t_v1002 *>(_g4_sf + 2256u);
  _g4_t_v1003 &v1003 = *reinterpret_cast<_g4_t_v1003 *>(_g4_sf + 2260u);
  _g4_t_v1004 &v1004 = *reinterpret_cast<_g4_t_v1004 *>(_g4_sf + 2264u);
  _g4_t_v1005 &v1005 = *reinterpret_cast<_g4_t_v1005 *>(_g4_sf + 2268u);
  _g4_t_v1006 &v1006 = *reinterpret_cast<_g4_t_v1006 *>(_g4_sf + 2272u);
  _g4_t_v1007 &v1007 = *reinterpret_cast<_g4_t_v1007 *>(_g4_sf + 2276u);
  _g4_t_v1008 &v1008 = *reinterpret_cast<_g4_t_v1008 *>(_g4_sf + 2280u);
  _g4_t_v1009 &v1009 = *reinterpret_cast<_g4_t_v1009 *>(_g4_sf + 2284u);
  _g4_t_v1010 &v1010 = *reinterpret_cast<_g4_t_v1010 *>(_g4_sf + 2288u);
  _g4_t_v1011 &v1011 = *reinterpret_cast<_g4_t_v1011 *>(_g4_sf + 2292u);
  _g4_t_v1012 &v1012 = *reinterpret_cast<_g4_t_v1012 *>(_g4_sf + 2296u);
  _g4_t_v1013 &v1013 = *reinterpret_cast<_g4_t_v1013 *>(_g4_sf + 2300u);
  _g4_t_v1014 &v1014 = *reinterpret_cast<_g4_t_v1014 *>(_g4_sf + 2304u);
  _g4_t_v1015 &v1015 = *reinterpret_cast<_g4_t_v1015 *>(_g4_sf + 2308u);
  _g4_t_v1016 &v1016 = *reinterpret_cast<_g4_t_v1016 *>(_g4_sf + 2312u);
  _g4_t_v1017 &v1017 = *reinterpret_cast<_g4_t_v1017 *>(_g4_sf + 2316u);
  _g4_t_v1018 &v1018 = *reinterpret_cast<_g4_t_v1018 *>(_g4_sf + 2320u);
  _g4_t_v1019 &v1019 = *reinterpret_cast<_g4_t_v1019 *>(_g4_sf + 2324u);
  _g4_t_v1020 &v1020 = *reinterpret_cast<_g4_t_v1020 *>(_g4_sf + 2328u);
  _g4_t_v1021 &v1021 = *reinterpret_cast<_g4_t_v1021 *>(_g4_sf + 2332u);
  _g4_t_v1022 &v1022 = *reinterpret_cast<_g4_t_v1022 *>(_g4_sf + 2336u);
  _g4_t_v1023 &v1023 = *reinterpret_cast<_g4_t_v1023 *>(_g4_sf + 2340u);
  _g4_t_v1024 &v1024 = *reinterpret_cast<_g4_t_v1024 *>(_g4_sf + 2344u);
  _g4_t_v1025 &v1025 = *reinterpret_cast<_g4_t_v1025 *>(_g4_sf + 2348u);
  _g4_t_v1026 &v1026 = *reinterpret_cast<_g4_t_v1026 *>(_g4_sf + 2352u);
  _g4_t_v1027 &v1027 = *reinterpret_cast<_g4_t_v1027 *>(_g4_sf + 2356u);
  _g4_t_v1028 &v1028 = *reinterpret_cast<_g4_t_v1028 *>(_g4_sf + 2360u);
  _g4_t_v1029 &v1029 = *reinterpret_cast<_g4_t_v1029 *>(_g4_sf + 2364u);
  _g4_t_v1030 &v1030 = *reinterpret_cast<_g4_t_v1030 *>(_g4_sf + 2368u);
  _g4_t_v1031 &v1031 = *reinterpret_cast<_g4_t_v1031 *>(_g4_sf + 2372u);
  _g4_t_v1032 &v1032 = *reinterpret_cast<_g4_t_v1032 *>(_g4_sf + 2376u);
  _g4_t_v1033 &v1033 = *reinterpret_cast<_g4_t_v1033 *>(_g4_sf + 2380u);
  _g4_t_v1034 &v1034 = *reinterpret_cast<_g4_t_v1034 *>(_g4_sf + 2384u);
  _g4_t_v1035 &v1035 = *reinterpret_cast<_g4_t_v1035 *>(_g4_sf + 2388u);
  _g4_t_v1036 &v1036 = *reinterpret_cast<_g4_t_v1036 *>(_g4_sf + 2392u);
  _g4_t_v1037 &v1037 = *reinterpret_cast<_g4_t_v1037 *>(_g4_sf + 2396u);
  _g4_t_v1038 &v1038 = *reinterpret_cast<_g4_t_v1038 *>(_g4_sf + 2400u);
  _g4_t_v1039 &v1039 = *reinterpret_cast<_g4_t_v1039 *>(_g4_sf + 2404u);
  _g4_t_v1040 &v1040 = *reinterpret_cast<_g4_t_v1040 *>(_g4_sf + 2408u);
  _g4_t_v1041 &v1041 = *reinterpret_cast<_g4_t_v1041 *>(_g4_sf + 2412u);
  _g4_t_v1042 &v1042 = *reinterpret_cast<_g4_t_v1042 *>(_g4_sf + 2416u);
  _g4_t_v1043 &v1043 = *reinterpret_cast<_g4_t_v1043 *>(_g4_sf + 2420u);
  _g4_t_v1044 &v1044 = *reinterpret_cast<_g4_t_v1044 *>(_g4_sf + 2424u);
  _g4_t_v1045 &v1045 = *reinterpret_cast<_g4_t_v1045 *>(_g4_sf + 2428u);
  _g4_t_v1046 &v1046 = *reinterpret_cast<_g4_t_v1046 *>(_g4_sf + 2432u);
  _g4_t_v1047 &v1047 = *reinterpret_cast<_g4_t_v1047 *>(_g4_sf + 2436u);
  _g4_t_v1048 &v1048 = *reinterpret_cast<_g4_t_v1048 *>(_g4_sf + 2440u);
  _g4_t_v1049 &v1049 = *reinterpret_cast<_g4_t_v1049 *>(_g4_sf + 2444u);
  _g4_t_v1050 &v1050 = *reinterpret_cast<_g4_t_v1050 *>(_g4_sf + 2448u);
  _g4_t_v1051 &v1051 = *reinterpret_cast<_g4_t_v1051 *>(_g4_sf + 2452u);
  _g4_t_v1052 &v1052 = *reinterpret_cast<_g4_t_v1052 *>(_g4_sf + 2456u);
  _g4_t_v1053 &v1053 = *reinterpret_cast<_g4_t_v1053 *>(_g4_sf + 2460u);
  _g4_t_v1054 &v1054 = *reinterpret_cast<_g4_t_v1054 *>(_g4_sf + 2464u);
  _g4_t_v1055 &v1055 = *reinterpret_cast<_g4_t_v1055 *>(_g4_sf + 2468u);
  _g4_t_v1056 &v1056 = *reinterpret_cast<_g4_t_v1056 *>(_g4_sf + 2472u);
  _g4_t_v1057 &v1057 = *reinterpret_cast<_g4_t_v1057 *>(_g4_sf + 2476u);
  _g4_t_v1058 &v1058 = *reinterpret_cast<_g4_t_v1058 *>(_g4_sf + 2480u);
  _g4_t_v1059 &v1059 = *reinterpret_cast<_g4_t_v1059 *>(_g4_sf + 2484u);
  _g4_t_v1060 &v1060 = *reinterpret_cast<_g4_t_v1060 *>(_g4_sf + 2488u);
  _g4_t_v1061 &v1061 = *reinterpret_cast<_g4_t_v1061 *>(_g4_sf + 2492u);
  _g4_t_v1062 &v1062 = *reinterpret_cast<_g4_t_v1062 *>(_g4_sf + 2496u);
  _g4_t_v1063 &v1063 = *reinterpret_cast<_g4_t_v1063 *>(_g4_sf + 2500u);
  _g4_t_v1064 &v1064 = *reinterpret_cast<_g4_t_v1064 *>(_g4_sf + 2504u);
  _g4_t_v1065 &v1065 = *reinterpret_cast<_g4_t_v1065 *>(_g4_sf + 2508u);
  _g4_t_v1066 &v1066 = *reinterpret_cast<_g4_t_v1066 *>(_g4_sf + 2512u);
  _g4_t_v1067 &v1067 = *reinterpret_cast<_g4_t_v1067 *>(_g4_sf + 2516u);
  _g4_t_v1068 &v1068 = *reinterpret_cast<_g4_t_v1068 *>(_g4_sf + 2520u);
  _g4_t_v1069 &v1069 = *reinterpret_cast<_g4_t_v1069 *>(_g4_sf + 2524u);
  _g4_t_v1070 &v1070 = *reinterpret_cast<_g4_t_v1070 *>(_g4_sf + 2528u);
  _g4_t_v1071 &v1071 = *reinterpret_cast<_g4_t_v1071 *>(_g4_sf + 2532u);
  _g4_t_v1072 &v1072 = *reinterpret_cast<_g4_t_v1072 *>(_g4_sf + 2536u);
  _g4_t_v1073 &v1073 = *reinterpret_cast<_g4_t_v1073 *>(_g4_sf + 2540u);
  _g4_t_v1074 &v1074 = *reinterpret_cast<_g4_t_v1074 *>(_g4_sf + 2544u);
  _g4_t_v1075 &v1075 = *reinterpret_cast<_g4_t_v1075 *>(_g4_sf + 2548u);
  _g4_t_v1076 &v1076 = *reinterpret_cast<_g4_t_v1076 *>(_g4_sf + 2552u);
  _g4_t_v1077 &v1077 = *reinterpret_cast<_g4_t_v1077 *>(_g4_sf + 2556u);
  _g4_t_v1078 &v1078 = *reinterpret_cast<_g4_t_v1078 *>(_g4_sf + 2560u);
  _g4_t_v1079 &v1079 = *reinterpret_cast<_g4_t_v1079 *>(_g4_sf + 2564u);
  _g4_t_v1080 &v1080 = *reinterpret_cast<_g4_t_v1080 *>(_g4_sf + 2568u);
  _g4_t_v1081 &v1081 = *reinterpret_cast<_g4_t_v1081 *>(_g4_sf + 2572u);
  _g4_t_v1082 &v1082 = *reinterpret_cast<_g4_t_v1082 *>(_g4_sf + 2576u);
  _g4_t_v1083 &v1083 = *reinterpret_cast<_g4_t_v1083 *>(_g4_sf + 2580u);
  _g4_t_v1084 &v1084 = *reinterpret_cast<_g4_t_v1084 *>(_g4_sf + 2584u);
  _g4_t_v1085 &v1085 = *reinterpret_cast<_g4_t_v1085 *>(_g4_sf + 2588u);
  _g4_t_v1086 &v1086 = *reinterpret_cast<_g4_t_v1086 *>(_g4_sf + 2592u);
  _g4_t_v1087 &v1087 = *reinterpret_cast<_g4_t_v1087 *>(_g4_sf + 2596u);
  _g4_t_v1088 &v1088 = *reinterpret_cast<_g4_t_v1088 *>(_g4_sf + 2600u);
  _g4_t_v1089 &v1089 = *reinterpret_cast<_g4_t_v1089 *>(_g4_sf + 2604u);
  _g4_t_v1090 &v1090 = *reinterpret_cast<_g4_t_v1090 *>(_g4_sf + 2608u);
  _g4_t_v1091 &v1091 = *reinterpret_cast<_g4_t_v1091 *>(_g4_sf + 2612u);
  _g4_t_v1092 &v1092 = *reinterpret_cast<_g4_t_v1092 *>(_g4_sf + 2616u);
  _g4_t_v1093 &v1093 = *reinterpret_cast<_g4_t_v1093 *>(_g4_sf + 2620u);
  _g4_t_v1094 &v1094 = *reinterpret_cast<_g4_t_v1094 *>(_g4_sf + 2624u);
  _g4_t_v1095 &v1095 = *reinterpret_cast<_g4_t_v1095 *>(_g4_sf + 2628u);
  _g4_t_v1096 &v1096 = *reinterpret_cast<_g4_t_v1096 *>(_g4_sf + 2632u);
  _g4_t_v1097 &v1097 = *reinterpret_cast<_g4_t_v1097 *>(_g4_sf + 2636u);
  _g4_t_v1098 &v1098 = *reinterpret_cast<_g4_t_v1098 *>(_g4_sf + 2640u);
  _g4_t_v1099 &v1099 = *reinterpret_cast<_g4_t_v1099 *>(_g4_sf + 2644u);
  _g4_t_v1100 &v1100 = *reinterpret_cast<_g4_t_v1100 *>(_g4_sf + 2648u);
  _g4_t_v1101 &v1101 = *reinterpret_cast<_g4_t_v1101 *>(_g4_sf + 2652u);
  _g4_t_v1102 &v1102 = *reinterpret_cast<_g4_t_v1102 *>(_g4_sf + 2656u);
  _g4_t_v1103 &v1103 = *reinterpret_cast<_g4_t_v1103 *>(_g4_sf + 2660u);
  _g4_t_v1104 &v1104 = *reinterpret_cast<_g4_t_v1104 *>(_g4_sf + 2664u);
  _g4_t_v1105 &v1105 = *reinterpret_cast<_g4_t_v1105 *>(_g4_sf + 2668u);
  _g4_t_v1106 &v1106 = *reinterpret_cast<_g4_t_v1106 *>(_g4_sf + 2672u);
  _g4_t_v1107 &v1107 = *reinterpret_cast<_g4_t_v1107 *>(_g4_sf + 2676u);
  _g4_t_v1108 &v1108 = *reinterpret_cast<_g4_t_v1108 *>(_g4_sf + 2680u);
  _g4_t_v1109 &v1109 = *reinterpret_cast<_g4_t_v1109 *>(_g4_sf + 2684u);
  _g4_t_v1110 &v1110 = *reinterpret_cast<_g4_t_v1110 *>(_g4_sf + 2688u);
  _g4_t_v1111 &v1111 = *reinterpret_cast<_g4_t_v1111 *>(_g4_sf + 2692u);
  _g4_t_v1112 &v1112 = *reinterpret_cast<_g4_t_v1112 *>(_g4_sf + 2696u);
  _g4_t_v1113 &v1113 = *reinterpret_cast<_g4_t_v1113 *>(_g4_sf + 2700u);
  _g4_t_v1114 &v1114 = *reinterpret_cast<_g4_t_v1114 *>(_g4_sf + 2704u);
  _g4_t_v1115 &v1115 = *reinterpret_cast<_g4_t_v1115 *>(_g4_sf + 2708u);
  _g4_t_v1116 &v1116 = *reinterpret_cast<_g4_t_v1116 *>(_g4_sf + 2712u);
  _g4_t_v1117 &v1117 = *reinterpret_cast<_g4_t_v1117 *>(_g4_sf + 2716u);
  _g4_t_v1118 &v1118 = *reinterpret_cast<_g4_t_v1118 *>(_g4_sf + 2720u);
  _g4_t_v1119 &v1119 = *reinterpret_cast<_g4_t_v1119 *>(_g4_sf + 2724u);
  _g4_t_v1120 &v1120 = *reinterpret_cast<_g4_t_v1120 *>(_g4_sf + 2728u);
  _g4_t_v1121 &v1121 = *reinterpret_cast<_g4_t_v1121 *>(_g4_sf + 2732u);
  _g4_t_v1122 &v1122 = *reinterpret_cast<_g4_t_v1122 *>(_g4_sf + 2736u);
  _g4_t_v1123 &v1123 = *reinterpret_cast<_g4_t_v1123 *>(_g4_sf + 2740u);
  _g4_t_v1124 &v1124 = *reinterpret_cast<_g4_t_v1124 *>(_g4_sf + 2744u);
  _g4_t_v1125 &v1125 = *reinterpret_cast<_g4_t_v1125 *>(_g4_sf + 2748u);
  _g4_t_v1126 &v1126 = *reinterpret_cast<_g4_t_v1126 *>(_g4_sf + 2752u);
  _g4_t_v1127 &v1127 = *reinterpret_cast<_g4_t_v1127 *>(_g4_sf + 2756u);
  _g4_t_v1128 &v1128 = *reinterpret_cast<_g4_t_v1128 *>(_g4_sf + 2760u);
  _g4_t_v1129 &v1129 = *reinterpret_cast<_g4_t_v1129 *>(_g4_sf + 2764u);
  _g4_t_v1130 &v1130 = *reinterpret_cast<_g4_t_v1130 *>(_g4_sf + 2768u);
  _g4_t_v1131 &v1131 = *reinterpret_cast<_g4_t_v1131 *>(_g4_sf + 2772u);
  _g4_t_v1132 &v1132 = *reinterpret_cast<_g4_t_v1132 *>(_g4_sf + 2776u);
  _g4_t_v1133 &v1133 = *reinterpret_cast<_g4_t_v1133 *>(_g4_sf + 2780u);
  _g4_t_v1134 &v1134 = *reinterpret_cast<_g4_t_v1134 *>(_g4_sf + 2784u);
  _g4_t_v1135 &v1135 = *reinterpret_cast<_g4_t_v1135 *>(_g4_sf + 2788u);
  _g4_t_v1136 &v1136 = *reinterpret_cast<_g4_t_v1136 *>(_g4_sf + 2792u);
  _g4_t_v1137 &v1137 = *reinterpret_cast<_g4_t_v1137 *>(_g4_sf + 2796u);
  _g4_t_v1138 &v1138 = *reinterpret_cast<_g4_t_v1138 *>(_g4_sf + 2800u);
  _g4_t_v1139 &v1139 = *reinterpret_cast<_g4_t_v1139 *>(_g4_sf + 2804u);
  _g4_t_v1140 &v1140 = *reinterpret_cast<_g4_t_v1140 *>(_g4_sf + 2808u);
  _g4_t_v1141 &v1141 = *reinterpret_cast<_g4_t_v1141 *>(_g4_sf + 2812u);
  _g4_t_v1142 &v1142 = *reinterpret_cast<_g4_t_v1142 *>(_g4_sf + 2816u);
  _g4_t_v1143 &v1143 = *reinterpret_cast<_g4_t_v1143 *>(_g4_sf + 2820u);
  _g4_t_v1144 &v1144 = *reinterpret_cast<_g4_t_v1144 *>(_g4_sf + 2824u);
  _g4_t_v1145 &v1145 = *reinterpret_cast<_g4_t_v1145 *>(_g4_sf + 2828u);
  _g4_t_v1146 &v1146 = *reinterpret_cast<_g4_t_v1146 *>(_g4_sf + 2832u);
  _g4_t_v1147 &v1147 = *reinterpret_cast<_g4_t_v1147 *>(_g4_sf + 2836u);
  _g4_t_v1148 &v1148 = *reinterpret_cast<_g4_t_v1148 *>(_g4_sf + 2840u);
  _g4_t_v1149 &v1149 = *reinterpret_cast<_g4_t_v1149 *>(_g4_sf + 2844u);
  _g4_t_v1150 &v1150 = *reinterpret_cast<_g4_t_v1150 *>(_g4_sf + 2848u);
  _g4_t_v1151 &v1151 = *reinterpret_cast<_g4_t_v1151 *>(_g4_sf + 2852u);
  _g4_t_v1152 &v1152 = *reinterpret_cast<_g4_t_v1152 *>(_g4_sf + 2856u);
  _g4_t_v1153 &v1153 = *reinterpret_cast<_g4_t_v1153 *>(_g4_sf + 2860u);
  _g4_t_v1154 &v1154 = *reinterpret_cast<_g4_t_v1154 *>(_g4_sf + 2864u);
  _g4_t_v1155 &v1155 = *reinterpret_cast<_g4_t_v1155 *>(_g4_sf + 2868u);
  _g4_t_v1156 &v1156 = *reinterpret_cast<_g4_t_v1156 *>(_g4_sf + 2872u);
  _g4_t_v1157 &v1157 = *reinterpret_cast<_g4_t_v1157 *>(_g4_sf + 2876u);
  _g4_t_v1158 &v1158 = *reinterpret_cast<_g4_t_v1158 *>(_g4_sf + 2880u);
  _g4_t_v1159 &v1159 = *reinterpret_cast<_g4_t_v1159 *>(_g4_sf + 2884u);
  _g4_t_v1160 &v1160 = *reinterpret_cast<_g4_t_v1160 *>(_g4_sf + 2888u);
  _g4_t_v1161 &v1161 = *reinterpret_cast<_g4_t_v1161 *>(_g4_sf + 2892u);
  _g4_t_v1162 &v1162 = *reinterpret_cast<_g4_t_v1162 *>(_g4_sf + 2896u);
  _g4_t_v1163 &v1163 = *reinterpret_cast<_g4_t_v1163 *>(_g4_sf + 2900u);
  _g4_t_v1164 &v1164 = *reinterpret_cast<_g4_t_v1164 *>(_g4_sf + 2904u);
  _g4_t_v1165 &v1165 = *reinterpret_cast<_g4_t_v1165 *>(_g4_sf + 2908u);
  _g4_t_v1166 &v1166 = *reinterpret_cast<_g4_t_v1166 *>(_g4_sf + 2912u);
  _g4_t_v1167 &v1167 = *reinterpret_cast<_g4_t_v1167 *>(_g4_sf + 2916u);
  _g4_t_v1168 &v1168 = *reinterpret_cast<_g4_t_v1168 *>(_g4_sf + 2920u);
  _g4_t_v1169 &v1169 = *reinterpret_cast<_g4_t_v1169 *>(_g4_sf + 2924u);
  _g4_t_v1170 &v1170 = *reinterpret_cast<_g4_t_v1170 *>(_g4_sf + 2928u);
  _g4_t_v1171 &v1171 = *reinterpret_cast<_g4_t_v1171 *>(_g4_sf + 2932u);
  _g4_t_v1172 &v1172 = *reinterpret_cast<_g4_t_v1172 *>(_g4_sf + 2936u);
  _g4_t_v1173 &v1173 = *reinterpret_cast<_g4_t_v1173 *>(_g4_sf + 2940u);
  _g4_t_v1174 &v1174 = *reinterpret_cast<_g4_t_v1174 *>(_g4_sf + 2944u);
  _g4_t_v1175 &v1175 = *reinterpret_cast<_g4_t_v1175 *>(_g4_sf + 2948u);
  _g4_t_v1176 &v1176 = *reinterpret_cast<_g4_t_v1176 *>(_g4_sf + 2952u);
  _g4_t_v1177 &v1177 = *reinterpret_cast<_g4_t_v1177 *>(_g4_sf + 2956u);
  _g4_t_v1178 &v1178 = *reinterpret_cast<_g4_t_v1178 *>(_g4_sf + 2960u);
  _g4_t_v1179 &v1179 = *reinterpret_cast<_g4_t_v1179 *>(_g4_sf + 2964u);
  _g4_t_v1180 &v1180 = *reinterpret_cast<_g4_t_v1180 *>(_g4_sf + 2968u);
  _g4_t_v1181 &v1181 = *reinterpret_cast<_g4_t_v1181 *>(_g4_sf + 2972u);
  _g4_t_v1182 &v1182 = *reinterpret_cast<_g4_t_v1182 *>(_g4_sf + 2976u);
  _g4_t_v1183 &v1183 = *reinterpret_cast<_g4_t_v1183 *>(_g4_sf + 2980u);
  _g4_t_v1184 &v1184 = *reinterpret_cast<_g4_t_v1184 *>(_g4_sf + 2984u);
  _g4_t_v1185 &v1185 = *reinterpret_cast<_g4_t_v1185 *>(_g4_sf + 2988u);
  _g4_t_v1186 &v1186 = *reinterpret_cast<_g4_t_v1186 *>(_g4_sf + 2992u);
  _g4_t_v1187 &v1187 = *reinterpret_cast<_g4_t_v1187 *>(_g4_sf + 2996u);
  _g4_t_v1188 &v1188 = *reinterpret_cast<_g4_t_v1188 *>(_g4_sf + 3000u);
  _g4_t_v1189 &v1189 = *reinterpret_cast<_g4_t_v1189 *>(_g4_sf + 3004u);
  _g4_t_v1190 &v1190 = *reinterpret_cast<_g4_t_v1190 *>(_g4_sf + 3008u);
  _g4_t_v1191 &v1191 = *reinterpret_cast<_g4_t_v1191 *>(_g4_sf + 3012u);
  _g4_t_v1192 &v1192 = *reinterpret_cast<_g4_t_v1192 *>(_g4_sf + 3016u);
  _g4_t_v1193 &v1193 = *reinterpret_cast<_g4_t_v1193 *>(_g4_sf + 3020u);
  _g4_t_v1194 &v1194 = *reinterpret_cast<_g4_t_v1194 *>(_g4_sf + 3024u);
  _g4_t_v1195 &v1195 = *reinterpret_cast<_g4_t_v1195 *>(_g4_sf + 3028u);
  _g4_t_v1196 &v1196 = *reinterpret_cast<_g4_t_v1196 *>(_g4_sf + 3032u);
  _g4_t_v1197 &v1197 = *reinterpret_cast<_g4_t_v1197 *>(_g4_sf + 3036u);
  _g4_t_v1198 &v1198 = *reinterpret_cast<_g4_t_v1198 *>(_g4_sf + 3040u);
  _g4_t_v1199 &v1199 = *reinterpret_cast<_g4_t_v1199 *>(_g4_sf + 3044u);
  _g4_t_v1200 &v1200 = *reinterpret_cast<_g4_t_v1200 *>(_g4_sf + 3048u);
  _g4_t_v1201 &v1201 = *reinterpret_cast<_g4_t_v1201 *>(_g4_sf + 3052u);
  _g4_t_v1202 &v1202 = *reinterpret_cast<_g4_t_v1202 *>(_g4_sf + 3056u);
  _g4_t_v1203 &v1203 = *reinterpret_cast<_g4_t_v1203 *>(_g4_sf + 3060u);
  _g4_t_v1204 &v1204 = *reinterpret_cast<_g4_t_v1204 *>(_g4_sf + 3064u);
  _g4_t_v1205 &v1205 = *reinterpret_cast<_g4_t_v1205 *>(_g4_sf + 3068u);
  _g4_t_v1206 &v1206 = *reinterpret_cast<_g4_t_v1206 *>(_g4_sf + 3072u);
  _g4_t_v1207 &v1207 = *reinterpret_cast<_g4_t_v1207 *>(_g4_sf + 3076u);
  _g4_t_v1208 &v1208 = *reinterpret_cast<_g4_t_v1208 *>(_g4_sf + 3080u);
  _g4_t_v1209 &v1209 = *reinterpret_cast<_g4_t_v1209 *>(_g4_sf + 3084u);
  _g4_t_v1210 &v1210 = *reinterpret_cast<_g4_t_v1210 *>(_g4_sf + 3088u);
  _g4_t_v1211 &v1211 = *reinterpret_cast<_g4_t_v1211 *>(_g4_sf + 3092u);
  _g4_t_v1212 &v1212 = *reinterpret_cast<_g4_t_v1212 *>(_g4_sf + 3096u);
  _g4_t_v1213 &v1213 = *reinterpret_cast<_g4_t_v1213 *>(_g4_sf + 3100u);
  _g4_t_v1214 &v1214 = *reinterpret_cast<_g4_t_v1214 *>(_g4_sf + 3104u);
  _g4_t_v1215 &v1215 = *reinterpret_cast<_g4_t_v1215 *>(_g4_sf + 3108u);
  _g4_t_v1216 &v1216 = *reinterpret_cast<_g4_t_v1216 *>(_g4_sf + 3112u);
  _g4_t_v1217 &v1217 = *reinterpret_cast<_g4_t_v1217 *>(_g4_sf + 3116u);
  _g4_t_v1218 &v1218 = *reinterpret_cast<_g4_t_v1218 *>(_g4_sf + 3120u);
  _g4_t_v1219 &v1219 = *reinterpret_cast<_g4_t_v1219 *>(_g4_sf + 3124u);
  _g4_t_v1220 &v1220 = *reinterpret_cast<_g4_t_v1220 *>(_g4_sf + 3128u);
  _g4_t_v1221 &v1221 = *reinterpret_cast<_g4_t_v1221 *>(_g4_sf + 3132u);
  _g4_t_v1222 &v1222 = *reinterpret_cast<_g4_t_v1222 *>(_g4_sf + 3136u);
  _g4_t_v1223 &v1223 = *reinterpret_cast<_g4_t_v1223 *>(_g4_sf + 3140u);
  _g4_t_v1224 &v1224 = *reinterpret_cast<_g4_t_v1224 *>(_g4_sf + 3144u);
  _g4_t_v1225 &v1225 = *reinterpret_cast<_g4_t_v1225 *>(_g4_sf + 3148u);
  _g4_t_v1226 &v1226 = *reinterpret_cast<_g4_t_v1226 *>(_g4_sf + 3152u);
  _g4_t_v1227 &v1227 = *reinterpret_cast<_g4_t_v1227 *>(_g4_sf + 3156u);
  _g4_t_v1228 &v1228 = *reinterpret_cast<_g4_t_v1228 *>(_g4_sf + 3160u);
  _g4_t_v1229 &v1229 = *reinterpret_cast<_g4_t_v1229 *>(_g4_sf + 3164u);
  _g4_t_v1230 &v1230 = *reinterpret_cast<_g4_t_v1230 *>(_g4_sf + 3168u);
  _g4_t_v1231 &v1231 = *reinterpret_cast<_g4_t_v1231 *>(_g4_sf + 3172u);
  _g4_t_v1232 &v1232 = *reinterpret_cast<_g4_t_v1232 *>(_g4_sf + 3176u);
  _g4_t_v1233 &v1233 = *reinterpret_cast<_g4_t_v1233 *>(_g4_sf + 3180u);
  _g4_t_v1234 &v1234 = *reinterpret_cast<_g4_t_v1234 *>(_g4_sf + 3184u);
  _g4_t_v1235 &v1235 = *reinterpret_cast<_g4_t_v1235 *>(_g4_sf + 3188u);
  _g4_t_v1236 &v1236 = *reinterpret_cast<_g4_t_v1236 *>(_g4_sf + 3192u);
  _g4_t_v1237 &v1237 = *reinterpret_cast<_g4_t_v1237 *>(_g4_sf + 3196u);
  _g4_t_v1238 &v1238 = *reinterpret_cast<_g4_t_v1238 *>(_g4_sf + 3200u);
  _g4_t_v1239 &v1239 = *reinterpret_cast<_g4_t_v1239 *>(_g4_sf + 3204u);
  _g4_t_v1240 &v1240 = *reinterpret_cast<_g4_t_v1240 *>(_g4_sf + 3208u);
  _g4_t_v1241 &v1241 = *reinterpret_cast<_g4_t_v1241 *>(_g4_sf + 3212u);
  _g4_t_v1242 &v1242 = *reinterpret_cast<_g4_t_v1242 *>(_g4_sf + 3216u);
  _g4_t_v1243 &v1243 = *reinterpret_cast<_g4_t_v1243 *>(_g4_sf + 3220u);
  _g4_t_v1244 &v1244 = *reinterpret_cast<_g4_t_v1244 *>(_g4_sf + 3224u);
  _g4_t_v1245 &v1245 = *reinterpret_cast<_g4_t_v1245 *>(_g4_sf + 3228u);
  _g4_t_v1246 &v1246 = *reinterpret_cast<_g4_t_v1246 *>(_g4_sf + 3232u);
  _g4_t_v1247 &v1247 = *reinterpret_cast<_g4_t_v1247 *>(_g4_sf + 3236u);
  _g4_t_v1248 &v1248 = *reinterpret_cast<_g4_t_v1248 *>(_g4_sf + 3240u);
  _g4_t_v1249 &v1249 = *reinterpret_cast<_g4_t_v1249 *>(_g4_sf + 3244u);
  _g4_t_v1250 &v1250 = *reinterpret_cast<_g4_t_v1250 *>(_g4_sf + 3248u);
  _g4_t_v1251 &v1251 = *reinterpret_cast<_g4_t_v1251 *>(_g4_sf + 3252u);
  _g4_t_v1252 &v1252 = *reinterpret_cast<_g4_t_v1252 *>(_g4_sf + 3256u);
  _g4_t_v1253 &v1253 = *reinterpret_cast<_g4_t_v1253 *>(_g4_sf + 3260u);
  _g4_t_v1254 &v1254 = *reinterpret_cast<_g4_t_v1254 *>(_g4_sf + 3264u);
  _g4_t_v1255 &v1255 = *reinterpret_cast<_g4_t_v1255 *>(_g4_sf + 3268u);
  _g4_t_v1256 &v1256 = *reinterpret_cast<_g4_t_v1256 *>(_g4_sf + 3272u);
  _g4_t_v1257 &v1257 = *reinterpret_cast<_g4_t_v1257 *>(_g4_sf + 3276u);
  _g4_t_v1258 &v1258 = *reinterpret_cast<_g4_t_v1258 *>(_g4_sf + 3280u);
  _g4_t_v1259 &v1259 = *reinterpret_cast<_g4_t_v1259 *>(_g4_sf + 3284u);
  _g4_t_v1260 &v1260 = *reinterpret_cast<_g4_t_v1260 *>(_g4_sf + 3288u);
  _g4_t_v1261 &v1261 = *reinterpret_cast<_g4_t_v1261 *>(_g4_sf + 3292u);
  _g4_t_v1262 &v1262 = *reinterpret_cast<_g4_t_v1262 *>(_g4_sf + 3296u);
  _g4_t_v1263 &v1263 = *reinterpret_cast<_g4_t_v1263 *>(_g4_sf + 3300u);

  v1261 = nullptr;
  v1262 = nullptr;
  v1263 = 0;
  v1 = *(void ***)(a1 + 84);
  v469 = *(void ***)(a1 + 80);
  if ( v469 != v1 )
  {
    v2 = *(void ***)(a1 + 80);
    do
    {
      if ( *v2 != nullptr )
        opDelete(*v2);
      v2 += 3;
    }
    while ( v1 != v2 );
  }
  *(uint32_t *)(a1 + 84) = (uint32_t)(uintptr_t)(v469);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v559), "pressed_end", (int)(uintptr_t)(&v470));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v560), "released_end", (int)(uintptr_t)(&v470) + 1);
  v1262 = v1261;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v561), "btn_start", (int)(uintptr_t)(&v470) + 2);
  g4_std::string::construct_copy(&v562, &v559);
  g4_std::string::construct_copy(&v563, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v564), (char *)&unk_1B15112, (int)(uintptr_t)(&v470) + 3);
  v293 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v293, (int)(uintptr_t)(&v561), (int)(uintptr_t)(&v562), (int)(uintptr_t)(&v563), 3, 4, 1, 4, 0, (int)(uintptr_t)(&v564));
  v558 = v293;
  g4_std::string::Destroy(&v564);
  g4_std::string::Destroy(&v563);
  g4_std::string::Destroy(&v562);
  g4_std::string::Destroy(&v561);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v565), "btn_quickplay", (int)(uintptr_t)(&v471));
  g4_std::string::construct_copy(&v566, &v559);
  g4_std::string::construct_copy(&v567, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v568), (char *)&unk_1B15112, (int)(uintptr_t)(&v471) + 1);
  v294 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v294, (int)(uintptr_t)(&v565), (int)(uintptr_t)(&v566), (int)(uintptr_t)(&v567), 0, 4, 2, 4, 0, (int)(uintptr_t)(&v568));
  v558 = v294;
  g4_std::string::Destroy(&v568);
  g4_std::string::Destroy(&v567);
  g4_std::string::Destroy(&v566);
  g4_std::string::Destroy(&v565);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v569), "btn_options", (int)(uintptr_t)(&v471) + 2);
  g4_std::string::construct_copy(&v570, &v559);
  g4_std::string::construct_copy(&v571, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v572), (char *)&unk_1B15112, (int)(uintptr_t)(&v471) + 3);
  v295 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v295, (int)(uintptr_t)(&v569), (int)(uintptr_t)(&v570), (int)(uintptr_t)(&v571), 1, 4, 3, 4, 0, (int)(uintptr_t)(&v572));
  v558 = v295;
  g4_std::string::Destroy(&v572);
  g4_std::string::Destroy(&v571);
  g4_std::string::Destroy(&v570);
  g4_std::string::Destroy(&v569);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v573), "btn_info", (int)(uintptr_t)(&v472));
  g4_std::string::construct_copy(&v574, &v559);
  g4_std::string::construct_copy(&v575, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v576), (char *)&unk_1B15112, (int)(uintptr_t)(&v472) + 1);
  v296 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v296, (int)(uintptr_t)(&v573), (int)(uintptr_t)(&v574), (int)(uintptr_t)(&v575), 2, 4, 0, 4, 0, (int)(uintptr_t)(&v576));
  v558 = v296;
  g4_std::string::Destroy(&v576);
  g4_std::string::Destroy(&v575);
  g4_std::string::Destroy(&v574);
  g4_std::string::Destroy(&v573);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v577), "igm_overlay.layout_tr.btn_igp", (int)(uintptr_t)(&v472) + 2);
  g4_std::string::construct_copy(&v578, &v559);
  g4_std::string::construct_copy(&v579, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v580), (char *)&unk_1B15112, (int)(uintptr_t)(&v472) + 3);
  v297 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v297, (int)(uintptr_t)(&v577), (int)(uintptr_t)(&v578), (int)(uintptr_t)(&v579), 0, 0, 0, 0, 0, (int)(uintptr_t)(&v580));
  v558 = v297;
  g4_std::string::Destroy(&v580);
  g4_std::string::Destroy(&v579);
  g4_std::string::Destroy(&v578);
  g4_std::string::Destroy(&v577);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v468 = (unsigned int **)(a1 + 80);
  v4 = *(uint32_t **)(a1 + 84);
  if ( v4 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
    v8 = v1261;
  }
  else
  {
    if ( v4 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v245 = 4 * v5;
        v6 = (char *)opNew(4 * v5);
        v7 = v245;
      }
      else
      {
        v7 = 0;
        v6 = nullptr;
      }
      *v4 = (uint32_t)(uintptr_t)(v6);
      v4[1] = (uint32_t)(uintptr_t)(v6);
      v8 = v1261;
      v9 = v1262 - v1261;
      v4[2] = (uint32_t)(uintptr_t)(&v6[v7]);
      v10 = 0;
      v11 = v9 >> 2;
      if ( v11 != 0 )
      {
        v280 = 4 * v11;
        memmove(v6, v8, 4 * v11);
        v8 = v1261;
        v10 = v280;
      }
      v12 = &v6[v10];
      v13 = a1;
      v4[1] = (uint32_t)(uintptr_t)(v12);
      v14 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v8 = v1261;
      v14 = 0;
      v13 = a1;
    }
    *(uint32_t *)(v13 + 84) = v14 + 12;
  }
  v1262 = (uint8_t *)(v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v581), "btn_customer_care", (int)(uintptr_t)(&v473));
  g4_std::string::construct_copy(&v582, &v559);
  g4_std::string::construct_copy(&v583, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v584), (char *)&unk_1B15112, (int)(uintptr_t)(&v473) + 1);
  v298 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v298, (int)(uintptr_t)(&v581), (int)(uintptr_t)(&v582), (int)(uintptr_t)(&v583), 5, 4, 5, 1, 0, (int)(uintptr_t)(&v584));
  v558 = v298;
  g4_std::string::Destroy(&v584);
  g4_std::string::Destroy(&v583);
  g4_std::string::Destroy(&v582);
  g4_std::string::Destroy(&v581);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v585), "btn_language", (int)(uintptr_t)(&v473) + 2);
  g4_std::string::construct_copy(&v586, &v559);
  g4_std::string::construct_copy(&v587, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v588), (char *)&unk_1B15112, (int)(uintptr_t)(&v473) + 3);
  v299 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v299, (int)(uintptr_t)(&v585), (int)(uintptr_t)(&v586), (int)(uintptr_t)(&v587), 5, 0, 5, 2, 0, (int)(uintptr_t)(&v588));
  v558 = v299;
  g4_std::string::Destroy(&v588);
  g4_std::string::Destroy(&v587);
  g4_std::string::Destroy(&v586);
  g4_std::string::Destroy(&v585);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v589), "btn_notifications", (int)(uintptr_t)(&v474));
  g4_std::string::construct_copy(&v590, &v559);
  g4_std::string::construct_copy(&v591, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v592), (char *)&unk_1B15112, (int)(uintptr_t)(&v474) + 1);
  v300 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v300, (int)(uintptr_t)(&v589), (int)(uintptr_t)(&v590), (int)(uintptr_t)(&v591), 6, 1, 6, 3, 0, (int)(uintptr_t)(&v592));
  v558 = v300;
  g4_std::string::Destroy(&v592);
  g4_std::string::Destroy(&v591);
  g4_std::string::Destroy(&v590);
  g4_std::string::Destroy(&v589);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v593), "btn_help", (int)(uintptr_t)(&v474) + 2);
  g4_std::string::construct_copy(&v594, &v559);
  g4_std::string::construct_copy(&v595, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v596), (char *)&unk_1B15112, (int)(uintptr_t)(&v474) + 3);
  v301 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v301, (int)(uintptr_t)(&v593), (int)(uintptr_t)(&v594), (int)(uintptr_t)(&v595), 7, 2, 7, 4, 0, (int)(uintptr_t)(&v596));
  v558 = v301;
  g4_std::string::Destroy(&v596);
  g4_std::string::Destroy(&v595);
  g4_std::string::Destroy(&v594);
  g4_std::string::Destroy(&v593);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v597), "btn_graphics", (int)(uintptr_t)(&v475));
  g4_std::string::construct_copy(&v598, &v559);
  g4_std::string::construct_copy(&v599, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v600), (char *)&unk_1B15112, (int)(uintptr_t)(&v475) + 1);
  v302 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v302, (int)(uintptr_t)(&v597), (int)(uintptr_t)(&v598), (int)(uintptr_t)(&v599), 8, 3, 8, 9, 0, (int)(uintptr_t)(&v600));
  v558 = v302;
  g4_std::string::Destroy(&v600);
  g4_std::string::Destroy(&v599);
  g4_std::string::Destroy(&v598);
  g4_std::string::Destroy(&v597);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v601), "mc_toggle_subtitles", (int)(uintptr_t)(&v475) + 2);
  g4_std::string::construct_copy(&v602, &v559);
  g4_std::string::construct_copy(&v603, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v604), "tf_toggle_subtitles", (int)(uintptr_t)(&v475) + 3);
  v303 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v303, (int)(uintptr_t)(&v601), (int)(uintptr_t)(&v602), (int)(uintptr_t)(&v603), 0, 8, 0, 6, 0, (int)(uintptr_t)(&v604));
  v558 = v303;
  g4_std::string::Destroy(&v604);
  g4_std::string::Destroy(&v603);
  g4_std::string::Destroy(&v602);
  g4_std::string::Destroy(&v601);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v605), "mc_toggle_gps", (int)(uintptr_t)(&v476));
  g4_std::string::construct_copy(&v606, &v559);
  g4_std::string::construct_copy(&v607, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v608), "tf_toggle_gps", (int)(uintptr_t)(&v476) + 1);
  v304 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v304, (int)(uintptr_t)(&v605), (int)(uintptr_t)(&v606), (int)(uintptr_t)(&v607), 0, 5, 0, 7, 0, (int)(uintptr_t)(&v608));
  v558 = v304;
  g4_std::string::Destroy(&v608);
  g4_std::string::Destroy(&v607);
  g4_std::string::Destroy(&v606);
  g4_std::string::Destroy(&v605);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v609), "btn_facebook_log", (int)(uintptr_t)(&v476) + 2);
  g4_std::string::construct_copy(&v610, &v559);
  g4_std::string::construct_copy(&v611, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v612), (char *)&unk_1B15112, (int)(uintptr_t)(&v476) + 3);
  v305 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v305, (int)(uintptr_t)(&v609), (int)(uintptr_t)(&v610), (int)(uintptr_t)(&v611), 2, 6, 2, 8, 0, (int)(uintptr_t)(&v612));
  v558 = v305;
  g4_std::string::Destroy(&v612);
  g4_std::string::Destroy(&v611);
  g4_std::string::Destroy(&v610);
  g4_std::string::Destroy(&v609);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v613), "btn_gplus_log", (int)(uintptr_t)(&v477));
  g4_std::string::construct_copy(&v614, &v559);
  g4_std::string::construct_copy(&v615, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v616), (char *)&unk_1B15112, (int)(uintptr_t)(&v477) + 1);
  v306 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v306, (int)(uintptr_t)(&v613), (int)(uintptr_t)(&v614), (int)(uintptr_t)(&v615), 4, 7, 4, 11, 0, (int)(uintptr_t)(&v616));
  v558 = v306;
  g4_std::string::Destroy(&v616);
  g4_std::string::Destroy(&v615);
  g4_std::string::Destroy(&v614);
  g4_std::string::Destroy(&v613);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v617), "btn_game", (int)(uintptr_t)(&v477) + 2);
  g4_std::string::construct_copy(&v618, &v559);
  g4_std::string::construct_copy(&v619, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v620), "btn_game.mc_label", (int)(uintptr_t)(&v477) + 3);
  v307 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v307, (int)(uintptr_t)(&v617), (int)(uintptr_t)(&v618), (int)(uintptr_t)(&v619), 11, 4, 10, 0, 0, (int)(uintptr_t)(&v620));
  v558 = v307;
  g4_std::string::Destroy(&v620);
  g4_std::string::Destroy(&v619);
  g4_std::string::Destroy(&v618);
  g4_std::string::Destroy(&v617);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v621), "btn_sounds", (int)(uintptr_t)(&v478));
  g4_std::string::construct_copy(&v622, &v559);
  g4_std::string::construct_copy(&v623, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v624), "btn_sounds.mc_label", (int)(uintptr_t)(&v478) + 1);
  v308 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v308, (int)(uintptr_t)(&v621), (int)(uintptr_t)(&v622), (int)(uintptr_t)(&v623), 9, 4, 11, 0, 0, (int)(uintptr_t)(&v624));
  v558 = v308;
  g4_std::string::Destroy(&v624);
  g4_std::string::Destroy(&v623);
  g4_std::string::Destroy(&v622);
  g4_std::string::Destroy(&v621);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v625), "btn_controls", (int)(uintptr_t)(&v478) + 2);
  g4_std::string::construct_copy(&v626, &v559);
  g4_std::string::construct_copy(&v627, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v628), "btn_controls.mc_label", (int)(uintptr_t)(&v478) + 3);
  v309 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v309, (int)(uintptr_t)(&v625), (int)(uintptr_t)(&v626), (int)(uintptr_t)(&v627), 10, 8, 9, 5, 0, (int)(uintptr_t)(&v628));
  v558 = v309;
  g4_std::string::Destroy(&v628);
  g4_std::string::Destroy(&v627);
  g4_std::string::Destroy(&v626);
  g4_std::string::Destroy(&v625);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v629), "btn_back", (int)(uintptr_t)(&v479));
  g4_std::string::construct_copy(&v630, &v559);
  g4_std::string::construct_copy(&v631, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v632), (char *)&unk_1B15112, (int)(uintptr_t)(&v479) + 1);
  v310 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v310, (int)(uintptr_t)(&v629), (int)(uintptr_t)(&v630), (int)(uintptr_t)(&v631), 11, 9, 9, 0, 0, (int)(uintptr_t)(&v632));
  v558 = v310;
  g4_std::string::Destroy(&v632);
  g4_std::string::Destroy(&v631);
  g4_std::string::Destroy(&v630);
  g4_std::string::Destroy(&v629);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v15 = *(uint32_t **)(a1 + 84);
  if ( v15 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v15 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v15 = 0;
      v15[1] = 0;
      v15[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v246 = 4 * v5;
        v16 = (char *)opNew(4 * v5);
        v17 = v246;
      }
      else
      {
        v17 = 0;
        v16 = nullptr;
      }
      *v15 = (uint32_t)(uintptr_t)(v16);
      v15[1] = (uint32_t)(uintptr_t)(v16);
      v18 = v1261;
      v19 = v1262 - v1261;
      v15[2] = (uint32_t)(uintptr_t)(&v16[v17]);
      v20 = 0;
      v21 = v19 >> 2;
      if ( v21 != 0 )
      {
        v279 = 4 * v21;
        memmove(v16, v18, 4 * v21);
        v20 = v279;
      }
      v22 = &v16[v20];
      v23 = a1;
      v15[1] = (uint32_t)(uintptr_t)(v22);
      v24 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v24 = 0;
      v23 = a1;
    }
    *(uint32_t *)(v23 + 84) = v24 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "pressed_end", 0xBu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  v1262 = v1261;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v633), "btn_shop", (int)(uintptr_t)(&v479) + 2);
  g4_std::string::construct_copy(&v634, &v559);
  g4_std::string::construct_copy(&v635, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v636), (char *)&unk_1B15112, (int)(uintptr_t)(&v479) + 3);
  v311 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v311, (int)(uintptr_t)(&v633), (int)(uintptr_t)(&v634), (int)(uintptr_t)(&v635), 2, 13, 1, 3, 2, (int)(uintptr_t)(&v636));
  v558 = v311;
  g4_std::string::Destroy(&v636);
  g4_std::string::Destroy(&v635);
  g4_std::string::Destroy(&v634);
  g4_std::string::Destroy(&v633);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v637), "btn_pawnShop", (int)(uintptr_t)(&v480));
  g4_std::string::construct_copy(&v638, &v559);
  g4_std::string::construct_copy(&v639, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v640), (char *)&unk_1B15112, (int)(uintptr_t)(&v480) + 1);
  v312 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v312, (int)(uintptr_t)(&v637), (int)(uintptr_t)(&v638), (int)(uintptr_t)(&v639), 0, 8, 2, 4, 2, (int)(uintptr_t)(&v640));
  v558 = v312;
  g4_std::string::Destroy(&v640);
  g4_std::string::Destroy(&v639);
  g4_std::string::Destroy(&v638);
  g4_std::string::Destroy(&v637);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v641), "btn_abilities", (int)(uintptr_t)(&v480) + 2);
  g4_std::string::construct_copy(&v642, &v559);
  g4_std::string::construct_copy(&v643, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v644), (char *)&unk_1B15112, (int)(uintptr_t)(&v480) + 3);
  v313 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v313, (int)(uintptr_t)(&v641), (int)(uintptr_t)(&v642), (int)(uintptr_t)(&v643), 1, 9, 0, 5, 2, (int)(uintptr_t)(&v644));
  v558 = v313;
  g4_std::string::Destroy(&v644);
  g4_std::string::Destroy(&v643);
  g4_std::string::Destroy(&v642);
  g4_std::string::Destroy(&v641);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v645), "btn_weeklyEvent", (int)(uintptr_t)(&v481));
  g4_std::string::construct_copy(&v646, &v559);
  g4_std::string::construct_copy(&v647, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v648), (char *)&unk_1B15112, (int)(uintptr_t)(&v481) + 1);
  v314 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v314, (int)(uintptr_t)(&v645), (int)(uintptr_t)(&v646), (int)(uintptr_t)(&v647), 5, 0, 4, 12, 2, (int)(uintptr_t)(&v648));
  v558 = v314;
  g4_std::string::Destroy(&v648);
  g4_std::string::Destroy(&v647);
  g4_std::string::Destroy(&v646);
  g4_std::string::Destroy(&v645);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v649), "btn_status", (int)(uintptr_t)(&v481) + 2);
  g4_std::string::construct_copy(&v650, &v559);
  g4_std::string::construct_copy(&v651, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v652), (char *)&unk_1B15112, (int)(uintptr_t)(&v481) + 3);
  v315 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v315, (int)(uintptr_t)(&v649), (int)(uintptr_t)(&v650), (int)(uintptr_t)(&v651), 3, 1, 5, 6, 2, (int)(uintptr_t)(&v652));
  v558 = v315;
  g4_std::string::Destroy(&v652);
  g4_std::string::Destroy(&v651);
  g4_std::string::Destroy(&v650);
  g4_std::string::Destroy(&v649);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v653), "btn_gamble", (int)(uintptr_t)(&v482));
  g4_std::string::construct_copy(&v654, &v559);
  g4_std::string::construct_copy(&v655, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v656), (char *)&unk_1B15112, (int)(uintptr_t)(&v482) + 1);
  v316 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v316, (int)(uintptr_t)(&v653), (int)(uintptr_t)(&v654), (int)(uintptr_t)(&v655), 4, 2, 3, 7, 2, (int)(uintptr_t)(&v656));
  v558 = v316;
  g4_std::string::Destroy(&v656);
  g4_std::string::Destroy(&v655);
  g4_std::string::Destroy(&v654);
  g4_std::string::Destroy(&v653);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v657), "btn_options", (int)(uintptr_t)(&v482) + 2);
  g4_std::string::construct_copy(&v658, &v559);
  g4_std::string::construct_copy(&v659, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v660), (char *)&unk_1B15112, (int)(uintptr_t)(&v482) + 3);
  v317 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v317, (int)(uintptr_t)(&v657), (int)(uintptr_t)(&v658), (int)(uintptr_t)(&v659), 12, 4, 7, 8, 2, (int)(uintptr_t)(&v660));
  v558 = v317;
  g4_std::string::Destroy(&v660);
  g4_std::string::Destroy(&v659);
  g4_std::string::Destroy(&v658);
  g4_std::string::Destroy(&v657);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v661), "btn_mainmenu", (int)(uintptr_t)(&v483));
  g4_std::string::construct_copy(&v662, &v559);
  g4_std::string::construct_copy(&v663, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v664), (char *)&unk_1B15112, (int)(uintptr_t)(&v483) + 1);
  v318 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v318, (int)(uintptr_t)(&v661), (int)(uintptr_t)(&v662), (int)(uintptr_t)(&v663), 6, 5, 12, 8, 2, (int)(uintptr_t)(&v664));
  v558 = v318;
  g4_std::string::Destroy(&v664);
  g4_std::string::Destroy(&v663);
  g4_std::string::Destroy(&v662);
  g4_std::string::Destroy(&v661);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v665), "btn_resume", (int)(uintptr_t)(&v483) + 2);
  g4_std::string::construct_copy(&v666, &v559);
  g4_std::string::construct_copy(&v667, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v668), (char *)&unk_1B15112, (int)(uintptr_t)(&v483) + 3);
  v319 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v319, (int)(uintptr_t)(&v665), (int)(uintptr_t)(&v666), (int)(uintptr_t)(&v667), 11, 12, 13, 0, 2, (int)(uintptr_t)(&v668));
  v558 = v319;
  g4_std::string::Destroy(&v668);
  g4_std::string::Destroy(&v667);
  g4_std::string::Destroy(&v666);
  g4_std::string::Destroy(&v665);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v669), "value_money.btn_add", (int)(uintptr_t)(&v484));
  g4_std::string::construct_copy(&v670, &v559);
  g4_std::string::construct_copy(&v671, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v672), (char *)&unk_1B15112, (int)(uintptr_t)(&v484) + 1);
  v320 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v320, (int)(uintptr_t)(&v669), (int)(uintptr_t)(&v670), (int)(uintptr_t)(&v671), 13, 12, 10, 2, 2, (int)(uintptr_t)(&v672));
  v558 = v320;
  g4_std::string::Destroy(&v672);
  g4_std::string::Destroy(&v671);
  g4_std::string::Destroy(&v670);
  g4_std::string::Destroy(&v669);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v673), "value_skills.btn_add", (int)(uintptr_t)(&v484) + 2);
  g4_std::string::construct_copy(&v674, &v559);
  g4_std::string::construct_copy(&v675, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v676), (char *)&unk_1B15112, (int)(uintptr_t)(&v484) + 3);
  v321 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v321, (int)(uintptr_t)(&v673), (int)(uintptr_t)(&v674), (int)(uintptr_t)(&v675), 9, 12, 11, 2, 2, (int)(uintptr_t)(&v676));
  v558 = v321;
  g4_std::string::Destroy(&v676);
  g4_std::string::Destroy(&v675);
  g4_std::string::Destroy(&v674);
  g4_std::string::Destroy(&v673);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v677), "value_keys.btn_add", (int)(uintptr_t)(&v485));
  g4_std::string::construct_copy(&v678, &v559);
  g4_std::string::construct_copy(&v679, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v680), (char *)&unk_1B15112, (int)(uintptr_t)(&v485) + 1);
  v322 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v322, (int)(uintptr_t)(&v677), (int)(uintptr_t)(&v678), (int)(uintptr_t)(&v679), 10, 12, 8, 2, 2, (int)(uintptr_t)(&v680));
  v558 = v322;
  g4_std::string::Destroy(&v680);
  g4_std::string::Destroy(&v679);
  g4_std::string::Destroy(&v678);
  g4_std::string::Destroy(&v677);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v681), "igm_overlay.layout_bl.btn_map", (int)(uintptr_t)(&v485) + 2);
  g4_std::string::construct_copy(&v682, &v559);
  g4_std::string::construct_copy(&v683, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v684), (char *)&unk_1B15112, (int)(uintptr_t)(&v485) + 3);
  v323 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v323, (int)(uintptr_t)(&v681), (int)(uintptr_t)(&v682), (int)(uintptr_t)(&v683), 7, 3, 6, 8, 2, (int)(uintptr_t)(&v684));
  v558 = v323;
  g4_std::string::Destroy(&v684);
  g4_std::string::Destroy(&v683);
  g4_std::string::Destroy(&v682);
  g4_std::string::Destroy(&v681);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v685), "igm_overlay.btn_like", (int)(uintptr_t)(&v486));
  g4_std::string::construct_copy(&v686, &v559);
  g4_std::string::construct_copy(&v687, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v688), (char *)&unk_1B15112, (int)(uintptr_t)(&v486) + 1);
  v324 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v324, (int)(uintptr_t)(&v685), (int)(uintptr_t)(&v686), (int)(uintptr_t)(&v687), 8, 12, 9, 0, 2, (int)(uintptr_t)(&v688));
  v558 = v324;
  g4_std::string::Destroy(&v688);
  g4_std::string::Destroy(&v687);
  g4_std::string::Destroy(&v686);
  g4_std::string::Destroy(&v685);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v25 = *(uint32_t **)(a1 + 84);
  if ( v25 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
    v28 = v1261;
  }
  else
  {
    if ( v25 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v25 = 0;
      v25[1] = 0;
      v25[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v247 = 4 * v5;
        v26 = (char *)opNew(4 * v5);
        v27 = v247;
      }
      else
      {
        v27 = 0;
        v26 = nullptr;
      }
      *v25 = (uint32_t)(uintptr_t)(v26);
      v25[1] = (uint32_t)(uintptr_t)(v26);
      v28 = v1261;
      v29 = v1262 - v1261;
      v25[2] = (uint32_t)(uintptr_t)(&v26[v27]);
      v30 = 0;
      v31 = v29 >> 2;
      if ( v31 != 0 )
      {
        v278 = 4 * v31;
        memmove(v26, v28, 4 * v31);
        v28 = v1261;
        v30 = v278;
      }
      v32 = &v26[v30];
      v33 = a1;
      v25[1] = (uint32_t)(uintptr_t)(v32);
      v34 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v28 = v1261;
      v34 = 0;
      v33 = a1;
    }
    *(uint32_t *)(v33 + 84) = v34 + 12;
  }
  v1262 = (uint8_t *)(v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v689), "item_0.hitzone", (int)(uintptr_t)(&v486) + 2);
  g4_std::string::construct_copy(&v690, &v559);
  g4_std::string::construct_copy(&v691, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v692), (char *)&unk_1B15112, (int)(uintptr_t)(&v486) + 3);
  v325 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v325, (int)(uintptr_t)(&v689), (int)(uintptr_t)(&v690), (int)(uintptr_t)(&v691), 2, 10, 1, 3, 2, (int)(uintptr_t)(&v692));
  v558 = v325;
  g4_std::string::Destroy(&v692);
  g4_std::string::Destroy(&v691);
  g4_std::string::Destroy(&v690);
  g4_std::string::Destroy(&v689);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v693), "item_1.hitzone", (int)(uintptr_t)(&v487));
  g4_std::string::construct_copy(&v694, &v559);
  g4_std::string::construct_copy(&v695, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v696), (char *)&unk_1B15112, (int)(uintptr_t)(&v487) + 1);
  v326 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v326, (int)(uintptr_t)(&v693), (int)(uintptr_t)(&v694), (int)(uintptr_t)(&v695), 0, 10, 2, 4, 2, (int)(uintptr_t)(&v696));
  v558 = v326;
  g4_std::string::Destroy(&v696);
  g4_std::string::Destroy(&v695);
  g4_std::string::Destroy(&v694);
  g4_std::string::Destroy(&v693);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v697), "item_2.hitzone", (int)(uintptr_t)(&v487) + 2);
  g4_std::string::construct_copy(&v698, &v559);
  g4_std::string::construct_copy(&v699, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v700), (char *)&unk_1B15112, (int)(uintptr_t)(&v487) + 3);
  v327 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v327, (int)(uintptr_t)(&v697), (int)(uintptr_t)(&v698), (int)(uintptr_t)(&v699), 1, 10, 0, 5, 2, (int)(uintptr_t)(&v700));
  v558 = v327;
  g4_std::string::Destroy(&v700);
  g4_std::string::Destroy(&v699);
  g4_std::string::Destroy(&v698);
  g4_std::string::Destroy(&v697);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v701), "item_3.hitzone", (int)(uintptr_t)(&v488));
  g4_std::string::construct_copy(&v702, &v559);
  g4_std::string::construct_copy(&v703, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v704), (char *)&unk_1B15112, (int)(uintptr_t)(&v488) + 1);
  v328 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v328, (int)(uintptr_t)(&v701), (int)(uintptr_t)(&v702), (int)(uintptr_t)(&v703), 5, 0, 4, 6, 2, (int)(uintptr_t)(&v704));
  v558 = v328;
  g4_std::string::Destroy(&v704);
  g4_std::string::Destroy(&v703);
  g4_std::string::Destroy(&v702);
  g4_std::string::Destroy(&v701);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v705), "item_4.hitzone", (int)(uintptr_t)(&v488) + 2);
  g4_std::string::construct_copy(&v706, &v559);
  g4_std::string::construct_copy(&v707, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v708), (char *)&unk_1B15112, (int)(uintptr_t)(&v488) + 3);
  v329 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v329, (int)(uintptr_t)(&v705), (int)(uintptr_t)(&v706), (int)(uintptr_t)(&v707), 3, 1, 5, 7, 2, (int)(uintptr_t)(&v708));
  v558 = v329;
  g4_std::string::Destroy(&v708);
  g4_std::string::Destroy(&v707);
  g4_std::string::Destroy(&v706);
  g4_std::string::Destroy(&v705);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v709), "item_5.hitzone", (int)(uintptr_t)(&v489));
  g4_std::string::construct_copy(&v710, &v559);
  g4_std::string::construct_copy(&v711, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v712), (char *)&unk_1B15112, (int)(uintptr_t)(&v489) + 1);
  v330 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v330, (int)(uintptr_t)(&v709), (int)(uintptr_t)(&v710), (int)(uintptr_t)(&v711), 4, 2, 3, 8, 2, (int)(uintptr_t)(&v712));
  v558 = v330;
  g4_std::string::Destroy(&v712);
  g4_std::string::Destroy(&v711);
  g4_std::string::Destroy(&v710);
  g4_std::string::Destroy(&v709);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v713), "item_6.hitzone", (int)(uintptr_t)(&v489) + 2);
  g4_std::string::construct_copy(&v714, &v559);
  g4_std::string::construct_copy(&v715, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v716), (char *)&unk_1B15112, (int)(uintptr_t)(&v489) + 3);
  v331 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v331, (int)(uintptr_t)(&v713), (int)(uintptr_t)(&v714), (int)(uintptr_t)(&v715), 12, 3, 7, 12, 2, (int)(uintptr_t)(&v716));
  v558 = v331;
  g4_std::string::Destroy(&v716);
  g4_std::string::Destroy(&v715);
  g4_std::string::Destroy(&v714);
  g4_std::string::Destroy(&v713);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v717), "item_7.hitzone", (int)(uintptr_t)(&v490));
  g4_std::string::construct_copy(&v718, &v559);
  g4_std::string::construct_copy(&v719, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v720), (char *)&unk_1B15112, (int)(uintptr_t)(&v490) + 1);
  v332 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v332, (int)(uintptr_t)(&v717), (int)(uintptr_t)(&v718), (int)(uintptr_t)(&v719), 6, 4, 8, 10, 2, (int)(uintptr_t)(&v720));
  v558 = v332;
  g4_std::string::Destroy(&v720);
  g4_std::string::Destroy(&v719);
  g4_std::string::Destroy(&v718);
  g4_std::string::Destroy(&v717);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v721), "item_8.hitzone", (int)(uintptr_t)(&v490) + 2);
  g4_std::string::construct_copy(&v722, &v559);
  g4_std::string::construct_copy(&v723, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v724), (char *)&unk_1B15112, (int)(uintptr_t)(&v490) + 3);
  v333 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v333, (int)(uintptr_t)(&v721), (int)(uintptr_t)(&v722), (int)(uintptr_t)(&v723), 7, 5, 12, 10, 2, (int)(uintptr_t)(&v724));
  v558 = v333;
  g4_std::string::Destroy(&v724);
  g4_std::string::Destroy(&v723);
  g4_std::string::Destroy(&v722);
  g4_std::string::Destroy(&v721);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v725), "btn_resume", (int)(uintptr_t)(&v491));
  g4_std::string::construct_copy(&v726, &v559);
  g4_std::string::construct_copy(&v727, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v728), (char *)&unk_1B15112, (int)(uintptr_t)(&v491) + 1);
  v334 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v334, (int)(uintptr_t)(&v725), (int)(uintptr_t)(&v726), (int)(uintptr_t)(&v727), 11, 12, 10, 0, 2, (int)(uintptr_t)(&v728));
  v558 = v334;
  g4_std::string::Destroy(&v728);
  g4_std::string::Destroy(&v727);
  g4_std::string::Destroy(&v726);
  g4_std::string::Destroy(&v725);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v729), "btn_reset_timer", (int)(uintptr_t)(&v491) + 2);
  g4_std::string::construct_copy(&v730, &v559);
  g4_std::string::construct_copy(&v731, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v732), (char *)&unk_1B15112, (int)(uintptr_t)(&v491) + 3);
  v335 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v335, (int)(uintptr_t)(&v729), (int)(uintptr_t)(&v730), (int)(uintptr_t)(&v731), 2, 8, 11, 1, 2, (int)(uintptr_t)(&v732));
  v558 = v335;
  g4_std::string::Destroy(&v732);
  g4_std::string::Destroy(&v731);
  g4_std::string::Destroy(&v730);
  g4_std::string::Destroy(&v729);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v733), "value_money.btn_add", (int)(uintptr_t)(&v492));
  g4_std::string::construct_copy(&v734, &v559);
  g4_std::string::construct_copy(&v735, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v736), (char *)&unk_1B15112, (int)(uintptr_t)(&v492) + 1);
  v336 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v336, (int)(uintptr_t)(&v733), (int)(uintptr_t)(&v734), (int)(uintptr_t)(&v735), 9, 12, 9, 10, 2, (int)(uintptr_t)(&v736));
  v558 = v336;
  g4_std::string::Destroy(&v736);
  g4_std::string::Destroy(&v735);
  g4_std::string::Destroy(&v734);
  g4_std::string::Destroy(&v733);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v737), "btn_back", (int)(uintptr_t)(&v492) + 2);
  g4_std::string::construct_copy(&v738, &v559);
  g4_std::string::construct_copy(&v739, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v740), (char *)&unk_1B15112, (int)(uintptr_t)(&v492) + 3);
  v337 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v337, (int)(uintptr_t)(&v737), (int)(uintptr_t)(&v738), (int)(uintptr_t)(&v739), 8, 9, 6, 9, 2, (int)(uintptr_t)(&v740));
  v558 = v337;
  g4_std::string::Destroy(&v740);
  g4_std::string::Destroy(&v739);
  g4_std::string::Destroy(&v738);
  g4_std::string::Destroy(&v737);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v35 = *(uint32_t **)(a1 + 84);
  if ( v35 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v35 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v35 = 0;
      v35[1] = 0;
      v35[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v248 = 4 * v5;
        v36 = (char *)opNew(4 * v5);
        v37 = v248;
      }
      else
      {
        v37 = 0;
        v36 = nullptr;
      }
      *v35 = (uint32_t)(uintptr_t)(v36);
      v35[1] = (uint32_t)(uintptr_t)(v36);
      v38 = v1261;
      v39 = v1262 - v1261;
      v35[2] = (uint32_t)(uintptr_t)(&v36[v37]);
      v40 = 0;
      v41 = v39 >> 2;
      if ( v41 != 0 )
      {
        v277 = 4 * v41;
        memmove(v36, v38, 4 * v41);
        v40 = v277;
      }
      v42 = &v36[v40];
      v43 = a1;
      v35[1] = (uint32_t)(uintptr_t)(v42);
      v44 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v44 = 0;
      v43 = a1;
    }
    *(uint32_t *)(v43 + 84) = v44 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "pressed_end", 0xBu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  v1262 = v1261;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v741), "mc_buttons_container.btn_en", (int)(uintptr_t)(&v493));
  g4_std::string::construct_copy(&v742, &v559);
  g4_std::string::construct_copy(&v743, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v744), (char *)&unk_1B15112, (int)(uintptr_t)(&v493) + 1);
  v338 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v338, (int)(uintptr_t)(&v741), (int)(uintptr_t)(&v742), (int)(uintptr_t)(&v743), 5, 12, 1, 6, 0, (int)(uintptr_t)(&v744));
  v558 = v338;
  g4_std::string::Destroy(&v744);
  g4_std::string::Destroy(&v743);
  g4_std::string::Destroy(&v742);
  g4_std::string::Destroy(&v741);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v745), "mc_buttons_container.btn_fr", (int)(uintptr_t)(&v493) + 2);
  g4_std::string::construct_copy(&v746, &v559);
  g4_std::string::construct_copy(&v747, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v748), (char *)&unk_1B15112, (int)(uintptr_t)(&v493) + 3);
  v339 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v339, (int)(uintptr_t)(&v745), (int)(uintptr_t)(&v746), (int)(uintptr_t)(&v747), 0, 7, 2, 7, 0, (int)(uintptr_t)(&v748));
  v558 = v339;
  g4_std::string::Destroy(&v748);
  g4_std::string::Destroy(&v747);
  g4_std::string::Destroy(&v746);
  g4_std::string::Destroy(&v745);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v749), "mc_buttons_container.btn_de", (int)(uintptr_t)(&v494));
  g4_std::string::construct_copy(&v750, &v559);
  g4_std::string::construct_copy(&v751, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v752), (char *)&unk_1B15112, (int)(uintptr_t)(&v494) + 1);
  v340 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v340, (int)(uintptr_t)(&v749), (int)(uintptr_t)(&v750), (int)(uintptr_t)(&v751), 1, 8, 3, 8, 0, (int)(uintptr_t)(&v752));
  v558 = v340;
  g4_std::string::Destroy(&v752);
  g4_std::string::Destroy(&v751);
  g4_std::string::Destroy(&v750);
  g4_std::string::Destroy(&v749);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v753), "mc_buttons_container.btn_es", (int)(uintptr_t)(&v494) + 2);
  g4_std::string::construct_copy(&v754, &v559);
  g4_std::string::construct_copy(&v755, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v756), (char *)&unk_1B15112, (int)(uintptr_t)(&v494) + 3);
  v341 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v341, (int)(uintptr_t)(&v753), (int)(uintptr_t)(&v754), (int)(uintptr_t)(&v755), 2, 9, 4, 9, 0, (int)(uintptr_t)(&v756));
  v558 = v341;
  g4_std::string::Destroy(&v756);
  g4_std::string::Destroy(&v755);
  g4_std::string::Destroy(&v754);
  g4_std::string::Destroy(&v753);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v757), "mc_buttons_container.btn_it", (int)(uintptr_t)(&v495));
  g4_std::string::construct_copy(&v758, &v559);
  g4_std::string::construct_copy(&v759, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v760), (char *)&unk_1B15112, (int)(uintptr_t)(&v495) + 1);
  v342 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v342, (int)(uintptr_t)(&v757), (int)(uintptr_t)(&v758), (int)(uintptr_t)(&v759), 3, 10, 5, 10, 0, (int)(uintptr_t)(&v760));
  v558 = v342;
  g4_std::string::Destroy(&v760);
  g4_std::string::Destroy(&v759);
  g4_std::string::Destroy(&v758);
  g4_std::string::Destroy(&v757);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v761), "mc_buttons_container.btn_ja", (int)(uintptr_t)(&v495) + 2);
  g4_std::string::construct_copy(&v762, &v559);
  g4_std::string::construct_copy(&v763, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v764), (char *)&unk_1B15112, (int)(uintptr_t)(&v495) + 3);
  v343 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v343, (int)(uintptr_t)(&v761), (int)(uintptr_t)(&v762), (int)(uintptr_t)(&v763), 4, 11, 0, 11, 0, (int)(uintptr_t)(&v764));
  v558 = v343;
  g4_std::string::Destroy(&v764);
  g4_std::string::Destroy(&v763);
  g4_std::string::Destroy(&v762);
  g4_std::string::Destroy(&v761);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v765), "mc_buttons_container.btn_ko", (int)(uintptr_t)(&v496));
  g4_std::string::construct_copy(&v766, &v559);
  g4_std::string::construct_copy(&v767, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v768), (char *)&unk_1B15112, (int)(uintptr_t)(&v496) + 1);
  v344 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v344, (int)(uintptr_t)(&v765), (int)(uintptr_t)(&v766), (int)(uintptr_t)(&v767), 11, 0, 7, 12, 0, (int)(uintptr_t)(&v768));
  v558 = v344;
  g4_std::string::Destroy(&v768);
  g4_std::string::Destroy(&v767);
  g4_std::string::Destroy(&v766);
  g4_std::string::Destroy(&v765);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v769), "mc_buttons_container.btn_zh", (int)(uintptr_t)(&v496) + 2);
  g4_std::string::construct_copy(&v770, &v559);
  g4_std::string::construct_copy(&v771, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v772), (char *)&unk_1B15112, (int)(uintptr_t)(&v496) + 3);
  v345 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v345, (int)(uintptr_t)(&v769), (int)(uintptr_t)(&v770), (int)(uintptr_t)(&v771), 6, 1, 8, 12, 0, (int)(uintptr_t)(&v772));
  v558 = v345;
  g4_std::string::Destroy(&v772);
  g4_std::string::Destroy(&v771);
  g4_std::string::Destroy(&v770);
  g4_std::string::Destroy(&v769);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v773), "mc_buttons_container.btn_pt", (int)(uintptr_t)(&v497));
  g4_std::string::construct_copy(&v774, &v559);
  g4_std::string::construct_copy(&v775, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v776), (char *)&unk_1B15112, (int)(uintptr_t)(&v497) + 1);
  v346 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v346, (int)(uintptr_t)(&v773), (int)(uintptr_t)(&v774), (int)(uintptr_t)(&v775), 7, 2, 9, 12, 0, (int)(uintptr_t)(&v776));
  v558 = v346;
  g4_std::string::Destroy(&v776);
  g4_std::string::Destroy(&v775);
  g4_std::string::Destroy(&v774);
  g4_std::string::Destroy(&v773);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v777), "mc_buttons_container.btn_ru", (int)(uintptr_t)(&v497) + 2);
  g4_std::string::construct_copy(&v778, &v559);
  g4_std::string::construct_copy(&v779, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v780), (char *)&unk_1B15112, (int)(uintptr_t)(&v497) + 3);
  v347 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v347, (int)(uintptr_t)(&v777), (int)(uintptr_t)(&v778), (int)(uintptr_t)(&v779), 8, 3, 10, 12, 0, (int)(uintptr_t)(&v780));
  v558 = v347;
  g4_std::string::Destroy(&v780);
  g4_std::string::Destroy(&v779);
  g4_std::string::Destroy(&v778);
  g4_std::string::Destroy(&v777);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v781), "mc_buttons_container.btn_tr", (int)(uintptr_t)(&v498));
  g4_std::string::construct_copy(&v782, &v559);
  g4_std::string::construct_copy(&v783, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v784), (char *)&unk_1B15112, (int)(uintptr_t)(&v498) + 1);
  v348 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v348, (int)(uintptr_t)(&v781), (int)(uintptr_t)(&v782), (int)(uintptr_t)(&v783), 9, 4, 11, 12, 0, (int)(uintptr_t)(&v784));
  v558 = v348;
  g4_std::string::Destroy(&v784);
  g4_std::string::Destroy(&v783);
  g4_std::string::Destroy(&v782);
  g4_std::string::Destroy(&v781);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v785), "mc_buttons_container.btn_ar", (int)(uintptr_t)(&v498) + 2);
  g4_std::string::construct_copy(&v786, &v559);
  g4_std::string::construct_copy(&v787, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v788), (char *)&unk_1B15112, (int)(uintptr_t)(&v498) + 3);
  v349 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v349, (int)(uintptr_t)(&v785), (int)(uintptr_t)(&v786), (int)(uintptr_t)(&v787), 10, 5, 6, 12, 0, (int)(uintptr_t)(&v788));
  v558 = v349;
  g4_std::string::Destroy(&v788);
  g4_std::string::Destroy(&v787);
  g4_std::string::Destroy(&v786);
  g4_std::string::Destroy(&v785);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v789), "btn_back", (int)(uintptr_t)(&v499));
  g4_std::string::construct_copy(&v790, &v559);
  g4_std::string::construct_copy(&v791, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v792), (char *)&unk_1B15112, (int)(uintptr_t)(&v499) + 1);
  v350 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v350, (int)(uintptr_t)(&v789), (int)(uintptr_t)(&v790), (int)(uintptr_t)(&v791), 12, 6, 6, 0, 0, (int)(uintptr_t)(&v792));
  v558 = v350;
  g4_std::string::Destroy(&v792);
  g4_std::string::Destroy(&v791);
  g4_std::string::Destroy(&v790);
  g4_std::string::Destroy(&v789);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v45 = *(uint32_t **)(a1 + 84);
  if ( v45 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v45 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v45 = 0;
      v45[1] = 0;
      v45[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v249 = 4 * v5;
        v46 = (char *)opNew(4 * v5);
        v47 = v249;
      }
      else
      {
        v47 = 0;
        v46 = nullptr;
      }
      *v45 = (uint32_t)(uintptr_t)(v46);
      v45[1] = (uint32_t)(uintptr_t)(v46);
      v48 = v1261;
      v49 = v1262 - v1261;
      v45[2] = (uint32_t)(uintptr_t)(&v46[v47]);
      v50 = 0;
      v51 = v49 >> 2;
      if ( v51 != 0 )
      {
        v276 = 4 * v51;
        memmove(v46, v48, 4 * v51);
        v50 = v276;
      }
      v52 = &v46[v50];
      v53 = a1;
      v45[1] = (uint32_t)(uintptr_t)(v52);
      v54 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v54 = 0;
      v53 = a1;
    }
    *(uint32_t *)(v53 + 84) = v54 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "focus_in_end", 0xCu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  v1262 = v1261;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v793), "mc_sections_list.item_0", (int)(uintptr_t)(&v499) + 2);
  g4_std::string::construct_copy(&v794, &v559);
  g4_std::string::construct_copy(&v795, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v796), (char *)&unk_1B15112, (int)(uintptr_t)(&v499) + 3);
  v351 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v351, (int)(uintptr_t)(&v793), (int)(uintptr_t)(&v794), (int)(uintptr_t)(&v795), 6, 5, 7, 1, 0, (int)(uintptr_t)(&v796));
  v558 = v351;
  g4_std::string::Destroy(&v796);
  g4_std::string::Destroy(&v795);
  g4_std::string::Destroy(&v794);
  g4_std::string::Destroy(&v793);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v797), "mc_sections_list.item_1", (int)(uintptr_t)(&v500));
  g4_std::string::construct_copy(&v798, &v559);
  g4_std::string::construct_copy(&v799, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v800), (char *)&unk_1B15112, (int)(uintptr_t)(&v500) + 1);
  v352 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v352, (int)(uintptr_t)(&v797), (int)(uintptr_t)(&v798), (int)(uintptr_t)(&v799), 6, 0, 7, 2, 0, (int)(uintptr_t)(&v800));
  v558 = v352;
  g4_std::string::Destroy(&v800);
  g4_std::string::Destroy(&v799);
  g4_std::string::Destroy(&v798);
  g4_std::string::Destroy(&v797);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v801), "mc_sections_list.item_2", (int)(uintptr_t)(&v500) + 2);
  g4_std::string::construct_copy(&v802, &v559);
  g4_std::string::construct_copy(&v803, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v804), (char *)&unk_1B15112, (int)(uintptr_t)(&v500) + 3);
  v353 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v353, (int)(uintptr_t)(&v801), (int)(uintptr_t)(&v802), (int)(uintptr_t)(&v803), 6, 1, 7, 3, 0, (int)(uintptr_t)(&v804));
  v558 = v353;
  g4_std::string::Destroy(&v804);
  g4_std::string::Destroy(&v803);
  g4_std::string::Destroy(&v802);
  g4_std::string::Destroy(&v801);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v805), "mc_sections_list.item_3", (int)(uintptr_t)(&v501));
  g4_std::string::construct_copy(&v806, &v559);
  g4_std::string::construct_copy(&v807, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v808), (char *)&unk_1B15112, (int)(uintptr_t)(&v501) + 1);
  v354 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v354, (int)(uintptr_t)(&v805), (int)(uintptr_t)(&v806), (int)(uintptr_t)(&v807), 6, 2, 7, 4, 0, (int)(uintptr_t)(&v808));
  v558 = v354;
  g4_std::string::Destroy(&v808);
  g4_std::string::Destroy(&v807);
  g4_std::string::Destroy(&v806);
  g4_std::string::Destroy(&v805);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v809), "mc_sections_list.item_4", (int)(uintptr_t)(&v501) + 2);
  g4_std::string::construct_copy(&v810, &v559);
  g4_std::string::construct_copy(&v811, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v812), (char *)&unk_1B15112, (int)(uintptr_t)(&v501) + 3);
  v355 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v355, (int)(uintptr_t)(&v809), (int)(uintptr_t)(&v810), (int)(uintptr_t)(&v811), 6, 3, 7, 5, 0, (int)(uintptr_t)(&v812));
  v558 = v355;
  g4_std::string::Destroy(&v812);
  g4_std::string::Destroy(&v811);
  g4_std::string::Destroy(&v810);
  g4_std::string::Destroy(&v809);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v813), "mc_sections_list.item_5", (int)(uintptr_t)(&v502));
  g4_std::string::construct_copy(&v814, &v559);
  g4_std::string::construct_copy(&v815, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v816), (char *)&unk_1B15112, (int)(uintptr_t)(&v502) + 1);
  v356 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v356, (int)(uintptr_t)(&v813), (int)(uintptr_t)(&v814), (int)(uintptr_t)(&v815), 6, 4, 7, 0, 0, (int)(uintptr_t)(&v816));
  v558 = v356;
  g4_std::string::Destroy(&v816);
  g4_std::string::Destroy(&v815);
  g4_std::string::Destroy(&v814);
  g4_std::string::Destroy(&v813);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v817), "btn_prev", (int)(uintptr_t)(&v502) + 2);
  g4_std::string::construct_copy(&v818, &v559);
  g4_std::string::construct_copy(&v819, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v820), (char *)&unk_1B15112, (int)(uintptr_t)(&v502) + 3);
  v357 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v357, (int)(uintptr_t)(&v817), (int)(uintptr_t)(&v818), (int)(uintptr_t)(&v819), 6, 0, 7, 0, 0, (int)(uintptr_t)(&v820));
  v558 = v357;
  g4_std::string::Destroy(&v820);
  g4_std::string::Destroy(&v819);
  g4_std::string::Destroy(&v818);
  g4_std::string::Destroy(&v817);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v821), "btn_next", (int)(uintptr_t)(&v503));
  g4_std::string::construct_copy(&v822, &v559);
  g4_std::string::construct_copy(&v823, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v824), (char *)&unk_1B15112, (int)(uintptr_t)(&v503) + 1);
  v358 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v358, (int)(uintptr_t)(&v821), (int)(uintptr_t)(&v822), (int)(uintptr_t)(&v823), 6, 0, 7, 0, 0, (int)(uintptr_t)(&v824));
  v558 = v358;
  g4_std::string::Destroy(&v824);
  g4_std::string::Destroy(&v823);
  g4_std::string::Destroy(&v822);
  g4_std::string::Destroy(&v821);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v825), "btn_back", (int)(uintptr_t)(&v503) + 2);
  g4_std::string::construct_copy(&v826, &v559);
  g4_std::string::construct_copy(&v827, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v828), (char *)&unk_1B15112, (int)(uintptr_t)(&v503) + 3);
  v359 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v359, (int)(uintptr_t)(&v825), (int)(uintptr_t)(&v826), (int)(uintptr_t)(&v827), 8, 5, 8, 0, 0, (int)(uintptr_t)(&v828));
  v558 = v359;
  g4_std::string::Destroy(&v828);
  g4_std::string::Destroy(&v827);
  g4_std::string::Destroy(&v826);
  g4_std::string::Destroy(&v825);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v55 = *(uint32_t **)(a1 + 84);
  if ( v55 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
    v58 = v1261;
  }
  else
  {
    if ( v55 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v55 = 0;
      v55[1] = 0;
      v55[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v250 = 4 * v5;
        v56 = (char *)opNew(4 * v5);
        v57 = v250;
      }
      else
      {
        v57 = 0;
        v56 = nullptr;
      }
      *v55 = (uint32_t)(uintptr_t)(v56);
      v55[1] = (uint32_t)(uintptr_t)(v56);
      v58 = v1261;
      v59 = v1262 - v1261;
      v55[2] = (uint32_t)(uintptr_t)(&v56[v57]);
      v60 = 0;
      v61 = v59 >> 2;
      if ( v61 != 0 )
      {
        v275 = 4 * v61;
        memmove(v56, v58, 4 * v61);
        v58 = v1261;
        v60 = v275;
      }
      v62 = &v56[v60];
      v63 = a1;
      v55[1] = (uint32_t)(uintptr_t)(v62);
      v64 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v58 = v1261;
      v64 = 0;
      v63 = a1;
    }
    *(uint32_t *)(v63 + 84) = v64 + 12;
  }
  v1262 = (uint8_t *)(v58);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v829), "ctrl_vol_all.btn_handle.bounds", (int)(uintptr_t)(&v504));
  g4_std::string::construct_copy(&v830, &v559);
  g4_std::string::construct_copy(&v831, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v832), "ctrl_vol_all_label", (int)(uintptr_t)(&v504) + 1);
  v360 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v360, (int)(uintptr_t)(&v829), (int)(uintptr_t)(&v830), (int)(uintptr_t)(&v831), -1, 8, -1, 1, 0, (int)(uintptr_t)(&v832));
  v558 = v360;
  g4_std::string::Destroy(&v832);
  g4_std::string::Destroy(&v831);
  g4_std::string::Destroy(&v830);
  g4_std::string::Destroy(&v829);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v833), "ctrl_vol_music.btn_handle.bounds", (int)(uintptr_t)(&v504) + 2);
  g4_std::string::construct_copy(&v834, &v559);
  g4_std::string::construct_copy(&v835, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v836), "ctrl_vol_music_label", (int)(uintptr_t)(&v504) + 3);
  v361 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v361, (int)(uintptr_t)(&v833), (int)(uintptr_t)(&v834), (int)(uintptr_t)(&v835), -1, 0, -1, 2, 0, (int)(uintptr_t)(&v836));
  v558 = v361;
  g4_std::string::Destroy(&v836);
  g4_std::string::Destroy(&v835);
  g4_std::string::Destroy(&v834);
  g4_std::string::Destroy(&v833);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v837), "ctrl_vol_radio.btn_handle.bounds", (int)(uintptr_t)(&v505));
  g4_std::string::construct_copy(&v838, &v559);
  g4_std::string::construct_copy(&v839, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v840), "ctrl_vol_radio_label", (int)(uintptr_t)(&v505) + 1);
  v362 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v362, (int)(uintptr_t)(&v837), (int)(uintptr_t)(&v838), (int)(uintptr_t)(&v839), -1, 1, -1, 3, 0, (int)(uintptr_t)(&v840));
  v558 = v362;
  g4_std::string::Destroy(&v840);
  g4_std::string::Destroy(&v839);
  g4_std::string::Destroy(&v838);
  g4_std::string::Destroy(&v837);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v841), "ctrl_vol_vfx.btn_handle.bounds", (int)(uintptr_t)(&v505) + 2);
  g4_std::string::construct_copy(&v842, &v559);
  g4_std::string::construct_copy(&v843, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v844), "ctrl_vol_vfx_label", (int)(uintptr_t)(&v505) + 3);
  v363 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v363, (int)(uintptr_t)(&v841), (int)(uintptr_t)(&v842), (int)(uintptr_t)(&v843), -1, 2, -1, 4, 0, (int)(uintptr_t)(&v844));
  v558 = v363;
  g4_std::string::Destroy(&v844);
  g4_std::string::Destroy(&v843);
  g4_std::string::Destroy(&v842);
  g4_std::string::Destroy(&v841);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v845), "ctrl_vol_sfx.btn_handle.bounds", (int)(uintptr_t)(&v506));
  g4_std::string::construct_copy(&v846, &v559);
  g4_std::string::construct_copy(&v847, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v848), "ctrl_vol_sfx_label", (int)(uintptr_t)(&v506) + 1);
  v364 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v364, (int)(uintptr_t)(&v845), (int)(uintptr_t)(&v846), (int)(uintptr_t)(&v847), -1, 3, -1, 6, 0, (int)(uintptr_t)(&v848));
  v558 = v364;
  g4_std::string::Destroy(&v848);
  g4_std::string::Destroy(&v847);
  g4_std::string::Destroy(&v846);
  g4_std::string::Destroy(&v845);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v849), "btn_game", (int)(uintptr_t)(&v506) + 2);
  g4_std::string::construct_copy(&v850, &v559);
  g4_std::string::construct_copy(&v851, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v852), "btn_game.mc_label", (int)(uintptr_t)(&v506) + 3);
  v365 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v365, (int)(uintptr_t)(&v849), (int)(uintptr_t)(&v850), (int)(uintptr_t)(&v851), 7, 4, 6, 8, 0, (int)(uintptr_t)(&v852));
  v558 = v365;
  g4_std::string::Destroy(&v852);
  g4_std::string::Destroy(&v851);
  g4_std::string::Destroy(&v850);
  g4_std::string::Destroy(&v849);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v853), "btn_sounds", (int)(uintptr_t)(&v507));
  g4_std::string::construct_copy(&v854, &v559);
  g4_std::string::construct_copy(&v855, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v856), "btn_sounds.mc_label", (int)(uintptr_t)(&v507) + 1);
  v366 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v366, (int)(uintptr_t)(&v853), (int)(uintptr_t)(&v854), (int)(uintptr_t)(&v855), 5, 4, 7, 8, 0, (int)(uintptr_t)(&v856));
  v558 = v366;
  g4_std::string::Destroy(&v856);
  g4_std::string::Destroy(&v855);
  g4_std::string::Destroy(&v854);
  g4_std::string::Destroy(&v853);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v857), "btn_controls", (int)(uintptr_t)(&v507) + 2);
  g4_std::string::construct_copy(&v858, &v559);
  g4_std::string::construct_copy(&v859, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v860), "btn_controls.mc_label", (int)(uintptr_t)(&v507) + 3);
  v367 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v367, (int)(uintptr_t)(&v857), (int)(uintptr_t)(&v858), (int)(uintptr_t)(&v859), 6, 4, 5, 8, 0, (int)(uintptr_t)(&v860));
  v558 = v367;
  g4_std::string::Destroy(&v860);
  g4_std::string::Destroy(&v859);
  g4_std::string::Destroy(&v858);
  g4_std::string::Destroy(&v857);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v861), "btn_back", (int)(uintptr_t)(&v508));
  g4_std::string::construct_copy(&v862, &v559);
  g4_std::string::construct_copy(&v863, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v864), (char *)&unk_1B15112, (int)(uintptr_t)(&v508) + 1);
  v368 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v368, (int)(uintptr_t)(&v861), (int)(uintptr_t)(&v862), (int)(uintptr_t)(&v863), 7, 5, 5, 0, 0, (int)(uintptr_t)(&v864));
  v558 = v368;
  g4_std::string::Destroy(&v864);
  g4_std::string::Destroy(&v863);
  g4_std::string::Destroy(&v862);
  g4_std::string::Destroy(&v861);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v65 = *(uint32_t **)(a1 + 84);
  if ( v65 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
    v68 = v1261;
  }
  else
  {
    if ( v65 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v65 = 0;
      v65[1] = 0;
      v65[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v251 = 4 * v5;
        v66 = (char *)opNew(4 * v5);
        v67 = v251;
      }
      else
      {
        v67 = 0;
        v66 = nullptr;
      }
      *v65 = (uint32_t)(uintptr_t)(v66);
      v65[1] = (uint32_t)(uintptr_t)(v66);
      v68 = v1261;
      v69 = v1262 - v1261;
      v65[2] = (uint32_t)(uintptr_t)(&v66[v67]);
      v70 = 0;
      v71 = v69 >> 2;
      if ( v71 != 0 )
      {
        v274 = 4 * v71;
        memmove(v66, v68, 4 * v71);
        v68 = v1261;
        v70 = v274;
      }
      v72 = &v66[v70];
      v73 = a1;
      v65[1] = (uint32_t)(uintptr_t)(v72);
      v74 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v68 = v1261;
      v74 = 0;
      v73 = a1;
    }
    *(uint32_t *)(v73 + 84) = v74 + 12;
  }
  v1262 = (uint8_t *)(v68);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v865), "ctrl_accel", (int)(uintptr_t)(&v508) + 2);
  g4_std::string::construct_copy(&v866, &v559);
  g4_std::string::construct_copy(&v867, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v868), "ctrl_accel_label", (int)(uintptr_t)(&v508) + 3);
  v369 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v369, (int)(uintptr_t)(&v865), (int)(uintptr_t)(&v866), (int)(uintptr_t)(&v867), 10, 8, 4, 1, 0, (int)(uintptr_t)(&v868));
  v558 = v369;
  g4_std::string::Destroy(&v868);
  g4_std::string::Destroy(&v867);
  g4_std::string::Destroy(&v866);
  g4_std::string::Destroy(&v865);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v869), "ctrl_sensitivity.btn_handle", (int)(uintptr_t)(&v509));
  g4_std::string::construct_copy(&v870, &v559);
  g4_std::string::construct_copy(&v871, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v872), "ctrl_sensitivity_label", (int)(uintptr_t)(&v509) + 1);
  v370 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v370, (int)(uintptr_t)(&v869), (int)(uintptr_t)(&v870), (int)(uintptr_t)(&v871), -1, 0, -1, 2, 0, (int)(uintptr_t)(&v872));
  v558 = v370;
  g4_std::string::Destroy(&v872);
  g4_std::string::Destroy(&v871);
  g4_std::string::Destroy(&v870);
  g4_std::string::Destroy(&v869);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v873), "ctrl_camera_sensitivity.btn_handle", (int)(uintptr_t)(&v509) + 2);
  g4_std::string::construct_copy(&v874, &v559);
  g4_std::string::construct_copy(&v875, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v876), "ctrl_camera_sensitivity_label", (int)(uintptr_t)(&v509) + 3);
  v371 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v371, (int)(uintptr_t)(&v873), (int)(uintptr_t)(&v874), (int)(uintptr_t)(&v875), -1, 1, -1, 3, 0, (int)(uintptr_t)(&v876));
  v558 = v371;
  g4_std::string::Destroy(&v876);
  g4_std::string::Destroy(&v875);
  g4_std::string::Destroy(&v874);
  g4_std::string::Destroy(&v873);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v877), "btn_moga_help", (int)(uintptr_t)(&v510));
  g4_std::string::construct_copy(&v878, &v559);
  g4_std::string::construct_copy(&v879, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v880), (char *)&unk_1B15112, (int)(uintptr_t)(&v510) + 1);
  v372 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v372, (int)(uintptr_t)(&v877), (int)(uintptr_t)(&v878), (int)(uintptr_t)(&v879), 13, 2, 4, 11, 0, (int)(uintptr_t)(&v880));
  v558 = v372;
  g4_std::string::Destroy(&v880);
  g4_std::string::Destroy(&v879);
  g4_std::string::Destroy(&v878);
  g4_std::string::Destroy(&v877);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v881), "mc_controls_tabs.btn_tab_car.mc_hitzone", (int)(uintptr_t)(&v510) + 2);
  g4_std::string::construct_copy(&v882, &v559);
  g4_std::string::construct_copy(&v883, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v884), (char *)&unk_1B15112, (int)(uintptr_t)(&v510) + 3);
  v373 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v373, (int)(uintptr_t)(&v881), (int)(uintptr_t)(&v882), (int)(uintptr_t)(&v883), 0, 13, 5, 13, 0, (int)(uintptr_t)(&v884));
  v558 = v373;
  g4_std::string::Destroy(&v884);
  g4_std::string::Destroy(&v883);
  g4_std::string::Destroy(&v882);
  g4_std::string::Destroy(&v881);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v885), "mc_controls_tabs.btn_tab_moto.mc_hitzone", (int)(uintptr_t)(&v511));
  g4_std::string::construct_copy(&v886, &v559);
  g4_std::string::construct_copy(&v887, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v888), (char *)&unk_1B15112, (int)(uintptr_t)(&v511) + 1);
  v374 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v374, (int)(uintptr_t)(&v885), (int)(uintptr_t)(&v886), (int)(uintptr_t)(&v887), 4, 13, 6, 13, 0, (int)(uintptr_t)(&v888));
  v558 = v374;
  g4_std::string::Destroy(&v888);
  g4_std::string::Destroy(&v887);
  g4_std::string::Destroy(&v886);
  g4_std::string::Destroy(&v885);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v889), "mc_controls_tabs.btn_tab_helicopter.mc_hitzone", (int)(uintptr_t)(&v511) + 2);
  g4_std::string::construct_copy(&v890, &v559);
  g4_std::string::construct_copy(&v891, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v892), (char *)&unk_1B15112, (int)(uintptr_t)(&v511) + 3);
  v375 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v375, (int)(uintptr_t)(&v889), (int)(uintptr_t)(&v890), (int)(uintptr_t)(&v891), 5, 13, 7, 13, 0, (int)(uintptr_t)(&v892));
  v558 = v375;
  g4_std::string::Destroy(&v892);
  g4_std::string::Destroy(&v891);
  g4_std::string::Destroy(&v890);
  g4_std::string::Destroy(&v889);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v893), "mc_controls_tabs.btn_tab_airplane.mc_hitzone", (int)(uintptr_t)(&v512));
  g4_std::string::construct_copy(&v894, &v559);
  g4_std::string::construct_copy(&v895, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v896), (char *)&unk_1B15112, (int)(uintptr_t)(&v512) + 1);
  v376 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v376, (int)(uintptr_t)(&v893), (int)(uintptr_t)(&v894), (int)(uintptr_t)(&v895), 6, 13, 8, 13, 0, (int)(uintptr_t)(&v896));
  v558 = v376;
  g4_std::string::Destroy(&v896);
  g4_std::string::Destroy(&v895);
  g4_std::string::Destroy(&v894);
  g4_std::string::Destroy(&v893);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v897), "mc_controls_tabs.btn_tab_foot.mc_hitzone", (int)(uintptr_t)(&v512) + 2);
  g4_std::string::construct_copy(&v898, &v559);
  g4_std::string::construct_copy(&v899, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v900), (char *)&unk_1B15112, (int)(uintptr_t)(&v512) + 3);
  v377 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v377, (int)(uintptr_t)(&v897), (int)(uintptr_t)(&v898), (int)(uintptr_t)(&v899), 7, 13, 0, 13, 0, (int)(uintptr_t)(&v900));
  v558 = v377;
  g4_std::string::Destroy(&v900);
  g4_std::string::Destroy(&v899);
  g4_std::string::Destroy(&v898);
  g4_std::string::Destroy(&v897);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v901), "controls_schemes_list.mc_btn_inc", (int)(uintptr_t)(&v513));
  g4_std::string::construct_copy(&v902, &v559);
  g4_std::string::construct_copy(&v903, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v904), (char *)&unk_1B15112, (int)(uintptr_t)(&v513) + 1);
  v378 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v378, (int)(uintptr_t)(&v901), (int)(uintptr_t)(&v902), (int)(uintptr_t)(&v903), 8, 8, 1, 2, 0, (int)(uintptr_t)(&v904));
  v558 = v378;
  g4_std::string::Destroy(&v904);
  g4_std::string::Destroy(&v903);
  g4_std::string::Destroy(&v902);
  g4_std::string::Destroy(&v901);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v905), "controls_schemes_list.mc_btn_dec", (int)(uintptr_t)(&v513) + 2);
  g4_std::string::construct_copy(&v906, &v559);
  g4_std::string::construct_copy(&v907, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v908), (char *)&unk_1B15112, (int)(uintptr_t)(&v513) + 3);
  v379 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v379, (int)(uintptr_t)(&v905), (int)(uintptr_t)(&v906), (int)(uintptr_t)(&v907), 2, 8, 1, 2, 0, (int)(uintptr_t)(&v908));
  v558 = v379;
  g4_std::string::Destroy(&v908);
  g4_std::string::Destroy(&v907);
  g4_std::string::Destroy(&v906);
  g4_std::string::Destroy(&v905);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v909), "btn_game", (int)(uintptr_t)(&v514));
  g4_std::string::construct_copy(&v910, &v559);
  g4_std::string::construct_copy(&v911, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v912), "btn_game.mc_label", (int)(uintptr_t)(&v514) + 1);
  v380 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v380, (int)(uintptr_t)(&v909), (int)(uintptr_t)(&v910), (int)(uintptr_t)(&v911), 13, 3, 12, 14, 0, (int)(uintptr_t)(&v912));
  v558 = v380;
  g4_std::string::Destroy(&v912);
  g4_std::string::Destroy(&v911);
  g4_std::string::Destroy(&v910);
  g4_std::string::Destroy(&v909);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v913), "btn_sounds", (int)(uintptr_t)(&v514) + 2);
  g4_std::string::construct_copy(&v914, &v559);
  g4_std::string::construct_copy(&v915, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v916), "btn_sounds.mc_label", (int)(uintptr_t)(&v514) + 3);
  v381 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v381, (int)(uintptr_t)(&v913), (int)(uintptr_t)(&v914), (int)(uintptr_t)(&v915), 11, 4, 13, 14, 0, (int)(uintptr_t)(&v916));
  v558 = v381;
  g4_std::string::Destroy(&v916);
  g4_std::string::Destroy(&v915);
  g4_std::string::Destroy(&v914);
  g4_std::string::Destroy(&v913);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v917), "btn_controls", (int)(uintptr_t)(&v515));
  g4_std::string::construct_copy(&v918, &v559);
  g4_std::string::construct_copy(&v919, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v920), "btn_controls.mc_label", (int)(uintptr_t)(&v515) + 1);
  v382 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v382, (int)(uintptr_t)(&v917), (int)(uintptr_t)(&v918), (int)(uintptr_t)(&v919), 12, 4, 11, 14, 0, (int)(uintptr_t)(&v920));
  v558 = v382;
  g4_std::string::Destroy(&v920);
  g4_std::string::Destroy(&v919);
  g4_std::string::Destroy(&v918);
  g4_std::string::Destroy(&v917);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v921), "btn_back", (int)(uintptr_t)(&v515) + 2);
  g4_std::string::construct_copy(&v922, &v559);
  g4_std::string::construct_copy(&v923, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v924), (char *)&unk_1B15112, (int)(uintptr_t)(&v515) + 3);
  v383 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v383, (int)(uintptr_t)(&v921), (int)(uintptr_t)(&v922), (int)(uintptr_t)(&v923), 13, 3, 11, 0, 0, (int)(uintptr_t)(&v924));
  v558 = v383;
  g4_std::string::Destroy(&v924);
  g4_std::string::Destroy(&v923);
  g4_std::string::Destroy(&v922);
  g4_std::string::Destroy(&v921);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v75 = *(uint32_t **)(a1 + 84);
  if ( v75 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
    v78 = v1261;
  }
  else
  {
    if ( v75 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v75 = 0;
      v75[1] = 0;
      v75[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v252 = 4 * v5;
        v76 = (char *)opNew(4 * v5);
        v77 = v252;
      }
      else
      {
        v77 = 0;
        v76 = nullptr;
      }
      *v75 = (uint32_t)(uintptr_t)(v76);
      v75[1] = (uint32_t)(uintptr_t)(v76);
      v78 = v1261;
      v79 = v1262 - v1261;
      v75[2] = (uint32_t)(uintptr_t)(&v76[v77]);
      v80 = 0;
      v81 = v79 >> 2;
      if ( v81 != 0 )
      {
        v273 = 4 * v81;
        memmove(v76, v78, 4 * v81);
        v78 = v1261;
        v80 = v273;
      }
      v82 = &v76[v80];
      v83 = a1;
      v75[1] = (uint32_t)(uintptr_t)(v82);
      v84 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v78 = v1261;
      v84 = 0;
      v83 = a1;
    }
    *(uint32_t *)(v83 + 84) = v84 + 12;
  }
  v1262 = (uint8_t *)(v78);
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "focus_in_end", 0xCu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v925), "btn_back", (int)(uintptr_t)(&v516));
  g4_std::string::construct_copy(&v926, &v559);
  g4_std::string::construct_copy(&v927, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v928), (char *)&unk_1B15112, (int)(uintptr_t)(&v516) + 1);
  v384 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v384, (int)(uintptr_t)(&v925), (int)(uintptr_t)(&v926), (int)(uintptr_t)(&v927), 2, 0, 1, 0, 0, (int)(uintptr_t)(&v928));
  v558 = v384;
  g4_std::string::Destroy(&v928);
  g4_std::string::Destroy(&v927);
  g4_std::string::Destroy(&v926);
  g4_std::string::Destroy(&v925);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v929), "btn_twitter", (int)(uintptr_t)(&v516) + 2);
  g4_std::string::construct_copy(&v930, &v559);
  g4_std::string::construct_copy(&v931, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v932), (char *)&unk_1B15112, (int)(uintptr_t)(&v516) + 3);
  v385 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v385, (int)(uintptr_t)(&v929), (int)(uintptr_t)(&v930), (int)(uintptr_t)(&v931), 0, 0, 2, 0, 0, (int)(uintptr_t)(&v932));
  v558 = v385;
  g4_std::string::Destroy(&v932);
  g4_std::string::Destroy(&v931);
  g4_std::string::Destroy(&v930);
  g4_std::string::Destroy(&v929);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v933), "btn_facebook", (int)(uintptr_t)(&v517));
  g4_std::string::construct_copy(&v934, &v559);
  g4_std::string::construct_copy(&v935, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v936), (char *)&unk_1B15112, (int)(uintptr_t)(&v517) + 1);
  v386 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v386, (int)(uintptr_t)(&v933), (int)(uintptr_t)(&v934), (int)(uintptr_t)(&v935), 1, 0, 0, 0, 0, (int)(uintptr_t)(&v936));
  v558 = v386;
  g4_std::string::Destroy(&v936);
  g4_std::string::Destroy(&v935);
  g4_std::string::Destroy(&v934);
  g4_std::string::Destroy(&v933);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v85 = *(uint32_t **)(a1 + 84);
  if ( v85 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
    v88 = v1261;
  }
  else
  {
    if ( v85 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v85 = 0;
      v85[1] = 0;
      v85[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v253 = 4 * v5;
        v86 = (char *)opNew(4 * v5);
        v87 = v253;
      }
      else
      {
        v87 = 0;
        v86 = nullptr;
      }
      *v85 = (uint32_t)(uintptr_t)(v86);
      v85[1] = (uint32_t)(uintptr_t)(v86);
      v88 = v1261;
      v89 = v1262 - v1261;
      v85[2] = (uint32_t)(uintptr_t)(&v86[v87]);
      v90 = 0;
      v91 = v89 >> 2;
      if ( v91 != 0 )
      {
        v272 = 4 * v91;
        memmove(v86, v88, 4 * v91);
        v88 = v1261;
        v90 = v272;
      }
      v92 = &v86[v90];
      v93 = a1;
      v85[1] = (uint32_t)(uintptr_t)(v92);
      v94 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v88 = v1261;
      v94 = 0;
      v93 = a1;
    }
    *(uint32_t *)(v93 + 84) = v94 + 12;
  }
  v1262 = (uint8_t *)(v88);
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "pressed_end", 0xBu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v937), "btn_blackjack", (int)(uintptr_t)(&v517) + 2);
  g4_std::string::construct_copy(&v938, &v559);
  g4_std::string::construct_copy(&v939, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v940), (char *)&unk_1B15112, (int)(uintptr_t)(&v517) + 3);
  v387 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v387, (int)(uintptr_t)(&v937), (int)(uintptr_t)(&v938), (int)(uintptr_t)(&v939), 2, 3, 1, 4, 2, (int)(uintptr_t)(&v940));
  v558 = v387;
  g4_std::string::Destroy(&v940);
  g4_std::string::Destroy(&v939);
  g4_std::string::Destroy(&v938);
  g4_std::string::Destroy(&v937);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v941), "btn_slotmachine", (int)(uintptr_t)(&v518));
  g4_std::string::construct_copy(&v942, &v559);
  g4_std::string::construct_copy(&v943, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v944), (char *)&unk_1B15112, (int)(uintptr_t)(&v518) + 1);
  v388 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v388, (int)(uintptr_t)(&v941), (int)(uintptr_t)(&v942), (int)(uintptr_t)(&v943), 0, 3, 2, 4, 2, (int)(uintptr_t)(&v944));
  v558 = v388;
  g4_std::string::Destroy(&v944);
  g4_std::string::Destroy(&v943);
  g4_std::string::Destroy(&v942);
  g4_std::string::Destroy(&v941);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v945), "btn_videopoker", (int)(uintptr_t)(&v518) + 2);
  g4_std::string::construct_copy(&v946, &v559);
  g4_std::string::construct_copy(&v947, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v948), (char *)&unk_1B15112, (int)(uintptr_t)(&v518) + 3);
  v389 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v389, (int)(uintptr_t)(&v945), (int)(uintptr_t)(&v946), (int)(uintptr_t)(&v947), 1, 3, 0, 4, 2, (int)(uintptr_t)(&v948));
  v558 = v389;
  g4_std::string::Destroy(&v948);
  g4_std::string::Destroy(&v947);
  g4_std::string::Destroy(&v946);
  g4_std::string::Destroy(&v945);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v949), "btn_resume", (int)(uintptr_t)(&v519));
  g4_std::string::construct_copy(&v950, &v559);
  g4_std::string::construct_copy(&v951, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v952), (char *)&unk_1B15112, (int)(uintptr_t)(&v519) + 1);
  v390 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v390, (int)(uintptr_t)(&v949), (int)(uintptr_t)(&v950), (int)(uintptr_t)(&v951), 2, 4, 0, 0, 2, (int)(uintptr_t)(&v952));
  v558 = v390;
  g4_std::string::Destroy(&v952);
  g4_std::string::Destroy(&v951);
  g4_std::string::Destroy(&v950);
  g4_std::string::Destroy(&v949);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v953), "btn_back", (int)(uintptr_t)(&v519) + 2);
  g4_std::string::construct_copy(&v954, &v559);
  g4_std::string::construct_copy(&v955, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v956), (char *)&unk_1B15112, (int)(uintptr_t)(&v519) + 3);
  v391 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v391, (int)(uintptr_t)(&v953), (int)(uintptr_t)(&v954), (int)(uintptr_t)(&v955), 2, 0, 0, 3, 2, (int)(uintptr_t)(&v956));
  v558 = v391;
  g4_std::string::Destroy(&v956);
  g4_std::string::Destroy(&v955);
  g4_std::string::Destroy(&v954);
  g4_std::string::Destroy(&v953);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v95 = *(uint32_t **)(a1 + 84);
  if ( v95 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
    v98 = v1261;
  }
  else
  {
    if ( v95 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v95 = 0;
      v95[1] = 0;
      v95[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v254 = 4 * v5;
        v96 = (char *)opNew(4 * v5);
        v97 = v254;
      }
      else
      {
        v97 = 0;
        v96 = nullptr;
      }
      *v95 = (uint32_t)(uintptr_t)(v96);
      v95[1] = (uint32_t)(uintptr_t)(v96);
      v98 = v1261;
      v99 = v1262 - v1261;
      v95[2] = (uint32_t)(uintptr_t)(&v96[v97]);
      v100 = 0;
      v101 = v99 >> 2;
      if ( v101 != 0 )
      {
        v271 = 4 * v101;
        memmove(v96, v98, 4 * v101);
        v98 = v1261;
        v100 = v271;
      }
      v102 = &v96[v100];
      v103 = a1;
      v95[1] = (uint32_t)(uintptr_t)(v102);
      v104 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v98 = v1261;
      v104 = 0;
      v103 = a1;
    }
    *(uint32_t *)(v103 + 84) = v104 + 12;
  }
  v1262 = (uint8_t *)(v98);
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "focus_in_end", 0xCu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v957), "mc_notification_0.mc_switch", (int)(uintptr_t)(&v520));
  g4_std::string::construct_copy(&v958, &v559);
  g4_std::string::construct_copy(&v959, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v960), "mc_notification_0.tf_name", (int)(uintptr_t)(&v520) + 1);
  v392 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v392, (int)(uintptr_t)(&v957), (int)(uintptr_t)(&v958), (int)(uintptr_t)(&v959), 3, 3, 3, 1, 0, (int)(uintptr_t)(&v960));
  v558 = v392;
  g4_std::string::Destroy(&v960);
  g4_std::string::Destroy(&v959);
  g4_std::string::Destroy(&v958);
  g4_std::string::Destroy(&v957);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v961), "mc_notification_1.mc_switch", (int)(uintptr_t)(&v520) + 2);
  g4_std::string::construct_copy(&v962, &v559);
  g4_std::string::construct_copy(&v963, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v964), "mc_notification_1.tf_name", (int)(uintptr_t)(&v520) + 3);
  v393 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v393, (int)(uintptr_t)(&v961), (int)(uintptr_t)(&v962), (int)(uintptr_t)(&v963), 3, 0, 3, 2, 0, (int)(uintptr_t)(&v964));
  v558 = v393;
  g4_std::string::Destroy(&v964);
  g4_std::string::Destroy(&v963);
  g4_std::string::Destroy(&v962);
  g4_std::string::Destroy(&v961);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v965), "mc_notification_2.mc_switch", (int)(uintptr_t)(&v521));
  g4_std::string::construct_copy(&v966, &v559);
  g4_std::string::construct_copy(&v967, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v968), "mc_notification_2.tf_name", (int)(uintptr_t)(&v521) + 1);
  v394 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v394, (int)(uintptr_t)(&v965), (int)(uintptr_t)(&v966), (int)(uintptr_t)(&v967), 3, 1, 3, 3, 0, (int)(uintptr_t)(&v968));
  v558 = v394;
  g4_std::string::Destroy(&v968);
  g4_std::string::Destroy(&v967);
  g4_std::string::Destroy(&v966);
  g4_std::string::Destroy(&v965);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v969), "btn_back", (int)(uintptr_t)(&v521) + 2);
  g4_std::string::construct_copy(&v970, &v559);
  g4_std::string::construct_copy(&v971, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v972), (char *)&unk_1B15112, (int)(uintptr_t)(&v521) + 3);
  v395 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v395, (int)(uintptr_t)(&v969), (int)(uintptr_t)(&v970), (int)(uintptr_t)(&v971), 3, 2, 2, 0, 0, (int)(uintptr_t)(&v972));
  v558 = v395;
  g4_std::string::Destroy(&v972);
  g4_std::string::Destroy(&v971);
  g4_std::string::Destroy(&v970);
  g4_std::string::Destroy(&v969);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v105 = *(uint32_t **)(a1 + 84);
  if ( v105 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
    v108 = v1261;
  }
  else
  {
    if ( v105 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v105 = 0;
      v105[1] = 0;
      v105[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v255 = 4 * v5;
        v106 = (char *)opNew(4 * v5);
        v107 = v255;
      }
      else
      {
        v107 = 0;
        v106 = nullptr;
      }
      *v105 = (uint32_t)(uintptr_t)(v106);
      v105[1] = (uint32_t)(uintptr_t)(v106);
      v108 = v1261;
      v109 = v1262 - v1261;
      v105[2] = (uint32_t)(uintptr_t)(&v106[v107]);
      v110 = 0;
      v111 = v109 >> 2;
      if ( v111 != 0 )
      {
        v270 = 4 * v111;
        memmove(v106, v108, 4 * v111);
        v108 = v1261;
        v110 = v270;
      }
      v112 = &v106[v110];
      v113 = a1;
      v105[1] = (uint32_t)(uintptr_t)(v112);
      v114 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v108 = v1261;
      v114 = 0;
      v113 = a1;
    }
    *(uint32_t *)(v113 + 84) = v114 + 12;
  }
  v1262 = (uint8_t *)(v108);
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "focus_in_end", 0xCu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v973), "toggle_veryhigh.mc_toggle", (int)(uintptr_t)(&v522));
  g4_std::string::construct_copy(&v974, &v559);
  g4_std::string::construct_copy(&v975, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v976), "toggle_veryhigh.tf_name", (int)(uintptr_t)(&v522) + 1);
  v396 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v396, (int)(uintptr_t)(&v973), (int)(uintptr_t)(&v974), (int)(uintptr_t)(&v975), 5, 0, 5, 1, 0, (int)(uintptr_t)(&v976));
  v558 = v396;
  g4_std::string::Destroy(&v976);
  g4_std::string::Destroy(&v975);
  g4_std::string::Destroy(&v974);
  g4_std::string::Destroy(&v973);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v977), "toggle_high.mc_toggle", (int)(uintptr_t)(&v522) + 2);
  g4_std::string::construct_copy(&v978, &v559);
  g4_std::string::construct_copy(&v979, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v980), "toggle_high.tf_name", (int)(uintptr_t)(&v522) + 3);
  v397 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v397, (int)(uintptr_t)(&v977), (int)(uintptr_t)(&v978), (int)(uintptr_t)(&v979), 5, 0, 5, 2, 0, (int)(uintptr_t)(&v980));
  v558 = v397;
  g4_std::string::Destroy(&v980);
  g4_std::string::Destroy(&v979);
  g4_std::string::Destroy(&v978);
  g4_std::string::Destroy(&v977);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v981), "toggle_mid.mc_toggle", (int)(uintptr_t)(&v523));
  g4_std::string::construct_copy(&v982, &v559);
  g4_std::string::construct_copy(&v983, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v984), "toggle_mid.tf_name", (int)(uintptr_t)(&v523) + 1);
  v398 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v398, (int)(uintptr_t)(&v981), (int)(uintptr_t)(&v982), (int)(uintptr_t)(&v983), 5, 1, 5, 3, 0, (int)(uintptr_t)(&v984));
  v558 = v398;
  g4_std::string::Destroy(&v984);
  g4_std::string::Destroy(&v983);
  g4_std::string::Destroy(&v982);
  g4_std::string::Destroy(&v981);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v985), "toggle_low.mc_toggle", (int)(uintptr_t)(&v523) + 2);
  g4_std::string::construct_copy(&v986, &v559);
  g4_std::string::construct_copy(&v987, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v988), "toggle_low.tf_name", (int)(uintptr_t)(&v523) + 3);
  v399 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v399, (int)(uintptr_t)(&v985), (int)(uintptr_t)(&v986), (int)(uintptr_t)(&v987), 5, 2, 5, 4, 0, (int)(uintptr_t)(&v988));
  v558 = v399;
  g4_std::string::Destroy(&v988);
  g4_std::string::Destroy(&v987);
  g4_std::string::Destroy(&v986);
  g4_std::string::Destroy(&v985);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v989), "toggle_lowend.mc_toggle", (int)(uintptr_t)(&v524));
  g4_std::string::construct_copy(&v990, &v559);
  g4_std::string::construct_copy(&v991, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v992), "toggle_lowend.tf_name", (int)(uintptr_t)(&v524) + 1);
  v400 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v400, (int)(uintptr_t)(&v989), (int)(uintptr_t)(&v990), (int)(uintptr_t)(&v991), 5, 3, 5, 5, 0, (int)(uintptr_t)(&v992));
  v558 = v400;
  g4_std::string::Destroy(&v992);
  g4_std::string::Destroy(&v991);
  g4_std::string::Destroy(&v990);
  g4_std::string::Destroy(&v989);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v993), "btn_back", (int)(uintptr_t)(&v524) + 2);
  g4_std::string::construct_copy(&v994, &v559);
  g4_std::string::construct_copy(&v995, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v996), (char *)&unk_1B15112, (int)(uintptr_t)(&v524) + 3);
  v401 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v401, (int)(uintptr_t)(&v993), (int)(uintptr_t)(&v994), (int)(uintptr_t)(&v995), 5, 4, 5, 0, 0, (int)(uintptr_t)(&v996));
  v558 = v401;
  g4_std::string::Destroy(&v996);
  g4_std::string::Destroy(&v995);
  g4_std::string::Destroy(&v994);
  g4_std::string::Destroy(&v993);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v115 = *(uint32_t **)(a1 + 84);
  if ( v115 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
    v118 = v1261;
  }
  else
  {
    if ( v115 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v115 = 0;
      v115[1] = 0;
      v115[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v256 = 4 * v5;
        v116 = (char *)opNew(4 * v5);
        v117 = v256;
      }
      else
      {
        v117 = 0;
        v116 = nullptr;
      }
      *v115 = (uint32_t)(uintptr_t)(v116);
      v115[1] = (uint32_t)(uintptr_t)(v116);
      v118 = v1261;
      v119 = v1262 - v1261;
      v115[2] = (uint32_t)(uintptr_t)(&v116[v117]);
      v120 = 0;
      v121 = v119 >> 2;
      if ( v121 != 0 )
      {
        v269 = 4 * v121;
        memmove(v116, v118, 4 * v121);
        v118 = v1261;
        v120 = v269;
      }
      v122 = &v116[v120];
      v123 = a1;
      v115[1] = (uint32_t)(uintptr_t)(v122);
      v124 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v118 = v1261;
      v124 = 0;
      v123 = a1;
    }
    *(uint32_t *)(v123 + 84) = v124 + 12;
  }
  v1262 = (uint8_t *)(v118);
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "pressed_end", 0xBu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v997), "confirm_alert_prompt.btn_ok", (int)(uintptr_t)(&v525));
  g4_std::string::construct_copy(&v998, &v559);
  g4_std::string::construct_copy(&v999, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1000), (char *)&unk_1B15112, (int)(uintptr_t)(&v525) + 1);
  v402 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v402, (int)(uintptr_t)(&v997), (int)(uintptr_t)(&v998), (int)(uintptr_t)(&v999), 2, 0, 2, 0, 0, (int)(uintptr_t)(&v1000));
  v558 = v402;
  g4_std::string::Destroy(&v1000);
  g4_std::string::Destroy(&v999);
  g4_std::string::Destroy(&v998);
  g4_std::string::Destroy(&v997);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1001), "confirm_alert_prompt.btn_later", (int)(uintptr_t)(&v525) + 2);
  g4_std::string::construct_copy(&v1002, &v559);
  g4_std::string::construct_copy(&v1003, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1004), (char *)&unk_1B15112, (int)(uintptr_t)(&v525) + 3);
  v403 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v403, (int)(uintptr_t)(&v1001), (int)(uintptr_t)(&v1002), (int)(uintptr_t)(&v1003), 2, 1, 0, 1, 0, (int)(uintptr_t)(&v1004));
  v558 = v403;
  g4_std::string::Destroy(&v1004);
  g4_std::string::Destroy(&v1003);
  g4_std::string::Destroy(&v1002);
  g4_std::string::Destroy(&v1001);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1005), "confirm_alert_prompt.btn_cancel", (int)(uintptr_t)(&v526));
  g4_std::string::construct_copy(&v1006, &v559);
  g4_std::string::construct_copy(&v1007, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1008), (char *)&unk_1B15112, (int)(uintptr_t)(&v526) + 1);
  v404 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v404, (int)(uintptr_t)(&v1005), (int)(uintptr_t)(&v1006), (int)(uintptr_t)(&v1007), 0, 2, 0, 2, 0, (int)(uintptr_t)(&v1008));
  v558 = v404;
  g4_std::string::Destroy(&v1008);
  g4_std::string::Destroy(&v1007);
  g4_std::string::Destroy(&v1006);
  g4_std::string::Destroy(&v1005);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v125 = *(uint32_t **)(a1 + 84);
  if ( v125 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v125 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v125 = 0;
      v125[1] = 0;
      v125[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v257 = 4 * v5;
        v126 = (char *)opNew(4 * v5);
        v127 = v257;
      }
      else
      {
        v127 = 0;
        v126 = nullptr;
      }
      *v125 = (uint32_t)(uintptr_t)(v126);
      v125[1] = (uint32_t)(uintptr_t)(v126);
      v128 = v1261;
      v129 = v1262 - v1261;
      v125[2] = (uint32_t)(uintptr_t)(&v126[v127]);
      v130 = 0;
      v131 = v129 >> 2;
      if ( v131 != 0 )
      {
        v292 = 4 * v131;
        memmove(v126, v128, 4 * v131);
        v130 = v292;
      }
      v132 = &v126[v130];
      v133 = a1;
      v125[1] = (uint32_t)(uintptr_t)(v132);
      v134 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v134 = 0;
      v133 = a1;
    }
    *(uint32_t *)(v133 + 84) = v134 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "focus_in_end", 0xCu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  v1262 = v1261;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1009), "btn_customer_care", (int)(uintptr_t)(&v526) + 2);
  g4_std::string::construct_copy(&v1010, &v559);
  g4_std::string::construct_copy(&v1011, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1012), (char *)&unk_1B15112, (int)(uintptr_t)(&v526) + 3);
  v405 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v405, (int)(uintptr_t)(&v1009), (int)(uintptr_t)(&v1010), (int)(uintptr_t)(&v1011), 5, 9, 5, 1, 2, (int)(uintptr_t)(&v1012));
  v558 = v405;
  g4_std::string::Destroy(&v1012);
  g4_std::string::Destroy(&v1011);
  g4_std::string::Destroy(&v1010);
  g4_std::string::Destroy(&v1009);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1013), "btn_language", (int)(uintptr_t)(&v527));
  g4_std::string::construct_copy(&v1014, &v559);
  g4_std::string::construct_copy(&v1015, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1016), (char *)&unk_1B15112, (int)(uintptr_t)(&v527) + 1);
  v406 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v406, (int)(uintptr_t)(&v1013), (int)(uintptr_t)(&v1014), (int)(uintptr_t)(&v1015), 5, 0, 5, 2, 2, (int)(uintptr_t)(&v1016));
  v558 = v406;
  g4_std::string::Destroy(&v1016);
  g4_std::string::Destroy(&v1015);
  g4_std::string::Destroy(&v1014);
  g4_std::string::Destroy(&v1013);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1017), "btn_notifications", (int)(uintptr_t)(&v527) + 2);
  g4_std::string::construct_copy(&v1018, &v559);
  g4_std::string::construct_copy(&v1019, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1020), (char *)&unk_1B15112, (int)(uintptr_t)(&v527) + 3);
  v407 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v407, (int)(uintptr_t)(&v1017), (int)(uintptr_t)(&v1018), (int)(uintptr_t)(&v1019), 6, 1, 6, 3, 2, (int)(uintptr_t)(&v1020));
  v558 = v407;
  g4_std::string::Destroy(&v1020);
  g4_std::string::Destroy(&v1019);
  g4_std::string::Destroy(&v1018);
  g4_std::string::Destroy(&v1017);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1021), "btn_help", (int)(uintptr_t)(&v528));
  g4_std::string::construct_copy(&v1022, &v559);
  g4_std::string::construct_copy(&v1023, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1024), (char *)&unk_1B15112, (int)(uintptr_t)(&v528) + 1);
  v408 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v408, (int)(uintptr_t)(&v1021), (int)(uintptr_t)(&v1022), (int)(uintptr_t)(&v1023), 7, 2, 7, 9, 2, (int)(uintptr_t)(&v1024));
  v558 = v408;
  g4_std::string::Destroy(&v1024);
  g4_std::string::Destroy(&v1023);
  g4_std::string::Destroy(&v1022);
  g4_std::string::Destroy(&v1021);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1025), "btn_graphics", (int)(uintptr_t)(&v528) + 2);
  g4_std::string::construct_copy(&v1026, &v559);
  g4_std::string::construct_copy(&v1027, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1028), (char *)&unk_1B15112, (int)(uintptr_t)(&v528) + 3);
  v409 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v409, (int)(uintptr_t)(&v1025), (int)(uintptr_t)(&v1026), (int)(uintptr_t)(&v1027), 8, 3, 8, 9, 2, (int)(uintptr_t)(&v1028));
  v558 = v409;
  g4_std::string::Destroy(&v1028);
  g4_std::string::Destroy(&v1027);
  g4_std::string::Destroy(&v1026);
  g4_std::string::Destroy(&v1025);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1029), "mc_toggle_subtitles", (int)(uintptr_t)(&v529));
  g4_std::string::construct_copy(&v1030, &v559);
  g4_std::string::construct_copy(&v1031, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1032), "tf_toggle_subtitles", (int)(uintptr_t)(&v529) + 1);
  v410 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v410, (int)(uintptr_t)(&v1029), (int)(uintptr_t)(&v1030), (int)(uintptr_t)(&v1031), 0, 8, 0, 6, 2, (int)(uintptr_t)(&v1032));
  v558 = v410;
  g4_std::string::Destroy(&v1032);
  g4_std::string::Destroy(&v1031);
  g4_std::string::Destroy(&v1030);
  g4_std::string::Destroy(&v1029);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1033), "mc_toggle_gps", (int)(uintptr_t)(&v529) + 2);
  g4_std::string::construct_copy(&v1034, &v559);
  g4_std::string::construct_copy(&v1035, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1036), "tf_toggle_gps", (int)(uintptr_t)(&v529) + 3);
  v411 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v411, (int)(uintptr_t)(&v1033), (int)(uintptr_t)(&v1034), (int)(uintptr_t)(&v1035), 0, 5, 0, 7, 2, (int)(uintptr_t)(&v1036));
  v558 = v411;
  g4_std::string::Destroy(&v1036);
  g4_std::string::Destroy(&v1035);
  g4_std::string::Destroy(&v1034);
  g4_std::string::Destroy(&v1033);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1037), "btn_facebook_log", (int)(uintptr_t)(&v530));
  g4_std::string::construct_copy(&v1038, &v559);
  g4_std::string::construct_copy(&v1039, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1040), (char *)&unk_1B15112, (int)(uintptr_t)(&v530) + 1);
  v412 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v412, (int)(uintptr_t)(&v1037), (int)(uintptr_t)(&v1038), (int)(uintptr_t)(&v1039), 2, 6, 2, 8, 2, (int)(uintptr_t)(&v1040));
  v558 = v412;
  g4_std::string::Destroy(&v1040);
  g4_std::string::Destroy(&v1039);
  g4_std::string::Destroy(&v1038);
  g4_std::string::Destroy(&v1037);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1041), "btn_gplus_log", (int)(uintptr_t)(&v530) + 2);
  g4_std::string::construct_copy(&v1042, &v559);
  g4_std::string::construct_copy(&v1043, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1044), (char *)&unk_1B15112, (int)(uintptr_t)(&v530) + 3);
  v413 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v413, (int)(uintptr_t)(&v1041), (int)(uintptr_t)(&v1042), (int)(uintptr_t)(&v1043), 3, 7, 3, 11, 2, (int)(uintptr_t)(&v1044));
  v558 = v413;
  g4_std::string::Destroy(&v1044);
  g4_std::string::Destroy(&v1043);
  g4_std::string::Destroy(&v1042);
  g4_std::string::Destroy(&v1041);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1045), "btn_game", (int)(uintptr_t)(&v531));
  g4_std::string::construct_copy(&v1046, &v559);
  g4_std::string::construct_copy(&v1047, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1048), "btn_game.mc_label", (int)(uintptr_t)(&v531) + 1);
  v414 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v414, (int)(uintptr_t)(&v1045), (int)(uintptr_t)(&v1046), (int)(uintptr_t)(&v1047), 11, 3, 10, 0, 2, (int)(uintptr_t)(&v1048));
  v558 = v414;
  g4_std::string::Destroy(&v1048);
  g4_std::string::Destroy(&v1047);
  g4_std::string::Destroy(&v1046);
  g4_std::string::Destroy(&v1045);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1049), "btn_sounds", (int)(uintptr_t)(&v531) + 2);
  g4_std::string::construct_copy(&v1050, &v559);
  g4_std::string::construct_copy(&v1051, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1052), "btn_sounds.mc_label", (int)(uintptr_t)(&v531) + 3);
  v415 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v415, (int)(uintptr_t)(&v1049), (int)(uintptr_t)(&v1050), (int)(uintptr_t)(&v1051), 9, 3, 11, 0, 2, (int)(uintptr_t)(&v1052));
  v558 = v415;
  g4_std::string::Destroy(&v1052);
  g4_std::string::Destroy(&v1051);
  g4_std::string::Destroy(&v1050);
  g4_std::string::Destroy(&v1049);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1053), "btn_controls", (int)(uintptr_t)(&v532));
  g4_std::string::construct_copy(&v1054, &v559);
  g4_std::string::construct_copy(&v1055, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1056), "btn_controls.mc_label", (int)(uintptr_t)(&v532) + 1);
  v416 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v416, (int)(uintptr_t)(&v1053), (int)(uintptr_t)(&v1054), (int)(uintptr_t)(&v1055), 10, 8, 9, 5, 2, (int)(uintptr_t)(&v1056));
  v558 = v416;
  g4_std::string::Destroy(&v1056);
  g4_std::string::Destroy(&v1055);
  g4_std::string::Destroy(&v1054);
  g4_std::string::Destroy(&v1053);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1057), "btn_back", (int)(uintptr_t)(&v532) + 2);
  g4_std::string::construct_copy(&v1058, &v559);
  g4_std::string::construct_copy(&v1059, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1060), (char *)&unk_1B15112, (int)(uintptr_t)(&v532) + 3);
  v417 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v417, (int)(uintptr_t)(&v1057), (int)(uintptr_t)(&v1058), (int)(uintptr_t)(&v1059), 11, 9, 9, 0, 2, (int)(uintptr_t)(&v1060));
  v558 = v417;
  g4_std::string::Destroy(&v1060);
  g4_std::string::Destroy(&v1059);
  g4_std::string::Destroy(&v1058);
  g4_std::string::Destroy(&v1057);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v135 = *(uint32_t **)(a1 + 84);
  if ( v135 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v135 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v135 = 0;
      v135[1] = 0;
      v135[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v258 = 4 * v5;
        v136 = (char *)opNew(4 * v5);
        v137 = v258;
      }
      else
      {
        v137 = 0;
        v136 = nullptr;
      }
      *v135 = (uint32_t)(uintptr_t)(v136);
      v135[1] = (uint32_t)(uintptr_t)(v136);
      v138 = v1261;
      v139 = v1262 - v1261;
      v135[2] = (uint32_t)(uintptr_t)(&v136[v137]);
      v140 = 0;
      v141 = v139 >> 2;
      if ( v141 != 0 )
      {
        v291 = 4 * v141;
        memmove(v136, v138, 4 * v141);
        v140 = v291;
      }
      v142 = &v136[v140];
      v143 = a1;
      v135[1] = (uint32_t)(uintptr_t)(v142);
      v144 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v144 = 0;
      v143 = a1;
    }
    *(uint32_t *)(v143 + 84) = v144 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "pressed_end", 0xBu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "released_end", 0xCu);
  v1262 = v1261;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1061), "value_money.btn_add", (int)(uintptr_t)(&v533));
  g4_std::string::construct_copy(&v1062, &v559);
  g4_std::string::construct_copy(&v1063, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1064), "value_money.tf", (int)(uintptr_t)(&v533) + 1);
  v418 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v418, (int)(uintptr_t)(&v1061), (int)(uintptr_t)(&v1062), (int)(uintptr_t)(&v1063), 3, 4, 1, 4, 2, (int)(uintptr_t)(&v1064));
  v558 = v418;
  g4_std::string::Destroy(&v1064);
  g4_std::string::Destroy(&v1063);
  g4_std::string::Destroy(&v1062);
  g4_std::string::Destroy(&v1061);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1065), "value_skills.btn_add", (int)(uintptr_t)(&v533) + 2);
  g4_std::string::construct_copy(&v1066, &v559);
  g4_std::string::construct_copy(&v1067, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1068), "value_skills.tf", (int)(uintptr_t)(&v533) + 3);
  v419 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v419, (int)(uintptr_t)(&v1065), (int)(uintptr_t)(&v1066), (int)(uintptr_t)(&v1067), 0, 4, 2, 4, 2, (int)(uintptr_t)(&v1068));
  v558 = v419;
  g4_std::string::Destroy(&v1068);
  g4_std::string::Destroy(&v1067);
  g4_std::string::Destroy(&v1066);
  g4_std::string::Destroy(&v1065);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1069), "value_keys.btn_add", (int)(uintptr_t)(&v534));
  g4_std::string::construct_copy(&v1070, &v559);
  g4_std::string::construct_copy(&v1071, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1072), "value_keys.tf", (int)(uintptr_t)(&v534) + 1);
  v420 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v420, (int)(uintptr_t)(&v1069), (int)(uintptr_t)(&v1070), (int)(uintptr_t)(&v1071), 1, 4, 3, 4, 2, (int)(uintptr_t)(&v1072));
  v558 = v420;
  g4_std::string::Destroy(&v1072);
  g4_std::string::Destroy(&v1071);
  g4_std::string::Destroy(&v1070);
  g4_std::string::Destroy(&v1069);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1073), "btn_resume", (int)(uintptr_t)(&v534) + 2);
  g4_std::string::construct_copy(&v1074, &v559);
  g4_std::string::construct_copy(&v1075, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1076), (char *)&unk_1B15112, (int)(uintptr_t)(&v534) + 3);
  v421 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v421, (int)(uintptr_t)(&v1073), (int)(uintptr_t)(&v1074), (int)(uintptr_t)(&v1075), 2, 4, 0, 4, 2, (int)(uintptr_t)(&v1076));
  v558 = v421;
  g4_std::string::Destroy(&v1076);
  g4_std::string::Destroy(&v1075);
  g4_std::string::Destroy(&v1074);
  g4_std::string::Destroy(&v1073);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1077), "btn_back", (int)(uintptr_t)(&v535));
  g4_std::string::construct_copy(&v1078, &v559);
  g4_std::string::construct_copy(&v1079, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1080), (char *)&unk_1B15112, (int)(uintptr_t)(&v535) + 1);
  v422 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v422, (int)(uintptr_t)(&v1077), (int)(uintptr_t)(&v1078), (int)(uintptr_t)(&v1079), 0, 3, 2, 3, 2, (int)(uintptr_t)(&v1080));
  v558 = v422;
  g4_std::string::Destroy(&v1080);
  g4_std::string::Destroy(&v1079);
  g4_std::string::Destroy(&v1078);
  g4_std::string::Destroy(&v1077);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v145 = *(uint32_t **)(a1 + 84);
  if ( v145 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v145 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v145 = 0;
      v145[1] = 0;
      v145[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v259 = 4 * v5;
        v146 = (char *)opNew(4 * v5);
        v147 = v259;
      }
      else
      {
        v147 = 0;
        v146 = nullptr;
      }
      *v145 = (uint32_t)(uintptr_t)(v146);
      v145[1] = (uint32_t)(uintptr_t)(v146);
      v148 = v1261;
      v149 = v1262 - v1261;
      v145[2] = (uint32_t)(uintptr_t)(&v146[v147]);
      v150 = 0;
      v151 = v149 >> 2;
      if ( v151 != 0 )
      {
        v290 = 4 * v151;
        memmove(v146, v148, 4 * v151);
        v150 = v290;
      }
      v152 = &v146[v150];
      v153 = a1;
      v145[1] = (uint32_t)(uintptr_t)(v152);
      v154 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v154 = 0;
      v153 = a1;
    }
    *(uint32_t *)(v153 + 84) = v154 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "focus_in_end", 0xCu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  v1262 = v1261;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1081), "btn_start", (int)(uintptr_t)(&v535) + 2);
  g4_std::string::construct_copy(&v1082, &v559);
  g4_std::string::construct_copy(&v1083, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1084), (char *)&unk_1B15112, (int)(uintptr_t)(&v535) + 3);
  v423 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v423, (int)(uintptr_t)(&v1081), (int)(uintptr_t)(&v1082), (int)(uintptr_t)(&v1083), 1, 4, 5, 4, 2, (int)(uintptr_t)(&v1084));
  v558 = v423;
  g4_std::string::Destroy(&v1084);
  g4_std::string::Destroy(&v1083);
  g4_std::string::Destroy(&v1082);
  g4_std::string::Destroy(&v1081);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1085), "btn_rewards", (int)(uintptr_t)(&v536));
  g4_std::string::construct_copy(&v1086, &v559);
  g4_std::string::construct_copy(&v1087, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1088), (char *)&unk_1B15112, (int)(uintptr_t)(&v536) + 1);
  v424 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v424, (int)(uintptr_t)(&v1085), (int)(uintptr_t)(&v1086), (int)(uintptr_t)(&v1087), 5, 2, 0, 3, 2, (int)(uintptr_t)(&v1088));
  v558 = v424;
  g4_std::string::Destroy(&v1088);
  g4_std::string::Destroy(&v1087);
  g4_std::string::Destroy(&v1086);
  g4_std::string::Destroy(&v1085);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1089), "btn_commonLeaderboard", (int)(uintptr_t)(&v536) + 2);
  g4_std::string::construct_copy(&v1090, &v559);
  g4_std::string::construct_copy(&v1091, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1092), (char *)&unk_1B15112, (int)(uintptr_t)(&v536) + 3);
  v425 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v425, (int)(uintptr_t)(&v1089), (int)(uintptr_t)(&v1090), (int)(uintptr_t)(&v1091), 2, 3, 2, 5, 2, (int)(uintptr_t)(&v1092));
  v558 = v425;
  g4_std::string::Destroy(&v1092);
  g4_std::string::Destroy(&v1091);
  g4_std::string::Destroy(&v1090);
  g4_std::string::Destroy(&v1089);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1093), "btn_resume", (int)(uintptr_t)(&v537));
  g4_std::string::construct_copy(&v1094, &v559);
  g4_std::string::construct_copy(&v1095, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1096), (char *)&unk_1B15112, (int)(uintptr_t)(&v537) + 1);
  v426 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v426, (int)(uintptr_t)(&v1093), (int)(uintptr_t)(&v1094), (int)(uintptr_t)(&v1095), 4, 5, 4, 2, 2, (int)(uintptr_t)(&v1096));
  v558 = v426;
  g4_std::string::Destroy(&v1096);
  g4_std::string::Destroy(&v1095);
  g4_std::string::Destroy(&v1094);
  g4_std::string::Destroy(&v1093);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1097), "value_keys.btn_add", (int)(uintptr_t)(&v537) + 2);
  g4_std::string::construct_copy(&v1098, &v559);
  g4_std::string::construct_copy(&v1099, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1100), (char *)&unk_1B15112, (int)(uintptr_t)(&v537) + 3);
  v427 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v427, (int)(uintptr_t)(&v1097), (int)(uintptr_t)(&v1098), (int)(uintptr_t)(&v1099), 3, 0, 3, 0, 2, (int)(uintptr_t)(&v1100));
  v558 = v427;
  g4_std::string::Destroy(&v1100);
  g4_std::string::Destroy(&v1099);
  g4_std::string::Destroy(&v1098);
  g4_std::string::Destroy(&v1097);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1101), "btn_back", (int)(uintptr_t)(&v538));
  g4_std::string::construct_copy(&v1102, &v559);
  g4_std::string::construct_copy(&v1103, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1104), (char *)&unk_1B15112, (int)(uintptr_t)(&v538) + 1);
  v428 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v428, (int)(uintptr_t)(&v1101), (int)(uintptr_t)(&v1102), (int)(uintptr_t)(&v1103), 0, 2, 1, 3, 2, (int)(uintptr_t)(&v1104));
  v558 = v428;
  g4_std::string::Destroy(&v1104);
  g4_std::string::Destroy(&v1103);
  g4_std::string::Destroy(&v1102);
  g4_std::string::Destroy(&v1101);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v155 = *(uint32_t **)(a1 + 84);
  if ( v155 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v155 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v155 = 0;
      v155[1] = 0;
      v155[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v260 = 4 * v5;
        v156 = (char *)opNew(4 * v5);
        v157 = v260;
      }
      else
      {
        v157 = 0;
        v156 = nullptr;
      }
      *v155 = (uint32_t)(uintptr_t)(v156);
      v155[1] = (uint32_t)(uintptr_t)(v156);
      v158 = v1261;
      v159 = v1262 - v1261;
      v155[2] = (uint32_t)(uintptr_t)(&v156[v157]);
      v160 = 0;
      v161 = v159 >> 2;
      if ( v161 != 0 )
      {
        v289 = 4 * v161;
        memmove(v156, v158, 4 * v161);
        v160 = v289;
      }
      v162 = &v156[v160];
      v163 = a1;
      v155[1] = (uint32_t)(uintptr_t)(v162);
      v164 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v164 = 0;
      v163 = a1;
    }
    *(uint32_t *)(v163 + 84) = v164 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "focus_in_end", 0xCu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  v1262 = v1261;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1105), "mc_betMenu.btn_bet_1", (int)(uintptr_t)(&v538) + 2);
  g4_std::string::construct_copy(&v1106, &v559);
  g4_std::string::construct_copy(&v1107, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1108), (char *)&unk_1B15112, (int)(uintptr_t)(&v538) + 3);
  v429 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v429, (int)(uintptr_t)(&v1105), (int)(uintptr_t)(&v1106), (int)(uintptr_t)(&v1107), 2, 4, 1, 4, 2, (int)(uintptr_t)(&v1108));
  v558 = v429;
  g4_std::string::Destroy(&v1108);
  g4_std::string::Destroy(&v1107);
  g4_std::string::Destroy(&v1106);
  g4_std::string::Destroy(&v1105);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1109), "mc_betMenu.btn_bet_max", (int)(uintptr_t)(&v539));
  g4_std::string::construct_copy(&v1110, &v559);
  g4_std::string::construct_copy(&v1111, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1112), (char *)&unk_1B15112, (int)(uintptr_t)(&v539) + 1);
  v430 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v430, (int)(uintptr_t)(&v1109), (int)(uintptr_t)(&v1110), (int)(uintptr_t)(&v1111), 0, 4, 2, 4, 2, (int)(uintptr_t)(&v1112));
  v558 = v430;
  g4_std::string::Destroy(&v1112);
  g4_std::string::Destroy(&v1111);
  g4_std::string::Destroy(&v1110);
  g4_std::string::Destroy(&v1109);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1113), "mc_betMenu.btn_spin", (int)(uintptr_t)(&v539) + 2);
  g4_std::string::construct_copy(&v1114, &v559);
  g4_std::string::construct_copy(&v1115, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1116), (char *)&unk_1B15112, (int)(uintptr_t)(&v539) + 3);
  v431 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v431, (int)(uintptr_t)(&v1113), (int)(uintptr_t)(&v1114), (int)(uintptr_t)(&v1115), 1, 3, 0, 3, 2, (int)(uintptr_t)(&v1116));
  v558 = v431;
  g4_std::string::Destroy(&v1116);
  g4_std::string::Destroy(&v1115);
  g4_std::string::Destroy(&v1114);
  g4_std::string::Destroy(&v1113);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1117), "value_money.btn_add", (int)(uintptr_t)(&v540));
  g4_std::string::construct_copy(&v1118, &v559);
  g4_std::string::construct_copy(&v1119, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1120), (char *)&unk_1B15112, (int)(uintptr_t)(&v540) + 1);
  v432 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v432, (int)(uintptr_t)(&v1117), (int)(uintptr_t)(&v1118), (int)(uintptr_t)(&v1119), 4, 2, 4, 2, 2, (int)(uintptr_t)(&v1120));
  v558 = v432;
  g4_std::string::Destroy(&v1120);
  g4_std::string::Destroy(&v1119);
  g4_std::string::Destroy(&v1118);
  g4_std::string::Destroy(&v1117);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1121), "btn_back_top", (int)(uintptr_t)(&v540) + 2);
  g4_std::string::construct_copy(&v1122, &v559);
  g4_std::string::construct_copy(&v1123, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1124), (char *)&unk_1B15112, (int)(uintptr_t)(&v540) + 3);
  v433 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v433, (int)(uintptr_t)(&v1121), (int)(uintptr_t)(&v1122), (int)(uintptr_t)(&v1123), 3, 0, 3, 0, 2, (int)(uintptr_t)(&v1124));
  v558 = v433;
  g4_std::string::Destroy(&v1124);
  g4_std::string::Destroy(&v1123);
  g4_std::string::Destroy(&v1122);
  g4_std::string::Destroy(&v1121);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v165 = *(uint32_t **)(a1 + 84);
  if ( v165 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v165 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v165 = 0;
      v165[1] = 0;
      v165[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v261 = 4 * v5;
        v166 = (char *)opNew(4 * v5);
        v167 = v261;
      }
      else
      {
        v167 = 0;
        v166 = nullptr;
      }
      *v165 = (uint32_t)(uintptr_t)(v166);
      v165[1] = (uint32_t)(uintptr_t)(v166);
      v168 = v1261;
      v169 = v1262 - v1261;
      v165[2] = (uint32_t)(uintptr_t)(&v166[v167]);
      v170 = 0;
      v171 = v169 >> 2;
      if ( v171 != 0 )
      {
        v288 = 4 * v171;
        memmove(v166, v168, 4 * v171);
        v170 = v288;
      }
      v172 = &v166[v170];
      v173 = a1;
      v165[1] = (uint32_t)(uintptr_t)(v172);
      v174 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v174 = 0;
      v173 = a1;
    }
    *(uint32_t *)(v173 + 84) = v174 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "focus_in_end", 0xCu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  v1262 = v1261;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1125), "mc_betMenu.btn_bet_1", (int)(uintptr_t)(&v541));
  g4_std::string::construct_copy(&v1126, &v559);
  g4_std::string::construct_copy(&v1127, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1128), (char *)&unk_1B15112, (int)(uintptr_t)(&v541) + 1);
  v434 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v434, (int)(uintptr_t)(&v1125), (int)(uintptr_t)(&v1126), (int)(uintptr_t)(&v1127), 2, 4, 1, 4, 2, (int)(uintptr_t)(&v1128));
  v558 = v434;
  g4_std::string::Destroy(&v1128);
  g4_std::string::Destroy(&v1127);
  g4_std::string::Destroy(&v1126);
  g4_std::string::Destroy(&v1125);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1129), "mc_betMenu.btn_bet_max", (int)(uintptr_t)(&v541) + 2);
  g4_std::string::construct_copy(&v1130, &v559);
  g4_std::string::construct_copy(&v1131, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1132), (char *)&unk_1B15112, (int)(uintptr_t)(&v541) + 3);
  v435 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v435, (int)(uintptr_t)(&v1129), (int)(uintptr_t)(&v1130), (int)(uintptr_t)(&v1131), 0, 4, 2, 4, 2, (int)(uintptr_t)(&v1132));
  v558 = v435;
  g4_std::string::Destroy(&v1132);
  g4_std::string::Destroy(&v1131);
  g4_std::string::Destroy(&v1130);
  g4_std::string::Destroy(&v1129);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1133), "mc_betMenu.btn_deal", (int)(uintptr_t)(&v542));
  g4_std::string::construct_copy(&v1134, &v559);
  g4_std::string::construct_copy(&v1135, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1136), (char *)&unk_1B15112, (int)(uintptr_t)(&v542) + 1);
  v436 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v436, (int)(uintptr_t)(&v1133), (int)(uintptr_t)(&v1134), (int)(uintptr_t)(&v1135), 1, 3, 0, 3, 2, (int)(uintptr_t)(&v1136));
  v558 = v436;
  g4_std::string::Destroy(&v1136);
  g4_std::string::Destroy(&v1135);
  g4_std::string::Destroy(&v1134);
  g4_std::string::Destroy(&v1133);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1137), "value_money.btn_add", (int)(uintptr_t)(&v542) + 2);
  g4_std::string::construct_copy(&v1138, &v559);
  g4_std::string::construct_copy(&v1139, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1140), (char *)&unk_1B15112, (int)(uintptr_t)(&v542) + 3);
  v437 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v437, (int)(uintptr_t)(&v1137), (int)(uintptr_t)(&v1138), (int)(uintptr_t)(&v1139), 4, 2, 4, 2, 2, (int)(uintptr_t)(&v1140));
  v558 = v437;
  g4_std::string::Destroy(&v1140);
  g4_std::string::Destroy(&v1139);
  g4_std::string::Destroy(&v1138);
  g4_std::string::Destroy(&v1137);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1141), "btn_back_top", (int)(uintptr_t)(&v543));
  g4_std::string::construct_copy(&v1142, &v559);
  g4_std::string::construct_copy(&v1143, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1144), (char *)&unk_1B15112, (int)(uintptr_t)(&v543) + 1);
  v438 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v438, (int)(uintptr_t)(&v1141), (int)(uintptr_t)(&v1142), (int)(uintptr_t)(&v1143), 3, 0, 3, 0, 2, (int)(uintptr_t)(&v1144));
  v558 = v438;
  g4_std::string::Destroy(&v1144);
  g4_std::string::Destroy(&v1143);
  g4_std::string::Destroy(&v1142);
  g4_std::string::Destroy(&v1141);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v175 = *(uint32_t **)(a1 + 84);
  if ( v175 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v175 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v175 = 0;
      v175[1] = 0;
      v175[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v262 = 4 * v5;
        v176 = (char *)opNew(4 * v5);
        v177 = v262;
      }
      else
      {
        v177 = 0;
        v176 = nullptr;
      }
      *v175 = (uint32_t)(uintptr_t)(v176);
      v175[1] = (uint32_t)(uintptr_t)(v176);
      v178 = v1261;
      v179 = v1262 - v1261;
      v175[2] = (uint32_t)(uintptr_t)(&v176[v177]);
      v180 = 0;
      v181 = v179 >> 2;
      if ( v181 != 0 )
      {
        v287 = 4 * v181;
        memmove(v176, v178, 4 * v181);
        v180 = v287;
      }
      v182 = &v176[v180];
      v183 = a1;
      v175[1] = (uint32_t)(uintptr_t)(v182);
      v184 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v184 = 0;
      v183 = a1;
    }
    *(uint32_t *)(v183 + 84) = v184 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "focus_in_end", 0xCu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  v1262 = v1261;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1145), "mc_betMenu.btn_bet_1", (int)(uintptr_t)(&v543) + 2);
  g4_std::string::construct_copy(&v1146, &v559);
  g4_std::string::construct_copy(&v1147, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1148), (char *)&unk_1B15112, (int)(uintptr_t)(&v543) + 3);
  v439 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v439, (int)(uintptr_t)(&v1145), (int)(uintptr_t)(&v1146), (int)(uintptr_t)(&v1147), 2, 4, 1, 4, 2, (int)(uintptr_t)(&v1148));
  v558 = v439;
  g4_std::string::Destroy(&v1148);
  g4_std::string::Destroy(&v1147);
  g4_std::string::Destroy(&v1146);
  g4_std::string::Destroy(&v1145);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1149), "mc_betMenu.btn_bet_max", (int)(uintptr_t)(&v544));
  g4_std::string::construct_copy(&v1150, &v559);
  g4_std::string::construct_copy(&v1151, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1152), (char *)&unk_1B15112, (int)(uintptr_t)(&v544) + 1);
  v440 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v440, (int)(uintptr_t)(&v1149), (int)(uintptr_t)(&v1150), (int)(uintptr_t)(&v1151), 0, 4, 2, 4, 2, (int)(uintptr_t)(&v1152));
  v558 = v440;
  g4_std::string::Destroy(&v1152);
  g4_std::string::Destroy(&v1151);
  g4_std::string::Destroy(&v1150);
  g4_std::string::Destroy(&v1149);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1153), "mc_betMenu.btn_deal", (int)(uintptr_t)(&v544) + 2);
  g4_std::string::construct_copy(&v1154, &v559);
  g4_std::string::construct_copy(&v1155, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1156), (char *)&unk_1B15112, (int)(uintptr_t)(&v544) + 3);
  v441 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v441, (int)(uintptr_t)(&v1153), (int)(uintptr_t)(&v1154), (int)(uintptr_t)(&v1155), 1, 3, 0, 3, 2, (int)(uintptr_t)(&v1156));
  v558 = v441;
  g4_std::string::Destroy(&v1156);
  g4_std::string::Destroy(&v1155);
  g4_std::string::Destroy(&v1154);
  g4_std::string::Destroy(&v1153);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1157), "value_money.btn_add", (int)(uintptr_t)(&v545));
  g4_std::string::construct_copy(&v1158, &v559);
  g4_std::string::construct_copy(&v1159, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1160), (char *)&unk_1B15112, (int)(uintptr_t)(&v545) + 1);
  v442 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v442, (int)(uintptr_t)(&v1157), (int)(uintptr_t)(&v1158), (int)(uintptr_t)(&v1159), 4, 2, 4, 2, 2, (int)(uintptr_t)(&v1160));
  v558 = v442;
  g4_std::string::Destroy(&v1160);
  g4_std::string::Destroy(&v1159);
  g4_std::string::Destroy(&v1158);
  g4_std::string::Destroy(&v1157);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1161), "btn_back_top", (int)(uintptr_t)(&v545) + 2);
  g4_std::string::construct_copy(&v1162, &v559);
  g4_std::string::construct_copy(&v1163, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1164), (char *)&unk_1B15112, (int)(uintptr_t)(&v545) + 3);
  v443 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v443, (int)(uintptr_t)(&v1161), (int)(uintptr_t)(&v1162), (int)(uintptr_t)(&v1163), 3, 0, 3, 0, 2, (int)(uintptr_t)(&v1164));
  v558 = v443;
  g4_std::string::Destroy(&v1164);
  g4_std::string::Destroy(&v1163);
  g4_std::string::Destroy(&v1162);
  g4_std::string::Destroy(&v1161);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v185 = *(uint32_t **)(a1 + 84);
  if ( v185 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v185 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v185 = 0;
      v185[1] = 0;
      v185[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v263 = 4 * v5;
        v186 = (char *)opNew(4 * v5);
        v187 = v263;
      }
      else
      {
        v187 = 0;
        v186 = nullptr;
      }
      *v185 = (uint32_t)(uintptr_t)(v186);
      v185[1] = (uint32_t)(uintptr_t)(v186);
      v188 = v1261;
      v189 = v1262 - v1261;
      v185[2] = (uint32_t)(uintptr_t)(&v186[v187]);
      v190 = 0;
      v191 = v189 >> 2;
      if ( v191 != 0 )
      {
        v286 = 4 * v191;
        memmove(v186, v188, 4 * v191);
        v190 = v286;
      }
      v192 = &v186[v190];
      v193 = a1;
      v185[1] = (uint32_t)(uintptr_t)(v192);
      v194 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v194 = 0;
      v193 = a1;
    }
    *(uint32_t *)(v193 + 84) = v194 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "pressed_end", 0xBu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  v1262 = v1261;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1165), "menu_stock.btn_buy", (int)(uintptr_t)(&v546));
  g4_std::string::construct_copy(&v1166, &v559);
  g4_std::string::construct_copy(&v1167, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1168), (char *)&unk_1B15112, (int)(uintptr_t)(&v546) + 1);
  v444 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v444, (int)(uintptr_t)(&v1165), (int)(uintptr_t)(&v1166), (int)(uintptr_t)(&v1167), 5, 6, 0, 6, 2, (int)(uintptr_t)(&v1168));
  v558 = v444;
  g4_std::string::Destroy(&v1168);
  g4_std::string::Destroy(&v1167);
  g4_std::string::Destroy(&v1166);
  g4_std::string::Destroy(&v1165);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1169), "menu_stock.btn_buy_ammos", (int)(uintptr_t)(&v546) + 2);
  g4_std::string::construct_copy(&v1170, &v559);
  g4_std::string::construct_copy(&v1171, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1172), (char *)&unk_1B15112, (int)(uintptr_t)(&v546) + 3);
  v445 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v445, (int)(uintptr_t)(&v1169), (int)(uintptr_t)(&v1170), (int)(uintptr_t)(&v1171), 0, 0, 0, 0, 2, (int)(uintptr_t)(&v1172));
  v558 = v445;
  g4_std::string::Destroy(&v1172);
  g4_std::string::Destroy(&v1171);
  g4_std::string::Destroy(&v1170);
  g4_std::string::Destroy(&v1169);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1173), "menu_stock.btn_equip", (int)(uintptr_t)(&v547));
  g4_std::string::construct_copy(&v1174, &v559);
  g4_std::string::construct_copy(&v1175, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1176), (char *)&unk_1B15112, (int)(uintptr_t)(&v547) + 1);
  v446 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v446, (int)(uintptr_t)(&v1173), (int)(uintptr_t)(&v1174), (int)(uintptr_t)(&v1175), 0, 0, 0, 0, 2, (int)(uintptr_t)(&v1176));
  v558 = v446;
  g4_std::string::Destroy(&v1176);
  g4_std::string::Destroy(&v1175);
  g4_std::string::Destroy(&v1174);
  g4_std::string::Destroy(&v1173);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1177), "menu_stock.btn_open", (int)(uintptr_t)(&v547) + 2);
  g4_std::string::construct_copy(&v1178, &v559);
  g4_std::string::construct_copy(&v1179, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1180), (char *)&unk_1B15112, (int)(uintptr_t)(&v547) + 3);
  v447 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v447, (int)(uintptr_t)(&v1177), (int)(uintptr_t)(&v1178), (int)(uintptr_t)(&v1179), 0, 0, 0, 0, 2, (int)(uintptr_t)(&v1180));
  v558 = v447;
  g4_std::string::Destroy(&v1180);
  g4_std::string::Destroy(&v1179);
  g4_std::string::Destroy(&v1178);
  g4_std::string::Destroy(&v1177);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1181), "menu_stock.btn_ready", (int)(uintptr_t)(&v548));
  g4_std::string::construct_copy(&v1182, &v559);
  g4_std::string::construct_copy(&v1183, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1184), (char *)&unk_1B15112, (int)(uintptr_t)(&v548) + 1);
  v448 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v448, (int)(uintptr_t)(&v1181), (int)(uintptr_t)(&v1182), (int)(uintptr_t)(&v1183), 0, 0, 0, 0, 2, (int)(uintptr_t)(&v1184));
  v558 = v448;
  g4_std::string::Destroy(&v1184);
  g4_std::string::Destroy(&v1183);
  g4_std::string::Destroy(&v1182);
  g4_std::string::Destroy(&v1181);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1185), "menu_stock.mc_btn_switch", (int)(uintptr_t)(&v548) + 2);
  g4_std::string::construct_copy(&v1186, &v559);
  g4_std::string::construct_copy(&v1187, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1188), "menu_stock.mc_btn_switch.tf_all", (int)(uintptr_t)(&v548) + 3);
  v449 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v449, (int)(uintptr_t)(&v1185), (int)(uintptr_t)(&v1186), (int)(uintptr_t)(&v1187), 9, 8, 0, 8, 2, (int)(uintptr_t)(&v1188));
  v558 = v449;
  g4_std::string::Destroy(&v1188);
  g4_std::string::Destroy(&v1187);
  g4_std::string::Destroy(&v1186);
  g4_std::string::Destroy(&v1185);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1189), "value_money.btn_add", (int)(uintptr_t)(&v549));
  g4_std::string::construct_copy(&v1190, &v559);
  g4_std::string::construct_copy(&v1191, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1192), (char *)&unk_1B15112, (int)(uintptr_t)(&v549) + 1);
  v450 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v450, (int)(uintptr_t)(&v1189), (int)(uintptr_t)(&v1190), (int)(uintptr_t)(&v1191), 8, 0, 7, 0, 2, (int)(uintptr_t)(&v1192));
  v558 = v450;
  g4_std::string::Destroy(&v1192);
  g4_std::string::Destroy(&v1191);
  g4_std::string::Destroy(&v1190);
  g4_std::string::Destroy(&v1189);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1193), "value_keys.btn_add", (int)(uintptr_t)(&v549) + 2);
  g4_std::string::construct_copy(&v1194, &v559);
  g4_std::string::construct_copy(&v1195, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1196), (char *)&unk_1B15112, (int)(uintptr_t)(&v549) + 3);
  v451 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v451, (int)(uintptr_t)(&v1193), (int)(uintptr_t)(&v1194), (int)(uintptr_t)(&v1195), 6, 0, 8, 0, 2, (int)(uintptr_t)(&v1196));
  v558 = v451;
  g4_std::string::Destroy(&v1196);
  g4_std::string::Destroy(&v1195);
  g4_std::string::Destroy(&v1194);
  g4_std::string::Destroy(&v1193);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1197), "btn_resume", (int)(uintptr_t)(&v550));
  g4_std::string::construct_copy(&v1198, &v559);
  g4_std::string::construct_copy(&v1199, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1200), (char *)&unk_1B15112, (int)(uintptr_t)(&v550) + 1);
  v452 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v452, (int)(uintptr_t)(&v1197), (int)(uintptr_t)(&v1198), (int)(uintptr_t)(&v1199), 6, 9, 6, 9, 2, (int)(uintptr_t)(&v1200));
  v558 = v452;
  g4_std::string::Destroy(&v1200);
  g4_std::string::Destroy(&v1199);
  g4_std::string::Destroy(&v1198);
  g4_std::string::Destroy(&v1197);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1201), "btn_back", (int)(uintptr_t)(&v550) + 2);
  g4_std::string::construct_copy(&v1202, &v559);
  g4_std::string::construct_copy(&v1203, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1204), (char *)&unk_1B15112, (int)(uintptr_t)(&v550) + 3);
  v453 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v453, (int)(uintptr_t)(&v1201), (int)(uintptr_t)(&v1202), (int)(uintptr_t)(&v1203), 0, 8, 5, 8, 2, (int)(uintptr_t)(&v1204));
  v558 = v453;
  g4_std::string::Destroy(&v1204);
  g4_std::string::Destroy(&v1203);
  g4_std::string::Destroy(&v1202);
  g4_std::string::Destroy(&v1201);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v195 = *(uint32_t **)(a1 + 84);
  if ( v195 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v195 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v195 = 0;
      v195[1] = 0;
      v195[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v264 = 4 * v5;
        v196 = (char *)opNew(4 * v5);
        v197 = v264;
      }
      else
      {
        v197 = 0;
        v196 = nullptr;
      }
      *v195 = (uint32_t)(uintptr_t)(v196);
      v195[1] = (uint32_t)(uintptr_t)(v196);
      v198 = v1261;
      v199 = v1262 - v1261;
      v195[2] = (uint32_t)(uintptr_t)(&v196[v197]);
      v200 = 0;
      v201 = v199 >> 2;
      if ( v201 != 0 )
      {
        v285 = 4 * v201;
        memmove(v196, v198, 4 * v201);
        v200 = v285;
      }
      v202 = &v196[v200];
      v203 = a1;
      v195[1] = (uint32_t)(uintptr_t)(v202);
      v204 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v204 = 0;
      v203 = a1;
    }
    *(uint32_t *)(v203 + 84) = v204 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "pressed_end", 0xBu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1205), "mc_tab_0", (int)(uintptr_t)(&v551));
  g4_std::string::construct_copy(&v1206, &v559);
  g4_std::string::construct_copy(&v1207, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1208), (char *)&unk_1B15112, (int)(uintptr_t)(&v551) + 1);
  v454 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v454, (int)(uintptr_t)(&v1205), (int)(uintptr_t)(&v1206), (int)(uintptr_t)(&v1207), 6, 3, 7, 1, 2, (int)(uintptr_t)(&v1208));
  v558 = v454;
  g4_std::string::Destroy(&v1208);
  g4_std::string::Destroy(&v1207);
  g4_std::string::Destroy(&v1206);
  g4_std::string::Destroy(&v1205);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1209), "mc_tab_1", (int)(uintptr_t)(&v551) + 2);
  g4_std::string::construct_copy(&v1210, &v559);
  g4_std::string::construct_copy(&v1211, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1212), (char *)&unk_1B15112, (int)(uintptr_t)(&v551) + 3);
  v455 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v455, (int)(uintptr_t)(&v1209), (int)(uintptr_t)(&v1210), (int)(uintptr_t)(&v1211), 6, 0, 7, 2, 2, (int)(uintptr_t)(&v1212));
  v558 = v455;
  g4_std::string::Destroy(&v1212);
  g4_std::string::Destroy(&v1211);
  g4_std::string::Destroy(&v1210);
  g4_std::string::Destroy(&v1209);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1213), "mc_tab_2", (int)(uintptr_t)(&v552));
  g4_std::string::construct_copy(&v1214, &v559);
  g4_std::string::construct_copy(&v1215, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1216), (char *)&unk_1B15112, (int)(uintptr_t)(&v552) + 1);
  v456 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v456, (int)(uintptr_t)(&v1213), (int)(uintptr_t)(&v1214), (int)(uintptr_t)(&v1215), 6, 1, 7, 3, 2, (int)(uintptr_t)(&v1216));
  v558 = v456;
  g4_std::string::Destroy(&v1216);
  g4_std::string::Destroy(&v1215);
  g4_std::string::Destroy(&v1214);
  g4_std::string::Destroy(&v1213);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1217), "mc_tab_3", (int)(uintptr_t)(&v552) + 2);
  g4_std::string::construct_copy(&v1218, &v559);
  g4_std::string::construct_copy(&v1219, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1220), (char *)&unk_1B15112, (int)(uintptr_t)(&v552) + 3);
  v457 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v457, (int)(uintptr_t)(&v1217), (int)(uintptr_t)(&v1218), (int)(uintptr_t)(&v1219), 6, 2, 7, 0, 2, (int)(uintptr_t)(&v1220));
  v558 = v457;
  g4_std::string::Destroy(&v1220);
  g4_std::string::Destroy(&v1219);
  g4_std::string::Destroy(&v1218);
  g4_std::string::Destroy(&v1217);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v205 = *(uint32_t **)(a1 + 84);
  if ( v205 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v205 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v205 = 0;
      v205[1] = 0;
      v205[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v265 = 4 * v5;
        v206 = (char *)opNew(4 * v5);
        v207 = v265;
      }
      else
      {
        v207 = 0;
        v206 = nullptr;
      }
      *v205 = (uint32_t)(uintptr_t)(v206);
      v205[1] = (uint32_t)(uintptr_t)(v206);
      v208 = v1261;
      v209 = v1262 - v1261;
      v205[2] = (uint32_t)(uintptr_t)(&v206[v207]);
      v210 = 0;
      v211 = v209 >> 2;
      if ( v211 != 0 )
      {
        v284 = 4 * v211;
        memmove(v206, v208, 4 * v211);
        v210 = v284;
      }
      v212 = &v206[v210];
      v213 = a1;
      v205[1] = (uint32_t)(uintptr_t)(v212);
      v214 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v214 = 0;
      v213 = a1;
    }
    *(uint32_t *)(v213 + 84) = v214 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "pressed_end", 0xBu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1221), "btn_equip", (int)(uintptr_t)(&v553));
  g4_std::string::construct_copy(&v1222, &v559);
  g4_std::string::construct_copy(&v1223, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1224), (char *)&unk_1B15112, (int)(uintptr_t)(&v553) + 1);
  v458 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v458, (int)(uintptr_t)(&v1221), (int)(uintptr_t)(&v1222), (int)(uintptr_t)(&v1223), 1, 2, 1, 2, 2, (int)(uintptr_t)(&v1224));
  v558 = v458;
  g4_std::string::Destroy(&v1224);
  g4_std::string::Destroy(&v1223);
  g4_std::string::Destroy(&v1222);
  g4_std::string::Destroy(&v1221);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1225), "btn_continue", (int)(uintptr_t)(&v553) + 2);
  g4_std::string::construct_copy(&v1226, &v559);
  g4_std::string::construct_copy(&v1227, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1228), (char *)&unk_1B15112, (int)(uintptr_t)(&v553) + 3);
  v459 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v459, (int)(uintptr_t)(&v1225), (int)(uintptr_t)(&v1226), (int)(uintptr_t)(&v1227), 0, 2, 0, 2, 2, (int)(uintptr_t)(&v1228));
  v558 = v459;
  g4_std::string::Destroy(&v1228);
  g4_std::string::Destroy(&v1227);
  g4_std::string::Destroy(&v1226);
  g4_std::string::Destroy(&v1225);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1229), "btn_resume", (int)(uintptr_t)(&v554));
  g4_std::string::construct_copy(&v1230, &v559);
  g4_std::string::construct_copy(&v1231, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1232), (char *)&unk_1B15112, (int)(uintptr_t)(&v554) + 1);
  v460 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v460, (int)(uintptr_t)(&v1229), (int)(uintptr_t)(&v1230), (int)(uintptr_t)(&v1231), 2, 0, 2, 0, 2, (int)(uintptr_t)(&v1232));
  v558 = v460;
  g4_std::string::Destroy(&v1232);
  g4_std::string::Destroy(&v1231);
  g4_std::string::Destroy(&v1230);
  g4_std::string::Destroy(&v1229);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v215 = *(uint32_t **)(a1 + 84);
  if ( v215 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v215 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v215 = 0;
      v215[1] = 0;
      v215[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v266 = 4 * v5;
        v216 = (char *)opNew(4 * v5);
        v217 = v266;
      }
      else
      {
        v217 = 0;
        v216 = nullptr;
      }
      *v215 = (uint32_t)(uintptr_t)(v216);
      v215[1] = (uint32_t)(uintptr_t)(v216);
      v218 = v1261;
      v219 = v1262 - v1261;
      v215[2] = (uint32_t)(uintptr_t)(&v216[v217]);
      v220 = 0;
      v221 = v219 >> 2;
      if ( v221 != 0 )
      {
        v283 = 4 * v221;
        memmove(v216, v218, 4 * v221);
        v220 = v283;
      }
      v222 = &v216[v220];
      v223 = a1;
      v215[1] = (uint32_t)(uintptr_t)(v222);
      v224 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v224 = 0;
      v223 = a1;
    }
    *(uint32_t *)(v223 + 84) = v224 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "pressed_end", 0xBu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  v1262 = v1261;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1233), "mc_buttons_group.btn_facebook", (int)(uintptr_t)(&v554) + 2);
  g4_std::string::construct_copy(&v1234, &v559);
  g4_std::string::construct_copy(&v1235, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1236), (char *)&unk_1B15112, (int)(uintptr_t)(&v554) + 3);
  v461 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v461, (int)(uintptr_t)(&v1233), (int)(uintptr_t)(&v1234), (int)(uintptr_t)(&v1235), 0, 2, 1, 1, 2, (int)(uintptr_t)(&v1236));
  v558 = v461;
  g4_std::string::Destroy(&v1236);
  g4_std::string::Destroy(&v1235);
  g4_std::string::Destroy(&v1234);
  g4_std::string::Destroy(&v1233);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1237), "mc_buttons_group.btn_gplus", (int)(uintptr_t)(&v555));
  g4_std::string::construct_copy(&v1238, &v559);
  g4_std::string::construct_copy(&v1239, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1240), (char *)&unk_1B15112, (int)(uintptr_t)(&v555) + 1);
  v462 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v462, (int)(uintptr_t)(&v1237), (int)(uintptr_t)(&v1238), (int)(uintptr_t)(&v1239), 1, 0, 1, 3, 2, (int)(uintptr_t)(&v1240));
  v558 = v462;
  g4_std::string::Destroy(&v1240);
  g4_std::string::Destroy(&v1239);
  g4_std::string::Destroy(&v1238);
  g4_std::string::Destroy(&v1237);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1241), "btn_resume", (int)(uintptr_t)(&v555) + 2);
  g4_std::string::construct_copy(&v1242, &v559);
  g4_std::string::construct_copy(&v1243, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1244), (char *)&unk_1B15112, (int)(uintptr_t)(&v555) + 3);
  v463 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v463, (int)(uintptr_t)(&v1241), (int)(uintptr_t)(&v1242), (int)(uintptr_t)(&v1243), 0, 3, 0, 0, 2, (int)(uintptr_t)(&v1244));
  v558 = v463;
  g4_std::string::Destroy(&v1244);
  g4_std::string::Destroy(&v1243);
  g4_std::string::Destroy(&v1242);
  g4_std::string::Destroy(&v1241);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1245), "btn_back", (int)(uintptr_t)(&v556));
  g4_std::string::construct_copy(&v1246, &v559);
  g4_std::string::construct_copy(&v1247, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1248), (char *)&unk_1B15112, (int)(uintptr_t)(&v556) + 1);
  v464 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v464, (int)(uintptr_t)(&v1245), (int)(uintptr_t)(&v1246), (int)(uintptr_t)(&v1247), 3, 1, 1, 2, 2, (int)(uintptr_t)(&v1248));
  v558 = v464;
  g4_std::string::Destroy(&v1248);
  g4_std::string::Destroy(&v1247);
  g4_std::string::Destroy(&v1246);
  g4_std::string::Destroy(&v1245);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v225 = *(uint32_t **)(a1 + 84);
  if ( v225 == *(uint32_t **)(a1 + 88) )
  {
    sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
  }
  else
  {
    if ( v225 != nullptr )
    {
      v5 = (v1262 - v1261) >> 2;
      *v225 = 0;
      v225[1] = 0;
      v225[2] = 0;
      if ( v5 != 0 )
      {
        if ( v5 > 0x3FFFFFFF )
          goto LABEL_297;
        v267 = 4 * v5;
        v226 = (char *)opNew(4 * v5);
        v227 = v267;
      }
      else
      {
        v227 = 0;
        v226 = nullptr;
      }
      *v225 = (uint32_t)(uintptr_t)(v226);
      v225[1] = (uint32_t)(uintptr_t)(v226);
      v228 = v1261;
      v229 = v1262 - v1261;
      v225[2] = (uint32_t)(uintptr_t)(&v226[v227]);
      v230 = 0;
      v231 = v229 >> 2;
      if ( v231 != 0 )
      {
        v282 = 4 * v231;
        memmove(v226, v228, 4 * v231);
        v230 = v282;
      }
      v232 = &v226[v230];
      v233 = a1;
      v225[1] = (uint32_t)(uintptr_t)(v232);
      v234 = *(uint32_t *)(a1 + 84);
    }
    else
    {
      v234 = 0;
      v233 = a1;
    }
    *(uint32_t *)(v233 + 84) = v234 + 12;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(&v559), "pressed_end", 0xBu);
  g4_std_compat::string_assign((int)(uintptr_t)(&v560), "focus_out_end", 0xDu);
  v1262 = v1261;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1249), "saves_conflict_prompt.btn_0", (int)(uintptr_t)(&v556) + 2);
  g4_std::string::construct_copy(&v1250, &v559);
  g4_std::string::construct_copy(&v1251, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1252), (char *)&unk_1B15112, (int)(uintptr_t)(&v556) + 3);
  v465 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v465, (int)(uintptr_t)(&v1249), (int)(uintptr_t)(&v1250), (int)(uintptr_t)(&v1251), 0, 2, 0, 1, 0, (int)(uintptr_t)(&v1252));
  v558 = v465;
  g4_std::string::Destroy(&v1252);
  g4_std::string::Destroy(&v1251);
  g4_std::string::Destroy(&v1250);
  g4_std::string::Destroy(&v1249);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1253), "saves_conflict_prompt.btn_1", (int)(uintptr_t)(&v557));
  g4_std::string::construct_copy(&v1254, &v559);
  g4_std::string::construct_copy(&v1255, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1256), (char *)&unk_1B15112, (int)(uintptr_t)(&v557) + 1);
  v466 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v466, (int)(uintptr_t)(&v1253), (int)(uintptr_t)(&v1254), (int)(uintptr_t)(&v1255), 1, 0, 1, 2, 0, (int)(uintptr_t)(&v1256));
  v558 = v466;
  g4_std::string::Destroy(&v1256);
  g4_std::string::Destroy(&v1255);
  g4_std::string::Destroy(&v1254);
  g4_std::string::Destroy(&v1253);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1257), "saves_conflict_prompt.btn_cancel", (int)(uintptr_t)(&v557) + 2);
  g4_std::string::construct_copy(&v1258, &v559);
  g4_std::string::construct_copy(&v1259, &v560);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v1260), (char *)&unk_1B15112, (int)(uintptr_t)(&v557) + 3);
  v467 = (uint32_t *)opNew(0x24u);
  sub_BF9FC0(v467, (int)(uintptr_t)(&v1257), (int)(uintptr_t)(&v1258), (int)(uintptr_t)(&v1259), 2, 1, 2, 0, 0, (int)(uintptr_t)(&v1260));
  v558 = v467;
  g4_std::string::Destroy(&v1260);
  g4_std::string::Destroy(&v1259);
  g4_std::string::Destroy(&v1258);
  g4_std::string::Destroy(&v1257);
  sub_BE07F0((int)(uintptr_t)(&v1261), &v558);
  v235 = *(uint32_t **)(a1 + 84);
  if ( v235 != *(uint32_t **)(a1 + 88) )
  {
    if ( v235 == nullptr )
    {
      v244 = 0;
      v243 = a1;
LABEL_221:
      *(uint32_t *)(v243 + 84) = v244 + 12;
      goto LABEL_222;
    }
    v5 = (v1262 - v1261) >> 2;
    *v235 = 0;
    v235[1] = 0;
    v235[2] = 0;
    if ( v5 == 0 )
    {
      v237 = 0;
      v236 = nullptr;
      goto LABEL_218;
    }
    if ( v5 <= 0x3FFFFFFF )
    {
      v268 = 4 * v5;
      v236 = (char *)opNew(4 * v5);
      v237 = v268;
LABEL_218:
      *v235 = (uint32_t)(uintptr_t)(v236);
      v235[1] = (uint32_t)(uintptr_t)(v236);
      v238 = v1261;
      v239 = v1262 - v1261;
      v235[2] = (uint32_t)(uintptr_t)(&v236[v237]);
      v240 = 0;
      v241 = v239 >> 2;
      if ( v241 != 0 )
      {
        v281 = 4 * v241;
        memmove(v236, v238, 4 * v241);
        v240 = v281;
      }
      v242 = &v236[v240];
      v243 = a1;
      v235[1] = (uint32_t)(uintptr_t)(v242);
      v244 = *(uint32_t *)(a1 + 84);
      goto LABEL_221;
    }
LABEL_297:
    sub_18FFEE0(v3, v5);
  }
  sub_BE0950(v468, *(unsigned int **)(a1 + 84), v3, (unsigned int *)&v1261);
LABEL_222:
  g4_std::string::Destroy(&v560);
  g4_std::string::Destroy(&v559);
  if ( v1261 != nullptr )
    opDelete(v1261);
}

// ----------------------------------------------------------------------------
// Function: sub_BF62B0  (binary VA: 0xbf62b0)
// Original: sub_BF62B0
// ----------------------------------------------------------------------------
int sub_BF62B0(int a1)
{
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
  gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)(a1 + 40), nullptr);
  *(uint32_t *)(a1 + 80) = 0;
  *(uint32_t *)(a1 + 84) = 0;
  *(uint32_t *)(a1 + 88) = 0;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)a1 = 0;
  *(uint8_t *)(a1 + 8) = 1;
  sub_BE7C70(a1);
  g4_std_compat::string_assign(a1 + 12, &unk_1B15112, 0);
  *(uint8_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 2;
  *(uint8_t *)(a1 + 76) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint8_t *)(a1 + 92) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_BF6360  (binary VA: 0xbf6360)
// Original: sub_BF6360
// ----------------------------------------------------------------------------
int sub_BF6360()
{
  int result;
  int v1;

  result = dword_20DE680;
  if ( dword_20DE680 == 0 )
  {
    v1 = opNew(0x60u);
    sub_BF62B0(v1);
    dword_20DE680 = v1;
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_vector_VirtualButtonMana_50d193::at  (binary VA: 0xbf9e30)
// Original: std::vector<std::vector<VirtualButtonManager *>>::at
// ----------------------------------------------------------------------------
unsigned int g4_std::vector_vector_VirtualButtonMana_50d193::at(std::vector<std::vector<VirtualButtonManager *>> *self, unsigned int a2)
{
  if ( a2 >= -1431655765 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 2) )
    sub_1900210("vector::_M_range_check");
  return *(uint32_t *)self + 12 * a2;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_VirtualButtonManager_5a7cee::at  (binary VA: 0xbf9e80)
// Original: std::vector<VirtualButtonManager *>::at
// ----------------------------------------------------------------------------
unsigned int g4_std::vector_VirtualButtonManager_5a7cee::at(std::vector<VirtualButtonManager *> *self, unsigned int a2)
{
  if ( a2 >= (*((uint32_t *)self + 1) - *(uint32_t *)self) >> 2 )
    sub_1900210("vector::_M_range_check");
  return *(uint32_t *)self + 4 * a2;
}


