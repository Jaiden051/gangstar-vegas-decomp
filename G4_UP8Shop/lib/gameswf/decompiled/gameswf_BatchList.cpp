#include "Core/Utils/DecompTypes.h"
#include "gameswf_BatchList.h"

// ----------------------------------------------------------------------------
// Function: gameswf::BatchList::Destroy  (binary VA: 0x10c8420)
// Original: gameswf::BatchList::~BatchList
// ----------------------------------------------------------------------------
void gameswf::BatchList::Destroy(gameswf::BatchList::Self *self)
{
  int v1;
  int v2;
  void *v3;
  int v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  int v8;
  uint16_t *v9;
  unsigned int v10;
  uint16_t *v11;
  uint16_t *v12;
  unsigned int v13;
  uint16_t *v14;
  uint16_t *v15;
  unsigned int v16;
  uint16_t *v17;
  int v18;
  int v19;

  v1 = *((uint32_t *)self + 5);
  if ( v1 < 0 )
  {
    v2 = 28 * v1;
    do
    {
      v3 = (void *)(*((uint32_t *)self + 4) + v2);
      if ( v3 != nullptr )
        memset(v3, 0, 0x1Cu);
      v2 += 28;
      ++v1;
    }
    while ( v1 != 0 );
  }
  v4 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 5) = 0;
  if ( v4 == 0 )
  {
    *((uint32_t *)self + 6) = 0;
    v5 = *((gameswf::Self **)self + 4);
    if ( v5 != nullptr )
      gameswf::free_internal(v5);
    *((uint32_t *)self + 4) = 0;
  }
  v6 = *((uint32_t *)self + 1);
  v19 = v6;
  if ( v6 < 0 )
  {
    v7 = 216 * v6;
    do
    {
      v8 = *(uint32_t *)self + v7;
      if ( v8 != 0 )
      {
        memset((void *)v8, 0, 0xD8u);
        v9 = (uint16_t *)(v8 + 48);
        v10 = 24;
        if ( ((v8 + 48) & 1) != 0 )
        {
          *(uint8_t *)(v8 + 48) = 0;
          v9 = (uint16_t *)(v8 + 49);
          LOWORD(v10) = 23;
        }
        if ( ((uint8_t)(uintptr_t)v9 & 2) != 0 )
        {
          *v9 = 0;
          v10 -= 2;
          ++v9;
        }
        memset(v9, 0, 4 * (v10 >> 2));
        v11 = &v9[2 * (v10 >> 2)];
        if ( (v10 & 2) != 0 )
          *v11++ = 0;
        if ( (v10 & 1) != 0 )
          *(uint8_t *)v11 = 0;
        v12 = (uint16_t *)(v8 + 108);
        *(uint32_t *)(v8 + 48) = 1065353216;
        *(uint32_t *)(v8 + 64) = 1065353216;
        *(uint32_t *)(v8 + 72) = 1065353216;
        *(uint32_t *)(v8 + 80) = 1065353216;
        *(uint32_t *)(v8 + 88) = 1065353216;
        *(uint32_t *)(v8 + 96) = 1065353216;
        *(uint32_t *)(v8 + 76) = 0;
        *(uint32_t *)(v8 + 84) = 0;
        *(uint32_t *)(v8 + 92) = 0;
        *(uint32_t *)(v8 + 100) = 0;
        *(uint32_t *)(v8 + 104) = 0;
        v13 = 24;
        if ( ((v8 + 108) & 1) != 0 )
        {
          *(uint8_t *)(v8 + 108) = 0;
          v12 = (uint16_t *)(v8 + 109);
          LOWORD(v13) = 23;
        }
        if ( ((uint8_t)(uintptr_t)v12 & 2) != 0 )
        {
          *v12 = 0;
          v13 -= 2;
          ++v12;
        }
        memset(v12, 0, 4 * (v13 >> 2));
        v14 = &v12[2 * (v13 >> 2)];
        if ( (v13 & 2) != 0 )
          *v14++ = 0;
        if ( (v13 & 1) != 0 )
          *(uint8_t *)v14 = 0;
        v15 = (uint16_t *)(v8 + 148);
        *(uint32_t *)(v8 + 108) = 1065353216;
        *(uint32_t *)(v8 + 124) = 1065353216;
        *(uint8_t *)(v8 + 132) = -1;
        *(uint8_t *)(v8 + 133) = -1;
        *(uint8_t *)(v8 + 134) = -1;
        *(uint8_t *)(v8 + 135) = -1;
        *(uint32_t *)(v8 + 136) = 1065353216;
        *(uint32_t *)(v8 + 140) = 0;
        *(uint32_t *)(v8 + 144) = 0;
        v16 = 64;
        if ( ((v8 + 148) & 1) != 0 )
        {
          *(uint8_t *)(v8 + 148) = 0;
          v15 = (uint16_t *)(v8 + 149);
          LOWORD(v16) = 63;
        }
        if ( ((uint8_t)(uintptr_t)v15 & 2) != 0 )
        {
          *v15 = 0;
          v16 -= 2;
          ++v15;
        }
        memset(v15, 0, 4 * (v16 >> 2));
        v17 = &v15[2 * (v16 >> 2)];
        if ( (v16 & 2) != 0 )
          *v17++ = 0;
        if ( (v16 & 1) != 0 )
          *(uint8_t *)v17 = 0;
        *(uint32_t *)(v8 + 208) = 1065353216;
        *(uint32_t *)(v8 + 188) = 1065353216;
        *(uint32_t *)(v8 + 168) = 1065353216;
        *(uint32_t *)(v8 + 148) = 1065353216;
        *(uint8_t *)(v8 + 212) = 0;
      }
      v7 += 216;
      ++v19;
    }
    while ( v19 != 0 );
  }
  v18 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 1) = 0;
  if ( v18 == 0 )
  {
    *((uint32_t *)self + 2) = 0;
    if ( *(uint32_t *)self != 0 )
      gameswf::free_internal(*(gameswf::Self **)self);
    *(uint32_t *)self = 0;
  }
}


