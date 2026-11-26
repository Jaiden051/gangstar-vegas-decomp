#include "Core/Utils/DecompTypes.h"
#include "gameswf_BitmapInfo.h"

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::layout  (binary VA: 0x10c33e0)
// Original: gameswf::BitmapInfo::layout
// ----------------------------------------------------------------------------
void gameswf::BitmapInfo::layout()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::unlayout  (binary VA: 0x10c33f0)
// Original: gameswf::BitmapInfo::unlayout
// ----------------------------------------------------------------------------
void gameswf::BitmapInfo::unlayout()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::activate  (binary VA: 0x10c3400)
// Original: gameswf::BitmapInfo::activate
// ----------------------------------------------------------------------------
void gameswf::BitmapInfo::activate()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::setWritable  (binary VA: 0x10c3410)
// Original: gameswf::BitmapInfo::setWritable
// ----------------------------------------------------------------------------
void gameswf::BitmapInfo::setWritable()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::setLocalData  (binary VA: 0x10c3420)
// Original: gameswf::BitmapInfo::setLocalData
// ----------------------------------------------------------------------------
void gameswf::BitmapInfo::setLocalData()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::lock  (binary VA: 0x10c3430)
// Original: gameswf::BitmapInfo::lock
// ----------------------------------------------------------------------------
int gameswf::BitmapInfo::lock()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::unlock  (binary VA: 0x10c3440)
// Original: gameswf::BitmapInfo::unlock
// ----------------------------------------------------------------------------
void gameswf::BitmapInfo::unlock()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::setTexture  (binary VA: 0x10c3450)
// Original: gameswf::BitmapInfo::setTexture
// ----------------------------------------------------------------------------
void gameswf::BitmapInfo::setTexture()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::setMinFilter  (binary VA: 0x10c3460)
// Original: gameswf::BitmapInfo::setMinFilter
// ----------------------------------------------------------------------------
void gameswf::BitmapInfo::setMinFilter()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::setMagFilter  (binary VA: 0x10c3470)
// Original: gameswf::BitmapInfo::setMagFilter
// ----------------------------------------------------------------------------
void gameswf::BitmapInfo::setMagFilter()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::isLayout  (binary VA: 0x10c3480)
// Original: gameswf::BitmapInfo::isLayout
// ----------------------------------------------------------------------------
int gameswf::BitmapInfo::isLayout()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::getInternalWidth  (binary VA: 0x10c3490)
// Original: gameswf::BitmapInfo::getInternalWidth
// ----------------------------------------------------------------------------
int gameswf::BitmapInfo::getInternalWidth(gameswf::BitmapInfo::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::getInternalHeight  (binary VA: 0x10c34a0)
// Original: gameswf::BitmapInfo::getInternalHeight
// ----------------------------------------------------------------------------
int gameswf::BitmapInfo::getInternalHeight(gameswf::BitmapInfo::Self *self)
{
  return *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::Destroy  (binary VA: 0x10c35a0)
// Original: gameswf::BitmapInfo::~BitmapInfo
// ----------------------------------------------------------------------------
void gameswf::BitmapInfo::Destroy(gameswf::BitmapInfo::Self *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 40) == 0xFF;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EE08);
  if ( v1 && (*((uint8_t *)self + 59) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 13));
  gameswf::RefCounted::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfo::Destroy_ea10c36f0  (binary VA: 0x10c36f0)
// Original: gameswf::BitmapInfo::~BitmapInfo
// ----------------------------------------------------------------------------
void gameswf::BitmapInfo::Destroy_ea10c36f0(gameswf::BitmapInfo::Self *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 40) == 0xFF;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EE08);
  if ( v1 && (*((uint8_t *)self + 59) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 13));
  gameswf::RefCounted::Destroy(self);
}


