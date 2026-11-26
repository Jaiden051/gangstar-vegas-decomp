#include "Core/Utils/DecompTypes.h"
#include "gameswf_ShapeCharacterDef.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ShapeCharacterDef::getBoundInternal  (binary VA: 0x10da850)
// Original: gameswf::ShapeCharacterDef::getBoundInternal
// ----------------------------------------------------------------------------
gameswf::Rect::Self * gameswf::ShapeCharacterDef::getBoundInternal(gameswf::ShapeCharacterDef::Self *self, gameswf::Rect::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 19);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 20);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 21);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 22);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ShapeCharacterDef::createCharacterInstance  (binary VA: 0x10da870)
// Original: gameswf::ShapeCharacterDef::createCharacterInstance
// ----------------------------------------------------------------------------
int gameswf::ShapeCharacterDef::createCharacterInstance(gameswf::ShapeCharacterDef::Self *self, gameswf::Character::Self *a2, int a3)
{
  gameswf::Player::Self *v3;
  gameswf::Self *v4;

  v3 = *((gameswf::Player::Self **)self + 6);
  if ( v3 != nullptr )
  {
    v4 = *((gameswf::Self **)self + 5);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 6) = 0;
      v3 = nullptr;
    }
  }
  return gameswf::Player::createGenericCharacter(v3, self, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ShapeCharacterDef::pointTestLocal  (binary VA: 0x10daf60)
// Original: gameswf::ShapeCharacterDef::pointTestLocal
// ----------------------------------------------------------------------------
int gameswf::ShapeCharacterDef::pointTestLocal(gameswf::ShapeCharacterDef::Self *self, int64_t a2)
{
  int result;
  int v3;
  int v4;

  result = 0;
  if ( *(float *)&a2 >= *((float *)self + 19)
    && *(float *)&a2 <= *((float *)self + 20)
    && *((float *)&a2 + 1) >= *((float *)self + 21)
    && *((float *)&a2 + 1) <= *((float *)self + 22)
    && *((int *)self + 16) > 0 )
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      result = gameswf::Path::pointTest(
                 (gameswf::Path::Self *)(v3 + *((uint32_t *)self + 15)),
                 *(float *)&a2,
                 *((float *)&a2 + 1));
      if ( (uint8_t)result != 0 )
        break;
      ++v4;
      v3 += 40;
      if ( v4 >= *((uint32_t *)self + 16) )
        return result;
    }
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ShapeCharacterDef::createMeshSet  (binary VA: 0x10dbe30)
// Original: gameswf::ShapeCharacterDef::createMeshSet
// ----------------------------------------------------------------------------
gameswf::MeshSet::Self * gameswf::ShapeCharacterDef::createMeshSet(gameswf::ShapeCharacterDef::Self *self, const gameswf::ShapeCharacterDef::Self *a2)
{
  gameswf::MeshSet::Self *v2;

  v2 = (gameswf::MeshSet::Self *)opNew(0x14u);
  gameswf::MeshSet::Construct(v2, self, a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ShapeCharacterDef::Destroy  (binary VA: 0x10dc360)
// Original: gameswf::ShapeCharacterDef::~ShapeCharacterDef
// ----------------------------------------------------------------------------
void gameswf::ShapeCharacterDef::Destroy(gameswf::ShapeCharacterDef::Self *self)
{
  int v1;
  int i;
  int v3;
  gameswf::Self *v4;
  int v5;
  uint32_t *v6;
  gameswf::ShapeCharacterDef::Self *v7;
  int v8;
  gameswf::Self *v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  gameswf::Self *v16;
  int v17;
  int v18;
  int v19;
  gameswf::Self *v20;
  uint32_t *v21;
  int v22;
  int j;
  void (***v24)(uint32_t, int);
  int v25;
  gameswf::Self *v26;
  uint32_t *v27;
  int v28;
  int k;
  void (***v30)(uint32_t);
  int v31;
  gameswf::Self *v32;
  gameswf::Self *v33;
  bool v34;
  gameswf::Self *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  uint32_t *v41;
  int v42;
  int v43;
  int v44;
  uint32_t *v45;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F368);
  v1 = *((uint32_t *)self + 29);
  if ( v1 > 0 )
  {
    for ( i = 0; i < v1; ++i )
    {
      v3 = *((uint32_t *)self + 28);
      v4 = *(gameswf::Self **)(v3 + 4 * i);
      if ( v4 != nullptr )
      {
        gameswf::MeshSet::Destroy(*(gameswf::MeshSet::Self **)(v3 + 4 * i));
        v40 = 0;
        gameswf::free_internal(v4);
        v1 = *((uint32_t *)self + 29);
      }
    }
  }
  if ( v1 < 0 )
  {
    v5 = 4 * v1;
    do
    {
      v6 = (uint32_t *)(*((uint32_t *)self + 28) + v5);
      if ( v6 != nullptr )
        *v6 = 0;
      v5 += 4;
      ++v1;
    }
    while ( v1 != 0 );
  }
  v7 = self;
  v8 = *((uint32_t *)self + 31);
  *((uint32_t *)self + 29) = 0;
  if ( v8 == 0 )
  {
    v9 = *((gameswf::Self **)self + 28);
    v10 = *((uint32_t *)self + 30);
    *((uint32_t *)self + 30) = 0;
    if ( v9 != nullptr )
    {
      v40 = 4 * v10;
      gameswf::free_internal(v9);
    }
    v7 = self;
    *((uint32_t *)self + 28) = 0;
  }
  v11 = *((uint32_t *)v7 + 16);
  v45 = (uint32_t *)((char *)self + 60);
  v44 = v11;
  if ( v11 <= 0 )
  {
    if ( v11 < 0 )
    {
      v36 = v11;
      v37 = 40 * v11;
      do
      {
        if ( *v45 + v37 != 0 )
          gameswf::Path::Construct((gameswf::Path::Self *)(*v45 + v37));
        v37 += 40;
        ++v36;
      }
      while ( v36 != 0 );
    }
  }
  else
  {
    v42 = 0;
    v43 = 0;
    do
    {
      v41 = (uint32_t *)(*v45 + v42);
      v12 = v41 + 5;
      v13 = v41[6];
      if ( v13 < 0 )
      {
        v14 = 16 * v13;
        do
        {
          if ( *v12 + v14 != 0 )
            gameswf::Edge::Construct((gameswf::Edge::Self *)(*v12 + v14));
          v14 += 16;
          ++v13;
        }
        while ( v13 != 0 );
      }
      v15 = v41[8];
      v41[6] = 0;
      if ( v15 == 0 )
      {
        v16 = (gameswf::Self *)v41[5];
        v17 = v41[7];
        v41[7] = 0;
        if ( v16 != nullptr )
        {
          v40 = 16 * v17;
          gameswf::free_internal(v16);
        }
        v41[5] = 0;
      }
      ++v43;
      v42 += 40;
    }
    while ( v43 != v44 );
  }
  v18 = *((uint32_t *)self + 18);
  *((uint32_t *)self + 16) = 0;
  if ( v18 == 0 )
  {
    v19 = *((uint32_t *)self + 17);
    *((uint32_t *)self + 17) = 0;
    v20 = *((gameswf::Self **)self + 15);
    if ( v20 != nullptr )
    {
      v40 = 40 * v19;
      gameswf::free_internal(v20);
    }
    *((uint32_t *)self + 15) = 0;
  }
  v21 = (uint32_t *)((char *)self + 44);
  v22 = *((uint32_t *)self + 12);
  if ( v22 <= 0 )
  {
    if ( v22 < 0 )
    {
      v39 = 108 * v22;
      do
      {
        if ( *v21 + v39 != 0 )
          gameswf::LineStyle::Construct((gameswf::LineStyle::Self *)(*v21 + v39));
        v39 += 108;
        ++v22;
      }
      while ( v22 != 0 );
    }
  }
  else
  {
    for ( j = 0; j != v22; ++j )
    {
      v24 = (void (***)(uint32_t, int))(*v21 + 108 * j);
      (**v24)((uint32_t)(uintptr_t)(v24), v40);
    }
  }
  v25 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 12) = 0;
  if ( v25 == 0 )
  {
    v26 = *((gameswf::Self **)self + 11);
    *((uint32_t *)self + 13) = 0;
    if ( v26 != nullptr )
      gameswf::free_internal(v26);
    *((uint32_t *)self + 11) = 0;
  }
  v27 = (uint32_t *)((char *)self + 28);
  v28 = *((uint32_t *)self + 8);
  if ( v28 <= 0 )
  {
    if ( v28 < 0 )
    {
      v38 = 84 * v28;
      do
      {
        if ( *v27 + v38 != 0 )
          gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)(*v27 + v38));
        v38 += 84;
        ++v28;
      }
      while ( v28 != 0 );
    }
  }
  else
  {
    for ( k = 0; k != v28; ++k )
    {
      v30 = (void (***)(uint32_t))(*v27 + 84 * k);
      (**v30)((uint32_t)(uintptr_t)(v30));
    }
  }
  v31 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 8) = 0;
  if ( v31 == 0 )
  {
    v32 = *((gameswf::Self **)self + 7);
    *((uint32_t *)self + 9) = 0;
    if ( v32 != nullptr )
      gameswf::free_internal(v32);
    *((uint32_t *)self + 7) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E728);
  v33 = *((gameswf::Self **)self + 5);
  if ( v33 != nullptr )
  {
    v34 = (*(uint16_t *)v33)-- == 1;
    if ( v34 )
      gameswf::free_internal(v33);
  }
  v35 = *((gameswf::Self **)self + 3);
  if ( v35 != nullptr )
  {
    v34 = (*(uint16_t *)v35)-- == 1;
    if ( v34 )
      gameswf::free_internal(v35);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ShapeCharacterDef::Destroy_ea10dc710  (binary VA: 0x10dc710)
// Original: gameswf::ShapeCharacterDef::~ShapeCharacterDef
// ----------------------------------------------------------------------------
void gameswf::ShapeCharacterDef::Destroy_ea10dc710(gameswf::ShapeCharacterDef::Self *self)
{
  gameswf::ShapeCharacterDef::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x10dce80 (size: 293 bytes)
// Symbol:    _ZN7gameswf17ShapeCharacterDefC1EPNS_6PlayerE
// Demangled: gameswf::ShapeCharacterDef::ShapeCharacterDef(gameswf::Player *)
// ============================================================================
// Alternative name is '_ZN7gameswf17ShapeCharacterDefC2EPNS_6PlayerE'
void (**gameswf::ShapeCharacterDef::ShapeCharacterDef(
        gameswf::Self **self,
        gameswf::Player::Self *a2))(gameswf::ShapeCharacterDef::Self * self)
{
  gameswf::Self *WeakProxy;
  gameswf::Self *v3;
  gameswf::Self *v6;

  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)self);
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208E728);
  *(self + 3) = nullptr;
  *(self + 4) = nullptr;
  *(self + 5) = nullptr;
  *(self + 6) = (gameswf::Self *)(a2);
  if ( a2 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
    v3 = *(self + 5);
    if ( WeakProxy != v3 )
    {
      if ( v3 != nullptr && (*(uint16_t *)v3)-- == 1 )
      {
        v6 = WeakProxy;
        gameswf::free_internal(v3);
        WeakProxy = v6;
      }
      *(self + 5) = WeakProxy;
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  *(self + 7) = nullptr;
  *(self + 8) = nullptr;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208F368);
  *(self + 9) = nullptr;
  *(self + 10) = nullptr;
  *(self + 11) = nullptr;
  *(self + 12) = nullptr;
  *(self + 13) = nullptr;
  *(self + 14) = nullptr;
  *(self + 15) = nullptr;
  *(self + 16) = nullptr;
  *(self + 17) = nullptr;
  *(self + 18) = nullptr;
  *((uint8_t *)self + 108) = 0;
  *((uint8_t *)self + 109) = 0;
  *(self + 28) = nullptr;
  *(self + 29) = nullptr;
  *(self + 30) = nullptr;
  *(self + 31) = nullptr;
  return (void (**)(gameswf::ShapeCharacterDef::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208F368));
}
// ----------------------------------------------------------------------------
// Function: gameswf::ShapeCharacterDef::opAssign  (binary VA: 0x10dcfb0)
// Original: gameswf::ShapeCharacterDef::operator=
// ----------------------------------------------------------------------------
gameswf::ShapeCharacterDef::Self * gameswf::ShapeCharacterDef::opAssign(gameswf::ShapeCharacterDef::Self *self, const gameswf::ShapeCharacterDef::Self *a2)
{
  uint32_t *v2;
  gameswf::Self *v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  int v6;
  void (***v7)(uint32_t);
  int v8;
  int v9;
  gameswf::ShapeCharacterDef::Self *v10;
  int v11;
  gameswf::Self *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  bool v17;
  gameswf::Self *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  gameswf::RefCounted::Self *v25;
  gameswf::RefCounted::Self *v26;
  gameswf::RefCounted::Self *v27;
  gameswf::RefCounted::Self *v28;
  gameswf::Self *v29;
  uint32_t *v30;
  gameswf::Self *v31;
  gameswf::Self *v32;
  int v33;
  void (***v34)(uint32_t, size_t);
  int v35;
  int v36;
  gameswf::ShapeCharacterDef::Self *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  gameswf::Self *v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  gameswf::RefCounted::Self *v51;
  gameswf::RefCounted::Self *v52;
  gameswf::RefCounted::Self *v53;
  gameswf::RefCounted::Self *v54;
  gameswf::Self *v55;
  gameswf::Self *v56;
  uint32_t *v57;
  int v58;
  int v59;
  int v60;
  gameswf::Self *v61;
  int v62;
  int v63;
  gameswf::ShapeCharacterDef::Self *v64;
  int *v65;
  char *v66;
  int v67;
  int v68;
  uint32_t *v69;
  gameswf::Self *v70;
  int v71;
  uint32_t *v72;
  int v73;
  int v74;
  int v75;
  int v76;
  char *v78;
  gameswf::Self *v79;
  void *v80;
  char *v81;
  char *v82;
  char *v83;
  gameswf::Self *v84;
  gameswf::Self *v85;
  gameswf::Self *v86;
  size_t v87;
  int v88;
  int v89;
  int v90;
  int v91;
  gameswf::Self *v92;
  gameswf::Self *v93;
  gameswf::Self *v94;
  gameswf::Self *v95;
  gameswf::Self *v96;
  gameswf::Self *v97;
  int v98;
  gameswf::Self *v99;
  int v100;
  gameswf::Self *v101;
  int *v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  uint32_t *v108;
  gameswf::Self *v109;
  gameswf::Self *v110;
  gameswf::Self *v111;
  int v112;
  int v113;
  int v114;
  uint32_t *v115;
  int v116;
  gameswf::Self *v117;
  char *v118;

  v2 = (uint32_t *)((char *)self + 28);
  v3 = *((gameswf::Self **)a2 + 8);
  v4 = *((gameswf::Self **)self + 8);
  v92 = v3;
  if ( (int)(uintptr_t)(v3) < (int)(uintptr_t)(v4) )
  {
    v97 = *((gameswf::Self **)self + 8);
    v5 = *((gameswf::Self **)a2 + 8);
    v6 = 84 * (uint32_t)(uintptr_t)(v3);
    do
    {
      v5 = (gameswf::Self *)((char *)v5 + 1);
      v7 = (void (***)(uint32_t))(*v2 + v6);
      v6 += 84;
      (**v7)((uint32_t)(uintptr_t)(v7));
    }
    while ( v5 != v97 );
    v4 = v97;
  }
  if ( v92 != nullptr )
  {
    v8 = *((uint32_t *)self + 9);
    if ( (int)(uintptr_t)(v92) > v8 && *((uint32_t *)self + 10) == 0 )
    {
      v81 = (char *)v92 + ((int)(uintptr_t)(v92) >> 1);
      *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v81);
      if ( v81 != nullptr )
      {
        v86 = *((gameswf::Self **)self + 7);
        if ( v86 != nullptr )
        {
          *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v86, 84 * (uint32_t)(uintptr_t)(v81), 84 * v8));
        }
        else
        {
          v87 = 0;
          *((uint32_t *)self + 7) = gameswf::malloc_internal(84 * (uint32_t)(uintptr_t)(v81));
        }
      }
      else
      {
        if ( *((uint32_t *)self + 7) != 0 )
        {
          v87 = 84 * v8;
          gameswf::free_internal(*((gameswf::Self **)self + 7));
        }
        *((uint32_t *)self + 7) = 0;
      }
    }
  }
  if ( (int)(uintptr_t)(v92) > (int)(uintptr_t)(v4) )
  {
    v9 = 84 * (uint32_t)(uintptr_t)(v4);
    do
    {
      if ( *v2 + v9 != 0 )
        gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)(*v2 + v9));
      v4 = (gameswf::Self *)((char *)v4 + 1);
      v9 += 84;
    }
    while ( v4 != v92 );
  }
  v10 = self;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v92);
  if ( (int)(uintptr_t)(v92) > 0 )
  {
    v98 = 0;
    v10 = self;
    do
    {
      v11 = *((uint32_t *)v10 + 7) + 84 * v98;
      v12 = (gameswf::Self *)(*((uint32_t *)a2 + 7) + 84 * v98);
      v13 = *(uint32_t *)(v11 + 40);
      *(uint32_t *)(v11 + 4) = *((uint32_t *)v12 + 1);
      *(uint32_t *)(v11 + 8) = *((uint32_t *)v12 + 2);
      *(uint32_t *)(v11 + 12) = *((uint32_t *)v12 + 3);
      *(uint32_t *)(v11 + 16) = *((uint32_t *)v12 + 4);
      *(uint32_t *)(v11 + 20) = *((uint32_t *)v12 + 5);
      *(uint32_t *)(v11 + 24) = *((uint32_t *)v12 + 6);
      *(uint32_t *)(v11 + 28) = *((uint32_t *)v12 + 7);
      *(uint32_t *)(v11 + 32) = *((uint32_t *)v12 + 8);
      v14 = *((uint32_t *)v12 + 10);
      if ( v14 != 0 )
      {
        v15 = *(uint32_t *)(v11 + 44);
        if ( v14 > v15 && *(uint32_t *)(v11 + 48) == 0 )
        {
          v16 = v14 + (v14 >> 1);
          v17 = v16 == 0;
          v103 = v16;
          *(uint32_t *)(v11 + 44) = v16;
          v18 = *(gameswf::Self **)(v11 + 36);
          if ( v17 )
          {
            if ( v18 != nullptr )
            {
              v88 = v13;
              v87 = 5 * v15;
              gameswf::free_internal(v18);
              v13 = v88;
            }
            *(uint32_t *)(v11 + 36) = 0;
          }
          else
          {
            v91 = v13;
            if ( v18 != nullptr )
            {
              *(uint32_t *)(v11 + 36) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)(v11 + 36), 5 * v103, 5 * v15));
            }
            else
            {
              v87 = 0;
              *(uint32_t *)(v11 + 36) = gameswf::malloc_internal(5 * v103);
            }
            v13 = v91;
          }
        }
      }
      if ( v14 > v13 )
      {
        v93 = v12;
        v19 = v11;
        v104 = v14;
        v20 = 5 * v13;
        v21 = 5 * v14;
        do
        {
          if ( *(uint32_t *)(v19 + 36) + v20 != 0 )
            gameswf::gradientRecord::gradientRecord((gameswf::gradientRecord::Self *)(*(uint32_t *)(v19 + 36) + v20));
          v20 += 5;
        }
        while ( v20 != v21 );
        v11 = v19;
        v14 = v104;
        v12 = v93;
      }
      *(uint32_t *)(v11 + 40) = v14;
      if ( v14 > 0 )
      {
        v22 = 0;
        v105 = 0;
        do
        {
          v23 = *((uint32_t *)v12 + 9);
          v24 = *(uint32_t *)(v11 + 36);
          ++v105;
          *(uint32_t *)(v24 + v22) = *(uint32_t *)(v23 + v22);
          *(uint8_t *)(v24 + v22 + 4) = *(uint8_t *)(v23 + v22 + 4);
          v22 += 5;
        }
        while ( v105 < *(uint32_t *)(v11 + 40) );
      }
      v25 = *((gameswf::RefCounted::Self **)v12 + 13);
      v26 = *(gameswf::RefCounted::Self **)(v11 + 52);
      if ( v25 != v26 )
      {
        if ( v26 != nullptr )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v11 + 52));
        *(uint32_t *)(v11 + 52) = (uint32_t)(uintptr_t)(v25);
        if ( v25 != nullptr )
          gameswf::RefCounted::addRef(v25);
      }
      v27 = *((gameswf::RefCounted::Self **)v12 + 14);
      v28 = *(gameswf::RefCounted::Self **)(v11 + 56);
      if ( v27 != v28 )
      {
        if ( v28 != nullptr )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v11 + 56));
        *(uint32_t *)(v11 + 56) = (uint32_t)(uintptr_t)(v27);
        if ( v27 != nullptr )
          gameswf::RefCounted::addRef(v27);
      }
      ++v98;
      *(uint32_t *)(v11 + 60) = *((uint32_t *)v12 + 15);
      *(uint32_t *)(v11 + 64) = *((uint32_t *)v12 + 16);
      *(uint32_t *)(v11 + 68) = *((uint32_t *)v12 + 17);
      *(uint32_t *)(v11 + 72) = *((uint32_t *)v12 + 18);
      *(uint32_t *)(v11 + 76) = *((uint32_t *)v12 + 19);
      *(uint32_t *)(v11 + 80) = *((uint32_t *)v12 + 20);
      v10 = self;
    }
    while ( v98 < *((uint32_t *)self + 8) );
  }
  v29 = *((gameswf::Self **)v10 + 12);
  v30 = (uint32_t *)((char *)self + 44);
  v31 = *((gameswf::Self **)a2 + 12);
  v94 = v31;
  if ( (int)(uintptr_t)(v31) < (int)(uintptr_t)(v29) )
  {
    v99 = *((gameswf::Self **)v10 + 12);
    v32 = *((gameswf::Self **)a2 + 12);
    v33 = 108 * (uint32_t)(uintptr_t)(v31);
    do
    {
      v32 = (gameswf::Self *)((char *)v32 + 1);
      v34 = (void (***)(uint32_t, size_t))(*v30 + v33);
      v33 += 108;
      (**v34)((uint32_t)(uintptr_t)(v34), v87);
    }
    while ( v32 != v99 );
    v29 = v99;
  }
  if ( v94 != nullptr )
  {
    v35 = *((uint32_t *)self + 13);
    if ( (int)(uintptr_t)(v94) > v35 && *((uint32_t *)self + 14) == 0 )
    {
      v82 = (char *)v94 + ((int)(uintptr_t)(v94) >> 1);
      *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v82);
      if ( v82 != nullptr )
      {
        v85 = *((gameswf::Self **)self + 11);
        if ( v85 != nullptr )
          *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v85, 108 * (uint32_t)(uintptr_t)(v82), 108 * v35));
        else
          *((uint32_t *)self + 11) = gameswf::malloc_internal(108 * (uint32_t)(uintptr_t)(v82));
      }
      else
      {
        if ( *((uint32_t *)self + 11) != 0 )
          gameswf::free_internal(*((gameswf::Self **)self + 11));
        *((uint32_t *)self + 11) = 0;
      }
    }
  }
  if ( (int)(uintptr_t)(v94) > (int)(uintptr_t)(v29) )
  {
    v36 = 108 * (uint32_t)(uintptr_t)(v29);
    do
    {
      if ( *v30 + v36 != 0 )
        gameswf::LineStyle::Construct((gameswf::LineStyle::Self *)(*v30 + v36));
      v29 = (gameswf::Self *)((char *)v29 + 1);
      v36 += 108;
    }
    while ( v29 != v94 );
  }
  v37 = self;
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v94);
  if ( (int)(uintptr_t)(v94) > 0 )
  {
    v106 = 0;
    v37 = self;
    do
    {
      v38 = *((uint32_t *)v37 + 11) + 108 * v106;
      v39 = *((uint32_t *)a2 + 11) + 108 * v106;
      v40 = v38 + 12;
      *(uint32_t *)(v38 + 4) = *(uint32_t *)(v39 + 4);
      *(uint32_t *)(v38 + 8) = *(uint32_t *)(v39 + 8);
      *(uint32_t *)(v38 + 16) = *(uint32_t *)(v39 + 16);
      *(uint32_t *)(v38 + 20) = *(uint32_t *)(v39 + 20);
      *(uint32_t *)(v38 + 24) = *(uint32_t *)(v39 + 24);
      *(uint32_t *)(v38 + 28) = *(uint32_t *)(v39 + 28);
      *(uint32_t *)(v38 + 32) = *(uint32_t *)(v39 + 32);
      *(uint32_t *)(v38 + 36) = *(uint32_t *)(v39 + 36);
      *(uint32_t *)(v38 + 40) = *(uint32_t *)(v39 + 40);
      *(uint32_t *)(v38 + 44) = *(uint32_t *)(v39 + 44);
      v41 = *(uint32_t *)(v39 + 52);
      v100 = v41;
      v42 = *(uint32_t *)(v38 + 52);
      if ( v41 != 0 )
      {
        v43 = *(uint32_t *)(v38 + 56);
        if ( v41 > v43 && *(uint32_t *)(v38 + 60) == 0 )
        {
          v44 = v41 + (v41 >> 1);
          v17 = v44 == 0;
          v112 = v44;
          *(uint32_t *)(v38 + 56) = v44;
          v45 = *(gameswf::Self **)(v38 + 48);
          if ( v17 )
          {
            if ( v45 != nullptr )
            {
              v89 = v42;
              gameswf::free_internal(v45);
              v42 = v89;
            }
            *(uint32_t *)(v38 + 48) = 0;
          }
          else
          {
            v90 = v42;
            if ( v45 != nullptr )
              *(uint32_t *)(v38 + 48) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)(v38 + 48), 5 * v112, 5 * v43));
            else
              *(uint32_t *)(v38 + 48) = gameswf::malloc_internal(5 * v112);
            v42 = v90;
          }
        }
      }
      if ( v100 > v42 )
      {
        v113 = v38;
        v46 = v38 + 12;
        v47 = 5 * v42;
        do
        {
          if ( *(uint32_t *)(v46 + 36) + v47 != 0 )
            gameswf::gradientRecord::gradientRecord((gameswf::gradientRecord::Self *)(*(uint32_t *)(v46 + 36) + v47));
          v47 += 5;
        }
        while ( v47 != 5 * v100 );
        v40 = v46;
        v38 = v113;
      }
      *(uint32_t *)(v38 + 52) = v100;
      if ( v100 > 0 )
      {
        v48 = 0;
        v109 = (gameswf::Self *)v38;
        v114 = 0;
        do
        {
          v49 = *(uint32_t *)(v40 + 36);
          ++v114;
          v50 = *(uint32_t *)(v39 + 48);
          *(uint32_t *)(v49 + v48) = *(uint32_t *)(v50 + v48);
          *(uint8_t *)(v49 + v48 + 4) = *(uint8_t *)(v50 + v48 + 4);
          v48 += 5;
        }
        while ( v114 < *(uint32_t *)(v40 + 40) );
        v38 = (int)(uintptr_t)(v109);
      }
      v51 = *(gameswf::RefCounted::Self **)(v39 + 64);
      v52 = *(gameswf::RefCounted::Self **)(v38 + 64);
      if ( v51 != v52 )
      {
        if ( v52 != nullptr )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v38 + 64));
        *(uint32_t *)(v38 + 64) = (uint32_t)(uintptr_t)(v51);
        if ( v51 != nullptr )
          gameswf::RefCounted::addRef(v51);
      }
      v53 = *(gameswf::RefCounted::Self **)(v39 + 68);
      v54 = *(gameswf::RefCounted::Self **)(v38 + 68);
      if ( v53 != v54 )
      {
        if ( v54 != nullptr )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v38 + 68));
        *(uint32_t *)(v38 + 68) = (uint32_t)(uintptr_t)(v53);
        if ( v53 != nullptr )
          gameswf::RefCounted::addRef(v53);
      }
      ++v106;
      *(uint32_t *)(v38 + 72) = *(uint32_t *)(v39 + 72);
      *(uint32_t *)(v38 + 76) = *(uint32_t *)(v39 + 76);
      *(uint32_t *)(v38 + 80) = *(uint32_t *)(v39 + 80);
      *(uint32_t *)(v38 + 84) = *(uint32_t *)(v39 + 84);
      *(uint32_t *)(v38 + 88) = *(uint32_t *)(v39 + 88);
      *(uint32_t *)(v38 + 92) = *(uint32_t *)(v39 + 92);
      *(uint8_t *)(v38 + 96) = *(uint8_t *)(v39 + 96);
      *(uint8_t *)(v38 + 97) = *(uint8_t *)(v39 + 97);
      *(uint8_t *)(v38 + 98) = *(uint8_t *)(v39 + 98);
      *(uint8_t *)(v38 + 99) = *(uint8_t *)(v39 + 99);
      *(uint8_t *)(v38 + 100) = *(uint8_t *)(v39 + 100);
      *(uint8_t *)(v38 + 101) = *(uint8_t *)(v39 + 101);
      *(uint8_t *)(v38 + 102) = *(uint8_t *)(v39 + 102);
      *(uint8_t *)(v38 + 103) = *(uint8_t *)(v39 + 103);
      *(uint16_t *)(v38 + 104) = *(uint16_t *)(v39 + 104);
      v37 = self;
    }
    while ( v106 < *((uint32_t *)self + 12) );
  }
  v55 = *((gameswf::Self **)v37 + 16);
  v115 = (uint32_t *)((char *)self + 60);
  v56 = *((gameswf::Self **)a2 + 16);
  v110 = v56;
  if ( (int)(uintptr_t)(v56) < (int)(uintptr_t)(v55) )
  {
    v101 = *((gameswf::Self **)a2 + 16);
    v117 = *((gameswf::Self **)v37 + 16);
    v107 = 40 * (uint32_t)(uintptr_t)(v56);
    do
    {
      v95 = (gameswf::Self *)(*v115 + v107);
      v57 = (uint32_t *)((char *)v95 + 20);
      v58 = *((uint32_t *)v95 + 6);
      if ( v58 < 0 )
      {
        v59 = 16 * v58;
        do
        {
          if ( *v57 + v59 != 0 )
            gameswf::Edge::Construct((gameswf::Edge::Self *)(*v57 + v59));
          v59 += 16;
          ++v58;
        }
        while ( v58 != 0 );
      }
      v60 = *((uint32_t *)v95 + 8);
      *((uint32_t *)v95 + 6) = 0;
      if ( v60 == 0 )
      {
        v61 = *((gameswf::Self **)v95 + 5);
        *((uint32_t *)v95 + 7) = 0;
        if ( v61 != nullptr )
          gameswf::free_internal(v61);
        *((uint32_t *)v95 + 5) = 0;
      }
      v101 = (gameswf::Self *)((char *)v101 + 1);
      v107 += 40;
    }
    while ( v101 != v117 );
    v55 = v117;
  }
  if ( v110 != nullptr )
  {
    v62 = *((uint32_t *)self + 17);
    if ( (int)(uintptr_t)(v110) > v62 && *((uint32_t *)self + 18) == 0 )
    {
      v83 = (char *)v110 + ((int)(uintptr_t)(v110) >> 1);
      *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(v83);
      if ( v83 != nullptr )
      {
        v84 = *((gameswf::Self **)self + 15);
        if ( v84 != nullptr )
          *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v84, 40 * (uint32_t)(uintptr_t)(v83), 40 * v62));
        else
          *((uint32_t *)self + 15) = gameswf::malloc_internal(40 * (uint32_t)(uintptr_t)(v83));
      }
      else
      {
        if ( *((uint32_t *)self + 15) != 0 )
          gameswf::free_internal(*((gameswf::Self **)self + 15));
        *((uint32_t *)self + 15) = 0;
      }
    }
  }
  v63 = 40 * (uint32_t)(uintptr_t)(v55);
  if ( (int)(uintptr_t)(v110) > (int)(uintptr_t)(v55) )
  {
    do
    {
      if ( *v115 + v63 != 0 )
        gameswf::Path::Construct((gameswf::Path::Self *)(*v115 + v63));
      v55 = (gameswf::Self *)((char *)v55 + 1);
      v63 += 40;
    }
    while ( v55 != v110 );
  }
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(v110);
  if ( (int)(uintptr_t)(v110) > 0 )
  {
    v111 = nullptr;
    v116 = 0;
    v64 = self;
    do
    {
      v108 = (uint32_t *)((char *)v111 + *((uint32_t *)v64 + 15));
      v65 = (int *)(v108 + 5);
      v66 = (char *)v111 + *((uint32_t *)a2 + 15);
      *v108 = *(uint32_t *)v66;
      v108[1] = *((uint32_t *)v66 + 1);
      v108[2] = *((uint32_t *)v66 + 2);
      v108[3] = *((uint32_t *)v66 + 3);
      v108[4] = *((uint32_t *)v66 + 4);
      v96 = *((gameswf::Self **)v66 + 6);
      v102 = (int *)(v66 + 20);
      v67 = v108[6];
      if ( v96 != nullptr )
      {
        v68 = v108[7];
        if ( (int)(uintptr_t)(v96) > v68 && v108[8] == 0 )
        {
          v78 = (char *)v96 + ((int)(uintptr_t)(v96) >> 1);
          v108[7] = (uint32_t)(uintptr_t)(v78);
          if ( v78 != nullptr )
          {
            v79 = (gameswf::Self *)v108[5];
            if ( v79 != nullptr )
              v80 = gameswf::realloc_internal(v79, 16 * (uint32_t)(uintptr_t)(v78), 16 * v68);
            else
              v80 = (void *)gameswf::malloc_internal(16 * (uint32_t)(uintptr_t)(v78));
            v108[5] = (uint32_t)(uintptr_t)(v80);
          }
          else
          {
            if ( v108[5] != 0 )
              gameswf::free_internal((gameswf::Self *)v108[5]);
            v108[5] = 0;
          }
        }
      }
      if ( (int)(uintptr_t)(v96) > v67 )
      {
        v118 = v66;
        v69 = v108 + 5;
        v70 = (gameswf::Self *)v67;
        v71 = 16 * v67;
        do
        {
          if ( *v69 + v71 != 0 )
            gameswf::Edge::Construct((gameswf::Edge::Self *)(*v69 + v71));
          v70 = (gameswf::Self *)((char *)v70 + 1);
          v71 += 16;
        }
        while ( v70 != v96 );
        v65 = (int *)(v108 + 5);
        v66 = v118;
      }
      v72 = v108;
      v108[6] = (uint32_t)(uintptr_t)(v96);
      if ( (int)(uintptr_t)(v96) > 0 )
      {
        v73 = 0;
        do
        {
          v74 = 16 * v73;
          v75 = *v65;
          ++v73;
          v76 = *v102;
          *(uint32_t *)(v75 + v74) = *(uint32_t *)(*v102 + v74);
          *(uint32_t *)(v75 + v74 + 4) = *(uint32_t *)(v76 + v74 + 4);
          *(uint32_t *)(v75 + v74 + 8) = *(uint32_t *)(v76 + v74 + 8);
          *(uint32_t *)(v75 + v74 + 12) = *(uint32_t *)(v76 + v74 + 12);
        }
        while ( v73 < v65[1] );
        v72 = v108;
      }
      ++v116;
      *((uint8_t *)v72 + 36) = v66[36];
      v64 = self;
      v111 = (gameswf::Self *)((char *)v111 + 40);
    }
    while ( v116 < *((uint32_t *)self + 16) );
  }
  *((uint32_t *)self + 19) = *((uint32_t *)a2 + 19);
  *((uint32_t *)self + 20) = *((uint32_t *)a2 + 20);
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 21);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 22);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 23);
  *((uint32_t *)self + 24) = *((uint32_t *)a2 + 24);
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 25);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 26);
  *((uint8_t *)self + 108) = *((uint8_t *)a2 + 108);
  *((uint8_t *)self + 109) = *((uint8_t *)a2 + 109);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ShapeCharacterDef::read  (binary VA: 0x10ddab0)
