#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASBroadcaster.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASBroadcaster::initialize  (binary VA: 0x11257d0)
// Original: gameswf::ASBroadcaster::initialize
// ----------------------------------------------------------------------------
int gameswf::ASBroadcaster::initialize(uint32_t *a1)
{
  int result;
  uint32_t *v2;
  int v3;
  gameswf::Player::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  int StandardMemberID;
  gameswf::Self *v8;
  int v9;
  gameswf::Self *v10;
  int v11;
  gameswf::Self *v12;
  int v13;
  typedef gameswf::ASListener::Self *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t _g4_t_v17[3];
  typedef unsigned int _g4_t_v18[3];
  typedef unsigned int _g4_t_v19[3];
  typedef unsigned int _g4_t_v20[3];
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef gameswf::Self *_g4_t_v23;
  typedef int16_t _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef gameswf::Self *_g4_t_v29;
  typedef int16_t _g4_t_v30;
  typedef char _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
  typedef gameswf::Self *_g4_t_v35;
  typedef int16_t _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  typedef gameswf::Self *_g4_t_v41;
  typedef int16_t _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v19)) > _g4_s4 ? (40u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v20)) > _g4_s5 ? (52u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v21)) > _g4_s6 ? (64u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (65u + sizeof(_g4_t_v22)) > _g4_s7 ? (65u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v23)) > _g4_s8 ? (76u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v24)) > _g4_s9 ? (80u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (82u + sizeof(_g4_t_v25)) > _g4_s10 ? (82u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (83u + sizeof(_g4_t_v26)) > _g4_s11 ? (83u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v27)) > _g4_s12 ? (96u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (97u + sizeof(_g4_t_v28)) > _g4_s13 ? (97u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v29)) > _g4_s14 ? (108u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v30)) > _g4_s15 ? (112u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (114u + sizeof(_g4_t_v31)) > _g4_s16 ? (114u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (115u + sizeof(_g4_t_v32)) > _g4_s17 ? (115u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v33)) > _g4_s18 ? (128u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (129u + sizeof(_g4_t_v34)) > _g4_s19 ? (129u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v35)) > _g4_s20 ? (140u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (144u + sizeof(_g4_t_v36)) > _g4_s21 ? (144u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (146u + sizeof(_g4_t_v37)) > _g4_s22 ? (146u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (147u + sizeof(_g4_t_v38)) > _g4_s23 ? (147u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (160u + sizeof(_g4_t_v39)) > _g4_s24 ? (160u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (161u + sizeof(_g4_t_v40)) > _g4_s25 ? (161u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (172u + sizeof(_g4_t_v41)) > _g4_s26 ? (172u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (176u + sizeof(_g4_t_v42)) > _g4_s27 ? (176u + sizeof(_g4_t_v42)) : _g4_s27,
    _g4_s29 = (178u + sizeof(_g4_t_v43)) > _g4_s28 ? (178u + sizeof(_g4_t_v43)) : _g4_s28,
    _g4_s30 = (179u + sizeof(_g4_t_v44)) > _g4_s29 ? (179u + sizeof(_g4_t_v44)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 65u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 82u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 83u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 97u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 108u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 114u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 115u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 129u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 140u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 144u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 146u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 147u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 160u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 161u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 172u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 176u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 178u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 179u);

  result = (int)(uintptr_t)(a1);
  if ( a1[4] == 1 )
  {
    v2 = (uint32_t *)a1[3];
    result = *v2 + 12 * a1[5];
    if ( *(uint8_t *)result == 5 )
    {
      v3 = *(uint32_t *)(result + 4);
      if ( v3 != 0 )
      {
        v4 = (gameswf::Player::Self *)v2[53];
        if ( v4 != nullptr )
        {
          v5 = (gameswf::Self *)v2[52];
          if ( *((uint8_t *)v5 + 2) == 0 )
          {
            if ( (*(uint16_t *)v5)-- == 1 )
            {
              v16 = v2;
              gameswf::free_internal(v5);
              v2 = v16;
            }
            v2[52] = 0;
            v2[53] = 0;
            v4 = nullptr;
          }
        }
        v15 = (gameswf::ASListener::Self *)opNew(0x48u);
        gameswf::ASListener::ASListener(v15, v4);
        LOWORD(v17[0]) = 5;
        v17[1] = (uint32_t)(uintptr_t)(v15);
        if ( v15 != nullptr )
          gameswf::RefCounted::addRef(v15);
        v21 = 1;
        v22 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v21, 10);
        v6 = (gameswf::Self *)&v22;
        if ( v21 == -1 )
          v6 = v23;
        gameswf::Strcpy_s(v6, &byte_9[2], (gameswf::Self *)"_listeners");
        v24 = -1;
        v25 = 127;
        v26 |= 1u;
        StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v21);
        if ( StandardMemberID == -1
          || G4_VCALL<uint8_t>(v3, 32, StandardMemberID, v17) == 0 )
        {
          G4_VCALL<void>(v3, 48, &v21, v17);
        }
        if ( v21 == -1 && (v26 & 1) != 0 )
          gameswf::free_internal(v23);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
        LOWORD(v18[0]) = 0;
        gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v18, (int)(uintptr_t)(gameswf::ASBroadcaster::addListener));
        v27 = 1;
        v28 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v27, 11);
        v8 = (gameswf::Self *)&v28;
        if ( v27 == -1 )
          v8 = v29;
        gameswf::Strcpy_s(v8, &byte_9[3], (gameswf::Self *)"addListener");
        v30 = -1;
        v31 = 127;
        v32 |= 1u;
        v9 = gameswf::getStandardMemberID((gameswf::Self *)&v27);
        if ( v9 == -1
          || G4_VCALL<uint8_t>(v3, 32, v9, v18) == 0 )
        {
          G4_VCALL<void>(v3, 48, &v27, v18);
        }
        if ( v27 == -1 && (v32 & 1) != 0 )
          gameswf::free_internal(v29);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v18);
        LOWORD(v19[0]) = 0;
        gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v19, (int)(uintptr_t)((int (*)(int))gameswf::ASBroadcaster::removeListener));
        v33 = 1;
        v34 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v33, 14);
        v10 = (gameswf::Self *)&v34;
        if ( v33 == -1 )
          v10 = v35;
        gameswf::Strcpy_s(v10, &byte_9[6], (gameswf::Self *)"removeListener");
        v36 = -1;
        v37 = 127;
        v38 |= 1u;
        v11 = gameswf::getStandardMemberID((gameswf::Self *)&v33);
        if ( v11 == -1
          || G4_VCALL<uint8_t>(v3, 32, v11, v19) == 0 )
        {
          G4_VCALL<void>(v3, 48, &v33, v19);
        }
        if ( v33 == -1 && (v38 & 1) != 0 )
          gameswf::free_internal(v35);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v19);
        LOWORD(v20[0]) = 0;
        gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v20, (int)(uintptr_t)(gameswf::ASBroadcaster::sendMessage));
        v39 = 1;
        v40 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v39, 16);
        v12 = (gameswf::Self *)&v40;
        if ( v39 == -1 )
          v12 = v41;
        gameswf::Strcpy_s(v12, (char *)&word_10 + 1, (gameswf::Self *)"broadcastMessage");
        v42 = -1;
        v43 = 127;
        v44 |= 1u;
        v13 = gameswf::getStandardMemberID((gameswf::Self *)&v39);
        if ( v13 == -1
          || G4_VCALL<uint8_t>(v3, 32, v13, v20) == 0 )
        {
          G4_VCALL<void>(v3, 48, &v39, v20);
        }
        if ( v39 == -1 && (v44 & 1) != 0 )
          gameswf::free_internal(v41);
        return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBroadcaster::addListener  (binary VA: 0x1125d50)
// Original: gameswf::ASBroadcaster::addListener
// ----------------------------------------------------------------------------
int gameswf::ASBroadcaster::addListener(int a1)
{
  gameswf::Self *v1;
  int StandardMemberID;
  char v3;
  char v4;
  gameswf::ASListener::Self *v6;
  int v7;
  gameswf::ASObject::Self *v8;
  typedef char _g4_t_v9;
  typedef int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef gameswf::ASListener::Self *_g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef gameswf::Self *_g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (33u + sizeof(_g4_t_v14)) > _g4_s5 ? (33u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v15)) > _g4_s6 ? (44u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v16)) > _g4_s7 ? (48u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (50u + sizeof(_g4_t_v17)) > _g4_s8 ? (50u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (51u + sizeof(_g4_t_v18)) > _g4_s9 ? (51u + sizeof(_g4_t_v18)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 33u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 50u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 51u);

  LOWORD(v11) = 0;
  v13 = 1;
  v14 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v13, 10);
  v1 = (gameswf::Self *)&v14;
  if ( v13 == -1 )
    v1 = v15;
  gameswf::Strcpy_s(v1, &byte_9[2], (gameswf::Self *)"_listeners");
  v16 = -1;
  v17 = 127;
  v18 |= 1u;
  v10 = *(uint32_t *)(a1 + 4);
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v13);
  if ( StandardMemberID == -1
    || (v3 = G4_VCALL<int>(v10, 36, StandardMemberID, &v11),
        v4 = 1,
        v3 == 0) )
  {
    v4 = G4_VCALL<int>(v10, 44, &v13, &v11);
    if ( v13 != -1 )
      goto LABEL_6;
  }
  else if ( v13 != -1 )
  {
    goto LABEL_6;
  }
  if ( (v18 & 1) != 0 )
  {
    v9 = v4;
    gameswf::free_internal(v15);
    v4 = v9;
  }
