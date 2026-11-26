#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASNetStream.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::setBufferTime  (binary VA: 0x1136e60)
// Original: gameswf::ASNetStream::setBufferTime
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::setBufferTime()
{
  return gameswf::logMsg((gameswf::Self *)"%s:unimplemented \n", "setBufferTime");
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::init  (binary VA: 0x1136f50)
// Original: gameswf::ASNetStream::init
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::init(int a1)
{
  gameswf::ASObject::Self *v1;
  gameswf::Self *v2;
  gameswf::Self *v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  typedef gameswf::RefCounted::Self **_g4_t_v10;
  typedef uint8_t _g4_t_v11[12];
  typedef uint16_t _g4_t_v12[6];
  typedef uint32_t _g4_t_v13[3];
  typedef uint8_t _g4_t_v14[12];
  typedef uint8_t _g4_t_v15[12];
  typedef uint8_t _g4_t_v16[12];
  typedef uint8_t _g4_t_v17[12];
  typedef uint8_t _g4_t_v18[12];
  typedef uint8_t _g4_t_v19[12];
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef gameswf::Self *_g4_t_v22;
  typedef int16_t _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef gameswf::Self *_g4_t_v28;
  typedef int16_t _g4_t_v29;
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef gameswf::Self *_g4_t_v34;
  typedef int16_t _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef gameswf::Self *_g4_t_v40;
  typedef int16_t _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef char _g4_t_v45;
  typedef gameswf::Self *_g4_t_v46;
  typedef int16_t _g4_t_v47;
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef char _g4_t_v50;
  typedef char _g4_t_v51;
  typedef gameswf::Self *_g4_t_v52;
  typedef int16_t _g4_t_v53;
  typedef char _g4_t_v54;
  typedef char _g4_t_v55;
  typedef char _g4_t_v56;
  typedef char _g4_t_v57;
  typedef gameswf::Self *_g4_t_v58;
  typedef int16_t _g4_t_v59;
  typedef char _g4_t_v60;
  typedef char _g4_t_v61;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v13)) > _g4_s3 ? (40u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v14)) > _g4_s4 ? (52u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v15)) > _g4_s5 ? (64u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v16)) > _g4_s6 ? (76u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v17)) > _g4_s7 ? (88u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v18)) > _g4_s8 ? (100u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v19)) > _g4_s9 ? (112u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (124u + sizeof(_g4_t_v20)) > _g4_s10 ? (124u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (125u + sizeof(_g4_t_v21)) > _g4_s11 ? (125u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (136u + sizeof(_g4_t_v22)) > _g4_s12 ? (136u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (140u + sizeof(_g4_t_v23)) > _g4_s13 ? (140u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (142u + sizeof(_g4_t_v24)) > _g4_s14 ? (142u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (143u + sizeof(_g4_t_v25)) > _g4_s15 ? (143u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (156u + sizeof(_g4_t_v26)) > _g4_s16 ? (156u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (157u + sizeof(_g4_t_v27)) > _g4_s17 ? (157u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (168u + sizeof(_g4_t_v28)) > _g4_s18 ? (168u + sizeof(_g4_t_v28)) : _g4_s18,
    _g4_s20 = (172u + sizeof(_g4_t_v29)) > _g4_s19 ? (172u + sizeof(_g4_t_v29)) : _g4_s19,
    _g4_s21 = (174u + sizeof(_g4_t_v30)) > _g4_s20 ? (174u + sizeof(_g4_t_v30)) : _g4_s20,
    _g4_s22 = (175u + sizeof(_g4_t_v31)) > _g4_s21 ? (175u + sizeof(_g4_t_v31)) : _g4_s21,
    _g4_s23 = (188u + sizeof(_g4_t_v32)) > _g4_s22 ? (188u + sizeof(_g4_t_v32)) : _g4_s22,
    _g4_s24 = (189u + sizeof(_g4_t_v33)) > _g4_s23 ? (189u + sizeof(_g4_t_v33)) : _g4_s23,
    _g4_s25 = (200u + sizeof(_g4_t_v34)) > _g4_s24 ? (200u + sizeof(_g4_t_v34)) : _g4_s24,
    _g4_s26 = (204u + sizeof(_g4_t_v35)) > _g4_s25 ? (204u + sizeof(_g4_t_v35)) : _g4_s25,
    _g4_s27 = (206u + sizeof(_g4_t_v36)) > _g4_s26 ? (206u + sizeof(_g4_t_v36)) : _g4_s26,
    _g4_s28 = (207u + sizeof(_g4_t_v37)) > _g4_s27 ? (207u + sizeof(_g4_t_v37)) : _g4_s27,
    _g4_s29 = (220u + sizeof(_g4_t_v38)) > _g4_s28 ? (220u + sizeof(_g4_t_v38)) : _g4_s28,
    _g4_s30 = (221u + sizeof(_g4_t_v39)) > _g4_s29 ? (221u + sizeof(_g4_t_v39)) : _g4_s29,
    _g4_s31 = (232u + sizeof(_g4_t_v40)) > _g4_s30 ? (232u + sizeof(_g4_t_v40)) : _g4_s30,
    _g4_s32 = (236u + sizeof(_g4_t_v41)) > _g4_s31 ? (236u + sizeof(_g4_t_v41)) : _g4_s31,
    _g4_s33 = (238u + sizeof(_g4_t_v42)) > _g4_s32 ? (238u + sizeof(_g4_t_v42)) : _g4_s32,
    _g4_s34 = (239u + sizeof(_g4_t_v43)) > _g4_s33 ? (239u + sizeof(_g4_t_v43)) : _g4_s33,
    _g4_s35 = (252u + sizeof(_g4_t_v44)) > _g4_s34 ? (252u + sizeof(_g4_t_v44)) : _g4_s34,
    _g4_s36 = (253u + sizeof(_g4_t_v45)) > _g4_s35 ? (253u + sizeof(_g4_t_v45)) : _g4_s35,
    _g4_s37 = (264u + sizeof(_g4_t_v46)) > _g4_s36 ? (264u + sizeof(_g4_t_v46)) : _g4_s36,
    _g4_s38 = (268u + sizeof(_g4_t_v47)) > _g4_s37 ? (268u + sizeof(_g4_t_v47)) : _g4_s37,
    _g4_s39 = (270u + sizeof(_g4_t_v48)) > _g4_s38 ? (270u + sizeof(_g4_t_v48)) : _g4_s38,
    _g4_s40 = (271u + sizeof(_g4_t_v49)) > _g4_s39 ? (271u + sizeof(_g4_t_v49)) : _g4_s39,
    _g4_s41 = (284u + sizeof(_g4_t_v50)) > _g4_s40 ? (284u + sizeof(_g4_t_v50)) : _g4_s40,
    _g4_s42 = (285u + sizeof(_g4_t_v51)) > _g4_s41 ? (285u + sizeof(_g4_t_v51)) : _g4_s41,
    _g4_s43 = (296u + sizeof(_g4_t_v52)) > _g4_s42 ? (296u + sizeof(_g4_t_v52)) : _g4_s42,
    _g4_s44 = (300u + sizeof(_g4_t_v53)) > _g4_s43 ? (300u + sizeof(_g4_t_v53)) : _g4_s43,
    _g4_s45 = (302u + sizeof(_g4_t_v54)) > _g4_s44 ? (302u + sizeof(_g4_t_v54)) : _g4_s44,
    _g4_s46 = (303u + sizeof(_g4_t_v55)) > _g4_s45 ? (303u + sizeof(_g4_t_v55)) : _g4_s45,
    _g4_s47 = (316u + sizeof(_g4_t_v56)) > _g4_s46 ? (316u + sizeof(_g4_t_v56)) : _g4_s46,
    _g4_s48 = (317u + sizeof(_g4_t_v57)) > _g4_s47 ? (317u + sizeof(_g4_t_v57)) : _g4_s47,
    _g4_s49 = (328u + sizeof(_g4_t_v58)) > _g4_s48 ? (328u + sizeof(_g4_t_v58)) : _g4_s48,
    _g4_s50 = (332u + sizeof(_g4_t_v59)) > _g4_s49 ? (332u + sizeof(_g4_t_v59)) : _g4_s49,
    _g4_s51 = (334u + sizeof(_g4_t_v60)) > _g4_s50 ? (334u + sizeof(_g4_t_v60)) : _g4_s50,
    _g4_s52 = (335u + sizeof(_g4_t_v61)) > _g4_s51 ? (335u + sizeof(_g4_t_v61)) : _g4_s51
  };
  alignas(16) uint8_t _g4_sf[_g4_s52];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 100u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 112u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 124u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 125u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 136u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 140u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 142u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 143u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 156u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 157u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 168u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 172u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 174u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 175u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 188u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 189u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 200u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 204u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 206u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 207u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 220u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 221u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 232u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 236u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 238u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 239u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 252u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 253u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 264u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 268u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 270u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 271u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 284u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 285u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 296u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 300u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 302u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 303u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 316u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 317u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 328u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 332u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 334u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 335u);

  v1 = *(gameswf::ASObject::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 26) == 0 )
    v1 = nullptr;
  *(uint64_t *)&v12[2] = 0;
  v12[0] = 2;
  v11[0] = 0;
  v11[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v11, (int)(uintptr_t)((long double (*)(gameswf::ASNetStream::Self *))gameswf::ASNetStream::time));
  LOWORD(v13[0]) = 6;
  v13[1] = 0;
  v10 = (gameswf::RefCounted::Self **)opNew(0x14u);
  gameswf::ASProperty::Construct(v10, (const gameswf::ASValue::Self *)v11, (const gameswf::ASValue::Self *)v12);
  v13[2] = (uint32_t)(uintptr_t)(v10);
  gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v10);
  v20 = 1;
  v21 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v20, 4);
  v2 = (gameswf::Self *)&v21;
  if ( v20 == -1 )
    v2 = v22;
  gameswf::Strcpy_s(v2, (char *)&loc_4 + 1, (gameswf::Self *)"time");
  v23 = -1;
  v24 = 127;
  v25 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v20, (const gameswf::ASValue::Self *)v13);
  if ( v20 == -1 && (v25 & 1) != 0 )
    gameswf::free_internal(v22);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  v14[0] = 0;
  v14[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v14, (int)(uintptr_t)((gameswf::ASNetStream::Self * (*)(int))gameswf::ASNetStream::close));
  v26 = 1;
  v27 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v26, 5);
  v3 = (gameswf::Self *)&v27;
  if ( v26 == -1 )
    v3 = v28;
  gameswf::Strcpy_s(v3, (char *)&loc_6, (gameswf::Self *)"close");
  v29 = -1;
  v30 = 127;
  v31 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v26, (const gameswf::ASValue::Self *)v14);
  if ( v26 == -1 && (v31 & 1) != 0 )
    gameswf::free_internal(v28);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  v15[0] = 0;
  v15[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v15, (int)(uintptr_t)((char (*)(int))gameswf::ASNetStream::pause));
  v32 = 1;
  v33 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v32, 5);
  v4 = (gameswf::Self *)&v33;
  if ( v32 == -1 )
    v4 = v34;
  gameswf::Strcpy_s(v4, (char *)&loc_6, (gameswf::Self *)"pause");
  v35 = -1;
  v36 = 127;
  v37 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v32, (const gameswf::ASValue::Self *)v15);
  if ( v32 == -1 && (v37 & 1) != 0 )
    gameswf::free_internal(v34);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
  v16[0] = 0;
  v16[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v16, (int)(uintptr_t)((int (*)(int))gameswf::ASNetStream::play));
  v38 = 1;
  v39 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v38, 4);
  v5 = (gameswf::Self *)&v39;
  if ( v38 == -1 )
    v5 = v40;
  gameswf::Strcpy_s(v5, (char *)&loc_4 + 1, (gameswf::Self *)"play");
  v41 = -1;
  v42 = 127;
  v43 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v38, (const gameswf::ASValue::Self *)v16);
  if ( v38 == -1 && (v43 & 1) != 0 )
    gameswf::free_internal(v40);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
  v17[0] = 0;
  v17[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v17, (int)(uintptr_t)((gameswf::ASNetStream::Self * (*)(int))gameswf::ASNetStream::seek));
  v44 = 1;
  v45 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v44, 4);
  v6 = (gameswf::Self *)&v45;
  if ( v44 == -1 )
    v6 = v46;
  gameswf::Strcpy_s(v6, (char *)&loc_4 + 1, (gameswf::Self *)"seek");
  v47 = -1;
  v48 = 127;
  v49 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v44, (const gameswf::ASValue::Self *)v17);
  if ( v44 == -1 && (v49 & 1) != 0 )
    gameswf::free_internal(v46);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
  v18[0] = 0;
  v18[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v18, (int)(uintptr_t)(gameswf::ASNetStream::setBufferTime));
  v50 = 1;
  v51 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v50, 13);
  v7 = (gameswf::Self *)&v51;
  if ( v50 == -1 )
    v7 = v52;
  gameswf::Strcpy_s(v7, &byte_9[5], (gameswf::Self *)"setBufferTime");
  v53 = -1;
  v54 = 127;
  v55 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v50, (const gameswf::ASValue::Self *)v18);
  if ( v50 == -1 && (v55 & 1) != 0 )
    gameswf::free_internal(v52);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v18);
  v19[0] = 0;
  v19[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v19, (int)(uintptr_t)((gameswf::ASNetStream::Self * (*)(int))gameswf::ASNetStream::setLoopCount));
  v56 = 1;
  v57 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v56, 12);
  v8 = (gameswf::Self *)&v57;
  if ( v56 == -1 )
    v8 = v58;
  gameswf::Strcpy_s(v8, &byte_9[4], (gameswf::Self *)"setLoopCount");
  v59 = -1;
  v60 = 127;
  v61 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v56, (const gameswf::ASValue::Self *)v19);
  if ( v56 != -1 || (v61 & 1) == 0 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v19);
  gameswf::free_internal(v58);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v19);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::Destroy  (binary VA: 0x1137760)
// Original: gameswf::ASNetStream::~ASNetStream
// ----------------------------------------------------------------------------
void gameswf::ASNetStream::Destroy(gameswf::ASNetStream::Self *self)
{
  gameswf::ASNetStream::Self *v1;
  int v2;
  gameswf::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  gameswf::ASNetStream::Self *v10;
  int v11;
  gameswf::Self *v12;
  gameswf::Self *v13;
  uint32_t *v14;
  int v15;
  bool v16;
  int v17;
  int i;
  gameswf::Self **v19;
  gameswf::Self *v20;
  bool v21;
  gameswf::Self *v22;
  int v23;
  gameswf::Self *v24;
  int v25;
  int v26;
  int v27;
  uint8_t *v28;
  int v29;
  int v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  gameswf::Self **v38;
  gameswf::Self **v39;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FFC8);
  *((uint8_t *)self + 76) = 0;
  glf::Condition::Signal((gameswf::ASNetStream::Self *)((char *)self + 116));
  v1 = self;
  v2 = *((uint32_t *)self + 27);
  if ( v2 != 0 )
  {
    glf::Thread::Join((pthread_t *)(v2 + 4));
    v1 = self;
    v3 = *((gameswf::Self **)self + 27);
    if ( v3 != nullptr )
    {
      (**(void (***)(uint32_t))v3)(*((uint32_t *)self + 27));
      gameswf::free_internal(v3);
      v1 = self;
    }
  }
  if ( *((uint32_t *)v1 + 30) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v1 + 30));
  glf::Condition::Destroy((gameswf::ASNetStream::Self *)((char *)self + 116));
  glf::Mutex::Destroy((pthread_mutex_t **)self + 28);
  v4 = *((uint32_t *)self + 24);
  if ( v4 > 0 )
  {
    v5 = *((uint32_t *)self + 24);
    v6 = 0;
    v7 = 0;
    v8 = (uint32_t *)((char *)self + 92);
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *v8 + v7;
        if ( *(uint8_t *)(v9 + 20) == 0xFF && (*(uint8_t *)(v9 + 39) & 1) != 0 )
          break;
        if ( *(uint8_t *)v9 == 0xFF )
          goto LABEL_13;
LABEL_9:
        ++v6;
        v7 += 40;
        if ( v6 == v5 )
          goto LABEL_15;
      }
      v31 = v8;
      v29 = v5;
      gameswf::free_internal(*(gameswf::Self **)(v9 + 32));
      v5 = v29;
      v8 = v31;
      if ( *(uint8_t *)v9 != 0xFF )
        goto LABEL_9;