// Original: gameswf::ShapeCharacterDef::read
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ShapeCharacterDef::read(gameswf::Self **self, gameswf::Stream::Self *a2, signed int a3, bool a4, gameswf::MovieDefinitionSub::Self *a5)
{
  gameswf::ShapeCharacterDef::Self *v5;
  int v6;
  int v7;
  char *v8;
  char *v9;
  int v10;
  char *v11;
  int v12;
  bool v13;
  int v14;
  int v15;
  int v16;
  uint8_t v17;
  int v18;
  int v19;
  gameswf::Self *v20;
  int v21;
  gameswf::Self *v22;
  int v23;
  int v24;
  void (***v25)(uint32_t, int);
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  gameswf::Self *v33;
  int v34;
  gameswf::Self *v35;
  int v36;
  int v37;
  void (***v38)(uint32_t);
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  float v47; // xmm0_4
  float v48; // xmm1_4
  int v49;
  gameswf::Self *v50;
  g4_int128_t *v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  float v57; // xmm1_4
  float v58; // xmm0_4
  int v59;
  int v60;
  int v61;
  gameswf::Self *v62;
  g4_int128_t *v63;
  int v64;
  int v65;
  gameswf::Self *result;
  int v67;
  int v68;
  char *v69;
  char *v70;
  int v71;
  char *v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  char *v78;
  char *v79;
  int v80;
  char *v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  char *v88;
  char *v89;
  int v90;
  char *v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  char *v97;
  char *v98;
  int v99;
  char *v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  char *v106;
  char *v107;
  int v108;
  char *v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  gameswf::Self *v120;
  int v121;
  int v122;
  int v123;
  gameswf::Self *v124;
  int v125;
  gameswf::Self *v126;
  int v127;
  int v128;
  void (***v129)(uint32_t, int);
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  gameswf::Self *v137;
  int v138;
  gameswf::Self *v139;
  int v140;
  int v141;
  void (***v142)(uint32_t, int);
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  char *v150;
  char *v151;
  int v152;
  char *v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  gameswf::Self *v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  gameswf::Self *v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  gameswf::Self *v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  gameswf::Self *v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  gameswf::Self *v196;
  int v197;
  char U8;
  int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  gameswf::Self *v205;
  int v206;
  int v207;
  int v208;
  typedef gameswf::FillStyle::Self *_g4_t_v209;
  typedef gameswf::LineStyle::Self *_g4_t_v210;
  typedef gameswf::FillStyle::Self *_g4_t_v211;
  typedef gameswf::LineStyle::Self *_g4_t_v212;
  typedef int _g4_t_v213;
  typedef int _g4_t_v214;
  typedef unsigned int _g4_t_v215;
  typedef unsigned int _g4_t_v216;
  typedef float _g4_t_v217;
  typedef float _g4_t_SInt;
  typedef unsigned int _g4_t_v219;
  typedef float _g4_t_v220;
  typedef int _g4_t_v221;
  typedef int _g4_t_v222;
  typedef int _g4_t_v223;
  typedef int _g4_t_v224;
  typedef int _g4_t_v225;
  typedef int _g4_t_v226;
  typedef int _g4_t_v227;
  typedef int _g4_t_v228;
  typedef int _g4_t_v229;
  typedef int _g4_t_v230;
  typedef int _g4_t_v231;
  typedef float _g4_t_v232;
  typedef char *_g4_t_v233;
  typedef gameswf::ShapeCharacterDef::Self *_g4_t_v234;
  typedef int _g4_t_v235;
  typedef gameswf::Self **_g4_t_v236;
  typedef int _g4_t_v237;
  typedef gameswf::Self **_g4_t_v238;
  typedef int _g4_t_v239;
  typedef int _g4_t_v240;
  typedef int *_g4_t_v241;
  typedef int _g4_t_v242;
  typedef int _g4_t_v243;
  typedef float _g4_t_v244;
  typedef int *_g4_t_v245;
  typedef gameswf::Self **_g4_t_v246;
  typedef char *_g4_t_v247;
  typedef int _g4_t_v248;
  typedef int _g4_t_v249;
  typedef gameswf::Self **_g4_t_v250;
  typedef int _g4_t_v251;
  typedef gameswf::Self **_g4_t_v252;
  typedef char *_g4_t_v253;
  typedef gameswf::ShapeCharacterDef::Self *_g4_t_v254;
  typedef char *_g4_t_v255;
  typedef gameswf::ShapeCharacterDef::Self *_g4_t_v256;
  typedef int _g4_t_v257;
  typedef int _g4_t_v258;
  typedef char *_g4_t_v259;
  typedef gameswf::ShapeCharacterDef::Self *_g4_t_v260;
  typedef int _g4_t_v261;
  typedef int _g4_t_v262;
  typedef gameswf::Self **_g4_t_v263;
  typedef gameswf::Self **_g4_t_v264;
  typedef int *_g4_t_v265;
  typedef int *_g4_t_v266;
  typedef int _g4_t_UInt;
  typedef int *_g4_t_v268;
  typedef int _g4_t_v269;
  typedef int _g4_t_v270;
  typedef int *_g4_t_v271;
  typedef int _g4_t_v272;
  typedef int _g4_t_U16;
  typedef int _g4_t_v274;
  typedef int _g4_t_v275;
  typedef char *_g4_t_v276;
  typedef gameswf::ShapeCharacterDef::Self *_g4_t_v277;
  typedef int _g4_t_v278;
  typedef gameswf::Self **_g4_t_v279;
  typedef int _g4_t_v280;
  typedef gameswf::Self **_g4_t_v281;
  typedef char *_g4_t_v282;
  typedef gameswf::ShapeCharacterDef::Self *_g4_t_v283;
  typedef int _g4_t_v284;
  typedef gameswf::Self **_g4_t_v285;
  typedef int _g4_t_v286;
  typedef gameswf::Self **_g4_t_v287;
  typedef int *_g4_t_v288;
  typedef g4_int128_t _g4_t_v289;
  typedef g4_int128_t _g4_t_v290;
  typedef int _g4_t_v291;
  typedef int _g4_t_v292;
  typedef int _g4_t_v293;
  typedef float _g4_t_v294;
  typedef float _g4_t_v295;
  typedef gameswf::Self *_g4_t_v296;
  typedef int _g4_t_v297;
  typedef int _g4_t_v298;
  typedef gameswf::Self *_g4_t_v299;
  typedef char _g4_t_v300;
  typedef uint8_t _g4_t_v301[20];
  typedef gameswf::Self *_g4_t_v302;
  typedef int _g4_t_v303;
  typedef int _g4_t_v304;
  typedef int _g4_t_v305;
  typedef char _g4_t_v306;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v209)) > _g4_s0 ? (0u + sizeof(_g4_t_v209)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v210)) > _g4_s1 ? (0u + sizeof(_g4_t_v210)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v211)) > _g4_s2 ? (0u + sizeof(_g4_t_v211)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v212)) > _g4_s3 ? (0u + sizeof(_g4_t_v212)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v213)) > _g4_s4 ? (4u + sizeof(_g4_t_v213)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v214)) > _g4_s5 ? (4u + sizeof(_g4_t_v214)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v215)) > _g4_s6 ? (8u + sizeof(_g4_t_v215)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v216)) > _g4_s7 ? (32u + sizeof(_g4_t_v216)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v217)) > _g4_s8 ? (48u + sizeof(_g4_t_v217)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_SInt)) > _g4_s9 ? (48u + sizeof(_g4_t_SInt)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v219)) > _g4_s10 ? (64u + sizeof(_g4_t_v219)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v220)) > _g4_s11 ? (64u + sizeof(_g4_t_v220)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v221)) > _g4_s12 ? (64u + sizeof(_g4_t_v221)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v222)) > _g4_s13 ? (64u + sizeof(_g4_t_v222)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v223)) > _g4_s14 ? (64u + sizeof(_g4_t_v223)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v224)) > _g4_s15 ? (64u + sizeof(_g4_t_v224)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v225)) > _g4_s16 ? (64u + sizeof(_g4_t_v225)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v226)) > _g4_s17 ? (64u + sizeof(_g4_t_v226)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v227)) > _g4_s18 ? (64u + sizeof(_g4_t_v227)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v228)) > _g4_s19 ? (92u + sizeof(_g4_t_v228)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v229)) > _g4_s20 ? (96u + sizeof(_g4_t_v229)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v230)) > _g4_s21 ? (100u + sizeof(_g4_t_v230)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v231)) > _g4_s22 ? (104u + sizeof(_g4_t_v231)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v232)) > _g4_s23 ? (112u + sizeof(_g4_t_v232)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v233)) > _g4_s24 ? (112u + sizeof(_g4_t_v233)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v234)) > _g4_s25 ? (112u + sizeof(_g4_t_v234)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v235)) > _g4_s26 ? (112u + sizeof(_g4_t_v235)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v236)) > _g4_s27 ? (112u + sizeof(_g4_t_v236)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v237)) > _g4_s28 ? (112u + sizeof(_g4_t_v237)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v238)) > _g4_s29 ? (112u + sizeof(_g4_t_v238)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v239)) > _g4_s30 ? (116u + sizeof(_g4_t_v239)) : _g4_s30,
    _g4_s32 = (116u + sizeof(_g4_t_v240)) > _g4_s31 ? (116u + sizeof(_g4_t_v240)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v241)) > _g4_s32 ? (116u + sizeof(_g4_t_v241)) : _g4_s32,
    _g4_s34 = (116u + sizeof(_g4_t_v242)) > _g4_s33 ? (116u + sizeof(_g4_t_v242)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v243)) > _g4_s34 ? (116u + sizeof(_g4_t_v243)) : _g4_s34,
    _g4_s36 = (120u + sizeof(_g4_t_v244)) > _g4_s35 ? (120u + sizeof(_g4_t_v244)) : _g4_s35,
    _g4_s37 = (120u + sizeof(_g4_t_v245)) > _g4_s36 ? (120u + sizeof(_g4_t_v245)) : _g4_s36,
    _g4_s38 = (120u + sizeof(_g4_t_v246)) > _g4_s37 ? (120u + sizeof(_g4_t_v246)) : _g4_s37,
    _g4_s39 = (124u + sizeof(_g4_t_v247)) > _g4_s38 ? (124u + sizeof(_g4_t_v247)) : _g4_s38,
    _g4_s40 = (128u + sizeof(_g4_t_v248)) > _g4_s39 ? (128u + sizeof(_g4_t_v248)) : _g4_s39,
    _g4_s41 = (128u + sizeof(_g4_t_v249)) > _g4_s40 ? (128u + sizeof(_g4_t_v249)) : _g4_s40,
    _g4_s42 = (128u + sizeof(_g4_t_v250)) > _g4_s41 ? (128u + sizeof(_g4_t_v250)) : _g4_s41,
    _g4_s43 = (128u + sizeof(_g4_t_v251)) > _g4_s42 ? (128u + sizeof(_g4_t_v251)) : _g4_s42,
    _g4_s44 = (128u + sizeof(_g4_t_v252)) > _g4_s43 ? (128u + sizeof(_g4_t_v252)) : _g4_s43,
    _g4_s45 = (128u + sizeof(_g4_t_v253)) > _g4_s44 ? (128u + sizeof(_g4_t_v253)) : _g4_s44,
    _g4_s46 = (128u + sizeof(_g4_t_v254)) > _g4_s45 ? (128u + sizeof(_g4_t_v254)) : _g4_s45,
    _g4_s47 = (128u + sizeof(_g4_t_v255)) > _g4_s46 ? (128u + sizeof(_g4_t_v255)) : _g4_s46,
    _g4_s48 = (128u + sizeof(_g4_t_v256)) > _g4_s47 ? (128u + sizeof(_g4_t_v256)) : _g4_s47,
    _g4_s49 = (128u + sizeof(_g4_t_v257)) > _g4_s48 ? (128u + sizeof(_g4_t_v257)) : _g4_s48,
    _g4_s50 = (128u + sizeof(_g4_t_v258)) > _g4_s49 ? (128u + sizeof(_g4_t_v258)) : _g4_s49,
    _g4_s51 = (128u + sizeof(_g4_t_v259)) > _g4_s50 ? (128u + sizeof(_g4_t_v259)) : _g4_s50,
    _g4_s52 = (128u + sizeof(_g4_t_v260)) > _g4_s51 ? (128u + sizeof(_g4_t_v260)) : _g4_s51,
    _g4_s53 = (128u + sizeof(_g4_t_v261)) > _g4_s52 ? (128u + sizeof(_g4_t_v261)) : _g4_s52,
    _g4_s54 = (128u + sizeof(_g4_t_v262)) > _g4_s53 ? (128u + sizeof(_g4_t_v262)) : _g4_s53,
    _g4_s55 = (132u + sizeof(_g4_t_v263)) > _g4_s54 ? (132u + sizeof(_g4_t_v263)) : _g4_s54,
    _g4_s56 = (132u + sizeof(_g4_t_v264)) > _g4_s55 ? (132u + sizeof(_g4_t_v264)) : _g4_s55,
    _g4_s57 = (132u + sizeof(_g4_t_v265)) > _g4_s56 ? (132u + sizeof(_g4_t_v265)) : _g4_s56,
    _g4_s58 = (132u + sizeof(_g4_t_v266)) > _g4_s57 ? (132u + sizeof(_g4_t_v266)) : _g4_s57,
    _g4_s59 = (136u + sizeof(_g4_t_UInt)) > _g4_s58 ? (136u + sizeof(_g4_t_UInt)) : _g4_s58,
    _g4_s60 = (136u + sizeof(_g4_t_v268)) > _g4_s59 ? (136u + sizeof(_g4_t_v268)) : _g4_s59,
    _g4_s61 = (136u + sizeof(_g4_t_v269)) > _g4_s60 ? (136u + sizeof(_g4_t_v269)) : _g4_s60,
    _g4_s62 = (136u + sizeof(_g4_t_v270)) > _g4_s61 ? (136u + sizeof(_g4_t_v270)) : _g4_s61,
    _g4_s63 = (136u + sizeof(_g4_t_v271)) > _g4_s62 ? (136u + sizeof(_g4_t_v271)) : _g4_s62,
    _g4_s64 = (136u + sizeof(_g4_t_v272)) > _g4_s63 ? (136u + sizeof(_g4_t_v272)) : _g4_s63,
    _g4_s65 = (136u + sizeof(_g4_t_U16)) > _g4_s64 ? (136u + sizeof(_g4_t_U16)) : _g4_s64,
    _g4_s66 = (136u + sizeof(_g4_t_v274)) > _g4_s65 ? (136u + sizeof(_g4_t_v274)) : _g4_s65,
    _g4_s67 = (140u + sizeof(_g4_t_v275)) > _g4_s66 ? (140u + sizeof(_g4_t_v275)) : _g4_s66,
    _g4_s68 = (140u + sizeof(_g4_t_v276)) > _g4_s67 ? (140u + sizeof(_g4_t_v276)) : _g4_s67,
    _g4_s69 = (140u + sizeof(_g4_t_v277)) > _g4_s68 ? (140u + sizeof(_g4_t_v277)) : _g4_s68,
    _g4_s70 = (140u + sizeof(_g4_t_v278)) > _g4_s69 ? (140u + sizeof(_g4_t_v278)) : _g4_s69,
    _g4_s71 = (140u + sizeof(_g4_t_v279)) > _g4_s70 ? (140u + sizeof(_g4_t_v279)) : _g4_s70,
    _g4_s72 = (140u + sizeof(_g4_t_v280)) > _g4_s71 ? (140u + sizeof(_g4_t_v280)) : _g4_s71,
    _g4_s73 = (140u + sizeof(_g4_t_v281)) > _g4_s72 ? (140u + sizeof(_g4_t_v281)) : _g4_s72,
    _g4_s74 = (140u + sizeof(_g4_t_v282)) > _g4_s73 ? (140u + sizeof(_g4_t_v282)) : _g4_s73,
    _g4_s75 = (140u + sizeof(_g4_t_v283)) > _g4_s74 ? (140u + sizeof(_g4_t_v283)) : _g4_s74,
    _g4_s76 = (140u + sizeof(_g4_t_v284)) > _g4_s75 ? (140u + sizeof(_g4_t_v284)) : _g4_s75,
    _g4_s77 = (140u + sizeof(_g4_t_v285)) > _g4_s76 ? (140u + sizeof(_g4_t_v285)) : _g4_s76,
    _g4_s78 = (140u + sizeof(_g4_t_v286)) > _g4_s77 ? (140u + sizeof(_g4_t_v286)) : _g4_s77,
    _g4_s79 = (140u + sizeof(_g4_t_v287)) > _g4_s78 ? (140u + sizeof(_g4_t_v287)) : _g4_s78,
    _g4_s80 = (140u + sizeof(_g4_t_v288)) > _g4_s79 ? (140u + sizeof(_g4_t_v288)) : _g4_s79,
    _g4_s81 = (144u + sizeof(_g4_t_v289)) > _g4_s80 ? (144u + sizeof(_g4_t_v289)) : _g4_s80,
    _g4_s82 = (160u + sizeof(_g4_t_v290)) > _g4_s81 ? (160u + sizeof(_g4_t_v290)) : _g4_s81,
    _g4_s83 = (176u + sizeof(_g4_t_v291)) > _g4_s82 ? (176u + sizeof(_g4_t_v291)) : _g4_s82,
    _g4_s84 = (180u + sizeof(_g4_t_v292)) > _g4_s83 ? (180u + sizeof(_g4_t_v292)) : _g4_s83,
    _g4_s85 = (184u + sizeof(_g4_t_v293)) > _g4_s84 ? (184u + sizeof(_g4_t_v293)) : _g4_s84,
    _g4_s86 = (188u + sizeof(_g4_t_v294)) > _g4_s85 ? (188u + sizeof(_g4_t_v294)) : _g4_s85,
    _g4_s87 = (192u + sizeof(_g4_t_v295)) > _g4_s86 ? (192u + sizeof(_g4_t_v295)) : _g4_s86,
    _g4_s88 = (196u + sizeof(_g4_t_v296)) > _g4_s87 ? (196u + sizeof(_g4_t_v296)) : _g4_s87,
    _g4_s89 = (200u + sizeof(_g4_t_v297)) > _g4_s88 ? (200u + sizeof(_g4_t_v297)) : _g4_s88,
    _g4_s90 = (204u + sizeof(_g4_t_v298)) > _g4_s89 ? (204u + sizeof(_g4_t_v298)) : _g4_s89,
    _g4_s91 = (208u + sizeof(_g4_t_v299)) > _g4_s90 ? (208u + sizeof(_g4_t_v299)) : _g4_s90,
    _g4_s92 = (212u + sizeof(_g4_t_v300)) > _g4_s91 ? (212u + sizeof(_g4_t_v300)) : _g4_s91,
    _g4_s93 = (224u + sizeof(_g4_t_v301)) > _g4_s92 ? (224u + sizeof(_g4_t_v301)) : _g4_s92,
    _g4_s94 = (244u + sizeof(_g4_t_v302)) > _g4_s93 ? (244u + sizeof(_g4_t_v302)) : _g4_s93,
    _g4_s95 = (248u + sizeof(_g4_t_v303)) > _g4_s94 ? (248u + sizeof(_g4_t_v303)) : _g4_s94,
    _g4_s96 = (252u + sizeof(_g4_t_v304)) > _g4_s95 ? (252u + sizeof(_g4_t_v304)) : _g4_s95,
    _g4_s97 = (256u + sizeof(_g4_t_v305)) > _g4_s96 ? (256u + sizeof(_g4_t_v305)) : _g4_s96,
    _g4_s98 = (260u + sizeof(_g4_t_v306)) > _g4_s97 ? (260u + sizeof(_g4_t_v306)) : _g4_s97
  };
  alignas(16) uint8_t _g4_sf[_g4_s98];
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 0u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 0u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 0u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 0u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 4u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 4u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 8u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 32u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 48u);
  _g4_t_SInt &SInt = *reinterpret_cast<_g4_t_SInt *>(_g4_sf + 48u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 64u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 64u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 64u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 64u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 64u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 64u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 64u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 64u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 64u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 92u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 96u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 100u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 104u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 112u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 112u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 112u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 112u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 112u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 112u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 112u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 116u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 116u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 116u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 116u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 116u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 120u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 120u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 120u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 124u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 128u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 128u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 128u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 128u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 128u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 128u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 128u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 128u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 128u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 128u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 128u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 128u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 128u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 128u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 128u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 132u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 132u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 132u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 132u);
  _g4_t_UInt &UInt = *reinterpret_cast<_g4_t_UInt *>(_g4_sf + 136u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 136u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 136u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 136u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 136u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 136u);
  _g4_t_U16 &U16 = *reinterpret_cast<_g4_t_U16 *>(_g4_sf + 136u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 136u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 140u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 140u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 140u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 140u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 140u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 140u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 140u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 140u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 140u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 140u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 140u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 140u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 140u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 140u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 144u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 160u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 176u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 180u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 184u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 188u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 192u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 196u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 200u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 204u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 208u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 212u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 224u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 244u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 248u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 252u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 256u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 260u);

  v5 = (gameswf::ShapeCharacterDef::Self *)self;
  if ( a4 )
  {
    gameswf::Rect::read((gameswf::Rect::Self *)(self + 19), a2);
    if ( a3 == 83 )
    {
      gameswf::Rect::read((gameswf::Rect::Self *)(self + 23), a2);
      U8 = gameswf::Stream::readU8(a2);
      *((uint8_t *)self + 108) = (U8 & 2) != 0;
      *((uint8_t *)self + 109) = U8 & 1;
      v272 = (uint8_t)gameswf::Stream::readU8(a2);
    }
    else
    {
      v272 = (uint8_t)gameswf::Stream::readU8(a2);
      if ( a3 <= 2 )
      {
LABEL_223:
        if ( v272 != 0 )
        {
          v122 = (int)(uintptr_t)(*(self + 8)) + v272;
          v261 = (int)(uintptr_t)(*(self + 8));
          v284 = v122;
          if ( *(self + 10) != nullptr )
          {
            v126 = *(self + 7);
            v125 = (int)(uintptr_t)(*(self + 8));
          }
          else
          {
            v123 = (int)(uintptr_t)(*(self + 9));
            v124 = *(self + 7);
            *(self + 9) = (gameswf::Self *)v122;
            if ( v122 != 0 )
            {
              if ( v124 != nullptr )
              {
                v126 = (gameswf::Self *)gameswf::realloc_internal(v124, 84 * v122, 84 * v123);
              }
              else
              {
                v214 = 0;
                v126 = (gameswf::Self *)gameswf::malloc_internal(84 * v122);
              }
              *(self + 7) = v126;
              v125 = (int)(uintptr_t)(*(self + 8));
            }
            else
            {
              v125 = v261;
              if ( v124 != nullptr )
              {
                v214 = 84 * v123;
                gameswf::free_internal(v124);
                v125 = (int)(uintptr_t)(*(self + 8));
              }
              *(self + 7) = nullptr;
              v126 = nullptr;
            }
          }
          if ( v284 < v125 )
          {
            v235 = v125;
            v127 = v284;
            v128 = 84 * v284;
            while ( 1 )
            {
              v129 = (void (***)(uint32_t, int))((char *)v126 + v128);
              ++v127;
              v128 += 84;
              (**v129)((uint32_t)(uintptr_t)(v129), v214);
              if ( v127 == v235 )
                break;
              v126 = *(self + 7);
            }
            v5 = (gameswf::ShapeCharacterDef::Self *)self;
            v125 = v235;
            v126 = *(self + 7);
          }
          if ( v284 != 0 )
          {
            v130 = *((uint32_t *)v5 + 9);
            if ( v284 > v130 && *((uint32_t *)v5 + 10) == 0 )
            {
              v208 = v284 + (v284 >> 1);
              *((uint32_t *)v5 + 9) = v208;
              if ( v208 != 0 )
              {
                if ( v126 != nullptr )
                  v126 = (gameswf::Self *)gameswf::realloc_internal(v126, 84 * v208, 84 * v130);
                else
                  v126 = (gameswf::Self *)gameswf::malloc_internal(84 * v208);
                *((uint32_t *)v5 + 7) = (uint32_t)(uintptr_t)(v126);
              }
              else
              {
                if ( v126 != nullptr )
                  gameswf::free_internal(v126);
                *((uint32_t *)v5 + 7) = 0;
                v126 = nullptr;
              }
            }
          }
          if ( v284 > v125 )
          {
            v236 = (gameswf::Self **)v5;
            v131 = v125;
            v132 = 84 * v125;
            do
            {
              if ( (gameswf::Self *)((char *)v126 + v132) != nullptr )
              {
                gameswf::FillStyle::FillStyle((gameswf::Self *)((char *)v126 + v132));
                v126 = v236[7];
              }
              ++v131;
              v132 += 84;
            }
            while ( v131 != v284 );
            v5 = (gameswf::ShapeCharacterDef::Self *)v236;
          }
          *((uint32_t *)v5 + 8) = v284;
          v285 = (gameswf::Self **)v5;
          v133 = 0;
          v134 = 84 * v261;
          while ( 1 )
          {
            v211 = (gameswf::FillStyle::Self *)((gameswf::Self *)((char *)v126 + v134));
            ++v133;
            v134 += 84;
            gameswf::FillStyle::read(v211, a2, a3, a5);
            if ( v272 <= v133 )
              break;
            v126 = v285[7];
          }
          v5 = (gameswf::ShapeCharacterDef::Self *)v285;
        }
        U16 = (uint8_t)gameswf::Stream::readU8(a2);
        if ( U16 == 255 )
          U16 = (uint16_t)gameswf::Stream::readU16(a2);
        if ( U16 != 0 )
        {
          v135 = *((uint32_t *)v5 + 12) + U16;
          v262 = *((uint32_t *)v5 + 12);
          v286 = v135;
          if ( *((uint32_t *)v5 + 14) != 0 )
          {
            v139 = *((gameswf::Self **)v5 + 11);
            v138 = *((uint32_t *)v5 + 12);
          }
          else
          {
            v136 = *((uint32_t *)v5 + 13);
            v137 = *((gameswf::Self **)v5 + 11);
            *((uint32_t *)v5 + 13) = v135;
            if ( v135 != 0 )
            {
              if ( v137 != nullptr )
              {
                v139 = (gameswf::Self *)gameswf::realloc_internal(v137, 108 * v135, 108 * v136);
              }
              else
              {
                v214 = 0;
                v139 = (gameswf::Self *)gameswf::malloc_internal(108 * v135);
              }
              *((uint32_t *)v5 + 11) = (uint32_t)(uintptr_t)(v139);
              v138 = *((uint32_t *)v5 + 12);
            }
            else
            {
              v138 = v262;
              if ( v137 != nullptr )
              {
                v214 = 108 * v136;
                gameswf::free_internal(v137);
                v138 = *((uint32_t *)v5 + 12);
              }
              *((uint32_t *)v5 + 11) = 0;
              v139 = nullptr;
            }
          }
          if ( v286 < v138 )
          {
            v237 = v138;
            v246 = (gameswf::Self **)v5;
            v140 = v286;
            v141 = 108 * v286;
            while ( 1 )
            {
              v142 = (void (***)(uint32_t, int))((char *)v139 + v141);
              ++v140;
              v141 += 108;
              (**v142)((uint32_t)(uintptr_t)(v142), v214);
              if ( v140 == v237 )
                break;
              v139 = v246[11];
            }
            v5 = (gameswf::ShapeCharacterDef::Self *)v246;
            v138 = v237;
            v139 = v246[11];
          }
          if ( v286 != 0 )
          {
            v143 = *((uint32_t *)v5 + 13);
            if ( v286 > v143 && *((uint32_t *)v5 + 14) == 0 )
            {
              v207 = v286 + (v286 >> 1);
              *((uint32_t *)v5 + 13) = v207;
              if ( v207 != 0 )
              {
                if ( v139 != nullptr )
                  v139 = (gameswf::Self *)gameswf::realloc_internal(v139, 108 * v207, 108 * v143);
                else
                  v139 = (gameswf::Self *)gameswf::malloc_internal(108 * v207);
                *((uint32_t *)v5 + 11) = (uint32_t)(uintptr_t)(v139);
              }
              else
              {
                if ( v139 != nullptr )
                  gameswf::free_internal(v139);
                *((uint32_t *)v5 + 11) = 0;
                v139 = nullptr;
              }
            }
          }
          if ( v286 > v138 )
          {
            v238 = (gameswf::Self **)v5;
            v144 = v138;
            v145 = 108 * v138;
            do
            {
              if ( (gameswf::Self *)((char *)v139 + v145) != nullptr )
              {
                gameswf::LineStyle::Construct((gameswf::Self *)((char *)v139 + v145));
                v139 = v238[11];
              }
              ++v144;
              v145 += 108;
            }
            while ( v144 != v286 );
            v5 = (gameswf::ShapeCharacterDef::Self *)v238;
          }
          *((uint32_t *)v5 + 12) = v286;
          v287 = (gameswf::Self **)v5;
          v146 = 0;
          v147 = 108 * v262;
          while ( 1 )
          {
            v212 = (gameswf::LineStyle::Self *)((gameswf::Self *)((char *)v139 + v147));
            ++v146;
            v147 += 108;
            gameswf::LineStyle::read(v212, a2, a3, a5);
            if ( U16 <= v146 )
              break;
            v139 = v287[11];
          }
          v5 = (gameswf::ShapeCharacterDef::Self *)v287;
        }
        goto LABEL_2;
      }
    }
    if ( v272 == 255 )
      v272 = (uint16_t)gameswf::Stream::readU16(a2);
    goto LABEL_223;
  }
