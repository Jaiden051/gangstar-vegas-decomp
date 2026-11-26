#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASGenericCharacter.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASGenericCharacter::init  (binary VA: 0x1161f90)
// Original: gameswf::ASGenericCharacter::init
// ----------------------------------------------------------------------------
int gameswf::ASGenericCharacter::init(int a1)
{
  int result;
  int v2;

  result = a1;
  v2 = *(uint32_t *)(a1 + 4);
  if ( v2 != 0 )
  {
    result = G4_VCALL<int>(v2, 8, 2);
    if ( (uint8_t)result != 0 )
      return G4_VCALL<int>(v2, 208, 0, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGenericCharacter::newOp  (binary VA: 0x1163160)
// Original: gameswf::ASGenericCharacter::newOp
// ----------------------------------------------------------------------------
gameswf::SpriteInstance::Self * gameswf::ASGenericCharacter::newOp(gameswf::ASGenericCharacter::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  char v9[48];

  sub_776320((gameswf::String::Self *)v9, (gameswf::Self *)&unk_1B15112);
  v1 = opNew(0x128u);
  gameswf::MovieDefImpl::Construct(
    (pthread_mutex_t **)v1,
    self,
    (pthread_mutex_t *)((char *)&dword_0 + 1),
    (pthread_mutex_t *)((char *)&dword_0 + 1),
    v9);
  sub_59CE50((int)(uintptr_t)(v9));
  v2 = *(uint32_t *)(v1 + 88);
  *(uint32_t *)(v1 + 52) = 1;
  if ( v2 == 0 )
  {
    *(uint32_t *)(v1 + 92) = *(uint32_t *)(v1 + 92) & 0xFF000000 | 1;
    v3 = gameswf::malloc_internal(0x10u);
    *(uint8_t *)(v1 + 95) = 1;
    v4 = *(uint32_t *)(v1 + 92) << 8;
    *(uint32_t *)(v1 + 88) = v3;
    v5 = v4 >> 8;
    if ( v5 > 0 )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = (uint32_t *)(16 * v6 + v3);
        if ( v7 != nullptr )
        {
          *v7 = 0;
          v7[1] = 0;
          v7[2] = 0;
          v7[3] = 0;
          v5 = (int)(*(uint32_t *)(v1 + 92) << 8) >> 8;
        }
        if ( ++v6 >= v5 )
          break;
        v3 = *(uint32_t *)(v1 + 88);
      }
    }
  }
  return gameswf::Player::createSpriteInstance(self, (gameswf::MovieDefinitionSub::Self *)v1, nullptr, nullptr, nullptr);
}


