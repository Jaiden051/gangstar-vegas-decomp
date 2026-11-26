#include "Core/Utils/DecompTypes.h"
#include "gameswf_abc_def.h"

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::Destroy  (binary VA: 0x1175870)
// Original: gameswf::abc_def::~abc_def
// ----------------------------------------------------------------------------
void gameswf::abc_def::Destroy(gameswf::abc_def::Self *self)
{
  gameswf::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  int v8;
  int i;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int j;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  gameswf::Self *v20;
  int v21;
  int v22;
  int k;
  uint32_t *v24;
  int v25;
  gameswf::Self *v26;
  int v27;
  int v28;
  int m;
  uint32_t *v30;
  int v31;
  gameswf::Self *v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  gameswf::RefCounted::Self *v38;
  gameswf::Self *v39;
  int v40;
  int v41;
  int n;
  uint32_t *v43;
  gameswf::Self *v44;
  int v45;
  int v46;
  int ii;
  uint32_t *v48;
  int v49;
  gameswf::Self *v50;
  int v51;
  bool v52;
  gameswf::abc_def::Self *v53;
  gameswf::Self *v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  gameswf::Self *v61;
  int v62;
  gameswf::Self *v63;
  int v64;
  gameswf::Self *v65;
  int v66;
  gameswf::Self *v67;
  int v68;
  gameswf::Self *v69;
  gameswf::Self *v70;
  int v71;
  int v72;
  int v73;

  v1 = *((gameswf::Self **)self + 41);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091678);
  if ( v1 != nullptr )
  {
    v2 = *((uint32_t *)self + 42);
    if ( *((uint8_t *)self + 171) != 0 )
    {
      gameswf::free_internal(v1);
      v2 = *((uint32_t *)self + 42);
    }
  }
  else
  {
    v2 = *((uint32_t *)self + 42);
  }
  v3 = *((uint32_t *)self + 39);
  *((uint32_t *)self + 42) = v2 & 0xFF000000;
  *((uint32_t *)self + 41) = 0;
  *((uint8_t *)self + 171) = 0;
  if ( v3 != 0 )
  {
    v4 = *((uint32_t *)self + 40);
    if ( v4 << 8 >> 8 > 0 )
    {
      v73 = 0;
      v71 = 0;
      while ( 1 )
      {
        v5 = v73 + v3;
        v6 = *(gameswf::Self **)(v5 + 12);
        if ( v6 != nullptr )
        {
          v7 = *((uint32_t *)v6 + 1);
          if ( v7 >= 0 )
          {
            v8 = 8;
            for ( i = 0; i <= v7; ++i )
            {
              v10 = (uint32_t *)((char *)v6 + v8);
              if ( *(uint32_t *)((char *)v6 + v8) != -2 )
              {
                *v10 = -2;
                v10[1] = 0;
                v6 = *(gameswf::Self **)(v5 + 12);
              }
              v8 += 16;
            }
          }
          gameswf::free_internal(v6);
          *(uint32_t *)(v5 + 12) = 0;
        }
        v11 = *(uint32_t *)(v5 + 8);
        if ( *(uint32_t *)(v5 + 4) != 0 && *(uint8_t *)(v5 + 11) != 0 )
        {
          gameswf::free_internal(*(gameswf::Self **)(v5 + 4));
          v11 = *(uint32_t *)(v5 + 8);
        }
        *(uint32_t *)(v5 + 4) = 0;
        *(uint32_t *)(v5 + 8) = v11 & 0xFF000000;
        ++v71;
        *(uint8_t *)(v5 + 11) = 0;
        v4 = *((uint32_t *)self + 40);
        v73 += 24;
        if ( v71 >= v4 << 8 >> 8 )
          break;
        v3 = *((uint32_t *)self + 39);
      }
    }
    if ( *((uint8_t *)self + 163) != 0 )
    {
      gameswf::free_internal(*((gameswf::Self **)self + 39));
      v4 = *((uint32_t *)self + 40);
    }
  }
  else
  {
    v4 = *((uint32_t *)self + 40);
  }
  v12 = *((uint32_t *)self + 37);
  *((uint32_t *)self + 40) = v4 & 0xFF000000;
  *((uint32_t *)self + 39) = 0;
  *((uint8_t *)self + 163) = 0;
  if ( v12 != 0 )
  {
    v13 = *((uint32_t *)self + 38);
    if ( v13 << 8 >> 8 > 0 )
    {
      v72 = 0;
      for ( j = v12; ; j = *((uint32_t *)self + 37) )
      {
        v15 = j + (v72 << 6);
        v16 = *(uint32_t *)(v15 + 56);
        v17 = *(uint32_t *)(v15 + 60);
        if ( v16 != 0 )
        {
          if ( v17 << 8 >> 8 > 0 )
          {
            v18 = 0;
            v19 = 0;
            while ( 1 )
            {
              ++v19;
              v70 = (gameswf::Self *)(v18 + v16);
              v18 += 12;
              gameswf::ASValue::dropRefs(v70);
              v17 = *(uint32_t *)(v15 + 60);
              if ( v19 >= v17 << 8 >> 8 )
                break;
              v16 = *(uint32_t *)(v15 + 56);
            }
          }
          if ( *(uint8_t *)(v15 + 63) != 0 )
          {
            gameswf::free_internal(*(gameswf::Self **)(v15 + 56));
            v17 = *(uint32_t *)(v15 + 60);
          }
        }
        v20 = *(gameswf::Self **)(v15 + 52);
        *(uint32_t *)(v15 + 60) = v17 & 0xFF000000;
        *(uint32_t *)(v15 + 56) = 0;
        *(uint8_t *)(v15 + 63) = 0;
        if ( v20 != nullptr )
        {
          v21 = *((uint32_t *)v20 + 1);
          if ( v21 >= 0 )
          {
            v22 = 8;
            for ( k = 0; k <= v21; ++k )
            {
              v24 = (uint32_t *)((char *)v20 + v22);
              if ( *(uint32_t *)((char *)v20 + v22) != -2 )
              {
                *v24 = -2;
                v24[1] = 0;
                v20 = *(gameswf::Self **)(v15 + 52);
              }
              v22 += 16;
            }
          }
          gameswf::free_internal(v20);
          *(uint32_t *)(v15 + 52) = 0;
        }
        v25 = *(uint32_t *)(v15 + 40);
        if ( *(uint32_t *)(v15 + 36) != 0 && *(uint8_t *)(v15 + 43) != 0 )
        {
          gameswf::free_internal(*(gameswf::Self **)(v15 + 36));
          v25 = *(uint32_t *)(v15 + 40);
        }
        v26 = *(gameswf::Self **)(v15 + 12);
        *(uint32_t *)(v15 + 40) = v25 & 0xFF000000;
        *(uint32_t *)(v15 + 36) = 0;
        *(uint8_t *)(v15 + 43) = 0;
        if ( v26 != nullptr )
        {
          v27 = *((uint32_t *)v26 + 1);
          if ( v27 >= 0 )
          {
            v28 = 8;
            for ( m = 0; m <= v27; ++m )
            {
              v30 = (uint32_t *)((char *)v26 + v28);
              if ( *(uint32_t *)((char *)v26 + v28) != -2 )
              {
                *v30 = -2;
                v30[1] = 0;
                v26 = *(gameswf::Self **)(v15 + 12);
              }
              v28 += 16;
            }
          }
          gameswf::free_internal(v26);
          *(uint32_t *)(v15 + 12) = 0;
        }
        v31 = *(uint32_t *)(v15 + 8);
        if ( *(uint32_t *)(v15 + 4) != 0 && *(uint8_t *)(v15 + 11) != 0 )
        {
          gameswf::free_internal(*(gameswf::Self **)(v15 + 4));
          v31 = *(uint32_t *)(v15 + 8);
        }
        *(uint32_t *)(v15 + 4) = 0;
        *(uint32_t *)(v15 + 8) = v31 & 0xFF000000;
        ++v72;
        *(uint8_t *)(v15 + 11) = 0;
        v13 = *((uint32_t *)self + 38);
        if ( v72 >= v13 << 8 >> 8 )
          break;
      }
    }
    if ( *((uint8_t *)self + 155) != 0 )
    {
      gameswf::free_internal(*((gameswf::Self **)self + 37));
      v13 = *((uint32_t *)self + 38);
    }
  }
  else
  {
    v13 = *((uint32_t *)self + 38);
  }
  v32 = *((gameswf::Self **)self + 35);
  *((uint32_t *)self + 38) = v13 & 0xFF000000;
  *((uint32_t *)self + 37) = 0;
  *((uint8_t *)self + 155) = 0;
  if ( v32 != nullptr )
  {
    v33 = *((uint32_t *)self + 36);
    if ( *((uint8_t *)self + 147) != 0 )
    {
      gameswf::free_internal(v32);
      v33 = *((uint32_t *)self + 36);
    }
  }
  else
  {
    v33 = *((uint32_t *)self + 36);
  }
  *((uint32_t *)self + 36) = v33 & 0xFF000000;
  *((uint32_t *)self + 35) = 0;
  *((uint8_t *)self + 147) = 0;
  v34 = *((uint32_t *)self + 33);
  if ( v34 != 0 )
  {
    v35 = *((uint32_t *)self + 34);
    v36 = v35 << 8 >> 8;
    if ( v36 > 0 )
    {
      v37 = 0;
      while ( 1 )
      {
        v38 = *(gameswf::RefCounted::Self **)(v34 + 4 * v37);
        if ( v38 != nullptr )
        {
          gameswf::RefCounted::dropRef(v38);
          v35 = *((uint32_t *)self + 34);
          v36 = v35 << 8 >> 8;
        }
        if ( ++v37 >= v36 )
          break;
        v34 = *((uint32_t *)self + 33);
      }
    }
    if ( *((uint8_t *)self + 139) != 0 )
    {
      gameswf::free_internal(*((gameswf::Self **)self + 33));
      v35 = *((uint32_t *)self + 34);
    }
  }
  else
  {
    v35 = *((uint32_t *)self + 34);
  }
  v39 = *((gameswf::Self **)self + 32);
  *((uint32_t *)self + 34) = v35 & 0xFF000000;
  *((uint32_t *)self + 33) = 0;
  *((uint8_t *)self + 139) = 0;
  if ( v39 != nullptr )
  {
    v40 = *((uint32_t *)v39 + 1);
    if ( v40 >= 0 )
    {
      v41 = 8;
      for ( n = 0; n <= v40; ++n )
      {
        v43 = (uint32_t *)((char *)v39 + v41);
        if ( *(uint32_t *)((char *)v39 + v41) != -2 )
        {
          *v43 = -2;
          v43[1] = 0;
          v39 = *((gameswf::Self **)self + 32);
        }
        v41 += 16;
      }
    }
    gameswf::free_internal(v39);
    *((uint32_t *)self + 32) = 0;
  }
  v44 = *((gameswf::Self **)self + 31);
  if ( v44 != nullptr )
  {
    v45 = *((uint32_t *)v44 + 1);
    if ( v45 >= 0 )
    {
      v46 = 8;
      for ( ii = 0; ii <= v45; ++ii )
      {
        v48 = (uint32_t *)((char *)v44 + v46);
        if ( *(uint32_t *)((char *)v44 + v46) != -2 )
        {
          *v48 = -2;
          v48[1] = 0;
          v44 = *((gameswf::Self **)self + 31);
        }
        v46 += 16;
      }
    }
    gameswf::free_internal(v44);
    *((uint32_t *)self + 31) = 0;
  }
  if ( *((uint32_t *)self + 29) != 0 )
  {
    v49 = *((uint32_t *)self + 30);
    if ( *((uint8_t *)self + 123) != 0 )
    {
      gameswf::free_internal(*((gameswf::Self **)self + 29));
      v49 = *((uint32_t *)self + 30);
    }
  }
  else
  {
    v49 = *((uint32_t *)self + 30);
  }
  v50 = *((gameswf::Self **)self + 27);
  *((uint32_t *)self + 30) = v49 & 0xFF000000;
  *((uint32_t *)self + 29) = 0;
  *((uint8_t *)self + 123) = 0;
  if ( v50 != nullptr )
  {
    v51 = *((uint32_t *)self + 28);
    if ( *((uint8_t *)self + 115) != 0 )
    {
      gameswf::free_internal(v50);
      v51 = *((uint32_t *)self + 28);
    }
  }
  else
  {
    v51 = *((uint32_t *)self + 28);
  }
  v52 = *((uint8_t *)self + 88) == 0xFF;
  *((uint32_t *)self + 28) = v51 & 0xFF000000;
  *((uint32_t *)self + 27) = 0;
  *((uint8_t *)self + 115) = 0;
  if ( v52 && (*((uint8_t *)self + 107) & 1) != 0 )
  {
    gameswf::free_internal(*((gameswf::Self **)self + 25));
    v53 = self;
    v54 = *((gameswf::Self **)self + 20);
    if ( v54 == nullptr )
      goto LABEL_120;
  }
  else
  {
    v53 = self;
    v54 = *((gameswf::Self **)self + 20);
    if ( v54 == nullptr )
    {
LABEL_120:
      v55 = *((uint32_t *)v53 + 21);
      goto LABEL_91;
    }
  }
  v55 = *((uint32_t *)v53 + 21);
  if ( *((uint8_t *)v53 + 87) != 0 )
  {
    gameswf::free_internal(v54);
    v55 = *((uint32_t *)v53 + 21);
  }
LABEL_91:
  v56 = *((uint32_t *)self + 18);
  *((uint32_t *)self + 21) = v55 & 0xFF000000;
  *((uint32_t *)self + 20) = 0;
  *((uint8_t *)self + 87) = 0;
  if ( v56 != 0 )
  {
    v57 = *((uint32_t *)self + 19);
    if ( v57 << 8 >> 8 > 0 )
    {
      v58 = 0;
      while ( 1 )
      {
        v59 = v56 + 8 * v58;
        v60 = *(uint32_t *)(v59 + 4);
        if ( *(uint32_t *)v59 != 0 && *(uint8_t *)(v59 + 7) != 0 )
        {
          gameswf::free_internal(*(gameswf::Self **)v59);
          v60 = *(uint32_t *)(v59 + 4);
        }
        *(uint32_t *)v59 = 0;
        *(uint32_t *)(v59 + 4) = v60 & 0xFF000000;
        *(uint8_t *)(v59 + 7) = 0;
        v57 = *((uint32_t *)self + 19);
        if ( ++v58 >= v57 << 8 >> 8 )
          break;
        v56 = *((uint32_t *)self + 18);
      }
    }
    if ( *((uint8_t *)self + 79) != 0 )
    {
      gameswf::free_internal(*((gameswf::Self **)self + 18));
      v57 = *((uint32_t *)self + 19);
    }
  }
  else
  {
    v57 = *((uint32_t *)self + 19);
  }
  v61 = *((gameswf::Self **)self + 16);
  *((uint32_t *)self + 19) = v57 & 0xFF000000;
  *((uint32_t *)self + 18) = 0;
  *((uint8_t *)self + 79) = 0;
  if ( v61 != nullptr )
  {
    v62 = *((uint32_t *)self + 17);
    if ( *((uint8_t *)self + 71) != 0 )
    {
      gameswf::free_internal(v61);
      v62 = *((uint32_t *)self + 17);
    }
  }
  else
  {
    v62 = *((uint32_t *)self + 17);
  }
  v63 = *((gameswf::Self **)self + 14);
  *((uint32_t *)self + 17) = v62 & 0xFF000000;
  *((uint32_t *)self + 16) = 0;
  *((uint8_t *)self + 71) = 0;
  if ( v63 != nullptr )
  {
    v64 = *((uint32_t *)self + 15);
    if ( *((uint8_t *)self + 63) != 0 )
    {
      gameswf::free_internal(v63);
      v64 = *((uint32_t *)self + 15);
    }
  }
  else
  {
    v64 = *((uint32_t *)self + 15);
  }
  v65 = *((gameswf::Self **)self + 12);
  *((uint32_t *)self + 15) = v64 & 0xFF000000;
  *((uint32_t *)self + 14) = 0;
  *((uint8_t *)self + 63) = 0;
  if ( v65 != nullptr )
  {
    v66 = *((uint32_t *)self + 13);
    if ( *((uint8_t *)self + 55) != 0 )
    {
      gameswf::free_internal(v65);
      v66 = *((uint32_t *)self + 13);
    }
  }
  else
  {
    v66 = *((uint32_t *)self + 13);
  }
  v67 = *((gameswf::Self **)self + 10);
  *((uint32_t *)self + 13) = v66 & 0xFF000000;
  *((uint32_t *)self + 12) = 0;
  *((uint8_t *)self + 55) = 0;
  if ( v67 != nullptr )
  {
    v68 = *((uint32_t *)self + 11);
    if ( *((uint8_t *)self + 47) != 0 )
    {
      gameswf::free_internal(v67);
      v68 = *((uint32_t *)self + 11);
    }
  }
  else
  {
    v68 = *((uint32_t *)self + 11);
  }
  v52 = *((uint8_t *)self + 20) == 0xFF;
  *((uint32_t *)self + 11) = v68 & 0xFF000000;
  *((uint32_t *)self + 10) = 0;
  *((uint8_t *)self + 47) = 0;
  if ( v52 && (*((uint8_t *)self + 39) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 8));
  v69 = *((gameswf::Self **)self + 3);
  if ( v69 != nullptr )
  {
    v52 = (*(uint16_t *)v69)-- == 1;
    if ( v52 )
      gameswf::free_internal(v69);
  }
  gameswf::RefCounted::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::Destroy_ea11762f0  (binary VA: 0x11762f0)
// Original: gameswf::abc_def::~abc_def
// ----------------------------------------------------------------------------
void gameswf::abc_def::Destroy_ea11762f0(gameswf::abc_def::Self *self)
{
  gameswf::abc_def::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::getMultiNamespace  (binary VA: 0x1176630)
// Original: gameswf::abc_def::getMultiNamespace
// ----------------------------------------------------------------------------
char * gameswf::abc_def::getMultiNamespace(gameswf::abc_def::Self *self, int a2)
{
  int v2;
  uint8_t v3;
  int v4;
  unsigned int v5;
  uint16_t v7;
  int v8;
  uint32_t *v9;
  gameswf::ASPackage::Self *Package;
  uint32_t *v11;
  int v12;

  v2 = *((uint32_t *)self + 20) + 8 * a2;
  v3 = *(uint8_t *)v2;
  if ( *(uint8_t *)v2 != 14 )
  {
    if ( v3 > 0xEu )
    {
      if ( (uint8_t)(v3 - 27) <= 1u )
      {
        v4 = *((uint32_t *)self + 43);
        v5 = *(uint32_t *)(*((uint32_t *)self + 16)
                       + 4
                       * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 18) + 8 * *(uint16_t *)(v2 + 6))
                                   + 4 * *(uint16_t *)(v2 + 4)));
        return *(char **)(*(uint32_t *)(v4 + 16) + 4 * *(uint32_t *)(*((uint32_t *)self + 29) + 4 * (v5 >> 8)));
      }
LABEL_4:
      v4 = *((uint32_t *)self + 43);
      v5 = *(uint32_t *)(*((uint32_t *)self + 16) + 4 * *(uint16_t *)(v2 + 4));
      return *(char **)(*(uint32_t *)(v4 + 16) + 4 * *(uint32_t *)(*((uint32_t *)self + 29) + 4 * (v5 >> 8)));
    }
    if ( v3 != 9 )
      goto LABEL_4;
  }
  v7 = *(uint16_t *)(v2 + 4);
  if ( v7 != 0 )
  {
    v4 = *((uint32_t *)self + 43);
    v5 = *(uint32_t *)(*((uint32_t *)self + 16) + 4 * v7);
    return *(char **)(*(uint32_t *)(v4 + 16) + 4 * *(uint32_t *)(*((uint32_t *)self + 29) + 4 * (v5 >> 8)));
  }
  v11 = (uint32_t *)(8 * *(uint16_t *)(v2 + 6) + *((uint32_t *)self + 18));
  if ( (int)(v11[1] << 8) <= 0 )
    return (char *)self + 88;
  v12 = *((uint32_t *)self + 20) + 8 * a2;
  v8 = 0;
  v9 = (uint32_t *)(8 * *(uint16_t *)(v2 + 6) + *((uint32_t *)self + 18));
  while ( 1 )
  {
    Package = (gameswf::ASPackage::Self *)gameswf::ASClassManager::findPackage(
                                      *((gameswf::ASClassManager::Self **)self + 43),
                                      *(const gameswf::String::Self **)(*(uint32_t *)(*((uint32_t *)self + 43) + 16)
                                                                + 4
                                                                * *(uint32_t *)(*((uint32_t *)self + 29)
                                                                            + 4
                                                                            * (*(uint32_t *)(*((uint32_t *)self + 16)
                                                                                         + 4 * *(uint32_t *)(*v9 + 4 * v8)) >> 8))),
                                      false);
    if ( Package != nullptr
      && gameswf::ASPackage::findClass(
           Package,
           *(const gameswf::String::Self **)(*(uint32_t *)(*((uint32_t *)self + 43) + 16)
                                     + 4 * *(uint32_t *)(*((uint32_t *)self + 29) + 4 * (*(uint32_t *)v12 >> 8))),
           false) != 0 )
    {
      break;
    }
    v9 = v11;
    if ( ++v8 >= (int)(v11[1] << 8) >> 8 )
      return (char *)self + 88;
  }
  *(uint16_t *)(v12 + 4) = *(uint32_t *)(*v11 + 4 * v8);
  return (char *)Package + 48;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::getMultiNamespaceInfo  (binary VA: 0x11767c0)
