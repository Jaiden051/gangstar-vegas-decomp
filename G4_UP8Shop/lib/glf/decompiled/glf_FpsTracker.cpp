#include "Core/Utils/DecompTypes.h"
#include "glf_FpsTracker.h"

// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_FpsTracker.cpp
// Library: glf | Module: glf_FpsTracker
// Binary Address Span: 0xc8b940 .. 0xc8bc60 (8 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xc8b940 (size: 125 bytes)
// Symbol:    _ZN3glf10FpsTrackerC2Ev
// Demangled: glf::FpsTracker::FpsTracker(void)
// ============================================================================
// Alternative name is '_ZN3glf10FpsTrackerC1Ev'
struct glf::FpsTracker::Self *glf::FpsTracker::FpsTracker(glf::FpsTracker::Self *self)
{
  unsigned int v1;
  char *v2;
  struct glf::FpsTracker::Self *result;
  char *v4;

  v1 = 80;
  v2 = (char *)self + 8;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 22) = 0;
  if ( (((unsigned int)(uintptr_t)(self) + 8) & 1) != 0 )
  {
    v2 = (char *)self + 9;
    *((uint8_t *)self + 8) = 0;
    LOBYTE(v1) = 79;
    if ( (((unsigned int)(uintptr_t)(self) + 9) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v2 = 0;
  v1 -= 2;
  v2 += 2;
LABEL_3:
  result = nullptr;
  memset(v2, 0, 4 * (v1 >> 2));
  v4 = &v2[4 * (v1 >> 2)];
  if ( (v1 & 2) != 0 )
  {
    *(uint16_t *)v4 = 0;
    v4 += 2;
  }
  if ( (v1 & 1) != 0 )
    *v4 = 0;
  return result;
}
// ----------------------------------------------------------------------------
// Function: glf::FpsTracker::Capacity  (binary VA: 0xc8b9c0)
// Original: glf::FpsTracker::Capacity
// ----------------------------------------------------------------------------
int glf::FpsTracker::Capacity()
{
  return 10;
}

// ----------------------------------------------------------------------------
// Function: glf::FpsTracker::Size  (binary VA: 0xc8b9d0)
// Original: glf::FpsTracker::Size
// ----------------------------------------------------------------------------
int glf::FpsTracker::Size(glf::FpsTracker::Self *self)
{
  unsigned int v1;

  v1 = *((uint32_t *)self + 22);
  if ( v1 >= glf::FpsTracker::Capacity() )
    return glf::FpsTracker::Capacity();
  else
    return *((uint32_t *)self + 22);
}

// ----------------------------------------------------------------------------
// Function: glf::FpsTracker::Append  (binary VA: 0xc8ba30)
// Original: glf::FpsTracker::Append
// ----------------------------------------------------------------------------
int glf::FpsTracker::Append(glf::FpsTracker::Self *self, int64_t a2)
{
  unsigned int v2;
  unsigned int v3;

  v2 = *((uint32_t *)self + 22);
  v3 = v2 % glf::FpsTracker::Capacity();
  *((uint64_t *)self + v3 + 1) = a2;
  ++*((uint32_t *)self + 22);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: glf::FpsTracker::Average  (binary VA: 0xc8baa0)
// Original: glf::FpsTracker::Average
// ----------------------------------------------------------------------------
int glf::FpsTracker::Average(glf::FpsTracker::Self *self)
{
  int v1;
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  __m128i v6;
  unsigned int v7;
  unsigned int v10;
  int64_t v11; // 0:esi.4,4:edi.4

  v1 = 0;
  v2 = glf::FpsTracker::Size(self);
  v10 = v2;
  if ( v2 != 0 )
  {
    v3 = v2 >> 1;
    v4 = 2 * (v2 >> 1);
    if ( v10 > 9 && v4 != 0 )
    {
      v5 = 0;
g4_m128_raw(v6) = 0;
      do
      {
        v7 = v5++;
        v6 = _mm_add_epi64(v6, *(__m128i *)((char *)self + 16 * v7 + 8));
      }
      while ( v3 > v5 );
      v11 =g4_m128_lane<uint64_t>(_mm_add_epi64(v6, _mm_srli_si128(v6, 8)), 0);
      if ( v10 == v4 )
        return v11 / v10;
    }
    else
    {
      v4 = 0;
      v11 = 0;
    }
    do
      v11 += *((uint64_t *)self + ++v4);
    while ( v10 > v4 );
    return v11 / v10;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glf::FpsTracker::Fps  (binary VA: 0xc8bb80)
// Original: glf::FpsTracker::Fps
// ----------------------------------------------------------------------------
int64_t glf::FpsTracker::Fps(glf::FpsTracker::Self *self)
{
  int v1;
  unsigned int v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  int64_t result; // rax

  v1 = glf::FpsTracker::Average(self);
  v3 = v2;
  v4 = v1;
  v5 = v2;
  result = 0;
  if ( (v4 | v5) != 0 )
    return 1000 / __SPAIR64__(v3, v4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FpsTracker::GetInstance  (binary VA: 0xc8bbf0)
// Original: glf::FpsTracker::GetInstance
// ----------------------------------------------------------------------------
void * glf::FpsTracker::GetInstance()
{
  if ( byte_20DF290 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DF290) != 0 )
  {
    glf::FpsTracker::FpsTracker((glf::FpsTracker::Self *)&unk_20DF2A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20DF290);
  }
  return &unk_20DF2A0;
}

// ----------------------------------------------------------------------------
// Function: glf::FpsTracker::Update  (binary VA: 0xc8bc60)
// Original: glf::FpsTracker::Update
// ----------------------------------------------------------------------------
int glf::FpsTracker::Update(glf::FpsTracker::Self *self)
{
  int64_t Milliseconds;
  int result;

  Milliseconds = glf::GetMilliseconds();
  result = *(uint32_t *)self;
  if ( *(uint64_t *)self != 0 )
    result = glf::FpsTracker::Append(self, Milliseconds - *(uint64_t *)self);
  *(uint64_t *)self = Milliseconds;
  return result;
}


