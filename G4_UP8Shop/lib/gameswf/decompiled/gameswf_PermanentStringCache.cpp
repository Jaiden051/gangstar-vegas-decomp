#include "Core/Utils/DecompTypes.h"
#include "gameswf_PermanentStringCache.h"

// ----------------------------------------------------------------------------
// Function: gameswf::PermanentStringCache::get  (binary VA: 0x106e730)
// Original: gameswf::PermanentStringCache::get
// ----------------------------------------------------------------------------
char * gameswf::PermanentStringCache::get(int **self, const gameswf::String::Self *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  const gameswf::String::Self *v8;
  const char *v9;
  int v10;
  int v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  char v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  const char *v23;
  int v24;
  int v25;
  int v26;
  char *v27;
  int *v28;
  int v29;
  int v30;
  int *v31;
  int i;
  const char *v33;
  int v34;
  char *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  char *v40;
  char *v41;
  size_t v42;
  char *v43;
  gameswf::Self *v44;
  int v45;
  int v46;
  int *v47;
  int v48;
  int v49;
  const char *v50;
  const char *v51;
  int v52;
  int v53;
  char *v54;
  int v55;
  int v56;
  int v57;
  int v58;
  typedef int *_g4_t_v59;
  typedef gameswf::String::Self *_g4_t_v60;
  typedef char *_g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef char *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int *_g4_t_v65;
  typedef int *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef char *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef const char *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef const char *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef const char *_g4_t_v79;
  typedef char *_g4_t_v80;
  typedef char *_g4_t_v81;
  typedef int _g4_t_v82;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v59)) > _g4_s0 ? (4u + sizeof(_g4_t_v59)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v60)) > _g4_s1 ? (4u + sizeof(_g4_t_v60)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v61)) > _g4_s2 ? (4u + sizeof(_g4_t_v61)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v62)) > _g4_s3 ? (4u + sizeof(_g4_t_v62)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v63)) > _g4_s4 ? (4u + sizeof(_g4_t_v63)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v64)) > _g4_s5 ? (4u + sizeof(_g4_t_v64)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v65)) > _g4_s6 ? (8u + sizeof(_g4_t_v65)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v66)) > _g4_s7 ? (8u + sizeof(_g4_t_v66)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v67)) > _g4_s8 ? (16u + sizeof(_g4_t_v67)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v68)) > _g4_s9 ? (16u + sizeof(_g4_t_v68)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v69)) > _g4_s10 ? (16u + sizeof(_g4_t_v69)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v70)) > _g4_s11 ? (20u + sizeof(_g4_t_v70)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v71)) > _g4_s12 ? (20u + sizeof(_g4_t_v71)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v72)) > _g4_s13 ? (24u + sizeof(_g4_t_v72)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v73)) > _g4_s14 ? (24u + sizeof(_g4_t_v73)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v74)) > _g4_s15 ? (24u + sizeof(_g4_t_v74)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v75)) > _g4_s16 ? (24u + sizeof(_g4_t_v75)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v76)) > _g4_s17 ? (28u + sizeof(_g4_t_v76)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v77)) > _g4_s18 ? (28u + sizeof(_g4_t_v77)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v78)) > _g4_s19 ? (28u + sizeof(_g4_t_v78)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v79)) > _g4_s20 ? (28u + sizeof(_g4_t_v79)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v80)) > _g4_s21 ? (28u + sizeof(_g4_t_v80)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v81)) > _g4_s22 ? (32u + sizeof(_g4_t_v81)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_v82)) > _g4_s23 ? (44u + sizeof(_g4_t_v82)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 4u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 4u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 8u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 8u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 16u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 16u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 20u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 24u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 24u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 24u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 24u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 28u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 28u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 28u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 28u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 28u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 32u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 44u);

  v2 = *self;
  if ( *self == nullptr )
    goto LABEL_27;
  v67 = *((uint32_t *)a2 + 4);
  v3 = v67 << 9 >> 9;
  if ( (uint8_t *)(v67 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v13 = *((char **)a2 + 3);
      v12 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v12 = *(char *)a2 - 1;
      v13 = (char *)a2 + 1;
    }
    v3 = 5381;
    v14 = 5381;
    if ( v12 > 0 )
    {
      do
      {
        --v12;
        v15 = 33 * v14;
        v16 = (uint8_t)v13[v12] + 32;
        if ( (uint8_t)(v13[v12] - 65) > 0x19u )
          v16 = (uint8_t)v13[v12];
        v14 = v15 ^ v16;
      }
      while ( v12 != 0 );
      v14 = v14 << 9 >> 9;
      v3 = v14;
    }
    *((uint32_t *)a2 + 4) = v14 & 0x7FFFFF | v67 & 0xFF800000;
    v2 = *self;
  }
  v76 = v2[1];
  v4 = v3 & v76;
  v5 = 4 * (v3 & v76);
  v6 = &v2[v5 + 2];
  if ( *v6 == -2 || v4 != (v2[v5 + 3] & v76) )
    goto LABEL_27;
  v7 = v2[v5 + 3];
  v72 = v3;
  while ( 1 )
  {
    if ( v7 != v72 )
      goto LABEL_6;
    v8 = (const gameswf::String::Self *)v6[2];
    if ( a2 == v8 )
      break;
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v77 = *((const char **)a2 + 3);
      if ( *(uint8_t *)v8 != 0xFF )
      {
LABEL_12:
        v9 = (char *)v8 + 1;
        goto LABEL_13;
      }
    }
    else
    {
      v77 = (char *)a2 + 1;
      if ( *(uint8_t *)v8 != 0xFF )
        goto LABEL_12;
    }
    v9 = *((const char **)v8 + 3);
