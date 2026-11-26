#include "Core/Utils/DecompTypes.h"
#include "vox_JsonArray.h"

// ----------------------------------------------------------------------------
// Function: vox::JsonArray::opIndex  (binary VA: 0x1040f00)
// Original: vox::JsonArray::operator[]
// ----------------------------------------------------------------------------
int vox::JsonArray::opIndex(vox::JsonArray::Self *self, unsigned int a2)
{
  int result;
  int i;

  result = 0;
  if ( *((uint32_t *)self + 6) == 2 )
  {
    result = *((uint32_t *)self + 2);
    if ( result != 0 )
    {
      for ( i = 0; a2 != i; ++i )
      {
        result = *(uint32_t *)(result + 4);
        if ( result == 0 )
          break;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::JsonArray::opIndex_ea1040f30  (binary VA: 0x1040f30)
// Original: vox::JsonArray::operator[]
// ----------------------------------------------------------------------------
int vox::JsonArray::opIndex_ea1040f30(vox::JsonArray::Self *self, unsigned int a2)
{
  int result;
  int i;

  result = 0;
  if ( *((uint32_t *)self + 6) == 2 )
  {
    result = *((uint32_t *)self + 2);
    if ( result != 0 )
    {
      for ( i = 0; a2 != i; ++i )
      {
        result = *(uint32_t *)(result + 4);
        if ( result == 0 )
          break;
      }
    }
  }
  return result;
}


