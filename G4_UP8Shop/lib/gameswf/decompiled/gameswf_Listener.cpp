#include "Core/Utils/DecompTypes.h"
#include "gameswf_Listener.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Listener::notify  (binary VA: 0x118b480)
// Original: gameswf::Listener::notify
// ----------------------------------------------------------------------------
void gameswf::Listener::notify(gameswf::Listener::Self *self, const gameswf::EventId::Self *a2)
{
  int v2;
  int v3;
  gameswf::Self *v4;
  bool v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int i;
  int v10;
  int v11;
  gameswf::Self *v12;
  int v13;
  uint16_t *v14;
  int v15;
  gameswf::RefCounted::Self **v16;
  gameswf::RefCounted::Self *v17;
  gameswf::Self *v18;
  int j;
  gameswf::Self *v20;
  int v21;
  gameswf::Self *v22;
  int v23;

  v2 = *((uint32_t *)self + 1);
  if ( v2 < 0 )
  {
    v3 = *((uint32_t *)self + 1);
    do
    {
      v4 = *(gameswf::Self **)(8 * v3);
      if ( v4 != nullptr )
      {
        v5 = (*(uint16_t *)v4)-- == 1;
        if ( v5 )
          gameswf::free_internal(v4);
      }
      ++v3;
    }
    while ( v3 != 0 );
    v22 = nullptr;
    goto LABEL_8;
  }
  if ( v2 != 0 )
  {
    v7 = gameswf::malloc_internal(8 * (v2 + (v2 >> 1)));
    v22 = (gameswf::Self *)v7;
    v8 = (uint32_t *)v7;
    for ( i = 0; i != v2; ++i )
    {
      if ( v8 != nullptr )
      {
        *v8 = 0;
        v8[1] = 0;
      }
      v8 += 2;
    }
    v10 = 0;
    v11 = v7;
    v23 = v2;
    do
    {
      v12 = *(gameswf::Self **)v11;
      v13 = *(uint32_t *)self + 8 * v10;
      v14 = *(uint16_t **)v13;
      if ( *(uint32_t *)v13 != *(uint32_t *)v11 )
      {
        if ( v12 != nullptr )
        {
          v5 = (*(uint16_t *)v12)-- == 1;
          if ( v5 )
          {
            v21 = v10;
            gameswf::free_internal(v12);
            v10 = v21;
          }
        }
        *(uint32_t *)v11 = (uint32_t)(uintptr_t)(v14);
        if ( v14 != nullptr )
          ++*v14;
      }
      ++v10;
      *(uint32_t *)(v11 + 4) = *(uint32_t *)(v13 + 4);
      v11 += 8;
    }
    while ( v10 != v23 );
    v2 = v23;
    v15 = 0;
    while ( 1 )
    {
      v16 = (gameswf::RefCounted::Self **)((char *)v22 + 8 * v15);
      v17 = v16[1];
      if ( v17 == nullptr )
        goto LABEL_31;
      v18 = (gameswf::Self *)(*v16);
      if ( *((uint8_t *)*v16 + 2) != 0 )
      {
        gameswf::RefCounted::addRef(v16[1]);
        G4_VCALL<void>(v17, 64, a2);
        gameswf::RefCounted::dropRef(v17);
LABEL_31:
        if ( ++v15 == v23 )
          goto LABEL_37;
      }
      else
      {
        v5 = (*(uint16_t *)v18)-- == 1;
        if ( v5 )
        {
          gameswf::free_internal(v18);
          v16 = (gameswf::RefCounted::Self **)((char *)v22 + 8 * v15);
        }
        ++v15;
        *v16 = nullptr;
        v16[1] = nullptr;
        if ( v15 == v23 )
        {
LABEL_37:
          for ( j = 0; j != v23; ++j )
          {
            v20 = *((gameswf::Self **)v22 + 2 * j);
            if ( v20 != nullptr )
            {
              v5 = (*(uint16_t *)v20)-- == 1;
              if ( v5 )
                gameswf::free_internal(v20);
            }
          }
LABEL_8:
          if ( v2 < 0 )
          {
            v6 = (uint32_t *)((char *)v22 + 8 * v2);
            do
            {
              if ( v6 != nullptr )
              {
                *v6 = 0;
                v6[1] = 0;
              }
              v6 += 2;
              ++v2;
            }
            while ( v2 != 0 );
          }
          if ( v22 != nullptr )
            gameswf::free_internal(v22);
          return;
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::Listener::notify  (binary VA: 0x118b6b0)
// Original: gameswf::Listener::notify
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::Listener::notify(uint32_t *a1, char *a2, int a3)
{
  int v3;
  gameswf::Player::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *result;
  int v7;
  int v8;
  bool v9;
  int i;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  gameswf::Self *v15;
  uint16_t *v16;
  int v17;
  gameswf::Self *v18;
  char *v19;
  gameswf::Self *v20;
  int v21;
  unsigned int v22;
  int StandardMemberID;
  char v24;
  char v25;
  gameswf::RefCounted::Self **v26;
  gameswf::RefCounted::Self *v27;
  gameswf::Self *v28;
  int v29;
  int v30;
  char *v31;
  int v32;
  int v33;
  typedef gameswf::ASValue::Self *_g4_t_v34;
  typedef gameswf::ASValue::Self *_g4_t_v35;
  typedef char _g4_t_v36;
  typedef gameswf::RefCounted::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef gameswf::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef char *_g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef unsigned int _g4_t_v47[3];
  typedef char _g4_t_v48[4];
  typedef gameswf::RefCounted::Self *_g4_t_v49;
  typedef uint8_t _g4_t_v50[12];
  typedef char _g4_t_v51;
  typedef char _g4_t_v52;
  typedef char *_g4_t_v53;
  typedef gameswf::Self *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v34)) > _g4_s0 ? (4u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v35)) > _g4_s1 ? (8u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v36)) > _g4_s2 ? (8u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v37)) > _g4_s3 ? (20u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v38)) > _g4_s4 ? (24u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v39)) > _g4_s5 ? (28u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v40)) > _g4_s6 ? (32u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v41)) > _g4_s7 ? (32u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v42)) > _g4_s8 ? (36u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v43)) > _g4_s9 ? (40u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v44)) > _g4_s10 ? (44u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v45)) > _g4_s11 ? (44u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v46)) > _g4_s12 ? (48u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v47)) > _g4_s13 ? (64u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v48)) > _g4_s14 ? (76u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v49)) > _g4_s15 ? (80u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v50)) > _g4_s16 ? (88u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v51)) > _g4_s17 ? (100u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (101u + sizeof(_g4_t_v52)) > _g4_s18 ? (101u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v53)) > _g4_s19 ? (104u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v54)) > _g4_s20 ? (112u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v55)) > _g4_s21 ? (116u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v56)) > _g4_s22 ? (140u + sizeof(_g4_t_v56)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 76u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 80u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 88u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 100u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 101u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 104u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 112u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 116u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 140u);

  v56 = (uint32_t *)(&a1);
  v44 = a1;
  v43 = a2;
  v38 = a3;
  v3 = *(uint32_t *)(a3 + 12);
  v4 = *(gameswf::Player::Self **)(v3 + 212);
  if ( v4 != nullptr )
  {
    v5 = *(gameswf::Self **)(v3 + 208);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      v9 = (*(uint16_t *)v5)-- == 1;
      if ( v9 )
        gameswf::free_internal(v5);
      *(uint32_t *)(v3 + 208) = 0;
      *(uint32_t *)(v3 + 212) = 0;
      v4 = nullptr;
    }
  }
  result = (gameswf::Self *)gameswf::Player::getRoot(v4);
  if ( result != nullptr )
  {
    v7 = v44[1];
    v42 = v7;
    if ( v7 < 0 )
    {
      v8 = v44[1];
      do
      {
        result = *(gameswf::Self **)(8 * v8);
        if ( result != nullptr )
        {
          v9 = (*(uint16_t *)result)-- == 1;
          if ( v9 )
            result = (gameswf::Self *)gameswf::free_internal(result);
        }
        ++v8;
      }
      while ( v8 != 0 );
      v39 = nullptr;
      goto LABEL_11;
    }
    if ( v7 != 0 )
    {
      v11 = gameswf::malloc_internal(8 * (v7 + (v7 >> 1)));
      v39 = (gameswf::Self *)v11;
      v12 = (uint32_t *)v11;
      v13 = 0;
      do
      {
        if ( v12 != nullptr )
        {
          *v12 = 0;
          v12[1] = 0;
        }
        ++v13;
        v12 += 2;
      }
      while ( v13 != v42 );
      v40 = 0;
      do
      {
        v14 = *v44 + 8 * v40;
        v15 = *(gameswf::Self **)v11;
        v16 = *(uint16_t **)v14;
        if ( *(uint32_t *)v14 != *(uint32_t *)v11 )
        {
          if ( v15 != nullptr )
          {
            v9 = (*(uint16_t *)v15)-- == 1;
            if ( v9 )
            {
              v35 = (gameswf::ASValue::Self *)v11;
              gameswf::free_internal(v15);
              v11 = (int)(uintptr_t)(v35);
            }
          }
          *(uint32_t *)v11 = (uint32_t)(uintptr_t)(v16);
          if ( v16 != nullptr )
            ++*v16;
        }
        ++v40;
        *(uint32_t *)(v11 + 4) = *(uint32_t *)(v14 + 4);
        v11 += 8;
      }
      while ( v40 != v42 );
      v45 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = (gameswf::RefCounted::Self **)((char *)v39 + 8 * v45);
          v27 = v26[1];
          if ( v27 != nullptr )
            break;
LABEL_51:
          if ( ++v45 == v42 )
            goto LABEL_57;
        }
        v28 = (gameswf::Self *)(*v26);
        if ( *((uint8_t *)*v26 + 2) != 0 )
        {
          gameswf::RefCounted::addRef(v26[1]);
          LOWORD(v47[0]) = 0;
          v51 = 1;
          v52 = 0;
          if ( *v43 == -1 )
            v17 = *((uint32_t *)v43 + 1) - 1;
          else
            v17 = *v43 - 1;
          gameswf::String::resize((gameswf::String::Self *)&v51, v17);
          v18 = (gameswf::Self *)(v43 + 1);
          if ( *v43 == -1 )
            v18 = *((gameswf::Self **)v43 + 3);
          if ( v51 == -1 )
          {
            v19 = v53;
            v20 = v54;
          }
          else
          {
            v19 = (char *)v51;
            v20 = (gameswf::Self *)&v52;
          }
          gameswf::Strcpy_s(v20, v19, v18);
          v41 = *((uint32_t *)v43 + 4);
          if ( (uint8_t *)(v41 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
          {
            if ( *v43 == -1 )
            {
              v31 = *((char **)v43 + 3);
              v30 = *((uint32_t *)v43 + 1) - 1;
            }
            else
            {
              v30 = *v43 - 1;
              v31 = v43 + 1;
            }
            v21 = 5381;
            if ( v30 > 0 )
            {
              v37 = v27;
              do
              {
                --v30;
                v32 = 33 * v21;
                v33 = (uint8_t)v31[v30] + 32;
                if ( (uint8_t)(v31[v30] - 65) > 0x19u )
                  v33 = (uint8_t)v31[v30];
                v21 = v32 ^ v33;
              }
              while ( v30 != 0 );
              v27 = v37;
              v21 = v21 << 9 >> 9;
            }
            *((uint32_t *)v43 + 4) = v21 & 0x7FFFFF | v41 & 0xFF800000;
          }
          else
          {
            v21 = v41 << 9 >> 9;
          }
          v22 = v21 & 0x7FFFFF | v55 & 0xFF800000;
          LOWORD(v55) = v21;
          BYTE2(v55) = BYTE2(v22) & 0x7F;
          HIBYTE(v55) = HIBYTE(v22) | 1;
          StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v51);
          if ( StandardMemberID == -1
            || (v24 = G4_VCALL<int>(v27, 36, StandardMemberID, v47),
                v25 = 1,
                v24 == 0) )
          {
            v25 = G4_VCALL<int>(v27, 44, &v51, v47);
          }
          if ( v51 == -1 && (v55 & 0x1000000) != 0 )
          {
            v36 = v25;
            gameswf::free_internal(v54);
            v25 = v36;
          }
          if ( v25 != 0 )
          {
            v48[0] = 5;
            v48[1] = 0;
            v34 = *(gameswf::ASValue::Self **)(v38 + 16);
            v46 = *(uint32_t *)(*(uint32_t *)(v38 + 12) + 4) - 1;
            v49 = v27;
            gameswf::RefCounted::addRef(v27);
            gameswf::call_method(
              (gameswf::Self *)v50,
              (const gameswf::ASValue::Self *)v47,
              *(gameswf::ASEnvironment::Self **)(v38 + 12),
              (const gameswf::ASValue::Self *)v48,
              (int)(uintptr_t)(v34),
              v46,
              "???");
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v50);
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v48);
          }
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v47);
          gameswf::RefCounted::dropRef(v27);
          goto LABEL_51;
        }
        v9 = (*(uint16_t *)v28)-- == 1;
        if ( v9 )
          gameswf::free_internal(v28);
        ++v45;
        *v26 = nullptr;
        v26[1] = nullptr;
        if ( v45 == v42 )
        {
LABEL_57:
          v29 = 0;
          do
          {
            result = *((gameswf::Self **)v39 + 2 * v29);
            if ( result != nullptr )
            {
              v9 = (*(uint16_t *)result)-- == 1;
              if ( v9 )
                result = (gameswf::Self *)gameswf::free_internal(result);
            }
            ++v29;
          }
          while ( v29 != v42 );
LABEL_11:
          if ( v42 < 0 )
          {
            result = (gameswf::Self *)((char *)v39 + 8 * v42);
            for ( i = v42; i != 0; ++i )
            {
              if ( result != nullptr )
              {
                *(uint32_t *)result = 0;
                *((uint32_t *)result + 1) = 0;
              }
              result = (gameswf::Self *)((char *)result + 8);
            }
          }
          if ( v39 != nullptr )
            return (gameswf::Self *)gameswf::free_internal(v39);
          return result;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Listener::advance  (binary VA: 0x118bc20)
// Original: gameswf::Listener::advance
// ----------------------------------------------------------------------------
void gameswf::Listener::advance(gameswf::Listener::Self *self, float a2)
{
  int v2;
  int v3;
  gameswf::Self **v4;
  gameswf::Self *v5;
  bool v6;
  int i;
  uint32_t *v8;
  char *v9;
  int v10;
  gameswf::Self *v11;
  uint16_t *v12;
  int v13;
  gameswf::Self **v14;
  gameswf::RefCounted::Self *v15;
  gameswf::Self *v16;
  int j;
  gameswf::Self *v18;
  int v19;
  int v20;
  uint32_t *v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef gameswf::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v24)) > _g4_s2 ? (4u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v25)) > _g4_s3 ? (8u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v26)) > _g4_s4 ? (12u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v27)) > _g4_s5 ? (16u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v28)) > _g4_s6 ? (20u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v29)) > _g4_s7 ? (24u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v30)) > _g4_s8 ? (28u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v31)) > _g4_s9 ? (32u + sizeof(_g4_t_v31)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);

  v27 = nullptr;
  v29 = 0;
  v30 = 0;
  v2 = *((uint32_t *)self + 1);
  if ( (unsigned int)v2 > 0x40 )
  {
    if ( v2 < 0 )
    {
      v3 = *((uint32_t *)self + 1);
      v26 = v3;
      v4 = (gameswf::Self **)(8 * v2);
      do
      {
        v5 = *v4;
        if ( *v4 != nullptr )
        {
          v6 = (*(uint16_t *)v5)-- == 1;
          if ( v6 )
            gameswf::free_internal(v5);
        }
        v4 += 2;
        ++v3;
      }
      while ( v3 != 0 );
      v2 = v26;
      goto LABEL_15;
    }
  }
  else
  {
    v29 = 64;
    v27 = (gameswf::Self *)&v31;
    v30 = 1;
  }
  if ( v2 == 0 )
    goto LABEL_4;
