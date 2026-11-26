#include "Core/Utils/DecompTypes.h"
#include "glf_TimeTracker.h"

// ----------------------------------------------------------------------------
// Function: glf::TimeTracker::Start  (binary VA: 0xc8b4c0)
// Original: glf::TimeTracker::Start
// ----------------------------------------------------------------------------
int glf::TimeTracker::Start(glf::TimeTracker::Self *self)
{
  int64_t Milliseconds; // rax

  Milliseconds = glf::GetMilliseconds();
  *((uint64_t *)self + 1) = Milliseconds;
  return Milliseconds;
}

// ----------------------------------------------------------------------------
// Function: glf::TimeTracker::Stop  (binary VA: 0xc8b800)
// Original: glf::TimeTracker::Stop
// ----------------------------------------------------------------------------
int glf::TimeTracker::Stop(glf::TimeTracker::Self *self)
{
  int result;
  typedef uint32_t *_g4_t_v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v3)) > _g4_s1 ? (4u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v4)) > _g4_s2 ? (8u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v5)) > _g4_s3 ? (12u + sizeof(_g4_t_v5)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  result = *((uint32_t *)self + 2) | *((uint32_t *)self + 3);
  if ( *((uint64_t *)self + 1) != 0 )
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v2 = &dword_213B814;
    g4_std::string::assign_str(&v2, self);
    v3 = glf::GetMilliseconds() - *((uint32_t *)self + 2);
    v5 = 0;
    if ( LOBYTE(g4_guard_cb0a2aaab6[0]) == 0
      && _cxa_guard_acquire(g4_guard_cb0a2aaab6) != 0 )
    {
      glf::LoadingReport::Construct((glf::LoadingReport::Self *)&g4_fnstatic_9a8b85c263);
      _cxa_guard_release(g4_guard_cb0a2aaab6);
      __cxa_atexit(
        (void (*)(void *))glf::LoadingReport::Destroy,
        &g4_fnstatic_9a8b85c263,
        &unk_20D1280);
    }
    glf::LoadingReport::AddEntry((int)(uintptr_t)(&g4_fnstatic_9a8b85c263), (int)(uintptr_t)(&v2));
    result = (int)(uintptr_t)(v2);
    *((uint32_t *)self + 2) = 0;
    *((uint32_t *)self + 3) = 0;
    if ( (uint32_t *)(result - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(result - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy((void *)(result - 12))), (int)0);
    }
  }
  return result;
}


