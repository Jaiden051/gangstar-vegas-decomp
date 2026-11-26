#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBoxBoxM.h"

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxManifold::Construct  (binary VA: 0x16ca2f0)
// Original: hkpBoxBoxManifold::hkpBoxBoxManifold
// ----------------------------------------------------------------------------
void hkpBoxBoxManifold::Construct(hkpBoxBoxManifold::Self *self)
{
  *((uint16_t *)self + 1) = 0;
  *((uint16_t *)self + 3) = 0;
  *((uint16_t *)self + 5) = 0;
  *((uint16_t *)self + 7) = 0;
  *((uint16_t *)self + 9) = 0;
  *((uint16_t *)self + 11) = 0;
  *((uint16_t *)self + 13) = 0;
  *((uint16_t *)self + 15) = 0;
  *((uint8_t *)self + 33) = 0;
  *((uint8_t *)self + 32) = 0;
  *((uint8_t *)self + 34) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxManifold::addPoint  (binary VA: 0x16ca340)
// Original: hkpBoxBoxManifold::addPoint
// ----------------------------------------------------------------------------
int hkpBoxBoxManifold::addPoint(int a1, int a2, int64_t a3)
{
  uint8_t v3; // di
  int result;
  char *v5;
  char *v6;
  char *v7;
  char *v8;
  char *v9;
  char *v10;
  char *v11;
  char v12;
  void *retaddr;

  v3 = (*(uint8_t **)((char *)&retaddr + 3))[33];
  result = v3;
  if ( v3 > 8u )
    return -1;
  if ( (*(uint8_t **)((char *)&retaddr + 3))[33] != 0 )
  {
    v5 = *(char **)((char *)&retaddr + 3) + 4 * v3 - 4;
    v12 = **(uint8_t **)((char *)&a3 + 3);
    if ( **(uint8_t **)((char *)&a3 + 3) == *v5 && v5[1] == *(uint8_t *)(*(uint32_t *)((char *)&a3 + 3) + 1) )
      return -1;
    if ( v3 != 1 )
    {
      v6 = *(char **)((char *)&retaddr + 3) + 4 * v3 - 8;
      if ( v12 == *v6 && v6[1] == *(uint8_t *)(*(uint32_t *)((char *)&a3 + 3) + 1) )
        return -1;
      if ( v3 != 2 )
      {
        v7 = *(char **)((char *)&retaddr + 3) + 4 * v3 - 12;
        if ( v12 == *v7 && v7[1] == *(uint8_t *)(*(uint32_t *)((char *)&a3 + 3) + 1) )
          return -1;
        if ( v3 != 3 )
        {
          v8 = *(char **)((char *)&retaddr + 3) + 4 * v3 - 16;
          if ( v12 == *v8 && v8[1] == *(uint8_t *)(*(uint32_t *)((char *)&a3 + 3) + 1) )
            return -1;
          if ( v3 != 4 )
          {
            v9 = *(char **)((char *)&retaddr + 3) + 4 * v3 - 20;
            if ( v12 == *v9 && v9[1] == *(uint8_t *)(*(uint32_t *)((char *)&a3 + 3) + 1) )
              return -1;
            if ( v3 != 5 )
            {
              v10 = *(char **)((char *)&retaddr + 3) + 4 * v3 - 24;
              if ( v12 == *v10 && v10[1] == *(uint8_t *)(*(uint32_t *)((char *)&a3 + 3) + 1) )
                return -1;
              if ( v3 != 6 )
              {
                v11 = *(char **)((char *)&retaddr + 3) + 4 * v3 - 28;
                if ( v12 == *v11 && v11[1] == *(uint8_t *)(*(uint32_t *)((char *)&a3 + 3) + 1) )
                  return -1;
                if ( v3 == 7 )
                {
LABEL_19:
                  (*(uint32_t **)((char *)&retaddr + 3))[v3] = **(uint32_t **)((char *)&a3 + 3);
                  (*(uint8_t **)((char *)&retaddr + 3))[33] = v3 + 1;
                  return result;
                }
                if ( v12 == **(uint8_t **)((char *)&retaddr + 3)
                  && (*(uint8_t **)((char *)&retaddr + 3))[1] == *(uint8_t *)(*(uint32_t *)((char *)&a3 + 3) + 1) )
                {
                  return -1;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v3 != 8 )
    goto LABEL_19;
  return -1;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxManifold::removePoint  (binary VA: 0x16ca4e0)
// Original: hkpBoxBoxManifold::removePoint
// ----------------------------------------------------------------------------
hkpBoxBoxManifold::Self * hkpBoxBoxManifold::removePoint(hkpBoxBoxManifold::Self *self, int a2)
{
  uint8_t v3;

  v3 = *((uint8_t *)self + 33);
  *((uint8_t *)self + 34) = 0;
  *((uint32_t *)self + a2) = *((uint32_t *)self + v3 - 1);
  *((uint8_t *)self + 33) = v3 - 1;
  return self;
}


