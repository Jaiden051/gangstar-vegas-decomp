#include "Core/Utils/DecompTypes.h"
#include "vox_data_source.h"

// ----------------------------------------------------------------------------
// Function: vox::data_source::CreationSettings::Construct  (binary VA: 0xfdae20)
// Original: vox::data_source::CreationSettings::CreationSettings
// ----------------------------------------------------------------------------
uint32_t * vox::data_source::CreationSettings::Construct(uint32_t *a1, int a2, int a3, int a4, int a5, int a6)
{
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  a1[3] = a5;
  a1[4] = a6;
  a1[5] = -1;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: vox::data_source::CreationSettings::Construct  (binary VA: 0xfdae70)
// Original: vox::data_source::CreationSettings::CreationSettings
// ----------------------------------------------------------------------------
vox::data_source::CreationSettings::Self * vox::data_source::CreationSettings::Construct(vox::data_source::CreationSettings::Self *self)
{
  *(uint32_t *)self = -1;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = -1;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = -1;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  return self;
}


