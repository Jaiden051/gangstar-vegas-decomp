#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASTextField.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASTextField::ctor  (binary VA: 0x11440b0)
// Original: gameswf::ASTextField::ctor
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASTextField::ctor(long double a1, gameswf::ASValue::Self **a2)
{
  gameswf::ASValue::Self *v2;
  gameswf::Player::Self *v3;
  gameswf::Self *v4;
  gameswf::ASValue::Self *v5;
  gameswf::Player::Self *v6;
  gameswf::Self *v7;
  gameswf::Self **v8;
  gameswf::ASObject::Self *v9;
  gameswf::Player::Self *v10;
  gameswf::Self *v11;
  bool v13;
  gameswf::ASObject::Self *v14;
  gameswf::ASObject::Self *v15;

  v2 = a2[3];
  v3 = *((gameswf::Player::Self **)v2 + 53);
  if ( v3 != nullptr )
  {
    v4 = *((gameswf::Self **)v2 + 52);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      v13 = (*(uint16_t *)v4)-- == 1;
      if ( v13 )
        gameswf::free_internal(v4);
      *((uint32_t *)v2 + 52) = 0;
      *((uint32_t *)v2 + 53) = 0;
      v3 = nullptr;
    }
  }
  gameswf::Player::getRoot(v3);
  v5 = a2[3];
  v6 = *((gameswf::Player::Self **)v5 + 53);
  if ( v6 != nullptr )
  {
    v7 = *((gameswf::Self **)v5 + 52);
    if ( *((uint8_t *)v7 + 2) == 0 )
    {
      v13 = (*(uint16_t *)v7)-- == 1;
      if ( v13 )
        gameswf::free_internal(v7);
      *((uint32_t *)v5 + 52) = 0;
      *((uint32_t *)v5 + 53) = 0;
      v6 = nullptr;
    }
  }
  v8 = (gameswf::Self **)opNew(0x9Cu);
  gameswf::EditTextCharacterDef::Construct(v8, v6, 0, 0);
  v9 = (gameswf::ASObject::Self *)(a2[3]);
  v10 = *((gameswf::Player::Self **)v9 + 53);
  if ( v10 != nullptr )
  {
    v11 = *((gameswf::Self **)v9 + 52);
    if ( *((uint8_t *)v11 + 2) == 0 )
    {
      v13 = (*(uint16_t *)v11)-- == 1;
      if ( v13 )
      {
        v15 = v9;
        gameswf::free_internal(v11);
        v9 = v15;
      }
      *((uint32_t *)v9 + 52) = 0;
      *((uint32_t *)v9 + 53) = 0;
      v10 = nullptr;
    }
  }
  v14 = (gameswf::ASObject::Self *)opNew(0x27Cu);
  gameswf::EditTextCharacter::Construct(a1, v14, v10, nullptr, (gameswf::EditTextCharacterDef::Self *)v8, nullptr);
  return gameswf::ASValue::setObject(*a2, v14);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTextField::newOp  (binary VA: 0x11443c0)
// Original: gameswf::ASTextField::newOp
// ----------------------------------------------------------------------------
gameswf::EditTextCharacter::Self * gameswf::ASTextField::newOp(long double a1, gameswf::ASTextField::Self *self)
{
  gameswf::Self **v2;
  gameswf::EditTextCharacter::Self *v3;

  v2 = (gameswf::Self **)opNew(0x9Cu);
  gameswf::EditTextCharacterDef::Construct(v2, self, 0, 0);
  v3 = (gameswf::EditTextCharacter::Self *)opNew(0x27Cu);
  gameswf::EditTextCharacter::Construct(a1, v3, self, nullptr, (gameswf::EditTextCharacterDef::Self *)v2, nullptr);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTextField::init  (binary VA: 0x1144470)
// Original: gameswf::ASTextField::init
// ----------------------------------------------------------------------------
void gameswf::ASTextField::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTextField::setTextFormat  (binary VA: 0x1144480)
// Original: gameswf::ASTextField::setTextFormat
// ----------------------------------------------------------------------------
void gameswf::ASTextField::setTextFormat(long double a1, int a2)
{
  gameswf::EditTextCharacter::Self *v2;
  gameswf::ASTextFormat::Self *v3;
  int v4;

  v2 = *(gameswf::EditTextCharacter::Self **)(a2 + 4);
  if ( v2 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v2 + 8))(*(uint32_t *)(a2 + 4), 37) == 0 )
    v2 = nullptr;
  if ( *(uint32_t *)(a2 + 16) == 1 )
  {
    v3 = nullptr;
    v4 = **(uint32_t **)(a2 + 12) + 12 * *(uint32_t *)(a2 + 20);
    if ( *(uint8_t *)v4 == 5 )
    {
      v3 = *(gameswf::ASTextFormat::Self **)(v4 + 4);
      if ( v3 != nullptr
        && G4_VCALL<uint8_t>(v3, 8, 40) == 0 )
      {
        v3 = nullptr;
      }
    }
    gameswf::EditTextCharacter::resetFormat(a1, v2, v3);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTextField::appendText  (binary VA: 0x1144530)
// Original: gameswf::ASTextField::appendText
// ----------------------------------------------------------------------------
char * gameswf::ASTextField::appendText(long double a1, int a2)
{
  gameswf::Player::Self ***v2;
  char v3;
  int v4;
  bool v5;
  char *v6;
  char v7;
  int v8;
  gameswf::Self *v9;
  char *v10;
  gameswf::Self *v11;
  int v12;
  unsigned int v13;
  int v14;
  char *v15;
  char v16;
  char v17;
  int v18;
  int v19;
  gameswf::Self *v20;
  char *v21;
  gameswf::Self *v22;
  char *result;
  int v24;
  int v25;
  char *v26;
  int v27;
  int v28;
  typedef int _g4_t_v29;
  typedef gameswf::Player::Self ***_g4_t_v30;
  typedef int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef bool _g4_t_v33;
  typedef char _g4_t_v34;
  typedef uint8_t _g4_t_v35[3];
  typedef char *_g4_t_v36;
  typedef gameswf::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v31)) > _g4_s2 ? (20u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v32)) > _g4_s3 ? (24u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v33)) > _g4_s4 ? (30u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v34)) > _g4_s5 ? (32u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (33u + sizeof(_g4_t_v35)) > _g4_s6 ? (33u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v36)) > _g4_s7 ? (36u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v37)) > _g4_s8 ? (44u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v38)) > _g4_s9 ? (48u + sizeof(_g4_t_v38)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 30u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 33u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);

  v2 = *(gameswf::Player::Self ****)(a2 + 4);
  if ( v2 != nullptr && ((uint8_t (*)(uint32_t, int))(*v2)[2])(*(uint32_t *)(a2 + 4), 37) == 0 )
    v2 = nullptr;
  v3 = *((uint8_t *)v2 + 488);
  if ( v3 == -1 )
    v4 = (int)(uintptr_t)(v2[123]) - 1;
  else
    v4 = v3 - 1;
  v33 = v4 > 0;
  v5 = v4 <= 0;
  v6 = (char *)(v2 + 117);
  if ( !v5 )
    v6 = (char *)(v2 + 122);
  v34 = 1;
  v32 = v6;
  v35[0] = 0;
  v7 = *v6;
  if ( v7 == -1 )
    v8 = *((uint32_t *)v32 + 1) - 1;
  else
    v8 = v7 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v34, v8);
  v9 = (gameswf::Self *)(v32 + 1);
  if ( *v32 == -1 )
    v9 = *((gameswf::Self **)v32 + 3);
  if ( v34 == -1 )
  {
    v10 = v36;
    v11 = v37;
  }
  else
  {
    v10 = (char *)v34;
    v11 = (gameswf::Self *)v35;
  }
  gameswf::Strcpy_s(v11, v10, v9);
  v31 = *((uint32_t *)v32 + 4);
  if ( (uint8_t *)(v31 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v32 == -1 )
    {
      v26 = *((char **)v32 + 3);
      v25 = *((uint32_t *)v32 + 1) - 1;
    }
    else
    {
      v25 = *v32 - 1;
      v26 = v32 + 1;
    }
    v12 = 5381;
    if ( v25 > 0 )
    {
      v30 = v2;
      do
      {
        --v25;
        v27 = 33 * v12;
        v28 = (uint8_t)v26[v25] + 32;
        if ( (uint8_t)(v26[v25] - 65) > 0x19u )
          v28 = (uint8_t)v26[v25];
        v12 = v27 ^ v28;
      }
      while ( v25 != 0 );
      v2 = v30;
      v12 = v12 << 9 >> 9;
    }
    *((uint32_t *)v32 + 4) = v12 & 0x7FFFFF | v31 & 0xFF800000;
  }
  else
  {
    v12 = v31 << 9 >> 9;
  }
  v13 = v12 & 0x7FFFFF | v38 & 0xFF800000;
  LOWORD(v38) = v12;
  HIBYTE(v38) = HIBYTE(v13) | 1;
  BYTE2(v38) = BYTE2(v13) & 0x7F;
  v14 = **(uint32_t **)(a2 + 12) + 12 * *(uint32_t *)(a2 + 20);
  if ( *(uint8_t *)v14 == 3 || *(uint8_t *)v14 == 4 )
  {
    v15 = *(char **)(v14 + 4);
    v16 = *v15;
    if ( *v15 != -1 )
      goto LABEL_20;
LABEL_40:
    v17 = v34;
    v18 = *((uint32_t *)v15 + 1) - 1;
    if ( v34 != -1 )
      goto LABEL_21;
    goto LABEL_41;
  }
  v15 = (char *)(&byte_20D6378);
  if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
  {
    byte_20D6378 = 1;
    v24 = dword_20D6388 | 0x7FFFFF;
    byte_20D6379 = 0;
    dword_20D6388 = v24;
    BYTE2(dword_20D6388) = BYTE2(v24) & 0x7F;
    HIBYTE(dword_20D6388) = HIBYTE(v24) | 1;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
    __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
  }
  v16 = byte_20D6378;
  if ( byte_20D6378 == -1 )
    goto LABEL_40;
