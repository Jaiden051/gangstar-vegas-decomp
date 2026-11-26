#include "Core/Utils/DecompTypes.h"
#include "gaia_Console.h"

// ----------------------------------------------------------------------------
// Function: gaia::Console::Construct  (binary VA: 0x14cf260)
// Original: gaia::Console::Console
// ----------------------------------------------------------------------------
void gaia::Console::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gaia::Console::Destroy  (binary VA: 0x14cf270)
// Original: gaia::Console::~Console
// ----------------------------------------------------------------------------
void gaia::Console::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gaia::Console::SetLogLevel  (binary VA: 0x14cf280)
// Original: gaia::Console::SetLogLevel
// ----------------------------------------------------------------------------
uint32_t * gaia::Console::SetLogLevel()
{
  gaia::Console::m_logLevel = 0;
  return (uint32_t *)(&gaia::Console::m_logLevel);
}

// ----------------------------------------------------------------------------
// Function: gaia::Console::IncreaseIndent  (binary VA: 0x14cf2a0)
// Original: gaia::Console::IncreaseIndent
// ----------------------------------------------------------------------------
uint32_t * gaia::Console::IncreaseIndent()
{
  uint32_t *result;

  result = (uint32_t *)(&gaia::Console::m_logLevel);
  if ( gaia::Console::m_logLevel > 4u )
  {
    ++gaia::Console::m_indentLevel;
    return (uint32_t *)(&gaia::Console::m_indentLevel);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Console::DecreaseIndent  (binary VA: 0x14cf2c0)
// Original: gaia::Console::DecreaseIndent
// ----------------------------------------------------------------------------
uint32_t * gaia::Console::DecreaseIndent()
{
  uint32_t *result;

  result = (uint32_t *)(&gaia::Console::m_logLevel);
  if ( gaia::Console::m_logLevel > 4u )
  {
    --gaia::Console::m_indentLevel;
    return (uint32_t *)(&gaia::Console::m_indentLevel);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Console::Print  (binary VA: 0x14cf2e0)
// Original: gaia::Console::Print
// ----------------------------------------------------------------------------
uint32_t * gaia::Console::Print(gaia::Console::Self *self, char *format, const char *__varargs, ...)
{
  uint32_t *result;

  result = (uint32_t *)(&gaia::Console::m_logLevel);
  if ( gaia::Console::m_logLevel >= (unsigned int)(uintptr_t)(self) )
  {
    vsnprintf(((char *)(&byte_2119E60)), 0x400u, format, &__varargs);
    switch ( (unsigned int)(uintptr_t)(self) )
    {
      case 0u:
        result = (G4_PlatformLog(3, "[Gaia]", "%s", (const char *)(&byte_2119E60)), (uint32_t *)0);
        break;
      case 1u:
        result = (G4_PlatformLog(7, "[Gaia]", "%s", (const char *)(&byte_2119E60)), (uint32_t *)0);
        break;
      case 2u:
        result = (G4_PlatformLog(6, "[Gaia]", "%s", (const char *)(&byte_2119E60)), (uint32_t *)0);
        break;
      case 3u:
        result = (G4_PlatformLog(5, "[Gaia]", "%s", (const char *)(&byte_2119E60)), (uint32_t *)0);
        break;
      case 4u:
        result = (G4_PlatformLog(4, "[Gaia]", "%s", (const char *)(&byte_2119E60)), (uint32_t *)0);
        break;
      default:
        result = (G4_PlatformLog(2, "[Gaia]", "%s", (const char *)(&byte_2119E60)), (uint32_t *)0);
        break;
    }
  }
  return result;
}


