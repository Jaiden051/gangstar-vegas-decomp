#include "Core/Utils/DecompTypes.h"
#include "gameswf_TextureCache.h"

// ----------------------------------------------------------------------------
// Function: gameswf::TextureCache::subdivideRegion  (binary VA: 0x110c970)
// Original: gameswf::TextureCache::subdivideRegion
// ----------------------------------------------------------------------------
char * gameswf::TextureCache::subdivideRegion(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  uint32_t *v8;
  char *result;
  uint32_t *v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  gameswf::Self *v15;
  gameswf::Self *v16;
  bool v17;
  int v18;
  gameswf::Self *v19;
  int v20;
  gameswf::Self *v21;
  uint32_t *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  gameswf::Self *v31;
  gameswf::Self *v32;
  gameswf::Self *v33;

  v29 = *(uint32_t *)(a2 + 8);
  v30 = *(uint32_t *)(a2 + 12);
  v4 = *(uint32_t *)(*(uint32_t *)(a1 + 52) + 16);
  v5 = (a2 - *(uint32_t *)(a1 + 16)) >> 4;
  if ( v29 - a3 > 0 )
  {
    v22 = (uint32_t *)(16 * (v5 + a3) + *(uint32_t *)(a1 + 16));
    v22[2] = v29 - a3;
    v22[3] = a4;
    *v22 = 0;
    v22[1] = 0;
    v31 = *(gameswf::Self **)(a1 + 36);
    v27 = (int)(uintptr_t)(v31) + 1;
    v6 = *(uint32_t *)(a1 + 40);
    if ( (int)(uintptr_t)(v31) + 1 <= v6 || *(uint32_t *)(a1 + 44) != 0 )
    {
      v32 = *(gameswf::Self **)(a1 + 32);
      v7 = *(gameswf::Self **)(a1 + 36);
    }
    else
    {
      v16 = (gameswf::Self *)((v27 >> 1) + v27);
      v17 = v16 == nullptr;
      v33 = v16;
      *(uint32_t *)(a1 + 40) = (uint32_t)(uintptr_t)(v16);
      v18 = *(uint32_t *)(a1 + 32);
      if ( v17 )
      {
        if ( v18 != 0 )
        {
          v24 = v4;
          gameswf::free_internal(*(gameswf::Self **)(a1 + 32));
          v4 = v24;
          v31 = *(gameswf::Self **)(a1 + 36);
        }
        *(uint32_t *)(a1 + 32) = 0;
        v32 = nullptr;
        v7 = v31;
      }
      else
      {
        v26 = v4;
        if ( v18 != 0 )
        {
          v19 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)(a1 + 32), 4 * (uint32_t)(uintptr_t)(v33), 4 * v6);
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v19);
          v32 = v19;
          v7 = *(gameswf::Self **)(a1 + 36);
          v4 = v26;
        }
        else
        {
          v20 = gameswf::malloc_internal(4 * (uint32_t)(uintptr_t)(v33));
          v21 = *(gameswf::Self **)(a1 + 36);
          *(uint32_t *)(a1 + 32) = v20;
          v32 = (gameswf::Self *)v20;
          v4 = v26;
          v7 = v21;
        }
      }
    }
    v8 = (uint32_t *)((char *)v32 + 4 * (uint32_t)(uintptr_t)(v7));
    if ( v8 != nullptr )
      *v8 = (uint32_t)(uintptr_t)(v22);
    *(uint32_t *)(a1 + 36) = v27;
  }
  result = (char *)(v30 - a4);
  if ( v30 - a4 > 0 )
  {
    v10 = (uint32_t *)(*(uint32_t *)(a1 + 16) + 16 * (a4 * (v4 / 16) + v5));
    v10[2] = v29;
    v10[3] = (uint32_t)(uintptr_t)(result);
    *v10 = 0;
    v10[1] = 0;
    v11 = *(uint32_t *)(a1 + 36);
    v28 = *(uint32_t *)(a1 + 40);
    v12 = v11 + 1;
    if ( v11 + 1 <= v28 || *(uint32_t *)(a1 + 44) != 0 )
    {
      v13 = *(char **)(a1 + 32);
    }
    else
    {
      v14 = v12 + (v12 >> 1);
      *(uint32_t *)(a1 + 40) = v14;
      if ( v14 != 0 )
      {
        v25 = v11 + 1;
        if ( *(uint32_t *)(a1 + 32) != 0 )
          v13 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(a1 + 32), 4 * v14, 4 * v28);
        else
          v13 = (char *)gameswf::malloc_internal(4 * v14);
        *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v13);
        v11 = *(uint32_t *)(a1 + 36);
        v12 = v25;
      }
      else
      {
        v15 = *(gameswf::Self **)(a1 + 32);
        if ( v15 != nullptr )
        {
          v23 = v11 + 1;
          gameswf::free_internal(v15);
          v11 = *(uint32_t *)(a1 + 36);
          v12 = v23;
        }
        *(uint32_t *)(a1 + 32) = 0;
        v13 = nullptr;
      }
    }
    result = &v13[4 * v11];
    if ( result != nullptr )
      *(uint32_t *)result = (uint32_t)(uintptr_t)(v10);
    *(uint32_t *)(a1 + 36) = v12;
  }
  *(uint32_t *)(a2 + 8) = a3;
  *(uint32_t *)(a2 + 12) = a4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextureCache::findAvailableRegion  (binary VA: 0x110cc80)