LABEL_20:
  v17 = v34;
  v18 = v16 - 1;
  if ( v34 != -1 )
  {
LABEL_21:
    v19 = v17 - 1;
    goto LABEL_22;
  }
LABEL_41:
  v19 = (int)(uintptr_t)(v36 - 1);
LABEL_22:
  v29 = v19;
  gameswf::String::resize((gameswf::String::Self *)&v34, v19 + v18);
  if ( *v15 == -1 )
    v20 = *((gameswf::Self **)v15 + 3);
  else
    v20 = (gameswf::Self *)(v15 + 1);
  if ( v34 == -1 )
  {
    v21 = v36;
    v22 = v37;
  }
  else
  {
    v21 = (char *)v34;
    v22 = (gameswf::Self *)v35;
  }
  gameswf::Strcpy_s((gameswf::Self *)((char *)v22 + v29), v21, v20);
  v38 |= 0x7FFFFFu;
  result = gameswf::EditTextCharacter::setTextValue(a1, v2, (const gameswf::String::Self *)&v34, v33);
  if ( v34 == -1 && (v38 & 0x1000000) != 0 )
    return (char *)gameswf::free_internal(v37);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTextField::getCharBoundaries  (binary VA: 0x11448e0)
// Original: gameswf::ASTextField::getCharBoundaries
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASTextField::getCharBoundaries(int a1)
{
  gameswf::Self **v1;
  int Rectangle;
  int v3;
  gameswf::ASObject::Self *v5;

  v1 = *(gameswf::Self ***)(a1 + 4);
  if ( v1 != nullptr )
  {
    v5 = (gameswf::ASObject::Self *)((char *)dword_24 + 1);
    if ( (*((uint8_t (**)(uint32_t))*v1 + 2))(*(uint32_t *)(a1 + 4)) == 0 )
      v1 = nullptr;
  }
  Rectangle = (int)(uintptr_t)(gameswf::createRectangle(v1[4], v5));
  v3 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  gameswf::EditTextCharacter::getCharBoundaries((gameswf::EditTextCharacter::Self *)v1, v3, (gameswf::Rect::Self *)(Rectangle + 40));
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, (gameswf::ASObject::Self *)Rectangle);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTextField::getLineText  (binary VA: 0x1144990)
// Original: gameswf::ASTextField::getLineText
// ----------------------------------------------------------------------------
char * gameswf::ASTextField::getLineText(int a1)
{
  int v1;
  uint32_t *v2;
  int v3;
  char *result;
  typedef uint8_t _g4_t_v5[8];
  typedef gameswf::Self *_g4_t_v6;
  typedef char _g4_t_v7;
  typedef int *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (19u + sizeof(_g4_t_v7)) > _g4_s2 ? (19u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v8)) > _g4_s3 ? (40u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 19u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);

  v8 = &a1;
  v1 = a1;
  v2 = *(uint32_t **)(a1 + 4);
  if ( v2 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v2 + 8))(*(uint32_t *)(a1 + 4), 37) == 0 )
    v2 = nullptr;
  v3 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 12 * *(uint32_t *)(v1 + 20)));
  if ( v3 >= v2[81] )
    return (char *)gameswf::ASValue::setString(*(gameswf::ASValue::Self **)v1, (char *)&unk_1B15112);
  gameswf::String::substringUTF8(
    (gameswf::String::Self *)v5,
    (int)(uintptr_t)(v2 + 117),
    *(int16_t *)(v2[80] + 4 * v3),
    *(int16_t *)(v2[80] + 4 * v3) + *(int16_t *)(v2[80] + 4 * v3 + 2));
  result = gameswf::ASValue::setString(*(const gameswf::String::Self ***)v1, (const gameswf::String::Self *)v5);
  if ( v5[0] == 0xFF && (v7 & 1) != 0 )
    return (char *)gameswf::free_internal(v6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTextField::getTextFormat  (binary VA: 0x1144e40)
// Original: gameswf::ASTextField::getTextFormat
// ----------------------------------------------------------------------------
int gameswf::ASTextField::getTextFormat(uint32_t *a1)
{
  int v1;
  float v2; // xmm0_4
  gameswf::Self *v3;
  int v4;
  int StandardMemberID;
  int v6;
  char v7;
  float v8; // xmm0_4
  gameswf::Self *v9;
  int v10;
  int v11;
  int v12;
  char v13;
  float v14; // xmm0_4
  gameswf::Self *v15;
  int v16;
  int v17;
  int v18;
  char v19;
  float v20; // xmm0_4
  gameswf::Self *v21;
  int v22;
  int v23;
  int v24;
  char v25;
  float v26; // xmm0_4
  gameswf::Self *v27;
  int v28;
  int v29;
  int v30;
  char v31;
  int v32;
  int v33;
  gameswf::Self *v34;
  int v35;
  int v36;
  int v37;
  char v38;
  float v39; // xmm0_4
  gameswf::Self *v40;
  int v41;
  int v42;
  int v43;
  char v44;
  int v45;
  const gameswf::String::Self *v46;
  int v47;
  int v48;
  gameswf::Self *v49;
  char *v50;
  gameswf::Self *v51;
  int v52;
  int v53;
  int v54;
  char v55;
  int v56;
  gameswf::Self *v57;
  int v58;
  int v59;
  int v60;
  char v61;
  int v62;
  gameswf::Self *v63;
  int v64;
  int v65;
  gameswf::Self *v67;
  int v68;
  int v69;
  gameswf::Self *v70;
  char *v71;
  gameswf::Self *v72;
  int v73;
  int v74;
  int v75;
  char v76;
  bool v77;
  gameswf::Self *v78;
  int v79;
  int v80;
  gameswf::Self *v81;
  char *v82;
  gameswf::Self *v83;
  int v84;
  int v85;
  int v86;
  char v87;
  gameswf::Self *v88;
  int v89;
  int v90;
  gameswf::Self *v91;
  char *v92;
  gameswf::Self *v93;
  int v94;
  int v95;
  int v96;
  char v97;
  gameswf::Self *v98;
  int v99;
  int v100;
  gameswf::Self *v101;
  char *v102;
  gameswf::Self *v103;
  int v104;
  int v105;
  int v106;
  char v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef const gameswf::String::Self *_g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef uint16_t _g4_t_v122[6];
  typedef uint16_t _g4_t_v123[6];
  typedef uint16_t _g4_t_v124[6];
  typedef uint16_t _g4_t_v125[6];
  typedef uint16_t _g4_t_v126[6];
  typedef uint16_t _g4_t_v127[6];
  typedef uint16_t _g4_t_v128[6];
  typedef const gameswf::String::Self *_g4_t_v129[3];
  typedef const gameswf::String::Self *_g4_t_v130[3];
  typedef const gameswf::String::Self *_g4_t_v131[3];
  typedef const gameswf::String::Self *_g4_t_v132[3];
  typedef const gameswf::String::Self *_g4_t_v133[3];
  typedef uint8_t _g4_t_v134[12];
  typedef uint16_t _g4_t_v135[6];
  typedef char _g4_t_v136;
  typedef char _g4_t_v137;
  typedef gameswf::Self *_g4_t_v138;
  typedef int16_t _g4_t_v139;
  typedef char _g4_t_v140;
  typedef char _g4_t_v141;
  typedef char _g4_t_v142;
  typedef char _g4_t_v143;
  typedef gameswf::Self *_g4_t_v144;
  typedef int16_t _g4_t_v145;
  typedef char _g4_t_v146;
  typedef char _g4_t_v147;
  typedef char _g4_t_v148;
  typedef char _g4_t_v149;
  typedef gameswf::Self *_g4_t_v150;
  typedef int16_t _g4_t_v151;
  typedef char _g4_t_v152;
  typedef char _g4_t_v153;
  typedef char _g4_t_v154;
  typedef char _g4_t_v155;
  typedef gameswf::Self *_g4_t_v156;
  typedef int16_t _g4_t_v157;
  typedef char _g4_t_v158;
  typedef char _g4_t_v159;
  typedef char _g4_t_v160;
  typedef char _g4_t_v161;
  typedef gameswf::Self *_g4_t_v162;
  typedef int16_t _g4_t_v163;
  typedef char _g4_t_v164;
  typedef char _g4_t_v165;
  typedef char _g4_t_v166;
  typedef char _g4_t_v167;
  typedef gameswf::Self *_g4_t_v168;
  typedef int16_t _g4_t_v169;
  typedef char _g4_t_v170;
  typedef char _g4_t_v171;
  typedef char _g4_t_v172;
  typedef char _g4_t_v173;
  typedef gameswf::Self *_g4_t_v174;
  typedef int16_t _g4_t_v175;
  typedef char _g4_t_v176;
  typedef char _g4_t_v177;
  typedef char _g4_t_v178;
  typedef char _g4_t_v179;
  typedef gameswf::Self *_g4_t_v180;
  typedef int16_t _g4_t_v181;
  typedef char _g4_t_v182;
  typedef char _g4_t_v183;
  typedef char _g4_t_v184;
  typedef char _g4_t_v185;
  typedef gameswf::Self *_g4_t_v186;
  typedef int16_t _g4_t_v187;
  typedef char _g4_t_v188;
  typedef char _g4_t_v189;
  typedef char _g4_t_v190;
  typedef char _g4_t_v191;
  typedef gameswf::Self *_g4_t_v192;
  typedef int16_t _g4_t_v193;
  typedef char _g4_t_v194;
  typedef char _g4_t_v195;
  typedef char _g4_t_v196;
  typedef char _g4_t_v197;
  typedef gameswf::Self *_g4_t_v198;
  typedef int16_t _g4_t_v199;
  typedef char _g4_t_v200;
  typedef char _g4_t_v201;
  typedef char _g4_t_v202;
  typedef char _g4_t_v203;
  typedef gameswf::Self *_g4_t_v204;
  typedef int16_t _g4_t_v205;
  typedef char _g4_t_v206;
  typedef char _g4_t_v207;
  typedef char _g4_t_v208;
  typedef char _g4_t_v209;
  typedef gameswf::Self *_g4_t_v210;
  typedef int16_t _g4_t_v211;
  typedef char _g4_t_v212;
  typedef char _g4_t_v213;
  typedef char _g4_t_v214;
  typedef char _g4_t_v215;
  typedef gameswf::Self *_g4_t_v216;
  typedef int16_t _g4_t_v217;
  typedef char _g4_t_v218;
  typedef char _g4_t_v219;
  typedef char _g4_t_v220;
  typedef char _g4_t_v221;
  typedef gameswf::Self *_g4_t_v222;
  typedef int16_t _g4_t_v223;
  typedef char _g4_t_v224;
  typedef char _g4_t_v225;
  typedef char _g4_t_v226;
  typedef char _g4_t_v227;
  typedef gameswf::Self *_g4_t_v228;
  typedef int16_t _g4_t_v229;
  typedef char _g4_t_v230;
  typedef char _g4_t_v231;
  typedef char _g4_t_v232;
  typedef char _g4_t_v233;
  typedef gameswf::Self *_g4_t_v234;
  typedef int16_t _g4_t_v235;
  typedef char _g4_t_v236;
  typedef char _g4_t_v237;
  typedef char _g4_t_v238;
  typedef char _g4_t_v239;
  typedef gameswf::Self *_g4_t_v240;
  typedef int16_t _g4_t_v241;
  typedef char _g4_t_v242;
  typedef char _g4_t_v243;
  enum : size_t {
    _g4_s0 = 848u,
    _g4_s1 = (8u + sizeof(_g4_t_v108)) > _g4_s0 ? (8u + sizeof(_g4_t_v108)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v109)) > _g4_s1 ? (8u + sizeof(_g4_t_v109)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v110)) > _g4_s2 ? (8u + sizeof(_g4_t_v110)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v111)) > _g4_s3 ? (8u + sizeof(_g4_t_v111)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v112)) > _g4_s4 ? (8u + sizeof(_g4_t_v112)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v113)) > _g4_s5 ? (8u + sizeof(_g4_t_v113)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v114)) > _g4_s6 ? (8u + sizeof(_g4_t_v114)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v115)) > _g4_s7 ? (8u + sizeof(_g4_t_v115)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v116)) > _g4_s8 ? (8u + sizeof(_g4_t_v116)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v117)) > _g4_s9 ? (8u + sizeof(_g4_t_v117)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v118)) > _g4_s10 ? (8u + sizeof(_g4_t_v118)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v119)) > _g4_s11 ? (8u + sizeof(_g4_t_v119)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v120)) > _g4_s12 ? (8u + sizeof(_g4_t_v120)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v121)) > _g4_s13 ? (8u + sizeof(_g4_t_v121)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v122)) > _g4_s14 ? (24u + sizeof(_g4_t_v122)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v123)) > _g4_s15 ? (36u + sizeof(_g4_t_v123)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v124)) > _g4_s16 ? (48u + sizeof(_g4_t_v124)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v125)) > _g4_s17 ? (60u + sizeof(_g4_t_v125)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v126)) > _g4_s18 ? (72u + sizeof(_g4_t_v126)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v127)) > _g4_s19 ? (84u + sizeof(_g4_t_v127)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v128)) > _g4_s20 ? (96u + sizeof(_g4_t_v128)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v129)) > _g4_s21 ? (108u + sizeof(_g4_t_v129)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v130)) > _g4_s22 ? (120u + sizeof(_g4_t_v130)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v131)) > _g4_s23 ? (132u + sizeof(_g4_t_v131)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v132)) > _g4_s24 ? (144u + sizeof(_g4_t_v132)) : _g4_s24,
    _g4_s26 = (156u + sizeof(_g4_t_v133)) > _g4_s25 ? (156u + sizeof(_g4_t_v133)) : _g4_s25,
    _g4_s27 = (168u + sizeof(_g4_t_v134)) > _g4_s26 ? (168u + sizeof(_g4_t_v134)) : _g4_s26,
    _g4_s28 = (180u + sizeof(_g4_t_v135)) > _g4_s27 ? (180u + sizeof(_g4_t_v135)) : _g4_s27,
    _g4_s29 = (192u + sizeof(_g4_t_v136)) > _g4_s28 ? (192u + sizeof(_g4_t_v136)) : _g4_s28,
    _g4_s30 = (193u + sizeof(_g4_t_v137)) > _g4_s29 ? (193u + sizeof(_g4_t_v137)) : _g4_s29,
    _g4_s31 = (204u + sizeof(_g4_t_v138)) > _g4_s30 ? (204u + sizeof(_g4_t_v138)) : _g4_s30,
    _g4_s32 = (208u + sizeof(_g4_t_v139)) > _g4_s31 ? (208u + sizeof(_g4_t_v139)) : _g4_s31,
    _g4_s33 = (210u + sizeof(_g4_t_v140)) > _g4_s32 ? (210u + sizeof(_g4_t_v140)) : _g4_s32,
    _g4_s34 = (211u + sizeof(_g4_t_v141)) > _g4_s33 ? (211u + sizeof(_g4_t_v141)) : _g4_s33,
    _g4_s35 = (224u + sizeof(_g4_t_v142)) > _g4_s34 ? (224u + sizeof(_g4_t_v142)) : _g4_s34,
    _g4_s36 = (225u + sizeof(_g4_t_v143)) > _g4_s35 ? (225u + sizeof(_g4_t_v143)) : _g4_s35,
    _g4_s37 = (236u + sizeof(_g4_t_v144)) > _g4_s36 ? (236u + sizeof(_g4_t_v144)) : _g4_s36,
    _g4_s38 = (240u + sizeof(_g4_t_v145)) > _g4_s37 ? (240u + sizeof(_g4_t_v145)) : _g4_s37,
    _g4_s39 = (242u + sizeof(_g4_t_v146)) > _g4_s38 ? (242u + sizeof(_g4_t_v146)) : _g4_s38,
    _g4_s40 = (243u + sizeof(_g4_t_v147)) > _g4_s39 ? (243u + sizeof(_g4_t_v147)) : _g4_s39,
    _g4_s41 = (256u + sizeof(_g4_t_v148)) > _g4_s40 ? (256u + sizeof(_g4_t_v148)) : _g4_s40,
    _g4_s42 = (257u + sizeof(_g4_t_v149)) > _g4_s41 ? (257u + sizeof(_g4_t_v149)) : _g4_s41,
    _g4_s43 = (268u + sizeof(_g4_t_v150)) > _g4_s42 ? (268u + sizeof(_g4_t_v150)) : _g4_s42,
    _g4_s44 = (272u + sizeof(_g4_t_v151)) > _g4_s43 ? (272u + sizeof(_g4_t_v151)) : _g4_s43,
    _g4_s45 = (274u + sizeof(_g4_t_v152)) > _g4_s44 ? (274u + sizeof(_g4_t_v152)) : _g4_s44,
    _g4_s46 = (275u + sizeof(_g4_t_v153)) > _g4_s45 ? (275u + sizeof(_g4_t_v153)) : _g4_s45,
    _g4_s47 = (288u + sizeof(_g4_t_v154)) > _g4_s46 ? (288u + sizeof(_g4_t_v154)) : _g4_s46,
    _g4_s48 = (289u + sizeof(_g4_t_v155)) > _g4_s47 ? (289u + sizeof(_g4_t_v155)) : _g4_s47,
    _g4_s49 = (300u + sizeof(_g4_t_v156)) > _g4_s48 ? (300u + sizeof(_g4_t_v156)) : _g4_s48,
    _g4_s50 = (304u + sizeof(_g4_t_v157)) > _g4_s49 ? (304u + sizeof(_g4_t_v157)) : _g4_s49,
    _g4_s51 = (306u + sizeof(_g4_t_v158)) > _g4_s50 ? (306u + sizeof(_g4_t_v158)) : _g4_s50,
    _g4_s52 = (307u + sizeof(_g4_t_v159)) > _g4_s51 ? (307u + sizeof(_g4_t_v159)) : _g4_s51,
    _g4_s53 = (320u + sizeof(_g4_t_v160)) > _g4_s52 ? (320u + sizeof(_g4_t_v160)) : _g4_s52,
    _g4_s54 = (321u + sizeof(_g4_t_v161)) > _g4_s53 ? (321u + sizeof(_g4_t_v161)) : _g4_s53,
    _g4_s55 = (332u + sizeof(_g4_t_v162)) > _g4_s54 ? (332u + sizeof(_g4_t_v162)) : _g4_s54,
    _g4_s56 = (336u + sizeof(_g4_t_v163)) > _g4_s55 ? (336u + sizeof(_g4_t_v163)) : _g4_s55,
    _g4_s57 = (338u + sizeof(_g4_t_v164)) > _g4_s56 ? (338u + sizeof(_g4_t_v164)) : _g4_s56,
    _g4_s58 = (339u + sizeof(_g4_t_v165)) > _g4_s57 ? (339u + sizeof(_g4_t_v165)) : _g4_s57,
    _g4_s59 = (352u + sizeof(_g4_t_v166)) > _g4_s58 ? (352u + sizeof(_g4_t_v166)) : _g4_s58,
    _g4_s60 = (353u + sizeof(_g4_t_v167)) > _g4_s59 ? (353u + sizeof(_g4_t_v167)) : _g4_s59,
    _g4_s61 = (364u + sizeof(_g4_t_v168)) > _g4_s60 ? (364u + sizeof(_g4_t_v168)) : _g4_s60,
    _g4_s62 = (368u + sizeof(_g4_t_v169)) > _g4_s61 ? (368u + sizeof(_g4_t_v169)) : _g4_s61,
    _g4_s63 = (370u + sizeof(_g4_t_v170)) > _g4_s62 ? (370u + sizeof(_g4_t_v170)) : _g4_s62,
    _g4_s64 = (371u + sizeof(_g4_t_v171)) > _g4_s63 ? (371u + sizeof(_g4_t_v171)) : _g4_s63,
    _g4_s65 = (384u + sizeof(_g4_t_v172)) > _g4_s64 ? (384u + sizeof(_g4_t_v172)) : _g4_s64,
    _g4_s66 = (385u + sizeof(_g4_t_v173)) > _g4_s65 ? (385u + sizeof(_g4_t_v173)) : _g4_s65,
    _g4_s67 = (396u + sizeof(_g4_t_v174)) > _g4_s66 ? (396u + sizeof(_g4_t_v174)) : _g4_s66,
    _g4_s68 = (400u + sizeof(_g4_t_v175)) > _g4_s67 ? (400u + sizeof(_g4_t_v175)) : _g4_s67,
    _g4_s69 = (402u + sizeof(_g4_t_v176)) > _g4_s68 ? (402u + sizeof(_g4_t_v176)) : _g4_s68,
    _g4_s70 = (403u + sizeof(_g4_t_v177)) > _g4_s69 ? (403u + sizeof(_g4_t_v177)) : _g4_s69,
    _g4_s71 = (416u + sizeof(_g4_t_v178)) > _g4_s70 ? (416u + sizeof(_g4_t_v178)) : _g4_s70,
    _g4_s72 = (417u + sizeof(_g4_t_v179)) > _g4_s71 ? (417u + sizeof(_g4_t_v179)) : _g4_s71,
    _g4_s73 = (428u + sizeof(_g4_t_v180)) > _g4_s72 ? (428u + sizeof(_g4_t_v180)) : _g4_s72,
    _g4_s74 = (432u + sizeof(_g4_t_v181)) > _g4_s73 ? (432u + sizeof(_g4_t_v181)) : _g4_s73,
    _g4_s75 = (434u + sizeof(_g4_t_v182)) > _g4_s74 ? (434u + sizeof(_g4_t_v182)) : _g4_s74,
    _g4_s76 = (435u + sizeof(_g4_t_v183)) > _g4_s75 ? (435u + sizeof(_g4_t_v183)) : _g4_s75,
    _g4_s77 = (448u + sizeof(_g4_t_v184)) > _g4_s76 ? (448u + sizeof(_g4_t_v184)) : _g4_s76,
    _g4_s78 = (449u + sizeof(_g4_t_v185)) > _g4_s77 ? (449u + sizeof(_g4_t_v185)) : _g4_s77,
    _g4_s79 = (460u + sizeof(_g4_t_v186)) > _g4_s78 ? (460u + sizeof(_g4_t_v186)) : _g4_s78,
    _g4_s80 = (464u + sizeof(_g4_t_v187)) > _g4_s79 ? (464u + sizeof(_g4_t_v187)) : _g4_s79,
    _g4_s81 = (466u + sizeof(_g4_t_v188)) > _g4_s80 ? (466u + sizeof(_g4_t_v188)) : _g4_s80,
    _g4_s82 = (467u + sizeof(_g4_t_v189)) > _g4_s81 ? (467u + sizeof(_g4_t_v189)) : _g4_s81,
    _g4_s83 = (480u + sizeof(_g4_t_v190)) > _g4_s82 ? (480u + sizeof(_g4_t_v190)) : _g4_s82,
    _g4_s84 = (481u + sizeof(_g4_t_v191)) > _g4_s83 ? (481u + sizeof(_g4_t_v191)) : _g4_s83,
    _g4_s85 = (492u + sizeof(_g4_t_v192)) > _g4_s84 ? (492u + sizeof(_g4_t_v192)) : _g4_s84,
    _g4_s86 = (496u + sizeof(_g4_t_v193)) > _g4_s85 ? (496u + sizeof(_g4_t_v193)) : _g4_s85,
    _g4_s87 = (498u + sizeof(_g4_t_v194)) > _g4_s86 ? (498u + sizeof(_g4_t_v194)) : _g4_s86,
    _g4_s88 = (499u + sizeof(_g4_t_v195)) > _g4_s87 ? (499u + sizeof(_g4_t_v195)) : _g4_s87,
    _g4_s89 = (512u + sizeof(_g4_t_v196)) > _g4_s88 ? (512u + sizeof(_g4_t_v196)) : _g4_s88,
    _g4_s90 = (513u + sizeof(_g4_t_v197)) > _g4_s89 ? (513u + sizeof(_g4_t_v197)) : _g4_s89,
    _g4_s91 = (524u + sizeof(_g4_t_v198)) > _g4_s90 ? (524u + sizeof(_g4_t_v198)) : _g4_s90,
    _g4_s92 = (528u + sizeof(_g4_t_v199)) > _g4_s91 ? (528u + sizeof(_g4_t_v199)) : _g4_s91,
    _g4_s93 = (530u + sizeof(_g4_t_v200)) > _g4_s92 ? (530u + sizeof(_g4_t_v200)) : _g4_s92,
    _g4_s94 = (531u + sizeof(_g4_t_v201)) > _g4_s93 ? (531u + sizeof(_g4_t_v201)) : _g4_s93,
    _g4_s95 = (544u + sizeof(_g4_t_v202)) > _g4_s94 ? (544u + sizeof(_g4_t_v202)) : _g4_s94,
    _g4_s96 = (545u + sizeof(_g4_t_v203)) > _g4_s95 ? (545u + sizeof(_g4_t_v203)) : _g4_s95,
    _g4_s97 = (556u + sizeof(_g4_t_v204)) > _g4_s96 ? (556u + sizeof(_g4_t_v204)) : _g4_s96,
    _g4_s98 = (560u + sizeof(_g4_t_v205)) > _g4_s97 ? (560u + sizeof(_g4_t_v205)) : _g4_s97,
    _g4_s99 = (562u + sizeof(_g4_t_v206)) > _g4_s98 ? (562u + sizeof(_g4_t_v206)) : _g4_s98,
    _g4_s100 = (563u + sizeof(_g4_t_v207)) > _g4_s99 ? (563u + sizeof(_g4_t_v207)) : _g4_s99,
    _g4_s101 = (576u + sizeof(_g4_t_v208)) > _g4_s100 ? (576u + sizeof(_g4_t_v208)) : _g4_s100,
    _g4_s102 = (577u + sizeof(_g4_t_v209)) > _g4_s101 ? (577u + sizeof(_g4_t_v209)) : _g4_s101,
    _g4_s103 = (588u + sizeof(_g4_t_v210)) > _g4_s102 ? (588u + sizeof(_g4_t_v210)) : _g4_s102,
    _g4_s104 = (592u + sizeof(_g4_t_v211)) > _g4_s103 ? (592u + sizeof(_g4_t_v211)) : _g4_s103,
    _g4_s105 = (594u + sizeof(_g4_t_v212)) > _g4_s104 ? (594u + sizeof(_g4_t_v212)) : _g4_s104,
    _g4_s106 = (595u + sizeof(_g4_t_v213)) > _g4_s105 ? (595u + sizeof(_g4_t_v213)) : _g4_s105,
    _g4_s107 = (608u + sizeof(_g4_t_v214)) > _g4_s106 ? (608u + sizeof(_g4_t_v214)) : _g4_s106,
    _g4_s108 = (609u + sizeof(_g4_t_v215)) > _g4_s107 ? (609u + sizeof(_g4_t_v215)) : _g4_s107,
    _g4_s109 = (620u + sizeof(_g4_t_v216)) > _g4_s108 ? (620u + sizeof(_g4_t_v216)) : _g4_s108,
    _g4_s110 = (624u + sizeof(_g4_t_v217)) > _g4_s109 ? (624u + sizeof(_g4_t_v217)) : _g4_s109,
    _g4_s111 = (626u + sizeof(_g4_t_v218)) > _g4_s110 ? (626u + sizeof(_g4_t_v218)) : _g4_s110,
    _g4_s112 = (627u + sizeof(_g4_t_v219)) > _g4_s111 ? (627u + sizeof(_g4_t_v219)) : _g4_s111,
    _g4_s113 = (640u + sizeof(_g4_t_v220)) > _g4_s112 ? (640u + sizeof(_g4_t_v220)) : _g4_s112,
    _g4_s114 = (641u + sizeof(_g4_t_v221)) > _g4_s113 ? (641u + sizeof(_g4_t_v221)) : _g4_s113,
    _g4_s115 = (652u + sizeof(_g4_t_v222)) > _g4_s114 ? (652u + sizeof(_g4_t_v222)) : _g4_s114,
    _g4_s116 = (656u + sizeof(_g4_t_v223)) > _g4_s115 ? (656u + sizeof(_g4_t_v223)) : _g4_s115,
    _g4_s117 = (658u + sizeof(_g4_t_v224)) > _g4_s116 ? (658u + sizeof(_g4_t_v224)) : _g4_s116,
    _g4_s118 = (659u + sizeof(_g4_t_v225)) > _g4_s117 ? (659u + sizeof(_g4_t_v225)) : _g4_s117,
    _g4_s119 = (672u + sizeof(_g4_t_v226)) > _g4_s118 ? (672u + sizeof(_g4_t_v226)) : _g4_s118,
    _g4_s120 = (673u + sizeof(_g4_t_v227)) > _g4_s119 ? (673u + sizeof(_g4_t_v227)) : _g4_s119,
    _g4_s121 = (684u + sizeof(_g4_t_v228)) > _g4_s120 ? (684u + sizeof(_g4_t_v228)) : _g4_s120,
    _g4_s122 = (688u + sizeof(_g4_t_v229)) > _g4_s121 ? (688u + sizeof(_g4_t_v229)) : _g4_s121,
    _g4_s123 = (690u + sizeof(_g4_t_v230)) > _g4_s122 ? (690u + sizeof(_g4_t_v230)) : _g4_s122,
    _g4_s124 = (691u + sizeof(_g4_t_v231)) > _g4_s123 ? (691u + sizeof(_g4_t_v231)) : _g4_s123,
    _g4_s125 = (704u + sizeof(_g4_t_v232)) > _g4_s124 ? (704u + sizeof(_g4_t_v232)) : _g4_s124,
    _g4_s126 = (705u + sizeof(_g4_t_v233)) > _g4_s125 ? (705u + sizeof(_g4_t_v233)) : _g4_s125,
    _g4_s127 = (716u + sizeof(_g4_t_v234)) > _g4_s126 ? (716u + sizeof(_g4_t_v234)) : _g4_s126,
    _g4_s128 = (720u + sizeof(_g4_t_v235)) > _g4_s127 ? (720u + sizeof(_g4_t_v235)) : _g4_s127,
    _g4_s129 = (722u + sizeof(_g4_t_v236)) > _g4_s128 ? (722u + sizeof(_g4_t_v236)) : _g4_s128,
    _g4_s130 = (723u + sizeof(_g4_t_v237)) > _g4_s129 ? (723u + sizeof(_g4_t_v237)) : _g4_s129,
    _g4_s131 = (736u + sizeof(_g4_t_v238)) > _g4_s130 ? (736u + sizeof(_g4_t_v238)) : _g4_s130,
    _g4_s132 = (737u + sizeof(_g4_t_v239)) > _g4_s131 ? (737u + sizeof(_g4_t_v239)) : _g4_s131,
    _g4_s133 = (748u + sizeof(_g4_t_v240)) > _g4_s132 ? (748u + sizeof(_g4_t_v240)) : _g4_s132,
    _g4_s134 = (752u + sizeof(_g4_t_v241)) > _g4_s133 ? (752u + sizeof(_g4_t_v241)) : _g4_s133,
    _g4_s135 = (754u + sizeof(_g4_t_v242)) > _g4_s134 ? (754u + sizeof(_g4_t_v242)) : _g4_s134,
    _g4_s136 = (755u + sizeof(_g4_t_v243)) > _g4_s135 ? (755u + sizeof(_g4_t_v243)) : _g4_s135
  };
  alignas(16) uint8_t _g4_sf[_g4_s136];
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 8u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 8u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 8u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 8u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 8u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 8u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 8u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 8u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 8u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 8u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 8u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 8u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 8u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 8u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 24u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 36u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 48u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 60u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 72u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 84u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 96u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 108u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 120u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 132u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 144u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 156u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 168u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 180u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 192u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 193u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 204u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 208u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 210u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 211u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 224u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 225u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 236u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 240u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 242u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 243u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 256u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 257u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 268u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 272u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 274u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 275u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 288u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 289u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 300u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 304u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 306u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 307u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 320u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 321u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 332u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 336u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 338u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 339u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 352u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 353u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 364u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 368u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 370u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 371u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 384u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 385u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 396u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 400u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 402u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 403u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 416u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 417u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 428u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 432u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 434u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 435u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 448u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 449u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 460u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 464u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 466u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 467u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 480u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 481u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 492u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 496u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 498u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 499u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 512u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 513u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 524u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 528u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 530u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 531u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 544u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 545u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 556u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 560u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 562u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 563u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 576u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 577u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 588u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 592u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 594u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 595u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 608u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 609u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 620u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 624u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 626u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 627u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 640u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 641u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 652u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 656u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 658u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 659u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 672u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 673u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 684u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 688u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 690u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 691u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 704u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 705u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 716u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 720u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 722u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 723u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 736u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 737u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 748u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 752u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 754u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 755u);

  v1 = a1[1];
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(a1[1], 37) == 0 )
    v1 = 0;
  gameswf::ASTextFormat::ctor((int)(uintptr_t)(a1));
  v2 = *(float *)(v1 + 600);
  v122[0] = 2;
  v136 = 1;
  *(double *)&v122[2] = v2;
  v137 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v136, 10);
  v3 = (gameswf::Self *)&v137;
  if ( v136 == -1 )
    v3 = v138;
  gameswf::Strcpy_s(v3, &byte_9[2], (gameswf::Self *)"leftMargin");
  v139 = -1;
  v140 = 127;
  v141 |= 1u;
  v4 = 0;
  if ( *(uint8_t *)*a1 == 5 )
    v4 = *(uint32_t *)(*a1 + 4);
  v108 = v4;
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v136);
  v6 = v108;
  if ( StandardMemberID == -1
    || (v7 = G4_VCALL<int>(v108, 32, StandardMemberID, v122),
        v6 = v108,
        v7 == 0) )
  {
    G4_VCALL<void>(v6, 48, &v136, v122);
    if ( v136 != -1 )
      goto LABEL_11;
  }
  else if ( v136 != -1 )
  {
    goto LABEL_11;
  }
  if ( (v141 & 1) != 0 )
    gameswf::free_internal(v138);