LABEL_6:
  if ( v4 == 0 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v11);
  if ( (uint8_t)v11 != 5 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v11);
  v6 = v12;
  if ( v12 == nullptr )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v11);
  if ( G4_VCALL<uint8_t>(v12, 8, 35) == 0 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v11);
  v7 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v7 != 5 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v11);
  v8 = *(gameswf::ASObject::Self **)(v7 + 4);
  if ( v8 == nullptr )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v11);
  gameswf::ASListener::add(v6, v8);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v11);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBroadcaster::removeListener  (binary VA: 0x1125f20)
// Original: gameswf::ASBroadcaster::removeListener
// ----------------------------------------------------------------------------
int gameswf::ASBroadcaster::removeListener(int a1)
{
  gameswf::Self *v1;
  int StandardMemberID;
  char v3;
  char v4;
  gameswf::ASListener::Self *v6;
  int v7;
  gameswf::ASObject::Self *v8;
  typedef char _g4_t_v9;
  typedef int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef gameswf::ASListener::Self *_g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef gameswf::Self *_g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (33u + sizeof(_g4_t_v14)) > _g4_s5 ? (33u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v15)) > _g4_s6 ? (44u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v16)) > _g4_s7 ? (48u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (50u + sizeof(_g4_t_v17)) > _g4_s8 ? (50u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (51u + sizeof(_g4_t_v18)) > _g4_s9 ? (51u + sizeof(_g4_t_v18)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 33u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 50u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 51u);

  LOWORD(v11) = 0;
  v13 = 1;
  v14 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v13, 10);
  v1 = (gameswf::Self *)&v14;
  if ( v13 == -1 )
    v1 = v15;
  gameswf::Strcpy_s(v1, &byte_9[2], (gameswf::Self *)"_listeners");
  v16 = -1;
  v17 = 127;
  v18 |= 1u;
  v10 = *(uint32_t *)(a1 + 4);
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v13);
  if ( StandardMemberID == -1
    || (v3 = G4_VCALL<int>(v10, 36, StandardMemberID, &v11),
        v4 = 1,
        v3 == 0) )
  {
    v4 = G4_VCALL<int>(v10, 44, &v13, &v11);
    if ( v13 != -1 )
      goto LABEL_6;
  }
  else if ( v13 != -1 )
  {
    goto LABEL_6;
  }
  if ( (v18 & 1) != 0 )
  {
    v9 = v4;
    gameswf::free_internal(v15);
    v4 = v9;
  }