// Original: gameswf::TextureCache::findAvailableRegion
// ----------------------------------------------------------------------------
int gameswf::TextureCache::findAvailableRegion(gameswf::TextureCache::Self *self, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int i;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  int v14;

  v12 = a2 / 16;
  v3 = 0;
  v14 = a3 / 16;
  v13 = *((uint32_t *)self + 9);
  if ( v13 <= 0 )
    return v3;
  v4 = -1;
  v5 = *((uint32_t *)self + 8);
  for ( i = 0; i != v13; ++i )
  {
    while ( 1 )
    {
      v7 = *(uint32_t *)(v5 + 4 * i);
      v8 = *(uint32_t *)(v7 + 8);
      if ( v12 <= v8 )
      {
        v9 = *(uint32_t *)(v7 + 12);
        if ( v14 <= v9 )
          break;
      }
LABEL_5:
      if ( ++i == v13 )
        goto LABEL_11;
    }
    if ( v4 != -1 )
    {
      v10 = *(uint32_t *)(v5 + 4 * v4);
      if ( v8 >= *(uint32_t *)(v10 + 8) )
      {
        if ( v9 < *(uint32_t *)(v10 + 12) )
          v4 = i;
        goto LABEL_5;
      }
    }
    v4 = i;
  }
LABEL_11:
  if ( v4 == -1 )
    return 0;
  v3 = *(uint32_t *)(v5 + 4 * v4);
  if ( i == 1 )
  {
    *((uint32_t *)self + 9) = 0;
  }
  else
  {
    memmove((void *)(v5 + 4 * v4), (const void *)(v5 + 4 * v4 + 4), 4 * (i - 1 - v4));
    --*((uint32_t *)self + 9);
  }
  if ( v12 < *(uint32_t *)(v3 + 8) || v14 < *(uint32_t *)(v3 + 12) )
    gameswf::TextureCache::subdivideRegion((int)(uintptr_t)(self), v3, v12, v14);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextureCache::verifyIntegrity  (binary VA: 0x110cdb0)
// Original: gameswf::TextureCache::verifyIntegrity
// ----------------------------------------------------------------------------
void gameswf::TextureCache::verifyIntegrity()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextureCache::getRegionSizeRequirement  (binary VA: 0x110cdc0)
// Original: gameswf::TextureCache::getRegionSizeRequirement
// ----------------------------------------------------------------------------
int gameswf::TextureCache::getRegionSizeRequirement(gameswf::TextureCache::Self *self, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = *(uint32_t *)self + 15;
  if ( *(int *)self >= 0 )
    v2 = *(uint32_t *)self;
  v3 = v2 >> 4;
  v4 = 16 * v3;
  if ( *(uint32_t *)self % 16 > 0 )
    v4 = 16 * (v3 + 1);
  if ( v4 <= 15 )
    v4 = 16;
  *(uint32_t *)self = v4;
  v5 = *a2 + 15;
  if ( *a2 >= 0 )
    v5 = *a2;
  v6 = v5 >> 4;
  result = 16 * v6;
  if ( *a2 % 16 > 0 )
    result = 16 * (v6 + 1);
  if ( result <= 15 )
    result = 16;
  *a2 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextureCache::reset  (binary VA: 0x110ce40)
// Original: gameswf::TextureCache::reset
// ----------------------------------------------------------------------------
char * gameswf::TextureCache::reset(gameswf::TextureCache::Self *self)
{
  gameswf::Self *v1;
  int v2;
  int v3;
  int i;
  uint32_t *v5;
  int v6;
  int v7;
  uint32_t *v8;
  unsigned int v9;
  int v10;
  unsigned int v11; // kr04_4
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  void *s;
  int v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  char *v29;
  char *result;
  int v31;
  bool v32;
  gameswf::Self *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;

  v1 = *((gameswf::Self **)self + 12);
  if ( v1 != nullptr )
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
          v1 = *((gameswf::Self **)self + 12);
        }
        v3 += 28;
      }
    }
    gameswf::free_internal(v1);
    *((uint32_t *)self + 12) = 0;
  }
  v6 = *((uint32_t *)self + 9);
  if ( v6 < 0 )
  {
    v7 = 4 * v6;
    do
    {
      v8 = (uint32_t *)(*((uint32_t *)self + 8) + v7);
      if ( v8 != nullptr )
        *v8 = 0;
      v7 += 4;
      ++v6;
    }
    while ( v6 != 0 );
  }
  v9 = *((uint32_t *)self + 1);
  v11 = *(uint32_t *)self;
  v10 = *(uint32_t *)self + 1;
  *((uint32_t *)self + 9) = 0;
  *(uint32_t *)self = v10;
  *((uint32_t *)self + 2) = v10;
  v12 = *((uint32_t *)self + 13);
  v13 = (__PAIR64__(v9, v11) + 1) >> 32;
  *((uint32_t *)self + 1) = v13;
  *((uint32_t *)self + 3) = v13;
  v14 = *(uint32_t *)(v12 + 16);
  v15 = *(uint32_t *)(v12 + 20);
  v16 = v14 / 16;
  v17 = v15 + 15;
  if ( v15 >= 0 )
    v17 = v15;
  v39 = v17;
  s = *((void **)self + 15);
  v40 = v39 >> 4;
  if ( s != nullptr )
  {
    v36 = v14 / 16;
    memset(s, 0, *((uint32_t *)self + 14) * v14 * v15);
    v16 = v36;
  }
  v19 = *((uint32_t *)self + 5);
  v20 = v16 * v40;
  if ( v16 * v40 != 0 )
  {
    v21 = *((uint32_t *)self + 6);
    if ( v20 > v21 && *((uint32_t *)self + 7) == 0 )
    {
      v31 = v20 + (v20 >> 1);
      v32 = v31 == 0;
      v35 = v31;
      *((uint32_t *)self + 6) = v31;
      v33 = *((gameswf::Self **)self + 4);
      if ( v32 )
      {
        if ( v33 != nullptr )
        {
          v37 = v16;
          gameswf::free_internal(v33);
          v16 = v37;
        }
        *((uint32_t *)self + 4) = 0;
      }
      else
      {
        v38 = v16;
        if ( v33 != nullptr )
          *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*((gameswf::Self **)self + 4), 16 * v35, 16 * v21));
        else
          *((uint32_t *)self + 4) = gameswf::malloc_internal(16 * v35);
        v16 = v38;
      }
    }
  }
  if ( v20 > v19 )
  {
    v22 = 16 * v19;
    do
    {
      v23 = (uint32_t *)(*((uint32_t *)self + 4) + v22);
      if ( v23 != nullptr )
      {
        *v23 = 0;
        v23[1] = 0;
        v23[2] = 0;
        v23[3] = 0;
      }
      ++v19;
      v22 += 16;
    }
    while ( v19 != v20 );
  }
  v24 = *((uint32_t **)self + 4);
  *((uint32_t *)self + 5) = v20;
  v24[2] = v16;
  *v24 = 0;
  v24[1] = 0;
  v24[3] = v40;
  v25 = *((uint32_t *)self + 9);
  v26 = *((uint32_t *)self + 10);
  v27 = *((uint32_t *)self + 4);
  v28 = v25 + 1;
  if ( v25 + 1 <= v26 || *((uint32_t *)self + 11) != 0 )
  {
    v29 = *((char **)self + 8);
  }
  else
  {
    v34 = v28 + (v28 >> 1);
    *((uint32_t *)self + 10) = v34;
    if ( v34 != 0 )
    {
      if ( *((uint32_t *)self + 8) != 0 )
        v29 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 8), 4 * v34, 4 * v26);
      else
        v29 = (char *)gameswf::malloc_internal(4 * v34);
      *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v29);
      v25 = *((uint32_t *)self + 9);
    }
    else
    {
      if ( *((uint32_t *)self + 8) != 0 )
      {
        gameswf::free_internal(*((gameswf::Self **)self + 8));
        v25 = *((uint32_t *)self + 9);
      }
      *((uint32_t *)self + 8) = 0;
      v29 = nullptr;
    }
  }
  result = &v29[4 * v25];
  if ( result != nullptr )
    *(uint32_t *)result = v27;
  *((uint32_t *)self + 9) = v28;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextureCache::Construct  (binary VA: 0x110d120)
