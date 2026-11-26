#include "Core/Utils/DecompTypes.h"
#include "gameswf_button_character_definition.h"

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_definition::createCharacterInstance  (binary VA: 0x1182630)
// Original: gameswf::button_character_definition::createCharacterInstance
// ----------------------------------------------------------------------------
gameswf::button_character_instance::Self * gameswf::button_character_definition::createCharacterInstance(gameswf::button_character_definition::Self *self, gameswf::Character::Self *a2, unsigned int a3)
{
  gameswf::Player::Self *v3;
  gameswf::Self *v4;
  gameswf::button_character_instance::Self *v5;

  v3 = *((gameswf::Player::Self **)self + 6);
  if ( v3 != nullptr )
  {
    v4 = *((gameswf::Self **)self + 5);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 6) = 0;
      v3 = nullptr;
    }
  }
  v5 = (gameswf::button_character_instance::Self *)opNew(0xF4u);
  gameswf::button_character_instance::Construct(v5, v3, self, a2, a3);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_definition::Destroy  (binary VA: 0x1182950)
// Original: gameswf::button_character_definition::~button_character_definition
// ----------------------------------------------------------------------------
void gameswf::button_character_definition::Destroy(gameswf::Self **self)
{
  gameswf::button_character_definition::Self *v1;
  int *v2;
  gameswf::Self *v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  gameswf::Self *v9;
  int v10;
  uint32_t *v11;
  gameswf::Self *v12;
  int v13;
  gameswf::button_action::Self *v14;
  gameswf::button_character_definition::Self *v15;
  int v16;
  gameswf::Self *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  void *v22;
  int v23;
  gameswf::Self *v24;
  int v25;
  gameswf::Self *v26;
  gameswf::Self *v27;
  bool v28;
  gameswf::Self *v29;
  int v30;
  int v31;
  uint16_t *v32;
  unsigned int v33;
  uint16_t *v34;
  int v35;
  uint32_t *v36;
  int v37;
  gameswf::Self *v38;
  gameswf::Self *v39;
  uint32_t *v40;
  int v41;
  int v42;

  v1 = (gameswf::button_character_definition::Self *)self;
  v2 = (int *)*(self + 16);
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_2091748);
  v38 = (gameswf::Self *)v2;
  if ( v2 != nullptr )
  {
    v3 = (gameswf::Self *)(v2 + 44);
    v4 = v2 + 41;
    do
    {
      v5 = *v4;
      if ( *v4 < 0 )
      {
        v6 = 8 * v5;
        do
        {
          v7 = *((uint32_t *)v3 - 4) + v6;
          if ( v7 != 0 )
          {
            *(uint32_t *)v7 = 0;
            *(uint16_t *)(v7 + 4) = 0;
            *(uint16_t *)(v7 + 6) = 0;
          }
          v6 += 8;
          ++v5;
        }
        while ( v5 != 0 );
      }
      v8 = v4[2];
      *v4 = 0;
      if ( v8 == 0 )
      {
        v9 = (gameswf::Self *)*(v4 - 1);
        v4[1] = 0;
        if ( v9 != nullptr )
          gameswf::free_internal(v9);
        *(v4 - 1) = 0;
      }
      v3 = (gameswf::Self *)((char *)v3 - 44);
      v4 -= 11;
    }
    while ( v38 != v3 );
    gameswf::free_internal(v38);
    v1 = (gameswf::button_character_definition::Self *)self;
  }
  v10 = *((uint32_t *)v1 + 13);
  v11 = (uint32_t *)(self + 12);
  if ( v10 <= 0 )
  {
    if ( v10 < 0 )
    {
      v35 = 20 * v10;
      do
      {
        v36 = (uint32_t *)(*v11 + v35);
        if ( v36 != nullptr )
        {
          *v36 = 0;
          v36[1] = 0;
          v36[2] = 0;
          v36[3] = 0;
          v36[4] = 0;
        }
        v35 += 20;
        ++v10;
      }
      while ( v10 != 0 );
    }
  }
  else
  {
    v39 = *((gameswf::Self **)v1 + 13);
    v12 = nullptr;
    v13 = 0;
    do
    {
      v12 = (gameswf::Self *)((char *)v12 + 1);
      v14 = (gameswf::button_action::Self *)(v13 + *v11);
      v13 += 20;
      gameswf::button_action::Destroy(v14);
    }
    while ( v12 != v39 );
  }
  v15 = (gameswf::button_character_definition::Self *)self;
  v16 = (int)(uintptr_t)(*(self + 15));
  *(self + 13) = nullptr;
  if ( v16 == 0 )
  {
    v17 = *(self + 12);
    *(self + 14) = nullptr;
    if ( v17 != nullptr )
      gameswf::free_internal(v17);
    v15 = (gameswf::button_character_definition::Self *)self;
    *(self + 12) = nullptr;
  }
  v18 = *((uint32_t *)v15 + 9);
  v41 = v18;
  if ( v18 <= 0 )
  {
    if ( v18 < 0 )
    {
      v30 = 100 * v18;
      do
      {
        v31 = (int)(uintptr_t)(*(self + 8)) + v30;
        if ( v31 != 0 )
        {
          memset((void *)v31, 0, 0x64u);
          v32 = (uint16_t *)(v31 + 20);
          v33 = 24;
          if ( ((v31 + 20) & 1) != 0 )
          {
            *(uint8_t *)(v31 + 20) = 0;
            v32 = (uint16_t *)(v31 + 21);
            LOWORD(v33) = 23;
          }
          if ( ((uint8_t)(uintptr_t)v32 & 2) != 0 )
          {
            *v32 = 0;
            v33 -= 2;
            ++v32;
          }
          memset(v32, 0, 4 * (v33 >> 2));
          v34 = &v32[2 * (v33 >> 2)];
          if ( (v33 & 2) != 0 )
            *v34++ = 0;
          if ( (v33 & 1) != 0 )
            *(uint8_t *)v34 = 0;
          *(uint32_t *)(v31 + 20) = 1065353216;
          *(uint32_t *)(v31 + 36) = 1065353216;
          *(uint32_t *)(v31 + 44) = 1065353216;
          *(uint32_t *)(v31 + 52) = 1065353216;
          *(uint32_t *)(v31 + 60) = 1065353216;
          *(uint32_t *)(v31 + 68) = 1065353216;
          *(uint32_t *)(v31 + 48) = 0;
          *(uint32_t *)(v31 + 56) = 0;
          *(uint32_t *)(v31 + 64) = 0;
          *(uint32_t *)(v31 + 72) = 0;
          *(uint32_t *)(v31 + 76) = 0;
          *(uint32_t *)(v31 + 80) = 0;
          *(uint32_t *)(v31 + 84) = 0;
          *(uint32_t *)(v31 + 88) = 0;
          *(uint32_t *)(v31 + 92) = 0;
        }
        v30 += 100;
        ++v41;
      }
      while ( v41 != 0 );
    }
  }
  else
  {
    v42 = 0;
    v19 = 0;
    do
    {
      v40 = (uint32_t *)((char *)*(self + 8) + 100 * v42);
      v20 = v40[21];
      if ( v20 < 0 )
      {
        v21 = 96 * v20;
        do
        {
          v22 = (void *)(v40[20] + v21);
          if ( v22 != nullptr )
            memset32(v22, v19, 0x18u);
          v21 += 96;
          ++v20;
        }
        while ( v20 != 0 );
      }
      v23 = v40[23];
      v40[21] = 0;
      if ( v23 == 0 )
      {
        v24 = (gameswf::Self *)v40[20];
        v40[22] = 0;
        if ( v24 != nullptr )
        {
          v37 = v19;
          gameswf::free_internal(v24);
          v19 = v37;
        }
        v40[20] = 0;
      }
      ++v42;
    }
    while ( v42 != v41 );
  }
  v25 = (int)(uintptr_t)(*(self + 11));
  *(self + 9) = nullptr;
  if ( v25 == 0 )
  {
    v26 = *(self + 8);
    *(self + 10) = nullptr;
    if ( v26 != nullptr )
      gameswf::free_internal(v26);
    *(self + 8) = nullptr;
  }
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208E728);
  v27 = *(self + 5);
  if ( v27 != nullptr )
  {
    v28 = (*(uint16_t *)v27)-- == 1;
    if ( v28 )
      gameswf::free_internal(v27);
  }
  v29 = *(self + 3);
  if ( v29 != nullptr )
  {
    v28 = (*(uint16_t *)v29)-- == 1;
    if ( v28 )
      gameswf::free_internal(v29);
  }
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy((gameswf::RefCounted::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_definition::Destroy_ea1182d60  (binary VA: 0x1182d60)
// Original: gameswf::button_character_definition::~button_character_definition
// ----------------------------------------------------------------------------
void gameswf::button_character_definition::Destroy_ea1182d60(gameswf::Self **self)
{
  gameswf::button_character_definition::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x1182ed0 (size: 253 bytes)
// Symbol:    _ZN7gameswf27button_character_definitionC1EPNS_6PlayerE
// Demangled: gameswf::button_character_definition::button_character_definition(gameswf::Player *)
// ============================================================================
// Alternative name is '_ZN7gameswf27button_character_definitionC2EPNS_6PlayerE'
void (**gameswf::button_character_definition::button_character_definition(
        gameswf::Self **self,
        gameswf::Player::Self *a2))(gameswf::button_character_definition::Self * self)
{
  gameswf::Self *WeakProxy;
  gameswf::Self *v3;
  gameswf::Self *v6;

  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)self);
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208E728);
  *(self + 3) = nullptr;
  *(self + 4) = nullptr;
  *(self + 5) = nullptr;
  *(self + 6) = (gameswf::Self *)(a2);
  if ( a2 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
    v3 = *(self + 5);
    if ( WeakProxy != v3 )
    {
      if ( v3 != nullptr && (*(uint16_t *)v3)-- == 1 )
      {
        v6 = WeakProxy;
        gameswf::free_internal(v3);
        WeakProxy = v6;
      }
      *(self + 5) = WeakProxy;
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  *(self + 8) = nullptr;
  *(self + 9) = nullptr;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_2091748);
  *(self + 10) = nullptr;
  *(self + 11) = nullptr;
  *(self + 12) = nullptr;
  *(self + 13) = nullptr;
  *(self + 14) = nullptr;
  *(self + 15) = nullptr;
  *(self + 16) = nullptr;
  return (void (**)(gameswf::button_character_definition::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091748));
}
// ----------------------------------------------------------------------------
// Function: gameswf::button_character_definition::sound_info::read  (binary VA: 0x1182fd0)
// Original: gameswf::button_character_definition::sound_info::read
// ----------------------------------------------------------------------------
char gameswf::button_character_definition::sound_info::read(gameswf::button_character_definition::sound_info::Self *self, gameswf::Stream::Self *a2)
{
  gameswf::button_character_definition::sound_info::Self *v2;
  int U32;
  uint8_t U8;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  bool v16;
  gameswf::Self *v17;
  int v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  uint8_t v24;
  gameswf::button_character_definition::sound_info::Self *v25;
  int v26;

  v2 = self;
  *((uint16_t *)self + 8) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 2) = 0;
  gameswf::Stream::readUInt(a2, 2);
  *((uint8_t *)self + 1) = gameswf::Stream::readUInt(a2, 1) != 0;
  *(uint8_t *)self = gameswf::Stream::readUInt(a2, 1) != 0;
  *((uint8_t *)self + 2) = gameswf::Stream::readUInt(a2, 1) != 0;
  *((uint8_t *)self + 3) = gameswf::Stream::readUInt(a2, 1) != 0;
  *((uint8_t *)self + 4) = gameswf::Stream::readUInt(a2, 1) != 0;
  LOBYTE(U32) = gameswf::Stream::readUInt(a2, 1) != 0;
  *((uint8_t *)self + 5) = U32;
  if ( (uint8_t)U32 != 0 )
  {
    U32 = gameswf::Stream::readU32(a2);
    *((uint32_t *)self + 2) = U32;
  }
  if ( *((uint8_t *)self + 4) != 0 )
  {
    U32 = gameswf::Stream::readU32(a2);
    *((uint32_t *)self + 3) = U32;
  }
  if ( *((uint8_t *)self + 3) != 0 )
  {
    LOWORD(U32) = gameswf::Stream::readU16(a2);
    *((uint16_t *)self + 8) = U32;
  }
  if ( *((uint8_t *)self + 2) != 0 )
  {
    U8 = gameswf::Stream::readU8(a2);
    v5 = U8;
    v24 = U8;
    v6 = *((uint32_t *)self + 6);
    if ( U8 != 0 )
    {
      v14 = *((uint32_t *)self + 7);
      if ( v5 > v14 && *((uint32_t *)self + 8) == 0 )
      {
        v15 = v5 + (v5 >> 1);
        v16 = v15 == 0;
        v19 = v15;
        *((uint32_t *)self + 7) = v15;
        v17 = *((gameswf::Self **)self + 5);
        if ( v16 )
        {
          if ( v17 != nullptr )
          {
            v22 = v5;
            gameswf::free_internal(v17);
            v5 = v22;
          }
          *((uint32_t *)self + 5) = 0;
        }
        else
        {
          v23 = v5;
          if ( v17 != nullptr )
            *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*((gameswf::Self **)self + 5), 8 * v19, 8 * v14));
          else
            *((uint32_t *)self + 5) = gameswf::malloc_internal(8 * v19);
          v5 = v23;
        }
      }
    }
    U32 = 8 * v6;
    if ( v5 > v6 )
    {
      do
      {
        v7 = *((uint32_t *)self + 5) + U32;
        if ( v7 != 0 )
        {
          *(uint32_t *)v7 = 0;
          *(uint16_t *)(v7 + 4) = 0;
          *(uint16_t *)(v7 + 6) = 0;
        }
        ++v6;
        U32 += 8;
      }
      while ( v5 > v6 );
      v2 = self;
    }
    *((uint32_t *)v2 + 6) = v5;
    if ( v5 != 0 )
    {
      v8 = v24 + 1;
      v25 = v2;
      v26 = v8;
      v9 = 1;
      do
      {
        v10 = 8 * v9++ - 8;
        v20 = (int *)(*((uint32_t *)v25 + 5) + v10);
        *v20 = gameswf::Stream::readU32(a2);
        v21 = *((uint32_t *)v25 + 5) + v10;
        *(uint16_t *)(v21 + 4) = gameswf::Stream::readU16(a2);
        v11 = *((uint32_t *)v25 + 5) + v10;
        LOWORD(U32) = gameswf::Stream::readU16(a2);
        *(uint16_t *)(v11 + 6) = U32;
      }
      while ( v9 != v26 );
    }
  }
  else
  {
    v12 = *((uint32_t *)self + 6);
    if ( v12 < 0 )
    {
      U32 = 8 * v12;
      do
      {
        v13 = *((uint32_t *)self + 5) + U32;
        if ( v13 != 0 )
        {
          *(uint32_t *)v13 = 0;
          *(uint16_t *)(v13 + 4) = 0;
          *(uint16_t *)(v13 + 6) = 0;
        }
        U32 += 8;
        ++v12;
      }
      while ( v12 != 0 );
    }
    *((uint32_t *)self + 6) = 0;
  }
  return U32;
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_definition::read  (binary VA: 0x11832e0)
// Original: gameswf::button_character_definition::read
// ----------------------------------------------------------------------------
char gameswf::button_character_definition::read(long double a1, __m128 a2, gameswf::button_character_definition::Self *self, gameswf::Stream::Self *a4, int a5, gameswf::MovieDefinitionSub::Self *a6)
{
  int TagEndPosition;
  int v7;
  int v8;
  char *v9;
  int v10;
  bool v11;
  char *v12;
  int v13;
  bool v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  void *v20;
  int v21;
  int v22;
  char *v23;
  char *v24;
  int v25;
  int v26;
  int v27;
  char *v28;
  char *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  char *v34;
  int v35;
  char *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  void *v43;
  int v44;
  int v45;
  char *v46;
  char *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  char *v52;
  int v53;
  char *v54;
  int v55;
  int v56;
  uint32_t *v57;
  uint16_t U16;
  int v59;
  uint16_t v60;
  int v61;
  uint16_t v62;
  int v63;
  gameswf::Self *v64;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_Position;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef char *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef char *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef uint32_t _g4_t_v89[5];
  typedef uint32_t _g4_t_v90[15];
  typedef gameswf::Self *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v66)) > _g4_s0 ? (8u + sizeof(_g4_t_v66)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v67)) > _g4_s1 ? (8u + sizeof(_g4_t_v67)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v68)) > _g4_s2 ? (12u + sizeof(_g4_t_v68)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v69)) > _g4_s3 ? (12u + sizeof(_g4_t_v69)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_Position)) > _g4_s4 ? (16u + sizeof(_g4_t_Position)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v71)) > _g4_s5 ? (20u + sizeof(_g4_t_v71)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v72)) > _g4_s6 ? (28u + sizeof(_g4_t_v72)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v73)) > _g4_s7 ? (28u + sizeof(_g4_t_v73)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v74)) > _g4_s8 ? (28u + sizeof(_g4_t_v74)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v75)) > _g4_s9 ? (32u + sizeof(_g4_t_v75)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v76)) > _g4_s10 ? (32u + sizeof(_g4_t_v76)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v77)) > _g4_s11 ? (36u + sizeof(_g4_t_v77)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v78)) > _g4_s12 ? (36u + sizeof(_g4_t_v78)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v79)) > _g4_s13 ? (40u + sizeof(_g4_t_v79)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v80)) > _g4_s14 ? (40u + sizeof(_g4_t_v80)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v81)) > _g4_s15 ? (40u + sizeof(_g4_t_v81)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v82)) > _g4_s16 ? (44u + sizeof(_g4_t_v82)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v83)) > _g4_s17 ? (44u + sizeof(_g4_t_v83)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v84)) > _g4_s18 ? (44u + sizeof(_g4_t_v84)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v85)) > _g4_s19 ? (44u + sizeof(_g4_t_v85)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v86)) > _g4_s20 ? (44u + sizeof(_g4_t_v86)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v87)) > _g4_s21 ? (44u + sizeof(_g4_t_v87)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v88)) > _g4_s22 ? (44u + sizeof(_g4_t_v88)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v89)) > _g4_s23 ? (48u + sizeof(_g4_t_v89)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v90)) > _g4_s24 ? (68u + sizeof(_g4_t_v90)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v91)) > _g4_s25 ? (128u + sizeof(_g4_t_v91)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v92)) > _g4_s26 ? (132u + sizeof(_g4_t_v92)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v93)) > _g4_s27 ? (136u + sizeof(_g4_t_v93)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v94)) > _g4_s28 ? (140u + sizeof(_g4_t_v94)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v95)) > _g4_s29 ? (144u + sizeof(_g4_t_v95)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 8u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 8u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 12u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 12u);
  _g4_t_Position &Position = *reinterpret_cast<_g4_t_Position *>(_g4_sf + 16u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 28u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 28u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 28u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 32u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 36u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 36u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 40u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 40u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 40u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 44u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 44u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 44u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 44u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 44u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 44u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 44u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 48u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 68u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 128u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 132u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 136u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 140u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 144u);

  LOBYTE(TagEndPosition) = a5;
  switch ( a5 )
  {
    case 7:
      while ( 1 )
      {
        memset(v90, 0, 0x18u);
        v90[0] = 1065353216;
        v90[4] = 1065353216;
        v90[6] = 1065353216;
        v90[8] = 1065353216;
        v90[10] = 1065353216;
        v90[12] = 1065353216;
        v90[7] = 0;
        v90[9] = 0;
        v90[11] = 0;
        v90[13] = 0;
        v90[14] = 0;
        v91 = nullptr;
        v92 = 0;
        v93 = 0;
        v94 = 0;
        if ( (uint8_t)gameswf::button_record::read(a1, a2, (gameswf::button_record::Self *)v89, a4, 7) == 0 )
          break;
        v7 = *((uint32_t *)self + 9);
        v8 = *((uint32_t *)self + 10);
        v72 = v7 + 1;
        if ( v7 + 1 <= v8 || *((uint32_t *)self + 11) != 0 )
        {
          v9 = *((char **)self + 8);
        }
        else
        {
          v16 = v72 + (v72 >> 1);
          *((uint32_t *)self + 10) = v16;
          if ( v16 != 0 )
          {
            if ( *((uint32_t *)self + 8) != 0 )
              v9 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 8), 100 * v16, 100 * v8);
            else
              v9 = (char *)gameswf::malloc_internal(100 * v16);
            *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v9);
            v7 = *((uint32_t *)self + 9);
          }
          else
          {
            if ( *((uint32_t *)self + 8) != 0 )
            {
              gameswf::free_internal(*((gameswf::Self **)self + 8));
              v7 = *((uint32_t *)self + 9);
            }
            *((uint32_t *)self + 8) = 0;
            v9 = nullptr;
          }
        }
        v10 = 100 * v7;
        v11 = &v9[v10] == nullptr;
        v12 = &v9[v10];
        v82 = v12;
        if ( !v11 )
        {
          *(uint32_t *)v12 = v89[0];
          *((uint16_t *)v12 + 2) = v89[1];
          *((uint32_t *)v12 + 2) = v89[2];
          *((uint32_t *)v12 + 3) = v89[3];
          *((uint32_t *)v12 + 4) = v89[4];
          std::memcpy(v12 + 20, v90, 60);
          *((uint32_t *)v12 + 21) = 0;
          *((uint32_t *)v12 + 20) = 0;
          *((uint32_t *)v12 + 22) = 0;
          *((uint32_t *)v12 + 23) = 0;
          v75 = v92;
          if ( v92 > 0 )
          {
            v17 = 0;
            v18 = v92 + (v92 >> 1);
            *((uint32_t *)v82 + 22) = v18;
            v19 = gameswf::malloc_internal(96 * v18);
            v79 = 0;
            for ( *((uint32_t *)v82 + 20) = v19; ; v19 = *((uint32_t *)v82 + 20) )
            {
              v20 = (void *)(v79 + v19);
              if ( v20 != nullptr )
                memset(v20, 0, 0x60u);
              ++v17;
              v79 += 96;
              if ( v17 == v75 )
                break;
            }
            v21 = 0;
            *((uint32_t *)v82 + 21) = v17;
            v22 = 0;
            do
            {
              ++v22;
              v23 = (char *)(v21 + *((uint32_t *)v82 + 20));
              v24 = (char *)v91 + v21;
              v21 += 96;
              std::memcpy(v23, v24, 96);
            }
            while ( v22 < *((uint32_t *)v82 + 21) );
            *((uint32_t *)v82 + 24) = v95;
          }
          else
          {
            *((uint32_t *)v12 + 21) = v92;
            *((uint32_t *)v12 + 24) = v95;
          }
        }
        v13 = v92;
        v14 = v92 < 0;
        v83 = v92;
        *((uint32_t *)self + 9) = v72;
        if ( v14 )
        {
          v15 = 96 * v13;
          do
          {
            if ( (gameswf::Self *)((char *)v91 + v15) != nullptr )
              memset((char *)v91 + v15, 0, 0x60u);
            v15 += 96;
            ++v83;
          }
          while ( v83 != 0 );
        }
        v92 = 0;
        if ( v94 == 0 )
        {
          v93 = 0;
          if ( v91 != nullptr )
            gameswf::free_internal(v91);
        }
      }
      v84 = v92;
      if ( v92 < 0 )
      {
        v25 = 96 * v92;
        do
        {
          if ( (gameswf::Self *)((char *)v91 + v25) != nullptr )
            memset((char *)v91 + v25, 0, 0x60u);
          v25 += 96;
          ++v84;
        }
        while ( v84 != 0 );
      }
      v92 = 0;
      if ( v94 == 0 )
      {
        v93 = 0;
        if ( v91 != nullptr )
          gameswf::free_internal(v91);
        v91 = nullptr;
      }
      v26 = *((uint32_t *)self + 13);
      v27 = v26 + 1;
      if ( v26 == -1 || (v30 = *((uint32_t *)self + 14), v27 <= v30) || *((uint32_t *)self + 15) != 0 )
      {
        v28 = *((char **)self + 12);
      }
      else
      {
        v31 = v27 + (v27 >> 1);
        *((uint32_t *)self + 14) = v31;
        if ( v31 != 0 )
        {
          v64 = *((gameswf::Self **)self + 12);
          if ( v64 != nullptr )
            v28 = (char *)gameswf::realloc_internal(v64, 20 * v31, 20 * v30);
          else
            v28 = (char *)gameswf::malloc_internal(20 * v31);
          *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v28);
        }
        else
        {
          if ( *((uint32_t *)self + 12) != 0 )
            gameswf::free_internal(*((gameswf::Self **)self + 12));
          v28 = nullptr;
          *((uint32_t *)self + 12) = 0;
        }
      }
      v29 = &v28[20 * v26];
      if ( v29 != nullptr )
      {
        *(uint32_t *)v29 = 0;
        *((uint32_t *)v29 + 1) = 0;
        *((uint32_t *)v29 + 2) = 0;
        *((uint32_t *)v29 + 3) = 0;
        *((uint32_t *)v29 + 4) = 0;
      }
      *((uint32_t *)self + 13) = v27;
      LOBYTE(TagEndPosition) = (uint8_t)(uintptr_t)gameswf::button_action::read(
                                                  (gameswf::button_action::Self *)(*((uint32_t *)self + 12) + 20 * v26),
                                                  a4,
                                                  7);
      break;
    case 17:
      v57 = (uint32_t *)opNew(0xB0u);
      memset(v57, 0, 0xB0u);
      *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(v57);
      U16 = gameswf::Stream::readU16(a4);
      *(uint16_t *)v57 = U16;
      if ( U16 != 0 )
      {
        v57[1] = G4_VCALL<int>(a6, 160, U16);
        gameswf::button_character_definition::sound_info::read(
          (gameswf::button_character_definition::sound_info::Self *)(v57 + 2),
          a4);
      }
      v59 = *((uint32_t *)self + 16);
      v60 = gameswf::Stream::readU16(a4);
      *(uint16_t *)(v59 + 44) = v60;
      if ( v60 != 0 )
      {
        *(uint32_t *)(v59 + 48) = G4_VCALL<int>(a6, 160, v60);
        gameswf::button_character_definition::sound_info::read(
          (gameswf::button_character_definition::sound_info::Self *)(v59 + 52),
          a4);
      }
      v61 = *((uint32_t *)self + 16);
      v62 = gameswf::Stream::readU16(a4);
      *(uint16_t *)(v61 + 88) = v62;
      if ( v62 != 0 )
      {
        *(uint32_t *)(v61 + 92) = G4_VCALL<int>(a6, 160, v62);
        gameswf::button_character_definition::sound_info::read(
          (gameswf::button_character_definition::sound_info::Self *)(v61 + 96),
          a4);
      }
      v63 = *((uint32_t *)self + 16);
      LOWORD(TagEndPosition) = gameswf::Stream::readU16(a4);
      *(uint16_t *)(v63 + 132) = TagEndPosition;
      if ( (uint16_t)TagEndPosition != 0 )
      {
        *(uint32_t *)(v63 + 136) = G4_VCALL<int>(a6, 160, (uint16_t)TagEndPosition);
        LOBYTE(TagEndPosition) = gameswf::button_character_definition::sound_info::read(
                                   (gameswf::button_character_definition::sound_info::Self *)(v63 + 140),
                                   a4);
      }
      break;
    case 34:
      *((uint8_t *)self + 28) = (uint8_t)gameswf::Stream::readU8(a4) != 0;
      v71 = (uint16_t)gameswf::Stream::readU16(a4);
      Position = gameswf::Stream::getPosition(a4);
      while ( 1 )
      {
        memset(v90, 0, 0x18u);
        v90[0] = 1065353216;
        v90[4] = 1065353216;
        v90[6] = 1065353216;
        v90[8] = 1065353216;
        v90[10] = 1065353216;
        v90[12] = 1065353216;
        v90[7] = 0;
        v90[9] = 0;
        v90[11] = 0;
        v90[13] = 0;
        v90[14] = 0;
        v91 = nullptr;
        v92 = 0;
        v93 = 0;
        v94 = 0;
        if ( (uint8_t)gameswf::button_record::read(a1, a2, (gameswf::button_record::Self *)v89, a4, 34) == 0 )
          break;
        v32 = *((uint32_t *)self + 9);
        v33 = *((uint32_t *)self + 10);
        v73 = v32 + 1;
        if ( v32 + 1 <= v33 || *((uint32_t *)self + 11) != 0 )
        {
          v34 = *((char **)self + 8);
        }
        else
        {
          v39 = v73 + (v73 >> 1);
          *((uint32_t *)self + 10) = v39;
          if ( v39 != 0 )
          {
            if ( *((uint32_t *)self + 8) != 0 )
              v34 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 8), 100 * v39, 100 * v33);
            else
              v34 = (char *)gameswf::malloc_internal(100 * v39);
            *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v34);
            v32 = *((uint32_t *)self + 9);
          }
          else
          {
            if ( *((uint32_t *)self + 8) != 0 )
            {
              gameswf::free_internal(*((gameswf::Self **)self + 8));
              v32 = *((uint32_t *)self + 9);
            }
            *((uint32_t *)self + 8) = 0;
            v34 = nullptr;
          }
        }
        v35 = 100 * v32;
        v11 = &v34[v35] == nullptr;
        v36 = &v34[v35];
        v85 = v36;
        if ( !v11 )
        {
          *(uint32_t *)v36 = v89[0];
          *((uint16_t *)v36 + 2) = v89[1];
          *((uint32_t *)v36 + 2) = v89[2];
          *((uint32_t *)v36 + 3) = v89[3];
          *((uint32_t *)v36 + 4) = v89[4];
          std::memcpy(v36 + 20, v90, 60);
          *((uint32_t *)v36 + 21) = 0;
          *((uint32_t *)v36 + 20) = 0;
          *((uint32_t *)v36 + 22) = 0;
          *((uint32_t *)v36 + 23) = 0;
          v76 = v92;
          if ( v92 > 0 )
          {
            v40 = 0;
            v41 = v92 + (v92 >> 1);
            *((uint32_t *)v85 + 22) = v41;
            v42 = gameswf::malloc_internal(96 * v41);
            v80 = 0;
            for ( *((uint32_t *)v85 + 20) = v42; ; v42 = *((uint32_t *)v85 + 20) )
            {
              v43 = (void *)(v80 + v42);
              if ( v43 != nullptr )
                memset(v43, 0, 0x60u);
              ++v40;
              v80 += 96;
              if ( v40 == v76 )
                break;
            }
            v44 = 0;
            *((uint32_t *)v85 + 21) = v40;
            v45 = 0;
            do
            {
              ++v45;
              v46 = (char *)(v44 + *((uint32_t *)v85 + 20));
              v47 = (char *)v91 + v44;
              v44 += 96;
              std::memcpy(v46, v47, 96);
            }
            while ( v45 < *((uint32_t *)v85 + 21) );
            *((uint32_t *)v85 + 24) = v95;
          }
          else
          {
            *((uint32_t *)v36 + 21) = v92;
            *((uint32_t *)v36 + 24) = v95;
          }
        }
        v37 = v92;
        v14 = v92 < 0;
        v86 = v92;
        *((uint32_t *)self + 9) = v73;
        if ( v14 )
        {
          v38 = 96 * v37;
          do
          {
            if ( (gameswf::Self *)((char *)v91 + v38) != nullptr )
              memset((char *)v91 + v38, 0, 0x60u);
            v38 += 96;
            ++v86;
          }
          while ( v86 != 0 );
        }
        v92 = 0;
        if ( v94 == 0 )
        {
          v93 = 0;
          if ( v91 != nullptr )
            gameswf::free_internal(v91);
        }
      }
      v87 = v92;
      if ( v92 < 0 )
      {
        v48 = 96 * v92;
        do
        {
          if ( (gameswf::Self *)((char *)v91 + v48) != nullptr )
            memset((char *)v91 + v48, 0, 0x60u);
          v48 += 96;
          ++v87;
        }
        while ( v87 != 0 );
      }
      v92 = 0;
      if ( v94 == 0 )
      {
        v93 = 0;
        if ( v91 != nullptr )
          gameswf::free_internal(v91);
        v91 = nullptr;
      }
      LOBYTE(TagEndPosition) = v71;
      if ( v71 != 0 )
      {
        gameswf::Stream::setPosition(a4, v71 + Position - 2);
        while ( 1 )
        {
          v88 = (uint16_t)gameswf::Stream::readU16(a4);
          v49 = gameswf::Stream::getPosition(a4);
          v50 = *((uint32_t *)self + 13);
          v81 = v49;
          v51 = v50 + 1;
          if ( v50 == -1 || (v74 = *((uint32_t *)self + 14), v51 <= v74) || *((uint32_t *)self + 15) != 0 )
          {
            v52 = *((char **)self + 12);
          }
          else
          {
            v55 = v51 + (v51 >> 1);
            v11 = v55 == 0;
            v78 = v55;
            *((uint32_t *)self + 14) = v55;
            v56 = *((uint32_t *)self + 12);
            if ( v11 )
            {
              if ( v56 != 0 )
              {
                v66 = v50 + 1;
                v68 = v50;
                gameswf::free_internal(*((gameswf::Self **)self + 12));
                v50 = v68;
                v51 = v66;
              }
              *((uint32_t *)self + 12) = 0;
              v52 = nullptr;
            }
            else
            {
              v67 = v50 + 1;
              v69 = v50;
              v52 = v56 != 0
                  ? (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 12), 20 * v78, 20 * v74)
                  : (char *)gameswf::malloc_internal(20 * v78);
              *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v52);
              v51 = v67;
              v50 = v69;
            }
          }
          v53 = 20 * v50;
          v54 = &v52[v53];
          if ( v54 != nullptr )
          {
            *(uint32_t *)v54 = 0;
            *((uint32_t *)v54 + 1) = 0;
            *((uint32_t *)v54 + 2) = 0;
            *((uint32_t *)v54 + 3) = 0;
            *((uint32_t *)v54 + 4) = 0;
          }
          *((uint32_t *)self + 13) = v51;
          gameswf::button_action::read((gameswf::button_action::Self *)(*((uint32_t *)self + 12) + v53), a4, 34);
          LOBYTE(TagEndPosition) = v88;
          if ( v88 == 0 )
            break;
          v77 = gameswf::Stream::getPosition(a4);
          TagEndPosition = gameswf::Stream::getTagEndPosition(a4);
          if ( v77 >= TagEndPosition )
            break;
          gameswf::Stream::setPosition(a4, v88 + v81 - 2);
        }
      }
      break;
    default:
      break;
  }
  return TagEndPosition;
}


