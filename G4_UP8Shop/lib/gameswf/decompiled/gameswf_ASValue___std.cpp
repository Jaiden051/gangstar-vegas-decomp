#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASValue___std.h"

// ----------------------------------------------------------------------------
// Function: g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_237565  (binary VA: 0x1122d50)
// Original: std::__unguarded_partition_pivot<gameswf::ASValue *,gameswf::StandardArraySorter>
// ----------------------------------------------------------------------------
gameswf::ASValue::Self * g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_237565(gameswf::ASValue::Self *a1, int a2, int a3)
{
  gameswf::ASValue::Self *v3;
  gameswf::ASValue::Self *v4;
  char v5;
  gameswf::ASValue::Self *v6;
  char v7;
  typedef gameswf::ASValue::Self *_g4_t_v9;
  typedef gameswf::ASValue::Self *_g4_t_v10;
  typedef gameswf::ASValue::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v12)) > _g4_s3 ? (32u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v13)) > _g4_s4 ? (36u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (37u + sizeof(_g4_t_v14)) > _g4_s5 ? (37u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 37u);

  v3 = (gameswf::ASValue::Self *)(a2 - 12);
  v4 = (gameswf::ASValue::Self *)((char *)a1
                          + 12
                          * ((int)(((unsigned int)(-1431655765 * ((a2 - (int)(uintptr_t)(a1)) >> 2)) >> 31)
                                 - 1431655765 * ((a2 - (int)(uintptr_t)(a1)) >> 2)) >> 1));
  v12 = a3;
  v5 = gameswf::StandardArraySorter::opCall(&v12, a1, v4);
  v11 = (gameswf::ASValue::Self *)(a2 - 12);
  if ( v5 != 0 )
  {
    if ( gameswf::StandardArraySorter::opCall(&v12, v4, v11) != 0 )
    {
      v13 = 0;
      v14 = 0;
      v10 = a1;
      goto LABEL_4;
    }
    if ( gameswf::StandardArraySorter::opCall(&v12, a1, v3) == 0 )
      goto LABEL_5;
    v13 = 0;
    v14 = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v13, a1);
LABEL_12:
    gameswf::ASValue::opAssign(a1, v3);
    gameswf::ASValue::opAssign(v3, (const gameswf::ASValue::Self *)&v13);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v13);
    goto LABEL_5;
  }
  if ( gameswf::StandardArraySorter::opCall(&v12, a1, v11) == 0 )
  {
    v7 = gameswf::StandardArraySorter::opCall(&v12, v4, v3);
    v13 = 0;
    v14 = 0;
    v10 = a1;
    if ( v7 != 0 )
    {
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v13, a1);
      goto LABEL_12;
    }
LABEL_4:
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v13, v10);
    gameswf::ASValue::opAssign(a1, v4);
    gameswf::ASValue::opAssign(v4, (const gameswf::ASValue::Self *)&v13);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v13);
  }
LABEL_5:
  v6 = (gameswf::ASValue::Self *)((char *)a1 + 12);
  v12 = a3;
  while ( 1 )
  {
    while ( gameswf::StandardArraySorter::opCall(&v12, v6, a1) != 0 )
      v6 = (gameswf::ASValue::Self *)((char *)v6 + 12);
    while ( gameswf::StandardArraySorter::opCall(&v12, a1, v3) != 0 )
      v3 = (gameswf::ASValue::Self *)((char *)v3 - 12);
    if ( v3 <= v6 )
      break;
    v13 = 0;
    v14 = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v13, v6);
    gameswf::ASValue::opAssign(v6, v3);
    v6 = (gameswf::ASValue::Self *)((char *)v6 + 12);
    v9 = v3;
    v3 = (gameswf::ASValue::Self *)((char *)v3 - 12);
    gameswf::ASValue::opAssign(v9, (const gameswf::ASValue::Self *)&v13);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v13);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_bb328b  (binary VA: 0x1124410)