LABEL_11:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v122);
  v8 = *(float *)(v1 + 608);
  v123[0] = 2;
  v142 = 1;
  *(double *)&v123[2] = v8;
  v143 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v142, 6);
  v9 = (gameswf::Self *)&v143;
  if ( v142 == -1 )
    v9 = v144;
  gameswf::Strcpy_s(v9, (char *)&loc_6 + 1, (gameswf::Self *)"indent");
  v145 = -1;
  v146 = 127;
  v147 |= 1u;
  v10 = 0;
  if ( *(uint8_t *)*a1 == 5 )
    v10 = *(uint32_t *)(*a1 + 4);
  v109 = v10;
  v11 = gameswf::getStandardMemberID((gameswf::Self *)&v142);
  v12 = v109;
  if ( v11 == -1
    || (v13 = G4_VCALL<int>(v109, 32, v11, v123), v12 = v109, v13 == 0) )
  {
    G4_VCALL<void>(v12, 48, &v142, v123);
    if ( v142 != -1 )
      goto LABEL_18;
  }
  else if ( v142 != -1 )
  {
    goto LABEL_18;
  }
  if ( (v147 & 1) != 0 )
    gameswf::free_internal(v144);
LABEL_18:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v123);
  v14 = *(float *)(v1 + 604);
  v124[0] = 2;
  v148 = 1;
  *(double *)&v124[2] = v14;
  v149 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v148, 11);
  v15 = (gameswf::Self *)&v149;
  if ( v148 == -1 )
    v15 = v150;
  gameswf::Strcpy_s(v15, &byte_9[3], (gameswf::Self *)"rightMargin");
  v151 = -1;
  v152 = 127;
  v153 |= 1u;
  v16 = 0;
  if ( *(uint8_t *)*a1 == 5 )
    v16 = *(uint32_t *)(*a1 + 4);
  v110 = v16;
  v17 = gameswf::getStandardMemberID((gameswf::Self *)&v148);
  v18 = v110;
  if ( v17 == -1
    || (v19 = G4_VCALL<int>(v110, 32, v17, v124), v18 = v110, v19 == 0) )
  {
    G4_VCALL<void>(v18, 48, &v148, v124);
    if ( v148 != -1 )
      goto LABEL_25;
  }
  else if ( v148 != -1 )
  {
    goto LABEL_25;
  }
  if ( (v153 & 1) != 0 )
    gameswf::free_internal(v150);
