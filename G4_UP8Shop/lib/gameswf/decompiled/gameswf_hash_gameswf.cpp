#include "Core/Utils/DecompTypes.h"
#include "gameswf_hash_gameswf.h"

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringPointer_ga_128477::add  (binary VA: 0x106e280)
// Original: gameswf::hash<gameswf::StringPointer,gameswf::PermanentString *,gameswf::string_pointer_hash_functor<gameswf::StringPointer>>::add
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_StringPointer_ga_128477::add(int **a1, char **a2, int *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int *v15;
  int result;
  uint32_t *v17;
  char v18;
  int v19;
  char *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int *v28;
  int v29;
  int *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int **v35;
  gameswf::Self *v36;
  int v37;
  uint32_t *v38;
  int v39;
  int i;
  int *v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t _g4_t_v50[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v42)) > _g4_s0 ? (12u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v43)) > _g4_s1 ? (16u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v44)) > _g4_s2 ? (20u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v45)) > _g4_s3 ? (24u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v46)) > _g4_s4 ? (28u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v47)) > _g4_s5 ? (28u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v48)) > _g4_s6 ? (28u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v49)) > _g4_s7 ? (28u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v50)) > _g4_s8 ? (32u + sizeof(_g4_t_v50)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *v3;
    v5 = v3[1];
    v46 = v5 + 1;
    v6 = 2 * (v5 + 1);
    if ( 3 * *v3 > v6 )
    {
      if ( v6 <= 0 )
      {
        if ( v5 >= 0 )
        {
          v39 = 2;
          for ( i = 0; i <= v5; ++i )
          {
            v41 = &v3[v39];
            if ( v3[v39] != -2 )
            {
              *v41 = -2;
              v41[1] = 0;
              v3 = *a1;
            }
            v39 += 4;
          }
        }
        gameswf::free_internal((gameswf::Self *)v3);
        v3 = nullptr;
        *a1 = nullptr;
        v4 = 1179403647;
      }
      else
      {
        v24 = 1;
        if ( v6 == 1 )
        {
          LOWORD(v24) = 4;
        }
        else
        {
          do
            v24 *= 2;
          while ( v6 > v24 );
          if ( v24 <= 3 )
            v24 = 4;
        }
        if ( v46 != v24 )
        {
          v50[0] = gameswf::malloc_internal(16 * v24 + 8);
          *(uint32_t *)v50[0] = 0;
          v25 = v50[0];
          v26 = 8;
          *(uint32_t *)(v50[0] + 4) = v24 - 1;
          v27 = 0;
          while ( 1 )
          {
            ++v27;
            *(uint32_t *)(v25 + v26) = -2;
            v26 += 16;
            if ( v24 <= v27 )
              break;
            v25 = v50[0];
          }
          v28 = *a1;
          if ( *a1 != nullptr )
          {
            if ( v28[1] >= 0 )
            {
              v29 = 0;
              v48 = v28[1];
              do
              {
                v30 = &v28[4 * v29 + 2];
                if ( *v30 != -2 )
                {
                  gameswf::hash_gameswf_StringPointer_ga_128477::add(
                    v50,
                    &v28[4 * v29 + 4],
                    &v28[4 * v29 + 5]);
                  *v30 = -2;
                  v30[1] = 0;
                  v28 = *a1;
                }
                ++v29;
              }
              while ( v48 >= v29 );
            }
            gameswf::free_internal((gameswf::Self *)v28);
          }
          v3 = (int *)v50[0];
          *a1 = (int *)v50[0];
          v50[0] = 0;
          v4 = *v3;
        }
      }
    }
  }
  else
  {
    v50[0] = gameswf::malloc_internal(0x88u);
    *(uint32_t *)v50[0] = 0;
    v32 = v50[0];
    v33 = 8;
    v34 = 0;
    *(uint32_t *)(v50[0] + 4) = 7;
    while ( 1 )
    {
      ++v34;
      *(uint32_t *)(v32 + v33) = -2;
      v33 += 16;
      if ( v34 > 7 )
        break;
      v32 = v50[0];
    }
    v35 = a1;
    v36 = (gameswf::Self *)*a1;
    if ( *a1 != nullptr )
    {
      if ( *((int *)v36 + 1) >= 0 )
      {
        v37 = 0;
        v49 = *((uint32_t *)v36 + 1);
        do
        {
          v38 = (uint32_t *)((char *)v36 + 16 * v37 + 8);
          if ( *v38 != -2 )
          {
            gameswf::hash_gameswf_StringPointer_ga_128477::add(
              v50,
              (char *)v36 + 16 * v37 + 16,
              (char *)v36 + 16 * v37 + 20);
            *v38 = -2;
            v38[1] = 0;
            v36 = (gameswf::Self *)*a1;
          }
          ++v37;
        }
        while ( v49 >= v37 );
      }
      gameswf::free_internal(v36);
      v35 = a1;
    }
    v3 = (int *)v50[0];
    *v35 = (int *)v50[0];
    v50[0] = 0;
    v4 = *v3;
  }
  *v3 = v4 + 1;
  v42 = *((uint32_t *)*a2 + 4);
  if ( (uint8_t *)(v42 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v17 = (uint32_t *)(*a2);
    v18 = **a2;
    if ( v18 == -1 )
    {
      v20 = (char *)v17[3];
      v19 = v17[1] - 1;
    }
    else
    {
      v19 = v18 - 1;
      v20 = (char *)v17 + 1;
    }
    v43 = 5381;
    v21 = 5381;
    if ( v19 > 0 )
    {
      do
      {
        --v19;
        v22 = 33 * v21;
        v23 = (uint8_t)v20[v19] + 32;
        if ( (uint8_t)(v20[v19] - 65) > 0x19u )
          v23 = (uint8_t)v20[v19];
        v21 = v22 ^ v23;
      }
      while ( v19 != 0 );
      v21 = v21 << 9 >> 9;
      v43 = v21;
    }
    *((uint32_t *)*a2 + 4) = v21 & 0x7FFFFF | v42 & 0xFF800000;
    v7 = v43;
  }
  else
  {
    v43 = v42 << 9 >> 9;
    v7 = v43;
  }
  v8 = *a1;
  v9 = (*a1)[1];
  v45 = v9 & v7;
  v47 = &(*a1)[4 * (v9 & v7) + 2];
  v10 = v9 & v7;
  v44 = *v47;
  if ( *v47 == -2 )
  {
    *v47 = -1;
    v47[1] = v43;
    v47[2] = (int)(uintptr_t)(*a2);
    result = *a3;
    v47[3] = *a3;
  }
  else
  {
    v11 = v10;
    do
    {
      v10 = v9 & (v10 + 1);
      v12 = &v8[4 * v10 + 2];
    }
    while ( *v12 != -2 && v10 != v11 );
    v13 = v47[1] & v9;
    if ( v13 == v45 )
    {
      *v12 = v44;
      v8[4 * v10 + 3] = v47[1];
      v8[4 * v10 + 4] = v47[2];
      v8[4 * v10 + 5] = v47[3];
      v47[2] = (int)(uintptr_t)(*a2);
      v31 = *a3;
      *v47 = v10;
      v47[3] = v31;
      v47[1] = v43;
      return v43;
    }
    else
    {
      v14 = v13;
      do
      {
        v15 = &v8[4 * v14 + 2];
        v14 = *v15;
      }
      while ( *v15 != v45 );
      *v12 = v44;
      v8[4 * v10 + 3] = v47[1];
      v8[4 * v10 + 4] = v47[2];
      v8[4 * v10 + 5] = v47[3];
      *v15 = v10;
      v47[2] = (int)(uintptr_t)(*a2);
      result = *a3;
      v47[3] = *a3;
      v47[1] = v43;
      *v47 = -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringPointer_ga_128477::clear  (binary VA: 0x107a230)
// Original: gameswf::hash<gameswf::StringPointer,gameswf::PermanentString *,gameswf::string_pointer_hash_functor<gameswf::StringPointer>>::clear
// ----------------------------------------------------------------------------
void gameswf::hash_gameswf_StringPointer_ga_128477::clear(gameswf::Self **self)
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
// Function: gameswf::hash_gameswf_StringIPointer_g_5eef2f::find  (binary VA: 0x107a770)
// Original: gameswf::hash<gameswf::StringIPointer,gameswf::ASValue,gameswf::string_pointer_hash_functor<gameswf::StringIPointer>>::find
// ----------------------------------------------------------------------------
uint32_t * gameswf::hash_gameswf_StringIPointer_g_5eef2f::find(uint32_t *a1, uint32_t *a2, char **a3)
{
  uint32_t *v3;
  int v4;
  char *v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  char *v18;
  char *v19;
  gameswf::String::Self *v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;

  v3 = a1;
  v4 = *a2;
  if ( *a2 == 0 )
    goto LABEL_6;
  v5 = *a3;
  v26 = *((uint32_t *)*a3 + 4);
  if ( (uint8_t *)(v26 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v5 == -1 )
    {
      v12 = *((char **)v5 + 3);
      v11 = *((uint32_t *)v5 + 1) - 1;
    }
    else
    {
      v11 = *v5 - 1;
      v12 = v5 + 1;
    }
    v6 = 5381;
    v13 = 5381;
    if ( v11 > 0 )
    {
      do
      {
        --v11;
        v14 = 33 * v13;
        v15 = (uint8_t)v12[v11] + 32;
        if ( (uint8_t)(v12[v11] - 65) > 0x19u )
          v15 = (uint8_t)v12[v11];
        v13 = v14 ^ v15;
      }
      while ( v11 != 0 );
      v3 = a1;
      v13 = v13 << 9 >> 9;
      v6 = v13;
    }
    *((uint32_t *)*a3 + 4) = v13 & 0x7FFFFF | v26 & 0xFF800000;
    v4 = *a2;
  }
  else
  {
    v6 = v26 << 9 >> 9;
  }
  v24 = *(uint32_t *)(v4 + 4);
  v7 = v6 & v24;
  v8 = (int *)(v4 + 24 * (v6 & v24) + 8);
  if ( *v8 != -2 && (v9 = *(uint32_t *)(v4 + 24 * (v6 & v24) + 12), v7 == (v9 & v24)) )
  {
    v25 = v3;
    v16 = v7;
    v17 = a2;
    while ( 1 )
    {
      if ( v9 == v6 )
      {
        v27 = v8[2];
        v18 = *a3;
        if ( (char *)v27 == *a3 )
          break;
        v19 = *v18 == -1 ? *((char **)v18 + 3) : v18 + 1;
        v20 = (gameswf::String::Self *)(v27 + 1);
        if ( *(uint8_t *)v27 == 0xFF )
          v20 = *(gameswf::String::Self **)(v27 + 12);
        v23 = v17;
        v21 = gameswf::String::stricmp(v20, v19);
        v17 = v23;
        if ( v21 == 0 )
          break;
      }
      v16 = *v8;
      if ( *v8 == -1 )
      {
        v3 = v25;
        goto LABEL_6;
      }
      v8 = (int *)(*v17 + 24 * v16 + 8);
      v9 = v8[1];
    }
    v22 = v16;
    v3 = v25;
    if ( v22 < 0 )
      goto LABEL_6;
    v25[1] = v22;
    *v25 = (uint32_t)(uintptr_t)(a2);
    return v25;
  }
  else
  {
LABEL_6:
    *v3 = 0;
    v3[1] = 0;
    return v3;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringPointer_ga_128477::find_index  (binary VA: 0x107a9f0)
// Original: gameswf::hash<gameswf::StringPointer,gameswf::PermanentString *,gameswf::string_pointer_hash_functor<gameswf::StringPointer>>::find_index
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_StringPointer_ga_128477::find_index(int *a1, char **a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int i;
  int v13;
  char *v14;
  const char *s2;
  const char *s1;
  int v17;
  int v19;
  char *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v2 = *a1;
  if ( *a1 == 0 )
    return -1;
  v3 = *a2;
  v26 = *((uint32_t *)*a2 + 4);
  if ( (uint8_t *)(v26 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v3 == -1 )
    {
      v20 = *((char **)v3 + 3);
      v19 = *((uint32_t *)v3 + 1) - 1;
    }
    else
    {
      v19 = *v3 - 1;
      v20 = v3 + 1;
    }
    v4 = 5381;
    v21 = 5381;
    if ( v19 > 0 )
    {
      do
      {
        --v19;
        v22 = 33 * v21;
        v23 = (uint8_t)v20[v19] + 32;
        if ( (uint8_t)(v20[v19] - 65) > 0x19u )
          v23 = (uint8_t)v20[v19];
        v21 = v22 ^ v23;
      }
      while ( v19 != 0 );
      v21 = v21 << 9 >> 9;
      v4 = v21;
    }
    *((uint32_t *)*a2 + 4) = v21 & 0x7FFFFF | v26 & 0xFF800000;
    v2 = *a1;
  }
  else
  {
    v4 = v26 << 9 >> 9;
  }
  v5 = *(uint32_t *)(v2 + 4);
  v6 = v5 & v4;
  v7 = 16 * (v5 & v4);
  v8 = (int *)(v2 + v7 + 8);
  if ( *v8 == -2 )
    return -1;
  v9 = *(uint32_t *)(v2 + v7 + 12);
  if ( (v9 & v5) != v6 )
    return -1;
  v10 = v4;
  v11 = v6;
  v25 = v10;
  for ( i = v2; ; v9 = *(uint32_t *)(i + 16 * v11 + 12) )
  {
    if ( v9 == v25 )
    {
      v13 = v8[2];
      v14 = *a2;
      if ( (char *)v13 == *a2 )
        break;
      s2 = *v14 == -1 ? *((const char **)v14 + 3) : v14 + 1;
      s1 = *(uint8_t *)v13 == 0xFF ? *(const char **)(v13 + 12) : (const char *)(v13 + 1);
      v24 = i;
      v17 = strcmp(s1, s2);
      i = v24;
      if ( v17 == 0 )
        break;
    }
    v11 = *v8;
    if ( *v8 == -1 )
      break;
    v8 = (int *)(i + 16 * v11 + 8);
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringPointer_ga_2dbc64::clear  (binary VA: 0x107ab90)
// Original: gameswf::hash<gameswf::StringPointer,gameswf::ASValue,gameswf::string_pointer_hash_functor<gameswf::StringPointer>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> * gameswf::hash_gameswf_StringPointer_ga_2dbc64::clear(gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> **self)
{
  gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *result;
  int v2;
  int v3;
  int i;
  uint32_t *v5;
  int v6;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      v3 = 8;
      for ( i = 0; i <= v2; ++i )
      {
        v5 = (uint32_t *)((char *)result + v3);
        if ( *(uint32_t *)((char *)result + v3) != -2 )
        {
          v6 = v2;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v5 + 3));
          *v5 = -2;
          v5[1] = 0;
          v2 = v6;
          result = *self;
        }
        v3 += 24;
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringPointer_ga_2dbc64::set_raw_capacity  (binary VA: 0x107ae00)
// Original: gameswf::hash<gameswf::StringPointer,gameswf::ASValue,gameswf::string_pointer_hash_functor<gameswf::StringPointer>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> * gameswf::hash_gameswf_StringPointer_ga_2dbc64::set_raw_capacity(gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *result;
  gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *v8;
  int v9;
  int v10;
  uint32_t *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *_g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_gameswf_StringPointer_ga_2dbc64::clear(self);
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
  if ( *self == nullptr
    || (result = (gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)v3 )
  {
    v14 = (gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)gameswf::malloc_internal(24 * v3 + 8);
    *(uint32_t *)v14 = 0;
    v5 = v14;
    v6 = 8;
    *((uint32_t *)v14 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 24;
      if ( v3 <= v7 )
        break;
      v5 = v14;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      if ( *((int *)v8 + 1) >= 0 )
      {
        v9 = 8;
        v10 = 0;
        v13 = *((uint32_t *)v8 + 1);
        do
        {
          v11 = (uint32_t *)((char *)v8 + v9);
          if ( *(uint32_t *)((char *)v8 + v9) != -2 )
          {
            v12 = v9;
            gameswf::hash_gameswf_StringPointer_ga_2dbc64::add(
              (gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)&v14,
              (int)(uintptr_t)(v11 + 2),
              (gameswf::ASValue::Self *)(v11 + 3));
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v11 + 3));
            *v11 = -2;
            v11[1] = 0;
            v9 = v12;
            v8 = *self;
          }
          ++v10;
          v9 += 24;
        }
        while ( v13 >= v10 );
      }
      gameswf::free_internal(v8);
    }
    result = v14;
    *self = v14;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringPointer_ga_2dbc64::add  (binary VA: 0x107af70)
// Original: gameswf::hash<gameswf::StringPointer,gameswf::ASValue,gameswf::string_pointer_hash_functor<gameswf::StringPointer>>::add
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_StringPointer_ga_2dbc64::add(gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> **a1, int *a2, gameswf::ASValue::Self *a3)
{
  gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *v3;
  int v4;
  char *v5;
  int v6;
  gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int *v13;
  int result;
  char v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  char *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_gameswf_StringPointer_ga_2dbc64::set_raw_capacity(
        a1,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_gameswf_StringPointer_ga_2dbc64::set_raw_capacity(
      a1,
      8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  v5 = (char *)*a2;
  v26 = *(uint32_t *)(*a2 + 16);
  if ( (uint8_t *)(v26 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v15 = *v5;
    if ( *v5 == -1 )
    {
      v22 = *((uint32_t *)v5 + 1);
      v16 = *((char **)v5 + 3);
      v17 = v22 - 1;
    }
    else
    {
      v16 = v5 + 1;
      v17 = v15 - 1;
    }
    v25 = 5381;
    v18 = 5381;
    if ( v17 > 0 )
    {
      do
      {
        --v17;
        v19 = 33 * v18;
        v20 = (uint8_t)v16[v17] + 32;
        if ( (uint8_t)(v16[v17] - 65) > 0x19u )
          v20 = (uint8_t)v16[v17];
        v18 = v19 ^ v20;
      }
      while ( v17 != 0 );
      v18 = v18 << 9 >> 9;
      v25 = v18;
    }
    *(uint32_t *)(*a2 + 16) = v18 & 0x7FFFFF | v26 & 0xFF800000;
    v6 = v25;
  }
  else
  {
    v6 = v26 << 9 >> 9;
    v25 = v6;
  }
  v7 = *a1;
  v8 = *((uint32_t *)*a1 + 1);
  v9 = v8 & v6;
  v23 = (int)(uintptr_t)(*a1) + 24 * v9 + 8;
  v24 = *(uint32_t *)v23;
  v10 = v9;
  if ( *(uint32_t *)v23 == -2 )
  {
    *(uint32_t *)v23 = -1;
    *(uint32_t *)(v23 + 4) = v25;
    v21 = (char *)*a2;
    *(uint8_t *)(v23 + 12) = 0;
    *(uint32_t *)(v23 + 8) = (uint32_t)(uintptr_t)(v21);
    *(uint8_t *)(v23 + 13) = 0;
    return (int)(uintptr_t)(gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v23 + 12), a3));
  }
  else
  {
    do
    {
      v10 = v8 & (v10 + 1);
      v11 = (uint32_t *)((char *)v7 + 24 * v10 + 8);
    }
    while ( *v11 != -2 && v10 != v9 );
    v12 = *((uint32_t *)*a1 + 6 * v9 + 3) & v8;
    if ( v12 == v9 )
    {
      *v11 = v24;
      *((uint32_t *)v7 + 6 * v10 + 3) = *(uint32_t *)(v23 + 4);
      *((uint32_t *)v7 + 6 * v10 + 4) = *(uint32_t *)(v23 + 8);
      *((uint8_t *)v7 + 24 * v10 + 20) = 0;
      *((uint8_t *)v7 + 24 * v10 + 21) = 0;
      gameswf::ASValue::opAssign(
        (gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)((char *)v7 + 24 * v10 + 20),
        (const gameswf::ASValue::Self *)(v23 + 12));
      *(uint32_t *)(v23 + 8) = *a2;
      result = (int)(uintptr_t)(gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v23 + 12), a3));
      *(uint32_t *)v23 = v10;
      *(uint32_t *)(v23 + 4) = v25;
    }
    else
    {
      do
      {
        v13 = (int *)((char *)v7 + 24 * v12 + 8);
        v12 = *v13;
      }
      while ( *v13 != v9 );
      *v11 = v24;
      *((uint32_t *)v7 + 6 * v10 + 3) = *(uint32_t *)(v23 + 4);
      *((uint32_t *)v7 + 6 * v10 + 4) = *(uint32_t *)(v23 + 8);
      *((uint8_t *)v7 + 24 * v10 + 20) = 0;
      *((uint8_t *)v7 + 24 * v10 + 21) = 0;
      gameswf::ASValue::opAssign(
        (gameswf::hash<gameswf::StringPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)((char *)v7 + 24 * v10 + 20),
        (const gameswf::ASValue::Self *)(v23 + 12));
      *v13 = v10;
      *(uint32_t *)(v23 + 8) = *a2;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v23 + 12), a3);
      *(uint32_t *)v23 = -1;
      *(uint32_t *)(v23 + 4) = v25;
      return v25;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringIPointer_g_5eef2f::clear  (binary VA: 0x107b220)
// Original: gameswf::hash<gameswf::StringIPointer,gameswf::ASValue,gameswf::string_pointer_hash_functor<gameswf::StringIPointer>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> * gameswf::hash_gameswf_StringIPointer_g_5eef2f::clear(gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> **self)
{
  gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> *result;
  int v2;
  int v3;
  int i;
  uint32_t *v5;
  int v6;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      v3 = 8;
      for ( i = 0; i <= v2; ++i )
      {
        v5 = (uint32_t *)((char *)result + v3);
        if ( *(uint32_t *)((char *)result + v3) != -2 )
        {
          v6 = v2;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v5 + 3));
          *v5 = -2;
          v5[1] = 0;
          v2 = v6;
          result = *self;
        }
        v3 += 24;
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringIPointer_g_5eef2f::set_raw_capacity  (binary VA: 0x107b2c0)
// Original: gameswf::hash<gameswf::StringIPointer,gameswf::ASValue,gameswf::string_pointer_hash_functor<gameswf::StringIPointer>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> * gameswf::hash_gameswf_StringIPointer_g_5eef2f::set_raw_capacity(gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> *result;
  int v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> **v8;
  gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> *v9;
  char *v10;
  uint32_t *v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int *v22;
  int v23;
  char v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  typedef const gameswf::ASValue::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_i;
  typedef uint32_t *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t _g4_t_v43[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v32)) > _g4_s0 ? (12u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v33)) > _g4_s1 ? (16u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v34)) > _g4_s2 ? (20u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v35)) > _g4_s3 ? (24u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v36)) > _g4_s4 ? (24u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v37)) > _g4_s5 ? (28u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_i)) > _g4_s6 ? (32u + sizeof(_g4_t_i)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v39)) > _g4_s7 ? (36u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v40)) > _g4_s8 ? (40u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v41)) > _g4_s9 ? (40u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v42)) > _g4_s10 ? (44u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v43)) > _g4_s11 ? (48u + sizeof(_g4_t_v43)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);

  if ( a2 <= 0 )
    return gameswf::hash_gameswf_StringIPointer_g_5eef2f::clear(self);
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
  if ( *self == nullptr
    || (result = (gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> *)v3 )
  {
    v43[0] = gameswf::malloc_internal(24 * v3 + 8);
    *(uint32_t *)v43[0] = 0;
    v5 = v43[0];
    v6 = 8;
    *(uint32_t *)(v43[0] + 4) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)(v5 + v6) = -2;
      v6 += 24;
      if ( v3 <= v7 )
        break;
      v5 = v43[0];
    }
    v8 = self;
    v9 = *self;
    if ( *self != nullptr )
    {
      v33 = *((uint32_t *)v9 + 1);
      if ( v33 >= 0 )
      {
        v37 = 8;
        for ( i = 0; i <= v33; ++i )
        {
          v10 = (char *)v9 + v37;
          v39 = (uint32_t *)((char *)v9 + v37);
          if ( *(uint32_t *)((char *)v9 + v37) != -2 )
          {
            v11 = (uint32_t *)v43[0];
            v32 = (const gameswf::ASValue::Self *)(v10 + 12);
            if ( v43[0] != 0 )
            {
              v12 = *(uint32_t *)v43[0];
              if ( 3 * *(uint32_t *)v43[0] > 2 * *(uint32_t *)(v43[0] + 4) + 2 )
              {
                gameswf::hash_gameswf_StringIPointer_g_5eef2f::set_raw_capacity(
                  (gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> *)v43,
                  2 * *(uint32_t *)(v43[0] + 4) + 2);
                v11 = (uint32_t *)v43[0];
                v12 = *(uint32_t *)v43[0];
              }
            }
            else
            {
              gameswf::hash_gameswf_StringIPointer_g_5eef2f::set_raw_capacity(
                (gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> *)v43,
                8);
              v11 = (uint32_t *)v43[0];
              v12 = *(uint32_t *)v43[0];
            }
            *v11 = v12 + 1;
            v13 = (char *)v39[2];
            v40 = v13;
            v35 = *((uint32_t *)v13 + 4);
            if ( (uint8_t *)(v35 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
            {
              v23 = v39[2];
              v24 = *v13;
              if ( v24 == -1 )
              {
                v26 = *(uint32_t *)(v23 + 12);
                v25 = *(uint32_t *)(v23 + 4) - 1;
              }
              else
              {
                v25 = v24 - 1;
                v26 = v23 + 1;
              }
              v34 = 5381;
              v27 = 5381;
              if ( v25 > 0 )
              {
                do
                {
                  --v25;
                  v28 = 33 * v27;
                  v29 = *(uint8_t *)(v26 + v25) + 32;
                  if ( (uint8_t)(*(uint8_t *)(v26 + v25) - 65) > 0x19u )
                    v29 = *(uint8_t *)(v26 + v25);
                  v27 = v28 ^ v29;
                }
                while ( v25 != 0 );
                v27 = v27 << 9 >> 9;
                v34 = v27;
              }
              *((uint32_t *)v40 + 4) = v27 & 0x7FFFFF | v35 & 0xFF800000;
              v14 = v34;
            }
            else
            {
              v14 = v35 << 9 >> 9;
              v34 = v14;
            }
            v15 = *(uint32_t *)(v43[0] + 4);
            v16 = v15 & v14;
            v41 = v16;
            v17 = v16;
            v42 = v43[0] + 24 * v16 + 8;
            v36 = *(uint32_t *)v42;
            if ( *(uint32_t *)v42 == -2 )
            {
              *(uint32_t *)(v43[0] + 24 * v16 + 12) = v34;
              *(uint32_t *)v42 = -1;
              v30 = v39[2];
              *(uint8_t *)(v42 + 12) = 0;
              *(uint32_t *)(v42 + 8) = v30;
              *(uint8_t *)(v42 + 13) = 0;
              gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v42 + 12), v32);
            }
            else
            {
              v18 = v16;
              while ( 1 )
              {
                v17 = v15 & (v17 + 1);
                v19 = v43[0] + 24 * v17 + 8;
                if ( *(uint32_t *)v19 == -2 )
                  break;
                if ( v18 == v17 )
                {
                  v17 = v41;
                  break;
                }
              }
              v20 = *(uint32_t *)(v42 + 4) & v15;
              if ( v41 == v20 )
              {
                *(uint32_t *)v19 = v36;
                *(uint32_t *)(v19 + 4) = *(uint32_t *)(v42 + 4);
                v31 = *(uint32_t *)(v42 + 8);
                *(uint8_t *)(v19 + 12) = 0;
                *(uint32_t *)(v19 + 8) = v31;
                *(uint8_t *)(v19 + 13) = 0;
                gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v19 + 12), (const gameswf::ASValue::Self *)(v42 + 12));
                *(uint32_t *)(v42 + 8) = v39[2];
                gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v42 + 12), v32);
                *(uint32_t *)v42 = v17;
                *(uint32_t *)(v42 + 4) = v34;
              }
              else
              {
                v21 = v20;
                do
                {
                  v22 = (int *)(v43[0] + 24 * v21 + 8);
                  v21 = *v22;
                }
                while ( v41 != *v22 );
                *(uint32_t *)v19 = v36;
                *(uint32_t *)(v19 + 4) = *(uint32_t *)(v42 + 4);
                *(uint32_t *)(v19 + 8) = *(uint32_t *)(v42 + 8);
                *(uint8_t *)(v19 + 12) = 0;
                *(uint8_t *)(v19 + 13) = 0;
                gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v19 + 12), (const gameswf::ASValue::Self *)(v42 + 12));
                *v22 = v17;
                *(uint32_t *)(v42 + 8) = v39[2];
                gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v42 + 12), v32);
                *(uint32_t *)(v42 + 4) = v34;
                *(uint32_t *)v42 = -1;
              }
            }
            gameswf::ASValue::dropRefs(v32);
            *v39 = -2;
            v39[1] = 0;
            v9 = *self;
          }
          v37 += 24;
        }
      }
      gameswf::free_internal(v9);
      v8 = self;
    }
    result = (gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> *)v43[0];
    *v8 = (gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> *)v43[0];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringPointer_ga_128477::set_raw_capacity  (binary VA: 0x107b6f0)
