#include "gaia_ThreadManagerRequest____std.h"

// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_ThreadManagerRequest____std.cpp
// Library: gaia | Module: gaia_ThreadManagerRequest____std
// Binary Address Span: 0x14f0d20 .. 0x14f0d20 (1 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x14f0d20 (size: 202 bytes)
// Symbol:    _ZSt12__move_mergeIN9__gnu_cxx17__normal_iteratorIPPN4gaia20ThreadManagerRequestESt6vectorIS4_SaIS4_EEEES9_S5_PFbS4_S4_EET1_T_SD_T0_SE_SC_T2_
// Demangled: gaia::ThreadManagerRequest ** std::__move_merge<__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,gaia::ThreadManagerRequest **,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *)>(__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,gaia::ThreadManagerRequest **,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *))
// ============================================================================
static char *g4_compat_def_18(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        uint32_t *a5,
        uint8_t (*a6)(int, int))
{
  int *src;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  int v17;

  src = a1;
  v8 = a3;
  if ( a2 != a1 && a4 != a3 )
  {
    do
    {
      if ( a6(*v8, *src) != 0 )
      {
        v9 = *v8++;
        *a5++ = v9;
        if ( a2 == src )
          break;
      }
      else
      {
        v10 = *src++;
        *a5++ = v10;
        if ( a2 == src )
          break;
      }
    }
    while ( v8 != a4 );
  }
  v11 = 0;
  v12 = a2 - src;
  if ( v12 != 0 )
  {
    v17 = 4 * v12;
    memmove(a5, src, 4 * v12);
    v11 = v17;
  }
  v13 = (char *)a5 + v11;
  v14 = 0;
  v15 = a4 - v8;
  if ( v15 != 0 )
  {
    v14 = 4 * v15;
    memmove(v13, v8, 4 * v15);
  }
  return &v13[v14];
}

