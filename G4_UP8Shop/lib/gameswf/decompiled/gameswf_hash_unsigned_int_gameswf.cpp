#include "Core/Utils/DecompTypes.h"
#include "gameswf_hash_unsigned_int_gameswf.h"

// ----------------------------------------------------------------------------
// Function: gameswf::hash_unsigned_int_gameswf_gly_965dea::set_raw_capacity  (binary VA: 0x109aee0)
// Original: gameswf::hash<unsigned int,gameswf::glyph_entity *,gameswf::fixed_size_hash<unsigned int>>::set_raw_capacity
// ----------------------------------------------------------------------------
void gameswf::hash_unsigned_int_gameswf_gly_965dea::set_raw_capacity(gameswf::Self **self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  gameswf::Self *v17;
  int v18;
  int v19;
  int i;
  uint32_t *v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int *_g4_t_v25;
  typedef int _g4_t_j;
  typedef int *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t _g4_t_v29[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_j)) > _g4_s4 ? (20u + sizeof(_g4_t_j)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v27)) > _g4_s5 ? (24u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v28)) > _g4_s6 ? (28u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v29)) > _g4_s7 ? (32u + sizeof(_g4_t_v29)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);

  if ( a2 <= 0 )
  {
    v17 = *self;
    if ( *self != nullptr )
    {
      v18 = *((uint32_t *)v17 + 1);
      if ( v18 >= 0 )
      {
        v19 = 8;
        for ( i = 0; i <= v18; ++i )
        {
          v21 = (uint32_t *)((char *)v17 + v19);
          if ( *(uint32_t *)((char *)v17 + v19) != -2 )
          {
            *v21 = -2;
            v21[1] = 0;
            v17 = *self;
          }
          v19 += 16;
        }
      }
      gameswf::free_internal(v17);
      *self = nullptr;
    }
  }
  else
  {
    v2 = 1;
    v3 = 4;
    if ( a2 != 1 )
    {
      do
        v2 *= 2;
      while ( a2 > v2 );
      v3 = 4;
      if ( v2 >= 4 )
        v3 = v2;
    }
    if ( *self == nullptr || *((uint32_t *)*self + 1) + 1 != v3 )
    {
      v29[0] = gameswf::malloc_internal(16 * v3 + 8);
      *(uint32_t *)v29[0] = 0;
      v4 = v29[0];
      v5 = 8;
      *(uint32_t *)(v29[0] + 4) = v3 - 1;
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        *(uint32_t *)(v4 + v5) = -2;
        v5 += 16;
        if ( v3 <= v6 )
          break;
        v4 = v29[0];
      }
      v7 = *self;
      if ( *self != nullptr )
      {
        v22 = *((uint32_t *)v7 + 1);
        if ( v22 >= 0 )
        {
          for ( j = 0; j <= v22; ++j )
          {
            v8 = (int)(uintptr_t)(v7) + 16 * j + 8;
            if ( *(uint32_t *)v8 != -2 )
            {
              v9 = (uint32_t *)v29[0];
              if ( v29[0] != 0 )
              {
                v10 = *(uint32_t *)v29[0];
                if ( 3 * *(uint32_t *)v29[0] > 2 * *(uint32_t *)(v29[0] + 4) + 2 )
                {
                  gameswf::hash_unsigned_int_gameswf_gly_965dea::set_raw_capacity(
                    (gameswf::Self **)((gameswf::hash<unsigned int, gameswf::glyph_entity *, gameswf::fixed_size_hash<unsigned int>> *)v29),
                    2 * *(uint32_t *)(v29[0] + 4) + 2);
                  v9 = (uint32_t *)v29[0];
                  v10 = *(uint32_t *)v29[0];
                }
              }
              else
              {
                gameswf::hash_unsigned_int_gameswf_gly_965dea::set_raw_capacity(
                  (gameswf::Self **)((gameswf::hash<unsigned int, gameswf::glyph_entity *, gameswf::fixed_size_hash<unsigned int>> *)v29),
                  8);
                v9 = (uint32_t *)v29[0];
                v10 = *(uint32_t *)v29[0];
              }
              *v9 = v10 + 1;
              v24 = ((((((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                      + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                      + *(uint8_t *)(v8 + 10)) << 6)
                    + 0xFFFF
                    * (((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                     + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                     + *(uint8_t *)(v8 + 10))
                    + *(uint8_t *)(v8 + 9)) << 6)
                  + *(uint8_t *)(v8 + 8)
                  + 0xFFFF
                  * (((((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                     + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                     + *(uint8_t *)(v8 + 10)) << 6)
                   + 0xFFFF
                   * (((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                    + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                    + *(uint8_t *)(v8 + 10))
                   + *(uint8_t *)(v8 + 9));
              v11 = *(uint32_t *)(v29[0] + 4);
              v28 = v11 & v24;
              v27 = (int *)(v29[0] + 16 * (v11 & v24) + 8);
              v23 = *v27;
              v12 = v11 & v24;
              if ( *v27 == -2 )
              {
                *v27 = -1;
                v27[1] = v24;
                v27[2] = *(uint32_t *)(v8 + 8);
                v27[3] = *(uint32_t *)(v8 + 12);
              }
              else
              {
                while ( 1 )
                {
                  v12 = v11 & (v12 + 1);
                  if ( *(uint32_t *)(v29[0] + 16 * v12 + 8) == -2 )
                    break;
                  if ( v28 == v12 )
                  {
                    v25 = (int *)(v29[0] + 16 * v12 + 8);
                    v12 = v11 & v24;
                    goto LABEL_22;
                  }
                }
                v25 = (int *)(v29[0] + 16 * v12 + 8);
LABEL_22:
                v13 = *(uint32_t *)(v29[0] + 16 * (v11 & v24) + 12) & v11;
                if ( v28 == v13 )
                {
                  *v25 = v23;
                  v25[1] = v27[1];
                  v25[2] = v27[2];
                  v25[3] = v27[3];
                  v27[2] = *(uint32_t *)(v8 + 8);
                  v16 = *(uint32_t *)(v8 + 12);
                  *v27 = v12;
                  v27[3] = v16;
                  v27[1] = v24;
                }
                else
                {
                  v14 = v13;
                  do
                  {
                    v15 = (int *)(v29[0] + 16 * v14 + 8);
                    v14 = *v15;
                  }
                  while ( v28 != *v15 );
                  *v25 = v23;
                  v25[1] = v27[1];
                  v25[2] = v27[2];
                  v25[3] = v27[3];
                  *v15 = v12;
                  v27[2] = *(uint32_t *)(v8 + 8);
                  v27[3] = *(uint32_t *)(v8 + 12);
                  v27[1] = v24;
                  *v27 = -1;
                }
              }
              *(uint32_t *)v8 = -2;
              *(uint32_t *)(v8 + 4) = 0;
              v7 = *self;
            }
          }
        }
        gameswf::free_internal(v7);
      }
      *self = (gameswf::Self *)v29[0];
    }
  }
}


