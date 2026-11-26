#include "Core/Utils/DecompTypes.h"
#include "gameswf_Canvas.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::opAssign  (binary VA: 0x10ea060)
// Original: gameswf::Canvas::operator=
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::Canvas::opAssign(gameswf::Self **self, gameswf::Self **a2)
{
  gameswf::Self *v2;
  gameswf::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  gameswf::Self **v8;
  int v9;
  gameswf::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  bool v15;
  gameswf::Self *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  gameswf::RefCounted::Self *v23;
  gameswf::RefCounted::Self *v24;
  gameswf::RefCounted::Self *v25;
  gameswf::RefCounted::Self *v26;
  gameswf::Self *v27;
  gameswf::Self *v28;
  int v29;
  gameswf::Self *v30;
  int v31;
  int v32;
  int v33;
  gameswf::Self **v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  gameswf::Self *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  gameswf::RefCounted::Self *v48;
  gameswf::RefCounted::Self *v49;
  gameswf::RefCounted::Self *v50;
  gameswf::RefCounted::Self *v51;
  gameswf::Self *v53;
  gameswf::Self *v54;
  gameswf::Self *v55;
  gameswf::Self *v56;
  size_t v57;
  int v58;
  int v59;
  int v60;
  int v61;
  gameswf::Self *v62;
  gameswf::Self *v63;
  gameswf::Self *v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  gameswf::Self *v71;
  int v72;
  int v73;
  int v74;

  gameswf::ShapeCharacterDef::opAssign((gameswf::ShapeCharacterDef::Self *)self, (const gameswf::ShapeCharacterDef::Self *)a2);
  v2 = *(self + 39);
  *(self + 32) = a2[32];
  *(self + 33) = a2[33];
  *(self + 34) = a2[34];
  *(self + 35) = a2[35];
  *(self + 36) = a2[36];
  *((uint8_t *)self + 148) = *((uint8_t *)a2 + 148);
  v3 = a2[39];
  v62 = v3;
  if ( (int)(uintptr_t)(v3) < (int)(uintptr_t)(v2) )
  {
    v4 = 84 * (uint32_t)(uintptr_t)(v3);
    do
    {
      v5 = v4;
      v3 = (gameswf::Self *)((char *)v3 + 1);
      v4 += 84;
      (**(void (***)(int))((char *)*(self + 38) + v5))((int)(uintptr_t)(*(self + 38)) + v5);
    }
    while ( v3 != v2 );
  }
  if ( v62 != nullptr )
  {
    v6 = (int)(uintptr_t)(*(self + 40));
    if ( (int)(uintptr_t)(v62) > v6 && *(self + 41) == nullptr )
    {
      v54 = (gameswf::Self *)((char *)v62 + ((int)(uintptr_t)(v62) >> 1));
      *(self + 40) = v54;
      if ( v54 != nullptr )
      {
        v56 = *(self + 38);
        if ( v56 != nullptr )
        {
          *(self + 38) = (gameswf::Self *)gameswf::realloc_internal(v56, 84 * (uint32_t)(uintptr_t)(v54), 84 * v6);
        }
        else
        {
          v57 = 0;
          *(self + 38) = (gameswf::Self *)gameswf::malloc_internal(84 * (uint32_t)(uintptr_t)(v54));
        }
      }
      else
      {
        if ( *(self + 38) != nullptr )
        {
          v57 = 84 * v6;
          gameswf::free_internal(*(self + 38));
        }
        *(self + 38) = nullptr;
      }
    }
  }
  if ( (int)(uintptr_t)(v62) > (int)(uintptr_t)(v2) )
  {
    v7 = 84 * (uint32_t)(uintptr_t)(v2);
    do
    {
      if ( (gameswf::Self *)((char *)*(self + 38) + v7) != nullptr )
        gameswf::FillStyle::FillStyle((gameswf::Self *)((char *)*(self + 38) + v7));
      v2 = (gameswf::Self *)((char *)v2 + 1);
      v7 += 84;
    }
    while ( v2 != v62 );
  }
  v8 = self;
  *(self + 39) = v62;
  if ( (int)(uintptr_t)(v62) > 0 )
  {
    v65 = 0;
    v8 = self;
    do
    {
      v9 = (int)(uintptr_t)(v8[38]) + 84 * v65;
      v10 = (gameswf::Self *)((char *)a2[38] + 84 * v65);
      v11 = *(uint32_t *)(v9 + 40);
      *(uint32_t *)(v9 + 4) = *((uint32_t *)v10 + 1);
      *(uint32_t *)(v9 + 8) = *((uint32_t *)v10 + 2);
      *(uint32_t *)(v9 + 12) = *((uint32_t *)v10 + 3);
      *(uint32_t *)(v9 + 16) = *((uint32_t *)v10 + 4);
      *(uint32_t *)(v9 + 20) = *((uint32_t *)v10 + 5);
      *(uint32_t *)(v9 + 24) = *((uint32_t *)v10 + 6);
      *(uint32_t *)(v9 + 28) = *((uint32_t *)v10 + 7);
      *(uint32_t *)(v9 + 32) = *((uint32_t *)v10 + 8);
      v12 = *((uint32_t *)v10 + 10);
      if ( v12 != 0 )
      {
        v13 = *(uint32_t *)(v9 + 44);
        if ( v12 > v13 && *(uint32_t *)(v9 + 48) == 0 )
        {
          v14 = v12 + (v12 >> 1);
          v15 = v14 == 0;
          v67 = v14;
          *(uint32_t *)(v9 + 44) = v14;
          v16 = *(gameswf::Self **)(v9 + 36);
          if ( v15 )
          {
            if ( v16 != nullptr )
            {
              v58 = v11;
              v57 = 5 * v13;
              gameswf::free_internal(v16);
              v11 = v58;
            }
            *(uint32_t *)(v9 + 36) = 0;
          }
          else
          {
            v61 = v11;
            if ( v16 != nullptr )
            {
              *(uint32_t *)(v9 + 36) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)(v9 + 36), 5 * v67, 5 * v13));
            }
            else
            {
              v57 = 0;
              *(uint32_t *)(v9 + 36) = gameswf::malloc_internal(5 * v67);
            }
            v11 = v61;
          }
        }
      }
      if ( v12 > v11 )
      {
        v63 = v10;
        v17 = v9;
        v68 = v12;
        v18 = 5 * v11;
        v19 = 5 * v12;
        do
        {
          if ( *(uint32_t *)(v17 + 36) + v18 != 0 )
            gameswf::gradientRecord::gradientRecord((gameswf::gradientRecord::Self *)(*(uint32_t *)(v17 + 36) + v18));
          v18 += 5;
        }
        while ( v18 != v19 );
        v9 = v17;
        v12 = v68;
        v10 = v63;
      }
      *(uint32_t *)(v9 + 40) = v12;
      if ( v12 > 0 )
      {
        v20 = 0;
        v69 = 0;
        do
        {
          v21 = *((uint32_t *)v10 + 9);
          v22 = *(uint32_t *)(v9 + 36);
          ++v69;
          *(uint32_t *)(v22 + v20) = *(uint32_t *)(v21 + v20);
          *(uint8_t *)(v22 + v20 + 4) = *(uint8_t *)(v21 + v20 + 4);
          v20 += 5;
        }
        while ( v69 < *(uint32_t *)(v9 + 40) );
      }
      v23 = *((gameswf::RefCounted::Self **)v10 + 13);
      v24 = *(gameswf::RefCounted::Self **)(v9 + 52);
      if ( v23 != v24 )
      {
        if ( v24 != nullptr )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v9 + 52));
        *(uint32_t *)(v9 + 52) = (uint32_t)(uintptr_t)(v23);
        if ( v23 != nullptr )
          gameswf::RefCounted::addRef(v23);
      }
      v25 = *((gameswf::RefCounted::Self **)v10 + 14);
      v26 = *(gameswf::RefCounted::Self **)(v9 + 56);
      if ( v25 != v26 )
      {
        if ( v26 != nullptr )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v9 + 56));
        *(uint32_t *)(v9 + 56) = (uint32_t)(uintptr_t)(v25);
        if ( v25 != nullptr )
          gameswf::RefCounted::addRef(v25);
      }
      ++v65;
      *(uint32_t *)(v9 + 60) = *((uint32_t *)v10 + 15);
      *(uint32_t *)(v9 + 64) = *((uint32_t *)v10 + 16);
      *(uint32_t *)(v9 + 68) = *((uint32_t *)v10 + 17);
      *(uint32_t *)(v9 + 72) = *((uint32_t *)v10 + 18);
      *(uint32_t *)(v9 + 76) = *((uint32_t *)v10 + 19);
      *(uint32_t *)(v9 + 80) = *((uint32_t *)v10 + 20);
      v8 = self;
    }
    while ( v65 < (int)(uintptr_t)(*(self + 39)) );
  }
  v27 = v8[43];
  v28 = a2[43];
  v64 = v28;
  if ( (int)(uintptr_t)(v28) < (int)(uintptr_t)(v27) )
  {
    v29 = 108 * (uint32_t)(uintptr_t)(v28);
    v30 = a2[43];
    do
    {
      v31 = v29;
      v30 = (gameswf::Self *)((char *)v30 + 1);
      v29 += 108;
      (**(void (***)(int, size_t))((char *)*(self + 42) + v31))((int)(uintptr_t)(*(self + 42)) + v31, v57);
    }
    while ( v30 != v27 );
  }
  if ( v64 != nullptr )
  {
    v32 = (int)(uintptr_t)(*(self + 44));
    if ( (int)(uintptr_t)(v64) > v32 && *(self + 45) == nullptr )
    {
      v53 = (gameswf::Self *)((char *)v64 + ((int)(uintptr_t)(v64) >> 1));
      *(self + 44) = v53;
      if ( v53 != nullptr )
      {
        v55 = *(self + 42);
        if ( v55 != nullptr )
          *(self + 42) = (gameswf::Self *)gameswf::realloc_internal(v55, 108 * (uint32_t)(uintptr_t)(v53), 108 * v32);
        else
          *(self + 42) = (gameswf::Self *)gameswf::malloc_internal(108 * (uint32_t)(uintptr_t)(v53));
      }
      else
      {
        if ( *(self + 42) != nullptr )
          gameswf::free_internal(*(self + 42));
        *(self + 42) = nullptr;
      }
    }
  }
  if ( (int)(uintptr_t)(v64) > (int)(uintptr_t)(v27) )
  {
    v33 = 108 * (uint32_t)(uintptr_t)(v27);
    do
    {
      if ( (gameswf::Self *)((char *)*(self + 42) + v33) != nullptr )
        gameswf::LineStyle::Construct((gameswf::Self *)((char *)*(self + 42) + v33));
      v27 = (gameswf::Self *)((char *)v27 + 1);
      v33 += 108;
    }
    while ( v27 != v64 );
  }
  *(self + 43) = v64;
  if ( (int)(uintptr_t)(v64) > 0 )
  {
    v70 = 0;
    v34 = self;
    do
    {
      v35 = (int)(uintptr_t)(v34[42]) + 108 * v70;
      v36 = (int)(uintptr_t)(a2[42]) + 108 * v70;
      v37 = v35 + 12;
      *(uint32_t *)(v35 + 4) = *(uint32_t *)(v36 + 4);
      *(uint32_t *)(v35 + 8) = *(uint32_t *)(v36 + 8);
      *(uint32_t *)(v35 + 16) = *(uint32_t *)(v36 + 16);
      *(uint32_t *)(v35 + 20) = *(uint32_t *)(v36 + 20);
      *(uint32_t *)(v35 + 24) = *(uint32_t *)(v36 + 24);
      *(uint32_t *)(v35 + 28) = *(uint32_t *)(v36 + 28);
      *(uint32_t *)(v35 + 32) = *(uint32_t *)(v36 + 32);
      *(uint32_t *)(v35 + 36) = *(uint32_t *)(v36 + 36);
      *(uint32_t *)(v35 + 40) = *(uint32_t *)(v36 + 40);
      *(uint32_t *)(v35 + 44) = *(uint32_t *)(v36 + 44);
      v38 = *(uint32_t *)(v36 + 52);
      v66 = v38;
      v39 = *(uint32_t *)(v35 + 52);
      if ( v38 != 0 )
      {
        v40 = *(uint32_t *)(v35 + 56);
        if ( v38 > v40 && *(uint32_t *)(v35 + 60) == 0 )
        {
          v41 = v38 + (v38 >> 1);
          v15 = v41 == 0;
          v72 = v41;
          *(uint32_t *)(v35 + 56) = v41;
          v42 = *(gameswf::Self **)(v35 + 48);
          if ( v15 )
          {
            if ( v42 != nullptr )
            {
              v59 = v39;
              gameswf::free_internal(v42);
              v39 = v59;
            }
            *(uint32_t *)(v35 + 48) = 0;
          }
          else
          {
            v60 = v39;
            if ( v42 != nullptr )
              *(uint32_t *)(v35 + 48) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)(v35 + 48), 5 * v72, 5 * v40));
            else
              *(uint32_t *)(v35 + 48) = gameswf::malloc_internal(5 * v72);
            v39 = v60;
          }
        }
      }
      if ( v66 > v39 )
      {
        v73 = v35;
        v43 = v35 + 12;
        v44 = 5 * v39;
        do
        {
          if ( *(uint32_t *)(v43 + 36) + v44 != 0 )
            gameswf::gradientRecord::gradientRecord((gameswf::gradientRecord::Self *)(*(uint32_t *)(v43 + 36) + v44));
          v44 += 5;
        }
        while ( v44 != 5 * v66 );
        v37 = v43;
        v35 = v73;
      }
      *(uint32_t *)(v35 + 52) = v66;
      if ( v66 > 0 )
      {
        v45 = 0;
        v71 = (gameswf::Self *)v35;
        v74 = 0;
        do
        {
          v46 = *(uint32_t *)(v37 + 36);
          ++v74;
          v47 = *(uint32_t *)(v36 + 48);
          *(uint32_t *)(v46 + v45) = *(uint32_t *)(v47 + v45);
          *(uint8_t *)(v46 + v45 + 4) = *(uint8_t *)(v47 + v45 + 4);
          v45 += 5;
        }
        while ( v74 < *(uint32_t *)(v37 + 40) );
        v35 = (int)(uintptr_t)(v71);
      }
      v48 = *(gameswf::RefCounted::Self **)(v36 + 64);
      v49 = *(gameswf::RefCounted::Self **)(v35 + 64);
      if ( v48 != v49 )
      {
        if ( v49 != nullptr )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v35 + 64));
        *(uint32_t *)(v35 + 64) = (uint32_t)(uintptr_t)(v48);
        if ( v48 != nullptr )
          gameswf::RefCounted::addRef(v48);
      }
      v50 = *(gameswf::RefCounted::Self **)(v36 + 68);
      v51 = *(gameswf::RefCounted::Self **)(v35 + 68);
      if ( v50 != v51 )
      {
        if ( v51 != nullptr )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v35 + 68));
        *(uint32_t *)(v35 + 68) = (uint32_t)(uintptr_t)(v50);
        if ( v50 != nullptr )
          gameswf::RefCounted::addRef(v50);
      }
      ++v70;
      *(uint32_t *)(v35 + 72) = *(uint32_t *)(v36 + 72);
      *(uint32_t *)(v35 + 76) = *(uint32_t *)(v36 + 76);
      *(uint32_t *)(v35 + 80) = *(uint32_t *)(v36 + 80);
      *(uint32_t *)(v35 + 84) = *(uint32_t *)(v36 + 84);
      *(uint32_t *)(v35 + 88) = *(uint32_t *)(v36 + 88);
      *(uint32_t *)(v35 + 92) = *(uint32_t *)(v36 + 92);
      *(uint8_t *)(v35 + 96) = *(uint8_t *)(v36 + 96);
      *(uint8_t *)(v35 + 97) = *(uint8_t *)(v36 + 97);
      *(uint8_t *)(v35 + 98) = *(uint8_t *)(v36 + 98);
      *(uint8_t *)(v35 + 99) = *(uint8_t *)(v36 + 99);
      *(uint8_t *)(v35 + 100) = *(uint8_t *)(v36 + 100);
      *(uint8_t *)(v35 + 101) = *(uint8_t *)(v36 + 101);
      *(uint8_t *)(v35 + 102) = *(uint8_t *)(v36 + 102);
      *(uint8_t *)(v35 + 103) = *(uint8_t *)(v36 + 103);
      *(uint16_t *)(v35 + 104) = *(uint16_t *)(v36 + 104);
      v34 = self;
    }
    while ( v70 < (int)(uintptr_t)(*(self + 43)) );
  }
  gameswf::array_gameswf_Path_2b740f::opAssign(
    (gameswf::array<gameswf::Path::Self> *)(self + 46),
    (const gameswf::array<gameswf::Path::Self> *)(a2 + 46));
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::Destroy  (binary VA: 0x1185a50)
// Original: gameswf::Canvas::~Canvas
// ----------------------------------------------------------------------------
void gameswf::Canvas::Destroy(gameswf::Canvas::Self *self)
{
  int v1;
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  int v8;
  int v9;
  gameswf::Self *v10;
  uint32_t *v11;
  int v12;
  int i;
  void (***v14)(uint32_t, int);
  int v15;
  gameswf::Self *v16;
  uint32_t *v17;
  int v18;
  int j;
  void (***v20)(uint32_t);
  int v21;
  gameswf::Self *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  int v31;
  uint32_t *v32;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091908);
  v1 = *((uint32_t *)self + 47);
  v32 = (uint32_t *)((char *)self + 184);
  v31 = v1;
  if ( v1 <= 0 )
  {
    if ( v1 < 0 )
    {
      v25 = *((uint32_t *)self + 47);
      v26 = 40 * v1;
      do
      {
        if ( *v32 + v26 != 0 )
          gameswf::Path::Construct((gameswf::Path::Self *)(*v32 + v26));
        v26 += 40;
        ++v25;
      }
      while ( v25 != 0 );
    }
  }
  else
  {
    v30 = 0;
    v29 = 0;
    do
    {
      v28 = (uint32_t *)(*v32 + v30);
      v2 = v28 + 5;
      v3 = v28[6];
      if ( v3 < 0 )
      {
        v4 = 16 * v3;
        do
        {
          if ( *v2 + v4 != 0 )
            gameswf::Edge::Construct((gameswf::Edge::Self *)(*v2 + v4));
          v4 += 16;
          ++v3;
        }
        while ( v3 != 0 );
      }
      v5 = v28[8];
      v28[6] = 0;
      if ( v5 == 0 )
      {
        v6 = (gameswf::Self *)v28[5];
        v7 = v28[7];
        v28[7] = 0;
        if ( v6 != nullptr )
        {
          v27 = 16 * v7;
          gameswf::free_internal(v6);
        }
        v28[5] = 0;
      }
      ++v29;
      v30 += 40;
    }
    while ( v29 != v31 );
  }
  v8 = *((uint32_t *)self + 49);
  *((uint32_t *)self + 47) = 0;
  if ( v8 == 0 )
  {
    v9 = *((uint32_t *)self + 48);
    *((uint32_t *)self + 48) = 0;
    v10 = *((gameswf::Self **)self + 46);
    if ( v10 != nullptr )
    {
      v27 = 40 * v9;
      gameswf::free_internal(v10);
    }
    *((uint32_t *)self + 46) = 0;
  }
  v11 = (uint32_t *)((char *)self + 168);
  v12 = *((uint32_t *)self + 43);
  if ( v12 <= 0 )
  {
    if ( v12 < 0 )
    {
      v24 = 108 * v12;
      do
      {
        if ( *v11 + v24 != 0 )
          gameswf::LineStyle::Construct((gameswf::LineStyle::Self *)(*v11 + v24));
        v24 += 108;
        ++v12;
      }
      while ( v12 != 0 );
    }
  }
  else
  {
    for ( i = 0; i != v12; ++i )
    {
      v14 = (void (***)(uint32_t, int))(*v11 + 108 * i);
      (**v14)((uint32_t)(uintptr_t)(v14), v27);
    }
  }
  v15 = *((uint32_t *)self + 45);
  *((uint32_t *)self + 43) = 0;
  if ( v15 == 0 )
  {
    v16 = *((gameswf::Self **)self + 42);
    *((uint32_t *)self + 44) = 0;
    if ( v16 != nullptr )
      gameswf::free_internal(v16);
    *((uint32_t *)self + 42) = 0;
  }
  v17 = (uint32_t *)((char *)self + 152);
  v18 = *((uint32_t *)self + 39);
  if ( v18 <= 0 )
  {
    if ( v18 < 0 )
    {
      v23 = 84 * v18;
      do
      {
        if ( *v17 + v23 != 0 )
          gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)(*v17 + v23));
        v23 += 84;
        ++v18;
      }
      while ( v18 != 0 );
    }
  }
  else
  {
    for ( j = 0; j != v18; ++j )
    {
      v20 = (void (***)(uint32_t))(*v17 + 84 * j);
      (**v20)((uint32_t)(uintptr_t)(v20));
    }
  }
  v21 = *((uint32_t *)self + 41);
  *((uint32_t *)self + 39) = 0;
  if ( v21 == 0 )
  {
    v22 = *((gameswf::Self **)self + 38);
    *((uint32_t *)self + 40) = 0;
    if ( v22 != nullptr )
      gameswf::free_internal(v22);
    *((uint32_t *)self + 38) = 0;
  }
  gameswf::ShapeCharacterDef::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::Destroy_ea1185d30  (binary VA: 0x1185d30)