// Original: gameswf::abc_def::getMultiNamespaceInfo
// ----------------------------------------------------------------------------
int gameswf::abc_def::getMultiNamespaceInfo(gameswf::abc_def::Self *self, int a2)
{
  int v2;
  uint8_t v3;
  uint16_t v5;

  v2 = *((uint32_t *)self + 20) + 8 * a2;
  v3 = *(uint8_t *)v2;
  if ( *(uint8_t *)v2 == 14 )
  {
LABEL_7:
    v5 = *(uint16_t *)(v2 + 4);
    if ( v5 != 0 )
      return *((uint32_t *)self + 16) + 4 * v5;
    else
      return *((uint32_t *)self + 16) + 4 * **(uint32_t **)(*((uint32_t *)self + 18) + 8 * *(uint16_t *)(v2 + 6));
  }
  if ( v3 <= 0xEu )
  {
    if ( v3 != 9 )
      return *((uint32_t *)self + 16) + 4 * *(uint16_t *)(v2 + 4);
    goto LABEL_7;
  }
  if ( (uint8_t)(v3 - 27) > 1u )
    return *((uint32_t *)self + 16) + 4 * *(uint16_t *)(v2 + 4);
  return *((uint32_t *)self + 16)
       + 4
       * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 18) + 8 * *(uint16_t *)(v2 + 6))
                   + 4 * *(uint16_t *)(v2 + 4));
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::Construct  (binary VA: 0x1176e50)
// Original: gameswf::abc_def::abc_def
// ----------------------------------------------------------------------------
gameswf::abc_def::Self * gameswf::abc_def::Construct(gameswf::Self **self, gameswf::Player::Self *a2, const gameswf::String::Self *a3)
{
  gameswf::Self *WeakProxy;
  gameswf::Self *v4;
  int v6;
  gameswf::Self *v7;
  char *v8;
  gameswf::Self *v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v15;
  char *v16;
  int v17;
  int v18;
  gameswf::Self *v19;
  int v20;

  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)self);
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_2091678);
  *(self + 3) = nullptr;
  *(self + 4) = (gameswf::Self *)(a2);
  if ( a2 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
    v4 = *(self + 3);
    if ( WeakProxy != v4 )
    {
      if ( v4 != nullptr && (*(uint16_t *)v4)-- == 1 )
      {
        v19 = WeakProxy;
        gameswf::free_internal(v4);
        WeakProxy = v19;
      }
      *(self + 3) = WeakProxy;
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  *((uint8_t *)self + 20) = 1;
  *((uint8_t *)self + 21) = 0;
  if ( *(uint8_t *)a3 == 0xFF )
    v6 = *((uint32_t *)a3 + 1) - 1;
  else
    v6 = *(char *)a3 - 1;
  gameswf::String::resize((gameswf::String::Self *)(self + 5), v6);
  v7 = (gameswf::Self *)((const gameswf::String::Self *)((char *)a3 + 1));
  if ( *(uint8_t *)a3 == 0xFF )
    v7 = *((gameswf::Self **)a3 + 3);
  LOBYTE(v8) = *((uint8_t *)self + 20);
  if ( (uint8_t)(uintptr_t)v8 == 0xFF )
  {
    v8 = (char *)*(self + 6);
    v9 = *(self + 8);
  }
  else
  {
    v8 = (char *)(char)(uintptr_t)v8;
    v9 = (gameswf::Self *)((char *)self + 21);
  }
  gameswf::Strcpy_s(v9, v8, v7);
  v20 = *((uint32_t *)a3 + 4);
  if ( (uint8_t *)(v20 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a3 == 0xFF )
    {
      v16 = *((char **)a3 + 3);
      v15 = *((uint32_t *)a3 + 1) - 1;
    }
    else
    {
      v15 = *(char *)a3 - 1;
      v16 = (char *)a3 + 1;
    }
    v10 = 5381;
    if ( v15 > 0 )
    {
      do
      {
        --v15;
        v17 = 33 * v10;
        v18 = (uint8_t)v16[v15] + 32;
        if ( (uint8_t)(v16[v15] - 65) > 0x19u )
          v18 = (uint8_t)v16[v15];
        v10 = v17 ^ v18;
      }
      while ( v15 != 0 );
      v10 = v10 << 9 >> 9;
    }
    *((uint32_t *)a3 + 4) = v10 & 0x7FFFFF | v20 & 0xFF800000;
  }
  else
  {
    v10 = v20 << 9 >> 9;
  }
  v11 = (unsigned int)(uintptr_t)(*(self + 9)) & 0xFF800000;
  *(self + 11) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 11)) & 0xFF000000);
  v12 = v10 & 0x7FFFFF | v11;
  *(self + 13) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 13)) & 0xFF000000);
  *(self + 9) = (gameswf::Self *)v12;
  *(self + 15) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 15)) & 0xFF000000);
  *(self + 17) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 17)) & 0xFF000000);
  *((uint8_t *)self + 38) = BYTE2(v12) & 0x7F;
  v13 = (unsigned int)(uintptr_t)(*(self + 26)) | 0x7FFFFF;
  *(self + 26) = (gameswf::Self *)v13;
  *((uint8_t *)self + 39) = HIBYTE(v12) | 1;
  *(self + 19) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 19)) & 0xFF000000);
  *((uint8_t *)self + 107) = HIBYTE(v13) | 1;
  *(self + 21) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 21)) & 0xFF000000);
  *(self + 10) = nullptr;
  *((uint8_t *)self + 47) = 0;
  *(self + 12) = nullptr;
  *((uint8_t *)self + 55) = 0;
  *(self + 14) = nullptr;
  *((uint8_t *)self + 63) = 0;
  *(self + 16) = nullptr;
  *((uint8_t *)self + 71) = 0;
  *(self + 18) = nullptr;
  *((uint8_t *)self + 79) = 0;
  *(self + 20) = nullptr;
  *((uint8_t *)self + 87) = 0;
  *((uint8_t *)self + 88) = 1;
  *((uint8_t *)self + 89) = 0;
  *((uint8_t *)self + 106) = BYTE2(v13) | 0x80;
  *(self + 28) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 28)) & 0xFF000000);
  *(self + 30) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 30)) & 0xFF000000);
  *(self + 34) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 34)) & 0xFF000000);
  *(self + 36) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 36)) & 0xFF000000);
  *(self + 38) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 38)) & 0xFF000000);
  *(self + 40) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 40)) & 0xFF000000);
  *(self + 42) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 42)) & 0xFF000000);
  *(self + 27) = nullptr;
  *((uint8_t *)self + 115) = 0;
  *(self + 43) = (gameswf::Self *)((gameswf::Player::Self *)((char *)a2 + 236));
  *(self + 29) = nullptr;
  *((uint8_t *)self + 123) = 0;
  *(self + 31) = nullptr;
  *(self + 32) = nullptr;
  *(self + 33) = nullptr;
  *((uint8_t *)self + 139) = 0;
  *(self + 35) = nullptr;
  *((uint8_t *)self + 147) = 0;
  *(self + 37) = nullptr;
  *((uint8_t *)self + 155) = 0;
  *(self + 39) = nullptr;
  *((uint8_t *)self + 163) = 0;
  *(self + 41) = nullptr;
  *((uint8_t *)self + 171) = 0;
  return (gameswf::abc_def::Self *)gameswf::AS3Engine::registerABC(
                               (gameswf::Player::Self *)((char *)a2 + 236),
                               (gameswf::abc_def::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::read_cpool  (binary VA: 0x11771c0)
// Original: gameswf::abc_def::read_cpool
// ----------------------------------------------------------------------------
void gameswf::abc_def::read_cpool(gameswf::abc_def::Self *self, gameswf::Stream::Self *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  gameswf::Self *v5;
  int VU32;
  uint32_t *v7;
  int v8;
  int v9;
  int i;
  uint32_t *v11;
  int j;
  int v13;
  int *v14;
  int v15;
  uint32_t *v16;
  int m;
  int v18;
  int *v19;
  int v20;
  int v21;
  uint64_t *v22;
  int v23;
  int v24;
  double *v25;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  int ii;
  uint32_t *v31;
  gameswf::Self *v32;
  int jj;
  int v34;
  uint32_t *v35;
  uint8_t *v36;
  int mm;
  int v38;
  int v39;
  int v40;
  int v41;
  int *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  uint32_t *v47;
  int v48;
  int v49;
  int *v50;
  int v51;
  int i1;
  uint8_t v53;
  uint8_t *v54;
  int v55;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  uint8_t *v62;
  int v63;
  int v64;
  int v65;
  int kk;
  uint8_t *v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int k;
  uint32_t *v77;
  int v78;
  int n;
  uint64_t *v80;
  typedef int *_g4_t_v81;
  typedef void *_g4_t_v82;
  typedef gameswf::PermanentAllocator::Self *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_nn;
  typedef uint8_t _g4_t_U8;
  typedef int *_g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef char _g4_t_v95;
  typedef char _g4_t_v96;
  typedef gameswf::Self *_g4_t_v97;
  typedef int16_t _g4_t_v98;
  typedef char _g4_t_v99;
  typedef char _g4_t_v100;
  typedef uint8_t _g4_t_v101[12];
  typedef gameswf::Self *_g4_t_v102;
  typedef int16_t _g4_t_v103;
  typedef char _g4_t_v104;
  typedef char _g4_t_v105;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v81)) > _g4_s0 ? (0u + sizeof(_g4_t_v81)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v82)) > _g4_s1 ? (24u + sizeof(_g4_t_v82)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v83)) > _g4_s2 ? (28u + sizeof(_g4_t_v83)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v84)) > _g4_s3 ? (32u + sizeof(_g4_t_v84)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_nn)) > _g4_s4 ? (36u + sizeof(_g4_t_nn)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_U8)) > _g4_s5 ? (40u + sizeof(_g4_t_U8)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v87)) > _g4_s6 ? (40u + sizeof(_g4_t_v87)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v88)) > _g4_s7 ? (44u + sizeof(_g4_t_v88)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v89)) > _g4_s8 ? (44u + sizeof(_g4_t_v89)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v90)) > _g4_s9 ? (44u + sizeof(_g4_t_v90)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v91)) > _g4_s10 ? (44u + sizeof(_g4_t_v91)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v92)) > _g4_s11 ? (44u + sizeof(_g4_t_v92)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v93)) > _g4_s12 ? (44u + sizeof(_g4_t_v93)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v94)) > _g4_s13 ? (44u + sizeof(_g4_t_v94)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v95)) > _g4_s14 ? (48u + sizeof(_g4_t_v95)) : _g4_s14,
    _g4_s16 = (49u + sizeof(_g4_t_v96)) > _g4_s15 ? (49u + sizeof(_g4_t_v96)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v97)) > _g4_s16 ? (60u + sizeof(_g4_t_v97)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v98)) > _g4_s17 ? (64u + sizeof(_g4_t_v98)) : _g4_s17,
    _g4_s19 = (66u + sizeof(_g4_t_v99)) > _g4_s18 ? (66u + sizeof(_g4_t_v99)) : _g4_s18,
    _g4_s20 = (67u + sizeof(_g4_t_v100)) > _g4_s19 ? (67u + sizeof(_g4_t_v100)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v101)) > _g4_s20 ? (80u + sizeof(_g4_t_v101)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v102)) > _g4_s21 ? (92u + sizeof(_g4_t_v102)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v103)) > _g4_s22 ? (96u + sizeof(_g4_t_v103)) : _g4_s22,
    _g4_s24 = (98u + sizeof(_g4_t_v104)) > _g4_s23 ? (98u + sizeof(_g4_t_v104)) : _g4_s23,
    _g4_s25 = (99u + sizeof(_g4_t_v105)) > _g4_s24 ? (99u + sizeof(_g4_t_v105)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 0u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 24u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 28u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 32u);
  _g4_t_nn &nn = *reinterpret_cast<_g4_t_nn *>(_g4_sf + 36u);
  _g4_t_U8 &U8 = *reinterpret_cast<_g4_t_U8 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 40u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 44u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 44u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 44u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 44u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 44u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 44u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 44u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 48u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 49u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 60u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 64u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 66u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 67u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 80u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 92u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 96u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 98u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 99u);

  v2 = (uint32_t *)opNew(0x28u);
  v82 = v2;
  v3 = v2 + 10;
  do
    *v2++ = 0;
  while ( v2 != v3 );
  v4 = *((uint32_t *)self + 4);
  if ( v4 != 0 )
  {
    v5 = *((gameswf::Self **)self + 3);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      if ( (*(uint16_t *)v5)-- == 1 )
        gameswf::free_internal(v5);
      v4 = 0;
      *((uint32_t *)self + 3) = 0;
      *((uint32_t *)self + 4) = 0;
    }
  }
  v83 = (gameswf::PermanentAllocator::Self *)(v4 + 76);
  VU32 = gameswf::Stream::readVU32(a2);
  v88 = VU32;
  if ( VU32 > 0 )
  {
    v7 = *((uint32_t **)self + 10);
    if ( v7 == nullptr )
    {
      v8 = VU32 << 8 >> 8;
      *((uint32_t *)self + 11) = v8 & 0xFFFFFF | *((uint32_t *)self + 11) & 0xFF000000;
      v7 = (uint32_t *)gameswf::malloc_internal(4 * v8);
      *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(v7);
      *((uint8_t *)self + 47) = 1;
      v9 = (int)(*((uint32_t *)self + 11) << 8) >> 8;
      if ( v9 > 0 )
      {
        for ( i = 0; i < v9; ++i )
        {
          v11 = &v7[i];
          if ( v11 != nullptr )
          {
            *v11 = 0;
            v7 = *((uint32_t **)self + 10);
            v9 = (int)(*((uint32_t *)self + 11) << 8) >> 8;
          }
        }
      }
    }
    *v7 = 0;
    if ( v88 != 1 )
    {
      for ( j = 1; j != v88; ++j )
      {
        v13 = 4 * j;
        v14 = (int *)(*((uint32_t *)self + 10) + v13);
        *v14 = gameswf::Stream::readVU32(a2);
      }
    }
  }
  v15 = gameswf::Stream::readVU32(a2);
  v89 = v15;
  if ( v15 > 0 )
  {
    v16 = *((uint32_t **)self + 12);
    if ( v16 == nullptr )
    {
      v74 = v15 << 8 >> 8;
      *((uint32_t *)self + 13) = v74 & 0xFFFFFF | *((uint32_t *)self + 13) & 0xFF000000;
      v16 = (uint32_t *)gameswf::malloc_internal(4 * v74);
      *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v16);
      *((uint8_t *)self + 55) = 1;
      v75 = (int)(*((uint32_t *)self + 13) << 8) >> 8;
      if ( v75 > 0 )
      {
        for ( k = 0; k < v75; ++k )
        {
          v77 = &v16[k];
          if ( v77 != nullptr )
          {
            *v77 = 0;
            v16 = *((uint32_t **)self + 12);
            v75 = (int)(*((uint32_t *)self + 13) << 8) >> 8;
          }
        }
      }
    }
    *v16 = 0;
    if ( v89 != 1 )
    {
      for ( m = 1; m != v89; ++m )
      {
        v18 = 4 * m;
        v19 = (int *)(*((uint32_t *)self + 12) + v18);
        *v19 = gameswf::Stream::readVU32(a2);
      }
    }
  }
  v20 = gameswf::Stream::readVU32(a2);
  v21 = v20;
  if ( v20 > 0 )
  {
    v22 = *((uint64_t **)self + 14);
    if ( v22 == nullptr )
    {
      *((uint32_t *)self + 15) = (v20 << 8 >> 8) & 0xFFFFFF | *((uint32_t *)self + 15) & 0xFF000000;
      v22 = (uint64_t *)gameswf::malloc_internal(8 * (v20 << 8 >> 8));
      *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(v22);
      *((uint8_t *)self + 63) = 1;
      v78 = (int)(*((uint32_t *)self + 15) << 8) >> 8;
      if ( v78 > 0 )
      {
        for ( n = 0; n < v78; ++n )
        {
          v80 = &v22[n];
          if ( v80 != nullptr )
          {
            *v80 = 0;
            v22 = *((uint64_t **)self + 14);
            v78 = (int)(*((uint32_t *)self + 15) << 8) >> 8;
          }
        }
      }
    }
    *v22 = 0;
    if ( v21 != 1 )
    {
      v23 = 1;
      v90 = v21;
      do
      {
        v24 = 8 * v23++;
        v25 = (double *)(*((uint32_t *)self + 14) + v24);
        *v25 = gameswf::Stream::readDouble(a2);
      }
      while ( v23 != v90 );
    }
  }
  v26 = gameswf::Stream::readVU32(a2);
  v91 = v26;
  if ( v26 > 0 )
  {
    v27 = *((uint32_t **)self + 29);
    if ( v27 == nullptr )
    {
      v28 = v26 << 8 >> 8;
      *((uint32_t *)self + 30) = v28 & 0xFFFFFF | *((uint32_t *)self + 30) & 0xFF000000;
      v27 = (uint32_t *)gameswf::malloc_internal(4 * v28);
      *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)(v27);
      *((uint8_t *)self + 123) = 1;
      v29 = (int)(*((uint32_t *)self + 30) << 8) >> 8;
      if ( v29 > 0 )
      {
        for ( ii = 0; ii < v29; ++ii )
        {
          v31 = &v27[ii];
          if ( v31 != nullptr )
          {
            *v31 = 0;
            v27 = *((uint32_t **)self + 29);
            v29 = (int)(*((uint32_t *)self + 30) << 8) >> 8;
          }
        }
      }
    }
    v95 = 1;
    v96 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v95, 0);
    v32 = (gameswf::Self *)&v96;
    if ( v95 == -1 )
      v32 = v97;
    gameswf::Strcpy_s(v32, (char *)&dword_0 + 1, (gameswf::Self *)&unk_1B15112);
    v98 = -1;
    v99 = 127;
    v100 |= 1u;
    *v27 = gameswf::ASClassManager::registerGlobalString(
             *((gameswf::ASClassManager::Self **)self + 43),
             (const gameswf::String::Self *)&v95,
             true);
    if ( v95 == -1 && (v100 & 1) != 0 )
      gameswf::free_internal(v97);
    if ( v91 != 1 )
    {
      for ( jj = 1; jj != v91; ++jj )
      {
        while ( 1 )
        {
          v34 = gameswf::Stream::readVU32(a2);
          v103 = -1;
          v101[0] = 1;
          v104 = 127;
          v105 |= 1u;
          v101[1] = 0;
          gameswf::Stream::readStringWithLength(a2, v34, (gameswf::String::Self *)v101);
          v35 = (uint32_t *)(*((uint32_t *)self + 29) + 4 * jj);
          *v35 = gameswf::ASClassManager::registerGlobalString(
                   *((gameswf::ASClassManager::Self **)self + 43),
                   (const gameswf::String::Self *)v101,
                   true);
          if ( v101[0] == 0xFF && (v105 & 1) != 0 )
            break;
          if ( ++jj == v91 )
            goto LABEL_41;
        }
        gameswf::free_internal(v102);
      }
    }
  }
