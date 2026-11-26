#include "Core/Utils/DecompTypes.h"
#include "gameswf_hash_int_gameswf.h"

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_inst_info_av_de57da::Destroy  (binary VA: 0x108cd60)
// Original: gameswf::hash<int,gameswf::inst_info_avm2,gameswf::fixed_size_hash<int>>::~hash
// ----------------------------------------------------------------------------
void gameswf::hash_int_gameswf_inst_info_av_de57da::Destroy(gameswf::Self **self)
{
  gameswf::Self *v1;
  int i;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  gameswf::Self *v9;
  int v10;

  v1 = *self;
  if ( *self != nullptr )
  {
    v10 = *((uint32_t *)v1 + 1);
    if ( v10 >= 0 )
    {
      for ( i = 0; i <= v10; ++i )
      {
        v3 = (uint32_t *)((char *)v1 + 32 * i + 8);
        if ( *v3 != -2 )
        {
          v4 = *((uint32_t *)v1 + 8 * i + 7);
          v5 = (uint32_t *)((char *)v1 + 32 * i + 24);
          if ( v4 < 0 )
          {
            v6 = 4 * v4;
            do
            {
              v7 = (uint32_t *)(*v5 + v6);
              if ( v7 != nullptr )
                *v7 = 0;
              v6 += 4;
              ++v4;
            }
            while ( v4 != 0 );
          }
          v8 = v3[7];
          v3[5] = 0;
          if ( v8 == 0 )
          {
            v9 = (gameswf::Self *)v3[4];
            v3[6] = 0;
            if ( v9 != nullptr )
              gameswf::free_internal(v9);
            v3[4] = 0;
          }
          *v3 = -2;
          v3[1] = 0;
          v1 = *self;
        }
      }
    }
    gameswf::free_internal(v1);
    *self = nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_inst_info_av_de57da::set_raw_capacity  (binary VA: 0x108cf40)
// Original: gameswf::hash<int,gameswf::inst_info_avm2,gameswf::fixed_size_hash<int>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::hash_int_gameswf_inst_info_av_de57da::set_raw_capacity(gameswf::Self **self, int a2)
{
  int v2;
  int v3;
  gameswf::Self *result;
  uint32_t *v5;
  int v6;
  int v7;
  gameswf::hash<int, gameswf::inst_info_avm2::Self, gameswf::fixed_size_hash<int>> *v8;
  gameswf::Self *v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  gameswf::Self *v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  gameswf::Self *v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v26)) > _g4_s0 ? (8u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v27)) > _g4_s1 ? (8u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v28)) > _g4_s2 ? (12u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v29)) > _g4_s3 ? (12u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v30)) > _g4_s4 ? (16u + sizeof(_g4_t_v30)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
  {
    result = *self;
    if ( *self != nullptr )
    {
      v27 = *((uint32_t *)result + 1);
      if ( v27 >= 0 )
      {
        v29 = 0;
        v18 = 0;
        do
        {
          v19 = 32 * v18;
          v20 = (uint32_t *)((char *)result + v19 + 8);
          if ( *v20 != -2 )
          {
            v21 = *(uint32_t *)((char *)result + v19 + 28);
            if ( v21 < 0 )
            {
              v22 = 4 * v21;
              do
              {
                v23 = (uint32_t *)(v20[4] + v22);
                if ( v23 != nullptr )
                  *v23 = 0;
                v22 += 4;
                ++v21;
              }
              while ( v21 != 0 );
            }
            v24 = v20[7];
            v20[5] = 0;
            if ( v24 == 0 )
            {
              v25 = (gameswf::Self *)v20[4];
              v20[6] = 0;
              if ( v25 != nullptr )
                gameswf::free_internal(v25);
              v20[4] = 0;
            }
            *v20 = -2;
            v20[1] = 0;
            result = *self;
          }
          v18 = ++v29;
        }
        while ( v27 >= v29 );
      }
      result = (gameswf::Self *)gameswf::free_internal(result);
      *self = nullptr;
    }
  }
  else
  {
    v2 = 1;
    v3 = 4;
    if ( a2 != 1 )
    {
      do
        v2 *= 2;
      while ( a2 > v2 );
      v3 = 4;
      if ( v2 >= 4 )
        v3 = v2;
    }
    if ( *self == nullptr || (result = (gameswf::Self *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::Self *)v3 )
    {
      v30 = (uint32_t *)gameswf::malloc_internal(32 * v3 + 8);
      *v30 = 0;
      v5 = v30;
      v6 = 2;
      v30[1] = v3 - 1;
      v7 = 0;
      while ( 1 )
      {
        ++v7;
        v5[v6] = -2;
        v6 += 8;
        if ( v3 <= v7 )
          break;
        v5 = v30;
      }
      v8 = (gameswf::hash<int, gameswf::inst_info_avm2::Self, gameswf::fixed_size_hash<int>> *)self;
      v9 = *self;
      if ( *self != nullptr )
      {
        v26 = *((uint32_t *)v9 + 1);
        if ( v26 >= 0 )
        {
          v28 = 0;
          v10 = 0;
          do
          {
            v11 = 32 * v10;
            v12 = (uint32_t *)((char *)v9 + v11 + 8);
            if ( *v12 != -2 )
            {
              gameswf::hash_int_gameswf_inst_info_av_de57da::add(
                (gameswf::hash<int, gameswf::inst_info_avm2::Self, gameswf::fixed_size_hash<int>> *)&v30,
                (const int *)((char *)v9 + v11 + 16),
                (gameswf::Self *)((char *)v9 + v11 + 20));
              v13 = v12[5];
              if ( v13 < 0 )
              {
                v14 = 4 * v13;
                do
                {
                  v15 = (uint32_t *)(v12[4] + v14);
                  if ( v15 != nullptr )
                    *v15 = 0;
                  v14 += 4;
                  ++v13;
                }
                while ( v13 != 0 );
              }
              v16 = v12[7];
              v12[5] = 0;
              if ( v16 == 0 )
              {
                v17 = (gameswf::Self *)v12[4];
                v12[6] = 0;
                if ( v17 != nullptr )
                  gameswf::free_internal(v17);
                v12[4] = 0;
              }
              *v12 = -2;
              v12[1] = 0;
              v9 = *self;
            }
            v10 = ++v28;
          }
          while ( v26 >= v28 );
        }
        gameswf::free_internal(v9);
        v8 = (gameswf::hash<int, gameswf::inst_info_avm2::Self, gameswf::fixed_size_hash<int>> *)self;
      }
      result = (gameswf::Self *)v30;
      *(uint32_t *)v8 = (uint32_t)(uintptr_t)(v30);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_inst_info_av_de57da::add  (binary VA: 0x108d1e0)
// Original: gameswf::hash<int,gameswf::inst_info_avm2,gameswf::fixed_size_hash<int>>::add
// ----------------------------------------------------------------------------
int gameswf::hash_int_gameswf_inst_info_av_de57da::add(gameswf::Self **self, const int *a2, const gameswf::inst_info_avm2::Self *a3)
{
  gameswf::Self *v3;
  int v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  int v8;
  int *v9;
  int v10;
  uint32_t *v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;
  int v19;
  uint32_t *v20;
  int result;
  int v22;
  gameswf::Self *v23;
  int v24;
  int v25;
  gameswf::Self **v26;
  gameswf::Self *v27;
  uint32_t *v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  gameswf::Self *v33;
  int v34;
  int v35;
  int v36;
  uint32_t *v37;
  int v38;
  int v39;
  gameswf::Self *v40;
  int v41;
  uint32_t *v42;
  uint32_t *v43;
  int v44;
  int v45;
  uint32_t *v46;
  uint32_t *v47;
  int v48;
  uint32_t *v49;
  int v50;
  uint32_t *v51;
  int v52;
  gameswf::Self *v53;
  int v54;
  int v55;
  int v56;
  uint32_t *v57;
  int v58;
  gameswf::Self *v59;
  void *v60;
  int v61;
  int v62;
  int v63;
  uint32_t *v64;
  int v65;
  void *v66;
  typedef uint32_t *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int *_g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint32_t *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_i;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef uint32_t *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int *_g4_t_v89;
  typedef int _g4_t_j;
  typedef gameswf::Self *_g4_t_v91;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v67)) > _g4_s0 ? (12u + sizeof(_g4_t_v67)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v68)) > _g4_s1 ? (12u + sizeof(_g4_t_v68)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v69)) > _g4_s2 ? (12u + sizeof(_g4_t_v69)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v70)) > _g4_s3 ? (12u + sizeof(_g4_t_v70)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v71)) > _g4_s4 ? (12u + sizeof(_g4_t_v71)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v72)) > _g4_s5 ? (20u + sizeof(_g4_t_v72)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v73)) > _g4_s6 ? (20u + sizeof(_g4_t_v73)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v74)) > _g4_s7 ? (20u + sizeof(_g4_t_v74)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v75)) > _g4_s8 ? (24u + sizeof(_g4_t_v75)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v76)) > _g4_s9 ? (24u + sizeof(_g4_t_v76)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v77)) > _g4_s10 ? (24u + sizeof(_g4_t_v77)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v78)) > _g4_s11 ? (32u + sizeof(_g4_t_v78)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v79)) > _g4_s12 ? (32u + sizeof(_g4_t_v79)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_i)) > _g4_s13 ? (32u + sizeof(_g4_t_i)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v81)) > _g4_s14 ? (36u + sizeof(_g4_t_v81)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v82)) > _g4_s15 ? (36u + sizeof(_g4_t_v82)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v83)) > _g4_s16 ? (36u + sizeof(_g4_t_v83)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v84)) > _g4_s17 ? (40u + sizeof(_g4_t_v84)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v85)) > _g4_s18 ? (40u + sizeof(_g4_t_v85)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v86)) > _g4_s19 ? (40u + sizeof(_g4_t_v86)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v87)) > _g4_s20 ? (40u + sizeof(_g4_t_v87)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v88)) > _g4_s21 ? (44u + sizeof(_g4_t_v88)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v89)) > _g4_s22 ? (44u + sizeof(_g4_t_v89)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_j)) > _g4_s23 ? (44u + sizeof(_g4_t_j)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v91)) > _g4_s24 ? (48u + sizeof(_g4_t_v91)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 12u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 12u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 12u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 12u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 12u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 20u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 20u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 20u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 24u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 24u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 24u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 32u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 32u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 32u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 36u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 36u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 36u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 40u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 40u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 40u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 44u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 44u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 44u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 48u);

  v3 = *self;
  if ( *self != nullptr )
  {
    v4 = *(uint32_t *)v3;
    v88 = *((uint32_t *)v3 + 1);
    v5 = 2 * (v88 + 1);
    if ( 3 * *(uint32_t *)v3 > v5 )
    {
      if ( v5 <= 0 )
      {
        if ( v88 >= 0 )
        {
          for ( i = 0; i <= v88; ++i )
          {
            v47 = (uint32_t *)((char *)v3 + 32 * i + 8);
            if ( *v47 != -2 )
            {
              v48 = *((uint32_t *)v3 + 8 * i + 7);
              v49 = (uint32_t *)((char *)v3 + 32 * i + 24);
              if ( v48 < 0 )
              {
                v50 = 4 * v48;
                do
                {
                  v51 = (uint32_t *)(*v49 + v50);
                  if ( v51 != nullptr )
                    *v51 = 0;
                  v50 += 4;
                  ++v48;
                }
                while ( v48 != 0 );
              }
              v52 = v47[7];
              v47[5] = 0;
              if ( v52 == 0 )
              {
                v53 = (gameswf::Self *)v47[4];
                v47[6] = 0;
                if ( v53 != nullptr )
                  gameswf::free_internal(v53);
                v47[4] = 0;
              }
              *v47 = -2;
              v47[1] = 0;
              v3 = *self;
            }
          }
        }
        gameswf::free_internal(v3);
        v3 = nullptr;
        *self = nullptr;
        v4 = 1179403647;
      }
      else
      {
        v22 = 1;
        if ( v5 == 1 )
        {
          LOWORD(v22) = 4;
        }
        else
        {
          do
            v22 *= 2;
          while ( v5 > v22 );
          if ( v22 <= 3 )
            v22 = 4;
        }
        if ( v88 + 1 != v22 )
        {
          v91 = (gameswf::Self *)gameswf::malloc_internal(32 * v22 + 8);
          *(uint32_t *)v91 = 0;
          v23 = v91;
          v24 = 8;
          *((uint32_t *)v91 + 1) = v22 - 1;
          v25 = 0;
          while ( 1 )
          {
            ++v25;
            *(uint32_t *)((char *)v23 + v24) = -2;
            v24 += 32;
            if ( v22 <= v25 )
              break;
            v23 = v91;
          }
          v26 = self;
          v27 = *self;
          if ( *self != nullptr )
          {
            v79 = *((uint32_t *)v27 + 1);
            if ( v79 >= 0 )
            {
              for ( j = 0; j <= v79; ++j )
              {
                v28 = (uint32_t *)((char *)v27 + 32 * j + 8);
                if ( *v28 != -2 )
                {
                  gameswf::hash_int_gameswf_inst_info_av_de57da::add(
                    (gameswf::hash<int, gameswf::inst_info_avm2::Self, gameswf::fixed_size_hash<int>> *)&v91,
                    (const int *)v27 + 8 * j + 4,
                    (gameswf::Self *)((char *)v27 + 32 * j + 20));
                  v29 = v28[5];
                  if ( v29 < 0 )
                  {
                    v30 = 4 * v29;
                    do
                    {
                      v31 = (uint32_t *)(v28[4] + v30);
                      if ( v31 != nullptr )
                        *v31 = 0;
                      v30 += 4;
                      ++v29;
                    }
                    while ( v29 != 0 );
                  }
                  v32 = v28[7];
                  v28[5] = 0;
                  if ( v32 == 0 )
                  {
                    v33 = (gameswf::Self *)v28[4];
                    v28[6] = 0;
                    if ( v33 != nullptr )
                      gameswf::free_internal(v33);
                    v28[4] = 0;
                  }
                  *v28 = -2;
                  v28[1] = 0;
                  v27 = *self;
                }
              }
            }
            gameswf::free_internal(v27);
            v26 = self;
          }
          v3 = v91;
          v91 = nullptr;
          *v26 = v3;
          v4 = *(uint32_t *)v3;
        }
      }
    }
  }
  else
  {
    gameswf::hash_int_gameswf_inst_info_av_de57da::set_raw_capacity(self, 8);
    v3 = *self;
    v4 = *(uint32_t *)*self;
  }
  *(uint32_t *)v3 = v4 + 1;
  v6 = ((*((uint8_t *)a2 + 3) + 352988219) << 16)
     + 63 * (*((uint8_t *)a2 + 3) + 352988219)
     + *((uint8_t *)a2 + 2);
  v78 = 65599 * (*((uint8_t *)a2 + 1) + 63 * v6 + (v6 << 16)) + *(uint8_t *)a2;
  v7 = *self;
  v81 = *((uint32_t *)*self + 1);
  v8 = v81 & v78;
  v9 = (int *)((char *)*self + 32 * (v81 & v78) + 8);
  v89 = v9;
  v84 = *v9;
  if ( *v9 == -2 )
  {
    *v9 = -1;
    v9[1] = v78;
    v9[2] = *a2;
    result = *(uint32_t *)a3;
    v9[3] = *(uint32_t *)a3;
    v9[4] = 0;
    v9[5] = 0;
    v9[6] = 0;
    v9[7] = 0;
    v41 = *((uint32_t *)a3 + 2);
    v42 = (uint32_t *)(v9 + 4);
    if ( v41 > 0 )
    {
      v54 = v41 + (v41 >> 1);
      v9[6] = v54;
      v68 = v41;
      v55 = gameswf::malloc_internal(4 * v54);
      v89[4] = v55;
      v56 = 0;
      while ( 1 )
      {
        v57 = (uint32_t *)(v55 + 4 * v56);
        if ( v57 != nullptr )
          *v57 = 0;
        if ( ++v56 == v68 )
          break;
        v55 = v89[4];
      }
      result = 0;
      v89[5] = v56;
      do
      {
        *(uint32_t *)(*v42 + 4 * result) = *(uint32_t *)(*((uint32_t *)a3 + 1) + 4 * result);
        ++result;
      }
      while ( result < v42[1] );
    }
    else
    {
      v9[5] = v41;
    }
  }
  else
  {
    v10 = v81 & v78;
    do
    {
      v8 = v81 & (v8 + 1);
      v11 = (uint32_t *)((char *)v7 + 32 * v8 + 8);
    }
    while ( *v11 != -2 && v8 != v10 );
    v12 = v89[1] & v81;
    if ( v12 == v10 )
    {
      *v11 = v84;
      v43 = (uint32_t *)(v89 + 4);
      v11[1] = v89[1];
      v11[2] = v89[2];
      v73 = v11 + 4;
      v11[3] = v89[3];
      v11[4] = 0;
      v11[5] = 0;
      v11[6] = 0;
      v11[7] = 0;
      v44 = v89[5];
      v87 = v44;
      if ( v44 > 0 )
      {
        v61 = v44 + (v44 >> 1);
        v11[6] = v61;
        v70 = v11;
        v62 = gameswf::malloc_internal(4 * v61);
        v63 = 0;
        for ( v70[4] = v62; ; v62 = v70[4] )
        {
          v64 = (uint32_t *)(v62 + 4 * v63);
          if ( v64 != nullptr )
            *v64 = 0;
          if ( ++v63 == v87 )
            break;
        }
        v70[5] = v63;
        v65 = 0;
        do
        {
          *(uint32_t *)(*v73 + 4 * v65) = *(uint32_t *)(*v43 + 4 * v65);
          ++v65;
        }
        while ( v65 < v73[1] );
      }
      else
      {
        v11[5] = v44;
      }
      v89[2] = *a2;
      v89[3] = *(uint32_t *)a3;
      v83 = *((uint32_t *)a3 + 2);
      v45 = v89[5];
      if ( v83 != 0 )
      {
        v74 = v89[6];
        if ( v83 > v74 && v89[7] == 0 )
        {
          v58 = v83 + (v83 >> 1);
          v89[6] = v58;
          if ( v58 != 0 )
          {
            v71 = v45;
            if ( v89[4] != 0 )
              v66 = gameswf::realloc_internal((gameswf::Self *)v89[4], 4 * v58, 4 * v74);
            else
              v66 = (void *)gameswf::malloc_internal(4 * v58);
            v89[4] = (int)(uintptr_t)(v66);
            v45 = v71;
          }
          else
          {
            v59 = (gameswf::Self *)v89[4];
            if ( v59 != nullptr )
            {
              v69 = v45;
              gameswf::free_internal(v59);
              v45 = v69;
            }
            v89[4] = 0;
          }
        }
      }
      result = 4 * v45;
      if ( v83 > v45 )
      {
        do
        {
          v46 = (uint32_t *)(result + *v43);
          if ( v46 != nullptr )
            *v46 = 0;
          ++v45;
          result += 4;
        }
        while ( v45 != v83 );
      }
      v89[5] = v83;
      if ( v83 > 0 )
      {
        result = 0;
        do
        {
          *(uint32_t *)(*v43 + 4 * result) = *(uint32_t *)(*((uint32_t *)a3 + 1) + 4 * result);
          ++result;
        }
        while ( result < v89[5] );
      }
      *v89 = v8;
      v89[1] = v78;
    }
    else
    {
      v75 = v8;
      do
      {
        v13 = (int *)((char *)v7 + 32 * v12 + 8);
        v12 = *v13;
      }
      while ( *v13 != v10 );
      *v11 = v84;
      v72 = v13;
      v14 = v75;
      v76 = v11 + 4;
      v11[1] = v89[1];
      v11[2] = v89[2];
      v11[3] = v89[3];
      v11[4] = 0;
      v11[5] = 0;
      v11[6] = 0;
      v11[7] = 0;
      v15 = v89[5];
      v16 = (uint32_t *)(v89 + 4);
      v85 = v15;
      if ( v15 > 0 )
      {
        v34 = v15 + (v15 >> 1);
        v11[6] = v34;
        v67 = v11;
        v35 = gameswf::malloc_internal(4 * v34);
        v36 = 0;
        for ( v67[4] = v35; ; v35 = v67[4] )
        {
          v37 = (uint32_t *)(v35 + 4 * v36);
          if ( v37 != nullptr )
            *v37 = 0;
          if ( ++v36 == v85 )
            break;
        }
        v67[5] = v36;
        v38 = 0;
        do
        {
          *(uint32_t *)(*v76 + 4 * v38) = *(uint32_t *)(*v16 + 4 * v38);
          ++v38;
        }
        while ( v38 < v76[1] );
      }
      else
      {
        v11[5] = v15;
      }
      *v72 = v14;
      v89[2] = *a2;
      v89[3] = *(uint32_t *)a3;
      v17 = (uint32_t *)((char *)a3 + 4);
      v82 = *((uint32_t *)a3 + 2);
      v18 = v89[5];
      if ( v82 != 0 )
      {
        v77 = v89[6];
        if ( v82 > v77 && v89[7] == 0 )
        {
          v39 = v82 + (v82 >> 1);
          v89[6] = v39;
          if ( v39 != 0 )
          {
            if ( v89[4] != 0 )
              v60 = gameswf::realloc_internal((gameswf::Self *)v89[4], 4 * v39, 4 * v77);
            else
              v60 = (void *)gameswf::malloc_internal(4 * v39);
            v89[4] = (int)(uintptr_t)(v60);
            v17 = (uint32_t *)((char *)a3 + 4);
          }
          else
          {
            v40 = (gameswf::Self *)v89[4];
            if ( v40 != nullptr )
            {
              gameswf::free_internal(v40);
              v17 = (uint32_t *)((char *)a3 + 4);
            }
            v89[4] = 0;
          }
        }
      }
      v19 = 4 * v18;
      if ( v82 > v18 )
      {
        v86 = v17;
        do
        {
          v20 = (uint32_t *)(v19 + *v16);
          if ( v20 != nullptr )
            *v20 = 0;
          ++v18;
          v19 += 4;
        }
        while ( v18 != v82 );
        v17 = v86;
      }
      result = v82;
      v89[5] = v82;
      if ( v82 > 0 )
      {
        result = 0;
        do
        {
          *(uint32_t *)(*v16 + 4 * result) = *(uint32_t *)(*v17 + 4 * result);
          ++result;
        }
        while ( result < v89[5] );
      }
      v89[1] = v78;
      *v89 = -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_CxForm_games_02d26a::clear  (binary VA: 0x10a4e80)
// Original: gameswf::hash<int,gameswf::CxForm *,gameswf::fixed_size_hash<int>>::clear
// ----------------------------------------------------------------------------
void gameswf::hash_int_gameswf_CxForm_games_02d26a::clear(gameswf::Self **self)
{
  gameswf::Self *v1;
  int v2;
  int v3;
  int i;
  uint32_t *v5;

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
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_Matrix_games_7fc502::clear  (binary VA: 0x10a4f00)
// Original: gameswf::hash<int,gameswf::Matrix *,gameswf::fixed_size_hash<int>>::clear
// ----------------------------------------------------------------------------
void gameswf::hash_int_gameswf_Matrix_games_7fc502::clear(gameswf::Self **self)
{
  gameswf::Self *v1;
  int v2;
  int v3;
  int i;
  uint32_t *v5;

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
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_Matrix_games_7fc502::find_index  (binary VA: 0x10a4f80)
// Original: gameswf::hash<int,gameswf::Matrix *,gameswf::fixed_size_hash<int>>::find_index
// ----------------------------------------------------------------------------
int gameswf::hash_int_gameswf_Matrix_games_7fc502::find_index(gameswf::hash<int, gameswf::Matrix::Self *, gameswf::fixed_size_hash<int>> *self, const int *a2)
{
  int v2;
  int v3;
  int result;
  int *v5;
  int i;
  int v7;

  v2 = *(uint32_t *)self;
  if ( *(uint32_t *)self == 0 )
    return -1;
  v3 = 65599
     * (((*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)) << 6)
      + *((uint8_t *)a2 + 1)
      + 0xFFFF * (*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)))
     + *(uint8_t *)a2;
  v7 = *(uint32_t *)(v2 + 4);
  result = v3 & v7;
  v5 = (int *)(v2 + 16 * (v3 & v7) + 8);
  if ( *v5 == -2 || (*(uint32_t *)(v2 + 16 * (v3 & v7) + 12) & v7) != result )
    return -1;
  for ( i = *(uint32_t *)(v2 + 16 * (v3 & v7) + 12); v3 != i || v5[2] != *a2; i = *(uint32_t *)(v2 + 16 * result + 12) )
  {
    result = *v5;
    if ( *v5 == -1 )
      break;
    v5 = (int *)(v2 + 16 * result + 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_CxForm_games_02d26a::find_index  (binary VA: 0x10a5040)
// Original: gameswf::hash<int,gameswf::CxForm *,gameswf::fixed_size_hash<int>>::find_index
// ----------------------------------------------------------------------------
int gameswf::hash_int_gameswf_CxForm_games_02d26a::find_index(gameswf::hash<int, gameswf::CxForm::Self *, gameswf::fixed_size_hash<int>> *self, const int *a2)
{
  int v2;
  int v3;
  int result;
  int *v5;
  int i;
  int v7;

  v2 = *(uint32_t *)self;
  if ( *(uint32_t *)self == 0 )
    return -1;
  v3 = 65599
     * (((*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)) << 6)
      + *((uint8_t *)a2 + 1)
      + 0xFFFF * (*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)))
     + *(uint8_t *)a2;
  v7 = *(uint32_t *)(v2 + 4);
  result = v3 & v7;
  v5 = (int *)(v2 + 16 * (v3 & v7) + 8);
  if ( *v5 == -2 || (*(uint32_t *)(v2 + 16 * (v3 & v7) + 12) & v7) != result )
    return -1;
  for ( i = *(uint32_t *)(v2 + 16 * (v3 & v7) + 12); v3 != i || v5[2] != *a2; i = *(uint32_t *)(v2 + 16 * result + 12) )
  {
    result = *v5;
    if ( *v5 == -1 )
      break;
    v5 = (int *)(v2 + 16 * result + 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_Matrix_games_7fc502::set_raw_capacity  (binary VA: 0x10a5c80)
// Original: gameswf::hash<int,gameswf::Matrix *,gameswf::fixed_size_hash<int>>::set_raw_capacity
// ----------------------------------------------------------------------------
void gameswf::hash_int_gameswf_Matrix_games_7fc502::set_raw_capacity(gameswf::Self **self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int _g4_t_i;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_i)) > _g4_s4 ? (20u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v24)) > _g4_s7 ? (32u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);

  if ( a2 <= 0 )
  {
    gameswf::hash_int_gameswf_Matrix_games_7fc502::clear(self);
  }
  else
  {
    v2 = 1;
    v3 = 4;
    if ( a2 != 1 )
    {
      do
        v2 *= 2;
      while ( a2 > v2 );
      v3 = 4;
      if ( v2 >= 4 )
        v3 = v2;
    }
    if ( *self == nullptr || *((uint32_t *)*self + 1) + 1 != v3 )
    {
      v24[0] = gameswf::malloc_internal(16 * v3 + 8);
      *(uint32_t *)v24[0] = 0;
      v4 = v24[0];
      v5 = 8;
      *(uint32_t *)(v24[0] + 4) = v3 - 1;
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        *(uint32_t *)(v4 + v5) = -2;
        v5 += 16;
        if ( v3 <= v6 )
          break;
        v4 = v24[0];
      }
      v7 = *self;
      if ( *self != nullptr )
      {
        v17 = *((uint32_t *)v7 + 1);
        if ( v17 >= 0 )
        {
          for ( i = 0; i <= v17; ++i )
          {
            v8 = (int)(uintptr_t)(v7) + 16 * i + 8;
            if ( *(uint32_t *)v8 != -2 )
            {
              v9 = (uint32_t *)v24[0];
              if ( v24[0] != 0 )
              {
                v10 = *(uint32_t *)v24[0];
                if ( 3 * *(uint32_t *)v24[0] > 2 * *(uint32_t *)(v24[0] + 4) + 2 )
                {
                  gameswf::hash_int_gameswf_Matrix_games_7fc502::set_raw_capacity(
                    (gameswf::Self **)((gameswf::hash<int, gameswf::Matrix::Self *, gameswf::fixed_size_hash<int>> *)v24),
                    2 * *(uint32_t *)(v24[0] + 4) + 2);
                  v9 = (uint32_t *)v24[0];
                  v10 = *(uint32_t *)v24[0];
                }
              }
              else
              {
                gameswf::hash_int_gameswf_Matrix_games_7fc502::set_raw_capacity(
                  (gameswf::Self **)((gameswf::hash<int, gameswf::Matrix::Self *, gameswf::fixed_size_hash<int>> *)v24),
                  8);
                v9 = (uint32_t *)v24[0];
                v10 = *(uint32_t *)v24[0];
              }
              *v9 = v10 + 1;
              v19 = ((((((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                      + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                      + *(uint8_t *)(v8 + 10)) << 6)
                    + 0xFFFF
                    * (((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                     + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                     + *(uint8_t *)(v8 + 10))
                    + *(uint8_t *)(v8 + 9)) << 6)
                  + *(uint8_t *)(v8 + 8)
                  + 0xFFFF
                  * (((((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                     + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                     + *(uint8_t *)(v8 + 10)) << 6)
                   + 0xFFFF
                   * (((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                    + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                    + *(uint8_t *)(v8 + 10))
                   + *(uint8_t *)(v8 + 9));
              v11 = *(uint32_t *)(v24[0] + 4);
              v23 = v11 & v19;
              v22 = (int *)(v24[0] + 16 * (v11 & v19) + 8);
              v18 = *v22;
              v12 = v11 & v19;
              if ( *v22 == -2 )
              {
                *v22 = -1;
                v22[1] = v19;
                v22[2] = *(uint32_t *)(v8 + 8);
                v22[3] = *(uint32_t *)(v8 + 12);
              }
              else
              {
                while ( 1 )
                {
                  v12 = v11 & (v12 + 1);
                  if ( *(uint32_t *)(v24[0] + 16 * v12 + 8) == -2 )
                    break;
                  if ( v23 == v12 )
                  {
                    v20 = (int *)(v24[0] + 16 * v12 + 8);
                    v12 = v11 & v19;
                    goto LABEL_22;
                  }
                }
                v20 = (int *)(v24[0] + 16 * v12 + 8);
LABEL_22:
                v13 = *(uint32_t *)(v24[0] + 16 * (v11 & v19) + 12) & v11;
                if ( v23 == v13 )
                {
                  *v20 = v18;
                  v20[1] = v22[1];
                  v20[2] = v22[2];
                  v20[3] = v22[3];
                  v22[2] = *(uint32_t *)(v8 + 8);
                  v16 = *(uint32_t *)(v8 + 12);
                  *v22 = v12;
                  v22[3] = v16;
                  v22[1] = v19;
                }
                else
                {
                  v14 = v13;
                  do
                  {
                    v15 = (int *)(v24[0] + 16 * v14 + 8);
                    v14 = *v15;
                  }
                  while ( v23 != *v15 );
                  *v20 = v18;
                  v20[1] = v22[1];
                  v20[2] = v22[2];
                  v20[3] = v22[3];
                  *v15 = v12;
                  v22[2] = *(uint32_t *)(v8 + 8);
                  v22[3] = *(uint32_t *)(v8 + 12);
                  v22[1] = v19;
                  *v22 = -1;
                }
              }
              *(uint32_t *)v8 = -2;
              *(uint32_t *)(v8 + 4) = 0;
              v7 = *self;
            }
          }
        }
        gameswf::free_internal(v7);
      }
      *self = (gameswf::Self *)v24[0];
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_Matrix_games_7fc502::add  (binary VA: 0x10a5ff0)
// Original: gameswf::hash<int,gameswf::Matrix *,gameswf::fixed_size_hash<int>>::add
// ----------------------------------------------------------------------------
gameswf::Matrix::Self * gameswf::hash_int_gameswf_Matrix_games_7fc502::add(gameswf::Self **self, const int *a2, gameswf::Matrix::Self **a3)
{
  gameswf::Self *v3;
  int v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int *v11;
  gameswf::Matrix::Self *v12;
  gameswf::Matrix::Self *result;
  gameswf::Matrix::Self *v14;
  int v15;
  int v16;
  int v17;

  v3 = *self;
  if ( *self != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_int_gameswf_Matrix_games_7fc502::set_raw_capacity(
        self,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *self;
      v4 = *(uint32_t *)*self;
    }
  }
  else
  {
    gameswf::hash_int_gameswf_Matrix_games_7fc502::set_raw_capacity(self, 8);
    v3 = *self;
    v4 = *(uint32_t *)*self;
  }
  *(uint32_t *)v3 = v4 + 1;
  v5 = *self;
  v16 = 65599
      * (((*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)) << 6)
       + *((uint8_t *)a2 + 1)
       + 0xFFFF * (*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)))
      + *(uint8_t *)a2;
  v6 = *((uint32_t *)*self + 1);
  v15 = v6 & v16;
  v7 = (int)(uintptr_t)(*self) + 16 * (v6 & v16) + 8;
  v8 = v6 & v16;
  v17 = *(uint32_t *)v7;
  if ( *(uint32_t *)v7 == -2 )
  {
    *(uint32_t *)v7 = -1;
    *(uint32_t *)(v7 + 4) = v16;
    *(uint32_t *)(v7 + 8) = *a2;
    result = *a3;
    *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(*a3);
  }
  else
  {
    do
    {
      v8 = v6 & (v8 + 1);
      v9 = (uint32_t *)((char *)v5 + 16 * v8 + 8);
    }
    while ( *v9 != -2 && v8 != (v6 & v16) );
    v10 = *((uint32_t *)v5 + 4 * (v6 & v16) + 3) & v6;
    if ( v10 == v15 )
    {
      *v9 = v17;
      *((uint32_t *)v5 + 4 * v8 + 3) = *(uint32_t *)(v7 + 4);
      *((uint32_t *)v5 + 4 * v8 + 4) = *(uint32_t *)(v7 + 8);
      *((uint32_t *)v5 + 4 * v8 + 5) = *(uint32_t *)(v7 + 12);
      *(uint32_t *)(v7 + 8) = *a2;
      v14 = *a3;
      *(uint32_t *)v7 = v8;
      *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(v14);
      *(uint32_t *)(v7 + 4) = v16;
      return (gameswf::Matrix::Self *)v16;
    }
    else
    {
      do
      {
        v11 = (int *)((char *)v5 + 16 * v10 + 8);
        v10 = *v11;
      }
      while ( *v11 != v15 );
      *v9 = v17;
      *((uint32_t *)v5 + 4 * v8 + 3) = *(uint32_t *)(v7 + 4);
      *((uint32_t *)v5 + 4 * v8 + 4) = *(uint32_t *)(v7 + 8);
      *((uint32_t *)v5 + 4 * v8 + 5) = *(uint32_t *)(v7 + 12);
      *v11 = v8;
      *(uint32_t *)(v7 + 8) = *a2;
      v12 = *a3;
      *(uint32_t *)v7 = -1;
      *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(v12);
      *(uint32_t *)(v7 + 4) = v16;
      return (gameswf::Matrix::Self *)v16;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_CxForm_games_02d26a::set_raw_capacity  (binary VA: 0x10a61d0)
// Original: gameswf::hash<int,gameswf::CxForm *,gameswf::fixed_size_hash<int>>::set_raw_capacity
// ----------------------------------------------------------------------------
void gameswf::hash_int_gameswf_CxForm_games_02d26a::set_raw_capacity(gameswf::Self **self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int _g4_t_i;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_i)) > _g4_s4 ? (20u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v24)) > _g4_s7 ? (32u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);

  if ( a2 <= 0 )
  {
    gameswf::hash_int_gameswf_CxForm_games_02d26a::clear(self);
  }
  else
  {
    v2 = 1;
    v3 = 4;
    if ( a2 != 1 )
    {
      do
        v2 *= 2;
      while ( a2 > v2 );
      v3 = 4;
      if ( v2 >= 4 )
        v3 = v2;
    }
    if ( *self == nullptr || *((uint32_t *)*self + 1) + 1 != v3 )
    {
      v24[0] = gameswf::malloc_internal(16 * v3 + 8);
      *(uint32_t *)v24[0] = 0;
      v4 = v24[0];
      v5 = 8;
      *(uint32_t *)(v24[0] + 4) = v3 - 1;
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        *(uint32_t *)(v4 + v5) = -2;
        v5 += 16;
        if ( v3 <= v6 )
          break;
        v4 = v24[0];
      }
      v7 = *self;
      if ( *self != nullptr )
      {
        v17 = *((uint32_t *)v7 + 1);
        if ( v17 >= 0 )
        {
          for ( i = 0; i <= v17; ++i )
          {
            v8 = (int)(uintptr_t)(v7) + 16 * i + 8;
            if ( *(uint32_t *)v8 != -2 )
            {
              v9 = (uint32_t *)v24[0];
              if ( v24[0] != 0 )
              {
                v10 = *(uint32_t *)v24[0];
                if ( 3 * *(uint32_t *)v24[0] > 2 * *(uint32_t *)(v24[0] + 4) + 2 )
                {
                  gameswf::hash_int_gameswf_CxForm_games_02d26a::set_raw_capacity(
                    (gameswf::Self **)((gameswf::hash<int, gameswf::CxForm::Self *, gameswf::fixed_size_hash<int>> *)v24),
                    2 * *(uint32_t *)(v24[0] + 4) + 2);
                  v9 = (uint32_t *)v24[0];
                  v10 = *(uint32_t *)v24[0];
                }
              }
              else
              {
                gameswf::hash_int_gameswf_CxForm_games_02d26a::set_raw_capacity(
                  (gameswf::Self **)((gameswf::hash<int, gameswf::CxForm::Self *, gameswf::fixed_size_hash<int>> *)v24),
                  8);
                v9 = (uint32_t *)v24[0];
                v10 = *(uint32_t *)v24[0];
              }
              *v9 = v10 + 1;
              v19 = ((((((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                      + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                      + *(uint8_t *)(v8 + 10)) << 6)
                    + 0xFFFF
                    * (((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                     + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                     + *(uint8_t *)(v8 + 10))
                    + *(uint8_t *)(v8 + 9)) << 6)
                  + *(uint8_t *)(v8 + 8)
                  + 0xFFFF
                  * (((((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                     + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                     + *(uint8_t *)(v8 + 10)) << 6)
                   + 0xFFFF
                   * (((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                    + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                    + *(uint8_t *)(v8 + 10))
                   + *(uint8_t *)(v8 + 9));
              v11 = *(uint32_t *)(v24[0] + 4);
              v23 = v11 & v19;
              v22 = (int *)(v24[0] + 16 * (v11 & v19) + 8);
              v18 = *v22;
              v12 = v11 & v19;
              if ( *v22 == -2 )
              {
                *v22 = -1;
                v22[1] = v19;
                v22[2] = *(uint32_t *)(v8 + 8);
                v22[3] = *(uint32_t *)(v8 + 12);
              }
              else
              {
                while ( 1 )
                {
                  v12 = v11 & (v12 + 1);
                  if ( *(uint32_t *)(v24[0] + 16 * v12 + 8) == -2 )
                    break;
                  if ( v23 == v12 )
                  {
                    v20 = (int *)(v24[0] + 16 * v12 + 8);
                    v12 = v11 & v19;
                    goto LABEL_22;
                  }
                }
                v20 = (int *)(v24[0] + 16 * v12 + 8);
LABEL_22:
                v13 = *(uint32_t *)(v24[0] + 16 * (v11 & v19) + 12) & v11;
                if ( v23 == v13 )
                {
                  *v20 = v18;
                  v20[1] = v22[1];
                  v20[2] = v22[2];
                  v20[3] = v22[3];
                  v22[2] = *(uint32_t *)(v8 + 8);
                  v16 = *(uint32_t *)(v8 + 12);
                  *v22 = v12;
                  v22[3] = v16;
                  v22[1] = v19;
                }
                else
                {
                  v14 = v13;
                  do
                  {
                    v15 = (int *)(v24[0] + 16 * v14 + 8);
                    v14 = *v15;
                  }
                  while ( v23 != *v15 );
                  *v20 = v18;
                  v20[1] = v22[1];
                  v20[2] = v22[2];
                  v20[3] = v22[3];
                  *v15 = v12;
                  v22[2] = *(uint32_t *)(v8 + 8);
                  v22[3] = *(uint32_t *)(v8 + 12);
                  v22[1] = v19;
                  *v22 = -1;
                }
              }
              *(uint32_t *)v8 = -2;
              *(uint32_t *)(v8 + 4) = 0;
              v7 = *self;
            }
          }
        }
        gameswf::free_internal(v7);
      }
      *self = (gameswf::Self *)v24[0];
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_CxForm_games_02d26a::add  (binary VA: 0x10a6540)
// Original: gameswf::hash<int,gameswf::CxForm *,gameswf::fixed_size_hash<int>>::add
// ----------------------------------------------------------------------------
gameswf::CxForm::Self * gameswf::hash_int_gameswf_CxForm_games_02d26a::add(gameswf::Self **self, const int *a2, gameswf::CxForm::Self **a3)
{
  gameswf::Self *v3;
  int v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int *v11;
  gameswf::CxForm::Self *v12;
  gameswf::CxForm::Self *result;
  gameswf::CxForm::Self *v14;
  int v15;
  int v16;
  int v17;

  v3 = *self;
  if ( *self != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_int_gameswf_CxForm_games_02d26a::set_raw_capacity(
        self,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *self;
      v4 = *(uint32_t *)*self;
    }
  }
  else
  {
    gameswf::hash_int_gameswf_CxForm_games_02d26a::set_raw_capacity(self, 8);
    v3 = *self;
    v4 = *(uint32_t *)*self;
  }
  *(uint32_t *)v3 = v4 + 1;
  v5 = *self;
  v16 = 65599
      * (((*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)) << 6)
       + *((uint8_t *)a2 + 1)
       + 0xFFFF * (*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)))
      + *(uint8_t *)a2;
  v6 = *((uint32_t *)*self + 1);
  v15 = v6 & v16;
  v7 = (int)(uintptr_t)(*self) + 16 * (v6 & v16) + 8;
  v8 = v6 & v16;
  v17 = *(uint32_t *)v7;
  if ( *(uint32_t *)v7 == -2 )
  {
    *(uint32_t *)v7 = -1;
    *(uint32_t *)(v7 + 4) = v16;
    *(uint32_t *)(v7 + 8) = *a2;
    result = *a3;
    *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(*a3);
  }
  else
  {
    do
    {
      v8 = v6 & (v8 + 1);
      v9 = (uint32_t *)((char *)v5 + 16 * v8 + 8);
    }
    while ( *v9 != -2 && v8 != (v6 & v16) );
    v10 = *((uint32_t *)v5 + 4 * (v6 & v16) + 3) & v6;
    if ( v10 == v15 )
    {
      *v9 = v17;
      *((uint32_t *)v5 + 4 * v8 + 3) = *(uint32_t *)(v7 + 4);
      *((uint32_t *)v5 + 4 * v8 + 4) = *(uint32_t *)(v7 + 8);
      *((uint32_t *)v5 + 4 * v8 + 5) = *(uint32_t *)(v7 + 12);
      *(uint32_t *)(v7 + 8) = *a2;
      v14 = *a3;
      *(uint32_t *)v7 = v8;
      *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(v14);
      *(uint32_t *)(v7 + 4) = v16;
      return (gameswf::CxForm::Self *)v16;
    }
    else
    {
      do
      {
        v11 = (int *)((char *)v5 + 16 * v10 + 8);
        v10 = *v11;
      }
      while ( *v11 != v15 );
      *v9 = v17;
      *((uint32_t *)v5 + 4 * v8 + 3) = *(uint32_t *)(v7 + 4);
      *((uint32_t *)v5 + 4 * v8 + 4) = *(uint32_t *)(v7 + 8);
      *((uint32_t *)v5 + 4 * v8 + 5) = *(uint32_t *)(v7 + 12);
      *v11 = v8;
      *(uint32_t *)(v7 + 8) = *a2;
      v12 = *a3;
      *(uint32_t *)v7 = -1;
      *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(v12);
      *(uint32_t *)(v7 + 4) = v16;
      return (gameswf::CxForm::Self *)v16;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_761876::clear  (binary VA: 0x10aee10)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::CharacterDef>,gameswf::fixed_size_hash<int>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> * gameswf::hash_int_gameswf_smart_ptr_ga_761876::clear(gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> **self)
{
  gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> *result;
  int v2;
  int i;
  uint32_t *v4;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      for ( i = 0; i <= v2; ++i )
      {
        v4 = (uint32_t *)((char *)result + 16 * i + 8);
        if ( *v4 != -2 )
        {
          if ( *((uint32_t *)result + 4 * i + 5) != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)result + 4 * i + 5));
          *v4 = -2;
          v4[1] = 0;
          result = *self;
        }
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_27591b::clear  (binary VA: 0x10aeea0)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::Font>,gameswf::fixed_size_hash<int>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> * gameswf::hash_int_gameswf_smart_ptr_ga_27591b::clear(gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> **self)
{
  gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> *result;
  int v2;
  int i;
  uint32_t *v4;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      for ( i = 0; i <= v2; ++i )
      {
        v4 = (uint32_t *)((char *)result + 16 * i + 8);
        if ( *v4 != -2 )
        {
          if ( *((uint32_t *)result + 4 * i + 5) != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)result + 4 * i + 5));
          *v4 = -2;
          v4[1] = 0;
          result = *self;
        }
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_d68a93::clear  (binary VA: 0x10aef30)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::BitmapCharacterDef>,gameswf::fixed_size_hash<int>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> * gameswf::hash_int_gameswf_smart_ptr_ga_d68a93::clear(gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> **self)
{
  gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> *result;
  int v2;
  int i;
  uint32_t *v4;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      for ( i = 0; i <= v2; ++i )
      {
        v4 = (uint32_t *)((char *)result + 16 * i + 8);
        if ( *v4 != -2 )
        {
          if ( *((uint32_t *)result + 4 * i + 5) != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)result + 4 * i + 5));
          *v4 = -2;
          v4[1] = 0;
          result = *self;
        }
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_15e0f8::clear  (binary VA: 0x10aefc0)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::SoundSample>,gameswf::fixed_size_hash<int>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> * gameswf::hash_int_gameswf_smart_ptr_ga_15e0f8::clear(gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> **self)
{
  gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> *result;
  int v2;
  int i;
  uint32_t *v4;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      for ( i = 0; i <= v2; ++i )
      {
        v4 = (uint32_t *)((char *)result + 16 * i + 8);
        if ( *v4 != -2 )
        {
          if ( *((uint32_t *)result + 4 * i + 5) != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)result + 4 * i + 5));
          *v4 = -2;
          v4[1] = 0;
          result = *self;
        }
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_String_games_d90fc8::clear  (binary VA: 0x10af270)
// Original: gameswf::hash<int,gameswf::String,gameswf::fixed_size_hash<int>>::clear
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::hash_int_gameswf_String_games_d90fc8::clear(gameswf::hash<int, gameswf::String::Self, gameswf::fixed_size_hash<int>> *self)
{
  gameswf::hash<int, gameswf::String::Self, gameswf::fixed_size_hash<int>> *v1;
  gameswf::Self *result;
  int v3;
  int i;
  uint32_t *v5;
  gameswf::hash<int, gameswf::String::Self, gameswf::fixed_size_hash<int>> *v6;
  gameswf::hash<int, gameswf::String::Self, gameswf::fixed_size_hash<int>> *v7;

  v1 = self;
  result = *(gameswf::Self **)self;
  if ( *(uint32_t *)self != 0 )
  {
    v3 = *((uint32_t *)result + 1);
    if ( v3 >= 0 )
    {
      for ( i = 0; i <= v3; ++i )
      {
        v5 = (uint32_t *)((char *)result + 32 * i + 8);
        if ( *v5 != -2 )
        {
          if ( *((uint8_t *)result + 32 * i + 20) == 0xFF && (*((uint8_t *)result + 32 * i + 39) & 1) != 0 )
          {
            v6 = v1;
            gameswf::free_internal(*((gameswf::Self **)result + 8 * i + 8));
            v1 = v6;
          }
          *v5 = -2;
          v5[1] = 0;
          result = *(gameswf::Self **)v1;
        }
      }
    }
    v7 = v1;
    result = (gameswf::Self *)gameswf::free_internal(result);
    *(uint32_t *)v7 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_String_games_d90fc8::set_raw_capacity  (binary VA: 0x10af500)
// Original: gameswf::hash<int,gameswf::String,gameswf::fixed_size_hash<int>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::hash_int_gameswf_String_games_d90fc8::set_raw_capacity(gameswf::hash<int, gameswf::String::Self, gameswf::fixed_size_hash<int>> *self, int a2)
{
  int v2;
  int v3;
  gameswf::Self *result;
  int v5;
  int v6;
  int v7;
  gameswf::hash<int, gameswf::String::Self, gameswf::fixed_size_hash<int>> *v8;
  gameswf::Self *v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  char v20;
  int v21;
  gameswf::Self *v22;
  char *v23;
  gameswf::Self *v24;
  int v25;
  char v26;
  int v27;
  int v28;
  int v29;
  int v30;
  typedef gameswf::Self **_g4_t_v31;
  typedef int *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef char *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef char *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t _g4_t_v43[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v32)) > _g4_s1 ? (8u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v33)) > _g4_s2 ? (12u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v34)) > _g4_s3 ? (16u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v35)) > _g4_s4 ? (20u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v36)) > _g4_s5 ? (24u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v37)) > _g4_s6 ? (28u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v38)) > _g4_s7 ? (32u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v39)) > _g4_s8 ? (32u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v40)) > _g4_s9 ? (36u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v41)) > _g4_s10 ? (40u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v42)) > _g4_s11 ? (44u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v43)) > _g4_s12 ? (48u + sizeof(_g4_t_v43)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);

  if ( a2 <= 0 )
    return gameswf::hash_int_gameswf_String_games_d90fc8::clear(self);
  v2 = 1;
  v3 = 4;
  if ( a2 != 1 )
  {
    do
      v2 *= 2;
    while ( a2 > v2 );
    v3 = 4;
    if ( v2 >= 4 )
      v3 = v2;
  }
  if ( *(uint32_t *)self == 0 || (result = (gameswf::Self *)(*(uint32_t *)(*(uint32_t *)self + 4) + 1)) != (gameswf::Self *)v3 )
  {
    v43[0] = gameswf::malloc_internal(32 * v3 + 8);
    *(uint32_t *)v43[0] = 0;
    v5 = v43[0];
    v6 = 8;
    *(uint32_t *)(v43[0] + 4) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)(v5 + v6) = -2;
      v6 += 32;
      if ( v3 <= v7 )
        break;
      v5 = v43[0];
    }
    v8 = self;
    v9 = *(gameswf::Self **)self;
    if ( *(uint32_t *)self != 0 )
    {
      v35 = *((uint32_t *)v9 + 1);
      if ( v35 < 0 )
        goto LABEL_38;
      v40 = 0;
      v10 = 0;
      while ( 1 )
      {
        v11 = (int)(uintptr_t)(v9) + 32 * v10 + 8;
        if ( *(uint32_t *)v11 == -2 )
          goto LABEL_37;
        v12 = (uint32_t *)v43[0];
        v34 = (char *)(v11 + 12);
        if ( v43[0] != 0 )
        {
          v13 = *(uint32_t *)v43[0];
          if ( 3 * *(uint32_t *)v43[0] > 2 * *(uint32_t *)(v43[0] + 4) + 2 )
          {
            gameswf::hash_int_gameswf_String_games_d90fc8::set_raw_capacity(
              (gameswf::hash<int, gameswf::String::Self, gameswf::fixed_size_hash<int>> *)v43,
              2 * *(uint32_t *)(v43[0] + 4) + 2);
            v12 = (uint32_t *)v43[0];
            v13 = *(uint32_t *)v43[0];
          }
        }
        else
        {
          gameswf::hash_int_gameswf_String_games_d90fc8::set_raw_capacity(
            (gameswf::hash<int, gameswf::String::Self, gameswf::fixed_size_hash<int>> *)v43,
            8);
          v12 = (uint32_t *)v43[0];
          v13 = *(uint32_t *)v43[0];
        }
        *v12 = v13 + 1;
        v36 = ((((((*(uint8_t *)(v11 + 11) + 352988219) << 6)
                + 0xFFFF * (*(uint8_t *)(v11 + 11) + 352988219)
                + *(uint8_t *)(v11 + 10)) << 6)
              + 0xFFFF
              * (((*(uint8_t *)(v11 + 11) + 352988219) << 6)
               + 0xFFFF * (*(uint8_t *)(v11 + 11) + 352988219)
               + *(uint8_t *)(v11 + 10))
              + *(uint8_t *)(v11 + 9)) << 6)
            + *(uint8_t *)(v11 + 8)
            + 0xFFFF
            * (((((*(uint8_t *)(v11 + 11) + 352988219) << 6)
               + 0xFFFF * (*(uint8_t *)(v11 + 11) + 352988219)
               + *(uint8_t *)(v11 + 10)) << 6)
             + 0xFFFF
             * (((*(uint8_t *)(v11 + 11) + 352988219) << 6)
              + 0xFFFF * (*(uint8_t *)(v11 + 11) + 352988219)
              + *(uint8_t *)(v11 + 10))
             + *(uint8_t *)(v11 + 9));
        v14 = *(uint32_t *)(v43[0] + 4);
        v42 = v14 & v36;
        v15 = (char *)(v43[0] + 32 * (v14 & v36) + 8);
        v41 = v15;
        v37 = *(uint32_t *)v15;
        v16 = v14 & v36;
        if ( *(uint32_t *)v15 == -2 )
        {
          *(uint32_t *)(v43[0] + 32 * (v14 & v36) + 12) = v36;
          *(uint32_t *)v15 = -1;
          *((uint32_t *)v15 + 2) = *(uint32_t *)(v11 + 8);
          sub_7763C0((gameswf::String::Self *)(v15 + 12), v34);
          goto LABEL_35;
        }
        do
        {
          v16 = v14 & (v16 + 1);
          if ( *(uint32_t *)(v43[0] + 32 * v16 + 8) == -2 )
          {
            v38 = (uint32_t *)(v43[0] + 32 * v16 + 8);
            v17 = *(uint32_t *)(v43[0] + 32 * (v14 & v36) + 12) & v14;
            if ( v42 != v17 )
              goto LABEL_22;
LABEL_45:
            *v38 = v37;
            v38[1] = *((uint32_t *)v15 + 1);
            v38[2] = *((uint32_t *)v15 + 2);
            v31 = (gameswf::Self **)(v15 + 12);
            sub_7763C0((gameswf::String::Self *)(v38 + 3), v15 + 12);
            *((uint32_t *)v41 + 2) = *(uint32_t *)(v11 + 8);
            gameswf::String::opAssign(v31, (gameswf::Self **)v34);
            *(uint32_t *)v41 = v16;
            *((uint32_t *)v41 + 1) = v36;
            goto LABEL_35;
          }
        }
        while ( v42 != v16 );
        v38 = (uint32_t *)(v43[0] + 32 * v16 + 8);
        v16 = v14 & v36;
        v17 = *(uint32_t *)(v43[0] + 32 * (v14 & v36) + 12) & v14;
        if ( v42 == v17 )
          goto LABEL_45;
LABEL_22:
        v33 = v11;
        v18 = v17;
        do
        {
          v19 = (int *)(v43[0] + 32 * v18 + 8);
          v18 = *v19;
        }
        while ( v42 != *v19 );
        *v38 = v37;
        v38[1] = *((uint32_t *)v41 + 1);
        v38[2] = *((uint32_t *)v41 + 2);
        v32 = v19;
        sub_7763C0((gameswf::String::Self *)(v38 + 3), v41 + 12);
        *v32 = v16;
        *((uint32_t *)v41 + 2) = *(uint32_t *)(v11 + 8);
        if ( v34 != v41 + 12 )
        {
          v20 = *(uint8_t *)(v11 + 12);
          if ( v20 == -1 )
            v21 = *(uint32_t *)(v11 + 16) - 1;
          else
            v21 = v20 - 1;
          gameswf::String::resize((gameswf::String::Self *)(v41 + 12), v21);
          v22 = (gameswf::Self *)(v11 + 13);
          if ( *(uint8_t *)(v11 + 12) == 0xFF )
            v22 = *(gameswf::Self **)(v11 + 24);
          LOBYTE(v23) = v41[12];
          if ( (uint8_t)(uintptr_t)(v23) == 0xFF )
          {
            v23 = *((char **)v41 + 4);
            v24 = *((gameswf::Self **)v41 + 6);
          }
          else
          {
            v23 = (char *)(char)(uintptr_t)(v23);
            v24 = (gameswf::Self *)(v41 + 13);
          }
          gameswf::Strcpy_s(v24, v23, v22);
          v39 = *(uint32_t *)(v11 + 28);
          if ( (uint8_t *)(v39 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
          {
            v26 = *(uint8_t *)(v11 + 12);
            if ( v26 == -1 )
            {
              v27 = *(uint32_t *)(v11 + 24);
              v28 = *(uint32_t *)(v11 + 16) - 1;
            }
            else
            {
              v27 = v11 + 13;
              v28 = v26 - 1;
            }
            v25 = 5381;
            if ( v28 > 0 )
            {
              do
              {
                --v28;
                v29 = 33 * v25;
                v30 = *(uint8_t *)(v27 + v28) + 32;
                if ( (uint8_t)(*(uint8_t *)(v27 + v28) - 65) > 0x19u )
                  v30 = *(uint8_t *)(v27 + v28);
                v25 = v29 ^ v30;
              }
              while ( v28 != 0 );
              v11 = v33;
              v25 = v25 << 9 >> 9;
            }
            *(uint32_t *)(v11 + 28) = v25 & 0x7FFFFF | v39 & 0xFF800000;
          }
          else
          {
            v25 = v39 << 9 >> 9;
          }
          *((uint32_t *)v41 + 7) = v25 & 0x7FFFFF | *((uint32_t *)v41 + 7) & 0xFF800000;
        }
        *((uint32_t *)v41 + 1) = v36;
        *(uint32_t *)v41 = -1;
LABEL_35:
        if ( *(uint8_t *)(v11 + 12) == 0xFF && (*(uint8_t *)(v11 + 31) & 1) != 0 )
          gameswf::free_internal(*(gameswf::Self **)(v11 + 24));
        *(uint32_t *)v11 = -2;
        *(uint32_t *)(v11 + 4) = 0;
        v9 = *(gameswf::Self **)self;
LABEL_37:
        v10 = ++v40;
        if ( v35 < v40 )
        {
LABEL_38:
          gameswf::free_internal(v9);
          v8 = self;
          break;
        }
      }
    }
    result = (gameswf::Self *)v43[0];
    *(uint32_t *)v8 = v43[0];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_String_games_d90fc8::add  (binary VA: 0x10afa20)
// Original: gameswf::hash<int,gameswf::String,gameswf::fixed_size_hash<int>>::add
// ----------------------------------------------------------------------------
void gameswf::hash_int_gameswf_String_games_d90fc8::add(int **self, const int *a2, const gameswf::String::Self *a3)
{
  int *v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int *v11;
  char *v12;
  int v13;
  int v14;

  v3 = *self;
  if ( *self != nullptr )
  {
    v4 = *v3;
    if ( 3 * *v3 > 2 * v3[1] + 2 )
    {
      gameswf::hash_int_gameswf_String_games_d90fc8::set_raw_capacity(
        (gameswf::hash<int, gameswf::String::Self, gameswf::fixed_size_hash<int>> *)self,
        2 * v3[1] + 2);
      v3 = *self;
      v4 = **self;
    }
  }
  else
  {
    gameswf::hash_int_gameswf_String_games_d90fc8::set_raw_capacity(
      (gameswf::hash<int, gameswf::String::Self, gameswf::fixed_size_hash<int>> *)self,
      8);
    v3 = *self;
    v4 = **self;
  }
  *v3 = v4 + 1;
  v5 = *self;
  v6 = (*self)[1];
  v13 = 65599
      * (((*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)) << 6)
       + *((uint8_t *)a2 + 1)
       + 0xFFFF * (*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)))
      + *(uint8_t *)a2;
  v7 = v6 & v13;
  v12 = (char *)&(*self)[8 * (v6 & v13) + 2];
  v14 = *(uint32_t *)v12;
  v8 = v6 & v13;
  if ( *(uint32_t *)v12 == -2 )
  {
    *(uint32_t *)v12 = -1;
    *((uint32_t *)v12 + 1) = v13;
    *((uint32_t *)v12 + 2) = *a2;
    sub_7763C0((gameswf::String::Self *)(v12 + 12), (char *)a3);
  }
  else
  {
    do
    {
      v8 = v6 & (v8 + 1);
      v9 = &v5[8 * v8 + 2];
    }
    while ( *v9 != -2 && v8 != v7 );
    v10 = (*self)[8 * (v6 & v13) + 3] & v6;
    if ( v10 == v7 )
    {
      *v9 = v14;
      v5[8 * v8 + 3] = *((uint32_t *)v12 + 1);
      v5[8 * v8 + 4] = *((uint32_t *)v12 + 2);
      sub_7763C0((gameswf::String::Self *)&v5[8 * v8 + 5], v12 + 12);
      *((uint32_t *)v12 + 2) = *a2;
      gameswf::String::opAssign((gameswf::Self **)v12 + 3, (gameswf::Self **)a3);
      *(uint32_t *)v12 = v8;
      *((uint32_t *)v12 + 1) = v13;
    }
    else
    {
      do
      {
        v11 = &v5[8 * v10 + 2];
        v10 = *v11;
      }
      while ( *v11 != v7 );
      *v9 = v14;
      v5[8 * v8 + 3] = *((uint32_t *)v12 + 1);
      v5[8 * v8 + 4] = *((uint32_t *)v12 + 2);
      sub_7763C0((gameswf::String::Self *)&v5[8 * v8 + 5], v12 + 12);
      *v11 = v8;
      *((uint32_t *)v12 + 2) = *a2;
      gameswf::String::opAssign((gameswf::Self **)v12 + 3, (gameswf::Self **)a3);
      *(uint32_t *)v12 = -1;
      *((uint32_t *)v12 + 1) = v13;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_761876::set_raw_capacity  (binary VA: 0x10afc30)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::CharacterDef>,gameswf::fixed_size_hash<int>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> * gameswf::hash_int_gameswf_smart_ptr_ga_761876::set_raw_capacity(gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> *result;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> *v5;
  int v6;
  int v7;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> *v8;
  int i;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_int_gameswf_smart_ptr_ga_761876::clear(self);
  v2 = 1;
  v3 = 4;
  if ( a2 != 1 )
  {
    do
      v2 *= 2;
    while ( a2 > v2 );
    v3 = 4;
    if ( v2 >= 4 )
      v3 = v2;
  }
  if ( *self == nullptr
    || (result = (gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> *)v3 )
  {
    v13 = (gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> *)gameswf::malloc_internal(16 * v3 + 8);
    *(uint32_t *)v13 = 0;
    v5 = v13;
    v6 = 8;
    *((uint32_t *)v13 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 16;
      if ( v3 <= v7 )
        break;
      v5 = v13;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v12 = *((uint32_t *)v8 + 1);
      if ( v12 >= 0 )
      {
        for ( i = 0; i <= v12; ++i )
        {
          v10 = (int)(uintptr_t)(v8) + 16 * i + 8;
          if ( *(uint32_t *)v10 != -2 )
          {
            v11 = i;
            gameswf::hash_int_gameswf_smart_ptr_ga_761876::add(
              (gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> *)&v13,
              (const int *)v8 + 4 * i + 4,
              (gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> *)((char *)v8 + 16 * i + 20));
            i = v11;
            if ( *(uint32_t *)(v10 + 12) != 0 )
            {
              gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v10 + 12));
              i = v11;
            }
            *(uint32_t *)v10 = -2;
            *(uint32_t *)(v10 + 4) = 0;
            v8 = *self;
          }
        }
      }
      gameswf::free_internal(v8);
    }
    result = v13;
    *self = v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_761876::add  (binary VA: 0x10afd90)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::CharacterDef>,gameswf::fixed_size_hash<int>>::add
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::hash_int_gameswf_smart_ptr_ga_761876::add(gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> **self, const int *a2, gameswf::RefCounted::Self **a3)
{
  gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> *v3;
  int v4;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::fixed_size_hash<int>> *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int *v11;
  gameswf::RefCounted::Self *v12;
  gameswf::RefCounted::Self *result;
  gameswf::RefCounted::Self *v14;
  bool v15;
  gameswf::RefCounted::Self *v16;
  gameswf::RefCounted::Self *v17;
  int v18;
  int v19;
  int v20;

  v3 = *self;
  if ( *self != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_int_gameswf_smart_ptr_ga_761876::set_raw_capacity(
        self,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *self;
      v4 = *(uint32_t *)*self;
    }
  }
  else
  {
    gameswf::hash_int_gameswf_smart_ptr_ga_761876::set_raw_capacity(
      self,
      8);
    v3 = *self;
    v4 = *(uint32_t *)*self;
  }
  *(uint32_t *)v3 = v4 + 1;
  v19 = 65599
      * (((*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)) << 6)
       + *((uint8_t *)a2 + 1)
       + 0xFFFF * (*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)))
      + *(uint8_t *)a2;
  v5 = *self;
  v6 = *((uint32_t *)*self + 1);
  v18 = v6 & v19;
  v7 = v6 & v19;
  v8 = (int)(uintptr_t)(*self) + 16 * (v6 & v19) + 8;
  v20 = *(uint32_t *)v8;
  if ( *(uint32_t *)v8 == -2 )
  {
    *(uint32_t *)v8 = -1;
    *(uint32_t *)(v8 + 4) = v19;
    *(uint32_t *)(v8 + 8) = *a2;
    result = *a3;
    v15 = *a3 == nullptr;
    *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(*a3);
    if ( !v15 )
      return gameswf::RefCounted::addRef(result);
  }
  else
  {
    do
    {
      v7 = v6 & (v7 + 1);
      v9 = (uint32_t *)((char *)v5 + 16 * v7 + 8);
    }
    while ( *v9 != -2 && v7 != (v6 & v19) );
    v10 = *((uint32_t *)*self + 4 * (v6 & v19) + 3) & v6;
    if ( v10 == v18 )
    {
      *v9 = v20;
      *((uint32_t *)v5 + 4 * v7 + 3) = *(uint32_t *)(v8 + 4);
      *((uint32_t *)v5 + 4 * v7 + 4) = *(uint32_t *)(v8 + 8);
      v16 = *(gameswf::RefCounted::Self **)(v8 + 12);
      *((uint32_t *)v5 + 4 * v7 + 5) = (uint32_t)(uintptr_t)(v16);
      if ( v16 != nullptr )
        gameswf::RefCounted::addRef(v16);
      *(uint32_t *)(v8 + 8) = *a2;
      result = *(gameswf::RefCounted::Self **)(v8 + 12);
      v17 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v8 + 12));
        *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v17);
        if ( v17 != nullptr )
          result = gameswf::RefCounted::addRef(v17);
      }
      *(uint32_t *)v8 = v7;
      *(uint32_t *)(v8 + 4) = v19;
    }
    else
    {
      do
      {
        v11 = (int *)((char *)v5 + 16 * v10 + 8);
        v10 = *v11;
      }
      while ( *v11 != v18 );
      *v9 = v20;
      *((uint32_t *)v5 + 4 * v7 + 3) = *(uint32_t *)(v8 + 4);
      *((uint32_t *)v5 + 4 * v7 + 4) = *(uint32_t *)(v8 + 8);
      v12 = *(gameswf::RefCounted::Self **)(v8 + 12);
      *((uint32_t *)v5 + 4 * v7 + 5) = (uint32_t)(uintptr_t)(v12);
      if ( v12 != nullptr )
        gameswf::RefCounted::addRef(v12);
      *v11 = v7;
      *(uint32_t *)(v8 + 8) = *a2;
      result = *(gameswf::RefCounted::Self **)(v8 + 12);
      v14 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v8 + 12));
        *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v14);
        if ( v14 != nullptr )
          result = gameswf::RefCounted::addRef(v14);
      }
      *(uint32_t *)v8 = -1;
      *(uint32_t *)(v8 + 4) = v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_27591b::set_raw_capacity  (binary VA: 0x10affc0)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::Font>,gameswf::fixed_size_hash<int>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> * gameswf::hash_int_gameswf_smart_ptr_ga_27591b::set_raw_capacity(gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> *result;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> *v5;
  int v6;
  int v7;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> *v8;
  int i;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_int_gameswf_smart_ptr_ga_27591b::clear(self);
  v2 = 1;
  v3 = 4;
  if ( a2 != 1 )
  {
    do
      v2 *= 2;
    while ( a2 > v2 );
    v3 = 4;
    if ( v2 >= 4 )
      v3 = v2;
  }
  if ( *self == nullptr
    || (result = (gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> *)v3 )
  {
    v13 = (gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> *)gameswf::malloc_internal(16 * v3 + 8);
    *(uint32_t *)v13 = 0;
    v5 = v13;
    v6 = 8;
    *((uint32_t *)v13 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 16;
      if ( v3 <= v7 )
        break;
      v5 = v13;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v12 = *((uint32_t *)v8 + 1);
      if ( v12 >= 0 )
      {
        for ( i = 0; i <= v12; ++i )
        {
          v10 = (int)(uintptr_t)(v8) + 16 * i + 8;
          if ( *(uint32_t *)v10 != -2 )
          {
            v11 = i;
            gameswf::hash_int_gameswf_smart_ptr_ga_27591b::add(
              (gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> *)&v13,
              (const int *)v8 + 4 * i + 4,
              (gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> *)((char *)v8 + 16 * i + 20));
            i = v11;
            if ( *(uint32_t *)(v10 + 12) != 0 )
            {
              gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v10 + 12));
              i = v11;
            }
            *(uint32_t *)v10 = -2;
            *(uint32_t *)(v10 + 4) = 0;
            v8 = *self;
          }
        }
      }
      gameswf::free_internal(v8);
    }
    result = v13;
    *self = v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_27591b::add  (binary VA: 0x10b0120)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::Font>,gameswf::fixed_size_hash<int>>::add
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::hash_int_gameswf_smart_ptr_ga_27591b::add(gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> **self, const int *a2, gameswf::RefCounted::Self **a3)
{
  gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> *v3;
  int v4;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::Font::Self>, gameswf::fixed_size_hash<int>> *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int *v11;
  gameswf::RefCounted::Self *v12;
  gameswf::RefCounted::Self *result;
  gameswf::RefCounted::Self *v14;
  bool v15;
  gameswf::RefCounted::Self *v16;
  gameswf::RefCounted::Self *v17;
  int v18;
  int v19;
  int v20;

  v3 = *self;
  if ( *self != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_int_gameswf_smart_ptr_ga_27591b::set_raw_capacity(
        self,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *self;
      v4 = *(uint32_t *)*self;
    }
  }
  else
  {
    gameswf::hash_int_gameswf_smart_ptr_ga_27591b::set_raw_capacity(self, 8);
    v3 = *self;
    v4 = *(uint32_t *)*self;
  }
  *(uint32_t *)v3 = v4 + 1;
  v19 = 65599
      * (((*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)) << 6)
       + *((uint8_t *)a2 + 1)
       + 0xFFFF * (*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)))
      + *(uint8_t *)a2;
  v5 = *self;
  v6 = *((uint32_t *)*self + 1);
  v18 = v6 & v19;
  v7 = v6 & v19;
  v8 = (int)(uintptr_t)(*self) + 16 * (v6 & v19) + 8;
  v20 = *(uint32_t *)v8;
  if ( *(uint32_t *)v8 == -2 )
  {
    *(uint32_t *)v8 = -1;
    *(uint32_t *)(v8 + 4) = v19;
    *(uint32_t *)(v8 + 8) = *a2;
    result = *a3;
    v15 = *a3 == nullptr;
    *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(*a3);
    if ( !v15 )
      return gameswf::RefCounted::addRef(result);
  }
  else
  {
    do
    {
      v7 = v6 & (v7 + 1);
      v9 = (uint32_t *)((char *)v5 + 16 * v7 + 8);
    }
    while ( *v9 != -2 && v7 != (v6 & v19) );
    v10 = *((uint32_t *)*self + 4 * (v6 & v19) + 3) & v6;
    if ( v10 == v18 )
    {
      *v9 = v20;
      *((uint32_t *)v5 + 4 * v7 + 3) = *(uint32_t *)(v8 + 4);
      *((uint32_t *)v5 + 4 * v7 + 4) = *(uint32_t *)(v8 + 8);
      v16 = *(gameswf::RefCounted::Self **)(v8 + 12);
      *((uint32_t *)v5 + 4 * v7 + 5) = (uint32_t)(uintptr_t)(v16);
      if ( v16 != nullptr )
        gameswf::RefCounted::addRef(v16);
      *(uint32_t *)(v8 + 8) = *a2;
      result = *(gameswf::RefCounted::Self **)(v8 + 12);
      v17 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v8 + 12));
        *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v17);
        if ( v17 != nullptr )
          result = gameswf::RefCounted::addRef(v17);
      }
      *(uint32_t *)v8 = v7;
      *(uint32_t *)(v8 + 4) = v19;
    }
    else
    {
      do
      {
        v11 = (int *)((char *)v5 + 16 * v10 + 8);
        v10 = *v11;
      }
      while ( *v11 != v18 );
      *v9 = v20;
      *((uint32_t *)v5 + 4 * v7 + 3) = *(uint32_t *)(v8 + 4);
      *((uint32_t *)v5 + 4 * v7 + 4) = *(uint32_t *)(v8 + 8);
      v12 = *(gameswf::RefCounted::Self **)(v8 + 12);
      *((uint32_t *)v5 + 4 * v7 + 5) = (uint32_t)(uintptr_t)(v12);
      if ( v12 != nullptr )
        gameswf::RefCounted::addRef(v12);
      *v11 = v7;
      *(uint32_t *)(v8 + 8) = *a2;
      result = *(gameswf::RefCounted::Self **)(v8 + 12);
      v14 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v8 + 12));
        *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v14);
        if ( v14 != nullptr )
          result = gameswf::RefCounted::addRef(v14);
      }
      *(uint32_t *)v8 = -1;
      *(uint32_t *)(v8 + 4) = v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_d68a93::set_raw_capacity  (binary VA: 0x10b0350)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::BitmapCharacterDef>,gameswf::fixed_size_hash<int>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> * gameswf::hash_int_gameswf_smart_ptr_ga_d68a93::set_raw_capacity(gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> *result;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> *v5;
  int v6;
  int v7;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> *v8;
  int i;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_int_gameswf_smart_ptr_ga_d68a93::clear(self);
  v2 = 1;
  v3 = 4;
  if ( a2 != 1 )
  {
    do
      v2 *= 2;
    while ( a2 > v2 );
    v3 = 4;
    if ( v2 >= 4 )
      v3 = v2;
  }
  if ( *self == nullptr
    || (result = (gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> *)v3 )
  {
    v13 = (gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> *)gameswf::malloc_internal(16 * v3 + 8);
    *(uint32_t *)v13 = 0;
    v5 = v13;
    v6 = 8;
    *((uint32_t *)v13 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 16;
      if ( v3 <= v7 )
        break;
      v5 = v13;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v12 = *((uint32_t *)v8 + 1);
      if ( v12 >= 0 )
      {
        for ( i = 0; i <= v12; ++i )
        {
          v10 = (int)(uintptr_t)(v8) + 16 * i + 8;
          if ( *(uint32_t *)v10 != -2 )
          {
            v11 = i;
            gameswf::hash_int_gameswf_smart_ptr_ga_d68a93::add(
              (gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> *)&v13,
              (int)(uintptr_t)(v8) + 16 * i + 16,
              (int)(uintptr_t)(v8) + 16 * i + 20);
            i = v11;
            if ( *(uint32_t *)(v10 + 12) != 0 )
            {
              gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v10 + 12));
              i = v11;
            }
            *(uint32_t *)v10 = -2;
            *(uint32_t *)(v10 + 4) = 0;
            v8 = *self;
          }
        }
      }
      gameswf::free_internal(v8);
    }
    result = v13;
    *self = v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_d68a93::add  (binary VA: 0x10b04b0)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::BitmapCharacterDef>,gameswf::fixed_size_hash<int>>::add
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::hash_int_gameswf_smart_ptr_ga_d68a93::add(gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> **a1, uint8_t *a2, gameswf::RefCounted::Self **a3)
{
  gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> *v3;
  int v4;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::BitmapCharacterDef::Self>, gameswf::fixed_size_hash<int>> *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int *v11;
  gameswf::RefCounted::Self *v12;
  gameswf::RefCounted::Self *result;
  gameswf::RefCounted::Self *v14;
  bool v15;
  gameswf::RefCounted::Self *v16;
  gameswf::RefCounted::Self *v17;
  int v18;
  int v19;
  int v20;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_int_gameswf_smart_ptr_ga_d68a93::set_raw_capacity(
        a1,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_int_gameswf_smart_ptr_ga_d68a93::set_raw_capacity(
      a1,
      8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  v19 = 65599 * (((a2[2] + 65599 * (a2[3] + 352988219)) << 6) + a2[1] + 0xFFFF * (a2[2] + 65599 * (a2[3] + 352988219)))
      + *a2;
  v5 = *a1;
  v6 = *((uint32_t *)*a1 + 1);
  v18 = v6 & v19;
  v7 = v6 & v19;
  v8 = (int)(uintptr_t)(*a1) + 16 * (v6 & v19) + 8;
  v20 = *(uint32_t *)v8;
  if ( *(uint32_t *)v8 == -2 )
  {
    *(uint32_t *)v8 = -1;
    *(uint32_t *)(v8 + 4) = v19;
    *(uint32_t *)(v8 + 8) = *(uint32_t *)a2;
    result = *a3;
    v15 = *a3 == nullptr;
    *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(*a3);
    if ( !v15 )
      return gameswf::RefCounted::addRef(result);
  }
  else
  {
    do
    {
      v7 = v6 & (v7 + 1);
      v9 = (uint32_t *)((char *)v5 + 16 * v7 + 8);
    }
    while ( *v9 != -2 && v7 != (v6 & v19) );
    v10 = *((uint32_t *)*a1 + 4 * (v6 & v19) + 3) & v6;
    if ( v10 == v18 )
    {
      *v9 = v20;
      *((uint32_t *)v5 + 4 * v7 + 3) = *(uint32_t *)(v8 + 4);
      *((uint32_t *)v5 + 4 * v7 + 4) = *(uint32_t *)(v8 + 8);
      v16 = *(gameswf::RefCounted::Self **)(v8 + 12);
      *((uint32_t *)v5 + 4 * v7 + 5) = (uint32_t)(uintptr_t)(v16);
      if ( v16 != nullptr )
        gameswf::RefCounted::addRef(v16);
      *(uint32_t *)(v8 + 8) = *(uint32_t *)a2;
      result = *(gameswf::RefCounted::Self **)(v8 + 12);
      v17 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v8 + 12));
        *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v17);
        if ( v17 != nullptr )
          result = gameswf::RefCounted::addRef(v17);
      }
      *(uint32_t *)v8 = v7;
      *(uint32_t *)(v8 + 4) = v19;
    }
    else
    {
      do
      {
        v11 = (int *)((char *)v5 + 16 * v10 + 8);
        v10 = *v11;
      }
      while ( *v11 != v18 );
      *v9 = v20;
      *((uint32_t *)v5 + 4 * v7 + 3) = *(uint32_t *)(v8 + 4);
      *((uint32_t *)v5 + 4 * v7 + 4) = *(uint32_t *)(v8 + 8);
      v12 = *(gameswf::RefCounted::Self **)(v8 + 12);
      *((uint32_t *)v5 + 4 * v7 + 5) = (uint32_t)(uintptr_t)(v12);
      if ( v12 != nullptr )
        gameswf::RefCounted::addRef(v12);
      *v11 = v7;
      *(uint32_t *)(v8 + 8) = *(uint32_t *)a2;
      result = *(gameswf::RefCounted::Self **)(v8 + 12);
      v14 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v8 + 12));
        *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v14);
        if ( v14 != nullptr )
          result = gameswf::RefCounted::addRef(v14);
      }
      *(uint32_t *)v8 = -1;
      *(uint32_t *)(v8 + 4) = v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_15e0f8::set_raw_capacity  (binary VA: 0x10b06e0)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::SoundSample>,gameswf::fixed_size_hash<int>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> * gameswf::hash_int_gameswf_smart_ptr_ga_15e0f8::set_raw_capacity(gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> *result;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> *v5;
  int v6;
  int v7;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> *v8;
  int i;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_int_gameswf_smart_ptr_ga_15e0f8::clear(self);
  v2 = 1;
  v3 = 4;
  if ( a2 != 1 )
  {
    do
      v2 *= 2;
    while ( a2 > v2 );
    v3 = 4;
    if ( v2 >= 4 )
      v3 = v2;
  }
  if ( *self == nullptr
    || (result = (gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> *)v3 )
  {
    v13 = (gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> *)gameswf::malloc_internal(16 * v3 + 8);
    *(uint32_t *)v13 = 0;
    v5 = v13;
    v6 = 8;
    *((uint32_t *)v13 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 16;
      if ( v3 <= v7 )
        break;
      v5 = v13;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v12 = *((uint32_t *)v8 + 1);
      if ( v12 >= 0 )
      {
        for ( i = 0; i <= v12; ++i )
        {
          v10 = (int)(uintptr_t)(v8) + 16 * i + 8;
          if ( *(uint32_t *)v10 != -2 )
          {
            v11 = i;
            gameswf::hash_int_gameswf_smart_ptr_ga_15e0f8::add(
              (gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> *)&v13,
              (int)(uintptr_t)(v8) + 16 * i + 16,
              (int)(uintptr_t)(v8) + 16 * i + 20);
            i = v11;
            if ( *(uint32_t *)(v10 + 12) != 0 )
            {
              gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v10 + 12));
              i = v11;
            }
            *(uint32_t *)v10 = -2;
            *(uint32_t *)(v10 + 4) = 0;
            v8 = *self;
          }
        }
      }
      gameswf::free_internal(v8);
    }
    result = v13;
    *self = v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_15e0f8::add  (binary VA: 0x10b0840)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::SoundSample>,gameswf::fixed_size_hash<int>>::add
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::hash_int_gameswf_smart_ptr_ga_15e0f8::add(gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> **a1, uint8_t *a2, gameswf::RefCounted::Self **a3)
{
  gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> *v3;
  int v4;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::SoundSample::Self>, gameswf::fixed_size_hash<int>> *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int *v11;
  gameswf::RefCounted::Self *v12;
  gameswf::RefCounted::Self *result;
  gameswf::RefCounted::Self *v14;
  bool v15;
  gameswf::RefCounted::Self *v16;
  gameswf::RefCounted::Self *v17;
  int v18;
  int v19;
  int v20;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_int_gameswf_smart_ptr_ga_15e0f8::set_raw_capacity(
        a1,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_int_gameswf_smart_ptr_ga_15e0f8::set_raw_capacity(a1, 8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  v19 = 65599 * (((a2[2] + 65599 * (a2[3] + 352988219)) << 6) + a2[1] + 0xFFFF * (a2[2] + 65599 * (a2[3] + 352988219)))
      + *a2;
  v5 = *a1;
  v6 = *((uint32_t *)*a1 + 1);
  v18 = v6 & v19;
  v7 = v6 & v19;
  v8 = (int)(uintptr_t)(*a1) + 16 * (v6 & v19) + 8;
  v20 = *(uint32_t *)v8;
  if ( *(uint32_t *)v8 == -2 )
  {
    *(uint32_t *)v8 = -1;
    *(uint32_t *)(v8 + 4) = v19;
    *(uint32_t *)(v8 + 8) = *(uint32_t *)a2;
    result = *a3;
    v15 = *a3 == nullptr;
    *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(*a3);
    if ( !v15 )
      return gameswf::RefCounted::addRef(result);
  }
  else
  {
    do
    {
      v7 = v6 & (v7 + 1);
      v9 = (uint32_t *)((char *)v5 + 16 * v7 + 8);
    }
    while ( *v9 != -2 && v7 != (v6 & v19) );
    v10 = *((uint32_t *)*a1 + 4 * (v6 & v19) + 3) & v6;
    if ( v10 == v18 )
    {
      *v9 = v20;
      *((uint32_t *)v5 + 4 * v7 + 3) = *(uint32_t *)(v8 + 4);
      *((uint32_t *)v5 + 4 * v7 + 4) = *(uint32_t *)(v8 + 8);
      v16 = *(gameswf::RefCounted::Self **)(v8 + 12);
      *((uint32_t *)v5 + 4 * v7 + 5) = (uint32_t)(uintptr_t)(v16);
      if ( v16 != nullptr )
        gameswf::RefCounted::addRef(v16);
      *(uint32_t *)(v8 + 8) = *(uint32_t *)a2;
      result = *(gameswf::RefCounted::Self **)(v8 + 12);
      v17 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v8 + 12));
        *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v17);
        if ( v17 != nullptr )
          result = gameswf::RefCounted::addRef(v17);
      }
      *(uint32_t *)v8 = v7;
      *(uint32_t *)(v8 + 4) = v19;
    }
    else
    {
      do
      {
        v11 = (int *)((char *)v5 + 16 * v10 + 8);
        v10 = *v11;
      }
      while ( *v11 != v18 );
      *v9 = v20;
      *((uint32_t *)v5 + 4 * v7 + 3) = *(uint32_t *)(v8 + 4);
      *((uint32_t *)v5 + 4 * v7 + 4) = *(uint32_t *)(v8 + 8);
      v12 = *(gameswf::RefCounted::Self **)(v8 + 12);
      *((uint32_t *)v5 + 4 * v7 + 5) = (uint32_t)(uintptr_t)(v12);
      if ( v12 != nullptr )
        gameswf::RefCounted::addRef(v12);
      *v11 = v7;
      *(uint32_t *)(v8 + 8) = *(uint32_t *)a2;
      result = *(gameswf::RefCounted::Self **)(v8 + 12);
      v14 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v8 + 12));
        *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v14);
        if ( v14 != nullptr )
          result = gameswf::RefCounted::addRef(v14);
      }
      *(uint32_t *)v8 = -1;
      *(uint32_t *)(v8 + 4) = v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_c7a3f0::clear  (binary VA: 0x10ea940)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::ASFunction>,gameswf::fixed_size_hash<int>>::clear
