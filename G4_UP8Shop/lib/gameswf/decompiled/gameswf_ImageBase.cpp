#include "Core/Utils/DecompTypes.h"
#include "gameswf_ImageBase.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ImageBase::Destroy  (binary VA: 0x1173710)
// Original: gameswf::ImageBase::~ImageBase
// ----------------------------------------------------------------------------
void gameswf::ImageBase::Destroy(gameswf::ImageBase::Self *self)
{
  gameswf::Self *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091638);
  v1 = *((gameswf::Self **)self + 2);
  if ( v1 != nullptr )
  {
    gameswf::free_internal(v1);
    *((uint32_t *)self + 2) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ImageBase::Destroy_ea11738c0  (binary VA: 0x11738c0)
// Original: gameswf::ImageBase::~ImageBase
// ----------------------------------------------------------------------------
void gameswf::ImageBase::Destroy_ea11738c0(gameswf::ImageBase::Self *self)
{
  gameswf::ImageBase::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ImageBase::Construct  (binary VA: 0x1173900)
// Original: gameswf::ImageBase::ImageBase
// ----------------------------------------------------------------------------
uint32_t * gameswf::ImageBase::Construct(uint32_t *a1, int a2, int a3, int a4, int a5, int a6)
{
  *a1 = ((uint32_t)(uintptr_t)&off_2091638);
  a1[1] = a6;
  a1[2] = a2;
  a1[3] = a3;
  a1[4] = a4;
  a1[5] = a5;
  return a1;
}


