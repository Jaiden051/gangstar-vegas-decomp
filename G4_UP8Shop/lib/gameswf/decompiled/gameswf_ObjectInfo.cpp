#include "Core/Utils/DecompTypes.h"
#include "gameswf_ObjectInfo.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ObjectInfo::getMemberIndex  (binary VA: 0x11764d0)
// Original: gameswf::ObjectInfo::getMemberIndex
// ----------------------------------------------------------------------------
int gameswf::ObjectInfo::getMemberIndex(gameswf::ObjectInfo::Self *self, const gameswf::String::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  const gameswf::String::Self *v12;
  const char *s2;
  const char *s1;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v2 = -1;
  v3 = *((uint32_t *)self + 3);
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 4);
    v5 = 0;
    if ( v4 >= 0 && *(uint32_t *)(v3 + 8) == -2 )
    {
      v7 = 24;
      v8 = 1;
      do
      {
        v5 = v8;
        if ( v8 > v4 )
          break;
        ++v8;
        v9 = *(uint32_t *)(*((uint32_t *)self + 3) + v7);
        v7 += 16;
      }
      while ( v9 == -2 );
    }
    v2 = -1;
    if ( self != (gameswf::ObjectInfo::Self *)-12 && *((uint32_t *)self + 3) != 0 )
    {
      v10 = *((uint32_t *)self + 3);
      while ( 1 )
      {
LABEL_12:
        v11 = *(uint32_t *)(v10 + 4);
        if ( v11 < v5 )
          return -1;
        v19 = *(uint32_t *)(v10 + 16 * v5 + 16);
        v12 = *(const gameswf::String::Self **)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 172) + 16) + 4 * v19);
        if ( a2 == v12 )
          return *(uint32_t *)(v10 + 16 * v5 + 16);
        s2 = (char *)a2 + 1;
        if ( *(uint8_t *)a2 == 0xFF )
          s2 = *((const char **)a2 + 3);
        s1 = (char *)v12 + 1;
        if ( *(uint8_t *)v12 == 0xFF )
          s1 = *((const char **)v12 + 3);
        if ( strcmp(s1, s2) == 0 )
          return v19;
        v15 = v5 + 1;
        if ( v5 + 1 <= v11 && *(uint32_t *)(v10 + 16 * v15 + 8) == -2 )
        {
          v16 = v5 + 2;
          v17 = 16 * v16 + 8;
          while ( 1 )
          {
            v15 = v16;
            if ( v16 > v11 )
              break;
            v18 = *(uint32_t *)(v10 + v17);
            ++v16;
            v17 += 16;
            if ( v18 != -2 )
            {
              v5 = v15;
              goto LABEL_12;
            }
          }
        }
        v5 = v15;
      }
    }
  }
  return v2;
}


