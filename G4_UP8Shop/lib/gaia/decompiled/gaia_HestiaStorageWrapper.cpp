#include "Core/Utils/DecompTypes.h"
#include "gaia_HestiaStorageWrapper.h"

// ----------------------------------------------------------------------------
// Function: gaia::HestiaStorageWrapper::GetStorageFilePath  (binary VA: 0x14ca3d0)
// Original: gaia::HestiaStorageWrapper::GetStorageFilePath
// ----------------------------------------------------------------------------
gaia::HestiaStorageWrapper::Self * gaia::HestiaStorageWrapper::GetStorageFilePath(gaia::HestiaStorageWrapper::Self *self)
{
  getSD_path((int)(uintptr_t)(self));
  return self;
}


