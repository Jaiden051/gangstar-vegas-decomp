#include "Core/Utils/DecompTypes.h"
#include "gameswf_FlashFX.h"

// ----------------------------------------------------------------------------
// Function: gameswf::FlashFX::updateCursor  (binary VA: 0x1112300)
// Original: gameswf::FlashFX::updateCursor
// ----------------------------------------------------------------------------
int gameswf::FlashFX::updateCursor(gameswf::FlashFX::Self *self, Cursor *a2, int a3)
{
  int result;
  typedef char _g4_t_v4;
  typedef uint8_t _g4_t_v5[12];
  typedef int _g4_t_v6;
  typedef double _g4_t_v7;
  typedef uint8_t _g4_t_v8[12];
  typedef char _g4_t_v9[48];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (15u + sizeof(_g4_t_v4)) > _g4_s0 ? (15u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v5)) > _g4_s1 ? (24u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v6)) > _g4_s2 ? (36u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v7)) > _g4_s3 ? (40u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v8)) > _g4_s4 ? (48u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v9)) > _g4_s5 ? (60u + sizeof(_g4_t_v9)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 15u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 36u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 60u);

  if ( *((uint8_t *)self + 312) != 0 )
  {
    v4 = *((uint8_t *)self + 36 * a3 + 112);
    gameswf::RenderFX::updateCursor(self, a2, a3);
    result = *((uint32_t *)self + 9);
    if ( *(uint8_t *)(result + 232) == 0 )
    {
      result = *((uint8_t *)self + 36 * a3 + 112);
      if ( v4 != (uint8_t)result )
      {
        v8[4] = *((uint8_t *)self + 36 * a3 + 112);
        v7 = (double)a3;
        LOWORD(v6) = 2;
        v8[0] = 1;
        v8[1] = 0;
        gameswf::RenderFX::getRootHandle((gameswf::RenderFX::Self *)v9);
        gameswf::CharacterHandle::invokeMethod(
          (gameswf::CharacterHandle::Self *)v5,
          (gameswf::CharacterHandle::Self *)v9,
          (const gameswf::ASValue::Self *)"onReceiveCursorState",
          (gameswf::ASValue::Self *)&v6,
          2u);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
        gameswf::CharacterHandle::Destroy((gameswf::Self **)v9);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
        return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v6);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FlashFX::unload  (binary VA: 0x1112440)
// Original: gameswf::FlashFX::unload
// ----------------------------------------------------------------------------
int gameswf::FlashFX::unload(gameswf::FlashFX::Self *self)
{
  uint32_t *v1;
  int v2;
  int i;
  gameswf::RenderFX::Self *v4;
  int v5;
  gameswf::Self *v6;
  int v8;
  uint32_t *v9;

  v1 = (uint32_t *)((char *)self + 356);
  v2 = *((uint32_t *)self + 90);
  *((uint32_t *)self + 88) = 0;
  *((uint32_t *)self + 87) = 0;
  *((uint32_t *)self + 86) = 0;
  if ( v2 <= 0 )
  {
    if ( v2 < 0 )
    {
      v8 = 4 * v2;
      do
      {
        v9 = (uint32_t *)(*v1 + v8);
        if ( v9 != nullptr )
          *v9 = 0;
        v8 += 4;
        ++v2;
      }
      while ( v2 != 0 );
    }
  }
  else
  {
    for ( i = 0; i != v2; ++i )
    {
      if ( *(uint32_t *)(*v1 + 4 * i) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*v1 + 4 * i));
    }
  }
  v4 = (gameswf::RenderFX::Self *)(self);
  v5 = *((uint32_t *)self + 92);
  *((uint32_t *)self + 90) = 0;
  if ( v5 == 0 )
  {
    v6 = *((gameswf::Self **)self + 89);
    *((uint32_t *)self + 91) = 0;
    if ( v6 != nullptr )
      gameswf::free_internal(v6);
    v4 = (gameswf::RenderFX::Self *)(self);
    *((uint32_t *)self + 89) = 0;
  }
  return ((gameswf::RenderFX::unload(v4)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::FlashFX::Construct  (binary VA: 0x11134a0)
// Original: gameswf::FlashFX::FlashFX
// ----------------------------------------------------------------------------
gameswf::FlashFX::Self * gameswf::FlashFX::Construct(gameswf::FlashFX::Self *self)
{
  gameswf::RenderFX::Construct(self);
  *((uint32_t *)self + 86) = 0;
  *((uint32_t *)self + 87) = 0;
  *((uint32_t *)self + 88) = 0;
  *((uint32_t *)self + 89) = 0;
  *((uint32_t *)self + 90) = 0;
  *((uint32_t *)self + 91) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FA88);
  *((uint32_t *)self + 85) = ((uint32_t)(uintptr_t)&off_208FAE0);
  *((uint32_t *)self + 92) = 0;
  gameswf::RenderFX::setEventListener(self, (char *)self + 340);
  gameswf::RenderFX::setInputBehavior(self, 16);
  gameswf::RenderFX::setControllerEnabled(self, 1, false);
  gameswf::RenderFX::setControllerEnabled(self, 2, false);
  gameswf::RenderFX::setControllerEnabled(self, 3, false);
  gameswf::registerNativeFunction((gameswf::Self *)"playSound", (int)(uintptr_t)(gameswf::NativePlaySound));
  gameswf::registerNativeFunction((gameswf::Self *)"stopSound", (int)(uintptr_t)(gameswf::NativeStopSound));
  gameswf::registerNativeFunction((gameswf::Self *)"getString", (int)(uintptr_t)(gameswf::NativeGetString));
  gameswf::registerNativeFunction((gameswf::Self *)"setLanguage", (int)(uintptr_t)(gameswf::NativeSetLanguage));
  gameswf::registerNativeFunction((gameswf::Self *)"preloadGlyphs", (int)(uintptr_t)(gameswf::NativePreloadGlyphs));
  gameswf::registerNativeFunction((gameswf::Self *)"hasMissingGlyphs", (int)(uintptr_t)(gameswf::NativeHasMissingGlyphs));
  gameswf::registerNativeFunction((gameswf::Self *)"getKeyState", (int)(uintptr_t)(gameswf::NativeGetKeyState));
  gameswf::registerNativeFunction((gameswf::Self *)"getCursorState", (int)(uintptr_t)(gameswf::NativeGetCursorState));
  gameswf::registerNativeFunction((gameswf::Self *)"getGameData", (int)(uintptr_t)(gameswf::NativeGetGameData));
  return (gameswf::FlashFX::Self *)gameswf::registerNativeFunction((gameswf::Self *)"setGameData", (int)(uintptr_t)(gameswf::NativeSetGameData));
}

// ----------------------------------------------------------------------------
// Function: gameswf::FlashFX::sendKeyState  (binary VA: 0x1114170)
// Original: gameswf::FlashFX::sendKeyState
// ----------------------------------------------------------------------------
int gameswf::FlashFX::sendKeyState(int a1, int *a2)
{
  int v2;
  double v3; // xmm0_8
  int v4;
  int v5;
  typedef uint8_t _g4_t_v7[12];
  typedef int _g4_t_v8;
  typedef double _g4_t_v9 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v10[4];
  typedef double _g4_t_v11;
  typedef uint8_t _g4_t_v12[4];
  typedef double _g4_t_v13 __attribute__((aligned(1)));
  typedef char _g4_t_v14[48];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v8)) > _g4_s1 ? (24u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v10)) > _g4_s3 ? (36u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v11)) > _g4_s4 ? (40u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v12)) > _g4_s5 ? (48u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v13)) > _g4_s6 ? (52u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v14)) > _g4_s7 ? (60u + sizeof(_g4_t_v14)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);

  v2 = *a2;
  LOWORD(v8) = 2;
  v3 = (double)v2;
  v4 = a2[1];
  v5 = a2[2];
  v9 = v3;
  v11 = (double)v4;
  v10[0] = 2;
  v13 = (double)v5;
  v10[1] = 0;
  v12[0] = 2;
  v12[1] = 0;
  gameswf::RenderFX::getRootHandle((gameswf::RenderFX::Self *)v14);
  gameswf::CharacterHandle::invokeMethod(
    (gameswf::CharacterHandle::Self *)v7,
    (gameswf::CharacterHandle::Self *)v14,
    (const gameswf::ASValue::Self *)"onReceiveKeyState",
    (gameswf::ASValue::Self *)&v8,
    3u);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  gameswf::CharacterHandle::Destroy((gameswf::Self **)v14);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::FlashFX::sendControllerState  (binary VA: 0x1114290)
