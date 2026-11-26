#include "Core/Utils/DecompTypes.h"
#include "gameswf_LocalConnectionManager.h"

// ----------------------------------------------------------------------------
// Function: gameswf::LocalConnectionManager::send  (binary VA: 0x118c710)
// Original: gameswf::LocalConnectionManager::send
// ----------------------------------------------------------------------------
int gameswf::LocalConnectionManager::send(int a1, char *a2)
{
  char *v2;
  pthread_mutex_t **GlobalMutex;
  char v4;
  int v5;
  gameswf::Self *v6;
  char *v7;
  gameswf::Self *v8;
  int v9;
  char v10;
  int v11;
  gameswf::Self *v12;
  char *v13;
  gameswf::Self *v14;
  int v15;
  uint32_t *v16;
  int v17;
  int v18;
  int v19;
  gameswf::ASValue::Self *v20;
  int v21;
  int v22;
  uint8_t *v23;
  int v24;
  int v25;
  gameswf::ASValue::Self *v26;
  int v27;
  int v28;
  char *v29;
  char *v30;
  int v31;
  char *v32;
  gameswf::Self *v33;
  gameswf::Self *v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  char *v39;
  gameswf::Self *v40;
  gameswf::Self *v41;
  int v42;
  unsigned int v43;
  int v44;
  uint32_t *v45;
  int v46;
  bool v47;
  bool v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  gameswf::ASValue::Self *v54;
  int v55;
  int v56;
  int i;
  uint8_t *v58;
  int v59;
  uint32_t *v60;
  int v61;
  pthread_mutex_t **v62;
  int result;
  int v64;
  int v65;
  int v66;
  gameswf::ASValue::Self *v67;
  gameswf::Self *v68;
  int v69;
  int v70;
  int v71;
  char v72;
  char *v73;
  int v74;
  int v75;
  int v76;
  char *v77;
  int v78;
  int v79;
  int v80;
  int v81;
  gameswf::Self *v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  uint8_t *v88;
  gameswf::Self *v89;
  typedef gameswf::ASValue::Self *_g4_t_v90;
  typedef const gameswf::ASValue::Self *_g4_t_v91;
  typedef const gameswf::ASValue::Self *_g4_t_v92;
  typedef uint32_t *_g4_t_v93;
  typedef uint32_t *_g4_t_v94;
  typedef char *_g4_t_v95;
  typedef char *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef char *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef uint32_t *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef char _g4_t_v105;
  typedef uint8_t _g4_t_v106[3];
  typedef char *_g4_t_v107;
  typedef gameswf::Self *_g4_t_v108;
  typedef unsigned int _g4_t_v109;
  typedef char _g4_t_v110;
  typedef uint8_t _g4_t_v111[3];
  typedef char *_g4_t_v112;
  typedef gameswf::Self *_g4_t_v113;
  typedef int64_t _g4_t_v114 __attribute__((aligned(1)));
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v90)) > _g4_s0 ? (0u + sizeof(_g4_t_v90)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v91)) > _g4_s1 ? (4u + sizeof(_g4_t_v91)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v92)) > _g4_s2 ? (4u + sizeof(_g4_t_v92)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v93)) > _g4_s3 ? (28u + sizeof(_g4_t_v93)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v94)) > _g4_s4 ? (32u + sizeof(_g4_t_v94)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v95)) > _g4_s5 ? (32u + sizeof(_g4_t_v95)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v96)) > _g4_s6 ? (32u + sizeof(_g4_t_v96)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v97)) > _g4_s7 ? (36u + sizeof(_g4_t_v97)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v98)) > _g4_s8 ? (36u + sizeof(_g4_t_v98)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v99)) > _g4_s9 ? (36u + sizeof(_g4_t_v99)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v100)) > _g4_s10 ? (40u + sizeof(_g4_t_v100)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v101)) > _g4_s11 ? (40u + sizeof(_g4_t_v101)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v102)) > _g4_s12 ? (40u + sizeof(_g4_t_v102)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v103)) > _g4_s13 ? (40u + sizeof(_g4_t_v103)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v104)) > _g4_s14 ? (44u + sizeof(_g4_t_v104)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v105)) > _g4_s15 ? (48u + sizeof(_g4_t_v105)) : _g4_s15,
    _g4_s17 = (49u + sizeof(_g4_t_v106)) > _g4_s16 ? (49u + sizeof(_g4_t_v106)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v107)) > _g4_s17 ? (52u + sizeof(_g4_t_v107)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v108)) > _g4_s18 ? (60u + sizeof(_g4_t_v108)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v109)) > _g4_s19 ? (64u + sizeof(_g4_t_v109)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v110)) > _g4_s20 ? (68u + sizeof(_g4_t_v110)) : _g4_s20,
    _g4_s22 = (69u + sizeof(_g4_t_v111)) > _g4_s21 ? (69u + sizeof(_g4_t_v111)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v112)) > _g4_s22 ? (72u + sizeof(_g4_t_v112)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v113)) > _g4_s23 ? (80u + sizeof(_g4_t_v113)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v114)) > _g4_s24 ? (84u + sizeof(_g4_t_v114)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v115)) > _g4_s25 ? (92u + sizeof(_g4_t_v115)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v116)) > _g4_s26 ? (96u + sizeof(_g4_t_v116)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v117)) > _g4_s27 ? (100u + sizeof(_g4_t_v117)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 0u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 4u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 4u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 28u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 32u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 32u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 32u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 36u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 36u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 36u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 40u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 40u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 40u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 40u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 44u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 48u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 49u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 52u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 60u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 64u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 68u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 69u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 72u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 80u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 84u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 92u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 96u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 100u);

  v2 = a2;
  GlobalMutex = (pthread_mutex_t **)gameswf::getGlobalMutex();
  glf::Mutex::Lock(GlobalMutex);
  v105 = 1;
  v106[0] = 0;
  LOWORD(v109) = -1;
  v110 = 1;
  v111[0] = 0;
  HIBYTE(v109) = ((uint16_t)(HIWORD(v109) | 0x7F) >> 8) | 1;
  BYTE2(v109) = 127;
  LOWORD(v114) = -1;
  HIBYTE(v114) = 0;
  BYTE2(v114) = 127;
  *(uint32_t *)((char *)&v114 + 3) = BYTE3(v114) | 1;
  v115 = 0;
  v4 = *a2;
  v116 = 0;
  v117 = 0;
  if ( v4 == -1 )
    v5 = *((uint32_t *)a2 + 1) - 1;
  else
    v5 = v4 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v105, v5);
  v6 = (gameswf::Self *)(a2 + 1);
  if ( *a2 == -1 )
    v6 = *((gameswf::Self **)a2 + 3);
  if ( v105 == -1 )
  {
    v7 = v107;
    v8 = v108;
  }
  else
  {
    v7 = (char *)v105;
    v8 = (gameswf::Self *)v106;
  }
  gameswf::Strcpy_s(v8, v7, v6);
  v100 = *((uint32_t *)a2 + 4);
  if ( (uint8_t *)(v100 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *a2 == -1 )
    {
      v77 = *((char **)a2 + 3);
      v78 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v77 = a2 + 1;
      v78 = *a2 - 1;
    }
    v9 = 5381;
    if ( v78 > 0 )
    {
      do
      {
        --v78;
        v79 = 33 * v9;
        v80 = (uint8_t)v77[v78] + 32;
        if ( (uint8_t)(v77[v78] - 65) > 0x19u )
          v80 = (uint8_t)v77[v78];
        v9 = v79 ^ v80;
      }
      while ( v78 != 0 );
      v2 = a2;
      v9 = v9 << 9 >> 9;
    }
    *((uint32_t *)v2 + 4) = v9 & 0x7FFFFF | v100 & 0xFF800000;
  }
  else
  {
    v9 = v100 << 9 >> 9;
  }
  v109 = v9 & 0x7FFFFF | v109 & 0xFF800000;
  v10 = v2[20];
  if ( v10 == -1 )
    v11 = *((uint32_t *)v2 + 6) - 1;
  else
    v11 = v10 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v110, v11);
  v12 = (gameswf::Self *)(v2 + 21);
  if ( v2[20] == -1 )
    v12 = *((gameswf::Self **)v2 + 8);
  if ( v110 == -1 )
  {
    v13 = v112;
    v14 = v113;
  }
  else
  {
    v13 = (char *)v110;
    v14 = (gameswf::Self *)v111;
  }
  gameswf::Strcpy_s(v14, v13, v12);
  v101 = *((uint32_t *)v2 + 9);
  if ( (uint8_t *)(v101 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v72 = v2[20];
    if ( v72 == -1 )
    {
      v73 = *((char **)v2 + 8);
      v74 = *((uint32_t *)v2 + 6) - 1;
    }
    else
    {
      v73 = v2 + 21;
      v74 = v72 - 1;
    }
    v15 = 5381;
    if ( v74 > 0 )
    {
      v99 = v2;
      do
      {
        --v74;
        v75 = 33 * v15;
        v76 = (uint8_t)v73[v74] + 32;
        if ( (uint8_t)(v73[v74] - 65) > 0x19u )
          v76 = (uint8_t)v73[v74];
        v15 = v75 ^ v76;
      }
      while ( v74 != 0 );
      v2 = v99;
      v15 = v15 << 9 >> 9;
    }
    *((uint32_t *)v2 + 9) = v15 & 0x7FFFFF | v101 & 0xFF800000;
  }
  else
  {
    v15 = v101 << 9 >> 9;
  }
  LODWORD(v114) = v15 & 0x7FFFFF | v114 & 0xFF800000;
  v16 = (uint32_t *)(v2 + 40);
  v17 = *((uint32_t *)v2 + 11);
  v18 = v115;
  v102 = v16;
  if ( v17 < v115 )
  {
    v104 = v115;
    v97 = v17;
    v19 = 12 * v17;
    do
    {
      ++v17;
      v20 = (gameswf::ASValue::Self *)(v19 + HIDWORD(v114));
      v19 += 12;
      gameswf::ASValue::dropRefs(v20);
    }
    while ( v17 != v104 );
    v18 = v104;
    v17 = v97;
  }
  if ( v17 != 0 )
  {
    v21 = v116;
    if ( v17 > v116 && v117 == 0 )
    {
      v86 = v17 + (v17 >> 1);
      v116 = v86;
      if ( v86 != 0 )
      {
        if ( HIDWORD(v114) != 0 )
          HIDWORD(v114) = (uint32_t)(uintptr_t)(gameswf::realloc_internal((gameswf::Self *)HIDWORD(v114), 12 * v86, 12 * v21));
        else
          HIDWORD(v114) = gameswf::malloc_internal(12 * v86);
      }
      else
      {
        if ( HIDWORD(v114) != 0 )
          gameswf::free_internal((gameswf::Self *)HIDWORD(v114));
        HIDWORD(v114) = 0;
      }
    }
  }
  v22 = 12 * v18;
  if ( v17 > v18 )
  {
    do
    {
      v23 = (uint8_t *)(HIDWORD(v114) + v22);
      if ( HIDWORD(v114) + v22 != 0 )
      {
        *v23 = 0;
        v23[1] = 0;
      }
      ++v18;
      v22 += 12;
    }
    while ( v18 != v17 );
  }
  v115 = v17;
  if ( v17 > 0 )
  {
    v24 = 0;
    v25 = 0;
    do
    {
      ++v25;
      v91 = (const gameswf::ASValue::Self *)(*v102 + v24);
      v26 = (gameswf::ASValue::Self *)(v24 + HIDWORD(v114));
      v24 += 12;
      gameswf::ASValue::opAssign(v26, v91);
    }
    while ( v25 < v115 );
  }
  v27 = *(uint32_t *)(a1 + 20);
  v28 = *(uint32_t *)(a1 + 24);
  v98 = v27 + 1;
  if ( v27 + 1 <= v28 || *(uint32_t *)(a1 + 28) != 0 )
  {
    v29 = *(char **)(a1 + 16);
  }
  else
  {
    v81 = v98 + (v98 >> 1);
    *(uint32_t *)(a1 + 24) = v81;
    if ( v81 != 0 )
    {
      if ( *(uint32_t *)(a1 + 16) != 0 )
        v29 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(a1 + 16), 56 * v81, 56 * v28);
      else
        v29 = (char *)gameswf::malloc_internal(56 * v81);
      *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v29);
      v27 = *(uint32_t *)(a1 + 20);
    }
    else
    {
      if ( *(uint32_t *)(a1 + 16) != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)(a1 + 16));
        v27 = *(uint32_t *)(a1 + 20);
      }
      v29 = nullptr;
      *(uint32_t *)(a1 + 16) = 0;
    }
  }
  v30 = &v29[56 * v27];
  if ( v30 != nullptr )
  {
    *v30 = 1;
    v30[1] = 0;
    if ( v105 == -1 )
      v31 = (int)(uintptr_t)(v107 - 1);
    else
      v31 = v105 - 1;
    gameswf::String::resize((gameswf::String::Self *)v30, v31);
    LOBYTE(v32) = *v30;
    v33 = (gameswf::Self *)v106;
    if ( v105 == -1 )
      v33 = v108;
    if ( (uint8_t)(uintptr_t)v32 == 0xFF )
    {
      v32 = *((char **)v30 + 1);
      v34 = *((gameswf::Self **)v30 + 3);
    }
    else
    {
      v32 = (char *)(char)(uintptr_t)v32;
      v34 = (gameswf::Self *)(v30 + 1);
    }
    gameswf::Strcpy_s(v34, v32, v33);
    if ( (uint8_t *)(v109 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( v105 == -1 )
      {
        v68 = v108;
        v69 = (int)(uintptr_t)(v107 - 1);
      }
      else
      {
        v68 = (gameswf::Self *)v106;
        v69 = v105 - 1;
      }
      v35 = 5381;
      if ( v69 > 0 )
      {
        v95 = v30;
        do
        {
          --v69;
          v70 = 33 * v35;
          v71 = *((uint8_t *)v68 + v69) + 32;
          if ( (uint8_t)(*((uint8_t *)v68 + v69) - 65) > 0x19u )
            v71 = *((uint8_t *)v68 + v69);
          v35 = v70 ^ v71;
        }
        while ( v69 != 0 );
        v30 = v95;
        v35 = v35 << 9 >> 9;
      }
      v109 = v35 & 0x7FFFFF | v109 & 0xFF800000;
    }
    else
    {
      v35 = (int)(v109 << 9) >> 9;
    }
    v36 = *((uint32_t *)v30 + 4) & 0xFF800000;
    v30[20] = 1;
    v37 = v35 & 0x7FFFFF | v36;
    v30[21] = 0;
    *((uint32_t *)v30 + 4) = v37;
    v30[18] = BYTE2(v37) & 0x7F;
    v30[19] = HIBYTE(v37) | 1;
    if ( v110 == -1 )
      v38 = (int)(uintptr_t)(v112 - 1);
    else
      v38 = v110 - 1;
    gameswf::String::resize((gameswf::String::Self *)(v30 + 20), v38);
    LOBYTE(v39) = v30[20];
    v40 = (gameswf::Self *)v111;
    if ( v110 == -1 )
      v40 = v113;
    if ( (uint8_t)(uintptr_t)v39 == 0xFF )
    {
      v39 = *((char **)v30 + 6);
      v41 = *((gameswf::Self **)v30 + 8);
    }
    else
    {
      v39 = (char *)(char)(uintptr_t)v39;
      v41 = (gameswf::Self *)(v30 + 21);
    }
    gameswf::Strcpy_s(v41, v39, v40);
    if ( (uint8_t *)(v114 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( v110 == -1 )
      {
        v82 = v113;
        v83 = (int)(uintptr_t)(v112 - 1);
      }
      else
      {
        v82 = (gameswf::Self *)v111;
        v83 = v110 - 1;
      }
      v42 = 5381;
      if ( v83 > 0 )
      {
        v96 = v30;
        do
        {
          --v83;
          v84 = 33 * v42;
          v85 = *((uint8_t *)v82 + v83) + 32;
          if ( (uint8_t)(*((uint8_t *)v82 + v83) - 65) > 0x19u )
            v85 = *((uint8_t *)v82 + v83);
          v42 = v84 ^ v85;
        }
        while ( v83 != 0 );
        v30 = v96;
        v42 = v42 << 9 >> 9;
      }
      LODWORD(v114) = v42 & 0x7FFFFF | v114 & 0xFF800000;
    }
    else
    {
      v42 = (int)((uint32_t)v114 << 9) >> 9;
    }
    v43 = *((uint32_t *)v30 + 9) & 0xFF800000;
    *((uint32_t *)v30 + 10) = 0;
    v44 = v42 & 0x7FFFFF | v43;
    *((uint32_t *)v30 + 11) = 0;
    *((uint32_t *)v30 + 9) = v44;
    v45 = (uint32_t *)(v30 + 40);
    v30[38] = BYTE2(v44) & 0x7F;
    v30[39] = HIBYTE(v44) | 1;
    v46 = v115;
    v47 = v115 == 0;
    v48 = v115 < 0;
    *((uint32_t *)v30 + 12) = 0;
    *((uint32_t *)v30 + 13) = 0;
    v103 = v46;
    if ( v48 )
    {
      v49 = v46;
      v104 = (int)(uintptr_t)(v30);
      v94 = (uint32_t *)(v30 + 40);
      v50 = 12 * v46;
      v51 = 0;
      v52 = v50;
      v53 = v49;
      while ( 1 )
      {
        v54 = (gameswf::ASValue::Self *)(v52 + v51);
        v52 += 12;
        gameswf::ASValue::dropRefs(v54);
        if ( ++v53 == 0 )
          break;
        v51 = *(uint32_t *)(v104 + 40);
      }
      v30 = (char *)v104;
      v45 = v94;
    }
    else if ( v47 )
    {
      *((uint32_t *)v30 + 11) = 0;
      goto LABEL_62;
    }
    v55 = *((uint32_t *)v30 + 12);
    if ( v103 > v55 && *((uint32_t *)v30 + 13) == 0 )
    {
      v87 = v103 + (v103 >> 1);
      *((uint32_t *)v30 + 12) = v87;
      if ( v87 != 0 )
      {
        v89 = *((gameswf::Self **)v30 + 10);
        if ( v89 != nullptr )
          *((uint32_t *)v30 + 10) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v89, 12 * v87, 12 * v55));
        else
          *((uint32_t *)v30 + 10) = gameswf::malloc_internal(12 * v87);
      }
      else
      {
        if ( *((uint32_t *)v30 + 10) != 0 )
          gameswf::free_internal(*((gameswf::Self **)v30 + 10));
        *((uint32_t *)v30 + 10) = 0;
      }
    }
    if ( v103 <= 0 )
    {
      *((uint32_t *)v30 + 11) = v103;
    }
    else
    {
      v104 = (int)(uintptr_t)(v30);
      v56 = 0;
      for ( i = 0; i != v103; ++i )
      {
        v58 = (uint8_t *)(*v45 + v56);
        if ( v58 != nullptr )
        {
          *v58 = 0;
          v58[1] = 0;
        }
        v56 += 12;
      }
      *(uint32_t *)(v104 + 44) = i;
      v59 = 0;
      v60 = v45;
      v61 = 0;
      do
      {
        ++v61;
        v92 = (const gameswf::ASValue::Self *)(v59 + HIDWORD(v114));
        v93 = v60;
        v90 = (gameswf::ASValue::Self *)(v59 + *v60);
        v59 += 12;
        gameswf::ASValue::opAssign(v90, v92);
        v60 = v93;
      }
      while ( v61 < v93[1] );
    }
  }