// ----------------------------------------------------------------------------
gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> * gameswf::hash_int_gameswf_smart_ptr_ga_c7a3f0::clear(gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> **self)
{
  gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *result;
  int v2;
  int i;
  uint32_t *v4;

  result = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)result + 1);
    if ( v2 >= 0 )
    {
      for ( i = 0; i <= v2; ++i )
      {
        v4 = (uint32_t *)((char *)result + 16 * i + 8);
        if ( *v4 != -2 )
        {
          if ( *((uint32_t *)result + 4 * i + 5) != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)result + 4 * i + 5));
          *v4 = -2;
          v4[1] = 0;
          result = *self;
        }
      }
    }
    gameswf::free_internal(result);
    *self = nullptr;
    return (gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *)self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_c7a3f0::set_raw_capacity  (binary VA: 0x10ea9d0)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::ASFunction>,gameswf::fixed_size_hash<int>>::set_raw_capacity
// ----------------------------------------------------------------------------
gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> * gameswf::hash_int_gameswf_smart_ptr_ga_c7a3f0::set_raw_capacity(gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> **self, int a2)
{
  int v2;
  int v3;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *result;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *v5;
  int v6;
  int v7;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *v8;
  int i;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  if ( a2 <= 0 )
    return gameswf::hash_int_gameswf_smart_ptr_ga_c7a3f0::clear(self);
  v2 = 1;
  v3 = 4;
  if ( a2 != 1 )
  {
    do
      v2 *= 2;
    while ( a2 > v2 );
    v3 = 4;
    if ( v2 >= 4 )
      v3 = v2;
  }
  if ( *self == nullptr
    || (result = (gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *)(*((uint32_t *)*self + 1) + 1)) != (gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *)v3 )
  {
    v13 = (gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *)gameswf::malloc_internal(16 * v3 + 8);
    *(uint32_t *)v13 = 0;
    v5 = v13;
    v6 = 8;
    *((uint32_t *)v13 + 1) = v3 - 1;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint32_t *)((char *)v5 + v6) = -2;
      v6 += 16;
      if ( v3 <= v7 )
        break;
      v5 = v13;
    }
    v8 = *self;
    if ( *self != nullptr )
    {
      v12 = *((uint32_t *)v8 + 1);
      if ( v12 >= 0 )
      {
        for ( i = 0; i <= v12; ++i )
        {
          v10 = (int)(uintptr_t)(v8) + 16 * i + 8;
          if ( *(uint32_t *)v10 != -2 )
          {
            v11 = i;
            gameswf::hash_int_gameswf_smart_ptr_ga_c7a3f0::add(
              (gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *)&v13,
              (int)(uintptr_t)(v8) + 16 * i + 16,
              (int)(uintptr_t)(v8) + 16 * i + 20);
            i = v11;
            if ( *(uint32_t *)(v10 + 12) != 0 )
            {
              gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v10 + 12));
              i = v11;
            }
            *(uint32_t *)v10 = -2;
            *(uint32_t *)(v10 + 4) = 0;
            v8 = *self;
          }
        }
      }
      gameswf::free_internal(v8);
    }
    result = v13;
    *self = v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_gameswf_smart_ptr_ga_c7a3f0::add  (binary VA: 0x10eab30)
