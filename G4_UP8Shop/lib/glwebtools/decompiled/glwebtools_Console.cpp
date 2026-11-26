#include "Core/Utils/DecompTypes.h"
#include "glwebtools_Console.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::Console::SetConsoleImpl  (binary VA: 0x1405440)
// Original: glwebtools::Console::SetConsoleImpl
// ----------------------------------------------------------------------------
uint32_t * glwebtools::Console::SetConsoleImpl(int a1)
{
  glwebtools::Console::s_impl = a1;
  return (uint32_t *)(&glwebtools::Console::s_impl);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Console::SetLogLevel  (binary VA: 0x1405460)
// Original: glwebtools::Console::SetLogLevel
// ----------------------------------------------------------------------------
uint32_t * glwebtools::Console::SetLogLevel(glwebtools::Console::Self *self)
{
  glwebtools::ConsoleImplInterface::s_logLevel = self;
  return (uint32_t *)(&glwebtools::ConsoleImplInterface::s_logLevel);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Console::Print  (binary VA: 0x1405480)
// Original: glwebtools::Console::Print
// ----------------------------------------------------------------------------
void glwebtools::Console::Print()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Console::Construct  (binary VA: 0x1405490)
// Original: glwebtools::Console::Console
// ----------------------------------------------------------------------------
void glwebtools::Console::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Console::Destroy  (binary VA: 0x14054a0)
// Original: glwebtools::Console::~Console
// ----------------------------------------------------------------------------
void glwebtools::Console::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Console::Print  (binary VA: 0x14054b0)
// Original: glwebtools::Console::_Print
// ----------------------------------------------------------------------------
glwebtools::Console::Self * glwebtools::Console::Print(glwebtools::Console::Self *self, unsigned int a2, const char *a3)
{
  glwebtools::Console::Self *result;

  result = self;
  if ( glwebtools::ConsoleImplInterface::s_logLevel >= (void *)(intptr_t)((unsigned int)(uintptr_t)(self)) )
    return (glwebtools::Console::Self *)__android_log_vprint(7 - (uint32_t)(uintptr_t)(self), "GLWT", a2, a3);
  return result;
}