LABEL_62:
  *(uint32_t *)(a1 + 20) = v98;
  v62 = (pthread_mutex_t **)gameswf::getGlobalMutex();
  result = glf::Mutex::Unlock(v62);
  v64 = v115;
  if ( v115 <= 0 )
  {
    if ( v115 < 0 )
    {
      result = 12 * v115;
      do
      {
        v88 = (uint8_t *)(HIDWORD(v114) + result);
        if ( HIDWORD(v114) + result != 0 )
        {
          *v88 = 0;
          v88[1] = 0;
        }
        result += 12;
        ++v64;
      }
      while ( v64 != 0 );
    }
  }
  else
  {
    v104 = v115;
    v65 = 0;
    v66 = 0;
    do
    {
      ++v65;
      v67 = (gameswf::ASValue::Self *)(v66 + HIDWORD(v114));
      v66 += 12;
      result = gameswf::ASValue::dropRefs(v67);
    }
    while ( v65 != v104 );
  }
  v115 = 0;
  if ( v117 == 0 )
  {
    result = HIDWORD(v114);
    v116 = 0;
    if ( HIDWORD(v114) != 0 )
      result = gameswf::free_internal((gameswf::Self *)HIDWORD(v114));
    HIDWORD(v114) = 0;
  }
  if ( v110 == -1 && (v114 & 0x1000000) != 0 )
  {
    result = gameswf::free_internal(v113);
    if ( v105 != -1 )
      return result;
  }
  else if ( v105 != -1 )
  {
    return result;
  }
  if ( (v109 & 0x1000000) != 0 )
    return gameswf::free_internal(v108);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::LocalConnectionManager::update  (binary VA: 0x118d1b0)
