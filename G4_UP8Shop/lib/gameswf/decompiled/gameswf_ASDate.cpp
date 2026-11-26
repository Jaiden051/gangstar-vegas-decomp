#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASDate.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::getTime  (binary VA: 0x1129ef0)
// Original: gameswf::ASDate::getTime
// ----------------------------------------------------------------------------
int64_t gameswf::ASDate::getTime(gameswf::ASDate::Self *self)
{
  return *((uint64_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::getYear  (binary VA: 0x1129f00)
// Original: gameswf::ASDate::getYear
// ----------------------------------------------------------------------------
int gameswf::ASDate::getYear(gameswf::ASValue::Self **a1)
{
  gameswf::ASDate::Self *v1;
  int64_t Time; // rax
  double Year; // xmm0_8
  uint64_t v5;

  v1 = (gameswf::ASDate::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 36) == 0 )
    v1 = nullptr;
  Time = gameswf::ASDate::getTime(v1);
  LODWORD(v5) = HIDWORD(Time);
  Year = (double)(int)gameswf::timer::getYear((gameswf::timer::Self *)Time, v5);
  return gameswf::ASValue::setDouble(*a1, Year);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::getTime  (binary VA: 0x1129f80)
// Original: gameswf::ASDate::getTime
// ----------------------------------------------------------------------------
int gameswf::ASDate::getTime(gameswf::ASValue::Self **a1)
{
  gameswf::ASDate::Self *v1;
  int64_t Time; // rax
  unsigned int v3;
  signed int v4;
  long double v5; // fst7
  uint64_t v7;

  v1 = (gameswf::ASDate::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 36) == 0 )
    v1 = nullptr;
  Time = gameswf::ASDate::getTime(v1);
  LODWORD(v7) = HIDWORD(Time);
  v3 = gameswf::timer::getTime((gameswf::timer::Self *)Time, v7);
  v5 = (long double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(v4)), 0);
  if ( v4 < 0 )
    v5 = v5 + 1.8446744e19f;
  return gameswf::ASValue::setDouble(*a1, v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::getSeconds  (binary VA: 0x112a020)
// Original: gameswf::ASDate::getSeconds
// ----------------------------------------------------------------------------
int gameswf::ASDate::getSeconds(gameswf::ASValue::Self **a1)
{
  gameswf::ASDate::Self *v1;
  int64_t Time; // rax
  double Seconds; // xmm0_8
  uint64_t v5;

  v1 = (gameswf::ASDate::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 36) == 0 )
    v1 = nullptr;
  Time = gameswf::ASDate::getTime(v1);
  LODWORD(v5) = HIDWORD(Time);
  Seconds = (double)(int)gameswf::timer::getSeconds((gameswf::timer::Self *)Time, v5);
  return gameswf::ASValue::setDouble(*a1, Seconds);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::getMonth  (binary VA: 0x112a0a0)
// Original: gameswf::ASDate::getMonth
// ----------------------------------------------------------------------------
int gameswf::ASDate::getMonth(gameswf::ASValue::Self **a1)
{
  gameswf::ASDate::Self *v1;
  int64_t Time; // rax
  double Month; // xmm0_8
  uint64_t v5;

  v1 = (gameswf::ASDate::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 36) == 0 )
    v1 = nullptr;
  Time = gameswf::ASDate::getTime(v1);
  LODWORD(v5) = HIDWORD(Time);
  Month = (double)(int)gameswf::timer::getMonth((gameswf::timer::Self *)Time, v5);
  return gameswf::ASValue::setDouble(*a1, Month);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::getMinutes  (binary VA: 0x112a120)
// Original: gameswf::ASDate::getMinutes
// ----------------------------------------------------------------------------
int gameswf::ASDate::getMinutes(gameswf::ASValue::Self **a1)
{
  gameswf::ASDate::Self *v1;
  int64_t Time; // rax
  double Minutes; // xmm0_8
  uint64_t v5;

  v1 = (gameswf::ASDate::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 36) == 0 )
    v1 = nullptr;
  Time = gameswf::ASDate::getTime(v1);
  LODWORD(v5) = HIDWORD(Time);
  Minutes = (double)(int)gameswf::timer::getMinutes((gameswf::timer::Self *)Time, v5);
  return gameswf::ASValue::setDouble(*a1, Minutes);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::getMilliseconds  (binary VA: 0x112a1a0)
// Original: gameswf::ASDate::getMilliseconds
// ----------------------------------------------------------------------------
int gameswf::ASDate::getMilliseconds(gameswf::ASValue::Self **a1)
{
  gameswf::ASDate::Self *v1;
  int64_t Time; // rax
  double Milli; // xmm0_8
  uint64_t v5;

  v1 = (gameswf::ASDate::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 36) == 0 )
    v1 = nullptr;
  Time = gameswf::ASDate::getTime(v1);
  LODWORD(v5) = HIDWORD(Time);
  Milli = (double)(int)gameswf::timer::getMilli((gameswf::timer::Self *)Time, v5);
  return gameswf::ASValue::setDouble(*a1, Milli);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::getHours  (binary VA: 0x112a220)
// Original: gameswf::ASDate::getHours
// ----------------------------------------------------------------------------
int gameswf::ASDate::getHours(gameswf::ASValue::Self **a1)
{
  gameswf::ASDate::Self *v1;
  int64_t Time; // rax
  double Hours; // xmm0_8
  uint64_t v5;

  v1 = (gameswf::ASDate::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 36) == 0 )
    v1 = nullptr;
  Time = gameswf::ASDate::getTime(v1);
  LODWORD(v5) = HIDWORD(Time);
  Hours = (double)(int)gameswf::timer::getHours((gameswf::timer::Self *)Time, v5);
  return gameswf::ASValue::setDouble(*a1, Hours);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::getFullYear  (binary VA: 0x112a2a0)
// Original: gameswf::ASDate::getFullYear
// ----------------------------------------------------------------------------
int gameswf::ASDate::getFullYear(gameswf::ASValue::Self **a1)
{
  gameswf::ASDate::Self *v1;
  int64_t Time; // rax
  double FullYear; // xmm0_8
  uint64_t v5;

  v1 = (gameswf::ASDate::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 36) == 0 )
    v1 = nullptr;
  Time = gameswf::ASDate::getTime(v1);
  LODWORD(v5) = HIDWORD(Time);
  FullYear = (double)(int)gameswf::timer::getFullYear((gameswf::timer::Self *)Time, v5);
  return gameswf::ASValue::setDouble(*a1, FullYear);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::getDay  (binary VA: 0x112a320)
// Original: gameswf::ASDate::getDay
// ----------------------------------------------------------------------------
int gameswf::ASDate::getDay(gameswf::ASValue::Self **a1)
{
  gameswf::ASDate::Self *v1;
  int64_t Time; // rax
  double Day; // xmm0_8
  uint64_t v5;

  v1 = (gameswf::ASDate::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 36) == 0 )
    v1 = nullptr;
  Time = gameswf::ASDate::getTime(v1);
  LODWORD(v5) = HIDWORD(Time);
  Day = (double)(int)gameswf::timer::getDay((gameswf::timer::Self *)Time, v5);
  return gameswf::ASValue::setDouble(*a1, Day);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::getDate  (binary VA: 0x112a3a0)
// Original: gameswf::ASDate::getDate
// ----------------------------------------------------------------------------
int gameswf::ASDate::getDate(gameswf::ASValue::Self **a1)
{
  gameswf::ASDate::Self *v1;
  int64_t Time; // rax
  double Date; // xmm0_8
  uint64_t v5;

  v1 = (gameswf::ASDate::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 36) == 0 )
    v1 = nullptr;
  Time = gameswf::ASDate::getTime(v1);
  LODWORD(v5) = HIDWORD(Time);
  Date = (double)(int)gameswf::timer::getDate((gameswf::timer::Self *)Time, v5);
  return gameswf::ASValue::setDouble(*a1, Date);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::Construct  (binary VA: 0x112a420)
// Original: gameswf::ASDate::ASDate
// ----------------------------------------------------------------------------
int gameswf::ASDate::Construct(gameswf::timer::Self *a1, int a2)
{
  int v2;
  gameswf::Player::Self *v3;
  gameswf::Self *v4;
  int v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  gameswf::Self *v9;
  gameswf::Self *v10;
  gameswf::Self *v11;
  gameswf::Self *v12;
  gameswf::Self *v13;
  gameswf::Self *v14;
  gameswf::Self *v15;
  typedef gameswf::timer::Self *_g4_t_v18;
  typedef const char *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[12];
  typedef uint8_t _g4_t_v22[12];
  typedef uint8_t _g4_t_v23[12];
  typedef uint8_t _g4_t_v24[12];
  typedef uint8_t _g4_t_v25[12];
  typedef uint8_t _g4_t_v26[12];
  typedef uint8_t _g4_t_v27[12];
  typedef uint8_t _g4_t_v28[12];
  typedef uint8_t _g4_t_v29[12];
  typedef uint8_t _g4_t_v30[12];
  typedef char _g4_t_v31;
  typedef char _g4_t_v32;
  typedef gameswf::Self *_g4_t_v33;
  typedef int16_t _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef gameswf::Self *_g4_t_v39;
  typedef int16_t _g4_t_v40;
  typedef char _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef gameswf::Self *_g4_t_v45;
  typedef int16_t _g4_t_v46;
  typedef char _g4_t_v47;
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef char _g4_t_v50;
  typedef gameswf::Self *_g4_t_v51;
  typedef int16_t _g4_t_v52;
  typedef char _g4_t_v53;
  typedef char _g4_t_v54;
  typedef char _g4_t_v55;
  typedef char _g4_t_v56;
  typedef gameswf::Self *_g4_t_v57;
  typedef int16_t _g4_t_v58;
  typedef char _g4_t_v59;
  typedef char _g4_t_v60;
  typedef char _g4_t_v61;
  typedef char _g4_t_v62;
  typedef gameswf::Self *_g4_t_v63;
  typedef int16_t _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char _g4_t_v66;
  typedef char _g4_t_v67;
  typedef char _g4_t_v68;
  typedef gameswf::Self *_g4_t_v69;
  typedef int16_t _g4_t_v70;
  typedef char _g4_t_v71;
  typedef char _g4_t_v72;
  typedef char _g4_t_v73;
  typedef char _g4_t_v74;
  typedef gameswf::Self *_g4_t_v75;
  typedef int16_t _g4_t_v76;
  typedef char _g4_t_v77;
  typedef char _g4_t_v78;
  typedef char _g4_t_v79;
  typedef char _g4_t_v80;
  typedef gameswf::Self *_g4_t_v81;
  typedef int16_t _g4_t_v82;
  typedef char _g4_t_v83;
  typedef char _g4_t_v84;
  typedef char _g4_t_v85;
  typedef char _g4_t_v86;
  typedef gameswf::Self *_g4_t_v87;
  typedef int16_t _g4_t_v88;
  typedef char _g4_t_v89;
  typedef char _g4_t_v90;
  enum : size_t {
    _g4_s0 = 576u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v20)) > _g4_s2 ? (36u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v21)) > _g4_s3 ? (48u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v22)) > _g4_s4 ? (60u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v23)) > _g4_s5 ? (72u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v24)) > _g4_s6 ? (84u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v25)) > _g4_s7 ? (96u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v26)) > _g4_s8 ? (108u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (120u + sizeof(_g4_t_v27)) > _g4_s9 ? (120u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (132u + sizeof(_g4_t_v28)) > _g4_s10 ? (132u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v29)) > _g4_s11 ? (144u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (156u + sizeof(_g4_t_v30)) > _g4_s12 ? (156u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (168u + sizeof(_g4_t_v31)) > _g4_s13 ? (168u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (169u + sizeof(_g4_t_v32)) > _g4_s14 ? (169u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (180u + sizeof(_g4_t_v33)) > _g4_s15 ? (180u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (184u + sizeof(_g4_t_v34)) > _g4_s16 ? (184u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (186u + sizeof(_g4_t_v35)) > _g4_s17 ? (186u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (187u + sizeof(_g4_t_v36)) > _g4_s18 ? (187u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (200u + sizeof(_g4_t_v37)) > _g4_s19 ? (200u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (201u + sizeof(_g4_t_v38)) > _g4_s20 ? (201u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (212u + sizeof(_g4_t_v39)) > _g4_s21 ? (212u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (216u + sizeof(_g4_t_v40)) > _g4_s22 ? (216u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (218u + sizeof(_g4_t_v41)) > _g4_s23 ? (218u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (219u + sizeof(_g4_t_v42)) > _g4_s24 ? (219u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (232u + sizeof(_g4_t_v43)) > _g4_s25 ? (232u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (233u + sizeof(_g4_t_v44)) > _g4_s26 ? (233u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (244u + sizeof(_g4_t_v45)) > _g4_s27 ? (244u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (248u + sizeof(_g4_t_v46)) > _g4_s28 ? (248u + sizeof(_g4_t_v46)) : _g4_s28,
    _g4_s30 = (250u + sizeof(_g4_t_v47)) > _g4_s29 ? (250u + sizeof(_g4_t_v47)) : _g4_s29,
    _g4_s31 = (251u + sizeof(_g4_t_v48)) > _g4_s30 ? (251u + sizeof(_g4_t_v48)) : _g4_s30,
    _g4_s32 = (264u + sizeof(_g4_t_v49)) > _g4_s31 ? (264u + sizeof(_g4_t_v49)) : _g4_s31,
    _g4_s33 = (265u + sizeof(_g4_t_v50)) > _g4_s32 ? (265u + sizeof(_g4_t_v50)) : _g4_s32,
    _g4_s34 = (276u + sizeof(_g4_t_v51)) > _g4_s33 ? (276u + sizeof(_g4_t_v51)) : _g4_s33,
    _g4_s35 = (280u + sizeof(_g4_t_v52)) > _g4_s34 ? (280u + sizeof(_g4_t_v52)) : _g4_s34,
    _g4_s36 = (282u + sizeof(_g4_t_v53)) > _g4_s35 ? (282u + sizeof(_g4_t_v53)) : _g4_s35,
    _g4_s37 = (283u + sizeof(_g4_t_v54)) > _g4_s36 ? (283u + sizeof(_g4_t_v54)) : _g4_s36,
    _g4_s38 = (296u + sizeof(_g4_t_v55)) > _g4_s37 ? (296u + sizeof(_g4_t_v55)) : _g4_s37,
    _g4_s39 = (297u + sizeof(_g4_t_v56)) > _g4_s38 ? (297u + sizeof(_g4_t_v56)) : _g4_s38,
    _g4_s40 = (308u + sizeof(_g4_t_v57)) > _g4_s39 ? (308u + sizeof(_g4_t_v57)) : _g4_s39,
    _g4_s41 = (312u + sizeof(_g4_t_v58)) > _g4_s40 ? (312u + sizeof(_g4_t_v58)) : _g4_s40,
    _g4_s42 = (314u + sizeof(_g4_t_v59)) > _g4_s41 ? (314u + sizeof(_g4_t_v59)) : _g4_s41,
    _g4_s43 = (315u + sizeof(_g4_t_v60)) > _g4_s42 ? (315u + sizeof(_g4_t_v60)) : _g4_s42,
    _g4_s44 = (328u + sizeof(_g4_t_v61)) > _g4_s43 ? (328u + sizeof(_g4_t_v61)) : _g4_s43,
    _g4_s45 = (329u + sizeof(_g4_t_v62)) > _g4_s44 ? (329u + sizeof(_g4_t_v62)) : _g4_s44,
    _g4_s46 = (340u + sizeof(_g4_t_v63)) > _g4_s45 ? (340u + sizeof(_g4_t_v63)) : _g4_s45,
    _g4_s47 = (344u + sizeof(_g4_t_v64)) > _g4_s46 ? (344u + sizeof(_g4_t_v64)) : _g4_s46,
    _g4_s48 = (346u + sizeof(_g4_t_v65)) > _g4_s47 ? (346u + sizeof(_g4_t_v65)) : _g4_s47,
    _g4_s49 = (347u + sizeof(_g4_t_v66)) > _g4_s48 ? (347u + sizeof(_g4_t_v66)) : _g4_s48,
    _g4_s50 = (360u + sizeof(_g4_t_v67)) > _g4_s49 ? (360u + sizeof(_g4_t_v67)) : _g4_s49,
    _g4_s51 = (361u + sizeof(_g4_t_v68)) > _g4_s50 ? (361u + sizeof(_g4_t_v68)) : _g4_s50,
    _g4_s52 = (372u + sizeof(_g4_t_v69)) > _g4_s51 ? (372u + sizeof(_g4_t_v69)) : _g4_s51,
    _g4_s53 = (376u + sizeof(_g4_t_v70)) > _g4_s52 ? (376u + sizeof(_g4_t_v70)) : _g4_s52,
    _g4_s54 = (378u + sizeof(_g4_t_v71)) > _g4_s53 ? (378u + sizeof(_g4_t_v71)) : _g4_s53,
    _g4_s55 = (379u + sizeof(_g4_t_v72)) > _g4_s54 ? (379u + sizeof(_g4_t_v72)) : _g4_s54,
    _g4_s56 = (392u + sizeof(_g4_t_v73)) > _g4_s55 ? (392u + sizeof(_g4_t_v73)) : _g4_s55,
    _g4_s57 = (393u + sizeof(_g4_t_v74)) > _g4_s56 ? (393u + sizeof(_g4_t_v74)) : _g4_s56,
    _g4_s58 = (404u + sizeof(_g4_t_v75)) > _g4_s57 ? (404u + sizeof(_g4_t_v75)) : _g4_s57,
    _g4_s59 = (408u + sizeof(_g4_t_v76)) > _g4_s58 ? (408u + sizeof(_g4_t_v76)) : _g4_s58,
    _g4_s60 = (410u + sizeof(_g4_t_v77)) > _g4_s59 ? (410u + sizeof(_g4_t_v77)) : _g4_s59,
    _g4_s61 = (411u + sizeof(_g4_t_v78)) > _g4_s60 ? (411u + sizeof(_g4_t_v78)) : _g4_s60,
    _g4_s62 = (424u + sizeof(_g4_t_v79)) > _g4_s61 ? (424u + sizeof(_g4_t_v79)) : _g4_s61,
    _g4_s63 = (425u + sizeof(_g4_t_v80)) > _g4_s62 ? (425u + sizeof(_g4_t_v80)) : _g4_s62,
    _g4_s64 = (436u + sizeof(_g4_t_v81)) > _g4_s63 ? (436u + sizeof(_g4_t_v81)) : _g4_s63,
    _g4_s65 = (440u + sizeof(_g4_t_v82)) > _g4_s64 ? (440u + sizeof(_g4_t_v82)) : _g4_s64,
    _g4_s66 = (442u + sizeof(_g4_t_v83)) > _g4_s65 ? (442u + sizeof(_g4_t_v83)) : _g4_s65,
    _g4_s67 = (443u + sizeof(_g4_t_v84)) > _g4_s66 ? (443u + sizeof(_g4_t_v84)) : _g4_s66,
    _g4_s68 = (456u + sizeof(_g4_t_v85)) > _g4_s67 ? (456u + sizeof(_g4_t_v85)) : _g4_s67,
    _g4_s69 = (457u + sizeof(_g4_t_v86)) > _g4_s68 ? (457u + sizeof(_g4_t_v86)) : _g4_s68,
    _g4_s70 = (468u + sizeof(_g4_t_v87)) > _g4_s69 ? (468u + sizeof(_g4_t_v87)) : _g4_s69,
    _g4_s71 = (472u + sizeof(_g4_t_v88)) > _g4_s70 ? (472u + sizeof(_g4_t_v88)) : _g4_s70,
    _g4_s72 = (474u + sizeof(_g4_t_v89)) > _g4_s71 ? (474u + sizeof(_g4_t_v89)) : _g4_s71,
    _g4_s73 = (475u + sizeof(_g4_t_v90)) > _g4_s72 ? (475u + sizeof(_g4_t_v90)) : _g4_s72
  };
  alignas(16) uint8_t _g4_sf[_g4_s73];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 72u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 108u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 120u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 132u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 144u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 156u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 168u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 169u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 180u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 184u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 186u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 187u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 200u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 201u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 212u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 216u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 218u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 219u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 232u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 233u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 244u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 248u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 250u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 251u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 264u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 265u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 276u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 280u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 282u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 283u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 296u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 297u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 308u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 312u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 314u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 315u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 328u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 329u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 340u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 344u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 346u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 347u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 360u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 361u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 372u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 376u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 378u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 379u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 392u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 393u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 404u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 408u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 410u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 411u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 424u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 425u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 436u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 440u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 442u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 443u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 456u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 457u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 468u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 472u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 474u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 475u);

  v2 = *(uint32_t *)(a2 + 12);
  v3 = *(gameswf::Player::Self **)(v2 + 212);
  if ( v3 != nullptr )
  {
    v4 = *(gameswf::Self **)(v2 + 208);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
      {
        v20 = v2;
        gameswf::free_internal(v4);
        v2 = v20;
      }
      *(uint32_t *)(v2 + 208) = 0;
      *(uint32_t *)(v2 + 212) = 0;
      v3 = nullptr;
    }
  }
  gameswf::ASObject::ASObject(a1, v3);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208FCC8);
  *((uint32_t *)a1 + 10) = gameswf::timer::getSysTime(v18);
  *((uint32_t *)a1 + 11) = v5;
  if ( *(int *)(a2 + 16) > 0 )
    gameswf::logError((gameswf::Self *)"Additional parameters are not supported yet\n", v19);
  v21[0] = 0;
  v21[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v21, (int)(uintptr_t)(gameswf::ASDate::getDate));
  v31 = 1;
  v32 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v31, 7);
  v6 = (gameswf::Self *)&v32;
  if ( v31 == -1 )
    v6 = v33;
  gameswf::Strcpy_s(v6, byte_8, (gameswf::Self *)"getDate");
  v34 = -1;
  v35 = 127;
  v36 |= 1u;
  gameswf::ASObject::builtinMember(a1, (const gameswf::StringI::Self *)&v31, (const gameswf::ASValue::Self *)v21);
  if ( v31 == -1 && (v36 & 1) != 0 )
    gameswf::free_internal(v33);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v21);
  v22[0] = 0;
  v22[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v22, (int)(uintptr_t)(gameswf::ASDate::getDay));
  v37 = 1;
  v38 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v37, 6);
  v7 = (gameswf::Self *)&v38;
  if ( v37 == -1 )
    v7 = v39;
  gameswf::Strcpy_s(v7, (char *)&loc_6 + 1, (gameswf::Self *)"getDay");
  v40 = -1;
  v41 = 127;
  v42 |= 1u;
  gameswf::ASObject::builtinMember(a1, (const gameswf::StringI::Self *)&v37, (const gameswf::ASValue::Self *)v22);
  if ( v37 == -1 && (v42 & 1) != 0 )
    gameswf::free_internal(v39);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v22);
  v23[0] = 0;
  v23[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v23, (int)(uintptr_t)(gameswf::ASDate::getFullYear));
  v43 = 1;
  v44 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v43, 11);
  v8 = (gameswf::Self *)&v44;
  if ( v43 == -1 )
    v8 = v45;
  gameswf::Strcpy_s(v8, &byte_9[3], (gameswf::Self *)"getFullYear");
  v46 = -1;
  v47 = 127;
  v48 |= 1u;
  gameswf::ASObject::builtinMember(a1, (const gameswf::StringI::Self *)&v43, (const gameswf::ASValue::Self *)v23);
  if ( v43 == -1 && (v48 & 1) != 0 )
    gameswf::free_internal(v45);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v23);
  v24[0] = 0;
  v24[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v24, (int)(uintptr_t)(gameswf::ASDate::getHours));
  v49 = 1;
  v50 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v49, 8);
  v9 = (gameswf::Self *)&v50;
  if ( v49 == -1 )
    v9 = v51;
  gameswf::Strcpy_s(v9, byte_9, (gameswf::Self *)"getHours");
  v52 = -1;
  v53 = 127;
  v54 |= 1u;
  gameswf::ASObject::builtinMember(a1, (const gameswf::StringI::Self *)&v49, (const gameswf::ASValue::Self *)v24);
  if ( v49 == -1 && (v54 & 1) != 0 )
    gameswf::free_internal(v51);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v24);
  v25[0] = 0;
  v25[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v25, (int)(uintptr_t)((int (*)(gameswf::ASValue::Self **))gameswf::ASDate::getMilliseconds));
  v55 = 1;
  v56 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v55, 15);
  v10 = (gameswf::Self *)&v56;
  if ( v55 == -1 )
    v10 = v57;
  gameswf::Strcpy_s(v10, (char *)&word_10, (gameswf::Self *)"getMilliseconds");
  v58 = -1;
  v59 = 127;
  v60 |= 1u;
  gameswf::ASObject::builtinMember(a1, (const gameswf::StringI::Self *)&v55, (const gameswf::ASValue::Self *)v25);
  if ( v55 == -1 && (v60 & 1) != 0 )
    gameswf::free_internal(v57);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v25);
  v26[0] = 0;
  v26[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v26, (int)(uintptr_t)(gameswf::ASDate::getMinutes));
  v61 = 1;
  v62 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v61, 10);
  v11 = (gameswf::Self *)&v62;
  if ( v61 == -1 )
    v11 = v63;
  gameswf::Strcpy_s(v11, &byte_9[2], (gameswf::Self *)"getMinutes");
  v64 = -1;
  v65 = 127;
  v66 |= 1u;
  gameswf::ASObject::builtinMember(a1, (const gameswf::StringI::Self *)&v61, (const gameswf::ASValue::Self *)v26);
  if ( v61 == -1 && (v66 & 1) != 0 )
    gameswf::free_internal(v63);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v26);
  v27[0] = 0;
  v27[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v27, (int)(uintptr_t)(gameswf::ASDate::getMonth));
  v67 = 1;
  v68 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v67, 8);
  v12 = (gameswf::Self *)&v68;
  if ( v67 == -1 )
    v12 = v69;
  gameswf::Strcpy_s(v12, byte_9, (gameswf::Self *)"getMonth");
  v70 = -1;
  v71 = 127;
  v72 |= 1u;
  gameswf::ASObject::builtinMember(a1, (const gameswf::StringI::Self *)&v67, (const gameswf::ASValue::Self *)v27);
  if ( v67 == -1 && (v72 & 1) != 0 )
    gameswf::free_internal(v69);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v27);
  v28[0] = 0;
  v28[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v28, (int)(uintptr_t)(gameswf::ASDate::getSeconds));
  v73 = 1;
  v74 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v73, 10);
  v13 = (gameswf::Self *)&v74;
  if ( v73 == -1 )
    v13 = v75;
  gameswf::Strcpy_s(v13, &byte_9[2], (gameswf::Self *)"getSeconds");
  v76 = -1;
  v77 = 127;
  v78 |= 1u;
  gameswf::ASObject::builtinMember(a1, (const gameswf::StringI::Self *)&v73, (const gameswf::ASValue::Self *)v28);
  if ( v73 == -1 && (v78 & 1) != 0 )
    gameswf::free_internal(v75);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v28);
  v29[0] = 0;
  v29[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v29, (int)(uintptr_t)((int64_t (*)(gameswf::ASDate::Self *))gameswf::ASDate::getTime));
  v79 = 1;
  v80 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v79, 7);
  v14 = (gameswf::Self *)&v80;
  if ( v79 == -1 )
    v14 = v81;
  gameswf::Strcpy_s(v14, byte_8, (gameswf::Self *)"getTime");
  v82 = -1;
  v83 = 127;
  v84 |= 1u;
  gameswf::ASObject::builtinMember(a1, (const gameswf::StringI::Self *)&v79, (const gameswf::ASValue::Self *)v29);
  if ( v79 == -1 && (v84 & 1) != 0 )
    gameswf::free_internal(v81);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v29);
  v30[0] = 0;
  v30[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v30, (int)(uintptr_t)(gameswf::ASDate::getYear));
  v85 = 1;
  v86 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v85, 7);
  v15 = (gameswf::Self *)&v86;
  if ( v85 == -1 )
    v15 = v87;
  gameswf::Strcpy_s(v15, byte_8, (gameswf::Self *)"getYear");
  v88 = -1;
  v89 = 127;
  v90 |= 1u;
  gameswf::ASObject::builtinMember(a1, (const gameswf::StringI::Self *)&v85, (const gameswf::ASValue::Self *)v30);
  if ( v85 != -1 || (v90 & 1) == 0 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v30);
  gameswf::free_internal(v87);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v30);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::ctor  (binary VA: 0x112af30)
// Original: gameswf::ASDate::ctor
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASDate::ctor(gameswf::ASValue::Self **a1)
{
  gameswf::timer::Self *v1;

  v1 = (gameswf::timer::Self *)opNew(0x30u);
  gameswf::ASDate::Construct(v1, (int)(uintptr_t)(a1));
  if ( v1 == nullptr )
    return gameswf::ASValue::setObject(*a1, nullptr);
  gameswf::RefCounted::addRef(v1);
  gameswf::ASValue::setObject(*a1, v1);
  return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::is  (binary VA: 0x112afc0)
// Original: gameswf::ASDate::is
// ----------------------------------------------------------------------------
bool gameswf::ASDate::is(gameswf::ASDate::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 36 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::Destroy  (binary VA: 0x112afe0)
// Original: gameswf::ASDate::~ASDate
// ----------------------------------------------------------------------------
void gameswf::ASDate::Destroy(gameswf::ASDate::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FCC8);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDate::Destroy_ea112b010  (binary VA: 0x112b010)
// Original: gameswf::ASDate::~ASDate
// ----------------------------------------------------------------------------
void gameswf::ASDate::Destroy_ea112b010(gameswf::ASDate::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FCC8);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