// Original: gameswf::Canvas::~Canvas
// ----------------------------------------------------------------------------
void gameswf::Canvas::Destroy_ea1185d30(gameswf::Canvas::Self *self)
{
  gameswf::Canvas::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::createMeshSet  (binary VA: 0x1185d70)
// Original: gameswf::Canvas::createMeshSet
// ----------------------------------------------------------------------------
gameswf::MeshSet::Self * gameswf::Canvas::createMeshSet(gameswf::Canvas::Self *self, const gameswf::ShapeCharacterDef::Self *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  void (***v7)(uint32_t);
  int v8;
  int v9;
  uint32_t *v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  gameswf::Self *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  gameswf::RefCounted::Self *v21;
  gameswf::RefCounted::Self *v22;
  gameswf::RefCounted::Self *v23;
  gameswf::RefCounted::Self *v24;
  uint32_t *v25;
  int v26;
  int v27;
  int v28;
  void (***v29)(uint32_t, size_t);
  int v30;
  int v31;
  int v32;
  gameswf::Self *v33;
  int *v34;
  int v35;
  int v36;
  int v37;
  bool v38;
  gameswf::Self *v39;
  int *v40;
  int v41;
  int v42;
  int v43;
  int v44;
  gameswf::RefCounted::Self *v45;
  gameswf::RefCounted::Self *v46;
  gameswf::RefCounted::Self *v47;
  gameswf::RefCounted::Self *v48;
  int v49;
  int v50;
  uint32_t *v51;
  int v52;
  int v53;
  int v54;
  gameswf::Self *v55;
  int v56;
  int v57;
  int v58;
  int *v59;
  int v60;
  int v61;
  uint32_t *v62;
  int v63;
  int v64;
  uint32_t *v65;
  int v66;
  int v67;
  int v68;
  int v69;
  uint8_t isEdgeAntiAliasingEnabled; // di
  uint8_t isLineAntiAliasingEnabled; // si
  int v72;
  int v73;
  int v74;
  int v75;
  uint8_t *v76;
  int v77;
  char v78;
  int v79;
  char *v80;
  char *v81;
  int v82;
  bool v83; // cc
  int v84;
  int v85;
  int v86;
  int v88;
  gameswf::Self *v89;
  gameswf::gradientRecord::Self *v90;
  int v91;
  int v92;
  int *v93;
  int v94;
  int v95;
  gameswf::RefCounted::Self *v96;
  gameswf::RefCounted::Self *v97;
  gameswf::Self *v98;
  void *v99;
  int v100;
  int v101;
  int v102;
  int v103;
  gameswf::Self *v104;
  gameswf::Self *v105;
  gameswf::Self *v106;
  gameswf::Self *v107;
  typedef size_t _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int *_g4_t_v116;
  typedef uint32_t *_g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_i;
  typedef int _g4_t_v120;
  typedef int *_g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int *_g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef uint32_t *_g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef uint32_t *_g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef gameswf::Self *_g4_t_v139;
  typedef gameswf::Self *_g4_t_v140;
  typedef gameswf::Self *_g4_t_v141;
  typedef gameswf::Self *_g4_t_v142;
  typedef gameswf::Self *_g4_t_MeshSet;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef gameswf::Self *_g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef char *_g4_t_v151;
  typedef gameswf::RefCounted::Self *_g4_t_v152[2];
  typedef int _g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef gameswf::RefCounted::Self *_g4_t_v162;
  typedef gameswf::RefCounted::Self *_g4_t_v163;
  typedef int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef int _g4_t_v169;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v108)) > _g4_s0 ? (4u + sizeof(_g4_t_v108)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v109)) > _g4_s1 ? (16u + sizeof(_g4_t_v109)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v110)) > _g4_s2 ? (16u + sizeof(_g4_t_v110)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v111)) > _g4_s3 ? (16u + sizeof(_g4_t_v111)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v112)) > _g4_s4 ? (16u + sizeof(_g4_t_v112)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v113)) > _g4_s5 ? (20u + sizeof(_g4_t_v113)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v114)) > _g4_s6 ? (20u + sizeof(_g4_t_v114)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v115)) > _g4_s7 ? (20u + sizeof(_g4_t_v115)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v116)) > _g4_s8 ? (20u + sizeof(_g4_t_v116)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v117)) > _g4_s9 ? (20u + sizeof(_g4_t_v117)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v118)) > _g4_s10 ? (20u + sizeof(_g4_t_v118)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_i)) > _g4_s11 ? (20u + sizeof(_g4_t_i)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v120)) > _g4_s12 ? (24u + sizeof(_g4_t_v120)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v121)) > _g4_s13 ? (24u + sizeof(_g4_t_v121)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v122)) > _g4_s14 ? (24u + sizeof(_g4_t_v122)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v123)) > _g4_s15 ? (24u + sizeof(_g4_t_v123)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v124)) > _g4_s16 ? (24u + sizeof(_g4_t_v124)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v125)) > _g4_s17 ? (24u + sizeof(_g4_t_v125)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v126)) > _g4_s18 ? (24u + sizeof(_g4_t_v126)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v127)) > _g4_s19 ? (28u + sizeof(_g4_t_v127)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v128)) > _g4_s20 ? (28u + sizeof(_g4_t_v128)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v129)) > _g4_s21 ? (28u + sizeof(_g4_t_v129)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v130)) > _g4_s22 ? (28u + sizeof(_g4_t_v130)) : _g4_s22,
    _g4_s24 = (28u + sizeof(_g4_t_v131)) > _g4_s23 ? (28u + sizeof(_g4_t_v131)) : _g4_s23,
    _g4_s25 = (28u + sizeof(_g4_t_v132)) > _g4_s24 ? (28u + sizeof(_g4_t_v132)) : _g4_s24,
    _g4_s26 = (32u + sizeof(_g4_t_v133)) > _g4_s25 ? (32u + sizeof(_g4_t_v133)) : _g4_s25,
    _g4_s27 = (32u + sizeof(_g4_t_v134)) > _g4_s26 ? (32u + sizeof(_g4_t_v134)) : _g4_s26,
    _g4_s28 = (32u + sizeof(_g4_t_v135)) > _g4_s27 ? (32u + sizeof(_g4_t_v135)) : _g4_s27,
    _g4_s29 = (32u + sizeof(_g4_t_v136)) > _g4_s28 ? (32u + sizeof(_g4_t_v136)) : _g4_s28,
    _g4_s30 = (32u + sizeof(_g4_t_v137)) > _g4_s29 ? (32u + sizeof(_g4_t_v137)) : _g4_s29,
    _g4_s31 = (32u + sizeof(_g4_t_v138)) > _g4_s30 ? (32u + sizeof(_g4_t_v138)) : _g4_s30,
    _g4_s32 = (36u + sizeof(_g4_t_v139)) > _g4_s31 ? (36u + sizeof(_g4_t_v139)) : _g4_s31,
    _g4_s33 = (36u + sizeof(_g4_t_v140)) > _g4_s32 ? (36u + sizeof(_g4_t_v140)) : _g4_s32,
    _g4_s34 = (36u + sizeof(_g4_t_v141)) > _g4_s33 ? (36u + sizeof(_g4_t_v141)) : _g4_s33,
    _g4_s35 = (36u + sizeof(_g4_t_v142)) > _g4_s34 ? (36u + sizeof(_g4_t_v142)) : _g4_s34,
    _g4_s36 = (36u + sizeof(_g4_t_MeshSet)) > _g4_s35 ? (36u + sizeof(_g4_t_MeshSet)) : _g4_s35,
    _g4_s37 = (40u + sizeof(_g4_t_v144)) > _g4_s36 ? (40u + sizeof(_g4_t_v144)) : _g4_s36,
    _g4_s38 = (40u + sizeof(_g4_t_v145)) > _g4_s37 ? (40u + sizeof(_g4_t_v145)) : _g4_s37,
    _g4_s39 = (40u + sizeof(_g4_t_v146)) > _g4_s38 ? (40u + sizeof(_g4_t_v146)) : _g4_s38,
    _g4_s40 = (40u + sizeof(_g4_t_v147)) > _g4_s39 ? (40u + sizeof(_g4_t_v147)) : _g4_s39,
    _g4_s41 = (40u + sizeof(_g4_t_v148)) > _g4_s40 ? (40u + sizeof(_g4_t_v148)) : _g4_s40,
    _g4_s42 = (40u + sizeof(_g4_t_v149)) > _g4_s41 ? (40u + sizeof(_g4_t_v149)) : _g4_s41,
    _g4_s43 = (40u + sizeof(_g4_t_v150)) > _g4_s42 ? (40u + sizeof(_g4_t_v150)) : _g4_s42,
    _g4_s44 = (44u + sizeof(_g4_t_v151)) > _g4_s43 ? (44u + sizeof(_g4_t_v151)) : _g4_s43,
    _g4_s45 = (60u + sizeof(_g4_t_v152)) > _g4_s44 ? (60u + sizeof(_g4_t_v152)) : _g4_s44,
    _g4_s46 = (68u + sizeof(_g4_t_v153)) > _g4_s45 ? (68u + sizeof(_g4_t_v153)) : _g4_s45,
    _g4_s47 = (72u + sizeof(_g4_t_v154)) > _g4_s46 ? (72u + sizeof(_g4_t_v154)) : _g4_s46,
    _g4_s48 = (76u + sizeof(_g4_t_v155)) > _g4_s47 ? (76u + sizeof(_g4_t_v155)) : _g4_s47,
    _g4_s49 = (80u + sizeof(_g4_t_v156)) > _g4_s48 ? (80u + sizeof(_g4_t_v156)) : _g4_s48,
    _g4_s50 = (84u + sizeof(_g4_t_v157)) > _g4_s49 ? (84u + sizeof(_g4_t_v157)) : _g4_s49,
    _g4_s51 = (88u + sizeof(_g4_t_v158)) > _g4_s50 ? (88u + sizeof(_g4_t_v158)) : _g4_s50,
    _g4_s52 = (92u + sizeof(_g4_t_v159)) > _g4_s51 ? (92u + sizeof(_g4_t_v159)) : _g4_s51,
    _g4_s53 = (96u + sizeof(_g4_t_v160)) > _g4_s52 ? (96u + sizeof(_g4_t_v160)) : _g4_s52,
    _g4_s54 = (100u + sizeof(_g4_t_v161)) > _g4_s53 ? (100u + sizeof(_g4_t_v161)) : _g4_s53,
    _g4_s55 = (112u + sizeof(_g4_t_v162)) > _g4_s54 ? (112u + sizeof(_g4_t_v162)) : _g4_s54,
    _g4_s56 = (116u + sizeof(_g4_t_v163)) > _g4_s55 ? (116u + sizeof(_g4_t_v163)) : _g4_s55,
    _g4_s57 = (120u + sizeof(_g4_t_v164)) > _g4_s56 ? (120u + sizeof(_g4_t_v164)) : _g4_s56,
    _g4_s58 = (124u + sizeof(_g4_t_v165)) > _g4_s57 ? (124u + sizeof(_g4_t_v165)) : _g4_s57,
    _g4_s59 = (128u + sizeof(_g4_t_v166)) > _g4_s58 ? (128u + sizeof(_g4_t_v166)) : _g4_s58,
    _g4_s60 = (132u + sizeof(_g4_t_v167)) > _g4_s59 ? (132u + sizeof(_g4_t_v167)) : _g4_s59,
    _g4_s61 = (136u + sizeof(_g4_t_v168)) > _g4_s60 ? (136u + sizeof(_g4_t_v168)) : _g4_s60,
    _g4_s62 = (140u + sizeof(_g4_t_v169)) > _g4_s61 ? (140u + sizeof(_g4_t_v169)) : _g4_s61
  };
  alignas(16) uint8_t _g4_sf[_g4_s62];
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 4u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 16u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 16u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 16u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 16u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 20u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 20u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 20u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 20u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 20u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 20u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 20u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 24u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 24u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 24u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 24u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 24u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 24u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 24u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 28u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 28u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 28u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 28u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 28u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 28u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 32u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 32u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 32u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 32u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 32u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 32u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 36u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 36u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 36u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 36u);
  _g4_t_MeshSet &MeshSet = *reinterpret_cast<_g4_t_MeshSet *>(_g4_sf + 36u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 40u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 40u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 40u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 40u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 40u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 40u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 40u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 44u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 60u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 68u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 72u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 76u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 80u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 84u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 88u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 92u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 96u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 100u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 112u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 116u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 120u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 124u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 128u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 132u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 136u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 140u);

  v2 = (uint32_t *)((char *)self + 28);
  v3 = *((uint32_t *)self + 39);
  v4 = *((uint32_t *)self + 8);
  v113 = v3;
  if ( v3 < v4 )
  {
    v120 = *((uint32_t *)self + 8);
    v5 = *((uint32_t *)self + 39);
    v6 = 84 * v3;
    do
    {
      ++v5;
      v7 = (void (***)(uint32_t))(*v2 + v6);
      v6 += 84;
      (**v7)((uint32_t)(uintptr_t)(v7));
    }
    while ( v5 != v120 );
    v4 = v120;
  }
  if ( v113 != 0 )
  {
    v8 = *((uint32_t *)self + 9);
    if ( v113 > v8 && *((uint32_t *)self + 10) == 0 )
    {
      v101 = v113 + (v113 >> 1);
      *((uint32_t *)self + 9) = v101;
      if ( v101 != 0 )
      {
        v107 = *((gameswf::Self **)self + 7);
        if ( v107 != nullptr )
        {
          *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v107, 84 * v101, 84 * v8));
        }
        else
        {
          v108 = 0;
          *((uint32_t *)self + 7) = gameswf::malloc_internal(84 * v101);
        }
      }
      else
      {
        if ( *((uint32_t *)self + 7) != 0 )
        {
          v108 = 84 * v8;
          gameswf::free_internal(*((gameswf::Self **)self + 7));
        }
        *((uint32_t *)self + 7) = 0;
      }
    }
  }
  if ( v113 > v4 )
  {
    v9 = 84 * v4;
    do
    {
      if ( *v2 + v9 != 0 )
        gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)(*v2 + v9));
      ++v4;
      v9 += 84;
    }
    while ( v4 != v113 );
  }
  *((uint32_t *)self + 8) = v113;
  if ( v113 > 0 )
  {
    v133 = 0;
    v139 = nullptr;
    do
    {
      v10 = (uint32_t *)(*((uint32_t *)self + 38) + v133);
      v114 = *((uint32_t *)self + 7) + v133;
      v11 = (int *)(v114 + 36);
      *(uint32_t *)(v114 + 4) = v10[1];
      *(uint32_t *)(v114 + 8) = v10[2];
      *(uint32_t *)(v114 + 12) = v10[3];
      *(uint32_t *)(v114 + 16) = v10[4];
      *(uint32_t *)(v114 + 20) = v10[5];
      *(uint32_t *)(v114 + 24) = v10[6];
      *(uint32_t *)(v114 + 28) = v10[7];
      *(uint32_t *)(v114 + 32) = v10[8];
      v12 = v10[10];
      v121 = (int *)(v10 + 9);
      v127 = v12;
      v13 = *(uint32_t *)(v114 + 40);
      if ( v12 != 0 )
      {
        v14 = *(uint32_t *)(v114 + 44);
        if ( v12 > v14 && *(uint32_t *)(v114 + 48) == 0 )
        {
          v15 = v12 + (v12 >> 1);
          *(uint32_t *)(v114 + 44) = v15;
          if ( v15 != 0 )
          {
            v89 = *(gameswf::Self **)(v114 + 36);
            v112 = v13;
            if ( v89 != nullptr )
            {
              *(uint32_t *)(v114 + 36) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v89, 5 * v15, 5 * v14));
            }
            else
            {
              v108 = 0;
              *(uint32_t *)(v114 + 36) = gameswf::malloc_internal(5 * v15);
            }
            v13 = v112;
          }
          else
          {
            v16 = *(gameswf::Self **)(v114 + 36);
            if ( v16 != nullptr )
            {
              v109 = v13;
              v108 = 5 * v14;
              gameswf::free_internal(v16);
              v13 = v109;
            }
            *(uint32_t *)(v114 + 36) = 0;
          }
        }
      }
      v17 = 5 * v13;
      if ( v127 > v13 )
      {
        do
        {
          if ( *v11 + v17 != 0 )
            gameswf::gradientRecord::gradientRecord((gameswf::gradientRecord::Self *)(*v11 + v17));
          v17 += 5;
        }
        while ( v17 != 5 * v127 );
      }
      *(uint32_t *)(v114 + 40) = v127;
      if ( v127 > 0 )
      {
        v18 = 0;
        v128 = v10;
        v144 = 0;
        do
        {
          v19 = *v11;
          ++v144;
          v20 = *v121;
          *(uint32_t *)(v19 + v18) = *(uint32_t *)(*v121 + v18);
          *(uint8_t *)(v19 + v18 + 4) = *(uint8_t *)(v20 + v18 + 4);
          v18 += 5;
        }
        while ( v144 < *(uint32_t *)(v114 + 40) );
        v10 = v128;
      }
      v21 = (gameswf::RefCounted::Self *)v10[13];
      v22 = *(gameswf::RefCounted::Self **)(v114 + 52);
      if ( v21 != v22 )
      {
        if ( v22 != nullptr )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v114 + 52));
        *(uint32_t *)(v114 + 52) = (uint32_t)(uintptr_t)(v21);
        if ( v21 != nullptr )
          gameswf::RefCounted::addRef(v21);
      }
      v23 = (gameswf::RefCounted::Self *)v10[14];
      v24 = *(gameswf::RefCounted::Self **)(v114 + 56);
      if ( v23 != v24 )
      {
        if ( v24 != nullptr )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v114 + 56));
        *(uint32_t *)(v114 + 56) = (uint32_t)(uintptr_t)(v23);
        if ( v23 != nullptr )
          gameswf::RefCounted::addRef(v23);
      }
      v139 = (gameswf::Self *)((char *)v139 + 1);
      v133 += 84;
      *(uint32_t *)(v114 + 60) = v10[15];
      *(uint32_t *)(v114 + 64) = v10[16];
      *(uint32_t *)(v114 + 68) = v10[17];
      *(uint32_t *)(v114 + 72) = v10[18];
      *(uint32_t *)(v114 + 76) = v10[19];
      *(uint32_t *)(v114 + 80) = v10[20];
    }
    while ( (int)(uintptr_t)(v139) < *((uint32_t *)self + 8) );
  }
  v25 = (uint32_t *)((char *)self + 44);
  v26 = *((uint32_t *)self + 43);
  v27 = *((uint32_t *)self + 12);
  v115 = v26;
  if ( v26 < v27 )
  {
    v122 = *((uint32_t *)self + 12);
    v28 = 108 * v26;
    do
    {
      ++v26;
      v29 = (void (***)(uint32_t, size_t))(*v25 + v28);
      v28 += 108;
      (**v29)((uint32_t)(uintptr_t)(v29), v108);
    }
    while ( v26 != v122 );
    v27 = v122;
  }
  if ( v115 != 0 )
  {
    v30 = *((uint32_t *)self + 13);
    if ( v115 > v30 && *((uint32_t *)self + 14) == 0 )
    {
      v103 = v115 + (v115 >> 1);
      *((uint32_t *)self + 13) = v103;
      if ( v103 != 0 )
      {
        v105 = *((gameswf::Self **)self + 11);
        if ( v105 != nullptr )
          *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v105, 108 * v103, 108 * v30));
        else
          *((uint32_t *)self + 11) = gameswf::malloc_internal(108 * v103);
      }
      else
      {
        if ( *((uint32_t *)self + 11) != 0 )
          gameswf::free_internal(*((gameswf::Self **)self + 11));
        *((uint32_t *)self + 11) = 0;
      }
    }
  }
  if ( v115 > v27 )
  {
    v31 = 108 * v27;
    do
    {
      if ( *v25 + v31 != 0 )
        gameswf::LineStyle::Construct((gameswf::LineStyle::Self *)(*v25 + v31));
      ++v27;
      v31 += 108;
    }
    while ( v27 != v115 );
  }
  *((uint32_t *)self + 12) = v115;
  if ( v115 > 0 )
  {
    v129 = 0;
    v134 = 0;
    do
    {
      v32 = *((uint32_t *)self + 42) + v129;
      v33 = (gameswf::Self *)(*((uint32_t *)self + 11) + v129);
      *((uint32_t *)v33 + 1) = *(uint32_t *)(v32 + 4);
      *((uint32_t *)v33 + 2) = *(uint32_t *)(v32 + 8);
      *((uint32_t *)v33 + 4) = *(uint32_t *)(v32 + 16);
      *((uint32_t *)v33 + 5) = *(uint32_t *)(v32 + 20);
      *((uint32_t *)v33 + 6) = *(uint32_t *)(v32 + 24);
      *((uint32_t *)v33 + 7) = *(uint32_t *)(v32 + 28);
      *((uint32_t *)v33 + 8) = *(uint32_t *)(v32 + 32);
      *((uint32_t *)v33 + 9) = *(uint32_t *)(v32 + 36);
      *((uint32_t *)v33 + 10) = *(uint32_t *)(v32 + 40);
      *((uint32_t *)v33 + 11) = *(uint32_t *)(v32 + 44);
      v123 = *(uint32_t *)(v32 + 52);
      v116 = (int *)(v32 + 48);
      v34 = (int *)((char *)v33 + 48);
      v35 = *((uint32_t *)v33 + 13);
      if ( v123 != 0 )
      {
        v36 = *((uint32_t *)v33 + 14);
        if ( v123 > v36 && *((uint32_t *)v33 + 15) == 0 )
        {
          v37 = v123 + (v123 >> 1);
          v38 = v37 == 0;
          v145 = v37;
          *((uint32_t *)v33 + 14) = v37;
          v39 = *((gameswf::Self **)v33 + 12);
          if ( v38 )
          {
            if ( v39 != nullptr )
            {
              v110 = v35;
              gameswf::free_internal(v39);
              v35 = v110;
            }
            *((uint32_t *)v33 + 12) = 0;
          }
          else
          {
            v111 = v35;
            if ( v39 != nullptr )
              *((uint32_t *)v33 + 12) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*((gameswf::Self **)v33 + 12), 5 * v145, 5 * v36));
            else
              *((uint32_t *)v33 + 12) = gameswf::malloc_internal(5 * v145);
            v35 = v111;
          }
        }
      }
      if ( v123 > v35 )
      {
        v146 = v33;
        v40 = (int *)((char *)v33 + 48);
        v41 = 5 * v35;
        do
        {
          if ( *v40 + v41 != 0 )
            gameswf::gradientRecord::gradientRecord((gameswf::gradientRecord::Self *)(*v40 + v41));
          v41 += 5;
        }
        while ( v41 != 5 * v123 );
        v34 = v40;
        v33 = v146;
      }
      *((uint32_t *)v33 + 13) = v123;
      if ( v123 > 0 )
      {
        v42 = 0;
        v140 = v33;
        v147 = 0;
        do
        {
          v43 = *v34;
          ++v147;
          v44 = *v116;
          *(uint32_t *)(v43 + v42) = *(uint32_t *)(*v116 + v42);
          *(uint8_t *)(v43 + v42 + 4) = *(uint8_t *)(v44 + v42 + 4);
          v42 += 5;
        }
        while ( v147 < v34[1] );
        v33 = v140;
      }
      v45 = *(gameswf::RefCounted::Self **)(v32 + 64);
      v46 = *((gameswf::RefCounted::Self **)v33 + 16);
      if ( v45 != v46 )
      {
        if ( v46 != nullptr )
          gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v33 + 16));
        *((uint32_t *)v33 + 16) = (uint32_t)(uintptr_t)(v45);
        if ( v45 != nullptr )
          gameswf::RefCounted::addRef(v45);
      }
      v47 = *(gameswf::RefCounted::Self **)(v32 + 68);
      v48 = *((gameswf::RefCounted::Self **)v33 + 17);
      if ( v47 != v48 )
      {
        if ( v48 != nullptr )
          gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v33 + 17));
        *((uint32_t *)v33 + 17) = (uint32_t)(uintptr_t)(v47);
        if ( v47 != nullptr )
          gameswf::RefCounted::addRef(v47);
      }
      *((uint32_t *)v33 + 18) = *(uint32_t *)(v32 + 72);
      *((uint32_t *)v33 + 19) = *(uint32_t *)(v32 + 76);
      *((uint32_t *)v33 + 20) = *(uint32_t *)(v32 + 80);
      *((uint32_t *)v33 + 21) = *(uint32_t *)(v32 + 84);
      *((uint32_t *)v33 + 22) = *(uint32_t *)(v32 + 88);
      *((uint32_t *)v33 + 23) = *(uint32_t *)(v32 + 92);
      ++v134;
      v129 += 108;
      *((uint8_t *)v33 + 96) = *(uint8_t *)(v32 + 96);
      *((uint8_t *)v33 + 97) = *(uint8_t *)(v32 + 97);
      *((uint8_t *)v33 + 98) = *(uint8_t *)(v32 + 98);
      *((uint8_t *)v33 + 99) = *(uint8_t *)(v32 + 99);
      *((uint8_t *)v33 + 100) = *(uint8_t *)(v32 + 100);
      *((uint8_t *)v33 + 101) = *(uint8_t *)(v32 + 101);
      *((uint8_t *)v33 + 102) = *(uint8_t *)(v32 + 102);
      *((uint8_t *)v33 + 103) = *(uint8_t *)(v32 + 103);
      *((uint16_t *)v33 + 52) = *(uint16_t *)(v32 + 104);
    }
    while ( v134 < *((uint32_t *)self + 12) );
  }
  v141 = (gameswf::Self *)((gameswf::Canvas::Self *)((char *)self + 60));
  v49 = *((uint32_t *)self + 47);
  v50 = *((uint32_t *)self + 16);
  v135 = v49;
  if ( v49 < v50 )
  {
    v124 = *((uint32_t *)self + 47);
    v148 = *((uint32_t *)self + 16);
    v130 = 40 * v49;
    do
    {
      v117 = (uint32_t *)(*(uint32_t *)v141 + v130);
      v51 = v117 + 5;
      v52 = v117[6];
      if ( v52 < 0 )
      {
        v53 = 16 * v52;
        do
        {
          if ( *v51 + v53 != 0 )
            gameswf::Edge::Construct((gameswf::Edge::Self *)(*v51 + v53));
          v53 += 16;
          ++v52;
        }
        while ( v52 != 0 );
      }
      v54 = v117[8];
      v117[6] = 0;
      if ( v54 == 0 )
      {
        v55 = (gameswf::Self *)v117[5];
        v117[7] = 0;
        if ( v55 != nullptr )
          gameswf::free_internal(v55);
        v117[5] = 0;
      }
      ++v124;
      v130 += 40;
    }
    while ( v124 != v148 );
    v50 = v148;
  }
  if ( v135 != 0 )
  {
    v56 = *((uint32_t *)self + 17);
    if ( v135 > v56 && *((uint32_t *)self + 18) == 0 )
    {
      v102 = v135 + (v135 >> 1);
      *((uint32_t *)self + 17) = v102;
      if ( v102 != 0 )
      {
        v106 = *((gameswf::Self **)self + 15);
        if ( v106 != nullptr )
          *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v106, 40 * v102, 40 * v56));
        else
          *((uint32_t *)self + 15) = gameswf::malloc_internal(40 * v102);
      }
      else
      {
        if ( *((uint32_t *)self + 15) != 0 )
          gameswf::free_internal(*((gameswf::Self **)self + 15));
        *((uint32_t *)self + 15) = 0;
      }
    }
  }
  v57 = 40 * v50;
  if ( v135 > v50 )
  {
    do
    {
      if ( *(uint32_t *)v141 + v57 != 0 )
        gameswf::Path::Construct((gameswf::Path::Self *)(*(uint32_t *)v141 + v57));
      ++v50;
      v57 += 40;
    }
    while ( v50 != v135 );
  }
  *((uint32_t *)self + 16) = v135;
  if ( v135 > 0 )
  {
    v136 = 0;
    v142 = nullptr;
    do
    {
      v58 = *((uint32_t *)self + 46) + v136;
      v131 = (uint32_t *)(*((uint32_t *)self + 15) + v136);
      v59 = (int *)(v131 + 5);
      *v131 = *(uint32_t *)v58;
      v131[1] = *(uint32_t *)(v58 + 4);
      v131[2] = *(uint32_t *)(v58 + 8);
      v131[3] = *(uint32_t *)(v58 + 12);
      v131[4] = *(uint32_t *)(v58 + 16);
      v118 = *(uint32_t *)(v58 + 24);
      v125 = (int *)(v58 + 20);
      v60 = v131[6];
      if ( v118 != 0 )
      {
        v61 = v131[7];
        if ( v118 > v61 && v131[8] == 0 )
        {
          v88 = v118 + (v118 >> 1);
          v131[7] = v88;
          if ( v88 != 0 )
          {
            v98 = (gameswf::Self *)v131[5];
            if ( v98 != nullptr )
              v99 = gameswf::realloc_internal(v98, 16 * v88, 16 * v61);
            else
              v99 = (void *)gameswf::malloc_internal(16 * v88);
            v131[5] = (uint32_t)(uintptr_t)(v99);
          }
          else
          {
            if ( v131[5] != 0 )
              gameswf::free_internal((gameswf::Self *)v131[5]);
            v131[5] = 0;
          }
        }
      }
      if ( v118 > v60 )
      {
        v149 = v58;
        v62 = v131 + 5;
        v63 = v60;
        v64 = 16 * v60;
        do
        {
          if ( *v62 + v64 != 0 )
            gameswf::Edge::Construct((gameswf::Edge::Self *)(*v62 + v64));
          ++v63;
          v64 += 16;
        }
        while ( v63 != v118 );
        v59 = (int *)(v131 + 5);
        v58 = v149;
      }
      v65 = v131;
      v131[6] = v118;
      if ( v118 > 0 )
      {
        v66 = 0;
        do
        {
          v67 = 16 * v66;
          v68 = *v59;
          ++v66;
          v69 = *v125;
          *(uint32_t *)(v68 + v67) = *(uint32_t *)(*v125 + v67);
          *(uint32_t *)(v68 + v67 + 4) = *(uint32_t *)(v69 + v67 + 4);
          *(uint32_t *)(v68 + v67 + 8) = *(uint32_t *)(v69 + v67 + 8);
          *(uint32_t *)(v68 + v67 + 12) = *(uint32_t *)(v69 + v67 + 12);
        }
        while ( v66 < v59[1] );
        v65 = v131;
      }
      v142 = (gameswf::Self *)((char *)v142 + 1);
      v136 += 40;
      *((uint8_t *)v65 + 36) = *(uint8_t *)(v58 + 36);
    }
    while ( (int)(uintptr_t)(v142) < *((uint32_t *)self + 16) );
  }
  if ( *((uint8_t *)self + 148) == 0 )
    return gameswf::ShapeCharacterDef::createMeshSet(self, a2);
  isEdgeAntiAliasingEnabled = gameswf::isEdgeAntiAliasingEnabled();
  isLineAntiAliasingEnabled = gameswf::isLineAntiAliasingEnabled();
  gameswf::setEdgeAntiAliasingEnabled((gameswf::Self *)((char *)&dword_0 + 1));
  gameswf::setLineAntiAliasingEnabled((gameswf::Self *)((char *)&dword_0 + 1));
  MeshSet = (gameswf::Self *)(gameswf::ShapeCharacterDef::createMeshSet(self, a2));
  gameswf::setEdgeAntiAliasingEnabled((gameswf::Self *)isEdgeAntiAliasingEnabled);
  gameswf::setLineAntiAliasingEnabled((gameswf::Self *)isLineAntiAliasingEnabled);
  v72 = *((uint32_t *)self + 16);
  if ( v72 > 0 )
  {
    v126 = 0;
    for ( i = 0; i < v72; ++i )
    {
      v74 = *((uint32_t *)self + 15) + v126;
      v75 = *(uint32_t *)(v74 + 8);
      if ( v75 != 0 )
      {
        if ( *(uint8_t *)(v74 + 36) != 0 )
        {
          v76 = (uint8_t *)(*((uint32_t *)self + 11) + 108 * (v75 - 1));
          gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)v152);
          LOBYTE(v153) = v76[8];
          v77 = *((uint32_t *)self + 8);
          v78 = v76[10];
          BYTE1(v153) = v76[9];
          LOBYTE(v76) = v76[11];
          BYTE2(v153) = v78;
          HIBYTE(v153) = (uint8_t)(uintptr_t)(v76);
          v79 = *((uint32_t *)self + 9);
          v132 = v77 + 1;
          if ( v77 + 1 > v79 )
          {
            if ( *((uint32_t *)self + 10) != 0 )
            {
              v80 = *((char **)self + 7);
            }
            else
            {
              v100 = v132 + (v132 >> 1);
              *((uint32_t *)self + 9) = v100;
              if ( v100 != 0 )
              {
                v104 = *((gameswf::Self **)self + 7);
                if ( v104 != nullptr )
                  v80 = (char *)gameswf::realloc_internal(v104, 84 * v100, 84 * v79);
                else
                  v80 = (char *)gameswf::malloc_internal(84 * v100);
                *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v80);
                v77 = *((uint32_t *)self + 8);
              }
              else
              {
                if ( *((uint32_t *)self + 7) != 0 )
                {
                  gameswf::free_internal(*((gameswf::Self **)self + 7));
                  v77 = *((uint32_t *)self + 8);
                }
                *((uint32_t *)self + 7) = 0;
                v80 = nullptr;
              }
            }
          }
          else
          {
            v80 = *((char **)self + 7);
          }
          v81 = &v80[84 * v77];
          if ( v81 != nullptr )
          {
            *(uint32_t *)v81 = ((uint32_t)(uintptr_t)&off_208F678);
            *((gameswf::RefCounted::Self **)v81 + 1) = v152[1];
            *((uint32_t *)v81 + 2) = v153;
            *((uint32_t *)v81 + 3) = v154;
            *((uint32_t *)v81 + 4) = v155;
            *((uint32_t *)v81 + 5) = v156;
            *((uint32_t *)v81 + 6) = v157;
            *((uint32_t *)v81 + 7) = v158;
            *((uint32_t *)v81 + 8) = v159;
            *((uint32_t *)v81 + 9) = 0;
            *((uint32_t *)v81 + 10) = 0;
            v82 = v161;
            v83 = v161 <= 0;
            *((uint32_t *)v81 + 11) = 0;
            *((uint32_t *)v81 + 12) = 0;
            v137 = v82;
            if ( v83 )
            {
              *((uint32_t *)v81 + 10) = v82;
            }
            else
            {
              v84 = v82 + (v82 >> 1);
              *((uint32_t *)v81 + 11) = v84;
              v85 = gameswf::malloc_internal(5 * v84);
              *((uint32_t *)v81 + 9) = v85;
              v86 = 0;
              while ( 1 )
              {
                v90 = (gameswf::gradientRecord::Self *)(v86 + v85);
                if ( v90 != nullptr )
                  gameswf::gradientRecord::gradientRecord(v90);
                v86 += 5;
                if ( v86 == 5 * v137 )
                  break;
                v85 = *((uint32_t *)v81 + 9);
              }
              v91 = v137;
              v92 = 0;
              v138 = v74;
              v151 = v81;
              v93 = (int *)(v81 + 36);
              *((uint32_t *)v81 + 10) = v91;
              v150 = 0;
              do
              {
                v94 = v160;
                v95 = *v93;
                ++v150;
                *(uint32_t *)(v95 + v92) = *(uint32_t *)(v160 + v92);
                *(uint8_t *)(v95 + v92 + 4) = *(uint8_t *)(v94 + v92 + 4);
                v92 += 5;
              }
              while ( v150 < v93[1] );
              v74 = v138;
              v81 = v151;
            }
            v96 = v162;
            v38 = v162 == nullptr;
            *((uint32_t *)v81 + 13) = (uint32_t)(uintptr_t)(v162);
            if ( !v38 )
              gameswf::RefCounted::addRef(v96);
            v97 = v163;
            v38 = v163 == nullptr;
            *((uint32_t *)v81 + 14) = (uint32_t)(uintptr_t)(v163);
            if ( !v38 )
              gameswf::RefCounted::addRef(v97);
            *((uint32_t *)v81 + 15) = v164;
            *((uint32_t *)v81 + 16) = v165;
            *((uint32_t *)v81 + 17) = v166;
            *((uint32_t *)v81 + 18) = v167;
            *((uint32_t *)v81 + 19) = v168;
            *((uint32_t *)v81 + 20) = v169;
          }
          *((uint32_t *)self + 8) = v132;
          gameswf::FillStyle::Destroy(v152);
        }
        v73 = *((uint32_t *)self + 8);
        *(uint32_t *)(v74 + 8) = 0;
        *(uint32_t *)v74 = v73;
        v72 = *((uint32_t *)self + 16);
      }
      v126 += 40;
    }
  }
  return (gameswf::MeshSet::Self *)(MeshSet);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::closePath  (binary VA: 0x1186ca0)