// Original: gameswf::LocalConnectionManager::update
// ----------------------------------------------------------------------------
int gameswf::LocalConnectionManager::update(gameswf::LocalConnectionManager::Self *self, gameswf::Player::Self *a2)
{
  pthread_mutex_t **GlobalMutex;
  int v3;
  int v4;
  const char *v5;
  gameswf::RefCounted::Self *v6;
  const char *v7;
  char v8;
  int v9;
  gameswf::Self *v10;
  char *v11;
  gameswf::Self *v12;
  int v13;
  unsigned int v14;
  int StandardMemberID;
  char v16;
  bool v17;
  gameswf::Self *WeakProxy;
  gameswf::Self *v19;
  bool v20;
  gameswf::ASValue::Self *v21;
  int v22;
  int v23;
  gameswf::Self *v24;
  gameswf::ASValue::Self *v25;
  int v26;
  char *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  gameswf::ASValue::Self *v33;
  int v34;
  int v35;
  int v36;
  gameswf::ASValue::Self *v37;
  gameswf::Self *v38;
  gameswf::ASValue::Self *v39;
  gameswf::Self **v40;
  gameswf::ASValue::Self *v41;
  char v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  gameswf::Self *v52;
  pthread_mutex_t **v53;
  int v55;
  char *v56;
  int v57;
  char *v58;
  int v59;
  uint8_t *v60;
  int v61;
  uint8_t *v62;
  typedef gameswf::Self *_g4_t_v63;
  typedef gameswf::ASValue::Self *_g4_t_v64;
  typedef gameswf::ASValue::Self *_g4_t_v65;
  typedef gameswf::ASValue::Self *_g4_t_v66;
  typedef bool _g4_t_v67;
  typedef gameswf::ASValue::Self *_g4_t_v68;
  typedef gameswf::ASValue::Self *_g4_t_v69;
  typedef gameswf::RefCounted::Self *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef gameswf::Player::Self *_g4_t_v73;
  typedef gameswf::RefCounted::Self *_g4_t_v74;
  typedef gameswf::ASValue::Self *_g4_t_v75;
  typedef gameswf::ASValue::Self *_g4_t_v76;
  typedef gameswf::Self *_g4_t_v77;
  typedef gameswf::Self *_g4_t_v78;
  typedef gameswf::LocalConnectionManager::Self *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_i;
  typedef char *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef uint8_t _g4_t_v92[4];
  typedef gameswf::RefCounted::Self *_g4_t_v93;
  typedef unsigned int _g4_t_v94[3];
  typedef uint8_t _g4_t_v95[12];
  typedef char _g4_t_v96;
  typedef char _g4_t_v97;
  typedef char *_g4_t_v98;
  typedef gameswf::Self *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef gameswf::Self *_g4_t_v101;
  typedef int _g4_t_v102;
  typedef gameswf::Self *_g4_t_v103;
  typedef int _g4_t_v104;
  typedef uint8_t _g4_t_v105[12];
  typedef uint8_t _g4_t_v106[12];
  typedef uint8_t _g4_t_v107[12];
  typedef uint8_t _g4_t_v108[12];
  typedef gameswf::Self *_g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef gameswf::RefCounted::Self *_g4_t_v113;
  typedef uint8_t _g4_t_v114[12];
  typedef gameswf::Self *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef gameswf::Self *_g4_t_v119;
  typedef gameswf::Player::Self *_g4_t_v120;
  typedef gameswf::LocalConnectionManager::Self **_g4_t_v121;
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (0u + sizeof(_g4_t_v63)) > _g4_s0 ? (0u + sizeof(_g4_t_v63)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v64)) > _g4_s1 ? (4u + sizeof(_g4_t_v64)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v65)) > _g4_s2 ? (4u + sizeof(_g4_t_v65)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v66)) > _g4_s3 ? (4u + sizeof(_g4_t_v66)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v67)) > _g4_s4 ? (4u + sizeof(_g4_t_v67)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v68)) > _g4_s5 ? (4u + sizeof(_g4_t_v68)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v69)) > _g4_s6 ? (4u + sizeof(_g4_t_v69)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v70)) > _g4_s7 ? (12u + sizeof(_g4_t_v70)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v71)) > _g4_s8 ? (16u + sizeof(_g4_t_v71)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v72)) > _g4_s9 ? (20u + sizeof(_g4_t_v72)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v73)) > _g4_s10 ? (24u + sizeof(_g4_t_v73)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v74)) > _g4_s11 ? (24u + sizeof(_g4_t_v74)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v75)) > _g4_s12 ? (28u + sizeof(_g4_t_v75)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v76)) > _g4_s13 ? (28u + sizeof(_g4_t_v76)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v77)) > _g4_s14 ? (32u + sizeof(_g4_t_v77)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v78)) > _g4_s15 ? (32u + sizeof(_g4_t_v78)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v79)) > _g4_s16 ? (36u + sizeof(_g4_t_v79)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v80)) > _g4_s17 ? (40u + sizeof(_g4_t_v80)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v81)) > _g4_s18 ? (40u + sizeof(_g4_t_v81)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v82)) > _g4_s19 ? (40u + sizeof(_g4_t_v82)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v83)) > _g4_s20 ? (40u + sizeof(_g4_t_v83)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_i)) > _g4_s21 ? (44u + sizeof(_g4_t_i)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v85)) > _g4_s22 ? (44u + sizeof(_g4_t_v85)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v86)) > _g4_s23 ? (48u + sizeof(_g4_t_v86)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v87)) > _g4_s24 ? (48u + sizeof(_g4_t_v87)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v88)) > _g4_s25 ? (52u + sizeof(_g4_t_v88)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v89)) > _g4_s26 ? (52u + sizeof(_g4_t_v89)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v90)) > _g4_s27 ? (52u + sizeof(_g4_t_v90)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v91)) > _g4_s28 ? (52u + sizeof(_g4_t_v91)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v92)) > _g4_s29 ? (56u + sizeof(_g4_t_v92)) : _g4_s29,
    _g4_s31 = (60u + sizeof(_g4_t_v93)) > _g4_s30 ? (60u + sizeof(_g4_t_v93)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v94)) > _g4_s31 ? (80u + sizeof(_g4_t_v94)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v95)) > _g4_s32 ? (92u + sizeof(_g4_t_v95)) : _g4_s32,
    _g4_s34 = (104u + sizeof(_g4_t_v96)) > _g4_s33 ? (104u + sizeof(_g4_t_v96)) : _g4_s33,
    _g4_s35 = (105u + sizeof(_g4_t_v97)) > _g4_s34 ? (105u + sizeof(_g4_t_v97)) : _g4_s34,
    _g4_s36 = (108u + sizeof(_g4_t_v98)) > _g4_s35 ? (108u + sizeof(_g4_t_v98)) : _g4_s35,
    _g4_s37 = (116u + sizeof(_g4_t_v99)) > _g4_s36 ? (116u + sizeof(_g4_t_v99)) : _g4_s36,
    _g4_s38 = (120u + sizeof(_g4_t_v100)) > _g4_s37 ? (120u + sizeof(_g4_t_v100)) : _g4_s37,
    _g4_s39 = (136u + sizeof(_g4_t_v101)) > _g4_s38 ? (136u + sizeof(_g4_t_v101)) : _g4_s38,
    _g4_s40 = (140u + sizeof(_g4_t_v102)) > _g4_s39 ? (140u + sizeof(_g4_t_v102)) : _g4_s39,
    _g4_s41 = (144u + sizeof(_g4_t_v103)) > _g4_s40 ? (144u + sizeof(_g4_t_v103)) : _g4_s40,
    _g4_s42 = (148u + sizeof(_g4_t_v104)) > _g4_s41 ? (148u + sizeof(_g4_t_v104)) : _g4_s41,
    _g4_s43 = (248u + sizeof(_g4_t_v105)) > _g4_s42 ? (248u + sizeof(_g4_t_v105)) : _g4_s42,
    _g4_s44 = (260u + sizeof(_g4_t_v106)) > _g4_s43 ? (260u + sizeof(_g4_t_v106)) : _g4_s43,
    _g4_s45 = (272u + sizeof(_g4_t_v107)) > _g4_s44 ? (272u + sizeof(_g4_t_v107)) : _g4_s44,
    _g4_s46 = (284u + sizeof(_g4_t_v108)) > _g4_s45 ? (284u + sizeof(_g4_t_v108)) : _g4_s45,
    _g4_s47 = (296u + sizeof(_g4_t_v109)) > _g4_s46 ? (296u + sizeof(_g4_t_v109)) : _g4_s46,
    _g4_s48 = (300u + sizeof(_g4_t_v110)) > _g4_s47 ? (300u + sizeof(_g4_t_v110)) : _g4_s47,
    _g4_s49 = (304u + sizeof(_g4_t_v111)) > _g4_s48 ? (304u + sizeof(_g4_t_v111)) : _g4_s48,
    _g4_s50 = (308u + sizeof(_g4_t_v112)) > _g4_s49 ? (308u + sizeof(_g4_t_v112)) : _g4_s49,
    _g4_s51 = (312u + sizeof(_g4_t_v113)) > _g4_s50 ? (312u + sizeof(_g4_t_v113)) : _g4_s50,
    _g4_s52 = (316u + sizeof(_g4_t_v114)) > _g4_s51 ? (316u + sizeof(_g4_t_v114)) : _g4_s51,
    _g4_s53 = (328u + sizeof(_g4_t_v115)) > _g4_s52 ? (328u + sizeof(_g4_t_v115)) : _g4_s52,
    _g4_s54 = (332u + sizeof(_g4_t_v116)) > _g4_s53 ? (332u + sizeof(_g4_t_v116)) : _g4_s53,
    _g4_s55 = (336u + sizeof(_g4_t_v117)) > _g4_s54 ? (336u + sizeof(_g4_t_v117)) : _g4_s54,
    _g4_s56 = (340u + sizeof(_g4_t_v118)) > _g4_s55 ? (340u + sizeof(_g4_t_v118)) : _g4_s55,
    _g4_s57 = (344u + sizeof(_g4_t_v119)) > _g4_s56 ? (344u + sizeof(_g4_t_v119)) : _g4_s56,
    _g4_s58 = (348u + sizeof(_g4_t_v120)) > _g4_s57 ? (348u + sizeof(_g4_t_v120)) : _g4_s57,
    _g4_s59 = (368u + sizeof(_g4_t_v121)) > _g4_s58 ? (368u + sizeof(_g4_t_v121)) : _g4_s58
  };
  alignas(16) uint8_t _g4_sf[_g4_s59];
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 0u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 4u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 4u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 4u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 4u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 4u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 4u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 12u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 16u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 20u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 24u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 24u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 28u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 28u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 32u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 32u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 36u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 40u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 40u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 40u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 40u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 44u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 44u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 48u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 48u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 52u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 52u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 52u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 52u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 56u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 60u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 80u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 92u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 104u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 105u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 108u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 116u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 120u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 136u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 140u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 144u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 148u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 248u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 260u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 272u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 284u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 296u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 300u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 304u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 308u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 312u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 316u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 328u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 332u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 336u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 340u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 344u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 348u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 368u);

  v121 = &self;
  v79 = self;
  v73 = a2;
  GlobalMutex = (pthread_mutex_t **)gameswf::getGlobalMutex();
  glf::Mutex::Lock(GlobalMutex);
  v80 = *((uint32_t *)v79 + 5);
  if ( v80 <= 0 )
  {
    v76 = (gameswf::ASValue::Self *)((gameswf::LocalConnectionManager::Self *)((char *)v79 + 16));
    goto LABEL_141;
  }
  v71 = 0;
  v72 = 0;
  v3 = *((uint32_t *)v79 + 1);
  v4 = *((uint32_t *)v79 + 5);
  do
  {
    v86 = *((uint32_t *)v79 + 4) + v71;
    if ( v3 <= 0 )
      goto LABEL_99;
    for ( i = 0; i < v3; ++i )
    {
      v6 = *(gameswf::RefCounted::Self **)(*(uint32_t *)v79 + 4 * i);
      if ( (gameswf::RefCounted::Self *)v86 == (gameswf::RefCounted::Self *)((char *)v6 + 40) )
        goto LABEL_12;
      v7 = (const char *)(v86 + 1);
      if ( *(uint8_t *)v86 == 0xFF )
      {
        v7 = *(const char **)(v86 + 12);
        v5 = (char *)v6 + 41;
        if ( *((uint8_t *)v6 + 40) != 0xFF )
        {
LABEL_6:
          if ( strcmp(v5, v7) != 0 )
            goto LABEL_7;
          goto LABEL_12;
        }
      }
      else
      {
        v5 = (char *)v6 + 41;
        if ( *((uint8_t *)v6 + 40) != 0xFF )
          goto LABEL_6;
      }
      if ( strcmp(*((const char **)v6 + 13), v7) != 0 )
        goto LABEL_7;
LABEL_12:
      LOWORD(v94[0]) = 0;
      v96 = 1;
      v97 = 0;
      v8 = *(uint8_t *)(v86 + 20);
      if ( v8 == -1 )
        v9 = *(uint32_t *)(v86 + 24) - 1;
      else
        v9 = v8 - 1;
      gameswf::String::resize((gameswf::String::Self *)&v96, v9);
      if ( *(uint8_t *)(v86 + 20) == 0xFF )
        v10 = *(gameswf::Self **)(v86 + 32);
      else
        v10 = (gameswf::Self *)(v86 + 21);
      if ( v96 == -1 )
      {
        v11 = v98;
        v12 = v99;
      }
      else
      {
        v11 = (char *)v96;
        v12 = (gameswf::Self *)&v97;
      }
      gameswf::Strcpy_s(v12, v11, v10);
      v81 = *(uint32_t *)(v86 + 36);
      if ( (uint8_t *)(v81 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        v42 = *(uint8_t *)(v86 + 20);
        if ( v42 == -1 )
        {
          v44 = *(uint32_t *)(v86 + 32);
          v43 = *(uint32_t *)(v86 + 24) - 1;
        }
        else
        {
          v43 = v42 - 1;
          v44 = v86 + 21;
        }
        v13 = 5381;
        if ( v43 > 0 )
        {
          v75 = (gameswf::ASValue::Self *)(v6);
          do
          {
            --v43;
            v45 = 33 * v13;
            v46 = *(uint8_t *)(v44 + v43) + 32;
            if ( (uint8_t)(*(uint8_t *)(v44 + v43) - 65) > 0x19u )
              v46 = *(uint8_t *)(v44 + v43);
            v13 = v45 ^ v46;
          }
          while ( v43 != 0 );
          v6 = (gameswf::RefCounted::Self *)(v75);
          v13 = v13 << 9 >> 9;
        }
        *(uint32_t *)(v86 + 36) = v13 & 0x7FFFFF | v81 & 0xFF800000;
      }
      else
      {
        v13 = v81 << 9 >> 9;
      }
      v14 = v13 & 0x7FFFFF | v100 & 0xFF800000;
      LOWORD(v100) = v13;
      BYTE2(v100) = BYTE2(v14) & 0x7F;
      HIBYTE(v100) = HIBYTE(v14) | 1;
      StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v96);
      if ( StandardMemberID != -1
        && G4_VCALL<uint8_t>(v6, 36, StandardMemberID, v94) != 0
        || (v16 = G4_VCALL<int>(v6, 44, &v96, v94),
            v17 = false,
            v16 != 0) )
      {
        v17 = (uint8_t)gameswf::ASValue::isFunction((gameswf::ASValue::Self *)v94) != 0;
        if ( v96 == -1 )
        {
LABEL_72:
          if ( (v100 & 0x1000000) != 0 )
          {
            v67 = v17;
            gameswf::free_internal(v99);
            v17 = v67;
          }
        }
      }
      else if ( v96 == -1 )
      {
        goto LABEL_72;
      }
      if ( v17 )
      {
        v101 = nullptr;
        v102 = 0;
        v103 = nullptr;
        v104 = 0;
        v105[0] = 0;
        v105[1] = 0;
        v106[0] = 0;
        v106[1] = 0;
        v107[0] = 0;
        v107[1] = 0;
        v108[0] = 0;
        v108[1] = 0;
        v109 = nullptr;
        v110 = 0;
        v111 = 0;
        v112 = 0;
        v113 = nullptr;
        v114[0] = 0;
        v114[1] = 0;
        v115 = nullptr;
        v116 = 0;
        v117 = 0;
        v118 = 0;
        v119 = nullptr;
        v120 = v73;
        if ( v73 != nullptr )
        {
          WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v73);
          v19 = v119;
          if ( WeakProxy != v119 )
          {
            if ( v119 != nullptr )
            {
              v20 = (*(uint16_t *)v119)-- == 1;
              if ( v20 )
              {
                v64 = (gameswf::ASValue::Self *)(WeakProxy);
                gameswf::free_internal(v19);
                WeakProxy = (gameswf::Self *)(v64);
              }
            }
            v119 = WeakProxy;
            if ( WeakProxy != nullptr )
              ++*(uint16_t *)WeakProxy;
          }
        }
        v82 = *(uint32_t *)(v86 + 44);
        if ( v82 > 0 )
        {
          v21 = nullptr;
          v70 = v6;
          v22 = v102;
          v23 = 0;
          while ( 1 )
          {
            v63 = v103;
            v88 = *(uint32_t *)(v86 + 40);
            v26 = v22 + 1;
            if ( v22 + 1 <= (int)(uintptr_t)(v103) || v104 != 0 )
            {
              v24 = v101;
            }
            else
            {
              v77 = (gameswf::Self *)(v26 + (v26 >> 1));
              v103 = v77;
              if ( v77 != nullptr )
              {
                v69 = v21;
                v24 = v101 != nullptr
                    ? (gameswf::Self *)gameswf::realloc_internal(v101, 12 * (uint32_t)(uintptr_t)(v77), 12 * (uint32_t)(uintptr_t)(v63))
                    : (gameswf::Self *)gameswf::malloc_internal(12 * (uint32_t)(uintptr_t)(v77));
                v101 = v24;
                v22 = v102;
                v21 = v69;
              }
              else
              {
                if ( v101 != nullptr )
                {
                  v66 = v21;
                  gameswf::free_internal(v101);
                  v22 = v102;
                  v21 = v66;
                }
                v101 = nullptr;
                v24 = nullptr;
              }
            }
            v25 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v24 + 12 * v22));
            if ( v25 != nullptr )
            {
              *(uint8_t *)v25 = 0;
              *((uint8_t *)v25 + 1) = 0;
              v65 = v21;
              gameswf::ASValue::opAssign(v25, (gameswf::ASValue::Self *)((char *)v21 + v88));
              v21 = v65;
            }
            ++v23;
            v21 = (gameswf::ASValue::Self *)((char *)v21 + 12);
            v102 = v26;
            if ( v23 == v82 )
              break;
            v22 = v26;
          }
          v6 = v70;
        }
        v92[0] = 5;
        v92[1] = 0;
        v93 = v6;
        if ( v6 != nullptr )
          gameswf::RefCounted::addRef(v6);
        gameswf::call_method(
          (gameswf::Self *)v95,
          (const gameswf::ASValue::Self *)v94,
          (gameswf::ASEnvironment::Self *)&v101,
          (const gameswf::ASValue::Self *)v92,
          v82,
          v102 - 1,
          "localConnection");
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v95);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v92);
        v38 = v119;
        if ( v119 != nullptr )
        {
          v20 = (*(uint16_t *)v119)-- == 1;
          if ( v20 )
            gameswf::free_internal(v38);
        }
        v29 = v116;
        if ( v116 <= 0 )
        {
          if ( v116 < 0 )
          {
            v83 = 32 * v116;
            do
            {
              v27 = (char *)v115 + v83;
              if ( (gameswf::Self *)((char *)v115 + v83) != nullptr )
              {
                v28 = *((uint32_t *)v27 + 4);
                *v27 = 1;
                v28 |= 0x7FFFFFu;
                v27[1] = 0;
                *((uint32_t *)v27 + 4) = v28;
                v27[20] = 0;
                v27[18] = BYTE2(v28) & 0x7F;
                v27[19] = HIBYTE(v28) | 1;
                v27[21] = 0;
              }
              v83 += 32;
              ++v29;
            }
            while ( v29 != 0 );
          }
        }
        else
        {
          v39 = nullptr;
          v91 = v116;
          do
          {
            v40 = (gameswf::Self **)((char *)v115 + 32 * (uint32_t)(uintptr_t)(v39));
            v68 = v39;
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v40 + 5));
            v41 = v68;
            if ( *(uint8_t *)v40 == 0xFF && (*((uint8_t *)v40 + 19) & 1) != 0 )
            {
              gameswf::free_internal(v40[3]);
              v41 = v68;
            }
            v39 = (gameswf::ASValue::Self *)((char *)v41 + 1);
          }
          while ( v39 != (gameswf::ASValue::Self *)v91 );
        }
        v116 = 0;
        if ( v118 == 0 )
        {
          v117 = 0;
          if ( v115 != nullptr )
            gameswf::free_internal(v115);
          v115 = nullptr;
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v114);
        if ( v113 != nullptr )
          gameswf::RefCounted::dropRef(v113);
        v30 = v110;
        if ( v110 <= 0 )
        {
          if ( v110 < 0 )
          {
            v57 = 12 * v110;
            do
            {
              v58 = (char *)v109 + v57;
              if ( (gameswf::Self *)((char *)v109 + v57) != nullptr )
              {
                *v58 = 0;
                v58[1] = 0;
              }
              v57 += 12;
              ++v30;
            }
            while ( v30 != 0 );
          }
        }
        else
        {
          v89 = v110;
          v31 = 0;
          v32 = 0;
          do
          {
            ++v31;
            v33 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v109 + v32));
            v32 += 12;
            gameswf::ASValue::dropRefs(v33);
          }
          while ( v31 != v89 );
        }
        v110 = 0;
        if ( v112 == 0 )
        {
          v111 = 0;
          if ( v109 != nullptr )
            gameswf::free_internal(v109);
          v109 = nullptr;
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v108);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v107);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v106);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v105);
        v34 = v102;
        if ( v102 <= 0 )
        {
          if ( v102 < 0 )
          {
            v55 = 12 * v102;
            do
            {
              v56 = (char *)v101 + v55;
              if ( (gameswf::Self *)((char *)v101 + v55) != nullptr )
              {
                *v56 = 0;
                v56[1] = 0;
              }
              v55 += 12;
              ++v34;
            }
            while ( v34 != 0 );
          }
        }
        else
        {
          v90 = v102;
          v35 = 0;
          v36 = 0;
          do
          {
            ++v35;
            v37 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v101 + v36));
            v36 += 12;
            gameswf::ASValue::dropRefs(v37);
          }
          while ( v35 != v90 );
        }
        v102 = 0;
        if ( v104 == 0 )
        {
          v103 = nullptr;
          if ( v101 != nullptr )
            gameswf::free_internal(v101);
          v101 = nullptr;
        }
      }
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v94);
LABEL_7:
      v3 = *((uint32_t *)v79 + 1);
    }
    v4 = *((uint32_t *)v79 + 5);
