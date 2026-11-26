#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASStyleSheet.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASStyleSheet::init  (binary VA: 0x1144a90)
// Original: gameswf::ASStyleSheet::init
// ----------------------------------------------------------------------------
int gameswf::ASStyleSheet::init(int a1)
{
  gameswf::ASObject::Self *v1;
  gameswf::Self *v2;
  gameswf::Self *v3;
  typedef uint8_t _g4_t_v5[12];
  typedef uint8_t _g4_t_v6[12];
  typedef char _g4_t_v7;
  typedef char _g4_t_v8;
  typedef gameswf::Self *_g4_t_v9;
  typedef int16_t _g4_t_v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef gameswf::Self *_g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (25u + sizeof(_g4_t_v8)) > _g4_s3 ? (25u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v9)) > _g4_s4 ? (36u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v10)) > _g4_s5 ? (40u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (42u + sizeof(_g4_t_v11)) > _g4_s6 ? (42u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (43u + sizeof(_g4_t_v12)) > _g4_s7 ? (43u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v13)) > _g4_s8 ? (56u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (57u + sizeof(_g4_t_v14)) > _g4_s9 ? (57u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v15)) > _g4_s10 ? (68u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v16)) > _g4_s11 ? (72u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (74u + sizeof(_g4_t_v17)) > _g4_s12 ? (74u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (75u + sizeof(_g4_t_v18)) > _g4_s13 ? (75u + sizeof(_g4_t_v18)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 25u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 42u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 43u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 57u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 74u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 75u);

  v1 = *(gameswf::ASObject::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 41) == 0 )
    v1 = nullptr;
  v5[0] = 0;
  v5[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v5, (int)(uintptr_t)(gameswf::ASStyleSheet::load));
  v7 = 1;
  v8 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v7, 4);
  v2 = (gameswf::Self *)&v8;
  if ( v7 == -1 )
    v2 = v9;
  gameswf::Strcpy_s(v2, (char *)&loc_4 + 1, (gameswf::Self *)"load");
  v10 = -1;
  v11 = 127;
  v12 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v7, (const gameswf::ASValue::Self *)v5);
  if ( v7 == -1 && (v12 & 1) != 0 )
    gameswf::free_internal(v9);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  v6[0] = 0;
  v6[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v6, (int)(uintptr_t)(gameswf::ASStyleSheet::parseCSS));
  v13 = 1;
  v14 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v13, 8);
  v3 = (gameswf::Self *)&v14;
  if ( v13 == -1 )
    v3 = v15;
  gameswf::Strcpy_s(v3, byte_9, (gameswf::Self *)"parseCSS");
  v16 = -1;
  v17 = 127;
  v18 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v13, (const gameswf::ASValue::Self *)v6);
  if ( v13 != -1 || (v18 & 1) == 0 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
  gameswf::free_internal(v15);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
}



// ============================================================================
// Address:   0x1144c90 (size: 74 bytes)
// Symbol:    _ZN7gameswf12ASStyleSheetC2EPNS_6PlayerE
// Demangled: gameswf::ASStyleSheet::ASStyleSheet(gameswf::Player *)
// ============================================================================
// Alternative name is '_ZN7gameswf12ASStyleSheetC1EPNS_6PlayerE'
void (**gameswf::ASStyleSheet::ASStyleSheet(
        gameswf::ASStyleSheet::Self *self,
        gameswf::Player::Self *a2))(gameswf::ASStyleSheet::Self * self)
{
  gameswf::ASObject::ASObject(self, a2);
  *((uint32_t *)self + 10) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090208);
  return (void (**)(gameswf::ASStyleSheet::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2090208));
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASStyleSheet::newOp  (binary VA: 0x1144ce0)
// Original: gameswf::ASStyleSheet::newOp
// ----------------------------------------------------------------------------
gameswf::ASStyleSheet::Self * gameswf::ASStyleSheet::newOp(gameswf::ASStyleSheet::Self *self)
{
  gameswf::ASStyleSheet::Self *v1;

  v1 = (gameswf::ASStyleSheet::Self *)opNew(0x2Cu);
  gameswf::ASStyleSheet::ASStyleSheet(v1, self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStyleSheet::ctor  (binary VA: 0x1144d30)
// Original: gameswf::ASStyleSheet::ctor
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASStyleSheet::ctor(int a1)
{
  int v1;
  gameswf::Player::Self *v2;
  gameswf::Self *v3;
  gameswf::ASStyleSheet::Self *v4;

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
  v4 = (gameswf::ASStyleSheet::Self *)opNew(0x2Cu);
  gameswf::ASStyleSheet::ASStyleSheet(v4, v2);
  if ( v4 != nullptr )
  {
    gameswf::RefCounted::addRef(v4);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v4);
    gameswf::ASStyleSheet::init(a1);
    gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v4);
    return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v4);
  }
  else
  {
    *(uint32_t *)(a1 + 4) = 0;
    gameswf::ASStyleSheet::init(a1);
    return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, nullptr);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStyleSheet::load  (binary VA: 0x11479f0)
