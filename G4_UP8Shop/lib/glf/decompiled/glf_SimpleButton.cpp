#include "Core/Utils/DecompTypes.h"
#include "glf_SimpleButton.h"

// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_SimpleButton.cpp
// Library: glf | Module: glf_SimpleButton
// Binary Address Span: 0xcb2c70 .. 0xcb2f60 (13 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xcb2c70 (size: 18 bytes)
// Symbol:    _ZN3glf12SimpleButtonC1Ev
// Demangled: glf::SimpleButton::SimpleButton(void)
// ============================================================================
// Alternative name is '_ZN3glf12SimpleButtonC2Ev'
struct glf::SimpleButton::Self *glf::SimpleButton::SimpleButton(glf::SimpleButton::Self *self)
{
  *(uint16_t *)self = 0;
  *((uint16_t *)self + 1) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glf::SimpleButton::IsDown  (binary VA: 0xcb2c90)
// Original: glf::SimpleButton::IsDown
// ----------------------------------------------------------------------------
int glf::SimpleButton::IsDown(glf::SimpleButton::Self *self)
{
  return *(uint16_t *)self >> 15;
}

// ----------------------------------------------------------------------------
// Function: glf::SimpleButton::IsUp  (binary VA: 0xcb2ca0)
// Original: glf::SimpleButton::IsUp
// ----------------------------------------------------------------------------
int glf::SimpleButton::IsUp(glf::SimpleButton::Self *self)
{
  return glf::SimpleButton::IsDown(self) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glf::SimpleButton::GetDownCount  (binary VA: 0xcb2cd0)
// Original: glf::SimpleButton::GetDownCount
// ----------------------------------------------------------------------------
int glf::SimpleButton::GetDownCount(glf::SimpleButton::Self *self)
{
  return *(uint16_t *)self & 0x3FFF;
}

// ----------------------------------------------------------------------------
// Function: glf::SimpleButton::GetValue  (binary VA: 0xcb2ce0)
// Original: glf::SimpleButton::GetValue
// ----------------------------------------------------------------------------
int glf::SimpleButton::GetValue(glf::SimpleButton::Self *self)
{
  return *((uint16_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: glf::SimpleButton::SetValue  (binary VA: 0xcb2cf0)
// Original: glf::SimpleButton::SetValue
// ----------------------------------------------------------------------------
glf::SimpleButton::Self * glf::SimpleButton::SetValue(glf::SimpleButton::Self *self, uint16_t a2)
{
  *((uint16_t *)self + 1) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::SimpleButton::ResetFrame  (binary VA: 0xcb2d00)
// Original: glf::SimpleButton::ResetFrame
// ----------------------------------------------------------------------------
int16_t glf::SimpleButton::ResetFrame(glf::SimpleButton::Self *self)
{
  int16_t result;

  result = (uint8_t)glf::SimpleButton::IsDown(self) != 0 ? 0xC000 : 0;
  *(uint16_t *)self = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::SimpleButton::UpdateFrame  (binary VA: 0xcb2e00)
// Original: glf::SimpleButton::UpdateFrame
// ----------------------------------------------------------------------------
int glf::SimpleButton::UpdateFrame(glf::SimpleButton::Self *self, bool a2)
{
  int result;
  int v3;

  result = glf::SimpleButton::IsDown(self);
  if ( (uint8_t)result != a2 )
  {
    if ( a2 )
    {
      v3 = *(uint16_t *)self;
      LOWORD(v3) = v3 | 0x8000;
      result = v3 + 1;
      *(uint16_t *)self = result;
    }
    else
    {
      *(uint16_t *)self &= ~0x8000u;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::SimpleButton::WasDown  (binary VA: 0xcb2e60)
// Original: glf::SimpleButton::WasDown
// ----------------------------------------------------------------------------
bool glf::SimpleButton::WasDown(glf::SimpleButton::Self *self)
{
  return (*((uint8_t *)self + 1) & 0x40) != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::SimpleButton::GetUpCount  (binary VA: 0xcb2e70)
// Original: glf::SimpleButton::GetUpCount
// ----------------------------------------------------------------------------
int glf::SimpleButton::GetUpCount(glf::SimpleButton::Self *self)
{
  int DownCount;
  int v2;

  DownCount = glf::SimpleButton::GetDownCount(self);
  v2 = DownCount - (uint8_t)glf::SimpleButton::IsDown(self);
  return v2 + glf::SimpleButton::WasDown(self);
}

// ----------------------------------------------------------------------------
// Function: glf::SimpleButton::WasReleased  (binary VA: 0xcb2ed0)
// Original: glf::SimpleButton::WasReleased
// ----------------------------------------------------------------------------
bool glf::SimpleButton::WasReleased(glf::SimpleButton::Self *self)
{
  return glf::SimpleButton::GetUpCount(self) != 0 && glf::SimpleButton::WasDown(self);
}

// ----------------------------------------------------------------------------
// Function: glf::SimpleButton::WasUp  (binary VA: 0xcb2f30)
// Original: glf::SimpleButton::WasUp
// ----------------------------------------------------------------------------
int glf::SimpleButton::WasUp(glf::SimpleButton::Self *self)
{
  int v1;

  LOBYTE(v1) = glf::SimpleButton::WasDown(self);
  return v1 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glf::SimpleButton::WasPressed  (binary VA: 0xcb2f60)
// Original: glf::SimpleButton::WasPressed
// ----------------------------------------------------------------------------
int glf::SimpleButton::WasPressed(glf::SimpleButton::Self *self)
{
  if ( glf::SimpleButton::GetDownCount(self) != 0 )
    return glf::SimpleButton::WasUp(self);
  else
    return 0;
}


