#include "Core/Utils/DecompTypes.h"
#include "gameswf_button_character_instance.h"

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_instance::hasKeypressEvent  (binary VA: 0x11840b0)
// Original: gameswf::button_character_instance::hasKeypressEvent
// ----------------------------------------------------------------------------
int gameswf::button_character_instance::hasKeypressEvent(gameswf::button_character_instance::Self *self)
{
  int v1;
  int result;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;

  v1 = *((uint32_t *)self + 53);
  result = 0;
  v3 = *(uint32_t *)(v1 + 52);
  if ( v3 > 0 )
  {
    v4 = *(uint32_t **)(v1 + 48);
    result = 1;
    if ( (*v4 & 0xFE00) == 0 )
    {
      v5 = 5;
      v6 = 0;
      do
      {
        if ( ++v6 == v3 )
          return 0;
        v7 = v4[v5];
        v5 += 5;
      }
      while ( (v7 & 0xFE00) == 0 );
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_instance::hitTest  (binary VA: 0x1184100)
// Original: gameswf::button_character_instance::hitTest
// ----------------------------------------------------------------------------
bool gameswf::button_character_instance::hitTest(gameswf::button_character_instance::Self *self, float a2, float a3)
{
  return G4_VCALL<int>(self, 108, LODWORD(a2), LODWORD(a3)) != 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_instance::canHandleMouseEvent  (binary VA: 0x1184130)
// Original: gameswf::button_character_instance::canHandleMouseEvent
// ----------------------------------------------------------------------------
int gameswf::button_character_instance::canHandleMouseEvent()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_instance::getCharacterDef  (binary VA: 0x1184140)
// Original: gameswf::button_character_instance::getCharacterDef
// ----------------------------------------------------------------------------
int gameswf::button_character_instance::getCharacterDef(gameswf::button_character_instance::Self *self)
{
  return *((uint32_t *)self + 53);
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_instance::executeFrameTags  (binary VA: 0x1184150)
// Original: gameswf::button_character_instance::executeFrameTags
// ----------------------------------------------------------------------------
uint32_t * gameswf::button_character_instance::executeFrameTags(gameswf::button_character_instance::Self *self, int a2, bool a3)
{
  bool v3;
  uint32_t *result;
  int v5;
  int v6;
  bool v7;

  v3 = a3;
  if ( self != nullptr )
  {
    gameswf::RefCounted::addRef(self);
    v3 = a3;
  }
  result = *((uint32_t **)self + 53);
  v5 = result[9];
  if ( v5 > 0 )
  {
    v6 = 0;
    v7 = v3;
    do
    {
      result = *(uint32_t **)(*((uint32_t *)self + 54) + 4 * v6);
      if ( result != nullptr )
      {
        (*(void (**)(uint32_t, int, bool))(*result + 208))(*(uint32_t *)(*((uint32_t *)self + 54) + 4 * v6), a2, v7);
        result = *((uint32_t **)self + 53);
        v5 = result[9];
      }
      ++v6;
    }
    while ( v6 < v5 );
  }
  if ( self != nullptr )
    return (uint32_t *)gameswf::RefCounted::dropRef(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_instance::display  (binary VA: 0x11841f0)
// Original: gameswf::button_character_instance::display
// ----------------------------------------------------------------------------
void gameswf::button_character_instance::display(gameswf::button_character_instance::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint8_t *v6;
  int v7;
  int v8;
  int v9;

  if ( *((uint8_t *)self + 148) == 0 )
    return;
  v1 = *((uint32_t *)self + 53);
  v2 = 0;
  v3 = v1;
  v9 = *(uint32_t *)(v1 + 36);
  if ( v9 > 0 )
  {
    while ( 1 )
    {
      v4 = *(uint32_t *)(v1 + 32);
      v5 = *(uint32_t *)(*((uint32_t *)self + 54) + 4 * v2);
      if ( v5 == 0 )
        goto LABEL_6;
      v6 = (uint8_t *)(v4 + 100 * v2);
      v7 = *((uint32_t *)self + 60);
      switch ( v7 )
      {
        case 0:
          goto LABEL_4;
        case 1:
          if ( v6[3] == 0 )
          {
LABEL_6:
            if ( ++v2 >= v9 )
              goto LABEL_14;
            goto LABEL_7;
          }
LABEL_5:
          (*(void (**)(uint32_t))(*(uint32_t *)v5 + 284))(*(uint32_t *)(*((uint32_t *)self + 54) + 4 * v2));
          v3 = *((uint32_t *)self + 53);
          v9 = *(uint32_t *)(v3 + 36);
          goto LABEL_6;
        case 2:
          if ( v6[4] != 0 )
            goto LABEL_5;
          if ( ++v2 >= v9 )
            goto LABEL_14;
LABEL_7:
          v1 = v3;
          break;
        default:
          goto LABEL_6;
      }
    }
LABEL_4:
    if ( v6[5] == 0 )
      goto LABEL_6;
    goto LABEL_5;
  }
LABEL_14:
  v8 = *((uint32_t *)self + 19);
  if ( v8 != 0 && *(uint32_t *)(v8 + 132) != 0 )
    gameswf::Character::doDisplayCallback(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_instance::getTopmostMouseEntity  (binary VA: 0x1184460)
// Original: gameswf::button_character_instance::getTopmostMouseEntity
// ----------------------------------------------------------------------------
gameswf::button_character_instance::Self * gameswf::button_character_instance::getTopmostMouseEntity(gameswf::button_character_instance::Self *self, float a2, float a3)
{
  const gameswf::Matrix::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  typedef float _g4_t_v9;
  typedef float _g4_t_v10;
  typedef float _g4_t_v11[13];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);

  if ( *((uint8_t *)self + 148) == 0 )
    return nullptr;
  v3 = *((const gameswf::Matrix::Self **)self + 17);
  memset(v11, 0, 0x18u);
  v11[0] = 1.0;
  v11[4] = 1.0;
  gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v11, v3);
  v4 = *((uint32_t *)self + 53);
  v5 = *(uint32_t *)(v4 + 36);
  v9 = (float)((float)(v11[0] * a2) + v11[2]) + (float)(v11[1] * a3);
  v10 = (float)((float)(a2 * v11[3]) + v11[5]) + (float)(a3 * v11[4]);
  if ( v5 <= 0 )
    return nullptr;
  v6 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(uint32_t *)(v4 + 32) + 100 * v6;
      if ( *(int *)(v7 + 8) >= 0 && *(uint8_t *)(v7 + 2) != 0 )
        break;
      if ( ++v6 >= v5 )
        return nullptr;
    }
    memset(v11, 0, 0x18u);
    v11[0] = 1.0;
    v11[4] = 1.0;
    gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v11, (const gameswf::Matrix::Self *)(v7 + 20));
    if ( (*(uint8_t (**)(uint32_t, uint32_t, uint32_t))(**(uint32_t **)(v7 + 12) + 16))(
           *(uint32_t *)(v7 + 12),
           (float)((float)(v9 * v11[0]) + (float)(v10 * v11[1])) + v11[2],
           (float)((float)(v9 * v11[3]) + (float)(v10 * v11[4])) + v11[5]) != 0 )
      break;
    ++v6;
    v4 = *((uint32_t *)self + 53);
    v5 = *(uint32_t *)(v4 + 36);
    if ( v6 >= v5 )
      return nullptr;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_instance::Destroy  (binary VA: 0x1184640)
// Original: gameswf::button_character_instance::~button_character_instance
// ----------------------------------------------------------------------------
void gameswf::button_character_instance::Destroy(gameswf::button_character_instance::Self *self)
{
  uint32_t *v1;
  int v2;
  int i;
  int v4;
  gameswf::Self *v5;
  int v6;
  uint32_t *v7;

  v1 = (uint32_t *)((char *)self + 216);
  v2 = *((uint32_t *)self + 55);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091788);
  if ( v2 <= 0 )
  {
    if ( v2 < 0 )
    {
      v6 = 4 * v2;
      do
      {
        v7 = (uint32_t *)(*v1 + v6);
        if ( v7 != nullptr )
          *v7 = 0;
        v6 += 4;
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
  v4 = *((uint32_t *)self + 57);
  *((uint32_t *)self + 55) = 0;
  if ( v4 == 0 )
  {
    v5 = *((gameswf::Self **)self + 54);
    *((uint32_t *)self + 56) = 0;
    if ( v5 != nullptr )
      gameswf::free_internal(v5);
    *((uint32_t *)self + 54) = 0;
  }
  if ( *((uint32_t *)self + 53) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 53));
  gameswf::Character::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_instance::getMouseState  (binary VA: 0x1184740)
// Original: gameswf::button_character_instance::getMouseState
// ----------------------------------------------------------------------------
int gameswf::button_character_instance::getMouseState(gameswf::button_character_instance::Self *self, int *a2, int *a3, int *a4)
{
  int v4;
  gameswf::Self *v5;

  v4 = *((uint32_t *)self + 14);
  if ( v4 != 0 )
  {
    v5 = *((gameswf::Self **)self + 13);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      if ( (*(uint16_t *)v5)-- == 1 )
        gameswf::free_internal(v5);
      *((uint32_t *)self + 13) = 0;
      *((uint32_t *)self + 14) = 0;
      v4 = 0;
    }
  }
  return G4_VCALL<int>(v4, 120, a2, a3, a4);
}



// ============================================================================
// Address:   0x1184ad0 (size: 1424 bytes)
// Symbol:    _ZN7gameswf25button_character_instance7onEventERKNS_7EventIdE
// Demangled: gameswf::button_character_instance::onEvent(gameswf::EventId const&)
// ============================================================================
int gameswf::button_character_instance::onEvent(
        int a1,
        gameswf::RefCounted::Self **self,
        const gameswf::EventId::Self *a3)
{
  gameswf::RefCounted::Self *v3;
  gameswf::Self *v4;
  gameswf::RefCounted::Self *v5;
  int v6;
  uint8_t v7;
  int v10;
  int *SoundHandler;
  uint8_t v12; // bp
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  char *v23;
  char v24;
  int16_t v25;
  unsigned int v26;
  int v27;
  int *v28;
  int v29;
  int16_t v30;
  int16_t v31;
  int16_t v32;
  gameswf::RefCounted::Self *v33;
  char v34;
  uint32_t *v35;
  uint8_t v36;
  int v37;

  v3 = (gameswf::RefCounted::Self *)self;
  if ( self != nullptr )
  {
    v30 = HIWORD(a1);
    gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)self);
    HIWORD(a1) = v30;
  }
  v33 = *(self + 14);
  if ( v33 != nullptr )
  {
    v4 = (gameswf::Self *)(*(self + 13));
    if ( *((uint8_t *)v4 + 2) != 0 )
    {
      v31 = HIWORD(a1);
      gameswf::RefCounted::addRef(v33);
      v5 = *(self + 53);
      v36 = 0;
      if ( v5 == nullptr )
      {
LABEL_10:
        gameswf::RefCounted::dropRef(v33);
        goto LABEL_11;
      }
      gameswf::RefCounted::addRef(v5);
      HIWORD(v6) = v31;
      v7 = *(uint8_t *)a3;
      if ( *(uint8_t *)a3 == 8 )
      {
        if ( LOBYTE(g4_guard_fdbe654e68[0]) == 0 )
        {
          v27 = _cxa_guard_acquire(g4_guard_fdbe654e68);
          HIWORD(v6) = v31;
          if ( v27 != 0 )
          {
            g4_fnstatic_4d802b4039 = 0;
            *(uint8_t *)(unk_21159A1) = (uint8_t)(uintptr_t)(0);
            *(uint16_t *)(unk_21159A2) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_21159A4) = (uintptr_t)(0);
            *(uint8_t *)(unk_21159A8) = (uint8_t)(uintptr_t)(8);
            *(uint8_t *)(unk_21159A9) = (uint8_t)(uintptr_t)(37);
            *(uint16_t *)(unk_21159AA) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_21159AC) = (uintptr_t)(0);
            *(uint8_t *)(unk_21159B0) = (uint8_t)(uintptr_t)(8);
            *(uint8_t *)(unk_21159B1) = (uint8_t)(uintptr_t)(39);
            *(uint16_t *)(unk_21159B2) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_21159B4) = (uintptr_t)(0);
            *(uint8_t *)(unk_21159B8) = (uint8_t)(uintptr_t)(8);
            *(uint8_t *)(unk_21159B9) = (uint8_t)(uintptr_t)(36);
            *(uint16_t *)(unk_21159BA) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_21159BC) = (uintptr_t)(0);
            *(uint8_t *)(unk_21159C0) = (uint8_t)(uintptr_t)(8);
            *(uint8_t *)(unk_21159C1) = (uint8_t)(uintptr_t)(35);
            *(uint16_t *)(unk_21159C2) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_21159C4) = (uintptr_t)(0);
            *(uint8_t *)(unk_21159C8) = (uint8_t)(uintptr_t)(8);
            *(uint8_t *)(unk_21159C9) = (uint8_t)(uintptr_t)(45);
            *(uint16_t *)(unk_21159CA) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_21159CC) = (uintptr_t)(0);
            *(uint8_t *)(unk_21159D0) = (uint8_t)(uintptr_t)(8);
            *(uint8_t *)(unk_21159D1) = (uint8_t)(uintptr_t)(46);
            *(uint16_t *)(unk_21159D2) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_21159D4) = (uintptr_t)(0);
            *(uint8_t *)(unk_21159D8) = (uint8_t)(uintptr_t)(0);
            *(uint8_t *)(unk_21159D9) = (uint8_t)(uintptr_t)(0);
            *(uint16_t *)(unk_21159DA) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_21159DC) = (uintptr_t)(0);
            v28 = (int *)&unk_2115A38;
            *(uint8_t *)(unk_21159E0) = (uint8_t)(uintptr_t)(8);
            *(uint8_t *)(unk_21159E1) = (uint8_t)(uintptr_t)(8);
            *(uint16_t *)(unk_21159E2) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_21159E4) = (uintptr_t)(0);
            *(uint8_t *)(unk_21159E8) = (uint8_t)(uintptr_t)(0);
            *(uint8_t *)(unk_21159E9) = (uint8_t)(uintptr_t)(0);
            *(uint16_t *)(unk_21159EA) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_21159EC) = (uintptr_t)(0);
            *(uint8_t *)(unk_21159F0) = (uint8_t)(uintptr_t)(0);
            *(uint8_t *)(unk_21159F1) = (uint8_t)(uintptr_t)(0);
            *(uint16_t *)(unk_21159F2) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_21159F4) = (uintptr_t)(0);
            *(uint8_t *)(unk_21159F8) = (uint8_t)(uintptr_t)(0);
            *(uint8_t *)(unk_21159F9) = (uint8_t)(uintptr_t)(0);
            *(uint16_t *)(unk_21159FA) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_21159FC) = (uintptr_t)(0);
            *(uint8_t *)(unk_2115A00) = (uint8_t)(uintptr_t)(0);
            *(uint8_t *)(unk_2115A01) = (uint8_t)(uintptr_t)(0);
            *(uint16_t *)(unk_2115A02) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_2115A04) = (uintptr_t)(0);
            *(uint8_t *)(unk_2115A08) = (uint8_t)(uintptr_t)(8);
            *(uint8_t *)(unk_2115A09) = (uint8_t)(uintptr_t)(13);
            *(uint16_t *)(unk_2115A0A) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_2115A0C) = (uintptr_t)(0);
            *(uint8_t *)(unk_2115A10) = (uint8_t)(uintptr_t)(8);
            *(uint8_t *)(unk_2115A11) = (uint8_t)(uintptr_t)(38);
            *(uint16_t *)(unk_2115A12) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_2115A14) = (uintptr_t)(0);
            *(uint8_t *)(unk_2115A18) = (uint8_t)(uintptr_t)(8);
            *(uint8_t *)(unk_2115A19) = (uint8_t)(uintptr_t)(40);
            *(uint16_t *)(unk_2115A1A) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_2115A1C) = (uintptr_t)(0);
            *(uint8_t *)(unk_2115A20) = (uint8_t)(uintptr_t)(8);
            *(uint8_t *)(unk_2115A21) = (uint8_t)(uintptr_t)(34);
            *(uint16_t *)(unk_2115A22) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_2115A24) = (uintptr_t)(0);
            *(uint8_t *)(unk_2115A28) = (uint8_t)(uintptr_t)(8);
            *(uint8_t *)(unk_2115A29) = (uint8_t)(uintptr_t)(33);
            *(uint16_t *)(unk_2115A2A) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_2115A2C) = (uintptr_t)(0);
            *(uint8_t *)(unk_2115A30) = (uint8_t)(uintptr_t)(8);
            *(uint8_t *)(unk_2115A31) = (uint8_t)(uintptr_t)(9);
            *(uint16_t *)(unk_2115A32) = (uint16_t)(uintptr_t)(0);
            *(uintptr_t *)(unk_2115A34) = (uintptr_t)(0);
            do
            {
              *(uint8_t *)v28 = 0;
              *((uint8_t *)v28 + 1) = 0;
              *((uint16_t *)v28 + 1) = 0;
              v28[1] = 0;
              v28 += 2;
            }
            while ( v28 != (int *)(uintptr_t)(&dword_2115AA0) );
            _cxa_guard_release(g4_guard_fdbe654e68);
            HIWORD(v6) = v31;
          }
        }
        v36 = 0;
        if ( *((int *)v5 + 13) > 0 )
        {
          v21 = 0;
          v22 = 0;
          do
          {
            v35 = (uint32_t *)(*((uint32_t *)v5 + 12) + v22);
            v26 = (*v35 & 0xFE00) >> 9;
            if ( v26 <= 0x1F )
            {
              v6 = *((uint32_t *)&g4_fnstatic_4d802b4039 + 2 * v26);
              v23 = (char *)&g4_fnstatic_4d802b4039 + 8 * v26;
              v37 = *((uint32_t *)v23 + 1);
              v34 = v23[1];
              v24 = *v23;
            }
            else
            {
              v34 = (*v35 & 0xFE00) >> 9;
              v37 = 0;
              v24 = 8;
            }
            LOBYTE(v25) = v24;
            HIBYTE(v25) = v34;
            if ( *(uint16_t *)a3 == v25 && *((uint32_t *)a3 + 1) == v37 )
            {
              v32 = HIWORD(v6);
              (*(void (**)(gameswf::RefCounted::Self *, uint32_t *))(*(uint32_t *)v33 + 216))(v33, v35 + 1);
              v36 = 1;
              HIWORD(v6) = v32;
            }
            ++v21;
            v22 += 20;
          }
          while ( *((uint32_t *)v5 + 13) > v21 );
          v3 = (gameswf::RefCounted::Self *)self;
          gameswf::RefCounted::dropRef(v5);
          goto LABEL_10;
        }
        goto LABEL_9;
      }
      if ( v7 > 7u )
        goto LABEL_8;
      v10 = 1 << v7;
      if ( ((1 << v7) & 0x94) != 0 )
      {
        *(self + 60) = (gameswf::RefCounted::Self *)(&dword_0 + 2);
      }
      else if ( (v10 & 0x28) != 0 )
      {
        *(self + 60) = nullptr;
      }
      else
      {
        if ( (v10 & 0x42) == 0 )
        {
LABEL_8:
          v36 = 0;
LABEL_9:
          gameswf::RefCounted::dropRef(v5);
          goto LABEL_10;
        }
        *(self + 60) = (gameswf::RefCounted::Self *)(&dword_0 + 1);
      }
      if ( *((uint32_t *)v5 + 16) != 0 )
      {
        SoundHandler = (int *)gameswf::getSoundHandler();
        v12 = *(uint8_t *)a3;
        if ( SoundHandler == nullptr )
          goto LABEL_27;
        if ( (uint8_t)(v12 - 1) > 4u )
        {
LABEL_28:
          v16 = 2;
          if ( v12 != 5 )
          {
            LOBYTE(v16) = 4;
            if ( v12 != 1 )
            {
              LOBYTE(v16) = 8;
              if ( v12 != 2 )
              {
                LOBYTE(v16) = 16;
                if ( v12 != 7 )
                {
                  LOBYTE(v16) = 32;
                  if ( v12 != 6 )
                  {
                    LOBYTE(v16) = 0;
                    if ( v12 == 3 )
                      v16 = 64;
                  }
                }
              }
            }
          }
LABEL_35:
          v36 = 0;
          if ( *((int *)v5 + 13) > 0 )
          {
            v17 = 0;
            v18 = 0;
            v19 = 0;
            do
            {
              while ( 1 )
              {
                v20 = (uint32_t *)(*((uint32_t *)v5 + 12) + v19);
                if ( (v16 & *v20) != 0 )
                  break;
                ++v17;
                v19 += 20;
                if ( *((uint32_t *)v5 + 13) <= v17 )
                  goto LABEL_40;
              }
              ++v17;
              v19 += 20;
              v29 = v16;
              (*(void (**)(gameswf::RefCounted::Self *, uint32_t *))(*(uint32_t *)v33 + 216))(v33, v20 + 1);
              v18 = 1;
              v16 = v29;
            }
            while ( *((uint32_t *)v5 + 13) > v17 );
LABEL_40:
            v36 = v18;
            v3 = (gameswf::RefCounted::Self *)self;
            gameswf::RefCounted::dropRef(v5);
            goto LABEL_10;
          }
          goto LABEL_9;
        }
        v13 = dword_1CC52AC[(uint8_t)(v12 - 1)];
        if ( v13 < 0 || *(uint16_t *)(v14 = *((uint32_t *)v5 + 16) + 44 * v13) == 0 )
        {
LABEL_27:
          v16 = 1;
          if ( v12 == 4 )
            goto LABEL_35;
          goto LABEL_28;
        }
        v15 = *SoundHandler;
        if ( *(uint8_t *)(v14 + 9) != 0 )
        {
          (*(void (**)(int *, uint32_t))(v15 + 20))(SoundHandler, *(uint32_t *)(*(uint32_t *)(v14 + 4) + 28));
          v12 = *(uint8_t *)a3;
          goto LABEL_27;
        }
        (*(void (**)(int *, uint32_t, uint32_t))(v15 + 12))(
          SoundHandler,
          *(uint32_t *)(*(uint32_t *)(v14 + 4) + 28),
          *(uint16_t *)(v14 + 24));
      }
      v16 = 1;
      v12 = *(uint8_t *)a3;
      if ( *(uint8_t *)a3 == 4 )
        goto LABEL_35;
      goto LABEL_28;
    }
    if ( (*(uint16_t *)v4)-- == 1 )
      gameswf::free_internal(v4);
    *(self + 13) = nullptr;
    *(self + 14) = nullptr;
  }
  v36 = 0;