LABEL_41:
  v92 = gameswf::Stream::readVU32(a2);
  if ( v92 > 0 )
  {
    v36 = *((uint8_t **)self + 16);
    if ( v36 == nullptr )
    {
      *((uint32_t *)self + 17) = (v92 << 8 >> 8) & 0xFFFFFF | *((uint32_t *)self + 17) & 0xFF000000;
      v36 = (uint8_t *)gameswf::malloc_internal(4 * (v92 << 8 >> 8));
      *((uint8_t *)self + 71) = 1;
      v64 = *((uint32_t *)self + 17) << 8;
      *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(v36);
      v65 = v64 >> 8;
      if ( v65 > 0 )
      {
        for ( kk = 0; kk < v65; ++kk )
        {
          v67 = &v36[4 * kk];
          if ( v67 != nullptr )
          {
            *v67 = 0;
            *(uint32_t *)v67 = (uint8_t)*v67;
            v36 = *((uint8_t **)self + 16);
            v65 = (int)(*((uint32_t *)self + 17) << 8) >> 8;
          }
        }
      }
    }
    *v36 = 0;
    *(uint32_t *)v36 = (uint8_t)*v36;
    if ( v92 != 1 )
    {
      for ( mm = 1; mm != v92; ++mm )
      {
        U8 = gameswf::Stream::readU8(a2);
        v38 = gameswf::Stream::readVU32(a2);
        v39 = 4 * mm;
        *(uint32_t *)(*((uint32_t *)self + 16) + v39) = (v38 << 8) | U8;
      }
    }
  }
  v40 = gameswf::Stream::readVU32(a2);
  v84 = v40;
  if ( v40 > 0 )
  {
    if ( *((uint32_t *)self + 18) == 0 )
    {
      v68 = v40 << 8 >> 8;
      *((uint32_t *)self + 19) = v68 & 0xFFFFFF | *((uint32_t *)self + 19) & 0xFF000000;
      v69 = gameswf::malloc_internal(8 * v68);
      *((uint8_t *)self + 79) = 1;
      v70 = *((uint32_t *)self + 19) << 8;
      *((uint32_t *)self + 18) = v69;
      v71 = v70 >> 8;
      if ( v71 > 0 )
      {
        v72 = 0;
        while ( 1 )
        {
          v73 = v69 + 8 * v72;
          if ( v73 != 0 )
          {
            *(uint32_t *)(v73 + 4) &= 0xFF000000;
            *(uint32_t *)v73 = 0;
            *(uint8_t *)(v73 + 7) = 0;
            v71 = (int)(*((uint32_t *)self + 19) << 8) >> 8;
          }
          if ( ++v72 >= v71 )
            break;
          v69 = *((uint32_t *)self + 18);
        }
      }
    }
    if ( v84 != 1 )
    {
      for ( nn = 1; nn != v84; ++nn )
      {
        v41 = gameswf::Stream::readVU32(a2);
        v93 = v41;
        v42 = (int *)(*((uint32_t *)self + 18) + 8 * nn);
        if ( v41 > 0 )
        {
          if ( *v42 == 0 )
          {
            v43 = v41 << 8 >> 8;
            v42[1] = v43 & 0xFFFFFF | v42[1] & 0xFF000000;
            v81 = v42;
            if ( v83 != nullptr )
            {
              v44 = gameswf::PermanentAllocator::allocate(v83, 4 * v43);
              v42 = v81;
              *v81 = v44;
              *((uint8_t *)v81 + 7) = 0;
            }
            else
            {
              v44 = gameswf::malloc_internal(4 * v43);
              v42 = v81;
              *v81 = v44;
              *((uint8_t *)v81 + 7) = 1;
            }
            v45 = 0;
            v46 = v42[1] << 8 >> 8;
            if ( v46 > 0 )
            {
              while ( 1 )
              {
                v47 = (uint32_t *)(v44 + 4 * v45);
                if ( v47 != nullptr )
                {
                  *v47 = 0;
                  v46 = v42[1] << 8 >> 8;
                }
                if ( ++v45 >= v46 )
                  break;
                v44 = *v42;
              }
            }
          }
          v48 = 0;
          v87 = v42;
          do
          {
            v49 = 4 * v48++;
            v50 = (int *)(*v87 + v49);
            *v50 = gameswf::Stream::readVU32(a2);
          }
          while ( v48 < v93 );
        }
      }
    }
  }
  v51 = gameswf::Stream::readVU32(a2);
  v94 = v51;
  if ( v51 > 0 )
  {
    if ( *((uint32_t *)self + 20) == 0 )
    {
      v57 = v51 << 8 >> 8;
      *((uint32_t *)self + 21) = v57 & 0xFFFFFF | *((uint32_t *)self + 21) & 0xFF000000;
      v58 = gameswf::malloc_internal(8 * v57);
      *((uint8_t *)self + 87) = 1;
      v59 = *((uint32_t *)self + 21) << 8;
      *((uint32_t *)self + 20) = v58;
      v60 = v59 >> 8;
      if ( v60 > 0 )
      {
        v61 = 0;
        while ( 1 )
        {
          v62 = (uint8_t *)(v58 + 8 * v61);
          if ( v62 != nullptr )
          {
            *v62 = 0;
            *((uint16_t *)v62 + 2) = 0;
            v63 = *v62;
            *((uint16_t *)v62 + 3) = 0;
            *(uint32_t *)v62 = v63;
            v60 = (int)(*((uint32_t *)self + 21) << 8) >> 8;
          }
          if ( ++v61 >= v60 )
            break;
          v58 = *((uint32_t *)self + 20);
        }
      }
    }
    if ( v94 != 1 )
    {
      for ( i1 = 1; i1 != v94; ++i1 )
      {
        while ( 1 )
        {
          v53 = gameswf::Stream::readU8(a2);
          v54 = (uint8_t *)(*((uint32_t *)self + 20) + 8 * i1);
          *v54 = v53;
          if ( v53 <= 0x1Cu )
            break;
LABEL_70:
          if ( ++i1 == v94 )
            goto LABEL_74;
        }
        v55 = 1 << v53;
        if ( (v55 & 0x4200) == 0 )
        {
          if ( (v55 & 0x2080) != 0 )
          {
            *((uint16_t *)v54 + 2) = gameswf::Stream::readVU32(a2);
            *(uint32_t *)v54 = (gameswf::Stream::readVU32(a2) << 8) | *v54;
          }
          else if ( (v55 & 0x18000000) != 0 )
          {
            *((uint16_t *)v54 + 3) = gameswf::Stream::readVU32(a2);
          }
          goto LABEL_70;
        }
        *(uint32_t *)v54 = (gameswf::Stream::readVU32(a2) << 8) | *v54;
        *((uint16_t *)v54 + 3) = gameswf::Stream::readVU32(a2);
      }
    }
  }
