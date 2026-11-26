// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bdc744):
//   F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorProperty.cpp
// Referenced by 3 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"
// Referencing Function: 0x13cc5d0 .. 0x13cc6e8 (280 bytes)
// Symbol:               _ZN7grapher13ActorPropertyC1Ev
// Demangled:            grapher::ActorProperty::ActorProperty(void)
// ============================================================================
// Alternative name is '_ZN7grapher13ActorPropertyC2Ev'
struct grapher::ActorProperty::Self *grapher::ActorProperty::Construct(grapher::ActorProperty::Self *self)
{
  struct grapher::ActorProperty::Self *result;
  int v2;
  void *obj;

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 16) = 0;
  *((uint32_t *)self + 5) = 0;
  if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)&dword_20, (int)(uintptr_t)(obj)) != 0 )
  {
    v2 = gll_operator_new(0xCu, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorProperty.cpp"), 19);
    *(uint8_t *)v2 = 0;
    *(uint8_t *)(v2 + 1) = 0;
    *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(&unk_213B814);
    *(uint32_t *)(v2 + 8) = 3;
    *((uint32_t *)self + 5) = v2;
  }
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  result = (struct grapher::ActorProperty::Self *)(dword_20D5BE0 & 5);
  if ( result != (struct grapher::ActorProperty::Self *)((char *)&loc_4 + 1) )
  {
    result = *((struct grapher::ActorProperty::Self **)self + 5);
    if ( result != nullptr )
      *(uint8_t *)result = 0;
  }
  return result;
}
// [Deduplicated EA block removed; canonical definition kept in dedicated module]



// ============================================================================
// Referencing Function: 0x13cca80 .. 0x13ccb19 (153 bytes)
// Symbol:               _ZN7grapher13ActorPropertyC2ERKS0_
// Demangled:            grapher::ActorProperty::ActorProperty(grapher::ActorProperty const&)
// ============================================================================
