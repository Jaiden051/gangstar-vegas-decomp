#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASSound.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASSound::stop  (binary VA: 0x113ddc0)
// Original: gameswf::ASSound::stop
// ----------------------------------------------------------------------------
int gameswf::ASSound::stop(int a1)
{
  int result;
  int v2;
  uint32_t *v3;

  result = gameswf::getSoundHandler();
  v2 = result;
  if ( result != 0 )
  {
    v3 = *(uint32_t **)(a1 + 4);
    if ( v3 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v3 + 8))(*(uint32_t *)(a1 + 4), 22) == 0 )
      v3 = nullptr;
    return G4_VCALL<int>(v2, 20, v3[10]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSound::getPosition  (binary VA: 0x113de30)
// Original: gameswf::ASSound::getPosition
// ----------------------------------------------------------------------------
int gameswf::ASSound::getPosition(int a1)
{
  int result;
  int v2;
  uint32_t *v3;
  double v4; // xmm0_8

  result = gameswf::getSoundHandler();
  v2 = result;
  if ( result != 0 )
  {
    v3 = *(uint32_t **)(a1 + 4);
    if ( v3 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v3 + 8))(*(uint32_t *)(a1 + 4), 22) == 0 )
      v3 = nullptr;
    v4 = (double)G4_VCALL<int>(v2, 60, v3[10]);
    return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSound::volume  (binary VA: 0x113dec0)
// Original: gameswf::ASSound::volume
// ----------------------------------------------------------------------------
unsigned int gameswf::ASSound::volume(int a1)
{
  unsigned int result;
  unsigned int v2;
  unsigned int v3;
  uint32_t *v4;
  const char *v5;

  if ( *(int *)(a1 + 16) <= 0 )
    return gameswf::logError((gameswf::Self *)"set volume of sound needs one argument\n", v5);
  result = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v2 = result;
  if ( result <= 0x64 )
  {
    result = gameswf::getSoundHandler();
    v3 = result;
    if ( result != 0 )
    {
      v4 = *(uint32_t **)(a1 + 4);
      if ( v4 != nullptr && G4_VCALL<uint8_t>(v4, 8, 22) == 0 )
        v4 = nullptr;
      return G4_VCALL<int>(v3, 16, v4[10], v2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSound::start  (binary VA: 0x113df80)
// Original: gameswf::ASSound::start
// ----------------------------------------------------------------------------
int gameswf::ASSound::start(int a1)
{
  int result;
  int v2;
  uint32_t *v3;
  int v4;

  result = gameswf::getSoundHandler();
  v2 = result;
  if ( result != 0 )
  {
    v3 = *(uint32_t **)(a1 + 4);
    if ( v3 != nullptr )
    {
      result = G4_VCALL<int>(v3, 8, 22);
      if ( (uint8_t)result != 0 )
      {
        v4 = 0;
        if ( *(int *)(a1 + 16) > 1 )
        {
          gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
          v4 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
        }
        return G4_VCALL<int>(v2, 12, v3[10], v4);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSound::ctor  (binary VA: 0x113e030)
// Original: gameswf::ASSound::ctor
// ----------------------------------------------------------------------------
int gameswf::ASSound::ctor(int a1)
{
  int v1;
  gameswf::Player::Self *v2;
  gameswf::Self *v3;
  int v4;
  int Target;
  gameswf::RefCounted::Self *v6;
  gameswf::Self *WeakProxy;
  gameswf::Self *v8;
  bool v9;
  gameswf::Self *v10;
  gameswf::Self *v11;
  gameswf::Self *v12;
  gameswf::Self *v13;
  gameswf::Self *v14;
  gameswf::Self *v15;
  gameswf::Self *v17;
  typedef gameswf::RefCounted::Self **_g4_t_v18;
  typedef uint8_t _g4_t_v19[12];
  typedef uint8_t _g4_t_v20[12];
  typedef uint8_t _g4_t_v21[12];
  typedef uint8_t _g4_t_v22[12];
  typedef uint8_t _g4_t_v23[12];
  typedef uint8_t _g4_t_v24[12];
  typedef uint8_t _g4_t_v25[12];
  typedef uint32_t _g4_t_v26[3];
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
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef gameswf::Self *_g4_t_v47;
  typedef int16_t _g4_t_v48;
  typedef char _g4_t_v49;
  typedef char _g4_t_v50;
  typedef char _g4_t_v51;
  typedef char _g4_t_v52;
  typedef gameswf::Self *_g4_t_v53;
  typedef int16_t _g4_t_v54;
  typedef char _g4_t_v55;
  typedef char _g4_t_v56;
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef gameswf::Self *_g4_t_v59;
  typedef int16_t _g4_t_v60;
  typedef char _g4_t_v61;
  typedef char _g4_t_v62;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v20)) > _g4_s2 ? (28u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v21)) > _g4_s3 ? (40u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v22)) > _g4_s4 ? (52u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v23)) > _g4_s5 ? (64u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v24)) > _g4_s6 ? (76u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v25)) > _g4_s7 ? (88u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v26)) > _g4_s8 ? (100u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v27)) > _g4_s9 ? (112u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (113u + sizeof(_g4_t_v28)) > _g4_s10 ? (113u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (124u + sizeof(_g4_t_v29)) > _g4_s11 ? (124u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v30)) > _g4_s12 ? (128u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (130u + sizeof(_g4_t_v31)) > _g4_s13 ? (130u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (131u + sizeof(_g4_t_v32)) > _g4_s14 ? (131u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (144u + sizeof(_g4_t_v33)) > _g4_s15 ? (144u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (145u + sizeof(_g4_t_v34)) > _g4_s16 ? (145u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (156u + sizeof(_g4_t_v35)) > _g4_s17 ? (156u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (160u + sizeof(_g4_t_v36)) > _g4_s18 ? (160u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (162u + sizeof(_g4_t_v37)) > _g4_s19 ? (162u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (163u + sizeof(_g4_t_v38)) > _g4_s20 ? (163u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (176u + sizeof(_g4_t_v39)) > _g4_s21 ? (176u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (177u + sizeof(_g4_t_v40)) > _g4_s22 ? (177u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (188u + sizeof(_g4_t_v41)) > _g4_s23 ? (188u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (192u + sizeof(_g4_t_v42)) > _g4_s24 ? (192u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (194u + sizeof(_g4_t_v43)) > _g4_s25 ? (194u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (195u + sizeof(_g4_t_v44)) > _g4_s26 ? (195u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (208u + sizeof(_g4_t_v45)) > _g4_s27 ? (208u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (209u + sizeof(_g4_t_v46)) > _g4_s28 ? (209u + sizeof(_g4_t_v46)) : _g4_s28,
    _g4_s30 = (220u + sizeof(_g4_t_v47)) > _g4_s29 ? (220u + sizeof(_g4_t_v47)) : _g4_s29,
    _g4_s31 = (224u + sizeof(_g4_t_v48)) > _g4_s30 ? (224u + sizeof(_g4_t_v48)) : _g4_s30,
    _g4_s32 = (226u + sizeof(_g4_t_v49)) > _g4_s31 ? (226u + sizeof(_g4_t_v49)) : _g4_s31,
    _g4_s33 = (227u + sizeof(_g4_t_v50)) > _g4_s32 ? (227u + sizeof(_g4_t_v50)) : _g4_s32,
    _g4_s34 = (240u + sizeof(_g4_t_v51)) > _g4_s33 ? (240u + sizeof(_g4_t_v51)) : _g4_s33,
    _g4_s35 = (241u + sizeof(_g4_t_v52)) > _g4_s34 ? (241u + sizeof(_g4_t_v52)) : _g4_s34,
    _g4_s36 = (252u + sizeof(_g4_t_v53)) > _g4_s35 ? (252u + sizeof(_g4_t_v53)) : _g4_s35,
    _g4_s37 = (256u + sizeof(_g4_t_v54)) > _g4_s36 ? (256u + sizeof(_g4_t_v54)) : _g4_s36,
    _g4_s38 = (258u + sizeof(_g4_t_v55)) > _g4_s37 ? (258u + sizeof(_g4_t_v55)) : _g4_s37,
    _g4_s39 = (259u + sizeof(_g4_t_v56)) > _g4_s38 ? (259u + sizeof(_g4_t_v56)) : _g4_s38,
    _g4_s40 = (272u + sizeof(_g4_t_v57)) > _g4_s39 ? (272u + sizeof(_g4_t_v57)) : _g4_s39,
    _g4_s41 = (273u + sizeof(_g4_t_v58)) > _g4_s40 ? (273u + sizeof(_g4_t_v58)) : _g4_s40,
    _g4_s42 = (284u + sizeof(_g4_t_v59)) > _g4_s41 ? (284u + sizeof(_g4_t_v59)) : _g4_s41,
    _g4_s43 = (288u + sizeof(_g4_t_v60)) > _g4_s42 ? (288u + sizeof(_g4_t_v60)) : _g4_s42,
    _g4_s44 = (290u + sizeof(_g4_t_v61)) > _g4_s43 ? (290u + sizeof(_g4_t_v61)) : _g4_s43,
    _g4_s45 = (291u + sizeof(_g4_t_v62)) > _g4_s44 ? (291u + sizeof(_g4_t_v62)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 100u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 112u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 113u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 124u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 128u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 130u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 131u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 144u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 145u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 156u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 160u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 162u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 163u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 176u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 177u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 188u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 192u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 194u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 195u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 208u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 209u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 220u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 224u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 226u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 227u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 240u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 241u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 252u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 256u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 258u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 259u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 272u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 273u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 284u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 288u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 290u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 291u);

  v1 = *(uint32_t *)(a1 + 12);
  v2 = *(gameswf::Player::Self **)(v1 + 212);
  if ( v2 != nullptr )
  {
    v3 = *(gameswf::Self **)(v1 + 208);
    if ( *((uint8_t *)v3 + 2) == 0 )
    {
      v9 = (*(uint16_t *)v3)-- == 1;
      if ( v9 )
        gameswf::free_internal(v3);
      *(uint32_t *)(v1 + 208) = 0;
      *(uint32_t *)(v1 + 212) = 0;
      v2 = nullptr;
    }
  }
  v4 = opNew(0x38u);
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v4, v2);
  *(uint32_t *)(v4 + 40) = -1;
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_2090188);
  *(uint8_t *)(v4 + 44) = 0;
  *(uint32_t *)(v4 + 48) = 0;
  *(uint32_t *)(v4 + 52) = 0;
  gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v4);
  if ( *(int *)(a1 + 16) > 0 )
  {
    Target = gameswf::ASEnvironment::findTarget(
               *(gameswf::ASObject::Self ***)(a1 + 12),
               (const gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v6 = (gameswf::RefCounted::Self *)Target;
    if ( Target != 0 && G4_VCALL<uint8_t>(Target, 8, 1) != 0 )
    {
      *(uint32_t *)(v4 + 52) = (uint32_t)(uintptr_t)(v6);
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v6);
      v8 = *(gameswf::Self **)(v4 + 48);
      if ( WeakProxy != v8 )
      {
        if ( v8 != nullptr )
        {
          v9 = (*(uint16_t *)v8)-- == 1;
          if ( v9 )
            gameswf::free_internal(v8);
        }
        *(uint32_t *)(v4 + 48) = (uint32_t)(uintptr_t)(WeakProxy);
        if ( WeakProxy != nullptr )
          ++*(uint16_t *)WeakProxy;
      }
    }
    else
    {
      v17 = *(gameswf::Self **)(v4 + 48);
      *(uint32_t *)(v4 + 52) = 0;
      if ( v17 != nullptr )
      {
        v9 = (*(uint16_t *)v17)-- == 1;
        if ( v9 )
          gameswf::free_internal(v17);
        *(uint32_t *)(v4 + 48) = 0;
      }
    }
  }
  v19[0] = 0;
  v19[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v19, (int)(uintptr_t)(gameswf::ASSound::attach));
  v27 = 1;
  v28 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v27, 11);
  v10 = (gameswf::Self *)&v28;
  if ( v27 == -1 )
    v10 = v29;
  gameswf::Strcpy_s(v10, &byte_9[3], (gameswf::Self *)"attachSound");
  v30 = -1;
  v31 = 127;
  v32 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v4,
    (const gameswf::StringI::Self *)&v27,
    (const gameswf::ASValue::Self *)v19);
  if ( v27 == -1 && (v32 & 1) != 0 )
    gameswf::free_internal(v29);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v19);
  v20[0] = 0;
  v20[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v20, (int)(uintptr_t)(gameswf::ASSound::start));
  v33 = 1;
  v34 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v33, 5);
  v11 = (gameswf::Self *)&v34;
  if ( v33 == -1 )
    v11 = v35;
  gameswf::Strcpy_s(v11, (char *)&loc_6, (gameswf::Self *)"start");
  v36 = -1;
  v37 = 127;
  v38 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v4,
    (const gameswf::StringI::Self *)&v33,
    (const gameswf::ASValue::Self *)v20);
  if ( v33 == -1 && (v38 & 1) != 0 )
    gameswf::free_internal(v35);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
  v21[0] = 0;
  v21[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v21, (int)(uintptr_t)(gameswf::ASSound::stop));
  v39 = 1;
  v40 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v39, 4);
  v12 = (gameswf::Self *)&v40;
  if ( v39 == -1 )
    v12 = v41;
  gameswf::Strcpy_s(v12, (char *)&loc_4 + 1, (gameswf::Self *)"stop");
  v42 = -1;
  v43 = 127;
  v44 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v4,
    (const gameswf::StringI::Self *)&v39,
    (const gameswf::ASValue::Self *)v21);
  if ( v39 == -1 && (v44 & 1) != 0 )
    gameswf::free_internal(v41);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v21);
  v22[0] = 0;
  v22[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v22, (int)(uintptr_t)(gameswf::ASSound::volume));
  v45 = 1;
  v46 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v45, 9);
  v13 = (gameswf::Self *)&v46;
  if ( v45 == -1 )
    v13 = v47;
  gameswf::Strcpy_s(v13, &byte_9[1], (gameswf::Self *)"setVolume");
  v48 = -1;
  v49 = 127;
  v50 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v4,
    (const gameswf::StringI::Self *)&v45,
    (const gameswf::ASValue::Self *)v22);
  if ( v45 == -1 && (v50 & 1) != 0 )
    gameswf::free_internal(v47);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v22);
  v23[0] = 0;
  v23[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v23, (int)(uintptr_t)(gameswf::ASSound::load));
  v51 = 1;
  v52 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v51, 9);
  v14 = (gameswf::Self *)&v52;
  if ( v51 == -1 )
    v14 = v53;
  gameswf::Strcpy_s(v14, &byte_9[1], (gameswf::Self *)"loadSound");
  v54 = -1;
  v55 = 127;
  v56 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v4,
    (const gameswf::StringI::Self *)&v51,
    (const gameswf::ASValue::Self *)v23);
  if ( v51 == -1 && (v56 & 1) != 0 )
    gameswf::free_internal(v53);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v23);
  v24[0] = 0;
  v24[1] = 0;
  v25[0] = 0;
  v25[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v25, (int)(uintptr_t)(gameswf::ASSound::getPosition));
  LOWORD(v26[0]) = 6;
  v26[1] = 0;
  v18 = (gameswf::RefCounted::Self **)opNew(0x14u);
  gameswf::ASProperty::Construct(v18, (const gameswf::ASValue::Self *)v25, (const gameswf::ASValue::Self *)v24);
  v26[2] = (uint32_t)(uintptr_t)(v18);
  gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v18);
  v57 = 1;
  v58 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v57, 8);
  v15 = (gameswf::Self *)&v58;
  if ( v57 == -1 )
    v15 = v59;
  gameswf::Strcpy_s(v15, byte_9, (gameswf::Self *)"position");
  v60 = -1;
  v61 = 127;
  v62 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v4,
    (const gameswf::StringI::Self *)&v57,
    (const gameswf::ASValue::Self *)v26);
  if ( v57 == -1 && (v62 & 1) != 0 )
    gameswf::free_internal(v59);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v26);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v25);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v24);
  gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, (gameswf::ASObject::Self *)v4);
  return gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)v4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSound::clear  (binary VA: 0x113e880)