// Original: std::__unguarded_partition_pivot<gameswf::ASValue *,gameswf::CustomArraySorter>
// ----------------------------------------------------------------------------
gameswf::ASValue::Self * g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_bb328b(gameswf::ASValue::Self *a1, int a2, int a3, int a4)
{
  gameswf::ASValue::Self *v4;
  char v5;
  gameswf::ASValue::Self *v6;
  gameswf::ASValue::Self *i;
  gameswf::ASValue::Self *v8;
  char v9;
  typedef gameswf::ASValue::Self *_g4_t_v11;
  typedef gameswf::ASValue::Self *_g4_t_v12;
  typedef gameswf::ASValue::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v14)) > _g4_s3 ? (44u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v15)) > _g4_s4 ? (48u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v16)) > _g4_s5 ? (52u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (53u + sizeof(_g4_t_v17)) > _g4_s6 ? (53u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 53u);

  v13 = (gameswf::ASValue::Self *)(a2 - 12);
  v15 = a4;
  v4 = (gameswf::ASValue::Self *)((char *)a1
                          + 12
                          * ((int)(((unsigned int)(-1431655765 * ((a2 - (int)(uintptr_t)(a1)) >> 2)) >> 31)
                                 - 1431655765 * ((a2 - (int)(uintptr_t)(a1)) >> 2)) >> 1));
  v14 = a3;
  v5 = gameswf::CustomArraySorter::opCall((const gameswf::ASValue::Self **)&v14, a1, v4);
  v12 = (gameswf::ASValue::Self *)(a2 - 12);
  if ( v5 != 0 )
  {
    if ( (uint8_t)gameswf::CustomArraySorter::opCall((const gameswf::ASValue::Self **)&v14, v4, v12) != 0 )
    {
      v16 = 0;
      v17 = 0;
      v11 = a1;
      goto LABEL_4;
    }
    if ( (uint8_t)gameswf::CustomArraySorter::opCall((const gameswf::ASValue::Self **)&v14, a1, v13) == 0 )
      goto LABEL_5;
    v16 = 0;
    v17 = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v16, a1);
LABEL_12:
    gameswf::ASValue::opAssign(a1, v13);
    gameswf::ASValue::opAssign(v13, (const gameswf::ASValue::Self *)&v16);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v16);
    goto LABEL_5;
  }
  if ( (uint8_t)gameswf::CustomArraySorter::opCall((const gameswf::ASValue::Self **)&v14, a1, v12) == 0 )
  {
    v9 = gameswf::CustomArraySorter::opCall((const gameswf::ASValue::Self **)&v14, v4, v13);
    v16 = 0;
    v17 = 0;
    v11 = a1;
    if ( v9 != 0 )
    {
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v16, a1);
      goto LABEL_12;
    }
LABEL_4:
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v16, v11);
    gameswf::ASValue::opAssign(a1, v4);
    gameswf::ASValue::opAssign(v4, (const gameswf::ASValue::Self *)&v16);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v16);
  }
LABEL_5:
  v15 = a4;
  v6 = (gameswf::ASValue::Self *)((char *)a1 + 12);
  v14 = a3;
  for ( i = a1; ; i = a1 )
  {
    while ( 1 )
    {
      v8 = v13;
      if ( (uint8_t)gameswf::CustomArraySorter::opCall((const gameswf::ASValue::Self **)&v14, v6, i) == 0 )
        break;
      v6 = (gameswf::ASValue::Self *)((char *)v6 + 12);
      i = a1;
    }
    while ( (uint8_t)gameswf::CustomArraySorter::opCall((const gameswf::ASValue::Self **)&v14, a1, v8) != 0 )
      v8 = (gameswf::ASValue::Self *)((char *)v8 - 12);
    if ( v8 <= v6 )
      break;
    v16 = 0;
    v17 = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v16, v6);
    gameswf::ASValue::opAssign(v6, v8);
    v6 = (gameswf::ASValue::Self *)((char *)v6 + 12);
    gameswf::ASValue::opAssign(v8, (const gameswf::ASValue::Self *)&v16);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v16);
    v13 = (gameswf::ASValue::Self *)((char *)v8 - 12);
  }
  return v6;
}


