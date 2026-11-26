#include "Core/Utils/DecompTypes.h"
#include "gameswf_partial_sort_gameswf.h"

// ----------------------------------------------------------------------------
// Function: g4_std::partial_sort_gameswf_ASValue_gameswf_43a4bf  (binary VA: 0x1122520)
// Original: std::partial_sort<gameswf::ASValue *,gameswf::StandardArraySorter>
// ----------------------------------------------------------------------------
void g4_std::partial_sort_gameswf_ASValue_gameswf_43a4bf(gameswf::ASValue::Self *a1, gameswf::ASValue::Self *a2, unsigned int a3, int a4)
{
  gameswf::ASValue::Self *v4;
  int v5;
  int v6;
  const gameswf::ASValue::Self *i;
  int v8;
  int v9;
  int v10;
  int j;
  int v12;
  gameswf::ASValue::Self *v13;
  int v14;
  gameswf::ASValue::Self *v15;
  int v16;
  int k;
  int v18;
  int v19;
  gameswf::ASValue::Self *v20;
  int n;
  int m;
  typedef gameswf::ASValue::Self *_g4_t_v23;
  typedef gameswf::ASValue::Self *_g4_t_v24;
  typedef gameswf::ASValue::Self *_g4_t_v25;
  typedef gameswf::ASValue::Self *_g4_t_v26;
  typedef int _g4_t_v27;
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
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint8_t _g4_t_v40[12];
  typedef uint8_t _g4_t_v41[12];
  typedef uint8_t _g4_t_v42[12];
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef uint8_t _g4_t_v47[12];
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v24)) > _g4_s1 ? (0u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v25)) > _g4_s2 ? (4u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v26)) > _g4_s3 ? (4u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v27)) > _g4_s4 ? (8u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v28)) > _g4_s5 ? (8u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v29)) > _g4_s6 ? (12u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v30)) > _g4_s7 ? (16u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v31)) > _g4_s8 ? (16u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v32)) > _g4_s9 ? (20u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v33)) > _g4_s10 ? (24u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v34)) > _g4_s11 ? (28u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v35)) > _g4_s12 ? (32u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v36)) > _g4_s13 ? (36u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v37)) > _g4_s14 ? (48u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v38)) > _g4_s15 ? (52u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v39)) > _g4_s16 ? (56u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v40)) > _g4_s17 ? (60u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v41)) > _g4_s18 ? (72u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v42)) > _g4_s19 ? (84u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v43)) > _g4_s20 ? (96u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (97u + sizeof(_g4_t_v44)) > _g4_s21 ? (97u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v45)) > _g4_s22 ? (108u + sizeof(_g4_t_v45)) : _g4_s22,
    _g4_s24 = (109u + sizeof(_g4_t_v46)) > _g4_s23 ? (109u + sizeof(_g4_t_v46)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v47)) > _g4_s24 ? (120u + sizeof(_g4_t_v47)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v48)) > _g4_s25 ? (132u + sizeof(_g4_t_v48)) : _g4_s25,
    _g4_s27 = (133u + sizeof(_g4_t_v49)) > _g4_s26 ? (133u + sizeof(_g4_t_v49)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 84u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 97u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 109u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 120u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 132u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 133u);

  v4 = a1;
  v37 = a4;
  v5 = a2 - a1;
  v35 = a2 - a1;
  if ( a2 - a1 > 23 )
  {
    v6 = -1431655765 * (v5 >> 2);
    v34 = (v6 - 2) >> 1;
    v33 = (-85 * (uint8_t)(v5 >> 2)) & 1;
    v30 = (v6 - 1) >> 1;
    v36 = 2 * v34 + 1;
    v27 = v34;
    v25 = (gameswf::ASValue::Self *)((char *)a1 + 12 * v34);
    for ( i = v25; ; i = v25 )
    {
      v45 = 0;
      v46 = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v45, i);
      v40[0] = 0;
      v40[1] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v40, (const gameswf::ASValue::Self *)&v45);
      v8 = v27;
      v38 = a4;
      while ( v8 < v30 )
      {
        v9 = v8 + 1;
        v10 = v8;
        v8 = 2 * (v8 + 1);
        i = (gameswf::ASValue::Self *)((char *)a1 + 16 * v9 + 4 * v8);
        if ( gameswf::StandardArraySorter::opCall(&v38, i, (gameswf::ASValue::Self *)((char *)a1 + 12 * v8 - 12)) != 0 )
          i = (gameswf::ASValue::Self *)((char *)a1 + 12 * --v8);
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)((char *)a1 + 12 * v10), i);
      }
      if ( v33 == 0 && v34 == v8 )
      {
        gameswf::ASValue::opAssign(
          (gameswf::ASValue::Self *)((char *)a1 + 12 * v34),
          (gameswf::ASValue::Self *)((char *)a1 + 12 * v36));
        i = (gameswf::ASValue::Self *)((char *)a1 + 12 * v36);
        v8 = 2 * v34 + 1;
      }
      v41[0] = 0;
      v41[1] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v41, (const gameswf::ASValue::Self *)v40);
      v39 = v38;
      if ( v27 < v8 )
      {
        for ( j = (v8 - 1) / 2; ; j = (j - 1) / 2 )
        {
          i = (gameswf::ASValue::Self *)((char *)a1 + 12 * j);
          if ( gameswf::StandardArraySorter::opCall(&v39, i, (gameswf::ASValue::Self *)v41) == 0 )
            break;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)((char *)a1 + 12 * v8), i);
          if ( v27 >= j )
            goto LABEL_11;
          v8 = j;
        }
        i = (gameswf::ASValue::Self *)((char *)a1 + 12 * v8);
      }