// Original: gameswf::Canvas::closePath
// ----------------------------------------------------------------------------
int gameswf::Canvas::closePath(gameswf::Canvas::Self *self)
{
  int v1;
  int result;
  float v3; // xmm0_4
  float v4; // xmm1_4
  int v5;
  int v6;
  int v7;
  void *v8;
  int v9;
  typedef g4_int128_t _g4_t_v10;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);

  v1 = *((uint32_t *)self + 46) + 40 * *((uint32_t *)self + 36);
  result = *(uint32_t *)(v1 + 24);
  if ( result > 0 )
  {
    result = *(uint32_t *)(v1 + 20) + 16 * (result - 1);
    v3 = *(float *)(v1 + 12);
    v4 = *(float *)(v1 + 16);
    if ( v3 != *(float *)(result + 8) || v4 != *(float *)(result + 12) )
    {
      gameswf::Edge::Construct((gameswf::Edge::Self *)&v10, LODWORD(v3), LODWORD(v4), LODWORD(v3), LODWORD(v4));
      v5 = *(uint32_t *)(v1 + 24);
      v6 = *(uint32_t *)(v1 + 28);
      v7 = v5 + 1;
      if ( v5 + 1 <= v6 || *(uint32_t *)(v1 + 32) != 0 )
      {
        v8 = *(void **)(v1 + 20);
      }
      else
      {
        v9 = v7 + (v7 >> 1);
        *(uint32_t *)(v1 + 28) = v9;
        if ( v9 != 0 )
        {
          if ( *(uint32_t *)(v1 + 20) != 0 )
            v8 = gameswf::realloc_internal(*(gameswf::Self **)(v1 + 20), 16 * v9, 16 * v6);
          else
            v8 = (void *)gameswf::malloc_internal(16 * v9);
          *(uint32_t *)(v1 + 20) = (uint32_t)(uintptr_t)(v8);
          v5 = *(uint32_t *)(v1 + 24);
        }
        else
        {
          if ( *(uint32_t *)(v1 + 20) != 0 )
          {
            gameswf::free_internal(*(gameswf::Self **)(v1 + 20));
            v5 = *(uint32_t *)(v1 + 24);
          }
          *(uint32_t *)(v1 + 20) = 0;
          v8 = nullptr;
        }
      }
      result = (int)(uintptr_t)(v8) + 16 * v5;
      if ( result != 0 )
        *(g4_int128_t *)result = v10;
      *(uint32_t *)(v1 + 24) = v7;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::endFill  (binary VA: 0x1186df0)
// Original: gameswf::Canvas::endFill
// ----------------------------------------------------------------------------
int gameswf::Canvas::endFill(gameswf::Canvas::Self *self)
{
  if ( *((int *)self + 36) >= 0 )
    gameswf::Canvas::closePath(self);
  *((uint32_t *)self + 36) = -1;
  *((uint32_t *)self + 34) = 0;
  return gameswf::ShapeCharacterDef::computeBound(
           (gameswf::Canvas::Self *)((char *)self + 184),
           (gameswf::Canvas::Self *)((char *)self + 76));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::clear  (binary VA: 0x1186e60)
// Original: gameswf::Canvas::clear
// ----------------------------------------------------------------------------
int gameswf::Canvas::clear(gameswf::Canvas::Self *self)
{
  uint32_t *v1;
  int v2;
  int i;
  void (***v4)(uint32_t);
  uint32_t *v5;
  int v6;
  int j;
  void (***v8)(uint32_t);
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  gameswf::Self *v14;
  int v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  gameswf::ShapeCharacterDef::Self *v24;

  v1 = (uint32_t *)((char *)self + 152);
  v2 = *((uint32_t *)self + 39);
  if ( v2 <= 0 )
  {
    if ( v2 < 0 )
    {
      v16 = 84 * v2;
      do
      {
        if ( *v1 + v16 != 0 )
          gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)(*v1 + v16));
        v16 += 84;
        ++v2;
      }
      while ( v2 != 0 );
    }
  }
  else
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = (void (***)(uint32_t))(*v1 + 84 * i);
      (**v4)((uint32_t)(uintptr_t)(v4));
    }
  }
  v5 = (uint32_t *)((char *)self + 168);
  v6 = *((uint32_t *)self + 43);
  *((uint32_t *)self + 39) = 0;
  if ( v6 <= 0 )
  {
    if ( v6 < 0 )
    {
      v17 = 108 * v6;
      do
      {
        if ( *v5 + v17 != 0 )
          gameswf::LineStyle::Construct((gameswf::LineStyle::Self *)(*v5 + v17));
        v17 += 108;
        ++v6;
      }
      while ( v6 != 0 );
    }
  }
  else
  {
    for ( j = 0; j != v6; ++j )
    {
      v8 = (void (***)(uint32_t))(*v5 + 108 * j);
      (**v8)((uint32_t)(uintptr_t)(v8));
    }
  }
  *((uint32_t *)self + 43) = 0;
  v9 = *((uint32_t *)self + 47);
  v24 = (gameswf::ShapeCharacterDef::Self *)((gameswf::Canvas::Self *)((char *)self + 184));
  v23 = v9;
  if ( v9 <= 0 )
  {
    if ( v9 < 0 )
    {
      v18 = *((uint32_t *)self + 47);
      v19 = 40 * v9;
      do
      {
        if ( *(uint32_t *)v24 + v19 != 0 )
          gameswf::Path::Construct((gameswf::Path::Self *)(*(uint32_t *)v24 + v19));
        v19 += 40;
        ++v18;
      }
      while ( v18 != 0 );
    }
  }
  else
  {
    v21 = 0;
    v22 = 0;
    do
    {
      v20 = (uint32_t *)(*(uint32_t *)v24 + v21);
      v10 = v20 + 5;
      v11 = v20[6];
      if ( v11 < 0 )
      {
        v12 = 16 * v11;
        do
        {
          if ( *v10 + v12 != 0 )
            gameswf::Edge::Construct((gameswf::Edge::Self *)(*v10 + v12));
          v12 += 16;
          ++v11;
        }
        while ( v11 != 0 );
      }
      v13 = v20[8];
      v20[6] = 0;
      if ( v13 == 0 )
      {
        v20[7] = 0;
        v14 = (gameswf::Self *)v20[5];
        if ( v14 != nullptr )
          gameswf::free_internal(v14);
        v20[5] = 0;
      }
      ++v22;
      v21 += 40;
    }
    while ( v22 != v23 );
  }
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = -1;
  gameswf::ShapeCharacterDef::flushCache(self);
  return gameswf::ShapeCharacterDef::computeBound(v24, (gameswf::Canvas::Self *)((char *)self + 76));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::Construct  (binary VA: 0x11870c0)
