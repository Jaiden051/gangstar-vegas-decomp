#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpRayHitC.h"

// ----------------------------------------------------------------------------
// Function: hkpRayHitCollector::shapeKeysFromCdBody  (binary VA: 0x1690570)
// Original: hkpRayHitCollector::shapeKeysFromCdBody
// ----------------------------------------------------------------------------
int hkpRayHitCollector::shapeKeysFromCdBody(hkpRayHitCollector::Self *self, unsigned int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  uint32_t v15[10];

  v3 = *(uint32_t *)(a3 + 12);
  if ( v3 == 0 )
    goto LABEL_27;
  v15[0] = a3;
  v4 = *(uint32_t *)(v3 + 12);
  if ( v4 != 0 )
  {
    v15[1] = v3;
    v5 = *(uint32_t *)(v4 + 12);
    if ( v5 != 0 )
    {
      v15[2] = v4;
      v6 = *(uint32_t *)(v5 + 12);
      if ( v6 != 0 )
      {
        v15[3] = v5;
        v7 = *(uint32_t *)(v6 + 12);
        if ( v7 != 0 )
        {
          v15[4] = v6;
          v8 = *(uint32_t *)(v7 + 12);
          if ( v8 != 0 )
          {
            v15[5] = v7;
            v9 = *(uint32_t *)(v8 + 12);
            if ( v9 != 0 )
            {
              v15[6] = v8;
              if ( *(uint32_t *)(v9 + 12) != 0 )
              {
                v15[7] = v9;
                v10 = 8;
              }
              else
              {
                v10 = 7;
              }
            }
            else
            {
              v10 = 6;
            }
          }
          else
          {
            v10 = 5;
          }
        }
        else
        {
          v10 = 4;
        }
      }
      else
      {
        v10 = 3;
      }
    }
    else
    {
      v10 = 2;
    }
  }
  else
  {
    v10 = 1;
  }
  v11 = (char *)a2 - 1;
  if ( (int)(uintptr_t)(a2) - 1 > 0 )
  {
    *(uint32_t *)self = *(uint32_t *)(v15[v10 - 1] + 4);
    if ( v10 == 1 || (int)(uintptr_t)(v11) <= 1 )
    {
      v13 = 1;
    }
    else
    {
      *((uint32_t *)self + 1) = *(uint32_t *)(v15[v10 - 2] + 4);
      if ( v10 == 2 || (int)(uintptr_t)(v11) <= 2 )
      {
        v13 = 2;
      }
      else
      {
        *((uint32_t *)self + 2) = *(uint32_t *)(v15[v10 - 3] + 4);
        if ( v10 == 3 || (int)(uintptr_t)(v11) <= 3 )
        {
          v13 = 3;
        }
        else
        {
          *((uint32_t *)self + 3) = *(uint32_t *)(v15[v10 - 4] + 4);
          if ( v10 == 4 || (int)(uintptr_t)(v11) <= 4 )
          {
            v13 = 4;
          }
          else
          {
            *((uint32_t *)self + 4) = *(uint32_t *)(v15[v10 - 5] + 4);
            if ( v10 == 5 || (int)(uintptr_t)(v11) <= 5 )
            {
              v13 = 5;
            }
            else
            {
              *((uint32_t *)self + 5) = *(uint32_t *)(v15[v10 - 6] + 4);
              if ( v10 == 6 || (int)(uintptr_t)(v11) <= 6 )
              {
                v13 = 6;
              }
              else
              {
                v12 = v10 - 7;
                *((uint32_t *)self + 6) = *(uint32_t *)(v15[v12] + 4);
                if ( v12 != 0 && (int)(uintptr_t)(v11) > 7 )
                {
                  *((uint32_t *)self + 7) = *(uint32_t *)(v15[0] + 4);
                  v13 = 8;
                }
                else
                {
                  v13 = 7;
                }
              }
            }
          }
        }
      }
    }
    *((uint32_t *)self + v13) = -1;
    return v13 + 1;
  }
  else
  {
LABEL_27:
    *(uint32_t *)self = -1;
    return 1;
  }
}


