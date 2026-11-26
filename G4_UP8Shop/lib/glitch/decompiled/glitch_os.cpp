#include "Core/Utils/DecompTypes.h"
#include "glitch_os.h"

// ----------------------------------------------------------------------------
// Function: glitch::os::Timer::getMicroSeconds  (binary VA: 0xd1eed0)
// Original: glitch::os::Timer::getMicroSeconds
// ----------------------------------------------------------------------------
int64_t glitch::os::Timer::getMicroSeconds()
{
  return glf::GetMicroseconds();
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Timer::getRealTime  (binary VA: 0xd1eef0)
// Original: glitch::os::Timer::getRealTime
// ----------------------------------------------------------------------------
uint64_t glitch::os::Timer::getRealTime()
{
  return glitch::os::Timer::getMicroSeconds() / 0x3E8uLL;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Printer::log  (binary VA: 0xd1ef30)
// Original: glitch::os::Printer::log
// ----------------------------------------------------------------------------
int glitch::os::Printer::log(int a1, int a2)
{
  int result;

  result = (int)glitch::os::Printer::Logger;
  if ( glitch::os::Printer::Logger != 0 )
    return (*(int (**)(uint32_t *, int, int))(*(uintptr_t *)(glitch::os::Printer::Logger) + 20))(
             (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger),
             a1,
             a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Printer::log  (binary VA: 0xd1f780)
// Original: glitch::os::Printer::log
// ----------------------------------------------------------------------------
uint32_t * glitch::os::Printer::log(int a1, int a2, int a3)
{
  uint32_t *result;

  result = (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger);
  if ( glitch::os::Printer::Logger != 0 )
    return (uint32_t *)(*(int (**)(uint32_t *, int, int, int))(*(uintptr_t *)(glitch::os::Printer::Logger) + 24))(
                       (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger),
                       a1,
                       a2,
                       a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Printer::log_ead1f7d0  (binary VA: 0xd1f7d0)
// Original: glitch::os::Printer::log
// ----------------------------------------------------------------------------
uint32_t * glitch::os::Printer::log_ead1f7d0(int a1, int a2)
{
  uint32_t *result;

  result = (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger);
  if ( glitch::os::Printer::Logger != 0 )
    return (uint32_t *)(*(int (**)(uint32_t *, int, int))(*(uintptr_t *)(glitch::os::Printer::Logger) + 32))(
                       (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger),
                       a1,
                       a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Printer::logf  (binary VA: 0xd1f810)
// Original: glitch::os::Printer::logf
// ----------------------------------------------------------------------------
uint32_t * glitch::os::Printer::logf(int a1, int a2, ...)
{
  uint32_t *result;
  va_list va;

  va_start(va, a2);
  result = (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger);
  if ( glitch::os::Printer::Logger != 0 )
    return (uint32_t *)(*(int (**)(uint32_t *, int, int, char *))(*(uintptr_t *)(glitch::os::Printer::Logger) + 36))(
                       (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger),
                       a1,
                       a2,
                       g4_va_cast<char *>(va));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Printer::logf  (binary VA: 0xd23010)
// Original: glitch::os::Printer::logf
// ----------------------------------------------------------------------------
uint32_t * glitch::os::Printer::logf(glitch::os::Printer::Self *self, const char *a2, ...)
{
  uint32_t *result;

  result = (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger);
  if ( glitch::os::Printer::Logger != 0 )
    return (uint32_t *)(*(int (**)(uint32_t *, int, glitch::os::Printer::Self *, const char **))(*(uintptr_t *)(glitch::os::Printer::Logger)
                                                                                             + 36))(
                       (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger),
                       1,
                       self,
                       &a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Printer::vlogf  (binary VA: 0xd23060)
// Original: glitch::os::Printer::vlogf
// ----------------------------------------------------------------------------
uint32_t * glitch::os::Printer::vlogf(int a1, int a2, int a3)
{
  uint32_t *result;

  result = (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger);
  if ( glitch::os::Printer::Logger != 0 )
    return (uint32_t *)(*(int (**)(uint32_t *, int, int, int))(*(uintptr_t *)(glitch::os::Printer::Logger) + 36))(
                       (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger),
                       a1,
                       a2,
                       a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Printer::vlogf  (binary VA: 0xd230b0)
// Original: glitch::os::Printer::vlogf
// ----------------------------------------------------------------------------
uint32_t * glitch::os::Printer::vlogf(glitch::os::Printer::Self *self, const char *a2)
{
  uint32_t *result;

  result = (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger);
  if ( glitch::os::Printer::Logger != 0 )
    return (uint32_t *)(*(int (**)(uint32_t *, int, glitch::os::Printer::Self *, const char *))(*(uintptr_t *)(glitch::os::Printer::Logger)
                                                                                            + 36))(
                       (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger),
                       1,
                       self,
                       a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Printer::setLogLevel  (binary VA: 0xd23100)
// Original: glitch::os::Printer::setLogLevel
// ----------------------------------------------------------------------------
uint32_t * glitch::os::Printer::setLogLevel(int a1)
{
  uint32_t *result;

  result = (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger);
  if ( glitch::os::Printer::Logger != 0 )
    return (uint32_t *)(*(int (**)(uint32_t *, int))(*(uintptr_t *)(glitch::os::Printer::Logger) + 16))(
                       (uint32_t *)(uintptr_t)(glitch::os::Printer::Logger),
                       a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Printer::getLogLevel  (binary VA: 0xd23140)
// Original: glitch::os::Printer::getLogLevel
// ----------------------------------------------------------------------------
int glitch::os::Printer::getLogLevel()
{
  int result;

  result = 4;
  if ( glitch::os::Printer::Logger != 0 )
    return (*(int (**)(uint32_t *))(*(uintptr_t *)(glitch::os::Printer::Logger) + 12))((uint32_t *)(uintptr_t)(glitch::os::Printer::Logger));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Randomizer::rand  (binary VA: 0xd23170)
// Original: glitch::os::Randomizer::rand
// ----------------------------------------------------------------------------
int glitch::os::Randomizer::rand()
{
  int result;

  glitch::os::Randomizer::Seed[0] = 3791 * (glitch::os::Randomizer::Seed[0] / -52774)
                                  + 40692 * (glitch::os::Randomizer::Seed[0] % 52774);
  result = glitch::os::Randomizer::Seed[0];
  if ( glitch::os::Randomizer::Seed[0] < 0 )
  {
    result = glitch::os::Randomizer::Seed[0] + 2147483399;
    glitch::os::Randomizer::Seed[0] += 2147483399;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Randomizer::reset  (binary VA: 0xd231e0)
// Original: glitch::os::Randomizer::reset
// ----------------------------------------------------------------------------
int * glitch::os::Randomizer::reset()
{
  glitch::os::Randomizer::Seed[0] = 252645135;
  return (int *)(glitch::os::Randomizer::Seed);
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Timer::tick  (binary VA: 0xd23200)
// Original: glitch::os::Timer::tick
// ----------------------------------------------------------------------------
uint32_t * glitch::os::Timer::tick()
{
  uint64_t RealTime; // rax
  unsigned int v1;

  RealTime = glitch::os::Timer::getRealTime();
  v1 = RealTime;
  ++glitch::os::Timer::TickCount[0];
  glitch::os::Timer::StaticTime = __PAIR64__(HIDWORD(RealTime), v1);
  return (uint32_t *)(glitch::os::Timer::TickCount);
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Timer::setTime  (binary VA: 0xd23250)
// Original: glitch::os::Timer::setTime
// ----------------------------------------------------------------------------
uint64_t glitch::os::Timer::setTime(glitch::os::Timer::Self *self)
{
  uint64_t result; // rax

  result = glitch::os::Timer::getRealTime();
  glitch::os::Timer::StaticTime = result;
  glitch::os::Timer::LastVirtualTime = (uintptr_t)(uintptr_t)(self);
  glitch::os::Timer::StartRealTime = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Timer::getSpeed  (binary VA: 0xd232a0)
// Original: glitch::os::Timer::getSpeed
// ----------------------------------------------------------------------------
long double glitch::os::Timer::getSpeed()
{
  return *(float *)glitch::os::Timer::VirtualTimerSpeed;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Timer::isStopped  (binary VA: 0xd232c0)
// Original: glitch::os::Timer::isStopped
// ----------------------------------------------------------------------------
bool glitch::os::Timer::isStopped()
{
  return glitch::os::Timer::VirtualTimerStopCounter[0] != 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Timer::startTimer  (binary VA: 0xd232e0)
// Original: glitch::os::Timer::startTimer
// ----------------------------------------------------------------------------
char glitch::os::Timer::startTimer()
{
  char result;

  ++glitch::os::Timer::VirtualTimerStopCounter[0];
  result = glitch::os::Timer::isStopped();
  if ( result == 0 )
    return glitch::os::Timer::setTime(glitch::os::Timer::LastVirtualTime);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Timer::getTime  (binary VA: 0xd23320)
// Original: glitch::os::Timer::getTime
// ----------------------------------------------------------------------------
int glitch::os::Timer::getTime()
{
  long double v0; // fst7
  __m128 v1;
  __m128 v2;
  float v4;

  if ( glitch::os::Timer::isStopped() )
    return glitch::os::Timer::LastVirtualTime;
  v0 = (long double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(
                      _mm_cvtsi32_si128((int)glitch::os::Timer::StaticTime - (int)glitch::os::Timer::StartRealTime),
                      _mm_cvtsi32_si128((uint64_t)(glitch::os::Timer::StaticTime
                                                         - glitch::os::Timer::StartRealTime) >> 32)), 0);
  if ( (((uint64_t)(glitch::os::Timer::StaticTime - glitch::os::Timer::StartRealTime) >> 32) & 0x80000000) != 0LL )
    v0 = v0 + 1.8446744e19f;
  v4 = v0;
g4_m128_raw(v1) = 0;
g4_m128_lane<float>(v1, 0) = v4 * *(float *)glitch::os::Timer::VirtualTimerSpeed;
  v2 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v1);
  return glitch::os::Timer::LastVirtualTime
       + _mm_cvtsi128_si32(
           _mm_xor_si128(
             _mm_cvttps_epi32(_mm_sub_ps(v1, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v2))),
             _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v2)), 0x1Fu)));
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Timer::setSpeed  (binary VA: 0xd233e0)
// Original: glitch::os::Timer::setSpeed
// ----------------------------------------------------------------------------
uint32_t * glitch::os::Timer::setSpeed(glitch::os::Timer::Self *self)
{
  glitch::os::Timer::Self *Time;
  uint32_t *result;

  Time = (glitch::os::Timer::Self *)glitch::os::Timer::getTime();
  glitch::os::Timer::setTime(Time);
  result = (uint32_t *)(uintptr_t)((uintptr_t)glitch::os::Timer::VirtualTimerSpeed);
  glitch::os::Timer::VirtualTimerSpeed[0] = (uintptr_t)(uintptr_t)(self);
  if ( *(float *)&self < 0.0 )
    glitch::os::Timer::VirtualTimerSpeed[0] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Timer::stopTimer  (binary VA: 0xd23430)
// Original: glitch::os::Timer::stopTimer
// ----------------------------------------------------------------------------
uint32_t * glitch::os::Timer::stopTimer()
{
  if ( !glitch::os::Timer::isStopped() )
    glitch::os::Timer::LastVirtualTime = glitch::os::Timer::getTime();
  --glitch::os::Timer::VirtualTimerStopCounter[0];
  return (uint32_t *)(uintptr_t)(glitch::os::Timer::VirtualTimerStopCounter[0]);
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Timer::initVirtualTimer  (binary VA: 0xd23470)
// Original: glitch::os::Timer::initVirtualTimer
// ----------------------------------------------------------------------------
uint64_t glitch::os::Timer::initVirtualTimer()
{
  uint64_t result; // rax

  result = glitch::os::Timer::getRealTime();
  glitch::os::Timer::StaticTime = result;
  glitch::os::Timer::StartRealTime = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::os::Timer::initTimer  (binary VA: 0xd234b0)
// Original: glitch::os::Timer::initTimer
// ----------------------------------------------------------------------------
uint64_t glitch::os::Timer::initTimer()
{
  return glitch::os::Timer::initVirtualTimer();
}

// ----------------------------------------------------------------------------
// Function: glitch::os::byteswap  (binary VA: 0xefd980)
// Original: glitch::os::byteswap
// ----------------------------------------------------------------------------
glitch::os::Self * glitch::os::byteswap(glitch::os::Self *self, const glitch::core::quaternion::Self *a2)
{
  unsigned int v3;
  uint32_t v4;
  uint32_t v5;

  v3 = *((uint32_t *)a2 + 3);
  v4 = __builtin_bswap32(*((uint32_t *)a2 + 1));
  *((uint32_t *)self + 2) = __builtin_bswap32(*((uint32_t *)a2 + 2));
  *((uint32_t *)self + 1) = v4;
  v5 = __builtin_bswap32(*(uint32_t *)a2);
  *((uint32_t *)self + 3) = __builtin_bswap32(v3);
  *(uint32_t *)self = v5;
  return self;
}


