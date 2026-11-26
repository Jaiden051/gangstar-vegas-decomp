#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASLocalConnection.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASLocalConnection::send  (binary VA: 0x1135ac0)
// Original: gameswf::ASLocalConnection::send
// ----------------------------------------------------------------------------
void gameswf::ASLocalConnection::send(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  char *v7;
  gameswf::Self *v8;
  int v9;
  int v10;
  int v11;
  gameswf::Self *v12;
  char *v13;
  gameswf::Self *v14;
  int v15;
  int v16;
  char *v17;
  gameswf::ASValue::Self *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint8_t *v26;
  int v27;
  int v28;
  int v29;
  gameswf::Self *v30;
  int v31;
  int v32;
  int Root;
  int v34;
  int i;
  char *v37;
  int v38;
  int v39;
  char *v40;
  int v41;
  int v42;
  int v43;
  int v44;
  typedef gameswf::Player::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef char *_g4_t_v52;
  typedef char *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint8_t _g4_t_v57[20];
  typedef uint8_t _g4_t_v58[12];
  typedef char _g4_t_v59;
  typedef char _g4_t_v60;
  typedef char *_g4_t_v61;
  typedef gameswf::Self *_g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef char _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char *_g4_t_v66;
  typedef gameswf::Self *_g4_t_v67;
  typedef int64_t _g4_t_v68 __attribute__((aligned(1)));
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v45)) > _g4_s0 ? (0u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v46)) > _g4_s1 ? (24u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v47)) > _g4_s2 ? (24u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v48)) > _g4_s3 ? (32u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v49)) > _g4_s4 ? (32u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v50)) > _g4_s5 ? (36u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v51)) > _g4_s6 ? (36u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v52)) > _g4_s7 ? (40u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v53)) > _g4_s8 ? (40u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v54)) > _g4_s9 ? (40u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v55)) > _g4_s10 ? (44u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v56)) > _g4_s11 ? (44u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v57)) > _g4_s12 ? (48u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v58)) > _g4_s13 ? (68u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v59)) > _g4_s14 ? (80u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (81u + sizeof(_g4_t_v60)) > _g4_s15 ? (81u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v61)) > _g4_s16 ? (84u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v62)) > _g4_s17 ? (92u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v63)) > _g4_s18 ? (96u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v64)) > _g4_s19 ? (100u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (101u + sizeof(_g4_t_v65)) > _g4_s20 ? (101u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v66)) > _g4_s21 ? (104u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v67)) > _g4_s22 ? (112u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v68)) > _g4_s23 ? (116u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v69)) > _g4_s24 ? (124u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v70)) > _g4_s25 ? (128u + sizeof(_g4_t_v70)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v71)) > _g4_s26 ? (132u + sizeof(_g4_t_v71)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 80u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 81u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 84u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 100u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 101u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 104u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 112u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 116u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 124u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 128u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 132u);

  v1 = a1;
  if ( (int)a1[4] > 1 )
  {
    v59 = 1;
    v60 = 0;
    LOWORD(v63) = -1;
    v64 = 1;
    v65 = 0;
    HIBYTE(v63) = ((uint16_t)(HIWORD(v63) | 0x7F) >> 8) | 1;
    LOWORD(v68) = -1;
    BYTE2(v63) = 127;
    HIBYTE(v68) = 0;
    BYTE2(v68) = 127;
    *(uint32_t *)((char *)&v68 + 3) = BYTE3(v68) | 1;
    v2 = (uint32_t *)a1[3];
    v3 = a1[5];
    v69 = 0;
    v70 = 0;
    v71 = 0;
    v4 = *v2 + 12 * v3;
    if ( *(uint8_t *)v4 == 3 || *(uint8_t *)v4 == 4 )
    {
      v52 = *(char **)(v4 + 4);
    }
    else
    {
      v52 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
      {
        byte_20D6378 = 1;
        v44 = dword_20D6388 | 0x7FFFFF;
        byte_20D6379 = 0;
        dword_20D6388 = v44;
        BYTE2(dword_20D6388) = BYTE2(v44) & 0x7F;
        HIBYTE(dword_20D6388) = HIBYTE(v44) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
      }
    }
    if ( v52 != &v59 )
    {
      if ( *v52 == -1 )
        v5 = *((uint32_t *)v52 + 1) - 1;
      else
        v5 = *v52 - 1;
      gameswf::String::resize((gameswf::String::Self *)&v59, v5);
      v6 = (gameswf::Self *)(v52 + 1);
      if ( *v52 == -1 )
        v6 = *((gameswf::Self **)v52 + 3);
      if ( v59 == -1 )
      {
        v7 = v61;
        v8 = v62;
      }
      else
      {
        v7 = (char *)v59;
        v8 = (gameswf::Self *)&v60;
      }
      gameswf::Strcpy_s(v8, v7, v6);
      v48 = *((uint32_t *)v52 + 4);
      if ( (uint8_t *)(v48 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *v52 == -1 )
        {
          v40 = *((char **)v52 + 3);
          v41 = *((uint32_t *)v52 + 1) - 1;
        }
        else
        {
          v40 = v52 + 1;
          v41 = *v52 - 1;
        }
        v9 = 5381;
        if ( v41 > 0 )
        {
          do
          {
            --v41;
            v51 = 33 * v9;
            v42 = (uint8_t)v40[v41] + 32;
            if ( (uint8_t)(v40[v41] - 65) > 0x19u )
              v42 = (uint8_t)v40[v41];
            v9 = v51 ^ v42;
          }
          while ( v41 != 0 );
          v1 = a1;
          v9 = v9 << 9 >> 9;
        }
        *((uint32_t *)v52 + 4) = v9 & 0x7FFFFF | v48 & 0xFF800000;
      }
      else
      {
        v9 = v48 << 9 >> 9;
      }
      v63 = v9 & 0x7FFFFF | v63 & 0xFF800000;
    }
    v10 = *(uint32_t *)v1[3] + 4 * (3 * v1[5] - 3);
    if ( *(uint8_t *)v10 == 3 || *(uint8_t *)v10 == 4 )
    {
      v53 = *(char **)(v10 + 4);
    }
    else
    {
      v53 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
      {
        v43 = dword_20D6388;
        byte_20D6378 = 1;
        byte_20D6379 = 0;
        dword_20D6388 |= 0x7FFFFFu;
        BYTE2(dword_20D6388) &= ~0x80u;
        HIBYTE(dword_20D6388) = ((v43 | 0x7FFFFFu) >> 24) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
      }
    }
    if ( v53 != &v64 )
    {
      if ( *v53 == -1 )
        v11 = *((uint32_t *)v53 + 1) - 1;
      else
        v11 = *v53 - 1;
      gameswf::String::resize((gameswf::String::Self *)&v64, v11);
      if ( *v53 == -1 )
        v12 = *((gameswf::Self **)v53 + 3);
      else
        v12 = (gameswf::Self *)(v53 + 1);
      if ( v64 == -1 )
      {
        v13 = v66;
        v14 = v67;
      }
      else
      {
        v13 = (char *)v64;
        v14 = (gameswf::Self *)&v65;
      }
      gameswf::Strcpy_s(v14, v13, v12);
      v49 = *((uint32_t *)v53 + 4);
      if ( (uint8_t *)(v49 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *v53 == -1 )
        {
          v37 = *((char **)v53 + 3);
          v38 = *((uint32_t *)v53 + 1) - 1;
        }
        else
        {
          v37 = v53 + 1;
          v38 = *v53 - 1;
        }
        v15 = 5381;
        if ( v38 > 0 )
        {
          do
          {
            --v38;
            v50 = 33 * v15;
            v39 = (uint8_t)v37[v38] + 32;
            if ( (uint8_t)(v37[v38] - 65) > 0x19u )
              v39 = (uint8_t)v37[v38];
            v15 = v50 ^ v39;
          }
          while ( v38 != 0 );
          v15 = v15 << 9 >> 9;
        }
        *((uint32_t *)v53 + 4) = v15 & 0x7FFFFF | v49 & 0xFF800000;
      }
      else
      {
        v15 = v49 << 9 >> 9;
      }
      LODWORD(v68) = v15 & 0x7FFFFF | v68 & 0xFF800000;
    }
    if ( (int)v1[4] > 2 )
    {
      v16 = 2;
      v55 = v1;
      while ( 1 )
      {
        v54 = v16 + 1;
        v19 = v55[5] - v16;
        v20 = *(uint32_t *)v55[3];
        v58[0] = 0;
        v58[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v58, (const gameswf::ASValue::Self *)(v20 + 12 * v19));
        v57[0] = 0;
        v57[1] = 0;
        if ( v58[0] != 5 )
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v57, (const gameswf::ASValue::Self *)v58);
        v21 = v69;
        v22 = v70;
        v23 = v69 + 1;
        if ( v69 + 1 <= v70 || v71 != 0 )
        {
          v17 = (char *)HIDWORD(v68);
        }
        else
        {
          v24 = v23 + (v23 >> 1);
          v70 = v24;
          if ( v24 != 0 )
          {
            v17 = HIDWORD(v68) != 0
                ? (char *)gameswf::realloc_internal((gameswf::Self *)HIDWORD(v68), 12 * v24, 12 * v22)
                : (char *)gameswf::malloc_internal(12 * v24);
            HIDWORD(v68) = (uint32_t)(uintptr_t)(v17);
            v21 = v69;
          }
          else
          {
            if ( HIDWORD(v68) != 0 )
            {
              gameswf::free_internal((gameswf::Self *)HIDWORD(v68));
              v21 = v69;
            }
            HIDWORD(v68) = 0;
            v17 = nullptr;
          }
        }
        v18 = (gameswf::ASValue::Self *)&v17[12 * v21];
        if ( v18 != nullptr )
        {
          *(uint8_t *)v18 = 0;
          *((uint8_t *)v18 + 1) = 0;
          gameswf::ASValue::opAssign(v18, (const gameswf::ASValue::Self *)v57);
        }
        v69 = v23;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v57);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v58);
        if ( v54 >= v55[4] )
          break;
        v16 = v54;
      }
      v1 = v55;
    }
    v28 = v1[3];
    v29 = *(uint32_t *)(v28 + 212);
    if ( v29 != 0 )
    {
      v30 = *(gameswf::Self **)(v28 + 208);
      if ( *((uint8_t *)v30 + 2) == 0 )
      {
        if ( (*(uint16_t *)v30)-- == 1 )
          gameswf::free_internal(v30);
        *(uint32_t *)(v28 + 208) = 0;
        *(uint32_t *)(v28 + 212) = 0;
        v29 = 0;
      }
    }
    v31 = *(uint32_t *)(v29 + 12);
    if ( *(int *)(v31 + 28) > 0 )
    {
      v32 = 0;
      do
      {
        v46 = v31;
        v45 = *(gameswf::Player::Self **)(*(uint32_t *)(v31 + 24) + 4 * v32++);
        Root = gameswf::Player::getRoot(v45);
        gameswf::LocalConnectionManager::send(Root + 276, &v59);
        v31 = v46;
      }
      while ( v32 < *(uint32_t *)(v46 + 28) );
    }
    v27 = v69;
    if ( v69 <= 0 )
    {
      if ( v69 < 0 )
      {
        v25 = 12 * v69;
        do
        {
          v26 = (uint8_t *)(v25 + HIDWORD(v68));
          if ( v25 + HIDWORD(v68) != 0 )
          {
            *v26 = 0;
            v26[1] = 0;
          }
          v25 += 12;
          ++v27;
        }
        while ( v27 != 0 );
      }
    }
    else
    {
      v56 = v69;
      v34 = 0;
      for ( i = 0; i != v56; ++i )
      {
        v47 = v34;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v34 + HIDWORD(v68)));
        v34 = v47 + 12;
      }
    }
    v69 = 0;
    if ( v71 == 0 )
    {
      v70 = 0;
      if ( HIDWORD(v68) != 0 )
        gameswf::free_internal((gameswf::Self *)HIDWORD(v68));
      HIDWORD(v68) = 0;
    }
    if ( v64 == -1 && (v68 & 0x1000000) != 0 )
      gameswf::free_internal(v67);
    if ( v59 == -1 && (v63 & 0x1000000) != 0 )
      gameswf::free_internal(v62);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLocalConnection::connect  (binary VA: 0x11362e0)