LABEL_74:
  if ( v82 != nullptr )
    opDelete(v82);
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::readMethodInfos  (binary VA: 0x1177b40)
// Original: gameswf::abc_def::readMethodInfos
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::abc_def::readMethodInfos(gameswf::abc_def::Self *a1, gameswf::Stream::Self *a2, uint32_t *a3)
{
  gameswf::RefCounted::Self *result;
  int v4;
  int VU32;
  gameswf::Player::Self *v6;
  gameswf::Self *v7;
  gameswf::RefCounted::Self **v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int Position;
  gameswf::RefCounted::Self *v17;
  int v18;
  gameswf::RefCounted::Self *v19;

  result = (gameswf::RefCounted::Self *)gameswf::Stream::readVU32(a2);
  v19 = result;
  if ( (int)(uintptr_t)(result) > 0 )
  {
    if ( *((uint32_t *)a1 + 33) == 0 )
    {
      v9 = (int)((uint32_t)(uintptr_t)(result) << 8) >> 8;
      *((uint32_t *)a1 + 34) = v9 & 0xFFFFFF | *((uint32_t *)a1 + 34) & 0xFF000000;
      v10 = gameswf::malloc_internal(4 * v9);
      *((uint8_t *)a1 + 139) = 1;
      v11 = *((uint32_t *)a1 + 34) << 8;
      *((uint32_t *)a1 + 33) = v10;
      v12 = v11 >> 8;
      if ( v12 > 0 )
      {
        v13 = 0;
        while ( 1 )
        {
          v14 = (uint32_t *)(v10 + 4 * v13);
          if ( v14 != nullptr )
          {
            *v14 = 0;
            v12 = (int)(*((uint32_t *)a1 + 34) << 8) >> 8;
          }
          if ( ++v13 >= v12 )
            break;
          v10 = *((uint32_t *)a1 + 33);
        }
      }
    }
    v4 = 0;
    while ( a3 != nullptr )
    {
      v18 = 4 * v4;
      VU32 = gameswf::Stream::readVU32(a2);
      if ( *(uint32_t *)(*a3 + 4 * v4) != 2 )
        goto LABEL_6;
      Position = gameswf::Stream::getPosition(a2);
      result = (gameswf::RefCounted::Self *)gameswf::Stream::setPosition(a2, Position + VU32);
LABEL_13:
      if ( ++v4 >= (int)(uintptr_t)(v19) )
        return result;
    }
    v18 = 4 * v4;
LABEL_6:
    v6 = *((gameswf::Player::Self **)a1 + 4);
    if ( v6 != nullptr )
    {
      v7 = *((gameswf::Self **)a1 + 3);
      if ( *((uint8_t *)v7 + 2) == 0 )
      {
        if ( (*(uint16_t *)v7)-- == 1 )
          gameswf::free_internal(v7);
        *((uint32_t *)a1 + 3) = 0;
        *((uint32_t *)a1 + 4) = 0;
        v6 = nullptr;
      }
    }
    v17 = (gameswf::RefCounted::Self *)opNew(0x68u);
    gameswf::AS3Function::Construct(v17, a1, v4, v6);
    gameswf::AS3Function::read(v17, a2);
    v8 = (gameswf::RefCounted::Self **)(*((uint32_t *)a1 + 33) + v18);
    result = v17;
    if ( v17 != *v8 )
    {
      if ( *v8 != nullptr )
      {
        gameswf::RefCounted::dropRef(*v8);
        result = v17;
      }
      *v8 = result;
      if ( result != nullptr )
        result = gameswf::RefCounted::addRef(result);
    }
    goto LABEL_13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::readInstanceInfos  (binary VA: 0x1177d60)
// Original: gameswf::abc_def::readInstanceInfos
// ----------------------------------------------------------------------------
char gameswf::abc_def::readInstanceInfos(gameswf::abc_def::Self *self, gameswf::Stream::Self *a2)
{
  int VU32;
  gameswf::Stream::Self *v3;
  int v4;
  gameswf::instance_info::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  gameswf::Stream::Self *v12;

  VU32 = gameswf::Stream::readVU32(a2);
  v3 = (gameswf::Stream::Self *)VU32;
  if ( VU32 > 0 )
  {
    if ( *((uint32_t *)self + 37) == 0 )
    {
      *((uint32_t *)self + 38) = (VU32 << 8 >> 8) & 0xFFFFFF | *((uint32_t *)self + 38) & 0xFF000000;
      v6 = gameswf::malloc_internal(VU32 << 8 >> 8 << 6);
      *((uint8_t *)self + 155) = 1;
      v7 = *((uint32_t *)self + 38) << 8;
      *((uint32_t *)self + 37) = v6;
      v8 = v7 >> 8;
      if ( v8 > 0 )
      {
        v9 = 0;
        v12 = v3;
        while ( 1 )
        {
          v10 = v6 + (v9 << 6);
          if ( v10 != 0 )
          {
            *(uint32_t *)(v10 + 8) &= 0xFF000000;
            *(uint32_t *)(v10 + 40) &= 0xFF000000;
            *(uint32_t *)(v10 + 60) &= 0xFF000000;
            *(uint32_t *)v10 = 0;
            *(uint32_t *)(v10 + 4) = 0;
            *(uint8_t *)(v10 + 11) = 0;
            *(uint32_t *)(v10 + 12) = 0;
            *(uint16_t *)(v10 + 16) = -1;
            *(uint16_t *)(v10 + 18) = 0;
            *(uint32_t *)(v10 + 20) = 0;
            *(uint32_t *)(v10 + 24) = 0;
            *(uint32_t *)(v10 + 28) = 0;
            *(uint32_t *)(v10 + 32) = 0;
            *(uint32_t *)(v10 + 36) = 0;
            *(uint8_t *)(v10 + 43) = 0;
            *(uint32_t *)(v10 + 44) = 0;
            *(uint8_t *)(v10 + 48) = 0;
            *(uint16_t *)(v10 + 50) = 0;
            *(uint32_t *)(v10 + 52) = 0;
            *(uint32_t *)(v10 + 56) = 0;
            *(uint8_t *)(v10 + 63) = 0;
            v8 = (int)(*((uint32_t *)self + 38) << 8) >> 8;
          }
          if ( ++v9 >= v8 )
            break;
          v6 = *((uint32_t *)self + 37);
        }
        v3 = v12;
      }
    }
    v4 = 0;
    do
    {
      v5 = (gameswf::instance_info::Self *)(*((uint32_t *)self + 37) + (v4 << 6));
      *((uint32_t *)v5 + 5) = v4++;
      LOBYTE(VU32) = gameswf::instance_info::read(v5, a2, self);
    }
    while ( v4 < (int)(uintptr_t)(v3) );
  }
  return VU32;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::readClassInfos  (binary VA: 0x1177f00)
// Original: gameswf::abc_def::readClassInfos
// ----------------------------------------------------------------------------
void gameswf::abc_def::readClassInfos(gameswf::abc_def::Self *a1, gameswf::Stream::Self *a2, uint32_t *a3, uint32_t *a4)
{
  int v4;
  gameswf::class_info::Self *v5;
  int v6;
  int v7;
  int i;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  v4 = (int)(*((uint32_t *)a1 + 38) << 8) >> 8;
  v17 = v4;
  if ( v4 > 0 )
  {
    if ( *((uint32_t *)a1 + 39) == 0 )
    {
      *((uint32_t *)a1 + 40) = v4 & 0xFFFFFF | *((uint32_t *)a1 + 40) & 0xFF000000;
      v10 = gameswf::malloc_internal(24 * v4);
      *((uint32_t *)a1 + 39) = v10;
      *((uint8_t *)a1 + 163) = 1;
      v11 = (int)(*((uint32_t *)a1 + 40) << 8) >> 8;
      if ( v11 > 0 )
      {
        v12 = 0;
        v13 = 0;
        while ( 1 )
        {
          v14 = v12 + v10;
          if ( v14 != 0 )
          {
            *(uint32_t *)(v14 + 8) &= 0xFF000000;
            *(uint32_t *)v14 = 0;
            *(uint32_t *)(v14 + 4) = 0;
            *(uint8_t *)(v14 + 11) = 0;
            *(uint32_t *)(v14 + 12) = 0;
            *(uint16_t *)(v14 + 16) = -1;
            *(uint16_t *)(v14 + 18) = 0;
            *(uint32_t *)(v14 + 20) = 0;
            v11 = (int)(*((uint32_t *)a1 + 40) << 8) >> 8;
          }
          ++v13;
          v12 += 24;
          if ( v13 >= v11 )
            break;
          v10 = *((uint32_t *)a1 + 39);
        }
      }
    }
    v16 = 0;
    v15 = 0;
    do
    {
      v5 = (gameswf::class_info::Self *)(*((uint32_t *)a1 + 39) + v16);
      gameswf::class_info::read(v5, a2, a1);
      *(uint32_t *)(*a4 + 4 * *((uint32_t *)v5 + 5)) = 1;
      if ( *(uint8_t *)(*a3 + v15) != 0 )
      {
        v6 = (int)(*((uint32_t *)v5 + 2) << 8) >> 8;
        if ( v6 > 0 )
        {
          v7 = 0;
          for ( i = 0; i < v6; ++i )
          {
            v9 = *((uint32_t *)v5 + 1) + v7;
            if ( (*(uint8_t *)(v9 + 3) & 0xFu) - 1 <= 2 )
            {
              *(uint32_t *)(*a4 + 4 * *(uint32_t *)(v9 + 8)) = 2;
              v6 = (int)(*((uint32_t *)v5 + 2) << 8) >> 8;
            }
            v7 += 20;
          }
        }
      }
      ++v15;
      v16 += 24;
    }
    while ( v15 < v17 );
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::readScriptInfos  (binary VA: 0x11780d0)
// Original: gameswf::abc_def::readScriptInfos
// ----------------------------------------------------------------------------
int gameswf::abc_def::readScriptInfos(gameswf::abc_def::Self *a1, gameswf::Stream::Self *a2, uint32_t *a3)
{
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  gameswf::Self *v9;
  int v10;
  int v11;
  int i;
  uint32_t *v13;
  unsigned int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef gameswf::Self *_g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef int16_t _g4_t_v22;
  typedef int _g4_t_v23;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v18)) > _g4_s3 ? (20u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v19)) > _g4_s4 ? (24u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v20)) > _g4_s5 ? (28u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v21)) > _g4_s6 ? (32u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (34u + sizeof(_g4_t_v22)) > _g4_s7 ? (34u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v23)) > _g4_s8 ? (36u + sizeof(_g4_t_v23)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 34u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);

  result = gameswf::Stream::readVU32(a2);
  v15 = result;
  if ( result > 0 )
  {
    if ( *((uint32_t *)a1 + 41) == 0 )
    {
      *((uint32_t *)a1 + 42) = (result << 8 >> 8) & 0xFFFFFF | *((uint32_t *)a1 + 42) & 0xFF000000;
      v4 = gameswf::malloc_internal(4 * (result << 8 >> 8));
      *((uint8_t *)a1 + 171) = 1;
      v5 = *((uint32_t *)a1 + 42) << 8;
      *((uint32_t *)a1 + 41) = v4;
      v6 = v5 >> 8;
      if ( v6 > 0 )
      {
        v7 = 0;
        while ( 1 )
        {
          v8 = (uint32_t *)(v4 + 4 * v7);
          if ( v8 != nullptr )
          {
            *v8 = 0;
            v6 = (int)(*((uint32_t *)a1 + 42) << 8) >> 8;
          }
          if ( ++v7 >= v6 )
            break;
          v4 = *((uint32_t *)a1 + 41);
        }
      }
    }
    v16 = 0;
    do
    {
      v19 &= 0xFF000000;
      v17 = 0;
      v18 = nullptr;
      HIBYTE(v19) = 0;
      v20 = nullptr;
      v21 = -1;
      v22 = 0;
      v23 = 0;
      gameswf::script_info::read((gameswf::script_info::Self *)&v17, a2, a1);
      *(uint32_t *)(*((uint32_t *)a1 + 41) + 4 * v16) = v23;
      *(uint32_t *)(*a3 + 4 * v23) = 1;
      v9 = (gameswf::Self *)v20;
      if ( v20 != nullptr )
      {
        v10 = v20[1];
        if ( v10 >= 0 )
        {
          v11 = 8;
          for ( i = 0; i <= v10; ++i )
          {
            v13 = (uint32_t *)((char *)v9 + v11);
            if ( *(uint32_t *)((char *)v9 + v11) != -2 )
            {
              *v13 = -2;
              v13[1] = 0;
              v9 = (gameswf::Self *)v20;
            }
            v11 += 16;
          }
        }
        gameswf::free_internal(v9);
        v20 = nullptr;
      }
      v14 = v19;
      if ( v18 != nullptr && HIBYTE(v19) != 0 )
      {
        gameswf::free_internal(v18);
        v14 = v19;
      }
      ++v16;
      result = v15;
      v19 = v14 & 0xFF000000;
      HIBYTE(v19) = 0;
    }
    while ( v16 < v15 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::readBodyInfos  (binary VA: 0x11782d0)
// Original: gameswf::abc_def::readBodyInfos
// ----------------------------------------------------------------------------
int gameswf::abc_def::readBodyInfos(uint32_t *a1, gameswf::Stream::Self *a2, uint32_t *a3, char a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int VU32;
  int v10;
  gameswf::Player::Self *v11;
  gameswf::Self *v12;
  gameswf::RefCounted::Self **v13;
  int Position;
  gameswf::ASObject::Self *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  result = gameswf::Stream::readVU32(a2);
  v21 = result;
  if ( result > 0 )
  {
    v20 = 0;
    while ( 1 )
    {
      VU32 = gameswf::Stream::readVU32(a2);
      v10 = VU32;
      if ( a4 == 0 )
        break;
      v5 = gameswf::Stream::readVU32(a2);
      v6 = 4 * v10;
      v7 = *(uint32_t *)(*a3 + 4 * v10);
      if ( v7 == 2 )
      {
        v19 = v5;
        Position = gameswf::Stream::getPosition(a2);
        gameswf::Stream::setPosition(a2, v19 + Position);
LABEL_5:
        ++v20;
        result = v21;
        if ( v20 == v21 )
          return result;
      }
      else
      {
LABEL_4:
        v17 = v6;
        gameswf::AS3Function::readBody(*(gameswf::AS3Function::Self **)(a1[33] + v6), a2, v7 == 0);
        v8 = v17;
        if ( *(uint32_t *)(*a3 + v17) != 2 )
          goto LABEL_5;
        v16 = *(gameswf::ASObject::Self **)(a1[33] + v17);
        v11 = (gameswf::Player::Self *)a1[4];
        if ( v11 != nullptr )
        {
          v12 = (gameswf::Self *)a1[3];
          if ( *((uint8_t *)v12 + 2) == 0 )
          {
            if ( (*(uint16_t *)v12)-- == 1 )
            {
              gameswf::free_internal(v12);
              v8 = v17;
            }
            a1[3] = 0;
            a1[4] = 0;
            v11 = nullptr;
          }
        }
        v18 = v8;
        gameswf::Player::unregisterObject(v11, v16);
        v13 = (gameswf::RefCounted::Self **)(a1[33] + v18);
        if ( *v13 == nullptr )
          goto LABEL_5;
        gameswf::RefCounted::dropRef(*v13);
        ++v20;
        result = v21;
        *v13 = nullptr;
        if ( v20 == v21 )
          return result;
      }
    }
    v6 = 4 * VU32;
    v7 = *(uint32_t *)(*a3 + 4 * v10);
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::assignClasses  (binary VA: 0x11784a0)
// Original: gameswf::abc_def::assignClasses
// ----------------------------------------------------------------------------
int gameswf::abc_def::assignClasses(gameswf::abc_def::Self *a1, uint32_t *a2, uint32_t *a3)
{
  int result;
  gameswf::abc_def::Self *v4;
  gameswf::ASClass::Self *v5;
  char *MultiNamespace;
  const gameswf::String::Self *v7;
  gameswf::ASPackage::Self *Package;
  int v9;
  int v10;
  int i;
  int v12;
  char *v13;
  gameswf::ASObject::Self *(**Class)(gameswf::Player::Self *);
  gameswf::ASClass::Self *v15;
  int v16;
  int v17;
  int v18;
  gameswf::ASClass::Self *v19;
  uint32_t *v20;
  char *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  uint32_t *v27;
  int j;
  gameswf::Self *v29;
  gameswf::Self *v30;
  int16_t v31;
  typedef gameswf::ASClass::Self *_g4_t_v32;
  typedef gameswf::ASClass::Self *_g4_t_v33;
  typedef gameswf::ASClass::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef gameswf::instance_info::Self *_g4_t_v36;
  typedef gameswf::instance_info::Self *_g4_t_v37;
  typedef gameswf::ASObject::Self *(*_g4_t_v38)(gameswf::Player::Self *);
  typedef gameswf::String::Self *_g4_t_v39;
  typedef gameswf::Player::Self *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef gameswf::Self *_g4_t_v42;
  typedef gameswf::ASClass::Self *_g4_t_v43;
  typedef uint8_t _g4_t_v44[40];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v32)) > _g4_s0 ? (0u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v33)) > _g4_s1 ? (0u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v34)) > _g4_s2 ? (0u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v35)) > _g4_s3 ? (8u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v36)) > _g4_s4 ? (12u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v37)) > _g4_s5 ? (12u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v38)) > _g4_s6 ? (16u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v39)) > _g4_s7 ? (16u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v40)) > _g4_s8 ? (20u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v41)) > _g4_s9 ? (20u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v42)) > _g4_s10 ? (24u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v43)) > _g4_s11 ? (28u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v44)) > _g4_s12 ? (36u + sizeof(_g4_t_v44)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);

  result = *((uint32_t *)a1 + 38) << 8;
  if ( result > 0 )
  {
    v35 = 0;
    v4 = a1;
    do
    {
      v5 = (gameswf::ASClass::Self *)(*((uint32_t *)v4 + 37) + (v35 << 6));
      MultiNamespace = gameswf::abc_def::getMultiNamespace(v4, *((uint32_t *)v5 + 6));
      v7 = *(const gameswf::String::Self **)(*(uint32_t *)(*((uint32_t *)a1 + 43) + 16)
                                     + 4
                                     * *(uint32_t *)(*((uint32_t *)a1 + 29)
                                                 + 4
                                                 * (*(uint32_t *)(*((uint32_t *)a1 + 20) + 8 * *((uint32_t *)v5 + 6)) >> 8)));
      Package = (gameswf::ASPackage::Self *)gameswf::ASClassManager::findPackage(
                                        *((gameswf::ASClassManager::Self **)a1 + 43),
                                        (const gameswf::String::Self *)MultiNamespace,
                                        true);
      if ( gameswf::ASPackage::findClass(Package, v7, false) != 0 )
      {
        v9 = (int)(*((uint32_t *)v5 + 2) << 8) >> 8;
        if ( v9 > 0 )
        {
          v10 = 0;
          for ( i = 0; i < v9; ++i )
          {
            v12 = *((uint32_t *)v5 + 1) + v10;
            if ( (*(uint8_t *)(v12 + 3) & 0xFu) - 1 <= 2 )
            {
              *(uint32_t *)(*a3 + 4 * *(uint32_t *)(v12 + 8)) = 2;
              v9 = (int)(*((uint32_t *)v5 + 2) << 8) >> 8;
            }
            v10 += 20;
          }
        }
        *(uint8_t *)(*a2 + v35) = 1;
      }
      else
      {
        v13 = gameswf::abc_def::getMultiNamespace(a1, *((uint32_t *)v5 + 7));
        Class = (gameswf::ASObject::Self *(**)(gameswf::Player::Self *))gameswf::ASClassManager::findClass(
                                                              *((gameswf::ASClassManager::Self **)a1 + 43),
                                                              (const gameswf::String::Self *)v13,
                                                              *(const gameswf::String::Self **)(*(uint32_t *)(*((uint32_t *)a1 + 43) + 16)
                                                                                        + 4
                                                                                        * *(uint32_t *)(*((uint32_t *)a1 + 29) + 4 * (*(uint32_t *)(*((uint32_t *)a1 + 20) + 8 * *((uint32_t *)v5 + 7)) >> 8))),
                                                              false);
        v15 = (gameswf::ASClass::Self *)Class;
        v38 = nullptr;
        if ( Class != nullptr )
          v38 = Class[15];
        v40 = *((gameswf::Player::Self **)a1 + 4);
        if ( v40 != nullptr )
        {
          v16 = *((uint32_t *)a1 + 3);
          if ( *(uint8_t *)(v16 + 2) == 0 )
          {
            v30 = *((gameswf::Self **)a1 + 3);
            v31 = *(uint16_t *)v16 - 1;
            *(uint16_t *)v30 = v31;
            if ( v31 == 0 )
            {
              v34 = v15;
              gameswf::free_internal(v30);
              v15 = v34;
            }
            v40 = nullptr;
            *((uint32_t *)a1 + 3) = 0;
            *((uint32_t *)a1 + 4) = 0;
          }
        }
        v44[0] = 0;
        v44[1] = 0;
        v32 = v15;
        v36 = (gameswf::instance_info::Self *)(*((uint32_t *)a1 + 37) + (v35 << 6));
        v43 = (gameswf::ASClass::Self *)opNew(0x8Cu);
        gameswf::ASClass::Construct((gameswf::Self **)v43, v40, v32, v7, v38, (const gameswf::ASValue::Self *)v44, v36);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v44);
        gameswf::ASPackage::registerClass(Package, v43);
        v17 = (int)(*((uint32_t *)v5 + 10) << 8) >> 8;
        v41 = v17;
        if ( v17 != 0 )
        {
          v42 = (gameswf::Self *)gameswf::malloc_internal(4 * v17);
          if ( (int)(*((uint32_t *)v5 + 10) << 8) > 0 )
          {
            v37 = nullptr;
            v18 = 0;
            v19 = v5;
            do
            {
              v33 = v19;
              v39 = *(gameswf::String::Self **)(*(uint32_t *)(*((uint32_t *)a1 + 43) + 16)
                                        + 4
                                        * *(uint32_t *)(*((uint32_t *)a1 + 29)
                                                    + 4
                                                    * (*(uint32_t *)(*((uint32_t *)a1 + 20)
                                                                 + 8 * *(uint32_t *)(*((uint32_t *)v19 + 9) + 4 * v18)) >> 8)));
              v21 = gameswf::abc_def::getMultiNamespace(a1, *(uint32_t *)(*((uint32_t *)v19 + 9) + 4 * v18));
              v22 = gameswf::ASClassManager::findClass(
                      *((gameswf::ASClassManager::Self **)a1 + 43),
                      (const gameswf::String::Self *)v21,
                      v39,
                      false);
              v19 = v33;
              if ( v22 != 0 )
              {
                if ( (int)(uintptr_t)(v37) + 1 > v41 )
                {
                  v23 = (int)(uintptr_t)(v37) + (((int)(uintptr_t)(v37) + 1) >> 1) + 1;
                  if ( v23 != 0 )
                  {
                    if ( v42 != nullptr )
                      v29 = (gameswf::Self *)gameswf::realloc_internal(v42, 4 * v23, 4 * v41);
                    else
                      v29 = (gameswf::Self *)gameswf::malloc_internal(4 * v23);
                    v42 = v29;
                    v41 = (int)(uintptr_t)(v37) + (((int)(uintptr_t)(v37) + 1) >> 1) + 1;
                    v19 = v33;
                  }
                  else
                  {
                    if ( v42 != nullptr )
                    {
                      gameswf::free_internal(v42);
                      v19 = v33;
                    }
                    v41 = 0;
                    v42 = nullptr;
                  }
                }
                v20 = (uint32_t *)((char *)v42 + 4 * (uint32_t)(uintptr_t)(v37));
                if ( v20 != nullptr )
                  *v20 = v22;
                v37 = (gameswf::instance_info::Self *)((char *)v37 + 1);
              }
              ++v18;
            }
            while ( v18 < (int)(*((uint32_t *)v19 + 10) << 8) >> 8 );
            if ( (int)(uintptr_t)(v37) > 0 )
            {
              if ( *((uint32_t *)v43 + 24) == 0 )
              {
                *((uint32_t *)v43 + 25) = ((int)((uint32_t)(uintptr_t)(v37) << 8) >> 8) & 0xFFFFFF | *((uint32_t *)v43 + 25) & 0xFF000000;
                v24 = gameswf::malloc_internal(4 * ((int)((uint32_t)(uintptr_t)(v37) << 8) >> 8));
                *((uint32_t *)v43 + 24) = v24;
                *((uint8_t *)v43 + 103) = 1;
                v25 = (int)(*((uint32_t *)v43 + 25) << 8) >> 8;
                if ( v25 > 0 )
                {
                  v26 = 0;
                  while ( 1 )
                  {
                    v27 = (uint32_t *)(v24 + 4 * v26);
                    if ( v27 != nullptr )
                    {
                      *v27 = 0;
                      v25 = (int)(*((uint32_t *)v43 + 25) << 8) >> 8;
                    }
                    if ( ++v26 >= v25 )
                      break;
                    v24 = *((uint32_t *)v43 + 24);
                  }
                }
              }
              for ( j = 0; j < (int)(uintptr_t)(v37); ++j )
                *(uint32_t *)(*((uint32_t *)v43 + 24) + 4 * j) = *((uint32_t *)v42 + j);
            }
          }
          if ( v42 != nullptr )
            gameswf::free_internal(v42);
        }
      }
      v4 = a1;
      ++v35;
      result = (int)(*((uint32_t *)a1 + 38) << 8) >> 8;
    }
    while ( v35 < result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::getClassConstructor  (binary VA: 0x1178a20)
// Original: gameswf::abc_def::getClassConstructor
// ----------------------------------------------------------------------------
int gameswf::abc_def::getClassConstructor(gameswf::abc_def::Self *self, int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 33) + 4 * *(uint32_t *)(*((uint32_t *)self + 37) + (a2 << 6) + 44));
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::findInstance  (binary VA: 0x1178a40)
// Original: gameswf::abc_def::findInstance
// ----------------------------------------------------------------------------
int gameswf::abc_def::findInstance(gameswf::ASClassManager::Self **self, const gameswf::String::Self *a2, const gameswf::String::Self *a3)
{
  int Class;

  Class = gameswf::ASClassManager::findClass(*(self + 43), a2, a3, true);
  if ( Class != 0 )
    return *(uint32_t *)(Class + 68);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::getClassConstructor  (binary VA: 0x1178a90)
// Original: gameswf::abc_def::getClassConstructor
// ----------------------------------------------------------------------------
int gameswf::abc_def::getClassConstructor(gameswf::ASClassManager::Self **self, const gameswf::String::Self *a2, const gameswf::String::Self *a3)
{
  int Instance;

  Instance = gameswf::abc_def::findInstance(self, a2, a3);
  if ( Instance != 0 )
    return *((uint32_t *)*(self + 33) + *(uint32_t *)(Instance + 44));
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::findInstanceNoInit  (binary VA: 0x1178af0)
// Original: gameswf::abc_def::findInstanceNoInit
// ----------------------------------------------------------------------------
int gameswf::abc_def::findInstanceNoInit(gameswf::ASClassManager::Self **self, const gameswf::String::Self *a2, const gameswf::String::Self *a3)
{
  int Class;

  Class = gameswf::ASClassManager::findClass(*(self + 43), a2, a3, false);
  if ( Class != 0 )
    return *(uint32_t *)(Class + 68);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::createObject  (binary VA: 0x1178b40)
// Original: gameswf::abc_def::createObject
// ----------------------------------------------------------------------------
int gameswf::abc_def::createObject(gameswf::ASClassManager::Self **self, const gameswf::String::Self *a2, const gameswf::String::Self *a3)
{
  return (int)(uintptr_t)(gameswf::ASClassManager::createObject(*(self + 43), a2, a3));
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::getFunctionName  (binary VA: 0x1178b80)
// Original: gameswf::abc_def::getFunctionName
// ----------------------------------------------------------------------------
char * gameswf::abc_def::getFunctionName(gameswf::abc_def::Self *self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  gameswf::Self *v7;

  v2 = (int)(*((uint32_t *)self + 38) << 8) >> 8;
  if ( v2 <= 0 )
  {
LABEL_6:
    if ( byte_21158D0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_21158D0) != 0 )
    {
      byte_21158E0 = 1;
      byte_21158E1 = 0;
      gameswf::String::resize((gameswf::String::Self *)&byte_21158E0, 1);
      v7 = (gameswf::Self *)&byte_21158E1;
      if ( byte_21158E0 == -1 )
        v7 = (gameswf::Self *)dword_21158EC;
      gameswf::Strcpy_s(v7, (char *)&dword_0 + 2, (gameswf::Self *)"?");
      dword_21158F0 |= 0x7FFFFFu;
      BYTE2(dword_21158F0) &= ~0x80u;
      HIBYTE(dword_21158F0) |= 1u;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_21158D0);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_21158E0, &unk_20D1280);
    }
    return (char *)(&byte_21158E0);
  }
  v3 = *((uint32_t *)self + 37);
  v4 = 0;
  if ( *(uint32_t *)(v3 + 44) != a2 )
  {
    while ( v2 > ++v4 )
    {
      v6 = v3 + (v4 << 6);
      if ( *(uint32_t *)(v6 + 44) == a2 )
        return *(char **)(*(uint32_t *)(*((uint32_t *)self + 43) + 16)
                        + 4
                        * *(uint32_t *)(*((uint32_t *)self + 29)
                                    + 4 * (*(uint32_t *)(*((uint32_t *)self + 20) + 8 * *(uint32_t *)(v6 + 24)) >> 8)));
    }
    goto LABEL_6;
  }
  v6 = *((uint32_t *)self + 37);
  return *(char **)(*(uint32_t *)(*((uint32_t *)self + 43) + 16)
                  + 4
                  * *(uint32_t *)(*((uint32_t *)self + 29)
                              + 4 * (*(uint32_t *)(*((uint32_t *)self + 20) + 8 * *(uint32_t *)(v6 + 24)) >> 8)));
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::getConstant  (binary VA: 0x1178cc0)
// Original: gameswf::abc_def::getConstant
// ----------------------------------------------------------------------------
void * gameswf::abc_def::getConstant(uint32_t *a1, int a2, int a3, const gameswf::String::Self **a4)
{
  void *result;
  double v5; // xmm0_8
  typedef uint8_t _g4_t_v6[12];
  typedef gameswf::Self *_g4_t_v7;
  typedef int16_t _g4_t_v8;
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (18u + sizeof(_g4_t_v9)) > _g4_s3 ? (18u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (19u + sizeof(_g4_t_v10)) > _g4_s4 ? (19u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 18u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 19u);

  switch ( a2 )
  {
    case 1:
      if ( a3 < 0 )
      {
        v6[0] = 1;
        v6[1] = 0;
        v8 = -1;
        v9 = 127;
        v10 |= 1u;
      }
      else
      {
        sub_7763C0((gameswf::String::Self *)v6, *(char **)(*(uint32_t *)(a1[43] + 16) + 4 * *(uint32_t *)(a1[29] + 4 * a3)));
      }
      result = gameswf::ASValue::setString(a4, (const gameswf::String::Self *)v6);
      if ( v6[0] == 0xFF && (v10 & 1) != 0 )
        return (void *)gameswf::free_internal(v7);
      return result;
    case 3:
      v5 = 0.0;
      if ( a3 >= 0 )
        v5 = (double)*(int *)(a1[10] + 4 * a3);
      goto LABEL_14;
    case 4:
      v5 = 0.0;
      if ( a3 >= 0 )
        v5 = (double)*(unsigned int *)(a1[12] + 4 * a3);
      goto LABEL_14;
    case 6:
      v5 = 0.0;
      if ( a3 >= 0 )
        v5 = *(double *)(a1[14] + 8 * a3);
LABEL_14:
      result = (void *)gameswf::ASValue::setDouble((gameswf::ASValue::Self *)a4, v5);
      break;
    case 10:
      result = (void *)gameswf::ASValue::setBool((gameswf::ASValue::Self *)a4, 0);
      break;
    case 11:
      result = (void *)gameswf::ASValue::setBool((gameswf::ASValue::Self *)a4, 1);
      break;
    case 12:
      result = gameswf::ASValue::setObject((gameswf::ASValue::Self *)a4, nullptr);
      break;
    default:
      result = (void *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)a4);
      *(uint8_t *)a4 = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::alive  (binary VA: 0x1178e90)
// Original: gameswf::abc_def::alive
// ----------------------------------------------------------------------------
int gameswf::abc_def::alive(gameswf::abc_def::Self *self)
{
  int result;
  int i;
  int v3;

  result = (int)(*((uint32_t *)self + 34) << 8) >> 8;
  if ( result > 0 )
  {
    for ( i = 0; i < result; ++i )
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 33) + 4 * i);
      if ( v3 != 0 )
      {
        (*(void (**)(uint32_t))(*(uint32_t *)v3 + 76))(*(uint32_t *)(*((uint32_t *)self + 33) + 4 * i));
        result = (int)(*((uint32_t *)self + 34) << 8) >> 8;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::getEntryScript  (binary VA: 0x1178ee0)
// Original: gameswf::abc_def::getEntryScript
// ----------------------------------------------------------------------------
int gameswf::abc_def::getEntryScript(gameswf::abc_def::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 33)
                   + 4 * *(uint32_t *)(*((uint32_t *)self + 41) + 4 * ((int)(*((uint32_t *)self + 42) << 8) >> 8) - 4));
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::clearScripts  (binary VA: 0x1178f10)
// Original: gameswf::abc_def::clearScripts
// ----------------------------------------------------------------------------
int gameswf::abc_def::clearScripts(gameswf::abc_def::Self *self)
{
  int result;
  int i;
  gameswf::RefCounted::Self **v3;
  int v4;
  gameswf::ASObject::Self *v5;
  gameswf::Player::Self *v6;
  gameswf::Self *v7;
  gameswf::ASObject::Self *v9;

  result = *((uint32_t *)self + 42) << 8;
  if ( result > 0 )
  {
    for ( i = 0; i < result; ++i )
    {
      v4 = 4 * *(uint32_t *)(*((uint32_t *)self + 41) + 4 * i);
      v5 = *(gameswf::ASObject::Self **)(*((uint32_t *)self + 33) + v4);
      v6 = *((gameswf::Player::Self **)self + 4);
      if ( v6 != nullptr )
      {
        v7 = *((gameswf::Self **)self + 3);
        if ( *((uint8_t *)v7 + 2) == 0 )
        {
          if ( (*(uint16_t *)v7)-- == 1 )
          {
            v9 = v5;
            gameswf::free_internal(v7);
            v5 = v9;
          }
          *((uint32_t *)self + 3) = 0;
          *((uint32_t *)self + 4) = 0;
          v6 = nullptr;
        }
      }
      gameswf::Player::unregisterObject(v6, v5);
      v3 = (gameswf::RefCounted::Self **)(*((uint32_t *)self + 33) + v4);
      if ( *v3 != nullptr )
      {
        gameswf::RefCounted::dropRef(*v3);
        *v3 = nullptr;
      }
      result = (int)(*((uint32_t *)self + 42) << 8) >> 8;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::markUnusedMethods  (binary VA: 0x1178ff0)
// Original: gameswf::abc_def::markUnusedMethods
// ----------------------------------------------------------------------------
int gameswf::abc_def::markUnusedMethods(int a1, uint32_t *a2, uint32_t *a3)
{
  int result;
  int v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  int v8;
  int j;
  uint32_t *v10;
  int v11;
  int v12;
  gameswf::Self *v13;
  int v14;
  int v15;
  int k;
  uint32_t *v17;
  int i;
  int v19;

  result = (int)(a2[1] << 8) >> 8;
  if ( result > 0 )
  {
    v19 = 0;
    for ( i = 0; i < result; ++i )
    {
      while ( *(uint8_t *)(*a2 + i) == 0 )
      {
LABEL_3:
        ++i;
        v19 += 24;
        if ( i >= result )
          return result;
      }
      *(uint32_t *)(*a3 + 4 * *(uint32_t *)(*(uint32_t *)(a1 + 156) + v19 + 20)) = 2;
      *(uint32_t *)(*a3 + 4 * *(uint32_t *)(*(uint32_t *)(a1 + 148) + (i << 6) + 44)) = 2;
      v4 = *(uint32_t *)(a1 + 156) + v19;
      v5 = *(uint32_t *)(v4 + 8);
      if ( *(uint32_t *)(v4 + 4) != 0 && *(uint8_t *)(v4 + 11) != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)(v4 + 4));
        v5 = *(uint32_t *)(v4 + 8);
      }
      v6 = *(gameswf::Self **)(v4 + 12);
      *(uint32_t *)(v4 + 8) = v5 & 0xFF000000;
      *(uint32_t *)(v4 + 4) = 0;
      *(uint8_t *)(v4 + 11) = 0;
      if ( v6 != nullptr )
      {
        v7 = *((uint32_t *)v6 + 1);
        if ( v7 >= 0 )
        {
          v8 = 8;
          for ( j = 0; j <= v7; ++j )
          {
            v10 = (uint32_t *)((char *)v6 + v8);
            if ( *(uint32_t *)((char *)v6 + v8) != -2 )
            {
              *v10 = -2;
              v10[1] = 0;
              v6 = *(gameswf::Self **)(v4 + 12);
            }
            v8 += 16;
          }
        }
        gameswf::free_internal(v6);
        *(uint32_t *)(v4 + 12) = 0;
      }
      v11 = *(uint32_t *)(a1 + 148) + (i << 6);
      v12 = *(uint32_t *)(v11 + 8);
      if ( *(uint32_t *)(v11 + 4) != 0 && *(uint8_t *)(v11 + 11) != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)(v11 + 4));
        v12 = *(uint32_t *)(v11 + 8);
      }
      v13 = *(gameswf::Self **)(v11 + 12);
      *(uint32_t *)(v11 + 8) = v12 & 0xFF000000;
      *(uint32_t *)(v11 + 4) = 0;
      *(uint8_t *)(v11 + 11) = 0;
      if ( v13 == nullptr )
      {
        result = (int)(a2[1] << 8) >> 8;
        goto LABEL_3;
      }
      v14 = *((uint32_t *)v13 + 1);
      if ( v14 >= 0 )
      {
        v15 = 8;
        for ( k = 0; k <= v14; ++k )
        {
          v17 = (uint32_t *)((char *)v13 + v15);
          if ( *(uint32_t *)((char *)v13 + v15) != -2 )
          {
            *v17 = -2;
            v17[1] = 0;
            v13 = *(gameswf::Self **)(v11 + 12);
          }
          v15 += 16;
        }
      }
      gameswf::free_internal(v13);
      *(uint32_t *)(v11 + 12) = 0;
      v19 += 24;
      result = (int)(a2[1] << 8) >> 8;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::clearUnusedClasses  (binary VA: 0x1179230)
// Original: gameswf::abc_def::clearUnusedClasses
// ----------------------------------------------------------------------------
int gameswf::abc_def::clearUnusedClasses(uint32_t *a1, uint32_t *a2)
{
  int result;
  gameswf::RefCounted::Self **v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  int v8;
  int j;
  uint32_t *v10;
  int v11;
  int v12;
  gameswf::Self *v13;
  int v14;
  int v15;
  int k;
  uint32_t *v17;
  int i;
  int v19;

  result = (int)(a2[1] << 8) >> 8;
  if ( result > 0 )
  {
    v19 = 0;
    for ( i = 0; i < result; ++i )
    {
      while ( *(uint8_t *)(*a2 + i) == 0 )
      {
LABEL_3:
        ++i;
        v19 += 24;
        if ( i >= result )
          return result;
      }
      v3 = (gameswf::RefCounted::Self **)(a1[33] + 4 * *(uint32_t *)(a1[37] + (i << 6) + 44));
      if ( *v3 != nullptr )
      {
        gameswf::RefCounted::dropRef(*v3);
        *v3 = nullptr;
      }
      v4 = a1[39] + v19;
      v5 = *(uint32_t *)(v4 + 8);
      if ( *(uint32_t *)(v4 + 4) != 0 && *(uint8_t *)(v4 + 11) != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)(v4 + 4));
        v5 = *(uint32_t *)(v4 + 8);
      }
      v6 = *(gameswf::Self **)(v4 + 12);
      *(uint32_t *)(v4 + 8) = v5 & 0xFF000000;
      *(uint32_t *)(v4 + 4) = 0;
      *(uint8_t *)(v4 + 11) = 0;
      if ( v6 != nullptr )
      {
        v7 = *((uint32_t *)v6 + 1);
        if ( v7 >= 0 )
        {
          v8 = 8;
          for ( j = 0; j <= v7; ++j )
          {
            v10 = (uint32_t *)((char *)v6 + v8);
            if ( *(uint32_t *)((char *)v6 + v8) != -2 )
            {
              *v10 = -2;
              v10[1] = 0;
              v6 = *(gameswf::Self **)(v4 + 12);
            }
            v8 += 16;
          }
        }
        gameswf::free_internal(v6);
        *(uint32_t *)(v4 + 12) = 0;
      }
      v11 = a1[37] + (i << 6);
      v12 = *(uint32_t *)(v11 + 8);
      if ( *(uint32_t *)(v11 + 4) != 0 && *(uint8_t *)(v11 + 11) != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)(v11 + 4));
        v12 = *(uint32_t *)(v11 + 8);
      }
      v13 = *(gameswf::Self **)(v11 + 12);
      *(uint32_t *)(v11 + 8) = v12 & 0xFF000000;
      *(uint32_t *)(v11 + 4) = 0;
      *(uint8_t *)(v11 + 11) = 0;
      if ( v13 == nullptr )
      {
        result = (int)(a2[1] << 8) >> 8;
        goto LABEL_3;
      }
      v14 = *((uint32_t *)v13 + 1);
      if ( v14 >= 0 )
      {
        v15 = 8;
        for ( k = 0; k <= v14; ++k )
        {
          v17 = (uint32_t *)((char *)v13 + v15);
          if ( *(uint32_t *)((char *)v13 + v15) != -2 )
          {
            *v17 = -2;
            v17[1] = 0;
            v13 = *(gameswf::Self **)(v11 + 12);
          }
          v15 += 16;
        }
      }
      gameswf::free_internal(v13);
      *(uint32_t *)(v11 + 12) = 0;
      v19 += 24;
      result = (int)(a2[1] << 8) >> 8;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::clearUnusedMethods  (binary VA: 0x1179460)
// Original: gameswf::abc_def::clearUnusedMethods
// ----------------------------------------------------------------------------
void gameswf::abc_def::clearUnusedMethods(gameswf::abc_def::Self *self)
{
  int v1;
  int v2;
  int i;
  gameswf::RefCounted::Self **v4;
  gameswf::ASObject::Self *v5;
  gameswf::Player::Self *v6;
  gameswf::Self *v7;
  int v9;
  int v10;
  int v11;

  v1 = (int)(*((uint32_t *)self + 40) << 8) >> 8;
  if ( v1 > 0 )
  {
    v2 = 0;
    for ( i = 0; i < v1; ++i )
    {
      v11 = 4 * *(uint32_t *)(*((uint32_t *)self + 39) + v2 + 20);
      v5 = *(gameswf::ASObject::Self **)(*((uint32_t *)self + 33) + v11);
      if ( v5 != nullptr && (int)(*((uint32_t *)v5 + 22) << 8) <= 768 )
      {
        v6 = *((gameswf::Player::Self **)self + 4);
        if ( v6 != nullptr )
        {
          v7 = *((gameswf::Self **)self + 3);
          if ( *((uint8_t *)v7 + 2) == 0 )
          {
            if ( (*(uint16_t *)v7)-- == 1 )
            {
              v10 = v2;
              gameswf::free_internal(v7);
              v2 = v10;
            }
            *((uint32_t *)self + 3) = 0;
            *((uint32_t *)self + 4) = 0;
            v6 = nullptr;
          }
        }
        v9 = v2;
        gameswf::Player::unregisterObject(v6, v5);
        v4 = (gameswf::RefCounted::Self **)(*((uint32_t *)self + 33) + v11);
        v2 = v9;
        if ( *v4 != nullptr )
        {
          gameswf::RefCounted::dropRef(*v4);
          *v4 = nullptr;
          v2 = v9;
        }
        v1 = (int)(*((uint32_t *)self + 40) << 8) >> 8;
      }
      v2 += 24;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::initializeTraits  (binary VA: 0x11795a0)
// Original: gameswf::abc_def::initializeTraits
// ----------------------------------------------------------------------------
int gameswf::abc_def::initializeTraits(gameswf::abc_def::Self *self, gameswf::ASObject::Self *a2, gameswf::ObjectInfo::Self *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint8_t *v9;
  int v10;
  int result;
  gameswf::ObjectInfo::Self *v12;
  int v13;
  int v14;
  const gameswf::String::Self *v15;
  int v16;
  int v17;
  char *v18;
  const char *v19;
  const char *v20;
  const char *v21;
  const char *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int *v27;
  int v28;
  int v29;
  char *MultiNamespace;
  gameswf::ASObject::Self *Class;
  int v32;
  int v33;
  int v34;
  int *v35;
  int i;
  int v37;
  int v38;
  int v39;
  int v40;
  uint8_t *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  uint8_t *v48;
  int v49;
  int v50;
  int v51;
  int *v52;
  int v53;
  int v54;
  gameswf::RefCounted::Self *v55;
  double v56; // xmm0_8
  const gameswf::String::Self *v57;
  int v58;
  int index;
  int v60;
  int v61;
  typedef gameswf::ASFunction::Self *_g4_t_v62;
  typedef gameswf::ASFunction::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef const gameswf::String::Self *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef char _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef const gameswf::String::Self *_g4_t_v81[3];
  typedef uint32_t _g4_t_v82[6];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v62)) > _g4_s0 ? (4u + sizeof(_g4_t_v62)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v63)) > _g4_s1 ? (4u + sizeof(_g4_t_v63)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v64)) > _g4_s2 ? (28u + sizeof(_g4_t_v64)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v65)) > _g4_s3 ? (32u + sizeof(_g4_t_v65)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v66)) > _g4_s4 ? (36u + sizeof(_g4_t_v66)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v67)) > _g4_s5 ? (36u + sizeof(_g4_t_v67)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v68)) > _g4_s6 ? (40u + sizeof(_g4_t_v68)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v69)) > _g4_s7 ? (44u + sizeof(_g4_t_v69)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v70)) > _g4_s8 ? (48u + sizeof(_g4_t_v70)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v71)) > _g4_s9 ? (48u + sizeof(_g4_t_v71)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v72)) > _g4_s10 ? (48u + sizeof(_g4_t_v72)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v73)) > _g4_s11 ? (52u + sizeof(_g4_t_v73)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v74)) > _g4_s12 ? (52u + sizeof(_g4_t_v74)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v75)) > _g4_s13 ? (56u + sizeof(_g4_t_v75)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v76)) > _g4_s14 ? (56u + sizeof(_g4_t_v76)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v77)) > _g4_s15 ? (56u + sizeof(_g4_t_v77)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v78)) > _g4_s16 ? (60u + sizeof(_g4_t_v78)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v79)) > _g4_s17 ? (60u + sizeof(_g4_t_v79)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v80)) > _g4_s18 ? (64u + sizeof(_g4_t_v80)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v81)) > _g4_s19 ? (72u + sizeof(_g4_t_v81)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v82)) > _g4_s20 ? (84u + sizeof(_g4_t_v82)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 4u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 36u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 40u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 44u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 52u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 52u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 56u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 56u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 56u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 60u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 60u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 64u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 72u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 84u);

  v73 = *((uint32_t *)a2 + 7);
  v3 = *(int16_t *)(v73 + 18);
  if ( v3 > 0 && *((uint32_t *)a2 + 8) == 0 )
  {
    *((uint32_t *)a2 + 9) = v3 & 0xFFFFFF | *((uint32_t *)a2 + 9) & 0xFF000000;
    v4 = gameswf::malloc_internal(12 * v3);
    *((uint8_t *)a2 + 39) = 1;
    v5 = *((uint32_t *)a2 + 9) << 8;
    *((uint32_t *)a2 + 8) = v4;
    v6 = v5 >> 8;
    v7 = 0;
    v8 = 0;
    if ( v6 > 0 )
    {
      while ( 1 )
      {
        v9 = (uint8_t *)(v7 + v4);
        if ( v9 != nullptr )
        {
          *v9 = 0;
          v9[1] = 0;
          v6 = (int)(*((uint32_t *)a2 + 9) << 8) >> 8;
        }
        ++v8;
        v7 += 12;
        if ( v8 >= v6 )
          break;
        v4 = *((uint32_t *)a2 + 8);
      }
    }
    v73 = *((uint32_t *)a2 + 7);
  }
  v10 = 0;
  if ( *(uint16_t *)(v73 + 16) == 0 )
    v10 = v73;
  v74 = v10;
  result = *((uint32_t *)a3 + 2) << 8;
  if ( result > 0 )
  {
    v68 = 0;
    v69 = 0;
    v12 = a3;
    while ( 1 )
    {
      v13 = *((uint32_t *)v12 + 1) + v68;
      v78 = *(uint32_t *)(*((uint32_t *)self + 27) + 4 * (*(uint32_t *)v13 & 0xFFFFFF));
      v14 = *(uint32_t *)(*((uint32_t *)self + 43) + 16);
      v15 = *(const gameswf::String::Self **)(v14 + 4 * v78);
      LOWORD(v81[0]) = 0;
      v70 = v15;
      switch ( *(uint8_t *)(v13 + 3) & 0xF )
      {
        case 0:
        case 6:
          v16 = *(uint32_t *)(v13 + 12);
          switch ( *(uint8_t *)(v13 + 16) )
          {
            case 0:
              gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v81);
              LOBYTE(v81[0]) = 0;
              goto LABEL_30;
            case 1:
              v57 = (const gameswf::String::Self *)((gameswf::abc_def::Self *)((char *)self + 88));
              if ( v16 >= 0 )
                v57 = *(const gameswf::String::Self **)(v14 + 4 * *(uint32_t *)(*((uint32_t *)self + 29) + 4 * v16));
              gameswf::ASValue::setString(v81, v57);
              goto LABEL_30;
            case 3:
              v56 = 0.0;
              if ( v16 >= 0 )
                v56 = (double)*(int *)(*((uint32_t *)self + 10) + 4 * v16);
              goto LABEL_101;
            case 4:
              v56 = 0.0;
              if ( v16 >= 0 )
                v56 = (double)*(unsigned int *)(*((uint32_t *)self + 12) + 4 * v16);
              goto LABEL_101;
            case 6:
              v56 = 0.0;
              if ( v16 >= 0 )
                v56 = *(double *)(*((uint32_t *)self + 14) + 8 * v16);
LABEL_101:
              gameswf::ASValue::setDouble((gameswf::ASValue::Self *)v81, v56);
              goto LABEL_30;
            case 8:
            case 0xC:
              goto LABEL_98;
            case 0xA:
              goto LABEL_97;
            case 0xB:
              gameswf::ASValue::setBool((gameswf::ASValue::Self *)v81, 1);
              goto LABEL_30;
            default:
              v17 = *(uint32_t *)(v13 + 8);
              if ( v17 == 0 )
                goto LABEL_30;
              v18 = *(char **)(v14
                             + 4
                             * *(uint32_t *)(*((uint32_t *)self + 29)
                                         + 4 * (*(uint32_t *)(*((uint32_t *)self + 20) + 8 * v17) >> 8)));
              v19 = v18 + 1;
              v75 = *v18;
              if ( *v18 == -1 )
                v19 = *((const char **)v18 + 3);
              if ( strcmp(v19, "Boolean") == 0 )
              {
LABEL_97:
                gameswf::ASValue::setBool((gameswf::ASValue::Self *)v81, 0);
              }
              else
              {
                v20 = v18 + 1;
                if ( v75 == -1 )
                  v20 = *((const char **)v18 + 3);
                if ( strcmp(v20, "int") == 0 )
                  goto LABEL_29;
                v21 = v18 + 1;
                if ( v75 == -1 )
                  v21 = *((const char **)v18 + 3);
                if ( strcmp(v21, "uint") == 0 )
                  goto LABEL_29;
                v22 = v18 + 1;
                if ( v75 == -1 )
                  v22 = *((const char **)v18 + 3);
                if ( strcmp(v22, "Number") == 0 )
LABEL_29:
                  gameswf::ASValue::setDouble((gameswf::ASValue::Self *)v81, 0.0);
                else
LABEL_98:
                  gameswf::ASValue::setObject((gameswf::ASValue::Self *)v81, nullptr);
              }
              break;
          }
          goto LABEL_30;
        case 1:
          if ( v74 != 0 )
          {
            v42 = *(int16_t *)(v74 + 50);
            if ( v42 > 0 && *(uint32_t *)(v74 + 56) == 0 )
            {
              *(uint32_t *)(v74 + 60) = v42 & 0xFFFFFF | *(uint32_t *)(v74 + 60) & 0xFF000000;
              v43 = gameswf::malloc_internal(12 * v42);
              *(uint8_t *)(v74 + 63) = 1;
              v44 = *(uint32_t *)(v74 + 60) << 8;
              *(uint32_t *)(v74 + 56) = v43;
              v45 = v44 >> 8;
              if ( v45 > 0 )
              {
                v46 = 0;
                v47 = 0;
                while ( 1 )
                {
                  v48 = (uint8_t *)(v46 + v43);
                  if ( v48 != nullptr )
                  {
                    *v48 = 0;
                    v48[1] = 0;
                    v45 = (int)(*(uint32_t *)(v74 + 60) << 8) >> 8;
                  }
                  ++v47;
                  v46 += 12;
                  if ( v47 >= v45 )
                    break;
                  v43 = *(uint32_t *)(v74 + 56);
                }
              }
            }
            v49 = *(uint32_t *)(v13 + 8);
            v80 = v78;
            v67 = v49;
            v50 = *(uint32_t *)(v74 + 52);
            if ( v50 != 0 )
            {
              v64 = ((((((HIBYTE(v80) + 352988219) << 6) + 0xFFFF * (HIBYTE(v80) + 352988219) + BYTE2(v80)) << 6)
                    + 0xFFFF * (((HIBYTE(v80) + 352988219) << 6) + 0xFFFF * (HIBYTE(v80) + 352988219) + BYTE2(v80))
                    + BYTE1(v80)) << 6)
                  + 0xFFFF
                  * (((((HIBYTE(v80) + 352988219) << 6) + 0xFFFF * (HIBYTE(v80) + 352988219) + BYTE2(v80)) << 6)
                   + 0xFFFF * (((HIBYTE(v80) + 352988219) << 6) + 0xFFFF * (HIBYTE(v80) + 352988219) + BYTE2(v80))
                   + BYTE1(v80))
                  + (uint8_t)v80;
              v51 = v64 & *(uint32_t *)(v50 + 4);
              v52 = (int *)(v50 + 16 * v51 + 8);
              if ( *v52 != -2 )
              {
                v53 = *(uint32_t *)(v50 + 16 * v51 + 12);
                v54 = -12;
                if ( v51 != (v53 & *(uint32_t *)(v50 + 4)) )
                {
LABEL_88:
                  v55 = *(gameswf::RefCounted::Self **)(*((uint32_t *)self + 33) + 4 * v67);
                  LOWORD(v82[0]) = 5;
                  v82[1] = (uint32_t)(uintptr_t)(v55);
                  if ( v55 != nullptr )
                    gameswf::RefCounted::addRef(v55);
                  gameswf::ASValue::opAssign(
                    (gameswf::ASValue::Self *)(*(uint32_t *)(v74 + 56) + v54),
                    (const gameswf::ASValue::Self *)v82);
                  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v82);
                  goto LABEL_91;
                }
                while ( v64 != v53 || v78 != v52[2] )
                {
                  v51 = *v52;
                  if ( *v52 == -1 )
                    goto LABEL_87;
                  v52 = (int *)(v50 + 16 * v51 + 8);
                  v53 = *(uint32_t *)(v50 + 16 * v51 + 12);
                }
                if ( v51 >= 0 && v74 != -52 && *(uint32_t *)(v50 + 4) >= v51 )
                {
                  v54 = 12 * *(uint32_t *)(v50 + 16 * v51 + 20);
                  goto LABEL_88;
                }
              }
            }
LABEL_87:
            v54 = -12;
            goto LABEL_88;
          }
          gameswf::ASValue::setObject(
            (gameswf::ASValue::Self *)v81,
            *(gameswf::ASObject::Self **)(*((uint32_t *)self + 33) + 4 * *(uint32_t *)(v13 + 8)));
LABEL_30:
          v23 = *((uint32_t *)a2 + 7);
          v80 = v78;
          v24 = *(uint32_t *)(v23 + 12);
          if ( v24 != 0 )
          {
            v25 = ((((((HIBYTE(v80) + 352988219) << 6) + 0xFFFF * (HIBYTE(v80) + 352988219) + BYTE2(v80)) << 6)
                  + 0xFFFF * (((HIBYTE(v80) + 352988219) << 6) + 0xFFFF * (HIBYTE(v80) + 352988219) + BYTE2(v80))
                  + BYTE1(v80)) << 6)
                + 0xFFFF
                * (((((HIBYTE(v80) + 352988219) << 6) + 0xFFFF * (HIBYTE(v80) + 352988219) + BYTE2(v80)) << 6)
                 + 0xFFFF * (((HIBYTE(v80) + 352988219) << 6) + 0xFFFF * (HIBYTE(v80) + 352988219) + BYTE2(v80))
                 + BYTE1(v80))
                + (uint8_t)v80;
            v26 = *(uint32_t *)(v24 + 4);
            v76 = v26 & v25;
            v27 = (int *)(v24 + 16 * (v26 & v25) + 8);
            if ( *v27 != -2 )
            {
              v28 = *(uint32_t *)(v24 + 16 * v76 + 12);
              if ( v76 == (v28 & v26) )
              {
                while ( v28 != v25 || v78 != v27[2] )
                {
                  v29 = *v27;
                  if ( v29 == -1 )
                    break;
                  v27 = (int *)(v24 + 16 * v29 + 8);
                  v28 = v27[1];
                }
              }
            }
          }
          gameswf::ASObject::setMemberAt(a2, v78, v70, (const gameswf::ASValue::Self *)v81);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v81);
