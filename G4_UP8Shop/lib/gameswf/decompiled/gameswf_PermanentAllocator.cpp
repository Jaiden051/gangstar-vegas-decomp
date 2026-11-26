#include "Core/Utils/DecompTypes.h"
#include "gameswf_PermanentAllocator.h"

// ----------------------------------------------------------------------------
// Function: gameswf::PermanentAllocator::allocate  (binary VA: 0x106df80)
// Original: gameswf::PermanentAllocator::allocate
// ----------------------------------------------------------------------------
int gameswf::PermanentAllocator::allocate(gameswf::PermanentAllocator::Self *self, signed int a2)
{
  int v2;
  gameswf::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  signed int v11;
  size_t v12;
  signed int v13;
  int v14;
  uint8_t *v15;
  int v17;
  int v18;
  int v19;
  int v20;
  signed int v21;

  if ( a2 % 4 != 0 )
    a2 = a2 - a2 % 4 + 4;
  v20 = *((uint32_t *)self + 1);
  v2 = 0;
  if ( v20 - 3 >= 0 )
    v2 = v20 - 3;
  if ( v20 <= v2 )
  {
    v3 = *(gameswf::Self **)self;
  }
  else
  {
    v3 = *(gameswf::Self **)self;
    v21 = *((uint32_t *)self + 4);
    v4 = *(uint32_t *)self + 16 * v2;
    v5 = *(uint32_t *)(v4 + 4);
    v6 = v5 + a2;
    if ( v5 + a2 <= v21 )
      goto LABEL_22;
    v7 = v2 + 1;
    v8 = 16 * v7;
    while ( v7 != v20 )
    {
      v4 = (int)(uintptr_t)(v3) + v8;
      v5 = *(uint32_t *)((char *)v3 + v8 + 4);
      v8 += 16;
      v6 = v5 + a2;
      if ( v5 + a2 <= v21 )
        goto LABEL_22;
      ++v7;
    }
  }
  v9 = v20 + 1;
  if ( v20 != -1 )
  {
    v17 = *((uint32_t *)self + 2);
    if ( v9 > v17 && *((uint32_t *)self + 3) == 0 )
    {
      v18 = v9 + (v9 >> 1);
      *((uint32_t *)self + 2) = v18;
      if ( v18 != 0 )
      {
        if ( v3 != nullptr )
          v3 = (gameswf::Self *)gameswf::realloc_internal(v3, 16 * v18, 16 * v17);
        else
          v3 = (gameswf::Self *)gameswf::malloc_internal(16 * v18);
        *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
      }
      else
      {
        if ( v3 != nullptr )
          gameswf::free_internal(v3);
        v3 = nullptr;
        *(uint32_t *)self = 0;
      }
    }
  }
  v10 = (int)(uintptr_t)(v3) + 16 * v20;
  if ( v10 != 0 )
  {
    *(uint32_t *)v10 = 0;
    *(uint32_t *)(v10 + 4) = 0;
    *(uint32_t *)(v10 + 8) = 0;
    *(uint32_t *)(v10 + 12) = 0;
    v3 = *(gameswf::Self **)self;
    v10 = *(uint32_t *)self + 16 * v20;
  }
  *((uint32_t *)self + 1) = v9;
  v11 = *((uint32_t *)self + 4);
  if ( *(uint32_t *)(v10 + 12) == 0 )
  {
    if ( a2 >= v11 )
      v11 = a2;
    v12 = *(uint32_t *)(v10 + 8);
    *(uint32_t *)(v10 + 8) = v11;
    if ( v11 != 0 )
    {
      if ( *(uint32_t *)v10 != 0 )
        *(uint32_t *)v10 = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)v10, v11, v12));
      else
        *(uint32_t *)v10 = gameswf::malloc_internal(v11);
      v9 = *((uint32_t *)self + 1);
      v3 = *(gameswf::Self **)self;
    }
    else
    {
      if ( *(uint32_t *)v10 != 0 )
        gameswf::free_internal(*(gameswf::Self **)v10);
      *(uint32_t *)v10 = 0;
      v9 = *((uint32_t *)self + 1);
      v3 = *(gameswf::Self **)self;
    }
  }
  v4 = (int)(uintptr_t)(v3) + 16 * v9 - 16;
  v5 = *(uint32_t *)(v4 + 4);
  v6 = v5 + a2;
LABEL_22:
  if ( v6 != 0 )
  {
    v13 = *(uint32_t *)(v4 + 8);
    if ( v6 > v13 && *(uint32_t *)(v4 + 12) == 0 )
    {
      v19 = v6 + (v6 >> 1);
      *(uint32_t *)(v4 + 8) = v19;
      if ( v19 != 0 )
      {
        if ( *(uint32_t *)v4 != 0 )
          *(uint32_t *)v4 = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)v4, v6 + (v6 >> 1), v13));
        else
          *(uint32_t *)v4 = gameswf::malloc_internal(v6 + (v6 >> 1));
      }
      else
      {
        if ( *(uint32_t *)v4 != 0 )
          gameswf::free_internal(*(gameswf::Self **)v4);
        *(uint32_t *)v4 = 0;
      }
    }
  }
  v14 = v5;
  if ( v5 < v6 )
  {
    do
    {
      v15 = (uint8_t *)(*(uint32_t *)v4 + v14);
      if ( v15 != nullptr )
        *v15 = 0;
      ++v14;
    }
    while ( v14 != v6 );
  }
  *(uint32_t *)(v4 + 4) = v6;
  *((uint32_t *)self + 5) += a2;
  return v5 + *(uint32_t *)v4;
}