LABEL_11:
      gameswf::ASValue::opAssign(i, (const gameswf::ASValue::Self *)v41);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v41);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v40);
      v25 = (gameswf::ASValue::Self *)((char *)v25 - 12);
      if ( v27 == 0 )
        break;
      --v27;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v45);
    }
    v4 = a1;
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v45);
  }
  if ( (unsigned int)(uintptr_t)(a2) < a3 )
  {
    v12 = -1431655765 * (v35 >> 2);
    v32 = (v12 - 2) / 2;
    v13 = a2;
    v29 = (v12 - 1) / 2;
    v26 = a2;
    while ( gameswf::StandardArraySorter::opCall(&v37, v13, v4) == 0 )
    {
LABEL_21:
      v26 = (gameswf::ASValue::Self *)((char *)v26 + 12);
      v13 = v26;
      if ( a3 <= (unsigned int)(uintptr_t)(v26) )
        goto LABEL_34;
    }
    v14 = v37;
    v45 = 0;
    v46 = 0;
    v15 = v4;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v45, v26);
    gameswf::ASValue::opAssign(v26, v4);
    v42[0] = 0;
    v42[1] = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v42, (const gameswf::ASValue::Self *)&v45);
    v38 = v14;
    v16 = 0;
    if ( v29 > 0 )
    {
      v23 = v4;
      for ( k = 0; ; k = v16 )
      {
        v16 = 2 * (k + 1);
        v15 = (gameswf::ASValue::Self *)((char *)v23 + 24 * k + 24);
        if ( gameswf::StandardArraySorter::opCall(&v38, v15, (gameswf::ASValue::Self *)((char *)v23 + 12 * v16 - 12)) != 0 )
          v15 = (gameswf::ASValue::Self *)((char *)v23 + 12 * --v16);
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)((char *)v23 + 12 * k), v15);
        if ( v29 <= v16 )
          break;
      }
      v4 = v23;
    }
    if ( ((-85 * (uint8_t)(v35 >> 2)) & 1) == 0 && v16 == v32 )
    {
      v16 = 2 * v16 + 1;
      gameswf::ASValue::opAssign(v15, (gameswf::ASValue::Self *)((char *)v4 + 12 * v16));
      v43 = 0;
      v44 = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v43, (const gameswf::ASValue::Self *)v42);
      v39 = v38;
    }
    else
    {
      v43 = 0;
      v44 = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v43, (const gameswf::ASValue::Self *)v42);
      v39 = v38;
      if ( v16 <= 0 )
      {
LABEL_33:
        gameswf::ASValue::opAssign(v15, (const gameswf::ASValue::Self *)&v43);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v43);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v42);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v45);
        goto LABEL_21;
      }
    }
    v28 = v16;
    for ( m = (v16 - 1) >> 1; ; m = (m - 1) / 2 )
    {
      if ( gameswf::StandardArraySorter::opCall(
             &v39,
             (gameswf::ASValue::Self *)((char *)v4 + 12 * m),
             (gameswf::ASValue::Self *)&v43) == 0 )
      {
        v15 = (gameswf::ASValue::Self *)((char *)v4 + 12 * v28);
        goto LABEL_33;
      }
      gameswf::ASValue::opAssign(
        (gameswf::ASValue::Self *)((char *)v4 + 12 * v28),
        (gameswf::ASValue::Self *)((char *)v4 + 12 * m));
      if ( m == 0 )
        break;
      v28 = m;
    }
    v15 = v4;
    goto LABEL_33;
  }
