#include "Core/Utils/DecompTypes.h"
#include "glitch_checked_delete_glitch.h"

// ----------------------------------------------------------------------------
// Function: boost::checked_delete_util_CFastRectanglePacke_de2cb8  (binary VA: 0xf179a0)
// Original: boost::checked_delete<glitch::util::CFastRectanglePacker>
// ----------------------------------------------------------------------------
void boost::checked_delete_util_CFastRectanglePacke_de2cb8(uint32_t *a1)
{
  char *v1;
  unsigned int v2;
  int v3;
  char *v4;
  char *v5;
  char *v6;
  char *v7;
  void *v8;

  if ( a1 != nullptr )
  {
    v1 = (char *)a1[8];
    if ( v1 != nullptr )
    {
      v2 = a1[10];
      if ( v2 <= 3 )
      {
        v2 = 4;
      }
      else if ( (v2 & 3) != 0 )
      {
        v2 = a1[10] + 4 - (a1[10] & 3);
      }
      v3 = a1[9];
      while ( 1 )
      {
        v4 = &v1[v3 - 4];
        v3 = *(uint32_t *)v4;
        v5 = *((char **)v4 - 1);
        v6 = v4 - 4;
        if ( v6 != v1 )
        {
          v7 = v1;
          do
            v7 += v2;
          while ( v6 != v7 );
        }
        opDeleteArray(v1);
        if ( v5 == nullptr )
          break;
        v1 = v5;
      }
      v8 = a1;
      a1[8] = 0;
    }
    else
    {
      sub_6025A0(a1 + 7);
      v8 = a1;
    }
    opDelete(v8);
  }
}


