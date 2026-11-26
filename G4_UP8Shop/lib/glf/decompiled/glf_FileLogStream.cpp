#include "Core/Utils/DecompTypes.h"
#include "glf_FileLogStream.h"

// ----------------------------------------------------------------------------
// Function: glf::FileLogStream::Print  (binary VA: 0xc90d00)
// Original: glf::FileLogStream::Print
// ----------------------------------------------------------------------------
FILE * glf::FileLogStream::Print(const char **self, const char **a2)
{
  FILE *result;
  FILE *v3;

  result = fopen(*(self + 4), "a");
  v3 = result;
  if ( result != nullptr )
  {
    fputs(*a2, result);
    return (FILE *)fclose(v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogStream::Destroy  (binary VA: 0xc90d60)
// Original: glf::FileLogStream::~FileLogStream
// ----------------------------------------------------------------------------
void glf::FileLogStream::Destroy(glf::FileLogStream::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DBC8);
  v1 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogStream::Destroy_eac90dd0  (binary VA: 0xc90dd0)
// Original: glf::FileLogStream::~FileLogStream
// ----------------------------------------------------------------------------
void glf::FileLogStream::Destroy_eac90dd0(glf::FileLogStream::Self *self)
{
  glf::FileLogStream::Destroy(self);
  glf::MemObject::opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::FileLogStream::Construct  (binary VA: 0xc911b0)
// Original: glf::FileLogStream::FileLogStream
// ----------------------------------------------------------------------------
FILE * glf::FileLogStream::Construct(const char **self, char *a2)
{
  FILE *result;
  int v3[3];

  glf::LogStream::LogStream((glf::LogStream::Self *)self);
  *self = (const char *)((uint32_t)(uintptr_t)&off_206DBC8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self + 4), a2, (int)(uintptr_t)(v3));
  result = fopen(*(self + 4), "w");
  if ( result != nullptr )
    return (FILE *)fclose(result);
  return result;
}