LABEL_13:
    v59 = v2;
    v10 = strcmp(v9, v77);
    v2 = v59;
    if ( v10 == 0 )
      break;
LABEL_6:
    v4 = *v6;
    if ( *v6 == -1 )
      goto LABEL_27;
    v6 = &v2[4 * v4 + 2];
    v7 = v2[4 * v4 + 3];
  }
  if ( v4 >= 0 )
    return (char *)v2[4 * v4 + 5];
LABEL_27:
  v17 = *(uint8_t *)a2;
  if ( *(uint8_t *)a2 == 0xFF )
    v18 = *((uint32_t *)a2 + 1) - 1;
  else
    v18 = v17 - 1;
  if ( v18 <= 13 )
  {
    v40 = (char *)gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(self + 1), 20);
    v27 = v40;
    v41 = (char *)a2 + 1;
    if ( *(uint8_t *)a2 == 0xFF )
      v41 = *((char **)a2 + 3);
    if ( v40 != nullptr )
    {
      *v40 = 1;
      v40[1] = 0;
      if ( v41 != nullptr )
      {
        v62 = (uint32_t *)(v40);
        v42 = strlen(v41);
        gameswf::String::resize((gameswf::String::Self *)v62, v42);
        v43 = (char *)(v42 + 1);
        v44 = (gameswf::Self *)((char *)v62 + 1);
        if ( *(uint8_t *)v62 == 0xFF )
          v44 = (gameswf::Self *)v62[3];
        gameswf::Strcpy_s(v44, v43, (gameswf::Self *)v41);
        v27 = (char *)v62;
      }
      v45 = *((uint32_t *)v27 + 4) | 0x7FFFFF;
      *((uint32_t *)v27 + 4) = v45;
      v27[19] = HIBYTE(v45) | 1;
      v27[18] = BYTE2(v45) | 0x80;
    }
  }
  else
  {
    v19 = v17 - 1;
    if ( v17 == -1 )
      v19 = *((uint32_t *)a2 + 1) - 1;
    v20 = gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(self + 1), v19 + 21);
    v21 = v20;
    if ( v20 != 0 )
    {
      *(uint8_t *)v20 = 1;
      *(uint8_t *)(v20 + 1) = 0;
      v22 = *(uint32_t *)(v20 + 16) | 0x7FFFFF;
      *(uint32_t *)(v21 + 16) = v22;
      *(uint8_t *)(v21 + 19) = HIBYTE(v22) | 1;
      *(uint8_t *)(v21 + 18) = BYTE2(v22) | 0x80;
    }
    v23 = (char *)a2 + 1;
    if ( *(uint8_t *)a2 == 0xFF )
      v23 = *((const char **)a2 + 3);
    v24 = v21 + 20;
    v60 = (gameswf::String::Self *)v21;
    strcpy((char *)(v21 + 20), v23);
    v25 = *(char *)a2 - 1;
    if ( *(uint8_t *)a2 == 0xFF )
      v25 = *((uint32_t *)a2 + 1) - 1;
    v26 = v25 + 1;
    gameswf::String::resize(v60, 0);
    v27 = (char *)v60;
    *((uint32_t *)v60 + 3) = v24;
    *(uint8_t *)v60 = -1;
    *((uint32_t *)v60 + 1) = v26;
    *((uint32_t *)v60 + 2) = v26;
    *((uint8_t *)v60 + 19) &= ~1u;
  }
  v81 = v27;
  v28 = *self;
  if ( *self == nullptr )
    goto LABEL_76;
  v78 = *((uint32_t *)v27 + 4);
  if ( (uint8_t *)(v78 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v27 == -1 )
    {
      v35 = *((char **)v27 + 3);
      v36 = *((uint32_t *)v27 + 1) - 1;
    }
    else
    {
      v35 = v27 + 1;
      v36 = *v27 - 1;
    }
    v73 = 5381;
    v37 = 5381;
    if ( v36 > 0 )
    {
      do
      {
        --v36;
        v38 = 33 * v37;
        v39 = (uint8_t)v35[v36] + 32;
        if ( (uint8_t)(v35[v36] - 65) > 0x19u )
          v39 = (uint8_t)v35[v36];
        v37 = v38 ^ v39;
      }
      while ( v36 != 0 );
      v37 = v37 << 9 >> 9;
      v73 = v37;
    }
    *((uint32_t *)v27 + 4) = v37 & 0x7FFFFF | v78 & 0xFF800000;
    v29 = v73;
    v28 = *self;
  }
  else
  {
    v73 = v78 << 9 >> 9;
    v29 = v73;
  }
  v30 = v28[1] & v29;
  v31 = &v28[4 * v30 + 2];
  if ( *v31 == -2 || v30 != (v28[4 * v30 + 3] & v28[1]) )
    goto LABEL_76;
  for ( i = v28[4 * v30 + 3]; ; i = v28[4 * v30 + 3] )
  {
    if ( i == v73 )
    {
      v70 = v31[2];
      if ( v27 == (char *)v70 )
        break;
      v79 = *v27 == -1 ? *((const char **)v27 + 3) : v27 + 1;
      v33 = *(uint8_t *)v70 == 0xFF ? *(const char **)(v70 + 12) : (const char *)(v70 + 1);
      v61 = v27;
      v65 = v28;
      v34 = strcmp(v33, v79);
      v27 = v61;
      v28 = v65;
      if ( v34 == 0 )
        break;
    }
    v30 = *v31;
    if ( *v31 == -1 )
      goto LABEL_76;
    v31 = &v28[4 * v30 + 2];
  }
  if ( v30 >= 0 )
  {
LABEL_55:
    v28[4 * v30 + 5] = (int)(uintptr_t)(v27);
  }
  else
  {
LABEL_76:
    v63 = v27;
    v82 = 0;
    gameswf::hash_gameswf_StringPointer_ga_128477::add(
      self,
      &v81,
      &v82);
    v27 = v63;
    v28 = *self;
    if ( *self == nullptr )
      goto LABEL_98;
    v80 = v81;
    v68 = *((uint32_t *)v81 + 4);
    if ( (uint8_t *)(v68 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *v81 == -1 )
      {
        v55 = *((uint32_t *)v81 + 1) - 1;
        v54 = *((char **)v81 + 3);
      }
      else
      {
        v54 = v81 + 1;
        v55 = *v81 - 1;
      }
      v74 = 5381;
      v56 = 5381;
      if ( v55 > 0 )
      {
        do
        {
          --v55;
          v57 = 33 * v56;
          v58 = (uint8_t)v54[v55] + 32;
          if ( (uint8_t)(v54[v55] - 65) > 0x19u )
            v58 = (uint8_t)v54[v55];
          v56 = v57 ^ v58;
        }
        while ( v55 != 0 );
        v27 = v63;
        v56 = v56 << 9 >> 9;
        v74 = v56;
      }
      *((uint32_t *)v81 + 4) = v56 & 0x7FFFFF | v68 & 0xFF800000;
      v46 = v74;
      v28 = *self;
    }
    else
    {
      v74 = v68 << 9 >> 9;
      v46 = v74;
    }
    v30 = v28[1] & v46;
    v47 = &v28[4 * v30 + 2];
    if ( *v47 != -2 && v30 == (v28[4 * v30 + 3] & v28[1]) )
    {
      v71 = v27;
      v48 = v28[4 * v30 + 3];
      v49 = v74;
      while ( 1 )
      {
        if ( v48 == v49 )
        {
          v69 = v47[2];
          if ( v80 == (char *)v69 )
            break;
          v50 = *v80 == -1 ? *((const char **)v80 + 3) : v80 + 1;
          v75 = v50;
          v51 = *(uint8_t *)v69 == 0xFF ? *(const char **)(v69 + 12) : (const char *)(v69 + 1);
          v64 = v49;
          v66 = v28;
          v52 = strcmp(v51, v75);
          v49 = v64;
          v28 = v66;
          if ( v52 == 0 )
            break;
        }
        v30 = *v47;
        if ( *v47 == -1 )
        {
          v27 = v71;
          goto LABEL_98;
        }
        v47 = &v28[4 * v30 + 2];
        v48 = v28[4 * v30 + 3];
      }
      v27 = v71;
      if ( v30 >= 0 )
        goto LABEL_55;
      v53 = 16 * v30 + 8;
    }
    else
    {
LABEL_98:
      v53 = -8;
    }
    *(int *)((char *)v28 + v53 + 12) = (int)(uintptr_t)(v27);
  }
  return v27;
}

