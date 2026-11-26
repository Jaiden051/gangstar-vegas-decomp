#include "Core/Utils/DecompTypes.h"
#include "gameswf_smart_ptr_proxy.h"

// ----------------------------------------------------------------------------
// Function: gameswf::smart_ptr_proxy::set_ref  (binary VA: 0x116b3a0)
// Original: gameswf::smart_ptr_proxy::set_ref
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::smart_ptr_proxy::set_ref(gameswf::Self **a1, gameswf::Self *a2)
{
  gameswf::Self *result;

  result = *a1;
  if ( *a1 != a2 )
  {
    if ( result != nullptr && (*(uint16_t *)result)-- == 1 )
      result = (gameswf::Self *)gameswf::free_internal(result);
    *a1 = a2;
    if ( a2 != nullptr )
      ++*(uint16_t *)a2;
  }
  return result;
}


