#include "Core/Utils/DecompTypes.h"
#include "vox_FileSystemStdio.h"

// ----------------------------------------------------------------------------
// Function: vox::FileSystemStdio::Destroy  (binary VA: 0x10113e0)
// Original: vox::FileSystemStdio::~FileSystemStdio
// ----------------------------------------------------------------------------
void vox::FileSystemStdio::Destroy(vox::FileSystemStdio::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D7A8);
  vox::FileSystemInterface::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemStdio::Destroy_ea1011410  (binary VA: 0x1011410)
// Original: vox::FileSystemStdio::~FileSystemStdio
// ----------------------------------------------------------------------------
void vox::FileSystemStdio::Destroy_ea1011410(vox::FileSystemStdio::Self *self)
{
  vox::FileSystemStdio::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemStdio::Construct  (binary VA: 0x10116e0)
// Original: vox::FileSystemStdio::FileSystemStdio
// ----------------------------------------------------------------------------
vox::FileSystemStdio::Self * vox::FileSystemStdio::Construct(vox::FileSystemStdio::Self *self)
{
  vox::FileSystemInterface::Construct(self);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D7A8);
  *(uintptr_t *)(unk_20E2070) = (uintptr_t)(((FILE * (*)(const char *, int))vox::openStdIO));
  *(uintptr_t *)(unk_20E2074) = (uintptr_t)(((int (*)(FILE *))vox::closeStdIO));
  vox::FileSystemInterface::m_IOFunc = (uintptr_t)(uintptr_t)(vox::readStdIO);
  dword_20E2064 = (uint32_t)(uintptr_t)(vox::writeStdIO);
  dword_20E2068 = (uint32_t)(uintptr_t)(vox::seekStdIO);
  dword_20E206C = (uint32_t)(uintptr_t)(vox::tellStdIO);
  dword_20E2078[0] = (uint32_t)(uintptr_t)(vox::isDir);
  return (vox::FileSystemStdio::Self *)&vox::FileSystemInterface::m_IOFunc;
}