LABEL_25:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v124);
  v20 = *(float *)(v1 + 612);
  v125[0] = 2;
  v154 = 1;
  *(double *)&v125[2] = v20;
  v155 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v154, 7);
  v21 = (gameswf::Self *)&v155;
  if ( v154 == -1 )
    v21 = v156;
  gameswf::Strcpy_s(v21, byte_8, (gameswf::Self *)"leading");
  v157 = -1;
  v158 = 127;
  v159 |= 1u;
  v22 = 0;
  if ( *(uint8_t *)*a1 == 5 )
    v22 = *(uint32_t *)(*a1 + 4);
  v111 = v22;
  v23 = gameswf::getStandardMemberID((gameswf::Self *)&v154);
  v24 = v111;
  if ( v23 == -1
    || (v25 = G4_VCALL<int>(v111, 32, v23, v125), v24 = v111, v25 == 0) )
  {
    G4_VCALL<void>(v24, 48, &v154, v125);
    if ( v154 != -1 )
      goto LABEL_32;
  }
  else if ( v154 != -1 )
  {
    goto LABEL_32;
  }
  if ( (v159 & 1) != 0 )
    gameswf::free_internal(v156);
LABEL_32:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v125);
  v26 = *(float *)(v1 + 616);
  v126[0] = 2;
  v160 = 1;
  *(double *)&v126[2] = v26;
  v161 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v160, 13);
  v27 = (gameswf::Self *)&v161;
  if ( v160 == -1 )
    v27 = v162;
  gameswf::Strcpy_s(v27, &byte_9[5], (gameswf::Self *)"letterSpacing");
  v163 = -1;
  v164 = 127;
  v165 |= 1u;
  v28 = 0;
  if ( *(uint8_t *)*a1 == 5 )
    v28 = *(uint32_t *)(*a1 + 4);
  v112 = v28;
  v29 = gameswf::getStandardMemberID((gameswf::Self *)&v160);
  v30 = v112;
  if ( v29 == -1
    || (v31 = G4_VCALL<int>(v112, 32, v29, v126), v30 = v112, v31 == 0) )
  {
    G4_VCALL<void>(v30, 48, &v160, v126);
    if ( v160 != -1 )
      goto LABEL_39;
  }
  else if ( v160 != -1 )
  {
    goto LABEL_39;
  }
  if ( (v165 & 1) != 0 )
    gameswf::free_internal(v162);