// Original: gameswf::TextureCache::TextureCache
// ----------------------------------------------------------------------------
gameswf::TextureCache::Self * gameswf::TextureCache::Construct(gameswf::TextureCache::Self *self, int a2, gameswf::RefCounted::Self *a3, int a4, bool a5, const char *a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, char a15, int a16, int a17, gameswf::Self *a18, int a19)
{
  bool v19; // si
  int v20;
  char *v21;
  gameswf::Self *v22;
  gameswf::RefCounted::Self *v23;
  gameswf::RefCounted::Self *v24;
  int v25;
  int32_t v26;
  char *v28;
  gameswf::Self *v29;
  int v30;
  int v31;
  gameswf::RefCounted::Self *v32;
  int32_t v33;
  char *v34;
  gameswf::Self *v35;
  int v36;
  int v37;
  gameswf::RefCounted::Self *v38;
  int32_t v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint32_t _g4_t_v48[11];
  typedef char _g4_t_v49;
  typedef uint8_t _g4_t_v50[3];
  typedef char *_g4_t_v51;
  typedef gameswf::Self *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v40)) > _g4_s0 ? (12u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v41)) > _g4_s1 ? (12u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v42)) > _g4_s2 ? (12u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v43)) > _g4_s3 ? (16u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v44)) > _g4_s4 ? (20u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v45)) > _g4_s5 ? (24u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v46)) > _g4_s6 ? (28u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v47)) > _g4_s7 ? (32u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v48)) > _g4_s8 ? (36u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v49)) > _g4_s9 ? (80u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (81u + sizeof(_g4_t_v50)) > _g4_s10 ? (81u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v51)) > _g4_s11 ? (84u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v52)) > _g4_s12 ? (92u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v53)) > _g4_s13 ? (96u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v54)) > _g4_s14 ? (104u + sizeof(_g4_t_v54)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 80u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 81u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 84u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 92u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 96u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 104u);

  v19 = a5;
  *((uint32_t *)self + 14) = a4;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 0;
  gameswf::TextureCache::getRegionSizeRequirement((gameswf::TextureCache::Self *)&a2, (int *)&a3);
  if ( *((uint32_t *)self + 14) == 1 )
  {
    v48[0] = 1;
    v48[1] = a2;
    v48[2] = (uint32_t)(uintptr_t)(a3);
    memset(&v48[5], 0, 24);
    LOWORD(v53) = -1;
    BYTE2(v53) = 127;
    HIBYTE(v53) |= 1u;
    v48[3] = a2;
    v49 = 1;
    v50[0] = 0;
    v48[4] = (uint32_t)(uintptr_t)(a3);
    gameswf::String::resize((gameswf::String::Self *)&v49, 17);
    if ( v49 == -1 )
    {
      v34 = v51;
      v35 = v52;
    }
    else
    {
      v34 = (char *)v49;
      v35 = (gameswf::Self *)v50;
    }
    gameswf::Strcpy_s(v35, v34, (gameswf::Self *)"TextureCacheAlpha");
    v53 |= 0x7FFFFFu;
    v36 = (*(int (**)(uint32_t *, uint32_t *, int, int, int, int, int, int))(*gameswf::s_render_handler + 8))(
            (uint32_t *)(gameswf::s_render_handler),
            v48,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
    v37 = *((uint32_t *)self + 13);
    v38 = (gameswf::RefCounted::Self *)v36;
    if ( v36 != v37 )
    {
      if ( v37 != 0 )
        gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 13));
      v37 = 0;
      *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v38);
      if ( v38 != nullptr )
      {
        gameswf::RefCounted::addRef(v38);
        v37 = *((uint32_t *)self + 13);
      }
    }
    G4_VCALL<void>(v37, 20);
    if ( a15 == -1 && (a19 & 0x1000000) != 0 )
    {
      v54 = a17;
      gameswf::free_internal(a18);
    }
    v25 = a13;
    if ( a13 != 0 )
    {
      while ( 1 )
      {
        v39 = *(uint32_t *)(v25 + 4);
        _mm_mfence();
        if ( v39 != 2 )
          break;
        while ( *(uint16_t *)(v25 + 32) == 0xFFFF )
        {
LABEL_51:
          if ( v39 == __sync_val_compare_and_swap((volatile int32_t *)(v25 + 4), v39, v39 - 1) )
            return (gameswf::TextureCache::Self *)gameswf::TextureCache::reset(self);
          v39 = *(uint32_t *)(v25 + 4);
          _mm_mfence();
          if ( v39 != 2 )
            goto LABEL_50;
        }
        glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v25);
      }