// Original: gameswf::hash<gameswf::StringPointer,gameswf::PermanentString *,gameswf::string_pointer_hash_functor<gameswf::StringPointer>>::set_raw_capacity
// ----------------------------------------------------------------------------
void gameswf::hash_gameswf_StringPointer_ga_128477::set_raw_capacity(gameswf::Self **self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::Self **v7;
  gameswf::Self *v8;
  int v9;
  uint32_t *v10;
  int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  int *v20;
  uint32_t *v21;
  int v22;
  char *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int *_g4_t_v35;
  typedef uint32_t _g4_t_v36[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v28)) > _g4_s0 ? (4u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v29)) > _g4_s1 ? (8u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v30)) > _g4_s2 ? (12u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v31)) > _g4_s3 ? (12u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v32)) > _g4_s4 ? (16u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v33)) > _g4_s5 ? (20u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v34)) > _g4_s6 ? (24u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v35)) > _g4_s7 ? (28u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v36)) > _g4_s8 ? (32u + sizeof(_g4_t_v36)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);

  if ( a2 <= 0 )
  {
    gameswf::hash_gameswf_StringPointer_ga_128477::clear(self);
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
      v36[0] = gameswf::malloc_internal(16 * v3 + 8);
      *(uint32_t *)v36[0] = 0;
      v4 = v36[0];
      v5 = 8;
      *(uint32_t *)(v36[0] + 4) = v3 - 1;
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        *(uint32_t *)(v4 + v5) = -2;
        v5 += 16;
        if ( v3 <= v6 )
          break;
        v4 = v36[0];
      }
      v7 = self;
      v8 = *self;
      if ( *self != nullptr )
      {
        v28 = *((uint32_t *)v8 + 1);
        if ( v28 >= 0 )
        {
          v32 = 0;
          v9 = 0;
          do
          {
            v34 = (uint32_t *)((char *)v8 + 16 * v9 + 8);
            if ( *v34 != -2 )
            {
              v10 = (uint32_t *)v36[0];
              if ( v36[0] != 0 )
              {
                v11 = *(uint32_t *)v36[0];
                if ( 3 * *(uint32_t *)v36[0] > 2 * *(uint32_t *)(v36[0] + 4) + 2 )
                {
                  gameswf::hash_gameswf_StringPointer_ga_128477::set_raw_capacity(
                    (gameswf::Self **)((gameswf::hash<gameswf::StringPointer, gameswf::PermanentString::Self *, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)v36),
                    2 * *(uint32_t *)(v36[0] + 4) + 2);
                  v10 = (uint32_t *)v36[0];
                  v11 = *(uint32_t *)v36[0];
                }
              }
              else
              {
                gameswf::hash_gameswf_StringPointer_ga_128477::set_raw_capacity(
                  (gameswf::Self **)((gameswf::hash<gameswf::StringPointer, gameswf::PermanentString::Self *, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)v36),
                  8);
                v10 = (uint32_t *)v36[0];
                v11 = *(uint32_t *)v36[0];
              }
              *v10 = v11 + 1;
              v12 = (char *)v34[2];
              v30 = *((uint32_t *)v12 + 4);
              if ( (uint8_t *)(v30 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
              {
                if ( *v12 == -1 )
                {
                  v23 = *((char **)v12 + 3);
                  v22 = *((uint32_t *)v12 + 1) - 1;
                }
                else
                {
                  v22 = *v12 - 1;
                  v23 = v12 + 1;
                }
                v29 = 5381;
                v24 = 5381;
                if ( v22 > 0 )
                {
                  do
                  {
                    --v22;
                    v25 = 33 * v24;
                    v26 = (uint8_t)v23[v22] + 32;
                    if ( (uint8_t)(v23[v22] - 65) > 0x19u )
                      v26 = (uint8_t)v23[v22];
                    v24 = v25 ^ v26;
                  }
                  while ( v22 != 0 );
                  v24 = v24 << 9 >> 9;
                  v29 = v24;
                }
                *((uint32_t *)v12 + 4) = v24 & 0x7FFFFF | v30 & 0xFF800000;
                v13 = v29;
              }
              else
              {
                v29 = v30 << 9 >> 9;
                v13 = v29;
              }
              v14 = *(uint32_t *)(v36[0] + 4);
              v33 = v14 & v13;
              v35 = (int *)(v36[0] + 16 * (v14 & v13) + 8);
              v15 = v14 & v13;
              v31 = *v35;
              if ( *v35 == -2 )
              {
                v21 = v34;
                *v35 = -1;
                v35[1] = v29;
                v35[2] = v34[2];
                v35[3] = v34[3];
              }
              else
              {
                v16 = v15;
                while ( 1 )
                {
                  v15 = v14 & (v15 + 1);
                  v17 = (int *)(v36[0] + 16 * v15 + 8);
                  if ( *v17 == -2 )
                    break;
                  if ( v16 == v15 )
                  {
                    v15 = v33;
                    break;
                  }
                }
                v18 = v35[1] & v14;
                if ( v33 == v18 )
                {
                  *v17 = v31;
                  v17[1] = v35[1];
                  v17[2] = v35[2];
                  v17[3] = v35[3];
                  v35[2] = v34[2];
                  v27 = v34[3];
                  *v35 = v15;
                  v35[3] = v27;
                  v35[1] = v29;
                  v21 = v34;
                }
                else
                {
                  v19 = v18;
                  do
                  {
                    v20 = (int *)(v36[0] + 16 * v19 + 8);
                    v19 = *v20;
                  }
                  while ( v33 != *v20 );
                  *v17 = v31;
                  v17[1] = v35[1];
                  v17[2] = v35[2];
                  v17[3] = v35[3];
                  v21 = v34;
                  *v20 = v15;
                  v35[2] = v34[2];
                  v35[3] = v34[3];
                  v35[1] = v29;
                  *v35 = -1;
                }
              }
              *v21 = -2;
              v21[1] = 0;
              v8 = *self;
            }
            v9 = ++v32;
          }
          while ( v28 >= v32 );
        }
        gameswf::free_internal(v8);
        v7 = self;
      }
      *v7 = (gameswf::Self *)v36[0];
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_a_5510e3::clear  (binary VA: 0x10829f0)
// Original: gameswf::hash<gameswf::String,gameswf::array<gameswf::ASEventDispatcher::Entry>,gameswf::string_hash_functor<gameswf::String>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> * gameswf::hash_gameswf_String_gameswf_a_5510e3::clear(gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> **self)
{
  gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *result;
  char *v2;
  int v3;
  bool v4;
  int v5;
  int i;
  gameswf::Self **v7;
  gameswf::Self *v8;
  bool v9;
  gameswf::Self *v10;
  int v11;
  gameswf::Self *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  int v18;
  int v19;

  result = *self;
  if ( *self != nullptr )
  {
    v19 = *((uint32_t *)result + 1);
    if ( v19 >= 0 )
    {
      v18 = 8;
      v17 = 0;
      while ( 1 )
      {
        v2 = (char *)result + v18;
        if ( *(uint32_t *)((char *)result + v18) != -2 )
          break;
LABEL_21:
        ++v17;
        v18 += 44;
        if ( v19 < v17 )
          goto LABEL_22;
      }
      if ( v2[8] == -1 && (v2[27] & 1) != 0 )
      {
        gameswf::free_internal(*((gameswf::Self **)v2 + 5));
        v3 = *((uint32_t *)v2 + 8);
        v4 = v3 < 0;
        if ( v3 <= 0 )
        {
LABEL_26:
          if ( v4 )
          {
            v13 = 24 * v3;
            do
            {
              v14 = *((uint32_t *)v2 + 7) + v13;
              if ( v14 != 0 )
              {
                *(uint32_t *)v14 = 0;
                *(uint32_t *)(v14 + 4) = 0;
                *(uint32_t *)(v14 + 8) = 0;
                *(uint32_t *)(v14 + 12) = 0;
                *(uint32_t *)(v14 + 16) = 0;
                *(uint8_t *)(v14 + 20) = 0;
              }
              v13 += 24;
              ++v3;
            }
            while ( v3 != 0 );
          }
LABEL_16:
          v11 = *((uint32_t *)v2 + 10);
          *((uint32_t *)v2 + 8) = 0;
          if ( v11 == 0 )
          {
            v12 = *((gameswf::Self **)v2 + 7);
            *((uint32_t *)v2 + 9) = 0;
            if ( v12 != nullptr )
              gameswf::free_internal(v12);
            *((uint32_t *)v2 + 7) = 0;
          }
          *(uint32_t *)v2 = -2;
          *((uint32_t *)v2 + 1) = 0;
          result = *self;
          goto LABEL_21;
        }
      }
      else
      {
        v3 = *((uint32_t *)v2 + 8);
        v4 = v3 < 0;
        if ( v3 <= 0 )
          goto LABEL_26;
      }
      v16 = v3;
      v5 = 0;
      v15 = v2;
      for ( i = 0; i != v16; ++i )
      {
        v7 = (gameswf::Self **)(*((uint32_t *)v15 + 7) + v5);
        v8 = v7[2];
        if ( v8 != nullptr )
        {
          v9 = (*(uint16_t *)v8)-- == 1;
          if ( v9 )
            gameswf::free_internal(v8);
        }
        v10 = *v7;
        if ( *v7 != nullptr )
        {
          v9 = (*(uint16_t *)v10)-- == 1;
          if ( v9 )
            gameswf::free_internal(v10);
        }
        v5 += 24;
      }
      v2 = v15;
      goto LABEL_16;
    }
LABEL_22:
    gameswf::free_internal(result);
    result = (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *)self;
    *self = nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringIPointer_g_02015a::add  (binary VA: 0x1090e20)
// Original: gameswf::hash<gameswf::StringIPointer,gameswf::Character *,gameswf::string_pointer_hash_functor<gameswf::StringIPointer>>::add
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_StringIPointer_g_02015a::add(int **a1, char **a2, int *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int *v15;
  int result;
  uint32_t *v17;
  char v18;
  int v19;
  char *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int *v28;
  int v29;
  int *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int **v35;
  gameswf::Self *v36;
  int v37;
  uint32_t *v38;
  int v39;
  int i;
  int *v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t _g4_t_v50[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v42)) > _g4_s0 ? (12u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v43)) > _g4_s1 ? (16u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v44)) > _g4_s2 ? (20u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v45)) > _g4_s3 ? (24u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v46)) > _g4_s4 ? (28u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v47)) > _g4_s5 ? (28u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v48)) > _g4_s6 ? (28u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v49)) > _g4_s7 ? (28u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v50)) > _g4_s8 ? (32u + sizeof(_g4_t_v50)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *v3;
    v5 = v3[1];
    v46 = v5 + 1;
    v6 = 2 * (v5 + 1);
    if ( 3 * *v3 > v6 )
    {
      if ( v6 <= 0 )
      {
        if ( v5 >= 0 )
        {
          v39 = 2;
          for ( i = 0; i <= v5; ++i )
          {
            v41 = &v3[v39];
            if ( v3[v39] != -2 )
            {
              *v41 = -2;
              v41[1] = 0;
              v3 = *a1;
            }
            v39 += 4;
          }
        }
        gameswf::free_internal((gameswf::Self *)v3);
        v3 = nullptr;
        *a1 = nullptr;
        v4 = 1179403647;
      }
      else
      {
        v24 = 1;
        if ( v6 == 1 )
        {
          LOWORD(v24) = 4;
        }
        else
        {
          do
            v24 *= 2;
          while ( v6 > v24 );
          if ( v24 <= 3 )
            v24 = 4;
        }
        if ( v46 != v24 )
        {
          v50[0] = gameswf::malloc_internal(16 * v24 + 8);
          *(uint32_t *)v50[0] = 0;
          v25 = v50[0];
          v26 = 8;
          *(uint32_t *)(v50[0] + 4) = v24 - 1;
          v27 = 0;
          while ( 1 )
          {
            ++v27;
            *(uint32_t *)(v25 + v26) = -2;
            v26 += 16;
            if ( v24 <= v27 )
              break;
            v25 = v50[0];
          }
          v28 = *a1;
          if ( *a1 != nullptr )
          {
            if ( v28[1] >= 0 )
            {
              v29 = 0;
              v48 = v28[1];
              do
              {
                v30 = &v28[4 * v29 + 2];
                if ( *v30 != -2 )
                {
                  gameswf::hash_gameswf_StringIPointer_g_02015a::add(
                    v50,
                    &v28[4 * v29 + 4],
                    &v28[4 * v29 + 5]);
                  *v30 = -2;
                  v30[1] = 0;
                  v28 = *a1;
                }
                ++v29;
              }
              while ( v48 >= v29 );
            }
            gameswf::free_internal((gameswf::Self *)v28);
          }
          v3 = (int *)v50[0];
          *a1 = (int *)v50[0];
          v50[0] = 0;
          v4 = *v3;
        }
      }
    }
  }
  else
  {
    v50[0] = gameswf::malloc_internal(0x88u);
    *(uint32_t *)v50[0] = 0;
    v32 = v50[0];
    v33 = 8;
    v34 = 0;
    *(uint32_t *)(v50[0] + 4) = 7;
    while ( 1 )
    {
      ++v34;
      *(uint32_t *)(v32 + v33) = -2;
      v33 += 16;
      if ( v34 > 7 )
        break;
      v32 = v50[0];
    }
    v35 = a1;
    v36 = (gameswf::Self *)*a1;
    if ( *a1 != nullptr )
    {
      if ( *((int *)v36 + 1) >= 0 )
      {
        v37 = 0;
        v49 = *((uint32_t *)v36 + 1);
        do
        {
          v38 = (uint32_t *)((char *)v36 + 16 * v37 + 8);
          if ( *v38 != -2 )
          {
            gameswf::hash_gameswf_StringIPointer_g_02015a::add(
              v50,
              (char *)v36 + 16 * v37 + 16,
              (char *)v36 + 16 * v37 + 20);
            *v38 = -2;
            v38[1] = 0;
            v36 = (gameswf::Self *)*a1;
          }
          ++v37;
        }
        while ( v49 >= v37 );
      }
      gameswf::free_internal(v36);
      v35 = a1;
    }
    v3 = (int *)v50[0];
    *v35 = (int *)v50[0];
    v50[0] = 0;
    v4 = *v3;
  }
  *v3 = v4 + 1;
  v42 = *((uint32_t *)*a2 + 4);
  if ( (uint8_t *)(v42 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v17 = (uint32_t *)(*a2);
    v18 = **a2;
    if ( v18 == -1 )
    {
      v20 = (char *)v17[3];
      v19 = v17[1] - 1;
    }
    else
    {
      v19 = v18 - 1;
      v20 = (char *)v17 + 1;
    }
    v43 = 5381;
    v21 = 5381;
    if ( v19 > 0 )
    {
      do
      {
        --v19;
        v22 = 33 * v21;
        v23 = (uint8_t)v20[v19] + 32;
        if ( (uint8_t)(v20[v19] - 65) > 0x19u )
          v23 = (uint8_t)v20[v19];
        v21 = v22 ^ v23;
      }
      while ( v19 != 0 );
      v21 = v21 << 9 >> 9;
      v43 = v21;
    }
    *((uint32_t *)*a2 + 4) = v21 & 0x7FFFFF | v42 & 0xFF800000;
    v7 = v43;
  }
  else
  {
    v43 = v42 << 9 >> 9;
    v7 = v43;
  }
  v8 = *a1;
  v9 = (*a1)[1];
  v45 = v9 & v7;
  v47 = &(*a1)[4 * (v9 & v7) + 2];
  v10 = v9 & v7;
  v44 = *v47;
  if ( *v47 == -2 )
  {
    *v47 = -1;
    v47[1] = v43;
    v47[2] = (int)(uintptr_t)(*a2);
    result = *a3;
    v47[3] = *a3;
  }
  else
  {
    v11 = v10;
    do
    {
      v10 = v9 & (v10 + 1);
      v12 = &v8[4 * v10 + 2];
    }
    while ( *v12 != -2 && v10 != v11 );
    v13 = v47[1] & v9;
    if ( v13 == v45 )
    {
      *v12 = v44;
      v8[4 * v10 + 3] = v47[1];
      v8[4 * v10 + 4] = v47[2];
      v8[4 * v10 + 5] = v47[3];
      v47[2] = (int)(uintptr_t)(*a2);
      v31 = *a3;
      *v47 = v10;
      v47[3] = v31;
      v47[1] = v43;
      return v43;
    }
    else
    {
      v14 = v13;
      do
      {
        v15 = &v8[4 * v14 + 2];
        v14 = *v15;
      }
      while ( *v15 != v45 );
      *v12 = v44;
      v8[4 * v10 + 3] = v47[1];
      v8[4 * v10 + 4] = v47[2];
      v8[4 * v10 + 5] = v47[3];
      *v15 = v10;
      v47[2] = (int)(uintptr_t)(*a2);
      result = *a3;
      v47[3] = *a3;
      v47[1] = v43;
      *v47 = -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_Character_gamesw_7bf038::add  (binary VA: 0x1098470)
// Original: gameswf::hash<gameswf::Character *,gameswf::FilterCacheInfos,gameswf::fixed_size_hash<gameswf::Character *>>::add
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_Character_gamesw_7bf038::add(gameswf::Self **a1, uint8_t *a2, uint32_t *a3)
{
  gameswf::Self *v3;
  int v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  int *v8;
  int v9;
  int *v10;
  int v11;
  int *v12;
  int result;
  char v14;
  int v15;
  int v16;
  int v17;
  int v18;
  gameswf::Self *v19;
  int v20;
  int v21;
  uint32_t *v22;
  char v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint32_t *v29;
  int v30;
  int i;
  uint32_t *v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t _g4_t_v43[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v33)) > _g4_s0 ? (8u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v34)) > _g4_s1 ? (8u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v35)) > _g4_s2 ? (12u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v36)) > _g4_s3 ? (16u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v37)) > _g4_s4 ? (20u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v38)) > _g4_s5 ? (24u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v39)) > _g4_s6 ? (24u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v40)) > _g4_s7 ? (24u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v41)) > _g4_s8 ? (24u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v42)) > _g4_s9 ? (28u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v43)) > _g4_s10 ? (32u + sizeof(_g4_t_v43)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);

  v3 = *a1;
  if ( *a1 == nullptr )
  {
    v43[0] = gameswf::malloc_internal(0x148u);
    *(uint32_t *)v43[0] = 0;
    v24 = v43[0];
    v25 = 8;
    v26 = 0;
    *(uint32_t *)(v43[0] + 4) = 7;
    while ( 1 )
    {
      ++v26;
      *(uint32_t *)(v24 + v25) = -2;
      v25 += 40;
      if ( v26 > 7 )
        break;
      v24 = v43[0];
    }
    v19 = *a1;
    if ( *a1 == nullptr )
      goto LABEL_26;
    if ( *((int *)v19 + 1) >= 0 )
    {
      v27 = 8;
      v28 = 0;
      v41 = *((uint32_t *)v19 + 1);
      do
      {
        v29 = (uint32_t *)((char *)v19 + v27);
        if ( *(uint32_t *)((char *)v19 + v27) != -2 )
        {
          v34 = v27;
          gameswf::hash_gameswf_Character_gamesw_7bf038::add(
            (gameswf::Self **)(v43),
            (uint8_t *)(v29 + 2),
            v29 + 3);
          *v29 = -2;
          v29[1] = 0;
          v27 = v34;
          v19 = *a1;
        }
        ++v28;
        v27 += 40;
      }
      while ( v41 >= v28 );
    }
    goto LABEL_25;
  }
  v4 = *(uint32_t *)v3;
  v5 = *((uint32_t *)v3 + 1);
  v6 = 2 * (v5 + 1);
  if ( 3 * *(uint32_t *)v3 <= v6 )
    goto LABEL_3;
  if ( v6 <= 0 )
  {
    if ( v5 >= 0 )
    {
      v30 = 8;
      for ( i = 0; i <= v5; ++i )
      {
        v32 = (uint32_t *)((char *)v3 + v30);
        if ( *(uint32_t *)((char *)v3 + v30) != -2 )
        {
          *v32 = -2;
          v32[1] = 0;
          v3 = *a1;
        }
        v30 += 40;
      }
    }
    gameswf::free_internal(v3);
    v3 = nullptr;
    *a1 = nullptr;
    v4 = 1179403647;
  }
  else
  {
    v15 = 1;
    if ( v6 == 1 )
    {
      LOWORD(v15) = 4;
    }
    else
    {
      do
        v15 *= 2;
      while ( v6 > v15 );
      if ( v15 <= 3 )
        v15 = 4;
    }
    if ( v5 + 1 != v15 )
    {
      v43[0] = gameswf::malloc_internal(40 * v15 + 8);
      *(uint32_t *)v43[0] = 0;
      v16 = v43[0];
      v17 = 8;
      *(uint32_t *)(v43[0] + 4) = v15 - 1;
      v18 = 0;
      while ( 1 )
      {
        ++v18;
        *(uint32_t *)(v16 + v17) = -2;
        v17 += 40;
        if ( v15 <= v18 )
          break;
        v16 = v43[0];
      }
      v19 = *a1;
      if ( *a1 == nullptr )
        goto LABEL_26;
      if ( *((int *)v19 + 1) >= 0 )
      {
        v20 = 8;
        v21 = 0;
        v40 = *((uint32_t *)v19 + 1);
        do
        {
          v22 = (uint32_t *)((char *)v19 + v20);
          if ( *(uint32_t *)((char *)v19 + v20) != -2 )
          {
            v33 = v20;
            gameswf::hash_gameswf_Character_gamesw_7bf038::add(
              (gameswf::Self **)(v43),
              (uint8_t *)(v22 + 2),
              v22 + 3);
            *v22 = -2;
            v22[1] = 0;
            v20 = v33;
            v19 = *a1;
          }
          ++v21;
          v20 += 40;
        }
        while ( v40 >= v21 );
      }
LABEL_25:
      gameswf::free_internal(v19);
LABEL_26:
      v3 = (gameswf::Self *)v43[0];
      *a1 = (gameswf::Self *)v43[0];
      v43[0] = 0;
      v4 = *(uint32_t *)v3;
    }
  }
