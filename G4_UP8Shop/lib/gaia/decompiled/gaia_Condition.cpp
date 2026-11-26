#include "Core/Utils/DecompTypes.h"
#include "gaia_Condition.h"

// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_Condition.cpp
// Library: gaia | Module: gaia_Condition
// Binary Address Span: 0x14cf110 .. 0x14cf220 (6 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x14cf110 (size: 75 bytes)
// Symbol:    _ZN4gaia9ConditionC2Ev
// Demangled: gaia::Condition::Condition(void)
// ============================================================================
// Alternative name is '_ZN4gaia9ConditionC1Ev'
struct gaia::Condition::Self *gaia::Condition::Condition(pthread_mutex_t *self)
{
  pthread_mutex_init(self, nullptr);
  return (struct gaia::Condition::Self *)pthread_cond_init((pthread_cond_t *)(&((int32_t *)(self))[0] + 1), nullptr);
}
// ----------------------------------------------------------------------------
// Function: gaia::Condition::Acquire  (binary VA: 0x14cf160)
// Original: gaia::Condition::Acquire
// ----------------------------------------------------------------------------
int gaia::Condition::Acquire(pthread_mutex_t *self)
{
  return pthread_mutex_lock(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Condition::Wait  (binary VA: 0x14cf190)
// Original: gaia::Condition::Wait
// ----------------------------------------------------------------------------
int gaia::Condition::Wait(pthread_mutex_t *self)
{
  return pthread_cond_wait((pthread_cond_t *)(&((int32_t *)(self))[0] + 1), self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Condition::Set  (binary VA: 0x14cf1c0)
// Original: gaia::Condition::Set
// ----------------------------------------------------------------------------
int gaia::Condition::Set(gaia::Condition::Self *self)
{
  return pthread_cond_signal((pthread_cond_t *)((char *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: gaia::Condition::Release  (binary VA: 0x14cf1f0)
// Original: gaia::Condition::Release
// ----------------------------------------------------------------------------
int gaia::Condition::Release(pthread_mutex_t *self)
{
  return pthread_mutex_unlock(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Condition::Destroy  (binary VA: 0x14cf220)
// Original: gaia::Condition::~Condition
// ----------------------------------------------------------------------------
void gaia::Condition::Destroy(pthread_mutex_t *self)
{
  pthread_mutex_destroy(self);
  pthread_cond_destroy((pthread_cond_t *)(&((int32_t *)(self))[0] + 1));
}