// Original: gameswf::Canvas::Canvas
// ----------------------------------------------------------------------------
gameswf::Canvas::Self * gameswf::Canvas::Construct(gameswf::Self **self, gameswf::Player::Self *a2)
{
  gameswf::ShapeCharacterDef::ShapeCharacterDef(self, a2);
  *(self + 34) = nullptr;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_2091908);
  *(self + 32) = nullptr;
  *(self + 33) = nullptr;
  *(self + 35) = nullptr;
  *(self + 36) = (gameswf::Self *)-1;
  *((uint8_t *)self + 148) = 0;
  *(self + 38) = nullptr;
  *(self + 39) = nullptr;
  *(self + 40) = nullptr;
  *(self + 41) = nullptr;
  *(self + 42) = nullptr;
  *(self + 43) = nullptr;
  *(self + 44) = nullptr;
  *(self + 45) = nullptr;
  *(self + 46) = nullptr;
  *(self + 47) = nullptr;
  *(self + 48) = nullptr;
  *(self + 49) = nullptr;
  return (gameswf::Canvas::Self *)gameswf::Canvas::clear((gameswf::Canvas::Self *)self);
}



// ============================================================================
// Address:   0x11871b0 (size: 834 bytes)
// Symbol:    _ZN7gameswf6Canvas7addPathEb
// Demangled: gameswf::Canvas::addPath(bool)
// ============================================================================
gameswf::Edge::Self *gameswf::Canvas::addPath(gameswf::Canvas::Self *self, bool a2)
{
  int v2;
  gameswf::Canvas::Self *v3;
  int v4;
  char *v5;
  int v6;
  int *v7;
  int v8;
  struct gameswf::Edge::Self *result;
  int v10;
  int v11;
  int v12;
  gameswf::Self *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  gameswf::Self *v19;
  int v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef gameswf::Self *_g4_t_v24[6];
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef bool _g4_t_v28;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v21)) > _g4_s0 ? (8u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v22)) > _g4_s1 ? (20u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v23)) > _g4_s2 ? (24u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v24)) > _g4_s3 ? (32u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v25)) > _g4_s4 ? (56u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v26)) > _g4_s5 ? (60u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v27)) > _g4_s6 ? (64u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v28)) > _g4_s7 ? (68u + sizeof(_g4_t_v28)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);

  if ( *((int *)self + 36) < 0 )
  {
    v2 = *((uint32_t *)self + 34);
    v3 = self;
  }
  else
  {
    v2 = *((uint32_t *)self + 34);
    v3 = self;
    if ( v2 > 0 )
    {
      gameswf::Canvas::closePath(self);
      v3 = self;
      v2 = *((uint32_t *)self + 34);
    }
  }
  gameswf::Path::Construct((gameswf::Path::Self *)v24, *((float *)v3 + 32), *((float *)v3 + 33), v2, 0, *((uint32_t *)v3 + 35));
  v28 = a2;
  v23 = *((uint32_t *)self + 47);
  v4 = *((uint32_t *)self + 48);
  v22 = v23 + 1;
  if ( v23 + 1 > v4 )
  {
    if ( *((uint32_t *)self + 49) != 0 )
    {
      v5 = *((char **)self + 46);
      v6 = *((uint32_t *)self + 47);
    }
    else
    {
      v12 = v22 + (v22 >> 1);
      *((uint32_t *)self + 48) = v12;
      v13 = *((gameswf::Self **)self + 46);
      if ( v12 != 0 )
      {
        if ( v13 != nullptr )
          v5 = (char *)gameswf::realloc_internal(v13, 40 * v12, 40 * v4);
        else
          v5 = (char *)gameswf::malloc_internal(40 * v12);
        *((uint32_t *)self + 46) = (uint32_t)(uintptr_t)(v5);
        v6 = *((uint32_t *)self + 47);
      }
      else
      {
        v6 = v23;
        if ( v13 != nullptr )
        {
          gameswf::free_internal(v13);
          v6 = *((uint32_t *)self + 47);
        }
        v5 = nullptr;
        *((uint32_t *)self + 46) = 0;
      }
    }
  }
  else
  {
    v5 = *((char **)self + 46);
    v6 = *((uint32_t *)self + 47);
  }
  v7 = (int *)&v5[40 * v6];
  if ( v7 != nullptr )
  {
    std::memcpy(v7, v24, 20);
    v7[5] = 0;
    v7[6] = 0;
    v8 = v25;
    v7[7] = 0;
    v7[8] = 0;
    if ( v8 > 0 )
    {
      v14 = 0;
      v15 = v8 + (v8 >> 1);
      v7[7] = v15;
      v21 = v8;
      v16 = gameswf::malloc_internal(16 * v15);
      for ( v7[5] = v16; ; v16 = v7[5] )
      {
        if ( v16 + 16 * v14 != 0 )
          gameswf::Edge::Construct((gameswf::Edge::Self *)(v16 + 16 * v14));
        if ( ++v14 == v21 )
          break;
      }
      v7[6] = v14;
      v17 = 0;
      do
      {
        v18 = 16 * v17;
        v19 = v24[5];
        ++v17;
        v20 = v7[5];
        *(uint32_t *)(v20 + v18) = *(uint32_t *)((char *)v24[5] + v18);
        *(uint32_t *)(v20 + v18 + 4) = *(uint32_t *)((char *)v19 + v18 + 4);
        *(uint32_t *)(v20 + v18 + 8) = *(uint32_t *)((char *)v19 + v18 + 8);
        *(uint32_t *)(v20 + v18 + 12) = *(uint32_t *)((char *)v19 + v18 + 12);
      }
      while ( v17 < v7[6] );
    }
    else
    {
      v7[6] = v8;
    }
    *((uint8_t *)v7 + 36) = v28;
  }
  *((uint32_t *)self + 47) = v22;
  *((uint32_t *)self + 36) = v23;
  result = (struct gameswf::Edge::Self *)gameswf::ShapeCharacterDef::flushCache(self);
  v10 = v25;
  if ( v25 < 0 )
  {
    v11 = 16 * v25;
    do
    {
      result = (struct gameswf::Edge::Self *)((gameswf::Self *)((char *)v24[5] + v11));
      if ( (gameswf::Self *)((char *)v24[5] + v11) != nullptr )
        result = gameswf::Edge::Construct((gameswf::Self *)((char *)v24[5] + v11));
      v11 += 16;
      ++v10;
    }
    while ( v10 != 0 );
  }
  v25 = 0;
  if ( v27 == 0 )
  {
    result = (struct gameswf::Edge::Self *)(v24[5]);
    v26 = 0;
    if ( v24[5] != nullptr )
      return (struct gameswf::Edge::Self *)gameswf::free_internal(v24[5]);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::beginBitmapFill  (binary VA: 0x1187500)
// Original: gameswf::Canvas::beginBitmapFill
// ----------------------------------------------------------------------------
void gameswf::Canvas::beginBitmapFill(gameswf::Canvas::Self *self, gameswf::BitmapInfo::Self *a2, const gameswf::Matrix::Self *a3, bool a4)
{
  int v4;
  int v5;
  char *v6;
  char *v7;
  int v8;
  bool v9; // cc
  gameswf::RefCounted::Self *v10;
  bool v11;
  gameswf::RefCounted::Self *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  gameswf::gradientRecord::Self *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef gameswf::RefCounted::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef gameswf::RefCounted::Self *_g4_t_v38;
  typedef gameswf::RefCounted::Self *_g4_t_v39;
  typedef uint8_t _g4_t_v40[48];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v25)) > _g4_s3 ? (8u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v26)) > _g4_s4 ? (12u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v27)) > _g4_s5 ? (16u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v28)) > _g4_s6 ? (20u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v29)) > _g4_s7 ? (24u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v30)) > _g4_s8 ? (28u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v31)) > _g4_s9 ? (32u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v32)) > _g4_s10 ? (36u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v33)) > _g4_s11 ? (40u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v34)) > _g4_s12 ? (44u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v35)) > _g4_s13 ? (48u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v36)) > _g4_s14 ? (52u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v37)) > _g4_s15 ? (56u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v38)) > _g4_s16 ? (68u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v39)) > _g4_s17 ? (72u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v40)) > _g4_s18 ? (76u + sizeof(_g4_t_v40)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);

  gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)&v27);
  v28 = 67 - a4;
  if ( a2 != (gameswf::BitmapInfo::Self *)(uintptr_t)(v38) )
  {
    if ( v38 != nullptr )
      gameswf::RefCounted::dropRef(v38);
    v38 = (gameswf::RefCounted::Self *)(a2);
    if ( a2 != nullptr )
      gameswf::RefCounted::addRef(a2);
  }
  gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v40, a3);
  v4 = *((uint32_t *)self + 39);
  v5 = *((uint32_t *)self + 40);
  v23 = v4 + 1;
  if ( v4 + 1 > v5 )
  {
    if ( *((uint32_t *)self + 41) != 0 )
    {
      v6 = *((char **)self + 38);
    }
    else
    {
      v13 = v23 + (v23 >> 1);
      *((uint32_t *)self + 40) = v13;
      if ( v13 != 0 )
      {
        if ( *((uint32_t *)self + 38) != 0 )
          v6 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 38), 84 * v13, 84 * v5);
        else
          v6 = (char *)gameswf::malloc_internal(84 * v13);
        *((uint32_t *)self + 38) = (uint32_t)(uintptr_t)(v6);
        v4 = *((uint32_t *)self + 39);
      }
      else
      {
        if ( *((uint32_t *)self + 38) != 0 )
        {
          gameswf::free_internal(*((gameswf::Self **)self + 38));
          v4 = *((uint32_t *)self + 39);
        }
        v6 = nullptr;
        *((uint32_t *)self + 38) = 0;
      }
    }
  }
  else
  {
    v6 = *((char **)self + 38);
  }
  v7 = &v6[84 * v4];
  if ( v7 != nullptr )
  {
    v22 = (int *)(v7 + 36);
    *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_208F678);
    *((uint32_t *)v7 + 1) = v28;
    *((uint32_t *)v7 + 2) = v29;
    *((uint32_t *)v7 + 3) = v30;
    *((uint32_t *)v7 + 4) = v31;
    *((uint32_t *)v7 + 5) = v32;
    *((uint32_t *)v7 + 6) = v33;
    *((uint32_t *)v7 + 7) = v34;
    *((uint32_t *)v7 + 8) = v35;
    *((uint32_t *)v7 + 9) = 0;
    *((uint32_t *)v7 + 10) = 0;
    v8 = v37;
    v9 = v37 <= 0;
    *((uint32_t *)v7 + 11) = 0;
    *((uint32_t *)v7 + 12) = 0;
    v24 = v8;
    if ( v9 )
    {
      *((uint32_t *)v7 + 10) = v8;
    }
    else
    {
      v14 = v8 + (v8 >> 1);
      *((uint32_t *)v7 + 11) = v14;
      v15 = gameswf::malloc_internal(5 * v14);
      *((uint32_t *)v7 + 9) = v15;
      v16 = 0;
      while ( 1 )
      {
        v17 = (gameswf::gradientRecord::Self *)(v16 + v15);
        if ( v17 != nullptr )
          gameswf::gradientRecord::gradientRecord(v17);
        v16 += 5;
        if ( v16 == 5 * v24 )
          break;
        v15 = *((uint32_t *)v7 + 9);
      }
      v18 = v24;
      v19 = 0;
      v25 = v7;
      v26 = 0;
      *((uint32_t *)v7 + 10) = v18;
      do
      {
        ++v26;
        v20 = *v22;
        v21 = v36;
        *(uint32_t *)(v20 + v19) = *(uint32_t *)(v36 + v19);
        *(uint8_t *)(v20 + v19 + 4) = *(uint8_t *)(v21 + v19 + 4);
        v19 += 5;
      }
      while ( v26 < v22[1] );
      v7 = v25;
    }
    v10 = v38;
    v11 = v38 == nullptr;
    *((uint32_t *)v7 + 13) = (uint32_t)(uintptr_t)(v38);
    if ( !v11 )
      gameswf::RefCounted::addRef(v10);
    v12 = v39;
    v11 = v39 == nullptr;
    *((uint32_t *)v7 + 14) = (uint32_t)(uintptr_t)(v39);
    if ( !v11 )
      gameswf::RefCounted::addRef(v12);
    std::memcpy(v7 + 60, v40, 24);
  }
  *((uint32_t *)self + 39) = v23;
  *((uint32_t *)self + 34) = v23;
  gameswf::Canvas::addPath(self, true);
  gameswf::FillStyle::Destroy(&v27);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::beginFill  (binary VA: 0x1187820)