LABEL_3:
  *(uint32_t *)v3 = v4 + 1;
  v7 = *a1;
  v38 = *((uint32_t *)*a1 + 1);
  v37 = 65599
      * (a2[1]
       + 0xFFFF * (((a2[3] + 352988219) << 16) + 63 * (a2[3] + 352988219) + a2[2])
       + ((((a2[3] + 352988219) << 16) + 63 * (a2[3] + 352988219) + a2[2]) << 6))
      + *a2;
  v42 = v37 & v38;
  v8 = (int *)((char *)*a1 + 40 * (v37 & v38) + 8);
  v36 = *v8;
  v9 = v37 & v38;
  if ( *v8 == -2 )
  {
    *v8 = -1;
    v8[1] = v37;
    v8[2] = *(uint32_t *)a2;
    v8[3] = *a3;
    v8[4] = a3[1];
    v8[5] = a3[2];
    v8[6] = a3[3];
    v8[7] = a3[4];
    v8[8] = a3[5];
    result = a3[6];
    v8[9] = result;
  }
  else
  {
    do
    {
      v9 = v38 & (v9 + 1);
      v10 = (int *)((char *)v7 + 40 * v9 + 8);
    }
    while ( *v10 != -2 && v9 != v42 );
    v11 = *((uint32_t *)*a1 + 10 * (v37 & v38) + 3) & v38;
    if ( v11 == v42 )
    {
      *v10 = v36;
      *((uint32_t *)v7 + 10 * v9 + 3) = v8[1];
      *((uint32_t *)v7 + 10 * v9 + 4) = v8[2];
      *((uint32_t *)v7 + 10 * v9 + 5) = v8[3];
      *((uint32_t *)v7 + 10 * v9 + 6) = v8[4];
      *((uint32_t *)v7 + 10 * v9 + 7) = v8[5];
      *((uint32_t *)v7 + 10 * v9 + 8) = v8[6];
      *((uint32_t *)v7 + 10 * v9 + 9) = v8[7];
      *((uint32_t *)v7 + 10 * v9 + 10) = v8[8];
      *((uint32_t *)v7 + 10 * v9 + 11) = v8[9];
      v8[2] = *(uint32_t *)a2;
      v8[3] = *a3;
      v8[4] = a3[1];
      v8[5] = a3[2];
      v8[6] = a3[3];
      v8[7] = a3[4];
      v8[8] = a3[5];
      v23 = *((uint8_t *)a3 + 24);
      *v8 = v9;
      *((uint8_t *)v8 + 36) = v23;
      v8[1] = v37;
      return v37;
    }
    else
    {
      v35 = (uint32_t *)((char *)*a1 + 40 * (v37 & v38) + 8);
      v39 = v9;
      do
      {
        v12 = (int *)((char *)v7 + 40 * v11 + 8);
        v11 = *v12;
      }
      while ( *v12 != v42 );
      *v10 = v36;
      v10[1] = v35[1];
      v10[2] = v35[2];
      v10[3] = v35[3];
      v10[4] = v35[4];
      v10[5] = v35[5];
      v10[6] = v35[6];
      v10[7] = v35[7];
      v10[8] = v35[8];
      v10[9] = v35[9];
      *v12 = v39;
      v35[2] = *(uint32_t *)a2;
      v35[3] = *a3;
      v35[4] = a3[1];
      v35[5] = a3[2];
      v35[6] = a3[3];
      v35[7] = a3[4];
      v35[8] = a3[5];
      v14 = *((uint8_t *)a3 + 24);
      v35[1] = v37;
      *((uint8_t *)v35 + 36) = v14;
      *v35 = -1;
      return v37;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_TextureCache_key_883d29::add  (binary VA: 0x109aa10)
// Original: gameswf::hash<gameswf::TextureCache::key,gameswf::TextureCache::region *,gameswf::fixed_size_hash<gameswf::TextureCache::key>>::add
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_TextureCache_key_883d29::add(gameswf::Self **a1, int *a2, int *a3)
{
  int *v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  int v7;
  int result;
  int *v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  gameswf::Self *v17;
  int v18;
  int j;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  gameswf::Self **v24;
  gameswf::Self *v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int i;
  uint32_t *v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef gameswf::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t _g4_t_v43[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v32)) > _g4_s0 ? (4u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v33)) > _g4_s1 ? (4u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v34)) > _g4_s2 ? (12u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v35)) > _g4_s3 ? (16u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v36)) > _g4_s4 ? (20u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v37)) > _g4_s5 ? (20u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v38)) > _g4_s6 ? (24u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v39)) > _g4_s7 ? (24u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v40)) > _g4_s8 ? (24u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v41)) > _g4_s9 ? (24u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v42)) > _g4_s10 ? (28u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v43)) > _g4_s11 ? (32u + sizeof(_g4_t_v43)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);

  v3 = a2;
  v4 = *a1;
  if ( *a1 != nullptr )
  {
    v5 = *(uint32_t *)v4;
    v36 = *((uint32_t *)v4 + 1);
    v6 = 2 * (v36 + 1);
    if ( 3 * *(uint32_t *)v4 > v6 )
    {
      if ( v6 <= 0 )
      {
        if ( v36 >= 0 )
        {
          v29 = 8;
          for ( i = 0; i <= v36; ++i )
          {
            v31 = (uint32_t *)((char *)v4 + v29);
            if ( *(uint32_t *)((char *)v4 + v29) != -2 )
            {
              *v31 = -2;
              v31[1] = 0;
              v4 = *a1;
            }
            v29 += 28;
          }
          v3 = a2;
        }
        gameswf::free_internal(v4);
        v4 = nullptr;
        *a1 = nullptr;
        v5 = 1179403647;
      }
      else
      {
        v13 = 1;
        if ( v6 == 1 )
        {
          LOWORD(v13) = 4;
        }
        else
        {
          do
            v13 *= 2;
          while ( v6 > v13 );
          if ( v13 <= 3 )
            v13 = 4;
        }
        if ( v36 + 1 != v13 )
        {
          v43[0] = gameswf::malloc_internal(28 * v13 + 8);
          *(uint32_t *)v43[0] = 0;
          v14 = v43[0];
          v15 = 8;
          *(uint32_t *)(v43[0] + 4) = v13 - 1;
          v16 = 0;
          while ( 1 )
          {
            ++v16;
            *(uint32_t *)(v14 + v15) = -2;
            v15 += 28;
            if ( v13 <= v16 )
              break;
            v14 = v43[0];
          }
          v17 = *a1;
          if ( *a1 != nullptr )
          {
            v40 = *((uint32_t *)v17 + 1);
            if ( v40 >= 0 )
            {
              v18 = 8;
              for ( j = 0; j <= v40; ++j )
              {
                v20 = (uint32_t *)((char *)v17 + v18);
                if ( *(uint32_t *)((char *)v17 + v18) != -2 )
                {
                  v32 = v18;
                  gameswf::hash_gameswf_TextureCache_key_883d29::add(
                    v43,
                    v20 + 2,
                    v20 + 6);
                  *v20 = -2;
                  v20[1] = 0;
                  v18 = v32;
                  v17 = *a1;
                }
                v18 += 28;
              }
              v3 = a2;
            }
            gameswf::free_internal(v17);
          }
          v4 = (gameswf::Self *)v43[0];
          *a1 = (gameswf::Self *)v43[0];
          v43[0] = 0;
          v5 = *(uint32_t *)v4;
        }
      }
    }
  }
  else
  {
    v43[0] = gameswf::malloc_internal(0xE8u);
    *(uint32_t *)v43[0] = 0;
    v21 = v43[0];
    v22 = 8;
    v23 = 0;
    *(uint32_t *)(v43[0] + 4) = 7;
    while ( 1 )
    {
      ++v23;
      *(uint32_t *)(v21 + v22) = -2;
      v22 += 28;
      if ( v23 > 7 )
        break;
      v21 = v43[0];
    }
    v24 = a1;
    v25 = *a1;
    if ( *a1 != nullptr )
    {
      v41 = *((uint32_t *)v25 + 1);
      if ( v41 >= 0 )
      {
        v26 = 0;
        v27 = 8;
        do
        {
          v28 = (uint32_t *)((char *)v25 + v27);
          if ( *(uint32_t *)((char *)v25 + v27) != -2 )
          {
            v33 = v26;
            gameswf::hash_gameswf_TextureCache_key_883d29::add(
              v43,
              v28 + 2,
              v28 + 6);
            *v28 = -2;
            v28[1] = 0;
            v26 = v33;
            v25 = *a1;
          }
          ++v26;
          v27 += 28;
        }
        while ( v41 >= v26 );
        v3 = a2;
      }
      gameswf::free_internal(v25);
      v24 = a1;
    }
    v4 = (gameswf::Self *)v43[0];
    *v24 = (gameswf::Self *)v43[0];
    v43[0] = 0;
    v5 = *(uint32_t *)v4;
  }
  v7 = 16;
  *(uint32_t *)v4 = v5 + 1;
  result = 5381;
  do
  {
    --v7;
    result = *((uint8_t *)v3 + v7) + 65599 * result;
  }
  while ( v7 != 0 );
  v38 = *a1;
  v37 = *((uint32_t *)*a1 + 1);
  v42 = result & v37;
  v9 = (int *)((char *)*a1 + 28 * (result & v37) + 8);
  v34 = *v9;
  if ( *v9 == -2 )
  {
    *v9 = -1;
    v9[1] = result;
    v9[2] = *v3;
    v9[3] = v3[1];
    v9[4] = v3[2];
    v9[5] = v3[3];
    result = *a3;
    v9[6] = *a3;
  }
  else
  {
    v10 = result & v37;
    do
      v10 = v37 & (v10 + 1);
    while ( *((uint32_t *)v38 + 7 * v10 + 2) != -2 && v10 != v42 );
    v35 = (int *)((char *)v38 + 28 * v10 + 8);
    v11 = *((uint32_t *)*a1 + 7 * (result & v37) + 3) & v37;
    if ( v11 == v42 )
    {
      *v35 = v34;
      *((uint32_t *)v38 + 7 * v10 + 3) = v9[1];
      *((uint32_t *)v38 + 7 * v10 + 4) = v9[2];
      *((uint32_t *)v38 + 7 * v10 + 5) = v9[3];
      *((uint32_t *)v38 + 7 * v10 + 6) = v9[4];
      *((uint32_t *)v38 + 7 * v10 + 7) = v9[5];
      *((uint32_t *)v38 + 7 * v10 + 8) = v9[6];
      v9[2] = *v3;
      v9[3] = v3[1];
      v9[4] = v3[2];
      v9[5] = v3[3];
      v9[6] = *a3;
      *v9 = v10;
      v9[1] = result;
    }
    else
    {
      v39 = result;
      do
      {
        v12 = (int *)((char *)*a1 + 28 * v11 + 8);
        v11 = *v12;
      }
      while ( *v12 != v42 );
      *v35 = v34;
      v35[1] = v9[1];
      v35[2] = v9[2];
      v35[3] = v9[3];
      v35[4] = v9[4];
      v35[5] = v9[5];
      v35[6] = v9[6];
      *v12 = v10;
      v9[2] = *v3;
      v9[3] = v3[1];
      v9[4] = v3[2];
      v9[5] = v3[3];
      v9[6] = *a3;
      v9[1] = v39;
      *v9 = -1;
      return v39;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringIPointer_i_a6af4c::clear  (binary VA: 0x10af050)
// Original: gameswf::hash<gameswf::StringIPointer,int,gameswf::string_pointer_hash_functor<gameswf::StringIPointer>>::clear
// ----------------------------------------------------------------------------
void gameswf::hash_gameswf_StringIPointer_i_a6af4c::clear(gameswf::Self **self)
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
// Function: gameswf::hash_gameswf_StringI_gameswf_d8d800::clear  (binary VA: 0x10af0d0)
// Original: gameswf::hash<gameswf::StringI,gameswf::SharedDefEntry,gameswf::stringi_hash_functor<gameswf::StringI>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> * gameswf::hash_gameswf_StringI_gameswf_d8d800::clear(gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **self)
{
  gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *result;
  int v2;
  int v3;
  int i;
  gameswf::RefCounted::Self *v5;
  gameswf::Self **v6;
  int v7;
  int v8;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      v3 = 8;
      for ( i = 0; i <= v2; ++i )
      {
        v6 = (gameswf::Self **)((char *)result + v3);
        if ( *(uint32_t *)((char *)result + v3) != -2 )
        {
          if ( *((uint8_t *)v6 + 8) == 0xFF && (*((uint8_t *)v6 + 27) & 1) != 0 )
          {
            v8 = v2;
            gameswf::free_internal(v6[5]);
            v2 = v8;
          }
          v5 = (gameswf::RefCounted::Self *)(v6[8]);
          if ( v5 != nullptr )
          {
            v7 = v2;
            gameswf::RefCounted::dropRef(v5);
            v2 = v7;
          }
          *v6 = (gameswf::Self *)-2;
          v6[1] = nullptr;
          result = *self;
        }
        v3 += 36;
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_S_307bef::clear  (binary VA: 0x10af1a0)
// Original: gameswf::hash<gameswf::String,gameswf::SharedDefEntry,gameswf::string_hash_functor<gameswf::String>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> * gameswf::hash_gameswf_String_gameswf_S_307bef::clear(gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> **self)
{
  gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *result;
  int v2;
  int v3;
  int i;
  gameswf::RefCounted::Self *v5;
  gameswf::Self **v6;
  int v7;
  int v8;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      v3 = 8;
      for ( i = 0; i <= v2; ++i )
      {
        v6 = (gameswf::Self **)((char *)result + v3);
        if ( *(uint32_t *)((char *)result + v3) != -2 )
        {
          if ( *((uint8_t *)v6 + 8) == 0xFF && (*((uint8_t *)v6 + 27) & 1) != 0 )
          {
            v8 = v2;
            gameswf::free_internal(v6[5]);
            v2 = v8;
          }
          v5 = (gameswf::RefCounted::Self *)(v6[8]);
          if ( v5 != nullptr )
          {
            v7 = v2;
            gameswf::RefCounted::dropRef(v5);
            v2 = v7;
          }
          *v6 = (gameswf::Self *)-2;
          v6[1] = nullptr;
          result = *self;
        }
        v3 += 36;
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_S_307bef::find_index  (binary VA: 0x10af320)
// Original: gameswf::hash<gameswf::String,gameswf::SharedDefEntry,gameswf::string_hash_functor<gameswf::String>>::find_index
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_String_gameswf_S_307bef::find_index(gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *self, const gameswf::String::Self *a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int i;
  const char *s1;
  int v12;
  const char *v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v2 = *(uint32_t *)self;
  if ( *(uint32_t *)self == 0 )
    return -1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v3 = *((char **)a2 + 3);
    v4 = *((uint32_t *)a2 + 1) - 1;
  }
  else
  {
    v3 = (char *)a2 + 1;
    v4 = *(char *)a2 - 1;
  }
  v5 = 5381;
  if ( v4 > 0 )
  {
    do
      v5 = (33 * v5) ^ (uint8_t)v3[--v4];
    while ( v4 != 0 );
  }
  v6 = *(uint32_t *)(v2 + 4);
  v18 = v6 & v5;
  v7 = (uint32_t *)(v2 + 36 * (v6 & v5) + 8);
  if ( *v7 == -2 )
    return -1;
  v8 = *(uint32_t *)(v2 + 36 * (v6 & v5) + 12);
  v9 = v8 & v6;
  if ( v9 != v18 )
    return -1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    while ( 1 )
    {
      if ( v5 == v8 )
      {
        if ( a2 == (const gameswf::String::Self *)(v7 + 2) )
          return v9;
        v14 = (char *)v7 + 9;
        if ( *((uint8_t *)v7 + 8) == 0xFF )
          v14 = (const char *)v7[5];
        v17 = v2;
        v15 = strcmp(v14, *((const char **)a2 + 3));
        v2 = v17;
        if ( v15 == 0 )
          break;
      }
      v9 = *v7;
      if ( *v7 == -1 )
        return v9;
      v7 = (uint32_t *)(v2 + 36 * v9 + 8);
      v8 = *(uint32_t *)(v2 + 36 * v9 + 12);
    }
    return v9;
  }
  else
  {
    for ( i = v7[1]; ; i = *(uint32_t *)(v2 + 36 * v9 + 12) )
    {
      if ( v5 == i )
      {
        if ( a2 == (const gameswf::String::Self *)(v7 + 2) )
          break;
        s1 = (char *)v7 + 9;
        if ( *((uint8_t *)v7 + 8) == 0xFF )
          s1 = (const char *)v7[5];
        v16 = v2;
        v12 = strcmp(s1, (const char *)a2 + 1);
        v2 = v16;
        if ( v12 == 0 )
          break;
      }
      v9 = *v7;
      if ( *v7 == -1 )
        break;
      v7 = (uint32_t *)(v2 + 36 * v9 + 8);
    }
    return v9;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringIPointer_i_a6af4c::set_raw_capacity  (binary VA: 0x10b0a70)
// Original: gameswf::hash<gameswf::StringIPointer,int,gameswf::string_pointer_hash_functor<gameswf::StringIPointer>>::set_raw_capacity
// ----------------------------------------------------------------------------
void gameswf::hash_gameswf_StringIPointer_i_a6af4c::set_raw_capacity(gameswf::Self **self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::Self **v7;
  gameswf::Self *v8;
  int v9;
  uint32_t *v10;
  int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  int *v20;
  uint32_t *v21;
  int v22;
  char *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int *_g4_t_v35;
  typedef uint32_t _g4_t_v36[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v28)) > _g4_s0 ? (4u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v29)) > _g4_s1 ? (8u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v30)) > _g4_s2 ? (12u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v31)) > _g4_s3 ? (12u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v32)) > _g4_s4 ? (16u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v33)) > _g4_s5 ? (20u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v34)) > _g4_s6 ? (24u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v35)) > _g4_s7 ? (28u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v36)) > _g4_s8 ? (32u + sizeof(_g4_t_v36)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);

  if ( a2 <= 0 )
  {
    gameswf::hash_gameswf_StringIPointer_i_a6af4c::clear(self);
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
      v36[0] = gameswf::malloc_internal(16 * v3 + 8);
      *(uint32_t *)v36[0] = 0;
      v4 = v36[0];
      v5 = 8;
      *(uint32_t *)(v36[0] + 4) = v3 - 1;
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        *(uint32_t *)(v4 + v5) = -2;
        v5 += 16;
        if ( v3 <= v6 )
          break;
        v4 = v36[0];
      }
      v7 = self;
      v8 = *self;
      if ( *self != nullptr )
      {
        v28 = *((uint32_t *)v8 + 1);
        if ( v28 >= 0 )
        {
          v32 = 0;
          v9 = 0;
          do
          {
            v34 = (uint32_t *)((char *)v8 + 16 * v9 + 8);
            if ( *v34 != -2 )
            {
              v10 = (uint32_t *)v36[0];
              if ( v36[0] != 0 )
              {
                v11 = *(uint32_t *)v36[0];
                if ( 3 * *(uint32_t *)v36[0] > 2 * *(uint32_t *)(v36[0] + 4) + 2 )
                {
                  gameswf::hash_gameswf_StringIPointer_i_a6af4c::set_raw_capacity(
                    (gameswf::Self **)((gameswf::hash<gameswf::StringIPointer, int, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> *)v36),
                    2 * *(uint32_t *)(v36[0] + 4) + 2);
                  v10 = (uint32_t *)v36[0];
                  v11 = *(uint32_t *)v36[0];
                }
              }
              else
              {
                gameswf::hash_gameswf_StringIPointer_i_a6af4c::set_raw_capacity(
                  (gameswf::Self **)((gameswf::hash<gameswf::StringIPointer, int, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> *)v36),
                  8);
                v10 = (uint32_t *)v36[0];
                v11 = *(uint32_t *)v36[0];
              }
              *v10 = v11 + 1;
              v12 = (char *)v34[2];
              v30 = *((uint32_t *)v12 + 4);
              if ( (uint8_t *)(v30 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
              {
                if ( *v12 == -1 )
                {
                  v23 = *((char **)v12 + 3);
                  v22 = *((uint32_t *)v12 + 1) - 1;
                }
                else
                {
                  v22 = *v12 - 1;
                  v23 = v12 + 1;
                }
                v29 = 5381;
                v24 = 5381;
                if ( v22 > 0 )
                {
                  do
                  {
                    --v22;
                    v25 = 33 * v24;
                    v26 = (uint8_t)v23[v22] + 32;
                    if ( (uint8_t)(v23[v22] - 65) > 0x19u )
                      v26 = (uint8_t)v23[v22];
                    v24 = v25 ^ v26;
                  }
                  while ( v22 != 0 );
                  v24 = v24 << 9 >> 9;
                  v29 = v24;
                }
                *((uint32_t *)v12 + 4) = v24 & 0x7FFFFF | v30 & 0xFF800000;
                v13 = v29;
              }
              else
              {
                v29 = v30 << 9 >> 9;
                v13 = v29;
              }
              v14 = *(uint32_t *)(v36[0] + 4);
              v33 = v14 & v13;
              v35 = (int *)(v36[0] + 16 * (v14 & v13) + 8);
              v15 = v14 & v13;
              v31 = *v35;
              if ( *v35 == -2 )
              {
                v21 = v34;
                *v35 = -1;
                v35[1] = v29;
                v35[2] = v34[2];
                v35[3] = v34[3];
              }
              else
              {
                v16 = v15;
                while ( 1 )
                {
                  v15 = v14 & (v15 + 1);
                  v17 = (int *)(v36[0] + 16 * v15 + 8);
                  if ( *v17 == -2 )
                    break;
                  if ( v16 == v15 )
                  {
                    v15 = v33;
                    break;
                  }
                }
                v18 = v35[1] & v14;
                if ( v33 == v18 )
                {
                  *v17 = v31;
                  v17[1] = v35[1];
                  v17[2] = v35[2];
                  v17[3] = v35[3];
                  v35[2] = v34[2];
                  v27 = v34[3];
                  *v35 = v15;
                  v35[3] = v27;
                  v35[1] = v29;
                  v21 = v34;
                }
                else
                {
                  v19 = v18;
                  do
                  {
                    v20 = (int *)(v36[0] + 16 * v19 + 8);
                    v19 = *v20;
                  }
                  while ( v33 != *v20 );
                  *v17 = v31;
                  v17[1] = v35[1];
                  v17[2] = v35[2];
                  v17[3] = v35[3];
                  v21 = v34;
                  *v20 = v15;
                  v35[2] = v34[2];
                  v35[3] = v34[3];
                  v35[1] = v29;
                  *v35 = -1;
                }
              }
              *v21 = -2;
              v21[1] = 0;
              v8 = *self;
            }
            v9 = ++v32;
          }
          while ( v28 >= v32 );
        }
        gameswf::free_internal(v8);
        v7 = self;
      }
      *v7 = (gameswf::Self *)v36[0];
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringIPointer_i_a6af4c::add  (binary VA: 0x10b0e10)
// Original: gameswf::hash<gameswf::StringIPointer,int,gameswf::string_pointer_hash_functor<gameswf::StringIPointer>>::add
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_StringIPointer_i_a6af4c::add(gameswf::Self **a1, char **a2, int *a3)
{
  gameswf::Self *v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  gameswf::Self *v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int *v15;
  int result;
  int v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    v5 = 2 * *((uint32_t *)v3 + 1) + 2;
    if ( 3 * *(uint32_t *)v3 > v5 )
    {
      gameswf::hash_gameswf_StringIPointer_i_a6af4c::set_raw_capacity(
        a1,
        v5);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_gameswf_StringIPointer_i_a6af4c::set_raw_capacity(
      a1,
      8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  v6 = *a2;
  v26 = *((uint32_t *)*a2 + 4);
  if ( (uint8_t *)(v26 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v6 == -1 )
    {
      v18 = *((char **)v6 + 3);
      v17 = *((uint32_t *)v6 + 1) - 1;
    }
    else
    {
      v17 = *v6 - 1;
      v18 = v6 + 1;
    }
    v25 = 5381;
    v19 = 5381;
    if ( v17 > 0 )
    {
      do
      {
        --v17;
        v20 = 33 * v19;
        v21 = (uint8_t)v18[v17] + 32;
        if ( (uint8_t)(v18[v17] - 65) > 0x19u )
          v21 = (uint8_t)v18[v17];
        v19 = v20 ^ v21;
      }
      while ( v17 != 0 );
      v19 = v19 << 9 >> 9;
      v25 = v19;
    }
    *((uint32_t *)*a2 + 4) = v19 & 0x7FFFFF | v26 & 0xFF800000;
    v7 = v25;
  }
  else
  {
    v25 = v26 << 9 >> 9;
    v7 = v25;
  }
  v8 = *a1;
  v9 = *((uint32_t *)*a1 + 1);
  v23 = v9 & v7;
  v10 = (int *)((char *)*a1 + 16 * (v9 & v7) + 8);
  v24 = *v10;
  v11 = v9 & v7;
  v12 = v11;
  if ( *v10 == -2 )
  {
    v10[1] = v25;
    *v10 = -1;
    v10[2] = (int)(uintptr_t)(*a2);
    result = *a3;
    v10[3] = *a3;
  }
  else
  {
    do
    {
      v11 = v9 & (v11 + 1);
      v13 = (int *)((char *)v8 + 16 * v11 + 8);
    }
    while ( *v13 != -2 && v11 != v12 );
    v14 = v10[1] & v9;
    if ( v14 == v23 )
    {
      *v13 = v24;
      *((uint32_t *)v8 + 4 * v11 + 3) = v10[1];
      *((uint32_t *)v8 + 4 * v11 + 4) = v10[2];
      *((uint32_t *)v8 + 4 * v11 + 5) = v10[3];
      v10[2] = (int)(uintptr_t)(*a2);
      v22 = *a3;
      *v10 = v11;
      v10[3] = v22;
      v10[1] = v25;
      return v25;
    }
    else
    {
      do
      {
        v15 = (int *)((char *)v8 + 16 * v14 + 8);
        v14 = *v15;
      }
      while ( *v15 != v23 );
      *v13 = v24;
      *((uint32_t *)v8 + 4 * v11 + 3) = v10[1];
      *((uint32_t *)v8 + 4 * v11 + 4) = v10[2];
      *((uint32_t *)v8 + 4 * v11 + 5) = v10[3];
      *v15 = v11;
      v10[2] = (int)(uintptr_t)(*a2);
      result = *a3;
      v10[1] = v25;
      v10[3] = result;
      *v10 = -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_d8d800::set_raw_capacity  (binary VA: 0x10b1070)
// Original: gameswf::hash<gameswf::StringI,gameswf::SharedDefEntry,gameswf::stringi_hash_functor<gameswf::StringI>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> * gameswf::hash_gameswf_StringI_gameswf_d8d800::set_raw_capacity(gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *result;
  gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v8;
  int v9;
  int i;
  gameswf::RefCounted::Self *v11;
  gameswf::Self **v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *_g4_t_v16;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_gameswf_StringI_gameswf_d8d800::clear(self);
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
  if ( *self == nullptr
    || (result = (gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v3 )
  {
    v16 = (gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)gameswf::malloc_internal(36 * v3 + 8);
    *(uint32_t *)v16 = 0;
    v5 = v16;
    v6 = 8;
    *((uint32_t *)v16 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 36;
      if ( v3 <= v7 )
        break;
      v5 = v16;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v15 = *((uint32_t *)v8 + 1);
      if ( v15 >= 0 )
      {
        v9 = 8;
        for ( i = 0; i <= v15; ++i )
        {
          v12 = (gameswf::Self **)((char *)v8 + v9);
          if ( *(uint32_t *)((char *)v8 + v9) != -2 )
          {
            v14 = v9;
            gameswf::hash_gameswf_StringI_gameswf_d8d800::add(
              (gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&v16,
              (gameswf::String::Self *)(v12 + 2),
              (int)(uintptr_t)(v12 + 7));
            v9 = v14;
            if ( *((uint8_t *)v12 + 8) == 0xFF && (*((uint8_t *)v12 + 27) & 1) != 0 )
            {
              gameswf::free_internal(v12[5]);
              v9 = v14;
            }
            v11 = (gameswf::RefCounted::Self *)(v12[8]);
            if ( v11 != nullptr )
            {
              v13 = v9;
              gameswf::RefCounted::dropRef(v11);
              v9 = v13;
            }
            *v12 = (gameswf::Self *)-2;
            v12[1] = nullptr;
            v8 = *self;
          }
          v9 += 36;
        }
      }
      gameswf::free_internal(v8);
    }
    result = v16;
    *self = v16;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_d8d800::add  (binary VA: 0x10b1220)
// Original: gameswf::hash<gameswf::StringI,gameswf::SharedDefEntry,gameswf::stringi_hash_functor<gameswf::StringI>>::add
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::hash_gameswf_StringI_gameswf_d8d800::add(gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **a1, gameswf::String::Self *a2, uint32_t *a3)
{
  gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v3;
  int v4;
  gameswf::String::Self *v5;
  int v6;
  gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v7;
  int v8;
  int v9;
  int v10;
  gameswf::String::Self **v11;
  int v12;
  int *v13;
  gameswf::RefCounted::Self *v14;
  gameswf::RefCounted::Self *v15;
  gameswf::RefCounted::Self *v16;
  gameswf::RefCounted::Self *result;
  int v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  gameswf::RefCounted::Self *v23;
  gameswf::RefCounted::Self *v24;
  gameswf::RefCounted::Self *v25;
  gameswf::String::Self *v26;
  gameswf::String::Self *v27;
  int v28;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_gameswf_StringI_gameswf_d8d800::set_raw_capacity(
        a1,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_gameswf_StringI_gameswf_d8d800::set_raw_capacity(
      a1,
      8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  v5 = *((gameswf::String::Self **)a2 + 4);
  v26 = v5;
  if ( (uint8_t *)((unsigned int)(uintptr_t)(v5) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v19 = *((char **)a2 + 3);
      v18 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v18 = *(char *)a2 - 1;
      v19 = (char *)a2 + 1;
    }
    v28 = 5381;
    v20 = 5381;
    if ( v18 > 0 )
    {
      do
      {
        --v18;
        v21 = 33 * v20;
        v22 = (uint8_t)v19[v18] + 32;
        if ( (uint8_t)(v19[v18] - 65) > 0x19u )
          v22 = (uint8_t)v19[v18];
        v20 = v21 ^ v22;
      }
      while ( v18 != 0 );
      v20 = v20 << 9 >> 9;
      v28 = v20;
    }
    *((uint32_t *)a2 + 4) = v20 & 0x7FFFFF | (unsigned int)(uintptr_t)(v26) & 0xFF800000;
    v6 = v28;
  }
  else
  {
    v28 = (int)((uint32_t)(uintptr_t)(v5) << 9) >> 9;
    v6 = v28;
  }
  v7 = *a1;
  v8 = *((uint32_t *)*a1 + 1);
  v9 = v8 & v6;
  v25 = (gameswf::RefCounted::Self *)((gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((char *)*a1 + 36 * v9 + 8));
  v27 = *(gameswf::String::Self **)v25;
  v10 = v9;
  if ( *(uint32_t *)v25 == -2 )
  {
    *((uint32_t *)*a1 + 9 * v9 + 3) = v28;
    *(uint32_t *)v25 = -1;
    sub_7763C0((gameswf::RefCounted::Self *)((char *)v25 + 8), (char *)a2);
    *((uint32_t *)v25 + 7) = *a3;
    result = (gameswf::RefCounted::Self *)a3[1];
    *((uint32_t *)v25 + 8) = (uint32_t)(uintptr_t)(result);
    if ( result != nullptr )
      return gameswf::RefCounted::addRef(result);
  }
  else
  {
    do
    {
      v10 = v8 & (v10 + 1);
      v11 = (gameswf::String::Self **)((char *)v7 + 36 * v10 + 8);
    }
    while ( *v11 != (gameswf::String::Self *)-2 && v10 != v9 );
    v12 = *((uint32_t *)*a1 + 9 * v9 + 3) & v8;
    if ( v12 == v9 )
    {
      *v11 = v27;
      *((uint32_t *)v7 + 9 * v10 + 3) = *((uint32_t *)v25 + 1);
      sub_7763C0(
        (gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((char *)v7 + 36 * v10 + 16),
        (char *)v25 + 8);
      v11[7] = *((gameswf::String::Self **)v25 + 7);
      v23 = *((gameswf::RefCounted::Self **)v25 + 8);
      v11[8] = (gameswf::String::Self *)(v23);
      if ( v23 != nullptr )
        gameswf::RefCounted::addRef(v23);
      gameswf::String::opAssign((gameswf::Self **)v25 + 2, (gameswf::Self **)a2);
      *((uint32_t *)v25 + 7) = *a3;
      result = *((gameswf::RefCounted::Self **)v25 + 8);
      v24 = (gameswf::RefCounted::Self *)a3[1];
      if ( v24 != result )
      {
        if ( result != nullptr )
          gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v25 + 8));
        result = v25;
        *((uint32_t *)v25 + 8) = (uint32_t)(uintptr_t)(v24);
        if ( v24 != nullptr )
          result = gameswf::RefCounted::addRef(v24);
      }
      *(uint32_t *)v25 = v10;
      *((uint32_t *)v25 + 1) = v28;
    }
    else
    {
      do
      {
        v13 = (int *)((char *)v7 + 36 * v12 + 8);
        v12 = *v13;
      }
      while ( *v13 != v9 );
      *v11 = v27;
      *((uint32_t *)v7 + 9 * v10 + 3) = *((uint32_t *)v25 + 1);
      sub_7763C0(
        (gameswf::hash<gameswf::StringI::Self, gameswf::SharedDefEntry, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((char *)v7 + 36 * v10 + 16),
        (char *)v25 + 8);
      v11[7] = *((gameswf::String::Self **)v25 + 7);
      v14 = *((gameswf::RefCounted::Self **)v25 + 8);
      v11[8] = (gameswf::String::Self *)(v14);
      if ( v14 != nullptr )
        gameswf::RefCounted::addRef(v14);
      *v13 = v10;
      gameswf::String::opAssign((gameswf::Self **)v25 + 2, (gameswf::Self **)a2);
      *((uint32_t *)v25 + 7) = *a3;
      v15 = *((gameswf::RefCounted::Self **)v25 + 8);
      v16 = (gameswf::RefCounted::Self *)a3[1];
      if ( v16 != v15 )
      {
        if ( v15 != nullptr )
          gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v25 + 8));
        *((uint32_t *)v25 + 8) = (uint32_t)(uintptr_t)(v16);
        if ( v16 != nullptr )
          gameswf::RefCounted::addRef(v16);
      }
      result = v25;
      *((uint32_t *)v25 + 1) = v28;
      *(uint32_t *)v25 = -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_S_307bef::set_raw_capacity  (binary VA: 0x10b1560)
// Original: gameswf::hash<gameswf::String,gameswf::SharedDefEntry,gameswf::string_hash_functor<gameswf::String>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> * gameswf::hash_gameswf_String_gameswf_S_307bef::set_raw_capacity(gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *result;
  gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *v8;
  int v9;
  int i;
  gameswf::RefCounted::Self *v11;
  gameswf::Self **v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *_g4_t_v16;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_gameswf_String_gameswf_S_307bef::clear(self);
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
  if ( *self == nullptr
    || (result = (gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *)v3 )
  {
    v16 = (gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *)gameswf::malloc_internal(36 * v3 + 8);
    *(uint32_t *)v16 = 0;
    v5 = v16;
    v6 = 8;
    *((uint32_t *)v16 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 36;
      if ( v3 <= v7 )
        break;
      v5 = v16;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v15 = *((uint32_t *)v8 + 1);
      if ( v15 >= 0 )
      {
        v9 = 8;
        for ( i = 0; i <= v15; ++i )
        {
          v12 = (gameswf::Self **)((char *)v8 + v9);
          if ( *(uint32_t *)((char *)v8 + v9) != -2 )
          {
            v14 = v9;
            gameswf::hash_gameswf_String_gameswf_S_307bef::add(
              (gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *)&v16,
              (gameswf::String::Self *)(v12 + 2),
              (int)(uintptr_t)(v12 + 7));
            v9 = v14;
            if ( *((uint8_t *)v12 + 8) == 0xFF && (*((uint8_t *)v12 + 27) & 1) != 0 )
            {
              gameswf::free_internal(v12[5]);
              v9 = v14;
            }
            v11 = (gameswf::RefCounted::Self *)(v12[8]);
            if ( v11 != nullptr )
            {
              v13 = v9;
              gameswf::RefCounted::dropRef(v11);
              v9 = v13;
            }
            *v12 = (gameswf::Self *)-2;
            v12[1] = nullptr;
            v8 = *self;
          }
          v9 += 36;
        }
      }
      gameswf::free_internal(v8);
    }
    result = v16;
    *self = v16;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_S_307bef::add  (binary VA: 0x10b1710)
// Original: gameswf::hash<gameswf::String,gameswf::SharedDefEntry,gameswf::string_hash_functor<gameswf::String>>::add
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::hash_gameswf_String_gameswf_S_307bef::add(gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> **a1, gameswf::String::Self *a2, uint32_t *a3)
{
  gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  int *v14;
  gameswf::RefCounted::Self *v15;
  gameswf::RefCounted::Self *result;
  gameswf::RefCounted::Self *v17;
  gameswf::RefCounted::Self *v18;
  gameswf::RefCounted::Self *v19;
  int v20;
  int v21;
  gameswf::RefCounted::Self *v22;
  gameswf::String::Self *v23;
  int v24;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_gameswf_String_gameswf_S_307bef::set_raw_capacity(
        a1,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_gameswf_String_gameswf_S_307bef::set_raw_capacity(
      a1,
      8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v6 = *((char **)a2 + 3);
    v5 = *((uint32_t *)a2 + 1) - 1;
  }
  else
  {
    v5 = *(char *)a2 - 1;
    v6 = (char *)a2 + 1;
  }
  v7 = 5381;
  if ( v5 > 0 )
  {
    do
      v7 = (33 * v7) ^ (uint8_t)v6[--v5];
    while ( v5 != 0 );
  }
  v8 = *a1;
  v9 = *((uint32_t *)*a1 + 1);
  v23 = (gameswf::String::Self *)(v9 & v7);
  v10 = v9 & v7;
  v22 = (gameswf::RefCounted::Self *)((gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)*a1 + 36 * (v9 & v7) + 8));
  v24 = *(uint32_t *)v22;
  if ( *(uint32_t *)v22 == -2 )
  {
    *(uint32_t *)v22 = -1;
    *((uint32_t *)v22 + 1) = v7;
    sub_7763C0((gameswf::RefCounted::Self *)((char *)v22 + 8), (char *)a2);
    *((uint32_t *)v22 + 7) = *a3;
    result = (gameswf::RefCounted::Self *)a3[1];
    *((uint32_t *)v22 + 8) = (uint32_t)(uintptr_t)(result);
    if ( result != nullptr )
      return gameswf::RefCounted::addRef(result);
  }
  else
  {
    do
    {
      v10 = v9 & (v10 + 1);
      v11 = (uint32_t *)((char *)v8 + 36 * v10 + 8);
    }
    while ( *v11 != -2 && v10 != (v9 & v7) );
    v12 = *((uint32_t *)*a1 + 9 * (v9 & v7) + 3) & v9;
    if ( (gameswf::String::Self *)v12 == v23 )
    {
      *v11 = v24;
      *((uint32_t *)v8 + 9 * v10 + 3) = *((uint32_t *)v22 + 1);
      v21 = (int)(uintptr_t)(v8) + 36 * v10 + 8;
      sub_7763C0(
        (gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)v8 + 36 * v10 + 16),
        (char *)v22 + 8);
      *(uint32_t *)(v21 + 28) = *((uint32_t *)v22 + 7);
      v18 = *((gameswf::RefCounted::Self **)v22 + 8);
      *(uint32_t *)(v21 + 32) = (uint32_t)(uintptr_t)(v18);
      if ( v18 != nullptr )
        gameswf::RefCounted::addRef(v18);
      gameswf::String::opAssign((gameswf::Self **)v22 + 2, (gameswf::Self **)a2);
      *((uint32_t *)v22 + 7) = *a3;
      result = *((gameswf::RefCounted::Self **)v22 + 8);
      v19 = (gameswf::RefCounted::Self *)a3[1];
      if ( v19 != result )
      {
        if ( result != nullptr )
          gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v22 + 8));
        result = v22;
        *((uint32_t *)v22 + 8) = (uint32_t)(uintptr_t)(v19);
        if ( v19 != nullptr )
          result = gameswf::RefCounted::addRef(v19);
      }
      *(uint32_t *)v22 = v10;
      *((uint32_t *)v22 + 1) = v7;
    }
    else
    {
      v13 = v12;
      do
      {
        v14 = (int *)((char *)v8 + 36 * v13 + 8);
        v13 = *v14;
      }
      while ( (gameswf::String::Self *)*v14 != v23 );
      *v11 = v24;
      *((uint32_t *)v8 + 9 * v10 + 3) = *((uint32_t *)v22 + 1);
      v20 = (int)(uintptr_t)(v8) + 36 * v10 + 8;
      sub_7763C0(
        (gameswf::hash<gameswf::String::Self, gameswf::SharedDefEntry, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)v8 + 36 * v10 + 16),
        (char *)v22 + 8);
      *(uint32_t *)(v20 + 28) = *((uint32_t *)v22 + 7);
      v15 = *((gameswf::RefCounted::Self **)v22 + 8);
      *(uint32_t *)(v20 + 32) = (uint32_t)(uintptr_t)(v15);
      if ( v15 != nullptr )
        gameswf::RefCounted::addRef(v15);
      *v14 = v10;
      gameswf::String::opAssign((gameswf::Self **)v22 + 2, (gameswf::Self **)a2);
      *((uint32_t *)v22 + 7) = *a3;
      result = *((gameswf::RefCounted::Self **)v22 + 8);
      v17 = (gameswf::RefCounted::Self *)a3[1];
      if ( v17 != result )
      {
        if ( result != nullptr )
          gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v22 + 8));
        result = v22;
        *((uint32_t *)v22 + 8) = (uint32_t)(uintptr_t)(v17);
        if ( v17 != nullptr )
          result = gameswf::RefCounted::addRef(v17);
      }
      *((uint32_t *)v22 + 1) = v7;
      *(uint32_t *)v22 = -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringIPointer_g_5eef2f::add  (binary VA: 0x10b4df0)
// Original: gameswf::hash<gameswf::StringIPointer,gameswf::ASValue,gameswf::string_pointer_hash_functor<gameswf::StringIPointer>>::add
// ----------------------------------------------------------------------------
int * gameswf::hash_gameswf_StringIPointer_g_5eef2f::add(gameswf::Self **a1, char **a2, gameswf::ASValue::Self *a3)
{
  gameswf::Self *v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  gameswf::Self *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  int *v17;
  int v19;
  char *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  gameswf::Self *v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  uint32_t *v38;
  int v39;
  int v40;
  uint32_t *v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v42)) > _g4_s0 ? (4u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v43)) > _g4_s1 ? (4u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v44)) > _g4_s2 ? (8u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v45)) > _g4_s3 ? (12u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v46)) > _g4_s4 ? (16u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v47)) > _g4_s5 ? (20u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v48)) > _g4_s6 ? (24u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v49)) > _g4_s7 ? (28u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v50)) > _g4_s8 ? (28u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v51)) > _g4_s9 ? (28u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v52)) > _g4_s10 ? (28u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v53)) > _g4_s11 ? (28u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v54)) > _g4_s12 ? (32u + sizeof(_g4_t_v54)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);

  v3 = *a1;
  if ( *a1 == nullptr )
  {
    v54[0] = gameswf::malloc_internal(0xC8u);
    *(uint32_t *)v54[0] = 0;
    v33 = v54[0];
    v34 = 8;
    v35 = 0;
    *(uint32_t *)(v54[0] + 4) = 7;
    while ( 1 )
    {
      ++v35;
      *(uint32_t *)(v33 + v34) = -2;
      v34 += 24;
      if ( v35 > 7 )
        break;
      v33 = v54[0];
    }
    v28 = *a1;
    if ( *a1 == nullptr )
      goto LABEL_37;
    if ( *((int *)v28 + 1) >= 0 )
    {
      v36 = 8;
      v37 = 0;
      v52 = *((uint32_t *)v28 + 1);
      do
      {
        v38 = (uint32_t *)((char *)v28 + v36);
        if ( *(uint32_t *)((char *)v28 + v36) != -2 )
        {
          v43 = v36;
          gameswf::hash_gameswf_StringIPointer_g_5eef2f::add(
            (int)(uintptr_t)(v54),
            (int)(uintptr_t)(v38 + 2),
            (gameswf::ASValue::Self *)(v38 + 3));
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v38 + 3));
          *v38 = -2;
          v38[1] = 0;
          v36 = v43;
          v28 = *a1;
        }
        ++v37;
        v36 += 24;
      }
      while ( v52 >= v37 );
    }
    goto LABEL_36;
  }
  v4 = *(uint32_t *)v3;
  v5 = *((uint32_t *)v3 + 1);
  v49 = v5 + 1;
  v6 = 2 * (v5 + 1);
  if ( 3 * *(uint32_t *)v3 <= v6 )
    goto LABEL_3;
  if ( v6 <= 0 )
  {
    if ( v5 >= 0 )
    {
      v53 = *((uint32_t *)v3 + 1);
      v39 = 0;
      v40 = 8;
      do
      {
        v41 = (uint32_t *)((char *)v3 + v40);
        if ( *(uint32_t *)((char *)v3 + v40) != -2 )
        {
          v44 = v39;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v41 + 3));
          *v41 = -2;
          v41[1] = 0;
          v39 = v44;
          v3 = *a1;
        }
        ++v39;
        v40 += 24;
      }
      while ( v53 >= v39 );
    }
    gameswf::free_internal(v3);
    v3 = nullptr;
    *a1 = nullptr;
    v4 = 1179403647;
  }
  else
  {
    v24 = 1;
    if ( v6 == 1 )
    {
      LOWORD(v24) = 4;
    }
    else
    {
      do
        v24 *= 2;
      while ( v6 > v24 );
      if ( v24 <= 3 )
        v24 = 4;
    }
    if ( v49 != v24 )
    {
      v54[0] = gameswf::malloc_internal(24 * v24 + 8);
      *(uint32_t *)v54[0] = 0;
      v25 = v54[0];
      v26 = 8;
      *(uint32_t *)(v54[0] + 4) = v24 - 1;
      v27 = 0;
      while ( 1 )
      {
        ++v27;
        *(uint32_t *)(v25 + v26) = -2;
        v26 += 24;
        if ( v24 <= v27 )
          break;
        v25 = v54[0];
      }
      v28 = *a1;
      if ( *a1 == nullptr )
        goto LABEL_37;
      if ( *((int *)v28 + 1) >= 0 )
      {
        v29 = 8;
        v30 = 0;
        v51 = *((uint32_t *)v28 + 1);
        do
        {
          v31 = (uint32_t *)((char *)v28 + v29);
          if ( *(uint32_t *)((char *)v28 + v29) != -2 )
          {
            v42 = v29;
            gameswf::hash_gameswf_StringIPointer_g_5eef2f::add(
              (int)(uintptr_t)(v54),
              (int)(uintptr_t)(v31 + 2),
              (gameswf::ASValue::Self *)(v31 + 3));
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v31 + 3));
            *v31 = -2;
            v31[1] = 0;
            v29 = v42;
            v28 = *a1;
          }
          ++v30;
          v29 += 24;
        }
        while ( v51 >= v30 );
      }
LABEL_36:
      gameswf::free_internal(v28);
LABEL_37:
      v3 = (gameswf::Self *)v54[0];
      *a1 = (gameswf::Self *)v54[0];
      v54[0] = 0;
      v4 = *(uint32_t *)v3;
    }
  }
LABEL_3:
  *(uint32_t *)v3 = v4 + 1;
  v7 = *a2;
  v45 = *((uint32_t *)*a2 + 4);
  if ( (uint8_t *)(v45 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v7 == -1 )
    {
      v20 = *((char **)v7 + 3);
      v19 = *((uint32_t *)v7 + 1) - 1;
    }
    else
    {
      v19 = *v7 - 1;
      v20 = v7 + 1;
    }
    v46 = 5381;
    v21 = 5381;
    if ( v19 > 0 )
    {
      do
      {
        --v19;
        v22 = 33 * v21;
        v23 = (uint8_t)v20[v19] + 32;
        if ( (uint8_t)(v20[v19] - 65) > 0x19u )
          v23 = (uint8_t)v20[v19];
        v21 = v22 ^ v23;
      }
      while ( v19 != 0 );
      v21 = v21 << 9 >> 9;
      v46 = v21;
    }
    *((uint32_t *)*a2 + 4) = v21 & 0x7FFFFF | v45 & 0xFF800000;
    v8 = v46;
  }
  else
  {
    v46 = v45 << 9 >> 9;
    v8 = v46;
  }
  v9 = *a1;
  v10 = *((uint32_t *)*a1 + 1);
  v48 = v10 & v8;
  v11 = v10 & v8;
  v12 = (int)(uintptr_t)(*a1) + 24 * (v10 & v8) + 8;
  v50 = (int *)v12;
  v47 = *(uint32_t *)v12;
  if ( *(uint32_t *)v12 == -2 )
  {
    *(uint32_t *)(v12 + 4) = v46;
    *(uint32_t *)v12 = -1;
    *(uint32_t *)(v12 + 8) = (uint32_t)(uintptr_t)(*a2);
    *(uint8_t *)(v12 + 12) = 0;
    *(uint8_t *)(v12 + 13) = 0;
    return (int *)gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v12 + 12), a3);
  }
  else
  {
    v13 = v11;
    do
    {
      v11 = v10 & (v11 + 1);
      v14 = (uint32_t *)((char *)v9 + 24 * v11 + 8);
    }
    while ( *v14 != -2 && v11 != v13 );
    v15 = v50[1] & v10;
    if ( v15 == v48 )
    {
      *v14 = v47;
      *((uint32_t *)v9 + 6 * v11 + 3) = v50[1];
      v32 = v50[2];
      *((uint8_t *)v9 + 24 * v11 + 20) = 0;
      *((uint32_t *)v9 + 6 * v11 + 4) = v32;
      *((uint8_t *)v9 + 24 * v11 + 21) = 0;
      gameswf::ASValue::opAssign((gameswf::Self *)((char *)v9 + 24 * v11 + 20), (const gameswf::ASValue::Self *)(v50 + 3));
      v50[2] = (int)(uintptr_t)(*a2);
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v50 + 3), a3);
      *v50 = v11;
      v50[1] = v46;
      return v50;
    }
    else
    {
      v16 = v15;
      do
      {
        v17 = (int *)((char *)v9 + 24 * v16 + 8);
        v16 = *v17;
      }
      while ( *v17 != v48 );
      *v14 = v47;
      *((uint32_t *)v9 + 6 * v11 + 3) = v50[1];
      *((uint32_t *)v9 + 6 * v11 + 4) = v50[2];
      *((uint8_t *)v9 + 24 * v11 + 20) = 0;
      *((uint8_t *)v9 + 24 * v11 + 21) = 0;
      gameswf::ASValue::opAssign((gameswf::Self *)((char *)v9 + 24 * v11 + 20), (const gameswf::ASValue::Self *)(v50 + 3));
      *v17 = v11;
      v50[2] = (int)(uintptr_t)(*a2);
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v50 + 3), a3);
      v50[1] = v46;
      *v50 = -1;
      return (int *)v46;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_a_721d21::clear  (binary VA: 0x10bd570)