LABEL_2:
  UInt = gameswf::Stream::readUInt(a2, 4);
  v231 = gameswf::Stream::readUInt(a2, 4);
  gameswf::Path::Construct((gameswf::Path::Self *)&v291);
  v244 = 0.0;
  v232 = 0.0;
  v229 = 0;
  v230 = 0;
  while ( 1 )
  {
    while ( gameswf::Stream::readUInt(a2, 1) != 0 )
    {
      if ( gameswf::Stream::readUInt(a2, 1) != 0 )
      {
        v56 = gameswf::Stream::readUInt(a2, 4) + 2;
        if ( gameswf::Stream::readUInt(a2, 1) != 0 )
        {
          SInt = (float)(int)gameswf::Stream::readSInt(a2, v56);
          v57 = (float)(int)gameswf::Stream::readSInt(a2, v56);
          v58 = SInt;
        }
        else if ( gameswf::Stream::readUInt(a2, 1) != 0 )
        {
          v57 = (float)(int)gameswf::Stream::readSInt(a2, v56);
          v58 = 0.0;
        }
        else
        {
          v58 = (float)(int)gameswf::Stream::readSInt(a2, v56);
          v57 = 0.0;
        }
        v232 = v58 + v232;
        v244 = v57 + v244;
        gameswf::Edge::Construct((gameswf::Edge::Self *)&v290, LODWORD(v232), LODWORD(v244), LODWORD(v232), LODWORD(v244));
        v59 = v297;
        v60 = v298;
        v61 = v297 + 1;
        if ( v297 + 1 <= v298 || v299 != nullptr )
        {
          v62 = v296;
        }
        else
        {
          v113 = v61 + (v61 >> 1);
          v298 = v113;
          if ( v113 != 0 )
          {
            if ( v296 != nullptr )
              v62 = (gameswf::Self *)gameswf::realloc_internal(v296, 16 * v113, 16 * v60);
            else
              v62 = (gameswf::Self *)gameswf::malloc_internal(16 * v113);
            v296 = v62;
            v59 = v297;
          }
          else
          {
            if ( v296 != nullptr )
            {
              gameswf::free_internal(v296);
              v59 = v297;
            }
            v296 = nullptr;
            v62 = nullptr;
          }
        }
        v63 = (g4_int128_t *)((char *)v62 + 16 * v59);
        if ( v63 != nullptr )
          *v63 = v290;
        v297 = v61;
      }
      else
      {
        v44 = gameswf::Stream::readUInt(a2, 4) + 2;
        *(float *)&v216 = (float)(int)gameswf::Stream::readSInt(a2, v44) + v232;
        *(float *)&v219 = (float)(int)gameswf::Stream::readSInt(a2, v44) + v244;
        v217 = (float)(int)gameswf::Stream::readSInt(a2, v44) + *(float *)&v216;
        v215 = v219;
        v220 = (float)(int)gameswf::Stream::readSInt(a2, v44) + *(float *)&v219;
        gameswf::Edge::Construct((gameswf::Edge::Self *)&v289, v216, v215, LODWORD(v217), LODWORD(v220));
        v45 = v297;
        v46 = v298;
        v47 = v217;
        v48 = v220;
        v49 = v297 + 1;
        if ( v297 + 1 <= v298 || v299 != nullptr )
        {
          v50 = v296;
        }
        else
        {
          v114 = v49 + (v49 >> 1);
          v298 = v114;
          if ( v114 != 0 )
          {
            if ( v296 != nullptr )
            {
              v50 = (gameswf::Self *)gameswf::realloc_internal(v296, 16 * v114, 16 * v46);
              v296 = v50;
              v45 = v297;
              v47 = v217;
              v48 = v220;
            }
            else
            {
              v50 = (gameswf::Self *)gameswf::malloc_internal(16 * v114);
              v296 = v50;
              v45 = v297;
              v48 = v220;
              v47 = v217;
            }
          }
          else
          {
            if ( v296 != nullptr )
            {
              gameswf::free_internal(v296);
              v45 = v297;
              v48 = v220;
              v47 = v217;
            }
            v296 = nullptr;
            v50 = nullptr;
          }
        }
        v51 = (g4_int128_t *)((char *)v50 + 16 * v45);
        if ( v51 != nullptr )
          *v51 = v289;
        v297 = v49;
        v244 = v48;
        v232 = v47;
      }
    }
    v275 = gameswf::Stream::readUInt(a2, 5);
    if ( v275 == 0 )
      break;
    if ( (v275 & 1) != 0 )
    {
      if ( !gameswf::Path::isEmpty((gameswf::Path::Self *)&v291) )
      {
        v95 = *((uint32_t *)v5 + 16);
        v96 = *((uint32_t *)v5 + 17);
        v258 = v95 + 1;
        if ( v95 + 1 <= v96 || *((uint32_t *)v5 + 18) != 0 )
        {
          v97 = *((char **)v5 + 15);
        }
        else
        {
          v160 = v258 + (v258 >> 1);
          *((uint32_t *)v5 + 17) = v160;
          if ( v160 != 0 )
          {
            if ( *((uint32_t *)v5 + 15) != 0 )
              v97 = (char *)gameswf::realloc_internal(*((gameswf::Self **)v5 + 15), 40 * v160, 40 * v96);
            else
              v97 = (char *)gameswf::malloc_internal(40 * v160);
            *((uint32_t *)v5 + 15) = (uint32_t)(uintptr_t)(v97);
            v95 = *((uint32_t *)v5 + 16);
          }
          else
          {
            if ( *((uint32_t *)v5 + 15) != 0 )
            {
              gameswf::free_internal(*((gameswf::Self **)v5 + 15));
              v95 = *((uint32_t *)v5 + 16);
            }
            *((uint32_t *)v5 + 15) = 0;
            v97 = nullptr;
          }
        }
        v98 = &v97[40 * v95];
        v233 = v98;
        if ( v98 != nullptr )
        {
          *(uint32_t *)v98 = v291;
          *((uint32_t *)v98 + 1) = v292;
          *((uint32_t *)v98 + 2) = v293;
          *((float *)v98 + 3) = v294;
          *((float *)v98 + 4) = v295;
          v245 = (int *)(v98 + 20);
          *((uint32_t *)v98 + 5) = 0;
          *((uint32_t *)v98 + 6) = 0;
          *((uint32_t *)v98 + 7) = 0;
          *((uint32_t *)v98 + 8) = 0;
          v99 = v297;
          if ( v297 > 0 )
          {
            v184 = 0;
            v185 = v297 + (v297 >> 1);
            *((uint32_t *)v233 + 7) = v185;
            v225 = v99;
            v186 = gameswf::malloc_internal(16 * v185);
            for ( *((uint32_t *)v233 + 5) = v186; ; v186 = *((uint32_t *)v233 + 5) )
            {
              if ( v186 + 16 * v184 != 0 )
                gameswf::Edge::Construct((gameswf::Edge::Self *)(v186 + 16 * v184));
              if ( ++v184 == v225 )
                break;
            }
            *((uint32_t *)v233 + 6) = v184;
            v187 = 0;
            do
            {
              v188 = 16 * v187;
              v189 = v296;
              ++v187;
              v190 = *v245;
              *(uint32_t *)(v190 + v188) = *(uint32_t *)((char *)v296 + v188);
              *(uint32_t *)(v190 + v188 + 4) = *(uint32_t *)((char *)v189 + v188 + 4);
              *(uint32_t *)(v190 + v188 + 8) = *(uint32_t *)((char *)v189 + v188 + 8);
              *(uint32_t *)(v190 + v188 + 12) = *(uint32_t *)((char *)v189 + v188 + 12);
            }
            while ( v187 < v245[1] );
            v100 = v233;
          }
          else
          {
            *((uint32_t *)v233 + 6) = v297;
            v100 = v233;
          }
          v100[36] = v300;
        }
        v101 = v297;
        v13 = v297 < 0;
        *((uint32_t *)v5 + 16) = v258;
        if ( v13 )
        {
          v234 = v5;
          v102 = 16 * v101;
          v103 = v101;
          do
          {
            if ( (gameswf::Self *)((char *)v296 + v102) != nullptr )
              gameswf::Edge::Construct((gameswf::Self *)((char *)v296 + v102));
            v102 += 16;
            ++v103;
          }
          while ( v103 != 0 );
          v5 = v234;
        }
        v297 = 0;
      }
      v55 = gameswf::Stream::readUInt(a2, 5);
      v232 = (float)(int)gameswf::Stream::readSInt(a2, v55);
      v244 = (float)(int)gameswf::Stream::readSInt(a2, v55);
      v294 = v232;
      v295 = v244;
    }
    if ( (v275 & 2) != 0 && UInt > 0 )
    {
      if ( !gameswf::Path::isEmpty((gameswf::Path::Self *)&v291) )
      {
        v67 = *((uint32_t *)v5 + 16);
        v68 = *((uint32_t *)v5 + 17);
        v228 = v67 + 1;
        if ( v67 + 1 <= v68 || *((uint32_t *)v5 + 18) != 0 )
        {
          v69 = *((char **)v5 + 15);
        }
        else
        {
          v162 = v228 + (v228 >> 1);
          *((uint32_t *)v5 + 17) = v162;
          if ( v162 != 0 )
          {
            if ( *((uint32_t *)v5 + 15) != 0 )
              v69 = (char *)gameswf::realloc_internal(*((gameswf::Self **)v5 + 15), 40 * v162, 40 * v68);
            else
              v69 = (char *)gameswf::malloc_internal(40 * v162);
            *((uint32_t *)v5 + 15) = (uint32_t)(uintptr_t)(v69);
            v67 = *((uint32_t *)v5 + 16);
          }
          else
          {
            if ( *((uint32_t *)v5 + 15) != 0 )
            {
              gameswf::free_internal(*((gameswf::Self **)v5 + 15));
              v67 = *((uint32_t *)v5 + 16);
            }
            *((uint32_t *)v5 + 15) = 0;
            v69 = nullptr;
          }
        }
        v70 = &v69[40 * v67];
        v253 = v70;
        if ( v70 != nullptr )
        {
          *(uint32_t *)v70 = v291;
          *((uint32_t *)v70 + 1) = v292;
          *((uint32_t *)v70 + 2) = v293;
          *((float *)v70 + 3) = v294;
          *((float *)v70 + 4) = v295;
          v241 = (int *)(v70 + 20);
          *((uint32_t *)v70 + 5) = 0;
          *((uint32_t *)v70 + 6) = 0;
          *((uint32_t *)v70 + 7) = 0;
          *((uint32_t *)v70 + 8) = 0;
          v71 = v297;
          if ( v297 > 0 )
          {
            v191 = 0;
            v192 = v297 + (v297 >> 1);
            *((uint32_t *)v253 + 7) = v192;
            v226 = v71;
            v193 = gameswf::malloc_internal(16 * v192);
            for ( *((uint32_t *)v253 + 5) = v193; ; v193 = *((uint32_t *)v253 + 5) )
            {
              if ( v193 + 16 * v191 != 0 )
                gameswf::Edge::Construct((gameswf::Edge::Self *)(v193 + 16 * v191));
              if ( ++v191 == v226 )
                break;
            }
            *((uint32_t *)v253 + 6) = v191;
            v194 = 0;
            do
            {
              v195 = 16 * v194;
              v196 = v296;
              ++v194;
              v197 = *v241;
              *(uint32_t *)(v197 + v195) = *(uint32_t *)((char *)v296 + v195);
              *(uint32_t *)(v197 + v195 + 4) = *(uint32_t *)((char *)v196 + v195 + 4);
              *(uint32_t *)(v197 + v195 + 8) = *(uint32_t *)((char *)v196 + v195 + 8);
              *(uint32_t *)(v197 + v195 + 12) = *(uint32_t *)((char *)v196 + v195 + 12);
            }
            while ( v194 < v241[1] );
            v72 = v253;
          }
          else
          {
            *((uint32_t *)v253 + 6) = v297;
            v72 = v253;
          }
          v72[36] = v300;
        }
        v73 = v297;
        v13 = v297 < 0;
        *((uint32_t *)v5 + 16) = v228;
        if ( v13 )
        {
          v254 = v5;
          v74 = 16 * v73;
          v75 = v73;
          do
          {
            if ( (gameswf::Self *)((char *)v296 + v74) != nullptr )
              gameswf::Edge::Construct((gameswf::Self *)((char *)v296 + v74));
            v74 += 16;
            ++v75;
          }
          while ( v75 != 0 );
          v5 = v254;
        }
        v297 = 0;
        v294 = v232;
        v295 = v244;
      }
      v52 = gameswf::Stream::readUInt(a2, UInt);
      if ( v52 > 0 )
        v52 += v230;
      v291 = v52;
      if ( (v275 & 4) == 0 )
      {
LABEL_8:
        if ( (v275 & 8) == 0 )
          goto LABEL_9;
LABEL_95:
        if ( v231 > 0 )
        {
          if ( !gameswf::Path::isEmpty((gameswf::Path::Self *)&v291) )
          {
            v104 = *((uint32_t *)v5 + 16);
            v105 = *((uint32_t *)v5 + 17);
            v243 = v104 + 1;
            if ( v104 + 1 <= v105 || *((uint32_t *)v5 + 18) != 0 )
            {
              v106 = *((char **)v5 + 15);
            }
            else
            {
              v159 = v243 + (v243 >> 1);
              *((uint32_t *)v5 + 17) = v159;
              if ( v159 != 0 )
              {
                if ( *((uint32_t *)v5 + 15) != 0 )
                  v106 = (char *)gameswf::realloc_internal(*((gameswf::Self **)v5 + 15), 40 * v159, 40 * v105);
                else
                  v106 = (char *)gameswf::malloc_internal(40 * v159);
                *((uint32_t *)v5 + 15) = (uint32_t)(uintptr_t)(v106);
                v104 = *((uint32_t *)v5 + 16);
              }
              else
              {
                if ( *((uint32_t *)v5 + 15) != 0 )
                {
                  gameswf::free_internal(*((gameswf::Self **)v5 + 15));
                  v104 = *((uint32_t *)v5 + 16);
                }
                *((uint32_t *)v5 + 15) = 0;
                v106 = nullptr;
              }
            }
            v107 = &v106[40 * v104];
            v259 = v107;
            if ( v107 != nullptr )
            {
              *(uint32_t *)v107 = v291;
              *((uint32_t *)v107 + 1) = v292;
              *((uint32_t *)v107 + 2) = v293;
              *((float *)v107 + 3) = v294;
              *((float *)v107 + 4) = v295;
              v266 = (int *)(v107 + 20);
              *((uint32_t *)v107 + 5) = 0;
              *((uint32_t *)v107 + 6) = 0;
              *((uint32_t *)v107 + 7) = 0;
              *((uint32_t *)v107 + 8) = 0;
              v108 = v297;
              if ( v297 > 0 )
              {
                v163 = 0;
                v164 = v297 + (v297 >> 1);
                *((uint32_t *)v259 + 7) = v164;
                v222 = v108;
                v165 = gameswf::malloc_internal(16 * v164);
                for ( *((uint32_t *)v259 + 5) = v165; ; v165 = *((uint32_t *)v259 + 5) )
                {
                  if ( v165 + 16 * v163 != 0 )
                    gameswf::Edge::Construct((gameswf::Edge::Self *)(v165 + 16 * v163));
                  if ( ++v163 == v222 )
                    break;
                }
                *((uint32_t *)v259 + 6) = v163;
                v166 = 0;
                do
                {
                  v167 = 16 * v166;
                  v168 = v296;
                  ++v166;
                  v169 = *v266;
                  *(uint32_t *)(v169 + v167) = *(uint32_t *)((char *)v296 + v167);
                  *(uint32_t *)(v169 + v167 + 4) = *(uint32_t *)((char *)v168 + v167 + 4);
                  *(uint32_t *)(v169 + v167 + 8) = *(uint32_t *)((char *)v168 + v167 + 8);
                  *(uint32_t *)(v169 + v167 + 12) = *(uint32_t *)((char *)v168 + v167 + 12);
                }
                while ( v166 < v266[1] );
                v109 = v259;
              }
              else
              {
                *((uint32_t *)v259 + 6) = v297;
                v109 = v259;
              }
              v109[36] = v300;
            }
            v110 = v297;
            v13 = v297 < 0;
            *((uint32_t *)v5 + 16) = v243;
            if ( v13 )
            {
              v260 = v5;
              v111 = 16 * v110;
              v112 = v110;
              do
              {
                if ( (gameswf::Self *)((char *)v296 + v111) != nullptr )
                  gameswf::Edge::Construct((gameswf::Self *)((char *)v296 + v111));
                v111 += 16;
                ++v112;
              }
              while ( v112 != 0 );
              v5 = v260;
            }
            v297 = 0;
            v294 = v232;
            v295 = v244;
          }
          v54 = gameswf::Stream::readUInt(a2, v231);
          if ( v54 > 0 )
            v54 += v229;
          v293 = v54;
        }
        goto LABEL_9;
      }
    }
    else if ( (v275 & 4) == 0 )
    {
      goto LABEL_8;
    }
    if ( UInt <= 0 )
      goto LABEL_8;
    if ( !gameswf::Path::isEmpty((gameswf::Path::Self *)&v291) )
    {
      v76 = *((uint32_t *)v5 + 16);
      v77 = *((uint32_t *)v5 + 17);
      v242 = v76 + 1;
      if ( v76 + 1 <= v77 || *((uint32_t *)v5 + 18) != 0 )
      {
        v78 = *((char **)v5 + 15);
      }
      else
      {
        v158 = v242 + (v242 >> 1);
        *((uint32_t *)v5 + 17) = v158;
        if ( v158 != 0 )
        {
          if ( *((uint32_t *)v5 + 15) != 0 )
            v78 = (char *)gameswf::realloc_internal(*((gameswf::Self **)v5 + 15), 40 * v158, 40 * v77);
          else
            v78 = (char *)gameswf::malloc_internal(40 * v158);
          *((uint32_t *)v5 + 15) = (uint32_t)(uintptr_t)(v78);
          v76 = *((uint32_t *)v5 + 16);
        }
        else
        {
          if ( *((uint32_t *)v5 + 15) != 0 )
          {
            gameswf::free_internal(*((gameswf::Self **)v5 + 15));
            v76 = *((uint32_t *)v5 + 16);
          }
          *((uint32_t *)v5 + 15) = 0;
          v78 = nullptr;
        }
      }
      v79 = &v78[40 * v76];
      v255 = v79;
      if ( v79 != nullptr )
      {
        *(uint32_t *)v79 = v291;
        *((uint32_t *)v79 + 1) = v292;
        *((uint32_t *)v79 + 2) = v293;
        *((float *)v79 + 3) = v294;
        *((float *)v79 + 4) = v295;
        v265 = (int *)(v79 + 20);
        *((uint32_t *)v79 + 5) = 0;
        *((uint32_t *)v79 + 6) = 0;
        *((uint32_t *)v79 + 7) = 0;
        *((uint32_t *)v79 + 8) = 0;
        v80 = v297;
        if ( v297 > 0 )
        {
          v170 = 0;
          v171 = v297 + (v297 >> 1);
          *((uint32_t *)v255 + 7) = v171;
          v223 = v80;
          v172 = gameswf::malloc_internal(16 * v171);
          for ( *((uint32_t *)v255 + 5) = v172; ; v172 = *((uint32_t *)v255 + 5) )
          {
            if ( v172 + 16 * v170 != 0 )
              gameswf::Edge::Construct((gameswf::Edge::Self *)(v172 + 16 * v170));
            if ( ++v170 == v223 )
              break;
          }
          *((uint32_t *)v255 + 6) = v170;
          v173 = 0;
          do
          {
            v174 = 16 * v173;
            v175 = v296;
            ++v173;
            v176 = *v265;
            *(uint32_t *)(v176 + v174) = *(uint32_t *)((char *)v296 + v174);
            *(uint32_t *)(v176 + v174 + 4) = *(uint32_t *)((char *)v175 + v174 + 4);
            *(uint32_t *)(v176 + v174 + 8) = *(uint32_t *)((char *)v175 + v174 + 8);
            *(uint32_t *)(v176 + v174 + 12) = *(uint32_t *)((char *)v175 + v174 + 12);
          }
          while ( v173 < v265[1] );
          v81 = v255;
        }
        else
        {
          *((uint32_t *)v255 + 6) = v297;
          v81 = v255;
        }
        v81[36] = v300;
      }
      v82 = v297;
      v13 = v297 < 0;
      *((uint32_t *)v5 + 16) = v242;
      if ( v13 )
      {
        v256 = v5;
        v83 = 16 * v82;
        v84 = v82;
        do
        {
          if ( (gameswf::Self *)((char *)v296 + v83) != nullptr )
            gameswf::Edge::Construct((gameswf::Self *)((char *)v296 + v83));
          v83 += 16;
          ++v84;
        }
        while ( v84 != 0 );
        v5 = v256;
      }
      v297 = 0;
      v294 = v232;
      v295 = v244;
    }
    v53 = gameswf::Stream::readUInt(a2, UInt);
    if ( v53 > 0 )
      v53 += v230;
    v292 = v53;
    if ( (v275 & 8) != 0 )
      goto LABEL_95;
LABEL_9:
    if ( (v275 & 0x10) != 0 )
    {
      if ( !gameswf::Path::isEmpty((gameswf::Path::Self *)&v291) )
      {
        v86 = *((uint32_t *)v5 + 16);
        v87 = *((uint32_t *)v5 + 17);
        v257 = v86 + 1;
        if ( v86 + 1 <= v87 || *((uint32_t *)v5 + 18) != 0 )
        {
          v88 = *((char **)v5 + 15);
        }
        else
        {
          v161 = v257 + (v257 >> 1);
          *((uint32_t *)v5 + 17) = v161;
          if ( v161 != 0 )
          {
            if ( *((uint32_t *)v5 + 15) != 0 )
            {
              v88 = (char *)gameswf::realloc_internal(*((gameswf::Self **)v5 + 15), 40 * v161, 40 * v87);
            }
            else
            {
              v213 = 0;
              v88 = (char *)gameswf::malloc_internal(40 * v161);
            }
            *((uint32_t *)v5 + 15) = (uint32_t)(uintptr_t)(v88);
            v86 = *((uint32_t *)v5 + 16);
          }
          else
          {
            if ( *((uint32_t *)v5 + 15) != 0 )
            {
              v213 = 40 * v87;
              gameswf::free_internal(*((gameswf::Self **)v5 + 15));
              v86 = *((uint32_t *)v5 + 16);
            }
            *((uint32_t *)v5 + 15) = 0;
            v88 = nullptr;
          }
        }
        v89 = &v88[40 * v86];
        v282 = v89;
        if ( v89 != nullptr )
        {
          *(uint32_t *)v89 = v291;
          *((uint32_t *)v89 + 1) = v292;
          *((uint32_t *)v89 + 2) = v293;
          *((float *)v89 + 3) = v294;
          *((float *)v89 + 4) = v295;
          v271 = (int *)(v89 + 20);
          *((uint32_t *)v89 + 5) = 0;
          *((uint32_t *)v89 + 6) = 0;
          *((uint32_t *)v89 + 7) = 0;
          *((uint32_t *)v89 + 8) = 0;
          v90 = v297;
          if ( v297 > 0 )
          {
            v177 = 0;
            v178 = v297 + (v297 >> 1);
            *((uint32_t *)v282 + 7) = v178;
            v224 = v90;
            v213 = 0;
            v179 = gameswf::malloc_internal(16 * v178);
            for ( *((uint32_t *)v282 + 5) = v179; ; v179 = *((uint32_t *)v282 + 5) )
            {
              if ( v179 + 16 * v177 != 0 )
                gameswf::Edge::Construct((gameswf::Edge::Self *)(v179 + 16 * v177));
              if ( ++v177 == v224 )
                break;
            }
            *((uint32_t *)v282 + 6) = v177;
            v180 = 0;
            do
            {
              v181 = 16 * v180;
              v182 = v296;
              ++v180;
              v183 = *v271;
              *(uint32_t *)(v183 + v181) = *(uint32_t *)((char *)v296 + v181);
              *(uint32_t *)(v183 + v181 + 4) = *(uint32_t *)((char *)v182 + v181 + 4);
              *(uint32_t *)(v183 + v181 + 8) = *(uint32_t *)((char *)v182 + v181 + 8);
              *(uint32_t *)(v183 + v181 + 12) = *(uint32_t *)((char *)v182 + v181 + 12);
            }
            while ( v180 < v271[1] );
            v91 = v282;
          }
          else
          {
            *((uint32_t *)v282 + 6) = v297;
            v91 = v282;
          }
          v91[36] = v300;
        }
        v92 = v297;
        v13 = v297 < 0;
        *((uint32_t *)v5 + 16) = v257;
        if ( v13 )
        {
          v283 = v5;
          v93 = 16 * v92;
          v94 = v92;
          do
          {
            if ( (gameswf::Self *)((char *)v296 + v93) != nullptr )
              gameswf::Edge::Construct((gameswf::Self *)((char *)v296 + v93));
            v93 += 16;
            ++v94;
          }
          while ( v94 != 0 );
          v5 = v283;
        }
        v297 = 0;
        v291 = -1;
        v292 = -1;
        v293 = -1;
      }
      gameswf::Path::Construct((gameswf::Path::Self *)v301);
      v6 = *((uint32_t *)v5 + 16);
      v7 = *((uint32_t *)v5 + 17);
      v248 = v6 + 1;
      if ( v6 + 1 <= v7 || *((uint32_t *)v5 + 18) != 0 )
      {
        v8 = *((char **)v5 + 15);
      }
      else
      {
        v85 = v248 + (v248 >> 1);
        *((uint32_t *)v5 + 17) = v85;
        if ( v85 != 0 )
        {
          if ( *((uint32_t *)v5 + 15) != 0 )
          {
            v8 = (char *)gameswf::realloc_internal(*((gameswf::Self **)v5 + 15), 40 * v85, 40 * v7);
          }
          else
          {
            v213 = 0;
            v8 = (char *)gameswf::malloc_internal(40 * v85);
          }
          *((uint32_t *)v5 + 15) = (uint32_t)(uintptr_t)(v8);
          v6 = *((uint32_t *)v5 + 16);
        }
        else
        {
          if ( *((uint32_t *)v5 + 15) != 0 )
          {
            v213 = 40 * v7;
            gameswf::free_internal(*((gameswf::Self **)v5 + 15));
            v6 = *((uint32_t *)v5 + 16);
          }
          *((uint32_t *)v5 + 15) = 0;
          v8 = nullptr;
        }
      }
      v9 = &v8[40 * v6];
      v276 = v9;
      if ( v9 != nullptr )
      {
        std::memcpy(v9, v301, 20);
        v268 = (int *)(v9 + 20);
        *((uint32_t *)v9 + 5) = 0;
        *((uint32_t *)v9 + 6) = 0;
        *((uint32_t *)v9 + 7) = 0;
        *((uint32_t *)v9 + 8) = 0;
        v10 = v303;
        if ( v303 > 0 )
        {
          v115 = 0;
          v116 = v303 + (v303 >> 1);
          *((uint32_t *)v276 + 7) = v116;
          v221 = v10;
          v213 = 0;
          v117 = gameswf::malloc_internal(16 * v116);
          for ( *((uint32_t *)v276 + 5) = v117; ; v117 = *((uint32_t *)v276 + 5) )
          {
            if ( v117 + 16 * v115 != 0 )
              gameswf::Edge::Construct((gameswf::Edge::Self *)(v117 + 16 * v115));
            if ( ++v115 == v221 )
              break;
          }
          *((uint32_t *)v276 + 6) = v115;
          v118 = 0;
          do
          {
            v119 = 16 * v118;
            v120 = v302;
            ++v118;
            v121 = *v268;
            *(uint32_t *)(v121 + v119) = *(uint32_t *)((char *)v302 + v119);
            *(uint32_t *)(v121 + v119 + 4) = *(uint32_t *)((char *)v120 + v119 + 4);
            *(uint32_t *)(v121 + v119 + 8) = *(uint32_t *)((char *)v120 + v119 + 8);
            *(uint32_t *)(v121 + v119 + 12) = *(uint32_t *)((char *)v120 + v119 + 12);
          }
          while ( v118 < v268[1] );
          v11 = v276;
        }
        else
        {
          *((uint32_t *)v276 + 6) = v303;
          v11 = v276;
        }
        v11[36] = v306;
      }
      v12 = v303;
      v13 = v303 < 0;
      *((uint32_t *)v5 + 16) = v248;
      if ( v13 )
      {
        v277 = v5;
        v14 = 16 * v12;
        v15 = v12;
        do
        {
          if ( (gameswf::Self *)((char *)v302 + v14) != nullptr )
            gameswf::Edge::Construct((gameswf::Self *)((char *)v302 + v14));
          v14 += 16;
          ++v15;
        }
        while ( v15 != 0 );
        v5 = v277;
      }
      v303 = 0;
      if ( v305 == 0 )
      {
        v16 = v304;
        v304 = 0;
        if ( v302 != nullptr )
        {
          v213 = 16 * v16;
          gameswf::free_internal(v302);
        }
        v302 = nullptr;
      }
      *(uint8_t *)(*((uint32_t *)v5 + 15) + 8 * (5 * *((uint32_t *)v5 + 16) - 5) + 36) = 1;
      v230 = *((uint32_t *)v5 + 8);
      v229 = *((uint32_t *)v5 + 12);
      v17 = gameswf::Stream::readU8(a2);
      v269 = v17;
      if ( a3 > 2 && v17 == 255 )
        v269 = (uint16_t)gameswf::Stream::readU16(a2);
      if ( v269 != 0 )
      {
        v18 = *((uint32_t *)v5 + 8) + v269;
        v239 = *((uint32_t *)v5 + 8);
        v278 = v18;
        if ( *((uint32_t *)v5 + 10) != 0 )
        {
          v22 = *((gameswf::Self **)v5 + 7);
          v21 = *((uint32_t *)v5 + 8);
        }
        else
        {
          v19 = *((uint32_t *)v5 + 9);
          v20 = *((gameswf::Self **)v5 + 7);
          *((uint32_t *)v5 + 9) = v18;
          if ( v18 != 0 )
          {
            if ( v20 != nullptr )
            {
              v22 = (gameswf::Self *)gameswf::realloc_internal(v20, 84 * v18, 84 * v19);
            }
            else
            {
              v213 = 0;
              v22 = (gameswf::Self *)gameswf::malloc_internal(84 * v18);
            }
            *((uint32_t *)v5 + 7) = (uint32_t)(uintptr_t)(v22);
            v21 = *((uint32_t *)v5 + 8);
          }
          else
          {
            v21 = v239;
            if ( v20 != nullptr )
            {
              v213 = 84 * v19;
              gameswf::free_internal(v20);
              v21 = *((uint32_t *)v5 + 8);
            }
            *((uint32_t *)v5 + 7) = 0;
            v22 = nullptr;
          }
        }
        if ( v278 < v21 )
        {
          v249 = v21;
          v263 = (gameswf::Self **)v5;
          v23 = 84 * v278;
          v24 = v278;
          while ( 1 )
          {
            v25 = (void (***)(uint32_t, int))((char *)v22 + v23);
            ++v24;
            v23 += 84;
            (**v25)((uint32_t)(uintptr_t)(v25), v213);
            if ( v24 == v249 )
              break;
            v22 = v263[7];
          }
          v5 = (gameswf::ShapeCharacterDef::Self *)v263;
          v21 = v249;
          v22 = v263[7];
        }
        if ( v278 != 0 )
        {
          v26 = *((uint32_t *)v5 + 9);
          if ( v278 > v26 && *((uint32_t *)v5 + 10) == 0 )
          {
            v156 = v278 + (v278 >> 1);
            *((uint32_t *)v5 + 9) = v156;
            if ( v156 != 0 )
            {
              if ( v22 != nullptr )
                v22 = (gameswf::Self *)gameswf::realloc_internal(v22, 84 * v156, 84 * v26);
              else
                v22 = (gameswf::Self *)gameswf::malloc_internal(84 * v156);
              *((uint32_t *)v5 + 7) = (uint32_t)(uintptr_t)(v22);
            }
            else
            {
              if ( v22 != nullptr )
                gameswf::free_internal(v22);
              *((uint32_t *)v5 + 7) = 0;
              v22 = nullptr;
            }
          }
        }
        if ( v278 > v21 )
        {
          v250 = (gameswf::Self **)v5;
          v27 = v21;
          v28 = 84 * v21;
          do
          {
            if ( (gameswf::Self *)((char *)v22 + v28) != nullptr )
            {
              gameswf::FillStyle::FillStyle((gameswf::Self *)((char *)v22 + v28));
              v22 = v250[7];
            }
            ++v27;
            v28 += 84;
          }
          while ( v27 != v278 );
          v5 = (gameswf::ShapeCharacterDef::Self *)v250;
        }
        *((uint32_t *)v5 + 8) = v278;
        v279 = (gameswf::Self **)v5;
        v29 = 0;
        v30 = 84 * v239;
        while ( 1 )
        {
          v209 = (gameswf::FillStyle::Self *)((gameswf::Self *)((char *)v22 + v30));
          ++v29;
          v30 += 84;
          gameswf::FillStyle::read(v209, a2, a3, a5);
          if ( v269 <= v29 )
            break;
          v22 = v279[7];
        }
        v5 = (gameswf::ShapeCharacterDef::Self *)v279;
      }
      v270 = (uint8_t)gameswf::Stream::readU8(a2);
      if ( v270 == 255 )
        v270 = (uint16_t)gameswf::Stream::readU16(a2);
      if ( v270 != 0 )
      {
        v31 = *((uint32_t *)v5 + 12) + v270;
        v240 = *((uint32_t *)v5 + 12);
        v280 = v31;
        if ( *((uint32_t *)v5 + 14) != 0 )
        {
          v35 = *((gameswf::Self **)v5 + 11);
          v34 = *((uint32_t *)v5 + 12);
        }
        else
        {
          v32 = *((uint32_t *)v5 + 13);
          v33 = *((gameswf::Self **)v5 + 11);
          *((uint32_t *)v5 + 13) = v31;
          if ( v31 != 0 )
          {
            if ( v33 != nullptr )
              v35 = (gameswf::Self *)gameswf::realloc_internal(v33, 108 * v31, 108 * v32);
            else
              v35 = (gameswf::Self *)gameswf::malloc_internal(108 * v31);
            *((uint32_t *)v5 + 11) = (uint32_t)(uintptr_t)(v35);
            v34 = *((uint32_t *)v5 + 12);
          }
          else
          {
            v34 = v240;
            if ( v33 != nullptr )
            {
              gameswf::free_internal(v33);
              v34 = *((uint32_t *)v5 + 12);
            }
            *((uint32_t *)v5 + 11) = 0;
            v35 = nullptr;
          }
        }
        if ( v280 < v34 )
        {
          v251 = v34;
          v264 = (gameswf::Self **)v5;
          v36 = v280;
          v37 = 108 * v280;
          while ( 1 )
          {
            v38 = (void (***)(uint32_t))((char *)v35 + v37);
            ++v36;
            v37 += 108;
            (**v38)((uint32_t)(uintptr_t)(v38));
            if ( v36 == v251 )
              break;
            v35 = v264[11];
          }
          v5 = (gameswf::ShapeCharacterDef::Self *)v264;
          v34 = v251;
          v35 = v264[11];
        }
        if ( v280 != 0 )
        {
          v39 = *((uint32_t *)v5 + 13);
          if ( v280 > v39 && *((uint32_t *)v5 + 14) == 0 )
          {
            v157 = v280 + (v280 >> 1);
            *((uint32_t *)v5 + 13) = v157;
            if ( v157 != 0 )
            {
              if ( v35 != nullptr )
                v35 = (gameswf::Self *)gameswf::realloc_internal(v35, 108 * v157, 108 * v39);
              else
                v35 = (gameswf::Self *)gameswf::malloc_internal(108 * v157);
              *((uint32_t *)v5 + 11) = (uint32_t)(uintptr_t)(v35);
            }
            else
            {
              if ( v35 != nullptr )
                gameswf::free_internal(v35);
              *((uint32_t *)v5 + 11) = 0;
              v35 = nullptr;
            }
          }
        }
        if ( v280 > v34 )
        {
          v252 = (gameswf::Self **)v5;
          v40 = v34;
          v41 = 108 * v34;
          do
          {
            if ( (gameswf::Self *)((char *)v35 + v41) != nullptr )
            {
              gameswf::LineStyle::Construct((gameswf::Self *)((char *)v35 + v41));
              v35 = v252[11];
            }
            ++v40;
            v41 += 108;
          }
          while ( v40 != v280 );
          v5 = (gameswf::ShapeCharacterDef::Self *)v252;
        }
        *((uint32_t *)v5 + 12) = v280;
        v281 = (gameswf::Self **)v5;
        v42 = 0;
        v43 = 108 * v240;
        while ( 1 )
        {
          v210 = (gameswf::LineStyle::Self *)((gameswf::Self *)((char *)v35 + v43));
          ++v42;
          v43 += 108;
          gameswf::LineStyle::read(v210, a2, a3, a5);
          if ( v270 <= v42 )
            break;
          v35 = v281[11];
        }
        v5 = (gameswf::ShapeCharacterDef::Self *)v281;
      }
      UInt = gameswf::Stream::readUInt(a2, 4);
      v231 = gameswf::Stream::readUInt(a2, 4);
    }
  }
  if ( gameswf::Path::isEmpty((gameswf::Path::Self *)&v291) )
  {
    v64 = v297;
    if ( v297 < 0 )
    {
      v65 = 16 * v297;
      do
      {
        if ( (gameswf::Self *)((char *)v296 + v65) != nullptr )
          gameswf::Edge::Construct((gameswf::Self *)((char *)v296 + v65));
        v65 += 16;
        ++v64;
      }
      while ( v64 != 0 );
    }
  }
  else
  {
    v148 = *((uint32_t *)v5 + 16);
    v149 = *((uint32_t *)v5 + 17);
    v274 = v148 + 1;
    if ( v148 + 1 <= v149 || *((uint32_t *)v5 + 18) != 0 )
    {
      v150 = *((char **)v5 + 15);
    }
    else
    {
      v199 = v274 + (v274 >> 1);
      *((uint32_t *)v5 + 17) = v199;
      if ( v199 != 0 )
      {
        if ( *((uint32_t *)v5 + 15) != 0 )
          v150 = (char *)gameswf::realloc_internal(*((gameswf::Self **)v5 + 15), 40 * v199, 40 * v149);
        else
          v150 = (char *)gameswf::malloc_internal(40 * v199);
        *((uint32_t *)v5 + 15) = (uint32_t)(uintptr_t)(v150);
        v148 = *((uint32_t *)v5 + 16);
      }
      else
      {
        if ( *((uint32_t *)v5 + 15) != 0 )
        {
          gameswf::free_internal(*((gameswf::Self **)v5 + 15));
          v148 = *((uint32_t *)v5 + 16);
        }
        *((uint32_t *)v5 + 15) = 0;
        v150 = nullptr;
      }
    }
    v151 = &v150[40 * v148];
    v247 = v151;
    if ( v151 != nullptr )
    {
      *(uint32_t *)v151 = v291;
      *((uint32_t *)v151 + 1) = v292;
      *((uint32_t *)v151 + 2) = v293;
      *((float *)v151 + 3) = v294;
      *((float *)v151 + 4) = v295;
      v288 = (int *)(v151 + 20);
      *((uint32_t *)v151 + 5) = 0;
      *((uint32_t *)v151 + 6) = 0;
      *((uint32_t *)v151 + 7) = 0;
      *((uint32_t *)v151 + 8) = 0;
      v152 = v297;
      if ( v297 > 0 )
      {
        v200 = 0;
        v201 = v297 + (v297 >> 1);
        *((uint32_t *)v247 + 7) = v201;
        v227 = v152;
        v202 = gameswf::malloc_internal(16 * v201);
        for ( *((uint32_t *)v247 + 5) = v202; ; v202 = *((uint32_t *)v247 + 5) )
        {
          if ( v202 + 16 * v200 != 0 )
            gameswf::Edge::Construct((gameswf::Edge::Self *)(v202 + 16 * v200));
          if ( ++v200 == v227 )
            break;
        }
        *((uint32_t *)v247 + 6) = v200;
        v203 = 0;
        do
        {
          v204 = 16 * v203;
          v205 = v296;
          ++v203;
          v206 = *v288;
          *(uint32_t *)(v206 + v204) = *(uint32_t *)((char *)v296 + v204);
          *(uint32_t *)(v206 + v204 + 4) = *(uint32_t *)((char *)v205 + v204 + 4);
          *(uint32_t *)(v206 + v204 + 8) = *(uint32_t *)((char *)v205 + v204 + 8);
          *(uint32_t *)(v206 + v204 + 12) = *(uint32_t *)((char *)v205 + v204 + 12);
        }
        while ( v203 < v288[1] );
        v153 = v247;
      }
      else
      {
        *((uint32_t *)v247 + 6) = v297;
        v153 = v247;
      }
      v153[36] = v300;
    }
    v154 = v297;
    v13 = v297 < 0;
    *((uint32_t *)v5 + 16) = v274;
    if ( v13 )
    {
      v155 = 16 * v154;
      do
      {
        if ( (gameswf::Self *)((char *)v296 + v155) != nullptr )
          gameswf::Edge::Construct((gameswf::Self *)((char *)v296 + v155));
        v155 += 16;
        ++v154;
      }
      while ( v154 != 0 );
    }
  }
  result = v299;
  v297 = 0;
  if ( v299 == nullptr )
  {
    result = v296;
    v298 = 0;
    if ( v296 != nullptr )
      return (gameswf::Self *)gameswf::free_internal(v296);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ShapeCharacterDef::sortAndCleanMeshes  (binary VA: 0x10dffe0)
// Original: gameswf::ShapeCharacterDef::sortAndCleanMeshes
// ----------------------------------------------------------------------------
void gameswf::ShapeCharacterDef::sortAndCleanMeshes(gameswf::ShapeCharacterDef::Self *self)
{
  signed int nmemb;

  nmemb = *((uint32_t *)self + 29);
  if ( nmemb > 0 )
    qsort(*((void **)self + 28), nmemb, 4u, (__compar_fn_t)sub_10DA820);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ShapeCharacterDef::display  (binary VA: 0x10e0030)
// Original: gameswf::ShapeCharacterDef::display
// ----------------------------------------------------------------------------
void gameswf::ShapeCharacterDef::display(gameswf::ShapeCharacterDef::Self *a1, int a2, uint32_t *a3, int a4, uint32_t *a5, uint32_t *a6)
{
  float v6; // xmm0_4
  int v7;
  float v8; // xmm1_4
  float **v9;
  float *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v6 = fsqrt(
         fmaxf(
           (float)(*(float *)(a2 + 16) * *(float *)(a2 + 16)) + (float)(*(float *)(a2 + 12) * *(float *)(a2 + 12)),
           (float)(*(float *)(a2 + 4) * *(float *)(a2 + 4)) + (float)(*(float *)a2 * *(float *)a2)));
  if ( fabs(v6) >= 0.000001f )
  {
    v7 = *((uint32_t *)a1 + 29);
    v8 = *(float *)&dword_20C4390 / (float)(v6 * *(float *)&a4);
    if ( v7 > 0 )
    {
      v9 = *((float ***)a1 + 28);
      v10 = *v9;
      if ( v8 <= (float)(**v9 * 3.0) )
      {
        v11 = 0;
        if ( v8 > **v9 )
        {
LABEL_15:
          gameswf::MeshSet::display((int)(uintptr_t)(v10), (uint32_t *)a2, a3, a5, a6);
          return;
        }
        while ( ++v11 != v7 )
        {
          v10 = v9[v11];
          if ( v8 > (float)(*v10 * 3.0) )
            break;
          if ( v8 > *v10 )
            goto LABEL_15;
        }
      }
    }
    v12 = G4_VCALL<int>(a1, 40, v8 * 0.75);
    v13 = *((uint32_t *)a1 + 29);
    v14 = v12;
    v19 = *((uint32_t *)a1 + 30);
    v15 = v13 + 1;
    if ( v13 + 1 <= v19 || *((uint32_t *)a1 + 31) != 0 )
    {
      v16 = *((char **)a1 + 28);
    }
    else
    {
      v18 = v15 + (v15 >> 1);
      *((uint32_t *)a1 + 30) = v18;
      if ( v18 != 0 )
      {
        v21 = v13 + 1;
        if ( *((uint32_t *)a1 + 28) != 0 )
          v16 = (char *)gameswf::realloc_internal(*((gameswf::Self **)a1 + 28), 4 * v18, 4 * v19);
        else
          v16 = (char *)gameswf::malloc_internal(4 * v18);
        *((uint32_t *)a1 + 28) = (uint32_t)(uintptr_t)(v16);
        v13 = *((uint32_t *)a1 + 29);
        v15 = v21;
      }
      else
      {
        if ( *((uint32_t *)a1 + 28) != 0 )
        {
          v20 = v13 + 1;
          gameswf::free_internal(*((gameswf::Self **)a1 + 28));
          v13 = *((uint32_t *)a1 + 29);
          v15 = v20;
        }
        *((uint32_t *)a1 + 28) = 0;
        v16 = nullptr;
      }
    }
    v17 = (int *)&v16[4 * v13];
    if ( v17 != nullptr )
      *v17 = v14;
    *((uint32_t *)a1 + 29) = v15;
    gameswf::MeshSet::display(v14, (uint32_t *)a2, a3, a5, a6);
    gameswf::ShapeCharacterDef::sortAndCleanMeshes(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ShapeCharacterDef::display  (binary VA: 0x10e0260)
// Original: gameswf::ShapeCharacterDef::display
// ----------------------------------------------------------------------------
void gameswf::ShapeCharacterDef::display(gameswf::ShapeCharacterDef::Self *self, gameswf::Character::Self *a2)
{
  int v2;
  gameswf::Self *v3;
  void *v5;
  int v6;

  v2 = *((uint32_t *)a2 + 14);
  if ( v2 != 0 )
  {
    v3 = *((gameswf::Self **)a2 + 13);
    if ( *((uint8_t *)v3 + 2) == 0 )
    {
      if ( (*(uint16_t *)v3)-- == 1 )
      {
        v5 = nullptr;
        gameswf::free_internal(v3);
      }
      *((uint32_t *)a2 + 13) = 0;
      *((uint32_t *)a2 + 14) = 0;
      v2 = 0;
    }
  }
  *(float *)&v6 = ((long double (*)(int, void *))*(uint32_t *)(*(uint32_t *)v2 + 140))(v2, v5);
  gameswf::ShapeCharacterDef::display(
    self,
    (int)(uintptr_t)(a2) + 112,
    (uint32_t *)a2 + 20,
    v6,
    (uint32_t *)self + 7,
    (uint32_t *)self + 11);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ShapeCharacterDef::computeBound  (binary VA: 0x10e0320)
// Original: gameswf::ShapeCharacterDef::computeBound
// ----------------------------------------------------------------------------
int gameswf::ShapeCharacterDef::computeBound(gameswf::ShapeCharacterDef::Self *self, const gameswf::array<gameswf::Path::Self> *a2)
{
  int result;
  int v3;
  __m128i v4;
  __m128i v5;
  __m128i v6;
  __m128i v7;
  float *v8;
  float v9; // xmm4_4
  float v10; // xmm5_4
  int v11;
  int v12;
  float v13; // xmm4_4
  float v14; // xmm5_4
  uint64_t v15; // xmm1_8
  __m128 v16;
  int v17;

  result = 1343554297;
  *(uint32_t *)a2 = 1343554297;
  *((uint32_t *)a2 + 2) = 1343554297;
  *((uint32_t *)a2 + 1) = -803929351;
  *((uint32_t *)a2 + 3) = -803929351;
  if ( *((int *)self + 1) <= 0 )
  {
g4_m128_raw(v4) = 0xCDEE6B28;
g4_m128_raw(v6) = 0x4DEE6B28u;
g4_m128_raw(v5) = 0xCDEE6B28;
g4_m128_raw(v7) = 0x4DEE6B28u;
  }
  else
  {
    v3 = 0;
    v4 = _mm_cvtsi32_si128(0xD01502F9);
    v5 = v4;
    v6 = _mm_cvtsi32_si128(0x501502F9u);
    v7 = v6;
    v17 = 0;
    do
    {
      v8 = (float *)(*(uint32_t *)self + v3);
      v9 = v8[4];
      v10 = v8[3];
      *(float *)g4_m128_ptr<int32_t>(v6) = fminf(*(float *)g4_m128_ptr<int32_t>(v6), v9);
      *(float *)g4_m128_ptr<int32_t>(v7) = fminf(*(float *)g4_m128_ptr<int32_t>(v7), v10);
      *(float *)g4_m128_ptr<int32_t>(v5) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v5), v10);
      *(float *)g4_m128_ptr<int32_t>(v4) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v4), v9);
      *((uint32_t *)a2 + 2) =g4_m128_lane<int32_t>(v6, 0);
      *(uint32_t *)a2 =g4_m128_lane<int32_t>(v7, 0);
      *((uint32_t *)a2 + 1) =g4_m128_lane<int32_t>(v5, 0);
      *((uint32_t *)a2 + 3) =g4_m128_lane<int32_t>(v4, 0);
      result = *((uint32_t *)v8 + 6);
      if ( result > 0 )
      {
        v11 = 0;
        do
        {
          v12 = v11++;
          result = *((uint32_t *)v8 + 5) + 16 * v12;
          v13 = *(float *)(result + 12);
          v14 = *(float *)(result + 8);
          *(float *)g4_m128_ptr<int32_t>(v6) = fminf(*(float *)g4_m128_ptr<int32_t>(v6), v13);
          *(float *)g4_m128_ptr<int32_t>(v7) = fminf(*(float *)g4_m128_ptr<int32_t>(v7), v14);
          *(float *)g4_m128_ptr<int32_t>(v5) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v5), v14);
          *(float *)g4_m128_ptr<int32_t>(v4) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v4), v13);
          *((uint32_t *)a2 + 2) =g4_m128_lane<int32_t>(v6, 0);
          *(uint32_t *)a2 =g4_m128_lane<int32_t>(v7, 0);
          *((uint32_t *)a2 + 1) =g4_m128_lane<int32_t>(v5, 0);
          *((uint32_t *)a2 + 3) =g4_m128_lane<int32_t>(v4, 0);
        }
        while ( *((uint32_t *)v8 + 6) > v11 );
      }
      ++v17;
      v3 += 40;
    }
    while ( *((uint32_t *)self + 1) > v17 );
    *(float *)g4_m128_ptr<int32_t>(v7) = *(float *)g4_m128_ptr<int32_t>(v7) * 0.05f;
    *(float *)g4_m128_ptr<int32_t>(v6) = *(float *)g4_m128_ptr<int32_t>(v6) * 0.05f;
    *(float *)g4_m128_ptr<int32_t>(v5) = *(float *)g4_m128_ptr<int32_t>(v5) * 0.05f;
    *(float *)g4_m128_ptr<int32_t>(v4) = *(float *)g4_m128_ptr<int32_t>(v4) * 0.05f;
  }
  v15 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_raw(G4_BITCAST<__m128>(v6)),g4_m128_raw(G4_BITCAST<__m128>(v4))), 0);
