#include "Core/Utils/DecompTypes.h"
#include "gameswf_RenderCache.h"

// ----------------------------------------------------------------------------
// Function: gameswf::RenderCache::record  (binary VA: 0x10bf990)
// Original: gameswf::RenderCache::record
// ----------------------------------------------------------------------------
int gameswf::RenderCache::record(gameswf::Self **a1, int a2, void *src, void *a4, int a5, int a6, char *a7, int a8)
{
  char *v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char *v18;
  int v19;
  char *v20;
  char *v21;
  int v22;
  char *v23;
  int v24;
  gameswf::Self *v25;
  int result;
  char *v27;
  int v28;
  int v29;
  int v30;
  int16_t v31;
  char *v32;
  int v33;
  gameswf::Self *v34;
  gameswf::Self *v35;
  gameswf::Self *v36;
  int v37;
  char *v38;
  int16_t v39;
  char *v40;

  v8 = (char *)a1[5];
  v9 = &v8[a6] == nullptr;
  v10 = (int)(uintptr_t)(&v8[a6]);
  v38 = (char *)a1[5];
  v40 = (char *)a1[21];
  if ( !v9 )
  {
    v11 = (int)(uintptr_t)(a1[6]);
    if ( v10 > v11 && a1[7] == nullptr )
    {
      v29 = v10 + (v10 >> 1);
      a1[6] = (gameswf::Self *)v29;
      if ( v29 != 0 )
      {
        v36 = a1[4];
        if ( v36 != nullptr )
          a1[4] = (gameswf::Self *)gameswf::realloc_internal(v36, 12 * v29, 12 * v11);
        else
          a1[4] = (gameswf::Self *)gameswf::malloc_internal(12 * v29);
      }
      else
      {
        if ( a1[4] != nullptr )
          gameswf::free_internal(a1[4]);
        a1[4] = nullptr;
      }
    }
  }
  a1[5] = (gameswf::Self *)v10;
  memcpy((char *)a1[4] + 12 * (uint32_t)(uintptr_t)(v38), src, 12 * a6);
  v12 = (int)(uintptr_t)(a1[9]) + a6;
  if ( v12 != 0 )
  {
    v13 = (int)(uintptr_t)(a1[10]);
    if ( v12 > v13 && a1[11] == nullptr )
    {
      v28 = v12 + (v12 >> 1);
      a1[10] = (gameswf::Self *)v28;
      if ( v28 != 0 )
      {
        v35 = a1[8];
        if ( v35 != nullptr )
          a1[8] = (gameswf::Self *)gameswf::realloc_internal(v35, 8 * v28, 8 * v13);
        else
          a1[8] = (gameswf::Self *)gameswf::malloc_internal(8 * v28);
      }
      else
      {
        if ( a1[8] != nullptr )
          gameswf::free_internal(a1[8]);
        a1[8] = nullptr;
      }
    }
  }
  a1[9] = (gameswf::Self *)v12;
  memcpy((char *)a1[8] + 8 * (uint32_t)(uintptr_t)(v38), a4, 8 * a6);
  v14 = (int)(uintptr_t)(a1[21]);
  v15 = v14 + a8;
  if ( v14 + a8 != 0 )
  {
    v16 = (int)(uintptr_t)(a1[22]);
    if ( v15 > v16 && a1[23] == nullptr )
    {
      v33 = v15 + (v15 >> 1);
      v9 = v33 == 0;
      v37 = v33;
      a1[22] = (gameswf::Self *)v33;
      v34 = a1[20];
      if ( v9 )
      {
        if ( v34 != nullptr )
        {
          gameswf::free_internal(v34);
          v15 = v14 + a8;
        }
        a1[20] = nullptr;
      }
      else
      {
        if ( v34 != nullptr )
          a1[20] = (gameswf::Self *)gameswf::realloc_internal(a1[20], 2 * v37, 2 * v16);
        else
          a1[20] = (gameswf::Self *)gameswf::malloc_internal(2 * v37);
        v15 = v14 + a8;
      }
    }
  }
  v17 = 2 * v14;
  if ( v14 < v15 )
  {
    do
    {
      v18 = (char *)a1[20] + v17;
      if ( v18 != nullptr )
        *(uint16_t *)v18 = 0;
      ++v14;
      v17 += 2;
    }
    while ( v14 != v15 );
  }
  v19 = (int)(uintptr_t)(a1[1]);
  a1[21] = (gameswf::Self *)v15;
  if ( v19 > 0
    && *(uint32_t *)(v20 = (char *)*a1 + 32 * v19 - 32) == 1
    && *((uint32_t *)v20 + 1) == a2
    && *((uint32_t *)v20 + 2) == a5 )
  {
    if ( a8 > 0 )
    {
      v39 = (uint16_t)(uintptr_t)v38 - *((uint32_t *)v20 + 4);
      v30 = 0;
      do
      {
        v31 = *(uint16_t *)&a7[v30] + v39;
        v32 = (char *)a1[20] + v30;
        v30 += 2;
        *(uint16_t *)&v32[2 * (uint32_t)(uintptr_t)(v40)] = v31;
      }
      while ( v30 != 2 * a8 );
      v20 = (char *)*a1 + 32 * ((uint32_t)(uintptr_t)(a1[1]) - 1);
    }
    *((uint32_t *)v20 + 5) += a6;
    result = (int)(uintptr_t)(*a1) + 32 * ((uint32_t)(uintptr_t)(a1[1]) - 1);
    *(uint32_t *)(result + 28) += a8;
  }
  else
  {
    memcpy((char *)a1[20] + 2 * (uint32_t)(uintptr_t)(v40), a7, 2 * a8);
    v21 = (char *)a1[1];
    v22 = (int)(uintptr_t)(v21 + 1);
    v23 = (char *)a1[2];
    if ( (int)(uintptr_t)(v21 + 1) <= (int)(uintptr_t)(v23) || a1[3] != nullptr )
    {
      v25 = *a1;
    }
    else
    {
      v24 = v22 + (v22 >> 1);
      a1[2] = (gameswf::Self *)v24;
      if ( v24 != 0 )
      {
        if ( *a1 != nullptr )
          v25 = (gameswf::Self *)gameswf::realloc_internal(*a1, 32 * v24, 32 * (uint32_t)(uintptr_t)(v23));
        else
          v25 = (gameswf::Self *)gameswf::malloc_internal(32 * v24);
        *a1 = v25;
        v21 = (char *)a1[1];
      }
      else
      {
        if ( *a1 != nullptr )
        {
          gameswf::free_internal(*a1);
          v21 = (char *)a1[1];
        }
        *a1 = nullptr;
        v25 = nullptr;
      }
    }
    result = 32 * (uint32_t)(uintptr_t)(v21);
    v27 = (char *)v25 + result;
    if ( v27 != nullptr )
    {
      result = BYTE1(a5);
      *((uint32_t *)v27 + 1) = a2;
      *(uint32_t *)v27 = 1;
      *((uint16_t *)v27 + 4) = a5;
      v27[13] = BYTE1(a5);
      *((uint16_t *)v27 + 5) = HIWORD(a5);
      v27[12] = a5;
      *((uint16_t *)v27 + 7) = HIWORD(a5);
      *((uint32_t *)v27 + 4) = (uint32_t)(uintptr_t)(v38);
      *((uint32_t *)v27 + 5) = a6;
      *((uint32_t *)v27 + 6) = (uint32_t)(uintptr_t)(v40);
      *((uint32_t *)v27 + 7) = a8;
    }
    a1[1] = (gameswf::Self *)v22;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderCache::record  (binary VA: 0x10bfe60)
// Original: gameswf::RenderCache::record
// ----------------------------------------------------------------------------
int gameswf::RenderCache::record(int a1, int a2, void *src, int a4, int a5, char *a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint8_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint16_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  gameswf::Self *v25;
  int result;
  int v27;
  int v28;
  int16_t v29;
  int v30;
  int v31;
  bool v32;
  gameswf::Self *v33;
  gameswf::Self *v34;
  int v35;
  int16_t v36;
  int v37;
  int v38;
  int v39;

  v7 = a1;
  v38 = *(uint32_t *)(a1 + 52);
  v39 = *(uint32_t *)(a1 + 84);
  v8 = a5 + v38;
  v35 = a5 + v38;
  if ( a5 + v38 != 0 )
  {
    v9 = *(uint32_t *)(a1 + 56);
    if ( v8 > v9 && *(uint32_t *)(a1 + 60) == 0 )
    {
      v27 = v35 + (v8 >> 1);
      *(uint32_t *)(a1 + 56) = v27;
      if ( v27 != 0 )
      {
        v34 = *(gameswf::Self **)(a1 + 48);
        if ( v34 != nullptr )
          *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v34, 24 * v27, 24 * v9));
        else
          *(uint32_t *)(a1 + 48) = gameswf::malloc_internal(24 * v27);
      }
      else
      {
        if ( *(uint32_t *)(a1 + 48) != 0 )
          gameswf::free_internal(*(gameswf::Self **)(a1 + 48));
        *(uint32_t *)(a1 + 48) = 0;
      }
    }
  }
  v10 = a5 + v38;
  if ( v38 < v35 )
  {
    v11 = v38;
    v12 = 24 * v38;
    do
    {
      v13 = (uint8_t *)(*(uint32_t *)(a1 + 48) + v12);
      if ( v13 != nullptr )
      {
        memset(v13, 0, 0x18u);
        v13[8] = -1;
        v13[9] = -1;
        v13[10] = -1;
        v13[11] = -1;
      }
      ++v11;
      v12 += 24;
    }
    while ( v11 != v35 );
    v7 = a1;
    v10 = a5 + v38;
  }
  *(uint32_t *)(v7 + 52) = v10;
  memcpy((void *)(*(uint32_t *)(v7 + 48) + 24 * v38), src, 24 * a5);
  v14 = *(uint32_t *)(v7 + 84);
  v15 = v14 + a7;
  if ( v14 + a7 != 0 )
  {
    v16 = *(uint32_t *)(v7 + 88);
    if ( v15 > v16 && *(uint32_t *)(v7 + 92) == 0 )
    {
      v31 = v15 + (v15 >> 1);
      v32 = v31 == 0;
      v37 = v31;
      *(uint32_t *)(v7 + 88) = v31;
      v33 = *(gameswf::Self **)(v7 + 80);
      if ( v32 )
      {
        if ( v33 != nullptr )
        {
          gameswf::free_internal(v33);
          v15 = v14 + a7;
        }
        *(uint32_t *)(v7 + 80) = 0;
      }
      else
      {
        if ( v33 != nullptr )
          *(uint32_t *)(v7 + 80) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)(v7 + 80), 2 * v37, 2 * v16));
        else
          *(uint32_t *)(v7 + 80) = gameswf::malloc_internal(2 * v37);
        v15 = v14 + a7;
      }
    }
  }
  v17 = 2 * v14;
  if ( v14 < v15 )
  {
    do
    {
      v18 = (uint16_t *)(*(uint32_t *)(v7 + 80) + v17);
      if ( v18 != nullptr )
        *v18 = 0;
      ++v14;
      v17 += 2;
    }
    while ( v14 != v15 );
  }
  v19 = *(uint32_t *)(v7 + 4);
  *(uint32_t *)(v7 + 84) = v15;
  if ( v19 > 0 && *(v20 = (uint32_t *)(*(uint32_t *)v7 + 32 * (v19 - 1))) == 1 && v20[1] == a2 && v20[2] == a4 )
  {
    if ( a7 > 0 )
    {
      v36 = v38 - v20[4];
      v28 = 0;
      do
      {
        v29 = *(uint16_t *)&a6[v28] + v36;
        v30 = *(uint32_t *)(v7 + 80) + v28;
        v28 += 2;
        *(uint16_t *)(v30 + 2 * v39) = v29;
      }
      while ( v28 != 2 * a7 );
      v20 = (uint32_t *)(*(uint32_t *)v7 + 32 * (*(uint32_t *)(v7 + 4) - 1));
    }
    v20[5] += a5;
    result = *(uint32_t *)v7 + 32 * (*(uint32_t *)(v7 + 4) - 1);
    *(uint32_t *)(result + 28) += a7;
  }
  else
  {
    memcpy((void *)(*(uint32_t *)(v7 + 80) + 2 * v39), a6, 2 * a7);
    v21 = *(uint32_t *)(v7 + 8);
    v22 = *(uint32_t *)(v7 + 4);
    v23 = v22 + 1;
    if ( v22 + 1 <= v21 || *(uint32_t *)(v7 + 12) != 0 )
    {
      v25 = *(gameswf::Self **)v7;
    }
    else
    {
      v24 = v23 + (v23 >> 1);
      *(uint32_t *)(v7 + 8) = v24;
      if ( v24 != 0 )
      {
        if ( *(uint32_t *)v7 != 0 )
          v25 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)v7, 32 * v24, 32 * v21);
        else
          v25 = (gameswf::Self *)gameswf::malloc_internal(32 * v24);
        *(uint32_t *)v7 = (uint32_t)(uintptr_t)(v25);
        v22 = *(uint32_t *)(v7 + 4);
      }
      else
      {
        if ( *(uint32_t *)v7 != 0 )
        {
          gameswf::free_internal(*(gameswf::Self **)v7);
          v22 = *(uint32_t *)(v7 + 4);
        }
        *(uint32_t *)v7 = 0;
        v25 = nullptr;
      }
    }
    result = (int)(uintptr_t)(v25) + 32 * v22;
    if ( result != 0 )
    {
      *(uint32_t *)result = 1;
      *(uint32_t *)(result + 4) = a2;
      *(uint8_t *)(result + 9) = BYTE1(a4);
      *(uint8_t *)(result + 12) = -1;
      *(uint8_t *)(result + 13) = -1;
      *(uint8_t *)(result + 11) = HIBYTE(a4);
      *(uint32_t *)(result + 16) = v38;
      *(uint32_t *)(result + 20) = a5;
      *(uint8_t *)(result + 8) = a4;
      *(uint32_t *)(result + 24) = v39;
      *(uint8_t *)(result + 14) = -1;
      *(uint8_t *)(result + 10) = BYTE2(a4);
      *(uint8_t *)(result + 15) = -1;
      *(uint32_t *)(result + 28) = a7;
    }
    *(uint32_t *)(v7 + 4) = v23;
  }
  return result;
}