// Original: gameswf::hash<gameswf::String,gameswf::as_standard_member,gameswf::string_hash_functor<gameswf::String>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> * gameswf::hash_gameswf_String_gameswf_a_721d21::clear(gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> **self)
{
  gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *result;
  int v2;
  int i;
  uint32_t *v4;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      for ( i = 0; i <= v2; ++i )
      {
        v4 = (uint32_t *)((char *)result + 32 * i + 8);
        if ( *v4 != -2 )
        {
          sub_59CE50((int)(uintptr_t)(result) + 32 * i + 16);
          *v4 = -2;
          v4[1] = 0;
          result = *self;
        }
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_999f64::clear  (binary VA: 0x10bd600)
// Original: gameswf::hash<gameswf::StringI,gameswf::smart_ptr<gameswf::CharacterDef>,gameswf::stringi_hash_functor<gameswf::StringI>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> * gameswf::hash_gameswf_StringI_gameswf_999f64::clear(gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **self)
{
  gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *result;
  int v2;
  int i;
  int v4;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      for ( i = 0; i <= v2; ++i )
      {
        v4 = (int)(uintptr_t)(result) + 32 * i + 8;
        if ( *(uint32_t *)v4 != -2 )
        {
          sub_59CE50((int)(uintptr_t)(result) + 32 * i + 16);
          if ( *(uint32_t *)(v4 + 28) != 0 )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v4 + 28));
          *(uint32_t *)v4 = -2;
          *(uint32_t *)(v4 + 4) = 0;
          result = *self;
        }
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_636a21::clear  (binary VA: 0x10bd6a0)
// Original: gameswf::hash<gameswf::StringI,gameswf::ASValue,gameswf::stringi_hash_functor<gameswf::StringI>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> * gameswf::hash_gameswf_StringI_gameswf_636a21::clear(gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **self)
{
  gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *result;
  int v2;
  int v3;
  int i;
  uint32_t *v5;
  int v6;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      v3 = 8;
      for ( i = 0; i <= v2; ++i )
      {
        v5 = (uint32_t *)((char *)result + v3);
        if ( *(uint32_t *)((char *)result + v3) != -2 )
        {
          v6 = v2;
          sub_59CE50((int)(uintptr_t)(v5 + 2));
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v5 + 7));
          *v5 = -2;
          v5[1] = 0;
          v2 = v6;
          result = *self;
        }
        v3 += 40;
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_a_721d21::set_raw_capacity  (binary VA: 0x10bd740)
// Original: gameswf::hash<gameswf::String,gameswf::as_standard_member,gameswf::string_hash_functor<gameswf::String>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> * gameswf::hash_gameswf_String_gameswf_a_721d21::set_raw_capacity(gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *result;
  gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> **v8;
  gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *v9;
  int v10;
  uint32_t *v11;
  typedef int _g4_t_v12;
  typedef gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_gameswf_String_gameswf_a_721d21::clear(self);
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
  if ( *self == nullptr
    || (result = (gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *)v3 )
  {
    v13 = (gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *)gameswf::malloc_internal(32 * v3 + 8);
    *(uint32_t *)v13 = 0;
    v5 = v13;
    v6 = 8;
    *((uint32_t *)v13 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 32;
      if ( v3 <= v7 )
        break;
      v5 = v13;
    }
    v8 = self;
    v9 = *self;
    if ( *self != nullptr )
    {
      if ( *((int *)v9 + 1) >= 0 )
      {
        v10 = 0;
        v12 = *((uint32_t *)v9 + 1);
        do
        {
          v11 = (uint32_t *)((char *)v9 + 32 * v10 + 8);
          if ( *v11 != -2 )
          {
            gameswf::hash_gameswf_String_gameswf_a_721d21::add(
              (gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *)&v13,
              (gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)v9 + 32 * v10 + 16),
              (int)(uintptr_t)(v9) + 32 * v10 + 36);
            sub_59CE50((int)(uintptr_t)(v11 + 2));
            *v11 = -2;
            v11[1] = 0;
            v9 = *self;
          }
          ++v10;
        }
        while ( v12 >= v10 );
      }
      gameswf::free_internal(v9);
      v8 = self;
    }
    result = v13;
    *v8 = v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_a_721d21::add  (binary VA: 0x10bd8a0)
// Original: gameswf::hash<gameswf::String,gameswf::as_standard_member,gameswf::string_hash_functor<gameswf::String>>::add
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::hash_gameswf_String_gameswf_a_721d21::add(gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> **a1, gameswf::String::Self *a2, int *a3)
{
  gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *v8;
  int v9;
  gameswf::Self **v10;
  int v11;
  int v12;
  gameswf::Self *v13;
  int *v14;
  int v15;
  char v16;
  gameswf::Self *v17;
  int v18;
  char v19;
  gameswf::Self **v20;
  int v21;
  unsigned int v22;
  int v23;
  gameswf::Self *v24;
  char *v25;
  gameswf::Self *v26;
  int v27;
  gameswf::Self *result;
  char *v29;
  int v30;
  int v31;
  int v32;
  char v33;
  int v34;
  int v35;
  int v36;
  gameswf::Self **v37;
  gameswf::Self **v38;
  gameswf::Self **v39;
  int *v40;
  gameswf::Self **v41;
  gameswf::Self *v42;
  gameswf::Self *v43;
  gameswf::Self *v44;
  gameswf::Self *v45;
  int v46;
  int v47;
  int *v48;
  gameswf::Self *v49;
  gameswf::Self *v50;
  gameswf::Self *v51;
  int v52;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_gameswf_String_gameswf_a_721d21::set_raw_capacity(
        a1,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_gameswf_String_gameswf_a_721d21::set_raw_capacity(
      a1,
      8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v6 = *((char **)a2 + 3);
    v5 = *((uint32_t *)a2 + 1) - 1;
  }
  else
  {
    v5 = *(char *)a2 - 1;
    v6 = (char *)a2 + 1;
  }
  v7 = 5381;
  if ( v5 > 0 )
  {
    do
      v7 = (33 * v7) ^ (uint8_t)v6[--v5];
    while ( v5 != 0 );
  }
  v8 = *a1;
  v46 = *((uint32_t *)*a1 + 1);
  v9 = v7 & v46;
  v42 = (gameswf::Self *)(v7 & v46);
  v10 = (gameswf::Self **)((char *)*a1 + 32 * (v7 & v46) + 8);
  v49 = *v10;
  if ( *v10 == (gameswf::Self *)-2 )
  {
    *((uint32_t *)v8 + 8 * (v7 & v46) + 3) = v7;
    *v10 = (gameswf::Self *)-1;
    v39 = v10;
    sub_7763C0((gameswf::String::Self *)(v10 + 2), (char *)a2);
    result = (gameswf::Self *)*a3;
    v39[7] = (gameswf::Self *)*a3;
  }
  else
  {
    do
    {
      v9 = v46 & (v9 + 1);
      v11 = (int)(uintptr_t)(v8) + 32 * v9 + 8;
    }
    while ( *(uint32_t *)v11 != -2 && (gameswf::Self *)v9 != v42 );
    v12 = *((uint32_t *)v8 + 8 * (v7 & v46) + 3) & v46;
    if ( (gameswf::Self *)v12 != v42 )
    {
      v47 = v9;
      v13 = v42;
      v43 = (gameswf::Self *)v7;
      do
      {
        v14 = (int *)((char *)v8 + 32 * v12 + 8);
        v12 = *v14;
      }
      while ( (gameswf::Self *)*v14 != v13 );
      v15 = v47;
      *(uint32_t *)v11 = (uint32_t)(uintptr_t)(v49);
      *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v10[1]);
      *(uint8_t *)(v11 + 8) = 1;
      *(uint8_t *)(v11 + 9) = 0;
      v48 = v14;
      v16 = *((uint8_t *)v10 + 8);
      v17 = v43;
      if ( v16 == -1 )
        v18 = (int)(uintptr_t)(v10[3]) - 1;
      else
        v18 = v16 - 1;
      v37 = v10;
      gameswf::String::resize((gameswf::String::Self *)(v11 + 8), v18);
      if ( *((uint8_t *)v37 + 8) == 0xFF )
        v50 = v37[5];
      else
        v50 = (gameswf::Self *)((char *)v37 + 9);
      v19 = *(uint8_t *)(v11 + 8);
      if ( v19 == -1 )
        gameswf::Strcpy_s(*(gameswf::Self **)(v11 + 20), *(char **)(v11 + 12), v50);
      else
        gameswf::Strcpy_s((gameswf::Self *)(v11 + 9), (char *)v19, v50);
      v20 = v37;
      v44 = v37[6];
      if ( (uint8_t *)((unsigned int)(uintptr_t)(v44) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        v33 = *((uint8_t *)v37 + 8);
        if ( v33 == -1 )
        {
          v34 = (int)(uintptr_t)(v37[3]) - 1;
          v51 = v37[5];
        }
        else
        {
          v34 = v33 - 1;
          v51 = (gameswf::Self *)((char *)v37 + 9);
        }
        v21 = 5381;
        if ( v34 > 0 )
        {
          v52 = v15;
          do
          {
            --v34;
            v35 = 33 * v21;
            v36 = *((uint8_t *)v51 + v34) + 32;
            if ( (uint8_t)(*((uint8_t *)v51 + v34) - 65) > 0x19u )
              v36 = *((uint8_t *)v51 + v34);
            v21 = v35 ^ v36;
          }
          while ( v34 != 0 );
          v15 = v52;
          v20 = v37;
          v21 = v21 << 9 >> 9;
        }
        v20[6] = (gameswf::Self *)(v21 & 0x7FFFFF | (unsigned int)(uintptr_t)(v44) & 0xFF800000);
      }
      else
      {
        v21 = (int)((uint32_t)(uintptr_t)(v44) << 9) >> 9;
      }
      v22 = v21 & 0x7FFFFF | *(uint32_t *)(v11 + 24) & 0xFF800000;
      *(uint32_t *)(v11 + 24) = v22;
      *(uint8_t *)(v11 + 26) = BYTE2(v22) & 0x7F;
      *(uint8_t *)(v11 + 27) = HIBYTE(v22) | 1;
      *(uint32_t *)(v11 + 28) = (uint32_t)(uintptr_t)(v20[7]);
      *v48 = v15;
      if ( a2 == (gameswf::String::Self *)(v20 + 2) )
        goto LABEL_31;
      if ( *(uint8_t *)a2 == 0xFF )
        v23 = *((uint32_t *)a2 + 1) - 1;
      else
        v23 = *(char *)a2 - 1;
      v38 = v20;
      gameswf::String::resize((gameswf::String::Self *)(v20 + 2), v23);
      v24 = (gameswf::Self *)((gameswf::String::Self *)((char *)a2 + 1));
      if ( *(uint8_t *)a2 == 0xFF )
      {
        v24 = *((gameswf::Self **)a2 + 3);
        LOBYTE(v25) = *((uint8_t *)v38 + 8);
        if ( (uint8_t)(uintptr_t)(v25) != 0xFF )
          goto LABEL_27;
      }
      else
      {
        LOBYTE(v25) = *((uint8_t *)v38 + 8);
        if ( (uint8_t)(uintptr_t)(v25) != 0xFF )
        {
LABEL_27:
          v25 = (char *)(char)(uintptr_t)(v25);
          v26 = (gameswf::Self *)((char *)v38 + 9);
LABEL_28:
          gameswf::Strcpy_s(v26, v25, v24);
          v20 = v38;
          v45 = *((gameswf::Self **)a2 + 4);
          if ( (uint8_t *)((unsigned int)(uintptr_t)(v45) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
          {
            if ( *(uint8_t *)a2 == 0xFF )
            {
              v30 = *((uint32_t *)a2 + 1) - 1;
              v29 = *((char **)a2 + 3);
            }
            else
            {
              v29 = (char *)a2 + 1;
              v30 = *(char *)a2 - 1;
            }
            v27 = 5381;
            if ( v30 > 0 )
            {
              do
              {
                --v30;
                v31 = 33 * v27;
                v32 = (uint8_t)v29[v30] + 32;
                if ( (uint8_t)(v29[v30] - 65) > 0x19u )
                  v32 = (uint8_t)v29[v30];
                v27 = v31 ^ v32;
              }
              while ( v30 != 0 );
              v20 = v38;
              v27 = v27 << 9 >> 9;
            }
            *((uint32_t *)a2 + 4) = v27 & 0x7FFFFF | (unsigned int)(uintptr_t)(v45) & 0xFF800000;
          }
          else
          {
            v27 = (int)((uint32_t)(uintptr_t)(v45) << 9) >> 9;
          }
          v20[6] = (gameswf::Self *)(v27 & 0x7FFFFF | (unsigned int)(uintptr_t)(v20[6]) & 0xFF800000);
LABEL_31:
          result = (gameswf::Self *)*a3;
          v20[1] = v17;
          v20[7] = result;
          *v20 = (gameswf::Self *)-1;
          return result;
        }
      }
      v25 = (char *)v38[3];
      v26 = v38[5];
      goto LABEL_28;
    }
    *(uint32_t *)v11 = (uint32_t)(uintptr_t)(v49);
    *((uint32_t *)v8 + 8 * v9 + 3) = (uint32_t)(uintptr_t)(v10[1]);
    v41 = v10 + 2;
    v40 = (int *)v10;
    sub_7763C0(
      (gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)v8 + 32 * v9 + 16),
      (char *)v10 + 8);
    *(uint32_t *)(v11 + 28) = v40[7];
    gameswf::String::opAssign(v41, (gameswf::Self **)a2);
    result = (gameswf::Self *)*a3;
    *v40 = v9;
    v40[7] = (int)(uintptr_t)(result);
    v40[1] = v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_636a21::set_raw_capacity  (binary VA: 0x10bddc0)
// Original: gameswf::hash<gameswf::StringI,gameswf::ASValue,gameswf::stringi_hash_functor<gameswf::StringI>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> * gameswf::hash_gameswf_StringI_gameswf_636a21::set_raw_capacity(gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *result;
  gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v8;
  int v9;
  int i;
  uint32_t *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *_g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_gameswf_StringI_gameswf_636a21::clear(self);
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
  if ( *self == nullptr
    || (result = (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v3 )
  {
    v14 = (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)gameswf::malloc_internal(40 * v3 + 8);
    *(uint32_t *)v14 = 0;
    v5 = v14;
    v6 = 8;
    *((uint32_t *)v14 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 40;
      if ( v3 <= v7 )
        break;
      v5 = v14;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v13 = *((uint32_t *)v8 + 1);
      if ( v13 >= 0 )
      {
        v9 = 8;
        for ( i = 0; i <= v13; ++i )
        {
          v11 = (uint32_t *)((char *)v8 + v9);
          if ( *(uint32_t *)((char *)v8 + v9) != -2 )
          {
            v12 = v9;
            gameswf::hash_gameswf_StringI_gameswf_636a21::add(
              (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&v14,
              (const gameswf::StringI::Self *)(v11 + 2),
              (const gameswf::ASValue::Self *)(v11 + 7));
            sub_59CE50((int)(uintptr_t)(v11 + 2));
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v11 + 7));
            *v11 = -2;
            v11[1] = 0;
            v9 = v12;
            v8 = *self;
          }
          v9 += 40;
        }
      }
      gameswf::free_internal(v8);
    }
    result = v14;
    *self = v14;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_636a21::add  (binary VA: 0x10bdf40)
// Original: gameswf::hash<gameswf::StringI,gameswf::ASValue,gameswf::stringi_hash_functor<gameswf::StringI>>::add
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_StringI_gameswf_636a21::add(gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **self, const gameswf::StringI::Self *a2, const gameswf::ASValue::Self *a3)
{
  gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v3;
  int v4;
  int v5;
  gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  gameswf::ASValue::Self *v14;
  char v15;
  int v16;
  gameswf::Self *v17;
  char *v18;
  gameswf::Self *v19;
  int v20;
  unsigned int v21;
  int v22;
  gameswf::Self *v23;
  char *v24;
  gameswf::Self *v25;
  int v26;
  int result;
  int v28;
  char *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  char *v34;
  int v35;
  int v36;
  char v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  gameswf::ASValue::Self *v46;
  gameswf::ASValue::Self *v47;
  int v48;
  uint32_t *v49;
  int v50;
  int v51;

  v3 = *self;
  if ( *self != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_gameswf_StringI_gameswf_636a21::set_raw_capacity(
        self,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *self;
      v4 = *(uint32_t *)*self;
    }
  }
  else
  {
    gameswf::hash_gameswf_StringI_gameswf_636a21::set_raw_capacity(
      self,
      8);
    v3 = *self;
    v4 = *(uint32_t *)*self;
  }
  *(uint32_t *)v3 = v4 + 1;
  v42 = *((uint32_t *)a2 + 4);
  if ( (uint8_t *)(v42 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v29 = *((char **)a2 + 3);
      v28 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v28 = *(char *)a2 - 1;
      v29 = (char *)a2 + 1;
    }
    v48 = 5381;
    v30 = 5381;
    if ( v28 > 0 )
    {
      do
      {
        --v28;
        v31 = 33 * v30;
        v32 = (uint8_t)v29[v28] + 32;
        if ( (uint8_t)(v29[v28] - 65) > 0x19u )
          v32 = (uint8_t)v29[v28];
        v30 = v31 ^ v32;
      }
      while ( v28 != 0 );
      v30 = v30 << 9 >> 9;
      v48 = v30;
    }
    *((uint32_t *)a2 + 4) = v30 & 0x7FFFFF | v42 & 0xFF800000;
    v5 = v48;
  }
  else
  {
    v5 = v42 << 9 >> 9;
    v48 = v5;
  }
  v6 = *self;
  v7 = *((uint32_t *)*self + 1);
  v8 = v7 & v5;
  v9 = (int)(uintptr_t)(*self) + 40 * v8 + 8;
  v43 = *(uint32_t *)v9;
  v10 = v8;
  if ( *(uint32_t *)v9 == -2 )
  {
    *(uint32_t *)v9 = -1;
    *(uint32_t *)(v9 + 4) = v48;
    sub_7763C0((gameswf::String::Self *)(v9 + 8), (char *)a2);
    *(uint8_t *)(v9 + 28) = 0;
    *(uint8_t *)(v9 + 29) = 0;
    return (int)(uintptr_t)(gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v9 + 28), a3));
  }
  else
  {
    do
    {
      v10 = v7 & (v10 + 1);
      v11 = (int)(uintptr_t)(v6) + 40 * v10 + 8;
    }
    while ( *(uint32_t *)v11 != -2 && v10 != v8 );
    v12 = *((uint32_t *)*self + 10 * v8 + 3) & v7;
    if ( v12 == v8 )
    {
      *(uint32_t *)v11 = v43;
      *((uint32_t *)v6 + 10 * v10 + 3) = *(uint32_t *)(v9 + 4);
      sub_7763C0(
        (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((char *)v6 + 40 * v10 + 16),
        (char *)(v9 + 8));
      *(uint8_t *)(v11 + 28) = 0;
      *(uint8_t *)(v11 + 29) = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v11 + 28), (const gameswf::ASValue::Self *)(v9 + 28));
      gameswf::String::opAssign((gameswf::Self **)(v9 + 8), (gameswf::Self **)a2);
      result = (int)(uintptr_t)(gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v9 + 28), a3));
      *(uint32_t *)v9 = v10;
      *(uint32_t *)(v9 + 4) = v48;
    }
    else
    {
      v46 = (gameswf::ASValue::Self *)v10;
      do
      {
        v13 = (int *)((char *)v6 + 40 * v12 + 8);
        v12 = *v13;
      }
      while ( *v13 != v8 );
      v49 = (uint32_t *)(v13);
      *(uint32_t *)v11 = v43;
      *(uint32_t *)(v11 + 4) = *(uint32_t *)(v9 + 4);
      *(uint8_t *)(v11 + 8) = 1;
      *(uint8_t *)(v11 + 9) = 0;
      v14 = v46;
      v15 = *(uint8_t *)(v9 + 8);
      if ( v15 == -1 )
        v16 = *(uint32_t *)(v9 + 12) - 1;
      else
        v16 = v15 - 1;
      gameswf::String::resize((gameswf::String::Self *)(v11 + 8), v16);
      v17 = (gameswf::Self *)(v9 + 9);
      if ( *(uint8_t *)(v9 + 8) == 0xFF )
        v17 = *(gameswf::Self **)(v9 + 20);
      LOBYTE(v18) = *(uint8_t *)(v11 + 8);
      if ( (uint8_t)(uintptr_t)(v18) == 0xFF )
      {
        v18 = *(char **)(v11 + 12);
        v19 = *(gameswf::Self **)(v11 + 20);
      }
      else
      {
        v18 = (char *)(char)(uintptr_t)(v18);
        v19 = (gameswf::Self *)(v11 + 9);
      }
      gameswf::Strcpy_s(v19, v18, v17);
      v44 = *(uint32_t *)(v9 + 24);
      if ( (uint8_t *)(v44 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        v37 = *(uint8_t *)(v9 + 8);
        if ( v37 == -1 )
        {
          v38 = *(uint32_t *)(v9 + 20);
          v39 = *(uint32_t *)(v9 + 12) - 1;
        }
        else
        {
          v38 = v9 + 9;
          v39 = v37 - 1;
        }
        v20 = 5381;
        if ( v39 > 0 )
        {
          v51 = v11;
          do
          {
            --v39;
            v40 = 33 * v20;
            v41 = *(uint8_t *)(v38 + v39) + 32;
            if ( (uint8_t)(*(uint8_t *)(v38 + v39) - 65) > 0x19u )
              v41 = *(uint8_t *)(v38 + v39);
            v20 = v40 ^ v41;
          }
          while ( v39 != 0 );
          v11 = v51;
          v20 = v20 << 9 >> 9;
        }
        *(uint32_t *)(v9 + 24) = v20 & 0x7FFFFF | v44 & 0xFF800000;
      }
      else
      {
        v20 = v44 << 9 >> 9;
      }
      v21 = v20 & 0x7FFFFF | *(uint32_t *)(v11 + 24) & 0xFF800000;
      *(uint8_t *)(v11 + 28) = 0;
      *(uint32_t *)(v11 + 24) = v21;
      *(uint8_t *)(v11 + 29) = 0;
      *(uint8_t *)(v11 + 26) = BYTE2(v21) & 0x7F;
      *(uint8_t *)(v11 + 27) = HIBYTE(v21) | 1;
      v47 = (gameswf::ASValue::Self *)(v9 + 28);
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v11 + 28), (const gameswf::ASValue::Self *)(v9 + 28));
      *v49 = (uint32_t)(uintptr_t)(v14);
      if ( a2 != (const gameswf::StringI::Self *)(v9 + 8) )
      {
        if ( *(uint8_t *)a2 == 0xFF )
          v22 = *((uint32_t *)a2 + 1) - 1;
        else
          v22 = *(char *)a2 - 1;
        gameswf::String::resize((gameswf::String::Self *)(v9 + 8), v22);
        v23 = (gameswf::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
        if ( *(uint8_t *)a2 == 0xFF )
          v23 = *((gameswf::Self **)a2 + 3);
        LOBYTE(v24) = *(uint8_t *)(v9 + 8);
        if ( (uint8_t)(uintptr_t)(v24) == 0xFF )
        {
          v24 = *(char **)(v9 + 12);
          v25 = *(gameswf::Self **)(v9 + 20);
        }
        else
        {
          v24 = (char *)(char)(uintptr_t)(v24);
          v25 = (gameswf::Self *)(v9 + 9);
        }
        gameswf::Strcpy_s(v25, v24, v23);
        v45 = *((uint32_t *)a2 + 4);
        if ( (uint8_t *)(v45 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          if ( *(uint8_t *)a2 == 0xFF )
          {
            v34 = *((char **)a2 + 3);
            v33 = *((uint32_t *)a2 + 1) - 1;
          }
          else
          {
            v33 = *(char *)a2 - 1;
            v34 = (char *)a2 + 1;
          }
          v26 = 5381;
          if ( v33 > 0 )
          {
            v50 = v9;
            do
            {
              --v33;
              v35 = 33 * v26;
              v36 = (uint8_t)v34[v33] + 32;
              if ( (uint8_t)(v34[v33] - 65) > 0x19u )
                v36 = (uint8_t)v34[v33];
              v26 = v35 ^ v36;
            }
            while ( v33 != 0 );
            v9 = v50;
            v26 = v26 << 9 >> 9;
          }
          *((uint32_t *)a2 + 4) = v26 & 0x7FFFFF | v45 & 0xFF800000;
        }
        else
        {
          v26 = v45 << 9 >> 9;
        }
        *(uint32_t *)(v9 + 24) = v26 & 0x7FFFFF | *(uint32_t *)(v9 + 24) & 0xFF800000;
      }
      result = (int)(uintptr_t)(gameswf::ASValue::opAssign(v47, a3));
      *(uint32_t *)v9 = -1;
      *(uint32_t *)(v9 + 4) = v48;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_999f64::set_raw_capacity  (binary VA: 0x10be4b0)
// Original: gameswf::hash<gameswf::StringI,gameswf::smart_ptr<gameswf::CharacterDef>,gameswf::stringi_hash_functor<gameswf::StringI>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> * gameswf::hash_gameswf_StringI_gameswf_999f64::set_raw_capacity(gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *result;
  gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v8;
  int i;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_gameswf_StringI_gameswf_999f64::clear(self);
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
  if ( *self == nullptr
    || (result = (gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v3 )
  {
    v13 = (gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)gameswf::malloc_internal(32 * v3 + 8);
    *(uint32_t *)v13 = 0;
    v5 = v13;
    v6 = 8;
    *((uint32_t *)v13 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 32;
      if ( v3 <= v7 )
        break;
      v5 = v13;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v12 = *((uint32_t *)v8 + 1);
      if ( v12 >= 0 )
      {
        for ( i = 0; i <= v12; ++i )
        {
          v10 = (int)(uintptr_t)(v8) + 32 * i + 8;
          if ( *(uint32_t *)v10 != -2 )
          {
            v11 = i;
            gameswf::hash_gameswf_StringI_gameswf_999f64::add(
              (gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&v13,
              (gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((char *)v8 + 32 * i + 16),
              (gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((char *)v8 + 32 * i + 36));
            sub_59CE50(v10 + 8);
            i = v11;
            if ( *(uint32_t *)(v10 + 28) != 0 )
            {
              gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v10 + 28));
              i = v11;
            }
            *(uint32_t *)v10 = -2;
            *(uint32_t *)(v10 + 4) = 0;
            v8 = *self;
          }
        }
      }
      gameswf::free_internal(v8);
    }
    result = v13;
    *self = v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_999f64::add  (binary VA: 0x10be620)
// Original: gameswf::hash<gameswf::StringI,gameswf::smart_ptr<gameswf::CharacterDef>,gameswf::stringi_hash_functor<gameswf::StringI>>::add
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::hash_gameswf_StringI_gameswf_999f64::add(gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **self, const gameswf::StringI::Self *a2, gameswf::RefCounted::Self **a3)
{
  gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  char v16;
  int v17;
  char v18;
  int *v19;
  int v20;
  unsigned int v21;
  gameswf::RefCounted::Self *v22;
  int v23;
  gameswf::Self *v24;
  char *v25;
  gameswf::Self *v26;
  int v27;
  gameswf::RefCounted::Self *result;
  gameswf::RefCounted::Self *v29;
  int v30;
  char *v31;
  int v32;
  int v33;
  int v34;
  bool v35;
  int v36;
  char *v37;
  int v38;
  int v39;
  gameswf::RefCounted::Self *v40;
  gameswf::RefCounted::Self *v41;
  char v42;
  int v43;
  int v44;
  int v45;
  int *v46;
  int *v47;
  gameswf::Self *v48;
  gameswf::Self *v49;
  gameswf::Self *v50;
  gameswf::Self *v51;
  gameswf::Self *v52;
  gameswf::Self *v53;
  gameswf::Self *v54;
  int v55;
  int v56;

  v3 = *self;
  if ( *self != nullptr )
  {
    v4 = *(uint32_t *)v3;
    v5 = 2 * *((uint32_t *)v3 + 1) + 2;
    if ( 3 * *(uint32_t *)v3 > v5 )
    {
      gameswf::hash_gameswf_StringI_gameswf_999f64::set_raw_capacity(
        self,
        v5);
      v3 = *self;
      v4 = *(uint32_t *)*self;
    }
  }
  else
  {
    gameswf::hash_gameswf_StringI_gameswf_999f64::set_raw_capacity(
      self,
      8);
    v3 = *self;
    v4 = *(uint32_t *)*self;
  }
  *(uint32_t *)v3 = v4 + 1;
  v6 = *((uint32_t *)a2 + 4);
  if ( (uint8_t *)(v6 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v31 = *((char **)a2 + 3);
      v30 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v30 = *(char *)a2 - 1;
      v31 = (char *)a2 + 1;
    }
    v55 = 5381;
    v32 = 5381;
    if ( v30 > 0 )
    {
      do
      {
        --v30;
        v33 = 33 * v32;
        v34 = (uint8_t)v31[v30] + 32;
        if ( (uint8_t)(v31[v30] - 65) > 0x19u )
          v34 = (uint8_t)v31[v30];
        v32 = v33 ^ v34;
      }
      while ( v30 != 0 );
      v32 = v32 << 9 >> 9;
      v55 = v32;
    }
    *((uint32_t *)a2 + 4) = v32 & 0x7FFFFF | v6 & 0xFF800000;
    v7 = v55;
  }
  else
  {
    v55 = v6 << 9 >> 9;
    v7 = v55;
  }
  v8 = *self;
  v9 = *((uint32_t *)*self + 1);
  v48 = (gameswf::Self *)(v9 & v7);
  v10 = v9 & v7;
  v11 = (int)(uintptr_t)(*self) + 32 * (v9 & v7) + 8;
  v51 = *(gameswf::Self **)v11;
  if ( *(uint32_t *)v11 == -2 )
  {
    *(uint32_t *)v11 = -1;
    *(uint32_t *)(v11 + 4) = v55;
    sub_7763C0((gameswf::String::Self *)(v11 + 8), (char *)a2);
    result = *a3;
    v35 = *a3 == nullptr;
    *(uint32_t *)(v11 + 28) = (uint32_t)(uintptr_t)(*a3);
    if ( !v35 )
      return gameswf::RefCounted::addRef(result);
  }
  else
  {
    v12 = v9 & v7;
    do
    {
      v10 = v9 & (v10 + 1);
      v13 = (int)(uintptr_t)(v8) + 32 * v10 + 8;
    }
    while ( *(uint32_t *)v13 != -2 && v10 != v12 );
    v14 = *(uint32_t *)(v11 + 4) & v9;
    if ( (gameswf::Self *)v14 == v48 )
    {
      *(uint32_t *)v13 = (uint32_t)(uintptr_t)(v51);
      *((uint32_t *)v8 + 8 * v10 + 3) = *(uint32_t *)(v11 + 4);
      sub_7763C0(
        (gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((char *)v8 + 32 * v10 + 16),
        (char *)(v11 + 8));
      v40 = *(gameswf::RefCounted::Self **)(v11 + 28);
      *(uint32_t *)(v13 + 28) = (uint32_t)(uintptr_t)(v40);
      if ( v40 != nullptr )
        gameswf::RefCounted::addRef(v40);
      gameswf::String::opAssign((gameswf::Self **)(v11 + 8), (gameswf::Self **)a2);
      result = *(gameswf::RefCounted::Self **)(v11 + 28);
      v41 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v11 + 28));
        *(uint32_t *)(v11 + 28) = (uint32_t)(uintptr_t)(v41);
        if ( v41 != nullptr )
          result = gameswf::RefCounted::addRef(v41);
      }
      *(uint32_t *)v11 = v10;
      *(uint32_t *)(v11 + 4) = v55;
    }
    else
    {
      do
      {
        v15 = (int *)((char *)v8 + 32 * v14 + 8);
        v14 = *v15;
      }
      while ( (gameswf::Self *)*v15 != v48 );
      *(uint32_t *)v13 = (uint32_t)(uintptr_t)(v51);
      *((uint32_t *)v8 + 8 * v10 + 3) = *(uint32_t *)(v11 + 4);
      *((uint8_t *)v8 + 32 * v10 + 16) = 1;
      *((uint8_t *)v8 + 32 * v10 + 17) = 0;
      v16 = *(uint8_t *)(v11 + 8);
      if ( v16 == -1 )
        v17 = *(uint32_t *)(v11 + 12) - 1;
      else
        v17 = v16 - 1;
      v46 = v15;
      gameswf::String::resize(
        (gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((char *)v8 + 32 * v10 + 16),
        v17);
      if ( *(uint8_t *)(v11 + 8) == 0xFF )
        v52 = *(gameswf::Self **)(v11 + 20);
      else
        v52 = (gameswf::Self *)(v11 + 9);
      v18 = *(uint8_t *)(v13 + 8);
      if ( v18 == -1 )
        gameswf::Strcpy_s(*(gameswf::Self **)(v13 + 20), *(char **)(v13 + 12), v52);
      else
        gameswf::Strcpy_s((gameswf::Self *)(v13 + 9), (char *)v18, v52);
      v19 = v46;
      v49 = *(gameswf::Self **)(v11 + 24);
      if ( (uint8_t *)((unsigned int)(uintptr_t)(v49) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        v42 = *(uint8_t *)(v11 + 8);
        if ( v42 == -1 )
        {
          v43 = *(uint32_t *)(v11 + 12) - 1;
          v54 = *(gameswf::Self **)(v11 + 20);
        }
        else
        {
          v43 = v42 - 1;
          v54 = (gameswf::Self *)(v11 + 9);
        }
        v20 = 5381;
        if ( v43 > 0 )
        {
          v56 = v13;
          do
          {
            --v43;
            v44 = 33 * v20;
            v45 = *((uint8_t *)v54 + v43) + 32;
            if ( (uint8_t)(*((uint8_t *)v54 + v43) - 65) > 0x19u )
              v45 = *((uint8_t *)v54 + v43);
            v20 = v44 ^ v45;
          }
          while ( v43 != 0 );
          v13 = v56;
          v19 = v46;
          v20 = v20 << 9 >> 9;
        }
        *(uint32_t *)(v11 + 24) = v20 & 0x7FFFFF | (unsigned int)(uintptr_t)(v49) & 0xFF800000;
      }
      else
      {
        v20 = (int)((uint32_t)(uintptr_t)(v49) << 9) >> 9;
      }
      v21 = v20 & 0x7FFFFF | *(uint32_t *)(v13 + 24) & 0xFF800000;
      *(uint32_t *)(v13 + 24) = v21;
      *(uint8_t *)(v13 + 26) = BYTE2(v21) & 0x7F;
      *(uint8_t *)(v13 + 27) = HIBYTE(v21) | 1;
      v22 = *(gameswf::RefCounted::Self **)(v11 + 28);
      *(uint32_t *)(v13 + 28) = (uint32_t)(uintptr_t)(v22);
      if ( v22 != nullptr )
      {
        v47 = v19;
        gameswf::RefCounted::addRef(v22);
        v19 = v47;
      }
      *v19 = v10;
      if ( a2 != (const gameswf::StringI::Self *)(v11 + 8) )
      {
        if ( *(uint8_t *)a2 == 0xFF )
          v23 = *((uint32_t *)a2 + 1) - 1;
        else
          v23 = *(char *)a2 - 1;
        gameswf::String::resize((gameswf::String::Self *)(v11 + 8), v23);
        v24 = (gameswf::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
        if ( *(uint8_t *)a2 == 0xFF )
          v24 = *((gameswf::Self **)a2 + 3);
        LOBYTE(v25) = *(uint8_t *)(v11 + 8);
        if ( (uint8_t)(uintptr_t)(v25) == 0xFF )
        {
          v25 = *(char **)(v11 + 12);
          v26 = *(gameswf::Self **)(v11 + 20);
        }
        else
        {
          v25 = (char *)(char)(uintptr_t)(v25);
          v26 = (gameswf::Self *)(v11 + 9);
        }
        gameswf::Strcpy_s(v26, v25, v24);
        v50 = *((gameswf::Self **)a2 + 4);
        if ( (uint8_t *)((unsigned int)(uintptr_t)(v50) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          if ( *(uint8_t *)a2 == 0xFF )
          {
            v37 = *((char **)a2 + 3);
            v36 = *((uint32_t *)a2 + 1) - 1;
          }
          else
          {
            v36 = *(char *)a2 - 1;
            v37 = (char *)a2 + 1;
          }
          v27 = 5381;
          if ( v36 > 0 )
          {
            v53 = (gameswf::Self *)v11;
            do
            {
              --v36;
              v38 = 33 * v27;
              v39 = (uint8_t)v37[v36] + 32;
              if ( (uint8_t)(v37[v36] - 65) > 0x19u )
                v39 = (uint8_t)v37[v36];
              v27 = v38 ^ v39;
            }
            while ( v36 != 0 );
            v11 = (int)(uintptr_t)(v53);
            v27 = v27 << 9 >> 9;
          }
          *((uint32_t *)a2 + 4) = v27 & 0x7FFFFF | (unsigned int)(uintptr_t)(v50) & 0xFF800000;
        }
        else
        {
          v27 = (int)((uint32_t)(uintptr_t)(v50) << 9) >> 9;
        }
        *(uint32_t *)(v11 + 24) = v27 & 0x7FFFFF | *(uint32_t *)(v11 + 24) & 0xFF800000;
      }
      result = *(gameswf::RefCounted::Self **)(v11 + 28);
      v29 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v11 + 28));
        *(uint32_t *)(v11 + 28) = (uint32_t)(uintptr_t)(v29);
        if ( v29 != nullptr )
          result = gameswf::RefCounted::addRef(v29);
      }
      *(uint32_t *)v11 = -1;
      *(uint32_t *)(v11 + 4) = v55;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_a0f678::find_index  (binary VA: 0x1109710)
// Original: gameswf::hash<gameswf::StringI,gameswf::String,gameswf::stringi_hash_functor<gameswf::StringI>>::find_index
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_StringI_gameswf_a0f678::find_index(gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *self, const gameswf::StringI::Self *a2)
{
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v8;
  int v9;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v10;
  char *v11;
  gameswf::String::Self *v12;
  int v13;
  int v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v20;
  int v21;
  int v22;

  v2 = self;
  v3 = *(uint32_t *)self;
  if ( *(uint32_t *)self == 0 )
    return -1;
  v21 = *((uint32_t *)a2 + 4);
  if ( (uint8_t *)(v21 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v16 = *((char **)a2 + 3);
      v15 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v15 = *(char *)a2 - 1;
      v16 = (char *)a2 + 1;
    }
    v4 = 5381;
    v17 = 5381;
    if ( v15 > 0 )
    {
      do
      {
        --v15;
        v18 = 33 * v17;
        v19 = (uint8_t)v16[v15] + 32;
        if ( (uint8_t)(v16[v15] - 65) > 0x19u )
          v19 = (uint8_t)v16[v15];
        v17 = v18 ^ v19;
      }
      while ( v15 != 0 );
      v2 = self;
      v17 = v17 << 9 >> 9;
      v4 = v17;
    }
    *((uint32_t *)a2 + 4) = v17 & 0x7FFFFF | v21 & 0xFF800000;
    v3 = *(uint32_t *)v2;
  }
  else
  {
    v4 = v21 << 9 >> 9;
  }
  v22 = *(uint32_t *)(v3 + 4);
  v5 = 48 * (v4 & v22);
  v6 = (uint32_t *)(v3 + v5 + 8);
  if ( *v6 == -2 )
    return -1;
  v7 = *(uint32_t *)(v3 + v5 + 12);
  if ( (v7 & v22) != (v4 & v22) )
    return -1;
  v8 = v2;
  v9 = v4 & v22;
  v10 = v8;
  while ( 1 )
  {
    if ( v7 == v4 )
    {
      if ( a2 == (const gameswf::StringI::Self *)(v6 + 2) )
        break;
      v11 = *(uint8_t *)a2 == 0xFF ? *((char **)a2 + 3) : (char *)a2 + 1;
      v12 = (gameswf::String::Self *)((char *)v6 + 9);
      if ( *((uint8_t *)v6 + 8) == 0xFF )
        v12 = (gameswf::String::Self *)v6[5];
      v20 = v10;
      v13 = gameswf::String::stricmp(v12, v11);
      v10 = v20;
      if ( v13 == 0 )
        break;
    }
    v9 = *v6;
    if ( *v6 == -1 )
      break;
    v6 = (uint32_t *)(*(uint32_t *)v10 + 48 * v9 + 8);
    v7 = v6[1];
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_a0f678::get  (binary VA: 0x11098c0)
// Original: gameswf::hash<gameswf::StringI,gameswf::String,gameswf::stringi_hash_functor<gameswf::StringI>>::get
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_StringI_gameswf_a0f678::get(gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *self, const gameswf::StringI::Self *a2, gameswf::Self **a3)
{
  int v3;
  int index;

  v3 = 0;
  index = gameswf::hash_gameswf_StringI_gameswf_a0f678::find_index(
            self,
            a2);
  if ( index >= 0 )
  {
    v3 = 1;
    if ( a3 != nullptr )
      gameswf::String::opAssign(a3, (gameswf::Self **)(*(uint32_t *)self + 48 * index + 36));
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_a0f678::clear  (binary VA: 0x1109ab0)
// Original: gameswf::hash<gameswf::StringI,gameswf::String,gameswf::stringi_hash_functor<gameswf::StringI>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> * gameswf::hash_gameswf_StringI_gameswf_a0f678::clear(gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **self)
{
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *result;
  int v2;
  int v3;
  int i;
  uint32_t *v5;
  int v6;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      v3 = 8;
      for ( i = 0; i <= v2; ++i )
      {
        v5 = (uint32_t *)((char *)result + v3);
        if ( *(uint32_t *)((char *)result + v3) != -2 )
        {
          v6 = v2;
          sub_59CE50((int)(uintptr_t)(v5 + 2));
          sub_59CE50((int)(uintptr_t)(v5 + 7));
          *v5 = -2;
          v5[1] = 0;
          v2 = v6;
          result = *self;
        }
        v3 += 48;
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_a0f678::set_raw_capacity  (binary VA: 0x1109c40)
// Original: gameswf::hash<gameswf::StringI,gameswf::String,gameswf::stringi_hash_functor<gameswf::StringI>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> * gameswf::hash_gameswf_StringI_gameswf_a0f678::set_raw_capacity(gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *result;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v8;
  int v9;
  int i;
  uint32_t *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *_g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_gameswf_StringI_gameswf_a0f678::clear(self);
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
  if ( *self == nullptr
    || (result = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v3 )
  {
    v14 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)gameswf::malloc_internal(48 * v3 + 8);
    *(uint32_t *)v14 = 0;
    v5 = v14;
    v6 = 8;
    *((uint32_t *)v14 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 48;
      if ( v3 <= v7 )
        break;
      v5 = v14;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v13 = *((uint32_t *)v8 + 1);
      if ( v13 >= 0 )
      {
        v9 = 8;
        for ( i = 0; i <= v13; ++i )
        {
          v11 = (uint32_t *)((char *)v8 + v9);
          if ( *(uint32_t *)((char *)v8 + v9) != -2 )
          {
            v12 = v9;
            gameswf::hash_gameswf_StringI_gameswf_a0f678::add(
              (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&v14,
              (const gameswf::StringI::Self *)(v11 + 2),
              (const gameswf::String::Self *)(v11 + 7));
            sub_59CE50((int)(uintptr_t)(v11 + 2));
            sub_59CE50((int)(uintptr_t)(v11 + 7));
            *v11 = -2;
            v11[1] = 0;
            v9 = v12;
            v8 = *self;
          }
          v9 += 48;
        }
      }
      gameswf::free_internal(v8);
    }
    result = v14;
    *self = v14;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_a0f678::add  (binary VA: 0x1109dc0)
// Original: gameswf::hash<gameswf::StringI,gameswf::String,gameswf::stringi_hash_functor<gameswf::StringI>>::add
// ----------------------------------------------------------------------------
unsigned int gameswf::hash_gameswf_StringI_gameswf_a0f678::add(gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **self, const gameswf::StringI::Self *a2, const gameswf::String::Self *a3)
{
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v3;
  int v4;
  int v5;
  int v6;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int *v13;
  int v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  gameswf::String::Self *v20;
  char *v21;
  int v22;
  int v23;
  int v24;

  v3 = *self;
  if ( *self != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_gameswf_StringI_gameswf_a0f678::set_raw_capacity(
        self,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *self;
      v4 = *(uint32_t *)*self;
    }
  }
  else
  {
    gameswf::hash_gameswf_StringI_gameswf_a0f678::set_raw_capacity(
      self,
      8);
    v3 = *self;
    v4 = *(uint32_t *)*self;
  }
  *(uint32_t *)v3 = v4 + 1;
  v5 = *((uint32_t *)a2 + 4);
  v22 = v5;
  if ( (uint8_t *)(v5 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v16 = *((char **)a2 + 3);
      v15 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v15 = *(char *)a2 - 1;
      v16 = (char *)a2 + 1;
    }
    v24 = 5381;
    v17 = 5381;
    if ( v15 > 0 )
    {
      do
      {
        --v15;
        v18 = 33 * v17;
        v19 = (uint8_t)v16[v15] + 32;
        if ( (uint8_t)(v16[v15] - 65) > 0x19u )
          v19 = (uint8_t)v16[v15];
        v17 = v18 ^ v19;
      }
      while ( v15 != 0 );
      v17 = v17 << 9 >> 9;
      v24 = v17;
    }
    *((uint32_t *)a2 + 4) = v17 & 0x7FFFFF | v22 & 0xFF800000;
    v6 = v24;
  }
  else
  {
    v24 = v5 << 9 >> 9;
    v6 = v24;
  }
  v7 = *self;
  v8 = *((uint32_t *)*self + 1);
  v9 = v8 & v6;
  v21 = (char *)*self + 48 * v9 + 8;
  v23 = *(uint32_t *)v21;
  v10 = v9;
  if ( *(uint32_t *)v21 == -2 )
  {
    *((uint32_t *)*self + 12 * v9 + 3) = v24;
    *(uint32_t *)v21 = -1;
    sub_7763C0((gameswf::String::Self *)(v21 + 8), (char *)a2);
    return sub_7763C0((gameswf::String::Self *)(v21 + 28), (char *)a3);
  }
  else
  {
    do
    {
      v10 = v8 & (v10 + 1);
      v11 = (uint32_t *)((char *)v7 + 48 * v10 + 8);
    }
    while ( *v11 != -2 && v10 != v9 );
    v12 = *((uint32_t *)*self + 12 * v9 + 3) & v8;
    if ( v12 == v9 )
    {
      *v11 = v23;
      *((uint32_t *)v7 + 12 * v10 + 3) = *((uint32_t *)v21 + 1);
      v20 = (gameswf::String::Self *)((gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((char *)v7 + 48 * v10 + 36));
      sub_7763C0(
        (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((char *)v7 + 48 * v10 + 16),
        v21 + 8);
      sub_7763C0(v20, v21 + 28);
      gameswf::String::opAssign((gameswf::Self **)v21 + 2, (gameswf::Self **)a2);
      gameswf::String::opAssign((gameswf::Self **)v21 + 7, (gameswf::Self **)a3);
      *(uint32_t *)v21 = v10;
      *((uint32_t *)v21 + 1) = v24;
      return v24;
    }
    else
    {
      do
      {
        v13 = (int *)((char *)v7 + 48 * v12 + 8);
        v12 = *v13;
      }
      while ( *v13 != v9 );
      *v11 = v23;
      *((uint32_t *)v7 + 12 * v10 + 3) = *((uint32_t *)v21 + 1);
      sub_7763C0(
        (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((char *)v7 + 48 * v10 + 16),
        v21 + 8);
      sub_7763C0((gameswf::String::Self *)(v11 + 7), v21 + 28);
      *v13 = v10;
      gameswf::String::opAssign((gameswf::Self **)v21 + 2, (gameswf::Self **)a2);
      gameswf::String::opAssign((gameswf::Self **)v21 + 7, (gameswf::Self **)a3);
      *((uint32_t *)v21 + 1) = v24;
      *(uint32_t *)v21 = -1;
      return (unsigned int)(uintptr_t)(v21);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_TextureCache_key_883d29::erase  (binary VA: 0x110df00)
// Original: gameswf::hash<gameswf::TextureCache::key,gameswf::TextureCache::region *,gameswf::fixed_size_hash<gameswf::TextureCache::key>>::erase
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_TextureCache_key_883d29::erase(int *a1, uint64_t *a2)
{
  int result;
  int v3;
  int i;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int *v11;
  int *v12;
  uint32_t *v13;
  int v14;
  int *v15;
  int v16;
  int v17;

  result = (int)(uintptr_t)(a1);
  v3 = *a1;
  if ( *a1 != 0 )
  {
    result = 5381;
    for ( i = 16; i != 0; result = *((uint8_t *)a2 + i) + 65599 * result )
      --i;
    v17 = *(uint32_t *)(v3 + 4);
    v5 = result & v17;
    if ( *(uint32_t *)(v3 + 28 * (result & v17) + 8) != -2 )
    {
      v6 = *(uint32_t *)(v3 + 28 * (result & v17) + 12);
      if ( v5 == (v6 & v17) )
      {
        v16 = result;
        v7 = v3 + 28 * (result & v17) + 8;
        while ( 1 )
        {
          if ( v6 == v16 )
          {
            result = (int)(uintptr_t)(a2);
            if ( *a2 == *(uint64_t *)(v7 + 8) && a2[1] == *(uint64_t *)(v7 + 16) )
              break;
          }
          v5 = *(uint32_t *)v7;
          if ( *(uint32_t *)v7 == -1 )
            return result;
          v7 = v3 + 28 * v5 + 8;
          v6 = *(uint32_t *)(v3 + 28 * v5 + 12);
        }
        if ( v5 >= 0 && v17 >= v5 )
        {
          v8 = 28 * v5 + 8;
          v9 = (int *)(v3 + v8);
          v10 = *(uint32_t *)(v3 + v8 + 4) & v17;
          if ( v10 == v5 )
          {
            v14 = *v9;
            if ( *v9 == -1 )
            {
              *v9 = -2;
              v9[1] = 0;
            }
            else
            {
              *v9 = -2;
              v9[1] = 0;
              v15 = (int *)(v3 + 28 * v14 + 8);
              *v9 = *v15;
              v9[1] = v15[1];
              v9[2] = v15[2];
              v9[3] = v15[3];
              v9[4] = v15[4];
              v9[5] = v15[5];
              v9[6] = v15[6];
              *v9 = *v15;
              *v15 = -2;
              v15[1] = 0;
            }
            v12 = a1;
          }
          else
          {
            do
            {
              v11 = (int *)(v3 + 28 * v10 + 8);
              v10 = *v11;
            }
            while ( *v11 != v5 );
            *v11 = *v9;
            v12 = a1;
            v13 = (uint32_t *)(*a1 + v8);
            *v13 = -2;
            v13[1] = 0;
          }
          result = *v12;
          --*(uint32_t *)*v12;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_TextureCache_reg_11d285::set_raw_capacity  (binary VA: 0x110e080)
// Original: gameswf::hash<gameswf::TextureCache::region *,gameswf::TextureCache::region *,gameswf::fixed_size_hash<gameswf::TextureCache::region *>>::set_raw_capacity
// ----------------------------------------------------------------------------
void gameswf::hash_gameswf_TextureCache_reg_11d285::set_raw_capacity(gameswf::Self **self, int a2)
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
                  gameswf::hash_gameswf_TextureCache_reg_11d285::set_raw_capacity(
                    (gameswf::Self **)((gameswf::hash<gameswf::TextureCache::region *, gameswf::TextureCache::region *, gameswf::fixed_size_hash<gameswf::TextureCache::region *>> *)v29),
                    2 * *(uint32_t *)(v29[0] + 4) + 2);
                  v9 = (uint32_t *)v29[0];
                  v10 = *(uint32_t *)v29[0];
                }
              }
              else
              {
                gameswf::hash_gameswf_TextureCache_reg_11d285::set_raw_capacity(
                  (gameswf::Self **)((gameswf::hash<gameswf::TextureCache::region *, gameswf::TextureCache::region *, gameswf::fixed_size_hash<gameswf::TextureCache::region *>> *)v29),
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

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_04f315::set_raw_capacity  (binary VA: 0x1148280)
// Original: gameswf::hash<gameswf::StringI,gameswf::ASStyleSheet::Style,gameswf::stringi_hash_functor<gameswf::StringI>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::hash_gameswf_StringI_gameswf_04f315::set_raw_capacity(gameswf::Self **self, int a2)
{
  int v2;
  int v3;
  gameswf::Self *result;
  uint32_t *v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::StringI::Self, gameswf::ASStyleSheet::Style, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v8;
  gameswf::Self *v9;
  uint32_t *v10;
  gameswf::Self *v11;
  int v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
  gameswf::Self *v16;
  int v17;
  int v18;
  gameswf::Self **v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_i;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v23)) > _g4_s3 ? (12u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v24)) > _g4_s4 ? (12u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v25)) > _g4_s5 ? (12u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v26)) > _g4_s6 ? (12u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v27)) > _g4_s7 ? (12u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v28)) > _g4_s8 ? (16u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v29)) > _g4_s9 ? (16u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v30)) > _g4_s10 ? (16u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v31)) > _g4_s11 ? (16u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v32)) > _g4_s12 ? (20u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v33)) > _g4_s13 ? (20u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_i)) > _g4_s14 ? (24u + sizeof(_g4_t_i)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v35)) > _g4_s15 ? (24u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v36)) > _g4_s16 ? (28u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v37)) > _g4_s17 ? (28u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v38)) > _g4_s18 ? (32u + sizeof(_g4_t_v38)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);

  if ( a2 <= 0 )
  {
    result = *self;
    if ( *self == nullptr )
      return result;
    v33 = *((uint32_t *)result + 1);
    if ( v33 < 0 )
    {
LABEL_56:
      result = (gameswf::Self *)gameswf::free_internal(result);
      *self = nullptr;
      return result;
    }
    v35 = 0;
    while ( 1 )
    {
      v15 = (uint32_t *)((char *)result + 32 * v35 + 8);
      if ( *v15 != -2 )
      {
        if ( *((uint8_t *)result + 32 * v35 + 16) == 0xFF && (*((uint8_t *)result + 32 * v35 + 35) & 1) != 0 )
        {
          v27 = (int)(uintptr_t)(result) + 32 * v35 + 8;
          gameswf::free_internal(*((gameswf::Self **)result + 8 * v35 + 7));
          v15 = (uint32_t *)v27;
        }
        v16 = (gameswf::Self *)v15[7];
        if ( v16 != nullptr )
        {
          v37 = *((uint32_t *)v16 + 1);
          if ( v37 >= 0 )
          {
            v17 = 8;
            v18 = 0;
            while ( 2 )
            {
              v19 = (gameswf::Self **)((char *)v16 + v17);
              if ( *(uint32_t *)((char *)v16 + v17) == -2 )
                goto LABEL_46;
              if ( *((uint8_t *)v19 + 8) == 0xFF && (*((uint8_t *)v19 + 27) & 1) != 0 )
              {
                v30 = v17;
                v24 = v15;
                gameswf::free_internal(v19[5]);
                v15 = v24;
                v17 = v30;
                if ( *((uint8_t *)v19 + 28) == 0xFF )
                  goto LABEL_51;
              }
              else if ( *((uint8_t *)v19 + 28) == 0xFF )
              {
LABEL_51:
                if ( (*((uint8_t *)v19 + 47) & 1) != 0 )
                {
                  v31 = v17;
                  v25 = v15;
                  gameswf::free_internal(v19[10]);
                  v15 = v25;
                  v17 = v31;
                }
              }
              *v19 = (gameswf::Self *)-2;
              v19[1] = nullptr;
              v16 = (gameswf::Self *)v15[7];
LABEL_46:
              ++v18;
              v17 += 48;
              if ( v37 < v18 )
                break;
              continue;
            }
          }
          v26 = v15;
          gameswf::free_internal(v16);
          v15 = v26;
          v26[7] = 0;
        }
        *v15 = -2;
        v15[1] = 0;
        result = *self;
      }
      if ( v33 < ++v35 )
        goto LABEL_56;
    }
  }
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
  if ( *self == nullptr || (result = (gameswf::Self *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::Self *)v3 )
  {
    v38 = (uint32_t *)gameswf::malloc_internal(32 * v3 + 8);
    *v38 = 0;
    v5 = v38;
    v6 = 2;
    v38[1] = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      v5[v6] = -2;
      v6 += 8;
      if ( v3 <= v7 )
        break;
      v5 = v38;
    }
    v8 = (gameswf::hash<gameswf::StringI::Self, gameswf::ASStyleSheet::Style, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)self;
    v9 = *self;
    if ( *self != nullptr )
    {
      v32 = *((uint32_t *)v9 + 1);
      if ( v32 >= 0 )
      {
        for ( i = 0; v32 >= i; ++i )
        {
          if ( *((uint32_t *)v9 + 8 * i + 2) != -2 )
          {
            v20 = (int)(uintptr_t)(v9) + 32 * i + 8;
            gameswf::hash_gameswf_StringI_gameswf_04f315::add(
              (gameswf::hash<gameswf::StringI::Self, gameswf::ASStyleSheet::Style, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&v38,
              (int)(uintptr_t)(v9) + 32 * i + 16,
              (int)(uintptr_t)(v9) + 32 * i + 36);
            v10 = (uint32_t *)v20;
            if ( *(uint8_t *)(v20 + 8) == 0xFF && (*(uint8_t *)(v20 + 27) & 1) != 0 )
            {
              gameswf::free_internal(*(gameswf::Self **)(v20 + 20));
              v10 = (uint32_t *)v20;
            }
            v11 = (gameswf::Self *)v10[7];
            if ( v11 != nullptr )
            {
              v36 = *((uint32_t *)v11 + 1);
              if ( v36 >= 0 )
              {
                v12 = 8;
                v13 = 0;
                while ( 2 )
                {
                  v14 = (uint32_t *)((char *)v11 + v12);
                  if ( *(uint32_t *)((char *)v11 + v12) == -2 )
                    goto LABEL_21;
                  if ( *((uint8_t *)v14 + 8) == 0xFF && (*((uint8_t *)v14 + 27) & 1) != 0 )
                  {
                    v28 = v13;
                    v21 = v10;
                    gameswf::free_internal((gameswf::Self *)v14[5]);
                    v10 = v21;
                    v13 = v28;
                    if ( *((uint8_t *)v14 + 28) == 0xFF )
                      goto LABEL_26;
                  }
                  else if ( *((uint8_t *)v14 + 28) == 0xFF )
                  {
LABEL_26:
                    if ( (*((uint8_t *)v14 + 47) & 1) != 0 )
                    {
                      v29 = v13;
                      v22 = v10;
                      gameswf::free_internal((gameswf::Self *)v14[10]);
                      v10 = v22;
                      v13 = v29;
                    }
                  }
                  *v14 = -2;
                  v14[1] = 0;
                  v11 = (gameswf::Self *)v10[7];
LABEL_21:
                  ++v13;
                  v12 += 48;
                  if ( v36 < v13 )
                    break;
                  continue;
                }
              }
              v23 = v10;
              gameswf::free_internal(v11);
              v10 = v23;
              v23[7] = 0;
            }
            *v10 = -2;
            v10[1] = 0;
            v9 = *self;
          }
        }
      }
      gameswf::free_internal(v9);
      v8 = (gameswf::hash<gameswf::StringI::Self, gameswf::ASStyleSheet::Style, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)self;
    }
    result = (gameswf::Self *)v38;
    *(uint32_t *)v8 = (uint32_t)(uintptr_t)(v38);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_04f315::add  (binary VA: 0x11486b0)
// Original: gameswf::hash<gameswf::StringI,gameswf::ASStyleSheet::Style,gameswf::stringi_hash_functor<gameswf::StringI>>::add
// ----------------------------------------------------------------------------
int * gameswf::hash_gameswf_StringI_gameswf_04f315::add(gameswf::Self **a1, char *a2, int a3)
{
  gameswf::Self *v3;
  int v4;
  gameswf::Self *v5;
  int v6;
  gameswf::Self *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  char v15;
  int v16;
  char v17;
  int *v18;
  int v19;
  unsigned int v20;
  int v21;
  int *v22;
  int v23;
  bool v24;
  int v25;
  gameswf::Self *v26;
  char *v27;
  gameswf::Self *v28;
  int v29;
  gameswf::Self *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  uint32_t *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int *result;
  int v41;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **v42;
  int v43;
  gameswf::Self *v44;
  int v45;
  int v46;
  char *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  gameswf::Self *v56;
  char *v57;
  gameswf::Self *v58;
  int v59;
  unsigned int v60;
  int v61;
  int v62;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  char *v70;
  int v71;
  int v72;
  int v73;
  char v74;
  int v75;
  gameswf::Self *v76;
  char *v77;
  gameswf::Self *v78;
  int v79;
  unsigned int v80;
  int *v81;
  int v82;
  bool v83;
  int v84;
  int v85;
  int v86;
  gameswf::Self *v87;
  char *v88;
  gameswf::Self *v89;
  int v90;
  unsigned int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int *v96;
  gameswf::Self *v97;
  int v98;
  int *v99;
  bool v100;
  int v101;
  gameswf::Self *v102;
  int v103;
  char v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  gameswf::Self *v117;
  int v118;
  int v119;
  int v120;
  char *v121;
  int v122;
  int v123;
  int v124;
  char *v125;
  int v126;
  int v127;
  char v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int *v143;
  int v144;
  int v145;
  int *v146;
  int v147;
  int v148;
  gameswf::Self *v149;
  gameswf::Self *v150;
  gameswf::Self *v151;
  gameswf::Self *v152;
  gameswf::Self *v153;
  gameswf::Self *v154;
  gameswf::Self *v155;
  gameswf::Self *v156;
  gameswf::Self *v157;
  gameswf::Self *v158;
  gameswf::Self *v159;
  gameswf::Self *v160;
  gameswf::Self *v161;
  gameswf::Self *v162;
  gameswf::Self *v163;
  gameswf::Self *v164;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v165;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v166;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v167;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **v168;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v169;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v170;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **v171;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v172;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v173;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v174;
  int v175;
  int v176;
  int v177;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_gameswf_StringI_gameswf_04f315::set_raw_capacity(
        a1,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_gameswf_StringI_gameswf_04f315::set_raw_capacity(
      a1,
      8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  v5 = *((gameswf::Self **)a2 + 4);
  v149 = v5;
  if ( (uint8_t *)((unsigned int)(uintptr_t)(v5) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *a2 == -1 )
    {
      v47 = *((char **)a2 + 3);
      v46 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v46 = *a2 - 1;
      v47 = a2 + 1;
    }
    v175 = 5381;
    v48 = 5381;
    if ( v46 > 0 )
    {
      do
      {
        --v46;
        v49 = 33 * v48;
        v50 = (uint8_t)v47[v46] + 32;
        if ( (uint8_t)(v47[v46] - 65) > 0x19u )
          v50 = (uint8_t)v47[v46];
        v48 = v49 ^ v50;
      }
      while ( v46 != 0 );
      v48 = v48 << 9 >> 9;
      v175 = v48;
    }
    *((uint32_t *)a2 + 4) = v48 & 0x7FFFFF | (unsigned int)(uintptr_t)(v149) & 0xFF800000;
    v6 = v175;
  }
  else
  {
    v175 = (int)((uint32_t)(uintptr_t)(v5) << 9) >> 9;
    v6 = v175;
  }
  v7 = *a1;
  v8 = *((uint32_t *)*a1 + 1);
  v150 = (gameswf::Self *)(v8 & v6);
  v9 = v8 & v6;
  v10 = (int)(uintptr_t)(*a1) + 32 * (v8 & v6) + 8;
  v11 = v8 & v6;
  v165 = *(gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)v10;
  if ( *(uint32_t *)v10 != -2 )
  {
    do
    {
      v9 = v8 & (v9 + 1);
      v12 = (int)(uintptr_t)(v7) + 32 * v9 + 8;
    }
    while ( *(uint32_t *)v12 != -2 && v9 != v11 );
    v13 = *(uint32_t *)(v10 + 4) & v8;
    if ( (gameswf::Self *)v13 != v150 )
    {
      do
      {
        v14 = (int *)((char *)v7 + 32 * v13 + 8);
        v13 = *v14;
      }
      while ( (gameswf::Self *)*v14 != v150 );
      *(uint32_t *)v12 = (uint32_t)(uintptr_t)(v165);
      *((uint32_t *)v7 + 8 * v9 + 3) = *(uint32_t *)(v10 + 4);
      *((uint8_t *)v7 + 32 * v9 + 16) = 1;
      *((uint8_t *)v7 + 32 * v9 + 17) = 0;
      v15 = *(uint8_t *)(v10 + 8);
      if ( v15 == -1 )
        v16 = *(uint32_t *)(v10 + 12) - 1;
      else
        v16 = v15 - 1;
      v143 = v14;
      gameswf::String::resize((gameswf::Self *)((char *)v7 + 32 * v9 + 16), v16);
      if ( *(uint8_t *)(v10 + 8) == 0xFF )
        v162 = *(gameswf::Self **)(v10 + 20);
      else
        v162 = (gameswf::Self *)(v10 + 9);
      v17 = *(uint8_t *)(v12 + 8);
      if ( v17 == -1 )
        gameswf::Strcpy_s(*(gameswf::Self **)(v12 + 20), *(char **)(v12 + 12), v162);
      else
        gameswf::Strcpy_s((gameswf::Self *)(v12 + 9), (char *)v17, v162);
      v18 = v143;
      v151 = *(gameswf::Self **)(v10 + 24);
      if ( (uint8_t *)((unsigned int)(uintptr_t)(v151) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        v104 = *(uint8_t *)(v10 + 8);
        if ( v104 == -1 )
        {
          v105 = *(uint32_t *)(v10 + 12) - 1;
          v169 = *(gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)(v10 + 20);
        }
        else
        {
          v105 = v104 - 1;
          v169 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)(v10 + 9);
        }
        v19 = 5381;
        if ( v105 > 0 )
        {
          v177 = v10;
          do
          {
            --v105;
            v106 = 33 * v19;
            v107 = *((uint8_t *)v169 + v105) + 32;
            if ( (uint8_t)(*((uint8_t *)v169 + v105) - 65) > 0x19u )
              v107 = *((uint8_t *)v169 + v105);
            v19 = v106 ^ v107;
          }
          while ( v105 != 0 );
          v10 = v177;
          v18 = v143;
          v19 = v19 << 9 >> 9;
        }
        *(uint32_t *)(v10 + 24) = v19 & 0x7FFFFF | (unsigned int)(uintptr_t)(v151) & 0xFF800000;
      }
      else
      {
        v19 = (int)((uint32_t)(uintptr_t)(v151) << 9) >> 9;
      }
      v20 = *(uint32_t *)(v12 + 24) & 0xFF800000;
      *(uint32_t *)(v12 + 28) = 0;
      v21 = v19 & 0x7FFFFF | v20;
      *(uint32_t *)(v12 + 24) = v21;
      *(uint8_t *)(v12 + 26) = BYTE2(v21) & 0x7F;
      *(uint8_t *)(v12 + 27) = HIBYTE(v21) | 1;
      v22 = *(int **)(v10 + 28);
      if ( v22 != nullptr )
      {
        v23 = *v22;
        v24 = *v22 < 0;
        if ( *v22 != 0 )
        {
          v36 = 0;
          if ( !v24 )
            v36 = (3 * v23) >> 1;
          v146 = v18;
          v171 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)(v12 + 28);
          gameswf::hash_gameswf_StringI_gameswf_a0f678::set_raw_capacity(
            (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)(v12 + 28),
            v36);
          v37 = *(uint32_t *)(v10 + 28);
          v18 = v146;
          if ( v37 != 0 && *(int *)(v37 + 4) >= 0 )
          {
            v38 = 0;
            if ( *(uint32_t *)(v37 + 8) == -2 )
            {
              v153 = *(gameswf::Self **)(v37 + 4);
              v38 = 0;
              v53 = 56;
              do
              {
                if ( (int)(uintptr_t)(v153) < ++v38 )
                  goto LABEL_21;
                v54 = *(uint32_t *)(*(uint32_t *)(v10 + 28) + v53);
                v53 += 48;
              }
              while ( v54 == -2 );
              v37 = *(uint32_t *)(v10 + 28);
            }
            v166 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)(v10 + 28);
            while ( 1 )
            {
              gameswf::hash_gameswf_StringI_gameswf_a0f678::add(
                v171,
                (const gameswf::StringI::Self *)(v37 + 48 * v38 + 16),
                (const gameswf::String::Self *)(v37 + 48 * v38 + 36));
              v37 = *(uint32_t *)v166;
              v39 = *(uint32_t *)(*(uint32_t *)v166 + 4);
              if ( v38 > v39 )
                goto LABEL_50;
              v176 = v38 + 1;
              if ( v39 < v38 + 1 )
                goto LABEL_50;
              if ( *(uint32_t *)(v37 + 48 * (v38 + 1) + 8) == -2 )
                break;
LABEL_53:
              v38 = v176;
            }
            v118 = 16 * (3 * v38 + 6) + 8;
            while ( v39 >= ++v176 )
            {
              v119 = *(uint32_t *)(v37 + v118);
              v118 += 48;
              if ( v119 != -2 )
                goto LABEL_53;
            }
LABEL_50:
            v18 = v146;
          }
        }
      }
LABEL_21:
      *v18 = v9;
      if ( a2 != (char *)(v10 + 8) )
      {
        if ( *a2 == -1 )
          v25 = *((uint32_t *)a2 + 1) - 1;
        else
          v25 = *a2 - 1;
        gameswf::String::resize((gameswf::String::Self *)(v10 + 8), v25);
        v26 = (gameswf::Self *)(a2 + 1);
        if ( *a2 == -1 )
          v26 = *((gameswf::Self **)a2 + 3);
        LOBYTE(v27) = *(uint8_t *)(v10 + 8);
        if ( (uint8_t)(uintptr_t)(v27) == 0xFF )
        {
          v27 = *(char **)(v10 + 12);
          v28 = *(gameswf::Self **)(v10 + 20);
        }
        else
        {
          v27 = (char *)(char)(uintptr_t)(v27);
          v28 = (gameswf::Self *)(v10 + 9);
        }
        gameswf::Strcpy_s(v28, v27, v26);
        v152 = *((gameswf::Self **)a2 + 4);
        if ( (uint8_t *)((unsigned int)(uintptr_t)(v152) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          if ( *a2 == -1 )
          {
            v70 = *((char **)a2 + 3);
            v71 = *((uint32_t *)a2 + 1) - 1;
          }
          else
          {
            v70 = a2 + 1;
            v71 = *a2 - 1;
          }
          v29 = 5381;
          if ( v71 > 0 )
          {
            v167 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v10;
            do
            {
              --v71;
              v72 = 33 * v29;
              v73 = (uint8_t)v70[v71] + 32;
              if ( (uint8_t)(v70[v71] - 65) > 0x19u )
                v73 = (uint8_t)v70[v71];
              v29 = v72 ^ v73;
            }
            while ( v71 != 0 );
            v10 = (int)(uintptr_t)(v167);
            v29 = v29 << 9 >> 9;
          }
          *((uint32_t *)a2 + 4) = v29 & 0x7FFFFF | (unsigned int)(uintptr_t)(v152) & 0xFF800000;
        }
        else
        {
          v29 = (int)((uint32_t)(uintptr_t)(v152) << 9) >> 9;
        }
        *(uint32_t *)(v10 + 24) = v29 & 0x7FFFFF | *(uint32_t *)(v10 + 24) & 0xFF800000;
      }
      v30 = *(gameswf::Self **)(v10 + 28);
      if ( v30 == nullptr )
        goto LABEL_56;
      v31 = *((uint32_t *)v30 + 1);
      if ( v31 < 0 )
        goto LABEL_55;
      v32 = 0;
      v33 = v10;
      v34 = 8;
      while ( 1 )
      {
        v35 = (uint32_t *)((char *)v30 + v34);
        if ( *(uint32_t *)((char *)v30 + v34) == -2 )
          goto LABEL_36;
        if ( *((uint8_t *)v35 + 8) == 0xFF && (*((uint8_t *)v35 + 27) & 1) != 0 )
        {
          v144 = v33;
          v139 = v31;
          gameswf::free_internal((gameswf::Self *)v35[5]);
          v31 = v139;
          v33 = v144;
          if ( *((uint8_t *)v35 + 28) == 0xFF )
          {
LABEL_41:
            if ( (*((uint8_t *)v35 + 47) & 1) != 0 )
            {
              v145 = v33;
              v140 = v31;
              gameswf::free_internal((gameswf::Self *)v35[10]);
              v31 = v140;
              v33 = v145;
            }
          }
        }
        else if ( *((uint8_t *)v35 + 28) == 0xFF )
        {
          goto LABEL_41;
        }
        *v35 = -2;
        v35[1] = 0;
        v30 = *(gameswf::Self **)(v33 + 28);
LABEL_36:
        ++v32;
        v34 += 48;
        if ( v31 < v32 )
        {
          v10 = v33;
LABEL_55:
          gameswf::free_internal(v30);
          *(uint32_t *)(v10 + 28) = 0;
LABEL_56:
          result = *(int **)a3;
          if ( *(uint32_t *)a3 != 0 )
          {
            result = (int *)*result;
            if ( result != nullptr )
            {
              v41 = 0;
              if ( (int)(uintptr_t)(result) >= 0 )
                v41 = (3 * (int)(uintptr_t)(result)) >> 1;
              v42 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)(v10 + 28);
              gameswf::hash_gameswf_StringI_gameswf_a0f678::set_raw_capacity(
                (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)(v10 + 28),
                v41);
              result = *(int **)a3;
              if ( *(uint32_t *)a3 != 0 )
              {
                v43 = result[1];
                if ( v43 >= 0 )
                {
                  v44 = nullptr;
                  if ( result[2] == -2 )
                  {
                    v51 = 14;
                    v44 = nullptr;
                    while ( 1 )
                    {
                      v44 = (gameswf::Self *)((char *)v44 + 1);
                      if ( (int)(uintptr_t)(v44) > v43 )
                        break;
                      v52 = result[v51];
                      v51 += 12;
                      if ( v52 != -2 )
                      {
                        v42 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)(v10 + 28);
                        goto LABEL_65;
                      }
                    }
                  }
                  else
                  {
LABEL_65:
                    while ( 1 )
                    {
                      gameswf::hash_gameswf_StringI_gameswf_a0f678::add(
                        v42,
                        (const gameswf::StringI::Self *)&result[12 * (uint32_t)(uintptr_t)(v44) + 4],
                        (const gameswf::String::Self *)&result[12 * (uint32_t)(uintptr_t)(v44) + 9]);
                      result = *(int **)a3;
                      v45 = *(uint32_t *)(*(uint32_t *)a3 + 4);
                      if ( (int)(uintptr_t)(v44) > v45 )
                        break;
                      v163 = (gameswf::Self *)((char *)v44 + 1);
                      if ( v45 < (int)(uintptr_t)(v44) + 1 )
                        break;
                      if ( result[12 * ((uint32_t)(uintptr_t)(v44) + 1) + 2] == -2 )
                      {
                        v113 = (int)(uintptr_t)(v44) + 2;
                        v170 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v42;
                        v114 = 48 * v113 + 8;
                        while ( 1 )
                        {
                          v163 = (gameswf::Self *)v113;
                          if ( v45 < v113 )
                            goto LABEL_62;
                          v115 = *(int *)((char *)result + v114);
                          ++v113;
                          v114 += 48;
                          if ( v115 != -2 )
                          {
                            v42 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)v170;
                            break;
                          }
                        }
                      }
                      v44 = v163;
                    }
                  }
                }
              }
            }
          }
LABEL_62:
          *(uint32_t *)v10 = -1;
          *(uint32_t *)(v10 + 4) = v175;
          return result;
        }
      }
    }
    *(uint32_t *)v12 = (uint32_t)(uintptr_t)(v165);
    *((uint32_t *)v7 + 8 * v9 + 3) = *(uint32_t *)(v10 + 4);
    *((uint8_t *)v7 + 32 * v9 + 16) = 1;
    *((uint8_t *)v7 + 32 * v9 + 17) = 0;
    v74 = *(uint8_t *)(v10 + 8);
    if ( v74 == -1 )
      v75 = *(uint32_t *)(v10 + 12) - 1;
    else
      v75 = v74 - 1;
    gameswf::String::resize((gameswf::Self *)((char *)v7 + 32 * v9 + 16), v75);
    v76 = (gameswf::Self *)(v10 + 9);
    if ( *(uint8_t *)(v10 + 8) == 0xFF )
      v76 = *(gameswf::Self **)(v10 + 20);
    LOBYTE(v77) = *(uint8_t *)(v12 + 8);
    if ( (uint8_t)(uintptr_t)(v77) == 0xFF )
    {
      v77 = *(char **)(v12 + 12);
      v78 = *(gameswf::Self **)(v12 + 20);
    }
    else
    {
      v77 = (char *)(char)(uintptr_t)(v77);
      v78 = (gameswf::Self *)(v12 + 9);
    }
    gameswf::Strcpy_s(v78, v77, v76);
    v155 = *(gameswf::Self **)(v10 + 24);
    if ( (uint8_t *)((unsigned int)(uintptr_t)(v155) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      v128 = *(uint8_t *)(v10 + 8);
      if ( v128 == -1 )
      {
        v129 = *(uint32_t *)(v10 + 20);
        v130 = *(uint32_t *)(v10 + 12) - 1;
      }
      else
      {
        v129 = v10 + 9;
        v130 = v128 - 1;
      }
      v79 = 5381;
      if ( v130 > 0 )
      {
        v174 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v10;
        do
        {
          --v130;
          v131 = 33 * v79;
          v132 = *(uint8_t *)(v129 + v130) + 32;
          if ( (uint8_t)(*(uint8_t *)(v129 + v130) - 65) > 0x19u )
            v132 = *(uint8_t *)(v129 + v130);
          v79 = v131 ^ v132;
        }
        while ( v130 != 0 );
        v10 = (int)(uintptr_t)(v174);
        v79 = v79 << 9 >> 9;
      }
      *(uint32_t *)(v10 + 24) = v79 & 0x7FFFFF | (unsigned int)(uintptr_t)(v155) & 0xFF800000;
    }
    else
    {
      v79 = (int)((uint32_t)(uintptr_t)(v155) << 9) >> 9;
    }
    v80 = v79 & 0x7FFFFF | *(uint32_t *)(v12 + 24) & 0xFF800000;
    *(uint32_t *)(v12 + 28) = 0;
    *(uint32_t *)(v12 + 24) = v80;
    *(uint8_t *)(v12 + 26) = BYTE2(v80) & 0x7F;
    *(uint8_t *)(v12 + 27) = HIBYTE(v80) | 1;
    v81 = *(int **)(v10 + 28);
    if ( v81 != nullptr )
    {
      v82 = *v81;
      v83 = *v81 < 0;
      if ( *v81 != 0 )
      {
        v84 = 0;
        if ( !v83 )
          v84 = (3 * v82) >> 1;
        v168 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)(v12 + 28);
        gameswf::hash_gameswf_StringI_gameswf_a0f678::set_raw_capacity(
          (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)(v12 + 28),
          v84);
        v81 = *(int **)(v10 + 28);
        if ( v81 != nullptr )
        {
          v85 = v81[1];
          if ( v85 >= 0 )
          {
            v97 = nullptr;
            if ( v81[2] == -2 )
            {
              v161 = (gameswf::Self *)&dword_38;
              v116 = 1;
              do
              {
                v164 = (gameswf::Self *)v116;
                if ( v116 > v85 )
                  goto LABEL_132;
                v117 = v161;
                ++v116;
                v161 = (gameswf::Self *)((char *)v161 + 48);
              }
              while ( *(uint32_t *)((char *)v117 + (uint32_t)(uintptr_t)(v81)) == -2 );
              v97 = v164;
            }
            v158 = (gameswf::Self *)(v10 + 28);
            while ( 1 )
            {
              gameswf::hash_gameswf_StringI_gameswf_a0f678::add(
                v168,
                (const gameswf::StringI::Self *)&v81[12 * (uint32_t)(uintptr_t)(v97) + 4],
                (const gameswf::String::Self *)&v81[12 * (uint32_t)(uintptr_t)(v97) + 9]);
              v81 = *(int **)v158;
              v98 = *(uint32_t *)(*(uint32_t *)v158 + 4);
              if ( v98 < (int)(uintptr_t)(v97) )
                goto LABEL_132;
              v172 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)((gameswf::Self *)((char *)v97 + 1));
              if ( v98 < (int)(uintptr_t)(v97) + 1 )
                goto LABEL_132;
              if ( v81[12 * ((uint32_t)(uintptr_t)(v97) + 1) + 2] == -2 )
                break;
LABEL_159:
              v97 = (gameswf::Self *)(v172);
            }
            v136 = (int)(uintptr_t)(v97) + 2;
            v137 = 48 * v136 + 8;
            while ( 1 )
            {
              v172 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v136;
              if ( *(uint32_t *)(*(uint32_t *)v158 + 4) < v136 )
                break;
              v138 = *(int *)((char *)v81 + v137);
              ++v136;
              v137 += 48;
              if ( v138 != -2 )
                goto LABEL_159;
            }
          }
        }
      }
    }
LABEL_132:
    if ( a2 != (char *)(v10 + 8) )
    {
      if ( *a2 == -1 )
        v86 = *((uint32_t *)a2 + 1) - 1;
      else
        v86 = *a2 - 1;
      gameswf::String::resize((gameswf::String::Self *)(v10 + 8), v86);
      v87 = (gameswf::Self *)(a2 + 1);
      if ( *a2 == -1 )
        v87 = *((gameswf::Self **)a2 + 3);
      LOBYTE(v88) = *(uint8_t *)(v10 + 8);
      if ( (uint8_t)(uintptr_t)(v88) == 0xFF )
      {
        v88 = *(char **)(v10 + 12);
        v89 = *(gameswf::Self **)(v10 + 20);
      }
      else
      {
        v88 = (char *)(char)(uintptr_t)(v88);
        v89 = (gameswf::Self *)(v10 + 9);
      }
      gameswf::Strcpy_s(v89, v88, v87);
      v156 = *((gameswf::Self **)a2 + 4);
      if ( (uint8_t *)((unsigned int)(uintptr_t)(v156) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *a2 == -1 )
        {
          v125 = *((char **)a2 + 3);
          v124 = *((uint32_t *)a2 + 1) - 1;
        }
        else
        {
          v124 = *a2 - 1;
          v125 = a2 + 1;
        }
        v90 = 5381;
        if ( v124 > 0 )
        {
          v173 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v10;
          do
          {
            --v124;
            v126 = 33 * v90;
            v127 = (uint8_t)v125[v124] + 32;
            if ( (uint8_t)(v125[v124] - 65) > 0x19u )
              v127 = (uint8_t)v125[v124];
            v90 = v126 ^ v127;
          }
          while ( v124 != 0 );
          v10 = (int)(uintptr_t)(v173);
          v90 = v90 << 9 >> 9;
        }
        *((uint32_t *)a2 + 4) = v90 & 0x7FFFFF | (unsigned int)(uintptr_t)(v156) & 0xFF800000;
      }
      else
      {
        v90 = (int)((uint32_t)(uintptr_t)(v156) << 9) >> 9;
      }
      v91 = v90 & 0x7FFFFF | *(uint32_t *)(v10 + 24) & 0xFF800000;
      v81 = *(int **)(v10 + 28);
      *(uint32_t *)(v10 + 24) = v91;
    }
    if ( v81 == nullptr )
      goto LABEL_162;
    if ( v81[1] < 0 )
      goto LABEL_161;
    v157 = (gameswf::Self *)v9;
    v92 = 0;
    v93 = v10;
    v94 = v81[1];
    v95 = 2;
    while ( 1 )
    {
      v96 = &v81[v95];
      if ( v81[v95] == -2 )
        goto LABEL_147;
      if ( *((uint8_t *)v96 + 8) == 0xFF && (*((uint8_t *)v96 + 27) & 1) != 0 )
      {
        v147 = v94;
        v141 = v93;
        gameswf::free_internal((gameswf::Self *)v96[5]);
        v93 = v141;
        v94 = v147;
        if ( *((uint8_t *)v96 + 28) == 0xFF )
        {
LABEL_152:
          if ( (*((uint8_t *)v96 + 47) & 1) != 0 )
          {
            v148 = v94;
            v142 = v93;
            gameswf::free_internal((gameswf::Self *)v96[10]);
            v93 = v142;
            v94 = v148;
          }
        }
      }
      else if ( *((uint8_t *)v96 + 28) == 0xFF )
      {
        goto LABEL_152;
      }
      *v96 = -2;
      v96[1] = 0;
      v81 = *(int **)(v93 + 28);
LABEL_147:
      ++v92;
      v95 += 12;
      if ( v94 < v92 )
      {
        v10 = v93;
        v9 = (int)(uintptr_t)(v157);
LABEL_161:
        gameswf::free_internal((gameswf::Self *)v81);
        *(uint32_t *)(v10 + 28) = 0;
LABEL_162:
        result = *(int **)a3;
        if ( *(uint32_t *)a3 != 0 )
        {
          v99 = (int *)*result;
          v100 = *result < 0;
          if ( *result != 0 )
          {
            v101 = 0;
            if ( !v100 )
              v101 = (3 * (int)(uintptr_t)(v99)) >> 1;
            gameswf::hash_gameswf_StringI_gameswf_a0f678::set_raw_capacity(
              (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)(v10 + 28),
              v101);
            result = *(int **)a3;
            if ( *(uint32_t *)a3 != 0 && result[1] >= 0 )
            {
              v102 = nullptr;
              if ( result[2] == -2 )
              {
                v108 = 14;
                v102 = nullptr;
                while ( 1 )
                {
                  v102 = (gameswf::Self *)((char *)v102 + 1);
                  if ( (int)(uintptr_t)(v102) > result[1] )
                    break;
                  v109 = result[v108];
                  v108 += 12;
                  if ( v109 != -2 )
                    goto LABEL_170;
                }
              }
              else
              {
                while ( 1 )
                {
LABEL_170:
                  gameswf::hash_gameswf_StringI_gameswf_a0f678::add(
                    (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)(v10 + 28),
                    (const gameswf::StringI::Self *)&result[12 * (uint32_t)(uintptr_t)(v102) + 4],
                    (const gameswf::String::Self *)&result[12 * (uint32_t)(uintptr_t)(v102) + 9]);
                  result = *(int **)a3;
                  v103 = *(uint32_t *)(*(uint32_t *)a3 + 4);
                  if ( v103 < (int)(uintptr_t)(v102) )
                    goto LABEL_168;
                  v159 = (gameswf::Self *)((char *)v102 + 1);
                  if ( v103 < (int)(uintptr_t)(v102) + 1 )
                    goto LABEL_168;
                  if ( result[12 * ((uint32_t)(uintptr_t)(v102) + 1) + 2] == -2 )
                    break;
LABEL_173:
                  v102 = v159;
                }
                v133 = (int)(uintptr_t)(v102) + 2;
                v134 = 48 * v133 + 8;
                while ( 1 )
                {
                  v159 = (gameswf::Self *)v133;
                  if ( *(uint32_t *)(*(uint32_t *)a3 + 4) < v133 )
                    break;
                  v135 = *(int *)((char *)result + v134);
                  ++v133;
                  v134 += 48;
                  if ( v135 != -2 )
                    goto LABEL_173;
                }
              }
            }
          }
        }
LABEL_168:
        *(uint32_t *)v10 = v9;
        *(uint32_t *)(v10 + 4) = v175;
        return result;
      }
    }
  }
  *(uint32_t *)(v10 + 4) = v175;
  *(uint32_t *)v10 = -1;
  *(uint8_t *)(v10 + 8) = 1;
  *(uint8_t *)(v10 + 9) = 0;
  if ( *a2 == -1 )
    v55 = *((uint32_t *)a2 + 1) - 1;
  else
    v55 = *a2 - 1;
  gameswf::String::resize((gameswf::String::Self *)(v10 + 8), v55);
  v56 = (gameswf::Self *)(a2 + 1);
  if ( *a2 == -1 )
    v56 = *((gameswf::Self **)a2 + 3);
  LOBYTE(v57) = *(uint8_t *)(v10 + 8);
  if ( (uint8_t)(uintptr_t)(v57) == 0xFF )
  {
    v57 = *(char **)(v10 + 12);
    v58 = *(gameswf::Self **)(v10 + 20);
  }
  else
  {
    v57 = (char *)(char)(uintptr_t)(v57);
    v58 = (gameswf::Self *)(v10 + 9);
  }
  gameswf::Strcpy_s(v58, v57, v56);
  v154 = *((gameswf::Self **)a2 + 4);
  if ( (uint8_t *)((unsigned int)(uintptr_t)(v154) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *a2 == -1 )
    {
      v121 = *((char **)a2 + 3);
      v120 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v120 = *a2 - 1;
      v121 = a2 + 1;
    }
    v59 = 5381;
    if ( v120 > 0 )
    {
      do
      {
        --v120;
        v122 = 33 * v59;
        v123 = (uint8_t)v121[v120] + 32;
        if ( (uint8_t)(v121[v120] - 65) > 0x19u )
          v123 = (uint8_t)v121[v120];
        v59 = v122 ^ v123;
      }
      while ( v120 != 0 );
      v59 = v59 << 9 >> 9;
    }
    *((uint32_t *)a2 + 4) = v59 & 0x7FFFFF | (unsigned int)(uintptr_t)(v154) & 0xFF800000;
  }
  else
  {
    v59 = (int)((uint32_t)(uintptr_t)(v154) << 9) >> 9;
  }
  v60 = *(uint32_t *)(v10 + 24) & 0xFF800000;
  *(uint32_t *)(v10 + 28) = 0;
  v61 = v59 & 0x7FFFFF | v60;
  *(uint32_t *)(v10 + 24) = v61;
  *(uint8_t *)(v10 + 26) = BYTE2(v61) & 0x7F;
  *(uint8_t *)(v10 + 27) = HIBYTE(v61) | 1;
  result = *(int **)a3;
  if ( *(uint32_t *)a3 != 0 )
  {
    result = (int *)*result;
    if ( result != nullptr )
    {
      v62 = 0;
      if ( (int)(uintptr_t)(result) >= 0 )
        v62 = (3 * (int)(uintptr_t)(result)) >> 1;
      v63 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)(v10 + 28);
      gameswf::hash_gameswf_StringI_gameswf_a0f678::set_raw_capacity(
        v63,
        v62);
      result = *(int **)a3;
      if ( *(uint32_t *)a3 != 0 )
      {
        v64 = result[1];
        if ( v64 >= 0 )
        {
          v65 = 0;
          if ( result[2] == -2 )
          {
            v110 = 14;
            v111 = 1;
            v160 = (gameswf::Self *)v63;
            do
            {
              v65 = v111;
              if ( v64 < v111 )
                return result;
              v112 = result[v110];
              ++v111;
              v110 += 12;
            }
            while ( v112 == -2 );
            v63 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)v160;
          }
          while ( 1 )
          {
            gameswf::hash_gameswf_StringI_gameswf_a0f678::add(
              v63,
              (const gameswf::StringI::Self *)&result[12 * v65 + 4],
              (const gameswf::String::Self *)&result[12 * v65 + 9]);
            result = *(int **)a3;
            v66 = *(uint32_t *)(*(uint32_t *)a3 + 4);
            if ( v66 < v65 )
              break;
            v67 = v65 + 1;
            if ( v66 < v65 + 1 )
              break;
            if ( result[12 * v67 + 2] == -2 )
            {
              v68 = 16 * (3 * v65 + 6) + 8;
              do
              {
                if ( v66 < ++v67 )
                  return result;
                v69 = *(int *)((char *)result + v68);
                v68 += 48;
              }
              while ( v69 == -2 );
              v65 = v67;
            }
            else
            {
              ++v65;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_ASBitmapData_gam_83cea1::clear  (binary VA: 0x1163e90)
// Original: gameswf::hash<gameswf::ASBitmapData *,gameswf::smart_ptr<gameswf::ASBitmapData>,gameswf::fixed_size_hash<gameswf::ASBitmapData *>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> * gameswf::hash_gameswf_ASBitmapData_gam_83cea1::clear(gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> **self)
{
  gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> *result;
  int v2;
  int i;
  uint32_t *v4;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      for ( i = 0; i <= v2; ++i )
      {
        v4 = (uint32_t *)((char *)result + 16 * i + 8);
        if ( *v4 != -2 )
        {
          if ( *((uint32_t *)result + 4 * i + 5) != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)result + 4 * i + 5));
          *v4 = -2;
          v4[1] = 0;
          result = *self;
        }
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_ASBitmapData_gam_83cea1::set_raw_capacity  (binary VA: 0x1163f20)
// Original: gameswf::hash<gameswf::ASBitmapData *,gameswf::smart_ptr<gameswf::ASBitmapData>,gameswf::fixed_size_hash<gameswf::ASBitmapData *>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> * gameswf::hash_gameswf_ASBitmapData_gam_83cea1::set_raw_capacity(gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> *result;
  gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> *v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> *v8;
  int i;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_gameswf_ASBitmapData_gam_83cea1::clear(self);
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
  if ( *self == nullptr
    || (result = (gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> *)v3 )
  {
    v13 = (gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> *)gameswf::malloc_internal(16 * v3 + 8);
    *(uint32_t *)v13 = 0;
    v5 = v13;
    v6 = 8;
    *((uint32_t *)v13 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 16;
      if ( v3 <= v7 )
        break;
      v5 = v13;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v12 = *((uint32_t *)v8 + 1);
      if ( v12 >= 0 )
      {
        for ( i = 0; i <= v12; ++i )
        {
          v10 = (int)(uintptr_t)(v8) + 16 * i + 8;
          if ( *(uint32_t *)v10 != -2 )
          {
            v11 = i;
            gameswf::hash_gameswf_ASBitmapData_gam_83cea1::add(
              (gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> *)&v13,
              (int)(uintptr_t)(v8) + 16 * i + 16,
              (int)(uintptr_t)(v8) + 16 * i + 20);
            i = v11;
            if ( *(uint32_t *)(v10 + 12) != 0 )
            {
              gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v10 + 12));
              i = v11;
            }
            *(uint32_t *)v10 = -2;
            *(uint32_t *)(v10 + 4) = 0;
            v8 = *self;
          }
        }
      }
      gameswf::free_internal(v8);
    }
    result = v13;
    *self = v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_ASBitmapData_gam_83cea1::add  (binary VA: 0x1164080)
// Original: gameswf::hash<gameswf::ASBitmapData *,gameswf::smart_ptr<gameswf::ASBitmapData>,gameswf::fixed_size_hash<gameswf::ASBitmapData *>>::add
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::hash_gameswf_ASBitmapData_gam_83cea1::add(gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> **a1, uint8_t *a2, gameswf::RefCounted::Self **a3)
{
  gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> *v3;
  int v4;
  gameswf::hash<gameswf::ASBitmapData::Self *, gameswf::smart_ptr<gameswf::ASBitmapData::Self>, gameswf::fixed_size_hash<gameswf::ASBitmapData::Self *>> *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int *v11;
  gameswf::RefCounted::Self *v12;
  gameswf::RefCounted::Self *result;
  gameswf::RefCounted::Self *v14;
  bool v15;
  gameswf::RefCounted::Self *v16;
  gameswf::RefCounted::Self *v17;
  int v18;
  int v19;
  int v20;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_gameswf_ASBitmapData_gam_83cea1::set_raw_capacity(
        a1,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_gameswf_ASBitmapData_gam_83cea1::set_raw_capacity(
      a1,
      8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  v19 = 65599 * (((a2[2] + 65599 * (a2[3] + 352988219)) << 6) + a2[1] + 0xFFFF * (a2[2] + 65599 * (a2[3] + 352988219)))
      + *a2;
  v5 = *a1;
  v6 = *((uint32_t *)*a1 + 1);
  v18 = v6 & v19;
  v7 = v6 & v19;
  v8 = (int)(uintptr_t)(*a1) + 16 * (v6 & v19) + 8;
  v20 = *(uint32_t *)v8;
  if ( *(uint32_t *)v8 == -2 )
  {
    *(uint32_t *)v8 = -1;
    *(uint32_t *)(v8 + 4) = v19;
    *(uint32_t *)(v8 + 8) = *(uint32_t *)a2;
    result = *a3;
    v15 = *a3 == nullptr;
    *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(*a3);
    if ( !v15 )
      return gameswf::RefCounted::addRef(result);
  }
  else
  {
    do
    {
      v7 = v6 & (v7 + 1);
      v9 = (uint32_t *)((char *)v5 + 16 * v7 + 8);
    }
    while ( *v9 != -2 && v7 != (v6 & v19) );
    v10 = *((uint32_t *)*a1 + 4 * (v6 & v19) + 3) & v6;
    if ( v10 == v18 )
    {
      *v9 = v20;
      *((uint32_t *)v5 + 4 * v7 + 3) = *(uint32_t *)(v8 + 4);
      *((uint32_t *)v5 + 4 * v7 + 4) = *(uint32_t *)(v8 + 8);
      v16 = *(gameswf::RefCounted::Self **)(v8 + 12);
      *((uint32_t *)v5 + 4 * v7 + 5) = (uint32_t)(uintptr_t)(v16);
      if ( v16 != nullptr )
        gameswf::RefCounted::addRef(v16);
      *(uint32_t *)(v8 + 8) = *(uint32_t *)a2;
      result = *(gameswf::RefCounted::Self **)(v8 + 12);
      v17 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v8 + 12));
        *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v17);
        if ( v17 != nullptr )
          result = gameswf::RefCounted::addRef(v17);
      }
      *(uint32_t *)v8 = v7;
      *(uint32_t *)(v8 + 4) = v19;
    }
    else
    {
      do
      {
        v11 = (int *)((char *)v5 + 16 * v10 + 8);
        v10 = *v11;
      }
      while ( *v11 != v18 );
      *v9 = v20;
      *((uint32_t *)v5 + 4 * v7 + 3) = *(uint32_t *)(v8 + 4);
      *((uint32_t *)v5 + 4 * v7 + 4) = *(uint32_t *)(v8 + 8);
      v12 = *(gameswf::RefCounted::Self **)(v8 + 12);
      *((uint32_t *)v5 + 4 * v7 + 5) = (uint32_t)(uintptr_t)(v12);
      if ( v12 != nullptr )
        gameswf::RefCounted::addRef(v12);
      *v11 = v7;
      *(uint32_t *)(v8 + 8) = *(uint32_t *)a2;
      result = *(gameswf::RefCounted::Self **)(v8 + 12);
      v14 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v8 + 12));
        *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v14);
        if ( v14 != nullptr )
          result = gameswf::RefCounted::addRef(v14);
      }
      *(uint32_t *)v8 = -1;
      *(uint32_t *)(v8 + 4) = v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_a_5510e3::find_index  (binary VA: 0x116b410)
// Original: gameswf::hash<gameswf::String,gameswf::array<gameswf::ASEventDispatcher::Entry>,gameswf::string_hash_functor<gameswf::String>>::find_index
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_String_gameswf_a_5510e3::find_index(gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *self, const gameswf::String::Self *a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  int i;
  const char *s1;
  int v13;
  const char *v15;
  int v16;
  int v17;
  int v18;
  char *v19;

  v2 = *(uint32_t *)self;
  if ( *(uint32_t *)self == 0 )
    return -1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v3 = *((char **)a2 + 3);
    v4 = *((uint32_t *)a2 + 1) - 1;
  }
  else
  {
    v3 = (char *)a2 + 1;
    v4 = *(char *)a2 - 1;
  }
  v5 = 5381;
  if ( v4 > 0 )
  {
    do
      v5 = (33 * v5) ^ (uint8_t)v3[--v4];
    while ( v4 != 0 );
  }
  v6 = *(uint32_t *)(v2 + 4);
  v19 = (char *)(v6 & v5);
  v7 = 44 * (v6 & v5);
  v8 = (uint32_t *)(v2 + v7 + 8);
  if ( *v8 == -2 )
    return -1;
  v9 = *(uint32_t *)(v2 + v7 + 12);
  v10 = v9 & v6;
  if ( (char *)v10 != v19 )
    return -1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    while ( 1 )
    {
      if ( v5 == v9 )
      {
        if ( a2 == (const gameswf::String::Self *)(v8 + 2) )
          return v10;
        v15 = (char *)v8 + 9;
        if ( *((uint8_t *)v8 + 8) == 0xFF )
          v15 = (const char *)v8[5];
        v18 = v2;
        v16 = strcmp(v15, *((const char **)a2 + 3));
        v2 = v18;
        if ( v16 == 0 )
          break;
      }
      v10 = *v8;
      if ( *v8 == -1 )
        return v10;
      v8 = (uint32_t *)(v2 + 44 * v10 + 8);
      v9 = *(uint32_t *)(v2 + 44 * v10 + 12);
    }
    return v10;
  }
  else
  {
    for ( i = v8[1]; ; i = *(uint32_t *)(v2 + 44 * v10 + 12) )
    {
      if ( v5 == i )
      {
        if ( a2 == (const gameswf::String::Self *)(v8 + 2) )
          break;
        s1 = (char *)v8 + 9;
        if ( *((uint8_t *)v8 + 8) == 0xFF )
          s1 = (const char *)v8[5];
        v17 = v2;
        v13 = strcmp(s1, (const char *)a2 + 1);
        v2 = v17;
        if ( v13 == 0 )
          break;
      }
      v10 = *v8;
      if ( *v8 == -1 )
        break;
      v8 = (uint32_t *)(v2 + 44 * v10 + 8);
    }
    return v10;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_a_5510e3::set_raw_capacity  (binary VA: 0x116bbc0)
// Original: gameswf::hash<gameswf::String,gameswf::array<gameswf::ASEventDispatcher::Entry>,gameswf::string_hash_functor<gameswf::String>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> * gameswf::hash_gameswf_String_gameswf_a_5510e3::set_raw_capacity(gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *result;
  gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *v8;
  int v9;
  int i;
  uint32_t *v11;
  gameswf::Self *v12;
  gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *_g4_t_v16[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_gameswf_String_gameswf_a_5510e3::clear(self);
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
  if ( *self == nullptr
    || (result = (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *)v3 )
  {
    v16[0] = (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *)gameswf::malloc_internal(44 * v3 + 8);
    *(uint32_t *)v16[0] = 0;
    v5 = v16[0];
    v6 = 8;
    *((uint32_t *)v16[0] + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 44;
      if ( v3 <= v7 )
        break;
      v5 = v16[0];
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v15 = *((uint32_t *)v8 + 1);
      if ( v15 >= 0 )
      {
        v9 = 8;
        for ( i = 0; i <= v15; ++i )
        {
          v11 = (uint32_t *)((char *)v8 + v9);
          if ( *(uint32_t *)((char *)v8 + v9) != -2 )
          {
            v14 = v9;
            gameswf::hash_gameswf_String_gameswf_a_5510e3::add(
              (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *)v16,
              (const gameswf::String::Self *)(v11 + 2),
              (const gameswf::array<gameswf::ASEventDispatcher::Entry> *)(v11 + 7));
            sub_59CE50((int)(uintptr_t)(v11 + 2));
            gameswf::array_gameswf_ASEventDispatche_897fc7::resize(
              (gameswf::array<gameswf::ASEventDispatcher::Entry> *)(v11 + 7),
              0);
            v9 = v14;
            if ( v11[10] == 0 )
            {
              v12 = (gameswf::Self *)v11[7];
              v11[9] = 0;
              if ( v12 != nullptr )
              {
                gameswf::free_internal(v12);
                v9 = v14;
              }
              v11[7] = 0;
            }
            *v11 = -2;
            v11[1] = 0;
            v8 = *self;
          }
          v9 += 44;
        }
      }
      gameswf::free_internal(v8);
    }
    v13 = v16[0];
    v16[0] = nullptr;
    *self = v13;
    return gameswf::hash_gameswf_String_gameswf_a_5510e3::clear(v16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_a_5510e3::add  (binary VA: 0x116bda0)
// Original: gameswf::hash<gameswf::String,gameswf::array<gameswf::ASEventDispatcher::Entry>,gameswf::string_hash_functor<gameswf::String>>::add
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_String_gameswf_a_5510e3::add(gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> **self, const gameswf::String::Self *a2, const gameswf::array<gameswf::ASEventDispatcher::Entry> *a3)
{
  gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *v8;
  int v9;
  int v10;
  gameswf::array<gameswf::ASEventDispatcher::Entry> **v11;
  int v12;
  int *v13;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  gameswf::Self *v20;
  char *v21;
  gameswf::Self *v22;
  int v23;
  int result;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  char *v30;
  int v31;
  int v32;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v33;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v34;
  int v35;
  int v36;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v37;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v38;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v39;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v40;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v41;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v42;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v43;
  int *v44;
  gameswf::String::Self *v45;
  int *v46;
  gameswf::array<gameswf::ASEventDispatcher::Entry> *v47;
  int v48;

  v3 = *self;
  if ( *self != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_gameswf_String_gameswf_a_5510e3::set_raw_capacity(
        self,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *self;
      v4 = *(uint32_t *)*self;
    }
  }
  else
  {
    gameswf::hash_gameswf_String_gameswf_a_5510e3::set_raw_capacity(
      self,
      8);
    v3 = *self;
    v4 = *(uint32_t *)*self;
  }
  *(uint32_t *)v3 = v4 + 1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v6 = *((char **)a2 + 3);
    v5 = *((uint32_t *)a2 + 1) - 1;
  }
  else
  {
    v5 = *(char *)a2 - 1;
    v6 = (char *)a2 + 1;
  }
  v7 = 5381;
  if ( v5 > 0 )
  {
    do
      v7 = (33 * v7) ^ (uint8_t)v6[--v5];
    while ( v5 != 0 );
  }
  v8 = *self;
  v39 = *((gameswf::array<gameswf::ASEventDispatcher::Entry> **)*self + 1);
  v9 = v7 & (unsigned int)(uintptr_t)(v39);
  v44 = (int *)((char *)*self + 44 * (v7 & (unsigned int)(uintptr_t)(v39)) + 8);
  v10 = v7 & (unsigned int)(uintptr_t)(v39);
  v37 = (gameswf::array<gameswf::ASEventDispatcher::Entry> *)*v44;
  if ( *v44 == -2 )
  {
    *((uint32_t *)*self + 11 * (v7 & (unsigned int)(uintptr_t)(v39)) + 3) = v7;
    *v44 = -1;
    sub_7763C0((gameswf::String::Self *)(v44 + 2), (char *)a2);
    v44[7] = 0;
    v44[8] = 0;
    v44[9] = 0;
    v44[10] = 0;
    return gameswf::array_gameswf_ASEventDispatche_897fc7::opAssign(
             (gameswf::array<gameswf::ASEventDispatcher::Entry> *)(v44 + 7),
             a3);
  }
  else
  {
    do
    {
      v10 = (unsigned int)(uintptr_t)(v39) & (v10 + 1);
      v11 = (gameswf::array<gameswf::ASEventDispatcher::Entry> **)((char *)v8 + 44 * v10 + 8);
    }
    while ( *v11 != (gameswf::array<gameswf::ASEventDispatcher::Entry> *)-2 && v10 != v9 );
    v12 = *((uint32_t *)*self + 11 * (v7 & (unsigned int)(uintptr_t)(v39)) + 3) & (unsigned int)(uintptr_t)(v39);
    if ( v12 == v9 )
    {
      *v11 = v37;
      *((uint32_t *)v8 + 11 * v10 + 3) = v44[1];
      v36 = v10;
      sub_7763C0(
        (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)v8 + 44 * v10 + 16),
        (char *)v44 + 8);
      v11[7] = nullptr;
      v11[8] = nullptr;
      v11[9] = nullptr;
      v11[10] = nullptr;
      gameswf::array_gameswf_ASEventDispatche_897fc7::opAssign(
        (gameswf::array<gameswf::ASEventDispatcher::Entry> *)(v11 + 7),
        (const gameswf::array<gameswf::ASEventDispatcher::Entry> *)(v44 + 7));
      gameswf::String::opAssign((gameswf::Self **)v44 + 2, (gameswf::Self **)a2);
      gameswf::array_gameswf_ASEventDispatche_897fc7::opAssign(
        (gameswf::array<gameswf::ASEventDispatcher::Entry> *)(v44 + 7),
        a3);
      *v44 = v36;
      v44[1] = v7;
      return v36;
    }
    else
    {
      v40 = (gameswf::array<gameswf::ASEventDispatcher::Entry> *)v10;
      do
      {
        v13 = (int *)((char *)v8 + 44 * v12 + 8);
        v12 = *v13;
      }
      while ( *v13 != v9 );
      *v11 = v37;
      v46 = v13;
      v11[1] = (gameswf::array<gameswf::ASEventDispatcher::Entry> *)v44[1];
      v45 = (gameswf::String::Self *)(v44 + 2);
      v34 = v40;
      sub_7763C0((gameswf::String::Self *)(v11 + 2), (char *)v44 + 8);
      v41 = (gameswf::array<gameswf::ASEventDispatcher::Entry> *)(v11 + 7);
      v11[7] = nullptr;
      v11[8] = nullptr;
      v11[9] = nullptr;
      v11[10] = nullptr;
      v38 = (gameswf::array<gameswf::ASEventDispatcher::Entry> *)(v44 + 7);
      gameswf::array_gameswf_ASEventDispatche_897fc7::resize(
        (gameswf::array<gameswf::ASEventDispatcher::Entry> *)(v11 + 7),
        v44[8]);
      v14 = v34;
      if ( (int)(uintptr_t)(v11[8]) > 0 )
      {
        v15 = 0;
        v47 = v34;
        v48 = v7;
        v16 = 0;
        do
        {
          v17 = *(uint32_t *)v41 + v16;
          v18 = v16 + *(uint32_t *)v38;
          v16 += 24;
          v35 = v15;
          gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)v17, *(gameswf::Self **)v18);
          *(uint32_t *)(v17 + 4) = *(uint32_t *)(v18 + 4);
          gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(v17 + 8), *(gameswf::Self **)(v18 + 8));
          *(uint32_t *)(v17 + 12) = *(uint32_t *)(v18 + 12);
          *(uint32_t *)(v17 + 16) = *(uint32_t *)(v18 + 16);
          *(uint8_t *)(v17 + 20) = *(uint8_t *)(v18 + 20);
          v15 = v35 + 1;
        }
        while ( v35 + 1 < *((uint32_t *)v41 + 1) );
        v14 = v47;
        v7 = v48;
      }
      *v46 = (int)(uintptr_t)(v14);
      if ( a2 != v45 )
      {
        if ( *(uint8_t *)a2 == 0xFF )
          v19 = *((uint32_t *)a2 + 1) - 1;
        else
          v19 = *(char *)a2 - 1;
        gameswf::String::resize(v45, v19);
        if ( *(uint8_t *)a2 == 0xFF )
          v20 = *((gameswf::Self **)a2 + 3);
        else
          v20 = (gameswf::Self *)((const gameswf::String::Self *)((char *)a2 + 1));
        LOBYTE(v21) = *((uint8_t *)v44 + 8);
        if ( (uint8_t)(uintptr_t)(v21) == 0xFF )
        {
          v21 = (char *)v44[3];
          v22 = (gameswf::Self *)v44[5];
        }
        else
        {
          v21 = (char *)(char)(uintptr_t)(v21);
          v22 = (gameswf::Self *)((char *)v44 + 9);
        }
        gameswf::Strcpy_s(v22, v21, v20);
        v42 = *((gameswf::array<gameswf::ASEventDispatcher::Entry> **)a2 + 4);
        if ( (uint8_t *)((unsigned int)(uintptr_t)(v42) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          if ( *(uint8_t *)a2 == 0xFF )
          {
            v30 = *((char **)a2 + 3);
            v29 = *((uint32_t *)a2 + 1) - 1;
          }
          else
          {
            v29 = *(char *)a2 - 1;
            v30 = (char *)a2 + 1;
          }
          v23 = 5381;
          if ( v29 > 0 )
          {
            do
            {
              --v29;
              v31 = 33 * v23;
              v32 = (uint8_t)v30[v29] + 32;
              if ( (uint8_t)(v30[v29] - 65) > 0x19u )
                v32 = (uint8_t)v30[v29];
              v23 = v31 ^ v32;
            }
            while ( v29 != 0 );
            v23 = v23 << 9 >> 9;
          }
          *((uint32_t *)a2 + 4) = v23 & 0x7FFFFF | (unsigned int)(uintptr_t)(v42) & 0xFF800000;
        }
        else
        {
          v23 = (int)((uint32_t)(uintptr_t)(v42) << 9) >> 9;
        }
        v44[6] = v23 & 0x7FFFFF | v44[6] & 0xFF800000;
      }
      gameswf::array_gameswf_ASEventDispatche_897fc7::resize(v38, *((uint32_t *)a3 + 1));
      result = v44[8];
      if ( result > 0 )
      {
        v25 = nullptr;
        v26 = 0;
        v43 = (gameswf::array<gameswf::ASEventDispatcher::Entry> *)v7;
        do
        {
          v27 = *(uint32_t *)a3 + v26;
          v28 = v26 + *(uint32_t *)v38;
          v33 = v25;
          gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)v28, *(gameswf::Self **)v27);
          v26 += 24;
          *(uint32_t *)(v28 + 4) = *(uint32_t *)(v27 + 4);
          gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(v28 + 8), *(gameswf::Self **)(v27 + 8));
          *(uint32_t *)(v28 + 12) = *(uint32_t *)(v27 + 12);
          *(uint32_t *)(v28 + 16) = *(uint32_t *)(v27 + 16);
          result = *(uint8_t *)(v27 + 20);
          *(uint8_t *)(v28 + 20) = result;
          v25 = (gameswf::array<gameswf::ASEventDispatcher::Entry> *)((char *)v33 + 1);
        }
        while ( (int)(uintptr_t)(v33) + 1 < v44[8] );
        v7 = (int)(uintptr_t)(v43);
      }
      v44[1] = v7;
      *v44 = -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringPointer_in_aa74e2::clear  (binary VA: 0x117bd00)
// Original: gameswf::hash<gameswf::StringPointer,int,gameswf::string_pointer_hash_functor<gameswf::StringPointer>>::clear
// ----------------------------------------------------------------------------
void gameswf::hash_gameswf_StringPointer_in_aa74e2::clear(gameswf::Self **self)
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
// Function: gameswf::hash_gameswf_StringPointer_bo_ce8468::clear  (binary VA: 0x117bd80)
// Original: gameswf::hash<gameswf::StringPointer,bool,gameswf::string_pointer_hash_functor<gameswf::StringPointer>>::clear
// ----------------------------------------------------------------------------
void gameswf::hash_gameswf_StringPointer_bo_ce8468::clear(gameswf::Self **self)
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
// Function: gameswf::hash_gameswf_StringPointer_bo_ce8468::set_raw_capacity  (binary VA: 0x117c3e0)
// Original: gameswf::hash<gameswf::StringPointer,bool,gameswf::string_pointer_hash_functor<gameswf::StringPointer>>::set_raw_capacity
// ----------------------------------------------------------------------------
void gameswf::hash_gameswf_StringPointer_bo_ce8468::set_raw_capacity(gameswf::Self **self, int a2)
{
  int v2;
  int v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  int v8;
  int i;
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef gameswf::Self *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
  {
    gameswf::hash_gameswf_StringPointer_bo_ce8468::clear(self);
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
      v12 = (gameswf::Self *)gameswf::malloc_internal(16 * v3 + 8);
      *(uint32_t *)v12 = 0;
      v4 = v12;
      v5 = 8;
      *((uint32_t *)v12 + 1) = v3 - 1;
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        *(uint32_t *)((char *)v4 + v5) = -2;
        v5 += 16;
        if ( v3 <= v6 )
          break;
        v4 = v12;
      }
      v7 = *self;
      if ( *self != nullptr )
      {
        v8 = *((uint32_t *)v7 + 1);
        if ( v8 >= 0 )
        {
          for ( i = 0; i <= v8; ++i )
          {
            if ( *((uint32_t *)v7 + 4 * i + 2) != -2 )
            {
              v11 = (uint32_t *)((char *)v7 + 16 * i + 8);
              v10 = v8;
              gameswf::hash_gameswf_StringPointer_bo_ce8468::add(
                (gameswf::hash<gameswf::StringPointer, bool, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)&v12,
                (int)(uintptr_t)(v7) + 16 * i + 16,
                (int)(uintptr_t)(v7) + 16 * i + 20);
              *v11 = -2;
              v11[1] = 0;
              v7 = *self;
              v8 = v10;
            }
          }
        }
        gameswf::free_internal(v7);
      }
      *self = v12;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringPointer_bo_ce8468::add  (binary VA: 0x117c530)
// Original: gameswf::hash<gameswf::StringPointer,bool,gameswf::string_pointer_hash_functor<gameswf::StringPointer>>::add
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_StringPointer_bo_ce8468::add(gameswf::Self **a1, char **a2, char *a3)
{
  gameswf::Self *v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  gameswf::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  int *v15;
  int result;
  int v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  char v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    v5 = 2 * *((uint32_t *)v3 + 1) + 2;
    if ( 3 * *(uint32_t *)v3 > v5 )
    {
      gameswf::hash_gameswf_StringPointer_bo_ce8468::set_raw_capacity(
        a1,
        v5);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_gameswf_StringPointer_bo_ce8468::set_raw_capacity(
      a1,
      8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  v6 = *a2;
  v26 = *((uint32_t *)*a2 + 4);
  if ( (uint8_t *)(v26 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v6 == -1 )
    {
      v18 = *((char **)v6 + 3);
      v17 = *((uint32_t *)v6 + 1) - 1;
    }
    else
    {
      v17 = *v6 - 1;
      v18 = v6 + 1;
    }
    v25 = 5381;
    v19 = 5381;
    if ( v17 > 0 )
    {
      do
      {
        --v17;
        v20 = 33 * v19;
        v21 = (uint8_t)v18[v17] + 32;
        if ( (uint8_t)(v18[v17] - 65) > 0x19u )
          v21 = (uint8_t)v18[v17];
        v19 = v20 ^ v21;
      }
      while ( v17 != 0 );
      v19 = v19 << 9 >> 9;
      v25 = v19;
    }
    *((uint32_t *)*a2 + 4) = v19 & 0x7FFFFF | v26 & 0xFF800000;
    v7 = v25;
  }
  else
  {
    v25 = v26 << 9 >> 9;
    v7 = v25;
  }
  v8 = *a1;
  v9 = *((uint32_t *)*a1 + 1);
  v23 = v9 & v7;
  v10 = (int)(uintptr_t)(*a1) + 16 * (v9 & v7) + 8;
  v24 = *(uint32_t *)v10;
  v11 = v9 & v7;
  v12 = v11;
  if ( *(uint32_t *)v10 == -2 )
  {
    *(uint32_t *)(v10 + 4) = v25;
    *(uint32_t *)v10 = -1;
    *(uint32_t *)(v10 + 8) = (uint32_t)(uintptr_t)(*a2);
    result = (uint8_t)*a3;
    *(uint8_t *)(v10 + 12) = result;
  }
  else
  {
    do
    {
      v11 = v9 & (v11 + 1);
      v13 = (uint32_t *)((char *)v8 + 16 * v11 + 8);
    }
    while ( *v13 != -2 && v11 != v12 );
    v14 = *(uint32_t *)(v10 + 4) & v9;
    if ( v14 == v23 )
    {
      *v13 = v24;
      *((uint32_t *)v8 + 4 * v11 + 3) = *(uint32_t *)(v10 + 4);
      *((uint32_t *)v8 + 4 * v11 + 4) = *(uint32_t *)(v10 + 8);
      *((uint8_t *)v8 + 16 * v11 + 20) = *(uint8_t *)(v10 + 12);
      *(uint32_t *)(v10 + 8) = (uint32_t)(uintptr_t)(*a2);
      v22 = *a3;
      *(uint32_t *)v10 = v11;
      *(uint8_t *)(v10 + 12) = v22;
      *(uint32_t *)(v10 + 4) = v25;
      return v25;
    }
    else
    {
      do
      {
        v15 = (int *)((char *)v8 + 16 * v14 + 8);
        v14 = *v15;
      }
      while ( *v15 != v23 );
      *v13 = v24;
      *((uint32_t *)v8 + 4 * v11 + 3) = *(uint32_t *)(v10 + 4);
      *((uint32_t *)v8 + 4 * v11 + 4) = *(uint32_t *)(v10 + 8);
      *((uint8_t *)v8 + 16 * v11 + 20) = *(uint8_t *)(v10 + 12);
      *v15 = v11;
      *(uint32_t *)(v10 + 8) = (uint32_t)(uintptr_t)(*a2);
      result = (uint8_t)*a3;
      *(uint32_t *)(v10 + 4) = v25;
      *(uint8_t *)(v10 + 12) = result;
      *(uint32_t *)v10 = -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringPointer_in_aa74e2::set_raw_capacity  (binary VA: 0x117c7a0)
// Original: gameswf::hash<gameswf::StringPointer,int,gameswf::string_pointer_hash_functor<gameswf::StringPointer>>::set_raw_capacity
// ----------------------------------------------------------------------------
void gameswf::hash_gameswf_StringPointer_in_aa74e2::set_raw_capacity(gameswf::Self **self, int a2)
{
  int v2;
  int v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  int v8;
  int i;
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef gameswf::Self *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
  {
    gameswf::hash_gameswf_StringPointer_in_aa74e2::clear(self);
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
      v12 = (gameswf::Self *)gameswf::malloc_internal(16 * v3 + 8);
      *(uint32_t *)v12 = 0;
      v4 = v12;
      v5 = 8;
      *((uint32_t *)v12 + 1) = v3 - 1;
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        *(uint32_t *)((char *)v4 + v5) = -2;
        v5 += 16;
        if ( v3 <= v6 )
          break;
        v4 = v12;
      }
      v7 = *self;
      if ( *self != nullptr )
      {
        v8 = *((uint32_t *)v7 + 1);
        if ( v8 >= 0 )
        {
          for ( i = 0; i <= v8; ++i )
          {
            if ( *((uint32_t *)v7 + 4 * i + 2) != -2 )
            {
              v11 = (uint32_t *)((char *)v7 + 16 * i + 8);
              v10 = v8;
              gameswf::hash_gameswf_StringPointer_in_aa74e2::add(
                (gameswf::hash<gameswf::StringPointer, int, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)&v12,
                (int)(uintptr_t)(v7) + 16 * i + 16,
                (int)(uintptr_t)(v7) + 16 * i + 20);
              *v11 = -2;
              v11[1] = 0;
              v7 = *self;
              v8 = v10;
            }
          }
        }
        gameswf::free_internal(v7);
      }
      *self = v12;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringPointer_in_aa74e2::add  (binary VA: 0x117c8f0)
// Original: gameswf::hash<gameswf::StringPointer,int,gameswf::string_pointer_hash_functor<gameswf::StringPointer>>::add
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_StringPointer_in_aa74e2::add(gameswf::Self **a1, char **a2, int *a3)
{
  gameswf::Self *v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  gameswf::Self *v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int *v15;
  int result;
  int v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    v5 = 2 * *((uint32_t *)v3 + 1) + 2;
    if ( 3 * *(uint32_t *)v3 > v5 )
    {
      gameswf::hash_gameswf_StringPointer_in_aa74e2::set_raw_capacity(
        a1,
        v5);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_gameswf_StringPointer_in_aa74e2::set_raw_capacity(
      a1,
      8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  v6 = *a2;
  v26 = *((uint32_t *)*a2 + 4);
  if ( (uint8_t *)(v26 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v6 == -1 )
    {
      v18 = *((char **)v6 + 3);
      v17 = *((uint32_t *)v6 + 1) - 1;
    }
    else
    {
      v17 = *v6 - 1;
      v18 = v6 + 1;
    }
    v25 = 5381;
    v19 = 5381;
    if ( v17 > 0 )
    {
      do
      {
        --v17;
        v20 = 33 * v19;
        v21 = (uint8_t)v18[v17] + 32;
        if ( (uint8_t)(v18[v17] - 65) > 0x19u )
          v21 = (uint8_t)v18[v17];
        v19 = v20 ^ v21;
      }
      while ( v17 != 0 );
      v19 = v19 << 9 >> 9;
      v25 = v19;
    }
    *((uint32_t *)*a2 + 4) = v19 & 0x7FFFFF | v26 & 0xFF800000;
    v7 = v25;
  }
  else
  {
    v25 = v26 << 9 >> 9;
    v7 = v25;
  }
  v8 = *a1;
  v9 = *((uint32_t *)*a1 + 1);
  v23 = v9 & v7;
  v10 = (int *)((char *)*a1 + 16 * (v9 & v7) + 8);
  v24 = *v10;
  v11 = v9 & v7;
  v12 = v11;
  if ( *v10 == -2 )
  {
    v10[1] = v25;
    *v10 = -1;
    v10[2] = (int)(uintptr_t)(*a2);
    result = *a3;
    v10[3] = *a3;
  }
  else
  {
    do
    {
      v11 = v9 & (v11 + 1);
      v13 = (int *)((char *)v8 + 16 * v11 + 8);
    }
    while ( *v13 != -2 && v11 != v12 );
    v14 = v10[1] & v9;
    if ( v14 == v23 )
    {
      *v13 = v24;
      *((uint32_t *)v8 + 4 * v11 + 3) = v10[1];
      *((uint32_t *)v8 + 4 * v11 + 4) = v10[2];
      *((uint32_t *)v8 + 4 * v11 + 5) = v10[3];
      v10[2] = (int)(uintptr_t)(*a2);
      v22 = *a3;
      *v10 = v11;
      v10[3] = v22;
      v10[1] = v25;
      return v25;
    }
    else
    {
      do
      {
        v15 = (int *)((char *)v8 + 16 * v14 + 8);
        v14 = *v15;
      }
      while ( *v15 != v23 );
      *v13 = v24;
      *((uint32_t *)v8 + 4 * v11 + 3) = v10[1];
      *((uint32_t *)v8 + 4 * v11 + 4) = v10[2];
      *((uint32_t *)v8 + 4 * v11 + 5) = v10[3];
      *v15 = v11;
      v10[2] = (int)(uintptr_t)(*a2);
      result = *a3;
      v10[1] = v25;
      v10[3] = result;
      *v10 = -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_s_b74bac::clear  (binary VA: 0x1181210)
// Original: gameswf::hash<gameswf::String,gameswf::smart_ptr<gameswf::ASClass>,gameswf::string_hash_functor<gameswf::String>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> * gameswf::hash_gameswf_String_gameswf_s_b74bac::clear(gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> **self)
{
  gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *result;
  int v2;
  int i;
  int v4;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      for ( i = 0; i <= v2; ++i )
      {
        v4 = (int)(uintptr_t)(result) + 32 * i + 8;
        if ( *(uint32_t *)v4 != -2 )
        {
          if ( *((uint8_t *)result + 32 * i + 16) == 0xFF && (*((uint8_t *)result + 32 * i + 35) & 1) != 0 )
            gameswf::free_internal(*((gameswf::Self **)result + 8 * i + 7));
          if ( *(uint32_t *)(v4 + 28) != 0 )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v4 + 28));
          *(uint32_t *)v4 = -2;
          *(uint32_t *)(v4 + 4) = 0;
          result = *self;
        }
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_A_0f1111::clear  (binary VA: 0x11812c0)
// Original: gameswf::hash<gameswf::String,gameswf::ASValue,gameswf::string_hash_functor<gameswf::String>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> * gameswf::hash_gameswf_String_gameswf_A_0f1111::clear(gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> **self)
{
  gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *result;
  int v2;
  int v3;
  int i;
  gameswf::Self **v5;
  int v6;
  int v7;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      v3 = 8;
      for ( i = 0; i <= v2; ++i )
      {
        v5 = (gameswf::Self **)((char *)result + v3);
        if ( *(uint32_t *)((char *)result + v3) != -2 )
        {
          if ( *((uint8_t *)v5 + 8) == 0xFF && (*((uint8_t *)v5 + 27) & 1) != 0 )
          {
            v7 = v2;
            gameswf::free_internal(v5[5]);
            v2 = v7;
          }
          v6 = v2;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v5 + 7));
          *v5 = (gameswf::Self *)-2;
          v5[1] = nullptr;
          v2 = v6;
          result = *self;
        }
        v3 += 40;
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_s_b74bac::find_index  (binary VA: 0x1181390)
// Original: gameswf::hash<gameswf::String,gameswf::smart_ptr<gameswf::ASClass>,gameswf::string_hash_functor<gameswf::String>>::find_index
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_String_gameswf_s_b74bac::find_index(gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *self, const gameswf::String::Self *a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  int i;
  const char *s1;
  int v13;
  const char *v15;
  int v16;
  int v17;
  int v18;
  char *v19;

  v2 = *(uint32_t *)self;
  if ( *(uint32_t *)self == 0 )
    return -1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v3 = *((char **)a2 + 3);
    v4 = *((uint32_t *)a2 + 1) - 1;
  }
  else
  {
    v3 = (char *)a2 + 1;
    v4 = *(char *)a2 - 1;
  }
  v5 = 5381;
  if ( v4 > 0 )
  {
    do
      v5 = (33 * v5) ^ (uint8_t)v3[--v4];
    while ( v4 != 0 );
  }
  v6 = *(uint32_t *)(v2 + 4);
  v19 = (char *)(v6 & v5);
  v7 = 32 * (v6 & v5);
  v8 = (uint32_t *)(v2 + v7 + 8);
  if ( *v8 == -2 )
    return -1;
  v9 = *(uint32_t *)(v2 + v7 + 12);
  v10 = v9 & v6;
  if ( (char *)v10 != v19 )
    return -1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    while ( 1 )
    {
      if ( v5 == v9 )
      {
        if ( a2 == (const gameswf::String::Self *)(v8 + 2) )
          return v10;
        v15 = (char *)v8 + 9;
        if ( *((uint8_t *)v8 + 8) == 0xFF )
          v15 = (const char *)v8[5];
        v18 = v2;
        v16 = strcmp(v15, *((const char **)a2 + 3));
        v2 = v18;
        if ( v16 == 0 )
          break;
      }
      v10 = *v8;
      if ( *v8 == -1 )
        return v10;
      v8 = (uint32_t *)(v2 + 32 * v10 + 8);
      v9 = *(uint32_t *)(v2 + 32 * v10 + 12);
    }
    return v10;
  }
  else
  {
    for ( i = v8[1]; ; i = *(uint32_t *)(v2 + 32 * v10 + 12) )
    {
      if ( v5 == i )
      {
        if ( a2 == (const gameswf::String::Self *)(v8 + 2) )
          break;
        s1 = (char *)v8 + 9;
        if ( *((uint8_t *)v8 + 8) == 0xFF )
          s1 = (const char *)v8[5];
        v17 = v2;
        v13 = strcmp(s1, (const char *)a2 + 1);
        v2 = v17;
        if ( v13 == 0 )
          break;
      }
      v10 = *v8;
      if ( *v8 == -1 )
        break;
      v8 = (uint32_t *)(v2 + 32 * v10 + 8);
    }
    return v10;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_A_0f1111::find_index  (binary VA: 0x1181510)
// Original: gameswf::hash<gameswf::String,gameswf::ASValue,gameswf::string_hash_functor<gameswf::String>>::find_index
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_String_gameswf_A_0f1111::find_index(gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *self, const gameswf::String::Self *a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int i;
  const char *s1;
  int v12;
  const char *v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v2 = *(uint32_t *)self;
  if ( *(uint32_t *)self == 0 )
    return -1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v3 = *((char **)a2 + 3);
    v4 = *((uint32_t *)a2 + 1) - 1;
  }
  else
  {
    v3 = (char *)a2 + 1;
    v4 = *(char *)a2 - 1;
  }
  v5 = 5381;
  if ( v4 > 0 )
  {
    do
      v5 = (33 * v5) ^ (uint8_t)v3[--v4];
    while ( v4 != 0 );
  }
  v6 = *(uint32_t *)(v2 + 4);
  v18 = v6 & v5;
  v7 = (uint32_t *)(v2 + 40 * (v6 & v5) + 8);
  if ( *v7 == -2 )
    return -1;
  v8 = *(uint32_t *)(v2 + 40 * (v6 & v5) + 12);
  v9 = v8 & v6;
  if ( v9 != v18 )
    return -1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    while ( 1 )
    {
      if ( v5 == v8 )
      {
        if ( a2 == (const gameswf::String::Self *)(v7 + 2) )
          return v9;
        v14 = (char *)v7 + 9;
        if ( *((uint8_t *)v7 + 8) == 0xFF )
          v14 = (const char *)v7[5];
        v17 = v2;
        v15 = strcmp(v14, *((const char **)a2 + 3));
        v2 = v17;
        if ( v15 == 0 )
          break;
      }
      v9 = *v7;
      if ( *v7 == -1 )
        return v9;
      v7 = (uint32_t *)(v2 + 40 * v9 + 8);
      v8 = *(uint32_t *)(v2 + 40 * v9 + 12);
    }
    return v9;
  }
  else
  {
    for ( i = v7[1]; ; i = *(uint32_t *)(v2 + 40 * v9 + 12) )
    {
      if ( v5 == i )
      {
        if ( a2 == (const gameswf::String::Self *)(v7 + 2) )
          break;
        s1 = (char *)v7 + 9;
        if ( *((uint8_t *)v7 + 8) == 0xFF )
          s1 = (const char *)v7[5];
        v16 = v2;
        v12 = strcmp(s1, (const char *)a2 + 1);
        v2 = v16;
        if ( v12 == 0 )
          break;
      }
      v9 = *v7;
      if ( *v7 == -1 )
        break;
      v7 = (uint32_t *)(v2 + 40 * v9 + 8);
    }
    return v9;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_s_d8b1d4::find_index  (binary VA: 0x1181690)
// Original: gameswf::hash<gameswf::String,gameswf::smart_ptr<gameswf::ASPackage>,gameswf::string_hash_functor<gameswf::String>>::find_index
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_String_gameswf_s_d8b1d4::find_index(gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *self, const gameswf::String::Self *a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  int i;
  const char *s1;
  int v13;
  const char *v15;
  int v16;
  int v17;
  int v18;
  char *v19;

  v2 = *(uint32_t *)self;
  if ( *(uint32_t *)self == 0 )
    return -1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v3 = *((char **)a2 + 3);
    v4 = *((uint32_t *)a2 + 1) - 1;
  }
  else
  {
    v3 = (char *)a2 + 1;
    v4 = *(char *)a2 - 1;
  }
  v5 = 5381;
  if ( v4 > 0 )
  {
    do
      v5 = (33 * v5) ^ (uint8_t)v3[--v4];
    while ( v4 != 0 );
  }
  v6 = *(uint32_t *)(v2 + 4);
  v19 = (char *)(v6 & v5);
  v7 = 32 * (v6 & v5);
  v8 = (uint32_t *)(v2 + v7 + 8);
  if ( *v8 == -2 )
    return -1;
  v9 = *(uint32_t *)(v2 + v7 + 12);
  v10 = v9 & v6;
  if ( (char *)v10 != v19 )
    return -1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    while ( 1 )
    {
      if ( v5 == v9 )
      {
        if ( a2 == (const gameswf::String::Self *)(v8 + 2) )
          return v10;
        v15 = (char *)v8 + 9;
        if ( *((uint8_t *)v8 + 8) == 0xFF )
          v15 = (const char *)v8[5];
        v18 = v2;
        v16 = strcmp(v15, *((const char **)a2 + 3));
        v2 = v18;
        if ( v16 == 0 )
          break;
      }
      v10 = *v8;
      if ( *v8 == -1 )
        return v10;
      v8 = (uint32_t *)(v2 + 32 * v10 + 8);
      v9 = *(uint32_t *)(v2 + 32 * v10 + 12);
    }
    return v10;
  }
  else
  {
    for ( i = v8[1]; ; i = *(uint32_t *)(v2 + 32 * v10 + 12) )
    {
      if ( v5 == i )
      {
        if ( a2 == (const gameswf::String::Self *)(v8 + 2) )
          break;
        s1 = (char *)v8 + 9;
        if ( *((uint8_t *)v8 + 8) == 0xFF )
          s1 = (const char *)v8[5];
        v17 = v2;
        v13 = strcmp(s1, (const char *)a2 + 1);
        v2 = v17;
        if ( v13 == 0 )
          break;
      }
      v10 = *v8;
      if ( *v8 == -1 )
        break;
      v8 = (uint32_t *)(v2 + 32 * v10 + 8);
    }
    return v10;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_s_b74bac::set_raw_capacity  (binary VA: 0x1181810)
// Original: gameswf::hash<gameswf::String,gameswf::smart_ptr<gameswf::ASClass>,gameswf::string_hash_functor<gameswf::String>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> * gameswf::hash_gameswf_String_gameswf_s_b74bac::set_raw_capacity(gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *result;
  gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *v8;
  int i;
  gameswf::RefCounted::Self *v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *_g4_t_v15;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_gameswf_String_gameswf_s_b74bac::clear(self);
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
  if ( *self == nullptr
    || (result = (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)v3 )
  {
    v15 = (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)gameswf::malloc_internal(32 * v3 + 8);
    *(uint32_t *)v15 = 0;
    v5 = v15;
    v6 = 8;
    *((uint32_t *)v15 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 32;
      if ( v3 <= v7 )
        break;
      v5 = v15;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v14 = *((uint32_t *)v8 + 1);
      if ( v14 >= 0 )
      {
        for ( i = 0; i <= v14; ++i )
        {
          v11 = (int)(uintptr_t)(v8) + 32 * i + 8;
          if ( *(uint32_t *)v11 != -2 )
          {
            v13 = i;
            gameswf::hash_gameswf_String_gameswf_s_b74bac::add(
              (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)&v15,
              (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)v8 + 32 * i + 16),
              (int)(uintptr_t)(v8) + 32 * i + 36);
            i = v13;
            if ( *(uint8_t *)(v11 + 8) == 0xFF && (*(uint8_t *)(v11 + 27) & 1) != 0 )
            {
              gameswf::free_internal(*(gameswf::Self **)(v11 + 20));
              i = v13;
            }
            v10 = *(gameswf::RefCounted::Self **)(v11 + 28);
            if ( v10 != nullptr )
            {
              v12 = i;
              gameswf::RefCounted::dropRef(v10);
              i = v12;
            }
            *(uint32_t *)v11 = -2;
            *(uint32_t *)(v11 + 4) = 0;
            v8 = *self;
          }
        }
      }
      gameswf::free_internal(v8);
    }
    result = v15;
    *self = v15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_s_b74bac::add  (binary VA: 0x11819b0)
// Original: gameswf::hash<gameswf::String,gameswf::smart_ptr<gameswf::ASClass>,gameswf::string_hash_functor<gameswf::String>>::add
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::hash_gameswf_String_gameswf_s_b74bac::add(gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> **a1, gameswf::String::Self *a2, gameswf::RefCounted::Self **a3)
{
  gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  int *v14;
  gameswf::RefCounted::Self *v15;
  gameswf::RefCounted::Self *v16;
  gameswf::RefCounted::Self *result;
  bool v18;
  gameswf::RefCounted::Self *v19;
  gameswf::RefCounted::Self *v20;
  int v21;
  int v22;
  gameswf::RefCounted::Self *v23;
  gameswf::String::Self *v24;
  int v25;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_gameswf_String_gameswf_s_b74bac::set_raw_capacity(
        a1,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_gameswf_String_gameswf_s_b74bac::set_raw_capacity(
      a1,
      8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v6 = *((char **)a2 + 3);
    v5 = *((uint32_t *)a2 + 1) - 1;
  }
  else
  {
    v5 = *(char *)a2 - 1;
    v6 = (char *)a2 + 1;
  }
  v7 = 5381;
  if ( v5 > 0 )
  {
    do
      v7 = (33 * v7) ^ (uint8_t)v6[--v5];
    while ( v5 != 0 );
  }
  v8 = *a1;
  v9 = *((uint32_t *)*a1 + 1);
  v24 = (gameswf::String::Self *)(v9 & v7);
  v10 = v9 & v7;
  v23 = (gameswf::RefCounted::Self *)((gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)*a1 + 32 * (v9 & v7) + 8));
  v25 = *(uint32_t *)v23;
  if ( *(uint32_t *)v23 == -2 )
  {
    *(uint32_t *)v23 = -1;
    *((uint32_t *)v23 + 1) = v7;
    sub_7763C0((gameswf::RefCounted::Self *)((char *)v23 + 8), (char *)a2);
    result = *a3;
    v18 = *a3 == nullptr;
    *((uint32_t *)v23 + 7) = (uint32_t)(uintptr_t)(*a3);
    if ( !v18 )
      return gameswf::RefCounted::addRef(result);
  }
  else
  {
    do
    {
      v10 = v9 & (v10 + 1);
      v11 = (uint32_t *)((char *)v8 + 32 * v10 + 8);
    }
    while ( *v11 != -2 && v10 != (v9 & v7) );
    v12 = *((uint32_t *)*a1 + 8 * (v9 & v7) + 3) & v9;
    if ( (gameswf::String::Self *)v12 == v24 )
    {
      *v11 = v25;
      *((uint32_t *)v8 + 8 * v10 + 3) = *((uint32_t *)v23 + 1);
      v22 = (int)(uintptr_t)(v8) + 32 * v10 + 8;
      sub_7763C0(
        (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)v8 + 32 * v10 + 16),
        (char *)v23 + 8);
      v19 = *((gameswf::RefCounted::Self **)v23 + 7);
      *(uint32_t *)(v22 + 28) = (uint32_t)(uintptr_t)(v19);
      if ( v19 != nullptr )
        gameswf::RefCounted::addRef(v19);
      gameswf::String::opAssign((gameswf::Self **)v23 + 2, (gameswf::Self **)a2);
      v20 = *a3;
      result = *((gameswf::RefCounted::Self **)v23 + 7);
      if ( *a3 != result )
      {
        if ( result != nullptr )
          gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v23 + 7));
        result = v23;
        *((uint32_t *)v23 + 7) = (uint32_t)(uintptr_t)(v20);
        if ( v20 != nullptr )
          result = gameswf::RefCounted::addRef(v20);
      }
      *(uint32_t *)v23 = v10;
      *((uint32_t *)v23 + 1) = v7;
    }
    else
    {
      v13 = v12;
      do
      {
        v14 = (int *)((char *)v8 + 32 * v13 + 8);
        v13 = *v14;
      }
      while ( (gameswf::String::Self *)*v14 != v24 );
      *v11 = v25;
      *((uint32_t *)v8 + 8 * v10 + 3) = *((uint32_t *)v23 + 1);
      v21 = (int)(uintptr_t)(v8) + 32 * v10 + 8;
      sub_7763C0(
        (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASClass::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)v8 + 32 * v10 + 16),
        (char *)v23 + 8);
      v15 = *((gameswf::RefCounted::Self **)v23 + 7);
      *(uint32_t *)(v21 + 28) = (uint32_t)(uintptr_t)(v15);
      if ( v15 != nullptr )
        gameswf::RefCounted::addRef(v15);
      *v14 = v10;
      gameswf::String::opAssign((gameswf::Self **)v23 + 2, (gameswf::Self **)a2);
      v16 = *a3;
      result = *((gameswf::RefCounted::Self **)v23 + 7);
      if ( *a3 != result )
      {
        if ( result != nullptr )
          gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v23 + 7));
        result = v23;
        *((uint32_t *)v23 + 7) = (uint32_t)(uintptr_t)(v16);
        if ( v16 != nullptr )
          result = gameswf::RefCounted::addRef(v16);
      }
      *((uint32_t *)v23 + 1) = v7;
      *(uint32_t *)v23 = -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_A_0f1111::set_raw_capacity  (binary VA: 0x1181c70)
// Original: gameswf::hash<gameswf::String,gameswf::ASValue,gameswf::string_hash_functor<gameswf::String>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> * gameswf::hash_gameswf_String_gameswf_A_0f1111::set_raw_capacity(gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *result;
  gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *v8;
  int v9;
  int i;
  gameswf::Self **v11;
  int v12;
  gameswf::ASValue::Self *v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *_g4_t_v17;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_gameswf_String_gameswf_A_0f1111::clear(self);
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
  if ( *self == nullptr
    || (result = (gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *)v3 )
  {
    v17 = (gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *)gameswf::malloc_internal(40 * v3 + 8);
    *(uint32_t *)v17 = 0;
    v5 = v17;
    v6 = 8;
    *((uint32_t *)v17 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 40;
      if ( v3 <= v7 )
        break;
      v5 = v17;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v16 = *((uint32_t *)v8 + 1);
      if ( v16 >= 0 )
      {
        v9 = 8;
        for ( i = 0; i <= v16; ++i )
        {
          v11 = (gameswf::Self **)((char *)v8 + v9);
          if ( *(uint32_t *)((char *)v8 + v9) != -2 )
          {
            v15 = v9;
            gameswf::hash_gameswf_String_gameswf_A_0f1111::add(
              (gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *)&v17,
              (const gameswf::String::Self *)(v11 + 2),
              (const gameswf::ASValue::Self *)(v11 + 7));
            v12 = v15;
            v13 = (gameswf::ASValue::Self *)(v11 + 7);
            if ( *((uint8_t *)v11 + 8) == 0xFF && (*((uint8_t *)v11 + 27) & 1) != 0 )
            {
              gameswf::free_internal(v11[5]);
              v13 = (gameswf::ASValue::Self *)(v11 + 7);
              v12 = v15;
            }
            v14 = v12;
            gameswf::ASValue::dropRefs(v13);
            *v11 = (gameswf::Self *)-2;
            v11[1] = nullptr;
            v9 = v14;
            v8 = *self;
          }
          v9 += 40;
        }
      }
      gameswf::free_internal(v8);
    }
    result = v17;
    *self = v17;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_A_0f1111::add  (binary VA: 0x1181e20)
// Original: gameswf::hash<gameswf::String,gameswf::ASValue,gameswf::string_hash_functor<gameswf::String>>::add
// ----------------------------------------------------------------------------
void * gameswf::hash_gameswf_String_gameswf_A_0f1111::add(gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> **self, const gameswf::String::Self *a2, const gameswf::ASValue::Self *a3)
{
  gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  void *result;
  int *v16;
  int v17;
  int v18;
  int v19;

  v3 = *self;
  if ( *self != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_gameswf_String_gameswf_A_0f1111::set_raw_capacity(
        self,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *self;
      v4 = *(uint32_t *)*self;
    }
  }
  else
  {
    gameswf::hash_gameswf_String_gameswf_A_0f1111::set_raw_capacity(
      self,
      8);
    v3 = *self;
    v4 = *(uint32_t *)*self;
  }
  *(uint32_t *)v3 = v4 + 1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v6 = *((char **)a2 + 3);
    v5 = *((uint32_t *)a2 + 1) - 1;
  }
  else
  {
    v5 = *(char *)a2 - 1;
    v6 = (char *)a2 + 1;
  }
  v7 = 5381;
  if ( v5 > 0 )
  {
    do
      v7 = (33 * v7) ^ (uint8_t)v6[--v5];
    while ( v5 != 0 );
  }
  v8 = *self;
  v9 = *((uint32_t *)*self + 1);
  v10 = v9 & v7;
  v18 = v9 & v7;
  v17 = (int)(uintptr_t)(*self) + 40 * (v9 & v7) + 8;
  v19 = *(uint32_t *)v17;
  if ( *(uint32_t *)v17 == -2 )
  {
    *((uint32_t *)*self + 10 * (v9 & v7) + 3) = v7;
    *(uint32_t *)v17 = -1;
    sub_7763C0((gameswf::String::Self *)(v17 + 8), (char *)a2);
    *(uint8_t *)(v17 + 28) = 0;
    *(uint8_t *)(v17 + 29) = 0;
    return gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v17 + 28), a3);
  }
  else
  {
    do
    {
      v10 = v9 & (v10 + 1);
      v11 = (int)(uintptr_t)(v8) + 40 * v10 + 8;
    }
    while ( *(uint32_t *)v11 != -2 && v10 != (v9 & v7) );
    v12 = *((uint32_t *)*self + 10 * (v9 & v7) + 3) & v9;
    if ( v12 == v18 )
    {
      *(uint32_t *)v11 = v19;
      *((uint32_t *)v8 + 10 * v10 + 3) = *(uint32_t *)(v17 + 4);
      sub_7763C0(
        (gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)v8 + 40 * v10 + 16),
        (char *)(v17 + 8));
      *(uint8_t *)(v11 + 28) = 0;
      *(uint8_t *)(v11 + 29) = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v11 + 28), (const gameswf::ASValue::Self *)(v17 + 28));
      gameswf::String::opAssign((gameswf::Self **)(v17 + 8), (gameswf::Self **)a2);
      result = gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v17 + 28), a3);
      *(uint32_t *)v17 = v10;
      *(uint32_t *)(v17 + 4) = v7;
    }
    else
    {
      v13 = v12;
      do
      {
        v14 = (int *)((char *)v8 + 40 * v13 + 8);
        v13 = *v14;
      }
      while ( *v14 != v18 );
      *(uint32_t *)v11 = v19;
      *((uint32_t *)v8 + 10 * v10 + 3) = *(uint32_t *)(v17 + 4);
      v16 = v14;
      sub_7763C0(
        (gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)v8 + 40 * v10 + 16),
        (char *)(v17 + 8));
      *(uint8_t *)(v11 + 28) = 0;
      *(uint8_t *)(v11 + 29) = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v11 + 28), (const gameswf::ASValue::Self *)(v17 + 28));
      *v16 = v10;
      gameswf::String::opAssign((gameswf::Self **)(v17 + 8), (gameswf::Self **)a2);
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v17 + 28), a3);
      *(uint32_t *)(v17 + 4) = v7;
      *(uint32_t *)v17 = -1;
      return (void *)v17;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_s_d8b1d4::clear  (binary VA: 0x11820c0)
// Original: gameswf::hash<gameswf::String,gameswf::smart_ptr<gameswf::ASPackage>,gameswf::string_hash_functor<gameswf::String>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> * gameswf::hash_gameswf_String_gameswf_s_d8b1d4::clear(gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> **self)
{
  gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *result;
  int v2;
  int i;
  int v4;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      for ( i = 0; i <= v2; ++i )
      {
        v4 = (int)(uintptr_t)(result) + 32 * i + 8;
        if ( *(uint32_t *)v4 != -2 )
        {
          if ( *((uint8_t *)result + 32 * i + 16) == 0xFF && (*((uint8_t *)result + 32 * i + 35) & 1) != 0 )
            gameswf::free_internal(*((gameswf::Self **)result + 8 * i + 7));
          if ( *(uint32_t *)(v4 + 28) != 0 )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v4 + 28));
          *(uint32_t *)v4 = -2;
          *(uint32_t *)(v4 + 4) = 0;
          result = *self;
        }
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_s_d8b1d4::set_raw_capacity  (binary VA: 0x1182170)
// Original: gameswf::hash<gameswf::String,gameswf::smart_ptr<gameswf::ASPackage>,gameswf::string_hash_functor<gameswf::String>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> * gameswf::hash_gameswf_String_gameswf_s_d8b1d4::set_raw_capacity(gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *result;
  gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *v5;
  int v6;
  int v7;
  gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *v8;
  int i;
  gameswf::RefCounted::Self *v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *_g4_t_v15;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_gameswf_String_gameswf_s_d8b1d4::clear(self);
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
  if ( *self == nullptr
    || (result = (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)v3 )
  {
    v15 = (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)gameswf::malloc_internal(32 * v3 + 8);
    *(uint32_t *)v15 = 0;
    v5 = v15;
    v6 = 8;
    *((uint32_t *)v15 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 32;
      if ( v3 <= v7 )
        break;
      v5 = v15;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v14 = *((uint32_t *)v8 + 1);
      if ( v14 >= 0 )
      {
        for ( i = 0; i <= v14; ++i )
        {
          v11 = (int)(uintptr_t)(v8) + 32 * i + 8;
          if ( *(uint32_t *)v11 != -2 )
          {
            v13 = i;
            gameswf::hash_gameswf_String_gameswf_s_d8b1d4::add(
              (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)&v15,
              (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)v8 + 32 * i + 16),
              (int)(uintptr_t)(v8) + 32 * i + 36);
            i = v13;
            if ( *(uint8_t *)(v11 + 8) == 0xFF && (*(uint8_t *)(v11 + 27) & 1) != 0 )
            {
              gameswf::free_internal(*(gameswf::Self **)(v11 + 20));
              i = v13;
            }
            v10 = *(gameswf::RefCounted::Self **)(v11 + 28);
            if ( v10 != nullptr )
            {
              v12 = i;
              gameswf::RefCounted::dropRef(v10);
              i = v12;
            }
            *(uint32_t *)v11 = -2;
            *(uint32_t *)(v11 + 4) = 0;
            v8 = *self;
          }
        }
      }
      gameswf::free_internal(v8);
    }
    result = v15;
    *self = v15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_String_gameswf_s_d8b1d4::add  (binary VA: 0x1182310)
// Original: gameswf::hash<gameswf::String,gameswf::smart_ptr<gameswf::ASPackage>,gameswf::string_hash_functor<gameswf::String>>::add
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::hash_gameswf_String_gameswf_s_d8b1d4::add(gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> **a1, gameswf::String::Self *a2, gameswf::RefCounted::Self **a3)
{
  gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  int *v14;
  gameswf::RefCounted::Self *v15;
  gameswf::RefCounted::Self *v16;
  gameswf::RefCounted::Self *result;
  bool v18;
  gameswf::RefCounted::Self *v19;
  gameswf::RefCounted::Self *v20;
  int v21;
  int v22;
  gameswf::RefCounted::Self *v23;
  gameswf::String::Self *v24;
  int v25;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_gameswf_String_gameswf_s_d8b1d4::set_raw_capacity(
        a1,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_gameswf_String_gameswf_s_d8b1d4::set_raw_capacity(
      a1,
      8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v6 = *((char **)a2 + 3);
    v5 = *((uint32_t *)a2 + 1) - 1;
  }
  else
  {
    v5 = *(char *)a2 - 1;
    v6 = (char *)a2 + 1;
  }
  v7 = 5381;
  if ( v5 > 0 )
  {
    do
      v7 = (33 * v7) ^ (uint8_t)v6[--v5];
    while ( v5 != 0 );
  }
  v8 = *a1;
  v9 = *((uint32_t *)*a1 + 1);
  v24 = (gameswf::String::Self *)(v9 & v7);
  v10 = v9 & v7;
  v23 = (gameswf::RefCounted::Self *)((gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)*a1 + 32 * (v9 & v7) + 8));
  v25 = *(uint32_t *)v23;
  if ( *(uint32_t *)v23 == -2 )
  {
    *(uint32_t *)v23 = -1;
    *((uint32_t *)v23 + 1) = v7;
    sub_7763C0((gameswf::RefCounted::Self *)((char *)v23 + 8), (char *)a2);
    result = *a3;
    v18 = *a3 == nullptr;
    *((uint32_t *)v23 + 7) = (uint32_t)(uintptr_t)(*a3);
    if ( !v18 )
      return gameswf::RefCounted::addRef(result);
  }
  else
  {
    do
    {
      v10 = v9 & (v10 + 1);
      v11 = (uint32_t *)((char *)v8 + 32 * v10 + 8);
    }
    while ( *v11 != -2 && v10 != (v9 & v7) );
    v12 = *((uint32_t *)*a1 + 8 * (v9 & v7) + 3) & v9;
    if ( (gameswf::String::Self *)v12 == v24 )
    {
      *v11 = v25;
      *((uint32_t *)v8 + 8 * v10 + 3) = *((uint32_t *)v23 + 1);
      v22 = (int)(uintptr_t)(v8) + 32 * v10 + 8;
      sub_7763C0(
        (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)v8 + 32 * v10 + 16),
        (char *)v23 + 8);
      v19 = *((gameswf::RefCounted::Self **)v23 + 7);
      *(uint32_t *)(v22 + 28) = (uint32_t)(uintptr_t)(v19);
      if ( v19 != nullptr )
        gameswf::RefCounted::addRef(v19);
      gameswf::String::opAssign((gameswf::Self **)v23 + 2, (gameswf::Self **)a2);
      v20 = *a3;
      result = *((gameswf::RefCounted::Self **)v23 + 7);
      if ( *a3 != result )
      {
        if ( result != nullptr )
          gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v23 + 7));
        result = v23;
        *((uint32_t *)v23 + 7) = (uint32_t)(uintptr_t)(v20);
        if ( v20 != nullptr )
          result = gameswf::RefCounted::addRef(v20);
      }
      *(uint32_t *)v23 = v10;
      *((uint32_t *)v23 + 1) = v7;
    }
    else
    {
      v13 = v12;
      do
      {
        v14 = (int *)((char *)v8 + 32 * v13 + 8);
        v13 = *v14;
      }
      while ( (gameswf::String::Self *)*v14 != v24 );
      *v11 = v25;
      *((uint32_t *)v8 + 8 * v10 + 3) = *((uint32_t *)v23 + 1);
      v21 = (int)(uintptr_t)(v8) + 32 * v10 + 8;
      sub_7763C0(
        (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)((char *)v8 + 32 * v10 + 16),
        (char *)v23 + 8);
      v15 = *((gameswf::RefCounted::Self **)v23 + 7);
      *(uint32_t *)(v21 + 28) = (uint32_t)(uintptr_t)(v15);
      if ( v15 != nullptr )
        gameswf::RefCounted::addRef(v15);
      *v14 = v10;
      gameswf::String::opAssign((gameswf::Self **)v23 + 2, (gameswf::Self **)a2);
      v16 = *a3;
      result = *((gameswf::RefCounted::Self **)v23 + 7);
      if ( *a3 != result )
      {
        if ( result != nullptr )
          gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v23 + 7));
        result = v23;
        *((uint32_t *)v23 + 7) = (uint32_t)(uintptr_t)(v16);
        if ( v16 != nullptr )
          result = gameswf::RefCounted::addRef(v16);
      }
      *((uint32_t *)v23 + 1) = v7;
      *(uint32_t *)v23 = -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_Font_kerning_pai_482794::set_raw_capacity  (binary VA: 0x118b0c0)
// Original: gameswf::hash<gameswf::Font::kerning_pair,float,gameswf::fixed_size_hash<gameswf::Font::kerning_pair>>::set_raw_capacity
// ----------------------------------------------------------------------------
void gameswf::hash_gameswf_Font_kerning_pai_482794::set_raw_capacity(gameswf::Self **self, int a2)
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
                  gameswf::hash_gameswf_Font_kerning_pai_482794::set_raw_capacity(
                    (gameswf::Self **)((gameswf::hash<gameswf::Font::kerning_pair, float, gameswf::fixed_size_hash<gameswf::Font::kerning_pair>> *)v29),
                    2 * *(uint32_t *)(v29[0] + 4) + 2);
                  v9 = (uint32_t *)v29[0];
                  v10 = *(uint32_t *)v29[0];
                }
              }
              else
              {
                gameswf::hash_gameswf_Font_kerning_pai_482794::set_raw_capacity(
                  (gameswf::Self **)((gameswf::hash<gameswf::Font::kerning_pair, float, gameswf::fixed_size_hash<gameswf::Font::kerning_pair>> *)v29),
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

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_7d6b46::set_raw_capacity  (binary VA: 0x1190870)
// Original: gameswf::hash<gameswf::StringI,gameswf::ASColorTransformMember,gameswf::stringi_hash_functor<gameswf::StringI>>::set_raw_capacity
// ----------------------------------------------------------------------------
void gameswf::hash_gameswf_StringI_gameswf_7d6b46::set_raw_capacity(gameswf::Self **self, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  int j;
  int v9;
  gameswf::Self *v10;
  int v11;
  int i;
  uint32_t *v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
  {
    v10 = *self;
    if ( *self != nullptr )
    {
      v11 = *((uint32_t *)v10 + 1);
      if ( v11 >= 0 )
      {
        for ( i = 0; i <= v11; ++i )
        {
          v13 = (uint32_t *)((char *)v10 + 32 * i + 8);
          if ( *v13 != -2 )
          {
            if ( *((uint8_t *)v10 + 32 * i + 16) == 0xFF && (*((uint8_t *)v10 + 32 * i + 35) & 1) != 0 )
            {
              v15 = (int)(uintptr_t)(v10) + 32 * i + 8;
              v16 = v11;
              gameswf::free_internal(*((gameswf::Self **)v10 + 8 * i + 7));
              v11 = v16;
              v13 = (uint32_t *)v15;
            }
            *v13 = -2;
            v13[1] = 0;
            v10 = *self;
          }
        }
      }
      gameswf::free_internal(v10);
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
      v18 = (uint32_t *)gameswf::malloc_internal(32 * v3 + 8);
      *v18 = 0;
      v4 = v18;
      v5 = 2;
      v18[1] = v3 - 1;
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        v4[v5] = -2;
        v5 += 8;
        if ( v3 <= v6 )
          break;
        v4 = v18;
      }
      v7 = *self;
      if ( *self != nullptr )
      {
        v17 = *((uint32_t *)v7 + 1);
        if ( v17 >= 0 )
        {
          for ( j = 0; j <= v17; ++j )
          {
            v9 = (int)(uintptr_t)(v7) + 32 * j + 8;
            if ( *(uint32_t *)v9 != -2 )
            {
              v14 = j;
              gameswf::hash_gameswf_StringI_gameswf_7d6b46::add(
                (gameswf::hash<gameswf::StringI::Self, gameswf::ASColorTransformMember, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&v18,
                (int)(uintptr_t)(v7) + 32 * j + 16,
                (int)(uintptr_t)(v7) + 32 * j + 36);
              j = v14;
              if ( *(uint8_t *)(v9 + 8) == 0xFF && (*(uint8_t *)(v9 + 27) & 1) != 0 )
              {
                gameswf::free_internal(*(gameswf::Self **)(v9 + 20));
                j = v14;
              }
              *(uint32_t *)v9 = -2;
              *(uint32_t *)(v9 + 4) = 0;
              v7 = *self;
            }
          }
        }
        gameswf::free_internal(v7);
      }
      *self = (gameswf::Self *)v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_gameswf_StringI_gameswf_7d6b46::add  (binary VA: 0x1190a60)
// Original: gameswf::hash<gameswf::StringI,gameswf::ASColorTransformMember,gameswf::stringi_hash_functor<gameswf::StringI>>::add
// ----------------------------------------------------------------------------
int gameswf::hash_gameswf_StringI_gameswf_7d6b46::add(gameswf::Self **a1, char *a2, int *a3)
{
  gameswf::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  gameswf::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  char v16;
  int v17;
  char v18;
  int *v19;
  int v20;
  unsigned int v21;
  int v22;
  gameswf::Self *v23;
  char *v24;
  gameswf::Self *v25;
  int v26;
  int result;
  int v28;
  char *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  gameswf::Self *v34;
  char *v35;
  gameswf::Self *v36;
  int v37;
  unsigned int v38;
  int v39;
  char *v40;
  int v41;
  int v42;
  char v43;
  int v44;
  gameswf::Self *v45;
  char *v46;
  gameswf::Self *v47;
  int v48;
  unsigned int v49;
  int v50;
  gameswf::Self *v51;
  char *v52;
  gameswf::Self *v53;
  int v54;
  char v55;
  int v56;
  int v57;
  int v58;
  char *v59;
  int v60;
  int v61;
  int v62;
  int v63;
  char *v64;
  int v65;
  int v66;
  char v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int *v72;
  gameswf::Self *v73;
  gameswf::Self *v74;
  gameswf::Self *v75;
  gameswf::Self *v76;
  gameswf::Self *v77;
  gameswf::Self *v78;
  gameswf::Self *v79;
  gameswf::Self *v80;
  gameswf::Self *v81;
  gameswf::Self *v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    v5 = 2 * *((uint32_t *)v3 + 1) + 2;
    if ( 3 * *(uint32_t *)v3 > v5 )
    {
      gameswf::hash_gameswf_StringI_gameswf_7d6b46::set_raw_capacity(
        a1,
        v5);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_gameswf_StringI_gameswf_7d6b46::set_raw_capacity(
      a1,
      8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  v6 = *((uint32_t *)a2 + 4);
  if ( (uint8_t *)(v6 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *a2 == -1 )
    {
      v29 = *((char **)a2 + 3);
      v28 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v28 = *a2 - 1;
      v29 = a2 + 1;
    }
    v83 = 5381;
    v30 = 5381;
    if ( v28 > 0 )
    {
      do
      {
        --v28;
        v31 = 33 * v30;
        v32 = (uint8_t)v29[v28] + 32;
        if ( (uint8_t)(v29[v28] - 65) > 0x19u )
          v32 = (uint8_t)v29[v28];
        v30 = v31 ^ v32;
      }
      while ( v28 != 0 );
      v30 = v30 << 9 >> 9;
      v83 = v30;
    }
    *((uint32_t *)a2 + 4) = v30 & 0x7FFFFF | v6 & 0xFF800000;
    v7 = v83;
  }
  else
  {
    v83 = v6 << 9 >> 9;
    v7 = v83;
  }
  v8 = *a1;
  v9 = *((uint32_t *)*a1 + 1);
  v73 = (gameswf::Self *)(v9 & v7);
  v10 = v9 & v7;
  v11 = (int)(uintptr_t)(*a1) + 32 * (v9 & v7) + 8;
  v79 = *(gameswf::Self **)v11;
  if ( *(uint32_t *)v11 == -2 )
  {
    *(uint32_t *)v11 = -1;
    *(uint32_t *)(v11 + 4) = v83;
    *(uint8_t *)(v11 + 8) = 1;
    *(uint8_t *)(v11 + 9) = 0;
    if ( *a2 == -1 )
      v33 = *((uint32_t *)a2 + 1) - 1;
    else
      v33 = *a2 - 1;
    gameswf::String::resize((gameswf::String::Self *)(v11 + 8), v33);
    v34 = (gameswf::Self *)(a2 + 1);
    if ( *a2 == -1 )
      v34 = *((gameswf::Self **)a2 + 3);
    LOBYTE(v35) = *(uint8_t *)(v11 + 8);
    if ( (uint8_t)(uintptr_t)(v35) == 0xFF )
    {
      v35 = *(char **)(v11 + 12);
      v36 = *(gameswf::Self **)(v11 + 20);
    }
    else
    {
      v35 = (char *)(char)(uintptr_t)(v35);
      v36 = (gameswf::Self *)(v11 + 9);
    }
    gameswf::Strcpy_s(v36, v35, v34);
    v76 = *((gameswf::Self **)a2 + 4);
    if ( (uint8_t *)((unsigned int)(uintptr_t)(v76) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *a2 == -1 )
      {
        v60 = *((uint32_t *)a2 + 1) - 1;
        v59 = *((char **)a2 + 3);
      }
      else
      {
        v59 = a2 + 1;
        v60 = *a2 - 1;
      }
      v37 = 5381;
      if ( v60 > 0 )
      {
        v84 = v11;
        do
        {
          --v60;
          v61 = 33 * v37;
          v62 = (uint8_t)v59[v60] + 32;
          if ( (uint8_t)(v59[v60] - 65) > 0x19u )
            v62 = (uint8_t)v59[v60];
          v37 = v61 ^ v62;
        }
        while ( v60 != 0 );
        v11 = v84;
        v37 = v37 << 9 >> 9;
      }
      *((uint32_t *)a2 + 4) = v37 & 0x7FFFFF | (unsigned int)(uintptr_t)(v76) & 0xFF800000;
    }
    else
    {
      v37 = (int)((uint32_t)(uintptr_t)(v76) << 9) >> 9;
    }
    v38 = v37 & 0x7FFFFF | *(uint32_t *)(v11 + 24) & 0xFF800000;
    *(uint32_t *)(v11 + 24) = v38;
    *(uint8_t *)(v11 + 26) = BYTE2(v38) & 0x7F;
    *(uint8_t *)(v11 + 27) = HIBYTE(v38) | 1;
    result = *a3;
    *(uint32_t *)(v11 + 28) = *a3;
  }
  else
  {
    v12 = v9 & v7;
    do
    {
      v10 = v9 & (v10 + 1);
      v13 = (int)(uintptr_t)(v8) + 32 * v10 + 8;
    }
    while ( *(uint32_t *)v13 != -2 && v10 != v12 );
    v14 = *(uint32_t *)(v11 + 4) & v9;
    if ( (gameswf::Self *)v14 == v73 )
    {
      *(uint32_t *)v13 = (uint32_t)(uintptr_t)(v79);
      *((uint32_t *)v8 + 8 * v10 + 3) = *(uint32_t *)(v11 + 4);
      *((uint8_t *)v8 + 32 * v10 + 16) = 1;
      *((uint8_t *)v8 + 32 * v10 + 17) = 0;
      v43 = *(uint8_t *)(v11 + 8);
      if ( v43 == -1 )
        v44 = *(uint32_t *)(v11 + 12) - 1;
      else
        v44 = v43 - 1;
      gameswf::String::resize((gameswf::Self *)((char *)v8 + 32 * v10 + 16), v44);
      v45 = (gameswf::Self *)(v11 + 9);
      if ( *(uint8_t *)(v11 + 8) == 0xFF )
        v45 = *(gameswf::Self **)(v11 + 20);
      LOBYTE(v46) = *(uint8_t *)(v13 + 8);
      if ( (uint8_t)(uintptr_t)(v46) == 0xFF )
      {
        v46 = *(char **)(v13 + 12);
        v47 = *(gameswf::Self **)(v13 + 20);
      }
      else
      {
        v46 = (char *)(char)(uintptr_t)(v46);
        v47 = (gameswf::Self *)(v13 + 9);
      }
      gameswf::Strcpy_s(v47, v46, v45);
      v77 = *(gameswf::Self **)(v11 + 24);
      if ( (uint8_t *)((unsigned int)(uintptr_t)(v77) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        v67 = *(uint8_t *)(v11 + 8);
        if ( v67 == -1 )
        {
          v68 = *(uint32_t *)(v11 + 20);
          v69 = *(uint32_t *)(v11 + 12) - 1;
        }
        else
        {
          v68 = v11 + 9;
          v69 = v67 - 1;
        }
        v48 = 5381;
        if ( v69 > 0 )
        {
          v86 = v13;
          do
          {
            --v69;
            v70 = 33 * v48;
            v71 = *(uint8_t *)(v68 + v69) + 32;
            if ( (uint8_t)(*(uint8_t *)(v68 + v69) - 65) > 0x19u )
              v71 = *(uint8_t *)(v68 + v69);
            v48 = v70 ^ v71;
          }
          while ( v69 != 0 );
          v13 = v86;
          v48 = v48 << 9 >> 9;
        }
        *(uint32_t *)(v11 + 24) = v48 & 0x7FFFFF | (unsigned int)(uintptr_t)(v77) & 0xFF800000;
      }
      else
      {
        v48 = (int)((uint32_t)(uintptr_t)(v77) << 9) >> 9;
      }
      v49 = v48 & 0x7FFFFF | *(uint32_t *)(v13 + 24) & 0xFF800000;
      *(uint32_t *)(v13 + 24) = v49;
      *(uint8_t *)(v13 + 26) = BYTE2(v49) & 0x7F;
      *(uint8_t *)(v13 + 27) = HIBYTE(v49) | 1;
      *(uint32_t *)(v13 + 28) = *(uint32_t *)(v11 + 28);
      if ( a2 != (char *)(v11 + 8) )
      {
        if ( *a2 == -1 )
          v50 = *((uint32_t *)a2 + 1) - 1;
        else
          v50 = *a2 - 1;
        gameswf::String::resize((gameswf::String::Self *)(v11 + 8), v50);
        v51 = (gameswf::Self *)(a2 + 1);
        if ( *a2 == -1 )
          v51 = *((gameswf::Self **)a2 + 3);
        LOBYTE(v52) = *(uint8_t *)(v11 + 8);
        if ( (uint8_t)(uintptr_t)(v52) == 0xFF )
        {
          v52 = *(char **)(v11 + 12);
          v53 = *(gameswf::Self **)(v11 + 20);
        }
        else
        {
          v52 = (char *)(char)(uintptr_t)(v52);
          v53 = (gameswf::Self *)(v11 + 9);
        }
        gameswf::Strcpy_s(v53, v52, v51);
        v78 = *((gameswf::Self **)a2 + 4);
        if ( (uint8_t *)((unsigned int)(uintptr_t)(v78) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          if ( *a2 == -1 )
          {
            v64 = *((char **)a2 + 3);
            v63 = *((uint32_t *)a2 + 1) - 1;
          }
          else
          {
            v63 = *a2 - 1;
            v64 = a2 + 1;
          }
          v54 = 5381;
          if ( v63 > 0 )
          {
            v85 = v11;
            do
            {
              --v63;
              v65 = 33 * v54;
              v66 = (uint8_t)v64[v63] + 32;
              if ( (uint8_t)(v64[v63] - 65) > 0x19u )
                v66 = (uint8_t)v64[v63];
              v54 = v65 ^ v66;
            }
            while ( v63 != 0 );
            v11 = v85;
            v54 = v54 << 9 >> 9;
          }
          *((uint32_t *)a2 + 4) = v54 & 0x7FFFFF | (unsigned int)(uintptr_t)(v78) & 0xFF800000;
        }
        else
        {
          v54 = (int)((uint32_t)(uintptr_t)(v78) << 9) >> 9;
        }
        *(uint32_t *)(v11 + 24) = v54 & 0x7FFFFF | *(uint32_t *)(v11 + 24) & 0xFF800000;
      }
      result = *a3;
      *(uint32_t *)v11 = v10;
      *(uint32_t *)(v11 + 28) = result;
      *(uint32_t *)(v11 + 4) = v83;
    }
    else
    {
      do
      {
        v15 = (int *)((char *)v8 + 32 * v14 + 8);
        v14 = *v15;
      }
      while ( (gameswf::Self *)*v15 != v73 );
      *(uint32_t *)v13 = (uint32_t)(uintptr_t)(v79);
      *((uint32_t *)v8 + 8 * v10 + 3) = *(uint32_t *)(v11 + 4);
      *((uint8_t *)v8 + 32 * v10 + 16) = 1;
      *((uint8_t *)v8 + 32 * v10 + 17) = 0;
      v16 = *(uint8_t *)(v11 + 8);
      if ( v16 == -1 )
        v17 = *(uint32_t *)(v11 + 12) - 1;
      else
        v17 = v16 - 1;
      v72 = v15;
      gameswf::String::resize((gameswf::Self *)((char *)v8 + 32 * v10 + 16), v17);
      if ( *(uint8_t *)(v11 + 8) == 0xFF )
        v80 = *(gameswf::Self **)(v11 + 20);
      else
        v80 = (gameswf::Self *)(v11 + 9);
      v18 = *(uint8_t *)(v13 + 8);
      if ( v18 == -1 )
        gameswf::Strcpy_s(*(gameswf::Self **)(v13 + 20), *(char **)(v13 + 12), v80);
      else
        gameswf::Strcpy_s((gameswf::Self *)(v13 + 9), (char *)v18, v80);
      v19 = v72;
      v74 = *(gameswf::Self **)(v11 + 24);
      if ( (uint8_t *)((unsigned int)(uintptr_t)(v74) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        v55 = *(uint8_t *)(v11 + 8);
        if ( v55 == -1 )
        {
          v56 = *(uint32_t *)(v11 + 12) - 1;
          v82 = *(gameswf::Self **)(v11 + 20);
        }
        else
        {
          v56 = v55 - 1;
          v82 = (gameswf::Self *)(v11 + 9);
        }
        v20 = 5381;
        if ( v56 > 0 )
        {
          v87 = v13;
          do
          {
            --v56;
            v57 = 33 * v20;
            v58 = *((uint8_t *)v82 + v56) + 32;
            if ( (uint8_t)(*((uint8_t *)v82 + v56) - 65) > 0x19u )
              v58 = *((uint8_t *)v82 + v56);
            v20 = v57 ^ v58;
          }
          while ( v56 != 0 );
          v13 = v87;
          v19 = v72;
          v20 = v20 << 9 >> 9;
        }
        *(uint32_t *)(v11 + 24) = v20 & 0x7FFFFF | (unsigned int)(uintptr_t)(v74) & 0xFF800000;
      }
      else
      {
        v20 = (int)((uint32_t)(uintptr_t)(v74) << 9) >> 9;
      }
      v21 = v20 & 0x7FFFFF | *(uint32_t *)(v13 + 24) & 0xFF800000;
      *(uint32_t *)(v13 + 24) = v21;
      *(uint8_t *)(v13 + 26) = BYTE2(v21) & 0x7F;
      *(uint8_t *)(v13 + 27) = HIBYTE(v21) | 1;
      *(uint32_t *)(v13 + 28) = *(uint32_t *)(v11 + 28);
      *v19 = v10;
      if ( a2 != (char *)(v11 + 8) )
      {
        if ( *a2 == -1 )
          v22 = *((uint32_t *)a2 + 1) - 1;
        else
          v22 = *a2 - 1;
        gameswf::String::resize((gameswf::String::Self *)(v11 + 8), v22);
        v23 = (gameswf::Self *)(a2 + 1);
        if ( *a2 == -1 )
          v23 = *((gameswf::Self **)a2 + 3);
        LOBYTE(v24) = *(uint8_t *)(v11 + 8);
        if ( (uint8_t)(uintptr_t)(v24) == 0xFF )
        {
          v24 = *(char **)(v11 + 12);
          v25 = *(gameswf::Self **)(v11 + 20);
        }
        else
        {
          v24 = (char *)(char)(uintptr_t)(v24);
          v25 = (gameswf::Self *)(v11 + 9);
        }
        gameswf::Strcpy_s(v25, v24, v23);
        v75 = *((gameswf::Self **)a2 + 4);
        if ( (uint8_t *)((unsigned int)(uintptr_t)(v75) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          if ( *a2 == -1 )
          {
            v40 = *((char **)a2 + 3);
            v39 = *((uint32_t *)a2 + 1) - 1;
          }
          else
          {
            v39 = *a2 - 1;
            v40 = a2 + 1;
          }
          v26 = 5381;
          if ( v39 > 0 )
          {
            v81 = (gameswf::Self *)v11;
            do
            {
              --v39;
              v41 = 33 * v26;
              v42 = (uint8_t)v40[v39] + 32;
              if ( (uint8_t)(v40[v39] - 65) > 0x19u )
                v42 = (uint8_t)v40[v39];
              v26 = v41 ^ v42;
            }
            while ( v39 != 0 );
            v11 = (int)(uintptr_t)(v81);
            v26 = v26 << 9 >> 9;
          }
          *((uint32_t *)a2 + 4) = v26 & 0x7FFFFF | (unsigned int)(uintptr_t)(v75) & 0xFF800000;
        }
        else
        {
          v26 = (int)((uint32_t)(uintptr_t)(v75) << 9) >> 9;
        }
        *(uint32_t *)(v11 + 24) = v26 & 0x7FFFFF | *(uint32_t *)(v11 + 24) & 0xFF800000;
      }
      result = *a3;
      *(uint32_t *)(v11 + 4) = v83;
      *(uint32_t *)(v11 + 28) = result;
      *(uint32_t *)v11 = -1;
    }
  }
  return result;
}


