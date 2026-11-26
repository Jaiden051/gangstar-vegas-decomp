#include "Core/Utils/DecompTypes.h"
#include "gameswf_PlayerContext.h"

// ----------------------------------------------------------------------------
// Function: gameswf::PlayerContext::Destroy  (binary VA: 0x10663c0)
// Original: gameswf::PlayerContext::~PlayerContext
// ----------------------------------------------------------------------------
void gameswf::PlayerContext::Destroy(gameswf::PlayerContext::Self *self)
{
  gameswf::GlyphProvider::Self *v1;
  gameswf::Self *v2;
  gameswf::FaceProvider::FaceEntry::Self *v3;
  gameswf::FaceProvider::FaceEntry::Self *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  gameswf::Self *v9;
  int v10;
  gameswf::FaceProvider::FaceEntry::Self *v11;
  unsigned int v12;
  gameswf::Self *v13;

  v1 = *((gameswf::GlyphProvider::Self **)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E050);
  if ( v1 != nullptr )
  {
    gameswf::GlyphProvider::Destroy(v1);
    gameswf::free_internal(v1, nullptr, v12);
  }
  v2 = *((gameswf::Self **)self + 4);
  v13 = v2;
  if ( v2 != nullptr )
  {
    v3 = *((gameswf::FaceProvider::FaceEntry::Self **)v2 + 1);
    v4 = *(gameswf::FaceProvider::FaceEntry::Self **)v2;
    if ( v3 != *(gameswf::FaceProvider::FaceEntry::Self **)v2 )
    {
      do
      {
        v11 = v4;
        v4 = (gameswf::FaceProvider::FaceEntry::Self *)((char *)v4 + 36);
        gameswf::FaceProvider::FaceEntry::Destroy(v11);
      }
      while ( v3 != v4 );
      v4 = *(gameswf::FaceProvider::FaceEntry::Self **)v13;
    }
    if ( v4 != nullptr )
      opDelete(v4);
    gameswf::free_internal(v13, nullptr, v12);
  }
  v5 = *((uint32_t *)self + 7);
  if ( v5 < 0 )
  {
    v6 = 4 * v5;
    do
    {
      v7 = (uint32_t *)(*((uint32_t *)self + 6) + v6);
      if ( v7 != nullptr )
        *v7 = 0;
      v6 += 4;
      ++v5;
    }
    while ( v5 != 0 );
  }
  v8 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 7) = 0;
  if ( v8 == 0 )
  {
    v9 = *((gameswf::Self **)self + 6);
    v10 = *((uint32_t *)self + 8);
    *((uint32_t *)self + 8) = 0;
    if ( v9 != nullptr )
      gameswf::free_internal(v9, (void *)(4 * v10), v12);
    *((uint32_t *)self + 6) = 0;
  }
  gameswf::RefCounted::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::PlayerContext::Destroy_ea10664c0  (binary VA: 0x10664c0)
// Original: gameswf::PlayerContext::~PlayerContext
// ----------------------------------------------------------------------------
void gameswf::PlayerContext::Destroy_ea10664c0(gameswf::PlayerContext::Self *self)
{
  gameswf::PlayerContext::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x1066570 (size: 115 bytes)
// Symbol:    _ZN7gameswf13PlayerContextC2Ev
// Demangled: gameswf::PlayerContext::PlayerContext(void)
// ============================================================================
// Alternative name is '_ZN7gameswf13PlayerContextC1Ev'
void (**gameswf::PlayerContext::PlayerContext(
        gameswf::PlayerContext::Self *self))(gameswf::PlayerContext::Self * self)
{
  gameswf::RefCounted::RefCounted(self);
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E050);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  return (void (**)(gameswf::PlayerContext::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208E050));
}

