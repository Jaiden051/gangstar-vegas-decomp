#include "Core/Utils/DecompTypes.h"
#include "glf_OutputDebugLogStream.h"

// ----------------------------------------------------------------------------
// Function: glf::OutputDebugLogStream::Print  (binary VA: 0xc90ca0)
// Original: glf::OutputDebugLogStream::Print
// ----------------------------------------------------------------------------
void glf::OutputDebugLogStream::Print()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::OutputDebugLogStream::Destroy  (binary VA: 0xc92ee0)
// Original: glf::OutputDebugLogStream::~OutputDebugLogStream
// ----------------------------------------------------------------------------
void glf::OutputDebugLogStream::Destroy(glf::OutputDebugLogStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
}

// ----------------------------------------------------------------------------
// Function: glf::OutputDebugLogStream::Destroy_eac92f00  (binary VA: 0xc92f00)
// Original: glf::OutputDebugLogStream::~OutputDebugLogStream
// ----------------------------------------------------------------------------
void glf::OutputDebugLogStream::Destroy_eac92f00(glf::OutputDebugLogStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
  glf::MemObject::opDelete(self);
}


