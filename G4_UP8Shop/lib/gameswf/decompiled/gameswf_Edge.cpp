#include "Core/Utils/DecompTypes.h"
#include "gameswf_Edge.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_Edge.cpp
// Library: gameswf | Module: gameswf_Edge
// Binary Address Span: 0x10da950 .. 0x10daa40 (3 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x10da950 (size: 18 bytes)
// Symbol:    _ZN7gameswf4EdgeC1Ev
// Demangled: gameswf::Edge::Edge(void)
// ============================================================================
// Alternative name is '_ZN7gameswf4EdgeC2Ev'
struct gameswf::Edge::Self *gameswf::Edge::Construct(gameswf::Edge::Self *self)
{
  _mm_storel_ps((double *)self, g4_m128_from<__m128>(0LL));
  _mm_storeh_ps((double *)self + 1, g4_m128_from<__m128>(0LL));
  return self;
}
// ----------------------------------------------------------------------------
// Function: gameswf::Edge::Construct  (binary VA: 0x10da970)
// Original: gameswf::Edge::Edge
// ----------------------------------------------------------------------------
gameswf::Edge::Self * gameswf::Edge::Construct(gameswf::Edge::Self *self, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  gameswf::Edge::Self *result;

  result = self;
  if ( *(float *)&a2 < -3.4028235e38f )
  {
    *(uint32_t *)self = 0;
    if ( *(float *)&a3 >= -3.4028235e38f )
    {
LABEL_3:
      *((uint32_t *)self + 1) = a3 &g4_m128_lane<uint32_t>(_mm_cmple_ss(G4_BITCAST<__m128>(a3), *(__m128 *)&dword_1C7B5E0), 0);
      if ( *(float *)&a4 >= -3.4028235e38f )
        goto LABEL_4;
LABEL_8:
      *((uint32_t *)self + 2) = 0;
      if ( *(float *)&a5 >= -3.4028235e38f )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  else
  {
    *(uint32_t *)self = a2 &g4_m128_lane<uint32_t>(_mm_cmple_ss(G4_BITCAST<__m128>(a2), *(__m128 *)&dword_1C7B5E0), 0);
    if ( *(float *)&a3 >= -3.4028235e38f )
      goto LABEL_3;
  }
  *((uint32_t *)self + 1) = 0;
  if ( *(float *)&a4 < -3.4028235e38f )
    goto LABEL_8;
LABEL_4:
  *((uint32_t *)self + 2) = a4 &g4_m128_lane<uint32_t>(_mm_cmple_ss(G4_BITCAST<__m128>(a4), *(__m128 *)&dword_1C7B5E0), 0);
  if ( *(float *)&a5 >= -3.4028235e38f )
  {
LABEL_5:
    *((uint32_t *)self + 3) = a5 &g4_m128_lane<uint32_t>(_mm_cmple_ss(G4_BITCAST<__m128>(a5), *(__m128 *)&dword_1C7B5E0), 0);
    return result;
  }
LABEL_9:
  *((uint32_t *)self + 3) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Edge::isStraight  (binary VA: 0x10daa40)
// Original: gameswf::Edge::isStraight
// ----------------------------------------------------------------------------
bool gameswf::Edge::isStraight(gameswf::Edge::Self *self)
{
  return *(float *)self == *((float *)self + 2) && *((float *)self + 1) == *((float *)self + 3);
}