// Original: gameswf::Canvas::beginFill
// ----------------------------------------------------------------------------
void gameswf::Canvas::beginFill(gameswf::Canvas::Self *self, const gameswf::Color::Self *a2)
{
  int v2;
  int v3;
  char *v4;
  char *v5;
  int v6;
  bool v7; // cc
  gameswf::RefCounted::Self *v8;
  bool v9;
  gameswf::RefCounted::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  gameswf::gradientRecord::Self *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  typedef int *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef gameswf::RefCounted::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef gameswf::RefCounted::Self *_g4_t_v36;
  typedef gameswf::RefCounted::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v23)) > _g4_s3 ? (8u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v24)) > _g4_s4 ? (12u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v25)) > _g4_s5 ? (16u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v26)) > _g4_s6 ? (20u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v27)) > _g4_s7 ? (24u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v28)) > _g4_s8 ? (28u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v29)) > _g4_s9 ? (32u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v30)) > _g4_s10 ? (36u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v31)) > _g4_s11 ? (40u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v32)) > _g4_s12 ? (44u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v33)) > _g4_s13 ? (48u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v34)) > _g4_s14 ? (52u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v35)) > _g4_s15 ? (56u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v36)) > _g4_s16 ? (68u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v37)) > _g4_s17 ? (72u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v38)) > _g4_s18 ? (76u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v39)) > _g4_s19 ? (80u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v40)) > _g4_s20 ? (84u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v41)) > _g4_s21 ? (88u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v42)) > _g4_s22 ? (92u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v43)) > _g4_s23 ? (96u + sizeof(_g4_t_v43)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 88u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);

  gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)&v25);
  v26 = 0;
  v2 = *((uint32_t *)self + 39);
  v27 = *(uint32_t *)a2;
  v3 = *((uint32_t *)self + 40);
  v21 = v2 + 1;
  if ( v2 + 1 > v3 )
  {
    if ( *((uint32_t *)self + 41) != 0 )
    {
      v4 = *((char **)self + 38);
    }
    else
    {
      v11 = v21 + (v21 >> 1);
      *((uint32_t *)self + 40) = v11;
      if ( v11 != 0 )
      {
        if ( *((uint32_t *)self + 38) != 0 )
          v4 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 38), 84 * v11, 84 * v3);
        else
          v4 = (char *)gameswf::malloc_internal(84 * v11);
        *((uint32_t *)self + 38) = (uint32_t)(uintptr_t)(v4);
        v2 = *((uint32_t *)self + 39);
      }
      else
      {
        if ( *((uint32_t *)self + 38) != 0 )
        {
          gameswf::free_internal(*((gameswf::Self **)self + 38));
          v2 = *((uint32_t *)self + 39);
        }
        v4 = nullptr;
        *((uint32_t *)self + 38) = 0;
      }
    }
  }
  else
  {
    v4 = *((char **)self + 38);
  }
  v5 = &v4[84 * v2];
  if ( v5 != nullptr )
  {
    v20 = (int *)(v5 + 36);
    *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208F678);
    *((uint32_t *)v5 + 1) = v26;
    *((uint32_t *)v5 + 2) = v27;
    *((uint32_t *)v5 + 3) = v28;
    *((uint32_t *)v5 + 4) = v29;
    *((uint32_t *)v5 + 5) = v30;
    *((uint32_t *)v5 + 6) = v31;
    *((uint32_t *)v5 + 7) = v32;
    *((uint32_t *)v5 + 8) = v33;
    *((uint32_t *)v5 + 9) = 0;
    *((uint32_t *)v5 + 10) = 0;
    v6 = v35;
    v7 = v35 <= 0;
    *((uint32_t *)v5 + 11) = 0;
    *((uint32_t *)v5 + 12) = 0;
    v22 = v6;
    if ( v7 )
    {
      *((uint32_t *)v5 + 10) = v6;
    }
    else
    {
      v12 = v6 + (v6 >> 1);
      *((uint32_t *)v5 + 11) = v12;
      v13 = gameswf::malloc_internal(5 * v12);
      *((uint32_t *)v5 + 9) = v13;
      v14 = 0;
      while ( 1 )
      {
        v15 = (gameswf::gradientRecord::Self *)(v14 + v13);
        if ( v15 != nullptr )
          gameswf::gradientRecord::gradientRecord(v15);
        v14 += 5;
        if ( v14 == 5 * v22 )
          break;
        v13 = *((uint32_t *)v5 + 9);
      }
      v16 = v22;
      v17 = 0;
      v23 = v5;
      v24 = 0;
      *((uint32_t *)v5 + 10) = v16;
      do
      {
        ++v24;
        v18 = *v20;
        v19 = v34;
        *(uint32_t *)(v18 + v17) = *(uint32_t *)(v34 + v17);
        *(uint8_t *)(v18 + v17 + 4) = *(uint8_t *)(v19 + v17 + 4);
        v17 += 5;
      }
      while ( v24 < v20[1] );
      v5 = v23;
    }
    v8 = v36;
    v9 = v36 == nullptr;
    *((uint32_t *)v5 + 13) = (uint32_t)(uintptr_t)(v36);
    if ( !v9 )
      gameswf::RefCounted::addRef(v8);
    v10 = v37;
    v9 = v37 == nullptr;
    *((uint32_t *)v5 + 14) = (uint32_t)(uintptr_t)(v37);
    if ( !v9 )
      gameswf::RefCounted::addRef(v10);
    *((uint32_t *)v5 + 15) = v38;
    *((uint32_t *)v5 + 16) = v39;
    *((uint32_t *)v5 + 17) = v40;
    *((uint32_t *)v5 + 18) = v41;
    *((uint32_t *)v5 + 19) = v42;
    *((uint32_t *)v5 + 20) = v43;
  }
  *((uint32_t *)self + 39) = v21;
  *((uint32_t *)self + 34) = v21;
  gameswf::Canvas::addPath(self, true);
  gameswf::FillStyle::Destroy(&v25);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::setLineStyle  (binary VA: 0x1187b00)
