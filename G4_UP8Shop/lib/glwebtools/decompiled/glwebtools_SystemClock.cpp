#include "Core/Utils/DecompTypes.h"
#include "glwebtools_SystemClock.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::SystemClock::GetMilliseconds  (binary VA: 0x13e8e30)
// Original: glwebtools::SystemClock::GetMilliseconds
// ----------------------------------------------------------------------------
uint64_t glwebtools::SystemClock::GetMilliseconds()
{
  int64_t Ticks; // rax
  long double v1; // fst7
  int64_t TicksPerSecond; // rax
  long double v4; // fst7

  if ( byte_21197B8 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_21197B8) != 0 )
  {
    TicksPerSecond = glf::GetTicksPerSecond();
    v4 = (long double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(TicksPerSecond), _mm_cvtsi32_si128(HIDWORD(TicksPerSecond))), 0);
    if ( TicksPerSecond < 0 )
      v4 = v4 + 1.8446744e19f;
    *(double *)&qword_21197C0 = v4;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_21197B8);
  }
  Ticks = glf::GetTicks();
  v1 = (long double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(Ticks), _mm_cvtsi32_si128(HIDWORD(Ticks))), 0);
  if ( Ticks < 0 )
    v1 = v1 + 1.8446744e19f;
  return (uint64_t)((double)v1 / *(double *)&qword_21197C0 * 1000.0);
}


