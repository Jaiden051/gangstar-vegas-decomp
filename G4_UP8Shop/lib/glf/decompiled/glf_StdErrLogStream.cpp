#include "Core/Utils/DecompTypes.h"
#include "glf_StdErrLogStream.h"

// ----------------------------------------------------------------------------
// Function: glf::StdErrLogStream::Print  (binary VA: 0xc91270)
// Original: glf::StdErrLogStream::Print
// ----------------------------------------------------------------------------
char glf::StdErrLogStream::Print(glf::StdErrLogStream::Self *self, const char **a2)
{
  char result;

  fputs(*a2, stderr);
  result = glf::LogStream::IsInfoEnabled((int)(uintptr_t)(self), 16);
  if ( result != 0 )
    return fflush(stderr);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::StdErrLogStream::Destroy  (binary VA: 0xc92ea0)
// Original: glf::StdErrLogStream::~StdErrLogStream
// ----------------------------------------------------------------------------
void glf::StdErrLogStream::Destroy(glf::StdErrLogStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
}

// ----------------------------------------------------------------------------
// Function: glf::StdErrLogStream::Destroy_eac92f60  (binary VA: 0xc92f60)
// Original: glf::StdErrLogStream::~StdErrLogStream
// ----------------------------------------------------------------------------
void glf::StdErrLogStream::Destroy_eac92f60(glf::StdErrLogStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
  glf::MemObject::opDelete(self);
}