LABEL_13:
      if ( (*(uint8_t *)(v9 + 19) & 1) == 0 )
        goto LABEL_9;
      ++v6;
      v32 = v8;
      v30 = v5;
      v7 += 40;
      gameswf::free_internal(*(gameswf::Self **)(v9 + 12));
      v5 = v30;
      v8 = v32;
      if ( v6 == v30 )
        goto LABEL_15;
    }
  }
  if ( v4 < 0 )
  {
    v27 = 40 * v4;
    do
    {
      v28 = (uint8_t *)(*((uint32_t *)self + 23) + v27);
      if ( v28 != nullptr )
      {
        memset(v28, 0, 0x28u);
        *v28 = 1;
        *((uint32_t *)v28 + 4) = (uint32_t)(uintptr_t)(((uint8_t *)(uintptr_t)0x7FFFFF));
        v28[20] = 1;
        v28[19] = 1;
        v28[18] = (unsigned int)(uintptr_t)((uint8_t *)(uintptr_t)0x7FFFFF) >> 16;
        *((uint32_t *)v28 + 9) = (uint32_t)(uintptr_t)(((uint8_t *)(uintptr_t)0x7FFFFF));
        v28[39] = 1;
        v28[38] = (unsigned int)(uintptr_t)((uint8_t *)(uintptr_t)0x7FFFFF) >> 16;
      }
      v27 += 40;
      ++v4;
    }
    while ( v4 != 0 );
  }
LABEL_15:
  v10 = self;
  v11 = *((uint32_t *)self + 26);
  *((uint32_t *)self + 24) = 0;
  if ( v11 == 0 )
  {
    v12 = *((gameswf::Self **)self + 23);
    *((uint32_t *)self + 25) = 0;
    if ( v12 != nullptr )
      gameswf::free_internal(v12);
    v10 = self;
    *((uint32_t *)self + 23) = 0;
  }
  if ( *((uint8_t *)v10 + 56) == 0xFF && (*((uint8_t *)v10 + 75) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)v10 + 17));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091248);
  v38 = (gameswf::Self **)((char *)self + 48);
  v39 = (gameswf::Self **)((char *)self + 40);
LABEL_21:
  if ( v38 != v39 )
  {
    while ( 1 )
    {
      v13 = *--v38;
      if ( *v38 == nullptr )
        goto LABEL_21;
      v37 = *((uint32_t *)v13 + 1);
      if ( v37 >= 0 )
        break;
LABEL_43:
      gameswf::free_internal(v13);
      *v38 = nullptr;
      if ( v38 == v39 )
        goto LABEL_44;
    }
    v36 = 8;
    v35 = 0;
    while ( 1 )
    {
      v14 = (uint32_t *)((char *)v13 + v36);
      if ( *(uint32_t *)((char *)v13 + v36) != -2 )
        break;
LABEL_42:
      ++v35;
      v36 += 44;
      if ( v37 < v35 )
        goto LABEL_43;
    }
    if ( *((uint8_t *)v14 + 8) == 0xFF && (*((uint8_t *)v14 + 27) & 1) != 0 )
    {
      gameswf::free_internal((gameswf::Self *)v14[5]);
      v15 = v14[8];
      v16 = v15 < 0;
      if ( v15 <= 0 )
      {
LABEL_47:
        if ( v16 )
        {
          v25 = 24 * v15;
          do
          {
            v26 = v14[7] + v25;
            if ( v26 != 0 )
            {
              *(uint32_t *)v26 = 0;
              *(uint32_t *)(v26 + 4) = 0;
              *(uint32_t *)(v26 + 8) = 0;
              *(uint32_t *)(v26 + 12) = 0;
              *(uint32_t *)(v26 + 16) = 0;
              *(uint8_t *)(v26 + 20) = 0;
            }
            v25 += 24;
            ++v15;
          }
          while ( v15 != 0 );
        }
LABEL_37:
        v23 = v14[10];
        v14[8] = 0;
        if ( v23 == 0 )
        {
          v24 = (gameswf::Self *)v14[7];
          v14[9] = 0;
          if ( v24 != nullptr )
            gameswf::free_internal(v24);
          v14[7] = 0;
        }
        *v14 = -2;
        v14[1] = 0;
        v13 = *v38;
        goto LABEL_42;
      }
    }
    else
    {
      v15 = v14[8];
      v16 = v15 < 0;
      if ( v15 <= 0 )
        goto LABEL_47;
    }
    v34 = v15;
    v17 = 0;
    v33 = v14;
    for ( i = 0; i != v34; ++i )
    {
      v19 = (gameswf::Self **)(v33[7] + v17);
      v20 = v19[2];
      if ( v20 != nullptr )
      {
        v21 = (*(uint16_t *)v20)-- == 1;
        if ( v21 )
          gameswf::free_internal(v20);
      }
      v22 = *v19;
      if ( *v19 != nullptr )
      {
        v21 = (*(uint16_t *)v22)-- == 1;
        if ( v21 )
          gameswf::free_internal(v22);
      }
      v17 += 24;
    }
    v14 = v33;
    goto LABEL_37;
  }
LABEL_44:
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::Destroy_ea1137bb0  (binary VA: 0x1137bb0)
// Original: gameswf::ASNetStream::~ASNetStream
// ----------------------------------------------------------------------------
void gameswf::ASNetStream::Destroy_ea1137bb0(gameswf::ASNetStream::Self *self)
{
  gameswf::ASNetStream::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::Construct  (binary VA: 0x1137bf0)
// Original: gameswf::ASNetStream::ASNetStream
// ----------------------------------------------------------------------------
gameswf::ASNetStream::Self * gameswf::ASNetStream::Construct(gameswf::ASNetStream::Self *self, gameswf::Player::Self *a2)
{
  gameswf::Self *v2;
  int v3;
  gameswf::VideoHandler::Self *v4;
  gameswf::ASNetStream::Self *result;

  gameswf::ASEventDispatcher::ASEventDispatcher(self, a2);
  *((uint8_t *)self + 56) = 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FFC8);
  *((uint64_t *)self + 6) = 0;
  *((uint8_t *)self + 57) = 0;
  gameswf::String::resize((gameswf::ASNetStream::Self *)((char *)self + 56), 0);
  v2 = (gameswf::Self *)((gameswf::ASNetStream::Self *)((char *)self + 57));
  if ( *((uint8_t *)self + 56) == 0xFF )
    v2 = *((gameswf::Self **)self + 17);
  gameswf::Strcpy_s(v2, (char *)&dword_0 + 1, (gameswf::Self *)&unk_1B15112);
  v3 = *((uint32_t *)self + 18);
  *((uint8_t *)self + 76) = 1;
  v3 |= 0x7FFFFFu;
  *((uint8_t *)self + 78) = 0;
  *((uint32_t *)self + 18) = v3;
  *((uint32_t *)self + 23) = 0;
  *((uint64_t *)self + 10) = 0xBFF0000000000000LL;
  *((uint8_t *)self + 74) = BYTE2(v3) & 0x7F;
  *((uint8_t *)self + 75) = HIBYTE(v3) | 1;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  glf::Mutex::Construct((pthread_mutex_t **)self + 28, 1);
  glf::Condition::Construct((gameswf::ASNetStream::Self *)((char *)self + 116), (gameswf::ASNetStream::Self *)((char *)self + 112));
  *((uint32_t *)self + 30) = 0;
  v4 = (gameswf::VideoHandler::Self *)opNew(0xA4u);
  gameswf::VideoHandler::Construct(v4);
  result = *((gameswf::ASNetStream::Self **)self + 30);
  if ( v4 != (gameswf::VideoHandler::Self *)(result) )
  {
    if ( result != nullptr )
      result = (gameswf::ASNetStream::Self *)gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 30));
    *((uint32_t *)self + 30) = (uint32_t)(uintptr_t)(v4);
    if ( v4 != nullptr )
      return (gameswf::ASNetStream::Self *)(gameswf::RefCounted::addRef(v4));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::newOp  (binary VA: 0x1137d50)
// Original: gameswf::ASNetStream::newOp
// ----------------------------------------------------------------------------
gameswf::ASNetStream::Self * gameswf::ASNetStream::newOp(gameswf::ASNetStream::Self *self)
{
  gameswf::ASNetStream::Self *v1;
  gameswf::Self *v2;
  typedef gameswf::RefCounted::Self **_g4_t_v4;
  typedef uint8_t _g4_t_v5[12];
  typedef uint16_t _g4_t_v6[6];
  typedef uint32_t _g4_t_v7[3];
  typedef char _g4_t_v8;
  typedef char _g4_t_v9;
  typedef gameswf::Self *_g4_t_v10;
  typedef int16_t _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v7)) > _g4_s3 ? (40u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v8)) > _g4_s4 ? (52u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (53u + sizeof(_g4_t_v9)) > _g4_s5 ? (53u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v10)) > _g4_s6 ? (64u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v11)) > _g4_s7 ? (68u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (70u + sizeof(_g4_t_v12)) > _g4_s8 ? (70u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (71u + sizeof(_g4_t_v13)) > _g4_s9 ? (71u + sizeof(_g4_t_v13)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 52u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 53u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 68u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 70u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 71u);

  v1 = (gameswf::ASNetStream::Self *)opNew(0x7Cu);
  gameswf::ASNetStream::Construct(v1, (gameswf::Player::Self *)(self));
  *(uint64_t *)&v6[2] = 0;
  v6[0] = 2;
  v5[0] = 0;
  v5[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v5, (int)(uintptr_t)((long double (*)(gameswf::ASNetStream::Self *))gameswf::ASNetStream::time));
  LOWORD(v7[0]) = 6;
  v7[1] = 0;
  v4 = (gameswf::RefCounted::Self **)opNew(0x14u);
  gameswf::ASProperty::Construct(v4, (const gameswf::ASValue::Self *)v5, (const gameswf::ASValue::Self *)v6);
  v7[2] = (uint32_t)(uintptr_t)(v4);
  gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v4);
  v8 = 1;
  v9 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v8, 4);
  v2 = (gameswf::Self *)&v9;
  if ( v8 == -1 )
    v2 = v10;
  gameswf::Strcpy_s(v2, (char *)&loc_4 + 1, (gameswf::Self *)"time");
  v11 = -1;
  v12 = 127;
  v13 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v8, (const gameswf::ASValue::Self *)v7);
  if ( v8 == -1 && (v13 & 1) != 0 )
    gameswf::free_internal(v10);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::play  (binary VA: 0x1137f00)
// Original: gameswf::ASNetStream::play
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::play(gameswf::Player::Self **self, char *s)
{
  gameswf::ASNetStream::Self *v2;
  char *Workdir;
  gameswf::Self *v4;
  char *v5;
  gameswf::Self *v6;
  const char *v7;
  size_t v8;
  int v9;
  char *v10;
  int v11;
  char *v12;
  gameswf::Self *v13;
  gameswf::Self *v14;
  int v15;
  int result;
  gameswf::Self *v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  typedef gameswf::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef size_t _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef char _g4_t_v26;
  typedef uint8_t _g4_t_v27[3];
  typedef char *_g4_t_v28;
  typedef gameswf::Self *_g4_t_v29;
  typedef unsigned int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v24)) > _g4_s2 ? (16u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v25)) > _g4_s3 ? (24u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v26)) > _g4_s4 ? (32u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (33u + sizeof(_g4_t_v27)) > _g4_s5 ? (33u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v28)) > _g4_s6 ? (36u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v29)) > _g4_s7 ? (44u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v30)) > _g4_s8 ? (48u + sizeof(_g4_t_v30)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 33u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);

  v2 = (gameswf::ASNetStream::Self *)self;
  if ( *(self + 27) == nullptr )
  {
    v21 = (uint32_t *)opNew(0x28u);
    *v21 = ((uint32_t)(uintptr_t)&off_2090040);
    glf::Thread::Thread((glf::Thread::Self *)(v21 + 1), glf::SR_ThreadSizeFix == 0 ? 0x4000 : 0x10000);
    v21[9] = (uint32_t)(uintptr_t)(self);
    v21[1] = ((uint32_t)(uintptr_t)&off_2090070);
    v21[8] = (uint32_t)(uintptr_t)(sub_113AA60);
    glf::Thread::Start((glf::Thread::Self *)(v21 + 1), (glf::Runnable::Self *)v21, 0);
    *(self + 27) = (gameswf::Player::Self *)v21;
  }
  Workdir = gameswf::Player::getWorkdir(*(self + 4));
  v26 = 1;
  v27[0] = 0;
  if ( Workdir != nullptr )
  {
    v22 = (gameswf::Self *)Workdir;
    v24 = strlen(Workdir);
    gameswf::String::resize((gameswf::String::Self *)&v26, v24);
    v4 = (gameswf::Self *)v27;
    if ( v26 == -1 )
      v4 = v29;
    gameswf::Strcpy_s(v4, (char *)(v24 + 1), v22);
  }
  LOWORD(v30) = -1;
  BYTE2(v30) = 127;
  HIBYTE(v30) |= 1u;
  if ( strchr(s, 58) != nullptr || (v7 = s, *s == 47) )
  {
    gameswf::String::resize((gameswf::String::Self *)&v26, 0);
    if ( v26 == -1 )
    {
      v5 = v28;
      v6 = v29;
    }
    else
    {
      v5 = (char *)v26;
      v6 = (gameswf::Self *)v27;
    }
    gameswf::Strcpy_s(v6, v5, (gameswf::Self *)&unk_1B15112);
    v30 |= 0x7FFFFFu;
    v7 = s;
  }
  v8 = strlen(v7);
  if ( v26 == -1 )
    v9 = (int)(uintptr_t)(v28 - 1);
  else
    v9 = v26 - 1;
  v23 = v9;
  gameswf::String::resize((gameswf::String::Self *)&v26, v9 + v8);
  if ( v26 == -1 )
  {
    v10 = v28;
    v25 = v29;
  }
  else
  {
    v25 = (gameswf::Self *)v27;
    v10 = (char *)v26;
  }
  gameswf::Strcpy_s((gameswf::Self *)((char *)v25 + v23), v10, (gameswf::Self *)s);
  v30 |= 0x7FFFFFu;
  if ( self + 14 != (gameswf::Player::Self **)&v26 )
  {
    if ( v26 == -1 )
      v11 = (int)(uintptr_t)(v28 - 1);
    else
      v11 = v26 - 1;
    gameswf::String::resize((gameswf::String::Self *)(self + 14), v11);
    LOBYTE(v12) = *((uint8_t *)self + 56);
    v13 = (gameswf::Self *)v27;
    if ( v26 == -1 )
      v13 = v29;
    if ( (uint8_t)(uintptr_t)(v12) == 0xFF )
    {
      v12 = (char *)*(self + 15);
      v14 = (gameswf::Self *)(*(self + 17));
    }
    else
    {
      v12 = (char *)(char)(uintptr_t)(v12);
      v14 = (gameswf::Self *)((char *)self + 57);
    }
    gameswf::Strcpy_s(v14, v12, v13);
    if ( (uint8_t *)(v30 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( v26 == -1 )
      {
        v17 = v29;
        v18 = (int)(uintptr_t)(v28 - 1);
      }
      else
      {
        v17 = (gameswf::Self *)v27;
        v18 = v26 - 1;
      }
      v15 = 5381;
      if ( v18 > 0 )
      {
        do
        {
          --v18;
          v19 = 33 * v15;
          v20 = *((uint8_t *)v17 + v18) + 32;
          if ( (uint8_t)(*((uint8_t *)v17 + v18) - 65) > 0x19u )
            v20 = *((uint8_t *)v17 + v18);
          v15 = v19 ^ v20;
        }
        while ( v18 != 0 );
        v2 = (gameswf::ASNetStream::Self *)self;
        v15 = v15 << 9 >> 9;
      }
      v30 = v15 & 0x7FFFFF | v30 & 0xFF800000;
    }
    else
    {
      v15 = (int)(v30 << 9) >> 9;
    }
    *((uint32_t *)v2 + 18) = v15 & 0x7FFFFF | *((uint32_t *)v2 + 18) & 0xFF800000;
  }
  *((uint8_t *)v2 + 77) = 1;
  glf::Condition::Signal((gameswf::ASNetStream::Self *)((char *)v2 + 116));
  result = gameswf::VideoHandler::reinit(*((gameswf::VideoHandler::Self **)v2 + 30));
  if ( v26 == -1 && (v30 & 0x1000000) != 0 )
    return gameswf::free_internal(v29);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::play  (binary VA: 0x11382e0)
// Original: gameswf::ASNetStream::play
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::play(int a1)
{
  gameswf::Player::Self **v1;
  int v2;
  char *v3;
  char *v4;
  int v6;
  const char *obj;

  v1 = *(gameswf::Player::Self ***)(a1 + 4);
  if ( v1 != nullptr
    && (*((uint8_t (**)(uint32_t, char *))*v1 + 2))(*(uint32_t *)(a1 + 4), (char *)&dword_18 + 2) == 0 )
  {
    v1 = nullptr;
  }
  if ( *(int *)(a1 + 16) <= 0 )
    return gameswf::logError((gameswf::Self *)"NetStream play needs args\n", obj);
  v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v2 != 3 && *(uint8_t *)v2 != 4 )
  {
    v3 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v6 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v6;
      BYTE2(dword_20D6388) = BYTE2(v6) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v6) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
    if ( byte_20D6378 != -1 )
      goto LABEL_9;
LABEL_13:
    v4 = *((char **)v3 + 3);
    return gameswf::ASNetStream::play(v1, v4);
  }
  v3 = *(char **)(v2 + 4);
  if ( *v3 == -1 )
    goto LABEL_13;
