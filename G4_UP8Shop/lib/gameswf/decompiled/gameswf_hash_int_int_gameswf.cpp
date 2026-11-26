#include "Core/Utils/DecompTypes.h"
#include "gameswf_hash_int_int_gameswf.h"

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::clear  (binary VA: 0x117bc80)
// Original: gameswf::hash<int,int,gameswf::fixed_size_hash<int>>::clear
// ----------------------------------------------------------------------------
void gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::clear(gameswf::Self **self)
{
  gameswf::Self *v1;
  int v2;
  int v3;
  int i;
  uint32_t *v5;

  v1 = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)v1 + 1);
    if ( v2 >= 0 )
    {
      v3 = 8;
      for ( i = 0; i <= v2; ++i )
      {
        v5 = (uint32_t *)((char *)v1 + v3);
        if ( *(uint32_t *)((char *)v1 + v3) != -2 )
        {
          *v5 = -2;
          v5[1] = 0;
          v1 = *self;
        }
        v3 += 16;
      }
    }
    gameswf::free_internal(v1);
    *self = nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::find_index  (binary VA: 0x117be00)
// Original: gameswf::hash<int,int,gameswf::fixed_size_hash<int>>::find_index
// ----------------------------------------------------------------------------
int gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::find_index(gameswf::hash<int, int, gameswf::fixed_size_hash<int>> *self, const int *a2)
{
  int v2;
  int v3;
  int result;
  int *v5;
  int i;
  int v7;

  v2 = *(uint32_t *)self;
  if ( *(uint32_t *)self == 0 )
    return -1;
  v3 = 65599
     * (((*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)) << 6)
      + *((uint8_t *)a2 + 1)
      + 0xFFFF * (*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)))
     + *(uint8_t *)a2;
  v7 = *(uint32_t *)(v2 + 4);
  result = v3 & v7;
  v5 = (int *)(v2 + 16 * (v3 & v7) + 8);
  if ( *v5 == -2 || (*(uint32_t *)(v2 + 16 * (v3 & v7) + 12) & v7) != result )
    return -1;
  for ( i = *(uint32_t *)(v2 + 16 * (v3 & v7) + 12); v3 != i || v5[2] != *a2; i = *(uint32_t *)(v2 + 16 * result + 12) )
  {
    result = *v5;
    if ( *v5 == -1 )
      break;
    v5 = (int *)(v2 + 16 * result + 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::set_raw_capacity  (binary VA: 0x117bec0)
// Original: gameswf::hash<int,int,gameswf::fixed_size_hash<int>>::set_raw_capacity
// ----------------------------------------------------------------------------
void gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::set_raw_capacity(gameswf::Self **self, int a2)
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
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int _g4_t_i;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_i)) > _g4_s4 ? (20u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v24)) > _g4_s7 ? (32u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);

  if ( a2 <= 0 )
  {
    gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::clear(self);
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
      v24[0] = gameswf::malloc_internal(16 * v3 + 8);
      *(uint32_t *)v24[0] = 0;
      v4 = v24[0];
      v5 = 8;
      *(uint32_t *)(v24[0] + 4) = v3 - 1;
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        *(uint32_t *)(v4 + v5) = -2;
        v5 += 16;
        if ( v3 <= v6 )
          break;
        v4 = v24[0];
      }
      v7 = *self;
      if ( *self != nullptr )
      {
        v17 = *((uint32_t *)v7 + 1);
        if ( v17 >= 0 )
        {
          for ( i = 0; i <= v17; ++i )
          {
            v8 = (int)(uintptr_t)(v7) + 16 * i + 8;
            if ( *(uint32_t *)v8 != -2 )
            {
              v9 = (uint32_t *)v24[0];
              if ( v24[0] != 0 )
              {
                v10 = *(uint32_t *)v24[0];
                if ( 3 * *(uint32_t *)v24[0] > 2 * *(uint32_t *)(v24[0] + 4) + 2 )
                {
                  gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::set_raw_capacity(
                    (gameswf::hash<int, int, gameswf::fixed_size_hash<int>> *)v24,
                    2 * *(uint32_t *)(v24[0] + 4) + 2);
                  v9 = (uint32_t *)v24[0];
                  v10 = *(uint32_t *)v24[0];
                }
              }
              else
              {
                gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::set_raw_capacity(
                  (gameswf::hash<int, int, gameswf::fixed_size_hash<int>> *)v24,
                  8);
                v9 = (uint32_t *)v24[0];
                v10 = *(uint32_t *)v24[0];
              }
              *v9 = v10 + 1;
              v19 = ((((((*(uint8_t *)(v8 + 11) + 352988219) << 6)
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
              v11 = *(uint32_t *)(v24[0] + 4);
              v23 = v11 & v19;
              v22 = (int *)(v24[0] + 16 * (v11 & v19) + 8);
              v18 = *v22;
              v12 = v11 & v19;
              if ( *v22 == -2 )
              {
                *v22 = -1;
                v22[1] = v19;
                v22[2] = *(uint32_t *)(v8 + 8);
                v22[3] = *(uint32_t *)(v8 + 12);
              }
              else
              {
                while ( 1 )
                {
                  v12 = v11 & (v12 + 1);
                  if ( *(uint32_t *)(v24[0] + 16 * v12 + 8) == -2 )
                    break;
                  if ( v23 == v12 )
                  {
                    v20 = (int *)(v24[0] + 16 * v12 + 8);
                    v12 = v11 & v19;
                    goto LABEL_22;
                  }
                }
                v20 = (int *)(v24[0] + 16 * v12 + 8);
LABEL_22:
                v13 = *(uint32_t *)(v24[0] + 16 * (v11 & v19) + 12) & v11;
                if ( v23 == v13 )
                {
                  *v20 = v18;
                  v20[1] = v22[1];
                  v20[2] = v22[2];
                  v20[3] = v22[3];
                  v22[2] = *(uint32_t *)(v8 + 8);
                  v16 = *(uint32_t *)(v8 + 12);
                  *v22 = v12;
                  v22[3] = v16;
                  v22[1] = v19;
                }
                else
                {
                  v14 = v13;
                  do
                  {
                    v15 = (int *)(v24[0] + 16 * v14 + 8);
                    v14 = *v15;
                  }
                  while ( v23 != *v15 );
                  *v20 = v18;
                  v20[1] = v22[1];
                  v20[2] = v22[2];
                  v20[3] = v22[3];
                  *v15 = v12;
                  v22[2] = *(uint32_t *)(v8 + 8);
                  v22[3] = *(uint32_t *)(v8 + 12);
                  v22[1] = v19;
                  *v22 = -1;
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
      *self = (gameswf::Self *)v24[0];
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::add  (binary VA: 0x117c210)
// Original: gameswf::hash<int,int,gameswf::fixed_size_hash<int>>::add
// ----------------------------------------------------------------------------
int gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::add(gameswf::Self **self, const int *a2, int *a3)
{
  gameswf::Self *v3;
  int v4;
  gameswf::Self *v5;
  int v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int *v11;
  int v12;
  int result;
  int v14;
  int v15;
  int v16;
  int v17;

  v3 = *self;
  if ( *self != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::set_raw_capacity(self, 2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *self;
      v4 = *(uint32_t *)*self;
    }
  }
  else
  {
    gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::set_raw_capacity(self, 8);
    v3 = *self;
    v4 = *(uint32_t *)*self;
  }
  *(uint32_t *)v3 = v4 + 1;
  v5 = *self;
  v16 = 65599
      * (((*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)) << 6)
       + *((uint8_t *)a2 + 1)
       + 0xFFFF * (*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)))
      + *(uint8_t *)a2;
  v6 = *((uint32_t *)*self + 1);
  v15 = v6 & v16;
  v7 = (int *)((char *)*self + 16 * (v6 & v16) + 8);
  v8 = v6 & v16;
  v17 = *v7;
  if ( *v7 == -2 )
  {
    *v7 = -1;
    v7[1] = v16;
    v7[2] = *a2;
    result = *a3;
    v7[3] = *a3;
  }
  else
  {
    do
    {
      v8 = v6 & (v8 + 1);
      v9 = (int *)((char *)v5 + 16 * v8 + 8);
    }
    while ( *v9 != -2 && v8 != (v6 & v16) );
    v10 = *((uint32_t *)v5 + 4 * (v6 & v16) + 3) & v6;
    if ( v10 == v15 )
    {
      *v9 = v17;
      *((uint32_t *)v5 + 4 * v8 + 3) = v7[1];
      *((uint32_t *)v5 + 4 * v8 + 4) = v7[2];
      *((uint32_t *)v5 + 4 * v8 + 5) = v7[3];
      v7[2] = *a2;
      v14 = *a3;
      *v7 = v8;
      v7[3] = v14;
      v7[1] = v16;
      return v16;
    }
    else
    {
      do
      {
        v11 = (int *)((char *)v5 + 16 * v10 + 8);
        v10 = *v11;
      }
      while ( *v11 != v15 );
      *v9 = v17;
      *((uint32_t *)v5 + 4 * v8 + 3) = v7[1];
      *((uint32_t *)v5 + 4 * v8 + 4) = v7[2];
      *((uint32_t *)v5 + 4 * v8 + 5) = v7[3];
      *v11 = v8;
      v7[2] = *a2;
      v12 = *a3;
      *v7 = -1;
      v7[3] = v12;
      v7[1] = v16;
      return v16;
    }
  }
  return result;
}