LABEL_34:
  if ( v35 > 23 )
  {
    v24 = v4;
    while ( 1 )
    {
      a2 = (gameswf::ASValue::Self *)((char *)a2 - 12);
      v45 = 0;
      v46 = 0;
      v18 = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v45, a2);
      v19 = 0;
      gameswf::ASValue::opAssign(a2, v24);
      v47[0] = 0;
      v47[1] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v47, (const gameswf::ASValue::Self *)&v45);
      v38 = a4;
      v31 = -1431655765 * ((a2 - v24) >> 2);
      v20 = v24;
      if ( (v31 - 1) / 2 > 0 )
      {
        while ( 1 )
        {
          v18 = 2 * (v19 + 1);
          v20 = (gameswf::ASValue::Self *)((char *)v24 + 24 * v19 + 24);
          if ( gameswf::StandardArraySorter::opCall(&v38, v20, (gameswf::ASValue::Self *)((char *)v24 + 12 * v18 - 12)) != 0 )
            v20 = (gameswf::ASValue::Self *)((char *)v24 + 12 * --v18);
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)((char *)v24 + 12 * v19), v20);
          if ( v18 >= (v31 - 1) / 2 )
            break;
          v19 = v18;
        }
      }
      if ( (v31 & 1) == 0 && v18 == (v31 - 2) / 2 )
        break;
      v48 = 0;
      v49 = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v48, (const gameswf::ASValue::Self *)v47);
      v39 = v38;
      if ( v18 > 0 )
        goto LABEL_48;
LABEL_45:
      gameswf::ASValue::opAssign(v20, (const gameswf::ASValue::Self *)&v48);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v48);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v47);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v45);
      if ( a2 - v24 <= 23 )
        return;
    }
    v18 = 2 * v18 + 1;
    gameswf::ASValue::opAssign(v20, (gameswf::ASValue::Self *)((char *)v24 + 12 * v18));
    v48 = 0;
    v49 = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v48, (const gameswf::ASValue::Self *)v47);
    v39 = v38;