LABEL_9:
  v4 = v3 + 1;
  return gameswf::ASNetStream::play(v1, v4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::close  (binary VA: 0x1138410)
// Original: gameswf::ASNetStream::close
// ----------------------------------------------------------------------------
gameswf::ASNetStream::Self * gameswf::ASNetStream::close(gameswf::ASNetStream::Self *self)
{
  *((uint8_t *)self + 77) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::close  (binary VA: 0x1138420)
// Original: gameswf::ASNetStream::close
// ----------------------------------------------------------------------------
gameswf::ASNetStream::Self * gameswf::ASNetStream::close(int a1)
{
  gameswf::ASNetStream::Self *v1;

  v1 = *(gameswf::ASNetStream::Self **)(a1 + 4);
  if ( v1 != nullptr && G4_VCALL<uint8_t>(v1, 8, 26) == 0 )
    v1 = nullptr;
  return gameswf::ASNetStream::close(v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::setStatus  (binary VA: 0x1138480)
// Original: gameswf::ASNetStream::setStatus
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::setStatus(gameswf::ASNetStream::Self *self, char *s, gameswf::Self *a3)
{
  int result;
  pthread_mutex_t **GlobalMutex;
  size_t v5;
  char *v6;
  gameswf::Self *v7;
  size_t v8;
  char *v9;
  gameswf::Self *v10;
  int v11;
  int v12;
  char *v13;
  char *v14;
  int v15;
  char *v16;
  gameswf::Self *v17;
  gameswf::Self *v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  char *v23;
  gameswf::Self *v24;
  gameswf::Self *v25;
  int v26;
  unsigned int v27;
  pthread_mutex_t **v28;
  int v29;
  gameswf::Self *v30;
  int v31;
  int v32;
  int v33;
  gameswf::Self *v34;
  int v35;
  int v36;
  int v37;
  typedef char *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef char _g4_t_v41;
  typedef uint8_t _g4_t_v42[3];
  typedef char *_g4_t_v43;
  typedef gameswf::Self *_g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef char _g4_t_v46;
  typedef uint8_t _g4_t_v47[3];
  typedef char *_g4_t_v48;
  typedef gameswf::Self *_g4_t_v49;
  typedef unsigned int _g4_t_v50;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v39)) > _g4_s1 ? (0u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v40)) > _g4_s2 ? (4u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v41)) > _g4_s3 ? (16u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (17u + sizeof(_g4_t_v42)) > _g4_s4 ? (17u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v43)) > _g4_s5 ? (20u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v44)) > _g4_s6 ? (28u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v45)) > _g4_s7 ? (32u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v46)) > _g4_s8 ? (36u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (37u + sizeof(_g4_t_v47)) > _g4_s9 ? (37u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v48)) > _g4_s10 ? (40u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v49)) > _g4_s11 ? (48u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v50)) > _g4_s12 ? (52u + sizeof(_g4_t_v50)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 17u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 37u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);

  result = *((uint8_t *)self + 76);
  if ( (uint8_t)result != 0 )
  {
    GlobalMutex = (pthread_mutex_t **)gameswf::getGlobalMutex();
    glf::Mutex::Lock(GlobalMutex);
    v41 = 1;
    v42[0] = 0;
    LOWORD(v45) = -1;
    v46 = 1;
    v47[0] = 0;
    HIBYTE(v45) = ((uint16_t)(HIWORD(v45) | 0x7F) >> 8) | 1;
    BYTE2(v45) = 127;
    LOWORD(v50) = -1;
    BYTE2(v50) = 127;
    HIBYTE(v50) |= 1u;
    if ( s != nullptr )
    {
      v5 = strlen(s);
      gameswf::String::resize((gameswf::String::Self *)&v46, v5);
      if ( v46 == -1 )
      {
        v6 = v48;
        v7 = v49;
      }
      else
      {
        v6 = (char *)v46;
        v7 = (gameswf::Self *)v47;
      }
      gameswf::Strcpy_s(v7, v6, (gameswf::Self *)s);
      v50 |= 0x7FFFFFu;
    }
    if ( a3 != nullptr )
    {
      v8 = strlen((const char *)a3);
      gameswf::String::resize((gameswf::String::Self *)&v41, v8);
      if ( v41 == -1 )
      {
        v9 = v43;
        v10 = v44;
      }
      else
      {
        v9 = (char *)v41;
        v10 = (gameswf::Self *)v42;
      }
      gameswf::Strcpy_s(v10, v9, a3);
      v45 |= 0x7FFFFFu;
    }
    v11 = *((uint32_t *)self + 24);
    v12 = *((uint32_t *)self + 25);
    v40 = v11 + 1;
    if ( v11 + 1 <= v12 || *((uint32_t *)self + 26) != 0 )
    {
      v13 = *((char **)self + 23);
    }
    else
    {
      v29 = v40 + (v40 >> 1);
      *((uint32_t *)self + 25) = v29;
      if ( v29 != 0 )
      {
        if ( *((uint32_t *)self + 23) != 0 )
          v13 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 23), 40 * v29, 40 * v12);
        else
          v13 = (char *)gameswf::malloc_internal(40 * v29);
        *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(v13);
        v11 = *((uint32_t *)self + 24);
      }
      else
      {
        if ( *((uint32_t *)self + 23) != 0 )
        {
          gameswf::free_internal(*((gameswf::Self **)self + 23));
          v11 = *((uint32_t *)self + 24);
        }
        v13 = nullptr;
        *((uint32_t *)self + 23) = 0;
      }
    }
    v14 = &v13[40 * v11];
    if ( v14 != nullptr )
    {
      *v14 = 1;
      v14[1] = 0;
      if ( v41 == -1 )
        v15 = (int)(uintptr_t)(v43 - 1);
      else
        v15 = v41 - 1;
      gameswf::String::resize((gameswf::String::Self *)v14, v15);
      LOBYTE(v16) = *v14;
      v17 = (gameswf::Self *)v42;
      if ( v41 == -1 )
        v17 = v44;
      if ( (uint8_t)(uintptr_t)(v16) == 0xFF )
      {
        v16 = *((char **)v14 + 1);
        v18 = *((gameswf::Self **)v14 + 3);
      }
      else
      {
        v16 = (char *)(char)(uintptr_t)(v16);
        v18 = (gameswf::Self *)(v14 + 1);
      }
      gameswf::Strcpy_s(v18, v16, v17);
      if ( (uint8_t *)(v45 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( v41 == -1 )
        {
          v34 = v44;
          v35 = (int)(uintptr_t)(v43 - 1);
        }
        else
        {
          v34 = (gameswf::Self *)v42;
          v35 = v41 - 1;
        }
        v19 = 5381;
        if ( v35 > 0 )
        {
          v39 = v14;
          do
          {
            --v35;
            v36 = 33 * v19;
            v37 = *((uint8_t *)v34 + v35) + 32;
            if ( (uint8_t)(*((uint8_t *)v34 + v35) - 65) > 0x19u )
              v37 = *((uint8_t *)v34 + v35);
            v19 = v36 ^ v37;
          }
          while ( v35 != 0 );
          v14 = v39;
          v19 = v19 << 9 >> 9;
        }
        v45 = v19 & 0x7FFFFF | v45 & 0xFF800000;
      }
      else
      {
        v19 = (int)(v45 << 9) >> 9;
      }
      v20 = *((uint32_t *)v14 + 4) & 0xFF800000;
      v14[20] = 1;
      v21 = v19 & 0x7FFFFF | v20;
      v14[21] = 0;
      *((uint32_t *)v14 + 4) = v21;
      v14[18] = BYTE2(v21) & 0x7F;
      v14[19] = HIBYTE(v21) | 1;
      if ( v46 == -1 )
        v22 = (int)(uintptr_t)(v48 - 1);
      else
        v22 = v46 - 1;
      gameswf::String::resize((gameswf::String::Self *)(v14 + 20), v22);
      LOBYTE(v23) = v14[20];
      v24 = (gameswf::Self *)v47;
      if ( v46 == -1 )
        v24 = v49;
      if ( (uint8_t)(uintptr_t)(v23) == 0xFF )
      {
        v23 = *((char **)v14 + 6);
        v25 = *((gameswf::Self **)v14 + 8);
      }
      else
      {
        v23 = (char *)(char)(uintptr_t)(v23);
        v25 = (gameswf::Self *)(v14 + 21);
      }
      gameswf::Strcpy_s(v25, v23, v24);
      if ( (uint8_t *)(v50 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( v46 == -1 )
        {
          v30 = v49;
          v31 = (int)(uintptr_t)(v48 - 1);
        }
        else
        {
          v30 = (gameswf::Self *)v47;
          v31 = v46 - 1;
        }
        v26 = 5381;
        if ( v31 > 0 )
        {
          v38 = v14;
          do
          {
            --v31;
            v32 = 33 * v26;
            v33 = *((uint8_t *)v30 + v31) + 32;
            if ( (uint8_t)(*((uint8_t *)v30 + v31) - 65) > 0x19u )
              v33 = *((uint8_t *)v30 + v31);
            v26 = v32 ^ v33;
          }
          while ( v31 != 0 );
          v14 = v38;
          v26 = v26 << 9 >> 9;
        }
        v50 = v26 & 0x7FFFFF | v50 & 0xFF800000;
      }
      else
      {
        v26 = (int)(v50 << 9) >> 9;
      }
      v27 = v26 & 0x7FFFFF | *((uint32_t *)v14 + 9) & 0xFF800000;
      *((uint32_t *)v14 + 9) = v27;
      v14[38] = BYTE2(v27) & 0x7F;
      v14[39] = HIBYTE(v27) | 1;
    }
    *((uint32_t *)self + 24) = v40;
    v28 = (pthread_mutex_t **)gameswf::getGlobalMutex();
    result = glf::Mutex::Unlock(v28);
    if ( v46 == -1 && (v50 & 0x1000000) != 0 )
      result = gameswf::free_internal(v49);
    if ( v41 == -1 && (v45 & 0x1000000) != 0 )
      return gameswf::free_internal(v44);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::pause  (binary VA: 0x11389d0)
// Original: gameswf::ASNetStream::pause
// ----------------------------------------------------------------------------
char gameswf::ASNetStream::pause(gameswf::ASNetStream::Self *self, int a2)
{
  char result;

  if ( a2 == -1 )
    result = *((uint8_t *)self + 78) ^ 1;
  else
    result = a2 == 0;
  *((uint8_t *)self + 78) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::resume  (binary VA: 0x1138a00)
// Original: gameswf::ASNetStream::resume
// ----------------------------------------------------------------------------
char gameswf::ASNetStream::resume(int a1)
{
  gameswf::ASNetStream::Self *v1;

  v1 = *(gameswf::ASNetStream::Self **)(a1 + 4);
  if ( v1 != nullptr && G4_VCALL<uint8_t>(v1, 8, 26) == 0 )
    v1 = nullptr;
  return gameswf::ASNetStream::pause(v1, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::pause  (binary VA: 0x1138a60)
// Original: gameswf::ASNetStream::pause
// ----------------------------------------------------------------------------
char gameswf::ASNetStream::pause(int a1)
{
  gameswf::ASNetStream::Self *v1;
  int v2;

  v1 = *(gameswf::ASNetStream::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 26) == 0 )
    v1 = nullptr;
  v2 = -1;
  if ( *(int *)(a1 + 16) > 0 )
    v2 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20))) == 0;
  if ( *(uint8_t *)(*((uint32_t *)v1 + 4) + 232) != 0 )
    v2 = 0;
  return gameswf::ASNetStream::pause(v1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::closeStream  (binary VA: 0x1138b00)
// Original: gameswf::ASNetStream::closeStream
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::closeStream(int a1, int a2)
{
  if ( *(uint32_t *)(a2 + 960) != 0 )
  {
    gameswf::free_internal(*(gameswf::Self **)(a2 + 960));
    *(uint32_t *)(a2 + 960) = 0;
  }
  if ( *(uint32_t *)(a2 + 976) != 0 )
  {
    gameswf::free_internal(*(gameswf::Self **)(a2 + 976));
    *(uint32_t *)(a2 + 976) = 0;
  }
  if ( *(uint32_t *)(a2 + 992) != 0 )
  {
    gameswf::free_internal(*(gameswf::Self **)(a2 + 992));
    *(uint32_t *)(a2 + 992) = 0;
  }
  if ( *(uint32_t *)(a2 + 912) != 0 )
  {
    ogg_stream_clear(a2 + 464);
    th_decode_free(*(void **)(a2 + 908));
    th_comment_clear(a2 + 888);
    th_info_clear(a2 + 824);
  }
  return ogg_sync_clear(a2 + 60);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::openStream  (binary VA: 0x1138c50)
// Original: gameswf::ASNetStream::openStream
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::openStream(gameswf::ASNetStream::Self *a1, uint32_t *a2)
{
  int result;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int i;
  int v11;
  int v12;
  bool v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  char v22; // si
  unsigned int v23;
  char v24; // di
  unsigned int v25;
  unsigned int v26;
  int v27;
  char v28; // si
  char v29; // di
  unsigned int v30;
  unsigned int v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef uint32_t _g4_t_v36[97];
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (12u + sizeof(_g4_t_v32)) > _g4_s0 ? (12u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v33)) > _g4_s1 ? (16u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v34)) > _g4_s2 ? (24u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v35)) > _g4_s3 ? (28u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v36)) > _g4_s4 ? (40u + sizeof(_g4_t_v36)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);

  result = 0;
  if ( *(uint32_t *)*a2 != 0 )
  {
    v35 = a2 + 15;
    ogg_sync_init(a2 + 15);
    v33 = a2 + 222;
    th_comment_init(a2 + 222);
    v32 = a2 + 206;
    th_info_init(a2 + 206);
    v3 = a2[230];
    v34 = a2 + 22;
    v4 = a2 + 15;
LABEL_4:
    if ( v3 != 0
      || (v5 = (uint32_t *)*a2,
          v6 = (int)(uintptr_t)(ogg_sync_buffer(v4, 4096)),
          v7 = ((int (*)(int, int, uint32_t))v5[2])(v6, 4096, *v5),
          ogg_sync_wrote(v4, v7),
          v7 == 0) )
    {
      v9 = (int)(uintptr_t)(a2);
    }
    else
    {
      while ( 1 )
      {
        if ( (int)ogg_sync_pageout(v4, v34) <= 0 )
        {
          v3 = a2[230];
          goto LABEL_4;
        }
        if ( ogg_page_bos(v34) == 0 )
          break;
        v8 = ogg_page_serialno(v34);
        ogg_stream_init(v36, v8);
        ogg_stream_pagein(v36, v34);
        if ( ogg_stream_packetpeek(v36, a2 + 6) != 1
          || a2[228] != 0
          || (v18 = th_decode_headerin(v32, v33, a2 + 226, a2 + 6), a2[229] = v18, v18 < 0) )
        {
          ogg_stream_clear(v36);
        }
        else
        {
          std::memcpy(a2 + 116, v36, 360);
          a2[228] = 1;
          if ( v18 != 0 )
            ogg_stream_packetout(a2 + 116, 0);
        }
      }
      v9 = (int)(uintptr_t)(a2);
      if ( a2[228] != 0 )
        ogg_stream_pagein(a2 + 116, v34);
      a2[230] = 1;
    }
LABEL_11:
    for ( i = *(uint32_t *)(v9 + 912); i != 0; i = *(uint32_t *)(v9 + 912) )
    {
      if ( *(uint32_t *)(v9 + 916) == 0 )
        goto LABEL_14;
      do
      {
        v11 = ogg_stream_packetpeek(v9 + 464, v9 + 24);
        if ( v11 == 0 )
          break;
        if ( v11 < 0 )
        {
          v14 = *(uint32_t *)(v9 + 916);
        }
        else
        {
          v12 = th_decode_headerin(v32, v33, v9 + 904, v9 + 24);
          v13 = v12 == 0;
          *(uint32_t *)(v9 + 916) = v12;
          if ( v12 < 0 )
          {
            fwrite("Error parsing Theora stream headers; corrupt stream?\n", 1u, 0x35u, stderr);
            v14 = *(uint32_t *)(v9 + 916);
          }
          else
          {
            v14 = 0;
            if ( !v13 )
            {
              ogg_stream_packetout(v9 + 464, 0);
              v14 = *(uint32_t *)(v9 + 916);
            }
          }
          ++*(uint32_t *)(v9 + 912);
        }
      }
      while ( v14 != 0 );
      if ( *(uint32_t *)(v9 + 912) == 0 )
        break;
      if ( *(uint32_t *)(v9 + 916) == 0 )
      {
LABEL_14:
        *(uint32_t *)(v9 + 908) = (uint32_t)(uintptr_t)(th_decode_alloc(v32, *(uint32_t *)(v9 + 904)));
        gameswf::logMsg(
          (gameswf::Self *)"Ogg logical stream %lx is Theora %dx%d %.02f fps video\n"
                     "Encoded frame content is %dx%d with %dx%d offset\n",
          *(const char **)(v9 + 800),
          *(uint32_t *)(v9 + 828),
          *(uint32_t *)(v9 + 832),
          (double)*(unsigned int *)(v9 + 852) / (double)*(unsigned int *)(v9 + 856),
          *(uint32_t *)(v9 + 836),
          *(uint32_t *)(v9 + 840),
          *(uint32_t *)(v9 + 844),
          *(uint32_t *)(v9 + 848));
        goto LABEL_15;
      }
      if ( (int)ogg_sync_pageout(v35, v9 + 88) <= 0 )
      {
        v15 = *(uint32_t *)v9;
        v16 = (int)(uintptr_t)(ogg_sync_buffer(v35, 4096));
        v17 = (*(int (**)(int, int, uint32_t))(v15 + 8))(v16, 4096, *(uint32_t *)v15);
        ogg_sync_wrote(v35, v17);
        if ( v17 == 0 )
          fwrite("End of file while searching for codec headers.\n", 1u, 0x2Fu, stderr);
        goto LABEL_11;
      }
      if ( *(uint32_t *)(v9 + 912) == 0 )
        break;
      ogg_stream_pagein(v9 + 464, v9 + 88);
    }
    th_info_clear(v32);
    th_comment_clear(v33);
LABEL_15:
    th_setup_free(*(void **)(v9 + 904));
    if ( *(uint32_t *)(v9 + 912) != 0 )
    {
      v19 = gameswf::malloc_internal(*(uint32_t *)(v9 + 832) * *(uint32_t *)(v9 + 828));
      v20 = *(uint32_t *)(v9 + 872);
      *(uint32_t *)(v9 + 960) = v19;
      v21 = *(uint32_t *)(v9 + 832);
      *(uint32_t *)(v9 + 952) = v21;
      v22 = !(v20 & 1);
      v23 = *(uint32_t *)(v9 + 828);
      v24 = (v20 & 2) == 0;
      *(uint32_t *)(v9 + 956) = v23;
      *(uint32_t *)(v9 + 948) = v23;
      *(uint32_t *)(v9 + 976) = gameswf::malloc_internal((v23 >> v22) * (v21 >> v24));
      v25 = *(uint32_t *)(v9 + 828);
      *(uint32_t *)(v9 + 972) = v25 >> v22;
      *(uint32_t *)(v9 + 964) = v25 >> v22;
      v26 = *(uint32_t *)(v9 + 832);
      v27 = *(uint32_t *)(v9 + 872);
      *(uint32_t *)(v9 + 968) = v26 >> v24;
      v28 = !(v27 & 1);
      v29 = (v27 & 2) == 0;
      *(uint32_t *)(v9 + 992) = gameswf::malloc_internal((v25 >> v28) * (v26 >> v29));
      v30 = *(uint32_t *)(v9 + 828);
      v36[0] = v9;
      v31 = v30 >> v28;
      *(uint32_t *)(v9 + 988) = v31;
      *(uint32_t *)(v9 + 980) = v31;
      *(uint32_t *)(v9 + 984) = *(uint32_t *)(v9 + 832) >> v29;
      v36[1] = (uint32_t)(uintptr_t)(sub_1136E90);
      th_decode_ctl(*(uint32_t *)(v9 + 908), 7, v36, 8);
      return 1;
    }
    else
    {
      if ( *(uint8_t *)(v9 + 4) == 0xFF )
        gameswf::logError((gameswf::Self *)"Couldn't open file '%s'\n", *(const char **)(v9 + 16));
      else
        gameswf::logError((gameswf::Self *)"Couldn't open file '%s'\n", (const char *)(v9 + 5));
      gameswf::ASNetStream::setStatus(a1, "error", (gameswf::Self *)"NetStream.Play.StreamNotFound");
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::writeFrame  (binary VA: 0x11392b0)
// Original: gameswf::ASNetStream::writeFrame
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::writeFrame(int a1, int a2)
{
  unsigned int v2;
  unsigned int v3;
  float v4; // xmm1_4
  float v5; // xmm0_4
  unsigned int v6;
  float v7; // xmm0_4
  int v8;
  float v9; // xmm1_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  int v12;
  float v13; // xmm1_4
  int v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v22[23];

  v2 = *(uint32_t *)(a2 + 848);
  v3 = v2 + *(uint32_t *)(a2 + 840);
  v4 = (float)(uint16_t)v3;
  v5 = (float)HIWORD(v3) * 65536.0;
  v6 = *(uint32_t *)(a2 + 844);
  v7 = v5 + v4;
  v8 = (uint16_t)(v6 + *(uint16_t *)(a2 + 836));
  v9 = (float)((v6 + *(uint32_t *)(a2 + 836)) >> 16) * 65536.0;
  v10 = (float)(uint16_t)v6;
  v22[18] = v7;
  v11 = (float)HIWORD(v6) * 65536.0;
  v12 = (uint16_t)v2;
  v22[16] = v9 + (float)v8;
  v13 = (float)HIWORD(v2) * 65536.0;
  v14 = *(uint32_t *)(a2 + 872);
  v22[15] = v11 + v10;
  v22[17] = v13 + (float)v12;
  switch ( v14 )
  {
    case 2:
      LODWORD(v22[0]) = 1;
      break;
    case 3:
      LODWORD(v22[0]) = 2;
      break;
    case 0:
      v22[0] = 0.0;
      break;
    default:
      break;
  }
  v15 = *(float *)(a2 + 828);
  v22[2] = *(float *)(a2 + 832);
  v22[3] = *(float *)(a2 + 956);
  v22[5] = *(float *)(a2 + 952);
  v22[6] = *(float *)(a2 + 960);
  v22[7] = *(float *)(a2 + 972);
  v16 = *(float *)(a2 + 968);
  v22[1] = v15;
  v22[9] = v16;
  v17 = *(float *)(a2 + 976);
  v22[4] = *(float *)(a2 + 948);
  v22[10] = v17;
  v18 = *(float *)(a2 + 988);
  v22[8] = *(float *)(a2 + 964);
  v22[11] = v18;
  v19 = *(float *)(a2 + 984);
  v20 = *(float *)(a2 + 992);
  v22[12] = *(float *)(a2 + 980);
  v22[14] = v20;
  v22[13] = v19;
  gameswf::VideoHandler::updateVideo(*(uint32_t *)(a1 + 120), v22);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::dispatchEvents  (binary VA: 0x1139460)
// Original: gameswf::ASNetStream::dispatchEvents
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::dispatchEvents(gameswf::ASNetStream::Self *self)
{
  pthread_mutex_t **GlobalMutex;
  int v2;
  gameswf::RefCounted::Self *v3;
  gameswf::Player::Self *v4;
  gameswf::Self *v5;
  int StandardMemberID;
  gameswf::Self *v7;
  int v8;
  gameswf::RefCounted::Self *v9;
  gameswf::Self *WeakProxy;
  gameswf::Self *v11;
  bool v12;
  int v13;
  int v14;
  int v15;
  gameswf::Self *v16;
  int v17;
  char *v18;
  gameswf::Self *v19;
  int v20;
  int v21;
  gameswf::Self **v22;
  int v23;
  int v24;
  gameswf::Self *i;
  int v26;
  int v27;
  gameswf::Self *j;
  int v29;
  gameswf::Self *v30;
  int v31;
  uint32_t *v32;
  int v33;
  pthread_mutex_t **v34;
  gameswf::Self *v36;
  int NetStatusEvent;
  gameswf::Self *v38;
  int v39;
  int v40;
  int v41;
  char *v42;
  int v43;
  char *v44;
  char *v45;
  int v46;
  gameswf::Self *v47;
  int v48;
  char v49;
  char v50;
  int v51;
  uint8_t *v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  typedef char _g4_t_v59;
  typedef gameswf::ASValue::Self *_g4_t_v60;
  typedef gameswf::ASValue::Self *_g4_t_v61;
  typedef gameswf::ASValue::Self *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef gameswf::RefCounted::Self *_g4_t_v65;
  typedef gameswf::RefCounted::Self *_g4_t_v66;
  typedef gameswf::RefCounted::Self *_g4_t_v67;
  typedef gameswf::Self *_g4_t_v68;
  typedef gameswf::Self *_g4_t_v69;
  typedef gameswf::Self *_g4_t_v70;
  typedef gameswf::Self *_g4_t_v71;
  typedef gameswf::Self *_g4_t_v72;
  typedef unsigned int _g4_t_v73[4];
  typedef unsigned int _g4_t_v74[4];
  typedef unsigned int _g4_t_v75[3];
  typedef unsigned int _g4_t_v76[3];
  typedef uint8_t _g4_t_v77[4];
  typedef gameswf::RefCounted::Self *_g4_t_v78;
  typedef uint8_t _g4_t_v79[12];
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
  typedef char _g4_t_v92;
  typedef char _g4_t_v93;
  typedef gameswf::Self *_g4_t_v94;
  typedef int16_t _g4_t_v95;
  typedef char _g4_t_v96;
  typedef char _g4_t_v97;
  typedef char _g4_t_v98;
  typedef char _g4_t_v99;
  typedef gameswf::Self *_g4_t_v100;
  typedef int16_t _g4_t_v101;
  typedef char _g4_t_v102;
  typedef char _g4_t_v103;
  typedef char _g4_t_v104;
  typedef char _g4_t_v105;
  typedef gameswf::Self *_g4_t_v106;
  typedef int16_t _g4_t_v107;
  typedef char _g4_t_v108;
  typedef char _g4_t_v109;
  typedef gameswf::Self *_g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef uint8_t _g4_t_v114[12];
  typedef uint8_t _g4_t_v115[12];
  typedef uint8_t _g4_t_v116[12];
  typedef uint8_t _g4_t_v117[12];
  typedef gameswf::Self *_g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef gameswf::RefCounted::Self *_g4_t_v122;
  typedef uint8_t _g4_t_v123[12];
  typedef gameswf::Self *_g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef gameswf::Self *_g4_t_v128;
  typedef gameswf::RefCounted::Self *_g4_t_v129;
  typedef gameswf::ASNetStream::Self **_g4_t_v130;
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v53)) > _g4_s0 ? (0u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v54)) > _g4_s1 ? (8u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v55)) > _g4_s2 ? (8u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v56)) > _g4_s3 ? (8u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v57)) > _g4_s4 ? (8u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v58)) > _g4_s5 ? (8u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v59)) > _g4_s6 ? (8u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v60)) > _g4_s7 ? (12u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v61)) > _g4_s8 ? (12u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v62)) > _g4_s9 ? (12u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v63)) > _g4_s10 ? (28u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v64)) > _g4_s11 ? (32u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v65)) > _g4_s12 ? (36u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v66)) > _g4_s13 ? (40u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v67)) > _g4_s14 ? (40u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v68)) > _g4_s15 ? (44u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v69)) > _g4_s16 ? (44u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v70)) > _g4_s17 ? (44u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v71)) > _g4_s18 ? (44u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v72)) > _g4_s19 ? (44u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v73)) > _g4_s20 ? (48u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v74)) > _g4_s21 ? (64u + sizeof(_g4_t_v74)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v75)) > _g4_s22 ? (80u + sizeof(_g4_t_v75)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v76)) > _g4_s23 ? (92u + sizeof(_g4_t_v76)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v77)) > _g4_s24 ? (104u + sizeof(_g4_t_v77)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v78)) > _g4_s25 ? (108u + sizeof(_g4_t_v78)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v79)) > _g4_s26 ? (116u + sizeof(_g4_t_v79)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v80)) > _g4_s27 ? (128u + sizeof(_g4_t_v80)) : _g4_s27,
    _g4_s29 = (129u + sizeof(_g4_t_v81)) > _g4_s28 ? (129u + sizeof(_g4_t_v81)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v82)) > _g4_s29 ? (140u + sizeof(_g4_t_v82)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v83)) > _g4_s30 ? (144u + sizeof(_g4_t_v83)) : _g4_s30,
    _g4_s32 = (146u + sizeof(_g4_t_v84)) > _g4_s31 ? (146u + sizeof(_g4_t_v84)) : _g4_s31,
    _g4_s33 = (147u + sizeof(_g4_t_v85)) > _g4_s32 ? (147u + sizeof(_g4_t_v85)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v86)) > _g4_s33 ? (160u + sizeof(_g4_t_v86)) : _g4_s33,
    _g4_s35 = (161u + sizeof(_g4_t_v87)) > _g4_s34 ? (161u + sizeof(_g4_t_v87)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v88)) > _g4_s35 ? (172u + sizeof(_g4_t_v88)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v89)) > _g4_s36 ? (176u + sizeof(_g4_t_v89)) : _g4_s36,
    _g4_s38 = (178u + sizeof(_g4_t_v90)) > _g4_s37 ? (178u + sizeof(_g4_t_v90)) : _g4_s37,
    _g4_s39 = (179u + sizeof(_g4_t_v91)) > _g4_s38 ? (179u + sizeof(_g4_t_v91)) : _g4_s38,
    _g4_s40 = (192u + sizeof(_g4_t_v92)) > _g4_s39 ? (192u + sizeof(_g4_t_v92)) : _g4_s39,
    _g4_s41 = (193u + sizeof(_g4_t_v93)) > _g4_s40 ? (193u + sizeof(_g4_t_v93)) : _g4_s40,
    _g4_s42 = (204u + sizeof(_g4_t_v94)) > _g4_s41 ? (204u + sizeof(_g4_t_v94)) : _g4_s41,
    _g4_s43 = (208u + sizeof(_g4_t_v95)) > _g4_s42 ? (208u + sizeof(_g4_t_v95)) : _g4_s42,
    _g4_s44 = (210u + sizeof(_g4_t_v96)) > _g4_s43 ? (210u + sizeof(_g4_t_v96)) : _g4_s43,
    _g4_s45 = (211u + sizeof(_g4_t_v97)) > _g4_s44 ? (211u + sizeof(_g4_t_v97)) : _g4_s44,
    _g4_s46 = (224u + sizeof(_g4_t_v98)) > _g4_s45 ? (224u + sizeof(_g4_t_v98)) : _g4_s45,
    _g4_s47 = (225u + sizeof(_g4_t_v99)) > _g4_s46 ? (225u + sizeof(_g4_t_v99)) : _g4_s46,
    _g4_s48 = (236u + sizeof(_g4_t_v100)) > _g4_s47 ? (236u + sizeof(_g4_t_v100)) : _g4_s47,
    _g4_s49 = (240u + sizeof(_g4_t_v101)) > _g4_s48 ? (240u + sizeof(_g4_t_v101)) : _g4_s48,
    _g4_s50 = (242u + sizeof(_g4_t_v102)) > _g4_s49 ? (242u + sizeof(_g4_t_v102)) : _g4_s49,
    _g4_s51 = (243u + sizeof(_g4_t_v103)) > _g4_s50 ? (243u + sizeof(_g4_t_v103)) : _g4_s50,
    _g4_s52 = (256u + sizeof(_g4_t_v104)) > _g4_s51 ? (256u + sizeof(_g4_t_v104)) : _g4_s51,
    _g4_s53 = (257u + sizeof(_g4_t_v105)) > _g4_s52 ? (257u + sizeof(_g4_t_v105)) : _g4_s52,
    _g4_s54 = (268u + sizeof(_g4_t_v106)) > _g4_s53 ? (268u + sizeof(_g4_t_v106)) : _g4_s53,
    _g4_s55 = (272u + sizeof(_g4_t_v107)) > _g4_s54 ? (272u + sizeof(_g4_t_v107)) : _g4_s54,
    _g4_s56 = (274u + sizeof(_g4_t_v108)) > _g4_s55 ? (274u + sizeof(_g4_t_v108)) : _g4_s55,
    _g4_s57 = (275u + sizeof(_g4_t_v109)) > _g4_s56 ? (275u + sizeof(_g4_t_v109)) : _g4_s56,
    _g4_s58 = (288u + sizeof(_g4_t_v110)) > _g4_s57 ? (288u + sizeof(_g4_t_v110)) : _g4_s57,
    _g4_s59 = (292u + sizeof(_g4_t_v111)) > _g4_s58 ? (292u + sizeof(_g4_t_v111)) : _g4_s58,
    _g4_s60 = (296u + sizeof(_g4_t_v112)) > _g4_s59 ? (296u + sizeof(_g4_t_v112)) : _g4_s59,
    _g4_s61 = (300u + sizeof(_g4_t_v113)) > _g4_s60 ? (300u + sizeof(_g4_t_v113)) : _g4_s60,
    _g4_s62 = (400u + sizeof(_g4_t_v114)) > _g4_s61 ? (400u + sizeof(_g4_t_v114)) : _g4_s61,
    _g4_s63 = (412u + sizeof(_g4_t_v115)) > _g4_s62 ? (412u + sizeof(_g4_t_v115)) : _g4_s62,
    _g4_s64 = (424u + sizeof(_g4_t_v116)) > _g4_s63 ? (424u + sizeof(_g4_t_v116)) : _g4_s63,
    _g4_s65 = (436u + sizeof(_g4_t_v117)) > _g4_s64 ? (436u + sizeof(_g4_t_v117)) : _g4_s64,
    _g4_s66 = (448u + sizeof(_g4_t_v118)) > _g4_s65 ? (448u + sizeof(_g4_t_v118)) : _g4_s65,
    _g4_s67 = (452u + sizeof(_g4_t_v119)) > _g4_s66 ? (452u + sizeof(_g4_t_v119)) : _g4_s66,
    _g4_s68 = (456u + sizeof(_g4_t_v120)) > _g4_s67 ? (456u + sizeof(_g4_t_v120)) : _g4_s67,
    _g4_s69 = (460u + sizeof(_g4_t_v121)) > _g4_s68 ? (460u + sizeof(_g4_t_v121)) : _g4_s68,
    _g4_s70 = (464u + sizeof(_g4_t_v122)) > _g4_s69 ? (464u + sizeof(_g4_t_v122)) : _g4_s69,
    _g4_s71 = (468u + sizeof(_g4_t_v123)) > _g4_s70 ? (468u + sizeof(_g4_t_v123)) : _g4_s70,
    _g4_s72 = (480u + sizeof(_g4_t_v124)) > _g4_s71 ? (480u + sizeof(_g4_t_v124)) : _g4_s71,
    _g4_s73 = (484u + sizeof(_g4_t_v125)) > _g4_s72 ? (484u + sizeof(_g4_t_v125)) : _g4_s72,
    _g4_s74 = (488u + sizeof(_g4_t_v126)) > _g4_s73 ? (488u + sizeof(_g4_t_v126)) : _g4_s73,
    _g4_s75 = (492u + sizeof(_g4_t_v127)) > _g4_s74 ? (492u + sizeof(_g4_t_v127)) : _g4_s74,
    _g4_s76 = (496u + sizeof(_g4_t_v128)) > _g4_s75 ? (496u + sizeof(_g4_t_v128)) : _g4_s75,
    _g4_s77 = (500u + sizeof(_g4_t_v129)) > _g4_s76 ? (500u + sizeof(_g4_t_v129)) : _g4_s76,
    _g4_s78 = (520u + sizeof(_g4_t_v130)) > _g4_s77 ? (520u + sizeof(_g4_t_v130)) : _g4_s77
  };
  alignas(16) uint8_t _g4_sf[_g4_s78];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 0u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 40u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 44u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 44u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 44u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 64u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 92u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 104u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 108u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 116u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 128u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 129u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 140u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 144u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 146u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 147u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 160u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 161u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 172u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 176u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 178u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 179u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 192u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 193u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 204u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 208u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 210u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 211u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 224u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 225u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 236u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 240u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 242u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 243u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 256u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 257u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 268u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 272u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 274u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 275u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 288u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 292u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 296u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 300u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 400u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 412u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 424u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 436u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 448u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 452u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 456u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 460u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 464u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 468u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 480u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 484u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 488u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 492u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 496u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 500u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 520u);

  v130 = &self;
  v65 = (gameswf::RefCounted::Self *)(self);
  GlobalMutex = (pthread_mutex_t **)gameswf::getGlobalMutex();
  glf::Mutex::Lock(GlobalMutex);
  if ( *((int *)v65 + 24) <= 0 )
    goto LABEL_72;
  v2 = *((uint32_t *)v65 + 4);
  LOWORD(v73[0]) = 0;
  if ( *(uint8_t *)(v2 + 232) != 0 )
  {
LABEL_3:
    v64 = 0;
    v63 = 0;
    v3 = v65;
    while ( 1 )
    {
      v4 = *((gameswf::Player::Self **)v3 + 4);
      v66 = (gameswf::RefCounted::Self *)opNew(0x28u);
      gameswf::ASObject::ASObject(v66, v4);
      if ( v66 != nullptr )
        gameswf::RefCounted::addRef(v66);
      LOWORD(v75[0]) = 0;
      v75[1] = 0;
      gameswf::ASValue::setString(
        (const gameswf::String::Self **)v75,
        (const gameswf::String::Self *)(*((uint32_t *)v65 + 23) + v64 + 20));
      v86 = 1;
      v87 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v86, 5);
      v5 = (gameswf::Self *)&v87;
      if ( v86 == -1 )
        v5 = v88;
      gameswf::Strcpy_s(v5, (char *)&loc_6, (gameswf::Self *)"level");
      v89 = -1;
      v90 = 127;
      v91 |= 1u;
      StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v86);
      if ( StandardMemberID == -1
        || G4_VCALL<uint8_t>(v66, 32, StandardMemberID, v75) == 0 )
      {
        G4_VCALL<void>(v66, 48, &v86, v75);
      }
      if ( v86 == -1 && (v91 & 1) != 0 )
        gameswf::free_internal(v88);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v75);
      LOWORD(v76[0]) = 0;
      v76[1] = 0;
      gameswf::ASValue::setString((const gameswf::String::Self **)v76, (const gameswf::String::Self *)(*((uint32_t *)v65 + 23) + v64));
      v92 = 1;
      v93 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v92, 4);
      v7 = (gameswf::Self *)&v93;
      if ( v92 == -1 )
        v7 = v94;
      gameswf::Strcpy_s(v7, (char *)&loc_4 + 1, (gameswf::Self *)"code");
      v95 = -1;
      v96 = 127;
      v97 |= 1u;
      v8 = gameswf::getStandardMemberID((gameswf::Self *)&v92);
      if ( v8 == -1
        || G4_VCALL<uint8_t>(v66, 32, v8, v76) == 0 )
      {
        G4_VCALL<void>(v66, 48, &v92, v76);
      }
      if ( v92 == -1 && (v97 & 1) != 0 )
        gameswf::free_internal(v94);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v76);
      v9 = *((gameswf::RefCounted::Self **)v65 + 4);
      if ( *((uint8_t *)v9 + 232) == 0 )
      {
        v110 = nullptr;
        v111 = 0;
        v112 = 0;
        v113 = 0;
        v114[0] = 0;
        v114[1] = 0;
        v115[0] = 0;
        v115[1] = 0;
        v116[0] = 0;
        v116[1] = 0;
        v117[0] = 0;
        v117[1] = 0;
        v118 = nullptr;
        v119 = 0;
        v120 = 0;
        v121 = 0;
        v122 = nullptr;
        v123[0] = 0;
        v123[1] = 0;
        v124 = nullptr;
        v125 = 0;
        v126 = 0;
        v127 = 0;
        v128 = nullptr;
        v129 = v9;
        WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v9);
        v11 = v128;
        if ( WeakProxy != v128 )
        {
          if ( v128 != nullptr )
          {
            v12 = (*(uint16_t *)v128)-- == 1;
            if ( v12 )
            {
              v60 = (gameswf::ASValue::Self *)(WeakProxy);
              gameswf::free_internal(v11);
              WeakProxy = (gameswf::Self *)(v60);
            }
          }
          v128 = WeakProxy;
          if ( WeakProxy != nullptr )
            ++*(uint16_t *)WeakProxy;
        }
        v13 = v111;
        v14 = v112;
        v15 = v111 + 1;
        if ( v111 + 1 <= v112 || v113 != 0 )
        {
          v16 = v110;
          v17 = v111;
        }
        else
        {
          v40 = v15 + (v15 >> 1);
          v112 = v40;
          if ( v40 != 0 )
          {
            if ( v110 != nullptr )
              v16 = (gameswf::Self *)gameswf::realloc_internal(v110, 12 * v40, 12 * v14);
            else
              v16 = (gameswf::Self *)gameswf::malloc_internal(12 * v40);
            v110 = v16;
            v17 = v111;
          }
          else
          {
            v17 = v111;
            if ( v110 != nullptr )
            {
              gameswf::free_internal(v110);
              v17 = v111;
            }
            v110 = nullptr;
            v16 = nullptr;
          }
        }
        v18 = (char *)v16 + 12 * v17;
        if ( v18 != nullptr )
        {
          *v18 = 5;
          v18[1] = 0;
          *((uint32_t *)v18 + 1) = (uint32_t)(uintptr_t)(v66);
          if ( v66 != nullptr )
            gameswf::RefCounted::addRef(v66);
        }
        v111 = v15;
        v78 = v65;
        v77[0] = 5;
        v77[1] = 0;
        gameswf::RefCounted::addRef(v65);
        gameswf::call_method(
          (gameswf::Self *)v79,
          (const gameswf::ASValue::Self *)v73,
          (gameswf::ASEnvironment::Self *)&v110,
          (const gameswf::ASValue::Self *)v77,
          1,
          v13,
          "???");
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v79);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v77);
        v19 = v128;
        if ( v128 != nullptr )
        {
          v12 = (*(uint16_t *)v128)-- == 1;
          if ( v12 )
            gameswf::free_internal(v19);
        }
        v20 = v125;
        if ( v125 <= 0 )
        {
          if ( v125 < 0 )
          {
            v53 = 32 * v125;
            do
            {
              v45 = (char *)v124 + v53;
              if ( (gameswf::Self *)((char *)v124 + v53) != nullptr )
              {
                v46 = *((uint32_t *)v45 + 4);
                *v45 = 1;
                v46 |= 0x7FFFFFu;
                v45[1] = 0;
                *((uint32_t *)v45 + 4) = v46;
                v45[20] = 0;
                v45[18] = BYTE2(v46) & 0x7F;
                v45[19] = HIBYTE(v46) | 1;
                v45[21] = 0;
              }
              v53 += 32;
              ++v20;
            }
            while ( v20 != 0 );
          }
        }
        else
        {
          v21 = 0;
          v68 = (gameswf::Self *)v125;
          do
          {
            while ( 1 )
            {
              v22 = (gameswf::Self **)((char *)v124 + 32 * v21);
              v54 = v21;
              gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v22 + 5));
              if ( *(uint8_t *)v22 == 0xFF && (*((uint8_t *)v22 + 19) & 1) != 0 )
                break;
              v21 = v54 + 1;
              if ( (gameswf::Self *)(v54 + 1) == v68 )
                goto LABEL_39;
            }
            gameswf::free_internal(v22[3]);
            v21 = v54 + 1;
          }
          while ( (gameswf::Self *)(v54 + 1) != v68 );
        }