// ----------------------------------------------------------------------------
// Function: gameswf::PermanentStringCache::Destroy  (binary VA: 0x10bd440)
// Original: gameswf::PermanentStringCache::~PermanentStringCache
// ----------------------------------------------------------------------------
void gameswf::PermanentStringCache::Destroy(gameswf::Self **self)
{
  gameswf::Self *v1;
  int v2;
  int v3;
  int i;
  uint32_t *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  int v8;
  int v9;
  int j;
  uint32_t *v11;

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
  gameswf::array_gameswf_array_char_6ef230::resize((gameswf::array<gameswf::array<char>> *)(self + 1), 0);
  gameswf::array_gameswf_array_char_6ef230::resize((gameswf::array<gameswf::array<char>> *)(self + 1), 0);
  gameswf::array_gameswf_array_char_6ef230::resize((gameswf::array<gameswf::array<char>> *)(self + 1), 0);
  if ( *(self + 4) == nullptr )
  {
    v6 = *(self + 1);
    *(self + 3) = nullptr;
    if ( v6 != nullptr )
      gameswf::free_internal(v6);
    *(self + 1) = nullptr;
  }
  v7 = *self;
  if ( *self != nullptr )
  {
    v8 = *((uint32_t *)v7 + 1);
    if ( v8 >= 0 )
    {
      v9 = 8;
      for ( j = 0; j <= v8; ++j )
      {
        v11 = (uint32_t *)((char *)v7 + v9);
        if ( *(uint32_t *)((char *)v7 + v9) != -2 )
        {
          *v11 = -2;
          v11[1] = 0;
          v7 = *self;
        }
        v9 += 16;
      }
    }
    gameswf::free_internal(v7);
    *self = nullptr;
  }
}