LABEL_48:
    for ( n = (v18 - 1) >> 1; ; n = (n - 1) / 2 )
    {
      v20 = (gameswf::ASValue::Self *)((char *)v24 + 12 * n);
      if ( gameswf::StandardArraySorter::opCall(&v39, v20, (gameswf::ASValue::Self *)&v48) == 0 )
        break;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)((char *)v24 + 12 * v18), v20);
      if ( n == 0 )
        goto LABEL_45;
      v18 = n;
    }
    v20 = (gameswf::ASValue::Self *)((char *)v24 + 12 * v18);
    goto LABEL_45;
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::partial_sort_gameswf_ASValue_gameswf_8057c8  (binary VA: 0x1123b30)
// Original: std::partial_sort<gameswf::ASValue *,gameswf::CustomArraySorter>
// ----------------------------------------------------------------------------
void g4_std::partial_sort_gameswf_ASValue_gameswf_8057c8(gameswf::ASValue::Self *a1, gameswf::ASValue::Self *a2, unsigned int a3, int a4, int a5)
{
  int v5;
  int v6;
  const gameswf::ASValue::Self *i;
  int v8;
  int v9;
  int v10;
  int j;
  int v12;
  char k;
  int v14;
  int v15;
  int v16;
  int v17;
  gameswf::ASValue::Self *v18;
  int v19;
  int v20;
  gameswf::ASValue::Self *v21;
  int n;
  int v23;
  int m;
  typedef gameswf::ASValue::Self *_g4_t_v25;
  typedef gameswf::ASValue::Self *_g4_t_v26;
  typedef gameswf::ASValue::Self *_g4_t_v27;
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
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef const gameswf::ASValue::Self *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[12];
  typedef uint8_t _g4_t_v43[12];
  typedef uint8_t _g4_t_v44[12];
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef char _g4_t_v47;
  typedef char _g4_t_v48;
  typedef uint8_t _g4_t_v49[12];
  typedef char _g4_t_v50;
  typedef char _g4_t_v51;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v25)) > _g4_s0 ? (12u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v29)) > _g4_s4 ? (24u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v30)) > _g4_s5 ? (24u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v31)) > _g4_s6 ? (28u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v32)) > _g4_s7 ? (40u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v33)) > _g4_s8 ? (44u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v34)) > _g4_s9 ? (48u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v35)) > _g4_s10 ? (52u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v36)) > _g4_s11 ? (68u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v37)) > _g4_s12 ? (72u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v38)) > _g4_s13 ? (76u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v39)) > _g4_s14 ? (80u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v40)) > _g4_s15 ? (84u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v41)) > _g4_s16 ? (88u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v42)) > _g4_s17 ? (92u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v43)) > _g4_s18 ? (104u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v44)) > _g4_s19 ? (116u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v45)) > _g4_s20 ? (128u + sizeof(_g4_t_v45)) : _g4_s20,
    _g4_s22 = (129u + sizeof(_g4_t_v46)) > _g4_s21 ? (129u + sizeof(_g4_t_v46)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v47)) > _g4_s22 ? (140u + sizeof(_g4_t_v47)) : _g4_s22,
    _g4_s24 = (141u + sizeof(_g4_t_v48)) > _g4_s23 ? (141u + sizeof(_g4_t_v48)) : _g4_s23,
    _g4_s25 = (152u + sizeof(_g4_t_v49)) > _g4_s24 ? (152u + sizeof(_g4_t_v49)) : _g4_s24,
    _g4_s26 = (164u + sizeof(_g4_t_v50)) > _g4_s25 ? (164u + sizeof(_g4_t_v50)) : _g4_s25,
    _g4_s27 = (165u + sizeof(_g4_t_v51)) > _g4_s26 ? (165u + sizeof(_g4_t_v51)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 88u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 104u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 116u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 128u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 129u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 140u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 141u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 152u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 164u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 165u);

  v36 = a4;
  v37 = a5;
  v5 = a2 - a1;
  v34 = a2 - a1;
  if ( a2 - a1 > 23 )
  {
    v6 = -1431655765 * (v5 >> 2);
    v33 = (v6 - 2) >> 1;
    v32 = (-85 * (uint8_t)(v5 >> 2)) & 1;
    v29 = (v6 - 1) >> 1;
    v35 = 2 * v33 + 1;
    v27 = (gameswf::ASValue::Self *)v33;
    v25 = (gameswf::ASValue::Self *)((char *)a1 + 12 * v33);
    for ( i = v25; ; i = v25 )
    {
      v47 = 0;
      v48 = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v47, i);
      v42[0] = 0;
      v42[1] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v42, (const gameswf::ASValue::Self *)&v47);
      v8 = (int)(uintptr_t)(v27);
      v38 = a4;
      v39 = a5;
      while ( v8 < v29 )
      {
        v9 = v8 + 1;
        v10 = v8;
        v8 = 2 * (v8 + 1);
        i = (gameswf::ASValue::Self *)((char *)a1 + 16 * v9 + 4 * v8);
        if ( (uint8_t)gameswf::CustomArraySorter::opCall(
                                (const gameswf::ASValue::Self **)&v38,
                                i,
                                (gameswf::ASValue::Self *)((char *)a1 + 12 * v8 - 12)) != 0 )
          i = (gameswf::ASValue::Self *)((char *)a1 + 12 * --v8);
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)((char *)a1 + 12 * v10), i);
      }
      if ( v32 == 0 && v33 == v8 )
      {
        gameswf::ASValue::opAssign(
          (gameswf::ASValue::Self *)((char *)a1 + 12 * v33),
          (gameswf::ASValue::Self *)((char *)a1 + 12 * v35));
        i = (gameswf::ASValue::Self *)((char *)a1 + 12 * v35);
        v8 = 2 * v33 + 1;
      }
      v43[0] = 0;
      v43[1] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v43, (const gameswf::ASValue::Self *)v42);
      v40 = (const gameswf::ASValue::Self *)v38;
      v41 = v39;
      if ( (int)(uintptr_t)(v27) < v8 )
      {
        for ( j = (v8 - 1) / 2; ; j = (j - 1) / 2 )
        {
          i = (gameswf::ASValue::Self *)((char *)a1 + 12 * j);
          if ( (uint8_t)gameswf::CustomArraySorter::opCall(&v40, i, (gameswf::ASValue::Self *)v43) == 0 )
            break;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)((char *)a1 + 12 * v8), i);
          if ( (int)(uintptr_t)(v27) >= j )
            goto LABEL_11;
          v8 = j;
        }
        i = (gameswf::ASValue::Self *)((char *)a1 + 12 * v8);
      }