LABEL_39:
          v12 = a3;
          ++v69;
          v68 += 20;
          result = (int)(*((uint32_t *)a3 + 2) << 8) >> 8;
          if ( v69 >= result )
            return result;
          break;
        case 2:
        case 3:
          v65 = *(uint32_t *)(v13 + 8);
          if ( v74 != 0 )
          {
            v80 = v78;
            v32 = *(uint32_t *)(v74 + 52);
            if ( v32 != 0 )
            {
              v33 = *(uint32_t *)(v32 + 4);
              v66 = ((((((HIBYTE(v80) + 352988219) << 6) + 0xFFFF * (HIBYTE(v80) + 352988219) + BYTE2(v80)) << 6)
                    + 0xFFFF * (((HIBYTE(v80) + 352988219) << 6) + 0xFFFF * (HIBYTE(v80) + 352988219) + BYTE2(v80))
                    + BYTE1(v80)) << 6)
                  + 0xFFFF
                  * (((((HIBYTE(v80) + 352988219) << 6) + 0xFFFF * (HIBYTE(v80) + 352988219) + BYTE2(v80)) << 6)
                   + 0xFFFF * (((HIBYTE(v80) + 352988219) << 6) + 0xFFFF * (HIBYTE(v80) + 352988219) + BYTE2(v80))
                   + BYTE1(v80))
                  + (uint8_t)v80;
              v34 = v33 & v66;
              v71 = v33;
              v35 = (int *)(v32 + 16 * (v33 & v66) + 8);
              if ( *v35 != -2 )
              {
                v77 = -12;
                if ( v34 != (*(uint32_t *)(v32 + 16 * (v33 & v66) + 12) & v33) )
                  goto LABEL_56;
                for ( i = *(uint32_t *)(v32 + 16 * (v33 & v66) + 12);
                      i != v66 || v78 != v35[2];
                      i = *(uint32_t *)(v32 + 16 * v34 + 12) )
                {
                  v34 = *v35;
                  if ( *v35 == -1 )
                  {
                    v77 = -12;
                    goto LABEL_56;
                  }
                  v35 = (int *)(v32 + 16 * v34 + 8);
                }
                if ( v34 >= 0 && v74 != -52 && v71 >= v34 )
                {
                  v77 = 12 * *(uint32_t *)(v32 + 16 * v34 + 20);
                  goto LABEL_56;
                }
              }
            }
            v77 = -12;
LABEL_56:
            v37 = *(int16_t *)(v74 + 50);
            v79 = *(uint32_t *)(v74 + 56);
            if ( v37 > 0 && *(uint32_t *)(v74 + 56) == 0 )
            {
              *(uint32_t *)(v74 + 60) = v37 & 0xFFFFFF | *(uint32_t *)(v74 + 60) & 0xFF000000;
              v79 = gameswf::malloc_internal(12 * v37);
              *(uint32_t *)(v74 + 56) = v79;
              *(uint8_t *)(v74 + 63) = 1;
              v38 = (int)(*(uint32_t *)(v74 + 60) << 8) >> 8;
              if ( v38 > 0 )
              {
                v39 = 0;
                v40 = 0;
                v72 = v13;
                do
                {
                  v41 = (uint8_t *)(v39 + v79);
                  if ( v39 + v79 != 0 )
                  {
                    *v41 = 0;
                    v41[1] = 0;
                    v79 = *(uint32_t *)(v74 + 56);
                    v38 = (int)(*(uint32_t *)(v74 + 60) << 8) >> 8;
                  }
                  ++v40;
                  v39 += 12;
                }
                while ( v40 < v38 );
                v13 = v72;
              }
            }
            v62 = *(gameswf::ASFunction::Self **)(*((uint32_t *)self + 33) + 4 * v65);
            if ( (*(uint8_t *)(v13 + 3) & 0xF) == 2 )
              gameswf::ASValue::setGetter((gameswf::ASValue::Self *)(v77 + v79), v62);
            else
              gameswf::ASValue::setSetter((gameswf::ASValue::Self *)(v77 + v79), v62);
            goto LABEL_91;
          }
          v58 = *((uint32_t *)a2 + 7);
          v80 = v78;
          index = gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::find_index(
                    (gameswf::hash<int, int, gameswf::fixed_size_hash<int>> *)(v58 + 12),
                    &v80);
          v60 = -12;
          if ( index >= 0 && v58 != -12 )
          {
            v61 = *(uint32_t *)(v58 + 12);
            if ( v61 != 0 && index <= *(uint32_t *)(v61 + 4) )
              v60 = 12 * *(uint32_t *)(v61 + 16 * index + 20);
          }
          v63 = *(gameswf::ASFunction::Self **)(*((uint32_t *)self + 33) + 4 * v65);
          if ( (*(uint8_t *)(v13 + 3) & 0xF) == 2 )
            gameswf::ASValue::setGetter((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 8) + v60), v63);
          else
            gameswf::ASValue::setSetter((gameswf::ASValue::Self *)(*((uint32_t *)a2 + 8) + v60), v63);
