#include "Core/Utils/DecompTypes.h"
#include "grapher_GraphDebugController.h"

// ----------------------------------------------------------------------------
// Function: grapher::GraphDebugController::Destroy  (binary VA: 0x13d32f0)
// Original: grapher::GraphDebugController::~GraphDebugController
// ----------------------------------------------------------------------------
void grapher::GraphDebugController::Destroy(grapher::GraphDebugController::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094C68);
}

// ----------------------------------------------------------------------------
// Function: grapher::GraphDebugController::Destroy_ea13d3310  (binary VA: 0x13d3310)
// Original: grapher::GraphDebugController::~GraphDebugController
// ----------------------------------------------------------------------------
void grapher::GraphDebugController::Destroy_ea13d3310(grapher::GraphDebugController::Self *self)
{
  grapher::GraphDebugController::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::GraphDebugController::Construct  (binary VA: 0x13d3350)
// Original: grapher::GraphDebugController::GraphDebugController
// ----------------------------------------------------------------------------
grapher::GraphDebugController::Self * grapher::GraphDebugController::Construct(grapher::GraphDebugController::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094C68);
  *((uint8_t *)self + 4) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::GraphDebugController::Break  (binary VA: 0x13d3370)
// Original: grapher::GraphDebugController::Break
// ----------------------------------------------------------------------------
void grapher::GraphDebugController::Break()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: grapher::GraphDebugController::Continue  (binary VA: 0x13d3380)
// Original: grapher::GraphDebugController::Continue
// ----------------------------------------------------------------------------
grapher::GraphDebugController::Self * grapher::GraphDebugController::Continue(grapher::GraphDebugController::Self *self)
{
  grapher::GraphDebugController::Self *result;
  int v2;
  int v3;
  uint8_t *v4;
  char v5;
  int v6;

  result = self;
  if ( *((uint8_t *)self + 4) != 0 )
  {
    *((uint8_t *)self + 4) = 0;
    g4_std_compat::ostream_write(dword_213A780, "Continue.", 9);
    v3 = *(uint32_t *)(dword_213A780[0] - 12);
    v4 = *(uint8_t **)((char *)&dword_213A780[31] + v3);
    if ( v4 == nullptr )
      sub_18FFF30(v2);
    if ( v4[28] != 0 )
    {
      v5 = v4[39];
    }
    else
    {
      sub_18FFC70(*(uint32_t *)((char *)&dword_213A780[31] + v3));
      v5 = G4_VCALL<int>(v4, 24, 10);
    }
    v6 = (int)(uintptr_t)(g4_std::ostream::put(dword_213A780, v5));
    return (grapher::GraphDebugController::Self *)g4_std_compat::ostream_flush(v6);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::GraphDebugController::OnBreak  (binary VA: 0x13d3430)
// Original: grapher::GraphDebugController::OnBreak
// ----------------------------------------------------------------------------
void grapher::GraphDebugController::OnBreak()
{
  ;
}


