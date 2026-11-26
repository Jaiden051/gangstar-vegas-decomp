#include "Core/Utils/DecompTypes.h"
#include "gameswf_MeshSet.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_MeshSet.cpp
// Library: gameswf | Module: gameswf_MeshSet
// Binary Address Span: 0x10dbdb0 .. 0x10dcd60 (11 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x10dbdb0 (size: 39 bytes)
// Symbol:    _ZN7gameswf7MeshSetC2Ev
// Demangled: gameswf::MeshSet::MeshSet(void)
// ============================================================================
// Alternative name is '_ZN7gameswf7MeshSetC1Ev'
struct gameswf::MeshSet::Self *gameswf::MeshSet::Construct(gameswf::MeshSet::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: gameswf::MeshSet::Construct  (binary VA: 0x10dbde0)
// Original: gameswf::MeshSet::MeshSet
// ----------------------------------------------------------------------------
gameswf::MeshSet::Self * gameswf::MeshSet::Construct(gameswf::MeshSet::Self *self, const gameswf::ShapeCharacterDef::Self *a2, const gameswf::ShapeCharacterDef::Self *a3)
{
  float v4;

  *(float *)self = *(float *)&a3;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  return (gameswf::executeTesselate(self, a2, a3, v4), (gameswf::MeshSet::Self *)0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MeshSet::layer::Destroy  (binary VA: 0x10dbe90)
// Original: gameswf::MeshSet::layer::~layer
// ----------------------------------------------------------------------------
void gameswf::MeshSet::layer::Destroy(gameswf::MeshSet::layer::Self *self)
{
  gameswf::MeshSet::layer::Self *v1;
  int v2;
  int i;
  gameswf::Self *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  gameswf::Self *v9;
  int v10;
  int j;
  gameswf::Self **v12;
  int v13;
  uint8_t *v14;
  gameswf::Self *v15;
  gameswf::Self *v16;
  int v17;
  int v18;
  uint16_t *v19;
  gameswf::Self *v20;
  gameswf::Self *v21;
  int v22;
  int v23;
  uint32_t *v24;
  gameswf::Self *v25;
  gameswf::Self *v26;
  int v27;
  int v28;
  uint16_t *v29;
  gameswf::Self *v30;
  gameswf::Self *v31;
  int v32;
  int v33;
  uint32_t *v34;
  gameswf::Self *v35;
  gameswf::Self *v36;
  int v37;
  int v38;
  uint32_t *v39;
  gameswf::Self *v40;
  gameswf::Self *v41;
  bool v42;
  int v43;
  uint32_t *v44;
  int v45;
  gameswf::Self *v46;
  int v47;
  int v48;
  uint32_t *v49;
  int v50;
  gameswf::Self *v51;
  gameswf::MeshSet::layer::Self *v52;

  v1 = self;
  v2 = *((uint32_t *)self + 5);
  if ( v2 > 0 )
  {
    for ( i = 0; i < v2; ++i )
    {
      v4 = *(gameswf::Self **)(*((uint32_t *)self + 4) + 4 * i);
      if ( v4 != nullptr )
      {
        v5 = *((uint32_t *)v4 + 2);
        if ( v5 < 0 )
        {
          v6 = 8 * v5;
          do
          {
            v7 = (uint32_t *)(*((uint32_t *)v4 + 1) + v6);
            if ( v7 != nullptr )
            {
              *v7 = 0;
              v7[1] = 0;
            }
            v6 += 8;
            ++v5;
          }
          while ( v5 != 0 );
        }
        v8 = *((uint32_t *)v4 + 4);
        *((uint32_t *)v4 + 2) = 0;
        if ( v8 == 0 )
        {
          v9 = *((gameswf::Self **)v4 + 1);
          *((uint32_t *)v4 + 3) = 0;
          if ( v9 != nullptr )
            gameswf::free_internal(v9);
          *((uint32_t *)v4 + 1) = 0;
        }
        gameswf::free_internal(v4);
        v2 = *((uint32_t *)self + 5);
      }
    }
    v1 = self;
  }
  v10 = *((uint32_t *)v1 + 1);
  if ( v10 > 0 )
  {
    v52 = v1;
    for ( j = 0; j < v10; ++j )
    {
      v12 = *(gameswf::Self ***)(*(uint32_t *)v52 + 4 * j);
      if ( v12 != nullptr )
      {
        v13 = (int)(uintptr_t)(v12[21]);
        if ( v13 < 0 )
        {
          do
          {
            v14 = (uint8_t *)((char *)v12[20] + v13);
            if ( v14 != nullptr )
              *v14 = 0;
            ++v13;
          }
          while ( v13 != 0 );
        }
        v15 = v12[23];
        v12[21] = nullptr;
        if ( v15 == nullptr )
        {
          v16 = v12[20];
          v12[22] = nullptr;
          if ( v16 != nullptr )
            gameswf::free_internal(v16);
          v12[20] = nullptr;
        }
        v17 = (int)(uintptr_t)(v12[17]);
        if ( v17 < 0 )
        {
          v18 = 2 * v17;
          do
          {
            v19 = (uint16_t *)((char *)v12[16] + v18);
            if ( v19 != nullptr )
              *v19 = 0;
            v18 += 2;
            ++v17;
          }
          while ( v17 != 0 );
        }
        v20 = v12[19];
        v12[17] = nullptr;
        if ( v20 == nullptr )
        {
          v21 = v12[16];
          v12[18] = nullptr;
          if ( v21 != nullptr )
            gameswf::free_internal(v21);
          v12[16] = nullptr;
        }
        v22 = (int)(uintptr_t)(v12[13]);
        if ( v22 < 0 )
        {
          v23 = 4 * v22;
          do
          {
            v24 = (uint32_t *)((char *)v12[12] + v23);
            if ( v24 != nullptr )
              *v24 = 0;
            v23 += 4;
            ++v22;
          }
          while ( v22 != 0 );
        }
        v25 = v12[15];
        v12[13] = nullptr;
        if ( v25 == nullptr )
        {
          v26 = v12[12];
          v12[14] = nullptr;
          if ( v26 != nullptr )
            gameswf::free_internal(v26);
          v12[12] = nullptr;
        }
        v27 = (int)(uintptr_t)(v12[9]);
        if ( v27 < 0 )
        {
          v28 = 2 * v27;
          do
          {
            v29 = (uint16_t *)((char *)v12[8] + v28);
            if ( v29 != nullptr )
              *v29 = 0;
            v28 += 2;
            ++v27;
          }
          while ( v27 != 0 );
        }
        v30 = v12[11];
        v12[9] = nullptr;
        if ( v30 == nullptr )
        {
          v31 = v12[8];
          v12[10] = nullptr;
          if ( v31 != nullptr )
            gameswf::free_internal(v31);
          v12[8] = nullptr;
        }
        v32 = (int)(uintptr_t)(v12[5]);
        if ( v32 < 0 )
        {
          v33 = 4 * v32;
          do
          {
            v34 = (uint32_t *)((char *)v12[4] + v33);
            if ( v34 != nullptr )
              *v34 = 0;
            v33 += 4;
            ++v32;
          }
          while ( v32 != 0 );
        }
        v35 = v12[7];
        v12[5] = nullptr;
        if ( v35 == nullptr )
        {
          v36 = v12[4];
          v12[6] = nullptr;
          if ( v36 != nullptr )
            gameswf::free_internal(v36);
          v12[4] = nullptr;
        }
        v37 = (int)(uintptr_t)(v12[1]);
        if ( v37 < 0 )
        {
          v38 = 4 * v37;
          do
          {
            v39 = (uint32_t *)((char *)*v12 + v38);
            if ( v39 != nullptr )
              *v39 = 0;
            v38 += 4;
            ++v37;
          }
          while ( v37 != 0 );
        }
        v40 = v12[3];
        v12[1] = nullptr;
        if ( v40 == nullptr )
        {
          v41 = *v12;
          v42 = *v12 == nullptr;
          v12[2] = nullptr;
          if ( !v42 )
            gameswf::free_internal(v41);
          *v12 = nullptr;
        }
        gameswf::free_internal((gameswf::Self *)v12);
        v10 = *((uint32_t *)v52 + 1);
      }
    }
    v1 = v52;
    v2 = *((uint32_t *)v52 + 5);
  }
  if ( v2 < 0 )
  {
    v43 = 4 * v2;
    do
    {
      v44 = (uint32_t *)(*((uint32_t *)v1 + 4) + v43);
      if ( v44 != nullptr )
        *v44 = 0;
      v43 += 4;
      ++v2;
    }
    while ( v2 != 0 );
  }
  v45 = *((uint32_t *)v1 + 7);
  *((uint32_t *)v1 + 5) = 0;
  if ( v45 == 0 )
  {
    v46 = *((gameswf::Self **)v1 + 4);
    *((uint32_t *)v1 + 6) = 0;
    if ( v46 != nullptr )
      gameswf::free_internal(v46);
    *((uint32_t *)v1 + 4) = 0;
  }
  v47 = *((uint32_t *)v1 + 1);
  if ( v47 < 0 )
  {
    v48 = 4 * v47;
    do
    {
      v49 = (uint32_t *)(v48 + *(uint32_t *)v1);
      if ( v49 != nullptr )
        *v49 = 0;
      v48 += 4;
      ++v47;
    }
    while ( v47 != 0 );
  }
  v50 = *((uint32_t *)v1 + 3);
  *((uint32_t *)v1 + 1) = 0;
  if ( v50 == 0 )
  {
    v51 = *(gameswf::Self **)v1;
    v42 = *(uint32_t *)v1 == 0;
    *((uint32_t *)v1 + 2) = 0;
    if ( !v42 )
      gameswf::free_internal(v51);
    *(uint32_t *)v1 = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::MeshSet::Destroy  (binary VA: 0x10dc280)
// Original: gameswf::MeshSet::~MeshSet
// ----------------------------------------------------------------------------
void gameswf::MeshSet::Destroy(gameswf::MeshSet::Self *self)
{
  uint32_t *v1;
  int v2;
  int i;
  int v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  uint32_t *v8;

  v1 = (uint32_t *)((char *)self + 4);
  v2 = *((uint32_t *)self + 2);
  if ( v2 <= 0 )
  {
    if ( v2 < 0 )
    {
      v7 = 32 * v2;
      do
      {
        v8 = (uint32_t *)(*v1 + v7);
        if ( v8 != nullptr )
        {
          *v8 = 0;
          v8[1] = 0;
          v8[2] = 0;
          v8[3] = 0;
          v8[4] = 0;
          v8[5] = 0;
          v8[6] = 0;
          v8[7] = 0;
        }
        v7 += 32;
        ++v2;
      }
      while ( v2 != 0 );
    }
  }
  else
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = i;
      gameswf::MeshSet::layer::Destroy((gameswf::MeshSet::layer::Self *)(*v1 + 32 * v4));
    }
  }
  v5 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 2) = 0;
  if ( v5 == 0 )
  {
    v6 = *((gameswf::Self **)self + 1);
    *((uint32_t *)self + 3) = 0;
    if ( v6 != nullptr )
      gameswf::free_internal(v6);
    *((uint32_t *)self + 1) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::MeshSet::new_layer  (binary VA: 0x10dc750)
// Original: gameswf::MeshSet::new_layer
// ----------------------------------------------------------------------------
char * gameswf::MeshSet::new_layer(gameswf::MeshSet::Self *self)
{
  int v1;
  int v2;
  int v3;
  char *result;
  char *v5;
  int v6;
  gameswf::Self *v7;

  v1 = *((uint32_t *)self + 2);
  v2 = v1 + 1;
  if ( v1 == -1 || (v3 = *((uint32_t *)self + 3), v2 <= v3) || *((uint32_t *)self + 4) != 0 )
  {
    result = *((char **)self + 1);
  }
  else
  {
    v6 = v2 + (v2 >> 1);
    *((uint32_t *)self + 3) = v6;
    if ( v6 != 0 )
    {
      v7 = *((gameswf::Self **)self + 1);
      if ( v7 != nullptr )
        result = (char *)gameswf::realloc_internal(v7, 32 * v6, 32 * v3);
      else
        result = (char *)gameswf::malloc_internal(32 * v6);
      *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
    }
    else
    {
      if ( *((uint32_t *)self + 1) != 0 )
        gameswf::free_internal(*((gameswf::Self **)self + 1));
      *((uint32_t *)self + 1) = 0;
      result = nullptr;
    }
  }
  v5 = &result[32 * v1];
  if ( v5 != nullptr )
  {
    *(uint32_t *)v5 = 0;
    *((uint32_t *)v5 + 1) = 0;
    *((uint32_t *)v5 + 2) = 0;
    *((uint32_t *)v5 + 3) = 0;
    *((uint32_t *)v5 + 4) = 0;
    *((uint32_t *)v5 + 5) = 0;
    *((uint32_t *)v5 + 6) = 0;
    *((uint32_t *)v5 + 7) = 0;
  }
  *((uint32_t *)self + 2) = v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MeshSet::display  (binary VA: 0x10dc850)
// Original: gameswf::MeshSet::display
// ----------------------------------------------------------------------------
int gameswf::MeshSet::display(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5)
{
  uint32_t *v5;
  int result;
  uint32_t *v7;
  int v8;
  int i;
  gameswf::Mesh::Self *v10;
  int v11;
  gameswf::LineStrip::Self *v12;
  int v13;

  v5 = (uint32_t *)(gameswf::s_render_handler);
  if ( gameswf::s_render_handler != nullptr )
  {
    gameswf::s_render_handler[29] = *a2;
    v5[30] = a2[1];
    v5[31] = a2[2];
    v5[32] = a2[3];
    v5[33] = a2[4];
    v5[34] = a2[5];
    v5[35] = *a3;
    v5[36] = a3[1];
    v5[37] = a3[2];
    v5[38] = a3[3];
    v5[39] = a3[4];
    v5[40] = a3[5];
    v5[41] = a3[6];
    v5[42] = a3[7];
  }
  result = a1;
  if ( *(int *)(a1 + 8) > 0 )
  {
    v13 = 0;
    do
    {
      v7 = (uint32_t *)(*(uint32_t *)(a1 + 4) + 32 * v13);
      v8 = v7[1];
      if ( v8 > 0 )
      {
        for ( i = 0; i < v8; ++i )
        {
          v10 = *(gameswf::Mesh::Self **)(*v7 + 4 * i);
          if ( v10 != nullptr )
          {
            gameswf::Mesh::display(v10, (const gameswf::BaseFillStyle::Self *)(*a4 + 84 * i), 1.0);
            v8 = v7[1];
          }
        }
      }
      if ( (int)v7[5] > 0 )
      {
        v11 = 0;
        do
        {
          v12 = *(gameswf::LineStrip::Self **)(v7[4] + 4 * v11++);
          gameswf::LineStrip::display(v12, (const gameswf::BaseLineStyle::Self *)(*a5 + 108 * *(uint32_t *)v12), 1.0);
        }
        while ( v7[5] > v11 );
      }
      result = a1;
      ++v13;
    }
    while ( *(uint32_t *)(a1 + 8) > v13 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MeshSet::display  (binary VA: 0x10dc9b0)
// Original: gameswf::MeshSet::display
// ----------------------------------------------------------------------------
int gameswf::MeshSet::display(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, float a6)
{
  uint32_t *v6;
  int result;
  uint32_t *v8;
  int v9;
  int i;
  gameswf::Mesh::Self *v11;
  int v12;
  gameswf::LineStrip::Self *v13;
  int v14;

  v6 = (uint32_t *)(gameswf::s_render_handler);
  if ( gameswf::s_render_handler != nullptr )
  {
    gameswf::s_render_handler[29] = *a2;
    v6[30] = a2[1];
    v6[31] = a2[2];
    v6[32] = a2[3];
    v6[33] = a2[4];
    v6[34] = a2[5];
    v6[35] = *a3;
    v6[36] = a3[1];
    v6[37] = a3[2];
    v6[38] = a3[3];
    v6[39] = a3[4];
    v6[40] = a3[5];
    v6[41] = a3[6];
    v6[42] = a3[7];
  }
  result = *(uint32_t *)(a1 + 8);
  if ( result > 0 )
  {
    v14 = 0;
    do
    {
      v8 = (uint32_t *)(*(uint32_t *)(a1 + 4) + 32 * v14);
      v9 = v8[1];
      if ( v9 > 0 )
      {
        for ( i = 0; i < v9; ++i )
        {
          v11 = *(gameswf::Mesh::Self **)(*v8 + 4 * i);
          if ( v11 != nullptr )
          {
            gameswf::Mesh::display(v11, (const gameswf::BaseFillStyle::Self *)(*a4 + 156 * i), a6);
            v9 = v8[1];
          }
        }
      }
      if ( (int)v8[5] > 0 )
      {
        v12 = 0;
        do
        {
          v13 = *(gameswf::LineStrip::Self **)(v8[4] + 4 * v12++);
          gameswf::LineStrip::display(v13, (const gameswf::BaseLineStyle::Self *)(*a5 + 16 * *(uint32_t *)v13), a6);
        }
        while ( v8[5] > v12 );
      }
      result = a1;
      ++v14;
    }
    while ( *(uint32_t *)(a1 + 8) > v14 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MeshSet::expandStylesToInclude  (binary VA: 0x10dcb30)
// Original: gameswf::MeshSet::expandStylesToInclude
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::MeshSet::expandStylesToInclude(gameswf::MeshSet::Self *self, int a2)
{
  int v2;
  int v3;
  gameswf::Self *result;
  int v5;
  gameswf::Self *v6;
  int i;
  gameswf::Mesh::Self *v8;
  int v9;
  int v10;

  v2 = *((uint32_t *)self + 1) + 32 * (*((uint32_t *)self + 2) - 1);
  v3 = *(uint32_t *)(v2 + 4);
  if ( v3 > a2 )
  {
    result = *(gameswf::Self **)(*(uint32_t *)v2 + 4 * a2);
    if ( result != nullptr )
      return result;
LABEL_11:
    v8 = (gameswf::Mesh::Self *)opNew(0x74u);
    gameswf::Mesh::Mesh(v8);
    result = *(gameswf::Self **)v2;
    *(uint32_t *)(*(uint32_t *)v2 + 4 * a2) = (uint32_t)(uintptr_t)(v8);
    return result;
  }
  v5 = a2 + 1;
  if ( a2 == -1 || (v9 = *(uint32_t *)(v2 + 8), v5 <= v9) || *(uint32_t *)(v2 + 12) != 0 )
  {
    v6 = *(gameswf::Self **)v2;
  }
  else
  {
    v10 = v5 + (v5 >> 1);
    *(uint32_t *)(v2 + 8) = v10;
    if ( v10 != 0 )
    {
      if ( *(uint32_t *)v2 != 0 )
        v6 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)v2, 4 * v10, 4 * v9);
      else
        v6 = (gameswf::Self *)gameswf::malloc_internal(4 * v10);
      *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v6);
    }
    else
    {
      if ( *(uint32_t *)v2 != 0 )
        gameswf::free_internal(*(gameswf::Self **)v2);
      *(uint32_t *)v2 = 0;
      v6 = nullptr;
    }
  }
  for ( i = 4 * v3; v5 > v3; i += 4 )
  {
    if ( (gameswf::Self *)((char *)v6 + i) != nullptr )
    {
      *(uint32_t *)((char *)v6 + i) = 0;
      v6 = *(gameswf::Self **)v2;
    }
    ++v3;
  }
  *(uint32_t *)(v2 + 4) = v5;
  result = *((gameswf::Self **)v6 + a2);
  if ( result == nullptr )
    goto LABEL_11;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::MeshSet::setTriStrip  (binary VA: 0x10dcc90)
// Original: gameswf::MeshSet::setTriStrip
// ----------------------------------------------------------------------------
float * gameswf::MeshSet::setTriStrip(gameswf::MeshSet::Self *self, int a2, const gameswf::Point::Self *a3, int a4)
{
  gameswf::MeshSet::expandStylesToInclude(self, a2);
  return gameswf::Mesh::setTriStrip(
           *(gameswf::Mesh::Self **)(*(uint32_t *)(*((uint32_t *)self + 1) + 32 * (*((uint32_t *)self + 2) - 1)) + 4 * a2),
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MeshSet::getMutableMesh  (binary VA: 0x10dcd00)
// Original: gameswf::MeshSet::getMutableMesh
// ----------------------------------------------------------------------------
int gameswf::MeshSet::getMutableMesh(gameswf::MeshSet::Self *self, int a2)
{
  gameswf::MeshSet::expandStylesToInclude(self, a2);
  return *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 1) + 32 * (*((uint32_t *)self + 2) - 1)) + 4 * a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::MeshSet::addLineStrip  (binary VA: 0x10dcd60)
// Original: gameswf::MeshSet::addLineStrip
// ----------------------------------------------------------------------------
gameswf::LineStrip::Self ** gameswf::MeshSet::addLineStrip(gameswf::MeshSet::Self *self, int a2, const gameswf::Point::Self *a3, int a4)
{
  gameswf::LineStrip::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char *v9;
  gameswf::LineStrip::Self **result;
  int v11;

  v4 = (gameswf::LineStrip::Self *)opNew(0x24u);
  gameswf::LineStrip::Construct(v4, a2, a3, a4);
  v5 = *((uint32_t *)self + 1) + 32 * (*((uint32_t *)self + 2) - 1);
  v6 = *(uint32_t *)(v5 + 20);
  v7 = *(uint32_t *)(v5 + 24);
  v8 = v6 + 1;
  if ( v6 + 1 <= v7 || *(uint32_t *)(v5 + 28) != 0 )
  {
    v9 = *(char **)(v5 + 16);
  }
  else
  {
    v11 = v8 + (v8 >> 1);
    *(uint32_t *)(v5 + 24) = v11;
    if ( v11 != 0 )
    {
      if ( *(uint32_t *)(v5 + 16) != 0 )
        v9 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(v5 + 16), 4 * v11, 4 * v7);
      else
        v9 = (char *)gameswf::malloc_internal(4 * v11);
      *(uint32_t *)(v5 + 16) = (uint32_t)(uintptr_t)(v9);
      v6 = *(uint32_t *)(v5 + 20);
    }
    else
    {
      if ( *(uint32_t *)(v5 + 16) != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)(v5 + 16));
        v6 = *(uint32_t *)(v5 + 20);
      }
      *(uint32_t *)(v5 + 16) = 0;
      v9 = nullptr;
    }
  }
  result = (gameswf::LineStrip::Self **)&v9[4 * v6];
  if ( result != nullptr )
    *result = v4;
  *(uint32_t *)(v5 + 20) = v8;
  return result;
}


