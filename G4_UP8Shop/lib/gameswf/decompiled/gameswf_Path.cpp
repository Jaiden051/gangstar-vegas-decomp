#include "Core/Utils/DecompTypes.h"
#include "gameswf_Path.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Path::reset  (binary VA: 0x10daa70)
// Original: gameswf::Path::reset
// ----------------------------------------------------------------------------
gameswf::Path::Self * gameswf::Path::reset(gameswf::Path::Self *self, float a2, float a3, int a4, int a5, int a6)
{
  uint32_t *v6;
  int v7;
  int v8;

  v6 = (uint32_t *)((char *)self + 20);
  *((float *)self + 3) = a2;
  *((float *)self + 4) = a3;
  *(uint32_t *)self = a4;
  v7 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 1) = a5;
  *((uint32_t *)self + 2) = a6;
  if ( v7 < 0 )
  {
    v8 = 16 * v7;
    do
    {
      if ( *v6 + v8 != 0 )
        gameswf::Edge::Construct((gameswf::Edge::Self *)(*v6 + v8));
      v8 += 16;
      ++v7;
    }
    while ( v7 != 0 );
  }
  *((uint32_t *)self + 6) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Path::Construct  (binary VA: 0x10daaf0)
// Original: gameswf::Path::Path
// ----------------------------------------------------------------------------
gameswf::Path::Self * gameswf::Path::Construct(gameswf::Path::Self *self, float a2, float a3, int a4, int a5, int a6)
{
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  return gameswf::Path::reset(self, a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Path::Construct  (binary VA: 0x10dab60)
// Original: gameswf::Path::Path
// ----------------------------------------------------------------------------
gameswf::Path::Self * gameswf::Path::Construct(gameswf::Path::Self *self)
{
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint8_t *)self + 36) = 0;
  return gameswf::Path::reset(self, 0.0, 0.0, 0, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Path::isEmpty  (binary VA: 0x10dabd0)
// Original: gameswf::Path::isEmpty
// ----------------------------------------------------------------------------
bool gameswf::Path::isEmpty(gameswf::Path::Self *self)
{
  return *((uint32_t *)self + 6) == 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Path::pointTest  (binary VA: 0x10dabe0)
// Original: gameswf::Path::pointTest
// ----------------------------------------------------------------------------
int gameswf::Path::pointTest(gameswf::Path::Self *self, float a2, float a3)
{
  int result;
  float v4; // xmm0_4
  int v5;
  float v6; // xmm4_4
  int v7;
  float *v8;
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm7_4
  float v16; // xmm7_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  int v19;
  int v20;
  int v21;
  float v22;
  float v23;
  float v24;
  int v25;
  float v26;
  int v27;

  v25 = *((uint32_t *)self + 6);
  result = 0;
  v26 = a2 * 20.0;
  v4 = 20.0 * a3;
  if ( v25 > 0 && *(int *)self >= 0 )
  {
    v5 = 0;
    v24 = *((float *)self + 3);
    v27 = 0;
    v6 = *((float *)self + 4);
    while ( 1 )
    {
      v8 = (float *)(*((uint32_t *)self + 5) + 16 * v5);
      v22 = v8[3];
      v23 = v8[2];
      if ( gameswf::Edge::isStraight((gameswf::Edge::Self *)v8) )
        break;
      v9 = *v8;
      v10 = v8[1];
      if ( v4 > v6 && v4 > v22 && v4 > v10 )
        goto LABEL_9;
      if ( v6 > v4 && v22 > v4 && v10 > v4 )
        goto LABEL_9;
      if ( v26 > v24 && v26 > v23 && v26 > v9 )
        goto LABEL_9;
      v11 = v10 + v10;
      v12 = (float)(v10 - v6) + (float)(v10 - v6);
      v13 = (float)(v22 - v11) + v6;
      v14 = v6 - v4;
      v15 = (float)(v12 * v12) - (float)((float)(v13 * v14) * 4.0);
      if ( v15 < 0.0 )
        goto LABEL_9;
      v16 = fsqrt(v15);
      if ( v12 < 0.0 )
        v17 = (float)(v12 - v16) * -0.5;
      else
        v17 = (float)(v12 + v16) * -0.5;
      if ( v13 != 0.0 && (float)(v17 / v13) >= 0.0 && (float)(v17 / v13) < 1.0 )
      {
        v21 = v27 + 1;
        if ( (float)((float)((float)((float)((float)(v9 - v24) + (float)(v9 - v24))
                                   + (float)((float)((float)(v23 - (float)(v9 + v9)) + v24) * (float)(v17 / v13)))
                           * (float)(v17 / v13))
                   + v24) <= v26 )
          v21 = v27;
        v27 = v21;
      }
      if ( v17 == 0.0 )
        goto LABEL_9;
      v18 = v14 / v17;
      if ( v18 < 0.0 || v18 >= 1.0 )
        goto LABEL_9;
      v19 = v27 + 1;
      if ( (float)((float)((float)((float)((float)(v9 - v24) + (float)(v9 - v24))
                                 + (float)((float)((float)(v23 - (float)(v9 + v9)) + v24) * v18))
                         * v18)
                 + v24) <= v26 )
        v19 = v27;
      ++v5;
      v27 = v19;
      if ( v5 == v25 )
        return v27 & 1;
LABEL_10:
      v6 = v22;
      v24 = v23;
    }
    if ( v4 <= v6 || v22 < v4 )
    {
      if ( v6 > v4 && v4 >= v22 )
      {
        v20 = v27 + 1;
        if ( (float)(v26 * (float)(v22 - v6)) <= (float)((float)((float)(v23 - v24) * (float)(v4 - v6))
                                                       + (float)((float)(v22 - v6) * v24)) )
          v20 = v27;
        v27 = v20;
      }
    }
    else
    {
      v7 = v27 + 1;
      if ( (float)((float)((float)(v4 - v6) * (float)(v23 - v24)) + (float)(v24 * (float)(v22 - v6))) <= (float)((float)(v22 - v6) * v26) )
        v7 = v27;
      v27 = v7;
    }
LABEL_9:
    if ( ++v5 == v25 )
      return v27 & 1;
    goto LABEL_10;
  }
  return result;
}