LABEL_99:
    ++v72;
    v71 += 56;
  }
  while ( v72 < v4 );
  v80 = v4;
  v76 = (gameswf::ASValue::Self *)((gameswf::LocalConnectionManager::Self *)((char *)v79 + 16));
  if ( v4 > 0 )
  {
    v78 = nullptr;
    v74 = nullptr;
    do
    {
      v85 = (char *)v78 + *(uint32_t *)v76;
      v47 = *((uint32_t *)v85 + 11);
      if ( v47 <= 0 )
      {
        if ( v47 < 0 )
        {
          v59 = 12 * v47;
          do
          {
            v60 = (uint8_t *)(*((uint32_t *)v85 + 10) + v59);
            if ( v60 != nullptr )
            {
              *v60 = 0;
              v60[1] = 0;
            }
            v59 += 12;
            ++v47;
          }
          while ( v47 != 0 );
        }
      }
      else
      {
        v87 = *((uint32_t *)v85 + 11);
        v48 = 0;
        v49 = 0;
        do
        {
          v50 = v48;
          ++v49;
          v48 += 12;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(*((uint32_t *)v85 + 10) + v50));
        }
        while ( v49 != v87 );
      }
      v51 = *((uint32_t *)v85 + 13);
      *((uint32_t *)v85 + 11) = 0;
      if ( v51 == 0 )
      {
        v52 = *((gameswf::Self **)v85 + 10);
        *((uint32_t *)v85 + 12) = 0;
        if ( v52 != nullptr )
          gameswf::free_internal(v52);
        *((uint32_t *)v85 + 10) = 0;
      }
      if ( v85[20] == -1 && (v85[39] & 1) != 0 )
        gameswf::free_internal(*((gameswf::Self **)v85 + 8));
      if ( *v85 == -1 && (v85[19] & 1) != 0 )
        gameswf::free_internal(*((gameswf::Self **)v85 + 3));
      v74 = (gameswf::RefCounted::Self *)((char *)v74 + 1);
      v78 = (gameswf::Self *)((char *)v78 + 56);
    }
    while ( v74 != (gameswf::RefCounted::Self *)v80 );
    goto LABEL_112;
  }
