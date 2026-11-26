#include "Core/Utils/DecompTypes.h"
#include "gameswf_DisplayList.h"

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::find_display_index  (binary VA: 0x108dc00)
// Original: gameswf::DisplayList::find_display_index
// ----------------------------------------------------------------------------
int gameswf::DisplayList::find_display_index(gameswf::DisplayList::Self *self, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v9 = *((uint32_t *)self + 1);
  result = 0;
  if ( v9 != 0 )
  {
    v3 = v9 >> 1;
    v4 = *(uint32_t *)self;
    for ( result = v9 >> 1; ; result -= v3 )
    {
      while ( 1 )
      {
        v3 >>= 1;
        if ( v3 <= 0 )
          v3 = 1;
        v5 = *(uint16_t *)(*(uint32_t *)(v4 + 4 * result) + 140);
        if ( v5 >= a2 )
          break;
        if ( v9 - 1 == result )
          return *((uint32_t *)self + 1);
        result += v3;
      }
      if ( v5 <= a2 )
        break;
      if ( result == 0 || a2 > *(uint16_t *)(*(uint32_t *)(v4 + 4 * result - 4) + 140) )
        return result;
    }
    if ( result != 0 )
    {
      v6 = result - 1;
      if ( a2 <= *(uint16_t *)(*(uint32_t *)(v4 + 4 * (result - 1)) + 140) )
      {
        v7 = 4 * result - 8;
        while ( 1 )
        {
          result = v6;
          if ( v6 == 0 )
            break;
          v8 = *(uint32_t *)(v4 + v7);
          v7 -= 4;
          if ( a2 > *(uint16_t *)(v8 + 140) )
            break;
          --v6;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::get_display_index  (binary VA: 0x108dce0)
// Original: gameswf::DisplayList::get_display_index
// ----------------------------------------------------------------------------
int gameswf::DisplayList::get_display_index(gameswf::DisplayList::Self *self, int a2)
{
  int result;

  result = gameswf::DisplayList::find_display_index(self, a2);
  if ( result >= *((uint32_t *)self + 1) )
    return -1;
  if ( *(uint16_t *)(*(uint32_t *)(*(uint32_t *)self + 4 * result) + 140) != a2 )
    return -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::getCharacterAtDepth  (binary VA: 0x108dd50)
// Original: gameswf::DisplayList::getCharacterAtDepth
// ----------------------------------------------------------------------------
int gameswf::DisplayList::getCharacterAtDepth(gameswf::DisplayList::Self *self, int a2)
{
  int display_index;
  int v3;

  display_index = gameswf::DisplayList::get_display_index(self, a2);
  v3 = 0;
  if ( display_index != -1 )
    return *(uint32_t *)(*(uint32_t *)self + 4 * display_index);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::getCharacterByName  (binary VA: 0x108dda0)
// Original: gameswf::DisplayList::getCharacterByName
// ----------------------------------------------------------------------------
int gameswf::DisplayList::getCharacterByName(gameswf::DisplayList::Self *self, const gameswf::String::Self *a2)
{
  int v2;
  int v3;
  const char *s2;
  int v5;
  const char *v7;
  int v8;
  const char *s1;
  int v10;
  int v11;
  int v12;

  v2 = 0;
  if ( *((int *)self + 1) > 0 )
  {
    v3 = 0;
    v10 = *(uint32_t *)self;
    if ( *(uint8_t *)a2 != 0xFF )
    {
      v11 = *((uint32_t *)self + 1);
      s2 = (char *)a2 + 1;
      while ( 1 )
      {
        v2 = *(uint32_t *)(v10 + 4 * v3);
        v5 = *(uint32_t *)(v2 + 60);
        if ( *(uint8_t *)v5 == 0xFF )
        {
          if ( strcmp(*(const char **)(v5 + 12), s2) == 0 )
            return v2;
        }
        else if ( strcmp((const char *)(v5 + 1), s2) == 0 )
        {
          return v2;
        }
        if ( ++v3 == v11 )
          return 0;
      }
    }
    v12 = *((uint32_t *)self + 1);
    v7 = *((const char **)a2 + 3);
    while ( 1 )
    {
      v2 = *(uint32_t *)(v10 + 4 * v3);
      v8 = *(uint32_t *)(v2 + 60);
      s1 = (const char *)(v8 + 1);
      if ( *(uint8_t *)v8 == 0xFF )
        s1 = *(const char **)(v8 + 12);
      if ( strcmp(s1, v7) == 0 )
        break;
      if ( ++v3 == v12 )
        return 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::getIndexOf  (binary VA: 0x108de80)
// Original: gameswf::DisplayList::getIndexOf
// ----------------------------------------------------------------------------
int gameswf::DisplayList::getIndexOf(gameswf::DisplayList::Self *self, const gameswf::Character::Self *a2)
{
  int result;
  int v3;

  result = -1;
  v3 = *((uint32_t *)self + 1);
  if ( v3 > 0 )
  {
    result = 0;
    if ( a2 != **(const gameswf::Character::Self ***)self )
    {
      while ( ++result != v3 )
      {
        if ( a2 == *(const gameswf::Character::Self **)(*(uint32_t *)self + 4 * result) )
          return result;
      }
      return -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::remove  (binary VA: 0x108dec0)
// Original: gameswf::DisplayList::remove
// ----------------------------------------------------------------------------
int gameswf::DisplayList::remove(gameswf::DisplayList::Self *self, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, gameswf::RefCounted::Self *a10, int a11, int a12, int a13, int a14, int a15, int a16, int16_t a17)
{
  gameswf::RefCounted::Self **v17;
  gameswf::RefCounted::Self *v18;
  int v19;
  gameswf::RefCounted::Self *v20;
  int v21;
  gameswf::RefCounted::Self *v22;
  gameswf::ASObject::Self *v23;
  gameswf::Self *v24;
  int MemberIndex;
  gameswf::Self *v26;
  int v27;
  gameswf::RefCounted::Self **v28;
  char *v29;
  gameswf::Self *v30;
  bool v31;
  gameswf::Self *v32;
  int v33;
  int i;
  uint32_t *v35;
  gameswf::RefCounted::Self *v37;
  int v38;
  gameswf::Self *v39;
  int Event;
  gameswf::RefCounted::Self *v63;
  gameswf::RefCounted::Self *v64;
  int v65;
  const gameswf::String::Self *v66;
  const gameswf::String::Self *v67;
  gameswf::ASObject::Self *v68;
  int v69;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef char *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef void (*_g4_t_v51)(gameswf::RefCounted::Self *, int);
  typedef gameswf::RefCounted::Self *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint32_t _g4_t_v55[7];
  typedef char _g4_t_v56;
  typedef char _g4_t_v57;
  typedef gameswf::Self *_g4_t_v58;
  typedef int16_t _g4_t_v59;
  typedef char _g4_t_v60;
  typedef char _g4_t_v61;
  typedef int _g4_t_v62;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v41)) > _g4_s0 ? (8u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v42)) > _g4_s1 ? (12u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v43)) > _g4_s2 ? (16u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v44)) > _g4_s3 ? (20u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v45)) > _g4_s4 ? (24u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v46)) > _g4_s5 ? (28u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v47)) > _g4_s6 ? (32u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v48)) > _g4_s7 ? (36u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v49)) > _g4_s8 ? (40u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v50)) > _g4_s9 ? (44u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v51)) > _g4_s10 ? (52u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v52)) > _g4_s11 ? (56u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v53)) > _g4_s12 ? (60u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v54)) > _g4_s13 ? (64u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v55)) > _g4_s14 ? (68u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v56)) > _g4_s15 ? (96u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (97u + sizeof(_g4_t_v57)) > _g4_s16 ? (97u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v58)) > _g4_s17 ? (108u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v59)) > _g4_s18 ? (112u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (114u + sizeof(_g4_t_v60)) > _g4_s19 ? (114u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (115u + sizeof(_g4_t_v61)) > _g4_s20 ? (115u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v62)) > _g4_s21 ? (132u + sizeof(_g4_t_v62)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 96u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 97u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 108u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 112u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 114u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 115u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 132u);

  v17 = (gameswf::RefCounted::Self **)(*(uint32_t *)self + 4 * a2);
  v52 = *v17;
  if ( *(uint8_t *)(*((uint32_t *)*v17 + 4) + 232) == 0 )
  {
    G4_VCALL<void>(*v17, 172);
    v52 = *v17;
  }
  if ( v52 != nullptr )
    gameswf::RefCounted::addRef(v52);
  if ( *(uint8_t *)(*((uint32_t *)v52 + 4) + 232) != 0 )
  {
    v38 = *(uint32_t *)v52;
    v56 = 1;
    v57 = 0;
    v49 = &v56;
    v51 = *(void (**)(gameswf::RefCounted::Self *, int))(v38 + 104);
    gameswf::String::resize((gameswf::String::Self *)&v56, 7);
    v39 = (gameswf::Self *)&v57;
    if ( v56 == -1 )
      v39 = v58;
    gameswf::Strcpy_s(v39, byte_8, (gameswf::Self *)"removed");
    v59 = -1;
    v60 = 127;
    v61 |= 1u;
    Event = gameswf::AS3Engine::getEvent(
              (gameswf::AS3Engine::Self *)(*((uint32_t *)v52 + 4) + 236),
              (const gameswf::String::Self *)&v56);
    v51(v52, Event);
    if ( v56 == -1 && (v61 & 1) != 0 )
      gameswf::free_internal(v58);
    G4_VCALL<void>(v52, 348, 0);
  }
  v18 = *v17;
  v19 = *(uint32_t *)*v17;
  v55[0] = 21;
  v55[1] = 0;
  (*(void (**)(gameswf::RefCounted::Self *, uint32_t *, int, int, int, int, int, int, int, int, char *, int, int, void (*)(gameswf::RefCounted::Self *, int), gameswf::RefCounted::Self *, int, int))(v19 + 64))(
    v18,
    v55,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    4 * a2,
    v51,
    v52,
    v53,
    v54);
  v20 = *v17;
  v21 = *(uint32_t *)*v17;
  a15 = 11;
  a16 = 0;
  (*(void (**)(gameswf::RefCounted::Self *, int *))(v21 + 64))(v20, &a15);
  *((uint16_t *)*v17 + 70) = 0;
  v22 = *v17;
  v67 = *((const gameswf::String::Self **)*v17 + 15);
  v23 = *((gameswf::ASObject::Self **)*v17 + 14);
  if ( v23 != nullptr )
  {
    v24 = *((gameswf::Self **)v22 + 13);
    if ( *((uint8_t *)v24 + 2) == 0 )
    {
      v31 = (*(uint16_t *)v24)-- == 1;
      if ( v31 )
      {
        v64 = v22;
        v62 = 0;
        gameswf::free_internal(v24);
        v22 = v64;
      }
      *((uint32_t *)v22 + 13) = 0;
      *((uint32_t *)v22 + 14) = 0;
      v23 = nullptr;
    }
  }
  MemberIndex = gameswf::ASObject::getMemberIndex(v23, v67);
  if ( MemberIndex != -1 )
  {
    a17 = 0;
    v63 = *v17;
    v66 = *((const gameswf::String::Self **)*v17 + 15);
    v68 = *((gameswf::ASObject::Self **)*v17 + 14);
    if ( v68 != nullptr )
    {
      v26 = *((gameswf::Self **)v63 + 13);
      if ( *((uint8_t *)v26 + 2) == 0 )
      {
        v31 = (*(uint16_t *)v26)-- == 1;
        if ( v31 )
        {
          v65 = MemberIndex;
          v62 = 0;
          gameswf::free_internal(v26);
          MemberIndex = v65;
        }
        v68 = nullptr;
        *((uint32_t *)v63 + 13) = 0;
        *((uint32_t *)v63 + 14) = 0;
      }
    }
    gameswf::ASObject::setMemberAt(v68, MemberIndex, v66, (const gameswf::ASValue::Self *)&a17);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&a17);
  }
  if ( *v17 != nullptr )
  {
    gameswf::RefCounted::dropRef(*v17);
    *v17 = nullptr;
  }
  v27 = *((uint32_t *)self + 1);
  v28 = *(gameswf::RefCounted::Self ***)self;
  if ( v27 == 1 )
  {
    v37 = *v28;
    if ( v37 != nullptr )
      gameswf::RefCounted::dropRef(v37);
    *((uint32_t *)self + 1) = 0;
  }
  else
  {
    v29 = (char *)v28 + a8;
    if ( *(gameswf::RefCounted::Self **)((char *)v28 + a8) != nullptr )
    {
      gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)((char *)v28 + a8));
      v28 = *(gameswf::RefCounted::Self ***)self;
      v27 = *((uint32_t *)self + 1);
      v29 = (char *)(*(uint32_t *)self + a8);
    }
    memmove(v29, &v28[a2 + 1], 4 * (v27 - 1 - a2));
    --*((uint32_t *)self + 1);
  }
  v30 = *((gameswf::Self **)a10 + 13);
  *((uint32_t *)a10 + 14) = 0;
  if ( v30 != nullptr )
  {
    v31 = (*(uint16_t *)v30)-- == 1;
    if ( v31 )
    {
      v62 = 0;
      gameswf::free_internal(v30);
    }
    *((uint32_t *)a10 + 13) = 0;
  }
  v32 = *((gameswf::Self **)self + 4);
  if ( v32 != nullptr )
  {
    v69 = *((uint32_t *)v32 + 1);
    if ( v69 >= 0 )
    {
      v33 = 8;
      for ( i = 0; i <= v69; ++i )
      {
        v35 = (uint32_t *)((char *)v32 + v33);
        if ( *(uint32_t *)((char *)v32 + v33) != -2 )
        {
          *v35 = -2;
          v35[1] = 0;
          v32 = *((gameswf::Self **)self + 4);
        }
        v33 += 16;
      }
      v69 = *((uint32_t *)v32 + 1);
    }
    v62 = 16 * v69 + 24;
    gameswf::free_internal(v32);
    *((uint32_t *)self + 4) = 0;
  }
  return gameswf::RefCounted::dropRef(a10);
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::addDisplayObject  (binary VA: 0x108e2f0)
// Original: gameswf::DisplayList::addDisplayObject
// ----------------------------------------------------------------------------
int gameswf::DisplayList::addDisplayObject(gameswf::DisplayList::Self *self, gameswf::Character::Self *a2, int a3, bool a4, const gameswf::CxForm::Self *a5, const gameswf::Matrix::Self *a6, const gameswf::Effect::Self *a7, float a8, uint16_t a9, int a10, int a11, int a12, int a13, int a14, int a15, char a16, int a17, int a18, gameswf::Self *a19, int a20)
{
  int display_index;
  const gameswf::CxForm::Self *v21;
  const gameswf::CxForm::Self *v22;
  gameswf::Character::Self *v23;
  gameswf::Self *v24;
  const gameswf::Matrix::Self *v25;
  gameswf::Character::Self *v26;
  gameswf::Self *v27;
  const gameswf::Effect::Self *v28;
  gameswf::Character::Self *v29;
  gameswf::Self *v30;
  int v31;
  int v32;
  char *v33;
  char *v34;
  uint32_t *v35;
  gameswf::ASObject::Self *v36;
  const gameswf::String::Self *v37;
  gameswf::Self *v38;
  const gameswf::CxForm::Self *MemberIndex;
  gameswf::ASObject::Self *v40;
  const gameswf::String::Self *v41;
  int v42;
  gameswf::Self *v43;
  int v44;
  gameswf::Self *v45;
  int Event;
  void (*v47)(gameswf::Character::Self *, uint32_t);
  int v48;
  gameswf::Self *v49;
  int v51;
  bool v52;
  int v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef const gameswf::CxForm::Self *_g4_t_v62;
  typedef const gameswf::CxForm::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef gameswf::Self *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef char *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef void (*_g4_t_v73)(gameswf::Character::Self *, int, int, int, int, int, int, int, int, const gameswf::CxForm::Self *, int, int, gameswf::Self *, int, char *, uint32_t, int, int, gameswf::Character::Self *, int, int, int, int, gameswf::Self *, int, int, int, int);
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef gameswf::Character::Self *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef gameswf::Self *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v54)) > _g4_s0 ? (4u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v55)) > _g4_s1 ? (4u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v56)) > _g4_s2 ? (8u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v57)) > _g4_s3 ? (12u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v58)) > _g4_s4 ? (16u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v59)) > _g4_s5 ? (20u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v60)) > _g4_s6 ? (24u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v61)) > _g4_s7 ? (28u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v62)) > _g4_s8 ? (32u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v63)) > _g4_s9 ? (32u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v64)) > _g4_s10 ? (36u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v65)) > _g4_s11 ? (40u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v66)) > _g4_s12 ? (44u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v67)) > _g4_s13 ? (48u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v68)) > _g4_s14 ? (52u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v69)) > _g4_s15 ? (52u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v70)) > _g4_s16 ? (52u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v71)) > _g4_s17 ? (56u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v72)) > _g4_s18 ? (56u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v73)) > _g4_s19 ? (56u + sizeof(_g4_t_v73)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v74)) > _g4_s20 ? (60u + sizeof(_g4_t_v74)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v75)) > _g4_s21 ? (64u + sizeof(_g4_t_v75)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v76)) > _g4_s22 ? (68u + sizeof(_g4_t_v76)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v77)) > _g4_s23 ? (72u + sizeof(_g4_t_v77)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v78)) > _g4_s24 ? (76u + sizeof(_g4_t_v78)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v79)) > _g4_s25 ? (80u + sizeof(_g4_t_v79)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v80)) > _g4_s26 ? (84u + sizeof(_g4_t_v80)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v81)) > _g4_s27 ? (88u + sizeof(_g4_t_v81)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v82)) > _g4_s28 ? (92u + sizeof(_g4_t_v82)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v83)) > _g4_s29 ? (96u + sizeof(_g4_t_v83)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v84)) > _g4_s30 ? (100u + sizeof(_g4_t_v84)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v85)) > _g4_s31 ? (104u + sizeof(_g4_t_v85)) : _g4_s31,
    _g4_s33 = (112u + sizeof(_g4_t_v86)) > _g4_s32 ? (112u + sizeof(_g4_t_v86)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 32u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 36u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 40u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 44u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 52u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 52u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 56u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 56u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 56u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 72u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 84u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 88u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 92u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 96u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 100u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 104u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 112u);

  HIWORD(v65) = a9;
  v64 = *((uint32_t *)self + 1);
  LOBYTE(v61) = a4;
  display_index = gameswf::DisplayList::find_display_index(self, a3);
  v60 = display_index;
  v21 = a5;
  if ( a4 )
  {
    if ( v64 <= display_index || display_index < 0 )
    {
      v67 = 4 * display_index;
    }
    else
    {
      v67 = 4 * display_index;
      if ( a3 == *(uint16_t *)(*(uint32_t *)(*(uint32_t *)self + 4 * display_index) + 140) )
      {
        gameswf::DisplayList::remove(
          self,
          display_index,
          v54,
          v56,
          v57,
          v58,
          v59,
          display_index,
          v61,
          (gameswf::RefCounted::Self *)(a5),
          v64,
          v65,
          (int)(uintptr_t)(v66),
          v67,
          v68,
          v71,
          v74);
        v21 = v63;
      }
    }
  }
  else
  {
    v67 = 4 * display_index;
  }
  *((uint16_t *)a2 + 70) = a3;
  v62 = v21;
  gameswf::RefCounted::addRef(a2);
  *((uint16_t *)a2 + 70) = a3;
  v22 = v62;
  if ( v62 == nullptr )
    v22 = (const gameswf::CxForm::Self *)gameswf::CxForm::identity;
  if ( v22 != *((const gameswf::CxForm::Self **)a2 + 16) )
  {
    v23 = *((gameswf::Character::Self **)a2 + 14);
    *((uint32_t *)a2 + 16) = (uint32_t)(uintptr_t)(v22);
    *((uint8_t *)a2 + 146) = 1;
    if ( v23 != nullptr )
    {
      v24 = *((gameswf::Self **)a2 + 13);
      if ( *((uint8_t *)v24 + 2) != 0 )
      {
        gameswf::Character::invalidateBitmapCache(v23);
      }
      else
      {
        v52 = (*(uint16_t *)v24)-- == 1;
        if ( v52 )
          gameswf::free_internal(v24);
        *((uint32_t *)a2 + 13) = 0;
        *((uint32_t *)a2 + 14) = 0;
      }
    }
  }
  v25 = a6;
  if ( a6 == nullptr )
    v25 = (const gameswf::Matrix::Self *)gameswf::Matrix::identity;
  if ( v25 != *((const gameswf::Matrix::Self **)a2 + 17) )
  {
    v26 = *((gameswf::Character::Self **)a2 + 14);
    *((uint32_t *)a2 + 17) = (uint32_t)(uintptr_t)(v25);
    *((uint8_t *)a2 + 145) = 1;
    *((uint8_t *)a2 + 147) = 1;
    if ( v26 != nullptr )
    {
      v27 = *((gameswf::Self **)a2 + 13);
      if ( *((uint8_t *)v27 + 2) != 0 )
      {
        gameswf::Character::invalidateBitmapCache(v26);
      }
      else
      {
        v52 = (*(uint16_t *)v27)-- == 1;
        if ( v52 )
          gameswf::free_internal(v27);
        *((uint32_t *)a2 + 13) = 0;
        *((uint32_t *)a2 + 14) = 0;
      }
    }
  }
  *((float *)a2 + 34) = a8;
  *((uint16_t *)a2 + 71) = HIWORD(v65);
  v28 = a7;
  if ( a7 == nullptr )
    v28 = (const gameswf::Effect::Self *)&gameswf::Effect::identity;
  if ( v28 != *((const gameswf::Effect::Self **)a2 + 18) )
  {
    v29 = *((gameswf::Character::Self **)a2 + 14);
    *((uint32_t *)a2 + 18) = (uint32_t)(uintptr_t)(v28);
    if ( v29 != nullptr )
    {
      v30 = *((gameswf::Self **)a2 + 13);
      if ( *((uint8_t *)v30 + 2) != 0 )
      {
        gameswf::Character::invalidateBitmapCache(v29);
      }
      else
      {
        v52 = (*(uint16_t *)v30)-- == 1;
        if ( v52 )
          gameswf::free_internal(v30);
        *((uint32_t *)a2 + 13) = 0;
        *((uint32_t *)a2 + 14) = 0;
      }
    }
  }
  v72 = *((uint32_t *)self + 1);
  v31 = v72 + 1;
  if ( v72 == -1 || (v32 = *((uint32_t *)self + 2), v31 <= v32) || *((uint32_t *)self + 3) != 0 )
  {
    v33 = *(char **)self;
  }
  else
  {
    v51 = v31 + (v31 >> 1);
    v52 = v51 == 0;
    v70 = v51;
    *((uint32_t *)self + 2) = v51;
    v53 = *(uint32_t *)self;
    if ( v52 )
    {
      if ( v53 != 0 )
      {
        v62 = (const gameswf::CxForm::Self *)(v72 + 1);
        gameswf::free_internal(*(gameswf::Self **)self);
        v31 = v72 + 1;
      }
      *(uint32_t *)self = 0;
      v33 = nullptr;
    }
    else
    {
      v66 = *(gameswf::Self **)self;
      v62 = (const gameswf::CxForm::Self *)(v72 + 1);
      if ( v53 != 0 )
      {
        v56 = 0;
        v33 = (char *)gameswf::realloc_internal(v66, 4 * v70, 4 * v32);
      }
      else
      {
        v33 = (char *)gameswf::malloc_internal(4 * v70);
      }
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v33);
      v31 = v72 + 1;
    }
  }
  v34 = &v33[4 * v72];
  v69 = v34;
  if ( v34 != nullptr )
    *(uint32_t *)v34 = 0;
  *((uint32_t *)self + 1) = v31;
  if ( v60 < v72 )
    memmove((void *)(*(uint32_t *)self + 4 * v60 + 4), (const void *)(*(uint32_t *)self + v67), 4 * (v72 - v60));
  v35 = (uint32_t *)(*(uint32_t *)self + v67);
  if ( v35 != nullptr )
  {
    *v35 = (uint32_t)(uintptr_t)(a2);
    gameswf::RefCounted::addRef(a2);
  }
  if ( *(uint8_t *)(*((uint32_t *)a2 + 4) + 232) != 0 )
  {
    v36 = *((gameswf::ASObject::Self **)a2 + 14);
    v37 = *((const gameswf::String::Self **)a2 + 15);
    if ( v36 != nullptr )
    {
      v38 = *((gameswf::Self **)a2 + 13);
      if ( *((uint8_t *)v38 + 2) == 0 )
      {
        v52 = (*(uint16_t *)v38)-- == 1;
        if ( v52 )
          gameswf::free_internal(v38);
        *((uint32_t *)a2 + 13) = 0;
        *((uint32_t *)a2 + 14) = 0;
        v36 = nullptr;
      }
    }
    MemberIndex = (const gameswf::CxForm::Self *)gameswf::ASObject::getMemberIndex(v36, v37);
    if ( MemberIndex != (const gameswf::CxForm::Self *)-1 )
    {
      v62 = MemberIndex;
      LOWORD(v75) = 5;
      v76 = a2;
      gameswf::RefCounted::addRef(a2);
      v40 = *((gameswf::ASObject::Self **)a2 + 14);
      v41 = *((const gameswf::String::Self **)a2 + 15);
      v42 = (int)(uintptr_t)(v62);
      if ( v40 != nullptr )
      {
        v43 = *((gameswf::Self **)a2 + 13);
        if ( *((uint8_t *)v43 + 2) == 0 )
        {
          v52 = (*(uint16_t *)v43)-- == 1;
          if ( v52 )
          {
            v61 = (int)(uintptr_t)(v41);
            gameswf::free_internal(v43);
            v41 = (const gameswf::String::Self *)v61;
            v42 = (int)(uintptr_t)(v62);
          }
          *((uint32_t *)a2 + 13) = 0;
          *((uint32_t *)a2 + 14) = 0;
          v40 = nullptr;
        }
      }
      gameswf::ASObject::setMemberAt(v40, v42, v41, (const gameswf::ASValue::Self *)&v75);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v75);
    }
    v44 = *(uint32_t *)a2;
    LOWORD(v78) = 1;
    v73 = *(void (**)(gameswf::Character::Self *, int, int, int, int, int, int, int, int, const gameswf::CxForm::Self *, int, int, gameswf::Self *, int, char *, uint32_t, int, int, gameswf::Character::Self *, int, int, int, int, gameswf::Self *, int, int, int, int))(v44 + 104);
    gameswf::String::resize((gameswf::String::Self *)&v78, 5);
    v45 = (gameswf::Self *)((char *)&v78 + 1);
    if ( (uint8_t)v78 == 0xFF )
      v45 = v81;
    gameswf::Strcpy_s(v45, (char *)&loc_6, (gameswf::Self *)"added");
    LOWORD(v82) = -1;
    BYTE2(v82) = 127;
    HIBYTE(v82) |= 1u;
    Event = gameswf::AS3Engine::getEvent(
              (gameswf::AS3Engine::Self *)(*((uint32_t *)a2 + 4) + 236),
              (const gameswf::String::Self *)&v78);
    v73(
      a2,
      Event,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v64,
      v65,
      v66,
      v67,
      v69,
      (uint32_t)(uintptr_t)(v73),
      v74,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    if ( a16 == -1 && (a20 & 0x1000000) != 0 )
    {
      v86 = a18;
      gameswf::free_internal(a19);
    }
    v47 = *(void (**)(gameswf::Character::Self *, uint32_t))(*(uint32_t *)a2 + 348);
    v48 = *((uint32_t *)a2 + 14);
    if ( v48 != 0 )
    {
      v49 = *((gameswf::Self **)a2 + 13);
      if ( *((uint8_t *)v49 + 2) == 0 )
      {
        v52 = (*(uint16_t *)v49)-- == 1;
        if ( v52 )
        {
          v86 = 0;
          gameswf::free_internal(v49);
        }
        *((uint32_t *)a2 + 13) = 0;
        *((uint32_t *)a2 + 14) = 0;
        v48 = 0;
      }
    }
    v47(a2, *(uint8_t *)(v48 + 152));
    return gameswf::RefCounted::dropRef(a2);
  }
  else
  {
    G4_VCALL<void>(a2, 208, 0, 0, v56, v57, v58, v59, v60, v61, v62, v64, v65, v66, v67, v69, v72, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85);
    return gameswf::RefCounted::dropRef(a2);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::moveDisplayObject  (binary VA: 0x108e920)
// Original: gameswf::DisplayList::moveDisplayObject
// ----------------------------------------------------------------------------
int gameswf::DisplayList::moveDisplayObject(gameswf::DisplayList::Self *self, char *a2, const gameswf::CxForm::Self *a3, const gameswf::Matrix::Self *a4, const gameswf::Effect::Self *a5, float a6)
{
  int v6;
  int result;
  int v8;
  gameswf::Character::Self *v9;
  gameswf::Self *v10;
  gameswf::Character::Self *v11;
  gameswf::Self *v12;
  gameswf::Character::Self *v13;
  gameswf::Self *v14;
  bool v15;
  char *v16;

  v6 = *((uint32_t *)self + 1);
  if ( v6 <= 0 )
    return gameswf::logError((gameswf::Self *)"error: moveDisplayObject() -- no objects on display list\n", v16);
  result = gameswf::DisplayList::find_display_index(self, (int)(uintptr_t)(a2));
  if ( v6 > result && result >= 0 )
  {
    v8 = *(uint32_t *)(*(uint32_t *)self + 4 * result);
    if ( a2 == (char *)*(uint16_t *)(v8 + 140) )
    {
      result = G4_VCALL<int>(v8, 332);
      if ( (uint8_t)result != 0 )
      {
        if ( a3 != nullptr && a3 != *(const gameswf::CxForm::Self **)(v8 + 64) )
        {
          v9 = *(gameswf::Character::Self **)(v8 + 56);
          *(uint32_t *)(v8 + 64) = (uint32_t)(uintptr_t)(a3);
          *(uint8_t *)(v8 + 146) = 1;
          if ( v9 != nullptr )
          {
            v10 = *(gameswf::Self **)(v8 + 52);
            if ( *((uint8_t *)v10 + 2) != 0 )
            {
              gameswf::Character::invalidateBitmapCache(v9);
            }
            else
            {
              v15 = (*(uint16_t *)v10)-- == 1;
              if ( v15 )
                gameswf::free_internal(v10);
              *(uint32_t *)(v8 + 52) = 0;
              *(uint32_t *)(v8 + 56) = 0;
            }
          }
        }
        if ( a4 != nullptr && a4 != *(const gameswf::Matrix::Self **)(v8 + 68) )
        {
          v11 = *(gameswf::Character::Self **)(v8 + 56);
          *(uint32_t *)(v8 + 68) = (uint32_t)(uintptr_t)(a4);
          *(uint8_t *)(v8 + 145) = 1;
          *(uint8_t *)(v8 + 147) = 1;
          if ( v11 != nullptr )
          {
            v12 = *(gameswf::Self **)(v8 + 52);
            if ( *((uint8_t *)v12 + 2) != 0 )
            {
              gameswf::Character::invalidateBitmapCache(v11);
            }
            else
            {
              v15 = (*(uint16_t *)v12)-- == 1;
              if ( v15 )
                gameswf::free_internal(v12);
              *(uint32_t *)(v8 + 52) = 0;
              *(uint32_t *)(v8 + 56) = 0;
            }
          }
        }
        if ( a5 != nullptr && a5 != *(const gameswf::Effect::Self **)(v8 + 72) )
        {
          v13 = *(gameswf::Character::Self **)(v8 + 56);
          *(uint32_t *)(v8 + 72) = (uint32_t)(uintptr_t)(a5);
          if ( v13 != nullptr )
          {
            v14 = *(gameswf::Self **)(v8 + 52);
            if ( *((uint8_t *)v14 + 2) != 0 )
            {
              gameswf::Character::invalidateBitmapCache(v13);
            }
            else
            {
              v15 = (*(uint16_t *)v14)-- == 1;
              if ( v15 )
                gameswf::free_internal(v14);
              *(uint32_t *)(v8 + 52) = 0;
              *(uint32_t *)(v8 + 56) = 0;
            }
          }
        }
        *(float *)(v8 + 136) = a6;
        return LODWORD(a6);
      }
    }
    else
    {
      return gameswf::logError((gameswf::Self *)"error: moveDisplayObject() -- no object at depth %d\n", a2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::replaceDisplayObject  (binary VA: 0x108eb10)
// Original: gameswf::DisplayList::replaceDisplayObject
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::DisplayList::replaceDisplayObject(gameswf::DisplayList::Self *self, gameswf::Character::Self **a2, unsigned int a3, const gameswf::CxForm::Self *a4, const gameswf::Matrix::Self *a5, const gameswf::Effect::Self *a6, float a7, uint16_t a8)
{
  int v8;
  int display_index;
  int *v10;
  int *v11;
  int *v12;
  int v13;
  uint32_t *v14;
  int v15;
  gameswf::Character::Self *v16;
  gameswf::Character::Self *v17;
  gameswf::Character::Self *v18;
  int *v19;
  gameswf::Character::Self *v20;
  gameswf::Self *result;
  int v22;
  int v23;
  gameswf::Self *v24;
  char *v25;
  int v26;
  int v27;
  char *v28;
  const void *v29;
  gameswf::Character::Self *v30;
  gameswf::Character::Self *v31;
  gameswf::Character::Self *v32;
  gameswf::Character::Self *v33;
  gameswf::Character::Self *v34;
  bool v35;
  gameswf::Character::Self *v36;
  int v37;
  int v38;
  int v39;
  void *v40;
  int v41;
  int v42;
  gameswf::Character::Self *v43;
  gameswf::Character::Self *v44;
  gameswf::Character::Self **v45;
  gameswf::Character::Self *v46;
  int v47;
  gameswf::Character::Self **v48;
  gameswf::Character::Self *v49;
  gameswf::Self *v50;
  int v51;
  uint16_t *v52;
  uint16_t *v53;
  int v54;
  int v55;
  uint16_t *v56;
  uint16_t *v57;
  int v58;
  int v59;
  uint16_t *v60;
  unsigned int v61;
  uint16_t *v62;
  int v63;
  int v64;
  gameswf::Self *v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef gameswf::Character::Self *_g4_t_v71;
  typedef gameswf::Character::Self *_g4_t_v72;
  typedef gameswf::Character::Self *_g4_t_v73;
  typedef gameswf::Character::Self *_g4_t_v74;
  typedef gameswf::Character::Self *_g4_t_v75;
  typedef gameswf::Character::Self *_g4_t_v76;
  typedef gameswf::Character::Self *_g4_t_v77;
  typedef gameswf::Character::Self *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef char _g4_t_v80;
  typedef uint32_t *_g4_t_v81;
  typedef gameswf::Character::Self *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef unsigned int _g4_t_v89;
  typedef gameswf::Self *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef uint32_t *_g4_t_v92;
  typedef gameswf::Character::Self *_g4_t_v93;
  typedef unsigned int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef gameswf::Self *_g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v66)) > _g4_s0 ? (4u + sizeof(_g4_t_v66)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v67)) > _g4_s1 ? (8u + sizeof(_g4_t_v67)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v68)) > _g4_s2 ? (12u + sizeof(_g4_t_v68)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v69)) > _g4_s3 ? (16u + sizeof(_g4_t_v69)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v70)) > _g4_s4 ? (20u + sizeof(_g4_t_v70)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v71)) > _g4_s5 ? (20u + sizeof(_g4_t_v71)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v72)) > _g4_s6 ? (20u + sizeof(_g4_t_v72)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v73)) > _g4_s7 ? (20u + sizeof(_g4_t_v73)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v74)) > _g4_s8 ? (20u + sizeof(_g4_t_v74)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v75)) > _g4_s9 ? (20u + sizeof(_g4_t_v75)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v76)) > _g4_s10 ? (20u + sizeof(_g4_t_v76)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v77)) > _g4_s11 ? (20u + sizeof(_g4_t_v77)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v78)) > _g4_s12 ? (20u + sizeof(_g4_t_v78)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v79)) > _g4_s13 ? (24u + sizeof(_g4_t_v79)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v80)) > _g4_s14 ? (28u + sizeof(_g4_t_v80)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v81)) > _g4_s15 ? (28u + sizeof(_g4_t_v81)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v82)) > _g4_s16 ? (28u + sizeof(_g4_t_v82)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v83)) > _g4_s17 ? (32u + sizeof(_g4_t_v83)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v84)) > _g4_s18 ? (32u + sizeof(_g4_t_v84)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v85)) > _g4_s19 ? (32u + sizeof(_g4_t_v85)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v86)) > _g4_s20 ? (36u + sizeof(_g4_t_v86)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v87)) > _g4_s21 ? (36u + sizeof(_g4_t_v87)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v88)) > _g4_s22 ? (36u + sizeof(_g4_t_v88)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v89)) > _g4_s23 ? (36u + sizeof(_g4_t_v89)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v90)) > _g4_s24 ? (40u + sizeof(_g4_t_v90)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v91)) > _g4_s25 ? (40u + sizeof(_g4_t_v91)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v92)) > _g4_s26 ? (40u + sizeof(_g4_t_v92)) : _g4_s26,
    _g4_s28 = (40u + sizeof(_g4_t_v93)) > _g4_s27 ? (40u + sizeof(_g4_t_v93)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v94)) > _g4_s28 ? (40u + sizeof(_g4_t_v94)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v95)) > _g4_s29 ? (44u + sizeof(_g4_t_v95)) : _g4_s29,
    _g4_s31 = (48u + sizeof(_g4_t_v96)) > _g4_s30 ? (48u + sizeof(_g4_t_v96)) : _g4_s30,
    _g4_s32 = (52u + sizeof(_g4_t_v97)) > _g4_s31 ? (52u + sizeof(_g4_t_v97)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v98)) > _g4_s32 ? (56u + sizeof(_g4_t_v98)) : _g4_s32,
    _g4_s34 = (60u + sizeof(_g4_t_v99)) > _g4_s33 ? (60u + sizeof(_g4_t_v99)) : _g4_s33,
    _g4_s35 = (64u + sizeof(_g4_t_v100)) > _g4_s34 ? (64u + sizeof(_g4_t_v100)) : _g4_s34,
    _g4_s36 = (72u + sizeof(_g4_t_v101)) > _g4_s35 ? (72u + sizeof(_g4_t_v101)) : _g4_s35,
    _g4_s37 = (76u + sizeof(_g4_t_v102)) > _g4_s36 ? (76u + sizeof(_g4_t_v102)) : _g4_s36,
    _g4_s38 = (80u + sizeof(_g4_t_v103)) > _g4_s37 ? (80u + sizeof(_g4_t_v103)) : _g4_s37,
    _g4_s39 = (84u + sizeof(_g4_t_v104)) > _g4_s38 ? (84u + sizeof(_g4_t_v104)) : _g4_s38,
    _g4_s40 = (88u + sizeof(_g4_t_v105)) > _g4_s39 ? (88u + sizeof(_g4_t_v105)) : _g4_s39,
    _g4_s41 = (92u + sizeof(_g4_t_v106)) > _g4_s40 ? (92u + sizeof(_g4_t_v106)) : _g4_s40,
    _g4_s42 = (96u + sizeof(_g4_t_v107)) > _g4_s41 ? (96u + sizeof(_g4_t_v107)) : _g4_s41,
    _g4_s43 = (100u + sizeof(_g4_t_v108)) > _g4_s42 ? (100u + sizeof(_g4_t_v108)) : _g4_s42,
    _g4_s44 = (104u + sizeof(_g4_t_v109)) > _g4_s43 ? (104u + sizeof(_g4_t_v109)) : _g4_s43,
    _g4_s45 = (108u + sizeof(_g4_t_v110)) > _g4_s44 ? (108u + sizeof(_g4_t_v110)) : _g4_s44,
    _g4_s46 = (112u + sizeof(_g4_t_v111)) > _g4_s45 ? (112u + sizeof(_g4_t_v111)) : _g4_s45,
    _g4_s47 = (116u + sizeof(_g4_t_v112)) > _g4_s46 ? (116u + sizeof(_g4_t_v112)) : _g4_s46,
    _g4_s48 = (120u + sizeof(_g4_t_v113)) > _g4_s47 ? (120u + sizeof(_g4_t_v113)) : _g4_s47,
    _g4_s49 = (124u + sizeof(_g4_t_v114)) > _g4_s48 ? (124u + sizeof(_g4_t_v114)) : _g4_s48
  };
  alignas(16) uint8_t _g4_sf[_g4_s49];
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 4u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 8u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 12u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 16u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 20u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 20u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 20u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 20u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 20u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 20u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 20u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 20u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 24u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 28u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 28u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 28u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 32u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 32u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 32u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 36u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 36u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 36u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 36u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 40u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 40u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 40u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 40u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 40u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 44u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 48u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 52u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 56u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 60u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 64u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 72u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 76u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 80u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 84u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 88u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 92u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 96u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 100u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 104u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 108u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 112u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 116u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 120u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 124u);

  HIWORD(v79) = a8;
  v8 = *((uint32_t *)self + 1);
  display_index = gameswf::DisplayList::find_display_index(self, a3);
  if ( v8 <= display_index || display_index < 0 )
    return (gameswf::Self *)gameswf::DisplayList::addDisplayObject(
                        self,
                        (gameswf::Character::Self *)a2,
                        a3,
                        true,
                        a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        v66,
                        v67,
                        v68,
                        v69,
                        v70,
                        v79,
                        v80,
                        v83,
                        v86,
                        v90,
                        v95);
  v81 = *(uint32_t **)(*(uint32_t *)self + 4 * display_index);
  v10 = (int *)v81[17];
  v101 = *v10;
  v102 = v10[1];
  v103 = v10[2];
  v104 = v10[3];
  v105 = v10[4];
  v106 = v10[5];
  v11 = (int *)v81[16];
  v107 = *v11;
  v108 = v11[1];
  v109 = v11[2];
  v110 = v11[3];
  v111 = v11[4];
  v112 = v11[5];
  v113 = v11[6];
  v114 = v11[7];
  v12 = (int *)v81[18];
  v13 = *v12;
  v98 = 0;
  v96 = v13;
  v99 = 0;
  v14 = (uint32_t *)(v12 + 1);
  v100 = 0;
  v15 = v12[2];
  v84 = v14;
  v97 = nullptr;
  v87 = v15;
  if ( v15 > 0 )
  {
    v99 = v15 + (v15 >> 1);
    v23 = 0;
    v24 = (gameswf::Self *)gameswf::malloc_internal(96 * v99);
    v97 = v24;
    v90 = nullptr;
    while ( 1 )
    {
      v25 = (char *)v24 + (uint32_t)(uintptr_t)(v90);
      if ( v25 != nullptr )
        memset(v25, 0, 0x60u);
      ++v23;
      v90 = (gameswf::Self *)((char *)v90 + 96);
      if ( v23 == v87 )
        break;
      v24 = v97;
    }
    v98 = v23;
    v26 = 0;
    v27 = 0;
    do
    {
      v28 = (char *)v97 + v26;
      ++v27;
      v29 = (const void *)(*v84 + v26);
      v26 += 96;
      std::memcpy(v28, v29, 96);
    }
    while ( v27 < v98 );
  }
  else
  {
    v98 = v15;
  }
  v16 = (gameswf::Character::Self *)v81[19];
  v17 = (gameswf::Character::Self *)v81[17];
  if ( v16 != nullptr )
  {
    if ( v17 == (gameswf::Character::Self *)((char *)v16 + 32) )
      v17 = (gameswf::Character::Self *)&v101;
    v18 = (gameswf::Character::Self *)v81[16];
    if ( v18 == v16 )
      v18 = (gameswf::Character::Self *)&v107;
    v19 = (int *)v81[18];
    if ( v19 == (int *)((char *)v16 + 56) )
      v19 = &v96;
  }
  else
  {
    v18 = (gameswf::Character::Self *)v81[16];
    v19 = (int *)v81[18];
  }
  gameswf::DisplayList::addDisplayObject(
    self,
    (gameswf::Character::Self *)a2,
    a3,
    true,
    a4,
    a5,
    a6,
    a7,
    a8,
    v66,
    v67,
    v68,
    v69,
    (int)(uintptr_t)(v19),
    v79,
    (char)(uintptr_t)v81,
    (int)(uintptr_t)(v84),
    v87,
    v90,
    v95);
  v20 = v71;
  if ( a4 == nullptr )
  {
    if ( v18 == (gameswf::Character::Self *)&v107 )
    {
      v93 = a2[19];
      if ( v93 == nullptr )
      {
        v55 = opNew(0x94u);
        *(uint32_t *)v55 = 1065353216;
        v56 = (uint16_t *)(v55 + 32);
        *(uint32_t *)(v55 + 8) = 1065353216;
        *(uint32_t *)(v55 + 16) = 1065353216;
        *(uint32_t *)(v55 + 24) = 1065353216;
        *(uint32_t *)(v55 + 4) = 0;
        *(uint32_t *)(v55 + 12) = 0;
        *(uint32_t *)(v55 + 20) = 0;
        *(uint32_t *)(v55 + 28) = 0;
        v93 = (gameswf::Character::Self *)v55;
        v89 = 24;
        v20 = v71;
        if ( ((v55 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v55 + 32) = 0;
          v56 = (uint16_t *)(v55 + 33);
          v89 = 23;
        }
        if ( ((uint8_t)(uintptr_t)v56 & 2) != 0 )
        {
          *v56++ = 0;
          v89 -= 2;
        }
        memset(v56, 0, 4 * (v89 >> 2));
        v57 = &v56[2 * (v89 >> 2)];
        if ( (v89 & 2) != 0 )
          *v57++ = 0;
        if ( (v89 & 1) != 0 )
          *(uint8_t *)v57 = 0;
        *(uint8_t *)(v55 + 76) = 1;
        *(uint8_t *)(v55 + 77) = 0;
        *(uint32_t *)(v55 + 32) = 1065353216;
        *(uint32_t *)(v55 + 48) = 1065353216;
        *(uint32_t *)(v55 + 56) = 0;
        *(uint32_t *)(v55 + 60) = 0;
        *(uint32_t *)(v55 + 64) = 0;
        *(uint32_t *)(v55 + 68) = 0;
        *(uint32_t *)(v55 + 72) = 0;
        v58 = *(uint32_t *)(v55 + 92) | 0x7FFFFF;
        *((uint32_t *)v93 + 23) = v58;
        *((uint8_t *)v93 + 94) = BYTE2(v58) & 0x7F;
        *(uint16_t *)((char *)v93 + 95) = HIBYTE(v58) | 1;
        *((uint8_t *)v93 + 97) = 0;
        *((uint8_t *)v93 + 98) = 0;
        *((uint32_t *)v93 + 25) = 0;
        *((uint32_t *)v93 + 26) = 1065353216;
        *((uint32_t *)v93 + 27) = 0;
        *((uint32_t *)v93 + 28) = 1065353216;
        *((uint32_t *)v93 + 29) = 0;
        *((uint32_t *)v93 + 30) = 0;
        *((uint32_t *)v93 + 31) = 0;
        *((uint32_t *)v93 + 32) = 0;
        *((uint32_t *)v93 + 33) = 0;
        *((uint32_t *)v93 + 34) = 0;
        *((uint32_t *)v93 + 35) = 0;
        *((uint32_t *)v93 + 36) = 0;
        a2[19] = v93;
      }
      *(uint32_t *)v93 = v107;
      *((uint32_t *)v93 + 1) = v108;
      *((uint32_t *)v93 + 2) = v109;
      *((uint32_t *)v93 + 3) = v110;
      *((uint32_t *)v93 + 4) = v111;
      *((uint32_t *)v93 + 5) = v112;
      *((uint32_t *)v93 + 6) = v113;
      *((uint32_t *)v93 + 7) = v114;
      v43 = a2[14];
      a2[16] = a2[19];
      *((uint8_t *)a2 + 146) = 1;
      if ( v43 == nullptr )
        goto LABEL_13;
      v44 = a2[13];
      if ( *((uint8_t *)v44 + 2) != 0 )
      {
        v74 = v20;
        gameswf::Character::invalidateBitmapCache(v43);
        v20 = v74;
        goto LABEL_13;
      }
      v35 = (*(uint16_t *)v44)-- == 1;
      if ( v35 )
      {
        v77 = v20;
        gameswf::free_internal(v44);
        v20 = v77;
      }
    }
    else
    {
      if ( v18 == a2[16] )
        goto LABEL_13;
      v33 = a2[14];
      a2[16] = v18;
      *((uint8_t *)a2 + 146) = 1;
      if ( v33 == nullptr )
        goto LABEL_13;
      v34 = a2[13];
      if ( *((uint8_t *)v34 + 2) != 0 )
      {
        gameswf::Character::invalidateBitmapCache(v33);
        v20 = v71;
        goto LABEL_13;
      }
      v35 = (*(uint16_t *)v34)-- == 1;
      if ( v35 )
      {
        gameswf::free_internal(v34);
        v20 = v71;
      }
    }
    a2[13] = nullptr;
    a2[14] = nullptr;
  }
LABEL_13:
  if ( a5 != nullptr )
    goto LABEL_14;
  if ( v17 == (gameswf::Character::Self *)&v101 )
  {
    v45 = a2;
    v46 = a2[19];
    if ( v46 == nullptr )
    {
      v78 = v20;
      v51 = opNew(0x94u);
      v52 = (uint16_t *)(v51 + 32);
      *(uint32_t *)v51 = 1065353216;
      *(uint32_t *)(v51 + 8) = 1065353216;
      *(uint32_t *)(v51 + 16) = 1065353216;
      *(uint32_t *)(v51 + 24) = 1065353216;
      *(uint32_t *)(v51 + 4) = 0;
      *(uint32_t *)(v51 + 12) = 0;
      *(uint32_t *)(v51 + 20) = 0;
      *(uint32_t *)(v51 + 28) = 0;
      v46 = (gameswf::Character::Self *)v51;
      v94 = 24;
      v20 = v78;
      if ( ((v51 + 32) & 1) != 0 )
      {
        *(uint8_t *)(v51 + 32) = 0;
        v52 = (uint16_t *)(v51 + 33);
        v94 = 23;
      }
      if ( ((uint8_t)(uintptr_t)v52 & 2) != 0 )
      {
        *v52++ = 0;
        v94 -= 2;
      }
      memset(v52, 0, 4 * (v94 >> 2));
      v53 = &v52[2 * (v94 >> 2)];
      if ( (v94 & 2) != 0 )
        *v53++ = 0;
      if ( (v94 & 1) != 0 )
        *(uint8_t *)v53 = 0;
      v54 = *(uint32_t *)(v51 + 92);
      *((uint32_t *)v46 + 8) = 1065353216;
      v54 |= 0x7FFFFFu;
      *((uint32_t *)v46 + 12) = 1065353216;
      *((uint32_t *)v46 + 23) = v54;
      *((uint32_t *)v46 + 14) = 0;
      *((uint8_t *)v46 + 94) = BYTE2(v54) & 0x7F;
      *((uint8_t *)v46 + 95) = HIBYTE(v54) | 1;
      *((uint32_t *)v46 + 15) = 0;
      *((uint32_t *)v46 + 16) = 0;
      *((uint32_t *)v46 + 17) = 0;
      *((uint32_t *)v46 + 18) = 0;
      *((uint8_t *)v46 + 76) = 1;
      *((uint8_t *)v46 + 77) = 0;
      *((uint8_t *)v46 + 96) = 0;
      *((uint8_t *)v46 + 97) = 0;
      *((uint8_t *)v46 + 98) = 0;
      *((uint32_t *)v46 + 25) = 0;
      *((uint32_t *)v46 + 26) = 1065353216;
      *((uint32_t *)v46 + 27) = 0;
      *((uint32_t *)v46 + 28) = 1065353216;
      *((uint32_t *)v46 + 29) = 0;
      *((uint32_t *)v46 + 30) = 0;
      *((uint32_t *)v46 + 31) = 0;
      *((uint32_t *)v46 + 32) = 0;
      *((uint32_t *)v46 + 33) = 0;
      *((uint32_t *)v46 + 34) = 0;
      *((uint32_t *)v46 + 35) = 0;
      *((uint32_t *)v46 + 36) = 0;
      v45 = a2;
      a2[19] = v46;
    }
    *((uint32_t *)v46 + 8) = v101;
    *((uint32_t *)v46 + 9) = v102;
    *((uint32_t *)v46 + 10) = v103;
    *((uint32_t *)v46 + 11) = v104;
    *((uint32_t *)v46 + 12) = v105;
    *((uint32_t *)v46 + 13) = v106;
    v47 = (int)(uintptr_t)(v45[19]) + 32;
    *((uint8_t *)v45 + 145) = 1;
    v45[17] = (gameswf::Character::Self *)v47;
    *((uint8_t *)v45 + 147) = 1;
    v48 = v45;
    v49 = v45[14];
    if ( v49 != nullptr )
    {
      v50 = (gameswf::Self *)(v48[13]);
      if ( *((uint8_t *)v50 + 2) == 0 )
      {
        v35 = (*(uint16_t *)v50)-- == 1;
        if ( v35 )
        {
          v76 = v20;
          gameswf::free_internal(v50);
          v20 = v76;
        }
LABEL_54:
        a2[13] = nullptr;
        a2[14] = nullptr;
        goto LABEL_14;
      }
      v75 = v20;
      gameswf::Character::invalidateBitmapCache(v49);
      v20 = v75;
    }
  }
  else if ( v17 != a2[17] )
  {
    a2[17] = v17;
    *((uint8_t *)a2 + 145) = 1;
    *((uint8_t *)a2 + 147) = 1;
    v31 = a2[14];
    if ( v31 != nullptr )
    {
      v32 = a2[13];
      if ( *((uint8_t *)v32 + 2) != 0 )
      {
        v72 = v20;
        gameswf::Character::invalidateBitmapCache(v31);
        v20 = v72;
        goto LABEL_14;
      }
      v35 = (*(uint16_t *)v32)-- == 1;
      if ( v35 )
      {
        v73 = v20;
        gameswf::free_internal(v32);
        v20 = v73;
      }
      goto LABEL_54;
    }
  }
LABEL_14:
  result = (gameswf::Self *)(a6);
  if ( a6 == nullptr )
  {
    result = (gameswf::Self *)&v96;
    if ( v20 == (gameswf::Character::Self *)&v96 )
    {
      v36 = a2[19];
      if ( v36 == nullptr )
      {
        v59 = opNew(0x94u);
        v60 = (uint16_t *)(v59 + 32);
        v36 = (gameswf::Character::Self *)v59;
        *(uint32_t *)v59 = 1065353216;
        *(uint32_t *)(v59 + 8) = 1065353216;
        *(uint32_t *)(v59 + 16) = 1065353216;
        *(uint32_t *)(v59 + 24) = 1065353216;
        *(uint32_t *)(v59 + 4) = 0;
        *(uint32_t *)(v59 + 12) = 0;
        *(uint32_t *)(v59 + 20) = 0;
        *(uint32_t *)(v59 + 28) = 0;
        v61 = 24;
        if ( ((v59 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v59 + 32) = 0;
          v60 = (uint16_t *)(v59 + 33);
          LOBYTE(v61) = 23;
        }
        if ( ((uint8_t)(uintptr_t)v60 & 2) != 0 )
        {
          *v60 = 0;
          v61 -= 2;
          ++v60;
        }
        memset(v60, 0, 4 * (v61 >> 2));
        v62 = &v60[2 * (v61 >> 2)];
        if ( (v61 & 2) != 0 )
          *v62++ = 0;
        if ( (v61 & 1) != 0 )
          *(uint8_t *)v62 = 0;
        v63 = *(uint32_t *)(v59 + 92);
        *((uint32_t *)v36 + 8) = 1065353216;
        v63 |= 0x7FFFFFu;
        *((uint32_t *)v36 + 12) = 1065353216;
        *((uint32_t *)v36 + 23) = v63;
        *((uint32_t *)v36 + 14) = 0;
        *((uint8_t *)v36 + 94) = BYTE2(v63) & 0x7F;
        *((uint8_t *)v36 + 95) = HIBYTE(v63) | 1;
        *((uint32_t *)v36 + 15) = 0;
        *((uint32_t *)v36 + 16) = 0;
        *((uint32_t *)v36 + 17) = 0;
        *((uint32_t *)v36 + 18) = 0;
        *((uint8_t *)v36 + 76) = 1;
        *((uint8_t *)v36 + 77) = 0;
        *((uint8_t *)v36 + 96) = 0;
        *((uint8_t *)v36 + 97) = 0;
        *((uint8_t *)v36 + 98) = 0;
        *((uint32_t *)v36 + 25) = 0;
        *((uint32_t *)v36 + 26) = 1065353216;
        *((uint32_t *)v36 + 27) = 0;
        *((uint32_t *)v36 + 28) = 1065353216;
        *((uint32_t *)v36 + 29) = 0;
        *((uint32_t *)v36 + 30) = 0;
        *((uint32_t *)v36 + 31) = 0;
        *((uint32_t *)v36 + 32) = 0;
        *((uint32_t *)v36 + 33) = 0;
        *((uint32_t *)v36 + 34) = 0;
        *((uint32_t *)v36 + 35) = 0;
        *((uint32_t *)v36 + 36) = 0;
        a2[19] = v36;
      }
      v92 = (uint32_t *)((char *)v36 + 60);
      v85 = v98;
      v37 = *((uint32_t *)v36 + 16);
      v35 = v98 == 0;
      *((uint32_t *)v36 + 14) = v96;
      v88 = v37;
      if ( !v35 )
      {
        v38 = *((uint32_t *)v36 + 17);
        if ( v85 > v38 && *((uint32_t *)v36 + 18) == 0 )
        {
          v64 = v85 + (v85 >> 1);
          *((uint32_t *)v36 + 17) = v64;
          if ( v64 != 0 )
          {
            v65 = *((gameswf::Self **)v36 + 15);
            if ( v65 != nullptr )
              *((uint32_t *)v36 + 15) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v65, 96 * v64, 96 * v38));
            else
              *((uint32_t *)v36 + 15) = gameswf::malloc_internal(96 * v64);
          }
          else
          {
            if ( *((uint32_t *)v36 + 15) != 0 )
              gameswf::free_internal(*((gameswf::Self **)v36 + 15));
            *((uint32_t *)v36 + 15) = 0;
          }
        }
      }
      if ( v85 > v88 )
      {
        v82 = v36;
        v39 = 96 * v88;
        do
        {
          v40 = (void *)(*v92 + v39);
          if ( v40 != nullptr )
            memset(v40, 0, 0x60u);
          ++v88;
          v39 += 96;
        }
        while ( v88 != v85 );
        v36 = v82;
      }
      *((uint32_t *)v36 + 16) = v85;
      if ( v85 > 0 )
      {
        v41 = 0;
        v42 = 0;
        do
        {
          ++v42;
          std::memcpy((void *)(v41 + *v92), (char *)v97 + v41, 96);
          v41 += 96;
        }
        while ( v42 < v92[1] );
      }
      result = (gameswf::Self *)((gameswf::Character::Self *)((char *)a2[19] + 56));
      a2[18] = (gameswf::Character::Self *)(result);
      if ( a2[14] == nullptr )
        goto LABEL_15;
      result = (gameswf::Self *)(a2[13]);
      if ( *((uint8_t *)result + 2) != 0 )
      {
        result = (gameswf::Self *)gameswf::Character::invalidateBitmapCache(a2[14]);
        goto LABEL_15;
      }
      v35 = (*(uint16_t *)result)-- == 1;
      if ( v35 )
        result = (gameswf::Self *)gameswf::free_internal(result);
    }
    else
    {
      if ( v20 == a2[18] )
        goto LABEL_15;
      result = (gameswf::Self *)(a2[14]);
      a2[18] = v20;
      if ( result == nullptr )
        goto LABEL_15;
      v30 = a2[13];
      if ( *((uint8_t *)v30 + 2) != 0 )
      {
        result = (gameswf::Self *)gameswf::Character::invalidateBitmapCache(result);
        goto LABEL_15;
      }
      result = (gameswf::Self *)(*(uint16_t *)v30 - 1);
      v35 = *(uint16_t *)v30 == 1;
      *(uint16_t *)v30 = (uint16_t)(uintptr_t)(result);
      if ( v35 )
        result = (gameswf::Self *)gameswf::free_internal(v30);
    }
    a2[13] = nullptr;
    a2[14] = nullptr;
  }