LABEL_15:
  if ( v2 > v29 && v30 == 0 )
  {
    v19 = v2 + (v2 >> 1);
    if ( v19 != 0 )
    {
      if ( v27 != nullptr )
        v27 = (gameswf::Self *)gameswf::realloc_internal(v27, 8 * v19, 8 * v29);
      else
        v27 = (gameswf::Self *)gameswf::malloc_internal(8 * v19);
    }
    else
    {
      if ( v27 != nullptr )
        gameswf::free_internal(v27);
      v27 = nullptr;
    }
  }
  if ( v2 > 0 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v8 = (uint32_t *)((char *)v27 + 8 * i);
      if ( v8 != nullptr )
      {
        *v8 = 0;
        v8[1] = 0;
      }
    }
    v28 = i;
    v22 = 0;
    do
    {
      v9 = (char *)v27 + 8 * v22;
      v10 = *(uint32_t *)self + 8 * v22;
      v11 = *(gameswf::Self **)v9;
      v12 = *(uint16_t **)v10;
      if ( *(uint32_t *)v10 != *(uint32_t *)v9 )
      {
        if ( v11 != nullptr )
        {
          v6 = (*(uint16_t *)v11)-- == 1;
          if ( v6 )
          {
            v25 = v10;
            gameswf::free_internal(v11);
            v10 = v25;
            v9 = (char *)v27 + 8 * v22;
          }
        }
        *(uint32_t *)v9 = (uint32_t)(uintptr_t)(v12);
        if ( v12 != nullptr )
          ++*v12;
      }
      ++v22;
      *((uint32_t *)v9 + 1) = *(uint32_t *)(v10 + 4);
      v2 = v28;
    }
    while ( v22 < v28 );
    if ( v28 > 0 )
    {
      v13 = 0;
      while ( 1 )
      {
        v14 = (gameswf::Self **)((char *)v27 + 8 * v13);
        v15 = (gameswf::RefCounted::Self *)(v14[1]);
        if ( v15 == nullptr )
          goto LABEL_32;
        v16 = *v14;
        if ( *((uint8_t *)*v14 + 2) != 0 )
        {
          v23 = v13;
          gameswf::RefCounted::addRef(v15);
          G4_VCALL<void>(v15, 96, LODWORD(a2));
          gameswf::RefCounted::dropRef(v15);
          v13 = v23;
LABEL_32:
          if ( ++v13 == v28 )
            goto LABEL_38;
        }
        else
        {
          v6 = (*(uint16_t *)v16)-- == 1;
          if ( v6 )
          {
            v24 = v13;
            gameswf::free_internal(v16);
            v13 = v24;
          }
          ++v13;
          *v14 = nullptr;
          v14[1] = nullptr;
          if ( v13 == v28 )
          {
LABEL_38:
            for ( j = 0; j != v28; ++j )
            {
              v18 = *((gameswf::Self **)v27 + 2 * j);
              if ( v18 != nullptr )
              {
                v6 = (*(uint16_t *)v18)-- == 1;
                if ( v6 )
                  gameswf::free_internal(v18);
              }
            }
            goto LABEL_4;
          }
        }
      }
    }
  }
  if ( v2 < 0 )
  {
    v20 = 8 * v2;
    do
    {
      v21 = (uint32_t *)((char *)v27 + v20);
      if ( (gameswf::Self *)((char *)v27 + v20) != nullptr )
      {
        *v21 = 0;
        v21[1] = 0;
      }
      v20 += 8;
      ++v2;
    }
    while ( v2 != 0 );
  }