// Original: gameswf::ASLocalConnection::connect
// ----------------------------------------------------------------------------
void gameswf::ASLocalConnection::connect(uint32_t *a1)
{
  uint32_t *v1;
  char v2;
  int v3;
  int v4;
  gameswf::Player::Self *v5;
  gameswf::Self *v6;
  uint32_t *Root;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  gameswf::Self *v12;
  char *v13;
  char *v14;
  int v15;
  char *v16;
  int v17;
  gameswf::Self *v18;
  char *v19;
  gameswf::Self *v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  char *v33;

  v1 = (uint32_t *)a1[1];
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(a1[1], 34) == 0 )
    v1 = nullptr;
  if ( a1[4] == 1 )
  {
    v2 = *((uint8_t *)v1 + 40);
    v3 = v2 == -1 ? v1[11] - 1 : v2 - 1;
    if ( v3 == 0 )
    {
      v4 = a1[3];
      v5 = *(gameswf::Player::Self **)(v4 + 212);
      if ( v5 != nullptr )
      {
        v6 = *(gameswf::Self **)(v4 + 208);
        if ( *((uint8_t *)v6 + 2) == 0 )
        {
          if ( (*(uint16_t *)v6)-- == 1 )
            gameswf::free_internal(v6);
          *(uint32_t *)(v4 + 208) = 0;
          *(uint32_t *)(v4 + 212) = 0;
          v5 = nullptr;
        }
      }
      Root = (uint32_t *)gameswf::Player::getRoot(v5);
      v8 = Root[70];
      v9 = Root;
      v32 = Root[71];
      v10 = v8 + 1;
      if ( v8 + 1 <= v32 || Root[72] != 0 )
      {
        v13 = (char *)Root[69];
      }
      else
      {
        v11 = v10 + (v10 >> 1);
        v9[71] = v11;
        if ( v11 != 0 )
        {
          v30 = v8 + 1;
          v13 = v9[69] != 0
              ? (char *)gameswf::realloc_internal((gameswf::Self *)v9[69], 4 * v11, 4 * v32)
              : (char *)gameswf::malloc_internal(4 * v11);
          v9[69] = (uint32_t)(uintptr_t)(v13);
          v8 = v9[70];
          v10 = v30;
        }
        else
        {
          v12 = (gameswf::Self *)v9[69];
          if ( v12 != nullptr )
          {
            v28 = v8 + 1;
            gameswf::free_internal(v12);
            v8 = v9[70];
            v10 = v28;
          }
          v9[69] = 0;
          v13 = nullptr;
        }
      }
      v14 = &v13[4 * v8];
      if ( v14 != nullptr )
      {
        *(uint32_t *)v14 = (uint32_t)(uintptr_t)(v1);
        v29 = v10;
        gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v1);
        v10 = v29;
      }
      v9[70] = v10;
      v15 = *(uint32_t *)a1[3] + 12 * a1[5];
      if ( *(uint8_t *)v15 == 3 || *(uint8_t *)v15 == 4 )
      {
        v16 = *(char **)(v15 + 4);
      }
      else
      {
        v16 = (char *)(&byte_20D6378);
        if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
        {
          byte_20D6378 = 1;
          v26 = dword_20D6388 | 0x7FFFFF;
          byte_20D6379 = 0;
          dword_20D6388 = v26;
          BYTE2(dword_20D6388) = BYTE2(v26) & 0x7F;
          HIBYTE(dword_20D6388) = HIBYTE(v26) | 1;
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
          __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
        }
      }
      if ( v1 + 10 != (uint32_t *)v16 )
      {
        if ( *v16 == -1 )
          v17 = *((uint32_t *)v16 + 1) - 1;
        else
          v17 = *v16 - 1;
        gameswf::String::resize((gameswf::String::Self *)(v1 + 10), v17);
        v18 = (gameswf::Self *)(v16 + 1);
        if ( *v16 == -1 )
        {
          LOBYTE(v19) = *((uint8_t *)v1 + 40);
          v18 = *((gameswf::Self **)v16 + 3);
          if ( (uint8_t)(uintptr_t)v19 != 0xFF )
            goto LABEL_27;
        }
        else
        {
          LOBYTE(v19) = *((uint8_t *)v1 + 40);
          if ( (uint8_t)(uintptr_t)v19 != 0xFF )
          {
LABEL_27:
            v19 = (char *)(char)(uintptr_t)v19;
            v20 = (gameswf::Self *)((char *)v1 + 41);
LABEL_28:
            gameswf::Strcpy_s(v20, v19, v18);
            v31 = *((uint32_t *)v16 + 4);
            if ( (uint8_t *)(v31 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
            {
              if ( *v16 == -1 )
              {
                v22 = *((char **)v16 + 3);
                v23 = *((uint32_t *)v16 + 1) - 1;
              }
              else
              {
                v22 = v16 + 1;
                v23 = *v16 - 1;
              }
              v21 = 5381;
              if ( v23 > 0 )
              {
                v33 = v16;
                do
                {
                  --v23;
                  v24 = 33 * v21;
                  v25 = (uint8_t)v22[v23] + 32;
                  if ( (uint8_t)(v22[v23] - 65) > 0x19u )
                    v25 = (uint8_t)v22[v23];
                  v21 = v24 ^ v25;
                }
                while ( v23 != 0 );
                v16 = v33;
                v21 = v21 << 9 >> 9;
              }
              *((uint32_t *)v16 + 4) = v21 & 0x7FFFFF | v31 & 0xFF800000;
            }
            else
            {
              v21 = v31 << 9 >> 9;
            }
            v1[14] = v21 & 0x7FFFFF | v1[14] & 0xFF800000;
            return;
          }
        }
        v19 = (char *)v1[11];
        v20 = (gameswf::Self *)v1[13];
        goto LABEL_28;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLocalConnection::Construct  (binary VA: 0x1136970)
// Original: gameswf::ASLocalConnection::ASLocalConnection
// ----------------------------------------------------------------------------
gameswf::ASLocalConnection::Self * gameswf::ASLocalConnection::Construct(gameswf::ASLocalConnection::Self *self, gameswf::Player::Self *a2)
{
  int v2;
  gameswf::Self *v3;
  int StandardMemberID;
  gameswf::Self *v5;
  int v6;
  typedef unsigned int _g4_t_v8[3];
  typedef unsigned int _g4_t_v9[3];
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  typedef gameswf::Self *_g4_t_v12;
  typedef int16_t _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef gameswf::Self *_g4_t_v18;
  typedef int16_t _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (25u + sizeof(_g4_t_v11)) > _g4_s3 ? (25u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v12)) > _g4_s4 ? (36u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v13)) > _g4_s5 ? (40u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (42u + sizeof(_g4_t_v14)) > _g4_s6 ? (42u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (43u + sizeof(_g4_t_v15)) > _g4_s7 ? (43u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v16)) > _g4_s8 ? (56u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (57u + sizeof(_g4_t_v17)) > _g4_s9 ? (57u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v18)) > _g4_s10 ? (68u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v19)) > _g4_s11 ? (72u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (74u + sizeof(_g4_t_v20)) > _g4_s12 ? (74u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (75u + sizeof(_g4_t_v21)) > _g4_s13 ? (75u + sizeof(_g4_t_v21)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 25u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 42u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 43u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 57u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 74u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 75u);

  gameswf::ASObject::ASObject(self, a2);
  *((uint8_t *)self + 40) = 1;
  *((uint8_t *)self + 41) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FF48);
  v2 = *((uint32_t *)self + 14) | 0x7FFFFF;
  *((uint32_t *)self + 14) = v2;
  *((uint8_t *)self + 58) = BYTE2(v2) & 0x7F;
  *((uint8_t *)self + 59) = HIBYTE(v2) | 1;
  LOWORD(v8[0]) = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v8, (int)(uintptr_t)(gameswf::ASLocalConnection::connect));
  v10 = 1;
  v11 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v10, 7);
  v3 = (gameswf::Self *)&v11;
  if ( v10 == -1 )
    v3 = v12;
  gameswf::Strcpy_s(v3, byte_8, (gameswf::Self *)"connect");
  v13 = -1;
  v14 = 127;
  v15 |= 1u;
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v10);
  if ( StandardMemberID == -1
    || G4_VCALL<uint8_t>(self, 32, StandardMemberID, v8) == 0 )
  {
    G4_VCALL<void>(self, 48, &v10, v8);
    if ( v10 != -1 )
      goto LABEL_6;
  }
  else if ( v10 != -1 )
  {
    goto LABEL_6;
  }
  if ( (v15 & 1) != 0 )
    gameswf::free_internal(v12);
LABEL_6:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
  LOWORD(v9[0]) = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v9, (int)(uintptr_t)(gameswf::ASLocalConnection::send));
  v16 = 1;
  v17 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v16, 4);
  v5 = (gameswf::Self *)&v17;
  if ( v16 == -1 )
    v5 = v18;
  gameswf::Strcpy_s(v5, (char *)&loc_4 + 1, (gameswf::Self *)"send");
  v19 = -1;
  v20 = 127;
  v21 |= 1u;
  v6 = gameswf::getStandardMemberID((gameswf::Self *)&v16);
  if ( v6 == -1
    || G4_VCALL<uint8_t>(self, 32, v6, v9) == 0 )
  {
    G4_VCALL<void>(self, 48, &v16, v9);
    if ( v16 != -1 )
      return (gameswf::ASLocalConnection::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  }
  else if ( v16 != -1 )
  {
    return (gameswf::ASLocalConnection::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  }
  if ( (v21 & 1) == 0 )
    return (gameswf::ASLocalConnection::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  gameswf::free_internal(v18);
  return (gameswf::ASLocalConnection::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLocalConnection::ctor  (binary VA: 0x1136bf0)
// Original: gameswf::ASLocalConnection::ctor
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASLocalConnection::ctor(int a1)
{
  int v1;
  gameswf::Player::Self *v2;
  gameswf::Self *v3;
  gameswf::ASLocalConnection::Self *v4;

  v1 = *(uint32_t *)(a1 + 12);
  v2 = *(gameswf::Player::Self **)(v1 + 212);
  if ( v2 != nullptr )
  {
    v3 = *(gameswf::Self **)(v1 + 208);
    if ( *((uint8_t *)v3 + 2) == 0 )
    {
      if ( (*(uint16_t *)v3)-- == 1 )
        gameswf::free_internal(v3);
      *(uint32_t *)(v1 + 208) = 0;
      *(uint32_t *)(v1 + 212) = 0;
      v2 = nullptr;
    }
  }
  v4 = (gameswf::ASLocalConnection::Self *)opNew(0x3Cu);
  gameswf::ASLocalConnection::Construct(v4, v2);
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLocalConnection::is  (binary VA: 0x1136ce0)
// Original: gameswf::ASLocalConnection::is
// ----------------------------------------------------------------------------
bool gameswf::ASLocalConnection::is(gameswf::ASLocalConnection::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 34 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLocalConnection::Destroy  (binary VA: 0x1136d80)
// Original: gameswf::ASLocalConnection::~ASLocalConnection
// ----------------------------------------------------------------------------
void gameswf::ASLocalConnection::Destroy(gameswf::ASLocalConnection::Self *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 40) == 0xFF;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FF48);
  if ( v1 && (*((uint8_t *)self + 59) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 13));
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLocalConnection::Destroy_ea1136df0  (binary VA: 0x1136df0)
// Original: gameswf::ASLocalConnection::~ASLocalConnection
// ----------------------------------------------------------------------------
void gameswf::ASLocalConnection::Destroy_ea1136df0(gameswf::ASLocalConnection::Self *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 40) == 0xFF;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FF48);
  if ( v1 && (*((uint8_t *)self + 59) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 13));
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