LABEL_11:
      gameswf::ASValue::opAssign(i, (const gameswf::ASValue::Self *)v43);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v43);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v42);
      v25 = (gameswf::ASValue::Self *)((char *)v25 - 12);
      if ( v27 == nullptr )
        break;
      v27 = (gameswf::ASValue::Self *)((char *)v27 - 1);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v47);
    }
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v47);
  }
  if ( (unsigned int)(uintptr_t)(a2) < a3 )
  {
    v12 = -1431655765 * (v34 >> 2);
    v31 = (v12 - 2) / 2;
    v28 = (v12 - 1) / 2;
    v26 = a2;
    for ( k = gameswf::CustomArraySorter::opCall((const gameswf::ASValue::Self **)&v36, a2, a1);
          ;
          k = gameswf::CustomArraySorter::opCall((const gameswf::ASValue::Self **)&v36, v26, a1) )
    {
      if ( k == 0 )
        goto LABEL_21;
      v14 = v36;
      v15 = v37;
      v47 = 0;
      v48 = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v47, v26);
      v16 = 0;
      gameswf::ASValue::opAssign(v26, a1);
      v44[0] = 0;
      v44[1] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v44, (const gameswf::ASValue::Self *)&v47);
      v39 = v15;
      v17 = 0;
      v38 = v14;
      v18 = a1;
      if ( v28 > 0 )
      {
        while ( 1 )
        {
          v17 = 2 * (v16 + 1);
          v18 = (gameswf::ASValue::Self *)((char *)a1 + 24 * v16 + 24);
          if ( (uint8_t)gameswf::CustomArraySorter::opCall(
                                  (const gameswf::ASValue::Self **)&v38,
                                  v18,
                                  (gameswf::ASValue::Self *)((char *)a1 + 12 * v17 - 12)) != 0 )
            v18 = (gameswf::ASValue::Self *)((char *)a1 + 12 * --v17);
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)((char *)a1 + 12 * v16), v18);
          if ( v28 <= v17 )
            break;
          v16 = v17;
        }
      }
      if ( ((-85 * (uint8_t)(v34 >> 2)) & 1) == 0 && v17 == v31 )
        break;
      v45 = 0;
      v46 = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v45, (const gameswf::ASValue::Self *)v44);
      v40 = (const gameswf::ASValue::Self *)v38;
      v41 = v39;
      if ( v17 > 0 )
        goto LABEL_53;
LABEL_33:
      gameswf::ASValue::opAssign(v18, (const gameswf::ASValue::Self *)&v45);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v45);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v44);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v47);
