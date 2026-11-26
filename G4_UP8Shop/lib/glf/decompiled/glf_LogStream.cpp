#include "Core/Utils/DecompTypes.h"
#include "glf_LogStream.h"

// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_LogStream.cpp
// Library: glf | Module: glf_LogStream
// Binary Address Span: 0xc91180 .. 0xc92ff0 (7 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xc91180 (size: 48 bytes)
// Symbol:    _ZN3glf9LogStreamC2Ev
// Demangled: glf::LogStream::LogStream(void)
// ============================================================================
// Alternative name is '_ZN3glf9LogStreamC1Ev'
struct glf::LogStream::Self *glf::LogStream::LogStream(glf::LogStream::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DC28);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 3;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glf::LogStream::EnableInfo  (binary VA: 0xc91220)
// Original: glf::LogStream::EnableInfo
// ----------------------------------------------------------------------------
int glf::LogStream::EnableInfo(int64_t a1, char a2)
{
  int result;

  result = a1;
  if ( a2 != 0 )
    *(uint32_t *)(a1 + 8) |= HIDWORD(a1);
  else
    *(uint32_t *)(a1 + 8) &= ~HIDWORD(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::LogStream::EnableInfos  (binary VA: 0xc91240)
// Original: glf::LogStream::EnableInfos
// ----------------------------------------------------------------------------
int glf::LogStream::EnableInfos(int64_t self, bool a2)
{
  int result;

  result = self;
  if ( a2 )
    *(uint32_t *)(self + 8) |= HIDWORD(self);
  else
    *(uint32_t *)(self + 8) &= ~HIDWORD(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::LogStream::IsInfoEnabled  (binary VA: 0xc91260)
// Original: glf::LogStream::IsInfoEnabled
// ----------------------------------------------------------------------------
bool glf::LogStream::IsInfoEnabled(int a1, int a2)
{
  return (a2 & *(uint32_t *)(a1 + 8)) != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::LogStream::AreInfosEnabled  (binary VA: 0xc91b60)
// Original: glf::LogStream::AreInfosEnabled
// ----------------------------------------------------------------------------
bool glf::LogStream::AreInfosEnabled(glf::LogStream::Self *self, int a2)
{
  return (a2 & *((uint32_t *)self + 2)) == a2;
}

// ----------------------------------------------------------------------------
// Function: glf::LogStream::Destroy  (binary VA: 0xc92e20)
// Original: glf::LogStream::~LogStream
// ----------------------------------------------------------------------------
void glf::LogStream::Destroy(glf::LogStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
}

// ----------------------------------------------------------------------------
// Function: glf::LogStream::Destroy_eac92ff0  (binary VA: 0xc92ff0)
// Original: glf::LogStream::~LogStream
// ----------------------------------------------------------------------------
void glf::LogStream::Destroy_eac92ff0(glf::LogStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
  glf::MemObject::opDelete(self);
}