// Original: gameswf::FlashFX::sendControllerState
// ----------------------------------------------------------------------------
int gameswf::FlashFX::sendControllerState(int a1, int a2)
{
  double v2; // xmm0_8
  typedef uint8_t _g4_t_v4[12];
  typedef int _g4_t_v5;
  typedef double _g4_t_v6;
  typedef uint8_t _g4_t_v7[12];
  typedef char _g4_t_v8[48];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v5)) > _g4_s1 ? (20u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v6)) > _g4_s2 ? (24u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v7)) > _g4_s3 ? (32u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v8)) > _g4_s4 ? (44u + sizeof(_g4_t_v8)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);

  v2 = (double)*(int *)a2;
  v7[4] = *(uint8_t *)(a2 + 4);
  v6 = v2;
  LOWORD(v5) = 2;
  v7[0] = 1;
  v7[1] = 0;
  gameswf::RenderFX::getRootHandle((gameswf::RenderFX::Self *)v8);
  gameswf::CharacterHandle::invokeMethod(
    (gameswf::CharacterHandle::Self *)v4,
    (gameswf::CharacterHandle::Self *)v8,
    (const gameswf::ASValue::Self *)"onReceiveControllerState",
    (gameswf::ASValue::Self *)&v5,
    2u);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
  gameswf::CharacterHandle::Destroy((gameswf::Self **)v8);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::FlashFX::getCursorState  (binary VA: 0x1114ac0)