LABEL_39:
        v125 = 0;
        if ( v127 == 0 )
        {
          v126 = 0;
          if ( v124 != nullptr )
            gameswf::free_internal(v124);
          v124 = nullptr;
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v123);
        if ( v122 != nullptr )
          gameswf::RefCounted::dropRef(v122);
        v23 = v119;
        if ( v119 <= 0 )
        {
          if ( v119 < 0 )
          {
            v43 = 12 * v119;
            do
            {
              v44 = (char *)v118 + v43;
              if ( (gameswf::Self *)((char *)v118 + v43) != nullptr )
              {
                *v44 = 0;
                v44[1] = 0;
              }
              v43 += 12;
              ++v23;
            }
            while ( v23 != 0 );
          }
        }
        else
        {
          v69 = (gameswf::Self *)v119;
          v24 = 0;
          for ( i = nullptr; i != v69; i = (gameswf::Self *)((char *)i + 1) )
          {
            v55 = v24;
            gameswf::ASValue::dropRefs((gameswf::Self *)((char *)v118 + v24));
            v24 = v55 + 12;
          }
        }
        v119 = 0;
        if ( v121 == 0 )
        {
          v120 = 0;
          if ( v118 != nullptr )
            gameswf::free_internal(v118);
          v118 = nullptr;
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v117);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v116);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v115);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v114);
        v26 = v111;
        if ( v111 <= 0 )
        {
          if ( v111 < 0 )
          {
            v41 = 12 * v111;
            do
            {
              v42 = (char *)v110 + v41;
              if ( (gameswf::Self *)((char *)v110 + v41) != nullptr )
              {
                *v42 = 0;
                v42[1] = 0;
              }
              v41 += 12;
              ++v26;
            }
            while ( v26 != 0 );
          }
        }
        else
        {
          v70 = (gameswf::Self *)v111;
          v27 = 0;
          for ( j = nullptr; j != v70; j = (gameswf::Self *)((char *)j + 1) )
          {
            v56 = v27;
            gameswf::ASValue::dropRefs((gameswf::Self *)((char *)v110 + v27));
            v27 = v56 + 12;
          }
        }
        v111 = 0;
        if ( v113 == 0 )
        {
          v112 = 0;
          if ( v110 != nullptr )
            gameswf::free_internal(v110);
          v110 = nullptr;
        }
        goto LABEL_59;
      }
      v98 = 1;
      v99 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v98, 9);
      v36 = (gameswf::Self *)&v99;
      if ( v98 == -1 )
        v36 = v100;
      gameswf::Strcpy_s(v36, &byte_9[1], (gameswf::Self *)"netStatus");
      v101 = -1;
      v102 = 127;
      v103 |= 1u;
      NetStatusEvent = gameswf::AS3Engine::getNetStatusEvent(
                         (gameswf::AS3Engine::Self *)(*((uint32_t *)v65 + 4) + 236),
                         (const gameswf::String::Self *)&v98);
      if ( v98 == -1 && (v103 & 1) != 0 )
        gameswf::free_internal(v100);
      LOWORD(v74[0]) = 5;
      v74[1] = (unsigned int)(uintptr_t)(v66);
      if ( v66 != nullptr )
        gameswf::RefCounted::addRef(v66);
      v104 = 1;
      v105 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v104, 4);
      v38 = (gameswf::Self *)&v105;
      if ( v104 == -1 )
        v38 = v106;
      gameswf::Strcpy_s(v38, (char *)&loc_4 + 1, (gameswf::Self *)"info");
      v107 = -1;
      v108 = 127;
      v109 |= 1u;
      v39 = gameswf::getStandardMemberID((gameswf::Self *)&v104);
      if ( v39 == -1
        || G4_VCALL<uint8_t>(NetStatusEvent, 32, v39, v74) == 0 )
      {
        G4_VCALL<void>(NetStatusEvent, 48, &v104, v74);
        if ( v104 == -1 )
        {
LABEL_85:
          if ( (v109 & 1) != 0 )
            gameswf::free_internal(v106);
        }
      }
      else if ( v104 == -1 )
      {
        goto LABEL_85;
      }
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v74);
      G4_VCALL<void>(v65, 104, NetStatusEvent);