LABEL_39:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v126);
  v32 = *(uint8_t *)(v1 + 587);
  v127[0] = 2;
  v33 = *(uint8_t *)(v1 + 584);
  v166 = 1;
  v167 = 0;
  *(double *)&v127[2] = (double)((*(uint8_t *)(v1 + 585) << 8)
                               | *(uint8_t *)(v1 + 586)
                               | (v33 << 16)
                               | (v32 << 24));
  gameswf::String::resize((gameswf::String::Self *)&v166, 5);
  v34 = (gameswf::Self *)&v167;
  if ( v166 == -1 )
    v34 = v168;
  gameswf::Strcpy_s(v34, (char *)&loc_6, (gameswf::Self *)"color");
  v169 = -1;
  v170 = 127;
  v171 |= 1u;
  v35 = 0;
  if ( *(uint8_t *)*a1 == 5 )
    v35 = *(uint32_t *)(*a1 + 4);
  v113 = v35;
  v36 = gameswf::getStandardMemberID((gameswf::Self *)&v166);
  v37 = v113;
  if ( v36 == -1
    || (v38 = G4_VCALL<int>(v113, 32, v36, v127), v37 = v113, v38 == 0) )
  {
    G4_VCALL<void>(v37, 48, &v166, v127);
    if ( v166 != -1 )
      goto LABEL_46;
  }
  else if ( v166 != -1 )
  {
    goto LABEL_46;
  }
  if ( (v171 & 1) != 0 )
    gameswf::free_internal(v168);