// Original: gameswf::ASSound::clear
// ----------------------------------------------------------------------------
void gameswf::ASSound::clear(gameswf::ASSound::Self *self)
{
  int SoundHandler;

  if ( *((uint8_t *)self + 44) != 0 && *((int *)self + 10) >= 0 )
  {
    SoundHandler = gameswf::getSoundHandler();
    if ( SoundHandler != 0 )
      G4_VCALL<void>(SoundHandler, 28, *((uint32_t *)self + 10));
  }
  *((uint8_t *)self + 44) = 0;
  *((uint32_t *)self + 10) = -1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSound::load  (binary VA: 0x113e8e0)
// Original: gameswf::ASSound::load
// ----------------------------------------------------------------------------
void gameswf::ASSound::load(int *a1)
{
  int SoundHandler;
  gameswf::Self *v2;
  int v3;
  char v4;
  int v5;
  gameswf::Player::Self *v6;
  gameswf::Self *v7;
  char *Workdir;
  gameswf::Self *v9;
  gameswf::Self *v10;
  int v11;
  typedef gameswf::Self *_g4_t_v13;
  typedef gameswf::Self *_g4_t_v14;
  typedef gameswf::Self *_g4_t_v15;
  typedef size_t _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char *_g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef gameswf::Self *_g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef int16_t _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef int **_g4_t_v29;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v15)) > _g4_s2 ? (4u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v16)) > _g4_s3 ? (8u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v17)) > _g4_s4 ? (8u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v18)) > _g4_s5 ? (12u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v19)) > _g4_s6 ? (16u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (17u + sizeof(_g4_t_v20)) > _g4_s7 ? (17u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v21)) > _g4_s8 ? (28u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (35u + sizeof(_g4_t_v22)) > _g4_s9 ? (35u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v23)) > _g4_s10 ? (48u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (49u + sizeof(_g4_t_v24)) > _g4_s11 ? (49u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v25)) > _g4_s12 ? (60u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v26)) > _g4_s13 ? (64u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (66u + sizeof(_g4_t_v27)) > _g4_s14 ? (66u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (67u + sizeof(_g4_t_v28)) > _g4_s15 ? (67u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v29)) > _g4_s16 ? (88u + sizeof(_g4_t_v29)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 17u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 35u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 49u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 66u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 67u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);

  v29 = &a1;
  if ( a1[4] > 1 )
  {
    v13 = (gameswf::Self *)a1;
    SoundHandler = gameswf::getSoundHandler();
    v2 = v13;
    if ( SoundHandler != 0 )
    {
      v3 = *((uint32_t *)v13 + 1);
      if ( v3 != 0 )
      {
        v4 = (*(int (**)(uint32_t, int))(*(uint32_t *)v3 + 8))(*((uint32_t *)v13 + 1), 22);
        v2 = v13;
        if ( v4 == 0 )
          v3 = 0;
      }
      v14 = v2;
      v18 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**((uint32_t **)v2 + 3) + 12 * *((uint32_t *)v2 + 5)));
      v5 = *((uint32_t *)v14 + 3);
      v6 = *(gameswf::Player::Self **)(v5 + 212);
      if ( v6 != nullptr )
      {
        v7 = *(gameswf::Self **)(v5 + 208);
        if ( *((uint8_t *)v7 + 2) == 0 )
        {
          if ( (*(uint16_t *)v7)-- == 1 )
          {
            v17 = v5;
            gameswf::free_internal(v7);
            v5 = v17;
          }
          *(uint32_t *)(v5 + 208) = 0;
          *(uint32_t *)(v5 + 212) = 0;
          v6 = nullptr;
        }
      }
      Workdir = gameswf::Player::getWorkdir(v6);
      v23 = 1;
      v24 = 0;
      if ( Workdir != nullptr )
      {
        v15 = (gameswf::Self *)Workdir;
        v16 = strlen(Workdir);
        gameswf::String::resize((gameswf::String::Self *)&v23, v16);
        v9 = (gameswf::Self *)&v24;
        if ( v23 == -1 )
          v9 = v25;
        gameswf::Strcpy_s(v9, (char *)(v16 + 1), v15);
      }
      v26 = -1;
      v27 = 127;
      v28 |= 1u;
      gameswf::getFullURL((gameswf::Self *)&v19, (const gameswf::String::Self *)&v23, (gameswf::Self *)v18);
      if ( v23 == -1 && (v28 & 1) != 0 )
        gameswf::free_internal(v25);
      v10 = (gameswf::Self *)&v20;
      if ( v19 == -1 )
        v10 = v21;
      v11 = G4_VCALL<int>(SoundHandler, 4, v10);
      if ( v11 >= 0 )
      {
        gameswf::ASSound::clear((gameswf::ASSound::Self *)v3);
        *(uint32_t *)(v3 + 40) = v11;
        *(uint8_t *)(v3 + 44) = 1;
      }
      if ( v19 == -1 && (v22 & 1) != 0 )
        gameswf::free_internal(v21);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSound::attach  (binary VA: 0x113eaf0)
// Original: gameswf::ASSound::attach
// ----------------------------------------------------------------------------
void gameswf::ASSound::attach(int a1)
{
  gameswf::ASSound::Self *v1;
  int target;
  gameswf::Self *v3;
  int (*v4)(int, char *);
  int v5;
  char *v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  const char *obj;
  const char *obja;
  int (*v15)(int, char *);

  if ( *(int *)(a1 + 16) <= 0 )
  {
    gameswf::logError((gameswf::Self *)"attach sound needs one argument\n", obj);
    return;
  }
  v1 = *(gameswf::ASSound::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 22) == 0 )
    v1 = nullptr;
  target = *((uint32_t *)v1 + 13);
  if ( target != 0 )
  {
    v3 = *((gameswf::Self **)v1 + 12);
    if ( *((uint8_t *)v3 + 2) != 0 )
      goto LABEL_7;
    if ( (*(uint16_t *)v3)-- == 1 )
      gameswf::free_internal(v3);
    *((uint32_t *)v1 + 12) = 0;
    *((uint32_t *)v1 + 13) = 0;
  }
  target = gameswf::ASEnvironment::get_target(*(gameswf::ASEnvironment::Self **)(a1 + 12));
  if ( target == 0 )
    return;
LABEL_7:
  v4 = *(int (**)(int, char *))(*(uint32_t *)target + 152);
  v5 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v5 == 3 || *(uint8_t *)v5 == 4 )
  {
    v6 = *(char **)(v5 + 4);
LABEL_10:
    v7 = v4(target, v6);
    goto LABEL_11;
  }
  v6 = (char *)(&byte_20D6378);
  if ( byte_20D6370 != 0 )
    goto LABEL_10;
  v15 = *(int (**)(int, char *))(*(uint32_t *)target + 152);
  v11 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
  v4 = v15;
  if ( v11 == 0 )
    goto LABEL_10;
  v12 = dword_20D6388;
  byte_20D6378 = 1;
  byte_20D6379 = 0;
  dword_20D6388 |= 0x7FFFFFu;
  BYTE2(dword_20D6388) &= ~0x80u;
  HIBYTE(dword_20D6388) = ((v12 | 0x7FFFFFu) >> 24) | 1;
  _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
  __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
  v7 = v15(target, (char *)(&byte_20D6378));