LABEL_59:
      if ( v66 != nullptr )
        gameswf::RefCounted::dropRef(v66);
      v3 = v65;
      ++v63;
      v64 += 40;
      v29 = *((uint32_t *)v65 + 24);
      if ( v29 <= v63 )
        goto LABEL_62;
    }
  }
  v80 = 1;
  v81 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v80, 8);
  v47 = (gameswf::Self *)&v81;
  if ( v80 == -1 )
    v47 = v82;
  gameswf::Strcpy_s(v47, byte_9, (gameswf::Self *)"onStatus");
  v83 = -1;
  v84 = 127;
  v85 |= 1u;
  v48 = gameswf::getStandardMemberID((gameswf::Self *)&v80);
  if ( v48 != -1
    && G4_VCALL<uint8_t>(v65, 36, v48, v73) != 0
    || (v49 = G4_VCALL<int>(v65, 44, &v80, v73),
        v50 = 0,
        v49 != 0) )
  {
    v50 = 1;
  }
  if ( v80 == -1 && (v85 & 1) != 0 )
  {
    v59 = v50;
    gameswf::free_internal(v82);
    v50 = v59;
  }
  v12 = v50 == 0;
  v3 = v65;
  v29 = *((uint32_t *)v65 + 24);
  if ( !v12 )
  {
    if ( v29 > 0 )
      goto LABEL_3;
    v67 = (gameswf::RefCounted::Self *)((char *)v65 + 92);
    goto LABEL_128;
  }