// Original: gameswf::FlashFX::getCursorState
// ----------------------------------------------------------------------------
int gameswf::FlashFX::getCursorState(gameswf::FlashFX::Self *self, int a2)
{
  int v2;
  gameswf::ASObject::Self *v3;
  int v4;
  int v5;
  char *v6;
  gameswf::ASObject::Self **v7;
  gameswf::ASObject::Self *v8;
  int v9;
  int v10;
  char *v11;
  gameswf::ASObject::Self **v12;
  gameswf::ASObject::Self *v13;
  int v14;
  int v15;
  char *v16;
  gameswf::ASObject::Self **v17;
  gameswf::ASObject::Self *v18;
  int v19;
  int v20;
  char *v21;
  gameswf::ASObject::Self **v22;
  gameswf::Self *v23;
  char *v24;
  bool v25;
  gameswf::Self *v26;
  char *v27;
  gameswf::Self *v28;
  char *v29;
  float v30;
  gameswf::Root::Self *v31;
  int StandardMemberID;
  gameswf::Self *v33;
  int v34;
  int v35;
  int v37;
  gameswf::Self *v38;
  int v39;
  gameswf::Self *v40;
  int v41;
  gameswf::Self *v42;
  int v43;
  gameswf::Self *v44;
  typedef int _g4_t_v45;
  typedef gameswf::Player::Self *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef gameswf::Player::Self *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef gameswf::Player::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef gameswf::Player::Self *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef gameswf::Self *_g4_t_v62;
  typedef gameswf::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef gameswf::Self *_g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef uint16_t _g4_t_v71[6];
  typedef uint16_t _g4_t_v72[6];
  typedef uint8_t _g4_t_v73[12];
  typedef char _g4_t_v74;
  typedef char _g4_t_v75;
  typedef gameswf::Self *_g4_t_v76;
  typedef int16_t _g4_t_v77;
  typedef char _g4_t_v78;
  typedef char _g4_t_v79;
  typedef char _g4_t_v80;
  typedef char _g4_t_v81;
  typedef gameswf::Self *_g4_t_v82;
  typedef int16_t _g4_t_v83;
  typedef char _g4_t_v84;
  typedef char _g4_t_v85;
  typedef char _g4_t_v86;
  typedef char _g4_t_v87;
  typedef gameswf::Self *_g4_t_v88;
  typedef int16_t _g4_t_v89;
  typedef char _g4_t_v90;
  typedef char _g4_t_v91;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v45)) > _g4_s0 ? (8u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v46)) > _g4_s1 ? (16u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v47)) > _g4_s2 ? (16u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v48)) > _g4_s3 ? (16u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v49)) > _g4_s4 ? (16u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v50)) > _g4_s5 ? (16u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v51)) > _g4_s6 ? (16u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v52)) > _g4_s7 ? (16u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v53)) > _g4_s8 ? (16u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v54)) > _g4_s9 ? (16u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v55)) > _g4_s10 ? (16u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v56)) > _g4_s11 ? (16u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v57)) > _g4_s12 ? (16u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v58)) > _g4_s13 ? (16u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v59)) > _g4_s14 ? (16u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v60)) > _g4_s15 ? (16u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v61)) > _g4_s16 ? (16u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (20u + sizeof(_g4_t_v62)) > _g4_s17 ? (20u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (20u + sizeof(_g4_t_v63)) > _g4_s18 ? (20u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (24u + sizeof(_g4_t_v64)) > _g4_s19 ? (24u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (24u + sizeof(_g4_t_v65)) > _g4_s20 ? (24u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (24u + sizeof(_g4_t_v66)) > _g4_s21 ? (24u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (24u + sizeof(_g4_t_v67)) > _g4_s22 ? (24u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (24u + sizeof(_g4_t_v68)) > _g4_s23 ? (24u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v69)) > _g4_s24 ? (32u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (36u + sizeof(_g4_t_v70)) > _g4_s25 ? (36u + sizeof(_g4_t_v70)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v71)) > _g4_s26 ? (40u + sizeof(_g4_t_v71)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v72)) > _g4_s27 ? (52u + sizeof(_g4_t_v72)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v73)) > _g4_s28 ? (64u + sizeof(_g4_t_v73)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v74)) > _g4_s29 ? (76u + sizeof(_g4_t_v74)) : _g4_s29,
    _g4_s31 = (77u + sizeof(_g4_t_v75)) > _g4_s30 ? (77u + sizeof(_g4_t_v75)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v76)) > _g4_s31 ? (88u + sizeof(_g4_t_v76)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v77)) > _g4_s32 ? (92u + sizeof(_g4_t_v77)) : _g4_s32,
    _g4_s34 = (94u + sizeof(_g4_t_v78)) > _g4_s33 ? (94u + sizeof(_g4_t_v78)) : _g4_s33,
    _g4_s35 = (95u + sizeof(_g4_t_v79)) > _g4_s34 ? (95u + sizeof(_g4_t_v79)) : _g4_s34,
    _g4_s36 = (108u + sizeof(_g4_t_v80)) > _g4_s35 ? (108u + sizeof(_g4_t_v80)) : _g4_s35,
    _g4_s37 = (109u + sizeof(_g4_t_v81)) > _g4_s36 ? (109u + sizeof(_g4_t_v81)) : _g4_s36,
    _g4_s38 = (120u + sizeof(_g4_t_v82)) > _g4_s37 ? (120u + sizeof(_g4_t_v82)) : _g4_s37,
    _g4_s39 = (124u + sizeof(_g4_t_v83)) > _g4_s38 ? (124u + sizeof(_g4_t_v83)) : _g4_s38,
    _g4_s40 = (126u + sizeof(_g4_t_v84)) > _g4_s39 ? (126u + sizeof(_g4_t_v84)) : _g4_s39,
    _g4_s41 = (127u + sizeof(_g4_t_v85)) > _g4_s40 ? (127u + sizeof(_g4_t_v85)) : _g4_s40,
    _g4_s42 = (140u + sizeof(_g4_t_v86)) > _g4_s41 ? (140u + sizeof(_g4_t_v86)) : _g4_s41,
    _g4_s43 = (141u + sizeof(_g4_t_v87)) > _g4_s42 ? (141u + sizeof(_g4_t_v87)) : _g4_s42,
    _g4_s44 = (152u + sizeof(_g4_t_v88)) > _g4_s43 ? (152u + sizeof(_g4_t_v88)) : _g4_s43,
    _g4_s45 = (156u + sizeof(_g4_t_v89)) > _g4_s44 ? (156u + sizeof(_g4_t_v89)) : _g4_s44,
    _g4_s46 = (158u + sizeof(_g4_t_v90)) > _g4_s45 ? (158u + sizeof(_g4_t_v90)) : _g4_s45,
    _g4_s47 = (159u + sizeof(_g4_t_v91)) > _g4_s46 ? (159u + sizeof(_g4_t_v91)) : _g4_s46
  };
  alignas(16) uint8_t _g4_sf[_g4_s47];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 16u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 36u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 64u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 76u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 77u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 88u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 92u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 94u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 95u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 108u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 109u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 120u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 124u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 126u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 127u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 140u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 141u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 152u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 156u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 158u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 159u);

  v2 = 0;
  if ( *(uint8_t *)(*((uint32_t *)self + 9) + 232) == 0 )
  {
    if ( *((uint32_t *)self + 90) == 0 )
    {
      v46 = *((gameswf::Player::Self **)self + 9);
      v3 = (gameswf::ASObject::Self *)opNew(0x28u);
      gameswf::ASObject::ASObject(v3, v46);
      v4 = *((uint32_t *)self + 90);
      v64 = *((uint32_t *)self + 91);
      v5 = v4 + 1;
      if ( v4 + 1 <= v64 || *((uint32_t *)self + 92) != 0 )
      {
        v6 = *((char **)self + 89);
      }
      else
      {
        v43 = v5 + (v5 >> 1);
        *((uint32_t *)self + 91) = v43;
        if ( v43 != 0 )
        {
          v58 = v4 + 1;
          if ( *((uint32_t *)self + 89) != 0 )
          {
            v45 = 0;
            v6 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 89), 4 * (v5 + (v5 >> 1)), 4 * v64);
          }
          else
          {
            v6 = (char *)gameswf::malloc_internal(4 * v43);
          }
          *((uint32_t *)self + 89) = (uint32_t)(uintptr_t)(v6);
          v4 = *((uint32_t *)self + 90);
          v5 = v58;
        }
        else
        {
          v44 = *((gameswf::Self **)self + 89);
          if ( v44 != nullptr )
          {
            v57 = v4 + 1;
            gameswf::free_internal(v44);
            v4 = *((uint32_t *)self + 90);
            v5 = v57;
          }
          *((uint32_t *)self + 89) = 0;
          v6 = nullptr;
        }
      }
      v7 = (gameswf::ASObject::Self **)&v6[4 * v4];
      if ( v7 != nullptr )
      {
        *v7 = v3;
        if ( v3 != nullptr )
        {
          v47 = v5;
          gameswf::RefCounted::addRef(v3);
          v5 = v47;
        }
      }
      *((uint32_t *)self + 90) = v5;
      v48 = *((gameswf::Player::Self **)self + 9);
      v8 = (gameswf::ASObject::Self *)opNew(0x28u);
      gameswf::ASObject::ASObject(v8, v48);
      v9 = *((uint32_t *)self + 90);
      v65 = *((uint32_t *)self + 91);
      v10 = v9 + 1;
      if ( v9 + 1 <= v65 || *((uint32_t *)self + 92) != 0 )
      {
        v11 = *((char **)self + 89);
      }
      else
      {
        v41 = v10 + (v10 >> 1);
        *((uint32_t *)self + 91) = v41;
        if ( v41 != 0 )
        {
          v59 = v9 + 1;
          if ( *((uint32_t *)self + 89) != 0 )
          {
            v45 = 0;
            v11 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 89), 4 * (v10 + (v10 >> 1)), 4 * v65);
          }
          else
          {
            v11 = (char *)gameswf::malloc_internal(4 * v41);
          }
          *((uint32_t *)self + 89) = (uint32_t)(uintptr_t)(v11);
          v9 = *((uint32_t *)self + 90);
          v10 = v59;
        }
        else
        {
          v42 = *((gameswf::Self **)self + 89);
          if ( v42 != nullptr )
          {
            v56 = v9 + 1;
            gameswf::free_internal(v42);
            v9 = *((uint32_t *)self + 90);
            v10 = v56;
          }
          *((uint32_t *)self + 89) = 0;
          v11 = nullptr;
        }
      }
      v12 = (gameswf::ASObject::Self **)&v11[4 * v9];
      if ( v12 != nullptr )
      {
        *v12 = v8;
        if ( v8 != nullptr )
        {
          v49 = v10;
          gameswf::RefCounted::addRef(v8);
          v10 = v49;
        }
      }
      *((uint32_t *)self + 90) = v10;
      v50 = *((gameswf::Player::Self **)self + 9);
      v13 = (gameswf::ASObject::Self *)opNew(0x28u);
      gameswf::ASObject::ASObject(v13, v50);
      v14 = *((uint32_t *)self + 90);
      v66 = *((uint32_t *)self + 91);
      v15 = v14 + 1;
      if ( v14 + 1 <= v66 || *((uint32_t *)self + 92) != 0 )
      {
        v16 = *((char **)self + 89);
      }
      else
      {
        v39 = v15 + (v15 >> 1);
        *((uint32_t *)self + 91) = v39;
        if ( v39 != 0 )
        {
          v60 = v14 + 1;
          if ( *((uint32_t *)self + 89) != 0 )
          {
            v45 = 0;
            v16 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 89), 4 * (v15 + (v15 >> 1)), 4 * v66);
          }
          else
          {
            v16 = (char *)gameswf::malloc_internal(4 * v39);
          }
          *((uint32_t *)self + 89) = (uint32_t)(uintptr_t)(v16);
          v14 = *((uint32_t *)self + 90);
          v15 = v60;
        }
        else
        {
          v40 = *((gameswf::Self **)self + 89);
          if ( v40 != nullptr )
          {
            v55 = v14 + 1;
            gameswf::free_internal(v40);
            v14 = *((uint32_t *)self + 90);
            v15 = v55;
          }
          *((uint32_t *)self + 89) = 0;
          v16 = nullptr;
        }
      }
      v17 = (gameswf::ASObject::Self **)&v16[4 * v14];
      if ( v17 != nullptr )
      {
        *v17 = v13;
        if ( v13 != nullptr )
        {
          v51 = v15;
          gameswf::RefCounted::addRef(v13);
          v15 = v51;
        }
      }
      *((uint32_t *)self + 90) = v15;
      v52 = *((gameswf::Player::Self **)self + 9);
      v18 = (gameswf::ASObject::Self *)opNew(0x28u);
      gameswf::ASObject::ASObject(v18, v52);
      v19 = *((uint32_t *)self + 90);
      v67 = *((uint32_t *)self + 91);
      v20 = v19 + 1;
      if ( v19 + 1 <= v67 || *((uint32_t *)self + 92) != 0 )
      {
        v21 = *((char **)self + 89);
      }
      else
      {
        v37 = v20 + (v20 >> 1);
        *((uint32_t *)self + 91) = v37;
        if ( v37 != 0 )
        {
          v61 = v19 + 1;
          if ( *((uint32_t *)self + 89) != 0 )
          {
            v45 = 0;
            v21 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 89), 4 * v37, 4 * v67);
          }
          else
          {
            v21 = (char *)gameswf::malloc_internal(4 * v37);
          }
          *((uint32_t *)self + 89) = (uint32_t)(uintptr_t)(v21);
          v19 = *((uint32_t *)self + 90);
          v20 = v61;
        }
        else
        {
          v38 = *((gameswf::Self **)self + 89);
          if ( v38 != nullptr )
          {
            v54 = v19 + 1;
            gameswf::free_internal(v38);
            v19 = *((uint32_t *)self + 90);
            v20 = v54;
          }
          *((uint32_t *)self + 89) = 0;
          v21 = nullptr;
        }
      }
      v22 = (gameswf::ASObject::Self **)&v21[4 * v19];
      if ( v22 != nullptr )
      {
        *v22 = v18;
        if ( v18 != nullptr )
        {
          v53 = v20;
          gameswf::RefCounted::addRef(v18);
          v20 = v53;
        }
      }
      *((uint32_t *)self + 90) = v20;
      v74 = 1;
      v75 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v74, 1);
      v23 = (gameswf::Self *)&v75;
      if ( v74 == -1 )
        v23 = v76;
      gameswf::Strcpy_s(v23, (char *)&dword_0 + 2, (gameswf::Self *)"x");
      v77 = -1;
      v78 = 127;
      v79 |= 1u;
      v24 = sub_1114380((int **)(*((uint32_t *)self + 9) + 48), &v74);
      v25 = v74 == -1;
      *((uint32_t *)self + 86) = (uint32_t)(uintptr_t)(v24);
      if ( v25 && (v79 & 1) != 0 )
        gameswf::free_internal(v76);
      v80 = 1;
      v81 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v80, 1);
      v26 = (gameswf::Self *)&v81;
      if ( v80 == -1 )
        v26 = v82;
      gameswf::Strcpy_s(v26, (char *)&dword_0 + 2, (gameswf::Self *)"y");
      v83 = -1;
      v84 = 127;
      v85 |= 1u;
      v27 = sub_1114380((int **)(*((uint32_t *)self + 9) + 48), &v80);
      v25 = v80 == -1;
      *((uint32_t *)self + 87) = (uint32_t)(uintptr_t)(v27);
      if ( v25 && (v85 & 1) != 0 )
        gameswf::free_internal(v82);
      v86 = 1;
      v87 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v86, 5);
      v28 = (gameswf::Self *)&v87;
      if ( v86 == -1 )
        v28 = v88;
      gameswf::Strcpy_s(v28, (char *)&loc_6, (gameswf::Self *)"state");
      v89 = -1;
      v90 = 127;
      v91 |= 1u;
      v29 = sub_1114380((int **)(*((uint32_t *)self + 9) + 48), &v86);
      v25 = v86 == -1;
      *((uint32_t *)self + 88) = (uint32_t)(uintptr_t)(v29);
      if ( v25 && (v91 & 1) != 0 )
        gameswf::free_internal(v88);
    }
    v30 = *((float *)self + 9 * a2 + 27);
    v69 = *((float *)self + 9 * a2 + 26);
    v31 = *((gameswf::Root::Self **)self + 10);
    v70 = v30;
    gameswf::Root::screenToLogical(v31, (gameswf::Point::Self *)&v69);
    v62 = *((gameswf::Self **)self + 86);
    v2 = *(uint32_t *)(*((uint32_t *)self + 89) + 4 * a2);
    v71[0] = 2;
    *(double *)&v71[2] = v69;
    StandardMemberID = gameswf::getStandardMemberID(v62);
    if ( StandardMemberID == -1
      || G4_VCALL<uint8_t>(v2, 32, StandardMemberID, v71, v45) == 0 )
    {
      G4_VCALL<void>(v2, 48, v62, v71);
    }
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v71);
    v33 = *((gameswf::Self **)self + 87);
    v72[0] = 2;
    v63 = v33;
    *(double *)&v72[2] = v70;
    v34 = gameswf::getStandardMemberID(v33);
    if ( v34 == -1 || G4_VCALL<uint8_t>(v2, 32, v34, v72) == 0 )
      G4_VCALL<void>(v2, 48, v63, v72);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v72);
    v73[0] = 1;
    v73[1] = 0;
    v68 = *((gameswf::Self **)self + 88);
    v73[4] = *((uint8_t *)self + 36 * a2 + 112);
    v35 = gameswf::getStandardMemberID(v68);
    if ( v35 == -1 || G4_VCALL<uint8_t>(v2, 32, v35, v73) == 0 )
      G4_VCALL<void>(v2, 48, v68, v73);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v73);
  }
  return v2;
}