LABEL_91:
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v81);
          goto LABEL_39;
        case 4:
          MultiNamespace = gameswf::abc_def::getMultiNamespace(self, *(uint32_t *)v13 & 0xFFFFFF);
          Class = (gameswf::ASObject::Self *)gameswf::ASClassManager::findClass(
                                         *((gameswf::ASClassManager::Self **)self + 43),
                                         (const gameswf::String::Self *)MultiNamespace,
                                         v15,
                                         false);
          gameswf::ASValue::setObject((gameswf::ASValue::Self *)v81, Class);
          if ( G4_VCALL<uint8_t>(a2, 8, 59) != 0 )
            gameswf::ASObject::setSlot(a2, *(uint32_t *)(v13 + 4), (const gameswf::ASValue::Self *)v81);
          goto LABEL_30;
        default:
          goto LABEL_30;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::createGlobalStringRemapping  (binary VA: 0x1179f50)
// Original: gameswf::abc_def::createGlobalStringRemapping
// ----------------------------------------------------------------------------
int gameswf::abc_def::createGlobalStringRemapping(gameswf::abc_def::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  gameswf::abc_def::Self *v9;
  int v10;
  int v11;
  int v12;
  uint8_t *MultiNamespaceInfo;
  uint16_t v14;
  gameswf::hash<int, int, gameswf::fixed_size_hash<int>> *v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int v21;
  int result;
  int m;
  gameswf::Self *v24;
  int v25;
  int n;
  uint32_t *v27;
  int v28;
  int v29;
  int *v30;
  int v31;
  int k;
  uint32_t *v33;
  const int *v34;
  int index;
  int v36;
  int v37;
  gameswf::Self *v38;
  int i;
  typedef int _g4_t_v40;
  typedef char _g4_t_v41;
  typedef int _g4_t_v42;
  typedef const gameswf::String::Self *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_j;
  typedef gameswf::Self *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v40)) > _g4_s0 ? (12u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (19u + sizeof(_g4_t_v41)) > _g4_s1 ? (19u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v42)) > _g4_s2 ? (24u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v43)) > _g4_s3 ? (28u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v44)) > _g4_s4 ? (32u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_j)) > _g4_s5 ? (36u + sizeof(_g4_t_j)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v46)) > _g4_s6 ? (40u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v47)) > _g4_s7 ? (44u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v48)) > _g4_s8 ? (52u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v49)) > _g4_s9 ? (56u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v50)) > _g4_s10 ? (56u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v51)) > _g4_s11 ? (60u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v52)) > _g4_s12 ? (64u + sizeof(_g4_t_v52)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 19u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);

  v1 = (int)(*((uint32_t *)self + 21) << 8) >> 8;
  if ( v1 > 0 && *((uint32_t *)self + 27) == 0 )
  {
    *((uint32_t *)self + 28) = v1 & 0xFFFFFF | *((uint32_t *)self + 28) & 0xFF000000;
    v2 = gameswf::malloc_internal(4 * v1);
    *((uint8_t *)self + 115) = 1;
    v3 = *((uint32_t *)self + 28) << 8;
    *((uint32_t *)self + 27) = v2;
    v4 = v3 >> 8;
    if ( v4 > 0 )
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = (uint32_t *)(v2 + 4 * v5);
        if ( v6 != nullptr )
        {
          *v6 = 0;
          v4 = (int)(*((uint32_t *)self + 28) << 8) >> 8;
        }
        if ( ++v5 >= v4 )
          break;
        v2 = *((uint32_t *)self + 27);
      }
    }
  }
  v7 = (int)(*((uint32_t *)self + 17) << 8) >> 8;
  v42 = v7;
  if ( v7 > 0 )
  {
    v38 = (gameswf::Self *)gameswf::malloc_internal(4 * v7);
    v46 = v38;
    for ( i = 0; i < v7; ++i )
    {
      if ( v38 != nullptr )
        *(uint32_t *)v38 = 0;
      v38 = (gameswf::Self *)((char *)v38 + 4);
    }
    v41 = 1;
  }
  else
  {
    v42 = 0;
    v41 = 0;
    v46 = nullptr;
  }
  if ( (int)(*((uint32_t *)self + 21) << 8) > 0 )
  {
    v44 = 0;
    for ( j = 0; j < (int)(*((uint32_t *)v9 + 21) << 8) >> 8; ++j )
    {
      v10 = *((uint32_t *)self + 20) + 8 * j;
      v11 = *((uint32_t *)self + 29);
      v12 = *(uint32_t *)(*((uint32_t *)self + 43) + 16);
      v52[0] = *(uint32_t *)v10 >> 8;
      v43 = *(const gameswf::String::Self **)(v12 + 4 * *(uint32_t *)(v11 + 4 * v52[0]));
      MultiNamespaceInfo = (uint8_t *)gameswf::abc_def::getMultiNamespaceInfo(self, j);
      v14 = *(uint16_t *)(v10 + 6);
      v15 = (gameswf::hash<int, int, gameswf::fixed_size_hash<int>> *)((gameswf::Self *)((char *)v46 + ((unsigned int)(uintptr_t)(&MultiNamespaceInfo[-*((uint32_t *)self + 16)]) & 0xFFFFFFFC)));
      if ( v14 != 0 )
      {
        v47 = (int)(*(uint32_t *)(*((uint32_t *)self + 18) + 8 * v14 + 4) << 8) >> 8;
        if ( v47 > 0 )
        {
          v16 = *(uint32_t *)v15;
          v48 = 0;
          v17 = (((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0])) << 6;
          v40 = LOBYTE(v52[0])
              + 0xFFFF
              * (v17
               + 0xFFFF * (((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0]))
               + BYTE1(v52[0]))
              + ((v17
                + 0xFFFF * (((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0]))
                + BYTE1(v52[0])) << 6);
          while ( 1 )
          {
            if ( v16 != 0 )
            {
              v49 = *(uint32_t *)(v16 + 4);
              v18 = v40 & v49;
              v19 = (int *)(v16 + 16 * (v40 & v49) + 8);
              if ( *v19 != -2 )
              {
                v20 = *(uint32_t *)(v16 + 16 * (v40 & v49) + 12);
                if ( v18 == (v20 & v49) )
                {
                  while ( v20 != v40 || v19[2] != v52[0] )
                  {
                    v18 = *v19;
                    if ( *v19 == -1 )
                      goto LABEL_30;
                    v19 = (int *)(v16 + 16 * v18 + 8);
                    v20 = *(uint32_t *)(v16 + 16 * v18 + 12);
                  }
                  if ( v18 >= 0 && v49 >= v18 )
                    break;
                }
              }
            }
LABEL_30:
            if ( ++v48 >= v47 )
              goto LABEL_14;
          }
          v21 = *(uint32_t *)(v16 + 16 * v18 + 20);
          v9 = self;
          *(uint32_t *)(*((uint32_t *)self + 27) + v44) = v21;
          goto LABEL_15;
        }
      }
      else if ( *MultiNamespaceInfo == 5 )
      {
        v28 = *(uint32_t *)v15;
        if ( *(uint32_t *)v15 == 0 )
          goto LABEL_55;
        v50 = *(uint32_t *)(v28 + 4);
        v29 = (((((((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0])) << 6)
               + 0xFFFF * (((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0]))
               + BYTE1(v52[0])) << 6)
             + 0xFFFF
             * (((((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0])) << 6)
              + 0xFFFF * (((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0]))
              + BYTE1(v52[0]))
             + LOBYTE(v52[0]))
            & v50;
        v30 = (int *)(v28 + 16 * v29 + 8);
        if ( *v30 == -2 )
          goto LABEL_55;
        v31 = (((((((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0])) << 6)
               + 0xFFFF * (((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0]))
               + BYTE1(v52[0])) << 6)
             + 0xFFFF
             * (((((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0])) << 6)
              + 0xFFFF * (((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0]))
              + BYTE1(v52[0]))
             + LOBYTE(v52[0]))
            & v50;
        if ( v31 != (*(uint32_t *)(v28 + 16 * v29 + 12) & v50) )
          goto LABEL_55;
        for ( k = *(uint32_t *)(v28 + 16 * v29 + 12);
              k != ((((((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0])) << 6)
                   + 0xFFFF
                   * (((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0]))
                   + BYTE1(v52[0])) << 6)
                 + 0xFFFF
                 * (((((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0])) << 6)
                  + 0xFFFF
                  * (((HIBYTE(v52[0]) + 352988219) << 6) + 0xFFFF * (HIBYTE(v52[0]) + 352988219) + BYTE2(v52[0]))
                  + BYTE1(v52[0]))
                 + LOBYTE(v52[0])
           || v30[2] != v52[0];
              k = *(uint32_t *)(v28 + 16 * v31 + 12) )
        {
          v31 = *v30;
          if ( *v30 == -1 )
            goto LABEL_55;
          v30 = (int *)(v28 + 16 * v31 + 8);
        }
        if ( v31 >= 0 && v50 >= v31 )
        {
          v37 = *(uint32_t *)(v28 + 16 * v31 + 20);
          v9 = self;
          *(uint32_t *)(*((uint32_t *)self + 27) + v44) = v37;
        }
        else
        {
LABEL_55:
          v33 = (uint32_t *)(*((uint32_t *)self + 27) + v44);
          *v33 = gameswf::ASClassManager::registerGlobalString(*((gameswf::ASClassManager::Self **)self + 43), v43, false);
          v34 = (const int *)(*((uint32_t *)self + 27) + v44);
          index = gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::find_index(v15, v52);
          if ( index < 0 )
          {
            gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::add(v15, v52, v34);
            v9 = self;
          }
          else
          {
            v36 = *v34;
            v9 = self;
            *(uint32_t *)(*(uint32_t *)v15 + 16 * index + 20) = v36;
          }
        }
        goto LABEL_15;
      }
LABEL_14:
      v8 = (uint32_t *)(*((uint32_t *)self + 27) + v44);
      *v8 = gameswf::ASClassManager::registerGlobalString(*((gameswf::ASClassManager::Self **)self + 43), v43, true);
      v9 = self;
LABEL_15:
      v44 += 4;
    }
  }
  result = (int)(uintptr_t)(v46);
  if ( v46 != nullptr )
  {
    result = v42;
    if ( v42 != 0 )
    {
      for ( m = 0; m != v42; ++m )
      {
        result = (int)(uintptr_t)(v46);
        v24 = *((gameswf::Self **)v46 + m);
        if ( v24 != nullptr )
        {
          v51 = *((uint32_t *)v24 + 1);
          if ( v51 >= 0 )
          {
            v25 = 8;
            for ( n = 0; n <= v51; ++n )
            {
              v27 = (uint32_t *)((char *)v24 + v25);
              if ( *(uint32_t *)((char *)v24 + v25) != -2 )
              {
                *v27 = -2;
                v27[1] = 0;
                v24 = *((gameswf::Self **)v46 + m);
              }
              v25 += 16;
            }
          }
          gameswf::free_internal(v24);
          result = (int)(uintptr_t)(v46);
          *((uint32_t *)v46 + m) = 0;
        }
      }
    }
    if ( v41 != 0 )
      return gameswf::free_internal(v46);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::readOptimized  (binary VA: 0x117a460)
// Original: gameswf::abc_def::readOptimized
// ----------------------------------------------------------------------------
int gameswf::abc_def::readOptimized(gameswf::abc_def::Self *self, gameswf::Stream::Self *a2)
{
  int VU32;
  signed int v3;
  int v4;
  unsigned int v5;
  int result;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  uint8_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v24)) > _g4_s2 ? (16u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v25)) > _g4_s3 ? (20u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v26)) > _g4_s4 ? (32u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v27)) > _g4_s5 ? (36u + sizeof(_g4_t_v27)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);

  gameswf::Stream::getTagEndPosition(a2);
  gameswf::Stream::readU16(a2);
  gameswf::Stream::readU16(a2);
  gameswf::abc_def::read_cpool(self, a2);
  gameswf::abc_def::createGlobalStringRemapping(self);
  VU32 = gameswf::Stream::readVU32(a2);
  if ( VU32 > 0 && *((uint32_t *)self + 33) == 0 )
  {
    v16 = VU32 << 8 >> 8;
    *((uint32_t *)self + 34) = v16 & 0xFFFFFF | *((uint32_t *)self + 34) & 0xFF000000;
    v17 = gameswf::malloc_internal(4 * v16);
    *((uint8_t *)self + 139) = 1;
    v18 = *((uint32_t *)self + 34) << 8;
    *((uint32_t *)self + 33) = v17;
    v19 = v18 >> 8;
    if ( v19 > 0 )
    {
      v20 = 0;
      while ( 1 )
      {
        v21 = (uint32_t *)(v17 + 4 * v20);
        if ( v21 != nullptr )
        {
          *v21 = 0;
          v19 = (int)(*((uint32_t *)self + 34) << 8) >> 8;
        }
        if ( ++v20 >= v19 )
          break;
        v17 = *((uint32_t *)self + 33);
      }
    }
  }
  v23 = gameswf::Stream::readVU32(a2);
  if ( v23 > 0 )
  {
    if ( *((uint32_t *)self + 35) == 0 )
    {
      *((uint32_t *)self + 36) = (v23 << 8 >> 8) & 0xFFFFFF | *((uint32_t *)self + 36) & 0xFF000000;
      *((uint32_t *)self + 35) = gameswf::malloc_internal(v23 << 8 >> 8);
      *((uint8_t *)self + 147) = 1;
    }
    v15 = 0;
    do
    {
      v22 = v15;
      gameswf::metadata_info::read();
      v15 = v22 + 1;
    }
    while ( v22 + 1 < v23 );
  }
  gameswf::abc_def::readInstanceInfos(self, a2);
  v25 &= 0xFF000000;
  v24 = 0;
  HIBYTE(v25) = 0;
  v3 = (int)(*((uint32_t *)self + 38) << 8) >> 8;
  if ( v3 > 0 )
  {
    v25 = v3 & 0xFFFFFF | v25 & 0xFF000000;
    v11 = gameswf::malloc_internal(v3);
    HIBYTE(v25) = 1;
    v24 = v11;
    v12 = (int)(v25 << 8) >> 8;
    if ( v12 > 0 )
    {
      v13 = 0;
      while ( 1 )
      {
        v14 = (uint8_t *)(v13 + v11);
        if ( v14 != nullptr )
        {
          *v14 = 0;
          v12 = (int)(v25 << 8) >> 8;
        }
        if ( ++v13 >= v12 )
          break;
        v11 = v24;
      }
    }
  }
  v27 &= 0xFF000000;
  v26 = 0;
  HIBYTE(v27) = 0;
  v4 = (int)(*((uint32_t *)self + 34) << 8) >> 8;
  if ( v4 > 0 )
  {
    v27 = v4 & 0xFFFFFF | v27 & 0xFF000000;
    v7 = gameswf::malloc_internal(4 * v4);
    HIBYTE(v27) = 1;
    v26 = v7;
    v8 = (int)(v27 << 8) >> 8;
    if ( v8 > 0 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = (uint32_t *)(v7 + 4 * v9);
        if ( v10 != nullptr )
        {
          *v10 = 0;
          v8 = (int)(v27 << 8) >> 8;
        }
        if ( ++v9 >= v8 )
          break;
        v7 = v26;
      }
    }
  }
  gameswf::abc_def::assignClasses(self, &v24, &v26);
  gameswf::abc_def::readClassInfos(self, a2, (uint32_t *)(&v24), &v26);
  gameswf::abc_def::readScriptInfos(self, a2, &v26);
  gameswf::abc_def::markUnusedMethods((int)(uintptr_t)(self), &v24, &v26);
  gameswf::abc_def::readMethodInfos(self, a2, &v26);
  gameswf::abc_def::readBodyInfos((uint32_t *)(self), a2, &v26, 1);
  gameswf::abc_def::clearUnusedClasses((uint32_t *)(self), (uint32_t *)(&v24));
  gameswf::abc_def::clearUnusedMethods(self);
  v5 = v27;
  if ( v26 != 0 && HIBYTE(v27) != 0 )
  {
    gameswf::free_internal((gameswf::Self *)v26);
    v5 = v27;
  }
  result = v5 & 0xFF000000;
  v27 = result;
  v26 = 0;
  HIBYTE(v27) = 0;
  if ( v24 != 0 )
  {
    result = (int)(v25 << 8) >> 8;
    if ( HIBYTE(v25) != 0 )
      return gameswf::free_internal((gameswf::Self *)v24);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::read  (binary VA: 0x117a870)
// Original: gameswf::abc_def::read
// ----------------------------------------------------------------------------
int gameswf::abc_def::read(gameswf::abc_def::Self *self, gameswf::Stream::Self *a2)
{
  signed int v2;
  int v3;
  unsigned int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  uint8_t *v13;
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_VU32;
  typedef int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_VU32)) > _g4_s1 ? (12u + sizeof(_g4_t_VU32)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v18)) > _g4_s3 ? (20u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v20)) > _g4_s5 ? (36u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_VU32 &VU32 = *reinterpret_cast<_g4_t_VU32 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);

  gameswf::Stream::getTagEndPosition(a2);
  gameswf::Stream::readU16(a2);
  gameswf::Stream::readU16(a2);
  gameswf::abc_def::read_cpool(self, a2);
  gameswf::abc_def::createGlobalStringRemapping(self);
  gameswf::abc_def::readMethodInfos(self, a2, nullptr);
  VU32 = gameswf::Stream::readVU32(a2);
  if ( VU32 > 0 )
  {
    if ( *((uint32_t *)self + 35) == 0 )
    {
      *((uint32_t *)self + 36) = (VU32 << 8 >> 8) & 0xFFFFFF | *((uint32_t *)self + 36) & 0xFF000000;
      *((uint32_t *)self + 35) = gameswf::malloc_internal(VU32 << 8 >> 8);
      *((uint8_t *)self + 147) = 1;
    }
    v14 = 0;
    do
    {
      v15 = v14;
      gameswf::metadata_info::read();
      v14 = v15 + 1;
    }
    while ( v15 + 1 < VU32 );
  }
  gameswf::abc_def::readInstanceInfos(self, a2);
  v18 &= 0xFF000000;
  v17 = 0;
  HIBYTE(v18) = 0;
  v2 = (int)(*((uint32_t *)self + 38) << 8) >> 8;
  if ( v2 > 0 )
  {
    v18 = v2 & 0xFFFFFF | v18 & 0xFF000000;
    v10 = gameswf::malloc_internal(v2);
    HIBYTE(v18) = 1;
    v17 = v10;
    v11 = (int)(v18 << 8) >> 8;
    if ( v11 > 0 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = (uint8_t *)(v12 + v10);
        if ( v13 != nullptr )
        {
          *v13 = 0;
          v11 = (int)(v18 << 8) >> 8;
        }
        if ( ++v12 >= v11 )
          break;
        v10 = v17;
      }
    }
  }
  v20 &= 0xFF000000;
  v19 = 0;
  HIBYTE(v20) = 0;
  v3 = (int)(*((uint32_t *)self + 34) << 8) >> 8;
  if ( v3 > 0 )
  {
    v20 = v3 & 0xFFFFFF | v20 & 0xFF000000;
    v6 = gameswf::malloc_internal(4 * v3);
    HIBYTE(v20) = 1;
    v19 = v6;
    v7 = (int)(v20 << 8) >> 8;
    if ( v7 > 0 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = (uint32_t *)(v6 + 4 * v8);
        if ( v9 != nullptr )
        {
          *v9 = 0;
          v7 = (int)(v20 << 8) >> 8;
        }
        if ( ++v8 >= v7 )
          break;
        v6 = v19;
      }
    }
  }
  gameswf::abc_def::assignClasses(self, &v17, &v19);
  gameswf::abc_def::readClassInfos(self, a2, (uint32_t *)(&v17), &v19);
  gameswf::abc_def::readScriptInfos(self, a2, &v19);
  gameswf::abc_def::markUnusedMethods((int)(uintptr_t)(self), &v17, &v19);
  gameswf::abc_def::readBodyInfos((uint32_t *)(self), a2, &v19, 0);
  gameswf::abc_def::clearUnusedClasses((uint32_t *)(self), (uint32_t *)(&v17));
  gameswf::abc_def::clearUnusedMethods(self);
  v4 = v20;
  if ( v19 != 0 && HIBYTE(v20) != 0 )
  {
    gameswf::free_internal((gameswf::Self *)v19);
    v4 = v20;
  }
  result = v4 & 0xFF000000;
  v20 = result;
  v19 = 0;
  HIBYTE(v20) = 0;
  if ( v17 != 0 )
  {
    result = (int)(v18 << 8) >> 8;
    if ( HIBYTE(v18) != 0 )
      return gameswf::free_internal((gameswf::Self *)v17);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::initializeTraitsMapping  (binary VA: 0x117ad90)
// Original: gameswf::abc_def::initializeTraitsMapping
// ----------------------------------------------------------------------------
int gameswf::abc_def::initializeTraitsMapping(gameswf::abc_def::Self *self, gameswf::ObjectInfo::Self *a2, gameswf::ObjectInfo::Self *a3, bool a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  gameswf::ObjectInfo::Self *v8;
  int result;
  int v10;
  gameswf::Self *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  const char *v19;
  const char *v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  int v25;
  int *v26;
  int v27;
  int v28;
  int *v29;
  int v30;
  int v31;
  int v32;
  gameswf::ObjectInfo::Self *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int *v40;
  int v41;
  int v42;
  int *v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int *v48;
  int v49;
  int v50;
  char *v51;
  int v52;
  int v53;
  int v54;
  char v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  const char *v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int *v69;
  int i;
  const char *v71;
  int v72;
  int v73;
  int v74;
  gameswf::ObjectInfo::Self *v75;
  char *v76;
  int v77;
  int v78;
  int v79;
  int v80;
  char *v81;
  char *v82;
  size_t v83;
  char *v84;
  gameswf::Self *v85;
  int v86;
  int index;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef gameswf::String::Self *_g4_t_v90;
  typedef char *_g4_t_v91;
  typedef uint32_t *_g4_t_v92;
  typedef char *_g4_t_v93;
  typedef int _g4_t_v94;
  typedef gameswf::hash<int, int, gameswf::fixed_size_hash<int>> *_g4_t_v95;
  typedef gameswf::hash<int, int, gameswf::fixed_size_hash<int>> *_g4_t_v96;
  typedef gameswf::ObjectInfo::Self *_g4_t_v97;
  typedef uint8_t *_g4_t_MultiNamespaceInfo;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef char *_g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef const char *_g4_t_v116;
  typedef uint8_t _g4_t_v117;
  typedef uint8_t _g4_t_v118;
  typedef int _g4_t_v119[4];
  typedef int _g4_t_v120[4];
  typedef int _g4_t_v121[4];
  typedef int _g4_t_v122[4];
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef char *_g4_t_v125;
  typedef int _g4_t_v126[4];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v88)) > _g4_s0 ? (4u + sizeof(_g4_t_v88)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v89)) > _g4_s1 ? (20u + sizeof(_g4_t_v89)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v90)) > _g4_s2 ? (20u + sizeof(_g4_t_v90)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v91)) > _g4_s3 ? (20u + sizeof(_g4_t_v91)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v92)) > _g4_s4 ? (20u + sizeof(_g4_t_v92)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v93)) > _g4_s5 ? (20u + sizeof(_g4_t_v93)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v94)) > _g4_s6 ? (24u + sizeof(_g4_t_v94)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v95)) > _g4_s7 ? (28u + sizeof(_g4_t_v95)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v96)) > _g4_s8 ? (32u + sizeof(_g4_t_v96)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v97)) > _g4_s9 ? (40u + sizeof(_g4_t_v97)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_MultiNamespaceInfo)) > _g4_s10 ? (44u + sizeof(_g4_t_MultiNamespaceInfo)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v99)) > _g4_s11 ? (48u + sizeof(_g4_t_v99)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v100)) > _g4_s12 ? (52u + sizeof(_g4_t_v100)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v101)) > _g4_s13 ? (56u + sizeof(_g4_t_v101)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v102)) > _g4_s14 ? (60u + sizeof(_g4_t_v102)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v103)) > _g4_s15 ? (60u + sizeof(_g4_t_v103)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v104)) > _g4_s16 ? (60u + sizeof(_g4_t_v104)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v105)) > _g4_s17 ? (64u + sizeof(_g4_t_v105)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v106)) > _g4_s18 ? (64u + sizeof(_g4_t_v106)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v107)) > _g4_s19 ? (64u + sizeof(_g4_t_v107)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v108)) > _g4_s20 ? (64u + sizeof(_g4_t_v108)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v109)) > _g4_s21 ? (68u + sizeof(_g4_t_v109)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v110)) > _g4_s22 ? (68u + sizeof(_g4_t_v110)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v111)) > _g4_s23 ? (68u + sizeof(_g4_t_v111)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v112)) > _g4_s24 ? (72u + sizeof(_g4_t_v112)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v113)) > _g4_s25 ? (72u + sizeof(_g4_t_v113)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v114)) > _g4_s26 ? (76u + sizeof(_g4_t_v114)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v115)) > _g4_s27 ? (76u + sizeof(_g4_t_v115)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v116)) > _g4_s28 ? (76u + sizeof(_g4_t_v116)) : _g4_s28,
    _g4_s30 = (94u + sizeof(_g4_t_v117)) > _g4_s29 ? (94u + sizeof(_g4_t_v117)) : _g4_s29,
    _g4_s31 = (95u + sizeof(_g4_t_v118)) > _g4_s30 ? (95u + sizeof(_g4_t_v118)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v119)) > _g4_s31 ? (96u + sizeof(_g4_t_v119)) : _g4_s31,
    _g4_s33 = (112u + sizeof(_g4_t_v120)) > _g4_s32 ? (112u + sizeof(_g4_t_v120)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v121)) > _g4_s33 ? (128u + sizeof(_g4_t_v121)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v122)) > _g4_s34 ? (144u + sizeof(_g4_t_v122)) : _g4_s34,
    _g4_s36 = (160u + sizeof(_g4_t_v123)) > _g4_s35 ? (160u + sizeof(_g4_t_v123)) : _g4_s35,
    _g4_s37 = (164u + sizeof(_g4_t_v124)) > _g4_s36 ? (164u + sizeof(_g4_t_v124)) : _g4_s36,
    _g4_s38 = (168u + sizeof(_g4_t_v125)) > _g4_s37 ? (168u + sizeof(_g4_t_v125)) : _g4_s37,
    _g4_s39 = (172u + sizeof(_g4_t_v126)) > _g4_s38 ? (172u + sizeof(_g4_t_v126)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 4u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 20u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 20u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 20u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 20u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 20u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 24u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 28u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 32u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 40u);
  _g4_t_MultiNamespaceInfo &MultiNamespaceInfo = *reinterpret_cast<_g4_t_MultiNamespaceInfo *>(_g4_sf + 44u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 48u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 52u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 56u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 60u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 60u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 60u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 64u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 64u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 64u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 64u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 68u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 68u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 68u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 72u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 72u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 76u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 76u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 76u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 94u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 95u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 96u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 112u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 128u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 144u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 160u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 164u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 168u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 172u);

  v96 = (gameswf::hash<int, int, gameswf::fixed_size_hash<int>> *)((gameswf::ObjectInfo::Self *)((char *)a2 + 12));
  v4 = (int)(*((uint32_t *)a3 + 2) << 8) >> 8;
  v5 = 0;
  v6 = *((int **)a2 + 3);
  if ( v6 != nullptr )
    v5 = *v6;
  if ( v4 < v5 )
  {
    v7 = 0;
    if ( v6 == nullptr )
      goto LABEL_7;
    v4 = *v6;
  }
  v7 = 3 * v4 / 2;
