#include "Core/Utils/DecompTypes.h"
#include "glf_StdOutLogStream.h"

// ----------------------------------------------------------------------------
// Function: glf::StdOutLogStream::Print  (binary VA: 0xc912e0)
// Original: glf::StdOutLogStream::Print
// ----------------------------------------------------------------------------
char glf::StdOutLogStream::Print(glf::StdOutLogStream::Self *self, const glf::PrintParams::Self *a2)
{
  char result;

  if ( glf::LogStream::IsInfoEnabled((int)(uintptr_t)(self), 2) && **((uint8_t **)a2 + 3) != 0 )
    fprintf(stdout, "[%s]", *((uint32_t *)a2 + 3));
  if ( glf::LogStream::IsInfoEnabled((int)(uintptr_t)(self), 4) )
    fprintf(stdout, "[lvl:%s]", glf::gLogLevelNames[*((uint32_t *)a2 + 4)]);
  glf::LogStream::IsInfoEnabled((int)(uintptr_t)(self), 1);
  if ( glf::LogStream::IsInfoEnabled((int)(uintptr_t)(self), 8) )
    fprintf(stdout, "[tid:%d]", *((uint32_t *)a2 + 5));
  fputs(*(const char **)a2, stdout);
  result = glf::LogStream::IsInfoEnabled((int)(uintptr_t)(self), 16);
  if ( result != 0 )
    return fflush(stdout);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::StdOutLogStream::Destroy  (binary VA: 0xc92ec0)
// Original: glf::StdOutLogStream::~StdOutLogStream
// ----------------------------------------------------------------------------
void glf::StdOutLogStream::Destroy(glf::StdOutLogStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
}

// ----------------------------------------------------------------------------
// Function: glf::StdOutLogStream::Destroy_eac92f30  (binary VA: 0xc92f30)
// Original: glf::StdOutLogStream::~StdOutLogStream
// ----------------------------------------------------------------------------
void glf::StdOutLogStream::Destroy_eac92f30(glf::StdOutLogStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
  glf::MemObject::opDelete(self);
}