// Original: gameswf::Canvas::setLineStyle
// ----------------------------------------------------------------------------
void gameswf::Canvas::setLineStyle(gameswf::Canvas::Self *self, uint16_t a2, const gameswf::Color::Self *a3)
{
  int v3;
  int v4;
  char *v5;
  char *v6;
  int v7;
  bool v8; // cc
  gameswf::RefCounted::Self *v9;
  bool v10;
  gameswf::RefCounted::Self *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  gameswf::gradientRecord::Self *v18;
  int v19;
  int v20;
  int v21;
  gameswf::RefCounted::Self *v22;
  typedef int *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef void (**_g4_t_v29)(gameswf::LineStyle::Self *);
  typedef float _g4_t_v30;
  typedef int _g4_t_v31;
  typedef gameswf::RefCounted::Self *_g4_t_v32[21];
  typedef int16_t _g4_t_v33;
  typedef int16_t _g4_t_v34;
  typedef int16_t _g4_t_v35;
  typedef int16_t _g4_t_v36;
  typedef int16_t _g4_t_v37;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v25)) > _g4_s2 ? (4u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v26)) > _g4_s3 ? (8u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v27)) > _g4_s4 ? (12u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v28)) > _g4_s5 ? (12u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v29)) > _g4_s6 ? (16u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v30)) > _g4_s7 ? (20u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v31)) > _g4_s8 ? (24u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v32)) > _g4_s9 ? (28u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v33)) > _g4_s10 ? (112u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (114u + sizeof(_g4_t_v34)) > _g4_s11 ? (114u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v35)) > _g4_s12 ? (116u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (118u + sizeof(_g4_t_v36)) > _g4_s13 ? (118u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v37)) > _g4_s14 ? (120u + sizeof(_g4_t_v37)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 112u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 114u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 116u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 118u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 120u);

  gameswf::LineStyle::Construct((gameswf::LineStyle::Self *)&v29);
  v3 = *((uint32_t *)self + 43);
  v31 = *(uint32_t *)a3;
  v4 = *((uint32_t *)self + 44);
  v26 = v3 + 1;
  v30 = (float)((float)0 * 65536.0) + (float)a2;
  if ( v3 + 1 > v4 )
  {
    if ( *((uint32_t *)self + 45) != 0 )
    {
      v5 = *((char **)self + 42);
    }
    else
    {
      v12 = v26 + (v26 >> 1);
      *((uint32_t *)self + 44) = v12;
      if ( v12 != 0 )
      {
        if ( *((uint32_t *)self + 42) != 0 )
          v5 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 42), 108 * v12, 108 * v4);
        else
          v5 = (char *)gameswf::malloc_internal(108 * v12);
        *((uint32_t *)self + 42) = (uint32_t)(uintptr_t)(v5);
        v3 = *((uint32_t *)self + 43);
      }
      else
      {
        if ( *((uint32_t *)self + 42) != 0 )
        {
          gameswf::free_internal(*((gameswf::Self **)self + 42));
          v3 = *((uint32_t *)self + 43);
        }
        v5 = nullptr;
        *((uint32_t *)self + 42) = 0;
      }
    }
  }
  else
  {
    v5 = *((char **)self + 42);
  }
  v6 = &v5[108 * v3];
  if ( v6 != nullptr )
  {
    v23 = (int *)(v6 + 48);
    *(uint32_t *)v6 = ((uint32_t)(uintptr_t)&off_208F690);
    *((float *)v6 + 1) = v30;
    *((uint32_t *)v6 + 2) = v31;
    *((uint32_t *)v6 + 3) = ((uint32_t)(uintptr_t)&off_208F678);
    *((gameswf::RefCounted::Self **)v6 + 4) = v32[1];
    *((gameswf::RefCounted::Self **)v6 + 5) = v32[2];
    *((gameswf::RefCounted::Self **)v6 + 6) = v32[3];
    *((gameswf::RefCounted::Self **)v6 + 7) = v32[4];
    *((gameswf::RefCounted::Self **)v6 + 8) = v32[5];
    *((gameswf::RefCounted::Self **)v6 + 9) = v32[6];
    *((gameswf::RefCounted::Self **)v6 + 10) = v32[7];
    *((gameswf::RefCounted::Self **)v6 + 11) = v32[8];
    *((uint32_t *)v6 + 12) = 0;
    *((uint32_t *)v6 + 13) = 0;
    v7 = (int)(uintptr_t)(v32[10]);
    v8 = (int)(uintptr_t)(v32[10]) <= 0;
    *((uint32_t *)v6 + 14) = 0;
    *((uint32_t *)v6 + 15) = 0;
    v24 = v7;
    if ( v8 )
    {
      *((uint32_t *)v6 + 13) = v7;
    }
    else
    {
      v13 = v7 + (v7 >> 1);
      *((uint32_t *)v6 + 14) = v13;
      v14 = gameswf::malloc_internal(5 * v13);
      *((uint32_t *)v6 + 12) = v14;
      v15 = 5 * v7;
      v27 = v6;
      v16 = 0;
      v17 = v15;
      while ( 1 )
      {
        v18 = (gameswf::gradientRecord::Self *)(v16 + v14);
        if ( v18 != nullptr )
          gameswf::gradientRecord::gradientRecord(v18);
        v16 += 5;
        if ( v16 == v17 )
          break;
        v14 = *((uint32_t *)v27 + 12);
      }
      v19 = v24;
      v20 = 0;
      v25 = v27;
      v28 = 0;
      *((uint32_t *)v25 + 13) = v19;
      do
      {
        ++v28;
        v21 = *v23;
        v22 = v32[9];
        *(uint32_t *)(v21 + v20) = *(uint32_t *)((char *)v32[9] + v20);
        *(uint8_t *)(v21 + v20 + 4) = *((uint8_t *)v22 + v20 + 4);
        v20 += 5;
      }
      while ( v28 < v23[1] );
      v6 = v25;
    }
    v9 = v32[13];
    v10 = v32[13] == nullptr;
    *((gameswf::RefCounted::Self **)v6 + 16) = v32[13];
    if ( !v10 )
      gameswf::RefCounted::addRef(v9);
    v11 = v32[14];
    v10 = v32[14] == nullptr;
    *((gameswf::RefCounted::Self **)v6 + 17) = v32[14];
    if ( !v10 )
      gameswf::RefCounted::addRef(v11);
    *((gameswf::RefCounted::Self **)v6 + 18) = v32[15];
    *((gameswf::RefCounted::Self **)v6 + 19) = v32[16];
    *((gameswf::RefCounted::Self **)v6 + 20) = v32[17];
    *((gameswf::RefCounted::Self **)v6 + 21) = v32[18];
    *((gameswf::RefCounted::Self **)v6 + 22) = v32[19];
    *((gameswf::RefCounted::Self **)v6 + 23) = v32[20];
    *((uint16_t *)v6 + 48) = v33;
    *((uint16_t *)v6 + 49) = v34;
    *((uint16_t *)v6 + 50) = v35;
    *((uint16_t *)v6 + 51) = v36;
    *((uint16_t *)v6 + 52) = v37;
  }
  *((uint32_t *)self + 43) = v26;
  *((uint32_t *)self + 35) = v26;
  gameswf::Canvas::addPath(self, true);
  v29 = (void (**)(gameswf::LineStyle::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208F690));
  gameswf::FillStyle::Destroy(v32);
}



