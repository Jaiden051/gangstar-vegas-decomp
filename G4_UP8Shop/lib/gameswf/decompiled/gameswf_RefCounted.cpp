#include "Core/Utils/DecompTypes.h"
#include "gameswf_RefCounted.h"

// ----------------------------------------------------------------------------
// Function: gameswf::RefCounted::Destroy  (binary VA: 0x1067bf0)
// Original: gameswf::RefCounted::~RefCounted
// ----------------------------------------------------------------------------
void gameswf::RefCounted::Destroy(gameswf::RefCounted::Self *self)
{
  int v1;
  gameswf::Self *v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E060);
  v1 = *((uint32_t *)self + 2);
  if ( v1 != 0 )
  {
    *(uint8_t *)(v1 + 2) = 0;
    v2 = *((gameswf::Self **)self + 2);
    if ( (*(uint16_t *)v2)-- == 1 )
      gameswf::free_internal(v2);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::RefCounted::Destroy_ea1067c50  (binary VA: 0x1067c50)
// Original: gameswf::RefCounted::~RefCounted
// ----------------------------------------------------------------------------
void gameswf::RefCounted::Destroy_ea1067c50(gameswf::RefCounted::Self *self)
{
  gameswf::RefCounted::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x106a8b0 (size: 41 bytes)
// Symbol:    _ZN7gameswf10RefCountedC2Ev
// Demangled: gameswf::RefCounted::RefCounted(void)
// ============================================================================
// Alternative name is '_ZN7gameswf10RefCountedC1Ev'
struct gameswf::RefCounted::Self *gameswf::RefCounted::RefCounted(gameswf::RefCounted::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E060);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: gameswf::RefCounted::addRef  (binary VA: 0x106a8e0)
// Original: gameswf::RefCounted::addRef
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::RefCounted::addRef(gameswf::RefCounted::Self *self)
{
  ++*((uint32_t *)self + 1);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RefCounted::dropRef  (binary VA: 0x106a8f0)
// Original: gameswf::RefCounted::dropRef
// ----------------------------------------------------------------------------
int gameswf::RefCounted::dropRef(gameswf::RefCounted::Self *self)
{
  int result;
  bool v2;

  result = *((uint32_t *)self + 1) - 1;
  v2 = *((uint32_t *)self + 1) == 1;
  *((uint32_t *)self + 1) = result;
  if ( v2 )
  {
    (**(void (***)(gameswf::RefCounted::Self *))self)(self);
    return gameswf::free_internal(self);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RefCounted::getWeakProxy  (binary VA: 0x106a940)
// Original: gameswf::RefCounted::getWeakProxy
// ----------------------------------------------------------------------------
int gameswf::RefCounted::getWeakProxy(gameswf::RefCounted::Self *self)
{
  int result;
  int v2;

  result = *((uint32_t *)self + 2);
  if ( result == 0 )
  {
    v2 = opNew(4u);
    *(uint16_t *)v2 = 0;
    *(uint8_t *)(v2 + 2) = 1;
    *((uint32_t *)self + 2) = v2;
    ++*(uint16_t *)v2;
    return *((uint32_t *)self + 2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RefCounted::detachWeakProxy  (binary VA: 0x106a9b0)
// Original: gameswf::RefCounted::detachWeakProxy
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::RefCounted::detachWeakProxy(gameswf::RefCounted::Self *self)
{
  gameswf::Self *result;

  result = *((gameswf::Self **)self + 2);
  if ( result != nullptr )
  {
    *((uint8_t *)result + 2) = 0;
    result = *((gameswf::Self **)self + 2);
    if ( (*(uint16_t *)result)-- == 1 )
      result = (gameswf::Self *)gameswf::free_internal(result);
    *((uint32_t *)self + 2) = 0;
  }
  return result;
}


