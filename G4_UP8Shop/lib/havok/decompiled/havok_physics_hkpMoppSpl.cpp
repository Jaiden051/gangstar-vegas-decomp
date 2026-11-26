#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppSpl.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppSplitter::hkpMoppSplitParams::Construct  (binary VA: 0x1b04cf0)
// Original: hkpMoppSplitter::hkpMoppSplitParams::hkpMoppSplitParams
// ----------------------------------------------------------------------------
int hkpMoppSplitter::hkpMoppSplitParams::Construct(int a1, int a2)
{
  int result;

  result = a1;
  *(g4_int128_t *)(a1 + 4) = xmmword_1C7CF20;
  *(uint32_t *)a1 = 1036831949;
  *(uint8_t *)(a1 + 20) = 1;
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      *(uint32_t *)a1 = 1028443341;
      *(uint32_t *)(a1 + 8) = 30;
    }
  }
  else
  {
    *(uint32_t *)a1 = 1045220557;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppSplitter::Destroy  (binary VA: 0x1b0dfe0)
// Original: hkpMoppSplitter::~hkpMoppSplitter
// ----------------------------------------------------------------------------
void hkpMoppSplitter::Destroy(hkpMoppSplitter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppSplitter::Destroy_ea1b0e0c0  (binary VA: 0x1b0e0c0)
// Original: hkpMoppSplitter::~hkpMoppSplitter
// ----------------------------------------------------------------------------
void hkpMoppSplitter::Destroy_ea1b0e0c0(hkpMoppSplitter::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}