LABEL_21:
      v26 = (gameswf::ASValue::Self *)((char *)v26 + 12);
      if ( a3 <= (unsigned int)(uintptr_t)(v26) )
        goto LABEL_34;
    }
    v17 = 2 * v17 + 1;
    gameswf::ASValue::opAssign(v18, (gameswf::ASValue::Self *)((char *)a1 + 12 * v17));
    v45 = 0;
    v46 = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v45, (const gameswf::ASValue::Self *)v44);
    v40 = (const gameswf::ASValue::Self *)v38;
    v41 = v39;
LABEL_53:
    v23 = v17;
    for ( m = (v17 - 1) >> 1; ; m = (m - 1) / 2 )
    {
      if ( (uint8_t)gameswf::CustomArraySorter::opCall(
                              &v40,
                              (gameswf::ASValue::Self *)((char *)a1 + 12 * m),
                              (gameswf::ASValue::Self *)&v45) == 0 )
      {
        v18 = (gameswf::ASValue::Self *)((char *)a1 + 12 * v23);
        goto LABEL_33;
      }
      gameswf::ASValue::opAssign(
        (gameswf::ASValue::Self *)((char *)a1 + 12 * v23),
        (gameswf::ASValue::Self *)((char *)a1 + 12 * m));
      if ( m == 0 )
        break;
      v23 = m;
    }
    v18 = a1;
    goto LABEL_33;
  }
LABEL_34:
  if ( v34 > 23 )
  {
    while ( 1 )
    {
      a2 = (gameswf::ASValue::Self *)((char *)a2 - 12);
      v47 = 0;
      v48 = 0;
      v19 = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v47, a2);
      v20 = 0;
      gameswf::ASValue::opAssign(a2, a1);
      v49[0] = 0;
      v49[1] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v49, (const gameswf::ASValue::Self *)&v47);
      v38 = a4;
      v30 = -1431655765 * ((a2 - a1) >> 2);
      v39 = a5;
      v21 = a1;
      if ( (v30 - 1) / 2 > 0 )
      {
        while ( 1 )
        {
          v19 = 2 * (v20 + 1);
          v21 = (gameswf::ASValue::Self *)((char *)a1 + 24 * v20 + 24);
          if ( (uint8_t)gameswf::CustomArraySorter::opCall(
                                  (const gameswf::ASValue::Self **)&v38,
                                  v21,
                                  (gameswf::ASValue::Self *)((char *)a1 + 12 * v19 - 12)) != 0 )
            v21 = (gameswf::ASValue::Self *)((char *)a1 + 12 * --v19);
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)((char *)a1 + 12 * v20), v21);
          if ( v19 >= (v30 - 1) / 2 )
            break;
          v20 = v19;
        }
      }
      if ( (v30 & 1) == 0 && v19 == (v30 - 2) / 2 )
        break;
      v50 = 0;
      v51 = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v50, (const gameswf::ASValue::Self *)v49);
      v40 = (const gameswf::ASValue::Self *)v38;
      v41 = v39;
      if ( v19 > 0 )
        goto LABEL_47;
LABEL_44:
      gameswf::ASValue::opAssign(v21, (const gameswf::ASValue::Self *)&v50);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v50);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v49);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v47);
      if ( a2 - a1 <= 23 )
        return;
    }
    v19 = 2 * v19 + 1;
    gameswf::ASValue::opAssign(v21, (gameswf::ASValue::Self *)((char *)a1 + 12 * v19));
    v50 = 0;
    v51 = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v50, (const gameswf::ASValue::Self *)v49);
    v40 = (const gameswf::ASValue::Self *)v38;
    v41 = v39;
LABEL_47:
    for ( n = (v19 - 1) >> 1; ; n = (n - 1) / 2 )
    {
      v21 = (gameswf::ASValue::Self *)((char *)a1 + 12 * n);
      if ( (uint8_t)gameswf::CustomArraySorter::opCall(&v40, v21, (gameswf::ASValue::Self *)&v50) == 0 )
        break;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)((char *)a1 + 12 * v19), v21);
      if ( n == 0 )
        goto LABEL_44;
      v19 = n;
    }
    v21 = (gameswf::ASValue::Self *)((char *)a1 + 12 * v19);
    goto LABEL_44;
  }
}