LABEL_15:
  v91 = v98;
  if ( v98 < 0 )
  {
    result = nullptr;
    v22 = 96 * v98;
    do
    {
      if ( (gameswf::Self *)((char *)v97 + v22) != nullptr )
        memset((char *)v97 + v22, 0, 0x60u);
      v22 += 96;
      ++v91;
    }
    while ( v91 != 0 );
  }
  v98 = 0;
  if ( v100 == 0 )
  {
    result = v97;
    v99 = 0;
    if ( v97 != nullptr )
      return (gameswf::Self *)gameswf::free_internal(v97);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::construct  (binary VA: 0x108f7c0)
// Original: gameswf::DisplayList::construct
// ----------------------------------------------------------------------------
void gameswf::DisplayList::construct(gameswf::DisplayList::Self *self)
{
  int v1;
  int v2;
  int *v3;
  char *v4;
  gameswf::RefCounted::Self **v5;
  gameswf::RefCounted::Self *v6;
  int v7;
  int v8;
  int v9;
  gameswf::Self *v10;
  uint32_t *v11;
  int v12;
  int v13;
  gameswf::RefCounted::Self *v14;
  int v15;
  uint32_t *v16;
  int i;
  int v18;
  int v19;
  char *v20;
  int v21;
  size_t v22;
  int v23;
  int *v24;
  int *v25;
  uint32_t *v26;
  int *v27;
  int v28;
  int v29;
  int v30;
  uint32_t *v31;
  gameswf::Self **v32;
  int v33;
  int v34;

  v33 = *((uint32_t *)self + 1);
  if ( v33 > 0 )
  {
    v1 = *(uint32_t *)self;
    v28 = v33 - 1;
    v23 = 4 * (v33 - 1);
    v31 = *(uint32_t **)(**(uint32_t **)self + 16);
    v34 = v31[9];
    v32 = (gameswf::Self **)(v31 + 8);
    v2 = v34;
    v3 = (int *)(v31 + 8);
    while ( 1 )
    {
      v6 = *(gameswf::RefCounted::Self **)(v1 + v23);
      v7 = v2 + 1;
      v8 = v3[2];
      if ( v2 + 1 <= v8 )
      {
        v4 = (char *)v31[8];
      }
      else if ( v3[3] != 0 )
      {
        v4 = (char *)v31[8];
      }
      else
      {
        v9 = v7 + (v7 >> 1);
        v10 = (gameswf::Self *)*v3;
        v3[2] = v9;
        if ( v9 != 0 )
        {
          v27 = v3;
          if ( v10 != nullptr )
          {
            v20 = (char *)gameswf::realloc_internal(v10, 4 * v9, 4 * v8);
            v3 = v27;
            v4 = v20;
            *v27 = (int)(uintptr_t)(v20);
            v2 = v31[9];
          }
          else
          {
            v22 = 0;
            v21 = gameswf::malloc_internal(4 * v9);
            v3 = v27;
            *v27 = v21;
            v2 = v31[9];
            v4 = (char *)v21;
          }
        }
        else
        {
          if ( v10 != nullptr )
          {
            v25 = v3;
            v22 = 4 * v8;
            gameswf::free_internal(v10);
            v3 = v25;
          }
          *v3 = 0;
          v2 = v31[9];
          v4 = nullptr;
        }
      }
      v5 = (gameswf::RefCounted::Self **)&v4[4 * v2];
      if ( v5 != nullptr )
      {
        *v5 = v6;
        if ( v6 != nullptr )
        {
          v24 = v3;
          gameswf::RefCounted::addRef(v6);
          v3 = v24;
        }
      }
      --v28;
      v23 -= 4;
      v3[1] = v7;
      if ( v28 == -1 )
        break;
      v1 = *(uint32_t *)self;
      v2 = v7;
    }
    v11 = v31;
    v29 = 0;
    v12 = v34 + v33;
    do
    {
      v13 = *(uint32_t *)(v11[8] + 4 * (v12 - 1));
      if ( v13 != 0 )
      {
        (*(void (**)(uint32_t, size_t))(*(uint32_t *)v13 + 28))(*(uint32_t *)(v11[8] + 4 * (v12 - 1)), v22);
        v30 = v11[9];
        v12 = v30 - 1;
        v14 = *(gameswf::RefCounted::Self **)(v11[8] + 4 * (v30 - 1));
      }
      else
      {
        v30 = v12;
        v14 = nullptr;
        --v12;
      }
      v15 = v12;
      v16 = v11;
      for ( i = 4 * v12; ; v14 = *(gameswf::RefCounted::Self **)(v16[8] + i) )
      {
        if ( v14 != nullptr )
        {
          v26 = v16;
          gameswf::RefCounted::dropRef(v14);
          v16 = v26;
        }
        ++v15;
        i += 4;
        if ( v15 >= v30 )
          break;
      }
      v11 = v16;
      if ( v12 != 0 )
      {
        v18 = v31[10];
        if ( v18 < v12 && v31[11] == 0 )
        {
          v19 = v12 + (v12 >> 1);
          v31[10] = v19;
          if ( v19 != 0 )
          {
            if ( *v32 != nullptr )
            {
              *v32 = (gameswf::Self *)gameswf::realloc_internal(*v32, 4 * v19, 4 * v18);
            }
            else
            {
              v22 = 0;
              *v32 = (gameswf::Self *)gameswf::malloc_internal(4 * v19);
            }
          }
          else
          {
            if ( *v32 != nullptr )
            {
              v22 = 4 * v18;
              gameswf::free_internal(*v32);
            }
            *v32 = nullptr;
          }
        }
      }
      ++v29;
      v31[9] = v12;
    }
    while ( v29 != v33 );
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::advance  (binary VA: 0x108fc50)
// Original: gameswf::DisplayList::advance
// ----------------------------------------------------------------------------
int gameswf::DisplayList::advance(gameswf::DisplayList::Self *self, float a2)
{
  int v2;
  int v3;
  int *v4;
  char *v5;
  gameswf::RefCounted::Self **v6;
  gameswf::RefCounted::Self *v7;
  int v8;
  int v9;
  int v10;
  gameswf::Self *v11;
  uint32_t *v12;
  int v13;
  gameswf::RefCounted::Self *v14;
  int v15;
  uint32_t *v16;
  int i;
  int v18;
  int v20;
  char *v21;
  int v22;
  int v23;
  int *v24;
  int *v25;
  uint32_t *v26;
  int v27;
  int *v28;
  int v29;
  int v30;
  int v31;
  uint32_t *v32;
  gameswf::Self **v33;
  int v34;
  uint8_t v35;
  int v36;

  v35 = 0;
  v34 = *((uint32_t *)self + 1);
  if ( v34 > 0 )
  {
    v2 = *(uint32_t *)self;
    v29 = v34 - 1;
    v23 = 4 * (v34 - 1);
    v32 = *(uint32_t **)(**(uint32_t **)self + 16);
    v36 = v32[9];
    v33 = (gameswf::Self **)(v32 + 8);
    v3 = v36;
    v4 = (int *)(v32 + 8);
    while ( 1 )
    {
      v7 = *(gameswf::RefCounted::Self **)(v2 + v23);
      v8 = v3 + 1;
      v9 = v4[2];
      if ( v3 + 1 <= v9 )
      {
        v5 = (char *)v32[8];
      }
      else if ( v4[3] != 0 )
      {
        v5 = (char *)v32[8];
      }
      else
      {
        v10 = v8 + (v8 >> 1);
        v11 = (gameswf::Self *)*v4;
        v4[2] = v10;
        if ( v10 != 0 )
        {
          v28 = v4;
          if ( v11 != nullptr )
          {
            v21 = (char *)gameswf::realloc_internal(v11, 4 * v10, 4 * v9);
            v4 = v28;
            v5 = v21;
            *v28 = (int)(uintptr_t)(v21);
            v3 = v32[9];
          }
          else
          {
            v22 = gameswf::malloc_internal(4 * v10);
            v4 = v28;
            *v28 = v22;
            v3 = v32[9];
            v5 = (char *)v22;
          }
        }
        else
        {
          if ( v11 != nullptr )
          {
            v25 = v4;
            gameswf::free_internal(v11);
            v4 = v25;
          }
          *v4 = 0;
          v3 = v32[9];
          v5 = nullptr;
        }
      }
      v6 = (gameswf::RefCounted::Self **)&v5[4 * v3];
      if ( v6 != nullptr )
      {
        *v6 = v7;
        if ( v7 != nullptr )
        {
          v24 = v4;
          gameswf::RefCounted::addRef(v7);
          v4 = v24;
        }
      }
      --v29;
      v23 -= 4;
      v4[1] = v8;
      if ( v29 == -1 )
        break;
      v2 = *(uint32_t *)self;
      v3 = v8;
    }
    v12 = v32;
    v30 = 0;
    v35 = 0;
    v13 = v36 + v34;
    do
    {
      v31 = v13--;
      v14 = *(gameswf::RefCounted::Self **)(v12[8] + 4 * v13);
      if ( v14 != nullptr && *((uint8_t *)v14 + 150) != 0 )
      {
        v27 = *(uint32_t *)(v12[8] + 4 * v13);
        G4_VCALL<void>(v14, 96, LODWORD(a2));
        v35 |= *(uint8_t *)(v27 + 150);
        v31 = v12[9];
        v13 = v31 - 1;
        v14 = *(gameswf::RefCounted::Self **)(v12[8] + 4 * (v31 - 1));
      }
      v15 = v13;
      v16 = v12;
      for ( i = 4 * v13; ; v14 = *(gameswf::RefCounted::Self **)(v16[8] + i) )
      {
        if ( v14 != nullptr )
        {
          v26 = v16;
          gameswf::RefCounted::dropRef(v14);
          v16 = v26;
        }
        ++v15;
        i += 4;
        if ( v15 >= v31 )
          break;
      }
      v12 = v16;
      if ( v13 != 0 )
      {
        v18 = v32[10];
        if ( v18 < v13 && v32[11] == 0 )
        {
          v20 = v13 + (v13 >> 1);
          v32[10] = v20;
          if ( v20 != 0 )
          {
            if ( *v33 != nullptr )
              *v33 = (gameswf::Self *)gameswf::realloc_internal(*v33, 4 * v20, 4 * v18);
            else
              *v33 = (gameswf::Self *)gameswf::malloc_internal(4 * v20);
          }
          else
          {
            if ( *v33 != nullptr )
              gameswf::free_internal(*v33);
            *v33 = nullptr;
          }
        }
      }
      ++v30;
      v32[9] = v13;
    }
    while ( v30 != v34 );
  }
  return v35;
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::swap_characters  (binary VA: 0x108ffa0)
// Original: gameswf::DisplayList::swap_characters
// ----------------------------------------------------------------------------
int gameswf::DisplayList::swap_characters(gameswf::DisplayList::Self *self, gameswf::Character::Self *a2, gameswf::Character::Self *a3)
{
  int result;
  int IndexOf;
  int v5;
  gameswf::RefCounted::Self *v6;
  gameswf::RefCounted::Self *v7;
  gameswf::RefCounted::Self **v8;
  gameswf::RefCounted::Self *v9;
  gameswf::Character::Self *v10;
  gameswf::RefCounted::Self **v11;
  int v12;
  int v13;

  result = (int)(uintptr_t)(a2);
  if ( a2 != a3 )
  {
    IndexOf = gameswf::DisplayList::getIndexOf(self, a2);
    result = gameswf::DisplayList::getIndexOf(self, a3);
    if ( result >= 0 && IndexOf >= 0 )
    {
      v5 = *(uint32_t *)self;
      v12 = 4 * result;
      v6 = nullptr;
      result = *(uint32_t *)self + 4 * result;
      v7 = *(gameswf::RefCounted::Self **)result;
      if ( *(uint32_t *)result != 0 )
      {
        gameswf::RefCounted::addRef(*(gameswf::RefCounted::Self **)result);
        v5 = *(uint32_t *)self;
        result = *(uint32_t *)self + v12;
        v6 = *(gameswf::RefCounted::Self **)result;
      }
      v13 = 4 * IndexOf;
      v8 = (gameswf::RefCounted::Self **)(v5 + 4 * IndexOf);
      v9 = *v8;
      if ( *v8 != v6 )
      {
        if ( v6 != nullptr )
        {
          v10 = (gameswf::Character::Self *)result;
          gameswf::RefCounted::dropRef(v6);
          result = (int)(uintptr_t)(v10);
        }
        *(uint32_t *)result = (uint32_t)(uintptr_t)(v9);
        if ( v9 != nullptr )
          result = (int)(uintptr_t)(gameswf::RefCounted::addRef(v9));
        v8 = (gameswf::RefCounted::Self **)(*(uint32_t *)self + v13);
        v9 = *v8;
      }
      if ( v9 == v7 )
      {
        if ( v7 != nullptr )
          return gameswf::RefCounted::dropRef(v7);
      }
      else
      {
        if ( v9 != nullptr )
        {
          v11 = v8;
          result = gameswf::RefCounted::dropRef(v9);
          v8 = v11;
        }
        *v8 = v7;
        if ( v7 != nullptr )
        {
          gameswf::RefCounted::addRef(v7);
          return gameswf::RefCounted::dropRef(v7);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::change_character_depth  (binary VA: 0x1090480)
// Original: gameswf::DisplayList::change_character_depth
// ----------------------------------------------------------------------------
int gameswf::DisplayList::change_character_depth(gameswf::DisplayList::Self *self, gameswf::Character::Self *a2, int a3)
{
  int IndexOf;
  int v4;
  int v5;
  gameswf::RefCounted::Self **dest;
  int display_index;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v16;
  bool v17;
  gameswf::Self *v18;
  int v19;

  IndexOf = gameswf::DisplayList::getIndexOf(self, a2);
  *((uint16_t *)a2 + 70) = a3;
  gameswf::RefCounted::addRef(a2);
  v4 = *((uint32_t *)self + 1);
  if ( v4 == 1 )
  {
    if ( **(uint32_t **)self != 0 )
      gameswf::RefCounted::dropRef(**(gameswf::RefCounted::Self ***)self);
    *((uint32_t *)self + 1) = 0;
  }
  else
  {
    v5 = *(uint32_t *)self;
    dest = (gameswf::RefCounted::Self **)(*(uint32_t *)self + 4 * IndexOf);
    if ( *dest != nullptr )
    {
      gameswf::RefCounted::dropRef(*dest);
      v5 = *(uint32_t *)self;
      v4 = *((uint32_t *)self + 1);
      dest = (gameswf::RefCounted::Self **)(*(uint32_t *)self + 4 * IndexOf);
    }
    memmove(dest, (const void *)(v5 + 4 * IndexOf + 4), 4 * (v4 - 1 - IndexOf));
    --*((uint32_t *)self + 1);
  }
  display_index = gameswf::DisplayList::find_display_index(self, a3);
  v8 = *((uint32_t *)self + 1);
  v9 = display_index;
  v10 = v8 + 1;
  if ( v8 == -1 || (v11 = *((uint32_t *)self + 2), v10 <= v11) || *((uint32_t *)self + 3) != 0 )
  {
    v12 = *(uint32_t *)self;
  }
  else
  {
    v16 = v10 + (v10 >> 1);
    v17 = v16 == 0;
    v19 = v16;
    *((uint32_t *)self + 2) = v16;
    v18 = *(gameswf::Self **)self;
    if ( v17 )
    {
      if ( v18 != nullptr )
      {
        gameswf::free_internal(v18);
        v10 = v8 + 1;
      }
      *(uint32_t *)self = 0;
      v12 = 0;
    }
    else
    {
      if ( v18 != nullptr )
        v12 = (int)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 4 * v19, 4 * v11));
      else
        v12 = gameswf::malloc_internal(4 * v19);
      *(uint32_t *)self = v12;
      v10 = v8 + 1;
    }
  }
  v13 = (uint32_t *)(v12 + 4 * v8);
  if ( v13 != nullptr )
    *v13 = 0;
  *((uint32_t *)self + 1) = v10;
  if ( v9 < v8 )
    memmove((void *)(*(uint32_t *)self + 4 * v9 + 4), (const void *)(*(uint32_t *)self + 4 * v9), 4 * (v8 - v9));
  v14 = (uint32_t *)(*(uint32_t *)self + 4 * v9);
  if ( v14 != nullptr )
  {
    *v14 = (uint32_t)(uintptr_t)(a2);
    gameswf::RefCounted::addRef(a2);
  }
  return gameswf::RefCounted::dropRef(a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::getHighestDepth  (binary VA: 0x1090690)
// Original: gameswf::DisplayList::getHighestDepth
// ----------------------------------------------------------------------------
int gameswf::DisplayList::getHighestDepth(gameswf::DisplayList::Self *self)
{
  int result;
  int v2;
  int i;
  int v4;
  int v5;

  result = 0x4000;
  v2 = *((uint32_t *)self + 1);
  if ( v2 > 0 )
  {
    LOWORD(result) = 0x3FFF;
    for ( i = 0; i != v2; ++i )
    {
      v4 = *(uint32_t *)(*(uint32_t *)self + 4 * i);
      v5 = *(uint16_t *)(v4 + 140);
      if ( result < v5 )
        result = v5;
    }
    ++result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::dump  (binary VA: 0x10906d0)
// Original: gameswf::DisplayList::dump
// ----------------------------------------------------------------------------
int gameswf::DisplayList::dump(gameswf::DisplayList::Self *self, gameswf::String::Self *a2)
{
  int v2;
  char *v3;
  char *v4;
  char *v5;
  int v6;
  char *v7;
  char *v8;
  char *v9;
  char *v10;
  int v11;
  int v13;

  v2 = *(char *)a2 - 1;
  if ( *(uint8_t *)a2 == 0xFF )
    v2 = *((uint32_t *)a2 + 1) - 1;
  gameswf::String::resize(a2, v2 + 2);
  LOBYTE(v3) = *(uint8_t *)a2;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v3 = *((char **)a2 + 1);
    v4 = *((char **)a2 + 3);
  }
  else
  {
    v3 = (char *)(char)(uintptr_t)(v3);
    v4 = (char *)a2 + 1;
  }
  gameswf::Strcpy_s((gameswf::Self *)&v4[v2], v3, (gameswf::Self *)"  ");
  *((uint32_t *)a2 + 4) |= 0x7FFFFFu;
  v5 = (char *)a2 + 1;
  if ( *(uint8_t *)a2 == 0xFF )
    v5 = *((char **)a2 + 3);
  printf("%s*** displaylist ***\n", v5);
  v13 = *((uint32_t *)self + 1);
  if ( v13 > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v9 = *(char **)(*(uint32_t *)(*(uint32_t *)self + 4 * v6) + 60);
      if ( *v9 == -1 )
      {
        if ( *((uint32_t *)v9 + 1) - 1 <= 0 )
          goto LABEL_15;
LABEL_10:
        if ( *v9 == -1 )
        {
          v7 = *((char **)v9 + 3);
          v8 = (char *)a2 + 1;
          if ( *(uint8_t *)a2 == 0xFF )
LABEL_22:
            v8 = *((char **)a2 + 3);
        }
        else
        {
          v7 = v9 + 1;
          v8 = (char *)a2 + 1;
          if ( *(uint8_t *)a2 == 0xFF )
            goto LABEL_22;
        }
        ++v6;
        printf("%s%s\n", v8, v7);
        if ( v6 == v13 )
          break;
      }
      else
      {
        if ( *v9 - 1 > 0 )
          goto LABEL_10;
LABEL_15:
        v10 = (char *)a2 + 1;
        if ( *(uint8_t *)a2 == 0xFF )
          v10 = *((char **)a2 + 3);
        ++v6;
        printf("%s<noname>\n", v10);
        if ( v6 == v13 )
          break;
      }
    }
  }
  if ( *(uint8_t *)a2 == 0xFF )
    v11 = *((uint32_t *)a2 + 1) - 1;
  else
    v11 = *(char *)a2 - 1;
  return gameswf::String::resize(a2, v11 - 2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::DisplayList::getCharacterByNameI  (binary VA: 0x1090870)
// Original: gameswf::DisplayList::getCharacterByNameI
// ----------------------------------------------------------------------------
int gameswf::DisplayList::getCharacterByNameI(gameswf::DisplayList::Self *self, const gameswf::StringI::Self *a2)
{
  int v2;
  gameswf::Self *v3;
  int v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  gameswf::DisplayList::Self *v16;
  gameswf::Self *v17;
  int v18;
  uint32_t *v19;
  char *v20;
  char v21;
  int v22;
  int v23;
  int *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  char *v30;
  gameswf::String::Self *v31;
  int v32;
  int v33;
  int *v34;
  int v35;
  int result;
  uint32_t *v37;
  int v38;
  int v39;
  uint32_t *v40;
  const gameswf::StringI::Self *v41;
  char *v42;
  gameswf::String::Self *v43;
  int v44;
  char *v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  char *v51;
  int v52;
  int v53;
  int v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef char *_g4_t_v61;
  typedef char *_g4_t_v62;
  typedef gameswf::Self **_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef uint32_t _g4_t_v69[3];
  typedef int _g4_t_v70;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v55)) > _g4_s0 ? (4u + sizeof(_g4_t_v55)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v56)) > _g4_s1 ? (4u + sizeof(_g4_t_v56)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v57)) > _g4_s2 ? (12u + sizeof(_g4_t_v57)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v58)) > _g4_s3 ? (16u + sizeof(_g4_t_v58)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v59)) > _g4_s4 ? (20u + sizeof(_g4_t_v59)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v60)) > _g4_s5 ? (20u + sizeof(_g4_t_v60)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v61)) > _g4_s6 ? (20u + sizeof(_g4_t_v61)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v62)) > _g4_s7 ? (24u + sizeof(_g4_t_v62)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v63)) > _g4_s8 ? (24u + sizeof(_g4_t_v63)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v64)) > _g4_s9 ? (24u + sizeof(_g4_t_v64)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v65)) > _g4_s10 ? (24u + sizeof(_g4_t_v65)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v66)) > _g4_s11 ? (28u + sizeof(_g4_t_v66)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v67)) > _g4_s12 ? (28u + sizeof(_g4_t_v67)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v68)) > _g4_s13 ? (28u + sizeof(_g4_t_v68)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v69)) > _g4_s14 ? (32u + sizeof(_g4_t_v69)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v70)) > _g4_s15 ? (44u + sizeof(_g4_t_v70)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 4u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);

  v2 = 0;
  v3 = *((gameswf::Self **)self + 4);
  if ( v3 != nullptr )
    v2 = *(uint32_t *)v3;
  v4 = *((uint32_t *)self + 1);
  v5 = (char *)self + 16;
  if ( v4 != v2 )
  {
    v6 = *((uint32_t *)self + 1);
    if ( v3 != nullptr )
    {
      if ( *((int *)v3 + 1) >= 0 )
      {
        v7 = 8;
        v8 = 0;
        v9 = *((uint32_t *)v3 + 1);
        do
        {
          v10 = (uint32_t *)((char *)v3 + v7);
          if ( *(uint32_t *)((char *)v3 + v7) != -2 )
          {
            *v10 = -2;
            v10[1] = 0;
            v3 = *((gameswf::Self **)self + 4);
          }
          ++v8;
          v7 += 16;
        }
        while ( v9 >= v8 );
        v5 = (char *)self + 16;
      }
      gameswf::free_internal(v3);
      v4 = *((uint32_t *)self + 1);
      *((uint32_t *)self + 4) = 0;
      v6 = v4;
    }
    v3 = nullptr;
    if ( v4 >= 0 )
    {
      v11 = (3 * v4) >> 1;
      if ( v11 > 0 )
      {
        v12 = 1;
        if ( v11 == 1 )
        {
          LOWORD(v12) = 4;
        }
        else
        {
          do
            v12 *= 2;
          while ( v11 > v12 );
          if ( v12 <= 3 )
            v12 = 4;
        }
        v69[0] = gameswf::malloc_internal(16 * v12 + 8);
        *(uint32_t *)v69[0] = 0;
        v13 = v69[0];
        v14 = 8;
        *(uint32_t *)(v69[0] + 4) = v12 - 1;
        v15 = 0;
        while ( 1 )
        {
          ++v15;
          *(uint32_t *)(v13 + v14) = -2;
          v14 += 16;
          if ( v12 <= v15 )
            break;
          v13 = v69[0];
        }
        v16 = self;
        v17 = *((gameswf::Self **)self + 4);
        if ( v17 != nullptr )
        {
          if ( *((int *)v17 + 1) >= 0 )
          {
            v62 = v5;
            v66 = *((uint32_t *)v17 + 1);
            v18 = 0;
            do
            {
              v19 = (uint32_t *)((char *)v17 + 16 * v18 + 8);
              if ( *v19 != -2 )
              {
                gameswf::hash_gameswf_StringIPointer_g_02015a::add(
                  v69,
                  (char *)v17 + 16 * v18 + 16,
                  (char *)v17 + 16 * v18 + 20);
                *v19 = -2;
                v19[1] = 0;
                v17 = *((gameswf::Self **)self + 4);
              }
              ++v18;
            }
            while ( v66 >= v18 );
            v5 = v62;
          }
          gameswf::free_internal(v17);
          v16 = self;
        }
        v3 = (gameswf::Self *)v69[0];
        v6 = *((uint32_t *)v16 + 1);
        *((uint32_t *)v16 + 4) = v69[0];
        v69[0] = 0;
      }
    }
    v59 = 0;
    if ( v6 > 0 )
    {
      v63 = (gameswf::Self **)v5;
      do
      {
        v58 = 4 * v59 + *(uint32_t *)self;
        v20 = *(char **)(*(uint32_t *)v58 + 60);
        v69[0] = (uint32_t)(uintptr_t)(v20);
        v21 = *v20;
        v22 = *v20 - 1;
        if ( *v20 == -1 )
          v22 = *((uint32_t *)v20 + 1) - 1;
        if ( v22 > 0 )
        {
          if ( v3 == nullptr )
            goto LABEL_53;
          v57 = *((uint32_t *)v20 + 4);
          if ( (uint8_t *)(v57 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
          {
            if ( v21 == -1 )
            {
              v45 = *((char **)v20 + 3);
              v46 = *((uint32_t *)v20 + 1) - 1;
            }
            else
            {
              v45 = v20 + 1;
              v46 = v21 - 1;
            }
            v23 = 5381;
            v47 = 5381;
            if ( v46 > 0 )
            {
              do
              {
                --v46;
                v48 = 33 * v47;
                v49 = (uint8_t)v45[v46] + 32;
                if ( (uint8_t)(v45[v46] - 65) > 0x19u )
                  v49 = (uint8_t)v45[v46];
                v47 = v48 ^ v49;
              }
              while ( v46 != 0 );
              v47 = v47 << 9 >> 9;
              v23 = v47;
            }
            *((uint32_t *)v20 + 4) = v47 & 0x7FFFFF | v57 & 0xFF800000;
            v3 = *((gameswf::Self **)self + 4);
          }
          else
          {
            v23 = v57 << 9 >> 9;
          }
          v67 = *((uint32_t *)v3 + 1);
          v24 = (int *)((char *)v3 + 16 * (v23 & v67) + 8);
          if ( *v24 == -2 )
            goto LABEL_53;
          v25 = *((uint32_t *)v3 + 4 * (v23 & v67) + 3);
          if ( (v23 & v67) != (v25 & v67) )
            goto LABEL_53;
          v26 = v23;
          v27 = v23 & v67;
          v28 = v26;
          while ( 1 )
          {
            if ( v25 == v28 )
            {
              v29 = v24[2];
              if ( v29 == v69[0] )
                break;
              v30 = *(uint8_t *)v69[0] == 0xFF ? *(char **)(v69[0] + 12) : (char *)(v69[0] + 1);
              v31 = *(uint8_t *)v29 == 0xFF ? *(gameswf::String::Self **)(v29 + 12) : (gameswf::String::Self *)(v29 + 1);
              v55 = v28;
              v32 = gameswf::String::stricmp(v31, v30);
              v28 = v55;
              if ( v32 == 0 )
                break;
            }
            v27 = *v24;
            if ( *v24 == -1 )
              goto LABEL_53;
            v24 = (int *)((char *)*v63 + 16 * v27 + 8);
            v25 = v24[1];
          }
          if ( v27 < 0 || (v3 = *v63, *v63 == nullptr) || *((uint32_t *)v3 + 1) < v27 )
          {
LABEL_53:
            v70 = *(uint32_t *)v58;
            gameswf::hash_gameswf_StringIPointer_g_02015a::add(
              v63,
              v69,
              &v70);
            v3 = *((gameswf::Self **)self + 4);
          }
        }
        ++v59;
      }
      while ( *((uint32_t *)self + 1) > v59 );
      v5 = (char *)v63;
    }
  }
  if ( v3 == nullptr )
    return 0;
  v64 = *((uint32_t *)a2 + 4);
  if ( (uint8_t *)(v64 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v51 = *((char **)a2 + 3);
      v50 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v50 = *(char *)a2 - 1;
      v51 = (char *)a2 + 1;
    }
    v33 = 5381;
    v52 = 5381;
    if ( v50 > 0 )
    {
      v61 = v5;
      do
      {
        --v50;
        v53 = 33 * v52;
        v54 = (uint8_t)v51[v50] + 32;
        if ( (uint8_t)(v51[v50] - 65) > 0x19u )
          v54 = (uint8_t)v51[v50];
        v52 = v53 ^ v54;
      }
      while ( v50 != 0 );
      v5 = v61;
      v52 = v52 << 9 >> 9;
      v33 = v52;
    }
    *((uint32_t *)a2 + 4) = v52 & 0x7FFFFF | v64 & 0xFF800000;
    v3 = *((gameswf::Self **)self + 4);
  }
  else
  {
    v33 = v64 << 9 >> 9;
  }
  v68 = *((uint32_t *)v3 + 1);
  v34 = (int *)((char *)v3 + 16 * (v33 & v68) + 8);
  if ( *v34 == -2 )
    return 0;
  v35 = v33 & v68;
  v60 = *((uint32_t *)v3 + 4 * (v33 & v68) + 3);
  result = 0;
  if ( (v33 & v68) != (v60 & v68) )
    return result;
  v65 = v33;
  v37 = (uint32_t *)(v5);
  v38 = v34[1];
  v39 = v35;
  v40 = v37;
  while ( 1 )
  {
    if ( v38 == v65 )
    {
      v41 = (const gameswf::StringI::Self *)v34[2];
      if ( a2 == v41 )
        break;
      v42 = *(uint8_t *)a2 == 0xFF ? *((char **)a2 + 3) : (char *)a2 + 1;
      v43 = *(uint8_t *)v41 == 0xFF ? *((gameswf::String::Self **)v41 + 3) : (gameswf::String::Self *)((char *)v41 + 1);
      v56 = v40;
      v44 = gameswf::String::stricmp(v43, v42);
      v40 = v56;
      if ( v44 == 0 )
        break;
    }
    v39 = *v34;
    if ( *v34 == -1 )
      return 0;
    v34 = (int *)(*v40 + 16 * v39 + 8);
    v38 = v34[1];
  }
  if ( v39 < 0 )
    return 0;
  return *(uint32_t *)(*((uint32_t *)self + 4) + 16 * v39 + 20);
}


