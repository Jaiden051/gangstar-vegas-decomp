#include "Core/Utils/DecompTypes.h"
#include "gameswf_random.h"

// ----------------------------------------------------------------------------
// Function: gameswf::random::Generator::seedRandom  (binary VA: 0x1174cf0)
// Original: gameswf::random::Generator::seedRandom
// ----------------------------------------------------------------------------
gameswf::random::Generator::Self * gameswf::random::Generator::seedRandom(gameswf::random::Generator::Self *self, unsigned int a2)
{
  int v2;
  gameswf::random::Generator::Self *result;
  unsigned int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;

  v2 = 12345;
  result = self;
  if ( a2 != 0 )
    v2 = a2;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&stru_587C4);
  *((uint32_t *)self + 9) = 7;
  v4 = v2 ^ (v2 << 13) ^ ((v2 ^ (unsigned int)(v2 << 13)) >> 17);
  v5 = v4 ^ (32 * v4);
  *(uint32_t *)self = v5;
  v6 = v5
     ^ (v5 << 13)
     ^ ((v5 ^ (unsigned int)(v5 << 13)) >> 17)
     ^ (32 * (v5 ^ (v5 << 13) ^ ((v5 ^ (unsigned int)(v5 << 13)) >> 17)));
  *((uint32_t *)self + 1) = v6;
  v7 = v6 ^ (v6 << 13) ^ ((v6 ^ (v6 << 13)) >> 17) ^ (32 * (v6 ^ (v6 << 13) ^ ((v6 ^ (v6 << 13)) >> 17)));
  *((uint32_t *)self + 2) = v7;
  v8 = v7 ^ (v7 << 13) ^ ((v7 ^ (v7 << 13)) >> 17) ^ (32 * (v7 ^ (v7 << 13) ^ ((v7 ^ (v7 << 13)) >> 17)));
  *((uint32_t *)self + 3) = v8;
  v9 = v8 ^ (v8 << 13) ^ ((v8 ^ (v8 << 13)) >> 17) ^ (32 * (v8 ^ (v8 << 13) ^ ((v8 ^ (v8 << 13)) >> 17)));
  *((uint32_t *)self + 4) = v9;
  v10 = v9 ^ (v9 << 13) ^ ((v9 ^ (v9 << 13)) >> 17) ^ (32 * (v9 ^ (v9 << 13) ^ ((v9 ^ (v9 << 13)) >> 17)));
  *((uint32_t *)self + 5) = v10;
  v11 = v10 ^ (v10 << 13) ^ ((v10 ^ (v10 << 13)) >> 17) ^ (32 * (v10 ^ (v10 << 13) ^ ((v10 ^ (v10 << 13)) >> 17)));
  *((uint32_t *)self + 6) = v11;
  v12 = v11 ^ (v11 << 13) ^ ((v11 ^ (v11 << 13)) >> 17);
  *((uint32_t *)self + 7) = v12 ^ (32 * v12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::random::Generator::Construct  (binary VA: 0x1174de0)
// Original: gameswf::random::Generator::Generator
// ----------------------------------------------------------------------------
gameswf::random::Generator::Self * gameswf::random::Generator::Construct(gameswf::random::Generator::Self *self)
{
  return gameswf::random::Generator::seedRandom(self, 0x3ADE68B1u);
}

// ----------------------------------------------------------------------------
// Function: gameswf::random::seedRandom  (binary VA: 0x1174e10)
// Original: gameswf::random::seedRandom
// ----------------------------------------------------------------------------
gameswf::random::Generator::Self * gameswf::random::seedRandom(gameswf::random::Self *self)
{
  return gameswf::random::Generator::seedRandom((gameswf::random::Generator::Self *)&unk_21158A0, (unsigned int)(uintptr_t)(self));
}

// ----------------------------------------------------------------------------
// Function: gameswf::random::Generator::nextRandom  (binary VA: 0x1174e40)
// Original: gameswf::random::Generator::nextRandom
// ----------------------------------------------------------------------------
int gameswf::random::Generator::nextRandom(gameswf::random::Generator::Self *self)
{
  unsigned int v1;
  int v2;
  bool v3;
  int64_t v4; // rax

  v1 = *((uint32_t *)self + 8);
  v2 = ((uint8_t)*((uint32_t *)self + 9) + 1) & 7;
  *((uint32_t *)self + 9) = v2;
  v4 = v1 + 716514398LL * *((unsigned int *)self + v2);
  v3 = __CFADD__(HIDWORD(v4), (uint32_t)v4);
  LODWORD(v4) = HIDWORD(v4) + v4;
  *((uint32_t *)self + 8) = HIDWORD(v4);
  if ( v3 )
  {
    LODWORD(v4) = v4 + 1;
    *((uint32_t *)self + 8) = HIDWORD(v4) + 1;
  }
  *((uint32_t *)self + v2) = -2 - v4;
  return -2 - v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::random::nextRandom  (binary VA: 0x1174ea0)
// Original: gameswf::random::nextRandom
// ----------------------------------------------------------------------------
int gameswf::random::nextRandom()
{
  return gameswf::random::Generator::nextRandom((gameswf::random::Generator::Self *)&unk_21158A0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::random::Generator::getUnitFloat  (binary VA: 0x1174ed0)
// Original: gameswf::random::Generator::getUnitFloat
// ----------------------------------------------------------------------------
long double gameswf::random::Generator::getUnitFloat(gameswf::random::Generator::Self *self)
{
  unsigned int Random;

  Random = gameswf::random::Generator::nextRandom(self);
  return (float)((float)((float)((float)HIBYTE(Random) * 65536.0) + (float)(uint16_t)(Random >> 8))
               * 0.00000005960465f);
}

// ----------------------------------------------------------------------------
// Function: gameswf::random::getUnitFloat  (binary VA: 0x1174f30)
// Original: gameswf::random::getUnitFloat
// ----------------------------------------------------------------------------
void gameswf::random::getUnitFloat()
{
  gameswf::random::Generator::getUnitFloat((gameswf::random::Generator::Self *)&unk_21158A0);
}