LABEL_7:
  gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::set_raw_capacity(v96, v7);
  v8 = nullptr;
  if ( *((uint16_t *)a2 + 8) == 0 )
    v8 = a2;
  v97 = v8;
  result = *((uint32_t *)a3 + 2) << 8;
  if ( result > 0 )
  {
    v100 = 0;
    v95 = (gameswf::hash<int, int, gameswf::fixed_size_hash<int>> *)((gameswf::ObjectInfo::Self *)((char *)v8 + 52));
    v101 = 0;
    while ( 1 )
    {
      v105 = *((uint32_t *)a3 + 1) + v100;
      v10 = *((uint32_t *)self + 43);
      v119[0] = *(uint32_t *)(*((uint32_t *)self + 27) + 4 * (*(uint32_t *)v105 & 0xFFFFFF));
      v112 = *(char **)(*(uint32_t *)(v10 + 16) + 4 * v119[0]);
      v88 = *(uint32_t *)v105 & 0xFFFFFF;
      v99 = *((uint32_t *)self + 20) + 8 * v88;
      MultiNamespaceInfo = (uint8_t *)gameswf::abc_def::getMultiNamespaceInfo(self, v88);
      v109 = *((uint32_t *)self + 4);
      if ( v109 != 0 && *((uint8_t *)(v11 = *((gameswf::Self **)self + 3)) + 2) == 0 )
      {
        if ( (*(uint16_t *)v11)-- == 1 )
          gameswf::free_internal(v11);
        v109 = 0;
        *((uint32_t *)self + 3) = 0;
        *((uint32_t *)self + 4) = 0;
        v12 = 1441815;
      }
      else
      {
        v12 = *(uint32_t *)(v109 + 48);
        if ( v12 == 0 )
          goto LABEL_99;
      }
      v102 = *((uint32_t *)v112 + 4);
      v13 = v102 << 9 >> 9;
      if ( (uint8_t *)(v102 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *v112 == -1 )
        {
          v51 = *((char **)v112 + 3);
          v50 = *((uint32_t *)v112 + 1) - 1;
        }
        else
        {
          v50 = *v112 - 1;
          v51 = v112 + 1;
        }
        v13 = 5381;
        v52 = 5381;
        if ( v50 > 0 )
        {
          do
          {
            --v50;
            v53 = 33 * v52;
            v54 = (uint8_t)v51[v50] + 32;
            if ( (uint8_t)(v51[v50] - 65) > 0x19u )
              v54 = (uint8_t)v51[v50];
            v52 = v53 ^ v54;
          }
          while ( v50 != 0 );
          v52 = v52 << 9 >> 9;
          v13 = v52;
        }
        *((uint32_t *)v112 + 4) = v52 & 0x7FFFFF | v102 & 0xFF800000;
        v12 = *(uint32_t *)(v109 + 48);
      }
      v114 = *(uint32_t *)(v12 + 4);
      v14 = v13 & v114;
      v15 = 16 * (v13 & v114);
      v16 = (int *)(v12 + v15 + 8);
      if ( *v16 == -2 || v14 != (*(uint32_t *)(v12 + v15 + 12) & v114) )
        goto LABEL_99;
      v17 = *(uint32_t *)(v12 + v15 + 12);
      v103 = v13;
      while ( 1 )
      {
        if ( v17 == v103 )
        {
          v18 = v16[2];
          if ( v112 == (char *)v18 )
            break;
          v19 = *v112 == -1 ? *((const char **)v112 + 3) : v112 + 1;
          v20 = *(uint8_t *)v18 == 0xFF ? *(const char **)(v18 + 12) : (const char *)(v18 + 1);
          v89 = v12;
          v21 = strcmp(v20, v19);
          v12 = v89;
          if ( v21 == 0 )
            break;
        }
        v14 = *v16;
        if ( *v16 == -1 )
          goto LABEL_99;
        v16 = (int *)(v12 + 16 * v14 + 8);
        v17 = *(uint32_t *)(v12 + 16 * v14 + 12);
      }
      if ( v14 < 0 )
      {
LABEL_99:
        v56 = *v112;
        v57 = *v112 - 1;
        if ( *v112 == -1 )
          v57 = *((uint32_t *)v112 + 1) - 1;
        if ( v57 <= 13 )
        {
          v81 = (char *)gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(v109 + 52), 20);
          v22 = v81;
          v82 = v112 + 1;
          if ( *v112 == -1 )
            v82 = *((char **)v112 + 3);
          if ( v81 != nullptr )
          {
            *v81 = 1;
            v81[1] = 0;
            if ( v82 != nullptr )
            {
              v92 = (uint32_t *)(v81);
              v83 = strlen(v82);
              gameswf::String::resize((gameswf::String::Self *)v92, v83);
              v84 = (char *)(v83 + 1);
              v85 = (gameswf::Self *)((char *)v92 + 1);
              if ( *(uint8_t *)v92 == 0xFF )
                v85 = (gameswf::Self *)v92[3];
              gameswf::Strcpy_s(v85, v84, (gameswf::Self *)v82);
              v22 = (char *)v92;
            }
            v86 = *((uint32_t *)v22 + 4) | 0x7FFFFF;
            *((uint32_t *)v22 + 4) = v86;
            v22[19] = HIBYTE(v86) | 1;
            v22[18] = BYTE2(v86) | 0x80;
          }
        }
        else
        {
          v58 = v56 - 1;
          if ( v56 == -1 )
            v58 = *((uint32_t *)v112 + 1) - 1;
          v59 = gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(v109 + 52), v58 + 21);
          v60 = v59;
          if ( v59 != 0 )
          {
            *(uint8_t *)v59 = 1;
            *(uint8_t *)(v59 + 1) = 0;
            v61 = *(uint32_t *)(v59 + 16) | 0x7FFFFF;
            *(uint32_t *)(v60 + 16) = v61;
            *(uint8_t *)(v60 + 19) = HIBYTE(v61) | 1;
            *(uint8_t *)(v60 + 18) = BYTE2(v61) | 0x80;
          }
          v62 = v112 + 1;
          if ( *v112 == -1 )
            v62 = *((const char **)v112 + 3);
          v63 = v60 + 20;
          v90 = (gameswf::String::Self *)v60;
          strcpy((char *)(v60 + 20), v62);
          v64 = *v112 - 1;
          if ( *v112 == -1 )
            v64 = *((uint32_t *)v112 + 1) - 1;
          v65 = v64 + 1;
          gameswf::String::resize(v90, 0);
          v22 = (char *)v90;
          *((uint32_t *)v90 + 3) = v63;
          *(uint8_t *)v90 = -1;
          *((uint32_t *)v90 + 1) = v65;
          *((uint32_t *)v90 + 2) = v65;
          *((uint8_t *)v90 + 19) &= ~1u;
        }
        v125 = v22;
        v66 = *(uint32_t *)(v109 + 48);
        if ( v66 == 0 )
          goto LABEL_160;
        v115 = *((uint32_t *)v22 + 4);
        if ( (uint8_t *)(v115 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          if ( *v22 == -1 )
          {
            v76 = *((char **)v22 + 3);
            v77 = *((uint32_t *)v22 + 1) - 1;
          }
          else
          {
            v76 = v22 + 1;
            v77 = *v22 - 1;
          }
          v113 = 5381;
          v78 = 5381;
          if ( v77 > 0 )
          {
            do
            {
              --v77;
              v79 = 33 * v78;
              v80 = (uint8_t)v76[v77] + 32;
              if ( (uint8_t)(v76[v77] - 65) > 0x19u )
                v80 = (uint8_t)v76[v77];
              v78 = v79 ^ v80;
            }
            while ( v77 != 0 );
            v78 = v78 << 9 >> 9;
            v113 = v78;
          }
          *((uint32_t *)v22 + 4) = v78 & 0x7FFFFF | v115 & 0xFF800000;
          v66 = *(uint32_t *)(v109 + 48);
          v67 = v113;
        }
        else
        {
          v67 = v115 << 9 >> 9;
          v113 = v67;
        }
        v68 = *(uint32_t *)(v66 + 4) & v67;
        v69 = (int *)(v66 + 16 * v68 + 8);
        if ( *v69 == -2 || v68 != (*(uint32_t *)(v66 + 16 * v68 + 12) & *(uint32_t *)(v66 + 4)) )
          goto LABEL_160;
        for ( i = *(uint32_t *)(v66 + 16 * v68 + 12); ; i = *(uint32_t *)(v66 + 16 * v68 + 12) )
        {
          if ( i == v113 )
          {
            v104 = v69[2];
            if ( v22 == (char *)v104 )
              break;
            v116 = *v22 == -1 ? *((const char **)v22 + 3) : v22 + 1;
            v71 = *(uint8_t *)v104 == 0xFF ? *(const char **)(v104 + 12) : (const char *)(v104 + 1);
            v91 = v22;
            v94 = v66;
            v72 = strcmp(v71, v116);
            v22 = v91;
            v66 = v94;
            if ( v72 == 0 )
              break;
          }
          v68 = *v69;
          if ( *v69 == -1 )
            goto LABEL_160;
          v69 = (int *)(v66 + 16 * v68 + 8);
        }
        if ( v68 >= 0 )
        {
          *(uint32_t *)(v66 + 16 * v68 + 20) = (uint32_t)(uintptr_t)(v22);
        }
        else
        {
LABEL_160:
          v93 = v22;
          v126[0] = 0;
          gameswf::hash_gameswf_StringPointer_ga_128477::add(
            (int **)(v109 + 48),
            &v125,
            v126);
          index = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
                    (int *)(v109 + 48),
                    &v125);
          v22 = v93;
          *(uint32_t *)(*(uint32_t *)(v109 + 48) + 16 * index + 20) = (uint32_t)(uintptr_t)(v93);
        }
        goto LABEL_29;
      }
      v22 = *(char **)(v12 + 16 * v14 + 20);