LABEL_11:
  v8 = v7;
  if ( v7 != 0 )
  {
    if ( G4_VCALL<uint8_t>(v7, 8, (char *)&word_10 + 1) != 0 )
    {
      v10 = *(uint32_t *)(v8 + 28);
      gameswf::ASSound::clear(v1);
      *((uint32_t *)v1 + 10) = v10;
      *((uint8_t *)v1 + 44) = 0;
    }
    else
    {
      gameswf::logError((gameswf::Self *)"sound sample is NULL\n", obja);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSound::is  (binary VA: 0x113ece0)
// Original: gameswf::ASSound::is
// ----------------------------------------------------------------------------
bool gameswf::ASSound::is(gameswf::ASSound::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 22 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSound::Destroy  (binary VA: 0x113ed00)
// Original: gameswf::ASSound::~ASSound
// ----------------------------------------------------------------------------
void gameswf::ASSound::Destroy(gameswf::Self **self)
{
  gameswf::Self *v1;

  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_2090188);
  gameswf::ASSound::clear((gameswf::ASSound::Self *)self);
  v1 = *(self + 12);
  if ( v1 != nullptr && (*(uint16_t *)v1)-- == 1 )
    gameswf::free_internal(v1);
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASSound::Destroy_ea113ed70  (binary VA: 0x113ed70)
// Original: gameswf::ASSound::~ASSound
// ----------------------------------------------------------------------------
void gameswf::ASSound::Destroy_ea113ed70(gameswf::Self **self)
{
  gameswf::Self *v1;

  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_2090188);
  gameswf::ASSound::clear((gameswf::ASSound::Self *)self);
  v1 = *(self + 12);
  if ( v1 != nullptr && (*(uint16_t *)v1)-- == 1 )
    gameswf::free_internal(v1);
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
  opDelete(self);
}