LABEL_4:
  if ( v30 == 0 && v27 != nullptr )
    gameswf::free_internal(v27);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Listener::add  (binary VA: 0x118bf70)
// Original: gameswf::Listener::add
// ----------------------------------------------------------------------------
void gameswf::Listener::add(gameswf::Listener::Self *self, gameswf::ASObject::Self *a2)
{
  gameswf::Listener::Self *v2;
  gameswf::Self *v3;
  int v4;
  gameswf::Listener::Self *v5;
  gameswf::Self **v6;
  gameswf::Self *v7;
  int v8;
  gameswf::Self **v9;
  gameswf::ASObject::Self *v10;
  gameswf::Self *v11;
  bool v12;
  int v13;
  int v14;
  int v15;
  gameswf::Self **v16;
  gameswf::Self *WeakProxy;
  gameswf::Self *v18;
  int v19;
  char *v20;
  uint16_t *v21;
  gameswf::Self *v22;
  int v23;
  gameswf::Listener::Self *v24;
  gameswf::Self *v25;
  gameswf::Listener::Self *v26;
  uint16_t *v27;
  int v28;
  int v29;

  v2 = self;
  if ( a2 == nullptr )
    return;
  v28 = *((uint32_t *)self + 1);
  v3 = *(gameswf::Self **)self;
  if ( v28 <= 0 )
  {
    v13 = *((uint32_t *)self + 1);
    goto LABEL_17;
  }
  v4 = 0;
  v29 = -1;
  v5 = self;
  do
  {
    while ( 1 )
    {
      v8 = 8 * v4;
      v9 = (gameswf::Self **)((char *)v3 + 8 * v4);
      v10 = (gameswf::ASObject::Self *)(v9[1]);
      if ( v10 == nullptr )
        goto LABEL_5;
      v11 = *v9;
      if ( *((uint8_t *)*v9 + 2) != 0 )
      {
        if ( a2 == v10 )
          return;
LABEL_5:
        v3 = *(gameswf::Self **)v5;
        v6 = (gameswf::Self **)(*(uint32_t *)v5 + v8);
        if ( v6[1] == nullptr )
          goto LABEL_13;
        goto LABEL_6;
      }
      v12 = (*(uint16_t *)v11)-- == 1;
      if ( v12 )
      {
        v24 = v5;
        gameswf::free_internal(v11);
        v5 = v24;
      }
      *v9 = nullptr;
      v9[1] = nullptr;
      v3 = *(gameswf::Self **)v5;
      v6 = (gameswf::Self **)(*(uint32_t *)v5 + v8);
      if ( v6[1] == nullptr )
      {
LABEL_13:
        v29 = v4;
        goto LABEL_14;
      }
LABEL_6:
      v7 = *v6;
      if ( *((uint8_t *)*v6 + 2) == 0 )
        break;
      if ( ++v4 == v28 )
        goto LABEL_15;
    }
    v12 = (*(uint16_t *)v7)-- == 1;
    if ( v12 )
    {
      v26 = v5;
      gameswf::free_internal(v7);
      v5 = v26;
    }
    *v6 = nullptr;
    v6[1] = nullptr;
    v29 = v4;
    v3 = *(gameswf::Self **)v5;
LABEL_14:
    ++v4;
  }
  while ( v4 != v28 );
LABEL_15:
  v2 = v5;
  if ( v29 == -1 )
  {
    v28 = *((uint32_t *)v5 + 1);
    v13 = v28;
LABEL_17:
    v14 = v13 + 1;
    v15 = *((uint32_t *)v2 + 2);
    if ( v14 > v15 && *((uint32_t *)v2 + 3) == 0 )
    {
      v19 = v14 + (v14 >> 1);
      *((uint32_t *)v2 + 2) = v19;
      if ( v19 != 0 )
      {
        if ( v3 != nullptr )
          v3 = (gameswf::Self *)gameswf::realloc_internal(v3, 8 * v19, 8 * v15);
        else
          v3 = (gameswf::Self *)gameswf::malloc_internal(8 * v19);
        v23 = *((uint32_t *)v2 + 1);
        *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v3);
        v28 = v23;
      }
      else
      {
        if ( v3 != nullptr )
        {
          gameswf::free_internal(v3);
          v28 = *((uint32_t *)v2 + 1);
        }
        *(uint32_t *)v2 = 0;
        v3 = nullptr;
      }
    }
    v16 = (gameswf::Self **)((char *)v3 + 8 * v28);
    if ( v16 != nullptr )
    {
      *v16 = nullptr;
      v16[1] = (gameswf::Self *)(a2);
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
      v18 = *v16;
      if ( WeakProxy != *v16 )
      {
        if ( v18 != nullptr )
        {
          v12 = (*(uint16_t *)v18)-- == 1;
          if ( v12 )
          {
            v25 = WeakProxy;
            gameswf::free_internal(v18);
            WeakProxy = v25;
          }
        }
        *v16 = WeakProxy;
        if ( WeakProxy != nullptr )
          ++*(uint16_t *)WeakProxy;
      }
    }
    *((uint32_t *)v2 + 1) = v14;
  }
  else
  {
    v20 = (char *)v3 + 8 * v29;
    *((uint32_t *)v20 + 1) = (uint32_t)(uintptr_t)(a2);
    v21 = (uint16_t *)gameswf::RefCounted::getWeakProxy(a2);
    v22 = *(gameswf::Self **)v20;
    if ( v21 != *(uint16_t **)v20 )
    {
      if ( v22 != nullptr )
      {
        v12 = (*(uint16_t *)v22)-- == 1;
        if ( v12 )
        {
          v27 = v21;
          gameswf::free_internal(v22);
          v21 = v27;
        }
      }
      *(uint32_t *)v20 = (uint32_t)(uintptr_t)(v21);
      if ( v21 != nullptr )
        ++*v21;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::Listener::remove  (binary VA: 0x118c220)
// Original: gameswf::Listener::remove
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::Listener::remove(gameswf::ASObject::Self **self, gameswf::ASObject::Self *a2)
{
  gameswf::Listener::Self *v2;
  gameswf::ASObject::Self *result;
  gameswf::ASObject::Self *v4;
  gameswf::Self **v5;
  gameswf::Self *v6;
  bool v7;
  int v8;
  gameswf::Listener::Self *v9;
  gameswf::Listener::Self *v10;
  gameswf::ASObject::Self *v11;

  v2 = (gameswf::Listener::Self *)self;
  result = *(self + 1);
  v11 = result;
  if ( (int)(uintptr_t)(result) > 0 )
  {
    v4 = nullptr;
    while ( 1 )
    {
      v5 = (gameswf::Self **)(*(uint32_t *)v2 + 8 * (uint32_t)(uintptr_t)(v4));
      result = (gameswf::ASObject::Self *)(v5[1]);
      if ( result == nullptr || (v6 = *v5, *((uint8_t *)*v5 + 2) != 0) )
      {
        if ( a2 == result )
          goto LABEL_10;
LABEL_4:
        v4 = (gameswf::ASObject::Self *)((char *)v4 + 1);
        if ( v4 == v11 )
          return result;
      }
      else
      {
        v7 = (*(uint16_t *)v6)-- == 1;
        if ( v7 )
        {
          v9 = v2;
          gameswf::free_internal(v6);
          v2 = v9;
        }
        result = nullptr;
        *v5 = nullptr;
        v5[1] = nullptr;
        if ( a2 != nullptr )
          goto LABEL_4;
LABEL_10:
        v8 = *(uint32_t *)v2 + 8 * (uint32_t)(uintptr_t)(v4);
        result = *(gameswf::ASObject::Self **)v8;
        *(uint32_t *)(v8 + 4) = 0;
        if ( result == nullptr )
          goto LABEL_4;
        v7 = (*(uint16_t *)result)-- == 1;
        if ( v7 )
        {
          v10 = v2;
          result = (gameswf::ASObject::Self *)gameswf::free_internal(result);
          v2 = v10;
        }
        v4 = (gameswf::ASObject::Self *)((char *)v4 + 1);
        *(uint32_t *)v8 = 0;
        if ( v4 == v11 )
          return result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Listener::opIndex  (binary VA: 0x118c320)
// Original: gameswf::Listener::operator[]
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::Listener::opIndex(gameswf::Listener::Self *self, int a2)
{
  gameswf::Self *result;
  gameswf::Listener::Self *v3;
  int v4;
  int v5;
  int v6;
  gameswf::Self **v7;
  gameswf::Self *v8;
  gameswf::Listener::Self *v10;
  int v11;

  result = nullptr;
  v3 = self;
  if ( a2 >= 0 )
  {
    v4 = *((uint32_t *)self + 1);
    v11 = v4;
    if ( a2 < v4 && v4 > 0 )
    {
      v5 = 0;
      v6 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = (gameswf::Self **)(*(uint32_t *)v3 + 8 * v5);
          result = v7[1];
          if ( result != nullptr )
            break;
LABEL_7:
          if ( ++v5 == v11 )
            return nullptr;
        }
        v8 = *v7;
        if ( *((uint8_t *)*v7 + 2) != 0 )
        {
          if ( v6 == a2 )
            return result;
          ++v6;
          goto LABEL_7;
        }
        if ( (*(uint16_t *)v8)-- == 1 )
        {
          v10 = v3;
          gameswf::free_internal(v8);
          v3 = v10;
        }
        ++v5;
        *v7 = nullptr;
        v7[1] = nullptr;
        if ( v5 == v11 )
          return nullptr;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Listener::opIndex  (binary VA: 0x118c3d0)
// Original: gameswf::Listener::operator[]
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::Listener::opIndex(gameswf::Listener::Self *self, const gameswf::StringI::Self *a2)
{
  const char *nptr;
  int v3;

  if ( *(uint8_t *)a2 == 0xFF )
    nptr = *((const char **)a2 + 3);
  else
    nptr = (char *)a2 + 1;
  v3 = atoi(nptr);
  return gameswf::Listener::opIndex(self, v3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Listener::size  (binary VA: 0x118c420)
// Original: gameswf::Listener::size
// ----------------------------------------------------------------------------
int gameswf::Listener::size(gameswf::Listener::Self *self)
{
  int v1;
  gameswf::Listener::Self *v2;
  int v3;
  gameswf::Self **v4;
  gameswf::Self *v5;
  int v8;
  gameswf::Listener::Self *v9;

  v1 = 0;
  v2 = self;
  if ( *((int *)self + 1) > 0 )
  {
    v3 = 0;
    v8 = *((uint32_t *)self + 1);
    while ( 1 )
    {
      v4 = (gameswf::Self **)(*(uint32_t *)v2 + 8 * v3);
      if ( v4[1] == nullptr )
        goto LABEL_4;
      v5 = *v4;
      if ( *((uint8_t *)*v4 + 2) != 0 )
      {
        ++v1;
LABEL_4:
        if ( ++v3 == v8 )
          return v1;
      }
      else
      {
        if ( (*(uint16_t *)v5)-- == 1 )
        {
          v9 = v2;
          gameswf::free_internal(v5);
          v2 = v9;
        }
        ++v3;
        *v4 = nullptr;
        v4[1] = nullptr;
        if ( v3 == v8 )
          return v1;
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Listener::enumerate  (binary VA: 0x118c4c0)
// Original: gameswf::Listener::enumerate
// ----------------------------------------------------------------------------
void gameswf::Listener::enumerate(gameswf::Listener::Self *self, gameswf::ASEnvironment::Self *a2)
{
  int v2;
  int v3;
  gameswf::Self **v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  char *v8;
  char *v9;
  int v10;
  int v12;
  int v13;
  gameswf::Self **v14;
  int v15;
  int v16;

  v16 = *((uint32_t *)self + 1);
  if ( v16 > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = (gameswf::Self **)(*(uint32_t *)self + 8 * v2);
      if ( v4[1] != nullptr )
      {
        v5 = *v4;
        if ( *((uint8_t *)*v4 + 2) != 0 )
        {
          v6 = *((uint32_t *)a2 + 1);
          v12 = *((uint32_t *)a2 + 2);
          v7 = v6 + 1;
          if ( v6 + 1 <= v12 || *((uint32_t *)a2 + 3) != 0 )
          {
            v8 = *(char **)a2;
          }
          else
          {
            v10 = v7 + (v7 >> 1);
            *((uint32_t *)a2 + 2) = v10;
            if ( v10 != 0 )
            {
              v15 = v6 + 1;
              if ( *(uint32_t *)a2 != 0 )
                v8 = (char *)gameswf::realloc_internal(*(gameswf::Self **)a2, 12 * v10, 12 * v12);
              else
                v8 = (char *)gameswf::malloc_internal(12 * v10);
              *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v8);
              v6 = *((uint32_t *)a2 + 1);
              v7 = v15;
            }
            else
            {
              if ( *(uint32_t *)a2 != 0 )
              {
                v13 = v6 + 1;
                gameswf::free_internal(*(gameswf::Self **)a2);
                v6 = *((uint32_t *)a2 + 1);
                v7 = v13;
              }
              *(uint32_t *)a2 = 0;
              v8 = nullptr;
            }
          }
          v9 = &v8[12 * v6];
          if ( v9 != nullptr )
          {
            *v9 = 2;
            v9[1] = 0;
            *(double *)(v9 + 4) = (double)v3;
          }
          *((uint32_t *)a2 + 1) = v7;
          ++v3;
        }
        else
        {
          if ( (*(uint16_t *)v5)-- == 1 )
          {
            v14 = v4;
            gameswf::free_internal(v5);
            v4 = v14;
          }
          *v4 = nullptr;
          v4[1] = nullptr;
        }
      }
      ++v2;
    }
    while ( v2 != v16 );
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::Listener::alive  (binary VA: 0x118c670)
// Original: gameswf::Listener::alive
// ----------------------------------------------------------------------------
void gameswf::Listener::alive(gameswf::Listener::Self *self)
{
  int v1;
  int v2;
  gameswf::Self **v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  void *v7;

  v1 = *((uint32_t *)self + 1);
  if ( v1 > 0 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = (gameswf::Self **)(*(uint32_t *)self + 8 * v2);
      v4 = v3[1];
      if ( v4 == nullptr )
        goto LABEL_4;
      v5 = *v3;
      if ( *((uint8_t *)*v3 + 2) != 0 )
      {
        (*(void (**)(gameswf::Self *, void *))(*(uint32_t *)v4 + 76))(v3[1], v7);
        v1 = *((uint32_t *)self + 1);
LABEL_4:
        if ( ++v2 >= v1 )
          return;
      }
      else
      {
        if ( (*(uint16_t *)v5)-- == 1 )
        {
          v7 = nullptr;
          gameswf::free_internal(v5);
        }
        *v3 = nullptr;
        v3[1] = nullptr;
        ++v2;
        v1 = *((uint32_t *)self + 1);
        if ( v2 >= v1 )
          return;
      }
    }
  }
}