LABEL_29:
      v124 = (int)(uintptr_t)(v22);
      v120[0] = 0;
      switch ( *(uint8_t *)(v105 + 3) & 0xF )
      {
        case 0:
        case 6:
          v23 = *(uint32_t *)(v105 + 4);
          if ( v23 == 0 )
            goto LABEL_30;
          goto LABEL_35;
        case 1:
        case 2:
        case 3:
          if ( v97 == nullptr )
            goto LABEL_30;
          v123 = v119[0];
          v36 = *((uint32_t *)v97 + 13);
          if ( v36 == 0 )
            goto LABEL_69;
          v37 = 65599 * (BYTE2(v123) + 0xFFFF * (HIBYTE(v123) + 352988219) + ((HIBYTE(v123) + 352988219) << 6));
          v38 = *(uint32_t *)(v36 + 4);
          v39 = (65599 * (v37 + BYTE1(v123)) + (uint8_t)v123) & v38;
          v107 = 65599 * (v37 + BYTE1(v123)) + (uint8_t)v123;
          v40 = (int *)(v36 + 16 * v39 + 8);
          if ( *v40 == -2 )
            goto LABEL_69;
          v41 = *(uint32_t *)(v36 + 16 * v39 + 12);
          if ( v39 != (v41 & v38) )
            goto LABEL_69;
          while ( 2 )
          {
            if ( v107 != v41 || v119[0] != v40[2] )
            {
              v39 = *v40;
              if ( *v40 != -1 )
              {
                v40 = (int *)(v36 + 16 * v39 + 8);
                v41 = *(uint32_t *)(v36 + 16 * v39 + 12);
                continue;
              }
LABEL_69:
              if ( *(uint16_t *)(v99 + 6) == 0 && *MultiNamespaceInfo == 5 )
              {
                v117 = 1;
                sub_117ABD0(
                  (gameswf::hash<gameswf::StringPointer, bool, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)(*(uint32_t *)a2 + 128),
                  (int)(uintptr_t)(&v124),
                  &v117);
              }
              else
              {
                v42 = *(uint32_t *)a2;
                v43 = (int *)(*(uint32_t *)a2 + 124);
                v44 = sub_1176330(v43, (char **)&v124);
                if ( v44 < 0 )
                  gameswf::hash_gameswf_StringPointer_in_aa74e2::add(
                    (gameswf::hash<gameswf::StringPointer, int, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)v43,
                    (int)(uintptr_t)(&v124),
                    (int)(uintptr_t)(v119));
                else
                  *(uint32_t *)(*(uint32_t *)(v42 + 124) + 16 * v44 + 20) = v119[0];
              }
              v45 = *((uint32_t *)v97 + 13);
              v111 = *((int16_t *)v97 + 25);
              v121[0] = v111;
              if ( v45 == 0 )
                goto LABEL_136;
              v46 = *(uint32_t *)(v45 + 4);
              v108 = 65599 * (BYTE1(v119[0]) + 65599 * (65599 * (HIBYTE(v119[0]) + 352988219) + BYTE2(v119[0])))
                   + LOBYTE(v119[0]);
              v47 = v46 & v108;
              v48 = (int *)(v45 + 16 * (v46 & v108) + 8);
              if ( *v48 == -2 )
                goto LABEL_136;
              v49 = *(uint32_t *)(v45 + 16 * (v46 & v108) + 12);
              if ( v47 != (v49 & v46) )
                goto LABEL_136;
              while ( v108 != v49 || v48[2] != v119[0] )
              {
                v47 = *v48;
                if ( *v48 == -1 )
                  goto LABEL_136;
                v48 = (int *)(v45 + 16 * v47 + 8);
                v49 = *(uint32_t *)(v45 + 16 * v47 + 12);
              }
              if ( v47 >= 0 )
                *(uint32_t *)(v45 + 16 * v47 + 20) = v111;
              else
LABEL_136:
                gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::add(v95, v119, v121);
              ++*((uint16_t *)v97 + 25);
              goto LABEL_31;
            }
            break;
          }
          if ( v39 < 0 || v95 == nullptr || v38 < v39 || *(uint32_t *)(v36 + 16 * v39 + 20) == -1 )
            goto LABEL_69;
LABEL_31:
          ++v101;
          v100 += 20;
          result = (int)(*((uint32_t *)a3 + 2) << 8) >> 8;
          if ( v101 >= result )
            return result;
          break;
        case 4:
          v23 = *(uint32_t *)(v105 + 4);
          if ( v23 == 0 )
            goto LABEL_30;
LABEL_35:
          v120[0] = v23;
          if ( a4 )
            goto LABEL_36;
          goto LABEL_31;
        default:
LABEL_30:
          if ( a4 )
            goto LABEL_31;
LABEL_36:
          v24 = *((uint32_t *)a2 + 3);
          if ( v24 == 0 )
            goto LABEL_47;
          v106 = 65599
               * (((BYTE2(v119[0]) + 0xFFFF * (HIBYTE(v119[0]) + 352988219) + ((HIBYTE(v119[0]) + 352988219) << 6)) << 6)
                + 0xFFFF
                * (BYTE2(v119[0]) + 0xFFFF * (HIBYTE(v119[0]) + 352988219) + ((HIBYTE(v119[0]) + 352988219) << 6))
                + BYTE1(v119[0]))
               + LOBYTE(v119[0]);
          v25 = *(uint32_t *)(v24 + 4) & v106;
          v110 = *(uint32_t *)(v24 + 4);
          v26 = (int *)(v24 + 16 * v25 + 8);
          if ( *v26 != -2 )
          {
            v27 = *(uint32_t *)(v24 + 16 * v25 + 12);
            if ( v25 != (v27 & v110) )
              goto LABEL_47;
            while ( 2 )
            {
              if ( v106 == v27 && v26[2] == v119[0] )
              {
                if ( v25 >= 0 && a2 != (gameswf::ObjectInfo::Self *)-12 && v110 >= v25 )
                  goto LABEL_31;
              }
              else
              {
                v25 = *v26;
                if ( *v26 != -1 )
                {
                  v26 = (int *)(v24 + 16 * v25 + 8);
                  v27 = *(uint32_t *)(v24 + 16 * v25 + 12);
                  continue;
                }
              }
              break;
            }
          }
LABEL_47:
          if ( *(uint16_t *)(v99 + 6) == 0 && *MultiNamespaceInfo == 5 )
          {
            v118 = 1;
            sub_117ABD0(
              (gameswf::hash<gameswf::StringPointer, bool, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)(*(uint32_t *)a2 + 128),
              (int)(uintptr_t)(&v124),
              &v118);
          }
          else
          {
            sub_1176330((int *)(*(uint32_t *)a2 + 124), (char **)&v124);
            v28 = *(uint32_t *)a2;
            v29 = (int *)(*(uint32_t *)a2 + 124);
            v30 = sub_1176330(v29, (char **)&v124);
            if ( v30 < 0 )
              gameswf::hash_gameswf_StringPointer_in_aa74e2::add(
                (gameswf::hash<gameswf::StringPointer, int, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *)v29,
                (int)(uintptr_t)(&v124),
                (int)(uintptr_t)(v119));
            else
              *(uint32_t *)(*(uint32_t *)(v28 + 124) + 16 * v30 + 20) = v119[0];
          }
          v31 = v120[0];
          if ( v120[0] != 0 )
          {
            v32 = gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::find_index(v96, v119);
            if ( v32 < 0 )
            {
              gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::add(v96, v119, v120);
              v31 = v120[0];
              v33 = a2;
            }
            else
            {
              v33 = a2;
              *(uint32_t *)(*((uint32_t *)a2 + 3) + 16 * v32 + 20) = v31;
            }
            v34 = *((int16_t *)v33 + 9);
            v35 = v31 + 1;
            if ( v35 >= v34 )
              LOWORD(v34) = v35;
            *((uint16_t *)v33 + 9) = v34;
          }
          else
          {
            v73 = *((int16_t *)a2 + 9);
            v122[0] = v73;
            v74 = gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::find_index(v96, v119);
            if ( v74 < 0 )
            {
              gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::add(v96, v119, v122);
              v75 = a2;
            }
            else
            {
              v75 = a2;
              *(uint32_t *)(*((uint32_t *)a2 + 3) + 16 * v74 + 20) = v73;
            }
            ++*((uint16_t *)v75 + 9);
          }
          goto LABEL_31;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::initializeObjectInfo  (binary VA: 0x117b9f0)
// Original: gameswf::abc_def::initializeObjectInfo
// ----------------------------------------------------------------------------
uint32_t * gameswf::abc_def::initializeObjectInfo(gameswf::abc_def::Self *self, gameswf::ObjectInfo::Self *a2, gameswf::ObjectInfo::Self *a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  uint32_t *result;
  int v8;

  v3 = 0;
  v4 = *((int **)a2 + 3);
  v5 = (int)(*((uint32_t *)a3 + 2) << 8) >> 8;
  if ( v4 != nullptr )
    v3 = *v4;
  if ( v5 < v3 )
  {
    v6 = 0;
    if ( v4 == nullptr )
      goto LABEL_7;
    v5 = *v4;
  }
  v6 = 3 * v5 / 2;
LABEL_7:
  gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::set_raw_capacity((gameswf::ObjectInfo::Self *)((char *)a2 + 12), v6);
  gameswf::abc_def::initializeTraitsMapping(self, a2, a3, true);
  gameswf::abc_def::initializeTraitsMapping(self, a2, a3, false);
  result = *((uint32_t **)a2 + 3);
  if ( result != nullptr )
  {
    v8 = 3 * *result;
    if ( result[1] >= v8 )
      return (gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::set_raw_capacity(
                         (gameswf::ObjectInfo::Self *)((char *)a2 + 12),
                         v8 / 2), (uint32_t *)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::abc_def::initializeObjectInfo  (binary VA: 0x117bad0)
// Original: gameswf::abc_def::initializeObjectInfo
// ----------------------------------------------------------------------------
uint32_t * gameswf::abc_def::initializeObjectInfo(gameswf::abc_def::Self *self, gameswf::ObjectInfo::Self *a2, gameswf::ASClass::Self *a3)
{
  int v3;
  gameswf::ASClass::Self *v4;
  int v5;
  int v6;
  int v7;
  int i;
  char v9; // si
  int v10;
  int v11;
  gameswf::Self *v12;
  int v13;
  int *v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  gameswf::abc_def::Self **v21;
  uint32_t *result;
  int v23;
  int v25;
  gameswf::hash<int, int, gameswf::fixed_size_hash<int>> *v26;

  v3 = 0;
  v4 = a3;
  v5 = *((uint32_t *)a3 + 17);
  v25 = (int)(*(uint32_t *)(v5 + 8) << 8) >> 8;
  if ( v25 > 0 )
  {
    v6 = *(uint32_t *)(v5 + 4);
    v7 = 0;
    for ( i = 0; i < v25; ++i )
    {
      v9 = *(uint8_t *)(v6 + v7 + 3);
      v7 += 20;
      v3 += (v9 & 0xFu) - 1 < 3;
    }
    v4 = a3;
  }
  v10 = *((uint32_t *)v4 + 19);
  v11 = v25 - v3;
  if ( v10 != 0 )
  {
    v12 = *((gameswf::Self **)v4 + 18);
    if ( *((uint8_t *)v12 + 2) != 0 )
    {
      v13 = *(uint32_t *)(v10 + 68);
      if ( v13 != 0 )
      {
        v14 = *(int **)(v13 + 12);
        v15 = 0;
        if ( v14 != nullptr )
          v15 = *v14;
        v11 += v15;
      }
    }
    else
    {
      if ( (*(uint16_t *)v12)-- == 1 )
        gameswf::free_internal(v12);
      *((uint32_t *)v4 + 18) = 0;
      *((uint32_t *)v4 + 19) = 0;
    }
  }
  v26 = (gameswf::hash<int, int, gameswf::fixed_size_hash<int>> *)((gameswf::ObjectInfo::Self *)((char *)a2 + 12));
  v16 = *((int **)a2 + 3);
  v17 = 0;
  if ( v16 != nullptr )
    v17 = *v16;
  if ( v11 >= v17 )
  {
    v18 = 3 * v11 / 2;
  }
  else
  {
    v18 = 0;
    if ( v16 != nullptr )
      v18 = 3 * *v16 / 2;
  }
  gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::set_raw_capacity(v26, v18);
  v19 = ((int)(*((uint32_t *)v4 + 23) << 8) >> 8) - 1;
  if ( v19 >= 0 )
  {
    v20 = 4 * v19;
    do
    {
      v21 = *(gameswf::abc_def::Self ***)(*(uint32_t *)(*((uint32_t *)v4 + 22) + v20) + 68);
      if ( v21 != nullptr )
        gameswf::abc_def::initializeTraitsMapping(*v21, a2, (gameswf::ObjectInfo::Self *)v21, false);
      --v19;
      v20 -= 4;
    }
    while ( v19 != -1 );
  }
  result = *((uint32_t **)a2 + 3);
  if ( result != nullptr )
  {
    v23 = 3 * *result;
    if ( result[1] >= v23 )
      return (gameswf::hash_int_int_gameswf_fixed_si_7a9dcf::set_raw_capacity(v26, v23 / 2), (uint32_t *)0);
  }
  return result;
}


