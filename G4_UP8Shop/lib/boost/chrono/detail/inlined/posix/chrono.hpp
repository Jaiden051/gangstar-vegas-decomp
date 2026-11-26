// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd6a4c):
//   ../../../../../lib/boost/chrono/detail/inlined/posix/chrono.hpp
// Referenced by 3 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x123a580 .. 0x123a630 (176 bytes)
// Symbol:               _ZN6chatv28Requests8IRequest10CanExecuteEv
// Demangled:            chatv2::Requests::IRequest::CanExecute(void)
// ============================================================================
/*
bool chatv2::Requests::IRequest::CanExecute(chatv2::Requests::IRequest *this)
{
  struct timespec tp;

  if ( clock_gettime(1, &tp) != 0 )
    __assert2(
      "../../../../../lib/boost/chrono/detail/inlined/posix/chrono.hpp",
      79,
      "static boost::chrono::steady_clock::time_point boost::chrono::steady_clock::now()",
      "0 && \"Boost::Chrono - Internal Error\"");
  return *(uint64_t *)((char *)this + 4) < tp.tv_nsec + 1000000000LL * tp.tv_sec;
}

*/

// ============================================================================
// Referencing Function: 0x123a660 .. 0x123a74b (235 bytes)
// Symbol:               _ZN6chatv28Requests8IRequest20SetNextExecutionTimeEv
// Demangled:            chatv2::Requests::IRequest::SetNextExecutionTime(void)
// ============================================================================
/*
int chatv2::Requests::IRequest::SetNextExecutionTime(chatv2::Requests::IRequest *this)
{
  unsigned int v1;
  int64_t v2; // rax
  unsigned int v4;
  struct timespec tp;
  int v6;

  v1 = *((uint32_t *)this + 3) + 1;
  *((uint32_t *)this + 3) = v1;
  if ( v1 > 3 )
    v1 = 3;
  v4 = chatv2::Utils::RetryConfiguration::BACKOFFS[v1 - 1];
  if ( clock_gettime(1, &tp) != 0 )
    __assert2(
      "../../../../../lib/boost/chrono/detail/inlined/posix/chrono.hpp",
      79,
      "static boost::chrono::steady_clock::time_point boost::chrono::steady_clock::now()",
      "0 && \"Boost::Chrono - Internal Error\"");
  LODWORD(v2) = (char *)this + 4;
  if ( &v6 != (int *)((char *)this + 4) )
  {
    v2 = 1000000000LL * v4 + tp.tv_nsec + 1000000000LL * tp.tv_sec;
    *(uint64_t *)((char *)this + 4) = v2;
  }
  return v2;
}

*/

// ============================================================================
// Referencing Function: 0x1269850 .. 0x1269a17 (455 bytes)
// Symbol:               _ZN6chatv24Core12ArionChannel27CalculateIfMessageCanBeSentEv
// Demangled:            chatv2::Core::ArionChannel::CalculateIfMessageCanBeSent(void)
// ============================================================================