LABEL_50:
      if ( v39 != 1 )
        goto LABEL_51;
      goto LABEL_33;
    }
    return (gameswf::TextureCache::Self *)gameswf::TextureCache::reset(self);
  }
  if ( !v19 )
  {
    v20 = opNew(0x18u);
    gameswf::ImageRGBA::Construct((gameswf::ImageRGBA::Self *)v20, a2, (int)(uintptr_t)(a3));
    memset(*(void **)(v20 + 8), 0, *(uint32_t *)(v20 + 16) * *(uint32_t *)(v20 + 20));
    v48[0] = 3;
    v48[1] = a2;
    v48[2] = (uint32_t)(uintptr_t)(a3);
    v48[5] = 0;
    LOWORD(v53) = -1;
    v48[6] = 0;
    BYTE2(v53) = 127;
    HIBYTE(v53) |= 1u;
    memset(&v48[8], 0, 12);
    v48[3] = a2;
    v49 = 1;
    v50[0] = 0;
    v48[4] = (uint32_t)(uintptr_t)(a3);
    v48[7] = v20;
    gameswf::String::resize((gameswf::String::Self *)&v49, 16);
    if ( v49 == -1 )
    {
      v21 = v51;
      v22 = v52;
    }
    else
    {
      v21 = (char *)v49;
      v22 = (gameswf::Self *)v50;
    }
    gameswf::Strcpy_s(v22, v21, (gameswf::Self *)"TextureCacheRGBA");
    v53 |= 0x7FFFFFu;
    v23 = (gameswf::RefCounted::Self *)(*(int (**)(uint32_t *, uint32_t *, int, int, int, int, int, int))(*gameswf::s_render_handler + 8))(
                                   (uint32_t *)(gameswf::s_render_handler),
                                   v48,
                                   v40,
                                   v43,
                                   v44,
                                   v45,
                                   v46,
                                   v47);
    v24 = *((gameswf::RefCounted::Self **)self + 13);
    if ( v23 != v24 )
    {
      if ( v24 != nullptr )
      {
        a3 = v23;
        gameswf::RefCounted::dropRef(v24);
        v23 = a3;
      }
      v24 = nullptr;
      *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v23);
      if ( v23 != nullptr )
      {
        gameswf::RefCounted::addRef(v23);
        v24 = *((gameswf::RefCounted::Self **)self + 13);
      }
    }
    G4_VCALL<void>(v24, 20);
    (**(void (***)(int))v20)(v20);
    v54 = 0;
    gameswf::free_internal((gameswf::Self *)v20);
    if ( a15 == -1 && (a19 & 0x1000000) != 0 )
    {
      v54 = a17;
      gameswf::free_internal(a18);
    }
    v25 = a13;
    if ( a13 != 0 )
    {
      while ( 1 )
      {
        v26 = *(uint32_t *)(v25 + 4);
        _mm_mfence();
        if ( v26 != 2 )
          break;
        if ( *(uint16_t *)(v25 + 32) == 0xFFFF )
        {
LABEL_14:
          if ( v26 == __sync_val_compare_and_swap((volatile int32_t *)(v25 + 4), v26, v26 - 1) )
            return (gameswf::TextureCache::Self *)gameswf::TextureCache::reset(self);
        }
        else
        {
          glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v25);
        }
      }
      if ( v26 == 1 )
        goto LABEL_33;
      goto LABEL_14;
    }
    return (gameswf::TextureCache::Self *)gameswf::TextureCache::reset(self);
  }
  v48[0] = 6;
  v48[1] = a2;
  v48[2] = (uint32_t)(uintptr_t)(a3);
  memset(&v48[5], 0, 24);
  LOWORD(v53) = -1;
  BYTE2(v53) = 127;
  HIBYTE(v53) |= 1u;
  v48[3] = a2;
  v49 = 1;
  v50[0] = 0;
  v48[4] = (uint32_t)(uintptr_t)(a3);
  gameswf::String::resize((gameswf::String::Self *)&v49, 18);
  if ( v49 == -1 )
  {
    v28 = v51;
    v29 = v52;
  }
  else
  {
    v28 = (char *)v49;
    v29 = (gameswf::Self *)v50;
  }
  gameswf::Strcpy_s(v29, v28, (gameswf::Self *)"TextureCacheTarget");
  v53 |= 0x7FFFFFu;
  v30 = (*(int (**)(uint32_t *, uint32_t *, int, int, int, int, int, int))(*gameswf::s_render_handler + 8))(
          (uint32_t *)(gameswf::s_render_handler),
          v48,
          v41,
          v43,
          v44,
          v45,
          v46,
          v47);
  v31 = *((uint32_t *)self + 13);
  v32 = (gameswf::RefCounted::Self *)v30;
  if ( v30 != v31 )
  {
    if ( v31 != 0 )
      gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 13));
    v31 = 0;
    *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v32);
    if ( v32 != nullptr )
    {
      gameswf::RefCounted::addRef(v32);
      v31 = *((uint32_t *)self + 13);
    }
  }
  G4_VCALL<void>(v31, 20);
  if ( a15 == -1 && (a19 & 0x1000000) != 0 )
  {
    v54 = a17;
    gameswf::free_internal(a18);
  }
  v25 = a13;
  if ( a13 == 0 )
    return (gameswf::TextureCache::Self *)gameswf::TextureCache::reset(self);
  while ( 1 )
  {
    v33 = *(uint32_t *)(v25 + 4);
    _mm_mfence();
    if ( v33 != 2 )
      break;
    while ( *(uint16_t *)(v25 + 32) == 0xFFFF )
    {
LABEL_29:
      if ( v33 == __sync_val_compare_and_swap((volatile int32_t *)(v25 + 4), v33, v33 - 1) )
        return (gameswf::TextureCache::Self *)gameswf::TextureCache::reset(self);
      v33 = *(uint32_t *)(v25 + 4);
      _mm_mfence();
      if ( v33 != 2 )
        goto LABEL_28;
    }
    glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v25);
  }