// ============================================================================
// Address:   0x1187e90 (size: 88 bytes)
// Symbol:    _ZN7gameswf6Canvas6moveToEff
// Demangled: gameswf::Canvas::moveTo(float,float)
// ============================================================================
gameswf::Edge::Self *gameswf::Canvas::moveTo(gameswf::Canvas::Self *self, float a2, float a3)
{
  struct gameswf::Edge::Self *result;

  result = (struct gameswf::Edge::Self *)(self);
  if ( a2 != *((float *)self + 32) || a3 != *((float *)self + 33) )
  {
    *((float *)self + 32) = a2;
    *((float *)self + 33) = a3;
    return (struct gameswf::Edge::Self *)(uintptr_t)(gameswf::Canvas::addPath(self, false));
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::lineTo  (binary VA: 0x1187ef0)
// Original: gameswf::Canvas::lineTo
// ----------------------------------------------------------------------------
int gameswf::Canvas::lineTo(gameswf::Canvas::Self *self, unsigned int a2, unsigned int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  char *v9;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  gameswf::Self *v16;
  char *v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef g4_int128_t _g4_t_v23;
  typedef uint32_t _g4_t_v24[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v19)) > _g4_s1 ? (20u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v21)) > _g4_s3 ? (24u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v22)) > _g4_s4 ? (24u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v23)) > _g4_s5 ? (32u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v24)) > _g4_s6 ? (48u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);

  v3 = *((uint32_t *)self + 36);
  if ( v3 < 0 )
  {
    gameswf::Canvas::addPath(self, true);
    v3 = *((uint32_t *)self + 36);
  }
  if ( *(uint32_t *)(*((uint32_t *)self + 46) + 40 * v3 + 24) == 0 )
  {
    gameswf::Edge::Construct(
      (gameswf::Edge::Self *)&v23,
      *((uint32_t *)self + 32),
      *((uint32_t *)self + 33),
      *((uint32_t *)self + 32),
      *((uint32_t *)self + 33));
    v11 = *((uint32_t *)self + 46) + 40 * *((uint32_t *)self + 36);
    v12 = *(uint32_t *)(v11 + 24);
    v18 = v12 + 1;
    v21 = *(uint32_t *)(v11 + 28);
    if ( v12 + 1 <= v21 || *(uint32_t *)(v11 + 32) != 0 )
    {
      v22 = *(char **)(v11 + 20);
    }
    else
    {
      v15 = v18 + (v18 >> 1);
      *(uint32_t *)(v11 + 28) = v15;
      if ( v15 != 0 )
      {
        v20 = v11;
        if ( *(uint32_t *)(v11 + 20) != 0 )
          v17 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(v11 + 20), 16 * v15, 16 * v21);
        else
          v17 = (char *)gameswf::malloc_internal(16 * v15);
        v11 = v20;
        v22 = v17;
        *(uint32_t *)(v20 + 20) = (uint32_t)(uintptr_t)(v17);
        v12 = *(uint32_t *)(v20 + 24);
      }
      else
      {
        v16 = *(gameswf::Self **)(v11 + 20);
        if ( v16 != nullptr )
        {
          v19 = v11;
          gameswf::free_internal(v16);
          v11 = v19;
          v12 = *(uint32_t *)(v19 + 24);
        }
        *(uint32_t *)(v11 + 20) = 0;
        v22 = nullptr;
      }
    }
    v13 = &v22[16 * v12];
    if ( v13 != nullptr )
      *(g4_int128_t *)v13 = v23;
    *(uint32_t *)(v11 + 24) = v18;
  }
  *((float *)self + 32) = *(float *)&a2;
  *((float *)self + 33) = *(float *)&a3;
  gameswf::Edge::Construct((gameswf::Edge::Self *)v24, a2, a3, a2, a3);
  v4 = *((uint32_t *)self + 46) + 40 * *((uint32_t *)self + 36);
  v5 = *(uint32_t *)(v4 + 24);
  v6 = *(uint32_t *)(v4 + 28);
  v7 = v5 + 1;
  if ( v5 + 1 <= v6 || *(uint32_t *)(v4 + 32) != 0 )
  {
    v8 = *(char **)(v4 + 20);
  }
  else
  {
    v14 = v7 + (v7 >> 1);
    *(uint32_t *)(v4 + 28) = v14;
    if ( v14 != 0 )
    {
      if ( *(uint32_t *)(v4 + 20) != 0 )
        v8 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(v4 + 20), 16 * v14, 16 * v6);
      else
        v8 = (char *)gameswf::malloc_internal(16 * v14);
      *(uint32_t *)(v4 + 20) = (uint32_t)(uintptr_t)(v8);
      v5 = *(uint32_t *)(v4 + 24);
    }
    else
    {
      if ( *(uint32_t *)(v4 + 20) != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)(v4 + 20));
        v5 = *(uint32_t *)(v4 + 24);
      }
      *(uint32_t *)(v4 + 20) = 0;
      v8 = nullptr;
    }
  }
  v9 = &v8[16 * v5];
  if ( v9 != nullptr )
  {
    *(uint32_t *)v9 = v24[0];
    *((uint32_t *)v9 + 1) = v24[1];
    *((uint32_t *)v9 + 2) = v24[2];
    *((uint32_t *)v9 + 3) = v24[3];
  }
  *(uint32_t *)(v4 + 24) = v7;
  gameswf::ShapeCharacterDef::flushCache(self);
  return gameswf::ShapeCharacterDef::computeBound(
           (gameswf::Canvas::Self *)((char *)self + 184),
           (gameswf::Canvas::Self *)((char *)self + 76));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::curveTo  (binary VA: 0x1188200)
