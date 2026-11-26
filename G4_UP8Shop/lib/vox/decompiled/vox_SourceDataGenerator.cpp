#include "Core/Utils/DecompTypes.h"
#include "vox_SourceDataGenerator.h"

// ----------------------------------------------------------------------------
// Function: vox::SourceDataGenerator::GetData  (binary VA: 0xffe6f0)
// Original: vox::SourceDataGenerator::GetData
// ----------------------------------------------------------------------------
int vox::SourceDataGenerator::GetData(vox::SourceDataGenerator::Self *self, int *a2, int a3)
{
  int result;

  result = *((uint32_t *)self + 1);
  if ( result != 0 )
    return G4_VCALL<int>(result, 100, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::SourceDataGenerator::setParent  (binary VA: 0xfffd40)
// Original: vox::SourceDataGenerator::setParent
// ----------------------------------------------------------------------------
vox::SourceDataGenerator::Self * vox::SourceDataGenerator::setParent(vox::SourceDataGenerator::Self *self, vox::DriverCallbackSourceInterface::Self *a2)
{
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::SourceDataGenerator::Destroy  (binary VA: 0x1008570)
// Original: vox::SourceDataGenerator::~SourceDataGenerator
// ----------------------------------------------------------------------------
void vox::SourceDataGenerator::Destroy(vox::SourceDataGenerator::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206AF10);
}

// ----------------------------------------------------------------------------
// Function: vox::SourceDataGenerator::Destroy_ea10085c0  (binary VA: 0x10085c0)
// Original: vox::SourceDataGenerator::~SourceDataGenerator
// ----------------------------------------------------------------------------
void vox::SourceDataGenerator::Destroy_ea10085c0(vox::SourceDataGenerator::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206AF10);
  opDelete(self);
}


