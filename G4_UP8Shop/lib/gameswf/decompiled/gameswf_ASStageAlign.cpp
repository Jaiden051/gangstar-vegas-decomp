#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASStageAlign.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASStageAlign::getAlignMode  (binary VA: 0x1157b80)
// Original: gameswf::ASStageAlign::getAlignMode
// ----------------------------------------------------------------------------
int gameswf::ASStageAlign::getAlignMode(gameswf::ASStageAlign::Self *self)
{
  int v1;
  int v2;
  const char *s;
  int v4;
  char *v6;
  int v7;

  v1 = *(char *)self - 1;
  if ( *(uint8_t *)self == 0xFF )
    v1 = *((uint32_t *)self + 1) - 1;
  v2 = 0;
  if ( v1 != 0 )
  {
    if ( *(uint8_t *)self == 0xFF )
      s = *((const char **)self + 3);
    else
      s = (char *)self + 1;
    if ( strchr(s, 66) != nullptr )
    {
      v2 = 17;
      v7 = 1;
      v4 = 33;
    }
    else
    {
      v6 = (char *)(strchr(s, 84));
      v2 = v6 == nullptr ? 16 : 18;
      v7 = v6 != nullptr ? 2 : 0;
      v4 = v6 == nullptr ? 32 : 34;
    }
    if ( strchr(s, 76) == nullptr )
    {
      v2 = v7;
      if ( strchr(s, 82) != nullptr )
        return v4;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStageAlign::createClass  (binary VA: 0x1160210)
// Original: gameswf::ASStageAlign::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASStageAlign::createClass(int **self)
{
  gameswf::Self **v1;
  char *v2;
  char *v3;
  char *v4;
  char *v5;
  char *v6;
  char *v7;
  char *v8;
  char *v9;
  typedef uint8_t _g4_t_v11[4];
  typedef int64_t _g4_t_v12 __attribute__((aligned(1)));
  typedef const gameswf::String::Self *_g4_t_v13[3];
  typedef const gameswf::String::Self *_g4_t_v14[3];
  typedef const gameswf::String::Self *_g4_t_v15[3];
  typedef const gameswf::String::Self *_g4_t_v16[3];
  typedef const gameswf::String::Self *_g4_t_v17[3];
  typedef const gameswf::String::Self *_g4_t_v18[3];
  typedef const gameswf::String::Self *_g4_t_v19[3];
  typedef const gameswf::String::Self *_g4_t_v20[3];
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
  typedef uint8_t _g4_t_v33[20];
  typedef uint8_t _g4_t_v34[20];
  typedef uint8_t _g4_t_v35[20];
  typedef uint8_t _g4_t_v36[20];
  typedef uint8_t _g4_t_v37[48];
  enum : size_t {
    _g4_s0 = 544u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v15)) > _g4_s4 ? (36u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v16)) > _g4_s5 ? (48u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v17)) > _g4_s6 ? (60u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v18)) > _g4_s7 ? (72u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v19)) > _g4_s8 ? (84u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v20)) > _g4_s9 ? (96u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v21)) > _g4_s10 ? (108u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v22)) > _g4_s11 ? (128u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (148u + sizeof(_g4_t_v23)) > _g4_s12 ? (148u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (168u + sizeof(_g4_t_v24)) > _g4_s13 ? (168u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (188u + sizeof(_g4_t_v25)) > _g4_s14 ? (188u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (208u + sizeof(_g4_t_v26)) > _g4_s15 ? (208u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (228u + sizeof(_g4_t_v27)) > _g4_s16 ? (228u + sizeof(_g4_t_v27)) : _g4_s16,
    _g4_s18 = (248u + sizeof(_g4_t_v28)) > _g4_s17 ? (248u + sizeof(_g4_t_v28)) : _g4_s17,
    _g4_s19 = (268u + sizeof(_g4_t_v29)) > _g4_s18 ? (268u + sizeof(_g4_t_v29)) : _g4_s18,
    _g4_s20 = (288u + sizeof(_g4_t_v30)) > _g4_s19 ? (288u + sizeof(_g4_t_v30)) : _g4_s19,
    _g4_s21 = (308u + sizeof(_g4_t_v31)) > _g4_s20 ? (308u + sizeof(_g4_t_v31)) : _g4_s20,
    _g4_s22 = (328u + sizeof(_g4_t_v32)) > _g4_s21 ? (328u + sizeof(_g4_t_v32)) : _g4_s21,
    _g4_s23 = (348u + sizeof(_g4_t_v33)) > _g4_s22 ? (348u + sizeof(_g4_t_v33)) : _g4_s22,
    _g4_s24 = (368u + sizeof(_g4_t_v34)) > _g4_s23 ? (368u + sizeof(_g4_t_v34)) : _g4_s23,
    _g4_s25 = (388u + sizeof(_g4_t_v35)) > _g4_s24 ? (388u + sizeof(_g4_t_v35)) : _g4_s24,
    _g4_s26 = (408u + sizeof(_g4_t_v36)) > _g4_s25 ? (408u + sizeof(_g4_t_v36)) : _g4_s25,
    _g4_s27 = (428u + sizeof(_g4_t_v37)) > _g4_s26 ? (428u + sizeof(_g4_t_v37)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 84u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 108u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 128u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 148u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 168u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 188u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 208u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 228u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 248u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 268u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 288u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 308u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 328u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 348u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 368u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 388u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 408u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 428u);

  sub_776320((gameswf::String::Self *)v21, (gameswf::Self *)"StageAlign");
  v11[0] = 2;
  v12 = 0;
  v11[1] = 0;
  v1 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v1,
    (gameswf::Player::Self *)self,
    (const gameswf::String::Self *)v21,
    nullptr,
    (const gameswf::ASValue::Self *)v11,
    false);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  sub_59CE50((int)(uintptr_t)(v21));
  sub_776320((gameswf::String::Self *)v22, (gameswf::Self *)"B");
  v2 = gameswf::PermanentStringCache::get(self + 12, (const gameswf::String::Self *)v22);
  LOWORD(v13[0]) = 0;
  v13[1] = nullptr;
  gameswf::ASValue::setString(v13, (const gameswf::String::Self *)v2);
  sub_776320((gameswf::String::Self *)v23, (gameswf::Self *)"BOTTOM");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v23,
    (const gameswf::ASValue::Self *)v13);
  sub_59CE50((int)(uintptr_t)(v23));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
  sub_59CE50((int)(uintptr_t)(v22));
  sub_776320((gameswf::String::Self *)v24, (gameswf::Self *)"BL");
  v3 = gameswf::PermanentStringCache::get(self + 12, (const gameswf::String::Self *)v24);
  LOWORD(v14[0]) = 0;
  v14[1] = nullptr;
  gameswf::ASValue::setString(v14, (const gameswf::String::Self *)v3);
  sub_776320((gameswf::String::Self *)v25, (gameswf::Self *)"BOTTOM_LEFT");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v25,
    (const gameswf::ASValue::Self *)v14);
  sub_59CE50((int)(uintptr_t)(v25));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  sub_59CE50((int)(uintptr_t)(v24));
  sub_776320((gameswf::String::Self *)v26, (gameswf::Self *)"BR");
  v4 = gameswf::PermanentStringCache::get(self + 12, (const gameswf::String::Self *)v26);
  LOWORD(v15[0]) = 0;
  v15[1] = nullptr;
  gameswf::ASValue::setString(v15, (const gameswf::String::Self *)v4);
  sub_776320((gameswf::String::Self *)v27, (gameswf::Self *)"BOTTOM_RIGHT");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v27,
    (const gameswf::ASValue::Self *)v15);
  sub_59CE50((int)(uintptr_t)(v27));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
  sub_59CE50((int)(uintptr_t)(v26));
  sub_776320((gameswf::String::Self *)v28, (gameswf::Self *)"L");
  v5 = gameswf::PermanentStringCache::get(self + 12, (const gameswf::String::Self *)v28);
  LOWORD(v16[0]) = 0;
  v16[1] = nullptr;
  gameswf::ASValue::setString(v16, (const gameswf::String::Self *)v5);
  sub_776320((gameswf::String::Self *)v29, (gameswf::Self *)"LEFT");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v29,
    (const gameswf::ASValue::Self *)v16);
  sub_59CE50((int)(uintptr_t)(v29));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
  sub_59CE50((int)(uintptr_t)(v28));
  sub_776320((gameswf::String::Self *)v30, (gameswf::Self *)"R");
  v6 = gameswf::PermanentStringCache::get(self + 12, (const gameswf::String::Self *)v30);
  LOWORD(v17[0]) = 0;
  v17[1] = nullptr;
  gameswf::ASValue::setString(v17, (const gameswf::String::Self *)v6);
  sub_776320((gameswf::String::Self *)v31, (gameswf::Self *)"RIGHT");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v31,
    (const gameswf::ASValue::Self *)v17);
  sub_59CE50((int)(uintptr_t)(v31));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
  sub_59CE50((int)(uintptr_t)(v30));
  sub_776320((gameswf::String::Self *)v32, (gameswf::Self *)"T");
  v7 = gameswf::PermanentStringCache::get(self + 12, (const gameswf::String::Self *)v32);
  LOWORD(v18[0]) = 0;
  v18[1] = nullptr;
  gameswf::ASValue::setString(v18, (const gameswf::String::Self *)v7);
  sub_776320((gameswf::String::Self *)v33, (gameswf::Self *)"TOP");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v33,
    (const gameswf::ASValue::Self *)v18);
  sub_59CE50((int)(uintptr_t)(v33));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v18);
  sub_59CE50((int)(uintptr_t)(v32));
  sub_776320((gameswf::String::Self *)v34, (gameswf::Self *)"TL");
  v8 = gameswf::PermanentStringCache::get(self + 12, (const gameswf::String::Self *)v34);
  LOWORD(v19[0]) = 0;
  v19[1] = nullptr;
  gameswf::ASValue::setString(v19, (const gameswf::String::Self *)v8);
  sub_776320((gameswf::String::Self *)v35, (gameswf::Self *)"TOP_LEFT");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v35,
    (const gameswf::ASValue::Self *)v19);
  sub_59CE50((int)(uintptr_t)(v35));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v19);
  sub_59CE50((int)(uintptr_t)(v34));
  sub_776320((gameswf::String::Self *)v36, (gameswf::Self *)"TR");
  v9 = gameswf::PermanentStringCache::get(self + 12, (const gameswf::String::Self *)v36);
  LOWORD(v20[0]) = 0;
  v20[1] = nullptr;
  gameswf::ASValue::setString(v20, (const gameswf::String::Self *)v9);
  sub_776320((gameswf::String::Self *)v37, (gameswf::Self *)"TOP_RIGHT");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v37,
    (const gameswf::ASValue::Self *)v20);
  sub_59CE50((int)(uintptr_t)(v37));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
  sub_59CE50((int)(uintptr_t)(v36));
  return v1;
}


