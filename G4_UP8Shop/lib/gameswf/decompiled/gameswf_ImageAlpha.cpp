#include "Core/Utils/DecompTypes.h"
#include "gameswf_ImageAlpha.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ImageAlpha::Destroy  (binary VA: 0x1173770)
// Original: gameswf::ImageAlpha::~ImageAlpha
// ----------------------------------------------------------------------------
void gameswf::ImageAlpha::Destroy(gameswf::ImageAlpha::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091668);
  gameswf::ImageBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ImageAlpha::Destroy_ea11737a0  (binary VA: 0x11737a0)
// Original: gameswf::ImageAlpha::~ImageAlpha
// ----------------------------------------------------------------------------
void gameswf::ImageAlpha::Destroy_ea11737a0(gameswf::ImageAlpha::Self *self)
{
  gameswf::ImageAlpha::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ImageAlpha::Construct  (binary VA: 0x1173ba0)
// Original: gameswf::ImageAlpha::ImageAlpha
// ----------------------------------------------------------------------------
gameswf::ImageAlpha::Self * gameswf::ImageAlpha::Construct(gameswf::ImageAlpha::Self *self, int a2, int a3)
{
  gameswf::ImageAlpha::Self *result;

  gameswf::ImageBase::Construct(self, 0, a2, a3, a2, 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091668);
  result = (gameswf::ImageAlpha::Self *)opNewArray(*((uint32_t *)self + 4) * *((uint32_t *)self + 5));
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ImageAlpha::set_pixel  (binary VA: 0x1173c80)
// Original: gameswf::ImageAlpha::set_pixel
// ----------------------------------------------------------------------------
int gameswf::ImageAlpha::set_pixel(gameswf::ImageAlpha::Self *self, int a2, gameswf::ImageBase::Self *a3, uint8_t a4)
{
  int result;

  result = gameswf::scanline(self, a3);
  *(uint8_t *)(result + a2) = a4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ImageAlpha::opEq  (binary VA: 0x1173cd0)
// Original: gameswf::ImageAlpha::operator==
// ----------------------------------------------------------------------------
int gameswf::ImageAlpha::opEq(gameswf::ImageAlpha::Self *self, const gameswf::ImageAlpha::Self *a2)
{
  int result;
  size_t n;
  int v4;
  const gameswf::ImageBase::Self *v5;
  const void *s2;
  const void *s1;
  const gameswf::ImageBase::Self *v8;

  result = 0;
  n = *((uint32_t *)self + 3);
  if ( n == *((uint32_t *)a2 + 3) )
  {
    v4 = *((uint32_t *)self + 4);
    v8 = (const gameswf::ImageBase::Self *)v4;
    if ( v4 == *((uint32_t *)a2 + 4) )
    {
      result = 1;
      if ( v4 > 0 )
      {
        v5 = nullptr;
        while ( 1 )
        {
          s2 = (const void *)gameswf::scanline(a2, v5);
          s1 = (const void *)gameswf::scanline(self, v5);
          if ( memcmp(s1, s2, n) != 0 )
            return 0;
          v5 = (const gameswf::ImageBase::Self *)((char *)v5 + 1);
          if ( v5 == v8 )
            break;
          n = *((uint32_t *)self + 3);
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ImageAlpha::compute_hash  (binary VA: 0x1173da0)
// Original: gameswf::ImageAlpha::compute_hash
// ----------------------------------------------------------------------------
int gameswf::ImageAlpha::compute_hash(gameswf::ImageAlpha::Self *self)
{
  gameswf::ImageAlpha::Self *v1;
  int v2;
  const gameswf::ImageBase::Self *i;
  int v4;
  int v5;
  gameswf::ImageAlpha::Self *v7;
  int v8;

  v1 = self;
  v2 = *((uint8_t *)self + 16)
     ^ (33
      * (*((uint8_t *)self + 17)
       ^ (33
        * (*((uint8_t *)self + 18)
         ^ (33
          * (*((uint8_t *)self + 19)
           ^ (33
            * (*((uint8_t *)self + 12)
             ^ (33
              * (*((uint8_t *)self + 13)
               ^ (33 * (*((uint8_t *)self + 14) ^ (33 * (*((uint8_t *)self + 15) ^ 0x2B5A5))))))))))))));
  v8 = *((uint32_t *)self + 4);
  if ( v8 > 0 )
  {
    for ( i = nullptr; i != (const gameswf::ImageBase::Self *)v8; i = (const gameswf::ImageBase::Self *)((char *)i + 1) )
    {
      v4 = *((uint32_t *)v1 + 3);
      v7 = v1;
      v5 = gameswf::scanline(v1, i);
      v1 = v7;
      if ( v4 > 0 )
      {
        do
        {
          --v4;
          v2 = (33 * v2) ^ *(uint8_t *)(v5 + v4);
        }
        while ( v4 != 0 );
      }
    }
  }
  return v2;
}