LABEL_11:
  if ( v3 != nullptr )
    gameswf::RefCounted::dropRef(v3);
  return v36;
}


// ============================================================================
// Address:   0x1185060 (size: 120 bytes)
// Symbol:    _ZN7gameswf25button_character_instance12getRootMovieEv
// Demangled: gameswf::button_character_instance::getRootMovie(void)
// ============================================================================
int gameswf::button_character_instance::getRootMovie(gameswf::button_character_instance::Self *self)
{
  int v1;
  gameswf::Self *v2;
  void *v5;

  v1 = *((uint32_t *)self + 14);
  if ( v1 != 0 )
  {
    v2 = *((gameswf::Self **)self + 13);
    if ( *((uint8_t *)v2 + 2) == 0 )
    {
      if ( (*(uint16_t *)v2)-- == 1 )
      {
        v5 = nullptr;
        gameswf::free_internal(v2);
      }
      *((uint32_t *)self + 13) = 0;
      *((uint32_t *)self + 14) = 0;
      v1 = 0;
    }
  }
  return (*(int (**)(int, void *))(*(uint32_t *)v1 + 308))(v1, v5);
}


// ============================================================================
// Address:   0x11850e0 (size: 112 bytes)
// Symbol:    _ZNK7gameswf25button_character_instance7getRootEv
// Demangled: gameswf::button_character_instance::getRoot(void)const
// ============================================================================
int gameswf::button_character_instance::getRoot(gameswf::button_character_instance::Self *self)
{
  gameswf::Player::Self **v1;
  gameswf::Self *v2;

  v1 = *((gameswf::Player::Self ***)self + 14);
  if ( v1 != nullptr )
  {
    v2 = *((gameswf::Self **)nullptr + 13);
    if ( *((uint8_t *)v2 + 2) == 0 )
    {
      if ( (*(uint16_t *)v2)-- == 1 )
        gameswf::free_internal(v2);
      *((uint32_t *)self + 13) = 0;
      *((uint32_t *)self + 14) = 0;
      v1 = nullptr;
    }
  }
  return gameswf::ASObject::getRoot(v1);
}