LABEL_141:
  if ( v80 < 0 )
  {
    v61 = 56 * v80;
    do
    {
      v62 = (uint8_t *)(*(uint32_t *)v76 + v61);
      if ( v62 != nullptr )
      {
        memset(v62, 0, 0x38u);
        *v62 = 1;
        *((uint32_t *)v62 + 4) = (uint32_t)(uintptr_t)(((uint8_t *)(uintptr_t)0x7FFFFF));
        v62[20] = 1;
        v62[19] = 1;
        v62[18] = (unsigned int)(uintptr_t)((uint8_t *)(uintptr_t)0x7FFFFF) >> 16;
        *((uint32_t *)v62 + 9) = (uint32_t)(uintptr_t)(((uint8_t *)(uintptr_t)0x7FFFFF));
        v62[39] = 1;
        v62[38] = (unsigned int)(uintptr_t)((uint8_t *)(uintptr_t)0x7FFFFF) >> 16;
      }
      v61 += 56;
      ++v80;
    }
    while ( v80 != 0 );
  }
LABEL_112:
  *((uint32_t *)v79 + 5) = 0;
  v53 = (pthread_mutex_t **)gameswf::getGlobalMutex();
  return glf::Mutex::Unlock(v53);
}

// ----------------------------------------------------------------------------
// Function: gameswf::LocalConnectionManager::alive  (binary VA: 0x118dde0)
// Original: gameswf::LocalConnectionManager::alive
// ----------------------------------------------------------------------------
int gameswf::LocalConnectionManager::alive(gameswf::LocalConnectionManager::Self *self)
{
  int result;
  int v2;
  int v3;

  result = *((uint32_t *)self + 1);
  if ( result > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(uint32_t *)(*(uint32_t *)self + 4 * v2++);
      result = G4_VCALL<int>(v3, 76);
    }
    while ( *((uint32_t *)self + 1) > v2 );
  }
  return result;
}


