#include "Core/Utils/DecompTypes.h"
#include "gameswf_timer.h"

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getSysTime  (binary VA: 0x1174f90)
// Original: gameswf::timer::getSysTime
// ----------------------------------------------------------------------------
int64_t gameswf::timer::getSysTime()
{
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  time(&timer);
  return timer;
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getDate  (binary VA: 0x1174fc0)
// Original: gameswf::timer::getDate
// ----------------------------------------------------------------------------
int gameswf::timer::getDate(gameswf::timer::Self *self)
{
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  timer = (time_t)self;
  return localtime(&timer)->tm_mday;
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getDay  (binary VA: 0x1174ff0)
// Original: gameswf::timer::getDay
// ----------------------------------------------------------------------------
int gameswf::timer::getDay(gameswf::timer::Self *self)
{
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  timer = (time_t)self;
  return localtime(&timer)->tm_wday;
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getHours  (binary VA: 0x1175020)
// Original: gameswf::timer::getHours
// ----------------------------------------------------------------------------
int gameswf::timer::getHours(gameswf::timer::Self *self)
{
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  timer = (time_t)self;
  return localtime(&timer)->tm_hour;
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getFullYear  (binary VA: 0x1175050)
// Original: gameswf::timer::getFullYear
// ----------------------------------------------------------------------------
int gameswf::timer::getFullYear(gameswf::timer::Self *self)
{
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  timer = (time_t)self;
  return localtime(&timer)->tm_year + 1900;
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getMilli  (binary VA: 0x1175090)
// Original: gameswf::timer::getMilli
// ----------------------------------------------------------------------------
int gameswf::timer::getMilli()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getMonth  (binary VA: 0x11750a0)
// Original: gameswf::timer::getMonth
// ----------------------------------------------------------------------------
int gameswf::timer::getMonth(gameswf::timer::Self *self)
{
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  timer = (time_t)self;
  return localtime(&timer)->tm_mon;
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getMinutes  (binary VA: 0x11750d0)
// Original: gameswf::timer::getMinutes
// ----------------------------------------------------------------------------
int gameswf::timer::getMinutes(gameswf::timer::Self *self)
{
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  timer = (time_t)self;
  return localtime(&timer)->tm_min;
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getSeconds  (binary VA: 0x1175100)
// Original: gameswf::timer::getSeconds
// ----------------------------------------------------------------------------
int gameswf::timer::getSeconds(gameswf::timer::Self *self)
{
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  timer = (time_t)self;
  return localtime(&timer)->tm_sec;
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getYear  (binary VA: 0x1175130)
// Original: gameswf::timer::getYear
// ----------------------------------------------------------------------------
int gameswf::timer::getYear(gameswf::timer::Self *self)
{
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  timer = (time_t)self;
  return localtime(&timer)->tm_year;
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getTime  (binary VA: 0x1175160)
// Original: gameswf::timer::getTime
// ----------------------------------------------------------------------------
uint64_t gameswf::timer::getTime(gameswf::timer::Self *self, uint64_t a2)
{
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  timer = (time_t)self;
  localtime(&timer);
  return 1000 * __PAIR64__(a2, (unsigned int)(uintptr_t)(self));
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getMilliseconds  (binary VA: 0x11751c0)
// Original: gameswf::timer::getMilliseconds
// ----------------------------------------------------------------------------
int64_t gameswf::timer::getMilliseconds()
{
  return glf::GetMilliseconds();
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getTicks  (binary VA: 0x11751e0)
// Original: gameswf::timer::getTicks
// ----------------------------------------------------------------------------
int64_t gameswf::timer::getTicks()
{
  return gameswf::timer::getMilliseconds();
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::ticksToSeconds  (binary VA: 0x1175200)
// Original: gameswf::timer::ticksToSeconds
// ----------------------------------------------------------------------------
long double gameswf::timer::ticksToSeconds(gameswf::timer::Self *self, uint64_t a2)
{
  long double v2; // fst7
  float v4;

  v2 = (long double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)(uintptr_t)(self)), _mm_cvtsi32_si128(a2)), 0);
  if ( (a2 & 0x80000000) != 0LL )
    v2 = v2 + 1.8446744e19f;
  v4 = v2;
  return (float)(v4 * 0.001f);
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::ticksToSeconds  (binary VA: 0x1175260)
// Original: gameswf::timer::ticksToSeconds
// ----------------------------------------------------------------------------
long double gameswf::timer::ticksToSeconds()
{
  int64_t Ticks; // rax
  long double v1; // fst7
  float v3;

  Ticks = gameswf::timer::getTicks();
  v1 = (long double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(Ticks), _mm_cvtsi32_si128(HIDWORD(Ticks))), 0);
  if ( Ticks < 0 )
    v1 = v1 + 1.8446744e19f;
  v3 = v1;
  return (float)(v3 * 0.001f);
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::sleep  (binary VA: 0x11752c0)
// Original: gameswf::timer::sleep
// ----------------------------------------------------------------------------
int gameswf::timer::sleep(gameswf::timer::Self *self)
{
  return ((glf::Thread::Sleep(self)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::getProfileTicks  (binary VA: 0x11752f0)
// Original: gameswf::timer::getProfileTicks
// ----------------------------------------------------------------------------
int64_t gameswf::timer::getProfileTicks()
{
  return gameswf::timer::getTicks();
}

// ----------------------------------------------------------------------------
// Function: gameswf::timer::profileTicksToSeconds  (binary VA: 0x1175310)
// Original: gameswf::timer::profileTicksToSeconds
// ----------------------------------------------------------------------------
void gameswf::timer::profileTicksToSeconds(gameswf::timer::Self *self, uint64_t a2)
{
  uint64_t v2;

  LODWORD(v2) = a2;
  gameswf::timer::ticksToSeconds(self, v2);
}


