#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASBitmapFilter.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapFilter::newOp  (binary VA: 0x114d630)
// Original: gameswf::ASBitmapFilter::newOp
// ----------------------------------------------------------------------------
int gameswf::ASBitmapFilter::newOp()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapFilter::init  (binary VA: 0x114d640)
// Original: gameswf::ASBitmapFilter::init
// ----------------------------------------------------------------------------
int gameswf::ASBitmapFilter::init(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 4);
  if ( result != 0 )
    return G4_VCALL<int>(result, 8, 66);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapFilter::thisAlive  (binary VA: 0x114d7c0)
// Original: gameswf::ASBitmapFilter::thisAlive
// ----------------------------------------------------------------------------
int gameswf::ASBitmapFilter::thisAlive(gameswf::ASBitmapFilter::Self *self)
{
  int v1;
  int v2;
  int result;

  gameswf::ASObject::thisAlive(self);
  v1 = *((uint32_t *)self + 34);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 76))(*((uint32_t *)self + 34));
  v2 = *((uint32_t *)self + 35);
  if ( v2 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v2 + 76))(*((uint32_t *)self + 35));
  result = *((uint32_t *)self + 36);
  if ( result != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)result + 76))(*((uint32_t *)self + 36));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapFilter::clearRefs  (binary VA: 0x11502c0)
// Original: gameswf::ASBitmapFilter::clearRefs
// ----------------------------------------------------------------------------
int gameswf::ASBitmapFilter::clearRefs(gameswf::RefCounted::Self **self, int a2)
{
  int v2;
  int v3;
  int result;

  gameswf::ASObject::clearRefs((gameswf::ASObject::Self *)self, a2);
  v2 = (int)(uintptr_t)(*(self + 34));
  if ( v2 != 0 && a2 > *(uint32_t *)(v2 + 20) )
  {
    gameswf::RefCounted::dropRef(*(self + 34));
    *(self + 34) = nullptr;
  }
  v3 = (int)(uintptr_t)(*(self + 35));
  if ( v3 != 0 && a2 > *(uint32_t *)(v3 + 20) )
  {
    gameswf::RefCounted::dropRef(*(self + 35));
    *(self + 35) = nullptr;
  }
  result = (int)(uintptr_t)(*(self + 36));
  if ( result != 0 && a2 > *(uint32_t *)(result + 20) )
  {
    result = gameswf::RefCounted::dropRef(*(self + 36));
    *(self + 36) = nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapFilter::is  (binary VA: 0x1162130)
// Original: gameswf::ASBitmapFilter::is
// ----------------------------------------------------------------------------
bool gameswf::ASBitmapFilter::is(gameswf::ASBitmapFilter::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 66 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapFilter::Destroy  (binary VA: 0x1162380)
// Original: gameswf::ASBitmapFilter::~ASBitmapFilter
// ----------------------------------------------------------------------------
void gameswf::ASBitmapFilter::Destroy(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090C08);
  if ( *(self + 36) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 36));
  if ( *(self + 35) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 35));
  if ( *(self + 34) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 34));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapFilter::Destroy_ea1162660  (binary VA: 0x1162660)
// Original: gameswf::ASBitmapFilter::~ASBitmapFilter
// ----------------------------------------------------------------------------
void gameswf::ASBitmapFilter::Destroy_ea1162660(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090C08);
  if ( *(self + 36) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 36));
  if ( *(self + 35) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 35));
  if ( *(self + 34) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 34));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
  opDelete(self);
}