// Original: gameswf::ASStyleSheet::load
// ----------------------------------------------------------------------------
void gameswf::ASStyleSheet::load(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, gameswf::MemBuf::Self *a10, int a11, const void *a12, int a13, int16_t a14, int a15, int a16, gameswf::Self *a17, int a18, int a19, int a20, int a21, int a22, int a23, void (*a24)(uint32_t), int a25, int (*a26)(int))
{
  int v27;
  char v28;
  int v29;
  int v30;
  char *v31;
  const char *v32;
  int v33;
  void *v34;
  int v35;
  gameswf::Self *v36;
  gameswf::Self *v37;
  char *v38;
  int v39;
  size_t v40;
  void *retaddr;
  gameswf::MemBuf::Self *v66;
  const void *v67;
  size_t v68;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef char *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint32_t _g4_t_v63[11];
  typedef int _g4_t_v64;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v41)) > _g4_s0 ? (12u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v42)) > _g4_s1 ? (16u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v43)) > _g4_s2 ? (20u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v44)) > _g4_s3 ? (24u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v45)) > _g4_s4 ? (24u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v46)) > _g4_s5 ? (28u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v47)) > _g4_s6 ? (32u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v48)) > _g4_s7 ? (36u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v49)) > _g4_s8 ? (40u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v50)) > _g4_s9 ? (44u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v51)) > _g4_s10 ? (48u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v52)) > _g4_s11 ? (52u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v53)) > _g4_s12 ? (56u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v54)) > _g4_s13 ? (60u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v55)) > _g4_s14 ? (64u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v56)) > _g4_s15 ? (68u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v57)) > _g4_s16 ? (72u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v58)) > _g4_s17 ? (76u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v59)) > _g4_s18 ? (80u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v60)) > _g4_s19 ? (84u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v61)) > _g4_s20 ? (88u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v62)) > _g4_s21 ? (92u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v63)) > _g4_s22 ? (96u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v64)) > _g4_s23 ? (140u + sizeof(_g4_t_v64)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 60u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 80u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 84u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 88u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 140u);

  v64 = a2;
  v63[10] = a1;
  v27 = *(uint32_t *)(a3 + 4);
  if ( v27 == 0 )
    goto LABEL_3;
  v44 = *(uint32_t *)(a3 + 4);
  v28 = (*(int (**)(int, int))(*(uint32_t *)v27 + 8))(v44, 41);
  v29 = v44;
  if ( v28 == 0 || *(uint32_t *)(a3 + 16) != 1 )
    goto LABEL_3;
  v30 = **(uint32_t **)(a3 + 12) + 12 * *(uint32_t *)(a3 + 20);
  if ( *(uint8_t *)v30 == 3 || *(uint8_t *)v30 == 4 )
  {
    v31 = *(char **)(v30 + 4);
  }
  else
  {
    v31 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 )
    {
      v46 = (char *)(&byte_20D6370);
      v39 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
      v29 = v44;
      if ( v39 != 0 )
      {
        byte_20D6378 = 1;
        byte_20D6379 = 0;
        v48 = dword_20D6388 | 0x7FFFFF;
        dword_20D6388 = v48;
        BYTE2(dword_20D6388) = BYTE2(v48) & 0x7F;
        HIBYTE(dword_20D6388) = HIBYTE(v48) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
        v29 = v44;
      }
    }
  }
  if ( *v31 == -1 )
    v32 = *((const char **)v31 + 3);
  else
    v32 = v31 + 1;
  v45 = v29;
  gameswf::File::Construct((gameswf::File::Self *)v63, v32, "rb");
  if ( v63[0] == 0 )
  {
    gameswf::File::Destroy((gameswf::File::Self *)v63);
LABEL_3:
    gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a3, 0);
    return;
  }
  ((void (*)(uint32_t, int, int, int, int, char *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))v63[5])(
    v63[0],
    v41,
    v42,
    v43,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63[0],
    v63[1],
    v63[2],
    v63[3],
    v63[4],
    v63[5],
    v63[6],
    v63[7],
    v63[8],
    v63[9]);
  v66 = (gameswf::MemBuf::Self *)a26(a20);
  v64 = a20;
  a24(0);
  gameswf::MemBuf::Construct((gameswf::MemBuf::Self *)&a10);
  v33 = (int)(uintptr_t)(v66);
  v34 = retaddr;
  if ( v66 != a10 )
  {
    if ( (int)(uintptr_t)(v66) > a11 )
    {
      v40 = gameswf::MemBuf::capacity(v66, v64);
      gameswf::MemBuf::reserve((gameswf::MemBuf::Self *)&a10, v40);
      v33 = (int)(uintptr_t)(v66);
      v34 = retaddr;
    }
    a10 = (gameswf::MemBuf::Self *)v33;
  }
  retaddr = v34;
  gameswf::File::readFully((gameswf::File::Self *)v63, (gameswf::MemBuf::Self *)&a10, -1);
  a14 = 1;
  v68 = (size_t)a10;
  v35 = (int)(uintptr_t)(retaddr);
  if ( a12 != nullptr )
  {
    v67 = a12;
    gameswf::String::resize((gameswf::String::Self *)&a14, (int)(uintptr_t)(a10));
    v36 = (gameswf::Self *)((char *)&a14 + 1);
    if ( (uint8_t)a14 == 0xFF )
      v36 = a17;
    memcpy(v36, v67, v68);
    v37 = (gameswf::Self *)((char *)&a14 + 1);
    if ( (uint8_t)a14 == 0xFF )
      v37 = a17;
    *((uint8_t *)v37 + v68) = 0;
    v35 = (int)(uintptr_t)(retaddr);
    LOWORD(a18) = -1;
    BYTE2(a18) = 127;
    HIBYTE(a18) |= 1u;
    v38 = (char *)&a14 + 1;
    if ( (uint8_t)a14 == 0xFF )
      v38 = (char *)a17;
  }
  else
  {
    LOWORD(a18) = -1;
    BYTE2(a18) = 127;
    HIBYTE(a18) |= 1u;
    v38 = (char *)&a14 + 1;
  }
  sub_1147050(v35, v38);
  gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a3, 1);
  if ( (uint8_t)a14 == 0xFF && (a18 & 0x1000000) != 0 )
  {
    v64 = a16;
    gameswf::free_internal(a17);
  }
  gameswf::MemBuf::Destroy((gameswf::MemBuf::Self *)&a10);
  gameswf::File::Destroy((gameswf::File::Self *)v63);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStyleSheet::parseCSS  (binary VA: 0x1147d60)
