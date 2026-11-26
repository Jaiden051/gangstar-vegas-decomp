#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASNativeEventState.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASNativeEventState::stopPropagation  (binary VA: 0x109c410)
// Original: gameswf::ASNativeEventState::stopPropagation
// ----------------------------------------------------------------------------
gameswf::ASNativeEventState::Self * gameswf::ASNativeEventState::stopPropagation(gameswf::ASNativeEventState::Self *self)
{
  uint8_t *v1;
  gameswf::ASNativeEventState::Self *result;
  bool v3;

  v1 = nullptr;
  result = self;
  if ( *((uint8_t *)self + 28) == 5 && (v1 = *((uint8_t **)self + 8)) != nullptr )
  {
    v3 = G4_VCALL<uint8_t>(v1, 8, 51) == 0;
    result = nullptr;
    if ( v3 )
      v1 = nullptr;
    v1[60] = 0;
  }
  else
  {
    v1[60] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNativeEventState::stopImmediatePropagation  (binary VA: 0x109c460)
// Original: gameswf::ASNativeEventState::stopImmediatePropagation
// ----------------------------------------------------------------------------
gameswf::ASNativeEventState::Self * gameswf::ASNativeEventState::stopImmediatePropagation(gameswf::ASNativeEventState::Self *self)
{
  uint8_t *v1;
  gameswf::ASNativeEventState::Self *result;
  bool v3;

  v1 = nullptr;
  result = self;
  if ( *((uint8_t *)self + 28) == 5 && (v1 = *((uint8_t **)self + 8)) != nullptr )
  {
    v3 = G4_VCALL<uint8_t>(v1, 8, 51) == 0;
    result = nullptr;
    if ( v3 )
      v1 = nullptr;
    v1[60] = 0;
    v1[61] = 1;
  }
  else
  {
    v1[60] = 0;
    v1[61] = 1;
  }
  return result;
}


