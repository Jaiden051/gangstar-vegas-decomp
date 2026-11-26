#include "Core/Utils/DecompTypes.h"
#include "gameswf_hash_unsigned_short_short_gamesw.h"

// ----------------------------------------------------------------------------
// Function: gameswf::hash_unsigned_short_short_gam_63649f::set_raw_capacity  (binary VA: 0x118ad20)
// Original: gameswf::hash<unsigned short,short,gameswf::Font::simple_code_hash<unsigned short>>::set_raw_capacity
// ----------------------------------------------------------------------------
void gameswf::hash_unsigned_short_short_gam_63649f::set_raw_capacity(gameswf::Self **self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::hash<unsigned short, short, gameswf::Font::simple_code_hash<unsigned short>> *v7;
  gameswf::Self *v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  uint32_t *v16;
  int16_t v17;
  gameswf::Self *v18;
  int v19;
  int v20;
  int i;
  uint32_t *v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_j;
  typedef int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef uint32_t _g4_t_v31[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v25)) > _g4_s2 ? (8u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v27)) > _g4_s4 ? (16u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_j)) > _g4_s5 ? (20u + sizeof(_g4_t_j)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v29)) > _g4_s6 ? (24u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v30)) > _g4_s7 ? (28u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v31)) > _g4_s8 ? (32u + sizeof(_g4_t_v31)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);

  if ( a2 <= 0 )
  {
    v18 = *self;
    if ( *self != nullptr )
    {
      v19 = *((uint32_t *)v18 + 1);
      if ( v19 >= 0 )
      {
        v20 = 8;
        for ( i = 0; i <= v19; ++i )
        {
          v22 = (uint32_t *)((char *)v18 + v20);
          if ( *(uint32_t *)((char *)v18 + v20) != -2 )
          {
            *v22 = -2;
            v22[1] = 0;
            v18 = *self;
          }
          v20 += 12;
        }
      }
      gameswf::free_internal(v18);
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
      v31[0] = gameswf::malloc_internal(12 * v3 + 8);
      *(uint32_t *)v31[0] = 0;
      v4 = v31[0];
      v5 = 8;
      *(uint32_t *)(v31[0] + 4) = v3 - 1;
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        *(uint32_t *)(v4 + v5) = -2;
        v5 += 12;
        if ( v3 <= v6 )
          break;
        v4 = v31[0];
      }
      v7 = (gameswf::hash<unsigned short, short, gameswf::Font::simple_code_hash<unsigned short>> *)self;
      v8 = *self;
      if ( *self != nullptr )
      {
        v24 = *((uint32_t *)v8 + 1);
        if ( v24 >= 0 )
        {
          v27 = 8;
          for ( j = 0; j <= v24; ++j )
          {
            v30 = (uint32_t *)((char *)v8 + v27);
            if ( *(uint32_t *)((char *)v8 + v27) != -2 )
            {
              v9 = (uint32_t *)v31[0];
              if ( v31[0] != 0 )
              {
                v10 = *(uint32_t *)v31[0];
                if ( 3 * *(uint32_t *)v31[0] > 2 * *(uint32_t *)(v31[0] + 4) + 2 )
                {
                  gameswf::hash_unsigned_short_short_gam_63649f::set_raw_capacity(
                    (gameswf::Self **)((gameswf::hash<unsigned short, short, gameswf::Font::simple_code_hash<unsigned short>> *)v31),
                    2 * *(uint32_t *)(v31[0] + 4) + 2);
                  v9 = (uint32_t *)v31[0];
                  v10 = *(uint32_t *)v31[0];
                }
              }
              else
              {
                gameswf::hash_unsigned_short_short_gam_63649f::set_raw_capacity(
                  (gameswf::Self **)((gameswf::hash<unsigned short, short, gameswf::Font::simple_code_hash<unsigned short>> *)v31),
                  8);
                v9 = (uint32_t *)v31[0];
                v10 = *(uint32_t *)v31[0];
              }
              *v9 = v10 + 1;
              v11 = *(uint32_t *)(v31[0] + 4);
              v12 = (uint16_t)(v11 & v30[2]);
              v25 = *((uint16_t *)v30 + 4);
              v29 = v31[0] + 12 * v12 + 8;
              v23 = *(uint32_t *)v29;
              v13 = v12;
              if ( *(uint32_t *)v29 == -2 )
              {
                *(uint32_t *)(v31[0] + 12 * v12 + 12) = *((uint16_t *)v30 + 4);
                *(uint32_t *)v29 = -1;
                v16 = v30;
                *(uint16_t *)(v29 + 8) = *((uint16_t *)v30 + 4);
                *(uint16_t *)(v29 + 10) = *((uint16_t *)v30 + 5);
              }
              else
              {
                while ( 1 )
                {
                  v13 = v11 & (v13 + 1);
                  if ( *(uint32_t *)(v31[0] + 12 * v13 + 8) == -2 )
                    break;
                  if ( v12 == v13 )
                  {
                    v26 = v31[0] + 12 * v13 + 8;
                    v13 = (uint16_t)(v11 & v30[2]);
                    goto LABEL_22;
                  }
                }
                v26 = v31[0] + 12 * v13 + 8;
LABEL_22:
                v14 = *(uint32_t *)(v31[0] + 12 * v12 + 12) & v11;
                if ( v12 == v14 )
                {
                  *(uint32_t *)v26 = v23;
                  *(uint32_t *)(v26 + 4) = *(uint32_t *)(v29 + 4);
                  *(uint16_t *)(v26 + 8) = *(uint16_t *)(v29 + 8);
                  *(uint16_t *)(v26 + 10) = *(uint16_t *)(v29 + 10);
                  *(uint16_t *)(v29 + 8) = *((uint16_t *)v30 + 4);
                  v17 = *((uint16_t *)v30 + 5);
                  *(uint32_t *)v29 = v13;
                  *(uint16_t *)(v29 + 10) = v17;
                  *(uint32_t *)(v29 + 4) = v25;
                  v16 = v30;
                }
                else
                {
                  do
                  {
                    v15 = (int *)(v31[0] + 12 * v14 + 8);
                    v14 = *v15;
                  }
                  while ( v12 != *v15 );
                  *(uint32_t *)v26 = v23;
                  *(uint32_t *)(v26 + 4) = *(uint32_t *)(v29 + 4);
                  *(uint16_t *)(v26 + 8) = *(uint16_t *)(v29 + 8);
                  *(uint16_t *)(v26 + 10) = *(uint16_t *)(v29 + 10);
                  v16 = v30;
                  *v15 = v13;
                  *(uint16_t *)(v29 + 8) = *((uint16_t *)v30 + 4);
                  *(uint16_t *)(v29 + 10) = *((uint16_t *)v30 + 5);
                  *(uint32_t *)(v29 + 4) = v25;
                  *(uint32_t *)v29 = -1;
                }
              }
              *v16 = -2;
              v16[1] = 0;
              v8 = *self;
            }
            v27 += 12;
          }
        }
        gameswf::free_internal(v8);
        v7 = (gameswf::hash<unsigned short, short, gameswf::Font::simple_code_hash<unsigned short>> *)self;
      }
      *(uint32_t *)v7 = v31[0];
    }
  }
}


