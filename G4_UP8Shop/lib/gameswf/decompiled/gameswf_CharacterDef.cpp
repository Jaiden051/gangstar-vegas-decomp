#include "Core/Utils/DecompTypes.h"
#include "gameswf_CharacterDef.h"

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterDef::is  (binary VA: 0x10943d0)
// Original: gameswf::CharacterDef::is
// ----------------------------------------------------------------------------
bool gameswf::CharacterDef::is(gameswf::CharacterDef::Self *self, int a2)
{
  return a2 == 14;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterDef::display  (binary VA: 0x10943e0)
// Original: gameswf::CharacterDef::display
// ----------------------------------------------------------------------------
void gameswf::CharacterDef::display()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterDef::pointTestLocal  (binary VA: 0x10943f0)
// Original: gameswf::CharacterDef::pointTestLocal
// ----------------------------------------------------------------------------
int gameswf::CharacterDef::pointTestLocal()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterDef::getBoundInternal  (binary VA: 0x1094400)
// Original: gameswf::CharacterDef::getBoundInternal
// ----------------------------------------------------------------------------
void gameswf::CharacterDef::getBoundInternal()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterDef::csmTextSetting  (binary VA: 0x1094410)
// Original: gameswf::CharacterDef::csmTextSetting
// ----------------------------------------------------------------------------
void gameswf::CharacterDef::csmTextSetting()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterDef::instanciateClass  (binary VA: 0x1094420)
// Original: gameswf::CharacterDef::instanciateClass
// ----------------------------------------------------------------------------
void gameswf::CharacterDef::instanciateClass()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterDef::getMovieDefinition  (binary VA: 0x1094430)
// Original: gameswf::CharacterDef::getMovieDefinition
// ----------------------------------------------------------------------------
int gameswf::CharacterDef::getMovieDefinition()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterDef::createCharacterInstance  (binary VA: 0x109e370)
// Original: gameswf::CharacterDef::createCharacterInstance
// ----------------------------------------------------------------------------
int gameswf::CharacterDef::createCharacterInstance(gameswf::CharacterDef::Self *self, gameswf::Character::Self *a2, int a3)
{
  gameswf::Player::Self *v3;
  gameswf::Self *v4;
  int v5;

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
  v5 = opNew(0xE8u);
  gameswf::Character::Construct((gameswf::Character::Self *)v5, v3, a2, a3, 3);
  *(uint32_t *)(v5 + 212) = (uint32_t)(uintptr_t)(self);
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208E888);
  gameswf::RefCounted::addRef(self);
  (*(void (**)(uint32_t, int))(**(uint32_t **)(v5 + 212) + 20))(*(uint32_t *)(v5 + 212), v5 + 216);
  *(uint8_t *)(v5 + 150) = 0;
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterDef::setRegisteredClassConstructor  (binary VA: 0x109f780)
// Original: gameswf::CharacterDef::setRegisteredClassConstructor
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::CharacterDef::setRegisteredClassConstructor(gameswf::CharacterDef::Self *self, const gameswf::ASValue::Self *a2)
{
  gameswf::RefCounted::Self *v2;
  gameswf::Self *result;
  gameswf::Self *v4;
  gameswf::Self *v6;

  v2 = (gameswf::RefCounted::Self *)gameswf::ASValue::toFunction(a2);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v2);
  if ( v2 == nullptr )
    return sub_7E5ED0((gameswf::Self **)self + 3, nullptr);
  result = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v2);
  v4 = *((gameswf::Self **)self + 3);
  if ( result != v4 )
  {
    if ( v4 != nullptr && (*(uint16_t *)v4)-- == 1 )
    {
      v6 = result;
      gameswf::free_internal(v4);
      result = v6;
    }
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(result);
    if ( result != nullptr )
      ++*(uint16_t *)result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterDef::instanciateRegisteredClass  (binary VA: 0x10a1a00)
// Original: gameswf::CharacterDef::instanciateRegisteredClass
// ----------------------------------------------------------------------------
int gameswf::CharacterDef::instanciateRegisteredClass(gameswf::Self **self, gameswf::Character::Self *a2)
{
  gameswf::CharacterDef::Self *v2;
  gameswf::RefCounted::Self *v3;
  int v4;
  char v5;
  gameswf::CharacterDef::Self *v6;
  char v7;
  char v8;
  int result;
  gameswf::Self *v10;
  gameswf::Self *WeakProxy;
  gameswf::Self *v12;
  int v14;
  gameswf::ASValue::Self *v15;
  gameswf::Self **v16;
  char *v17;
  int v18;
  typedef int _g4_t_v19;
  typedef gameswf::ASValue::Self *_g4_t_v20;
  typedef gameswf::ASValue::Self *_g4_t_v21;
  typedef gameswf::RefCounted::Self *_g4_t_v22;
  typedef gameswf::ASValue::Self *_g4_t_v23;
  typedef uint8_t _g4_t_v24[4];
  typedef gameswf::RefCounted::Self *_g4_t_v25;
  typedef uint8_t _g4_t_v26[4];
  typedef gameswf::RefCounted::Self *_g4_t_v27;
  typedef uint8_t _g4_t_v28[12];
  typedef uint32_t _g4_t_v29[28];
  typedef uint8_t _g4_t_v30[12];
  typedef uint8_t _g4_t_v31[12];
  typedef uint8_t _g4_t_v32[12];
  typedef uint8_t _g4_t_v33[12];
  typedef gameswf::RefCounted::Self *_g4_t_v34[4];
  typedef gameswf::RefCounted::Self *_g4_t_v35;
  typedef uint8_t _g4_t_v36[12];
  typedef gameswf::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef gameswf::Self *_g4_t_v41[10];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v20)) > _g4_s1 ? (4u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v21)) > _g4_s2 ? (4u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v22)) > _g4_s3 ? (12u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v24)) > _g4_s5 ? (32u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v25)) > _g4_s6 ? (36u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v26)) > _g4_s7 ? (56u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v27)) > _g4_s8 ? (60u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v28)) > _g4_s9 ? (68u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v29)) > _g4_s10 ? (80u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (192u + sizeof(_g4_t_v30)) > _g4_s11 ? (192u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (204u + sizeof(_g4_t_v31)) > _g4_s12 ? (204u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (216u + sizeof(_g4_t_v32)) > _g4_s13 ? (216u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (228u + sizeof(_g4_t_v33)) > _g4_s14 ? (228u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (240u + sizeof(_g4_t_v34)) > _g4_s15 ? (240u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (256u + sizeof(_g4_t_v35)) > _g4_s16 ? (256u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (260u + sizeof(_g4_t_v36)) > _g4_s17 ? (260u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (272u + sizeof(_g4_t_v37)) > _g4_s18 ? (272u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (276u + sizeof(_g4_t_v38)) > _g4_s19 ? (276u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (280u + sizeof(_g4_t_v39)) > _g4_s20 ? (280u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (284u + sizeof(_g4_t_v40)) > _g4_s21 ? (284u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (288u + sizeof(_g4_t_v41)) > _g4_s22 ? (288u + sizeof(_g4_t_v41)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 192u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 204u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 216u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 228u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 240u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 256u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 260u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 272u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 276u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 280u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 284u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 288u);

  v41[6] = (gameswf::Self *)&self;
  v2 = (gameswf::CharacterDef::Self *)self;
  v3 = (gameswf::RefCounted::Self *)(a2);
  v4 = (int)(uintptr_t)(*(self + 6));
  if ( v4 != 0 && *((uint8_t *)*(self + 5) + 2) == 0 )
  {
    sub_7E5ED0(self + 5, nullptr);
    *((uint32_t *)v2 + 6) = 0;
    v4 = 0;
  }
  if ( *(uint8_t *)(v4 + 232) != 0 )
  {
    v5 = G4_VCALL<int>(v2, 8, 12);
    v6 = v2;
    if ( v5 == 0 )
    {
      v7 = G4_VCALL<int>(v2, 8, 15);
      v6 = nullptr;
      if ( v7 != 0 )
      {
        v6 = *((gameswf::CharacterDef::Self **)v2 + 18);
        if ( v6 != nullptr )
        {
          v20 = *((gameswf::ASValue::Self **)v2 + 18);
          v8 = (*(int (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v6 + 8))(v20, 12);
          v6 = (gameswf::CharacterDef::Self *)(v20);
          if ( v8 == 0 )
            v6 = nullptr;
        }
      }
    }
    G4_VCALL<void>(v6, 32, v3);
    return 1;
  }
  else
  {
    result = 0;
    v22 = *((gameswf::RefCounted::Self **)v2 + 4);
    if ( v22 != nullptr )
    {
      if ( *(uint8_t *)(*((uint32_t *)v2 + 3) + 2) != 0 )
      {
        gameswf::RefCounted::addRef(v22);
        v10 = *((gameswf::Self **)v2 + 6);
        if ( v10 != nullptr && *(uint8_t *)(*((uint32_t *)v2 + 5) + 2) == 0 )
        {
          sub_7E5ED0((gameswf::Self **)v2 + 5, nullptr);
          *((uint32_t *)v2 + 6) = 0;
          v10 = nullptr;
        }
        memset(v29, 0, 16);
        v30[0] = 0;
        v30[1] = 0;
        v31[0] = 0;
        v31[1] = 0;
        v32[0] = 0;
        v32[1] = 0;
        v33[0] = 0;
        v33[1] = 0;
        memset(v34, 0, sizeof(v34));
        v35 = nullptr;
        v36[0] = 0;
        v36[1] = 0;
        v37 = nullptr;
        v38 = 0;
        v39 = 0;
        v40 = 0;
        v41[0] = nullptr;
        v41[1] = v10;
        if ( v10 != nullptr )
        {
          WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v10);
          sub_7E5ED0(v41, WeakProxy);
        }
        else
        {
          sub_7E5ED0(v41, nullptr);
        }
        v24[0] = 5;
        v24[1] = 0;
        v25 = v3;
        if ( v3 != nullptr )
          gameswf::RefCounted::addRef(v3);
        v27 = v22;
        v26[0] = 5;
        v26[1] = 0;
        gameswf::RefCounted::addRef(v22);
        gameswf::call_method(
          (gameswf::Self *)v28,
          (const gameswf::ASValue::Self *)v26,
          (gameswf::ASEnvironment::Self *)v29,
          (const gameswf::ASValue::Self *)v24,
          0,
          0,
          "<constructor>");
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v28);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v26);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v24);
        v12 = v41[0];
        if ( v41[0] != nullptr && (*(uint16_t *)v41[0])-- == 1 )
          gameswf::free_internal(v12);
        v14 = v38;
        if ( v38 <= 0 )
        {
          if ( v38 < 0 )
          {
            v19 = 32 * v38;
            do
            {
              v17 = (char *)v37 + v19;
              if ( (gameswf::Self *)((char *)v37 + v19) != nullptr )
              {
                v18 = *((uint32_t *)v17 + 4);
                *v17 = 1;
                v18 |= 0x7FFFFFu;
                v17[1] = 0;
                *((uint32_t *)v17 + 4) = v18;
                v17[20] = 0;
                v17[18] = BYTE2(v18) & 0x7F;
                v17[19] = HIBYTE(v18) | 1;
                v17[21] = 0;
              }
              v19 += 32;
              ++v14;
            }
            while ( v14 != 0 );
          }
        }
        else
        {
          v15 = nullptr;
          v23 = (gameswf::ASValue::Self *)v38;
          do
          {
            while ( 1 )
            {
              v16 = (gameswf::Self **)((char *)v37 + 32 * (uint32_t)(uintptr_t)(v15));
              v21 = v15;
              gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v16 + 5));
              if ( *(uint8_t *)v16 == 0xFF && (*((uint8_t *)v16 + 19) & 1) != 0 )
                break;
              v15 = (gameswf::ASValue::Self *)((char *)v21 + 1);
              if ( (gameswf::ASValue::Self *)((char *)v21 + 1) == v23 )
                goto LABEL_30;
            }
            gameswf::free_internal(v16[3]);
            v15 = (gameswf::ASValue::Self *)((char *)v21 + 1);
          }
          while ( (gameswf::ASValue::Self *)((char *)v21 + 1) != v23 );
        }
LABEL_30:
        v38 = 0;
        if ( v40 == 0 )
        {
          v39 = 0;
          if ( v37 != nullptr )
            gameswf::free_internal(v37);
          v37 = nullptr;
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v36);
        if ( v35 != nullptr )
          gameswf::RefCounted::dropRef(v35);
        gameswf::array_gameswf_ASValue_3ea8a1::Destroy((gameswf::array<gameswf::ASValue::Self> *)v34);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v33);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v32);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v31);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v30);
        gameswf::array_gameswf_ASValue_3ea8a1::Destroy((gameswf::array<gameswf::ASValue::Self> *)v29);
        gameswf::RefCounted::dropRef(v22);
        return 1;
      }
      else
      {
        sub_7E5ED0((gameswf::Self **)v2 + 3, nullptr);
        *((uint32_t *)v2 + 4) = 0;
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterDef::Destroy  (binary VA: 0x10a43f0)
// Original: gameswf::CharacterDef::~CharacterDef
// ----------------------------------------------------------------------------
void gameswf::CharacterDef::Destroy(gameswf::CharacterDef::Self *self)
{
  gameswf::Self *v1;
  bool v2;
  gameswf::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E728);
  v1 = *((gameswf::Self **)self + 5);
  if ( v1 != nullptr )
  {
    v2 = (*(uint16_t *)v1)-- == 1;
    if ( v2 )
      gameswf::free_internal(v1);
  }
  v3 = *((gameswf::Self **)self + 3);
  if ( v3 != nullptr )
  {
    v2 = (*(uint16_t *)v3)-- == 1;
    if ( v2 )
      gameswf::free_internal(v3);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterDef::Destroy_ea10a4570  (binary VA: 0x10a4570)
// Original: gameswf::CharacterDef::~CharacterDef
// ----------------------------------------------------------------------------
void gameswf::CharacterDef::Destroy_ea10a4570(gameswf::CharacterDef::Self *self)
{
  gameswf::Self *v1;
  bool v2;
  gameswf::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E728);
  v1 = *((gameswf::Self **)self + 5);
  if ( v1 != nullptr )
  {
    v2 = (*(uint16_t *)v1)-- == 1;
    if ( v2 )
      gameswf::free_internal(v1);
  }
  v3 = *((gameswf::Self **)self + 3);
  if ( v3 != nullptr )
  {
    v2 = (*(uint16_t *)v3)-- == 1;
    if ( v2 )
      gameswf::free_internal(v3);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(self);
  opDelete(self);
}


