#include "Core/Utils/DecompTypes.h"
#include "glf_LogCatStream.h"

// ----------------------------------------------------------------------------
// Function: glf::LogCatStream::Print  (binary VA: 0xc90cb0)
// Original: glf::LogCatStream::Print
// ----------------------------------------------------------------------------
void glf::LogCatStream::Print()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::LogCatStream::Destroy  (binary VA: 0xc92e60)
// Original: glf::LogCatStream::~LogCatStream
// ----------------------------------------------------------------------------
void glf::LogCatStream::Destroy(glf::LogCatStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
}

// ----------------------------------------------------------------------------
// Function: glf::LogCatStream::Destroy_eac92fc0  (binary VA: 0xc92fc0)
// Original: glf::LogCatStream::~LogCatStream
// ----------------------------------------------------------------------------
void glf::LogCatStream::Destroy_eac92fc0(glf::LogCatStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
  glf::MemObject::opDelete(self);
}


