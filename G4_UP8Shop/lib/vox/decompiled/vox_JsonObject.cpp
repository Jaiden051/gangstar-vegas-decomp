#include "Core/Utils/DecompTypes.h"
#include "vox_JsonObject.h"

// ----------------------------------------------------------------------------
// Function: vox::JsonObject::opIndex  (binary VA: 0x1040e40)
// Original: vox::JsonObject::operator[]
// ----------------------------------------------------------------------------
int vox::JsonObject::opIndex(vox::JsonObject::Self *self, char *s2)
{
  int i;

  i = 0;
  if ( *((uint32_t *)self + 6) == 1 )
  {
    for ( i = *((uint32_t *)self + 2); i != 0; i = *(uint32_t *)(i + 4) )
    {
      if ( strcasecmp(*(const char **)(i + 16), s2) == 0 )
        break;
    }
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: vox::JsonObject::opIndex_ea1040ea0  (binary VA: 0x1040ea0)
// Original: vox::JsonObject::operator[]
// ----------------------------------------------------------------------------
int vox::JsonObject::opIndex_ea1040ea0(vox::JsonObject::Self *self, char *s2)
{
  int i;

  i = 0;
  if ( *((uint32_t *)self + 6) == 1 )
  {
    for ( i = *((uint32_t *)self + 2); i != 0; i = *(uint32_t *)(i + 4) )
    {
      if ( strcasecmp(*(const char **)(i + 16), s2) == 0 )
        break;
    }
  }
  return i;
}