LABEL_46:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v127);
  v39 = *(float *)(v1 + 588);
  v128[0] = 2;
  v172 = 1;
  *(double *)&v128[2] = v39;
  v173 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v172, 4);
  v40 = (gameswf::Self *)&v173;
  if ( v172 == -1 )
    v40 = v174;
  gameswf::Strcpy_s(v40, (char *)&loc_4 + 1, (gameswf::Self *)"size");
  v175 = -1;
  v176 = 127;
  v177 |= 1u;
  v41 = 0;
  if ( *(uint8_t *)*a1 == 5 )
    v41 = *(uint32_t *)(*a1 + 4);
  v114 = v41;
  v42 = gameswf::getStandardMemberID((gameswf::Self *)&v172);
  v43 = v114;
  if ( v42 == -1
    || (v44 = G4_VCALL<int>(v114, 32, v42, v128), v43 = v114, v44 == 0) )
  {
    G4_VCALL<void>(v43, 48, &v172, v128);
    if ( v172 != -1 )
      goto LABEL_53;
  }
  else if ( v172 != -1 )
  {
    goto LABEL_53;
  }
  if ( (v177 & 1) != 0 )
    gameswf::free_internal(v174);
LABEL_53:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v128);
  v45 = *(uint32_t *)(v1 + 596);
  if ( v45 != 0 )
  {
    switch ( v45 )
    {
      case 2:
        v190 = 1;
        v191 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v190, 6);
        v88 = (gameswf::Self *)&v191;
        if ( v190 == -1 )
          v88 = v192;
        gameswf::Strcpy_s(v88, (char *)&loc_6 + 1, (gameswf::Self *)"center");
        v193 = -1;
        v194 = 127;
        v195 |= 1u;
        v89 = a1[3];
        v90 = *(uint32_t *)(v89 + 212);
        if ( v90 != 0 )
        {
          v91 = *(gameswf::Self **)(v89 + 208);
          if ( *((uint8_t *)v91 + 2) == 0 )
          {
            v77 = (*(uint16_t *)v91)-- == 1;
            if ( v77 )
              gameswf::free_internal(v91);
            *(uint32_t *)(v89 + 208) = 0;
            *(uint32_t *)(v89 + 212) = 0;
            v90 = 0;
          }
        }
        v92 = gameswf::PermanentStringCache::get((int **)(v90 + 48), (const gameswf::String::Self *)&v190);
        LOWORD(v130[0]) = 0;
        v130[1] = nullptr;
        gameswf::ASValue::setString(v130, (const gameswf::String::Self *)v92);
        v196 = 1;
        v197 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v196, 5);
        v93 = (gameswf::Self *)&v197;
        if ( v196 == -1 )
          v93 = v198;
        gameswf::Strcpy_s(v93, (char *)&loc_6, (gameswf::Self *)"align");
        v94 = 0;
        v199 = -1;
        v200 = 127;
        v201 |= 1u;
        if ( *(uint8_t *)*a1 == 5 )
          v94 = *(uint32_t *)(*a1 + 4);
        v120 = v94;
        v95 = gameswf::getStandardMemberID((gameswf::Self *)&v196);
        v96 = v120;
        if ( v95 == -1
          || (v97 = G4_VCALL<int>(v120, 32, v95, v130),
              v96 = v120,
              v97 == 0) )
        {
          G4_VCALL<void>(v96, 48, &v196, v130);
        }
        if ( v196 == -1 && (v201 & 1) != 0 )
          gameswf::free_internal(v198);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v130);
        if ( v190 == -1 && (v195 & 1) != 0 )
          gameswf::free_internal(v192);
        break;
      case 1:
        v202 = 1;
        v203 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v202, 5);
        v98 = (gameswf::Self *)&v203;
        if ( v202 == -1 )
          v98 = v204;
        gameswf::Strcpy_s(v98, (char *)&loc_6, (gameswf::Self *)"right");
        v205 = -1;
        v206 = 127;
        v207 |= 1u;
        v99 = a1[3];
        v100 = *(uint32_t *)(v99 + 212);
        if ( v100 != 0 )
        {
          v101 = *(gameswf::Self **)(v99 + 208);
          if ( *((uint8_t *)v101 + 2) == 0 )
          {
            v77 = (*(uint16_t *)v101)-- == 1;
            if ( v77 )
              gameswf::free_internal(v101);
            *(uint32_t *)(v99 + 208) = 0;
            *(uint32_t *)(v99 + 212) = 0;
            v100 = 0;
          }
        }
        v102 = gameswf::PermanentStringCache::get((int **)(v100 + 48), (const gameswf::String::Self *)&v202);
        LOWORD(v131[0]) = 0;
        v131[1] = nullptr;
        gameswf::ASValue::setString(v131, (const gameswf::String::Self *)v102);
        v208 = 1;
        v209 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v208, 5);
        v103 = (gameswf::Self *)&v209;
        if ( v208 == -1 )
          v103 = v210;
        gameswf::Strcpy_s(v103, (char *)&loc_6, (gameswf::Self *)"align");
        v104 = 0;
        v211 = -1;
        v212 = 127;
        v213 |= 1u;
        if ( *(uint8_t *)*a1 == 5 )
          v104 = *(uint32_t *)(*a1 + 4);
        v121 = v104;
        v105 = gameswf::getStandardMemberID((gameswf::Self *)&v208);
        v106 = v121;
        if ( v105 == -1
          || (v107 = G4_VCALL<int>(v121, 32, v105, v131),
              v106 = v121,
              v107 == 0) )
        {
          G4_VCALL<void>(v106, 48, &v208, v131);
        }
        if ( v208 == -1 && (v213 & 1) != 0 )
          gameswf::free_internal(v210);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v131);
        if ( v202 == -1 && (v207 & 1) != 0 )
          gameswf::free_internal(v204);
        break;
      case 3:
        v214 = 1;
        v215 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v214, 7);
        v78 = (gameswf::Self *)&v215;
        if ( v214 == -1 )
          v78 = v216;
        gameswf::Strcpy_s(v78, byte_8, (gameswf::Self *)"justify");
        v217 = -1;
        v218 = 127;
        v219 |= 1u;
        v79 = a1[3];
        v80 = *(uint32_t *)(v79 + 212);
        if ( v80 != 0 )
        {
          v81 = *(gameswf::Self **)(v79 + 208);
          if ( *((uint8_t *)v81 + 2) == 0 )
          {
            v77 = (*(uint16_t *)v81)-- == 1;
            if ( v77 )
              gameswf::free_internal(v81);
            *(uint32_t *)(v79 + 208) = 0;
            *(uint32_t *)(v79 + 212) = 0;
            v80 = 0;
          }
        }
        v82 = gameswf::PermanentStringCache::get((int **)(v80 + 48), (const gameswf::String::Self *)&v214);
        LOWORD(v132[0]) = 0;
        v132[1] = nullptr;
        gameswf::ASValue::setString(v132, (const gameswf::String::Self *)v82);
        v220 = 1;
        v221 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v220, 5);
        v83 = (gameswf::Self *)&v221;
        if ( v220 == -1 )
          v83 = v222;
        gameswf::Strcpy_s(v83, (char *)&loc_6, (gameswf::Self *)"align");
        v84 = 0;
        v223 = -1;
        v224 = 127;
        v225 |= 1u;
        if ( *(uint8_t *)*a1 == 5 )
          v84 = *(uint32_t *)(*a1 + 4);
        v119 = v84;
        v85 = gameswf::getStandardMemberID((gameswf::Self *)&v220);
        v86 = v119;
        if ( v85 == -1
          || (v87 = G4_VCALL<int>(v119, 32, v85, v132),
              v86 = v119,
              v87 == 0) )
        {
          G4_VCALL<void>(v86, 48, &v220, v132);
        }
        if ( v220 == -1 && (v225 & 1) != 0 )
          gameswf::free_internal(v222);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v132);
        if ( v214 == -1 && (v219 & 1) != 0 )
          gameswf::free_internal(v216);
        break;
      default:
        break;
    }
  }
  else
  {
    v178 = 1;
    v179 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v178, 4);
    v67 = (gameswf::Self *)&v179;
    if ( v178 == -1 )
      v67 = v180;
    gameswf::Strcpy_s(v67, (char *)&loc_4 + 1, (gameswf::Self *)"left");
    v181 = -1;
    v182 = 127;
    v183 |= 1u;
    v68 = a1[3];
    v69 = *(uint32_t *)(v68 + 212);
    if ( v69 != 0 )
    {
      v70 = *(gameswf::Self **)(v68 + 208);
      if ( *((uint8_t *)v70 + 2) == 0 )
      {
        v77 = (*(uint16_t *)v70)-- == 1;
        if ( v77 )
          gameswf::free_internal(v70);
        *(uint32_t *)(v68 + 208) = 0;
        *(uint32_t *)(v68 + 212) = 0;
        v69 = 0;
      }
    }
    v71 = gameswf::PermanentStringCache::get((int **)(v69 + 48), (const gameswf::String::Self *)&v178);
    LOWORD(v129[0]) = 0;
    v129[1] = nullptr;
    gameswf::ASValue::setString(v129, (const gameswf::String::Self *)v71);
    v184 = 1;
    v185 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v184, 5);
    v72 = (gameswf::Self *)&v185;
    if ( v184 == -1 )
      v72 = v186;
    gameswf::Strcpy_s(v72, (char *)&loc_6, (gameswf::Self *)"align");
    v73 = 0;
    v187 = -1;
    v188 = 127;
    v189 |= 1u;
    if ( *(uint8_t *)*a1 == 5 )
      v73 = *(uint32_t *)(*a1 + 4);
    v117 = v73;
    v74 = gameswf::getStandardMemberID((gameswf::Self *)&v184);
    v75 = v117;
    if ( v74 == -1
      || (v76 = G4_VCALL<int>(v117, 32, v74, v129),
          v75 = v117,
          v76 == 0) )
    {
      G4_VCALL<void>(v75, 48, &v184, v129);
    }
    if ( v184 == -1 && (v189 & 1) != 0 )
      gameswf::free_internal(v186);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v129);
    if ( v178 == -1 && (v183 & 1) != 0 )
      gameswf::free_internal(v180);
  }
  v46 = (const gameswf::String::Self *)(*(uint32_t *)(v1 + 592) + 44);
  v47 = a1[3];
  v48 = *(uint32_t *)(v47 + 212);
  if ( v48 != 0 )
  {
    v49 = *(gameswf::Self **)(v47 + 208);
    if ( *((uint8_t *)v49 + 2) == 0 )
    {
      v77 = (*(uint16_t *)v49)-- == 1;
      if ( v77 )
      {
        v118 = v46;
        gameswf::free_internal(v49);
        v46 = v118;
      }
      *(uint32_t *)(v47 + 208) = 0;
      *(uint32_t *)(v47 + 212) = 0;
      v48 = 0;
    }
  }
  v50 = gameswf::PermanentStringCache::get((int **)(v48 + 48), v46);
  LOWORD(v133[0]) = 0;
  v133[1] = nullptr;
  gameswf::ASValue::setString(v133, (const gameswf::String::Self *)v50);
  v226 = 1;
  v227 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v226, 4);
  v51 = (gameswf::Self *)&v227;
  if ( v226 == -1 )
    v51 = v228;
  gameswf::Strcpy_s(v51, (char *)&loc_4 + 1, (gameswf::Self *)"font");
  v52 = 0;
  v229 = -1;
  v230 = 127;
  v231 |= 1u;
  if ( *(uint8_t *)*a1 == 5 )
    v52 = *(uint32_t *)(*a1 + 4);
  v115 = v52;
  v53 = gameswf::getStandardMemberID((gameswf::Self *)&v226);
  v54 = v115;
  if ( v53 == -1
    || (v55 = G4_VCALL<int>(v115, 32, v53, v133),
        v54 = v115,
        v55 == 0) )
  {
    G4_VCALL<void>(v54, 48, &v226, v133);
    if ( v226 != -1 )
      goto LABEL_66;
  }
  else if ( v226 != -1 )
  {
    goto LABEL_66;
  }
  if ( (v231 & 1) != 0 )
    gameswf::free_internal(v228);