LABEL_62:
  v67 = (gameswf::RefCounted::Self *)((char *)v3 + 92);
  if ( v29 > 0 )
  {
    v71 = (gameswf::Self *)v29;
    v30 = nullptr;
    v31 = 0;
    v32 = (uint32_t *)((char *)v3 + 92);
    while ( 1 )
    {
      while ( 1 )
      {
        v33 = *v32 + v31;
        if ( *(uint8_t *)(v33 + 20) == 0xFF && (*(uint8_t *)(v33 + 39) & 1) != 0 )
          break;
        if ( *(uint8_t *)v33 == 0xFF )
          goto LABEL_69;
LABEL_65:
        v30 = (gameswf::Self *)((char *)v30 + 1);
        v31 += 40;
        if ( v30 == v71 )
          goto LABEL_71;
      }
      v61 = (gameswf::ASValue::Self *)(v30);
      v57 = v32;
      gameswf::free_internal(*(gameswf::Self **)(v33 + 32));
      v32 = v57;
      v30 = (gameswf::Self *)(v61);
      if ( *(uint8_t *)v33 != 0xFF )
        goto LABEL_65;
LABEL_69:
      if ( (*(uint8_t *)(v33 + 19) & 1) == 0 )
        goto LABEL_65;
      v31 += 40;
      v62 = (gameswf::ASValue::Self *)(v30);
      v58 = v32;
      gameswf::free_internal(*(gameswf::Self **)(v33 + 12));
      v32 = v58;
      v30 = (gameswf::Self *)((gameswf::ASValue::Self *)((char *)v62 + 1));
      if ( (gameswf::ASValue::Self *)((char *)v62 + 1) == (gameswf::ASValue::Self *)(uintptr_t)(v71) )
        goto LABEL_71;
    }
  }
LABEL_128:
  if ( v29 < 0 )
  {
    v72 = (gameswf::Self *)v29;
    v51 = 40 * v29;
    do
    {
      v52 = (uint8_t *)(*(uint32_t *)v67 + v51);
      if ( v52 != nullptr )
      {
        memset(v52, 0, 0x28u);
        *v52 = 1;
        *((uint32_t *)v52 + 4) = (uint32_t)(uintptr_t)(((uint8_t *)(uintptr_t)0x7FFFFF));
        v52[20] = 1;
        v52[19] = 1;
        v52[18] = (unsigned int)(uintptr_t)((uint8_t *)(uintptr_t)0x7FFFFF) >> 16;
        *((uint32_t *)v52 + 9) = (uint32_t)(uintptr_t)(((uint8_t *)(uintptr_t)0x7FFFFF));
        v52[39] = 1;
        v52[38] = (unsigned int)(uintptr_t)((uint8_t *)(uintptr_t)0x7FFFFF) >> 16;
      }
      v51 += 40;
      v72 = (gameswf::Self *)((char *)v72 + 1);
    }
    while ( v72 != nullptr );
  }
LABEL_71:
  *((uint32_t *)v65 + 24) = 0;
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v73);
LABEL_72:
  v34 = (pthread_mutex_t **)gameswf::getGlobalMutex();
  return glf::Mutex::Unlock(v34);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::waitDispatchEvents  (binary VA: 0x113a2b0)