// Original: gameswf::Canvas::curveTo
// ----------------------------------------------------------------------------
int gameswf::Canvas::curveTo(gameswf::Canvas::Self *self, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  char *v12;
  int v14;
  int v15;
  char *v16;
  int v17;
  int v18;
  gameswf::Self *v19;
  char *v20;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef g4_int128_t _g4_t_v25;
  typedef uint32_t _g4_t_v26[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v22)) > _g4_s1 ? (20u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v23)) > _g4_s2 ? (24u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v24)) > _g4_s3 ? (24u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v25)) > _g4_s4 ? (32u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v26)) > _g4_s5 ? (48u + sizeof(_g4_t_v26)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);

  v5 = a5;
  v6 = *((uint32_t *)self + 36);
  if ( v6 < 0 )
  {
    gameswf::Canvas::addPath(self, true);
    v6 = *((uint32_t *)self + 36);
    v5 = a5;
  }
  if ( *(uint32_t *)(*((uint32_t *)self + 46) + 40 * v6 + 24) == 0 )
  {
    v22 = v5;
    gameswf::Edge::Construct(
      (gameswf::Edge::Self *)&v25,
      *((uint32_t *)self + 32),
      *((uint32_t *)self + 33),
      *((uint32_t *)self + 32),
      *((uint32_t *)self + 33));
    v5 = v22;
    v14 = *((uint32_t *)self + 46) + 40 * *((uint32_t *)self + 36);
    v15 = *(uint32_t *)(v14 + 24);
    v21 = v15 + 1;
    v23 = *(uint32_t *)(v14 + 28);
    if ( v15 + 1 <= v23 || *(uint32_t *)(v14 + 32) != 0 )
    {
      v24 = *(char **)(v14 + 20);
    }
    else
    {
      v18 = v21 + (v21 >> 1);
      *(uint32_t *)(v14 + 28) = v18;
      if ( v18 != 0 )
      {
        if ( *(uint32_t *)(v14 + 20) != 0 )
          v20 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(v14 + 20), 16 * v18, 16 * v23);
        else
          v20 = (char *)gameswf::malloc_internal(16 * v18);
        *(uint32_t *)(v14 + 20) = (uint32_t)(uintptr_t)(v20);
        v24 = v20;
        v15 = *(uint32_t *)(v14 + 24);
        v5 = v22;
      }
      else
      {
        v19 = *(gameswf::Self **)(v14 + 20);
        if ( v19 != nullptr )
        {
          gameswf::free_internal(v19);
          v15 = *(uint32_t *)(v14 + 24);
          v5 = v22;
        }
        *(uint32_t *)(v14 + 20) = 0;
        v24 = nullptr;
      }
    }
    v16 = &v24[16 * v15];
    if ( v16 != nullptr )
      *(g4_int128_t *)v16 = v25;
    *(uint32_t *)(v14 + 24) = v21;
  }
  *((float *)self + 32) = *(float *)&a4;
  *((uint32_t *)self + 33) = v5;
  gameswf::Edge::Construct((gameswf::Edge::Self *)v26, a2, a3, a4, v5);
  v7 = *((uint32_t *)self + 46) + 40 * *((uint32_t *)self + 36);
  v8 = *(uint32_t *)(v7 + 24);
  v9 = *(uint32_t *)(v7 + 28);
  v10 = v8 + 1;
  if ( v8 + 1 <= v9 || *(uint32_t *)(v7 + 32) != 0 )
  {
    v11 = *(char **)(v7 + 20);
  }
  else
  {
    v17 = v10 + (v10 >> 1);
    *(uint32_t *)(v7 + 28) = v17;
    if ( v17 != 0 )
    {
      if ( *(uint32_t *)(v7 + 20) != 0 )
        v11 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(v7 + 20), 16 * v17, 16 * v9);
      else
        v11 = (char *)gameswf::malloc_internal(16 * v17);
      *(uint32_t *)(v7 + 20) = (uint32_t)(uintptr_t)(v11);
      v8 = *(uint32_t *)(v7 + 24);
    }
    else
    {
      if ( *(uint32_t *)(v7 + 20) != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)(v7 + 20));
        v8 = *(uint32_t *)(v7 + 24);
      }
      *(uint32_t *)(v7 + 20) = 0;
      v11 = nullptr;
    }
  }
  v12 = &v11[16 * v8];
  if ( v12 != nullptr )
  {
    *(uint32_t *)v12 = v26[0];
    *((uint32_t *)v12 + 1) = v26[1];
    *((uint32_t *)v12 + 2) = v26[2];
    *((uint32_t *)v12 + 3) = v26[3];
  }
  *(uint32_t *)(v7 + 24) = v10;
  gameswf::ShapeCharacterDef::flushCache(self);
  return gameswf::ShapeCharacterDef::computeBound(
           (gameswf::Canvas::Self *)((char *)self + 184),
           (gameswf::Canvas::Self *)((char *)self + 76));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Canvas::is  (binary VA: 0x1188530)
// Original: gameswf::Canvas::is
// ----------------------------------------------------------------------------
bool gameswf::Canvas::is(gameswf::Canvas::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 24 )
    return a2 == 14;
  return result;
}


