#include "Core/Utils/DecompTypes.h"
#include "glitch_CTimer.h"

// ----------------------------------------------------------------------------
// Function: glitch::CTimer::Destroy  (binary VA: 0xcef210)
// Original: glitch::CTimer::~CTimer
// ----------------------------------------------------------------------------
void glitch::CTimer::Destroy(glitch::CTimer::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::CTimer::Destroy_eacef270  (binary VA: 0xcef270)
// Original: glitch::CTimer::~CTimer
// ----------------------------------------------------------------------------
void glitch::CTimer::Destroy_eacef270(glitch::CTimer::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::CTimer::tick  (binary VA: 0xcef480)
// Original: glitch::CTimer::tick
// ----------------------------------------------------------------------------
int glitch::CTimer::tick()
{
  glitch::os::Timer::Self *v1;

  return (int)(uintptr_t)(glitch::os::Timer::tick(v1));
}

// ----------------------------------------------------------------------------
// Function: glitch::CTimer::isStopped  (binary VA: 0xcef4a0)
// Original: glitch::CTimer::isStopped
// ----------------------------------------------------------------------------
int glitch::CTimer::isStopped()
{
  glitch::os::Timer::Self *v1;

  return glitch::os::Timer::isStopped(v1);
}

// ----------------------------------------------------------------------------
// Function: glitch::CTimer::getSpeed  (binary VA: 0xcef4c0)
// Original: glitch::CTimer::getSpeed
// ----------------------------------------------------------------------------
int glitch::CTimer::getSpeed()
{
  glitch::os::Timer::Self *v1;

  return glitch::os::Timer::getSpeed(v1);
}

// ----------------------------------------------------------------------------
// Function: glitch::CTimer::setSpeed  (binary VA: 0xcef4e0)
// Original: glitch::CTimer::setSpeed
// ----------------------------------------------------------------------------
int glitch::CTimer::setSpeed(glitch::CTimer::Self *self, glitch::os::Timer::Self *a2)
{
  float v3;

  return (int)(uintptr_t)(glitch::os::Timer::setSpeed(a2, v3));
}

// ----------------------------------------------------------------------------
// Function: glitch::CTimer::start  (binary VA: 0xcef510)
// Original: glitch::CTimer::start
// ----------------------------------------------------------------------------
int glitch::CTimer::start()
{
  glitch::os::Timer::Self *v1;

  return glitch::os::Timer::startTimer(v1);
}

// ----------------------------------------------------------------------------
// Function: glitch::CTimer::stop  (binary VA: 0xcef530)
// Original: glitch::CTimer::stop
// ----------------------------------------------------------------------------
int glitch::CTimer::stop()
{
  glitch::os::Timer::Self *v1;

  return (int)(uintptr_t)(glitch::os::Timer::stopTimer(v1));
}

// ----------------------------------------------------------------------------
// Function: glitch::CTimer::setTime  (binary VA: 0xcef550)
// Original: glitch::CTimer::setTime
// ----------------------------------------------------------------------------
int glitch::CTimer::setTime(glitch::CTimer::Self *self, glitch::os::Timer::Self *a2)
{
  unsigned int v3;

  return glitch::os::Timer::setTime(a2, v3);
}

// ----------------------------------------------------------------------------
// Function: glitch::CTimer::getTime  (binary VA: 0xcef580)
// Original: glitch::CTimer::getTime
// ----------------------------------------------------------------------------
int glitch::CTimer::getTime()
{
  glitch::os::Timer::Self *v1;

  return glitch::os::Timer::getTime(v1);
}

// ----------------------------------------------------------------------------
// Function: glitch::CTimer::getRealTime  (binary VA: 0xcef5a0)
// Original: glitch::CTimer::getRealTime
// ----------------------------------------------------------------------------
int glitch::CTimer::getRealTime()
{
  glitch::os::Timer::Self *v1;

  return glitch::os::Timer::getRealTime(v1);
}