// Original: gameswf::hash<int,gameswf::smart_ptr<gameswf::ASFunction>,gameswf::fixed_size_hash<int>>::add
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::hash_int_gameswf_smart_ptr_ga_c7a3f0::add(gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> **a1, uint8_t *a2, gameswf::RefCounted::Self **a3)
{
  gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *v3;
  int v4;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int *v11;
  gameswf::RefCounted::Self *v12;
  gameswf::RefCounted::Self *result;
  gameswf::RefCounted::Self *v14;
  bool v15;
  gameswf::RefCounted::Self *v16;
  gameswf::RefCounted::Self *v17;
  int v18;
  int v19;
  int v20;

  v3 = *a1;
  if ( *a1 != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_int_gameswf_smart_ptr_ga_c7a3f0::set_raw_capacity(
        a1,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *a1;
      v4 = *(uint32_t *)*a1;
    }
  }
  else
  {
    gameswf::hash_int_gameswf_smart_ptr_ga_c7a3f0::set_raw_capacity(a1, 8);
    v3 = *a1;
    v4 = *(uint32_t *)*a1;
  }
  *(uint32_t *)v3 = v4 + 1;
  v19 = 65599 * (((a2[2] + 65599 * (a2[3] + 352988219)) << 6) + a2[1] + 0xFFFF * (a2[2] + 65599 * (a2[3] + 352988219)))
      + *a2;
  v5 = *a1;
  v6 = *((uint32_t *)*a1 + 1);
  v18 = v6 & v19;
  v7 = v6 & v19;
  v8 = (int)(uintptr_t)(*a1) + 16 * (v6 & v19) + 8;
  v20 = *(uint32_t *)v8;
  if ( *(uint32_t *)v8 == -2 )
  {
    *(uint32_t *)v8 = -1;
    *(uint32_t *)(v8 + 4) = v19;
    *(uint32_t *)(v8 + 8) = *(uint32_t *)a2;
    result = *a3;
    v15 = *a3 == nullptr;
    *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(*a3);
    if ( !v15 )
      return gameswf::RefCounted::addRef(result);
  }
  else
  {
    do
    {
      v7 = v6 & (v7 + 1);
      v9 = (uint32_t *)((char *)v5 + 16 * v7 + 8);
    }
    while ( *v9 != -2 && v7 != (v6 & v19) );
    v10 = *((uint32_t *)*a1 + 4 * (v6 & v19) + 3) & v6;
    if ( v10 == v18 )
    {
      *v9 = v20;
      *((uint32_t *)v5 + 4 * v7 + 3) = *(uint32_t *)(v8 + 4);
      *((uint32_t *)v5 + 4 * v7 + 4) = *(uint32_t *)(v8 + 8);
      v16 = *(gameswf::RefCounted::Self **)(v8 + 12);
      *((uint32_t *)v5 + 4 * v7 + 5) = (uint32_t)(uintptr_t)(v16);
      if ( v16 != nullptr )
        gameswf::RefCounted::addRef(v16);
      *(uint32_t *)(v8 + 8) = *(uint32_t *)a2;
      result = *(gameswf::RefCounted::Self **)(v8 + 12);
      v17 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v8 + 12));
        *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v17);
        if ( v17 != nullptr )
          result = gameswf::RefCounted::addRef(v17);
      }
      *(uint32_t *)v8 = v7;
      *(uint32_t *)(v8 + 4) = v19;
    }
    else
    {
      do
      {
        v11 = (int *)((char *)v5 + 16 * v10 + 8);
        v10 = *v11;
      }
      while ( *v11 != v18 );
      *v9 = v20;
      *((uint32_t *)v5 + 4 * v7 + 3) = *(uint32_t *)(v8 + 4);
      *((uint32_t *)v5 + 4 * v7 + 4) = *(uint32_t *)(v8 + 8);
      v12 = *(gameswf::RefCounted::Self **)(v8 + 12);
      *((uint32_t *)v5 + 4 * v7 + 5) = (uint32_t)(uintptr_t)(v12);
      if ( v12 != nullptr )
        gameswf::RefCounted::addRef(v12);
      *v11 = v7;
      *(uint32_t *)(v8 + 8) = *(uint32_t *)a2;
      result = *(gameswf::RefCounted::Self **)(v8 + 12);
      v14 = *a3;
      if ( *a3 != result )
      {
        if ( result != nullptr )
          result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v8 + 12));
        *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v14);
        if ( v14 != nullptr )
          result = gameswf::RefCounted::addRef(v14);
      }
      *(uint32_t *)v8 = -1;
      *(uint32_t *)(v8 + 4) = v19;
    }
  }
  return result;
}


