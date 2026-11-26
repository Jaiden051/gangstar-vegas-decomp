#include "glitch_CLogEvent.h"

// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_CLogEvent.cpp
// Library: glitch | Module: glitch_CLogEvent
// Binary Address Span: 0xcd6630 .. 0xcd6630 (1 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xcd6630 (size: 90 bytes)
// Symbol:    _ZN6glitch9CLogEventC2Ev
// Demangled: glitch::CLogEvent::CLogEvent(void)
// ============================================================================
// Alternative name is '_ZN6glitch9CLogEventC1Ev'
struct glitch::CLogEvent::Self *glitch::CLogEvent::Construct(glitch::CLogEvent::Self *self)
{
  glf::EventManager::Self *EventMgr;
  struct glitch::CLogEvent::Self *result;

  EventMgr = (glf::EventManager::Self *)glf::GetEventMgr();
  result = (struct glitch::CLogEvent::Self *)glf::EventManager::RegisterUserEventType(
                                         EventMgr,
                                         glitch::CLogEvent::EVENT,
                                         "glitch::CLogEvent",
                                         0xCu);
  *(uint16_t *)self = (uint16_t)(uintptr_t)(result);
  *((uint16_t *)self + 1) = 0;
  return result;
}

