#include "Core/Utils/DecompTypes.h"
#include "glitch_ILogger.h"

// ----------------------------------------------------------------------------
// Function: glitch::ILogger::Destroy  (binary VA: 0xcef0d0)
// Original: glitch::ILogger::~ILogger
// ----------------------------------------------------------------------------
void glitch::ILogger::Destroy(glitch::ILogger::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::ILogger::Destroy_eacef360  (binary VA: 0xcef360)
// Original: glitch::ILogger::~ILogger
// ----------------------------------------------------------------------------
void glitch::ILogger::Destroy_eacef360(glitch::ILogger::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::ILogger::logf  (binary VA: 0xcf0ce0)
// Original: glitch::ILogger::logf
// ----------------------------------------------------------------------------
int glitch::ILogger::logf(int a1, int a2, int a3, ...)
{
  va_list va;

  va_start(va, a3);
  return G4_VCALL<int>(a1, 36, a2, a3, g4_va_cast<char *>(va));
}