// ============================================================================
// Address:   0x1185150 (size: 266 bytes)
// Symbol:    _ZN7gameswf25button_character_instanceD0Ev
// Demangled: gameswf::button_character_instance::Destroy()
// ============================================================================
void gameswf::button_character_instance::DestroyDeleting(gameswf::button_character_instance::Self *self)
{
  uint32_t *v1;
  int v2;
  int i;
  int v4;
  gameswf::Self *v5;
  int v6;
  uint32_t *v7;

  v1 = (uint32_t *)((char *)self + 216);
  v2 = *((uint32_t *)self + 55);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091788);
  if ( v2 <= 0 )
  {
    if ( v2 < 0 )
    {
      v6 = 4 * v2;
      do
      {
        v7 = (uint32_t *)(*v1 + v6);
        if ( v7 != nullptr )
          *v7 = 0;
        v6 += 4;
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
  v4 = *((uint32_t *)self + 57);
  *((uint32_t *)self + 55) = 0;
  if ( v4 == 0 )
  {
    v5 = *((gameswf::Self **)self + 54);
    *((uint32_t *)self + 56) = 0;
    if ( v5 != nullptr )
      gameswf::free_internal(v5);
    *((uint32_t *)self + 54) = 0;
  }
  if ( *((uint32_t *)self + 53) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 53));
  gameswf::Character::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0x1185260 (size: 2031 bytes)
// Symbol:    _ZN7gameswf25button_character_instanceC2EPNS_6PlayerEPNS_27button_character_definitionEPNS_9CharacterEi
// Demangled: gameswf::button_character_instance::button_character_instance(gameswf::Player *,gameswf::button_character_definition *,gameswf::Character *,int)
// ============================================================================
// Alternative name is '_ZN7gameswf25button_character_instanceC1EPNS_6PlayerEPNS_27button_character_definitionEPNS_9CharacterEi'
gameswf::button_character_instance::Self *gameswf::button_character_instance::Construct(
        gameswf::Self **self,
        gameswf::Player::Self *a2,
        gameswf::button_character_definition::Self *a3,
        gameswf::Character::Self *a4,
        unsigned int a5)
{
  gameswf::Self **v5;
  int v6;
  int v7;
  gameswf::Self **v8;
  int v9;
  int v10;
  gameswf::Self *v11;
  int v12;
  gameswf::Self **i;
  gameswf::RefCounted::Self *v14;
  int v15;
  gameswf::button_character_instance::Self *j;
  uint32_t *v17;
  int v18;
  gameswf::Self *v19;
  int v20;
  bool v21;
  int v22;
  gameswf::button_character_instance::Self *result;
  int v24;
  gameswf::Character::Self *v25;
  gameswf::Self *v26;
  uint32_t *v27;
  int v28;
  gameswf::RefCounted::Self *v29;
  gameswf::RefCounted::Self *v30;
  gameswf::RefCounted::Self **v31;
  int v32;
  gameswf::Self *v33;
  int v34;
  uint16_t *v35;
  uint16_t *v36;
  int v37;
  int v38;
  uint16_t *v39;
  uint16_t *v40;
  int v41;
  gameswf::Self *v42;
  gameswf::Self *v43;
  size_t v44;
  int v45;
  gameswf::Self **v46;
  int v47;
  gameswf::button_character_instance::Self *v48;
  unsigned int v49;
  unsigned int v50;
  int v51;

  gameswf::Character::Construct((gameswf::Character::Self *)self, a2, a4, a5, 1);
  v5 = self;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_2091788);
  v6 = 0;
  *(self + 53) = (gameswf::Self *)(a3);
  if ( a3 != nullptr )
  {
    gameswf::RefCounted::addRef(a3);
    v5 = self;
    v6 = (int)(uintptr_t)(*(self + 53));
  }
  v5[54] = nullptr;
  v5[55] = nullptr;
  v5[56] = nullptr;
  v5[57] = nullptr;
  v5[58] = nullptr;
  v5[59] = nullptr;
  v5[60] = nullptr;
  v7 = *(uint32_t *)(v6 + 36);
  v8 = v5 + 54;
  v48 = (gameswf::button_character_instance::Self *)v7;
  if ( v7 >= 0 )
  {
    if ( v7 == 0 )
      goto LABEL_16;
  }
  else
  {
    v9 = v7;
    v10 = v7;
    v46 = v5 + 54;
    v11 = nullptr;
    v12 = 4 * v9;
    for ( i = v5; ; v11 = i[54] )
    {
      v14 = *(gameswf::RefCounted::Self **)((char *)v11 + v12);
      if ( v14 != nullptr )
        gameswf::RefCounted::dropRef(v14);
      v12 += 4;
      if ( ++v10 == 0 )
        break;
    }
    v8 = v46;
  }
  v15 = (int)(uintptr_t)(*(self + 56));
  if ( (int)(uintptr_t)(v48) > v15 && *(self + 57) == nullptr )
  {
    v42 = (gameswf::Self *)((gameswf::button_character_instance::Self *)((char *)v48 + ((int)(uintptr_t)(v48) >> 1)));
    *(self + 56) = v42;
    if ( v42 != nullptr )
    {
      v43 = *(self + 54);
      if ( v43 != nullptr )
      {
        v45 = 0;
        *(self + 54) = (gameswf::Self *)gameswf::realloc_internal(v43, 4 * (uint32_t)(uintptr_t)(v42), 4 * v15);
      }
      else
      {
        v44 = 0;
        *(self + 54) = (gameswf::Self *)gameswf::malloc_internal(4 * (uint32_t)(uintptr_t)(v42));
      }
    }
    else
    {
      if ( *(self + 54) != nullptr )
      {
        v44 = 4 * v15;
        gameswf::free_internal(*(self + 54));
      }
      *(self + 54) = nullptr;
    }
  }
  if ( (int)(uintptr_t)(v48) > 0 )
  {
    for ( j = nullptr; j != v48; j = (gameswf::button_character_instance::Self *)((char *)j + 1) )
    {
      v17 = (uint32_t *)((char *)*v8 + 4 * (uint32_t)(uintptr_t)(j));
      if ( v17 != nullptr )
        *v17 = 0;
    }
  }
LABEL_16:
  v18 = (int)(uintptr_t)(*(self + 14));
  *(self + 55) = (gameswf::Self *)(v48);
  if ( v18 == 0 )
  {
LABEL_68:
    v51 = 0;
    goto LABEL_22;
  }
  v19 = *(self + 13);
  if ( *((uint8_t *)v19 + 2) == 0 )
  {
    v21 = (*(uint16_t *)v19)-- == 1;
    if ( v21 )
      gameswf::free_internal(v19);
    *(self + 13) = nullptr;
    *(self + 14) = nullptr;
    goto LABEL_68;
  }
  v20 = G4_VCALL<int>(v18, 148, v44);
  v51 = v20;
  if ( v20 != 0 )
  {
    v21 = G4_VCALL<uint8_t>(v20, 8, 13) == 0;
    v22 = 0;
    if ( !v21 )
      v22 = v51;
    v51 = v22;
  }
LABEL_22:
  result = v48;
  if ( (int)(uintptr_t)(v48) > 0 )
  {
    v47 = 0;
    while ( 1 )
    {
      v27 = (uint32_t *)(*((uint32_t *)*(self + 53) + 8) + 100 * v47);
      v28 = v27[3];
      if ( v28 == 0 )
      {
        v28 = G4_VCALL<int>(v51, 88, v27[2]);
        v27[3] = v28;
        v27 = (uint32_t *)(100 * v47 + *((uint32_t *)*(self + 53) + 8));
      }
      v29 = (gameswf::RefCounted::Self *)G4_VCALL<int>(v28, 24, self, a5, v45);
      v30 = v29;
      if ( v29 != nullptr )
        gameswf::RefCounted::addRef(v29);
      v31 = (gameswf::RefCounted::Self **)((char *)*(self + 54) + 4 * v47);
      if ( v30 != *v31 )
      {
        if ( *v31 != nullptr )
          gameswf::RefCounted::dropRef(*v31);
        *v31 = v30;
        if ( v30 != nullptr )
          gameswf::RefCounted::addRef(v30);
      }
      v32 = *((uint32_t *)v30 + 19);
      if ( v32 == 0 )
        break;
LABEL_40:
      *(uint32_t *)(v32 + 32) = v27[5];
      *(uint32_t *)(v32 + 36) = v27[6];
      *(uint32_t *)(v32 + 40) = v27[7];
      *(uint32_t *)(v32 + 44) = v27[8];
      *(uint32_t *)(v32 + 48) = v27[9];
      *(uint32_t *)(v32 + 52) = v27[10];
      v24 = *((uint32_t *)v30 + 19);
      *((uint8_t *)v30 + 145) = 1;
      *((uint8_t *)v30 + 147) = 1;
      *((uint32_t *)v30 + 17) = v24 + 32;
      if ( *((uint32_t *)v30 + 14) != 0 )
      {
        v33 = *((gameswf::Self **)v30 + 13);
        if ( *((uint8_t *)v33 + 2) == 0 )
        {
          v21 = (*(uint16_t *)v33)-- == 1;
          if ( v21 )
            gameswf::free_internal(v33);
          v24 = *((uint32_t *)v30 + 19);
          *((uint32_t *)v30 + 13) = 0;
          *((uint32_t *)v30 + 14) = 0;
          if ( v24 != 0 )
            goto LABEL_26;
LABEL_45:
          v34 = opNew(0x94u);
          v35 = (uint16_t *)(v34 + 32);
          v24 = v34;
          *(uint32_t *)v34 = 1065353216;
          *(uint32_t *)(v34 + 8) = 1065353216;
          *(uint32_t *)(v34 + 16) = 1065353216;
          *(uint32_t *)(v34 + 24) = 1065353216;
          *(uint32_t *)(v34 + 4) = 0;
          *(uint32_t *)(v34 + 12) = 0;
          *(uint32_t *)(v34 + 20) = 0;
          *(uint32_t *)(v34 + 28) = 0;
          v49 = 24;
          if ( ((v34 + 32) & 1) != 0 )
          {
            *(uint8_t *)(v34 + 32) = 0;
            v35 = (uint16_t *)(v34 + 33);
            v49 = 23;
          }
          if ( ((uint8_t)(uintptr_t)(v35) & 2) != 0 )
          {
            *v35++ = 0;
            v49 -= 2;
          }
          memset(v35, 0, 4 * (v49 >> 2));
          v36 = &v35[2 * (v49 >> 2)];
          if ( (v49 & 2) != 0 )
            *v36++ = 0;
          if ( (v49 & 1) != 0 )
            *(uint8_t *)v36 = 0;
          v37 = *(uint32_t *)(v34 + 92);
          *(uint32_t *)(v24 + 32) = 1065353216;
          v37 |= 0x7FFFFFu;
          *(uint32_t *)(v24 + 48) = 1065353216;
          *(uint32_t *)(v24 + 92) = v37;
          *(uint32_t *)(v24 + 56) = 0;
          *(uint32_t *)(v24 + 60) = 0;
          *(uint32_t *)(v24 + 64) = 0;
          *(uint32_t *)(v24 + 68) = 0;
          *(uint32_t *)(v24 + 72) = 0;
          *(uint8_t *)(v24 + 76) = 1;
          *(uint8_t *)(v24 + 77) = 0;
          *(uint8_t *)(v24 + 94) = BYTE2(v37) & 0x7F;
          *(uint16_t *)(v24 + 95) = HIBYTE(v37) | 1;
          *(uint8_t *)(v24 + 97) = 0;
          *(uint8_t *)(v24 + 98) = 0;
          *(uint32_t *)(v24 + 100) = 0;
          *(uint32_t *)(v24 + 104) = 1065353216;
          *(uint32_t *)(v24 + 108) = 0;
          *(uint32_t *)(v24 + 112) = 1065353216;
          *(uint32_t *)(v24 + 116) = 0;
          *(uint32_t *)(v24 + 120) = 0;
          *(uint32_t *)(v24 + 124) = 0;
          *(uint32_t *)(v24 + 128) = 0;
          *(uint32_t *)(v24 + 132) = 0;
          *(uint32_t *)(v24 + 136) = 0;
          *(uint32_t *)(v24 + 140) = 0;
          *(uint32_t *)(v24 + 144) = 0;
          *((uint32_t *)v30 + 19) = v24;
          goto LABEL_26;
        }
        gameswf::Character::invalidateBitmapCache(*((gameswf::Character::Self **)v30 + 14));
        v24 = *((uint32_t *)v30 + 19);
      }
      if ( v24 == 0 )
        goto LABEL_45;
LABEL_26:
      *(uint32_t *)v24 = v27[11];
      *(uint32_t *)(v24 + 4) = v27[12];
      *(uint32_t *)(v24 + 8) = v27[13];
      *(uint32_t *)(v24 + 12) = v27[14];
      *(uint32_t *)(v24 + 16) = v27[15];
      *(uint32_t *)(v24 + 20) = v27[16];
      *(uint32_t *)(v24 + 24) = v27[17];
      *(uint32_t *)(v24 + 28) = v27[18];
      *((uint32_t *)v30 + 16) = *((uint32_t *)v30 + 19);
      v25 = *((gameswf::Character::Self **)v30 + 14);
      *((uint8_t *)v30 + 146) = 1;
      if ( v25 != nullptr )
      {
        v26 = *((gameswf::Self **)v30 + 13);
        if ( *((uint8_t *)v26 + 2) != 0 )
        {
          gameswf::Character::invalidateBitmapCache(v25);
        }
        else
        {
          v21 = (*(uint16_t *)v26)-- == 1;
          if ( v21 )
            gameswf::free_internal(v26);
          *((uint32_t *)v30 + 13) = 0;
          *((uint32_t *)v30 + 14) = 0;
        }
      }
      result = (gameswf::button_character_instance::Self *)gameswf::RefCounted::dropRef(v30);
      if ( (gameswf::button_character_instance::Self *)++v47 == v48 )
        return result;
    }
    v38 = opNew(0x94u);
    v39 = (uint16_t *)(v38 + 32);
    v32 = v38;
    *(uint32_t *)v38 = 1065353216;
    *(uint32_t *)(v38 + 8) = 1065353216;
    *(uint32_t *)(v38 + 16) = 1065353216;
    *(uint32_t *)(v38 + 24) = 1065353216;
    *(uint32_t *)(v38 + 4) = 0;
    *(uint32_t *)(v38 + 12) = 0;
    *(uint32_t *)(v38 + 20) = 0;
    *(uint32_t *)(v38 + 28) = 0;
    v50 = 24;
    if ( ((v38 + 32) & 1) != 0 )
    {
      v39 = (uint16_t *)(v38 + 33);
      *(uint8_t *)(v38 + 32) = 0;
      v50 = 23;
      if ( ((v38 + 33) & 2) == 0 )
        goto LABEL_59;
    }
    else if ( ((uint8_t)(uintptr_t)(v39) & 2) == 0 )
    {
LABEL_59:
      memset(v39, 0, 4 * (v50 >> 2));
      v40 = &v39[2 * (v50 >> 2)];
      if ( (v50 & 2) != 0 )
        *v40++ = 0;
      if ( (v50 & 1) != 0 )
        *(uint8_t *)v40 = 0;
      v41 = *(uint32_t *)(v38 + 92);
      *(uint32_t *)(v32 + 32) = 1065353216;
      v41 |= 0x7FFFFFu;
      *(uint32_t *)(v32 + 48) = 1065353216;
      *(uint32_t *)(v32 + 92) = v41;
      *(uint32_t *)(v32 + 56) = 0;
      *(uint32_t *)(v32 + 60) = 0;
      *(uint32_t *)(v32 + 64) = 0;
      *(uint32_t *)(v32 + 68) = 0;
      *(uint32_t *)(v32 + 72) = 0;
      *(uint8_t *)(v32 + 76) = 1;
      *(uint8_t *)(v32 + 77) = 0;
      *(uint8_t *)(v32 + 94) = BYTE2(v41) & 0x7F;
      *(uint16_t *)(v32 + 95) = HIBYTE(v41) | 1;
      *(uint8_t *)(v32 + 97) = 0;
      *(uint8_t *)(v32 + 98) = 0;
      *(uint32_t *)(v32 + 100) = 0;
      *(uint32_t *)(v32 + 104) = 1065353216;
      *(uint32_t *)(v32 + 108) = 0;
      *(uint32_t *)(v32 + 112) = 1065353216;
      *(uint32_t *)(v32 + 116) = 0;
      *(uint32_t *)(v32 + 120) = 0;
      *(uint32_t *)(v32 + 124) = 0;
      *(uint32_t *)(v32 + 128) = 0;
      *(uint32_t *)(v32 + 132) = 0;
      *(uint32_t *)(v32 + 136) = 0;
      *(uint32_t *)(v32 + 140) = 0;
      *(uint32_t *)(v32 + 144) = 0;
      *((uint32_t *)v30 + 19) = v32;
      goto LABEL_40;
    }
    *v39++ = 0;
    v50 -= 2;
    goto LABEL_59;
  }
  return result;
}