LABEL_6:
  if ( v4 == 0 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v11);
  if ( (uint8_t)v11 != 5 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v11);
  v6 = v12;
  if ( v12 == nullptr || G4_VCALL<uint8_t>(v12, 8, 35) == 0 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v11);
  v7 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v7 == 5 )
    v8 = *(gameswf::ASObject::Self **)(v7 + 4);
  else
    v8 = nullptr;
  gameswf::ASListener::remove(v6, v8);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v11);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBroadcaster::sendMessage  (binary VA: 0x11270a0)
// Original: gameswf::ASBroadcaster::sendMessage
// ----------------------------------------------------------------------------
int gameswf::ASBroadcaster::sendMessage(int a1)
{
  gameswf::Self *v1;
  int StandardMemberID;
  char v3;
  char v4;
  int v6;
  typedef char _g4_t_v7;
  typedef int _g4_t_v8;
  typedef unsigned int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  typedef gameswf::Self *_g4_t_v13;
  typedef int16_t _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v10)) > _g4_s3 ? (20u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v11)) > _g4_s4 ? (32u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (33u + sizeof(_g4_t_v12)) > _g4_s5 ? (33u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v13)) > _g4_s6 ? (44u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v14)) > _g4_s7 ? (48u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (50u + sizeof(_g4_t_v15)) > _g4_s8 ? (50u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (51u + sizeof(_g4_t_v16)) > _g4_s9 ? (51u + sizeof(_g4_t_v16)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 33u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 50u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 51u);

  LOWORD(v9) = 0;
  v11 = 1;
  v12 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v11, 10);
  v1 = (gameswf::Self *)&v12;
  if ( v11 == -1 )
    v1 = v13;
  gameswf::Strcpy_s(v1, &byte_9[2], (gameswf::Self *)"_listeners");
  v14 = -1;
  v15 = 127;
  v16 |= 1u;
  v8 = *(uint32_t *)(a1 + 4);
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v11);
  if ( StandardMemberID == -1
    || (v3 = G4_VCALL<int>(v8, 36, StandardMemberID, &v9),
        v4 = 1,
        v3 == 0) )
  {
    v4 = G4_VCALL<int>(v8, 44, &v11, &v9);
    if ( v11 != -1 )
      goto LABEL_6;
  }
  else if ( v11 != -1 )
  {
    goto LABEL_6;
  }
  if ( (v16 & 1) != 0 )
  {
    v7 = v4;
    gameswf::free_internal(v13);
    v4 = v7;
  }
LABEL_6:
  if ( v4 == 0 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v9);
  if ( (uint8_t)v9 != 5 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v9);
  v6 = v10;
  if ( v10 == 0 || G4_VCALL<uint8_t>(v10, 8, 35) == 0 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v9);
  gameswf::ASListener::broadcast(v6, a1);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v9);
}