// Original: gameswf::ASNetStream::waitDispatchEvents
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::waitDispatchEvents(gameswf::ASNetStream::Self *self)
{
  int result;
  pthread_mutex_t **GlobalMutex;
  int v3;
  pthread_mutex_t **v4;
  int v5;

  result = *((uint8_t *)self + 77);
  if ( (uint8_t)result == 0 )
  {
    result = *((uint8_t *)self + 76);
    if ( (uint8_t)result != 0 )
    {
      do
      {
        GlobalMutex = (pthread_mutex_t **)gameswf::getGlobalMutex();
        glf::Mutex::Lock(GlobalMutex);
        v3 = *((uint32_t *)self + 24);
        v4 = (pthread_mutex_t **)gameswf::getGlobalMutex();
        glf::Mutex::Unlock(v4);
        gameswf::timer::sleep((gameswf::timer::Self *)((char *)&dword_0 + 1), v5);
        result = *((uint8_t *)self + 77);
        if ( (uint8_t)result != 0 )
          break;
        result = *((uint8_t *)self + 76);
        if ( (uint8_t)result == 0 )
          break;
      }
      while ( v3 != 0 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::readStream  (binary VA: 0x113a330)
// Original: gameswf::ASNetStream::readStream
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::readStream(long double a1, gameswf::timer::Self *a2, int a3)
{
  gameswf::timer::Self *Ticks;
  int v4;
  int result;
  gameswf::timer::Self *v6;
  int v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int i;
  gameswf::timer::Self *v13;
  int v14;
  gameswf::timer::Self *v15;
  int v16;
  gameswf::timer::Self *v17;
  int v18;
  gameswf::timer::Self *v19;
  int v20;
  gameswf::timer::Self *v21;
  gameswf::timer::Self *v22;
  gameswf::timer::Self *v23;
  gameswf::timer::Self *v24;
  gameswf::timer::Self *v25;
  gameswf::timer::Self *v26;
  uint64_t s;
  uint64_t sa;
  uint64_t sb;
  gameswf::timer::Self **v30;
  double v31;
  int v32;
  double v33;
  char v34;

  Ticks = (gameswf::timer::Self *)gameswf::timer::getTicks(v21);
  LODWORD(s) = v4;
  gameswf::timer::ticksToSeconds(Ticks, s);
  v33 = a1;
  *((uint8_t *)a2 + 77) = 0;
  *((uint32_t *)a2 + 12) = 0;
  *((uint32_t *)a2 + 13) = 0;
  *((uint8_t *)a2 + 78) = 0;
  v34 = 0;
  while ( 1 )
  {
    result = *(uint32_t *)(a3 + 912);
    if ( result == 0 )
      return result;
    result = *((uint8_t *)a2 + 77);
    if ( (uint8_t)result != 0 )
      return result;
    result = *((uint8_t *)a2 + 76);
    if ( (uint8_t)result == 0 )
      return result;
    v6 = (gameswf::timer::Self *)gameswf::timer::getTicks(v22);
    LODWORD(sa) = v7;
    gameswf::timer::ticksToSeconds(v6, sa);
    v31 = a1;
    if ( v34 != *((uint8_t *)a2 + 78) )
    {
      v8 = "NetStream.Pause.Notify";
      if ( *((uint8_t *)a2 + 78) == 0 )
        v8 = "NetStream.Unpause.Notify";
      gameswf::ASNetStream::setStatus((gameswf::ASNetStream::Self *)(a2), "status", (gameswf::Self *)v8);
    }
    v34 = *((uint8_t *)a2 + 78);
    if ( v34 != 0 )
    {
      gameswf::timer::sleep((gameswf::timer::Self *)&dword_64, sb);
      v17 = (gameswf::timer::Self *)gameswf::timer::getTicks(v26);
      LODWORD(sb) = v18;
      gameswf::timer::ticksToSeconds(v17, sb);
      v33 = v33 - v31 + (double)a1;
    }
    else
    {
      if ( *((double *)a2 + 10) >= 0.0 )
      {
        v23 = nullptr;
        (*(void (**)(void))(*(uint32_t *)a3 + 16))();
        *((uint64_t *)a2 + 10) = 0xBFF0000000000000LL;
      }
      while ( *(uint32_t *)(a3 + 912) != 0 )
      {
        if ( *(uint32_t *)(a3 + 924) != 0 )
          goto LABEL_28;
        if ( (int)ogg_stream_packetout(a3 + 464, a3 + 24) <= 0 )
          break;
        if ( (int)th_decode_packetin(*(uint32_t *)(a3 + 908), a3 + 24, a3 + 928) >= 0 )
        {
          a1 = th_granule_time(*(uint32_t *)(a3 + 908), *(uint32_t *)(a3 + 928), *(uint32_t *)(a3 + 932));
          *(double *)(a3 + 936) = a1;
          *(uint32_t *)(a3 + 924) = 1;
          ++*(uint32_t *)(a3 + 56);
          *((double *)a2 + 6) = a1;
        }
      }
      if ( *(uint32_t *)(a3 + 924) != 0 )
        goto LABEL_28;
      v23 = **(gameswf::timer::Self ***)a3;
      if ( (*(uint8_t (**)(void))(*(uint32_t *)a3 + 28))() == 0 )
        goto LABEL_38;
      if ( *((uint32_t *)a2 + 22) == 0 )
      {
        gameswf::ASNetStream::setStatus((gameswf::ASNetStream::Self *)(a2), "status", (gameswf::Self *)"NetStream.Play.Stop");
        result = gameswf::ASNetStream::waitDispatchEvents((gameswf::ASNetStream::Self *)(a2));
        if ( *((double *)a2 + 10) < 0.0 )
          return result;
LABEL_38:
        v9 = *(uint32_t *)(a3 + 924);
        goto LABEL_20;
      }
      if ( *((int *)a2 + 22) > 0 )
        --*((uint32_t *)a2 + 22);
      v23 = nullptr;
      (*(void (**)(void))(*(uint32_t *)a3 + 16))();
      v9 = *(uint32_t *)(a3 + 924);
LABEL_20:
      if ( v9 == 0 )
      {
        v30 = *(gameswf::timer::Self ***)a3;
        v10 = (int)(uintptr_t)(ogg_sync_buffer(a3 + 60, 4096));
        HIDWORD(sa) = (uint32_t)(uintptr_t)(*v30);
        v11 = ((int (*)(int, int))v30[2])(v10, 4096);
        ogg_sync_wrote(a3 + 60, v11);
        v32 = a3 + 88;
        for ( i = ogg_sync_pageout(a3 + 60, a3 + 88); i > 0; i = ogg_sync_pageout(a3 + 60, v32) )
        {
          if ( *(uint32_t *)(a3 + 912) != 0 )
            ogg_stream_pagein(a3 + 464, v32);
        }
LABEL_26:
        *(uint32_t *)(a3 + 924) = 0;
        continue;
      }
LABEL_28:
      if ( v31 - v33 >= *(double *)(a3 + 936) )
      {
        v19 = (gameswf::timer::Self *)gameswf::timer::getTicks(v23);
        LODWORD(sb) = v20;
        gameswf::timer::ticksToSeconds(v19, sb);
        *(uint32_t *)(a3 + 924) = 0;
        v33 = (double)a1 - *(double *)(a3 + 936);
      }
      else
      {
        gameswf::ASNetStream::writeFrame((int)(uintptr_t)(a2), a3);
        v13 = (gameswf::timer::Self *)gameswf::timer::getTicks(v24);
        LODWORD(sb) = v14;
        gameswf::timer::ticksToSeconds(v13, sb);
        if ( 0.0010000000474974513 - v33 + (double)a1 >= *(double *)(a3 + 936) )
          goto LABEL_26;
        do
        {
          gameswf::timer::sleep((gameswf::timer::Self *)((char *)&dword_0 + 1), sa);
          v15 = (gameswf::timer::Self *)gameswf::timer::getTicks(v25);
          LODWORD(sa) = v16;
          gameswf::timer::ticksToSeconds(v15, sa);
        }
        while ( 0.0010000000474974513 - v33 + (double)a1 < *(double *)(a3 + 936) );
        *(uint32_t *)(a3 + 924) = 0;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::run  (binary VA: 0x113a750)
// Original: gameswf::ASNetStream::run
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::run(long double a1, gameswf::ASNetStream::Self *self)
{
  int result;
  const char *v3;
  char v4; // di
  char *v5;
  gameswf::Self *v6;
  char v7;
  uint8_t *v8;
  typedef pthread_mutex_t **_g4_t_v9;
  typedef uint8_t _g4_t_v10[40];
  typedef int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef gameswf::Self *_g4_t_v14;
  typedef int16_t _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[376];
  typedef uint32_t _g4_t_v21[112];
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint8_t _g4_t_v31[49];
  enum : size_t {
    _g4_s0 = 1152u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v11)) > _g4_s2 ? (56u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v12)) > _g4_s3 ? (60u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (61u + sizeof(_g4_t_v13)) > _g4_s4 ? (61u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v14)) > _g4_s5 ? (72u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v15)) > _g4_s6 ? (76u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (78u + sizeof(_g4_t_v16)) > _g4_s7 ? (78u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (79u + sizeof(_g4_t_v17)) > _g4_s8 ? (79u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v18)) > _g4_s9 ? (112u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (116u + sizeof(_g4_t_v19)) > _g4_s10 ? (116u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v20)) > _g4_s11 ? (144u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (520u + sizeof(_g4_t_v21)) > _g4_s12 ? (520u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (968u + sizeof(_g4_t_v22)) > _g4_s13 ? (968u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (972u + sizeof(_g4_t_v23)) > _g4_s14 ? (972u + sizeof(_g4_t_v23)) : _g4_s14,
    _g4_s16 = (976u + sizeof(_g4_t_v24)) > _g4_s15 ? (976u + sizeof(_g4_t_v24)) : _g4_s15,
    _g4_s17 = (980u + sizeof(_g4_t_v25)) > _g4_s16 ? (980u + sizeof(_g4_t_v25)) : _g4_s16,
    _g4_s18 = (984u + sizeof(_g4_t_v26)) > _g4_s17 ? (984u + sizeof(_g4_t_v26)) : _g4_s17,
    _g4_s19 = (988u + sizeof(_g4_t_v27)) > _g4_s18 ? (988u + sizeof(_g4_t_v27)) : _g4_s18,
    _g4_s20 = (992u + sizeof(_g4_t_v28)) > _g4_s19 ? (992u + sizeof(_g4_t_v28)) : _g4_s19,
    _g4_s21 = (996u + sizeof(_g4_t_v29)) > _g4_s20 ? (996u + sizeof(_g4_t_v29)) : _g4_s20,
    _g4_s22 = (1000u + sizeof(_g4_t_v30)) > _g4_s21 ? (1000u + sizeof(_g4_t_v30)) : _g4_s21,
    _g4_s23 = (1004u + sizeof(_g4_t_v31)) > _g4_s22 ? (1004u + sizeof(_g4_t_v31)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 61u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 78u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 79u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 112u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 116u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 144u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 520u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 968u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 972u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 976u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 980u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 984u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 988u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 992u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 996u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 1000u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 1004u);

  result = *((uint8_t *)self + 76);
  if ( (uint8_t)result != 0 )
  {
    v9 = (pthread_mutex_t **)((char *)self + 112);
    glf::Mutex::Lock((pthread_mutex_t **)self + 28);
    while ( 1 )
    {
      v7 = *((uint8_t *)self + 56);
      v8 = (uint8_t *)((char *)self + 57);
      if ( v7 == -1 )
        v8 = *((uint8_t **)self + 17);
      if ( *v8 != 0 )
        break;
      glf::Condition::Wait((pthread_mutex_t ****)self + 29, 0);
      if ( *((uint8_t *)self + 76) == 0 )
        return glf::Mutex::Unlock(v9);
      v3 = (char *)self + 57;
      if ( *((uint8_t *)self + 56) == 0xFF )
        goto LABEL_15;
LABEL_4:
      gameswf::File::Construct((gameswf::File::Self *)v10, v3, "rb");
      v11 = (int)(uintptr_t)(v10);
      v12 = 1;
      v15 = -1;
      v13 = 0;
      v16 = 127;
      v17 |= 1u;
      memset(v31, 0, sizeof(v31));
      v18 = 0;
      v21[110] = 0;
      v21[111] = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 1;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v4 = gameswf::ASNetStream::openStream(self, (uint32_t *)(&v11));
      gameswf::String::resize((gameswf::ASNetStream::Self *)((char *)self + 56), 0);
      LOBYTE(v5) = *((uint8_t *)self + 56);
      if ( (uint8_t)(uintptr_t)(v5) == 0xFF )
      {
        v5 = *((char **)self + 15);
        v6 = *((gameswf::Self **)self + 17);
      }
      else
      {
        v5 = (char *)(char)(uintptr_t)(v5);
        v6 = (gameswf::Self *)((gameswf::ASNetStream::Self *)((char *)self + 57));
      }
      gameswf::Strcpy_s(v6, v5, (gameswf::Self *)&unk_1B15112);
      *((uint32_t *)self + 18) |= 0x7FFFFFu;
      if ( v4 == 0 )
      {
        if ( v12 != -1 )
          goto LABEL_8;
LABEL_21:
        if ( (v17 & 1) != 0 )
          gameswf::free_internal(v14);
        goto LABEL_8;
      }
      gameswf::ASNetStream::setStatus(self, "status", (gameswf::Self *)"NetStream.Play.Start");
      v24 = 0;
      while ( (int)ogg_sync_pageout(&v19, v20) > 0 )
      {
        if ( v22 != 0 )
          ogg_stream_pagein(v21, v20);
      }
      gameswf::ASNetStream::readStream(a1, (gameswf::timer::Self *)(self), (int)(uintptr_t)(&v11));
      gameswf::ASNetStream::closeStream((int)(uintptr_t)(self), (int)(uintptr_t)(&v11));
      if ( v12 == -1 )
        goto LABEL_21;
LABEL_8:
      gameswf::File::Destroy((gameswf::File::Self *)v10);
      glf::Mutex::Unlock(v9);
      result = *((uint8_t *)self + 76);
      if ( (uint8_t)result == 0 )
        return result;
      glf::Mutex::Lock(v9);
    }
    v3 = (char *)self + 57;
    if ( v7 != -1 )
      goto LABEL_4;
LABEL_15:
    v3 = *((const char **)self + 17);
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::getVideoHandler  (binary VA: 0x113aa90)
// Original: gameswf::ASNetStream::getVideoHandler
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::getVideoHandler(gameswf::ASNetStream::Self *self)
{
  return *((uint32_t *)self + 30);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::seek  (binary VA: 0x113aaa0)
// Original: gameswf::ASNetStream::seek
// ----------------------------------------------------------------------------
gameswf::ASNetStream::Self * gameswf::ASNetStream::seek(gameswf::ASNetStream::Self *self, double a2)
{
  *((double *)self + 10) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::seek  (binary VA: 0x113aac0)
// Original: gameswf::ASNetStream::seek
// ----------------------------------------------------------------------------
gameswf::ASNetStream::Self * gameswf::ASNetStream::seek(int a1)
{
  gameswf::ASNetStream::Self *v1;
  long double v2; // fst7
  const char *v4;

  v1 = *(gameswf::ASNetStream::Self **)(a1 + 4);
  if ( v1 != nullptr
    && (*(uint8_t (**)(uint32_t, char *))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), (char *)&dword_18 + 2) == 0 )
  {
    v1 = nullptr;
  }
  if ( *(int *)(a1 + 16) <= 0 )
    return (gameswf::ASNetStream::Self *)gameswf::logError((gameswf::Self *)"NetStream seek needs args\n", v4);
  v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  return gameswf::ASNetStream::seek(v1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::setBufferTime_ea113ab50  (binary VA: 0x113ab50)
// Original: gameswf::ASNetStream::setBufferTime
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::setBufferTime_ea113ab50()
{
  return gameswf::logMsg((gameswf::Self *)"%s:unimplemented \n", "setBufferTime");
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::setLoopCount  (binary VA: 0x113ab80)
// Original: gameswf::ASNetStream::setLoopCount
// ----------------------------------------------------------------------------
gameswf::ASNetStream::Self * gameswf::ASNetStream::setLoopCount(gameswf::ASNetStream::Self *self, int a2)
{
  *((uint32_t *)self + 22) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::setLoopCount  (binary VA: 0x113ab90)
// Original: gameswf::ASNetStream::setLoopCount
// ----------------------------------------------------------------------------
gameswf::ASNetStream::Self * gameswf::ASNetStream::setLoopCount(int a1)
{
  gameswf::ASNetStream::Self *v1;
  double v3;

  v1 = *(gameswf::ASNetStream::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 26) == 0 )
    v1 = nullptr;
  v3 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  return gameswf::ASNetStream::setLoopCount(v1, (int)v3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::time  (binary VA: 0x113ac10)
// Original: gameswf::ASNetStream::time
// ----------------------------------------------------------------------------
long double gameswf::ASNetStream::time(gameswf::ASNetStream::Self *self)
{
  return *((double *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::time  (binary VA: 0x113ac20)
// Original: gameswf::ASNetStream::time
// ----------------------------------------------------------------------------
int gameswf::ASNetStream::time(gameswf::ASValue::Self **a1)
{
  gameswf::ASNetStream::Self *v1;
  long double v2; // fst7

  v1 = (gameswf::ASNetStream::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 26) == 0 )
    v1 = nullptr;
  v2 = gameswf::ASNetStream::time(v1);
  return gameswf::ASValue::setDouble(*a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::createClass  (binary VA: 0x113ac90)
// Original: gameswf::ASNetStream::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASNetStream::createClass(gameswf::ASNetStream::Self *self)
{
  gameswf::Self *v1;
  gameswf::Self *v2;
  gameswf::Self *v3;
  int v4;
  gameswf::Self **v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  gameswf::Self *v9;
  gameswf::Self *v10;
  gameswf::Self *v11;
  gameswf::Self *v12;
  typedef gameswf::ASClass::Self *_g4_t_Class;
  typedef uint8_t _g4_t_v15[12];
  typedef uint16_t _g4_t_v16[6];
  typedef uint16_t _g4_t_v17[6];
  typedef uint16_t _g4_t_v18[6];
  typedef uint16_t _g4_t_v19[6];
  typedef uint16_t _g4_t_v20[6];
  typedef uint16_t _g4_t_v21[6];
  typedef uint16_t _g4_t_v22[6];
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef int16_t _g4_t_v26;
  typedef int16_t _g4_t_v27;
  typedef char _g4_t_v28;
  typedef char _g4_t_v29;
  typedef gameswf::Self *_g4_t_v30;
  typedef int16_t _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef gameswf::Self *_g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef gameswf::Self *_g4_t_v40;
  typedef int16_t _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef char _g4_t_v45;
  typedef gameswf::Self *_g4_t_v46;
  typedef int16_t _g4_t_v47;
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef char _g4_t_v50;
  typedef char _g4_t_v51;
  typedef gameswf::Self *_g4_t_v52;
  typedef int16_t _g4_t_v53;
  typedef char _g4_t_v54;
  typedef char _g4_t_v55;
  typedef char _g4_t_v56;
  typedef char _g4_t_v57;
  typedef gameswf::Self *_g4_t_v58;
  typedef int16_t _g4_t_v59;
  typedef char _g4_t_v60;
  typedef char _g4_t_v61;
  typedef char _g4_t_v62;
  typedef char _g4_t_v63;
  typedef gameswf::Self *_g4_t_v64;
  typedef int16_t _g4_t_v65;
  typedef char _g4_t_v66;
  typedef char _g4_t_v67;
  typedef char _g4_t_v68;
  typedef char _g4_t_v69;
  typedef gameswf::Self *_g4_t_v70;
  typedef int16_t _g4_t_v71;
  typedef char _g4_t_v72;
  typedef char _g4_t_v73;
  typedef char _g4_t_v74;
  typedef char _g4_t_v75;
  typedef gameswf::Self *_g4_t_v76;
  typedef int16_t _g4_t_v77;
  typedef char _g4_t_v78;
  typedef char _g4_t_v79;
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (4u + sizeof(_g4_t_Class)) > _g4_s0 ? (4u + sizeof(_g4_t_Class)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v16)) > _g4_s2 ? (28u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v17)) > _g4_s3 ? (40u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v18)) > _g4_s4 ? (52u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v19)) > _g4_s5 ? (64u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v20)) > _g4_s6 ? (76u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v21)) > _g4_s7 ? (88u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v22)) > _g4_s8 ? (100u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v23)) > _g4_s9 ? (112u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (113u + sizeof(_g4_t_v24)) > _g4_s10 ? (113u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (124u + sizeof(_g4_t_v25)) > _g4_s11 ? (124u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v26)) > _g4_s12 ? (128u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (130u + sizeof(_g4_t_v27)) > _g4_s13 ? (130u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (144u + sizeof(_g4_t_v28)) > _g4_s14 ? (144u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (145u + sizeof(_g4_t_v29)) > _g4_s15 ? (145u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (156u + sizeof(_g4_t_v30)) > _g4_s16 ? (156u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (160u + sizeof(_g4_t_v31)) > _g4_s17 ? (160u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (162u + sizeof(_g4_t_v32)) > _g4_s18 ? (162u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (163u + sizeof(_g4_t_v33)) > _g4_s19 ? (163u + sizeof(_g4_t_v33)) : _g4_s19,
    _g4_s21 = (176u + sizeof(_g4_t_v34)) > _g4_s20 ? (176u + sizeof(_g4_t_v34)) : _g4_s20,
    _g4_s22 = (177u + sizeof(_g4_t_v35)) > _g4_s21 ? (177u + sizeof(_g4_t_v35)) : _g4_s21,
    _g4_s23 = (188u + sizeof(_g4_t_v36)) > _g4_s22 ? (188u + sizeof(_g4_t_v36)) : _g4_s22,
    _g4_s24 = (192u + sizeof(_g4_t_v37)) > _g4_s23 ? (192u + sizeof(_g4_t_v37)) : _g4_s23,
    _g4_s25 = (208u + sizeof(_g4_t_v38)) > _g4_s24 ? (208u + sizeof(_g4_t_v38)) : _g4_s24,
    _g4_s26 = (209u + sizeof(_g4_t_v39)) > _g4_s25 ? (209u + sizeof(_g4_t_v39)) : _g4_s25,
    _g4_s27 = (220u + sizeof(_g4_t_v40)) > _g4_s26 ? (220u + sizeof(_g4_t_v40)) : _g4_s26,
    _g4_s28 = (224u + sizeof(_g4_t_v41)) > _g4_s27 ? (224u + sizeof(_g4_t_v41)) : _g4_s27,
    _g4_s29 = (226u + sizeof(_g4_t_v42)) > _g4_s28 ? (226u + sizeof(_g4_t_v42)) : _g4_s28,
    _g4_s30 = (227u + sizeof(_g4_t_v43)) > _g4_s29 ? (227u + sizeof(_g4_t_v43)) : _g4_s29,
    _g4_s31 = (240u + sizeof(_g4_t_v44)) > _g4_s30 ? (240u + sizeof(_g4_t_v44)) : _g4_s30,
    _g4_s32 = (241u + sizeof(_g4_t_v45)) > _g4_s31 ? (241u + sizeof(_g4_t_v45)) : _g4_s31,
    _g4_s33 = (252u + sizeof(_g4_t_v46)) > _g4_s32 ? (252u + sizeof(_g4_t_v46)) : _g4_s32,
    _g4_s34 = (256u + sizeof(_g4_t_v47)) > _g4_s33 ? (256u + sizeof(_g4_t_v47)) : _g4_s33,
    _g4_s35 = (258u + sizeof(_g4_t_v48)) > _g4_s34 ? (258u + sizeof(_g4_t_v48)) : _g4_s34,
    _g4_s36 = (259u + sizeof(_g4_t_v49)) > _g4_s35 ? (259u + sizeof(_g4_t_v49)) : _g4_s35,
    _g4_s37 = (272u + sizeof(_g4_t_v50)) > _g4_s36 ? (272u + sizeof(_g4_t_v50)) : _g4_s36,
    _g4_s38 = (273u + sizeof(_g4_t_v51)) > _g4_s37 ? (273u + sizeof(_g4_t_v51)) : _g4_s37,
    _g4_s39 = (284u + sizeof(_g4_t_v52)) > _g4_s38 ? (284u + sizeof(_g4_t_v52)) : _g4_s38,
    _g4_s40 = (288u + sizeof(_g4_t_v53)) > _g4_s39 ? (288u + sizeof(_g4_t_v53)) : _g4_s39,
    _g4_s41 = (290u + sizeof(_g4_t_v54)) > _g4_s40 ? (290u + sizeof(_g4_t_v54)) : _g4_s40,
    _g4_s42 = (291u + sizeof(_g4_t_v55)) > _g4_s41 ? (291u + sizeof(_g4_t_v55)) : _g4_s41,
    _g4_s43 = (304u + sizeof(_g4_t_v56)) > _g4_s42 ? (304u + sizeof(_g4_t_v56)) : _g4_s42,
    _g4_s44 = (305u + sizeof(_g4_t_v57)) > _g4_s43 ? (305u + sizeof(_g4_t_v57)) : _g4_s43,
    _g4_s45 = (316u + sizeof(_g4_t_v58)) > _g4_s44 ? (316u + sizeof(_g4_t_v58)) : _g4_s44,
    _g4_s46 = (320u + sizeof(_g4_t_v59)) > _g4_s45 ? (320u + sizeof(_g4_t_v59)) : _g4_s45,
    _g4_s47 = (322u + sizeof(_g4_t_v60)) > _g4_s46 ? (322u + sizeof(_g4_t_v60)) : _g4_s46,
    _g4_s48 = (323u + sizeof(_g4_t_v61)) > _g4_s47 ? (323u + sizeof(_g4_t_v61)) : _g4_s47,
    _g4_s49 = (336u + sizeof(_g4_t_v62)) > _g4_s48 ? (336u + sizeof(_g4_t_v62)) : _g4_s48,
    _g4_s50 = (337u + sizeof(_g4_t_v63)) > _g4_s49 ? (337u + sizeof(_g4_t_v63)) : _g4_s49,
    _g4_s51 = (348u + sizeof(_g4_t_v64)) > _g4_s50 ? (348u + sizeof(_g4_t_v64)) : _g4_s50,
    _g4_s52 = (352u + sizeof(_g4_t_v65)) > _g4_s51 ? (352u + sizeof(_g4_t_v65)) : _g4_s51,
    _g4_s53 = (354u + sizeof(_g4_t_v66)) > _g4_s52 ? (354u + sizeof(_g4_t_v66)) : _g4_s52,
    _g4_s54 = (355u + sizeof(_g4_t_v67)) > _g4_s53 ? (355u + sizeof(_g4_t_v67)) : _g4_s53,
    _g4_s55 = (368u + sizeof(_g4_t_v68)) > _g4_s54 ? (368u + sizeof(_g4_t_v68)) : _g4_s54,
    _g4_s56 = (369u + sizeof(_g4_t_v69)) > _g4_s55 ? (369u + sizeof(_g4_t_v69)) : _g4_s55,
    _g4_s57 = (380u + sizeof(_g4_t_v70)) > _g4_s56 ? (380u + sizeof(_g4_t_v70)) : _g4_s56,
    _g4_s58 = (384u + sizeof(_g4_t_v71)) > _g4_s57 ? (384u + sizeof(_g4_t_v71)) : _g4_s57,
    _g4_s59 = (386u + sizeof(_g4_t_v72)) > _g4_s58 ? (386u + sizeof(_g4_t_v72)) : _g4_s58,
    _g4_s60 = (387u + sizeof(_g4_t_v73)) > _g4_s59 ? (387u + sizeof(_g4_t_v73)) : _g4_s59,
    _g4_s61 = (400u + sizeof(_g4_t_v74)) > _g4_s60 ? (400u + sizeof(_g4_t_v74)) : _g4_s60,
    _g4_s62 = (401u + sizeof(_g4_t_v75)) > _g4_s61 ? (401u + sizeof(_g4_t_v75)) : _g4_s61,
    _g4_s63 = (412u + sizeof(_g4_t_v76)) > _g4_s62 ? (412u + sizeof(_g4_t_v76)) : _g4_s62,
    _g4_s64 = (416u + sizeof(_g4_t_v77)) > _g4_s63 ? (416u + sizeof(_g4_t_v77)) : _g4_s63,
    _g4_s65 = (418u + sizeof(_g4_t_v78)) > _g4_s64 ? (418u + sizeof(_g4_t_v78)) : _g4_s64,
    _g4_s66 = (419u + sizeof(_g4_t_v79)) > _g4_s65 ? (419u + sizeof(_g4_t_v79)) : _g4_s65
  };
  alignas(16) uint8_t _g4_sf[_g4_s66];
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 100u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 112u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 113u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 128u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 130u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 144u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 145u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 156u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 160u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 162u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 163u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 176u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 177u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 188u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 192u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 208u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 209u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 220u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 224u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 226u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 227u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 240u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 241u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 252u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 256u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 258u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 259u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 272u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 273u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 284u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 288u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 290u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 291u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 304u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 305u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 316u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 320u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 322u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 323u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 336u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 337u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 348u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 352u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 354u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 355u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 368u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 369u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 380u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 384u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 386u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 387u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 400u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 401u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 412u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 416u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 418u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 419u);

  v28 = 1;
  v29 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v28, 15);
  v1 = (gameswf::Self *)&v29;
  if ( v28 == -1 )
    v1 = v30;
  gameswf::Strcpy_s(v1, (char *)&word_10, (gameswf::Self *)"EventDispatcher");
  v23 = 1;
  v31 = -1;
  v24 = 0;
  v32 = 127;
  v33 |= 1u;
  gameswf::String::resize((gameswf::String::Self *)&v23, 12);
  v2 = (gameswf::Self *)&v24;
  if ( v23 == -1 )
    v2 = v25;
  gameswf::Strcpy_s(v2, &byte_9[4], (gameswf::Self *)"flash.events");
  v26 = -1;
  HIBYTE(v27) = ((uint16_t)(v27 | 0x7F) >> 8) | 1;
  LOBYTE(v27) = 127;
  Class = (gameswf::ASClass::Self *)gameswf::ASClassManager::findClass(
                                (gameswf::ASNetStream::Self *)((char *)self + 236),
                                (const gameswf::String::Self *)&v23,
                                (const gameswf::String::Self *)&v28,
                                (bool)&dword_0 + 1);
  v34 = 1;
  v35 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v34, 9);
  v3 = (gameswf::Self *)&v35;
  if ( v34 == -1 )
    v3 = v36;
  gameswf::Strcpy_s(v3, &byte_9[1], (gameswf::Self *)"NetStream");
  v15[0] = 0;
  v15[1] = 0;
  v37 |= 0x7FFFFFu;
  v4 = HIWORD(v37) & 0x7F;
  HIBYTE(v37) |= 1u;
  BYTE2(v37) = v4;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v15, (int)(uintptr_t)(gameswf::ASNetStream::init));
  v5 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v5,
    self,
    Class,
    (const gameswf::String::Self *)&v34,
    gameswf::ASNetStream::newOp,
    (const gameswf::ASValue::Self *)v15,
    nullptr);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
  if ( v34 == -1 && (v37 & 0x1000000) != 0 )
  {
    gameswf::free_internal(v36);
    if ( v23 != -1 )
      goto LABEL_9;
  }
  else if ( v23 != -1 )
  {
    goto LABEL_9;
  }
  if ( (v27 & 0x100) != 0 )
  {
    gameswf::free_internal(v25);
    if ( v28 != -1 )
      goto LABEL_10;
    goto LABEL_36;
  }
LABEL_9:
  if ( v28 == -1 )
  {
LABEL_36:
    if ( (v33 & 1) != 0 )
      gameswf::free_internal(v30);
  }
LABEL_10:
  v16[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v16, (int)(uintptr_t)((gameswf::ASNetStream::Self * (*)(int))gameswf::ASNetStream::close));
  v38 = 1;
  v39 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v38, 5);
  v6 = (gameswf::Self *)&v39;
  if ( v38 == -1 )
    v6 = v40;
  gameswf::Strcpy_s(v6, (char *)&loc_6, (gameswf::Self *)"close");
  v41 = -1;
  v42 = 127;
  v43 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v5, (const gameswf::String::Self *)&v38, (const gameswf::ASValue::Self *)v16);
  if ( v38 == -1 && (v43 & 1) != 0 )
    gameswf::free_internal(v40);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
  v17[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v17, (int)(uintptr_t)((char (*)(int))gameswf::ASNetStream::pause));
  v44 = 1;
  v45 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v44, 5);
  v7 = (gameswf::Self *)&v45;
  if ( v44 == -1 )
    v7 = v46;
  gameswf::Strcpy_s(v7, (char *)&loc_6, (gameswf::Self *)"pause");
  v47 = -1;
  v48 = 127;
  v49 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v5, (const gameswf::String::Self *)&v44, (const gameswf::ASValue::Self *)v17);
  if ( v44 == -1 && (v49 & 1) != 0 )
    gameswf::free_internal(v46);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
  v18[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v18, (int)(uintptr_t)(gameswf::ASNetStream::resume));
  v50 = 1;
  v51 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v50, 6);
  v8 = (gameswf::Self *)&v51;
  if ( v50 == -1 )
    v8 = v52;
  gameswf::Strcpy_s(v8, (char *)&loc_6 + 1, (gameswf::Self *)"resume");
  v53 = -1;
  v54 = 127;
  v55 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v5, (const gameswf::String::Self *)&v50, (const gameswf::ASValue::Self *)v18);
  if ( v50 == -1 && (v55 & 1) != 0 )
    gameswf::free_internal(v52);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v18);
  v19[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v19, (int)(uintptr_t)((int (*)(int))gameswf::ASNetStream::play));
  v56 = 1;
  v57 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v56, 4);
  v9 = (gameswf::Self *)&v57;
  if ( v56 == -1 )
    v9 = v58;
  gameswf::Strcpy_s(v9, (char *)&loc_4 + 1, (gameswf::Self *)"play");
  v59 = -1;
  v60 = 127;
  v61 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v5, (const gameswf::String::Self *)&v56, (const gameswf::ASValue::Self *)v19);
  if ( v56 == -1 && (v61 & 1) != 0 )
    gameswf::free_internal(v58);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v19);
  v20[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v20, (int)(uintptr_t)((gameswf::ASNetStream::Self * (*)(int))gameswf::ASNetStream::seek));
  v62 = 1;
  v63 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v62, 4);
  v10 = (gameswf::Self *)&v63;
  if ( v62 == -1 )
    v10 = v64;
  gameswf::Strcpy_s(v10, (char *)&loc_4 + 1, (gameswf::Self *)"seek");
  v65 = -1;
  v66 = 127;
  v67 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v5, (const gameswf::String::Self *)&v62, (const gameswf::ASValue::Self *)v20);
  if ( v62 == -1 && (v67 & 1) != 0 )
    gameswf::free_internal(v64);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
  v21[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v21, (int)(uintptr_t)(gameswf::ASNetStream::setBufferTime));
  v68 = 1;
  v69 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v68, 13);
  v11 = (gameswf::Self *)&v69;
  if ( v68 == -1 )
    v11 = v70;
  gameswf::Strcpy_s(v11, &byte_9[5], (gameswf::Self *)"setBufferTime");
  v71 = -1;
  v72 = 127;
  v73 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v5, (const gameswf::String::Self *)&v68, (const gameswf::ASValue::Self *)v21);
  if ( v68 == -1 && (v73 & 1) != 0 )
    gameswf::free_internal(v70);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v21);
  v22[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v22, (int)(uintptr_t)((gameswf::ASNetStream::Self * (*)(int))gameswf::ASNetStream::setLoopCount));
  v74 = 1;
  v75 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v74, 12);
  v12 = (gameswf::Self *)&v75;
  if ( v74 == -1 )
    v12 = v76;
  gameswf::Strcpy_s(v12, &byte_9[4], (gameswf::Self *)"setLoopCount");
  v77 = -1;
  v78 = 127;
  v79 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v5, (const gameswf::String::Self *)&v74, (const gameswf::ASValue::Self *)v22);
  if ( v74 == -1 && (v79 & 1) != 0 )
    gameswf::free_internal(v76);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v22);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::ctor  (binary VA: 0x113b6e0)