LABEL_28:
  if ( v33 != 1 )
    goto LABEL_29;
LABEL_33:
  G4_VCALL<void>(v25, 4);
  return (gameswf::TextureCache::Self *)gameswf::TextureCache::reset(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextureCache::unlockAll  (binary VA: 0x110d740)
// Original: gameswf::TextureCache::unlockAll
// ----------------------------------------------------------------------------
int gameswf::TextureCache::unlockAll(gameswf::TextureCache::Self *self)
{
  int result;
  int v2;

  result = *((uint32_t *)self + 3);
  v2 = *(uint32_t *)(result + 36);
  if ( v2 != 0 )
  {
    result = *(uint32_t *)(v2 + 60);
    if ( result != 0 )
    {
      result = (*(int (**)(uint32_t))(**(uint32_t **)(v2 + 52) + 32))(*(uint32_t *)(v2 + 52));
      *(uint32_t *)(v2 + 60) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextureCache::findUsedRegion  (binary VA: 0x110d780)
// Original: gameswf::TextureCache::findUsedRegion
// ----------------------------------------------------------------------------
int gameswf::TextureCache::findUsedRegion(gameswf::TextureCache::Self *self, int a2, int a3)
{
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);

  v15 = 0;
  v16 = a2 / 16;
  v17 = a3 / 16;
  v3 = *((uint32_t *)self + 12);
  if ( v3 == 0 )
    return v15;
  v4 = *(uint32_t *)(v3 + 4);
  if ( v4 < 0 )
    return v15;
  v6 = 0;
  if ( *(uint32_t *)(v3 + 8) == -2 )
  {
    v12 = 36;
    v13 = 1;
    do
    {
      v6 = v13;
      if ( v13 > v4 )
        return 0;
      v14 = *(uint32_t *)(v3 + v12);
      ++v13;
      v12 += 28;
    }
    while ( v14 == -2 );
  }
  v15 = 0;
  do
  {
    v7 = *(uint32_t *)(v3 + 28 * v6 + 32);
    if ( v16 > *(uint32_t *)(v7 + 8) || v17 > *(uint32_t *)(v7 + 12) || v15 != 0 && *(uint64_t *)v7 >= *(uint64_t *)v15 )
    {
      if ( v4 < v6 )
        continue;
    }
    else
    {
      v15 = *(uint32_t *)(v3 + 28 * v6 + 32);
      v18[0] = *(uint32_t *)(v3 + 28 * v6 + 16);
      v18[1] = *(uint32_t *)(v3 + 28 * v6 + 20);
      v18[2] = *(uint32_t *)(v3 + 28 * v6 + 24);
      v18[3] = *(uint32_t *)(v3 + 28 * v6 + 28);
      v4 = *(uint32_t *)(v3 + 4);
      if ( v4 < v6 )
        continue;
    }
    if ( v6 + 1 <= v4 && *(uint32_t *)(v3 + 28 * (v6 + 1) + 8) == -2 )
    {
      v9 = v6 + 2;
      v10 = 28 * (v6 + 2) + 8;
      do
      {
        v6 = v9;
        if ( v9 > v4 )
          break;
        v11 = *(uint32_t *)(v3 + v10);
        ++v9;
        v10 += 28;
      }
      while ( v11 == -2 );
    }
    else
    {
      ++v6;
    }
  }
  while ( v6 <= v4 );
  if ( v15 == 0 )
    return v15;
  gameswf::hash_gameswf_TextureCache_key_883d29::erase(
    (char *)self + 48,
    v18);
  if ( v16 < *(uint32_t *)(v15 + 8) || v17 < *(uint32_t *)(v15 + 12) )
    gameswf::TextureCache::subdivideRegion((int)(uintptr_t)(self), v15, v16, v17);
  v8 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 2) = *(uint32_t *)self;
  *((uint32_t *)self + 3) = v8;
  return v15;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextureCache::verifyIntegrity  (binary VA: 0x110d990)
// Original: gameswf::TextureCache::verifyIntegrity
// ----------------------------------------------------------------------------
void gameswf::TextureCache::verifyIntegrity(gameswf::TextureCache::Self *self)
{
  int v1;
  int v2;
  int v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  int i;
  uint32_t *v8;
  int v9;
  char *v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int *v22;
  int v23;
  int v24;
  int *v25;
  int v26;
  int v27;
  int *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint8_t *_g4_t_v51;
  typedef uint32_t _g4_t_v52[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v39)) > _g4_s0 ? (12u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v40)) > _g4_s1 ? (16u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v41)) > _g4_s2 ? (16u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v42)) > _g4_s3 ? (20u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v43)) > _g4_s4 ? (24u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v44)) > _g4_s5 ? (28u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v45)) > _g4_s6 ? (32u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v46)) > _g4_s7 ? (36u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v47)) > _g4_s8 ? (36u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v48)) > _g4_s9 ? (36u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v49)) > _g4_s10 ? (40u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v50)) > _g4_s11 ? (40u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v51)) > _g4_s12 ? (44u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v52)) > _g4_s13 ? (48u + sizeof(_g4_t_v52)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);

  if ( *((int *)self + 9) > 0 )
  {
    v1 = 0;
    do
    {
      ++v1;
      gameswf::TextureCache::verifyIntegrity();
    }
    while ( *((uint32_t *)self + 9) > v1 );
  }
  v52[0] = 0;
  v43 = (int *)((char *)self + 48);
  v2 = *((uint32_t *)self + 12);
  if ( v2 != 0 )
  {
    v3 = *(uint32_t *)(v2 + 4);
    v44 = 0;
    if ( v3 >= 0 && *(uint32_t *)(v2 + 8) == -2 )
    {
      v30 = 36;
      v31 = 1;
      do
      {
        v44 = v31;
        if ( v31 > v3 )
          break;
        v32 = *(uint32_t *)(v2 + v30);
        ++v31;
        v30 += 28;
      }
      while ( v32 == -2 );
    }
    if ( self != (gameswf::TextureCache::Self *)-48 )
    {
LABEL_22:
      v42 = 28 * v44 + 8;
      v12 = *v43;
      while ( 1 )
      {
        if ( v12 == 0 || v44 > *(uint32_t *)(v12 + 4) )
          goto LABEL_7;
        gameswf::TextureCache::verifyIntegrity();
        v15 = (uint32_t *)v52[0];
        v51 = (uint8_t *)(*v43 + v42);
        v49 = (int *)(v51 + 24);
        if ( v52[0] == 0 )
        {
          gameswf::hash_gameswf_TextureCache_reg_11d285::set_raw_capacity(
            (gameswf::hash<gameswf::TextureCache::region *, gameswf::TextureCache::region *, gameswf::fixed_size_hash<gameswf::TextureCache::region *>> *)v52,
            8);
          v15 = (uint32_t *)v52[0];
          v19 = *(uint32_t *)v52[0];
          goto LABEL_35;
        }
        v40 = ((((((v51[27] + 352988219) << 6) + 0xFFFF * (v51[27] + 352988219) + v51[26]) << 6)
              + 0xFFFF * (((v51[27] + 352988219) << 6) + 0xFFFF * (v51[27] + 352988219) + v51[26])
              + v51[25]) << 6)
            + 0xFFFF
            * (((((v51[27] + 352988219) << 6) + 0xFFFF * (v51[27] + 352988219) + v51[26]) << 6)
             + 0xFFFF * (((v51[27] + 352988219) << 6) + 0xFFFF * (v51[27] + 352988219) + v51[26])
             + v51[25])
            + v51[24];
        v16 = v40 & *(uint32_t *)(v52[0] + 4);
        v46 = *(uint32_t *)(v52[0] + 4);
        v17 = (int *)(v52[0] + 16 * v16 + 8);
        if ( *v17 == -2 )
          goto LABEL_33;
        v18 = *(uint32_t *)(v52[0] + 16 * v16 + 12);
        if ( v16 != (v18 & *(uint32_t *)(v52[0] + 4)) )
          goto LABEL_33;
        while ( v18 != v40 )
        {
          v16 = *v17;
          if ( *v17 == -1 )
            goto LABEL_33;
LABEL_30:
          v17 = (int *)(v52[0] + 16 * v16 + 8);
          v18 = *(uint32_t *)(v52[0] + 16 * v16 + 12);
        }
        v9 = *v49;
        if ( v17[2] != *v49 )
          break;
        if ( v16 >= 0 )
        {
          v10 = (char *)self + 48;
          v11 = (uint32_t *)(v52[0] + 16 * v16 + 20);
          goto LABEL_18;
        }
LABEL_33:
        v19 = *(uint32_t *)v52[0];
        if ( 3 * *(uint32_t *)v52[0] > 2 * v46 + 2 )
        {
          gameswf::hash_gameswf_TextureCache_reg_11d285::set_raw_capacity(
            (gameswf::hash<gameswf::TextureCache::region *, gameswf::TextureCache::region *, gameswf::fixed_size_hash<gameswf::TextureCache::region *>> *)v52,
            2 * v46 + 2);
          v15 = (uint32_t *)v52[0];
          v19 = *(uint32_t *)v52[0];
        }
LABEL_35:
        *v15 = v19 + 1;
        v41 = ((v51[25]
              + 0xFFFF * (v51[26] + 0xFFFF * (v51[27] + 352988219) + ((v51[27] + 352988219) << 6))
              + ((v51[26] + 0xFFFF * (v51[27] + 352988219) + ((v51[27] + 352988219) << 6)) << 6)) << 6)
            + v51[24]
            + 0xFFFF
            * (v51[25]
             + 0xFFFF * (v51[26] + 0xFFFF * (v51[27] + 352988219) + ((v51[27] + 352988219) << 6))
             + ((v51[26] + 0xFFFF * (v51[27] + 352988219) + ((v51[27] + 352988219) << 6)) << 6));
        v20 = *(uint32_t *)(v52[0] + 4);
        v45 = v20 & v41;
        v47 = (int *)(v52[0] + 16 * (v20 & v41) + 8);
        v39 = *v47;
        v21 = v20 & v41;
        if ( *v47 == -2 )
        {
          *v47 = -1;
          v47[1] = v41;
          v34 = *((uint32_t *)v51 + 6);
          v47[3] = 0;
          v47[2] = v34;
        }
        else
        {
          while ( 1 )
          {
            v21 = v20 & (v21 + 1);
            v22 = (int *)(v52[0] + 16 * v21 + 8);
            if ( *v22 == -2 )
              break;
            if ( (v20 & v41) == v21 )
            {
              v21 = v20 & v41;
              break;
            }
          }
          v23 = *(uint32_t *)(v52[0] + 16 * (v20 & v41) + 12) & v20;
          if ( v45 == v23 )
          {
            *v22 = v39;
            v22[1] = v47[1];
            v22[2] = v47[2];
            v22[3] = v47[3];
            v35 = *((uint32_t *)v51 + 6);
            *v47 = v21;
            v47[2] = v35;
            v47[3] = 0;
            v47[1] = v41;
          }
          else
          {
            v24 = v23;
            do
            {
              v25 = (int *)(v52[0] + 16 * v24 + 8);
              v24 = *v25;
            }
            while ( v45 != *v25 );
            *v22 = v39;
            v22[1] = v47[1];
            v22[2] = v47[2];
            v22[3] = v47[3];
            *v25 = v21;
            v26 = *((uint32_t *)v51 + 6);
            v47[3] = 0;
            v47[2] = v26;
            v47[1] = v41;
            *v47 = -1;
          }
        }
        if ( v52[0] != 0
          && (v48 = ((((((v51[27] + 352988219) << 6) + 0xFFFF * (v51[27] + 352988219) + v51[26]) << 6)
                    + 0xFFFF * (((v51[27] + 352988219) << 6) + 0xFFFF * (v51[27] + 352988219) + v51[26])
                    + v51[25]) << 6)
                  + v51[24]
                  + 0xFFFF
                  * (((((v51[27] + 352988219) << 6) + 0xFFFF * (v51[27] + 352988219) + v51[26]) << 6)
                   + 0xFFFF * (((v51[27] + 352988219) << 6) + 0xFFFF * (v51[27] + 352988219) + v51[26])
                   + v51[25]),
              v27 = v48 & *(uint32_t *)(v52[0] + 4),
              *(v28 = (int *)(v52[0] + 16 * v27 + 8)) != -2)
          && (v29 = *(uint32_t *)(v52[0] + 16 * v27 + 12), v27 == (v29 & *(uint32_t *)(v52[0] + 4))) )
        {
          while ( v29 != v48 || v28[2] != *v49 )
          {
            v27 = *v28;
            if ( *v28 == -1 )
              goto LABEL_58;
            v28 = (int *)(v52[0] + 16 * v27 + 8);
            v29 = *(uint32_t *)(v52[0] + 16 * v27 + 12);
          }
          if ( v27 >= 0 )
          {
            v11 = (uint32_t *)(v52[0] + 16 * v27 + 20);
            v9 = *(uint32_t *)(*v43 + v42 + 24);
            v10 = (char *)self + 48;
            goto LABEL_18;
          }
          v33 = 16 * v27 + 8;
        }
        else
        {
LABEL_58:
          v33 = -8;
        }
        v11 = (uint32_t *)(v52[0] + v33 + 12);
        v10 = (char *)self + 48;
        v9 = *(uint32_t *)(*v43 + v42 + 24);
LABEL_18:
        *v11 = v9;
        v12 = *(uint32_t *)v10;
        v13 = *(uint32_t *)(*(uint32_t *)v10 + 4);
        if ( v13 >= v44 )
        {
          v14 = v44 + 1;
          if ( v44 + 1 <= v13 && *(uint32_t *)(v12 + 28 * v14 + 8) == -2 )
          {
            v50 = *(uint32_t *)(*(uint32_t *)v10 + 4);
            v36 = v44 + 2;
            v37 = 28 * (v44 + 2) + 8;
            do
            {
              v14 = v36;
              if ( v36 > v50 )
                break;
              v38 = *(uint32_t *)(v12 + v37);
              ++v36;
              v37 += 28;
            }
            while ( v38 == -2 );
          }
          v44 = v14;
          goto LABEL_22;
        }
      }
      v16 = *v17;
      if ( *v17 == -1 )
        goto LABEL_33;
      goto LABEL_30;
    }
  }
LABEL_7:
  v4 = (gameswf::Self *)v52[0];
  if ( v52[0] != 0 )
  {
    v5 = *(uint32_t *)(v52[0] + 4);
    if ( v5 >= 0 )
    {
      v6 = 8;
      for ( i = 0; i <= v5; ++i )
      {
        v8 = (uint32_t *)((char *)v4 + v6);
        if ( *(uint32_t *)((char *)v4 + v6) != -2 )
        {
          *v8 = -2;
          v8[1] = 0;
          v4 = (gameswf::Self *)v52[0];
        }
        v6 += 16;
      }
    }
    gameswf::free_internal(v4);
  }
}