LABEL_66:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v133);
  v56 = *(uint32_t *)(v1 + 592);
  v134[0] = 1;
  v134[1] = 0;
  v232 = 1;
  v233 = 0;
  v134[4] = *(uint8_t *)(v56 + 73);
  gameswf::String::resize((gameswf::String::Self *)&v232, 4);
  v57 = (gameswf::Self *)&v233;
  if ( v232 == -1 )
    v57 = v234;
  gameswf::Strcpy_s(v57, (char *)&loc_4 + 1, (gameswf::Self *)"bold");
  v235 = -1;
  v236 = 127;
  v237 |= 1u;
  v58 = 0;
  if ( *(uint8_t *)*a1 == 5 )
    v58 = *(uint32_t *)(*a1 + 4);
  v116 = v58;
  v59 = gameswf::getStandardMemberID((gameswf::Self *)&v232);
  v60 = v116;
  if ( v59 == -1
    || (v61 = G4_VCALL<int>(v116, 32, v59, v134), v60 = v116, v61 == 0) )
  {
    G4_VCALL<void>(v60, 48, &v232, v134);
    if ( v232 != -1 )
      goto LABEL_73;
  }
  else if ( v232 != -1 )
  {
    goto LABEL_73;
  }
  if ( (v237 & 1) != 0 )
    gameswf::free_internal(v234);
LABEL_73:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v134);
  v62 = *(uint32_t *)(v1 + 592);
  v135[0] = 1;
  v238 = 1;
  v239 = 0;
  LOBYTE(v135[2]) = *(uint8_t *)(v62 + 72);
  gameswf::String::resize((gameswf::String::Self *)&v238, 6);
  v63 = (gameswf::Self *)&v239;
  if ( v238 == -1 )
    v63 = v240;
  v64 = 0;
  gameswf::Strcpy_s(v63, (char *)&loc_6 + 1, (gameswf::Self *)"italic");
  v241 = -1;
  v242 = 127;
  v243 |= 1u;
  if ( *(uint8_t *)*a1 == 5 )
    v64 = *(uint32_t *)(*a1 + 4);
  v65 = gameswf::getStandardMemberID((gameswf::Self *)&v238);
  if ( v65 == -1 || G4_VCALL<uint8_t>(v64, 32, v65, v135) == 0 )
  {
    G4_VCALL<void>(v64, 48, &v238, v135);
    if ( v238 != -1 )
      return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v135);
  }
  else if ( v238 != -1 )
  {
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v135);
  }
  if ( (v243 & 1) == 0 )
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v135);
  gameswf::free_internal(v240);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v135);
}


