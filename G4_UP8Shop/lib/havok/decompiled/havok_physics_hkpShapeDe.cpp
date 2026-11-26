#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpShapeDe.h"

// ----------------------------------------------------------------------------
// Function: hkpShapeDepthUtil::getShapeDepth  (binary VA: 0x1aea360)
// Original: hkpShapeDepthUtil::getShapeDepth
// ----------------------------------------------------------------------------
int hkpShapeDepthUtil::getShapeDepth(hkpShapeDepthUtil::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  hkpShapeDepthUtil::Self *v5;
  int ShapeDepth;
  int v7;
  int result;
  const hkpShape::Self *v9;
  int v11;

  v1 = G4_VCALL<int>(self, 64);
  v2 = v1;
  if ( v1 == 0 )
    return hkpShapeDepthUtil::s_defaultMinimumChildDepth[0];
  v3 = G4_VCALL<int>(v1, 12);
  if ( v3 == -1 )
  {
    v7 = 1;
  }
  else
  {
    v4 = 0;
    do
    {
      v9 = (const hkpShape::Self *)v3;
      v11 = v3;
      v5 = (hkpShapeDepthUtil::Self *)G4_VCALL<int>(v2, 24);
      ShapeDepth = hkpShapeDepthUtil::getShapeDepth(v5, v9);
      if ( (uint8_t)v4 < (uint8_t)ShapeDepth )
        v4 = ShapeDepth;
      v3 = G4_VCALL<int>(v2, 16, v11);
    }
    while ( v3 != -1 );
    v7 = v4 + 1;
  }
  result = hkpShapeDepthUtil::s_defaultMinimumChildDepth[0];
  if ( (uint8_t)v7 >= hkpShapeDepthUtil::s_defaultMinimumChildDepth[0] )
    return v7;
  return result;
}


