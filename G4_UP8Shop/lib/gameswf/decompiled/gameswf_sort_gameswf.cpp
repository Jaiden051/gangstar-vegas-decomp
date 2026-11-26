#include "Core/Utils/DecompTypes.h"
#include "gameswf_sort_gameswf.h"

// ----------------------------------------------------------------------------
// Function: g4_std::sort_gameswf_ASValue_gameswf_20cf09  (binary VA: 0x1121d30)
// Original: std::sort<gameswf::ASValue *,gameswf::FieldArraySorter>
// ----------------------------------------------------------------------------
int g4_std::sort_gameswf_ASValue_gameswf_20cf09(char *a1, const gameswf::ASValue::Self *a2, int *a3)
{
  int result;
  int *v4;
  int v5;
  char v6;
  int v7;
  gameswf::Self *v8;
  char *v9;
  gameswf::Self *v10;
  int v11;
  unsigned int v12;
  int v13;
  char v14;
  int v15;
  gameswf::Self *v16;
  char *v17;
  gameswf::Self *v18;
  int v19;
  unsigned int v20;
  int v21;
  gameswf::Self *v22;
  char *v23;
  gameswf::Self *v24;
  int v25;
  unsigned int v26;
  gameswf::ASValue::Self *v27;
  gameswf::ASValue::Self *i;
  char v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint8_t *v34;
  int v35;
  int v36;
  char v37;
  int v38;
  int v39;
  int v40;
  int v41;
  typedef gameswf::ASValue::Self *_g4_t_v42;
  typedef char _g4_t_v43;
  typedef int *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef const gameswf::ASValue::Self *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint8_t _g4_t_v49[12];
  typedef uint8_t _g4_t_v50[12];
  typedef uint16_t _g4_t_v51[6];
  typedef int _g4_t_v52;
  typedef char _g4_t_v53;
  typedef char _g4_t_v54;
  typedef char *_g4_t_v55;
  typedef gameswf::Self *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef char _g4_t_v59;
  typedef char _g4_t_v60;
  typedef char *_g4_t_v61;
  typedef gameswf::Self *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef gameswf::Self *_g4_t_v65[3];
  typedef gameswf::Self *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef gameswf::Self *_g4_t_v69[7];
  typedef int _g4_t_v70;
  typedef char _g4_t_v71;
  typedef uint8_t _g4_t_v72[15];
  typedef unsigned int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef gameswf::Self *_g4_t_v75[10];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v42)) > _g4_s0 ? (4u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v43)) > _g4_s1 ? (8u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v44)) > _g4_s2 ? (12u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v45)) > _g4_s3 ? (20u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v46)) > _g4_s4 ? (20u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v47)) > _g4_s5 ? (20u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v48)) > _g4_s6 ? (24u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v49)) > _g4_s7 ? (48u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v50)) > _g4_s8 ? (60u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v51)) > _g4_s9 ? (72u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v52)) > _g4_s10 ? (84u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v53)) > _g4_s11 ? (88u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (89u + sizeof(_g4_t_v54)) > _g4_s12 ? (89u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v55)) > _g4_s13 ? (92u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v56)) > _g4_s14 ? (100u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v57)) > _g4_s15 ? (104u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v58)) > _g4_s16 ? (116u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v59)) > _g4_s17 ? (120u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (121u + sizeof(_g4_t_v60)) > _g4_s18 ? (121u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v61)) > _g4_s19 ? (124u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v62)) > _g4_s20 ? (132u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v63)) > _g4_s21 ? (136u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (148u + sizeof(_g4_t_v64)) > _g4_s22 ? (148u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (152u + sizeof(_g4_t_v65)) > _g4_s23 ? (152u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (164u + sizeof(_g4_t_v66)) > _g4_s24 ? (164u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (168u + sizeof(_g4_t_v67)) > _g4_s25 ? (168u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (180u + sizeof(_g4_t_v68)) > _g4_s26 ? (180u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (184u + sizeof(_g4_t_v69)) > _g4_s27 ? (184u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (212u + sizeof(_g4_t_v70)) > _g4_s28 ? (212u + sizeof(_g4_t_v70)) : _g4_s28,
    _g4_s30 = (216u + sizeof(_g4_t_v71)) > _g4_s29 ? (216u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (217u + sizeof(_g4_t_v72)) > _g4_s30 ? (217u + sizeof(_g4_t_v72)) : _g4_s30,
    _g4_s32 = (232u + sizeof(_g4_t_v73)) > _g4_s31 ? (232u + sizeof(_g4_t_v73)) : _g4_s31,
    _g4_s33 = (244u + sizeof(_g4_t_v74)) > _g4_s32 ? (244u + sizeof(_g4_t_v74)) : _g4_s32,
    _g4_s34 = (248u + sizeof(_g4_t_v75)) > _g4_s33 ? (248u + sizeof(_g4_t_v75)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 72u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 84u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 89u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 100u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 104u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 116u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 120u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 121u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 124u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 132u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 136u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 148u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 152u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 164u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 168u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 180u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 184u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 212u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 216u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 217u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 232u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 244u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 248u);

  result = (int)(uintptr_t)(a2);
  v4 = a3;
  if ( a1 != (char *)a2 )
  {
    v5 = *a3;
    v53 = 1;
    v52 = v5;
    v54 = 0;
    v6 = *((uint8_t *)a3 + 4);
    if ( v6 == -1 )
      v7 = a3[2] - 1;
    else
      v7 = v6 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v53, v7);
    v8 = (gameswf::Self *)((char *)a3 + 5);
    if ( *((uint8_t *)a3 + 4) == 0xFF )
      v8 = (gameswf::Self *)a3[4];
    if ( v53 == -1 )
    {
      v9 = v55;
      v10 = v56;
    }
    else
    {
      v9 = (char *)v53;
      v10 = (gameswf::Self *)&v54;
    }
    gameswf::Strcpy_s(v10, v9, v8);
    v45 = a3[5];
    if ( (uint8_t *)(v45 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      v29 = *((uint8_t *)a3 + 4);
      if ( v29 == -1 )
      {
        v30 = a3[4];
        v31 = a3[2] - 1;
      }
      else
      {
        v30 = (int)(uintptr_t)(a3) + 5;
        v31 = v29 - 1;
      }
      v11 = 5381;
      if ( v31 > 0 )
      {
        do
        {
          --v31;
          v32 = 33 * v11;
          v33 = *(uint8_t *)(v30 + v31) + 32;
          if ( (uint8_t)(*(uint8_t *)(v30 + v31) - 65) > 0x19u )
            v33 = *(uint8_t *)(v30 + v31);
          v11 = v32 ^ v33;
        }
        while ( v31 != 0 );
        v4 = a3;
        v11 = v11 << 9 >> 9;
      }
      v4[5] = v11 & 0x7FFFFF | v45 & 0xFF800000;
    }
    else
    {
      v11 = v45 << 9 >> 9;
    }
    v12 = v11 & 0x7FFFFF | v57 & 0xFF800000;
    LOWORD(v57) = v11;
    BYTE2(v57) = BYTE2(v12) & 0x7F;
    HIBYTE(v57) = HIBYTE(v12) | 1;
    _BitScanReverse(&v12, -1431655765 * ((a2 - (const gameswf::ASValue::Self *)a1) >> 2));
    sub_111D530((gameswf::ASValue::Self *)a1, a2, 2 * (31 - (v12 ^ 0x1F)), (int)(uintptr_t)(&v52));
    if ( v53 == -1 && (v57 & 0x1000000) != 0 )
      gameswf::free_internal(v56);
    v13 = *v4;
    v59 = 1;
    v58 = v13;
    v60 = 0;
    v14 = *((uint8_t *)v4 + 4);
    if ( v14 == -1 )
      v15 = v4[2] - 1;
    else
      v15 = v14 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v59, v15);
    v16 = (gameswf::Self *)((char *)v4 + 5);
    if ( *((uint8_t *)v4 + 4) == 0xFF )
      v16 = (gameswf::Self *)v4[4];
    if ( v59 == -1 )
    {
      v17 = v61;
      v18 = v62;
    }
    else
    {
      v17 = (char *)v59;
      v18 = (gameswf::Self *)&v60;
    }
    gameswf::Strcpy_s(v18, v17, v16);
    v46 = v4[5];
    if ( (uint8_t *)(v46 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      v37 = *((uint8_t *)v4 + 4);
      if ( v37 == -1 )
      {
        v38 = v4[4];
        v39 = v4[2] - 1;
      }
      else
      {
        v38 = (int)(uintptr_t)(v4) + 5;
        v39 = v37 - 1;
      }
      v19 = 5381;
      if ( v39 > 0 )
      {
        v44 = v4;
        do
        {
          --v39;
          v40 = 33 * v19;
          v41 = *(uint8_t *)(v38 + v39) + 32;
          if ( (uint8_t)(*(uint8_t *)(v38 + v39) - 65) > 0x19u )
            v41 = *(uint8_t *)(v38 + v39);
          v19 = v40 ^ v41;
        }
        while ( v39 != 0 );
        v4 = v44;
        v19 = v19 << 9 >> 9;
      }
      v4[5] = v19 & 0x7FFFFF | v46 & 0xFF800000;
    }
    else
    {
      v19 = v46 << 9 >> 9;
    }
    v20 = v19 & 0x7FFFFF | v63 & 0xFF800000;
    LOWORD(v63) = v19;
    BYTE2(v63) = BYTE2(v20) & 0x7F;
    HIBYTE(v63) = HIBYTE(v20) | 1;
    if ( a2 - (const gameswf::ASValue::Self *)a1 <= 203 )
    {
      v68 = v58;
      sub_111BC00((int)(uintptr_t)(v69), &v59);
      result = sub_111CD90((int)(uintptr_t)(a1), (char *)a2, (int)(uintptr_t)(&v68));
      if ( LOBYTE(v69[0]) == 0xFF && (HIBYTE(v69[4]) & 1) != 0 )
        result = gameswf::free_internal(v69[3]);
    }
    else
    {
      v74 = v58;
      sub_111BC00((int)(uintptr_t)(v75), &v59);
      v47 = (const gameswf::ASValue::Self *)(a1 + 192);
      sub_111CD90((int)(uintptr_t)(a1), a1 + 192, (int)(uintptr_t)(&v74));
      if ( LOBYTE(v75[0]) == 0xFF && (HIBYTE(v75[4]) & 1) != 0 )
        gameswf::free_internal(v75[3]);
      v70 = v58;
      for ( result = sub_111BC00((int)(uintptr_t)(&v71), &v59); a2 != v47; v47 = (const gameswf::ASValue::Self *)((char *)v47 + 12) )
      {
        LOWORD(v65[0]) = 1;
        v64 = v70;
        if ( v71 == -1 )
          v21 = *(uint32_t *)&v72[3] - 1;
        else
          v21 = v71 - 1;
        gameswf::String::resize((gameswf::String::Self *)v65, v21);
        v22 = (gameswf::Self *)v72;
        if ( v71 == -1 )
          v22 = *(gameswf::Self **)&v72[11];
        if ( LOBYTE(v65[0]) == 0xFF )
        {
          v23 = (char *)v65[1];
          v24 = v66;
        }
        else
        {
          v23 = (char *)SLOBYTE(v65[0]);
          v24 = (gameswf::Self *)((char *)v65 + 1);
        }
        gameswf::Strcpy_s(v24, v23, v22);
        if ( (uint8_t *)(v73 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          if ( v71 == -1 )
          {
            v34 = *(uint8_t **)&v72[11];
            v35 = *(uint32_t *)&v72[3] - 1;
          }
          else
          {
            v34 = v72;
            v35 = v71 - 1;
          }
          v25 = 5381;
          if ( v35 > 0 )
          {
            do
            {
              --v35;
              v48 = 33 * v25;
              v36 = (uint8_t)v34[v35] + 32;
              if ( (uint8_t)(v34[v35] - 65) > 0x19u )
                v36 = (uint8_t)v34[v35];
              v25 = v48 ^ v36;
            }
            while ( v35 != 0 );
            v25 = v25 << 9 >> 9;
          }
          v73 = v25 & 0x7FFFFF | v73 & 0xFF800000;
        }
        else
        {
          v25 = (int)(v73 << 9) >> 9;
        }
        v26 = v25 & 0x7FFFFF | v67 & 0xFF800000;
        v49[0] = 0;
        LOWORD(v67) = v25;
        v49[1] = 0;
        BYTE2(v67) = BYTE2(v26) & 0x7F;
        HIBYTE(v67) = HIBYTE(v26) | 1;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v49, v47);
        v27 = (gameswf::ASValue::Self *)(v47);
        for ( i = (gameswf::ASValue::Self *)((const gameswf::ASValue::Self *)((char *)v47 - 12)); ; i = (gameswf::ASValue::Self *)((char *)i - 12) )
        {
          v42 = v27;
          v50[0] = 0;
          v50[1] = 0;
          v51[0] = 0;
          gameswf::ASValue::getMember((gameswf::ASValue::Self *)v49, v65, (gameswf::ASValue::Self *)v50);
          gameswf::ASValue::getMember(i, v65, (gameswf::ASValue::Self *)v51);
          v43 = gameswf::StandardArraySorter::opCall(&v64, (gameswf::ASValue::Self *)v50, (gameswf::ASValue::Self *)v51);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v51);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v50);
          if ( v43 == 0 )
            break;
          gameswf::ASValue::opAssign(v42, i);
          v27 = i;
        }
        gameswf::ASValue::opAssign(v42, (const gameswf::ASValue::Self *)v49);
        result = gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v49);
        if ( LOBYTE(v65[0]) == 0xFF && (v67 & 0x1000000) != 0 )
          result = gameswf::free_internal(v66);
      }
      if ( v71 == -1 && (v73 & 0x1000000) != 0 )
        result = gameswf::free_internal(*(gameswf::Self **)&v72[11]);
    }
    if ( v59 == -1 && (v63 & 0x1000000) != 0 )
      return gameswf::free_internal(v62);
  }
  return result;
}