// Original: gameswf::ASNetStream::ctor
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASNetStream::ctor(int a1)
{
  int v1;
  gameswf::Player::Self *v2;
  gameswf::Self *v3;
  gameswf::ASNetStream::Self *v4;

  v1 = *(uint32_t *)(a1 + 12);
  v2 = *(gameswf::Player::Self **)(v1 + 212);
  if ( v2 != nullptr )
  {
    v3 = *(gameswf::Self **)(v1 + 208);
    if ( *((uint8_t *)v3 + 2) == 0 )
    {
      if ( (*(uint16_t *)v3)-- == 1 )
        gameswf::free_internal(v3);
      *(uint32_t *)(v1 + 208) = 0;
      *(uint32_t *)(v1 + 212) = 0;
      v2 = nullptr;
    }
  }
  v4 = (gameswf::ASNetStream::Self *)opNew(0x7Cu);
  gameswf::ASNetStream::Construct(v4, v2);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v4);
  gameswf::ASNetStream::init(a1);
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStream::is  (binary VA: 0x113b7d0)
// Original: gameswf::ASNetStream::is
// ----------------------------------------------------------------------------
bool gameswf::ASNetStream::is(gameswf::ASNetStream::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 26 && a2 != 57 )
    return a2 == 0;
  return result;
}


