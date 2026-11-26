#include "Core/Utils/DecompTypes.h"
#include "glf_ConsoleScopeBuffer.h"

// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_ConsoleScopeBuffer.cpp
// Library: glf | Module: glf_ConsoleScopeBuffer
// Binary Address Span: 0xc87110 .. 0xc872d0 (6 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xc87110 (size: 19 bytes)
// Symbol:    _ZN3glf18ConsoleScopeBufferC2Ev
// Demangled: glf::ConsoleScopeBuffer::ConsoleScopeBuffer(void)
// ============================================================================
// Alternative name is '_ZN3glf18ConsoleScopeBufferC1Ev'
struct glf::ConsoleScopeBuffer::Self *glf::ConsoleScopeBuffer::ConsoleScopeBuffer(glf::ConsoleScopeBuffer::Self *self)
{
  *((uint32_t *)self + 256) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glf::ConsoleScopeBuffer::Destroy  (binary VA: 0xc87130)
// Original: glf::ConsoleScopeBuffer::~ConsoleScopeBuffer
// ----------------------------------------------------------------------------
void glf::ConsoleScopeBuffer::Destroy(void **self)
{
  if ( *(self + 256) != nullptr )
    opDeleteArray(*(self + 256));
}

// ----------------------------------------------------------------------------
// Function: glf::ConsoleScopeBuffer::VPrint  (binary VA: 0xc87160)
// Original: glf::ConsoleScopeBuffer::VPrint
// ----------------------------------------------------------------------------
glf::ConsoleScopeBuffer::Self * glf::ConsoleScopeBuffer::VPrint(glf::ConsoleScopeBuffer::Self **self, bool a2, char *format, __gnuc_va_list __varargs)
{
  glf::ConsoleScopeBuffer::Self *v4;
  size_t maxlen;
  int v7;
  char *s;

  v4 = (glf::ConsoleScopeBuffer::Self *)self;
  maxlen = vsnprintf((char *)self, 0x3FEu, format, __varargs);
  if ( maxlen > 0x3FD )
  {
    v4 = nullptr;
    v7 = vsnprintf(nullptr, 0, format, __varargs);
    maxlen = v7;
    if ( v7 > 0 )
    {
      s = (char *)opNewArray(v7 + 2);
      *(self + 256) = (glf::ConsoleScopeBuffer::Self *)s;
      maxlen = vsnprintf(s, maxlen, format, __varargs);
      v4 = *(self + 256);
    }
  }
  if ( a2 && v4 != nullptr )
  {
    *((uint8_t *)v4 + maxlen) = 10;
    *((uint8_t *)v4 + maxlen + 1) = 0;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glf::ConsoleScopeBuffer::VPrint  (binary VA: 0xc87250)
// Original: glf::ConsoleScopeBuffer::VPrint
// ----------------------------------------------------------------------------
glf::ConsoleScopeBuffer::Self * glf::ConsoleScopeBuffer::VPrint(glf::ConsoleScopeBuffer::Self **self, char *a2, __gnuc_va_list __varargs)
{
  return glf::ConsoleScopeBuffer::VPrint(self, false, a2, __varargs);
}

// ----------------------------------------------------------------------------
// Function: glf::ConsoleScopeBuffer::VPrintln  (binary VA: 0xc87290)
// Original: glf::ConsoleScopeBuffer::VPrintln
// ----------------------------------------------------------------------------
glf::ConsoleScopeBuffer::Self * glf::ConsoleScopeBuffer::VPrintln(glf::ConsoleScopeBuffer::Self **self, char *a2, __gnuc_va_list __varargs)
{
  return glf::ConsoleScopeBuffer::VPrint(self, true, a2, __varargs);
}

// ----------------------------------------------------------------------------
// Function: glf::ConsoleScopeBuffer::VPrintLn  (binary VA: 0xc872d0)
// Original: glf::ConsoleScopeBuffer::VPrintLn
// ----------------------------------------------------------------------------
glf::ConsoleScopeBuffer::Self * glf::ConsoleScopeBuffer::VPrintLn(glf::ConsoleScopeBuffer::Self **self, char *a2, __gnuc_va_list __varargs)
{
  return glf::ConsoleScopeBuffer::VPrint(self, true, a2, __varargs);
}


