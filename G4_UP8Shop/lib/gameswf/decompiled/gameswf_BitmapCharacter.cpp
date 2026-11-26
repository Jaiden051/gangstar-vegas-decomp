#include "Core/Utils/DecompTypes.h"
#include "gameswf_BitmapCharacter.h"

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapCharacter::is  (binary VA: 0x1094440)
// Original: gameswf::BitmapCharacter::is
// ----------------------------------------------------------------------------
bool gameswf::BitmapCharacter::is(gameswf::BitmapCharacter::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 38 )
    return a2 == 14;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapCharacter::pointTestLocal  (binary VA: 0x1094460)
// Original: gameswf::BitmapCharacter::pointTestLocal
// ----------------------------------------------------------------------------
bool gameswf::BitmapCharacter::pointTestLocal(gameswf::BitmapCharacter::Self *self, float a2, float a3)
{
  bool result;

  result = false;
  if ( a2 >= *((float *)self + 8) && a2 <= *((float *)self + 9) && a3 >= *((float *)self + 10) )
    return a3 <= *((float *)self + 11);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapCharacter::getBoundInternal  (binary VA: 0x1094490)
// Original: gameswf::BitmapCharacter::getBoundInternal
// ----------------------------------------------------------------------------
gameswf::Rect::Self * gameswf::BitmapCharacter::getBoundInternal(gameswf::BitmapCharacter::Self *self, gameswf::Rect::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 8);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 9);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 11);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapCharacter::getBitmapInfo  (binary VA: 0x10944b0)
// Original: gameswf::BitmapCharacter::getBitmapInfo
// ----------------------------------------------------------------------------
int gameswf::BitmapCharacter::getBitmapInfo(gameswf::BitmapCharacter::Self *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapCharacter::display  (binary VA: 0x10944f0)
// Original: gameswf::BitmapCharacter::display
// ----------------------------------------------------------------------------
char * gameswf::BitmapCharacter::display(gameswf::BitmapCharacter::Self *self, gameswf::Character::Self *a2)
{
  char *WorldMatrix;
  uint32_t *v3;
  char *result;
  gameswf::RenderHandler::Self *v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v10;
  typedef int16_t _g4_t_v11;
  typedef int16_t _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (22u + sizeof(_g4_t_v12)) > _g4_s3 ? (22u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v15)) > _g4_s6 ? (32u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v16)) > _g4_s7 ? (36u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v17)) > _g4_s8 ? (40u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v18)) > _g4_s9 ? (44u + sizeof(_g4_t_v18)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 22u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  WorldMatrix = gameswf::Character::getWorldMatrix(a2);
  v3 = (uint32_t *)(gameswf::s_render_handler);
  if ( gameswf::s_render_handler != nullptr )
  {
    gameswf::s_render_handler[29] = *(uint32_t *)WorldMatrix;
    v3[30] = *((uint32_t *)WorldMatrix + 1);
    v3[31] = *((uint32_t *)WorldMatrix + 2);
    v3[32] = *((uint32_t *)WorldMatrix + 3);
    v3[33] = *((uint32_t *)WorldMatrix + 4);
    v3[34] = *((uint32_t *)WorldMatrix + 5);
  }
  result = gameswf::Character::getWorldCxForm(a2);
  v5 = (gameswf::RenderHandler::Self *)gameswf::s_render_handler;
  if ( gameswf::s_render_handler != nullptr )
  {
    v6 = *(uint32_t *)result;
    LOBYTE(v8) = 0;
    gameswf::s_render_handler[35] = v6;
    *((uint32_t *)v5 + 36) = *((uint32_t *)result + 1);
    *((uint32_t *)v5 + 37) = *((uint32_t *)result + 2);
    *((uint32_t *)v5 + 38) = *((uint32_t *)result + 3);
    *((uint32_t *)v5 + 39) = *((uint32_t *)result + 4);
    *((uint32_t *)v5 + 40) = *((uint32_t *)result + 5);
    *((uint32_t *)v5 + 41) = *((uint32_t *)result + 6);
    *((uint32_t *)v5 + 42) = *((uint32_t *)result + 7);
    *((uint32_t *)v5 + 43) = *((uint32_t *)self + 7);
    *((uint32_t *)v5 + 52) = 1;
    *((uint32_t *)v5 + 44) = gameswf::Matrix::identity[0];
    *((uint32_t *)v5 + 45) = gameswf::Matrix::identity[1];
    *((uint32_t *)v5 + 46) = gameswf::Matrix::identity[2];
    *((uint32_t *)v5 + 47) = gameswf::Matrix::identity[3];
    v7 = gameswf::Matrix::identity[5];
    *((uint32_t *)v5 + 48) = gameswf::Matrix::identity[4];
    *((uint32_t *)v5 + 49) = v7;
    BYTE1(v8) = 0;
    v13 = 0;
    v10 = &g4_fnstatic_b1e7ab4a55;
    v14 = *((uint32_t *)self + 8);
    v15 = *((uint32_t *)self + 9);
    v16 = *((uint32_t *)self + 10);
    v17 = *((uint32_t *)self + 11);
    v18 = 0;
    v11 = 4;
    v12 = 6;
    return (char *)gameswf::RenderHandler::draw(v5, (int)(uintptr_t)(&v8));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapCharacter::Destroy  (binary VA: 0x10947d0)
// Original: gameswf::BitmapCharacter::~BitmapCharacter
// ----------------------------------------------------------------------------
void gameswf::BitmapCharacter::Destroy(gameswf::RefCounted::Self **self)
{
  gameswf::Self *v1;
  bool v2;
  gameswf::Self *v3;

  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E568);
  if ( *(self + 7) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 7));
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E728);
  v1 = (gameswf::Self *)(*(self + 5));
  if ( v1 != nullptr )
  {
    v2 = (*(uint16_t *)v1)-- == 1;
    if ( v2 )
      gameswf::free_internal(v1);
  }
  v3 = (gameswf::Self *)(*(self + 3));
  if ( v3 != nullptr )
  {
    v2 = (*(uint16_t *)v3)-- == 1;
    if ( v2 )
      gameswf::free_internal(v3);
  }
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy((gameswf::RefCounted::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapCharacter::Destroy_ea1094870  (binary VA: 0x1094870)
// Original: gameswf::BitmapCharacter::~BitmapCharacter
// ----------------------------------------------------------------------------
void gameswf::BitmapCharacter::Destroy_ea1094870(gameswf::RefCounted::Self **self)
{
  gameswf::Self *v1;
  bool v2;
  gameswf::Self *v3;

  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E568);
  if ( *(self + 7) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 7));
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E728);
  v1 = (gameswf::Self *)(*(self + 5));
  if ( v1 != nullptr )
  {
    v2 = (*(uint16_t *)v1)-- == 1;
    if ( v2 )
      gameswf::free_internal(v1);
  }
  v3 = (gameswf::Self *)(*(self + 3));
  if ( v3 != nullptr )
  {
    v2 = (*(uint16_t *)v3)-- == 1;
    if ( v2 )
      gameswf::free_internal(v3);
  }
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy((gameswf::RefCounted::Self *)self);
  opDelete(self);
}


