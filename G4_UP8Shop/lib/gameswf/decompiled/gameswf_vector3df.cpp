#include "Core/Utils/DecompTypes.h"
#include "gameswf_vector3df.h"

// ----------------------------------------------------------------------------
// Function: gameswf::vector3df::normalize  (binary VA: 0x1069220)
// Original: gameswf::vector3df::normalize
// ----------------------------------------------------------------------------
gameswf::vector3df::Self * gameswf::vector3df::normalize(gameswf::vector3df::Self *self)
{
  gameswf::vector3df::Self *result;
  float v2; // xmm4_4
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm0_4

  result = self;
  v2 = *(float *)self;
  v3 = *((float *)self + 1);
  v4 = *((float *)self + 2);
  v5 = sqrt((float)((float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v4 * v4)));
  if ( v5 > 0.0 )
  {
    *(float *)self = v2 * (float)(1.0 / v5);
    *((float *)self + 1) = v3 * (float)(1.0 / v5);
    *((float *)self + 2) = (float)(1.0 / v5) * v4;
  }
  return result;
}


