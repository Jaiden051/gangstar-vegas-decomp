#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpCollida.h"

// ----------------------------------------------------------------------------
// Function: hkpCollidable::checkPerformance  (binary VA: 0x1696c60)
// Original: hkpCollidable::checkPerformance
// ----------------------------------------------------------------------------
hkpCollidable::Self * hkpCollidable::checkPerformance(hkpCollidable::Self *self, uint32_t *a2)
{
  int v2;
  char v3;
  char v4; // bp
  int v6;
  int v7;
  int v8;

  v2 = *a2;
  if ( *a2 != 0 )
  {
    v3 = *(uint8_t *)(v2 + 8);
    if ( v3 != 8
      || (v7 = (*(int (**)(uint32_t))(*(uint32_t *)v2 + 96))(*a2),
          v2 = *a2,
          v4 = 0,
          v3 = *(uint8_t *)(*a2 + 8),
          v7 <= 100) )
    {
      v4 = 1;
    }
    if ( v3 == 27 )
    {
      v8 = G4_VCALL<int>(v2 + 16, 8);
      v2 = *a2;
      v3 = *(uint8_t *)(*a2 + 8);
      if ( v8 > 100 )
        v4 = 0;
    }
    if ( v3 == 18 || v3 == 6 )
    {
      v6 = G4_VCALL<int>(v2 + 16, 8);
      v3 = *(uint8_t *)(*a2 + 8);
      if ( v6 > 100 )
        v4 = 0;
    }
    if ( v3 == 14 )
      v4 = 0;
    *(uint8_t *)self = v4;
    return self;
  }
  else
  {
    *(uint8_t *)self = 0;
    return self;
  }
}



// ============================================================================
// Address:   0x1696d20 (size: 65 bytes)
// Symbol:    _ZN13hkpCollidable18BoundingVolumeDataC1Ev
// Demangled: hkpCollidable::BoundingVolumeData::BoundingVolumeData(void)
// ============================================================================
// Alternative name is '_ZN13hkpCollidable18BoundingVolumeDataC2Ev'
struct hkpCollidable::BoundingVolumeData::Self *hkpCollidable::BoundingVolumeData::BoundingVolumeData(
        hkpCollidable::BoundingVolumeData::Self *self)
{
  struct hkpCollidable::BoundingVolumeData::Self *result;

  result = (struct hkpCollidable::BoundingVolumeData::Self *)hkString::memSet(self, nullptr, 0x2Cu);
  *(uint32_t *)self = 1;
  *((uint32_t *)self + 4) = 0;
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpCollidable::BoundingVolumeData::deallocate  (binary VA: 0x1696d70)
// Original: hkpCollidable::BoundingVolumeData::deallocate
// ----------------------------------------------------------------------------
int hkpCollidable::BoundingVolumeData::deallocate(hkpCollidable::BoundingVolumeData::Self *self)
{
  int address;
  int result;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    *((uint32_t *)self + 9),
    32 * *((uint16_t *)self + 17));
  result = (*(int (**)(uint32_t, uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             *((uint32_t *)self + 10),
             (4 * *((uint16_t *)self + 17) + 12) & 0x7FFF0);
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint16_t *)self + 16) = 0;
  *((uint16_t *)self + 17) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollidable::BoundingVolumeData::allocate  (binary VA: 0x1696e10)
// Original: hkpCollidable::BoundingVolumeData::allocate
// ----------------------------------------------------------------------------
void hkpCollidable::BoundingVolumeData::allocate(hkpCollidable::BoundingVolumeData::Self *self, int a2)
{
  int address;

  *((uint16_t *)self + 16) = a2;
  *((uint16_t *)self + 17) = a2;
  if ( a2 != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    *((uint32_t *)self + 9) = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                              *(uint32_t *)(*(uint32_t *)address + 44),
                              32 * (uint16_t)a2);
    *((uint32_t *)self + 10) = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                               *(uint32_t *)(*(uint32_t *)address + 44),
                               (4 * *((uint16_t *)self + 17) + 12) & 0x7FFF0);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpCollidableCollidableFilter::staticClass  (binary VA: 0x16c00e0)
// Original: hkpCollidableCollidableFilter::staticClass
// ----------------------------------------------------------------------------
void * hkpCollidableCollidableFilter::staticClass()
{
  return &hkpCollidableCollidableFilterClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCollidable::BoundingVolumeData::staticClass  (binary VA: 0x16c9210)
// Original: hkpCollidable::BoundingVolumeData::staticClass
// ----------------------------------------------------------------------------
void * hkpCollidable::BoundingVolumeData::staticClass()
{
  return &hkpCollidableBoundingVolumeDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCollidable::staticClass  (binary VA: 0x16c9230)
// Original: hkpCollidable::staticClass
// ----------------------------------------------------------------------------
void * hkpCollidable::staticClass()
{
  return &hkpCollidableClass;
}


