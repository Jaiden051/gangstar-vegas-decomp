#include "glitch_CDeviceResizeEvent.h"

// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_CDeviceResizeEvent.cpp
// Library: glitch | Module: glitch_CDeviceResizeEvent
// Binary Address Span: 0xcd4a30 .. 0xcd4a30 (1 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xcd4a30 (size: 33 bytes)
// Symbol:    _ZN6glitch18CDeviceResizeEventC2Ev
// Demangled: glitch::CDeviceResizeEvent::CDeviceResizeEvent(void)
// ============================================================================
// Alternative name is '_ZN6glitch18CDeviceResizeEventC1Ev'
struct glitch::CDeviceResizeEvent::Self *glitch::CDeviceResizeEvent::Construct(
        glitch::CDeviceResizeEvent::Self *self)
{
  int16_t v2;

  v2 = glitch::CDeviceResizeEvent::EVENT;
  *((uint16_t *)self + 1) = 0;
  *(uint16_t *)self = v2;
  return self;
}