g4_m128_lane<uint64_t>(v16, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_raw(G4_BITCAST<__m128>(v7)),g4_m128_raw(G4_BITCAST<__m128>(v5))), 0);
g4_m128_lane<uint64_t>(v16, 1) = v15;
  _mm_storel_ps((double *)a2, v16);
  _mm_storeh_ps((double *)a2 + 1, v16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ShapeCharacterDef::flushCache  (binary VA: 0x10e0460)
// Original: gameswf::ShapeCharacterDef::flushCache
// ----------------------------------------------------------------------------
int gameswf::ShapeCharacterDef::flushCache(gameswf::ShapeCharacterDef::Self *self)
{
  int result;
  int i;
  int v3;
  gameswf::Self *v4;
  int v5;
  uint32_t *v6;

  result = *((uint32_t *)self + 29);
  if ( result > 0 )
  {
    for ( i = 0; i < result; ++i )
    {
      v3 = *((uint32_t *)self + 28);
      v4 = *(gameswf::Self **)(v3 + 4 * i);
      if ( v4 != nullptr )
      {
        gameswf::MeshSet::Destroy(*(gameswf::MeshSet::Self **)(v3 + 4 * i));
        gameswf::free_internal(v4);
        result = *((uint32_t *)self + 29);
      }
    }
  }
  if ( result < 0 )
  {
    v5 = 4 * result;
    do
    {
      v6 = (uint32_t *)(*((uint32_t *)self + 28) + v5);
      if ( v6 != nullptr )
        *v6 = 0;
      v5 += 4;
      ++result;
    }
    while ( result != 0 );
  }
  *((uint32_t *)self + 29) = 0;
  return result;
}


