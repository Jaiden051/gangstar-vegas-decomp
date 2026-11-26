#include "Core/Utils/DecompTypes.h"
#include "gameswf_smart_ptr_gameswf.h"

// ----------------------------------------------------------------------------
// Function: gameswf::smart_ptr_gameswf_CharacterDef_13bb5a::set_ref  (binary VA: 0x10af4a0)
// Original: gameswf::smart_ptr<gameswf::CharacterDef>::set_ref
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::smart_ptr_gameswf_CharacterDef_13bb5a::set_ref(gameswf::RefCounted::Self **self, gameswf::CharacterDef::Self *a2)
{
  gameswf::RefCounted::Self *result;

  result = *self;
  if ( *self != (gameswf::RefCounted::Self *)(a2) )
  {
    if ( result != nullptr )
      result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*self);
    *self = (gameswf::RefCounted::Self *)(a2);
    if ( a2 != nullptr )
      return gameswf::RefCounted::addRef(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::smart_ptr_gameswf_Font_623e9a::set_ref  (binary VA: 0x11096b0)
// Original: gameswf::smart_ptr<gameswf::Font>::set_ref
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::smart_ptr_gameswf_Font_623e9a::set_ref(gameswf::RefCounted::Self **self, gameswf::Font::Self *a2)
{
  gameswf::RefCounted::Self *result;

  result = *self;
  if ( *self != (gameswf::RefCounted::Self *)(a2) )
  {
    if ( result != nullptr )
      result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*self);
    *self = (gameswf::RefCounted::Self *)(a2);
    if ( a2 != nullptr )
      return gameswf::RefCounted::addRef(a2);
  }
  return result;
}


