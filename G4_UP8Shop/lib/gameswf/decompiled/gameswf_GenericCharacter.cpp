#include "Core/Utils/DecompTypes.h"
#include "gameswf_GenericCharacter.h"

// ----------------------------------------------------------------------------
// Function: gameswf::GenericCharacter::is  (binary VA: 0x10a4090)
// Original: gameswf::GenericCharacter::is
// ----------------------------------------------------------------------------
bool gameswf::GenericCharacter::is(gameswf::GenericCharacter::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 3 && a2 != 1 && a2 != 57 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::GenericCharacter::getCharacterDef  (binary VA: 0x10a40b0)
// Original: gameswf::GenericCharacter::getCharacterDef
// ----------------------------------------------------------------------------
int gameswf::GenericCharacter::getCharacterDef(gameswf::GenericCharacter::Self *self)
{
  return *((uint32_t *)self + 53);
}

// ----------------------------------------------------------------------------
// Function: gameswf::GenericCharacter::hitTest  (binary VA: 0x10a40c0)
// Original: gameswf::GenericCharacter::hitTest
// ----------------------------------------------------------------------------
bool gameswf::GenericCharacter::hitTest(gameswf::GenericCharacter::Self *self, float a2, float a3)
{
  return G4_VCALL<int>(self, 108, LODWORD(a2), LODWORD(a3)) != 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::GenericCharacter::Destroy  (binary VA: 0x10a42b0)
// Original: gameswf::GenericCharacter::~GenericCharacter
// ----------------------------------------------------------------------------
void gameswf::GenericCharacter::Destroy(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E888);
  if ( *(self + 53) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 53));
  gameswf::Character::Destroy((gameswf::Character::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::GenericCharacter::Destroy_ea10a4390  (binary VA: 0x10a4390)
// Original: gameswf::GenericCharacter::~GenericCharacter
// ----------------------------------------------------------------------------
void gameswf::GenericCharacter::Destroy_ea10a4390(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E888);
  if ( *(self + 53) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 53));
  gameswf::Character::Destroy((gameswf::Character::Self *)self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::GenericCharacter::getTopmostMouseEntity  (binary VA: 0x10a4480)
// Original: gameswf::GenericCharacter::getTopmostMouseEntity
// ----------------------------------------------------------------------------
gameswf::GenericCharacter::Self * gameswf::GenericCharacter::getTopmostMouseEntity(gameswf::GenericCharacter::Self *self, float a2, float a3)
{
  bool v3;
  gameswf::GenericCharacter::Self *result;
  typedef gameswf::Matrix::Self *_g4_t_v5;
  typedef float _g4_t_v6[9];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v6)) > _g4_s1 ? (56u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 56u);

  memset(v6, 0, 0x18u);
  v5 = *((gameswf::Matrix::Self **)self + 17);
  v6[0] = 1.0;
  v6[4] = 1.0;
  gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v6, v5);
  v3 = (*(uint8_t (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 53) + 16))(
         *((uint32_t *)self + 53),
         (float)((float)(a2 * v6[0]) + v6[2]) + (float)(a3 * v6[1]),
         (float)((float)(v6[3] * a2) + v6[5]) + (float)(v6[4] * a3)) == 0;
  result = nullptr;
  if ( !v3 )
    return self;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::GenericCharacter::display  (binary VA: 0x10a4ca0)
// Original: gameswf::GenericCharacter::display
// ----------------------------------------------------------------------------
void gameswf::GenericCharacter::display(gameswf::GenericCharacter::Self *self)
{
  int v1;

  if ( *((uint8_t *)self + 148) != 0 )
  {
    gameswf::Character::updateMatrices(self);
    (*(void (**)(uint32_t, gameswf::GenericCharacter::Self *))(**((uint32_t **)self + 53) + 12))(
      *((uint32_t *)self + 53),
      self);
    v1 = *((uint32_t *)self + 19);
    if ( v1 != 0 && *(uint32_t *)(v1 + 132) != 0 )
      gameswf::Character::doDisplayCallback(self);
  }
}