// Original: gameswf::ASStyleSheet::parseCSS
// ----------------------------------------------------------------------------
int gameswf::ASStyleSheet::parseCSS(int a1)
{
  int v1;
  int v3;
  char *v4;
  char *v5;
  int v6;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0
    && G4_VCALL<uint8_t>(v1, 8, 41) != 0
    && *(uint32_t *)(a1 + 16) == 1 )
  {
    v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v3 == 3 || *(uint8_t *)v3 == 4 )
    {
      v4 = *(char **)(v3 + 4);
    }
    else
    {
      v4 = (char *)(&byte_20D6378);
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
    }
    if ( *v4 == -1 )
      v5 = *((char **)v4 + 3);
    else
      v5 = v4 + 1;
    sub_1147050(v1, v5);
  }
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStyleSheet::is  (binary VA: 0x1147e90)
// Original: gameswf::ASStyleSheet::is
// ----------------------------------------------------------------------------
bool gameswf::ASStyleSheet::is(gameswf::ASStyleSheet::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 41 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStyleSheet::toString  (binary VA: 0x1147eb0)
// Original: gameswf::ASStyleSheet::toString
// ----------------------------------------------------------------------------
const char * gameswf::ASStyleSheet::toString()
{
  return "[object StyleSheet]";
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStyleSheet::Destroy  (binary VA: 0x1147ed0)
// Original: gameswf::ASStyleSheet::~ASStyleSheet
// ----------------------------------------------------------------------------
void gameswf::ASStyleSheet::Destroy(gameswf::Self **self)
{
  gameswf::ASObject::Self *v1;
  gameswf::Self *v2;
  int v3;
  int v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v1 = (gameswf::ASObject::Self *)self;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_2090208);
  v2 = *(self + 10);
  if ( v2 != nullptr )
  {
    v17 = *((uint32_t *)v2 + 1);
    if ( v17 >= 0 )
    {
      v16 = 0;
      v3 = 0;
      do
      {
        v4 = (int)(uintptr_t)(v2) + 32 * v3 + 8;
        if ( *(uint32_t *)v4 != -2 )
        {
          if ( *(uint8_t *)(v4 + 8) == 0xFF && (*(uint8_t *)(v4 + 27) & 1) != 0 )
          {
            v13 = v4;
            gameswf::free_internal(*(gameswf::Self **)(v4 + 20));
            v4 = v13;
          }
          v5 = *(gameswf::Self **)(v4 + 28);
          if ( v5 != nullptr )
          {
            v6 = *((uint32_t *)v5 + 1);
            if ( v6 >= 0 )
            {
              v7 = 8;
              v8 = 0;
              while ( 2 )
              {
                v9 = (uint32_t *)((char *)v5 + v7);
                if ( *(uint32_t *)((char *)v5 + v7) == -2 )
                  goto LABEL_11;
                if ( *((uint8_t *)v9 + 8) == 0xFF && (*((uint8_t *)v9 + 27) & 1) != 0 )
                {
                  v10 = v4;
                  v14 = v6;
                  gameswf::free_internal((gameswf::Self *)v9[5]);
                  v6 = v14;
                  v4 = v10;
                  if ( *((uint8_t *)v9 + 28) == 0xFF )
                    goto LABEL_16;
                }
                else if ( *((uint8_t *)v9 + 28) == 0xFF )
                {
LABEL_16:
                  if ( (*((uint8_t *)v9 + 47) & 1) != 0 )
                  {
                    v11 = v4;
                    v15 = v6;
                    gameswf::free_internal((gameswf::Self *)v9[10]);
                    v6 = v15;
                    v4 = v11;
                  }
                }
                *v9 = -2;
                v9[1] = 0;
                v5 = *(gameswf::Self **)(v4 + 28);
LABEL_11:
                ++v8;
                v7 += 48;
                if ( v6 < v8 )
                  break;
                continue;
              }
            }
            v12 = v4;
            gameswf::free_internal(v5);
            v4 = v12;
            *(uint32_t *)(v12 + 28) = 0;
          }
          *(uint32_t *)v4 = -2;
          *(uint32_t *)(v4 + 4) = 0;
          v2 = *(self + 10);
        }
        v3 = ++v16;
      }
      while ( v17 >= v16 );
    }
    gameswf::free_internal(v2);
    v1 = (gameswf::ASObject::Self *)self;
    *(self + 10) = nullptr;
  }
  gameswf::ASObject::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStyleSheet::Destroy_ea11480a0  (binary VA: 0x11480a0)
// Original: gameswf::ASStyleSheet::~ASStyleSheet
// ----------------------------------------------------------------------------
void gameswf::ASStyleSheet::Destroy_ea11480a0(gameswf::Self **self)
{
  gameswf::ASObject::Self *v1;
  gameswf::Self *v2;
  int v3;
  int v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v1 = (gameswf::ASObject::Self *)self;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_2090208);
  v2 = *(self + 10);
  if ( v2 != nullptr )
  {
    v17 = *((uint32_t *)v2 + 1);
    if ( v17 >= 0 )
    {
      v16 = 0;
      v3 = 0;
      do
      {
        v4 = (int)(uintptr_t)(v2) + 32 * v3 + 8;
        if ( *(uint32_t *)v4 != -2 )
        {
          if ( *(uint8_t *)(v4 + 8) == 0xFF && (*(uint8_t *)(v4 + 27) & 1) != 0 )
          {
            v13 = v4;
            gameswf::free_internal(*(gameswf::Self **)(v4 + 20));
            v4 = v13;
          }
          v5 = *(gameswf::Self **)(v4 + 28);
          if ( v5 != nullptr )
          {
            v6 = *((uint32_t *)v5 + 1);
            if ( v6 >= 0 )
            {
              v7 = 8;
              v8 = 0;
              while ( 2 )
              {
                v9 = (uint32_t *)((char *)v5 + v7);
                if ( *(uint32_t *)((char *)v5 + v7) == -2 )
                  goto LABEL_11;
                if ( *((uint8_t *)v9 + 8) == 0xFF && (*((uint8_t *)v9 + 27) & 1) != 0 )
                {
                  v10 = v4;
                  v14 = v6;
                  gameswf::free_internal((gameswf::Self *)v9[5]);
                  v6 = v14;
                  v4 = v10;
                  if ( *((uint8_t *)v9 + 28) == 0xFF )
                    goto LABEL_16;
                }
                else if ( *((uint8_t *)v9 + 28) == 0xFF )
                {
LABEL_16:
                  if ( (*((uint8_t *)v9 + 47) & 1) != 0 )
                  {
                    v11 = v4;
                    v15 = v6;
                    gameswf::free_internal((gameswf::Self *)v9[10]);
                    v6 = v15;
                    v4 = v11;
                  }
                }
                *v9 = -2;
                v9[1] = 0;
                v5 = *(gameswf::Self **)(v4 + 28);
LABEL_11:
                ++v8;
                v7 += 48;
                if ( v6 < v8 )
                  break;
                continue;
              }
            }
            v12 = v4;
            gameswf::free_internal(v5);
            v4 = v12;
            *(uint32_t *)(v12 + 28) = 0;
          }
          *(uint32_t *)v4 = -2;
          *(uint32_t *)(v4 + 4) = 0;
          v2 = *(self + 10);
        }
        v3 = ++v16;
      }
      while ( v17 >= v16 );
    }
    gameswf::free_internal(v2);
    v1 = (gameswf::ASObject::Self *)self;
    *(self + 10) = nullptr;
  }
  gameswf::ASObject::Destroy(v1);
  opDelete(self);
}


