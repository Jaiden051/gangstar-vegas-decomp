// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bdbf8c):
//   ../../../../../lib/glitch/include/boost/thread/pthread/condition_variable.hpp
// Referenced by 5 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x134e910 .. 0x134e9f8 (232 bytes)
// Symbol:               _ZN5boost18condition_variable10notify_oneEv
// Demangled:            boost::condition_variable::notify_one(void)
// ============================================================================
/*
int boost::condition_variable::notify_one(pthread_mutex_t *this)
{
  int result;

  if ( pthread_mutex_lock(this) != 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
      26,
      "boost::pthread::pthread_mutex_scoped_lock::pthread_mutex_scoped_lock(pthread_mutex_t*)",
      "!pthread_mutex_lock(m)");
    if ( pthread_cond_signal((pthread_cond_t *)(&((int32_t *)(this))[0] + 1)) == 0 )
    {
LABEL_3:
      result = pthread_mutex_unlock(this);
      if ( result == 0 )
        return result;
      return __assert2(
               "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
               30,
               "void boost::pthread::pthread_mutex_scoped_lock::unlock()",
               "!pthread_mutex_unlock(m)");
    }
  }
  else if ( pthread_cond_signal((pthread_cond_t *)(&((int32_t *)(this))[0] + 1)) == 0 )
  {
    goto LABEL_3;
  }
  __assert2(
    "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable.hpp",
    134,
    "void boost::condition_variable::notify_one()",
    "!pthread_cond_signal(&cond)");
  result = pthread_mutex_unlock(this);
  if ( result != 0 )
    return __assert2(
             "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
             30,
             "void boost::pthread::pthread_mutex_scoped_lock::unlock()",
             "!pthread_mutex_unlock(m)");
  return result;
}

*/

// ============================================================================
// Referencing Function: 0x134ec70 .. 0x134eda4 (308 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor12FinishQueingEv
// Demangled:            glotv3::SingletonMutexedProcessor::FinishQueing(void)
// ============================================================================
/*
int glotv3::SingletonMutexedProcessor::FinishQueing(glotv3::SingletonMutexedProcessor *this)
{
  int result;

  *((uint8_t *)this + 13334) = 0;
  *((uint8_t *)this + 13332) = 1;
  if ( this == (glotv3::SingletonMutexedProcessor *)-13236 )
    sub_134E3D0();
  do
    result = pthread_mutex_trylock((pthread_mutex_t *)((char *)this + 13236));
  while ( result == 4 );
  if ( result == 0 )
  {
    if ( pthread_mutex_lock((pthread_mutex_t *)((char *)this + 13244)) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
        26,
        "boost::pthread::pthread_mutex_scoped_lock::pthread_mutex_scoped_lock(pthread_mutex_t*)",
        "!pthread_mutex_lock(m)");
    if ( pthread_cond_signal((pthread_cond_t *)this + 276) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable.hpp",
        134,
        "void boost::condition_variable::notify_one()",
        "!pthread_cond_signal(&cond)");
    if ( pthread_mutex_unlock((pthread_mutex_t *)((char *)this + 13244)) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/pthread_mutex_scoped_lock.hpp",
        30,
        "void boost::pthread::pthread_mutex_scoped_lock::unlock()",
        "!pthread_mutex_unlock(m)");
    return sub_1321760((char *)this + 13236);
  }
  return result;
}

*/

// ============================================================================
// Referencing Function: 0x134edb0 .. 0x134eee4 (308 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor12NotifyQueingEv
// Demangled:            glotv3::SingletonMutexedProcessor::NotifyQueing(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x134eef0 .. 0x134f024 (308 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor13FinishNetworkEv
// Demangled:            glotv3::SingletonMutexedProcessor::FinishNetwork(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x134f030 .. 0x134f164 (308 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor13NotifyNetworkEv
// Demangled:            glotv3::SingletonMutexedProcessor::NotifyNetwork(void)
// ============================================================================
